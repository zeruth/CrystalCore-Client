#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
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
uint F_007dc920(unsigned int gen_a0, unsigned int gen_a1)
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
  return (uint)in_ecx;
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
    iVar5 = 0;
    puVar11 = (*(uint * PTR32 *)&gen_args[7]);
    do {
      uVar4 = F_00ab20e0(iVar5 + 2);
      uVar9 = *(undefined4 *)(uVar4 + (uint)bVar1 * 4);
      *((undefined4 *)GEN_TOP((((*(int *)&gen_args[6]) - (int)(*(uint * PTR32 *)&gen_args[7])) + (int)puVar11))) = uVar9;
      uVar4 = F_00ab24a0(uVar9);
      *puVar11 = uVar4;
      if (uVar4 == 0) {
        (*((undefined1 *)GEN_TOP(((char *)&(*(uint * PTR32 *)&gen_args[2]) + 3)))) = 0;
      }
      iVar5 = iVar5 + 1;
      puVar11 = puVar11 + 1;
    } while (iVar5 < 0x18);
  }
  return (*((undefined1 *)GEN_TOP(((char *)&(*(uint * PTR32 *)&gen_args[2]) + 3))));
}

/* ref: FUN_007dcbf0 */
byte F_007dcbf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
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
  uint uVar5;
  uint uVar6;
  undefined * pvVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint * puVar11;
  int * piVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  
  (*(uint *)(gen_frame + 0x158)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x15c);
  uVar4 = F_007782c0(param_4);
  F_005a2710((undefined *)(param_1 + 0x30),3);
  *(uint *)(param_1 + 0x34) = uVar4;
  F_00c48350(((int *)(gen_frame + 0x30)),-1,0x128);
  bVar2 = 0;
  (*(byte *)(gen_frame + 0x27)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  if (0 < (int)uVar4) {
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = param_3;
    puVar11 = (uint *)(param_1 + 100);
    piVar12 = param_6;
    do {
      uVar5 = F_00778330(param_4,(*(int *)(gen_frame + 0x8)));
      if ((*(char *)((int)param_4 + 6) == '\0') || (uVar6 = F_00a3a860(param_4), uVar6 == 0)) {
        uVar3 = *((ushort *)GEN_TOP(((int)param_4 + (uVar5 & 0xff) * 2 + 0x20)));
      }
      else {
        uVar6 = uVar5;
        pvVar7 = (undefined *)F_00a3a860(param_4);
        uVar3 = F_0071d2c0(pvVar7,uVar6);
      }
      if (uVar3 != 0) {
        if ((*(char *)((int)param_4 + 6) == '\0') || (uVar6 = F_00a3a860(param_4), uVar6 == 0)) {
          bVar2 = *((byte *)GEN_TOP(((uVar5 & 0xff) + 0x2a + (int)param_4)));
        }
        else {
          uVar6 = uVar5;
          pvVar7 = (undefined *)F_00a3a860(param_4);
          bVar2 = F_0071d300(pvVar7,uVar6);
        }
        if (bVar2 != 0xffffffff) {
          if ((*(char *)((int)param_4 + 6) == '\0') || (uVar6 = F_00a3a860(param_4), uVar6 == 0))
          {
            (*(byte *)(gen_frame + 0x2f)) = *((byte *)GEN_TOP(((uVar5 & 0xff) + 0x2a + (int)param_4)));
          }
          else {
            pvVar7 = (undefined *)F_00a3a860(param_4);
            (*(byte *)(gen_frame + 0x2f)) = F_0071d300(pvVar7,uVar5);
          }
          puVar1 = ((undefined4 *)GEN_TOP(((int)piVar12 + (param_8 - (int)param_6))));
          uVar5 = F_00ab65a0(0,*((undefined4 *)GEN_TOP(((int)piVar12 + (param_8 - (int)param_6)))));
          F_005a2710(puVar11 + -0xb,3);
          pvVar7 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + (param_2 - (int)param_3))));
          uVar6 = (uint)(*(byte *)(gen_frame + 0x2f));
          puVar11[-10] = uVar5;
          uVar5 = F_00ab6240(*(undefined4 *)(*piVar12 + uVar6 * 4),1,*puVar1);
          F_0042e430(pvVar7,uVar5);
          uVar5 = F_0042a990(pvVar7);
          F_005a2710(puVar11 + -1,6);
          *puVar11 = uVar5;
          uVar5 = *((uint *)GEN_TOP(((int)puVar1 + (param_7 - param_8))));
          F_005a2710(puVar11 + 9,3);
          puVar11[10] = uVar5;
          (*(byte *)(gen_frame + 0x2f)) = *(byte *)(*piVar12 + 0x28);
          uVar5 = (uint)(*(byte *)(gen_frame + 0x2f));
          if (((int *)(gen_frame + 0x30))[(int)(uVar5)] == -1) {
            uVar8 = F_00a6ad20((uint)*(byte *)(*piVar12 + 0x28),param_5);
            uVar9 = F_00a3ba20(uVar5,param_4,0);
            (*(byte *)(gen_frame + 0x2f)) = *(byte *)(*piVar12 + 0x28);
            uVar5 = (uint)(*(byte *)(gen_frame + 0x2f));
            ((int *)(gen_frame + 0x30))[(int)(uVar5)] = uVar8 - uVar9;
          }
          if (((int *)(gen_frame + 0x30))[(int)(*(byte *)(*piVar12 + 0x28))] < (int)*(char *)(*piVar12 + 0x29 + uVar6)) {
            iVar10 = ((int *)(gen_frame + 0x30))[(int)(*(byte *)(*piVar12 + 0x28))];
            ((int *)(gen_frame + 0x30))[(int)(*(byte *)(*piVar12 + 0x28))] = 0;
          }
          else {
            iVar10 = (int)*(char *)(*piVar12 + 0x29 + uVar6);
            ((int *)(gen_frame + 0x30))[(int)(*(byte *)(*piVar12 + 0x28))] = ((int *)(gen_frame + 0x30))[(int)(*(byte *)(*piVar12 + 0x28))] - iVar10;
          }
          if ((*(byte *)(gen_frame + 0x2f)) != 0) {
            uVar14 = 1;
            uVar13 = 0x20f;
            iVar15 = iVar10;
            pvVar7 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))
                                       (*(int * PTR32 *)((int)this + 4))));
            uVar5 = F_00461d60(pvVar7,uVar13,uVar5,uVar14,iVar15);
            F_0042e430((*(undefined * PTR32 *)(gen_frame + 0x18)),uVar5);
          }
          uVar5 = F_0042a990((*(undefined * PTR32 *)(gen_frame + 0x18)));
          F_005a2710(puVar11 + 0x13,6);
          puVar11[0x14] = uVar5;
          if (iVar10 == *(char *)(uVar6 + 0x29 + *piVar12)) {
            F_005a2710(puVar11 + 0x1d,3);
            puVar11[0x1e] = 0;
          }
          else {
            F_005a2710(puVar11 + 0x1d,3);
            puVar11[0x1e] = 1;
            (*(byte *)(gen_frame + 0x27)) = 1;
          }
        }
      }
      (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x54);
      (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
      puVar11 = puVar11 + 2;
      piVar12 = piVar12 + 1;
      bVar2 = (*(byte *)(gen_frame + 0x27));
    } while ((*(int *)(gen_frame + 0x8)) < (int)uVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x158)) ^ (uint)(uint)(gen_frame + 0x15c));
  return bVar2;
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
byte F_007dd2d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
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
      uVar7 = F_00ab3c60(*(undefined4 *)(((undefined1 *)(gen_frame + 0x28)) + iVar8 * 4 + -4));
      if ((uVar7 != 0) && (uVar7 = F_00ab24a0(*(undefined4 *)(uVar7 + 4)), uVar7 == 0)) {
        bVar2 = false;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)((int)this + 0x28));
    if (!bVar2) {
      F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
      return 0;
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
  F_005a2710((undefined *)(param_2 + 0x38),3);
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
      if ((puVar6 != (uint *)0x0) && (uVar7 = F_00ab24a0(puVar6[1]), uVar7 != 0)) {
        uVar3 = F_00ab65a0(puVar6[1],uVar7);
        F_005a2710(puVar9 + -1,3);
        *puVar9 = uVar3;
        uVar3 = *puVar6;
        F_005a2710(puVar9 + 0x2f,4);
        puVar9[0x30] = uVar3;
        uVar7 = F_00ab6240(puVar6[1],1,uVar7);
        F_0042e430((*(undefined * PTR32 *)(gen_frame + 0x1c)),uVar7);
        uVar7 = F_0042a990((*(undefined * PTR32 *)(gen_frame + 0x1c)));
        F_005a2710(puVar9 + 0x5f,6);
        puVar9[0x60] = uVar7;
        uVar7 = puVar6[1];
        F_005a2710(puVar9 + 0x8f,4);
        puVar9[0x90] = uVar7;
      }
      (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x54);
      (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 1;
      puVar9 = puVar9 + 2;
    } while ((*(int *)(gen_frame + 0x20)) < *(int *)((int)this + 0x28));
  }
  F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
  return 1;
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
uint F_007dd7c0(unsigned int gen_a0, unsigned int gen_a1)
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
  return (uint)this;
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
uint F_007dd910(unsigned int gen_a0, unsigned int gen_a1)
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
  return (uint)in_ecx;
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
uint F_007dd980(unsigned int gen_a0, unsigned int gen_a1)
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
  return (uint)in_ecx;
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

/* ref: FUN_007ddbc0 */
uint F_007ddbc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x7ddbc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  int param_9 = (int)gen_a9;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  ((uint *)(gen_frame + 0xc))[3] = uVar2;
  iVar1 = *(int *)((int)this + 0xc);
  ((uint *)(gen_frame + 0xc))[0] = 0x1272;
  ((uint *)(gen_frame + 0xc))[1] = 0x1270;
  ((uint *)(gen_frame + 0xc))[2] = 0x1271;
  if ((iVar1 != 0) && ((byte)param_5 < 3)) {
    **(undefined4 * PTR32 *)((int)this + 0xc) = param_1;
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 4))) = param_2;
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc8c))) = param_4;
    *((byte *)GEN_TOP((*(int *)((int)this + 0xc) + 0xca4))) = (byte)param_5;
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc90))) = param_6;
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc94))) = param_7;
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc98))) = param_8;
    pvVar3 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
    if (pvVar3 == (undefined *)0x0) {
      uVar4 = F_0046ff40();
      uVar2 = (uint)(uVar4 / 1000);
    }
    else {
      uVar2 = F_00975680(pvVar3);
    }
    *((uint *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc9c))) = uVar2 + param_9;
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc88))) = param_3;
    uVar5 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc90)));
    uVar6 = 0x21;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = F_00462440(pvVar3,uVar5,uVar6);
    F_0042ccf0(((undefined *)GEN_TOP((*(int *)((int)this + 0xc) + 0xcfc))),uVar2);
    uVar2 = ((uint *)(gen_frame + 0xc))[(int)((byte)param_5)];
    uVar6 = 0;
    uVar5 = 0;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = F_0043bd00(pvVar3,uVar2,uVar5,uVar6);
    uVar2 = F_0042e430(((undefined *)GEN_TOP((*(int *)((int)this + 0xc) + 0xda4))),uVar2);
  }
  F_00c47745(((uint *)(gen_frame + 0xc))[3] ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: FUN_007ddd00 */
uint F_007ddd00(unsigned int gen_a0, unsigned int gen_a1)
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
  return (uint)this;
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
uint F_007de0d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7de0d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d496c));
  in_ecx[7] = 0;
  in_ecx[3] = 0;
  return (uint)in_ecx;
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
uint F_007de4e0(unsigned int gen_a0, unsigned int gen_a1)
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
  return (uint)in_ecx;
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

/* ref: FUN_007df380 */
uint F_007df380(unsigned int gen_a0)
{
  GEN_ENTER(0x7df380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc60];
  uint * puVar1;
  int iVar2;
  ushort * puVar3;
  int * piVar4;
  uint uVar5;
  undefined * pvVar6;
  uint uVar7;
  uint uVar8;
  undefined * this_00;
  undefined4 * puVar9;
  ushort uVar10;
  ushort * PTR32 * this_01;
  int iVar11;
  undefined1 * this_02;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  puVar3 = (ushort *)(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc5c));
  (*(ushort * PTR32 *)(gen_frame + 0xc58)) = puVar3;
  if ((*(int *)((int)this + 8) != 0) && (*(char *)((int)this + 0x3d0) != '\0')) {
    piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x24))(piVar4,0x24);
    piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4,0x21)));
    if ((uVar5 == 0) || (pvVar6 == (undefined *)0x0)) {
      *(undefined1 *)((int)this + 0x3d0) = 0;
      pvVar6 = F_00c48350((undefined *)((int)this + 0x3d4),0,400);
      F_00c47745((uint)(*(ushort * PTR32 *)(gen_frame + 0xc58)) ^ (uint)(uint)(gen_frame + 0xc5c));
      return (uint)pvVar6;
    }
    (*(ushort * PTR32 *)(gen_frame + 0x10)) = (ushort *)((int)this + 0x3d4);
    (*(ushort * PTR32 *)(gen_frame + 0x1c)) = (ushort *)((int)this + 0x572);
    *(undefined1 *)((int)this + 0x3d0) = 0;
    (*(int *)(gen_frame + 0xc)) = 0;
    iVar11 = 1;
    do {
      iVar2 = *(int *)(*(ushort * PTR32 *)(gen_frame + 0x10));
      puVar3 = (*(ushort * PTR32 *)(gen_frame + 0x10));
      if (iVar2 != 0) {
        uVar7 = F_00ab24a0(iVar2);
        if (uVar7 == 0) {
          if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + iVar11 * 4))) != 0) {
            *((undefined4 *)GEN_TOP((*(int *)(uVar5 + 0x20) + iVar11 * 4))) = 0;
            *(undefined1 *)(uVar5 + 0x1d) = 1;
          }
          if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 4 + iVar11 * 4))) != -1) {
            *((undefined4 *)GEN_TOP((*(int *)(uVar5 + 0x20) + 4 + iVar11 * 4))) = 0xffffffff;
            *(undefined1 *)(uVar5 + 0x1d) = 1;
          }
          F_00431250(pvVar6,iVar11,&REFG(undefined, 0x10be421),0,1,0);
          puVar3 = (ushort *)F_00431250(pvVar6,iVar11 + 1,&REFG(undefined, 0x10be422),0,1,0);
          *(undefined1 *)((int)this + 0x3d0) = 1;
        }
        else {
          if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + iVar11 * 4))) != iVar2) {
            *((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + iVar11 * 4))) = iVar2;
            *(undefined1 *)(uVar5 + 0x1d) = 1;
          }
          uVar8 = F_00ab65a0(iVar2,uVar7);
          puVar1 = ((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 4 + iVar11 * 4)));
          if (*puVar1 != uVar8) {
            *puVar1 = uVar8;
            *(undefined1 *)(uVar5 + 0x1d) = 1;
          }
          uVar14 = 0;
          uVar13 = 1;
          uVar12 = 0;
          uVar7 = F_00ab6240(iVar2,0,uVar7);
          F_00431250(pvVar6,iVar11,uVar7,uVar12,uVar13,uVar14);
          uVar10 = 0;
          if (((*(int *)((int)this + 0x20) != 0) &&
              (uVar7 = F_004356f0(*(int *)((int)this + 0x20),(*(int *)(gen_frame + 0xc))), uVar7 != 0)) &&
             (uVar10 = *(ushort *)(uVar7 + 4), 0x270e < uVar10)) {
            uVar10 = 9999;
          }
          uVar15 = 0;
          uVar14 = 1;
          uVar7 = (uint)uVar10;
          uVar13 = 0;
          uVar12 = 0x7ca;
          this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))
                                      (*(int * PTR32 *)((int)this + 4))));
          uVar7 = F_00461bb0(this_00,uVar12,uVar7);
          F_00431250(pvVar6,iVar11 + 1,uVar7,uVar13,uVar14,uVar15);
          *(*(ushort * PTR32 *)(gen_frame + 0x1c)) = uVar10;
          (*(ushort * PTR32 *)(gen_frame + 0x10))[0] = 0;
          (*(ushort * PTR32 *)(gen_frame + 0x10))[1] = 0;
          puVar3 = (*(ushort * PTR32 *)(gen_frame + 0x1c));
        }
      }
      (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
      (*(ushort * PTR32 *)(gen_frame + 0x10)) = (*(ushort * PTR32 *)(gen_frame + 0x10)) + 2;
      (*(ushort * PTR32 *)(gen_frame + 0x1c)) = (*(ushort * PTR32 *)(gen_frame + 0x1c)) + 6;
      iVar11 = iVar11 + 2;
    } while (iVar11 < 0xc9);
    if (*(char *)((int)this + 0x3d0) == '\0') {
      puVar3 = *(ushort * PTR32 *)((int)this + 0x564);
      **(undefined4 * PTR32 *)(uVar5 + 0x20) = puVar3;
      *(undefined1 *)(uVar5 + 0x1d) = 1;
      if (*(int *)((int)this + 8) != 0) {
        puVar9 = ((undefined4 *)(gen_frame + 0x20));
        iVar11 = 0x186;
        do {
          *puVar9 = 0;
          puVar9 = puVar9 + 2;
          iVar11 = iVar11 + -1;
        } while (-1 < iVar11);
        F_005a2710(((undefined4 *)(gen_frame + 0x20)),3);
        ((undefined4 *)(gen_frame + 0x20))[1] = 0x20;
        if (*(char *)((int)this + 0x3d1) != '\0') {
          F_005a2710(((undefined4 *)(gen_frame + 0x20)),3);
          uVar10 = *(ushort *)((int)this + 0x1088);
          ((undefined4 *)(gen_frame + 0x20))[1] = 0x30;
          F_005a2710(((undefined1 *)(gen_frame + 0xc50)),4);
          (*(uint *)(gen_frame + 0xc54)) = (uint)uVar10;
          if (*(short *)((int)this + 0x1088) != 0) {
            (*(ushort * PTR32 *)(gen_frame + 0x1c)) = (ushort *)((int)this + 0x1024);
            this_02 = ((undefined1 *)(gen_frame + 0xac0));
            uVar7 = 0;
            do {
              uVar8 = F_0077b380(this,(uint)*(*(ushort * PTR32 *)(gen_frame + 0x1c)));
              F_005a2710(this_02,6);
              uVar10 = *(ushort *)((int)this + 0x1088);
              (*(ushort * PTR32 *)(gen_frame + 0x1c)) = (*(ushort * PTR32 *)(gen_frame + 0x1c)) + 1;
              *(uint *)(this_02 + 4) = uVar8;
              uVar7 = uVar7 + 1;
              this_02 = this_02 + 8;
            } while (uVar7 < uVar10);
          }
        }
        uVar7 = 0;
        if (*(int *)((int)this + 0x564) != 0) {
          uVar8 = 0;
          do {
            uVar10 = *((ushort *)GEN_TOP(((int)this + (uVar8 * 3 + 0x15c) * 4)));
            F_005a2710(((undefined1 *)(gen_frame + 0x798)) + uVar8 * 8,4);
            uVar7 = uVar7 + 1;
            ((uint *)(gen_frame + 0x79c))[(int)(uVar8 * 2)] = (uint)uVar10;
            uVar8 = uVar7 & 0xffff;
          } while (uVar8 < *(uint *)((int)this + 0x564));
        }
        uVar12 = *(undefined4 *)((int)this + 0x564);
        F_005a2710(((undefined1 *)(gen_frame + 0xab8)),4);
        (*(undefined4 *)(gen_frame + 0xabc)) = uVar12;
        piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
        ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 8),0x187,((undefined4 *)(gen_frame + 0x20)));
        uVar7 = 0;
        if (*(int *)((int)this + 0x564) != 0) {
          puVar9 = (undefined4 *)((int)this + 0x568);
          do {
            *(short *)(puVar9 + 2) = (short)uVar7;
            *puVar9 = *((undefined4 *)GEN_TOP((*(int *)(uVar5 + 0x20) + 4 + uVar7 * 8)));
            uVar7 = uVar7 + 1;
            puVar9 = puVar9 + 3;
          } while (uVar7 < *(uint *)((int)this + 0x564));
        }
        this_01 = &(*(ushort * PTR32 *)(gen_frame + 0xc58));
        iVar11 = 0x186;
        do {
          this_01 = this_01 + -2;
          puVar3 = (ushort *)F_005a2670(this_01);
          iVar11 = iVar11 + -1;
        } while (-1 < iVar11);
      }
    }
  }
  F_00c47745((uint)(*(ushort * PTR32 *)(gen_frame + 0xc58)) ^ (uint)(uint)(gen_frame + 0xc5c));
  return (uint)puVar3;
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
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  (*(uint *)(gen_frame + 0x8)) = param_6;
  uVar4 = param_6;
  if (*(int *)((int)this + 0x20) == 0) goto LAB_007dfb63;
  *(undefined2 *)((int)this + 0xb40) = 0;
  F_00c48350((undefined *)((int)this + 0xb44),0,600);
  if (param_1 < 0) {
    F_0042cc20(((char * PTR32 *)(gen_frame + 0x64)),param_2,REFG(undefined4, 0x108cc50));
    uVar4 = F_0042b790(((char * PTR32 *)(gen_frame + 0x64)));
    if (0x28 < uVar4) {
      uVar4 = F_0042d2f0(((char * PTR32 *)(gen_frame + 0x64)),((undefined1 *)(gen_frame + 0x10)),0,0x28);
      F_0042ccf0(((char * PTR32 *)(gen_frame + 0x64)),uVar4);
      F_0042c880(((undefined1 *)(gen_frame + 0x10)));
    }
    if (*((char * PTR32 *)(gen_frame + 0x64))[0] != '\0') {
      F_0077aec0(this,1);
      uVar4 = F_0042a990(((char * PTR32 *)(gen_frame + 0x64)));
      F_00435810(*(undefined * PTR32 *)((int)this + 0x20),uVar4);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x20) + 0x10))))(*(int * PTR32 *)((int)this + 0x20));
    }
    F_0042c880(((char * PTR32 *)(gen_frame + 0x64)));
  }
  else {
    uVar4 = F_0077b260(this,param_1,((undefined1 *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0xc)));
    if (uVar4 != 0) {
      F_0077aec0(this,1);
      uVar3 = (*(uint *)(gen_frame + 0xc));
      iVar2 = param_1 >> 0x1f;
      iVar6 = param_1 / 0x18 + iVar2;
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 0)) = 0;
      (*(uint *)(gen_frame + 0xc)) = uVar3 & 0xffffff00;
      if (iVar6 == iVar2) {
        uVar9 = 0;
        uVar8 = param_4;
LAB_007dfaab: ;
        uVar7 = 1;
      }
      else {
        if (iVar6 - iVar2 == 1) {
          uVar8 = param_5;
          uVar9 = (*(uint *)(gen_frame + 0xc));
          if ((-1 < (int)(*(uint *)(gen_frame + 0x8))) && ((int)(*(uint *)(gen_frame + 0x8)) < *(int *)((int)this + 0xa54))) {
            uVar1 = *(undefined1 *)((int)this + (*(uint *)(gen_frame + 0x8)) * 8 + 0xa58);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 0)) = uVar1;
            uVar9 = CONCAT31((int3)(uVar3 >> 8),uVar1);
            (*(uint *)(gen_frame + 0xc)) = uVar9;
          }
          goto LAB_007dfaab;
        }
        uVar9 = 0;
        uVar8 = 0;
        uVar7 = 0;
      }
      F_004357e0(*(undefined * PTR32 *)((int)this + 0x20),uVar4,uVar7,uVar8,uVar9);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x20) + 0x10))))(*(int * PTR32 *)((int)this + 0x20));
    }
  }
  F_0077b450(this,param_1);
  uVar4 = 0;
  puVar5 = (undefined4 *)((int)this + 0x568);
  do {
    *(short *)(puVar5 + 2) = (short)uVar4;
    *puVar5 = 0;
    uVar4 = uVar4 + 1;
    puVar5 = puVar5 + 3;
  } while (uVar4 < 100);
LAB_007dfb63: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return uVar4;
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
uint F_007dfce0(unsigned int gen_a0, unsigned int gen_a1)
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
  return (uint)in_ecx;
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
uint F_007e0610(unsigned int gen_a0)
{
  GEN_ENTER(0x7e0610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  uVar1 = *(uint *)(uVar1 + 0x28);
  if ((((*(int *)((int)this + 200) != 0) && (*(int *)((int)this + 0xd4) != 0)) &&
      (*(int *)((int)this + 0xe0) != 0)) &&
     ((*(int *)((int)this + 0xec) != 0 && (*(int *)((int)this + 0xf8) != 0)))) {
    *(undefined4 *)(uVar1 + 0x1d0) = 0;
    *(undefined4 *)(uVar1 + 0x1d4) = 0;
    *(undefined1 *)(uVar1 + 0x1dc) = 0;
    *(undefined4 *)(uVar1 + 0x1d8) = 0;
    return uVar1;
  }
  *(undefined4 *)(uVar1 + 0x1d0) = 0x5e;
  *(int *)(uVar1 + 0x1d4) = (int)this + 0xc;
  *(undefined1 *)(uVar1 + 0x1dc) = 1;
  *(undefined4 *)(uVar1 + 0x1d8) = 0;
  return uVar1;
}

/* ref: FUN_007e0690 */
uint F_007e0690(unsigned int gen_a0, unsigned int gen_a1)
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
  return (uint)in_ecx;
}

/* ref: FUN_007e06d0 */
byte F_007e06d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e06d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  code * pcVar1;
  byte bVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined * this_00;
  int * piVar5;
  int iVar6;
  undefined4 * in_ecx;
  undefined4 uVar7;
  
  if (*(int *)((int)this + 0x18) == 0) {
    uVar7 = 0;
    uVar3 = F_00404270();
    puVar4 = (undefined4 *)F_00406c00(0x1a8,0,uVar3,uVar7);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = 5;
      puVar4 = puVar4 + 1;
      iVar6 = 4;
      in_ecx = puVar4;
      do {
        F_0042b630(in_ecx);
        in_ecx = in_ecx + 0x15;
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
    }
    *(undefined4 * PTR32 *)((int)this + 0x18) = puVar4;
  }
  uVar7 = 6;
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
  this_00 = (undefined *)F_00435440(uVar3,uVar7);
  *(undefined * PTR32 *)((int)this + 0xc) = this_00;
  if ((this_00 != (undefined *)0x0) && (bVar2 = F_00444300(this_00,param_1), bVar2 != 0)) {
    if ((*(int *)((int)this + 0x10) != param_1) && (*(int *)((int)this + 0x20) != 0)) {
      piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar5 + 0x54))(piVar5,*(undefined4 *)((int)this + 0x20),0);
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
    iVar9 = *((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 4)));
    (*(byte * PTR32 *)(gen_frame + 0x2c)) = (byte *)(param_2 + 0x1a);
    (*(int *)(gen_frame + 0x28)) = iVar9;
    (*(int *)(gen_frame + 0x24)) = iVar9 * 4 + 8;
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
        iVar7 = -1;
        iVar9 = -1;
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
        uVar4 = F_00462750(*(undefined * PTR32 *)((int)this + 0x10),*(undefined4 *)((*(byte * PTR32 *)(gen_frame + 0x2c)) + -10),uVar4,2);
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
      iVar9 = (*(int *)(gen_frame + 0x1c)) + -1;
      (*(int *)(gen_frame + 0x1c)) = iVar9;
    } while (iVar9 != 0);
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

/* ref: FUN_007e20a0 */
unsigned int F_007e20a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x7e20a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  longlong lVar1;
  int * piVar2;
  undefined * pvVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  if (param_1 != 0) {
    uVar5 = 0;
    uVar7 = 0x400;
    if ((*(uint *)(param_1 + 8) & 0xfffff9ff) != 0 || *(int *)(param_1 + 0xc) != 0) {
      uVar7 = 0;
      uVar5 = 8;
    }
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    if (piVar2 != (int *)0x0) {
      uVar11 = 0xb;
      pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2)));
      F_00435480(pvVar3,uVar11);
    }
    iVar6 = 0;
    iVar4 = 9;
    do {
      lVar1 = ((ulonglong)(((ulonglong)(byte)iVar4 < 0x40) ? ((1L << (ulonglong)(byte)iVar4)) : 0));
      if (((uint)lVar1 & uVar7) != 0 || ((uint)((ulonglong)lVar1 >> 0x20) & uVar5) != 0) {
        uVar5 = (uint)(byte)(&REFG(undefined1, 0x10bf780))[(int)(iVar6 * 4)];
        goto LAB_007e2137;
      }
      iVar4 = (&REFG(undefined4, 0x10bf784))[(int)(iVar6)];
      iVar6 = iVar6 + 1;
    } while (iVar4 != -1);
    uVar5 = 10;
LAB_007e2137: ;
    uVar5 = F_00ab3bd0(uVar5);
    if (uVar5 == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = *(int *)(uVar5 + 4);
    }
    piVar2 = ((int *)GEN_TOP((*(int *)(param_2 + 0x20) + param_4 * 4)));
    if (*piVar2 != iVar4) {
      *piVar2 = iVar4;
      *(undefined1 *)(param_2 + 0x1d) = 1;
    }
    uVar13 = 0;
    uVar12 = 1;
    uVar11 = 0;
    if (*(char *)(param_1 + 0x14) == '\0') {
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0x3c4;
      pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      uVar5 = F_0043bd00(pvVar3,uVar8,uVar9,uVar10);
      F_00431250(param_3,param_5,uVar5,uVar11,uVar12,uVar13);
      return 0;
    }
    F_00431250(param_3,param_5,param_1 + 0x14,0,1,0);
  }
  return 0;
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

/* ref: FUN_007e2600 */
uint F_007e2600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e2600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  byte bVar1;
  byte bVar2;
  undefined * pvVar3;
  undefined * this_00;
  undefined * this_01;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int * piVar7;
  uint * puVar8;
  int iVar9;
  int * this_02;
  int iVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  bVar2 = *(byte *)((int)this + 0x1d);
  local_10 = 0;
  bVar11 = false;
  if ((*(undefined * PTR32 *)((int)this + 0x18) != (undefined *)0x0) &&
     ((bVar1 = F_00441290(*(undefined * PTR32 *)((int)this + 0x18),
                            (uint)(byte)(&REFG(undefined1, 0x10c0596))[(int)((uint)bVar2 * 3)]), bVar1 != 0 ||
      (bVar1 = F_00441290(*(undefined * PTR32 *)((int)this + 0x18),
                            (uint)(byte)(&REFG(undefined1, 0x10c0595))[(int)((uint)*(byte *)((int)this + 0x1d) * 3)]),
      bVar1 != 0)))) {
    bVar11 = true;
  }
  pvVar3 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),bVar2 + 20000);
  if ((pvVar3 == (undefined *)0x0) || (!bVar11)) {
    iVar10 = 0;
    iVar9 = 0xc;
    do {
      if (*(int *)(iVar9 + -0xc + param_1[8]) != -1) {
        *(undefined4 *)(iVar9 + -0xc + param_1[8]) = 0xffffffff;
        *(undefined1 *)((int)param_1 + 0x1d) = 1;
      }
      if (*(int *)(iVar9 + -4 + param_1[8]) != 0) {
        *(undefined4 *)(iVar9 + -4 + param_1[8]) = 0;
        *(undefined1 *)((int)param_1 + 0x1d) = 1;
      }
      if (*(int *)(param_1[8] + iVar9) != 0) {
        *(undefined4 *)(param_1[8] + iVar9) = 0;
        *(undefined1 *)((int)param_1 + 0x1d) = 1;
      }
      if (*(int *)(iVar9 + 4 + param_1[8]) != 0) {
        *(undefined4 *)(iVar9 + 4 + param_1[8]) = 0;
        *(undefined1 *)((int)param_1 + 0x1d) = 1;
      }
      if (*((char * PTR32 *)GEN_TOP((*(int *)((int)param_2 + 0x20) + iVar10))) != "") {
        *((char * PTR32 *)GEN_TOP((*(int *)((int)param_2 + 0x20) + iVar10))) = "";
        *(undefined1 *)((int)param_2 + 0x1d) = 1;
      }
      iVar10 = iVar10 + 4;
      iVar9 = iVar9 + 0x14;
    } while (iVar10 < 200);
    iVar9 = 0;
    puVar8 = param_1;
  }
  else {
    local_18 = 0;
    local_2c = 0xc;
    this_02 = (int *)((int)this + 0x20);
    do {
      uVar5 = 0;
      local_c = -1;
      local_1c = 0;
      local_20 = 0;
      local_24 = 0;
      bVar11 = false;
      local_14 = 0;
      local_28 = 0;
      this_00 = (undefined *)F_00a37da0(pvVar3,local_18);
      if ((this_00 == (undefined *)0x0) ||
         ((*(char *)((int)this_00 + 6) == '\0' && (*(int *)((int)this_00 + 8) == 0)))) {
        ((code *)*(gen_code32 *)(*this_02 + 4))(this_02);
      }
      else {
        local_10 = local_10 + 1;
        if (*(char *)((int)this_00 + 6) == '\0') {
          uVar4 = *(uint *)((int)this_00 + 8);
          if ((*(byte *)((int)this_00 + 0x14) & 1) != 0) {
            uVar4 = uVar4 + 1000000;
          }
        }
        else {
          this_01 = (undefined *)F_00a3a860(this_00);
          uVar4 = F_0046e5e0(this_01);
        }
        uVar5 = F_00a37c50(this_00);
        uVar5 = (uint)(uVar5 != 0);
        local_1c = F_00a3a8a0(this_00);
        if (this_02[0x16] != uVar4) {
          ((code *)*(gen_code32 *)(*this_02 + 4))(this_02);
          uVar6 = F_00ab24a0(uVar4);
          if (uVar6 != 0) {
            ((code *)*(gen_code32 *)(*this_02 + 8))(this_02,uVar4,uVar6);
          }
        }
        local_20 = (uint)*(byte *)(this_02 + 0x19);
        local_c = this_02[0x17];
        local_28 = F_0042a990(this_02 + 1);
        local_24 = F_00760640((uint)*(byte *)(this_02 + 0x19),this_00,this_02[0x18]);
        bVar11 = *(char *)((int)this_02 + 0x65) != '\0';
        if (bVar11) {
          bVar2 = F_00760e50(this_02,this_00);
          piVar7 = (int *)F_00ab3c60((uint)bVar2);
          if (piVar7 == (int *)0x0) {
            local_14 = 0;
          }
          else {
            local_14 = *piVar7;
          }
        }
      }
      if (*((int *)GEN_TOP(((param_1[8] - 0xc) + local_2c))) != local_c) {
        *((int *)GEN_TOP(((param_1[8] - 0xc) + local_2c))) = local_c;
        *(undefined1 *)((int)param_1 + 0x1d) = 1;
      }
      uVar4 = local_1c << 0x10 | local_20;
      puVar8 = ((uint *)GEN_TOP(((param_1[8] - 4) + local_2c)));
      if (*puVar8 != uVar4) {
        *puVar8 = uVar4;
        *(undefined1 *)((int)param_1 + 0x1d) = 1;
      }
      uVar5 = uVar5 << 8 | local_24 & 0xff;
      if (*(uint *)(param_1[8] + local_2c) != uVar5) {
        *(uint *)(param_1[8] + local_2c) = uVar5;
        *(undefined1 *)((int)param_1 + 0x1d) = 1;
      }
      uVar5 = (uint)bVar11 | local_14 * 2;
      if (*(uint *)(param_1[8] + 4 + local_2c) != uVar5) {
        *(uint *)(param_1[8] + 4 + local_2c) = uVar5;
        *(undefined1 *)((int)param_1 + 0x1d) = 1;
      }
      puVar8 = ((uint *)GEN_TOP((*(int *)((int)param_2 + 0x20) + local_18 * 4)));
      if (local_28 != *((uint *)GEN_TOP((*(int *)((int)param_2 + 0x20) + local_18 * 4)))) {
        *puVar8 = local_28;
        *(undefined1 *)((int)param_2 + 0x1d) = 1;
      }
      local_18 = local_18 + 1;
      local_2c = local_2c + 0x14;
      this_02 = this_02 + 0x1a;
      iVar9 = local_10;
    } while (local_18 < 0x32);
  }
  if (*(int *)((int)this + 0x1470) != iVar9) {
    uVar16 = 0;
    uVar15 = 1;
    uVar14 = 0;
    uVar13 = 0x32;
    uVar12 = 0x7fc;
    iVar10 = iVar9;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar5 = F_00461c60(pvVar3,uVar12,iVar10,uVar13);
    puVar8 = (uint *)F_00431250(param_2,0x32,uVar5,uVar14,uVar15,uVar16);
    *(int *)((int)this + 0x1470) = iVar9;
  }
  return (uint)puVar8;
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
      uVar4 = F_0077f0b0(this);
    }
    else {
      uVar4 = 0;
    }
    F_005a2710(((undefined1 *)(gen_frame + 0x28)),4);
    (*(uint *)(gen_frame + 0x2c)) = uVar4;
    if ((char)param_1 == '\0') {
      uVar4 = F_0077f140(this);
    }
    else {
      uVar4 = 0;
    }
    F_005a2710(((undefined1 *)(gen_frame + 0x30)),4);
    (*(uint *)(gen_frame + 0x34)) = uVar4;
    if ((char)param_1 == '\0') {
      uVar4 = F_0077f190(this);
    }
    else {
      uVar4 = 0;
    }
    F_005a2710(((undefined1 *)(gen_frame + 0x38)),4);
    (*(uint *)(gen_frame + 0x3c)) = uVar4;
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
uint F_007e2bd0(unsigned int gen_a0, unsigned int gen_a1)
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
  return (uint)in_ecx;
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
uint F_007e32e0(unsigned int gen_a0)
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
  uVar5 = 0;
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
    uVar5 = *(uint *)(uVar4 + 0x20);
    if (*(int *)(uVar5 + 0x18) != iVar1) {
      *(int *)(uVar5 + 0x18) = iVar1;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
  }
  return uVar5;
}

/* ref: FUN_007e33f0 */
uint F_007e33f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e33f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte * pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  F_00560070(&(*(undefined4 *)(gen_frame + 0x8)));
  uVar9 = F_0046ff40();
  uVar6 = (uint)uVar9 << 0xb ^ (uint)uVar9;
  uVar6 = uVar6 >> 8 ^ uVar6;
  F_0056bb40(&(*(undefined4 *)(gen_frame + 0x8)),(uint)((byte)uVar6 & 0x3f));
  uVar2 = uVar6 >> 0x13 ^ uVar6;
  (*(uint *)(gen_frame + 0x10)) = uVar2;
  (*(uint *)(gen_frame + 0x18)) = uVar6 >> 0x13 ^ uVar2;
  F_0056bc40(&(*(undefined4 *)(gen_frame + 0x8)),(uint)((byte)uVar2 & 0xf));
  F_0056bc80(&(*(undefined4 *)(gen_frame + 0x8)),(uint)((byte)(*(uint *)(gen_frame + 0x18)) & 0xf));
  uVar2 = (*(uint *)(gen_frame + 0x18)) >> 0x13 ^ (*(uint *)(gen_frame + 0x18));
  (*(uint *)(gen_frame + 0x18)) = uVar2;
  F_0056bb80(&(*(undefined4 *)(gen_frame + 0x8)),(uint)((byte)uVar2 & 0x3f));
  uVar2 = F_00ab04b0();
  uVar6 = uVar6 << 0xb ^ uVar6;
  uVar6 = ((*(uint *)(gen_frame + 0x18)) >> 0xb ^ uVar6) >> 8 ^ (*(uint *)(gen_frame + 0x18)) ^ uVar6;
  (*(uint *)(gen_frame + 0x14)) = uVar2;
  uVar2 = uVar6 % (uVar2 - 2);
  if ((*(int *)((int)this + 0x24) != 0) &&
     (bVar1 = F_00436870(*(int *)((int)this + 0x24)), bVar1 != 1)) {
    if (bVar1 == 2) {
      uVar3 = 1;
      goto LAB_007e34c9;
    }
    if (bVar1 == 3) {
      uVar3 = 2;
      goto LAB_007e34c9;
    }
  }
  uVar3 = 0;
LAB_007e34c9: ;
  uVar8 = uVar3;
  if (uVar2 != 0) {
    uVar7 = 0;
    uVar4 = 0;
    if ((*(uint *)(gen_frame + 0x14)) != 0) {
      do {
        if (2 < uVar4) {
          uVar7 = uVar7 + 1;
        }
        uVar8 = uVar4;
      } while ((uVar7 != uVar2) && (uVar4 = uVar4 + 1, uVar8 = uVar3, uVar4 < (*(uint *)(gen_frame + 0x14))));
    }
  }
  F_0056bb00(&(*(undefined4 *)(gen_frame + 0x8)),uVar8);
  pbVar5 = (byte *)F_00ab4250(uVar8);
  if (pbVar5 != (byte *)0x0) {
    uVar2 = (*(uint *)(gen_frame + 0x10)) << 0xb ^ (*(uint *)(gen_frame + 0x10));
    F_0056bbc0(&(*(undefined4 *)(gen_frame + 0x8)),((uVar6 >> 0xb ^ uVar2) >> 8 ^ uVar2 ^ uVar6) % (uint)*pbVar5);
  }
  *param_1 = (*(undefined4 *)(gen_frame + 0x8));
  param_1[1] = (*(undefined4 *)(gen_frame + 0xc));
  return (uint)param_1;
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
  uVar1 = F_00780040(this);
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
    iVar2 = *(int *)((int)this + 0x1fc0);
    ((uint *)(gen_frame + 0x4))[0] = 0x2c9;
    ((uint *)(gen_frame + 0x4))[1] = 0x2cb;
    ((uint *)(gen_frame + 0x4))[2] = 0x2de;
    ((uint *)(gen_frame + 0x4))[3] = 0x2d2;
    ((uint *)(gen_frame + 0x4))[4] = 700;
    uVar1 = ((uint *)(gen_frame + 0x4))[(int)(iVar2)];
    if (REFG(void * PTR32, 0x148a44c) != (undefined *)0x0) {
      F_00aa0560(REFG(void * PTR32, 0x148a44c),3);
      F_00aa4270(REFG(void * PTR32, 0x148a44c),uVar1,0,0);
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
  uVar4 = 0;
  local_c = (uint *)(param_2 + 0x54);
  local_8 = 0;
  uVar6 = 0;
  uVar3 = 0;
  do {
    if (*param_1 == 0) {
      return 0;
    }
    uVar2 = uVar2 << 0xb ^ uVar2;
    uVar7 = uVar6 ^ (uVar6 >> 0xb ^ uVar2) >> 8 ^ uVar2;
    uVar5 = uVar7 % (uint)*(byte *)((int)param_1 + 0xee);
    uVar1 = *param_1;
    uVar8 = uVar7;
    uVar2 = uVar4;
    uVar9 = uVar4;
    local_20 = uVar7;
    if (uVar1 < 0xfa) {
      if (uVar1 == 0xf9) {
        uVar3 = uVar3 << 0xb ^ uVar3;
        uVar8 = uVar7 ^ (uVar7 >> 0xb ^ uVar3) >> 8 ^ uVar3;
        uVar9 = uVar6;
        if ((uVar8 & 1) != 0) {
          uVar5 = uVar5 | 0x80;
        }
      }
      else {
        if (uVar1 == 0xec) {
          uVar3 = uVar3 << 0xb ^ uVar3;
          uVar3 = uVar7 ^ (uVar7 >> 0xb ^ uVar3) >> 8 ^ uVar3;
        }
        else {
          if (uVar1 != 0xf5) {
            uVar2 = uVar3;
            local_20 = uVar6;
            if (uVar1 == 0xf8) {
              uVar3 = uVar3 << 0xb ^ uVar3;
              uVar3 = uVar7 ^ (uVar7 >> 0xb ^ uVar3) >> 8 ^ uVar3;
              if ((uVar3 & 1) == 0) {
                uVar5 = 0;
                uVar8 = uVar3;
                uVar2 = uVar4;
                uVar9 = uVar6;
                local_20 = uVar7;
              }
              else {
                uVar4 = uVar4 << 0xb ^ uVar4;
                uVar8 = uVar3 ^ (uVar3 >> 0xb ^ uVar4) >> 8 ^ uVar4;
                if ((uVar8 & 1) != 0) {
                  uVar5 = uVar5 + 0x80;
                }
                uVar5 = uVar5 | 0x100;
                uVar2 = uVar6;
                uVar9 = uVar7;
                local_20 = uVar3;
              }
            }
            goto LAB_007e4435;
          }
          uVar3 = uVar3 << 0xb ^ uVar3;
          uVar3 = uVar7 ^ (uVar7 >> 0xb ^ uVar3) >> 8 ^ uVar3;
        }
        uVar8 = uVar3;
        uVar9 = uVar6;
        if ((uVar3 & 1) != 0) {
          uVar4 = uVar4 << 0xb ^ uVar4;
          uVar8 = uVar3 ^ (uVar3 >> 0xb ^ uVar4) >> 8 ^ uVar4;
          uVar5 = ((uVar8 % 1000) % (uint)*(byte *)((int)param_1 + 0xee) | 0x100) << 0x10 | uVar5;
          uVar2 = uVar6;
          uVar9 = uVar7;
          local_20 = uVar3;
        }
      }
    }
    else if (uVar1 < 0x6ce) {
      if (uVar1 < 0x6cc) {
        uVar2 = uVar3;
        local_20 = uVar6;
        if ((uVar1 == 0xfa) &&
           (uVar3 = uVar3 << 0xb ^ uVar3, uVar8 = uVar7 ^ (uVar7 >> 0xb ^ uVar3) >> 8 ^ uVar3,
           uVar2 = uVar4, uVar9 = uVar6, local_20 = uVar7, (uVar8 & 1) != 0)) {
          uVar5 = uVar5 + 0x80;
        }
      }
      else {
        uVar3 = uVar3 << 0xb ^ uVar3;
        uVar8 = uVar7 ^ (uVar7 >> 0xb ^ uVar3) >> 8 ^ uVar3;
        uVar5 = uVar8 & 0x1f;
        uVar9 = uVar6;
      }
    }
    else {
      uVar2 = uVar3;
      local_20 = uVar6;
      if (uVar1 - 0x6ce < 2) {
        uVar3 = uVar3 << 0xb ^ uVar3;
        uVar8 = uVar7 ^ (uVar7 >> 0xb ^ uVar3) >> 8 ^ uVar3;
        uVar5 = uVar8 & 3;
        uVar2 = uVar4;
        uVar9 = uVar6;
        local_20 = uVar7;
      }
    }
LAB_007e4435: ;
    *local_c = uVar5;
    F_007808b0(local_8,param_2,param_1,uVar5);
    local_c = local_c + 1;
    param_1 = param_1 + 0x3c;
    local_8 = local_8 + 1;
    uVar4 = local_20;
    uVar6 = uVar8;
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
    if (REFG(void * PTR32, 0x148a44c) != (undefined *)0x0) {
      uVar4 = *((byte *)GEN_TOP(((int)REFG(void * PTR32, 0x148a44c) + 0x2dbc))) - 1 & 0x80000001;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
      }
      pAVar5 = this + ((uint)*((byte *)GEN_TOP(((int)REFG(void * PTR32, 0x148a44c) + 0x2db9))) +
                      ((uVar4 & 0xff) + (uint)(byte)(*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x148a44c) + 0x2db8))) - 1) * 2)
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
    if (REFG(void * PTR32, 0x148a44c) != (undefined *)0x0) {
      F_00aa0560(REFG(void * PTR32, 0x148a44c),3);
      pAVar3 = (undefined *)F_00aa4270(REFG(void * PTR32, 0x148a44c),0x2ca,0,0);
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

/* ref: Client::UI2::Agent::AgentLobby::BeginLogout */
uint F_007e4b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e4b80u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
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
  
  if ((*(undefined * PTR32 *)&gen_args[0])[0x6ce] == (undefined1)0x0) {
    (*(undefined * PTR32 *)&gen_args[0])[0x6ce] = (undefined1)0x1;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))));
    if (*(char *)(uVar2 + 4) != '\0') {
      puVar4 = (undefined4 *)(uVar2 + 0xc);
      iVar3 = 0x65;
      do {
        ((code *)*(gen_code32 *)(*(int *)*puVar4 + 0x34))((int *)*puVar4,2);
        puVar4 = puVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))));
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
    (*(undefined * PTR32 *)&gen_args[0])[0x6cd] = (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 0));
    *((undefined2 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x6c8))) = 0;
    (*(undefined * PTR32 *)&gen_args[0])[0x6bc] = (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[2]) + 0));
    F_0049b7d0(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f4),1,fVar1,REFG(undefined4, 0x1302e44),REFG(undefined4, 0x1302e48),
                 REFG(undefined4, 0x1302e4c),REFG(undefined4, 0x1302e50));
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 1;
    uVar6 = 0x3c;
    uVar5 = 0;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))))));
    F_0075ec30(this_00,uVar5,uVar6,uVar7,uVar8,uVar9);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))));
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(uVar2 + 0x23330) + 0x4c))))((int *)(uVar2 + 0x23330),0x3e,0,0);
    in_EAX = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))),0x1fe,0);
    (*(undefined * PTR32 *)&gen_args[0])[0x68f] = (undefined1)0x12;
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
byte F_007e4d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7e4d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  byte bVar2;
  byte * pbVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  ((uint *)(gen_frame + 0x8))[0xc] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  iVar5 = *param_1;
  if ((iVar5 == 0) || ((*(int *)(iVar5 + 0xc) == 0 && (*(int *)(iVar5 + 8) == 0)))) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c) ^ (uint)(uint)(gen_frame + 0x3c));
    return 0;
  }
  uVar4 = F_00e3be40(iVar5);
  if ((uVar4 == 0) || (*(char *)(uVar4 + 0x56) == '\0')) {
    F_00c47745(((uint *)(gen_frame + 0x8))[0xc] ^ (uint)(uint)(gen_frame + 0x3c));
    return 0;
  }
  iVar5 = 0;
  do {
    param_2[iVar5] = *(byte *)(uVar4 + 0x56 + iVar5);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x1a);
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
    return 1;
  }
  bVar1 = *param_2;
  bVar2 = param_2[1];
  pbVar3 = param_2;
  pbVar3[0x1c] = 0;
  pbVar3[0x1d] = 0;
  pbVar3[0x1e] = 0;
  pbVar3[0x1f] = 0;
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
  uVar4 = ((uint *)(gen_frame + 0x8))[(int)((uint)bVar2 + (uint)bVar1 * 2)];
  *(uint *)(param_2 + 0x20) = uVar4;
  *(uint *)(param_2 + 0x24) = uVar4;
  *(uint *)(param_2 + 0x28) = uVar4;
  *(uint *)(param_2 + 0x2c) = uVar4;
  pbVar3[0x30] = 0;
  pbVar3[0x31] = 0;
  pbVar3[0x32] = 0;
  pbVar3[0x33] = 0;
  pbVar3[0x34] = 0;
  pbVar3[0x35] = 0;
  pbVar3[0x36] = 0;
  pbVar3[0x37] = 0;
  pbVar3[0x38] = 0;
  pbVar3[0x39] = 0;
  pbVar3[0x3a] = 0;
  pbVar3[0x3b] = 0;
  pbVar3[0x3c] = 0;
  pbVar3[0x3d] = 0;
  pbVar3[0x3e] = 0;
  pbVar3[0x3f] = 0;
  pbVar3[0x40] = 0;
  pbVar3[0x41] = 0;
  pbVar3[0x42] = 0;
  pbVar3[0x43] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  *param_4 = 0;
  param_4[1] = 0;
  F_00c47745(((uint *)(gen_frame + 0x8))[0xc] ^ (uint)(uint)(gen_frame + 0x3c));
  return 1;
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
    uVar1 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),9);
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

/* ref: Client::UI2::Agent::AgentLobby::OnLogout */
byte F_007e5140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e5140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 AVar1;
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
  
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + -0xc) + 0x1c))))(*(int * PTR32 *)(this + -0xc))));
  F_0075ef20(pvVar3);
  F_0043f9a0();
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + -0xc) + 0x58))))(*(int * PTR32 *)(this + -0xc))));
  F_0043a410(pvVar3);
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + -0xc) + 0x1c))))(*(int * PTR32 *)(this + -0xc))));
  F_007c88b0(pvVar3);
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + -0xc) + 0x2c))))(*(int * PTR32 *)(this + -0xc))));
  ((code *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4,0,0);
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + -0xc) + 0x30))))(*(int * PTR32 *)(this + -0xc))));
  ((code *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4,0,0);
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + -0xc) + 0x38))))(*(int * PTR32 *)(this + -0xc))));
  ((code *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4,0,0);
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + -0xc) + 0x28))))(*(int * PTR32 *)(this + -0xc))));
  ((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4,0,0);
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + -0xc) + 0x50))))(*(int * PTR32 *)(this + -0xc));
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(uVar5 + 0x850) + 0x1c))))(uVar5 + 0x850,0,0);
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + -0xc) + 0x34))))(*(int * PTR32 *)(this + -0xc))));
  ((code *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4,0,0);
  *(undefined2 *)(this + 0x6b8) = 0;
  uVar5 = F_00424810(REFG(int, 0x137104c));
  if (uVar5 != 0) {
    F_00975110(uVar5,0);
    F_009750f0(uVar5,0);
  }
  ppuVar10 = &REFG(undefined * PTR32, 0x12fd328);
  uVar8 = 0;
  uVar6 = 1;
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + -0xc) + 0x20))))(*(int * PTR32 *)(this + -0xc))));
  F_004485a0(pvVar3,uVar6,uVar8,ppuVar10);
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + -0xc) + 0x44))))(*(int * PTR32 *)(this + -0xc))));
  F_0044d9c0(pvVar3);
  if (this[0x6be] == (undefined1)0x0) {
    F_0049b7d0(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f4),1,REFG(float, 0x1088068),REFG(undefined4, 0x1302e44),REFG(undefined4, 0x1302e48),
                 REFG(undefined4, 0x1302e4c),REFG(undefined4, 0x1302e50));
    uVar11 = 0;
    uVar9 = 0;
    uVar7 = 1;
    uVar8 = 0xf;
    uVar6 = 0;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + -0xc) + 0x1c))))(*(int * PTR32 *)(this + -0xc))));
    F_0075ec30(pvVar3,uVar6,uVar8,uVar7,uVar9,uVar11);
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + -0xc) + 0x1c))))(*(int * PTR32 *)(this + -0xc));
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(uVar5 + 0x23330) + 0x4c))))((int *)(uVar5 + 0x23330),0x3e,0,1);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + -0xc) + 8))))(*(int * PTR32 *)(this + -0xc),0x1fe,0);
    this[0x6ac] = (undefined1)0xf;
  }
  if (this[0x67f] == (undefined1)0x12) {
    this[0x67f] = (undefined1)0x1;
  }
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + -0xc) + 0x54))))(*(int * PTR32 *)(this + -0xc))));
  F_004495a0(pvVar3);
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + -0xc) + 0x1c))))(*(int * PTR32 *)(this + -0xc));
  iVar2 = *(int *)(uVar5 + 0x2319c);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0xc) != 0)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar2 + 0xc) + 0x40))))(*(int * PTR32 *)(iVar2 + 0xc));
  }
  F_0052f5e0(REFG(void * PTR32, 0x1375b00),0);
  *(undefined4 *)(this + 0x6dc) = *param_1;
  AVar1 = this[0x67c];
  *(undefined4 *)(this + 0x6e0) = param_1[1];
  this[0x67e] = AVar1;
  this[0x67c] = (undefined1)0xa;
  return (byte)AVar1;
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
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  if (param_1 == 0) {
    iVar1 = 3;
  }
  uVar2 = F_007e4530((undefined *)this,iVar1,param_2);
  return uVar2;
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
  piVar1 = REFG(int * PTR32, 0x1379694);
  if (REFG(int * PTR32, 0x1379694) != (int *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 0x3c))))(REFG(int * PTR32, 0x1379694),(int)this + 0x2190);
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
  int iVar2;
  
  if ((char)param_1 == '\0') {
    if (*(int *)(this + 8) != 0) {
      F_005a2710(this + 0x1dc4,3);
      *(undefined4 *)(this + 0x1dc8) = 0x21a;
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
      ((code *)*(gen_code32 *)(*piVar1 + 0x5c))(piVar1,*(undefined4 *)(this + 8),0x205,this + 0xf7c);
    }
    iVar2 = param_2;
    if (param_2 < 0) {
      iVar2 = *(int *)(this + 0x1fac);
    }
    F_00780850(this,iVar2,0xffffffff);
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
    F_00b72120(REFG(int, 0x148a444),(uint)REFG(undefined1, 0x132814b),GEN_TOF(gen_bits2f((&REFG(float, 0x132828c))[(int)(uVar1 * 5)])),GEN_TOF(gen_bits2f((&REFG(float, 0x1328290))[(int)(uVar1 * 5)])),GEN_TOF(gen_bits2f((&REFG(float, 0x1328294))[(int)(uVar1 * 5)])),GEN_TOF(gen_bits2f((&REFG(float, 0x1328298))[(int)(uVar1 * 5)])));
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
    F_00b72120(REFG(int, 0x148a444),(uint)REFG(undefined1, 0x132814b),GEN_TOF(gen_bits2f((&REFG(float, 0x132828c))[(int)(uVar1 * 5)])),GEN_TOF(gen_bits2f((&REFG(float, 0x1328290))[(int)(uVar1 * 5)])),GEN_TOF(gen_bits2f((&REFG(float, 0x1328294))[(int)(uVar1 * 5)])),GEN_TOF(gen_bits2f((&REFG(float, 0x1328298))[(int)(uVar1 * 5)])));
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
  code * pcVar4;
  uint uVar5;
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
  if (-1 < (int)(&REFG(undefined4, 0x13282e0))[(int)(iVar1)]) {
    F_00782b60((*(uint *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x14)));
    uVar5 = 0;
    if (-1 < (int)(&REFG(undefined4, 0x13282e0))[(int)(iVar1)]) goto LAB_007e5ab1;
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
      uVar5 = ((uint *)(gen_frame + 0x24))[(int)((*(uint *)(gen_frame + 0x1c)) + ((*(uint *)(gen_frame + 0x20)) & 0xff) * 2)];
      ((uint *)(gen_frame + 0x24))[0xd] = uVar5;
      ((uint *)(gen_frame + 0x24))[0xe] = uVar5;
      ((uint *)(gen_frame + 0x24))[0xf] = uVar5;
      ((uint *)(gen_frame + 0x24))[0x10] = uVar5;
    }
  }
  ((uint *)(gen_frame + 0x24))[0xc] = 0;
  uVar5 = F_00ae3f10(&REFG(undefined, 0x14c0920),0xffffffff);
  (&REFG(undefined4, 0x13282e0))[(int)(iVar1)] = uVar5;
  if (-1 < iVar1) {
    this = (int *)F_00ae0db0(&REFG(undefined, 0x14c0920),uVar5);
    uVar5 = 0;
    if (this != (int *)0x0) {
      F_00aaa640(this,param_1,((uint *)(gen_frame + 0x24)) + 0xc);
      ((code *)*(gen_code32 *)(*this + 0x2c))(this);
      ((code *)*(gen_code32 *)(*this + 0x24))(this,8,0);
      ((code *)*(gen_code32 *)(*this + 0x24))(this,0xb,0);
      ((code *)*(gen_code32 *)(*this + 0x28))(this,6,0);
      pcVar4 = *(gen_code32 *)(*this + 0x3c);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*pcVar4)(this,&(*(undefined4 *)(gen_frame + 0x0)));
      ((code *)*(gen_code32 *)(*this + 0x48))(this,(undefined4)gen_fl2bits((float)(float10)0));
      uVar5 = F_00a5f500(this);
      if (uVar5 != 0) {
        *(undefined2 *)(uVar5 + 0x72) = 0;
      }
    }
  }
LAB_007e5ab1: ;
  F_00c47745(((uint *)(gen_frame + 0x24))[0x16] ^ (uint)(uint)(gen_frame + 0x80));
  return uVar5;
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
    F_005f9ab0((&REFG(undefined * PTR32, 0x132826c))[(int)(param_4 & 0xf)],0,0,0,0);
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
  uint uVar2;
  int * piVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *(short *)&REFG(undefined, 0x148a448) = (short)param_1;
  F_005d4f10(0,(int)(short)param_1 / 100,(int)(short)param_1 % 100);
  piVar3 = (int *)(REFG(int, 0x137104c) + 0x1210);
  uVar4 = ((gen_lcode *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x137104c) + 0x1210) + 4))))(piVar3,0);
  uVar5 = ((gen_lcode *)*(gen_code32 *)(*piVar3 + 4))(piVar3,0);
  uVar6 = ((gen_lcode *)*(gen_code32 *)(*piVar3 + 4))(piVar3,0);
  uVar2 = REFG(undefined4, 0x1371290);
  *(undefined1 *)(REFG(undefined4, 0x1371290) + 0x28) = 1;
  fVar1 = ((float)GEN_TOF((((float10)GEN_TOD((((int)((uVar5 / 0x3c) % 0x3c) + (int)((uVar4 / 0xe10) % 0x18) * 0x3c) *
                           0x3c))) + (float10)(int)(uVar6 % 0x3c))));
  *(float *)(uVar2 + 0xc) = fVar1;
  *(float *)(uVar2 + 8) = fVar1;
  return uVar2;
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
  
  if (((((&REFG(undefined4, 0x148a470))[(int)(param_1 * 4)] == param_2) && ((&REFG(undefined4, 0x148a474))[(int)(param_1 * 4)] == param_3)) &&
      (-1 < (int)(&REFG(undefined4, 0x148a478))[(int)(param_1 * 4)])) &&
     (uVar2 = F_00ae0db0(&REFG(undefined, 0x14c0920),(&REFG(undefined4, 0x148a478))[(int)(param_1 * 4)]), uVar2 != 0)) {
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
          if ((-1 < (int)(&REFG(undefined4, 0x148a478))[(int)(param_1 * 4)]) &&
             (uVar2 = F_00ae0db0(&REFG(undefined, 0x14c0920),(&REFG(undefined4, 0x148a478))[(int)(param_1 * 4)]), uVar2 != 0)) {
            F_00782d20(param_1);
          }
          F_00b88e00(param_4,param_4);
          uVar2 = F_00ae3f10(&REFG(undefined, 0x14c0920),0xffffffff);
          (&REFG(undefined4, 0x148a478))[(int)(param_1 * 4)] = uVar2;
          (&REFG(undefined4, 0x148a470))[(int)(param_1 * 4)] = param_2;
          (&REFG(undefined4, 0x148a474))[(int)(param_1 * 4)] = param_3;
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
      (&REFG(undefined4, 0x148a470))[(int)(param_1 * 4)] = param_2;
      (&REFG(undefined4, 0x148a474))[(int)(param_1 * 4)] = param_3;
      (&REFG(undefined4, 0x148a478))[(int)(param_1 * 4)] = (&REFG(undefined4, 0x148a478))[(int)(iVar3 * 4)];
      (&REFG(undefined4, 0x148a470))[(int)(iVar3 * 4)] = 0;
      (&REFG(undefined4, 0x148a474))[(int)(iVar3 * 4)] = 0;
      (&REFG(undefined4, 0x148a478))[(int)(iVar3 * 4)] = 0xffffffff;
      return iVar3 * 0x10;
    }
  }
  uVar1 = (&REFG(undefined4, 0x148a578))[(int)(iVar3 * 4)];
  (&REFG(undefined4, 0x148a474))[(int)(param_1 * 4)] = param_3;
  (&REFG(undefined4, 0x148a470))[(int)(param_1 * 4)] = param_2;
  (&REFG(undefined4, 0x148a478))[(int)(param_1 * 4)] = uVar1;
  (&REFG(undefined4, 0x148a570))[(int)(iVar3 * 4)] = 0;
  (&REFG(undefined4, 0x148a574))[(int)(iVar3 * 4)] = 0;
  (&REFG(undefined4, 0x148a578))[(int)(iVar3 * 4)] = 0xffffffff;
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
  
  piVar1 = REFG(int * PTR32, 0x148a44c);
  if (((int)(&REFG(undefined4, 0x148a478))[(int)(param_1 * 4)] < 0) ||
     (piVar2 = (int *)F_00ae0db0(&REFG(undefined, 0x14c0920),(&REFG(undefined4, 0x148a478))[(int)(param_1 * 4)]), piVar2 == (int *)0x0
     )) {
    return 0;
  }
  REFG(int * PTR32, 0x148a44c) = piVar2;
  if (piVar2 != piVar1) {
    param_1 = 0;
    if (piVar1 != (int *)0x0) {
      param_1 = piVar1[0x2c];
      ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,6,0);
      F_00b5aeb0(REFG(void * PTR32, 0x14c4e84),(uint)*(ushort *)(piVar1 + 0x22),0);
    }
    if ((char)param_2 == '\0') {
      if ((REFG(int * PTR32, 0x148a44c) != (int *)0x0) &&
         (((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x24))))(REFG(int * PTR32, 0x148a44c),6,0), REFG(int * PTR32, 0x148a44c) != (int *)0x0)) {
        F_00aa0560(REFG(int * PTR32, 0x148a44c),3);
        F_00aa4270(REFG(int * PTR32, 0x148a44c),3,0,0);
      }
    }
    else if (REFG(int * PTR32, 0x148a44c) != (int *)0x0) {
      ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x28))))(REFG(int * PTR32, 0x148a44c),6,0);
    }
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x48))))(REFG(int * PTR32, 0x148a44c),param_1);
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
  if (REFG(int * PTR32, 0x148a44c) != (int *)0x0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x28))))(REFG(int * PTR32, 0x148a44c),6,0);
  }
  REFG(int * PTR32, 0x148a44c) = (int *)0x0;
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
        if (REFG(int * PTR32, 0x148a44c) == piVar2) {
          REFG(int * PTR32, 0x148a44c) = (int *)0x0;
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
      REFG(int, 0x148a574) = (&REFG(undefined4, 0x148a474))[(int)(iVar4 * 4)];
      puVar1 = &REFG(undefined4, 0x148a470) + iVar4 * 4;
      REFG(int, 0x148a570) = *puVar1;
      REFG(undefined4, 0x148a578) = (&REFG(undefined4, 0x148a478))[(int)(iVar4 * 4)];
      REFG(undefined4, 0x148a57c) = *(undefined4 *)(iVar4 * 0x10 + 0x148a47c);
      *puVar1 = 0;
      (&REFG(undefined4, 0x148a474))[(int)(iVar4 * 4)] = 0;
      (&REFG(undefined4, 0x148a478))[(int)(iVar4 * 4)] = 0xffffffff;
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
  
  piVar1 = REFG(int * PTR32, 0x148a44c);
  uVar5 = 0xffffffff;
  iVar4 = 0;
  piVar3 = &REFG(undefined4, 0x148a570);
  do {
    if ((*piVar3 == param_1) && (piVar3[1] == param_2)) {
      uVar5 = (&REFG(undefined4, 0x148a578))[(int)(iVar4 * 4)];
      break;
    }
    piVar3 = piVar3 + 4;
    iVar4 = iVar4 + 1;
  } while ((int)piVar3 < 0x148a590);
  piVar3 = (int *)F_00ae0db0(&REFG(undefined, 0x14c0920),uVar5);
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  REFG(int * PTR32, 0x148a44c) = piVar3;
  if (piVar3 == piVar1) {
    ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,6,0);
    return 1;
  }
  local_8 = 0;
  if (piVar1 != (int *)0x0) {
    local_8 = piVar1[0x2c];
    ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,6,0);
    F_00b5aeb0(REFG(void * PTR32, 0x14c4e84),(uint)*(ushort *)(piVar1 + 0x22),0);
  }
  if ((REFG(int * PTR32, 0x148a44c) != (int *)0x0) &&
     (((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x24))))(REFG(int * PTR32, 0x148a44c),6,0), REFG(int * PTR32, 0x148a44c) != (int *)0x0)) {
    F_00aa0560(REFG(int * PTR32, 0x148a44c),3);
    F_00aa4270(REFG(int * PTR32, 0x148a44c),3,0,0);
  }
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x48))))(REFG(int * PTR32, 0x148a44c),local_8);
  iVar4 = REFG(int, 0x1371290);
  if (2 < REFG(short, 0x13282d8)) {
LAB_007e62a4: ;
    *(undefined4 *)(REFG(int, 0x1371290) + 0x24) = 0;
    *(undefined1 *)(iVar4 + 0x23) = 2;
    F_00782390();
    return 1;
  }
  if (REFG(int * PTR32, 0x148a44c) == (int *)0x0) {
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
uint F_007e6310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
  return (uint)piVar1;
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
  byte bVar1;
  uint uVar2;
  uint * puVar3;
  int local_8;
  
  *(undefined4 *)((int)this + 0x238) = 2;
  puVar3 = (uint *)((int)this + 0x14);
  local_8 = 2;
  do {
    uVar2 = *puVar3;
    if (uVar2 == 0) {
      uVar2 = F_00974770((undefined *)puVar3[-1],0);
      *puVar3 = uVar2;
      if (uVar2 != 0) goto LAB_007e63f8;
    }
    else {
LAB_007e63f8: ;
      bVar1 = F_009747b0((undefined *)puVar3[-1],param_1,param_2,puVar3 + -3,uVar2);
      puVar3[0x3c] = 3 - (bVar1 != 0);
    }
    puVar3 = puVar3 + 0x46;
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
  byte bVar1;
  int * piVar2;
  int local_8;
  
  *(undefined4 *)((int)this + 0x238) = 5;
  piVar2 = (int *)((int)this + 0x14);
  local_8 = 2;
  do {
    if ((*piVar2 != 0) && (piVar2[0x3c] == 4)) {
      bVar1 = F_009747f0((undefined *)piVar2[-1],param_1,param_2,param_3,piVar2 + -3,*piVar2,0);
      piVar2[0x3c] = 6 - (uint)(bVar1 != 0);
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
uint F_007e6740(unsigned int gen_a0, unsigned int gen_a1)
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
  return (uint)in_ecx;
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
uint F_007e7440(unsigned int gen_a0, unsigned int gen_a1)
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
  return (uint)this;
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

/* ref: FUN_007e7630 */
unsigned int F_007e7630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11)
{
  GEN_ENTER(0x7e7630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint param_9 = (uint)gen_a9;
  uint param_10 = (uint)gen_a10;
  undefined4 param_11 = (undefined4)gen_a11;
  int iVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  int * piVar6;
  undefined * this_00;
  code * pcVar7;
  ushort uVar8;
  int iVar9;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(undefined * PTR32 *)((int)this + 0x18) == (undefined *)0x0) {
    return 0;
  }
  if (*(int *)((int)this + 0x14) == 0) {
    return 0;
  }
  if (param_2 < 1) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (param_4 < 1) {
    return 0;
  }
  *(int *)((int)this + 0x1c) = param_1;
  *(int *)((int)this + 0x24) = param_4;
  *(undefined1 *)((int)this + 0x33) = (undefined1)param_9;
  *(undefined2 *)((int)this + 0x2e) = (undefined2)param_6;
  *(undefined1 *)((int)this + 0x34) = (undefined1)param_10;
  *(undefined2 *)((int)this + 0x30) = (undefined2)param_7;
  F_005b2060(*(undefined * PTR32 *)((int)this + 0x18),(uint)*(ushort *)((int)this + 0x24));
  F_00562110(*(undefined * PTR32 *)((int)this + 0x18),1);
  *(undefined1 *)((int)this + 0x35) = (undefined1)param_11;
  uVar4 = F_00784290(this,param_2,param_3,*(uint *)((int)this + 0x24));
  param_10 = uVar4;
  if ((int)uVar4 < (int)*(uint *)((int)this + 0x28)) {
    param_10 = *(uint *)((int)this + 0x28);
  }
  if (*(char *)((int)this + 0x35) != '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x70))))(*(int * PTR32 *)((int)this + 0x18));
  }
  iVar9 = 0;
  if (0 < *(int *)((int)this + 0x24)) {
    do {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x54))))(*(int * PTR32 *)((int)this + 0x18),iVar9,0);
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)((int)this + 0x24));
  }
  if ((*(char *)((int)this + 0x32) != '\0') && (iVar9 = 0, 0 < *(int *)((int)this + 0x24))) {
    do {
      iVar1 = **(int * PTR32 *)((int)this + 0x18);
      bVar2 = F_00784610(this,iVar9);
      ((code *)*(gen_code32 *)(iVar1 + 0x54))(*(undefined4 *)((int)this + 0x18),iVar9,(uint)(bVar2 == 0));
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)((int)this + 0x24));
  }
  iVar9 = 0;
  if (*(char *)((int)this + 0x35) == '\0') {
    uVar4 = F_0056d250(*(undefined * PTR32 *)((int)this + 0x18),0,0);
    uVar8 = *(short *)(uVar4 + 0x206) * *(short *)((int)this + 0x24);
LAB_007e7787: ;
    if (uVar8 != 0) goto LAB_007e77a6;
  }
  else if (0 < *(int *)((int)this + 0x24)) {
    uVar8 = 0;
    do {
      uVar4 = F_0056d250(*(undefined * PTR32 *)((int)this + 0x18),0,iVar9);
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = *(undefined4 *)(uVar4 + 0x70);
      }
      uVar3 = F_0055a030(uVar5);
      iVar9 = iVar9 + 1;
      uVar8 = uVar8 + uVar3;
    } while (iVar9 < *(int *)((int)this + 0x24));
    goto LAB_007e7787;
  }
  uVar5 = 0;
  if (*(int *)((int)this + 0x18) != 0) {
    uVar5 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x70)));
  }
  uVar8 = F_0055a030(uVar5);
LAB_007e77a6: ;
  param_9 = (uint)uVar8;
  piVar6 = *(int * PTR32 *)((int)this + 0x1c);
  if ((char)param_8 == '\0') {
    iVar9 = *piVar6;
    ((code *)*(gen_code32 *)(iVar9 + 0x50))
              (piVar6,0,(uint)(ushort)(*(short *)((int)this + 0x2c) + *(short *)((int)this + 0x30) +
                                      uVar8));
    pcVar7 = *(gen_code32 *)(iVar9 + 0x4c);
    piVar6 = *(int * PTR32 *)((int)this + 0x1c);
  }
  else {
    pcVar7 = *(gen_code32 *)(*piVar6 + 0x4c);
  }
  (*pcVar7)(piVar6);
  if (*(int *)((int)this + 0x18) == 0) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x70)));
  }
  F_0055a040(this_00,param_10,param_9);
  uVar5 = 0;
  if (*(int *)((int)this + 0x18) != 0) {
    uVar5 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x70)));
  }
  F_00559f00(uVar5,(float)(int)*(short *)((int)this + 0x2c));
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x11e))) = 1;
  if (*(char *)((int)this + 0x35) != '\0') {
    F_0058dd00(*(undefined * PTR32 *)((int)this + 0x18));
  }
  F_00586850(*(undefined * PTR32 *)((int)this + 4),3,0,this);
  return 0;
}

/* ref: FUN_007e7860 */
uint F_007e7860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e7860u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  short sVar1;
  int * piVar2;
  code * pcVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  short sVar7;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar5 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)));
  if (((uVar5 != 0) && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) != 0)) && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) != 0)) {
    sVar7 = *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) + (short)(*(undefined4 *)&gen_args[1]);
    F_0055a000(*(undefined * PTR32 *)(uVar5 + 0x70),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
    sVar1 = *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)));
    uVar5 = (uint)(ushort)(sVar1 + sVar7 + (short)(*(undefined4 *)&gen_args[1]));
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c)));
    if ((char)(*(undefined4 *)&gen_args[2]) == '\0') {
      iVar4 = *piVar2;
      uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0x50))(piVar2,0,uVar5);
      ((code *)*(gen_code32 *)(iVar4 + 0x4c))(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),uVar5 & 0xffff);
      uVar6 = 0;
      if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) != 0) {
        uVar6 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) + 0x70)));
      }
      F_0055a080(uVar6,(*(undefined4 *)&gen_args[1]));
    }
    else {
      pcVar3 = *(gen_code32 *)(*piVar2 + 0x4c);
      sVar1 = *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2e)));
      (*pcVar3)(piVar2,(uint)(ushort)(sVar1 * 2 + (short)(*(undefined * PTR32 *)(gen_frame + 0x8))),uVar5);
      if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) == 0) {
        F_0055a040((undefined *)0x0,(*(undefined * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)&gen_args[1]));
      }
      else {
        F_0055a040(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) + 0x70))),(*(undefined * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)&gen_args[1]));
      }
    }
    if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x35))) != '\0') {
      F_0058dd00(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))));
    }
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) + 0x70)));
    }
    uVar5 = F_00559f00(uVar6,(float)(int)sVar7);
  }
  return uVar5;
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
uint F_007e79a0(unsigned int gen_a0, unsigned int gen_a1)
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
  return in_ecx_00;
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
  short sVar1;
  int * piVar2;
  longlong lVar3;
  int iVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  undefined * pvVar10;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined4 uVar11;
  
  piVar2 = *(int * PTR32 *)((int)this + 0x10);
  if ((uint)*(ushort *)((int)this + 0x3e) < *(uint *)((int)this + 0x48)) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,1);
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
    iVar4 = (iVar9 - (uint)*(ushort *)((int)this + 0x3e)) * 4;
    *(int *)((int)this + 0x6c) = iVar4;
    uVar8 = F_00589f20(*(undefined * PTR32 *)((int)this + 0x10),iVar4);
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
    sVar1 = *((short *)GEN_TOP((*(int *)((int)this + 8) + 0x10e)));
    bVar5 = *(byte *)((int)this + 0x58);
    uVar6 = F_0055a030(*(int *)((int)this + 8));
    iVar9 = (uint)bVar5 * iVar9 - (uint)uVar6;
    lVar3 = (ulonglong)(*(int *)((int)this + 0x30) * (uint)bVar5 - (int)sVar1) *
            (longlong)*(int *)((int)this + 0x6c);
  }
  else {
    if (*(ushort *)((int)this + 0x4c) <= *(ushort *)((int)this + 0x3e)) {
      *(undefined4 *)((int)this + 0x50) = 0;
      *(undefined4 *)((int)this + 0x6c) = 1;
      F_00574c80(piVar2,0,1,1);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0x28))))(*(int * PTR32 *)((int)this + 0x10),0);
      if (*(int *)((int)this + 0x10) != 0) {
        bVar5 = F_0055a300(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x70))),0);
        return CONCAT31(extraout_var_00,bVar5);
      }
      bVar5 = F_0055a300((undefined *)0x0,0);
      return CONCAT31(extraout_var,bVar5);
    }
    ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,1);
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
    sVar1 = *((short *)GEN_TOP((*(int *)((int)this + 8) + 0x10e)));
    bVar5 = *(byte *)((int)this + 0x58);
    uVar7 = F_0055a030(*(int *)((int)this + 8));
    iVar9 = (uint)bVar5 * (uint)uVar6 - (uint)uVar7;
    lVar3 = (ulonglong)(*(int *)((int)this + 0x30) * (uint)bVar5 - (int)sVar1) *
            (longlong)*(int *)((int)this + 0x6c);
  }
  *(int *)((int)this + 0x50) = (int)(lVar3 / (longlong)iVar9);
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

/* ref: FUN_007e8450 */
uint F_007e8450(unsigned int gen_a0)
{
  GEN_ENTER(0x7e8450u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0057ee00(*(undefined * PTR32 *)((int)this + 8),(uint)*(ushort *)((int)this + 0xc4),
                       (uint)*(ushort *)((int)this + 200));
  uVar1 = F_007e81e0(this,uVar1,0);
  return uVar1;
}

/* ref: FUN_007e8480 */
uint F_007e8480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e8480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  short sVar2;
  undefined2 uVar3;
  short sVar4;
  ushort uVar5;
  short sVar6;
  undefined2 extraout_var = 0;
  ushort uVar7;
  int iVar8;
  
  iVar8 = 0;
  uVar5 = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  if (*(short *)((int)this + 0x44) != 0) {
    uVar7 = *(ushort *)((int)this + 0x1e);
    do {
      piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x5c) + 0x20))) + (uint)uVar7 * 4)));
      (*(int *)(gen_frame + 0x10)) = piVar1[1];
      (*(int *)(gen_frame + 0x8)) = iVar8;
      if (*piVar1 == *(int *)((int)this + 0xc4)) break;
      iVar8 = iVar8 + (*(int *)(gen_frame + 0x10));
      uVar5 = uVar5 + 1;
      uVar7 = uVar7 + 2;
      (*(int *)(gen_frame + 0x8)) = iVar8;
    } while (uVar5 < *(ushort *)((int)this + 0x44));
  }
  iVar8 = *(int *)((int)this + 8);
  sVar2 = *(short *)(iVar8 + 0x10e);
  uVar3 = *(undefined2 *)(iVar8 + 0x10c);
  sVar4 = (ushort)*(byte *)((int)this + 0x58) * (short)(*(int *)(gen_frame + 0x8)) + sVar2;
  uVar5 = F_0055a030(iVar8);
  sVar6 = uVar5 - (ushort)*(byte *)((int)this + 0x58) * (short)(*(int *)(gen_frame + 0x10));
  *(undefined4 *)((int)this + 100) = 0;
  if (sVar4 < 0) {
    iVar8 = *(int *)((int)this + 8);
    *(undefined2 *)(iVar8 + 0x10c) = uVar3;
    *(short *)(iVar8 + 0x10e) = sVar2 - sVar4;
    *(undefined1 *)((int)this + 0xa1) = 0;
  }
  else {
    if (sVar4 <= sVar6) goto LAB_007e85a1;
    iVar8 = *(int *)((int)this + 8);
    if (-1 < sVar6) {
      *(short *)(iVar8 + 0x10e) = (sVar6 - sVar4) + sVar2;
      *(undefined2 *)(iVar8 + 0x10c) = uVar3;
      F_007e7b30(this,0);
      *(int *)((int)this + 100) = -((*(int *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0x8)));
      sVar4 = sVar6;
      goto LAB_007e85a1;
    }
    *(undefined2 *)(iVar8 + 0x10c) = uVar3;
    *(short *)(iVar8 + 0x10e) = sVar2 - sVar4;
  }
  F_007e7b30(this,0);
  *(undefined4 *)((int)this + 100) = 1;
  sVar4 = 0;
LAB_007e85a1: ;
  iVar8 = *(int *)((int)this + 0x18);
  F_00559fb0(*(undefined * PTR32 *)((int)this + 8),((short *)(gen_frame + 0x14)),((short *)(gen_frame + 0x18)));
  uVar5 = F_005602f0((undefined *)(iVar8 + 0x20c),(uint)((char)param_1 == '\0') * 2 + 1,(int)((short *)(gen_frame + 0x14))[0]
                       ,(uint)(*(byte *)((int)this + 0x58) >> 1) + (int)((short *)(gen_frame + 0x18))[0] + (int)sVar4);
  return CONCAT22(extraout_var,uVar5);
}

/* ref: FUN_007e85f0 */
uint F_007e85f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e85f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 4) + param_2 * 0x10)));
}

/* ref: FUN_007e8620 */
uint F_007e8620(unsigned int gen_a0)
{
  GEN_ENTER(0x7e8620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 * puVar5;
  float10 fVar6;
  uint local_14;
  int local_c;
  uint local_8;
  
  local_8 = 0;
  local_14 = 0;
  iVar1 = (uint)(*(int *)((int)this + 0x1c) == 0) * 2 + -1;
  if (*(int *)((int)this + 8) - *(int *)((int)this + 4) >> 4 != 0) {
    local_c = 0;
    do {
      puVar5 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + local_c)));
      uVar4 = F_0055a2d0(*puVar5);
      if ((char)uVar4 != '\0') {
        uVar2 = F_0055a020(*puVar5);
        uVar3 = F_0055a030(*puVar5);
        if (puVar5[2] == 1) {
          fVar6 = (float10)(int)(*(int *)((int)this + 0x14) - (uint)uVar2) * (float10)REFG(double, 0x1088108) +
                  (float10)*(double *)&REFG(undefined, 0x108bec8);
LAB_007e86c5: ;
          F_00559e70(*puVar5,(float)fVar6);
        }
        else if (puVar5[2] == 2) {
          fVar6 = (float10)(int)(*(int *)((int)this + 0x14) - (uint)uVar2) +
                  (float10)*(double *)&REFG(undefined, 0x108bec8);
          goto LAB_007e86c5;
        }
        if (local_8 != 0) {
          local_8 = local_8 + puVar5[1] * iVar1;
        }
        F_00559f00(*puVar5,(float)((float10)(int)local_8 + (float10)*(double *)&REFG(undefined, 0x108bec8)));
        uVar4 = (uint)uVar3;
        if (puVar5[3] != 0) {
          uVar4 = puVar5[3];
        }
        local_8 = local_8 + uVar4 * iVar1;
      }
      local_c = local_c + 0x10;
      local_14 = local_14 + 1;
    } while (local_14 < (uint)(*(int *)((int)this + 8) - *(int *)((int)this + 4) >> 4));
  }
  uVar4 = (local_8 ^ (int)local_8 >> 0x1f) - ((int)local_8 >> 0x1f);
  *(uint *)((int)this + 0x18) = uVar4;
  return uVar4;
}

/* ref: FUN_007e8740 */
uint F_007e8740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e8740u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  ushort uVar2;
  undefined4 in_ecx;
  
  iVar1 = (*(int *)&gen_args[2]);
  F_0055e430((*(undefined * PTR32 *)&gen_args[1]),&(*(int *)&gen_args[2]),((undefined2 *)(gen_frame + 0x8)),(*(int *)&gen_args[2]));
  if (iVar1 == 0) {
    in_ecx = 0;
  }
  else {
    in_ecx = *(undefined4 *)(iVar1 + 0x70);
  }
  uVar2 = F_0055a020(in_ecx);
  *((undefined4 *)GEN_TOP(((*(undefined2 * PTR32 *)&gen_args[0]) + 4))) = 0xc8d;
  *(*(undefined2 * PTR32 *)&gen_args[0]) = 0x4002;
  (*(undefined2 * PTR32 *)&gen_args[0])[1] = (short)(*(int *)&gen_args[2]) + uVar2;
  (*(undefined2 * PTR32 *)&gen_args[0])[2] = ((undefined2 *)(gen_frame + 0x8))[0];
  return (uint)(*(undefined2 * PTR32 *)&gen_args[0]);
}

/* ref: Client::UI2::AddonFade::vf38 */
uint F_007e87a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e87a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  float fVar1;
  uint uVar2;
  uint uVar3;
  undefined1 AVar4;
  uint uVar5;
  uint uVar6;
  float10 fVar7;
  float fVar8;
  ulonglong uVar9;
  float local_8;
  
  uVar2 = F_0055dcb0();
  fVar7 = (float10)*(int *)(uVar2 + 0x234);
  if (*(int *)(uVar2 + 0x234) < 0) {
    fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)(this + 0x2a0) = (float)fVar7;
  uVar2 = F_0055dcb0();
  fVar7 = (float10)*(int *)(uVar2 + 0x238);
  if (*(int *)(uVar2 + 0x238) < 0) {
    fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)(this + 0x2a4) = (float)fVar7;
  if (this[0x2d1] == (undefined1)0x0) {
    return uVar2;
  }
  if (this[0x2d0] == (undefined1)0x0) {
    uVar9 = F_00427d90();
    uVar2 = ((int)(uVar9 >> 0x20) - *(int *)(this + 700)) -
            (uint)((uint)uVar9 < *(uint *)(this + 0x2b8));
    fVar7 = (float10)*(int *)(this + 0x2c0);
    if (*(int *)(this + 0x2c0) < 0) {
      fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar1 = (float)fVar7;
    fVar7 = (float10)((float)GEN_TOF((-(float10)(longlong)(((ulonglong)uVar2 & 0x80000000) << 0x20) +
                            ((float10)GEN_TOD((CONCAT44(uVar2,(uint)uVar9 - *(uint *)(this + 0x2b8)) &
                                     0x7fffffffffffffff))))));
    if ((GEN_ISNAN(fVar1) || 0.0 < fVar1) && (fVar7 < (float10)fVar1)) {
      local_8 = (float)(fVar7 / (float10)fVar1);
    }
    else {
      local_8 = REFG(float, 0x1087f04);
    }
    fVar8 = REFG(float, 0x1087f04);
    if (!((float10)fVar1 <= fVar7)) goto LAB_007e88d8;
  }
  else {
    fVar1 = *(float *)(this + 0x2cc);
    *(float *)(this + 0x2cc) = ((float)GEN_TOF(((float10)*(float *)(this + 0x2c8) + (float10)fVar1)));
    if ((float10)1 <= (float10)((float)GEN_TOF(((float10)*(float *)(this + 0x2c8) + (float10)fVar1)))) {
      *(float *)(this + 0x2cc) = REFG(float, 0x1087f04);
    }
    fVar8 = *(float *)(this + 0x2cc);
  }
  local_8 = fVar8;
LAB_007e88d8: ;
  uVar2 = *(uint *)(this + 0x2ac);
  uVar5 = 0;
  if ((uVar2 & 4) == 0) {
    uVar6 = (uint)(byte)this[0x13f];
    uVar3 = (uint)((float10)uVar6 * (float10)local_8);
    if ((uVar2 & 1) == 0) {
      if (((uVar2 & 2) != 0) &&
         (uVar5 = *(int *)(this + 0x2c4) + uVar3, (int)uVar6 < (int)(*(int *)(this + 0x2c4) + uVar3)
         )) {
        uVar5 = uVar6;
      }
    }
    else {
      uVar5 = *(int *)(this + 0x2c4) - uVar3;
      if ((int)(*(int *)(this + 0x2c4) - uVar3) < 0) {
        uVar5 = 0;
      }
    }
    this[0x2ab] = SUB41(uVar5,0);
  }
  else {
    uVar3 = (uint)((double)local_8 * *(double *)&REFG(undefined, 0x1088100));
    if (*(int *)(this + 0x2b0) == 1) {
      uVar5 = *(int *)(this + 0x2c4) - uVar3;
      if ((int)uVar5 < 0) {
        uVar5 = 0;
      }
    }
    else if ((*(int *)(this + 0x2b0) == 2) &&
            (uVar5 = *(int *)(this + 0x2c4) + uVar3, 0xff < (int)uVar5)) {
      uVar5 = 0xff;
    }
    AVar4 = SUB41(uVar5,0);
    this[0x2a8] = AVar4;
    this[0x2a9] = AVar4;
    this[0x2aa] = AVar4;
  }
  if ((!GEN_ISNAN(local_8) && !GEN_ISNAN(REFG(float, 0x1087f04))) && !(local_8 < REFG(float, 0x1087f04))) {
    *(uint *)(this + 0x2ac) = uVar2 & 0xfffffff7;
    uVar3 = F_00785f00(this,1);
    this[0x2d1] = (undefined1)0x0;
  }
  return uVar3;
}

/* ref: Client::UI2::AddonFade::vf46 */
byte F_007e8c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e8c30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_1 == 4) {
    if (((byte)this[0xf9] & 1) == 0) {
      this[0xf9] = (undefined1)((byte)this[0xf9] & 0xfd);
    }
    if ((param_2[8] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(uint *)(param_2 + 0xc);
    }
    this[0x2d0] = SUB41(uVar1 >> 0x1f,0);
    if ((param_2[0x18] & 0xf) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_2 + 0x1c);
    }
    this[0x2d2] = (undefined1)(iVar3 == 0);
    if (iVar3 != 0) {
      this[0x2ab] = (undefined1)0x0;
    }
    if ((param_2[0x10] & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(param_2 + 0x14);
    }
    if ((*param_2 & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 4);
    }
    F_007e89c0(this,uVar2,uVar4,uVar1 & 0x7fffffff);
    F_00785f00(this,0);
  }
  return 1;
}

/* ref: Client::UI2::AddonDialogue::vf2 */
unsigned int F_007e8cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7e8cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  if ((short)param_1 == 0x17) {
    F_00557640(((undefined1 *)(gen_frame + 0xc)),0x39);
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005997b0(*(undefined4 *)(this + 0x90),((undefined1 *)(gen_frame + 0xc)));
  }
  return 0;
}

/* ref: Client::UI2::AddonDragDrop::vf44 */
uint F_007e8d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e8d10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  
  F_0055e1c0(this,(float)(float10)0,0,0,(float)(float10)1,1);
  F_0055e220(this,(float)(float10)0,0,0,(float)(float10)1,1);
  uVar1 = F_0055e2f0(this,2);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar1 = F_00559c20(uVar1);
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = F_005613a0(uVar1);
      if (uVar2 == 0x11) {
        uVar2 = F_0056e530(uVar1,2);
        *(byte *)(uVar1 + 0xaa) = *(byte *)(uVar1 + 0xaa) | 0x20;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_007e8d80 */
uint F_007e8d80(unsigned int gen_a0)
{
  GEN_ENTER(0x7e8d80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0055e2f0(this,2);
  if (uVar1 != 0) {
    uVar1 = F_00559c20(uVar1);
    if (uVar1 != 0) {
      uVar2 = F_005613a0(uVar1);
      if (uVar2 == 0x11) {
        return uVar1;
      }
    }
  }
  return 0;
}

/* ref: FUN_007e8db0 */
unsigned int F_007e8db0(unsigned int gen_a0)
{
  GEN_ENTER(0x7e8db0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = (int *)((int)this + 0x184);
  iVar2 = 5;
  do {
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,0);
      F_0055a300((undefined *)piVar1[0x1c],0);
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_007e8df0 */
uint F_007e8df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e8df0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  byte bVar4;
  undefined4 uVar5;
  undefined * pvVar6;
  short sVar7;
  short sVar8;
  byte * pbVar9;
  
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar2 = F_0055dcb0();
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = *(undefined * PTR32 *)(uVar2 + 0x30);
  F_00568010((*(undefined * PTR32 *)&gen_args[2]),&(*(int *)(gen_frame + 0x10)));
  F_00559fe0((*(undefined * PTR32 *)&gen_args[2]),&(*(float *)(gen_frame + 0x34)),&(*(float *)(gen_frame + 0x28)));
  (*(undefined * PTR32 *)&gen_args[2]) = (undefined *)0x5;
  pbVar9 = (*(byte * PTR32 *)&gen_args[1]);
  do {
    if (*pbVar9 != 0xff) {
      pvVar6 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (uint)*pbVar9 * 4 + 0x184)));
      if (pvVar6 == (undefined *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)((int)pvVar6 + 0x70);
      }
      F_00568210(uVar5,(*(float *)(gen_frame + 0x34)),(*(float *)(gen_frame + 0x34)));
      uVar2 = F_00460bd0((*(undefined * PTR32 *)(gen_frame + 0x30)),*(undefined4 *)(pbVar9 + 8),1);
      F_0058bba0(pvVar6,uVar2);
    }
    pbVar9 = pbVar9 + 0xc;
    (*(undefined * PTR32 *)&gen_args[2]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[2]) + -1)));
  } while ((*(undefined * PTR32 *)&gen_args[2]) != (undefined *)0x0);
  F_005876a0((*(undefined * PTR32 *)&gen_args[0]));
  pbVar9 = (*(byte * PTR32 *)&gen_args[1]) + 1;
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = (undefined *)0x5;
  (*(byte * PTR32 *)&gen_args[1]) = pbVar9;
  do {
    bVar4 = (*(byte * PTR32 *)&gen_args[1])[-1];
    pbVar9 = ((byte *)GEN_TOP(CONCAT31((int3)((uint)((int)(uintptr_t)pbVar9) >> 8),bVar4)));
    if (bVar4 != 0xff) {
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (uint)bVar4 * 4 + 0x184)));
      (*(int * PTR32 *)(gen_frame + 0x24)) = piVar1;
      if (piVar1 == (int *)0x0) {
        pvVar6 = (undefined *)0x0;
      }
      else {
        pvVar6 = (undefined *)piVar1[0x1c];
      }
      F_00568010(pvVar6,&(*(int *)(gen_frame + 0x0)));
      piVar1 = (*(int * PTR32 *)(gen_frame + 0x24));
      iVar3 = (*(int *)(gen_frame + 0x8)) - (*(int *)(gen_frame + 0x0));
      sVar8 = (short)(*(int *)(gen_frame + 0x10));
      sVar7 = (short)(*(int *)(gen_frame + 0x14));
      bVar4 = *(*(byte * PTR32 *)&gen_args[1]) >> 4;
      (*((undefined2 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[2]) + 0)))) = 0;
      (*(int *)(gen_frame + 0x38)) = 0;
      if (bVar4 == 9) {
        bVar4 = 4;
      }
      switch((unsigned int)(uintptr_t)(bVar4)) {
      case 1: ;
      case 4: ;
      case 7: ;
        iVar3 = iVar3 / 2;
      case 2: ;
      case 5: ;
      case 8: ;
        (*((undefined2 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[2]) + 0)))) = -(short)iVar3;
      default: ;
        switch((unsigned int)(uintptr_t)(bVar4)) {
        case 3: ;
        case 4: ;
        case 5: ;
          (*(int *)(gen_frame + 0x38)) = -(((*(int *)(gen_frame + 0xc)) - (*(int *)(gen_frame + 0x4))) / 2);
          break;
        case 6: ;
        case 7: ;
        case 8: ;
          (*(int *)(gen_frame + 0x38)) = -((*(int *)(gen_frame + 0xc)) - (*(int *)(gen_frame + 0x4)));
        }
        switch((unsigned int)(uintptr_t)(*(*(byte * PTR32 *)&gen_args[1]) & 0xf)) {
        case 1: ;
        case 4: ;
        case 7: ;
          sVar8 = (short)(((*(int *)(gen_frame + 0x18)) - (*(int *)(gen_frame + 0x10))) / 2) + sVar8;
          break;
        case 2: ;
        case 5: ;
        case 8: ;
          sVar8 = (short)(*(int *)(gen_frame + 0x18));
        }
        switch((unsigned int)(uintptr_t)(*(*(byte * PTR32 *)&gen_args[1]) & 0xf)) {
        case 3: ;
        case 4: ;
        case 5: ;
          sVar7 = (short)(((*(int *)(gen_frame + 0x1c)) - (*(int *)(gen_frame + 0x14))) / 2) + sVar7;
          break;
        case 6: ;
        case 7: ;
        case 8: ;
          sVar7 = (short)(*(int *)(gen_frame + 0x1c));
        }
        (*(int *)(gen_frame + 0x2c)) = (int)*((short *)GEN_TOP(((*(byte * PTR32 *)&gen_args[1]) + 1)));
        if ((*(int * PTR32 *)(gen_frame + 0x24)) == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (*(int * PTR32 *)(gen_frame + 0x24))[0x1c];
        }
        F_00559da0(iVar3,(float)(int)(short)(sVar8 + (short)(int)((float10)(int)*((short *)GEN_TOP(((*(byte * PTR32 *)&gen_args[1])
                                                                                            + 1))) *
                                                                   (float10)(*(float *)(gen_frame + 0x34))) +
                                                       (short)(*(undefined * PTR32 *)&gen_args[2])),
                     (float)(int)(short)(sVar7 + (short)(int)((float10)(int)*((short *)GEN_TOP(((*(byte * PTR32 *)&gen_args[1]) + 3)))
                                                             * (float10)(*(float *)(gen_frame + 0x28))) + (short)(*(int *)(gen_frame + 0x38))))
        ;
        ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,1);
        bVar4 = F_0055a300((undefined *)piVar1[0x1c],1);
        pbVar9 = ((byte *)GEN_TOP(CONCAT31(extraout_var,bVar4)));
        (*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 *)(gen_frame + 0x20));
      }
    }
    (*(byte * PTR32 *)&gen_args[1]) = (*(byte * PTR32 *)&gen_args[1]) + 0xc;
    iVar3 = (int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + -1;
    (*(undefined * PTR32 *)(gen_frame + 0x30)) = (undefined *)iVar3;
  } while (iVar3 != 0);
  return (uint)pbVar9;
}

/* ref: Client::UI2::AddonYesNo::vf37 */
uint F_007e9080(unsigned int gen_a0)
{
  GEN_ENTER(0x7e9080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(this + 0x184) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70))),0x17,0,this,0);
  }
  if (*(int *)(this + 0x188) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70))),0x17,1,this,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonSelectOk::vf37 */
uint F_007e90c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7e90c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(this + 0x184) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70))),0x17,0,this,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonSelectOk::vf44 */
uint F_007e90f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e90f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,param_2);
  F_0055e1c0(this,*(float *)&REFG(undefined, 0x109feac),0,0x1e,(float)(float10)1,1);
  F_0055e220(this,*(float *)&REFG(undefined, 0x109feac),0,0x1e,(float)(float10)1,1);
  uVar1 = 0;
  if (*(int *)(this + 0x184) != 0) {
    uVar1 = F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70))),0x17,0,this,0,0);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonSelectYesNoCount::vf37 */
uint F_007e9170(unsigned int gen_a0)
{
  GEN_ENTER(0x7e9170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(this + 0x184) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70))),0x17,0,this,0);
  }
  if (*(int *)(this + 0x188) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70))),0x17,1,this,0);
  }
  if (*(int *)(this + 400) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70))),0x17,3,this,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonSelectYesNoCount::vf44 */
uint F_007e91d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e91d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  float10 fVar3;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,param_2);
  F_0055e1c0(this,*(float *)&REFG(undefined, 0x109feac),0,0x1e,(float)(float10)1,1);
  F_0055e220(this,*(float *)&REFG(undefined, 0x109feac),0,0x1e,(float)(float10)1,1);
  if (*(int *)(this + 0x184) != 0) {
    F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70))),0x17,0,this,0,0);
  }
  if (*(int *)(this + 0x188) != 0) {
    F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70))),0x17,1,this,0,0);
  }
  uVar2 = 0;
  if (*(int *)(this + 400) != 0) {
    uVar2 = F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70))),0x17,3,this,0,0);
  }
  if ((this[0x19f] == (undefined1)0x1) && (*(int *)(this + 0x198) != 0)) {
    bVar1 = F_0055a300(*(undefined * PTR32 *)(this + 0x194),1);
    uVar2 = CONCAT31(extraout_var,bVar1);
    fVar3 = ((float10)GEN_TOD((*(int *)(this + 0x198) + 1)));
    if (*(int *)(this + 0x198) + 1 < 0) {
      fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    *(float *)(this + 0x1a0) = (float)fVar3;
    this[0x19c] = (undefined1)0x1;
  }
  return uVar2;
}

/* ref: Client::UI2::AddonSelectYesNoCount::vf2 */
unsigned int F_007e92c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7e92c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  int iVar2;
  
  if ((short)param_1 != 0x17) {
    return 0;
  }
  if (param_2 == 0) {
    F_00557670(param_3,0);
    bVar1 = F_00920fd0(this);
  }
  else {
    if (param_2 != 1) {
      if (param_2 == 3) {
        F_00908b50(this);
        F_00557670(param_3,0);
        return 0;
      }
      goto LAB_007e9328;
    }
    F_00557670(param_3,0);
    bVar1 = F_009210f0(this);
  }
  if (bVar1 == 0) {
    return 0;
  }
LAB_007e9328: ;
  F_00557670(param_3,0);
  if (this[0x19e] == (undefined1)0x0) {
    (*(int *)(gen_frame + 0x8)) = param_2;
  }
  else {
    iVar2 = param_2;
    if ((param_2 == 0) && (iVar2 = 7, *((char *)GEN_TOP((*(int *)(this + 400) + 0x88))) == '\x01')) {
      iVar2 = 6;
    }
    (*(int *)(gen_frame + 0x8)) = iVar2;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return 0;
}

/* ref: Client::UI2::AddonSelectYesNoCount::vf52 */
byte F_007e9390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e9390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  if ((this[0x19c] != (undefined1)0x0) && (*param_1 == 2)) {
    F_009210f0(this);
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::AddonContextMenu::PopupMenuDerive::vf3 */
byte F_007e93c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e93c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  byte bVar2;
  bool bVar3;
  
  if ((param_1 != -1) && (this[0x32] != (undefined1)0x0)) {
    iVar1 = *(int *)(this + 0x10);
    if (iVar1 == 0) {
      return 0;
    }
    if (param_1 < 0) {
      return 0;
    }
    if (*(int *)(this + 0x24) <= param_1) {
      return 0;
    }
    if (*(int *)(this + 0x20) == 0) {
      bVar3 = *(int *)(iVar1 + param_1 * 4) != 1;
    }
    else {
      bVar3 = (*(byte *)(iVar1 + param_1 * 4) & 3) == 0;
    }
    if (!bVar3) {
      return 0;
    }
  }
  if (*(undefined * PTR32 *)(this + 0x1c) == (undefined *)0x0) {
    return 0;
  }
  bVar2 = F_00786d80(*(undefined * PTR32 *)(this + 0x1c),param_1);
  return bVar2;
}

/* ref: FUN_007e9420 */
uint F_007e9420(unsigned int gen_a0)
{
  GEN_ENTER(0x7e9420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d53c4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[5])REFP(0x10c4650));
  if (*(int *)((int)this + 400) != 0) {
    F_00406b30(*(int *)((int)this + 400));
    *(undefined4 *)((int)this + 400) = 0;
  }
  if (*(int *)((int)this + 0x18c) != 0) {
    F_00406b30(*(int *)((int)this + 0x18c));
    *(undefined4 *)((int)this + 0x18c) = 0;
  }
  if (*(int *)((int)this + 0x188) != 0) {
    F_00406b30(*(int *)((int)this + 0x188));
    *(undefined4 *)((int)this + 0x188) = 0;
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonContextMenu::vf37 */
uint F_007e94a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7e94a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00586850(*(undefined * PTR32 *)(this + 0x184),3,0,this + 0x180);
  if (*(int *)(this + 0x198) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x70))),0x21,0,this + 0x180,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonContextMenu::vf44 */
uint F_007e94e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e94e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  undefined * this_00;
  
  *(undefined2 *)(this + 0x136) = 1;
  F_0055e1c0(this,(float)(float10)0,0,0,(float)(float10)1,0);
  F_0055e220(this,(float)(float10)0,0,0,(float)(float10)1,0);
  uVar1 = F_0055e320(this);
  if (uVar1 == 0) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = *(undefined * PTR32 *)(uVar1 + 0x70);
  }
  pvVar2 = (undefined *)F_0055e2f0(this,2);
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = pvVar2;
  piVar3 = (int *)F_0055e320(this);
  ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,0);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00559c20(this_00);
    (*(uint *)(gen_frame + 0x14)) = uVar1;
    if ((uVar1 != 0) && (uVar4 = F_005613a0(uVar1), uVar1 = (*(uint *)(gen_frame + 0x14)), uVar4 == 2))
    goto LAB_007e957c;
  }
  uVar1 = 0;
LAB_007e957c: ;
  *(uint *)(this + 0x194) = uVar1;
  if (uVar1 != 0) {
    F_0055a000(*(undefined * PTR32 *)(uVar1 + 0x70),((ushort *)(gen_frame + 0x18)),((ushort *)(gen_frame + 0xc)));
    *(uint *)(this + 0x1a8) = (uint)((ushort *)(gen_frame + 0x18))[0];
  }
  uVar1 = F_007e74f0(this + 0x180,(*(undefined * PTR32 *)(gen_frame + 0x10)),2,0);
  pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x10));
  *(undefined4 *)(this + 0xa0) = 0;
  if ((this_00 != (undefined *)0x0) && ((*(undefined * PTR32 *)(gen_frame + 0x10)) != (undefined *)0x0)) {
    F_0055a000(this_00,&(*(uint *)(gen_frame + 0x14)),((ushort *)(gen_frame + 0xc)));
    F_0055a000(pvVar2,((ushort *)(gen_frame + 0x18)),&(*(undefined * PTR32 *)(gen_frame + 0x10)));
    uVar1 = (uint)((ushort *)(gen_frame + 0xc))[0] - ((uint)(*(undefined * PTR32 *)(gen_frame + 0x10)) & 0xffff);
    *(uint *)(this + 0x1b8) = ((*(uint *)(gen_frame + 0x14)) & 0xffff) - (uint)((ushort *)(gen_frame + 0x18))[0];
    *(uint *)(this + 0x1bc) = uVar1;
  }
  return uVar1;
}

/* ref: Client::UI2::AddonContextMenu::vf46 */
byte F_007e9620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e9620u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined * this_00;
  undefined4 uVar2;
  float10 fVar3;
  short * psVar4;
  undefined4 * puVar5;
  
  iVar1 = (*(int *)&gen_args[1]);
  if (1 < (*(int *)&gen_args[1])) {
    *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x19c))) = 0;
    F_00586850(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))),3,0,(*(undefined * PTR32 *)&gen_args[0]) + 0x180);
    *((undefined2 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))) = 0;
    if ((*(*(byte * PTR32 *)&gen_args[2]) & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 4)));
    }
    F_007e7630((*(undefined * PTR32 *)&gen_args[0]) + 0x180,(*(undefined * PTR32 *)&gen_args[0]),iVar1 + -1,(*(byte * PTR32 *)&gen_args[2]) + 8,uVar2,1,*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b8))) >> 1,
                 *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1bc))) >> 1,1,0,1,0);
    puVar5 = &(*(int *)&gen_args[1]);
    psVar4 = ((short *)(gen_frame + 0x8));
    this_00 = (undefined *)F_0055dcb0();
    F_0055ba20(this_00,psVar4,puVar5);
    fVar3 = F_0055df60((*(undefined * PTR32 *)&gen_args[0]));
    (*(byte * PTR32 *)&gen_args[2]) = (byte *)(int)((short *)(gen_frame + 0x8))[0];
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))))
              ((*(undefined * PTR32 *)&gen_args[0]),(int)((float10)(int)(*(byte * PTR32 *)&gen_args[2]) -
                         (float10)(float)fVar3 * (float10)*(double *)&REFG(undefined, 0x1088120)) & 0xffff,
               (int)((float10)(int)(short)(*(int *)&gen_args[1]) -
                    (float10)*(double *)&REFG(undefined, 0x10cdac8) * (float10)(float)fVar3) & 0xffff);
    F_0056b300((*(undefined * PTR32 *)&gen_args[0]),0);
    F_005874c0((*(undefined * PTR32 *)&gen_args[0]) + 0x24,*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x90))),0);
    F_0056ae10((*(undefined * PTR32 *)&gen_args[0]));
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::AddonSelectString::PopupMenuDerive::vf3 */
byte F_007e9740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e9740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined * this_00;
  bool bVar2;
  
  if ((param_1 != -1) && (this[0x32] != (undefined1)0x0)) {
    iVar1 = *(int *)(this + 0x10);
    if ((iVar1 != 0) && ((-1 < param_1 && (param_1 < *(int *)(this + 0x24))))) {
      if (*(int *)(this + 0x20) == 0) {
        bVar2 = *(int *)(iVar1 + param_1 * 4) != 1;
      }
      else {
        bVar2 = (*(byte *)(iVar1 + param_1 * 4) & 3) == 0;
      }
      if (bVar2) goto LAB_007e9788;
    }
    return 0;
  }
LAB_007e9788: ;
  this_00 = *(undefined * PTR32 *)(this + 0x1c);
  if (this_00 != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
    (*(int *)(gen_frame + 0x8)) = param_1;
    F_005a9110(this_00,1,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
    return 1;
  }
  return 0;
}

/* ref: FUN_007e97d0 */
uint F_007e97d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7e97d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d54c4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x198) = (*(undefined * PTR32 (*)[5])REFP(0x10c4650));
  if (*(int *)((int)this + 0x1a8) != 0) {
    F_00406b30(*(int *)((int)this + 0x1a8));
    *(undefined4 *)((int)this + 0x1a8) = 0;
  }
  if (*(int *)((int)this + 0x1a4) != 0) {
    F_00406b30(*(int *)((int)this + 0x1a4));
    *(undefined4 *)((int)this + 0x1a4) = 0;
  }
  if (*(int *)((int)this + 0x1a0) != 0) {
    F_00406b30(*(int *)((int)this + 0x1a0));
    *(undefined4 *)((int)this + 0x1a0) = 0;
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x198) = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonSelectString::vf5 */
uint F_007e9850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7e9850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (((byte)this[0xf9] & 1) != 0) {
    if (*(int *)(this + 0x1b0) != 0) {
      uVar1 = F_0055a350(*((undefined4 *)GEN_TOP((*(int *)(this + 0x1b0) + 0x70))));
      if ((char)uVar1 == '\0') {
        F_00562110(*(undefined * PTR32 *)(this + 0x1b0),1);
      }
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1b0) + 0x78))))(*(int * PTR32 *)(this + 0x1b0));
  }
  uVar1 = F_005a89b0(this,param_1,1);
  return uVar1;
}

/* ref: Client::UI2::AddonSelectString::vf37 */
uint F_007e98b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7e98b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00586850(*(undefined * PTR32 *)(this + 0x19c),3,0,this + 0x198);
  if (*(int *)(this + 0x1b0) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1b0) + 0x70))),0x21,0,this + 0x198,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonSelectString::vf44 */
uint F_007e98f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e98f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  code * pcVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined * pvVar5;
  undefined * this_00;
  int iVar6;
  
  uVar3 = F_0055e320(this);
  if ((uVar3 != 0) && (*(int *)(uVar3 + 0x70) != 0)) {
    uVar3 = F_00559c20(*(int *)(uVar3 + 0x70));
    if ((uVar3 == 0) || (uVar4 = F_005613a0(uVar3), uVar4 != 2)) {
      uVar3 = 0;
    }
    *(uint *)(this + 0x1ac) = uVar3;
    if (uVar3 != 0) {
      F_0055a000(*(undefined * PTR32 *)(uVar3 + 0x70),((ushort *)(gen_frame + 0x18)),((ushort *)(gen_frame + 0x8)));
      *(uint *)(this + 0x1c0) = (uint)((ushort *)(gen_frame + 0x18))[0];
    }
  }
  pvVar5 = (undefined *)F_0055e2f0(this,3);
  this_00 = (undefined *)F_0055e340(this,2);
  if (this_00 != (undefined *)0x0) {
    F_00559d30(this_00,((undefined1 *)(gen_frame + 0x14)),this + 0x18c);
    F_0055a000(this_00,this + 0x188,this + 0x18a);
  }
  if (pvVar5 != (undefined *)0x0) {
    F_007e74f0(this + 0x198,pvVar5,2,0);
    F_00559d30(pvVar5,((undefined1 *)(gen_frame + 0x14)),this + 0x18e);
    pcVar1 = *(gen_code32 *)(*(int *)this + 0x48);
    *(short *)(this + 400) =
         (*(short *)(this + 0x18e) - *(short *)(this + 0x18c)) - *(short *)(this + 0x18a);
    iVar6 = 0;
    (*pcVar1)(this,((ushort *)(gen_frame + 0x10)),((ushort *)(gen_frame + 0x8)),0);
    F_0055a000(pvVar5,((ushort *)(gen_frame + 0x18)),((ushort *)(gen_frame + 0xc)));
    *(uint *)(this + 0x180) = (uint)((ushort *)(gen_frame + 0x10))[0] - (uint)((ushort *)(gen_frame + 0x18))[0];
    *(uint *)(this + 0x184) = (uint)((ushort *)(gen_frame + 0x8))[0] - (uint)((ushort *)(gen_frame + 0xc))[0];
    uVar3 = F_0055e2f0(this,3);
    if (uVar3 == 0) {
      (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)0x0;
    }
    else {
      (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)F_00559c20(uVar3);
      if (((*(undefined * PTR32 *)(gen_frame + 0x4)) == (undefined *)0x0) || (uVar3 = F_005613a0((*(undefined * PTR32 *)(gen_frame + 0x4))), uVar3 != 9)) {
        (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)0x0;
      }
    }
    if ((this[0x1d0] != (undefined1)0x0) && ((*(undefined * PTR32 *)(gen_frame + 0x4)) != (undefined *)0x0)) {
      F_0055a000(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x70),this + 0x192,this + 0x194);
      uVar2 = F_0056d300((*(undefined * PTR32 *)(gen_frame + 0x4)),0);
      if (uVar2 != 0) {
        do {
          pvVar5 = (undefined *)F_0056d250((*(undefined * PTR32 *)(gen_frame + 0x4)),0,iVar6);
          if (pvVar5 != (undefined *)0x0) {
            F_00561f00(pvVar5,1);
            pvVar5 = *(undefined * PTR32 *)((int)pvVar5 + 0x104);
            if (pvVar5 != (undefined *)0x0) {
              *(uint *)((int)pvVar5 + 0x84) = *(uint *)((int)pvVar5 + 0x84) | 0x50000;
              F_0055ac70(pvVar5,1);
            }
          }
          iVar6 = iVar6 + 1;
        } while ((ushort)iVar6 < uVar2);
      }
    }
  }
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,param_2);
  return uVar3;
}

/* ref: Client::UI2::AddonSelectString::vf46 */
byte F_007e9ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e9ae0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  short sVar2;
  int * this_00;
  char * pcVar3;
  byte * pbVar4;
  ushort uVar5;
  uint uVar6;
  undefined * this_01;
  char * pcVar7;
  uint uVar8;
  bool bVar9;
  
  uVar8 = (*(uint *)(gen_frame + 0x20));
  pbVar4 = (*(byte * PTR32 *)&gen_args[2]);
  if ((*(byte * PTR32 *)&gen_args[2]) != (byte *)0x0) {
    this_00 = *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1ac)));
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x20)) = uVar8 & 0xffffff00;
    if (this_00 != (int *)0x0) {
      bVar9 = ((byte)*(undefined4 *)(*(byte * PTR32 *)&gen_args[2]) & 0xf) == 6;
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 0)) = bVar9;
      (*(uint *)(gen_frame + 0x20)) = CONCAT31((int3)(uVar8 >> 8),bVar9);
      ((code *)*(gen_code32 *)(*this_00 + 0x5c))(this_00,(*(uint *)(gen_frame + 0x20)));
      if ((char)(*(uint *)(gen_frame + 0x20)) != '\0') {
        if ((pbVar4[8] & 0xf) == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(uint *)(pbVar4 + 0xc);
        }
        if ((*pbVar4 & 0xf) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(uint *)(pbVar4 + 4);
        }
        F_0058a320(this_00,uVar6,uVar8);
        uVar5 = F_00562da0(this_00);
        (*(uint *)(gen_frame + 0x1c)) = (uint)uVar5;
      }
    }
    this_01 = (undefined *)F_0055e340((*(undefined * PTR32 *)&gen_args[0]),2);
    if ((pbVar4[0x18] & 0xf) == 0) {
      uVar8 = (*(int *)&gen_args[1]) - 4;
    }
    else {
      uVar8 = *(uint *)(pbVar4 + 0x1c);
      if ((int)uVar8 < 0) {
        (*(undefined * PTR32 *)&gen_args[0])[0xf8] = (undefined1)((byte)(*(undefined * PTR32 *)&gen_args[0])[0xf8] | 1);
      }
      uVar8 = uVar8 & 0x7fffffff;
    }
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 *)&gen_args[0]) + 0x198;
    F_007e7630((*(undefined * PTR32 *)&gen_args[0]) + 0x198,(*(undefined * PTR32 *)&gen_args[0]),(*(int *)&gen_args[1]) + -4,pbVar4 + 0x20,uVar8,1,*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))) >> 1,
                 (int)(*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))) - (uint)*((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18a)))) >> 1,0,1,0,
                 (uint)(byte)(*(undefined * PTR32 *)&gen_args[0])[0x1d0]);
    if ((*(undefined * PTR32 *)&gen_args[0])[0x1d0] == (undefined1)0x0) {
      F_007e7860((*(undefined * PTR32 *)(gen_frame + 0x18)),(uint)(ushort)((*((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c))) - *((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18e)))) +
                                          (short)(*(uint *)(gen_frame + 0x1c))),0);
    }
    else {
      uVar8 = F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),3);
      if (uVar8 == 0) {
        ((uint *)(gen_frame + 0x8))[3] = 0;
      }
      else {
        uVar8 = F_00559c20(uVar8);
        if ((uVar8 == 0) || (uVar6 = F_005613a0(uVar8), uVar6 != 9)) {
          ((uint *)(gen_frame + 0x8))[3] = 0;
        }
        else {
          ((uint *)(gen_frame + 0x8))[3] = uVar8;
        }
      }
      ((uint *)(gen_frame + 0x8))[1] = 0;
      ((uint *)(gen_frame + 0x8))[2] = 0;
      if ((((uint *)(gen_frame + 0x8))[3] != 0) && (this_01 != (undefined *)0x0)) {
        F_0055a000(*(undefined * PTR32 *)(((uint *)(gen_frame + 0x8))[3] + 0x70),((uint *)(gen_frame + 0x8)) + 1,((uint *)(gen_frame + 0x8)) + 2);
        F_007e7860((*(undefined * PTR32 *)(gen_frame + 0x18)),0,1);
        if (((byte)*(undefined4 *)(pbVar4 + 0x10) & 0xf) == 6) {
          pcVar3 = *(char * PTR32 *)(pbVar4 + 0x14);
          pcVar7 = pcVar3;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          bVar9 = (uint)((int)pcVar7 - (int)(pcVar3 + 1)) < 2;
          if (bVar9) {
            F_00584580(this_01,1);
            F_0055a300(this_01,0);
          }
          else {
            F_0055a300(this_01,1);
            F_00584580(this_01,1);
            F_00584110(this_01,pcVar3);
          }
          F_00559d30(this_01,((uint *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x24)));
          uVar5 = *((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c)));
          uVar8 = (*(uint *)(gen_frame + 0x1c));
          if ((char)(*(uint *)(gen_frame + 0x20)) == '\0') {
            uVar8 = -(*(uint *)(gen_frame + 0x1c));
          }
          (*(uint *)(gen_frame + 0x24)) = uVar5 + uVar8;
          F_00559e00(this_01,((uint *)(gen_frame + 0x8))[0],uVar5 + uVar8);
          F_00577d20(this_01,((undefined1 *)(gen_frame + 0x28)),&(*(byte * PTR32 *)&gen_args[2]),0,0,REFG(undefined4, 0x108cc50),0);
          if (!bVar9) {
            sVar2 = *((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 400)));
            sVar2 = (short)(*(uint *)(gen_frame + 0x24)) + sVar2 + (short)(*(byte * PTR32 *)&gen_args[2]);
            (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 0)) = sVar2;
            (*(uint *)(gen_frame + 0x24)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 2)),sVar2);
          }
          uVar5 = F_005c04e0(((uint *)(gen_frame + 0x8))[3]);
          F_007e7860((*(undefined * PTR32 *)(gen_frame + 0x18)),(*(uint *)(gen_frame + 0x24)) - uVar5,0);
          return 1;
        }
      }
    }
  }
  return 1;
}

/* ref: Client::UI2::AddonListGrid::vf37 */
uint F_007e9d60(unsigned int gen_a0)
{
  GEN_ENTER(0x7e9d60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x188) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70))),0x21,0,this,0);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 0x188) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    F_005840a0(pvVar1,0x20,2,this,0);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 0x188) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    F_005840a0(pvVar1,0x1f,3,this,0);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 0x188) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    F_005840a0(pvVar1,0x2d,4,this,0);
  }
  if (*(int *)(this + 0x18c) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70))),3,0,this,0);
  }
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: Client::UI2::AddonListGrid::vf44 */
uint F_007e9df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e9df0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined * pvVar2;
  undefined3 extraout_var = 0;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,param_2);
  if (*(int *)(this + 0x188) != 0) {
    F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70))),0x21,0,this,0,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x188) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    F_00568380(pvVar2,0x20,2,this,0,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x188) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    F_00568380(pvVar2,0x1f,3,this,0,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x188) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
    }
    F_00568380(pvVar2,0x2d,4,this,0,0);
  }
  if (*(int *)(this + 0x18c) != 0) {
    F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70))),3,0,this,0,0);
  }
  bVar1 = F_0056b630(this,0xd07,7,0,9,0,0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonListGrid::vf46 */
byte F_007e9ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7e9ec0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  byte * pbVar5;
  uint uVar6;
  
  pbVar5 = (*(byte * PTR32 *)&gen_args[2]);
  if ((*(byte * PTR32 *)&gen_args[2]) != (byte *)0x0) {
    pvVar1 = (undefined *)F_0055e320((*(undefined * PTR32 *)&gen_args[0]));
    if (pvVar1 != (undefined *)0x0) {
      if (((*(byte * PTR32 *)&gen_args[2])[8] & 0xf) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *((uint *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 0xc)));
      }
      if ((*(*(byte * PTR32 *)&gen_args[2]) & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *((uint *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 4)));
      }
      F_0058a320(pvVar1,uVar2,uVar6);
      F_0056e010(pvVar1,1);
    }
    if (((*(byte * PTR32 *)&gen_args[2])[0x18] & 0xf) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 0x1c)));
    }
    (*(byte * PTR32 *)&gen_args[2]) = ((byte *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(byte * PTR32 *)&gen_args[2]), 1, 3),iVar3 != 0)));
    uVar6 = F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),2);
    if (((uVar6 == 0) || (pvVar1 = (undefined *)F_00559c20(uVar6), pvVar1 == (undefined *)0x0)) ||
       (uVar6 = F_005613a0(pvVar1), uVar6 != 9)) {
      pvVar1 = (undefined *)0x0;
    }
    *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x188))) = pvVar1;
    if (pvVar1 != (undefined *)0x0) {
      if ((((byte)*(undefined4 *)(pbVar5 + 0x10) & 0xf) == 4) &&
         ((short)*(undefined4 *)(pbVar5 + 0x14) != 0)) {
        F_005b1d70(pvVar1,*(undefined4 *)(pbVar5 + 0x14));
      }
      if ((pbVar5[0x28] & 0xf) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(uint *)(pbVar5 + 0x2c);
      }
      *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))) = uVar6;
      F_0059ead0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x188))),uVar6 & 0xffff,0,1);
      pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x188)));
      *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 400))) = 2;
      (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
      (*(gen_code32 *)(gen_frame + 0x10)) = ((code *)REFP(0x7872a0));
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      F_00574320(pvVar1,&(*(undefined * PTR32 *)(gen_frame + 0xc)),(*(undefined * PTR32 *)&gen_args[0]) + 400,1,0);
      F_0056d690(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x188))),(*(byte * PTR32 *)&gen_args[2]),0);
      if ((pbVar5[0x18] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(pbVar5 + 0x1c);
      }
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x188))) + 0xe4))) = uVar4;
      uVar6 = F_00561490(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x188))),2);
      if (((uVar6 == 0) || (uVar6 = F_00559c20(uVar6), uVar6 == 0)) ||
         (uVar2 = F_005613a0(uVar6), uVar2 != 0xd)) {
        uVar6 = 0;
      }
      *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c))) = uVar6;
    }
    uVar4 = 0;
    uVar6 = F_00404270();
    uVar6 = F_00406c00(-(uint)((int)((ulonglong)*((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))) * 0x10 >> 0x20) != 0) |
                         (uint)((ulonglong)*((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))) * 0x10),0,uVar6,uVar4);
    *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x19c))) = uVar6;
    if ((uVar6 != 0) && (uVar6 = 0, *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))) != 0)) {
      iVar3 = 0;
      pbVar5 = pbVar5 + 0x44;
      do {
        if ((pbVar5[-0x14] & 0xf) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(pbVar5 + -0x10);
        }
        *((undefined4 *)GEN_TOP((iVar3 + *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x19c)))))) = uVar4;
        if ((pbVar5[-0xc] & 0xf) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(pbVar5 + -8);
        }
        *((undefined4 *)GEN_TOP((iVar3 + 4 + *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x19c)))))) = uVar4;
        if ((pbVar5[-4] & 0xf) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)pbVar5;
        }
        *((undefined4 *)GEN_TOP((iVar3 + 8 + *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x19c)))))) = uVar4;
        if ((pbVar5[4] & 0xf) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(pbVar5 + 8);
        }
        *((undefined4 *)GEN_TOP((iVar3 + 0xc + *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x19c)))))) = uVar4;
        uVar6 = uVar6 + 1;
        pbVar5 = pbVar5 + 0x20;
        iVar3 = iVar3 + 0x10;
      } while (uVar6 < *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))));
    }
    pvVar1 = (undefined *)F_0055e340((*(undefined * PTR32 *)&gen_args[0]),3);
    *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))) = pvVar1;
    if (pvVar1 != (undefined *)0x0) {
      F_00584110(pvVar1,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x19c))) + 8))));
    }
  }
  return 1;
}

/* ref: Client::UI2::AddonListIcon::vf37 */
uint F_007ea110(unsigned int gen_a0)
{
  GEN_ENTER(0x7ea110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * pAVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x19c) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 0x70))),0x21,0,this,0);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 0x19c) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 0x70)));
    }
    F_005840a0(pvVar1,0x20,2,this,0);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 0x19c) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 0x70)));
    }
    F_005840a0(pvVar1,0x1f,3,this,0);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 0x19c) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 0x70)));
    }
    F_005840a0(pvVar1,0x2d,4,this,0);
  }
  uVar3 = 0;
  pAVar2 = this + 0x1a4;
  do {
    if (*(int *)pAVar2 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*(int *)pAVar2 + 0x70),0x17,uVar3 + 100,this,0);
    }
    uVar3 = uVar3 + 1;
    pAVar2 = pAVar2 + 4;
  } while (uVar3 < 10);
  uVar3 = F_005b0510((undefined *)this);
  return uVar3;
}

/* ref: FUN_007ea1c0 */
uint F_007ea1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ea1c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  byte bVar2;
  ushort uVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined4 uVar4;
  
  if (*(int *)((int)this + 0x188) != 0) {
    uVar4 = *(undefined4 *)((int)this + 0x1a4);
    (*(short *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0x97ff;
    F_0055e430(this,((undefined2 *)(gen_frame + 0x18)),((short *)(gen_frame + 0x14)),uVar4);
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 1)) = 0x40;
    (*(undefined4 *)(gen_frame + 0x10)) = 0xc8e;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 1;
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = ((undefined2 *)(gen_frame + 0x18))[0];
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22(((undefined2 *)(gen_frame + 0x18))[0],0x4001);
    (*(short *)(gen_frame + 0xc)) = ((short *)(gen_frame + 0x14))[0];
    F_0056b6e0(this,&(*(undefined4 *)(gen_frame + 0x8)));
    iVar1 = *(int *)((int)this + 0x1c8);
    F_0055e430(this,((short *)(gen_frame + 0x14)),((undefined2 *)(gen_frame + 0x18)),iVar1);
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(iVar1 + 0x70);
    }
    uVar3 = F_0055a020(uVar4);
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = ((short *)(gen_frame + 0x14))[0] + uVar3;
    (*(short *)(gen_frame + 0xc)) = ((undefined2 *)(gen_frame + 0x18))[0];
    (*(undefined4 *)(gen_frame + 0x10)) = 0xc8d;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 2;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 1)) = 0x40;
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22(((short *)(gen_frame + 0x14))[0] + uVar3,0x4002);
    F_0056b6e0(this,&(*(undefined4 *)(gen_frame + 0x8)));
  }
  if (param_1 == 1) {
    bVar2 = F_0056b630(this,0x18ad5,7,0,9,0,0);
    return CONCAT31(extraout_var,bVar2);
  }
  bVar2 = F_0056b780(this,0);
  return CONCAT31(extraout_var_00,bVar2);
}

/* ref: Client::UI2::AddonSelectIconString::PopupMenuDerive::vf3 */
byte F_007ea2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ea2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined * this_00;
  bool bVar2;
  
  if ((param_1 != -1) && (this[0x32] != (undefined1)0x0)) {
    iVar1 = *(int *)(this + 0x10);
    if ((iVar1 != 0) && ((-1 < param_1 && (param_1 < *(int *)(this + 0x24))))) {
      if (*(int *)(this + 0x20) == 0) {
        bVar2 = *(int *)(iVar1 + param_1 * 4) != 1;
      }
      else {
        bVar2 = (*(byte *)(iVar1 + param_1 * 4) & 3) == 0;
      }
      if (bVar2) goto LAB_007ea308;
    }
    return 0;
  }
LAB_007ea308: ;
  this_00 = *(undefined * PTR32 *)(this + 0x1c);
  if (this_00 != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
    (*(int *)(gen_frame + 0x8)) = param_1;
    F_005a9110(this_00,1,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
    return 1;
  }
  return 0;
}

/* ref: FUN_007ea350 */
uint F_007ea350(unsigned int gen_a0)
{
  GEN_ENTER(0x7ea350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d55c4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x198) = (*(undefined * PTR32 (*)[5])REFP(0x10c4650));
  if (*(int *)((int)this + 0x1a8) != 0) {
    F_00406b30(*(int *)((int)this + 0x1a8));
    *(undefined4 *)((int)this + 0x1a8) = 0;
  }
  if (*(int *)((int)this + 0x1a4) != 0) {
    F_00406b30(*(int *)((int)this + 0x1a4));
    *(undefined4 *)((int)this + 0x1a4) = 0;
  }
  if (*(int *)((int)this + 0x1a0) != 0) {
    F_00406b30(*(int *)((int)this + 0x1a0));
    *(undefined4 *)((int)this + 0x1a0) = 0;
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x198) = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonSelectIconString::vf37 */
uint F_007ea3d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7ea3d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00586850(*(undefined * PTR32 *)(this + 0x19c),3,0,this + 0x198);
  if (*(int *)(this + 0x1b0) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1b0) + 0x70))),0x21,0,this + 0x198,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonSelectIconString::vf44 */
uint F_007ea410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ea410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  code * pcVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined * pvVar5;
  undefined * this_00;
  int iVar6;
  
  uVar3 = F_0055e320(this);
  if ((uVar3 != 0) && (*(int *)(uVar3 + 0x70) != 0)) {
    uVar3 = F_00559c20(*(int *)(uVar3 + 0x70));
    if ((uVar3 == 0) || (uVar4 = F_005613a0(uVar3), uVar4 != 2)) {
      uVar3 = 0;
    }
    *(uint *)(this + 0x1ac) = uVar3;
    if (uVar3 != 0) {
      F_0055a000(*(undefined * PTR32 *)(uVar3 + 0x70),((ushort *)(gen_frame + 0x18)),((ushort *)(gen_frame + 0x8)));
      *(uint *)(this + 0x1c0) = (uint)((ushort *)(gen_frame + 0x18))[0];
    }
  }
  pvVar5 = (undefined *)F_0055e2f0(this,2);
  this_00 = (undefined *)F_0055e340(this,3);
  if (this_00 != (undefined *)0x0) {
    F_00559d30(this_00,((undefined1 *)(gen_frame + 0x14)),this + 0x18c);
    F_0055a000(this_00,this + 0x188,this + 0x18a);
  }
  if (pvVar5 != (undefined *)0x0) {
    F_007e74f0(this + 0x198,pvVar5,2,3);
    F_00559d30(pvVar5,((undefined1 *)(gen_frame + 0x14)),this + 0x18e);
    pcVar1 = *(gen_code32 *)(*(int *)this + 0x48);
    *(short *)(this + 400) =
         (*(short *)(this + 0x18e) - *(short *)(this + 0x18c)) - *(short *)(this + 0x18a);
    iVar6 = 0;
    (*pcVar1)(this,((ushort *)(gen_frame + 0x10)),((ushort *)(gen_frame + 0x8)),0);
    F_0055a000(pvVar5,((ushort *)(gen_frame + 0x18)),((ushort *)(gen_frame + 0xc)));
    *(uint *)(this + 0x180) = (uint)((ushort *)(gen_frame + 0x10))[0] - (uint)((ushort *)(gen_frame + 0x18))[0];
    *(uint *)(this + 0x184) = (uint)((ushort *)(gen_frame + 0x8))[0] - (uint)((ushort *)(gen_frame + 0xc))[0];
    uVar3 = F_0055e2f0(this,2);
    if (uVar3 == 0) {
      (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)0x0;
    }
    else {
      (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)F_00559c20(uVar3);
      if (((*(undefined * PTR32 *)(gen_frame + 0x4)) == (undefined *)0x0) || (uVar3 = F_005613a0((*(undefined * PTR32 *)(gen_frame + 0x4))), uVar3 != 9)) {
        (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)0x0;
      }
    }
    if ((this[0x1d0] != (undefined1)0x0) && ((*(undefined * PTR32 *)(gen_frame + 0x4)) != (undefined *)0x0)) {
      F_0055a000(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x70),this + 0x192,this + 0x194);
      uVar2 = F_0056d300((*(undefined * PTR32 *)(gen_frame + 0x4)),0);
      if (uVar2 != 0) {
        do {
          pvVar5 = (undefined *)F_0056d250((*(undefined * PTR32 *)(gen_frame + 0x4)),0,iVar6);
          if (pvVar5 != (undefined *)0x0) {
            F_00561f00(pvVar5,1);
            pvVar5 = *(undefined * PTR32 *)((int)pvVar5 + 0x104);
            if (pvVar5 != (undefined *)0x0) {
              *(uint *)((int)pvVar5 + 0x84) = *(uint *)((int)pvVar5 + 0x84) | 0x50000;
              F_0055ac70(pvVar5,1);
            }
          }
          iVar6 = iVar6 + 1;
        } while ((ushort)iVar6 < uVar2);
      }
    }
  }
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,param_2);
  return uVar3;
}

/* ref: Client::UI2::AddonSelectIconString::vf46 */
byte F_007ea600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ea600u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  short sVar1;
  int * this_01;
  char * pcVar2;
  byte * pbVar3;
  undefined * this_02;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  char * pcVar7;
  uint uVar8;
  char cVar9;
  bool bVar10;
  
  uVar8 = (*(uint *)(gen_frame + 0x20));
  pbVar3 = (*(byte * PTR32 *)&gen_args[2]);
  if ((*(byte * PTR32 *)&gen_args[2]) != (byte *)0x0) {
    this_01 = *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1ac)));
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x20)) = uVar8 & 0xffffff00;
    if (this_01 != (int *)0x0) {
      bVar10 = ((byte)*(undefined4 *)(*(byte * PTR32 *)&gen_args[2]) & 0xf) == 6;
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 0)) = bVar10;
      (*(uint *)(gen_frame + 0x20)) = CONCAT31((int3)(uVar8 >> 8),bVar10);
      ((code *)*(gen_code32 *)(*this_01 + 0x5c))(this_01,(*(uint *)(gen_frame + 0x20)));
      if ((char)(*(uint *)(gen_frame + 0x20)) != '\0') {
        if ((pbVar3[8] & 0xf) == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(uint *)(pbVar3 + 0xc);
        }
        if ((*pbVar3 & 0xf) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(uint *)(pbVar3 + 4);
        }
        F_0058a320(this_01,uVar5,uVar8);
        uVar4 = F_00562da0(this_01);
        (*(uint *)(gen_frame + 0x1c)) = (uint)uVar4;
      }
    }
    (*(byte * PTR32 *)&gen_args[2]) = (byte *)F_0055e340((*(undefined * PTR32 *)&gen_args[0]),3);
    iVar6 = ((*(int *)&gen_args[1]) + -6) / 3;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    this_00 = (*(undefined * PTR32 *)&gen_args[0]) + 0x198;
    (*(undefined * PTR32 *)(gen_frame + 0x14)) = this_00;
    F_007e7630(this_00,(*(undefined * PTR32 *)&gen_args[0]),(*(int *)&gen_args[1]) + -6,pbVar3 + 0x30,iVar6,1,*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))) >> 1,
                 (int)(*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))) - (uint)*((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18a)))) >> 1,0,1,0,
                 (uint)(byte)(*(undefined * PTR32 *)&gen_args[0])[0x1d0]);
    if ((*(undefined * PTR32 *)&gen_args[0])[0x1d0] == (undefined1)0x0) {
      F_007e7860(this_00,(uint)(ushort)((*((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c))) - *((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18e)))) +
                                         (short)(*(uint *)(gen_frame + 0x1c))),0);
    }
    else {
      uVar8 = F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),2);
      if (uVar8 == 0) {
        (*(uint *)(gen_frame + 0x18)) = 0;
      }
      else {
        uVar8 = F_00559c20(uVar8);
        if ((uVar8 == 0) || (uVar5 = F_005613a0(uVar8), uVar5 != 9)) {
          (*(uint *)(gen_frame + 0x18)) = 0;
        }
        else {
          (*(uint *)(gen_frame + 0x18)) = uVar8;
        }
      }
      this_02 = (*(byte * PTR32 *)&gen_args[2]);
      ((uint *)(gen_frame + 0x8))[1] = 0;
      ((uint *)(gen_frame + 0x8))[2] = 0;
      if (((*(uint *)(gen_frame + 0x18)) != 0) && ((*(byte * PTR32 *)&gen_args[2]) != (undefined *)0x0)) {
        F_0055a000(*(undefined * PTR32 *)((*(uint *)(gen_frame + 0x18)) + 0x70),((uint *)(gen_frame + 0x8)) + 1,((uint *)(gen_frame + 0x8)) + 2);
        F_007e7860((*(undefined * PTR32 *)(gen_frame + 0x14)),0,1);
        if (((byte)*(undefined4 *)(pbVar3 + 0x18) & 0xf) == 6) {
          pcVar2 = *(char * PTR32 *)(pbVar3 + 0x1c);
          (*(byte * PTR32 *)&gen_args[2]) = ((byte *)GEN_TOP(((uint)(*(byte * PTR32 *)&gen_args[2]) & 0xffffff)));
          pcVar7 = pcVar2;
          do {
            cVar9 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar9 != '\0');
          if ((uint)((int)pcVar7 - (int)(pcVar2 + 1)) < 2) {
            F_00584580(this_02,1);
            F_0055a300(this_02,0);
            cVar9 = (*((undefined1 *)GEN_TOP(((char *)&(*(byte * PTR32 *)&gen_args[2]) + 3))));
          }
          else {
            F_0055a300(this_02,1);
            F_00584580(this_02,1);
            F_00584110(this_02,pcVar2);
            cVar9 = '\x01';
          }
          F_00559d30(this_02,((uint *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x24)));
          if ((char)(*(uint *)(gen_frame + 0x20)) == '\0') {
            sVar1 = (short)(*(uint *)(gen_frame + 0x24)) - (short)(*(uint *)(gen_frame + 0x1c));
            (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 0)) = sVar1;
          }
          else {
            sVar1 = (short)(*(uint *)(gen_frame + 0x24)) + (short)(*(uint *)(gen_frame + 0x1c));
            (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 0)) = sVar1;
          }
          (*(uint *)(gen_frame + 0x24)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 2)),sVar1);
          F_00559e00(this_02,((uint *)(gen_frame + 0x8))[0],(*(uint *)(gen_frame + 0x24)));
          F_00577d20(this_02,((undefined1 *)(gen_frame + 0x28)),&(*(int *)&gen_args[1]),0,0,REFG(undefined4, 0x108cc50),0);
          if (cVar9 != '\0') {
            sVar1 = *((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 400)));
            sVar1 = (short)(*(uint *)(gen_frame + 0x24)) + sVar1 + (short)(*(int *)&gen_args[1]);
            (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 0)) = sVar1;
            (*(uint *)(gen_frame + 0x24)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 2)),sVar1);
          }
          uVar4 = F_005c04e0((*(uint *)(gen_frame + 0x18)));
          F_007e7860((*(undefined * PTR32 *)(gen_frame + 0x14)),(uint)(ushort)((short)(*(uint *)(gen_frame + 0x24)) - uVar4),0);
          return 1;
        }
      }
    }
  }
  return 1;
}

/* ref: Client::UI2::AddonInputNumeric::vf37 */
uint F_007ea880(unsigned int gen_a0)
{
  GEN_ENTER(0x7ea880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(this + 0x180) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70))),0x17,0,this,0);
  }
  if (*(int *)(this + 0x184) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70))),0x17,1,this,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonInputNumeric::vf44 */
uint F_007ea8c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ea8c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,param_2);
  F_0055e1c0(this,*(float *)&REFG(undefined, 0x109feac),0,0x1e,(float)(float10)1,1);
  F_0055e220(this,*(float *)&REFG(undefined, 0x109feac),0,0x1e,(float)(float10)1,1);
  if (*(int *)(this + 0x180) != 0) {
    F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x70))),0x17,0,this,0,0);
  }
  if (*(int *)(this + 0x184) != 0) {
    F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x184) + 0x70))),0x17,1,this,0,0);
  }
  if (*(int *)(this + 0x198) != 0) {
    F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x70))),0xc,1,this,0,0);
  }
  piVar1 = *(int * PTR32 *)(this + 0x184);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1);
    *(uint *)(this + 0xa8) = uVar2;
    return uVar2;
  }
  *(undefined4 *)(this + 0xa8) = 0;
  return 0;
}

/* ref: Client::UI2::AddonInputString::vf37 */
uint F_007ea990(unsigned int gen_a0)
{
  GEN_ENTER(0x7ea990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(this + 0x194) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x194) + 0x70))),0x17,0x65,this,0);
  }
  if (*(int *)(this + 0x198) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x198) + 0x70))),0x17,0,this,0);
  }
  if (*(int *)(this + 0x19c) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 0x70))),0x17,1,this,0);
  }
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonInputString::vf2 */
uint F_007ea9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7ea9f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  uint uVar2;
  char * pcVar3;
  uint * this_00;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar2 = param_1 & 0xffff;
  if (uVar2 != 0x17) {
    if (uVar2 == 0x45) {
      uVar2 = F_007881b0(this);
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
      return uVar2;
    }
    goto LAB_007eab7d;
  }
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  if (param_2 == 0) {
    F_00557670(param_3,0);
    bVar1 = F_00908e50(this);
    if ((bVar1 == 1) || (this[0x188] != (undefined1)0x0)) {
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (*(int *)(this + 0x18c) == 0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = (char *)F_0042a990(*(int *)(this + 0x18c) + 0x9c);
      }
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),6);
      (*(char * PTR32 *)(gen_frame + 0xc)) = pcVar3;
      if (*(int *)(this + 400) == 0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = (char *)F_0042a990(*(int *)(this + 400) + 0x9c);
      }
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),6);
      (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar3;
      goto LAB_007eab5d;
    }
  }
  else {
    if (param_2 == 1) {
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
      (*(undefined4 *)(gen_frame + 0x4)) = 1;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),6);
      (*(char * PTR32 *)(gen_frame + 0xc)) = "";
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),6);
      (*(char * PTR32 *)(gen_frame + 0x14)) = "";
      F_00557670(param_3,0);
    }
    else {
      if (param_2 != 0x65) goto LAB_007eab66;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
      (*(undefined4 *)(gen_frame + 0x4)) = 0x65;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),6);
      (*(char * PTR32 *)(gen_frame + 0xc)) = "";
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),6);
      (*(char * PTR32 *)(gen_frame + 0x14)) = "";
      F_00557670(param_3,0);
    }
LAB_007eab5d: ;
    F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
  }
LAB_007eab66: ;
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar4 = 2;
  do {
    this_00 = this_00 + -2;
    uVar2 = F_005a2670(this_00);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
LAB_007eab7d: ;
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: FUN_007eab90 */
unsigned int F_007eab90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x7eab90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  undefined * param_5 = (undefined *)(uintptr_t)gen_a5;
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_2 != (undefined *)0x0) {
    if ((*(byte *)(param_1 + 0x50) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x54);
    }
    F_00584110(param_2,uVar1);
  }
  if (param_3 != (undefined *)0x0) {
    if ((*(byte *)(param_1 + 0x58) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x5c);
    }
    F_005b2fe0(param_3,uVar1);
    if ((*(byte *)(param_1 + 0x60) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 100);
    }
    F_0058eb50(param_3,uVar1);
    if ((*(byte *)(param_1 + 0x68) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x6c);
    }
    F_0058ebd0(param_3,uVar1);
    F_005636a0(param_3,1);
    if ((*(byte *)(param_1 + 0x98) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x9c);
    }
    if ((*(byte *)(param_1 + 0x90) & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x94);
    }
    F_00563480(param_3,uVar2,uVar1);
    *(undefined * PTR32 *)((int)param_3 + 0x144) = this;
    *(gen_code32 *)((int)param_3 + 0x148) = ((code *)REFP(0x7881a0));
    *(undefined4 *)((int)param_3 + 0x14c) = 0;
  }
  if (param_4 != (undefined *)0x0) {
    if ((*(byte *)(param_1 + 0x70) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x74);
    }
    F_00584110(param_4,uVar1);
  }
  if (param_5 != (undefined *)0x0) {
    if ((*(byte *)(param_1 + 0x78) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x7c);
    }
    F_005b2fe0(param_5,uVar1);
    if ((*(byte *)(param_1 + 0x80) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x84);
    }
    F_0058eb50(param_5,uVar1);
    if ((*(byte *)(param_1 + 0x88) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x8c);
    }
    F_0058ebd0(param_5,uVar1);
    F_005636a0(param_5,1);
    if ((*(byte *)(param_1 + 0x98) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x9c);
    }
    if ((*(byte *)(param_1 + 0x90) & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x94);
    }
    F_00563480(param_5,uVar2,uVar1);
    *(undefined * PTR32 *)((int)param_5 + 0x144) = this;
    *(gen_code32 *)((int)param_5 + 0x148) = ((code *)REFP(0x7881a0));
    *(undefined4 *)((int)param_5 + 0x14c) = 1;
  }
  return 0;
}

/* ref: Client::UI2::AddonListColorChooser::vf37 */
uint F_007ead20(unsigned int gen_a0)
{
  GEN_ENTER(0x7ead20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * pAVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x1a4) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x70))),0x21,0,this,0);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 0x1a4) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x70)));
    }
    F_005840a0(pvVar1,0x20,2,this,0);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 0x1a4) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x70)));
    }
    F_005840a0(pvVar1,0x1f,3,this,0);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 0x1a4) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x70)));
    }
    F_005840a0(pvVar1,0x2d,4,this,0);
  }
  uVar3 = 0;
  pAVar2 = this + 0x1ac;
  do {
    if (*(int *)pAVar2 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*(int *)pAVar2 + 0x70),0x17,uVar3 + 100,this,0);
    }
    uVar3 = uVar3 + 1;
    pAVar2 = pAVar2 + 4;
  } while (uVar3 < 10);
  uVar3 = F_005b0510((undefined *)this);
  return uVar3;
}

/* ref: Client::UI2::AddonListColorChooser::vf44 */
uint F_007eadd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7eadd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  undefined * pAVar3;
  uint uVar4;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,param_2);
  F_0055e1c0(this,*(float *)&REFG(undefined, 0x109feac),0,0x1e,(float)(float10)1,1);
  F_0055e220(this,*(float *)&REFG(undefined, 0x109feac),0,0x1e,(float)(float10)1,1);
  if (*(int *)(this + 0x1a4) != 0) {
    F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x70))),0x21,0,this,0,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x1a4) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x70)));
    }
    F_00568380(pvVar2,0x20,2,this,0,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x1a4) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x70)));
    }
    F_00568380(pvVar2,0x1f,3,this,0,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x1a4) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x70)));
    }
    F_00568380(pvVar2,0x2d,4,this,0,0);
  }
  uVar4 = 0;
  pAVar3 = this + 0x1ac;
  do {
    if (*(int *)pAVar3 == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar3 + 0x70);
    }
    uVar1 = F_00568380(pvVar2,0x17,uVar4 + 100,this,0,0);
    uVar4 = uVar4 + 1;
    pAVar3 = pAVar3 + 4;
  } while (uVar4 < 10);
  return uVar1;
}

/* ref: FUN_007eaed0 */
unsigned int F_007eaed0(unsigned int gen_a0)
{
  GEN_ENTER(0x7eaed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  ushort uVar2;
  undefined4 uVar3;
  
  if (*(int *)((int)this + 0x188) != 0) {
    uVar3 = *(undefined4 *)((int)this + 0x1ac);
    (*(short *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0x97ff;
    F_0055e430(this,((undefined2 *)(gen_frame + 0x18)),((short *)(gen_frame + 0x14)),uVar3);
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 1)) = 0x40;
    (*(undefined4 *)(gen_frame + 0x10)) = 0xc8e;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 1;
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = ((undefined2 *)(gen_frame + 0x18))[0];
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22(((undefined2 *)(gen_frame + 0x18))[0],0x4001);
    (*(short *)(gen_frame + 0xc)) = ((short *)(gen_frame + 0x14))[0];
    F_0056b6e0(this,&(*(undefined4 *)(gen_frame + 0x8)));
    iVar1 = *((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x188) * 4 + 0x1ac)));
    F_0055e430(this,((short *)(gen_frame + 0x14)),((undefined2 *)(gen_frame + 0x18)),iVar1);
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(iVar1 + 0x70);
    }
    uVar2 = F_0055a020(uVar3);
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 1)) = 0x40;
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = ((short *)(gen_frame + 0x14))[0] + uVar2;
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22(((short *)(gen_frame + 0x14))[0] + uVar2,0x4000);
    (*(undefined4 *)(gen_frame + 0x10)) = 0xc8d;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 2;
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),2);
    (*(short *)(gen_frame + 0xc)) = ((undefined2 *)(gen_frame + 0x18))[0];
    F_0056b6e0(this,&(*(undefined4 *)(gen_frame + 0x8)));
  }
  return 0;
}

/* ref: Client::UI2::AddonContextIconMenu::vf37 */
uint F_007eafb0(unsigned int gen_a0)
{
  GEN_ENTER(0x7eafb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * pAVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x1a0) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x70))),0x21,0,this,0);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 0x1a0) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x70)));
    }
    F_005840a0(pvVar1,0x20,2,this,0);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 0x1a0) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x70)));
    }
    F_005840a0(pvVar1,0x1f,3,this,0);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 0x1a0) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x70)));
    }
    F_005840a0(pvVar1,0x2d,4,this,0);
  }
  uVar3 = 0;
  pAVar2 = this + 0x1a8;
  do {
    if (*(int *)pAVar2 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*(int *)pAVar2 + 0x70),0x17,uVar3 + 100,this,0);
    }
    uVar3 = uVar3 + 1;
    pAVar2 = pAVar2 + 4;
  } while (uVar3 < 10);
  uVar3 = F_005b0510((undefined *)this);
  return uVar3;
}

/* ref: Client::UI2::AddonContextIconMenu::vf60 */
byte F_007eb060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7eb060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined1 AVar1;
  undefined1 AVar2;
  int iVar3;
  int iVar4;
  undefined4 in_ecx;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined * pAVar8;
  uint uVar9;
  uint uVar10;
  undefined4 * puVar11;
  
  iVar3 = *(int *)(this + 0x188);
  if (iVar3 != 0) {
    iVar6 = *(int *)(this + 0x184);
    if (param_1 == 0xf) {
      iVar4 = iVar6 + 1;
      if (iVar3 < iVar6 + 1) {
        if ((char)param_2 != '\0') {
          return 1;
        }
        iVar4 = 0;
      }
    }
    else {
      iVar4 = iVar6;
      if (((param_1 == 0x10) && (iVar4 = iVar6 + -1, iVar6 + -1 < 0)) &&
         (iVar4 = iVar3, (char)param_2 != '\0')) {
        return 1;
      }
    }
    if (iVar4 != iVar6) {
      F_00909050(this,iVar4);
      uVar9 = 0;
      pAVar8 = this + 0x1a8;
      do {
        in_ecx = 0;
        if (*(int *)pAVar8 != 0) {
          in_ecx = *(undefined4 *)(*(int *)pAVar8 + 0x70);
        }
        uVar5 = F_0055a2d0(in_ecx);
        if ((char)uVar5 != '\0') {
          F_0059dde0(*(undefined * PTR32 *)pAVar8,(uint)(uVar9 == *(uint *)(this + 0x184)));
        }
        uVar9 = uVar9 + 1;
        pAVar8 = pAVar8 + 4;
      } while (uVar9 <= *(uint *)(this + 0x188));
      F_00560760(&(*(undefined4 *)(gen_frame + 0x28)));
      iVar6 = *(int *)(this + 0x184) * 0x19 + *((int *)GEN_TOP((*(int *)(this + 0x1a0) + 0xcc)));
      AVar1 = this[0x18c];
      AVar2 = this[0x13a];
      iVar3 = *(int *)(this + 0x1a4) + iVar6 * 0x14;
      (*(undefined4 *)(gen_frame + 0x28)) = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1a4) + 8 + iVar6 * 0x14)));
      if (((byte)AVar1 & 0x80) == 0) {
        uVar5 = F_0055dcb0();
        uVar7 = 0;
        uVar9 = 0;
        puVar11 = &(*(undefined4 *)(gen_frame + 0x28));
        uVar10 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1a0) + 0x3c))))(*(int * PTR32 *)(this + 0x1a0));
        (*((undefined4 *)GEN_TOP((gen_frame + 0x4)))) = 2;
        (*((uint *)GEN_TOP((gen_frame + 0x8)))) = (uint)(byte)AVar2;
      }
      else {
        (*(undefined1 *)(gen_frame + 0x32)) = 2;
        (*(uint *)(gen_frame + 0x2c)) = (uint)*(ushort *)(iVar3 + 6);
        (*(undefined1 *)(gen_frame + 0x33)) = *(undefined1 *)(iVar3 + 4);
        uVar5 = F_0055dcb0();
        uVar10 = 0x7eb16b;
        uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1a0) + 0x3c))))
                          (*(int * PTR32 *)(this + 0x1a0),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
        puVar11 = (undefined4 *)&REFG(undefined, 0x6);
        uVar9 = (uint)(byte)AVar2;
      }
      F_00588780((undefined *)(uVar5 + 0xe0),(*((undefined4 *)GEN_TOP((gen_frame + 0x4)))),(*((uint *)GEN_TOP((gen_frame + 0x8)))),uVar10,puVar11,uVar9,
                   uVar7);
      uVar9 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar9 + 0x38) + 8))))(*(int * PTR32 *)(uVar9 + 0x38),((undefined1 *)(gen_frame + 0x34)),0xd);
      F_005a2670(((undefined1 *)(gen_frame + 0x34)));
    }
  }
  return 1;
}

/* ref: FUN_007eb1d0 */
unsigned int F_007eb1d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7eb1d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  ushort uVar2;
  undefined4 uVar3;
  
  if (*(int *)((int)this + 0x188) != 0) {
    uVar3 = *(undefined4 *)((int)this + 0x1a8);
    (*(short *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0x97ff;
    F_0055e430(this,((undefined2 *)(gen_frame + 0x18)),((short *)(gen_frame + 0x14)),uVar3);
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 1)) = 0x40;
    (*(undefined4 *)(gen_frame + 0x10)) = 0xc8e;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 1;
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = ((undefined2 *)(gen_frame + 0x18))[0];
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22(((undefined2 *)(gen_frame + 0x18))[0],0x4001);
    (*(short *)(gen_frame + 0xc)) = ((short *)(gen_frame + 0x14))[0];
    F_0056b6e0(this,&(*(undefined4 *)(gen_frame + 0x8)));
    iVar1 = *(int *)((int)this + 0x1cc);
    F_0055e430(this,((short *)(gen_frame + 0x14)),((undefined2 *)(gen_frame + 0x18)),iVar1);
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(iVar1 + 0x70);
    }
    uVar2 = F_0055a020(uVar3);
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = ((short *)(gen_frame + 0x14))[0] + uVar2;
    (*(short *)(gen_frame + 0xc)) = ((undefined2 *)(gen_frame + 0x18))[0];
    (*(undefined4 *)(gen_frame + 0x10)) = 0xc8d;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 2;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 1)) = 0x40;
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22(((short *)(gen_frame + 0x14))[0] + uVar2,0x4002);
    F_0056b6e0(this,&(*(undefined4 *)(gen_frame + 0x8)));
  }
  return 0;
}

/* ref: Client::UI2::AddonCreditPlayer::vf41 */
byte F_007eb2b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7eb2b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  uint uVar2;
  
  F_004ff310(((undefined1 *)(gen_frame + 0x34)),6,0);
  (*(undefined4 *)(gen_frame + 0x38)) = 0x756764;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined1 *)(gen_frame + 0x20)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x24)) = 5000;
  (*(undefined4 *)(gen_frame + 0x28)) = 0x10100;
  (*(undefined1 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 2;
  (*(undefined2 *)(gen_frame + 0x2d)) = 0;
  uVar2 = F_00513d20(((undefined1 *)(gen_frame + 0x34)),&(*(undefined4 *)(gen_frame + 0x38)),REFG(undefined * PTR32, 0x13283c0),&(*(undefined4 *)(gen_frame + 0xc)),0,0);
  *(uint *)(this + 0x184) = uVar2;
  *(undefined4 *)(this + 0x180) = 1;
  bVar1 = F_00572e60(this,"CreditPlayer",0,6);
  return bVar1;
}

/* ref: FUN_007eb340 */
uint F_007eb340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7eb340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  uint * puVar4;
  int iVar5;
  int local_8;
  
  if (param_1 != *(int *)((int)this + 0x200)) {
    *(int *)((int)this + 0x200) = param_1;
    F_0059d640(*(undefined * PTR32 *)((int)this + 0x1fc),*(undefined4 *)(&REFG(undefined, 0x10c0b18) + param_1 * 4));
  }
  iVar5 = *(int *)((int)this + 0x200);
  *(undefined4 *)((int)this + 0x204) = 0;
  *(undefined4 *)((int)this + 0x22c) = 0;
  *(undefined4 *)((int)this + 0x230) = 0;
  *(undefined2 *)((int)this + 0x234) = 0;
  *(undefined1 *)((int)this + 0x398) = 0;
  *(undefined4 *)((int)this + 0x228) = 0;
  if (iVar5 == 0) {
    puVar2 = (undefined4 *)((int)this + 0x23c);
    iVar5 = 0xb;
    do {
      puVar2[-1] = "";
      *puVar2 = "";
      puVar2[1] = "";
      puVar2[2] = "";
      puVar2 = puVar2 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  else {
    iVar5 = (((*(int *)((int)this + iVar5 * 0x10 + 0x398) -
              *(int *)((int)this + iVar5 * 0x10 + 0x394)) / 0x54 - 1U & 0xfffffffc) - 0x28) * 0x54;
    puVar4 = (uint *)((int)this + 0x238);
    local_8 = 0xb;
    do {
      param_1 = 4;
      do {
        uVar1 = F_0042a990(*((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x200) * 0x10 + 0x394))) +
                             iVar5);
        *puVar4 = uVar1;
        iVar5 = iVar5 + 0x54;
        puVar4 = puVar4 + 1;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  puVar4 = (uint *)((int)this + 0x2e8);
  local_8 = 0xb;
  iVar5 = 0;
  do {
    param_1 = 4;
    do {
      uVar1 = F_0042a990(*((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x200) * 0x10 + 0x3a4))) + iVar5)
      ;
      *puVar4 = uVar1;
      *(int *)((int)this + 0x204) = *(int *)((int)this + 0x204) + 1;
      iVar5 = iVar5 + 0x54;
      puVar4 = puVar4 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  uVar3 = 0;
  if (*(int *)((int)this + 0x210) != 0) {
    uVar3 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x210) + 0x70)));
  }
  F_00559f00(uVar3,(float)(int)(short)(int)*(float *)((int)this + 0x228));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x210) + 0x70))))(*(int * PTR32 *)((int)this + 0x210));
  return uVar1;
}

/* ref: FUN_007eb4f0 */
byte F_007eb4f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7eb4f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint * local_8;
  
  uVar5 = *(int *)((int)this + 0x22c) + 0x15;
  if (0x15 < uVar5) {
    uVar5 = *(int *)((int)this + 0x22c) - 1;
  }
  if ((*(char *)((int)this + 0x234) != '\0') && (uVar5 == *(uint *)((int)this + 0x230))) {
    return 0;
  }
  if (*(uint *)((int)this + 0x200) < 0x1a) {
    uVar4 = 0;
    local_8 = (uint *)((int)this + uVar5 * 0x10 + 0x238);
    do {
      iVar2 = *(int *)((int)this + 0x200);
      uVar3 = *(int *)((int)this + 0x204) + uVar4;
      if (uVar3 < (uint)((*(int *)((int)this + iVar2 * 0x10 + 0x3a8) -
                         *(int *)((int)this + iVar2 * 0x10 + 0x3a4)) / 0x54)) {
        uVar3 = F_0042a990(uVar3 * 0x54 + *(int *)((int)this + iVar2 * 0x10 + 0x3a4));
        *local_8 = uVar3;
      }
      else {
        *local_8 = (uint)"";
      }
      local_8 = local_8 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 4);
  }
  else {
    *(char * PTR32 *)((int)this + uVar5 * 0x10 + 0x238) = "";
    *(char * PTR32 *)((int)this + uVar5 * 0x10 + 0x23c) = "";
    *((char * PTR32 *)GEN_TOP(((int)this + (uVar5 + 0x24) * 0x10))) = "";
    *(char * PTR32 *)((int)this + uVar5 * 0x10 + 0x244) = "";
  }
  if (*(char *)((int)this + 0x234) == '\0') {
    iVar2 = *(int *)((int)this + 0x200);
    *(int *)((int)this + 0x204) = *(int *)((int)this + 0x204) + 4;
    if ((uint)((*(int *)((int)this + iVar2 * 0x10 + 0x3a8) -
               *(int *)((int)this + iVar2 * 0x10 + 0x3a4)) / 0x54) <= *(uint *)((int)this + 0x204))
    {
      iVar1 = iVar2 + 1;
      *(undefined4 *)((int)this + 0x204) = 0;
      if (iVar1 != iVar2) {
        *(int *)((int)this + 0x200) = iVar1;
        F_0059d640(*(undefined * PTR32 *)((int)this + 0x1fc),*(undefined4 *)(&REFG(undefined, 0x10c0b18) + iVar1 * 4));
      }
      if (0x19 < *(uint *)((int)this + 0x200)) {
        *(undefined1 *)((int)this + 0x234) = 1;
        *(uint *)((int)this + 0x230) = uVar5;
      }
    }
  }
  return 1;
}

/* ref: FUN_007eb670 */
unsigned int F_007eb670(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7eb670u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  undefined4 uVar2;
  float10 fVar3;
  float10 fVar4;
  float fVar5;
  float local_8;
  
  if ((*(char *)((int)param_1 + 0x399) != '\0') && (*(char *)((int)param_1 + 0x235) == '\0')) {
    if (*(char *)((int)param_1 + 0x398) != '\0') {
      *(int *)((int)param_1 + 0x22c) = *(int *)((int)param_1 + 0x22c) + 1;
      if (0x15 < *(uint *)((int)param_1 + 0x22c)) {
        *(undefined4 *)((int)param_1 + 0x22c) = 0;
      }
      bVar1 = F_007eb4f0(param_1);
      if (bVar1 == 0) {
        *(undefined1 *)((int)param_1 + 0x235) = 1;
      }
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)param_1 + 0x210) + 0x70))))(*(int * PTR32 *)((int)param_1 + 0x210));
      *(undefined1 *)((int)param_1 + 0x398) = 0;
    }
    fVar3 = (float10)*(ushort *)((int)param_1 + 0x226);
    local_8 = *(float *)&REFG(undefined, 0x10c12ac);
    if (*(char *)((int)param_1 + 0x39a) == '\0') {
      fVar5 = REFG(float, 0x1087ef8);
      if ((*(int *)((int)param_1 + 0x39c) == 1) ||
         (fVar5 = REFG(float, 0x109482c), *(int *)((int)param_1 + 0x39c) == 2)) {
        local_8 = fVar5;
      }
      param_2 = ((float)GEN_TOF(((((float10)*(double *)&REFG(undefined, 0x10d56c0) * fVar3) / (float10)local_8) *
                       (float10)param_2)));
    }
    else {
      param_2 = 0.0;
    }
    fVar5 = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0x228) - (float10)param_2)));
    fVar4 = (float10)fVar5;
    *(float *)((int)param_1 + 0x228) = fVar5;
    if (fVar4 <= -fVar3) {
      *(undefined1 *)((int)param_1 + 0x398) = 1;
      *(float *)((int)param_1 + 0x228) = (float)(fVar4 + fVar3);
    }
    uVar2 = 0;
    if (*(int *)((int)param_1 + 0x210) != 0) {
      uVar2 = *((undefined4 *)GEN_TOP((*(int *)((int)param_1 + 0x210) + 0x70)));
    }
    F_00559f00(uVar2,(float)(int)(short)(int)*(float *)((int)param_1 + 0x228));
    if (*(char *)((int)param_1 + 0x235) != '\0') {
      *(char *)((int)param_1 + 0x10d) = *(char *)((int)param_1 + 0x10d) + '\x01';
      *(undefined4 *)((int)param_1 + 0x3a0) = 2;
      F_0059d640(*(undefined * PTR32 *)((int)param_1 + 0x188),0x66);
    }
  }
  return 0;
}

/* ref: FUN_007eb7e0 */
unsigned int F_007eb7e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7eb7e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  if (*(int *)((int)this + 0x180) == 0) {
    F_004ff310(((undefined1 *)(gen_frame + 0x34)),6,0);
    (*(undefined4 *)(gen_frame + 0x38)) = 0x756764;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined1 *)(gen_frame + 0x20)) = 0xff;
    (*(undefined4 *)(gen_frame + 0x24)) = 5000;
    (*(undefined4 *)(gen_frame + 0x28)) = 0x10100;
    (*(undefined1 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 2;
    (*(undefined2 *)(gen_frame + 0x2d)) = 0;
    uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x34)),&(*(undefined4 *)(gen_frame + 0x38)),REFG(undefined * PTR32, 0x13283c4),&(*(undefined4 *)(gen_frame + 0xc)),0,0
                        );
    *(uint *)((int)this + 0x184) = uVar1;
    *(undefined4 *)((int)this + 0x180) = 1;
  }
  return 0;
}

/* ref: FUN_007eb870 */
uint F_007eb870(unsigned int gen_a0)
{
  GEN_ENTER(0x7eb870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint in_EAX = 0;
  
  if (*(int *)((int)this + 0x180) == 1) {
    F_004ff310(((undefined1 *)(gen_frame + 0x34)),6,0);
    (*(undefined4 *)(gen_frame + 0x38)) = 0x756764;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined1 *)(gen_frame + 0x20)) = 0xff;
    (*(undefined4 *)(gen_frame + 0x24)) = 5000;
    (*(undefined4 *)(gen_frame + 0x28)) = 0x10100;
    (*(undefined1 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 2;
    (*(undefined2 *)(gen_frame + 0x2d)) = 0;
    in_EAX = F_00513d20(((undefined1 *)(gen_frame + 0x34)),&(*(undefined4 *)(gen_frame + 0x38)),REFG(undefined * PTR32, 0x13283c8),&(*(undefined4 *)(gen_frame + 0xc)),0,
                          0);
    *(uint *)((int)this + 0x188) = in_EAX;
    *(undefined4 *)((int)this + 0x180) = 2;
  }
  return in_EAX;
}

/* ref: FUN_007eb900 */
uint F_007eb900(unsigned int gen_a0)
{
  GEN_ENTER(0x7eb900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  uVar1 = *(uint *)((int)this + 0x180);
  if ((uVar1 == 1) || (uVar1 == 2)) {
    F_00c472af(((undefined1 *)(gen_frame + 0x38)),0x80,REFG(undefined * PTR32, 0x13283cc),
               *(int *)((int)this + 400) + 1);
    F_004ff310(((undefined1 *)(gen_frame + 0x34)),6,0);
    (*(undefined4 *)(gen_frame + 0x30)) = 0x756764;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined1 *)(gen_frame + 0x1c)) = 0xff;
    (*(undefined4 *)(gen_frame + 0x20)) = 5000;
    (*(undefined4 *)(gen_frame + 0x24)) = 0x10100;
    (*(undefined1 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 2;
    (*(undefined2 *)(gen_frame + 0x29)) = 0;
    uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x34)),&(*(undefined4 *)(gen_frame + 0x30)),((undefined1 *)(gen_frame + 0x38)),&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    *(uint *)((int)this + 0x18c) = uVar1;
    *(undefined4 *)((int)this + 0x180) = 3;
  }
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return uVar1;
}

/* ref: FUN_007eba00 */
uint F_007eba00(unsigned int gen_a0)
{
  GEN_ENTER(0x7eba00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  bool bVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = 0;
  uVar6 = *(int *)((int)this + 0x3c0) - *(int *)((int)this + 0x3bc) >> 3;
  bVar1 = true;
  if (uVar6 != 0) {
    do {
      bVar3 = F_00577b50(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x3bc) + 4 + uVar5 * 8))));
      if (bVar3 == 0) {
        bVar1 = false;
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  iVar4 = *(int *)((int)this + 0x40c) - *(int *)((int)this + 0x408);
  uVar5 = iVar4 * 0x2aaaaaab;
  if (*(uint *)((int)this + 0x41c) < (uint)(iVar4 / 0xc)) {
    bVar3 = F_00577b50(*((undefined * PTR32 *)GEN_TOP(((int)this + (*(int *)((int)this + 0x428) - 1U & 1) * 4 + 0x3fc))))
    ;
    uVar5 = CONCAT31(extraout_var,bVar3);
    if (bVar3 == 0) {
      return uVar5;
    }
  }
  uVar2 = REFG(float, 0x1087f04);
  if (bVar1) {
    uVar5 = 0;
    *(undefined4 *)((int)this + 0x430) = 0;
    *(undefined4 *)((int)this + 0x434) = 0;
    *(undefined4 *)((int)this + 0x438) = 0;
    *(undefined1 *)((int)this + 0x444) = 0;
    *(undefined4 *)((int)this + 0x448) = uVar2;
    *(undefined1 *)((int)this + 0x44c) = 0;
    *(undefined4 *)((int)this + 0x180) = 5;
  }
  return uVar5;
}

/* ref: FUN_007ebad0 */
uint F_007ebad0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7ebad0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  ushort uVar2;
  uint in_EAX = 0;
  uint uVar3;
  bool bVar4;
  float10 fVar5;
  float fVar6;
  
  if (*(char *)(param_1 + 0x424) != '\0') {
    return in_EAX;
  }
  if (*(int *)(param_1 + 400) != 0) {
    return in_EAX;
  }
  uVar3 = *(uint *)(param_1 + 0x41c);
  if (((float10)(int)*((short *)GEN_TOP((*(int *)(param_1 + 0x408) + 2 + uVar3 * 0xc))) <=
       (float10)*(float *)(param_1 + 0x418)) && (*(uint *)(param_1 + 0x420) <= uVar3)) {
    *(uint *)(param_1 + 0x420) = *(uint *)(param_1 + 0x420) + 1;
    if (uVar3 != 0) {
      F_0059d640(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x3f4 + *(int *)(param_1 + 0x428) * 4))),0x66);
    }
    F_0055a300(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x3fc + (*(int *)(param_1 + 0x428) - 1U & 1) * 4))),1);
    F_0059d640(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x3f4 + (*(int *)(param_1 + 0x428) - 1U & 1) * 4))),0x65);
    uVar3 = *(int *)(param_1 + 0x428) - 1U & 1;
    bVar4 = *(char *)(param_1 + 0x44c) == '\0';
    *(uint *)(param_1 + 0x428) = uVar3;
    *(bool *)(param_1 + 0x44c) = bVar4;
    fVar6 = *(float *)&REFG(undefined, 0x10c0c0c);
    if (bVar4) {
      fVar6 = REFG(float, 0x1087f04);
    }
    *(float *)(param_1 + 0x448) = fVar6;
    uVar2 = F_0055a030(*(undefined4 *)(param_1 + 0x3fc + uVar3 * 4));
    fVar6 = (float)((float10)uVar2 * (float10)REFG(double, 0x1088108));
    uVar2 = F_0055a020(*((undefined4 *)GEN_TOP((param_1 + 0x3fc + *(int *)(param_1 + 0x428) * 4))));
    F_0055a770(*((undefined4 *)GEN_TOP((param_1 + 0x3fc + *(int *)(param_1 + 0x428) * 4))),
                 (float)((float10)uVar2 * (float10)REFG(double, 0x1088108)),fVar6);
    F_00568210(*((undefined4 *)GEN_TOP((param_1 + 0x3fc + *(int *)(param_1 + 0x428) * 4))),
                 *(float *)(param_1 + 0x448),*(float *)(param_1 + 0x448));
  }
  if (*(char *)(param_1 + 0x43c) == '\0') {
    if (*(int *)(param_1 + 0x440) == 2) {
      fVar5 = (float10)param_2 + (float10)param_2;
    }
    else {
      if (*(int *)(param_1 + 0x440) != 3) goto LAB_007ebc76;
      fVar5 = (float10)param_2 * (float10)*(double *)&REFG(undefined, 0x1094788);
    }
    param_2 = (float)fVar5;
  }
  else {
    param_2 = 0.0;
  }
LAB_007ebc76: ;
  fVar6 = ((float)GEN_TOF((((float10)param_2 /
                  (float10)((float)GEN_TOF(((float10)(int)*((short *)GEN_TOP((*(int *)(param_1 + 0x408) + 4 +
                                                           *(int *)(param_1 + 0x41c) * 0xc))) -
                                  (float10)(int)*((short *)GEN_TOP((*(int *)(param_1 + 0x408) +
                                                           *(int *)(param_1 + 0x41c) * 0xc + 2))))))) *
                 (float10)*(double *)&REFG(undefined, 0x10d56c8))));
  if (*(char *)(param_1 + 0x44c) == '\0') {
    fVar6 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x448) - (float10)fVar6)));
    *(float *)(param_1 + 0x448) = fVar6;
    bVar4 = (float10)fVar6 < (float10)1;
    fVar6 = REFG(float, 0x1087f04);
  }
  else {
    fVar6 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x448) + (float10)fVar6)));
    *(float *)(param_1 + 0x448) = fVar6;
    bVar4 = (float10)*(float *)&REFG(undefined, 0x10c0c0c) < (float10)fVar6;
    fVar6 = *(float *)&REFG(undefined, 0x10c0c0c);
  }
  if (bVar4) {
    *(float *)(param_1 + 0x448) = fVar6;
  }
  F_00568210(*((undefined4 *)GEN_TOP((param_1 + 0x3fc + *(int *)(param_1 + 0x428) * 4))),
               *(float *)(param_1 + 0x448),*(float *)(param_1 + 0x448));
  uVar3 = *(uint *)(param_1 + 0x408);
  if ((float10)(int)*((short *)GEN_TOP((uVar3 + 4 + *(int *)(param_1 + 0x41c) * 0xc))) <=
      (float10)*(float *)(param_1 + 0x418)) {
    uVar1 = *(int *)(param_1 + 0x41c) + 1;
    *(uint *)(param_1 + 0x41c) = uVar1;
    if (uVar1 < (uint)((int)(*(int *)(param_1 + 0x40c) - uVar3) / 0xc)) {
      F_0058f5b0(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x3fc + (*(int *)(param_1 + 0x428) - 1U & 1) * 4))));
      uVar3 = F_00591c00(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x3fc + (*(int *)(param_1 + 0x428) - 1U & 1) * 4))),
                           *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x408) + 8 + *(int *)(param_1 + 0x41c) * 0xc))),0);
    }
    else {
      *(undefined1 *)(param_1 + 0x424) = 1;
      uVar3 = F_0059d640(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x3f4 + *(int *)(param_1 + 0x428) * 4))),0x66);
    }
  }
  *(float *)(param_1 + 0x418) = ((float)GEN_TOF(((float10)param_2 + (float10)*(float *)(param_1 + 0x418))));
  return uVar3;
}

/* ref: FUN_007ebe00 */
uint F_007ebe00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ebe00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar1 = *(int *)((int)this + 0x3c0) - *(int *)((int)this + 0x3bc) >> 3;
  if (uVar1 != 0) {
    piVar2 = *(int * PTR32 *)((int)this + 0x3bc);
    do {
      if (*piVar2 == param_1) {
        F_0055a300(((undefined *)GEN_TOP((*(int * PTR32 *)((int)this + 0x3bc))[uVar3 * 2 + 1])),1);
        return *((uint *)GEN_TOP((*(int *)((int)this + 0x3bc) + 4 + uVar3 * 8)));
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 2;
    } while (uVar3 < uVar1);
  }
  return 0;
}

/* ref: FUN_007ebe60 */
uint F_007ebe60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ebe60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int iVar2;
  char * pcVar3;
  uint uVar4;
  
  iVar2 = *(int *)((int)this + 0x198) - *(int *)((int)this + 0x194);
  iVar1 = iVar2 >> 0x1f;
  iVar2 = iVar2 / 0xd + iVar1;
  uVar4 = 0;
  if (iVar2 != iVar1) {
    pcVar3 = *(char * PTR32 *)((int)this + 0x194);
    do {
      if (*pcVar3 == (char)param_1) {
        return (uint)(*(char * PTR32 *)((int)this + 0x194) + uVar4 * 0xd);
      }
      uVar4 = uVar4 + 1;
      pcVar3 = pcVar3 + 0xd;
    } while (uVar4 < (uint)(iVar2 - iVar1));
  }
  return 0;
}

/* ref: FUN_007ebec0 */
uint F_007ebec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ebec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int iVar2;
  char * pcVar3;
  uint uVar4;
  
  iVar2 = *(int *)((int)this + 0x1a8) - *(int *)((int)this + 0x1a4);
  iVar1 = iVar2 >> 0x1f;
  iVar2 = iVar2 / 3 + iVar1;
  uVar4 = 0;
  if (iVar2 != iVar1) {
    pcVar3 = *(char * PTR32 *)((int)this + 0x1a4);
    do {
      if (*pcVar3 == (char)param_1) {
        return (uint)(*(char * PTR32 *)((int)this + 0x1a4) + uVar4 * 3);
      }
      uVar4 = uVar4 + 1;
      pcVar3 = pcVar3 + 3;
    } while (uVar4 < (uint)(iVar2 - iVar1));
  }
  return 0;
}

/* ref: Client::UI2::AddonCreditCast::vf44 */
uint F_007ebf10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ebf10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x54))(this,0);
  (*(uint *)(gen_frame + 0x38)) = uVar2 & 0xffff;
  (*(double *)(gen_frame + 0x28)) = (double)(uVar2 & 0xffff);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0);
  (*(uint *)(gen_frame + 0x38)) = uVar2 & 0xffff;
  *(float *)(this + 0x1a8) = ((float)GEN_TOF(((float10)(*(double *)(gen_frame + 0x28)) / (float10)(uVar2 & 0xffff))));
  uVar2 = F_0055e2f0(this,1);
  *(uint *)(this + 400) = uVar2;
  uVar2 = F_0055e2f0(this,2);
  *(uint *)(this + 0x194) = uVar2;
  F_0055a300(*(undefined * PTR32 *)(this + 400),0);
  F_004ff310(((undefined1 *)(gen_frame + 0x30)),6,0);
  (*(undefined4 *)(gen_frame + 0x34)) = 0x756764;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined1 *)(gen_frame + 0x14)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x18)) = 5000;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x10100;
  (*(undefined1 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 2;
  (*(undefined2 *)(gen_frame + 0x21)) = 0;
  uVar2 = F_00513d20(((undefined1 *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x34)),REFG(undefined * PTR32, 0x13283d0),&(*(undefined4 *)(gen_frame + 0x0)),0,0);
  *(uint *)(this + 0x184) = uVar2;
  *(undefined4 *)(this + 0x180) = 1;
  *(undefined4 *)(this + 0x198) = 0xffffffff;
  this[0x19c] = (undefined1)0x0;
  uVar2 = F_0055dcb0();
  uVar1 = *(undefined4 *)(uVar2 + 0x238);
  uVar2 = F_0055dcb0();
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xd8))(this,*(undefined4 *)(uVar2 + 0x234),uVar1);
  return uVar2;
}

/* ref: FUN_007ec030 */
uint F_007ec030(unsigned int gen_a0)
{
  GEN_ENTER(0x7ec030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  longlong lVar1;
  int * piVar2;
  short * psVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  
  piVar2 = *(int * PTR32 *)((int)this + 0x184);
  if (piVar2 != (int *)0x0) {
    piVar2 = piVar2 + 0x22;
    LOCK();
    iVar5 = *piVar2;
    *piVar2 = *piVar2;
    UNLOCK();
    if (iVar5 == 2) {
      piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0x184) + 0x8c)));
      LOCK();
      iVar5 = *piVar2;
      *piVar2 = *piVar2;
      UNLOCK();
      if (iVar5 < 8) {
        if (*(int *)((int)this + 0x18c) != 0) {
          F_00406b30(*(int *)((int)this + 0x18c));
          *(undefined4 *)((int)this + 0x18c) = 0;
        }
        psVar3 = ((short *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x184) + 0x5c))))
                                    (*(int * PTR32 *)((int)this + 0x184))));
        sVar6 = *psVar3;
        *(short *)((int)this + 0x188) = sVar6;
        lVar1 = (ulonglong)(uint)(sVar6 * 2) * 2;
        uVar4 = F_00406bb0(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,0,0);
        *(uint *)((int)this + 0x18c) = uVar4;
        if (uVar4 != 0) {
          sVar6 = 0;
          if (0 < *(short *)((int)this + 0x188) * 2) {
            iVar5 = 0;
            do {
              psVar3 = psVar3 + 1;
              *((short *)GEN_TOP((*(int *)((int)this + 0x18c) + iVar5 * 2))) = *psVar3;
              sVar6 = sVar6 + 1;
              iVar5 = (int)sVar6;
            } while (iVar5 < *(short *)((int)this + 0x188) * 2);
          }
          if (*(int *)((int)this + 0x184) != 0) {
            F_0050c620(*(int *)((int)this + 0x184),0,0);
            *(undefined4 *)((int)this + 0x184) = 0;
          }
          *(undefined4 *)((int)this + 0x19e) = 0;
          *(undefined4 *)((int)this + 0x1a4) = 0;
          *(undefined4 *)((int)this + 0x180) = 2;
        }
        piVar2 = (int *)0x0;
      }
    }
  }
  return (uint)piVar2;
}

/* ref: FUN_007ec160 */
uint F_007ec160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ec160u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  byte bVar6;
  ushort uVar7;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar8;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  undefined * this_00;
  
  uVar8 = (*(uint *)&gen_args[1]);
  if (((*(uint *)&gen_args[1]) != 0) && ((*(int *)&gen_args[2]) != 0)) {
    iVar1 = *((int *)GEN_TOP((*(int *)((*(uint *)&gen_args[1]) + 0x20) + 0x158)));
    if (iVar1 == 0) {
      F_0059d640(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a8))),0x66);
      bVar6 = F_0055a300(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a8))),0);
      return CONCAT31(extraout_var,bVar6);
    }
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 600))) = *((undefined4 *)GEN_TOP((*(int *)((*(uint *)&gen_args[1]) + 0x20) + 0x1a4)));
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x25c))) = *((undefined4 *)GEN_TOP((*(int *)((*(uint *)&gen_args[1]) + 0x20) + 0x1a8)));
    iVar2 = *((int *)GEN_TOP((*(int *)((*(uint *)&gen_args[1]) + 0x20) + 0x164)));
    iVar3 = *((int *)GEN_TOP((*(int *)((*(uint *)&gen_args[1]) + 0x20) + 0x160)));
    iVar4 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x254)));
    uVar5 = *((undefined4 *)GEN_TOP((*(int *)((*(int *)&gen_args[2]) + 0x20) + 0x13c)));
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x254))) = iVar3;
    (*(int *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[2]), 1, 3),iVar4 != iVar3);
    F_0059d640(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a8))),0x65);
    F_0055a300(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a8))),1);
    F_00584110(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))),uVar5);
    uVar7 = F_00559c40(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1ac))));
    if ((char)uVar7 == '\0') {
      F_00559c60(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1ac))),1);
    }
    if ((iVar1 < 1) || (2 < iVar1)) {
      if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b4))) == 0) {
        bVar6 = F_0055a300((undefined *)0x0,0);
        return CONCAT31(extraout_var_01,bVar6);
      }
      bVar6 = F_0055a300(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b4))) + 0x70))),0);
      uVar8 = CONCAT31(extraout_var_02,bVar6);
    }
    else {
      if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b4))) == 0) {
        this_00 = (undefined *)0x0;
      }
      else {
        this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b4))) + 0x70)));
      }
      bVar6 = F_0055a300(this_00,1);
      uVar8 = CONCAT31(extraout_var_00,bVar6);
      if (*((int *)GEN_TOP(((int)*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b4))) + 0xe4))) != iVar2) {
        uVar8 = F_005a04e0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b4))),iVar2,(*(int *)&gen_args[2]));
        return uVar8;
      }
    }
  }
  return uVar8;
}

/* ref: FUN_007ec2b0 */
uint F_007ec2b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ec2b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined * pvVar3;
  uint uVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = this;
  uVar2 = param_1;
  if ((param_1 != 0) && (param_2 != 0)) {
    (*(int *)(gen_frame + 0x20)) = *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xc)));
    (*(int *)(gen_frame + 0x28)) = 0;
    uVar4 = 0x10;
    do {
      this_00 = *(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + uVar4 + 0x1c8);
      uVar2 = *((uint *)GEN_TOP((uVar4 + *(int *)(param_1 + 0x20))));
      if (((*(int *)(gen_frame + 0x28)) < (*(int *)(gen_frame + 0x20))) && (0 < (int)uVar2)) {
        F_004352a0(uVar2 >> 0x1d & 2,&(*(undefined4 *)(gen_frame + 0x1c)),&(*(undefined4 *)(gen_frame + 0x18)));
        F_00562e60(this_00,(*(undefined4 *)(gen_frame + 0x1c)));
        F_00562e80(this_00,(*(undefined4 *)(gen_frame + 0x18)));
        F_0058a4b0(this_00,*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + -4 + uVar4))));
        if (this_00 == (undefined *)0x0) {
          pvVar3 = (undefined *)0x0;
        }
        else {
          pvVar3 = *(undefined * PTR32 *)((int)this_00 + 0x70);
        }
        F_0055a300(pvVar3,1);
        if (*(uint *)((int)this_00 + 0x98) != (uVar2 & 0x3fffffff)) {
          F_00595530(this_00,uVar2 & 0x3fffffff,0,0);
        }
        F_00560760(((undefined4 *)(gen_frame + 0xc)));
        ((undefined4 *)(gen_frame + 0xc))[0] = *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x74 + uVar4)));
        uVar2 = F_00591690(this_00,2,(uint)*(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x13a),((undefined4 *)(gen_frame + 0xc)));
      }
      else {
        bVar1 = F_00582410(this_00);
        if (bVar1 != 0) {
          F_00597550(this_00);
        }
        pvVar3 = (undefined *)0x0;
        if (this_00 != (undefined *)0x0) {
          pvVar3 = *(undefined * PTR32 *)((int)this_00 + 0x70);
        }
        bVar1 = F_0055a300(pvVar3,0);
        uVar2 = CONCAT31(extraout_var,bVar1);
      }
      (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 1;
      uVar4 = uVar4 + 4;
    } while (uVar4 < 0x88);
  }
  return uVar2;
}

/* ref: Client::UI2::AddonTargetCursor::vf44 */
uint F_007ec3f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ec3f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  float fVar2;
  undefined4 * puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined * pAVar8;
  
  this[0xfa] = (undefined1)((byte)this[0xfa] | 0x10);
  *(undefined4 *)(this + 0x94) = 0;
  uVar5 = F_0055e2f0(this,1);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 1)) {
    uVar7 = uVar5;
  }
  *(undefined * PTR32 *)(this + 0x24c) = this + 0x210;
  *(undefined * PTR32 *)(this + 0x250) = this + 0x1bc;
  *(undefined * PTR32 *)(this + 0x254) = this + 0x184;
  *(undefined * PTR32 *)(this + 600) = this + 0x1d8;
  *(undefined * PTR32 *)(this + 0x25c) = this + 500;
  *(undefined * PTR32 *)(this + 0x260) = this + 0x230;
  *(uint *)(this + 0x180) = uVar7;
  *(undefined * PTR32 *)(this + 0x264) = this + 0x1a0;
  uVar5 = F_0055e2f0(this,2);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 1)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x184) = uVar7;
  uVar5 = F_0055e2f0(this,7);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 2)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x188) = uVar7;
  uVar5 = F_0055e2f0(this,8);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 2)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x18c) = uVar7;
  *(undefined4 *)(this + 400) = 0;
  *(undefined4 *)(this + 0x198) = 0x65;
  *(undefined4 *)(this + 0x19c) = 4;
  uVar5 = F_0055e2f0(this,3);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 1)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x1a0) = uVar7;
  uVar5 = F_0055e2f0(this,5);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 2)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x1a4) = uVar7;
  uVar5 = F_0055e2f0(this,6);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 2)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x1a8) = uVar7;
  uVar5 = F_0055e2f0(this,4);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 1)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x1ac) = uVar7;
  *(undefined4 *)(this + 0x1b4) = 0x65;
  *(undefined4 *)(this + 0x1b8) = 4;
  uVar5 = F_0055e2f0(this,9);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 1)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x1bc) = uVar7;
  uVar5 = F_0055e2f0(this,10);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 2)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x1c0) = uVar7;
  uVar5 = F_0055e2f0(this,0xb);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 2)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x1c4) = uVar7;
  *(undefined4 *)(this + 0x1c8) = 0;
  *(undefined4 *)(this + 0x1d0) = 0x65;
  *(undefined4 *)(this + 0x1d4) = 4;
  uVar5 = F_0055e2f0(this,0xc);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 1)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x1d8) = uVar7;
  uVar5 = F_0055e2f0(this,0xe);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 2)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x1dc) = uVar7;
  uVar5 = F_0055e2f0(this,0xf);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 2)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x1e0) = uVar7;
  uVar5 = F_0055e2f0(this,0xd);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 1)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x1e4) = uVar7;
  *(undefined4 *)(this + 0x1ec) = 0x65;
  *(undefined4 *)(this + 0x1f0) = 4;
  uVar5 = F_0055e2f0(this,0x10);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 1)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 500) = uVar7;
  uVar5 = F_0055e2f0(this,0x11);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 2)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x1f8) = uVar7;
  uVar5 = F_0055e2f0(this,0x12);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 2)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x1fc) = uVar7;
  *(undefined4 *)(this + 0x200) = 0;
  *(undefined4 *)(this + 0x208) = 0x65;
  *(undefined4 *)(this + 0x20c) = 4;
  uVar5 = F_0055e2f0(this,0x13);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 1)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x210) = uVar7;
  uVar5 = F_0055e2f0(this,0x15);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 2)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x214) = uVar7;
  uVar5 = F_0055e2f0(this,0x16);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 2)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x218) = uVar7;
  uVar5 = F_0055e2f0(this,0x14);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 2)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x22c) = uVar7;
  *(undefined4 *)(this + 0x21c) = 0;
  *(undefined4 *)(this + 0x224) = 0x65;
  *(undefined4 *)(this + 0x228) = 4;
  uVar5 = F_0055e2f0(this,0x17);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 1)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x230) = uVar7;
  uVar5 = F_0055e2f0(this,0x18);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 2)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x234) = uVar7;
  uVar5 = F_0055e2f0(this,0x19);
  uVar7 = 0;
  if ((uVar5 != 0) && (uVar6 = F_00559b70(uVar5), uVar6 == 2)) {
    uVar7 = uVar5;
  }
  *(uint *)(this + 0x238) = uVar7;
  *(undefined4 *)(this + 0x23c) = 0;
  *(undefined4 *)(this + 0x244) = 0x65;
  *(undefined4 *)(this + 0x248) = 4;
  F_0055a300(*(undefined * PTR32 *)(this + 0x180),0);
  (*(uint *)(gen_frame + 0x18)) = 0;
  pAVar8 = this + 0x24c;
  do {
    if ((*(uint *)(gen_frame + 0x18)) < 7) {
      puVar3 = *(undefined4 * PTR32 *)pAVar8;
      if (puVar3 != (undefined4 *)0x0) {
        puVar3[4] = 0;
        if (puVar3[6] == -1) {
          F_0055a300((undefined *)*puVar3,0);
        }
        else {
          F_0059d640((undefined *)*puVar3,puVar3[6]);
        }
      }
      puVar3 = *(undefined4 * PTR32 *)pAVar8;
      if (puVar3 != (undefined4 *)0x0) {
        F_0055a730(*puVar3,&(*(float *)(gen_frame + 0xc)),&(*(float *)(gen_frame + 0x14)));
        fVar1 = (float)((float10)0 - (float10)(*(float *)(gen_frame + 0x14)));
        (*(float *)(gen_frame + 0x10)) = fVar1;
        fVar2 = (float)((float10)0 - (float10)(*(float *)(gen_frame + 0xc)));
        (*(float *)(gen_frame + 0x10)) = fVar2;
        F_00559da0(*puVar3,fVar2,fVar1);
      }
      iVar4 = *(int *)pAVar8;
      if (iVar4 != 0) {
        F_0055a170(*(undefined * PTR32 *)(iVar4 + 4),0x5f,0x5f,0x5f);
        F_0055a170(*(undefined * PTR32 *)(iVar4 + 8),0xff,0xff,0xff);
      }
    }
    uVar7 = (*(uint *)(gen_frame + 0x18)) + 1;
    pAVar8 = pAVar8 + 4;
    (*(uint *)(gen_frame + 0x18)) = uVar7;
  } while (uVar7 < 6);
  F_0059d640(*(undefined * PTR32 *)(this + 0x184),0x66);
  F_0059d640(*(undefined * PTR32 *)(this + 0x1bc),0x66);
  F_0059d640(*(undefined * PTR32 *)(this + 0x1d8),0x66);
  F_0059d640(*(undefined * PTR32 *)(this + 500),0x66);
  F_0059d640(*(undefined * PTR32 *)(this + 0x210),0x66);
  F_0059d640(*(undefined * PTR32 *)(this + 0x230),0x66);
  F_0059d640(*(undefined * PTR32 *)(this + 0x1a0),0x66);
  uVar7 = 0;
  if (*(int *)(this + 0x2c) == 0) {
    (*(uint *)(gen_frame + 0x18)) = 0;
  }
  else {
    (*(uint *)(gen_frame + 0x18)) = (uint)*(ushort *)(this + 0x3a) + *((int *)GEN_TOP((*(int *)(this + 0x2c) + 4)));
  }
  if ((*(uint *)(gen_frame + 0x18)) != 0) {
    do {
      uVar5 = F_00578ee0(this + 0x24,uVar7);
      F_0055a6b0(uVar5,0);
      uVar7 = uVar7 + 1;
    } while (uVar7 < (*(uint *)(gen_frame + 0x18)));
  }
  uVar7 = F_005a91d0(this,1,0x17);
  return uVar7;
}

/* ref: Client::UI2::AddonTargetCursor::vf47 */
uint F_007eca20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7eca20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 * puVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  undefined4 * puVar11;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  uint uVar12;
  
  iVar1 = param_1[0x17];
  puVar11 = param_1;
  if (iVar1 != 0) {
    bVar8 = true;
    bVar9 = false;
    uVar12 = 0;
    do {
      iVar2 = *(int *)(this + uVar12 * 4 + 0x24c);
      puVar11 = (undefined4 *)0x0;
      if (iVar2 != 0) {
        iVar3 = *(int *)(iVar1 + 0x20);
        puVar4 = *(undefined4 * PTR32 *)(iVar3 + uVar12 * 0x18);
        uVar5 = *(undefined4 *)(iVar3 + 8 + uVar12 * 0x18);
        uVar6 = *(undefined4 *)(iVar3 + 0xc + uVar12 * 0x18);
        puVar11 = (undefined4 *)F_00789fb0(this,uVar12,*(undefined4 *)(iVar3 + 4 + uVar12 * 0x18))
        ;
        if (((uVar12 < 7) &&
            (puVar7 = *(undefined4 * PTR32 *)(this + uVar12 * 4 + 0x24c), puVar7 != (undefined4 *)0x0)) &&
           (puVar11 = puVar4, (undefined4 *)puVar7[4] != puVar4)) {
          puVar7[4] = puVar4;
          if (puVar4 == (undefined4 *)0x0) {
            if (puVar7[6] == -1) {
              bVar10 = F_0055a300((undefined *)*puVar7,0);
              puVar11 = ((undefined4 *)GEN_TOP(CONCAT31(extraout_var_00,bVar10)));
            }
            else {
              puVar11 = (undefined4 *)F_0059d640((undefined *)*puVar7,puVar7[6]);
            }
          }
          else {
            puVar11 = (undefined4 *)((int)puVar4 + -1);
            if (puVar11 < (undefined4 *)0x2) {
              if (puVar7[5] == -1) {
                bVar10 = F_0055a300((undefined *)*puVar7,1);
                puVar11 = ((undefined4 *)GEN_TOP(CONCAT31(extraout_var,bVar10)));
              }
              else {
                puVar11 = (undefined4 *)F_0059d640((undefined *)*puVar7,puVar7[5]);
              }
              if ((undefined *)puVar7[3] != (undefined *)0x0) {
                puVar11 = (undefined4 *)F_00559c60((undefined *)puVar7[3],1);
              }
            }
          }
          bVar9 = true;
        }
        if (*(int *)(iVar2 + 0x10) != 0) {
          F_0055a300(*(undefined * PTR32 *)(this + 0x180),1);
          puVar11 = (undefined4 *)F_0078a020(this,uVar12,uVar5,uVar6);
          if (uVar12 == 2) {
            puVar11 = (undefined4 *)F_0078a020(this,6,uVar5,uVar6);
          }
          bVar8 = false;
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < 6);
    if ((*((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x90))) < 1) || (*(int *)(this + 0x194) == 0)) {
      puVar11 = *(undefined4 * PTR32 *)(this + 0x264);
      if ((puVar11 != (undefined4 *)0x0) && (puVar11[4] != 0)) {
        puVar11[4] = 0;
        if (puVar11[6] == -1) {
          bVar10 = F_0055a300((undefined *)*puVar11,0);
          puVar11 = ((undefined4 *)GEN_TOP(CONCAT31(extraout_var_02,bVar10)));
        }
        else {
          puVar11 = (undefined4 *)F_0059d640((undefined *)*puVar11,puVar11[6]);
        }
      }
    }
    else {
      puVar4 = *(undefined4 * PTR32 *)(this + 0x264);
      if ((puVar4 != (undefined4 *)0x0) && (puVar4[4] != 1)) {
        puVar4[4] = 1;
        if (puVar4[5] == -1) {
          bVar10 = F_0055a300((undefined *)*puVar4,1);
          puVar11 = ((undefined4 *)GEN_TOP(CONCAT31(extraout_var_01,bVar10)));
        }
        else {
          puVar11 = (undefined4 *)F_0059d640((undefined *)*puVar4,puVar4[5]);
        }
        if ((undefined *)puVar4[3] != (undefined *)0x0) {
          puVar11 = (undefined4 *)F_00559c60((undefined *)puVar4[3],1);
        }
        bVar9 = true;
      }
    }
    if (((bVar8) &&
        (puVar11 = ((undefined4 *)GEN_TOP((*(uint *)(this + 0xf4) >> 0x14 & 0xf))),
        puVar11 != (undefined4 *)&REFG(undefined, 0x5))) && (puVar11 != (undefined4 *)&REFG(undefined, 0x4))) {
      uVar12 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,0,0);
      return uVar12;
    }
    if (((bVar9) &&
        ((puVar11 = ((undefined4 *)GEN_TOP((*(uint *)(this + 0xf4) >> 0x14 & 0xf))),
         puVar11 == (undefined4 *)&REFG(undefined, 0x5) || (puVar11 == (undefined4 *)&REFG(undefined, 0x4))))) &&
       ((char)this[0x10e] < '\x01')) {
      puVar11 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x14))(this,0)));
    }
  }
  return (uint)puVar11;
}

/* ref: Client::UI2::AddonBattleTalk::vf2 */
unsigned int F_007ecc40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7ecc40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if ((short)param_1 == 0x3d) {
    F_0078a770(this);
  }
  return 0;
}

/* ref: Client::UI2::AddonBattleTalk::vf38 */
uint F_007ecc60(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7ecc60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 local_10;
  
  fVar1 = *(float *)((int)param_1 + 0x1c8);
  if ((!GEN_ISNAN(fVar1) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(fVar1 <= *(float *)&REFG(undefined, 0x1088114))) {
    fVar2 = ((float)GEN_TOF(((float10)param_2 + (float10)*(float *)((int)param_1 + 0x1cc))));
    fVar5 = (float10)fVar2;
    *(float *)((int)param_1 + 0x1cc) = fVar2;
    if ((float10)fVar1 <= fVar5) {
      *(float *)((int)param_1 + 0x1cc) = fVar1;
      F_0078a6e0(param_1);
    }
    else {
      iVar4 = *(int *)((int)param_1 + 0x1c4) + -1;
      fVar6 = (float10)iVar4;
      if (iVar4 < 0) {
        fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      fVar7 = (float10)*(int *)((int)param_1 + 0x1c0);
      if (*(int *)((int)param_1 + 0x1c0) < 0) {
        fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      local_10 = (undefined4)
                 (longlong)TRUNC(fVar7 + fVar6 * (float10)(float)(fVar5 / (float10)fVar1));
      F_00577aa0(*(undefined * PTR32 *)((int)param_1 + 0x188),local_10);
    }
  }
  if (((*(byte *)((int)param_1 + 0xf9) & 1) != 0) && (*(char *)((int)param_1 + 0x1d2) == '\0')) {
    F_0055a300(*(undefined * PTR32 *)((int)param_1 + 0x90),0);
  }
  uVar3 = F_005a2370(param_1,param_2);
  return uVar3;
}

/* ref: Client::UI2::AddonBattleTalk::vf47 */
uint F_007ecd50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ecd50u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  undefined3 extraout_var = 0;
  
  uVar6 = *(uint *)((*(int *)&gen_args[1]) + 0x94);
  iVar2 = *(int *)((*(int *)&gen_args[2]) + 0x88);
  if ((uVar6 != 0) && (iVar2 != 0)) {
    if (**(int * PTR32 *)(uVar6 + 0x20) == 0) {
      uVar6 = F_0078a770((*(undefined * PTR32 *)&gen_args[0]));
      return uVar6;
    }
    iVar3 = (*(int * PTR32 *)(uVar6 + 0x20))[1];
    F_00584110(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))),**(undefined4 * PTR32 *)(iVar2 + 0x20));
    uVar4 = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 4)));
    uVar6 = F_0055dcb0();
    F_007853b0(*(undefined4 *)(uVar6 + 0x38),*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))),uVar4);
    *((float *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c8))) = (float)((float10)iVar3 / (float10)*(double *)&REFG(undefined, 0x10912a8));
    F_00577d20(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))),&(*(int *)&gen_args[2]),&(*(int *)&gen_args[1]),0,0,REFG(undefined4, 0x108cc50),0);
    sVar1 = *((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d0)));
    F_0055a080(*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c))),(uint)(ushort)(sVar1 + (short)(*(int *)&gen_args[1])));
    F_0055a200(*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x90))),0xff);
    bVar5 = F_0055a300(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x90))),1);
    uVar6 = CONCAT31(extraout_var,bVar5);
    (*(undefined * PTR32 *)&gen_args[0])[0x1d2] = (undefined1)0x1;
  }
  return uVar6;
}

/* ref: Client::UI2::AddonScreenInfo::vf44 */
uint F_007ece40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ece40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,1,0);
  F_0055e2a0(this,(-(uint)(((byte)this[0xf6] & 0xf) != 10) & 0xf8000002) + 0x8000000,1);
  bVar1 = F_005609d0(this + 0x1c8,0x3a);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    F_0056c440(this + 0x1c8,0x3a,0,this,0);
    uVar2 = F_00592380(this + 0x1c8);
  }
  return uVar2;
}

/* ref: Client::UI2::AddonAreaText::vf64 */
uint F_007eceb0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x7eceb0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  float10 fVar5;
  
  F_00559fe0(*(undefined4 *)(param_1 + 0x180),&(*(float *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0x4)));
  if (*(int *)(param_1 + 0x188) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x188) + 0x70)));
  }
  uVar1 = F_0055a020(uVar4);
  fVar5 = (float10)REFG(double, 0x1088108);
  uVar4 = 0;
  if (*(int *)(param_1 + 0x188) != 0) {
    uVar4 = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x188) + 0x70)));
  }
  uVar2 = F_0055a030(uVar4);
  uVar3 = F_00559da0(*(undefined4 *)(param_1 + 0x180),
                       ((float)GEN_TOF(((float10)param_2 * fVar5 -
                              fVar5 * (float10)(float)((float10)uVar1 * (float10)(*(float *)(gen_frame + 0x8)))))),
                       ((float)GEN_TOF(((float10)param_3 * (float10)*(double *)&REFG(undefined, 0x109cac8) -
                              (float10)(float)((float10)uVar2 * (float10)(*(float *)(gen_frame + 0x4))) *
                              (float10)REFG(double, 0x1088108)))));
  return uVar3;
}

/* ref: FUN_007ecf60 */
uint F_007ecf60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7ecf60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00584110(*(undefined * PTR32 *)((int)this + 0x198),param_2);
  F_00584110(*(undefined * PTR32 *)((int)this + 0x19c),param_3);
  F_00595190(*(undefined * PTR32 *)((int)this + 0x1a4),param_1,((code *)REFP(0x78ac10)),this);
  F_0059d640(*(undefined * PTR32 *)((int)this + 0x184),0x66);
  F_0055dcb0();
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this);
  return uVar1;
}

/* ref: Client::UI2::AddonGetAction::vf64 */
uint F_007ed000(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x7ed000u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float10 fVar1;
  double dVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  undefined4 in_ecx;
  float10 fVar7;
  float10 fVar8;
  
  F_00559fe0(*(undefined4 *)(param_1 + 0x180),&(*(float *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0x4)));
  if (*(int *)(param_1 + 0x1a4) == 0) {
    in_ecx = 0;
  }
  else {
    in_ecx = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x1a4) + 0x70)));
  }
  uVar3 = F_0055a020(in_ecx);
  uVar6 = F_00577bc0(*(undefined * PTR32 *)(param_1 + 0x19c),0,0,REFG(undefined4, 0x108cc50),0);
  fVar7 = (float10)(int)uVar6;
  if ((int)uVar6 < 0) {
    fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar8 = (float10)REFG(double, 0x1088108);
  uVar4 = F_0055a020(*(undefined4 *)(param_1 + 0x180));
  fVar1 = (float10)REFG(double, 0x1088108);
  dVar2 = (double)param_3 * *(double *)&REFG(undefined, 0x10d56d0);
  uVar5 = F_0055a030(*(undefined4 *)(param_1 + 0x180));
  uVar6 = F_00559da0(*(undefined4 *)(param_1 + 0x180),
                       ((float)GEN_TOF(((float10)((double)GEN_TOD(((float10)uVar3 +
                                                (fVar8 * (float10)param_2 + fVar7 * fVar8)))) -
                              (float10)(float)((float10)uVar4 * (float10)(*(float *)(gen_frame + 0x8))) * fVar1))),
                       ((float)GEN_TOF(((float10)dVar2 -
                              (float10)(float)((float10)uVar5 * (float10)(*(float *)(gen_frame + 0x4))) *
                              (float10)REFG(double, 0x1088108)))));
  return uVar6;
}

/* ref: Client::UI2::AddonGetAction::vf65 */
byte F_007ed100(unsigned int gen_a0)
{
  GEN_ENTER(0x7ed100u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 400) != 0) {
    return 0;
  }
  if ((*(int *)(in_ecx + 0x180) != 0) && (*(int *)(in_ecx + 0x184) != 0)) {
    return ~(byte)((ushort)*((undefined2 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(in_ecx + 0x184) + 0x1c))) + 0x22))) >> 0xf)
           & 1;
  }
  return 1;
}

/* ref: FUN_007ed140 */
uint F_007ed140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ed140u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  float10 fVar5;
  float10 fVar6;
  float fVar7;
  undefined4 uVar8;
  
  iVar1 = *(int *)(param_2 + 0x38);
  uVar4 = F_0055dcb0();
  fVar5 = (float10)*(int *)(uVar4 + 0x234);
  if (*(int *)(uVar4 + 0x234) < 0) {
    fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  uVar4 = F_0055dcb0();
  ((float *)(gen_frame + 0x10))[2] = *(float *)(uVar4 + 0x238);
  F_00559fe0(*(undefined4 *)(param_2 + 0x48),((float *)(gen_frame + 0x10)),((undefined1 *)(gen_frame + 0xc)));
  fVar6 = (float10)(int)gen_fl2bits(((float *)(gen_frame + 0x10))[2]);
  if ((int)gen_fl2bits(((float *)(gen_frame + 0x10))[2]) < 0) {
    fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  F_0078b260(param_2,(float)fVar5,(float)fVar6);
  if (iVar1 == 0) {
    F_0056c5f0((undefined *)(param_2 + 4));
    uVar8 = *(undefined4 *)(param_2 + 0x48);
    ((float *)(gen_frame + 0x10))[1] = 7.00649e-45;
    fVar7 = REFG(float, 0x1087f04);
LAB_007ed25c: ;
    ((float *)(gen_frame + 0x10))[2] = fVar7;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) goto LAB_007ed273;
      F_0056c5f0((undefined *)(param_2 + 4));
      uVar8 = *(undefined4 *)(param_2 + 0x48);
      fVar7 = 0.0;
      ((float *)(gen_frame + 0x10))[1] = 0.0;
      goto LAB_007ed25c;
    }
    F_0056c5f0((undefined *)(param_2 + 4));
    ((float *)(gen_frame + 0x10))[1] = 0.0;
    uVar3 = F_0055a020(*(undefined4 *)(param_2 + 0x48));
    uVar8 = *(undefined4 *)(param_2 + 0x48);
    ((float *)(gen_frame + 0x10))[2] = ((float)GEN_TOF(((float10)(float)fVar5 -
                         (float10)(float)((float10)uVar3 * (float10)((float *)(gen_frame + 0x10))[0]))));
  }
  F_00595110(param_2 + 4,100,uVar8,((float *)(gen_frame + 0x10)) + 1,1,REFG(float, 0x1088068));
  F_0058d530((undefined *)(param_2 + 4));
LAB_007ed273: ;
  *(undefined4 *)(param_2 + 0x34) = 1;
  bVar2 = F_0055a300(*(undefined * PTR32 *)(param_2 + 0x48),1);
  *(undefined4 *)(param_2 + 0x44) = 0;
  return CONCAT31(extraout_var,bVar2);
}

/* ref: Client::UI2::AddonScreenText::vf64 */
uint F_007ed290(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x7ed290u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  float10 fVar2;
  double dVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  undefined4 * puVar7;
  float10 fVar8;
  
  puVar7 = (undefined4 *)(param_1 + 0x1c8);
  iVar6 = 10;
  do {
    iVar1 = puVar7[-4];
    F_00559fe0(*puVar7,&(*(float *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0x4)));
    if (iVar1 == 0) {
      dVar3 = (double)param_2 * REFG(double, 0x1088108);
      uVar4 = F_0055a020(*puVar7);
      F_00559e70(*puVar7,((float)GEN_TOF(((float10)dVar3 -
                                  (float10)(float)((float10)uVar4 * (float10)(*(float *)(gen_frame + 0x8))) *
                                  (float10)REFG(double, 0x1088108)))));
      iVar1 = puVar7[-2];
      fVar8 = (float10)*(double *)&REFG(undefined, 0x10968a0);
      fVar2 = (float10)*(double *)&REFG(undefined, 0x10c5fc8);
      uVar4 = F_0055a030(*puVar7);
      fVar8 = (float10)((float)GEN_TOF(((float10)(double)((float10)param_3 * fVar2 + (float10)iVar1 * fVar8)
                              - (float10)(float)((float10)uVar4 * (float10)(*(float *)(gen_frame + 0x4))) *
                                (float10)REFG(double, 0x1088108))));
LAB_007ed450: ;
      uVar5 = F_00559f00(*puVar7,(float)fVar8);
    }
    else {
      if (iVar1 == 1) {
        dVar3 = (double)param_2 * *(double *)&REFG(undefined, 0x10919f0);
        uVar4 = F_0055a020(*puVar7);
        F_00559e70(*puVar7,((float)GEN_TOF(((float10)dVar3 -
                                    (float10)(float)((float10)uVar4 * (float10)(*(float *)(gen_frame + 0x8))) *
                                    (float10)REFG(double, 0x1088108)))));
        iVar1 = puVar7[-2];
        fVar8 = (float10)*(double *)&REFG(undefined, 0x10968a0);
        fVar2 = (float10)*(double *)&REFG(undefined, 0x10c5fc8);
        uVar4 = F_0055a030(*puVar7);
        fVar8 = (float10)((float)GEN_TOF(((float10)(double)((float10)param_3 * fVar2 + (float10)iVar1 * fVar8
                                                  ) -
                                (float10)(float)((float10)uVar4 * (float10)(*(float *)(gen_frame + 0x4))) *
                                (float10)REFG(double, 0x1088108))));
        goto LAB_007ed450;
      }
      uVar5 = iVar1 - 2;
      if (uVar5 == 0) {
        dVar3 = (double)param_2 * *(double *)&REFG(undefined, 0x1094878);
        uVar4 = F_0055a020(*puVar7);
        F_00559e70(*puVar7,((float)GEN_TOF(((float10)dVar3 -
                                    (float10)(float)((float10)uVar4 * (float10)(*(float *)(gen_frame + 0x8))) *
                                    (float10)REFG(double, 0x1088108)))));
        iVar1 = puVar7[-2];
        fVar8 = (float10)*(double *)&REFG(undefined, 0x10968a0);
        fVar2 = (float10)*(double *)&REFG(undefined, 0x10c5fc8);
        uVar4 = F_0055a030(*puVar7);
        fVar8 = (float10)((float)GEN_TOF(((float10)(double)((float10)param_3 * fVar2 + (float10)iVar1 * fVar8
                                                  ) -
                                (float10)(float)((float10)uVar4 * (float10)(*(float *)(gen_frame + 0x4))) *
                                (float10)REFG(double, 0x1088108))));
        goto LAB_007ed450;
      }
    }
    puVar7 = puVar7 + 0x1c;
    iVar6 = iVar6 + -1;
    if (iVar6 == 0) {
      return uVar5;
    }
  } while( true );
}

/* ref: Client::UI2::AddonScreenText::vf65 */
byte F_007ed470(unsigned int gen_a0)
{
  GEN_ENTER(0x7ed470u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  int * piVar2;
  
  if (*(int *)(in_ecx + 0x5e4) == 0) {
    uVar1 = 0;
    piVar2 = (int *)(in_ecx + 0x1b4);
    while (*piVar2 == 0) {
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 0x1c;
      if (9 < uVar1) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_007ed4a0 */
uint F_007ed4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ed4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int local_8;
  
  uVar1 = 0;
  uVar5 = (int)this + 0x180;
  do {
    if (*(int *)(uVar5 + 0x34) == 0) {
      uVar1 = F_0078b190(this,param_1);
      *(int *)(uVar5 + 0x38) = param_1;
      *(uint *)(uVar5 + 0x40) = uVar1 + 1;
      return uVar5;
    }
    uVar1 = uVar1 + 1;
    uVar5 = uVar5 + 0x70;
  } while (uVar1 < 10);
  iVar6 = 2;
  iVar4 = 10;
  iVar3 = -1;
  piVar2 = (int *)((int)this + 0x1c0);
  local_8 = 2;
  do {
    if (((piVar2[-3] == 1) && (piVar2[-2] == param_1)) && (iVar4 < *piVar2)) {
      iVar3 = iVar6 + -2;
      iVar4 = *piVar2;
    }
    if (((piVar2[0x19] == 1) && (piVar2[0x1a] == param_1)) && (iVar4 < piVar2[0x1c])) {
      iVar3 = iVar6 + -1;
      iVar4 = piVar2[0x1c];
    }
    if (((piVar2[0x35] == 1) && (piVar2[0x36] == param_1)) && (iVar4 < piVar2[0x38])) {
      iVar3 = iVar6;
      iVar4 = piVar2[0x38];
    }
    if (((piVar2[0x51] == 1) && (piVar2[0x52] == param_1)) && (iVar4 < piVar2[0x54])) {
      iVar3 = iVar6 + 1;
      iVar4 = piVar2[0x54];
    }
    if (((piVar2[0x6d] == 1) && (piVar2[0x6e] == param_1)) && (iVar4 < piVar2[0x70])) {
      iVar3 = iVar6 + 2;
      iVar4 = piVar2[0x70];
    }
    iVar6 = iVar6 + 5;
    piVar2 = piVar2 + 0x8c;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  if (iVar3 == -1) {
    iVar4 = -1;
    iVar3 = 10;
    if ((*(int *)((int)this + 0x1b4) == 1) && (10 < *(int *)((int)this + 0x1c0))) {
      iVar4 = 0;
      iVar3 = *(int *)((int)this + 0x1c0);
    }
    if ((*(int *)((int)this + 0x224) == 1) && (iVar3 < *(int *)((int)this + 0x230))) {
      iVar4 = 1;
      iVar3 = *(int *)((int)this + 0x230);
    }
    if ((*(int *)((int)this + 0x294) == 1) && (iVar3 < *(int *)((int)this + 0x2a0))) {
      iVar4 = 2;
      iVar3 = *(int *)((int)this + 0x2a0);
    }
    if ((*(int *)((int)this + 0x304) == 1) && (iVar3 < *(int *)((int)this + 0x310))) {
      iVar4 = 3;
      iVar3 = *(int *)((int)this + 0x310);
    }
    if ((*(int *)((int)this + 0x374) == 1) && (iVar3 < *(int *)((int)this + 0x380))) {
      iVar4 = 4;
      iVar3 = *(int *)((int)this + 0x380);
    }
    if ((*(int *)((int)this + 0x3e4) == 1) && (iVar3 < *(int *)((int)this + 0x3f0))) {
      iVar4 = 5;
      iVar3 = *(int *)((int)this + 0x3f0);
    }
    if ((*(int *)((int)this + 0x454) == 1) && (iVar3 < *(int *)((int)this + 0x460))) {
      iVar4 = 6;
      iVar3 = *(int *)((int)this + 0x460);
    }
    if ((*(int *)((int)this + 0x4c4) == 1) && (iVar3 < *(int *)((int)this + 0x4d0))) {
      iVar4 = 7;
      iVar3 = *(int *)((int)this + 0x4d0);
    }
    if ((*(int *)((int)this + 0x534) == 1) && (iVar3 < *(int *)((int)this + 0x540))) {
      iVar4 = 8;
      iVar3 = *(int *)((int)this + 0x540);
    }
    if ((*(int *)((int)this + 0x5a4) == 1) && (iVar3 < *(int *)((int)this + 0x5b0))) {
      iVar4 = 9;
    }
    else if (iVar4 == -1) {
      return 0;
    }
    *(undefined4 *)(iVar4 * 0x70 + 0x1c4 + (int)this) = 10;
    return 0;
  }
  *(undefined4 *)(iVar3 * 0x70 + 0x1c4 + (int)this) = 10;
  return 0;
}

/* ref: Client::UI2::AddonImage::vf65 */
byte F_007ed6f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7ed6f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(in_ecx + 0x194) != 0) {
    return 0;
  }
  if ((*(int *)(in_ecx + 0x180) != 0) && (*(int *)(in_ecx + 0x184) != 0)) {
    uVar1 = F_00559cb0(*(int *)(in_ecx + 0x184));
    uVar2 = F_00559cd0(*(undefined4 *)(in_ecx + 0x184));
    return uVar1 <= uVar2;
  }
  return 1;
}

/* ref: Client::UI2::AddonWideText::vf65 */
byte F_007ed740(unsigned int gen_a0)
{
  GEN_ENTER(0x7ed740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x194) != 0) {
    return 0;
  }
  if ((*(int *)(this + 0x180) != 0) && (*(undefined * PTR32 *)(this + 0x184) != (undefined *)0x0)) {
    uVar1 = F_00567f90(*(undefined * PTR32 *)(this + 0x184),0x66);
    uVar2 = F_00559cd0(*(undefined4 *)(this + 0x184));
    return uVar2 == uVar1;
  }
  return 1;
}

/* ref: Client::UI2::AddonTextAchievementUnlocked::vf65 */
byte F_007ed790(unsigned int gen_a0)
{
  GEN_ENTER(0x7ed790u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(in_ecx + 0x1a8) != 0) {
    return 0;
  }
  if ((*(int *)(in_ecx + 0x180) != 0) && (*(int *)(in_ecx + 0x184) != 0)) {
    uVar1 = F_00559cb0(*(int *)(in_ecx + 0x184));
    uVar2 = F_00559cd0(*(undefined4 *)(in_ecx + 0x184));
    return uVar1 <= uVar2;
  }
  return 1;
}

/* ref: FUN_007ed7e0 */
uint F_007ed7e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7ed7e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int in_ecx;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[66])REFP(0x10c6544));
  in_ecx = (int)this + 0x180;
  iVar1 = 0x2b;
  do {
    F_0042b630(in_ecx);
    in_ecx = in_ecx + 0x54;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 2;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
  *(undefined1 *)((int)this + 0xff0) = 0;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) & 0xdf | 0x80;
  F_0055e2a0(this,0x4000002,1);
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x200;
  *(undefined1 *)((int)this + 0x10f) = 0xff;
  return (uint)this;
}

/* ref: Client::UI2::AddonMainCommand::vf44 */
uint F_007ed860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ed860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint in_ecx;
  int * this_00;
  undefined * this_01;
  undefined1 * this_02;
  uint uVar1;
  int iVar2;
  
  this_02 = (gen_frame + 0x1c);
  uVar1 = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  do {
    in_ecx = F_0055e2f0(this,*(undefined4 *)((int)&REFG(undefined4, 0x10c0ee8) + uVar1));
    this_00 = (int *)F_00559c20(in_ecx);
    if (this_00 != (int *)0x0) {
      F_00568380((undefined *)this_00[0x1c],0x17,*(undefined4 *)((int)&REFG(undefined4, 0x10c0eec) + uVar1),this,0,0);
      ((code *)*(gen_code32 *)(*this_00 + 0x28))(this_00,(uint)(byte)(&REFG(undefined1, 0x10c0ef4))[(int)(uVar1)]);
      this_01 = (undefined *)F_00561490(this_00,2);
      if ((this_01 != (undefined *)0x0) && (*(int *)((int)&REFG(undefined4, 0x10c0ef0) + uVar1) != 0)) {
        F_0059d670(this_01,*(int *)((int)&REFG(undefined4, 0x10c0ef0) + uVar1));
      }
    }
    uVar1 = uVar1 + 0x10;
  } while (uVar1 < 0x120);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
  iVar2 = 1;
  (*(undefined4 *)(gen_frame + 0x10)) = 1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
  do {
    this_02 = this_02 + -8;
    uVar1 = F_005a2670(this_02);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: Client::UI2::AddonMainCommand::vf56 */
uint F_007ed930(unsigned int gen_a0)
{
  GEN_ENTER(0x7ed930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  
  F_00560760(((uint *)(gen_frame + 0xc)));
  uVar3 = 0;
  do {
    uVar1 = F_0055e2f0(this,*(undefined4 *)((int)&REFG(undefined4, 0x10c0ee8) + uVar3));
    this_00 = (undefined *)F_00559c20(uVar1);
    uVar1 = 0;
    if (this_00 != (undefined *)0x0) {
      uVar1 = F_0055a2d0(*(undefined4 *)((int)this_00 + 0x70));
      if ((char)uVar1 != '\0') {
        uVar1 = F_0042a990(this + *(int *)((int)&REFG(undefined4, 0x10c0eec) + uVar3) * 0x54 + 0x180);
        ((uint *)(gen_frame + 0xc))[0] = uVar1;
        uVar1 = F_00561490(this_00,4);
        (*(uint *)(gen_frame + 0x18)) = (uint)(byte)this[0x13a];
        uVar2 = F_0055dcb0();
        uVar1 = F_00590ad0((undefined *)(uVar2 + 0xe0),2,(*(uint *)(gen_frame + 0x18)),uVar1,((uint *)(gen_frame + 0xc)));
      }
    }
    uVar3 = uVar3 + 0x10;
  } while (uVar3 < 0x120);
  return uVar1;
}

/* ref: Client::UI2::AddonMainCommand::vf57 */
uint F_007ed9d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7ed9d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    uVar1 = F_0055e2f0(this,*(undefined4 *)((int)&REFG(undefined4, 0x10c0ee8) + uVar3));
    this_00 = (undefined *)F_00559c20(uVar1);
    uVar1 = 0;
    if (this_00 != (undefined *)0x0) {
      uVar1 = F_0055a2d0(*(undefined4 *)((int)this_00 + 0x70));
      if ((char)uVar1 != '\0') {
        uVar1 = F_00561490(this_00,4);
        uVar2 = F_0055dcb0();
        uVar1 = F_00596b10((undefined *)(uVar2 + 0xe0),uVar1);
      }
    }
    uVar3 = uVar3 + 0x10;
  } while (uVar3 < 0x120);
  return uVar1;
}

/* ref: FUN_007eda30 */
uint F_007eda30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7eda30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  piVar2 = &REFG(undefined4, 0x10c0eec);
  do {
    if (*piVar2 == param_1) {
      if ((-1 < (int)uVar1) && (uVar1 < 0x12)) {
        uVar1 = F_0055e2f0(this,(&REFG(undefined4, 0x10c0ee8))[(int)(uVar1 * 4)]);
        piVar2 = (int *)F_00559c20(uVar1);
        uVar1 = 0;
        if (piVar2 != (int *)0x0) {
          uVar1 = F_0055a2d0(piVar2[0x1c]);
          if ((char)uVar1 != '\0') {
            uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,param_2);
          }
        }
      }
      return uVar1;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 4;
  } while (uVar1 < 0x12);
  return uVar1;
}

/* ref: FUN_007edaa0 */
uint F_007edaa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7edaa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  piVar2 = &REFG(undefined4, 0x10c0eec);
  do {
    if (*piVar2 == param_1) {
      uVar1 = F_0055e2f0(this,(&REFG(undefined4, 0x10c0ee8))[(int)(uVar1 * 4)]);
      uVar1 = F_00559c20(uVar1);
      return uVar1;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 4;
  } while (uVar1 < 0x12);
  return 0;
}

/* ref: Client::UI2::AddonMainCommand::vf64 */
uint F_007edae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7edae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  int * piVar3;
  undefined * this_00;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (((byte)this[0x126] & 1) != 0) {
    *(ushort *)(this + 0x126) = *(ushort *)(this + 0x126) & 0xfffe;
    this[0xff0] = (undefined1)0x1;
  }
  if ((((byte)this[0xf9] & 1) != 0) &&
     ((uVar2 = *(uint *)(this + 0xf4) >> 0x14 & 0xf, uVar2 == 3 || (uVar2 == 2)))) {
    uVar2 = F_0055dcb0();
    uVar2 = F_0055b9e0(uVar2);
    if (uVar2 != 0) {
      bVar1 = F_0055de10(this,uVar2);
      if (bVar1 != 0) {
        uVar2 = F_0055dcb0();
        F_00594ca0(*(undefined * PTR32 *)(uVar2 + 0x14),this);
        uVar2 = F_0055dcb0();
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x4)),0x32);
        F_005a2670(((undefined1 *)(gen_frame + 0x4)));
        return 1;
      }
    }
    piVar3 = (int *)F_007edaa0(this,1);
    if (piVar3 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x38))(piVar3);
      if (uVar2 != 0) {
        uVar6 = 0;
        uVar5 = 0;
        uVar4 = 0;
        this_00 = (undefined *)F_0055dcb0();
        F_0059b300(this_00,uVar4,uVar5,uVar6);
        this[0xf8] = (undefined1)((byte)this[0xf8] & 0x7f);
        uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x3c))(piVar3);
        *(uint *)(this + 0xa4) = uVar2;
        uVar2 = F_0055dcb0();
        F_005794a0(*(undefined * PTR32 *)(uVar2 + 0x14));
        uVar2 = F_0055dcb0();
        F_0059b860(*(undefined * PTR32 *)(uVar2 + 0x14),this,0);
        uVar2 = F_0055dcb0();
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x4)),0x32);
        F_005a2670(((undefined1 *)(gen_frame + 0x4)));
        return 1;
      }
    }
    return 0;
  }
  if (this[0xff0] != (undefined1)0x0) {
    *(ushort *)(this + 0x126) = *(ushort *)(this + 0x126) | 1;
    this[0xff0] = (undefined1)0x0;
  }
  return 0;
}

/* ref: Client::UI2::AddonParameter::vf47 */
uint F_007edc50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7edc50u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char * pcVar6;
  byte bVar7;
  char * pcVar8;
  uint uVar9;
  undefined3 extraout_var = 0;
  undefined * this_00;
  undefined4 uVar10;
  
  iVar2 = *(int *)((*(uint *)&gen_args[1]) + 0xc);
  iVar3 = *((int *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x50)));
  iVar4 = *(int *)((*(int *)&gen_args[2]) + 8);
  uVar9 = (*(uint *)&gen_args[1]) >> 8;
  (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) & 0xffffff00;
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))) != iVar3) {
    if (iVar3 == 1) {
      uVar10 = 0x65;
LAB_007edc90: ;
      F_0059d640(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x90))),uVar10);
    }
    else {
      if (iVar3 == 2) {
        uVar10 = 0x66;
        goto LAB_007edc90;
      }
      if (iVar3 == 4) {
        uVar10 = 0x67;
        goto LAB_007edc90;
      }
    }
    *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))) = iVar3;
    (*(uint *)&gen_args[1]) = CONCAT31((int3)uVar9,1);
  }
  iVar5 = *((int *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x40)));
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))) != iVar5) {
    (*(uint *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[1]), 1, 3),1);
    *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))) = iVar5;
  }
  F_005a28a0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x188))),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 4))));
  F_005a04e0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x188))),**(undefined4 * PTR32 *)(iVar2 + 0x20),(*(uint *)&gen_args[1]));
  if (iVar3 == 1) {
    F_005a28a0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c))),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0xc))));
    uVar10 = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 8)));
    this_00 = *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c)));
  }
  else if (iVar3 == 2) {
    F_005a28a0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x198))),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x24))));
    uVar10 = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x20)));
    this_00 = *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x198)));
  }
  else {
    if (iVar3 != 4) goto LAB_007edd61;
    F_005a28a0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x194))),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x1c))));
    uVar10 = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x18)));
    this_00 = *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x194)));
  }
  F_005a04e0(this_00,uVar10,(*(uint *)&gen_args[1]));
LAB_007edd61: ;
  F_005a28a0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 400))),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x14))));
  F_005a04e0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 400))),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x10))),(*(uint *)&gen_args[1]));
  pcVar6 = *((char * PTR32 *)GEN_TOP((*(int *)(iVar4 + 0x20) + 0x104)));
  if (pcVar6 != (char *)0x0) {
    pcVar8 = pcVar6;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    if (pcVar8 != pcVar6 + 1) {
      F_0055a300(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x19c))),1);
      F_0055a300(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))),1);
      uVar9 = F_00584110(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))),pcVar6);
      return uVar9;
    }
  }
  F_0055a300(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x19c))),0);
  bVar7 = F_0055a300(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))),0);
  return CONCAT31(extraout_var,bVar7);
}

/* ref: Client::UI2::AddonExp::vf44 */
uint F_007ede00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ede00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * this_00;
  
  uVar1 = F_0055e340(this,5);
  *(uint *)(this + 0x1c0) = uVar1;
  uVar1 = F_0055e340(this,3);
  *(uint *)(this + 0x1c4) = uVar1;
  uVar1 = F_0055e340(this,4);
  *(uint *)(this + 0x1c8) = uVar1;
  uVar1 = F_0055e2f0(this,2);
  uVar1 = F_00559b90(uVar1);
  *(uint *)(this + 0x1d4) = uVar1;
  uVar1 = F_0055e2f0(this,6);
  if (((uVar1 == 0) || (this_00 = (undefined *)F_00559c20(uVar1), this_00 == (undefined *)0x0)) ||
     (uVar1 = F_005613a0(this_00), uVar1 != 5)) {
    this_00 = (undefined *)0x0;
  }
  *(undefined * PTR32 *)(this + 0x1cc) = this_00;
  F_005a2870(this_00,0);
  F_005a28a0(*(undefined * PTR32 *)(this + 0x1cc),100);
  uVar1 = F_00561490(*(undefined * PTR32 *)(this + 0x1cc),5);
  *(uint *)(this + 0x1d0) = uVar1;
  F_00560990(this + 0x198,2000,1);
  F_005a91d0(this,1,3);
  uVar1 = F_005a91d0(this,0,2);
  return uVar1;
}

/* ref: Client::UI2::AddonExp::vf47 */
uint F_007eded0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7eded0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  
  iVar1 = *(int *)((*(uint *)&gen_args[1]) + 0xc);
  iVar2 = *(int *)((*(int *)&gen_args[2]) + 0xc);
  iVar3 = *(int *)((*(int *)&gen_args[2]) + 8);
  uVar8 = ((*((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0xdc))) < 1) - 1 & 10) + 0x11;
  uVar7 = F_00559cf0(*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x90))));
  if (uVar8 != (uVar7 & 0xffff)) {
    F_0059d640(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x90))),uVar8);
  }
  iVar4 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x50)));
  uVar7 = (*(uint *)&gen_args[1]) >> 8;
  (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) & 0xffffff00;
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))) != iVar4) {
    *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))) = iVar4;
    (*(uint *)&gen_args[1]) = CONCAT31((int3)uVar7,1);
  }
  iVar4 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x40)));
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))) != iVar4) {
    (*(uint *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[1]), 1, 3),1);
    F_00584110(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))),*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x268))));
    *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))) = iVar4;
  }
  iVar2 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x28)));
  iVar4 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x30)));
  bVar5 = false;
  if ((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c))) != iVar2) || (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 400))) != iVar4)) {
    F_005a04e0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1cc))),*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x2c))),(*(uint *)&gen_args[1]));
    F_00584110(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c8))),*((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0xfc))));
    *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 400))) = iVar4;
    *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18c))) = iVar2;
    bVar5 = true;
  }
  iVar2 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x34)));
  if ((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x194))) != iVar2) || (bVar5)) {
    if (iVar2 == 0) {
      F_0056cad0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1cc))),0);
    }
    else {
      uVar7 = *((uint *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x38)));
      F_0056cad0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1cc))),uVar7);
      if (uVar7 < 100) {
        uVar7 = F_00559cf0(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1cc))) + 0x6c))));
        if ((short)uVar7 != 0x11) {
          F_0059d640(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1cc))) + 0x6c))),0x11);
        }
      }
      else {
        uVar7 = F_00559cf0(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1cc))) + 0x6c))));
        if ((short)uVar7 != 0x65) {
          F_0059d640(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1cc))) + 0x6c))),0x65);
        }
      }
    }
    *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x194))) = iVar2;
  }
  F_0055a300(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))),(uint)(0 < *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x3c)))));
  uVar7 = *((uint *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0xd8)));
  uVar8 = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x188)));
  if (uVar8 != uVar7) {
    if (uVar7 == 0) {
      bVar6 = F_005609d0((*(undefined * PTR32 *)&gen_args[0]) + 0x198,0x3a);
      if (bVar6 == 0) {
        F_005609c0((*(undefined * PTR32 *)&gen_args[0]) + 0x198);
        F_00592380((*(undefined * PTR32 *)&gen_args[0]) + 0x198);
        F_0056c440((*(undefined * PTR32 *)&gen_args[0]) + 0x198,0x3a,0,(*(undefined * PTR32 *)&gen_args[0]),0);
      }
    }
    else if (uVar8 == 0) {
      F_00588be0((*(undefined * PTR32 *)&gen_args[0]) + 0x198,0x3a,0,(*(undefined * PTR32 *)&gen_args[0]));
      F_0055a300(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))),1);
    }
    uVar8 = F_00584110(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))),*((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x100))));
    *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x188))) = uVar7;
  }
  return uVar8;
}

/* ref: FUN_007ee110 */
uint F_007ee110(unsigned int gen_a0)
{
  GEN_ENTER(0x7ee110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  undefined4 uVar3;
  
  F_0055a300(*(undefined * PTR32 *)this,0);
  uVar1 = 0;
  *(undefined2 *)((int)this + 4) = 0;
  if (*(short *)((int)this + 6) != 0x11) {
    *(undefined2 *)((int)this + 6) = 0x11;
    uVar3 = 9;
    pvVar2 = (undefined *)F_00559c20(*(undefined4 *)this);
    pvVar2 = (undefined *)F_00561490(pvVar2,uVar3);
    uVar1 = F_0059d640(pvVar2,(uint)*(ushort *)((int)this + 6));
  }
  return uVar1;
}

/* ref: Client::UI2::AddonEnemyList::vf37 */
uint F_007ee150(unsigned int gen_a0)
{
  GEN_ENTER(0x7ee150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    if (*((int *)GEN_TOP((*(int *)(this + 0x180) + iVar3))) != 0) {
      iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x180) + iVar3)));
      if (iVar1 != 0) {
        F_00406ad0(iVar1);
      }
      *((undefined4 *)GEN_TOP((iVar3 + *(int *)(this + 0x180)))) = 0;
    }
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x20);
  F_005a92d0(this,0,0x12,0);
  F_005a92d0(this,1,0x14,0);
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: Client::UI2::AddonEnemyList::vf44 */
uint F_007ee1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ee1c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  float fVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int local_c;
  uint * local_8;
  
  iVar4 = 0;
  uVar5 = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  pvVar2 = (undefined *)F_0055e2f0(this,3);
  F_0055a300(pvVar2,uVar5);
  local_c = 3;
  do {
    uVar5 = 0;
    uVar3 = F_00404270();
    local_8 = (uint *)F_00406bd0(8,0,uVar3,uVar5);
    if (local_8 == (uint *)0x0) {
      local_8 = (uint *)0x0;
    }
    else {
      *local_8 = 0;
      local_8[1] = 0;
    }
    *((uint * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + iVar4 * 4))) = local_8;
    uVar3 = F_00578f50(this + 0x24,2,iVar4,0);
    fVar1 = REFG(float, 0x1087ef8);
    *local_8 = uVar3;
    F_00559da0(uVar3,fVar1,(float)local_c);
    if (((uVar3 == 0) || (pvVar2 = (undefined *)F_00559c20(uVar3), pvVar2 == (undefined *)0x0)) ||
       (uVar3 = F_005613a0(pvVar2), uVar3 != 1)) {
      pvVar2 = (undefined *)0x0;
    }
    pvVar2 = (undefined *)F_00561490(pvVar2,0xc);
    if (pvVar2 != (undefined *)0x0) {
      F_00568380(pvVar2,3,iVar4,this,0,0);
      F_00568380(pvVar2,6,iVar4,this,0,0);
      F_00568380(pvVar2,7,iVar4,this,0,0);
    }
    local_c = local_c + 0x1f;
    iVar4 = iVar4 + 1;
  } while (local_c < 0xfb);
  F_005a91d0(this,1,0x14);
  uVar3 = F_005a91d0(this,0,0x12);
  return uVar3;
}

/* ref: Client::UI2::AddonEnemyList::vf47 */
uint F_007ee300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ee300u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  undefined * pvVar4;
  uint uVar5;
  undefined * pvVar6;
  int iVar7;
  ushort uVar8;
  undefined4 uVar9;
  
  iVar7 = *(int *)((*(int *)&gen_args[1]) + 0x50);
  iVar1 = *(int *)((*(int *)&gen_args[2]) + 0x48);
  (*(int *)(gen_frame + 0x10)) = iVar7;
  if (*((int *)GEN_TOP((*(int *)(iVar7 + 0x20) + 0xc))) == 0) {
    *((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x126))) = *((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x126))) & 0xffef;
  }
  else {
    *((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x126))) = *((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x126))) | 0x10;
  }
  iVar7 = **(int * PTR32 *)(iVar7 + 0x20);
  *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))) = iVar7;
  if (8 < iVar7) {
    *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))) = 8;
  }
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))) == 0) {
    iVar7 = 0;
    do {
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP((iVar7 + *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))))));
      F_0055a300((undefined *)*puVar2,0);
      *(undefined2 *)(puVar2 + 1) = 0;
      if (*(short *)((int)puVar2 + 6) != 0x11) {
        uVar9 = 9;
        *(undefined2 *)((int)puVar2 + 6) = 0x11;
        pvVar4 = (undefined *)F_00559c20(*puVar2);
        pvVar4 = (undefined *)F_00561490(pvVar4,uVar9);
        F_0059d640(pvVar4,(uint)*(ushort *)((int)puVar2 + 6));
      }
      iVar7 = iVar7 + 4;
    } while (iVar7 < 0x20);
    uVar5 = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xf4))) >> 0x14 & 0xf;
    if ((uVar5 != 3) && (uVar5 != 2)) {
      return uVar5;
    }
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))))((*(undefined * PTR32 *)&gen_args[0]),0,0);
    return uVar5;
  }
  uVar5 = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xf4))) >> 0x14 & 0xf;
  if (((uVar5 == 5) || (uVar5 == 4)) && ((char)(*(undefined * PTR32 *)&gen_args[0])[0x10e] < '\x01')) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))))((*(undefined * PTR32 *)&gen_args[0]),0);
  }
  uVar5 = (uint)(ushort)(*((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))) * 0x1f + 0xc);
  pvVar4 = (undefined *)F_0055e2f0((*(undefined * PTR32 *)&gen_args[0]),3);
  F_0055a300(pvVar4,(uint)(*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))) != 0));
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))))((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0xc)),&(*(int *)&gen_args[1]),0);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))))((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)(gen_frame + 0xc)),uVar5);
  F_0055a080(pvVar4,uVar5);
  (*(int *)&gen_args[2]) = 0;
  if (0 < *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184)))) {
    (*(int *)(gen_frame + 0x18)) = 0x10;
    (*(int *)(gen_frame + 0x14)) = 4;
    do {
      piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))) + (*(int *)&gen_args[2]) * 4)));
      F_0055a300((undefined *)*piVar3,1);
      if (((*piVar3 == 0) || (pvVar4 = (undefined *)F_00559c20(*piVar3), pvVar4 == (undefined *)0x0)) ||
         (uVar5 = F_005613a0(pvVar4), uVar5 != 1)) {
        pvVar4 = (undefined *)0x0;
      }
      uVar9 = *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + *(int *)(iVar1 + 0x20))));
      pvVar6 = (undefined *)F_00561530(pvVar4,3);
      F_00584110(pvVar6,uVar9);
      iVar7 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + 4 + *(int *)((*(int *)(gen_frame + 0x10)) + 0x20))));
      uVar8 = 0x69;
      if (iVar7 < 0x32) {
        uVar8 = 0x65;
      }
      else if (iVar7 < 0x50) {
        uVar8 = 0x66;
      }
      else if (iVar7 < 0x5a) {
        uVar8 = 0x67;
      }
      else if (iVar7 < 100) {
        uVar8 = 0x68;
      }
      if (*(ushort *)(piVar3 + 1) != uVar8) {
        *(ushort *)(piVar3 + 1) = uVar8;
        pvVar6 = (undefined *)F_00561490(pvVar4,7);
        F_0059d640(pvVar6,(uint)uVar8);
      }
      pvVar4 = (undefined *)F_00561550(pvVar4,5);
      iVar7 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + *(int *)((*(int *)(gen_frame + 0x10)) + 0x20))));
      if (iVar7 < 0) {
        F_0055a300(pvVar4,0);
      }
      else {
        F_0055a300(pvVar4,1);
        F_00568230(pvVar4,(float)((float10)iVar7 / (float10)*(double *)&REFG(undefined, 0x1088118)));
      }
      (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 0x10;
      (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 0xc;
      (*(int *)&gen_args[2]) = (*(int *)&gen_args[2]) + 1;
    } while ((*(int *)&gen_args[2]) < *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x184))));
    if (7 < (*(int *)&gen_args[2])) goto LAB_007ee60c;
  }
  iVar7 = (*(int *)&gen_args[2]) * 4;
  do {
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((iVar7 + *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))))));
    F_0055a300((undefined *)*puVar2,0);
    *(undefined2 *)(puVar2 + 1) = 0;
    if (*(short *)((int)puVar2 + 6) != 0x11) {
      uVar9 = 9;
      *(undefined2 *)((int)puVar2 + 6) = 0x11;
      pvVar4 = (undefined *)F_00559c20(*puVar2);
      pvVar4 = (undefined *)F_00561490(pvVar4,uVar9);
      F_0059d640(pvVar4,(uint)*(ushort *)((int)puVar2 + 6));
    }
    iVar7 = iVar7 + 4;
  } while (iVar7 < 0x20);
LAB_007ee60c: ;
  uVar5 = F_0078d870((*(undefined * PTR32 *)&gen_args[0]),*((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x10)) + 0x20) + 4))),
                       *((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x10)) + 0x20) + 8))));
  return uVar5;
}

/* ref: Client::UI2::AddonEnemyList::vf6 */
uint F_007ee630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ee630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (((byte)this[0xf9] & 1) != 0) {
    iVar4 = 0;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((iVar4 + *(int *)(this + 0x180))));
      F_0055a300((undefined *)*puVar1,0);
      *(undefined2 *)(puVar1 + 1) = 0;
      if (*(short *)((int)puVar1 + 6) != 0x11) {
        uVar5 = 9;
        *(undefined2 *)((int)puVar1 + 6) = 0x11;
        pvVar2 = (undefined *)F_00559c20(*puVar1);
        pvVar2 = (undefined *)F_00561490(pvVar2,uVar5);
        F_0059d640(pvVar2,(uint)*(ushort *)((int)puVar1 + 6));
      }
      iVar4 = iVar4 + 4;
    } while (iVar4 < 0x20);
  }
  uVar3 = F_005b0610(this,param_1,1,param_2);
  return uVar3;
}

/* ref: Client::UI2::AddonEnemyList::vf2 */
uint F_007ee6b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7ee6b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = param_1 & 0xffff;
  if (uVar1 == 3) {
    uVar1 = F_0078d990(this,param_2,param_4);
  }
  else {
    if (uVar1 == 6) {
      uVar1 = F_0078da20(this,param_2,param_4);
      return uVar1;
    }
    uVar1 = uVar1 - 7;
    if (uVar1 == 0) {
      uVar1 = F_0078dab0(this,param_4);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_007ee700 */
uint F_007ee700(unsigned int gen_a0)
{
  GEN_ENTER(0x7ee700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 2;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d56dc));
  *(undefined4 *)((int)this + 0x274) = 0;
  F_0055e2a0(this,0x4000002,1);
  *(undefined1 *)((int)this + 0x10f) = 0xb;
  return (uint)this;
}

/* ref: Client::UI2::AddonStatus::vf44 */
uint F_007ee760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ee760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  undefined * pAVar3;
  uint uVar4;
  
  uVar4 = 0;
  pAVar3 = this + 0x184;
  do {
    uVar1 = F_0055e2f0(this,(&REFG(undefined4, 0x10c1090))[(int)(uVar4)]);
    *(uint *)(pAVar3 + -4) = uVar1;
    if (((uVar1 == 0) || (pvVar2 = (undefined *)F_00559c20(uVar1), pvVar2 == (undefined *)0x0)) ||
       (uVar1 = F_005613a0(pvVar2), uVar1 != 0x10)) {
      pvVar2 = (undefined *)0x0;
    }
    *(undefined * PTR32 *)pAVar3 = pvVar2;
    F_0058a4b0(pvVar2,&REFG(undefined, 0x10be72f));
    pvVar2 = (undefined *)0x0;
    if (*(int *)pAVar3 != 0) {
      pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar3 + 0x70);
    }
    F_0055a300(pvVar2,0);
    if (*(int *)pAVar3 == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar3 + 0x70);
    }
    F_00568380(pvVar2,0x37,uVar4,this,0,0);
    uVar4 = uVar4 + 1;
    pAVar3 = pAVar3 + 8;
  } while (uVar4 < 0x1e);
  this[0x270] = (undefined1)0x0;
  F_005a91d0(this,1,3);
  uVar4 = F_005a91d0(this,0,2);
  return uVar4;
}

/* ref: Client::UI2::AddonStatus::vf47 */
uint F_007ee820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7ee820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined * this_00;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined * pAVar9;
  undefined * pAVar10;
  undefined4 uVar11;
  
  iVar8 = *(int *)(param_1 + 0xc);
  uVar1 = *((uint *)GEN_TOP((*(int *)(iVar8 + 0x20) + 0xcc)));
  iVar2 = *(int *)(param_2 + 8);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  (*(int *)(gen_frame + 0xc)) = iVar8;
  uVar4 = F_0055dcb0();
  uVar4 = F_0055b9e0(uVar4);
  (*(uint *)(gen_frame + 0x10)) = uVar4;
  param_2 = 0;
  param_1 = -1;
  if ((0 < *(int *)(this + 0x274)) || (0 < (int)uVar1)) {
    iVar6 = 0;
    (*(undefined * PTR32 *)(gen_frame + 0x14)) = this + 0x184;
    do {
      piVar3 = *(int * PTR32 *)(*(undefined * PTR32 *)(gen_frame + 0x14));
      uVar4 = *((uint *)GEN_TOP((*(int *)(iVar8 + 0x20) + 0x54 + iVar6 * 4)));
      if (piVar3 != (int *)0x0) {
        if ((int)uVar4 < 1) {
          F_0055a300((undefined *)piVar3[0x1c],0);
          uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x3c))(piVar3);
          if ((*(uint *)(gen_frame + 0x10)) == uVar4) {
            param_1 = iVar6;
          }
        }
        else {
          F_004352a0(uVar4 >> 0x1d & 2,&(*(undefined4 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x4)));
          F_00562e60(piVar3,(*(undefined4 *)(gen_frame + 0x8)));
          F_00562e80(piVar3,(*(undefined4 *)(gen_frame + 0x4)));
          F_00595530(piVar3,uVar4 & 0x3fffffff,0,0);
          F_0058a4b0(piVar3,*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 4 + iVar6 * 4))));
          F_0055a300((undefined *)piVar3[0x1c],1);
        }
      }
      pAVar10 = (*(undefined * PTR32 *)(gen_frame + 0x18));
      iVar6 = iVar6 + 1;
      (*(undefined * PTR32 *)(gen_frame + 0x14)) = (*(undefined * PTR32 *)(gen_frame + 0x14)) + 8;
      iVar8 = (*(int *)(gen_frame + 0xc));
    } while (iVar6 < 0x1e);
    if (param_1 != -1) {
      uVar11 = 0;
      if (*(int *)((*(undefined * PTR32 *)(gen_frame + 0x18)) + param_1 * 8 + 0x184) != 0) {
        uVar11 = *((undefined4 *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x18)) + param_1 * 8 + 0x184) + 0x70)));
      }
      uVar4 = F_0055a2d0(uVar11);
      if ((char)uVar4 == '\0') {
        uVar7 = param_1 + 1;
        uVar4 = param_2;
        if (uVar7 < 0x1e) {
          pAVar9 = pAVar10 + uVar7 * 8 + 0x184;
          do {
            uVar11 = 0;
            if (*(int *)pAVar9 != 0) {
              uVar11 = *(undefined4 *)(*(int *)pAVar9 + 0x70);
            }
            uVar5 = F_0055a2d0(uVar11);
            if ((char)uVar5 != '\0') {
              piVar3 = *(int * PTR32 *)(pAVar10 + uVar7 * 8 + 0x184);
              uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x3c))(piVar3);
              if (uVar4 != 0) goto LAB_007ee9ea;
              break;
            }
            uVar7 = uVar7 + 1;
            pAVar9 = pAVar9 + 8;
          } while (uVar7 < 0x1e);
        }
        iVar8 = param_1 + -1;
        if (-1 < iVar8) {
          pAVar10 = (*(undefined * PTR32 *)(gen_frame + 0x18)) + iVar8 * 8 + 0x184;
          do {
            if (*(int *)pAVar10 == 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = *(undefined4 *)(*(int *)pAVar10 + 0x70);
            }
            uVar7 = F_0055a2d0(uVar11);
            if ((char)uVar7 != '\0') {
              uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x18)) + iVar8 * 8 + 0x184) + 0x3c))))
                                (*(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x18)) + iVar8 * 8 + 0x184));
              break;
            }
            pAVar10 = pAVar10 + -8;
            iVar8 = iVar8 + -1;
          } while (-1 < iVar8);
        }
LAB_007ee9ea: ;
        if ((*(uint *)(gen_frame + 0x10)) != uVar4) {
          uVar11 = 0;
          uVar7 = -(uint)(uVar4 != 0) & (uint)(*(undefined * PTR32 *)(gen_frame + 0x18));
          this_00 = (undefined *)F_0055dcb0();
          F_0059b300(this_00,uVar4,uVar7,uVar11);
        }
      }
    }
    *(uint *)((*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x274) = uVar1;
    uVar4 = uVar1;
    this = (*(undefined * PTR32 *)(gen_frame + 0x18));
  }
  if (this[0x270] != (undefined1)0x0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0xe0))(this);
  }
  return uVar4;
}

/* ref: Client::UI2::AddonStatus::vf56 */
uint F_007eea50(unsigned int gen_a0)
{
  GEN_ENTER(0x7eea50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined * pAVar4;
  int iVar5;
  
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b990(uVar2);
  uVar3 = F_0055dcb0();
  uVar3 = F_0055b9a0(uVar3);
  iVar5 = *(int *)(uVar2 + 0xc);
  pAVar4 = *(undefined * PTR32 *)(uVar3 + 8);
  (*(int *)(gen_frame + 0xc)) = iVar5;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = pAVar4;
  if (0 < *((int *)GEN_TOP((*(int *)(iVar5 + 0x20) + 0xcc)))) {
    pAVar4 = this + 0x184;
    uVar2 = 0x7c;
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = pAVar4;
    do {
      if (0 < *((int *)GEN_TOP((*(int *)(iVar5 + 0x20) + -0x28 + uVar2)))) {
        F_00560760(((undefined4 *)(gen_frame + 0x0)));
        iVar5 = *(int *)(*(undefined * PTR32 *)(gen_frame + 0x18));
        ((undefined4 *)(gen_frame + 0x0))[0] = *((undefined4 *)GEN_TOP((uVar2 + *(int *)((*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x20))));
        uVar1 = *(undefined4 *)(iVar5 + 0x68);
        (*(uint *)(gen_frame + 0x10)) = (uint)(byte)this[0x13a];
        uVar3 = F_0055dcb0();
        pAVar4 = (undefined *)F_00590ad0((undefined *)(uVar3 + 0xe0),2,(*(uint *)(gen_frame + 0x10)),uVar1,((undefined4 *)(gen_frame + 0x0)));
        iVar5 = (*(int *)(gen_frame + 0xc));
      }
      (*(undefined * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 *)(gen_frame + 0x18)) + 8;
      uVar2 = uVar2 + 4;
    } while (uVar2 < 0xf4);
  }
  this[0x270] = (undefined1)0x1;
  return (uint)pAVar4;
}

/* ref: Client::UI2::AddonStatus::vf57 */
uint F_007eeb10(unsigned int gen_a0)
{
  GEN_ENTER(0x7eeb10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  undefined * pAVar3;
  int local_8;
  
  pAVar3 = this + 0x184;
  local_8 = 0x1e;
  do {
    uVar1 = *(undefined4 *)(*(int *)pAVar3 + 0x68);
    uVar2 = F_0055dcb0();
    uVar2 = F_00596b10((undefined *)(uVar2 + 0xe0),uVar1);
    pAVar3 = pAVar3 + 8;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  this[0x270] = (undefined1)0x0;
  return uVar2;
}

/* ref: Client::UI2::AddonStatus::vf32 */
byte F_007eeb60(unsigned int gen_a0)
{
  GEN_ENTER(0x7eeb60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined * pAVar3;
  int iVar4;
  
  iVar4 = 0;
  pAVar3 = this + 0x184;
  do {
    piVar1 = *(int * PTR32 *)pAVar3;
    if (piVar1 != (int *)0x0) {
      uVar2 = F_0055a2d0(piVar1[0x1c]);
      if ((char)uVar2 != '\0') {
        uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1);
        *(uint *)(this + 0xa4) = uVar2;
        return 1;
      }
    }
    iVar4 = iVar4 + 1;
    pAVar3 = pAVar3 + 8;
  } while (iVar4 < 0x1e);
  return 0;
}

/* ref: Client::UI2::AddonBagStatus::vf37 */
uint F_007eebc0(unsigned int gen_a0)
{
  GEN_ENTER(0x7eebc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * pAVar2;
  uint uVar3;
  
  uVar3 = 0;
  pAVar2 = this + 0x180;
  do {
    if (*(int *)pAVar2 == 0) {
      pvVar1 = (undefined *)0x0;
    }
    else {
      pvVar1 = *(undefined * PTR32 *)(*(int *)pAVar2 + 0x70);
    }
    uVar3 = uVar3 + 1;
    F_005840a0(pvVar1,0x17,uVar3,this,0);
    pAVar2 = pAVar2 + 4;
  } while (uVar3 < 4);
  if (*(int *)(this + 400) == 0) {
    pvVar1 = (undefined *)0x0;
  }
  else {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
  }
  F_005840a0(pvVar1,0x17,0,this,0);
  F_005a92d0(this,1,8,0);
  F_005a92d0(this,1,7,0);
  uVar3 = F_005b0510((undefined *)this);
  return uVar3;
}

/* ref: Client::UI2::AddonBagStatus::vf47 */
uint F_007eec40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7eec40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  ((uint *)(gen_frame + 0x10))[6] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar2 = *(int *)(param_1 + 0x20);
  uVar7 = 0;
  ((uint *)(gen_frame + 0x10))[0] = 0x65;
  ((uint *)(gen_frame + 0x10))[1] = 0x66;
  ((uint *)(gen_frame + 0x10))[2] = 0x6b;
  ((uint *)(gen_frame + 0x10))[3] = 0x67;
  ((uint *)(gen_frame + 0x10))[4] = 0x69;
  ((uint *)(gen_frame + 0x10))[5] = 0x6a;
  if (REFG(undefined4, 0x13283e4) != 0) {
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = (undefined *)0x0;
    do {
      uVar4 = F_00561490(*(undefined * PTR32 *)(this + 400),*((undefined4 *)GEN_TOP((REFG(undefined * PTR32, 0x13283e8) + uVar7 * 4))));
      iVar3 = *(int *)(uVar4 + 0x8c);
      uVar4 = ((uint *)(gen_frame + 0x10))[(int)(*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 4 + *(int *)(iVar2 + 0x20)))))];
      uVar5 = F_00559cf0(*(undefined4 *)(iVar3 + 0x6c));
      if (uVar4 != (uVar5 & 0xffff)) {
        F_0059d670(*(undefined * PTR32 *)(iVar3 + 0x6c),uVar4);
      }
      (*(undefined * PTR32 *)(gen_frame + 0xc)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x10);
      uVar7 = uVar7 + 1;
    } while (uVar7 < REFG(undefined4, 0x13283e4));
  }
  uVar7 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this + 0x180;
  do {
    uVar4 = 0;
    do {
      uVar5 = F_00561490(*(undefined * PTR32 *)(*(undefined * PTR32 *)(gen_frame + 0xc)),*((undefined4 *)GEN_TOP((REFG(undefined * PTR32, 0x13283e0) + uVar4))));
      iVar2 = *(int *)(uVar5 + 0x8c);
      uVar5 = ((uint *)(gen_frame + 0x10))[(int)(*((byte *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0xc + uVar7))))];
      uVar6 = F_00559cf0(*(undefined4 *)(iVar2 + 0x6c));
      if (uVar5 != (uVar6 & 0xffff)) {
        uVar5 = F_0059d670(*(undefined * PTR32 *)(iVar2 + 0x6c),uVar5);
      }
      uVar4 = uVar4 + 4;
      uVar7 = uVar7 + 0x14;
    } while (uVar4 < 100);
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)(gen_frame + 0xc)) + 4;
  } while (uVar7 < 2000);
  F_00c47745(((uint *)(gen_frame + 0x10))[6] ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar5;
}

/* ref: Client::UI2::AddonMoney::vf46 */
byte F_007eed80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7eed80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined * this_00;
  undefined4 uVar1;
  undefined1 AVar2;
  
  if ((*param_2 & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  if (*(undefined * PTR32 *)(this + 0x180) != (undefined *)0x0) {
    F_00568630(*(undefined * PTR32 *)(this + 0x180),uVar1);
  }
  this_00 = *(undefined * PTR32 *)(this + 0x184);
  if (this_00 != (undefined *)0x0) {
    if ((param_2[8] & 0xf) == 0) {
      AVar2 = (undefined1)0x0;
    }
    else {
      AVar2 = SUB41(*(undefined4 *)(param_2 + 0xc),0);
    }
    if (AVar2 != this[0x188]) {
      switch((unsigned int)(uintptr_t)(AVar2)) {
      default: ;
        F_0059d640(this_00,0x65);
        this[0x188] = AVar2;
        break;
      case (undefined1)0x1: ;
        F_0059d640(this_00,0x66);
        this[0x188] = AVar2;
        return 1;
      case (undefined1)0x2: ;
        F_0059d640(this_00,0x67);
        this[0x188] = AVar2;
        return 1;
      case (undefined1)0x3: ;
        F_0059d640(this_00,0x68);
        this[0x188] = AVar2;
        return 1;
      }
    }
    return 1;
  }
  return 1;
}

/* ref: FUN_007eee50 */
uint F_007eee50(unsigned int gen_a0)
{
  GEN_ENTER(0x7eee50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int local_8;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10c6b54));
  puVar1 = (undefined4 *)((int)this + 0x18c);
  local_8 = 7;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    F_0058d480(puVar1 + 4);
    puVar1 = puVar1 + 0x10;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x10;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x80;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfb) =
       (*(byte *)((int)this + 0xfb) ^ *(byte *)((int)this + 0xf9)) & 0x77 ^
       *(byte *)((int)this + 0xf9) | 8;
  F_0055e2a0(this,0x4000002,1);
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 8;
  *(undefined1 *)((int)this + 0x10f) = 8;
  return (uint)this;
}

/* ref: FUN_007eeef0 */
uint F_007eeef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7eeef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  int * piVar1;
  code * pcVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  undefined3 extraout_var = 0;
  float10 fVar7;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar6 = param_1 * 0x40;
  piVar1 = *(int * PTR32 *)(uVar6 + 0x198 + (int)this);
  if (piVar1 != (int *)0x0) {
    this_00 = (undefined *)(uVar6 + 0x19c + (int)this);
    bVar5 = F_005610b0(this_00);
    if (bVar5 == 0) {
      F_0056c5f0(this_00);
      fVar7 = F_0055dfa0(this,1);
      iVar4 = (int)(fVar7 * (float10)REFG(double, 0x10944b8));
      pcVar2 = *(gen_code32 *)(*piVar1 + 0x20);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      uVar6 = (*pcVar2)(piVar1);
      iVar3 = *(int *)((int)this + 0x184);
      (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF(((int)(short)uVar6 + *(int *)((int)this + 0x184) * iVar4 * 10)));
      (*(undefined4 *)(gen_frame + 0x8)) = 1;
      uVar6 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1);
      (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF(((int)(short)uVar6 +
                        (iVar4 - iVar3 * iVar3 * iVar4) * *(int *)((int)this + 0x188))));
      (*(undefined4 *)(gen_frame + 0x10)) = 5;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      F_00595110(this_00,300,piVar1[0x24],&(*(undefined4 *)(gen_frame + 0x0)),3,REFG(float, 0x1088068));
      F_0056c650(this_00,0x3d,param_1,this,0,0);
      F_0058d530(this_00);
    }
    uVar6 = F_0055dcb0();
    if (*((int * PTR32 *)GEN_TOP((*(int *)(uVar6 + 0x14) + 0xcc))) == piVar1) {
      bVar5 = F_0078dfc0(this,param_1,9,0);
      uVar6 = CONCAT31(extraout_var,bVar5);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar6;
}

/* ref: FUN_007ef040 */
uint F_007ef040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ef040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  byte bVar2;
  undefined * this_00;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int local_c;
  
  F_00588f80((undefined *)((int)this + param_1 * 0x40 + 0x19c),0x3d,param_1,this,0);
  this_00 = (undefined *)F_0056c5f0((undefined *)((int)this + param_1 * 0x40 + 0x19c));
  piVar1 = *(int * PTR32 *)((int)this + param_1 * 0x40 + 0x198);
  if (piVar1 != (int *)0x0) {
    uVar3 = F_0055dcb0();
    uVar4 = F_0055e2f0(piVar1,4);
    F_00596b10((undefined *)(uVar3 + 0xe0),uVar4);
    uVar3 = F_0055dcb0();
    if (*((int * PTR32 *)GEN_TOP((*(int *)(uVar3 + 0x14) + 0xcc))) == piVar1) {
      F_0078dfc0(this,param_1,9,0);
    }
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1);
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,0);
    *(undefined4 *)((int)this + param_1 * 0x40 + 0x18c) = 0;
    *(undefined4 *)((int)this + param_1 * 0x40 + 400) = 0;
    *(undefined4 *)((int)this + param_1 * 0x40 + 0x194) = 0;
    *(undefined4 *)((int)this + param_1 * 0x40 + 0x198) = 0;
    F_0056c5f0((undefined *)((int)this + param_1 * 0x40 + 0x19c));
    this_00 = (undefined *)((int)this + 0x19c);
    local_c = 8;
    do {
      piVar1 = *(int * PTR32 *)((int)this_00 + -4);
      if ((piVar1 != (int *)0x0) && (*(int *)((int)this_00 + -8) != 0)) {
        uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1);
        if (*(int *)((int)this + 0x188) < 0) {
          if ((short)uVar3 <= (short)uVar4) {
            if (*(int *)((int)this + 0x188) < 0) goto LAB_007ef187;
            goto LAB_007ef14e;
          }
          uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,1);
        }
        else {
LAB_007ef14e: ;
          if ((short)uVar4 <= (short)uVar3) goto LAB_007ef187;
          uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,1);
          uVar5 = (uint)(ushort)-(short)uVar5;
        }
        ((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1,(uVar5 & 0xffff) + (uVar4 & 0xffff));
        bVar2 = F_005610c0(this_00,0x3d);
        if (bVar2 == 0) {
          F_0056c5f0(this_00);
        }
      }
LAB_007ef187: ;
      this_00 = (undefined *)((int)this_00 + 0x40);
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return (uint)this_00;
}

/* ref: FUN_007ef1b0 */
uint F_007ef1b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7ef1b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,((short *)(gen_frame + 0x8)),((short *)(gen_frame + 0x4)));
  fVar3 = F_0055dfa0(this,1);
  fVar4 = (float10)REFG(double, 0x10944b8);
  uVar2 = F_0055dcb0();
  iVar1 = *(int *)(uVar2 + 0x234);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,1);
  if ((int)((uVar2 & 0xffff) + (int)((short *)(gen_frame + 0x8))[0]) < iVar1 - (int)(fVar3 * fVar4)) {
    *(uint *)((int)this + 0x184) = ((int)(fVar3 * fVar4) < (int)((short *)(gen_frame + 0x8))[0]) - 1;
  }
  else {
    *(undefined4 *)((int)this + 0x184) = 1;
  }
  uVar2 = F_0055dcb0();
  fVar4 = (float10)*(int *)(uVar2 + 0x238);
  if (*(int *)(uVar2 + 0x238) < 0) {
    fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  if ((float10)(int)((short *)(gen_frame + 0x4))[0] < fVar4 * (float10)*(double *)&REFG(undefined, 0x10920a8)) {
    *(undefined4 *)((int)this + 0x188) = 1;
    return 1;
  }
  *(undefined4 *)((int)this + 0x188) = 0xffffffff;
  return 0xffffffff;
}

/* ref: Client::UI2::AddonCastBar::vf37 */
uint F_007ef280(unsigned int gen_a0)
{
  GEN_ENTER(0x7ef280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined2 *)(this + 0x1b0) = 0;
  *(undefined2 *)(this + 0x20c) = 0;
  this[0x20e] = (undefined1)0x0;
  F_005a92d0(this,1,0x15,0);
  F_005a92d0(this,0,0x13,0);
  uVar1 = F_005b0510((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonCastBar::vf5 */
uint F_007ef2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ef2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_0078e800(this);
  F_005a89b0(this,param_1,1);
  uVar1 = F_0055e2a0(this,0x2000000,1);
  return uVar1;
}

/* ref: FUN_007ef320 */
uint F_007ef320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7ef320u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  ushort uVar1;
  uint in_EAX = 0;
  undefined2 extraout_var = 0;
  bool bVar2;
  bool bVar3;
  float10 fVar4;
  float10 fVar5;
  
  if ((*(int *)&gen_args[1]) == 0) {
    if (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))) != (*(uint *)&gen_args[3])) {
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))) = (*(uint *)&gen_args[3]);
      *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a8))) =
           (float)((float10)*(double *)&REFG(undefined, 0x1088118) / (float10)(int)(*(uint *)&gen_args[3]));
    }
    in_EAX = (*(uint *)&gen_args[2]);
    if (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x19c))) != (*(uint *)&gen_args[2])) {
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x19c))) = (*(uint *)&gen_args[2]);
      in_EAX = F_0078e910((*(undefined * PTR32 *)&gen_args[0]),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))) - (*(uint *)&gen_args[2]));
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x188))) != (undefined *)0x0) {
      (*(uint *)&gen_args[3]) = (uint)gen_fl2bits((float)(int)(*(uint *)&gen_args[4]));
      fVar4 = (float10)(int)(*(uint *)&gen_args[4]);
      fVar5 = (float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a4)));
      bVar2 = GEN_ISNAN(fVar5) || GEN_ISNAN(fVar4);
      bVar3 = bVar2 || fVar5 == fVar4;
      in_EAX = CONCAT22((short)(in_EAX >> 0x10),
                        CONCAT11(bVar3 << 6 | bVar2 << 2 | 2U | !(fVar4 <= fVar5),(char)in_EAX));
      if (bVar2 == bVar3) {
        *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a4))) = (*(uint *)&gen_args[3]);
        F_0055a000(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x188))),&(*(int *)&gen_args[1]),&(*(uint *)&gen_args[2]));
        (*(uint *)&gen_args[3]) = CONCAT22(((undefined2)0x27f),*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x210))));
        (*(uint *)&gen_args[4]) = (uint)TRUNC((float10)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x210))) *
                              ((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a4))) /
                              (float10)*(double *)&REFG(undefined, 0x1088118)));
        uVar1 = F_0055a040(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x188))),(*(uint *)&gen_args[4]) & 0xffff,(*(uint *)&gen_args[2]));
        in_EAX = CONCAT22(extraout_var,uVar1);
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_007ef400 */
uint F_007ef400(unsigned int gen_a0)
{
  GEN_ENTER(0x7ef400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x184) != (undefined *)0x0) {
    in_EAX = F_00567f70(*(undefined * PTR32 *)((int)this + 0x184));
    if ((short)in_EAX == 0x66) {
      uVar1 = *(uint *)((int)this + 0xf4) >> 0x14 & 0xf;
      *(undefined1 *)((int)this + 0x1b0) = 0;
      if ((uVar1 == 3) || (uVar1 == 2)) {
        F_005b0610(this,0,1,1);
      }
      *(undefined1 *)((int)this + 0x20d) = 0;
      if (*(int *)((int)this + 0x18c) != 0) {
        uVar1 = F_0042a990((int)this + 0x1b4);
        F_00584110(*(undefined * PTR32 *)((int)this + 0x18c),uVar1);
      }
      *(undefined2 *)((int)this + 0x1b0) = 0;
      *(undefined2 *)((int)this + 0x20c) = 0;
      *(undefined1 *)((int)this + 0x20e) = 0;
      in_EAX = F_005b0610(this,0,1,1);
    }
  }
  return in_EAX;
}

/* ref: FUN_007ef490 */
uint F_007ef490(unsigned int gen_a0)
{
  GEN_ENTER(0x7ef490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x184) != (undefined *)0x0) {
    in_EAX = F_00567f70(*(undefined * PTR32 *)((int)this + 0x184));
    if ((short)in_EAX == 0x68) {
      uVar1 = *(uint *)((int)this + 0xf4) >> 0x14 & 0xf;
      *(undefined1 *)((int)this + 0x1b1) = 0;
      if ((uVar1 == 3) || (uVar1 == 2)) {
        F_005b0610(this,0,1,1);
      }
      *(undefined1 *)((int)this + 0x20e) = 0;
      if (*(int *)((int)this + 0x18c) != 0) {
        uVar1 = F_0042a990((int)this + 0x1b4);
        F_00584110(*(undefined * PTR32 *)((int)this + 0x18c),uVar1);
      }
      *(undefined2 *)((int)this + 0x1b0) = 0;
      *(undefined2 *)((int)this + 0x20c) = 0;
      *(undefined1 *)((int)this + 0x20e) = 0;
      in_EAX = F_005b0610(this,0,1,1);
    }
  }
  return in_EAX;
}

/* ref: FUN_007ef520 */
uint F_007ef520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x7ef520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint param_6 = (uint)gen_a6;
  uint param_7 = (uint)gen_a7;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = (uint *)(param_1 * 0x20 + 0x1c8 + (int)this);
  puVar1[4] = 0;
  *(undefined1 *)(puVar1 + 7) = 0;
  if (((byte)param_2 & 0x1f) == 3) {
    iVar3 = param_3;
    if (0x8000 < param_3) {
      iVar3 = param_3 + -0xffff;
    }
    puVar1[5] = (uint)gen_fl2bits((float)iVar3);
    *(undefined1 *)(puVar1 + 7) = 1;
  }
  else if (0 < param_3) {
    puVar1[4] = (uint)gen_fl2bits((float)((float10)param_3 / (float10)*(double *)&REFG(undefined, 0x1088118)));
  }
  *(undefined2 *)(puVar1 + 6) = (undefined2)param_4;
  *(undefined2 *)((int)puVar1 + 0x1a) = (undefined2)param_5;
  uVar2 = 0;
  *puVar1 = param_2;
  if ((param_2 >> 7 & 1) != 0) {
    uVar2 = param_7;
  }
  puVar1[3] = uVar2;
  puVar1[1] = param_6;
  uVar2 = F_0078ece0(this,param_1,1);
  return uVar2;
}

/* ref: FUN_007ef5c0 */
uint F_007ef5c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7ef5c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  float fVar3;
  undefined * this_00;
  uint uVar4;
  undefined * this_01;
  uint uVar5;
  uint uVar6;
  undefined4 * puVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 * puVar11;
  float10 fVar12;
  float10 fVar13;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x2c)) = (undefined4 *)((int)this + 0xe9c);
  puVar7 = (undefined4 *)((int)this + 0x1d0);
  puVar11 = (undefined4 *)((int)this + 0x1360);
  (*(int *)(gen_frame + 0xc)) = 100;
  do {
    this_00 = (undefined *)puVar11[-2];
    uVar4 = puVar7[-2];
    iVar10 = puVar7[-1];
    this_01 = (undefined *)*puVar7;
    uVar8 = F_0055a2d0(this_01);
    if (((char)uVar8 != '\0') || (uVar8 = F_0055a2d0(this_00), (char)uVar8 != '\0')) {
      (*(uint *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x4)), 1, 3),(char)(uVar4 >> 6)) & 0xffffff01;
      uVar6 = (*(uint *)(gen_frame + 0x10)) >> 8;
      (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) & 0xffffff00;
      uVar8 = (*(uint *)(gen_frame + 0x14)) >> 8;
      (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) & 0xffffff00;
      uVar5 = (*(uint *)(gen_frame + 0x20)) >> 8;
      (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) & 0xffffff00;
      fVar1 = ((float)GEN_TOF(((float10)*(double *)&REFG(undefined, 0x10c7070) /
                     ((float10)*(float *)((int)this + 0x1c8c) *
                     (float10)*(float *)((int)this + 0x198)))));
      if ((uVar4 >> 5 & 1) == 0) {
LAB_007ef7cf: ;
        F_0055a300((undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x2c)),(uint)(iVar10 != 0));
        F_0055a300((undefined *)(*(undefined4 * PTR32 *)(gen_frame + 0x2c))[1],(*(uint *)(gen_frame + 0x4)));
        if (iVar10 != 0) {
          F_00591c00((undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x2c)),iVar10,0);
        }
        if ((uVar4 >> 7 & 1) != 0) {
          (*(uint *)(gen_frame + 0x10)) = CONCAT31((int3)uVar6,1);
        }
      }
      else {
        fVar2 = ((float)GEN_TOF(((float10)(int)*(short *)(puVar7 + 4) -
                       (float10)*(float *)((int)this + 0x188))));
        fVar3 = ((float)GEN_TOF(((float10)(int)*(short *)((int)puVar7 + 0x12) -
                       (float10)*(float *)((int)this + 0x18c))));
        if (*(float *)&REFG(undefined, 0x1088114) < gen_bits2f(puVar7[2])) {
          fVar12 = (float10)fVar3;
          fVar13 = (float10)(float)(((float10)GEN_TOD(gen_bits2f(puVar7[2]))) *
                                    (float10)*(double *)&REFG(undefined, 0x1094568) + (float10)fVar1);
          if (!(fVar13 * fVar13 < (float10)fVar2 * (float10)fVar2 + fVar12 * fVar12))
          goto LAB_007ef7cf;
          iVar10 = 0;
        }
        else {
          fVar12 = (float10)fVar3;
          fVar13 = (float10)fVar1;
          if (!(fVar13 * fVar13 < (float10)fVar2 * (float10)fVar2 + fVar12 * fVar12))
          goto LAB_007ef7cf;
        }
        uVar9 = 0x65;
        if ((uVar4 & 0x1f) == 2) {
          uVar9 = 0x66;
        }
        F_0059d670((undefined *)puVar11[-1],uVar9);
        fVar12 = F_00c4d1fa((float10)fVar2);
        (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF((((float10)(float)fVar12 * (float10)*(double *)&REFG(undefined, 0x1080220)) /
                          (float10)*(double *)&REFG(undefined, 0x1080228) + (float10)*(double *)&REFG(undefined, 0x10920c0))));
        if (*(char *)((int)this + 0x1bc) == '\0') {
          (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x1a4) + (float10)(*(float *)(gen_frame + 0x34)))));
        }
        F_00568350(this_00,(*(float *)(gen_frame + 0x34)));
        F_0055a300((undefined *)*puVar11,(uint)(iVar10 != 0));
        F_00568350(*puVar11,GEN_TOF(gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x34))) ^ REFG(uint, 0x10920d0))));
        F_0055a300((undefined *)puVar11[1],1);
        if (iVar10 == 0) {
          fVar12 = (float10)0;
        }
        else {
          F_00591c00((undefined *)*puVar11,iVar10,0);
          fVar12 = (float10)*(float *)((int)this + 0x1c90);
        }
        F_00559f00(puVar11[1],(float)fVar12);
        if ((uVar4 >> 7 & 1) != 0) {
          (*(uint *)(gen_frame + 0x14)) = CONCAT31((int3)uVar8,1);
        }
        (*(uint *)(gen_frame + 0x20)) = CONCAT31((int3)uVar5,1);
      }
      F_0055a300(this_00,(*(uint *)(gen_frame + 0x20)));
      F_0055a3c0(puVar11[2],(*(uint *)(gen_frame + 0x14)));
      F_0055a300(this_01,(uint)((char)(*(uint *)(gen_frame + 0x20)) == '\0'));
      uVar8 = F_0055a3c0((*(undefined4 * PTR32 *)(gen_frame + 0x2c))[2],(*(uint *)(gen_frame + 0x10)));
    }
    puVar7 = puVar7 + 8;
    (*(undefined4 * PTR32 *)(gen_frame + 0x2c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x2c)) + 3;
    puVar11 = puVar11 + 5;
    (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + -1;
    if ((*(int *)(gen_frame + 0xc)) == 0) {
      return uVar8;
    }
  } while( true );
}

/* ref: FUN_007ef860 */
uint F_007ef860(unsigned int gen_a0)
{
  GEN_ENTER(0x7ef860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float fVar8;
  
  uVar5 = F_0078efb0((undefined *)((int)this + 0x180));
  if (*(int *)((int)this + 0xe8c) != 0) {
    uVar3 = *(ushort *)((int)this + 0x1c98);
    uVar4 = *(ushort *)((int)this + 0x1c9a);
    fVar8 = *(float *)((int)this + 0x19c);
    fVar6 = (float10)((float)GEN_TOF(((float10)*(ushort *)((int)this + 0x1c94) * (float10)REFG(double, 0x1088108))));
    fVar7 = (float10)((float)GEN_TOF(((float10)REFG(double, 0x1088108) * (float10)*(ushort *)((int)this + 0x1c96))));
    fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x198) * (float10)*(float *)((int)this + 400))));
    fVar2 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x198) * (float10)*(float *)((int)this + 0x194))))
    ;
    F_0055a770(*(undefined4 *)((int)this + 0xe90),(float)(fVar6 + (float10)fVar1),
                 (float)(fVar7 + (float10)fVar2));
    F_00559da0(*(undefined4 *)((int)this + 0xe90),
                 ((float)GEN_TOF(((float10)(float)((float10)uVar3 - fVar6) - (float10)fVar1))),
                 ((float)GEN_TOF(((float10)(float)((float10)uVar4 - fVar7) - (float10)fVar2))));
    F_00568210(*(undefined4 *)((int)this + 0xe90),fVar8,fVar8);
    if (*(char *)((int)this + 0x1bc) == '\0') {
      fVar8 = *(float *)((int)this + 0x1a4);
    }
    else {
      fVar8 = 0.0;
    }
    uVar5 = F_00568350(*(undefined4 *)((int)this + 0xe90),fVar8);
  }
  return uVar5;
}

/* ref: FUN_007ef9c0 */
uint F_007ef9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7ef9c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  byte * pbVar2;
  uint uVar3;
  byte * pbVar4;
  int iVar5;
  byte * pbVar6;
  byte * pbVar7;
  bool bVar8;
  
  uVar3 = param_1;
  if (param_1 < 0x65) {
    uVar3 = param_1 * 0x20;
    pbVar2 = *(byte * PTR32 *)(uVar3 + 0x1d4 + (int)this);
    if (pbVar2 != (byte *)0x0) {
      pbVar6 = &REFG(undefined1, 0x10be762);
      pbVar4 = pbVar2;
      do {
        bVar1 = *pbVar4;
        bVar8 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_007efa10: ;
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_007efa15;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_007efa10;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_007efa15: ;
      uVar3 = 0;
      if (iVar5 != 0) {
        pbVar4 = (byte *)((int)this + 0x1b60);
        pbVar6 = pbVar4;
        pbVar7 = pbVar2;
        do {
          bVar1 = *pbVar6;
          bVar8 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_007efa48: ;
            iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_007efa4d;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar8 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_007efa48;
          pbVar6 = pbVar6 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_007efa4d: ;
        if (iVar5 != 0) {
          F_00c49908(pbVar4,0x100,pbVar2);
        }
        F_00560760(((byte * PTR32 *)(gen_frame + 0x0)));
        ((byte * PTR32 *)(gen_frame + 0x0))[0] = pbVar4;
        bVar1 = *(byte *)((int)this + 0x13a);
        uVar3 = F_0055dcb0();
        uVar3 = F_00588780((undefined *)(uVar3 + 0xe0),2,(uint)bVar1,
                             *(undefined4 *)((int)this + param_1 * 0xc + 0xea4),((byte * PTR32 *)(gen_frame + 0x0)),0,1);
      }
    }
  }
  return uVar3;
}

/* ref: FUN_007efab0 */
uint F_007efab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7efab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  char cVar1;
  undefined * this_00;
  char cVar2;
  uint uVar3;
  
  cVar1 = *(char *)((int)this + 0x1bc);
  cVar2 = (char)param_1;
  *(char *)((int)this + 0x1bc) = cVar2;
  uVar3 = param_1;
  if ((*(byte *)((int)this + 0xf9) & 1) != 0) {
    this_00 = *(undefined * PTR32 *)((int)this + 0xe80);
    if ((this_00 != (undefined *)0x0) && (*(char *)((int)this_00 + 0x88) != cVar2)) {
      uVar3 = F_0059dde0(this_00,param_1);
    }
    if (cVar1 != cVar2) {
      F_007ef5c0(this);
      uVar3 = F_007ef860(this);
    }
  }
  return uVar3;
}

/* ref: FUN_007efb10 */
unsigned int F_007efb10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7efb10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(char *)((int)this + 0x1c9c) != (char)param_1) {
    uVar1 = F_00559c20(*(undefined4 *)((int)this + 0xe8c));
    if (uVar1 != 0) {
      F_0059d670(*(undefined * PTR32 *)(uVar1 + 0x6c),(-(uint)((char)param_1 != '\0') & 0x54) + 0x11);
      *(char *)((int)this + 0x1c9c) = (char)param_1;
    }
  }
  return 0;
}

/* ref: FUN_007efb60 */
byte F_007efb60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7efb60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  int iVar1;
  byte bVar2;
  
  if (100 < param_1) {
    return 0;
  }
  iVar1 = *(int *)((int)this + param_1 * 0xc + 0xea4);
  if (((iVar1 != 0) && (bVar2 = F_0055a3a0(iVar1), bVar2 != 0)) &&
     (bVar2 = F_00570d10(iVar1,param_2,param_3,0), bVar2 != 0)) {
    return 1;
  }
  iVar1 = *(int *)((int)this + param_1 * 0x14 + 0x1368);
  if (((iVar1 != 0) && (bVar2 = F_0055a3a0(iVar1), bVar2 != 0)) &&
     (bVar2 = F_00570d10(iVar1,param_2,param_3,0), bVar2 != 0)) {
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::AddonNaviMap::SetTargetRenderer::vf4 */
uint F_007efc00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7efc00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x130];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined * this_00;
  ushort uVar4;
  uint uVar5;
  undefined4 * puVar6;
  uint uVar7;
  int iVar8;
  undefined4 * puVar9;
  uint uVar10;
  
  (*(uint *)(gen_frame + 0x11c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x120);
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x4c)) = param_1;
  (*(undefined4 *)(gen_frame + 0x44)) = param_2;
  if (param_1 == *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 8) + 0xe8c)))) {
    uVar4 = *((ushort *)GEN_TOP((*(int *)(this + 8) + 0x128)));
    F_0055dcb0();
    uVar4 = F_005596d0((uint)uVar4 << 6);
    iVar8 = *((int *)GEN_TOP((*(int *)(this + 8) + 0xe8c)));
    uVar1 = *(undefined4 *)(iVar8 + 0x2c);
    uVar2 = *(undefined4 *)(iVar8 + 0x30);
    uVar3 = *(undefined4 *)(iVar8 + 0x34);
    (*(uint *)(gen_frame + 0x40)) = (uint)uVar4;
    (*(undefined4 *)(gen_frame + 0x94)) = *(undefined4 *)(iVar8 + 0x24);
    (*(undefined4 *)(gen_frame + 0xa0)) = *(undefined4 *)(iVar8 + 0x28);
    (*(undefined4 *)(gen_frame + 0x90)) = *(undefined4 *)(iVar8 + 0x20);
    (*(undefined4 *)(gen_frame + 0x98)) = 0;
    (*(undefined4 *)(gen_frame + 0xa4)) = uVar1;
    (*(undefined4 *)(gen_frame + 0xa8)) = 0;
    (*(undefined4 *)(gen_frame + 0xb0)) = 0;
    (*(undefined4 *)(gen_frame + 0xb4)) = 0;
    (*(undefined4 *)(gen_frame + 0xb8)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0xc0)) = uVar2;
    (*(undefined4 *)(gen_frame + 0xc4)) = uVar3;
    (*(undefined4 *)(gen_frame + 0xc8)) = 0;
    puVar6 = (undefined4 *)F_004f45d0(((undefined1 *)(gen_frame + 0x50)),&(*(undefined4 *)(gen_frame + 0x90)));
    puVar9 = ((undefined4 *)(gen_frame + 0x0));
    for (iVar8 = 0x10; this_00 = (*(undefined * PTR32 *)(gen_frame + 0x48)), iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar9 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar9 = puVar9 + 1;
    }
    (*(undefined4 *)(gen_frame + 0xd0)) = ((undefined4 *)(gen_frame + 0x0))[0];
    (*(undefined4 *)(gen_frame + 0xd4)) = ((undefined4 *)(gen_frame + 0x0))[1];
    (*(undefined4 *)(gen_frame + 0xd8)) = ((undefined4 *)(gen_frame + 0x0))[2];
    (*(undefined4 *)(gen_frame + 0xe0)) = (*(undefined4 *)(gen_frame + 0x10));
    (*(undefined4 *)(gen_frame + 0xdc)) = 0;
    (*(undefined4 *)(gen_frame + 0xe4)) = (*(undefined4 *)(gen_frame + 0x14));
    (*(undefined4 *)(gen_frame + 0xec)) = 0;
    (*(undefined4 *)(gen_frame + 0xfc)) = 0;
    (*(undefined4 *)(gen_frame + 0xe8)) = (*(undefined4 *)(gen_frame + 0x18));
    (*(undefined4 *)(gen_frame + 0x100)) = (*(undefined4 *)(gen_frame + 0x30));
    (*(undefined4 *)(gen_frame + 0xf0)) = (*(undefined4 *)(gen_frame + 0x20));
    (*(undefined4 *)(gen_frame + 0x104)) = (*(undefined4 *)(gen_frame + 0x34));
    (*(undefined4 *)(gen_frame + 0xf4)) = (*(undefined4 *)(gen_frame + 0x24));
    (*(undefined4 *)(gen_frame + 0x108)) = (*(undefined4 *)(gen_frame + 0x38));
    (*(undefined4 *)(gen_frame + 0xf8)) = (*(undefined4 *)(gen_frame + 0x28));
    (*(undefined4 *)(gen_frame + 0x10c)) = REFG(float, 0x1087f04);
    uVar5 = F_0055dcb0();
    uVar10 = (*(uint *)(gen_frame + 0x40)) & 0xffff;
    puVar6 = &(*(undefined4 *)(gen_frame + 0xd0));
    (*(undefined * PTR32 *)(gen_frame + 0x48)) = *(undefined * PTR32 *)(uVar5 + 4);
    uVar5 = uVar10;
    uVar7 = F_0055c5f0(*(int *)(this_00 + 8) + 0x1b3c);
    F_00567bb0((*(undefined * PTR32 *)(gen_frame + 0x48)),1,uVar7,uVar5,puVar6);
    F_0055b190((undefined *)this_00,(*(undefined * PTR32 *)(gen_frame + 0x4c)),(*(undefined4 *)(gen_frame + 0x44)));
    uVar5 = F_0055dcb0();
    (*(undefined * PTR32 *)(gen_frame + 0x4c)) = *(undefined * PTR32 *)(uVar5 + 4);
    puVar6 = &REFG(undefined4, 0x1302d40);
    uVar5 = F_0055c5f0(*(int *)(this_00 + 8) + 0x1b3c);
    uVar5 = F_00567bb0((*(undefined * PTR32 *)(gen_frame + 0x4c)),0,uVar5,uVar10,puVar6);
  }
  else {
    uVar5 = F_0055b190((undefined *)this,param_1,param_2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x11c)) ^ (uint)(uint)(gen_frame + 0x120));
  return uVar5;
}

/* ref: Client::UI2::AddonActionBarBase::vf37 */
uint F_007efe80(unsigned int gen_a0)
{
  GEN_ENTER(0x7efe80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  uint local_c;
  int local_8;
  
  iVar1 = *(int *)(this + 400) - *(int *)(this + 0x18c) >> 0x1f;
  local_c = 0;
  if ((*(int *)(this + 400) - *(int *)(this + 0x18c)) / 0xd4 + iVar1 != iVar1) {
    local_8 = 0;
    do {
      iVar1 = *(int *)(this + 0x18c);
      if (*(int *)(iVar1 + local_8) != 0) {
        uVar3 = 0;
        do {
          iVar2 = *(int *)(iVar1 + local_8);
          this_00 = (undefined *)0x0;
          if (iVar2 != 0) {
            this_00 = *(undefined * PTR32 *)(iVar2 + 0x70);
          }
          F_005840a0(this_00,(&REFG(undefined4, 0x10c12c0))[(int)(uVar3)],uVar3,this,0);
          uVar3 = uVar3 + 1;
        } while (uVar3 < 3);
      }
      local_c = local_c + 1;
      local_8 = local_8 + 0xd4;
    } while (local_c < (uint)((*(int *)(this + 400) - *(int *)(this + 0x18c)) / 0xd4));
  }
  F_00406b30(*(undefined4 *)(this + 0x1a4));
  uVar3 = F_005b0510((undefined *)this);
  return uVar3;
}

/* ref: Client::UI2::AddonActionBarBase::vf38 */
uint F_007eff30(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7eff30u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int iVar2;
  int in_ecx;
  float fVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  undefined2 extraout_var_00 = 0;
  undefined * this;
  undefined3 extraout_var = 0;
  int iVar7;
  float fVar8;
  int * piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  F_005a2370(param_1,param_2);
  iVar7 = *(int *)(param_1 + 400) - *(int *)(param_1 + 0x18c);
  uVar6 = iVar7 * 0x4d4873ed;
  fVar3 = gen_bits2f(iVar7 / 0xd4);
  fVar8 = 0.0;
  (*(int *)(gen_frame + 0x8)) = param_1;
  if (fVar3 != 0.0) {
    (*(int *)(gen_frame + 0x8)) = 0;
    do {
      uVar6 = *(uint *)(param_1 + 0x1a4);
      if (*(char *)((int)gen_fl2bits(fVar8) + uVar6) != '\0') {
        piVar9 = ((int *)GEN_TOP((*(int *)(param_1 + 0x18c) + (*(int *)(gen_frame + 0x8)))));
        iVar7 = *piVar9;
        if ((iVar7 != 0) && (uVar6 = F_00562fa0(iVar7), uVar6 == 0)) {
          *((undefined1 *)GEN_TOP(((int)gen_fl2bits(fVar8) + *(int *)(param_1 + 0x1a4)))) = 0;
          uVar6 = F_0059fd80((undefined *)*piVar9,4);
        }
      }
      (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 0xd4;
      fVar8 = gen_bits2f((int)gen_fl2bits(fVar8) + 1);
    } while ((uint)gen_fl2bits(fVar8) < (uint)gen_fl2bits(fVar3));
  }
  if (fVar3 != 0.0) {
    iVar7 = 0;
    param_2 = fVar3;
    do {
      if (*((int *)GEN_TOP((*(int *)(param_1 + 0x18c) + 0x10 + iVar7))) == 0) {
        uVar12 = 0xffffffd0;
        uVar11 = 0xffffffd0;
        uVar10 = 0x30;
      }
      else {
        uVar12 = 0;
        uVar11 = 0;
        uVar10 = 0;
      }
      uVar5 = F_0055a170(*((undefined * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x18c) + 0xc + iVar7))),uVar10,uVar11,uVar12)
      ;
      uVar6 = CONCAT22(extraout_var_00,uVar5);
      iVar7 = iVar7 + 0xd4;
      param_2 = gen_bits2f((int)gen_fl2bits(param_2) + -1);
    } while (param_2 != 0.0);
  }
  if (*(char *)(param_1 + 0x19f) == '\0') {
    uVar6 = F_0055dcb0();
    cVar1 = *(char *)(uVar6 + 0xbc);
    uVar6 = CONCAT31((int3)(uVar6 >> 8),cVar1);
    if ((*(char *)(param_1 + 0x1a0) != cVar1) && (*(char *)(param_1 + 0x1a0) = cVar1, fVar3 != 0.0))
    {
      iVar7 = 0;
      param_2 = fVar3;
      do {
        iVar2 = *(int *)(param_1 + 0x18c);
        in_ecx = *(int *)(iVar2 + 4 + iVar7);
        if ((in_ecx != 0) && (uVar6 = F_0055a2d0(in_ecx), (char)uVar6 == '\0')) {
          (*(int *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3),*(undefined1 *)(param_1 + 0x1a0));
          this = (undefined *)0x0;
          if (*(int *)(iVar2 + iVar7) != 0) {
            this = *((undefined * PTR32 *)GEN_TOP((*(int *)(iVar2 + iVar7) + 0x70)));
          }
          F_0055a300(this,(*(int *)(gen_frame + 0x8)));
          bVar4 = F_0055a300(*(undefined * PTR32 *)(iVar2 + 8 + iVar7),(uint)*(byte *)(param_1 + 0x1a0));
          uVar6 = CONCAT31(extraout_var,bVar4);
        }
        iVar7 = iVar7 + 0xd4;
        param_2 = gen_bits2f((int)gen_fl2bits(param_2) + -1);
      } while (param_2 != 0.0);
    }
  }
  return uVar6;
}

/* ref: Client::UI2::AddonActionBarBase::vf47 */
uint F_007f0080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f0080u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  uint * puVar1;
  undefined * pvVar2;
  uint3 uVar6;
  undefined1 * puVar3;
  int iVar4;
  uint uVar5;
  int * piVar7;
  int iVar8;
  int iVar9;
  undefined1 AVar10;
  char * pcVar11;
  
  (*(uint *)(gen_frame + 0xc8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  iVar8 = *(int *)(param_1 + 0x18);
  iVar4 = *(int *)(this + 0x180);
  (*(int *)(gen_frame + 0x4c)) = *(int *)(param_2 + 0x14);
  (*(uint *)(gen_frame + 0x54)) = iVar4 * 0x30;
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = this;
  (*(int *)(gen_frame + 0x50)) = iVar8;
  iVar9 = iVar4 * 0x90 + 5;
  if (this[0x1a1] == (undefined1)0x0) {
    AVar10 = (undefined1)(iVar4 == 0x12);
    uVar6 = (uint3)((uint)(iVar4 * 0x10) >> 8);
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x5c)) + 0)) = AVar10;
    (*(int *)(gen_frame + 0x5c)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x5c)), 1, 3),AVar10);
    if ((bool)AVar10) {
      iVar9 = 0xa25;
      (*(uint *)(gen_frame + 0x54)) = 0x360;
    }
  }
  else {
    AVar10 = (undefined1)(*((int *)GEN_TOP((*(int *)(iVar8 + 0x20) + 0x2d58))) != 0);
    uVar6 = (uint3)((uint)*(int *)(iVar8 + 0x20) >> 8);
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x5c)) + 0)) = AVar10;
    (*(int *)(gen_frame + 0x5c)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x5c)), 1, 3),AVar10);
    this[0x1a2] = AVar10;
    if ((bool)AVar10) {
      iVar9 = 0xab5;
      (*(uint *)(gen_frame + 0x54)) = 0x390;
    }
  }
  this[0x1a3] = (undefined1)(*((int *)GEN_TOP((*(int *)(iVar8 + 0x20) + 0x2d5c))) != 0);
  if (((bool)AVar10) && (this[0x1a1] == (undefined1)0x0)) {
    iVar4 = CONCAT31(uVar6,1);
  }
  else {
    iVar4 = (uint)uVar6 << 8;
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0xf8))(this,iVar8,iVar4);
  ((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this,iVar8,(*(int *)(gen_frame + 0x5c)));
  (*(uint *)(gen_frame + 0x20)) = 0;
  if (*(int *)(this + 0x188) != 0) {
    (*(int *)(gen_frame + 0x48)) = (*(uint *)(gen_frame + 0x54)) * 4;
    (*(int *)(gen_frame + 0x5c)) = 0;
    iVar9 = iVar9 * 4 + 0x10;
    do {
      piVar7 = ((int *)GEN_TOP((*(int *)(this + 0x18c) + (*(int *)(gen_frame + 0x5c)))));
      (*(undefined1 * PTR32 *)(gen_frame + 0x58)) = (undefined1 *)piVar7[1];
      if ((undefined1 *)piVar7[1] != (undefined1 *)0x0) {
        puVar3 = *((undefined1 * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x48)) + *(int *)((*(int *)(gen_frame + 0x4c)) + 0x20))));
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &REFG(undefined1, 0x10be763);
        }
        F_0042e430(piVar7 + 0x20,puVar3);
        puVar3 = *((undefined1 * PTR32 *)GEN_TOP((*(int *)(*piVar7 + 0xa4) + 0xb8)));
        (*(undefined1 * PTR32 *)(gen_frame + 0x64)) = puVar3;
        uVar5 = *((uint *)GEN_TOP((iVar9 + -0x10 + *(int *)((*(int *)(gen_frame + 0x50)) + 0x20))));
        (*(undefined1 * PTR32 *)(gen_frame + 0x34)) = *((undefined1 * PTR32 *)GEN_TOP((*(int *)(*piVar7 + 0xa4) + 0xbc)));
        (*(uint *)(gen_frame + 0x54)) = uVar5;
        if (uVar5 == 0) {
          F_0055a300(puVar3,0);
          F_0055a300((*(undefined1 * PTR32 *)(gen_frame + 0x34)),0);
          ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*piVar7 + 0x84) + 0x30))))(*piVar7 + 0x84);
          F_0055a300((*(undefined1 * PTR32 *)(gen_frame + 0x58)),0);
          F_00597570((undefined *)*piVar7);
        }
        else {
          iVar8 = *(int *)((*(int *)(gen_frame + 0x50)) + 0x20);
          (*(int *)(gen_frame + 0x28)) = *(int *)(iVar8 + -4 + iVar9);
          (*(int *)(gen_frame + 0x40)) = *(undefined4 *)(iVar8 + iVar9);
          (*(uint *)(gen_frame + 0x38)) = *(uint *)(iVar8 + 4 + iVar9);
          (*(int *)(gen_frame + 0x1c)) = *(int *)(iVar8 + 8 + iVar9);
          (*(int *)(gen_frame + 0x30)) = *(int *)(iVar8 + -0xc + iVar9);
          (*(int *)(gen_frame + 0x3c)) = *(int *)(iVar8 + -8 + iVar9);
          (*(int *)(gen_frame + 0x44)) = *(int *)(iVar8 + 0x10 + iVar9);
          F_0042cc20(((char * PTR32 *)(gen_frame + 0x68)),*((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x4c)) + 0x20) + 4 + (*(int *)(gen_frame + 0x48))))),
                       REFG(undefined4, 0x108cc50));
          uVar5 = F_0055a2d0((*(undefined1 * PTR32 *)(gen_frame + 0x58)));
          if ((char)uVar5 == '\0') {
            F_0055a300((*(undefined1 * PTR32 *)(gen_frame + 0x58)),1);
          }
          *(uint *)(*piVar7 + 0x98) = (*(uint *)(gen_frame + 0x54));
          piVar7[6] = *(int *)(this + 0x180);
          piVar7[7] = (*(int *)(gen_frame + 0x28));
          F_00595560((undefined *)*piVar7,(*(int *)(gen_frame + 0x40)));
          F_0059fde0(*piVar7,(*(uint *)(gen_frame + 0x38)));
          F_00563050(*piVar7,(uint)((*(int *)(gen_frame + 0x1c)) != 0));
          iVar8 = *((int *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x50)) + 0x20) + 0xc + iVar9)));
          (*(int *)(gen_frame + 0x40)) = iVar8;
          F_0055a300((*(undefined1 * PTR32 *)(gen_frame + 0x64)),0);
          F_0055a300((*(undefined1 * PTR32 *)(gen_frame + 0x34)),0);
          (*(char *)(gen_frame + 0x63)) = '\0';
          if ((*(int *)(gen_frame + 0x3c)) == 1) {
            (*(undefined1 * PTR32 *)(gen_frame + 0x58)) = (*(undefined1 * PTR32 *)(gen_frame + 0x64));
            if ((((*(int *)(gen_frame + 0x30)) == 0) || (iVar8 == 0)) || (iVar8 == -1)) {
              (*(char *)(gen_frame + 0x63)) = '\x01';
            }
LAB_007f036e: ;
            if ((*(undefined1 * PTR32 *)(gen_frame + 0x58)) != (undefined1 *)0x0) {
              F_0055a300((*(undefined1 * PTR32 *)(gen_frame + 0x58)),1);
              if (((*(int *)(gen_frame + 0x3c)) != 1) || ((*(char *)(gen_frame + 0x63)) == '\0')) {
                if (*((char * PTR32 *)(gen_frame + 0x68))[0] == '\0') {
                  uVar5 = F_005608e0(iVar8,((undefined1 *)(gen_frame + 0xbc)),0xc);
                }
                else {
                  uVar5 = F_0042a990(((char * PTR32 *)(gen_frame + 0x68)));
                }
                F_00584110((*(undefined1 * PTR32 *)(gen_frame + 0x58)),uVar5);
                if ((*(int *)(gen_frame + 0x3c)) != 1) goto LAB_007f04b2;
              }
              F_0055a200((*(undefined1 * PTR32 *)(gen_frame + 0x64)),(uint)(byte)((-((*(int *)(gen_frame + 0x1c)) != 0) & 0x7fU) + 0x80));
              if ((piVar7[5] != (*(int *)(gen_frame + 0x30))) || (piVar7[4] != (*(int *)(gen_frame + 0x44)))) {
                iVar8 = (*(int *)(gen_frame + 0x44));
                if (((*(uint *)(gen_frame + 0x54)) & 0x40) == 0) {
                  iVar8 = 1;
                  piVar7[4] = 1;
                }
                piVar7[5] = (*(int *)(gen_frame + 0x30));
                piVar7[4] = iVar8;
                if ((*(int *)(gen_frame + 0x30)) == 0) {
                  iVar4 = 1;
                }
                else if (iVar8 == 0) {
                  iVar4 = 1;
                }
                else {
                  iVar4 = (*(int *)(gen_frame + 0x30)) + 2;
                }
                F_004352a0(iVar4,&(*(undefined4 *)(gen_frame + 0x2c)),&(*(undefined4 *)(gen_frame + 0x18)));
                uVar5 = F_005612d0((*(undefined4 *)(gen_frame + 0x2c)));
                F_0055aa30((*(undefined1 * PTR32 *)(gen_frame + 0x64)),uVar5);
                uVar5 = F_005612d0((*(undefined4 *)(gen_frame + 0x18)));
                F_0055ab90((*(undefined1 * PTR32 *)(gen_frame + 0x64)),uVar5);
                if ((*(char *)(gen_frame + 0x63)) != '\0') {
                  if (iVar8 == 0) {
                    pcVar11 = *((char * PTR32 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x4c)) + 0x20) + 0x1138)));
                  }
                  else {
                    pcVar11 = "";
                  }
                  F_00584110((*(undefined1 * PTR32 *)(gen_frame + 0x64)),pcVar11);
                }
              }
            }
          }
          else if ((*(int *)(gen_frame + 0x3c)) == 2) {
            (*(undefined1 * PTR32 *)(gen_frame + 0x58)) = (*(undefined1 * PTR32 *)(gen_frame + 0x34));
            goto LAB_007f036e;
          }
LAB_007f04b2: ;
          (*(undefined1 * PTR32 *)(gen_frame + 0x64)) = (undefined1 *)0x0;
          (*(int *)(gen_frame + 0x44)) = 0;
          uVar5 = 8;
          F_00560760(&(*(undefined4 *)(gen_frame + 0xc)));
          if ((*(uint *)(gen_frame + 0x54)) == 0x44) {
            (*(undefined1 * PTR32 *)(gen_frame + 0x64)) = (undefined1 *)0xe;
            uVar5 = 8;
          }
          else if ((*(uint *)(gen_frame + 0x54)) == 0x1004) {
            (*(undefined1 * PTR32 *)(gen_frame + 0x64)) = (undefined1 *)0xf;
          }
          else if ((*(uint *)(gen_frame + 0x54)) == 0x2004) {
            (*(undefined1 * PTR32 *)(gen_frame + 0x64)) = (undefined1 *)0x10;
          }
          else if ((*(uint *)(gen_frame + 0x54)) == 0x80004) {
            (*(undefined1 * PTR32 *)(gen_frame + 0x64)) = (undefined1 *)0x11;
          }
          else if ((*(uint *)(gen_frame + 0x54)) == 0x100004) {
            (*(undefined1 * PTR32 *)(gen_frame + 0x64)) = (undefined1 *)0x12;
          }
          else if ((*(uint *)(gen_frame + 0x54)) == 0x400004) {
            (*(undefined1 * PTR32 *)(gen_frame + 0x64)) = (undefined1 *)0x13;
          }
          else if ((*(uint *)(gen_frame + 0x54)) == 0x800004) {
            (*(undefined1 * PTR32 *)(gen_frame + 0x64)) = (undefined1 *)0x14;
          }
          else if ((*(uint *)(gen_frame + 0x54)) == 0x1000004) {
            (*(undefined1 * PTR32 *)(gen_frame + 0x64)) = (undefined1 *)0x19;
          }
          else if ((*(uint *)(gen_frame + 0x54)) == 0x10004) {
            (*(undefined1 * PTR32 *)(gen_frame + 0x64)) = (undefined1 *)0x1;
            uVar5 = 4;
            (*(undefined2 *)(gen_frame + 0x14)) = (undefined2)(*(int *)(gen_frame + 0x40));
          }
          else if ((*(uint *)(gen_frame + 0x54)) == 0x20004) {
            (*(undefined1 * PTR32 *)(gen_frame + 0x64)) = &REFG(undefined, 0xa);
            uVar5 = 4;
          }
          else if ((*(uint *)(gen_frame + 0x54)) == 0x8004) {
            (*(undefined1 * PTR32 *)(gen_frame + 0x64)) = (undefined1 *)0x1;
            uVar5 = 4;
            (*(undefined2 *)(gen_frame + 0x14)) = (undefined2)(*(int *)(gen_frame + 0x40));
          }
          else {
            (*(int *)(gen_frame + 0x44)) = 0xffffffff;
            uVar5 = 1;
          }
          (*(undefined4 *)(gen_frame + 0xc)) = *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x48)) + *(int *)((*(int *)(gen_frame + 0x4c)) + 0x20))));
          (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x28));
          (*(undefined1 *)(gen_frame + 0x16)) = (*(undefined1 *)((char *)&(*(undefined1 * PTR32 *)(gen_frame + 0x64)) + 0));
          (*(undefined1 *)(gen_frame + 0x17)) = (undefined1)(*(int *)(gen_frame + 0x44));
          F_005916c0((undefined *)*piVar7,uVar5 | 2,(uint)(byte)(*(undefined * PTR32 *)(gen_frame + 0x24))[0x13a],&(*(undefined4 *)(gen_frame + 0xc)));
          F_0042c880(((char * PTR32 *)(gen_frame + 0x68)));
          this = (*(undefined * PTR32 *)(gen_frame + 0x24));
        }
      }
      (*(int *)(gen_frame + 0x5c)) = (*(int *)(gen_frame + 0x5c)) + 0xd4;
      (*(int *)(gen_frame + 0x48)) = (*(int *)(gen_frame + 0x48)) + 0xc;
      uVar5 = (*(uint *)(gen_frame + 0x20)) + 1;
      iVar9 = iVar9 + 0x24;
      (*(uint *)(gen_frame + 0x20)) = uVar5;
    } while (uVar5 < *(uint *)(this + 0x188));
  }
  iVar8 = (*(int *)(gen_frame + 0x50));
  ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this,(*(int *)(gen_frame + 0x50)));
  iVar9 = *(int *)(this + 0x184);
  if (iVar9 == 0x12) {
    if ((*((uint *)GEN_TOP((*(int *)(iVar8 + 0x20) + 0xc))) & 0x40000) != 0) {
      if (*(int *)(this + 0x188) != 0) {
        iVar9 = 0;
        (*(int *)(gen_frame + 0x5c)) = 0xd88;
        uVar5 = 0;
        do {
          pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 8 + iVar9)));
          if (pvVar2 != (undefined *)0x0) {
            F_00584110(pvVar2,*((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x4c)) + 0x20) + (*(int *)(gen_frame + 0x5c))))));
          }
          (*(int *)(gen_frame + 0x5c)) = (*(int *)(gen_frame + 0x5c)) + 0xc;
          uVar5 = uVar5 + 1;
          iVar9 = iVar9 + 0xd4;
        } while (uVar5 < *(uint *)(this + 0x188));
      }
      puVar1 = ((uint *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x50)) + 0x20) + 0xc)));
      *puVar1 = *puVar1 & 0xfffbffff;
      iVar8 = (*(int *)(gen_frame + 0x50));
    }
  }
  else if ((iVar9 != -1) &&
          (uVar5 = 1 << ((byte)iVar9 & 0x1f), (*(uint *)(gen_frame + 0x38)) = uVar5,
          (*((uint *)GEN_TOP((*(int *)(iVar8 + 0x20) + 0xc))) & uVar5) != 0)) {
    uVar5 = 0;
    if (*(int *)(this + 0x188) != 0) {
      iVar8 = 0;
      (*(int *)(gen_frame + 0x5c)) = iVar9 * 0xc0 + 8;
      do {
        pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 8 + iVar8)));
        if (pvVar2 != (undefined *)0x0) {
          F_00584110(pvVar2,*((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x4c)) + 0x20) + (*(int *)(gen_frame + 0x5c))))));
        }
        (*(int *)(gen_frame + 0x5c)) = (*(int *)(gen_frame + 0x5c)) + 0xc;
        uVar5 = uVar5 + 1;
        iVar8 = iVar8 + 0xd4;
      } while (uVar5 < *(uint *)(this + 0x188));
    }
    puVar1 = ((uint *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x50)) + 0x20) + 0xc)));
    *puVar1 = *puVar1 & ~(*(uint *)(gen_frame + 0x38));
    iVar8 = (*(int *)(gen_frame + 0x50));
  }
  uVar5 = *((uint *)GEN_TOP((*(int *)(iVar8 + 0x20) + 0x2d44)));
  if ((uVar5 == *(uint *)(this + 0x180)) &&
     (iVar9 = *((int *)GEN_TOP((*(int *)(iVar8 + 0x20) + 0x2d48))), -1 < iVar9)) {
    F_0059fd80(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + iVar9 * 0xd4))),3);
    uVar5 = *(uint *)(this + 0x1a4);
    *(undefined1 *)(iVar9 + uVar5) = 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
  return uVar5;
}

/* ref: FUN_007f07c0 */
uint F_007f07c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x7f07c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int param_5 = (int)gen_a5;
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  
  uVar1 = F_00561490(param_3,param_4);
  if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
     (uVar2 = F_005613a0(uVar1), uVar2 != 0x11)) {
    uVar1 = 0;
  }
  *param_1 = uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(uVar1 + 0x84) + 0xc))))((int *)(uVar1 + 0x84));
  param_1[1] = uVar1;
  if (param_5 == -1) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00561530(param_3,param_5);
  }
  param_1[2] = uVar1;
  if (*(undefined * PTR32 *)(*param_1 + 0xa4) != (undefined *)0x0) {
    uVar1 = F_00561490(*(undefined * PTR32 *)(*param_1 + 0xa4),0xb);
    param_1[3] = uVar1;
  }
  uVar1 = 0;
  do {
    uVar2 = *param_1;
    pvVar3 = (undefined *)0x0;
    if (uVar2 != 0) {
      pvVar3 = *(undefined * PTR32 *)(uVar2 + 0x70);
    }
    F_005840a0(pvVar3,*(undefined4 *)((int)&REFG(undefined4, 0x10c12c0) + uVar1),(uint)*(ushort *)(uVar2 + 0x9c),
                 this,0);
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0xc);
  *(short *)(*param_1 + 0x9c) = (short)param_2;
  *(undefined4 *)(*param_1 + 0x98) = 0x1f8bd74;
  *(byte *)(*param_1 + 0xaa) = *(byte *)(*param_1 + 0xaa) | 4;
  *(byte *)(*param_1 + 0xaa) = *(byte *)(*param_1 + 0xaa) & 0xfd;
  uVar1 = 0;
  do {
    if (*param_1 == 0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *(undefined * PTR32 *)(*param_1 + 0x70);
    }
    uVar2 = F_00568380(pvVar3,*(undefined4 *)((int)&REFG(undefined4, 0x10c12c0) + uVar1),param_2,this,0,0);
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0xc);
  return uVar2;
}

/* ref: Client::UI2::AddonActionBarBase::vf63 */
unsigned int F_007f08e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f08e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte * pbVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  this[0x19c] = (undefined1)(*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 4))) == 1);
  if (*(int *)(this + 0x188) != 0) {
    iVar4 = 0;
    do {
      if (*((int *)GEN_TOP((*(int *)(this + 0x18c) + 4 + iVar4))) != 0) {
        if ((this[0x19c] == (undefined1)0x0) && ((char)param_2 == '\0')) {
          cVar3 = '\0';
        }
        else {
          cVar3 = '\x01';
        }
        iVar2 = *((int *)GEN_TOP((*(int *)(this + 0x18c) + iVar4)));
        pbVar1 = (byte *)(iVar2 + 0xaa);
        *pbVar1 = *pbVar1 ^ (cVar3 * '\x02' ^ *(byte *)(iVar2 + 0xaa)) & 2;
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0xd4;
    } while (uVar5 < *(uint *)(this + 0x188));
  }
  return 0;
}

/* ref: Client::UI2::AddonActionBarBase::vf64 */
unsigned int F_007f0960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7f0960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int in_ecx;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  int * piVar3;
  
  piVar3 = (int *)(param_1 + 0x20);
  iVar2 = 0;
  param_1 = 0;
  this[0x19f] = (undefined1)(*(int *)(*piVar3 + 0x2d4c) != 0);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)(this + 0x188) != 0) {
    do {
      in_ecx = *((int *)GEN_TOP((*(int *)(this + 0x18c) + 4 + iVar2)));
      piVar3 = ((int *)GEN_TOP((*(int *)(this + 0x18c) + iVar2)));
      if (((in_ecx == 0) || (uVar1 = F_0055a2d0(in_ecx), (char)uVar1 == '\0')) &&
         (this[0x1a0] == (undefined1)0x0)) {
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x8)), 1, 3),this[0x19f])));
        this_00 = (undefined *)0x0;
        if (*piVar3 != 0) {
          this_00 = *(undefined * PTR32 *)(*piVar3 + 0x70);
        }
        F_0055a300(this_00,(*(undefined * PTR32 *)(gen_frame + 0x8)));
        uVar1 = (uint)(byte)this[0x19f];
      }
      else if (*piVar3 == 0) {
        F_0055a300((undefined *)0x0,1);
        uVar1 = 1;
      }
      else {
        F_0055a300(*(undefined * PTR32 *)(*piVar3 + 0x70),1);
        uVar1 = 1;
      }
      F_0055a300((undefined *)piVar3[2],uVar1);
      param_1 = param_1 + 1;
      iVar2 = iVar2 + 0xd4;
    } while (param_1 < *(uint *)(this + 0x188));
  }
  return 0;
}

/* ref: Client::UI2::AddonActionBarBase::vf66 */
uint F_007f0a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7f0a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint uVar1;
  
  F_00557670(param_2,0);
  *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x80000;
  *(undefined1 *)(param_2 + 0x15) = 1;
  if (*(char *)(param_3 + 8) == '\0') {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x114))(this,*(undefined4 *)(this + 0x180),param_1);
    return uVar1;
  }
  uVar1 = param_3;
  if (this[0x19c] == (undefined1)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x118))(this,param_1);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonActionBarBase::vf67 */
uint F_007f0aa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7f0aa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  undefined4 * puVar4;
  uint uVar5;
  uint * puVar6;
  undefined4 uVar7;
  
  F_00557670(param_2,0);
  *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x80000;
  *(undefined1 *)(param_2 + 0x15) = 1;
  piVar1 = (int *)*param_3;
  ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (param_3[1] != 0) {
    param_2 = F_00559c20(param_3[1]);
    if (param_2 != 0) {
      uVar2 = F_005613a0(param_2);
      if (uVar2 == 0x11) goto LAB_007f0af6;
    }
  }
  param_2 = 0;
LAB_007f0af6: ;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_2 + 0x84) + 0xc))))(param_2 + 0x84);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
  puVar6 = ((uint *)GEN_TOP((param_1 * 0xd4 + *(int *)(this + 0x18c))));
  if ((*(int *)(this + 0x180) == 0x12) ||
     ((this[0x1a1] != (undefined1)0x0 && (this[0x1a2] != (undefined1)0x0)))) {
    uVar5 = F_0078f890(this,0x1c8);
  }
  else {
    if ((*(byte *)(piVar1 + 5) & 4) == 0) {
      puVar4 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
      uVar2 = puVar4[1];
      if ((*(byte *)(piVar1 + 5) & 0x10) != 0) {
        uVar2 = F_00760440(*puVar4);
        uVar2 = uVar2 << 0x10 | puVar4[1];
      }
      uVar2 = F_0078f910(this,*(undefined4 *)(this + 0x180),(uint)*(ushort *)(*puVar6 + 0x9c),
                           piVar1[5],uVar2);
      return uVar2;
    }
    if ((*(int *)(this + 0x180) != *piVar3) ||
       (uVar5 = *puVar6, (short)piVar1[6] != *(short *)(uVar5 + 0x9c))) {
      uVar2 = F_0055a2d0(uVar2);
      if ((char)uVar2 == '\0') {
        uVar2 = 0;
        uVar7 = 0;
      }
      else {
        uVar2 = puVar6[7];
        uVar7 = *(undefined4 *)(param_2 + 0x98);
      }
      F_0078f910(this,*piVar3,(uint)*(ushort *)(piVar1 + 6),uVar7,uVar2);
      uVar2 = F_0078f910(this,*(undefined4 *)(this + 0x180),(uint)*(ushort *)(*puVar6 + 0x9c),
                           piVar1[5],piVar3[1]);
      return uVar2;
    }
  }
  return uVar5;
}

/* ref: Client::UI2::AddonActionBarBase::vf68 */
uint F_007f0c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7f0c30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  F_00557670(param_2,0);
  *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x80000;
  *(undefined1 *)(param_2 + 0x15) = 1;
  piVar1 = (int *)*param_3;
  puVar2 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
  iVar4 = (uint)*(ushort *)(piVar1 + 6) * 0xd4 + *(int *)(this + 0x18c);
  fVar5 = gen_bits2f(REFG(uint, 0x10a007c) ^ REFG(uint, 0x10920d0));
  fVar6 = (float)(float10)0;
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  uVar3 = F_00559da0(uVar3,fVar6,fVar5);
  *puVar2 = *(undefined4 *)(iVar4 + 0x18);
  puVar2[1] = *(undefined4 *)(iVar4 + 0x1c);
  return uVar3;
}

/* ref: Client::UI2::AddonActionBar::vf37 */
uint F_007f0cc0(unsigned int gen_a0)
{
  GEN_ENTER(0x7f0cc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,1,6,0);
  F_005a92d0(this,0,5,0);
  uVar1 = F_007efe80((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonActionBar::vf2 */
uint F_007f0cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7f0cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = F_0078f270((undefined *)this,param_1,param_2,param_3,param_4);
  if ((short)param_1 == 0x17) {
    if (param_2 == 2) {
      this[0x19c] = (undefined1)(this[0x19c] == (undefined1)0x0);
      uVar1 = F_0078f710(this);
    }
    else {
      if (param_2 == 4) {
        *(uint *)(this + 0x180) =
             -(uint)(*(int *)(this + 0x180) + 1U < 10) & *(int *)(this + 0x180) + 1U;
        ((code *)*(gen_code32 *)(*(int *)this + 0x104))(this);
        iVar2 = *(int *)this;
        uVar1 = F_0055dcb0();
        uVar1 = F_0055b9a0(uVar1);
        uVar3 = F_0055dcb0();
        uVar3 = F_0055b990(uVar3);
        ((code *)*(gen_code32 *)(iVar2 + 0xbc))(this,uVar3,uVar1);
        uVar1 = F_0078f5b0(this);
        return uVar1;
      }
      uVar1 = param_2 - 6;
      if (uVar1 == 0) {
        if (*(int *)(this + 0x180) == 0) {
          iVar2 = 9;
        }
        else {
          iVar2 = *(int *)(this + 0x180) + -1;
        }
        *(int *)(this + 0x180) = iVar2;
        ((code *)*(gen_code32 *)(*(int *)this + 0x104))(this);
        iVar2 = *(int *)this;
        uVar1 = F_0055dcb0();
        uVar1 = F_0055b9a0(uVar1);
        uVar3 = F_0055dcb0();
        uVar3 = F_0055b990(uVar3);
        ((code *)*(gen_code32 *)(iVar2 + 0xbc))(this,uVar3,uVar1);
        uVar1 = F_0078f5b0(this);
        return uVar1;
      }
    }
  }
  return uVar1;
}

/* ref: Client::UI2::AddonActionBar::vf47 */
uint F_007f0e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f0e10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 AVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_2 + 0x14);
  F_0059dde0(*(undefined * PTR32 *)(this + 0x1b0),
               (uint)(*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0x18) + 0x20))) + 4))) == 1));
  F_00560760(((undefined4 *)(gen_frame + 0x0)));
  AVar1 = this[0x13a];
  ((undefined4 *)(gen_frame + 0x0))[0] = *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0xf00)));
  uVar3 = F_0055dcb0();
  F_00590ad0((undefined *)(uVar3 + 0xe0),2,(uint)(byte)AVar1,*(undefined4 *)(this + 0x1ac),((undefined4 *)(gen_frame + 0x0)));
  uVar3 = F_007f0080((undefined *)this,param_1,param_2);
  return uVar3;
}

/* ref: Client::UI2::AddonActionBar::vf65 */
uint F_007f0e90(unsigned int gen_a0)
{
  GEN_ENTER(0x7f0e90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (this[0x19d] != (undefined1)0x0) {
    uVar1 = F_004352e0(*(int *)(this + 0x180) + 1);
    uVar1 = F_00584110(*(undefined * PTR32 *)(this + 0x1a8),uVar1);
    return uVar1;
  }
  uVar1 = F_00435340(*(int *)(this + 0x180) + 1);
  uVar1 = F_00584110(*(undefined * PTR32 *)(this + 0x1a8),uVar1);
  return uVar1;
}

/* ref: Client::UI2::AddonPartyList::vf44 */
uint F_007f0ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f0ed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * pvVar1;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  undefined * pAVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char * pcVar10;
  undefined4 uVar11;
  float fVar12;
  undefined * local_c;
  undefined * local_8;
  
  iVar4 = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  pvVar1 = (undefined *)F_0055e2f0(this,0x15);
  *(undefined * PTR32 *)(this + 0x1a4) = pvVar1;
  F_0055a300(pvVar1,0);
  uVar2 = F_0055e2f0(this,2);
  *(uint *)(this + 0x1a8) = uVar2;
  local_c = this + 0x180;
  do {
    uVar2 = F_0055e2f0(this,iVar4 + 0xc);
    pvVar1 = (undefined *)F_00559c20(uVar2);
    *(undefined * PTR32 *)local_c = pvVar1;
    if (pvVar1 == (undefined *)0x0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *(undefined * PTR32 *)((int)pvVar1 + 0x70);
    }
    F_0055a300(pvVar3,0);
    pcVar10 = "";
    pvVar3 = (undefined *)F_00561530(pvVar1,10);
    F_00584110(pvVar3,pcVar10);
    uVar2 = F_00561490(pvVar1,0x11);
    if (((uVar2 == 0) || (local_8 = (undefined *)F_00559c20(uVar2), local_8 == (undefined *)0x0)) ||
       (uVar2 = F_005613a0(local_8), uVar2 != 5)) {
      local_8 = (undefined *)0x0;
    }
    uVar11 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    pvVar3 = (undefined *)F_00561530(local_8,2);
    F_0057eb30(pvVar3,uVar6,uVar7,uVar8,uVar9,uVar11);
    F_005a04e0(local_8,0,1);
    uVar2 = F_00561490(pvVar1,0x12);
    if (((uVar2 == 0) || (local_8 = (undefined *)F_00559c20(uVar2), local_8 == (undefined *)0x0)) ||
       (uVar2 = F_005613a0(local_8), uVar2 != 5)) {
      local_8 = (undefined *)0x0;
    }
    uVar11 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    pvVar3 = (undefined *)F_00561530(local_8,2);
    F_0057eb30(pvVar3,uVar6,uVar7,uVar8,uVar9,uVar11);
    F_005a04e0(local_8,0,1);
    uVar6 = 0;
    pvVar3 = (undefined *)F_00561490(pvVar1,0xb);
    F_0055a300(pvVar3,uVar6);
    fVar12 = (float)(float10)0;
    uVar2 = F_00561490(pvVar1,0xc);
    F_00568230(uVar2,fVar12);
    if (pvVar1 == (undefined *)0x0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *(undefined * PTR32 *)((int)pvVar1 + 0x70);
    }
    F_00568380(pvVar3,6,iVar4,this,0,0);
    if (pvVar1 == (undefined *)0x0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *(undefined * PTR32 *)((int)pvVar1 + 0x70);
    }
    F_00568380(pvVar3,7,iVar4,this,0,0);
    if (pvVar1 == (undefined *)0x0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *(undefined * PTR32 *)((int)pvVar1 + 0x70);
    }
    F_00568380(pvVar3,0x17,iVar4,this,0,0);
    F_00568380(*(undefined * PTR32 *)((int)pvVar1 + 0x68),3,iVar4,this,0,0);
    uVar6 = 0;
    pvVar1 = (undefined *)F_00561550(pvVar1,0x10);
    F_0055a300(pvVar1,uVar6);
    local_c = local_c + 4;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  uVar2 = F_0055e2f0(this,10);
  if (((uVar2 == 0) || (pvVar1 = (undefined *)F_00559c20(uVar2), pvVar1 == (undefined *)0x0)) ||
     (uVar2 = F_005613a0(pvVar1), uVar2 != 5)) {
    pvVar1 = (undefined *)0x0;
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *(undefined * PTR32 *)((int)pvVar1 + 0x70);
  }
  F_0055a300(pvVar3,0);
  uVar11 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  pvVar3 = (undefined *)F_00561530(pvVar1,2);
  F_0057eb30(pvVar3,uVar6,uVar7,uVar8,uVar9,uVar11);
  F_005a04e0(pvVar1,0,1);
  uVar2 = F_0055e2f0(this,0x14);
  uVar2 = F_00559c20(uVar2);
  *(uint *)(this + 0x1a0) = uVar2;
  pvVar1 = (undefined *)0x0;
  if (uVar2 != 0) {
    pvVar1 = *(undefined * PTR32 *)(uVar2 + 0x70);
  }
  F_0055a300(pvVar1,0);
  if (*(int *)(this + 0x1a0) == 0) {
    pvVar1 = (undefined *)0x0;
  }
  else {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x70)));
  }
  F_00568380(pvVar1,6,8,this,0,0);
  pvVar1 = (undefined *)0x0;
  if (*(int *)(this + 0x1a0) != 0) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x70)));
  }
  F_00568380(pvVar1,7,8,this,0,0);
  if (*(int *)(this + 0x1a0) == 0) {
    pvVar1 = (undefined *)0x0;
  }
  else {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x70)));
  }
  F_00568380(pvVar1,0x17,8,this,0,0);
  F_00568380(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x68))),3,8,this,0,0);
  pvVar1 = (undefined *)F_0055e2f0(this,3);
  F_0055a300(pvVar1,0);
  uVar2 = F_0055dcb0();
  pvVar1 = *(undefined * PTR32 *)(uVar2 + 0x30);
  iVar4 = 0;
  pAVar5 = this + 0x1ac;
  do {
    uVar2 = F_0055e2f0(this,9 - iVar4);
    uVar2 = F_00559c20(uVar2);
    *(uint *)pAVar5 = uVar2;
    F_0059d640(*(undefined * PTR32 *)(uVar2 + 0x6c),7);
    uVar2 = F_0043bd00(pvVar1,(&REFG(undefined4, 0x10d57d4))[(int)(iVar4)],0,0);
    pvVar3 = (undefined *)F_00561530(*(undefined * PTR32 *)pAVar5,2);
    F_00584110(pvVar3,uVar2);
    iVar4 = iVar4 + 1;
    pAVar5 = pAVar5 + 4;
  } while (iVar4 < 6);
  F_005a91d0(this,1,4);
  uVar2 = F_005a91d0(this,0,3);
  return uVar2;
}

/* ref: FUN_007f1240 */
byte F_007f1240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f1240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  undefined * pvVar6;
  undefined4 uVar7;
  bool bVar8;
  float10 fVar9;
  float10 fVar10;
  ushort local_8;
  
  piVar1 = *(int * PTR32 *)(param_1 + 0x20);
  bVar8 = piVar1[0x1d1] != 0;
  iVar2 = piVar1[7];
  iVar3 = *piVar1;
  if (((*(int *)((int)this + 0x1fc) != iVar3) || (*(int *)((int)this + 0x204) != iVar2)) ||
     ((bool)*(char *)((int)this + 0x211) != bVar8)) {
    if (iVar3 < 1) {
      F_0055a300(*(undefined * PTR32 *)((int)this + 0x1a4),0);
      F_0055a300(*(undefined * PTR32 *)((int)this + 0x1a8),0);
      uVar7 = 0;
      pvVar6 = (undefined *)F_00561530(*(undefined * PTR32 *)((int)this + 0x180),4);
      F_0055a300(pvVar6,uVar7);
    }
    else if (((iVar3 != 1) || (iVar2 == 0)) || (bVar8)) {
      *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) & 0xef;
      F_0055e2a0(this,0x2000000,0);
      ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this,0);
      piVar1 = *(int * PTR32 *)(param_1 + 0x20);
      iVar4 = piVar1[0x1d1];
      local_8 = (ushort)(iVar4 != 0);
      if (((*piVar1 != 1) || (iVar4 == 0)) || (piVar1[7] == 0)) {
        local_8 = (short)*piVar1 + (ushort)(iVar4 != 0);
      }
      if (*(int *)((int)this + 0x184) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x184) + 0x70)));
      }
      fVar9 = F_00559d80(uVar7);
      uVar7 = 0;
      if (*(int *)((int)this + 0x180) != 0) {
        uVar7 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x180) + 0x70)));
      }
      fVar10 = F_00559d80(uVar7);
      uVar7 = 0;
      if (*(int *)((int)this + 0x180) != 0) {
        uVar7 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x180) + 0x70)));
      }
      uVar5 = F_0055a030(uVar7);
      F_0055a080(*(undefined4 *)((int)this + 0x1a4),
                   (uint)(ushort)(uVar5 + ((short)(int)fVar9 - (short)(int)fVar10) * (local_8 - 1) +
                                 8));
      F_0055a300(*(undefined * PTR32 *)((int)this + 0x1a4),1);
      F_0055a300(*(undefined * PTR32 *)((int)this + 0x1a8),1);
      F_00584110(*(undefined * PTR32 *)((int)this + 0x1a8),*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x264))));
      uVar7 = 1;
      pvVar6 = (undefined *)F_00561530(*(undefined * PTR32 *)((int)this + 0x180),4);
      F_0055a300(pvVar6,uVar7);
    }
    else {
      *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x10;
      F_0055e2a0(this,0x2000000,1);
      ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,0,0);
    }
    *(int *)((int)this + 0x1fc) = iVar3;
    *(int *)((int)this + 0x204) = iVar2;
    *(bool *)((int)this + 0x211) = bVar8;
  }
  return bVar8;
}

/* ref: FUN_007f1420 */
uint F_007f1420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f1420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined * this_00;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  this_00 = (undefined *)F_0055e2f0(this,3);
  if (*(int *)((int)this + 0x1fc) < 2) {
    bVar1 = F_0055a300(this_00,0);
    return CONCAT31(extraout_var,bVar1);
  }
  F_0055a300(this_00,1);
  uVar2 = *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x20)));
  F_0059d640(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1ac) + 0x6c))),(-(uint)((uVar2 & 2) != 0) & 10) + 7);
  F_0059d640(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1b0) + 0x6c))),(-(uint)((uVar2 & 4) != 0) & 10) + 7);
  F_0059d640(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1b4) + 0x6c))),(-(uint)((uVar2 & 8) != 0) & 10) + 7);
  F_0059d640(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1b8) + 0x6c))),
               (-(uint)((uVar2 & 0x10) != 0) & 10) + 7);
  F_0059d640(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1bc) + 0x6c))),
               (-(uint)((uVar2 & 0x20) != 0) & 10) + 7);
  uVar2 = F_0059d640(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c0) + 0x6c))),
                       (-(uint)((uVar2 & 0x40) != 0) & 10) + 7);
  return uVar2;
}

/* ref: FUN_007f1530 */
uint F_007f1530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f1530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  undefined * this_00;
  int iVar3;
  undefined * pvVar4;
  int iVar5;
  undefined4 uVar6;
  short sVar7;
  undefined2 uVar8;
  short * psVar9;
  int local_14;
  undefined4 * local_10;
  int local_8;
  
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b990(uVar2);
  iVar5 = *(int *)(uVar2 + 0x10);
  iVar1 = **(int * PTR32 *)(iVar5 + 0x20);
  *(undefined4 *)((int)this + 0x20c) = 0xffffffff;
  local_8 = 0;
  if (0 < iVar1) {
    local_10 = (undefined4 *)((int)this + 0x180);
    local_14 = 0x6c;
    psVar9 = (short *)((int)this + 0x1c4);
    do {
      pvVar4 = (undefined *)*local_10;
      this_00 = (undefined *)F_00561490(pvVar4,0x18);
      if (pvVar4 == (undefined *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)((int)pvVar4 + 0x70);
      }
      uVar2 = F_0055a2d0(uVar6);
      if ((char)uVar2 != '\0') {
        iVar3 = *((int *)GEN_TOP((local_14 + *(int *)(iVar5 + 0x20))));
        if ((iVar3 == param_1) && (iVar3 != -0x20000000)) {
          if ((iVar3 == param_2) || (local_8 == *(int *)((int)this + 0x208))) {
            if (*psVar9 != 0x69) {
              sVar7 = 0x69;
              iVar3 = (*psVar9 == 0x67) + 0x69;
              goto LAB_007f1607;
            }
          }
          else if (*psVar9 != 0x67) {
            sVar7 = 0x67;
            iVar3 = (*psVar9 == 0x69) + 0x67;
LAB_007f1607: ;
            *psVar9 = sVar7;
            F_0059d640(this_00,iVar3);
          }
          *(int *)((int)this + 0x20c) = local_8;
        }
        else if (((iVar3 == param_2) || (local_8 == *(int *)((int)this + 0x208))) &&
                (iVar3 != -0x20000000)) {
          if (*psVar9 != 0x65) {
            *psVar9 = 0x65;
            F_0059d640(this_00,0x65);
          }
        }
        else {
          *psVar9 = 0x11;
          F_0059d670(this_00,0x11);
        }
      }
      local_10 = local_10 + 1;
      local_14 = local_14 + 0x4c;
      local_8 = local_8 + 1;
      psVar9 = psVar9 + 1;
    } while (local_8 < iVar1);
  }
  uVar6 = 0;
  if (*(int *)((int)this + 0x1a0) != 0) {
    uVar6 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1a0) + 0x70)));
  }
  uVar2 = F_0055a2d0(uVar6);
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  pvVar4 = (undefined *)F_00561490(*(undefined * PTR32 *)((int)this + 0x1a0),0x14);
  iVar5 = *((int *)GEN_TOP((*(int *)(iVar5 + 0x20) + 0x790)));
  if ((iVar5 != param_1) || (iVar5 == -0x20000000)) {
    if (((iVar5 == param_2) || (*(int *)((int)this + 0x208) == 8)) && (iVar5 != -0x20000000)) {
      if (*(short *)((int)this + 0x1d4) == 0x65) {
        return (uint)pvVar4;
      }
      *(undefined2 *)((int)this + 0x1d4) = 0x65;
      uVar2 = F_0059d640(pvVar4,0x65);
      return uVar2;
    }
    *(undefined2 *)((int)this + 0x1d4) = 0x11;
    uVar2 = F_0059d670(pvVar4,0x11);
    return uVar2;
  }
  if ((iVar5 == param_2) || (*(int *)((int)this + 0x208) == 8)) {
    if (*(short *)((int)this + 0x1d4) == 0x69) goto LAB_007f1715;
    uVar8 = 0x69;
    iVar5 = (*(short *)((int)this + 0x1d4) == 0x67) + 0x69;
  }
  else {
    if (*(short *)((int)this + 0x1d4) == 0x67) goto LAB_007f1715;
    uVar8 = 0x67;
    iVar5 = (*(short *)((int)this + 0x1d4) == 0x69) + 0x67;
  }
  *(undefined2 *)((int)this + 0x1d4) = uVar8;
  pvVar4 = (undefined *)F_0059d640(pvVar4,iVar5);
LAB_007f1715: ;
  *(undefined4 *)((int)this + 0x20c) = 8;
  return (uint)pvVar4;
}

/* ref: FUN_007f1780 */
uint F_007f1780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7f1780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined * pvVar2;
  undefined4 uVar3;
  
  uVar1 = param_1;
  if (7 < param_1) {
    uVar1 = 0x13;
  }
  (*(undefined4 *)(gen_frame + 0x14)) = 3;
  (*(uint *)(gen_frame + 0x18)) = uVar1;
  uVar1 = F_0055dcb0();
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 4))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0xc)),0x2f,1,&(*(undefined4 *)(gen_frame + 0x14)));
  F_005a2670(((undefined1 *)(gen_frame + 0xc)));
  *(uint *)((int)this + 0x208) = param_1;
  pvVar2 = *(undefined * PTR32 *)((int)this + param_1 * 4 + 0x180);
  if (pvVar2 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)((int)pvVar2 + 0x70);
  }
  uVar1 = F_0055a2d0(uVar3);
  if ((char)uVar1 != '\0') {
    if (*(int *)((int)this + 0x208) < 8) {
      uVar3 = 0x18;
    }
    else {
      uVar3 = 0x14;
    }
    pvVar2 = (undefined *)F_00561490(pvVar2,uVar3);
    F_0059d640(pvVar2,(-(uint)(*(int *)((int)this + 0x20c) != *(int *)((int)this + 0x208)) &
                        0xfffffffb) + 0x6a);
  }
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
  return uVar1;
}

/* ref: FUN_007f1830 */
uint F_007f1830(unsigned int gen_a0)
{
  GEN_ENTER(0x7f1830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined * pvVar2;
  undefined4 uVar3;
  
  pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x208) * 4 + 0x180)));
  if (pvVar2 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)((int)pvVar2 + 0x70);
  }
  uVar1 = F_0055a2d0(uVar3);
  if ((char)uVar1 != '\0') {
    if (*(int *)((int)this + 0x208) < 8) {
      uVar3 = 0x18;
    }
    else {
      uVar3 = 0x14;
    }
    pvVar2 = (undefined *)F_00561490(pvVar2,uVar3);
    F_0059d640(pvVar2,(-(uint)(*(int *)((int)this + 0x20c) != *(int *)((int)this + 0x208)) &
                        0xffffffa9) + 0x68);
  }
  (*(undefined4 *)(gen_frame + 0x14)) = 3;
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  uVar1 = F_0055dcb0();
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 4))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0xc)),0x2f,1,&(*(undefined4 *)(gen_frame + 0x14)));
  F_005a2670(((undefined1 *)(gen_frame + 0xc)));
  *(undefined4 *)((int)this + 0x208) = 0xffffffff;
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
  return uVar1;
}

/* ref: Client::UI2::AddonToDoList::vf44 */
uint F_007f18e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7f18e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(this + 0xa0) = 0;
  uVar2 = 0;
  do {
    uVar3 = 0;
    this_00 = (undefined *)F_0055e2f0(this,*(undefined4 *)((int)&REFG(undefined4, 0x10c7174) + uVar2));
    F_0055a300(this_00,uVar3);
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x20);
  F_005a91d0(this,1,0x1b);
  F_005a91d0(this,0,0x18);
  uVar2 = F_0055dcb0();
  piVar1 = (int *)F_0055b990(uVar2);
  uVar2 = *((int *)GEN_TOP((*(int *)(*piVar1 + 0x20) + 0x44))) - 1;
  if (uVar2 < 3) {
    *(undefined2 *)(this + 0x3b4) = 0x2d;
    return uVar2;
  }
  *(undefined2 *)(this + 0x3b4) = 0x18;
  return 0x18;
}

/* ref: FUN_007f1970 */
unsigned int F_007f1970(unsigned int gen_a0)
{
  GEN_ENTER(0x7f1970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  uint uVar4;
  undefined * pvVar5;
  int local_8;
  
  F_007905e0(this);
  uVar1 = F_0055dcb0();
  F_00567340(*(undefined * PTR32 *)(uVar1 + 0x18),this,1);
  pvVar5 = this;
  pvVar2 = (undefined *)F_0055dcb0();
  F_0055ba60(pvVar2,pvVar5);
  pvVar5 = (undefined *)((int)this + 0x24);
  F_00590210(pvVar5,4,0);
  F_00590210(pvVar5,5,0);
  F_00590210(pvVar5,4,2000);
  F_00590210(pvVar5,7,2000);
  F_00590210(pvVar5,4,1000);
  F_00590210(pvVar5,5,1000);
  F_00590210(pvVar5,9,1000);
  F_00590210(pvVar5,2,1000);
  F_00590210(pvVar5,3,1000);
  local_8 = 0;
  do {
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 1;
      pvVar2 = (undefined *)F_00578f50(pvVar5,7,iVar3,local_8);
      if (pvVar2 != (undefined *)0x0) {
        F_0055a300(pvVar2,1);
        pvVar2 = (undefined *)F_00559c20(pvVar2);
        if ((pvVar2 != (undefined *)0x0) && (uVar1 = F_00561490(pvVar2,9), uVar1 != 0)) {
          uVar4 = F_0055dcb0();
          F_00596b10((undefined *)(uVar4 + 0xe0),uVar1);
        }
      }
    } while (iVar3 < 10);
    F_00590210(pvVar5,7,local_8);
    F_00590210(pvVar5,8,local_8);
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 1;
      pvVar2 = (undefined *)F_00578f50(pvVar5,7,iVar3,local_8 + 1000);
      if (pvVar2 != (undefined *)0x0) {
        F_0055a300(pvVar2,1);
        pvVar2 = (undefined *)F_00559c20(pvVar2);
        if ((pvVar2 != (undefined *)0x0) && (uVar1 = F_00561490(pvVar2,9), uVar1 != 0)) {
          uVar4 = F_0055dcb0();
          F_00596b10((undefined *)(uVar4 + 0xe0),uVar1);
        }
      }
    } while (iVar3 < 10);
    F_00590210(pvVar5,7,local_8 + 1000);
    F_00590210(pvVar5,8,local_8 + 1000);
    local_8 = local_8 + 100;
  } while (local_8 < 500);
  return 0;
}

/* ref: Client::UI2::AddonToDoList::vf38 */
uint F_007f1b30(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7f1b30u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  uint uVar2;
  
  if (((*(byte *)(param_1 + 0xf9) & 1) != 0) && (iVar1 = *(int *)(param_1 + 0x3a8), iVar1 != 0)) {
    F_0055a300(*(undefined * PTR32 *)(param_1 + 0x90),
                 (uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) & 0xfffffff0U) != 0));
  }
  uVar2 = F_005a2370(param_1,param_2);
  return uVar2;
}

/* ref: Client::UI2::AddonToDoList::vf2 */
uint F_007f1b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7f1b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  uVar2 = param_1 & 0xffff;
  puVar3 = (undefined4 *)(uVar2 - 6);
  if (puVar3 < (undefined4 *)0x12) {
    puVar3 = (undefined4 *)(uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x7f1c9c) + uVar2 + 2)));
    switch((unsigned int)(uintptr_t)(uVar2)) {
    case 6: ;
      uVar2 = F_0055dcb0();
      F_005aa060((undefined *)(uVar2 + 0x20c),0xb,0);
      *(undefined1 *)(uVar2 + 0x21b) = 1;
      uVar2 = F_00557670(param_3,0);
      return uVar2;
    case 7: ;
      uVar2 = F_0055dcb0();
      *(undefined1 *)(uVar2 + 0x21b) = 0;
      uVar2 = F_005aa060((undefined *)(uVar2 + 0x20c),0,0);
      return uVar2;
    case 8: ;
    case 0x17: ;
      F_00790540(this,0,param_3,param_4);
      uVar2 = F_0055dcb0();
      puVar3 = (undefined4 *)F_00594ca0(*(undefined * PTR32 *)(uVar2 + 0x14),this);
      break;
    case 9: ;
      puVar1 = (undefined4 *)*param_3;
      puVar3 = param_3;
      switch((unsigned int)(uintptr_t)(param_2)) {
      case 3: ;
        uVar2 = F_00790300(this,*puVar1,param_3,param_4);
        return uVar2;
      case 4: ;
        uVar2 = F_00790370(this,*puVar1,param_3,param_4);
        return uVar2;
      case 5: ;
        uVar2 = F_00790420(this,*puVar1,param_3,param_4);
        return uVar2;
      case 6: ;
        uVar2 = F_007904d0(this,*puVar1,param_3,param_4);
        return uVar2;
      case 7: ;
        uVar2 = F_007905b0(this);
        return uVar2;
      }
    }
  }
  return (uint)puVar3;
}

/* ref: Client::UI2::AddonActionBarHorizontal::vf37 */
uint F_007f1cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x7f1cd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,1,6,0);
  F_005a92d0(this,0,5,0);
  uVar1 = F_007efe80((undefined *)this);
  return uVar1;
}

/* ref: Client::UI2::AddonActionBarHorizontal::vf65 */
uint F_007f1d00(unsigned int gen_a0)
{
  GEN_ENTER(0x7f1d00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  uVar1 = F_0055dcb0();
  if (*(int *)(this + 0x180) == 0x12) {
    uVar1 = F_0043bd00(*(undefined * PTR32 *)(uVar1 + 0x30),0x3f4,0,0);
    uVar1 = F_00584110(*(undefined * PTR32 *)(this + 0x1a8),uVar1);
    return uVar1;
  }
  iVar2 = *(int *)(this + 0x180) + 1;
  if (this[0x19d] != (undefined1)0x0) {
    uVar1 = F_004352e0(iVar2);
    uVar1 = F_00584110(*(undefined * PTR32 *)(this + 0x1a8),uVar1);
    return uVar1;
  }
  uVar1 = F_00435340(iVar2);
  uVar1 = F_00584110(*(undefined * PTR32 *)(this + 0x1a8),uVar1);
  return uVar1;
}

/* ref: Client::UI2::AddonActionBarVertical::vf37 */
uint F_007f1d70(unsigned int gen_a0)
{
  GEN_ENTER(0x7f1d70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_005a92d0(this,1,6,0);
  F_005a92d0(this,0,5,0);
  uVar1 = F_007efe80((undefined *)this);
  return uVar1;
}

