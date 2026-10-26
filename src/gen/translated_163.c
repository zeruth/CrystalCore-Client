#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00d32be0 */
uint F_00d32be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd32be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d32c20 */
uint F_00d32c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd32c20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return param_3 | 0x80000000;
}

/* ref: FUN_00d32ca0 */
unsigned int F_00d32ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd32ca0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  iVar3 = *(int *)(param_1 + 0x1c);
  iVar7 = 0;
  if (0 < iVar3) {
    iVar8 = 0;
    do {
      if (*((char *)GEN_TOP((*(int *)(param_1 + 0x18) + 4 + iVar7 * 8))) != '\0') {
        puVar1 = ((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x24) + iVar8)));
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        puVar2 = (undefined4 *)(iVar8 + param_2);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        puVar2[2] = uVar5;
        puVar2[3] = uVar6;
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 0x30;
    } while (iVar7 < iVar3);
  }
  return 0;
}

/* ref: FUN_00d32ce0 */
unsigned int F_00d32ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd32ce0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 * puVar7;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar6 = 0;
  if (0 < iVar2) {
    puVar7 = param_3;
    do {
      if (*((char *)GEN_TOP((*(int *)(param_1 + 0x18) + 4 + iVar6 * 8))) != '\0') {
        puVar1 = ((undefined4 *)GEN_TOP(((param_2 - (int)param_3) + (int)puVar7)));
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *puVar7 = *puVar1;
        puVar7[1] = uVar3;
        puVar7[2] = uVar4;
        puVar7[3] = uVar5;
      }
      iVar6 = iVar6 + 1;
      puVar7 = puVar7 + 0xc;
    } while (iVar6 < iVar2);
  }
  return 0;
}

/* ref: FUN_00d32d20 */
unsigned int F_00d32d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd32d20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  short sVar1;
  int iVar2;
  float * pfVar3;
  float * pfVar4;
  float * this;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int local_c;
  int local_8;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  local_c = 0;
  if (0 < iVar2) {
    local_8 = 0;
    this = param_2;
    do {
      sVar1 = *((short *)GEN_TOP((*(int *)(param_1 + 0xc) + local_c * 2)));
      if (*((char *)GEN_TOP((*(int *)(param_1 + 0x18) + 4 + local_c * 8))) != '\0') {
        pfVar3 = ((float *)GEN_TOP((*(int *)(param_1 + 0x24) + local_8)));
        if (sVar1 == -1) {
          fVar5 = *pfVar3;
          fVar6 = pfVar3[1];
          fVar7 = pfVar3[2];
          fVar8 = pfVar3[3];
        }
        else {
          pfVar4 = param_2 + sVar1 * 0xc;
          F_00d950d0(this,pfVar4 + 4,pfVar3);
          fVar5 = *this + *pfVar4;
          fVar6 = this[1] + pfVar4[1];
          fVar7 = this[2] + pfVar4[2];
          fVar8 = this[3] + pfVar4[3];
        }
        *this = fVar5;
        this[1] = fVar6;
        this[2] = fVar7;
        this[3] = fVar8;
      }
      local_8 = local_8 + 0x30;
      local_c = local_c + 1;
      this = this + 0xc;
    } while (local_c < iVar2);
  }
  return 0;
}

/* ref: FUN_00d32da0 */
unsigned int F_00d32da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd32da0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  short sVar1;
  int iVar2;
  int iVar3;
  float * pfVar4;
  float * pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  (*(int *)(gen_frame + 0x14)) = *(int *)(param_1 + 0x1c);
  (*(int *)(gen_frame + 0x1c)) = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    iVar3 = param_2 - (int)param_3;
    (*(int *)(gen_frame + 0x18)) = iVar3;
    pfVar5 = param_3;
    do {
      sVar1 = *((short *)GEN_TOP((*(int *)(param_1 + 0xc) + (*(int *)(gen_frame + 0x1c)) * 2)));
      iVar2 = (*(int *)(gen_frame + 0x1c));
      if (*((char *)GEN_TOP((*(int *)(param_1 + 0x18) + 4 + (*(int *)(gen_frame + 0x1c)) * 8))) != '\0') {
        if (sVar1 == -1) {
          pfVar4 = (float *)(iVar3 + (int)pfVar5);
          fVar6 = *pfVar4;
          fVar7 = pfVar4[1];
          fVar8 = pfVar4[2];
          fVar9 = pfVar4[3];
        }
        else {
          pfVar4 = param_3 + sVar1 * 0xc;
          F_00d950d0(&(*(float *)(gen_frame + 0x0)),pfVar4 + 4,iVar3 + (int)pfVar5);
          fVar6 = *pfVar4 + (*(float *)(gen_frame + 0x0));
          fVar7 = pfVar4[1] + (*(float *)(gen_frame + 0x4));
          fVar8 = pfVar4[2] + (*(float *)(gen_frame + 0x8));
          fVar9 = pfVar4[3] + (*(float *)(gen_frame + 0xc));
          iVar2 = (*(int *)(gen_frame + 0x1c));
          iVar3 = (*(int *)(gen_frame + 0x18));
        }
        *pfVar5 = fVar6;
        pfVar5[1] = fVar7;
        pfVar5[2] = fVar8;
        pfVar5[3] = fVar9;
      }
      pfVar5 = pfVar5 + 0xc;
      (*(int *)(gen_frame + 0x1c)) = iVar2 + 1;
    } while (iVar2 + 1 < (*(int *)(gen_frame + 0x14)));
  }
  return 0;
}

/* ref: FUN_00d32e40 */
unsigned int F_00d32e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd32e40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if ((0 < *((short *)GEN_TOP((*(int *)(param_1 + 0xc) + iVar2 * 2)))) || ((char)param_2 == '\0')) {
        *((undefined1 *)GEN_TOP((*(int *)(param_1 + 0x18) + 4 + iVar2 * 8))) = 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return 0;
}

/* ref: FUN_00d32e80 */
uint F_00d32e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd32e80u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  code * param_3 = (code *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  code * pcVar5;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  pcVar5 = param_3;
  if (param_3 == (code *)0x0) {
    pcVar5 = ((code *)REFP(0xda0d70));
  }
  uVar4 = 0;
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      uVar3 = (*pcVar5)(param_2,*((uint *)GEN_TOP((*(int *)(param_1 + 0x18) + iVar2 * 8))) & 0xfffffffe);
      if (uVar3 == 0) {
        return (uint)uVar4;
      }
      uVar4 = uVar4 + 1;
      iVar2 = (int)(short)uVar4;
    } while (iVar2 < iVar1);
  }
  return 0xffffffff;
}

/* ref: FUN_00d32ee0 */
unsigned int F_00d32ee0(unsigned int gen_a0)
{
  GEN_ENTER(0xd32ee0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      *((undefined1 *)GEN_TOP((*(int *)(param_1 + 0x18) + 4 + iVar2 * 8))) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return 0;
}

/* ref: FUN_00d32f00 */
byte F_00d32f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd32f00u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  gen_size32 param_2 = (gen_size32)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  short sVar1;
  int iVar2;
  undefined1 uVar3;
  
  if (0 < (int)param_2) {
    F_00c48350(param_3,0,param_2);
  }
  iVar2 = param_2 + 1;
  *(undefined1 *)(param_2 + (int)param_3) = 1;
  if (*(int *)(param_1 + 0x1c) <= iVar2) {
    *(byte *)(param_2 + (int)param_3) = (byte)param_4;
    return (byte)param_4;
  }
  do {
    sVar1 = *((short *)GEN_TOP((*(int *)(param_1 + 0xc) + iVar2 * 2)));
    if ((sVar1 < 0) || (*(char *)((int)sVar1 + (int)param_3) == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    *(undefined1 *)(iVar2 + (int)param_3) = uVar3;
    iVar2 = iVar2 + 1;
  } while (iVar2 < *(int *)(param_1 + 0x1c));
  *(byte *)(param_2 + (int)param_3) = (byte)param_4;
  return (byte)iVar2;
}

/* ref: FUN_00d32f70 */
uint F_00d32f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd32f70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  short * psVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_3 + 0x14)) {
    psVar2 = *(short * PTR32 *)(param_3 + 0x10);
    do {
      if ((*psVar2 < 0) || (*(int *)(param_2 + 0x1c) <= (int)*psVar2)) {
        *param_1 = 0;
        return (uint)param_1;
      }
      iVar1 = iVar1 + 1;
      psVar2 = psVar2 + 1;
    } while (iVar1 < *(int *)(param_3 + 0x14));
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00d32fc0 */
uint F_00d32fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd32fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * pfVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = *(float *)&REFG(undefined, 0x1138afc);
  fVar5 = *(float *)&REFG(undefined, 0x1138af8);
  fVar4 = *(float *)&REFG(undefined, 0x1138af4);
  if (param_3 != -1) {
    iVar2 = param_3;
    fVar4 = *(float *)&REFG(undefined, 0x1138af0);
    fVar5 = *(float *)&REFG(undefined, 0x1138af4);
    fVar6 = *(float *)&REFG(undefined, 0x1138af8);
    fVar7 = *(float *)&REFG(undefined, 0x1138afc);
    do {
      iVar3 = (int)*((short *)GEN_TOP((*(int *)(param_1 + 0xc) + iVar2 * 2)));
      pfVar1 = (float *)(param_2 + 0x20 + iVar2 * 0x30);
      fVar4 = fVar4 * *pfVar1;
      fVar5 = fVar5 * pfVar1[1];
      fVar6 = fVar6 * pfVar1[2];
      fVar7 = fVar7 * pfVar1[3];
      iVar2 = iVar3;
    } while (iVar3 != -1);
    *param_4 = fVar4;
    param_4[1] = fVar5;
    param_4[2] = fVar6;
    param_4[3] = fVar7;
    return 0xffffffff;
  }
  *param_4 = *(float *)&REFG(undefined, 0x1138af0);
  param_4[1] = fVar4;
  param_4[2] = fVar5;
  param_4[3] = fVar6;
  return (uint)param_4;
}

/* ref: FUN_00d33010 */
uint F_00d33010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd33010u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  code * param_3 = (code *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x220];
  uint * puVar1;
  int iVar2;
  uint uVar3;
  undefined * pvVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if (*(int *)(param_4 + 0x14) != 0) {
    iVar2 = *(int *)(param_2 + 0x10);
    if (*(int *)(param_4 + 0x14) == iVar2) {
      if (*(int *)(param_2 + 0x20) != iVar2) {
        F_00da0a80(((undefined1 *)(gen_frame + 0x208)),((undefined1 *)(gen_frame + 0x4)),0x200);
        F_00d9fe80(((undefined1 *)(gen_frame + 0x208)),"No track names present in animation");
        ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                  (REFG(undefined4, 0x15dff78),1,0x654e3437,((undefined1 *)(gen_frame + 0x4)),"Rig\\hkaSkeletonUtils.cpp",0x1d7);
        F_00d9fda0(((undefined1 *)(gen_frame + 0x208)));
        return 1;
      }
      iVar5 = *(int *)(param_1 + 0x1c);
      iVar7 = 0;
      if (0 < iVar5) {
        puVar1 = *(uint * PTR32 *)(param_1 + 0x18);
        do {
          if ((*puVar1 & 0xfffffffe) == 0) {
            F_00da0a80(((undefined1 *)(gen_frame + 0x208)),((undefined1 *)(gen_frame + 0x4)),0x200);
            pvVar4 = (undefined *)F_00d9fe80(((undefined1 *)(gen_frame + 0x208)),"No bone name for bone ");
            F_00d9ff40(pvVar4,iVar7);
            iVar2 = *REFG(int * PTR32, 0x15dff78);
            uVar10 = 0x1e1;
            uVar9 = 0x654e3437;
            goto LAB_00d3317e;
          }
          iVar7 = iVar7 + 1;
          puVar1 = puVar1 + 2;
        } while (iVar7 < iVar5);
      }
      (*(int *)(gen_frame + 0x204)) = 0;
      if (0 < iVar2) {
        (*(int *)(gen_frame + 0x214)) = 0;
        do {
          uVar8 = *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x214)) + *(int *)(param_2 + 0x1c)))) & 0xfffffffe;
          sVar6 = 0;
          (*(char *)(gen_frame + 0x21b)) = '\0';
          if (iVar5 < 1) {
LAB_00d33199: ;
            F_00da0a80(((undefined1 *)(gen_frame + 0x208)),((undefined1 *)(gen_frame + 0x4)),0x200);
            pvVar4 = (undefined *)F_00d9fe80(((undefined1 *)(gen_frame + 0x208)),"No match for track ");
            F_00d9fe80(pvVar4,uVar8);
            iVar2 = *REFG(int * PTR32, 0x15dff78);
            uVar10 = 0x1f7;
            uVar9 = 0x654e3438;
LAB_00d3317e: ;
            ((code *)*(gen_code32 *)(iVar2 + 0xc))
                      (REFG(undefined4, 0x15dff78),1,uVar9,((undefined1 *)(gen_frame + 0x4)),"Rig\\hkaSkeletonUtils.cpp",uVar10);
            F_00d9fda0(((undefined1 *)(gen_frame + 0x208)));
            return 1;
          }
          iVar2 = 0;
          do {
            uVar3 = (*param_3)(*((uint *)GEN_TOP((*(int *)(param_1 + 0x18) + iVar2 * 8))) & 0xfffffffe,uVar8);
            if (uVar3 == 0) {
              (*(char *)(gen_frame + 0x21b)) = '\x01';
              *((short *)GEN_TOP((*(int *)(param_4 + 0x10) + (*(int *)(gen_frame + 0x204)) * 2))) = sVar6;
            }
            iVar5 = *(int *)(param_1 + 0x1c);
            sVar6 = sVar6 + 1;
            iVar2 = (int)sVar6;
          } while (iVar2 < iVar5);
          if ((*(char *)(gen_frame + 0x21b)) == '\0') goto LAB_00d33199;
          (*(int *)(gen_frame + 0x214)) = (*(int *)(gen_frame + 0x214)) + 0x10;
          iVar2 = (*(int *)(gen_frame + 0x204)) + 1;
          (*(int *)(gen_frame + 0x204)) = iVar2;
        } while (iVar2 < *(int *)(param_2 + 0x10));
      }
      return 0;
    }
  }
  F_00da0a80(((undefined1 *)(gen_frame + 0x208)),((undefined1 *)(gen_frame + 0x4)),0x200);
  F_00d9fe80(((undefined1 *)(gen_frame + 0x208)),"Binding is not initiialized");
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(undefined4, 0x15dff78),1,0x654e3435,((undefined1 *)(gen_frame + 0x4)),"Rig\\hkaSkeletonUtils.cpp",0x1d0);
  F_00d9fda0(((undefined1 *)(gen_frame + 0x208)));
  return 1;
}

/* ref: FUN_00d33240 */
unsigned int F_00d33240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd33240u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  int param_5 = (int)gen_a4;
  float * pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float * pfVar12;
  int iVar13;
  float * pfVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float local_20;
  float fStack_1c;
  float fStack_18;
  
  iVar16 = 0;
  if (0 < param_1) {
    iVar15 = param_5 - (int)param_4;
    pfVar12 = param_4;
    do {
      iVar13 = (int)*(short *)(param_2 + iVar16 * 2);
      pfVar14 = param_3;
      if (iVar13 != -1) {
        pfVar14 = (float *)(iVar13 * 0x30 + param_5);
      }
      fVar2 = pfVar14[4];
      fVar3 = pfVar14[5];
      fVar4 = pfVar14[6];
      fVar5 = pfVar14[7];
      fVar6 = *pfVar12;
      fVar7 = pfVar12[1];
      fVar8 = pfVar12[2];
      fVar9 = pfVar12[3];
      fVar17 = fVar6 * fVar2;
      fVar18 = fVar7 * fVar3;
      fVar19 = fVar8 * fVar4;
      fVar10 = pfVar14[7];
      local_20 = gen_bits2f((uint)*(undefined8 *)(pfVar14 + 4));
      fStack_1c = gen_bits2f((uint)((ulonglong)*(undefined8 *)(pfVar14 + 4) >> 0x20));
      fStack_18 = gen_bits2f((uint)*(undefined8 *)(pfVar14 + 6));
      fVar20 = (((fVar18 + fVar17) + fVar19) * fVar2 +
               (fVar5 * fVar5 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) * fVar6
               ) + (fVar8 * fVar3 - fVar7 * fVar4) * fVar5;
      fVar21 = (((fVar18 + fVar17) + fVar19) * fVar3 +
               (fVar5 * fVar5 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) * fVar7
               ) + (fVar6 * fVar4 - fVar8 * fVar2) * fVar5;
      fVar22 = (((fVar18 + fVar17) + fVar19) * fVar4 +
               (fVar5 * fVar5 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) * fVar8
               ) + (fVar7 * fVar2 - fVar6 * fVar3) * fVar5;
      fVar23 = (((fVar18 + fVar17) + fVar19) * fVar5 +
               (fVar5 * fVar5 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) * fVar9
               ) + (fVar9 * fVar5 - fVar9 * fVar5) * fVar5;
      local_30 = gen_bits2f((uint)*(undefined8 *)(pfVar12 + 4));
      fStack_2c = gen_bits2f((uint)((ulonglong)*(undefined8 *)(pfVar12 + 4) >> 0x20));
      fStack_28 = gen_bits2f((uint)*(undefined8 *)(pfVar12 + 6));
      fVar2 = pfVar12[7];
      fVar3 = pfVar14[1];
      fVar4 = pfVar14[2];
      fVar5 = pfVar14[3];
      fVar6 = pfVar12[8];
      fVar7 = pfVar12[9];
      fVar8 = pfVar12[10];
      fVar9 = pfVar12[0xb];
      fVar17 = pfVar14[8];
      fVar18 = pfVar14[9];
      fVar19 = pfVar14[10];
      fVar11 = pfVar14[0xb];
      pfVar1 = (float *)(iVar15 + (int)pfVar12);
      *pfVar1 = (fVar20 + fVar20) + *pfVar14;
      pfVar1[1] = (fVar21 + fVar21) + fVar3;
      pfVar1[2] = (fVar22 + fVar22) + fVar4;
      pfVar1[3] = (fVar23 + fVar23) + fVar5;
      pfVar14 = (float *)(iVar15 + 0x10 + (int)pfVar12);
      *pfVar14 = ((fStack_1c * fStack_28 - fStack_18 * fStack_2c) + local_30 * fVar10) +
                 local_20 * fVar2;
      pfVar14[1] = ((fStack_18 * local_30 - local_20 * fStack_28) + fStack_2c * fVar10) +
                   fStack_1c * fVar2;
      pfVar14[2] = ((local_20 * fStack_2c - fStack_1c * local_30) + fStack_28 * fVar10) +
                   fStack_18 * fVar2;
      pfVar14[3] = fVar2 * fVar10 -
                   ((fStack_1c * fStack_2c + local_20 * local_30) + fStack_18 * fStack_28);
      pfVar14 = (float *)(iVar15 + 0x20 + (int)pfVar12);
      *pfVar14 = fVar6 * fVar17;
      pfVar14[1] = fVar7 * fVar18;
      pfVar14[2] = fVar8 * fVar19;
      pfVar14[3] = fVar9 * fVar11;
      iVar16 = iVar16 + 1;
      pfVar12 = pfVar12 + 0xc;
    } while (iVar16 < param_1);
  }
  return 0;
}

/* ref: FUN_00d33580 */
unsigned int F_00d33580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd33580u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  F_00d33240(param_1,param_2,&REFG(undefined, 0x1351770),param_3,param_4);
  return 0;
}

/* ref: FUN_00d335b0 */
unsigned int F_00d335b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd335b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined8 uVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float * pfVar6;
  int iVar7;
  float * pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar28 [16];
  
  (*(int *)(gen_frame + 0x6c)) = 0;
  if (0 < param_1) {
    (*(float *)(gen_frame + 0x40)) = *(float *)&REFG(undefined, 0x1134c50);
    (*(float *)(gen_frame + 0x44)) = *(float *)&REFG(undefined, 0x1134c54);
    (*(float *)(gen_frame + 0x48)) = *(float *)&REFG(undefined, 0x1134c58);
    (*(float *)(gen_frame + 0x4c)) = *(float *)&REFG(undefined, 0x1134c5c);
    (*(int *)(gen_frame + 0x68)) = param_5 - (int)param_4;
    pfVar6 = param_4;
    do {
      iVar7 = (int)*(short *)(param_2 + (*(int *)(gen_frame + 0x6c)) * 2);
      pfVar8 = param_3;
      if (iVar7 != -1) {
        pfVar8 = param_4 + iVar7 * 0xc;
      }
      F_00d95160(&(*(float *)(gen_frame + 0x0)),pfVar8 + 4,pfVar8);
      memcpy(&(auVar2), &(*(gen_v16 *)(pfVar8 + 8)), sizeof(*(gen_v16 *)(pfVar8 + 8)) < sizeof(auVar2) ? sizeof(*(gen_v16 *)(pfVar8 + 8)) : sizeof(auVar2));
      fVar26 = *pfVar6;
      fVar27 = pfVar6[1];
      fVar3 = pfVar6[2];
      fVar4 = pfVar6[3];
      gen_rcpps(&(auVar28), &(in_XMM3), &(auVar2));
      fVar17 = gen_bits2f(*(uint *)&REFG(undefined, 0x10abc20) &
                          (uint)gen_fl2bits(((*(float *)(gen_frame + 0x40)) - (*(float *)((char *)&auVar2 + 0)) * (*(float *)((char *)&auVar28 + 0))) *
                                            (*(float *)((char *)&auVar28 + 0))));
      fVar19 = gen_bits2f(*(uint *)&REFG(undefined, 0x10abc24) &
                          (uint)gen_fl2bits(((*(float *)(gen_frame + 0x44)) - (*(float *)((char *)&auVar2 + 4)) * (*(float *)((char *)&auVar28 + 4))) *
                                            (*(float *)((char *)&auVar28 + 4))));
      fVar21 = gen_bits2f(*(uint *)&REFG(undefined, 0x10abc28) &
                          (uint)gen_fl2bits(((*(float *)(gen_frame + 0x48)) - (*(float *)((char *)&auVar2 + 8)) * (*(float *)((char *)&auVar28 + 8))) *
                                            (*(float *)((char *)&auVar28 + 8))));
      fVar23 = gen_bits2f(*(uint *)&REFG(undefined, 0x10abc2c) &
                          (uint)gen_fl2bits(((*(float *)(gen_frame + 0x4c)) - (*(float *)((char *)&auVar2 + 12)) * (*(float *)((char *)&auVar28 + 12))) *
                                            (*(float *)((char *)&auVar28 + 12))));
      (*(float *)(gen_frame + 0x20)) = fVar17;
      (*(float *)(gen_frame + 0x24)) = fVar19;
      (*(float *)(gen_frame + 0x28)) = fVar21;
      (*(float *)(gen_frame + 0x2c)) = fVar23;
      fVar9 = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9c0) ^ (uint)gen_fl2bits((*(float *)(gen_frame + 0x0))));
      fVar11 = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9c4) ^ (uint)gen_fl2bits((*(float *)(gen_frame + 0x4))));
      fVar13 = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9c8) ^ (uint)gen_fl2bits((*(float *)(gen_frame + 0x8))));
      fVar15 = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9cc) ^ (uint)gen_fl2bits((*(float *)(gen_frame + 0xc))));
      (*(float *)(gen_frame + 0x0)) = fVar9;
      (*(float *)(gen_frame + 0x4)) = fVar11;
      (*(float *)(gen_frame + 0x8)) = fVar13;
      (*(float *)(gen_frame + 0xc)) = fVar15;
      fVar10 = gen_bits2f((uint)gen_fl2bits(pfVar8[4]) ^ *(uint *)&REFG(undefined, 0x10ab9b0));
      fVar12 = gen_bits2f((uint)gen_fl2bits(pfVar8[5]) ^ *(uint *)&REFG(undefined, 0x10ab9b4));
      fVar14 = gen_bits2f((uint)gen_fl2bits(pfVar8[6]) ^ *(uint *)&REFG(undefined, 0x10ab9b8));
      fVar16 = gen_bits2f((uint)gen_fl2bits(pfVar8[7]) ^ *(uint *)&REFG(undefined, 0x10ab9bc));
      fVar18 = fVar26 * fVar10;
      fVar20 = fVar27 * fVar12;
      fVar22 = fVar3 * fVar14;
      (*(float *)(gen_frame + 0x30)) = fVar14;
      (*(float *)(gen_frame + 0x34)) = fVar10;
      (*(float *)(gen_frame + 0x38)) = fVar12;
      (*(float *)(gen_frame + 0x3c)) = fVar16;
      (*(undefined4 *)((char *)&in_XMM3 + 4)) = (undefined4)gen_fl2bits(fVar16);
      (*(undefined4 *)((char *)&in_XMM3 + 0)) = (undefined4)gen_fl2bits(fVar16);
      (*(undefined4 *)((char *)&in_XMM3 + 8)) = (undefined4)gen_fl2bits(fVar16);
      (*(undefined4 *)((char *)&in_XMM3 + 12)) = (undefined4)gen_fl2bits(fVar16);
      fVar24 = (((fVar20 + fVar18) + fVar22) * fVar10 +
               (fVar16 * fVar16 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) *
               fVar26) + (fVar3 * fVar12 - fVar27 * fVar14) * fVar16;
      fVar25 = (((fVar20 + fVar18) + fVar22) * fVar12 +
               (fVar16 * fVar16 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) *
               fVar27) + (fVar26 * fVar14 - fVar3 * fVar10) * fVar16;
      fVar26 = (((fVar20 + fVar18) + fVar22) * fVar14 +
               (fVar16 * fVar16 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) *
               fVar3) + (fVar27 * fVar10 - fVar26 * fVar12) * fVar16;
      fVar27 = (((fVar20 + fVar18) + fVar22) * fVar16 +
               (fVar16 * fVar16 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) *
               fVar4) + (fVar4 * fVar16 - fVar4 * fVar16) * fVar16;
      pfVar8 = (float *)((*(int *)(gen_frame + 0x68)) + (int)pfVar6);
      *pfVar8 = (fVar24 + fVar24) + fVar9;
      pfVar8[1] = (fVar25 + fVar25) + fVar11;
      pfVar8[2] = (fVar26 + fVar26) + fVar13;
      pfVar8[3] = (fVar27 + fVar27) + fVar15;
      uVar1 = *(undefined8 *)(pfVar6 + 4);
      fVar26 = pfVar6[7];
      (*(undefined8 *)(gen_frame + 0x50)) = uVar1;
      uVar1 = (*(undefined8 *)(gen_frame + 0x50));
      (*(undefined8 *)(gen_frame + 0x58)) = *(undefined8 *)(pfVar6 + 6);
      uVar5 = (*(undefined8 *)(gen_frame + 0x58));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 0)) = gen_bits2f((uint)uVar1);
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 4)) = gen_bits2f((uint)((ulonglong)uVar1 >> 0x20));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x58)) + 0)) = gen_bits2f((uint)*(undefined8 *)(pfVar6 + 6));
      pfVar8 = (float *)((*(int *)(gen_frame + 0x68)) + 0x10 + (int)pfVar6);
      *pfVar8 = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x58)) + 0)) * fVar12 - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 4)) * fVar14) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 0)) * fVar16)
                + fVar26 * fVar10;
      pfVar8[1] = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 0)) * fVar14 - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x58)) + 0)) * fVar10) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 4)) * fVar16
                  ) + fVar26 * fVar12;
      pfVar8[2] = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 4)) * fVar10 - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 0)) * fVar12) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x58)) + 0)) * fVar16
                  ) + fVar26 * fVar14;
      pfVar8[3] = fVar26 * fVar16 -
                  ((fVar12 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 4)) + fVar10 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 0))) + fVar14 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x58)) + 0))
                  );
      fVar26 = pfVar6[9];
      fVar27 = pfVar6[10];
      fVar3 = pfVar6[0xb];
      pfVar8 = (float *)((*(int *)(gen_frame + 0x68)) + 0x20 + (int)pfVar6);
      *pfVar8 = pfVar6[8] * fVar17;
      pfVar8[1] = fVar26 * fVar19;
      pfVar8[2] = fVar27 * fVar21;
      pfVar8[3] = fVar3 * fVar23;
      iVar7 = (*(int *)(gen_frame + 0x6c)) + 1;
      pfVar6 = pfVar6 + 0xc;
      (*(int *)(gen_frame + 0x6c)) = iVar7;
      (*(undefined8 *)(gen_frame + 0x50)) = uVar1;
      (*(undefined8 *)(gen_frame + 0x58)) = uVar5;
    } while (iVar7 < param_1);
  }
  return 0;
}

/* ref: FUN_00d33790 */
unsigned int F_00d33790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd33790u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  F_00d335b0(param_1,param_2,&REFG(undefined, 0x1351770),param_3,param_4);
  return 0;
}

/* ref: FUN_00d33af0 */
unsigned int F_00d33af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd33af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  float * pfVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float * pfVar8;
  float * pfVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  float fVar18;
  uint uVar19;
  float fVar20;
  uint uVar21;
  float fVar22;
  float fVar24;
  float fVar25;
  undefined1 auVar23 [16];
  
  fVar7 = REFG(float, 0x10905c4);
  uVar11 = 0;
  if (param_1 != 0) {
    iVar10 = (int)param_2 - param_5;
    pfVar8 = (float *)(param_5 + 0x10);
    pfVar9 = param_2;
    do {
      fVar2 = *(float *)(param_4 + uVar11 * 4);
      pfVar1 = ((float *)GEN_TOP(((param_3 - (int)param_2) + (int)pfVar9)));
      fVar3 = pfVar1[1];
      fVar5 = pfVar1[2];
      fVar6 = pfVar1[3];
      fVar13 = pfVar9[1];
      fVar12 = pfVar9[2];
      fVar14 = pfVar9[3];
      fVar15 = pfVar9[1];
      fVar16 = pfVar9[2];
      fVar18 = pfVar9[3];
      pfVar8[-4] = (*pfVar1 - *pfVar9) * fVar2 + *pfVar9;
      pfVar8[-3] = (fVar3 - fVar13) * fVar2 + fVar15;
      pfVar8[-2] = (fVar5 - fVar12) * fVar2 + fVar16;
      pfVar8[-1] = (fVar6 - fVar14) * fVar2 + fVar18;
      memcpy(&(auVar23), &(*(gen_v16 *)(iVar10 + (int)pfVar8)), sizeof(*(gen_v16 *)(iVar10 + (int)pfVar8)) < sizeof(auVar23) ? sizeof(*(gen_v16 *)(iVar10 + (int)pfVar8)) : sizeof(auVar23));
      fVar3 = (*(float *)((char *)&auVar23 + 12));
      pfVar1 = ((float *)GEN_TOP(((int)pfVar8 + (param_3 - (int)param_2) + iVar10)));
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar13 = pfVar1[3];
      fVar22 = (*(float *)((char *)&auVar23 + 0));
      fVar15 = *pfVar1 * fVar22;
      fVar24 = (*(float *)((char *)&auVar23 + 4));
      fVar16 = fVar5 * fVar24;
      fVar25 = (*(float *)((char *)&auVar23 + 8));
      fVar18 = fVar6 * fVar25;
      fVar20 = fVar13 * fVar3;
      fVar12 = fVar18 + fVar15;
      fVar14 = fVar20 + fVar16;
      fVar15 = fVar15 + fVar18;
      fVar16 = fVar16 + fVar20;
      uVar17 = (uint)gen_fl2bits(fVar12 + fVar14) & *(uint *)&REFG(undefined, 0x1134c84);
      uVar19 = (uint)gen_fl2bits(fVar16 + fVar15) & *(uint *)&REFG(undefined, 0x1134c88);
      uVar21 = (uint)gen_fl2bits(fVar15 + fVar16) & *(uint *)&REFG(undefined, 0x1134c8c);
      *pfVar8 = (gen_bits2f((uint)gen_fl2bits(fVar14 + fVar12) & *(uint *)&REFG(undefined, 0x1134c80) ^
                            (uint)gen_fl2bits(*pfVar1)) - fVar22) * fVar2 + fVar22;
      pfVar8[1] = (gen_bits2f(uVar17 ^ (uint)gen_fl2bits(fVar5)) - fVar24) * fVar2 + fVar24;
      pfVar8[2] = (gen_bits2f(uVar19 ^ (uint)gen_fl2bits(fVar6)) - fVar25) * fVar2 + fVar25;
      pfVar8[3] = (gen_bits2f(uVar21 ^ (uint)gen_fl2bits(fVar13)) - fVar3) * fVar2 + fVar3;
      fVar3 = *(float *)((int)pfVar8 + iVar10 + 0x10);
      fVar5 = *(float *)((int)pfVar8 + iVar10 + 0x14);
      fVar6 = *(float *)((int)pfVar8 + iVar10 + 0x18);
      fVar13 = *(float *)((int)pfVar8 + iVar10 + 0x1c);
      pfVar1 = ((float *)GEN_TOP(((int)pfVar8 + (param_3 - param_5) + 0x10)));
      fVar12 = pfVar1[1];
      fVar14 = pfVar1[2];
      fVar15 = pfVar1[3];
      pfVar8[4] = (*pfVar1 - fVar3) * fVar2 + fVar3;
      pfVar8[5] = (fVar12 - fVar5) * fVar2 + fVar5;
      pfVar8[6] = (fVar14 - fVar6) * fVar2 + fVar6;
      pfVar8[7] = (fVar15 - fVar13) * fVar2 + fVar13;
      fVar5 = *(float *)&REFG(undefined, 0x1138cac);
      fVar3 = *(float *)&REFG(undefined, 0x1138ca8);
      fVar2 = *(float *)&REFG(undefined, 0x1138ca4);
      if ((pfVar8[2] * pfVar8[2] + *pfVar8 * *pfVar8) +
          (pfVar8[3] * pfVar8[3] + pfVar8[1] * pfVar8[1]) < fVar7) {
        *pfVar8 = *(float *)&REFG(undefined, 0x1138ca0);
        pfVar8[1] = fVar2;
        pfVar8[2] = fVar3;
        pfVar8[3] = fVar5;
      }
      else {
        fVar2 = *pfVar8;
        fVar3 = pfVar8[1];
        fVar5 = pfVar8[2];
        fVar6 = pfVar8[3];
        fVar13 = fVar5 * fVar5 + fVar2 * fVar2;
        fVar12 = fVar6 * fVar6 + fVar3 * fVar3;
        fVar14 = fVar2 * fVar2 + fVar5 * fVar5;
        fVar15 = fVar3 * fVar3 + fVar6 * fVar6;
        fVar16 = fVar12 + fVar13;
        fVar13 = fVar13 + fVar12;
        fVar12 = fVar15 + fVar14;
        fVar14 = fVar14 + fVar15;
        (*(undefined4 *)((char *)&auVar4 + 4)) = (undefined4)gen_fl2bits(fVar13);
        (*(undefined4 *)((char *)&auVar4 + 0)) = (undefined4)gen_fl2bits(fVar16);
        (*(undefined4 *)((char *)&auVar4 + 8)) = (undefined4)gen_fl2bits(fVar12);
        (*(undefined4 *)((char *)&auVar4 + 12)) = (undefined4)gen_fl2bits(fVar14);
        gen_rsqrtps(&(auVar23), &(auVar23), &(auVar4));
        fVar22 = (*(float *)((char *)&auVar23 + 0));
        fVar15 = (*(float *)((char *)&auVar23 + 4));
        fVar18 = (*(float *)((char *)&auVar23 + 8));
        fVar20 = (*(float *)((char *)&auVar23 + 12));
        fVar13 = *(float *)&REFG(undefined, 0x1134c64) - (fVar15 * fVar13) * fVar15;
        fVar12 = *(float *)&REFG(undefined, 0x1134c68) - (fVar18 * fVar12) * fVar18;
        fVar14 = *(float *)&REFG(undefined, 0x1134c6c) - (fVar20 * fVar14) * fVar20;
        fVar15 = *(float *)&REFG(undefined, 0x1134c74) * fVar15;
        fVar18 = *(float *)&REFG(undefined, 0x1134c78) * fVar18;
        fVar20 = *(float *)&REFG(undefined, 0x1134c7c) * fVar20;
        *pfVar8 = fVar2 * ((*(float *)&REFG(undefined, 0x1134c60) - (fVar22 * fVar16) * fVar22) *
                          (*(float *)&REFG(undefined, 0x1134c70) * fVar22));
        pfVar8[1] = fVar3 * (fVar13 * fVar15);
        pfVar8[2] = fVar5 * (fVar12 * fVar18);
        pfVar8[3] = fVar6 * (fVar14 * fVar20);
      }
      uVar11 = uVar11 + 1;
      pfVar8 = pfVar8 + 0xc;
      pfVar9 = pfVar9 + 0xc;
    } while (uVar11 < param_1);
  }
  return 0;
}

/* ref: FUN_00d33c30 */
unsigned int F_00d33c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd33c30u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  float param_4 = (float)gen_a3;
  int param_5 = (int)gen_a4;
  float * pfVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float * pfVar8;
  float * pfVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  float fVar16;
  uint uVar17;
  float fVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  
  fVar7 = REFG(float, 0x10905c4);
  if (param_1 != 0) {
    iVar10 = (int)param_2 - param_5;
    pfVar8 = (float *)(param_5 + 0x10);
    pfVar9 = param_2;
    do {
      pfVar1 = ((float *)GEN_TOP(((param_3 - (int)param_2) + (int)pfVar9)));
      fVar3 = pfVar1[1];
      fVar4 = pfVar1[2];
      fVar5 = pfVar1[3];
      fVar6 = pfVar9[1];
      fVar11 = pfVar9[2];
      fVar12 = pfVar9[3];
      fVar13 = pfVar9[1];
      fVar14 = pfVar9[2];
      fVar16 = pfVar9[3];
      pfVar8[-4] = (*pfVar1 - *pfVar9) * param_4 + *pfVar9;
      pfVar8[-3] = (fVar3 - fVar6) * param_4 + fVar13;
      pfVar8[-2] = (fVar4 - fVar11) * param_4 + fVar14;
      pfVar8[-1] = (fVar5 - fVar12) * param_4 + fVar16;
      pfVar1 = (float *)(iVar10 + (int)pfVar8);
      fVar3 = *pfVar1;
      fVar4 = pfVar1[1];
      fVar5 = pfVar1[2];
      fVar6 = pfVar1[3];
      memcpy(&(auVar22), &(*((gen_v16 *)GEN_TOP(((int)pfVar8 + (param_3 - (int)param_2) + iVar10)))), sizeof(*((gen_v16 *)GEN_TOP(((int)pfVar8 + (param_3 - (int)param_2) + iVar10)))) < sizeof(auVar22) ? sizeof(*((gen_v16 *)GEN_TOP(((int)pfVar8 + (param_3 - (int)param_2) + iVar10)))) : sizeof(auVar22));
      fVar13 = (*(float *)((char *)&auVar22 + 0)) * fVar3;
      fVar14 = (*(float *)((char *)&auVar22 + 4)) * fVar4;
      fVar16 = (*(float *)((char *)&auVar22 + 8)) * fVar5;
      fVar18 = (*(float *)((char *)&auVar22 + 12)) * fVar6;
      fVar11 = fVar16 + fVar13;
      fVar12 = fVar18 + fVar14;
      fVar13 = fVar13 + fVar16;
      fVar14 = fVar14 + fVar18;
      uVar15 = (uint)gen_fl2bits(fVar11 + fVar12) & *(uint *)&REFG(undefined, 0x1134c84);
      uVar17 = (uint)gen_fl2bits(fVar14 + fVar13) & *(uint *)&REFG(undefined, 0x1134c88);
      uVar19 = (uint)gen_fl2bits(fVar13 + fVar14) & *(uint *)&REFG(undefined, 0x1134c8c);
      *pfVar8 = (gen_bits2f((uint)gen_fl2bits(fVar12 + fVar11) & *(uint *)&REFG(undefined, 0x1134c80) ^
                            (uint)gen_fl2bits((*(float *)((char *)&auVar22 + 0)))) - fVar3) * param_4 + fVar3;
      pfVar8[1] = (gen_bits2f(uVar15 ^ (uint)gen_fl2bits((*(float *)((char *)&auVar22 + 4)))) - fVar4) * param_4 + fVar4
      ;
      pfVar8[2] = (gen_bits2f(uVar17 ^ (uint)gen_fl2bits((*(float *)((char *)&auVar22 + 8)))) - fVar5) * param_4 + fVar5
      ;
      pfVar8[3] = (gen_bits2f(uVar19 ^ (uint)gen_fl2bits((*(float *)((char *)&auVar22 + 12)))) - fVar6) * param_4 +
                  fVar6;
      pfVar1 = ((float *)GEN_TOP(((int)pfVar8 + (param_3 - param_5) + 0x10)));
      fVar3 = pfVar1[1];
      fVar4 = pfVar1[2];
      fVar5 = pfVar1[3];
      fVar6 = *(float *)((int)pfVar8 + iVar10 + 0x14);
      fVar11 = *(float *)((int)pfVar8 + iVar10 + 0x18);
      fVar12 = *(float *)((int)pfVar8 + iVar10 + 0x1c);
      fVar13 = *(float *)((int)pfVar8 + iVar10 + 0x14);
      fVar14 = *(float *)((int)pfVar8 + iVar10 + 0x18);
      fVar16 = *(float *)((int)pfVar8 + iVar10 + 0x1c);
      pfVar8[4] = (*pfVar1 - *(float *)((int)pfVar8 + iVar10 + 0x10)) * param_4 +
                  *(float *)((int)pfVar8 + iVar10 + 0x10);
      pfVar8[5] = (fVar3 - fVar6) * param_4 + fVar13;
      pfVar8[6] = (fVar4 - fVar11) * param_4 + fVar14;
      pfVar8[7] = (fVar5 - fVar12) * param_4 + fVar16;
      fVar5 = *(float *)&REFG(undefined, 0x1138cac);
      fVar4 = *(float *)&REFG(undefined, 0x1138ca8);
      fVar3 = *(float *)&REFG(undefined, 0x1138ca4);
      if ((pfVar8[2] * pfVar8[2] + *pfVar8 * *pfVar8) +
          (pfVar8[3] * pfVar8[3] + pfVar8[1] * pfVar8[1]) < fVar7) {
        *pfVar8 = *(float *)&REFG(undefined, 0x1138ca0);
        pfVar8[1] = fVar3;
        pfVar8[2] = fVar4;
        pfVar8[3] = fVar5;
      }
      else {
        fVar3 = *pfVar8;
        fVar4 = pfVar8[1];
        fVar5 = pfVar8[2];
        fVar6 = pfVar8[3];
        fVar11 = fVar5 * fVar5 + fVar3 * fVar3;
        fVar12 = fVar6 * fVar6 + fVar4 * fVar4;
        fVar13 = fVar3 * fVar3 + fVar5 * fVar5;
        fVar14 = fVar4 * fVar4 + fVar6 * fVar6;
        fVar16 = fVar12 + fVar11;
        fVar11 = fVar11 + fVar12;
        fVar12 = fVar14 + fVar13;
        fVar13 = fVar13 + fVar14;
        (*(undefined4 *)((char *)&auVar2 + 4)) = (undefined4)gen_fl2bits(fVar11);
        (*(undefined4 *)((char *)&auVar2 + 0)) = (undefined4)gen_fl2bits(fVar16);
        (*(undefined4 *)((char *)&auVar2 + 8)) = (undefined4)gen_fl2bits(fVar12);
        (*(undefined4 *)((char *)&auVar2 + 12)) = (undefined4)gen_fl2bits(fVar13);
        gen_rsqrtps(&(auVar22), &(auVar22), &(auVar2));
        fVar21 = (*(float *)((char *)&auVar22 + 0));
        fVar14 = (*(float *)((char *)&auVar22 + 4));
        fVar18 = (*(float *)((char *)&auVar22 + 8));
        fVar20 = (*(float *)((char *)&auVar22 + 12));
        fVar11 = *(float *)&REFG(undefined, 0x1134c64) - (fVar14 * fVar11) * fVar14;
        fVar12 = *(float *)&REFG(undefined, 0x1134c68) - (fVar18 * fVar12) * fVar18;
        fVar13 = *(float *)&REFG(undefined, 0x1134c6c) - (fVar20 * fVar13) * fVar20;
        fVar14 = *(float *)&REFG(undefined, 0x1134c74) * fVar14;
        fVar18 = *(float *)&REFG(undefined, 0x1134c78) * fVar18;
        fVar20 = *(float *)&REFG(undefined, 0x1134c7c) * fVar20;
        *pfVar8 = fVar3 * ((*(float *)&REFG(undefined, 0x1134c60) - (fVar21 * fVar16) * fVar21) *
                          (*(float *)&REFG(undefined, 0x1134c70) * fVar21));
        pfVar8[1] = fVar4 * (fVar11 * fVar14);
        pfVar8[2] = fVar5 * (fVar12 * fVar18);
        pfVar8[3] = fVar6 * (fVar13 * fVar20);
      }
      pfVar8 = pfVar8 + 0xc;
      pfVar9 = pfVar9 + 0xc;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return 0;
}

/* ref: FUN_00d33d60 */
unsigned int F_00d33d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd33d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  float param_5 = (float)gen_a4;
  int param_6 = (int)gen_a5;
  float * pfVar1;
  float * pfVar2;
  float * pfVar3;
  float * pfVar4;
  float * pfVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  float fVar18;
  uint uVar19;
  float fVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  uint local_8;
  
  fVar11 = REFG(float, 0x10905c4);
  local_8 = 0;
  if (param_1 != 0) {
    do {
      iVar12 = (int)*(short *)(param_2 + local_8 * 2);
      pfVar1 = (float *)(param_4 + iVar12 * 0x30);
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      pfVar2 = (float *)(param_3 + iVar12 * 0x30);
      fVar10 = pfVar2[1];
      fVar13 = pfVar2[2];
      fVar14 = pfVar2[3];
      pfVar3 = (float *)(param_3 + iVar12 * 0x30);
      fVar15 = pfVar3[1];
      fVar16 = pfVar3[2];
      fVar18 = pfVar3[3];
      pfVar4 = (float *)(param_6 + iVar12 * 0x30);
      *pfVar4 = (*pfVar1 - *pfVar2) * param_5 + *pfVar3;
      pfVar4[1] = (fVar7 - fVar10) * param_5 + fVar15;
      pfVar4[2] = (fVar8 - fVar13) * param_5 + fVar16;
      pfVar4[3] = (fVar9 - fVar14) * param_5 + fVar18;
      pfVar1 = (float *)(param_3 + 0x10 + iVar12 * 0x30);
      fVar7 = *pfVar1;
      fVar8 = pfVar1[1];
      fVar9 = pfVar1[2];
      fVar10 = pfVar1[3];
      memcpy(&(auVar24), &(*(gen_v16 *)(param_4 + 0x10 + iVar12 * 0x30)), sizeof(*(gen_v16 *)(param_4 + 0x10 + iVar12 * 0x30)) < sizeof(auVar24) ? sizeof(*(gen_v16 *)(param_4 + 0x10 + iVar12 * 0x30)) : sizeof(auVar24));
      fVar15 = (*(float *)((char *)&auVar24 + 0)) * fVar7;
      fVar16 = (*(float *)((char *)&auVar24 + 4)) * fVar8;
      fVar18 = (*(float *)((char *)&auVar24 + 8)) * fVar9;
      fVar20 = (*(float *)((char *)&auVar24 + 12)) * fVar10;
      fVar13 = fVar18 + fVar15;
      fVar14 = fVar20 + fVar16;
      fVar15 = fVar15 + fVar18;
      fVar16 = fVar16 + fVar20;
      uVar17 = (uint)gen_fl2bits(fVar13 + fVar14) & *(uint *)&REFG(undefined, 0x1134c84);
      uVar19 = (uint)gen_fl2bits(fVar16 + fVar15) & *(uint *)&REFG(undefined, 0x1134c88);
      uVar21 = (uint)gen_fl2bits(fVar15 + fVar16) & *(uint *)&REFG(undefined, 0x1134c8c);
      pfVar1 = (float *)(param_6 + 0x10 + iVar12 * 0x30);
      *pfVar1 = (gen_bits2f((uint)gen_fl2bits(fVar14 + fVar13) & *(uint *)&REFG(undefined, 0x1134c80) ^
                            (uint)gen_fl2bits((*(float *)((char *)&auVar24 + 0)))) - fVar7) * param_5 + fVar7;
      pfVar1[1] = (gen_bits2f(uVar17 ^ (uint)gen_fl2bits((*(float *)((char *)&auVar24 + 4)))) - fVar8) * param_5 + fVar8
      ;
      pfVar1[2] = (gen_bits2f(uVar19 ^ (uint)gen_fl2bits((*(float *)((char *)&auVar24 + 8)))) - fVar9) * param_5 + fVar9
      ;
      pfVar1[3] = (gen_bits2f(uVar21 ^ (uint)gen_fl2bits((*(float *)((char *)&auVar24 + 12)))) - fVar10) * param_5 +
                  fVar10;
      pfVar1 = (float *)(param_4 + 0x20 + iVar12 * 0x30);
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      pfVar2 = (float *)(param_3 + 0x20 + iVar12 * 0x30);
      fVar10 = pfVar2[1];
      fVar13 = pfVar2[2];
      fVar14 = pfVar2[3];
      pfVar3 = (float *)(param_6 + 0x10 + iVar12 * 0x30);
      pfVar4 = (float *)(param_3 + 0x20 + iVar12 * 0x30);
      fVar15 = pfVar4[1];
      fVar16 = pfVar4[2];
      fVar18 = pfVar4[3];
      pfVar5 = (float *)(param_6 + 0x20 + iVar12 * 0x30);
      *pfVar5 = (*pfVar1 - *pfVar2) * param_5 + *pfVar4;
      pfVar5[1] = (fVar7 - fVar10) * param_5 + fVar15;
      pfVar5[2] = (fVar8 - fVar13) * param_5 + fVar16;
      pfVar5[3] = (fVar9 - fVar14) * param_5 + fVar18;
      fVar9 = *(float *)&REFG(undefined, 0x1138cac);
      fVar8 = *(float *)&REFG(undefined, 0x1138ca8);
      fVar7 = *(float *)&REFG(undefined, 0x1138ca4);
      if ((pfVar3[2] * pfVar3[2] + *pfVar3 * *pfVar3) +
          (pfVar3[3] * pfVar3[3] + pfVar3[1] * pfVar3[1]) < fVar11) {
        *pfVar3 = *(float *)&REFG(undefined, 0x1138ca0);
        pfVar3[1] = fVar7;
        pfVar3[2] = fVar8;
        pfVar3[3] = fVar9;
      }
      else {
        fVar7 = *pfVar3;
        fVar8 = pfVar3[1];
        fVar9 = pfVar3[2];
        fVar10 = pfVar3[3];
        fVar13 = fVar9 * fVar9 + fVar7 * fVar7;
        fVar14 = fVar10 * fVar10 + fVar8 * fVar8;
        fVar15 = fVar7 * fVar7 + fVar9 * fVar9;
        fVar16 = fVar8 * fVar8 + fVar10 * fVar10;
        fVar18 = fVar14 + fVar13;
        fVar13 = fVar13 + fVar14;
        fVar14 = fVar16 + fVar15;
        fVar15 = fVar15 + fVar16;
        (*(undefined4 *)((char *)&auVar6 + 4)) = (undefined4)gen_fl2bits(fVar13);
        (*(undefined4 *)((char *)&auVar6 + 0)) = (undefined4)gen_fl2bits(fVar18);
        (*(undefined4 *)((char *)&auVar6 + 8)) = (undefined4)gen_fl2bits(fVar14);
        (*(undefined4 *)((char *)&auVar6 + 12)) = (undefined4)gen_fl2bits(fVar15);
        gen_rsqrtps(&(auVar24), &(auVar24), &(auVar6));
        fVar23 = (*(float *)((char *)&auVar24 + 0));
        fVar16 = (*(float *)((char *)&auVar24 + 4));
        fVar20 = (*(float *)((char *)&auVar24 + 8));
        fVar22 = (*(float *)((char *)&auVar24 + 12));
        fVar13 = *(float *)&REFG(undefined, 0x1134c64) - (fVar16 * fVar13) * fVar16;
        fVar14 = *(float *)&REFG(undefined, 0x1134c68) - (fVar20 * fVar14) * fVar20;
        fVar15 = *(float *)&REFG(undefined, 0x1134c6c) - (fVar22 * fVar15) * fVar22;
        fVar16 = *(float *)&REFG(undefined, 0x1134c74) * fVar16;
        fVar20 = *(float *)&REFG(undefined, 0x1134c78) * fVar20;
        fVar22 = *(float *)&REFG(undefined, 0x1134c7c) * fVar22;
        *pfVar3 = fVar7 * ((*(float *)&REFG(undefined, 0x1134c60) - (fVar23 * fVar18) * fVar23) *
                          (*(float *)&REFG(undefined, 0x1134c70) * fVar23));
        pfVar3[1] = fVar8 * (fVar13 * fVar16);
        pfVar3[2] = fVar9 * (fVar14 * fVar20);
        pfVar3[3] = fVar10 * (fVar15 * fVar22);
      }
      local_8 = local_8 + 1;
    } while (local_8 < param_1);
  }
  return 0;
}

/* ref: FUN_00d33ea0 */
unsigned int F_00d33ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd33ea0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  float * pfVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint uVar22;
  uint uVar23;
  undefined1 auVar21 [16];
  uint uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 in_XMM3 [16] = {0};
  
  fVar20 = *(float *)&REFG(undefined, 0x1134c7c);
  fVar18 = *(float *)&REFG(undefined, 0x1134c78);
  fVar16 = *(float *)&REFG(undefined, 0x1134c74);
  fVar14 = *(float *)&REFG(undefined, 0x1134c70);
  fVar4 = *(float *)&REFG(undefined, 0x1134c6c);
  fVar3 = *(float *)&REFG(undefined, 0x1134c68);
  fVar2 = *(float *)&REFG(undefined, 0x1134c64);
  fVar1 = *(float *)&REFG(undefined, 0x1134c60);
  iVar11 = param_1;
  fVar13 = *(float *)&REFG(undefined, 0x1134c7c);
  fVar15 = *(float *)&REFG(undefined, 0x1134c78);
  fVar17 = *(float *)&REFG(undefined, 0x1134c74);
  fVar19 = *(float *)&REFG(undefined, 0x1134c70);
  fVar5 = *(float *)&REFG(undefined, 0x1134c6c);
  fVar6 = *(float *)&REFG(undefined, 0x1134c68);
  fVar7 = *(float *)&REFG(undefined, 0x1134c64);
  fVar8 = *(float *)&REFG(undefined, 0x1134c60);
  for (iVar9 = (int)(param_2 + ((int)param_2 >> 0x1f & 3U)) >> 2; *(float *)&REFG(undefined, 0x1134c60) = fVar8,
      *(float *)&REFG(undefined, 0x1134c64) = fVar7, *(float *)&REFG(undefined, 0x1134c68) = fVar6,
      *(float *)&REFG(undefined, 0x1134c6c) = fVar5, *(float *)&REFG(undefined, 0x1134c70) = fVar19,
      *(float *)&REFG(undefined, 0x1134c74) = fVar17, *(float *)&REFG(undefined, 0x1134c78) = fVar15,
      *(float *)&REFG(undefined, 0x1134c7c) = fVar13, iVar9 != 0; iVar9 = iVar9 + -1) {
    (*(float *)((char *)&auVar25 + 0)) =
         *(float *)(iVar11 + 0x14) * *(float *)(iVar11 + 0x14) +
         *(float *)(iVar11 + 0x10) * *(float *)(iVar11 + 0x10);
    (*(float *)((char *)&auVar25 + 4)) =
         *(float *)(iVar11 + 0x44) * *(float *)(iVar11 + 0x44) +
         *(float *)(iVar11 + 0x40) * *(float *)(iVar11 + 0x40);
    (*(float *)((char *)&auVar25 + 8)) =
         *(float *)(iVar11 + 0x74) * *(float *)(iVar11 + 0x74) +
         *(float *)(iVar11 + 0x70) * *(float *)(iVar11 + 0x70);
    (*(float *)((char *)&auVar25 + 12)) =
         *(float *)(iVar11 + 0xa4) * *(float *)(iVar11 + 0xa4) +
         *(float *)(iVar11 + 0xa0) * *(float *)(iVar11 + 0xa0);
    (*(float *)((char *)&auVar21 + 0)) =
         (*(float *)(iVar11 + 0x1c) * *(float *)(iVar11 + 0x1c) +
         *(float *)(iVar11 + 0x18) * *(float *)(iVar11 + 0x18)) + (*(float *)((char *)&auVar25 + 0));
    (*(float *)((char *)&auVar21 + 4)) =
         (*(float *)(iVar11 + 0x4c) * *(float *)(iVar11 + 0x4c) +
         *(float *)(iVar11 + 0x48) * *(float *)(iVar11 + 0x48)) + (*(float *)((char *)&auVar25 + 4));
    (*(float *)((char *)&auVar21 + 8)) =
         (*(float *)(iVar11 + 0x7c) * *(float *)(iVar11 + 0x7c) +
         *(float *)(iVar11 + 0x78) * *(float *)(iVar11 + 0x78)) + (*(float *)((char *)&auVar25 + 8));
    (*(float *)((char *)&auVar21 + 12)) =
         (*(float *)(iVar11 + 0xac) * *(float *)(iVar11 + 0xac) +
         *(float *)(iVar11 + 0xa8) * *(float *)(iVar11 + 0xa8)) + (*(float *)((char *)&auVar25 + 12));
    gen_rsqrtps(&(auVar25), &(auVar25), &(auVar21));
    fVar13 = (*(float *)((char *)&auVar25 + 0));
    fVar15 = (*(float *)((char *)&auVar25 + 4));
    fVar17 = (*(float *)((char *)&auVar25 + 8));
    fVar19 = (*(float *)((char *)&auVar25 + 12));
    (*(float *)((char *)&in_XMM3 + 0)) = (fVar13 * (*(float *)((char *)&auVar21 + 0))) * fVar13;
    (*(float *)((char *)&in_XMM3 + 4)) = (fVar15 * (*(float *)((char *)&auVar21 + 4))) * fVar15;
    (*(float *)((char *)&in_XMM3 + 8)) = (fVar17 * (*(float *)((char *)&auVar21 + 8))) * fVar17;
    (*(float *)((char *)&in_XMM3 + 12)) = (fVar19 * (*(float *)((char *)&auVar21 + 12))) * fVar19;
    fVar13 = (fVar1 - (*(float *)((char *)&in_XMM3 + 0))) * (fVar14 * fVar13);
    fVar15 = (fVar2 - (*(float *)((char *)&in_XMM3 + 4))) * (fVar16 * fVar15);
    fVar17 = (fVar3 - (*(float *)((char *)&in_XMM3 + 8))) * (fVar18 * fVar17);
    fVar19 = (fVar4 - (*(float *)((char *)&in_XMM3 + 12))) * (fVar20 * fVar19);
    uVar12 = (uint)gen_fl2bits(fVar17) & *(uint *)&REFG(undefined, 0x1134d28) |
             (uint)gen_fl2bits(fVar13) & *(uint *)&REFG(undefined, 0x1134d20);
    uVar22 = (uint)gen_fl2bits(fVar19) & *(uint *)&REFG(undefined, 0x1134d2c) |
             (uint)gen_fl2bits(fVar15) & *(uint *)&REFG(undefined, 0x1134d24);
    uVar23 = (uint)gen_fl2bits(fVar13) & *(uint *)&REFG(undefined, 0x1134d20) |
             (uint)gen_fl2bits(fVar17) & *(uint *)&REFG(undefined, 0x1134d28);
    uVar24 = (uint)gen_fl2bits(fVar15) & *(uint *)&REFG(undefined, 0x1134d24) |
             (uint)gen_fl2bits(fVar19) & *(uint *)&REFG(undefined, 0x1134d2c);
    *(float *)(iVar11 + 0x10) = gen_bits2f(uVar22 | uVar12) * *(float *)(iVar11 + 0x10);
    *(float *)(iVar11 + 0x14) = gen_bits2f(uVar12 | uVar22) * *(float *)(iVar11 + 0x14);
    *(float *)(iVar11 + 0x18) = gen_bits2f(uVar24 | uVar23) * *(float *)(iVar11 + 0x18);
    *(float *)(iVar11 + 0x1c) = gen_bits2f(uVar23 | uVar24) * *(float *)(iVar11 + 0x1c);
    uVar12 = (uint)gen_fl2bits(fVar17) & *(uint *)&REFG(undefined, 0x1134d38) |
             (uint)gen_fl2bits(fVar13) & *(uint *)&REFG(undefined, 0x1134d30);
    uVar22 = (uint)gen_fl2bits(fVar19) & *(uint *)&REFG(undefined, 0x1134d3c) |
             (uint)gen_fl2bits(fVar15) & *(uint *)&REFG(undefined, 0x1134d34);
    uVar23 = (uint)gen_fl2bits(fVar13) & *(uint *)&REFG(undefined, 0x1134d30) |
             (uint)gen_fl2bits(fVar17) & *(uint *)&REFG(undefined, 0x1134d38);
    uVar24 = (uint)gen_fl2bits(fVar15) & *(uint *)&REFG(undefined, 0x1134d34) |
             (uint)gen_fl2bits(fVar19) & *(uint *)&REFG(undefined, 0x1134d3c);
    *(float *)(iVar11 + 0x40) = gen_bits2f(uVar22 | uVar12) * *(float *)(iVar11 + 0x40);
    *(float *)(iVar11 + 0x44) = gen_bits2f(uVar12 | uVar22) * *(float *)(iVar11 + 0x44);
    *(float *)(iVar11 + 0x48) = gen_bits2f(uVar24 | uVar23) * *(float *)(iVar11 + 0x48);
    *(float *)(iVar11 + 0x4c) = gen_bits2f(uVar23 | uVar24) * *(float *)(iVar11 + 0x4c);
    uVar12 = (uint)gen_fl2bits(fVar17) & *(uint *)&REFG(undefined, 0x1134d48) |
             (uint)gen_fl2bits(fVar13) & *(uint *)&REFG(undefined, 0x1134d40);
    uVar22 = (uint)gen_fl2bits(fVar19) & *(uint *)&REFG(undefined, 0x1134d4c) |
             (uint)gen_fl2bits(fVar15) & *(uint *)&REFG(undefined, 0x1134d44);
    uVar23 = (uint)gen_fl2bits(fVar13) & *(uint *)&REFG(undefined, 0x1134d40) |
             (uint)gen_fl2bits(fVar17) & *(uint *)&REFG(undefined, 0x1134d48);
    uVar24 = (uint)gen_fl2bits(fVar15) & *(uint *)&REFG(undefined, 0x1134d44) |
             (uint)gen_fl2bits(fVar19) & *(uint *)&REFG(undefined, 0x1134d4c);
    *(float *)(iVar11 + 0x70) = gen_bits2f(uVar22 | uVar12) * *(float *)(iVar11 + 0x70);
    *(float *)(iVar11 + 0x74) = gen_bits2f(uVar12 | uVar22) * *(float *)(iVar11 + 0x74);
    *(float *)(iVar11 + 0x78) = gen_bits2f(uVar24 | uVar23) * *(float *)(iVar11 + 0x78);
    *(float *)(iVar11 + 0x7c) = gen_bits2f(uVar23 | uVar24) * *(float *)(iVar11 + 0x7c);
    uVar12 = (uint)gen_fl2bits(fVar17) & *(uint *)&REFG(undefined, 0x1134d58) |
             (uint)gen_fl2bits(fVar13) & *(uint *)&REFG(undefined, 0x1134d50);
    uVar22 = (uint)gen_fl2bits(fVar19) & *(uint *)&REFG(undefined, 0x1134d5c) |
             (uint)gen_fl2bits(fVar15) & *(uint *)&REFG(undefined, 0x1134d54);
    uVar23 = (uint)gen_fl2bits(fVar13) & *(uint *)&REFG(undefined, 0x1134d50) |
             (uint)gen_fl2bits(fVar17) & *(uint *)&REFG(undefined, 0x1134d58);
    uVar24 = (uint)gen_fl2bits(fVar15) & *(uint *)&REFG(undefined, 0x1134d54) |
             (uint)gen_fl2bits(fVar19) & *(uint *)&REFG(undefined, 0x1134d5c);
    *(float *)(iVar11 + 0xa0) = gen_bits2f(uVar22 | uVar12) * *(float *)(iVar11 + 0xa0);
    *(float *)(iVar11 + 0xa4) = gen_bits2f(uVar12 | uVar22) * *(float *)(iVar11 + 0xa4);
    *(float *)(iVar11 + 0xa8) = gen_bits2f(uVar24 | uVar23) * *(float *)(iVar11 + 0xa8);
    *(float *)(iVar11 + 0xac) = gen_bits2f(uVar23 | uVar24) * *(float *)(iVar11 + 0xac);
    iVar11 = iVar11 + 0xc0;
    fVar13 = *(float *)&REFG(undefined, 0x1134c7c);
    fVar15 = *(float *)&REFG(undefined, 0x1134c78);
    fVar17 = *(float *)&REFG(undefined, 0x1134c74);
    fVar19 = *(float *)&REFG(undefined, 0x1134c70);
    fVar5 = *(float *)&REFG(undefined, 0x1134c6c);
    fVar6 = *(float *)&REFG(undefined, 0x1134c68);
    fVar7 = *(float *)&REFG(undefined, 0x1134c64);
    fVar8 = *(float *)&REFG(undefined, 0x1134c60);
  }
  uVar12 = param_2 & 0x80000003;
  if ((int)uVar12 < 0) {
    uVar12 = (uVar12 - 1 | 0xfffffffc) + 1;
  }
  if (uVar12 != 0) {
    pfVar10 = (float *)(iVar11 + 0x10);
    do {
      fVar1 = *pfVar10;
      fVar2 = pfVar10[1];
      fVar3 = pfVar10[2];
      fVar4 = pfVar10[3];
      fVar14 = fVar3 * fVar3 + fVar1 * fVar1;
      fVar16 = fVar4 * fVar4 + fVar2 * fVar2;
      fVar18 = fVar1 * fVar1 + fVar3 * fVar3;
      fVar20 = fVar2 * fVar2 + fVar4 * fVar4;
      (*(float *)((char *)&auVar26 + 0)) = fVar16 + fVar14;
      (*(float *)((char *)&auVar26 + 4)) = fVar14 + fVar16;
      (*(float *)((char *)&auVar26 + 8)) = fVar20 + fVar18;
      (*(float *)((char *)&auVar26 + 12)) = fVar18 + fVar20;
      gen_rsqrtps(&(in_XMM3), &(in_XMM3), &(auVar26));
      fVar14 = (*(float *)((char *)&in_XMM3 + 0));
      fVar16 = (*(float *)((char *)&in_XMM3 + 4));
      fVar18 = (*(float *)((char *)&in_XMM3 + 8));
      fVar20 = (*(float *)((char *)&in_XMM3 + 12));
      *pfVar10 = fVar1 * ((fVar8 - (fVar14 * (*(float *)((char *)&auVar26 + 0))) * fVar14) * (fVar19 * fVar14));
      pfVar10[1] = fVar2 * ((fVar7 - (fVar16 * (*(float *)((char *)&auVar26 + 4))) * fVar16) * (fVar17 * fVar16));
      pfVar10[2] = fVar3 * ((fVar6 - (fVar18 * (*(float *)((char *)&auVar26 + 8))) * fVar18) * (fVar15 * fVar18));
      pfVar10[3] = fVar4 * ((fVar5 - (fVar20 * (*(float *)((char *)&auVar26 + 12))) * fVar20) * (fVar13 * fVar20));
      pfVar10 = pfVar10 + 0xc;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  return 0;
}

/* ref: FUN_00d34070 */
uint F_00d34070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd34070u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  gen_v16 * pauVar4;
  gen_v16 * pauVar5;
  int iVar6;
  int iVar7;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auVar8 [16];
  undefined1 auVar12 [16];
  
  pauVar4 = (*(gen_v16 * PTR32 *)&gen_args[4]);
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1138cbc);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138cb8);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1138cb4);
  pauVar5 = (gen_v16 *)0x0;
  *((undefined4 *)GEN_TOP(*(*(gen_v16 * PTR32 *)&gen_args[4]))) = *(undefined4 *)&REFG(undefined, 0x1138cb0);
  *((undefined4 *)GEN_TOP((*(*(gen_v16 * PTR32 *)&gen_args[4]) + 4))) = uVar1;
  *((undefined4 *)GEN_TOP((*(*(gen_v16 * PTR32 *)&gen_args[4]) + 8))) = uVar2;
  *((undefined4 *)GEN_TOP((*(*(gen_v16 * PTR32 *)&gen_args[4]) + 0xc))) = uVar3;
  uVar9 = *((uint *)GEN_TOP((*(*(gen_v16 * PTR32 *)&gen_args[4]) + 4))) ^ *(uint *)&REFG(undefined, 0x10ab9c4);
  uVar10 = *((uint *)GEN_TOP((*(*(gen_v16 * PTR32 *)&gen_args[4]) + 8))) ^ *(uint *)&REFG(undefined, 0x10ab9c8);
  uVar11 = *((uint *)GEN_TOP((*(*(gen_v16 * PTR32 *)&gen_args[4]) + 0xc))) ^ *(uint *)&REFG(undefined, 0x10ab9cc);
  *((uint *)GEN_TOP((*(gen_v16 * PTR32 *)&gen_args[4])[1])) = *((uint *)GEN_TOP(*(*(gen_v16 * PTR32 *)&gen_args[4]))) ^ *(uint *)&REFG(undefined, 0x10ab9c0);
  *((uint *)GEN_TOP(((*(gen_v16 * PTR32 *)&gen_args[4])[1] + 4))) = uVar9;
  *((uint *)GEN_TOP(((*(gen_v16 * PTR32 *)&gen_args[4])[1] + 8))) = uVar10;
  *((uint *)GEN_TOP(((*(gen_v16 * PTR32 *)&gen_args[4])[1] + 0xc))) = uVar11;
  (*(gen_v16 * PTR32 *)(gen_frame + 0x0)) = (gen_v16 *)0x0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  if ((*(int *)&gen_args[0]) != 0) {
    (*(gen_v16 * PTR32 *)&gen_args[4]) = (gen_v16 *)((*(int *)&gen_args[0]) * 0x30);
    pauVar5 = ((gen_v16 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(gen_v16 * PTR32 *)&gen_args[4]))));
    uVar9 = (int)(*(gen_v16 * PTR32 *)&gen_args[4]) / 0x30;
    if (uVar9 != 0) goto LAB_00d340e3;
  }
  uVar9 = 0x80000000;
LAB_00d340e3: ;
  (*(uint *)(gen_frame + 0x8)) = uVar9;
  (*(gen_v16 * PTR32 *)(gen_frame + 0x0)) = pauVar5;
  (*(int *)(gen_frame + 0x4)) = (*(int *)&gen_args[0]);
  iVar7 = (*(int *)&gen_args[0]);
  if ((int)(uVar9 & 0x3fffffff) < (*(int *)&gen_args[0])) {
    iVar7 = (uVar9 & 0x3fffffff) * 2;
    if (iVar7 <= (*(int *)&gen_args[0])) {
      iVar7 = (*(int *)&gen_args[0]);
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(gen_v16 * PTR32 *)(gen_frame + 0x0)),iVar7,0x30);
    iVar7 = (*(int *)(gen_frame + 0x4));
  }
  iVar6 = (*(int *)&gen_args[0]) - iVar7;
  if (0 < iVar6) {
    pauVar5 = (*(gen_v16 * PTR32 *)(gen_frame + 0x0)) + iVar7 * 3 + 2;
    do {
      uVar3 = REFG(uint, 0x0135177c);
      uVar2 = REFG(uint, 0x01351778);
      uVar1 = REFG(uint, 0x01351774);
      *(undefined4 *)pauVar5[-2] = *(undefined4 *)&REFG(undefined, 0x1351770);
      *(undefined4 *)(pauVar5[-2] + 4) = uVar1;
      *(undefined4 *)(pauVar5[-2] + 8) = uVar2;
      *(undefined4 *)(pauVar5[-2] + 0xc) = uVar3;
      uVar3 = REFG(uint, 0x0135178c);
      uVar2 = REFG(uint, 0x01351788);
      uVar1 = REFG(uint, 0x01351784);
      *(undefined4 *)pauVar5[-1] = *(undefined4 *)&REFG(undefined, 0x1351780);
      *(undefined4 *)(pauVar5[-1] + 4) = uVar1;
      *(undefined4 *)(pauVar5[-1] + 8) = uVar2;
      *(undefined4 *)(pauVar5[-1] + 0xc) = uVar3;
      uVar3 = REFG(uint, 0x0135179c);
      uVar2 = REFG(uint, 0x01351798);
      uVar1 = REFG(uint, 0x01351794);
      *(undefined4 *)*pauVar5 = *(undefined4 *)&REFG(undefined, 0x1351790);
      *(undefined4 *)(*pauVar5 + 4) = uVar1;
      *(undefined4 *)(*pauVar5 + 8) = uVar2;
      *(undefined4 *)(*pauVar5 + 0xc) = uVar3;
      pauVar5 = pauVar5 + 3;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  (*(int *)(gen_frame + 0x4)) = (*(int *)&gen_args[0]);
  F_00d33240((*(int *)&gen_args[0]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[1]),(*(gen_v16 * PTR32 *)(gen_frame + 0x0)));
  if ((*(int *)&gen_args[0]) != 0) {
    memcpy(&(auVar8), &(pauVar4[1]), sizeof(pauVar4[1]) < sizeof(auVar8) ? sizeof(pauVar4[1]) : sizeof(auVar8));
    pauVar5 = (*(gen_v16 * PTR32 *)(gen_frame + 0x0));
    iVar7 = (*(int *)&gen_args[0]);
    do {
      gen_minps(&(auVar12), &(*pauVar4), &(*pauVar5));
      memcpy(&(*pauVar4), &(auVar12), sizeof(auVar12) < sizeof(*pauVar4) ? sizeof(auVar12) : sizeof(*pauVar4));
      gen_maxps(&(auVar8), &(auVar8), &(*pauVar5));
      pauVar5 = pauVar5 + 3;
      iVar7 = iVar7 + -1;
      memcpy(&(pauVar4[1]), &(auVar8), sizeof(auVar8) < sizeof(pauVar4[1]) ? sizeof(auVar8) : sizeof(pauVar4[1]));
    } while (iVar7 != 0);
  }
  (*(int *)(gen_frame + 0x4)) = 0;
  uVar9 = (*(uint *)(gen_frame + 0x8));
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    uVar9 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),(*(gen_v16 * PTR32 *)(gen_frame + 0x0)),((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) * 0x30);
  }
  return uVar9;
}

/* ref: FUN_00d341d0 */
uint F_00d341d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd341d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  short sVar1;
  uint uVar2;
  LPVOID pvVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar5 = *(uint *)(param_2 + 0x1c);
  uVar2 = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0x80000000;
  (*(uint *)(gen_frame + 0x18)) = uVar5;
  if (uVar5 != 0) {
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar2 = *(uint *)((int)pvVar3 + 0xc);
    uVar7 = uVar5 * 2 + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar3 + 8) < (int)uVar7) || (*(uint *)((int)pvVar3 + 0x10) < uVar2 + uVar7))
    {
      uVar2 = F_00d94390(pvVar3,uVar7);
    }
    else {
      *(uint *)((int)pvVar3 + 0xc) = uVar2 + uVar7;
    }
  }
  (*(uint *)(gen_frame + 0x8)) = uVar2;
  (*(uint *)(gen_frame + 0x14)) = uVar2;
  (*(uint *)(gen_frame + 0x10)) = uVar5 | 0x80000000;
  for (sVar1 = (short)param_4; (0 < sVar1 && (sVar1 != (short)param_3));
      sVar1 = *((short *)GEN_TOP((*(int *)(param_2 + 0xc) + sVar1 * 2)))) {
    if ((*(uint *)(gen_frame + 0xc)) == ((*(uint *)(gen_frame + 0x10)) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x8)),2);
    }
    *(short *)((*(uint *)(gen_frame + 0x8)) + (*(uint *)(gen_frame + 0xc)) * 2) = sVar1;
    (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
  }
  if (-1 < sVar1) {
    if ((*(uint *)(gen_frame + 0xc)) == ((*(uint *)(gen_frame + 0x10)) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x8)),2);
    }
    *(short *)((*(uint *)(gen_frame + 0x8)) + (*(uint *)(gen_frame + 0xc)) * 2) = (short)param_3;
    uVar5 = (*(uint *)(gen_frame + 0xc)) + 1;
    (*(uint *)(gen_frame + 0xc)) = uVar5;
    if ((int)(param_5[2] & 0x3fffffffU) < (int)uVar5) {
      uVar2 = (param_5[2] & 0x3fffffffU) * 2;
      uVar7 = uVar5;
      if ((int)uVar5 < (int)uVar2) {
        uVar7 = uVar2;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_5,uVar7,2);
    }
    iVar4 = 0;
    param_5[1] = uVar5;
    if (0 < (int)uVar5) {
      iVar6 = uVar5 * 2;
      do {
        *(undefined2 *)(*param_5 + iVar4 * 2) = *(undefined2 *)(iVar6 + -2 + (*(uint *)(gen_frame + 0x8)));
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + -2;
      } while (iVar4 < (int)uVar5);
    }
  }
  uVar2 = (*(uint *)(gen_frame + 0x18));
  uVar5 = (*(uint *)(gen_frame + 0x14));
  *(bool *)param_1 = -1 < sVar1;
  if ((*(uint *)(gen_frame + 0x14)) == (*(uint *)(gen_frame + 0x8))) {
    (*(uint *)(gen_frame + 0xc)) = 0;
  }
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = uVar2 * 2 + 0x7f & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar2) || (uVar2 + uVar5 != *(int *)((int)pvVar3 + 0xc)))
     || (*(uint *)((int)pvVar3 + 0x14) == uVar5)) {
    F_00d945c0(pvVar3,uVar5,uVar2);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = uVar5;
  }
  (*(uint *)(gen_frame + 0xc)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x10))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x8)),((*(uint *)(gen_frame + 0x10)) & 0x3fffffff) * 2);
  }
  return param_1;
}

/* ref: FUN_00d343a0 */
uint F_00d343a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd343a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  short sVar1;
  uint uVar2;
  LPVOID pvVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  short sVar8;
  
  uVar7 = *(uint *)(param_1 + 0x1c);
  uVar2 = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0x80000000;
  (*(uint *)(gen_frame + 0x18)) = uVar7;
  if (uVar7 != 0) {
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar2 = *(uint *)((int)pvVar3 + 0xc);
    uVar6 = uVar7 + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar3 + 8) < (int)uVar6) || (*(uint *)((int)pvVar3 + 0x10) < uVar2 + uVar6))
    {
      uVar2 = F_00d94390(pvVar3,uVar6);
    }
    else {
      *(uint *)((int)pvVar3 + 0xc) = uVar2 + uVar6;
    }
  }
  iVar5 = *(int *)(param_1 + 0x1c);
  (*(uint *)(gen_frame + 0x10)) = uVar7 | 0x80000000;
  (*(uint *)(gen_frame + 0x8)) = uVar2;
  (*(uint *)(gen_frame + 0x14)) = uVar2;
  if ((int)(uVar7 & 0x3fffffff) < iVar5) {
    iVar4 = (uVar7 & 0x3fffffff) * 2;
    if (iVar4 <= iVar5) {
      iVar4 = iVar5;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x8)),iVar4,1);
  }
  if (0 < iVar5 - (*(int *)(gen_frame + 0xc))) {
    F_00c48350((undefined *)((*(int *)(gen_frame + 0xc)) + (*(uint *)(gen_frame + 0x8))),0,iVar5 - (*(int *)(gen_frame + 0xc)));
  }
  (*(int *)(gen_frame + 0xc)) = iVar5;
  if ((char)param_4 != '\0') {
    if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_3,2);
    }
    *(short *)(*param_3 + param_3[1] * 2) = (short)param_2;
    param_3[1] = param_3[1] + 1;
  }
  sVar8 = (short)param_2 + 1;
  *(undefined1 *)((int)(short)param_2 + (*(uint *)(gen_frame + 0x8))) = 1;
  iVar5 = (int)sVar8;
  uVar7 = (*(uint *)(gen_frame + 0x8));
  if (iVar5 < *(int *)(param_1 + 0x1c)) {
    do {
      sVar1 = *((short *)GEN_TOP((*(int *)(param_1 + 0xc) + iVar5 * 2)));
      if ((sVar1 != -1) && (*(char *)((int)sVar1 + uVar7) != '\0')) {
        *(undefined1 *)(iVar5 + uVar7) = 1;
        if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_3,2);
        }
        *(short *)(*param_3 + param_3[1] * 2) = sVar8;
        param_3[1] = param_3[1] + 1;
        uVar7 = (*(uint *)(gen_frame + 0x8));
      }
      sVar8 = sVar8 + 1;
      iVar5 = (int)sVar8;
    } while (iVar5 < *(int *)(param_1 + 0x1c));
  }
  uVar6 = (*(uint *)(gen_frame + 0x18));
  uVar2 = (*(uint *)(gen_frame + 0x14));
  if ((*(uint *)(gen_frame + 0x14)) == uVar7) {
    (*(int *)(gen_frame + 0xc)) = 0;
  }
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar7 = uVar6 + 0x7f & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar7) || (uVar7 + uVar2 != *(int *)((int)pvVar3 + 0xc)))
     || (*(uint *)((int)pvVar3 + 0x14) == uVar2)) {
    F_00d945c0(pvVar3,uVar2,uVar7);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = uVar2;
  }
  (*(int *)(gen_frame + 0xc)) = 0;
  uVar7 = (*(uint *)(gen_frame + 0x10));
  if (-1 < (int)(*(uint *)(gen_frame + 0x10))) {
    uVar7 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x8)),(*(uint *)(gen_frame + 0x10)) & 0x3fffffff);
  }
  return uVar7;
}

/* ref: FUN_00d34570 */
uint F_00d34570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd34570u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  LPVOID pvVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  
  uVar6 = *(uint *)(param_1 + 0x1c);
  uVar4 = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0x80000000;
  (*(uint *)(gen_frame + 0x18)) = uVar6;
  if (uVar6 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar4 = *(uint *)((int)pvVar1 + 0xc);
    uVar5 = uVar6 + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar1 + 8) < (int)uVar5) || (*(uint *)((int)pvVar1 + 0x10) < uVar4 + uVar5))
    {
      uVar4 = F_00d94390(pvVar1,uVar5);
    }
    else {
      *(uint *)((int)pvVar1 + 0xc) = uVar4 + uVar5;
    }
  }
  iVar2 = *(int *)(param_1 + 0x1c);
  (*(uint *)(gen_frame + 0x10)) = uVar6 | 0x80000000;
  (*(uint *)(gen_frame + 0x8)) = uVar4;
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  if ((int)(uVar6 & 0x3fffffff) < iVar2) {
    iVar3 = (uVar6 & 0x3fffffff) * 2;
    if (iVar3 <= iVar2) {
      iVar3 = iVar2;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x8)),iVar3,1);
  }
  if (0 < iVar2 - (*(int *)(gen_frame + 0xc))) {
    F_00c48350((undefined *)((*(int *)(gen_frame + 0xc)) + (*(uint *)(gen_frame + 0x8))),0,iVar2 - (*(int *)(gen_frame + 0xc)));
  }
  iVar3 = 0;
  (*(int *)(gen_frame + 0xc)) = iVar2;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      sVar7 = *((short *)GEN_TOP((*(int *)(param_1 + 0xc) + iVar3 * 2)));
      if (sVar7 != -1) {
        *(undefined1 *)((int)sVar7 + (*(uint *)(gen_frame + 0x8))) = 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x10));
  }
  sVar7 = 0;
  uVar6 = (*(uint *)(gen_frame + 0x8));
  if (0 < *(int *)(param_1 + 0x1c)) {
    iVar2 = 0;
    do {
      if (*(char *)(iVar2 + uVar6) == '\0') {
        if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_2,2);
        }
        *(short *)(*param_2 + param_2[1] * 2) = sVar7;
        param_2[1] = param_2[1] + 1;
        uVar6 = (*(uint *)(gen_frame + 0x8));
      }
      sVar7 = sVar7 + 1;
      iVar2 = (int)sVar7;
    } while (iVar2 < *(int *)(param_1 + 0x1c));
  }
  uVar5 = (*(uint *)(gen_frame + 0x18));
  uVar4 = (*(uint *)(gen_frame + 0x14));
  if ((*(uint *)(gen_frame + 0x14)) == uVar6) {
    (*(int *)(gen_frame + 0xc)) = 0;
  }
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar6 = uVar5 + 0x7f & 0xffffff80;
  if (((*(int *)((int)pvVar1 + 8) < (int)uVar6) || (uVar6 + uVar4 != *(int *)((int)pvVar1 + 0xc)))
     || (*(uint *)((int)pvVar1 + 0x14) == uVar4)) {
    F_00d945c0(pvVar1,uVar4,uVar6);
  }
  else {
    *(uint *)((int)pvVar1 + 0xc) = uVar4;
  }
  (*(int *)(gen_frame + 0xc)) = 0;
  uVar6 = (*(uint *)(gen_frame + 0x10));
  if (-1 < (int)(*(uint *)(gen_frame + 0x10))) {
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x8)),(*(uint *)(gen_frame + 0x10)) & 0x3fffffff);
  }
  return uVar6;
}

/* ref: FUN_00d34710 */
uint F_00d34710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd34710u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00d34730 */
uint F_00d34730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd34730u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00d347b0 */
uint F_00d347b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd347b0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2;
}

/* ref: FUN_00d347c0 */
uint F_00d347c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd347c0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00d347f0 */
uint F_00d347f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd347f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,2);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00d34840 */
unsigned int F_00d34840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd34840u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined2 *)(param_1 + iVar1 * 2) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_00d34880 */
uint F_00d34880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd34880u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) * 0x30)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)(*(int * PTR32 *)&gen_args[1]) / 0x30;
  return uVar2;
}

/* ref: FUN_00d348d0 */
unsigned int F_00d348d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd348d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined1 *)(iVar1 + param_1) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_00d34900 */
uint F_00d34900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd34900u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 2);
  return uVar1;
}

/* ref: FUN_00d34930 */
uint F_00d34930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xd34930u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00d34940 */
uint F_00d34940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd34940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = param_2[1] & *(uint *)&REFG(undefined, 0x1134c84);
  uVar5 = param_2[2] & *(uint *)&REFG(undefined, 0x1134c88);
  uVar6 = param_2[3] & *(uint *)&REFG(undefined, 0x1134c8c);
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(uint *)this = *param_2 & *(uint *)&REFG(undefined, 0x1134c80) ^ *param_1;
  *(uint *)((int)this + 4) = uVar4 ^ uVar1;
  *(uint *)((int)this + 8) = uVar5 ^ uVar2;
  *(uint *)((int)this + 0xc) = uVar6 ^ uVar3;
  return (uint)param_2;
}

/* ref: FUN_00d34960 */
uint F_00d34960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd34960u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *in_ecx = uVar1;
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar1;
  in_ecx[3] = uVar1;
  return (uint)in_ecx;
}

/* ref: FUN_00d34980 */
uint F_00d34980(unsigned int gen_a0)
{
  GEN_ENTER(0xd34980u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)(&REFG(undefined, 0x1138ad0) + param_1 * 0x10);
}

/* ref: FUN_00d34990 */
uint F_00d34990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd34990u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *in_ecx = *param_2 * *in_ecx;
  in_ecx[1] = fVar1 * in_ecx[1];
  in_ecx[2] = fVar2 * in_ecx[2];
  in_ecx[3] = fVar3 * in_ecx[3];
  return (uint)param_2;
}

/* ref: FUN_00d349b0 */
uint F_00d349b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd349b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  fVar7 = param_3[1];
  fVar8 = param_3[2];
  fVar9 = param_3[3];
  *(float *)this = (*param_2 - *param_1) * *param_3 + *param_1;
  *(float *)((int)this + 4) = (fVar4 - fVar1) * fVar7 + fVar1;
  *(float *)((int)this + 8) = (fVar5 - fVar2) * fVar8 + fVar2;
  *(float *)((int)this + 0xc) = (fVar6 - fVar3) * fVar9 + fVar3;
  return (uint)param_3;
}

/* ref: FUN_00d349e0 */
unsigned int F_00d349e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xd349e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  float * param_8 = (float *)(uintptr_t)gen_a7;
  float * param_9 = (float *)(uintptr_t)gen_a8;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_3[3];
  fVar5 = *param_4;
  fVar6 = param_4[1];
  fVar7 = param_4[2];
  fVar8 = param_4[3];
  fVar9 = *param_5;
  fVar10 = param_5[1];
  fVar11 = param_5[2];
  fVar12 = param_5[3];
  fVar13 = *param_6;
  fVar14 = param_6[1];
  fVar15 = param_6[2];
  fVar16 = param_6[3];
  fVar17 = *param_7;
  fVar18 = param_7[1];
  fVar19 = param_7[2];
  fVar20 = param_7[3];
  fVar21 = *param_8;
  fVar22 = param_8[1];
  fVar23 = param_8[2];
  fVar24 = param_8[3];
  *param_9 = (param_1[3] * param_2[3] + param_1[2] * param_2[2]) +
             (param_1[1] * param_2[1] + *param_1 * *param_2);
  param_9[1] = (fVar4 * fVar8 + fVar3 * fVar7) + (fVar2 * fVar6 + fVar1 * fVar5);
  param_9[2] = (fVar12 * fVar16 + fVar11 * fVar15) + (fVar10 * fVar14 + fVar9 * fVar13);
  param_9[3] = (fVar20 * fVar24 + fVar19 * fVar23) + (fVar18 * fVar22 + fVar17 * fVar21);
  return 0;
}

/* ref: FUN_00d34a50 */
uint F_00d34a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd34a50u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *in_ecx = *param_2 * *in_ecx;
  in_ecx[1] = fVar1 * in_ecx[1];
  in_ecx[2] = fVar2 * in_ecx[2];
  in_ecx[3] = fVar3 * in_ecx[3];
  return (uint)param_2;
}

/* ref: FUN_00d34a70 */
uint F_00d34a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd34a70u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *in_ecx = *param_2 * *in_ecx;
  in_ecx[1] = fVar1 * in_ecx[1];
  in_ecx[2] = fVar2 * in_ecx[2];
  in_ecx[3] = fVar3 * in_ecx[3];
  return (uint)param_2;
}

/* ref: FUN_00d34a90 */
uint F_00d34a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd34a90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
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
  *(float *)this = *param_1 + *param_2;
  *(float *)((int)this + 4) = fVar1 + fVar4;
  *(float *)((int)this + 8) = fVar2 + fVar5;
  *(float *)((int)this + 0xc) = fVar3 + fVar6;
  return (uint)param_1;
}

/* ref: FUN_00d34ab0 */
uint F_00d34ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd34ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  fVar7 = param_3[1];
  fVar8 = param_3[2];
  fVar9 = param_3[3];
  *(float *)this = (*param_2 - *param_1) * *param_3 + *param_1;
  *(float *)((int)this + 4) = (fVar4 - fVar1) * fVar7 + fVar1;
  *(float *)((int)this + 8) = (fVar5 - fVar2) * fVar8 + fVar2;
  *(float *)((int)this + 0xc) = (fVar6 - fVar3) * fVar9 + fVar3;
  return (uint)param_3;
}

/* ref: FUN_00d34b00 */
unsigned int F_00d34b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd34b00u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a1;
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 in_XMM1 [16] = {0};
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  
  memcpy(&(auVar1), &(*param_2), sizeof(*param_2) < sizeof(auVar1) ? sizeof(*param_2) : sizeof(auVar1));
  gen_rsqrtps(&(auVar6), &(in_XMM1), &(auVar1));
  fVar5 = (*(float *)((char *)&auVar6 + 0));
  fVar2 = (*(float *)((char *)&auVar6 + 4));
  fVar3 = (*(float *)((char *)&auVar6 + 8));
  fVar4 = (*(float *)((char *)&auVar6 + 12));
  fVar7 = *(float *)&REFG(undefined, 0x1134c64) - ((*(float *)((char *)&auVar1 + 4)) * fVar2) * fVar2;
  fVar8 = *(float *)&REFG(undefined, 0x1134c68) - ((*(float *)((char *)&auVar1 + 8)) * fVar3) * fVar3;
  fVar9 = *(float *)&REFG(undefined, 0x1134c6c) - ((*(float *)((char *)&auVar1 + 12)) * fVar4) * fVar4;
  fVar2 = *(float *)&REFG(undefined, 0x1134c74) * fVar2;
  fVar3 = *(float *)&REFG(undefined, 0x1134c78) * fVar3;
  fVar4 = *(float *)&REFG(undefined, 0x1134c7c) * fVar4;
  *param_1 = (*(float *)&REFG(undefined, 0x1134c60) - ((*(float *)((char *)&auVar1 + 0)) * fVar5) * fVar5) *
             (*(float *)&REFG(undefined, 0x1134c70) * fVar5);
  param_1[1] = fVar7 * fVar2;
  param_1[2] = fVar8 * fVar3;
  param_1[3] = fVar9 * fVar4;
  return 0;
}

/* ref: FUN_00d34b40 */
unsigned int F_00d34b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd34b40u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a1;
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 in_XMM1 [16] = {0};
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  
  memcpy(&(auVar1), &(*param_2), sizeof(*param_2) < sizeof(auVar1) ? sizeof(*param_2) : sizeof(auVar1));
  gen_rsqrtps(&(auVar6), &(in_XMM1), &(auVar1));
  fVar5 = (*(float *)((char *)&auVar6 + 0));
  fVar2 = (*(float *)((char *)&auVar6 + 4));
  fVar3 = (*(float *)((char *)&auVar6 + 8));
  fVar4 = (*(float *)((char *)&auVar6 + 12));
  fVar7 = *(float *)&REFG(undefined, 0x1134c64) - ((*(float *)((char *)&auVar1 + 4)) * fVar2) * fVar2;
  fVar8 = *(float *)&REFG(undefined, 0x1134c68) - ((*(float *)((char *)&auVar1 + 8)) * fVar3) * fVar3;
  fVar9 = *(float *)&REFG(undefined, 0x1134c6c) - ((*(float *)((char *)&auVar1 + 12)) * fVar4) * fVar4;
  fVar2 = *(float *)&REFG(undefined, 0x1134c74) * fVar2;
  fVar3 = *(float *)&REFG(undefined, 0x1134c78) * fVar3;
  fVar4 = *(float *)&REFG(undefined, 0x1134c7c) * fVar4;
  *in_ecx = (*(float *)&REFG(undefined, 0x1134c60) - ((*(float *)((char *)&auVar1 + 0)) * fVar5) * fVar5) *
            (*(float *)&REFG(undefined, 0x1134c70) * fVar5);
  in_ecx[1] = fVar7 * fVar2;
  in_ecx[2] = fVar8 * fVar3;
  in_ecx[3] = fVar9 * fVar4;
  return 0;
}

/* ref: FUN_00d34bc0 */
uint F_00d34bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd34bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  undefined2 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,2);
  }
  puVar1 = ((undefined2 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 2)));
  *puVar1 = *param_2;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d34c00 */
uint F_00d34c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd34c00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,2);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_2;
  return uVar2;
}

/* ref: FUN_00d34c40 */
uint F_00d34c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd34c40u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = (*(int *)&gen_args[1]);
  *(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0x80000000;
  if ((*(int *)&gen_args[1]) == 0) {
    uVar2 = 0;
  }
  else {
    (*(int *)&gen_args[1]) = (*(int *)&gen_args[1]) * 0x30;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]));
    iVar3 = (*(int *)&gen_args[1]) / 0x30;
    if (iVar3 != 0) goto LAB_00d34c9e;
  }
  iVar3 = ((int)0x80000000);
LAB_00d34c9e: ;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar1;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = iVar3;
  *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar2;
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d34cd0 */
uint F_00d34cd0(unsigned int gen_a0)
{
  GEN_ENTER(0xd34cd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = param_1 * 2 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this,uVar3);
  return uVar2;
}

/* ref: FUN_00d34d10 */
uint F_00d34d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd34d10u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 * 2 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *(int *)((int)this + 8)) && (uVar1 + param_1 == *(int *)((int)this + 0xc))) &&
     (*(int *)((int)this + 0x14) != param_1)) {
    *(int *)((int)this + 0xc) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00d34d60 */
uint F_00d34d60(unsigned int gen_a0)
{
  GEN_ENTER(0xd34d60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = param_1 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this,uVar3);
  return uVar2;
}

/* ref: FUN_00d34da0 */
uint F_00d34da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd34da0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *(int *)((int)this + 8)) && (uVar1 + param_1 == *(int *)((int)this + 0xc))) &&
     (*(int *)((int)this + 0x14) != param_1)) {
    *(int *)((int)this + 0xc) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00d34df0 */
uint F_00d34df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd34df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d34e30 */
unsigned int F_00d34e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd34e30u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  int iVar5;
  
  if (0 < param_2) {
    puVar4 = (undefined4 *)(param_1 + 0x20);
    iVar5 = param_2;
    do {
      uVar1 = param_3[1];
      uVar2 = param_3[2];
      uVar3 = param_3[3];
      puVar4[-8] = *param_3;
      puVar4[-7] = uVar1;
      puVar4[-6] = uVar2;
      puVar4[-5] = uVar3;
      uVar1 = param_3[5];
      uVar2 = param_3[6];
      uVar3 = param_3[7];
      puVar4[-4] = param_3[4];
      puVar4[-3] = uVar1;
      puVar4[-2] = uVar2;
      puVar4[-1] = uVar3;
      uVar1 = param_3[9];
      uVar2 = param_3[10];
      uVar3 = param_3[0xb];
      *puVar4 = param_3[8];
      puVar4[1] = uVar1;
      puVar4[2] = uVar2;
      puVar4[3] = uVar3;
      puVar4 = puVar4 + 0xc;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return 0;
}

/* ref: FUN_00d34e70 */
uint F_00d34e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd34e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d34eb0 */
uint F_00d34eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd34eb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,1);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00d34ef0 */
unsigned int F_00d34ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd34ef0u, gen_a0, gen_a1, gen_a2, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = param_3 * 0x10;
  uVar2 = *(uint *)(&REFG(undefined, 0x1134d28) + iVar1) & in_ecx[2] | *(uint *)(&REFG(undefined, 0x1134d20) + iVar1) & *in_ecx;
  uVar3 = *(uint *)(&REFG(undefined, 0x1134d2c) + iVar1) & in_ecx[3] |
          *(uint *)(&REFG(undefined, 0x1134d24) + iVar1) & in_ecx[1];
  uVar4 = *(uint *)(&REFG(undefined, 0x1134d20) + iVar1) & *in_ecx | *(uint *)(&REFG(undefined, 0x1134d28) + iVar1) & in_ecx[2];
  uVar5 = *(uint *)(&REFG(undefined, 0x1134d24) + iVar1) & in_ecx[1] |
          *(uint *)(&REFG(undefined, 0x1134d2c) + iVar1) & in_ecx[3];
  *param_2 = uVar3 | uVar2;
  param_2[1] = uVar2 | uVar3;
  param_2[2] = uVar5 | uVar4;
  param_2[3] = uVar4 | uVar5;
  return 0;
}

/* ref: FUN_00d34f30 */
unsigned int F_00d34f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd34f30u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_3[2] * in_ecx[2] + *param_3 * *in_ecx;
  fVar2 = param_3[3] * in_ecx[3] + param_3[1] * in_ecx[1];
  fVar3 = *param_3 * *in_ecx + param_3[2] * in_ecx[2];
  fVar4 = param_3[1] * in_ecx[1] + param_3[3] * in_ecx[3];
  *param_2 = fVar2 + fVar1;
  param_2[1] = fVar1 + fVar2;
  param_2[2] = fVar4 + fVar3;
  param_2[3] = fVar3 + fVar4;
  return 0;
}

/* ref: FUN_00d34f60 */
unsigned int F_00d34f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd34f60u, gen_a0, gen_a1, gen_a2, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = param_3 * 0x10;
  uVar2 = *(uint *)(&REFG(undefined, 0x1134d28) + iVar1) & in_ecx[2] | *(uint *)(&REFG(undefined, 0x1134d20) + iVar1) & *in_ecx;
  uVar3 = *(uint *)(&REFG(undefined, 0x1134d2c) + iVar1) & in_ecx[3] |
          *(uint *)(&REFG(undefined, 0x1134d24) + iVar1) & in_ecx[1];
  uVar4 = *(uint *)(&REFG(undefined, 0x1134d20) + iVar1) & *in_ecx | *(uint *)(&REFG(undefined, 0x1134d28) + iVar1) & in_ecx[2];
  uVar5 = *(uint *)(&REFG(undefined, 0x1134d24) + iVar1) & in_ecx[1] |
          *(uint *)(&REFG(undefined, 0x1134d2c) + iVar1) & in_ecx[3];
  *param_2 = uVar3 | uVar2;
  param_2[1] = uVar2 | uVar3;
  param_2[2] = uVar5 | uVar4;
  param_2[3] = uVar4 | uVar5;
  return 0;
}

/* ref: FUN_00d34fa0 */
unsigned int F_00d34fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd34fa0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a1;
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 in_XMM1 [16] = {0};
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  
  memcpy(&(auVar1), &(*param_2), sizeof(*param_2) < sizeof(auVar1) ? sizeof(*param_2) : sizeof(auVar1));
  gen_rsqrtps(&(auVar6), &(in_XMM1), &(auVar1));
  fVar5 = (*(float *)((char *)&auVar6 + 0));
  fVar2 = (*(float *)((char *)&auVar6 + 4));
  fVar3 = (*(float *)((char *)&auVar6 + 8));
  fVar4 = (*(float *)((char *)&auVar6 + 12));
  fVar7 = *(float *)&REFG(undefined, 0x1134c64) - ((*(float *)((char *)&auVar1 + 4)) * fVar2) * fVar2;
  fVar8 = *(float *)&REFG(undefined, 0x1134c68) - ((*(float *)((char *)&auVar1 + 8)) * fVar3) * fVar3;
  fVar9 = *(float *)&REFG(undefined, 0x1134c6c) - ((*(float *)((char *)&auVar1 + 12)) * fVar4) * fVar4;
  fVar2 = *(float *)&REFG(undefined, 0x1134c74) * fVar2;
  fVar3 = *(float *)&REFG(undefined, 0x1134c78) * fVar3;
  fVar4 = *(float *)&REFG(undefined, 0x1134c7c) * fVar4;
  *in_ecx = (*(float *)&REFG(undefined, 0x1134c60) - ((*(float *)((char *)&auVar1 + 0)) * fVar5) * fVar5) *
            (*(float *)&REFG(undefined, 0x1134c70) * fVar5);
  in_ecx[1] = fVar7 * fVar2;
  in_ecx[2] = fVar8 * fVar3;
  in_ecx[3] = fVar9 * fVar4;
  return 0;
}

/* ref: FUN_00d34fd0 */
uint F_00d34fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd34fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,2);
  }
  puVar1 = ((undefined2 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 2)));
  *puVar1 = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d35010 */
uint F_00d35010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd35010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,2);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00d35050 */
unsigned int F_00d35050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd35050u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  
  uVar4 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar4 < param_2) {
    iVar6 = uVar4 * 2;
    if (iVar6 <= param_2) {
      iVar6 = param_2;
    }
    F_00d95690(param_1,this,iVar6,0x30);
  }
  iVar6 = param_2 - *(int *)((int)this + 4);
  if (0 < iVar6) {
    puVar5 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 4) * 0x30 + *(int *)this + 0x20)));
    do {
      uVar1 = param_3[1];
      uVar2 = param_3[2];
      uVar3 = param_3[3];
      puVar5[-8] = *param_3;
      puVar5[-7] = uVar1;
      puVar5[-6] = uVar2;
      puVar5[-5] = uVar3;
      uVar1 = param_3[5];
      uVar2 = param_3[6];
      uVar3 = param_3[7];
      puVar5[-4] = param_3[4];
      puVar5[-3] = uVar1;
      puVar5[-2] = uVar2;
      puVar5[-1] = uVar3;
      uVar1 = param_3[9];
      uVar2 = param_3[10];
      uVar3 = param_3[0xb];
      *puVar5 = param_3[8];
      puVar5[1] = uVar1;
      puVar5[2] = uVar2;
      puVar5[3] = uVar3;
      puVar5 = puVar5 + 0xc;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(int *)((int)this + 4) = param_2;
  return 0;
}

/* ref: FUN_00d350d0 */
unsigned int F_00d350d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd350d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a3;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    F_00d95690(param_1,this,iVar3,1);
  }
  iVar3 = *(int *)((int)this + 4);
  iVar1 = *(int *)this;
  iVar4 = param_2 - iVar3;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      *(undefined1 *)(iVar5 + iVar1 + iVar3) = *param_3;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  *(int *)((int)this + 4) = param_2;
  return 0;
}

/* ref: FUN_00d35130 */
uint F_00d35130(unsigned int gen_a0)
{
  GEN_ENTER(0xd35130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d35170 */
uint F_00d35170(unsigned int gen_a0)
{
  GEN_ENTER(0xd35170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d351b0 */
unsigned int F_00d351b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd351b0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *in_ecx * *in_ecx;
  fVar3 = in_ecx[1] * in_ecx[1];
  fVar5 = in_ecx[2] * in_ecx[2];
  fVar6 = in_ecx[3] * in_ecx[3];
  fVar2 = fVar5 + fVar1;
  fVar4 = fVar6 + fVar3;
  fVar1 = fVar1 + fVar5;
  fVar3 = fVar3 + fVar6;
  *param_2 = fVar4 + fVar2;
  param_2[1] = fVar2 + fVar4;
  param_2[2] = fVar3 + fVar1;
  param_2[3] = fVar1 + fVar3;
  return 0;
}

/* ref: FUN_00d351e0 */
unsigned int F_00d351e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd351e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  
  uVar4 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar4 < param_1) {
    iVar6 = uVar4 * 2;
    if (iVar6 <= param_1) {
      iVar6 = param_1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar6,0x30);
  }
  iVar6 = param_1 - *(int *)((int)this + 4);
  if (0 < iVar6) {
    puVar5 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 4) * 0x30 + *(int *)this + 0x20)));
    do {
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      puVar5[-8] = *param_2;
      puVar5[-7] = uVar1;
      puVar5[-6] = uVar2;
      puVar5[-5] = uVar3;
      uVar1 = param_2[5];
      uVar2 = param_2[6];
      uVar3 = param_2[7];
      puVar5[-4] = param_2[4];
      puVar5[-3] = uVar1;
      puVar5[-2] = uVar2;
      puVar5[-1] = uVar3;
      uVar1 = param_2[9];
      uVar2 = param_2[10];
      uVar3 = param_2[0xb];
      *puVar5 = param_2[8];
      puVar5[1] = uVar1;
      puVar5[2] = uVar2;
      puVar5[3] = uVar3;
      puVar5 = puVar5 + 0xc;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(int *)((int)this + 4) = param_1;
  return 0;
}

/* ref: FUN_00d35260 */
unsigned int F_00d35260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd35260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,1);
  }
  iVar3 = *(int *)((int)this + 4);
  iVar1 = *(int *)this;
  iVar4 = param_1 - iVar3;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      *(undefined1 *)(iVar5 + iVar1 + iVar3) = *param_2;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  *(int *)((int)this + 4) = param_1;
  return 0;
}

/* ref: FUN_00d352c0 */
uint F_00d352c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd352c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d35300 */
uint F_00d35300(unsigned int gen_a0)
{
  GEN_ENTER(0xd35300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d35340 */
unsigned int F_00d35340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd35340u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  uint uVar12;
  float fVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar5 = param_1[1];
  fVar8 = param_1[2];
  fVar9 = param_1[3];
  fVar11 = param_3[1];
  fVar6 = param_3[2];
  fVar7 = param_3[3];
  fVar13 = param_1[1];
  fVar15 = param_1[2];
  fVar16 = param_1[3];
  *param_4 = (*param_2 - *param_1) * *param_3 + *param_1;
  param_4[1] = (fVar2 - fVar5) * fVar11 + fVar13;
  param_4[2] = (fVar3 - fVar8) * fVar6 + fVar15;
  param_4[3] = (fVar4 - fVar9) * fVar7 + fVar16;
  fVar2 = param_1[4];
  fVar3 = param_1[5];
  fVar4 = param_1[6];
  fVar5 = param_1[7];
  memcpy(&(auVar17), &(*(gen_v16 *)(param_2 + 4)), sizeof(*(gen_v16 *)(param_2 + 4)) < sizeof(auVar17) ? sizeof(*(gen_v16 *)(param_2 + 4)) : sizeof(auVar17));
  fVar8 = (*(float *)((char *)&auVar17 + 0)) * fVar2;
  fVar9 = (*(float *)((char *)&auVar17 + 4)) * fVar3;
  fVar11 = (*(float *)((char *)&auVar17 + 8)) * fVar4;
  fVar13 = (*(float *)((char *)&auVar17 + 12)) * fVar5;
  fVar6 = fVar11 + fVar8;
  fVar7 = fVar13 + fVar9;
  fVar8 = fVar8 + fVar11;
  fVar9 = fVar9 + fVar13;
  uVar10 = (uint)gen_fl2bits(fVar6 + fVar7) & *(uint *)&REFG(undefined, 0x1134c84);
  uVar12 = (uint)gen_fl2bits(fVar9 + fVar8) & *(uint *)&REFG(undefined, 0x1134c88);
  uVar14 = (uint)gen_fl2bits(fVar8 + fVar9) & *(uint *)&REFG(undefined, 0x1134c8c);
  fVar8 = param_3[1];
  fVar9 = param_3[2];
  fVar11 = param_3[3];
  param_4[4] = (gen_bits2f((uint)gen_fl2bits(fVar7 + fVar6) & *(uint *)&REFG(undefined, 0x1134c80) ^
                           (uint)gen_fl2bits((*(float *)((char *)&auVar17 + 0)))) - fVar2) * *param_3 + fVar2;
  param_4[5] = (gen_bits2f(uVar10 ^ (uint)gen_fl2bits((*(float *)((char *)&auVar17 + 4)))) - fVar3) * fVar8 + fVar3;
  param_4[6] = (gen_bits2f(uVar12 ^ (uint)gen_fl2bits((*(float *)((char *)&auVar17 + 8)))) - fVar4) * fVar9 + fVar4;
  param_4[7] = (gen_bits2f(uVar14 ^ (uint)gen_fl2bits((*(float *)((char *)&auVar17 + 12)))) - fVar5) * fVar11 + fVar5;
  fVar2 = param_2[9];
  fVar3 = param_2[10];
  fVar4 = param_2[0xb];
  fVar5 = param_1[9];
  fVar8 = param_1[10];
  fVar9 = param_1[0xb];
  fVar11 = param_3[1];
  fVar6 = param_3[2];
  fVar7 = param_3[3];
  fVar13 = param_1[9];
  fVar15 = param_1[10];
  fVar16 = param_1[0xb];
  param_4[8] = (param_2[8] - param_1[8]) * *param_3 + param_1[8];
  param_4[9] = (fVar2 - fVar5) * fVar11 + fVar13;
  param_4[10] = (fVar3 - fVar8) * fVar6 + fVar15;
  param_4[0xb] = (fVar4 - fVar9) * fVar7 + fVar16;
  fVar4 = *(float *)&REFG(undefined, 0x1138cac);
  fVar3 = *(float *)&REFG(undefined, 0x1138ca8);
  fVar2 = *(float *)&REFG(undefined, 0x1138ca4);
  if ((param_4[6] * param_4[6] + param_4[4] * param_4[4]) +
      (param_4[7] * param_4[7] + param_4[5] * param_4[5]) < REFG(float, 0x10905c4)) {
    param_4[4] = *(float *)&REFG(undefined, 0x1138ca0);
    param_4[5] = fVar2;
    param_4[6] = fVar3;
    param_4[7] = fVar4;
    return 0;
  }
  fVar2 = param_4[4];
  fVar3 = param_4[5];
  fVar4 = param_4[6];
  fVar5 = param_4[7];
  fVar8 = fVar4 * fVar4 + fVar2 * fVar2;
  fVar9 = fVar5 * fVar5 + fVar3 * fVar3;
  fVar11 = fVar2 * fVar2 + fVar4 * fVar4;
  fVar6 = fVar3 * fVar3 + fVar5 * fVar5;
  fVar7 = fVar9 + fVar8;
  fVar8 = fVar8 + fVar9;
  fVar9 = fVar6 + fVar11;
  fVar11 = fVar11 + fVar6;
  (*(undefined4 *)((char *)&auVar1 + 4)) = (undefined4)gen_fl2bits(fVar8);
  (*(undefined4 *)((char *)&auVar1 + 0)) = (undefined4)gen_fl2bits(fVar7);
  (*(undefined4 *)((char *)&auVar1 + 8)) = (undefined4)gen_fl2bits(fVar9);
  (*(undefined4 *)((char *)&auVar1 + 12)) = (undefined4)gen_fl2bits(fVar11);
  gen_rsqrtps(&(auVar17), &(auVar17), &(auVar1));
  fVar16 = (*(float *)((char *)&auVar17 + 0));
  fVar6 = (*(float *)((char *)&auVar17 + 4));
  fVar13 = (*(float *)((char *)&auVar17 + 8));
  fVar15 = (*(float *)((char *)&auVar17 + 12));
  fVar8 = *(float *)&REFG(undefined, 0x1134c64) - (fVar6 * fVar8) * fVar6;
  fVar9 = *(float *)&REFG(undefined, 0x1134c68) - (fVar13 * fVar9) * fVar13;
  fVar11 = *(float *)&REFG(undefined, 0x1134c6c) - (fVar15 * fVar11) * fVar15;
  fVar6 = *(float *)&REFG(undefined, 0x1134c74) * fVar6;
  fVar13 = *(float *)&REFG(undefined, 0x1134c78) * fVar13;
  fVar15 = *(float *)&REFG(undefined, 0x1134c7c) * fVar15;
  param_4[4] = fVar2 * ((*(float *)&REFG(undefined, 0x1134c60) - (fVar16 * fVar7) * fVar16) *
                       (*(float *)&REFG(undefined, 0x1134c70) * fVar16));
  param_4[5] = fVar3 * (fVar8 * fVar6);
  param_4[6] = fVar4 * (fVar9 * fVar13);
  param_4[7] = fVar5 * (fVar11 * fVar15);
  return 0;
}

/* ref: FUN_00d35430 */
uint F_00d35430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd35430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  LPVOID this_00;
  uint uVar2;
  
  uVar1 = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(uint *)((int)this + 0x10) = param_1;
  if (param_1 != 0) {
    this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar1 = *(uint *)((int)this_00 + 0xc);
    uVar2 = param_1 * 2 + 0x7f & 0xffffff80;
    if ((*(int *)((int)this_00 + 8) < (int)uVar2) ||
       (*(uint *)((int)this_00 + 0x10) < uVar1 + uVar2)) {
      uVar1 = F_00d94390(this_00,uVar2);
    }
    else {
      *(uint *)((int)this_00 + 0xc) = uVar1 + uVar2;
    }
  }
  *(uint *)((int)this + 8) = param_1 | 0x80000000;
  *(uint *)this = uVar1;
  *(uint *)((int)this + 0xc) = uVar1;
  return (uint)this;
}

/* ref: FUN_00d354a0 */
uint F_00d354a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd354a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  LPVOID this_00;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0xc);
  if (iVar1 == *(int *)this) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar2 = *(int *)((int)this + 0x10);
  this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar3 = iVar2 * 2 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)this_00 + 8) < (int)uVar3) || (uVar3 + iVar1 != *(int *)((int)this_00 + 0xc)))
     || (*(int *)((int)this_00 + 0x14) == iVar1)) {
    F_00d945c0(this_00,iVar1,uVar3);
  }
  else {
    *(int *)((int)this_00 + 0xc) = iVar1;
  }
  uVar3 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar3 & 0x80000000) == 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar3 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar3;
}

/* ref: FUN_00d35530 */
uint F_00d35530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd35530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  LPVOID this_00;
  uint uVar2;
  
  uVar1 = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(uint *)((int)this + 0x10) = param_1;
  if (param_1 != 0) {
    this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar1 = *(uint *)((int)this_00 + 0xc);
    uVar2 = param_1 + 0x7f & 0xffffff80;
    if ((*(int *)((int)this_00 + 8) < (int)uVar2) ||
       (*(uint *)((int)this_00 + 0x10) < uVar1 + uVar2)) {
      uVar1 = F_00d94390(this_00,uVar2);
    }
    else {
      *(uint *)((int)this_00 + 0xc) = uVar1 + uVar2;
    }
  }
  *(uint *)((int)this + 8) = param_1 | 0x80000000;
  *(uint *)this = uVar1;
  *(uint *)((int)this + 0xc) = uVar1;
  return (uint)this;
}

/* ref: FUN_00d355a0 */
uint F_00d355a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd355a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  LPVOID this_00;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0xc);
  if (iVar1 == *(int *)this) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar2 = *(int *)((int)this + 0x10);
  this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar3 = iVar2 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)this_00 + 8) < (int)uVar3) || (uVar3 + iVar1 != *(int *)((int)this_00 + 0xc)))
     || (*(int *)((int)this_00 + 0x14) == iVar1)) {
    F_00d945c0(this_00,iVar1,uVar3);
  }
  else {
    *(int *)((int)this_00 + 0xc) = iVar1;
  }
  uVar3 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar3 & 0x80000000) == 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar3 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar3;
}

/* ref: FUN_00d358a0 */
uint F_00d358a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd358a0u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  int in_ecx = (int)gen_a1;
  int param_3 = (int)gen_a2;
  if ((in_eax != 0) && (param_3 != in_ecx)) {
    in_eax = F_00da1010(param_3,in_ecx,in_eax * 4);
  }
  return in_eax;
}

/* ref: FUN_00d358c0 */
uint F_00d358c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd358c0u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  int in_ecx = (int)gen_a1;
  int param_3 = (int)gen_a2;
  if ((in_eax != 0) && (param_3 != in_ecx)) {
    in_eax = F_00da1010(param_3,in_ecx,in_eax * 0x30);
  }
  return in_eax;
}

/* ref: FUN_00d358f0 */
unsigned int F_00d358f0(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xd358f0u, 0u, 0u, 0u, 0u);
  float in_xmm0 = (float)gen_a0;
  float in_xmm1 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  return 0;
}

/* ref: FUN_00d35910 */
uint F_00d35910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd35910u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    uVar1 = F_00da1030(param_5,0xff,param_4);
    return uVar1;
  }
  if (param_1[1] == 0) {
    uVar1 = F_00da1010(param_5,param_3,param_4);
    return uVar1;
  }
  F_00da1030(param_5,0,param_4);
  uVar1 = 0;
  if (0 < param_2) {
    do {
      iVar2 = (int)*(short *)(*param_1 + uVar1 * 2);
      if (iVar2 < param_4) {
        *(undefined1 *)(iVar2 + param_5) = *(undefined1 *)(uVar1 + param_3);
      }
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < param_2);
  }
  return uVar1;
}

/* ref: FUN_00d35ed0 */
uint F_00d35ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd35ed0u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  int in_ecx = (int)gen_a1;
  int param_3 = (int)gen_a2;
  if ((in_eax != 0) && (param_3 != in_ecx)) {
    in_eax = F_00da1010(param_3,in_ecx,in_eax * 4);
  }
  return in_eax;
}

/* ref: FUN_00d35ef0 */
uint F_00d35ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd35ef0u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  int in_ecx = (int)gen_a1;
  int param_3 = (int)gen_a2;
  if ((in_eax != 0) && (param_3 != in_ecx)) {
    in_eax = F_00da1010(param_3,in_ecx,in_eax * 0x30);
  }
  return in_eax;
}

/* ref: FUN_00d363f0 */
unsigned int F_00d363f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd363f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  LPVOID pvVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  *(short *)((int)this + 0x48) = (short)param_1;
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1 * 200);
  *(uint *)((int)this + 0x24) = uVar2;
  *(undefined2 *)((int)this + 0x4a) = 0;
  *(undefined1 *)((int)this + 0x4d) = 1;
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((int)this + 0x1c) = 0;
  if ((char)param_3 == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(param_2 + 0xc);
  }
  *(undefined4 *)((int)this + 0x20) = uVar4;
  *(char *)((int)this + 0x4c) = (char)param_3;
  *(undefined4 *)((int)this + 0x40) = 0;
  iVar3 = param_4;
  if (param_4 == -1) {
    iVar3 = *(int *)(param_2 + 0x1c);
  }
  *(int *)((int)this + 0x38) = iVar3;
  iVar3 = param_5;
  if (param_5 == -1) {
    iVar3 = *(int *)(param_2 + 0x40);
  }
  *(int *)((int)this + 0x3c) = iVar3;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined1 *)((int)this + 0x4e) = 0;
  return 0;
}

/* ref: FUN_00d36490 */
unsigned int F_00d36490(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xd36490u, gen_a0, gen_a1, 0u, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  uint param_4 = (uint)gen_a3;
  uint param_5 = (uint)gen_a4;
  int param_6 = (int)gen_a5;
  int param_7 = (int)gen_a6;
  uint * param_8 = (uint *)(uintptr_t)gen_a7;
  uint * param_9 = (uint *)(uintptr_t)gen_a8;
  int * param_10 = (int *)(uintptr_t)gen_a9;
  float fVar1;
  uint * puVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float fVar7;
  uint local_c;
  
  fVar1 = REFG(float, 0x1087f04);
  uVar3 = param_2[2];
  param_1[0x2e] = 0xffffffff;
  param_1[0x2f] = 0xffffffff;
  param_1[0x31] = param_5;
  param_1[3] = uVar3;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x30] = param_4;
  param_1[2] = (uint)gen_fl2bits(fVar1);
  puVar2 = param_1 + 4;
  if ((param_8 != (uint *)0x0) && (uVar3 = param_8[1], uVar3 != 0)) {
    *puVar2 = *param_8;
    param_1[5] = uVar3;
    param_1[0x2d] = param_1[0x2d] | 1;
    puVar2 = param_1 + 6;
  }
  if ((param_9 != (uint *)0x0) && (uVar3 = param_9[1], uVar3 != 0)) {
    *puVar2 = *param_9;
    puVar2[1] = uVar3;
    param_1[0x2d] = param_1[0x2d] | 2;
    puVar2 = puVar2 + 2;
  }
  if (param_6 != 0) {
    if (0 < *(int *)(param_6 + 0x14)) {
      iVar4 = *(int *)(param_6 + 0x14);
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(uint *)(param_6 + 0x10);
      }
      *puVar2 = uVar3;
      puVar2[1] = iVar4 * 2;
      param_1[0x2d] = param_1[0x2d] | 4;
      puVar2 = puVar2 + 2;
    }
    if (0 < *(int *)(param_6 + 0x20)) {
      iVar4 = *(int *)(param_6 + 0x20);
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(uint *)(param_6 + 0x1c);
      }
      *puVar2 = uVar3;
      puVar2[1] = iVar4 * 2;
      param_1[0x2d] = param_1[0x2d] | 8;
      puVar2 = puVar2 + 2;
    }
    if (*(char *)(param_6 + 0x28) == '\x01') {
      param_1[0x2d] = param_1[0x2d] | 0x20;
    }
  }
  if (param_7 != 0) {
    param_1[0x2d] = param_1[0x2d] | 0x10;
    iVar4 = *(int *)(param_7 + 0x1c);
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(param_7 + 0x18);
    }
    *puVar2 = uVar3;
    puVar2[1] = iVar4 << 6;
    iVar4 = *(int *)(param_7 + 0x28);
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(param_7 + 0x24);
    }
    puVar2[2] = uVar3;
    puVar2[3] = iVar4 * 0x70;
    iVar4 = *(int *)(param_7 + 0x34);
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(param_7 + 0x30);
    }
    puVar2[4] = uVar3;
    puVar2[5] = iVar4 * 2;
    iVar4 = *((int *)GEN_TOP((*(int *)(param_7 + 0x10) + 0x10)));
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *((uint *)GEN_TOP((*(int *)(param_7 + 0x10) + 0xc)));
    }
    puVar2[6] = uVar3;
    puVar2[7] = iVar4 * 2;
    iVar4 = *((int *)GEN_TOP((*(int *)(param_7 + 0x10) + 0x1c)));
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *((uint *)GEN_TOP((*(int *)(param_7 + 0x10) + 0x18)));
    }
    puVar2[8] = uVar3;
    puVar2[9] = iVar4 * 8;
    iVar4 = *((int *)GEN_TOP((*(int *)(param_7 + 0x10) + 0x28)));
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *((uint *)GEN_TOP((*(int *)(param_7 + 0x10) + 0x24)));
    }
    puVar2[10] = uVar3;
    puVar2[0xb] = iVar4 * 0x30;
    param_1[0x2e] = *((uint *)GEN_TOP((*(int *)(param_7 + 0x10) + 0x1c)));
    puVar2 = puVar2 + 0xc;
    param_1[0x2f] = *((uint *)GEN_TOP((*(int *)(param_7 + 0x10) + 0x40)));
  }
  uVar3 = ((code *)*(gen_code32 *)(*param_2 + 0x1c))(param_2);
  fVar5 = (float10)(int)(uVar3 - 1);
  if ((int)(uVar3 - 1) < 0) {
    fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar5 = fVar5 * ((float10)param_3 / ((float10)GEN_TOD(gen_bits2f(param_2[3]))));
  local_c = (uint)(longlong)TRUNC(fVar5);
  *param_1 = local_c;
  fVar1 = REFG(float, 0x1087f04);
  if (uVar3 - 2 < local_c) {
    *param_1 = uVar3 - 2;
    fVar7 = fVar1;
  }
  else {
    fVar6 = (float10)(int)local_c;
    if ((int)local_c < 0) {
      fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar5 = fVar5 - fVar6;
    fVar7 = (float)fVar5;
    if (fVar5 < (float10)0) {
      fVar7 = 0.0;
    }
    else if (REFG(float, 0x1087f04) < fVar7) {
      fVar7 = fVar1;
    }
  }
  param_1[1] = (uint)gen_fl2bits(fVar7);
  uVar3 = ((code *)*(gen_code32 *)(*param_2 + 0x20))(param_2,*param_1,(undefined4)gen_fl2bits(fVar7));
  ((code *)*(gen_code32 *)(*param_2 + 0x24))(*param_1,param_1[1],puVar2,uVar3);
  uVar3 = ((int)puVar2 + (-0x10 - (int)param_1) >> 3) + uVar3;
  iVar4 = 0;
  param_1[0x2c] = uVar3;
  if (0 < (int)uVar3) {
    puVar2 = param_1 + 4;
    do {
      iVar4 = iVar4 + ((*puVar2 & 0xf) + 0xf + puVar2[1] & 0xfffffff0);
      puVar2 = puVar2 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (*param_10 < iVar4) {
    *param_10 = iVar4;
  }
  return 0;
}

/* ref: FUN_00d36750 */
unsigned int F_00d36750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd36750u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = *(int *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(iVar2 + 0xc);
  fVar1 = *(float *)(param_2 + 8);
  iVar6 = param_2 + 0x1c;
  iVar5 = param_2 + 0x10;
  uVar4 = ((code *)*(gen_code32 *)(*(int *)param_2 + 0x38))(param_2);
  F_00d36490(param_1,uVar3,fVar1,0,0,iVar2,uVar4,iVar5,iVar6,param_3);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0xc);
  return 0;
}

/* ref: FUN_00d367b0 */
unsigned int F_00d367b0(unsigned int gen_a0)
{
  GEN_ENTER(0xd367b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  int iVar2;
  LPVOID pvVar3;
  
  iVar2 = *(int *)((int)this + 0x24);
  if (iVar2 != 0) {
    uVar1 = *(ushort *)((int)this + 0x48);
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar3 + 0x2c),iVar2,(uint)uVar1 * 200);
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  return 0;
}

/* ref: FUN_00d367f0 */
uint F_00d367f0(unsigned int gen_a0)
{
  GEN_ENTER(0xd367f0u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  if (in_eax == 0) {
    return 0;
  }
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = (in_eax + 3U & 0xfffffffc) + 0x7c & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this,uVar3);
  return uVar2;
}

/* ref: FUN_00d36840 */
unsigned int F_00d36840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd36840u, gen_a0, gen_a1, 0u, 0u);
  int in_esi = (int)gen_a0;
  int in_edi = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  
  if (in_edi != 0) {
    this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar1 = (in_edi + 3U & 0xfffffffc) + 0x7c & 0xffffff80;
    if ((((int)uVar1 <= *(int *)((int)this + 8)) && (uVar1 + in_esi == *(int *)((int)this + 0xc)))
       && (*(int *)((int)this + 0x14) != in_esi)) {
      *(int *)((int)this + 0xc) = in_esi;
      return 0;
    }
    F_00d945c0(this,in_esi,uVar1);
  }
  return 0;
}

/* ref: FUN_00d36890 */
uint F_00d36890(unsigned int gen_a0)
{
  GEN_ENTER(0xd36890u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  if (in_eax == 0) {
    return 0;
  }
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = (in_eax + 3U & 0xfffffffc) * 4 + 0x7f & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this,uVar3);
  return uVar2;
}

/* ref: FUN_00d368e0 */
uint F_00d368e0(unsigned int gen_a0)
{
  GEN_ENTER(0xd368e0u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  if (in_eax == 0) {
    return 0;
  }
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = (in_eax + 3U & 0xfffffffc) * 0x30 + 0x7f & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this,uVar3);
  return uVar2;
}

/* ref: FUN_00d36930 */
unsigned int F_00d36930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd36930u, gen_a0, gen_a1, 0u, 0u);
  int in_esi = (int)gen_a0;
  int in_edi = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  
  if (in_edi != 0) {
    this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar1 = (in_edi + 3U & 0xfffffffc) * 4 + 0x7f & 0xffffff80;
    if ((((int)uVar1 <= *(int *)((int)this + 8)) && (uVar1 + in_esi == *(int *)((int)this + 0xc)))
       && (*(int *)((int)this + 0x14) != in_esi)) {
      *(int *)((int)this + 0xc) = in_esi;
      return 0;
    }
    F_00d945c0(this,in_esi,uVar1);
  }
  return 0;
}

/* ref: FUN_00d36980 */
unsigned int F_00d36980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd36980u, gen_a0, gen_a1, 0u, 0u);
  int in_esi = (int)gen_a0;
  int in_edi = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  
  if (in_edi != 0) {
    this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar1 = (in_edi + 3U & 0xfffffffc) * 0x30 + 0x7f & 0xffffff80;
    if ((((int)uVar1 <= *(int *)((int)this + 8)) && (uVar1 + in_esi == *(int *)((int)this + 0xc)))
       && (*(int *)((int)this + 0x14) != in_esi)) {
      *(int *)((int)this + 0xc) = in_esi;
      return 0;
    }
    F_00d945c0(this,in_esi,uVar1);
  }
  return 0;
}

/* ref: FUN_00d369d0 */
uint F_00d369d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd369d0u, gen_a0, gen_a1, 0u, 0u);
  uint in_edi = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 & 3) != 0) {
    uVar1 = F_00d368e0(param_2);
    F_00da1010(uVar1,in_edi,param_2 * 0x30);
    return uVar1;
  }
  return in_edi;
}

/* ref: FUN_00d36a10 */
uint F_00d36a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd36a10u, gen_a0, gen_a1, 0u, 0u);
  uint in_edi = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 & 3) != 0) {
    uVar1 = F_00d36890(param_2);
    F_00da1010(uVar1,in_edi,param_2 * 4);
    return uVar1;
  }
  return in_edi;
}

/* ref: FUN_00d36a50 */
uint F_00d36a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd36a50u, gen_a0, gen_a1, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (in_eax == 0) {
    return 0;
  }
  if ((in_eax & 3) != 0) {
    uVar1 = F_00d368e0(in_eax);
    return uVar1;
  }
  return param_2;
}

/* ref: FUN_00d36a70 */
uint F_00d36a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd36a70u, gen_a0, gen_a1, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (in_eax == 0) {
    return 0;
  }
  if ((in_eax & 3) != 0) {
    uVar1 = F_00d36890(in_eax);
    return uVar1;
  }
  return param_2;
}

/* ref: FUN_00d36cf0 */
uint F_00d36cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd36cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int param_5 = (int)gen_a5;
  int param_6 = (int)gen_a6;
  uint uVar1;
  byte bVar2;
  LPVOID pvVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  
  F_00d367b0(this);
  uVar1 = *(uint *)(param_1 + 0x1c);
  iVar7 = param_5;
  if (param_5 == -1) {
    iVar7 = *(int *)(uVar1 + 0x1c);
  }
  iVar6 = param_6;
  if (param_6 == -1) {
    iVar6 = *(int *)(uVar1 + 0x40);
  }
  if (param_2 == 0) {
    iVar7 = 0;
  }
  if (param_3 == 0) {
    iVar6 = 0;
  }
  *(char *)((int)this + 0x4c) = (char)param_4;
  *(int *)((int)this + 0x3c) = iVar6;
  *(int *)((int)this + 0x38) = iVar7;
  *(int *)((int)this + 0x28) = param_2;
  *(uint *)((int)this + 0x2c) = param_3;
  *(int *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(uVar1 + 0x24);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(uVar1 + 0x30);
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x20);
  *(undefined2 *)((int)this + 0x4d) = 0;
  iVar7 = *(int *)(param_1 + 0x14);
  *(short *)((int)this + 0x48) = (short)iVar7;
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x2c) + 4))))
                    (*(int * PTR32 *)((int)pvVar3 + 0x2c),iVar7 * 200);
  *(uint *)((int)this + 0x24) = uVar4;
  uVar4 = 0;
  bVar5 = 0;
  *(undefined2 *)((int)this + 0x4a) = 0;
  param_3 = 0;
  bVar2 = 0;
  if (0 < iVar7) {
    do {
      uVar4 = *((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + param_3 * 4)));
      bVar5 = bVar2;
      if (*(int *)(uVar4 + 0x28) != 0) {
        F_00d36750((uint)*(ushort *)((int)this + 0x4a) * 200 + *(int *)((int)this + 0x24),uVar4,
                     (int)this + 0x40);
        bVar5 = bVar2 | (byte)(*((uint *)GEN_TOP(((uint)*(ushort *)((int)this + 0x4a) * 200 + 0xb4 +
                                        *(int *)((int)this + 0x24)))) >> 4) & 1;
        *(ushort *)((int)this + 0x4a) = *(ushort *)((int)this + 0x4a) + 1;
      }
      uVar4 = param_3 + 1;
      param_3 = uVar4;
      bVar2 = bVar5;
    } while ((int)uVar4 < iVar7);
  }
  if ((((char)param_4 != '\0') || (bVar5 != 0)) &&
     (*(undefined4 *)((int)this + 0x20) = *(undefined4 *)(uVar1 + 0xc), uVar4 = uVar1, bVar5 != 0))
  {
    uVar4 = *(uint *)(uVar1 + 0x18);
    *(uint *)((int)this + 0x1c) = uVar4;
  }
  *(undefined1 *)((int)this + 2) = 1;
  return uVar4;
}

/* ref: FUN_00d36e20 */
unsigned int F_00d36e20(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd36e20u, gen_a0, gen_a1, 0u, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  uint param_4 = (uint)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  int param_7 = (int)gen_a6;
  ushort uVar1;
  int iVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x4a);
  *(ushort *)(param_1 + 0x4a) = uVar1 + 1;
  F_00d36490((uint)uVar1 * 200 + *(int *)(param_1 + 0x24),param_2,param_3,param_4,param_5,param_6,
               param_7,0,0,param_1 + 0x40);
  if (param_7 != 0) {
    iVar2 = *(int *)(param_7 + 0x14);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar2 + 0xc);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar2 + 0x18);
  }
  return 0;
}

/* ref: FUN_00d36e80 */
uint F_00d36e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd36e80u, gen_a0, gen_a1, 0u, 0u);
  uint in_edi = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 & 3) != 0) {
    uVar1 = F_00d368e0(param_2);
    F_00da1010(uVar1,in_edi,param_2 * 0x30);
    return uVar1;
  }
  return in_edi;
}

/* ref: FUN_00d36ec0 */
uint F_00d36ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd36ec0u, gen_a0, gen_a1, 0u, 0u);
  uint in_edi = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 & 3) != 0) {
    uVar1 = F_00d36890(param_2);
    F_00da1010(uVar1,in_edi,param_2 * 4);
    return uVar1;
  }
  return in_edi;
}

/* ref: FUN_00d36f00 */
uint F_00d36f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd36f00u, gen_a0, gen_a1, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (in_eax == 0) {
    return 0;
  }
  if ((in_eax & 3) != 0) {
    uVar1 = F_00d368e0(in_eax);
    return uVar1;
  }
  return param_2;
}

/* ref: FUN_00d36f20 */
uint F_00d36f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd36f20u, gen_a0, gen_a1, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (in_eax == 0) {
    return 0;
  }
  if ((in_eax & 3) != 0) {
    uVar1 = F_00d36890(in_eax);
    return uVar1;
  }
  return param_2;
}

/* ref: FUN_00d36f40 */
unsigned int F_00d36f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd36f40u, gen_a0, gen_a1, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  undefined4 in_esi = (undefined4)gen_a1;
  if ((in_eax != 0) && ((in_eax & 3) != 0)) {
    F_00d36930(in_esi,in_eax);
  }
  return 0;
}

/* ref: FUN_00d36f60 */
unsigned int F_00d36f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd36f60u, gen_a0, gen_a1, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  undefined4 in_esi = (undefined4)gen_a1;
  if ((in_eax != 0) && ((in_eax & 3) != 0)) {
    F_00d36980(in_esi,in_eax);
  }
  return 0;
}

/* ref: FUN_00d36f80 */
unsigned int F_00d36f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd36f80u, gen_a0, gen_a1, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  undefined4 in_esi = (undefined4)gen_a1;
  if ((in_eax != 0) && ((in_eax & 3) != 0)) {
    F_00d36930(in_esi,in_eax);
  }
  return 0;
}

/* ref: FUN_00d36fa0 */
unsigned int F_00d36fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd36fa0u, gen_a0, gen_a1, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  undefined4 in_esi = (undefined4)gen_a1;
  if ((in_eax != 0) && ((in_eax & 3) != 0)) {
    F_00d36980(in_esi,in_eax);
  }
  return 0;
}

/* ref: FUN_00d36fc0 */
uint F_00d36fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd36fc0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return -(uint)((*(int *)&gen_args[0]) != 0) & (*(uint *)&gen_args[1]);
}

/* ref: FUN_00d36fd0 */
uint F_00d36fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd36fd0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return -(uint)((*(int *)&gen_args[0]) != 0) & (*(uint *)&gen_args[1]);
}

/* ref: FUN_00d36fe0 */
uint F_00d36fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd36fe0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return -(uint)((*(int *)&gen_args[0]) != 0) & (*(uint *)&gen_args[1]);
}

/* ref: FUN_00d37020 */
unsigned int F_00d37020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd37020u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_eax = (float *)(uintptr_t)gen_a0;
  float * in_ecx = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = in_ecx[1];
  fVar5 = in_ecx[2];
  fVar6 = in_ecx[3];
  *in_eax = *param_3 * *in_ecx + *in_eax;
  in_eax[1] = fVar1 * fVar4 + in_eax[1];
  in_eax[2] = fVar2 * fVar5 + in_eax[2];
  in_eax[3] = fVar3 * fVar6 + in_eax[3];
  return 0;
}

/* ref: FUN_00d37040 */
unsigned int F_00d37040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd37040u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_eax = (float *)(uintptr_t)gen_a0;
  float * in_ecx = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = in_ecx[1];
  fVar2 = in_ecx[2];
  fVar3 = in_ecx[3];
  fVar4 = in_eax[1];
  fVar5 = in_eax[2];
  fVar6 = in_eax[3];
  *param_3 = *in_ecx * *in_eax;
  param_3[1] = fVar1 * fVar4;
  param_3[2] = fVar2 * fVar5;
  param_3[3] = fVar3 * fVar6;
  return 0;
}

/* ref: FUN_00d379d0 */
unsigned int F_00d379d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd379d0u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_eax = (float *)(uintptr_t)gen_a0;
  float * in_ecx = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = in_ecx[1];
  fVar5 = in_ecx[2];
  fVar6 = in_ecx[3];
  *in_eax = *param_3 * *in_ecx + *in_eax;
  in_eax[1] = fVar1 * fVar4 + in_eax[1];
  in_eax[2] = fVar2 * fVar5 + in_eax[2];
  in_eax[3] = fVar3 * fVar6 + in_eax[3];
  return 0;
}

/* ref: FUN_00d37a00 */
uint F_00d37a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd37a00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * puVar1;
  uint uVar2;
  
  if ((char)param_3 == '\0') {
    puVar1 = (undefined4 *)F_00d314f0(param_2);
  }
  else {
    puVar1 = (undefined4 *)F_00d31520(param_2);
  }
  uVar2 = F_00d36cf0(this,param_1,*puVar1,*(undefined4 *)((int)param_2 + 0x30),param_3,param_4,
                       param_5);
  return uVar2;
}

/* ref: FUN_00d37a50 */
uint F_00d37a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd37a50u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return -(uint)((*(int *)&gen_args[0]) != 0) & (*(uint *)&gen_args[1]);
}

/* ref: FUN_00d37a60 */
uint F_00d37a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd37a60u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return -(uint)((*(int *)&gen_args[0]) != 0) & (*(uint *)&gen_args[1]);
}

/* ref: FUN_00d37a70 */
uint F_00d37a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd37a70u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return -(uint)((*(int *)&gen_args[0]) != 0) & (*(uint *)&gen_args[1]);
}

/* ref: FUN_00d37a80 */
unsigned int F_00d37a80(void)
{
  GEN_ENTER(0xd37a80u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d37a90 */
unsigned int F_00d37a90(void)
{
  GEN_ENTER(0xd37a90u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d37aa0 */
unsigned int F_00d37aa0(void)
{
  GEN_ENTER(0xd37aa0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d37ab0 */
unsigned int F_00d37ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xd37ab0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)&REFG(undefined, 0x1134db0);
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)&REFG(undefined, 0x1134db4);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)&REFG(undefined, 0x1134db8);
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)&REFG(undefined, 0x1134dbc);
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)&REFG(undefined, 0x1134db0);
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)&REFG(undefined, 0x1134db4);
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)&REFG(undefined, 0x1134db8);
  (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)&REFG(undefined, 0x1134dbc);
  F_00d3b390(*(undefined4 *)((int)this + 4),*(undefined4 *)((int)this + 8),
               *(undefined4 *)((int)this + 0x1c),0,&(*(undefined4 *)(gen_frame + 0x10)),*(undefined4 *)this);
  F_00d3c440(*(undefined4 *)((int)this + 0x10),*(undefined4 *)((int)this + 0x14),
               *(undefined4 *)((int)this + 0x20),0,&(*(undefined4 *)(gen_frame + 0x0)),*(undefined4 *)((int)this + 0xc));
  return 0;
}

/* ref: FUN_00d37b30 */
uint F_00d37b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xd37b30u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float param_7 = (float)gen_a6;
  int param_8 = (int)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  LPVOID pvVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 * puVar11;
  
  if (param_8 != 0) {
    iVar8 = *param_1;
    pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar1 = *(uint *)((int)pvVar5 + 0xc);
    uVar9 = iVar8 * 0x30 + 0x7fU & 0xffffff80;
    uVar10 = uVar1 + uVar9;
    if ((*(int *)((int)pvVar5 + 8) < (int)uVar9) || (*(uint *)((int)pvVar5 + 0x10) < uVar10)) {
      uVar10 = F_00d94390(pvVar5,uVar9);
      (*(uint *)(gen_frame + 0x2c)) = uVar10;
    }
    else {
      *(uint *)((int)pvVar5 + 0xc) = uVar10;
      (*(uint *)(gen_frame + 0x2c)) = uVar1;
    }
    puVar11 = (undefined4 *)param_1[7];
    if (0 < *param_1 * 3) {
      puVar6 = (undefined4 *)((*(uint *)(gen_frame + 0x2c)) + 8);
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = (undefined4 *)(*param_1 * 3);
      do {
        uVar2 = puVar11[2];
        (*(undefined4 *)(gen_frame + 0x24)) = uVar2;
        uVar3 = puVar11[3];
        (*(undefined4 *)(gen_frame + 0x20)) = uVar3;
        uVar4 = *puVar11;
        puVar6[-1] = puVar11[1];
        *puVar6 = uVar2;
        puVar6[-2] = uVar4;
        puVar6[1] = uVar3;
        puVar6 = puVar6 + 4;
        puVar11 = puVar11 + 4;
        puVar7 = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x28)) + -1);
        (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar7;
      } while (puVar7 != (undefined4 *)0x0);
    }
    puVar11 = (undefined4 *)0x0;
    if (param_4 != (undefined4 *)0x0) {
      iVar8 = *param_1;
      pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      puVar11 = *(undefined4 * PTR32 *)((int)pvVar5 + 0xc);
      uVar10 = iVar8 * 4 + 0x7fU & 0xffffff80;
      if ((*(int *)((int)pvVar5 + 8) < (int)uVar10) ||
         (*(uint *)((int)pvVar5 + 0x10) < (int)puVar11 + uVar10)) {
        puVar11 = (undefined4 *)F_00d94390(pvVar5,uVar10);
      }
      else {
        *(uint *)((int)pvVar5 + 0xc) = (int)puVar11 + uVar10;
      }
      iVar8 = *param_1;
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar11;
      puVar6 = puVar11;
      if (-1 < iVar8 + -1) {
        for (; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
      }
    }
    F_00d657d0(param_8,param_3,(*(uint *)(gen_frame + 0x2c)),0,0,param_9,param_4,puVar11);
    param_3 = (*(uint *)(gen_frame + 0x2c));
    param_4 = puVar11;
  }
  if (*(char *)((int)param_1 + 0x2d) == '\0') {
    if ((char)param_9 == '\0') {
      (*(float *)(gen_frame + 0x10)) = param_7;
      (*(float *)(gen_frame + 0x14)) = param_7;
      (*(float *)(gen_frame + 0x18)) = param_7;
      (*(float *)(gen_frame + 0x1c)) = param_7;
      (*(float *)(gen_frame + 0x0)) = param_7;
      (*(float *)(gen_frame + 0x4)) = param_7;
      (*(float *)(gen_frame + 0x8)) = param_7;
      (*(float *)(gen_frame + 0xc)) = param_7;
      F_00d3b6f0(param_1[1],param_1[2],param_3,param_4,&(*(float *)(gen_frame + 0x0)),*param_1);
      (*(float *)(gen_frame + 0x0)) = (*(float *)(gen_frame + 0x10));
      (*(float *)(gen_frame + 0x4)) = (*(float *)(gen_frame + 0x14));
      (*(float *)(gen_frame + 0x8)) = (*(float *)(gen_frame + 0x18));
      (*(float *)(gen_frame + 0xc)) = (*(float *)(gen_frame + 0x1c));
      puVar11 = (undefined4 *)
                F_00d3cfa0(param_1[4],param_1[5],param_5,param_6,&(*(float *)(gen_frame + 0x0)),param_1[3]);
    }
    else {
      (*(float *)(gen_frame + 0x0)) = param_7;
      (*(float *)(gen_frame + 0x4)) = param_7;
      (*(float *)(gen_frame + 0x8)) = param_7;
      (*(float *)(gen_frame + 0xc)) = param_7;
      (*(float *)(gen_frame + 0x10)) = param_7;
      (*(float *)(gen_frame + 0x14)) = param_7;
      (*(float *)(gen_frame + 0x18)) = param_7;
      (*(float *)(gen_frame + 0x1c)) = param_7;
      F_00d3c560(param_1[1],param_3,param_4,&(*(float *)(gen_frame + 0x10)),*param_1);
      puVar11 = (undefined4 *)F_00d3cf50(param_1[4],param_5,param_6,&(*(float *)(gen_frame + 0x0)),param_1[3]);
    }
  }
  else {
    puVar11 = (undefined4 *)param_1[1];
    puVar6 = (undefined4 *)(*param_1 * 3 & 0xfffffff);
    if (puVar6 != (undefined4 *)0x0) {
      puVar7 = (undefined4 *)(param_3 + 8);
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar6;
      do {
        uVar2 = *puVar7;
        (*(undefined4 *)(gen_frame + 0x20)) = uVar2;
        uVar3 = puVar7[1];
        (*(undefined4 *)(gen_frame + 0x24)) = uVar3;
        uVar4 = puVar7[-2];
        puVar11[1] = puVar7[-1];
        puVar11[2] = uVar2;
        *puVar11 = uVar4;
        puVar11[3] = uVar3;
        puVar11 = puVar11 + 4;
        puVar7 = puVar7 + 4;
        puVar6 = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x28)) + -1);
        (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar6;
      } while (puVar6 != (undefined4 *)0x0);
    }
    iVar8 = param_1[3];
    puVar11 = (undefined4 *)param_1[4];
    puVar6 = param_5;
    if (0 < iVar8) {
      do {
        *puVar11 = *puVar6;
        puVar11 = puVar11 + 1;
        puVar6 = puVar6 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  if (param_8 != 0) {
    if (param_4 != (undefined4 *)0x0) {
      iVar8 = *param_1;
      pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      uVar10 = iVar8 * 4 + 0x7fU & 0xffffff80;
      if (((*(int *)((int)pvVar5 + 8) < (int)uVar10) ||
          (uVar10 + (int)param_4 != *(int *)((int)pvVar5 + 0xc))) ||
         (*(undefined4 * PTR32 *)((int)pvVar5 + 0x14) == param_4)) {
        F_00d945c0(pvVar5,param_4,uVar10);
      }
      else {
        *(undefined4 * PTR32 *)((int)pvVar5 + 0xc) = param_4;
      }
    }
    iVar8 = *param_1;
    pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar10 = iVar8 * 0x30 + 0x7fU & 0xffffff80;
    if ((((int)uVar10 <= *(int *)((int)pvVar5 + 8)) &&
        (uVar10 + param_3 == *(int *)((int)pvVar5 + 0xc))) &&
       (*(uint *)((int)pvVar5 + 0x14) != param_3)) {
      *(uint *)((int)pvVar5 + 0xc) = param_3;
      return (uint)pvVar5;
    }
    puVar11 = (undefined4 *)F_00d945c0(pvVar5,param_3,uVar10);
  }
  return (uint)puVar11;
}

/* ref: FUN_00d37e20 */
uint F_00d37e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd37e20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  uint * puVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  LPVOID pvVar8;
  uint uVar9;
  undefined4 * puVar10;
  undefined4 * puVar11;
  short * psVar12;
  undefined * this_00;
  byte bVar13;
  int iVar14;
  undefined4 * puVar15;
  uint * puVar16;
  int iVar17;
  uint uVar18;
  
  (*(uint *)(gen_frame + 0x44)) = 0x80000000;
  (*(uint *)(gen_frame + 0x64)) = 0x80000000;
  (*(uint *)(gen_frame + 0x50)) = 0x80000000;
  (*(uint *)(gen_frame + 0x34)) = 0x80000000;
  (*(short * PTR32 *)(gen_frame + 0x88)) = this;
  (*(uint *)(gen_frame + 0x3c)) = 0;
  (*(uint *)(gen_frame + 0x40)) = 0;
  (*(uint *)(gen_frame + 0x5c)) = 0;
  (*(uint *)(gen_frame + 0x60)) = 0;
  (*(uint *)(gen_frame + 0x48)) = 0;
  (*(uint *)(gen_frame + 0x4c)) = 0;
  ((uint *)(gen_frame + 0x10))[7] = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = (undefined4 *)0x0;
  pvVar8 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar3 = *(uint *)((int)pvVar8 + 0xc);
  uVar9 = uVar3 + 0x80;
  if ((*(int *)((int)pvVar8 + 8) < 0x80) || (*(uint *)((int)pvVar8 + 0x10) < uVar9)) {
    uVar9 = F_00d94390(pvVar8,0x80);
    (*(uint *)(gen_frame + 0x38)) = uVar9;
  }
  else {
    *(uint *)((int)pvVar8 + 0xc) = uVar9;
    (*(uint *)(gen_frame + 0x38)) = uVar3;
  }
  pvVar8 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar3 = *(uint *)((int)pvVar8 + 0xc);
  uVar9 = uVar3 + 0x80;
  if ((*(int *)((int)pvVar8 + 8) < 0x80) || (*(uint *)((int)pvVar8 + 0x10) < uVar9)) {
    uVar9 = F_00d94390(pvVar8,0x80);
    (*(uint *)(gen_frame + 0x54)) = uVar9;
  }
  else {
    *(uint *)((int)pvVar8 + 0xc) = uVar9;
    (*(uint *)(gen_frame + 0x54)) = uVar3;
  }
  pvVar8 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar3 = *(uint *)((int)pvVar8 + 0xc);
  uVar9 = uVar3 + 0x80;
  if ((*(int *)((int)pvVar8 + 8) < 0x80) || (*(uint *)((int)pvVar8 + 0x10) < uVar9)) {
    uVar9 = F_00d94390(pvVar8,0x80);
    ((uint *)(gen_frame + 0x10))[6] = uVar9;
  }
  else {
    *(uint *)((int)pvVar8 + 0xc) = uVar9;
    ((uint *)(gen_frame + 0x10))[6] = uVar3;
  }
  uVar9 = param_3[0x2d];
  (*(uint *)(gen_frame + 0x68)) = 0;
  puVar16 = param_1;
  if ((uVar9 & 1) != 0) {
    (*(uint *)(gen_frame + 0x3c)) = *param_1;
    (*(uint *)(gen_frame + 0x40)) = param_1[1];
    puVar16 = param_1 + 2;
    param_2 = param_2 + -1;
    (*(uint *)(gen_frame + 0x44)) = param_1[1] | 0x80000000;
  }
  if ((uVar9 & 2) != 0) {
    (*(uint *)(gen_frame + 0x5c)) = *puVar16;
    puVar1 = puVar16 + 1;
    (*(uint *)(gen_frame + 0x60)) = *puVar1;
    puVar16 = puVar16 + 2;
    param_2 = param_2 + -1;
    (*(uint *)(gen_frame + 0x64)) = *puVar1 | 0x80000000;
  }
  if ((uVar9 & 4) != 0) {
    puVar1 = puVar16 + 1;
    uVar3 = *puVar16;
    (*(uint *)(gen_frame + 0x4c)) = *puVar1 >> 1;
    puVar16 = puVar16 + 2;
    param_2 = param_2 + -1;
    (*(uint *)(gen_frame + 0x48)) = uVar3;
    (*(uint *)(gen_frame + 0x50)) = *puVar1 >> 1 | 0x80000000;
  }
  if ((uVar9 & 8) != 0) {
    ((uint *)(gen_frame + 0x10))[7] = *puVar16;
    puVar1 = puVar16 + 1;
    (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = (undefined4 *)(*puVar1 >> 1);
    puVar16 = puVar16 + 2;
    param_2 = param_2 + -1;
    (*(uint *)(gen_frame + 0x34)) = *puVar1 >> 1 | 0x80000000;
  }
  if ((uVar9 & 0x10) != 0) {
    F_00da1030((*(uint *)(gen_frame + 0x38)),0,0x80);
    uVar9 = puVar16[1];
    *(uint *)((*(uint *)(gen_frame + 0x38)) + 0x18) = *puVar16;
    *(uint *)((*(uint *)(gen_frame + 0x38)) + 0x1c) = uVar9 >> 6;
    *(uint *)((*(uint *)(gen_frame + 0x38)) + 0x20) = uVar9 >> 6 | 0x80000000;
    iVar14 = (int)((ulonglong)puVar16[3] * 0x24924925 >> 0x20);
    uVar9 = puVar16[3];
    *(uint *)((*(uint *)(gen_frame + 0x38)) + 0x24) = puVar16[2];
    uVar9 = (uVar9 - iVar14 >> 1) + iVar14 >> 6;
    *(uint *)((*(uint *)(gen_frame + 0x38)) + 0x28) = uVar9;
    *(uint *)((*(uint *)(gen_frame + 0x38)) + 0x2c) = uVar9 | 0x80000000;
    uVar9 = puVar16[5];
    *(uint *)((*(uint *)(gen_frame + 0x38)) + 0x30) = puVar16[4];
    *(uint *)((*(uint *)(gen_frame + 0x38)) + 0x34) = uVar9 >> 1;
    *(uint *)((*(uint *)(gen_frame + 0x38)) + 0x38) = uVar9 >> 1 | 0x80000000;
    uVar9 = puVar16[7] >> 1;
    (*(undefined4 * PTR32 *)(gen_frame + 0x94)) = (undefined4 *)uVar9;
    *(uint *)((*(uint *)(gen_frame + 0x54)) + 0xc) = puVar16[6];
    *(uint *)((*(uint *)(gen_frame + 0x54)) + 0x10) = uVar9;
    *(uint *)((*(uint *)(gen_frame + 0x54)) + 0x14) = uVar9 | 0x80000000;
    uVar9 = puVar16[9] >> 3;
    (*(undefined4 * PTR32 *)(gen_frame + 0x94)) = (undefined4 *)uVar9;
    *(uint *)((*(uint *)(gen_frame + 0x54)) + 0x18) = puVar16[8];
    *(uint *)((*(uint *)(gen_frame + 0x54)) + 0x1c) = uVar9;
    *(uint *)((*(uint *)(gen_frame + 0x54)) + 0x20) = uVar9 | 0x80000000;
    param_2 = param_2 + -6;
    uVar9 = puVar16[0xb] / 0x30;
    (*(undefined4 * PTR32 *)(gen_frame + 0x94)) = (undefined4 *)uVar9;
    *(uint *)((*(uint *)(gen_frame + 0x54)) + 0x24) = puVar16[10];
    *(uint *)((*(uint *)(gen_frame + 0x54)) + 0x28) = uVar9;
    *(uint *)((*(uint *)(gen_frame + 0x54)) + 0x2c) = uVar9 | 0x80000000;
    uVar9 = *(uint *)this;
    (*(undefined4 * PTR32 *)(gen_frame + 0x90)) = (undefined4 *)uVar9;
    *(undefined4 *)(((uint *)(gen_frame + 0x10))[6] + 0xc) = *(undefined4 *)((int)this + 0x28);
    *(uint *)(((uint *)(gen_frame + 0x10))[6] + 0x10) = uVar9;
    puVar16 = puVar16 + 0xc;
    *(uint *)(((uint *)(gen_frame + 0x10))[6] + 0x14) = uVar9 | 0x80000000;
    uVar9 = *(uint *)this;
    (*(undefined4 * PTR32 *)(gen_frame + 0x90)) = (undefined4 *)uVar9;
    *(undefined4 *)(((uint *)(gen_frame + 0x10))[6] + 0x24) = *(undefined4 *)((int)this + 0x1c);
    (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x38));
    *(uint *)(((uint *)(gen_frame + 0x10))[6] + 0x28) = uVar9;
    *(uint *)(((uint *)(gen_frame + 0x10))[6] + 0x2c) = uVar9 | 0x80000000;
    puVar11 = *(undefined4 * PTR32 *)this;
    (*(undefined4 * PTR32 *)(gen_frame + 0x90)) = puVar11;
    *(undefined4 *)(((uint *)(gen_frame + 0x10))[6] + 0x18) = *(undefined4 *)((int)this + 0x24);
    *(undefined4 * PTR32 *)(((uint *)(gen_frame + 0x10))[6] + 0x1c) = puVar11;
    *(uint *)(((uint *)(gen_frame + 0x10))[6] + 0x20) = (uint)puVar11 | 0x80000000;
    *(uint *)((*(uint *)(gen_frame + 0x38)) + 0x10) = (*(uint *)(gen_frame + 0x54));
    *(uint *)((*(uint *)(gen_frame + 0x38)) + 0x14) = ((uint *)(gen_frame + 0x10))[6];
    *(undefined4 *)((*(uint *)(gen_frame + 0x38)) + 0x74) = 1;
  }
  bVar2 = *(byte *)((int)this + 0x2d);
  (*(byte *)(gen_frame + 0x5b)) = bVar2;
  if ((*(uint *)(gen_frame + 0x68)) == 0) {
    if (((*(uint *)(gen_frame + 0x4c)) == *(uint *)this) || ((*(uint *)(gen_frame + 0x4c)) == 0)) {
      *(byte *)((int)this + 0x2d) = bVar2 & 1;
    }
    else {
      *(undefined1 *)((int)this + 0x2d) = 0;
    }
  }
  else {
    bVar7 = *(int *)((*(uint *)(gen_frame + 0x68)) + 0x34) == 0 & bVar2;
    *(byte *)((int)this + 0x2d) = bVar7;
    if (((*(uint *)(gen_frame + 0x4c)) == param_3[0x2e]) || ((*(uint *)(gen_frame + 0x4c)) == 0)) {
      bVar13 = 1;
    }
    else {
      bVar13 = 0;
    }
    *(byte *)((int)this + 0x2d) = bVar7 & bVar13;
  }
  if ((bVar2 != 0) && (*(char *)((int)this + 0x2d) == '\0')) {
    F_00d37ab0(this);
  }
  switch((unsigned int)(uintptr_t)(param_3[3])) {
  case 1: ;
  case 2: ;
  case 3: ;
    if ((*(uint *)(gen_frame + 0x68)) == 0) {
      (*(uint *)(gen_frame + 0x80)) = *(uint *)this;
    }
    else {
      (*(uint *)(gen_frame + 0x80)) = param_3[0x2e];
    }
    pvVar8 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    puVar11 = *(undefined4 * PTR32 *)((int)pvVar8 + 0xc);
    uVar9 = (*(uint *)(gen_frame + 0x80)) * 0x30 + 0x7f & 0xffffff80;
    (*(undefined4 * PTR32 *)(gen_frame + 0x78)) = puVar11;
    (*(undefined4 * PTR32 *)(gen_frame + 0x94)) = (undefined4 *)uVar9;
    if ((*(int *)((int)pvVar8 + 8) < (int)uVar9) ||
       (*(uint *)((int)pvVar8 + 0x10) < (int)puVar11 + uVar9)) {
      puVar11 = (undefined4 *)F_00d94390(pvVar8,uVar9);
      (*(undefined4 * PTR32 *)(gen_frame + 0x8c)) = puVar11;
    }
    else {
      *(uint *)((int)pvVar8 + 0xc) = (int)puVar11 + uVar9;
      (*(undefined4 * PTR32 *)(gen_frame + 0x8c)) = puVar11;
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x78)) = (undefined4 *)*(int *)((int)this + 0xc);
    pvVar8 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    puVar11 = *(undefined4 * PTR32 *)((int)pvVar8 + 0xc);
    uVar9 = (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x78))) * 4 + 0x7fU & 0xffffff80;
    (*(undefined4 * PTR32 *)(gen_frame + 0x9c)) = puVar11;
    (*(undefined4 * PTR32 *)(gen_frame + 0x78)) = (undefined4 *)uVar9;
    if ((*(int *)((int)pvVar8 + 8) < (int)uVar9) ||
       (*(uint *)((int)pvVar8 + 0x10) < (int)puVar11 + uVar9)) {
      puVar11 = (undefined4 *)F_00d94390(pvVar8,uVar9);
      (*(undefined4 * PTR32 *)(gen_frame + 0x74)) = puVar11;
    }
    else {
      *(uint *)((int)pvVar8 + 0xc) = (int)puVar11 + uVar9;
      (*(undefined4 * PTR32 *)(gen_frame + 0x74)) = puVar11;
    }
    if ((*(uint *)(gen_frame + 0x4c)) == 0) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x90)) = (*(undefined4 * PTR32 *)(gen_frame + 0x8c));
      (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x80));
      (*(undefined4 * PTR32 *)(gen_frame + 0x9c)) = (undefined4 *)(*(uint *)(gen_frame + 0x3c));
    }
    else {
      uVar9 = F_00d367f0((*(uint *)(gen_frame + 0x80)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x9c)) = (undefined4 *)uVar9;
      F_00da1030(uVar9,0,(*(uint *)(gen_frame + 0x80)));
      (*(uint *)(gen_frame + 0x7c)) = 0;
      uVar9 = (*(uint *)(gen_frame + 0x4c));
      do {
        uVar3 = uVar9;
        uVar9 = uVar3 - 1;
        if ((int)uVar9 < 0) goto LAB_00d3828b;
        puVar11 = (undefined4 *)(int)*(short *)((*(uint *)(gen_frame + 0x48)) + uVar9 * 2);
        (*(undefined4 * PTR32 *)(gen_frame + 0x90)) = puVar11;
      } while ((((int)puVar11 < 0) || ((int)(*(uint *)(gen_frame + 0x80)) <= (int)puVar11)) ||
              (((*(uint *)(gen_frame + 0x40)) != 0 && (*(char *)(uVar9 + (*(uint *)(gen_frame + 0x3c))) == '\0'))));
      (*(uint *)(gen_frame + 0x7c)) = uVar3;
LAB_00d3828b: ;
      puVar11 = (undefined4 *)F_00d368e0((*(uint *)(gen_frame + 0x7c)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x90)) = puVar11;
      iVar14 = (*(uint *)(gen_frame + 0x80)) * 0xc;
      puVar11 = (*(undefined4 * PTR32 *)(gen_frame + 0x8c));
      if (-1 < iVar14 + -1) {
        for (; this = (*(short * PTR32 *)(gen_frame + 0x88)), iVar14 != 0; iVar14 = iVar14 + -1) {
          *puVar11 = 0;
          puVar11 = puVar11 + 1;
        }
      }
    }
    puVar11 = *(undefined4 * PTR32 *)((int)this + 0xc);
    (*(undefined4 * PTR32 *)(gen_frame + 0x98)) = puVar11;
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x30)) == (undefined4 *)0x0) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x6c)) = puVar11;
      (*(undefined4 * PTR32 *)(gen_frame + 0x84)) = (*(undefined4 * PTR32 *)(gen_frame + 0x74));
      (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x5c));
    }
    else {
      uVar9 = F_00d367f0(puVar11);
      (*(uint *)(gen_frame + 0x70)) = uVar9;
      F_00da1030(uVar9,0,(*(undefined4 * PTR32 *)(gen_frame + 0x98)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x6c)) = (undefined4 *)0x0;
      puVar11 = (*(undefined4 * PTR32 *)(gen_frame + 0x30));
      do {
        puVar15 = puVar11;
        puVar11 = (undefined4 *)((int)puVar15 + -1);
        if ((int)puVar11 < 0) goto LAB_00d3832b;
        puVar10 = (undefined4 *)(int)*(short *)(((uint *)(gen_frame + 0x10))[7] + (int)((int)(uintptr_t)puVar11) * 2);
        (*(undefined4 * PTR32 *)(gen_frame + 0x84)) = puVar10;
      } while ((((int)puVar10 < 0) || ((int)(*(undefined4 * PTR32 *)(gen_frame + 0x98)) <= (int)puVar10)) ||
              (((*(uint *)(gen_frame + 0x60)) != 0 && (*(char *)((int)puVar11 + (*(uint *)(gen_frame + 0x5c))) == '\0'))));
      (*(undefined4 * PTR32 *)(gen_frame + 0x6c)) = puVar15;
LAB_00d3832b: ;
      puVar11 = (undefined4 *)F_00d36890((*(undefined4 * PTR32 *)(gen_frame + 0x6c)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x84)) = puVar11;
      puVar11 = (*(undefined4 * PTR32 *)(gen_frame + 0x98));
      puVar15 = (*(undefined4 * PTR32 *)(gen_frame + 0x74));
      if (-1 < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x98)) + -1) {
        for (; this = (*(short * PTR32 *)(gen_frame + 0x88)), puVar11 != (undefined4 *)0x0;
            puVar11 = (undefined4 *)((int)puVar11 + -1)) {
          *puVar15 = 0;
          puVar15 = puVar15 + 1;
        }
      }
    }
    iVar14 = param_3[3];
    if (iVar14 == 1) {
      F_00d6ae50(*param_3,GEN_TOF(gen_bits2f(param_3[1])),(*(uint *)(gen_frame + 0x7c)),(*(undefined4 * PTR32 *)(gen_frame + 0x90)),(*(undefined4 * PTR32 *)(gen_frame + 0x6c)),(*(undefined4 * PTR32 *)(gen_frame + 0x84)),puVar16,
                   param_2);
    }
    else if (iVar14 == 2) {
      F_00d6c0a0(*param_3,GEN_TOF(gen_bits2f(param_3[1])),(*(uint *)(gen_frame + 0x7c)),(*(undefined4 * PTR32 *)(gen_frame + 0x6c)),
                   *(undefined4 *)((int)this + 0x1c),*(undefined4 *)((int)this + 0x20),puVar16,
                   param_2,(*(undefined4 * PTR32 *)(gen_frame + 0x90)),(*(undefined4 * PTR32 *)(gen_frame + 0x84)));
    }
    else if (iVar14 == 3) {
      F_00d6de50(*param_3,GEN_TOF(gen_bits2f(param_3[1])),(*(uint *)(gen_frame + 0x7c)),(*(undefined4 * PTR32 *)(gen_frame + 0x90)),(*(undefined4 * PTR32 *)(gen_frame + 0x6c)),(*(undefined4 * PTR32 *)(gen_frame + 0x84)),puVar16,
                   param_2);
    }
    puVar11 = (*(undefined4 * PTR32 *)(gen_frame + 0x74));
    if (((*(uint *)(gen_frame + 0x4c)) != 0) && ((*(undefined4 * PTR32 *)(gen_frame + 0x98)) = (undefined4 *)0x0, 0 < (int)(*(uint *)(gen_frame + 0x7c)))) {
      puVar15 = (*(undefined4 * PTR32 *)(gen_frame + 0x90)) + 8;
      do {
        iVar14 = (int)*(short *)((*(uint *)(gen_frame + 0x48)) + (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x98))) * 2);
        uVar4 = puVar15[-7];
        uVar5 = puVar15[-6];
        uVar6 = puVar15[-5];
        puVar10 = (*(undefined4 * PTR32 *)(gen_frame + 0x8c)) + iVar14 * 0xc;
        *puVar10 = puVar15[-8];
        puVar10[1] = uVar4;
        puVar10[2] = uVar5;
        puVar10[3] = uVar6;
        uVar4 = puVar15[-3];
        uVar5 = puVar15[-2];
        uVar6 = puVar15[-1];
        puVar10[4] = puVar15[-4];
        puVar10[5] = uVar4;
        puVar10[6] = uVar5;
        puVar10[7] = uVar6;
        uVar4 = puVar15[1];
        uVar5 = puVar15[2];
        uVar6 = puVar15[3];
        puVar10[8] = *puVar15;
        puVar10[9] = uVar4;
        puVar10[10] = uVar5;
        puVar10[0xb] = uVar6;
        if ((*(uint *)(gen_frame + 0x40)) == 0) {
          *(undefined1 *)(iVar14 + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x9c))) = 0xff;
        }
        else {
          *(undefined1 *)(iVar14 + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x9c))) = *(undefined1 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x98)) + (*(uint *)(gen_frame + 0x3c)));
        }
        puVar10 = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x98)) + 1);
        puVar15 = puVar15 + 0xc;
        (*(undefined4 * PTR32 *)(gen_frame + 0x98)) = puVar10;
      } while ((int)puVar10 < (int)(*(uint *)(gen_frame + 0x7c)));
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x30)) != (undefined4 *)0x0) {
      iVar14 = 0;
      if (3 < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x6c))) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x98)) = (*(undefined4 * PTR32 *)(gen_frame + 0x84)) + 2;
        (*(short * PTR32 *)(gen_frame + 0x88)) = (short *)(((uint *)(gen_frame + 0x10))[7] + 4);
        do {
          iVar17 = (int)(*(short * PTR32 *)(gen_frame + 0x88))[-2];
          (*(undefined4 * PTR32 *)(gen_frame + 0x74))[iVar17] = (*(undefined4 * PTR32 *)(gen_frame + 0x98))[-2];
          if ((*(uint *)(gen_frame + 0x60)) == 0) {
            *(undefined1 *)(iVar17 + (*(uint *)(gen_frame + 0x70))) = 0xff;
          }
          else {
            *(undefined1 *)(iVar17 + (*(uint *)(gen_frame + 0x70))) = *(undefined1 *)(iVar14 + (*(uint *)(gen_frame + 0x5c)));
          }
          iVar17 = (int)(*(short * PTR32 *)(gen_frame + 0x88))[-1];
          (*(undefined4 * PTR32 *)(gen_frame + 0x74))[iVar17] = (*(undefined4 * PTR32 *)(gen_frame + 0x98))[-1];
          if ((*(uint *)(gen_frame + 0x60)) == 0) {
            *(undefined1 *)(iVar17 + (*(uint *)(gen_frame + 0x70))) = 0xff;
          }
          else {
            *(undefined1 *)(iVar17 + (*(uint *)(gen_frame + 0x70))) = *(undefined1 *)(iVar14 + 1 + (*(uint *)(gen_frame + 0x5c)));
          }
          iVar17 = (int)*(*(short * PTR32 *)(gen_frame + 0x88));
          (*(undefined4 * PTR32 *)(gen_frame + 0x74))[iVar17] = *(*(undefined4 * PTR32 *)(gen_frame + 0x98));
          if ((*(uint *)(gen_frame + 0x60)) == 0) {
            *(undefined1 *)(iVar17 + (*(uint *)(gen_frame + 0x70))) = 0xff;
          }
          else {
            *(undefined1 *)(iVar17 + (*(uint *)(gen_frame + 0x70))) = *(undefined1 *)(iVar14 + 2 + (*(uint *)(gen_frame + 0x5c)));
          }
          iVar17 = (int)(*(short * PTR32 *)(gen_frame + 0x88))[1];
          (*(undefined4 * PTR32 *)(gen_frame + 0x74))[iVar17] = (*(undefined4 * PTR32 *)(gen_frame + 0x98))[1];
          if ((*(uint *)(gen_frame + 0x60)) == 0) {
            *(undefined1 *)(iVar17 + (*(uint *)(gen_frame + 0x70))) = 0xff;
          }
          else {
            *(undefined1 *)(iVar17 + (*(uint *)(gen_frame + 0x70))) = *(undefined1 *)(iVar14 + 3 + (*(uint *)(gen_frame + 0x5c)));
          }
          (*(short * PTR32 *)(gen_frame + 0x88)) = (*(short * PTR32 *)(gen_frame + 0x88)) + 4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x98)) = (*(undefined4 * PTR32 *)(gen_frame + 0x98)) + 4;
          iVar14 = iVar14 + 4;
        } while (iVar14 < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x6c)) + -3);
      }
      for (; iVar14 < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x6c)); iVar14 = iVar14 + 1) {
        iVar17 = (int)*(short *)(((uint *)(gen_frame + 0x10))[7] + iVar14 * 2);
        (*(undefined4 * PTR32 *)(gen_frame + 0x74))[iVar17] = (*(undefined4 * PTR32 *)(gen_frame + 0x84))[iVar14];
        if ((*(uint *)(gen_frame + 0x60)) == 0) {
          *(undefined1 *)(iVar17 + (*(uint *)(gen_frame + 0x70))) = 0xff;
        }
        else {
          *(undefined1 *)(iVar17 + (*(uint *)(gen_frame + 0x70))) = *(undefined1 *)(iVar14 + (*(uint *)(gen_frame + 0x5c)));
        }
      }
    }
    F_00d3d340(this,(*(uint *)(gen_frame + 0x80)),(*(undefined4 * PTR32 *)(gen_frame + 0x8c)),(*(undefined4 * PTR32 *)(gen_frame + 0x9c)),(*(undefined4 * PTR32 *)(gen_frame + 0x74)),(*(uint *)(gen_frame + 0x70)),GEN_TOF(gen_bits2f(param_3[2])),(*(uint *)(gen_frame + 0x68)),
                 (uint)((byte)((uint)param_3[0x2d] >> 5) & 1));
    (*(undefined4 * PTR32 *)(gen_frame + 0x98)) = *(undefined4 * PTR32 *)((int)this + 0xc);
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x30)) != (undefined4 *)0x0) {
      F_00d36930((*(undefined4 * PTR32 *)(gen_frame + 0x84)),(*(undefined4 * PTR32 *)(gen_frame + 0x6c)));
      F_00d36840((*(uint *)(gen_frame + 0x70)),(*(undefined4 * PTR32 *)(gen_frame + 0x98)));
      puVar11 = (*(undefined4 * PTR32 *)(gen_frame + 0x74));
    }
    if ((*(uint *)(gen_frame + 0x4c)) != 0) {
      F_00d36980((*(undefined4 * PTR32 *)(gen_frame + 0x90)),(*(uint *)(gen_frame + 0x7c)));
      F_00d36840((*(undefined4 * PTR32 *)(gen_frame + 0x9c)),(*(uint *)(gen_frame + 0x80)));
      puVar11 = (*(undefined4 * PTR32 *)(gen_frame + 0x74));
    }
    pvVar8 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar9 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x78)) + 0xfU & 0xfffffff0;
    if (((*(int *)((int)pvVar8 + 8) < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x78))) ||
        (uVar9 + (int)puVar11 != *(int *)((int)pvVar8 + 0xc))) ||
       (*(undefined4 * PTR32 *)((int)pvVar8 + 0x14) == puVar11)) {
      F_00d945c0(pvVar8,puVar11,uVar9);
    }
    else {
      *(undefined4 * PTR32 *)((int)pvVar8 + 0xc) = puVar11;
    }
    this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar9 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x94)) + 0xfU & 0xfffffff0;
    puVar11 = (*(undefined4 * PTR32 *)(gen_frame + 0x8c));
    if ((int)(*(undefined4 * PTR32 *)(gen_frame + 0x94)) <= *(int *)((int)this_00 + 8)) {
      iVar14 = uVar9 + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x8c));
LAB_00d38c24: ;
      if ((iVar14 == *(int *)((int)this_00 + 0xc)) &&
         (*(undefined4 * PTR32 *)((int)this_00 + 0x14) != puVar11)) {
        *(undefined4 * PTR32 *)((int)this_00 + 0xc) = puVar11;
        goto switchD_00d38168_default;
      }
    }
    break;
  case 4: ;
    (*(uint *)(gen_frame + 0x7c)) = puVar16[2];
    (*(uint *)(gen_frame + 0x80)) = puVar16[4];
    (*(undefined4 * PTR32 *)(gen_frame + 0x94)) = (undefined4 *)puVar16[6];
    if ((*(uint *)(gen_frame + 0x68)) == 0) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x8c)) = *(undefined4 * PTR32 *)this;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x8c)) = (undefined4 *)param_3[0x2e];
    }
    puVar11 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 3U & 0xfffffffc)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x98)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x8c)) + 3U & 0xfffffffc);
    (*(undefined4 * PTR32 *)(gen_frame + 0x84)) = puVar11;
    (*(undefined4 * PTR32 *)(gen_frame + 0x9c)) = (undefined4 *)0x0;
    do {
      uVar9 = F_00d368e0((*(undefined4 * PTR32 *)(gen_frame + 0x98)));
      *(uint *)((int)((uint *)(gen_frame + 0x10)) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x9c))) = uVar9;
      uVar9 = F_00d36890(puVar11);
      *(uint *)((int)((uint *)(gen_frame + 0x10)) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x9c)) + 0xcU) = uVar9;
      uVar9 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x9c)) + 4;
      (*(undefined4 * PTR32 *)(gen_frame + 0x9c)) = (undefined4 *)uVar9;
    } while ((int)uVar9 < 0xc);
    puVar15 = (undefined4 *)F_00d36890((*(undefined4 * PTR32 *)(gen_frame + 0x98)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x90)) = puVar15;
    uVar9 = F_00d36890(puVar11);
    (*(undefined4 * PTR32 *)(gen_frame + 0x78)) = (undefined4 *)uVar9;
    F_00d68da0((*(uint *)(gen_frame + 0x7c)),(*(uint *)(gen_frame + 0x80)),GEN_TOF((*(undefined4 * PTR32 *)(gen_frame + 0x94))),(*(undefined4 * PTR32 *)(gen_frame + 0x8c)),*(undefined4 *)((int)this + 0xc),((uint *)(gen_frame + 0x10))[0],
                 ((uint *)(gen_frame + 0x10))[3],(*(undefined4 * PTR32 *)(gen_frame + 0x90)),uVar9,*(undefined4 *)((int)this + 0x1c),
                 *(undefined4 *)((int)this + 0x20),((uint *)(gen_frame + 0x10))[1],((uint *)(gen_frame + 0x10))[2],((uint *)(gen_frame + 0x10))[4],((uint *)(gen_frame + 0x10))[5],GEN_TOF(gen_bits2f(param_3[1])),param_4,REFG(float, 0x10947f8));
    if ((*(uint *)(gen_frame + 0x40)) != 0) {
      uVar9 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x8c)) + 0xf;
      pvVar8 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      uVar3 = *(uint *)((int)pvVar8 + 0xc);
      uVar18 = (uVar9 & 0xfffffff0) + 0x7f & 0xffffff80;
      uVar9 = uVar18 + uVar3;
      if ((*(int *)((int)pvVar8 + 8) < (int)uVar18) || (*(uint *)((int)pvVar8 + 0x10) < uVar9)) {
        uVar9 = F_00d94390(pvVar8,uVar18);
        (*(undefined4 * PTR32 *)(gen_frame + 0x9c)) = (undefined4 *)uVar9;
      }
      else {
        *(uint *)((int)pvVar8 + 0xc) = uVar9;
        (*(undefined4 * PTR32 *)(gen_frame + 0x9c)) = (undefined4 *)uVar3;
      }
      F_00d35910(&(*(uint *)(gen_frame + 0x48)),(*(uint *)(gen_frame + 0x40)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 * PTR32 *)(gen_frame + 0x8c)),(*(undefined4 * PTR32 *)(gen_frame + 0x9c)));
      (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)&REFG(undefined, 0x1134da0);
      (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)&REFG(undefined, 0x1134da4);
      (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)&REFG(undefined, 0x1134da8);
      (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)&REFG(undefined, 0x1134dac);
      F_00d359a0((*(undefined4 * PTR32 *)(gen_frame + 0x90)),(*(undefined4 * PTR32 *)(gen_frame + 0x9c)),(*(undefined4 * PTR32 *)(gen_frame + 0x8c)),&(*(undefined4 *)(gen_frame + 0x0)));
      pvVar8 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      if (((*(int *)((int)pvVar8 + 8) < (int)uVar18) ||
          (uVar18 + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x9c)) != *(int *)((int)pvVar8 + 0xc))) ||
         ((undefined4 *)*(uint *)((int)pvVar8 + 0x14) == (*(undefined4 * PTR32 *)(gen_frame + 0x9c)))) {
        F_00d945c0(pvVar8,(*(undefined4 * PTR32 *)(gen_frame + 0x9c)),uVar18);
      }
      else {
        *(undefined4 * PTR32 *)((int)pvVar8 + 0xc) = (*(undefined4 * PTR32 *)(gen_frame + 0x9c));
      }
    }
    if ((*(uint *)(gen_frame + 0x60)) != 0) {
      uVar9 = *(uint *)((int)this + 0xc);
      (*(undefined4 * PTR32 *)(gen_frame + 0x94)) = (undefined4 *)uVar9;
      pvVar8 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      uVar3 = *(uint *)((int)pvVar8 + 0xc);
      uVar18 = (uVar9 + 0xf & 0xfffffff0) + 0x7f & 0xffffff80;
      uVar9 = uVar18 + uVar3;
      if ((*(int *)((int)pvVar8 + 8) < (int)uVar18) || (*(uint *)((int)pvVar8 + 0x10) < uVar9)) {
        uVar9 = F_00d94390(pvVar8,uVar18);
        (*(undefined4 * PTR32 *)(gen_frame + 0x9c)) = (undefined4 *)uVar9;
      }
      else {
        *(uint *)((int)pvVar8 + 0xc) = uVar9;
        (*(undefined4 * PTR32 *)(gen_frame + 0x9c)) = (undefined4 *)uVar3;
      }
      F_00d35910(((uint *)(gen_frame + 0x10)) + 7,(*(uint *)(gen_frame + 0x60)),(*(uint *)(gen_frame + 0x5c)),(*(undefined4 * PTR32 *)(gen_frame + 0x94)),(*(undefined4 * PTR32 *)(gen_frame + 0x9c)));
      (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)&REFG(undefined, 0x1134da0);
      (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)&REFG(undefined, 0x1134da4);
      (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)&REFG(undefined, 0x1134da8);
      (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)&REFG(undefined, 0x1134dac);
      F_00d359a0((*(undefined4 * PTR32 *)(gen_frame + 0x78)),(*(undefined4 * PTR32 *)(gen_frame + 0x9c)),(*(undefined4 * PTR32 *)(gen_frame + 0x94)),&(*(undefined4 *)(gen_frame + 0x0)));
      pvVar8 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      if (((*(int *)((int)pvVar8 + 8) < (int)uVar18) ||
          (uVar18 + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x9c)) != *(int *)((int)pvVar8 + 0xc))) ||
         ((undefined4 *)*(uint *)((int)pvVar8 + 0x14) == (*(undefined4 * PTR32 *)(gen_frame + 0x9c)))) {
        F_00d945c0(pvVar8,(*(undefined4 * PTR32 *)(gen_frame + 0x9c)),uVar18);
      }
      else {
        *(undefined4 * PTR32 *)((int)pvVar8 + 0xc) = (*(undefined4 * PTR32 *)(gen_frame + 0x9c));
      }
    }
    puVar11 = (*(undefined4 * PTR32 *)(gen_frame + 0x78));
    F_00d37b30(this,(*(undefined4 * PTR32 *)(gen_frame + 0x8c)),((uint *)(gen_frame + 0x10))[0],(*(undefined4 * PTR32 *)(gen_frame + 0x90)),((uint *)(gen_frame + 0x10))[3],(*(undefined4 * PTR32 *)(gen_frame + 0x78)),GEN_TOF(gen_bits2f(param_3[2])),
                 (*(uint *)(gen_frame + 0x68)),(uint)((byte)((uint)param_3[0x2d] >> 5) & 1));
    F_00d36930(puVar11,(*(undefined4 * PTR32 *)(gen_frame + 0x84)));
    F_00d36930((*(undefined4 * PTR32 *)(gen_frame + 0x90)),(*(undefined4 * PTR32 *)(gen_frame + 0x98)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x9c)) = (undefined4 *)0x0;
    do {
      F_00d36930(*(undefined4 *)((int)((uint *)(gen_frame + 0x10)) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x9c)) + 0x14U),(*(undefined4 * PTR32 *)(gen_frame + 0x84)));
      F_00d36980(*(undefined4 *)((int)((uint *)(gen_frame + 0x10)) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x9c)) + 8U),(*(undefined4 * PTR32 *)(gen_frame + 0x98)));
      uVar9 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x9c)) - 4;
      (*(undefined4 * PTR32 *)(gen_frame + 0x9c)) = (undefined4 *)uVar9;
    } while (-9 < (int)uVar9);
    goto switchD_00d38168_default;
  case 5: ;
    (*(uint *)(gen_frame + 0x7c)) = *puVar16;
    if ((*(uint *)(gen_frame + 0x68)) == 0) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x9c)) = (undefined4 *)*(uint *)this;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x9c)) = (undefined4 *)param_3[0x2e];
    }
    pvVar8 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    puVar11 = *(undefined4 * PTR32 *)((int)pvVar8 + 0xc);
    puVar15 = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x9c)) + 0x7fU & 0xffffff80);
    (*(undefined4 * PTR32 *)(gen_frame + 0x84)) = puVar15;
    uVar9 = (int)puVar15 + (int)puVar11;
    (*(undefined4 * PTR32 *)(gen_frame + 0x94)) = (undefined4 *)uVar9;
    if ((*(int *)((int)pvVar8 + 8) < (int)puVar15) || (*(uint *)((int)pvVar8 + 0x10) < uVar9)) {
      puVar11 = (undefined4 *)F_00d94390(pvVar8,puVar15);
      (*(undefined4 * PTR32 *)(gen_frame + 0x98)) = puVar11;
    }
    else {
      *(uint *)((int)pvVar8 + 0xc) = uVar9;
      (*(undefined4 * PTR32 *)(gen_frame + 0x98)) = puVar11;
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x94)) = (undefined4 *)*(int *)((int)this + 0xc);
    pvVar8 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    puVar11 = *(undefined4 * PTR32 *)((int)pvVar8 + 0xc);
    uVar9 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x94)) + 0x7fU & 0xffffff80;
    (*(undefined4 * PTR32 *)(gen_frame + 0x94)) = puVar11;
    (*(uint *)(gen_frame + 0x80)) = uVar9;
    if ((*(int *)((int)pvVar8 + 8) < (int)uVar9) ||
       (*(uint *)((int)pvVar8 + 0x10) < (int)puVar11 + uVar9)) {
      puVar11 = (undefined4 *)F_00d94390(pvVar8,uVar9);
      (*(undefined4 * PTR32 *)(gen_frame + 0x90)) = puVar11;
    }
    else {
      *(uint *)((int)pvVar8 + 0xc) = (int)puVar11 + uVar9;
      (*(undefined4 * PTR32 *)(gen_frame + 0x90)) = puVar11;
    }
    F_00d35910(&(*(uint *)(gen_frame + 0x48)),(*(uint *)(gen_frame + 0x40)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 * PTR32 *)(gen_frame + 0x9c)),(*(undefined4 * PTR32 *)(gen_frame + 0x98)));
    F_00d35910(((uint *)(gen_frame + 0x10)) + 7,(*(uint *)(gen_frame + 0x60)),(*(uint *)(gen_frame + 0x5c)),*(undefined4 *)((int)this + 0xc),(*(undefined4 * PTR32 *)(gen_frame + 0x90)));
    pvVar8 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    puVar11 = *(undefined4 * PTR32 *)((int)pvVar8 + 0xc);
    uVar9 = (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x9c))) * 0x30 + 0x7fU & 0xffffff80;
    (*(undefined4 * PTR32 *)(gen_frame + 0x94)) = puVar11;
    (*(undefined4 * PTR32 *)(gen_frame + 0x78)) = (undefined4 *)uVar9;
    if ((*(int *)((int)pvVar8 + 8) < (int)uVar9) ||
       (*(uint *)((int)pvVar8 + 0x10) < (int)puVar11 + uVar9)) {
      puVar11 = (undefined4 *)F_00d94390(pvVar8,uVar9);
      (*(undefined4 * PTR32 *)(gen_frame + 0x8c)) = puVar11;
    }
    else {
      *(uint *)((int)pvVar8 + 0xc) = (int)puVar11 + uVar9;
      (*(undefined4 * PTR32 *)(gen_frame + 0x8c)) = puVar11;
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x94)) = (undefined4 *)*(int *)((int)this + 0xc);
    pvVar8 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    psVar12 = *(short * PTR32 *)((int)pvVar8 + 0xc);
    uVar9 = (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x94))) * 4 + 0x7fU & 0xffffff80;
    (*(short * PTR32 *)(gen_frame + 0x88)) = psVar12;
    (*(undefined4 * PTR32 *)(gen_frame + 0x94)) = (undefined4 *)uVar9;
    if ((*(int *)((int)pvVar8 + 8) < (int)uVar9) ||
       (*(uint *)((int)pvVar8 + 0x10) < (int)psVar12 + uVar9)) {
      psVar12 = (short *)F_00d94390(pvVar8,uVar9);
      (*(short * PTR32 *)(gen_frame + 0x88)) = psVar12;
    }
    else {
      *(uint *)((int)pvVar8 + 0xc) = (int)psVar12 + uVar9;
    }
    F_00d6f800((*(uint *)(gen_frame + 0x7c)),*param_3,GEN_TOF(gen_bits2f(param_3[1])),puVar16[2],
                 *(undefined4 *)((int)this + 0x1c),*(undefined4 *)((int)this + 0x20),
                 *(undefined4 *)this,*(undefined4 *)((int)this + 0xc),(*(undefined4 * PTR32 *)(gen_frame + 0x8c)),(*(short * PTR32 *)(gen_frame + 0x88)),(*(undefined4 * PTR32 *)(gen_frame + 0x98)),
                 (*(undefined4 * PTR32 *)(gen_frame + 0x90)));
    F_00d3d340(this,(*(undefined4 * PTR32 *)(gen_frame + 0x9c)),(*(undefined4 * PTR32 *)(gen_frame + 0x8c)),(*(undefined4 * PTR32 *)(gen_frame + 0x98)),(*(short * PTR32 *)(gen_frame + 0x88)),(*(undefined4 * PTR32 *)(gen_frame + 0x90)),GEN_TOF(gen_bits2f(param_3[2])),(*(uint *)(gen_frame + 0x68)),
                 (uint)((byte)((uint)param_3[0x2d] >> 5) & 1));
    pvVar8 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar9 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x94)) + 0xfU & 0xfffffff0;
    if (((*(int *)((int)pvVar8 + 8) < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x94))) ||
        (uVar9 + (int)(*(short * PTR32 *)(gen_frame + 0x88)) != *(int *)((int)pvVar8 + 0xc))) ||
       (*(short * PTR32 *)((int)pvVar8 + 0x14) == (*(short * PTR32 *)(gen_frame + 0x88)))) {
      F_00d945c0(pvVar8,(*(short * PTR32 *)(gen_frame + 0x88)),uVar9);
    }
    else {
      *(short * PTR32 *)((int)pvVar8 + 0xc) = (*(short * PTR32 *)(gen_frame + 0x88));
    }
    pvVar8 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar9 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x78)) + 0xfU & 0xfffffff0;
    if (((*(int *)((int)pvVar8 + 8) < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x78))) ||
        ((int)(*(undefined4 * PTR32 *)(gen_frame + 0x8c)) + uVar9 != *(int *)((int)pvVar8 + 0xc))) ||
       (*(undefined4 * PTR32 *)((int)pvVar8 + 0x14) == (*(undefined4 * PTR32 *)(gen_frame + 0x8c)))) {
      F_00d945c0(pvVar8,(*(undefined4 * PTR32 *)(gen_frame + 0x8c)),uVar9);
    }
    else {
      *(undefined4 * PTR32 *)((int)pvVar8 + 0xc) = (*(undefined4 * PTR32 *)(gen_frame + 0x8c));
    }
    pvVar8 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar9 = (*(uint *)(gen_frame + 0x80)) + 0xf & 0xfffffff0;
    if (((*(int *)((int)pvVar8 + 8) < (int)(*(uint *)(gen_frame + 0x80))) ||
        ((int)(*(undefined4 * PTR32 *)(gen_frame + 0x90)) + uVar9 != *(int *)((int)pvVar8 + 0xc))) ||
       (*(undefined4 * PTR32 *)((int)pvVar8 + 0x14) == (*(undefined4 * PTR32 *)(gen_frame + 0x90)))) {
      F_00d945c0(pvVar8,(*(undefined4 * PTR32 *)(gen_frame + 0x90)),uVar9);
    }
    else {
      *(undefined4 * PTR32 *)((int)pvVar8 + 0xc) = (*(undefined4 * PTR32 *)(gen_frame + 0x90));
    }
    this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar9 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x84)) + 0xfU & 0xfffffff0;
    puVar11 = (*(undefined4 * PTR32 *)(gen_frame + 0x98));
    if ((int)(*(undefined4 * PTR32 *)(gen_frame + 0x84)) <= *(int *)((int)this_00 + 8)) {
      iVar14 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x98)) + uVar9;
      goto LAB_00d38c24;
    }
    break;
  default: ;
    goto switchD_00d38168_default;
  }
  F_00d945c0(this_00,puVar11,uVar9);
switchD_00d38168_default: ;
  pvVar8 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)((int)pvVar8 + 8) < 0x80) || (((uint *)(gen_frame + 0x10))[6] + 0x80 != *(int *)((int)pvVar8 + 0xc))) ||
     (*(uint *)((int)pvVar8 + 0x14) == ((uint *)(gen_frame + 0x10))[6])) {
    F_00d945c0(pvVar8,((uint *)(gen_frame + 0x10))[6],0x80);
  }
  else {
    *(uint *)((int)pvVar8 + 0xc) = ((uint *)(gen_frame + 0x10))[6];
  }
  pvVar8 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)((int)pvVar8 + 8) < 0x80) || ((*(uint *)(gen_frame + 0x54)) + 0x80 != *(int *)((int)pvVar8 + 0xc))) ||
     (*(uint *)((int)pvVar8 + 0x14) == (*(uint *)(gen_frame + 0x54)))) {
    F_00d945c0(pvVar8,(*(uint *)(gen_frame + 0x54)),0x80);
  }
  else {
    *(uint *)((int)pvVar8 + 0xc) = (*(uint *)(gen_frame + 0x54));
  }
  pvVar8 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)((int)pvVar8 + 8) < 0x80) || ((*(uint *)(gen_frame + 0x38)) + 0x80 != *(int *)((int)pvVar8 + 0xc))) ||
     (*(uint *)((int)pvVar8 + 0x14) == (*(uint *)(gen_frame + 0x38)))) {
    F_00d945c0(pvVar8,(*(uint *)(gen_frame + 0x38)),0x80);
  }
  else {
    *(uint *)((int)pvVar8 + 0xc) = (*(uint *)(gen_frame + 0x38));
  }
  if (-1 < (int)(*(uint *)(gen_frame + 0x34))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),((uint *)(gen_frame + 0x10))[7],((*(uint *)(gen_frame + 0x34)) & 0x3fffffff) * 2);
  }
  if (-1 < (int)(*(uint *)(gen_frame + 0x50))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x48)),((*(uint *)(gen_frame + 0x50)) & 0x3fffffff) * 2);
  }
  if (-1 < (int)(*(uint *)(gen_frame + 0x64))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x5c)),(*(uint *)(gen_frame + 0x64)) & 0x3fffffff)
    ;
  }
  uVar9 = (*(uint *)(gen_frame + 0x44));
  if (-1 < (int)(*(uint *)(gen_frame + 0x44))) {
    uVar9 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x3c)),(*(uint *)(gen_frame + 0x44)) & 0x3fffffff);
  }
  return uVar9;
}

/* ref: FUN_00d38d80 */
unsigned int F_00d38d80(unsigned int gen_a0)
{
  GEN_ENTER(0xd38d80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  float * pfVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ushort uVar11;
  undefined4 * PTR32 * ppuVar12;
  undefined1 uVar13;
  LPVOID pvVar14;
  undefined4 * puVar15;
  float * pfVar16;
  uint uVar17;
  gen_v16 * pauVar18;
  int iVar19;
  undefined4 * puVar20;
  int iVar21;
  uint uVar22;
  gen_v16 * pauVar23;
  uint uVar24;
  uint uVar25;
  float fVar26;
  float fVar28;
  float fVar29;
  undefined1 auVar27 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  
  if (*(short *)(param_1 + 0x4a) == 0) {
    return 0;
  }
  pvVar14 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar15 = *(undefined4 * PTR32 *)((int)pvVar14 + 4);
  if (puVar15 < *(undefined4 * PTR32 *)((int)pvVar14 + 0xc)) {
    *puVar15 = "LtSampleBlendJob";
    puVar15[3] = "StInitDMA";
    uVar4 = rdtsc();
    (*(gen_v16 * PTR32 *)(gen_frame + 0x9c)) = (gen_v16 *)uVar4;
    puVar15[1] = (gen_v16 *)uVar4;
    *(undefined4 * PTR32 *)((int)pvVar14 + 4) = puVar15 + 4;
  }
  (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x84)) = &(*(undefined4 * PTR32 *)(gen_frame + 0xa4));
  (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x88)) = &(*(undefined4 * PTR32 *)(gen_frame + 0xc));
  puVar15 = (undefined4 *)
            F_00d37a50((uint)*(ushort *)(param_1 + 0x4a),*(undefined4 *)(param_1 + 0x24));
  (*(undefined4 * PTR32 *)(gen_frame + 0x94)) = puVar15;
  pfVar16 = (float *)F_00d36e80(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x38));
  (*(float * PTR32 *)(gen_frame + 0x34)) = pfVar16;
  uVar17 = F_00d36ec0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x3c));
  (*(uint *)(gen_frame + 0x30)) = uVar17;
  (*(uint *)(gen_frame + 0x3c)) = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar17 = F_00d37a60(*(undefined4 *)(param_1 + 0x38),*(int *)(param_1 + 0x20));
    (*(uint *)(gen_frame + 0x3c)) = uVar17;
  }
  (*(uint *)(gen_frame + 0x90)) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar17 = F_00d37a70(*(undefined4 *)(param_1 + 0x38),*(int *)(param_1 + 0x1c));
    (*(uint *)(gen_frame + 0x90)) = uVar17;
  }
  if (*(char *)(param_1 + 0x4d) != '\0') {
    (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = (*(undefined4 * PTR32 *)(gen_frame + 0x94));
    (*(int *)(gen_frame + 0x98)) = 0;
    if (*(short *)(param_1 + 0x4a) != 0) {
      puVar15 = (*(undefined4 * PTR32 *)(gen_frame + 0x94)) + 0x30;
      (*(undefined4 * PTR32 *)(gen_frame + 0x94)) = puVar15;
      do {
        (*(undefined4 * PTR32 *)(gen_frame + 0x94)) = puVar15;
        pvVar14 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
        puVar20 = *(undefined4 * PTR32 *)((int)pvVar14 + 4);
        (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = pvVar14;
        if (puVar20 < *(undefined4 * PTR32 *)((int)pvVar14 + 0xc)) {
          *puVar20 = "StAnimDMA";
          uVar4 = rdtsc();
          (*(gen_v16 * PTR32 *)(gen_frame + 0x9c)) = (gen_v16 *)uVar4;
          puVar20[1] = (gen_v16 *)uVar4;
          *(undefined4 * PTR32 *)((int)pvVar14 + 4) = puVar20 + 3;
        }
        if ((*(int *)(gen_frame + 0x98)) < (int)(*(ushort *)(param_1 + 0x4a) - 1)) {
          *(*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x88)) = puVar15 + 2;
        }
        pvVar14 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
        puVar20 = *(undefined4 * PTR32 *)((int)pvVar14 + 4);
        (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = pvVar14;
        if (puVar20 < *(undefined4 * PTR32 *)((int)pvVar14 + 0xc)) {
          *puVar20 = "StSample";
          uVar4 = rdtsc();
          (*(undefined4 *)(gen_frame + 0x28)) = (int)uVar4;
          puVar20[1] = (int)uVar4;
          *(undefined4 * PTR32 *)((int)pvVar14 + 4) = puVar20 + 3;
        }
        uVar17 = F_00d36f00(*(undefined4 *)(param_1 + 0x38),*puVar15);
        (*(uint *)(gen_frame + 0xa0)) = uVar17;
        pauVar18 = (gen_v16 *)F_00d36f20(*(undefined4 *)(param_1 + 0x3c),puVar15[1]);
        (*(uint *)(gen_frame + 0x44)) = (*(uint *)(gen_frame + 0xa0));
        (*(gen_v16 * PTR32 *)(gen_frame + 0x8c)) = pauVar18;
        (*(gen_v16 * PTR32 *)(gen_frame + 0x50)) = pauVar18;
        (*(int *)(gen_frame + 0x4c)) = *(int *)(param_1 + 0x3c);
        (*(float * PTR32 *)(gen_frame + 0x5c)) = (*(float * PTR32 *)(gen_frame + 0x34));
        (*(uint *)(gen_frame + 0x60)) = (*(uint *)(gen_frame + 0x30));
        (*(uint *)(gen_frame + 0x64)) = (*(uint *)(gen_frame + 0x90));
        (*(int *)(gen_frame + 0x40)) = *(int *)(param_1 + 0x38);
        (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x3c));
        uVar17 = F_00d36890(*(int *)(param_1 + 0x38));
        (*(uint *)(gen_frame + 0x48)) = uVar17;
        uVar17 = F_00d36890((*(int *)(gen_frame + 0x4c)));
        (*(uint *)(gen_frame + 0x54)) = uVar17;
        (*(undefined1 *)(gen_frame + 0x6e)) = 1;
        (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = puVar15 + -0x30;
        (*(ushort *)(gen_frame + 0x6c)) = 0x100;
        F_00d37e20(&(*(int *)(gen_frame + 0x40)),*(*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x84)) + 4,puVar15[-4],puVar15 + -0x30,
                     (uint)(*(char *)(param_1 + 0x4e) != '\0'));
        if ((((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x6c)) + 1)) == '\0') && ((*(byte *)(puVar15 + -3) & 0x20) == 0)) &&
           (F_00d93ba0((*(uint *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x48)),(*(int *)(gen_frame + 0x40))), 0 < (*(int *)(gen_frame + 0x4c)))) {
          iVar19 = ((*(int *)(gen_frame + 0x4c)) - 1U >> 2) + 1;
          pauVar18 = (*(gen_v16 * PTR32 *)(gen_frame + 0x50));
          do {
            uVar4 = *((undefined8 *)GEN_TOP((((*(uint *)(gen_frame + 0x54)) - (int)(*(gen_v16 * PTR32 *)(gen_frame + 0x50))) + (int)pauVar18)));
            (*(undefined8 *)(gen_frame + 0x10)) = uVar4;
            uVar3 = *((undefined8 *)GEN_TOP((((*(uint *)(gen_frame + 0x54)) - (int)(*(gen_v16 * PTR32 *)(gen_frame + 0x50))) + 8 + (int)pauVar18)));
            (*(undefined8 *)(gen_frame + 0x18)) = uVar3;
            (*(undefined8 *)((char *)&auVar9 + 8)) = uVar3;
            (*(undefined8 *)((char *)&auVar9 + 0)) = uVar4;
            gen_divps(&(auVar27), &(*pauVar18), &(auVar9));
            memcpy(&(*pauVar18), &(auVar27), sizeof(auVar27) < sizeof(*pauVar18) ? sizeof(auVar27) : sizeof(*pauVar18));
            pauVar18 = pauVar18 + 1;
            iVar19 = iVar19 + -1;
          } while (iVar19 != 0);
        }
        if (*(char *)(param_1 + 0x4c) != '\0') {
          pvVar14 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
          puVar15 = *(undefined4 * PTR32 *)((int)pvVar14 + 4);
          if (puVar15 < *(undefined4 * PTR32 *)((int)pvVar14 + 0xc)) {
            *puVar15 = "StConvertLocalToModel";
            uVar4 = rdtsc();
            (*(undefined4 *)(gen_frame + 0x2c)) = (int)uVar4;
            puVar15[1] = (int)uVar4;
            *(undefined4 * PTR32 *)((int)pvVar14 + 4) = puVar15 + 3;
          }
          F_00d33580(*(undefined4 *)(param_1 + 0x38),(*(uint *)(gen_frame + 0x3c)),(*(uint *)(gen_frame + 0xa0)),(*(uint *)(gen_frame + 0xa0)));
        }
        F_00d36930((*(uint *)(gen_frame + 0x54)),(*(int *)(gen_frame + 0x4c)));
        F_00d36930((*(uint *)(gen_frame + 0x48)),(*(int *)(gen_frame + 0x40)));
        if ((char)(*(ushort *)(gen_frame + 0x6c)) != '\0') {
          F_00d36930((*(gen_v16 * PTR32 *)(gen_frame + 0x50)),(*(int *)(gen_frame + 0x4c)));
          F_00d36980((*(uint *)(gen_frame + 0x44)),(*(int *)(gen_frame + 0x40)));
        }
        pvVar14 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
        pauVar18 = (*(gen_v16 * PTR32 *)(gen_frame + 0x8c));
        puVar15 = *(undefined4 * PTR32 *)((int)pvVar14 + 4);
        if (puVar15 < *(undefined4 * PTR32 *)((int)pvVar14 + 0xc)) {
          *puVar15 = "StOutputDMA";
          uVar4 = rdtsc();
          (*(undefined4 *)(gen_frame + 0x38)) = (int)uVar4;
          puVar15[1] = (int)uVar4;
          *(undefined4 * PTR32 *)((int)pvVar14 + 4) = puVar15 + 3;
        }
        F_00d35ed0(*(undefined4 *)(param_1 + 0x3c),(*(gen_v16 * PTR32 *)(gen_frame + 0x8c)),(*(undefined4 * PTR32 *)(gen_frame + 0xa8))[0x31]);
        F_00d35ef0(*(undefined4 *)(param_1 + 0x38),(*(uint *)(gen_frame + 0xa0)),(*(undefined4 * PTR32 *)(gen_frame + 0xa8))[0x30]);
        F_00d36f40(*(undefined4 *)(param_1 + 0x3c),pauVar18);
        F_00d36f60(*(undefined4 *)(param_1 + 0x38),(*(uint *)(gen_frame + 0xa0)));
        ppuVar12 = (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x88));
        puVar15 = (*(undefined4 * PTR32 *)(gen_frame + 0x94)) + 0x32;
        (*(undefined4 * PTR32 *)(gen_frame + 0x94)) = puVar15;
        (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x88)) = (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x84));
        iVar19 = (*(int *)(gen_frame + 0x98)) + 1;
        (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x84)) = ppuVar12;
        (*(int *)(gen_frame + 0x98)) = iVar19;
      } while (iVar19 < (int)(uint)*(ushort *)(param_1 + 0x4a));
    }
    goto LAB_00d396d0;
  }
  uVar17 = F_00d36f00(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x28));
  (*(uint *)(gen_frame + 0xa0)) = uVar17;
  pauVar18 = (gen_v16 *)
             F_00d36f20(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x2c));
  (*(gen_v16 * PTR32 *)(gen_frame + 0x9c)) = pauVar18;
  pvVar14 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar15 = *(undefined4 * PTR32 *)((int)pvVar14 + 4);
  if (puVar15 < *(undefined4 * PTR32 *)((int)pvVar14 + 0xc)) {
    *puVar15 = "StInitBuffers";
    uVar4 = rdtsc();
    (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)uVar4;
    puVar15[1] = (undefined4 *)uVar4;
    *(undefined4 * PTR32 *)((int)pvVar14 + 4) = puVar15 + 3;
  }
  iVar19 = *(int *)(param_1 + 0x3c);
  (*(uint *)(gen_frame + 0x44)) = (*(uint *)(gen_frame + 0xa0));
  (*(gen_v16 * PTR32 *)(gen_frame + 0x50)) = (*(gen_v16 * PTR32 *)(gen_frame + 0x9c));
  (*(float * PTR32 *)(gen_frame + 0x5c)) = (*(float * PTR32 *)(gen_frame + 0x34));
  (*(uint *)(gen_frame + 0x60)) = (*(uint *)(gen_frame + 0x30));
  (*(uint *)(gen_frame + 0x64)) = (*(uint *)(gen_frame + 0x90));
  (*(int *)(gen_frame + 0x40)) = *(int *)(param_1 + 0x38);
  (*(int *)(gen_frame + 0x4c)) = iVar19;
  (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x3c));
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x6c)) + 0)) = 0;
  (*(ushort *)(gen_frame + 0x6c)) = (ushort)(*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x6c)) + 1)) << 8;
  (*(undefined1 *)(gen_frame + 0x6e)) = 0;
  uVar17 = F_00d36890(*(int *)(param_1 + 0x38));
  (*(uint *)(gen_frame + 0x48)) = uVar17;
  uVar17 = F_00d36890(iVar19);
  (*(uint *)(gen_frame + 0x54)) = uVar17;
  uVar17 = (uint)*(ushort *)(param_1 + 0x4a);
  if ((uVar17 == 1) && ((*(byte *)((*(undefined4 * PTR32 *)(gen_frame + 0x94)) + 0x2d) & 0x20) == 0)) {
    uVar13 = (undefined1)*(ushort *)(param_1 + 0x4a);
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x6c)) + 1)) = uVar13;
    (*(ushort *)(gen_frame + 0x6c)) = CONCAT11(uVar13,(char)(*(ushort *)(gen_frame + 0x6c)));
    if ((!GEN_ISNAN(*(float *)(param_1 + 0x44)) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
        !(*(float *)(param_1 + 0x44) <= *(float *)&REFG(undefined, 0x1088114))) goto LAB_00d391de;
  }
  else {
LAB_00d391de: ;
    uVar11 = (*(ushort *)(gen_frame + 0x6c));
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x6c)) + 1)) = 0;
    (*(ushort *)(gen_frame + 0x6c)) = uVar11 & 0xff;
  }
  pauVar18 = (gen_v16 *)0x0;
  (*(gen_v16 * PTR32 *)(gen_frame + 0x70)) = (gen_v16 *)0x0;
  (*(uint *)(gen_frame + 0x74)) = 0;
  (*(uint *)(gen_frame + 0x78)) = 0x80000000;
  (*(uint *)(gen_frame + 0x80)) = uVar17;
  if (uVar17 != 0) {
    pvVar14 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pauVar18 = *(undefined1 (**) [16])((int)pvVar14 + 0xc);
    uVar22 = uVar17 * 4 + 0x7f & 0xffffff80;
    (*(gen_v16 * PTR32 *)(gen_frame + 0x8c)) = pauVar18;
    if ((*(int *)((int)pvVar14 + 8) < (int)uVar22) ||
       (*(undefined1 * PTR32 *)((int)pvVar14 + 0x10) < *pauVar18 + uVar22)) {
      pauVar18 = (gen_v16 *)F_00d94390(pvVar14,uVar22);
    }
    else {
      *(undefined1 * PTR32 *)((int)pvVar14 + 0xc) = *pauVar18 + uVar22;
    }
  }
  uVar17 = uVar17 | 0x80000000;
  (*(gen_v16 * PTR32 *)(gen_frame + 0x70)) = pauVar18;
  (*(uint *)(gen_frame + 0x78)) = uVar17;
  (*(gen_v16 * PTR32 *)(gen_frame + 0x7c)) = pauVar18;
  (*(uint *)(gen_frame + 0x90)) = 0;
  do {
    (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)0x0;
    if (*(short *)(param_1 + 0x4a) != 0) {
      (*(gen_v16 * PTR32 *)(gen_frame + 0x8c)) = (gen_v16 *)(uint)((*(uint *)(gen_frame + 0x90)) == 1);
      puVar15 = (*(undefined4 * PTR32 *)(gen_frame + 0x94));
      do {
        if ((gen_v16 *)((uint)puVar15[0x2d] >> 5 & 1) == (*(gen_v16 * PTR32 *)(gen_frame + 0x8c))) {
          if ((*(uint *)(gen_frame + 0x74)) == (uVar17 & 0x3fffffff)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(gen_v16 * PTR32 *)(gen_frame + 0x70)),4);
          }
          *(undefined4 * PTR32 *)(*(*(gen_v16 * PTR32 *)(gen_frame + 0x70)) + (*(uint *)(gen_frame + 0x74)) * 4) = puVar15;
          (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) + 1;
          uVar17 = (*(uint *)(gen_frame + 0x78));
        }
        puVar20 = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0xa8)) + 1);
        puVar15 = puVar15 + 0x32;
        (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = puVar20;
      } while ((int)puVar20 < (int)(uint)*(ushort *)(param_1 + 0x4a));
    }
    uVar22 = (*(uint *)(gen_frame + 0x90)) + 1;
    (*(uint *)(gen_frame + 0x90)) = uVar22;
  } while ((int)uVar22 < 2);
  (*(char *)(gen_frame + 0xaf)) = '\0';
  if ((*(uint *)(*(int *)*(*(gen_v16 * PTR32 *)(gen_frame + 0x70)) + 0xb4) >> 5 & 1) == 0) {
    if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x6c)) + 1)) == '\0') {
      F_00d37ab0(&(*(int *)(gen_frame + 0x40)));
    }
  }
  else {
    F_00da1010((*(uint *)(gen_frame + 0xa0)),(*(float * PTR32 *)(gen_frame + 0x34)),(*(int *)(gen_frame + 0x40)) * 0x30);
    F_00da1010((*(gen_v16 * PTR32 *)(gen_frame + 0x9c)),(*(uint *)(gen_frame + 0x30)),(*(int *)(gen_frame + 0x4c)) * 4);
    (*(char *)(gen_frame + 0xaf)) = '\x01';
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = *(undefined4 * PTR32 *)*(*(gen_v16 * PTR32 *)(gen_frame + 0x70));
  (*(int *)(gen_frame + 0x98)) = 0;
  if (*(short *)(param_1 + 0x4a) != 0) {
    do {
      pvVar14 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
      puVar15 = *(undefined4 * PTR32 *)((int)pvVar14 + 4);
      if (puVar15 < *(undefined4 * PTR32 *)((int)pvVar14 + 0xc)) {
        *puVar15 = "StAnimDMA";
        uVar4 = rdtsc();
        (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)uVar4;
        puVar15[1] = (undefined4 *)uVar4;
        *(undefined4 * PTR32 *)((int)pvVar14 + 4) = puVar15 + 3;
      }
      if ((*(int *)(gen_frame + 0x98)) < (int)(*(ushort *)(param_1 + 0x4a) - 1)) {
        *(*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x88)) = *(undefined4 * PTR32 *)(*(*(gen_v16 * PTR32 *)(gen_frame + 0x70)) + (*(int *)(gen_frame + 0x98)) * 4 + 4);
      }
      pvVar14 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
      iVar19 = (*(int *)(gen_frame + 0x98));
      puVar15 = *(undefined4 * PTR32 *)((int)pvVar14 + 4);
      if (puVar15 < *(undefined4 * PTR32 *)((int)pvVar14 + 0xc)) {
        *puVar15 = "StSample";
        uVar4 = rdtsc();
        (*(undefined4 *)(gen_frame + 0x38)) = (int)uVar4;
        puVar15[1] = (int)uVar4;
        *(undefined4 * PTR32 *)((int)pvVar14 + 4) = puVar15 + 3;
      }
      F_00d37e20(&(*(int *)(gen_frame + 0x40)),*(*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x84)) + 4,
                   *((undefined4 *)GEN_TOP((*(int *)(*(*(gen_v16 * PTR32 *)(gen_frame + 0x70)) + (*(int *)(gen_frame + 0x98)) * 4) + 0xb0))),
                   *(int *)(*(*(gen_v16 * PTR32 *)(gen_frame + 0x70)) + (*(int *)(gen_frame + 0x98)) * 4),(uint)(*(char *)(param_1 + 0x4e) != '\0'));
      if ((((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x6c)) + 1)) == '\0') && ((*(char *)(gen_frame + 0xaf)) == '\0')) &&
         ((iVar19 == *(ushort *)(param_1 + 0x4a) - 1 ||
          ((*((byte *)GEN_TOP((*(int *)(*(*(gen_v16 * PTR32 *)(gen_frame + 0x70)) + iVar19 * 4 + 4) + 0xb4))) & 0x20) != 0)))) {
        fVar2 = *(float *)(param_1 + 0x44);
        if (((!GEN_ISNAN(fVar2) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(fVar2 <= *(float *)&REFG(undefined, 0x1088114)))
           && (iVar21 = 0, 0 < (*(int *)(gen_frame + 0x40)))) {
          pauVar18 = (gen_v16 *)((*(uint *)(gen_frame + 0x44)) + 0x10);
          pauVar23 = (gen_v16 *)((int)(*(float * PTR32 *)(gen_frame + 0x5c)) - (*(uint *)(gen_frame + 0x44)));
          (*(gen_v16 * PTR32 *)(gen_frame + 0x8c)) = pauVar23;
          pfVar16 = (*(float * PTR32 *)(gen_frame + 0x5c));
          do {
            fVar33 = *(float *)((*(uint *)(gen_frame + 0x48)) + iVar21 * 4);
            if (fVar33 <= fVar2) {
              fVar33 = fVar2 - fVar33;
              fVar5 = pfVar16[1];
              fVar6 = pfVar16[2];
              fVar7 = pfVar16[3];
              fVar8 = *(float *)(pauVar18[-1] + 4);
              fVar26 = *(float *)(pauVar18[-1] + 8);
              fVar28 = *(float *)(pauVar18[-1] + 0xc);
              *(float *)pauVar18[-1] = fVar33 * *pfVar16 + *(float *)pauVar18[-1];
              *(float *)(pauVar18[-1] + 4) = fVar33 * fVar5 + fVar8;
              *(float *)(pauVar18[-1] + 8) = fVar33 * fVar6 + fVar26;
              *(float *)(pauVar18[-1] + 0xc) = fVar33 * fVar7 + fVar28;
              pfVar1 = ((float *)GEN_TOP(((int)(pauVar18 + 1) + (int)pauVar23)));
              fVar5 = pfVar1[1];
              fVar6 = pfVar1[2];
              fVar7 = pfVar1[3];
              fVar8 = *(float *)(pauVar18[1] + 4);
              fVar26 = *(float *)(pauVar18[1] + 8);
              fVar28 = *(float *)(pauVar18[1] + 0xc);
              *(float *)pauVar18[1] = *pfVar1 * fVar33 + *(float *)pauVar18[1];
              *(float *)(pauVar18[1] + 4) = fVar5 * fVar33 + fVar8;
              *(float *)(pauVar18[1] + 8) = fVar6 * fVar33 + fVar26;
              *(float *)(pauVar18[1] + 0xc) = fVar7 * fVar33 + fVar28;
              pfVar1 = (float *)(*pauVar18 + (int)*pauVar23);
              fVar5 = *pfVar1;
              fVar6 = pfVar1[1];
              fVar7 = pfVar1[2];
              fVar8 = pfVar1[3];
              fVar26 = fVar5 * *(float *)*pauVar18;
              fVar28 = fVar6 * *(float *)(*pauVar18 + 4);
              fVar29 = fVar7 * *(float *)(*pauVar18 + 8);
              fVar30 = fVar8 * *(float *)(*pauVar18 + 0xc);
              fVar31 = fVar29 + fVar26;
              fVar32 = fVar30 + fVar28;
              fVar26 = fVar26 + fVar29;
              fVar28 = fVar28 + fVar30;
              uVar17 = -(uint)(fVar32 + fVar31 < 0.0);
              uVar22 = -(uint)(fVar31 + fVar32 < 0.0);
              uVar24 = -(uint)(fVar28 + fVar26 < 0.0);
              uVar25 = -(uint)(fVar26 + fVar28 < 0.0);
              (*(float *)((char *)&auVar27 + 0)) =
                   gen_bits2f(((uint)gen_fl2bits(fVar5) ^ *(uint *)&REFG(undefined, 0x10ab9c0)) & uVar17 |
                              ~uVar17 & (uint)gen_fl2bits(fVar5)) * fVar33 + *(float *)*pauVar18;
              (*(float *)((char *)&auVar27 + 4)) =
                   gen_bits2f(((uint)gen_fl2bits(fVar6) ^ *(uint *)&REFG(undefined, 0x10ab9c4)) & uVar22 |
                              ~uVar22 & (uint)gen_fl2bits(fVar6)) * fVar33 +
                   *(float *)(*pauVar18 + 4);
              (*(float *)((char *)&auVar27 + 8)) =
                   gen_bits2f(((uint)gen_fl2bits(fVar7) ^ *(uint *)&REFG(undefined, 0x10ab9c8)) & uVar24 |
                              ~uVar24 & (uint)gen_fl2bits(fVar7)) * fVar33 +
                   *(float *)(*pauVar18 + 8);
              (*(float *)((char *)&auVar27 + 12)) =
                   gen_bits2f(((uint)gen_fl2bits(fVar8) ^ *(uint *)&REFG(undefined, 0x10ab9cc)) & uVar25 |
                              ~uVar25 & (uint)gen_fl2bits(fVar8)) * fVar33 +
                   *(float *)(*pauVar18 + 0xc);
              memcpy(&(*pauVar18), &(auVar27), sizeof(auVar27) < sizeof(*pauVar18) ? sizeof(auVar27) : sizeof(*pauVar18));
              *(float *)((*(uint *)(gen_frame + 0x48)) + iVar21 * 4) = *(float *)((*(uint *)(gen_frame + 0x48)) + iVar21 * 4) + fVar33;
            }
            iVar21 = iVar21 + 1;
            pfVar16 = pfVar16 + 0xc;
            pauVar18 = pauVar18 + 3;
            iVar19 = (*(int *)(gen_frame + 0x98));
          } while (iVar21 < (*(int *)(gen_frame + 0x40)));
        }
        F_00d93ba0((*(uint *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x48)),(*(int *)(gen_frame + 0x40)));
        if (0 < (*(int *)(gen_frame + 0x4c))) {
          iVar21 = ((*(int *)(gen_frame + 0x4c)) - 1U >> 2) + 1;
          pauVar18 = (*(gen_v16 * PTR32 *)(gen_frame + 0x50));
          do {
            uVar4 = *((undefined8 *)GEN_TOP(((int)pauVar18 + ((*(uint *)(gen_frame + 0x54)) - (int)(*(gen_v16 * PTR32 *)(gen_frame + 0x50))))));
            (*(undefined8 *)(gen_frame + 0x10)) = uVar4;
            uVar3 = *((undefined8 *)GEN_TOP(((int)pauVar18 + ((*(uint *)(gen_frame + 0x54)) - (int)(*(gen_v16 * PTR32 *)(gen_frame + 0x50))) + 8)));
            (*(undefined8 *)(gen_frame + 0x18)) = uVar3;
            (*(undefined8 *)((char *)&auVar10 + 8)) = uVar3;
            (*(undefined8 *)((char *)&auVar10 + 0)) = uVar4;
            gen_divps(&(auVar27), &(*pauVar18), &(auVar10));
            memcpy(&(*pauVar18), &(auVar27), sizeof(auVar27) < sizeof(*pauVar18) ? sizeof(auVar27) : sizeof(*pauVar18));
            pauVar18 = pauVar18 + 1;
            iVar21 = iVar21 + -1;
          } while (iVar21 != 0);
        }
        (*(char *)(gen_frame + 0xaf)) = '\x01';
      }
      ppuVar12 = (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x88));
      (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x88)) = (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x84));
      (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x84)) = ppuVar12;
      (*(int *)(gen_frame + 0x98)) = iVar19 + 1;
    } while (iVar19 + 1 < (int)(uint)*(ushort *)(param_1 + 0x4a));
  }
  uVar17 = (*(uint *)(gen_frame + 0x80));
  pauVar18 = (*(gen_v16 * PTR32 *)(gen_frame + 0x7c));
  if ((*(gen_v16 * PTR32 *)(gen_frame + 0x7c)) == (*(gen_v16 * PTR32 *)(gen_frame + 0x70))) {
    (*(uint *)(gen_frame + 0x74)) = 0;
  }
  pvVar14 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar17 = uVar17 * 4 + 0x7f & 0xffffff80;
  if (((*(int *)((int)pvVar14 + 8) < (int)uVar17) ||
      (*pauVar18 + uVar17 != *(undefined1 * PTR32 *)((int)pvVar14 + 0xc))) ||
     (*(undefined1 (**) [16])((int)pvVar14 + 0x14) == pauVar18)) {
    F_00d945c0(pvVar14,pauVar18,uVar17);
  }
  else {
    *(undefined1 (**) [16])((int)pvVar14 + 0xc) = pauVar18;
  }
  (*(uint *)(gen_frame + 0x74)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x78))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(gen_v16 * PTR32 *)(gen_frame + 0x70)),(*(uint *)(gen_frame + 0x78)) * 4);
  }
  (*(gen_v16 * PTR32 *)(gen_frame + 0x70)) = (gen_v16 *)0x0;
  (*(uint *)(gen_frame + 0x78)) = 0x80000000;
  F_00d36930((*(uint *)(gen_frame + 0x54)),(*(int *)(gen_frame + 0x4c)));
  F_00d36930((*(uint *)(gen_frame + 0x48)),(*(int *)(gen_frame + 0x40)));
  if ((char)(*(ushort *)(gen_frame + 0x6c)) != '\0') {
    F_00d36930((*(gen_v16 * PTR32 *)(gen_frame + 0x50)),(*(int *)(gen_frame + 0x4c)));
    F_00d36980((*(uint *)(gen_frame + 0x44)),(*(int *)(gen_frame + 0x40)));
  }
  if (*(char *)(param_1 + 0x4c) != '\0') {
    pvVar14 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
    puVar15 = *(undefined4 * PTR32 *)((int)pvVar14 + 4);
    if (puVar15 < *(undefined4 * PTR32 *)((int)pvVar14 + 0xc)) {
      *puVar15 = "StConvertLocalToModel";
      uVar4 = rdtsc();
      (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = (undefined4 *)uVar4;
      puVar15[1] = (undefined4 *)uVar4;
      *(undefined4 * PTR32 *)((int)pvVar14 + 4) = puVar15 + 3;
    }
    F_00d33580(*(undefined4 *)(param_1 + 0x38),(*(uint *)(gen_frame + 0x3c)),(*(uint *)(gen_frame + 0xa0)),(*(uint *)(gen_frame + 0xa0)));
  }
  pvVar14 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  pauVar18 = (*(gen_v16 * PTR32 *)(gen_frame + 0x9c));
  puVar15 = *(undefined4 * PTR32 *)((int)pvVar14 + 4);
  if (puVar15 < *(undefined4 * PTR32 *)((int)pvVar14 + 0xc)) {
    *puVar15 = "StOutputDMA";
    uVar4 = rdtsc();
    (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = (undefined4 *)uVar4;
    puVar15[1] = (undefined4 *)uVar4;
    *(undefined4 * PTR32 *)((int)pvVar14 + 4) = puVar15 + 3;
  }
  F_00d35ed0(*(undefined4 *)(param_1 + 0x3c),(*(gen_v16 * PTR32 *)(gen_frame + 0x9c)),*(undefined4 *)(param_1 + 0x2c));
  F_00d35ef0(*(undefined4 *)(param_1 + 0x38),(*(uint *)(gen_frame + 0xa0)),*(undefined4 *)(param_1 + 0x28));
  F_00d36f40(*(undefined4 *)(param_1 + 0x3c),pauVar18);
  F_00d36f60(*(undefined4 *)(param_1 + 0x38),(*(uint *)(gen_frame + 0xa0)));
LAB_00d396d0: ;
  if (*(int *)(param_1 + 0x1c) != 0) {
    F_00d37a80();
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    F_00d37a90();
  }
  F_00d36f80(*(undefined4 *)(param_1 + 0x3c),(*(uint *)(gen_frame + 0x30)));
  F_00d36fa0(*(undefined4 *)(param_1 + 0x38),(*(float * PTR32 *)(gen_frame + 0x34)));
  F_00d37aa0();
  pvVar14 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar15 = *(undefined4 * PTR32 *)((int)pvVar14 + 4);
  if (puVar15 < *(undefined4 * PTR32 *)((int)pvVar14 + 0xc)) {
    *puVar15 = &REFG(undefined, 0x1134dd0);
    uVar4 = rdtsc();
    (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = (undefined4 *)uVar4;
    puVar15[1] = (undefined4 *)uVar4;
    *(undefined4 * PTR32 *)((int)pvVar14 + 4) = puVar15 + 3;
  }
  return 0;
}

/* ref: FUN_00d39790 */
uint F_00d39790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd39790u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_3[1];
  uVar8 = param_3[2];
  uVar9 = param_3[3];
  *(uint *)this = *param_2 & *param_1 | ~*param_1 & *param_3;
  *(uint *)((int)this + 4) = uVar4 & uVar1 | ~uVar1 & uVar7;
  *(uint *)((int)this + 8) = uVar5 & uVar2 | ~uVar2 & uVar8;
  *(uint *)((int)this + 0xc) = uVar6 & uVar3 | ~uVar3 & uVar9;
  return (uint)param_3;
}

/* ref: FUN_00d397c0 */
uint F_00d397c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd397c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined8 uVar1;
  
  uVar1 = rdtsc();
  *(uint *)((int)this + 4) = (uint)uVar1;
  return (uint)uVar1;
}

/* ref: FUN_00d397e0 */
uint F_00d397e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd397e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return (uint)param_1;
}

/* ref: FUN_00d39800 */
uint F_00d39800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39800u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = in_ecx[1];
  fVar2 = in_ecx[2];
  fVar3 = in_ecx[3];
  *param_2 = 0.0 - *in_ecx;
  param_2[1] = 0.0 - fVar1;
  param_2[2] = 0.0 - fVar2;
  param_2[3] = 0.0 - fVar3;
  return (uint)param_2;
}

/* ref: FUN_00d39820 */
uint F_00d39820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39820u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = in_ecx[1];
  fVar2 = in_ecx[2];
  fVar3 = in_ecx[3];
  *param_2 = -(uint)(*in_ecx < 0.0);
  param_2[1] = -(uint)(fVar1 < 0.0);
  param_2[2] = -(uint)(fVar2 < 0.0);
  param_2[3] = -(uint)(fVar3 < 0.0);
  return (uint)param_2;
}

/* ref: FUN_00d39840 */
uint F_00d39840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd39840u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_3[1];
  uVar8 = param_3[2];
  uVar9 = param_3[3];
  *(uint *)this = *param_2 & *param_1 | ~*param_1 & *param_3;
  *(uint *)((int)this + 4) = uVar4 & uVar1 | ~uVar1 & uVar7;
  *(uint *)((int)this + 8) = uVar5 & uVar2 | ~uVar2 & uVar8;
  *(uint *)((int)this + 0xc) = uVar6 & uVar3 | ~uVar3 & uVar9;
  return (uint)param_3;
}

/* ref: FUN_00d39870 */
unsigned int F_00d39870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd39870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00d93ba0(param_1,param_2,param_3);
  return 0;
}

/* ref: FUN_00d39880 */
uint F_00d39880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd39880u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
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
  *(float *)this = *param_1 * *param_2;
  *(float *)((int)this + 4) = fVar1 * fVar4;
  *(float *)((int)this + 8) = fVar2 * fVar5;
  *(float *)((int)this + 0xc) = fVar3 * fVar6;
  return (uint)param_1;
}

/* ref: FUN_00d398d0 */
uint F_00d398d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd398d0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00d39900 */
uint F_00d39900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd39900u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  *(undefined2 *)this = *param_1;
  *(undefined2 *)((int)this + 2) = uVar4;
  *(undefined2 *)((int)this + 4) = uVar1;
  *(undefined2 *)((int)this + 6) = uVar5;
  *(undefined2 *)((int)this + 8) = uVar2;
  *(undefined2 *)((int)this + 10) = uVar6;
  *(undefined2 *)((int)this + 0xc) = uVar3;
  *(undefined2 *)((int)this + 0xe) = uVar7;
  return (uint)param_1;
}

/* ref: FUN_00d39920 */
uint F_00d39920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd39920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  uVar1 = *(undefined2 *)(param_1 + 10);
  uVar2 = *(undefined2 *)(param_1 + 0xc);
  uVar3 = *(undefined2 *)(param_1 + 0xe);
  uVar4 = *(undefined2 *)(param_2 + 8);
  uVar5 = *(undefined2 *)(param_2 + 10);
  uVar6 = *(undefined2 *)(param_2 + 0xc);
  uVar7 = *(undefined2 *)(param_2 + 0xe);
  *(undefined2 *)this = *(undefined2 *)(param_1 + 8);
  *(undefined2 *)((int)this + 2) = uVar4;
  *(undefined2 *)((int)this + 4) = uVar1;
  *(undefined2 *)((int)this + 6) = uVar5;
  *(undefined2 *)((int)this + 8) = uVar2;
  *(undefined2 *)((int)this + 10) = uVar6;
  *(undefined2 *)((int)this + 0xc) = uVar3;
  *(undefined2 *)((int)this + 0xe) = uVar7;
  return param_1;
}

/* ref: FUN_00d39940 */
uint F_00d39940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd39940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_1[4];
  uVar5 = param_1[5];
  uVar6 = param_1[6];
  uVar7 = param_1[7];
  uVar8 = *param_2;
  uVar9 = param_2[1];
  uVar10 = param_2[2];
  uVar11 = param_2[3];
  uVar12 = param_2[4];
  uVar13 = param_2[5];
  uVar14 = param_2[6];
  uVar15 = param_2[7];
  *(undefined1 *)this = *param_1;
  *(undefined1 *)((int)this + 1) = uVar8;
  *(undefined1 *)((int)this + 2) = uVar1;
  *(undefined1 *)((int)this + 3) = uVar9;
  *(undefined1 *)((int)this + 4) = uVar2;
  *(undefined1 *)((int)this + 5) = uVar10;
  *(undefined1 *)((int)this + 6) = uVar3;
  *(undefined1 *)((int)this + 7) = uVar11;
  *(undefined1 *)((int)this + 8) = uVar4;
  *(undefined1 *)((int)this + 9) = uVar12;
  *(undefined1 *)((int)this + 10) = uVar5;
  *(undefined1 *)((int)this + 0xb) = uVar13;
  *(undefined1 *)((int)this + 0xc) = uVar6;
  *(undefined1 *)((int)this + 0xd) = uVar14;
  *(undefined1 *)((int)this + 0xe) = uVar7;
  *(undefined1 *)((int)this + 0xf) = uVar15;
  return (uint)param_1;
}

/* ref: FUN_00d39960 */
uint F_00d39960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd39960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  
  uVar1 = *(undefined1 *)(param_1 + 9);
  uVar2 = *(undefined1 *)(param_1 + 10);
  uVar3 = *(undefined1 *)(param_1 + 0xb);
  uVar4 = *(undefined1 *)(param_1 + 0xc);
  uVar5 = *(undefined1 *)(param_1 + 0xd);
  uVar6 = *(undefined1 *)(param_1 + 0xe);
  uVar7 = *(undefined1 *)(param_1 + 0xf);
  uVar8 = *(undefined1 *)(param_2 + 8);
  uVar9 = *(undefined1 *)(param_2 + 9);
  uVar10 = *(undefined1 *)(param_2 + 10);
  uVar11 = *(undefined1 *)(param_2 + 0xb);
  uVar12 = *(undefined1 *)(param_2 + 0xc);
  uVar13 = *(undefined1 *)(param_2 + 0xd);
  uVar14 = *(undefined1 *)(param_2 + 0xe);
  uVar15 = *(undefined1 *)(param_2 + 0xf);
  *(undefined1 *)this = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)((int)this + 1) = uVar8;
  *(undefined1 *)((int)this + 2) = uVar1;
  *(undefined1 *)((int)this + 3) = uVar9;
  *(undefined1 *)((int)this + 4) = uVar2;
  *(undefined1 *)((int)this + 5) = uVar10;
  *(undefined1 *)((int)this + 6) = uVar3;
  *(undefined1 *)((int)this + 7) = uVar11;
  *(undefined1 *)((int)this + 8) = uVar4;
  *(undefined1 *)((int)this + 9) = uVar12;
  *(undefined1 *)((int)this + 10) = uVar5;
  *(undefined1 *)((int)this + 0xb) = uVar13;
  *(undefined1 *)((int)this + 0xc) = uVar6;
  *(undefined1 *)((int)this + 0xd) = uVar14;
  *(undefined1 *)((int)this + 0xe) = uVar7;
  *(undefined1 *)((int)this + 0xf) = uVar15;
  return param_1;
}

/* ref: FUN_00d39980 */
unsigned int F_00d39980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39980u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = in_ecx[1];
  uVar2 = in_ecx[2];
  uVar3 = in_ecx[3];
  fVar4 = (float)(uVar1 >> 0x10) * *(float *)&REFG(undefined, 0x1134dc4);
  fVar5 = (float)(uVar2 >> 0x10) * *(float *)&REFG(undefined, 0x1134dc8);
  fVar6 = (float)(uVar3 >> 0x10) * *(float *)&REFG(undefined, 0x1134dcc);
  *param_2 = (float)(*in_ecx >> 0x10) * *(float *)&REFG(undefined, 0x1134dc0) + (float)(*in_ecx & 0xffff);
  param_2[1] = fVar4 + (float)(uVar1 & 0xffff);
  param_2[2] = fVar5 + (float)(uVar2 & 0xffff);
  param_2[3] = fVar6 + (float)(uVar3 & 0xffff);
  return 0;
}

/* ref: FUN_00d399c0 */
uint F_00d399c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd399c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
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

/* ref: FUN_00d399e0 */
uint F_00d399e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd399e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = *param_1;
  uVar5 = param_1[1];
  uVar6 = param_1[2];
  uVar7 = param_1[3];
  *(undefined2 *)this = *param_2;
  *(undefined2 *)((int)this + 2) = uVar4;
  *(undefined2 *)((int)this + 4) = uVar1;
  *(undefined2 *)((int)this + 6) = uVar5;
  *(undefined2 *)((int)this + 8) = uVar2;
  *(undefined2 *)((int)this + 10) = uVar6;
  *(undefined2 *)((int)this + 0xc) = uVar3;
  *(undefined2 *)((int)this + 0xe) = uVar7;
  return (uint)param_2;
}

/* ref: FUN_00d39a00 */
uint F_00d39a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd39a00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  uVar1 = *(undefined2 *)(param_2 + 10);
  uVar2 = *(undefined2 *)(param_2 + 0xc);
  uVar3 = *(undefined2 *)(param_2 + 0xe);
  uVar4 = *(undefined2 *)(param_1 + 8);
  uVar5 = *(undefined2 *)(param_1 + 10);
  uVar6 = *(undefined2 *)(param_1 + 0xc);
  uVar7 = *(undefined2 *)(param_1 + 0xe);
  *(undefined2 *)this = *(undefined2 *)(param_2 + 8);
  *(undefined2 *)((int)this + 2) = uVar4;
  *(undefined2 *)((int)this + 4) = uVar1;
  *(undefined2 *)((int)this + 6) = uVar5;
  *(undefined2 *)((int)this + 8) = uVar2;
  *(undefined2 *)((int)this + 10) = uVar6;
  *(undefined2 *)((int)this + 0xc) = uVar3;
  *(undefined2 *)((int)this + 0xe) = uVar7;
  return param_2;
}

/* ref: FUN_00d39a20 */
uint F_00d39a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd39a20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  uVar8 = *param_1;
  uVar9 = param_1[1];
  uVar10 = param_1[2];
  uVar11 = param_1[3];
  uVar12 = param_1[4];
  uVar13 = param_1[5];
  uVar14 = param_1[6];
  uVar15 = param_1[7];
  *(undefined1 *)this = *param_2;
  *(undefined1 *)((int)this + 1) = uVar8;
  *(undefined1 *)((int)this + 2) = uVar1;
  *(undefined1 *)((int)this + 3) = uVar9;
  *(undefined1 *)((int)this + 4) = uVar2;
  *(undefined1 *)((int)this + 5) = uVar10;
  *(undefined1 *)((int)this + 6) = uVar3;
  *(undefined1 *)((int)this + 7) = uVar11;
  *(undefined1 *)((int)this + 8) = uVar4;
  *(undefined1 *)((int)this + 9) = uVar12;
  *(undefined1 *)((int)this + 10) = uVar5;
  *(undefined1 *)((int)this + 0xb) = uVar13;
  *(undefined1 *)((int)this + 0xc) = uVar6;
  *(undefined1 *)((int)this + 0xd) = uVar14;
  *(undefined1 *)((int)this + 0xe) = uVar7;
  *(undefined1 *)((int)this + 0xf) = uVar15;
  return (uint)param_2;
}

/* ref: FUN_00d39a40 */
uint F_00d39a40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd39a40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  
  uVar1 = *(undefined1 *)(param_2 + 9);
  uVar2 = *(undefined1 *)(param_2 + 10);
  uVar3 = *(undefined1 *)(param_2 + 0xb);
  uVar4 = *(undefined1 *)(param_2 + 0xc);
  uVar5 = *(undefined1 *)(param_2 + 0xd);
  uVar6 = *(undefined1 *)(param_2 + 0xe);
  uVar7 = *(undefined1 *)(param_2 + 0xf);
  uVar8 = *(undefined1 *)(param_1 + 8);
  uVar9 = *(undefined1 *)(param_1 + 9);
  uVar10 = *(undefined1 *)(param_1 + 10);
  uVar11 = *(undefined1 *)(param_1 + 0xb);
  uVar12 = *(undefined1 *)(param_1 + 0xc);
  uVar13 = *(undefined1 *)(param_1 + 0xd);
  uVar14 = *(undefined1 *)(param_1 + 0xe);
  uVar15 = *(undefined1 *)(param_1 + 0xf);
  *(undefined1 *)this = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((int)this + 1) = uVar8;
  *(undefined1 *)((int)this + 2) = uVar1;
  *(undefined1 *)((int)this + 3) = uVar9;
  *(undefined1 *)((int)this + 4) = uVar2;
  *(undefined1 *)((int)this + 5) = uVar10;
  *(undefined1 *)((int)this + 6) = uVar3;
  *(undefined1 *)((int)this + 7) = uVar11;
  *(undefined1 *)((int)this + 8) = uVar4;
  *(undefined1 *)((int)this + 9) = uVar12;
  *(undefined1 *)((int)this + 10) = uVar5;
  *(undefined1 *)((int)this + 0xb) = uVar13;
  *(undefined1 *)((int)this + 0xc) = uVar6;
  *(undefined1 *)((int)this + 0xd) = uVar14;
  *(undefined1 *)((int)this + 0xe) = uVar7;
  *(undefined1 *)((int)this + 0xf) = uVar15;
  return param_2;
}

/* ref: FUN_00d39a60 */
uint F_00d39a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd39a60u, gen_a0, gen_a1, gen_a2, 0u);
  char * in_ecx = (char *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(bool *)param_2 = *in_ecx == (char)param_3;
  return param_2;
}

/* ref: FUN_00d39a80 */
uint F_00d39a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39a80u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00d39ab0 */
byte F_00d39ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39ab0u, gen_a0, gen_a1, 0u, 0u);
  byte * in_ecx = (byte *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00d39ac0 */
uint F_00d39ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00d39ad0 */
uint F_00d39ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39ad0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = *in_ecx | param_2;
  return param_2;
}

/* ref: FUN_00d39ae0 */
uint F_00d39ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39ae0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return *(*(uint * PTR32 *)&gen_args[0]) & (*(uint *)&gen_args[1]);
}

/* ref: FUN_00d39af0 */
uint F_00d39af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39af0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00d39b00 */
uint F_00d39b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39b00u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00d39b40 */
uint F_00d39b40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd39b40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
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
  *(float *)this = *param_1 * *param_2;
  *(float *)((int)this + 4) = fVar1 * fVar4;
  *(float *)((int)this + 8) = fVar2 * fVar5;
  *(float *)((int)this + 0xc) = fVar3 * fVar6;
  return (uint)param_1;
}

/* ref: FUN_00d39b60 */
uint F_00d39b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd39b60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
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
  *(float *)this = *param_1 * *param_2 + *(float *)this;
  *(float *)((int)this + 4) = fVar1 * fVar4 + *(float *)((int)this + 4);
  *(float *)((int)this + 8) = fVar2 * fVar5 + *(float *)((int)this + 8);
  *(float *)((int)this + 0xc) = fVar3 * fVar6 + *(float *)((int)this + 0xc);
  return (uint)param_1;
}

/* ref: FUN_00d39b90 */
uint F_00d39b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39b90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = *(int *)(in_ecx + 4) == 0;
  return param_2;
}

/* ref: FUN_00d39bc0 */
uint F_00d39bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39bc0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d39c10 */
uint F_00d39c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39c10u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 2;
}

/* ref: FUN_00d39c30 */
uint F_00d39c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39c30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = *(int *)(in_ecx + 4) == 0;
  return param_2;
}

/* ref: FUN_00d39ca0 */
uint F_00d39ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39ca0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = *(int *)(in_ecx + 4) == 0;
  return param_2;
}

/* ref: FUN_00d39cf0 */
unsigned int F_00d39cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd39cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      iVar2 = (int)*(short *)(*param_1 + iVar1 * 2);
      if (iVar2 < param_4) {
        *(undefined1 *)(iVar2 + param_5) = *(undefined1 *)(iVar1 + param_3);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_00d39d30 */
uint F_00d39d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39d30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00d39d80 */
uint F_00d39d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39d80u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d39d90 */
uint F_00d39d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39d90u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00d39db0 */
uint F_00d39db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39db0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00d39de0 */
uint F_00d39de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39de0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00d39e10 */
uint F_00d39e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39e10u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00d39e40 */
uint F_00d39e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39e40u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00d39e70 */
uint F_00d39e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39e70u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00d39f20 */
uint F_00d39f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this,param_1 * 200);
  return uVar1;
}

/* ref: FUN_00d39f80 */
uint F_00d39f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd39f80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this,param_1,param_2 * 200);
  return uVar1;
}

/* ref: FUN_00d39fa0 */
unsigned int F_00d39fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39fa0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *in_ecx = *param_2 * *in_ecx;
  in_ecx[1] = fVar1 * in_ecx[1];
  in_ecx[2] = fVar2 * in_ecx[2];
  in_ecx[3] = fVar3 * in_ecx[3];
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  in_ecx[8] = in_ecx[8] * *param_2;
  in_ecx[9] = in_ecx[9] * fVar1;
  in_ecx[10] = in_ecx[10] * fVar2;
  in_ecx[0xb] = in_ecx[0xb] * fVar3;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  in_ecx[4] = in_ecx[4] * *param_2;
  in_ecx[5] = in_ecx[5] * fVar1;
  in_ecx[6] = in_ecx[6] * fVar2;
  in_ecx[7] = in_ecx[7] * fVar3;
  return 0;
}

/* ref: FUN_00d39fd0 */
uint F_00d39fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39fd0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2;
}

/* ref: FUN_00d39fe0 */
uint F_00d39fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39fe0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x30 + *in_ecx;
}

/* ref: FUN_00d3a000 */
uint F_00d3a000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a000u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d3a010 */
unsigned int F_00d3a010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3a010u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (0 < param_3) {
    puVar1 = param_2;
    iVar2 = param_3;
    do {
      *((undefined4 *)GEN_TOP(((param_1 - (int)param_2) + (int)puVar1))) = *puVar1;
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00d3a040 */
unsigned int F_00d3a040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3a040u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  if (0 < param_3) {
    puVar5 = (undefined4 *)(param_2 + 0xc);
    puVar4 = (undefined4 *)(param_1 + 8);
    do {
      uVar1 = puVar5[-2];
      uVar2 = *((undefined4 *)GEN_TOP(((param_2 - param_1) + (int)puVar4)));
      uVar3 = *puVar5;
      puVar4[-2] = puVar5[-3];
      puVar4[-1] = uVar1;
      *puVar4 = uVar2;
      puVar4[1] = uVar3;
      puVar5 = puVar5 + 4;
      puVar4 = puVar4 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return 0;
}

/* ref: FUN_00d3a090 */
uint F_00d3a090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3a090u, gen_a0, gen_a1, gen_a2, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  int iVar2;
  uint * puVar3;
  
  uVar1 = param_3 - 1;
  iVar2 = param_3;
  puVar3 = param_1;
  if (-1 < (int)uVar1) {
    for (; uVar1 = param_2, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = param_2;
      puVar3 = puVar3 + 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00d3a0d0 */
unsigned int F_00d3a0d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3a0d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_1 + iVar1 * 4) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_00d3a100 */
uint F_00d3a100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd3a100u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d3a120 */
uint F_00d3a120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3a120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return param_1;
}

/* ref: FUN_00d3a160 */
uint F_00d3a160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3a160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 2);
  return uVar1;
}

/* ref: FUN_00d3a1a0 */
uint F_00d3a1a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xd3a1a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00d3a1b0 */
uint F_00d3a1b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd3a1b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d3a1d0 */
uint F_00d3a1d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3a1d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d3a210 */
uint F_00d3a210(unsigned int gen_a0)
{
  GEN_ENTER(0xd3a210u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1138afc);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138af8);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1138af4);
  *param_1 = *(undefined4 *)&REFG(undefined, 0x1138af0);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return (uint)param_1;
}

/* ref: FUN_00d3a230 */
uint F_00d3a230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd3a230u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d3a250 */
uint F_00d3a250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd3a250u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d3a270 */
uint F_00d3a270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd3a270u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d3a290 */
uint F_00d3a290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd3a290u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d3a2b0 */
uint F_00d3a2b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3a2b0u, gen_a0, gen_a1, gen_a2, 0u);
  gen_v16 * param_1 = (gen_v16 *)(uintptr_t)gen_a0;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a1;
  gen_v16 * param_3 = (gen_v16 *)(uintptr_t)gen_a2;
  undefined1 auVar1 [16];
  
  gen_divps(&(auVar1), &(*param_2), &(*param_3));
  memcpy(&(*param_1), &(auVar1), sizeof(auVar1) < sizeof(*param_1) ? sizeof(auVar1) : sizeof(*param_1));
  return (uint)param_2;
}

/* ref: FUN_00d3a2d0 */
uint F_00d3a2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00d3a2f0 */
uint F_00d3a2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00d3a310 */
uint F_00d3a310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a310u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x10) + param_2 * 4)));
}

/* ref: FUN_00d3a330 */
uint F_00d3a330(unsigned int gen_a0)
{
  GEN_ENTER(0xd3a330u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(param_1 + 4);
}

/* ref: FUN_00d3a340 */
uint F_00d3a340(unsigned int gen_a0)
{
  GEN_ENTER(0xd3a340u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(param_1 + 0xc);
}

/* ref: FUN_00d3a350 */
uint F_00d3a350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a350u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = *(uint *)(param_1 + 4) < *(uint *)(param_1 + 0xc);
  return param_2;
}

/* ref: FUN_00d3a370 */
uint F_00d3a370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a370u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined4 *)(param_1 + 4) = param_2;
  return param_1;
}

/* ref: FUN_00d3a3f0 */
uint F_00d3a3f0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3a3f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1 * 200);
  return uVar2;
}

/* ref: FUN_00d3a420 */
unsigned int F_00d3a420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = param_1[1];
  if (iVar1 == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  *(undefined4 *)this = *param_1;
  *(int *)((int)this + 4) = iVar1;
  return 0;
}

/* ref: FUN_00d3a450 */
uint F_00d3a450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1[1] == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  uVar1 = param_1[1] * 2;
  *(undefined4 *)this = *param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00d3a480 */
uint F_00d3a480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1[1] == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  uVar1 = param_1[1] << 6;
  *(undefined4 *)this = *param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00d3a4b0 */
uint F_00d3a4b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1[1] == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  uVar1 = param_1[1] * 0x70;
  *(undefined4 *)this = *param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00d3a4e0 */
uint F_00d3a4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a4e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1[1] == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  uVar1 = param_1[1] * 8;
  *(undefined4 *)this = *param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00d3a510 */
uint F_00d3a510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1[1] == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  uVar1 = param_1[1] * 0x30;
  *(undefined4 *)this = *param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00d3a540 */
uint F_00d3a540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a540u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,param_2 * 200);
  return uVar2;
}

/* ref: FUN_00d3a5a0 */
unsigned int F_00d3a5a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd3a5a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  int * param_6 = (int *)(uintptr_t)gen_a5;
  int param_7 = (int)gen_a6;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  int iVar6;
  int iVar7;
  int local_8;
  
  iVar7 = 0;
  if ((param_3[1] != 0) && (0 < param_5)) {
    local_8 = 0;
    do {
      iVar6 = (int)*(short *)(*param_3 + iVar7 * 2);
      puVar5 = (undefined4 *)(*param_2 + local_8);
      uVar1 = puVar5[1];
      uVar2 = puVar5[2];
      uVar3 = puVar5[3];
      puVar4 = (undefined4 *)(iVar6 * 0x30 + *param_1);
      *puVar4 = *puVar5;
      puVar4[1] = uVar1;
      puVar4[2] = uVar2;
      puVar4[3] = uVar3;
      uVar1 = puVar5[5];
      uVar2 = puVar5[6];
      uVar3 = puVar5[7];
      puVar4[4] = puVar5[4];
      puVar4[5] = uVar1;
      puVar4[6] = uVar2;
      puVar4[7] = uVar3;
      uVar1 = puVar5[9];
      uVar2 = puVar5[10];
      uVar3 = puVar5[0xb];
      puVar4[8] = puVar5[8];
      puVar4[9] = uVar1;
      puVar4[10] = uVar2;
      puVar4[0xb] = uVar3;
      if (param_6[1] == 0) {
        *(undefined1 *)(iVar6 + param_7) = 0xff;
      }
      else {
        *(undefined1 *)(iVar6 + param_7) = *(undefined1 *)(iVar7 + *param_6);
      }
      local_8 = local_8 + 0x30;
      iVar7 = iVar7 + 1;
    } while (iVar7 < param_5);
  }
  return 0;
}

/* ref: FUN_00d3a620 */
unsigned int F_00d3a620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd3a620u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  int * param_6 = (int *)(uintptr_t)gen_a5;
  int param_7 = (int)gen_a6;
  int iVar1;
  int iVar2;
  
  if (param_3[1] != 0) {
    iVar1 = 0;
    if (3 < param_5) {
      do {
        iVar2 = (int)*(short *)(*param_3 + iVar1 * 2);
        *(undefined4 *)(*param_1 + iVar2 * 4) = *(undefined4 *)(*param_2 + iVar1 * 4);
        if (param_6[1] == 0) {
          *(undefined1 *)(iVar2 + param_7) = 0xff;
        }
        else {
          *(undefined1 *)(iVar2 + param_7) = *(undefined1 *)(iVar1 + *param_6);
        }
        iVar2 = (int)*(short *)(*param_3 + 2 + iVar1 * 2);
        *(undefined4 *)(*param_1 + iVar2 * 4) = *(undefined4 *)(*param_2 + 4 + iVar1 * 4);
        if (param_6[1] == 0) {
          *(undefined1 *)(iVar2 + param_7) = 0xff;
        }
        else {
          *(undefined1 *)(iVar2 + param_7) = *(undefined1 *)(*param_6 + 1 + iVar1);
        }
        iVar2 = (int)*(short *)(*param_3 + 4 + iVar1 * 2);
        *(undefined4 *)(*param_1 + iVar2 * 4) = *(undefined4 *)(*param_2 + 8 + iVar1 * 4);
        if (param_6[1] == 0) {
          *(undefined1 *)(iVar2 + param_7) = 0xff;
        }
        else {
          *(undefined1 *)(iVar2 + param_7) = *(undefined1 *)(*param_6 + 2 + iVar1);
        }
        iVar2 = (int)*(short *)(*param_3 + 6 + iVar1 * 2);
        *(undefined4 *)(*param_1 + iVar2 * 4) = *(undefined4 *)(*param_2 + 0xc + iVar1 * 4);
        if (param_6[1] == 0) {
          *(undefined1 *)(iVar2 + param_7) = 0xff;
        }
        else {
          *(undefined1 *)(iVar2 + param_7) = *(undefined1 *)(*param_6 + 3 + iVar1);
        }
        iVar1 = iVar1 + 4;
      } while (iVar1 < param_5 + -3);
    }
    for (; iVar1 < param_5; iVar1 = iVar1 + 1) {
      iVar2 = (int)*(short *)(*param_3 + iVar1 * 2);
      *(undefined4 *)(*param_1 + iVar2 * 4) = *(undefined4 *)(*param_2 + iVar1 * 4);
      if (param_6[1] == 0) {
        *(undefined1 *)(iVar2 + param_7) = 0xff;
      }
      else {
        *(undefined1 *)(iVar2 + param_7) = *(undefined1 *)(iVar1 + *param_6);
      }
    }
  }
  return 0;
}

/* ref: FUN_00d3a770 */
uint F_00d3a770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a770u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x80 + *in_ecx;
}

/* ref: FUN_00d3a790 */
uint F_00d3a790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a790u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x54 + *in_ecx;
}

/* ref: FUN_00d3a7a0 */
uint F_00d3a7a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3a7a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = param_1 * 4 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this,uVar3);
  return uVar2;
}

/* ref: FUN_00d3a7e0 */
uint F_00d3a7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a7e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 * 4 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *(int *)((int)this + 8)) && (uVar1 + param_1 == *(int *)((int)this + 0xc))) &&
     (*(int *)((int)this + 0x14) != param_1)) {
    *(int *)((int)this + 0xc) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00d3a840 */
uint F_00d3a840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3a840u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  *puVar1 = *param_2;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d3a880 */
uint F_00d3a880(unsigned int gen_a0)
{
  GEN_ENTER(0xd3a880u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = param_1 * 4 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this,uVar3);
  return uVar2;
}

/* ref: FUN_00d3a8c0 */
uint F_00d3a8c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a8c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 * 4 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *(int *)((int)this + 8)) && (uVar1 + param_1 == *(int *)((int)this + 0xc))) &&
     (*(int *)((int)this + 0x14) != param_1)) {
    *(int *)((int)this + 0xc) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00d3a960 */
uint F_00d3a960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd3a960u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d3a980 */
uint F_00d3a980(unsigned int gen_a0)
{
  GEN_ENTER(0xd3a980u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = param_1 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this,uVar3);
  return uVar2;
}

/* ref: FUN_00d3a9c0 */
uint F_00d3a9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a9c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *(int *)((int)this + 8)) && (uVar1 + param_1 == *(int *)((int)this + 0xc))) &&
     (*(int *)((int)this + 0x14) != param_1)) {
    *(int *)((int)this + 0xc) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00d3aa10 */
unsigned int F_00d3aa10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3aa10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_2[1];
  fVar9 = param_2[2];
  fVar10 = param_2[3];
  *(float *)this = *param_1 * *param_2 + *(float *)this;
  *(float *)((int)this + 4) = fVar1 * fVar4 + *(float *)((int)this + 4);
  *(float *)((int)this + 8) = fVar2 * fVar9 + *(float *)((int)this + 8);
  *(float *)((int)this + 0xc) = fVar3 * fVar10 + *(float *)((int)this + 0xc);
  fVar1 = param_1[9];
  fVar2 = param_1[10];
  fVar3 = param_1[0xb];
  fVar4 = param_2[1];
  fVar9 = param_2[2];
  fVar10 = param_2[3];
  *(float *)((int)this + 0x20) = param_1[8] * *param_2 + *(float *)((int)this + 0x20);
  *(float *)((int)this + 0x24) = fVar1 * fVar4 + *(float *)((int)this + 0x24);
  *(float *)((int)this + 0x28) = fVar2 * fVar9 + *(float *)((int)this + 0x28);
  *(float *)((int)this + 0x2c) = fVar3 * fVar10 + *(float *)((int)this + 0x2c);
  fVar1 = param_1[4];
  fVar2 = param_1[5];
  fVar3 = param_1[6];
  fVar4 = param_1[7];
  fVar9 = *(float *)((int)this + 0x10) * fVar1;
  fVar10 = *(float *)((int)this + 0x14) * fVar2;
  fVar11 = *(float *)((int)this + 0x18) * fVar3;
  fVar12 = *(float *)((int)this + 0x1c) * fVar4;
  fVar13 = fVar11 + fVar9;
  fVar14 = fVar12 + fVar10;
  fVar9 = fVar9 + fVar11;
  fVar10 = fVar10 + fVar12;
  uVar5 = -(uint)(fVar14 + fVar13 < 0.0);
  uVar6 = -(uint)(fVar13 + fVar14 < 0.0);
  uVar7 = -(uint)(fVar10 + fVar9 < 0.0);
  uVar8 = -(uint)(fVar9 + fVar10 < 0.0);
  uVar15 = (uint)gen_fl2bits(fVar2) ^ *(uint *)&REFG(undefined, 0x10ab9c4);
  uVar16 = (uint)gen_fl2bits(fVar3) ^ *(uint *)&REFG(undefined, 0x10ab9c8);
  uVar17 = (uint)gen_fl2bits(fVar4) ^ *(uint *)&REFG(undefined, 0x10ab9cc);
  fVar9 = param_2[1];
  fVar10 = param_2[2];
  fVar11 = param_2[3];
  *(float *)((int)this + 0x10) =
       gen_bits2f(((uint)gen_fl2bits(fVar1) ^ *(uint *)&REFG(undefined, 0x10ab9c0)) & uVar5 |
                  ~uVar5 & (uint)gen_fl2bits(fVar1)) * *param_2 + *(float *)((int)this + 0x10);
  *(float *)((int)this + 0x14) =
       gen_bits2f(uVar15 & uVar6 | ~uVar6 & (uint)gen_fl2bits(fVar2)) * fVar9 +
       *(float *)((int)this + 0x14);
  *(float *)((int)this + 0x18) =
       gen_bits2f(uVar16 & uVar7 | ~uVar7 & (uint)gen_fl2bits(fVar3)) * fVar10 +
       *(float *)((int)this + 0x18);
  *(float *)((int)this + 0x1c) =
       gen_bits2f(uVar17 & uVar8 | ~uVar8 & (uint)gen_fl2bits(fVar4)) * fVar11 +
       *(float *)((int)this + 0x1c);
  return 0;
}

/* ref: FUN_00d3aa80 */
uint F_00d3aa80(unsigned int gen_a0)
{
  GEN_ENTER(0xd3aa80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  int iVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  iVar3 = param_1 * 0x80;
  uVar1 = *(uint *)((int)this + 0xc);
  uVar2 = uVar1 + iVar3;
  if ((iVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this,iVar3);
  return uVar2;
}

/* ref: FUN_00d3aac0 */
uint F_00d3aac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3aac0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  int iVar2;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  iVar2 = param_2 * 0x80;
  if (((iVar2 <= *(int *)((int)this + 8)) && (iVar2 + param_1 == *(int *)((int)this + 0xc))) &&
     (*(int *)((int)this + 0x14) != param_1)) {
    *(int *)((int)this + 0xc) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this,param_1,iVar2);
  return uVar1;
}

/* ref: FUN_00d3ab10 */
uint F_00d3ab10(unsigned int gen_a0)
{
  GEN_ENTER(0xd3ab10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = param_1 * 0x54 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this,uVar3);
  return uVar2;
}

/* ref: FUN_00d3ab50 */
uint F_00d3ab50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3ab50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 * 0x54 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *(int *)((int)this + 8)) && (uVar1 + param_1 == *(int *)((int)this + 0xc))) &&
     (*(int *)((int)this + 0x14) != param_1)) {
    *(int *)((int)this + 0xc) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00d3aba0 */
uint F_00d3aba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd3aba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d3abc0 */
uint F_00d3abc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3abc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3ac10 */
unsigned int F_00d3ac10(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd3ac10u, gen_a0, 0u, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  float fVar4;
  uint local_c;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x1c))(param_1);
  fVar2 = (float10)(int)(uVar1 - 1);
  if ((int)(uVar1 - 1) < 0) {
    fVar2 = fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar2 = fVar2 * ((float10)param_2 / ((float10)GEN_TOD(gen_bits2f(param_1[3]))));
  local_c = (uint)(longlong)TRUNC(fVar2);
  *param_3 = local_c;
  fVar4 = REFG(float, 0x1087f04);
  if (uVar1 - 2 < local_c) {
    *param_3 = uVar1 - 2;
    *param_4 = fVar4;
    return 0;
  }
  fVar3 = (float10)(int)local_c;
  if ((int)local_c < 0) {
    fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar2 = fVar2 - fVar3;
  fVar4 = (float)fVar2;
  if (fVar2 < (float10)0) {
    *param_4 = 0.0;
    return 0;
  }
  if (REFG(float, 0x1087f04) < fVar4) {
    fVar4 = REFG(float, 0x1087f04);
  }
  *param_4 = fVar4;
  return 0;
}

/* ref: FUN_00d3acf0 */
uint F_00d3acf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd3acf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d3ad10 */
uint F_00d3ad10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd3ad10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d3ad30 */
uint F_00d3ad30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd3ad30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d3ad50 */
uint F_00d3ad50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd3ad50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d3ad70 */
uint F_00d3ad70(unsigned int gen_a0)
{
  GEN_ENTER(0xd3ad70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = param_1 * 200 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this,uVar3);
  return uVar2;
}

/* ref: FUN_00d3adb0 */
uint F_00d3adb0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3adb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = param_1 * 8 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this,uVar3);
  return uVar2;
}

/* ref: FUN_00d3adf0 */
uint F_00d3adf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3adf0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 * 8 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *(int *)((int)this + 8)) && (uVar1 + param_1 == *(int *)((int)this + 0xc))) &&
     (*(int *)((int)this + 0x14) != param_1)) {
    *(int *)((int)this + 0xc) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00d3ae40 */
uint F_00d3ae40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3ae40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 * 200 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *(int *)((int)this + 8)) && (uVar1 + param_1 == *(int *)((int)this + 0xc))) &&
     (*(int *)((int)this + 0x14) != param_1)) {
    *(int *)((int)this + 0xc) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00d3ae90 */
uint F_00d3ae90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3ae90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_v16 * param_1 = (gen_v16 *)(uintptr_t)gen_a1;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a2;
  undefined1 auVar1 [16];
  
  gen_divps(&(auVar1), &(*param_1), &(*param_2));
  memcpy(&(*(gen_v16 *)this), &(auVar1), sizeof(auVar1) < sizeof(*(gen_v16 *)this) ? sizeof(auVar1) : sizeof(*(gen_v16 *)this));
  return (uint)param_1;
}

/* ref: FUN_00d3aeb0 */
uint F_00d3aeb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3aeb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00d3aed0 */
uint F_00d3aed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3aed0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00d3aef0 */
uint F_00d3aef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3aef0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00d3af10 */
uint F_00d3af10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3af10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00d3af30 */
uint F_00d3af30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3af30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  *puVar1 = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d3af70 */
uint F_00d3af70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd3af70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return param_3 | 0x80000000;
}

/* ref: FUN_00d3af90 */
uint F_00d3af90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3af90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_v16 * param_1 = (gen_v16 *)(uintptr_t)gen_a1;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a2;
  undefined1 auVar1 [16];
  
  gen_divps(&(auVar1), &(*param_1), &(*param_2));
  memcpy(&(*(gen_v16 *)this), &(auVar1), sizeof(auVar1) < sizeof(*(gen_v16 *)this) ? sizeof(auVar1) : sizeof(*(gen_v16 *)this));
  return (uint)param_1;
}

/* ref: FUN_00d3afb0 */
uint F_00d3afb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3afb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  LPVOID this_00;
  uint uVar2;
  uint uVar3;
  
  this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  iVar1 = *(int *)((int)this_00 + 0xc);
  uVar3 = param_1 + 0x7fU & 0xffffff80;
  uVar2 = iVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this_00 + 8)) && (uVar2 <= *(uint *)((int)this_00 + 0x10))) {
    *(uint *)((int)this_00 + 0xc) = uVar2;
    *(int *)this = iVar1;
    *(int *)((int)this + 4) = param_1;
    return (uint)this;
  }
  uVar2 = F_00d94390(this_00,uVar3);
  *(uint *)this = uVar2;
  *(int *)((int)this + 4) = param_1;
  return (uint)this;
}

/* ref: FUN_00d3b060 */
uint F_00d3b060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3b060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  LPVOID this_00;
  uint uVar2;
  uint uVar3;
  
  this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  iVar1 = *(int *)((int)this_00 + 0xc);
  uVar3 = param_1 * 0x30 + 0x7fU & 0xffffff80;
  uVar2 = iVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this_00 + 8)) && (uVar2 <= *(uint *)((int)this_00 + 0x10))) {
    *(uint *)((int)this_00 + 0xc) = uVar2;
    *(int *)this = iVar1;
    *(int *)((int)this + 4) = param_1;
    return (uint)this;
  }
  uVar2 = F_00d94390(this_00,uVar3);
  *(uint *)this = uVar2;
  *(int *)((int)this + 4) = param_1;
  return (uint)this;
}

/* ref: FUN_00d3b110 */
uint F_00d3b110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3b110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  LPVOID this_00;
  uint uVar2;
  uint uVar3;
  
  this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  iVar1 = *(int *)((int)this_00 + 0xc);
  uVar3 = param_1 * 4 + 0x7fU & 0xffffff80;
  uVar2 = iVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this_00 + 8)) && (uVar2 <= *(uint *)((int)this_00 + 0x10))) {
    *(uint *)((int)this_00 + 0xc) = uVar2;
    *(int *)this = iVar1;
    *(int *)((int)this + 4) = param_1;
    return (uint)this;
  }
  uVar2 = F_00d94390(this_00,uVar3);
  *(uint *)this = uVar2;
  *(int *)((int)this + 4) = param_1;
  return (uint)this;
}

/* ref: FUN_00d3b1c0 */
uint F_00d3b1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd3b1c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  uint * param_6 = (uint *)(uintptr_t)gen_a5;
  uint * param_7 = (uint *)(uintptr_t)gen_a6;
  uint uVar1;
  int iVar2;
  short * psVar3;
  undefined4 * puVar4;
  
  if (param_3[1] == 0) {
    *param_2 = *param_1;
    *param_5 = param_4;
    uVar1 = *param_6;
    *param_7 = uVar1;
    return uVar1;
  }
  uVar1 = F_00d367f0(param_4);
  *param_7 = uVar1;
  F_00da1030(uVar1,0,param_4);
  *param_5 = 0;
  iVar2 = param_3[1] + -1;
  if (-1 < iVar2) {
    psVar3 = (short *)(*param_3 + iVar2 * 2);
    do {
      if (((-1 < *psVar3) && (*psVar3 < param_4)) &&
         ((param_6[1] == 0 || (*(char *)(iVar2 + *param_6) != '\0')))) {
        *param_5 = iVar2 + 1;
        break;
      }
      psVar3 = psVar3 + -1;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = F_00d368e0(*param_5);
  *param_2 = uVar1;
  iVar2 = param_4 * 0xc;
  uVar1 = iVar2 - 1;
  if (-1 < (int)uVar1) {
    uVar1 = 0;
    puVar4 = (undefined4 *)*param_1;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00d3b280 */
uint F_00d3b280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd3b280u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  uint * param_6 = (uint *)(uintptr_t)gen_a5;
  uint * param_7 = (uint *)(uintptr_t)gen_a6;
  uint uVar1;
  int iVar2;
  short * psVar3;
  undefined4 * puVar4;
  
  if (param_3[1] == 0) {
    *param_2 = *param_1;
    *param_5 = param_4;
    uVar1 = *param_6;
    *param_7 = uVar1;
    return uVar1;
  }
  uVar1 = F_00d367f0(param_4);
  *param_7 = uVar1;
  F_00da1030(uVar1,0,param_4);
  *param_5 = 0;
  iVar2 = param_3[1] + -1;
  if (-1 < iVar2) {
    psVar3 = (short *)(*param_3 + iVar2 * 2);
    do {
      if (((-1 < *psVar3) && (*psVar3 < param_4)) &&
         ((param_6[1] == 0 || (*(char *)(iVar2 + *param_6) != '\0')))) {
        *param_5 = iVar2 + 1;
        break;
      }
      psVar3 = psVar3 + -1;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = F_00d36890(*param_5);
  *param_2 = uVar1;
  uVar1 = param_4 - 1;
  if (-1 < (int)uVar1) {
    uVar1 = 0;
    puVar4 = (undefined4 *)*param_1;
    for (iVar2 = param_4; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00d3b330 */
unsigned int F_00d3b330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd3b330u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  if (*(int *)(param_3 + 4) != 0) {
    F_00d36930(*param_2,param_5);
    F_00d36840(param_7,param_4);
  }
  return 0;
}

/* ref: FUN_00d3b360 */
unsigned int F_00d3b360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd3b360u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  if (*(int *)(param_3 + 4) != 0) {
    F_00d36980(*param_2,param_5);
    F_00d36840(param_7,param_4);
  }
  return 0;
}

/* ref: FUN_00d3b390 */
unsigned int F_00d3b390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd3b390u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint * param_5 = (uint *)(uintptr_t)gen_a4;
  int param_6 = (int)gen_a5;
  float * pfVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  int iVar53;
  float * pfVar54;
  float * pfVar55;
  uint * puVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  
  uVar2 = *param_5;
  uVar3 = param_5[1];
  uVar4 = param_5[2];
  uVar5 = param_5[3];
  iVar53 = (int)(param_6 + 3 + (param_6 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < iVar53) {
    pfVar55 = (float *)(param_3 + 0x50);
    pfVar54 = (float *)(param_1 + 0x50);
    puVar56 = param_2;
    do {
      pfVar1 = ((float *)GEN_TOP(((param_3 - param_1) + -0x50 + (int)pfVar54)));
      fVar33 = *pfVar1;
      fVar34 = pfVar1[1];
      fVar35 = pfVar1[2];
      fVar36 = pfVar1[3];
      fVar6 = pfVar55[-0xf];
      fVar7 = pfVar55[-0xe];
      fVar8 = pfVar55[-0xd];
      fVar9 = pfVar55[-0xc];
      fVar10 = pfVar55[-0xb];
      fVar11 = pfVar55[-10];
      fVar12 = pfVar55[-9];
      fVar37 = pfVar55[8];
      fVar38 = pfVar55[9];
      fVar39 = pfVar55[10];
      fVar40 = pfVar55[0xb];
      fVar41 = pfVar55[0xc];
      fVar42 = pfVar55[0xd];
      fVar43 = pfVar55[0xe];
      fVar44 = pfVar55[0xf];
      fVar45 = pfVar55[0x14];
      fVar46 = pfVar55[0x15];
      fVar47 = pfVar55[0x16];
      fVar48 = pfVar55[0x17];
      fVar13 = pfVar55[-4];
      fVar14 = pfVar55[-3];
      fVar15 = pfVar55[-2];
      fVar16 = pfVar55[-1];
      fVar17 = *pfVar55;
      fVar18 = pfVar55[1];
      fVar19 = pfVar55[2];
      fVar20 = pfVar55[3];
      fVar49 = pfVar55[0x18];
      fVar50 = pfVar55[0x19];
      fVar51 = pfVar55[0x1a];
      fVar52 = pfVar55[0x1b];
      uVar57 = *(uint *)&REFG(undefined, 0x1134d28) & uVar4 | *(uint *)&REFG(undefined, 0x1134d20) & uVar2;
      uVar58 = *(uint *)&REFG(undefined, 0x1134d2c) & uVar5 | *(uint *)&REFG(undefined, 0x1134d24) & uVar3;
      uVar59 = *(uint *)&REFG(undefined, 0x1134d20) & uVar2 | *(uint *)&REFG(undefined, 0x1134d28) & uVar4;
      uVar60 = *(uint *)&REFG(undefined, 0x1134d24) & uVar3 | *(uint *)&REFG(undefined, 0x1134d2c) & uVar5;
      fVar61 = gen_bits2f(uVar58 | uVar57);
      fVar65 = gen_bits2f(uVar57 | uVar58);
      fVar69 = gen_bits2f(uVar60 | uVar59);
      fVar73 = gen_bits2f(uVar59 | uVar60);
      uVar57 = *(uint *)&REFG(undefined, 0x1134d38) & uVar4 | *(uint *)&REFG(undefined, 0x1134d30) & uVar2;
      uVar58 = *(uint *)&REFG(undefined, 0x1134d3c) & uVar5 | *(uint *)&REFG(undefined, 0x1134d34) & uVar3;
      uVar59 = *(uint *)&REFG(undefined, 0x1134d30) & uVar2 | *(uint *)&REFG(undefined, 0x1134d38) & uVar4;
      uVar60 = *(uint *)&REFG(undefined, 0x1134d34) & uVar3 | *(uint *)&REFG(undefined, 0x1134d3c) & uVar5;
      fVar62 = gen_bits2f(uVar58 | uVar57);
      fVar66 = gen_bits2f(uVar57 | uVar58);
      fVar70 = gen_bits2f(uVar60 | uVar59);
      fVar74 = gen_bits2f(uVar59 | uVar60);
      fVar21 = pfVar55[-8];
      fVar22 = pfVar55[-7];
      fVar23 = pfVar55[-6];
      fVar24 = pfVar55[-5];
      uVar57 = *(uint *)&REFG(undefined, 0x1134d48) & uVar4 | *(uint *)&REFG(undefined, 0x1134d40) & uVar2;
      uVar58 = *(uint *)&REFG(undefined, 0x1134d4c) & uVar5 | *(uint *)&REFG(undefined, 0x1134d44) & uVar3;
      uVar59 = *(uint *)&REFG(undefined, 0x1134d40) & uVar2 | *(uint *)&REFG(undefined, 0x1134d48) & uVar4;
      uVar60 = *(uint *)&REFG(undefined, 0x1134d44) & uVar3 | *(uint *)&REFG(undefined, 0x1134d4c) & uVar5;
      fVar63 = gen_bits2f(uVar58 | uVar57);
      fVar67 = gen_bits2f(uVar57 | uVar58);
      fVar71 = gen_bits2f(uVar60 | uVar59);
      fVar75 = gen_bits2f(uVar59 | uVar60);
      fVar25 = pfVar55[4];
      fVar26 = pfVar55[5];
      fVar27 = pfVar55[6];
      fVar28 = pfVar55[7];
      uVar57 = *(uint *)&REFG(undefined, 0x1134d58) & uVar4 | *(uint *)&REFG(undefined, 0x1134d50) & uVar2;
      uVar58 = *(uint *)&REFG(undefined, 0x1134d5c) & uVar5 | *(uint *)&REFG(undefined, 0x1134d54) & uVar3;
      uVar59 = *(uint *)&REFG(undefined, 0x1134d50) & uVar2 | *(uint *)&REFG(undefined, 0x1134d58) & uVar4;
      uVar60 = *(uint *)&REFG(undefined, 0x1134d54) & uVar3 | *(uint *)&REFG(undefined, 0x1134d5c) & uVar5;
      fVar64 = gen_bits2f(uVar58 | uVar57);
      fVar68 = gen_bits2f(uVar57 | uVar58);
      fVar72 = gen_bits2f(uVar60 | uVar59);
      fVar76 = gen_bits2f(uVar59 | uVar60);
      fVar29 = pfVar55[0x10];
      fVar30 = pfVar55[0x11];
      fVar31 = pfVar55[0x12];
      fVar32 = pfVar55[0x13];
      pfVar54[-0x10] = pfVar55[-0x10] * fVar61;
      pfVar54[-0xf] = fVar6 * fVar65;
      pfVar54[-0xe] = fVar7 * fVar69;
      pfVar54[-0xd] = fVar8 * fVar73;
      pfVar54[-0x14] = fVar61 * fVar33;
      pfVar54[-0x13] = fVar65 * fVar34;
      pfVar54[-0x12] = fVar69 * fVar35;
      pfVar54[-0x11] = fVar73 * fVar36;
      pfVar54[-0xc] = fVar9 * fVar61;
      pfVar54[-0xb] = fVar10 * fVar65;
      pfVar54[-10] = fVar11 * fVar69;
      pfVar54[-9] = fVar12 * fVar73;
      pfVar54[-4] = fVar13 * fVar62;
      pfVar54[-3] = fVar14 * fVar66;
      pfVar54[-2] = fVar15 * fVar70;
      pfVar54[-1] = fVar16 * fVar74;
      pfVar54[-8] = fVar62 * fVar21;
      pfVar54[-7] = fVar66 * fVar22;
      pfVar54[-6] = fVar70 * fVar23;
      pfVar54[-5] = fVar74 * fVar24;
      *pfVar54 = fVar17 * fVar62;
      pfVar54[1] = fVar18 * fVar66;
      pfVar54[2] = fVar19 * fVar70;
      pfVar54[3] = fVar20 * fVar74;
      pfVar54[8] = fVar37 * fVar63;
      pfVar54[9] = fVar38 * fVar67;
      pfVar54[10] = fVar39 * fVar71;
      pfVar54[0xb] = fVar40 * fVar75;
      pfVar54[4] = fVar63 * fVar25;
      pfVar54[5] = fVar67 * fVar26;
      pfVar54[6] = fVar71 * fVar27;
      pfVar54[7] = fVar75 * fVar28;
      pfVar54[0xc] = fVar41 * fVar63;
      pfVar54[0xd] = fVar42 * fVar67;
      pfVar54[0xe] = fVar43 * fVar71;
      pfVar54[0xf] = fVar44 * fVar75;
      pfVar54[0x10] = fVar64 * fVar29;
      pfVar54[0x11] = fVar68 * fVar30;
      pfVar54[0x12] = fVar72 * fVar31;
      pfVar54[0x13] = fVar76 * fVar32;
      pfVar54[0x14] = fVar45 * fVar64;
      pfVar54[0x15] = fVar46 * fVar68;
      pfVar54[0x16] = fVar47 * fVar72;
      pfVar54[0x17] = fVar48 * fVar76;
      pfVar54[0x18] = fVar49 * fVar64;
      pfVar54[0x19] = fVar50 * fVar68;
      pfVar54[0x1a] = fVar51 * fVar72;
      pfVar54[0x1b] = fVar52 * fVar76;
      *puVar56 = uVar2;
      puVar56[1] = uVar3;
      puVar56[2] = uVar4;
      puVar56[3] = uVar5;
      puVar56 = puVar56 + 4;
      pfVar55 = pfVar55 + 0x30;
      pfVar54 = pfVar54 + 0x30;
      iVar53 = iVar53 + -1;
    } while (iVar53 != 0);
  }
  return 0;
}

/* ref: FUN_00d3b570 */
uint F_00d3b570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3b570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  LPVOID this_00;
  uint uVar2;
  int iVar3;
  
  this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  iVar1 = *(int *)((int)this_00 + 0xc);
  iVar3 = param_1 * 0x80;
  uVar2 = iVar1 + iVar3;
  if ((iVar3 <= *(int *)((int)this_00 + 8)) && (uVar2 <= *(uint *)((int)this_00 + 0x10))) {
    *(uint *)((int)this_00 + 0xc) = uVar2;
    *(int *)this = iVar1;
    *(int *)((int)this + 4) = param_1;
    return (uint)this;
  }
  uVar2 = F_00d94390(this_00,iVar3);
  *(uint *)this = uVar2;
  *(int *)((int)this + 4) = param_1;
  return (uint)this;
}

/* ref: FUN_00d3b620 */
uint F_00d3b620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3b620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  LPVOID this_00;
  uint uVar2;
  uint uVar3;
  
  this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  iVar1 = *(int *)((int)this_00 + 0xc);
  uVar3 = param_1 * 0x54 + 0x7fU & 0xffffff80;
  uVar2 = iVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this_00 + 8)) && (uVar2 <= *(uint *)((int)this_00 + 0x10))) {
    *(uint *)((int)this_00 + 0xc) = uVar2;
    *(int *)this = iVar1;
    *(int *)((int)this + 4) = param_1;
    return (uint)this;
  }
  uVar2 = F_00d94390(this_00,uVar3);
  *(uint *)this = uVar2;
  *(int *)((int)this + 4) = param_1;
  return (uint)this;
}

/* ref: FUN_00d3b6d0 */
uint F_00d3b6d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd3b6d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return param_3 | 0x80000000;
}

/* ref: FUN_00d3b6f0 */
unsigned int F_00d3b6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd3b6f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  int param_6 = (int)gen_a5;
  float * pfVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  int iVar101;
  float * pfVar102;
  float * pfVar103;
  float * pfVar104;
  uint uVar105;
  uint uVar106;
  uint uVar107;
  uint uVar108;
  uint uVar109;
  uint uVar110;
  uint uVar111;
  uint uVar112;
  uint uVar113;
  uint uVar114;
  uint uVar115;
  uint uVar116;
  uint uVar117;
  uint uVar118;
  uint uVar119;
  uint uVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  uint uVar130;
  float fVar131;
  uint uVar132;
  uint uVar133;
  uint uVar134;
  float fVar135;
  uint uVar136;
  float fVar137;
  uint uVar138;
  float fVar139;
  uint uVar140;
  float fVar141;
  uint uVar142;
  float fVar143;
  uint uVar144;
  float fVar145;
  uint uVar146;
  float fVar147;
  uint uVar148;
  float fVar149;
  uint uVar150;
  float fVar151;
  uint uVar152;
  float fVar153;
  uint uVar154;
  float fVar155;
  uint uVar156;
  float fVar157;
  uint uVar158;
  float fVar159;
  float fVar160;
  float fVar161;
  float fVar162;
  int local_14;
  
  fVar26 = *param_5;
  fVar27 = param_5[1];
  fVar28 = param_5[2];
  fVar29 = param_5[3];
  local_14 = (int)(param_6 + 3 + (param_6 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < local_14) {
    pfVar102 = (float *)(param_1 + 0x50);
    iVar101 = (param_1 - param_3) + -0x50;
    pfVar103 = (float *)(param_3 + 0x50);
    pfVar104 = param_2;
    do {
      pfVar1 = (float *)((int)pfVar103 + iVar101);
      fVar30 = pfVar1[1];
      fVar31 = pfVar1[2];
      fVar32 = pfVar1[3];
      fVar33 = pfVar102[-0x10];
      fVar34 = pfVar102[-0xf];
      fVar35 = pfVar102[-0xe];
      fVar36 = pfVar102[-0xd];
      fVar37 = pfVar102[-8];
      fVar38 = pfVar102[-7];
      fVar39 = pfVar102[-6];
      fVar40 = pfVar102[-5];
      fVar41 = pfVar102[-4];
      fVar42 = pfVar102[-3];
      fVar43 = pfVar102[-2];
      fVar44 = pfVar102[-1];
      fVar45 = *pfVar102;
      fVar46 = pfVar102[1];
      fVar47 = pfVar102[2];
      fVar48 = pfVar102[3];
      fVar49 = pfVar102[4];
      fVar50 = pfVar102[5];
      fVar51 = pfVar102[6];
      fVar52 = pfVar102[7];
      fVar53 = pfVar102[8];
      fVar54 = pfVar102[9];
      fVar55 = pfVar102[10];
      fVar56 = pfVar102[0xb];
      fVar57 = pfVar102[0xc];
      fVar58 = pfVar102[0xd];
      fVar59 = pfVar102[0xe];
      fVar60 = pfVar102[0xf];
      fVar61 = pfVar102[0x10];
      fVar62 = pfVar102[0x11];
      fVar63 = pfVar102[0x12];
      fVar64 = pfVar102[0x13];
      fVar65 = pfVar102[0x14];
      fVar66 = pfVar102[0x15];
      fVar67 = pfVar102[0x16];
      fVar68 = pfVar102[0x17];
      fVar69 = pfVar102[0x18];
      fVar70 = pfVar102[0x19];
      fVar71 = pfVar102[0x1a];
      fVar72 = pfVar102[0x1b];
      fVar73 = pfVar103[-0x10];
      fVar74 = pfVar103[-0xf];
      fVar75 = pfVar103[-0xe];
      fVar76 = pfVar103[-0xd];
      pfVar2 = ((float *)GEN_TOP(((param_4 - (int)param_2) + (int)pfVar104)));
      fVar125 = *pfVar2 * fVar26;
      fVar126 = pfVar2[1] * fVar27;
      fVar127 = pfVar2[2] * fVar28;
      fVar128 = pfVar2[3] * fVar29;
      fVar77 = pfVar103[-8];
      fVar78 = pfVar103[-7];
      fVar79 = pfVar103[-6];
      fVar80 = pfVar103[-5];
      fVar81 = pfVar103[-4];
      fVar82 = pfVar103[-3];
      fVar83 = pfVar103[-2];
      fVar84 = pfVar103[-1];
      fVar85 = pfVar103[4];
      fVar86 = pfVar103[5];
      fVar87 = pfVar103[6];
      fVar88 = pfVar103[7];
      fVar3 = pfVar103[-0xc];
      fVar4 = pfVar103[-0xb];
      fVar5 = pfVar103[-10];
      fVar6 = pfVar103[-9];
      fVar89 = pfVar103[8];
      fVar90 = pfVar103[9];
      fVar91 = pfVar103[10];
      fVar92 = pfVar103[0xb];
      fVar93 = pfVar103[0x10];
      fVar94 = pfVar103[0x11];
      fVar95 = pfVar103[0x12];
      fVar96 = pfVar103[0x13];
      fVar97 = pfVar103[0x14];
      fVar98 = pfVar103[0x15];
      fVar99 = pfVar103[0x16];
      fVar100 = pfVar103[0x17];
      uVar105 = *(uint *)&REFG(undefined, 0x1134d28) & (uint)gen_fl2bits(fVar127) |
                *(uint *)&REFG(undefined, 0x1134d20) & (uint)gen_fl2bits(fVar125);
      uVar106 = *(uint *)&REFG(undefined, 0x1134d2c) & (uint)gen_fl2bits(fVar128) |
                *(uint *)&REFG(undefined, 0x1134d24) & (uint)gen_fl2bits(fVar126);
      uVar107 = *(uint *)&REFG(undefined, 0x1134d20) & (uint)gen_fl2bits(fVar125) |
                *(uint *)&REFG(undefined, 0x1134d28) & (uint)gen_fl2bits(fVar127);
      uVar108 = *(uint *)&REFG(undefined, 0x1134d24) & (uint)gen_fl2bits(fVar126) |
                *(uint *)&REFG(undefined, 0x1134d2c) & (uint)gen_fl2bits(fVar128);
      fVar135 = gen_bits2f(uVar106 | uVar105);
      fVar137 = gen_bits2f(uVar105 | uVar106);
      fVar139 = gen_bits2f(uVar108 | uVar107);
      fVar141 = gen_bits2f(uVar107 | uVar108);
      fVar7 = *pfVar103;
      fVar8 = pfVar103[1];
      fVar9 = pfVar103[2];
      fVar10 = pfVar103[3];
      fVar11 = pfVar103[0xc];
      fVar12 = pfVar103[0xd];
      fVar13 = pfVar103[0xe];
      fVar14 = pfVar103[0xf];
      fVar15 = pfVar103[0x18];
      fVar16 = pfVar103[0x19];
      fVar17 = pfVar103[0x1a];
      fVar18 = pfVar103[0x1b];
      fVar19 = pfVar102[-0xc];
      fVar20 = pfVar102[-0xb];
      fVar21 = pfVar102[-10];
      fVar22 = pfVar102[-9];
      fVar23 = pfVar103[-0x13];
      fVar24 = pfVar103[-0x12];
      fVar25 = pfVar103[-0x11];
      fVar121 = fVar73 * fVar33;
      fVar122 = fVar74 * fVar34;
      fVar123 = fVar75 * fVar35;
      fVar124 = fVar76 * fVar36;
      fVar129 = fVar123 + fVar121;
      fVar131 = fVar124 + fVar122;
      fVar121 = fVar121 + fVar123;
      fVar122 = fVar122 + fVar124;
      uVar105 = -(uint)(fVar131 + fVar129 < 0.0);
      uVar109 = -(uint)(fVar129 + fVar131 < 0.0);
      uVar113 = -(uint)(fVar122 + fVar121 < 0.0);
      uVar117 = -(uint)(fVar121 + fVar122 < 0.0);
      uVar130 = (uint)gen_fl2bits(fVar73) ^ *(uint *)&REFG(undefined, 0x10ab9c0);
      uVar132 = (uint)gen_fl2bits(fVar74) ^ *(uint *)&REFG(undefined, 0x10ab9c4);
      uVar133 = (uint)gen_fl2bits(fVar75) ^ *(uint *)&REFG(undefined, 0x10ab9c8);
      uVar134 = (uint)gen_fl2bits(fVar76) ^ *(uint *)&REFG(undefined, 0x10ab9cc);
      uVar106 = *(uint *)&REFG(undefined, 0x1134d38) & (uint)gen_fl2bits(fVar127) |
                *(uint *)&REFG(undefined, 0x1134d30) & (uint)gen_fl2bits(fVar125);
      uVar107 = *(uint *)&REFG(undefined, 0x1134d3c) & (uint)gen_fl2bits(fVar128) |
                *(uint *)&REFG(undefined, 0x1134d34) & (uint)gen_fl2bits(fVar126);
      uVar108 = *(uint *)&REFG(undefined, 0x1134d30) & (uint)gen_fl2bits(fVar125) |
                *(uint *)&REFG(undefined, 0x1134d38) & (uint)gen_fl2bits(fVar127);
      uVar110 = *(uint *)&REFG(undefined, 0x1134d34) & (uint)gen_fl2bits(fVar126) |
                *(uint *)&REFG(undefined, 0x1134d3c) & (uint)gen_fl2bits(fVar128);
      fVar143 = gen_bits2f(uVar107 | uVar106);
      fVar145 = gen_bits2f(uVar106 | uVar107);
      fVar147 = gen_bits2f(uVar110 | uVar108);
      fVar149 = gen_bits2f(uVar108 | uVar110);
      fVar121 = fVar81 * fVar41;
      fVar122 = fVar82 * fVar42;
      fVar123 = fVar83 * fVar43;
      fVar124 = fVar84 * fVar44;
      fVar129 = fVar123 + fVar121;
      fVar131 = fVar124 + fVar122;
      fVar121 = fVar121 + fVar123;
      fVar122 = fVar122 + fVar124;
      uVar106 = -(uint)(fVar131 + fVar129 < 0.0);
      uVar110 = -(uint)(fVar129 + fVar131 < 0.0);
      uVar114 = -(uint)(fVar122 + fVar121 < 0.0);
      uVar118 = -(uint)(fVar121 + fVar122 < 0.0);
      uVar136 = (uint)gen_fl2bits(fVar81) ^ *(uint *)&REFG(undefined, 0x10ab9c0);
      uVar138 = (uint)gen_fl2bits(fVar82) ^ *(uint *)&REFG(undefined, 0x10ab9c4);
      uVar140 = (uint)gen_fl2bits(fVar83) ^ *(uint *)&REFG(undefined, 0x10ab9c8);
      uVar142 = (uint)gen_fl2bits(fVar84) ^ *(uint *)&REFG(undefined, 0x10ab9cc);
      uVar107 = *(uint *)&REFG(undefined, 0x1134d48) & (uint)gen_fl2bits(fVar127) |
                *(uint *)&REFG(undefined, 0x1134d40) & (uint)gen_fl2bits(fVar125);
      uVar108 = *(uint *)&REFG(undefined, 0x1134d4c) & (uint)gen_fl2bits(fVar128) |
                *(uint *)&REFG(undefined, 0x1134d44) & (uint)gen_fl2bits(fVar126);
      uVar111 = *(uint *)&REFG(undefined, 0x1134d40) & (uint)gen_fl2bits(fVar125) |
                *(uint *)&REFG(undefined, 0x1134d48) & (uint)gen_fl2bits(fVar127);
      uVar112 = *(uint *)&REFG(undefined, 0x1134d44) & (uint)gen_fl2bits(fVar126) |
                *(uint *)&REFG(undefined, 0x1134d4c) & (uint)gen_fl2bits(fVar128);
      fVar151 = gen_bits2f(uVar108 | uVar107);
      fVar153 = gen_bits2f(uVar107 | uVar108);
      fVar155 = gen_bits2f(uVar112 | uVar111);
      fVar157 = gen_bits2f(uVar111 | uVar112);
      fVar121 = fVar89 * fVar53;
      fVar122 = fVar90 * fVar54;
      fVar123 = fVar91 * fVar55;
      fVar124 = fVar92 * fVar56;
      fVar129 = fVar123 + fVar121;
      fVar131 = fVar124 + fVar122;
      fVar121 = fVar121 + fVar123;
      fVar122 = fVar122 + fVar124;
      uVar107 = -(uint)(fVar131 + fVar129 < 0.0);
      uVar111 = -(uint)(fVar129 + fVar131 < 0.0);
      uVar115 = -(uint)(fVar122 + fVar121 < 0.0);
      uVar119 = -(uint)(fVar121 + fVar122 < 0.0);
      uVar144 = (uint)gen_fl2bits(fVar89) ^ *(uint *)&REFG(undefined, 0x10ab9c0);
      uVar146 = (uint)gen_fl2bits(fVar90) ^ *(uint *)&REFG(undefined, 0x10ab9c4);
      uVar148 = (uint)gen_fl2bits(fVar91) ^ *(uint *)&REFG(undefined, 0x10ab9c8);
      uVar150 = (uint)gen_fl2bits(fVar92) ^ *(uint *)&REFG(undefined, 0x10ab9cc);
      uVar108 = *(uint *)&REFG(undefined, 0x1134d58) & (uint)gen_fl2bits(fVar127) |
                *(uint *)&REFG(undefined, 0x1134d50) & (uint)gen_fl2bits(fVar125);
      uVar112 = *(uint *)&REFG(undefined, 0x1134d5c) & (uint)gen_fl2bits(fVar128) |
                *(uint *)&REFG(undefined, 0x1134d54) & (uint)gen_fl2bits(fVar126);
      uVar116 = *(uint *)&REFG(undefined, 0x1134d50) & (uint)gen_fl2bits(fVar125) |
                *(uint *)&REFG(undefined, 0x1134d58) & (uint)gen_fl2bits(fVar127);
      uVar120 = *(uint *)&REFG(undefined, 0x1134d54) & (uint)gen_fl2bits(fVar126) |
                *(uint *)&REFG(undefined, 0x1134d5c) & (uint)gen_fl2bits(fVar128);
      fVar159 = gen_bits2f(uVar112 | uVar108);
      fVar160 = gen_bits2f(uVar108 | uVar112);
      fVar161 = gen_bits2f(uVar120 | uVar116);
      fVar162 = gen_bits2f(uVar116 | uVar120);
      fVar121 = fVar97 * fVar65;
      fVar122 = fVar98 * fVar66;
      fVar123 = fVar99 * fVar67;
      fVar124 = fVar100 * fVar68;
      fVar129 = fVar123 + fVar121;
      fVar131 = fVar124 + fVar122;
      fVar121 = fVar121 + fVar123;
      fVar122 = fVar122 + fVar124;
      uVar108 = -(uint)(fVar131 + fVar129 < 0.0);
      uVar112 = -(uint)(fVar129 + fVar131 < 0.0);
      uVar116 = -(uint)(fVar122 + fVar121 < 0.0);
      uVar120 = -(uint)(fVar121 + fVar122 < 0.0);
      uVar152 = (uint)gen_fl2bits(fVar97) ^ *(uint *)&REFG(undefined, 0x10ab9c0);
      uVar154 = (uint)gen_fl2bits(fVar98) ^ *(uint *)&REFG(undefined, 0x10ab9c4);
      uVar156 = (uint)gen_fl2bits(fVar99) ^ *(uint *)&REFG(undefined, 0x10ab9c8);
      uVar158 = (uint)gen_fl2bits(fVar100) ^ *(uint *)&REFG(undefined, 0x10ab9cc);
      pfVar2 = (float *)((int)pfVar103 + iVar101);
      *pfVar2 = fVar135 * pfVar103[-0x14] + *pfVar1;
      pfVar2[1] = fVar137 * fVar23 + fVar30;
      pfVar2[2] = fVar139 * fVar24 + fVar31;
      pfVar2[3] = fVar141 * fVar25 + fVar32;
      pfVar102[-0xc] = fVar3 * fVar135 + fVar19;
      pfVar102[-0xb] = fVar4 * fVar137 + fVar20;
      pfVar102[-10] = fVar5 * fVar139 + fVar21;
      pfVar102[-9] = fVar6 * fVar141 + fVar22;
      pfVar102[-0x10] =
           gen_bits2f(uVar130 & uVar105 | ~uVar105 & (uint)gen_fl2bits(fVar73)) * fVar135 + fVar33;
      pfVar102[-0xf] =
           gen_bits2f(uVar132 & uVar109 | ~uVar109 & (uint)gen_fl2bits(fVar74)) * fVar137 + fVar34;
      pfVar102[-0xe] =
           gen_bits2f(uVar133 & uVar113 | ~uVar113 & (uint)gen_fl2bits(fVar75)) * fVar139 + fVar35;
      pfVar102[-0xd] =
           gen_bits2f(uVar134 & uVar117 | ~uVar117 & (uint)gen_fl2bits(fVar76)) * fVar141 + fVar36;
      pfVar102[-8] = fVar143 * fVar77 + fVar37;
      pfVar102[-7] = fVar145 * fVar78 + fVar38;
      pfVar102[-6] = fVar147 * fVar79 + fVar39;
      pfVar102[-5] = fVar149 * fVar80 + fVar40;
      *pfVar102 = fVar7 * fVar143 + fVar45;
      pfVar102[1] = fVar8 * fVar145 + fVar46;
      pfVar102[2] = fVar9 * fVar147 + fVar47;
      pfVar102[3] = fVar10 * fVar149 + fVar48;
      pfVar102[-4] = gen_bits2f(uVar136 & uVar106 | ~uVar106 & (uint)gen_fl2bits(fVar81)) * fVar143
                     + fVar41;
      pfVar102[-3] = gen_bits2f(uVar138 & uVar110 | ~uVar110 & (uint)gen_fl2bits(fVar82)) * fVar145
                     + fVar42;
      pfVar102[-2] = gen_bits2f(uVar140 & uVar114 | ~uVar114 & (uint)gen_fl2bits(fVar83)) * fVar147
                     + fVar43;
      pfVar102[-1] = gen_bits2f(uVar142 & uVar118 | ~uVar118 & (uint)gen_fl2bits(fVar84)) * fVar149
                     + fVar44;
      pfVar102[4] = fVar151 * fVar85 + fVar49;
      pfVar102[5] = fVar153 * fVar86 + fVar50;
      pfVar102[6] = fVar155 * fVar87 + fVar51;
      pfVar102[7] = fVar157 * fVar88 + fVar52;
      pfVar102[0xc] = fVar11 * fVar151 + fVar57;
      pfVar102[0xd] = fVar12 * fVar153 + fVar58;
      pfVar102[0xe] = fVar13 * fVar155 + fVar59;
      pfVar102[0xf] = fVar14 * fVar157 + fVar60;
      pfVar102[8] = gen_bits2f(uVar144 & uVar107 | ~uVar107 & (uint)gen_fl2bits(fVar89)) * fVar151 +
                    fVar53;
      pfVar102[9] = gen_bits2f(uVar146 & uVar111 | ~uVar111 & (uint)gen_fl2bits(fVar90)) * fVar153 +
                    fVar54;
      pfVar102[10] = gen_bits2f(uVar148 & uVar115 | ~uVar115 & (uint)gen_fl2bits(fVar91)) * fVar155
                     + fVar55;
      pfVar102[0xb] =
           gen_bits2f(uVar150 & uVar119 | ~uVar119 & (uint)gen_fl2bits(fVar92)) * fVar157 + fVar56;
      pfVar102[0x10] = fVar159 * fVar93 + fVar61;
      pfVar102[0x11] = fVar160 * fVar94 + fVar62;
      pfVar102[0x12] = fVar161 * fVar95 + fVar63;
      pfVar102[0x13] = fVar162 * fVar96 + fVar64;
      pfVar102[0x18] = fVar15 * fVar159 + fVar69;
      pfVar102[0x19] = fVar16 * fVar160 + fVar70;
      pfVar102[0x1a] = fVar17 * fVar161 + fVar71;
      pfVar102[0x1b] = fVar18 * fVar162 + fVar72;
      pfVar102[0x14] =
           gen_bits2f(uVar152 & uVar108 | ~uVar108 & (uint)gen_fl2bits(fVar97)) * fVar159 + fVar65;
      pfVar102[0x15] =
           gen_bits2f(uVar154 & uVar112 | ~uVar112 & (uint)gen_fl2bits(fVar98)) * fVar160 + fVar66;
      pfVar102[0x16] =
           gen_bits2f(uVar156 & uVar116 | ~uVar116 & (uint)gen_fl2bits(fVar99)) * fVar161 + fVar67;
      pfVar102[0x17] =
           gen_bits2f(uVar158 & uVar120 | ~uVar120 & (uint)gen_fl2bits(fVar100)) * fVar162 + fVar68;
      *pfVar104 = *pfVar104 + fVar125;
      pfVar104[1] = pfVar104[1] + fVar126;
      pfVar104[2] = pfVar104[2] + fVar127;
      pfVar104[3] = pfVar104[3] + fVar128;
      pfVar104 = pfVar104 + 4;
      pfVar103 = pfVar103 + 0x30;
      pfVar102 = pfVar102 + 0x30;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return 0;
}

/* ref: FUN_00d3bae0 */
uint F_00d3bae0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3bae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3bb20 */
uint F_00d3bb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3bb20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3bb60 */
uint F_00d3bb60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3bb60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3bba0 */
uint F_00d3bba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3bba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)this;
  uVar2 = *(uint *)((int)this + 4) >> 1;
  param_1[1] = uVar2;
  uVar2 = uVar2 | 0x80000000;
  *param_1 = uVar1;
  param_1[2] = uVar2;
  return uVar2;
}

/* ref: FUN_00d3bbc0 */
uint F_00d3bbc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3bbc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)this;
  uVar2 = *(uint *)((int)this + 4) >> 3;
  param_1[1] = uVar2;
  uVar2 = uVar2 | 0x80000000;
  *param_1 = uVar1;
  param_1[2] = uVar2;
  return uVar2;
}

/* ref: FUN_00d3bbe0 */
uint F_00d3bbe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3bbe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)this;
  uVar2 = *(uint *)((int)this + 4) / 0x30;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[2] = uVar2 | 0x80000000;
  return (uint)param_1;
}

/* ref: FUN_00d3bc10 */
uint F_00d3bc10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd3bc10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return param_3 | 0x80000000;
}

/* ref: FUN_00d3bc30 */
uint F_00d3bc30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd3bc30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return param_3 | 0x80000000;
}

/* ref: FUN_00d3bc50 */
uint F_00d3bc50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd3bc50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return param_3 | 0x80000000;
}

/* ref: FUN_00d3bc70 */
uint F_00d3bc70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd3bc70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return param_3 | 0x80000000;
}

/* ref: FUN_00d3bc90 */
uint F_00d3bc90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3bc90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
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

/* ref: FUN_00d3bca0 */
uint F_00d3bca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3bca0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = in_ecx[1];
  uVar2 = in_ecx[2];
  uVar3 = in_ecx[3];
  *param_2 = *in_ecx;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00d3bcb0 */
uint F_00d3bcb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xd3bcb0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_4;
  *(undefined4 *)((int)this + 0xc) = param_3;
  *(undefined4 *)((int)this + 0x20) = param_6;
  *(undefined4 *)((int)this + 0x1c) = param_5;
  *(undefined4 *)((int)this + 0x28) = param_8;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 0x24) = param_7;
  *(undefined2 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x2e) = 0;
  uVar1 = F_00d36890(param_1);
  *(uint *)((int)this + 8) = uVar1;
  uVar1 = F_00d36890(*(undefined4 *)((int)this + 0xc));
  *(uint *)((int)this + 0x14) = uVar1;
  return (uint)this;
}

/* ref: FUN_00d3be30 */
uint F_00d3be30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3be30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
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

/* ref: FUN_00d3be40 */
uint F_00d3be40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3be40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = in_ecx[1];
  uVar2 = in_ecx[2];
  uVar3 = in_ecx[3];
  *param_2 = *in_ecx;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00d3be50 */
uint F_00d3be50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3be50u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)*param_1;
  uVar2 = (uint)((undefined4 *)*param_1)[1] >> 1;
  param_3[1] = uVar2;
  param_3[2] = uVar2 | 0x80000000;
  *param_3 = uVar1;
  *param_1 = *param_1 + 8;
  *param_2 = *param_2 + -1;
  return (uint)param_2;
}

/* ref: FUN_00d3be80 */
uint F_00d3be80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3be80u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)*param_1;
  uVar2 = (uint)((undefined4 *)*param_1)[1] >> 3;
  param_3[1] = uVar2;
  param_3[2] = uVar2 | 0x80000000;
  *param_3 = uVar1;
  *param_1 = *param_1 + 8;
  *param_2 = *param_2 + -1;
  return (uint)param_2;
}

/* ref: FUN_00d3beb0 */
uint F_00d3beb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3beb0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)*param_1;
  uVar2 = (uint)((undefined4 *)*param_1)[1] / 0x30;
  param_3[1] = uVar2;
  *param_3 = uVar1;
  param_3[2] = uVar2 | 0x80000000;
  *param_1 = *param_1 + 8;
  *param_2 = *param_2 + -1;
  return (uint)param_2;
}

/* ref: FUN_00d3bef0 */
uint F_00d3bef0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3bef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3bf30 */
uint F_00d3bf30(unsigned int gen_a0)
{
  GEN_ENTER(0xd3bf30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3bf70 */
uint F_00d3bf70(unsigned int gen_a0)
{
  GEN_ENTER(0xd3bf70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3bfb0 */
unsigned int F_00d3bfb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd3bfb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar17 [16];
  
  fVar7 = param_2[9];
  fVar9 = param_2[10];
  fVar8 = param_2[0xb];
  fVar10 = param_1[9];
  fVar5 = param_1[10];
  fVar6 = param_1[0xb];
  fVar11 = param_3[1];
  fVar13 = param_3[2];
  fVar12 = param_3[3];
  fVar14 = param_1[9];
  fVar15 = param_1[10];
  fVar16 = param_1[0xb];
  *(float *)((int)this + 0x20) = (param_2[8] - param_1[8]) * *param_3 + param_1[8];
  *(float *)((int)this + 0x24) = (fVar7 - fVar10) * fVar11 + fVar14;
  *(float *)((int)this + 0x28) = (fVar9 - fVar5) * fVar13 + fVar15;
  *(float *)((int)this + 0x2c) = (fVar8 - fVar6) * fVar12 + fVar16;
  fVar7 = param_2[1];
  fVar9 = param_2[2];
  fVar8 = param_2[3];
  fVar10 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  fVar11 = param_3[1];
  fVar13 = param_3[2];
  fVar12 = param_3[3];
  fVar14 = param_1[1];
  fVar15 = param_1[2];
  fVar16 = param_1[3];
  *(float *)this = (*param_2 - *param_1) * *param_3 + *param_1;
  *(float *)((int)this + 4) = (fVar7 - fVar10) * fVar11 + fVar14;
  *(float *)((int)this + 8) = (fVar9 - fVar5) * fVar13 + fVar15;
  *(float *)((int)this + 0xc) = (fVar8 - fVar6) * fVar12 + fVar16;
  fVar5 = param_2[4] * param_1[4];
  fVar6 = param_2[5] * param_1[5];
  fVar7 = param_2[6] * param_1[6];
  fVar9 = param_2[7] * param_1[7];
  fVar11 = fVar7 + fVar5;
  fVar13 = fVar9 + fVar6;
  fVar5 = fVar5 + fVar7;
  fVar6 = fVar6 + fVar9;
  fVar7 = *param_3;
  fVar9 = param_3[1];
  fVar8 = param_3[2];
  fVar10 = param_3[3];
  uVar1 = -(uint)(fVar13 + fVar11 < 0.0);
  uVar2 = -(uint)(fVar11 + fVar13 < 0.0);
  uVar3 = -(uint)(fVar6 + fVar5 < 0.0);
  uVar4 = -(uint)(fVar5 + fVar6 < 0.0);
  fVar7 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar7) & uVar1 | ~uVar1 & (uint)gen_fl2bits(fVar7)) *
          param_2[4] + (*(float *)&REFG(undefined, 0x1138af0) - fVar7) * param_1[4];
  fVar9 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar9) & uVar2 | ~uVar2 & (uint)gen_fl2bits(fVar9)) *
          param_2[5] + (*(float *)&REFG(undefined, 0x1138af4) - fVar9) * param_1[5];
  fVar8 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar8) & uVar3 | ~uVar3 & (uint)gen_fl2bits(fVar8)) *
          param_2[6] + (*(float *)&REFG(undefined, 0x1138af8) - fVar8) * param_1[6];
  fVar10 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar10) & uVar4 | ~uVar4 & (uint)gen_fl2bits(fVar10))
           * param_2[7] + (*(float *)&REFG(undefined, 0x1138afc) - fVar10) * param_1[7];
  fVar5 = fVar8 * fVar8 + fVar7 * fVar7;
  fVar6 = fVar10 * fVar10 + fVar9 * fVar9;
  fVar11 = fVar7 * fVar7 + fVar8 * fVar8;
  fVar13 = fVar9 * fVar9 + fVar10 * fVar10;
  fVar12 = fVar6 + fVar5;
  fVar5 = fVar5 + fVar6;
  fVar6 = fVar13 + fVar11;
  fVar11 = fVar11 + fVar13;
  (*(undefined4 *)((char *)&auVar17 + 4)) = (undefined4)gen_fl2bits(fVar5);
  (*(undefined4 *)((char *)&auVar17 + 0)) = (undefined4)gen_fl2bits(fVar12);
  (*(undefined4 *)((char *)&auVar17 + 8)) = (undefined4)gen_fl2bits(fVar6);
  (*(undefined4 *)((char *)&auVar17 + 12)) = (undefined4)gen_fl2bits(fVar11);
  gen_rsqrtps(&(auVar17), &(in_XMM3), &(auVar17));
  fVar16 = (*(float *)((char *)&auVar17 + 0));
  fVar13 = (*(float *)((char *)&auVar17 + 4));
  fVar14 = (*(float *)((char *)&auVar17 + 8));
  fVar15 = (*(float *)((char *)&auVar17 + 12));
  fVar5 = *(float *)&REFG(undefined, 0x1134d84) - (fVar13 * fVar5) * fVar13;
  fVar6 = *(float *)&REFG(undefined, 0x1134d88) - (fVar14 * fVar6) * fVar14;
  fVar11 = *(float *)&REFG(undefined, 0x1134d8c) - (fVar15 * fVar11) * fVar15;
  fVar13 = *(float *)&REFG(undefined, 0x1134d94) * fVar13;
  fVar14 = *(float *)&REFG(undefined, 0x1134d98) * fVar14;
  fVar15 = *(float *)&REFG(undefined, 0x1134d9c) * fVar15;
  *(float *)((int)this + 0x10) =
       ((*(float *)&REFG(undefined, 0x1134d80) - (fVar16 * fVar12) * fVar16) * (*(float *)&REFG(undefined, 0x1134d90) * fVar16))
       * fVar7;
  *(float *)((int)this + 0x14) = (fVar5 * fVar13) * fVar9;
  *(float *)((int)this + 0x18) = (fVar6 * fVar14) * fVar8;
  *(float *)((int)this + 0x1c) = (fVar11 * fVar15) * fVar10;
  return 0;
}

/* ref: FUN_00d3c080 */
uint F_00d3c080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3c080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 4);
  uVar1 = *(undefined4 *)this;
  param_1[1] = uVar2;
  uVar2 = uVar2 | 0x80000000;
  *param_1 = uVar1;
  param_1[2] = uVar2;
  return uVar2;
}

/* ref: FUN_00d3c0a0 */
uint F_00d3c0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3c0a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)this;
  uVar2 = *(uint *)((int)this + 4) >> 1;
  param_1[1] = uVar2;
  uVar2 = uVar2 | 0x80000000;
  *param_1 = uVar1;
  param_1[2] = uVar2;
  return uVar2;
}

/* ref: FUN_00d3c0c0 */
uint F_00d3c0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3c0c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)this;
  uVar2 = *(uint *)((int)this + 4) >> 6;
  param_1[1] = uVar2;
  uVar2 = uVar2 | 0x80000000;
  *param_1 = uVar1;
  param_1[2] = uVar2;
  return uVar2;
}

/* ref: FUN_00d3c0e0 */
unsigned int F_00d3c0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3c0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)this;
  uVar2 = *(uint *)((int)this + 4) / 0x70;
  param_1[1] = uVar2;
  param_1[2] = uVar2 | 0x80000000;
  *param_1 = uVar1;
  return 0;
}

/* ref: FUN_00d3c2c0 */
uint F_00d3c2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3c2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  LPVOID this_00;
  uint uVar2;
  
  uVar1 = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(uint *)((int)this + 0x10) = param_1;
  if (param_1 != 0) {
    this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar1 = *(uint *)((int)this_00 + 0xc);
    uVar2 = param_1 * 4 + 0x7f & 0xffffff80;
    if ((*(int *)((int)this_00 + 8) < (int)uVar2) ||
       (*(uint *)((int)this_00 + 0x10) < uVar1 + uVar2)) {
      uVar1 = F_00d94390(this_00,uVar2);
    }
    else {
      *(uint *)((int)this_00 + 0xc) = uVar1 + uVar2;
    }
  }
  *(uint *)((int)this + 8) = param_1 | 0x80000000;
  *(uint *)this = uVar1;
  *(uint *)((int)this + 0xc) = uVar1;
  return (uint)this;
}

/* ref: FUN_00d3c330 */
uint F_00d3c330(unsigned int gen_a0)
{
  GEN_ENTER(0xd3c330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  LPVOID this_00;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0xc);
  if (iVar1 == *(int *)this) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar2 = *(int *)((int)this + 0x10);
  this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar3 = iVar2 * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)this_00 + 8) < (int)uVar3) || (uVar3 + iVar1 != *(int *)((int)this_00 + 0xc)))
     || (*(int *)((int)this_00 + 0x14) == iVar1)) {
    F_00d945c0(this_00,iVar1,uVar3);
  }
  else {
    *(int *)((int)this_00 + 0xc) = iVar1;
  }
  uVar3 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar3 & 0x80000000) == 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar3 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar3;
}

/* ref: FUN_00d3c3c0 */
uint F_00d3c3c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3c3c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3c400 */
uint F_00d3c400(unsigned int gen_a0)
{
  GEN_ENTER(0xd3c400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3c440 */
unsigned int F_00d3c440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd3c440u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  int param_6 = (int)gen_a5;
  float * pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  float * pfVar10;
  
  fVar2 = *param_5;
  fVar3 = param_5[1];
  fVar4 = param_5[2];
  fVar5 = param_5[3];
  iVar9 = (int)(param_6 + 3 + (param_6 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < iVar9) {
    pfVar10 = param_1;
    do {
      pfVar1 = ((float *)GEN_TOP(((param_3 - (int)param_1) + (int)pfVar10)));
      fVar6 = pfVar1[1];
      fVar7 = pfVar1[2];
      fVar8 = pfVar1[3];
      *pfVar10 = *pfVar1 * fVar2;
      pfVar10[1] = fVar6 * fVar3;
      pfVar10[2] = fVar7 * fVar4;
      pfVar10[3] = fVar8 * fVar5;
      pfVar1 = ((float *)GEN_TOP(((param_2 - (int)param_1) + (int)pfVar10)));
      *pfVar1 = fVar2;
      pfVar1[1] = fVar3;
      pfVar1[2] = fVar4;
      pfVar1[3] = fVar5;
      pfVar10 = pfVar10 + 4;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  return 0;
}

/* ref: FUN_00d3c490 */
uint F_00d3c490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3c490u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = ((undefined4 *)*param_1)[1];
  uVar2 = *(undefined4 *)*param_1;
  param_3[1] = uVar1;
  param_3[2] = uVar1 | 0x80000000;
  *param_3 = uVar2;
  *param_1 = *param_1 + 8;
  *param_2 = *param_2 + -1;
  return (uint)param_2;
}

/* ref: FUN_00d3c4c0 */
uint F_00d3c4c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3c4c0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)*param_1;
  uVar2 = (uint)((undefined4 *)*param_1)[1] >> 1;
  param_3[1] = uVar2;
  param_3[2] = uVar2 | 0x80000000;
  *param_3 = uVar1;
  *param_1 = *param_1 + 8;
  *param_2 = *param_2 + -1;
  return (uint)param_2;
}

/* ref: FUN_00d3c4f0 */
uint F_00d3c4f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3c4f0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)*param_1;
  uVar2 = (uint)((undefined4 *)*param_1)[1] >> 6;
  param_3[1] = uVar2;
  param_3[2] = uVar2 | 0x80000000;
  *param_3 = uVar1;
  *param_1 = *param_1 + 8;
  *param_2 = *param_2 + -1;
  return (uint)param_2;
}

/* ref: FUN_00d3c520 */
uint F_00d3c520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3c520u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)*param_1;
  uVar2 = (uint)((undefined4 *)*param_1)[1] / 0x70;
  param_3[1] = uVar2;
  *param_3 = uVar1;
  param_3[2] = uVar2 | 0x80000000;
  *param_1 = *param_1 + 8;
  *param_2 = *param_2 + -1;
  return (uint)param_2;
}

/* ref: FUN_00d3c560 */
unsigned int F_00d3c560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd3c560u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  int param_5 = (int)gen_a4;
  int iVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  int iVar61;
  float * pfVar62;
  float * pfVar63;
  float * pfVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  uint uVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  undefined1 auVar96 [16];
  float fVar102;
  undefined1 auVar97 [16];
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar118;
  float fVar119;
  float fVar120;
  undefined1 auVar107 [16];
  float fVar113;
  undefined1 auVar108 [16];
  float fVar117;
  float fVar121;
  undefined1 auVar109 [16];
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  float fVar146;
  float fVar147;
  float fVar148;
  float fVar149;
  float fVar150;
  float fVar151;
  float fVar152;
  float fVar153;
  float fVar154;
  float fVar155;
  float fVar156;
  float fVar157;
  undefined1 auVar132 [16];
  float fVar158;
  float fVar159;
  float fVar160;
  float fVar161;
  float fVar165;
  float fVar166;
  float fVar168;
  float fVar169;
  float fVar170;
  float fVar172;
  float fVar173;
  float fVar174;
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  float fVar167;
  float fVar171;
  float fVar175;
  undefined1 auVar164 [16];
  float fVar176;
  
  fVar21 = *param_4;
  fVar22 = param_4[1];
  fVar23 = param_4[2];
  fVar24 = param_4[3];
  iVar61 = (int)(param_5 + 3 + (param_5 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < iVar61) {
    pfVar62 = (float *)(param_1 + 0x50);
    pfVar63 = (float *)(param_2 + 0x50);
    iVar1 = (param_1 - param_2) + -0x50;
    pfVar64 = param_3;
    do {
      fVar69 = fVar21 * *pfVar64;
      fVar71 = fVar22 * pfVar64[1];
      fVar73 = fVar23 * pfVar64[2];
      fVar77 = fVar24 * pfVar64[3];
      fVar25 = pfVar63[0x18];
      fVar26 = pfVar63[0x19];
      fVar27 = pfVar63[0x1a];
      fVar28 = pfVar63[0x1b];
      pfVar2 = (float *)(iVar1 + (int)pfVar63);
      fVar12 = *pfVar2;
      fVar13 = pfVar2[1];
      fVar14 = pfVar2[2];
      fVar15 = pfVar2[3];
      fVar29 = pfVar62[-8];
      fVar30 = pfVar62[-7];
      fVar31 = pfVar62[-6];
      fVar32 = pfVar62[-5];
      fVar76 = pfVar62[-4];
      fVar106 = pfVar62[-3];
      fVar79 = pfVar62[-2];
      fVar113 = pfVar62[-1];
      fVar33 = *pfVar62;
      fVar34 = pfVar62[1];
      fVar35 = pfVar62[2];
      fVar36 = pfVar62[3];
      fVar37 = pfVar62[4];
      fVar38 = pfVar62[5];
      fVar39 = pfVar62[6];
      fVar40 = pfVar62[7];
      fVar80 = pfVar62[8];
      fVar81 = pfVar62[9];
      fVar84 = pfVar62[10];
      fVar87 = pfVar62[0xb];
      fVar41 = pfVar62[0xc];
      fVar42 = pfVar62[0xd];
      fVar43 = pfVar62[0xe];
      fVar44 = pfVar62[0xf];
      fVar45 = pfVar62[0x10];
      fVar46 = pfVar62[0x11];
      fVar47 = pfVar62[0x12];
      fVar48 = pfVar62[0x13];
      fVar85 = pfVar62[0x14];
      fVar88 = pfVar62[0x15];
      fVar90 = pfVar62[0x16];
      fVar92 = pfVar62[0x17];
      fVar49 = pfVar62[0x18];
      fVar50 = pfVar62[0x19];
      fVar51 = pfVar62[0x1a];
      fVar52 = pfVar62[0x1b];
      memcpy(&(auVar163), &(*(gen_v16 *)(pfVar63 + -0x10)), sizeof(*(gen_v16 *)(pfVar63 + -0x10)) < sizeof(auVar163) ? sizeof(*(gen_v16 *)(pfVar63 + -0x10)) : sizeof(auVar163));
      fVar3 = (*(float *)((char *)&auVar163 + 0));
      fVar5 = (*(float *)((char *)&auVar163 + 4));
      fVar9 = (*(float *)((char *)&auVar163 + 12));
      fVar74 = (*(float *)((char *)&auVar163 + 8));
      fVar122 = fVar3 * fVar12;
      fVar133 = fVar5 * fVar13;
      fVar143 = fVar74 * fVar14;
      fVar158 = gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0));
      fVar165 = gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4));
      fVar169 = gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8));
      fVar173 = gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc));
      fVar103 = pfVar62[-0x10];
      fVar110 = pfVar62[-0xf];
      fVar114 = pfVar62[-0xe];
      fVar118 = pfVar62[-0xd];
      fVar53 = pfVar63[-0xc];
      fVar54 = pfVar63[-0xb];
      fVar55 = pfVar63[-10];
      fVar56 = pfVar63[-9];
      fVar57 = *pfVar63;
      fVar58 = pfVar63[1];
      fVar59 = pfVar63[2];
      fVar60 = pfVar63[3];
      memcpy(&(auVar163), &(*(gen_v16 *)(pfVar63 + 0x14)), sizeof(*(gen_v16 *)(pfVar63 + 0x14)) < sizeof(auVar163) ? sizeof(*(gen_v16 *)(pfVar63 + 0x14)) : sizeof(auVar163));
      fVar4 = (*(float *)((char *)&auVar163 + 0));
      fVar6 = (*(float *)((char *)&auVar163 + 4));
      fVar10 = (*(float *)((char *)&auVar163 + 12));
      fVar123 = (((fVar133 + fVar122) + fVar143) * fVar3 + (fVar9 * fVar9 + fVar158) * fVar12) +
                (fVar14 * fVar5 - fVar13 * fVar74) * fVar9;
      fVar134 = (((fVar133 + fVar122) + fVar143) * fVar5 + (fVar9 * fVar9 + fVar165) * fVar13) +
                (fVar12 * fVar74 - fVar14 * fVar3) * fVar9;
      fVar144 = (((fVar133 + fVar122) + fVar143) * fVar74 + (fVar9 * fVar9 + fVar169) * fVar14) +
                (fVar13 * fVar3 - fVar12 * fVar5) * fVar9;
      fVar153 = (((fVar133 + fVar122) + fVar143) * fVar9 + (fVar9 * fVar9 + fVar173) * fVar15) +
                (fVar15 * fVar9 - fVar15 * fVar9) * fVar9;
      fVar16 = pfVar63[-0x13];
      fVar17 = pfVar63[-0x12];
      fVar18 = pfVar63[-0x11];
      memcpy(&(auVar96), &(*(gen_v16 *)(pfVar63 + -4)), sizeof(*(gen_v16 *)(pfVar63 + -4)) < sizeof(auVar96) ? sizeof(*(gen_v16 *)(pfVar63 + -4)) : sizeof(auVar96));
      fVar122 = (*(float *)((char *)&auVar96 + 0));
      fVar143 = (*(float *)((char *)&auVar96 + 4));
      fVar83 = (*(float *)((char *)&auVar96 + 12));
      memcpy(&(auVar97), &(*(gen_v16 *)(pfVar63 + 8)), sizeof(*(gen_v16 *)(pfVar63 + 8)) < sizeof(auVar97) ? sizeof(*(gen_v16 *)(pfVar63 + 8)) : sizeof(auVar97));
      fVar133 = (*(float *)((char *)&auVar97 + 0));
      fVar7 = (*(float *)((char *)&auVar97 + 4));
      fVar8 = (*(float *)((char *)&auVar97 + 8));
      fVar11 = (*(float *)((char *)&auVar97 + 12));
      fVar124 = ((fVar114 * fVar5 - fVar110 * fVar74) + fVar9 * fVar103) + fVar118 * fVar3;
      fVar135 = ((fVar103 * fVar74 - fVar114 * fVar3) + fVar9 * fVar110) + fVar118 * fVar5;
      fVar145 = ((fVar110 * fVar3 - fVar103 * fVar5) + fVar9 * fVar114) + fVar118 * fVar74;
      fVar78 = fVar118 * fVar9 - ((fVar5 * fVar110 + fVar3 * fVar103) + fVar74 * fVar114);
      fVar3 = pfVar62[-0xc];
      fVar5 = pfVar62[-0xb];
      fVar9 = pfVar62[-10];
      fVar74 = pfVar62[-9];
      fVar82 = (*(float *)((char *)&auVar96 + 8));
      fVar70 = fVar122 * fVar29;
      fVar72 = fVar143 * fVar30;
      fVar75 = fVar82 * fVar31;
      fVar125 = (((fVar72 + fVar70) + fVar75) * fVar122 + (fVar83 * fVar83 + fVar158) * fVar29) +
                (fVar31 * fVar143 - fVar30 * fVar82) * fVar83;
      fVar136 = (((fVar72 + fVar70) + fVar75) * fVar143 + (fVar83 * fVar83 + fVar165) * fVar30) +
                (fVar29 * fVar82 - fVar31 * fVar122) * fVar83;
      fVar146 = (((fVar72 + fVar70) + fVar75) * fVar82 + (fVar83 * fVar83 + fVar169) * fVar31) +
                (fVar30 * fVar122 - fVar29 * fVar143) * fVar83;
      fVar154 = (((fVar72 + fVar70) + fVar75) * fVar83 + (fVar83 * fVar83 + fVar173) * fVar32) +
                (fVar32 * fVar83 - fVar32 * fVar83) * fVar83;
      fVar70 = pfVar63[-8];
      fVar72 = pfVar63[-7];
      fVar75 = pfVar63[-6];
      fVar19 = pfVar63[-5];
      fVar126 = ((fVar79 * fVar143 - fVar106 * fVar82) + fVar83 * fVar76) + fVar113 * fVar122;
      fVar137 = ((fVar76 * fVar82 - fVar79 * fVar122) + fVar83 * fVar106) + fVar113 * fVar143;
      fVar147 = ((fVar106 * fVar122 - fVar76 * fVar143) + fVar83 * fVar79) + fVar113 * fVar82;
      fVar86 = fVar113 * fVar83 - ((fVar143 * fVar106 + fVar122 * fVar76) + fVar82 * fVar79);
      fVar122 = fVar133 * fVar37;
      fVar143 = fVar7 * fVar38;
      fVar83 = fVar8 * fVar39;
      fVar127 = (((fVar143 + fVar122) + fVar83) * fVar133 + (fVar11 * fVar11 + fVar158) * fVar37) +
                (fVar39 * fVar7 - fVar38 * fVar8) * fVar11;
      fVar138 = (((fVar143 + fVar122) + fVar83) * fVar7 + (fVar11 * fVar11 + fVar165) * fVar38) +
                (fVar37 * fVar8 - fVar39 * fVar133) * fVar11;
      fVar148 = (((fVar143 + fVar122) + fVar83) * fVar8 + (fVar11 * fVar11 + fVar169) * fVar39) +
                (fVar38 * fVar133 - fVar37 * fVar7) * fVar11;
      fVar155 = (((fVar143 + fVar122) + fVar83) * fVar11 + (fVar11 * fVar11 + fVar173) * fVar40) +
                (fVar40 * fVar11 - fVar40 * fVar11) * fVar11;
      fVar122 = pfVar63[4];
      fVar143 = pfVar63[5];
      fVar83 = pfVar63[6];
      fVar82 = pfVar63[7];
      fVar128 = ((fVar84 * fVar7 - fVar81 * fVar8) + fVar11 * fVar80) + fVar87 * fVar133;
      fVar139 = ((fVar80 * fVar8 - fVar84 * fVar133) + fVar11 * fVar81) + fVar87 * fVar7;
      fVar149 = ((fVar81 * fVar133 - fVar80 * fVar7) + fVar11 * fVar84) + fVar87 * fVar8;
      fVar94 = fVar87 * fVar11 - ((fVar7 * fVar81 + fVar133 * fVar80) + fVar8 * fVar84);
      fVar133 = pfVar63[0xc];
      fVar7 = pfVar63[0xd];
      fVar8 = pfVar63[0xe];
      fVar11 = pfVar63[0xf];
      fVar99 = (*(float *)((char *)&auVar163 + 8));
      fVar89 = fVar4 * fVar45;
      fVar91 = fVar6 * fVar46;
      fVar93 = fVar99 * fVar47;
      fVar129 = (((fVar91 + fVar89) + fVar93) * fVar4 + (fVar10 * fVar10 + fVar158) * fVar45) +
                (fVar47 * fVar6 - fVar46 * fVar99) * fVar10;
      fVar140 = (((fVar91 + fVar89) + fVar93) * fVar6 + (fVar10 * fVar10 + fVar165) * fVar46) +
                (fVar45 * fVar99 - fVar47 * fVar4) * fVar10;
      fVar150 = (((fVar91 + fVar89) + fVar93) * fVar99 + (fVar10 * fVar10 + fVar169) * fVar47) +
                (fVar46 * fVar4 - fVar45 * fVar6) * fVar10;
      fVar156 = (((fVar91 + fVar89) + fVar93) * fVar10 + (fVar10 * fVar10 + fVar173) * fVar48) +
                (fVar48 * fVar10 - fVar48 * fVar10) * fVar10;
      fVar89 = pfVar63[0x10];
      fVar91 = pfVar63[0x11];
      fVar93 = pfVar63[0x12];
      fVar158 = pfVar63[0x13];
      fVar130 = ((fVar90 * fVar6 - fVar88 * fVar99) + fVar10 * fVar85) + fVar92 * fVar4;
      fVar141 = ((fVar85 * fVar99 - fVar90 * fVar4) + fVar10 * fVar88) + fVar92 * fVar6;
      fVar151 = ((fVar88 * fVar4 - fVar85 * fVar6) + fVar10 * fVar90) + fVar92 * fVar99;
      fVar100 = fVar92 * fVar10 - ((fVar6 * fVar88 + fVar4 * fVar85) + fVar99 * fVar90);
      fVar159 = fVar124 * fVar103;
      fVar166 = fVar135 * fVar110;
      fVar170 = fVar145 * fVar114;
      fVar174 = fVar78 * fVar118;
      uVar65 = *(uint *)&REFG(undefined, 0x1134d28) & (uint)gen_fl2bits(fVar73) |
               *(uint *)&REFG(undefined, 0x1134d20) & (uint)gen_fl2bits(fVar69);
      uVar66 = *(uint *)&REFG(undefined, 0x1134d2c) & (uint)gen_fl2bits(fVar77) |
               *(uint *)&REFG(undefined, 0x1134d24) & (uint)gen_fl2bits(fVar71);
      uVar67 = *(uint *)&REFG(undefined, 0x1134d20) & (uint)gen_fl2bits(fVar69) |
               *(uint *)&REFG(undefined, 0x1134d28) & (uint)gen_fl2bits(fVar73);
      uVar68 = *(uint *)&REFG(undefined, 0x1134d24) & (uint)gen_fl2bits(fVar71) |
               *(uint *)&REFG(undefined, 0x1134d2c) & (uint)gen_fl2bits(fVar77);
      fVar131 = gen_bits2f(uVar66 | uVar65);
      fVar142 = gen_bits2f(uVar65 | uVar66);
      fVar152 = gen_bits2f(uVar68 | uVar67);
      fVar157 = gen_bits2f(uVar67 | uVar68);
      fVar4 = pfVar62[-0xc];
      fVar6 = pfVar62[-0xb];
      fVar10 = pfVar62[-10];
      fVar99 = pfVar62[-9];
      fVar165 = pfVar62[-0xc];
      fVar169 = pfVar62[-0xb];
      fVar173 = pfVar62[-10];
      fVar20 = pfVar62[-9];
      fVar95 = fVar170 + fVar159;
      fVar98 = fVar174 + fVar166;
      fVar159 = fVar159 + fVar170;
      fVar166 = fVar166 + fVar174;
      uVar65 = -(uint)(fVar98 + fVar95 < 0.0);
      uVar66 = -(uint)(fVar95 + fVar98 < 0.0);
      uVar67 = -(uint)(fVar166 + fVar159 < 0.0);
      uVar68 = -(uint)(fVar159 + fVar166 < 0.0);
      (*(float *)((char *)&auVar162 + 0)) = (*(float *)&REFG(undefined, 0x1138af0) - fVar131) * fVar103;
      (*(float *)((char *)&auVar162 + 4)) = (*(float *)&REFG(undefined, 0x1138af4) - fVar142) * fVar110;
      (*(float *)((char *)&auVar162 + 8)) = (*(float *)&REFG(undefined, 0x1138af8) - fVar152) * fVar114;
      (*(float *)((char *)&auVar162 + 12)) = (*(float *)&REFG(undefined, 0x1138afc) - fVar157) * fVar118;
      fVar95 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar131) & uVar65 |
                          ~uVar65 & (uint)gen_fl2bits(fVar131)) * fVar124 + (*(float *)((char *)&auVar162 + 0));
      fVar166 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar142) & uVar66 |
                           ~uVar66 & (uint)gen_fl2bits(fVar142)) * fVar135 + (*(float *)((char *)&auVar162 + 4));
      fVar135 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar152) & uVar67 |
                           ~uVar67 & (uint)gen_fl2bits(fVar152)) * fVar145 + (*(float *)((char *)&auVar162 + 8));
      fVar170 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar157) & uVar68 |
                           ~uVar68 & (uint)gen_fl2bits(fVar157)) * fVar78 + (*(float *)((char *)&auVar162 + 12));
      fVar103 = fVar135 * fVar135 + fVar95 * fVar95;
      fVar110 = fVar170 * fVar170 + fVar166 * fVar166;
      fVar114 = fVar95 * fVar95 + fVar135 * fVar135;
      fVar118 = fVar166 * fVar166 + fVar170 * fVar170;
      (*(float *)((char *)&auVar132 + 0)) = fVar110 + fVar103;
      (*(float *)((char *)&auVar132 + 4)) = fVar103 + fVar110;
      (*(float *)((char *)&auVar132 + 8)) = fVar118 + fVar114;
      (*(float *)((char *)&auVar132 + 12)) = fVar114 + fVar118;
      gen_rsqrtps(&(auVar163), &(auVar162), &(auVar132));
      fVar103 = (*(float *)((char *)&auVar163 + 0));
      fVar110 = (*(float *)((char *)&auVar163 + 4));
      fVar114 = (*(float *)((char *)&auVar163 + 8));
      fVar118 = (*(float *)((char *)&auVar163 + 12));
      fVar160 = fVar103 * *(float *)&REFG(undefined, 0x1134d90);
      fVar167 = fVar110 * *(float *)&REFG(undefined, 0x1134d94);
      fVar171 = fVar114 * *(float *)&REFG(undefined, 0x1134d98);
      fVar175 = fVar118 * *(float *)&REFG(undefined, 0x1134d9c);
      fVar104 = *(float *)&REFG(undefined, 0x1134d80) - (fVar103 * (*(float *)((char *)&auVar132 + 0))) * fVar103;
      fVar111 = *(float *)&REFG(undefined, 0x1134d84) - (fVar110 * (*(float *)((char *)&auVar132 + 4))) * fVar110;
      fVar115 = *(float *)&REFG(undefined, 0x1134d88) - (fVar114 * (*(float *)((char *)&auVar132 + 8))) * fVar114;
      fVar119 = *(float *)&REFG(undefined, 0x1134d8c) - (fVar118 * (*(float *)((char *)&auVar132 + 12))) * fVar118;
      uVar65 = *(uint *)&REFG(undefined, 0x1134d38) & (uint)gen_fl2bits(fVar73) |
               *(uint *)&REFG(undefined, 0x1134d30) & (uint)gen_fl2bits(fVar69);
      uVar66 = *(uint *)&REFG(undefined, 0x1134d3c) & (uint)gen_fl2bits(fVar77) |
               *(uint *)&REFG(undefined, 0x1134d34) & (uint)gen_fl2bits(fVar71);
      uVar67 = *(uint *)&REFG(undefined, 0x1134d30) & (uint)gen_fl2bits(fVar69) |
               *(uint *)&REFG(undefined, 0x1134d38) & (uint)gen_fl2bits(fVar73);
      uVar68 = *(uint *)&REFG(undefined, 0x1134d34) & (uint)gen_fl2bits(fVar71) |
               *(uint *)&REFG(undefined, 0x1134d3c) & (uint)gen_fl2bits(fVar77);
      fVar105 = gen_bits2f(uVar66 | uVar65);
      fVar112 = gen_bits2f(uVar65 | uVar66);
      fVar116 = gen_bits2f(uVar68 | uVar67);
      fVar120 = gen_bits2f(uVar67 | uVar68);
      fVar114 = fVar126 * fVar76;
      fVar118 = fVar137 * fVar106;
      fVar78 = fVar147 * fVar79;
      fVar98 = fVar86 * fVar113;
      fVar103 = fVar78 + fVar114;
      fVar110 = fVar98 + fVar118;
      fVar114 = fVar114 + fVar78;
      fVar118 = fVar118 + fVar98;
      uVar65 = -(uint)(fVar110 + fVar103 < 0.0);
      uVar66 = -(uint)(fVar103 + fVar110 < 0.0);
      uVar67 = -(uint)(fVar118 + fVar114 < 0.0);
      uVar68 = -(uint)(fVar114 + fVar118 < 0.0);
      (*(float *)((char *)&auVar164 + 0)) = (*(float *)&REFG(undefined, 0x1138af0) - fVar105) * fVar76;
      (*(float *)((char *)&auVar164 + 4)) = (*(float *)&REFG(undefined, 0x1138af4) - fVar112) * fVar106;
      (*(float *)((char *)&auVar164 + 8)) = (*(float *)&REFG(undefined, 0x1138af8) - fVar116) * fVar79;
      (*(float *)((char *)&auVar164 + 12)) = (*(float *)&REFG(undefined, 0x1138afc) - fVar120) * fVar113;
      fVar98 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar105) & uVar65 |
                          ~uVar65 & (uint)gen_fl2bits(fVar105)) * fVar126 + (*(float *)((char *)&auVar164 + 0));
      fVar124 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar112) & uVar66 |
                           ~uVar66 & (uint)gen_fl2bits(fVar112)) * fVar137 + (*(float *)((char *)&auVar164 + 4));
      fVar137 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar116) & uVar67 |
                           ~uVar67 & (uint)gen_fl2bits(fVar116)) * fVar147 + (*(float *)((char *)&auVar164 + 8));
      fVar174 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar120) & uVar68 |
                           ~uVar68 & (uint)gen_fl2bits(fVar120)) * fVar86 + (*(float *)((char *)&auVar164 + 12));
      fVar103 = fVar137 * fVar137 + fVar98 * fVar98;
      fVar110 = fVar174 * fVar174 + fVar124 * fVar124;
      fVar114 = fVar98 * fVar98 + fVar137 * fVar137;
      fVar118 = fVar124 * fVar124 + fVar174 * fVar174;
      (*(float *)((char *)&auVar107 + 0)) = fVar110 + fVar103;
      (*(float *)((char *)&auVar107 + 4)) = fVar103 + fVar110;
      (*(float *)((char *)&auVar107 + 8)) = fVar118 + fVar114;
      (*(float *)((char *)&auVar107 + 12)) = fVar114 + fVar118;
      gen_rsqrtps(&(auVar163), &(auVar164), &(auVar107));
      fVar103 = (*(float *)((char *)&auVar163 + 0));
      fVar110 = (*(float *)((char *)&auVar163 + 4));
      fVar118 = (*(float *)((char *)&auVar163 + 8));
      fVar106 = (*(float *)((char *)&auVar163 + 12));
      fVar161 = fVar103 * *(float *)&REFG(undefined, 0x1134d90);
      fVar168 = fVar110 * *(float *)&REFG(undefined, 0x1134d94);
      fVar172 = fVar118 * *(float *)&REFG(undefined, 0x1134d98);
      fVar176 = fVar106 * *(float *)&REFG(undefined, 0x1134d9c);
      fVar103 = *(float *)&REFG(undefined, 0x1134d80) - (fVar103 * (*(float *)((char *)&auVar107 + 0))) * fVar103;
      fVar114 = *(float *)&REFG(undefined, 0x1134d84) - (fVar110 * (*(float *)((char *)&auVar107 + 4))) * fVar110;
      fVar76 = *(float *)&REFG(undefined, 0x1134d88) - (fVar118 * (*(float *)((char *)&auVar107 + 8))) * fVar118;
      fVar79 = *(float *)&REFG(undefined, 0x1134d8c) - (fVar106 * (*(float *)((char *)&auVar107 + 12))) * fVar106;
      uVar65 = *(uint *)&REFG(undefined, 0x1134d48) & (uint)gen_fl2bits(fVar73) |
               *(uint *)&REFG(undefined, 0x1134d40) & (uint)gen_fl2bits(fVar69);
      uVar66 = *(uint *)&REFG(undefined, 0x1134d4c) & (uint)gen_fl2bits(fVar77) |
               *(uint *)&REFG(undefined, 0x1134d44) & (uint)gen_fl2bits(fVar71);
      uVar67 = *(uint *)&REFG(undefined, 0x1134d40) & (uint)gen_fl2bits(fVar69) |
               *(uint *)&REFG(undefined, 0x1134d48) & (uint)gen_fl2bits(fVar73);
      uVar68 = *(uint *)&REFG(undefined, 0x1134d44) & (uint)gen_fl2bits(fVar71) |
               *(uint *)&REFG(undefined, 0x1134d4c) & (uint)gen_fl2bits(fVar77);
      fVar159 = gen_bits2f(uVar66 | uVar65);
      fVar126 = gen_bits2f(uVar65 | uVar66);
      fVar145 = gen_bits2f(uVar68 | uVar67);
      fVar101 = gen_bits2f(uVar67 | uVar68);
      fVar106 = fVar128 * fVar80;
      fVar113 = fVar139 * fVar81;
      fVar78 = fVar149 * fVar84;
      fVar86 = fVar94 * fVar87;
      fVar110 = fVar78 + fVar106;
      fVar118 = fVar86 + fVar113;
      fVar106 = fVar106 + fVar78;
      fVar113 = fVar113 + fVar86;
      uVar65 = -(uint)(fVar118 + fVar110 < 0.0);
      uVar66 = -(uint)(fVar110 + fVar118 < 0.0);
      uVar67 = -(uint)(fVar113 + fVar106 < 0.0);
      uVar68 = -(uint)(fVar106 + fVar113 < 0.0);
      (*(float *)((char *)&auVar108 + 0)) = (*(float *)&REFG(undefined, 0x1138af0) - fVar159) * fVar80;
      (*(float *)((char *)&auVar108 + 4)) = (*(float *)&REFG(undefined, 0x1138af4) - fVar126) * fVar81;
      (*(float *)((char *)&auVar108 + 8)) = (*(float *)&REFG(undefined, 0x1138af8) - fVar145) * fVar84;
      (*(float *)((char *)&auVar108 + 12)) = (*(float *)&REFG(undefined, 0x1138afc) - fVar101) * fVar87;
      fVar110 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar159) & uVar65 |
                           ~uVar65 & (uint)gen_fl2bits(fVar159)) * fVar128 + (*(float *)((char *)&auVar108 + 0));
      fVar118 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar126) & uVar66 |
                           ~uVar66 & (uint)gen_fl2bits(fVar126)) * fVar139 + (*(float *)((char *)&auVar108 + 4));
      fVar106 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar145) & uVar67 |
                           ~uVar67 & (uint)gen_fl2bits(fVar145)) * fVar149 + (*(float *)((char *)&auVar108 + 8));
      fVar113 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar101) & uVar68 |
                           ~uVar68 & (uint)gen_fl2bits(fVar101)) * fVar94 + (*(float *)((char *)&auVar108 + 12));
      fVar80 = fVar106 * fVar106 + fVar110 * fVar110;
      fVar81 = fVar113 * fVar113 + fVar118 * fVar118;
      fVar84 = fVar110 * fVar110 + fVar106 * fVar106;
      fVar87 = fVar118 * fVar118 + fVar113 * fVar113;
      (*(float *)((char *)&auVar96 + 0)) = fVar81 + fVar80;
      (*(float *)((char *)&auVar96 + 4)) = fVar80 + fVar81;
      (*(float *)((char *)&auVar96 + 8)) = fVar87 + fVar84;
      (*(float *)((char *)&auVar96 + 12)) = fVar84 + fVar87;
      gen_rsqrtps(&(auVar163), &(auVar108), &(auVar96));
      fVar94 = (*(float *)((char *)&auVar163 + 0));
      fVar128 = (*(float *)((char *)&auVar163 + 4));
      fVar139 = (*(float *)((char *)&auVar163 + 8));
      fVar149 = (*(float *)((char *)&auVar163 + 12));
      fVar80 = *(float *)&REFG(undefined, 0x1134d80) - (fVar94 * (*(float *)((char *)&auVar96 + 0))) * fVar94;
      fVar84 = *(float *)&REFG(undefined, 0x1134d84) - (fVar128 * (*(float *)((char *)&auVar96 + 4))) * fVar128;
      fVar78 = *(float *)&REFG(undefined, 0x1134d88) - (fVar139 * (*(float *)((char *)&auVar96 + 8))) * fVar139;
      fVar86 = *(float *)&REFG(undefined, 0x1134d8c) - (fVar149 * (*(float *)((char *)&auVar96 + 12))) * fVar149;
      fVar94 = *(float *)&REFG(undefined, 0x1134d90) * fVar94;
      fVar128 = *(float *)&REFG(undefined, 0x1134d94) * fVar128;
      fVar139 = *(float *)&REFG(undefined, 0x1134d98) * fVar139;
      fVar149 = *(float *)&REFG(undefined, 0x1134d9c) * fVar149;
      uVar65 = *(uint *)&REFG(undefined, 0x1134d58) & (uint)gen_fl2bits(fVar73) |
               *(uint *)&REFG(undefined, 0x1134d50) & (uint)gen_fl2bits(fVar69);
      uVar66 = *(uint *)&REFG(undefined, 0x1134d5c) & (uint)gen_fl2bits(fVar77) |
               *(uint *)&REFG(undefined, 0x1134d54) & (uint)gen_fl2bits(fVar71);
      uVar67 = *(uint *)&REFG(undefined, 0x1134d50) & (uint)gen_fl2bits(fVar69) |
               *(uint *)&REFG(undefined, 0x1134d58) & (uint)gen_fl2bits(fVar73);
      uVar68 = *(uint *)&REFG(undefined, 0x1134d54) & (uint)gen_fl2bits(fVar71) |
               *(uint *)&REFG(undefined, 0x1134d5c) & (uint)gen_fl2bits(fVar77);
      fVar73 = gen_bits2f(uVar66 | uVar65);
      fVar77 = gen_bits2f(uVar65 | uVar66);
      fVar147 = gen_bits2f(uVar68 | uVar67);
      fVar102 = gen_bits2f(uVar67 | uVar68);
      fVar69 = fVar130 * fVar85;
      fVar71 = fVar141 * fVar88;
      fVar117 = fVar151 * fVar90;
      fVar121 = fVar100 * fVar92;
      fVar81 = fVar117 + fVar69;
      fVar87 = fVar121 + fVar71;
      fVar69 = fVar69 + fVar117;
      fVar71 = fVar71 + fVar121;
      uVar65 = -(uint)(fVar87 + fVar81 < 0.0);
      uVar66 = -(uint)(fVar81 + fVar87 < 0.0);
      uVar67 = -(uint)(fVar71 + fVar69 < 0.0);
      uVar68 = -(uint)(fVar69 + fVar71 < 0.0);
      (*(undefined4 *)((char *)&auVar163 + 0)) = (uint)gen_fl2bits(0.0 - fVar73) & uVar65;
      (*(undefined4 *)((char *)&auVar163 + 4)) = (uint)gen_fl2bits(0.0 - fVar77) & uVar66;
      (*(undefined4 *)((char *)&auVar163 + 8)) = (uint)gen_fl2bits(0.0 - fVar147) & uVar67;
      (*(undefined4 *)((char *)&auVar163 + 12)) = (uint)gen_fl2bits(0.0 - fVar102) & uVar68;
      (*(undefined4 *)((char *)&auVar109 + 0)) = ~uVar65 & (uint)gen_fl2bits(fVar73);
      (*(undefined4 *)((char *)&auVar109 + 4)) = ~uVar66 & (uint)gen_fl2bits(fVar77);
      (*(undefined4 *)((char *)&auVar109 + 8)) = ~uVar67 & (uint)gen_fl2bits(fVar147);
      (*(undefined4 *)((char *)&auVar109 + 12)) = ~uVar68 & (uint)gen_fl2bits(fVar102);
      undefined1 gen_vt0[16]; gen_v16_or(gen_vt0, &(auVar163), &(auVar109));
      memcpy(auVar163, gen_vt0, 16);
      fVar81 = (*(float *)((char *)&auVar163 + 0)) * fVar130 + (*(float *)&REFG(undefined, 0x1138af0) - fVar73) * fVar85;
      fVar87 = (*(float *)((char *)&auVar163 + 4)) * fVar141 + (*(float *)&REFG(undefined, 0x1138af4) - fVar77) * fVar88;
      fVar85 = (*(float *)((char *)&auVar163 + 8)) * fVar151 + (*(float *)&REFG(undefined, 0x1138af8) - fVar147) * fVar90;
      fVar88 = (*(float *)((char *)&auVar163 + 12)) * fVar100 + (*(float *)&REFG(undefined, 0x1138afc) - fVar102) * fVar92;
      fVar90 = fVar85 * fVar85 + fVar81 * fVar81;
      fVar92 = fVar88 * fVar88 + fVar87 * fVar87;
      fVar69 = fVar81 * fVar81 + fVar85 * fVar85;
      fVar71 = fVar87 * fVar87 + fVar88 * fVar88;
      (*(float *)((char *)&auVar97 + 0)) = fVar92 + fVar90;
      (*(float *)((char *)&auVar97 + 4)) = fVar90 + fVar92;
      (*(float *)((char *)&auVar97 + 8)) = fVar71 + fVar69;
      (*(float *)((char *)&auVar97 + 12)) = fVar69 + fVar71;
      gen_rsqrtps(&(auVar163), &(auVar109), &(auVar97));
      fVar100 = (*(float *)((char *)&auVar163 + 0));
      fVar117 = (*(float *)((char *)&auVar163 + 4));
      fVar121 = (*(float *)((char *)&auVar163 + 8));
      fVar130 = (*(float *)((char *)&auVar163 + 12));
      fVar90 = *(float *)&REFG(undefined, 0x1134d80) - (fVar100 * (*(float *)((char *)&auVar97 + 0))) * fVar100;
      fVar92 = *(float *)&REFG(undefined, 0x1134d84) - (fVar117 * (*(float *)((char *)&auVar97 + 4))) * fVar117;
      fVar69 = *(float *)&REFG(undefined, 0x1134d88) - (fVar121 * (*(float *)((char *)&auVar97 + 8))) * fVar121;
      fVar71 = *(float *)&REFG(undefined, 0x1134d8c) - (fVar130 * (*(float *)((char *)&auVar97 + 12))) * fVar130;
      fVar100 = *(float *)&REFG(undefined, 0x1134d90) * fVar100;
      fVar117 = *(float *)&REFG(undefined, 0x1134d94) * fVar117;
      fVar121 = *(float *)&REFG(undefined, 0x1134d98) * fVar121;
      fVar130 = *(float *)&REFG(undefined, 0x1134d9c) * fVar130;
      pfVar2 = (float *)(iVar1 + (int)pfVar63);
      *pfVar2 = (((fVar123 + fVar123) + pfVar63[-0x14]) - fVar12) * fVar131 + fVar12;
      pfVar2[1] = (((fVar134 + fVar134) + fVar16) - fVar13) * fVar142 + fVar13;
      pfVar2[2] = (((fVar144 + fVar144) + fVar17) - fVar14) * fVar152 + fVar14;
      pfVar2[3] = (((fVar153 + fVar153) + fVar18) - fVar15) * fVar157 + fVar15;
      pfVar62[-0x10] = (fVar104 * fVar160) * fVar95;
      pfVar62[-0xf] = (fVar111 * fVar167) * fVar166;
      pfVar62[-0xe] = (fVar115 * fVar171) * fVar135;
      pfVar62[-0xd] = (fVar119 * fVar175) * fVar170;
      pfVar62[-0xc] = (fVar53 * fVar3 - fVar4) * fVar131 + fVar165;
      pfVar62[-0xb] = (fVar54 * fVar5 - fVar6) * fVar142 + fVar169;
      pfVar62[-10] = (fVar55 * fVar9 - fVar10) * fVar152 + fVar173;
      pfVar62[-9] = (fVar56 * fVar74 - fVar99) * fVar157 + fVar20;
      pfVar62[-8] = (((fVar125 + fVar125) + fVar70) - fVar29) * fVar105 + fVar29;
      pfVar62[-7] = (((fVar136 + fVar136) + fVar72) - fVar30) * fVar112 + fVar30;
      pfVar62[-6] = (((fVar146 + fVar146) + fVar75) - fVar31) * fVar116 + fVar31;
      pfVar62[-5] = (((fVar154 + fVar154) + fVar19) - fVar32) * fVar120 + fVar32;
      pfVar62[-4] = (fVar103 * fVar161) * fVar98;
      pfVar62[-3] = (fVar114 * fVar168) * fVar124;
      pfVar62[-2] = (fVar76 * fVar172) * fVar137;
      pfVar62[-1] = (fVar79 * fVar176) * fVar174;
      *pfVar62 = (fVar57 * fVar33 - fVar33) * fVar105 + fVar33;
      pfVar62[1] = (fVar58 * fVar34 - fVar34) * fVar112 + fVar34;
      pfVar62[2] = (fVar59 * fVar35 - fVar35) * fVar116 + fVar35;
      pfVar62[3] = (fVar60 * fVar36 - fVar36) * fVar120 + fVar36;
      pfVar62[4] = (((fVar127 + fVar127) + fVar122) - fVar37) * fVar159 + fVar37;
      pfVar62[5] = (((fVar138 + fVar138) + fVar143) - fVar38) * fVar126 + fVar38;
      pfVar62[6] = (((fVar148 + fVar148) + fVar83) - fVar39) * fVar145 + fVar39;
      pfVar62[7] = (((fVar155 + fVar155) + fVar82) - fVar40) * fVar101 + fVar40;
      pfVar62[8] = fVar110 * (fVar80 * fVar94);
      pfVar62[9] = fVar118 * (fVar84 * fVar128);
      pfVar62[10] = fVar106 * (fVar78 * fVar139);
      pfVar62[0xb] = fVar113 * (fVar86 * fVar149);
      pfVar62[0xc] = (fVar41 * fVar133 - fVar41) * fVar159 + fVar41;
      pfVar62[0xd] = (fVar42 * fVar7 - fVar42) * fVar126 + fVar42;
      pfVar62[0xe] = (fVar43 * fVar8 - fVar43) * fVar145 + fVar43;
      pfVar62[0xf] = (fVar44 * fVar11 - fVar44) * fVar101 + fVar44;
      pfVar62[0x10] = (((fVar129 + fVar129) + fVar89) - fVar45) * fVar73 + fVar45;
      pfVar62[0x11] = (((fVar140 + fVar140) + fVar91) - fVar46) * fVar77 + fVar46;
      pfVar62[0x12] = (((fVar150 + fVar150) + fVar93) - fVar47) * fVar147 + fVar47;
      pfVar62[0x13] = (((fVar156 + fVar156) + fVar158) - fVar48) * fVar102 + fVar48;
      pfVar62[0x14] = (fVar90 * fVar100) * fVar81;
      pfVar62[0x15] = (fVar92 * fVar117) * fVar87;
      pfVar62[0x16] = (fVar69 * fVar121) * fVar85;
      pfVar62[0x17] = (fVar71 * fVar130) * fVar88;
      pfVar62[0x18] = (fVar25 * fVar49 - fVar49) * fVar73 + fVar49;
      pfVar62[0x19] = (fVar26 * fVar50 - fVar50) * fVar77 + fVar50;
      pfVar62[0x1a] = (fVar27 * fVar51 - fVar51) * fVar147 + fVar51;
      pfVar62[0x1b] = (fVar28 * fVar52 - fVar52) * fVar102 + fVar52;
      pfVar64 = pfVar64 + 4;
      pfVar63 = pfVar63 + 0x30;
      pfVar62 = pfVar62 + 0x30;
      iVar61 = iVar61 + -1;
    } while (iVar61 != 0);
  }
  return 0;
}

/* ref: FUN_00d3cf50 */
uint F_00d3cf50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd3cf50u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  int param_5 = (int)gen_a4;
  float * pfVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  float * pfVar14;
  
  fVar3 = *param_4;
  fVar4 = param_4[1];
  fVar5 = param_4[2];
  fVar6 = param_4[3];
  uVar13 = (int)(param_5 + 3 + (param_5 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < (int)uVar13) {
    pfVar14 = param_1;
    do {
      pfVar1 = ((float *)GEN_TOP(((param_3 - (int)param_1) + (int)pfVar14)));
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      pfVar2 = ((float *)GEN_TOP(((param_2 - (int)param_1) + (int)pfVar14)));
      fVar10 = pfVar2[1];
      fVar11 = pfVar2[2];
      fVar12 = pfVar2[3];
      *pfVar14 = *pfVar2 * (*pfVar1 * fVar3) + *pfVar14;
      pfVar14[1] = fVar10 * (fVar7 * fVar4) + pfVar14[1];
      pfVar14[2] = fVar11 * (fVar8 * fVar5) + pfVar14[2];
      pfVar14[3] = fVar12 * (fVar9 * fVar6) + pfVar14[3];
      pfVar14 = pfVar14 + 4;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
    uVar13 = 0;
  }
  return uVar13;
}

/* ref: FUN_00d3cfa0 */
uint F_00d3cfa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd3cfa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  int param_6 = (int)gen_a5;
  float * pfVar1;
  float * pfVar2;
  float * pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  float * pfVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  
  fVar4 = *param_5;
  fVar5 = param_5[1];
  fVar6 = param_5[2];
  fVar7 = param_5[3];
  uVar18 = (int)(param_6 + 3 + (param_6 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < (int)uVar18) {
    iVar20 = param_4 - (int)param_2;
    iVar21 = param_3 - (int)param_2;
    iVar22 = param_1 - (int)param_2;
    pfVar19 = param_2;
    param_2 = (float *)uVar18;
    do {
      pfVar1 = (float *)(iVar20 + (int)pfVar19);
      fVar8 = *pfVar1;
      fVar9 = pfVar1[1];
      fVar10 = pfVar1[2];
      fVar11 = pfVar1[3];
      pfVar1 = (float *)(iVar21 + (int)pfVar19);
      fVar12 = pfVar1[1];
      fVar13 = pfVar1[2];
      fVar14 = pfVar1[3];
      pfVar2 = (float *)(iVar22 + (int)pfVar19);
      fVar15 = pfVar2[1];
      fVar16 = pfVar2[2];
      fVar17 = pfVar2[3];
      pfVar3 = (float *)(iVar22 + (int)pfVar19);
      *pfVar3 = *pfVar1 * (fVar8 * fVar4) + *pfVar2;
      pfVar3[1] = fVar12 * (fVar9 * fVar5) + fVar15;
      pfVar3[2] = fVar13 * (fVar10 * fVar6) + fVar16;
      pfVar3[3] = fVar14 * (fVar11 * fVar7) + fVar17;
      *pfVar19 = *pfVar19 + fVar8 * fVar4;
      pfVar19[1] = pfVar19[1] + fVar9 * fVar5;
      pfVar19[2] = pfVar19[2] + fVar10 * fVar6;
      pfVar19[3] = pfVar19[3] + fVar11 * fVar7;
      pfVar19 = pfVar19 + 4;
      param_2 = (float *)((int)param_2 - 1);
    } while (param_2 != (float *)0x0);
  }
  return uVar18;
}

/* ref: FUN_00d3d340 */
uint F_00d3d340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xd3d340u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float param_7 = (float)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  LPVOID pvVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  (*(int *)(gen_frame + 0x28)) = param_1;
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar5 = *(uint *)((int)pvVar2 + 0xc);
  uVar3 = param_2 * 4 + 0x7fU & 0xffffff80;
  (*(uint *)(gen_frame + 0x24)) = uVar3;
  uVar4 = uVar5 + uVar3;
  if ((*(int *)((int)pvVar2 + 8) < (int)uVar3) || (*(uint *)((int)pvVar2 + 0x10) < uVar4)) {
    uVar4 = F_00d94390(pvVar2,uVar3);
    (*(uint *)(gen_frame + 0x2c)) = uVar4;
  }
  else {
    *(uint *)((int)pvVar2 + 0xc) = uVar4;
    (*(uint *)(gen_frame + 0x2c)) = uVar5;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar4 = *(uint *)((int)pvVar2 + 0xc);
  uVar5 = iVar1 * 4 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar2 + 8) < (int)uVar5) || (*(uint *)((int)pvVar2 + 0x10) < uVar4 + uVar5)) {
    uVar4 = F_00d94390(pvVar2,uVar5);
  }
  else {
    *(uint *)((int)pvVar2 + 0xc) = uVar4 + uVar5;
  }
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)&REFG(undefined, 0x1134da0);
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)&REFG(undefined, 0x1134da4);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)&REFG(undefined, 0x1134da8);
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)&REFG(undefined, 0x1134dac);
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)&REFG(undefined, 0x1134da0);
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)&REFG(undefined, 0x1134da4);
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)&REFG(undefined, 0x1134da8);
  (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)&REFG(undefined, 0x1134dac);
  F_00d35c70(&(*(undefined4 *)(gen_frame + 0x10)),param_4,param_2,(*(uint *)(gen_frame + 0x2c)));
  F_00d35c70(&(*(undefined4 *)(gen_frame + 0x0)),param_6,*(undefined4 *)((*(int *)(gen_frame + 0x28)) + 0xc),uVar4);
  F_00d37b30((*(int *)(gen_frame + 0x28)),param_2,param_3,(*(uint *)(gen_frame + 0x2c)),param_5,uVar4,param_7,param_8,param_9);
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)((int)pvVar2 + 8) < (int)uVar5) || (uVar5 + uVar4 != *(int *)((int)pvVar2 + 0xc)))
     || (*(uint *)((int)pvVar2 + 0x14) == uVar4)) {
    F_00d945c0(pvVar2,uVar4,uVar5);
  }
  else {
    *(uint *)((int)pvVar2 + 0xc) = uVar4;
  }
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar4 = (*(uint *)(gen_frame + 0x24)) + 0xf & 0xfffffff0;
  if ((((int)(*(uint *)(gen_frame + 0x24)) <= *(int *)((int)pvVar2 + 8)) &&
      (uVar4 + (*(uint *)(gen_frame + 0x2c)) == *(int *)((int)pvVar2 + 0xc))) &&
     (*(uint *)((int)pvVar2 + 0x14) != (*(uint *)(gen_frame + 0x2c)))) {
    *(uint *)((int)pvVar2 + 0xc) = (*(uint *)(gen_frame + 0x2c));
    return (uint)pvVar2;
  }
  uVar4 = F_00d945c0(pvVar2,(*(uint *)(gen_frame + 0x2c)),uVar4);
  return uVar4;
}

/* ref: FUN_00d3d4d0 */
uint F_00d3d4d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xd3d4d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  uint * param_4 = (uint *)(uintptr_t)gen_a4;
  uint * param_5 = (uint *)(uintptr_t)gen_a5;
  int * param_6 = (int *)(uintptr_t)gen_a6;
  int * param_7 = (int *)(uintptr_t)gen_a7;
  int param_8 = (int)gen_a8;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  LPVOID pvVar4;
  uint in_esi;
  undefined4 * puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  short * psVar10;
  int in_eax;
  undefined4 * puVar11;
  uint local_24;
  undefined4 * local_1c;
  undefined4 * local_18;
  undefined4 * local_14;
  int local_10;
  undefined4 * local_c;
  int local_8;
  
  if (param_8 == 0) {
    in_eax = *(int *)this;
  }
  else {
    in_eax = param_3[0x2e];
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_14 = *(undefined4 * PTR32 *)((int)pvVar4 + 0xc);
  uVar8 = in_eax * 0x30 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar4 + 8) < (int)uVar8) ||
     (*(uint *)((int)pvVar4 + 0x10) < (int)local_14 + uVar8)) {
    local_14 = (undefined4 *)F_00d94390(pvVar4,uVar8);
  }
  else {
    *(uint *)((int)pvVar4 + 0xc) = (int)local_14 + uVar8;
  }
  iVar6 = *(int *)((int)this + 0xc);
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_c = *(undefined4 * PTR32 *)((int)pvVar4 + 0xc);
  uVar9 = iVar6 * 4 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar4 + 8) < (int)uVar9) ||
     (*(uint *)((int)pvVar4 + 0x10) < (int)local_c + uVar9)) {
    local_c = (undefined4 *)F_00d94390(pvVar4,uVar9);
  }
  else {
    *(uint *)((int)pvVar4 + 0xc) = (int)local_c + uVar9;
  }
  if (param_6[1] == 0) {
    local_24 = *param_4;
    local_1c = local_14;
    local_10 = in_eax;
  }
  else {
    local_24 = F_00d367f0(in_eax);
    F_00da1030(local_24,0,in_eax);
    iVar6 = param_6[1] + -1;
    local_10 = 0;
    if (-1 < iVar6) {
      psVar10 = (short *)(*param_6 + iVar6 * 2);
      do {
        if (((-1 < *psVar10) && (*psVar10 < in_eax)) &&
           ((param_4[1] == 0 || (*(char *)(iVar6 + *param_4) != '\0')))) {
          local_10 = iVar6 + 1;
          break;
        }
        psVar10 = psVar10 + -1;
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
    }
    local_1c = (undefined4 *)F_00d368e0(local_10);
    iVar6 = in_eax * 0xc;
    puVar11 = local_14;
    if (-1 < iVar6 + -1) {
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
    }
  }
  iVar6 = *(int *)((int)this + 0xc);
  if (param_7[1] == 0) {
    in_esi = *param_5;
    local_18 = local_c;
    local_8 = iVar6;
  }
  else {
    in_esi = F_00d367f0(iVar6);
    F_00da1030(in_esi,0,iVar6);
    iVar7 = param_7[1] + -1;
    local_8 = 0;
    if (-1 < iVar7) {
      psVar10 = (short *)(*param_7 + iVar7 * 2);
      do {
        if (((-1 < *psVar10) && (*psVar10 < iVar6)) &&
           ((param_5[1] == 0 || (*(char *)(iVar7 + *param_5) != '\0')))) {
          local_8 = iVar7 + 1;
          break;
        }
        psVar10 = psVar10 + -1;
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
    }
    local_18 = (undefined4 *)F_00d36890(local_8);
    puVar11 = local_c;
    if (-1 < iVar6 + -1) {
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
    }
  }
  iVar6 = param_3[3];
  if (iVar6 == 1) {
    F_00d6ae50(*param_3,GEN_TOF(gen_bits2f(param_3[1])),local_10,local_1c,local_8,local_18,param_1,param_2)
    ;
  }
  else if (iVar6 == 2) {
    F_00d6c0a0(*param_3,GEN_TOF(gen_bits2f(param_3[1])),local_10,local_8,*(undefined4 *)((int)this + 0x1c),
                 *(undefined4 *)((int)this + 0x20),param_1,param_2,local_1c,local_18);
  }
  else if (iVar6 == 3) {
    F_00d6de50(*param_3,GEN_TOF(gen_bits2f(param_3[1])),local_10,local_1c,local_8,local_18,param_1,param_2)
    ;
  }
  if ((param_6[1] != 0) && (param_2 = (undefined4 *)0x0, 0 < local_10)) {
    puVar11 = local_1c + 8;
    do {
      iVar6 = (int)*(short *)(*param_6 + (int)((int)(uintptr_t)param_2) * 2);
      uVar1 = puVar11[-7];
      uVar2 = puVar11[-6];
      uVar3 = puVar11[-5];
      puVar5 = local_14 + iVar6 * 0xc;
      *puVar5 = puVar11[-8];
      puVar5[1] = uVar1;
      puVar5[2] = uVar2;
      puVar5[3] = uVar3;
      uVar1 = puVar11[-3];
      uVar2 = puVar11[-2];
      uVar3 = puVar11[-1];
      puVar5[4] = puVar11[-4];
      puVar5[5] = uVar1;
      puVar5[6] = uVar2;
      puVar5[7] = uVar3;
      uVar1 = puVar11[1];
      uVar2 = puVar11[2];
      uVar3 = puVar11[3];
      puVar5[8] = *puVar11;
      puVar5[9] = uVar1;
      puVar5[10] = uVar2;
      puVar5[0xb] = uVar3;
      if (param_4[1] == 0) {
        *(undefined1 *)(iVar6 + local_24) = 0xff;
      }
      else {
        *(undefined1 *)(iVar6 + local_24) = *(undefined1 *)((int)param_2 + *param_4);
      }
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar11 = puVar11 + 0xc;
    } while ((int)param_2 < local_10);
  }
  if (param_7[1] != 0) {
    iVar6 = 0;
    if (3 < local_8) {
      param_2 = local_18 + 2;
      do {
        iVar7 = (int)*(short *)(*param_7 + iVar6 * 2);
        local_c[iVar7] = param_2[-2];
        if (param_5[1] == 0) {
          *(undefined1 *)(iVar7 + in_esi) = 0xff;
        }
        else {
          *(undefined1 *)(iVar7 + in_esi) = *(undefined1 *)(iVar6 + *param_5);
        }
        iVar7 = (int)*(short *)(*param_7 + 2 + iVar6 * 2);
        local_c[iVar7] = param_2[-1];
        if (param_5[1] == 0) {
          *(undefined1 *)(iVar7 + in_esi) = 0xff;
        }
        else {
          *(undefined1 *)(iVar7 + in_esi) = *(undefined1 *)(*param_5 + 1 + iVar6);
        }
        iVar7 = (int)*(short *)(*param_7 + 4 + iVar6 * 2);
        local_c[iVar7] = *param_2;
        if (param_5[1] == 0) {
          *(undefined1 *)(iVar7 + in_esi) = 0xff;
        }
        else {
          *(undefined1 *)(iVar7 + in_esi) = *(undefined1 *)(*param_5 + 2 + iVar6);
        }
        iVar7 = (int)*(short *)(*param_7 + 6 + iVar6 * 2);
        local_c[iVar7] = param_2[1];
        if (param_5[1] == 0) {
          *(undefined1 *)(iVar7 + in_esi) = 0xff;
        }
        else {
          *(undefined1 *)(iVar7 + in_esi) = *(undefined1 *)(*param_5 + 3 + iVar6);
        }
        param_2 = param_2 + 4;
        iVar6 = iVar6 + 4;
      } while (iVar6 < local_8 + -3);
    }
    for (; iVar6 < local_8; iVar6 = iVar6 + 1) {
      iVar7 = (int)*(short *)(*param_7 + iVar6 * 2);
      local_c[iVar7] = local_18[iVar6];
      if (param_5[1] == 0) {
        *(undefined1 *)(iVar7 + in_esi) = 0xff;
      }
      else {
        *(undefined1 *)(iVar7 + in_esi) = *(undefined1 *)(iVar6 + *param_5);
      }
    }
  }
  F_00d3d340(this,in_eax,local_14,local_24,local_c,in_esi,GEN_TOF(gen_bits2f(param_3[2])),param_8,
               (uint)((byte)((uint)param_3[0x2d] >> 5) & 1));
  uVar1 = *(undefined4 *)((int)this + 0xc);
  if (param_7[1] != 0) {
    F_00d36930(local_18,local_8);
    F_00d36840(in_esi,uVar1);
  }
  if (param_6[1] != 0) {
    F_00d36980(local_1c,local_10);
    F_00d36840(local_24,in_eax);
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)((int)pvVar4 + 8) < (int)uVar9) ||
      (uVar9 + (int)local_c != *(int *)((int)pvVar4 + 0xc))) ||
     (*(undefined4 * PTR32 *)((int)pvVar4 + 0x14) == local_c)) {
    F_00d945c0(pvVar4,local_c,uVar9);
  }
  else {
    *(undefined4 * PTR32 *)((int)pvVar4 + 0xc) = local_c;
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if ((((int)uVar8 <= *(int *)((int)pvVar4 + 8)) &&
      (uVar8 + (int)local_14 == *(int *)((int)pvVar4 + 0xc))) &&
     (*(undefined4 * PTR32 *)((int)pvVar4 + 0x14) != local_14)) {
    *(undefined4 * PTR32 *)((int)pvVar4 + 0xc) = local_14;
    return (uint)pvVar4;
  }
  uVar8 = F_00d945c0(pvVar4,local_14,uVar8);
  return uVar8;
}

/* ref: FUN_00d3d9f0 */
uint F_00d3d9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xd3d9f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  uint param_6 = (uint)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int param_8 = (int)gen_a8;
  undefined4 uVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint local_c;
  uint local_8;
  
  uVar1 = *param_1;
  if (param_8 == 0) {
    iVar7 = *(int *)this;
  }
  else {
    iVar7 = param_3[0x2e];
  }
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_c = *(uint *)((int)pvVar3 + 0xc);
  uVar4 = iVar7 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (*(uint *)((int)pvVar3 + 0x10) < local_c + uVar4))
  {
    local_c = F_00d94390(pvVar3,uVar4);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = local_c + uVar4;
  }
  iVar2 = *(int *)((int)this + 0xc);
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_8 = *(uint *)((int)pvVar3 + 0xc);
  uVar5 = iVar2 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar3 + 8) < (int)uVar5) || (*(uint *)((int)pvVar3 + 0x10) < local_8 + uVar5))
  {
    local_8 = F_00d94390(pvVar3,uVar5);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = local_8 + uVar5;
  }
  F_00d35910(param_6,param_4[1],*param_4,iVar7,local_c);
  F_00d35910(param_7,param_5[1],*param_5,*(undefined4 *)((int)this + 0xc),local_8);
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  param_6 = *(uint *)((int)pvVar3 + 0xc);
  uVar8 = iVar7 * 0x30 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar3 + 8) < (int)uVar8) || (*(uint *)((int)pvVar3 + 0x10) < param_6 + uVar8))
  {
    param_6 = F_00d94390(pvVar3,uVar8);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = param_6 + uVar8;
  }
  iVar2 = *(int *)((int)this + 0xc);
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  param_4 = *(undefined4 * PTR32 *)((int)pvVar3 + 0xc);
  uVar6 = iVar2 * 4 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar3 + 8) < (int)uVar6) ||
     (*(uint *)((int)pvVar3 + 0x10) < (int)param_4 + uVar6)) {
    param_4 = (undefined4 *)F_00d94390(pvVar3,uVar6);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = (int)param_4 + uVar6;
  }
  F_00d6f800(uVar1,*param_3,GEN_TOF(gen_bits2f(param_3[1])),param_1[2],*(undefined4 *)((int)this + 0x1c),
               *(undefined4 *)((int)this + 0x20),*(undefined4 *)this,
               *(undefined4 *)((int)this + 0xc),param_6,param_4,local_c,local_8);
  F_00d3d340(this,iVar7,param_6,local_c,param_4,local_8,GEN_TOF(gen_bits2f(param_3[2])),param_8,
               (uint)((byte)((uint)param_3[0x2d] >> 5) & 1));
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar6) ||
      (uVar6 + (int)param_4 != *(int *)((int)pvVar3 + 0xc))) ||
     ((undefined4 *)*(uint *)((int)pvVar3 + 0x14) == param_4)) {
    F_00d945c0(pvVar3,param_4,uVar6);
  }
  else {
    *(undefined4 * PTR32 *)((int)pvVar3 + 0xc) = param_4;
  }
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar8) || (uVar8 + param_6 != *(int *)((int)pvVar3 + 0xc)))
     || (*(uint *)((int)pvVar3 + 0x14) == param_6)) {
    F_00d945c0(pvVar3,param_6,uVar8);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = param_6;
  }
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar5) || (uVar5 + local_8 != *(int *)((int)pvVar3 + 0xc)))
     || (*(uint *)((int)pvVar3 + 0x14) == local_8)) {
    F_00d945c0(pvVar3,local_8,uVar5);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = local_8;
  }
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if ((((int)uVar4 <= *(int *)((int)pvVar3 + 8)) && (uVar4 + local_c == *(int *)((int)pvVar3 + 0xc))
      ) && (*(uint *)((int)pvVar3 + 0x14) != local_c)) {
    *(uint *)((int)pvVar3 + 0xc) = local_c;
    return (uint)pvVar3;
  }
  uVar4 = F_00d945c0(pvVar3,local_c,uVar4);
  return uVar4;
}

/* ref: FUN_00d3dcd0 */
uint F_00d3dcd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3dcd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d3dcf0 */
unsigned int F_00d3dcf0(void)
{
  GEN_ENTER(0xd3dcf0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d3dd10 */
unsigned int F_00d3dd10(void)
{
  GEN_ENTER(0xd3dd10u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d3dd30 */
uint F_00d3dd30(unsigned int gen_a0)
{
  GEN_ENTER(0xd3dd30u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00d3dd40 */
unsigned int F_00d3dd40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3dd40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if ((param_1 != (undefined4 *)0x0) &&
     (*param_1 = (*(undefined * PTR32 (*)[19])REFP(0x113541c)), param_2 != 0)) {
    F_00d74e60(param_1);
    return 0;
  }
  return 0;
}

/* ref: FUN_00d3dd60 */
uint F_00d3dd60(void)
{
  GEN_ENTER(0xd3dd60u, 0u, 0u, 0u, 0u);
  return 0x113541c;
}

/* ref: FUN_00d3ddb0 */
uint F_00d3ddb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xd3ddb0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00d3de10 */
unsigned int F_00d3de10(unsigned int gen_a0)
{
  GEN_ENTER(0xd3de10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00d3de50 */
uint F_00d3de50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3de50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00d3de80 */
uint F_00d3de80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3de80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00d3dee0 */
unsigned int F_00d3dee0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3dee0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0x10);
  }
  return 0;
}

/* ref: FUN_00d3df10 */
unsigned int F_00d3df10(unsigned int gen_a0)
{
  GEN_ENTER(0xd3df10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,8);
  }
  return 0;
}

/* ref: FUN_00d3df50 */
uint F_00d3df50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3df50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d91510((undefined *)((int)this + 4));
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,8);
  }
  return (uint)this;
}

/* ref: FUN_00d3df90 */
uint F_00d3df90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3df90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3dfd0 */
unsigned int F_00d3dfd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3dfd0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  undefined * this;
  
  iVar1 = param_2 + -1;
  if (-1 < iVar1) {
    this = (undefined *)(param_1 + 4 + iVar1 * 8);
    do {
      F_00d91510(this);
      this = (undefined *)((int)this + -8);
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return 0;
}

/* ref: FUN_00d3e000 */
uint F_00d3e000(unsigned int gen_a0)
{
  GEN_ENTER(0xd3e000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3e040 */
uint F_00d3e040(unsigned int gen_a0)
{
  GEN_ENTER(0xd3e040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)this;
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(uVar1 + 4 + iVar2 * 8);
    do {
      uVar1 = F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -8);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)((int)this + 4) = 0;
  return uVar1;
}

/* ref: FUN_00d3e070 */
uint F_00d3e070(unsigned int gen_a0)
{
  GEN_ENTER(0xd3e070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3e0b0 */
uint F_00d3e0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3e0b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + 4 + iVar2 * 8);
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -8);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3e110 */
uint F_00d3e110(unsigned int gen_a0)
{
  GEN_ENTER(0xd3e110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + 4 + iVar2 * 8);
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -8);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3e170 */
uint F_00d3e170(unsigned int gen_a0)
{
  GEN_ENTER(0xd3e170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + 4 + iVar2 * 8);
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -8);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3e1d0 */
uint F_00d3e1d0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3e1d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 8) + -1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)((int)this + 4) + 4 + iVar2 * 8)));
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -8);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)((int)this + 8) = 0;
  if (-1 < *(int *)((int)this + 0xc)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 4),*(int *)((int)this + 0xc) * 8);
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0x80000000;
  uVar1 = F_00d91510(this);
  return uVar1;
}

/* ref: FUN_00d3e230 */
uint F_00d3e230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3e230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d3e1d0(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,0x10);
  }
  return (uint)this;
}

/* ref: FUN_00d3e270 */
unsigned int F_00d3e270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3e270u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int * piVar1;
  int iVar2;
  
  param_2 = param_2 + -1;
  if (-1 < param_2) {
    piVar1 = (int *)(param_1 + 4 + param_2 * 0x10);
    do {
      iVar2 = piVar1[1] + -1;
      if (-1 < iVar2) {
        this = (undefined *)(*piVar1 + 4 + iVar2 * 8);
        do {
          F_00d91510(this);
          this = (undefined *)((int)this + -8);
          iVar2 = iVar2 + -1;
        } while (-1 < iVar2);
      }
      piVar1[1] = 0;
      if (-1 < piVar1[2]) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*piVar1,piVar1[2] * 8);
      }
      *piVar1 = 0;
      piVar1[2] = ((int)0x80000000);
      F_00d91510(piVar1 + -1);
      param_2 = param_2 + -1;
      piVar1 = piVar1 + -4;
    } while (-1 < param_2);
  }
  return 0;
}

/* ref: FUN_00d3e300 */
unsigned int F_00d3e300(unsigned int gen_a0)
{
  GEN_ENTER(0xd3e300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int * piVar1;
  int iVar2;
  int local_8;
  
  local_8 = *(int *)((int)this + 4) + -1;
  if (-1 < local_8) {
    piVar1 = (int *)(*(int *)this + 4 + local_8 * 0x10);
    do {
      iVar2 = piVar1[1] + -1;
      if (-1 < iVar2) {
        this_00 = (undefined *)(*piVar1 + 4 + iVar2 * 8);
        do {
          F_00d91510(this_00);
          this_00 = (undefined *)((int)this_00 + -8);
          iVar2 = iVar2 + -1;
        } while (-1 < iVar2);
      }
      piVar1[1] = 0;
      if (-1 < piVar1[2]) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*piVar1,piVar1[2] * 8);
      }
      *piVar1 = 0;
      piVar1[2] = ((int)0x80000000);
      F_00d91510(piVar1 + -1);
      local_8 = local_8 + -1;
      piVar1 = piVar1 + -4;
    } while (-1 < local_8);
  }
  *(undefined4 *)((int)this + 4) = 0;
  return 0;
}

/* ref: FUN_00d3e3a0 */
uint F_00d3e3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3e3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined * this_00;
  int * piVar2;
  int iVar3;
  int local_8;
  
  local_8 = *(int *)((int)this + 4) + -1;
  if (-1 < local_8) {
    piVar2 = (int *)(*(int *)this + 4 + local_8 * 0x10);
    do {
      iVar3 = piVar2[1] + -1;
      if (-1 < iVar3) {
        this_00 = (undefined *)(*piVar2 + 4 + iVar3 * 8);
        do {
          F_00d91510(this_00);
          this_00 = (undefined *)((int)this_00 + -8);
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
      }
      piVar2[1] = 0;
      if (-1 < piVar2[2]) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*piVar2,piVar2[2] * 8);
      }
      *piVar2 = 0;
      piVar2[2] = ((int)0x80000000);
      F_00d91510(piVar2 + -1);
      local_8 = local_8 + -1;
      piVar2 = piVar2 + -4;
    } while (-1 < local_8);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3e470 */
uint F_00d3e470(unsigned int gen_a0)
{
  GEN_ENTER(0xd3e470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int * piVar2;
  int iVar3;
  int local_8;
  
  local_8 = *(int *)((int)this + 4) + -1;
  if (-1 < local_8) {
    piVar2 = (int *)(*(int *)this + 4 + local_8 * 0x10);
    do {
      iVar3 = piVar2[1] + -1;
      if (-1 < iVar3) {
        this_00 = (undefined *)(*piVar2 + 4 + iVar3 * 8);
        do {
          F_00d91510(this_00);
          this_00 = (undefined *)((int)this_00 + -8);
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
      }
      piVar2[1] = 0;
      if (-1 < piVar2[2]) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*piVar2,piVar2[2] * 8);
      }
      *piVar2 = 0;
      piVar2[2] = ((int)0x80000000);
      F_00d91510(piVar2 + -1);
      local_8 = local_8 + -1;
      piVar2 = piVar2 + -4;
    } while (-1 < local_8);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3e540 */
uint F_00d3e540(unsigned int gen_a0)
{
  GEN_ENTER(0xd3e540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int * piVar2;
  int iVar3;
  int local_8;
  
  local_8 = *(int *)((int)this + 4) + -1;
  if (-1 < local_8) {
    piVar2 = (int *)(*(int *)this + 4 + local_8 * 0x10);
    do {
      iVar3 = piVar2[1] + -1;
      if (-1 < iVar3) {
        this_00 = (undefined *)(*piVar2 + 4 + iVar3 * 8);
        do {
          F_00d91510(this_00);
          this_00 = (undefined *)((int)this_00 + -8);
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
      }
      piVar2[1] = 0;
      if (-1 < piVar2[2]) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*piVar2,piVar2[2] * 8);
      }
      *piVar2 = 0;
      piVar2[2] = ((int)0x80000000);
      F_00d91510(piVar2 + -1);
      local_8 = local_8 + -1;
      piVar2 = piVar2 + -4;
    } while (-1 < local_8);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3e630 */
uint F_00d3e630(unsigned int gen_a0)
{
  GEN_ENTER(0xd3e630u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkaAnimation::vf12 */
uint F_00d3e660(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3e660u, gen_a0, 0u, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x18) + 0xc))))((undefined4)gen_fl2bits(param_2),param_3);
  return uVar1;
}

/* ref: hkaAnimation::vf13 */
uint F_00d3e680(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, float gen_a6)
{
  GEN_ENTER(0xd3e680u, gen_a0, 0u, 0u, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x18) + 0x10))))
                    (*(int * PTR32 *)(param_1 + 0x18),(undefined4)gen_fl2bits(param_2),
                     (undefined4)gen_fl2bits(param_3));
  return uVar1;
}

/* ref: FUN_00d3e6d0 */
uint F_00d3e6d0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3e6d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int * piVar2;
  int iVar3;
  int local_8;
  
  local_8 = *(int *)((int)this + 0x20) + -1;
  if (-1 < local_8) {
    piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0x1c) + 4 + local_8 * 0x10)));
    do {
      iVar3 = piVar2[1] + -1;
      if (-1 < iVar3) {
        this_00 = (undefined *)(*piVar2 + 4 + iVar3 * 8);
        do {
          F_00d91510(this_00);
          this_00 = (undefined *)((int)this_00 + -8);
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
      }
      piVar2[1] = 0;
      if (-1 < piVar2[2]) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*piVar2,piVar2[2] * 8);
      }
      *piVar2 = 0;
      piVar2[2] = ((int)0x80000000);
      F_00d91510(piVar2 + -1);
      local_8 = local_8 + -1;
      piVar2 = piVar2 + -4;
    } while (-1 < local_8);
  }
  uVar1 = *(uint *)((int)this + 0x24);
  *(undefined4 *)((int)this + 0x20) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x1c),uVar1 << 4);
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0x80000000;
  if (*(undefined * PTR32 *)((int)this + 0x18) != (undefined *)0x0) {
    uVar1 = F_00d91a80(*(undefined * PTR32 *)((int)this + 0x18));
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00d3e7b0 */
uint F_00d3e7b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3e7b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x113541c));
  if (param_1 != 0) {
    F_00d74e60(this);
  }
  return (uint)this;
}

/* ref: FUN_00d3e7d0 */
uint F_00d3e7d0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3e7d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkaSplineCompressedAnimation::vf0 */
uint F_00d3e800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3e800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d6e770(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: hkaAnimation::vf0 */
uint F_00d3e840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3e840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d3e6d0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d3e880 */
uint F_00d3e880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3e880u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d3e8a0 */
unsigned int F_00d3e8a0(void)
{
  GEN_ENTER(0xd3e8a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d3e8c0 */
unsigned int F_00d3e8c0(void)
{
  GEN_ENTER(0xd3e8c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d3e8e0 */
unsigned int F_00d3e8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3e8e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00d64fd0(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00d3e900 */
uint F_00d3e900(unsigned int gen_a0)
{
  GEN_ENTER(0xd3e900u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00d64fe0(param_1);
  return uVar1;
}

/* ref: FUN_00d3e910 */
unsigned int F_00d3e910(unsigned int gen_a0)
{
  GEN_ENTER(0xd3e910u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0x70);
  }
  return 0;
}

/* ref: FUN_00d3e940 */
uint F_00d3e940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3e940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d64fe0(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,0x70);
  }
  return (uint)this;
}

/* ref: FUN_00d3e980 */
uint F_00d3e980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3e980u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d3e990 */
uint F_00d3e990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3e990u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d3e9c0 */
uint F_00d3e9c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3e9c0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00d3e9d0 */
unsigned int F_00d3e9d0(void)
{
  GEN_ENTER(0xd3e9d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d3e9e0 */
unsigned int F_00d3e9e0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3e9e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d91a80((undefined *)*param_1);
  }
  *param_1 = 0;
  return 0;
}

/* ref: FUN_00d3ea00 */
uint F_00d3ea00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3ea00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1135a3c));
    uVar1 = F_00d91350(param_1 + 2,param_2);
  }
  return uVar1;
}

/* ref: FUN_00d3ea20 */
uint F_00d3ea20(void)
{
  GEN_ENTER(0xd3ea20u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x70];
  
  F_00d91350(((undefined1 *)(gen_frame + 0x8)),0);
  return 0x1135a3c;
}

/* ref: FUN_00d3ead0 */
unsigned int F_00d3ead0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3ead0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00d3eb30 */
uint F_00d3eb30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3eb30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00d3eb60 */
uint F_00d3eb60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3eb60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d3eb90 */
uint F_00d3eb90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3eb90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00d3ebc0 */
unsigned int F_00d3ebc0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3ebc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,8);
  }
  return 0;
}

/* ref: FUN_00d3ebf0 */
unsigned int F_00d3ebf0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3ebf0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,8);
  }
  return 0;
}

/* ref: FUN_00d3ec30 */
unsigned int F_00d3ec30(unsigned int gen_a0)
{
  GEN_ENTER(0xd3ec30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00d3ecb0 */
uint F_00d3ecb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3ecb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d91510(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,8);
  }
  return (uint)this;
}

/* ref: FUN_00d3ecf0 */
unsigned int F_00d3ecf0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3ecf0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,4);
  }
  return 0;
}

/* ref: FUN_00d3ed20 */
uint F_00d3ed20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3ed20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,8);
  }
  return (uint)this;
}

/* ref: FUN_00d3ed60 */
unsigned int F_00d3ed60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3ed60u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  undefined * this;
  
  iVar1 = param_2 + -1;
  if (-1 < iVar1) {
    this = (undefined *)(param_1 + iVar1 * 8);
    do {
      F_00d91510(this);
      this = (undefined *)((int)this + -8);
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return 0;
}

/* ref: FUN_00d3ed90 */
unsigned int F_00d3ed90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3ed90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 + -1;
  while (-1 < iVar1) {
    this = *(undefined * PTR32 *)(param_1 + iVar1 * 8);
    if (this != (undefined *)0x0) {
      F_00d91a80(this);
    }
    iVar1 = iVar1 + -1;
    *(undefined4 *)(param_1 + 8 + iVar1 * 8) = 0;
  }
  return 0;
}

/* ref: FUN_00d3edc0 */
uint F_00d3edc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3edc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d91510(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,4);
  }
  return (uint)this;
}

/* ref: FUN_00d3ee00 */
uint F_00d3ee00(unsigned int gen_a0)
{
  GEN_ENTER(0xd3ee00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)this;
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(uVar1 + iVar2 * 8);
    do {
      uVar1 = F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -8);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)((int)this + 4) = 0;
  return uVar1;
}

/* ref: FUN_00d3ee30 */
unsigned int F_00d3ee30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3ee30u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  undefined * this;
  
  iVar1 = param_2 + -1;
  if (-1 < iVar1) {
    this = (undefined *)(param_1 + iVar1 * 4);
    do {
      F_00d91510(this);
      this = (undefined *)((int)this + -4);
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return 0;
}

/* ref: FUN_00d3eea0 */
uint F_00d3eea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3eea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + iVar2 * 8);
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -8);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3ef00 */
uint F_00d3ef00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3ef00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 8);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar1 + 8 + iVar3 * 8) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar2 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00d3ef70 */
uint F_00d3ef70(unsigned int gen_a0)
{
  GEN_ENTER(0xd3ef70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)this;
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(uVar1 + iVar2 * 4);
    do {
      uVar1 = F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -4);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)((int)this + 4) = 0;
  return uVar1;
}

/* ref: FUN_00d3efa0 */
uint F_00d3efa0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3efa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + iVar2 * 8);
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -8);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3f000 */
uint F_00d3f000(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 8);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar1 + 8 + iVar3 * 8) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00d3f070 */
uint F_00d3f070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + iVar2 * 4);
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -4);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3f0d0 */
uint F_00d3f0d0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f0d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + iVar2 * 8);
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -8);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3f130 */
uint F_00d3f130(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 8);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar1 + 8 + iVar3 * 8) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00d3f1a0 */
uint F_00d3f1a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f1a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + iVar2 * 4);
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -4);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3f200 */
uint F_00d3f200(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + iVar2 * 4);
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -4);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3f260 */
uint F_00d3f260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f260u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x1135a3c));
  F_00d91350(in_ecx + 2,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00d3f280 */
uint F_00d3f280(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f280u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00d3f2b0 */
uint F_00d3f2b0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f2b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)((int)this + 0x48);
  iVar3 = *(int *)((int)this + 0x4c) + -1;
  while (-1 < iVar3) {
    pvVar2 = *(undefined * PTR32 *)(iVar4 + iVar3 * 8);
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2);
    }
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar4 + 8 + iVar3 * 8) = 0;
  }
  *(undefined4 *)((int)this + 0x4c) = 0;
  if ((*(uint *)((int)this + 0x50) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x48),
               *(uint *)((int)this + 0x50) * 8);
  }
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x50) = 0x80000000;
  iVar4 = *(int *)((int)this + 0x40) + -1;
  if (-1 < iVar4) {
    pvVar2 = ((undefined *)GEN_TOP((*(int *)((int)this + 0x3c) + iVar4 * 4)));
    do {
      F_00d91510(pvVar2);
      pvVar2 = (undefined *)((int)pvVar2 + -4);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  *(undefined4 *)((int)this + 0x40) = 0;
  if ((*(uint *)((int)this + 0x44) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x3c),
               *(uint *)((int)this + 0x44) * 4);
  }
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x44) = 0x80000000;
  *(undefined4 *)((int)this + 0x34) = 0;
  if ((*(uint *)((int)this + 0x38) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x30),
               *(uint *)((int)this + 0x38) * 4);
  }
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x38) = 0x80000000;
  *(undefined4 *)((int)this + 0x28) = 0;
  if ((*(uint *)((int)this + 0x2c) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x24),
               (*(uint *)((int)this + 0x2c) & 0x3fffffff) * 0x30);
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0x80000000;
  iVar4 = *(int *)((int)this + 0x1c) + -1;
  if (-1 < iVar4) {
    pvVar2 = ((undefined *)GEN_TOP((*(int *)((int)this + 0x18) + iVar4 * 8)));
    do {
      F_00d91510(pvVar2);
      pvVar2 = (undefined *)((int)pvVar2 + -8);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  if ((*(uint *)((int)this + 0x20) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x18),
               *(uint *)((int)this + 0x20) * 8);
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0x80000000;
  *(undefined4 *)((int)this + 0x10) = 0;
  if ((*(uint *)((int)this + 0x14) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xc),
               (*(uint *)((int)this + 0x14) & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  uVar1 = F_00d91510((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkaSkeleton::vf0 */
uint F_00d3f460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d3f2b0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d3f4a0 */
uint F_00d3f4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d3f4c0 */
unsigned int F_00d3f4c0(void)
{
  GEN_ENTER(0xd3f4c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d3f4e0 */
uint F_00d3f4e0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f4e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00d3f4f0 */
unsigned int F_00d3f4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if ((param_1 != (undefined4 *)0x0) && (*param_1 = (*(undefined * PTR32 (*)[19])REFP(0x1135b5c)), param_2 != 0)) {
    F_00d76e30(param_1);
    return 0;
  }
  return 0;
}

/* ref: FUN_00d3f510 */
uint F_00d3f510(void)
{
  GEN_ENTER(0xd3f510u, 0u, 0u, 0u, 0u);
  return 0x1135b5c;
}

/* ref: FUN_00d3f520 */
uint F_00d3f520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x1135b5c));
  if (param_1 != 0) {
    F_00d76e30(this);
  }
  return (uint)this;
}

/* ref: FUN_00d3f540 */
uint F_00d3f540(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f540u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkaQuantizedAnimation::vf0 */
uint F_00d3f570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d78ae0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d3f5b0 */
uint F_00d3f5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d3f5d0 */
unsigned int F_00d3f5d0(void)
{
  GEN_ENTER(0xd3f5d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d3f5f0 */
unsigned int F_00d3f5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d7be90(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00d3f610 */
uint F_00d3f610(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f610u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00d3f620 */
uint F_00d3f620(void)
{
  GEN_ENTER(0xd3f620u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  
  F_00d7be90(((uint *)(gen_frame + 0x0)),0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: FUN_00d3f660 */
uint F_00d3f660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f660u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d3f670 */
uint F_00d3f670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f670u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d3f6a0 */
unsigned int F_00d3f6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f6a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00d7e8d0(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00d3f6c0 */
uint F_00d3f6c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f6c0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00d3f6d0 */
uint F_00d3f6d0(void)
{
  GEN_ENTER(0xd3f6d0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x40];
  
  F_00d7e8d0(((uint *)(gen_frame + 0x0)),0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: FUN_00d3f700 */
unsigned int F_00d3f700(void)
{
  GEN_ENTER(0xd3f700u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d3f710 */
uint F_00d3f710(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f710u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 2);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00d3f750 */
unsigned int F_00d3f750(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f750u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0xc);
  }
  return 0;
}

/* ref: FUN_00d3f790 */
uint F_00d3f790(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3f7d0 */
uint F_00d3f7d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f7d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)*(uint *)((int)this + 8)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(*(uint *)((int)this + 8) & 0x3fffffff) * 2
              );
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,0xc);
  }
  return (uint)this;
}

/* ref: FUN_00d3f840 */
uint F_00d3f840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f840u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d3f850 */
uint F_00d3f850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f850u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00d91350(in_ecx,param_2);
  return in_ecx;
}

/* ref: FUN_00d3f880 */
unsigned int F_00d3f880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3f880u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00d91350(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00d3f8a0 */
uint F_00d3f8a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3f8a0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00d91510(param_1);
  return uVar1;
}

