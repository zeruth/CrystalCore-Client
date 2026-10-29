#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00815e10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00815e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x815e10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  F_007b8ab0(this GEN_EDX_FWD);
  uVar1 = F_00557670(param_2 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00815e30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00815e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x815e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_3 + 8) * 0xb4;
  uVar1 = F_007b8980(this GEN_EDX_FWD,*(undefined4 *)((int)this + iVar2 + 0x220),(int)this + iVar2 + 0x224);
  return uVar1;
}

/* ref: FUN_00815e70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00815e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x815e70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = F_0042a990((int)this + param_1 * 0xb4 + 0x1c8 GEN_EDX_FWD);
  pvVar2 = (undefined *)F_00559ba0(param_2[1] GEN_EDX_ARG);
  F_00584110(pvVar2 GEN_EDX_ARG,uVar1);
  if (((*param_2 == 0) || (pvVar2 = (undefined *)F_00559c20(*param_2 GEN_EDX_ARG), pvVar2 == (undefined *)0x0)) ||
     (uVar1 = F_005613a0(pvVar2 GEN_EDX_ARG), uVar1 != 3)) {
    pvVar2 = (undefined *)0x0;
  }
  uVar1 = F_0059dde0(pvVar2 GEN_EDX_ARG,(uint)(*(int *)((int)this + param_1 * 0xb4 + 0x21c) != 0));
  return uVar1;
}

/* ref: FUN_00815ee0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00815ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x815ee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  byte bVar2;
  ushort uVar3;
  undefined3 extraout_var = 0;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)((int)this + 0x188);
  (*(short *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x97ff;
  F_0055e430(this GEN_EDX_FWD,((undefined2 *)(gen_frame + 0x18)),((short *)(gen_frame + 0x14)),uVar4);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 1)) = 0x40;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xc8e;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 1;
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = ((undefined2 *)(gen_frame + 0x18))[0];
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22(((undefined2 *)(gen_frame + 0x18))[0],0x4001);
  (*(short *)(gen_frame + 0xc)) = ((short *)(gen_frame + 0x14))[0];
  F_0056b6e0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)));
  iVar1 = *(int *)((int)this + 400);
  F_0055e430(this GEN_EDX_ARG,((short *)(gen_frame + 0x14)),((undefined2 *)(gen_frame + 0x18)),iVar1);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(iVar1 + 0x70);
  }
  uVar3 = F_0055a020(uVar4 GEN_EDX_ARG);
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = ((short *)(gen_frame + 0x14))[0] + uVar3;
  (*(short *)(gen_frame + 0xc)) = ((undefined2 *)(gen_frame + 0x18))[0];
  (*(undefined4 *)(gen_frame + 0x10)) = 0xc8d;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 2;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 1)) = 0x40;
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22(((short *)(gen_frame + 0x14))[0] + uVar3,0x4002);
  F_0056b6e0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)));
  bVar2 = F_0056b630(this GEN_EDX_ARG,0x18abf,7,0,9,0,0);
  return CONCAT31(extraout_var,bVar2);
}

/* ref: Client::UI2::AddonConfigSystem::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00815fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x815fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a4;)
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined4 uVar5;
  uint * puVar6;
  int iVar7;
  undefined * puVar8;
  float fVar9;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(uint *)(gen_frame + 0x38)) = uVar2;
  uVar3 = param_1 & 0xffff;
  piVar4 = (int *)(uVar3 - 0xc);
  if (piVar4 < (int *)0x3d) {
    piVar4 = (int *)(uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x8165bc) + uVar3)));
    switch((unsigned int)(uintptr_t)(uVar3)) {
    case 0xc: ;
      bVar1 = *(byte *)(param_4 + 1);
      piVar4 = (int *)(uint)bVar1;
      if (bVar1 == 0) {
        piVar4 = (int *)*param_4;
        if (piVar4 == (int *)&REFG(undefined, 0x5)) {
          if (this[0x3e9] != (undefined1)0x0) {
            uVar2 = F_0055dcb0();
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),1);
            F_005a2670(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
          }
          F_00557670(param_3 GEN_EDX_ARG,0);
          uVar2 = F_007b9150(this GEN_EDX_ARG);
          F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
          return uVar2;
        }
        if (param_2 == 0) {
          if (piVar4 == (int *)0x2) {
            F_00557670(param_3 GEN_EDX_ARG,0);
            F_0059b390(this GEN_EDX_ARG,*(undefined4 *)(this + 0x19c),1,0);
            uVar2 = F_0055dcb0();
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),3);
            uVar2 = F_005a2670(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
            F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
            return uVar2;
          }
          break;
        }
        if (param_2 != 1) {
          if (((param_2 == 2) && (piVar4 == (int *)0x2)) &&
             (piVar4 = (int *)F_00557670(param_3 GEN_EDX_ARG,0), this[0x3ea] == (undefined1)0x0)) {
            uVar2 = F_007b91b0(this GEN_EDX_ARG);
            this[0x3ea] = (undefined1)0x0;
            F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
            return uVar2;
          }
          break;
        }
        if (piVar4 == (int *)&REFG(undefined, 0x4)) {
          F_00557670(param_3 GEN_EDX_ARG,0);
          uVar2 = F_007b91e0(this GEN_EDX_ARG);
          F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
          return uVar2;
        }
        if (piVar4 == (int *)0x2) {
          F_00557670(param_3 GEN_EDX_ARG,0);
          F_0059b390(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((this + *(int *)(this + 0x198) * 4 + 0x180))),1,0);
          uVar2 = F_0055dcb0();
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)),3);
          uVar2 = F_005a2670(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
          F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
          return uVar2;
        }
        if (piVar4 != (int *)0x9) {
          if (piVar4 == (int *)&REFG(undefined, 0xa)) {
            bVar1 = F_007ba4c0(this GEN_EDX_ARG);
            piVar4 = ((int *)GEN_TOP(CONCAT31(extraout_var,bVar1)));
            if (bVar1 != 0) {
              uVar2 = F_007ba550(this GEN_EDX_ARG);
              F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
              return uVar2;
            }
          }
          break;
        }
      }
      else if (((bVar1 != 2) || (param_2 != 1)) || (*param_4 != 9)) break;
      bVar1 = F_007ba500(this GEN_EDX_ARG);
      piVar4 = ((int *)GEN_TOP(CONCAT31(extraout_var_00,bVar1)));
      if (bVar1 != 0) {
        uVar2 = F_007ba550(this GEN_EDX_ARG);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
        return uVar2;
      }
      break;
    case 0x17: ;
      F_00557670(param_3 GEN_EDX_ARG,0);
      piVar4 = (int *)(param_2 - 1);
      switch((unsigned int)(uintptr_t)(piVar4)) {
      case (int *)0x0: ;
        uVar2 = F_007b91b0(this GEN_EDX_ARG);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
        return uVar2;
      case (int *)0x1: ;
        this[0x3ea] = (undefined1)0x1;
        uVar2 = F_007b9150(this GEN_EDX_ARG);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
        return uVar2;
      case (int *)0x2: ;
        uVar2 = F_007b9120(this GEN_EDX_ARG);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
        return uVar2;
      case (int *)0x3: ;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        (*(undefined4 *)(gen_frame + 0x28)) = 0;
        (*(undefined4 *)(gen_frame + 0x30)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,3);
        (*(undefined4 *)(gen_frame + 0x1c)) = 0x16;
        F_005a9110(this GEN_EDX_ARG,4,&(*(undefined4 *)(gen_frame + 0x18)));
        puVar6 = &(*(uint *)(gen_frame + 0x38));
        iVar7 = 3;
        do {
          puVar6 = puVar6 - 2;
          uVar2 = F_005a2670(puVar6 GEN_EDX_ARG);
          iVar7 = iVar7 - 1;
        } while (-1 < iVar7);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
        return uVar2;
      case (int *)0x4: ;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        (*(undefined4 *)(gen_frame + 0x28)) = 0;
        (*(undefined4 *)(gen_frame + 0x30)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,3);
        (*(undefined4 *)(gen_frame + 0x1c)) = 0x17;
        F_005a9110(this GEN_EDX_ARG,4,&(*(undefined4 *)(gen_frame + 0x18)));
        puVar6 = &(*(uint *)(gen_frame + 0x38));
        iVar7 = 3;
        do {
          puVar6 = puVar6 - 2;
          uVar2 = F_005a2670(puVar6 GEN_EDX_ARG);
          iVar7 = iVar7 - 1;
        } while (-1 < iVar7);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
        return uVar2;
      }
      if (0x21 < param_2) {
        uVar2 = F_007b9470(this GEN_EDX_ARG,param_2 - 0x22);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
        return uVar2;
      }
      if (5 < param_2) {
        uVar2 = F_007b9560(this GEN_EDX_ARG,param_2 - 6);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
        return uVar2;
      }
      break;
    case 0x19: ;
      if (param_2 == 2) {
        if (this[0x408] == (undefined1)0x0) {
          *(short *)(this + 0x404) = (short)*param_4 - (short)param_4[1];
          *(undefined2 *)(this + 0x406) = 2;
          F_00c47745(uVar2 ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
          return (uint)param_4;
        }
      }
      else if (this[1000] == (undefined1)0x0) {
        F_00557670(param_3 GEN_EDX_ARG,0);
        uVar2 = F_007b9820(this GEN_EDX_ARG,param_2);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
        return uVar2;
      }
      break;
    case 0x1b: ;
      if (this[1000] == (undefined1)0x0) {
        F_00557670(param_3 GEN_EDX_ARG,0);
        uVar2 = F_007b9730(this GEN_EDX_ARG,param_2);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
        return uVar2;
      }
      break;
    case 0x1c: ;
      if (*(int *)(this + param_2 * 4 + 0x230) != 0) {
        if (param_2 == 4) {
          fVar9 = (float)(float10)1;
          uVar5 = *(undefined4 *)(REFG(int, 0x137104c) + 0x25f8);
          puVar8 = REFG(undefined * PTR32, 0x1328428);
        }
        else if (param_2 == 5) {
          uVar5 = *(undefined4 *)(REFG(int, 0x137104c) + 0x25f8);
          fVar9 = (float)(float10)1;
          puVar8 = REFG(undefined * PTR32, 0x132842c);
        }
        else {
          if (param_2 != 6) break;
          fVar9 = (float)(float10)1;
          uVar5 = *(undefined4 *)(REFG(int, 0x137104c) + 0x25f8);
          puVar8 = REFG(undefined * PTR32, 0x1328430);
        }
        piVar4 = (int *)F_004e9a80(uVar5 GEN_EDX_ARG,puVar8,fVar9,0,0,1);
      }
      break;
    case 0x23: ;
      F_00557670(param_3 GEN_EDX_ARG,0);
      uVar2 = F_007b9640(this GEN_EDX_ARG,param_2);
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
      return uVar2;
    case 0x2b: ;
      F_00557670(param_3 GEN_EDX_ARG,0);
      if (*((int *)GEN_TOP((*(int *)(this + param_2 * 4 + 0x2b0) + 0x88))) != 0) {
        uVar2 = *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + param_2 * 4 + 0x2b0) + 0x88))) + 0x70)));
        *(uint *)(this + 0x98) = uVar2;
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
        return uVar2;
      }
      *(undefined4 *)(this + 0x98) = 0;
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
      return 0;
    case 0x34: ;
      F_00557670(param_3 GEN_EDX_ARG,0);
      if (((char)param_4[2] != '\x01') && ((char)param_4[2] != '\x03')) {
        uVar2 = F_007b92a0(this GEN_EDX_ARG,param_2,1,(uint)(*(uint *)(this + 0x198) == param_2));
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
        return uVar2;
      }
      F_007b91e0(this GEN_EDX_ARG);
      uVar2 = F_007b92a0(this GEN_EDX_ARG,param_2,0,0);
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
      return uVar2;
    case 0x48: ;
      piVar4 = param_4;
      if ((*param_4 != 0) && (param_4[1] != 0)) {
        uVar2 = F_007ba580(this GEN_EDX_ARG,param_4[3]);
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
        return uVar2;
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return (uint)piVar4;
}

/* ref: FUN_00816620 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00816620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x816620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar3 = (int *)((int)this + 0x2b0);
  do {
    if (*piVar3 != 0) {
      F_00568380(*(undefined * PTR32 *)(*piVar3 + 0x70) GEN_EDX_FWD,0x23,iVar4,this,0,0);
      pvVar1 = (undefined *)0x0;
      if (*piVar3 != 0) {
        pvVar1 = *(undefined * PTR32 *)(*piVar3 + 0x70);
      }
      F_00568380(pvVar1 GEN_EDX_ARG,0x2b,iVar4,this,0,0);
      pvVar1 = (undefined *)0x0;
      if (*piVar3 != 0) {
        pvVar1 = *(undefined * PTR32 *)(*piVar3 + 0x70);
      }
      F_00568380(pvVar1 GEN_EDX_ARG,0xc,1,this,0,0);
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar4 < 0x13);
  iVar4 = 0;
  piVar3 = (int *)((int)this + 0x1c0);
  do {
    if (*piVar3 != 0) {
      F_00568380(*(undefined * PTR32 *)(*piVar3 + 0x70) GEN_EDX_ARG,0x17,iVar4 + 6,this,0,0);
      pvVar1 = (undefined *)0x0;
      if (*piVar3 != 0) {
        pvVar1 = *(undefined * PTR32 *)(*piVar3 + 0x70);
      }
      F_00568380(pvVar1 GEN_EDX_ARG,0xc,1,this,0,0);
      F_005893d0((undefined *)*piVar3 GEN_EDX_ARG,1);
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar4 < 0x1c);
  iVar4 = 0;
  piVar3 = (int *)((int)this + 0x230);
  do {
    if (*piVar3 != 0) {
      F_00568380(*(undefined * PTR32 *)(*piVar3 + 0x70) GEN_EDX_ARG,0x1b,iVar4,this,0,0);
      pvVar1 = (undefined *)0x0;
      if (*piVar3 != 0) {
        pvVar1 = *(undefined * PTR32 *)(*piVar3 + 0x70);
      }
      F_00568380(pvVar1 GEN_EDX_ARG,0x1c,iVar4,this,0,0);
      pvVar1 = (undefined *)0x0;
      if (*piVar3 != 0) {
        pvVar1 = *(undefined * PTR32 *)(*piVar3 + 0x70);
      }
      F_00568380(pvVar1 GEN_EDX_ARG,0xc,1,this,0,0);
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar4 < 10);
  iVar4 = 0;
  piVar3 = (int *)((int)this + 600);
  do {
    if (*piVar3 != 0) {
      F_00568380(*(undefined * PTR32 *)(*piVar3 + 0x70) GEN_EDX_ARG,0x17,iVar4 + 0x22,this,0,0);
      F_005893d0((undefined *)*piVar3 GEN_EDX_ARG,1);
      pvVar1 = (undefined *)0x0;
      if (*piVar3 != 0) {
        pvVar1 = *(undefined * PTR32 *)(*piVar3 + 0x70);
      }
      F_00568380(pvVar1 GEN_EDX_ARG,0xc,1,this,0,0);
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar4 < 0x16);
  iVar4 = 0;
  piVar3 = (int *)((int)this + 0x2fc);
  do {
    uVar2 = 0;
    if (*piVar3 != 0) {
      F_00568380(*(undefined * PTR32 *)(*piVar3 + 0x70) GEN_EDX_ARG,0x19,iVar4,this,0,0);
      pvVar1 = (undefined *)0x0;
      if (*piVar3 != 0) {
        pvVar1 = *(undefined * PTR32 *)(*piVar3 + 0x70);
      }
      uVar2 = F_00568380(pvVar1 GEN_EDX_ARG,0xc,1,this,0,0);
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar4 < 2);
  return uVar2;
}

/* ref: FUN_008167c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_008167c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x8167c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar3 = (int *)((int)this + 0x2b0);
  do {
    if (*piVar3 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*piVar3 + 0x70) GEN_EDX_FWD,0x23,iVar4,this,0);
      pvVar1 = (undefined *)0x0;
      if (*piVar3 != 0) {
        pvVar1 = *(undefined * PTR32 *)(*piVar3 + 0x70);
      }
      F_005840a0(pvVar1 GEN_EDX_ARG,0x2b,iVar4,this,0);
      pvVar1 = (undefined *)0x0;
      if (*piVar3 != 0) {
        pvVar1 = *(undefined * PTR32 *)(*piVar3 + 0x70);
      }
      F_005840a0(pvVar1 GEN_EDX_ARG,0xc,1,this,0);
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar4 < 0x13);
  iVar4 = 0;
  piVar3 = (int *)((int)this + 0x1c0);
  do {
    if (*piVar3 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*piVar3 + 0x70) GEN_EDX_ARG,0x17,iVar4 + 6,this,0);
      pvVar1 = (undefined *)0x0;
      if (*piVar3 != 0) {
        pvVar1 = *(undefined * PTR32 *)(*piVar3 + 0x70);
      }
      F_005840a0(pvVar1 GEN_EDX_ARG,0xc,1,this,0);
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar4 < 0x1c);
  iVar4 = 0;
  piVar3 = (int *)((int)this + 0x230);
  do {
    if (*piVar3 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*piVar3 + 0x70) GEN_EDX_ARG,0x1b,iVar4,this,0);
      pvVar1 = (undefined *)0x0;
      if (*piVar3 != 0) {
        pvVar1 = *(undefined * PTR32 *)(*piVar3 + 0x70);
      }
      F_005840a0(pvVar1 GEN_EDX_ARG,0x1c,iVar4,this,0);
      pvVar1 = (undefined *)0x0;
      if (*piVar3 != 0) {
        pvVar1 = *(undefined * PTR32 *)(*piVar3 + 0x70);
      }
      F_005840a0(pvVar1 GEN_EDX_ARG,0xc,1,this,0);
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar4 < 10);
  iVar4 = 0;
  piVar3 = (int *)((int)this + 600);
  do {
    if (*piVar3 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*piVar3 + 0x70) GEN_EDX_ARG,0x17,iVar4 + 0x22,this,0);
      pvVar1 = (undefined *)0x0;
      if (*piVar3 != 0) {
        pvVar1 = *(undefined * PTR32 *)(*piVar3 + 0x70);
      }
      F_005840a0(pvVar1 GEN_EDX_ARG,0xc,1,this,0);
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar4 < 0x16);
  iVar4 = 0;
  piVar3 = (int *)((int)this + 0x2fc);
  do {
    uVar2 = 0;
    if (*piVar3 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*piVar3 + 0x70) GEN_EDX_ARG,0x19,iVar4,this,0);
      pvVar1 = (undefined *)0x0;
      if (*piVar3 != 0) {
        pvVar1 = *(undefined * PTR32 *)(*piVar3 + 0x70);
      }
      uVar2 = F_005840a0(pvVar1 GEN_EDX_ARG,0xc,1,this,0);
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar4 < 2);
  return uVar2;
}

/* ref: FUN_00816930 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00816930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x816930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = F_0055dcb0();
  this_00 = *(undefined * PTR32 *)(uVar1 + 0x30);
  if ((*(byte *)(param_1 + 0xa48) & 0xf) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0xa4c);
  }
  uVar1 = 0;
  if (*(int *)((int)this + 0x2b8) != 0) {
    if (iVar3 < 0) {
      iVar3 = 5;
      uVar1 = 6;
    }
    else {
      uVar1 = 5;
    }
    F_0058d980(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x2b8) + 0x88))) GEN_EDX_ARG,uVar1);
    F_0059caa0(*(undefined * PTR32 *)((int)this + 0x2b8) GEN_EDX_ARG,iVar3);
    uVar1 = F_0055e340(this GEN_EDX_ARG,0x60);
    uVar2 = F_0043bd30(this_00 GEN_EDX_ARG,(&REFG(undefined4, 0x10c2d28))[(int)(iVar3)]);
    uVar1 = F_007ba0e0(this GEN_EDX_ARG,uVar1,uVar2);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonConfigSystem::vf38 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008169c0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x8169c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  *(undefined1 *)((int)param_1 + 0x3ea) = 0;
  F_005a2370(param_1 GEN_EDX_FWD,param_2);
  if (((*(byte *)((int)param_1 + 0xf9) & 1) != 0) &&
     ((((uVar2 = *(uint *)((int)param_1 + 0xf4) >> 0x14 & 0xf, uVar2 == 3 || (uVar2 == 2)) &&
       (*(short *)((int)param_1 + 0x404) != 0)) && (*(short *)((int)param_1 + 0x406) == 0)))) {
    uVar2 = F_0055de40(param_1 GEN_EDX_ARG,*(undefined4 *)((int)param_1 + 0xa4));
    if ((uVar2 != 0) &&
       ((bVar1 = F_0055a650(*(undefined4 *)(uVar2 + 0x70) GEN_EDX_ARG), bVar1 != 0 ||
        (bVar1 = F_005c07d0(uVar2 GEN_EDX_ARG), bVar1 != 0)))) {
      uVar2 = F_0055dcb0();
      uVar2 = F_0055b9e0(uVar2 GEN_EDX_ARG);
      bVar1 = F_0055de10(param_1 GEN_EDX_ARG,uVar2);
      F_005a9af0(param_1 GEN_EDX_ARG,*(undefined4 *)((int)param_1 + 0xa4),
                   (0 < *(short *)((int)param_1 + 0x404)) + 9,0,(uint)(bVar1 != 0));
    }
    *(undefined2 *)((int)param_1 + 0x404) = 0;
  }
  uVar2 = (uint)*(ushort *)((int)param_1 + 0x406);
  if (0 < (short)*(ushort *)((int)param_1 + 0x406)) {
    uVar2 = uVar2 - 1;
    *(short *)((int)param_1 + 0x406) = (short)uVar2;
  }
  if (((REFG(int, 0x1379c70) == 4) && ((*(byte *)((int)param_1 + 0xf9) & 1) != 0)) &&
     ((uVar2 = *(uint *)((int)param_1 + 0xf4) >> 0x14 & 0xf, uVar2 == 3 || (uVar2 == 2)))) {
    if (*(char *)((int)param_1 + 0x409) == '\0') {
      uVar2 = F_0055dcb0();
      if (*(char *)(uVar2 + 0x21d) == '\0') {
        *(undefined1 *)((int)param_1 + 0x409) = 1;
        uVar2 = F_0055dcb0();
        *(undefined1 *)(uVar2 + 0x1fa) = 1;
        bVar1 = F_0056b630(param_1 GEN_EDX_ARG,0x18ac1,7,0,9,0,0);
        uVar2 = CONCAT31(extraout_var_00,bVar1);
      }
    }
    else {
      uVar2 = F_0055dcb0();
      if (*(char *)(uVar2 + 0x21d) != '\0') {
        *(undefined1 *)((int)param_1 + 0x409) = 0;
        uVar2 = F_0055dcb0();
        *(undefined1 *)(uVar2 + 0x1fa) = 0;
        bVar1 = F_0056b780(param_1 GEN_EDX_ARG,0);
        return CONCAT31(extraout_var,bVar1);
      }
    }
  }
  return uVar2;
}

/* ref: Client::UI2::AddonConfigPadCalibration::vf37 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00816b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x816b50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pvVar2;
  
  if (((byte)this[0xf9] & 1) != 0) {
    F_005a92d0(this GEN_EDX_FWD,0,0x2e,0);
    F_005a92d0(this GEN_EDX_ARG,1,0x32,0);
    if (*(int *)(this + 0x1f8) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1f8) + 0x70)));
    }
    F_005840a0(pvVar2 GEN_EDX_ARG,0x17,1,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 500) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 500) + 0x70)));
    }
    F_005840a0(pvVar2 GEN_EDX_ARG,0x17,2,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x1fc) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1fc) + 0x70)));
    }
    F_005840a0(pvVar2 GEN_EDX_ARG,0x17,3,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x18c) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
    }
    F_005840a0(pvVar2 GEN_EDX_ARG,0x23,0,this,0);
  }
  F_0090b680(this + 0x180 GEN_EDX_ARG);
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonConfigPadCalibration::vf46 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00816c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x816c00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int iVar1;
  byte * pbVar2;
  undefined4 uVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  int iVar7;
  int local_c;
  
  iVar7 = param_2;
  if (this[0x210] == (undefined1)0x0) {
    return 1;
  }
  if ((*(byte *)(param_2 + 0xa38) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 0xa3c);
  }
  if (iVar1 != 0) {
    if (iVar1 != 1) {
      return 1;
    }
    if ((*(byte *)(param_2 + 0xa40) & 0xf) == 0) {
      F_007ba9b0(this GEN_EDX_FWD,1);
      return 1;
    }
    F_007ba9b0(this GEN_EDX_ARG,*(int *)(param_2 + 0xa44) + 1);
    return 1;
  }
  if (*(int *)(this + 0x18c) != 0) {
    if ((*(byte *)(param_2 + 0x9a0) & 0xf) == 0) {
      param_2 = 0;
    }
    else {
      param_2 = *(uint *)(param_2 + 0x9a4);
    }
    if ((*(byte *)(iVar7 + 0xa50) & 0xf) == 0) {
      local_c = 0;
    }
    else {
      local_c = *(int *)(iVar7 + 0xa54);
    }
    if ((param_2 == 0) || (local_c < 0)) {
      uVar6 = F_0055dcb0();
      uVar6 = F_0043bd00(*(undefined * PTR32 *)(uVar6 + 0x30) GEN_EDX_ARG,0x1016,0,0);
      F_0058e4c0(*(undefined * PTR32 *)(this + 0x18c) GEN_EDX_ARG,uVar6);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18c) + 0x28))))(*(int * PTR32 *)(this + 0x18c) GEN_EDX_ARG,0);
      piVar5 = *(int * PTR32 *)(this + 500);
      if (piVar5 == (int *)0x0) goto LAB_00816dbe;
      uVar3 = 0;
    }
    else {
      uVar6 = 0;
      if (param_2 != 0) {
        pbVar2 = (byte *)(iVar7 + 0x9a8);
        iVar7 = 0;
        do {
          if ((*pbVar2 & 0xf) == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined4 *)(pbVar2 + 4);
          }
          F_0042e430(((undefined *)GEN_TOP((*(int *)(this + 0x188) + iVar7))) GEN_EDX_ARG,uVar3);
          uVar4 = F_0042a990(*(int *)(this + 0x188) + iVar7 GEN_EDX_ARG);
          pbVar2 = pbVar2 + 8;
          *((uint *)GEN_TOP((*(int *)(this + 0x184) + uVar6 * 4))) = uVar4;
          uVar6 = uVar6 + 1;
          iVar7 = iVar7 + 0x54;
        } while (uVar6 < param_2);
      }
      F_0059ead0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x88))) GEN_EDX_ARG,param_2,*(undefined4 *)(this + 0x184),1
                  );
      F_0059caa0(*(undefined * PTR32 *)(this + 0x18c) GEN_EDX_ARG,local_c);
      F_00581b80(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x88))) GEN_EDX_ARG);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18c) + 0x28))))(*(int * PTR32 *)(this + 0x18c) GEN_EDX_ARG,1);
      piVar5 = *(int * PTR32 *)(this + 500);
      *(int *)(this + 0x20c) = local_c;
      if (piVar5 == (int *)0x0) goto LAB_00816dbe;
      uVar3 = 1;
    }
    ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x28))(piVar5 GEN_EDX_ARG,uVar3);
  }
LAB_00816dbe: ;
  F_007ba9b0(this GEN_EDX_ARG,0);
  return 1;
}

/* ref: Client::UI2::AddonConfigPadCalibration::vf47 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00816dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x816dd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 200);
  if (iVar1 != 0) {
    F_007ba690(this GEN_EDX_FWD,iVar1,0,0xe,0);
    F_007ba690(this GEN_EDX_ARG,iVar1,0xe,0x13,1);
    F_007ba690(this GEN_EDX_ARG,iVar1,0x13,0x18,1);
  }
  return;
}

/* ref: Client::UI2::AddonConfigCharacter::vf37 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00816e20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x816e20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  undefined * pAVar4;
  undefined4 uVar5;
  
  ((uint *)(gen_frame + 0x4))[5] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if (this[0x211] != (undefined1)0x0) {
    F_00588e00(this + 0x180 GEN_EDX_FWD,0);
    ((uint *)(gen_frame + 0x4))[0] = 4;
    ((uint *)(gen_frame + 0x4))[1] = 5;
    ((uint *)(gen_frame + 0x4))[2] = 6;
    ((uint *)(gen_frame + 0x4))[3] = 7;
    ((uint *)(gen_frame + 0x4))[4] = 8;
    pAVar4 = this + 0x1d0;
    iVar3 = 0;
    do {
      F_00597570(*(undefined * PTR32 *)pAVar4 GEN_EDX_ARG);
      pvVar1 = (undefined *)0x0;
      if (*(int *)pAVar4 != 0) {
        pvVar1 = *(undefined * PTR32 *)(*(int *)pAVar4 + 0x70);
      }
      F_005840a0(pvVar1 GEN_EDX_ARG,0x34,((uint *)(gen_frame + 0x4))[(int)(iVar3)],this,0);
      pvVar1 = (undefined *)0x0;
      if (*(int *)pAVar4 != 0) {
        pvVar1 = *(undefined * PTR32 *)(*(int *)pAVar4 + 0x70);
      }
      F_005840a0(pvVar1 GEN_EDX_ARG,0xc,0,this,0);
      iVar3 = iVar3 + 1;
      pAVar4 = pAVar4 + 4;
    } while (iVar3 < 5);
    if (*(int *)(this + 0x1c0) != 0) {
      F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c0) + 0x70))) GEN_EDX_ARG,0x17,1,this,0);
      pvVar1 = (undefined *)0x0;
      if (*(int *)(this + 0x1c0) != 0) {
        pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c0) + 0x70)));
      }
      F_005840a0(pvVar1 GEN_EDX_ARG,0xc,1,this,0);
    }
    if (*(int *)(this + 0x1bc) != 0) {
      F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1bc) + 0x70))) GEN_EDX_ARG,0x17,0,this,0);
      pvVar1 = (undefined *)0x0;
      if (*(int *)(this + 0x1c0) != 0) {
        pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c0) + 0x70)));
      }
      F_005840a0(pvVar1 GEN_EDX_ARG,0xc,1,this,0);
    }
    if (*(int *)(this + 0x1c4) != 0) {
      F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c4) + 0x70))) GEN_EDX_ARG,0x17,2,this,0);
      pvVar1 = (undefined *)0x0;
      if (*(int *)(this + 0x1c0) != 0) {
        pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c0) + 0x70)));
      }
      F_005840a0(pvVar1 GEN_EDX_ARG,0xc,1,this,0);
    }
    if (*(int *)(this + 0x1c8) != 0) {
      F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c8) + 0x70))) GEN_EDX_ARG,0x17,3,this,0);
      pvVar1 = (undefined *)0x0;
      if (*(int *)(this + 0x1c8) != 0) {
        pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c8) + 0x70)));
      }
      F_005840a0(pvVar1 GEN_EDX_ARG,0xc,0,this,0);
      if (*(int *)(this + 0x1c8) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1c8) + 0x70)));
      }
      uVar2 = F_0055dcb0();
      F_00596b10((undefined *)(uVar2 + 0xe0) GEN_EDX_ARG,uVar5);
    }
  }
  *(undefined2 *)(this + 0x211) = 0;
  uVar2 = F_005b0510((undefined *)this GEN_EDX_ARG);
  F_00c47745(((uint *)(gen_frame + 0x4))[5] ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00816fe0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00816fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x816fe0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if ((*(char *)((int)this + 0x211) != '\0') && (*(char *)((int)this + 0x1b5) != '\0')) {
    if (*(char *)((int)this + 0x212) != '\0') {
      F_0059bd30((undefined *)((int)this + 0x180) GEN_EDX_FWD,
                   *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x20c) * 4 + 0x1e4))) + 0x18))),1,1);
    }
    *(undefined1 *)((int)this + 0x212) = 0;
    F_00560f40(*((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x20c) * 4 + 0x1e4))),param_1,
                 param_2);
    F_007bb190(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00817060 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00817060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x817060u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint * this_00;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar1 = param_1;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar1 = F_007bad70(this GEN_EDX_FWD);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
    return uVar1;
  case 1: ;
    uVar1 = F_007badd0(this GEN_EDX_ARG);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
    return uVar1;
  case 2: ;
    uVar1 = F_007bad40(this GEN_EDX_ARG);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
    return uVar1;
  case 3: ;
    iVar2 = *(int *)((int)this + 0x1c8);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    bVar3 = *(char *)(iVar2 + 0x88) == '\0';
    if (bVar3) {
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,3);
      (*(uint *)(gen_frame + 0x1c)) = 0;
    }
    else {
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,3);
      (*(uint *)(gen_frame + 0x1c)) = 1;
    }
    (*(uint *)(gen_frame + 0x1c)) = (uint)!bVar3;
    F_0059dde0(*(undefined * PTR32 *)((int)this + 0x1c8) GEN_EDX_ARG,(uint)bVar3);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0xc)) = 0x11;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,3);
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a9110(this GEN_EDX_ARG,4,&(*(undefined4 *)(gen_frame + 0x8)));
    this_00 = &(*(uint *)(gen_frame + 0x28));
    iVar2 = 3;
    do {
      this_00 = this_00 - 2;
      uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
    return uVar1;
  case 4: ;
    uVar4 = 0;
    break;
  case 5: ;
    uVar4 = 1;
    break;
  case 6: ;
    uVar4 = 2;
    break;
  case 7: ;
    uVar4 = 3;
    break;
  case 8: ;
    uVar4 = 4;
    break;
  default: ;
    goto switchD_0081707f_default;
  }
  uVar1 = F_007bb270(this GEN_EDX_ARG,uVar4,param_2);
switchD_0081707f_default: ;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_008171d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008171d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x8171d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_005840a0(*(undefined * PTR32 *)(*(int *)this + 0x70) GEN_EDX_FWD,0x17,0,param_1,0);
    if (*(int *)this == 0) {
      uVar1 = F_005840a0((undefined *)0x0 GEN_EDX_ARG,0xc,0,param_1,0);
      return uVar1;
    }
    uVar1 = F_005840a0(*(undefined * PTR32 *)(*(int *)this + 0x70) GEN_EDX_ARG,0xc,0,param_1,0);
  }
  return uVar1;
}

/* ref: FUN_00817220 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00817220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x817220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_005840a0(*(undefined * PTR32 *)(*(int *)this + 0x70) GEN_EDX_FWD,0x17,0,param_1,0);
    if (*(int *)this == 0) {
      uVar1 = F_005840a0((undefined *)0x0 GEN_EDX_ARG,0xc,0,param_1,0);
      return uVar1;
    }
    uVar1 = F_005840a0(*(undefined * PTR32 *)(*(int *)this + 0x70) GEN_EDX_ARG,0xc,0,param_1,0);
  }
  return uVar1;
}

/* ref: FUN_00817270 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00817270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x817270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_005840a0(*(undefined * PTR32 *)(*(int *)this + 0x70) GEN_EDX_FWD,0x17,0,param_1,0);
    if (*(int *)this == 0) {
      uVar1 = F_005840a0((undefined *)0x0 GEN_EDX_ARG,0xc,0,param_1,0);
      return uVar1;
    }
    uVar1 = F_005840a0(*(undefined * PTR32 *)(*(int *)this + 0x70) GEN_EDX_ARG,0xc,0,param_1,0);
  }
  return uVar1;
}

/* ref: FUN_008172c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008172c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x8172c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  undefined * this_00;
  
  if (*(int *)this == 0) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = *(undefined * PTR32 *)(*(int *)this + 0x70);
  }
  F_005840a0(this_00 GEN_EDX_FWD,0x1b,2,param_1,0);
  if (*(int *)this == 0) {
    uVar1 = F_005840a0((undefined *)0x0 GEN_EDX_ARG,0xc,0,param_1,0);
    return uVar1;
  }
  uVar1 = F_005840a0(*(undefined * PTR32 *)(*(int *)this + 0x70) GEN_EDX_ARG,0xc,0,param_1,0);
  return uVar1;
}

/* ref: FUN_00817320 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00817320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x817320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_005840a0(*(undefined * PTR32 *)(*(int *)this + 0x70) GEN_EDX_FWD,0x23,1,param_1,0);
    this_00 = (undefined *)0x0;
    if (*(int *)this != 0) {
      this_00 = *(undefined * PTR32 *)(*(int *)this + 0x70);
    }
    F_005840a0(this_00 GEN_EDX_ARG,0x2b,1,param_1,0);
    if (*(int *)this == 0) {
      uVar1 = F_005840a0((undefined *)0x0 GEN_EDX_ARG,0xc,0,param_1,0);
      return uVar1;
    }
    uVar1 = F_005840a0(*(undefined * PTR32 *)(*(int *)this + 0x70) GEN_EDX_ARG,0xc,0,param_1,0);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonConfigCharacterBase::vf38 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00817390(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x817390u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  byte bVar1;
  uint uVar2;
  
  F_005a2370(param_1 GEN_EDX_FWD,param_2);
  if ((((*(byte *)((int)param_1 + 0xf9) & 1) != 0) &&
      (((uVar2 = *(uint *)((int)param_1 + 0xf4) >> 0x14 & 0xf, uVar2 == 3 || (uVar2 == 2)) &&
       (*(short *)((int)param_1 + 0x184) != 0)))) && (*(short *)((int)param_1 + 0x186) == 0)) {
    uVar2 = F_0055de40(param_1 GEN_EDX_ARG,*(undefined4 *)((int)param_1 + 0xa4));
    if ((uVar2 != 0) &&
       ((bVar1 = F_0055a650(*(undefined4 *)(uVar2 + 0x70) GEN_EDX_ARG), bVar1 != 0 ||
        (bVar1 = F_005c07d0(uVar2 GEN_EDX_ARG), bVar1 != 0)))) {
      uVar2 = F_0055dcb0();
      uVar2 = F_0055b9e0(uVar2 GEN_EDX_ARG);
      bVar1 = F_0055de10(param_1 GEN_EDX_ARG,uVar2);
      F_005a9af0(param_1 GEN_EDX_ARG,*(undefined4 *)((int)param_1 + 0xa4),
                   (0 < *(short *)((int)param_1 + 0x184)) + 9,0,(uint)(bVar1 != 0));
    }
    *(undefined2 *)((int)param_1 + 0x184) = 0;
  }
  uVar2 = (uint)*(ushort *)((int)param_1 + 0x186);
  if (0 < (short)*(ushort *)((int)param_1 + 0x186)) {
    uVar2 = uVar2 - 1;
    *(short *)((int)param_1 + 0x186) = (short)uVar2;
  }
  return uVar2;
}

/* ref: FUN_00817480 */
GEN_LIB GEN_FRAME byte F_00817480(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x817480u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_ARG,0x144);
  if ((*(int *)(uVar1 + 4) <= *param_1) && (*param_1 <= *(int *)(uVar1 + 8))) {
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::AddonConfigCharacterChatLog::CChatLog::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008174b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x8174b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined * pCVar4;
  int iVar5;
  int local_8;
  
  pCVar4 = this + 0x44;
  local_8 = 4;
  do {
    uVar1 = *(undefined4 *)(this + 4);
    if (*(int *)pCVar4 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*(int *)pCVar4 + 0x70) GEN_EDX_FWD,0x17,0,uVar1,0);
      pvVar3 = (undefined *)0x0;
      if (*(int *)pCVar4 != 0) {
        pvVar3 = *(undefined * PTR32 *)(*(int *)pCVar4 + 0x70);
      }
      F_005840a0(pvVar3 GEN_EDX_ARG,0xc,0,uVar1,0);
    }
    pCVar4 = pCVar4 + 8;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  pCVar4 = this + 8;
  local_8 = 5;
  do {
    uVar1 = *(undefined4 *)(this + 4);
    if (*(int *)pCVar4 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*(int *)pCVar4 + 0x70) GEN_EDX_ARG,0x23,1,uVar1,0);
      pvVar3 = (undefined *)0x0;
      if (*(int *)pCVar4 != 0) {
        pvVar3 = *(undefined * PTR32 *)(*(int *)pCVar4 + 0x70);
      }
      F_005840a0(pvVar3 GEN_EDX_ARG,0x2b,1,uVar1,0);
      pvVar3 = (undefined *)0x0;
      if (*(int *)pCVar4 != 0) {
        pvVar3 = *(undefined * PTR32 *)(*(int *)pCVar4 + 0x70);
      }
      F_005840a0(pvVar3 GEN_EDX_ARG,0xc,0,uVar1,0);
    }
    pCVar4 = pCVar4 + 0xc;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  pCVar4 = this + 100;
  local_8 = 2;
  do {
    uVar1 = *(undefined4 *)(this + 4);
    uVar2 = 0;
    if (*(int *)pCVar4 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*(int *)pCVar4 + 0x70) GEN_EDX_ARG,0x17,0,uVar1,0);
      pvVar3 = (undefined *)0x0;
      if (*(int *)pCVar4 != 0) {
        pvVar3 = *(undefined * PTR32 *)(*(int *)pCVar4 + 0x70);
      }
      uVar2 = F_005840a0(pvVar3 GEN_EDX_ARG,0xc,0,uVar1,0);
    }
    pCVar4 = pCVar4 + 0xc;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  iVar5 = 2;
  pCVar4 = this + 0x7c;
  do {
    if (*(int *)pCVar4 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*(int *)pCVar4 + 0x70) GEN_EDX_ARG,0x17,0,*(undefined4 *)(this + 4),0);
      pvVar3 = (undefined *)0x0;
      if (*(int *)pCVar4 != 0) {
        pvVar3 = *(undefined * PTR32 *)(*(int *)pCVar4 + 0x70);
      }
      uVar2 = F_005840a0(pvVar3 GEN_EDX_ARG,0xc,iVar5 + 1,*(undefined4 *)(this + 4),0);
    }
    iVar5 = iVar5 + 1;
    pCVar4 = pCVar4 + 0xc;
  } while (iVar5 < 6);
  return uVar2;
}

/* ref: FUN_008175f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_008175f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x8175f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined1 *)((int)this + 0x188) = 0;
  *(undefined2 *)((int)this + 0x198) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d5b64));
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x19c) = (*(undefined * PTR32 (*)[5])REFP(0x10cf900));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1fc) = (*(undefined * PTR32 (*)[5])REFP(0x10cf918));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x294) = (*(undefined * PTR32 (*)[5])REFP(0x10cf930));
  *(undefined1 *)((int)this + 0x380) = 0;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x40;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigCharacterHotBar::vf37 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00817670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x817670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 AVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  undefined * pAVar4;
  
  AVar1 = this[0x199];
  ((undefined * PTR32 *)(gen_frame + 0x0))[0] = this + 0x19c;
  ((undefined * PTR32 *)(gen_frame + 0x0))[1] = this + 0x1fc;
  ((undefined * PTR32 *)(gen_frame + 0x0))[2] = this + 0x294;
  if (AVar1 != (undefined1)0x0) {
    iVar3 = 0;
    pAVar4 = this + 0x18c;
    do {
      if (*(int *)pAVar4 != 0) {
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)((undefined * PTR32 *)(gen_frame + 0x0))[(int)(iVar3)] + 8))(((undefined * PTR32 *)(gen_frame + 0x0))[(int)(iVar3)] GEN_EDX_FWD);
        this_00 = (undefined *)0x0;
        if (*(int *)pAVar4 != 0) {
          this_00 = *(undefined * PTR32 *)(*(int *)pAVar4 + 0x70);
        }
        F_005840a0(this_00 GEN_EDX_ARG,0x17,iVar3 + 3,this,0);
        *(int *)pAVar4 = 0;
      }
      iVar3 = iVar3 + 1;
      pAVar4 = pAVar4 + 4;
    } while (iVar3 < 3);
  }
  this[0x199] = (undefined1)0x0;
  uVar2 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00817700 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00817700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x817700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  if (param_1 == 3) {
    uVar1 = F_007bc4e0(this GEN_EDX_FWD,0);
  }
  else {
    if (param_1 == 4) {
      uVar1 = F_007bc4e0(this GEN_EDX_ARG,1);
      return uVar1;
    }
    uVar1 = param_1 - 5;
    if (uVar1 == 0) {
      uVar1 = F_007bc4e0(this GEN_EDX_ARG,2);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_00817740 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00817740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x817740u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined * this_00;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  ((uint *)(gen_frame + 0xc))[3] = uVar2;
  if ((char)param_2 != '\0') {
    F_0059b3f0(this GEN_EDX_FWD,1,1);
    uVar2 = *(uint *)((int)this + 900);
    *(undefined4 *)((int)this + uVar2 * 4 + 0x388) = 0;
    if (*(int *)((int)this + 0x180) != 0) {
      uVar2 = F_00574c80(*(int *)((int)this + 0x180) GEN_EDX_ARG,
                           *((uint *)GEN_TOP(((int)this + *(int *)((int)this + 900) * 4 + 0x388))),1,1);
    }
  }
  iVar6 = *(int *)((int)this + 900);
  if (iVar6 != param_1) {
    iVar1 = *(int *)((int)this + 0x180);
    ((uint *)(gen_frame + 0xc))[0] = 0x65;
    ((uint *)(gen_frame + 0xc))[1] = 0x66;
    ((uint *)(gen_frame + 0xc))[2] = 0x67;
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(iVar1 + 0xb0);
    }
    *(undefined4 *)((int)this + iVar6 * 4 + 0x388) = uVar3;
    uVar2 = ((uint *)(gen_frame + 0xc))[(int)(param_1)];
    this_00 = (undefined *)F_0055e2f0(this GEN_EDX_ARG,7);
    F_0059d670(this_00 GEN_EDX_ARG,uVar2);
    *(int *)((int)this + 900) = param_1;
    if (*(char *)((int)this + 0x380) != '\0') {
      *(undefined4 *)((int)this + param_1 * 4 + 0x388) = 0;
      uVar2 = *(uint *)((int)this + 0xa4);
      uVar4 = F_0055dcb0();
      uVar4 = F_0055b9e0(uVar4 GEN_EDX_ARG);
      if (uVar4 == uVar2) {
        F_0059b3f0(this GEN_EDX_ARG,1,1);
      }
    }
    uVar2 = F_007bc580(this GEN_EDX_ARG);
    iVar6 = 0;
    puVar5 = (undefined4 *)((int)this + 0x18c);
    do {
      if ((undefined *)*puVar5 != (undefined *)0x0) {
        uVar2 = F_0059dde0((undefined *)*puVar5 GEN_EDX_ARG,(uint)(iVar6 == *(int *)((int)this + 900)));
      }
      iVar6 = iVar6 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar6 < 3);
  }
  F_00c47745(((uint *)(gen_frame + 0xc))[3] ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00817870 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00817870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x817870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x40];
  ushort uVar1;
  uint uVar2;
  undefined4 in_ecx;
  uint * this_00;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0xc)) = 0x14;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,2);
  (*(undefined1 *)(gen_frame + 0x14)) = 1;
  F_0055e430(this GEN_EDX_ARG,((short *)(gen_frame + 0x0)),((short *)(gen_frame + 0x4)),*(undefined4 *)((int)this + 0x18c));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,3);
  (*(int *)(gen_frame + 0x1c)) = (int)((short *)(gen_frame + 0x0))[0];
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,3);
  iVar3 = *(int *)((int)this + 0x194);
  (*(int *)(gen_frame + 0x24)) = (int)((short *)(gen_frame + 0x4))[0];
  F_0055e430(this GEN_EDX_ARG,((short *)(gen_frame + 0x4)),((short *)(gen_frame + 0x0)),iVar3);
  if (iVar3 == 0) {
    in_ecx = 0;
  }
  else {
    in_ecx = *(undefined4 *)(iVar3 + 0x70);
  }
  uVar1 = F_0055a020(in_ecx GEN_EDX_ARG);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)) GEN_EDX_ARG,3);
  (*(int *)(gen_frame + 0x2c)) = (int)(short)(uVar1 + ((short *)(gen_frame + 0x4))[0]);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)) GEN_EDX_ARG,3);
  (*(int *)(gen_frame + 0x34)) = (int)((short *)(gen_frame + 0x0))[0];
  F_005a9110(this GEN_EDX_ARG,6,&(*(undefined4 *)(gen_frame + 0x8)));
  this_00 = &(*(uint *)(gen_frame + 0x38));
  iVar3 = 5;
  do {
    this_00 = this_00 - 2;
    uVar2 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::UI2::AddonConfigCharacterHotBar::CDisplay::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00817980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x817980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  undefined * this_00;
  uint uVar2;
  undefined * pCVar3;
  int local_8;
  
  local_8 = 0xb;
  pCVar3 = this;
  do {
    pCVar3 = pCVar3 + 8;
    uVar1 = *(undefined4 *)(this + 4);
    uVar2 = 0;
    if (*(int *)pCVar3 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*(int *)pCVar3 + 0x70) GEN_EDX_FWD,0x17,0,uVar1,0);
      this_00 = (undefined *)0x0;
      if (*(int *)pCVar3 != 0) {
        this_00 = *(undefined * PTR32 *)(*(int *)pCVar3 + 0x70);
      }
      uVar2 = F_005840a0(this_00 GEN_EDX_ARG,0xc,0,uVar1,0);
    }
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  return uVar2;
}

/* ref: Client::UI2::AddonConfigCharacterHotBar::CCommon::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008179e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x8179e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  undefined * this_00;
  uint uVar2;
  undefined * pCVar3;
  int local_8;
  
  local_8 = 0x12;
  pCVar3 = this;
  do {
    pCVar3 = pCVar3 + 8;
    uVar1 = *(undefined4 *)(this + 4);
    uVar2 = 0;
    if (*(int *)pCVar3 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*(int *)pCVar3 + 0x70) GEN_EDX_FWD,0x17,0,uVar1,0);
      this_00 = (undefined *)0x0;
      if (*(int *)pCVar3 != 0) {
        this_00 = *(undefined * PTR32 *)(*(int *)pCVar3 + 0x70);
      }
      uVar2 = F_005840a0(this_00 GEN_EDX_ARG,0xc,0,uVar1,0);
    }
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  return uVar2;
}

/* ref: Client::UI2::AddonConfigCharacterHotBar::CXhb::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00817a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x817a40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  undefined * pCVar5;
  int local_8;
  
  pCVar5 = this + 8;
  local_8 = 5;
  do {
    uVar1 = *(undefined4 *)(this + 4);
    if (*(int *)pCVar5 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*(int *)pCVar5 + 0x70) GEN_EDX_FWD,0x17,0,uVar1,0);
      pvVar2 = (undefined *)0x0;
      if (*(int *)pCVar5 != 0) {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pCVar5 + 0x70);
      }
      F_005840a0(pvVar2 GEN_EDX_ARG,0xc,0,uVar1,0);
    }
    pCVar5 = pCVar5 + 0xc;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  pCVar5 = this + 0x44;
  iVar4 = 0x15;
  do {
    uVar1 = *(undefined4 *)(this + 4);
    uVar3 = 0;
    if (*(int *)pCVar5 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*(int *)pCVar5 + 0x70) GEN_EDX_ARG,0x17,0,uVar1,0);
      pvVar2 = (undefined *)0x0;
      if (*(int *)pCVar5 != 0) {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pCVar5 + 0x70);
      }
      uVar3 = F_005840a0(pvVar2 GEN_EDX_ARG,0xc,0,uVar1,0);
    }
    pCVar5 = pCVar5 + 8;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  return uVar3;
}

/* ref: FUN_00817ae0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00817ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x817ae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined1 *)((int)this + 0x188) = 0;
  *(undefined2 *)((int)this + 0x194) = 0;
  *(undefined1 *)((int)this + 0x196) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d5c64));
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x198) = (*(undefined * PTR32 (*)[6])REFP(0x10cf948));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x290) = (*(undefined * PTR32 (*)[6])REFP(0x10cf964));
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x40;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigCharacterHud::vf37 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00817b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x817b50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 AVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  undefined * pAVar4;
  
  AVar1 = this[0x195];
  ((undefined * PTR32 *)(gen_frame + 0x4))[0] = this + 0x198;
  ((undefined * PTR32 *)(gen_frame + 0x4))[1] = this + 0x290;
  if (AVar1 != (undefined1)0x0) {
    iVar3 = 0;
    pAVar4 = this + 0x18c;
    do {
      if (*(int *)pAVar4 != 0) {
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)((undefined * PTR32 *)(gen_frame + 0x4))[(int)(iVar3)] + 8))(((undefined * PTR32 *)(gen_frame + 0x4))[(int)(iVar3)] GEN_EDX_FWD);
        this_00 = (undefined *)0x0;
        if (*(int *)pAVar4 != 0) {
          this_00 = *(undefined * PTR32 *)(*(int *)pAVar4 + 0x70);
        }
        F_005840a0(this_00 GEN_EDX_ARG,0x17,iVar3 + 3,this,0);
        *(int *)pAVar4 = 0;
      }
      iVar3 = iVar3 + 1;
      pAVar4 = pAVar4 + 4;
    } while (iVar3 < 2);
  }
  this[0x195] = (undefined1)0x0;
  uVar2 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00817bd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00817bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x817bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  if (param_1 == 3) {
    uVar1 = F_007bd0f0(this GEN_EDX_FWD,0);
  }
  else {
    uVar1 = param_1 - 4;
    if (uVar1 == 0) {
      uVar1 = F_007bd0f0(this GEN_EDX_ARG,1);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_00817c00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00817c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x817c00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  int iVar5;
  
  if ((char)param_2 != '\0') {
    F_0059b3f0(this GEN_EDX_FWD,1,1);
    *((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x2b4) * 4 + 0x2b8))) = 0;
    if (*(int *)((int)this + 0x180) != 0) {
      F_00574c80(*(int *)((int)this + 0x180) GEN_EDX_ARG,
                   *((uint *)GEN_TOP(((int)this + *(int *)((int)this + 0x2b4) * 4 + 0x2b8))),1,1);
    }
  }
  uVar1 = *(uint *)((int)this + 0x2b4);
  uVar2 = param_1;
  if (uVar1 != param_1) {
    iVar5 = *(int *)((int)this + 0x180);
    ((undefined4 *)(gen_frame + 0x4))[0] = 0x65;
    ((undefined4 *)(gen_frame + 0x4))[1] = 0x66;
    if (iVar5 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(iVar5 + 0xb0);
    }
    *(undefined4 *)((int)this + uVar1 * 4 + 0x2b8) = uVar3;
    uVar3 = ((undefined4 *)(gen_frame + 0x4))[(int)(param_1)];
    *(uint *)((int)this + 0x2b4) = param_1;
    this_00 = (undefined *)F_0055e2f0(this GEN_EDX_ARG,6);
    F_0059d670(this_00 GEN_EDX_ARG,uVar3);
    if (*(char *)((int)this + 0x196) != '\0') {
      *((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x2b4) * 4 + 0x2b8))) = 0;
      uVar1 = *(uint *)((int)this + 0xa4);
      uVar2 = F_0055dcb0();
      uVar2 = F_0055b9e0(uVar2 GEN_EDX_ARG);
      if (uVar2 == uVar1) {
        F_0059b3f0(this GEN_EDX_ARG,1,1);
      }
    }
    uVar2 = F_007bd190(this GEN_EDX_ARG);
    iVar5 = 0;
    puVar4 = (undefined4 *)((int)this + 0x18c);
    do {
      if ((undefined *)*puVar4 != (undefined *)0x0) {
        uVar2 = F_0059dde0((undefined *)*puVar4 GEN_EDX_ARG,(uint)(iVar5 == *(int *)((int)this + 0x2b4)));
      }
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar5 < 2);
  }
  return uVar2;
}

/* ref: FUN_00817d20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00817d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x817d20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x40];
  ushort uVar1;
  uint uVar2;
  undefined4 in_ecx;
  uint * this_00;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0xc)) = 0x14;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,2);
  (*(undefined1 *)(gen_frame + 0x14)) = 1;
  F_0055e430(this GEN_EDX_ARG,((short *)(gen_frame + 0x0)),((short *)(gen_frame + 0x4)),*(undefined4 *)((int)this + 0x18c));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,3);
  (*(int *)(gen_frame + 0x1c)) = (int)((short *)(gen_frame + 0x0))[0];
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,3);
  iVar3 = *(int *)((int)this + 400);
  (*(int *)(gen_frame + 0x24)) = (int)((short *)(gen_frame + 0x4))[0];
  F_0055e430(this GEN_EDX_ARG,((short *)(gen_frame + 0x4)),((short *)(gen_frame + 0x0)),iVar3);
  if (iVar3 == 0) {
    in_ecx = 0;
  }
  else {
    in_ecx = *(undefined4 *)(iVar3 + 0x70);
  }
  uVar1 = F_0055a020(in_ecx GEN_EDX_ARG);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)) GEN_EDX_ARG,3);
  (*(int *)(gen_frame + 0x2c)) = (int)(short)(uVar1 + ((short *)(gen_frame + 0x4))[0]);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)) GEN_EDX_ARG,3);
  (*(int *)(gen_frame + 0x34)) = (int)((short *)(gen_frame + 0x0))[0];
  F_005a9110(this GEN_EDX_ARG,6,&(*(undefined4 *)(gen_frame + 0x8)));
  this_00 = &(*(uint *)(gen_frame + 0x38));
  iVar3 = 5;
  do {
    this_00 = this_00 - 2;
    uVar2 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::UI2::AddonConfigCharacterHud::CGeneral::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00817e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x817e30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  undefined * pCVar5;
  int local_8;
  
  local_8 = 0x15;
  pCVar5 = this;
  do {
    pCVar5 = pCVar5 + 8;
    uVar1 = *(undefined4 *)(this + 4);
    if (*(int *)pCVar5 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*(int *)pCVar5 + 0x70) GEN_EDX_FWD,0x17,0,uVar1,0);
      pvVar3 = (undefined *)0x0;
      if (*(int *)pCVar5 != 0) {
        pvVar3 = *(undefined * PTR32 *)(*(int *)pCVar5 + 0x70);
      }
      F_005840a0(pvVar3 GEN_EDX_ARG,0xc,0,uVar1,0);
    }
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  uVar1 = *(undefined4 *)(this + 4);
  if (*(int *)(this + 0xb0) == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0xb0) + 0x70)));
  }
  F_005840a0(pvVar3 GEN_EDX_ARG,0x1b,2,uVar1,0);
  pvVar3 = (undefined *)0x0;
  if (*(int *)(this + 0xb0) != 0) {
    pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0xb0) + 0x70)));
  }
  F_005840a0(pvVar3 GEN_EDX_ARG,0xc,0,uVar1,0);
  pCVar5 = this + 0xd4;
  local_8 = 3;
  do {
    uVar1 = *(undefined4 *)(this + 4);
    if (*(int *)pCVar5 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*(int *)pCVar5 + 0x70) GEN_EDX_ARG,0x23,1,uVar1,0);
      pvVar3 = (undefined *)0x0;
      if (*(int *)pCVar5 != 0) {
        pvVar3 = *(undefined * PTR32 *)(*(int *)pCVar5 + 0x70);
      }
      F_005840a0(pvVar3 GEN_EDX_ARG,0x2b,1,uVar1,0);
      pvVar3 = (undefined *)0x0;
      if (*(int *)pCVar5 != 0) {
        pvVar3 = *(undefined * PTR32 *)(*(int *)pCVar5 + 0x70);
      }
      F_005840a0(pvVar3 GEN_EDX_ARG,0xc,0,uVar1,0);
    }
    pCVar5 = pCVar5 + 0xc;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  pCVar5 = this + 0xbc;
  iVar4 = 2;
  do {
    uVar1 = *(undefined4 *)(this + 4);
    uVar2 = 0;
    if (*(int *)pCVar5 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*(int *)pCVar5 + 0x70) GEN_EDX_ARG,0x17,0,uVar1,0);
      pvVar3 = (undefined *)0x0;
      if (*(int *)pCVar5 != 0) {
        pvVar3 = *(undefined * PTR32 *)(*(int *)pCVar5 + 0x70);
      }
      uVar2 = F_005840a0(pvVar3 GEN_EDX_ARG,0xc,0,uVar1,0);
    }
    pCVar5 = pCVar5 + 0xc;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  return uVar2;
}

/* ref: Client::UI2::AddonConfigCharacterHud::CPartyList::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00817f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x817f60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined * pCVar4;
  int local_8;
  
  local_8 = 2;
  pCVar4 = this;
  do {
    pCVar4 = pCVar4 + 8;
    uVar1 = *(undefined4 *)(this + 4);
    if (*(int *)pCVar4 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*(int *)pCVar4 + 0x70) GEN_EDX_FWD,0x17,0,uVar1,0);
      pvVar2 = (undefined *)0x0;
      if (*(int *)pCVar4 != 0) {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pCVar4 + 0x70);
      }
      F_005840a0(pvVar2 GEN_EDX_ARG,0xc,0,uVar1,0);
    }
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  uVar1 = *(undefined4 *)(this + 4);
  uVar3 = 0;
  if (*(int *)(this + 0x18) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18) + 0x70))) GEN_EDX_ARG,0x23,1,uVar1,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x18) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18) + 0x70)));
    }
    F_005840a0(pvVar2 GEN_EDX_ARG,0x2b,1,uVar1,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x18) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18) + 0x70)));
    }
    uVar3 = F_005840a0(pvVar2 GEN_EDX_ARG,0xc,0,uVar1,0);
  }
  return uVar3;
}

/* ref: FUN_00818000 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00818000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x818000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined1 *)((int)this + 0x188) = 0;
  *(undefined2 *)((int)this + 0x19c) = 0;
  *(undefined1 *)((int)this + 0x19e) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d5d64));
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a0) = (*(undefined * PTR32 (*)[6])REFP(0x10cf980))
  ;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x22c) =
       (*(undefined * PTR32 (*)[6])REFP(0x10cf99c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x318) = (*(undefined * PTR32 (*)[6])REFP(0x10cf9b8));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x434) =
       (*(undefined * PTR32 (*)[5])REFP(0x10cf9d4));
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x40;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigCharacterNamePlate::vf37 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00818090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x818090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 AVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  undefined * pAVar4;
  
  AVar1 = this[0x19d];
  ((undefined * PTR32 *)(gen_frame + 0xc))[0] = this + 0x1a0;
  ((undefined * PTR32 *)(gen_frame + 0xc))[1] = this + 0x22c;
  ((undefined * PTR32 *)(gen_frame + 0xc))[2] = this + 0x318;
  ((undefined * PTR32 *)(gen_frame + 0xc))[3] = this + 0x434;
  if (AVar1 != (undefined1)0x0) {
    iVar3 = 0;
    pAVar4 = this + 0x18c;
    do {
      if (*(int *)pAVar4 != 0) {
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)((undefined * PTR32 *)(gen_frame + 0xc))[(int)(iVar3)] + 8))(((undefined * PTR32 *)(gen_frame + 0xc))[(int)(iVar3)] GEN_EDX_FWD);
        this_00 = (undefined *)0x0;
        if (*(int *)pAVar4 != 0) {
          this_00 = *(undefined * PTR32 *)(*(int *)pAVar4 + 0x70);
        }
        F_005840a0(this_00 GEN_EDX_ARG,0x17,iVar3 + 3,this,0);
        *(int *)pAVar4 = 0;
      }
      iVar3 = iVar3 + 1;
      pAVar4 = pAVar4 + 4;
    } while (iVar3 < 4);
  }
  this[0x19d] = (undefined1)0x0;
  uVar2 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00818120 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00818120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x818120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = param_1 - 3;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    uVar1 = F_007bdb00(this GEN_EDX_FWD,0);
    return uVar1;
  case 1: ;
    uVar1 = F_007bdb00(this GEN_EDX_ARG,1);
    return uVar1;
  case 2: ;
    uVar1 = F_007bdb00(this GEN_EDX_ARG,2);
    break;
  case 3: ;
    uVar1 = F_007bdb00(this GEN_EDX_ARG,3);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00818180 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00818180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x818180u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined4 * puVar5;
  int iVar6;
  undefined4 uVar7;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  ((uint *)(gen_frame + 0xc))[7] = uVar2;
  if ((char)param_2 != '\0') {
    F_0059b3f0(this GEN_EDX_FWD,1,1);
    uVar2 = *(uint *)((int)this + 0x444);
    *(undefined4 *)((int)this + uVar2 * 4 + 0x448) = 0;
    if (*(int *)((int)this + 0x180) != 0) {
      uVar2 = F_00574c80(*(int *)((int)this + 0x180) GEN_EDX_ARG,
                           *((uint *)GEN_TOP(((int)this + *(int *)((int)this + 0x444) * 4 + 0x448))),1,1);
    }
  }
  if (*(int *)((int)this + 0x444) != param_1) {
    cVar1 = *(char *)((int)this + 0x19e);
    ((uint *)(gen_frame + 0xc))[0] = 0x65;
    ((uint *)(gen_frame + 0xc))[1] = 0x66;
    ((uint *)(gen_frame + 0xc))[2] = 0x67;
    ((uint *)(gen_frame + 0xc))[3] = 0x68;
    ((uint *)(gen_frame + 0xc))[4] = 0x65;
    ((uint *)(gen_frame + 0xc))[5] = 0x66;
    ((uint *)(gen_frame + 0xc))[6] = 0x67;
    if (cVar1 != '\0') {
      *(undefined4 *)((int)this + param_1 * 4 + 0x448) = 0;
      uVar2 = *(uint *)((int)this + 0xa4);
      uVar3 = F_0055dcb0();
      uVar3 = F_0055b9e0(uVar3 GEN_EDX_ARG);
      if (uVar3 == uVar2) {
        F_0059b3f0(this GEN_EDX_ARG,1,1);
      }
    }
    if (param_1 == 3) {
      uVar7 = 0x68;
      pvVar4 = (undefined *)F_0055e2f0(this GEN_EDX_ARG,1);
      uVar2 = F_0059d670(pvVar4 GEN_EDX_ARG,uVar7);
      *(undefined4 *)((int)this + 0x444) = 3;
    }
    else {
      if (*(int *)((int)this + 0x180) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x180) + 0xb0)));
      }
      uVar2 = ((uint *)(gen_frame + 0xc))[(int)(param_1)];
      *((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x444) * 4 + 0x448))) = uVar7;
      *(int *)((int)this + 0x444) = param_1;
      pvVar4 = (undefined *)F_0055e2f0(this GEN_EDX_ARG,1);
      F_0059d670(pvVar4 GEN_EDX_ARG,uVar2);
      uVar2 = ((uint *)(gen_frame + 0xc))[(int)(param_1 + 4)];
      pvVar4 = (undefined *)F_0055e2f0(this GEN_EDX_ARG,0xc);
      F_0059d670(pvVar4 GEN_EDX_ARG,uVar2);
      uVar2 = F_007bdbb0(this GEN_EDX_ARG);
    }
    iVar6 = 0;
    puVar5 = (undefined4 *)((int)this + 0x18c);
    do {
      if ((undefined *)*puVar5 != (undefined *)0x0) {
        uVar2 = F_0059dde0((undefined *)*puVar5 GEN_EDX_ARG,(uint)(iVar6 == *(int *)((int)this + 0x444)));
      }
      iVar6 = iVar6 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar6 < 4);
  }
  F_00c47745(((uint *)(gen_frame + 0xc))[7] ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00818300 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00818300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x818300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x40];
  ushort uVar1;
  uint uVar2;
  undefined4 in_ecx;
  uint * this_00;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0xc)) = 0x14;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,2);
  (*(undefined1 *)(gen_frame + 0x14)) = 1;
  F_0055e430(this GEN_EDX_ARG,((short *)(gen_frame + 0x0)),((short *)(gen_frame + 0x4)),*(undefined4 *)((int)this + 0x18c));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,3);
  (*(int *)(gen_frame + 0x1c)) = (int)((short *)(gen_frame + 0x0))[0];
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,3);
  iVar3 = *(int *)((int)this + 0x194);
  (*(int *)(gen_frame + 0x24)) = (int)((short *)(gen_frame + 0x4))[0];
  F_0055e430(this GEN_EDX_ARG,((short *)(gen_frame + 0x4)),((short *)(gen_frame + 0x0)),iVar3);
  if (iVar3 == 0) {
    in_ecx = 0;
  }
  else {
    in_ecx = *(undefined4 *)(iVar3 + 0x70);
  }
  uVar1 = F_0055a020(in_ecx GEN_EDX_ARG);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)) GEN_EDX_ARG,3);
  (*(int *)(gen_frame + 0x2c)) = (int)(short)(uVar1 + ((short *)(gen_frame + 0x4))[0]);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)) GEN_EDX_ARG,3);
  (*(int *)(gen_frame + 0x34)) = (int)((short *)(gen_frame + 0x0))[0];
  F_005a9110(this GEN_EDX_ARG,6,&(*(undefined4 *)(gen_frame + 0x8)));
  this_00 = &(*(uint *)(gen_frame + 0x38));
  iVar3 = 5;
  do {
    this_00 = this_00 - 2;
    uVar2 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::UI2::AddonConfigCharacterNamePlate::CGeneral::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00818410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x818410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)(this + 4);
  uVar2 = 0;
  if (*(int *)(this + 8) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 8) + 0x70))) GEN_EDX_FWD,0x17,0,uVar1,0);
    if (*(int *)(this + 8) == 0) {
      uVar2 = F_005840a0((undefined *)0x0 GEN_EDX_ARG,0xc,0,uVar1,0);
      return uVar2;
    }
    uVar2 = F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 8) + 0x70))) GEN_EDX_ARG,0xc,0,uVar1,0);
  }
  return uVar2;
}

/* ref: Client::UI2::AddonConfigCharacterNamePlate::CMyself::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00818460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x818460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  undefined * pCVar5;
  int local_8;
  
  pCVar5 = this + 8;
  local_8 = 8;
  do {
    uVar1 = *(undefined4 *)(this + 4);
    if (*(int *)pCVar5 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*(int *)pCVar5 + 0x70) GEN_EDX_FWD,0x23,1,uVar1,0);
      pvVar2 = (undefined *)0x0;
      if (*(int *)pCVar5 != 0) {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pCVar5 + 0x70);
      }
      F_005840a0(pvVar2 GEN_EDX_ARG,0x2b,1,uVar1,0);
      pvVar2 = (undefined *)0x0;
      if (*(int *)pCVar5 != 0) {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pCVar5 + 0x70);
      }
      F_005840a0(pvVar2 GEN_EDX_ARG,0xc,0,uVar1,0);
    }
    pCVar5 = pCVar5 + 0xc;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  pCVar5 = this + 0x68;
  iVar4 = 3;
  do {
    uVar1 = *(undefined4 *)(this + 4);
    uVar3 = 0;
    if (*(int *)pCVar5 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*(int *)pCVar5 + 0x70) GEN_EDX_ARG,0x17,0,uVar1,0);
      pvVar2 = (undefined *)0x0;
      if (*(int *)pCVar5 != 0) {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pCVar5 + 0x70);
      }
      uVar3 = F_005840a0(pvVar2 GEN_EDX_ARG,0xc,0,uVar1,0);
    }
    pCVar5 = pCVar5 + 0xc;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  return uVar3;
}

/* ref: Client::UI2::AddonConfigCharacterNamePlate::CAnother::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00818510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x818510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  undefined * pCVar5;
  int local_8;
  
  pCVar5 = this + 8;
  local_8 = 0x10;
  do {
    uVar1 = *(undefined4 *)(this + 4);
    if (*(int *)pCVar5 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*(int *)pCVar5 + 0x70) GEN_EDX_FWD,0x23,1,uVar1,0);
      pvVar2 = (undefined *)0x0;
      if (*(int *)pCVar5 != 0) {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pCVar5 + 0x70);
      }
      F_005840a0(pvVar2 GEN_EDX_ARG,0x2b,1,uVar1,0);
      pvVar2 = (undefined *)0x0;
      if (*(int *)pCVar5 != 0) {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pCVar5 + 0x70);
      }
      F_005840a0(pvVar2 GEN_EDX_ARG,0xc,0,uVar1,0);
    }
    pCVar5 = pCVar5 + 0xc;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  pCVar5 = this + 200;
  iVar4 = 3;
  do {
    uVar1 = *(undefined4 *)(this + 4);
    uVar3 = 0;
    if (*(int *)pCVar5 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*(int *)pCVar5 + 0x70) GEN_EDX_ARG,0x17,0,uVar1,0);
      pvVar2 = (undefined *)0x0;
      if (*(int *)pCVar5 != 0) {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pCVar5 + 0x70);
      }
      uVar3 = F_005840a0(pvVar2 GEN_EDX_ARG,0xc,0,uVar1,0);
    }
    pCVar5 = pCVar5 + 0xc;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  return uVar3;
}

/* ref: Client::UI2::AddonConfigCharacterNamePlate::CNpc::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008185c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x8185c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  undefined * pCVar5;
  int local_8;
  
  pCVar5 = this + 8;
  local_8 = 0xe;
  do {
    uVar1 = *(undefined4 *)(this + 4);
    if (*(int *)pCVar5 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*(int *)pCVar5 + 0x70) GEN_EDX_FWD,0x23,1,uVar1,0);
      pvVar2 = (undefined *)0x0;
      if (*(int *)pCVar5 != 0) {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pCVar5 + 0x70);
      }
      F_005840a0(pvVar2 GEN_EDX_ARG,0x2b,1,uVar1,0);
      pvVar2 = (undefined *)0x0;
      if (*(int *)pCVar5 != 0) {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pCVar5 + 0x70);
      }
      F_005840a0(pvVar2 GEN_EDX_ARG,0xc,0,uVar1,0);
    }
    pCVar5 = pCVar5 + 0xc;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  pCVar5 = this + 0xb0;
  iVar4 = 9;
  do {
    uVar1 = *(undefined4 *)(this + 4);
    uVar3 = 0;
    if (*(int *)pCVar5 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*(int *)pCVar5 + 0x70) GEN_EDX_ARG,0x17,0,uVar1,0);
      pvVar2 = (undefined *)0x0;
      if (*(int *)pCVar5 != 0) {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pCVar5 + 0x70);
      }
      uVar3 = F_005840a0(pvVar2 GEN_EDX_ARG,0xc,0,uVar1,0);
    }
    pCVar5 = pCVar5 + 0xc;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  return uVar3;
}

/* ref: FUN_00818670 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00818670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x818670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined1 *)((int)this + 0x188) = 0;
  *(undefined2 *)((int)this + 0x1a0) = 0;
  *(undefined1 *)((int)this + 0x1a2) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d5e64));
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a4) =
       (*(undefined * PTR32 (*)[6])REFP(0x10cf9ec));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x274) = (*(undefined * PTR32 (*)[6])REFP(0x10cfa08))
  ;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2e8) = (*(undefined * PTR32 (*)[6])REFP(0x10cfa24))
  ;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x488) =
       (*(undefined * PTR32 (*)[6])REFP(0x10cfa40));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x564) = (*(undefined * PTR32 (*)[6])REFP(0x10cfa5c));
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x40;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonConfigCharacterOperation::vf37 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00818710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x818710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 AVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  undefined * pAVar4;
  
  AVar1 = this[0x1a1];
  ((undefined * PTR32 *)(gen_frame + 0x8))[0] = this + 0x1a4;
  ((undefined * PTR32 *)(gen_frame + 0x8))[1] = this + 0x274;
  ((undefined * PTR32 *)(gen_frame + 0x8))[2] = this + 0x2e8;
  ((undefined * PTR32 *)(gen_frame + 0x8))[3] = this + 0x488;
  ((undefined * PTR32 *)(gen_frame + 0x8))[4] = this + 0x564;
  if (AVar1 != (undefined1)0x0) {
    iVar3 = 0;
    pAVar4 = this + 0x18c;
    do {
      if (*(int *)pAVar4 != 0) {
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)((undefined * PTR32 *)(gen_frame + 0x8))[(int)(iVar3)] + 8))(((undefined * PTR32 *)(gen_frame + 0x8))[(int)(iVar3)] GEN_EDX_FWD);
        this_00 = (undefined *)0x0;
        if (*(int *)pAVar4 != 0) {
          this_00 = *(undefined * PTR32 *)(*(int *)pAVar4 + 0x70);
        }
        F_005840a0(this_00 GEN_EDX_ARG,0x17,iVar3 + 3,this,0);
        *(int *)pAVar4 = 0;
      }
      iVar3 = iVar3 + 1;
      pAVar4 = pAVar4 + 4;
    } while (iVar3 < 5);
  }
  this[0x1a1] = (undefined1)0x0;
  uVar2 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_008187b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008187b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x8187b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = param_1 - 3;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    uVar1 = F_007be840(this GEN_EDX_FWD,0);
    return uVar1;
  case 1: ;
    uVar1 = F_007be840(this GEN_EDX_ARG,1);
    return uVar1;
  case 2: ;
    uVar1 = F_007be840(this GEN_EDX_ARG,2);
    return uVar1;
  case 3: ;
    uVar1 = F_007be840(this GEN_EDX_ARG,3);
    return uVar1;
  case 4: ;
    uVar1 = F_007be840(this GEN_EDX_ARG,4);
  }
  return uVar1;
}

/* ref: FUN_00818810 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00818810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x818810u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined * this_00;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  ((uint *)(gen_frame + 0x4))[5] = uVar2;
  if ((char)param_2 != '\0') {
    F_0059b3f0(this GEN_EDX_FWD,1,1);
    uVar2 = *(uint *)((int)this + 0x57c);
    *(undefined4 *)((int)this + uVar2 * 4 + 0x580) = 0;
    if (*(int *)((int)this + 0x180) != 0) {
      uVar2 = F_00574c80(*(int *)((int)this + 0x180) GEN_EDX_ARG,
                           *((uint *)GEN_TOP(((int)this + *(int *)((int)this + 0x57c) * 4 + 0x580))),1,1);
    }
  }
  iVar6 = *(int *)((int)this + 0x57c);
  if (iVar6 != param_1) {
    iVar1 = *(int *)((int)this + 0x180);
    ((uint *)(gen_frame + 0x4))[0] = 0x65;
    ((uint *)(gen_frame + 0x4))[1] = 0x66;
    ((uint *)(gen_frame + 0x4))[2] = 0x67;
    ((uint *)(gen_frame + 0x4))[3] = 0x68;
    ((uint *)(gen_frame + 0x4))[4] = 0x69;
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(iVar1 + 0xb0);
    }
    *(undefined4 *)((int)this + iVar6 * 4 + 0x580) = uVar3;
    uVar2 = ((uint *)(gen_frame + 0x4))[(int)(param_1)];
    *(int *)((int)this + 0x57c) = param_1;
    this_00 = (undefined *)F_0055e2f0(this GEN_EDX_ARG,9);
    F_0059d670(this_00 GEN_EDX_ARG,uVar2);
    if (*(char *)((int)this + 0x1a2) != '\0') {
      *((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x57c) * 4 + 0x580))) = 0;
      uVar2 = *(uint *)((int)this + 0xa4);
      uVar4 = F_0055dcb0();
      uVar4 = F_0055b9e0(uVar4 GEN_EDX_ARG);
      if (uVar4 == uVar2) {
        F_0059b3f0(this GEN_EDX_ARG,1,1);
      }
    }
    uVar2 = F_007be8f0(this GEN_EDX_ARG);
    iVar6 = 0;
    puVar5 = (undefined4 *)((int)this + 0x18c);
    do {
      if ((undefined *)*puVar5 != (undefined *)0x0) {
        uVar2 = F_0059dde0((undefined *)*puVar5 GEN_EDX_ARG,(uint)(iVar6 == *(int *)((int)this + 0x57c)));
      }
      iVar6 = iVar6 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar6 < 5);
  }
  F_00c47745(((uint *)(gen_frame + 0x4))[5] ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00818960 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00818960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x818960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x40];
  ushort uVar1;
  uint uVar2;
  undefined4 in_ecx;
  uint * this_00;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0xc)) = 0x14;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,2);
  (*(undefined1 *)(gen_frame + 0x14)) = 1;
  F_0055e430(this GEN_EDX_ARG,((short *)(gen_frame + 0x0)),((short *)(gen_frame + 0x4)),*(undefined4 *)((int)this + 0x18c));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,3);
  (*(int *)(gen_frame + 0x1c)) = (int)((short *)(gen_frame + 0x0))[0];
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,3);
  iVar3 = *(int *)((int)this + 0x19c);
  (*(int *)(gen_frame + 0x24)) = (int)((short *)(gen_frame + 0x4))[0];
  F_0055e430(this GEN_EDX_ARG,((short *)(gen_frame + 0x4)),((short *)(gen_frame + 0x0)),iVar3);
  if (iVar3 == 0) {
    in_ecx = 0;
  }
  else {
    in_ecx = *(undefined4 *)(iVar3 + 0x70);
  }
  uVar1 = F_0055a020(in_ecx GEN_EDX_ARG);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)) GEN_EDX_ARG,3);
  (*(int *)(gen_frame + 0x2c)) = (int)(short)(uVar1 + ((short *)(gen_frame + 0x4))[0]);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)) GEN_EDX_ARG,3);
  (*(int *)(gen_frame + 0x34)) = (int)((short *)(gen_frame + 0x0))[0];
  F_005a9110(this GEN_EDX_ARG,6,&(*(undefined4 *)(gen_frame + 0x8)));
  this_00 = &(*(uint *)(gen_frame + 0x38));
  iVar3 = 5;
  do {
    this_00 = this_00 - 2;
    uVar2 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::UI2::AddonConfigCharacterOperation::CGeneral::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00818a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x818a70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  undefined * pCVar5;
  int local_c;
  int local_8;
  
  pCVar5 = this + 8;
  local_8 = 2;
  do {
    uVar1 = *(undefined4 *)(this + 4);
    if (*(int *)pCVar5 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*(int *)pCVar5 + 0x70) GEN_EDX_FWD,0x17,0,uVar1,0);
      pvVar2 = (undefined *)0x0;
      if (*(int *)pCVar5 != 0) {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pCVar5 + 0x70);
      }
      F_005840a0(pvVar2 GEN_EDX_ARG,0xc,0,uVar1,0);
    }
    pCVar5 = pCVar5 + 0xc;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  pCVar5 = this + 0x20;
  local_8 = 0xd;
  do {
    uVar1 = *(undefined4 *)(this + 4);
    if (*(int *)pCVar5 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*(int *)pCVar5 + 0x70) GEN_EDX_ARG,0x17,0,uVar1,0);
      pvVar2 = (undefined *)0x0;
      if (*(int *)pCVar5 != 0) {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pCVar5 + 0x70);
      }
      F_005840a0(pvVar2 GEN_EDX_ARG,0xc,0,uVar1,0);
    }
    pCVar5 = pCVar5 + 8;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  pCVar5 = this + 0x88;
  iVar4 = 4;
  do {
    uVar1 = *(undefined4 *)(this + 4);
    pvVar2 = (undefined *)0x0;
    if (*(int *)pCVar5 != 0) {
      pvVar2 = *(undefined * PTR32 *)(*(int *)pCVar5 + 0x70);
    }
    F_005840a0(pvVar2 GEN_EDX_ARG,0x1b,2,uVar1,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)pCVar5 != 0) {
      pvVar2 = *(undefined * PTR32 *)(*(int *)pCVar5 + 0x70);
    }
    F_005840a0(pvVar2 GEN_EDX_ARG,0xc,0,uVar1,0);
    pCVar5 = pCVar5 + 0xc;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  pCVar5 = this + 0xb8;
  local_c = 2;
  do {
    uVar1 = *(undefined4 *)(this + 4);
    uVar3 = 0;
    if (*(int *)pCVar5 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*(int *)pCVar5 + 0x70) GEN_EDX_ARG,0x23,1,uVar1,0);
      pvVar2 = (undefined *)0x0;
      if (*(int *)pCVar5 != 0) {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pCVar5 + 0x70);
      }
      F_005840a0(pvVar2 GEN_EDX_ARG,0x2b,1,uVar1,0);
      pvVar2 = (undefined *)0x0;
      if (*(int *)pCVar5 != 0) {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pCVar5 + 0x70);
      }
      uVar3 = F_005840a0(pvVar2 GEN_EDX_ARG,0xc,0,uVar1,0);
    }
    pCVar5 = pCVar5 + 0xc;
    local_c = local_c - 1;
  } while (local_c != 0);
  return uVar3;
}

/* ref: Client::UI2::AddonConfigCharacterOperation::CTarget::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00818bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x818bc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined * pCVar4;
  int local_8;
  
  local_8 = 0xc;
  pCVar4 = this;
  do {
    pCVar4 = pCVar4 + 8;
    uVar1 = *(undefined4 *)(this + 4);
    if (*(int *)pCVar4 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*(int *)pCVar4 + 0x70) GEN_EDX_FWD,0x17,0,uVar1,0);
      pvVar2 = (undefined *)0x0;
      if (*(int *)pCVar4 != 0) {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pCVar4 + 0x70);
      }
      F_005840a0(pvVar2 GEN_EDX_ARG,0xc,0,uVar1,0);
    }
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  uVar1 = *(undefined4 *)(this + 4);
  uVar3 = 0;
  if (*(int *)(this + 0x68) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x68) + 0x70))) GEN_EDX_ARG,0x23,1,uVar1,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x68) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x68) + 0x70)));
    }
    F_005840a0(pvVar2 GEN_EDX_ARG,0x2b,1,uVar1,0);
    if (*(int *)(this + 0x68) == 0) {
      uVar3 = F_005840a0((undefined *)0x0 GEN_EDX_ARG,0xc,0,uVar1,0);
      return uVar3;
    }
    uVar3 = F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x68) + 0x70))) GEN_EDX_ARG,0xc,0,uVar1,0);
  }
  return uVar3;
}

/* ref: Client::UI2::AddonConfigCharacterOperation::CCircle::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00818c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x818c70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  undefined * pCVar5;
  
  iVar4 = 0x2a;
  pCVar5 = this;
  do {
    pCVar5 = pCVar5 + 8;
    uVar1 = *(undefined4 *)(this + 4);
    if (*(int *)pCVar5 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*(int *)pCVar5 + 0x70) GEN_EDX_FWD,0x17,0,uVar1,0);
      pvVar2 = (undefined *)0x0;
      if (*(int *)pCVar5 != 0) {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pCVar5 + 0x70);
      }
      F_005840a0(pvVar2 GEN_EDX_ARG,0xc,0,uVar1,0);
    }
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  pCVar5 = this + 0x158;
  iVar4 = 6;
  do {
    uVar1 = *(undefined4 *)(this + 4);
    uVar3 = 0;
    if (*(int *)pCVar5 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*(int *)pCVar5 + 0x70) GEN_EDX_ARG,0x23,1,uVar1,0);
      pvVar2 = (undefined *)0x0;
      if (*(int *)pCVar5 != 0) {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pCVar5 + 0x70);
      }
      F_005840a0(pvVar2 GEN_EDX_ARG,0x2b,1,uVar1,0);
      pvVar2 = (undefined *)0x0;
      if (*(int *)pCVar5 != 0) {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pCVar5 + 0x70);
      }
      uVar3 = F_005840a0(pvVar2 GEN_EDX_ARG,0xc,0,uVar1,0);
    }
    pCVar5 = pCVar5 + 0xc;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  return uVar3;
}

/* ref: Client::UI2::AddonConfigCharacterOperation::CCharacter::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00818d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x818d20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined * pCVar4;
  int local_8;
  
  local_8 = 10;
  pCVar4 = this;
  do {
    pCVar4 = pCVar4 + 8;
    uVar1 = *(undefined4 *)(this + 4);
    if (*(int *)pCVar4 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*(int *)pCVar4 + 0x70) GEN_EDX_FWD,0x17,0,uVar1,0);
      pvVar2 = (undefined *)0x0;
      if (*(int *)pCVar4 != 0) {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pCVar4 + 0x70);
      }
      F_005840a0(pvVar2 GEN_EDX_ARG,0xc,0,uVar1,0);
    }
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  uVar1 = *(undefined4 *)(this + 4);
  pvVar2 = (undefined *)0x0;
  if (*(int *)(this + 0x58) != 0) {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x58) + 0x70)));
  }
  F_005840a0(pvVar2 GEN_EDX_ARG,0x1b,2,uVar1,0);
  pvVar2 = (undefined *)0x0;
  if (*(int *)(this + 0x58) != 0) {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x58) + 0x70)));
  }
  F_005840a0(pvVar2 GEN_EDX_ARG,0xc,0,uVar1,0);
  uVar1 = *(undefined4 *)(this + 4);
  if (*(int *)(this + 100) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 100) + 0x70))) GEN_EDX_ARG,0x23,1,uVar1,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 100) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 100) + 0x70)));
    }
    F_005840a0(pvVar2 GEN_EDX_ARG,0x2b,1,uVar1,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 100) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 100) + 0x70)));
    }
    F_005840a0(pvVar2 GEN_EDX_ARG,0xc,0,uVar1,0);
  }
  pCVar4 = this + 0x70;
  local_8 = 9;
  do {
    uVar1 = *(undefined4 *)(this + 4);
    uVar3 = 0;
    if (*(int *)pCVar4 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*(int *)pCVar4 + 0x70) GEN_EDX_ARG,0x17,0,uVar1,0);
      pvVar2 = (undefined *)0x0;
      if (*(int *)pCVar4 != 0) {
        pvVar2 = *(undefined * PTR32 *)(*(int *)pCVar4 + 0x70);
      }
      uVar3 = F_005840a0(pvVar2 GEN_EDX_ARG,0xc,0,uVar1,0);
    }
    pCVar4 = pCVar4 + 0xc;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  return uVar3;
}

/* ref: Client::UI2::AddonConfigCharacterOperation::CMouse::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00818e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x818e30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  undefined * this_00;
  uint uVar2;
  undefined * pCVar3;
  int local_8;
  
  local_8 = 2;
  pCVar3 = this;
  do {
    pCVar3 = pCVar3 + 8;
    uVar1 = *(undefined4 *)(this + 4);
    uVar2 = 0;
    if (*(int *)pCVar3 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*(int *)pCVar3 + 0x70) GEN_EDX_FWD,0x17,0,uVar1,0);
      this_00 = (undefined *)0x0;
      if (*(int *)pCVar3 != 0) {
        this_00 = *(undefined * PTR32 *)(*(int *)pCVar3 + 0x70);
      }
      uVar2 = F_005840a0(this_00 GEN_EDX_ARG,0xc,0,uVar1,0);
    }
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  return uVar2;
}

/* ref: FUN_00818e90 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00818e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x818e90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  iVar3 = 0;
  piVar4 = (int *)((int)this + 0x620);
  do {
    uVar2 = 0;
    if (*piVar4 != 0) {
      F_005840a0(*(undefined * PTR32 *)(*piVar4 + 0x70) GEN_EDX_FWD,0x23,iVar3,this,0);
      pvVar1 = (undefined *)0x0;
      if (*(int *)(*piVar4 + 0x84) != 0) {
        pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(*piVar4 + 0x84) + 0x70)));
      }
      F_005840a0(pvVar1 GEN_EDX_ARG,6,iVar3,this,0);
      pvVar1 = (undefined *)0x0;
      if (*(int *)(*piVar4 + 0x84) != 0) {
        pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(*piVar4 + 0x84) + 0x70)));
      }
      F_005840a0(pvVar1 GEN_EDX_ARG,7,iVar3,this,0);
      pvVar1 = (undefined *)0x0;
      if (*piVar4 != 0) {
        pvVar1 = *(undefined * PTR32 *)(*piVar4 + 0x70);
      }
      F_005840a0(pvVar1 GEN_EDX_ARG,0x2b,iVar3,this,0);
      pvVar1 = (undefined *)0x0;
      if (*piVar4 != 0) {
        pvVar1 = *(undefined * PTR32 *)(*piVar4 + 0x70);
      }
      F_005840a0(pvVar1 GEN_EDX_ARG,0x2c,iVar3,this,0);
      pvVar1 = (undefined *)0x0;
      if (*piVar4 != 0) {
        pvVar1 = *(undefined * PTR32 *)(*piVar4 + 0x70);
      }
      uVar2 = F_005840a0(pvVar1 GEN_EDX_ARG,0xc,0,this,0);
    }
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar3 < 0xe);
  return uVar2;
}

/* ref: Client::UI2::AddonConfigPadCustomize::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00818f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x818f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a4;)
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pAVar1;
  uint uVar2;
  int * piVar3;
  uint * this_00;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar2 = param_1 & 0xffff;
  piVar3 = (int *)(uVar2 - 6);
  if (piVar3 < (int *)0x27) {
    piVar3 = (int *)(uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x8192c0) + uVar2 + 2)));
    switch((unsigned int)(uintptr_t)(uVar2)) {
    case 6: ;
      uVar2 = F_00557670(param_3 GEN_EDX_FWD,0);
      if (this[0x181] == (undefined1)0x0) {
        uVar2 = F_0042a990(this + param_2 * 0x54 + 0x184 GEN_EDX_ARG);
        uVar2 = F_00584110(*(undefined * PTR32 *)(this + 0x61c) GEN_EDX_ARG,uVar2);
      }
      if (((this[param_2 + 0x700] == (undefined1)0x0) &&
          (this[param_2 + 0x70e] == (undefined1)0x0)) &&
         (*(undefined * PTR32 *)(this + param_2 * 4 + 0x71c) != (undefined *)0x0)) {
        uVar2 = F_0059d670(*(undefined * PTR32 *)(this + param_2 * 4 + 0x71c) GEN_EDX_ARG,
                             *(undefined4 *)(&REFG(undefined, 0x10c31d0) + param_2 * 8));
      }
      this[param_2 + 0x70e] = (undefined1)0x1;
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
      return uVar2;
    case 7: ;
      piVar3 = (int *)F_00557670(param_3 GEN_EDX_ARG,0);
      this[param_2 + 0x70e] = (undefined1)0x0;
      if (this[0x181] == (undefined1)0x0) {
        piVar3 = (int *)F_00584110(*(undefined * PTR32 *)(this + 0x61c) GEN_EDX_ARG,"");
      }
      if (((this[param_2 + 0x700] == (undefined1)0x0) &&
          (this[param_2 + 0x70e] == (undefined1)0x0)) &&
         (*(undefined * PTR32 *)(this + param_2 * 4 + 0x71c) != (undefined *)0x0)) {
        uVar2 = F_0059d670(*(undefined * PTR32 *)(this + param_2 * 4 + 0x71c) GEN_EDX_ARG,(&REFG(undefined4, 0x10c31d4))[(int)(param_2 * 2)]);
        F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
        return uVar2;
      }
      break;
    case 0xc: ;
      piVar3 = param_4;
      if ((char)param_4[1] == '\0') {
        piVar3 = (int *)*param_4;
        if (piVar3 == (int *)0x5) {
          if (this[0x180] != (undefined1)0x0) {
            uVar2 = F_0055dcb0();
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),1);
            F_005a2670(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
          }
          F_00557670(param_3 GEN_EDX_ARG,0);
LAB_00818fcc: ;
          uVar2 = F_007c0670(this GEN_EDX_ARG);
          F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
          return uVar2;
        }
        if (piVar3 == (int *)0x2) {
          F_00557670(param_3 GEN_EDX_ARG,0);
          goto LAB_00818ff8;
        }
      }
      break;
    case 0x17: ;
      piVar3 = (int *)F_00557670(param_3 GEN_EDX_ARG,0);
      if (param_2 == 1) {
LAB_00818ff8: ;
        uVar2 = F_007c06a0(this GEN_EDX_ARG);
        F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
        return uVar2;
      }
      if (param_2 == 2) goto LAB_00818fcc;
      if (param_2 == 3) {
        uVar2 = F_007c0640(this GEN_EDX_ARG);
        F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
        return uVar2;
      }
      break;
    case 0x23: ;
      F_00557670(param_3 GEN_EDX_ARG,0);
      uVar2 = F_00562c60(*(undefined4 *)(this + param_2 * 4 + 0x620) GEN_EDX_ARG);
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
      (*(undefined4 *)(gen_frame + 0xc)) = 0xf;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,3);
      (*(int *)(gen_frame + 0x14)) = param_2;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,3);
      (*(uint *)(gen_frame + 0x1c)) = uVar2;
      F_005a9110(this GEN_EDX_ARG,4,&(*(undefined4 *)(gen_frame + 0x8)));
      this_00 = &(*(uint *)(gen_frame + 0x28));
      iVar4 = 3;
      do {
        this_00 = this_00 - 2;
        uVar2 = F_005a2670(this_00 GEN_EDX_ARG);
        iVar4 = iVar4 - 1;
      } while (-1 < iVar4);
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
      return uVar2;
    case 0x2b: ;
      F_00557670(param_3 GEN_EDX_ARG,0);
      pAVar1 = this + param_2 + 0x700;
      *pAVar1 = (undefined1)0x0;
      this[0x181] = (undefined1)0x0;
      uVar2 = F_0042a990(this + param_2 * 0x54 + 0x184 GEN_EDX_ARG);
      uVar2 = F_00584110(*(undefined * PTR32 *)(this + 0x61c) GEN_EDX_ARG,uVar2);
      if (((*pAVar1 == (undefined1)0x0) &&
          (this[param_2 + 0x70e] == (undefined1)0x0)) &&
         (*(undefined * PTR32 *)(this + param_2 * 4 + 0x71c) != (undefined *)0x0)) {
        uVar2 = F_0059d670(*(undefined * PTR32 *)(this + param_2 * 4 + 0x71c) GEN_EDX_ARG,
                             *(undefined4 *)(&REFG(undefined, 0x10c31d0) + param_2 * 8));
      }
      *pAVar1 = (undefined1)0x1;
      this[0x181] = (undefined1)0x1;
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
      return uVar2;
    case 0x2c: ;
      piVar3 = (int *)F_00557670(param_3 GEN_EDX_ARG,0);
      this[param_2 + 0x700] = (undefined1)0x0;
      if (this[0x181] == (undefined1)0x0) {
        piVar3 = (int *)F_00584110(*(undefined * PTR32 *)(this + 0x61c) GEN_EDX_ARG,"");
      }
      if (((this[param_2 + 0x700] == (undefined1)0x0) &&
          (this[param_2 + 0x70e] == (undefined1)0x0)) &&
         (*(undefined * PTR32 *)(this + param_2 * 4 + 0x71c) != (undefined *)0x0)) {
        piVar3 = (int *)F_0059d670(*(undefined * PTR32 *)(this + param_2 * 4 + 0x71c) GEN_EDX_ARG,
                                     (&REFG(undefined4, 0x10c31d4))[(int)(param_2 * 2)]);
      }
      this[0x181] = (undefined1)0x0;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return (uint)piVar3;
}

/* ref: Client::UI2::AddonTitleLogo::vf44 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008192f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x8192f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  uint uVar1;
  uint uVar2;
  undefined * this_00;
  float10 fVar3;
  float10 fVar4;
  undefined4 uVar5;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x54))(this GEN_EDX_FWD,0);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x50))(this GEN_EDX_ARG,0);
  *(float *)(this + 0x180) = ((float)GEN_TOF(((float10)(uVar1 & 0xffff) / (float10)(uVar2 & 0xffff))));
  uVar1 = F_0055dcb0();
  uVar1 = *(uint *)(uVar1 + 0x238);
  uVar2 = F_0055dcb0();
  fVar3 = (float10)(uVar1 & 0xffff);
  fVar4 = ((float10)GEN_TOD((*(uint *)(uVar2 + 0x234) & 0xffff)));
  if ((float10)*(float *)(this + 0x180) * fVar4 <= fVar3) {
    fVar4 = fVar4 / (float10)*(double *)&REFG(undefined, 0x10cfd80);
  }
  else {
    fVar4 = fVar3 / (float10)*(double *)&REFG(undefined, 0x10cfd78);
  }
  F_0056b4b0(this GEN_EDX_ARG,(float)fVar4);
  if ((*param_2 & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 4);
  }
  this_00 = (undefined *)F_0055e2f0(this GEN_EDX_ARG,2);
  if ((uVar1 & 4) == 0) {
    uVar5 = 0x66;
  }
  else {
    uVar5 = 0x65;
  }
  F_0059d670(this_00 GEN_EDX_ARG,uVar5);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_ARG,1,0);
  return uVar1;
}

/* ref: Client::UI2::AddonTitleLogo::vf54 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_008193d0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x8193d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  if ((float10)*(float *)(param_1 + 0x180) * (float10)(ushort)param_2 <= (float10)(param_3 & 0xffff)
     ) {
    F_0056b4b0(param_1 GEN_EDX_FWD,(float)((float10)(ushort)param_2 / (float10)*(double *)&REFG(undefined, 0x10cfd80)));
    return;
  }
  F_0056b4b0(param_1 GEN_EDX_ARG,((float)GEN_TOF(((float10)(param_3 & 0xffff) / (float10)*(double *)&REFG(undefined, 0x10cfd78)))));
  return;
}

/* ref: Client::UI2::AddonTitleMenu::vf37 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00819430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x819430u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (((byte)this[0xf9] & 1) != 0) {
    F_005840a0(*(undefined * PTR32 *)(this + 0x90) GEN_EDX_FWD,0xf,0,this,0);
  }
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonTitleMenu::vf46 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00819460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x819460u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined4 in_ecx;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  
  if (((byte)this[0xf9] & 1) != 0) {
    if ((*param_2 & 0xf) == 0) {
      param_2 = (byte *)0x0;
    }
    else {
      param_2 = *(byte * PTR32 *)(param_2 + 4);
    }
    bVar4 = (byte)((uint)((int)(uintptr_t)param_2) >> 1);
    gen_piece_set(&(*(uint *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)((int)(uintptr_t)this) >> 8)));
    (*(uint *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x8)), 1, 3),bVar4) & 0xffffff01;
    in_ecx = 0;
    if (*(int *)(this + 0x180) != 0) {
      in_ecx = *((undefined4 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
    }
    uVar2 = F_0055a350(in_ecx GEN_EDX_FWD);
    if ((byte)uVar2 != (bVar4 & 1)) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x28))))(*(int * PTR32 *)(this + 0x180) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x8)));
      piVar1 = *(int * PTR32 *)(this + 0x180);
      uVar2 = F_0055dcb0();
      uVar2 = F_0055b9e0(uVar2 GEN_EDX_ARG);
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1 GEN_EDX_ARG);
      if (uVar2 == uVar3) {
        uVar2 = F_0055dcb0();
        if (*(char *)(uVar2 + 0x21a) == '\0') {
          F_0059d640(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x6c))) GEN_EDX_ARG,2);
        }
      }
    }
    if (((uint)param_2 & 1) != 0) {
      F_0059d640(*(undefined * PTR32 *)(this + 0x90) GEN_EDX_ARG,0x66);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x28))))(*(int * PTR32 *)(this + 0x180) GEN_EDX_ARG,0);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x184) + 0x28))))(*(int * PTR32 *)(this + 0x184) GEN_EDX_ARG,0);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18c) + 0x28))))(*(int * PTR32 *)(this + 0x18c) GEN_EDX_ARG,0);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x188) + 0x28))))(*(int * PTR32 *)(this + 0x188) GEN_EDX_ARG,0);
    }
  }
  return 1;
}

/* ref: FUN_00819560 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00819560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x819560u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  int iVar2;
  char * pcVar3;
  
  if ((*(byte *)((int)this + 0xf9) & 1) != 0) {
    iVar1 = *(int *)(param_2 + 4);
    if (*(undefined * PTR32 *)((int)this + 0x180) != (undefined *)0x0) {
      F_00584110(*(undefined * PTR32 *)((int)this + 0x180) GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x160))));
    }
    iVar2 = *(int *)((int)this + 0x184);
    if (iVar2 != 0) {
      pcVar3 = *((char * PTR32 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x1e8)));
      if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
        F_00563db0(iVar2 GEN_EDX_ARG,1);
        if (*(int *)((int)this + 0x184) != 0) {
          F_0055a300(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x184) + 0x70))) GEN_EDX_ARG,1);
          F_0058bba0(*(undefined * PTR32 *)((int)this + 0x184) GEN_EDX_ARG,pcVar3);
          return;
        }
        F_0055a300((undefined *)0x0 GEN_EDX_ARG,1);
        F_0058bba0(*(undefined * PTR32 *)((int)this + 0x184) GEN_EDX_ARG,pcVar3);
        return;
      }
      F_0055a300(*(undefined * PTR32 *)(iVar2 + 0x70) GEN_EDX_ARG,0);
      F_0058bba0(*(undefined * PTR32 *)((int)this + 0x184) GEN_EDX_ARG,"");
    }
  }
  return;
}

/* ref: Client::UI2::AddonCharaSelectNameInput::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00819620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x819620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  if (((byte)this[0xf9] & 1) != 0) {
    uVar1 = F_0055dcb0();
    *(undefined1 *)(uVar1 + 0x1fa) = 1;
    F_005a89b0(this GEN_EDX_ARG,param_1,1);
    F_00568380(*(undefined * PTR32 *)(this + 0x90) GEN_EDX_ARG,0xc,0,this,0,0);
    *(uint *)(this + 0x120) = *(uint *)(this + 0x120) | 4;
  }
  return;
}

/* ref: Client::UI2::AddonCharaSelectNameInput::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00819670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x819670u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  *(undefined1 *)(uVar1 + 0x1fa) = 0;
  if (this[0x3a3] == (undefined1)0x0) {
    uVar1 = F_0055dcb0();
    F_00596b90((undefined *)(uVar1 + 0xe0) GEN_EDX_ARG,(uint)(byte)this[0x13a],1);
  }
  F_005b0610(this GEN_EDX_ARG,param_1,1,param_2);
  uVar1 = F_005840a0(*(undefined * PTR32 *)(this + 0x90) GEN_EDX_ARG,0xc,0,this,0);
  return uVar1;
}

/* ref: FUN_008196d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008196d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x8196d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  F_0042e430((undefined *)((int)this + 0x180) GEN_EDX_FWD,param_2);
  F_007c20c0(this GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00819700 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00819700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x819700u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  F_0042e430((undefined *)((int)this + 0x1d4) GEN_EDX_FWD,param_2);
  F_007c20c0(this GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00819730 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00819730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x819730u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  F_0042e430((undefined *)((int)this + 0x324) GEN_EDX_FWD,param_2);
  F_007c20c0(this GEN_EDX_ARG);
  return 0;
}

/* ref: Client::UI2::AddonCharaSelectListMenu::vf37 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00819760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x819760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  
  if (((byte)this[0xf9] & 1) != 0) {
    F_005a92d0(this GEN_EDX_FWD,1,2,0);
    F_005a92d0(this GEN_EDX_ARG,0,1,0);
    iVar1 = *(int *)(this + 400);
    pvVar2 = (undefined *)0x0;
    if (iVar1 != 0) {
      pvVar2 = *(undefined * PTR32 *)(iVar1 + 0x70);
    }
    F_005840a0(pvVar2 GEN_EDX_ARG,0x1f,(uint)*(ushort *)(iVar1 + 100),this,0);
    iVar1 = *(int *)(this + 400);
    pvVar2 = (undefined *)0x0;
    if (iVar1 != 0) {
      pvVar2 = *(undefined * PTR32 *)(iVar1 + 0x70);
    }
    F_005840a0(pvVar2 GEN_EDX_ARG,0x23,(uint)*(ushort *)(iVar1 + 100),this,0);
    iVar1 = *(int *)(this + 400);
    pvVar2 = (undefined *)0x0;
    if (iVar1 != 0) {
      pvVar2 = *(undefined * PTR32 *)(iVar1 + 0x70);
    }
    F_005840a0(pvVar2 GEN_EDX_ARG,0x21,(uint)*(ushort *)(iVar1 + 100),this,0);
    iVar1 = *(int *)(this + 400);
    pvVar2 = (undefined *)0x0;
    if (iVar1 != 0) {
      pvVar2 = *(undefined * PTR32 *)(iVar1 + 0x70);
    }
    F_005840a0(pvVar2 GEN_EDX_ARG,0x20,(uint)*(ushort *)(iVar1 + 100),this,0);
    iVar1 = *(int *)(this + 0x188);
    pvVar2 = (undefined *)0x0;
    if (iVar1 != 0) {
      pvVar2 = *(undefined * PTR32 *)(iVar1 + 0x70);
    }
    F_005840a0(pvVar2 GEN_EDX_ARG,0x17,(uint)*(ushort *)(iVar1 + 100),this,0);
    iVar1 = *(int *)(this + 0x188);
    pvVar2 = (undefined *)0x0;
    if (iVar1 != 0) {
      pvVar2 = *(undefined * PTR32 *)(iVar1 + 0x70);
    }
    F_005840a0(pvVar2 GEN_EDX_ARG,6,(uint)*(ushort *)(iVar1 + 100),this,0);
    iVar1 = *(int *)(this + 0x188);
    pvVar2 = (undefined *)0x0;
    if (iVar1 != 0) {
      pvVar2 = *(undefined * PTR32 *)(iVar1 + 0x70);
    }
    F_005840a0(pvVar2 GEN_EDX_ARG,7,(uint)*(ushort *)(iVar1 + 100),this,0);
    iVar1 = *(int *)(this + 0x18c);
    pvVar2 = (undefined *)0x0;
    if (iVar1 != 0) {
      pvVar2 = *(undefined * PTR32 *)(iVar1 + 0x70);
    }
    F_005840a0(pvVar2 GEN_EDX_ARG,0x17,(uint)*(ushort *)(iVar1 + 100),this,0);
    iVar1 = *(int *)(this + 0x18c);
    pvVar2 = (undefined *)0x0;
    if (iVar1 != 0) {
      pvVar2 = *(undefined * PTR32 *)(iVar1 + 0x70);
    }
    F_005840a0(pvVar2 GEN_EDX_ARG,6,(uint)*(ushort *)(iVar1 + 100),this,0);
    iVar1 = *(int *)(this + 0x18c);
    pvVar2 = (undefined *)0x0;
    if (iVar1 != 0) {
      pvVar2 = *(undefined * PTR32 *)(iVar1 + 0x70);
    }
    F_005840a0(pvVar2 GEN_EDX_ARG,7,(uint)*(ushort *)(iVar1 + 100),this,0);
  }
  uVar3 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_008198c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008198c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x8198c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint * puVar8;
  undefined * pvVar9;
  undefined4 uVar10;
  char * pcVar11;
  short sVar12;
  ulonglong uVar13;
  int iVar14;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  uVar5 = F_0055dcb0();
  uVar5 = F_0055b990(uVar5 GEN_EDX_ARG);
  uVar6 = F_0055dcb0();
  uVar6 = F_0055b9a0(uVar6 GEN_EDX_ARG);
  iVar1 = *(int *)(uVar6 + 4);
  iVar2 = *(int *)(uVar5 + 8);
  iVar3 = *(int *)(iVar2 + 0x20);
  uVar10 = *(undefined4 *)(iVar3 + 0x18c);
  iVar14 = *(int *)(iVar3 + 4);
  uVar7 = *(undefined4 *)(iVar3 + 0x184);
  F_0059ead0(*(undefined * PTR32 *)((int)this + 400) GEN_EDX_ARG,iVar14,0,1);
  F_005623b0(*(undefined * PTR32 *)((int)this + 400) GEN_EDX_ARG,uVar7);
  if (iVar14 == 0) {
    uVar7 = 0;
    if (*(int *)((int)this + 400) != 0) {
      uVar7 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 400) + 0x70)));
    }
    F_0055a080(uVar7 GEN_EDX_ARG,0x1e);
  }
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0x160;
  do {
    if (iVar14 <= (*(int *)(gen_frame + 0xc))) break;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 400) + 0x54))))
              (*(int * PTR32 *)((int)this + 400) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)),
               (uint)((*((byte *)GEN_TOP(((*(int *)(gen_frame + 0x10)) + *(int *)(iVar2 + 0x20)))) & 2) != 0));
    (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
    (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 4;
  } while ((*(int *)(gen_frame + 0x10)) < 0x180);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 400) + 0x70))))(*(int * PTR32 *)((int)this + 400) GEN_EDX_ARG);
  if (*(int *)((int)this + 400) == 0) {
    pvVar9 = (undefined *)0x0;
  }
  else {
    pvVar9 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 400) + 0x70)));
  }
  F_0055a300(pvVar9 GEN_EDX_ARG,(uint)(0 < iVar14));
  F_0042b630(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  F_0055dcb0();
  uVar5 = F_0056a410(iVar14);
  F_0042e430(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,uVar5);
  F_0042e370(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,&REFG(undefined, 0x10c348c));
  F_0055dcb0();
  uVar5 = F_0056a410(uVar10);
  F_0042e370(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,uVar5);
  uVar5 = F_0042a990(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  F_00584110(*(undefined * PTR32 *)((int)this + 0x19c) GEN_EDX_ARG,uVar5);
  iVar3 = *((int *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x188)));
  F_00584110(*(undefined * PTR32 *)((int)this + 0x194) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + iVar3 * 4))));
  iVar1 = *((int *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x10 + (iVar3 / 0x28) * 4)));
  uVar10 = 0x846;
  if (iVar1 == 1) {
    uVar10 = 0x843;
  }
  else if (iVar1 == 2) {
    uVar10 = 0x844;
  }
  else if (iVar1 == 3) {
    uVar10 = 0x845;
  }
  puVar8 = (uint *)F_00ab36c0(uVar10);
  if (puVar8 == (uint *)0x0) {
    pcVar11 = "";
  }
  else {
    pcVar11 = ((char *)GEN_TOP(((*puVar8 & 0xffffff) + (int)puVar8)));
  }
  F_00584110(*(undefined * PTR32 *)((int)this + 0x198) GEN_EDX_ARG,pcVar11);
  pvVar9 = (undefined *)F_0055e2f0(this GEN_EDX_ARG,8);
  F_0059d670(pvVar9 GEN_EDX_ARG,(-(uint)(iVar1 != 0) & 0xffffffac) + 0x65);
  uVar10 = 0;
  if (*(int *)((int)this + 400) != 0) {
    uVar10 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 400) + 0x70)));
  }
  uVar4 = F_0055a030(uVar10 GEN_EDX_ARG);
  sVar12 = *(short *)((int)this + 0x180) - uVar4;
  F_00559f40(*(undefined4 *)((int)this + 0x19c) GEN_EDX_ARG,
               (uint)(ushort)(*(short *)((int)this + 0x182) - sVar12));
  F_00559f40(*(undefined4 *)((int)this + 0x1a0) GEN_EDX_ARG,
               (uint)(ushort)(*(short *)((int)this + 0x184) - sVar12));
  uVar13 = F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return (uint)uVar13;
}

/* ref: Client::UI2::AddonCharaSelectDetail::vf47 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00819b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x819b40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint * puVar1;
  int iVar2;
  char * pcVar3;
  uint uVar4;
  
  if ((((byte)this[0xf9] & 1) != 0) &&
     ((*(int *)(this + 0x1d0) == 0 ||
      ((uVar4 = *((uint *)GEN_TOP((*(int *)(this + 0x1d0) + 0xf4))) >> 0x14 & 0xf, uVar4 != 5 && (uVar4 != 4)))
      ))) {
    puVar1 = *((uint * PTR32 *)GEN_TOP((*(int *)(param_1 + 8) + 0x20)));
    uVar4 = *puVar1;
    if ((uVar4 & 0x10) != 0) {
      *puVar1 = uVar4 & 0xffffffef;
      if (*(undefined * PTR32 *)(this + 0x1d4) != (undefined *)0x0) {
        F_00819560(*(undefined * PTR32 *)(this + 0x1d4) GEN_EDX_FWD,param_1,param_2);
      }
      iVar2 = *(int *)(param_2 + 4);
      pcVar3 = *((char * PTR32 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x160)));
      if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
        F_00584110(*(undefined * PTR32 *)(this + 0x180) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x164))));
        F_00584110(*(undefined * PTR32 *)(this + 0x19c) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x168))));
        F_00584110(*(undefined * PTR32 *)(this + 0x1b8) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x16c))));
        F_00584110(*(undefined * PTR32 *)(this + 0x184) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x170))));
        F_00584110(*(undefined * PTR32 *)(this + 0x1a0) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x174))));
        F_00584110(*(undefined * PTR32 *)(this + 0x1bc) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x178))));
        F_00584110(*(undefined * PTR32 *)(this + 400) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x17c))));
        F_00584110(*(undefined * PTR32 *)(this + 0x1ac) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x180))));
        F_00584110(*(undefined * PTR32 *)(this + 0x1c8) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x184))));
        F_00584110(*(undefined * PTR32 *)(this + 0x18c) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x188))));
        F_00584110(*(undefined * PTR32 *)(this + 0x1a8) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x18c))));
        F_00584110(*(undefined * PTR32 *)(this + 0x1c4) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 400))));
        F_00584110(*(undefined * PTR32 *)(this + 0x188) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x194))));
        F_00584110(*(undefined * PTR32 *)(this + 0x1a4) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x198))));
        F_00584110(*(undefined * PTR32 *)(this + 0x1c0) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x19c))));
        F_00584110(*(undefined * PTR32 *)(this + 0x194) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x1a0))));
        F_00584110(*(undefined * PTR32 *)(this + 0x1b0) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x1a4))));
        F_00584110(*(undefined * PTR32 *)(this + 0x198) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x1a8))));
        F_00584110(*(undefined * PTR32 *)(this + 0x1b4) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x1ac))));
        F_00584110(*(undefined * PTR32 *)(this + 0x1cc) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x1b0))));
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x14))(this GEN_EDX_ARG,0);
        return;
      }
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_ARG,0,0);
      F_00584110(*(undefined * PTR32 *)(this + 0x180) GEN_EDX_ARG,"");
    }
  }
  return;
}

/* ref: Client::UI2::AddonCharaSelectDetail::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00819da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x819da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  char * pcVar1;
  
  if ((((byte)this[0xf9] & 1) != 0) &&
     (pcVar1 = (char *)F_0055aaf0(*(undefined4 *)(this + 0x180) GEN_EDX_FWD), *pcVar1 != '\0')) {
    F_005a89b0(this GEN_EDX_ARG,param_1,1);
    if (*(undefined * PTR32 *)(this + 0x1d4) != (undefined *)0x0) {
      F_005a89b0(*(undefined * PTR32 *)(this + 0x1d4) GEN_EDX_ARG,param_1,1);
    }
  }
  return;
}

/* ref: Client::UI2::AddonCharaSelectWorldServer::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00819df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x819df0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (((byte)this[0xf9] & 1) != 0) {
    F_005a89b0(this GEN_EDX_FWD,param_1,1);
    iVar1 = *(int *)(this + 0x1ac);
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 0xfb) = *(byte *)(iVar1 + 0xfb) | 0x80;
      *(byte *)(iVar1 + 0xf9) = *(byte *)(iVar1 + 0xf9) & 0x7f;
      uVar3 = F_0055dcb0();
      uVar3 = F_0055b990(uVar3 GEN_EDX_ARG);
      iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar3 + 8) + 0x20))) + 0x188)));
      iVar2 = iVar1 / 0x28;
      F_007c30c0(this GEN_EDX_ARG,iVar2,iVar1 % 0x28);
      uVar5 = 0;
      uVar4 = 1;
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + iVar2 * 0x14 + 0x184) + 0x3c))))
                        (*(int * PTR32 *)(this + iVar2 * 0x14 + 0x184) GEN_EDX_ARG);
      F_0059b340(this GEN_EDX_ARG,uVar3,uVar4,uVar5);
    }
  }
  return;
}

/* ref: Client::UI2::AddonCharaSelectWorldServer::vf25 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00819e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x819e90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_FWD,0,0);
  if (((byte)this[0xf9] & 1) != 0) {
    if (-1 < *(int *)(this + 0x1b0)) {
      F_007c2f10(this GEN_EDX_ARG,*(int *)(this + 0x1b0),
                   *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((this + *(int *)(this + 0x1b0) * 0x14 + 0x184))) + 0xc0))));
    }
    iVar1 = *(int *)(this + 0x1ac);
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 0xfb) = *(byte *)(iVar1 + 0xfb) & 0x7f;
      *(byte *)(iVar1 + 0xf9) = *(byte *)(iVar1 + 0xf9) & 0x7f;
    }
    uVar2 = F_0055dcb0();
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),3);
    uVar2 = F_005a2670(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: Client::UI2::AddonCharaSelectWorldServer::vf2 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00819f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x819f20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  uint uVar1;
  int iVar2;
  
  if (((((byte)this[0xf9] & 1) != 0) && (uVar1 = *(uint *)(this + 0xf4) >> 0x14 & 0xf, uVar1 != 5))
     && (uVar1 != 4)) {
    if ((short)param_1 == 0x1f) {
      F_007c2e80(this GEN_EDX_FWD,param_2,*(undefined4 *)(param_4 + 8));
    }
    else {
      if ((short)param_1 == 0x20) {
        iVar2 = *(int *)(this + 0x1b0);
        if (iVar2 < 0) {
          iVar2 = param_2;
        }
        F_007c2e80(this GEN_EDX_ARG,iVar2,*((undefined4 *)GEN_TOP((*(int *)(this + iVar2 * 0x14 + 0x184) + 0xc0))));
        return;
      }
      if ((short)param_1 == 0x21) {
        F_007c30c0(this GEN_EDX_ARG,param_2,*(undefined4 *)(param_4 + 8));
        F_007c2f10(this GEN_EDX_ARG,param_2,*(undefined4 *)(param_4 + 8));
        iVar2 = *(int *)(this + 0x1ac);
        if (iVar2 != 0) {
          *(byte *)(iVar2 + 0xfb) = *(byte *)(iVar2 + 0xfb) & 0x7f;
          *(byte *)(iVar2 + 0xf9) = *(byte *)(iVar2 + 0xf9) & 0x7f;
        }
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_ARG,0,0);
        return;
      }
    }
  }
  return;
}

/* ref: FUN_00819ff0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00819ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x819ff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0055e2f0(this GEN_EDX_FWD,2);
  *(uint *)((int)this + 0x180) = uVar1;
  uVar1 = F_0055e2f0(this GEN_EDX_ARG,4);
  if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1 GEN_EDX_ARG), uVar1 == 0)) ||
     (uVar2 = F_005613a0(uVar1 GEN_EDX_ARG), uVar2 != 9)) {
    uVar1 = 0;
  }
  *(uint *)((int)this + 0x184) = uVar1;
  uVar1 = F_0055e340(this GEN_EDX_ARG,6);
  *(uint *)((int)this + 0x188) = uVar1;
  uVar1 = F_0055e340(this GEN_EDX_ARG,7);
  *(uint *)((int)this + 0x18c) = uVar1;
  uVar1 = F_0055e2f0(this GEN_EDX_ARG,9);
  *(uint *)((int)this + 0x194) = uVar1;
  uVar1 = F_0055e2f0(this GEN_EDX_ARG,0xb);
  if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1 GEN_EDX_ARG), uVar1 == 0)) ||
     (uVar2 = F_005613a0(uVar1 GEN_EDX_ARG), uVar2 != 9)) {
    uVar1 = 0;
  }
  *(uint *)((int)this + 0x198) = uVar1;
  uVar1 = F_0055e340(this GEN_EDX_ARG,0xd);
  *(uint *)((int)this + 0x19c) = uVar1;
  uVar1 = F_0055e340(this GEN_EDX_ARG,0xe);
  *(uint *)((int)this + 0x1a0) = uVar1;
  uVar1 = F_0059d6a0(this GEN_EDX_ARG,0x11,1,0);
  return uVar1;
}

/* ref: FUN_0081a0c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081a0c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x81a0c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint * puVar7;
  undefined * this_00;
  uint uVar8;
  int iVar9;
  uint * puVar10;
  int local_14;
  int local_c;
  int local_8;
  
  uVar4 = param_1;
  uVar5 = F_0055dcb0();
  uVar5 = F_0055b990(uVar5 GEN_EDX_ARG);
  iVar9 = 0;
  if (uVar5 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(uVar5 + 8);
  }
  iVar2 = param_1 * 0x28 + 8;
  puVar7 = ((uint *)GEN_TOP((*(int *)(iVar6 + 0x20) + 8 + iVar2 * 4)));
  local_8 = 0;
  param_1 = 0;
  local_c = 0;
  puVar10 = ((uint *)GEN_TOP((*(int *)(iVar6 + 0x20) + 4 + iVar2 * 4)));
  local_14 = 10;
  do {
    iVar9 = iVar9 + (puVar7[-2] & 0xf);
    local_c = local_c + (*puVar10 & 0xf);
    param_1 = param_1 + (*puVar7 & 0xf);
    local_8 = local_8 + (puVar7[1] & 0xf);
    puVar10 = puVar10 + 4;
    puVar7 = puVar7 + 4;
    local_14 = local_14 - 1;
  } while (local_14 != 0);
  uVar5 = F_00560910(iVar9 + local_8 + param_1 + local_c);
  this_00 = (undefined *)F_00559ba0(*(undefined4 *)((int)this + uVar4 * 0x14 + 0x188) GEN_EDX_ARG);
  F_00584110(this_00 GEN_EDX_ARG,uVar5);
  uVar5 = *((uint *)GEN_TOP((*(int *)(iVar6 + 0x20) + 8 + uVar4 * 4)));
  iVar9 = *((int *)GEN_TOP((*(int *)(iVar6 + 0x20) + 0x18 + uVar4 * 4)));
  piVar1 = ((int *)GEN_TOP(((int)this + (uVar4 * 5 + 100) * 4)));
  if ((*piVar1 != iVar9) ||
     (piVar3 = *(int * PTR32 *)((int)this + uVar4 * 0x14 + 0x184),
     uVar8 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x7c))(piVar3 GEN_EDX_ARG), uVar8 != uVar5)) {
    *piVar1 = iVar9;
    F_0059d670(*(undefined * PTR32 *)((int)this + uVar4 * 0x14 + 0x180) GEN_EDX_ARG,
                 *(undefined4 *)(&REFG(undefined, 0x10c34a4) + uVar4 * 4));
    F_0059ead0(*(undefined * PTR32 *)((int)this + uVar4 * 0x14 + 0x184) GEN_EDX_ARG,uVar5,0,1);
    uVar8 = F_0059b3f0(this GEN_EDX_ARG,1,0);
    if (*(int *)((int)this + 0x1b0) == -1) {
      iVar9 = *((int *)GEN_TOP((*(int *)(iVar6 + 0x20) + 0x188)));
      uVar8 = iVar9 / 0x28;
      if (uVar4 == uVar8) {
        uVar8 = F_007c30c0(this GEN_EDX_ARG,uVar4,iVar9 % 0x28);
      }
    }
  }
  return uVar8;
}

/* ref: Client::UI2::AddonCharaMake::vf37 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_0081a220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x81a220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(this + 0x180);
  *(undefined4 *)(iVar1 + 0x398) = 0;
  *(undefined4 *)(iVar1 + 0x39c) = 0;
  *(undefined4 *)(iVar1 + 0x3a0) = 0;
  *(undefined4 *)(iVar1 + 0x3a4) = 0;
  *(undefined4 *)(iVar1 + 0x3a8) = 0;
  *(undefined4 *)(iVar1 + 0x3ac) = 0;
  *(undefined4 *)(iVar1 + 0x3b0) = 0;
  *(undefined4 *)(iVar1 + 0x3b4) = 0;
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x180) + 0x388))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x180) + 0x38c))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x180) + 0x390))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x180) + 0x394))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x198) + 0x1a4))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x184) + 0x180))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x188) + 0x180))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x18c) + 0x180))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)(this + 400) + 0x180))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x194) + 0x180))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x198) + 0x180))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x19c) + 0x180))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x180))) = 0;
  uVar2 = F_005b0510((undefined *)this GEN_EDX_FWD);
  return uVar2;
}

/* ref: Client::UI2::AddonCharaMake::vf44 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081a300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81a300u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_FWD,0,0);
  uVar9 = F_0055dcb0();
  uVar9 = F_0057f860(*(undefined * PTR32 *)(uVar9 + 0x14) GEN_EDX_ARG,"_CharaMakeProgress");
  *(uint *)(this + 0x180) = uVar9;
  uVar9 = F_0055dcb0();
  uVar9 = F_0057f860(*(undefined * PTR32 *)(uVar9 + 0x14) GEN_EDX_ARG,"_CharaMakeRaceGender");
  *(uint *)(this + 0x184) = uVar9;
  uVar9 = F_0055dcb0();
  uVar9 = F_0057f860(*(undefined * PTR32 *)(uVar9 + 0x14) GEN_EDX_ARG,"_CharaMakeTribe");
  *(uint *)(this + 0x188) = uVar9;
  uVar9 = F_0055dcb0();
  uVar9 = F_0057f860(*(undefined * PTR32 *)(uVar9 + 0x14) GEN_EDX_ARG,"_CharaMakeFeature");
  *(uint *)(this + 0x18c) = uVar9;
  uVar9 = F_0055dcb0();
  uVar9 = F_0057f860(*(undefined * PTR32 *)(uVar9 + 0x14) GEN_EDX_ARG,"_CharaMakeBirthDay");
  *(uint *)(this + 400) = uVar9;
  uVar9 = F_0055dcb0();
  uVar9 = F_0057f860(*(undefined * PTR32 *)(uVar9 + 0x14) GEN_EDX_ARG,"_CharaMakeGuardian");
  *(uint *)(this + 0x194) = uVar9;
  uVar9 = F_0055dcb0();
  uVar9 = F_0057f860(*(undefined * PTR32 *)(uVar9 + 0x14) GEN_EDX_ARG,"_CharaMakeClassSelector");
  *(uint *)(this + 0x198) = uVar9;
  uVar9 = F_0055dcb0();
  uVar9 = F_0057f860(*(undefined * PTR32 *)(uVar9 + 0x14) GEN_EDX_ARG,"_CharaMakeWorldServer");
  *(uint *)(this + 0x19c) = uVar9;
  uVar9 = F_0055dcb0();
  uVar9 = F_0057f860(*(undefined * PTR32 *)(uVar9 + 0x14) GEN_EDX_ARG,"_CharaMakeCharaName");
  *(uint *)(this + 0x1a0) = uVar9;
  uVar9 = F_0055dcb0();
  uVar9 = F_0057f860(*(undefined * PTR32 *)(uVar9 + 0x14) GEN_EDX_ARG,"_CharaMakeHelp");
  *(uint *)(this + 0x1a4) = uVar9;
  uVar9 = F_0055dcb0();
  uVar9 = F_0057f860(*(undefined * PTR32 *)(uVar9 + 0x14) GEN_EDX_ARG,"_CharaMakeBgSelector");
  *(uint *)(this + 0x1a8) = uVar9;
  uVar9 = F_0055dcb0();
  uVar9 = F_0057f860(*(undefined * PTR32 *)(uVar9 + 0x14) GEN_EDX_ARG,"_CharaMakePose");
  *(uint *)(this + 0x1ac) = uVar9;
  uVar9 = F_0055dcb0();
  uVar9 = F_0057f860(*(undefined * PTR32 *)(uVar9 + 0x14) GEN_EDX_ARG,"_CharaMakeCity");
  *(uint *)(this + 0x1b0) = uVar9;
  uVar9 = F_0055dcb0();
  uVar9 = F_0057f860(*(undefined * PTR32 *)(uVar9 + 0x14) GEN_EDX_ARG,"_CharaMakeReturn");
  uVar1 = *(undefined4 *)(this + 0x1a0);
  uVar2 = *(undefined4 *)(this + 0x19c);
  uVar3 = *(undefined4 *)(this + 0x198);
  *(uint *)(this + 0x1b4) = uVar9;
  uVar4 = *(undefined4 *)(this + 0x194);
  uVar5 = *(undefined4 *)(this + 400);
  uVar6 = *(undefined4 *)(this + 0x18c);
  uVar7 = *(undefined4 *)(this + 0x188);
  iVar8 = *(int *)(this + 0x180);
  *(undefined4 *)(iVar8 + 0x398) = *(undefined4 *)(this + 0x184);
  *(undefined4 *)(iVar8 + 0x39c) = uVar7;
  *(undefined4 *)(iVar8 + 0x3a0) = uVar6;
  *(undefined4 *)(iVar8 + 0x3ac) = uVar3;
  *(undefined4 *)(iVar8 + 0x3a4) = uVar5;
  *(undefined4 *)(iVar8 + 0x3b0) = uVar2;
  *(undefined4 *)(iVar8 + 0x3b4) = uVar1;
  *(undefined4 *)(iVar8 + 0x3a8) = uVar4;
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x180) + 0x388))) = *(undefined4 *)(this + 0x1a4);
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x180) + 0x38c))) = *(undefined4 *)(this + 0x1a8);
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x180) + 0x390))) = *(undefined4 *)(this + 0x1ac);
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x180) + 0x394))) = *(undefined4 *)(this + 0x1b4);
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x198) + 0x1a4))) = *(undefined4 *)(this + 0x1b0);
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x184) + 0x180))) = *(undefined4 *)(this + 0x180);
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x188) + 0x180))) = *(undefined4 *)(this + 0x180);
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x18c) + 0x180))) = *(undefined4 *)(this + 0x180);
  *((undefined4 *)GEN_TOP((*(int *)(this + 400) + 0x180))) = *(undefined4 *)(this + 0x180);
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x194) + 0x180))) = *(undefined4 *)(this + 0x180);
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x198) + 0x180))) = *(undefined4 *)(this + 0x180);
  uVar9 = *(uint *)(this + 0x180);
  *((uint *)GEN_TOP((*(int *)(this + 0x19c) + 0x180))) = uVar9;
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x180))) = *(undefined4 *)(this + 0x180);
  return uVar9;
}

/* ref: Client::UI2::AddonCharaMakeReturn::vf34 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081a600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81a600u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(this + 0x184) != 0) {
    uVar1 = F_0055a350(*((undefined4 *)GEN_TOP((*(int *)(this + 0x184) + 0x70))) GEN_EDX_FWD);
    if ((char)uVar1 != '\0') {
      (*(undefined4 *)(gen_frame + 0x4)) = 3;
      (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
      F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
      uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    }
  }
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeCharaName::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_0081a650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x81a650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  if (((byte)this[0xf9] & 1) != 0) {
    uVar1 = F_0055dcb0();
    *(undefined1 *)(uVar1 + 0x1fa) = 1;
    F_007c3bb0(this GEN_EDX_ARG);
    F_005a89b0(this GEN_EDX_ARG,param_1,1);
    F_00568380(*(undefined * PTR32 *)(this + 0x90) GEN_EDX_ARG,0xc,0,this,0,0);
    F_00568380(*(undefined * PTR32 *)(this + 0x90) GEN_EDX_ARG,0xf,0,this,0,0);
  }
  return;
}

/* ref: Client::UI2::AddonCharaMakeCharaName::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081a6b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81a6b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_0055dcb0();
  *(undefined1 *)(uVar1 + 0x1fa) = 0;
  if (this[0x2ad] == (undefined1)0x0) {
    uVar1 = F_0055dcb0();
    F_00596b90((undefined *)(uVar1 + 0xe0) GEN_EDX_ARG,(uint)(byte)this[0x13a],1);
  }
  F_005b0610(this GEN_EDX_ARG,param_1,1,param_2);
  F_005840a0(*(undefined * PTR32 *)(this + 0x90) GEN_EDX_ARG,0xc,0,this,0);
  uVar1 = F_005840a0(*(undefined * PTR32 *)(this + 0x90) GEN_EDX_ARG,0xf,0,this,0);
  return uVar1;
}

/* ref: FUN_0081a730 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081a730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x81a730u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  F_0042e430((undefined *)((int)this + 0x188) GEN_EDX_FWD,param_2);
  F_007c3bb0(this GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_0081a760 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081a760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x81a760u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  F_0042e430((undefined *)((int)this + 0x1dc) GEN_EDX_FWD,param_2);
  F_007c3bb0(this GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_0081a790 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081a790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x81a790u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  F_0042e430((undefined *)((int)this + 0x230) GEN_EDX_FWD,param_2);
  F_007c3bb0(this GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_0081a7c0 */
GEN_LIB GEN_FRAME uint F_0081a7c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined * param_4, unsigned int gen_a3), GEN_P(undefined * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x81a7c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined * param_5 = (undefined *)(uintptr_t)gen_a4;)
  __declspec(align(16)) undefined1 gen_frame[0x1a0];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint * puVar9;
  undefined1 * puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  char * pcVar14;
  uint uVar15;
  char * pcVar16;
  ulonglong uVar17;
  
  (*(uint *)(gen_frame + 0x198)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x19c);
  (*(uint *)(gen_frame + 0x44)) = 100;
  uVar17 = F_0046ff40();
  (*(uint *)(gen_frame + 0x24)) = (uint)uVar17 & 0xffff;
  if (param_1 != 3) {
    (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x24)) * 4;
    (*(uint *)(gen_frame + 0x28)) = 0;
    (*(uint *)(gen_frame + 0x2c)) = 0;
    (*(uint *)(gen_frame + 0x30)) = 0;
    (*(uint *)(gen_frame + 0x18)) = 0;
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(uint *)(gen_frame + 0x20)) = 0;
    pcVar14 = "";
    pcVar16 = "";
    do {
      uVar6 = (*(uint *)(gen_frame + 0x28));
      uVar4 = (*(uint *)(gen_frame + 0x18));
      uVar2 = (*(uint *)(gen_frame + 0x24)) << 0xb ^ (*(uint *)(gen_frame + 0x24));
      (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x2c));
      (*(uint *)(gen_frame + 0x24)) = uVar6;
      uVar2 = uVar2 ^ ((*(uint *)(gen_frame + 0x30)) >> 0xb ^ uVar2) >> 8 ^ (*(uint *)(gen_frame + 0x30));
      (*(uint *)(gen_frame + 0x2c)) = (*(uint *)(gen_frame + 0x30));
      puVar9 = (uint *)F_00ab3690(uVar2 % (*(uint *)(gen_frame + 0x44)));
      uVar6 = (*(uint *)(gen_frame + 0x14)) << 0xb ^ (*(uint *)(gen_frame + 0x14));
      (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x1c));
      (*(uint *)(gen_frame + 0x14)) = uVar4;
      uVar6 = uVar6 ^ ((*(uint *)(gen_frame + 0x20)) >> 0xb ^ uVar6) >> 8 ^ (*(uint *)(gen_frame + 0x20));
      (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x20));
      uVar4 = F_00ab3690(uVar6 % (*(uint *)(gen_frame + 0x44)));
      if ((puVar9 == (uint *)0x0) || (uVar4 == 0)) goto LAB_0081b0a1;
      switch((unsigned int)(uintptr_t)(param_1)) {
      case 1: ;
        if (param_2 == 0) {
          if (*pcVar14 == '\0') {
            if (param_3 != 0) {
              puVar9 = puVar9 + 1;
            }
            pcVar14 = ((char *)GEN_TOP(((*puVar9 & 0xffffff) + (int)puVar9)));
          }
          if (*pcVar16 == '\0') {
            puVar9 = (uint *)(uVar4 + 8);
LAB_0081b015: ;
            pcVar16 = ((char *)GEN_TOP(((*puVar9 & 0xffffff) + (int)puVar9)));
          }
        }
        else {
          if (*pcVar14 == '\0') {
            if (param_3 == 0) {
              puVar9 = puVar9 + 3;
            }
            else {
              puVar9 = puVar9 + 4;
            }
            pcVar14 = ((char *)GEN_TOP(((*puVar9 & 0xffffff) + (int)puVar9)));
          }
          if (*pcVar16 == '\0') {
            puVar9 = (uint *)(uVar4 + 0x14);
            goto LAB_0081b015;
          }
        }
        break;
      case 2: ;
        if (param_2 == 0) {
          if (*pcVar14 == '\0') {
            if (param_3 == 0) {
              puVar9 = puVar9 + 6;
            }
            else {
              puVar9 = puVar9 + 7;
            }
            pcVar14 = ((char *)GEN_TOP(((*puVar9 & 0xffffff) + (int)puVar9)));
          }
          if (*pcVar16 == '\0') {
            puVar9 = (uint *)(uVar4 + 0x20);
            goto LAB_0081b015;
          }
        }
        else {
          if (*pcVar14 == '\0') {
            if (param_3 == 0) {
              puVar9 = puVar9 + 6;
            }
            else {
              puVar9 = puVar9 + 7;
            }
            pcVar14 = ((char *)GEN_TOP(((*puVar9 & 0xffffff) + (int)puVar9)));
          }
          if (*pcVar16 == '\0') {
            puVar9 = (uint *)(uVar4 + 0x24);
            goto LAB_0081b015;
          }
        }
        break;
      case 4: ;
        if (param_2 == 0) {
          if (*pcVar14 == '\0') {
            if (param_3 == 0) {
              puVar9 = puVar9 + 10;
            }
            else {
              puVar9 = puVar9 + 0xb;
            }
            pcVar14 = ((char *)GEN_TOP(((*puVar9 & 0xffffff) + (int)puVar9)));
          }
          if (*pcVar16 == '\0') {
            if (param_3 == 0) {
              puVar9 = (uint *)(uVar4 + 0x30);
            }
            else {
              puVar9 = (uint *)(uVar4 + 0x34);
            }
            goto LAB_0081b015;
          }
        }
        else {
          if (*pcVar14 == '\0') {
            if (param_3 == 0) {
              puVar9 = puVar9 + 0xe;
            }
            else {
              puVar9 = puVar9 + 0xf;
            }
            pcVar14 = ((char *)GEN_TOP(((*puVar9 & 0xffffff) + (int)puVar9)));
          }
          if (*pcVar16 == '\0') {
            puVar9 = (uint *)(uVar4 + 0x40);
            goto LAB_0081b015;
          }
        }
        break;
      case 5: ;
        if (param_2 == 0) {
          if (*pcVar14 == '\0') {
            if (param_3 == 0) {
              puVar9 = puVar9 + 0x18;
            }
            else {
              puVar9 = puVar9 + 0x1a;
            }
            pcVar14 = ((char *)GEN_TOP(((*puVar9 & 0xffffff) + (int)puVar9)));
          }
          if (*pcVar16 == '\0') {
            if (param_3 == 0) {
              puVar9 = (uint *)(uVar4 + 100);
            }
            else {
              puVar9 = (uint *)(uVar4 + 0x6c);
            }
            goto LAB_0081b015;
          }
        }
        else {
          if (*pcVar14 == '\0') {
            pcVar14 = ((char *)GEN_TOP(((int)puVar9 + (puVar9[0x1c] & 0xffffff) + 0x70)));
          }
          if (*pcVar16 == '\0') {
            if (param_3 == 0) {
              puVar9 = (uint *)(uVar4 + 0x74);
            }
            else {
              puVar9 = (uint *)(uVar4 + 0x78);
            }
            goto LAB_0081b015;
          }
        }
      }
      if ((*pcVar14 != '\0') && (*pcVar16 != '\0')) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x9c)) GEN_EDX_ARG,pcVar14,REFG(undefined4, 0x108cc50));
        F_0042e370(((undefined1 *)(gen_frame + 0x9c)) GEN_EDX_ARG,pcVar16);
        uVar4 = F_0042b790(((undefined1 *)(gen_frame + 0x9c)) GEN_EDX_ARG);
        if (uVar4 < 0x15) {
          F_0042c880(((undefined1 *)(gen_frame + 0x9c)) GEN_EDX_ARG);
          break;
        }
        pcVar16 = "";
        F_0042c880(((undefined1 *)(gen_frame + 0x9c)) GEN_EDX_ARG);
      }
      (*(uint *)(gen_frame + 0x44)) = (*(uint *)(gen_frame + 0x44)) - 1;
      (*(uint *)(gen_frame + 0x20)) = uVar6;
      (*(uint *)(gen_frame + 0x30)) = uVar2;
    } while ((*(uint *)(gen_frame + 0x44)) != 0);
    F_0042e430(param_4 GEN_EDX_ARG,pcVar14);
    uVar4 = F_0042e430(param_5 GEN_EDX_ARG,pcVar16);
LAB_0081b0a1: ;
    F_00c47745((*(uint *)(gen_frame + 0x198)) ^ (uint)(uint)(gen_frame + 0x19c) GEN_EDX_ARG);
    return uVar4;
  }
  (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x24)) * 3;
  (*(uint *)(gen_frame + 0x18)) = 0;
  (*(uint *)(gen_frame + 0x1c)) = 0;
  (*(uint *)(gen_frame + 0x28)) = 0;
  (*(uint *)(gen_frame + 0x2c)) = 0;
  (*(uint *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  F_0042b630(((undefined1 *)(gen_frame + 0x144)) GEN_EDX_ARG);
  F_0042b630(((undefined1 *)(gen_frame + 0x9c)) GEN_EDX_ARG);
  F_0042b630(((undefined1 *)(gen_frame + 0xf0)) GEN_EDX_ARG);
  uVar6 = 0;
  uVar2 = 0;
  uVar4 = 0;
  (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x24));
  (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x24)) * 2;
  do {
    uVar15 = uVar4;
    uVar13 = uVar2;
    uVar12 = uVar6;
    uVar4 = (*(uint *)(gen_frame + 0x24));
    uVar2 = (*(uint *)(gen_frame + 0x14)) << 0xb ^ (*(uint *)(gen_frame + 0x14));
    (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x18));
    uVar2 = uVar13 ^ (uVar13 >> 0xb ^ uVar2) >> 8 ^ uVar2;
    (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x1c));
    uVar3 = F_00ab3690(uVar2 % (*(uint *)(gen_frame + 0x44)));
    (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x28));
    uVar4 = uVar4 << 0xb ^ uVar4;
    uVar4 = uVar15 ^ (uVar15 >> 0xb ^ uVar4) >> 8 ^ uVar4;
    (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x2c));
    uVar5 = F_00ab3690(uVar4 % (*(uint *)(gen_frame + 0x44)));
    uVar6 = (*(uint *)(gen_frame + 0x0)) << 0xb ^ (*(uint *)(gen_frame + 0x0));
    (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x4));
    uVar6 = uVar12 ^ (uVar12 >> 0xb ^ uVar6) >> 8 ^ uVar6;
    (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x8));
    uVar7 = F_00ab3690(uVar6 % (*(uint *)(gen_frame + 0x44)));
    if (((uVar3 == 0) || (uVar5 == 0)) || (uVar7 == 0)) break;
    uVar8 = F_0042b790(((undefined1 *)(gen_frame + 0x144)) GEN_EDX_ARG);
    if (param_2 == 0) {
      if (param_3 == 0) {
        if (uVar8 == 0) {
          F_0042e430(((undefined1 *)(gen_frame + 0x144)) GEN_EDX_ARG,(*(uint *)(uVar3 + 0x44) & 0xffffff) + uVar3 + 0x44);
        }
        uVar3 = F_0042b790(((undefined1 *)(gen_frame + 0xf0)) GEN_EDX_ARG);
        if (uVar3 == 0) {
          F_0042e430(((undefined1 *)(gen_frame + 0xf0)) GEN_EDX_ARG,(*(uint *)(uVar7 + 0x4c) & 0xffffff) + uVar7 + 0x4c);
        }
        uVar3 = F_0042b790(((undefined1 *)(gen_frame + 0x9c)) GEN_EDX_ARG);
        if (uVar3 == 0) {
          iVar11 = (*(uint *)(uVar5 + 0x48) & 0xffffff) + uVar5 + 0x48;
          puVar10 = ((undefined1 *)(gen_frame + 0x9c));
          goto LAB_0081abda;
        }
        goto LAB_0081abdf;
      }
      if (uVar8 == 0) {
        F_0042e430(((undefined1 *)(gen_frame + 0x144)) GEN_EDX_ARG,(*(uint *)(uVar3 + 0x58) & 0xffffff) + uVar3 + 0x58);
      }
      uVar3 = F_0042b790(((undefined1 *)(gen_frame + 0xf0)) GEN_EDX_ARG);
      if (uVar3 == 0) {
        F_0042e430(((undefined1 *)(gen_frame + 0xf0)) GEN_EDX_ARG,(*(uint *)(uVar7 + 0x5c) & 0xffffff) + uVar7 + 0x5c);
      }
      uVar3 = F_0042b790(((undefined1 *)(gen_frame + 0x144)) GEN_EDX_ARG);
      if ((uVar3 == 0) || (uVar3 = F_0042b790(((undefined1 *)(gen_frame + 0xf0)) GEN_EDX_ARG), uVar3 == 0)) goto LAB_0081ace2;
      uVar4 = F_0042cd30(((undefined1 *)(gen_frame + 0x144)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x48)),((undefined1 *)(gen_frame + 0xf0)));
      F_0042ccf0(param_4 GEN_EDX_ARG,uVar4);
      F_0042c880(((undefined1 *)(gen_frame + 0x48)) GEN_EDX_ARG);
      F_0042e360(param_4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xf0)));
      puVar10 = ((undefined1 *)(gen_frame + 0x144));
LAB_0081ac56: ;
      uVar4 = F_0042cd30(puVar10 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x48)),((undefined1 *)(gen_frame + 0xf0)));
      F_0042ccf0(param_5 GEN_EDX_ARG,uVar4);
      F_0042c880(((undefined1 *)(gen_frame + 0x48)) GEN_EDX_ARG);
      break;
    }
    if (param_3 == 0) {
      if (uVar8 == 0) {
        F_0042e430(((undefined1 *)(gen_frame + 0x144)) GEN_EDX_ARG,(*(uint *)(uVar3 + 0x50) & 0xffffff) + uVar3 + 0x50);
        uVar3 = F_0042b790(((undefined1 *)(gen_frame + 0x144)) GEN_EDX_ARG);
        if (((uVar3 != 0) && (uVar3 = F_0042b790(((undefined1 *)(gen_frame + 0x9c)) GEN_EDX_ARG), uVar3 != 0)) &&
           (bVar1 = F_0042b660(((undefined1 *)(gen_frame + 0x144)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x9c))), bVar1 != 0)) {
          F_0042aca0(((undefined1 *)(gen_frame + 0x144)) GEN_EDX_ARG);
        }
      }
      uVar3 = F_0042b790(((undefined1 *)(gen_frame + 0x9c)) GEN_EDX_ARG);
      if (uVar3 == 0) {
        F_0042e430(((undefined1 *)(gen_frame + 0x9c)) GEN_EDX_ARG,(*(uint *)(uVar5 + 0x50) & 0xffffff) + uVar5 + 0x50);
        uVar3 = F_0042b790(((undefined1 *)(gen_frame + 0x144)) GEN_EDX_ARG);
        if (((uVar3 != 0) && (uVar3 = F_0042b790(((undefined1 *)(gen_frame + 0x9c)) GEN_EDX_ARG), uVar3 != 0)) &&
           (bVar1 = F_0042b660(((undefined1 *)(gen_frame + 0x144)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x9c))), bVar1 != 0)) {
          F_0042aca0(((undefined1 *)(gen_frame + 0x9c)) GEN_EDX_ARG);
        }
      }
      uVar3 = F_0042b790(((undefined1 *)(gen_frame + 0xf0)) GEN_EDX_ARG);
      if (uVar3 == 0) {
        iVar11 = (*(uint *)(uVar7 + 0x54) & 0xffffff) + uVar7 + 0x54;
        puVar10 = ((undefined1 *)(gen_frame + 0xf0));
LAB_0081abda: ;
        F_0042e430(puVar10 GEN_EDX_ARG,iVar11);
      }
LAB_0081abdf: ;
      uVar3 = F_0042b790(((undefined1 *)(gen_frame + 0x144)) GEN_EDX_ARG);
      if (((uVar3 != 0) && (uVar3 = F_0042b790(((undefined1 *)(gen_frame + 0xf0)) GEN_EDX_ARG), uVar3 != 0)) &&
         (uVar3 = F_0042b790(((undefined1 *)(gen_frame + 0x9c)) GEN_EDX_ARG), uVar3 != 0)) {
        uVar4 = F_0042cd30(((undefined1 *)(gen_frame + 0x144)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x48)),((undefined1 *)(gen_frame + 0xf0)));
        F_0042ccf0(param_4 GEN_EDX_ARG,uVar4);
        F_0042c880(((undefined1 *)(gen_frame + 0x48)) GEN_EDX_ARG);
        puVar10 = ((undefined1 *)(gen_frame + 0x9c));
        goto LAB_0081ac56;
      }
    }
    else {
      if (uVar8 == 0) {
        F_0042e430(((undefined1 *)(gen_frame + 0x144)) GEN_EDX_ARG,(*(uint *)(uVar3 + 0x58) & 0xffffff) + uVar3 + 0x58);
      }
      uVar3 = F_0042b790(((undefined1 *)(gen_frame + 0xf0)) GEN_EDX_ARG);
      if (uVar3 == 0) {
        F_0042e430(((undefined1 *)(gen_frame + 0xf0)) GEN_EDX_ARG,(*(uint *)(uVar7 + 0x5c) & 0xffffff) + uVar7 + 0x5c);
      }
      uVar3 = F_0042b790(((undefined1 *)(gen_frame + 0x144)) GEN_EDX_ARG);
      if ((uVar3 != 0) && (uVar3 = F_0042b790(((undefined1 *)(gen_frame + 0xf0)) GEN_EDX_ARG), uVar3 != 0)) {
        uVar4 = F_0042cd30(((undefined1 *)(gen_frame + 0x144)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x48)),((undefined1 *)(gen_frame + 0xf0)));
        F_0042ccf0(param_5 GEN_EDX_ARG,uVar4);
        F_0042c880(((undefined1 *)(gen_frame + 0x48)) GEN_EDX_ARG);
        F_0042ccf0(param_4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x144)));
        uVar4 = F_0042b820(((undefined1 *)(gen_frame + 0x144)) GEN_EDX_ARG);
        F_0042e360(param_4 GEN_EDX_ARG,uVar4);
        F_0042e360(param_4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xf0)));
        break;
      }
    }
LAB_0081ace2: ;
    (*(uint *)(gen_frame + 0x44)) = (*(uint *)(gen_frame + 0x44)) - 1;
    (*(uint *)(gen_frame + 0x8)) = uVar12;
    (*(uint *)(gen_frame + 0x1c)) = uVar13;
    (*(uint *)(gen_frame + 0x2c)) = uVar15;
  } while ((*(uint *)(gen_frame + 0x44)) != 0);
  F_0042c880(((undefined1 *)(gen_frame + 0xf0)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x9c)) GEN_EDX_ARG);
  uVar17 = F_0042c880(((undefined1 *)(gen_frame + 0x144)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x198)) ^ (uint)(uint)(gen_frame + 0x19c) GEN_EDX_ARG);
  return (uint)uVar17;
}

/* ref: FUN_0081b0d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081b0d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x81b0d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = 0;
  piVar3 = (int *)((int)this + 0x180);
  while ((*piVar3 == 0 || (*(char *)(*piVar3 + 0x88) == '\0'))) {
    iVar1 = iVar1 + 1;
    piVar3 = piVar3 + 1;
    if (4 < iVar1) {
LAB_0081b119: ;
      iVar1 = *(int *)((int)this + iVar4 * 4 + 0x180);
      uVar2 = 0;
      if ((iVar1 != 0) && (uVar2 = F_0055a350(*(undefined4 *)(iVar1 + 0x70) GEN_EDX_FWD), (char)uVar2 != '\0')
         ) {
        uVar2 = F_007c4330(this GEN_EDX_ARG,iVar4);
      }
      return uVar2;
    }
  }
  if ((char)param_1 == '\0') {
    iVar4 = iVar1 - 1;
    if (iVar4 < 0) {
      iVar4 = 4;
    }
  }
  else {
    iVar4 = iVar1 + 1;
    if (4 < iVar4) {
      iVar4 = 0;
    }
  }
  goto LAB_0081b119;
}

/* ref: FUN_0081b140 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081b140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x81b140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x194) != 0) {
    uVar1 = F_0055a2d0(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x194) + 0x70))) GEN_EDX_FWD);
    if ((char)uVar1 != '\0') {
      (*(undefined4 *)(gen_frame + 0x4)) = 3;
      (*(undefined4 *)(gen_frame + 0x8)) = 0xfffffff4;
      F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x4)));
      uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    }
  }
  return uVar1;
}

/* ref: FUN_0081b190 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_0081b190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x81b190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined4 uVar2;
  undefined1 * this_00;
  int iVar3;
  
  this_00 = (gen_frame + 0x1c);
  if (*(int *)((int)this + 0x198) != 0) {
    uVar1 = F_0055a350(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x198) + 0x70))) GEN_EDX_FWD);
    if ((char)uVar1 != '\0') {
      iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0x198) + 0x84)));
      if (iVar3 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(iVar3 + 0x70);
      }
      uVar1 = F_0055a2d0(uVar2 GEN_EDX_ARG);
      if ((char)uVar1 != '\0') {
        if (iVar3 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined4 *)(iVar3 + 0x70);
        }
        uVar1 = F_0055a350(uVar2 GEN_EDX_ARG);
        if ((char)uVar1 != '\0') {
          *(uint *)((int)this + 0x1ac) = *(uint *)((int)this + 0x1ac) ^ 1;
          (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)((int)this + 0x1ac);
          (*(undefined4 *)(gen_frame + 0xc)) = 3;
          (*(undefined4 *)(gen_frame + 0x14)) = 3;
          (*(undefined4 *)(gen_frame + 0x10)) = 0xffffffee;
          F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
          F_0059caa0(*(undefined * PTR32 *)((int)this + 0x198) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x1ac));
          iVar3 = 1;
          do {
            this_00 = this_00 - 8;
            F_005a2670(this_00 GEN_EDX_ARG);
            iVar3 = iVar3 - 1;
          } while (-1 < iVar3);
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: Client::UI2::AddonCharaMakePose::vf2 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_0081b260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x81b260u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  uint uVar2;
  
  if ((short)param_1 == 0x17) {
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 6: ;
    case 7: ;
      if (((*param_3 == 0) || (uVar1 = F_00559c20(*param_3 GEN_EDX_FWD), uVar1 == 0)) ||
         (uVar2 = F_005613a0(uVar1 GEN_EDX_ARG), uVar2 != 4)) {
        uVar1 = 0;
      }
      F_007c45d0(this GEN_EDX_ARG,uVar1);
      return;
    case 10: ;
    case 0xb: ;
    case 0xc: ;
      if (((*param_3 == 0) || (uVar1 = F_00559c20(*param_3 GEN_EDX_ARG), uVar1 == 0)) ||
         (uVar2 = F_005613a0(uVar1 GEN_EDX_ARG), uVar2 != 4)) {
        uVar1 = 0;
      }
      F_007c4630(this GEN_EDX_ARG,uVar1);
    case 8: ;
    case 9: ;
    }
  }
  return;
}

/* ref: FUN_0081b300 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_0081b300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x81b300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint uVar2;
  int * piVar3;
  undefined1 * this_00;
  uint uVar4;
  int iVar5;
  
  this_00 = (gen_frame + 0x1c);
  if ((*(byte *)((int)this + 0xf9) & 1) != 0) {
    uVar4 = 0;
    uVar1 = 0;
    piVar3 = (int *)((int)this + 0x180);
    do {
      if ((*piVar3 != 0) && (*(char *)(*piVar3 + 0x88) != '\0')) {
        uVar4 = uVar1 + 1;
        break;
      }
      uVar1 = uVar1 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar1 < 3);
    uVar1 = 0;
    while( true ) {
      if (2 < uVar4) {
        uVar4 = 0;
      }
      iVar5 = *(int *)((int)this + uVar4 * 4 + 0x180);
      if ((iVar5 != 0) && (uVar2 = F_0055a2d0(*(undefined4 *)(iVar5 + 0x70) GEN_EDX_FWD), (char)uVar2 != '\0')
         ) break;
      uVar1 = uVar1 + 1;
      uVar4 = uVar4 + 1;
      if (2 < uVar1) {
        return;
      }
    }
    piVar3 = *(int * PTR32 *)((int)this + uVar4 * 4 + 0x180);
    uVar1 = F_00561390();
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x60))(piVar3 GEN_EDX_ARG,uVar1 + 0xc0);
    (*(undefined4 *)(gen_frame + 0x18)) = *((undefined4 *)GEN_TOP((*(int *)((int)this + uVar4 * 4 + 0x180) + 0x110)));
    (*(undefined4 *)(gen_frame + 0xc)) = 3;
    (*(undefined4 *)(gen_frame + 0x10)) = 0xfffffff0;
    (*(undefined4 *)(gen_frame + 0x14)) = 3;
    F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar5 = 1;
    do {
      this_00 = this_00 - 8;
      F_005a2670(this_00 GEN_EDX_ARG);
      iVar5 = iVar5 - 1;
    } while (-1 < iVar5);
  }
  return;
}

/* ref: FUN_0081b3e0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_0081b3e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x81b3e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint uVar2;
  undefined4 in_ecx;
  int * piVar3;
  uint uVar4;
  undefined1 * this_00;
  int iVar5;
  
  this_00 = (gen_frame + 0x1c);
  if ((*(byte *)((int)this + 0xf9) & 1) == 0) {
    return;
  }
  uVar4 = 0;
  uVar1 = 0;
  piVar3 = (int *)((int)this + 0x18c);
  while ((*piVar3 == 0 || (*(char *)(*piVar3 + 0x88) == '\0'))) {
    uVar1 = uVar1 + 1;
    piVar3 = piVar3 + 1;
    if (2 < uVar1) {
LAB_0081b41e: ;
      uVar1 = 0;
      do {
        if (2 < uVar4) {
          uVar4 = 0;
        }
        iVar5 = *(int *)((int)this + uVar4 * 4 + 0x18c);
        if ((iVar5 != 0) &&
           (uVar2 = F_0055a350(*(undefined4 *)(iVar5 + 0x70) GEN_EDX_FWD), (char)uVar2 != '\0')) {
          iVar5 = *(int *)((int)this + uVar4 * 4 + 0x18c);
          in_ecx = 0;
          if (iVar5 != 0) {
            in_ecx = *(undefined4 *)(iVar5 + 0x70);
          }
          uVar2 = F_0055a2d0(in_ecx GEN_EDX_ARG);
          if ((char)uVar2 != '\0') {
            piVar3 = *(int * PTR32 *)((int)this + uVar4 * 4 + 0x18c);
            uVar1 = F_00561390();
            ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x60))(piVar3 GEN_EDX_ARG,uVar1 + 0xc0);
            (*(undefined4 *)(gen_frame + 0x18)) = *((undefined4 *)GEN_TOP((*(int *)((int)this + uVar4 * 4 + 0x18c) + 0x110)));
            (*(undefined4 *)(gen_frame + 0xc)) = 3;
            (*(undefined4 *)(gen_frame + 0x10)) = 0xffffffef;
            (*(undefined4 *)(gen_frame + 0x14)) = 3;
            F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
            iVar5 = 1;
            do {
              this_00 = this_00 - 8;
              F_005a2670(this_00 GEN_EDX_ARG);
              iVar5 = iVar5 - 1;
            } while (-1 < iVar5);
            return;
          }
        }
        uVar1 = uVar1 + 1;
        uVar4 = uVar4 + 1;
        if (2 < uVar1) {
          return;
        }
      } while( true );
    }
  }
  uVar4 = uVar1 + 1;
  goto LAB_0081b41e;
}

/* ref: FUN_0081b4e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_0081b4e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x81b4e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10d5f64));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x198) =
       (*(undefined * PTR32 (*)[4])REFP(0x10d1588));
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  return (uint)this;
}

/* ref: Client::UI2::AddonCharaMakeClassSelector::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_0081b540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x81b540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  undefined4 uVar2;
  
  if (((byte)this[0xf9] & 1) != 0) {
    F_005a89b0(this GEN_EDX_FWD,param_1,1);
    if (*(int *)(this + 0x1a4) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1a4) + 0x14))))(*(int * PTR32 *)(this + 0x1a4) GEN_EDX_ARG,param_1);
      uVar1 = F_00ab3660(*(undefined4 *)(this + 0x194));
      if (uVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(uVar1 + 0x38);
      }
      uVar1 = F_00ab21a0(uVar2);
      if (uVar1 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = (uint)*(byte *)(uVar1 + 0x40);
      }
      F_007c3690(*(undefined * PTR32 *)(this + 0x1a4) GEN_EDX_ARG,uVar1);
    }
    if (*(undefined * PTR32 *)(this + 0x180) != (undefined *)0x0) {
      F_007c52e0(*(undefined * PTR32 *)(this + 0x180) GEN_EDX_ARG,5,*(undefined4 *)(this + 0x194));
    }
    F_00568380(*(undefined * PTR32 *)(this + 0x90) GEN_EDX_ARG,0xc,0,this,0,0);
    F_00568380(*(undefined * PTR32 *)(this + 0x90) GEN_EDX_ARG,0xf,0,this,0,0);
    if (*(int *)(this + 0x194) < 5) {
      F_007c4730(this GEN_EDX_ARG,0);
      return;
    }
    F_007c4730(this GEN_EDX_ARG,1);
  }
  return;
}

/* ref: Client::UI2::AddonCharaMakeClassSelector::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081b620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81b620u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  
  F_005b0610(this GEN_EDX_FWD,param_1,1,param_2);
  if (*(int *)(this + 0x1a4) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1a4) + 0x18))))(*(int * PTR32 *)(this + 0x1a4) GEN_EDX_ARG,param_1,0);
  }
  iVar1 = *(int *)(this + 0x180);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x388) != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar1 + 0x388) + 0x18))))(*(int * PTR32 *)(iVar1 + 0x388) GEN_EDX_ARG,0,0);
    *((undefined1 *)GEN_TOP((*(int *)(iVar1 + 0x388) + 0x194))) = 0;
  }
  F_005840a0(*(undefined * PTR32 *)(this + 0x90) GEN_EDX_ARG,0xc,0,this,0);
  uVar2 = F_005840a0(*(undefined * PTR32 *)(this + 0x90) GEN_EDX_ARG,0xf,0,this,0);
  return uVar2;
}

/* ref: FUN_0081b6b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081b6b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x81b6b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(**(undefined4 * PTR32 *)(param_1 + 4))) == 2) {
    uVar1 = F_0056d250(*(undefined * PTR32 *)((int)this + 0x188) GEN_EDX_FWD,2,0);
    return uVar1;
  }
  uVar1 = F_0056d250(*(undefined * PTR32 *)((int)this + 0x188) GEN_EDX_ARG,3,0);
  return uVar1;
}

/* ref: FUN_0081b6e0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_0081b6e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x81b6e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined * pvVar1;
  uint uVar2;
  
  pvVar1 = (undefined *)F_00559ba0(*param_2 GEN_EDX_ARG);
  F_00584110(pvVar1 GEN_EDX_ARG,**((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x10))));
  pvVar1 = (undefined *)F_00559ba0(param_2[1] GEN_EDX_ARG);
  uVar2 = F_00584110(pvVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 4) + 0x10))) + 4))));
  return uVar2;
}

/* ref: FUN_0081b730 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_0081b730(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x81b730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 in_ecx;
  ushort uVar1;
  ushort uVar2;
  undefined * this;
  undefined * this_00;
  uint uVar3;
  
  this = (undefined *)F_00559ba0(*param_2 GEN_EDX_ARG);
  F_00584110(this GEN_EDX_ARG,**((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x10))));
  this_00 = (undefined *)F_00559ba0(param_2[1] GEN_EDX_ARG);
  F_00584110(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 4) + 0x10))) + 4))));
  in_ecx = param_2[2];
  uVar3 = F_00577bc0(this GEN_EDX_ARG,0,0,REFG(undefined4, 0x108cc50),0);
  uVar3 = uVar3 + 0x14 & 0xffff;
  uVar1 = F_00559d70(in_ecx GEN_EDX_ARG);
  uVar2 = F_0055a020(in_ecx GEN_EDX_ARG);
  F_0055a060(in_ecx GEN_EDX_ARG,uVar3);
  uVar3 = F_00559eb0(in_ecx GEN_EDX_ARG,(ushort)(uVar1 + uVar2) - uVar3);
  return uVar3;
}

/* ref: Client::UI2::AddonCharaMakeClassSelector::vf62 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_0081b7c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x81b7c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  undefined * this_00;
  float10 fVar2;
  
  if (*(int *)(this + 400) == 0) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
  }
  F_0055a300(this_00 GEN_EDX_FWD,0);
  uVar1 = 0;
  if (*(int *)(this + 400) != 0) {
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
  }
  fVar2 = F_00559d60(uVar1 GEN_EDX_ARG);
  uVar1 = 0;
  if (*(int *)(this + 0x18c) != 0) {
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
  }
  F_00559e70(uVar1 GEN_EDX_ARG,(float)(int)(short)(int)fVar2);
  return;
}

/* ref: FUN_0081b820 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_0081b820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x81b820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005903f0(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x198) =
       (*(undefined * PTR32 (*)[4])REFP(0x10d1588));
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x48;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10d6064));
  return (uint)this;
}

/* ref: FUN_0081b880 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_0081b880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x81b880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  undefined4 uVar2;
  
  if (*(int *)((int)this + 0x1a8) != 0) {
    uVar1 = F_00ab3660(param_1);
    if (uVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(uVar1 + 0x38);
    }
    uVar1 = F_00ab21a0(uVar2);
    if (uVar1 != 0) {
      F_007c7790(*(undefined * PTR32 *)((int)this + 0x1a8) GEN_EDX_ARG,param_1,(uint)*(byte *)(uVar1 + 0x40));
      return;
    }
    F_007c7790(*(undefined * PTR32 *)((int)this + 0x1a8) GEN_EDX_ARG,param_1,0);
  }
  return;
}

/* ref: Client::UI2::AddonCharaMakeWorldServer::vf38 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081b930(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x81b930u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint * puVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  F_005a2370(param_1 GEN_EDX_FWD,param_2);
  uVar4 = 0;
  if (*(int *)(param_1 + 0x1ac) != 0) {
    uVar4 = F_0055a350(*((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x1ac) + 0x70))) GEN_EDX_ARG);
    if ((char)uVar4 == '\0') {
      lVar3 = (longlong)((double)*(float *)(REFG(int, 0x137104c) + 0x1198) * *(double *)&REFG(undefined, 0x10912a8));
      uVar4 = (uint)lVar3;
      puVar1 = (uint *)(param_1 + 0x220);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + uVar4;
      *(int *)(param_1 + 0x224) =
           *(int *)(param_1 + 0x224) + (int)((ulonglong)lVar3 >> 0x20) + (uint)CARRY4(uVar2,uVar4);
      if ((*(int *)(param_1 + 0x224) != 0) || (180000 < *(uint *)(param_1 + 0x220))) {
        *(undefined4 *)(param_1 + 0x220) = 0;
        *(undefined4 *)(param_1 + 0x224) = 0;
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x1ac) + 0x28))))(*(int * PTR32 *)(param_1 + 0x1ac) GEN_EDX_ARG,1);
      }
    }
  }
  return uVar4;
}

/* ref: Client::UI2::AddonCharaMakeWorldServer::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081b9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81b9c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  
  uVar2 = F_005b0610(this GEN_EDX_FWD,param_1,1,param_2);
  if (((byte)this[0xf9] & 1) != 0) {
    uVar2 = F_0055dcb0();
    F_00596b10((undefined *)(uVar2 + 0xe0) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(this + 0x1ac) + 0x68))));
    F_005840a0(*(undefined * PTR32 *)(this + 0x90) GEN_EDX_ARG,0xc,0,this,0);
    F_005840a0(*(undefined * PTR32 *)(this + 0x90) GEN_EDX_ARG,0xf,0,this,0);
    iVar1 = *(int *)(this + 0x180);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x388) != 0)) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar1 + 0x388) + 0x18))))(*(int * PTR32 *)(iVar1 + 0x388) GEN_EDX_ARG,0,0);
      *((undefined1 *)GEN_TOP((*(int *)(iVar1 + 0x388) + 0x194))) = 0;
    }
    uVar2 = F_0055dcb0();
    uVar2 = F_00596b90((undefined *)(uVar2 + 0xe0) GEN_EDX_ARG,(uint)(byte)this[0x13a],1);
  }
  return uVar2;
}

/* ref: FUN_0081ba80 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_0081ba80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x81ba80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint * puVar2;
  uint uVar3;
  char * pcVar4;
  
  F_0059d6a0(this GEN_EDX_FWD,0x66,1,0);
  puVar2 = (uint *)F_00ab36c0(0x39);
  if (puVar2 == (uint *)0x0) {
    pcVar4 = "";
  }
  else {
    pcVar4 = ((char *)GEN_TOP(((*puVar2 & 0xffffff) + (int)puVar2)));
  }
  uVar3 = F_00584110(*(undefined * PTR32 *)((int)this + 0x1c0) GEN_EDX_ARG,pcVar4);
  iVar1 = *(int *)((int)this + 0x180);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x388) != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar1 + 0x388) + 0x18))))(*(int * PTR32 *)(iVar1 + 0x388) GEN_EDX_ARG,0,0);
    uVar3 = *(uint *)(iVar1 + 0x388);
    *(undefined1 *)(uVar3 + 0x194) = 0;
  }
  if (*(int *)((int)this + 0x1a4) != 0) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1a4) + 0x28))))(*(int * PTR32 *)((int)this + 0x1a4) GEN_EDX_ARG,0);
  }
  return uVar3;
}

/* ref: FUN_0081bb10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_0081bb10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x81bb10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint * puVar2;
  uint uVar3;
  char * pcVar4;
  
  F_0059d6a0(this GEN_EDX_FWD,0x66,1,0);
  puVar2 = (uint *)F_00ab36c0(0x3a);
  if (puVar2 == (uint *)0x0) {
    pcVar4 = "";
  }
  else {
    pcVar4 = ((char *)GEN_TOP(((*puVar2 & 0xffffff) + (int)puVar2)));
  }
  uVar3 = F_00584110(*(undefined * PTR32 *)((int)this + 0x1c0) GEN_EDX_ARG,pcVar4);
  iVar1 = *(int *)((int)this + 0x180);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x388) != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar1 + 0x388) + 0x18))))(*(int * PTR32 *)(iVar1 + 0x388) GEN_EDX_ARG,0,0);
    uVar3 = *(uint *)(iVar1 + 0x388);
    *(undefined1 *)(uVar3 + 0x194) = 0;
  }
  if (*(int *)((int)this + 0x1a4) != 0) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1a4) + 0x28))))(*(int * PTR32 *)((int)this + 0x1a4) GEN_EDX_ARG,0);
  }
  return uVar3;
}

/* ref: FUN_0081bba0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_0081bba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x81bba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  byte * pbVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  if ((param_1 < 2) && ((*(uint *)&gen_a2) < 2)) {
    uVar2 = F_0055dcb0();
    uVar2 = F_0055b990(uVar2 GEN_EDX_ARG);
    iVar5 = *(int *)(uVar2 + 8);
    *(undefined4 *)((int)this + param_1 * 4 + 0x19c) =
         *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1b0) + 0xc0)));
    if (*(int *)((int)this + (*(uint *)&gen_a2) * 4 + 0x19c) < 0) {
      iVar6 = *((int *)GEN_TOP((*(int *)(iVar5 + 0x20) + 8 + (*(uint *)&gen_a2) * 4)));
      iVar3 = 0;
      if (0 < iVar6) {
        pbVar4 = ((byte *)GEN_TOP(((*(uint *)&gen_a2) * 0xa0 + 0x20 + *(int *)(iVar5 + 0x20))));
        do {
          if ((*pbVar4 & 0xf0) == 0) {
            *(int *)((int)this + (*(uint *)&gen_a2) * 4 + 0x19c) = iVar3;
            break;
          }
          iVar3 = iVar3 + 1;
          pbVar4 = pbVar4 + 4;
        } while (iVar3 < iVar6);
      }
    }
    if (*(char *)(REFG(int, 0x137104c) + 0x1d) == '\x04') {
      uVar7 = 0x65;
    }
    else {
      uVar7 = 0x11;
    }
    F_0059d6a0(this GEN_EDX_ARG,uVar7,1,0);
    uVar2 = *((uint *)GEN_TOP((*(int *)(iVar5 + 0x20) + 8 + (*(uint *)&gen_a2) * 4)));
    F_0058d980(*(undefined4 *)((int)this + 0x1b0) GEN_EDX_ARG,uVar2);
    F_005623b0(*(undefined * PTR32 *)((int)this + 0x1b0) GEN_EDX_ARG,*(undefined4 *)((int)this + (*(uint *)&gen_a2) * 4 + 0x19c));
    iVar6 = 0;
    if (0 < (int)uVar2) {
      iVar3 = (*(uint *)&gen_a2) * 0xa0 + 0x20;
      do {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1b0) + 0x54))))
                  (*(int * PTR32 *)((int)this + 0x1b0) GEN_EDX_ARG,iVar6,
                   (uint)((*((byte *)GEN_TOP((iVar3 + *(int *)(iVar5 + 0x20)))) & 0xf0) != 0));
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar6 < (int)uVar2);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1b0) + 0x70))))(*(int * PTR32 *)((int)this + 0x1b0) GEN_EDX_ARG);
    iVar5 = *(int *)((int)this + (*(uint *)&gen_a2) * 4 + 0x19c);
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (*(uint *)&gen_a2) * 0x100 + iVar5;
    }
    uVar2 = *(uint *)((int)this + 0xf4) >> 0x14 & 0xf;
    *(int *)((int)this + 0x218) = iVar5;
    if (((uVar2 == 3) || (uVar2 == 2)) && (*(undefined * PTR32 *)((int)this + 0x180) != (undefined *)0x0)) {
      F_007c52e0(*(undefined * PTR32 *)((int)this + 0x180) GEN_EDX_ARG,6,iVar5);
    }
    piVar1 = *(int * PTR32 *)((int)this + 0x1a4);
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG,1);
    }
  }
  return;
}

/* ref: Client::UI2::AddonCharaMakeBirthDay::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081bd10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81bd10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  
  F_005b0610(this GEN_EDX_FWD,param_1,1,param_2);
  F_005840a0(*(undefined * PTR32 *)(this + 0x90) GEN_EDX_ARG,0xc,0,this,0);
  uVar2 = F_005840a0(*(undefined * PTR32 *)(this + 0x90) GEN_EDX_ARG,0xf,0,this,0);
  iVar1 = *(int *)(this + 0x180);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x388) != 0)) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar1 + 0x388) + 0x18))))(*(int * PTR32 *)(iVar1 + 0x388) GEN_EDX_ARG,0,0);
    *((undefined1 *)GEN_TOP((*(int *)(iVar1 + 0x388) + 0x194))) = 0;
  }
  return uVar2;
}

/* ref: Client::UI2::AddonCharaMakeBirthDay::vf62 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_0081bd90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x81bd90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ushort uVar1;
  ushort uVar2;
  undefined * this_00;
  undefined4 uVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  if (*(int *)(this + 0x210) == 0) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x210) + 0x70)));
  }
  F_0055a300(this_00 GEN_EDX_FWD,0);
  uVar3 = 0;
  if (*(int *)(this + 0x20c) != 0) {
    uVar3 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x20c) + 0x70)));
  }
  fVar4 = F_00559d60(uVar3 GEN_EDX_ARG);
  uVar3 = 0;
  if (*(int *)(this + 0x20c) != 0) {
    uVar3 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x20c) + 0x70)));
  }
  uVar1 = F_0055a020(uVar3 GEN_EDX_ARG);
  uVar3 = 0;
  if (*(int *)(this + 0x210) != 0) {
    uVar3 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x210) + 0x70)));
  }
  fVar5 = F_00559d60(uVar3 GEN_EDX_ARG);
  uVar3 = 0;
  if (*(int *)(this + 0x210) != 0) {
    uVar3 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x210) + 0x70)));
  }
  uVar2 = F_0055a020(uVar3 GEN_EDX_ARG);
  uVar3 = 0;
  if (*(int *)(this + 0x20c) != 0) {
    uVar3 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x20c) + 0x70)));
  }
  fVar6 = F_00559d60(uVar3 GEN_EDX_ARG);
  if (*(int *)(this + 0x20c) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x20c) + 0x70)));
  }
  F_00559e70(uVar3 GEN_EDX_ARG,(float)(int)(short)((short)(int)fVar6 +
                                        (short)((int)((uint)(ushort)((uVar2 >> 1) +
                                                                    (short)(int)fVar5) -
                                                     (uint)(ushort)((uVar1 >> 1) + (short)(int)fVar4
                                                                   )) / 2)));
  return;
}

/* ref: Client::UI2::AddonCharaMakeGuardian::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081be80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81be80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  
  uVar2 = F_005b0610(this GEN_EDX_FWD,param_1,1,param_2);
  if (((byte)this[0xf9] & 1) != 0) {
    F_005840a0(*(undefined * PTR32 *)(this + 0x90) GEN_EDX_ARG,0xc,0,this,0);
    uVar2 = F_005840a0(*(undefined * PTR32 *)(this + 0x90) GEN_EDX_ARG,0xf,0,this,0);
    iVar1 = *(int *)(this + 0x180);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x388) != 0)) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar1 + 0x388) + 0x18))))(*(int * PTR32 *)(iVar1 + 0x388) GEN_EDX_ARG,0,0);
      *((undefined1 *)GEN_TOP((*(int *)(iVar1 + 0x388) + 0x194))) = 0;
    }
  }
  return uVar2;
}

/* ref: Client::UI2::AddonCharaMakeGuardian::vf62 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_0081bf00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x81bf00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pvVar2;
  
  if (*(int *)(this + 400) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
  }
  F_0055a300(pvVar2 GEN_EDX_FWD,0);
  pvVar2 = (undefined *)F_0055e2f0(this GEN_EDX_ARG,0x10);
  uVar1 = 0;
  if (pvVar2 != (undefined *)0x0) {
    uVar1 = F_0059d670(pvVar2 GEN_EDX_ARG,0x65);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeature::vf37 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_0081bf40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x81bf40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pvVar2;
  undefined * pAVar3;
  int iVar4;
  undefined4 * puVar5;
  
  puVar5 = &REFG(undefined4, 0x10c3738);
  pAVar3 = this + 0x194;
  do {
    pvVar2 = (undefined *)0x0;
    if (*(int *)pAVar3 != 0) {
      pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar3 + 0x70);
    }
    F_005840a0(pvVar2 GEN_EDX_FWD,0x17,*puVar5,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)pAVar3 != 0) {
      pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar3 + 0x70);
    }
    F_005840a0(pvVar2 GEN_EDX_ARG,6,*puVar5,this,0);
    pvVar2 = (undefined *)0x0;
    if (*(int *)pAVar3 != 0) {
      pvVar2 = *(undefined * PTR32 *)(*(int *)pAVar3 + 0x70);
    }
    F_005840a0(pvVar2 GEN_EDX_ARG,7,*puVar5,this,0);
    puVar5 = puVar5 + 1;
    pAVar3 = pAVar3 + 4;
  } while ((int)puVar5 < 0x10c37a8);
  if (*(int *)(this + 0x204) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x204) + 0x70)));
  }
  F_005840a0(pvVar2 GEN_EDX_ARG,0x17,0x25,this,0);
  pvVar2 = (undefined *)0x0;
  if (*(int *)(this + 0x208) != 0) {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x208) + 0x70)));
  }
  F_005840a0(pvVar2 GEN_EDX_ARG,0x17,0x26,this,0);
  pvVar2 = (undefined *)0x0;
  if (*(int *)(this + 0x20c) != 0) {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x20c) + 0x70)));
  }
  F_005840a0(pvVar2 GEN_EDX_ARG,0x17,4,this,0);
  pAVar3 = this + 0x21c;
  iVar4 = 0x1c;
  do {
    puVar5 = *(undefined4 * PTR32 *)pAVar3;
    if (puVar5 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar5)(puVar5 GEN_EDX_ARG,1);
      *(int *)pAVar3 = 0;
    }
    pAVar3 = pAVar3 + 4;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeature::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_0081c030(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x81c030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  ushort uVar1;
  uint uVar2;
  undefined * this;
  float10 fVar3;
  float10 fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined * pvVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if ((*(byte *)((int)param_1 + 0xf9) & 1) != 0) {
    F_005a89b0(param_1 GEN_EDX_FWD,param_2,1);
    uVar2 = F_0055dcb0();
    fVar3 = (float10)*(int *)(uVar2 + 0x238);
    if (*(int *)(uVar2 + 0x238) < 0) {
      fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    uVar1 = F_0055a030(*(undefined4 *)((int)param_1 + 0x218) GEN_EDX_ARG);
    fVar4 = F_0055dfd0(param_1 GEN_EDX_ARG);
    F_00568250(*(undefined4 *)((int)param_1 + 0x218) GEN_EDX_ARG,
                 ((float)GEN_TOF((((float10)1 / fVar4) * (float10)((float)fVar3 / (float)uVar1)))));
    F_00568380(*(undefined * PTR32 *)((int)param_1 + 0x90) GEN_EDX_ARG,0xc,0,param_1,0,0);
    uVar9 = 0;
    uVar8 = 0;
    uVar6 = 0;
    uVar5 = 0xf;
    pvVar7 = param_1;
    this = (undefined *)F_0055dcb0();
    F_0056a3d0(this GEN_EDX_ARG,uVar5,uVar6,pvVar7,uVar8,uVar9);
    if (*(int *)((int)param_1 + 0x298) < *(int *)((int)param_1 + 0x294)) {
      F_007c4f60(param_1 GEN_EDX_ARG,*(int *)((int)param_1 + 0x298));
    }
  }
  return;
}

/* ref: Client::UI2::AddonCharaMakeFeature::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081c100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81c100u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined * pAVar4;
  
  F_005840a0(*(undefined * PTR32 *)(this + 0x90) GEN_EDX_FWD,0xc,0,this,0);
  uVar3 = 0;
  uVar2 = 0xf;
  pAVar4 = this;
  this_00 = (undefined *)F_0055dcb0();
  F_00586850(this_00 GEN_EDX_ARG,uVar2,uVar3,pAVar4);
  F_007c50d0(this GEN_EDX_ARG);
  uVar1 = F_005b0610(this GEN_EDX_ARG,param_1,1,param_2);
  return uVar1;
}

/* ref: FUN_0081c170 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_0081c170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x81c170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)((int)this + 0x180);
  if (iVar4 != 0) {
    iVar3 = *(int *)(iVar4 + 0x398);
    if (iVar3 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = *(int *)(iVar3 + 0x1a4);
    }
    if (*(int *)(iVar4 + 0x39c) == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = *((int *)GEN_TOP((*(int *)(iVar4 + 0x39c) + 0x19c)));
    }
    if (iVar3 == 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = *(int *)(iVar3 + 0x1a8);
    }
    piVar1 = (int *)F_00ab3630(iVar3 + (iVar4 + iVar5 * 2) * 2);
    if (piVar1 != (int *)0x0) {
      iVar4 = 0;
      do {
        if (*piVar1 == 0xee) {
          if (iVar4 < 0) {
            return 0;
          }
          if (*(int *)((int)this + iVar4 * 4 + 0x21c) == 0) {
            return 0;
          }
          piVar1 = *(int * PTR32 *)((int)this + iVar4 * 4 + 0x21c);
          uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1 GEN_EDX_ARG);
          return uVar2;
        }
        iVar4 = iVar4 + 1;
        piVar1 = piVar1 + 0x3c;
      } while (iVar4 < 0x1c);
    }
  }
  return 0;
}

/* ref: Client::UI2::AddonCharaMakeProgress::vf37 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_0081c210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x81c210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  undefined4 * puVar2;
  undefined * pAVar3;
  
  puVar2 = &REFG(undefined4, 0x1328448);
  pAVar3 = this + 0x180;
  do {
    this_00 = (undefined *)0x0;
    if (*(int *)pAVar3 != 0) {
      this_00 = *(undefined * PTR32 *)(*(int *)pAVar3 + 0x70);
    }
    F_005840a0(this_00 GEN_EDX_FWD,9,*puVar2,this,0);
    puVar2 = puVar2 + 1;
    pAVar3 = pAVar3 + 4;
  } while ((int)puVar2 < 0x1328468);
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0081c250 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081c250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81c250u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  undefined3 extraout_var_03 = 0;
  int * piVar3;
  undefined3 extraout_var_04 = 0;
  undefined3 extraout_var_05 = 0;
  undefined4 uVar4;
  
  bVar1 = F_00a34970(*(undefined * PTR32 *)(param_2 + 8) GEN_EDX_FWD,0x16d);
  if (bVar1 != 0) {
    if (*(int *)((int)this + 0x394) == 0) {
      return CONCAT31(extraout_var,bVar1);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x394) + 0x88))))(*(int * PTR32 *)((int)this + 0x394) GEN_EDX_ARG,this,0);
    uVar2 = F_00557670(param_1 GEN_EDX_ARG,0);
    return uVar2;
  }
  bVar1 = F_00a34970(*(undefined * PTR32 *)(param_2 + 8) GEN_EDX_ARG,0x169);
  if (bVar1 == 0) {
    bVar1 = F_00a34970(*(undefined * PTR32 *)(param_2 + 8) GEN_EDX_ARG,0x16a);
    if (bVar1 != 0) {
      if (*(undefined * PTR32 *)((int)this + 0x390) == (undefined *)0x0) {
        return CONCAT31(extraout_var_01,bVar1);
      }
      F_0081b3e0(*(undefined * PTR32 *)((int)this + 0x390) GEN_EDX_ARG);
      F_00557670(param_1 GEN_EDX_ARG,0);
      uVar2 = F_0055dcb0();
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),0xd);
      uVar2 = F_005a2670(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      return uVar2;
    }
    bVar1 = F_00a34970(*(undefined * PTR32 *)(param_2 + 8) GEN_EDX_ARG,0x16c);
    if (bVar1 != 0) {
      if (*(undefined * PTR32 *)((int)this + 0x38c) == (undefined *)0x0) {
        return CONCAT31(extraout_var_02,bVar1);
      }
      F_0081b140(*(undefined * PTR32 *)((int)this + 0x38c) GEN_EDX_ARG);
      uVar2 = F_00557670(param_1 GEN_EDX_ARG,0);
      return uVar2;
    }
    bVar1 = F_00a34970(*(undefined * PTR32 *)(param_2 + 8) GEN_EDX_ARG,0x16b);
    if (bVar1 == 0) {
      piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x70))(piVar3 GEN_EDX_ARG);
      if ((char)uVar2 != '\0') {
        return uVar2;
      }
      bVar1 = F_00a34970(*(undefined * PTR32 *)(param_2 + 8) GEN_EDX_ARG,0x167);
      if (bVar1 != 0) {
        if (*(undefined * PTR32 *)((int)this + 0x38c) == (undefined *)0x0) {
          return CONCAT31(extraout_var_04,bVar1);
        }
        F_0081b0d0(*(undefined * PTR32 *)((int)this + 0x38c) GEN_EDX_ARG,0);
        F_00557670(param_1 GEN_EDX_ARG,0);
        uVar2 = F_0055dcb0();
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),0x32);
        uVar2 = F_005a2670(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
        return uVar2;
      }
      bVar1 = F_00a34970(*(undefined * PTR32 *)(param_2 + 8) GEN_EDX_ARG,0x168);
      if (bVar1 == 0) {
        return CONCAT31(extraout_var_05,bVar1);
      }
      if (*(undefined * PTR32 *)((int)this + 0x38c) == (undefined *)0x0) {
        return CONCAT31(extraout_var_05,bVar1);
      }
      F_0081b0d0(*(undefined * PTR32 *)((int)this + 0x38c) GEN_EDX_ARG,1);
      F_00557670(param_1 GEN_EDX_ARG,0);
      uVar2 = F_0055dcb0();
      uVar4 = 0x32;
    }
    else {
      if (*(undefined * PTR32 *)((int)this + 0x38c) == (undefined *)0x0) {
        return CONCAT31(extraout_var_03,bVar1);
      }
      bVar1 = F_0081b190(*(undefined * PTR32 *)((int)this + 0x38c) GEN_EDX_ARG);
      uVar2 = F_00557670(param_1 GEN_EDX_ARG,0);
      if (bVar1 == 0) {
        return uVar2;
      }
      uVar2 = F_0055dcb0();
      uVar4 = 1;
    }
  }
  else {
    if (*(undefined * PTR32 *)((int)this + 0x390) == (undefined *)0x0) {
      return CONCAT31(extraout_var_00,bVar1);
    }
    F_0081b300(*(undefined * PTR32 *)((int)this + 0x390) GEN_EDX_ARG);
    F_00557670(param_1 GEN_EDX_ARG,0);
    uVar2 = F_0055dcb0();
    uVar4 = 0xd;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),uVar4);
  uVar2 = F_005a2670(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_0081c480 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081c480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x81c480u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  int * piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined * this_00;
  
  this_00 = (undefined *)((int)this + 0x1c8);
  bVar2 = F_005610b0(this_00 GEN_EDX_FWD);
  piVar3 = ((int *)GEN_TOP(CONCAT31(extraout_var,bVar2)));
  if (bVar2 != 0) {
    piVar3 = (int *)F_007c5410(this GEN_EDX_ARG);
  }
  if (-1 < *(int *)((int)this + 0x378)) {
    piVar3 = (int *)((int)this + 0x180);
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar3;
    iVar5 = 0;
    do {
      if (8 < iVar5) {
        return (uint)piVar3;
      }
      iVar1 = *(*(int * PTR32 *)(gen_frame + 0x18));
      (*(float *)(gen_frame + 0xc)) = (float)(REFG(int, 0x148a460) + 100);
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 5;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      uVar4 = 0;
      if (iVar1 != 0) {
        uVar4 = *(undefined4 *)(iVar1 + 0x70);
      }
      F_00595110(this_00 GEN_EDX_ARG,300,uVar4,&(*(undefined4 *)(gen_frame + 0x8)),2,REFG(float, 0x1088068));
      F_0056c650(this_00 GEN_EDX_ARG,0x3d,0,this,0,0);
      piVar3 = (int *)F_0058d530(this_00 GEN_EDX_ARG);
      (*(int * PTR32 *)(gen_frame + 0x18)) = (*(int * PTR32 *)(gen_frame + 0x18)) + 1;
      iVar5 = iVar5 + 1;
      this_00 = (undefined *)((int)this_00 + 0x30);
    } while (iVar5 <= *(int *)((int)this + 0x378));
  }
  return (uint)piVar3;
}

/* ref: FUN_0081c550 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081c550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x81c550u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  int * piVar3;
  undefined4 uVar4;
  undefined * this_00;
  int iVar5;
  undefined * this_01;
  
  this_01 = (undefined *)((int)this + 0x1c8);
  bVar2 = F_005610b0(this_01 GEN_EDX_FWD);
  piVar3 = ((int *)GEN_TOP(CONCAT31(extraout_var,bVar2)));
  if (bVar2 != 0) {
    piVar3 = (int *)F_007c5410(this GEN_EDX_ARG);
  }
  if (-1 < *(int *)((int)this + 0x378)) {
    piVar3 = (int *)((int)this + 0x180);
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar3;
    iVar5 = 0;
    do {
      if (8 < iVar5) {
        return (uint)piVar3;
      }
      if (*(*(int * PTR32 *)(gen_frame + 0x18)) == 0) {
        this_00 = (undefined *)0x0;
      }
      else {
        this_00 = *(undefined * PTR32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 0x70);
      }
      F_0055a300(this_00 GEN_EDX_ARG,1);
      iVar1 = *(*(int * PTR32 *)(gen_frame + 0x18));
      (*(float *)(gen_frame + 0xc)) = (float)REFG(int, 0x148a460);
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 5;
      (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      uVar4 = 0;
      if (iVar1 != 0) {
        uVar4 = *(undefined4 *)(iVar1 + 0x70);
      }
      F_00595110(this_01 GEN_EDX_ARG,300,uVar4,&(*(undefined4 *)(gen_frame + 0x8)),2,REFG(float, 0x1088068));
      F_0056c650(this_01 GEN_EDX_ARG,0x3d,1,this,0,0);
      piVar3 = (int *)F_0058d530(this_01 GEN_EDX_ARG);
      (*(int * PTR32 *)(gen_frame + 0x18)) = (*(int * PTR32 *)(gen_frame + 0x18)) + 1;
      iVar5 = iVar5 + 1;
      this_01 = (undefined *)((int)this_01 + 0x30);
    } while (iVar5 <= *(int *)((int)this + 0x378));
  }
  return (uint)piVar3;
}

/* ref: FUN_0081c640 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081c640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x81c640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  undefined1 * this_00;
  int iVar3;
  
  this_00 = (gen_frame + 0x1c);
  piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 0x398);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_FWD,0);
    (*(undefined4 *)(gen_frame + 0xc)) = 3;
    (*(undefined4 *)(gen_frame + 0x14)) = 3;
    (*(undefined4 *)(gen_frame + 0x10)) = 0xfffffff5;
    (*(int *)(gen_frame + 0x18)) = param_1;
    F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar3 = 1;
    do {
      this_00 = this_00 - 8;
      F_005a2670(this_00 GEN_EDX_ARG);
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  uVar2 = F_007c5490(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_0081c6b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081c6b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x81c6b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * in_EAX = 0;
  undefined * this_00;
  undefined * this_01;
  int iVar1;
  int * local_8;
  
  iVar1 = 0;
  if (-1 < *(int *)((int)this + 0x378)) {
    in_EAX = (int *)((int)this + 0x180);
    this_01 = (undefined *)((int)this + 0x1c8);
    local_8 = in_EAX;
    do {
      if (8 < iVar1) {
        return (uint)in_EAX;
      }
      if (*local_8 == 0) {
        this_00 = (undefined *)0x0;
      }
      else {
        this_00 = *(undefined * PTR32 *)(*local_8 + 0x70);
      }
      F_0055a300(this_00 GEN_EDX_FWD,0);
      in_EAX = (int *)F_00588f80(this_01 GEN_EDX_ARG,0x3d,0,this,0);
      local_8 = local_8 + 1;
      iVar1 = iVar1 + 1;
      this_01 = (undefined *)((int)this_01 + 0x30);
    } while (iVar1 <= *(int *)((int)this + 0x378));
  }
  return (uint)in_EAX;
}

/* ref: Client::UI2::AddonCharaMakeProgressSubRaceGender::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081c720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81c720u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  
  F_005b0610(this GEN_EDX_FWD,param_1,1,param_2);
  iVar1 = *(int *)(this + 0x180);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x388) != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar1 + 0x388) + 0x18))))(*(int * PTR32 *)(iVar1 + 0x388) GEN_EDX_ARG,0,0);
    *((undefined1 *)GEN_TOP((*(int *)(iVar1 + 0x388) + 0x194))) = 0;
  }
  uVar2 = F_005840a0(*(undefined * PTR32 *)(this + 0x90) GEN_EDX_ARG,0xc,0x1e,this,0);
  return uVar2;
}

/* ref: Client::UI2::AddonCharaMakeProgressSubRaceGender::vf62 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_0081c790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x81c790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  undefined * this_00;
  float10 fVar2;
  
  if (*(int *)(this + 0x18c) == 0) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
  }
  F_0055a300(this_00 GEN_EDX_FWD,0);
  uVar1 = 0;
  if (*(int *)(this + 0x18c) != 0) {
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
  }
  fVar2 = F_00559d60(uVar1 GEN_EDX_ARG);
  uVar1 = 0;
  if (*(int *)(this + 0x188) != 0) {
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x188) + 0x70)));
  }
  F_00559e70(uVar1 GEN_EDX_ARG,(float)(int)(short)(int)fVar2);
  return;
}

/* ref: FUN_0081c7f0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_0081c7f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x81c7f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  int * this_00;
  int iVar4;
  undefined * this_01;
  int iVar5;
  undefined4 * puVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if ((((-1 < (*(int *)&gen_a1)) && (-1 < param_2)) && ((*(int *)&gen_a1) < 5)) &&
     ((param_2 < 2 && ((*(byte *)((int)this + 0xf9) & 1) != 0)))) {
    puVar6 = (undefined4 *)((int)this + 400);
    (*(int *)(gen_frame + 0x10)) = 0;
    do {
      uVar2 = F_00561490((undefined *)*puVar6 GEN_EDX_FWD,3);
      if (((uVar2 == 0) || ((*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)F_00559c20(uVar2 GEN_EDX_ARG), (*(undefined * PTR32 *)(gen_frame + 0x18)) == (undefined *)0x0)) ||
         (uVar2 = F_005613a0((*(undefined * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG), uVar2 != 3)) {
        (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
      }
      uVar2 = F_00561490((undefined *)*puVar6 GEN_EDX_ARG,4);
      if (((uVar2 == 0) || (pvVar3 = (undefined *)F_00559c20(uVar2 GEN_EDX_ARG), pvVar3 == (undefined *)0x0)) ||
         (uVar2 = F_005613a0(pvVar3 GEN_EDX_ARG), uVar2 != 3)) {
        pvVar3 = (undefined *)0x0;
      }
      uVar2 = F_00561490((undefined *)*puVar6 GEN_EDX_ARG,2);
      if (((uVar2 == 0) || (this_00 = (int *)F_00559c20(uVar2 GEN_EDX_ARG), this_00 == (int *)0x0)) ||
         (uVar2 = F_005613a0(this_00 GEN_EDX_ARG), uVar2 != 3)) {
        this_00 = (int *)0x0;
      }
      if ((*(int *)(gen_frame + 0x10)) == (*(int *)&gen_a1)) {
        bVar7 = param_2 == 0;
        (*(undefined4 *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3),bVar7);
        F_0059dde0((*(undefined * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xc)));
        F_0059dde0(pvVar3 GEN_EDX_ARG,(uint)!bVar7);
        F_0059dde0(this_00 GEN_EDX_ARG,1);
        if (bVar7) {
          this_01 = *(undefined * PTR32 *)((int)pvVar3 + 0x6c);
        }
        else {
          this_01 = *(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x6c);
        }
        F_0059d640(this_01 GEN_EDX_ARG,1);
        uVar9 = 0;
        uVar8 = 1;
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0x3c))(this_00 GEN_EDX_ARG);
        F_0059b340(this GEN_EDX_ARG,uVar2,uVar8,uVar9);
        if (-1 < param_3) {
          iVar1 = param_3 >> 0x1f;
          iVar5 = param_3 / 10 + iVar1;
          iVar4 = iVar5 - iVar1;
          if (iVar5 == iVar1) {
            pvVar3 = *(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x6c);
            uVar8 = 0xd;
          }
          else {
            if (iVar4 == 1) {
              uVar8 = 0xd;
              goto LAB_0081c996;
            }
            if (iVar4 != 2) goto LAB_0081c99e;
            pvVar3 = (undefined *)this_00[0x1b];
            uVar8 = 0xd;
          }
          goto LAB_0081c999;
        }
      }
      else {
        F_0059dde0((*(undefined * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,0);
        F_0059dde0(pvVar3 GEN_EDX_ARG,0);
        F_0059dde0(this_00 GEN_EDX_ARG,0);
        F_0059d640(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x6c) GEN_EDX_ARG,1);
        uVar8 = 1;
LAB_0081c996: ;
        pvVar3 = *(undefined * PTR32 *)((int)pvVar3 + 0x6c);
LAB_0081c999: ;
        F_0059d640(pvVar3 GEN_EDX_ARG,uVar8);
      }
LAB_0081c99e: ;
      puVar6 = puVar6 + 1;
      (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
    } while ((*(int *)(gen_frame + 0x10)) < 5);
  }
  return 0;
}

/* ref: FUN_0081c9c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081c9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81c9c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  bool bVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = param_1;
  if ((((-1 < (int)param_1) && (-1 < param_2)) && ((int)param_1 < 5)) &&
     ((param_2 < 2 && (bVar1 = true, (*(byte *)((int)this + 0xf9) & 1) != 0)))) {
    if ((param_1 != *(uint *)((int)this + 0x1a4)) || (param_2 != *(int *)((int)this + 0x1a8))) {
      bVar1 = false;
    }
    if (param_2 == 0) {
      uVar3 = 3;
    }
    else {
      uVar3 = 4;
    }
    this_00 = (undefined *)F_00561490(*(undefined * PTR32 *)((int)this + param_1 * 4 + 400) GEN_EDX_FWD,uVar3);
    uVar2 = F_005bdc10(this_00 GEN_EDX_ARG,3);
    if (!bVar1) {
      uVar2 = F_0059d640(*(undefined * PTR32 *)(uVar2 + 0x6c) GEN_EDX_ARG,2);
    }
  }
  return uVar2;
}

/* ref: FUN_0081ca30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081ca30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81ca30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  bool bVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = param_1;
  if ((((-1 < (int)param_1) && (-1 < param_2)) && ((int)param_1 < 5)) &&
     ((param_2 < 2 && (bVar1 = true, (*(byte *)((int)this + 0xf9) & 1) != 0)))) {
    if ((param_1 != *(uint *)((int)this + 0x1a4)) || (param_2 != *(int *)((int)this + 0x1a8))) {
      bVar1 = false;
    }
    if (param_2 == 0) {
      uVar3 = 3;
    }
    else {
      uVar3 = 4;
    }
    this_00 = (undefined *)F_00561490(*(undefined * PTR32 *)((int)this + param_1 * 4 + 400) GEN_EDX_FWD,uVar3);
    uVar2 = F_005bdc10(this_00 GEN_EDX_ARG,3);
    if (!bVar1) {
      uVar2 = F_0059d640(*(undefined * PTR32 *)(uVar2 + 0x6c) GEN_EDX_ARG,4);
    }
  }
  return uVar2;
}

/* ref: FUN_0081caa0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_0081caa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x81caa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00561490(*((undefined * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x184) * 4 + 400))) GEN_EDX_FWD,2);
  if (uVar1 != 0) {
    uVar1 = F_00559c20(uVar1 GEN_EDX_ARG);
    if (uVar1 != 0) {
      uVar2 = F_005613a0(uVar1 GEN_EDX_ARG);
      if (uVar2 == 3) {
        return uVar1;
      }
    }
  }
  return 0;
}

/* ref: Client::UI2::AddonCharaMakeProgressSubTribe::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_0081cae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x81cae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  if (((byte)this[0xf9] & 1) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((this + *(int *)(this + 0x184) * 4 + 0x194))) + 0x3c))))
                      (*((int * PTR32 *)GEN_TOP((this + *(int *)(this + 0x184) * 4 + 0x194))) GEN_EDX_ARG);
    *(uint *)(this + 0xa4) = uVar1;
    F_005a89b0(this GEN_EDX_ARG,param_1,1);
    if (*(undefined * PTR32 *)(this + 0x180) != (undefined *)0x0) {
      F_007c52e0(*(undefined * PTR32 *)(this + 0x180) GEN_EDX_ARG,1,*(undefined4 *)(this + 0x19c));
    }
    F_00568380(*(undefined * PTR32 *)(this + 0x90) GEN_EDX_ARG,0xc,0,this,0,0);
  }
  return;
}

/* ref: Client::UI2::AddonCharaMakeProgressSubTribe::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081cb50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81cb50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  
  F_005b0610(this GEN_EDX_FWD,param_1,1,param_2);
  iVar1 = *(int *)(this + 0x180);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x388) != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar1 + 0x388) + 0x18))))(*(int * PTR32 *)(iVar1 + 0x388) GEN_EDX_ARG,0,0);
    *((undefined1 *)GEN_TOP((*(int *)(iVar1 + 0x388) + 0x194))) = 0;
  }
  uVar2 = F_005840a0(*(undefined * PTR32 *)(this + 0x90) GEN_EDX_ARG,0xc,0,this,0);
  return uVar2;
}

/* ref: Client::UI2::AddonCharaMakeProgressSubTribe::vf62 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_0081cbc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x81cbc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  undefined * this_00;
  float10 fVar2;
  
  if (*(int *)(this + 400) == 0) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
  }
  F_0055a300(this_00 GEN_EDX_FWD,0);
  uVar1 = 0;
  if (*(int *)(this + 400) != 0) {
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
  }
  fVar2 = F_00559d60(uVar1 GEN_EDX_ARG);
  uVar1 = 0;
  if (*(int *)(this + 0x18c) != 0) {
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
  }
  F_00559e70(uVar1 GEN_EDX_ARG,(float)(int)(short)(int)fVar2);
  return;
}

/* ref: FUN_0081cc20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081cc20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x81cc20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  int iVar2;
  int * piVar3;
  
  iVar2 = 0;
  piVar3 = (int *)((int)this + 0x194);
  do {
    uVar1 = F_0059dde0((undefined *)*piVar3 GEN_EDX_FWD,(uint)(iVar2 == param_1));
    if (iVar2 == param_1) {
      uVar1 = F_0059d640(*(undefined * PTR32 *)(*piVar3 + 0x6c) GEN_EDX_ARG,0xd);
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar2 < 2);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeDataImport::vf25 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081cc70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x81cc70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_FWD,0,0);
  F_007c5eb0(this GEN_EDX_ARG);
  uVar1 = F_0055dcb0();
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 8))))(*(int * PTR32 *)(uVar1 + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),3);
  uVar1 = F_005a2670(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0081ccb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081ccb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x81ccb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 0x14) = param_4;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x18) = param_5;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d20dc));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x1e) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081cd00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x81cd00u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  byte * pbVar1;
  int * this_00;
  uint uVar2;
  uint uVar3;
  
  (*(undefined * PTR32 *)&gen_args[0])[0x28] = (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 0));
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x188))) = 0;
    pbVar1 = ((byte *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0xf9)));
    *pbVar1 = *pbVar1 ^ (((char)(*(undefined4 *)&gen_args[2]) == '\0') << 6 ^ *((byte *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0xf9)))) & 0x40
    ;
    this_00 = *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8)));
    F_0059b340(this_00 GEN_EDX_FWD,this_00[0x29],1,0);
    ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0xb8))(this_00 GEN_EDX_ARG,0,0);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x14))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) GEN_EDX_ARG,0);
    return uVar2;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(uint)((char)(*(undefined4 *)&gen_args[2]) == '\0'));
  uVar3 = F_0055dcb0();
  uVar2 = F_0057f810(*(undefined * PTR32 *)(uVar3 + 0x14) GEN_EDX_ARG,uVar2);
  if (uVar2 != 0) {
    *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) = uVar2;
    *(undefined * PTR32 *)(uVar2 + 0x180) = (*(undefined * PTR32 *)&gen_args[0]);
  }
  return uVar2;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081cdb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x81cdb0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * this_00;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 0)));
  this_00 = *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8)));
  (*(undefined * PTR32 *)&gen_args[0])[0x28] = (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 0));
  if (this_00 != (int *)0x0) {
    F_0059b340(this_00 GEN_EDX_FWD,this_00[0x29],1,0);
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0xb8))(this_00 GEN_EDX_ARG,0,0);
  }
  return uVar1;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk::vf17 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_0081cdf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x81cdf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_007c50d0(*(undefined * PTR32 *)(this + 4) GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_0081ce10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081ce10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x81ce10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 0x14) = param_4;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x18) = param_5;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x1e) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d6164));
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk2::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081ce60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81ce60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_0081cd00((undefined *)this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_0081ce70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081ce70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x81ce70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 0x14) = param_4;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x18) = param_5;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x1e) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d61c4));
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk3::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081cec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81cec0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_0081cd00((undefined *)this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_0081ced0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081ced0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x81ced0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 0x14) = param_4;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x18) = param_5;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x1e) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d6224));
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk4::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081cf20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81cf20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_0081cd00((undefined *)this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_0081cf30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081cf30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x81cf30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 0x14) = param_4;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x18) = param_5;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x1e) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d6284));
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk5::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081cf80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81cf80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_0081cd00((undefined *)this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_0081cf90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081cf90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x81cf90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 0x14) = param_4;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x18) = param_5;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x1e) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d62e4));
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk6::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081cfe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81cfe0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_0081cd00((undefined *)this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_0081cff0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081cff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x81cff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 0x14) = param_4;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x18) = param_5;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x1e) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d6344));
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk12::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081d040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81d040u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_0081cd00((undefined *)this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_0081d050 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081d050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x81d050u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 0x14) = param_4;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x18) = param_5;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x1e) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d63a4));
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListIconFacePaint::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081d0a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81d0a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_0081cd00((undefined *)this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_0081d0b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081d0b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x81d0b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 0x14) = param_4;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x18) = param_5;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x1e) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d640c));
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListIconFaceType::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081d100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81d100u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_0081cd00((undefined *)this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_0081d110 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081d110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x81d110u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 0x14) = param_4;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x18) = param_5;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x1e) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d6474));
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListIconHair::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081d160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81d160u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_0081cd00((undefined *)this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_0081d170 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081d170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x81d170u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 0x14) = param_4;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x18) = param_5;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x1e) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d64d4));
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListIconTail::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081d1c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81d1c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_0081cd00((undefined *)this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_0081d1d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081d1d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x81d1d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 0x14) = param_4;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x18) = param_5;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x1e) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d6534));
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListIconFeature::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081d220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81d220u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_0081cd00((undefined *)this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_0081d230 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081d230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x81d230u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 0x14) = param_4;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x18) = param_5;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x1e) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d659c));
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListIconTatoo::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081d280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81d280u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_0081cd00((undefined *)this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_0081d290 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081d290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x81d290u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 0x14) = param_4;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x18) = param_5;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x1e) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d6604));
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListColorL::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081d2e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81d2e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_0081cd00((undefined *)this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_0081d2f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081d2f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x81d2f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 0x14) = param_4;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x18) = param_5;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x1e) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d6664));
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListColorFacePaint::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081d340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81d340u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_0081cd00((undefined *)this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_0081d350 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081d350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x81d350u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 0x14) = param_4;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x18) = param_5;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x1e) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d66cc));
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListColorLip::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081d3a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81d3a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_0081cd00((undefined *)this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_0081d3b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081d3b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x81d3b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 0x14) = param_4;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x18) = param_5;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x1e) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d672c));
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListColorHair::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081d400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81d400u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_0081cd00((undefined *)this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_0081d410 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081d410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x81d410u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 0x14) = param_4;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x18) = param_5;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x1e) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d6794));
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListColorEye::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081d460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81d460u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_0081cd00((undefined *)this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_0081d470 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081d470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x81d470u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 0x14) = param_4;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x18) = param_5;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x1e) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x10d67f4));
  return (uint)this;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkSlider::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081d4c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81d4c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_0081cd00((undefined *)this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_0081d4d0 */
GEN_LIB GEN_FRAME uint F_0081d4d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x81d4d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  
  if (param_1 == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *(undefined * PTR32 *)(param_1 + 0x70);
  }
  F_00568380(pvVar2 GEN_EDX_ARG,0x1d,param_2,param_3,0,0);
  if (param_1 == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *(undefined * PTR32 *)(param_1 + 0x70);
  }
  F_00568380(pvVar2 GEN_EDX_ARG,0x1f,param_2,param_3,0,0);
  if (param_1 == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *(undefined * PTR32 *)(param_1 + 0x70);
  }
  F_00568380(pvVar2 GEN_EDX_ARG,0x1e,param_2,param_3,0,0);
  if (param_1 == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *(undefined * PTR32 *)(param_1 + 0x70);
  }
  F_00568380(pvVar2 GEN_EDX_ARG,0x21,param_2,param_3,0,0);
  if (param_1 == 0) {
    uVar1 = F_00568380((undefined *)0x0 GEN_EDX_ARG,0x20,param_2,param_3,0,0);
    return uVar1;
  }
  uVar1 = F_00568380(*(undefined * PTR32 *)(param_1 + 0x70) GEN_EDX_ARG,0x20,param_2,param_3,0,0);
  return uVar1;
}

/* ref: FUN_0081d570 */
GEN_LIB GEN_FRAME uint F_0081d570(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x81d570u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  
  if (param_1 == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *(undefined * PTR32 *)(param_1 + 0x70);
  }
  F_005840a0(pvVar2 GEN_EDX_ARG,0x1d,param_2,param_3,0);
  if (param_1 == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *(undefined * PTR32 *)(param_1 + 0x70);
  }
  F_005840a0(pvVar2 GEN_EDX_ARG,0x1f,param_2,param_3,0);
  if (param_1 == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *(undefined * PTR32 *)(param_1 + 0x70);
  }
  F_005840a0(pvVar2 GEN_EDX_ARG,0x1e,param_2,param_3,0);
  if (param_1 == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *(undefined * PTR32 *)(param_1 + 0x70);
  }
  F_005840a0(pvVar2 GEN_EDX_ARG,0x21,param_2,param_3,0);
  if (param_1 == 0) {
    uVar1 = F_005840a0((undefined *)0x0 GEN_EDX_ARG,0x20,param_2,param_3,0);
    return uVar1;
  }
  uVar1 = F_005840a0(*(undefined * PTR32 *)(param_1 + 0x70) GEN_EDX_ARG,0x20,param_2,param_3,0);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColor::vf46 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_0081d610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81d610u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined * pAVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if ((*(int *)(this + 0x18c) != 0) && (*(int *)(this + 0x180) != 0)) {
    uVar1 = *((undefined1 *)GEN_TOP((*(int *)(this + 0x180) + 0x28)));
    (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0)) = uVar1;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),uVar1)));
    pvVar4 = (undefined *)0x0;
    if (*(int *)(this + 400) != 0) {
      pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
    }
    F_0055a300(pvVar4 GEN_EDX_FWD,(*(undefined * PTR32 *)(gen_frame + 0x8)));
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xfc))(this GEN_EDX_ARG);
    F_005623b0(*(undefined * PTR32 *)(this + 0x18c) GEN_EDX_ARG,uVar3);
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xfc))(this GEN_EDX_ARG);
    *(uint *)(this + 0x184) = uVar3;
    if (*((char *)GEN_TOP((*(int *)(this + 0x180) + 0x28))) != '\0') {
      F_0081d4d0(*(undefined4 *)(this + 0x18c),0,this);
      uVar9 = 0;
      uVar8 = 0;
      uVar6 = 0;
      uVar5 = 4;
      pAVar7 = this;
      pvVar4 = (undefined *)F_0055dcb0();
      F_0056a3d0(pvVar4 GEN_EDX_ARG,uVar5,uVar6,pAVar7,uVar8,uVar9);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18c) + 0x70))))(*(int * PTR32 *)(this + 0x18c) GEN_EDX_ARG);
    iVar2 = *(int *)this;
    uVar3 = ((code *)*(gen_code32 *)(iVar2 + 0xfc))(this);
    ((code *)*(gen_code32 *)(iVar2 + 0xf8))(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),uVar3);
    F_0055a170(*(undefined * PTR32 *)(this + 0x194) GEN_EDX_ARG,(uint)(*(undefined * PTR32 *)(gen_frame + 0x8)) & 0xff,(uint)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x8))) >> 8 & 0xff,
                 (uint)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x8))) >> 0x10 & 0xff);
    F_0055a200(*(undefined4 *)(this + 0x194) GEN_EDX_ARG,(uint)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x8))) >> 0x18);
    F_0055a170(*(undefined * PTR32 *)(this + 0x198) GEN_EDX_ARG,(uint)(*(undefined * PTR32 *)(gen_frame + 0x8)) & 0xff,(uint)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x8))) >> 8 & 0xff,
                 (uint)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x8))) >> 0x10 & 0xff);
    F_0055a200(*(undefined4 *)(this + 0x198) GEN_EDX_ARG,(uint)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x8))) >> 0x18);
    return 1;
  }
  return 0;
}

/* ref: FUN_0081d770 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_0081d770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0x81d770u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  uint * puVar5;
  undefined * puVar6;
  undefined4 uVar7;
  
  if (*(int *)((int)this + 0x180) != 0) {
    F_0055e1c0(this GEN_EDX_FWD,*(float *)&REFG(undefined, 0x109feac),100,0,(float)(float10)1,1);
    F_0055e220(this GEN_EDX_ARG,*(float *)&REFG(undefined, 0x109feac),100,0,(float)(float10)1,1);
    if (*(char *)((int)this + 0x188) != '\0') {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_ARG,1,0);
    }
    uVar2 = F_0055e2f0(this GEN_EDX_ARG,param_1);
    if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2 GEN_EDX_ARG), uVar2 == 0)) ||
       (uVar3 = F_005613a0(uVar2 GEN_EDX_ARG), uVar3 != 1)) {
      uVar2 = 0;
    }
    *(uint *)((int)this + 400) = uVar2;
    F_00568380(*(undefined * PTR32 *)(uVar2 + 0x70) GEN_EDX_ARG,0x17,(uint)*(ushort *)(uVar2 + 100),this,0,0);
    iVar1 = *(int *)((int)this + 400);
    if (iVar1 == 0) {
      pvVar4 = (undefined *)0x0;
    }
    else {
      pvVar4 = *(undefined * PTR32 *)(iVar1 + 0x70);
    }
    F_00568380(pvVar4 GEN_EDX_ARG,0xc,(uint)*(ushort *)(iVar1 + 100),this,0,0);
    uVar2 = F_0055e2f0(this GEN_EDX_ARG,param_2);
    if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2 GEN_EDX_ARG), uVar2 == 0)) ||
       (uVar3 = F_005613a0(uVar2 GEN_EDX_ARG), uVar3 != 9)) {
      uVar2 = 0;
    }
    *(uint *)((int)this + 0x18c) = uVar2;
    uVar2 = F_0055e2f0(this GEN_EDX_ARG,param_3);
    *(uint *)((int)this + 0x194) = uVar2;
    uVar2 = F_0055e2f0(this GEN_EDX_ARG,param_4);
    *(uint *)((int)this + 0x198) = uVar2;
    (*(undefined4 *)(gen_frame + 0x10)) = param_5;
    pvVar4 = *(undefined * PTR32 *)((int)this + 0x18c);
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
    (*(gen_code32 *)(gen_frame + 0x4)) = ((code *)REFP(0x7c6760));
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    F_00574320(pvVar4 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x10)),1,0);
    uVar7 = 0;
    uVar2 = F_00579400(this GEN_EDX_ARG,0);
    F_005874c0((undefined *)((int)this + 0x24) GEN_EDX_ARG,uVar2,uVar7);
    F_0059ead0(*(undefined * PTR32 *)((int)this + 0x18c) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x180) + 0xc))),
                 0,1);
    pvVar4 = *(undefined * PTR32 *)((int)this + 0x180);
    uVar2 = F_007c6380(pvVar4 GEN_EDX_ARG);
    iVar1 = *(int *)((int)pvVar4 + 0x18);
    uVar2 = F_00ab3630(uVar2);
    pvVar4 = (undefined *)F_0055e340(this GEN_EDX_ARG,param_6);
    puVar5 = (uint *)F_00ab36c0(*(undefined4 *)(iVar1 * 0xf0 + uVar2));
    if (puVar5 == (uint *)0x0) {
      puVar6 = &REFG(undefined, 0x10bf23a);
    }
    else {
      puVar6 = ((undefined *)GEN_TOP(((*puVar5 & 0xffffff) + (int)puVar5)));
    }
    F_00584110(pvVar4 GEN_EDX_ARG,puVar6);
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xb8))(this GEN_EDX_ARG,0,0);
  }
  return;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorL::vf44 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_0081d960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81d960u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_0081d770(this GEN_EDX_FWD,0xc,6,8,10,5,3);
  return;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorL::vf62 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081d980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x81d980u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))) != 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))) + 0x38))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180))) GEN_EDX_FWD);
    if (uVar2 == 0xca) {
      iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x180)));
      uVar2 = F_007c6400(iVar1 GEN_EDX_ARG);
      iVar1 = *((int *)GEN_TOP((*(int *)(iVar1 + 4) + 0x180)));
      if (iVar1 == 0) {
        uVar3 = 0;
      }
      else {
        iVar1 = *(int *)(iVar1 + 0x398);
        if (iVar1 == 0) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = *(undefined4 *)(iVar1 + 0x1a8);
        }
      }
      F_00921bd0(REFG(void * PTR32, 0x137129c) GEN_EDX_ARG,&(*(uint *)&gen_args[2]),uVar2,uVar3,(*(uint *)&gen_args[2]));
      *(*(uint * PTR32 *)&gen_args[1]) = (*(uint *)&gen_args[2]);
      return (uint)(*(uint * PTR32 *)&gen_args[1]);
    }
    if (uVar2 - 0x6d0 < 2) {
      F_00921b50(REFG(void * PTR32, 0x137129c) GEN_EDX_ARG,&(*(uint *)&gen_args[2]),(*(uint *)&gen_args[2]));
      *(*(uint * PTR32 *)&gen_args[1]) = (*(uint *)&gen_args[2]);
      return (uint)(*(uint * PTR32 *)&gen_args[1]);
    }
  }
  *(undefined2 *)(*(uint * PTR32 *)&gen_args[1]) = 0;
  *((undefined1 *)GEN_TOP(((int)(*(uint * PTR32 *)&gen_args[1]) + 2))) = 0;
  *(*(uint * PTR32 *)&gen_args[1]) = *(*(uint * PTR32 *)&gen_args[1]) | 0xff000000;
  return (uint)(*(uint * PTR32 *)&gen_args[1]);
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorFacePaint::vf44 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081da40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81da40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  int * piVar2;
  undefined * this_00;
  uint uVar3;
  uint uVar4;
  
  F_0081d770(this GEN_EDX_FWD,0x11,6,8,10,5,3);
  iVar1 = *(int *)(this + 0x18c);
  this_00 = (undefined *)0x0;
  if (iVar1 != 0) {
    this_00 = *(undefined * PTR32 *)(iVar1 + 0x70);
  }
  F_00568380(this_00 GEN_EDX_ARG,0xc,(uint)*(ushort *)(iVar1 + 100),this,0,0);
  uVar3 = F_0055e2f0(this GEN_EDX_ARG,0xd);
  if (((uVar3 == 0) || (uVar3 = F_00559c20(uVar3 GEN_EDX_ARG), uVar3 == 0)) ||
     (uVar4 = F_005613a0(uVar3 GEN_EDX_ARG), uVar4 != 4)) {
    uVar3 = 0;
  }
  *(uint *)(this + 0x1a0) = uVar3;
  F_00568380(*(undefined * PTR32 *)(uVar3 + 0x70) GEN_EDX_ARG,0x17,(uint)*(ushort *)(uVar3 + 100),this,0,0);
  *((undefined1 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x136))) = 1;
  uVar3 = F_0055e2f0(this GEN_EDX_ARG,0xe);
  if (((uVar3 == 0) || (uVar3 = F_00559c20(uVar3 GEN_EDX_ARG), uVar3 == 0)) ||
     (uVar4 = F_005613a0(uVar3 GEN_EDX_ARG), uVar4 != 4)) {
    uVar3 = 0;
  }
  *(uint *)(this + 0x1a4) = uVar3;
  F_00568380(*(undefined * PTR32 *)(uVar3 + 0x70) GEN_EDX_ARG,0x17,(uint)*(ushort *)(uVar3 + 100),this,0,0);
  *((undefined1 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x136))) = 1;
  piVar2 = *(int * PTR32 *)(this + 0x180);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18c) + 0x7c))))(*(int * PTR32 *)(this + 0x18c) GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2 GEN_EDX_ARG);
  if (uVar3 < uVar4) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x1a0) GEN_EDX_ARG,0);
    F_0059dde0(*(undefined * PTR32 *)(this + 0x1a4) GEN_EDX_ARG,1);
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1a4) + 0x3c))))(*(int * PTR32 *)(this + 0x1a4) GEN_EDX_ARG);
    this[0x1a8] = (undefined1)0x0;
  }
  else {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x1a0) GEN_EDX_ARG,1);
    F_0059dde0(*(undefined * PTR32 *)(this + 0x1a4) GEN_EDX_ARG,0);
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1a0) + 0x3c))))(*(int * PTR32 *)(this + 0x1a0) GEN_EDX_ARG);
    this[0x1a8] = (undefined1)0x1;
  }
  this[0x13e] = (undefined1)0x1;
  *(uint *)(this + 0xa4) = uVar3;
  return uVar3;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorFacePaint::vf62 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081dbc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81dbc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  if (*(int *)(this + 0x180) == 0) {
    *(undefined2 *)param_1 = 0;
    *(undefined1 *)((int)param_1 + 2) = 0;
    *param_1 = *param_1 | 0xff000000;
    return (uint)param_1;
  }
  if (this[0x1a8] == (undefined1)0x0) {
    param_2 = param_2 + 0x80;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x137129c) + 0x24) + 0x5c))))(*(int * PTR32 *)(REFG(int, 0x137129c) + 0x24) GEN_EDX_FWD);
  *param_1 = *(uint *)(uVar1 + 0x2400 + param_2 * 4) | 0xff000000;
  return (uint)param_1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorLip::vf44 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_0081dc20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81dc20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  F_0081d770(this GEN_EDX_FWD,0x13,6,8,10,5,3);
  iVar1 = *(int *)(this + 0x18c);
  this_00 = (undefined *)0x0;
  if (iVar1 != 0) {
    this_00 = *(undefined * PTR32 *)(iVar1 + 0x70);
  }
  F_00568380(this_00 GEN_EDX_ARG,0xc,(uint)*(ushort *)(iVar1 + 100),this,0,0);
  uVar2 = F_0055e2f0(this GEN_EDX_ARG,0xd);
  if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2 GEN_EDX_ARG), uVar2 == 0)) ||
     (uVar3 = F_005613a0(uVar2 GEN_EDX_ARG), uVar3 != 4)) {
    uVar2 = 0;
  }
  *(uint *)(this + 0x1a0) = uVar2;
  F_00568380(*(undefined * PTR32 *)(uVar2 + 0x70) GEN_EDX_ARG,0x17,(uint)*(ushort *)(uVar2 + 100),this,0,0);
  *((undefined1 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x136))) = 1;
  uVar2 = F_0055e2f0(this GEN_EDX_ARG,0xe);
  if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2 GEN_EDX_ARG), uVar2 == 0)) ||
     (uVar3 = F_005613a0(uVar2 GEN_EDX_ARG), uVar3 != 4)) {
    uVar2 = 0;
  }
  *(uint *)(this + 0x1a4) = uVar2;
  F_00568380(*(undefined * PTR32 *)(uVar2 + 0x70) GEN_EDX_ARG,0x17,(uint)*(ushort *)(uVar2 + 100),this,0,0);
  *((undefined1 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x136))) = 1;
  uVar2 = F_0055e2f0(this GEN_EDX_ARG,0xf);
  if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2 GEN_EDX_ARG), uVar2 == 0)) ||
     (uVar3 = F_005613a0(uVar2 GEN_EDX_ARG), uVar3 != 4)) {
    uVar2 = 0;
  }
  *(uint *)(this + 0x1a8) = uVar2;
  F_00568380(*(undefined * PTR32 *)(uVar2 + 0x70) GEN_EDX_ARG,0x17,(uint)*(ushort *)(uVar2 + 100),this,0,0);
  *((undefined1 *)GEN_TOP((*(int *)(this + 0x1a8) + 0x136))) = 1;
  piVar4 = *(int * PTR32 *)(this + 0x1a8);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x24))))(*(int * PTR32 *)(this + 0x180) GEN_EDX_ARG);
  if ((uVar2 & 0xffffff00) == 0) {
    F_0059dde0(*(undefined * PTR32 *)(this + 0x1a0) GEN_EDX_ARG,0);
    F_0059dde0(*(undefined * PTR32 *)(this + 0x1a4) GEN_EDX_ARG,0);
    uVar2 = F_0059dde0(*(undefined * PTR32 *)(this + 0x1a8) GEN_EDX_ARG,1);
    *(undefined4 *)(this + 0x1ac) = 2;
  }
  else {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18c) + 0x7c))))(*(int * PTR32 *)(this + 0x18c) GEN_EDX_ARG);
    if (uVar3 < (uVar2 & 0xff)) {
      F_0059dde0(*(undefined * PTR32 *)(this + 0x1a0) GEN_EDX_ARG,0);
      F_0059dde0(*(undefined * PTR32 *)(this + 0x1a4) GEN_EDX_ARG,1);
      uVar2 = F_0059dde0(*(undefined * PTR32 *)(this + 0x1a8) GEN_EDX_ARG,0);
      piVar4 = *(int * PTR32 *)(this + 0x1a4);
      *(undefined4 *)(this + 0x1ac) = 1;
    }
    else {
      F_0059dde0(*(undefined * PTR32 *)(this + 0x1a0) GEN_EDX_ARG,1);
      F_0059dde0(*(undefined * PTR32 *)(this + 0x1a4) GEN_EDX_ARG,0);
      uVar2 = F_0059dde0(*(undefined * PTR32 *)(this + 0x1a8) GEN_EDX_ARG,0);
      piVar4 = *(int * PTR32 *)(this + 0x1a0);
      *(undefined4 *)(this + 0x1ac) = 0;
    }
  }
  if (piVar4 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x3c))(piVar4 GEN_EDX_ARG);
    *(uint *)(this + 0xa4) = uVar2;
    this[0x13e] = (undefined1)0x1;
  }
  return uVar2;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorLip::vf62 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081de50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81de50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  if (*(int *)(this + 0x180) == 0) {
    *(undefined2 *)param_1 = 0;
    *(undefined1 *)((int)param_1 + 2) = 0;
    *param_1 = *param_1 | 0xff000000;
    return (uint)param_1;
  }
  if (*(int *)(this + 0x1ac) == 1) {
    param_2 = param_2 + 0x80;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x137129c) + 0x24) + 0x5c))))(*(int * PTR32 *)(REFG(int, 0x137129c) + 0x24) GEN_EDX_FWD);
  *param_1 = *(uint *)(uVar1 + 0x1c00 + param_2 * 4) | 0xff000000;
  return (uint)param_1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorDouble::vf46 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_0081deb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81deb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 uVar1;
  undefined * pvVar2;
  uint uVar3;
  uint * puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined * pAVar10;
  int iVar11;
  int iVar12;
  
  if ((*(int *)(this + 0x18c) != 0) && (*(int *)(this + 0x180) != 0)) {
    uVar1 = *((undefined1 *)GEN_TOP((*(int *)(this + 0x180) + 0x28)));
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = uVar1;
    (*(uint *)(gen_frame + 0x18)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x18)), 1, 3),uVar1);
    pvVar2 = (undefined *)0x0;
    if (*(int *)(this + 0x194) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x194) + 0x70)));
    }
    F_0055a300(pvVar2 GEN_EDX_FWD,(*(uint *)(gen_frame + 0x18)));
    iVar7 = 0;
    do {
      if (*((char *)GEN_TOP((*(int *)(this + 0x180) + 0x28))) != '\0') {
        if (iVar7 == 0) {
          F_0081d4d0(*(undefined4 *)(this + 0x18c),0,this);
          uVar8 = 4;
          iVar9 = iVar7;
          pAVar10 = this;
          iVar11 = iVar7;
          iVar12 = iVar7;
          pvVar2 = (undefined *)F_0055dcb0();
          F_0056a3d0(pvVar2 GEN_EDX_ARG,uVar8,iVar9,pAVar10,iVar11,iVar12);
        }
        else if ((iVar7 == 1) && (*((char *)GEN_TOP((*(int *)(this + 0x198) + 0x88))) != '\0')) {
          F_0081d4d0(*(undefined4 *)(this + 400),1,this);
        }
      }
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10c))(this GEN_EDX_ARG,iVar7);
      F_005623b0(*(undefined * PTR32 *)(this + iVar7 * 4 + 0x18c) GEN_EDX_ARG,uVar3 & 0xff);
      iVar9 = *(int *)this;
      if (iVar7 == 0) {
        uVar3 = ((code *)*(gen_code32 *)(iVar9 + 0x10c))(this,0);
        puVar4 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(iVar9 + 0xf8))(this,((undefined1 *)(gen_frame + 0xc)),uVar3 & 0xff)));
      }
      else {
        uVar3 = ((code *)*(gen_code32 *)(iVar9 + 0x10c))(this,iVar7);
        puVar4 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(iVar9 + 0xfc))(this,((undefined1 *)(gen_frame + 0x8)),uVar3 & 0xff)));
      }
      uVar3 = *puVar4;
      uVar6 = uVar3 >> 0x10 & 0xff;
      uVar5 = uVar3 >> 8 & 0xff;
      (*(uint *)(gen_frame + 0x18)) = uVar3;
      (*(uint *)(gen_frame + 0x10)) = uVar3 & 0xff;
      (*(uint *)(gen_frame + 0x14)) = uVar5;
      F_0055a170(*(undefined * PTR32 *)(this + iVar7 * 4 + 0x19c) GEN_EDX_ARG,uVar3 & 0xff,uVar5,uVar6);
      uVar3 = (*(uint *)(gen_frame + 0x18)) >> 0x18;
      (*(uint *)(gen_frame + 0x18)) = uVar3;
      F_0055a200(*(undefined4 *)(this + iVar7 * 4 + 0x19c) GEN_EDX_ARG,uVar3);
      F_0055a170(*(undefined * PTR32 *)(this + iVar7 * 4 + 0x1a4) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x10)),(*(uint *)(gen_frame + 0x14)),uVar6);
      F_0055a200(*(undefined4 *)(this + iVar7 * 4 + 0x1a4) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x18)));
      iVar7 = iVar7 + 1;
    } while (iVar7 < 2);
    return 1;
  }
  return 0;
}

/* ref: FUN_0081e050 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_0081e050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8), GEN_P(undefined4 param_9, unsigned int gen_a9), GEN_P(undefined4 param_10, unsigned int gen_a10))
{
  GEN_ENTER(0x81e050u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  uint * puVar5;
  undefined * puVar6;
  int iVar7;
  undefined * PTR32 * ppvVar8;
  
  if (*(int *)((int)this + 0x180) != 0) {
    F_0055e1c0(this GEN_EDX_FWD,*(float *)&REFG(undefined, 0x109feac),100,0,(float)(float10)1,1);
    F_0055e220(this GEN_EDX_ARG,*(float *)&REFG(undefined, 0x109feac),100,0,(float)(float10)1,1);
    if (*(char *)((int)this + 0x188) != '\0') {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_ARG,1,0);
    }
    uVar2 = F_0055e2f0(this GEN_EDX_ARG,param_1);
    if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2 GEN_EDX_ARG), uVar2 == 0)) ||
       (uVar3 = F_005613a0(uVar2 GEN_EDX_ARG), uVar3 != 1)) {
      uVar2 = 0;
    }
    *(uint *)((int)this + 0x194) = uVar2;
    F_00568380(*(undefined * PTR32 *)(uVar2 + 0x70) GEN_EDX_ARG,0x17,(uint)*(ushort *)(uVar2 + 100),this,0,0);
    iVar7 = *(int *)((int)this + 0x194);
    if (iVar7 == 0) {
      pvVar4 = (undefined *)0x0;
    }
    else {
      pvVar4 = *(undefined * PTR32 *)(iVar7 + 0x70);
    }
    F_00568380(pvVar4 GEN_EDX_ARG,0xc,(uint)*(ushort *)(iVar7 + 100),this,0,0);
    (*(undefined4 *)(gen_frame + 0x44)) = param_3;
    (*(undefined4 *)(gen_frame + 0x48)) = param_4;
    ((undefined4 *)(gen_frame + 0x34))[0] = param_7;
    ((undefined4 *)(gen_frame + 0x34))[1] = param_8;
    ((undefined4 *)(gen_frame + 0x34))[2] = param_5;
    ((undefined4 *)(gen_frame + 0x34))[3] = param_6;
    iVar7 = 0;
    do {
      uVar2 = F_0055e2f0(this GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x34))[(int)(iVar7 + 4)]);
      if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2 GEN_EDX_ARG), uVar2 == 0)) ||
         (uVar3 = F_005613a0(uVar2 GEN_EDX_ARG), uVar3 != 9)) {
        uVar2 = 0;
      }
      uVar1 = ((undefined4 *)(gen_frame + 0x34))[(int)(iVar7 + 2)];
      *(uint *)((int)this + iVar7 * 4 + 0x18c) = uVar2;
      uVar2 = F_0055e2f0(this GEN_EDX_ARG,uVar1);
      *(uint *)((int)this + iVar7 * 4 + 0x19c) = uVar2;
      uVar2 = F_0055e2f0(this GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x34))[(int)(iVar7)]);
      *(uint *)((int)this + iVar7 * 4 + 0x1a4) = uVar2;
      (*(undefined4 *)(gen_frame + 0x2c)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = param_9;
      if (iVar7 == 0) {
        pvVar4 = *(undefined * PTR32 *)((int)this + 0x18c);
        ppvVar8 = &(*(undefined * PTR32 *)(gen_frame + 0x18));
        (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
        (*(gen_code32 *)(gen_frame + 0x1c)) = ((code *)REFP(0x7c6ad0));
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        (*(undefined4 *)(gen_frame + 0x24)) = 0;
LAB_0081e1f9: ;
        F_00574320(pvVar4 GEN_EDX_ARG,ppvVar8,&(*(undefined4 *)(gen_frame + 0x28)),1,0);
      }
      else if (iVar7 == 1) {
        pvVar4 = *(undefined * PTR32 *)((int)this + 400);
        ppvVar8 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
        (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x7c6b30));
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        goto LAB_0081e1f9;
      }
      F_0059ead0(*(undefined * PTR32 *)((int)this + iVar7 * 4 + 0x18c) GEN_EDX_ARG,
                   (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x180) + 0xc))),0,1);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 2);
    uVar2 = F_0055e2f0(this GEN_EDX_ARG,param_2);
    if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2 GEN_EDX_ARG), uVar2 == 0)) ||
       (uVar3 = F_005613a0(uVar2 GEN_EDX_ARG), uVar3 != 3)) {
      uVar2 = 0;
    }
    *(uint *)((int)this + 0x198) = uVar2;
    F_00568380(*(undefined * PTR32 *)(uVar2 + 0x70) GEN_EDX_ARG,0x17,(uint)*(ushort *)(uVar2 + 100),this,0,0);
    iVar7 = *(int *)((int)this + 0x198);
    if (iVar7 == 0) {
      pvVar4 = (undefined *)0x0;
    }
    else {
      pvVar4 = *(undefined * PTR32 *)(iVar7 + 0x70);
    }
    F_00568380(pvVar4 GEN_EDX_ARG,0xc,(uint)*(ushort *)(iVar7 + 100),this,0,0);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x180) + 0x24))))(*(int * PTR32 *)((int)this + 0x180) GEN_EDX_ARG);
    if ((uVar2 & 0xff000000) == 0) {
      F_0059dde0(*(undefined * PTR32 *)((int)this + 0x198) GEN_EDX_ARG,0);
    }
    else {
      F_0059dde0(*(undefined * PTR32 *)((int)this + 0x198) GEN_EDX_ARG,1);
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x104))(this GEN_EDX_ARG,1);
    }
    pvVar4 = *(undefined * PTR32 *)((int)this + 0x180);
    uVar2 = F_007c6380(pvVar4 GEN_EDX_ARG);
    iVar7 = *(int *)((int)pvVar4 + 0x18);
    uVar2 = F_00ab3630(uVar2);
    pvVar4 = (undefined *)F_0055e340(this GEN_EDX_ARG,param_10);
    puVar5 = (uint *)F_00ab36c0(*(undefined4 *)(iVar7 * 0xf0 + uVar2));
    if (puVar5 == (uint *)0x0) {
      puVar6 = &REFG(undefined, 0x10bf23b);
    }
    else {
      puVar6 = ((undefined *)GEN_TOP(((*puVar5 & 0xffffff) + (int)puVar5)));
    }
    F_00584110(pvVar4 GEN_EDX_ARG,puVar6);
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xb8))(this GEN_EDX_ARG,0,0);
  }
  return;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorHair::vf44 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_0081e330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81e330u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_0081e050(this GEN_EDX_FWD,0x15,7,9,0xf,0xb,0x11,0xd,0x13,5,3);
  return;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorHair::vf62 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081e350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81e350u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(this + 0x180);
  if (iVar4 == 0) {
    *(undefined2 *)param_1 = 0;
    *(undefined1 *)((int)param_1 + 2) = 0;
    *param_1 = *param_1 | 0xff000000;
    return (uint)param_1;
  }
  uVar2 = F_007c6400(iVar4 GEN_EDX_FWD);
  iVar4 = *((int *)GEN_TOP((*(int *)(iVar4 + 4) + 0x180)));
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(iVar4 + 0x398);
    if (iVar4 == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = *(int *)(iVar4 + 0x1a8);
    }
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x137129c) + 0x24) + 0x5c))))(*(int * PTR32 *)(REFG(int, 0x137129c) + 0x24) GEN_EDX_ARG);
  uVar1 = *((undefined4 *)GEN_TOP((uVar3 + (iVar4 + 2 + ((uVar2 - 1 & 1) + (uVar2 - 1 & 0xfffffffe)) * 2) * 0x1400 + 0x1000
           + param_2 * 4)));
  *(char *)param_1 = (char)uVar1;
  *(char *)((int)param_1 + 1) = (char)((uint)uVar1 >> 8);
  *(char *)((int)param_1 + 2) = (char)((uint)uVar1 >> 0x10);
  *(undefined1 *)((int)param_1 + 3) = 0xff;
  return (uint)param_1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorHair::vf63 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081e3f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81e3f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 uVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x180) == 0) {
    *(undefined2 *)param_1 = 0;
    *(undefined1 *)((int)param_1 + 2) = 0;
    *param_1 = *param_1 | 0xff000000;
    return (uint)param_1;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x137129c) + 0x24) + 0x5c))))(*(int * PTR32 *)(REFG(int, 0x137129c) + 0x24) GEN_EDX_FWD);
  uVar1 = *(undefined4 *)(uVar2 + 0x1800 + param_2 * 4);
  *(char *)param_1 = (char)uVar1;
  *(char *)((int)param_1 + 1) = (char)((uint)uVar1 >> 8);
  *(char *)((int)param_1 + 2) = (char)((uint)uVar1 >> 0x10);
  *(undefined1 *)((int)param_1 + 3) = 0xff;
  return (uint)param_1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorHair::vf65 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081e450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x81e450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * pvVar1;
  uint uVar2;
  
  ((uint *)(gen_frame + 0x0))[6] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if ((char)param_1 != '\0') {
    ((uint *)(gen_frame + 0x0))[0] = 0xf;
    ((uint *)(gen_frame + 0x0))[1] = 0x10;
    ((uint *)(gen_frame + 0x0))[2] = 0x11;
    ((uint *)(gen_frame + 0x0))[3] = 0x12;
    ((uint *)(gen_frame + 0x0))[4] = 0x13;
    ((uint *)(gen_frame + 0x0))[5] = 0x14;
    uVar2 = 0;
    do {
      pvVar1 = (undefined *)F_0055e2f0(this GEN_EDX_FWD,((uint *)(gen_frame + 0x0))[(int)(uVar2)]);
      if (pvVar1 != (undefined *)0x0) {
        F_0055a300(pvVar1 GEN_EDX_ARG,1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 6);
    F_0059d640(*(undefined * PTR32 *)(this + 0x90) GEN_EDX_ARG,0x65);
    F_0081d4d0(*(undefined4 *)(this + 400),1,this);
    pvVar1 = (undefined *)0x0;
    if (*(int *)(this + 400) != 0) {
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
    }
    F_00568380(pvVar1 GEN_EDX_ARG,0xc,1,this,0,0);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x70))))(*(int * PTR32 *)(this + 400) GEN_EDX_ARG);
    F_00c47745(((uint *)(gen_frame + 0x0))[6] ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
    return uVar2;
  }
  F_0059d640(*(undefined * PTR32 *)(this + 0x90) GEN_EDX_ARG,0x11);
  F_0081d570(*(undefined4 *)(this + 400),1,this);
  pvVar1 = (undefined *)0x0;
  if (*(int *)(this + 400) != 0) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
  }
  uVar2 = F_005840a0(pvVar1 GEN_EDX_ARG,0xc,1,this,0);
  F_00c47745(((uint *)(gen_frame + 0x0))[6] ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorEye::vf44 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_0081e570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81e570u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_0081e050(this GEN_EDX_FWD,0x15,7,9,0xf,0xb,0x11,0xd,0x13,5,3);
  return;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorEye::vf62 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081e590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81e590u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 uVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x180) == 0) {
    *(undefined2 *)param_1 = 0;
    *(undefined1 *)((int)param_1 + 2) = 0;
    *param_1 = *param_1 | 0xff000000;
    return (uint)param_1;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x137129c) + 0x24) + 0x5c))))(*(int * PTR32 *)(REFG(int, 0x137129c) + 0x24) GEN_EDX_FWD);
  uVar1 = *(undefined4 *)(uVar2 + 0x1400 + param_2 * 4);
  *(char *)param_1 = (char)uVar1;
  *(char *)((int)param_1 + 1) = (char)((uint)uVar1 >> 8);
  *(char *)((int)param_1 + 2) = (char)((uint)uVar1 >> 0x10);
  *(undefined1 *)((int)param_1 + 3) = 0xff;
  return (uint)param_1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureColorEye::vf65 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081e5f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x81e5f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  uint uVar1;
  
  ((uint *)(gen_frame + 0x0))[6] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if ((char)param_1 != '\0') {
    ((uint *)(gen_frame + 0x0))[0] = 9;
    ((uint *)(gen_frame + 0x0))[1] = 10;
    ((uint *)(gen_frame + 0x0))[2] = 0xb;
    ((uint *)(gen_frame + 0x0))[3] = 0xc;
    ((uint *)(gen_frame + 0x0))[4] = 0xd;
    ((uint *)(gen_frame + 0x0))[5] = 0xe;
    uVar1 = 0;
    do {
      this_00 = (undefined *)F_0055e2f0(this GEN_EDX_FWD,((uint *)(gen_frame + 0x0))[(int)(uVar1)]);
      if (this_00 != (undefined *)0x0) {
        F_0055a300(this_00 GEN_EDX_ARG,1);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 6);
    F_0059d640(*(undefined * PTR32 *)(this + 0x90) GEN_EDX_ARG,0x65);
    F_0081d4d0(*(undefined4 *)(this + 400),1,this);
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x70))))(*(int * PTR32 *)(this + 400) GEN_EDX_ARG);
    F_00c47745(((uint *)(gen_frame + 0x0))[6] ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
    return uVar1;
  }
  F_0059d640(*(undefined * PTR32 *)(this + 0x90) GEN_EDX_ARG,0x11);
  uVar1 = F_0081d570(*(undefined4 *)(this + 400),1,this);
  F_00c47745(((uint *)(gen_frame + 0x0))[6] ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureSlider::vf44 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_0081e6d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81e6d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined * this_00;
  undefined * this_01;
  undefined * this_02;
  uint * puVar4;
  undefined * puVar5;
  int iVar6;
  undefined4 * puVar7;
  undefined4 uVar8;
  
  if (*(int *)(this + 0x180) != 0) {
    F_0055e1c0(this GEN_EDX_FWD,*(float *)&REFG(undefined, 0x109feac),100,0,(float)(float10)1,1);
    F_0055e220(this GEN_EDX_ARG,*(float *)&REFG(undefined, 0x109feac),100,0,(float)(float10)1,1);
    if (this[0x188] != (undefined1)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_ARG,1,0);
    }
    uVar1 = F_0055e2f0(this GEN_EDX_ARG,10);
    if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1 GEN_EDX_ARG), uVar1 == 0)) ||
       (uVar2 = F_005613a0(uVar1 GEN_EDX_ARG), uVar2 != 1)) {
      uVar1 = 0;
    }
    *(uint *)(this + 400) = uVar1;
    F_00568380(*(undefined * PTR32 *)(uVar1 + 0x70) GEN_EDX_ARG,0x17,(uint)*(ushort *)(uVar1 + 100),this,0,0);
    iVar6 = *(int *)(this + 400);
    pvVar3 = (undefined *)0x0;
    if (iVar6 != 0) {
      pvVar3 = *(undefined * PTR32 *)(iVar6 + 0x70);
    }
    F_00568380(pvVar3 GEN_EDX_ARG,0xc,(uint)*(ushort *)(iVar6 + 100),this,0,0);
    uVar1 = F_0055e2f0(this GEN_EDX_ARG,9);
    if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1 GEN_EDX_ARG), uVar1 == 0)) ||
       (uVar2 = F_005613a0(uVar1 GEN_EDX_ARG), uVar2 != 6)) {
      uVar1 = 0;
    }
    *(uint *)(this + 0x18c) = uVar1;
    F_00568380(*(undefined * PTR32 *)(uVar1 + 0x70) GEN_EDX_ARG,0x1b,(uint)*(ushort *)(uVar1 + 100),this,0,0);
    *((byte *)GEN_TOP((*(int *)(this + 0x18c) + 0xae))) = *((byte *)GEN_TOP((*(int *)(this + 0x18c) + 0xae))) & 0xf5 | 5;
    *((byte *)GEN_TOP((*(int *)(this + 0x18c) + 0xae))) = *((byte *)GEN_TOP((*(int *)(this + 0x18c) + 0xae))) | 0x80;
    uVar1 = F_0055e340(this GEN_EDX_ARG,8);
    *(uint *)(this + 0x194) = uVar1;
    this_00 = (undefined *)F_0055e340(this GEN_EDX_ARG,6);
    this_01 = (undefined *)F_0055e340(this GEN_EDX_ARG,7);
    this_02 = (undefined *)F_0055e340(this GEN_EDX_ARG,3);
    pvVar3 = *(undefined * PTR32 *)(this + 0x180);
    uVar1 = F_007c6380(pvVar3 GEN_EDX_ARG);
    iVar6 = *(int *)((int)pvVar3 + 0x18);
    uVar1 = F_00ab3630(uVar1);
    iVar6 = iVar6 * 0xf0;
    puVar7 = (undefined4 *)(iVar6 + uVar1);
    F_00561c50(*(undefined4 *)(this + 0x18c) GEN_EDX_ARG,*(undefined4 *)(iVar6 + 0x14 + uVar1));
    F_00561c70(*(undefined4 *)(this + 0x18c) GEN_EDX_ARG,puVar7[6]);
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x18c) + 0xa4))) = 1;
    puVar4 = (uint *)F_00ab36c0(puVar7[3]);
    if (puVar4 == (uint *)0x0) {
      puVar5 = &REFG(undefined, 0x10bf24b);
    }
    else {
      puVar5 = ((undefined *)GEN_TOP(((*puVar4 & 0xffffff) + (int)puVar4)));
    }
    F_00584110(this_00 GEN_EDX_ARG,puVar5);
    puVar4 = (uint *)F_00ab36c0(puVar7[4]);
    if (puVar4 == (uint *)0x0) {
      puVar5 = &REFG(undefined, 0x10bf257);
    }
    else {
      puVar5 = ((undefined *)GEN_TOP(((*puVar4 & 0xffffff) + (int)puVar4)));
    }
    F_00584110(this_01 GEN_EDX_ARG,puVar5);
    puVar4 = (uint *)F_00ab36c0(*puVar7);
    if (puVar4 == (uint *)0x0) {
      puVar5 = &REFG(undefined, 0x10bf26d);
    }
    else {
      puVar5 = ((undefined *)GEN_TOP(((*puVar4 & 0xffffff) + (int)puVar4)));
    }
    F_00584110(this_02 GEN_EDX_ARG,puVar5);
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x38))))(*(int * PTR32 *)(this + 0x180) GEN_EDX_ARG);
    if (uVar1 == 0xc9) {
      uVar8 = 0x65;
    }
    else {
      uVar8 = 0x11;
    }
    F_0059d6a0(this GEN_EDX_ARG,uVar8,1,0);
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xb8))(this GEN_EDX_ARG,param_1,param_2);
  }
  return;
}

/* ref: FUN_0081e950 */
GEN_LIB GEN_FRAME uint F_0081e950(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x81e950u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  
  if (param_1 == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *(undefined * PTR32 *)(param_1 + 0x70);
  }
  F_00568380(pvVar2 GEN_EDX_ARG,0x17,param_2,param_3,0,0);
  if (param_1 == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *(undefined * PTR32 *)(param_1 + 0x70);
  }
  F_00568380(pvVar2 GEN_EDX_ARG,6,param_2,param_3,0,0);
  if (param_1 == 0) {
    uVar1 = F_00568380((undefined *)0x0 GEN_EDX_ARG,7,param_2,param_3,0,0);
    return uVar1;
  }
  uVar1 = F_00568380(*(undefined * PTR32 *)(param_1 + 0x70) GEN_EDX_ARG,7,param_2,param_3,0,0);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureRadioButton::vf46 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_0081e9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81e9c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 local_8;
  
  if ((*(int *)(this + 0x18c) != 0) && (*(int *)(this + 0x180) != 0)) {
    local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),*((undefined1 *)GEN_TOP((*(int *)(this + 0x180) + 0x28))));
    F_0055a300(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70))) GEN_EDX_FWD,local_8);
    return 1;
  }
  return 0;
}

/* ref: FUN_0081ea00 */
GEN_LIB GEN_FRAME uint F_0081ea00(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x81ea00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  undefined * pvVar3;
  
  if (param_1 == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *(undefined * PTR32 *)(param_1 + 0x70);
  }
  bVar1 = F_0055a220(pvVar3 GEN_EDX_ARG,0x21);
  if (bVar1 == 0) {
    if (param_1 == 0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *(undefined * PTR32 *)(param_1 + 0x70);
    }
    F_00568380(pvVar3 GEN_EDX_ARG,0x21,param_2,param_3,0,0);
  }
  if (param_1 == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *(undefined * PTR32 *)(param_1 + 0x70);
  }
  bVar1 = F_0055a220(pvVar3 GEN_EDX_ARG,0x1f);
  if (bVar1 == 0) {
    if (param_1 == 0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = *(undefined * PTR32 *)(param_1 + 0x70);
    }
    F_00568380(pvVar3 GEN_EDX_ARG,0x1f,param_2,param_3,0,0);
  }
  if (param_1 == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *(undefined * PTR32 *)(param_1 + 0x70);
  }
  bVar1 = F_0055a220(pvVar3 GEN_EDX_ARG,0x20);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    if (param_1 == 0) {
      uVar2 = F_00568380((undefined *)0x0 GEN_EDX_ARG,0x20,param_2,param_3,0,0);
      return uVar2;
    }
    uVar2 = F_00568380(*(undefined * PTR32 *)(param_1 + 0x70) GEN_EDX_ARG,0x20,param_2,param_3,0,0);
  }
  return uVar2;
}

/* ref: FUN_0081eab0 */
GEN_LIB GEN_FRAME uint F_0081eab0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x81eab0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  undefined * pvVar2;
  
  if (param_1 == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *(undefined * PTR32 *)(param_1 + 0x70);
  }
  F_005840a0(pvVar2 GEN_EDX_ARG,0x21,param_2,param_3,0);
  if (param_1 == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *(undefined * PTR32 *)(param_1 + 0x70);
  }
  F_005840a0(pvVar2 GEN_EDX_ARG,0x1f,param_2,param_3,0);
  if (param_1 == 0) {
    uVar1 = F_005840a0((undefined *)0x0 GEN_EDX_ARG,0x20,param_2,param_3,0);
    return uVar1;
  }
  uVar1 = F_005840a0(*(undefined * PTR32 *)(param_1 + 0x70) GEN_EDX_ARG,0x20,param_2,param_3,0);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureIcon::vf37 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_0081eb20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x81eb20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*(int *)(this + 0x18c) != 0) {
    F_0081eab0(*(int *)(this + 0x18c),0,this);
  }
  uVar1 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeatureIcon::vf46 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_0081eb50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81eb50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined * pvVar6;
  undefined * pAVar7;
  uint uVar8;
  undefined1 AVar9;
  
  if ((*(int *)(this + 0x18c) != 0) && (*(int *)(this + 0x180) != 0)) {
    iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x180) + 0xc)));
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xfc))(this GEN_EDX_FWD);
    if (iVar1 <= (int)uVar4) {
      return 0;
    }
    (*(undefined4 *)(gen_frame + 0x14)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x14)), 1, 3),*((char *)GEN_TOP((*(int *)(this + 0x180) + 0x28))));
    if (*((char *)GEN_TOP((*(int *)(this + 0x180) + 0x28))) != '\0') {
      F_0081ea00(*(undefined4 *)(this + 0x18c),0,this);
    }
    if (*(int *)(this + 400) == 0) {
      pvVar6 = (undefined *)0x0;
    }
    else {
      pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
    }
    F_0055a300(pvVar6 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x14)));
    F_0058d980(*(undefined4 *)(this + 0x18c) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((*(int *)(this + 0x180) + 0xc))));
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xfc))(this GEN_EDX_ARG);
    F_005623b0(*(undefined * PTR32 *)(this + 0x18c) GEN_EDX_ARG,uVar4);
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xfc))(this GEN_EDX_ARG);
    pvVar6 = *(undefined * PTR32 *)(this + 0x180);
    *(uint *)(this + 0x184) = uVar4;
    uVar4 = F_007c6380(pvVar6 GEN_EDX_ARG);
    iVar1 = *(int *)((int)pvVar6 + 0x18);
    uVar5 = F_00ab3630(uVar4);
    uVar2 = *((uint *)GEN_TOP((*(int *)(this + 0x180) + 0x24)));
    uVar3 = *((uint *)GEN_TOP((*(int *)(this + 0x180) + 0xc)));
    uVar8 = 0;
    uVar4 = 1;
    if (uVar3 != 0) {
      pAVar7 = this + 0x194;
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (undefined4 *)(uVar5 + iVar1 * 0xf0 + 0xc);
      do {
        if (0x1b < uVar8) {
          return 1;
        }
        AVar9 = (undefined1)((uVar2 & uVar4) != 0);
        pAVar7[4] = AVar9;
        (*(undefined4 *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3),AVar9);
        *(undefined4 *)pAVar7 = *(*(undefined4 * PTR32 *)(gen_frame + 0x18));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18c) + 0x54))))(*(int * PTR32 *)(this + 0x18c) GEN_EDX_ARG,uVar8,(*(undefined4 *)(gen_frame + 0xc)));
        (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 1;
        pAVar7 = pAVar7 + 8;
        uVar8 = uVar8 + 1;
        uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      } while (uVar8 < uVar3);
    }
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::AddonCharaMakeFeatureIconFacePaint::vf46 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_0081ecc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81ecc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  byte bVar2;
  uint uVar3;
  undefined1 AVar4;
  
  bVar2 = F_0081eb50((undefined *)this GEN_EDX_FWD,param_1,param_2);
  if ((bVar2 != 0) && (piVar1 = *(int * PTR32 *)(this + 0x180), piVar1 != (int *)0x0)) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1 GEN_EDX_ARG);
    AVar4 = (undefined1)((uVar3 & 0x80) != 0);
    this[0x27c] = AVar4;
    F_0059dde0(*(undefined * PTR32 *)(this + 0x278) GEN_EDX_ARG,CONCAT31((int3)(uVar3 >> 8),AVar4));
  }
  return bVar2;
}

/* ref: Client::UI2::AddonCharaMakeFeatureIconFeature::vf46 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_0081ed10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81ed10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined * pvVar9;
  uint uVar10;
  
  if ((*(int *)(this + 0x18c) != 0) && (*(int *)(this + 0x180) != 0)) {
    cVar1 = *((char *)GEN_TOP((*(int *)(this + 0x180) + 0x28)));
    (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),cVar1);
    if ((cVar1 != '\0') &&
       (bVar4 = F_0055a220(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70))) GEN_EDX_FWD,0x21), bVar4 == 0)) {
      if (*(int *)(this + 0x18c) == 0) {
        pvVar9 = (undefined *)0x0;
      }
      else {
        pvVar9 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
      }
      F_00568380(pvVar9 GEN_EDX_ARG,0x21,0,this,0,0);
    }
    if (*(int *)(this + 400) == 0) {
      pvVar9 = (undefined *)0x0;
    }
    else {
      pvVar9 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
    }
    F_0055a300(pvVar9 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)));
    F_0058d980(*(undefined4 *)(this + 0x18c) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((*(int *)(this + 0x180) + 0xc))));
    pvVar9 = *(undefined * PTR32 *)(this + 0x180);
    *(undefined4 *)(this + 0x184) = 0xffffffff;
    uVar5 = F_007c6380(pvVar9 GEN_EDX_ARG);
    uVar6 = F_0081c170(*(undefined * PTR32 *)((int)pvVar9 + 4) GEN_EDX_ARG);
    uVar7 = F_00ab3630(uVar5);
    uVar2 = *((uint *)GEN_TOP((*(int *)(this + 0x180) + 0x24)));
    uVar3 = *((uint *)GEN_TOP((*(int *)(this + 0x180) + 0xc)));
    uVar8 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xfc))(this GEN_EDX_ARG);
    uVar10 = 0;
    uVar5 = 1;
    if (uVar3 != 0) {
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = this + 0x194;
      do {
        if (0x1b < uVar10) {
          return 1;
        }
        *(undefined4 *)(*(undefined * PTR32 *)(gen_frame + 0x8)) = *(undefined4 *)(uVar7 + 0x1a4c + uVar6 * 0x1c + uVar10 * 4);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18c) + 0x54))))
                  (*(int * PTR32 *)(this + 0x18c) GEN_EDX_ARG,uVar10,(uint)((uVar2 & uVar5) != 0));
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18c) + 0x5c))))
                  (*(undefined4 *)(this + 0x18c),uVar10,
                   (uint)((uVar8 >> ((byte)uVar10 & 0x1f) & 1) != 0));
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)(gen_frame + 0x8)) + 8;
        uVar10 = uVar10 + 1;
        uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
      } while (uVar10 < uVar3);
    }
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::AddonCharaMakeFeatureIconTatoo::vf46 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_0081ee80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81ee80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined * pvVar9;
  uint uVar10;
  
  if ((*(int *)(this + 0x18c) != 0) && (*(int *)(this + 0x180) != 0)) {
    cVar1 = *((char *)GEN_TOP((*(int *)(this + 0x180) + 0x28)));
    (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),cVar1);
    if ((cVar1 != '\0') &&
       (bVar4 = F_0055a220(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70))) GEN_EDX_FWD,0x21), bVar4 == 0)) {
      if (*(int *)(this + 0x18c) == 0) {
        pvVar9 = (undefined *)0x0;
      }
      else {
        pvVar9 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x70)));
      }
      F_00568380(pvVar9 GEN_EDX_ARG,0x21,0,this,0,0);
    }
    if (*(int *)(this + 400) == 0) {
      pvVar9 = (undefined *)0x0;
    }
    else {
      pvVar9 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 400) + 0x70)));
    }
    F_0055a300(pvVar9 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x0)));
    F_0058d980(*(undefined4 *)(this + 0x18c) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((*(int *)(this + 0x180) + 0xc))));
    pvVar9 = *(undefined * PTR32 *)(this + 0x180);
    *(undefined4 *)(this + 0x184) = 0xffffffff;
    uVar5 = F_007c6380(pvVar9 GEN_EDX_ARG);
    uVar6 = F_0081c170(*(undefined * PTR32 *)((int)pvVar9 + 4) GEN_EDX_ARG);
    uVar7 = F_00ab3630(uVar5);
    uVar2 = *((uint *)GEN_TOP((*(int *)(this + 0x180) + 0x24)));
    uVar3 = *((uint *)GEN_TOP((*(int *)(this + 0x180) + 0xc)));
    uVar8 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xfc))(this GEN_EDX_ARG);
    uVar10 = 0;
    uVar5 = 1;
    if (uVar3 != 0) {
      (*(undefined * PTR32 *)(gen_frame + 0x4)) = this + 0x194;
      (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)(uVar7 + uVar6 * 0x1c + 0x1a60);
      do {
        if (1 < uVar10) {
          return 1;
        }
        *(undefined4 *)(*(undefined * PTR32 *)(gen_frame + 0x4)) = *(*(undefined4 * PTR32 *)(gen_frame + 0x8));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18c) + 0x54))))
                  (*(int * PTR32 *)(this + 0x18c) GEN_EDX_ARG,uVar10,(uint)((uVar2 & uVar5) != 0));
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18c) + 0x5c))))
                  (*(undefined4 *)(this + 0x18c),uVar10,
                   (uint)((uVar8 >> ((byte)uVar10 & 0x1f) & 1) != 0));
        (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 1;
        (*(undefined * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 *)(gen_frame + 0x4)) + 8;
        uVar10 = uVar10 + 1;
        uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
      } while (uVar10 < uVar3);
    }
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::AddonLicenseViewer::vf44 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_0081f000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x81f000u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  undefined * this_00;
  undefined4 uVar5;
  
  this_00 = (undefined *)0x0;
  uVar3 = F_0055e2f0(this GEN_EDX_FWD,2);
  if (uVar3 != 0) {
    this_00 = (undefined *)F_00559ba0(uVar3 GEN_EDX_ARG);
  }
  *(undefined4 *)(this + 0x180) = 0;
  uVar3 = F_0055e2f0(this GEN_EDX_ARG,3);
  if (uVar3 == 0) goto LAB_0081f054;
  uVar3 = F_00559c20(uVar3 GEN_EDX_ARG);
  if (uVar3 == 0) {
LAB_0081f04b: ;
    uVar3 = 0;
  }
  else {
    uVar4 = F_005613a0(uVar3 GEN_EDX_ARG);
    if (uVar4 != 0xd) goto LAB_0081f04b;
  }
  *(uint *)(this + 0x180) = uVar3;
LAB_0081f054: ;
  if ((this_00 != (undefined *)0x0) && (*(int *)(this + 0x180) != 0)) {
    uVar2 = F_0055a020(this_00 GEN_EDX_ARG);
    F_0055a060(this_00 GEN_EDX_ARG,(uint)(ushort)(uVar2 - 0x14));
    F_00584580(this_00 GEN_EDX_ARG,1);
    F_0055ad70(this_00 GEN_EDX_ARG,1);
    F_005842a0(this_00 GEN_EDX_ARG,0xab6);
    uVar2 = F_0055a020(this_00 GEN_EDX_ARG);
    F_0055a060(this_00 GEN_EDX_ARG,(uint)(ushort)(uVar2 + 0x14));
    uVar5 = 0;
    uVar3 = F_0055e2f0(this GEN_EDX_ARG,4);
    F_0058e3c0(*(undefined * PTR32 *)(this + 0x180) GEN_EDX_ARG,this_00,uVar3,uVar5);
  }
  bVar1 = F_0056b630(this GEN_EDX_ARG,0x18ad9,7,0,9,0,0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::UI2::AddonLicenseViewer::vf52 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_0081f0e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x81f0e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  uint uVar2;
  
  if (*param_1 == 9) {
    uVar1 = 0;
    if (*(int *)(this + 0x180) != 0) {
      uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
    }
    uVar2 = F_0055a350(uVar1 GEN_EDX_FWD);
    if ((char)uVar2 != '\0') {
      F_0059f6f0(*(undefined * PTR32 *)(this + 0x180) GEN_EDX_ARG,-(int)*((short *)GEN_TOP(((int)*(undefined * PTR32 *)(this + 0x180) + 0xc2))),1
                  );
    }
  }
  else {
    if (*param_1 != 10) {
      return 0;
    }
    uVar1 = 0;
    if (*(int *)(this + 0x180) != 0) {
      uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x180) + 0x70)));
    }
    uVar2 = F_0055a350(uVar1 GEN_EDX_ARG);
    if ((char)uVar2 != '\0') {
      F_0059f6f0(*(undefined * PTR32 *)(this + 0x180) GEN_EDX_ARG,(int)*((short *)GEN_TOP(((int)*(undefined * PTR32 *)(this + 0x180) + 0xc2))),1)
      ;
      return 1;
    }
  }
  return 1;
}

/* ref: FUN_0081f170 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081f170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x81f170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * pvVar1;
  uint uVar2;
  uint * this_00;
  int iVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  F_0059d6a0(this GEN_EDX_FWD,*(undefined4 *)(&REFG(undefined, 0x10d6850) + param_1 * 4),1,1);
  if (param_1 == 0) {
    pvVar1 = (undefined *)F_0055e2f0(this GEN_EDX_ARG,8);
    if (pvVar1 != (undefined *)0x0) {
      F_0059d670(pvVar1 GEN_EDX_ARG,0x65);
    }
    pvVar1 = (undefined *)F_0055e2f0(this GEN_EDX_ARG,0xe);
    if (pvVar1 != (undefined *)0x0) {
      F_0059d670(pvVar1 GEN_EDX_ARG,0x65);
    }
    uVar4 = 0x14;
LAB_0081f1df: ;
    pvVar1 = (undefined *)F_0055e2f0(this GEN_EDX_ARG,uVar4);
    if (pvVar1 != (undefined *)0x0) {
      F_0059d670(pvVar1 GEN_EDX_ARG,0x65);
    }
  }
  else {
    if (param_1 == 1) {
      uVar4 = 0x21;
      goto LAB_0081f1df;
    }
    if (param_1 == 3) {
      uVar4 = 0x32;
      goto LAB_0081f1df;
    }
  }
  if (param_1 == 0) {
    F_0059ead0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x180) + 0x10))) GEN_EDX_ARG,0,0,1);
    F_0059ead0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x180) + 0x14))) GEN_EDX_ARG,0,0,1);
    pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x180) + 0x18)));
  }
  else if (param_1 == 1) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x180) + 0x58)));
  }
  else {
    if (param_1 != 3) goto LAB_0081f250;
    pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x180) + 0x8c)));
  }
  F_0059ead0(pvVar1 GEN_EDX_ARG,0,0,1);
LAB_0081f250: ;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,3);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,3);
  (*(int *)(gen_frame + 0xc)) = param_1;
  F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar3 = 2;
  do {
    this_00 = this_00 - 2;
    uVar2 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_0081f2b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081f2b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x81f2b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x180);
  if (param_1 < (uint)(*(int *)(uVar1 + 0x20) - *(int *)(uVar1 + 0x1c) >> 2)) {
    uVar1 = F_00584110((undefined *)*param_2 GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*(int *)(uVar1 + 0x1c) + param_1 * 4))));
  }
  return uVar1;
}

/* ref: FUN_0081f2e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081f2e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x81f2e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x180);
  if (param_1 < (uint)(*(int *)(uVar1 + 0x30) - *(int *)(uVar1 + 0x2c) >> 2)) {
    uVar1 = F_00584110((undefined *)*param_2 GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*(int *)(uVar1 + 0x2c) + param_1 * 4))));
  }
  return uVar1;
}

/* ref: FUN_0081f310 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081f310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x81f310u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x180);
  if (param_1 < (uint)(*(int *)(uVar1 + 0x40) - *(int *)(uVar1 + 0x3c) >> 2)) {
    uVar1 = F_00584110((undefined *)*param_2 GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*(int *)(uVar1 + 0x3c) + param_1 * 4))));
  }
  return uVar1;
}

/* ref: FUN_0081f340 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081f340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x81f340u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x180);
  if (param_1 < (uint)(*(int *)(uVar1 + 0x60) - *(int *)(uVar1 + 0x5c) >> 2)) {
    uVar1 = F_00584110((undefined *)*param_2 GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*(int *)(uVar1 + 0x5c) + param_1 * 4))));
  }
  return uVar1;
}

/* ref: FUN_0081f370 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081f370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x81f370u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x180);
  if (param_1 < (uint)(*(int *)(uVar1 + 0x70) - *(int *)(uVar1 + 0x6c) >> 2)) {
    uVar1 = F_00584110((undefined *)*param_2 GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*(int *)(uVar1 + 0x6c) + param_1 * 4))));
  }
  return uVar1;
}

/* ref: FUN_0081f3a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081f3a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x81f3a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x180);
  if (param_1 < (uint)(*(int *)(uVar1 + 0x94) - *(int *)(uVar1 + 0x90) >> 2)) {
    uVar1 = F_00584110((undefined *)*param_2 GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*(int *)(uVar1 + 0x90) + param_1 * 4))));
  }
  return uVar1;
}

/* ref: FUN_0081f3e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081f3e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x81f3e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  undefined * this_00;
  
  uVar1 = *(int *)((int)this + 0x18c) - *(int *)((int)this + 0x188) >> 2;
  if (param_1 < uVar1) {
    this_00 = (undefined *)F_00559ba0(*param_2 GEN_EDX_FWD);
    uVar1 = 0;
    if (this_00 != (undefined *)0x0) {
      uVar1 = F_00584110(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x188) + param_1 * 4))));
    }
  }
  return uVar1;
}

/* ref: Client::UI2::AddonSupportSubEdit::vf37 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_0081f430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x81f430u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(this + 0x1c8);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x144) = 0;
    *(undefined4 *)(iVar1 + 0x148) = 0;
    *(undefined4 *)(iVar1 + 0x14c) = 0;
  }
  if (*(int *)(this + 0x1cc) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1cc) + 0x70))) GEN_EDX_FWD,0x17,0,this,0);
  }
  if (*(int *)(this + 0x1d0) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1d0) + 0x70))) GEN_EDX_ARG,0x17,1,this,0);
  }
  uVar2 = F_005b0510((undefined *)this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_0081f4a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_0081f4a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x81f4a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined4 in_ecx;
  undefined * this_00;
  
  uVar1 = F_0042b790(((undefined *)GEN_TOP((*(int *)((int)this + 0x1c4) + 0x9c))) GEN_EDX_FWD);
  if (uVar1 != 0) {
    in_ecx = 0;
    if (*(int *)((int)this + 0x1cc) != 0) {
      in_ecx = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1cc) + 0x70)));
    }
    uVar1 = F_0055a350(in_ecx GEN_EDX_ARG);
    this_00 = ((undefined *)GEN_TOP((*(int *)((int)this + 0x1c8) + 0x9c)));
    if ((char)uVar1 == '\0') {
      uVar1 = F_0042b790(this_00 GEN_EDX_ARG);
      if (uVar1 == 0) {
        return 0;
      }
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1cc) + 0x28))))(*(int * PTR32 *)((int)this + 0x1cc) GEN_EDX_ARG,1);
      return uVar1;
    }
    uVar1 = F_0042b790(this_00 GEN_EDX_ARG);
    if (uVar1 != 0) {
      return uVar1;
    }
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1cc) + 0x28))))(*(int * PTR32 *)((int)this + 0x1cc) GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_0081f510 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081f510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x81f510u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  undefined * this_00;
  
  uVar1 = *(int *)((int)this + 0x184) - *(int *)((int)this + 0x180) >> 2;
  if (param_1 < uVar1) {
    this_00 = (undefined *)F_00559ba0(*param_2 GEN_EDX_FWD);
    uVar1 = F_00584110(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x180) + param_1 * 4))));
    if ((*(int *)((int)this + 0x1a0) < 1) || (*(int *)((int)this + 0x1b0) == 4)) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1d4) + 0x28))))(*(int * PTR32 *)((int)this + 0x1d4) GEN_EDX_ARG,0);
    }
  }
  return uVar1;
}

/* ref: FUN_0081f570 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081f570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x81f570u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  undefined * this_00;
  
  uVar1 = *(int *)((int)this + 0x194) - *(int *)((int)this + 400) >> 2;
  if (param_1 < uVar1) {
    this_00 = (undefined *)F_00559ba0(*param_2 GEN_EDX_FWD);
    uVar1 = F_00584110(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)((int)this + 400) + param_1 * 4))));
    if ((*(int *)((int)this + 0x1a4) < 1) || (*(int *)((int)this + 0x1b0) == 4)) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1d8) + 0x28))))(*(int * PTR32 *)((int)this + 0x1d8) GEN_EDX_ARG,0);
    }
  }
  return uVar1;
}

/* ref: Client::UI2::AddonSupportSubEdit::vf25 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081f5d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x81f5d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined4 in_ecx;
  undefined1 * this_00;
  int iVar2;
  
  this_00 = (gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)) GEN_EDX_FWD,3);
  (*(undefined4 *)(gen_frame + 0x10)) = 0xffffffff;
  if (*(int *)(this + 0x1cc) == 0) {
    in_ecx = 0;
  }
  else {
    in_ecx = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1cc) + 0x70)));
  }
  uVar1 = F_0055a350(in_ecx GEN_EDX_ARG);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)) GEN_EDX_ARG,2);
  (*(undefined1 *)(gen_frame + 0x18)) = (char)uVar1;
  F_005a9110(this GEN_EDX_ARG,2,&(*(undefined4 *)(gen_frame + 0xc)));
  iVar2 = 1;
  do {
    this_00 = this_00 - 8;
    uVar1 = F_005a2670(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_0081f650 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_0081f650(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x81f650u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  char * pcVar1;
  
  if (param_1 != (undefined *)0x0) {
    if (((byte)*(undefined4 *)(param_2 + param_3 * 8) & 0xf) == 6) {
      pcVar1 = *(char * PTR32 *)(param_2 + 4 + param_3 * 8);
      if (*pcVar1 == '\0') {
        F_0055a300(*(undefined * PTR32 *)((int)param_1 + 0x70) GEN_EDX_ARG,0);
        F_00589280(param_1 GEN_EDX_ARG,pcVar1);
        return;
      }
      F_0055a300(*(undefined * PTR32 *)((int)param_1 + 0x70) GEN_EDX_ARG,1);
      F_00589280(param_1 GEN_EDX_ARG,pcVar1);
    }
  }
  return;
}

/* ref: Client::UI2::AddonSupportSubView::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081f6b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x81f6b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  undefined4 uVar2;
  uint * puVar3;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar1 = param_1 & 0xffff;
  if (uVar1 == 0xf) {
    if ((*(short *)(param_4 + 4) != 0) || (*(short *)(param_4 + 6) != 0)) {
      uVar2 = 0;
      if (*(int *)(this + 0x1a8) != 0) {
        uVar2 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1a8) + 0x70)));
      }
      uVar1 = F_0055a350(uVar2 GEN_EDX_FWD);
      if ((char)uVar1 != '\0') {
        uVar1 = F_0059f6f0(*(undefined * PTR32 *)(this + 0x1a8) GEN_EDX_ARG,
                             ((uint)(*(short *)(param_4 + 6) < 1) * 2 - 1) *
                             (int)*((short *)GEN_TOP(((int)*(undefined * PTR32 *)(this + 0x1a8) + 0xc2))),1);
        *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x80000;
        *(undefined1 *)(param_3 + 0x15) = 2;
      }
    }
  }
  else if (uVar1 == 0x17) {
    if ((param_2 == 0) || (param_2 == 1)) {
      F_00557670(param_3 GEN_EDX_ARG,0);
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,3);
      (*(int *)(gen_frame + 0x14)) = param_2;
      uVar1 = F_0055aaf0(*(undefined4 *)(this + 0x194) GEN_EDX_ARG);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,6);
      (*(uint *)(gen_frame + 0x1c)) = uVar1;
      uVar1 = F_0055aaf0(*(undefined4 *)(this + 0x198) GEN_EDX_ARG);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,6);
      (*(uint *)(gen_frame + 0x24)) = uVar1;
      F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x10)));
      puVar3 = &(*(uint *)(gen_frame + 0x28));
      iVar4 = 2;
      do {
        puVar3 = puVar3 - 2;
        uVar1 = F_005a2670(puVar3 GEN_EDX_ARG);
        iVar4 = iVar4 - 1;
      } while (-1 < iVar4);
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
      return uVar1;
    }
    if (param_2 == 2) {
      F_00557670(param_3 GEN_EDX_ARG,0);
      (*(undefined4 *)(gen_frame + 0x8)) = 3;
      (*(int *)(gen_frame + 0xc)) = param_2;
      F_005a9110(this GEN_EDX_ARG,1,&(*(undefined4 *)(gen_frame + 0x8)));
      uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
      return uVar1;
    }
  }
  else if (uVar1 == 0x21) {
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,3);
    (*(int *)(gen_frame + 0x14)) = param_2;
    (*(int *)(gen_frame + 0xc)) = *((undefined4 *)GEN_TOP((*(int *)(this + 0x180) + *(int *)(param_4 + 8) * 4)));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,6);
    uVar2 = *(undefined4 *)(param_4 + 8);
    (*(uint *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0xc));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,3);
    (*(uint *)(gen_frame + 0x24)) = uVar2;
    F_005a9110(this GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x10)));
    F_00557670(param_3 GEN_EDX_ARG,0);
    puVar3 = &(*(uint *)(gen_frame + 0x28));
    iVar4 = 2;
    do {
      puVar3 = puVar3 - 2;
      uVar1 = F_005a2670(puVar3 GEN_EDX_ARG);
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
    return uVar1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0081f8c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081f8c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x81f8c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  undefined * this_00;
  
  uVar1 = *(int *)((int)this + 0x184) - *(int *)((int)this + 0x180) >> 2;
  if (param_1 < uVar1) {
    this_00 = (undefined *)F_00559ba0(*param_2 GEN_EDX_FWD);
    uVar1 = 0;
    if (this_00 != (undefined *)0x0) {
      uVar1 = F_00584110(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x180) + param_1 * 4))));
    }
  }
  return uVar1;
}

/* ref: Client::UI2::AddonSupportSubView::vf52 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_0081f910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x81f910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  
  bVar1 = 0;
  if ((*(int *)(this + 400) != 4) && (*(int *)(this + 400) != 5)) {
    if (*param_1 == 9) {
      uVar2 = 0;
      if (*(int *)(this + 0x1a8) != 0) {
        uVar2 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1a8) + 0x70)));
      }
      uVar3 = F_0055a350(uVar2 GEN_EDX_FWD);
      if ((char)uVar3 != '\0') {
        F_0059f6f0(*(undefined * PTR32 *)(this + 0x1a8) GEN_EDX_ARG,-(int)*((short *)GEN_TOP(((int)*(undefined * PTR32 *)(this + 0x1a8) + 0xc2)))
                     ,1);
      }
    }
    else {
      if (*param_1 != 10) {
        return 0;
      }
      uVar2 = 0;
      if (*(int *)(this + 0x1a8) != 0) {
        uVar2 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1a8) + 0x70)));
      }
      uVar3 = F_0055a350(uVar2 GEN_EDX_ARG);
      if ((char)uVar3 != '\0') {
        F_0059f6f0(*(undefined * PTR32 *)(this + 0x1a8) GEN_EDX_ARG,(int)*((short *)GEN_TOP(((int)*(undefined * PTR32 *)(this + 0x1a8) + 0xc2))),
                     1);
        return 1;
      }
    }
    bVar1 = 1;
  }
  return bVar1;
}

/* ref: FUN_0081f9d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_0081f9d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x81f9d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_007cc050((undefined *)((int)this + 0x23538) GEN_EDX_FWD);
  return uVar1;
}

/* ref: Client::UI2::RaptureAtkModule::vf49 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081f9e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x81f9e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int * piVar2;
  undefined * this_00;
  undefined * pvVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int local_c;
  int local_8;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xf0))(this GEN_EDX_FWD);
  if ((char)uVar1 == '\0') {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_ARG,1,0x640);
    iVar5 = 2;
    puVar6 = &REFG(undefined4, 0x10be120);
    do {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_ARG,iVar5,*puVar6);
      puVar6 = puVar6 + 1;
      iVar5 = iVar5 + 1;
    } while ((int)puVar6 < 0x10be21c);
    puVar6 = &REFG(undefined4, 0x10be220);
    iVar5 = 1;
    do {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1c))(this GEN_EDX_ARG,iVar5,*puVar6);
      puVar6 = puVar6 + 1;
      iVar5 = iVar5 + 1;
    } while ((int)puVar6 < 0x10be30c);
    iVar5 = 0;
    do {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x20))(this GEN_EDX_ARG,iVar5,(&REFG(undefined4, 0x10be30c))[(int)(iVar5)]);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_ARG,0);
    if (uVar1 != 0) {
      piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0xc))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG)));
      if (*((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + 0x44))) != *piVar2) {
        *((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + 0x44))) = *piVar2;
        *(undefined1 *)(uVar1 + 0x1d) = 1;
      }
    }
    if (*(undefined * PTR32 *)(this + 0x23208) != (undefined *)0x0) {
      F_00776010(*(undefined * PTR32 *)(this + 0x23208) GEN_EDX_ARG,8,4,100);
    }
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x23184) + 0x18))))(*(int * PTR32 *)(this + 0x23184) GEN_EDX_ARG)));
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x28))(this GEN_EDX_ARG,6)));
    if (pvVar3 != (undefined *)0x0) {
      local_8 = 0x10e;
      local_c = 4;
      do {
        uVar9 = 0;
        uVar8 = 1;
        uVar7 = 0;
        uVar1 = F_00461bb0(this_00 GEN_EDX_ARG,0x7eb,local_8 - 0x10d);
        F_00431250(pvVar3 GEN_EDX_ARG,local_8,uVar1,uVar7,uVar8,uVar9);
        local_8 = local_8 + 1;
        local_c = local_c - 1;
      } while (local_c != 0);
      uVar1 = F_0043bd00(this_00 GEN_EDX_ARG,0x7ec,0,0);
      if (uVar1 != *((uint *)GEN_TOP((*(int *)((int)pvVar3 + 0x20) + 0x448)))) {
        *((uint *)GEN_TOP((*(int *)((int)pvVar3 + 0x20) + 0x448))) = uVar1;
        *(undefined1 *)((int)pvVar3 + 0x1d) = 1;
      }
      local_8 = 0x113;
      local_c = 6;
      do {
        uVar9 = 0;
        uVar8 = 1;
        uVar7 = 0;
        uVar1 = F_00461bb0(this_00 GEN_EDX_ARG,0x7ed,local_8 - 0x112);
        F_00431250(pvVar3 GEN_EDX_ARG,local_8,uVar1,uVar7,uVar8,uVar9);
        local_8 = local_8 + 1;
        local_c = local_c - 1;
      } while (local_c != 0);
    }
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x28))(this GEN_EDX_ARG,0x1e)));
    if (pvVar3 != (undefined *)0x0) {
      local_c = 7;
      iVar5 = 0x2e;
      do {
        uVar9 = 0;
        uVar8 = 1;
        uVar7 = 0;
        uVar1 = F_00461bb0(this_00 GEN_EDX_ARG,0x7ee,iVar5 - 0x2d);
        F_00431250(pvVar3 GEN_EDX_ARG,iVar5,uVar1,uVar7,uVar8,uVar9);
        iVar5 = iVar5 + 1;
        local_c = local_c - 1;
      } while (local_c != 0);
      uVar1 = F_0043bd00(this_00 GEN_EDX_ARG,0x7ef,0,0);
      if (uVar1 != *((uint *)GEN_TOP((*(int *)((int)pvVar3 + 0x20) + 0xd4)))) {
        *((uint *)GEN_TOP((*(int *)((int)pvVar3 + 0x20) + 0xd4))) = uVar1;
        *(undefined1 *)((int)pvVar3 + 0x1d) = 1;
      }
    }
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x28))(this GEN_EDX_ARG,0x15);
    uVar1 = 0;
    if (uVar4 != 0) {
      uVar1 = F_0043bd00(this_00 GEN_EDX_ARG,0x4a1,0,0);
      if (uVar1 != **(uint * PTR32 *)(uVar4 + 0x20)) {
        **(uint * PTR32 *)(uVar4 + 0x20) = uVar1;
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
    }
    return uVar1;
  }
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_ARG,2,0x65);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1c))(this GEN_EDX_ARG,1,0x7b);
  return uVar1;
}

/* ref: FUN_0081fc50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_0081fc50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x81fc50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 in_ecx;
  uint uVar1;
  undefined * puVar2;
  uint uVar3;
  uint * puVar4;
  int * piVar5;
  uint uVar6;
  undefined * puVar7;
  undefined * puVar8;
  int local_8;
  
  in_ecx = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  uVar3 = F_00414500(in_ecx GEN_EDX_FWD,0xb9);
  uVar3 = *(uint *)(uVar3 + 0x14);
  puVar4 = (uint *)F_00414500(in_ecx GEN_EDX_ARG,0xb9);
  uVar1 = *puVar4;
  local_8 = 0;
  uVar6 = 1;
  do {
    F_007c8940(this GEN_EDX_ARG,local_8,(uint)((uVar3 & uVar6) != 0),(uint)((uVar1 & uVar6) != 0));
    local_8 = local_8 + 1;
    uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
  } while (local_8 < 10);
  piVar5 = (int *)F_00414500(in_ecx GEN_EDX_ARG,0x18b);
  F_007c8940(this GEN_EDX_ARG,0xd,(uint)(piVar5[5] != 0),(uint)(*piVar5 != 0));
  piVar5 = (int *)F_00414500(in_ecx GEN_EDX_ARG,0x18d);
  F_007c8940(this GEN_EDX_ARG,0xe,(uint)(piVar5[5] != 0),(uint)(*piVar5 != 0));
  piVar5 = (int *)F_00414500(in_ecx GEN_EDX_ARG,0x194);
  F_007c8940(this GEN_EDX_ARG,0xf,(uint)(piVar5[5] != 0),(uint)(*piVar5 != 0));
  piVar5 = (int *)F_00414500(in_ecx GEN_EDX_ARG,0x18c);
  F_007c8940(this GEN_EDX_ARG,0x10,(uint)(piVar5[5] != 0),(uint)(*piVar5 != 0));
  piVar5 = (int *)F_00414500(in_ecx GEN_EDX_ARG,0x181);
  F_007c8940(this GEN_EDX_ARG,0x11,(uint)(piVar5[5] != 0),(uint)(*piVar5 != 0));
  piVar5 = (int *)F_00414500(in_ecx GEN_EDX_ARG,0x188);
  F_007c8940(this GEN_EDX_ARG,0x13,(uint)(piVar5[5] != 0),(uint)(*piVar5 != 0));
  piVar5 = (int *)F_00414500(in_ecx GEN_EDX_ARG,0x18a);
  F_007c8940(this GEN_EDX_ARG,0x15,(uint)(piVar5[5] != 0),(uint)(*piVar5 != 0));
  piVar5 = (int *)F_00414500(in_ecx GEN_EDX_ARG,0x189);
  F_007c8940(this GEN_EDX_ARG,0x16,(uint)(piVar5[5] != 0),(uint)(*piVar5 != 0));
  piVar5 = (int *)F_00414500(in_ecx GEN_EDX_ARG,0x186);
  F_007c8940(this GEN_EDX_ARG,0x17,(uint)(piVar5[5] != 0),(uint)(*piVar5 != 0));
  piVar5 = (int *)F_00414500(in_ecx GEN_EDX_ARG,0x187);
  F_007c8940(this GEN_EDX_ARG,0x18,(uint)(piVar5[5] != 0),(uint)(*piVar5 != 0));
  piVar5 = (int *)F_00414500(in_ecx GEN_EDX_ARG,0x18e);
  F_007c8940(this GEN_EDX_ARG,0x19,(uint)(piVar5[5] != 0),(uint)(*piVar5 != 0));
  piVar5 = (int *)F_00414500(in_ecx GEN_EDX_ARG,400);
  F_007c8940(this GEN_EDX_ARG,0x1a,(uint)(piVar5[5] != 0),(uint)(*piVar5 != 0));
  piVar5 = (int *)F_00414500(in_ecx GEN_EDX_ARG,0x184);
  F_007c8940(this GEN_EDX_ARG,0x1c,(uint)(piVar5[5] != 0),(uint)(*piVar5 != 0));
  piVar5 = (int *)F_00414500(in_ecx GEN_EDX_ARG,0x185);
  F_007c8940(this GEN_EDX_ARG,0x1d,(uint)(piVar5[5] != 0),(uint)(*piVar5 != 0));
  piVar5 = (int *)F_00414500(in_ecx GEN_EDX_ARG,0x19c);
  F_007c8940(this GEN_EDX_ARG,0x14,(uint)(piVar5[5] != 0),(uint)(*piVar5 != 0));
  piVar5 = (int *)F_00414500(in_ecx GEN_EDX_ARG,0x182);
  F_007c8940(this GEN_EDX_ARG,0x1b,(uint)(piVar5[5] != 0),(uint)(*piVar5 != 0));
  piVar5 = (int *)F_00414500(in_ecx GEN_EDX_ARG,0x183);
  F_007c8940(this GEN_EDX_ARG,0xb,(uint)(piVar5[5] != 0),(uint)(*piVar5 != 0));
  uVar3 = F_00414500(in_ecx GEN_EDX_ARG,0x19b);
  puVar8 = REFG(undefined * PTR32, 0x1328130);
  puVar2 = REFG(undefined * PTR32, 0x132812c);
  if (*(int *)(uVar3 + 0x14) == 0) {
    if (*(int *)((int)this + 0x23530) == 0) {
      return uVar3;
    }
    *(undefined4 *)((int)this + 0x23530) = 0;
    puVar7 = puVar2;
  }
  else {
    if (*(int *)((int)this + 0x23530) == 1) {
      return 1;
    }
    *(undefined4 *)((int)this + 0x23530) = 1;
    puVar7 = puVar8;
    puVar8 = puVar2;
  }
  piVar5 = (int *)F_0057f860((undefined *)((int)this + 0x23330) GEN_EDX_ARG,puVar8);
  if (piVar5 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0xfc))(piVar5 GEN_EDX_ARG);
  }
  piVar5 = (int *)F_0057f860((undefined *)((int)this + 0x23330) GEN_EDX_ARG,puVar7);
  uVar3 = 0;
  if (piVar5 != (int *)0x0) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0xf8))(piVar5 GEN_EDX_ARG);
  }
  return uVar3;
}

/* ref: FUN_00820020 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00820020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x820020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 in_ecx;
  uint uVar1;
  byte bVar2;
  uint uVar3;
  undefined * PTR32 * ppuVar4;
  uint uVar5;
  undefined * pvVar6;
  undefined3 extraout_var = 0;
  uint uVar7;
  undefined * puVar8;
  undefined4 uVar9;
  
  in_ecx = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  uVar3 = F_00414500(in_ecx GEN_EDX_FWD,0xb9);
  uVar1 = *(uint *)(uVar3 + 0x14);
  puVar8 = (undefined *)0x0;
  uVar3 = 1;
  uVar7 = uVar1;
  do {
    ppuVar4 = &REFG(undefined * PTR32, 0x10bff60);
    do {
      if (ppuVar4[1] == puVar8) {
        if (((*ppuVar4 == (undefined *)0x0) ||
            (uVar5 = F_0057f860((undefined *)((int)this + 0x23330) GEN_EDX_ARG,*ppuVar4), uVar5 == 0)) ||
           ((~*(byte *)(uVar5 + 0x126) & 1) != 0)) {
          uVar7 = uVar7 | uVar3;
        }
        else {
          uVar7 = uVar7 & ~uVar3;
        }
        goto LAB_00820097;
      }
      ppuVar4 = ppuVar4 + 3;
    } while ((int)ppuVar4 < 0x10c00c8);
    uVar7 = uVar7 | uVar3;
LAB_00820097: ;
    puVar8 = puVar8 + 1;
    uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
  } while ((int)puVar8 < 10);
  if (uVar7 != uVar1) {
    uVar9 = 1;
    pvVar6 = (undefined *)F_00414500(in_ecx GEN_EDX_ARG,0xb9);
    F_00414a40(pvVar6 GEN_EDX_ARG,uVar7,uVar9);
  }
  ppuVar4 = &REFG(undefined * PTR32, 0x10bff60);
  do {
    if (ppuVar4[1] == (undefined *)0xd) {
      if ((*ppuVar4 != (undefined *)0x0) &&
         (uVar3 = F_0057f860((undefined *)((int)this + 0x23330) GEN_EDX_ARG,*ppuVar4), uVar3 != 0)) {
        bVar2 = ~*(byte *)(uVar3 + 0x126) & 1;
        goto LAB_008200dd;
      }
      break;
    }
    ppuVar4 = ppuVar4 + 3;
  } while ((int)ppuVar4 < 0x10c00c8);
  bVar2 = 1;
LAB_008200dd: ;
  uVar3 = (uint)(bVar2 != 0);
  uVar9 = 1;
  pvVar6 = (undefined *)F_00414500(in_ecx GEN_EDX_ARG,0x18b);
  F_00414a40(pvVar6 GEN_EDX_ARG,uVar3,uVar9);
  ppuVar4 = &REFG(undefined * PTR32, 0x10bff60);
  do {
    if (ppuVar4[1] == (undefined *)0xe) {
      if ((*ppuVar4 != (undefined *)0x0) &&
         (uVar3 = F_0057f860((undefined *)((int)this + 0x23330) GEN_EDX_ARG,*ppuVar4), uVar3 != 0)) {
        bVar2 = ~*(byte *)(uVar3 + 0x126) & 1;
        goto LAB_0082011c;
      }
      break;
    }
    ppuVar4 = ppuVar4 + 3;
  } while ((int)ppuVar4 < 0x10c00c8);
  bVar2 = 1;
LAB_0082011c: ;
  uVar3 = (uint)(bVar2 != 0);
  uVar9 = 1;
  pvVar6 = (undefined *)F_00414500(in_ecx GEN_EDX_ARG,0x18d);
  F_00414a40(pvVar6 GEN_EDX_ARG,uVar3,uVar9);
  ppuVar4 = &REFG(undefined * PTR32, 0x10bff60);
  do {
    if (ppuVar4[1] == (undefined *)0xf) {
      if ((*ppuVar4 != (undefined *)0x0) &&
         (uVar3 = F_0057f860((undefined *)((int)this + 0x23330) GEN_EDX_ARG,*ppuVar4), uVar3 != 0)) {
        bVar2 = ~*(byte *)(uVar3 + 0x126) & 1;
        goto LAB_00820158;
      }
      break;
    }
    ppuVar4 = ppuVar4 + 3;
  } while ((int)ppuVar4 < 0x10c00c8);
  bVar2 = 1;
LAB_00820158: ;
  uVar3 = (uint)(bVar2 != 0);
  uVar9 = 1;
  pvVar6 = (undefined *)F_00414500(in_ecx GEN_EDX_ARG,0x194);
  F_00414a40(pvVar6 GEN_EDX_ARG,uVar3,uVar9);
  ppuVar4 = &REFG(undefined * PTR32, 0x10bff60);
  do {
    if (ppuVar4[1] == (undefined *)0x10) {
      if ((*ppuVar4 != (undefined *)0x0) &&
         (uVar3 = F_0057f860((undefined *)((int)this + 0x23330) GEN_EDX_ARG,*ppuVar4), uVar3 != 0)) {
        bVar2 = ~*(byte *)(uVar3 + 0x126) & 1;
        goto LAB_00820195;
      }
      break;
    }
    ppuVar4 = ppuVar4 + 3;
  } while ((int)ppuVar4 < 0x10c00c8);
  bVar2 = 1;
LAB_00820195: ;
  uVar3 = (uint)(bVar2 != 0);
  uVar9 = 1;
  pvVar6 = (undefined *)F_00414500(in_ecx GEN_EDX_ARG,0x18c);
  F_00414a40(pvVar6 GEN_EDX_ARG,uVar3,uVar9);
  ppuVar4 = &REFG(undefined * PTR32, 0x10bff60);
  do {
    if (ppuVar4[1] == (undefined *)0x11) {
      if ((*ppuVar4 != (undefined *)0x0) &&
         (uVar3 = F_0057f860((undefined *)((int)this + 0x23330) GEN_EDX_ARG,*ppuVar4), uVar3 != 0)) {
        bVar2 = ~*(byte *)(uVar3 + 0x126) & 1;
        goto LAB_008201d5;
      }
      break;
    }
    ppuVar4 = ppuVar4 + 3;
  } while ((int)ppuVar4 < 0x10c00c8);
  bVar2 = 1;
LAB_008201d5: ;
  uVar3 = (uint)(bVar2 != 0);
  uVar9 = 1;
  pvVar6 = (undefined *)F_00414500(in_ecx GEN_EDX_ARG,0x181);
  F_00414a40(pvVar6 GEN_EDX_ARG,uVar3,uVar9);
  ppuVar4 = &REFG(undefined * PTR32, 0x10bff60);
  do {
    if (ppuVar4[1] == (undefined *)0x13) {
      if ((*ppuVar4 != (undefined *)0x0) &&
         (uVar3 = F_0057f860((undefined *)((int)this + 0x23330) GEN_EDX_ARG,*ppuVar4), uVar3 != 0)) {
        bVar2 = ~*(byte *)(uVar3 + 0x126) & 1;
        goto LAB_00820215;
      }
      break;
    }
    ppuVar4 = ppuVar4 + 3;
  } while ((int)ppuVar4 < 0x10c00c8);
  bVar2 = 1;
LAB_00820215: ;
  uVar3 = (uint)(bVar2 != 0);
  uVar9 = 1;
  pvVar6 = (undefined *)F_00414500(in_ecx GEN_EDX_ARG,0x188);
  F_00414a40(pvVar6 GEN_EDX_ARG,uVar3,uVar9);
  ppuVar4 = &REFG(undefined * PTR32, 0x10bff60);
  do {
    if (ppuVar4[1] == (undefined *)0x15) {
      if ((*ppuVar4 != (undefined *)0x0) &&
         (uVar3 = F_0057f860((undefined *)((int)this + 0x23330) GEN_EDX_ARG,*ppuVar4), uVar3 != 0)) {
        bVar2 = ~*(byte *)(uVar3 + 0x126) & 1;
        goto LAB_00820255;
      }
      break;
    }
    ppuVar4 = ppuVar4 + 3;
  } while ((int)ppuVar4 < 0x10c00c8);
  bVar2 = 1;
LAB_00820255: ;
  uVar3 = (uint)(bVar2 != 0);
  uVar9 = 1;
  pvVar6 = (undefined *)F_00414500(in_ecx GEN_EDX_ARG,0x18a);
  F_00414a40(pvVar6 GEN_EDX_ARG,uVar3,uVar9);
  ppuVar4 = &REFG(undefined * PTR32, 0x10bff60);
  do {
    if (ppuVar4[1] == (undefined *)0x16) {
      if ((*ppuVar4 != (undefined *)0x0) &&
         (uVar3 = F_0057f860((undefined *)((int)this + 0x23330) GEN_EDX_ARG,*ppuVar4), uVar3 != 0)) {
        bVar2 = ~*(byte *)(uVar3 + 0x126) & 1;
        goto LAB_00820295;
      }
      break;
    }
    ppuVar4 = ppuVar4 + 3;
  } while ((int)ppuVar4 < 0x10c00c8);
  bVar2 = 1;
LAB_00820295: ;
  uVar3 = (uint)(bVar2 != 0);
  uVar9 = 1;
  pvVar6 = (undefined *)F_00414500(in_ecx GEN_EDX_ARG,0x189);
  F_00414a40(pvVar6 GEN_EDX_ARG,uVar3,uVar9);
  ppuVar4 = &REFG(undefined * PTR32, 0x10bff60);
  do {
    if (ppuVar4[1] == (undefined *)0x17) {
      if ((*ppuVar4 != (undefined *)0x0) &&
         (uVar3 = F_0057f860((undefined *)((int)this + 0x23330) GEN_EDX_ARG,*ppuVar4), uVar3 != 0)) {
        bVar2 = ~*(byte *)(uVar3 + 0x126) & 1;
        goto LAB_008202d5;
      }
      break;
    }
    ppuVar4 = ppuVar4 + 3;
  } while ((int)ppuVar4 < 0x10c00c8);
  bVar2 = 1;
LAB_008202d5: ;
  uVar3 = (uint)(bVar2 != 0);
  uVar9 = 1;
  pvVar6 = (undefined *)F_00414500(in_ecx GEN_EDX_ARG,0x186);
  F_00414a40(pvVar6 GEN_EDX_ARG,uVar3,uVar9);
  ppuVar4 = &REFG(undefined * PTR32, 0x10bff60);
  do {
    if (ppuVar4[1] == (undefined *)0x18) {
      if ((*ppuVar4 != (undefined *)0x0) &&
         (uVar3 = F_0057f860((undefined *)((int)this + 0x23330) GEN_EDX_ARG,*ppuVar4), uVar3 != 0)) {
        bVar2 = ~*(byte *)(uVar3 + 0x126) & 1;
        goto LAB_00820315;
      }
      break;
    }
    ppuVar4 = ppuVar4 + 3;
  } while ((int)ppuVar4 < 0x10c00c8);
  bVar2 = 1;
LAB_00820315: ;
  uVar3 = (uint)(bVar2 != 0);
  uVar9 = 1;
  pvVar6 = (undefined *)F_00414500(in_ecx GEN_EDX_ARG,0x187);
  F_00414a40(pvVar6 GEN_EDX_ARG,uVar3,uVar9);
  ppuVar4 = &REFG(undefined * PTR32, 0x10bff60);
  do {
    if (ppuVar4[1] == (undefined *)0x19) {
      if ((*ppuVar4 != (undefined *)0x0) &&
         (uVar3 = F_0057f860((undefined *)((int)this + 0x23330) GEN_EDX_ARG,*ppuVar4), uVar3 != 0)) {
        bVar2 = ~*(byte *)(uVar3 + 0x126) & 1;
        goto LAB_00820355;
      }
      break;
    }
    ppuVar4 = ppuVar4 + 3;
  } while ((int)ppuVar4 < 0x10c00c8);
  bVar2 = 1;
LAB_00820355: ;
  uVar3 = (uint)(bVar2 != 0);
  uVar9 = 1;
  pvVar6 = (undefined *)F_00414500(in_ecx GEN_EDX_ARG,0x18e);
  F_00414a40(pvVar6 GEN_EDX_ARG,uVar3,uVar9);
  ppuVar4 = &REFG(undefined * PTR32, 0x10bff60);
  do {
    if (ppuVar4[1] == (undefined *)0x1a) {
      if ((*ppuVar4 != (undefined *)0x0) &&
         (uVar3 = F_0057f860((undefined *)((int)this + 0x23330) GEN_EDX_ARG,*ppuVar4), uVar3 != 0)) {
        bVar2 = ~*(byte *)(uVar3 + 0x126) & 1;
        goto LAB_00820395;
      }
      break;
    }
    ppuVar4 = ppuVar4 + 3;
  } while ((int)ppuVar4 < 0x10c00c8);
  bVar2 = 1;
LAB_00820395: ;
  uVar3 = (uint)(bVar2 != 0);
  uVar9 = 1;
  pvVar6 = (undefined *)F_00414500(in_ecx GEN_EDX_ARG,400);
  F_00414a40(pvVar6 GEN_EDX_ARG,uVar3,uVar9);
  ppuVar4 = &REFG(undefined * PTR32, 0x10bff60);
  do {
    if (ppuVar4[1] == (undefined *)0x1c) {
      if ((*ppuVar4 != (undefined *)0x0) &&
         (uVar3 = F_0057f860((undefined *)((int)this + 0x23330) GEN_EDX_ARG,*ppuVar4), uVar3 != 0)) {
        bVar2 = ~*(byte *)(uVar3 + 0x126) & 1;
        goto LAB_008203d5;
      }
      break;
    }
    ppuVar4 = ppuVar4 + 3;
  } while ((int)ppuVar4 < 0x10c00c8);
  bVar2 = 1;
LAB_008203d5: ;
  uVar3 = (uint)(bVar2 != 0);
  uVar9 = 1;
  pvVar6 = (undefined *)F_00414500(in_ecx GEN_EDX_ARG,0x184);
  F_00414a40(pvVar6 GEN_EDX_ARG,uVar3,uVar9);
  ppuVar4 = &REFG(undefined * PTR32, 0x10bff60);
  do {
    if (ppuVar4[1] == (undefined *)0x1d) {
      if ((*ppuVar4 != (undefined *)0x0) &&
         (uVar3 = F_0057f860((undefined *)((int)this + 0x23330) GEN_EDX_ARG,*ppuVar4), uVar3 != 0)) {
        bVar2 = ~*(byte *)(uVar3 + 0x126) & 1;
        goto LAB_00820415;
      }
      break;
    }
    ppuVar4 = ppuVar4 + 3;
  } while ((int)ppuVar4 < 0x10c00c8);
  bVar2 = 1;
LAB_00820415: ;
  uVar3 = (uint)(bVar2 != 0);
  uVar9 = 1;
  pvVar6 = (undefined *)F_00414500(in_ecx GEN_EDX_ARG,0x185);
  F_00414a40(pvVar6 GEN_EDX_ARG,uVar3,uVar9);
  ppuVar4 = &REFG(undefined * PTR32, 0x10bff60);
  do {
    if (ppuVar4[1] == (undefined *)0x14) {
      if ((*ppuVar4 != (undefined *)0x0) &&
         (uVar3 = F_0057f860((undefined *)((int)this + 0x23330) GEN_EDX_ARG,*ppuVar4), uVar3 != 0)) {
        bVar2 = ~*(byte *)(uVar3 + 0x126) & 1;
        goto LAB_00820455;
      }
      break;
    }
    ppuVar4 = ppuVar4 + 3;
  } while ((int)ppuVar4 < 0x10c00c8);
  bVar2 = 1;
LAB_00820455: ;
  uVar3 = (uint)(bVar2 != 0);
  uVar9 = 1;
  pvVar6 = (undefined *)F_00414500(in_ecx GEN_EDX_ARG,0x19c);
  F_00414a40(pvVar6 GEN_EDX_ARG,uVar3,uVar9);
  ppuVar4 = &REFG(undefined * PTR32, 0x10bff60);
  do {
    if (ppuVar4[1] == (undefined *)0x1b) {
      if ((*ppuVar4 != (undefined *)0x0) &&
         (uVar3 = F_0057f860((undefined *)((int)this + 0x23330) GEN_EDX_ARG,*ppuVar4), uVar3 != 0)) {
        bVar2 = ~*(byte *)(uVar3 + 0x126) & 1;
        goto LAB_00820495;
      }
      break;
    }
    ppuVar4 = ppuVar4 + 3;
  } while ((int)ppuVar4 < 0x10c00c8);
  bVar2 = 1;
LAB_00820495: ;
  uVar3 = (uint)(bVar2 != 0);
  uVar9 = 1;
  pvVar6 = (undefined *)F_00414500(in_ecx GEN_EDX_ARG,0x182);
  F_00414a40(pvVar6 GEN_EDX_ARG,uVar3,uVar9);
  ppuVar4 = &REFG(undefined * PTR32, 0x10bff60);
  do {
    if (ppuVar4[1] == (undefined *)0xb) {
      if ((*ppuVar4 != (undefined *)0x0) &&
         (uVar3 = F_0057f860((undefined *)((int)this + 0x23330) GEN_EDX_ARG,*ppuVar4), uVar3 != 0)) {
        bVar2 = ~*(byte *)(uVar3 + 0x126) & 1;
        goto LAB_008204d5;
      }
      break;
    }
    ppuVar4 = ppuVar4 + 3;
  } while ((int)ppuVar4 < 0x10c00c8);
  bVar2 = 1;
LAB_008204d5: ;
  uVar3 = (uint)(bVar2 != 0);
  uVar9 = 1;
  pvVar6 = (undefined *)F_00414500(in_ecx GEN_EDX_ARG,0x183);
  bVar2 = F_00414a40(pvVar6 GEN_EDX_ARG,uVar3,uVar9);
  return CONCAT31(extraout_var,bVar2);
}

/* ref: FUN_00820800 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00820800(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x820800u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  byte bVar1;
  
  if (REFG(int, 0x1370c18) == 0) {
    *(byte *)(param_1 + 0x29254) = (byte)param_2;
    return (byte)param_2;
  }
  if ((byte)param_2 != 0) {
    bVar1 = F_004d2600(REFG(int, 0x1370c18) GEN_EDX_FWD,param_3);
    *(byte *)(param_1 + 0x29254) = (byte)param_2;
    return bVar1;
  }
  bVar1 = F_004d2690(REFG(int, 0x1370c18) GEN_EDX_ARG,param_3);
  *(undefined1 *)(param_1 + 0x29254) = 0;
  return bVar1;
}

/* ref: FUN_00820850 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00820850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x820850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 5;
  iVar3 = 0;
  if (param_1 != 0) {
    uVar2 = F_00ab1c90(param_1);
    iVar3 = *(ushort *)(uVar2 + 0x1c) - 0x16;
    switch((unsigned int)(uintptr_t)(iVar3)) {
    case 0: ;
      uVar4 = 1;
      break;
    case 1: ;
      uVar4 = 0;
      break;
    case 2: ;
      uVar4 = 2;
      break;
    case 3: ;
      uVar4 = 3;
      break;
    case 4: ;
      uVar4 = 4;
    }
  }
  bVar1 = (byte)iVar3;
  if ((REFG(void * PTR32, 0x1370c18) != (undefined *)0x0) &&
     (bVar1 = F_004d25c0(REFG(void * PTR32, 0x1370c18) GEN_EDX_ARG,uVar4), REFG(void * PTR32, 0x1370c18) != (undefined *)0x0)) {
    bVar1 = F_004d2600(REFG(void * PTR32, 0x1370c18) GEN_EDX_ARG,(float)(float10)1);
  }
  *(undefined1 *)((int)this + 0x29254) = 1;
  return bVar1;
}

/* ref: FUN_008208f0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_008208f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x8208f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined4 *)((int)this + 0x29250) = 0;
  if (*(char *)((int)this + 0x29254) != '\0') {
    if (REFG(int, 0x1370c18) != 0) {
      F_004d2690(REFG(int, 0x1370c18) GEN_EDX_FWD,REFG(float, 0x1088068));
    }
    *(undefined1 *)((int)this + 0x29254) = 0;
  }
  return;
}

/* ref: FUN_00820930 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00820930(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x820930u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float * pfVar1;
  float fVar2;
  float10 fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  float10 fVar7;
  float local_1c;
  float local_18;
  float local_14;
  float local_c;
  float local_8;
  
  fVar4 = REFG(float, 0x10928e4);
  fVar7 = (float10)param_2;
  local_8 = REFG(float, 0x10928e4);
  local_c = 0.0;
  local_1c = 0.0;
  local_18 = 0.0;
  local_14 = 0.0;
  if (!(*(float *)(param_1 + 0x29228) < 0.0)) {
    local_8 = REFG(float, 0x1087f04);
    fVar2 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x29220) * fVar7 +
                   (float10)*(float *)(param_1 + 0x29224))));
    *(float *)(param_1 + 0x29224) = fVar2;
    *(float *)(param_1 + 0x29228) = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x29228) - fVar7)));
    fVar3 = (float10)0;
    local_c = (float)((float10)fVar2 + fVar3);
    local_1c = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x29214) + fVar3)));
    local_18 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x29218) + fVar3)));
    local_14 = ((float)GEN_TOF((fVar3 + (float10)*(float *)(param_1 + 0x2921c))));
  }
  pfVar1 = (float *)(param_1 + 0x29240);
  if (GEN_ISNAN(*pfVar1) || (0.0 < *pfVar1 || *pfVar1 == 0.0)) {
    local_8 = (float)((float10)local_8 * (float10)REFG(double, 0x1088108));
    *(float *)(param_1 + 0x2923c) =
         ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x29238) * fVar7 +
                (float10)*(float *)(param_1 + 0x2923c))));
    *(float *)(param_1 + 0x29240) = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x29240) - fVar7)));
    local_c = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x2923c) + (float10)local_c)));
    local_1c = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x2922c) + (float10)local_1c)));
    local_18 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x29230) + (float10)local_18)));
    local_14 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x29234) + (float10)local_14)));
  }
  if ((!GEN_ISNAN(fVar4) && !GEN_ISNAN(local_8)) && (!(fVar4 < local_8) && fVar4 != local_8)) {
    *(float *)(param_1 + 0x29244) = (float)((float10)local_c * (float10)local_8);
  }
  iVar5 = REFG(int, 0x1371290);
  if (*(double *)&REFG(undefined, 0x109ce00) < (double)*(float *)(param_1 + 0x29244)) {
    uVar6 = F_004adca0((undefined *)(REFG(int, 0x1371290) + 0x25c) GEN_EDX_FWD,0x10,1,1);
    if (*(char *)(iVar5 + 0x318) == '\x01') {
      uVar6 = 0;
      if (iVar5 + 0x2f0U != 0) {
        *(undefined4 *)(iVar5 + 0x2f4) = 0;
        *(float *)(iVar5 + 0x2f8) =
             ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x29244) * (float10)*(double *)&REFG(undefined, 0x10947f0))));
        fVar7 = (float10)local_8;
        *(float *)(iVar5 + 0x2fc) = (float)(fVar7 * (float10)local_1c);
        *(float *)(iVar5 + 0x300) = (float)((float10)local_18 * fVar7);
        *(float *)(iVar5 + 0x304) = (float)(fVar7 * (float10)local_14);
        return iVar5 + 0x2f0U;
      }
    }
  }
  else {
    uVar6 = F_004adca0((undefined *)(REFG(int, 0x1371290) + 0x25c) GEN_EDX_ARG,0x10,0,1);
  }
  return uVar6;
}

/* ref: FUN_00820af0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00820af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x820af0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x23184) + 0x48))))(*(int * PTR32 *)((int)this + 0x23184) GEN_EDX_FWD);
  piVar1 = *(int * PTR32 *)(uVar2 + 0x184);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1 GEN_EDX_ARG);
    if ((char)uVar2 != '\0') {
      return (uint)(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG));
    }
  }
  return 0;
}

/* ref: FUN_00820b30 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00820b30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x820b30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * puVar1;
  uint * this_00;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar2 = param_2;
  if ((*(int *)((int)this + 0x29250) == 2) && ((*(int *)&gen_a1) == 0)) {
    fVar4 = (float10)(int)param_2;
    if ((int)param_2 < 0) {
      fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    if (REFG(int, 0x1370c18) != 0) {
      F_004d2690(REFG(int, 0x1370c18) GEN_EDX_FWD,(float)(fVar4 / (float10)*(double *)&REFG(undefined, 0x10943d8)));
    }
    *(undefined1 *)((int)this + 0x29254) = 0;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x23184) + 8))))(*(int * PTR32 *)((int)this + 0x23184) GEN_EDX_ARG,2,1);
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x23330) + 0x4c))))((int)this + 0x23330,0x3e,1,1);
    *(undefined4 *)((int)this + 0x29250) = 0;
    uVar2 = param_2 | 0x80000000;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,4);
  (*(uint *)(gen_frame + 0x14)) = uVar2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x1c)) = param_3;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,4);
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  puVar1 = REFG(undefined * PTR32, 0x132723c);
  if ((*(int *)&gen_a1) != 1) {
    puVar1 = REFG(undefined * PTR32, 0x1327fe8);
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x58))(this GEN_EDX_ARG,puVar1,4,&(*(undefined4 *)(gen_frame + 0x8)),param_4,param_5,0);
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar3 = 3;
  do {
    this_00 = this_00 - 2;
    F_005a2670(this_00 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return (byte)uVar2;
}

/* ref: FUN_00820c80 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00820c80(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0x820c80u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  byte bVar1;
  
  if (*(int *)(param_1 + 0x231a4) != 0) {
    bVar1 = F_007d5e70(*(int *)(param_1 + 0x231a4) GEN_EDX_FWD,param_2,param_3,param_4);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_00820cb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00820cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x820cb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092ba50(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00820cc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00820cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x820cc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092bbe0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00820cd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00820cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x820cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092bd70(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00820ce0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00820ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x820ce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092bf00(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00820cf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00820cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x820cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092c090(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00820d00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00820d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x820d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092c220(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00820d10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00820d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x820d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092c3b0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00820d20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00820d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x820d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092c540(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00820d30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00820d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x820d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092c6d0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00820d40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00820d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x820d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092aab0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00820d50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00820d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x820d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092c860(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00820d60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00820d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x820d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092c9f0(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x1328008),param_2,param_3,param_4,param_5,param_6,
                       param_7);
  return uVar1;
}

/* ref: FUN_00820d90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00820d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x820d90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092cb80(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x1328010),param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00820dc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00820dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x820dc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092cd10(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x1328014),param_2,param_3,param_4,param_5,param_6,
                       param_7);
  return uVar1;
}

/* ref: FUN_00820df0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00820df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x820df0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092cea0(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x1328018),param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00820e20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00820e20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x820e20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092d030(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x132801c),param_2,param_3,param_4,param_5,param_6,
                       param_7);
  return uVar1;
}

/* ref: FUN_00820e50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00820e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x820e50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092d1c0(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x1328020),param_2,param_3,param_4,param_5,param_6,0);
  return uVar1;
}

/* ref: FUN_00820e80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00820e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x820e80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092d350(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x1328024),param_2,param_3,param_4,param_5,
                       param_6,8);
  return uVar1;
}

/* ref: FUN_00820eb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00820eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x820eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092d4e0(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x132802c),param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00820ee0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00820ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x820ee0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092d670(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x1328030),param_2,param_3,param_4,param_5,param_6,param_7)
  ;
  return uVar1;
}

/* ref: FUN_00820f10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00820f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x820f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092d800(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x1328074),param_2,param_3,param_4,param_5,param_6,
                       param_7);
  return uVar1;
}

/* ref: FUN_00820f40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00820f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x820f40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092d990(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x1328078),param_2,param_3,param_4,param_5,param_6,
                       param_7);
  return uVar1;
}

/* ref: FUN_00820f70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00820f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x820f70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092db20(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x1328080),param_2,param_3,param_4,param_5,param_6,
                       param_7);
  return uVar1;
}

/* ref: FUN_00820fa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00820fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x820fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092dcb0(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x1328084),param_2,param_3,param_4,param_5,param_6,10);
  return uVar1;
}

/* ref: FUN_00820fd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00820fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x820fd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092de40(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x132808c),param_2,param_3,param_4,param_5,param_6,
                       param_7);
  return uVar1;
}

/* ref: FUN_00821000 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821000u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092dfd0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,5);
  return uVar1;
}

/* ref: FUN_00821030 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821030u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092e160(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x1328094),param_2,param_3,param_4,param_5,param_6,
                       5);
  return uVar1;
}

/* ref: FUN_00821060 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821060u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092e2f0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821070 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821070u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092e480(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821080 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821080u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092e610(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821090 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821090u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092e7a0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008210a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008210a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8210a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092e930(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008210b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008210b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8210b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092eac0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008210c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008210c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8210c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092ec50(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008210d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008210d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8210d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092ede0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008210e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008210e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8210e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092ef70(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008210f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008210f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8210f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092f100(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821100 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821100u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092f290(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821110 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821110u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092f420(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821120 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821120u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092f5b0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821130 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821130u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092f740(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821140 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821140u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092f8d0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821150 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821150u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092fa60(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821160 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821160u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092fbf0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821170 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821170u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092fd80(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821180 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821180u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092ff10(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821190 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821190u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_009300a0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008211a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008211a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8211a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00930230(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008211b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008211b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8211b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_009303c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008211c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008211c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8211c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00930550(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008211d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008211d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8211d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_009306e0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008211e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008211e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8211e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00930870(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008211f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008211f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8211f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00930a00(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821200 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821200u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00930b90(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821210 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821210u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00930d20(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821220 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821220u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00930eb0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821230 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821230u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00931040(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821240 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821240u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_009311d0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821250 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821250u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00931360(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821260 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821260u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_009314f0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821270 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821270u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00931680(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821280 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821280u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00931810(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821290 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821290u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_009319a0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008212a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008212a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8212a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00931b30(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008212b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008212b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8212b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00931cc0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008212c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008212c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8212c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00931e50(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008212d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008212d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8212d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00931fe0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008212e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008212e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8212e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00932170(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008212f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008212f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8212f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00932300(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821300 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821300u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00932490(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821310 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821310u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00932620(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821320 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821320u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_009327b0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821330 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821330u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00932940(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821340 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821340u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00932ad0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821350 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821350u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00932c60(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821360 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821360u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00932df0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821370 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821370u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00932f80(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821380 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821380u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00933110(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821390 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821390u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_009332a0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,7);
  return uVar1;
}

/* ref: FUN_008213c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008213c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8213c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092b0f0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008213d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008213d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8213d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00933430(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008213e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008213e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8213e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092af60(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008213f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008213f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8213f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_009335c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821400 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821400u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092b730(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,5);
  return uVar1;
}

/* ref: FUN_00821430 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821430u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092b5a0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,5);
  return uVar1;
}

/* ref: FUN_00821460 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821460u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092b410(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821470 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821470u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00933750(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821480 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821480u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_009338e0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821490 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821490u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00933a70(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008214a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008214a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8214a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00933c00(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008214b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008214b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8214b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00933d90(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008214c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008214c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8214c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00933f20(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008214d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008214d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8214d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092b280(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,1);
  return uVar1;
}

/* ref: FUN_00821500 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821500u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_009340b0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821510 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821510u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00934240(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821520 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821520u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_009343d0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821530 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821530u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00934560(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821540 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821540u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_009346f0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821550 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821550u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00934880(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821560 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821560u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00934a10(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821570 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821570u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00934ba0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821580 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821580u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00934d30(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821590 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821590u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00934ec0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008215a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008215a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8215a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00935050(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008215b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008215b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8215b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_009351e0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008215c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008215c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8215c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00935370(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008215d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008215d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8215d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00935500(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008215e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008215e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8215e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00935690(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008215f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008215f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8215f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00935820(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821600 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821600u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_009359b0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821610 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821610u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00935b40(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821620 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821620u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00935cd0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821630 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821630u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00935e60(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821640 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821640u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00935ff0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821650 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821650u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00936180(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821660 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821660u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00936310(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821670 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821670u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_009364a0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821680 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821680u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00936630(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821690 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821690u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_009367c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008216a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008216a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8216a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092c220(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008216b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008216b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8216b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0092c220(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008216c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008216c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8216c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00936950(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008216d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008216d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8216d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00936ae0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008216e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008216e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8216e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00936c70(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x132809c),param_2,param_3,param_4,param_5,param_6,
                       param_7);
  return uVar1;
}

/* ref: FUN_00821710 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821710u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00936e00(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x13280a0),param_2,param_3,param_4,param_5,param_6,
                       param_7);
  return uVar1;
}

/* ref: FUN_00821740 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821740u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00936f90(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x13280a4),param_2,param_3,param_4,param_5,param_6,
                       param_7);
  return uVar1;
}

/* ref: FUN_00821770 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821770u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00937120(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x13280a8),param_2,param_3,param_4,param_5,param_6,
                       param_7);
  return uVar1;
}

/* ref: FUN_008217a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008217a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8217a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_009372b0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008217b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008217b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8217b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00937440(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x13280ac),param_2,param_3,param_4,param_5,
                       param_6,param_7);
  return uVar1;
}

/* ref: FUN_008217e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008217e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8217e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_009375d0(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x13280b0),param_2,param_3,param_4,param_5,param_6,
                       param_7);
  return uVar1;
}

/* ref: FUN_00821810 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821810u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00937760(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x13280b4),param_2,param_3,param_4,param_5,
                       param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821840 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821840u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_009378f0(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x13280b8),param_2,param_3,param_4,param_5,
                       param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821870 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821870u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00937a80(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x13280bc),param_2,param_3,param_4,param_5,
                       param_6,param_7);
  return uVar1;
}

/* ref: FUN_008218a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008218a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8218a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00937c10(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x13280c0),param_2,param_3,param_4,param_5,
                       param_6,param_7);
  return uVar1;
}

/* ref: FUN_008218d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008218d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8218d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00937da0(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x13280c4),param_2,param_3,param_4,param_5,param_6
                       ,param_7);
  return uVar1;
}

/* ref: FUN_00821900 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821900u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00937f30(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x13280c8),param_2,param_3,param_4,param_5,
                       param_6,5);
  return uVar1;
}

/* ref: FUN_00821930 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821930u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_009380c0(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x13280cc),param_2,param_3,param_4,param_5,
                       param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821960 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821960u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00938250(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821970 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821970u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_009383e0(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x13280d0),param_2,param_3,param_4,param_5,
                       param_6,param_7);
  return uVar1;
}

/* ref: FUN_008219a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008219a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8219a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00938570(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x13280d4),param_2,param_3,param_4,param_5,
                       param_6,param_7);
  return uVar1;
}

/* ref: FUN_008219d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_008219d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x8219d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00938700(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x13280d8),param_2,param_3,param_4,param_5,param_6,
                       param_7);
  return uVar1;
}

/* ref: FUN_00821a00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821a00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00938890(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x13280dc),param_2,param_3,param_4,param_5,param_6
                       ,2);
  return uVar1;
}

/* ref: FUN_00821a30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00938a20(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x13280e0),param_2,param_3,param_4,param_5,
                       param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821a60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821a60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00938bb0(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x13280e4),param_2,param_3,param_4,param_5,
                       param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821a90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821a90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00938d40(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x13280ec),param_2,param_3,param_4,param_5,
                       param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821ac0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821ac0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00938ed0(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x13280f0),param_2,param_3,param_4,param_5,
                       param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821af0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00939060(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x13280f4),param_2,param_3,param_4,param_5,param_6,2)
  ;
  return uVar1;
}

/* ref: FUN_00821b20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821b20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_009391f0(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x13280f8),param_2,param_3,param_4,param_5,
                       param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821b50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821b50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00939380(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x13280fc),param_2,param_3,param_4,param_5,param_6,
                       param_7);
  return uVar1;
}

/* ref: FUN_00821b80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00939510(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x1328100),param_2,param_3,param_4,param_5,param_6,3)
  ;
  return uVar1;
}

/* ref: FUN_00821bb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_009396a0(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x1328104),param_2,param_3,param_4,param_5,param_6,
                       param_7);
  return uVar1;
}

/* ref: FUN_00821be0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00939830(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x1328108),param_2,param_3,param_4,param_5,param_6,
                       2);
  return uVar1;
}

/* ref: FUN_00821c10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821c10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_009399c0(this GEN_EDX_FWD,REFG(undefined * PTR32, 0x132810c),param_2,param_3,param_4,param_5,param_6,2
                      );
  return uVar1;
}

/* ref: FUN_00821c40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821c40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00939b50(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821c50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821c50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00939ce0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821c60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_00939e70(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821c70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821c70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0093a000(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821c80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821c80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0093a190(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821c90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821c90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0093a320(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821ca0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821ca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0093a4b0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821cb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821cb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0093a640(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821cc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821cc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0093a7d0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821cd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0093a960(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821ce0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821ce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0093aaf0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821cf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0093ac80(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821d00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0093ae10(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821d10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0093afa0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821d20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0093b130(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00821d30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00821d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x821d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = F_0093b2c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

