#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonObstruction::vf15 */
byte F_00d09cd0(void)
{
  GEN_ENTER(0xd09cd0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonObstruction::vf21 */
byte F_00d09ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd09ce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  if (((((float10)*param_1 <= (float10)*(float *)(this + 0x13c)) &&
       ((float10)*(float *)(this + 300) <= (float10)*param_2)) &&
      ((float10)param_1[1] <= (float10)*(float *)(this + 0x140))) &&
     ((((float10)*(float *)(this + 0x130) <= (float10)param_2[1] &&
       ((float10)param_1[2] <= (float10)*(float *)(this + 0x144))) &&
      ((float10)*(float *)(this + 0x134) <= (float10)param_2[2])))) {
    return 1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonObstruction::vf18 */
uint F_00d09d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd09d70u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_3 < 0x230) {
    return 0;
  }
  puVar2 = *(undefined4 * PTR32 *)(in_ecx + 0x128);
  puVar3 = param_2;
  for (iVar1 = 0x8c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0x230;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonObstruction::vf19 */
byte F_00d09db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd09db0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonObstruction::vf20 */
unsigned int F_00d09dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd09dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00d09e50 */
uint F_00d09e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd09e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  ushort uVar1;
  uint uVar2;
  float10 fVar3;
  
  if (param_1 == 0) {
    uVar1 = *((ushort *)GEN_TOP((*(int *)((int)this + 0x128) + 0x22e)));
    fVar3 = (float10)1;
  }
  else {
    uVar1 = *((ushort *)GEN_TOP((*(int *)((int)this + 0x128) + 0x22c)));
    fVar3 = (float10)*(float *)&REFG(undefined, 0x1097254);
  }
  uVar2 = F_00cccd90((int)this + 0x32c,(float)fVar3,(uint)uVar1 * 1000 >> 4);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonObstruction::vf25 */
uint F_00d09ea0(unsigned int gen_a0)
{
  GEN_ENTER(0xd09ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x260];
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x24c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x250);
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
  uVar1 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar1 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x240);
  }
  F_00c47745((*(uint *)(gen_frame + 0x24c)) ^ (uint)(uint)(gen_frame + 0x250));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonObstruction::vf27 */
unsigned int F_00d09f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd09f20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_2;
  puVar3 = *(undefined4 * PTR32 *)(in_ecx + 0x128);
  for (iVar1 = 0x8c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonObstruction::vf30 */
byte F_00d09f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd09f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  
  bVar5 = F_00d21f00((undefined *)this,param_1);
  if (bVar5 != 0) {
    iVar6 = 0;
    if (*((char *)GEN_TOP((*(int *)(this + 0x128) + 0x229))) != '\0') {
      iVar7 = 0;
      do {
        iVar1 = *(int *)(this + 0x128);
        dVar2 = (double)*(float *)(iVar7 + 0x28 + iVar1);
        dVar3 = (double)*(float *)(iVar7 + 0x24 + iVar1);
        dVar4 = (double)*(float *)(iVar7 + 0x20 + iVar1);
        F_00c49386(param_1,"Position[%d] = %f %f %f\n",iVar6,(int)(ulonglong)gen_d2bits(dVar4),
                 (int)((ulonglong)gen_d2bits(dVar4) >> 0x20),(int)(ulonglong)gen_d2bits(dVar3),
                 (int)((ulonglong)gen_d2bits(dVar3) >> 0x20),(int)(ulonglong)gen_d2bits(dVar2),
                 (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 0x10;
      } while (iVar6 < (int)(uint)*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x229))));
    }
    F_00c49386(param_1,"ObstacleFac = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x220))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x220))))));
    F_00c49386(param_1,"HicutFac = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x224))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x224))))));
    F_00c49386(param_1,"BlockadeFlag = %d\n",*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x228))) & 0xf);
    F_00c49386(param_1,"fUseHicutFac = %d\n",*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x228))) >> 4 & 1);
    F_00c49386(param_1,"VertexCount = %d\n",(uint)*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x229))));
    F_00c49386(param_1,"[EndOfSoundObject]\n\n");
    return 1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonObstruction::vf31 */
byte F_00d0a060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd0a060u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  char * pcVar2;
  int iVar3;
  uint uVar4;
  byte * pbVar5;
  bool bVar6;
  double dVar7;
  
  pcVar2 = "Position";
  pbVar5 = (byte *)param_2;
  do {
    bVar1 = *pcVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00d0a091: ;
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00d0a096;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00d0a091;
    pcVar2 = pcVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d0a096: ;
  if (iVar3 == 0) {
    uVar4 = F_00d00d00(0,0);
    if (uVar4 != 0) {
      uVar4 = F_00c4c74c(uVar4);
      pcVar2 = (char *)F_00d00d00(0,0);
      if (pcVar2 != (char *)0x0) {
        dVar7 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + (uVar4 + 2) * 0x10))) = (float)dVar7;
        pcVar2 = (char *)F_00d00d00(0,0);
        if (pcVar2 != (char *)0x0) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x24 + uVar4 * 0x10))) = (float)dVar7;
          pcVar2 = (char *)F_00d00d00(0,0);
          if (pcVar2 != (char *)0x0) {
            dVar7 = F_00c4acaa(pcVar2);
            *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x28 + uVar4 * 0x10))) = (float)dVar7;
            return 1;
          }
        }
      }
    }
  }
  else {
    pcVar2 = "ObstacleFac";
    pbVar5 = (byte *)param_2;
    do {
      bVar1 = *pcVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00d0a166: ;
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00d0a16b;
      }
      if (bVar1 == 0) break;
      bVar1 = pcVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00d0a166;
      pcVar2 = pcVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00d0a16b: ;
    if (iVar3 == 0) {
      pcVar2 = (char *)F_00d00d00(0,0);
      if (pcVar2 != (char *)0x0) {
        dVar7 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x220))) = (float)dVar7;
        return 1;
      }
    }
    else {
      pcVar2 = "HicutFac";
      pbVar5 = (byte *)param_2;
      do {
        bVar1 = *pcVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00d0a1d0: ;
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00d0a1d5;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00d0a1d0;
        pcVar2 = pcVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00d0a1d5: ;
      if (iVar3 == 0) {
        pcVar2 = (char *)F_00d00d00(0,0);
        if (pcVar2 != (char *)0x0) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x224))) = (float)dVar7;
          return 1;
        }
      }
      else {
        pcVar2 = "fUseHicutFac";
        pbVar5 = (byte *)param_2;
        do {
          bVar1 = *pcVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00d0a235: ;
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_00d0a23a;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00d0a235;
          pcVar2 = pcVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00d0a23a: ;
        if (iVar3 == 0) {
          uVar4 = F_00d00d00(0,0);
          if (uVar4 != 0) {
            uVar4 = F_00c4c74c(uVar4);
            pbVar5 = ((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x228)));
            *pbVar5 = *pbVar5 ^ ((char)uVar4 << 4 ^ *((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x228)))) &
                                0x10;
            return 1;
          }
        }
        else {
          pcVar2 = "BlockadeFlag";
          pbVar5 = (byte *)param_2;
          do {
            bVar1 = *pcVar2;
            bVar6 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_00d0a2a0: ;
              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
              goto LAB_00d0a2a5;
            }
            if (bVar1 == 0) break;
            bVar1 = pcVar2[1];
            bVar6 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00d0a2a0;
            pcVar2 = pcVar2 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_00d0a2a5: ;
          if (iVar3 == 0) {
            uVar4 = F_00d00d00(0,0);
            if (uVar4 != 0) {
              uVar4 = F_00c4c74c(uVar4);
              pbVar5 = ((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x228)));
              *pbVar5 = *pbVar5 ^ (*((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x228))) ^ (byte)uVar4) & 0xf
              ;
              return 1;
            }
          }
          else {
            pcVar2 = "VertexCount";
            pbVar5 = (byte *)param_2;
            do {
              bVar1 = *pcVar2;
              bVar6 = bVar1 < *pbVar5;
              if (bVar1 != *pbVar5) {
LAB_00d0a310: ;
                iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                goto LAB_00d0a315;
              }
              if (bVar1 == 0) break;
              bVar1 = pcVar2[1];
              bVar6 = bVar1 < pbVar5[1];
              if (bVar1 != pbVar5[1]) goto LAB_00d0a310;
              pcVar2 = pcVar2 + 2;
              pbVar5 = pbVar5 + 2;
            } while (bVar1 != 0);
            iVar3 = 0;
LAB_00d0a315: ;
            if (iVar3 != 0) {
              bVar1 = F_00d22040(param_1,param_2);
              return bVar1;
            }
            uVar4 = F_00d00d00(0,0);
            if (uVar4 != 0) {
              uVar4 = F_00c4c74c(uVar4);
              *((char *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x229))) = (char)uVar4;
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonObstruction::vf22 */
uint F_00d0a790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd0a790u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float10 fVar9;
  byte bVar10;
  undefined * pPVar11;
  undefined3 extraout_var = 0;
  float * pfVar13;
  int iVar14;
  undefined * pPVar15;
  float10 fVar16;
  float10 fVar17;
  uint uVar12;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  *param_4 = 0;
  uVar12 = *(uint *)(this + 0x128);
  (*(int *)(gen_frame + 0x0)) = 0;
  if (*(byte *)(uVar12 + 0x229) != 2 && -1 < (int)(*(byte *)(uVar12 + 0x229) - 2)) {
    fVar16 = (float10)*(float *)&REFG(undefined, 0x1097254);
    iVar14 = -0x134 - (int)this;
    pPVar15 = this + 0x154;
    do {
      fVar1 = param_1[3];
      fVar2 = param_1[2];
      fVar3 = param_1[1];
      fVar4 = param_2[3];
      fVar5 = param_2[2];
      fVar6 = param_2[1];
      fVar17 = ((float10)GEN_TOD(((fVar5 * *(float *)pPVar15 + *param_2 * *(float *)(pPVar15 + -8)) +
                        fVar6 * *(float *)(pPVar15 + -4))));
      if ((GEN_ISNAN(fVar16) || GEN_ISNAN(fVar17)) == ((GEN_ISNAN(fVar16) || GEN_ISNAN(fVar17)) || fVar16 == fVar17)) {
        fVar8 = ((float)GEN_TOF((((float10)GEN_TOD((((*(float *)(pPVar15 + uVar12 + 8 + iVar14) - fVar2) *
                                   *(float *)pPVar15 +
                                  (*(float *)(pPVar15 + uVar12 + iVar14) - *param_1) *
                                  *(float *)(pPVar15 + -8)) +
                                 (*(float *)(pPVar15 + uVar12 + 4 + iVar14) - fVar3) *
                                 *(float *)(pPVar15 + -4)))) / fVar17)));
        fVar17 = (float10)fVar8;
        if ((!(fVar16 <= fVar17) == ((GEN_ISNAN(fVar17) || GEN_ISNAN(fVar16)) || fVar17 == fVar16)) &&
           (fVar9 = (float10)1, (GEN_ISNAN(fVar9) || GEN_ISNAN(fVar17)) || fVar9 < fVar17 == (fVar9 == fVar17)))
        {
          (*(int *)(gen_frame + 0x4)) = 3;
          *param_3 = fVar8 * *param_2 + *param_1;
          param_3[1] = fVar8 * fVar6 + fVar3;
          param_3[2] = fVar8 * fVar5 + fVar2;
          param_3[3] = fVar8 * fVar4 + fVar1;
          fVar1 = *param_3;
          fVar2 = param_3[1];
          fVar3 = param_3[2];
          fVar4 = param_3[3];
          pPVar11 = pPVar15 + *(int *)(this + 0x128) + iVar14;
          pfVar13 = ((float *)(gen_frame + 0x3c));
          do {
            fVar5 = *(float *)pPVar11;
            fVar6 = *(float *)(pPVar11 + 4);
            fVar8 = *(float *)(pPVar11 + 8);
            fVar7 = *(float *)(pPVar11 + 0xc);
            pPVar11 = pPVar11 + 0x10;
            (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + -1;
            *pfVar13 = fVar5 - fVar1;
            pfVar13[1] = fVar6 - fVar2;
            pfVar13[2] = fVar8 - fVar3;
            pfVar13[3] = fVar7 - fVar4;
            pfVar13 = pfVar13 + 4;
          } while ((*(int *)(gen_frame + 0x4)) != 0);
          F_01052f50(((float *)(gen_frame + 0x3c)),((undefined1 *)(gen_frame + 0x2c)));
          bVar10 = F_010530d0(((float *)(gen_frame + 0x3c)),((undefined1 *)(gen_frame + 0x2c)));
          uVar12 = CONCAT31(extraout_var,bVar10);
          if (bVar10 != 0) break;
          fVar16 = (float10)*(float *)&REFG(undefined, 0x1097254);
        }
      }
      uVar12 = *(uint *)(this + 0x128);
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
      pPVar15 = pPVar15 + 0x10;
    } while ((*(int *)(gen_frame + 0x0)) < (int)(*(byte *)(uVar12 + 0x229) - 2));
  }
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70));
  return uVar12;
}

/* ref: FUN_00d0ab20 */
float F_00d0ab20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd0ab20u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x270];
  undefined4 * puVar1;
  undefined8 * puVar2;
  undefined4 uVar3;
  float fVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined4 uVar7;
  float * pfVar8;
  float * pfVar9;
  undefined4 * puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  float10 fVar14;
  float10 fVar15;
  float fVar19;
  float fVar20;
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar17 [16];
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  
  (*(uint *)(gen_frame + 0x25c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x260);
  uVar11 = (uint)*(byte *)(param_1 + 0x229);
  if (uVar11 != 0) {
    pfVar9 = ((float *)(gen_frame + 0x58));
    iVar13 = param_1 + 0x20;
    (*(uint *)(gen_frame + 0x8)) = uVar11;
    do {
      pfVar8 = (float *)F_00c34320(param_2,((undefined1 *)(gen_frame + 0x30)),iVar13);
      fVar4 = pfVar8[1];
      *pfVar9 = *pfVar8;
      fVar25 = pfVar8[2];
      fVar20 = pfVar8[3];
      pfVar9[1] = fVar4;
      pfVar9[2] = fVar25;
      pfVar9[3] = fVar20;
      iVar13 = iVar13 + 0x10;
      pfVar9 = pfVar9 + 4;
      (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) - 1;
    } while ((*(uint *)(gen_frame + 0x8)) != 0);
    if (uVar11 != 0) {
      fVar4 = *param_3;
      fVar25 = param_3[1];
      fVar20 = param_3[2];
      fVar19 = param_3[3];
      pfVar9 = ((float *)(gen_frame + 0x58)) + 2;
      uVar12 = uVar11;
      do {
        uVar12 = uVar12 - 1;
        (*(float *)(gen_frame + 0x40)) = pfVar9[-2] - fVar4;
        (*(float *)(gen_frame + 0x44)) = pfVar9[-1] - fVar25;
        (*(float *)(gen_frame + 0x48)) = *pfVar9 - fVar20;
        (*(float *)(gen_frame + 0x4c)) = pfVar9[1] - fVar19;
        pfVar9[-2] = pfVar9[-2] - fVar4;
        pfVar9[-1] = pfVar9[-1] - fVar25;
        *pfVar9 = *pfVar9 - fVar20;
        pfVar9[1] = pfVar9[1] - fVar19;
        pfVar9 = pfVar9 + 4;
      } while (uVar12 != 0);
    }
  }
  fVar4 = *(float *)&REFG(undefined, 0x1097254);
  (*(float *)(gen_frame + 0x20)) = ((float *)(gen_frame + 0x58))[0];
  (*(float *)(gen_frame + 0x24)) = ((float *)(gen_frame + 0x58))[1];
  (*(float *)(gen_frame + 0x28)) = ((float *)(gen_frame + 0x58))[2];
  (*(float *)(gen_frame + 0x2c)) = ((float *)(gen_frame + 0x58))[3];
  (*(float *)(gen_frame + 0x10)) = ((float *)(gen_frame + 0x58))[0];
  (*(float *)(gen_frame + 0x14)) = ((float *)(gen_frame + 0x58))[1];
  (*(float *)(gen_frame + 0x18)) = ((float *)(gen_frame + 0x58))[2];
  (*(float *)(gen_frame + 0x1c)) = ((float *)(gen_frame + 0x58))[3];
  if (1 < uVar11) {
    puVar10 = ((undefined4 *)(gen_frame + 0x70));
    iVar13 = uVar11 - 1;
    do {
      puVar1 = puVar10 + 1;
      uVar3 = *puVar10;
      puVar2 = (undefined8 *)(puVar10 + -2);
      puVar10 = puVar10 + 4;
      iVar13 = iVar13 + -1;
      (*(undefined4 *)((char *)&auVar5 + 4)) = uVar3;
      (*(undefined4 *)((char *)&auVar5 + 0)) = uVar3;
      (*(undefined4 *)((char *)&auVar5 + 8)) = *puVar1;
      (*(undefined8 *)((char *)&auVar16 + 8)) = (*(undefined8 *)((char *)&auVar5 + 4));
      (*(undefined8 *)((char *)&auVar16 + 0)) = *puVar2;
      (*(undefined4 *)((char *)&auVar30 + 4)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x24)));
      (*(undefined4 *)((char *)&auVar30 + 0)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x20)));
      (*(undefined4 *)((char *)&auVar6 + 4)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x28)));
      (*(undefined4 *)((char *)&auVar6 + 0)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x28)));
      (*(undefined4 *)((char *)&auVar6 + 8)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x2c)));
      (*(undefined8 *)((char *)&auVar30 + 8)) = (*(undefined8 *)((char *)&auVar6 + 4));
      (*(undefined4 *)((char *)&auVar29 + 8)) = uVar3;
      (*(undefined8 *)((char *)&auVar29 + 0)) = *puVar2;
      (*(undefined4 *)((char *)&auVar29 + 12)) = *puVar1;
      gen_minps(&(auVar30), &(auVar29), &(auVar30));
      memcpy(&(*(gen_v16 *)((undefined1 *)(gen_frame + 0x30))), &(auVar30), sizeof(auVar30) < sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x30))) ? sizeof(auVar30) : sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x30))));
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x30)) + 0)) = (*(undefined4 *)((char *)&auVar30 + 0));
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x30)) + 4)) = (*(undefined4 *)((char *)&auVar30 + 4));
      (*(float *)(gen_frame + 0x20)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x30)) + 0)));
      (*(float *)(gen_frame + 0x38)) = (*(float *)((char *)&auVar30 + 8));
      (*(float *)(gen_frame + 0x24)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x30)) + 4)));
      (*(float *)(gen_frame + 0x3c)) = (*(float *)((char *)&auVar30 + 12));
      fVar25 = (*(float *)(gen_frame + 0x3c));
      (*(float *)(gen_frame + 0x28)) = (*(float *)(gen_frame + 0x38));
      (*(float *)(gen_frame + 0x2c)) = (*(float *)(gen_frame + 0x3c));
      (*(undefined4 *)((char *)&auVar22 + 4)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x18)));
      (*(undefined4 *)((char *)&auVar22 + 0)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x10)));
      (*(undefined4 *)((char *)&auVar22 + 8)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x18)));
      (*(undefined4 *)((char *)&auVar22 + 12)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x1c)));
      (*(undefined8 *)((char *)&auVar21 + 8)) = (*(undefined8 *)((char *)&auVar22 + 8));
      (*(undefined4 *)((char *)&auVar21 + 4)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x14)));
      (*(undefined4 *)((char *)&auVar21 + 0)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x10)));
      gen_maxps(&(auVar16), &(auVar16), &(auVar21));
      memcpy(&(*(gen_v16 *)((undefined1 *)(gen_frame + 0x30))), &(auVar16), sizeof(auVar16) < sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x30))) ? sizeof(auVar16) : sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x30))));
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x30)) + 0)) = (*(undefined4 *)((char *)&auVar16 + 0));
      (*(float *)(gen_frame + 0x40)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x30)) + 0)));
      (*(float *)(gen_frame + 0x10)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x30)) + 0)));
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x30)) + 4)) = (*(undefined4 *)((char *)&auVar16 + 4));
      (*(float *)(gen_frame + 0x44)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x30)) + 4)));
      (*(float *)(gen_frame + 0x14)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x30)) + 4)));
      (*(float *)(gen_frame + 0x38)) = (*(float *)((char *)&auVar16 + 8));
      (*(float *)(gen_frame + 0x48)) = (*(float *)(gen_frame + 0x38));
      (*(float *)(gen_frame + 0x18)) = (*(float *)(gen_frame + 0x38));
      (*(float *)(gen_frame + 0x3c)) = (*(float *)((char *)&auVar16 + 12));
      (*(float *)(gen_frame + 0x4c)) = (*(float *)(gen_frame + 0x3c));
      (*(float *)(gen_frame + 0x1c)) = (*(float *)(gen_frame + 0x3c));
    } while (iVar13 != 0);
  }
  (*(float *)((char *)&auVar24 + 0)) = (*(float *)(gen_frame + 0x10)) - (*(float *)(gen_frame + 0x20));
  fVar25 = (*(float *)(gen_frame + 0x14)) - (*(float *)(gen_frame + 0x24));
  (*(float *)((char *)&auVar24 + 8)) = (*(float *)(gen_frame + 0x18)) - (*(float *)(gen_frame + 0x28));
  (*(float *)((char *)&auVar24 + 12)) = (*(float *)(gen_frame + 0x1c)) - (*(float *)(gen_frame + 0x2c));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x30)) + 0)) = (undefined4)gen_fl2bits((*(float *)((char *)&auVar24 + 0)));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x30)) + 4)) = (undefined4)gen_fl2bits(fVar25);
  (*(float *)(gen_frame + 0x38)) = (*(float *)((char *)&auVar24 + 8));
  (*(float *)(gen_frame + 0x3c)) = (*(float *)((char *)&auVar24 + 12));
  (*(float *)(gen_frame + 0x40)) = (*(float *)((char *)&auVar24 + 0));
  (*(float *)((char *)&auVar18 + 0)) = (*(float *)(gen_frame + 0x10)) + (*(float *)(gen_frame + 0x20));
  fVar19 = (*(float *)(gen_frame + 0x14)) + (*(float *)(gen_frame + 0x24));
  (*(float *)((char *)&auVar18 + 8)) = (*(float *)(gen_frame + 0x18)) + (*(float *)(gen_frame + 0x28));
  (*(float *)((char *)&auVar18 + 12)) = (*(float *)(gen_frame + 0x1c)) + (*(float *)(gen_frame + 0x2c));
  (*(float *)(gen_frame + 0x44)) = fVar25;
  (*(float *)(gen_frame + 0x48)) = (*(float *)((char *)&auVar24 + 8));
  (*(float *)(gen_frame + 0x4c)) = (*(float *)((char *)&auVar24 + 12));
  (*(undefined4 *)((char *)&auVar24 + 4)) = (undefined4)gen_fl2bits((*(float *)((char *)&auVar24 + 8)));
  (*(undefined8 *)((char *)&auVar23 + 8)) = (*(undefined8 *)((char *)&auVar24 + 8));
  (*(undefined8 *)((char *)&auVar23 + 0)) = ((undefined1 *)(gen_frame + 0x30));
  gen_divps(&(auVar16), &(auVar23), &(*(gen_v16 *)&REFG(undefined, 0x11323f0)));
  memcpy(&(*(gen_v16 *)((undefined1 *)(gen_frame + 0x30))), &(auVar16), sizeof(auVar16) < sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x30))) ? sizeof(auVar16) : sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x30))));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x30)) + 0)) = (*(undefined4 *)((char *)&auVar16 + 0));
  uVar3 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x30)) + 0));
  (*(float *)(gen_frame + 0x40)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x30)) + 0)));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x30)) + 4)) = (*(undefined4 *)((char *)&auVar16 + 4));
  uVar7 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x30)) + 4));
  (*(float *)(gen_frame + 0x44)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x30)) + 4)));
  (*(float *)(gen_frame + 0x38)) = (*(float *)((char *)&auVar16 + 8));
  fVar25 = (*(float *)(gen_frame + 0x38));
  (*(float *)(gen_frame + 0x48)) = (*(float *)(gen_frame + 0x38));
  (*(float *)(gen_frame + 0x3c)) = (*(float *)((char *)&auVar16 + 12));
  fVar20 = (*(float *)(gen_frame + 0x3c));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x30)) + 0)) = (undefined4)gen_fl2bits((*(float *)((char *)&auVar18 + 0)));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x30)) + 4)) = (undefined4)gen_fl2bits(fVar19);
  (*(float *)(gen_frame + 0x38)) = (*(float *)((char *)&auVar18 + 8));
  (*(float *)(gen_frame + 0x3c)) = (*(float *)((char *)&auVar18 + 12));
  (*(float *)(gen_frame + 0x4c)) = fVar20;
  (*(float *)(gen_frame + 0x40)) = (*(float *)((char *)&auVar18 + 0));
  (*(float *)(gen_frame + 0x44)) = fVar19;
  (*(float *)(gen_frame + 0x48)) = (*(float *)((char *)&auVar18 + 8));
  (*(float *)(gen_frame + 0x4c)) = (*(float *)((char *)&auVar18 + 12));
  (*(undefined4 *)((char *)&auVar18 + 4)) = (undefined4)gen_fl2bits((*(float *)((char *)&auVar18 + 8)));
  (*(undefined8 *)((char *)&auVar17 + 8)) = (*(undefined8 *)((char *)&auVar18 + 8));
  (*(undefined8 *)((char *)&auVar17 + 0)) = ((undefined1 *)(gen_frame + 0x30));
  gen_divps(&(auVar16), &(auVar17), &(*(gen_v16 *)&REFG(undefined, 0x11323f0)));
  memcpy(&(*(gen_v16 *)((undefined1 *)(gen_frame + 0x30))), &(auVar16), sizeof(auVar16) < sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x30))) ? sizeof(auVar16) : sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x30))));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x30)) + 0)) = (*(undefined4 *)((char *)&auVar16 + 0));
  (*(float *)(gen_frame + 0x40)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x30)) + 0)));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x30)) + 4)) = (*(undefined4 *)((char *)&auVar16 + 4));
  (*(float *)(gen_frame + 0x44)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x30)) + 4)));
  (*(float *)(gen_frame + 0x38)) = (*(float *)((char *)&auVar16 + 8));
  (*(float *)(gen_frame + 0x48)) = (*(float *)(gen_frame + 0x38));
  (*(float *)(gen_frame + 0x3c)) = (*(float *)((char *)&auVar16 + 12));
  (*(float *)(gen_frame + 0x4c)) = (*(float *)(gen_frame + 0x3c));
  fVar20 = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x30)) + 4))) * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x30)) + 4)));
  fVar19 = (*(float *)(gen_frame + 0x38)) * (*(float *)(gen_frame + 0x38));
  fVar26 = (fVar19 + fVar20) + fVar20;
  fVar27 = (fVar19 + fVar19) + fVar20;
  fVar28 = (fVar19 + (*(float *)(gen_frame + 0x3c)) * (*(float *)(gen_frame + 0x3c))) + fVar20;
  fVar20 = SQRT((fVar19 + gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x30)) + 0))) * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x30)) + 0)))) + fVar20);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x30)) + 0)) = (undefined4)gen_fl2bits(fVar20);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x30)) + 4)) = (undefined4)gen_fl2bits(fVar26);
  (*(float *)(gen_frame + 0x38)) = fVar27;
  (*(float *)(gen_frame + 0x3c)) = fVar28;
  fVar14 = (float10)fVar20;
  fVar15 = ((float10)GEN_TOD(SQRT((fVar25 * fVar25 + gen_bits2f(uVar3) * gen_bits2f(uVar3)) +
                         gen_bits2f(uVar7) * gen_bits2f(uVar7))));
  if (fVar14 <= fVar15 && ((!GEN_ISNAN(fVar15) && !GEN_ISNAN(fVar14)) && fVar15 != fVar14)) {
    F_00c47745((*(uint *)(gen_frame + 0x25c)) ^ (uint)(uint)(gen_frame + 0x260));
    return fVar4;
  }
  F_00c47745((*(uint *)(gen_frame + 0x25c)) ^ (uint)(uint)(gen_frame + 0x260));
  return (float)(fVar14 - fVar15);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonObstruction::vf23 */
uint F_00d0b0a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd0b0a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x230];
  float fVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  float10 fVar6;
  float10 fVar7;
  float fVar8;
  
  (*(uint *)(gen_frame + 0x21c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x220);
  iVar4 = *(int *)(this + 0x128);
  (*(byte *)(gen_frame + 0x17)) = (*(byte *)(iVar4 + 0x228) & 1) == 0;
  if ((bool)(*(byte *)(gen_frame + 0x17))) {
    F_01053470(iVar4 + 0x20,iVar4 + 0x30,param_1,((float *)(gen_frame + 0x18)));
  }
  if (((*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x228))) & 2) == 0) &&
     ((*(int *)(gen_frame + 0xc)) = (int)(*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x229))) - 1) / 2, 0 < (*(int *)(gen_frame + 0xc)))) {
    (*(float *)(gen_frame + 0x10)) = 0.0;
    do {
      F_01053470((int)gen_fl2bits((*(float *)(gen_frame + 0x10))) + 0x20 + *(int *)(this + 0x128),
                   (int)gen_fl2bits((*(float *)(gen_frame + 0x10))) + 0x40 + *(int *)(this + 0x128),param_1,
                   ((float *)(gen_frame + 0x18)) + (uint)(*(byte *)(gen_frame + 0x17)) * 4);
      (*(float *)(gen_frame + 0x10)) = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x10))) + 0x20);
      (*(byte *)(gen_frame + 0x17)) = (*(byte *)(gen_frame + 0x17)) + 1;
      (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + -1;
    } while ((*(int *)(gen_frame + 0xc)) != 0);
  }
  iVar4 = *(int *)(this + 0x128);
  if ((*(byte *)(iVar4 + 0x228) & 4) == 0) {
    iVar4 = iVar4 + (uint)*(byte *)(iVar4 + 0x229) * 0x10;
    F_01053470(iVar4,iVar4 + 0x10,param_1,((float *)(gen_frame + 0x18)) + (uint)(*(byte *)(gen_frame + 0x17)) * 4);
    (*(byte *)(gen_frame + 0x17)) = (*(byte *)(gen_frame + 0x17)) + 1;
  }
  iVar4 = *(int *)(this + 0x128);
  if (((*(byte *)(iVar4 + 0x228) & 8) == 0) &&
     (iVar4 = (int)(*(byte *)(iVar4 + 0x229) - 2) / 2, 0 < iVar4)) {
    (*(float *)(gen_frame + 0x10)) = 0.0;
    (*(int *)(gen_frame + 0xc)) = iVar4;
    do {
      F_01053470(*(int *)(this + 0x128) + (int)gen_fl2bits((*(float *)(gen_frame + 0x10))) + 0x30,
                   *(int *)(this + 0x128) + (int)gen_fl2bits((*(float *)(gen_frame + 0x10))) + 0x50,param_1,
                   ((float *)(gen_frame + 0x18)) + (uint)(*(byte *)(gen_frame + 0x17)) * 4);
      (*(float *)(gen_frame + 0x10)) = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x10))) + 0x20);
      iVar4 = 0;
      (*(byte *)(gen_frame + 0x17)) = (*(byte *)(gen_frame + 0x17)) + 1;
      (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + -1;
    } while ((*(int *)(gen_frame + 0xc)) != 0);
  }
  uVar2 = CONCAT31((int3)((uint)iVar4 >> 8),(*(byte *)(gen_frame + 0x17)));
  if ((*(byte *)(gen_frame + 0x17)) != 0) {
    iVar4 = 0;
    (*(float *)(gen_frame + 0x10)) = *(float *)&REFG(undefined, 0x1097254);
    fVar3 = gen_bits2f((uint)(*(byte *)(gen_frame + 0x17)));
    if ((*(byte *)(gen_frame + 0x17)) != 0) {
      do {
        fVar8 = SQRT(((((float *)(gen_frame + 0x18))[(int)(iVar4 * 4 + 2)] - param_1[2]) *
                      (((float *)(gen_frame + 0x18))[(int)(iVar4 * 4 + 2)] - param_1[2]) +
                     (((float *)(gen_frame + 0x18))[(int)(iVar4 * 4)] - *param_1) * (((float *)(gen_frame + 0x18))[(int)(iVar4 * 4)] - *param_1)) +
                     (((float *)(gen_frame + 0x18))[(int)(iVar4 * 4 + 1)] - param_1[1]) *
                     (((float *)(gen_frame + 0x18))[(int)(iVar4 * 4 + 1)] - param_1[1]));
        if (iVar4 == 0) {
          *param_2 = ((float *)(gen_frame + 0x18))[0];
          param_2[1] = ((float *)(gen_frame + 0x18))[1];
          param_2[2] = ((float *)(gen_frame + 0x18))[2];
          param_2[3] = ((float *)(gen_frame + 0x18))[3];
          fVar3 = ((float *)(gen_frame + 0x18))[3];
          (*(float *)(gen_frame + 0x10)) = fVar8;
        }
        else {
          fVar6 = (float10)(*(float *)(gen_frame + 0x10));
          fVar7 = (float10)fVar8;
          bVar5 = GEN_ISNAN(fVar7) || GEN_ISNAN(fVar6);
          fVar3 = gen_bits2f(CONCAT22((short)((uint)(iVar4 * 2) >> 0x10),
                                      (ushort)!(fVar6 <= fVar7) << 8 | (ushort)bVar5 << 10 |
                                      (ushort)(bVar5 || fVar7 == fVar6) << 0xe));
          if (!(fVar6 <= fVar7) != bVar5) {
            *param_2 = ((float *)(gen_frame + 0x18))[(int)(iVar4 * 4)];
            param_2[1] = ((float *)(gen_frame + 0x18))[(int)(iVar4 * 4 + 1)];
            fVar3 = ((float *)(gen_frame + 0x18))[(int)(iVar4 * 4 + 2)];
            fVar1 = ((float *)(gen_frame + 0x18))[(int)(iVar4 * 4 + 3)];
            param_2[2] = fVar3;
            param_2[3] = fVar1;
            (*(float *)(gen_frame + 0x10)) = fVar8;
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)(uint)(*(byte *)(gen_frame + 0x17)));
    }
    uVar2 = CONCAT31((int3)((uint)gen_fl2bits(fVar3) >> 8),1);
  }
  F_00c47745((*(uint *)(gen_frame + 0x21c)) ^ (uint)(uint)(gen_frame + 0x220));
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonObstruction::vf26 */
uint F_00d0b3f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd0b3f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = (undefined4 *)F_00d22da0(this,param_1,0x230);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0xf4))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))));
  if (uVar2 != 0) {
    puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
    puVar5 = puVar1;
    for (iVar3 = 0x8c; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    return (uint)(puVar1 + 0x8c);
  }
  F_00d0c290(*(undefined4 *)(this + 0x128),(uint)puVar1);
  return (uint)(puVar1 + 0x8c);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonObstruction::vf28 */
uint F_00d0b450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd0b450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x1d0];
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  ulonglong uVar6;
  
  (*(uint *)(gen_frame + 0x1c8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1cc);
  uVar3 = *(uint *)(this + 0x1c);
  if (*((int *)GEN_TOP((*(int *)(uVar3 + 0xc) + 0x2f8))) != 0) {
    F_00d22b20(this,&(*(undefined2 *)(gen_frame + 0x8)));
    (*(undefined2 *)(gen_frame + 0x8)) = (undefined2)param_1;
    (*(undefined2 *)(gen_frame + 0xa)) = 0x1c0;
    uVar6 = F_00427d90();
    iVar1 = *(int *)(this + 0x128);
    iVar5 = 0;
    (*(ulonglong *)(gen_frame + 0x10)) = uVar6;
    if (*(char *)(iVar1 + 0x229) != '\0') {
      puVar2 = (undefined4 *)(iVar1 + 0x24);
      puVar4 = ((undefined4 *)(gen_frame + 0x44));
      do {
        iVar5 = iVar5 + 1;
        puVar4[-1] = puVar2[-1];
        *puVar4 = *puVar2;
        puVar4[1] = puVar2[1];
        puVar2 = puVar2 + 4;
        puVar4 = puVar4 + 3;
      } while (iVar5 < (int)(uint)*(byte *)(iVar1 + 0x229));
    }
    (*(undefined1 *)(gen_frame + 0x1c0)) = *(undefined1 *)(iVar1 + 0x229);
    F_00d0bfe0(&(*(undefined2 *)(gen_frame + 0x8)),&(*(undefined2 *)(gen_frame + 0x8)));
    uVar3 = F_00d00b10(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))),&(*(undefined2 *)(gen_frame + 0x8)),0x1c0);
  }
  F_00c47745((*(uint *)(gen_frame + 0x1c8)) ^ (uint)(uint)(gen_frame + 0x1cc));
  return uVar3;
}

/* ref: FUN_00d0b9e0 */
uint F_00d0b9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd0b9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x260];
  int * this_00;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0x24c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x250);
  F_00d22580(this,param_1,param_2,param_3);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1132404));
  F_00cccb10((int)this + 0x32c,(float)(float10)1);
  *(uint *)((int)this + 0xb0) =
       *(uint *)((int)this + 0xb0) ^ ((param_4 & 0xff) << 4 ^ *(uint *)((int)this + 0xb0)) & 0x10;
  if ((char)param_4 == '\0') {
    *(undefined4 * PTR32 *)((int)this + 0x128) = param_1;
  }
  else {
    *(undefined4 * PTR32 *)((int)this + 0x128) = (undefined4 *)((int)this + 0x360);
    puVar3 = param_1;
    puVar4 = (undefined4 *)((int)this + 0x360);
    for (iVar2 = 0x8c; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x128);
  F_00d09690(this);
  F_00d20fe0(this,(uint)(~(*((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 4))) >> 5) & 1));
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  uVar1 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar1 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x240);
  }
  F_00d0b450(this,0x401);
  F_00c47745((*(uint *)(gen_frame + 0x24c)) ^ (uint)(uint)(gen_frame + 0x250));
  return (uint)this;
}

/* ref: FUN_00d0bb10 */
uint F_00d0bb10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd0bb10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x260];
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x24c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x250);
  F_00d22720(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1132404));
  F_00cccb10((int)this + 0x32c,(float)(float10)1);
  *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) | 0x10;
  *(undefined * PTR32 *)((int)this + 0x128) = (undefined *)((int)this + 0x360);
  F_00d0c210((undefined *)((int)this + 0x360));
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x128);
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  uVar1 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar1 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x240);
  }
  F_00d0b450(this,0x401);
  F_00c47745((*(uint *)(gen_frame + 0x24c)) ^ (uint)(uint)(gen_frame + 0x250));
  return (uint)this;
}

/* ref: FUN_00d0bbf0 */
uint F_00d0bbf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd0bbf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d0bdf0 */
uint F_00d0bdf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd0bdf0u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = param_3[2];
  fVar2 = *param_3;
  fVar3 = param_3[1];
  fVar4 = in_ecx[3];
  fVar5 = in_ecx[1];
  fVar6 = in_ecx[2];
  fVar7 = *in_ecx;
  *param_2 = fVar5 * fVar1 - fVar6 * fVar3;
  param_2[1] = fVar6 * fVar2 - fVar7 * fVar1;
  param_2[2] = fVar7 * fVar3 - fVar5 * fVar2;
  param_2[3] = fVar4;
  return (uint)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf16 */
unsigned int F_00d0beb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd0beb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf17 */
unsigned int F_00d0bec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd0bec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf32 */
byte F_00d0bed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd0bed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonObstruction::vf3 */
uint F_00d0bee0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd0bee0u, gen_a0, 0u, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_3 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))((undefined4)gen_fl2bits(param_2),local_c);
  return uVar1;
}

/* ref: FUN_00d0bf30 */
ushort F_00d0bf30(unsigned int gen_a0)
{
  GEN_ENTER(0xd0bf30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return (ushort)param_1;
}

/* ref: FUN_00d0bf40 */
unsigned int F_00d0bf40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd0bf40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined2 *)this;
  param_1[1] = *(undefined2 *)((int)this + 2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)(param_1 + 8) = 0;
  return 0;
}

/* ref: FUN_00d0bf70 */
unsigned int F_00d0bf70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd0bf70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined2 *)this;
  param_1[1] = *(undefined2 *)((int)this + 2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((int)this + 0x18);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)((int)this + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((int)this + 0x20);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)((int)this + 0x2c);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((int)this + 0x28);
  param_1[0x18] = *(undefined2 *)((int)this + 0x30);
  param_1[0x19] = *(undefined2 *)((int)this + 0x32);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)((int)this + 0x34);
  return 0;
}

/* ref: FUN_00d0bfe0 */
unsigned int F_00d0bfe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd0bfe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *param_1 = *(undefined2 *)this;
  param_1[1] = *(undefined2 *)((int)this + 2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((int)this + 0x18);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)((int)this + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((int)this + 0x20);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)((int)this + 0x2c);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((int)this + 0x28);
  param_1[0x18] = *(undefined2 *)((int)this + 0x30);
  param_1[0x19] = *(undefined2 *)((int)this + 0x32);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)((int)this + 0x34);
  *(undefined1 *)(param_1 + 0xdc) = *(undefined1 *)((int)this + 0x1b8);
  iVar1 = 0x20;
  puVar2 = (undefined4 *)(param_1 + 0x1c);
  puVar3 = (undefined4 *)((int)this + 0x40);
  do {
    *puVar2 = *((undefined4 *)GEN_TOP((((int)this - (int)param_1) + (int)puVar2)));
    iVar1 = iVar1 + -1;
    puVar2[1] = puVar3[-1];
    puVar2[2] = *puVar3;
    puVar2 = puVar2 + 3;
    puVar3 = puVar3 + 3;
  } while (iVar1 != 0);
  return 0;
}

/* ref: FUN_00d0c080 */
unsigned int F_00d0c080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd0c080u, gen_a0, gen_a1, 0u, 0u);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  byte bVar2;
  uint * puVar3;
  int iVar4;
  
  *(ushort *)param_2 = *param_1 << 8 | *param_1 >> 8;
  *(char *)(param_2 + 2) = (char)param_1[1];
  *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_1 + 3);
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) ^ (*(byte *)(param_2 + 4) ^ (byte)param_1[2]) & 1;
  bVar2 = ((byte)param_1[2] ^ *(byte *)(param_2 + 4)) & 2 ^ *(byte *)(param_2 + 4);
  *(byte *)(param_2 + 4) = bVar2;
  bVar2 = ((byte)param_1[2] ^ bVar2) & 4 ^ bVar2;
  *(byte *)(param_2 + 4) = bVar2;
  bVar2 = ((byte)param_1[2] ^ bVar2) & 8 ^ bVar2;
  *(byte *)(param_2 + 4) = bVar2;
  bVar2 = ((byte)param_1[2] ^ bVar2) & 0x10 ^ bVar2;
  *(byte *)(param_2 + 4) = bVar2;
  bVar2 = ((byte)param_1[2] ^ bVar2) & 0x20 ^ bVar2;
  *(byte *)(param_2 + 4) = bVar2;
  bVar2 = ((byte)param_1[2] ^ bVar2) & 0x40 ^ bVar2;
  *(byte *)(param_2 + 4) = bVar2;
  *(byte *)(param_2 + 4) = ((byte)param_1[2] ^ bVar2) & 0x7f ^ (byte)param_1[2];
  *(byte *)(param_2 + 0xc) =
       *(byte *)(param_2 + 0xc) ^ (*(byte *)(param_2 + 0xc) ^ (byte)param_1[6]) & 1;
  bVar2 = ((byte)param_1[6] ^ *(byte *)(param_2 + 0xc)) & 2 ^ *(byte *)(param_2 + 0xc);
  *(byte *)(param_2 + 0xc) = bVar2;
  bVar2 = ((byte)param_1[6] ^ bVar2) & 4 ^ bVar2;
  *(byte *)(param_2 + 0xc) = bVar2;
  bVar2 = ((byte)param_1[6] ^ bVar2) & 8 ^ bVar2;
  *(byte *)(param_2 + 0xc) = bVar2;
  bVar2 = ((byte)param_1[6] ^ bVar2) & 0x10 ^ bVar2;
  *(byte *)(param_2 + 0xc) = bVar2;
  bVar2 = ((byte)param_1[6] ^ bVar2) & 0x20 ^ bVar2;
  *(byte *)(param_2 + 0xc) = bVar2;
  bVar2 = ((byte)param_1[6] ^ bVar2) & 0x40 ^ bVar2;
  *(byte *)(param_2 + 0xc) = bVar2;
  *(byte *)(param_2 + 0xc) = ((byte)param_1[6] ^ bVar2) & 0x7f ^ (byte)param_1[6];
  *(undefined1 *)(param_2 + 5) = *(undefined1 *)((int)param_1 + 5);
  *(ushort *)(param_2 + 6) = param_1[3] << 8 | param_1[3] >> 8;
  uVar1 = *(uint *)(param_1 + 4);
  *(uint *)(param_2 + 8) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *(undefined1 *)(param_2 + 0xd) = *(undefined1 *)((int)param_1 + 0xd);
  *(ushort *)(param_2 + 0xe) = param_1[7] << 8 | param_1[7] >> 8;
  iVar4 = 4;
  puVar3 = (uint *)(param_2 + 0x10);
  do {
    uVar1 = *((uint *)GEN_TOP((((int)param_1 - param_2) + (int)puVar3)));
    iVar4 = iVar4 + -1;
    *puVar3 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    puVar3 = puVar3 + 1;
  } while (iVar4 != 0);
  return 0;
}

/* ref: FUN_00d0c210 */
unsigned int F_00d0c210(unsigned int gen_a0)
{
  GEN_ENTER(0xd0c210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  int iVar4;
  
  fVar1 = (float10)1;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined2 *)((int)this + 3) = 0x400;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined1 *)((int)this + 5) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(float *)((int)this + 0x10) = (float)fVar1;
  *(float *)((int)this + 0x14) = (float)fVar1;
  *(float *)((int)this + 0x18) = (float)fVar1;
  *(float *)((int)this + 0x1c) = (float)fVar1;
  *(undefined2 *)((int)this + 0xe) = 0;
  *(undefined2 *)this = 0x230;
  *(undefined1 *)((int)this + 0xd) = 0;
  *(undefined1 *)((int)this + 2) = 0xe;
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1097254);
  iVar4 = 0x20;
  puVar3 = (undefined4 *)((int)this + 0x28);
  do {
    puVar3[-2] = uVar2;
    iVar4 = iVar4 + -1;
    puVar3[-1] = uVar2;
    *puVar3 = uVar2;
    puVar3[1] = uVar2;
    puVar3[1] = (undefined4)gen_fl2bits((float)fVar1);
    puVar3 = puVar3 + 4;
  } while (iVar4 != 0);
  *(undefined4 *)((int)this + 0x228) = 0;
  *(float *)((int)this + 0x220) = (float)fVar1;
  *(undefined4 *)((int)this + 0x22c) = 0;
  *(float *)((int)this + 0x224) = (float)fVar1;
  return 0;
}

/* ref: FUN_00d0c290 */
ushort F_00d0c290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd0c290u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  ushort uVar2;
  uint * puVar3;
  uint * puVar4;
  int local_8;
  
  F_00d0c080(param_1,param_2);
  puVar4 = (uint *)(param_1 + 0x28);
  local_8 = 0x20;
  puVar3 = (uint *)(param_2 + 0x20);
  do {
    uVar1 = *((uint *)GEN_TOP(((param_1 - param_2) + (int)puVar3)));
    *puVar3 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = puVar4[-1];
    puVar3[1] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = *puVar4;
    puVar3[2] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = puVar4[1];
    puVar3[3] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    puVar4 = puVar4 + 4;
    local_8 = local_8 + -1;
    puVar3 = puVar3 + 4;
  } while (local_8 != 0);
  uVar1 = *(uint *)(param_1 + 0x220);
  *(uint *)(param_2 + 0x220) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x224);
  *(uint *)(param_2 + 0x224) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *(byte *)(param_2 + 0x228) =
       *(byte *)(param_2 + 0x228) ^ (*(byte *)(param_2 + 0x228) ^ *(byte *)(param_1 + 0x228)) & 0xf;
  *(byte *)(param_2 + 0x228) = *(byte *)(param_1 + 0x228) & 0x10 | *(byte *)(param_2 + 0x228) & 0xf;
  *(undefined1 *)(param_2 + 0x229) = *(undefined1 *)(param_1 + 0x229);
  *(undefined2 *)(param_2 + 0x22a) = 0;
  *(ushort *)(param_2 + 0x22c) =
       *(ushort *)(param_1 + 0x22c) << 8 | *(ushort *)(param_1 + 0x22c) >> 8;
  uVar2 = *(ushort *)(param_1 + 0x22e) << 8 | *(ushort *)(param_1 + 0x22e) >> 8;
  *(ushort *)(param_2 + 0x22e) = uVar2;
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonObstruction::vf0 */
uint F_00d0c3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd0c3d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1132404));
  F_00cccb40(this + 0x32c);
  F_00d23680(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoardObstruction::vf1 */
uint F_00d0c460(unsigned int gen_a0)
{
  GEN_ENTER(0xd0c460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined * in_ecx;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 * puVar5;
  int iVar6;
  float fVar7;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar11 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar10 [16];
  
  iVar6 = *(int *)(this + 0x128);
  *(undefined4 *)(this + 300) = *(undefined4 *)(iVar6 + 0x20);
  *(undefined4 *)(this + 0x130) = *(undefined4 *)(iVar6 + 0x24);
  *(undefined4 *)(this + 0x134) = *(undefined4 *)(iVar6 + 0x28);
  *(undefined4 *)(this + 0x138) = *(undefined4 *)(iVar6 + 0x2c);
  iVar6 = *(int *)(this + 0x128);
  *(undefined4 *)(this + 0x13c) = *(undefined4 *)(iVar6 + 0x20);
  *(undefined4 *)(this + 0x140) = *(undefined4 *)(iVar6 + 0x24);
  *(undefined4 *)(this + 0x144) = *(undefined4 *)(iVar6 + 0x28);
  *(undefined4 *)(this + 0x148) = *(undefined4 *)(iVar6 + 0x2c);
  iVar6 = 0x30;
  do {
    iVar4 = *(int *)(this + 0x128);
    uVar3 = *(undefined4 *)(iVar4 + 8 + iVar6);
    (*(undefined4 *)((char *)&auVar8 + 4)) = uVar3;
    (*(undefined4 *)((char *)&auVar8 + 0)) = *(undefined4 *)(iVar4 + iVar6);
    (*(undefined4 *)((char *)&auVar8 + 8)) = uVar3;
    (*(undefined4 *)((char *)&auVar8 + 12)) = *(undefined4 *)(iVar4 + 0xc + iVar6);
    (*(undefined8 *)((char *)&auVar9 + 8)) = (*(undefined8 *)((char *)&auVar8 + 8));
    (*(undefined4 *)((char *)&auVar9 + 4)) = *(undefined4 *)(iVar4 + 4 + iVar6);
    (*(undefined4 *)((char *)&auVar9 + 0)) = *(undefined4 *)(iVar4 + iVar6);
    gen_minps(&(auVar9), &(auVar9), (this + 300));
    memcpy(&(*(gen_v16 *)((undefined1 *)(gen_frame + 0x0))), &(auVar9), sizeof(auVar9) < sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x0))) ? sizeof(auVar9) : sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x0))));
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 0)) = (*(undefined4 *)((char *)&auVar9 + 0));
    (*(float *)(gen_frame + 0x20)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 0)));
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 4)) = (*(undefined4 *)((char *)&auVar9 + 4));
    *(undefined4 *)(this + 300) = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 0));
    (*(float *)(gen_frame + 0x24)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 4)));
    (*(float *)(gen_frame + 0x8)) = (*(float *)((char *)&auVar9 + 8));
    *(undefined4 *)(this + 0x130) = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 4));
    (*(float *)(gen_frame + 0x28)) = (*(float *)(gen_frame + 0x8));
    (*(float *)(gen_frame + 0xc)) = (*(float *)((char *)&auVar9 + 12));
    *(float *)(this + 0x134) = (*(float *)(gen_frame + 0x8));
    (*(float *)(gen_frame + 0x2c)) = (*(float *)(gen_frame + 0xc));
    *(float *)(this + 0x138) = (*(float *)(gen_frame + 0xc));
    iVar4 = *(int *)(this + 0x128);
    uVar3 = *(undefined4 *)(iVar4 + 8 + iVar6);
    puVar1 = (undefined4 *)(iVar4 + 0xc + iVar6);
    puVar5 = (undefined4 *)(iVar4 + iVar6);
    puVar2 = (undefined4 *)(iVar4 + 4 + iVar6);
    iVar6 = iVar6 + 0x10;
    (*(undefined4 *)((char *)&auVar11 + 4)) = uVar3;
    (*(undefined4 *)((char *)&auVar11 + 0)) = *puVar5;
    (*(undefined4 *)((char *)&auVar11 + 8)) = uVar3;
    (*(undefined4 *)((char *)&auVar11 + 12)) = *puVar1;
    (*(undefined8 *)((char *)&auVar10 + 8)) = (*(undefined8 *)((char *)&auVar11 + 8));
    (*(undefined4 *)((char *)&auVar10 + 4)) = *puVar2;
    (*(undefined4 *)((char *)&auVar10 + 0)) = *puVar5;
    gen_maxps(&(auVar9), &(auVar10), (this + 0x13c));
    memcpy(&(*(gen_v16 *)((undefined1 *)(gen_frame + 0x0))), &(auVar9), sizeof(auVar9) < sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x0))) ? sizeof(auVar9) : sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x0))));
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 0)) = (*(undefined4 *)((char *)&auVar9 + 0));
    (*(float *)(gen_frame + 0x10)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 0)));
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 4)) = (*(undefined4 *)((char *)&auVar9 + 4));
    *(undefined4 *)(this + 0x13c) = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 0));
    (*(float *)(gen_frame + 0x14)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 4)));
    (*(float *)(gen_frame + 0x8)) = (*(float *)((char *)&auVar9 + 8));
    *(undefined4 *)(this + 0x140) = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 4));
    (*(float *)(gen_frame + 0x18)) = (*(float *)(gen_frame + 0x8));
    (*(float *)(gen_frame + 0xc)) = (*(float *)((char *)&auVar9 + 12));
    *(float *)(this + 0x144) = (*(float *)(gen_frame + 0x8));
    (*(float *)(gen_frame + 0x1c)) = (*(float *)(gen_frame + 0xc));
    *(float *)(this + 0x148) = (*(float *)(gen_frame + 0xc));
  } while (iVar6 < 0x60);
  iVar6 = *(int *)(this + 0x128);
  fVar7 = *(float *)(iVar6 + 0x30) - *(float *)(iVar6 + 0x20);
  fVar12 = gen_bits2f((uint)((ulonglong)*(undefined8 *)(iVar6 + 0x30) >> 0x20)) -
           *(float *)(iVar6 + 0x24);
  fVar14 = *(float *)(iVar6 + 0x38) - *(float *)(iVar6 + 0x28);
  fVar16 = *(float *)(iVar6 + 0x3c) - *(float *)(iVar6 + 0x2c);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 0)) = (undefined4)gen_fl2bits(fVar7);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 4)) = (undefined4)gen_fl2bits(fVar12);
  (*(float *)(gen_frame + 0x8)) = fVar14;
  (*(float *)(gen_frame + 0xc)) = fVar16;
  (*(float *)(gen_frame + 0x10)) = fVar7;
  (*(float *)(gen_frame + 0x14)) = fVar12;
  (*(float *)(gen_frame + 0x18)) = fVar14;
  (*(float *)(gen_frame + 0x1c)) = fVar16;
  fVar16 = *(float *)(iVar6 + 0x40) - *(float *)(iVar6 + 0x20);
  fVar13 = *(float *)(iVar6 + 0x44) - *(float *)(iVar6 + 0x24);
  fVar15 = *(float *)(iVar6 + 0x48) - *(float *)(iVar6 + 0x28);
  fVar17 = *(float *)(iVar6 + 0x4c) - *(float *)(iVar6 + 0x2c);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 0)) = (undefined4)gen_fl2bits(fVar16);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 4)) = (undefined4)gen_fl2bits(fVar13);
  (*(float *)(gen_frame + 0x8)) = fVar15;
  (*(float *)(gen_frame + 0xc)) = fVar17;
  (*(float *)(gen_frame + 0x20)) = fVar16;
  (*(float *)(gen_frame + 0x24)) = fVar13;
  (*(float *)(gen_frame + 0x28)) = fVar15;
  (*(float *)(gen_frame + 0x2c)) = fVar17;
  fVar18 = fVar13 * fVar14 - fVar15 * fVar12;
  fVar14 = fVar15 * fVar7 - fVar16 * fVar14;
  fVar7 = fVar16 * fVar12 - fVar13 * fVar7;
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 0)) = (undefined4)gen_fl2bits(fVar18);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 4)) = (undefined4)gen_fl2bits(fVar14);
  (*(float *)(gen_frame + 0x8)) = fVar7;
  (*(float *)(gen_frame + 0x10)) = fVar18;
  (*(float *)(gen_frame + 0x14)) = fVar14;
  in_ecx = this + 0x14c;
  (*(float *)(gen_frame + 0x18)) = fVar7;
  (*(float *)(gen_frame + 0x1c)) = fVar17;
  *(float *)in_ecx = fVar18;
  *(float *)(this + 0x150) = fVar14;
  *(float *)(this + 0x154) = fVar7;
  *(float *)(this + 0x158) = fVar17;
  puVar5 = (undefined4 *)F_00d034e0(in_ecx,((undefined1 *)(gen_frame + 0x0)));
  *(undefined4 *)in_ecx = *puVar5;
  *(undefined4 *)(this + 0x150) = puVar5[1];
  *(undefined4 *)(this + 0x154) = puVar5[2];
  *(undefined4 *)(this + 0x158) = puVar5[3];
  return (uint)puVar5;
}

/* ref: FUN_00d0c790 */
uint F_00d0c790(unsigned int gen_a0)
{
  GEN_ENTER(0xd0c790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x11325e4));
  F_00cccb40((int)this + 0x15c);
  uVar1 = F_00d23680(this);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoardObstruction::vf2 */
uint F_00d0c7b0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xd0c7b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  F_00d211a0(param_1,param_2,param_3,param_4);
  F_00cccbd0(param_1 + 0x15c,param_4);
  F_00cccd90(param_1 + 0x15c,param_3,param_2);
  return REFG(undefined4, 0x11299e4);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoardObstruction::vf4 */
uint F_00d0c800(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd0c800u, gen_a0, 0u, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cccd90(param_1 + 0x15c,param_2,param_3);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoardObstruction::vf9 */
uint F_00d0c820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd0c820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  float * pfVar1;
  float * pfVar2;
  float * pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  
  F_00d213b0(this,param_1,param_2);
  iVar11 = 0;
  do {
    iVar9 = *(int *)(this + 0x128);
    fVar4 = *(float *)(iVar9 + 0x28 + iVar11);
    fVar5 = *(float *)(iVar9 + 0x2c + iVar11);
    pfVar1 = (float *)(iVar9 + 0x20 + iVar11);
    pfVar2 = (float *)(iVar9 + 0x24 + iVar11);
    fVar6 = param_1[3];
    pfVar3 = (float *)(iVar9 + 0x20 + iVar11);
    iVar11 = iVar11 + 0x10;
    fVar7 = param_1[1];
    fVar8 = param_1[2];
    *pfVar3 = *pfVar1 + *param_1;
    pfVar3[1] = *pfVar2 + fVar7;
    pfVar3[2] = fVar4 + fVar8;
    pfVar3[3] = fVar5 + fVar6;
    *((float *)GEN_TOP((*(int *)(this + 0x128) + 0x1c + iVar11))) = (float)(float10)1;
  } while (iVar11 < 0x40);
  uVar10 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
  return uVar10;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoardObstruction::vf14 */
byte F_00d0c900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd0c900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x70))(this,0x406);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0x10))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))));
  if ((char)uVar1 == '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x15c) + 8))))(this + 0x15c,param_1);
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoardObstruction::vf15 */
byte F_00d0c940(void)
{
  GEN_ENTER(0xd0c940u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoardObstruction::vf21 */
byte F_00d0c950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd0c950u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  if (((((float10)*param_1 <= (float10)*(float *)(this + 0x13c)) &&
       ((float10)*(float *)(this + 300) <= (float10)*param_2)) &&
      ((float10)param_1[1] <= (float10)*(float *)(this + 0x140))) &&
     ((((float10)*(float *)(this + 0x130) <= (float10)param_2[1] &&
       ((float10)param_1[2] <= (float10)*(float *)(this + 0x144))) &&
      ((float10)*(float *)(this + 0x134) <= (float10)param_2[2])))) {
    return 1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoardObstruction::vf18 */
uint F_00d0c9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd0c9e0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_3 < 0x70) {
    return 0;
  }
  puVar2 = *(undefined4 * PTR32 *)(in_ecx + 0x128);
  puVar3 = param_2;
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0x70;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoardObstruction::vf19 */
byte F_00d0ca10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd0ca10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoardObstruction::vf20 */
unsigned int F_00d0ca20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd0ca20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00d0cab0 */
uint F_00d0cab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd0cab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  ushort uVar1;
  uint uVar2;
  float10 fVar3;
  
  if (param_1 == 0) {
    uVar1 = *((ushort *)GEN_TOP((*(int *)((int)this + 0x128) + 0x6e)));
    fVar3 = (float10)1;
  }
  else {
    uVar1 = *((ushort *)GEN_TOP((*(int *)((int)this + 0x128) + 0x6c)));
    fVar3 = (float10)*(float *)&REFG(undefined, 0x1097254);
  }
  uVar2 = F_00cccd90((int)this + 0x15c,(float)fVar3,(uint)uVar1 * 1000 >> 4);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoardObstruction::vf25 */
uint F_00d0caf0(unsigned int gen_a0)
{
  GEN_ENTER(0xd0caf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90);
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
  uVar1 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar1 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x80);
  }
  F_00c47745((*(uint *)(gen_frame + 0x8c)) ^ (uint)(uint)(gen_frame + 0x90));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoardObstruction::vf27 */
unsigned int F_00d0cb70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd0cb70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_2;
  puVar3 = *(undefined4 * PTR32 *)(in_ecx + 0x128);
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoardObstruction::vf30 */
byte F_00d0cb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd0cb90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  
  bVar5 = F_00d21f00((undefined *)this,param_1);
  if (bVar5 == 0) {
    return 0;
  }
  iVar7 = 0;
  iVar6 = 0;
  do {
    iVar1 = *(int *)(this + 0x128);
    dVar2 = (double)*(float *)(iVar6 + 0x28 + iVar1);
    dVar3 = (double)*(float *)(iVar6 + 0x24 + iVar1);
    dVar4 = (double)*(float *)(iVar6 + 0x20 + iVar1);
    F_00c49386(param_1,"Position[%d] = %f %f %f\n",iVar7,(int)(ulonglong)gen_d2bits(dVar4),
             (int)((ulonglong)gen_d2bits(dVar4) >> 0x20),(int)(ulonglong)gen_d2bits(dVar3),
             (int)((ulonglong)gen_d2bits(dVar3) >> 0x20),(int)(ulonglong)gen_d2bits(dVar2),
             (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
    iVar6 = iVar6 + 0x10;
    iVar7 = iVar7 + 1;
  } while (iVar6 < 0x40);
  F_00c49386(param_1,"ObstacleFac = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x60))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x60))))));
  F_00c49386(param_1,"HicutFac = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 100))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 100))))));
  F_00c49386(param_1,"BlockadeFlag = %d\n",*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x68))) & 0xf);
  F_00c49386(param_1,"fUseHicutFac = %d\n",*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x68))) >> 4 & 1);
  F_00c49386(param_1,"[EndOfSoundObject]\n\n");
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoardObstruction::vf31 */
byte F_00d0cc80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd0cc80u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  char * pcVar2;
  int iVar3;
  uint uVar4;
  byte * pbVar5;
  bool bVar6;
  double dVar7;
  
  pcVar2 = "Position";
  pbVar5 = (byte *)param_2;
  do {
    bVar1 = *pcVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00d0ccb1: ;
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00d0ccb6;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00d0ccb1;
    pcVar2 = pcVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d0ccb6: ;
  if (iVar3 == 0) {
    uVar4 = F_00d00d00(0,0);
    if (uVar4 != 0) {
      uVar4 = F_00c4c74c(uVar4);
      pcVar2 = (char *)F_00d00d00(0,0);
      if (pcVar2 != (char *)0x0) {
        dVar7 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + (uVar4 + 2) * 0x10))) = (float)dVar7;
        pcVar2 = (char *)F_00d00d00(0,0);
        if (pcVar2 != (char *)0x0) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x24 + uVar4 * 0x10))) = (float)dVar7;
          pcVar2 = (char *)F_00d00d00(0,0);
          if (pcVar2 != (char *)0x0) {
            dVar7 = F_00c4acaa(pcVar2);
            *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x28 + uVar4 * 0x10))) = (float)dVar7;
            return 1;
          }
        }
      }
    }
  }
  else {
    pcVar2 = "ObstacleFac";
    pbVar5 = (byte *)param_2;
    do {
      bVar1 = *pcVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00d0cd86: ;
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00d0cd8b;
      }
      if (bVar1 == 0) break;
      bVar1 = pcVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00d0cd86;
      pcVar2 = pcVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00d0cd8b: ;
    if (iVar3 == 0) {
      pcVar2 = (char *)F_00d00d00(0,0);
      if (pcVar2 != (char *)0x0) {
        dVar7 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x60))) = (float)dVar7;
        return 1;
      }
    }
    else {
      pcVar2 = "HicutFac";
      pbVar5 = (byte *)param_2;
      do {
        bVar1 = *pcVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00d0cde8: ;
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00d0cded;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00d0cde8;
        pcVar2 = pcVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00d0cded: ;
      if (iVar3 == 0) {
        pcVar2 = (char *)F_00d00d00(0,0);
        if (pcVar2 != (char *)0x0) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 100))) = (float)dVar7;
          return 1;
        }
      }
      else {
        pcVar2 = "fUseHicutFac";
        pbVar5 = (byte *)param_2;
        do {
          bVar1 = *pcVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00d0ce50: ;
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_00d0ce55;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00d0ce50;
          pcVar2 = pcVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00d0ce55: ;
        if (iVar3 == 0) {
          uVar4 = F_00d00d00(0,0);
          if (uVar4 != 0) {
            uVar4 = F_00c4c74c(uVar4);
            pbVar5 = ((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x68)));
            *pbVar5 = *pbVar5 ^ ((char)uVar4 << 4 ^ *((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x68)))) &
                                0x10;
            return 1;
          }
        }
        else {
          pcVar2 = "BlockadeFlag";
          pbVar5 = (byte *)param_2;
          do {
            bVar1 = *pcVar2;
            bVar6 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_00d0ceb4: ;
              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
              goto LAB_00d0ceb9;
            }
            if (bVar1 == 0) break;
            bVar1 = pcVar2[1];
            bVar6 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00d0ceb4;
            pcVar2 = pcVar2 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_00d0ceb9: ;
          if (iVar3 != 0) {
            bVar1 = F_00d22040(param_1,param_2);
            return bVar1;
          }
          uVar4 = F_00d00d00(0,0);
          if (uVar4 != 0) {
            uVar4 = F_00c4c74c(uVar4);
            pbVar5 = ((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x68)));
            *pbVar5 = *pbVar5 ^ (*((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x68))) ^ (byte)uVar4) & 0xf;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoardObstruction::vf22 */
uint F_00d0cf00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd0cf00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float fVar1;
  float fVar2;
  byte bVar3;
  undefined2 uVar6;
  float * pfVar4;
  undefined3 extraout_var = 0;
  float * pfVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  ushort uVar11;
  float10 fVar12;
  float10 fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint uVar5;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  *param_4 = 0;
  iVar8 = *(int *)(this + 0x128);
  fVar14 = *(float *)(iVar8 + 0x20) - *param_1;
  fVar15 = *(float *)(iVar8 + 0x24) - param_1[1];
  fVar16 = *(float *)(iVar8 + 0x28) - param_1[2];
  (*(float *)(gen_frame + 0x0)) = fVar14;
  (*(float *)(gen_frame + 0x4)) = fVar15;
  (*(float *)(gen_frame + 0x8)) = fVar16;
  (*(float *)(gen_frame + 0xc)) = *(float *)(iVar8 + 0x2c) - param_1[3];
  fVar17 = *(float *)(this + 0x150) * param_2[1];
  fVar18 = *(float *)(this + 0x154) * param_2[2];
  fVar19 = (fVar18 + *(float *)(this + 0x14c) * *param_2) + fVar17;
  (*(float *)(gen_frame + 0x0)) = fVar19;
  (*(float *)(gen_frame + 0x4)) = (fVar18 + fVar17) + fVar17;
  (*(float *)(gen_frame + 0x8)) = (fVar18 + fVar18) + fVar17;
  (*(float *)(gen_frame + 0xc)) = (fVar18 + *(float *)(this + 0x158) * param_2[3]) + fVar17;
  fVar12 = (float10)fVar19;
  fVar13 = (float10)*(float *)&REFG(undefined, 0x1097254);
  bVar9 = GEN_ISNAN(fVar13) || GEN_ISNAN(fVar12);
  bVar10 = bVar9 || fVar13 == fVar12;
  uVar11 = (ushort)!(fVar12 <= fVar13) << 8 | (ushort)bVar9 << 10 | (ushort)bVar10 << 0xe;
  uVar6 = (undefined2)((uint)iVar8 >> 0x10);
  if (bVar9 == bVar10) {
    fVar14 = ((float)GEN_TOF((((float10)GEN_TOD(((fVar16 * *(float *)(this + 0x154) +
                               fVar14 * *(float *)(this + 0x14c)) +
                              fVar15 * *(float *)(this + 0x150)))) / fVar12)));
    fVar12 = (float10)fVar14;
    bVar9 = (GEN_ISNAN(fVar12) || GEN_ISNAN(fVar13)) || fVar12 == fVar13;
    uVar11 = (ushort)!(fVar13 <= fVar12) << 8 | (ushort)(GEN_ISNAN(fVar12) || GEN_ISNAN(fVar13)) << 10 |
             (ushort)bVar9 << 0xe;
    if (!(fVar13 <= fVar12) == bVar9) {
      fVar13 = (float10)1;
      bVar9 = (GEN_ISNAN(fVar13) || GEN_ISNAN(fVar12)) || fVar13 == fVar12;
      uVar5 = CONCAT22(uVar6,(ushort)!(fVar12 <= fVar13) << 8 |
                             (ushort)(GEN_ISNAN(fVar13) || GEN_ISNAN(fVar12)) << 10 | (ushort)bVar9 << 0xe);
      if (!(fVar12 <= fVar13) == bVar9) {
        fVar15 = fVar14 * *param_2;
        fVar16 = fVar14 * param_2[1];
        fVar17 = fVar14 * param_2[2];
        fVar14 = fVar14 * param_2[3];
        (*(float *)(gen_frame + 0x0)) = fVar15;
        (*(float *)(gen_frame + 0x4)) = fVar16;
        (*(float *)(gen_frame + 0x8)) = fVar17;
        (*(float *)(gen_frame + 0xc)) = fVar14;
        fVar15 = fVar15 + *param_1;
        fVar16 = fVar16 + param_1[1];
        fVar17 = fVar17 + param_1[2];
        fVar14 = fVar14 + param_1[3];
        (*(float *)(gen_frame + 0x0)) = fVar15;
        (*(float *)(gen_frame + 0x4)) = fVar16;
        (*(float *)(gen_frame + 0x8)) = fVar17;
        (*(float *)(gen_frame + 0xc)) = fVar14;
        *param_3 = fVar15;
        param_3[1] = fVar16;
        param_3[2] = fVar17;
        param_3[3] = fVar14;
        fVar14 = *param_3;
        fVar15 = param_3[1];
        fVar16 = param_3[2];
        fVar17 = param_3[3];
        pfVar4 = ((float *)GEN_TOP((*(int *)(this + 0x128) + 0x20)));
        iVar8 = 4;
        pfVar7 = ((float *)(gen_frame + 0x18));
        do {
          fVar18 = *pfVar4;
          fVar19 = pfVar4[1];
          fVar1 = pfVar4[2];
          fVar2 = pfVar4[3];
          pfVar4 = pfVar4 + 4;
          iVar8 = iVar8 + -1;
          (*(float *)(gen_frame + 0x0)) = fVar18 - fVar14;
          (*(float *)(gen_frame + 0x4)) = fVar19 - fVar15;
          (*(float *)(gen_frame + 0x8)) = fVar1 - fVar16;
          (*(float *)(gen_frame + 0xc)) = fVar2 - fVar17;
          *pfVar7 = fVar18 - fVar14;
          pfVar7[1] = fVar19 - fVar15;
          pfVar7[2] = fVar1 - fVar16;
          pfVar7[3] = fVar2 - fVar17;
          pfVar7 = pfVar7 + 4;
        } while (iVar8 != 0);
        F_01052f50(((float *)(gen_frame + 0x18)),&(*(float *)(gen_frame + 0x0)));
        bVar3 = F_01053270(((float *)(gen_frame + 0x18)),&(*(float *)(gen_frame + 0x0)));
        uVar5 = CONCAT31(extraout_var,bVar3);
      }
      goto LAB_00d0d04b;
    }
  }
  uVar5 = CONCAT22(uVar6,uVar11);
LAB_00d0d04b: ;
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60));
  return uVar5;
}

/* ref: FUN_00d0d1c0 */
float F_00d0d1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd0d1c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  undefined4 * puVar1;
  undefined8 * puVar2;
  undefined4 uVar3;
  float fVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float * pfVar11;
  float * pfVar12;
  undefined4 * puVar13;
  int iVar14;
  float10 fVar15;
  float10 fVar16;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  float fVar27;
  float fVar28;
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar18 [16];
  undefined1 auVar23 [16];
  undefined1 auVar25 [16];
  
  (*(uint *)(gen_frame + 0xac)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb0);
  pfVar12 = ((float *)(gen_frame + 0x68));
  iVar14 = param_1 + 0x20;
  (*(int *)(gen_frame + 0x18)) = 4;
  do {
    pfVar11 = (float *)F_00c34320(param_2,((undefined1 *)(gen_frame + 0x40)),iVar14);
    fVar7 = *(float *)&REFG(undefined, 0x1097254);
    fVar4 = pfVar11[1];
    *pfVar12 = *pfVar11;
    fVar21 = pfVar11[2];
    pfVar12[1] = fVar4;
    fVar4 = pfVar11[3];
    pfVar12[2] = fVar21;
    pfVar12[3] = fVar4;
    iVar14 = iVar14 + 0x10;
    pfVar12 = pfVar12 + 4;
    (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + -1;
  } while ((*(int *)(gen_frame + 0x18)) != 0);
  fVar4 = *param_3;
  fVar21 = param_3[1];
  fVar22 = param_3[2];
  fVar28 = param_3[3];
  iVar14 = 4;
  pfVar12 = ((float *)(gen_frame + 0x68)) + 2;
  do {
    iVar14 = iVar14 + -1;
    (*(float *)(gen_frame + 0x58)) = pfVar12[-2] - fVar4;
    pfVar12[-2] = pfVar12[-2] - fVar4;
    (*(float *)(gen_frame + 0x5c)) = pfVar12[-1] - fVar21;
    pfVar12[-1] = pfVar12[-1] - fVar21;
    (*(float *)(gen_frame + 0x60)) = *pfVar12 - fVar22;
    *pfVar12 = *pfVar12 - fVar22;
    (*(float *)(gen_frame + 0x64)) = pfVar12[1] - fVar28;
    pfVar12[1] = pfVar12[1] - fVar28;
    pfVar12 = pfVar12 + 4;
  } while (iVar14 != 0);
  (*(float *)(gen_frame + 0x8)) = ((float *)(gen_frame + 0x68))[0];
  (*(float *)(gen_frame + 0xc)) = ((float *)(gen_frame + 0x68))[1];
  (*(float *)(gen_frame + 0x1c)) = ((float *)(gen_frame + 0x68))[0];
  (*(float *)(gen_frame + 0x20)) = ((float *)(gen_frame + 0x68))[1];
  (*(float *)(gen_frame + 0x10)) = ((float *)(gen_frame + 0x68))[2];
  (*(float *)(gen_frame + 0x14)) = ((float *)(gen_frame + 0x68))[3];
  (*(float *)(gen_frame + 0x24)) = ((float *)(gen_frame + 0x68))[2];
  (*(float *)(gen_frame + 0x28)) = ((float *)(gen_frame + 0x68))[3];
  puVar13 = ((undefined4 *)(gen_frame + 0x80));
  iVar14 = 3;
  do {
    puVar1 = puVar13 + 1;
    uVar3 = *puVar13;
    puVar2 = (undefined8 *)(puVar13 + -2);
    puVar13 = puVar13 + 4;
    iVar14 = iVar14 + -1;
    (*(undefined4 *)((char *)&auVar5 + 4)) = uVar3;
    (*(undefined4 *)((char *)&auVar5 + 0)) = uVar3;
    (*(undefined4 *)((char *)&auVar5 + 8)) = *puVar1;
    (*(undefined8 *)((char *)&auVar17 + 8)) = (*(undefined8 *)((char *)&auVar5 + 4));
    (*(undefined8 *)((char *)&auVar17 + 0)) = *puVar2;
    (*(undefined4 *)((char *)&auVar30 + 4)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc)));
    (*(undefined4 *)((char *)&auVar30 + 0)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x8)));
    (*(undefined4 *)((char *)&auVar6 + 4)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x10)));
    (*(undefined4 *)((char *)&auVar6 + 0)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x10)));
    (*(undefined4 *)((char *)&auVar6 + 8)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x14)));
    (*(undefined8 *)((char *)&auVar30 + 8)) = (*(undefined8 *)((char *)&auVar6 + 4));
    (*(undefined4 *)((char *)&auVar29 + 8)) = uVar3;
    (*(undefined8 *)((char *)&auVar29 + 0)) = *puVar2;
    (*(undefined4 *)((char *)&auVar29 + 12)) = *puVar1;
    gen_minps(&(auVar30), &(auVar29), &(auVar30));
    memcpy(&(*(gen_v16 *)((undefined1 *)(gen_frame + 0x40))), &(auVar30), sizeof(auVar30) < sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x40))) ? sizeof(auVar30) : sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x40))));
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x40)) + 0)) = (*(undefined4 *)((char *)&auVar30 + 0));
    uVar3 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x40)) + 0));
    (*(float *)(gen_frame + 0x58)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x40)) + 0)));
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x40)) + 4)) = (*(undefined4 *)((char *)&auVar30 + 4));
    uVar9 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x40)) + 4));
    (*(float *)(gen_frame + 0x8)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x40)) + 0)));
    (*(float *)(gen_frame + 0x5c)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x40)) + 4)));
    (*(float *)(gen_frame + 0x48)) = (*(float *)((char *)&auVar30 + 8));
    fVar4 = (*(float *)(gen_frame + 0x48));
    (*(float *)(gen_frame + 0xc)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x40)) + 4)));
    (*(float *)(gen_frame + 0x60)) = (*(float *)(gen_frame + 0x48));
    (*(float *)(gen_frame + 0x4c)) = (*(float *)((char *)&auVar30 + 12));
    fVar22 = (*(float *)(gen_frame + 0x4c));
    (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x48));
    (*(float *)(gen_frame + 0x64)) = (*(float *)(gen_frame + 0x4c));
    (*(float *)(gen_frame + 0x14)) = (*(float *)(gen_frame + 0x4c));
    (*(undefined4 *)((char *)&auVar24 + 4)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x24)));
    (*(undefined4 *)((char *)&auVar24 + 0)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x1c)));
    (*(undefined4 *)((char *)&auVar24 + 8)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x24)));
    (*(undefined4 *)((char *)&auVar24 + 12)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x28)));
    (*(undefined8 *)((char *)&auVar23 + 8)) = (*(undefined8 *)((char *)&auVar24 + 8));
    (*(undefined4 *)((char *)&auVar23 + 4)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x20)));
    (*(undefined4 *)((char *)&auVar23 + 0)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x1c)));
    gen_maxps(&(auVar17), &(auVar17), &(auVar23));
    memcpy(&(*(gen_v16 *)((undefined1 *)(gen_frame + 0x40))), &(auVar17), sizeof(auVar17) < sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x40))) ? sizeof(auVar17) : sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x40))));
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x40)) + 0)) = (*(undefined4 *)((char *)&auVar17 + 0));
    uVar8 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x40)) + 0));
    (*(float *)(gen_frame + 0x1c)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x40)) + 0)));
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x40)) + 4)) = (*(undefined4 *)((char *)&auVar17 + 4));
    uVar10 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x40)) + 4));
    (*(float *)(gen_frame + 0x20)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x40)) + 4)));
    (*(float *)(gen_frame + 0x48)) = (*(float *)((char *)&auVar17 + 8));
    fVar21 = (*(float *)(gen_frame + 0x48));
    (*(float *)(gen_frame + 0x24)) = (*(float *)(gen_frame + 0x48));
    (*(float *)(gen_frame + 0x4c)) = (*(float *)((char *)&auVar17 + 12));
    fVar28 = (*(float *)(gen_frame + 0x4c));
    (*(float *)(gen_frame + 0x28)) = (*(float *)(gen_frame + 0x4c));
  } while (iVar14 != 0);
  (*(float *)((char *)&auVar26 + 0)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x40)) + 0))) - gen_bits2f(uVar3);
  fVar27 = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x40)) + 4))) - gen_bits2f(uVar9);
  (*(float *)((char *)&auVar26 + 8)) = (*(float *)(gen_frame + 0x48)) - fVar4;
  (*(float *)((char *)&auVar26 + 12)) = (*(float *)(gen_frame + 0x4c)) - fVar22;
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x40)) + 0)) = (undefined4)gen_fl2bits((*(float *)((char *)&auVar26 + 0)));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x40)) + 4)) = (undefined4)gen_fl2bits(fVar27);
  (*(float *)(gen_frame + 0x48)) = (*(float *)((char *)&auVar26 + 8));
  (*(float *)(gen_frame + 0x4c)) = (*(float *)((char *)&auVar26 + 12));
  (*(float *)(gen_frame + 0x58)) = (*(float *)((char *)&auVar26 + 0));
  (*(float *)((char *)&auVar19 + 0)) = gen_bits2f(uVar3) + gen_bits2f(uVar8);
  fVar20 = gen_bits2f(uVar9) + gen_bits2f(uVar10);
  (*(float *)((char *)&auVar19 + 8)) = fVar4 + fVar21;
  (*(float *)((char *)&auVar19 + 12)) = fVar22 + fVar28;
  (*(float *)(gen_frame + 0x5c)) = fVar27;
  (*(float *)(gen_frame + 0x60)) = (*(float *)((char *)&auVar26 + 8));
  (*(float *)(gen_frame + 0x64)) = (*(float *)((char *)&auVar26 + 12));
  (*(undefined4 *)((char *)&auVar26 + 4)) = (undefined4)gen_fl2bits((*(float *)((char *)&auVar26 + 8)));
  (*(undefined8 *)((char *)&auVar25 + 8)) = (*(undefined8 *)((char *)&auVar26 + 8));
  (*(undefined8 *)((char *)&auVar25 + 0)) = ((undefined1 *)(gen_frame + 0x40));
  gen_divps(&(auVar17), &(auVar25), &(*(gen_v16 *)&REFG(undefined, 0x11325d0)));
  memcpy(&(*(gen_v16 *)((undefined1 *)(gen_frame + 0x40))), &(auVar17), sizeof(auVar17) < sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x40))) ? sizeof(auVar17) : sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x40))));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x40)) + 0)) = (*(undefined4 *)((char *)&auVar17 + 0));
  uVar3 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x40)) + 0));
  (*(float *)(gen_frame + 0x58)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x40)) + 0)));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x40)) + 4)) = (*(undefined4 *)((char *)&auVar17 + 4));
  uVar8 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x40)) + 4));
  (*(float *)(gen_frame + 0x5c)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x40)) + 4)));
  (*(float *)(gen_frame + 0x48)) = (*(float *)((char *)&auVar17 + 8));
  fVar4 = (*(float *)(gen_frame + 0x48));
  (*(float *)(gen_frame + 0x60)) = (*(float *)(gen_frame + 0x48));
  (*(float *)(gen_frame + 0x4c)) = (*(float *)((char *)&auVar17 + 12));
  fVar21 = (*(float *)(gen_frame + 0x4c));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x40)) + 0)) = (undefined4)gen_fl2bits((*(float *)((char *)&auVar19 + 0)));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x40)) + 4)) = (undefined4)gen_fl2bits(fVar20);
  (*(float *)(gen_frame + 0x48)) = (*(float *)((char *)&auVar19 + 8));
  (*(float *)(gen_frame + 0x4c)) = (*(float *)((char *)&auVar19 + 12));
  (*(float *)(gen_frame + 0x64)) = fVar21;
  (*(float *)(gen_frame + 0x58)) = (*(float *)((char *)&auVar19 + 0));
  (*(float *)(gen_frame + 0x5c)) = fVar20;
  (*(float *)(gen_frame + 0x60)) = (*(float *)((char *)&auVar19 + 8));
  (*(float *)(gen_frame + 0x64)) = (*(float *)((char *)&auVar19 + 12));
  (*(undefined4 *)((char *)&auVar19 + 4)) = (undefined4)gen_fl2bits((*(float *)((char *)&auVar19 + 8)));
  (*(undefined8 *)((char *)&auVar18 + 8)) = (*(undefined8 *)((char *)&auVar19 + 8));
  (*(undefined8 *)((char *)&auVar18 + 0)) = ((undefined1 *)(gen_frame + 0x40));
  gen_divps(&(auVar17), &(auVar18), &(*(gen_v16 *)&REFG(undefined, 0x11325d0)));
  memcpy(&(*(gen_v16 *)((undefined1 *)(gen_frame + 0x40))), &(auVar17), sizeof(auVar17) < sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x40))) ? sizeof(auVar17) : sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x40))));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x40)) + 0)) = (*(undefined4 *)((char *)&auVar17 + 0));
  (*(float *)(gen_frame + 0x58)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x40)) + 0)));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x40)) + 4)) = (*(undefined4 *)((char *)&auVar17 + 4));
  (*(float *)(gen_frame + 0x5c)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x40)) + 4)));
  (*(float *)(gen_frame + 0x48)) = (*(float *)((char *)&auVar17 + 8));
  (*(float *)(gen_frame + 0x60)) = (*(float *)(gen_frame + 0x48));
  (*(float *)(gen_frame + 0x4c)) = (*(float *)((char *)&auVar17 + 12));
  (*(float *)(gen_frame + 0x64)) = (*(float *)(gen_frame + 0x4c));
  fVar21 = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x40)) + 4))) * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x40)) + 4)));
  fVar22 = (*(float *)(gen_frame + 0x48)) * (*(float *)(gen_frame + 0x48));
  fVar28 = (fVar22 + fVar21) + fVar21;
  fVar20 = (fVar22 + fVar22) + fVar21;
  fVar27 = (fVar22 + (*(float *)(gen_frame + 0x4c)) * (*(float *)(gen_frame + 0x4c))) + fVar21;
  fVar21 = SQRT((fVar22 + gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x40)) + 0))) * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x40)) + 0)))) + fVar21);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x40)) + 0)) = (undefined4)gen_fl2bits(fVar21);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x40)) + 4)) = (undefined4)gen_fl2bits(fVar28);
  (*(float *)(gen_frame + 0x48)) = fVar20;
  (*(float *)(gen_frame + 0x4c)) = fVar27;
  fVar15 = (float10)fVar21;
  fVar16 = ((float10)GEN_TOD(SQRT((fVar4 * fVar4 + gen_bits2f(uVar3) * gen_bits2f(uVar3)) +
                         gen_bits2f(uVar8) * gen_bits2f(uVar8))));
  if (fVar15 <= fVar16 && ((!GEN_ISNAN(fVar16) && !GEN_ISNAN(fVar15)) && fVar16 != fVar15)) {
    F_00c47745((*(uint *)(gen_frame + 0xac)) ^ (uint)(uint)(gen_frame + 0xb0));
    return fVar7;
  }
  F_00c47745((*(uint *)(gen_frame + 0xac)) ^ (uint)(uint)(gen_frame + 0xb0));
  return (float)(fVar15 - fVar16);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoardObstruction::vf23 */
uint F_00d0d5d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd0d5d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  float fVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  float10 fVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  (*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  (*(byte *)(gen_frame + 0xf)) = 0;
  (*(float *)(gen_frame + 0x74)) = 9.47771e-38;
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x78)) + 0)) = 2;
  (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x78)) + 1)) = 0x303;
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x78)) + 3)) = 0;
  (*(float *)(gen_frame + 0x78)) = 2.76585e-40;
  iVar4 = 0;
  (*(float *)(gen_frame + 0x8)) = 1.4013e-45;
  do {
    if (((*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x8)) + 0)) & *((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x68))) & 0xf) == 0) {
      F_01053470((*(byte *)((int)&(*(float *)(gen_frame + 0x74)) + iVar4 * 2) + 2) * 0x10 + *(int *)(this + 0x128),
                   (*(byte *)((int)&(*(float *)(gen_frame + 0x74)) + iVar4 * 2 + 1) + 2) * 0x10 + *(int *)(this + 0x128),
                   param_1,&(*(float *)(gen_frame + 0x10)));
      uVar2 = (uint)(*(byte *)(gen_frame + 0xf));
      ((float *)(gen_frame + 0x28))[(int)(uVar2 * 4)] = (*(float *)(gen_frame + 0x10));
      ((float *)(gen_frame + 0x28))[(int)(uVar2 * 4 + 1)] = (*(float *)(gen_frame + 0x14));
      ((float *)(gen_frame + 0x28))[(int)(uVar2 * 4 + 2)] = (*(float *)(gen_frame + 0x18));
      (*(byte *)(gen_frame + 0xf)) = (*(byte *)(gen_frame + 0xf)) + 1;
      ((float *)(gen_frame + 0x28))[(int)(uVar2 * 4 + 3)] = (*(float *)(gen_frame + 0x1c));
    }
    iVar4 = iVar4 + 1;
    uVar2 = (int)gen_fl2bits((*(float *)(gen_frame + 0x8))) << 1;
    (*(float *)(gen_frame + 0x8)) = gen_bits2f(uVar2 | (int)gen_fl2bits((*(float *)(gen_frame + 0x8))) < 0);
  } while (iVar4 < 4);
  uVar2 = CONCAT31((int3)(uVar2 >> 8),(*(byte *)(gen_frame + 0xf)));
  if ((*(byte *)(gen_frame + 0xf)) != 0) {
    fVar1 = gen_bits2f((uint)(*(byte *)(gen_frame + 0xf)));
    iVar4 = 0;
    (*(float *)(gen_frame + 0x8)) = *(float *)&REFG(undefined, 0x1097254);
    fVar3 = fVar1;
    if ((*(byte *)(gen_frame + 0xf)) != 0) {
      do {
        fVar8 = ((float *)(gen_frame + 0x28))[(int)(iVar4 * 4)] - *param_1;
        fVar9 = ((float *)(gen_frame + 0x28))[(int)(iVar4 * 4 + 1)] - param_1[1];
        fVar10 = ((float *)(gen_frame + 0x28))[(int)(iVar4 * 4 + 2)] - param_1[2];
        (*(float *)(gen_frame + 0x10)) = fVar8;
        (*(float *)(gen_frame + 0x14)) = fVar9;
        (*(float *)(gen_frame + 0x18)) = fVar10;
        (*(float *)(gen_frame + 0x1c)) = ((float *)(gen_frame + 0x28))[(int)(iVar4 * 4 + 3)] - param_1[3];
        (*(float *)(gen_frame + 0x6c)) = fVar8;
        (*(float *)(gen_frame + 0x70)) = fVar9;
        (*(float *)(gen_frame + 0x74)) = fVar10;
        (*(float *)(gen_frame + 0x78)) = ((float *)(gen_frame + 0x28))[(int)(iVar4 * 4 + 3)] - param_1[3];
        fVar8 = SQRT((fVar10 * fVar10 + fVar8 * fVar8) + fVar9 * fVar9);
        if (iVar4 == 0) {
          *param_2 = ((float *)(gen_frame + 0x28))[0];
          param_2[1] = ((float *)(gen_frame + 0x28))[1];
          param_2[2] = ((float *)(gen_frame + 0x28))[2];
          param_2[3] = ((float *)(gen_frame + 0x28))[3];
          fVar3 = ((float *)(gen_frame + 0x28))[2];
          (*(float *)(gen_frame + 0x8)) = fVar8;
        }
        else {
          fVar6 = (float10)(*(float *)(gen_frame + 0x8));
          fVar7 = (float10)fVar8;
          bVar5 = GEN_ISNAN(fVar7) || GEN_ISNAN(fVar6);
          fVar3 = gen_bits2f(CONCAT22((short)((uint)gen_fl2bits(fVar3) >> 0x10),
                                      (ushort)!(fVar6 <= fVar7) << 8 | (ushort)bVar5 << 10 |
                                      (ushort)(bVar5 || fVar7 == fVar6) << 0xe));
          if (!(fVar6 <= fVar7) != bVar5) {
            *param_2 = ((float *)(gen_frame + 0x28))[(int)(iVar4 * 4)];
            param_2[1] = ((float *)(gen_frame + 0x28))[(int)(iVar4 * 4 + 1)];
            fVar3 = ((float *)(gen_frame + 0x28))[(int)(iVar4 * 4 + 2)];
            fVar9 = ((float *)(gen_frame + 0x28))[(int)(iVar4 * 4 + 3)];
            param_2[2] = fVar3;
            param_2[3] = fVar9;
            (*(float *)(gen_frame + 0x8)) = fVar8;
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)gen_fl2bits(fVar1));
    }
    uVar2 = CONCAT31((int3)((uint)gen_fl2bits(fVar3) >> 8),1);
  }
  F_00c47745((*(uint *)(gen_frame + 0x7c)) ^ (uint)(uint)(gen_frame + 0x80));
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoardObstruction::vf26 */
uint F_00d0d7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd0d7f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = (undefined4 *)F_00d22da0(this,param_1,0x70);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0xf4))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))));
  if (uVar2 != 0) {
    puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
    puVar5 = puVar1;
    for (iVar3 = 0x1c; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    return (uint)(puVar1 + 0x1c);
  }
  F_00d0df40(*(undefined4 *)(this + 0x128),(uint)puVar1);
  return (uint)(puVar1 + 0x1c);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoardObstruction::vf28 */
uint F_00d0d850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd0d850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  uVar2 = *(uint *)(this + 0x1c);
  if (*((int *)GEN_TOP((*(int *)(uVar2 + 0xc) + 0x2f8))) != 0) {
    F_00d22b20(this,&(*(undefined2 *)(gen_frame + 0x0)));
    (*(undefined2 *)(gen_frame + 0x0)) = (undefined2)param_1;
    (*(undefined2 *)(gen_frame + 0x2)) = 0x68;
    uVar3 = F_00427d90();
    iVar1 = *(int *)(this + 0x128);
    (*(ulonglong *)(gen_frame + 0x8)) = uVar3;
    (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(iVar1 + 0x20);
    (*(undefined4 *)(gen_frame + 0x3c)) = *(undefined4 *)(iVar1 + 0x24);
    (*(undefined4 *)(gen_frame + 0x40)) = *(undefined4 *)(iVar1 + 0x28);
    (*(undefined4 *)(gen_frame + 0x44)) = *(undefined4 *)(iVar1 + 0x30);
    (*(undefined4 *)(gen_frame + 0x48)) = *(undefined4 *)(iVar1 + 0x34);
    (*(undefined4 *)(gen_frame + 0x4c)) = *(undefined4 *)(iVar1 + 0x38);
    (*(undefined4 *)(gen_frame + 0x50)) = *(undefined4 *)(iVar1 + 0x40);
    (*(undefined4 *)(gen_frame + 0x54)) = *(undefined4 *)(iVar1 + 0x44);
    (*(undefined4 *)(gen_frame + 0x58)) = *(undefined4 *)(iVar1 + 0x48);
    (*(undefined4 *)(gen_frame + 0x5c)) = *(undefined4 *)(iVar1 + 0x50);
    (*(undefined4 *)(gen_frame + 0x60)) = *(undefined4 *)(iVar1 + 0x54);
    (*(undefined4 *)(gen_frame + 0x64)) = *(undefined4 *)(iVar1 + 0x58);
    F_00d0de90(&(*(undefined2 *)(gen_frame + 0x0)),&(*(undefined2 *)(gen_frame + 0x0)));
    uVar2 = F_00d00b10(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))),&(*(undefined2 *)(gen_frame + 0x0)),0x68);
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar2;
}

/* ref: FUN_00d0d920 */
uint F_00d0d920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd0d920u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  int * this_00;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90);
  F_00d22580(this,param_1,param_2,param_3);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x11325e4));
  F_00cccb10((int)this + 0x15c,(float)(float10)1);
  *(uint *)((int)this + 0xb0) =
       *(uint *)((int)this + 0xb0) ^ ((param_4 & 0xff) << 4 ^ *(uint *)((int)this + 0xb0)) & 0x10;
  if ((char)param_4 == '\0') {
    *(undefined4 * PTR32 *)((int)this + 0x128) = param_1;
  }
  else {
    *(undefined4 * PTR32 *)((int)this + 0x128) = (undefined4 *)((int)this + 0x180);
    puVar3 = param_1;
    puVar4 = (undefined4 *)((int)this + 0x180);
    for (iVar2 = 0x1c; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x128);
  F_00d0c460(this);
  F_00d20fe0(this,(uint)(~(*((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 4))) >> 5) & 1));
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  uVar1 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar1 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x80);
  }
  F_00d0d850(this,0x401);
  F_00c47745((*(uint *)(gen_frame + 0x8c)) ^ (uint)(uint)(gen_frame + 0x90));
  return (uint)this;
}

/* ref: FUN_00d0da50 */
uint F_00d0da50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd0da50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90);
  F_00d22720(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x11325e4));
  F_00cccb10((int)this + 0x15c,(float)(float10)1);
  *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) | 0x10;
  *(undefined * PTR32 *)((int)this + 0x128) = (undefined *)((int)this + 0x180);
  F_00609710((undefined *)((int)this + 0x180));
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x128);
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  uVar1 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar1 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x80);
  }
  F_00d0d850(this,0x401);
  F_00c47745((*(uint *)(gen_frame + 0x8c)) ^ (uint)(uint)(gen_frame + 0x90));
  return (uint)this;
}

/* ref: FUN_00d0db20 */
float F_00d0db20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd0db20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float fVar1;
  
  fVar1 = F_00d0d1c0(param_1,param_2,param_3);
  return fVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoardObstruction::vf29 */
uint F_00d0db30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd0db30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  HWND param_1 = (HWND)gen_a1;
  HDC param_2 = (HDC)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x160];
  char cVar1;
  float fVar2;
  HGDIOBJ pvVar3;
  undefined * pHVar4;
  int * piVar5;
  uint uVar6;
  float * pfVar7;
  char * pcVar8;
  int iVar9;
  int x;
  int iVar10;
  int iVar11;
  
  (*(uint *)(gen_frame + 0x158)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x15c);
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  pvVar3 = gen_imp_GetStockObject(5);
  (*(HGDIOBJ *)(gen_frame + 0x1c)) = pvVar3;
  pvVar3 = gen_imp_SelectObject(param_2,pvVar3);
  (*(HGDIOBJ *)(gen_frame + 0x18)) = pvVar3;
  pHVar4 = gen_imp_CreatePen(0,2,0x8000);
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = pHVar4;
  pvVar3 = gen_imp_SelectObject(param_2,pHVar4);
  (*(HGDIOBJ *)(gen_frame + 0x14)) = pvVar3;
  gen_imp_GetClientRect(param_1,&(*(tagRECT *)(gen_frame + 0x88)));
  iVar11 = (*(tagRECT *)(gen_frame + 0x88)).right / 2;
  iVar10 = (*(tagRECT *)(gen_frame + 0x88)).bottom / 2;
  piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1c) + 0xc))) + 0x98))))
                            (*((int * PTR32 *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1c) + 0xc))))));
  (*(int * PTR32 *)(gen_frame + 0x2c)) = piVar5;
  uVar6 = ((code *)*(gen_code32 *)(*piVar5 + 0x5c))(piVar5,((undefined1 *)(gen_frame + 0x38)));
  if ((char)uVar6 != '\0') {
    (*(float * PTR32 *)(gen_frame + 0x34)) = ((float *)(gen_frame + 0x98));
    (*(int *)(gen_frame + 0x24)) = *(int *)((*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x128) + 0x20;
    (*(int *)(gen_frame + 0x30)) = 4;
    do {
      pfVar7 = (float *)F_00c34320(((undefined1 *)(gen_frame + 0x38)),((undefined1 *)(gen_frame + 0x4)),(*(int *)(gen_frame + 0x24)));
      (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + 0x10;
      *(*(float * PTR32 *)(gen_frame + 0x34)) = *pfVar7;
      (*(float * PTR32 *)(gen_frame + 0x34))[1] = pfVar7[1];
      fVar2 = pfVar7[3];
      (*(float * PTR32 *)(gen_frame + 0x34))[2] = pfVar7[2];
      (*(float * PTR32 *)(gen_frame + 0x34))[3] = fVar2;
      iVar9 = (*(int *)(gen_frame + 0x30)) + -1;
      (*(int *)(gen_frame + 0x30)) = iVar9;
      (*(float * PTR32 *)(gen_frame + 0x34)) = (*(float * PTR32 *)(gen_frame + 0x34)) + 4;
    } while (iVar9 != 0);
    iVar9 = iVar10 - (int)((double)(*(float *)(gen_frame + 0xa0)) * *(double *)&REFG(double, 0x1132488));
    (*(int *)(gen_frame + 0x30)) = iVar9;
    x = iVar11 - (int)(*(double *)&REFG(double, 0x1132488) * (double)((float *)(gen_frame + 0x98))[0]);
    (*(float * PTR32 *)(gen_frame + 0x34)) = (float *)x;
    gen_imp_MoveToEx(param_2,x,iVar9,(LPPOINT)0x0);
    gen_imp_LineTo(param_2,iVar11 - (int)(*(double *)&REFG(double, 0x1132488) * (double)(*(float *)(gen_frame + 0xa8))),
           iVar10 - (int)((double)(*(float *)(gen_frame + 0xb0)) * *(double *)&REFG(double, 0x1132488)));
    gen_imp_LineTo(param_2,iVar11 - (int)(*(double *)&REFG(double, 0x1132488) * (double)(*(float *)(gen_frame + 0xb8))),
           iVar10 - (int)((double)(*(float *)(gen_frame + 0xc0)) * *(double *)&REFG(double, 0x1132488)));
    gen_imp_LineTo(param_2,iVar11 - (int)(*(double *)&REFG(double, 0x1132488) * (double)(*(float *)(gen_frame + 0xc8))),
           iVar10 - (int)((double)(*(float *)(gen_frame + 0xd0)) * *(double *)&REFG(double, 0x1132488)));
    iVar10 = (*(int *)(gen_frame + 0x30));
    gen_imp_LineTo(param_2,(*(float * PTR32 *)(gen_frame + 0x34)),(*(int *)(gen_frame + 0x30)));
    F_004ec420(((float *)(gen_frame + 0x98)));
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x2c)) + 0x30))((*(int * PTR32 *)(gen_frame + 0x2c)),((undefined1 *)(gen_frame + 0x78)));
    piVar5 = ((int *)(uintptr_t)gen_fl2bits((float)(F_00d0d1c0(*(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x128),((float *)(gen_frame + 0x98)),((undefined1 *)(gen_frame + 0x78))))));
    (*(int * PTR32 *)(gen_frame + 0x2c)) = piVar5;
    F_00c472af(((char *)(gen_frame + 0xd8)),0x80,"dis=%4.1f",GEN_LO32((undefined8)gen_d2bits((double)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar5))))),GEN_HI32((undefined8)gen_d2bits((double)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar5))))));
    pcVar8 = ((char *)(gen_frame + 0xd8));
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    gen_imp_TextOutA(param_2,(int)(*(float * PTR32 *)(gen_frame + 0x34)),iVar10,((char *)(gen_frame + 0xd8)),(int)pcVar8 - (int)(((char *)(gen_frame + 0xd8)) + 1));
    gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x14)));
    gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x18)));
    gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x20)));
    uVar6 = gen_imp_DeleteObject((*(HGDIOBJ *)(gen_frame + 0x1c)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x158)) ^ (uint)(uint)(gen_frame + 0x15c));
  return uVar6;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoardObstruction::vf3 */
uint F_00d0de40(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd0de40u, gen_a0, 0u, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_3 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))((undefined4)gen_fl2bits(param_2),local_c);
  return uVar1;
}

/* ref: FUN_00d0de90 */
unsigned int F_00d0de90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd0de90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined2 *)this;
  param_1[1] = *(undefined2 *)((int)this + 2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((int)this + 0x18);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)((int)this + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((int)this + 0x20);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)((int)this + 0x2c);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((int)this + 0x28);
  param_1[0x18] = *(undefined2 *)((int)this + 0x30);
  param_1[0x19] = *(undefined2 *)((int)this + 0x32);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)((int)this + 0x34);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((int)this + 0x38);
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)((int)this + 0x3c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)((int)this + 0x40);
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)((int)this + 0x44);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((int)this + 0x48);
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)((int)this + 0x4c);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)((int)this + 0x50);
  *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)((int)this + 0x54);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)((int)this + 0x58);
  *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)((int)this + 0x5c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)((int)this + 0x60);
  *(undefined4 *)(param_1 + 0x32) = *(undefined4 *)((int)this + 100);
  return 0;
}

/* ref: FUN_00d0df40 */
unsigned int F_00d0df40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd0df40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint * puVar2;
  uint * puVar3;
  int local_8;
  
  F_00d0c080(param_1,param_2);
  puVar3 = (uint *)(param_1 + 0x28);
  local_8 = 4;
  puVar2 = (uint *)(param_2 + 0x20);
  do {
    uVar1 = *((uint *)GEN_TOP(((param_1 - param_2) + (int)puVar2)));
    *puVar2 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = puVar3[-1];
    puVar2[1] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = *puVar3;
    puVar2[2] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = puVar3[1];
    puVar2[3] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    puVar3 = puVar3 + 4;
    local_8 = local_8 + -1;
    puVar2 = puVar2 + 4;
  } while (local_8 != 0);
  uVar1 = *(uint *)(param_1 + 0x60);
  *(uint *)(param_2 + 0x60) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 100);
  *(uint *)(param_2 + 100) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *(byte *)(param_2 + 0x68) =
       *(byte *)(param_2 + 0x68) ^ (*(byte *)(param_2 + 0x68) ^ *(byte *)(param_1 + 0x68)) & 0xf;
  *(byte *)(param_2 + 0x68) = *(byte *)(param_1 + 0x68) & 0x10 | *(byte *)(param_2 + 0x68) & 0xf;
  *(undefined2 *)(param_2 + 0x69) = 0;
  *(undefined1 *)(param_2 + 0x6b) = 0;
  *(ushort *)(param_2 + 0x6c) = *(ushort *)(param_1 + 0x6c) << 8 | *(ushort *)(param_1 + 0x6c) >> 8;
  *(ushort *)(param_2 + 0x6e) = *(ushort *)(param_1 + 0x6e) << 8 | *(ushort *)(param_1 + 0x6e) >> 8;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoardObstruction::vf0 */
uint F_00d0e050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd0e050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x11325e4));
  F_00cccb40(this + 0x15c);
  F_00d23680(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00d0e100 */
unsigned int F_00d0e100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd0e100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  *(undefined4 *)((int)this + 0x30) = *param_1;
  *(undefined4 *)((int)this + 0x34) = uVar1;
  *(undefined4 *)((int)this + 0x38) = uVar2;
  *(float *)((int)this + 0x3c) = (float)(float10)1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SurfaceSound::vf9 */
unsigned int F_00d0e150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd0e150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  float * pfVar1;
  float * pfVar2;
  float * pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  
  F_00d213b0(this,param_1,param_2);
  iVar10 = 0;
  do {
    iVar9 = *(int *)(this + 0x128);
    fVar4 = *(float *)(iVar9 + 0x28 + iVar10);
    fVar5 = *(float *)(iVar9 + 0x2c + iVar10);
    pfVar1 = (float *)(iVar9 + 0x20 + iVar10);
    pfVar2 = (float *)(iVar9 + 0x24 + iVar10);
    fVar6 = param_1[3];
    pfVar3 = (float *)(iVar9 + 0x20 + iVar10);
    iVar10 = iVar10 + 0x10;
    fVar7 = param_1[1];
    fVar8 = param_1[2];
    *pfVar3 = *pfVar1 + *param_1;
    pfVar3[1] = *pfVar2 + fVar7;
    pfVar3[2] = fVar4 + fVar8;
    pfVar3[3] = fVar5 + fVar6;
    *((float *)GEN_TOP((*(int *)(this + 0x128) + 0x1c + iVar10))) = (float)(float10)1;
  } while (iVar10 < 0x40);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SurfaceSound::vf12 */
uint F_00d0e220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd0e220u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x80);
  return (uint)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SurfaceSound::vf13 */
uint F_00d0e240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd0e240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float10 fVar1;
  
  fVar1 = F_00d22f40(this,GEN_TOF(*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x80)))),
                       *((byte *)GEN_TOP((*(int *)(this + 0x128) + 4))) >> 2 & 1);
  *param_1 = ((float)GEN_TOF((fVar1 * (float10)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x78))))));
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SurfaceSound::vf18 */
uint F_00d0e280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd0e280u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_3 < 0xa0) {
    return 0;
  }
  puVar2 = *(undefined4 * PTR32 *)(in_ecx + 0x128);
  puVar3 = param_2;
  for (iVar1 = 0x28; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0xa0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SurfaceSound::vf19 */
byte F_00d0e2c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd0e2c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x128);
  *param_1 = *(undefined4 *)(iVar1 + 0x60);
  *param_2 = *(undefined4 *)(iVar1 + 100);
  *param_3 = *(undefined4 *)(iVar1 + 0x84);
  *param_4 = *(undefined4 *)(iVar1 + 0x80);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SurfaceSound::vf20 */
uint F_00d0e300(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xd0e300u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x128);
  *(float *)(uVar1 + 0x60) = param_2;
  *((float *)GEN_TOP((*(int *)(in_ecx + 0x128) + 100))) = param_3;
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SurfaceSound::vf25 */
uint F_00d0e320(unsigned int gen_a0)
{
  GEN_ENTER(0xd0e320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0xbc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc0);
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
  uVar1 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar1 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0xb0);
  }
  F_00c47745((*(uint *)(gen_frame + 0xbc)) ^ (uint)(uint)(gen_frame + 0xc0));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SurfaceSound::vf27 */
byte F_00d0e3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd0e3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = param_1;
  puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
  for (iVar2 = 0x28; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  bVar1 = F_00d228c0(this);
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SurfaceSound::vf29 */
uint F_00d0e3d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd0e3d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  HWND param_1 = (HWND)gen_a1;
  HDC param_2 = (HDC)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  char cVar1;
  int iVar2;
  undefined * pHVar3;
  HGDIOBJ pvVar4;
  undefined * pHVar5;
  char * pcVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulong color;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  (*(HWND *)(gen_frame + 0x28)) = param_1;
  F_00c48350(((undefined *)(gen_frame + 0x2c)),0,0x3c);
  F_00c49908(((CHAR *)(((char *)((undefined *)(gen_frame + 0x2c)) + 28))),0x20,&REFG(undefined, 0x1132680));
  (*(LONG *)((char *)((undefined *)(gen_frame + 0x2c)))) = 0xd;
  (*(BYTE *)(((char *)((undefined *)(gen_frame + 0x2c)) + 23))) = 0x80;
  (*(BYTE *)(((char *)((undefined *)(gen_frame + 0x2c)) + 27))) = '\x01';
  pHVar3 = gen_imp_CreateFontIndirectA(((undefined *)(gen_frame + 0x2c)));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = pHVar3;
  pvVar4 = gen_imp_SelectObject(param_2,pHVar3);
  (*(HGDIOBJ *)(gen_frame + 0x18)) = pvVar4;
  pvVar4 = gen_imp_GetStockObject(5);
  (*(HGDIOBJ *)(gen_frame + 0x14)) = pvVar4;
  pvVar4 = gen_imp_SelectObject(param_2,pvVar4);
  (*(HGDIOBJ *)(gen_frame + 0x1c)) = pvVar4;
  if (((byte)this[0xb0] & 1) == 0) {
    iVar9 = 1;
    color = 0x900000;
  }
  else {
    color = 0x80;
    iVar9 = 2;
  }
  pHVar5 = gen_imp_CreatePen(0,iVar9,color);
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = pHVar5;
  pvVar4 = gen_imp_SelectObject(param_2,pHVar5);
  (*(HGDIOBJ *)(gen_frame + 0x20)) = pvVar4;
  gen_imp_GetClientRect((*(HWND *)(gen_frame + 0x28)),&(*(tagRECT *)(gen_frame + 0x68)));
  iVar9 = (*(tagRECT *)(gen_frame + 0x68)).right / 2;
  (*(HWND *)(gen_frame + 0x28)) = (HWND)((*(tagRECT *)(gen_frame + 0x68)).bottom / 2);
  gen_imp_MoveToEx(param_2,iVar9 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 300)),
           (*(tagRECT *)(gen_frame + 0x68)).bottom / 2 - (int)((double)*(float *)(this + 0x134) * *(double *)&REFG(double, 0x1132488)),
           (LPPOINT)0x0);
  gen_imp_LineTo(param_2,iVar9 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 0x13c)),
         (int)(*(HWND *)(gen_frame + 0x28)) - (int)((double)*(float *)(this + 0x144) * *(double *)&REFG(double, 0x1132488)));
  gen_imp_LineTo(param_2,iVar9 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 0x14c)),
         (int)(*(HWND *)(gen_frame + 0x28)) - (int)((double)*(float *)(this + 0x154) * *(double *)&REFG(double, 0x1132488)));
  gen_imp_LineTo(param_2,iVar9 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 0x15c)),
         (int)(*(HWND *)(gen_frame + 0x28)) - (int)((double)*(float *)(this + 0x164) * *(double *)&REFG(double, 0x1132488)));
  gen_imp_LineTo(param_2,iVar9 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 300)),
         (int)(*(HWND *)(gen_frame + 0x28)) - (int)((double)*(float *)(this + 0x134) * *(double *)&REFG(double, 0x1132488)));
  if (((byte)this[0xb0] & 1) != 0) {
    iVar9 = iVar9 - (int)((double)*(float *)(this + 0x50) * *(double *)&REFG(double, 0x1132488));
    iVar8 = (int)(*(HWND *)(gen_frame + 0x28)) - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 0x58));
    (*(HWND *)(gen_frame + 0x28)) = (HWND)iVar8;
    iVar2 = (int)((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 100))) * *(double *)&REFG(undefined, 0x10947f0));
    gen_imp_Ellipse(param_2,iVar9 - iVar2,iVar8 - iVar2,iVar2 + iVar9,iVar2 + iVar8);
    iVar2 = (int)((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x60))) * *(double *)&REFG(undefined, 0x10947f0));
    gen_imp_Ellipse(param_2,iVar9 - iVar2,(int)(*(HWND *)(gen_frame + 0x28)) - iVar2,iVar2 + iVar9,iVar2 + (int)(*(HWND *)(gen_frame + 0x28)));
    F_00c472af(((char *)(gen_frame + 0x78)),0x20,&REFG(undefined, 0x113268c),
               (int)(ulonglong)
                    gen_d2bits((double)*(float *)(this + 0x80) * *(double *)&REFG(undefined, 0x1088118)),
               (int)((ulonglong)
                     gen_d2bits((double)*(float *)(this + 0x80) * *(double *)&REFG(undefined, 0x1088118)) >> 0x20)
              );
    pcVar6 = ((char *)(gen_frame + 0x78));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    (*(int *)(gen_frame + 0x10)) = (int)pcVar6 - (int)(((char *)(gen_frame + 0x78)) + 1);
    gen_imp_GetTextExtentPoint32A(param_2,((char *)(gen_frame + 0x78)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x78)) + 1),&(*(undefined8 *)(gen_frame + 0x4)));
    gen_imp_TextOutA(param_2,iVar9 - (*(LONG *)((char *)&((*(undefined8 *)(gen_frame + 0x4))))) / 2,(int)(*(HWND *)(gen_frame + 0x28)) - (*(LONG *)(((char *)&((*(undefined8 *)(gen_frame + 0x4))) + 4))) / 2,((char *)(gen_frame + 0x78)),(*(int *)(gen_frame + 0x10)));
    if (((byte)this[0xb0] & 1) != 0) {
      (*(HWND *)(gen_frame + 0x28)) = (HWND)((*(tagRECT *)(gen_frame + 0x68)).bottom / 2);
      gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x20)));
      gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x24)));
      pHVar5 = gen_imp_CreatePen(0,1,0x900000);
      (*(undefined * PTR32 *)(gen_frame + 0x24)) = pHVar5;
      pvVar4 = gen_imp_SelectObject(param_2,pHVar5);
      (*(HGDIOBJ *)(gen_frame + 0x20)) = pvVar4;
      gen_imp_MoveToEx(param_2,(*(tagRECT *)(gen_frame + 0x68)).right / 2 -
                       (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 0x60)),
               (int)(*(HWND *)(gen_frame + 0x28)) - (int)((double)*(float *)(this + 0x68) * *(double *)&REFG(double, 0x1132488)),
               (LPPOINT)0x0);
      gen_imp_LineTo(param_2,(*(tagRECT *)(gen_frame + 0x68)).right / 2,(int)(*(HWND *)(gen_frame + 0x28)));
    }
  }
  gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x18)));
  gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x20)));
  gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x1c)));
  gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0xc)));
  gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x24)));
  uVar7 = gen_imp_DeleteObject((*(HGDIOBJ *)(gen_frame + 0x14)));
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
  return uVar7;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SurfaceSound::vf30 */
byte F_00d0e7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd0e7a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined * _File;
  byte bVar5;
  int iVar6;
  
  _File = param_1;
  bVar5 = F_00d21f00((undefined *)this,param_1);
  if (bVar5 == 0) {
    return 0;
  }
  iVar6 = 0;
  param_1 = (undefined *)0x0;
  do {
    iVar1 = *(int *)(this + 0x128);
    dVar2 = (double)*(float *)(iVar6 + 0x28 + iVar1);
    dVar3 = (double)*(float *)(iVar6 + 0x24 + iVar1);
    dVar4 = (double)*(float *)(iVar6 + 0x20 + iVar1);
    F_00c49386(_File,"Position[%d] = %f %f %f\n",param_1,(int)(ulonglong)gen_d2bits(dVar4),
             (int)((ulonglong)gen_d2bits(dVar4) >> 0x20),(int)(ulonglong)gen_d2bits(dVar3),
             (int)((ulonglong)gen_d2bits(dVar3) >> 0x20),(int)(ulonglong)gen_d2bits(dVar2),
             (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
    param_1 = (undefined *)((int)param_1 + (1) * 32);
    iVar6 = iVar6 + 0x10;
  } while (iVar6 < 0x40);
  F_00c49386(_File,"MaxRange = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x60))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x60))))));
  F_00c49386(_File,"MinRange = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 100))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 100))))));
  param_1 = (undefined *)0x0;
  iVar6 = 0x68;
  do {
    F_00c49386(_File,"Height[%d] = %f\n",param_1,
             (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + iVar6)))),
             (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + iVar6)))) >> 0x20
                  ));
    param_1 = (undefined *)((int)param_1 + (1) * 32);
    iVar6 = iVar6 + 4;
  } while (iVar6 < 0x70);
  F_00c49386(_File,"RangeVolume = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x70))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x70))))));
  F_00c49386(_File,"Volume = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x74))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x74))))));
  F_00c49386(_File,"Pitch = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x78))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x78))))));
  F_00c49386(_File,"ReverbFac = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x7c))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x7c))))));
  F_00c49386(_File,"DopplerFac = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x80))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x80))))));
  F_00c49386(_File,"IsReverbObject = %d\n",*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x8d))) & 1);
  F_00c49386(_File,"[EndOfSoundObject]\n\n");
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SurfaceSound::vf31 */
byte F_00d0e930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd0e930u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  char * pcVar2;
  int iVar3;
  uint uVar4;
  byte * pbVar5;
  bool bVar6;
  double dVar7;
  
  pcVar2 = "Position";
  pbVar5 = (byte *)param_2;
  do {
    bVar1 = *pcVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00d0e961: ;
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00d0e966;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00d0e961;
    pcVar2 = pcVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d0e966: ;
  if (iVar3 == 0) {
    uVar4 = F_00d00d00(0,0);
    if (uVar4 != 0) {
      uVar4 = F_00c4c74c(uVar4);
      pcVar2 = (char *)F_00d00d00(0,0);
      if (pcVar2 != (char *)0x0) {
        dVar7 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + (uVar4 + 2) * 0x10))) = (float)dVar7;
        pcVar2 = (char *)F_00d00d00(0,0);
        if (pcVar2 != (char *)0x0) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x24 + uVar4 * 0x10))) = (float)dVar7;
          pcVar2 = (char *)F_00d00d00(0,0);
          if (pcVar2 != (char *)0x0) {
            dVar7 = F_00c4acaa(pcVar2);
            *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x28 + uVar4 * 0x10))) = (float)dVar7;
            return 1;
          }
        }
      }
    }
  }
  else {
    pcVar2 = "MaxRange";
    pbVar5 = (byte *)param_2;
    do {
      bVar1 = *pcVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00d0ea36: ;
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00d0ea3b;
      }
      if (bVar1 == 0) break;
      bVar1 = pcVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00d0ea36;
      pcVar2 = pcVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00d0ea3b: ;
    if (iVar3 == 0) {
      pcVar2 = (char *)F_00d00d00(0,0);
      if (pcVar2 != (char *)0x0) {
        dVar7 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x60))) = (float)dVar7;
        return 1;
      }
    }
    else {
      pcVar2 = "MinRange";
      pbVar5 = (byte *)param_2;
      do {
        bVar1 = *pcVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00d0ea98: ;
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00d0ea9d;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00d0ea98;
        pcVar2 = pcVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00d0ea9d: ;
      if (iVar3 == 0) {
        pcVar2 = (char *)F_00d00d00(0,0);
        if (pcVar2 != (char *)0x0) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 100))) = (float)dVar7;
          return 1;
        }
      }
      else {
        pcVar2 = "Height";
        pbVar5 = (byte *)param_2;
        do {
          bVar1 = *pcVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00d0eb00: ;
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_00d0eb05;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00d0eb00;
          pcVar2 = pcVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00d0eb05: ;
        if (iVar3 == 0) {
          uVar4 = F_00d00d00(0,0);
          if (uVar4 != 0) {
            uVar4 = F_00c4c74c(uVar4);
            pcVar2 = (char *)F_00d00d00(0,0);
            if (pcVar2 != (char *)0x0) {
              dVar7 = F_00c4acaa(pcVar2);
              *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x68 + uVar4 * 4))) = (float)dVar7;
              return 1;
            }
          }
        }
        else {
          pcVar2 = "RangeVolume";
          pbVar5 = (byte *)param_2;
          do {
            bVar1 = *pcVar2;
            bVar6 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_00d0eb80: ;
              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
              goto LAB_00d0eb85;
            }
            if (bVar1 == 0) break;
            bVar1 = pcVar2[1];
            bVar6 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00d0eb80;
            pcVar2 = pcVar2 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_00d0eb85: ;
          if (iVar3 == 0) {
            pcVar2 = (char *)F_00d00d00(0,0);
            if (pcVar2 != (char *)0x0) {
              dVar7 = F_00c4acaa(pcVar2);
              *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x70))) = (float)dVar7;
              return 1;
            }
          }
          else {
            pcVar2 = "Volume";
            pbVar5 = (byte *)param_2;
            do {
              bVar1 = *pcVar2;
              bVar6 = bVar1 < *pbVar5;
              if (bVar1 != *pbVar5) {
LAB_00d0ebe2: ;
                iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                goto LAB_00d0ebe7;
              }
              if (bVar1 == 0) break;
              bVar1 = pcVar2[1];
              bVar6 = bVar1 < pbVar5[1];
              if (bVar1 != pbVar5[1]) goto LAB_00d0ebe2;
              pcVar2 = pcVar2 + 2;
              pbVar5 = pbVar5 + 2;
            } while (bVar1 != 0);
            iVar3 = 0;
LAB_00d0ebe7: ;
            if (iVar3 == 0) {
              pcVar2 = (char *)F_00d00d00(0,0);
              if (pcVar2 != (char *)0x0) {
                dVar7 = F_00c4acaa(pcVar2);
                *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x74))) = (float)dVar7;
                return 1;
              }
            }
            else {
              pcVar2 = "Pitch";
              pbVar5 = (byte *)param_2;
              do {
                bVar1 = *pcVar2;
                bVar6 = bVar1 < *pbVar5;
                if (bVar1 != *pbVar5) {
LAB_00d0ec44: ;
                  iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                  goto LAB_00d0ec49;
                }
                if (bVar1 == 0) break;
                bVar1 = pcVar2[1];
                bVar6 = bVar1 < pbVar5[1];
                if (bVar1 != pbVar5[1]) goto LAB_00d0ec44;
                pcVar2 = pcVar2 + 2;
                pbVar5 = pbVar5 + 2;
              } while (bVar1 != 0);
              iVar3 = 0;
LAB_00d0ec49: ;
              if (iVar3 == 0) {
                pcVar2 = (char *)F_00d00d00(0,0);
                if (pcVar2 != (char *)0x0) {
                  dVar7 = F_00c4acaa(pcVar2);
                  *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x78))) = (float)dVar7;
                  return 1;
                }
              }
              else {
                pcVar2 = "ReverbFac";
                pbVar5 = (byte *)param_2;
                do {
                  bVar1 = *pcVar2;
                  bVar6 = bVar1 < *pbVar5;
                  if (bVar1 != *pbVar5) {
LAB_00d0eca6: ;
                    iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                    goto LAB_00d0ecab;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pcVar2[1];
                  bVar6 = bVar1 < pbVar5[1];
                  if (bVar1 != pbVar5[1]) goto LAB_00d0eca6;
                  pcVar2 = pcVar2 + 2;
                  pbVar5 = pbVar5 + 2;
                } while (bVar1 != 0);
                iVar3 = 0;
LAB_00d0ecab: ;
                if (iVar3 == 0) {
                  pcVar2 = (char *)F_00d00d00(0,0);
                  if (pcVar2 != (char *)0x0) {
                    dVar7 = F_00c4acaa(pcVar2);
                    *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x7c))) = (float)dVar7;
                    return 1;
                  }
                }
                else {
                  pcVar2 = "DopplerFac";
                  pbVar5 = (byte *)param_2;
                  do {
                    bVar1 = *pcVar2;
                    bVar6 = bVar1 < *pbVar5;
                    if (bVar1 != *pbVar5) {
LAB_00d0ed08: ;
                      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                      goto LAB_00d0ed0d;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pcVar2[1];
                    bVar6 = bVar1 < pbVar5[1];
                    if (bVar1 != pbVar5[1]) goto LAB_00d0ed08;
                    pcVar2 = pcVar2 + 2;
                    pbVar5 = pbVar5 + 2;
                  } while (bVar1 != 0);
                  iVar3 = 0;
LAB_00d0ed0d: ;
                  if (iVar3 == 0) {
                    pcVar2 = (char *)F_00d00d00(0,0);
                    if (pcVar2 != (char *)0x0) {
                      dVar7 = F_00c4acaa(pcVar2);
                      *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x80))) = (float)dVar7;
                      return 1;
                    }
                  }
                  else {
                    pcVar2 = "SubSoundType";
                    pbVar5 = (byte *)param_2;
                    do {
                      bVar1 = *pcVar2;
                      bVar6 = bVar1 < *pbVar5;
                      if (bVar1 != *pbVar5) {
LAB_00d0ed70: ;
                        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                        goto LAB_00d0ed75;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pcVar2[1];
                      bVar6 = bVar1 < pbVar5[1];
                      if (bVar1 != pbVar5[1]) goto LAB_00d0ed70;
                      pcVar2 = pcVar2 + 2;
                      pbVar5 = pbVar5 + 2;
                    } while (bVar1 != 0);
                    iVar3 = 0;
LAB_00d0ed75: ;
                    if (iVar3 == 0) {
                      uVar4 = F_00d00d00(0,0);
                      if (uVar4 != 0) {
                        uVar4 = F_00c4c74c(uVar4);
                        *((char *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x8c))) = (char)uVar4;
                        return 1;
                      }
                    }
                    else {
                      pcVar2 = "IsReverbObject";
                      pbVar5 = (byte *)param_2;
                      do {
                        bVar1 = *pcVar2;
                        bVar6 = bVar1 < *pbVar5;
                        if (bVar1 != *pbVar5) {
LAB_00d0edd0: ;
                          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                          goto LAB_00d0edd5;
                        }
                        if (bVar1 == 0) break;
                        bVar1 = pcVar2[1];
                        bVar6 = bVar1 < pbVar5[1];
                        if (bVar1 != pbVar5[1]) goto LAB_00d0edd0;
                        pcVar2 = pcVar2 + 2;
                        pbVar5 = pbVar5 + 2;
                      } while (bVar1 != 0);
                      iVar3 = 0;
LAB_00d0edd5: ;
                      if (iVar3 != 0) {
                        bVar1 = F_00d22040(param_1,param_2);
                        return bVar1;
                      }
                      uVar4 = F_00d00d00(0,0);
                      if (uVar4 != 0) {
                        uVar4 = F_00c4c74c(uVar4);
                        pbVar5 = ((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x8d)));
                        *pbVar5 = *pbVar5 ^ (*((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x8d))) ^
                                            (byte)uVar4) & 1;
                        return 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00d0ee30 */
float F_00d0ee30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd0ee30u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  float * pfVar1;
  byte bVar2;
  float * pfVar3;
  float * pfVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  (*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90);
  gen_piece_set(&(*(undefined4 *)(gen_frame + 0x87)), 1, 3, (unsigned long long)((undefined3)param_1));
  (*(undefined1 *)(gen_frame + 0x8b)) = (undefined1)((uint)param_1 >> 0x18);
  (*(float * PTR32 *)(gen_frame + 0x10)) = param_3;
  pfVar4 = ((float *)(gen_frame + 0x38));
  iVar6 = param_1 + 0x20;
  (*(float *)(gen_frame + 0x14)) = 5.60519e-45;
  do {
    pfVar3 = (float *)F_00c34320(param_2,&(*(float *)(gen_frame + 0x0)),iVar6);
    pfVar1 = (*(float * PTR32 *)(gen_frame + 0x10));
    *pfVar4 = *pfVar3;
    pfVar4[1] = pfVar3[1];
    pfVar4[2] = pfVar3[2];
    pfVar4[3] = pfVar3[3];
    iVar6 = iVar6 + 0x10;
    pfVar4 = pfVar4 + 4;
    fVar14 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x14))) + -1);
    (*(float *)(gen_frame + 0x14)) = fVar14;
  } while (fVar14 != 0.0);
  iVar6 = CONCAT13((*(undefined1 *)(gen_frame + 0x8b)),GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x87)), 1, 3));
  if ((*(byte *)(iVar6 + 4) & 4) == 0) {
    (*(float *)(gen_frame + 0x14)) = ((float *)(gen_frame + 0x38))[1];
    F_00d218f0((*(float * PTR32 *)(gen_frame + 0x10))[1],&(*(float *)(gen_frame + 0x14)),iVar6,iVar6 + 0x68);
    ((float *)(gen_frame + 0x38))[1] = (*(float *)(gen_frame + 0x14));
    ((float *)(gen_frame + 0x38))[5] = (*(float *)(gen_frame + 0x14));
    (*(float *)(gen_frame + 0x5c)) = (*(float *)(gen_frame + 0x14));
    (*(float *)(gen_frame + 0x6c)) = (*(float *)(gen_frame + 0x14));
  }
  fVar14 = *pfVar1;
  fVar9 = pfVar1[1];
  fVar10 = pfVar1[2];
  fVar12 = pfVar1[3];
  iVar5 = 4;
  pfVar4 = ((float *)(gen_frame + 0x38)) + 2;
  do {
    iVar5 = iVar5 + -1;
    fVar11 = pfVar4[-2] - fVar14;
    fVar13 = pfVar4[-1] - fVar9;
    fVar15 = *pfVar4 - fVar10;
    fVar16 = pfVar4[1] - fVar12;
    (*(float *)(gen_frame + 0x0)) = fVar11;
    (*(float *)(gen_frame + 0x4)) = fVar13;
    (*(float *)(gen_frame + 0x8)) = fVar15;
    (*(float *)(gen_frame + 0xc)) = fVar16;
    (*(float *)(gen_frame + 0x7c)) = fVar11;
    pfVar4[-2] = fVar11;
    (*(float *)(gen_frame + 0x80)) = fVar13;
    pfVar4[-1] = fVar13;
    ((byte *)(gen_frame + 0x84))[0] = (byte)(uint)gen_fl2bits(fVar15);
    ((byte *)(gen_frame + 0x84))[1] = (byte)((uint)gen_fl2bits(fVar15) >> 8);
    ((byte *)(gen_frame + 0x84))[2] = (byte)((uint)gen_fl2bits(fVar15) >> 0x10);
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x87)) + 0)) = (undefined1)((uint)gen_fl2bits(fVar15) >> 0x18);
    *pfVar4 = fVar15;
    gen_piece_set(&(*(undefined4 *)(gen_frame + 0x87)), 1, 3, (unsigned long long)((undefined3)(uint)gen_fl2bits(fVar16)));
    (*(undefined1 *)(gen_frame + 0x8b)) = (undefined1)((uint)gen_fl2bits(fVar16) >> 0x18);
    pfVar4[1] = fVar16;
    pfVar4 = pfVar4 + 4;
  } while (iVar5 != 0);
  (*(float * PTR32 *)(gen_frame + 0x10)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)(float10)0)));
  F_01052f50(((float *)(gen_frame + 0x38)),&(*(float *)(gen_frame + 0x28)));
  bVar2 = F_01053270(((float *)(gen_frame + 0x38)),&(*(float *)(gen_frame + 0x28)));
  if (bVar2 == 1) {
    fVar12 = 0.0 - ((float *)(gen_frame + 0x38))[0];
    fVar14 = 0.0 - ((float *)(gen_frame + 0x38))[1];
    fVar11 = 0.0 - ((float *)(gen_frame + 0x38))[2];
    (*(float *)(gen_frame + 0x0)) = fVar12;
    (*(float *)(gen_frame + 0x4)) = fVar14;
    (*(float *)(gen_frame + 0x8)) = fVar11;
    (*(float *)(gen_frame + 0xc)) = 0.0 - ((float *)(gen_frame + 0x38))[3];
    (*(float *)(gen_frame + 0x7c)) = fVar12;
    (*(float *)(gen_frame + 0x80)) = fVar14;
    ((byte *)(gen_frame + 0x84))[0] = (byte)(uint)gen_fl2bits(fVar11);
    ((byte *)(gen_frame + 0x84))[1] = (byte)((uint)gen_fl2bits(fVar11) >> 8);
    ((byte *)(gen_frame + 0x84))[2] = (byte)((uint)gen_fl2bits(fVar11) >> 0x10);
    fVar14 = (*(float *)(gen_frame + 0x2c)) * fVar14;
    fVar9 = (*(float *)(gen_frame + 0x30)) * fVar11;
    fVar10 = (*(float *)(gen_frame + 0x34)) * (0.0 - ((float *)(gen_frame + 0x38))[3]);
    fVar12 = ((fVar14 + (*(float *)(gen_frame + 0x28)) * fVar12) + fVar9) + fVar10;
    (*(float *)(gen_frame + 0x0)) = fVar12;
    (*(float *)(gen_frame + 0x4)) = ((fVar14 + fVar14) + fVar9) + fVar10;
    (*(float *)(gen_frame + 0x8)) = ((fVar14 + fVar9) + fVar9) + fVar10;
    (*(float *)(gen_frame + 0xc)) = ((fVar14 + fVar10) + fVar9) + fVar10;
    fVar14 = ((float)GEN_TOF(ABS((float10)fVar12)));
    gen_piece_set(&(*(undefined4 *)(gen_frame + 0x87)), 1, 3, (unsigned long long)((undefined3)(uint)gen_fl2bits(fVar14)));
    (*(undefined4 *)(gen_frame + 0x87)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x87)), 1, 3),(char)((uint)gen_fl2bits(fVar11) >> 0x18));
    (*(undefined1 *)(gen_frame + 0x8b)) = (undefined1)((uint)gen_fl2bits(fVar14) >> 0x18);
    (*(float * PTR32 *)(gen_frame + 0x10)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar14)));
  }
  else {
    ((byte *)(gen_frame + 0x84))[0] = 0;
    ((byte *)(gen_frame + 0x84))[1] = 1;
    ((byte *)(gen_frame + 0x84))[2] = 1;
    (*(undefined4 *)(gen_frame + 0x87)) = 0x3030202;
    (*(undefined1 *)(gen_frame + 0x8b)) = 0;
    iVar5 = 0;
    do {
      fVar14 = F_010536a0(((float *)(gen_frame + 0x38)) + (uint)((byte *)(gen_frame + 0x84))[(int)(iVar5 * 2)] * 4,
                            ((float *)(gen_frame + 0x38)) + (uint)((byte *)(gen_frame + 0x84))[(int)(iVar5 * 2 + 1)] * 4,((undefined1 *)(gen_frame + 0x18)));
      (*(float *)(gen_frame + 0x14)) = fVar14;
      fVar7 = (float10)fVar14;
      fVar8 = (float10)*(float *)(iVar6 + 100);
      if (!(fVar7 <= fVar8) == ((GEN_ISNAN(fVar8) || GEN_ISNAN(fVar7)) || fVar8 == fVar7)) goto LAB_00d0f10c;
      fVar14 = ((float)GEN_TOF((fVar7 - (float10)*(float *)(iVar6 + 100))));
      (*(float *)(gen_frame + 0x14)) = fVar14;
      fVar7 = (float10)fVar14;
      if (iVar5 == 0) {
        (*(float * PTR32 *)(gen_frame + 0x10)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar14)));
      }
      else {
        fVar8 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x10)))));
        if (fVar7 <= fVar8 && ((!GEN_ISNAN(fVar8) && !GEN_ISNAN(fVar7)) && fVar8 != fVar7)) {
          (*(float * PTR32 *)(gen_frame + 0x10)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar14)));
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
  }
  fVar7 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x10)))));
  fVar8 = (float10)*(float *)(iVar6 + 100);
  if (!(fVar7 <= fVar8) != ((GEN_ISNAN(fVar8) || GEN_ISNAN(fVar7)) || fVar8 == fVar7)) {
    fVar14 = ((float)GEN_TOF((fVar7 - (float10)*(float *)(iVar6 + 100))));
    gen_piece_set(&(*(undefined4 *)(gen_frame + 0x87)), 1, 3, (unsigned long long)((undefined3)(uint)gen_fl2bits(fVar14)));
    (*(undefined1 *)(gen_frame + 0x8b)) = (undefined1)((uint)gen_fl2bits(fVar14) >> 0x18);
    F_00c47745((*(uint *)(gen_frame + 0x8c)) ^ (uint)(uint)(gen_frame + 0x90));
    return fVar14;
  }
LAB_00d0f10c: ;
  F_00c47745((*(uint *)(gen_frame + 0x8c)) ^ (uint)(uint)(gen_frame + 0x90));
  return (float)(float10)0;
}

/* ref: FUN_00d0f130 */
uint F_00d0f130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd0f130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x150];
  float * pfVar1;
  char cVar2;
  code * pcVar3;
  ushort uVar4;
  undefined3 uVar5;
  byte bVar6;
  int * piVar7;
  uint uVar8;
  undefined3 extraout_var = 0;
  undefined4 * puVar9;
  ushort extraout_var_00 = 0;
  undefined4 * puVar10;
  undefined2 extraout_var_01 = 0;
  int iVar11;
  bool bVar12;
  bool bVar13;
  ushort uVar14;
  float10 fVar15;
  float10 fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  (*(uint *)(gen_frame + 0x13c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x140);
  piVar7 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  (*(float * PTR32 *)(gen_frame + 0x14)) = param_1;
  piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 0x98))(piVar7)));
  (*(int * PTR32 *)(gen_frame + 0x10)) = piVar7;
  uVar8 = ((code *)*(gen_code32 *)(*piVar7 + 0x5c))(piVar7,((undefined1 *)(gen_frame + 0x60)));
  if ((char)uVar8 != '\0') {
    iVar11 = *(int *)((int)this + 0x128);
    (*(undefined4 *)(gen_frame + 0xe8)) = *(undefined4 *)(iVar11 + 0x20);
    (*(undefined4 *)(gen_frame + 0xec)) = *(undefined4 *)(iVar11 + 0x24);
    (*(undefined4 *)(gen_frame + 0xf0)) = *(undefined4 *)(iVar11 + 0x28);
    (*(undefined4 *)(gen_frame + 0xf4)) = *(undefined4 *)(iVar11 + 0x2c);
    (*(undefined4 *)(gen_frame + 0xf8)) = *(undefined4 *)(iVar11 + 0x30);
    (*(undefined4 *)(gen_frame + 0xfc)) = *(undefined4 *)(iVar11 + 0x34);
    (*(undefined4 *)(gen_frame + 0x100)) = *(undefined4 *)(iVar11 + 0x38);
    (*(undefined4 *)(gen_frame + 0x104)) = *(undefined4 *)(iVar11 + 0x3c);
    (*(undefined4 *)(gen_frame + 0x108)) = *(undefined4 *)(iVar11 + 0x40);
    (*(undefined4 *)(gen_frame + 0x10c)) = *(undefined4 *)(iVar11 + 0x44);
    (*(undefined4 *)(gen_frame + 0x110)) = *(undefined4 *)(iVar11 + 0x48);
    (*(undefined4 *)(gen_frame + 0x114)) = *(undefined4 *)(iVar11 + 0x4c);
    (*(undefined4 *)(gen_frame + 0x118)) = *(undefined4 *)(iVar11 + 0x50);
    (*(undefined4 *)(gen_frame + 0x11c)) = *(undefined4 *)(iVar11 + 0x54);
    (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(iVar11 + 0x24);
    (*(undefined4 *)(gen_frame + 0x120)) = *(undefined4 *)(iVar11 + 0x58);
    (*(undefined4 *)(gen_frame + 0x124)) = *(undefined4 *)(iVar11 + 0x5c);
    ((code *)*(gen_code32 *)(*piVar7 + 0x30))(piVar7,((undefined1 *)(gen_frame + 0xa0)));
    iVar11 = *(int *)((int)this + 0x128);
    if ((*(byte *)(iVar11 + 4) & 4) == 0) {
      bVar6 = F_00d218f0((*(float *)(gen_frame + 0xa4)),&(*(undefined4 *)(gen_frame + 0xc)),iVar11,iVar11 + 0x68);
      uVar8 = CONCAT31(extraout_var,bVar6);
      if (bVar6 != 1) goto LAB_00d0f4dc;
      (*(undefined4 *)(gen_frame + 0xec)) = (*(undefined4 *)(gen_frame + 0xc));
      (*(undefined4 *)(gen_frame + 0xfc)) = (*(undefined4 *)(gen_frame + 0xc));
      (*(undefined4 *)(gen_frame + 0x10c)) = (*(undefined4 *)(gen_frame + 0xc));
      (*(undefined4 *)(gen_frame + 0x11c)) = (*(undefined4 *)(gen_frame + 0xc));
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 *)(gen_frame + 0xe8));
    puVar10 = (undefined4 *)((int)this + 300);
    (*(float *)(gen_frame + 0x18)) = 5.60519e-45;
    do {
      puVar9 = (undefined4 *)F_00c34320(((undefined1 *)(gen_frame + 0x60)),&(*(float *)(gen_frame + 0xc0)),(*(undefined4 * PTR32 *)(gen_frame + 0x1c)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) + 4;
      *puVar10 = *puVar9;
      puVar10[1] = puVar9[1];
      puVar10[2] = puVar9[2];
      puVar10[3] = puVar9[3];
      puVar10 = puVar10 + 4;
      fVar19 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x18))) + -1);
      (*(float *)(gen_frame + 0x18)) = fVar19;
    } while (fVar19 != 0.0);
    (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1090708))));
    pfVar1 = (float *)((int)this + 300);
    F_01052f50(pfVar1,&(*(float *)(gen_frame + 0xb0)));
    bVar6 = F_01053270(pfVar1,&(*(float *)(gen_frame + 0xb0)));
    if (bVar6 == 1) {
      fVar18 = 0.0 - *pfVar1;
      fVar19 = 0.0 - *(float *)((int)this + 0x130);
      fVar20 = 0.0 - *(float *)((int)this + 0x134);
      fVar21 = 0.0 - *(float *)((int)this + 0x138);
      (*(float *)(gen_frame + 0xc0)) = fVar18;
      (*(float *)(gen_frame + 0xc4)) = fVar19;
      (*(float *)(gen_frame + 0xc8)) = fVar20;
      (*(float *)(gen_frame + 0xcc)) = fVar21;
      (*(float *)(gen_frame + 0x12c)) = fVar18;
      (*(float *)(gen_frame + 0x130)) = fVar19;
      fVar19 = fVar19 * (*(float *)(gen_frame + 0xb4));
      fVar20 = fVar20 * (*(float *)(gen_frame + 0xb8));
      fVar21 = fVar21 * (*(float *)(gen_frame + 0xbc));
      fVar18 = ((fVar19 + fVar18 * (*(float *)(gen_frame + 0xb0))) + fVar20) + fVar21;
      (*(float *)(gen_frame + 0xc0)) = fVar18;
      (*(float *)(gen_frame + 0xc4)) = ((fVar19 + fVar19) + fVar20) + fVar21;
      (*(float *)(gen_frame + 0xc8)) = ((fVar19 + fVar20) + fVar20) + fVar21;
      (*(float *)(gen_frame + 0xcc)) = ((fVar19 + fVar21) + fVar20) + fVar21;
      fVar21 = gen_bits2f((uint)gen_fl2bits(fVar18) ^ REFG(uint, 0x10920d0));
      fVar19 = ((float)GEN_TOF(ABS((float10)fVar18)));
      (*(float *)(gen_frame + 0x18)) = fVar19;
      (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(fVar19)));
      fVar18 = fVar21 * (*(float *)(gen_frame + 0xb0));
      fVar17 = fVar21 * (*(float *)(gen_frame + 0xb4));
      fVar20 = fVar21 * (*(float *)(gen_frame + 0xb8));
      fVar21 = fVar21 * (*(float *)(gen_frame + 0xbc));
      (*(float *)(gen_frame + 0xc0)) = fVar18;
      (*(float *)(gen_frame + 0xc4)) = fVar17;
      (*(float *)(gen_frame + 0xc8)) = fVar20;
      (*(float *)(gen_frame + 0xcc)) = fVar21;
      (*(float *)(gen_frame + 0x12c)) = fVar18;
      *(float *)((int)this + 0x60) = fVar18;
      (*(float *)(gen_frame + 0x130)) = fVar17;
      *(float *)((int)this + 100) = fVar17;
      ((byte *)(gen_frame + 0x134))[0] = (byte)(uint)gen_fl2bits(fVar20);
      ((byte *)(gen_frame + 0x134))[1] = (byte)((uint)gen_fl2bits(fVar20) >> 8);
      ((byte *)(gen_frame + 0x134))[2] = (byte)((uint)gen_fl2bits(fVar20) >> 0x10);
      *(float *)((int)this + 0x68) = fVar20;
      gen_piece_set(&(*(undefined4 *)(gen_frame + 0x137)), 1, 3, (unsigned long long)((undefined3)(uint)gen_fl2bits(fVar21)));
      (*(undefined4 *)(gen_frame + 0x137)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x137)), 1, 3),(char)((uint)gen_fl2bits(fVar20) >> 0x18));
      (*(undefined1 *)(gen_frame + 0x13b)) = (undefined1)((uint)gen_fl2bits(fVar21) >> 0x18);
      *(float *)((int)this + 0x6c) = (float)(float10)1;
      *(float *)((int)this + 0x94) = (float)(float10)1;
      fVar15 = (float10)fVar19;
    }
    else {
      ((byte *)(gen_frame + 0x134))[0] = 0;
      ((byte *)(gen_frame + 0x134))[1] = 1;
      ((byte *)(gen_frame + 0x134))[2] = 1;
      (*(undefined4 *)(gen_frame + 0x137)) = 0x3030202;
      (*(undefined1 *)(gen_frame + 0x13b)) = 0;
      iVar11 = 0;
      do {
        fVar19 = F_010536a0((uint)((byte *)(gen_frame + 0x134))[(int)(iVar11 * 2)] * 0x10 + 300 + (int)this,
                              (int)this + (uint)((byte *)(gen_frame + 0x134))[(int)(iVar11 * 2 + 1)] * 0x10 + 300,&(*(undefined4 *)(gen_frame + 0xd8)));
        (*(float *)(gen_frame + 0x18)) = fVar19;
        fVar16 = (float10)0;
        fVar15 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x1c)))));
        if (!(fVar16 <= fVar15) == ((GEN_ISNAN(fVar15) || GEN_ISNAN(fVar16)) || fVar15 == fVar16)) {
          fVar20 = gen_bits2f((uint)extraout_var_00 << 0x10);
          if (!(fVar15 <= (float10)fVar19) != (GEN_ISNAN((float10)fVar19) || GEN_ISNAN(fVar15))) {
            (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(fVar19)));
            fVar15 = (float10)fVar19;
            *(undefined4 *)((int)this + 0x60) = (*(undefined4 *)(gen_frame + 0xd8));
            *(float *)((int)this + 100) = (*(float *)(gen_frame + 0xdc));
            *(float *)((int)this + 0x68) = (*(float *)(gen_frame + 0xe0));
            *(undefined4 *)((int)this + 0x6c) = (*(undefined4 *)(gen_frame + 0xe4));
            fVar20 = (*(float *)(gen_frame + 0xdc));
          }
        }
        else {
          (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(fVar19)));
          fVar15 = (float10)fVar19;
          *(undefined4 *)((int)this + 0x60) = (*(undefined4 *)(gen_frame + 0xd8));
          *(float *)((int)this + 100) = (*(float *)(gen_frame + 0xdc));
          *(float *)((int)this + 0x68) = (*(float *)(gen_frame + 0xe0));
          *(undefined4 *)((int)this + 0x6c) = (*(undefined4 *)(gen_frame + 0xe4));
          fVar20 = (*(float *)(gen_frame + 0xe0));
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < 4);
    }
    pfVar1 = (*(float * PTR32 *)(gen_frame + 0x14));
    fVar16 = (float10)0;
    uVar4 = (ushort)((GEN_ISNAN(fVar16) || GEN_ISNAN(fVar15)) || fVar16 == fVar15);
    uVar14 = (ushort)!(fVar15 <= fVar16) << 8 | (ushort)(GEN_ISNAN(fVar16) || GEN_ISNAN(fVar15)) << 10 |
             uVar4 << 0xe;
    if (!(fVar15 <= fVar16) || uVar4 != 0) {
      iVar11 = *(int *)((int)this + 0x128);
      fVar16 = (float10)*(float *)(iVar11 + 100);
      bVar12 = (GEN_ISNAN(fVar16) || GEN_ISNAN(fVar15)) || fVar16 == fVar15;
      uVar14 = (ushort)!(fVar15 <= fVar16) << 8 | (ushort)(GEN_ISNAN(fVar16) || GEN_ISNAN(fVar15)) << 10 |
               (ushort)bVar12 << 0xe;
      if (!(fVar15 <= fVar16) == bVar12) {
        fVar16 = (float10)*(float *)(iVar11 + 0x60);
        if (!(fVar15 <= fVar16) || ((GEN_ISNAN(fVar16) || GEN_ISNAN(fVar15)) || fVar16 == fVar15)) {
          fVar19 = ((float)GEN_TOF((fVar15 - (float10)*(float *)(iVar11 + 0x60))));
          *(*(float * PTR32 *)(gen_frame + 0x14)) = fVar19;
          fVar19 = ((float)GEN_TOF(((float10)1 -
                          (float10)((float)GEN_TOF(((float10)fVar19 /
                                          ((float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 100))) -
                                          (float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x60))))))))))
          ;
          gen_piece_set(&(*(undefined4 *)(gen_frame + 0x137)), 1, 3, (unsigned long long)((undefined3)(uint)gen_fl2bits(fVar19)));
          (*(undefined1 *)(gen_frame + 0x13b)) = (undefined1)((uint)gen_fl2bits(fVar19) >> 0x18);
          *(*(float * PTR32 *)(gen_frame + 0x14)) = fVar19;
          *(*(float * PTR32 *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)fVar19 *
                              (float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x70))))));
          uVar5 = GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x137)), 1, 3);
        }
        else {
          fVar19 = ((float)GEN_TOF(((float10)1 -
                          (float10)((float)GEN_TOF((fVar15 / (float10)*(float *)(iVar11 + 0x60)))))));
          gen_piece_set(&(*(undefined4 *)(gen_frame + 0x137)), 1, 3, (unsigned long long)((undefined3)(uint)gen_fl2bits(fVar19)));
          (*(undefined1 *)(gen_frame + 0x13b)) = (undefined1)((uint)gen_fl2bits(fVar19) >> 0x18);
          *(*(float * PTR32 *)(gen_frame + 0x14)) = fVar19;
          *(*(float * PTR32 *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)fVar19 *
                               ((float10)1 - (float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x70)))
                               ) + (float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x70))))));
          uVar5 = GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x137)), 1, 3);
        }
        (*(undefined4 *)(gen_frame + 0x137)) = CONCAT31(uVar5,(undefined1)(*(undefined4 *)(gen_frame + 0x137)));
        *(undefined4 *)((int)this + 0x50) = *(undefined4 *)((int)this + 0x60);
        *(undefined4 *)((int)this + 0x54) = *(undefined4 *)((int)this + 100);
        *(undefined4 *)((int)this + 0x58) = *(undefined4 *)((int)this + 0x68);
        *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)((int)this + 0x6c);
        *(float *)((int)this + 0x80) = *(*(float * PTR32 *)(gen_frame + 0x14));
        if ((*((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 0x8d))) & 1) != 0) {
          uVar8 = CONCAT31((int3)((uint)((int)this + 0x60) >> 8),1);
          goto LAB_00d0f708;
        }
        cVar2 = *((char *)GEN_TOP((*(int *)((int)this + 0x128) + 0x8c)));
        if (cVar2 == '\0') {
          puVar10 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x10)) + 0x68))((*(int * PTR32 *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0xc0)),(int)this + 0x60)));
          (*(undefined4 *)(gen_frame + 0xd8)) = *puVar10;
          (*(float *)(gen_frame + 0xdc)) = gen_bits2f(puVar10[1]);
          (*(float *)(gen_frame + 0xe0)) = gen_bits2f(puVar10[2]);
          iVar11 = *(int *)((int)this + 0x128);
          (*(undefined4 *)(gen_frame + 0xe4)) = puVar10[3];
          F_00d24070(this,&(*(undefined4 *)(gen_frame + 0xd8)),pfVar1,(int)this + 0x8c,*(float *)(iVar11 + 100),
                       *(float *)(iVar11 + 0x60),*(float *)(iVar11 + 0x70),*(float *)(iVar11 + 0x84)
                      );
          if ((*((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 0xc))) & 0x20) != 0) {
            *(undefined4 *)((int)this + 0x60) = *(undefined4 *)((int)this + 300);
            *(undefined4 *)((int)this + 100) = *(undefined4 *)((int)this + 0x130);
            *(undefined4 *)((int)this + 0x68) = *(undefined4 *)((int)this + 0x134);
            *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)((int)this + 0x138);
          }
        }
        else if ((byte)(cVar2 - 1U) < 2) {
          F_00d21d00(this,(*(float * PTR32 *)(gen_frame + 0x14)),(int)this + 0x8c);
        }
        F_00d219d0(this,(uint)pfVar1,(int)this + 0x8c,param_2);
        pcVar3 = *(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x10)) + 100);
        *pfVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x74))) * (float10)*pfVar1
                         )));
        uVar8 = (*pcVar3)((*(int * PTR32 *)(gen_frame + 0x10)),((undefined1 *)(gen_frame + 0x20)));
        if ((char)uVar8 == '\x01') {
          puVar10 = (undefined4 *)F_00c34320(((undefined1 *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0xc0)),(int)this + 0x70);
          (*(undefined4 *)(gen_frame + 0xd8)) = *puVar10;
          (*(float *)(gen_frame + 0xdc)) = gen_bits2f(puVar10[1]);
          (*(float *)(gen_frame + 0xe0)) = gen_bits2f(puVar10[2]);
          (*(undefined4 *)(gen_frame + 0xe4)) = puVar10[3];
          puVar10 = &(*(undefined4 *)(gen_frame + 0xd8));
        }
        else {
          puVar10 = (undefined4 *)((int)this + 0x60);
        }
        fVar16 = F_00d21d90(this,(uint)puVar10,pfVar1,(int)this + 0x8c);
        *(float *)((int)this + 0x90) = (float)fVar16;
        *(float *)((int)this + 0x80) = *pfVar1;
        fVar15 = (float10)*pfVar1;
        fVar16 = (float10)0;
        bVar12 = GEN_ISNAN(fVar16) || GEN_ISNAN(fVar15);
        bVar13 = bVar12 || fVar16 == fVar15;
        uVar8 = CONCAT22(extraout_var_01,
                         (ushort)!(fVar15 <= fVar16) << 8 | (ushort)bVar12 << 10 |
                         (ushort)bVar13 << 0xe);
        if (bVar12 == bVar13) {
          uVar8 = CONCAT31((int3)(uVar8 >> 8),1);
          goto LAB_00d0f708;
        }
        goto LAB_00d0f4dc;
      }
    }
    uVar8 = CONCAT22((short)((uint)gen_fl2bits(fVar20) >> 0x10),uVar14);
  }
LAB_00d0f4dc: ;
  uVar8 = uVar8 & 0xffffff00;
LAB_00d0f708: ;
  F_00c47745((*(uint *)(gen_frame + 0x13c)) ^ (uint)(uint)(gen_frame + 0x140));
  return uVar8;
}

/* ref: FUN_00d0f720 */
uint F_00d0f720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd0f720u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  float fVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int * piVar8;
  float * pfVar9;
  undefined4 * puVar10;
  bool bVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float in_XMM1_Da = 0;
  float in_XMM2_Da = 0;
  float in_XMM3_Da = 0;
  float in_XMM7_Da = 0;
  
  uVar7 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  (*(uint *)(gen_frame + 0x88)) = uVar7;
  fVar12 = (float10)0;
  (*(float *)(gen_frame + 0x44)) = (float)fVar12;
  *param_3 = (float)fVar12;
  param_3[1] = (float)fVar12;
  param_3[3] = 0.0;
  param_3[2] = (float)fVar12;
  *param_1 = (float)fVar12;
  iVar3 = *(int *)((int)this + 0x128);
  (*(float * PTR32 *)(gen_frame + 0x2c)) = param_1;
  cVar2 = *(char *)(iVar3 + 0x8c);
  if (cVar2 == '\0') {
    uVar7 = 0;
    if ((*(byte *)((int)this + 0xb0) & 8) != 0) {
LAB_00d0f91a: ;
      *(byte *)(param_3 + 3) = *(byte *)(param_3 + 3) | 2;
      *(float *)((int)this + 0x80) = (float)(float10)1;
      F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
      return uVar7;
    }
    if ((*(byte *)(iVar3 + 4) & 0x80) == 0) {
      param_3[2] = *(float *)((int)this + 0x98);
      (*(float *)(gen_frame + 0x40)) = *(float *)((int)this + 0x60);
      (*(float *)(gen_frame + 0x44)) = *(float *)((int)this + 0x68);
      fVar13 = (float10)*(float *)((int)this + 0x60);
      bVar11 = GEN_ISNAN(fVar12) || GEN_ISNAN(fVar13);
      fVar14 = (float10)*(float *)((int)this + 0x68);
      if ((bVar11 == (bVar11 || fVar12 == fVar13)) ||
         ((GEN_ISNAN(fVar14) || GEN_ISNAN(fVar12)) == ((GEN_ISNAN(fVar14) || GEN_ISNAN(fVar12)) || fVar14 == fVar12))) {
        fVar12 = F_00c4d1fa(GEN_TOD(-fVar14));
        fVar1 = (float)fVar12;
        (*(float *)(gen_frame + 0x40)) = fVar1;
        (*(float *)(gen_frame + 0x44)) = fVar1;
        *(float *)((int)this + 0xa4) = fVar1;
      }
      else {
        (*(float *)(gen_frame + 0x44)) = *(float *)((int)this + 0xa4);
      }
      fVar12 = (float10)*(float *)((int)this + 0x94);
LAB_00d0f9c3: ;
      *param_3 = (float)fVar12;
    }
    else {
      *(float *)((int)this + 0x94) = (float)fVar12;
      if ((*(byte *)(iVar3 + 0xc) & 2) == 0) {
        (*(float *)(gen_frame + 0x44)) = *(float *)(iVar3 + 0x88);
      }
      else {
LAB_00d0f870: ;
        fVar12 = F_00d234c0(this,*(float *)((int)this + 0xa0));
        (*(float *)(gen_frame + 0x44)) = (float)fVar12;
      }
    }
  }
  else {
    if (cVar2 == '\x01') {
      *(float *)((int)this + 0x60) = (float)fVar12;
      *(float *)((int)this + 100) = (float)fVar12;
      *(float *)((int)this + 0x68) = (float)fVar12;
      *(float *)((int)this + 0x6c) = (float)(float10)1;
      F_00c47745(uVar7 ^ (uint)(uint)(gen_frame + 0x8c));
      return 0;
    }
    if (cVar2 == '\x02') {
      piVar8 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
      piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x98))(piVar8)));
      fVar12 = F_00c4ca20(in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,
                            (float10)*(float *)((int)this + 0xa0));
      (*(float *)(gen_frame + 0x44)) = (float)fVar12;
      (*(float *)(gen_frame + 0x1c)) = (float)((float10)(float)fVar12 * (float10)*(double *)&REFG(undefined, 0x1088120));
      (*(float *)(gen_frame + 0x20)) = (float)(float10)0;
      fVar12 = F_00c4cde0(in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,
                            (float10)*(float *)((int)this + 0xa0));
      (*(float *)(gen_frame + 0x44)) = (float)fVar12;
      (*(float *)(gen_frame + 0x24)) = (float)((float10)(float)fVar12 * (float10)*(double *)&REFG(undefined, 0x1088120));
      (*(float *)(gen_frame + 0x28)) = (float)(float10)1;
      pfVar9 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x5c))(piVar8,((undefined1 *)(gen_frame + 0x48)))));
      if ((char)pfVar9 == '\0') goto LAB_00d0f9d5;
      fVar12 = (float10)0;
      (*(float *)(gen_frame + 0x30)) = (float)fVar12;
      (*(float *)(gen_frame + 0x34)) = (float)fVar12;
      (*(float *)(gen_frame + 0x38)) = (float)fVar12;
      fVar1 = (float)(float10)1;
      (*(float *)(gen_frame + 0x3c)) = fVar1;
      (*(float *)(gen_frame + 0x7c)) = (float)fVar12;
      (*(float *)(gen_frame + 0x80)) = (float)fVar12;
      fVar1 = (float)(float10)1;
      (*(float *)(gen_frame + 0x3c)) = fVar1;
      (*(float *)(gen_frame + 0x78)) = (float)fVar12;
      (*(float *)(gen_frame + 0x84)) = fVar1;
      puVar10 = (undefined4 *)F_00c34320(((undefined1 *)(gen_frame + 0x48)),((undefined1 *)(gen_frame + 0xc)),&(*(float *)(gen_frame + 0x1c)));
      fVar12 = (float10)0;
      uVar4 = *puVar10;
      uVar5 = puVar10[1];
      uVar6 = puVar10[2];
      uVar7 = puVar10[3];
      *(undefined4 *)((int)this + 0x50) = uVar4;
      *(undefined4 *)((int)this + 0x54) = uVar5;
      *(undefined4 *)((int)this + 0x58) = uVar6;
      *(uint *)((int)this + 0x5c) = uVar7;
      *(undefined4 *)((int)this + 0x60) = uVar4;
      *(undefined4 *)((int)this + 100) = uVar5;
      *(undefined4 *)((int)this + 0x68) = uVar6;
      *(uint *)((int)this + 0x6c) = uVar7;
      *(float *)((int)this + 0x94) = (float)fVar12;
      if ((*(byte *)((int)this + 0xb0) & 8) != 0) goto LAB_00d0f91a;
      iVar3 = *(int *)((int)this + 0x128);
      if ((*(byte *)(iVar3 + 4) & 0x80) == 0) {
        (*(float *)(gen_frame + 0x44)) = *(float *)((int)this + 0x60);
        (*(float *)(gen_frame + 0x40)) = *(float *)((int)this + 0x68);
        fVar13 = (float10)*(float *)((int)this + 0x60);
        bVar11 = GEN_ISNAN(fVar12) || GEN_ISNAN(fVar13);
        fVar14 = (float10)*(float *)((int)this + 0x68);
        if ((bVar11 == (bVar11 || fVar12 == fVar13)) ||
           ((GEN_ISNAN(fVar12) || GEN_ISNAN(fVar14)) == ((GEN_ISNAN(fVar12) || GEN_ISNAN(fVar14)) || fVar12 == fVar14))) {
          fVar12 = F_00c4d1fa(GEN_TOD(-fVar14));
          (*(float *)(gen_frame + 0x40)) = (float)fVar12;
          (*(float *)(gen_frame + 0x44)) = (float)fVar12;
          fVar12 = (float10)0;
        }
        else {
          (*(float *)(gen_frame + 0x44)) = *(float *)((int)this + 0xa4);
        }
        goto LAB_00d0f9c3;
      }
      *(float *)((int)this + 0x94) = (float)fVar12;
      if ((*(byte *)(iVar3 + 0xc) & 2) != 0) goto LAB_00d0f870;
      (*(float *)(gen_frame + 0x44)) = *(float *)(iVar3 + 0x88);
    }
  }
  *(*(float * PTR32 *)(gen_frame + 0x2c)) = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x44)) + (float10)(*(float *)(gen_frame + 0x44))) / (float10)*(double *)&REFG(undefined, 0x1080228))));
  pfVar9 = (*(float * PTR32 *)(gen_frame + 0x2c));
LAB_00d0f9d5: ;
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return (uint)pfVar9;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SurfaceSound::vf26 */
uint F_00d0f9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd0f9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = (undefined4 *)F_00d22da0(this,param_1,0xa0);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0xf4))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))));
  if (uVar2 != 0) {
    puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
    puVar5 = puVar1;
    for (iVar3 = 0x28; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    return (uint)(puVar1 + 0x28);
  }
  F_00d105f0(*(undefined4 *)(this + 0x128),(uint)puVar1);
  return (uint)(puVar1 + 0x28);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SurfaceSound::vf28 */
uint F_00d0fa50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd0fa50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  uint uVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  uVar1 = *(uint *)(this + 0x1c);
  if (*((int *)GEN_TOP((*(int *)(uVar1 + 0xc) + 0x2f8))) != 0) {
    F_00d22b20(this,&(*(undefined2 *)(gen_frame + 0x8)));
    (*(undefined2 *)(gen_frame + 0x8)) = (undefined2)param_1;
    (*(undefined2 *)(gen_frame + 0xa)) = 0x70;
    uVar2 = F_00427d90();
    (*(ulonglong *)(gen_frame + 0x10)) = uVar2;
    (*(undefined4 *)(gen_frame + 0x74)) = *((undefined4 *)GEN_TOP((*(int *)(this + 0x128) + 100)));
    (*(undefined4 *)(gen_frame + 0x70)) = *((undefined4 *)GEN_TOP((*(int *)(this + 0x128) + 0x60)));
    (*(undefined4 *)(gen_frame + 0x40)) = *(undefined4 *)(this + 300);
    (*(undefined4 *)(gen_frame + 0x44)) = *(undefined4 *)(this + 0x130);
    (*(undefined4 *)(gen_frame + 0x48)) = *(undefined4 *)(this + 0x134);
    (*(undefined4 *)(gen_frame + 0x4c)) = *(undefined4 *)(this + 0x13c);
    (*(undefined4 *)(gen_frame + 0x50)) = *(undefined4 *)(this + 0x140);
    (*(undefined4 *)(gen_frame + 0x54)) = *(undefined4 *)(this + 0x144);
    (*(undefined4 *)(gen_frame + 0x58)) = *(undefined4 *)(this + 0x14c);
    (*(undefined4 *)(gen_frame + 0x5c)) = *(undefined4 *)(this + 0x150);
    (*(undefined4 *)(gen_frame + 0x60)) = *(undefined4 *)(this + 0x154);
    (*(undefined4 *)(gen_frame + 0x64)) = *(undefined4 *)(this + 0x15c);
    (*(undefined4 *)(gen_frame + 0x68)) = *(undefined4 *)(this + 0x160);
    (*(undefined4 *)(gen_frame + 0x6c)) = *(undefined4 *)(this + 0x164);
    F_00d10450(&(*(undefined2 *)(gen_frame + 0x8)),&(*(undefined2 *)(gen_frame + 0x8)));
    uVar1 = F_00d00b10(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))),&(*(undefined2 *)(gen_frame + 0x8)),0x70);
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar1;
}

/* ref: FUN_00d0fb50 */
uint F_00d0fb50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd0fb50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  byte * pbVar1;
  int * this_00;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  (*(uint *)(gen_frame + 0xbc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc0);
  F_00d22580(this,param_1,param_2,param_3);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x113282c));
  *(uint *)((int)this + 0xb0) =
       *(uint *)((int)this + 0xb0) ^ ((param_4 & 0xff) << 4 ^ *(uint *)((int)this + 0xb0)) & 0x10;
  if ((char)param_4 == '\0') {
    *(undefined4 * PTR32 *)((int)this + 0x128) = param_1;
  }
  else {
    *(undefined4 * PTR32 *)((int)this + 0x128) = (undefined4 *)((int)this + 0x170);
    puVar4 = param_1;
    puVar5 = (undefined4 *)((int)this + 0x170);
    for (iVar3 = 0x28; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    if (*((char *)GEN_TOP((*(int *)((int)this + 0x128) + 3))) == '\0') {
      *((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x90))) = (float)(float10)0;
    }
  }
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x128);
  if ((*((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 0x8d))) & 1) == 0) {
    F_00d228c0(this);
  }
  *((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x84))) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x84))) *
              (float10)*(double *)&REFG(undefined, 0x109cac8))));
  pbVar1 = ((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 0xc)));
  *pbVar1 = *pbVar1 | 0x80;
  *(undefined4 *)((int)this + 0xa0) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x128) + 0x88)));
  F_00d20fe0(this,(uint)(~(*((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 4))) >> 5) & 1));
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  uVar2 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar2 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0xb0);
  }
  F_00d0fa50(this,0x401);
  F_00c47745((*(uint *)(gen_frame + 0xbc)) ^ (uint)(uint)(gen_frame + 0xc0));
  return (uint)this;
}

/* ref: FUN_00d0fcb0 */
uint F_00d0fcb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd0fcb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  byte * pbVar1;
  int iVar2;
  int * this_00;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0xbc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc0);
  F_00d22720(this,param_1,param_2);
  *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) | 0x10;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x113282c));
  *(undefined * PTR32 *)((int)this + 0x128) = (undefined *)((int)this + 0x170);
  F_00d10510((undefined *)((int)this + 0x170));
  iVar2 = *(int *)((int)this + 0x128);
  *(int *)((int)this + 0x18) = iVar2;
  *(float *)(iVar2 + 0x84) =
       ((float)GEN_TOF(((float10)*(float *)(iVar2 + 0x84) * (float10)*(double *)&REFG(undefined, 0x109cac8))));
  pbVar1 = ((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 0xc)));
  *pbVar1 = *pbVar1 | 0x80;
  *(undefined4 *)((int)this + 0xa0) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x128) + 0x88)));
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar3 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0xb0);
  }
  F_00d0fa50(this,0x401);
  F_00c47745((*(uint *)(gen_frame + 0xbc)) ^ (uint)(uint)(gen_frame + 0xc0));
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SurfaceSound::vf14 */
byte F_00d0fda0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd0fda0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  int * this;
  int iVar2;
  float10 fVar3;
  byte bVar4;
  uint uVar5;
  bool bVar6;
  float10 fVar7;
  float10 fVar8;
  float fVar9;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_1;
  ((code *)*(gen_code32 *)(*(int *)param_1 + 0x70))(0x406);
  if (((byte)param_1[0xb0] & 4) != 0) {
    return 0;
  }
  bVar4 = F_00d217a0(param_1,param_2);
  if (bVar4 != 0) {
    if (((*((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 4))) & 0x80) == 0) &&
       (uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc))) + 0x10))))
                          (*((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc)))), (char)uVar5 == '\0')) {
      fVar7 = (float10)*((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x90)));
      fVar3 = (float10)0;
      bVar6 = GEN_ISNAN(fVar3) || GEN_ISNAN(fVar7);
      if (bVar6 == (bVar6 || fVar3 == fVar7)) {
        fVar9 = ((float)GEN_TOF((((float10)(int)param_2 *
                        (float10)*((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x90)))) /
                        (float10)*(double *)&REFG(undefined, 0x10912a8) + (float10)*(float *)(param_1 + 0xa0))));
        fVar7 = (float10)fVar9;
        *(float *)(param_1 + 0xa0) = fVar9;
        fVar8 = (float10)REFG(double, 0x10920b8);
        if (!(fVar7 <= fVar8) == (GEN_ISNAN(fVar8) || GEN_ISNAN(fVar7))) {
          if (fVar7 <= fVar3) {
            *(float *)(param_1 + 0xa0) = (float)(fVar7 + fVar8);
          }
        }
        else {
          *(float *)(param_1 + 0xa0) = (float)(fVar7 - fVar8);
        }
      }
    }
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)(float10)0)));
    *(float *)(param_1 + 0x8c) = (float)(float10)1;
    F_00d21970(param_1);
    uVar5 = F_00d0f130(param_1,&(*(undefined * PTR32 *)(gen_frame + 0x8)),param_2);
    if ((char)uVar5 == '\0') {
      F_00d219b0(param_1);
      F_00d22c70(param_1,0);
      return 1;
    }
    if ((*((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x8d))) & 1) == 0) {
      this = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc)));
      iVar2 = *(int *)(param_1 + 0x128);
      uVar5 = ((code *)*(gen_code32 *)(*this + 0x18))(this);
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar2 + 0x10 + (uVar5 & 0xff) * 4))) *
                       (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8)))))))))));
      uVar1 = *(ushort *)(iVar2 + 0xe);
      if (uVar1 != 0) {
        fVar9 = F_00d005d0(this,(uint)uVar1);
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar9 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8)))))))));
      }
      iVar2 = *(int *)(param_1 + 0x128);
      *(undefined * PTR32 *)(param_1 + 0x80) = (*(undefined * PTR32 *)(gen_frame + 0x8));
      if ((*(byte *)(iVar2 + 0xc) & 8) != 0) {
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = *(undefined * PTR32 *)(iVar2 + 0x74);
        *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(iVar2 + 0x74);
      }
      *(undefined * PTR32 *)(param_1 + 0x80) = (*(undefined * PTR32 *)(gen_frame + 0x8));
      if ((((byte)param_1[0xb0] & 0x40) != 0) || (bVar4 = F_00d228c0(param_1), bVar4 != 0)) {
        bVar4 = F_00d00ed0(this,param_1,(uint)(byte)param_1[0x2d],*(undefined4 *)(param_1 + 0x30),
                             ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8))))));
        return bVar4;
      }
    }
    else {
      uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc))) + 0x98))))
                        (*((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc))));
      F_00d1b9f0(uVar5,GEN_TOF(*((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x74)))),((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8))))));
    }
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf1 */
unsigned int F_00d103b0(void)
{
  GEN_ENTER(0xd103b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf24 */
uint F_00d103c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd103c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *param_1 = (float)(float10)1;
  *param_2 = (float)(float10)1;
  return (uint)param_1;
}

/* ref: FUN_00d103e0 */
unsigned int F_00d103e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd103e0u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_3[1] * in_ecx[1];
  fVar2 = param_3[2] * in_ecx[2];
  fVar3 = param_3[3] * in_ecx[3];
  *param_2 = ((fVar1 + *param_3 * *in_ecx) + fVar2) + fVar3;
  param_2[1] = ((fVar1 + fVar1) + fVar2) + fVar3;
  param_2[2] = ((fVar1 + fVar2) + fVar2) + fVar3;
  param_2[3] = ((fVar1 + fVar3) + fVar2) + fVar3;
  return 0;
}

/* ref: FUN_00d10450 */
unsigned int F_00d10450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd10450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined2 *)this;
  param_1[1] = *(undefined2 *)((int)this + 2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((int)this + 0x18);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)((int)this + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((int)this + 0x20);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)((int)this + 0x2c);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((int)this + 0x28);
  param_1[0x18] = *(undefined2 *)((int)this + 0x30);
  param_1[0x19] = *(undefined2 *)((int)this + 0x32);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)((int)this + 0x34);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((int)this + 0x38);
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)((int)this + 0x3c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)((int)this + 0x40);
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)((int)this + 0x44);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((int)this + 0x48);
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)((int)this + 0x4c);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)((int)this + 0x50);
  *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)((int)this + 0x54);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)((int)this + 0x58);
  *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)((int)this + 0x5c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)((int)this + 0x60);
  *(undefined4 *)(param_1 + 0x32) = *(undefined4 *)((int)this + 100);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)((int)this + 0x68);
  *(undefined4 *)(param_1 + 0x36) = *(undefined4 *)((int)this + 0x6c);
  return 0;
}

/* ref: FUN_00d10510 */
unsigned int F_00d10510(unsigned int gen_a0)
{
  GEN_ENTER(0xd10510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  float10 fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  fVar1 = (float10)1;
  *(undefined4 *)((int)this + 4) = 4;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(float *)((int)this + 0x10) = (float)fVar1;
  *(float *)((int)this + 0x14) = (float)fVar1;
  *(float *)((int)this + 0x18) = (float)fVar1;
  *(float *)((int)this + 0x1c) = (float)fVar1;
  *(undefined1 *)((int)this + 0xd) = 0;
  fVar2 = (float10)0;
  *(undefined2 *)((int)this + 0xe) = 0;
  *(undefined1 * PTR32 *)this = REFP(0x010700a0);
  *(float *)((int)this + 0x20) = (float)fVar2;
  *(float *)((int)this + 0x24) = (float)fVar2;
  *(float *)((int)this + 0x28) = (float)fVar2;
  *(float *)((int)this + 0x2c) = (float)fVar2;
  *(float *)((int)this + 0x2c) = (float)fVar1;
  *(float *)((int)this + 0x30) = (float)fVar2;
  *(float *)((int)this + 0x34) = (float)fVar2;
  *(float *)((int)this + 0x38) = (float)fVar2;
  *(float *)((int)this + 0x3c) = (float)fVar2;
  *(float *)((int)this + 0x3c) = (float)fVar1;
  *(float *)((int)this + 0x40) = (float)fVar2;
  *(float *)((int)this + 0x44) = (float)fVar2;
  *(float *)((int)this + 0x48) = (float)fVar2;
  *(float *)((int)this + 0x4c) = (float)fVar2;
  *(float *)((int)this + 0x4c) = (float)fVar1;
  *(float *)((int)this + 0x50) = (float)fVar2;
  *(float *)((int)this + 0x54) = (float)fVar2;
  *(float *)((int)this + 0x58) = (float)fVar2;
  *(float *)((int)this + 0x5c) = (float)fVar2;
  *(float *)((int)this + 0x5c) = (float)fVar1;
  uVar3 = REFG(float, 0x1094880);
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x60) = uVar3;
  *(undefined4 *)((int)this + 0x94) = 0;
  uVar4 = REFG(float, 0x10a0d00);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 100) = uVar4;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0x68) = uVar3;
  *(float *)((int)this + 0x6c) = (float)fVar2;
  *(float *)((int)this + 0x80) = (float)fVar2;
  *(float *)((int)this + 0x88) = (float)fVar2;
  *(float *)((int)this + 0x70) = (float)fVar1;
  *(float *)((int)this + 0x74) = (float)fVar1;
  *(float *)((int)this + 0x78) = (float)fVar1;
  *(float *)((int)this + 0x7c) = (float)fVar1;
  *(float *)((int)this + 0x84) = (float)fVar1;
  *(float *)((int)this + 0x90) = (float)fVar2;
  return 0;
}

/* ref: FUN_00d105f0 */
unsigned int F_00d105f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd105f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint * puVar2;
  uint * puVar3;
  int local_8;
  
  F_00d0c080(param_1,param_2);
  puVar3 = (uint *)(param_1 + 0x28);
  local_8 = 4;
  puVar2 = (uint *)(param_2 + 0x20);
  do {
    uVar1 = *((uint *)GEN_TOP(((param_1 - param_2) + (int)puVar2)));
    *puVar2 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = puVar3[-1];
    puVar2[1] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = *puVar3;
    puVar2[2] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = puVar3[1];
    puVar2[3] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    puVar3 = puVar3 + 4;
    local_8 = local_8 + -1;
    puVar2 = puVar2 + 4;
  } while (local_8 != 0);
  uVar1 = *(uint *)(param_1 + 0x60);
  *(uint *)(param_2 + 0x60) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 100);
  *(uint *)(param_2 + 100) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x68);
  *(uint *)(param_2 + 0x68) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x6c);
  *(uint *)(param_2 + 0x6c) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x70);
  *(uint *)(param_2 + 0x70) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x74);
  *(uint *)(param_2 + 0x74) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x78);
  *(uint *)(param_2 + 0x78) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x7c);
  *(uint *)(param_2 + 0x7c) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x80);
  *(uint *)(param_2 + 0x80) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x84);
  *(uint *)(param_2 + 0x84) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x88);
  *(uint *)(param_2 + 0x88) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *(undefined1 *)(param_2 + 0x8c) = *(undefined1 *)(param_1 + 0x8c);
  *(byte *)(param_2 + 0x8d) = *(byte *)(param_1 + 0x8d) & 1;
  *(undefined2 *)(param_2 + 0x8e) = 0;
  uVar1 = *(uint *)(param_1 + 0x90);
  *(uint *)(param_2 + 0x90) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *(undefined4 *)(param_2 + 0x94) = 0;
  *(undefined4 *)(param_2 + 0x98) = 0;
  *(undefined4 *)(param_2 + 0x9c) = 0;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SurfaceSound::vf0 */
uint F_00d107c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd107c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x113282c));
  F_00d23680(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00d107f0 */
uint F_00d107f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd107f0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  if (!((float10)*in_ecx <= (float10)*param_2) != (GEN_ISNAN((float10)*param_2) || GEN_ISNAN((float10)*in_ecx)))
  {
    return 1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineSound::vf9 */
unsigned int F_00d10830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd10830u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int local_14;
  
  F_00d213b0(this,param_1,param_2);
  iVar4 = *(int *)(this + 0x128);
  local_14 = 0;
  if (*(char *)(iVar4 + 0x144) != '\0') {
    iVar5 = 0;
    do {
      fVar1 = param_1[3];
      local_14 = local_14 + 1;
      fVar2 = param_1[1];
      fVar3 = param_1[2];
      *(float *)(iVar5 + 0x20 + iVar4) = *(float *)(iVar5 + 0x20 + iVar4) + *param_1;
      *(float *)(iVar5 + 0x24 + iVar4) = *(float *)(iVar5 + 0x24 + iVar4) + fVar2;
      *(float *)(iVar5 + 0x28 + iVar4) = *(float *)(iVar5 + 0x28 + iVar4) + fVar3;
      *(float *)(iVar5 + 0x2c + iVar4) = *(float *)(iVar5 + 0x2c + iVar4) + fVar1;
      *((float *)GEN_TOP((iVar5 + 0x2c + *(int *)(this + 0x128)))) = (float)(float10)1;
      iVar4 = *(int *)(this + 0x128);
      iVar5 = iVar5 + 0x10;
    } while (local_14 < (int)(uint)*(byte *)(iVar4 + 0x144));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineSound::vf12 */
uint F_00d10920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd10920u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x80);
  return (uint)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineSound::vf13 */
uint F_00d10940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd10940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float10 fVar1;
  
  fVar1 = F_00d22f40(this,GEN_TOF(*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x140)))),
                       *((byte *)GEN_TOP((*(int *)(this + 0x128) + 4))) >> 2 & 1);
  *param_1 = ((float)GEN_TOF((fVar1 * (float10)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x138))))));
  return (uint)param_1;
}

/* ref: FUN_00d10980 */
float F_00d10980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd10980u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x160];
  float fVar1;
  float fVar2;
  float fVar3;
  float * pfVar4;
  float * pfVar5;
  uint uVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  (*(uint *)(gen_frame + 0x14c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x150);
  (*(undefined4 *)(gen_frame + 0x28)) = param_2;
  (*(int *)(gen_frame + 0x2c)) = param_1;
  (*(float * PTR32 *)(gen_frame + 0x30)) = param_3;
  if (gen_bits2f((uint)*(byte *)(param_1 + 0x144)) != 0.0) {
    pfVar5 = ((float *)(gen_frame + 0x48));
    iVar7 = param_1 + 0x20;
    (*(float *)(gen_frame + 0x34)) = gen_bits2f((uint)*(byte *)(param_1 + 0x144));
    do {
      pfVar4 = (float *)F_00c34320((*(undefined4 *)(gen_frame + 0x28)),&(*(float *)(gen_frame + 0x0)),iVar7);
      *pfVar5 = *pfVar4;
      pfVar5[1] = pfVar4[1];
      pfVar5[2] = pfVar4[2];
      pfVar5[3] = pfVar4[3];
      iVar7 = iVar7 + 0x10;
      pfVar5 = pfVar5 + 4;
      fVar14 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x34))) + -1);
      (*(float *)(gen_frame + 0x34)) = fVar14;
    } while (fVar14 != 0.0);
  }
  pfVar5 = (*(float * PTR32 *)(gen_frame + 0x30));
  if ((*(byte *)((*(int *)(gen_frame + 0x2c)) + 4) & 4) == 0) {
    (*(float *)(gen_frame + 0x34)) = ((float *)(gen_frame + 0x48))[1];
    F_00d218f0((*(float * PTR32 *)(gen_frame + 0x30))[1],&(*(float *)(gen_frame + 0x34)),(*(int *)(gen_frame + 0x2c)),(*(int *)(gen_frame + 0x2c)) + 0x128);
    pfVar5 = (*(float * PTR32 *)(gen_frame + 0x30));
    if (*(char *)((*(int *)(gen_frame + 0x2c)) + 0x144) != '\0') {
      uVar6 = (uint)*(byte *)((*(int *)(gen_frame + 0x2c)) + 0x144);
      pfVar4 = ((float *)(gen_frame + 0x48)) + 1;
      do {
        *pfVar4 = (*(float *)(gen_frame + 0x34));
        pfVar4 = pfVar4 + 4;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  uVar6 = (uint)*(byte *)((*(int *)(gen_frame + 0x2c)) + 0x144);
  if (uVar6 != 0) {
    fVar14 = *pfVar5;
    fVar1 = pfVar5[1];
    fVar2 = pfVar5[2];
    fVar3 = pfVar5[3];
    pfVar5 = ((float *)(gen_frame + 0x48)) + 2;
    do {
      uVar6 = uVar6 - 1;
      fVar10 = pfVar5[-2] - fVar14;
      fVar11 = pfVar5[-1] - fVar1;
      fVar12 = *pfVar5 - fVar2;
      fVar13 = pfVar5[1] - fVar3;
      (*(float *)(gen_frame + 0x0)) = fVar10;
      (*(float *)(gen_frame + 0x4)) = fVar11;
      (*(float *)(gen_frame + 0x8)) = fVar12;
      (*(float *)(gen_frame + 0xc)) = fVar13;
      (*(float *)(gen_frame + 0x18)) = fVar10;
      pfVar5[-2] = fVar10;
      (*(float *)(gen_frame + 0x1c)) = fVar11;
      pfVar5[-1] = fVar11;
      (*(float *)(gen_frame + 0x20)) = fVar12;
      *pfVar5 = fVar12;
      (*(float *)(gen_frame + 0x24)) = fVar13;
      pfVar5[1] = fVar13;
      pfVar5 = pfVar5 + 4;
    } while (uVar6 != 0);
  }
  (*(float * PTR32 *)(gen_frame + 0x30)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)(float10)0)));
  iVar7 = 0;
  if (*(byte *)((*(int *)(gen_frame + 0x2c)) + 0x144) != 1 && -1 < (int)(*(byte *)((*(int *)(gen_frame + 0x2c)) + 0x144) - 1)) {
    do {
      fVar14 = F_010536a0(((float *)(gen_frame + 0x48)) + iVar7 * 4,((undefined1 *)(gen_frame + 0x58)) + iVar7 * 0x10,((undefined1 *)(gen_frame + 0x38)));
      (*(float *)(gen_frame + 0x34)) = fVar14;
      fVar8 = (float10)fVar14;
      fVar9 = (float10)*(float *)((*(int *)(gen_frame + 0x2c)) + 0x124);
      if (!(fVar8 <= fVar9) == ((GEN_ISNAN(fVar9) || GEN_ISNAN(fVar8)) || fVar9 == fVar8)) {
        F_00c47745((*(uint *)(gen_frame + 0x14c)) ^ (uint)(uint)(gen_frame + 0x150));
        return (float)(float10)0;
      }
      fVar14 = ((float)GEN_TOF((fVar8 - (float10)*(float *)((*(int *)(gen_frame + 0x2c)) + 0x124))));
      (*(float *)(gen_frame + 0x34)) = fVar14;
      fVar8 = (float10)fVar14;
      if (iVar7 == 0) {
        (*(float * PTR32 *)(gen_frame + 0x30)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar14)));
      }
      else {
        fVar9 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x30)))));
        if (fVar8 <= fVar9 && ((!GEN_ISNAN(fVar9) && !GEN_ISNAN(fVar8)) && fVar9 != fVar8)) {
          (*(float * PTR32 *)(gen_frame + 0x30)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar14)));
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)(*(byte *)((*(int *)(gen_frame + 0x2c)) + 0x144) - 1));
  }
  pfVar5 = (*(float * PTR32 *)(gen_frame + 0x30));
  F_00c47745((*(uint *)(gen_frame + 0x14c)) ^ (uint)(uint)(gen_frame + 0x150));
  return ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar5)));
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineSound::vf18 */
uint F_00d10c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd10c20u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_3 < 0x150) {
    return 0;
  }
  puVar2 = *(undefined4 * PTR32 *)(in_ecx + 0x128);
  puVar3 = param_2;
  for (iVar1 = 0x54; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0x150;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineSound::vf19 */
byte F_00d10c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd10c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x128);
  *param_1 = *(undefined4 *)(iVar1 + 0x120);
  *param_2 = *(undefined4 *)(iVar1 + 0x124);
  *param_3 = *(undefined4 *)(iVar1 + 0x148);
  *param_4 = *(undefined4 *)(iVar1 + 0x140);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineSound::vf20 */
uint F_00d10ca0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xd10ca0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x128);
  *(float *)(uVar1 + 0x120) = param_2;
  *((float *)GEN_TOP((*(int *)(in_ecx + 0x128) + 0x124))) = param_3;
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineSound::vf25 */
uint F_00d10e70(unsigned int gen_a0)
{
  GEN_ENTER(0xd10e70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x180];
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x16c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x170);
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
  uVar1 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar1 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x160);
  }
  F_00c47745((*(uint *)(gen_frame + 0x16c)) ^ (uint)(uint)(gen_frame + 0x170));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineSound::vf27 */
byte F_00d10ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd10ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = param_1;
  puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
  for (iVar2 = 0x54; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  bVar1 = F_00d228c0(this);
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineSound::vf29 */
uint F_00d10f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd10f20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  HWND param_1 = (HWND)gen_a1;
  HDC param_2 = (HDC)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  char cVar1;
  undefined * pHVar2;
  HGDIOBJ pvVar3;
  undefined * pHVar4;
  undefined * pPVar5;
  char * pcVar6;
  int iVar7;
  uint uVar8;
  undefined * pPVar9;
  code * pcVar10;
  int iVar11;
  int iVar12;
  ulong color;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = this;
  F_00c48350(((undefined *)(gen_frame + 0x3c)),0,0x3c);
  F_00c49908(((CHAR *)(((char *)((undefined *)(gen_frame + 0x3c)) + 28))),0x20,&REFG(undefined, 0x11328c4));
  (*(LONG *)((char *)((undefined *)(gen_frame + 0x3c)))) = 0xd;
  (*(BYTE *)(((char *)((undefined *)(gen_frame + 0x3c)) + 23))) = 0x80;
  (*(BYTE *)(((char *)((undefined *)(gen_frame + 0x3c)) + 27))) = '\x01';
  pHVar2 = gen_imp_CreateFontIndirectA(((undefined *)(gen_frame + 0x3c)));
  pcVar10 = (((code *)GEN_TOP(gen_imp_SelectObject)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = pHVar2;
  pvVar3 = gen_imp_SelectObject(param_2,pHVar2);
  (*(HGDIOBJ *)(gen_frame + 0x8)) = pvVar3;
  pvVar3 = gen_imp_GetStockObject(5);
  (*(HGDIOBJ *)(gen_frame + 0xc)) = pvVar3;
  pvVar3 = gen_imp_SelectObject(param_2,pvVar3);
  (*(HGDIOBJ *)(gen_frame + 0x14)) = pvVar3;
  if (((byte)(*(undefined * PTR32 *)(gen_frame + 0x38))[0xb0] & 1) == 0) {
    iVar11 = 1;
    color = 0x900000;
  }
  else {
    color = 0x80;
    iVar11 = 2;
  }
  pHVar4 = gen_imp_CreatePen(0,iVar11,color);
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = pHVar4;
  pvVar3 = gen_imp_SelectObject(param_2,pHVar4);
  (*(HGDIOBJ *)(gen_frame + 0x20)) = pvVar3;
  gen_imp_GetClientRect(param_1,&(*(tagRECT *)(gen_frame + 0x78)));
  (*(int *)(gen_frame + 0x24)) = (*(tagRECT *)(gen_frame + 0x78)).bottom / 2;
  iVar11 = (*(tagRECT *)(gen_frame + 0x78)).right / 2;
  (*(int *)(gen_frame + 0x10)) = iVar11;
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = (undefined *)0x0;
  if (*((byte *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x128) + 0x144))) != 1 &&
      -1 < (int)(*((byte *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x128) + 0x144))) - 1)) {
    pPVar9 = (*(undefined * PTR32 *)(gen_frame + 0x38)) + 300;
    do {
      gen_imp_MoveToEx(param_2,iVar11 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)pPVar9),
               (*(int *)(gen_frame + 0x24)) - (int)((double)*(float *)(pPVar9 + 8) * *(double *)&REFG(double, 0x1132488)),
               (LPPOINT)0x0);
      gen_imp_LineTo(param_2,iVar11 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(pPVar9 + 0x10)),
             (*(int *)(gen_frame + 0x24)) - (int)((double)*(float *)(pPVar9 + 0x18) * *(double *)&REFG(double, 0x1132488)));
      pPVar5 = (*(undefined * PTR32 *)(gen_frame + 0x34)) + 1;
      pPVar9 = pPVar9 + 0x10;
      (*(undefined * PTR32 *)(gen_frame + 0x34)) = pPVar5;
      pcVar10 = (((code *)GEN_TOP(gen_imp_SelectObject)));
    } while ((int)pPVar5 < (int)(*((byte *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x128) + 0x144))) - 1));
  }
  (*(int *)(gen_frame + 0x2c)) = 0;
  if ((*(undefined * PTR32 *)(gen_frame + 0x38))[0x36c] != (undefined1)0x0) {
    (*(undefined * PTR32 *)(gen_frame + 0x34)) = (*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x32c;
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = (*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x234;
    do {
      iVar11 = iVar11 - (int)((double)*(float *)((*(undefined * PTR32 *)(gen_frame + 0x28)) + -8) * *(double *)&REFG(double, 0x1132488));
      iVar12 = (*(int *)(gen_frame + 0x24)) - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(*(undefined * PTR32 *)(gen_frame + 0x28)));
      iVar7 = (int)((double)*((float *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x128) + 0x124))) *
                   *(double *)&REFG(undefined, 0x10947f0));
      gen_imp_Ellipse(param_2,iVar11 - iVar7,iVar12 - iVar7,iVar7 + iVar11,iVar7 + iVar12);
      iVar7 = (int)((double)*((float *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x128) + 0x120))) *
                   *(double *)&REFG(undefined, 0x10947f0));
      gen_imp_Ellipse(param_2,iVar11 - iVar7,iVar12 - iVar7,iVar7 + iVar11,iVar7 + iVar12);
      F_00c472af(((char *)(gen_frame + 0x88)),0x20,&REFG(undefined, 0x11328d0),
                 (int)(ulonglong)gen_d2bits((double)*(float *)(*(undefined * PTR32 *)(gen_frame + 0x34)) * *(double *)&REFG(undefined, 0x1088118)),
                 (int)((ulonglong)gen_d2bits((double)*(float *)(*(undefined * PTR32 *)(gen_frame + 0x34)) * *(double *)&REFG(undefined, 0x1088118))
                      >> 0x20));
      pcVar6 = ((char *)(gen_frame + 0x88));
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      (*(int *)(gen_frame + 0x1c)) = (int)pcVar6 - (int)(((char *)(gen_frame + 0x88)) + 1);
      gen_imp_GetTextExtentPoint32A(param_2,((char *)(gen_frame + 0x88)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x88)) + 1),&(*(undefined8 *)(gen_frame + 0x0)));
      gen_imp_TextOutA(param_2,iVar11 - (*(LONG *)((char *)&((*(undefined8 *)(gen_frame + 0x0))))) / 2,iVar12 - (*(LONG *)(((char *)&((*(undefined8 *)(gen_frame + 0x0))) + 4))) / 2,((char *)(gen_frame + 0x88)),(*(int *)(gen_frame + 0x1c)));
      (*(undefined * PTR32 *)(gen_frame + 0x34)) = (*(undefined * PTR32 *)(gen_frame + 0x34)) + 4;
      (*(undefined * PTR32 *)(gen_frame + 0x28)) = (*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x10;
      iVar7 = (*(int *)(gen_frame + 0x2c)) + 1;
      (*(int *)(gen_frame + 0x2c)) = iVar7;
      pcVar10 = (((code *)GEN_TOP(gen_imp_SelectObject)));
      iVar11 = (*(int *)(gen_frame + 0x10));
    } while (iVar7 < (int)(uint)(byte)(*(undefined * PTR32 *)(gen_frame + 0x38))[0x36c]);
  }
  if (((byte)(*(undefined * PTR32 *)(gen_frame + 0x38))[0xb0] & 1) != 0) {
    (*(int *)(gen_frame + 0x2c)) = (*(tagRECT *)(gen_frame + 0x78)).bottom / 2;
    (*pcVar10)(param_2,(*(HGDIOBJ *)(gen_frame + 0x20)));
    gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x30)));
    pHVar4 = gen_imp_CreatePen(0,1,0x900000);
    (*(undefined * PTR32 *)(gen_frame + 0x30)) = pHVar4;
    pvVar3 = (*pcVar10)(param_2,pHVar4);
    (*(HGDIOBJ *)(gen_frame + 0x20)) = pvVar3;
    gen_imp_MoveToEx(param_2,(*(tagRECT *)(gen_frame + 0x78)).right / 2 -
                     (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)((*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x60)),
             (*(int *)(gen_frame + 0x2c)) - (int)((double)*(float *)((*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x68) * *(double *)&REFG(double, 0x1132488)),
             (LPPOINT)0x0);
    gen_imp_LineTo(param_2,(*(tagRECT *)(gen_frame + 0x78)).right / 2,(*(int *)(gen_frame + 0x2c)));
  }
  (*pcVar10)(param_2,(*(HGDIOBJ *)(gen_frame + 0x8)));
  (*pcVar10)(param_2,(*(HGDIOBJ *)(gen_frame + 0x20)));
  (*pcVar10)(param_2,(*(HGDIOBJ *)(gen_frame + 0x14)));
  gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x18)));
  gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x30)));
  uVar8 = gen_imp_DeleteObject((*(HGDIOBJ *)(gen_frame + 0xc)));
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return uVar8;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineSound::vf30 */
byte F_00d11310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd11310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined * _File;
  byte bVar5;
  int iVar6;
  
  _File = param_1;
  bVar5 = F_00d21f00((undefined *)this,param_1);
  if (bVar5 == 0) {
    return 0;
  }
  iVar6 = 0;
  param_1 = (undefined *)0x0;
  if (*((char *)GEN_TOP((*(int *)(this + 0x128) + 0x144))) != '\0') {
    do {
      iVar1 = *(int *)(this + 0x128);
      dVar2 = (double)*(float *)(iVar6 + 0x28 + iVar1);
      dVar3 = (double)*(float *)(iVar6 + 0x24 + iVar1);
      dVar4 = (double)*(float *)(iVar6 + 0x20 + iVar1);
      F_00c49386(_File,"Position[%d] = %f %f %f\n",param_1,(int)(ulonglong)gen_d2bits(dVar4),
               (int)((ulonglong)gen_d2bits(dVar4) >> 0x20),(int)(ulonglong)gen_d2bits(dVar3),
               (int)((ulonglong)gen_d2bits(dVar3) >> 0x20),(int)(ulonglong)gen_d2bits(dVar2),
               (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
      param_1 = (undefined *)((int)param_1 + (1) * 32);
      iVar6 = iVar6 + 0x10;
    } while ((int)param_1 < (int)(uint)*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x144))));
  }
  F_00c49386(_File,"MaxRange = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x120))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x120))))));
  F_00c49386(_File,"MinRange = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x124))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x124))))));
  param_1 = (undefined *)0x0;
  iVar6 = 0x128;
  do {
    F_00c49386(_File,"Height[%d] = %f\n",param_1,
             (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((iVar6 + *(int *)(this + 0x128))))),
             (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((iVar6 + *(int *)(this + 0x128))))) >> 0x20
                  ));
    param_1 = (undefined *)((int)param_1 + (1) * 32);
    iVar6 = iVar6 + 4;
  } while (iVar6 < 0x130);
  F_00c49386(_File,"RangeVolume = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x130))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x130))))));
  F_00c49386(_File,"Volume = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x134))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x134))))));
  F_00c49386(_File,"Pitch = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x138))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x138))))));
  F_00c49386(_File,"ReverbFac = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x13c))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x13c))))));
  F_00c49386(_File,"DopplerFac = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x140))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x140))))));
  F_00c49386(_File,"VertexCount = %d\n",(uint)*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x144))));
  F_00c49386(_File,"[EndOfSoundObject]\n\n");
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineSound::vf31 */
byte F_00d114d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd114d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  char * pcVar2;
  int iVar3;
  uint uVar4;
  byte * pbVar5;
  bool bVar6;
  double dVar7;
  
  pcVar2 = "Position";
  pbVar5 = (byte *)param_2;
  do {
    bVar1 = *pcVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00d11501: ;
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00d11506;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00d11501;
    pcVar2 = pcVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d11506: ;
  if (iVar3 == 0) {
    uVar4 = F_00d00d00(0,0);
    if (uVar4 != 0) {
      uVar4 = F_00c4c74c(uVar4);
      pcVar2 = (char *)F_00d00d00(0,0);
      if (pcVar2 != (char *)0x0) {
        dVar7 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + (uVar4 + 2) * 0x10))) = (float)dVar7;
        pcVar2 = (char *)F_00d00d00(0,0);
        if (pcVar2 != (char *)0x0) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x24 + uVar4 * 0x10))) = (float)dVar7;
          pcVar2 = (char *)F_00d00d00(0,0);
          if (pcVar2 != (char *)0x0) {
            dVar7 = F_00c4acaa(pcVar2);
            *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x28 + uVar4 * 0x10))) = (float)dVar7;
            return 1;
          }
        }
      }
    }
  }
  else {
    pcVar2 = "MaxRange";
    pbVar5 = (byte *)param_2;
    do {
      bVar1 = *pcVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00d115d6: ;
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00d115db;
      }
      if (bVar1 == 0) break;
      bVar1 = pcVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00d115d6;
      pcVar2 = pcVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00d115db: ;
    if (iVar3 == 0) {
      pcVar2 = (char *)F_00d00d00(0,0);
      if (pcVar2 != (char *)0x0) {
        dVar7 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x120))) = (float)dVar7;
        return 1;
      }
    }
    else {
      pcVar2 = "MinRange";
      pbVar5 = (byte *)param_2;
      do {
        bVar1 = *pcVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00d11640: ;
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00d11645;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00d11640;
        pcVar2 = pcVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00d11645: ;
      if (iVar3 == 0) {
        pcVar2 = (char *)F_00d00d00(0,0);
        if (pcVar2 != (char *)0x0) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x124))) = (float)dVar7;
          return 1;
        }
      }
      else {
        pcVar2 = "Height";
        pbVar5 = (byte *)param_2;
        do {
          bVar1 = *pcVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00d116a5: ;
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_00d116aa;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00d116a5;
          pcVar2 = pcVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00d116aa: ;
        if (iVar3 == 0) {
          uVar4 = F_00d00d00(0,0);
          if (uVar4 != 0) {
            uVar4 = F_00c4c74c(uVar4);
            pcVar2 = (char *)F_00d00d00(0,0);
            if (pcVar2 != (char *)0x0) {
              dVar7 = F_00c4acaa(pcVar2);
              *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x128 + uVar4 * 4))) = (float)dVar7;
              return 1;
            }
          }
        }
        else {
          pcVar2 = "RangeVolume";
          pbVar5 = (byte *)param_2;
          do {
            bVar1 = *pcVar2;
            bVar6 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_00d11727: ;
              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
              goto LAB_00d1172c;
            }
            if (bVar1 == 0) break;
            bVar1 = pcVar2[1];
            bVar6 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00d11727;
            pcVar2 = pcVar2 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_00d1172c: ;
          if (iVar3 == 0) {
            pcVar2 = (char *)F_00d00d00(0,0);
            if (pcVar2 != (char *)0x0) {
              dVar7 = F_00c4acaa(pcVar2);
              *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x130))) = (float)dVar7;
              return 1;
            }
          }
          else {
            pcVar2 = "Volume";
            pbVar5 = (byte *)param_2;
            do {
              bVar1 = *pcVar2;
              bVar6 = bVar1 < *pbVar5;
              if (bVar1 != *pbVar5) {
LAB_00d11790: ;
                iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                goto LAB_00d11795;
              }
              if (bVar1 == 0) break;
              bVar1 = pcVar2[1];
              bVar6 = bVar1 < pbVar5[1];
              if (bVar1 != pbVar5[1]) goto LAB_00d11790;
              pcVar2 = pcVar2 + 2;
              pbVar5 = pbVar5 + 2;
            } while (bVar1 != 0);
            iVar3 = 0;
LAB_00d11795: ;
            if (iVar3 == 0) {
              pcVar2 = (char *)F_00d00d00(0,0);
              if (pcVar2 != (char *)0x0) {
                dVar7 = F_00c4acaa(pcVar2);
                *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x134))) = (float)dVar7;
                return 1;
              }
            }
            else {
              pcVar2 = "Pitch";
              pbVar5 = (byte *)param_2;
              do {
                bVar1 = *pcVar2;
                bVar6 = bVar1 < *pbVar5;
                if (bVar1 != *pbVar5) {
LAB_00d117f5: ;
                  iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                  goto LAB_00d117fa;
                }
                if (bVar1 == 0) break;
                bVar1 = pcVar2[1];
                bVar6 = bVar1 < pbVar5[1];
                if (bVar1 != pbVar5[1]) goto LAB_00d117f5;
                pcVar2 = pcVar2 + 2;
                pbVar5 = pbVar5 + 2;
              } while (bVar1 != 0);
              iVar3 = 0;
LAB_00d117fa: ;
              if (iVar3 == 0) {
                pcVar2 = (char *)F_00d00d00(0,0);
                if (pcVar2 != (char *)0x0) {
                  dVar7 = F_00c4acaa(pcVar2);
                  *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x138))) = (float)dVar7;
                  return 1;
                }
              }
              else {
                pcVar2 = "ReverbFac";
                pbVar5 = (byte *)param_2;
                do {
                  bVar1 = *pcVar2;
                  bVar6 = bVar1 < *pbVar5;
                  if (bVar1 != *pbVar5) {
LAB_00d11860: ;
                    iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                    goto LAB_00d11865;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pcVar2[1];
                  bVar6 = bVar1 < pbVar5[1];
                  if (bVar1 != pbVar5[1]) goto LAB_00d11860;
                  pcVar2 = pcVar2 + 2;
                  pbVar5 = pbVar5 + 2;
                } while (bVar1 != 0);
                iVar3 = 0;
LAB_00d11865: ;
                if (iVar3 == 0) {
                  pcVar2 = (char *)F_00d00d00(0,0);
                  if (pcVar2 != (char *)0x0) {
                    dVar7 = F_00c4acaa(pcVar2);
                    *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x13c))) = (float)dVar7;
                    return 1;
                  }
                }
                else {
                  pcVar2 = "DopplerFac";
                  pbVar5 = (byte *)param_2;
                  do {
                    bVar1 = *pcVar2;
                    bVar6 = bVar1 < *pbVar5;
                    if (bVar1 != *pbVar5) {
LAB_00d118c5: ;
                      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                      goto LAB_00d118ca;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pcVar2[1];
                    bVar6 = bVar1 < pbVar5[1];
                    if (bVar1 != pbVar5[1]) goto LAB_00d118c5;
                    pcVar2 = pcVar2 + 2;
                    pbVar5 = pbVar5 + 2;
                  } while (bVar1 != 0);
                  iVar3 = 0;
LAB_00d118ca: ;
                  if (iVar3 == 0) {
                    pcVar2 = (char *)F_00d00d00(0,0);
                    if (pcVar2 != (char *)0x0) {
                      dVar7 = F_00c4acaa(pcVar2);
                      *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x140))) = (float)dVar7;
                      return 1;
                    }
                  }
                  else {
                    pcVar2 = "VertexCount";
                    pbVar5 = (byte *)param_2;
                    do {
                      bVar1 = *pcVar2;
                      bVar6 = bVar1 < *pbVar5;
                      if (bVar1 != *pbVar5) {
LAB_00d11930: ;
                        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                        goto LAB_00d11935;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pcVar2[1];
                      bVar6 = bVar1 < pbVar5[1];
                      if (bVar1 != pbVar5[1]) goto LAB_00d11930;
                      pcVar2 = pcVar2 + 2;
                      pbVar5 = pbVar5 + 2;
                    } while (bVar1 != 0);
                    iVar3 = 0;
LAB_00d11935: ;
                    if (iVar3 != 0) {
                      bVar1 = F_00d22040(param_1,param_2);
                      return bVar1;
                    }
                    uVar4 = F_00d00d00(0,0);
                    if (uVar4 != 0) {
                      uVar4 = F_00c4c74c(uVar4);
                      *((char *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x144))) = (char)uVar4;
                      return 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00d11db0 */
uint F_00d11db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd11db0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x1e0];
  char cVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  undefined * PTR32 * ppvVar5;
  float * pfVar6;
  undefined * pvVar7;
  int iVar8;
  float * pfVar9;
  undefined2 extraout_var_00 = 0;
  undefined2 extraout_var_01 = 0;
  undefined2 uVar10;
  int iVar11;
  char * pcVar12;
  undefined4 * puVar13;
  bool bVar14;
  bool bVar15;
  float10 fVar16;
  float10 fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  (*(uint *)(gen_frame + 0x1cc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1d0);
  piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x98))(piVar3)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,((undefined1 *)(gen_frame + 0x10)));
  if ((char)uVar4 != '\0') {
    iVar8 = *(int *)((int)this + 0x128);
    pcVar12 = (char *)(iVar8 + 0x144);
    if (*(char *)(iVar8 + 0x144) != '\0') {
      puVar13 = (undefined4 *)(iVar8 + 0x20);
      ppvVar5 = ((undefined * PTR32 *)(gen_frame + 0xc8));
      for (iVar11 = (uint)*(byte *)(iVar8 + 0x144) * 4; this = (*(undefined * PTR32 *)(gen_frame + 0xc)), iVar11 != 0;
          iVar11 = iVar11 + -1) {
        *ppvVar5 = (undefined *)*puVar13;
        puVar13 = puVar13 + 1;
        ppvVar5 = ppvVar5 + 1;
      }
    }
    if ((*(byte *)(iVar8 + 4) & 4) == 0) {
      (*(undefined * PTR32 *)(gen_frame + 0xc)) = ((undefined * PTR32 *)(gen_frame + 0xc8))[1];
      ((code *)*(gen_code32 *)(*piVar3 + 0x30))(piVar3,&(*(float *)(gen_frame + 0xa0)));
      bVar2 = F_00d218f0((*(float *)(gen_frame + 0xa4)),&(*(undefined * PTR32 *)(gen_frame + 0xc)),*(int *)((int)this + 0x128),
                           *(int *)((int)this + 0x128) + 0x128);
      uVar4 = CONCAT31(extraout_var,bVar2);
      if (bVar2 != 1) goto LAB_00d11e13;
      pcVar12 = ((char *)GEN_TOP((*(int *)((int)this + 0x128) + 0x144)));
      if (*pcVar12 != '\0') {
        uVar4 = (uint)*((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 0x144)));
        ppvVar5 = ((undefined * PTR32 *)(gen_frame + 0xc8)) + 1;
        do {
          *ppvVar5 = (*(undefined * PTR32 *)(gen_frame + 0xc));
          ppvVar5 = ppvVar5 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = (undefined *)0x0;
    if (*pcVar12 != '\0') {
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((undefined * PTR32 *)(gen_frame + 0xc8));
      pfVar9 = (float *)((int)this + 300);
      do {
        pfVar6 = (float *)F_00c34320(((undefined1 *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x50)),(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) + 4;
        (*(float *)(gen_frame + 0xb8)) = *pfVar6;
        fVar24 = pfVar6[1];
        (*(float *)(gen_frame + 0xbc)) = fVar24;
        fVar18 = pfVar6[2];
        (*(float *)(gen_frame + 0xc0)) = fVar18;
        fVar19 = pfVar6[3];
        *pfVar9 = *pfVar6;
        pfVar9[1] = fVar24;
        pfVar9[2] = fVar18;
        pfVar9[3] = fVar19;
        (*(float *)(gen_frame + 0xc4)) = fVar19;
        pvVar7 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 1);
        pfVar9 = pfVar9 + 4;
        (*(undefined * PTR32 *)(gen_frame + 0xc)) = pvVar7;
      } while ((int)pvVar7 < (int)(uint)*((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 0x144))));
    }
    *(undefined1 *)((int)this + 0x36c) = 0;
    iVar8 = *((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 0x144))) - 1;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (undefined * PTR32 *)0x0;
    if (0 < iVar8) {
      (*(undefined * PTR32 *)(gen_frame + 0xc)) = (undefined *)((int)this + 300);
      do {
        fVar24 = F_010536a0((*(undefined * PTR32 *)(gen_frame + 0xc)),(int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x10,&(*(float *)(gen_frame + 0xb8)));
        bVar2 = *(byte *)((int)this + 0x36c);
        fVar16 = (float10)fVar24;
        *(float *)((int)this + (uint)bVar2 * 0x10 + 0x22c) = (*(float *)(gen_frame + 0xb8));
        iVar8 = (uint)bVar2 * 0x10;
        *(float *)((int)this + iVar8 + 0x230) = (*(float *)(gen_frame + 0xbc));
        *(float *)((int)this + iVar8 + 0x234) = (*(float *)(gen_frame + 0xc0));
        *(float *)((int)this + iVar8 + 0x238) = (*(float *)(gen_frame + 0xc4));
        iVar8 = *(int *)((int)this + 0x128);
        fVar17 = (float10)*(float *)(iVar8 + 0x124);
        if (!(fVar16 <= fVar17) == ((GEN_ISNAN(fVar17) || GEN_ISNAN(fVar16)) || fVar17 == fVar16)) {
          fVar17 = (float10)*(float *)(iVar8 + 0x120);
          if (!(fVar16 <= fVar17) || ((GEN_ISNAN(fVar17) || GEN_ISNAN(fVar16)) || fVar17 == fVar16)) {
            fVar24 = ((float)GEN_TOF((fVar16 - (float10)*(float *)(iVar8 + 0x120))));
            *param_1 = fVar24;
            fVar24 = ((float)GEN_TOF(((float10)1 -
                            (float10)((float)GEN_TOF(((float10)fVar24 /
                                            ((float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x124
                                                                ))) -
                                            (float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x120)))
                                            )))))));
            *param_1 = fVar24;
            fVar16 = (float10)fVar24 * (float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x130)));
          }
          else {
            fVar24 = ((float)GEN_TOF(((float10)1 -
                            (float10)((float)GEN_TOF((fVar16 / (float10)*(float *)(iVar8 + 0x120)))))));
            *param_1 = fVar24;
            fVar16 = (float10)fVar24 *
                     ((float10)1 - (float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x130)))) +
                     (float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x130)));
          }
          *param_1 = (float)fVar16;
          *((float *)GEN_TOP(((int)this + (uint)*(byte *)((int)this + 0x36c) * 4 + 0x32c))) = *param_1;
          bVar2 = *(byte *)((int)this + 0x36c);
          *(undefined1 *)((int)&(*(float *)(gen_frame + 0xa0)) + (uint)bVar2) = (*(undefined1 *)((char *)&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) + 0));
          *(byte *)((int)this + 0x36c) = bVar2 + 1;
        }
        (*(undefined * PTR32 *)(gen_frame + 0xc)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x10);
        iVar8 = (int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) + 1;
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (undefined * PTR32 *)iVar8;
      } while (iVar8 < (int)(*((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 0x144))) - 1));
    }
    cVar1 = *(char *)((int)this + 0x36c);
    uVar4 = CONCAT31((int3)((uint)iVar8 >> 8),cVar1);
    *(float *)((int)this + 0x80) = (float)(float10)0;
    if (cVar1 != '\0') {
      iVar8 = 0;
      *(undefined1 *)((int)this + 0x36e) = *(undefined1 *)((int)this + 0x36d);
      if (cVar1 != '\0') {
        pfVar9 = (float *)((int)this + 0x32c);
        pfVar6 = (float *)((int)this + 0x234);
        do {
          fVar16 = (float10)*(float *)((int)this + 0x80);
          fVar17 = (float10)*pfVar9;
          if (fVar16 <= fVar17 && ((!GEN_ISNAN(fVar17) && !GEN_ISNAN(fVar16)) && fVar17 != fVar16)) {
LAB_00d1223a: ;
            *(float *)((int)this + 0x80) = *pfVar9;
            *(float *)((int)this + 0x50) = pfVar6[-2];
            *(float *)((int)this + 0x54) = pfVar6[-1];
            *(float *)((int)this + 0x58) = *pfVar6;
            *(float *)((int)this + 0x5c) = pfVar6[1];
            *(undefined1 *)((int)this + 0x36d) = *(undefined1 *)((int)&(*(float *)(gen_frame + 0xa0)) + iVar8);
          }
          else {
            bVar14 = GEN_ISNAN((float10)*pfVar9) || GEN_ISNAN((float10)*(float *)((int)this + 0x80));
            if (bVar14 != (bVar14 || (float10)*pfVar9 == (float10)*(float *)((int)this + 0x80))) {
              fVar24 = pfVar6[-1] * pfVar6[-1];
              fVar18 = *pfVar6 * *pfVar6;
              fVar19 = pfVar6[1] * pfVar6[1];
              fVar20 = SQRT(((fVar24 + pfVar6[-2] * pfVar6[-2]) + fVar18) + fVar19);
              (*(float *)(gen_frame + 0x50)) = fVar20;
              (*(float *)(gen_frame + 0x54)) = ((fVar24 + fVar24) + fVar18) + fVar19;
              (*(float *)(gen_frame + 0x58)) = ((fVar24 + fVar18) + fVar18) + fVar19;
              (*(float *)(gen_frame + 0x5c)) = ((fVar24 + fVar19) + fVar18) + fVar19;
              fVar16 = ((float10)GEN_TOD(SQRT(((*(float *)((int)this + 0x54) * *(float *)((int)this + 0x54) +
                                      *(float *)((int)this + 0x50) * *(float *)((int)this + 0x50)) +
                                     *(float *)((int)this + 0x58) * *(float *)((int)this + 0x58)) +
                                     *(float *)((int)this + 0x5c) * *(float *)((int)this + 0x5c))));
              fVar17 = (float10)fVar20;
              if (!(fVar16 <= fVar17) != (GEN_ISNAN(fVar17) || GEN_ISNAN(fVar16))) goto LAB_00d1223a;
            }
          }
          iVar8 = iVar8 + 1;
          pfVar9 = pfVar9 + 1;
          pfVar6 = pfVar6 + 4;
        } while (iVar8 < (int)(uint)*(byte *)((int)this + 0x36c));
      }
      *(undefined4 *)((int)this + 0x60) = *(undefined4 *)((int)this + 0x50);
      puVar13 = (undefined4 *)((int)this + 0x60);
      *(undefined4 *)((int)this + 100) = *(undefined4 *)((int)this + 0x54);
      *(undefined4 *)((int)this + 0x68) = *(undefined4 *)((int)this + 0x58);
      *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)((int)this + 0x5c);
      *param_1 = *(float *)((int)this + 0x80);
      pfVar9 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x68))(piVar3,&(*(float *)(gen_frame + 0x50)),puVar13)));
      (*(float *)(gen_frame + 0xb8)) = *pfVar9;
      (*(float *)(gen_frame + 0xbc)) = pfVar9[1];
      (*(float *)(gen_frame + 0xc0)) = pfVar9[2];
      iVar8 = *(int *)((int)this + 0x128);
      (*(float *)(gen_frame + 0xc4)) = pfVar9[3];
      F_00d24070(this,&(*(float *)(gen_frame + 0xb8)),param_1,(int)this + 0x8c,*(float *)(iVar8 + 0x124),
                   *(float *)(iVar8 + 0x120),*(float *)(iVar8 + 0x130),*(float *)(iVar8 + 0x148));
      F_00d219d0(this,(uint)param_1,(int)this + 0x8c,param_2);
      *param_1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x134))) *
                        (float10)*param_1)));
      if ((*((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 0xc))) & 0x20) != 0) {
        *puVar13 = *(undefined4 *)((int)this + 300);
        *(undefined4 *)((int)this + 100) = *(undefined4 *)((int)this + 0x130);
        *(undefined4 *)((int)this + 0x68) = *(undefined4 *)((int)this + 0x134);
        *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)((int)this + 0x138);
      }
      uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 100))(piVar3,&(*(float *)(gen_frame + 0x60)));
      if ((char)uVar4 == '\x01') {
        fVar24 = *(float *)((int)this + 0x7c);
        fVar18 = *(float *)((int)this + 0x78);
        fVar19 = *(float *)((int)this + 0x70);
        fVar20 = *(float *)((int)this + 0x74);
        fVar21 = (((*(float *)(gen_frame + 0x60)) * fVar19 + (*(float *)(gen_frame + 0x70)) * fVar20) + (*(float *)(gen_frame + 0x80)) * fVar18) +
                 (*(float *)(gen_frame + 0x90)) * fVar24;
        fVar22 = (((*(float *)(gen_frame + 0x64)) * fVar19 + (*(float *)(gen_frame + 0x74)) * fVar20) + (*(float *)(gen_frame + 0x84)) * fVar18) +
                 (*(float *)(gen_frame + 0x94)) * fVar24;
        fVar23 = (((*(float *)(gen_frame + 0x68)) * fVar19 + (*(float *)(gen_frame + 0x78)) * fVar20) + (*(float *)(gen_frame + 0x88)) * fVar18) +
                 (*(float *)(gen_frame + 0x98)) * fVar24;
        fVar24 = (((*(float *)(gen_frame + 0x6c)) * fVar19 + (*(float *)(gen_frame + 0x7c)) * fVar20) + (*(float *)(gen_frame + 0x8c)) * fVar18) +
                 (*(float *)(gen_frame + 0x9c)) * fVar24;
        (*(float *)(gen_frame + 0xa0)) = fVar21;
        (*(float *)(gen_frame + 0xa4)) = fVar22;
        (*(float *)(gen_frame + 0xa8)) = fVar23;
        (*(float *)(gen_frame + 0xac)) = fVar24;
        (*(float *)(gen_frame + 0xb8)) = fVar21;
        (*(float *)(gen_frame + 0xbc)) = fVar22;
        (*(float *)(gen_frame + 0xc4)) = fVar24;
        (*(float *)(gen_frame + 0xc0)) = fVar23;
        fVar16 = F_00d21d90(this,(uint)&(*(float *)(gen_frame + 0xb8)),param_1,(int)this + 0x8c);
        uVar10 = extraout_var_00;
      }
      else {
        fVar16 = F_00d21d90(this,(uint)puVar13,param_1,(int)this + 0x8c);
        uVar10 = extraout_var_01;
      }
      *(float *)((int)this + 0x90) = (float)fVar16;
      *(float *)((int)this + 0x80) = *param_1;
      fVar17 = (float10)*param_1;
      fVar16 = (float10)0;
      bVar14 = GEN_ISNAN(fVar16) || GEN_ISNAN(fVar17);
      bVar15 = bVar14 || fVar16 == fVar17;
      uVar4 = CONCAT22(uVar10,(ushort)!(fVar17 <= fVar16) << 8 | (ushort)bVar14 << 10 |
                              (ushort)bVar15 << 0xe);
      if (bVar14 == bVar15) {
        uVar4 = CONCAT31((int3)(uVar4 >> 8),1);
        goto LAB_00d12554;
      }
    }
  }
LAB_00d11e13: ;
  uVar4 = uVar4 & 0xffffff00;
LAB_00d12554: ;
  F_00c47745((*(uint *)(gen_frame + 0x1cc)) ^ (uint)(uint)(gen_frame + 0x1d0));
  return uVar4;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineSound::vf26 */
uint F_00d12570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd12570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = (undefined4 *)F_00d22da0(this,param_1,0x150);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0xf4))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))));
  if (uVar2 != 0) {
    puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
    puVar5 = puVar1;
    for (iVar3 = 0x54; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    return (uint)(puVar1 + 0x54);
  }
  F_00d12c50(*(undefined4 *)(this + 0x128),(uint)puVar1);
  return (uint)(puVar1 + 0x54);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineSound::vf28 */
uint F_00d125d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd125d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  int iVar1;
  undefined * pPVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  ulonglong uVar6;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  uVar3 = *(uint *)(this + 0x1c);
  if (*((int *)GEN_TOP((*(int *)(uVar3 + 0xc) + 0x2f8))) != 0) {
    F_00d22b20(this,&(*(undefined2 *)(gen_frame + 0x0)));
    (*(undefined2 *)(gen_frame + 0x0)) = (undefined2)param_1;
    (*(undefined2 *)(gen_frame + 0x2)) = 0x108;
    uVar6 = F_00427d90();
    iVar1 = *(int *)(this + 0x128);
    (*(ulonglong *)(gen_frame + 0x8)) = uVar6;
    (*(undefined4 *)(gen_frame + 0xfc)) = *(undefined4 *)(iVar1 + 0x124);
    iVar5 = 0;
    (*(undefined4 *)(gen_frame + 0xf8)) = *(undefined4 *)(iVar1 + 0x120);
    (*(byte *)(gen_frame + 0x100)) = *(byte *)(iVar1 + 0x144);
    if (*(byte *)(iVar1 + 0x144) != 0) {
      pPVar2 = this + 0x130;
      puVar4 = ((undefined4 *)(gen_frame + 0x3c));
      do {
        iVar5 = iVar5 + 1;
        puVar4[-1] = *(undefined4 *)(pPVar2 + -4);
        *puVar4 = *(undefined4 *)pPVar2;
        puVar4[1] = *(undefined4 *)(pPVar2 + 4);
        pPVar2 = pPVar2 + 0x10;
        puVar4 = puVar4 + 3;
      } while (iVar5 < (int)(uint)(*(byte *)(gen_frame + 0x100)));
    }
    F_00d12ad0(&(*(undefined2 *)(gen_frame + 0x0)),&(*(undefined2 *)(gen_frame + 0x0)));
    uVar3 = F_00d00b10(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))),&(*(undefined2 *)(gen_frame + 0x0)),0x108);
  }
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar3;
}

/* ref: FUN_00d126c0 */
uint F_00d126c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd126c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x180];
  byte * pbVar1;
  int * this_00;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  (*(uint *)(gen_frame + 0x16c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x170);
  F_00d22580(this,param_1,param_2,param_3);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1132a54));
  *(uint *)((int)this + 0xb0) =
       *(uint *)((int)this + 0xb0) ^ ((param_4 & 0xff) << 4 ^ *(uint *)((int)this + 0xb0)) & 0x10;
  if ((char)param_4 == '\0') {
    *(undefined4 * PTR32 *)((int)this + 0x128) = param_1;
  }
  else {
    *(undefined4 * PTR32 *)((int)this + 0x128) = (undefined4 *)((int)this + 0x370);
    puVar4 = param_1;
    puVar5 = (undefined4 *)((int)this + 0x370);
    for (iVar3 = 0x54; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x128);
  F_00d228c0(this);
  *((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x148))) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x148))) *
              (float10)*(double *)&REFG(undefined, 0x109cac8))));
  pbVar1 = ((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 0xc)));
  *pbVar1 = *pbVar1 | 0x80;
  *(undefined1 *)((int)this + 0x36c) = 0;
  *(undefined2 *)((int)this + 0x36d) = 0;
  if (0xf < *((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 0x144)))) {
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x128) + 0x144))) = 0x10;
  }
  F_00d20fe0(this,(uint)(~(*((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 4))) >> 5) & 1));
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  uVar2 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar2 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x160);
  }
  F_00d125d0(this,0x401);
  F_00c47745((*(uint *)(gen_frame + 0x16c)) ^ (uint)(uint)(gen_frame + 0x170));
  return (uint)this;
}

/* ref: FUN_00d12820 */
uint F_00d12820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd12820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x180];
  byte * pbVar1;
  int iVar2;
  int * this_00;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x16c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x170);
  F_00d22720(this,param_1,param_2);
  *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) | 0x10;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1132a54));
  *(undefined * PTR32 *)((int)this + 0x128) = (undefined *)((int)this + 0x370);
  F_00d12b90((undefined *)((int)this + 0x370));
  iVar2 = *(int *)((int)this + 0x128);
  *(int *)((int)this + 0x18) = iVar2;
  *(float *)(iVar2 + 0x148) =
       ((float)GEN_TOF(((float10)*(float *)(iVar2 + 0x148) * (float10)*(double *)&REFG(undefined, 0x109cac8))));
  pbVar1 = ((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 0xc)));
  *pbVar1 = *pbVar1 | 0x80;
  *(undefined1 *)((int)this + 0x36c) = 0;
  *(undefined2 *)((int)this + 0x36d) = 0;
  if (0xf < *((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 0x144)))) {
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x128) + 0x144))) = 0x10;
  }
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar3 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x160);
  }
  F_00d125d0(this,0x401);
  F_00c47745((*(uint *)(gen_frame + 0x16c)) ^ (uint)(uint)(gen_frame + 0x170));
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineSound::vf14 */
byte F_00d12920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd12920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  int * this_00;
  int iVar2;
  byte bVar3;
  uint uVar4;
  float fVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  ((code *)*(gen_code32 *)(*(int *)this + 0x70))(0x406);
  if (((byte)this[0xb0] & 4) != 0) {
    return 0;
  }
  bVar3 = F_00d217a0((undefined *)this,param_1);
  if (bVar3 != 0) {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)(float10)0)));
    *(float *)(this + 0x8c) = (float)(float10)1;
    F_00d21970(this);
    uVar4 = F_00d11db0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),param_1);
    if ((char)uVar4 != '\0') {
      this_00 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
      iVar2 = *(int *)(this + 0x128);
      uVar4 = ((code *)*(gen_code32 *)(*this_00 + 0x18))(this_00);
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar2 + 0x10 + (uVar4 & 0xff) * 4))) *
                       (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8)))))))))));
      uVar1 = *(ushort *)(iVar2 + 0xe);
      if (uVar1 != 0) {
        fVar5 = F_00d005d0(this_00,(uint)uVar1);
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar5 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8)))))))));
      }
      iVar2 = *(int *)(this + 0x128);
      *(undefined * PTR32 *)(this + 0x80) = (*(undefined * PTR32 *)(gen_frame + 0x8));
      if ((*(byte *)(iVar2 + 0xc) & 8) != 0) {
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = *(undefined * PTR32 *)(iVar2 + 0x134);
        *(undefined4 *)(this + 0x80) = *(undefined4 *)(iVar2 + 0x134);
      }
      if ((((byte)this[0xb0] & 0x40) == 0) && (bVar3 = F_00d228c0(this), bVar3 == 0)) {
        return 1;
      }
      bVar3 = F_00d00ed0(this_00,this,(uint)(byte)this[0x2d],*(undefined4 *)(this + 0x30),
                           ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8))))));
      return bVar3;
    }
    F_00d219b0(this);
    F_00d22c70(this,0);
  }
  return 1;
}

/* ref: FUN_00d12a30 */
unsigned int F_00d12a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd12a30u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = in_ecx[1] * in_ecx[1];
  fVar2 = in_ecx[2] * in_ecx[2];
  fVar3 = in_ecx[3] * in_ecx[3];
  *param_2 = ((fVar1 + *in_ecx * *in_ecx) + fVar2) + fVar3;
  param_2[1] = ((fVar1 + fVar1) + fVar2) + fVar3;
  param_2[2] = ((fVar1 + fVar2) + fVar2) + fVar3;
  param_2[3] = ((fVar1 + fVar3) + fVar2) + fVar3;
  return 0;
}

/* ref: FUN_00d12a80 */
unsigned int F_00d12a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd12a80u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = in_ecx[1] * in_ecx[1];
  fVar2 = in_ecx[2] * in_ecx[2];
  fVar3 = in_ecx[3] * in_ecx[3];
  *param_2 = SQRT(((fVar1 + *in_ecx * *in_ecx) + fVar2) + fVar3);
  param_2[1] = ((fVar1 + fVar1) + fVar2) + fVar3;
  param_2[2] = ((fVar1 + fVar2) + fVar2) + fVar3;
  param_2[3] = ((fVar1 + fVar3) + fVar2) + fVar3;
  return 0;
}

/* ref: FUN_00d12ad0 */
unsigned int F_00d12ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd12ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *param_1 = *(undefined2 *)this;
  param_1[1] = *(undefined2 *)((int)this + 2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((int)this + 0x18);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)((int)this + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((int)this + 0x20);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)((int)this + 0x2c);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((int)this + 0x28);
  param_1[0x18] = *(undefined2 *)((int)this + 0x30);
  param_1[0x19] = *(undefined2 *)((int)this + 0x32);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)((int)this + 0x34);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)((int)this + 0xf8);
  *(undefined4 *)(param_1 + 0x7e) = *(undefined4 *)((int)this + 0xfc);
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)((int)this + 0x100);
  iVar1 = 0x10;
  puVar2 = (undefined4 *)(param_1 + 0x1c);
  puVar3 = (undefined4 *)((int)this + 0x40);
  do {
    *puVar2 = *((undefined4 *)GEN_TOP((((int)this - (int)param_1) + (int)puVar2)));
    iVar1 = iVar1 + -1;
    puVar2[1] = puVar3[-1];
    puVar2[2] = *puVar3;
    puVar2 = puVar2 + 3;
    puVar3 = puVar3 + 3;
  } while (iVar1 != 0);
  return 0;
}

/* ref: FUN_00d12b90 */
unsigned int F_00d12b90(unsigned int gen_a0)
{
  GEN_ENTER(0xd12b90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  float10 fVar2;
  undefined4 uVar3;
  float * pfVar4;
  int iVar5;
  
  fVar1 = (float10)1;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined2 *)((int)this + 3) = 0x400;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined1 *)((int)this + 5) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(float *)((int)this + 0x10) = (float)fVar1;
  *(float *)((int)this + 0x14) = (float)fVar1;
  *(float *)((int)this + 0x18) = (float)fVar1;
  *(float *)((int)this + 0x1c) = (float)fVar1;
  *(undefined2 *)((int)this + 0xe) = 0;
  fVar2 = (float10)0;
  *(undefined2 *)this = 0x150;
  *(undefined1 *)((int)this + 0xd) = 0;
  *(undefined1 *)((int)this + 2) = 6;
  iVar5 = 0x10;
  pfVar4 = (float *)((int)this + 0x28);
  do {
    pfVar4[-2] = (float)fVar2;
    iVar5 = iVar5 + -1;
    pfVar4[-1] = (float)fVar2;
    *pfVar4 = (float)fVar2;
    pfVar4[1] = (float)fVar2;
    pfVar4[1] = (float)fVar1;
    uVar3 = REFG(float, 0x1094880);
    pfVar4 = pfVar4 + 4;
  } while (iVar5 != 0);
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x120) = uVar3;
  *(undefined4 *)((int)this + 0x124) = REFG(float, 0x10a0d00);
  *(undefined4 *)((int)this + 0x128) = uVar3;
  *(float *)((int)this + 300) = (float)fVar2;
  *(float *)((int)this + 0x140) = (float)fVar2;
  *(float *)((int)this + 0x130) = (float)fVar1;
  *(float *)((int)this + 0x134) = (float)fVar1;
  *(float *)((int)this + 0x138) = (float)fVar1;
  *(float *)((int)this + 0x13c) = (float)fVar1;
  *(float *)((int)this + 0x148) = (float)fVar1;
  *(float *)((int)this + 0x14c) = (float)fVar2;
  return 0;
}

/* ref: FUN_00d12c50 */
unsigned int F_00d12c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd12c50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint * puVar2;
  uint * puVar3;
  int local_8;
  
  F_00d0c080(param_1,param_2);
  puVar3 = (uint *)(param_1 + 0x28);
  local_8 = 0x10;
  puVar2 = (uint *)(param_2 + 0x20);
  do {
    uVar1 = *((uint *)GEN_TOP(((param_1 - param_2) + (int)puVar2)));
    *puVar2 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = puVar3[-1];
    puVar2[1] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = *puVar3;
    puVar2[2] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = puVar3[1];
    puVar2[3] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    puVar3 = puVar3 + 4;
    local_8 = local_8 + -1;
    puVar2 = puVar2 + 4;
  } while (local_8 != 0);
  uVar1 = *(uint *)(param_1 + 0x120);
  *(uint *)(param_2 + 0x120) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x124);
  *(uint *)(param_2 + 0x124) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x128);
  *(uint *)(param_2 + 0x128) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 300);
  *(uint *)(param_2 + 300) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x130);
  *(uint *)(param_2 + 0x130) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x134);
  *(uint *)(param_2 + 0x134) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x138);
  *(uint *)(param_2 + 0x138) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x13c);
  *(uint *)(param_2 + 0x13c) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x140);
  *(uint *)(param_2 + 0x140) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *(undefined1 *)(param_2 + 0x144) = *(undefined1 *)(param_1 + 0x144);
  *(undefined2 *)(param_2 + 0x145) = 0;
  *(undefined1 *)(param_2 + 0x147) = 0;
  uVar1 = *(uint *)(param_1 + 0x148);
  *(uint *)(param_2 + 0x148) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x14c);
  *(uint *)(param_2 + 0x14c) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineSound::vf0 */
uint F_00d12e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd12e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1132a54));
  F_00d23680(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineSound::vf9 */
unsigned int F_00d12e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd12e50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  float * pfVar1;
  float * pfVar2;
  float * pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  
  F_00d213b0(this,param_1,param_2);
  iVar10 = 0;
  do {
    iVar9 = *(int *)(this + 0x128);
    fVar4 = *(float *)(iVar9 + 0x28 + iVar10);
    fVar5 = *(float *)(iVar9 + 0x2c + iVar10);
    pfVar1 = (float *)(iVar9 + 0x20 + iVar10);
    pfVar2 = (float *)(iVar9 + 0x24 + iVar10);
    fVar6 = param_1[3];
    pfVar3 = (float *)(iVar9 + 0x20 + iVar10);
    iVar10 = iVar10 + 0x10;
    fVar7 = param_1[1];
    fVar8 = param_1[2];
    *pfVar3 = *pfVar1 + *param_1;
    pfVar3[1] = *pfVar2 + fVar7;
    pfVar3[2] = fVar4 + fVar8;
    pfVar3[3] = fVar5 + fVar6;
    *((float *)GEN_TOP((*(int *)(this + 0x128) + 0x1c + iVar10))) = (float)(float10)1;
  } while (iVar10 < 0x20);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineSound::vf12 */
uint F_00d12f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd12f20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x80);
  return (uint)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineSound::vf13 */
uint F_00d12f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd12f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float10 fVar1;
  
  fVar1 = F_00d22f40(this,GEN_TOF(*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x60)))),
                       *((byte *)GEN_TOP((*(int *)(this + 0x128) + 4))) >> 2 & 1);
  *param_1 = ((float)GEN_TOF((fVar1 * (float10)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x58))))));
  return (uint)param_1;
}

/* ref: FUN_00d12f80 */
float F_00d12f80(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd12f80u, gen_a0, 0u, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float fVar1;
  float fVar2;
  float fVar3;
  float * pfVar4;
  undefined4 * puVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  (*(float *)(gen_frame + 0x28)) = param_2;
  pfVar4 = (float *)F_00c34320((undefined4)gen_fl2bits(param_2),&(*(float *)(gen_frame + 0x0)),param_1 + 0x20);
  ((float *)(gen_frame + 0x3c))[0] = *pfVar4;
  ((float *)(gen_frame + 0x3c))[1] = pfVar4[1];
  ((float *)(gen_frame + 0x3c))[2] = pfVar4[2];
  ((float *)(gen_frame + 0x3c))[3] = pfVar4[3];
  puVar5 = (undefined4 *)F_00c34320((undefined4)gen_fl2bits((*(float *)(gen_frame + 0x28))),&(*(float *)(gen_frame + 0x0)),param_1 + 0x30);
  ((float *)(gen_frame + 0x3c))[4] = gen_bits2f(*puVar5);
  ((float *)(gen_frame + 0x3c))[5] = gen_bits2f(puVar5[1]);
  ((float *)(gen_frame + 0x3c))[6] = gen_bits2f(puVar5[2]);
  (*(undefined4 *)(gen_frame + 0x58)) = puVar5[3];
  if ((*(byte *)(param_1 + 4) & 4) == 0) {
    (*(float *)(gen_frame + 0x28)) = ((float *)(gen_frame + 0x3c))[1];
    F_00d218f0(param_3[1],&(*(float *)(gen_frame + 0x28)),param_1,param_1 + 0x48);
    ((float *)(gen_frame + 0x3c))[1] = (*(float *)(gen_frame + 0x28));
    ((float *)(gen_frame + 0x3c))[5] = (*(float *)(gen_frame + 0x28));
  }
  fVar13 = *param_3;
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  iVar6 = 2;
  pfVar4 = ((float *)(gen_frame + 0x3c)) + 2;
  do {
    iVar6 = iVar6 + -1;
    fVar9 = pfVar4[-2] - fVar13;
    fVar10 = pfVar4[-1] - fVar1;
    fVar11 = *pfVar4 - fVar2;
    fVar12 = pfVar4[1] - fVar3;
    (*(float *)(gen_frame + 0x0)) = fVar9;
    (*(float *)(gen_frame + 0x4)) = fVar10;
    (*(float *)(gen_frame + 0x8)) = fVar11;
    (*(float *)(gen_frame + 0xc)) = fVar12;
    (*(float *)(gen_frame + 0x18)) = fVar9;
    pfVar4[-2] = fVar9;
    (*(float *)(gen_frame + 0x1c)) = fVar10;
    pfVar4[-1] = fVar10;
    (*(float *)(gen_frame + 0x20)) = fVar11;
    *pfVar4 = fVar11;
    (*(float *)(gen_frame + 0x24)) = fVar12;
    pfVar4[1] = fVar12;
    pfVar4 = pfVar4 + 4;
  } while (iVar6 != 0);
  fVar13 = F_010536a0(((float *)(gen_frame + 0x3c)),((float *)(gen_frame + 0x3c)) + 4,((undefined1 *)(gen_frame + 0x2c)));
  (*(float *)(gen_frame + 0x28)) = fVar13;
  fVar7 = (float10)fVar13;
  fVar8 = (float10)*(float *)(param_1 + 0x44);
  if (!(fVar7 <= fVar8) != ((GEN_ISNAN(fVar8) || GEN_ISNAN(fVar7)) || fVar8 == fVar7)) {
    fVar13 = ((float)GEN_TOF((fVar7 - (float10)*(float *)(param_1 + 0x44))));
    (*(float *)(gen_frame + 0x28)) = fVar13;
    F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60));
    return fVar13;
  }
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60));
  return (float)(float10)0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineSound::vf18 */
uint F_00d13110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd13110u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_3 < 0x70) {
    return 0;
  }
  puVar2 = *(undefined4 * PTR32 *)(in_ecx + 0x128);
  puVar3 = param_2;
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0x70;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineSound::vf19 */
byte F_00d13140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd13140u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x128);
  *param_1 = *(undefined4 *)(iVar1 + 0x40);
  *param_2 = *(undefined4 *)(iVar1 + 0x44);
  *param_3 = *(undefined4 *)(iVar1 + 100);
  *param_4 = *(undefined4 *)(iVar1 + 0x60);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineSound::vf20 */
uint F_00d13170(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xd13170u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x128);
  *(float *)(uVar1 + 0x40) = param_2;
  *((float *)GEN_TOP((*(int *)(in_ecx + 0x128) + 0x44))) = param_3;
  return uVar1;
}

/* ref: FUN_00d13190 */
uint F_00d13190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd13190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined2 extraout_var_00 = 0;
  bool bVar7;
  bool bVar8;
  float10 fVar9;
  float10 fVar10;
  float fVar11;
  
  (*(uint *)(gen_frame + 0xc8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x98))(piVar3)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,((undefined1 *)(gen_frame + 0x8)));
  if ((char)uVar4 != '\0') {
    iVar1 = *(int *)((int)this + 0x128);
    (*(undefined4 *)(gen_frame + 0xa8)) = *(undefined4 *)(iVar1 + 0x20);
    (*(undefined4 * PTR32 *)(gen_frame + 0xac)) = *(undefined4 * PTR32 *)(iVar1 + 0x24);
    (*(undefined4 *)(gen_frame + 0xb0)) = *(undefined4 *)(iVar1 + 0x28);
    (*(undefined4 *)(gen_frame + 0xb4)) = *(undefined4 *)(iVar1 + 0x2c);
    (*(undefined4 *)(gen_frame + 0xb8)) = *(undefined4 *)(iVar1 + 0x30);
    (*(undefined4 * PTR32 *)(gen_frame + 0xbc)) = *(undefined4 * PTR32 *)(iVar1 + 0x34);
    (*(undefined4 *)(gen_frame + 0xc0)) = *(undefined4 *)(iVar1 + 0x38);
    (*(undefined4 *)(gen_frame + 0xc4)) = *(undefined4 *)(iVar1 + 0x3c);
    if ((*(byte *)(iVar1 + 4) & 4) == 0) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = *(undefined4 * PTR32 *)(iVar1 + 0x24);
      ((code *)*(gen_code32 *)(*piVar3 + 0x30))(piVar3,((undefined1 *)(gen_frame + 0x88)));
      bVar2 = F_00d218f0((*(float *)(gen_frame + 0x8c)),&(*(undefined4 * PTR32 *)(gen_frame + 0x0)),*(int *)((int)this + 0x128),
                           *(int *)((int)this + 0x128) + 0x48);
      uVar4 = CONCAT31(extraout_var,bVar2);
      if (bVar2 != 1) goto LAB_00d13329;
      (*(undefined4 * PTR32 *)(gen_frame + 0xac)) = (*(undefined4 * PTR32 *)(gen_frame + 0x0));
      (*(undefined4 * PTR32 *)(gen_frame + 0xbc)) = (*(undefined4 * PTR32 *)(gen_frame + 0x0));
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = &(*(undefined4 *)(gen_frame + 0xa8));
    puVar6 = (undefined4 *)((int)this + 300);
    (*(float *)(gen_frame + 0x4)) = 2.8026e-45;
    do {
      puVar5 = (undefined4 *)F_00c34320(((undefined1 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x88)),(*(undefined4 * PTR32 *)(gen_frame + 0x0)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = (*(undefined4 * PTR32 *)(gen_frame + 0x0)) + 4;
      *puVar6 = *puVar5;
      puVar6[1] = puVar5[1];
      puVar6[2] = puVar5[2];
      puVar6[3] = puVar5[3];
      puVar6 = puVar6 + 4;
      iVar1 = (int)gen_fl2bits((*(float *)(gen_frame + 0x4))) + -1;
      (*(float *)(gen_frame + 0x4)) = gen_bits2f(iVar1);
    } while (iVar1 != 0);
    fVar11 = F_010536a0((int)this + 300,(int)this + 0x13c,&(*(undefined4 *)(gen_frame + 0x98)));
    (*(float *)(gen_frame + 0x4)) = fVar11;
    fVar9 = (float10)fVar11;
    *(undefined4 *)((int)this + 0x50) = (*(undefined4 *)(gen_frame + 0x98));
    *(undefined4 *)((int)this + 0x54) = (*(undefined4 *)(gen_frame + 0x9c));
    *(undefined4 *)((int)this + 0x58) = (*(undefined4 *)(gen_frame + 0xa0));
    *(undefined4 *)((int)this + 0x5c) = (*(undefined4 *)(gen_frame + 0xa4));
    puVar6 = (undefined4 *)((int)this + 0x60);
    *puVar6 = (*(undefined4 *)(gen_frame + 0x98));
    *(undefined4 *)((int)this + 100) = (*(undefined4 *)(gen_frame + 0x9c));
    *(undefined4 *)((int)this + 0x68) = (*(undefined4 *)(gen_frame + 0xa0));
    *(undefined4 *)((int)this + 0x6c) = (*(undefined4 *)(gen_frame + 0xa4));
    iVar1 = *(int *)((int)this + 0x128);
    fVar10 = (float10)*(float *)(iVar1 + 0x44);
    bVar7 = (GEN_ISNAN(fVar10) || GEN_ISNAN(fVar9)) || fVar10 == fVar9;
    uVar4 = CONCAT22((short)((uint)(*(undefined4 *)(gen_frame + 0x98)) >> 0x10),
                     (ushort)!(fVar9 <= fVar10) << 8 | (ushort)(GEN_ISNAN(fVar10) || GEN_ISNAN(fVar9)) << 10 |
                     (ushort)bVar7 << 0xe);
    if (!(fVar9 <= fVar10) == bVar7) {
      fVar10 = (float10)*(float *)(iVar1 + 0x40);
      if (!(fVar9 <= fVar10) || ((GEN_ISNAN(fVar10) || GEN_ISNAN(fVar9)) || fVar10 == fVar9)) {
        fVar11 = ((float)GEN_TOF((fVar9 - (float10)*(float *)(iVar1 + 0x40))));
        (*(float *)(gen_frame + 0x4)) = fVar11;
        *param_1 = fVar11;
        fVar11 = ((float)GEN_TOF(((float10)fVar11 /
                        ((float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x44))) -
                        (float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x40)))))));
        (*(float *)(gen_frame + 0x4)) = fVar11;
        fVar11 = (float)((float10)1 - (float10)fVar11);
        (*(float *)(gen_frame + 0x4)) = fVar11;
        *param_1 = fVar11;
        fVar9 = (float10)fVar11 * (float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x50)));
      }
      else {
        fVar11 = ((float)GEN_TOF((fVar9 / (float10)*(float *)(iVar1 + 0x40))));
        (*(float *)(gen_frame + 0x4)) = fVar11;
        fVar11 = (float)((float10)1 - (float10)fVar11);
        (*(float *)(gen_frame + 0x4)) = fVar11;
        *param_1 = fVar11;
        fVar9 = (float10)fVar11 *
                ((float10)1 - (float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x50)))) +
                (float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x50)));
      }
      *param_1 = (float)fVar9;
      puVar5 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x68))(piVar3,((undefined1 *)(gen_frame + 0x88)),&(*(undefined4 *)(gen_frame + 0x98)))));
      (*(undefined4 *)(gen_frame + 0x98)) = *puVar5;
      (*(undefined4 *)(gen_frame + 0x9c)) = puVar5[1];
      (*(undefined4 *)(gen_frame + 0xa0)) = puVar5[2];
      iVar1 = *(int *)((int)this + 0x128);
      (*(undefined4 *)(gen_frame + 0xa4)) = puVar5[3];
      F_00d24070(this,&(*(undefined4 *)(gen_frame + 0x98)),param_1,(int)this + 0x8c,*(float *)(iVar1 + 0x44),
                   *(float *)(iVar1 + 0x40),*(float *)(iVar1 + 0x50),*(float *)(iVar1 + 100));
      F_00d219d0(this,(uint)param_1,(int)this + 0x8c,param_2);
      *param_1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x54))) * (float10)*param_1
                        )));
      if ((*((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 0xc))) & 0x20) != 0) {
        *puVar6 = *(undefined4 *)((int)this + 300);
        *(undefined4 *)((int)this + 100) = *(undefined4 *)((int)this + 0x130);
        *(undefined4 *)((int)this + 0x68) = *(undefined4 *)((int)this + 0x134);
        *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)((int)this + 0x138);
      }
      uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 100))(piVar3,((undefined1 *)(gen_frame + 0x48)));
      if ((char)uVar4 == '\x01') {
        puVar6 = (undefined4 *)F_00c34320(((undefined1 *)(gen_frame + 0x48)),((undefined1 *)(gen_frame + 0x88)),(int)this + 0x70);
        (*(undefined4 *)(gen_frame + 0x98)) = *puVar6;
        (*(undefined4 *)(gen_frame + 0x9c)) = puVar6[1];
        (*(undefined4 *)(gen_frame + 0xa0)) = puVar6[2];
        (*(undefined4 *)(gen_frame + 0xa4)) = puVar6[3];
        puVar6 = &(*(undefined4 *)(gen_frame + 0x98));
      }
      fVar9 = F_00d21d90(this,(uint)puVar6,param_1,(int)this + 0x8c);
      *(float *)((int)this + 0x90) = (float)fVar9;
      *(float *)((int)this + 0x80) = *param_1;
      fVar10 = (float10)*param_1;
      fVar9 = (float10)0;
      bVar7 = GEN_ISNAN(fVar9) || GEN_ISNAN(fVar10);
      bVar8 = bVar7 || fVar9 == fVar10;
      uVar4 = CONCAT22(extraout_var_00,
                       (ushort)!(fVar10 <= fVar9) << 8 | (ushort)bVar7 << 10 | (ushort)bVar8 << 0xe)
      ;
      if (bVar7 == bVar8) {
        F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
        return CONCAT31((int3)(uVar4 >> 8),1);
      }
    }
    else {
      *(float *)((int)this + 0x80) = (float)(float10)0;
    }
  }
LAB_00d13329: ;
  F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
  return uVar4 & 0xffffff00;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineSound::vf25 */
uint F_00d136a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd136a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90);
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
  uVar1 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar1 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x80);
  }
  F_00c47745((*(uint *)(gen_frame + 0x8c)) ^ (uint)(uint)(gen_frame + 0x90));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineSound::vf27 */
byte F_00d13720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd13720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = param_1;
  puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
  for (iVar2 = 0x1c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  bVar1 = F_00d228c0(this);
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineSound::vf29 */
uint F_00d13750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd13750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  HWND param_1 = (HWND)gen_a1;
  HDC param_2 = (HDC)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  char cVar1;
  int iVar2;
  HGDIOBJ pvVar3;
  undefined * pHVar4;
  undefined * h;
  char * pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong color;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  pvVar3 = gen_imp_GetStockObject(5);
  (*(HGDIOBJ *)(gen_frame + 0x10)) = pvVar3;
  pvVar3 = gen_imp_SelectObject(param_2,pvVar3);
  (*(HGDIOBJ *)(gen_frame + 0x14)) = pvVar3;
  if (((byte)this[0xb0] & 1) == 0) {
    iVar8 = 1;
    color = 0x900000;
  }
  else {
    color = 0x80;
    iVar8 = 2;
  }
  pHVar4 = gen_imp_CreatePen(0,iVar8,color);
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = pHVar4;
  pvVar3 = gen_imp_SelectObject(param_2,pHVar4);
  (*(HGDIOBJ *)(gen_frame + 0x18)) = pvVar3;
  gen_imp_GetClientRect(param_1,&(*(tagRECT *)(gen_frame + 0x68)));
  iVar7 = (*(tagRECT *)(gen_frame + 0x68)).right / 2;
  (*(int *)(gen_frame + 0x28)) = (*(tagRECT *)(gen_frame + 0x68)).bottom / 2;
  gen_imp_MoveToEx(param_2,iVar7 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 300)),
           (*(tagRECT *)(gen_frame + 0x68)).bottom / 2 - (int)((double)*(float *)(this + 0x134) * *(double *)&REFG(double, 0x1132488)),
           (LPPOINT)0x0);
  gen_imp_LineTo(param_2,iVar7 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 0x13c)),
         (*(int *)(gen_frame + 0x28)) - (int)((double)*(float *)(this + 0x144) * *(double *)&REFG(double, 0x1132488)));
  iVar7 = iVar7 + (int)((double)*(float *)(this + 0x50) * *(double *)&REFG(undefined, 0x10947f0));
  iVar8 = (*(int *)(gen_frame + 0x28)) + (int)((double)*(float *)(this + 0x58) * *(double *)&REFG(undefined, 0x10947f0));
  (*(int *)(gen_frame + 0x28)) = iVar8;
  iVar2 = (int)(*(double *)&REFG(undefined, 0x10947f0) * (double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x44))));
  gen_imp_Ellipse(param_2,iVar7 - iVar2,iVar8 - iVar2,iVar2 + iVar7,iVar2 + iVar8);
  iVar8 = (int)((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x40))) * *(double *)&REFG(undefined, 0x10947f0));
  gen_imp_Ellipse(param_2,iVar7 - iVar8,(*(int *)(gen_frame + 0x28)) - iVar8,iVar8 + iVar7,iVar8 + (*(int *)(gen_frame + 0x28)));
  if (((byte)this[0xb0] & 1) != 0) {
    (*(HGDIOBJ *)(gen_frame + 0x1c)) = (HGDIOBJ)((*(tagRECT *)(gen_frame + 0x68)).right / 2);
    (*(undefined * PTR32 *)(gen_frame + 0x20)) = ((undefined *)GEN_TOP(((*(tagRECT *)(gen_frame + 0x68)).bottom / 2)));
    gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x18)));
    gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x24)));
    pHVar4 = gen_imp_CreatePen(0,1,0x900000);
    (*(undefined * PTR32 *)(gen_frame + 0x24)) = pHVar4;
    pvVar3 = gen_imp_SelectObject(param_2,pHVar4);
    (*(HGDIOBJ *)(gen_frame + 0x18)) = pvVar3;
    gen_imp_MoveToEx(param_2,(int)(*(HGDIOBJ *)(gen_frame + 0x1c)) -
                     (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 0x60)),
             (int)(*(undefined * PTR32 *)(gen_frame + 0x20)) - ((int)((double)*(float *)(this + 0x68) * *(double *)&REFG(double, 0x1132488))) * 4,
             (LPPOINT)0x0);
    gen_imp_LineTo(param_2,(int)(*(HGDIOBJ *)(gen_frame + 0x1c)),(int)(*(undefined * PTR32 *)(gen_frame + 0x20)));
  }
  F_00c48350(((undefined *)(gen_frame + 0x2c)),0,0x3c);
  F_00c49908(((CHAR *)(((char *)((undefined *)(gen_frame + 0x2c)) + 28))),0x20,&REFG(undefined, 0x1132aec));
  (*(LONG *)((char *)((undefined *)(gen_frame + 0x2c)))) = 0xd;
  (*(BYTE *)(((char *)((undefined *)(gen_frame + 0x2c)) + 23))) = 0x80;
  (*(BYTE *)(((char *)((undefined *)(gen_frame + 0x2c)) + 27))) = '\x01';
  h = gen_imp_CreateFontIndirectA(((undefined *)(gen_frame + 0x2c)));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = h;
  pvVar3 = gen_imp_SelectObject(param_2,h);
  (*(HGDIOBJ *)(gen_frame + 0x1c)) = pvVar3;
  if (((byte)this[0xb0] & 1) == 0) {
    F_00c472af(((char *)(gen_frame + 0x78)),0x20,&REFG(undefined, 0x1132b08),&REFG(undefined, 0x1132b00));
  }
  else {
    F_00c472af(((char *)(gen_frame + 0x78)),0x20,&REFG(undefined, 0x1132af8),
               (int)(ulonglong)
                    gen_d2bits((double)*(float *)(this + 0x80) * *(double *)&REFG(undefined, 0x1088118)),
               (int)((ulonglong)
                     gen_d2bits((double)*(float *)(this + 0x80) * *(double *)&REFG(undefined, 0x1088118)) >> 0x20)
              );
  }
  pcVar5 = ((char *)(gen_frame + 0x78));
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  gen_imp_GetTextExtentPoint32A(param_2,((char *)(gen_frame + 0x78)),(int)pcVar5 - (int)(((char *)(gen_frame + 0x78)) + 1),&(*(undefined8 *)(gen_frame + 0x8)));
  gen_imp_TextOutA(param_2,iVar7 - (*(LONG *)((char *)&((*(undefined8 *)(gen_frame + 0x8))))) / 2,(*(int *)(gen_frame + 0x28)) - (*(LONG *)(((char *)&((*(undefined8 *)(gen_frame + 0x8))) + 4))) / 2,((char *)(gen_frame + 0x78)),
           (int)pcVar5 - (int)(((char *)(gen_frame + 0x78)) + 1));
  gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x1c)));
  gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x18)));
  gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x14)));
  gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x20)));
  gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x24)));
  uVar6 = gen_imp_DeleteObject((*(HGDIOBJ *)(gen_frame + 0x10)));
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
  return uVar6;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineSound::vf30 */
byte F_00d13a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd13a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined * _File;
  byte bVar5;
  int iVar6;
  
  _File = param_1;
  bVar5 = F_00d21f00((undefined *)this,param_1);
  if (bVar5 == 0) {
    return 0;
  }
  iVar6 = 0;
  param_1 = (undefined *)0x0;
  do {
    iVar1 = *(int *)(this + 0x128);
    dVar2 = (double)*(float *)(iVar6 + 0x28 + iVar1);
    dVar3 = (double)*(float *)(iVar6 + 0x24 + iVar1);
    dVar4 = (double)*(float *)(iVar6 + 0x20 + iVar1);
    F_00c49386(_File,"Position[%d] = %f %f %f\n",param_1,(int)(ulonglong)gen_d2bits(dVar4),
             (int)((ulonglong)gen_d2bits(dVar4) >> 0x20),(int)(ulonglong)gen_d2bits(dVar3),
             (int)((ulonglong)gen_d2bits(dVar3) >> 0x20),(int)(ulonglong)gen_d2bits(dVar2),
             (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
    param_1 = (undefined *)((int)param_1 + (1) * 32);
    iVar6 = iVar6 + 0x10;
  } while (iVar6 < 0x20);
  F_00c49386(_File,"MaxRange = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x40))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x40))))));
  F_00c49386(_File,"MinRange = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x44))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x44))))));
  param_1 = (undefined *)0x0;
  iVar6 = 0x48;
  do {
    F_00c49386(_File,"Height[%d] = %f\n",param_1,
             (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + iVar6)))),
             (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + iVar6)))) >> 0x20
                  ));
    param_1 = (undefined *)((int)param_1 + (1) * 32);
    iVar6 = iVar6 + 4;
  } while (iVar6 < 0x50);
  F_00c49386(_File,"RangeVolume = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x50))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x50))))));
  F_00c49386(_File,"Volume = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x54))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x54))))));
  F_00c49386(_File,"Pitch = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x58))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x58))))));
  F_00c49386(_File,"ReverbFac = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x5c))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x5c))))));
  F_00c49386(_File,"DopplerFac = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x60))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x60))))));
  F_00c49386(_File,"[EndOfSoundObject]\n\n");
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineSound::vf31 */
byte F_00d13c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd13c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  char * pcVar2;
  int iVar3;
  uint uVar4;
  byte * pbVar5;
  bool bVar6;
  double dVar7;
  
  pcVar2 = "Position";
  pbVar5 = (byte *)param_2;
  do {
    bVar1 = *pcVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00d13c31: ;
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00d13c36;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00d13c31;
    pcVar2 = pcVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d13c36: ;
  if (iVar3 == 0) {
    uVar4 = F_00d00d00(0,0);
    if (uVar4 != 0) {
      uVar4 = F_00c4c74c(uVar4);
      pcVar2 = (char *)F_00d00d00(0,0);
      if (pcVar2 != (char *)0x0) {
        dVar7 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + (uVar4 + 2) * 0x10))) = (float)dVar7;
        pcVar2 = (char *)F_00d00d00(0,0);
        if (pcVar2 != (char *)0x0) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x24 + uVar4 * 0x10))) = (float)dVar7;
          pcVar2 = (char *)F_00d00d00(0,0);
          if (pcVar2 != (char *)0x0) {
            dVar7 = F_00c4acaa(pcVar2);
            *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x28 + uVar4 * 0x10))) = (float)dVar7;
            return 1;
          }
        }
      }
    }
  }
  else {
    pcVar2 = "MaxRange";
    pbVar5 = (byte *)param_2;
    do {
      bVar1 = *pcVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00d13d06: ;
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00d13d0b;
      }
      if (bVar1 == 0) break;
      bVar1 = pcVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00d13d06;
      pcVar2 = pcVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00d13d0b: ;
    if (iVar3 == 0) {
      pcVar2 = (char *)F_00d00d00(0,0);
      if (pcVar2 != (char *)0x0) {
        dVar7 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x40))) = (float)dVar7;
        return 1;
      }
    }
    else {
      pcVar2 = "MinRange";
      pbVar5 = (byte *)param_2;
      do {
        bVar1 = *pcVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00d13d68: ;
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00d13d6d;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00d13d68;
        pcVar2 = pcVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00d13d6d: ;
      if (iVar3 == 0) {
        pcVar2 = (char *)F_00d00d00(0,0);
        if (pcVar2 != (char *)0x0) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x44))) = (float)dVar7;
          return 1;
        }
      }
      else {
        pcVar2 = "Height";
        pbVar5 = (byte *)param_2;
        do {
          bVar1 = *pcVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00d13dd0: ;
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_00d13dd5;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00d13dd0;
          pcVar2 = pcVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00d13dd5: ;
        if (iVar3 == 0) {
          uVar4 = F_00d00d00(0,0);
          if (uVar4 != 0) {
            uVar4 = F_00c4c74c(uVar4);
            pcVar2 = (char *)F_00d00d00(0,0);
            if (pcVar2 != (char *)0x0) {
              dVar7 = F_00c4acaa(pcVar2);
              *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x48 + uVar4 * 4))) = (float)dVar7;
              return 1;
            }
          }
        }
        else {
          pcVar2 = "RangeVolume";
          pbVar5 = (byte *)param_2;
          do {
            bVar1 = *pcVar2;
            bVar6 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_00d13e50: ;
              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
              goto LAB_00d13e55;
            }
            if (bVar1 == 0) break;
            bVar1 = pcVar2[1];
            bVar6 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00d13e50;
            pcVar2 = pcVar2 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_00d13e55: ;
          if (iVar3 == 0) {
            pcVar2 = (char *)F_00d00d00(0,0);
            if (pcVar2 != (char *)0x0) {
              dVar7 = F_00c4acaa(pcVar2);
              *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x50))) = (float)dVar7;
              return 1;
            }
          }
          else {
            pcVar2 = "Volume";
            pbVar5 = (byte *)param_2;
            do {
              bVar1 = *pcVar2;
              bVar6 = bVar1 < *pbVar5;
              if (bVar1 != *pbVar5) {
LAB_00d13eb2: ;
                iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                goto LAB_00d13eb7;
              }
              if (bVar1 == 0) break;
              bVar1 = pcVar2[1];
              bVar6 = bVar1 < pbVar5[1];
              if (bVar1 != pbVar5[1]) goto LAB_00d13eb2;
              pcVar2 = pcVar2 + 2;
              pbVar5 = pbVar5 + 2;
            } while (bVar1 != 0);
            iVar3 = 0;
LAB_00d13eb7: ;
            if (iVar3 == 0) {
              pcVar2 = (char *)F_00d00d00(0,0);
              if (pcVar2 != (char *)0x0) {
                dVar7 = F_00c4acaa(pcVar2);
                *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x54))) = (float)dVar7;
                return 1;
              }
            }
            else {
              pcVar2 = "Pitch";
              pbVar5 = (byte *)param_2;
              do {
                bVar1 = *pcVar2;
                bVar6 = bVar1 < *pbVar5;
                if (bVar1 != *pbVar5) {
LAB_00d13f14: ;
                  iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                  goto LAB_00d13f19;
                }
                if (bVar1 == 0) break;
                bVar1 = pcVar2[1];
                bVar6 = bVar1 < pbVar5[1];
                if (bVar1 != pbVar5[1]) goto LAB_00d13f14;
                pcVar2 = pcVar2 + 2;
                pbVar5 = pbVar5 + 2;
              } while (bVar1 != 0);
              iVar3 = 0;
LAB_00d13f19: ;
              if (iVar3 == 0) {
                pcVar2 = (char *)F_00d00d00(0,0);
                if (pcVar2 != (char *)0x0) {
                  dVar7 = F_00c4acaa(pcVar2);
                  *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x58))) = (float)dVar7;
                  return 1;
                }
              }
              else {
                pcVar2 = "ReverbFac";
                pbVar5 = (byte *)param_2;
                do {
                  bVar1 = *pcVar2;
                  bVar6 = bVar1 < *pbVar5;
                  if (bVar1 != *pbVar5) {
LAB_00d13f76: ;
                    iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                    goto LAB_00d13f7b;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pcVar2[1];
                  bVar6 = bVar1 < pbVar5[1];
                  if (bVar1 != pbVar5[1]) goto LAB_00d13f76;
                  pcVar2 = pcVar2 + 2;
                  pbVar5 = pbVar5 + 2;
                } while (bVar1 != 0);
                iVar3 = 0;
LAB_00d13f7b: ;
                if (iVar3 == 0) {
                  pcVar2 = (char *)F_00d00d00(0,0);
                  if (pcVar2 != (char *)0x0) {
                    dVar7 = F_00c4acaa(pcVar2);
                    *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x5c))) = (float)dVar7;
                    return 1;
                  }
                }
                else {
                  pcVar2 = "DopplerFac";
                  pbVar5 = (byte *)param_2;
                  do {
                    bVar1 = *pcVar2;
                    bVar6 = bVar1 < *pbVar5;
                    if (bVar1 != *pbVar5) {
LAB_00d13fd8: ;
                      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                      goto LAB_00d13fdd;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pcVar2[1];
                    bVar6 = bVar1 < pbVar5[1];
                    if (bVar1 != pbVar5[1]) goto LAB_00d13fd8;
                    pcVar2 = pcVar2 + 2;
                    pbVar5 = pbVar5 + 2;
                  } while (bVar1 != 0);
                  iVar3 = 0;
LAB_00d13fdd: ;
                  if (iVar3 != 0) {
                    bVar1 = F_00d22040(param_1,param_2);
                    return bVar1;
                  }
                  pcVar2 = (char *)F_00d00d00(0,0);
                  if (pcVar2 != (char *)0x0) {
                    dVar7 = F_00c4acaa(pcVar2);
                    *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x60))) = (float)dVar7;
                    return 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineSound::vf14 */
byte F_00d14030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd14030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  int * this_00;
  int iVar2;
  byte bVar3;
  uint uVar4;
  float fVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  ((code *)*(gen_code32 *)(*(int *)this + 0x70))(0x406);
  if (((byte)this[0xb0] & 4) != 0) {
    return 0;
  }
  bVar3 = F_00d217a0((undefined *)this,param_1);
  if (bVar3 != 0) {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)(float10)0)));
    *(float *)(this + 0x8c) = (float)(float10)1;
    F_00d21970(this);
    uVar4 = F_00d13190(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),param_1);
    if ((char)uVar4 != '\0') {
      this_00 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
      iVar2 = *(int *)(this + 0x128);
      uVar4 = ((code *)*(gen_code32 *)(*this_00 + 0x18))(this_00);
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar2 + 0x10 + (uVar4 & 0xff) * 4))) *
                       (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8)))))))))));
      uVar1 = *(ushort *)(iVar2 + 0xe);
      if (uVar1 != 0) {
        fVar5 = F_00d005d0(this_00,(uint)uVar1);
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar5 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8)))))))));
      }
      iVar2 = *(int *)(this + 0x128);
      *(undefined * PTR32 *)(this + 0x80) = (*(undefined * PTR32 *)(gen_frame + 0x8));
      if ((*(byte *)(iVar2 + 0xc) & 8) != 0) {
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = *(undefined * PTR32 *)(iVar2 + 0x54);
        *(undefined4 *)(this + 0x80) = *(undefined4 *)(iVar2 + 0x54);
      }
      if ((((byte)this[0xb0] & 0x40) == 0) && (bVar3 = F_00d228c0(this), bVar3 == 0)) {
        return 1;
      }
      bVar3 = F_00d00ed0(this_00,this,(uint)(byte)this[0x2d],*(undefined4 *)(this + 0x30),
                           ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8))))));
      return bVar3;
    }
    F_00d219b0(this);
    F_00d22c70(this,0);
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineSound::vf26 */
uint F_00d14560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd14560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = (undefined4 *)F_00d22da0(this,param_1,0x70);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0xf4))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))));
  if (uVar2 != 0) {
    puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
    puVar5 = puVar1;
    for (iVar3 = 0x1c; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    return (uint)(puVar1 + 0x1c);
  }
  F_00d149e0(*(undefined4 *)(this + 0x128),(uint)puVar1);
  return (uint)(puVar1 + 0x1c);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineSound::vf28 */
uint F_00d145c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd145c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar1 = *(uint *)(this + 0x1c);
  if (*((int *)GEN_TOP((*(int *)(uVar1 + 0xc) + 0x2f8))) != 0) {
    F_00d22b20(this,&(*(undefined2 *)(gen_frame + 0x0)));
    (*(undefined2 *)(gen_frame + 0x0)) = (undefined2)param_1;
    (*(undefined2 *)(gen_frame + 0x2)) = 0x58;
    (*(ulonglong *)(gen_frame + 0x8)) = F_00427d90();
    (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(this + 300);
    (*(undefined4 *)(gen_frame + 0x3c)) = *(undefined4 *)(this + 0x130);
    (*(undefined4 *)(gen_frame + 0x40)) = *(undefined4 *)(this + 0x134);
    (*(undefined4 *)(gen_frame + 0x44)) = *(undefined4 *)(this + 0x13c);
    (*(undefined4 *)(gen_frame + 0x48)) = *(undefined4 *)(this + 0x140);
    (*(undefined4 *)(gen_frame + 0x4c)) = *(undefined4 *)(this + 0x144);
    (*(undefined4 *)(gen_frame + 0x50)) = *((undefined4 *)GEN_TOP((*(int *)(this + 0x128) + 0x40)));
    (*(undefined4 *)(gen_frame + 0x54)) = *((undefined4 *)GEN_TOP((*(int *)(this + 0x128) + 0x44)));
    F_00d148a0(&(*(undefined2 *)(gen_frame + 0x0)),&(*(undefined2 *)(gen_frame + 0x0)));
    uVar1 = F_00d00b10(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))),&(*(undefined2 *)(gen_frame + 0x0)),0x58);
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: FUN_00d14690 */
uint F_00d14690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd14690u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  byte * pbVar1;
  int * this_00;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  (*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90);
  F_00d22580(this,param_1,param_2,param_3);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1132c6c));
  *(uint *)((int)this + 0xb0) =
       *(uint *)((int)this + 0xb0) ^ ((param_4 & 0xff) << 4 ^ *(uint *)((int)this + 0xb0)) & 0x10;
  if ((char)param_4 == '\0') {
    *(undefined4 * PTR32 *)((int)this + 0x128) = param_1;
  }
  else {
    *(undefined4 * PTR32 *)((int)this + 0x128) = (undefined4 *)((int)this + 0x150);
    puVar4 = param_1;
    puVar5 = (undefined4 *)((int)this + 0x150);
    for (iVar3 = 0x1c; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x128);
  F_00d228c0(this);
  *((float *)GEN_TOP((*(int *)((int)this + 0x128) + 100))) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 100))) *
              (float10)*(double *)&REFG(undefined, 0x109cac8))));
  pbVar1 = ((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 0xc)));
  *pbVar1 = *pbVar1 | 0x80;
  F_00d20fe0(this,(uint)(~(*((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 4))) >> 5) & 1));
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  uVar2 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar2 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x80);
  }
  F_00d145c0(this,0x401);
  F_00c47745((*(uint *)(gen_frame + 0x8c)) ^ (uint)(uint)(gen_frame + 0x90));
  return (uint)this;
}

/* ref: FUN_00d147c0 */
uint F_00d147c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd147c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  byte * pbVar1;
  int iVar2;
  int * this_00;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90);
  F_00d22720(this,param_1,param_2);
  *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) | 0x10;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1132c6c));
  *(undefined * PTR32 *)((int)this + 0x128) = (undefined *)((int)this + 0x150);
  F_00d14940((undefined *)((int)this + 0x150));
  iVar2 = *(int *)((int)this + 0x128);
  *(int *)((int)this + 0x18) = iVar2;
  *(float *)(iVar2 + 100) =
       ((float)GEN_TOF(((float10)*(float *)(iVar2 + 100) * (float10)*(double *)&REFG(undefined, 0x109cac8))));
  pbVar1 = ((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 0xc)));
  *pbVar1 = *pbVar1 | 0x80;
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar3 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x80);
  }
  F_00d145c0(this,0x401);
  F_00c47745((*(uint *)(gen_frame + 0x8c)) ^ (uint)(uint)(gen_frame + 0x90));
  return (uint)this;
}

/* ref: FUN_00d148a0 */
unsigned int F_00d148a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd148a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined2 *)this;
  param_1[1] = *(undefined2 *)((int)this + 2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((int)this + 0x18);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)((int)this + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((int)this + 0x20);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)((int)this + 0x2c);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((int)this + 0x28);
  param_1[0x18] = *(undefined2 *)((int)this + 0x30);
  param_1[0x19] = *(undefined2 *)((int)this + 0x32);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)((int)this + 0x34);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((int)this + 0x38);
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)((int)this + 0x3c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)((int)this + 0x40);
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)((int)this + 0x44);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((int)this + 0x48);
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)((int)this + 0x4c);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)((int)this + 0x50);
  *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)((int)this + 0x54);
  return 0;
}

/* ref: FUN_00d14940 */
unsigned int F_00d14940(unsigned int gen_a0)
{
  GEN_ENTER(0xd14940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  float10 fVar2;
  undefined4 uVar3;
  
  fVar1 = (float10)1;
  *(undefined2 *)((int)this + 3) = 0x400;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined1 *)((int)this + 5) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 6) = 0;
  *(float *)((int)this + 0x10) = (float)fVar1;
  *(float *)((int)this + 0x14) = (float)fVar1;
  *(float *)((int)this + 0x18) = (float)fVar1;
  *(float *)((int)this + 0x1c) = (float)fVar1;
  *(undefined2 *)((int)this + 0xe) = 0;
  fVar2 = (float10)0;
  *(undefined1 *)((int)this + 0xd) = 0;
  *(undefined1 *)((int)this + 2) = 5;
  *(undefined2 *)this = 0x70;
  *(float *)((int)this + 0x20) = (float)fVar2;
  *(float *)((int)this + 0x24) = (float)fVar2;
  *(float *)((int)this + 0x28) = (float)fVar2;
  *(float *)((int)this + 0x2c) = (float)fVar2;
  *(float *)((int)this + 0x2c) = (float)fVar1;
  *(float *)((int)this + 0x30) = (float)fVar2;
  *(float *)((int)this + 0x34) = (float)fVar2;
  *(float *)((int)this + 0x38) = (float)fVar2;
  *(float *)((int)this + 0x3c) = (float)fVar2;
  *(float *)((int)this + 0x3c) = (float)fVar1;
  *(undefined4 *)((int)this + 0x6c) = 0;
  uVar3 = REFG(float, 0x1094880);
  *(undefined4 *)((int)this + 0x40) = REFG(float, 0x1094880);
  *(undefined4 *)((int)this + 0x44) = REFG(float, 0x10a0d00);
  *(undefined4 *)((int)this + 0x48) = uVar3;
  *(float *)((int)this + 0x4c) = (float)fVar2;
  *(float *)((int)this + 0x60) = (float)fVar2;
  *(float *)((int)this + 0x68) = (float)fVar2;
  *(float *)((int)this + 0x50) = (float)fVar1;
  *(float *)((int)this + 0x54) = (float)fVar1;
  *(float *)((int)this + 0x58) = (float)fVar1;
  *(float *)((int)this + 0x5c) = (float)fVar1;
  *(float *)((int)this + 100) = (float)fVar1;
  return 0;
}

/* ref: FUN_00d149e0 */
unsigned int F_00d149e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd149e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint * puVar2;
  uint * puVar3;
  int local_8;
  
  F_00d0c080(param_1,param_2);
  puVar3 = (uint *)(param_1 + 0x28);
  local_8 = 2;
  puVar2 = (uint *)(param_2 + 0x20);
  do {
    uVar1 = *((uint *)GEN_TOP(((param_1 - param_2) + (int)puVar2)));
    *puVar2 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = puVar3[-1];
    puVar2[1] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = *puVar3;
    puVar2[2] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = puVar3[1];
    puVar2[3] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    puVar3 = puVar3 + 4;
    local_8 = local_8 + -1;
    puVar2 = puVar2 + 4;
  } while (local_8 != 0);
  uVar1 = *(uint *)(param_1 + 0x40);
  *(uint *)(param_2 + 0x40) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x44);
  *(uint *)(param_2 + 0x44) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x48);
  *(uint *)(param_2 + 0x48) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x4c);
  *(uint *)(param_2 + 0x4c) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x50);
  *(uint *)(param_2 + 0x50) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x54);
  *(uint *)(param_2 + 0x54) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x58);
  *(uint *)(param_2 + 0x58) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x5c);
  *(uint *)(param_2 + 0x5c) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x60);
  *(uint *)(param_2 + 0x60) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 100);
  *(uint *)(param_2 + 100) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x68);
  *(undefined4 *)(param_2 + 0x6c) = 0;
  *(uint *)(param_2 + 0x68) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineSound::vf0 */
uint F_00d14b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd14b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1132c6c));
  F_00d23680(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00d14ba0 */
unsigned int F_00d14ba0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd14ba0u, gen_a0, 0u, gen_a2, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  float in_xmm0 = (float)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined1 in_register_00001204 [12];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  if ((REFG(undefined4, 0x15d9340) & 1) == 0) {
    REFG(undefined4, 0x15d9340) = REFG(undefined4, 0x15d9340) | 1;
    *(uint *)&REFG(undefined, 0x15d9330) = *(uint *)&REFG(undefined, 0x1132ed0);
    REFG(uint, 0x015d9334) = *(uint *)&REFG(undefined, 0x1132ed4);
    REFG(uint, 0x015d9338) = *(uint *)&REFG(undefined, 0x1132ed8);
    REFG(uint, 0x015d933c) = *(uint *)&REFG(undefined, 0x1132edc);
  }
  if ((REFG(undefined4, 0x15d9340) & 2) == 0) {
    REFG(undefined4, 0x15d9340) = REFG(undefined4, 0x15d9340) | 2;
    *(uint *)&REFG(undefined, 0x15d9320) = *(uint *)&REFG(undefined, 0x1132ee0);
    REFG(uint, 0x015d9324) = *(uint *)&REFG(undefined, 0x1132ee4);
    REFG(uint, 0x015d9328) = *(uint *)&REFG(undefined, 0x1132ee8);
    REFG(uint, 0x015d932c) = *(uint *)&REFG(undefined, 0x1132eec);
  }
  if ((REFG(undefined4, 0x15d9340) & 4) == 0) {
    REFG(undefined4, 0x15d9340) = REFG(undefined4, 0x15d9340) | 4;
    *(uint *)&REFG(undefined, 0x15d9310) = *(uint *)&REFG(undefined, 0x1132ef0);
    REFG(uint, 0x015d9314) = *(uint *)&REFG(undefined, 0x1132ef4);
    REFG(uint, 0x015d9318) = *(uint *)&REFG(undefined, 0x1132ef8);
    REFG(uint, 0x015d931c) = *(uint *)&REFG(undefined, 0x1132efc);
  }
  uVar16 = (uint)(*(float *)&REFG(undefined, 0x1132fa4) * (*(float *)((char *)&in_register_00001204 + 0)));
  uVar19 = (uint)(*(float *)&REFG(undefined, 0x1132fa8) * (*(float *)((char *)&in_register_00001204 + 4)));
  uVar22 = (uint)(*(float *)&REFG(undefined, 0x1132fac) * (*(float *)((char *)&in_register_00001204 + 8)));
  uVar2 = (int)(*(float *)&REFG(undefined, 0x1132fa0) * in_xmm0) & *(uint *)&REFG(undefined, 0x15d9330);
  uVar5 = uVar16 & REFG(uint, 0x015d9334);
  uVar9 = uVar19 & REFG(uint, 0x015d9338);
  uVar25 = uVar22 & REFG(uint, 0x015d933c);
  fVar14 = (float)(int)(*(float *)&REFG(undefined, 0x1132fa0) * in_xmm0);
  fVar17 = (float)(int)uVar16;
  fVar20 = (float)(int)uVar19;
  fVar23 = (float)(int)uVar22;
  fVar14 = (in_xmm0 - *(float *)&REFG(undefined, 0x1132f90) * fVar14) - *(float *)&REFG(undefined, 0x1132f80) * fVar14;
  fVar10 = ((*(float *)((char *)&in_register_00001204 + 0)) - *(float *)&REFG(undefined, 0x1132f94) * fVar17) -
           *(float *)&REFG(undefined, 0x1132f84) * fVar17;
  fVar11 = ((*(float *)((char *)&in_register_00001204 + 4)) - *(float *)&REFG(undefined, 0x1132f98) * fVar20) -
           *(float *)&REFG(undefined, 0x1132f88) * fVar20;
  fVar12 = ((*(float *)((char *)&in_register_00001204 + 8)) - *(float *)&REFG(undefined, 0x1132f9c) * fVar23) -
           *(float *)&REFG(undefined, 0x1132f8c) * fVar23;
  fVar17 = fVar14 * fVar14;
  fVar20 = fVar10 * fVar10;
  fVar23 = fVar11 * fVar11;
  fVar13 = fVar12 * fVar12;
  fVar15 = ((*(float *)&REFG(undefined, 0x1132f70) * fVar17 + *(float *)&REFG(undefined, 0x1132f50)) * fVar17 +
           *(float *)&REFG(undefined, 0x1132f40)) * fVar17 + *(float *)&REFG(undefined, 0x1132f20);
  fVar18 = ((*(float *)&REFG(undefined, 0x1132f74) * fVar20 + *(float *)&REFG(undefined, 0x1132f54)) * fVar20 +
           *(float *)&REFG(undefined, 0x1132f44)) * fVar20 + *(float *)&REFG(undefined, 0x1132f24);
  fVar21 = ((*(float *)&REFG(undefined, 0x1132f78) * fVar23 + *(float *)&REFG(undefined, 0x1132f58)) * fVar23 +
           *(float *)&REFG(undefined, 0x1132f48)) * fVar23 + *(float *)&REFG(undefined, 0x1132f28);
  fVar24 = ((*(float *)&REFG(undefined, 0x1132f7c) * fVar13 + *(float *)&REFG(undefined, 0x1132f5c)) * fVar13 +
           *(float *)&REFG(undefined, 0x1132f4c)) * fVar13 + *(float *)&REFG(undefined, 0x1132f2c);
  fVar14 = ((*(float *)&REFG(undefined, 0x1132f60) * fVar17 + *(float *)&REFG(undefined, 0x1132f30)) * fVar17 +
           *(float *)&REFG(undefined, 0x1132f10)) * (fVar17 * fVar14) + fVar14;
  fVar10 = ((*(float *)&REFG(undefined, 0x1132f64) * fVar20 + *(float *)&REFG(undefined, 0x1132f34)) * fVar20 +
           *(float *)&REFG(undefined, 0x1132f14)) * (fVar20 * fVar10) + fVar10;
  fVar11 = ((*(float *)&REFG(undefined, 0x1132f68) * fVar23 + *(float *)&REFG(undefined, 0x1132f38)) * fVar23 +
           *(float *)&REFG(undefined, 0x1132f18)) * (fVar23 * fVar11) + fVar11;
  fVar12 = ((*(float *)&REFG(undefined, 0x1132f6c) * fVar13 + *(float *)&REFG(undefined, 0x1132f3c)) * fVar13 +
           *(float *)&REFG(undefined, 0x1132f1c)) * (fVar13 * fVar12) + fVar12;
  uVar16 = -(uint)((float)(int)(uVar2 & *(uint *)&REFG(undefined, 0x15d9320)) == *(float *)&REFG(undefined, 0x1132f00));
  uVar19 = -(uint)((float)(int)(uVar5 & REFG(uint, 0x015d9324)) == *(float *)&REFG(undefined, 0x1132f04));
  uVar22 = -(uint)((float)(int)(uVar9 & REFG(uint, 0x015d9328)) == *(float *)&REFG(undefined, 0x1132f08));
  uVar6 = -(uint)((float)(int)(uVar25 & REFG(uint, 0x015d932c)) == *(float *)&REFG(undefined, 0x1132f0c));
  fVar23 = gen_bits2f(uVar16 & (uint)gen_fl2bits(fVar14) | ~uVar16 & (uint)gen_fl2bits(fVar15));
  fVar13 = gen_bits2f(uVar19 & (uint)gen_fl2bits(fVar10) | ~uVar19 & (uint)gen_fl2bits(fVar18));
  fVar26 = gen_bits2f(uVar22 & (uint)gen_fl2bits(fVar11) | ~uVar22 & (uint)gen_fl2bits(fVar21));
  fVar27 = gen_bits2f(uVar6 & (uint)gen_fl2bits(fVar12) | ~uVar6 & (uint)gen_fl2bits(fVar24));
  uVar16 = -(uint)((float)(int)(*(uint *)&REFG(undefined, 0x15d9320) + uVar2 & *(uint *)&REFG(undefined, 0x15d9320)) ==
                  *(float *)&REFG(undefined, 0x1132f00));
  uVar6 = -(uint)((float)(int)(REFG(uint, 0x015d9324) + uVar5 & REFG(uint, 0x015d9324)) == *(float *)&REFG(undefined, 0x1132f04));
  uVar3 = -(uint)((float)(int)(REFG(uint, 0x015d9328) + uVar9 & REFG(uint, 0x015d9328)) == *(float *)&REFG(undefined, 0x1132f08));
  uVar7 = -(uint)((float)(int)(REFG(uint, 0x015d932c) + uVar25 & REFG(uint, 0x015d932c)) == *(float *)&REFG(undefined, 0x1132f0c));
  uVar19 = -(uint)((float)(int)(uVar2 & *(uint *)&REFG(undefined, 0x15d9310)) == *(float *)&REFG(undefined, 0x1132f00));
  uVar1 = -(uint)((float)(int)(uVar5 & REFG(uint, 0x015d9314)) == *(float *)&REFG(undefined, 0x1132f04));
  uVar4 = -(uint)((float)(int)(uVar9 & REFG(uint, 0x015d9318)) == *(float *)&REFG(undefined, 0x1132f08));
  uVar8 = -(uint)((float)(int)(uVar25 & REFG(uint, 0x015d931c)) == *(float *)&REFG(undefined, 0x1132f0c));
  uVar22 = -(uint)((float)(int)(*(uint *)&REFG(undefined, 0x15d9320) + uVar2 & *(uint *)&REFG(undefined, 0x15d9310)) ==
                  *(float *)&REFG(undefined, 0x1132f00));
  uVar2 = -(uint)((float)(int)(REFG(uint, 0x015d9324) + uVar5 & REFG(uint, 0x015d9314)) == *(float *)&REFG(undefined, 0x1132f04));
  uVar5 = -(uint)((float)(int)(REFG(uint, 0x015d9328) + uVar9 & REFG(uint, 0x015d9318)) == *(float *)&REFG(undefined, 0x1132f08));
  uVar9 = -(uint)((float)(int)(REFG(uint, 0x015d932c) + uVar25 & REFG(uint, 0x015d931c)) == *(float *)&REFG(undefined, 0x1132f0c));
  fVar28 = *(float *)&REFG(undefined, 0x1132f04) - fVar13;
  fVar29 = *(float *)&REFG(undefined, 0x1132f08) - fVar26;
  fVar30 = *(float *)&REFG(undefined, 0x1132f0c) - fVar27;
  fVar15 = gen_bits2f(uVar16 & (uint)gen_fl2bits(fVar14) | ~uVar16 & (uint)gen_fl2bits(fVar15));
  fVar18 = gen_bits2f(uVar6 & (uint)gen_fl2bits(fVar10) | ~uVar6 & (uint)gen_fl2bits(fVar18));
  fVar11 = gen_bits2f(uVar3 & (uint)gen_fl2bits(fVar11) | ~uVar3 & (uint)gen_fl2bits(fVar21));
  fVar12 = gen_bits2f(uVar7 & (uint)gen_fl2bits(fVar12) | ~uVar7 & (uint)gen_fl2bits(fVar24));
  fVar14 = *(float *)&REFG(undefined, 0x1132f00) - fVar15;
  fVar17 = *(float *)&REFG(undefined, 0x1132f04) - fVar18;
  fVar10 = *(float *)&REFG(undefined, 0x1132f08) - fVar11;
  fVar20 = *(float *)&REFG(undefined, 0x1132f0c) - fVar12;
  *param_3 = ~uVar19 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1132f00) - fVar23) |
             (uint)gen_fl2bits(fVar23) & uVar19;
  param_3[1] = ~uVar1 & (uint)gen_fl2bits(fVar28) | (uint)gen_fl2bits(fVar13) & uVar1;
  param_3[2] = ~uVar4 & (uint)gen_fl2bits(fVar29) | (uint)gen_fl2bits(fVar26) & uVar4;
  param_3[3] = ~uVar8 & (uint)gen_fl2bits(fVar30) | (uint)gen_fl2bits(fVar27) & uVar8;
  *in_ecx = ~uVar22 & (uint)gen_fl2bits(fVar14) | (uint)gen_fl2bits(fVar15) & uVar22;
  in_ecx[1] = ~uVar2 & (uint)gen_fl2bits(fVar17) | (uint)gen_fl2bits(fVar18) & uVar2;
  in_ecx[2] = ~uVar5 & (uint)gen_fl2bits(fVar10) | (uint)gen_fl2bits(fVar11) & uVar5;
  in_ecx[3] = ~uVar9 & (uint)gen_fl2bits(fVar20) | (uint)gen_fl2bits(fVar12) & uVar9;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointDirSound::vf7 */
unsigned int F_00d14d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd14d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  
  F_00d21390(this,param_1);
  iVar1 = *(int *)(this + 0x128);
  *(undefined4 *)(iVar1 + 0x20) = *param_1;
  *(undefined4 *)(iVar1 + 0x24) = param_1[1];
  *(undefined4 *)(iVar1 + 0x28) = param_1[2];
  *(undefined4 *)(iVar1 + 0x2c) = param_1[3];
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointDirSound::vf8 */
unsigned int F_00d14d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd14d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  
  F_00d213a0((undefined *)this,param_1);
  iVar1 = *(int *)(this + 0x128);
  *(undefined4 *)(iVar1 + 0x20) = *param_1;
  *(undefined4 *)(iVar1 + 0x24) = param_1[1];
  *(undefined4 *)(iVar1 + 0x28) = param_1[2];
  *(undefined4 *)(iVar1 + 0x2c) = param_1[3];
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointDirSound::vf9 */
uint F_00d14db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd14db0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  
  F_00d213b0(this,param_1,param_2);
  iVar4 = *(int *)(this + 0x128);
  fVar1 = param_1[3];
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  *(float *)(iVar4 + 0x20) = *(float *)(iVar4 + 0x20) + *param_1;
  *(float *)(iVar4 + 0x24) = *(float *)(iVar4 + 0x24) + fVar2;
  *(float *)(iVar4 + 0x28) = *(float *)(iVar4 + 0x28) + fVar3;
  *(float *)(iVar4 + 0x2c) = *(float *)(iVar4 + 0x2c) + fVar1;
  uVar5 = *(uint *)(this + 0x128);
  *(float *)(uVar5 + 0x2c) = (float)(float10)1;
  return uVar5;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointDirSound::vf12 */
uint F_00d14e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd14e70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x80);
  return (uint)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointDirSound::vf13 */
uint F_00d14e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd14e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float10 fVar1;
  
  fVar1 = F_00d22f40(this,GEN_TOF(*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x68)))),
                       *((byte *)GEN_TOP((*(int *)(this + 0x128) + 4))) >> 2 & 1);
  *param_1 = ((float)GEN_TOF((fVar1 * (float10)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x60))))));
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointDirSound::vf18 */
uint F_00d14ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd14ed0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_3 < 0x80) {
    return 0;
  }
  puVar2 = *(undefined4 * PTR32 *)(in_ecx + 0x128);
  puVar3 = param_2;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0x80;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointDirSound::vf19 */
byte F_00d14f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd14f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x128);
  *param_1 = *(undefined4 *)(iVar1 + 0x48);
  *param_2 = *(undefined4 *)(iVar1 + 0x4c);
  *param_3 = *(undefined4 *)(iVar1 + 0x6c);
  *param_4 = *(undefined4 *)(iVar1 + 0x68);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointDirSound::vf20 */
uint F_00d14f40(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xd14f40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x128);
  *(float *)(uVar1 + 0x48) = param_2;
  *((float *)GEN_TOP((*(int *)(in_ecx + 0x128) + 0x4c))) = param_3;
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointDirSound::vf25 */
uint F_00d15080(unsigned int gen_a0)
{
  GEN_ENTER(0xd15080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
  uVar1 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar1 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x90);
  }
  F_00c47745((*(uint *)(gen_frame + 0x9c)) ^ (uint)(uint)(gen_frame + 0xa0));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointDirSound::vf27 */
byte F_00d15100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd15100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = param_1;
  puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  bVar1 = F_00d228c0(this);
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointDirSound::vf30 */
byte F_00d159e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd159e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * _File;
  byte bVar1;
  int iVar2;
  
  _File = param_1;
  bVar1 = F_00d21f00((undefined *)this,param_1);
  if (bVar1 == 0) {
    return 0;
  }
  iVar2 = *(int *)(this + 0x128);
  F_00c49386(param_1,"Position = %f %f %f\n",GEN_LO32((undefined8)gen_d2bits((double)*(float *)(iVar2 + 0x20))),GEN_HI32((undefined8)gen_d2bits((double)*(float *)(iVar2 + 0x20))),GEN_LO32((undefined8)gen_d2bits((double)*(float *)(iVar2 + 0x24))),GEN_HI32((undefined8)gen_d2bits((double)*(float *)(iVar2 + 0x24))),GEN_LO32((undefined8)gen_d2bits((double)*(float *)(iVar2 + 0x28))),GEN_HI32((undefined8)gen_d2bits((double)*(float *)(iVar2 + 0x28))));
  iVar2 = *(int *)(this + 0x128);
  F_00c49386(param_1,"Direction = %f %f %f\n",GEN_LO32((undefined8)gen_d2bits((double)*(float *)(iVar2 + 0x30))),GEN_HI32((undefined8)gen_d2bits((double)*(float *)(iVar2 + 0x30))),GEN_LO32((undefined8)gen_d2bits((double)*(float *)(iVar2 + 0x34))),GEN_HI32((undefined8)gen_d2bits((double)*(float *)(iVar2 + 0x34))),GEN_LO32((undefined8)gen_d2bits((double)*(float *)(iVar2 + 0x38))),GEN_HI32((undefined8)gen_d2bits((double)*(float *)(iVar2 + 0x38))));
  F_00c49386(param_1,"RangeX = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x40))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x40))))));
  F_00c49386(param_1,"RangeY = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x44))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x44))))));
  F_00c49386(param_1,"MaxRange = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x48))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x48))))));
  F_00c49386(param_1,"MinRange = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x4c))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x4c))))));
  param_1 = (undefined *)0x0;
  iVar2 = 0x50;
  do {
    F_00c49386(_File,"Height[%d] = %f\n",param_1,
             (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((iVar2 + *(int *)(this + 0x128))))),
             (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((iVar2 + *(int *)(this + 0x128))))) >> 0x20
                  ));
    param_1 = (undefined *)((int)param_1 + (1) * 32);
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x58);
  F_00c49386(_File,"RangeVolume = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x58))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x58))))));
  F_00c49386(_File,"Volume = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x5c))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x5c))))));
  F_00c49386(_File,"Pitch = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x60))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x60))))));
  F_00c49386(_File,"ReverbFac = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 100))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 100))))));
  F_00c49386(_File,"DopplerFac = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x68))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x68))))));
  F_00c49386(_File,"[EndOfSoundObject]\n\n");
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointDirSound::vf31 */
byte F_00d15b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd15b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  char * pcVar2;
  int iVar3;
  uint uVar4;
  byte * pbVar5;
  bool bVar6;
  double dVar7;
  
  pcVar2 = "Position";
  pbVar5 = (byte *)param_2;
  do {
    bVar1 = *pcVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00d15bc1: ;
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00d15bc6;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00d15bc1;
    pcVar2 = pcVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d15bc6: ;
  if (iVar3 == 0) {
    pcVar2 = (char *)F_00d00d00(0,0);
    if (pcVar2 != (char *)0x0) {
      dVar7 = F_00c4acaa(pcVar2);
      *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x20))) = (float)dVar7;
      pcVar2 = (char *)F_00d00d00(0,0);
      if (pcVar2 != (char *)0x0) {
        dVar7 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x24))) = (float)dVar7;
        pcVar2 = (char *)F_00d00d00(0,0);
        if (pcVar2 != (char *)0x0) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x28))) = (float)dVar7;
          return 1;
        }
      }
    }
  }
  else {
    pcVar2 = "Direction";
    pbVar5 = (byte *)param_2;
    do {
      bVar1 = *pcVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00d15c75: ;
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00d15c7a;
      }
      if (bVar1 == 0) break;
      bVar1 = pcVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00d15c75;
      pcVar2 = pcVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00d15c7a: ;
    if (iVar3 == 0) {
      pcVar2 = (char *)F_00d00d00(0,0);
      if (pcVar2 != (char *)0x0) {
        dVar7 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x30))) = (float)dVar7;
        pcVar2 = (char *)F_00d00d00(0,0);
        if (pcVar2 != (char *)0x0) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x34))) = (float)dVar7;
          pcVar2 = (char *)F_00d00d00(0,0);
          if (pcVar2 != (char *)0x0) {
            dVar7 = F_00c4acaa(pcVar2);
            *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x38))) = (float)dVar7;
            return 1;
          }
        }
      }
    }
    else {
      pcVar2 = "RangeX";
      pbVar5 = (byte *)param_2;
      do {
        bVar1 = *pcVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00d15d30: ;
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00d15d35;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00d15d30;
        pcVar2 = pcVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00d15d35: ;
      if (iVar3 == 0) {
        pcVar2 = (char *)F_00d00d00(0,0);
        if (pcVar2 != (char *)0x0) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x40))) = (float)dVar7;
          return 1;
        }
      }
      else {
        pcVar2 = "RangeY";
        pbVar5 = (byte *)param_2;
        do {
          bVar1 = *pcVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00d15d92: ;
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_00d15d97;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00d15d92;
          pcVar2 = pcVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00d15d97: ;
        if (iVar3 == 0) {
          pcVar2 = (char *)F_00d00d00(0,0);
          if (pcVar2 != (char *)0x0) {
            dVar7 = F_00c4acaa(pcVar2);
            *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x44))) = (float)dVar7;
            return 1;
          }
        }
        else {
          pcVar2 = "MaxRange";
          pbVar5 = (byte *)param_2;
          do {
            bVar1 = *pcVar2;
            bVar6 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_00d15df4: ;
              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
              goto LAB_00d15df9;
            }
            if (bVar1 == 0) break;
            bVar1 = pcVar2[1];
            bVar6 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00d15df4;
            pcVar2 = pcVar2 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_00d15df9: ;
          if (iVar3 == 0) {
            pcVar2 = (char *)F_00d00d00(0,0);
            if (pcVar2 != (char *)0x0) {
              dVar7 = F_00c4acaa(pcVar2);
              *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x48))) = (float)dVar7;
              return 1;
            }
          }
          else {
            pcVar2 = "MinRange";
            pbVar5 = (byte *)param_2;
            do {
              bVar1 = *pcVar2;
              bVar6 = bVar1 < *pbVar5;
              if (bVar1 != *pbVar5) {
LAB_00d15e56: ;
                iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                goto LAB_00d15e5b;
              }
              if (bVar1 == 0) break;
              bVar1 = pcVar2[1];
              bVar6 = bVar1 < pbVar5[1];
              if (bVar1 != pbVar5[1]) goto LAB_00d15e56;
              pcVar2 = pcVar2 + 2;
              pbVar5 = pbVar5 + 2;
            } while (bVar1 != 0);
            iVar3 = 0;
LAB_00d15e5b: ;
            if (iVar3 == 0) {
              pcVar2 = (char *)F_00d00d00(0,0);
              if (pcVar2 != (char *)0x0) {
                dVar7 = F_00c4acaa(pcVar2);
                *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x4c))) = (float)dVar7;
                return 1;
              }
            }
            else {
              pcVar2 = "Height";
              pbVar5 = (byte *)param_2;
              do {
                bVar1 = *pcVar2;
                bVar6 = bVar1 < *pbVar5;
                if (bVar1 != *pbVar5) {
LAB_00d15eb8: ;
                  iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                  goto LAB_00d15ebd;
                }
                if (bVar1 == 0) break;
                bVar1 = pcVar2[1];
                bVar6 = bVar1 < pbVar5[1];
                if (bVar1 != pbVar5[1]) goto LAB_00d15eb8;
                pcVar2 = pcVar2 + 2;
                pbVar5 = pbVar5 + 2;
              } while (bVar1 != 0);
              iVar3 = 0;
LAB_00d15ebd: ;
              if (iVar3 == 0) {
                uVar4 = F_00d00d00(0,0);
                if (uVar4 != 0) {
                  uVar4 = F_00c4c74c(uVar4);
                  pcVar2 = (char *)F_00d00d00(0,0);
                  if (pcVar2 != (char *)0x0) {
                    dVar7 = F_00c4acaa(pcVar2);
                    *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x50 + uVar4 * 4))) = (float)dVar7;
                    return 1;
                  }
                }
              }
              else {
                pcVar2 = "RangeVolume";
                pbVar5 = (byte *)param_2;
                do {
                  bVar1 = *pcVar2;
                  bVar6 = bVar1 < *pbVar5;
                  if (bVar1 != *pbVar5) {
LAB_00d15f37: ;
                    iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                    goto LAB_00d15f3c;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pcVar2[1];
                  bVar6 = bVar1 < pbVar5[1];
                  if (bVar1 != pbVar5[1]) goto LAB_00d15f37;
                  pcVar2 = pcVar2 + 2;
                  pbVar5 = pbVar5 + 2;
                } while (bVar1 != 0);
                iVar3 = 0;
LAB_00d15f3c: ;
                if (iVar3 == 0) {
                  pcVar2 = (char *)F_00d00d00(0,0);
                  if (pcVar2 != (char *)0x0) {
                    dVar7 = F_00c4acaa(pcVar2);
                    *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x58))) = (float)dVar7;
                    return 1;
                  }
                }
                else {
                  pcVar2 = "Volume";
                  pbVar5 = (byte *)param_2;
                  do {
                    bVar1 = *pcVar2;
                    bVar6 = bVar1 < *pbVar5;
                    if (bVar1 != *pbVar5) {
LAB_00d15fa0: ;
                      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                      goto LAB_00d15fa5;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pcVar2[1];
                    bVar6 = bVar1 < pbVar5[1];
                    if (bVar1 != pbVar5[1]) goto LAB_00d15fa0;
                    pcVar2 = pcVar2 + 2;
                    pbVar5 = pbVar5 + 2;
                  } while (bVar1 != 0);
                  iVar3 = 0;
LAB_00d15fa5: ;
                  if (iVar3 == 0) {
                    pcVar2 = (char *)F_00d00d00(0,0);
                    if (pcVar2 != (char *)0x0) {
                      dVar7 = F_00c4acaa(pcVar2);
                      *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x5c))) = (float)dVar7;
                      return 1;
                    }
                  }
                  else {
                    pcVar2 = "Pitch";
                    pbVar5 = (byte *)param_2;
                    do {
                      bVar1 = *pcVar2;
                      bVar6 = bVar1 < *pbVar5;
                      if (bVar1 != *pbVar5) {
LAB_00d16002: ;
                        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                        goto LAB_00d16007;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pcVar2[1];
                      bVar6 = bVar1 < pbVar5[1];
                      if (bVar1 != pbVar5[1]) goto LAB_00d16002;
                      pcVar2 = pcVar2 + 2;
                      pbVar5 = pbVar5 + 2;
                    } while (bVar1 != 0);
                    iVar3 = 0;
LAB_00d16007: ;
                    if (iVar3 == 0) {
                      pcVar2 = (char *)F_00d00d00(0,0);
                      if (pcVar2 != (char *)0x0) {
                        dVar7 = F_00c4acaa(pcVar2);
                        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x60))) = (float)dVar7;
                        return 1;
                      }
                    }
                    else {
                      pcVar2 = "ReverbFac";
                      pbVar5 = (byte *)param_2;
                      do {
                        bVar1 = *pcVar2;
                        bVar6 = bVar1 < *pbVar5;
                        if (bVar1 != *pbVar5) {
LAB_00d16064: ;
                          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                          goto LAB_00d16069;
                        }
                        if (bVar1 == 0) break;
                        bVar1 = pcVar2[1];
                        bVar6 = bVar1 < pbVar5[1];
                        if (bVar1 != pbVar5[1]) goto LAB_00d16064;
                        pcVar2 = pcVar2 + 2;
                        pbVar5 = pbVar5 + 2;
                      } while (bVar1 != 0);
                      iVar3 = 0;
LAB_00d16069: ;
                      if (iVar3 == 0) {
                        pcVar2 = (char *)F_00d00d00(0,0);
                        if (pcVar2 != (char *)0x0) {
                          dVar7 = F_00c4acaa(pcVar2);
                          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 100))) = (float)dVar7;
                          return 1;
                        }
                      }
                      else {
                        pcVar2 = "DopplerFac";
                        pbVar5 = (byte *)param_2;
                        do {
                          bVar1 = *pcVar2;
                          bVar6 = bVar1 < *pbVar5;
                          if (bVar1 != *pbVar5) {
LAB_00d160c6: ;
                            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                            goto LAB_00d160cb;
                          }
                          if (bVar1 == 0) break;
                          bVar1 = pcVar2[1];
                          bVar6 = bVar1 < pbVar5[1];
                          if (bVar1 != pbVar5[1]) goto LAB_00d160c6;
                          pcVar2 = pcVar2 + 2;
                          pbVar5 = pbVar5 + 2;
                        } while (bVar1 != 0);
                        iVar3 = 0;
LAB_00d160cb: ;
                        if (iVar3 != 0) {
                          bVar1 = F_00d22040(param_1,param_2);
                          return bVar1;
                        }
                        pcVar2 = (char *)F_00d00d00(0,0);
                        if (pcVar2 != (char *)0x0) {
                          dVar7 = F_00c4acaa(pcVar2);
                          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x68))) = (float)dVar7;
                          return 1;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointDirSound::vf26 */
uint F_00d16530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd16530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = (undefined4 *)F_00d22da0(this,param_1,0x80);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0xf4))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))));
  if (uVar2 != 0) {
    puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
    puVar5 = puVar1;
    for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    return (uint)(puVar1 + 0x20);
  }
  F_00d170e0(*(undefined4 *)(this + 0x128),(uint)puVar1);
  return (uint)(puVar1 + 0x20);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointDirSound::vf28 */
uint F_00d16590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd16590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar2 = *(uint *)(this + 0x1c);
  if (*((int *)GEN_TOP((*(int *)(uVar2 + 0xc) + 0x2f8))) != 0) {
    F_00d22b20(this,&(*(undefined2 *)(gen_frame + 0x8)));
    (*(undefined2 *)(gen_frame + 0x8)) = (undefined2)param_1;
    (*(undefined2 *)(gen_frame + 0xa)) = 0x50;
    uVar3 = F_00427d90();
    iVar1 = *(int *)(this + 0x128);
    (*(ulonglong *)(gen_frame + 0x10)) = uVar3;
    (*(undefined4 *)(gen_frame + 0x4c)) = *(undefined4 *)(iVar1 + 0x48);
    (*(undefined4 *)(gen_frame + 0x50)) = *(undefined4 *)(iVar1 + 0x4c);
    (*(undefined4 *)(gen_frame + 0x54)) = *(undefined4 *)(iVar1 + 0x44);
    (*(undefined4 *)(gen_frame + 0x40)) = *(undefined4 *)(iVar1 + 0x30);
    (*(undefined4 *)(gen_frame + 0x44)) = *(undefined4 *)(iVar1 + 0x34);
    (*(undefined4 *)(gen_frame + 0x48)) = *(undefined4 *)(iVar1 + 0x38);
    F_00d16fb0(&(*(undefined2 *)(gen_frame + 0x8)),&(*(undefined2 *)(gen_frame + 0x8)));
    uVar2 = F_00d00b10(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))),&(*(undefined2 *)(gen_frame + 0x8)),0x50);
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: FUN_00d16670 */
uint F_00d16670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd16670u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  int * this_00;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  F_00d22580(this,param_1,param_2,param_3);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1132fb4));
  *(uint *)((int)this + 0xb0) =
       *(uint *)((int)this + 0xb0) ^ ((param_4 & 0xff) << 4 ^ *(uint *)((int)this + 0xb0)) & 0x10;
  if ((char)param_4 == '\0') {
    *(undefined4 * PTR32 *)((int)this + 0x128) = param_1;
  }
  else {
    *(undefined4 * PTR32 *)((int)this + 0x128) = (undefined4 *)((int)this + 0x130);
    puVar3 = param_1;
    puVar4 = (undefined4 *)((int)this + 0x130);
    for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    if (*((char *)GEN_TOP((*(int *)((int)this + 0x128) + 3))) == '\0') {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x128) + 0x70))) = *(undefined4 *)&REFG(undefined, 0x110f9d0);
    }
  }
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x128);
  F_00d228c0(this);
  *((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x6c))) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x6c))) *
              (float10)*(double *)&REFG(undefined, 0x109cac8))));
  F_00d20fe0(this,(uint)(~(*((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 4))) >> 5) & 1));
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  uVar1 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar1 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x90);
  }
  F_00d16590(this,0x401);
  F_00c47745((*(uint *)(gen_frame + 0x9c)) ^ (uint)(uint)(gen_frame + 0xa0));
  return (uint)this;
}

/* ref: FUN_00d167b0 */
uint F_00d167b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd167b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  int iVar1;
  int * this_00;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  F_00d22720(this,param_1,param_2);
  *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) | 0x10;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1132fb4));
  *(int *)((int)this + 0x128) = (int)this + 0x130;
  F_00d17040((int)this + 0x130);
  iVar1 = *(int *)((int)this + 0x128);
  *(int *)((int)this + 0x18) = iVar1;
  *(float *)(iVar1 + 0x6c) =
       ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0x6c) * (float10)*(double *)&REFG(undefined, 0x109cac8))));
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  uVar2 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar2 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x90);
  }
  F_00d16590(this,0x401);
  F_00c47745((*(uint *)(gen_frame + 0x9c)) ^ (uint)(uint)(gen_frame + 0xa0));
  return (uint)this;
}

/* ref: FUN_00d16880 */
float F_00d16880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd16880u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float * pfVar1;
  float10 fVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  pfVar1 = (float *)F_00c34320(param_2,&(*(float *)(gen_frame + 0x0)),param_1 + 0x20);
  (*(float *)(gen_frame + 0x1c)) = *pfVar1;
  (*(float *)(gen_frame + 0x20)) = pfVar1[1];
  (*(float *)(gen_frame + 0x24)) = pfVar1[2];
  (*(float *)(gen_frame + 0x28)) = pfVar1[3];
  if ((*(byte *)(param_1 + 4) & 4) == 0) {
    (*(float *)(gen_frame + 0x2c)) = pfVar1[1];
    F_00d218f0(param_3[1],&(*(float *)(gen_frame + 0x2c)),param_1,param_1 + 0x50);
    (*(float *)(gen_frame + 0x20)) = (*(float *)(gen_frame + 0x2c));
  }
  fVar4 = *param_3 - (*(float *)(gen_frame + 0x1c));
  fVar5 = param_3[1] - (*(float *)(gen_frame + 0x20));
  fVar6 = param_3[2] - (*(float *)(gen_frame + 0x24));
  fVar7 = param_3[3] - (*(float *)(gen_frame + 0x28));
  (*(float *)(gen_frame + 0x0)) = fVar4;
  (*(float *)(gen_frame + 0x4)) = fVar5;
  (*(float *)(gen_frame + 0x8)) = fVar6;
  (*(float *)(gen_frame + 0xc)) = fVar7;
  (*(float *)(gen_frame + 0x1c)) = fVar4;
  (*(float *)(gen_frame + 0x20)) = fVar5;
  (*(float *)(gen_frame + 0x24)) = fVar6;
  (*(float *)(gen_frame + 0x28)) = fVar7;
  fVar5 = fVar5 * fVar5;
  fVar6 = fVar6 * fVar6;
  fVar4 = SQRT((fVar6 + fVar4 * fVar4) + fVar5);
  (*(float *)(gen_frame + 0x0)) = fVar4;
  (*(float *)(gen_frame + 0x4)) = (fVar6 + fVar5) + fVar5;
  (*(float *)(gen_frame + 0x8)) = (fVar6 + fVar6) + fVar5;
  (*(float *)(gen_frame + 0xc)) = (fVar6 + fVar7 * fVar7) + fVar5;
  fVar2 = (float10)fVar4;
  fVar3 = (float10)*(float *)(param_1 + 0x4c);
  if (!(fVar2 <= fVar3) != ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar2)) || fVar3 == fVar2)) {
    fVar4 = ((float)GEN_TOF((fVar2 - (float10)*(float *)(param_1 + 0x4c))));
    (*(float *)(gen_frame + 0x2c)) = fVar4;
    return fVar4;
  }
  return *(float *)&REFG(undefined, 0x110f9d0);
}

/* ref: FUN_00d169c0 */
uint F_00d169c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd169c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x170];
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  code * pcVar5;
  ushort uVar6;
  byte bVar7;
  int * piVar8;
  float * pfVar9;
  undefined3 extraout_var = 0;
  undefined2 extraout_var_00 = 0;
  uint uVar10;
  float * pfVar11;
  undefined2 extraout_var_01 = 0;
  bool bVar12;
  bool bVar13;
  ushort uVar14;
  float10 fVar15;
  float10 fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  (*(uint *)(gen_frame + 0x15c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x160);
  piVar8 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  (*(float * PTR32 *)(gen_frame + 0x88)) = param_1;
  piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x98))(piVar8)));
  (*(int * PTR32 *)(gen_frame + 0x84)) = piVar8;
  pfVar9 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x5c))(piVar8,((undefined1 *)(gen_frame + 0xd0)))));
  if ((char)pfVar9 != '\0') {
    iVar1 = *(int *)((int)this + 0x128);
    (*(undefined4 *)(gen_frame + 0x110)) = *(undefined4 *)(iVar1 + 0x20);
    (*(float *)(gen_frame + 0x114)) = *(float *)(iVar1 + 0x24);
    (*(undefined4 *)(gen_frame + 0x118)) = *(undefined4 *)(iVar1 + 0x28);
    (*(undefined4 *)(gen_frame + 0x11c)) = *(undefined4 *)(iVar1 + 0x2c);
    if ((*(byte *)(iVar1 + 4) & 4) == 0) {
      (*(float *)(gen_frame + 0x8c)) = *(float *)(iVar1 + 0x24);
      ((code *)*(gen_code32 *)(*piVar8 + 0x30))(piVar8,&(*(float *)(gen_frame + 0x120)));
      bVar7 = F_00d218f0((*(float *)(gen_frame + 0x124)),&(*(float *)(gen_frame + 0x8c)),*(int *)((int)this + 0x128),
                           *(int *)((int)this + 0x128) + 0x50);
      pfVar9 = ((float *)GEN_TOP(CONCAT31(extraout_var,bVar7)));
      if (bVar7 != 1) goto LAB_00d16e42;
      (*(float *)(gen_frame + 0x114)) = (*(float *)(gen_frame + 0x8c));
    }
    pfVar9 = (float *)F_00c34320(((undefined1 *)(gen_frame + 0xd0)),&(*(float *)(gen_frame + 0x120)),&(*(undefined4 *)(gen_frame + 0x110)));
    fVar19 = *pfVar9;
    (*(float *)(gen_frame + 0x13c)) = fVar19;
    fVar2 = pfVar9[1];
    (*(float *)(gen_frame + 0x140)) = fVar2;
    fVar3 = pfVar9[2];
    (*(float *)(gen_frame + 0x144)) = fVar3;
    fVar4 = pfVar9[3];
    (*(float *)(gen_frame + 0x148)) = fVar4;
    *(float *)((int)this + 0x50) = fVar19;
    *(float *)((int)this + 0x54) = fVar2;
    *(float *)((int)this + 0x58) = fVar3;
    *(float *)((int)this + 0x5c) = fVar4;
    *(float *)((int)this + 0x60) = fVar19;
    fVar17 = fVar2 * fVar2;
    fVar18 = fVar3 * fVar3;
    *(float *)((int)this + 100) = fVar2;
    *(float *)((int)this + 0x68) = fVar3;
    *(float *)((int)this + 0x6c) = fVar4;
    iVar1 = *(int *)((int)this + 0x128);
    fVar19 = SQRT((fVar18 + fVar19 * fVar19) + fVar17);
    (*(float *)(gen_frame + 0x120)) = fVar19;
    (*(float *)(gen_frame + 0x124)) = (fVar18 + fVar17) + fVar17;
    (*(float *)(gen_frame + 0x128)) = (fVar18 + fVar18) + fVar17;
    (*(float *)(gen_frame + 0x12c)) = (fVar18 + fVar4 * fVar4) + fVar17;
    fVar15 = (float10)fVar19;
    fVar16 = (float10)*(float *)(iVar1 + 0x4c);
    bVar12 = (GEN_ISNAN(fVar16) || GEN_ISNAN(fVar15)) || fVar16 == fVar15;
    pfVar9 = ((float *)GEN_TOP(CONCAT22((short)((uint)gen_fl2bits(fVar4) >> 0x10),
                               (ushort)!(fVar15 <= fVar16) << 8 |
                               (ushort)(GEN_ISNAN(fVar16) || GEN_ISNAN(fVar15)) << 10 | (ushort)bVar12 << 0xe)));
    if (!(fVar15 <= fVar16) == bVar12) {
      fVar16 = (float10)*(float *)(iVar1 + 0x48);
      if (!(fVar15 <= fVar16) || ((GEN_ISNAN(fVar16) || GEN_ISNAN(fVar15)) || fVar16 == fVar15)) {
        fVar19 = ((float)GEN_TOF((fVar15 - (float10)*(float *)(iVar1 + 0x48))));
        (*(float *)(gen_frame + 0x8c)) = fVar19;
        *(*(float * PTR32 *)(gen_frame + 0x88)) = fVar19;
        fVar19 = ((float)GEN_TOF(((float10)fVar19 /
                        ((float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x4c))) -
                        (float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x48)))))));
        (*(float *)(gen_frame + 0x8c)) = fVar19;
        fVar19 = (float)((float10)1 - (float10)fVar19);
        (*(float *)(gen_frame + 0x8c)) = fVar19;
        *(*(float * PTR32 *)(gen_frame + 0x88)) = fVar19;
        fVar15 = (float10)fVar19 * (float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x58)));
      }
      else {
        fVar19 = ((float)GEN_TOF((fVar15 / (float10)*(float *)(iVar1 + 0x48))));
        (*(float *)(gen_frame + 0x8c)) = fVar19;
        fVar19 = (float)((float10)1 - (float10)fVar19);
        (*(float *)(gen_frame + 0x8c)) = fVar19;
        *(*(float * PTR32 *)(gen_frame + 0x88)) = fVar19;
        fVar15 = (float10)fVar19 *
                 ((float10)1 - (float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x58)))) +
                 (float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x58)));
      }
      *(*(float * PTR32 *)(gen_frame + 0x88)) = (float)fVar15;
      iVar1 = *(int *)((int)this + 0x128);
      (*(float *)(gen_frame + 0x120)) = *(float *)(iVar1 + 0x30);
      (*(float *)(gen_frame + 0x124)) = *(float *)(iVar1 + 0x34);
      (*(float *)(gen_frame + 0x128)) = *(float *)(iVar1 + 0x38);
      (*(float *)(gen_frame + 0x12c)) = *(float *)&REFG(undefined, 0x110f9d0);
      F_00c34430(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x120)));
      F_004eb4e0(((undefined1 *)(gen_frame + 0x40)),((undefined1 *)(gen_frame + 0x0)));
      (*(float *)(gen_frame + 0x14c)) = *(float *)&REFG(undefined, 0x110f9d0);
      (*(float *)(gen_frame + 0x150)) = *(float *)&REFG(undefined, 0x110f9d0);
      (*(float *)(gen_frame + 0x154)) = *(float *)&REFG(undefined, 0x110f9d0);
      (*(float *)(gen_frame + 0x70)) = *(float *)&REFG(undefined, 0x110f9d0);
      (*(float *)(gen_frame + 0x158)) = *(float *)&REFG(undefined, 0x110f9d0);
      (*(float *)(gen_frame + 0x12c)) = *(float *)&REFG(undefined, 0x110f9d0);
      (*(float *)(gen_frame + 0x12c)) = (float)(float10)1;
      (*(float *)(gen_frame + 0x78)) = *(float *)&REFG(undefined, 0x110f9d0);
      (*(float *)(gen_frame + 0x7c)) = (float)(float10)1;
      (*(float *)(gen_frame + 0x74)) = *(float *)&REFG(undefined, 0x110f9d0);
      ((code *)*(gen_code32 *)(*piVar8 + 0x30))(piVar8,&(*(float *)(gen_frame + 0x14c)));
      iVar1 = *(int *)((int)this + 0x128);
      F_004eb230(&(*(float *)(gen_frame + 0x14c)),iVar1 + 0x20);
      (*(float *)(gen_frame + 0x158)) = (float)(float10)1;
      pfVar9 = (float *)F_00c34320(((undefined1 *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0x120)),&(*(float *)(gen_frame + 0x14c)));
      (*(float *)(gen_frame + 0x14c)) = *pfVar9;
      (*(float *)(gen_frame + 0x150)) = pfVar9[1];
      (*(float *)(gen_frame + 0x154)) = pfVar9[2];
      (*(float *)(gen_frame + 0x158)) = pfVar9[3];
      if ((*(byte *)(iVar1 + 4) & 4) == 0) {
        fVar15 = F_00c4d1fa((float10)*pfVar9);
        fVar19 = (float)fVar15;
        (*(float *)(gen_frame + 0x8c)) = fVar19;
        fVar15 = (float10)fVar19;
        fVar16 = -(float10)*(float *)(iVar1 + 0x40) * (float10)REFG(double, 0x1088108);
        if ((fVar15 <= fVar16 && ((!GEN_ISNAN(fVar16) && !GEN_ISNAN(fVar15)) && fVar16 != fVar15)) ||
           (fVar16 = (float10)REFG(double, 0x1088108) * (float10)*(float *)(iVar1 + 0x40),
           !(fVar15 <= fVar16) != (GEN_ISNAN(fVar16) || GEN_ISNAN(fVar15)))) {
          *(*(float * PTR32 *)(gen_frame + 0x88)) = *(float *)&REFG(undefined, 0x110f9d0);
          pfVar9 = (*(float * PTR32 *)(gen_frame + 0x88));
          goto LAB_00d16e42;
        }
      }
      fVar15 = F_00c4d1fa((float10)(*(float *)(gen_frame + 0x14c)));
      pfVar9 = (*(float * PTR32 *)(gen_frame + 0x88));
      fVar19 = (float)fVar15;
      (*(float *)(gen_frame + 0x8c)) = fVar19;
      fVar15 = (float10)fVar19;
      fVar16 = -(float10)*(float *)(iVar1 + 0x44) * (float10)REFG(double, 0x1088108);
      uVar6 = (ushort)((GEN_ISNAN(fVar16) || GEN_ISNAN(fVar15)) || fVar16 == fVar15);
      uVar14 = (ushort)!(fVar15 <= fVar16) << 8 | (ushort)(GEN_ISNAN(fVar16) || GEN_ISNAN(fVar15)) << 10 |
               uVar6 << 0xe;
      if (!(fVar15 <= fVar16) || uVar6 != 0) {
        fVar16 = (float10)REFG(double, 0x1088108) * (float10)*(float *)(iVar1 + 0x44);
        bVar12 = GEN_ISNAN(fVar16) || GEN_ISNAN(fVar15);
        uVar14 = (ushort)!(fVar15 <= fVar16) << 8 | (ushort)bVar12 << 10 |
                 (ushort)(bVar12 || fVar16 == fVar15) << 0xe;
        if (!(fVar15 <= fVar16) == bVar12) {
          F_00d24070(this,&(*(undefined4 *)(gen_frame + 0x110)),(*(float * PTR32 *)(gen_frame + 0x88)),(int)this + 0x8c,*(float *)(iVar1 + 0x4c),
                       *(float *)(iVar1 + 0x48),*(float *)(iVar1 + 0x58),*(float *)(iVar1 + 0x6c));
          F_00d219d0(this,(uint)pfVar9,(int)this + 0x8c,param_2);
          pcVar5 = *(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x84)) + 100);
          *pfVar9 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x5c))) *
                           (float10)*pfVar9)));
          uVar10 = (*pcVar5)((*(int * PTR32 *)(gen_frame + 0x84)),((undefined1 *)(gen_frame + 0x90)));
          if ((char)uVar10 == '\x01') {
            pfVar11 = (float *)F_00c34320(((undefined1 *)(gen_frame + 0x90)),&(*(float *)(gen_frame + 0x120)),(int)this + 0x70);
            (*(float *)(gen_frame + 0x13c)) = *pfVar11;
            (*(float *)(gen_frame + 0x140)) = pfVar11[1];
            (*(float *)(gen_frame + 0x144)) = pfVar11[2];
            (*(float *)(gen_frame + 0x148)) = pfVar11[3];
            pfVar11 = &(*(float *)(gen_frame + 0x13c));
          }
          else {
            pfVar11 = (float *)((int)this + 0x60);
          }
          fVar15 = F_00d21d90(this,(uint)pfVar11,pfVar9,(int)this + 0x8c);
          *(float *)((int)this + 0x90) = (float)fVar15;
          *(float *)((int)this + 0x80) = *pfVar9;
          fVar15 = (float10)*pfVar9;
          fVar16 = (float10)*(float *)&REFG(undefined, 0x110f9d0);
          bVar12 = GEN_ISNAN(fVar16) || GEN_ISNAN(fVar15);
          bVar13 = bVar12 || fVar16 == fVar15;
          pfVar9 = ((float *)GEN_TOP(CONCAT22(extraout_var_01,
                                     (ushort)!(fVar15 <= fVar16) << 8 | (ushort)bVar12 << 10 |
                                     (ushort)bVar13 << 0xe)));
          if (bVar12 == bVar13) {
            uVar10 = CONCAT31((int3)((uint)((int)(uintptr_t)pfVar9) >> 8),1);
            goto LAB_00d16e44;
          }
          goto LAB_00d16e42;
        }
      }
      pfVar9 = ((float *)GEN_TOP(CONCAT22(extraout_var_00,uVar14)));
      *(*(float * PTR32 *)(gen_frame + 0x88)) = *(float *)&REFG(undefined, 0x110f9d0);
    }
  }
LAB_00d16e42: ;
  uVar10 = (uint)pfVar9 & 0xffffff00;
LAB_00d16e44: ;
  F_00c47745((*(uint *)(gen_frame + 0x15c)) ^ (uint)(uint)(gen_frame + 0x160));
  return uVar10;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointDirSound::vf14 */
byte F_00d16e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd16e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  int * this_00;
  int iVar2;
  byte bVar3;
  uint uVar4;
  float fVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  ((code *)*(gen_code32 *)(*(int *)this + 0x70))(0x406);
  if (((byte)this[0xb0] & 4) != 0) {
    return 0;
  }
  bVar3 = F_00d217a0((undefined *)this,param_1);
  if (bVar3 != 0) {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = *(undefined * PTR32 *)&REFG(undefined, 0x110f9d0);
    *(float *)(this + 0x8c) = (float)(float10)1;
    F_00d21970(this);
    uVar4 = F_00d169c0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),param_1);
    if ((char)uVar4 != '\0') {
      this_00 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
      iVar2 = *(int *)(this + 0x128);
      uVar4 = ((code *)*(gen_code32 *)(*this_00 + 0x18))(this_00);
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar2 + 0x10 + (uVar4 & 0xff) * 4))) *
                       (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8)))))))))));
      uVar1 = *(ushort *)(iVar2 + 0xe);
      if (uVar1 != 0) {
        fVar5 = F_00d005d0(this_00,(uint)uVar1);
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar5 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8)))))))));
      }
      iVar2 = *(int *)(this + 0x128);
      *(undefined * PTR32 *)(this + 0x80) = (*(undefined * PTR32 *)(gen_frame + 0x8));
      if ((*(byte *)(iVar2 + 0xc) & 8) != 0) {
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = *(undefined * PTR32 *)(iVar2 + 0x5c);
        *(undefined4 *)(this + 0x80) = *(undefined4 *)(iVar2 + 0x5c);
      }
      if ((((byte)this[0xb0] & 0x40) == 0) && (bVar3 = F_00d228c0(this), bVar3 == 0)) {
        return 1;
      }
      bVar3 = F_00d00ed0(this_00,this,(uint)(byte)this[0x2d],*(undefined4 *)(this + 0x30),
                           ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8))))));
      return bVar3;
    }
    F_00d219b0(this);
    F_00d22c70(this,0);
  }
  return 1;
}

/* ref: FUN_00d16f70 */
uint F_00d16f70(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xd16f70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  (*(float *)(gen_frame + 0xc)) = param_4;
  (*(float *)(gen_frame + 0x10)) = param_3;
  (*(float *)(gen_frame + 0x14)) = param_2;
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)&REFG(undefined, 0x110f9d0);
  F_00c34430(param_1,&(*(float *)(gen_frame + 0xc)));
  return param_1;
}

/* ref: FUN_00d16fb0 */
unsigned int F_00d16fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd16fb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined2 *)this;
  param_1[1] = *(undefined2 *)((int)this + 2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((int)this + 0x18);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)((int)this + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((int)this + 0x20);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)((int)this + 0x2c);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((int)this + 0x28);
  param_1[0x18] = *(undefined2 *)((int)this + 0x30);
  param_1[0x19] = *(undefined2 *)((int)this + 0x32);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)((int)this + 0x34);
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)((int)this + 0x44);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((int)this + 0x48);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((int)this + 0x38);
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)((int)this + 0x3c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)((int)this + 0x40);
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)((int)this + 0x4c);
  return 0;
}

/* ref: FUN_00d17040 */
unsigned int F_00d17040(unsigned int gen_a0)
{
  GEN_ENTER(0xd17040u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  float10 fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  fVar1 = (float10)1;
  in_ecx[1] = 4;
  *(undefined1 *)(in_ecx + 3) = 0;
  in_ecx[2] = 0;
  in_ecx[4] = (undefined4)gen_fl2bits((float)fVar1);
  in_ecx[5] = (undefined4)gen_fl2bits((float)fVar1);
  in_ecx[6] = (undefined4)gen_fl2bits((float)fVar1);
  in_ecx[7] = (undefined4)gen_fl2bits((float)fVar1);
  *(undefined2 *)((int)in_ecx + 0xe) = 0;
  *(undefined1 *)((int)in_ecx + 0xd) = 0;
  *in_ecx = 0x1040080;
  uVar3 = *(undefined4 *)&REFG(undefined, 0x110f9d0);
  in_ecx[8] = *(undefined4 *)&REFG(undefined, 0x110f9d0);
  in_ecx[9] = uVar3;
  in_ecx[10] = uVar3;
  in_ecx[0xb] = uVar3;
  in_ecx[0xb] = (undefined4)gen_fl2bits((float)fVar1);
  in_ecx[0xc] = uVar3;
  in_ecx[0xd] = uVar3;
  in_ecx[0xe] = uVar3;
  in_ecx[0xf] = uVar3;
  in_ecx[0x1d] = 0;
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1132cf4);
  in_ecx[0x1e] = 0;
  in_ecx[0x10] = uVar2;
  in_ecx[0x1f] = 0;
  in_ecx[0x11] = uVar2;
  uVar2 = REFG(float, 0x1094880);
  in_ecx[0x12] = GEN_FLT_TO(in_ecx[0x12], REFG(float, 0x1094880));
  in_ecx[0x13] = GEN_FLT_TO(in_ecx[0x13], REFG(float, 0x10a0d00));
  in_ecx[0x14] = uVar2;
  in_ecx[0x15] = uVar3;
  in_ecx[0x1a] = uVar3;
  in_ecx[0x1c] = uVar3;
  in_ecx[0x16] = (undefined4)gen_fl2bits((float)fVar1);
  in_ecx[0x17] = (undefined4)gen_fl2bits((float)fVar1);
  in_ecx[0x18] = (undefined4)gen_fl2bits((float)fVar1);
  in_ecx[0x19] = (undefined4)gen_fl2bits((float)fVar1);
  in_ecx[0x1b] = (undefined4)gen_fl2bits((float)fVar1);
  return 0;
}

/* ref: FUN_00d170e0 */
uint F_00d170e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd170e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  F_00d0c080(param_1,param_2);
  uVar1 = *(uint *)(param_1 + 0x20);
  *(uint *)(param_2 + 0x20) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x24);
  *(uint *)(param_2 + 0x24) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_2 + 0x28) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x2c);
  *(uint *)(param_2 + 0x2c) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x30);
  *(uint *)(param_2 + 0x30) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x34);
  *(uint *)(param_2 + 0x34) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x38);
  *(uint *)(param_2 + 0x38) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x3c);
  *(uint *)(param_2 + 0x3c) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x40);
  *(uint *)(param_2 + 0x40) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x44);
  *(uint *)(param_2 + 0x44) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x48);
  *(uint *)(param_2 + 0x48) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x4c);
  *(uint *)(param_2 + 0x4c) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x50);
  *(uint *)(param_2 + 0x50) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x54);
  *(uint *)(param_2 + 0x54) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x58);
  *(uint *)(param_2 + 0x58) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x5c);
  *(uint *)(param_2 + 0x5c) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x60);
  *(uint *)(param_2 + 0x60) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 100);
  *(uint *)(param_2 + 100) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x68);
  *(uint *)(param_2 + 0x68) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x6c);
  *(uint *)(param_2 + 0x6c) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x70);
  *(uint *)(param_2 + 0x70) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *(undefined4 *)(param_2 + 0x74) = 0;
  *(undefined4 *)(param_2 + 0x78) = 0;
  *(undefined4 *)(param_2 + 0x7c) = 0;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointDirSound::vf0 */
uint F_00d172b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd172b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1132fb4));
  F_00d23680(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00d172e0 */
uint F_00d172e0(unsigned int gen_a0)
{
  GEN_ENTER(0xd172e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x113324c));
  if ((*((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 0x6d))) & 1) != 0) {
    piVar1 = (int *)F_00d2cd00();
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,*(undefined4 *)((int)this + 0x20));
    }
  }
  uVar2 = F_00d23680(this);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointSound::vf7 */
uint F_00d17320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd17320u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  
  uVar2 = F_00c51673((double)*(float *)param_2);
  if (uVar2 == 0) {
    uVar2 = F_00c51673((double)*(float *)(param_2 + 4));
    if (uVar2 == 0) {
      uVar2 = F_00c51673((double)*(float *)(param_2 + 8));
      if (uVar2 == 0) {
        F_00d21390(param_1,param_2);
        iVar1 = *(int *)(param_1 + 0x128);
        *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)param_2;
        *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_2 + 4);
        *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(param_2 + 8);
        *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(param_2 + 0xc);
        uVar2 = F_00cbc5c0((undefined *)(param_1 + 8),*(int *)(param_1 + 0x128) + 0x20);
      }
    }
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointSound::vf8 */
uint F_00d173c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd173c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  
  uVar2 = F_00c51673((double)*(float *)param_2);
  if (uVar2 == 0) {
    uVar2 = F_00c51673((double)*(float *)(param_2 + 4));
    if (uVar2 == 0) {
      uVar2 = F_00c51673((double)*(float *)(param_2 + 8));
      if (uVar2 == 0) {
        F_00d213a0(param_1,param_2);
        iVar1 = *(int *)(param_1 + 0x128);
        *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)param_2;
        *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_2 + 4);
        *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(param_2 + 8);
        *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(param_2 + 0xc);
        uVar2 = F_00cbc5c0(param_1 + 8,*(int *)(param_1 + 0x128) + 0x20);
      }
    }
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointSound::vf9 */
uint F_00d17460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd17460u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c51673((double)*(float *)param_2);
  if (uVar1 == 0) {
    uVar1 = F_00c51673((double)*(float *)(param_2 + 4));
    if (uVar1 == 0) {
      uVar1 = F_00c51673((double)*(float *)(param_2 + 8));
      if (uVar1 == 0) {
        F_00d213b0(param_1,param_2,param_3);
        F_00c34180(*(int *)(param_1 + 0x128) + 0x20,param_2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x2c))) = (float)(float10)1;
        uVar1 = F_00cbc5c0((undefined *)(param_1 + 8),*(int *)(param_1 + 0x128) + 0x20);
      }
    }
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointSound::vf10 */
uint F_00d17500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd17500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  iVar1 = *(int *)(this + 0x128);
  puVar2 = (undefined4 *)F_00c34320(param_1,((undefined1 *)(gen_frame + 0xc)),(undefined4 *)(iVar1 + 0x20));
  *(undefined4 *)(iVar1 + 0x20) = *puVar2;
  *(undefined4 *)(iVar1 + 0x24) = puVar2[1];
  *(undefined4 *)(iVar1 + 0x28) = puVar2[2];
  *(undefined4 *)(iVar1 + 0x2c) = puVar2[3];
  iVar1 = *(int *)(this + 0x128);
  *(float *)(iVar1 + 0x2c) = (float)(float10)1;
  uVar3 = F_00cbc5c0(this + 8,iVar1 + 0x20);
  return uVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointSound::vf11 */
unsigned int F_00d17560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd17560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(this + 0x128);
  *param_1 = *(undefined4 *)(iVar1 + 0x20);
  param_1[1] = *(undefined4 *)(iVar1 + 0x24);
  uVar2 = *(undefined4 *)(iVar1 + 0x2c);
  param_1[2] = *(undefined4 *)(iVar1 + 0x28);
  param_1[3] = uVar2;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointSound::vf12 */
uint F_00d17590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd17590u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x80);
  return (uint)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointSound::vf13 */
uint F_00d175b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd175b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float10 fVar1;
  
  fVar1 = F_00d22f40(this,GEN_TOF(*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x50)))),
                       *((byte *)GEN_TOP((*(int *)(this + 0x128) + 4))) >> 2 & 1);
  *param_1 = ((float)GEN_TOF((fVar1 * (float10)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x48))))));
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointSound::vf18 */
uint F_00d175f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd175f0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_3 < 0x80) {
    return 0;
  }
  puVar2 = *(undefined4 * PTR32 *)(in_ecx + 0x128);
  puVar3 = param_2;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0x80;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointSound::vf19 */
byte F_00d17630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd17630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x128);
  *param_1 = *(undefined4 *)(iVar1 + 0x30);
  *param_2 = *(undefined4 *)(iVar1 + 0x34);
  *param_3 = *(undefined4 *)(iVar1 + 0x58);
  *param_4 = *(undefined4 *)(iVar1 + 0x50);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointSound::vf20 */
uint F_00d17660(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xd17660u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x128);
  *(float *)(uVar1 + 0x30) = param_2;
  *((float *)GEN_TOP((*(int *)(in_ecx + 0x128) + 0x34))) = param_3;
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointSound::vf25 */
uint F_00d17860(unsigned int gen_a0)
{
  GEN_ENTER(0xd17860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
  uVar1 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar1 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x90);
  }
  F_00c47745((*(uint *)(gen_frame + 0x9c)) ^ (uint)(uint)(gen_frame + 0xa0));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointSound::vf27 */
byte F_00d178e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd178e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = param_1;
  puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  bVar1 = F_00d228c0(this);
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointSound::vf29 */
uint F_00d17910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd17910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  HWND param_1 = (HWND)gen_a1;
  HDC param_2 = (HDC)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  char cVar1;
  HGDIOBJ pvVar2;
  undefined * pHVar3;
  undefined * h;
  char * pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong color;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  pvVar2 = gen_imp_GetStockObject(5);
  (*(HGDIOBJ *)(gen_frame + 0x10)) = pvVar2;
  pvVar2 = gen_imp_SelectObject(param_2,pvVar2);
  (*(HGDIOBJ *)(gen_frame + 0x14)) = pvVar2;
  if (((byte)this[0xb0] & 1) == 0) {
    iVar8 = 1;
    color = 0x900000;
  }
  else {
    color = 0x80;
    iVar8 = 2;
  }
  pHVar3 = gen_imp_CreatePen(0,iVar8,color);
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = pHVar3;
  pvVar2 = gen_imp_SelectObject(param_2,pHVar3);
  (*(HGDIOBJ *)(gen_frame + 0x18)) = pvVar2;
  gen_imp_GetClientRect(param_1,&(*(tagRECT *)(gen_frame + 0x68)));
  iVar7 = (*(tagRECT *)(gen_frame + 0x68)).right / 2 - (int)((double)*(float *)(this + 0x50) * *(double *)&REFG(double, 0x1132488));
  iVar6 = (*(tagRECT *)(gen_frame + 0x68)).bottom / 2 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 0x58));
  iVar8 = (int)((double)*((float *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x128) + 0x34))) * *(double *)&REFG(undefined, 0x10947f0));
  gen_imp_Ellipse(param_2,iVar7 - iVar8,iVar6 - iVar8,iVar8 + iVar7,iVar8 + iVar6);
  iVar8 = (int)((double)*((float *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x128) + 0x30))) * *(double *)&REFG(undefined, 0x10947f0));
  gen_imp_Ellipse(param_2,iVar7 - iVar8,iVar6 - iVar8,iVar8 + iVar7,iVar8 + iVar6);
  if (((byte)(*(undefined * PTR32 *)(gen_frame + 0x28))[0xb0] & 1) != 0) {
    (*(int *)(gen_frame + 0x1c)) = (*(tagRECT *)(gen_frame + 0x68)).right / 2;
    (*(HGDIOBJ *)(gen_frame + 0x20)) = (HGDIOBJ)((*(tagRECT *)(gen_frame + 0x68)).bottom / 2);
    gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x18)));
    gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x24)));
    pHVar3 = gen_imp_CreatePen(0,1,0x900000);
    (*(undefined * PTR32 *)(gen_frame + 0x24)) = pHVar3;
    pvVar2 = gen_imp_SelectObject(param_2,pHVar3);
    (*(HGDIOBJ *)(gen_frame + 0x18)) = pvVar2;
    gen_imp_MoveToEx(param_2,(*(int *)(gen_frame + 0x1c)) -
                     (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)((*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x60)),
             (int)(*(HGDIOBJ *)(gen_frame + 0x20)) - (int)((double)*(float *)((*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x68) * *(double *)&REFG(double, 0x1132488)),
             (LPPOINT)0x0);
    gen_imp_LineTo(param_2,(*(int *)(gen_frame + 0x1c)),(int)(*(HGDIOBJ *)(gen_frame + 0x20)));
  }
  F_00c48350(((undefined *)(gen_frame + 0x2c)),0,0x3c);
  F_00c49908(((CHAR *)(((char *)((undefined *)(gen_frame + 0x2c)) + 28))),0x20,&REFG(undefined, 0x1133050));
  (*(LONG *)((char *)((undefined *)(gen_frame + 0x2c)))) = 0xd;
  (*(BYTE *)(((char *)((undefined *)(gen_frame + 0x2c)) + 23))) = 0x80;
  (*(BYTE *)(((char *)((undefined *)(gen_frame + 0x2c)) + 27))) = '\x01';
  h = gen_imp_CreateFontIndirectA(((undefined *)(gen_frame + 0x2c)));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = h;
  pvVar2 = gen_imp_SelectObject(param_2,h);
  (*(HGDIOBJ *)(gen_frame + 0x20)) = pvVar2;
  if (((byte)(*(undefined * PTR32 *)(gen_frame + 0x28))[0xb0] & 1) == 0) {
    F_00c472af(((char *)(gen_frame + 0x78)),0x20,&REFG(undefined, 0x113306c),&REFG(undefined, 0x1133064));
  }
  else {
    F_00c472af(((char *)(gen_frame + 0x78)),0x20,&REFG(undefined, 0x113305c),
               (int)(ulonglong)
                    gen_d2bits((double)*(float *)((*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x80) * *(double *)&REFG(undefined, 0x1088118)),
               (int)((ulonglong)
                     gen_d2bits((double)*(float *)((*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x80) * *(double *)&REFG(undefined, 0x1088118)) >>
                    0x20));
  }
  pcVar4 = ((char *)(gen_frame + 0x78));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  (*(int *)(gen_frame + 0x1c)) = (int)pcVar4 - (int)(((char *)(gen_frame + 0x78)) + 1);
  gen_imp_GetTextExtentPoint32A(param_2,((char *)(gen_frame + 0x78)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x78)) + 1),&(*(undefined8 *)(gen_frame + 0x4)));
  gen_imp_TextOutA(param_2,iVar7 - (*(LONG *)((char *)&((*(undefined8 *)(gen_frame + 0x4))))) / 2,iVar6 - (*(LONG *)(((char *)&((*(undefined8 *)(gen_frame + 0x4))) + 4))) / 2,((char *)(gen_frame + 0x78)),(*(int *)(gen_frame + 0x1c)));
  gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x20)));
  gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x18)));
  gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x14)));
  gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0xc)));
  gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x24)));
  uVar5 = gen_imp_DeleteObject((*(HGDIOBJ *)(gen_frame + 0x10)));
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
  return uVar5;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointSound::vf30 */
byte F_00d17c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd17c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  double dVar1;
  double dVar2;
  undefined * _File;
  byte bVar3;
  int iVar4;
  
  _File = param_1;
  bVar3 = F_00d21f00((undefined *)this,param_1);
  if (bVar3 == 0) {
    return 0;
  }
  dVar1 = (double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x24)));
  dVar2 = (double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x20)));
  F_00c49386(param_1,"Position = %f %f %f\n",(int)(ulonglong)gen_d2bits(dVar2),
           (int)((ulonglong)gen_d2bits(dVar2) >> 0x20),(int)(ulonglong)gen_d2bits(dVar1),
           (int)((ulonglong)gen_d2bits(dVar1) >> 0x20));
  F_00c49386(param_1,"MaxRange = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x30))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x30))))));
  F_00c49386(param_1,"MinRange = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x34))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x34))))));
  param_1 = (undefined *)0x0;
  iVar4 = 0x38;
  do {
    F_00c49386(_File,"Height[%d] = %f\n",param_1,
             (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((iVar4 + *(int *)(this + 0x128))))),
             (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((iVar4 + *(int *)(this + 0x128))))) >> 0x20
                  ));
    param_1 = (undefined *)((int)param_1 + (1) * 32);
    iVar4 = iVar4 + 4;
  } while (iVar4 < 0x40);
  F_00c49386(_File,"RangeVolume = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x40))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x40))))));
  F_00c49386(_File,"Volume = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x44))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x44))))));
  F_00c49386(_File,"Pitch = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x48))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x48))))));
  F_00c49386(_File,"ReverbFac = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x4c))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x4c))))));
  F_00c49386(_File,"DopplerFac = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x50))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x50))))));
  F_00c49386(_File,"CenterFac = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x54))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x54))))));
  F_00c49386(_File,"InteriorFac = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x58))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x58))))));
  F_00c49386(_File,"Direction = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x5c))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x5c))))));
  F_00c49386(_File,"IsReverbObject = %d\n",*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x6d))) >> 1 & 1);
  F_00c49386(_File,"[EndOfSoundObject]\n\n");
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointSound::vf31 */
byte F_00d17dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd17dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  char * pcVar2;
  int iVar3;
  uint uVar4;
  byte * pbVar5;
  bool bVar6;
  double dVar7;
  
  pcVar2 = "Position";
  pbVar5 = (byte *)param_2;
  do {
    bVar1 = *pcVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00d17df1: ;
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00d17df6;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00d17df1;
    pcVar2 = pcVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d17df6: ;
  if (iVar3 == 0) {
    pcVar2 = (char *)F_00d00d00(0,0);
    if (pcVar2 != (char *)0x0) {
      dVar7 = F_00c4acaa(pcVar2);
      *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x20))) = (float)dVar7;
      pcVar2 = (char *)F_00d00d00(0,0);
      if (pcVar2 != (char *)0x0) {
        dVar7 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x24))) = (float)dVar7;
        pcVar2 = (char *)F_00d00d00(0,0);
        if (pcVar2 != (char *)0x0) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x28))) = (float)dVar7;
          return 1;
        }
      }
    }
  }
  else {
    pcVar2 = "MaxRange";
    pbVar5 = (byte *)param_2;
    do {
      bVar1 = *pcVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00d17ea5: ;
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00d17eaa;
      }
      if (bVar1 == 0) break;
      bVar1 = pcVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00d17ea5;
      pcVar2 = pcVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00d17eaa: ;
    if (iVar3 == 0) {
      pcVar2 = (char *)F_00d00d00(0,0);
      if (pcVar2 != (char *)0x0) {
        dVar7 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x30))) = (float)dVar7;
        return 1;
      }
    }
    else {
      pcVar2 = "MinRange";
      pbVar5 = (byte *)param_2;
      do {
        bVar1 = *pcVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00d17f07: ;
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00d17f0c;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00d17f07;
        pcVar2 = pcVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00d17f0c: ;
      if (iVar3 == 0) {
        pcVar2 = (char *)F_00d00d00(0,0);
        if (pcVar2 != (char *)0x0) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x34))) = (float)dVar7;
          return 1;
        }
      }
      else {
        pcVar2 = "Height";
        pbVar5 = (byte *)param_2;
        do {
          bVar1 = *pcVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00d17f70: ;
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_00d17f75;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00d17f70;
          pcVar2 = pcVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00d17f75: ;
        if (iVar3 == 0) {
          uVar4 = F_00d00d00(0,0);
          if (uVar4 != 0) {
            uVar4 = F_00c4c74c(uVar4);
            pcVar2 = (char *)F_00d00d00(0,0);
            if (pcVar2 != (char *)0x0) {
              dVar7 = F_00c4acaa(pcVar2);
              *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x38 + uVar4 * 4))) = (float)dVar7;
              return 1;
            }
          }
        }
        else {
          pcVar2 = "RangeVolume";
          pbVar5 = (byte *)param_2;
          do {
            bVar1 = *pcVar2;
            bVar6 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_00d17ff0: ;
              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
              goto LAB_00d17ff5;
            }
            if (bVar1 == 0) break;
            bVar1 = pcVar2[1];
            bVar6 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00d17ff0;
            pcVar2 = pcVar2 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_00d17ff5: ;
          if (iVar3 == 0) {
            pcVar2 = (char *)F_00d00d00(0,0);
            if (pcVar2 != (char *)0x0) {
              dVar7 = F_00c4acaa(pcVar2);
              *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x40))) = (float)dVar7;
              return 1;
            }
          }
          else {
            pcVar2 = "Volume";
            pbVar5 = (byte *)param_2;
            do {
              bVar1 = *pcVar2;
              bVar6 = bVar1 < *pbVar5;
              if (bVar1 != *pbVar5) {
LAB_00d18052: ;
                iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                goto LAB_00d18057;
              }
              if (bVar1 == 0) break;
              bVar1 = pcVar2[1];
              bVar6 = bVar1 < pbVar5[1];
              if (bVar1 != pbVar5[1]) goto LAB_00d18052;
              pcVar2 = pcVar2 + 2;
              pbVar5 = pbVar5 + 2;
            } while (bVar1 != 0);
            iVar3 = 0;
LAB_00d18057: ;
            if (iVar3 == 0) {
              pcVar2 = (char *)F_00d00d00(0,0);
              if (pcVar2 != (char *)0x0) {
                dVar7 = F_00c4acaa(pcVar2);
                *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x44))) = (float)dVar7;
                return 1;
              }
            }
            else {
              pcVar2 = "Pitch";
              pbVar5 = (byte *)param_2;
              do {
                bVar1 = *pcVar2;
                bVar6 = bVar1 < *pbVar5;
                if (bVar1 != *pbVar5) {
LAB_00d180b4: ;
                  iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                  goto LAB_00d180b9;
                }
                if (bVar1 == 0) break;
                bVar1 = pcVar2[1];
                bVar6 = bVar1 < pbVar5[1];
                if (bVar1 != pbVar5[1]) goto LAB_00d180b4;
                pcVar2 = pcVar2 + 2;
                pbVar5 = pbVar5 + 2;
              } while (bVar1 != 0);
              iVar3 = 0;
LAB_00d180b9: ;
              if (iVar3 == 0) {
                pcVar2 = (char *)F_00d00d00(0,0);
                if (pcVar2 != (char *)0x0) {
                  dVar7 = F_00c4acaa(pcVar2);
                  *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x48))) = (float)dVar7;
                  return 1;
                }
              }
              else {
                pcVar2 = "ReverbFac";
                pbVar5 = (byte *)param_2;
                do {
                  bVar1 = *pcVar2;
                  bVar6 = bVar1 < *pbVar5;
                  if (bVar1 != *pbVar5) {
LAB_00d18116: ;
                    iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                    goto LAB_00d1811b;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pcVar2[1];
                  bVar6 = bVar1 < pbVar5[1];
                  if (bVar1 != pbVar5[1]) goto LAB_00d18116;
                  pcVar2 = pcVar2 + 2;
                  pbVar5 = pbVar5 + 2;
                } while (bVar1 != 0);
                iVar3 = 0;
LAB_00d1811b: ;
                if (iVar3 == 0) {
                  pcVar2 = (char *)F_00d00d00(0,0);
                  if (pcVar2 != (char *)0x0) {
                    dVar7 = F_00c4acaa(pcVar2);
                    *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x4c))) = (float)dVar7;
                    return 1;
                  }
                }
                else {
                  pcVar2 = "DopplerFac";
                  pbVar5 = (byte *)param_2;
                  do {
                    bVar1 = *pcVar2;
                    bVar6 = bVar1 < *pbVar5;
                    if (bVar1 != *pbVar5) {
LAB_00d18178: ;
                      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                      goto LAB_00d1817d;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pcVar2[1];
                    bVar6 = bVar1 < pbVar5[1];
                    if (bVar1 != pbVar5[1]) goto LAB_00d18178;
                    pcVar2 = pcVar2 + 2;
                    pbVar5 = pbVar5 + 2;
                  } while (bVar1 != 0);
                  iVar3 = 0;
LAB_00d1817d: ;
                  if (iVar3 == 0) {
                    pcVar2 = (char *)F_00d00d00(0,0);
                    if (pcVar2 != (char *)0x0) {
                      dVar7 = F_00c4acaa(pcVar2);
                      *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x50))) = (float)dVar7;
                      return 1;
                    }
                  }
                  else {
                    pcVar2 = "CenterFac";
                    pbVar5 = (byte *)param_2;
                    do {
                      bVar1 = *pcVar2;
                      bVar6 = bVar1 < *pbVar5;
                      if (bVar1 != *pbVar5) {
LAB_00d181e0: ;
                        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                        goto LAB_00d181e5;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pcVar2[1];
                      bVar6 = bVar1 < pbVar5[1];
                      if (bVar1 != pbVar5[1]) goto LAB_00d181e0;
                      pcVar2 = pcVar2 + 2;
                      pbVar5 = pbVar5 + 2;
                    } while (bVar1 != 0);
                    iVar3 = 0;
LAB_00d181e5: ;
                    if (iVar3 == 0) {
                      pcVar2 = (char *)F_00d00d00(0,0);
                      if (pcVar2 != (char *)0x0) {
                        dVar7 = F_00c4acaa(pcVar2);
                        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x54))) = (float)dVar7;
                        return 1;
                      }
                    }
                    else {
                      pcVar2 = "InteriorFac";
                      pbVar5 = (byte *)param_2;
                      do {
                        bVar1 = *pcVar2;
                        bVar6 = bVar1 < *pbVar5;
                        if (bVar1 != *pbVar5) {
LAB_00d18242: ;
                          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                          goto LAB_00d18247;
                        }
                        if (bVar1 == 0) break;
                        bVar1 = pcVar2[1];
                        bVar6 = bVar1 < pbVar5[1];
                        if (bVar1 != pbVar5[1]) goto LAB_00d18242;
                        pcVar2 = pcVar2 + 2;
                        pbVar5 = pbVar5 + 2;
                      } while (bVar1 != 0);
                      iVar3 = 0;
LAB_00d18247: ;
                      if (iVar3 == 0) {
                        pcVar2 = (char *)F_00d00d00(0,0);
                        if (pcVar2 != (char *)0x0) {
                          dVar7 = F_00c4acaa(pcVar2);
                          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x58))) = (float)dVar7;
                          return 1;
                        }
                      }
                      else {
                        pcVar2 = "Direction";
                        pbVar5 = (byte *)param_2;
                        do {
                          bVar1 = *pcVar2;
                          bVar6 = bVar1 < *pbVar5;
                          if (bVar1 != *pbVar5) {
LAB_00d182a4: ;
                            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                            goto LAB_00d182a9;
                          }
                          if (bVar1 == 0) break;
                          bVar1 = pcVar2[1];
                          bVar6 = bVar1 < pbVar5[1];
                          if (bVar1 != pbVar5[1]) goto LAB_00d182a4;
                          pcVar2 = pcVar2 + 2;
                          pbVar5 = pbVar5 + 2;
                        } while (bVar1 != 0);
                        iVar3 = 0;
LAB_00d182a9: ;
                        if (iVar3 == 0) {
                          pcVar2 = (char *)F_00d00d00(0,0);
                          if (pcVar2 != (char *)0x0) {
                            dVar7 = F_00c4acaa(pcVar2);
                            *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x5c))) = (float)dVar7;
                            return 1;
                          }
                        }
                        else {
                          pcVar2 = "IsReverbObject";
                          pbVar5 = (byte *)param_2;
                          do {
                            bVar1 = *pcVar2;
                            bVar6 = bVar1 < *pbVar5;
                            if (bVar1 != *pbVar5) {
LAB_00d18306: ;
                              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                              goto LAB_00d1830b;
                            }
                            if (bVar1 == 0) break;
                            bVar1 = pcVar2[1];
                            bVar6 = bVar1 < pbVar5[1];
                            if (bVar1 != pbVar5[1]) goto LAB_00d18306;
                            pcVar2 = pcVar2 + 2;
                            pbVar5 = pbVar5 + 2;
                          } while (bVar1 != 0);
                          iVar3 = 0;
LAB_00d1830b: ;
                          if (iVar3 != 0) {
                            bVar1 = F_00d22040(param_1,param_2);
                            return bVar1;
                          }
                          uVar4 = F_00d00d00(0,0);
                          if (uVar4 != 0) {
                            uVar4 = F_00c4c74c(uVar4);
                            pbVar5 = ((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x6d)));
                            *pbVar5 = *pbVar5 ^ ((char)uVar4 * '\x02' ^
                                                *((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x6d)))) & 2;
                            return 1;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointSound::vf26 */
uint F_00d18800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd18800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = (undefined4 *)F_00d22da0(this,param_1,0x80);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0xf4))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))));
  if (uVar2 != 0) {
    puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
    puVar5 = puVar1;
    for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    return (uint)(puVar1 + 0x20);
  }
  F_00d19410(*(undefined4 *)(this + 0x128),(uint)puVar1);
  return (uint)(puVar1 + 0x20);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointSound::vf28 */
uint F_00d18860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd18860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  uVar1 = *(uint *)(this + 0x1c);
  if (*((int *)GEN_TOP((*(int *)(uVar1 + 0xc) + 0x2f8))) != 0) {
    F_00d22b20(this,&(*(undefined2 *)(gen_frame + 0x8)));
    (*(undefined2 *)(gen_frame + 0x8)) = (undefined2)param_1;
    (*(undefined2 *)(gen_frame + 0xa)) = 0x40;
    uVar2 = F_00427d90();
    (*(ulonglong *)(gen_frame + 0x10)) = uVar2;
    (*(undefined4 *)(gen_frame + 0x44)) = *((undefined4 *)GEN_TOP((*(int *)(this + 0x128) + 0x34)));
    (*(undefined4 *)(gen_frame + 0x40)) = *((undefined4 *)GEN_TOP((*(int *)(this + 0x128) + 0x30)));
    F_00d19390(&(*(undefined2 *)(gen_frame + 0x8)),&(*(undefined2 *)(gen_frame + 0x8)));
    uVar1 = F_00d00b10(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))),&(*(undefined2 *)(gen_frame + 0x8)),0x40);
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar1;
}

/* ref: FUN_00d188f0 */
uint F_00d188f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd188f0u, gen_a0, gen_a1, 0u, 0u);
  float * in_eax = (float *)(uintptr_t)gen_a0;
  float * in_ecx = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = in_ecx[3];
  fVar2 = in_ecx[1] * in_ecx[1];
  fVar3 = in_ecx[2] * in_ecx[2];
  *in_eax = SQRT((fVar3 + *in_ecx * *in_ecx) + fVar2);
  in_eax[1] = (fVar3 + fVar2) + fVar2;
  in_eax[2] = (fVar3 + fVar3) + fVar2;
  in_eax[3] = (fVar3 + fVar1 * fVar1) + fVar2;
  return (uint)in_eax;
}

/* ref: FUN_00d18930 */
uint F_00d18930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd18930u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  byte * pbVar1;
  int * this_00;
  float10 fVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  F_00d22580(this,param_1,param_2,param_3);
  *(uint *)((int)this + 0xb0) =
       *(uint *)((int)this + 0xb0) ^ ((param_4 & 0xff) << 4 ^ *(uint *)((int)this + 0xb0)) & 0x10;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x113324c));
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined1 *)((int)this + 0x13c) = 1;
  if ((char)param_4 == '\0') {
    *(undefined4 * PTR32 *)((int)this + 0x128) = param_1;
  }
  else {
    *(undefined4 * PTR32 *)((int)this + 0x128) = (undefined4 *)((int)this + 0x140);
    puVar5 = param_1;
    puVar6 = (undefined4 *)((int)this + 0x140);
    for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    if (*((char *)GEN_TOP((*(int *)((int)this + 0x128) + 3))) == '\0') {
      fVar2 = (float10)0;
      *((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x60))) = (float)fVar2;
      *((float *)GEN_TOP((*(int *)((int)this + 0x128) + 100))) = (float)fVar2;
      *((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x68))) = (float)fVar2;
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x128) + 0x6c))) = 0;
      pbVar1 = ((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 0x6d)));
      *pbVar1 = *pbVar1 & 0xfe;
    }
  }
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x128);
  if ((*((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 0x6d))) & 2) == 0) {
    F_00d228c0(this);
  }
  *((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x58))) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x58))) *
              (float10)*(double *)&REFG(undefined, 0x109cac8))));
  F_00d20fe0(this,(uint)(~(*((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 4))) >> 5) & 1));
  *(undefined4 *)((int)this + 0x138) = 0;
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar3 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x90);
  }
  F_00d18860(this,0x401);
  F_00c47745((*(uint *)(gen_frame + 0x9c)) ^ (uint)(uint)(gen_frame + 0xa0));
  return (uint)this;
}

/* ref: FUN_00d18ac0 */
uint F_00d18ac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd18ac0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  int iVar1;
  int * this_00;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  F_00d22720(this,param_1,param_2);
  *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) | 0x10;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x113324c));
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined1 *)((int)this + 0x13c) = 1;
  *(undefined * PTR32 *)((int)this + 0x128) = (undefined *)((int)this + 0x140);
  F_006095e0((undefined *)((int)this + 0x140));
  iVar1 = *(int *)((int)this + 0x128);
  *(int *)((int)this + 0x18) = iVar1;
  *(float *)(iVar1 + 0x58) =
       ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0x58) * (float10)*(double *)&REFG(undefined, 0x109cac8))));
  F_00d20fe0(this,(uint)(~(*((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 4))) >> 5) & 1));
  *(undefined4 *)((int)this + 0x138) = 0;
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  uVar2 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar2 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x90);
  }
  F_00d18860(this,0x401);
  F_00c47745((*(uint *)(gen_frame + 0x9c)) ^ (uint)(uint)(gen_frame + 0xa0));
  return (uint)this;
}

/* ref: FUN_00d18bc0 */
float F_00d18bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd18bc0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float * pfVar1;
  float10 fVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  pfVar1 = (float *)F_00c34320(param_2,&(*(float *)(gen_frame + 0x0)),param_1 + 0x20);
  (*(float *)(gen_frame + 0x1c)) = *pfVar1;
  (*(float *)(gen_frame + 0x20)) = pfVar1[1];
  (*(float *)(gen_frame + 0x24)) = pfVar1[2];
  (*(float *)(gen_frame + 0x28)) = pfVar1[3];
  if ((*(byte *)(param_1 + 4) & 4) == 0) {
    (*(float *)(gen_frame + 0x2c)) = pfVar1[1];
    F_00d218f0(param_3[1],&(*(float *)(gen_frame + 0x2c)),param_1,param_1 + 0x38);
    (*(float *)(gen_frame + 0x20)) = (*(float *)(gen_frame + 0x2c));
  }
  fVar4 = (*(float *)(gen_frame + 0x1c)) - *param_3;
  fVar5 = (*(float *)(gen_frame + 0x20)) - param_3[1];
  fVar6 = (*(float *)(gen_frame + 0x24)) - param_3[2];
  fVar7 = (*(float *)(gen_frame + 0x28)) - param_3[3];
  (*(float *)(gen_frame + 0x0)) = fVar4;
  (*(float *)(gen_frame + 0x4)) = fVar5;
  (*(float *)(gen_frame + 0x8)) = fVar6;
  (*(float *)(gen_frame + 0xc)) = fVar7;
  (*(float *)(gen_frame + 0x1c)) = fVar4;
  (*(float *)(gen_frame + 0x20)) = fVar5;
  (*(float *)(gen_frame + 0x24)) = fVar6;
  (*(float *)(gen_frame + 0x28)) = fVar7;
  fVar5 = fVar5 * fVar5;
  fVar6 = fVar6 * fVar6;
  fVar4 = SQRT((fVar6 + fVar4 * fVar4) + fVar5);
  (*(float *)(gen_frame + 0x0)) = fVar4;
  (*(float *)(gen_frame + 0x4)) = (fVar6 + fVar5) + fVar5;
  (*(float *)(gen_frame + 0x8)) = (fVar6 + fVar6) + fVar5;
  (*(float *)(gen_frame + 0xc)) = (fVar6 + fVar7 * fVar7) + fVar5;
  fVar2 = (float10)fVar4;
  fVar3 = (float10)*(float *)(param_1 + 0x34);
  if (!(fVar2 <= fVar3) != ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar2)) || fVar3 == fVar2)) {
    fVar5 = ((float)GEN_TOF((fVar2 - (float10)*(float *)(param_1 + 0x34))));
    (*(float *)(gen_frame + 0x2c)) = fVar5;
    return fVar5;
  }
  return (float)(float10)0;
}

/* ref: FUN_00d18d00 */
uint F_00d18d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd18d00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  byte bVar6;
  int * piVar7;
  uint uVar8;
  undefined3 extraout_var = 0;
  float * pfVar9;
  undefined2 uVar10;
  undefined2 extraout_var_00 = 0;
  bool bVar11;
  bool bVar12;
  float10 fVar13;
  float10 fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  (*(uint *)(gen_frame + 0xcc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd0);
  piVar7 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 0x98))(piVar7)));
  uVar8 = ((code *)*(gen_code32 *)(*piVar7 + 0x5c))(piVar7,((undefined1 *)(gen_frame + 0x50)));
  if ((char)uVar8 != '\0') {
    iVar1 = *(int *)((int)this + 0x128);
    (*(undefined4 *)(gen_frame + 0xac)) = *(undefined4 *)(iVar1 + 0x20);
    (*(float *)(gen_frame + 0xb0)) = *(float *)(iVar1 + 0x24);
    (*(undefined4 *)(gen_frame + 0xb4)) = *(undefined4 *)(iVar1 + 0x28);
    (*(undefined4 *)(gen_frame + 0xb8)) = *(undefined4 *)(iVar1 + 0x2c);
    if ((*(byte *)(iVar1 + 4) & 4) == 0) {
      (*(float *)(gen_frame + 0xc)) = *(float *)(iVar1 + 0x24);
      ((code *)*(gen_code32 *)(*piVar7 + 0x30))(piVar7,&(*(float *)(gen_frame + 0x90)));
      bVar6 = F_00d218f0((*(float *)(gen_frame + 0x94)),&(*(float *)(gen_frame + 0xc)),*(int *)((int)this + 0x128),
                           *(int *)((int)this + 0x128) + 0x38);
      uVar8 = CONCAT31(extraout_var,bVar6);
      if (bVar6 != 1) goto LAB_00d18e60;
      (*(float *)(gen_frame + 0xb0)) = (*(float *)(gen_frame + 0xc));
    }
    pfVar9 = (float *)F_00c34320(((undefined1 *)(gen_frame + 0x50)),&(*(float *)(gen_frame + 0x90)),&(*(undefined4 *)(gen_frame + 0xac)));
    fVar17 = *pfVar9;
    (*(float *)(gen_frame + 0xbc)) = fVar17;
    fVar2 = pfVar9[1];
    (*(float *)(gen_frame + 0xc0)) = fVar2;
    fVar3 = pfVar9[2];
    (*(float *)(gen_frame + 0xc4)) = fVar3;
    fVar4 = pfVar9[3];
    (*(float *)(gen_frame + 0xc8)) = fVar4;
    *(float *)((int)this + 0x50) = fVar17;
    *(float *)((int)this + 0x54) = fVar2;
    *(float *)((int)this + 0x58) = fVar3;
    *(float *)((int)this + 0x5c) = fVar4;
    *(float *)((int)this + 0x60) = fVar17;
    fVar15 = fVar2 * fVar2;
    fVar16 = fVar3 * fVar3;
    *(float *)((int)this + 100) = fVar2;
    *(float *)((int)this + 0x68) = fVar3;
    *(float *)((int)this + 0x6c) = fVar4;
    iVar1 = *(int *)((int)this + 0x128);
    fVar17 = SQRT((fVar16 + fVar17 * fVar17) + fVar15);
    (*(float *)(gen_frame + 0x90)) = fVar17;
    (*(float *)(gen_frame + 0x94)) = (fVar16 + fVar15) + fVar15;
    (*(float *)(gen_frame + 0x98)) = (fVar16 + fVar16) + fVar15;
    (*(float *)(gen_frame + 0x9c)) = (fVar16 + fVar4 * fVar4) + fVar15;
    fVar13 = (float10)fVar17;
    fVar14 = (float10)*(float *)(iVar1 + 0x34);
    bVar11 = (GEN_ISNAN(fVar14) || GEN_ISNAN(fVar13)) || fVar14 == fVar13;
    uVar8 = CONCAT22((short)((uint)gen_fl2bits(fVar4) >> 0x10),
                     (ushort)!(fVar13 <= fVar14) << 8 | (ushort)(GEN_ISNAN(fVar14) || GEN_ISNAN(fVar13)) << 10 |
                     (ushort)bVar11 << 0xe);
    if (!(fVar13 <= fVar14) == bVar11) {
      fVar14 = (float10)*(float *)(iVar1 + 0x30);
      if (!(fVar13 <= fVar14) || ((GEN_ISNAN(fVar14) || GEN_ISNAN(fVar13)) || fVar14 == fVar13)) {
        fVar17 = ((float)GEN_TOF((fVar13 - (float10)*(float *)(iVar1 + 0x30))));
        (*(float *)(gen_frame + 0xc)) = fVar17;
        *param_1 = fVar17;
        uVar8 = *(uint *)((int)this + 0x128);
        fVar17 = ((float)GEN_TOF(((float10)fVar17 /
                        ((float10)*(float *)(uVar8 + 0x34) - (float10)*(float *)(uVar8 + 0x30)))));
        (*(float *)(gen_frame + 0xc)) = fVar17;
        fVar17 = (float)((float10)1 - (float10)fVar17);
        (*(float *)(gen_frame + 0xc)) = fVar17;
        *param_1 = fVar17;
        fVar14 = (float10)fVar17 * (float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x40)));
      }
      else {
        fVar17 = ((float)GEN_TOF((fVar13 / (float10)*(float *)(iVar1 + 0x30))));
        (*(float *)(gen_frame + 0xc)) = fVar17;
        fVar17 = (float)((float10)1 - (float10)fVar17);
        (*(float *)(gen_frame + 0xc)) = fVar17;
        *param_1 = fVar17;
        uVar8 = *(uint *)((int)this + 0x128);
        fVar14 = (float10)fVar17 * ((float10)1 - (float10)*(float *)(uVar8 + 0x40)) +
                 (float10)*(float *)(uVar8 + 0x40);
      }
      *param_1 = (float)fVar14;
      iVar1 = *(int *)((int)this + 0x128);
      if ((*(byte *)(iVar1 + 0x6d) & 2) == 0) {
        fVar14 = (float10)*(float *)(iVar1 + 0x60);
        if (fVar13 <= fVar14 && ((!GEN_ISNAN(fVar14) && !GEN_ISNAN(fVar13)) && fVar14 != fVar13)) {
          fVar14 = (float10)*(float *)(iVar1 + 100);
          uVar5 = (ushort)((GEN_ISNAN(fVar14) || GEN_ISNAN(fVar13)) || fVar14 == fVar13);
          uVar8 = CONCAT22((short)(uVar8 >> 0x10),
                           (ushort)!(fVar13 <= fVar14) << 8 |
                           (ushort)(GEN_ISNAN(fVar14) || GEN_ISNAN(fVar13)) << 10 | uVar5 << 0xe);
          if (fVar13 <= fVar14 && uVar5 == 0) goto LAB_00d18e60;
          fVar17 = ((float)GEN_TOF((fVar13 - (float10)*(float *)(iVar1 + 100))));
          (*(float *)(gen_frame + 0xc)) = fVar17;
          fVar17 = ((float)GEN_TOF(((float10)fVar17 /
                          ((float10)*(float *)(iVar1 + 0x60) - (float10)*(float *)(iVar1 + 100)))));
          (*(float *)(gen_frame + 0xc)) = fVar17;
          *param_1 = (float)((float10)fVar17 * (float10)*param_1);
        }
        iVar1 = *(int *)((int)this + 0x128);
        F_00d24070(this,&(*(undefined4 *)(gen_frame + 0xac)),param_1,(int)this + 0x8c,*(float *)(iVar1 + 0x34),
                     *(float *)(iVar1 + 0x30),*(float *)(iVar1 + 0x40),*(float *)(iVar1 + 0x58));
        F_00d219d0(this,(uint)param_1,(int)this + 0x8c,param_2);
        *param_1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x44))) *
                          (float10)*param_1)));
        fVar13 = (float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x54)));
        bVar11 = GEN_ISNAN((float10)1) || GEN_ISNAN(fVar13);
        uVar10 = (undefined2)((uint)*(int *)((int)this + 0x128) >> 0x10);
        if (bVar11 == (bVar11 || (float10)1 == fVar13)) {
          uVar8 = ((code *)*(gen_code32 *)(*piVar7 + 100))(piVar7,((undefined1 *)(gen_frame + 0x10)));
          if ((char)uVar8 == '\x01') {
            pfVar9 = (float *)F_00c34320(((undefined1 *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x90)),(int)this + 0x70);
            (*(float *)(gen_frame + 0xbc)) = *pfVar9;
            (*(float *)(gen_frame + 0xc0)) = pfVar9[1];
            (*(float *)(gen_frame + 0xc4)) = pfVar9[2];
            (*(float *)(gen_frame + 0xc8)) = pfVar9[3];
            pfVar9 = &(*(float *)(gen_frame + 0xbc));
          }
          else {
            pfVar9 = (float *)((int)this + 0x60);
          }
          fVar13 = F_00d21d90(this,(uint)pfVar9,param_1,(int)this + 0x8c);
          uVar10 = extraout_var_00;
        }
        else {
          fVar13 = (float10)0;
        }
        *(float *)((int)this + 0x90) = (float)fVar13;
        *(float *)((int)this + 0x80) = *param_1;
        fVar14 = (float10)*param_1;
        fVar13 = (float10)0;
        bVar11 = GEN_ISNAN(fVar13) || GEN_ISNAN(fVar14);
        bVar12 = bVar11 || fVar13 == fVar14;
        uVar8 = CONCAT22(uVar10,(ushort)!(fVar14 <= fVar13) << 8 | (ushort)bVar11 << 10 |
                                (ushort)bVar12 << 0xe);
        if (bVar11 != bVar12) goto LAB_00d18e60;
      }
      uVar8 = CONCAT31((int3)(uVar8 >> 8),1);
      goto LAB_00d19041;
    }
  }
LAB_00d18e60: ;
  uVar8 = uVar8 & 0xffffff00;
LAB_00d19041: ;
  F_00c47745((*(uint *)(gen_frame + 0xcc)) ^ (uint)(uint)(gen_frame + 0xd0));
  return uVar8;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointSound::vf14 */
byte F_00d19060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd19060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte * pbVar1;
  float fVar2;
  ushort uVar3;
  int iVar4;
  byte bVar5;
  int * piVar6;
  uint uVar7;
  float * pfVar8;
  bool bVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x70))(this,0x406);
  if (((byte)this[0xb0] & 4) != 0) {
    return 0;
  }
  bVar5 = F_00d217a0((undefined *)this,param_1);
  if (bVar5 != 0) {
    if (((*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x6d))) & 1) != 0) &&
       (piVar6 = (int *)F_00d2cd00(), piVar6 != (int *)0x0)) {
      ((code *)*(gen_code32 *)(*piVar6 + 0x20))
                (piVar6,*(int *)(this + 0x128) + 0x20,*(undefined4 *)(this + 0x20));
    }
    (*(float *)(gen_frame + 0x28)) = (float)(float10)0;
    fVar10 = (float10)1;
    *(float *)(this + 0x8c) = (float)fVar10;
    if (((byte)this[0xb0] & 8) == 0) {
      F_00d21970(this);
      uVar7 = F_00d18d00(this,&(*(float *)(gen_frame + 0x28)),param_1);
      if ((((char)uVar7 == '\0') &&
          (fVar10 = (float10)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x70))),
          bVar9 = GEN_ISNAN((float10)0) || GEN_ISNAN(fVar10), bVar9 != (bVar9 || (float10)0 == fVar10))) &&
         ((*((byte *)GEN_TOP((*(int *)(this + 0x128) + 4))) & 0x40) == 0)) {
        F_00d219b0(this);
        F_00d22c70(this,0);
        return 0;
      }
    }
    else {
      (*(float *)(gen_frame + 0x28)) = (float)fVar10;
      *(float *)(this + 0x80) = (float)fVar10;
    }
    if ((*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x6d))) & 2) == 0) {
      fVar10 = (float10)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x68)));
      bVar9 = GEN_ISNAN((float10)0) || GEN_ISNAN(fVar10);
      if ((bVar9 == (bVar9 || (float10)0 == fVar10)) && (uVar7 = F_00cbbff0(this + 8), uVar7 == 0)
         ) {
        pfVar8 = (float *)F_00d188f0(((undefined1 *)(gen_frame + 0x0)),this + 0x50);
        fVar12 = *((float *)GEN_TOP((*(int *)(this + 0x128) + 0x68)));
        fVar10 = (float10)*(double *)&REFG(undefined, 0x10912a8);
        fVar2 = *pfVar8;
        *(int *)(this + 0x138) = *(int *)(this + 0x138) + param_1;
        fVar12 = ((float)GEN_TOF((((float10)fVar12 * fVar10) * (float10)fVar2)));
        (*(int * PTR32 *)(gen_frame + 0x24)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar12)));
        fVar10 = (float10)fVar12 / (float10)*(double *)&REFG(double, 0x11332d0);
        (*(int * PTR32 *)(gen_frame + 0x24)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar10)));
        if (*(int *)(this + 0x138) < (int)fVar10) {
          return 1;
        }
      }
      piVar6 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
      iVar4 = *(int *)(this + 0x128);
      (*(int * PTR32 *)(gen_frame + 0x24)) = piVar6;
      uVar7 = ((code *)*(gen_code32 *)(*piVar6 + 0x18))(piVar6);
      (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar4 + 0x10 + (uVar7 & 0xff) * 4))) * (float10)(*(float *)(gen_frame + 0x28)))))
      ;
      uVar3 = *(ushort *)(iVar4 + 0xe);
      if (uVar3 != 0) {
        fVar12 = F_00d005d0((*(int * PTR32 *)(gen_frame + 0x24)),(uint)uVar3);
        (*(float *)(gen_frame + 0x28)) = (float)((float10)fVar12 * (float10)(*(float *)(gen_frame + 0x28)));
      }
      fVar10 = (float10)(*(float *)(gen_frame + 0x28));
      iVar4 = *(int *)(this + 0x128);
      *(float *)(this + 0x80) = (*(float *)(gen_frame + 0x28));
      bVar9 = GEN_ISNAN((float10)0) || GEN_ISNAN((float10)*(float *)(iVar4 + 0x70));
      if (bVar9 == (bVar9 || (float10)0 == (float10)*(float *)(iVar4 + 0x70))) {
        fVar11 = (float10)*(float *)(iVar4 + 0x70);
        if (fVar10 <= fVar11 && ((!GEN_ISNAN(fVar11) && !GEN_ISNAN(fVar10)) && fVar11 != fVar10)) {
          (*(float *)(gen_frame + 0x28)) = *(float *)(iVar4 + 0x70);
          *(undefined4 *)(this + 0x80) = *(undefined4 *)(iVar4 + 0x70);
        }
        *(float *)(this + 0x8c) = (float)(float10)1;
      }
      if ((*(byte *)(iVar4 + 0xc) & 8) != 0) {
        (*(float *)(gen_frame + 0x28)) = *(float *)(iVar4 + 0x44);
        *(undefined4 *)(this + 0x80) = *(undefined4 *)(iVar4 + 0x44);
      }
      if ((((byte)this[0xb0] & 0x40) != 0) || (bVar5 = F_00d228c0(this), bVar5 != 0)) {
        F_00d2dd80(((undefined1 *)(gen_frame + 0x18)),*(undefined4 *)(this + 0x24));
        F_00cbe880(((undefined1 *)(gen_frame + 0x18)));
        uVar7 = F_00cbe7a0(((undefined1 *)(gen_frame + 0x18)),*(undefined4 *)(this + 0x28));
        if (uVar7 != 0) {
          if (*(char *)(uVar7 + 3) == '\0') {
            *((undefined1 *)GEN_TOP((*(int *)(this + 0x128) + 0x6c))) = 0;
            *((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x6d))) =
                 *((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x6d))) & 0xfe;
          }
          else {
            *((undefined1 *)GEN_TOP((*(int *)(this + 0x128) + 0x6c))) = *(undefined1 *)(uVar7 + 0x6c);
            pbVar1 = ((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x6d)));
            *pbVar1 = *pbVar1 ^ (*(byte *)(uVar7 + 0x6d) ^ *((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x6d))))
                                & 1;
            *((byte *)GEN_TOP((*(int *)(this + 0x128) + 0xc))) =
                 *((byte *)GEN_TOP((*(int *)(this + 0x128) + 0xc))) | *(byte *)(uVar7 + 0xc) & 4;
          }
        }
        F_00cbe8b0(((undefined1 *)(gen_frame + 0x18)));
        bVar5 = F_00d00ed0((*(int * PTR32 *)(gen_frame + 0x24)),this,(uint)(byte)this[0x2d],*(undefined4 *)(this + 0x30),
                             (*(float *)(gen_frame + 0x28)));
        (*(byte *)(gen_frame + 0x2f)) = bVar5;
        F_00cbe3b0(((undefined1 *)(gen_frame + 0x18)));
        return (*(byte *)(gen_frame + 0x2f));
      }
    }
    else {
      uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0x98))))
                        (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))));
      F_00d1b9f0(uVar7,GEN_TOF(*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x44)))),(*(float *)(gen_frame + 0x28)));
    }
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointSound::vf16 */
uint F_00d19360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd19360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)(this + 0x130) = param_1;
  *(undefined4 *)(this + 0x134) = param_2;
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointSound::vf17 */
byte F_00d19380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd19380u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x13c) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00d19390 */
unsigned int F_00d19390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd19390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined2 *)this;
  param_1[1] = *(undefined2 *)((int)this + 2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((int)this + 0x18);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)((int)this + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((int)this + 0x20);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)((int)this + 0x2c);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((int)this + 0x28);
  param_1[0x18] = *(undefined2 *)((int)this + 0x30);
  param_1[0x19] = *(undefined2 *)((int)this + 0x32);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)((int)this + 0x34);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((int)this + 0x38);
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)((int)this + 0x3c);
  return 0;
}

/* ref: FUN_00d19410 */
uint F_00d19410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd19410u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  F_00d0c080(param_1,param_2);
  uVar1 = *(uint *)(param_1 + 0x20);
  *(uint *)(param_2 + 0x20) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x24);
  *(uint *)(param_2 + 0x24) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_2 + 0x28) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x2c);
  *(uint *)(param_2 + 0x2c) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x30);
  *(uint *)(param_2 + 0x30) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x34);
  *(uint *)(param_2 + 0x34) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x38);
  *(uint *)(param_2 + 0x38) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x3c);
  *(uint *)(param_2 + 0x3c) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x40);
  *(uint *)(param_2 + 0x40) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x44);
  *(uint *)(param_2 + 0x44) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x48);
  *(uint *)(param_2 + 0x48) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x4c);
  *(uint *)(param_2 + 0x4c) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x50);
  *(uint *)(param_2 + 0x50) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x54);
  *(uint *)(param_2 + 0x54) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x58);
  *(uint *)(param_2 + 0x58) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x5c);
  *(uint *)(param_2 + 0x5c) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x60);
  *(uint *)(param_2 + 0x60) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 100);
  *(uint *)(param_2 + 100) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x68);
  *(uint *)(param_2 + 0x68) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x70);
  *(uint *)(param_2 + 0x70) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *(undefined1 *)(param_2 + 0x6c) = *(undefined1 *)(param_1 + 0x6c);
  *(byte *)(param_2 + 0x6d) =
       *(byte *)(param_2 + 0x6d) ^ (*(byte *)(param_2 + 0x6d) ^ *(byte *)(param_1 + 0x6d)) & 1;
  *(byte *)(param_2 + 0x6d) =
       (*(byte *)(param_1 + 0x6d) ^ *(byte *)(param_2 + 0x6d)) & 2 ^ *(byte *)(param_2 + 0x6d);
  *(ushort *)(param_2 + 0x74) = *(ushort *)(param_1 + 0x74) << 8 | *(ushort *)(param_1 + 0x74) >> 8;
  *(ushort *)(param_2 + 0x76) = *(ushort *)(param_1 + 0x76) << 8 | *(ushort *)(param_1 + 0x76) >> 8;
  uVar1 = *(uint *)(param_1 + 0x78);
  *(byte *)(param_2 + 0x6d) = *(byte *)(param_2 + 0x6d) & 3;
  *(uint *)(param_2 + 0x78) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *(undefined2 *)(param_2 + 0x6e) = 0;
  *(undefined4 *)(param_2 + 0x7c) = 0;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointSound::vf0 */
uint F_00d19630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd19630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x113324c));
  if ((*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x6d))) & 1) != 0) {
    piVar1 = (int *)F_00d2cd00();
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,*(undefined4 *)(this + 0x20));
    }
  }
  F_00d23680(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::DirectionSound::vf12 */
uint F_00d19690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd19690u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x80);
  return (uint)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::DirectionSound::vf13 */
uint F_00d196b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd196b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x128);
  *param_2 = *(undefined4 *)(uVar1 + 0x24);
  return uVar1;
}

/* ref: FUN_00d196d0 */
float F_00d196d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd196d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return (float)(float10)0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::DirectionSound::vf18 */
uint F_00d196e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd196e0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_3 < 0x40) {
    return 0;
  }
  puVar2 = *(undefined4 * PTR32 *)(in_ecx + 0x128);
  puVar3 = param_2;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0x40;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::DirectionSound::vf19 */
byte F_00d19710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd19710u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::DirectionSound::vf20 */
unsigned int F_00d19720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd19720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00d19730 */
uint F_00d19730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd19730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  code * pcVar5;
  int * piVar6;
  uint uVar7;
  float * pfVar8;
  float * pfVar9;
  undefined2 extraout_var = 0;
  bool bVar10;
  bool bVar11;
  float10 fVar12;
  float10 fVar13;
  float in_XMM1_Da = 0;
  float in_XMM2_Da = 0;
  float in_XMM3_Da = 0;
  float in_XMM7_Da = 0;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  piVar6 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  piVar6 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0x98))(piVar6)));
  fVar12 = F_00c4ca20(in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,
                        (float10)*(float *)((int)this + 0xa0));
  (*(float *)(gen_frame + 0x98)) = (float)((float10)(float)fVar12 * (float10)*(double *)&REFG(undefined, 0x1088120));
  (*(float *)(gen_frame + 0x9c)) = (float)(float10)0;
  fVar12 = F_00c4cde0(in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,
                        (float10)*(float *)((int)this + 0xa0));
  (*(float *)(gen_frame + 0xa0)) = (float)((float10)(float)fVar12 * (float10)*(double *)&REFG(undefined, 0x1088120));
  (*(float *)(gen_frame + 0xa4)) = (float)(float10)1;
  uVar7 = ((code *)*(gen_code32 *)(*piVar6 + 0x5c))(piVar6,((undefined1 *)(gen_frame + 0x48)));
  if ((char)uVar7 != '\0') {
    fVar12 = (float10)0;
    (*(float *)(gen_frame + 0x88)) = (float)fVar12;
    (*(float *)(gen_frame + 0x8c)) = (float)fVar12;
    (*(float *)(gen_frame + 0x90)) = (float)fVar12;
    fVar1 = (float)(float10)1;
    (*(float *)(gen_frame + 0x94)) = fVar1;
    (*(float *)(gen_frame + 0x7c)) = (float)fVar12;
    fVar1 = (float)(float10)1;
    (*(float *)(gen_frame + 0x94)) = fVar1;
    (*(float *)(gen_frame + 0x80)) = (float)fVar12;
    (*(float *)(gen_frame + 0x78)) = (float)fVar12;
    (*(float *)(gen_frame + 0x84)) = fVar1;
    pfVar8 = (float *)F_00c34320(((undefined1 *)(gen_frame + 0x48)),&(*(float *)(gen_frame + 0x88)),&(*(float *)(gen_frame + 0x98)));
    fVar1 = *pfVar8;
    (*(float *)(gen_frame + 0x98)) = fVar1;
    fVar2 = pfVar8[1];
    (*(float *)(gen_frame + 0x9c)) = fVar2;
    fVar3 = pfVar8[2];
    (*(float *)(gen_frame + 0xa0)) = fVar3;
    fVar4 = pfVar8[3];
    *(float *)((int)this + 0x50) = fVar1;
    *(float *)((int)this + 0x54) = fVar2;
    *(float *)((int)this + 0x58) = fVar3;
    *(float *)((int)this + 0x5c) = fVar4;
    *(float *)((int)this + 0x60) = fVar1;
    pfVar8 = (float *)((int)this + 0x60);
    *(float *)((int)this + 100) = fVar2;
    *(float *)((int)this + 0x68) = fVar3;
    *(float *)((int)this + 0x6c) = fVar4;
    *param_1 = (float)(float10)1;
    (*(float *)(gen_frame + 0xa4)) = fVar4;
    pfVar9 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0x68))(piVar6,&(*(float *)(gen_frame + 0x88)),&(*(float *)(gen_frame + 0x98)))));
    fVar12 = (float10)0;
    (*(float *)(gen_frame + 0x98)) = *pfVar9;
    (*(float *)(gen_frame + 0x9c)) = pfVar9[1];
    (*(float *)(gen_frame + 0xa0)) = pfVar9[2];
    (*(float *)(gen_frame + 0xa4)) = pfVar9[3];
    F_00d24070(this,&(*(float *)(gen_frame + 0x98)),param_1,(int)this + 0x8c,(float)fVar12,(float)fVar12,(float)fVar12,
                 (float)fVar12);
    F_00d219d0(this,(uint)param_1,(int)this + 0x8c,param_2);
    pcVar5 = *(gen_code32 *)(*piVar6 + 100);
    *param_1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x20))) * (float10)*param_1)));
    uVar7 = (*pcVar5)(piVar6,((undefined1 *)(gen_frame + 0x8)));
    if ((char)uVar7 == '\x01') {
      pfVar9 = (float *)F_00c34320(((undefined1 *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0x88)),(int)this + 0x70);
      (*(float *)(gen_frame + 0x98)) = *pfVar9;
      (*(float *)(gen_frame + 0x9c)) = pfVar9[1];
      (*(float *)(gen_frame + 0xa0)) = pfVar9[2];
      pfVar8 = &(*(float *)(gen_frame + 0x98));
      (*(float *)(gen_frame + 0xa4)) = pfVar9[3];
    }
    fVar12 = F_00d21d90(this,(uint)pfVar8,param_1,(int)this + 0x8c);
    *(float *)((int)this + 0x90) = (float)fVar12;
    *(float *)((int)this + 0x80) = *param_1;
    fVar13 = (float10)*param_1;
    fVar12 = (float10)0;
    bVar10 = GEN_ISNAN(fVar12) || GEN_ISNAN(fVar13);
    bVar11 = bVar10 || fVar12 == fVar13;
    uVar7 = CONCAT22(extraout_var,
                     (ushort)!(fVar13 <= fVar12) << 8 | (ushort)bVar10 << 10 | (ushort)bVar11 << 0xe
                    );
    if (bVar10 == bVar11) {
      F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
      return CONCAT31((int3)(uVar7 >> 8),1);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return uVar7 & 0xffffff00;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::DirectionSound::vf25 */
uint F_00d19a70(unsigned int gen_a0)
{
  GEN_ENTER(0xd19a70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
  uVar1 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar1 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x50);
  }
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::DirectionSound::vf27 */
byte F_00d19ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd19ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = param_1;
  puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  bVar1 = F_00d228c0(this);
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::DirectionSound::vf29 */
uint F_00d19b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd19b10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  HWND param_1 = (HWND)gen_a1;
  HDC param_2 = (HDC)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  char cVar1;
  HGDIOBJ pvVar2;
  undefined * pHVar3;
  undefined * h;
  char * pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulong color;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = this;
  pvVar2 = gen_imp_GetStockObject(5);
  (*(HGDIOBJ *)(gen_frame + 0x10)) = pvVar2;
  pvVar2 = gen_imp_SelectObject(param_2,pvVar2);
  (*(HGDIOBJ *)(gen_frame + 0x14)) = pvVar2;
  if (((byte)this[0xb0] & 1) == 0) {
    iVar6 = 1;
    color = 0x900000;
  }
  else {
    color = 0x80;
    iVar6 = 2;
  }
  pHVar3 = gen_imp_CreatePen(0,iVar6,color);
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = pHVar3;
  pvVar2 = gen_imp_SelectObject(param_2,pHVar3);
  (*(HGDIOBJ *)(gen_frame + 0x18)) = pvVar2;
  gen_imp_GetClientRect(param_1,&(*(tagRECT *)(gen_frame + 0x68)));
  iVar7 = (*(tagRECT *)(gen_frame + 0x68)).right / 2 - (int)((double)*(float *)(this + 0x50) * *(double *)&REFG(double, 0x1132488));
  iVar6 = (*(tagRECT *)(gen_frame + 0x68)).bottom / 2 - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)(this + 0x58));
  gen_imp_Ellipse(param_2,iVar7 + -0x32,iVar6 + -0x32,iVar7 + 0x32,iVar6 + 0x32);
  if (((byte)(*(undefined * PTR32 *)(gen_frame + 0x20))[0xb0] & 1) != 0) {
    (*(int *)(gen_frame + 0x1c)) = (*(tagRECT *)(gen_frame + 0x68)).right / 2;
    (*(HGDIOBJ *)(gen_frame + 0x24)) = (HGDIOBJ)((*(tagRECT *)(gen_frame + 0x68)).bottom / 2);
    gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x18)));
    gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x28)));
    pHVar3 = gen_imp_CreatePen(0,1,0x9000);
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = pHVar3;
    pvVar2 = gen_imp_SelectObject(param_2,pHVar3);
    (*(HGDIOBJ *)(gen_frame + 0x18)) = pvVar2;
    gen_imp_MoveToEx(param_2,(*(int *)(gen_frame + 0x1c)) -
                     (int)(*(double *)&REFG(double, 0x1132488) * (double)*(float *)((*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x60)),
             (int)(*(HGDIOBJ *)(gen_frame + 0x24)) - (int)((double)*(float *)((*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x68) * *(double *)&REFG(double, 0x1132488)),
             (LPPOINT)0x0);
    gen_imp_LineTo(param_2,(*(int *)(gen_frame + 0x1c)),(int)(*(HGDIOBJ *)(gen_frame + 0x24)));
  }
  F_00c48350(((undefined *)(gen_frame + 0x2c)),0,0x3c);
  F_00c49908(((CHAR *)(((char *)((undefined *)(gen_frame + 0x2c)) + 28))),0x20,&REFG(undefined, 0x11332ec));
  (*(LONG *)((char *)((undefined *)(gen_frame + 0x2c)))) = 0xd;
  (*(BYTE *)(((char *)((undefined *)(gen_frame + 0x2c)) + 23))) = 0x80;
  (*(BYTE *)(((char *)((undefined *)(gen_frame + 0x2c)) + 27))) = '\x01';
  h = gen_imp_CreateFontIndirectA(((undefined *)(gen_frame + 0x2c)));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = h;
  pvVar2 = gen_imp_SelectObject(param_2,h);
  (*(HGDIOBJ *)(gen_frame + 0x24)) = pvVar2;
  if (((byte)(*(undefined * PTR32 *)(gen_frame + 0x20))[0xb0] & 1) == 0) {
    F_00c472af(((char *)(gen_frame + 0x78)),0x20,&REFG(undefined, 0x1133308),&REFG(undefined, 0x1133300));
  }
  else {
    F_00c472af(((char *)(gen_frame + 0x78)),0x20,&REFG(undefined, 0x11332f8),
               (int)(ulonglong)
                    gen_d2bits((double)*(float *)((*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x8c) * *(double *)&REFG(undefined, 0x1088118)),
               (int)((ulonglong)
                     gen_d2bits((double)*(float *)((*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x8c) * *(double *)&REFG(undefined, 0x1088118)) >>
                    0x20));
  }
  pcVar4 = ((char *)(gen_frame + 0x78));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  (*(int *)(gen_frame + 0x1c)) = (int)pcVar4 - (int)(((char *)(gen_frame + 0x78)) + 1);
  gen_imp_GetTextExtentPoint32A(param_2,((char *)(gen_frame + 0x78)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x78)) + 1),&(*(undefined8 *)(gen_frame + 0x4)));
  gen_imp_TextOutA(param_2,iVar7 - (*(LONG *)((char *)&((*(undefined8 *)(gen_frame + 0x4))))) / 2,iVar6 - (*(LONG *)(((char *)&((*(undefined8 *)(gen_frame + 0x4))) + 4))) / 2,((char *)(gen_frame + 0x78)),(*(int *)(gen_frame + 0x1c)));
  gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x24)));
  gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x18)));
  gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x14)));
  gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0xc)));
  gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x28)));
  uVar5 = gen_imp_DeleteObject((*(HGDIOBJ *)(gen_frame + 0x10)));
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
  return uVar5;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::DirectionSound::vf30 */
byte F_00d19db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd19db0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  
  bVar1 = F_00d21f00((undefined *)this,param_1);
  if (bVar1 == 0) {
    return 0;
  }
  F_00c49386(param_1,"Volume = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x20))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x20))))));
  F_00c49386(param_1,"Pitch = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x24))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x24))))));
  F_00c49386(param_1,"ReverbFac = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x28))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x28))))));
  F_00c49386(param_1,"Direction = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x2c))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x2c))))));
  F_00c49386(param_1,"[EndOfSoundObject]\n\n");
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::DirectionSound::vf31 */
byte F_00d19e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd19e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  char * pcVar2;
  int iVar3;
  byte * pbVar4;
  bool bVar5;
  double dVar6;
  
  pcVar2 = "Volume";
  pbVar4 = (byte *)param_2;
  do {
    bVar1 = *pcVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_00d19e81: ;
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_00d19e86;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_00d19e81;
    pcVar2 = pcVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d19e86: ;
  if (iVar3 == 0) {
    pcVar2 = (char *)F_00d00d00(0,0);
    if (pcVar2 != (char *)0x0) {
      dVar6 = F_00c4acaa(pcVar2);
      *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x20))) = (float)dVar6;
      return 1;
    }
  }
  else {
    pcVar2 = "Pitch";
    pbVar4 = (byte *)param_2;
    do {
      bVar1 = *pcVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_00d19ee7: ;
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_00d19eec;
      }
      if (bVar1 == 0) break;
      bVar1 = pcVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_00d19ee7;
      pcVar2 = pcVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00d19eec: ;
    if (iVar3 == 0) {
      pcVar2 = (char *)F_00d00d00(0,0);
      if (pcVar2 != (char *)0x0) {
        dVar6 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x24))) = (float)dVar6;
        return 1;
      }
    }
    else {
      pcVar2 = "ReverbFac";
      pbVar4 = (byte *)param_2;
      do {
        bVar1 = *pcVar2;
        bVar5 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_00d19f45: ;
          iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
          goto LAB_00d19f4a;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar2[1];
        bVar5 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_00d19f45;
        pcVar2 = pcVar2 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00d19f4a: ;
      if (iVar3 == 0) {
        pcVar2 = (char *)F_00d00d00(0,0);
        if (pcVar2 != (char *)0x0) {
          dVar6 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x28))) = (float)dVar6;
          return 1;
        }
      }
      else {
        pcVar2 = "Direction";
        pbVar4 = (byte *)param_2;
        do {
          bVar1 = *pcVar2;
          bVar5 = bVar1 < *pbVar4;
          if (bVar1 != *pbVar4) {
LAB_00d19fa7: ;
            iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
            goto LAB_00d19fac;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar2[1];
          bVar5 = bVar1 < pbVar4[1];
          if (bVar1 != pbVar4[1]) goto LAB_00d19fa7;
          pcVar2 = pcVar2 + 2;
          pbVar4 = pbVar4 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00d19fac: ;
        if (iVar3 != 0) {
          bVar1 = F_00d22040(param_1,param_2);
          return bVar1;
        }
        pcVar2 = (char *)F_00d00d00(0,0);
        if (pcVar2 != (char *)0x0) {
          dVar6 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x2c))) = (float)dVar6;
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::DirectionSound::vf14 */
byte F_00d19ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd19ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  int * this;
  int iVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  float10 fVar6;
  float10 fVar7;
  float fVar8;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_1;
  ((code *)*(gen_code32 *)(*(int *)param_1 + 0x70))(0x406);
  if (((byte)param_1[0xb0] & 4) != 0) {
    return 0;
  }
  bVar3 = F_00d217a0(param_1,param_2);
  if (bVar3 != 0) {
    if ((((*((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 4))) & 0x80) == 0) &&
        (fVar6 = (float10)*((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x30))),
        bVar5 = GEN_ISNAN((float10)0) || GEN_ISNAN(fVar6), bVar5 == (bVar5 || (float10)0 == fVar6))) &&
       (uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc))) + 0x10))))
                          (*((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc)))), (char)uVar4 == '\0')) {
      fVar8 = ((float)GEN_TOF((((float10)*((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x30))) * (float10)(int)param_2
                      ) / (float10)*(double *)&REFG(undefined, 0x10912a8) + (float10)*(float *)(param_1 + 0xa0))));
      fVar6 = (float10)fVar8;
      *(float *)(param_1 + 0xa0) = fVar8;
      fVar7 = (float10)REFG(double, 0x10920b8);
      if (!(fVar6 <= fVar7) == (GEN_ISNAN(fVar7) || GEN_ISNAN(fVar6))) {
        if (fVar6 <= (float10)0) {
          *(float *)(param_1 + 0xa0) = (float)(fVar7 + fVar6);
        }
      }
      else {
        *(float *)(param_1 + 0xa0) = (float)(fVar6 - fVar7);
      }
    }
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)(float10)0)));
    *(float *)(param_1 + 0x8c) = (float)(float10)1;
    uVar4 = F_00d19730(param_1,&(*(undefined * PTR32 *)(gen_frame + 0x8)),param_2);
    if ((char)uVar4 == '\0') {
      F_00d219b0(param_1);
      F_00d22c70(param_1,0);
    }
    else {
      this = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc)));
      iVar2 = *(int *)(param_1 + 0x128);
      uVar4 = ((code *)*(gen_code32 *)(*this + 0x18))(this);
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar2 + 0x10 + (uVar4 & 0xff) * 4))) *
                       (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8)))))))))));
      uVar1 = *(ushort *)(iVar2 + 0xe);
      if (uVar1 != 0) {
        fVar8 = F_00d005d0(this,(uint)uVar1);
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar8 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8)))))))));
      }
      iVar2 = *(int *)(param_1 + 0x128);
      *(undefined * PTR32 *)(param_1 + 0x80) = (*(undefined * PTR32 *)(gen_frame + 0x8));
      if ((*(byte *)(iVar2 + 0xc) & 8) != 0) {
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = *(undefined * PTR32 *)(iVar2 + 0x20);
        *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(iVar2 + 0x20);
      }
      if ((((byte)param_1[0xb0] & 0x40) != 0) || (bVar3 = F_00d228c0(param_1), bVar3 != 0)) {
        bVar3 = F_00d00ed0(this,param_1,(uint)(byte)param_1[0x2d],*(undefined4 *)(param_1 + 0x30),
                             ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8))))));
        return bVar3;
      }
    }
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::DirectionSound::vf26 */
uint F_00d1a560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1a560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = (undefined4 *)F_00d22da0(this,param_1,0x40);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0xf4))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))));
  if (uVar2 != 0) {
    puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
    puVar5 = puVar1;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    return (uint)(puVar1 + 0x10);
  }
  F_00d1a8f0(*(undefined4 *)(this + 0x128),(uint)puVar1);
  return (uint)(puVar1 + 0x10);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::DirectionSound::vf28 */
uint F_00d1a5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1a5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  uVar3 = *(uint *)(this + 0x1c);
  if (*((int *)GEN_TOP((*(int *)(uVar3 + 0xc) + 0x2f8))) != 0) {
    F_00d22b20(this,&(*(undefined2 *)(gen_frame + 0x8)));
    (*(undefined2 *)(gen_frame + 0x8)) = (undefined2)param_1;
    (*(undefined2 *)(gen_frame + 0xa)) = 0x40;
    uVar5 = F_00427d90();
    iVar2 = *(int *)(this + 0x128);
    (*(ulonglong *)(gen_frame + 0x10)) = uVar5;
    if (((*(byte *)(iVar2 + 4) & 0x80) == 0) &&
       (bVar4 = GEN_ISNAN((float10)0) || GEN_ISNAN((float10)*(float *)(iVar2 + 0x30)),
       bVar4 == (bVar4 || (float10)0 == (float10)*(float *)(iVar2 + 0x30)))) {
      uVar1 = *(undefined4 *)(this + 0xa0);
    }
    else {
      uVar1 = *(undefined4 *)(iVar2 + 0x2c);
    }
    (*(undefined4 *)(gen_frame + 0x40)) = uVar1;
    F_00d1a880(&(*(undefined2 *)(gen_frame + 0x8)),&(*(undefined2 *)(gen_frame + 0x8)));
    uVar3 = F_00d00b10(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))),&(*(undefined2 *)(gen_frame + 0x8)),0x40);
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar3;
}

/* ref: FUN_00d1a660 */
uint F_00d1a660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd1a660u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int * this_00;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  F_00d22580(this,param_1,param_2,param_3);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x11333cc));
  *(uint *)((int)this + 0xb0) =
       *(uint *)((int)this + 0xb0) ^ ((param_4 & 0xff) << 4 ^ *(uint *)((int)this + 0xb0)) & 0x10;
  if ((char)param_4 == '\0') {
    *(undefined4 * PTR32 *)((int)this + 0x128) = param_1;
  }
  else {
    *(undefined4 * PTR32 *)((int)this + 0x128) = (undefined4 *)((int)this + 0x130);
    puVar3 = param_1;
    puVar4 = (undefined4 *)((int)this + 0x130);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    if (*((char *)GEN_TOP((*(int *)((int)this + 0x128) + 3))) == '\0') {
      *((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x30))) = (float)(float10)0;
    }
  }
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x128);
  F_00d228c0(this);
  *(undefined4 *)((int)this + 0xa0) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x128) + 0x2c)));
  F_00d20fe0(this,(uint)(~(*((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 4))) >> 5) & 1));
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  uVar1 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar1 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x50);
  }
  F_00d1a5c0(this,0x401);
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60));
  return (uint)this;
}

/* ref: FUN_00d1a780 */
uint F_00d1a780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1a780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int * this_00;
  float10 fVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  F_00d22720(this,param_1,param_2);
  fVar1 = (float10)1;
  *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) | 0x10;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x11333cc));
  *(undefined4 * PTR32 *)((int)this + 0x128) = (undefined4 *)((int)this + 0x130);
  *(undefined4 *)((int)this + 0x134) = 4;
  *(undefined1 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(float *)((int)this + 0x140) = (float)fVar1;
  *(float *)((int)this + 0x144) = (float)fVar1;
  *(float *)((int)this + 0x148) = (float)fVar1;
  *(float *)((int)this + 0x14c) = (float)fVar1;
  *(undefined1 *)((int)this + 0x13d) = 0;
  *(float *)((int)this + 0x150) = (float)fVar1;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(float *)((int)this + 0x154) = (float)fVar1;
  *(undefined4 *)((int)this + 0x168) = 0;
  *(float *)((int)this + 0x158) = (float)fVar1;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined2 *)((int)this + 0x13e) = 0;
  *(float *)((int)this + 0x15c) = (float)(float10)0;
  *(undefined4 *)((int)this + 0x130) = 0x1020040;
  *(float *)((int)this + 0x160) = (float)(float10)0;
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x128);
  *(undefined4 *)((int)this + 0xa0) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x128) + 0x2c)));
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  uVar2 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar2 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x50);
  }
  F_00d1a5c0(this,0x401);
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60));
  return (uint)this;
}

/* ref: FUN_00d1a880 */
unsigned int F_00d1a880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1a880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined2 *)this;
  param_1[1] = *(undefined2 *)((int)this + 2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((int)this + 0x18);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)((int)this + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((int)this + 0x20);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)((int)this + 0x2c);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((int)this + 0x28);
  param_1[0x18] = *(undefined2 *)((int)this + 0x30);
  param_1[0x19] = *(undefined2 *)((int)this + 0x32);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)((int)this + 0x34);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((int)this + 0x38);
  return 0;
}

/* ref: FUN_00d1a8f0 */
uint F_00d1a8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1a8f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  F_00d0c080(param_1,param_2);
  uVar1 = *(uint *)(param_1 + 0x20);
  *(uint *)(param_2 + 0x20) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x24);
  *(uint *)(param_2 + 0x24) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_2 + 0x28) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x2c);
  *(uint *)(param_2 + 0x2c) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x30);
  *(uint *)(param_2 + 0x30) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *(undefined4 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::DirectionSound::vf0 */
uint F_00d1a980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1a980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x11333cc));
  F_00d23680(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::AmbientSound::vf12 */
uint F_00d1a9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1a9c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x80);
  return (uint)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::AmbientSound::vf13 */
uint F_00d1a9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1a9e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x128);
  *param_2 = *(undefined4 *)(uVar1 + 0x24);
  return uVar1;
}

/* ref: FUN_00d1aa00 */
float F_00d1aa00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1aa00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return (float)(float10)0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::AmbientSound::vf18 */
uint F_00d1aa10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1aa10u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_3 < 0x50) {
    return 0;
  }
  puVar2 = *(undefined4 * PTR32 *)(in_ecx + 0x128);
  puVar3 = param_2;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0x50;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::AmbientSound::vf19 */
byte F_00d1aa40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd1aa40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::AmbientSound::vf20 */
unsigned int F_00d1aa50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1aa50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00d1aa60 */
byte F_00d1aa60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1aa60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  bool bVar2;
  
  *(float *)param_2 = (float)(float10)1;
  F_00d21d00(param_1,param_2,(int)param_1 + 0x8c);
  F_00d219d0(param_1,param_2,(int)param_1 + 0x8c,param_3);
  fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)((int)param_1 + 0x128) + 0x20))) *
                 (float10)*(float *)param_2)));
  *(float *)param_2 = fVar1;
  *(float *)((int)param_1 + 0x80) = fVar1;
  bVar2 = GEN_ISNAN((float10)0) || GEN_ISNAN((float10)*(float *)param_2);
  if (bVar2 != (bVar2 || (float10)0 == (float10)*(float *)param_2)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00d1aac0 */
uint F_00d1aac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1aac0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)0;
  *param_3 = (float)fVar1;
  param_3[1] = (float)fVar1;
  param_3[3] = 0.0;
  param_3[2] = (float)fVar1;
  *param_1 = (float)fVar1;
  *param_2 = (float)fVar1;
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::AmbientSound::vf25 */
uint F_00d1aaf0(unsigned int gen_a0)
{
  GEN_ENTER(0xd1aaf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
  uVar1 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar1 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x60);
  }
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::AmbientSound::vf27 */
byte F_00d1ab60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1ab60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = param_1;
  puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  bVar1 = F_00d228c0(this);
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::AmbientSound::vf30 */
byte F_00d1ab90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1ab90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  
  bVar1 = F_00d21f00((undefined *)this,param_1);
  if (bVar1 == 0) {
    return 0;
  }
  F_00c49386(param_1,"Volume = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x20))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x20))))));
  F_00c49386(param_1,"Pitch = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x24))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x24))))));
  F_00c49386(param_1,"ReverbFac = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x28))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x28))))));
  F_00c49386(param_1,"[EndOfSoundObject]\n\n");
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::AmbientSound::vf31 */
byte F_00d1ac10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1ac10u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  char * pcVar2;
  int iVar3;
  byte * pbVar4;
  bool bVar5;
  double dVar6;
  
  pcVar2 = "Volume";
  pbVar4 = (byte *)param_2;
  do {
    bVar1 = *pcVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_00d1ac41: ;
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_00d1ac46;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_00d1ac41;
    pcVar2 = pcVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d1ac46: ;
  if (iVar3 == 0) {
    pcVar2 = (char *)F_00d00d00(0,0);
    if (pcVar2 != (char *)0x0) {
      dVar6 = F_00c4acaa(pcVar2);
      *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x20))) = (float)dVar6;
      return 1;
    }
  }
  else {
    pcVar2 = "Pitch";
    pbVar4 = (byte *)param_2;
    do {
      bVar1 = *pcVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_00d1aca7: ;
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_00d1acac;
      }
      if (bVar1 == 0) break;
      bVar1 = pcVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_00d1aca7;
      pcVar2 = pcVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00d1acac: ;
    if (iVar3 == 0) {
      pcVar2 = (char *)F_00d00d00(0,0);
      if (pcVar2 != (char *)0x0) {
        dVar6 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x24))) = (float)dVar6;
        return 1;
      }
    }
    else {
      pcVar2 = "ReverbFac";
      pbVar4 = (byte *)param_2;
      do {
        bVar1 = *pcVar2;
        bVar5 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_00d1ad05: ;
          iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
          goto LAB_00d1ad0a;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar2[1];
        bVar5 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_00d1ad05;
        pcVar2 = pcVar2 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00d1ad0a: ;
      if (iVar3 != 0) {
        bVar1 = F_00d22040(param_1,param_2);
        return bVar1;
      }
      pcVar2 = (char *)F_00d00d00(0,0);
      if (pcVar2 != (char *)0x0) {
        dVar6 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x28))) = (float)dVar6;
        return 1;
      }
    }
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::AmbientSound::vf14 */
byte F_00d1ad50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1ad50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  int * this_00;
  int iVar2;
  byte bVar3;
  uint uVar4;
  float fVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  ((code *)*(gen_code32 *)(*(int *)this + 0x70))(0x406);
  if (((byte)this[0xb0] & 4) != 0) {
    return 0;
  }
  bVar3 = F_00d217a0((undefined *)this,param_1);
  if (bVar3 != 0) {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)(float10)0)));
    *(float *)(this + 0x8c) = (float)(float10)1;
    bVar3 = F_00d1aa60(this,(uint)&(*(undefined * PTR32 *)(gen_frame + 0x8)),param_1);
    if (bVar3 != 0) {
      this_00 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
      iVar2 = *(int *)(this + 0x128);
      uVar4 = ((code *)*(gen_code32 *)(*this_00 + 0x18))(this_00);
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar2 + 0x10 + (uVar4 & 0xff) * 4))) *
                       (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8)))))))))));
      uVar1 = *(ushort *)(iVar2 + 0xe);
      if (uVar1 != 0) {
        fVar5 = F_00d005d0(this_00,(uint)uVar1);
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar5 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8)))))))));
      }
      iVar2 = *(int *)(this + 0x128);
      *(undefined * PTR32 *)(this + 0x80) = (*(undefined * PTR32 *)(gen_frame + 0x8));
      if ((*(byte *)(iVar2 + 0xc) & 8) != 0) {
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = *(undefined * PTR32 *)(iVar2 + 0x20);
        *(undefined4 *)(this + 0x80) = *(undefined4 *)(iVar2 + 0x20);
      }
      if ((((byte)this[0xb0] & 0x40) == 0) && (bVar3 = F_00d228c0(this), bVar3 == 0)) {
        return 1;
      }
      bVar3 = F_00d00ed0(this_00,this,(uint)(byte)this[0x2d],*(undefined4 *)(this + 0x30),
                           ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8))))));
      return bVar3;
    }
    F_00d219b0(this);
    F_00d22c70(this,0);
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::AmbientSound::vf26 */
uint F_00d1b190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1b190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = (undefined4 *)F_00d22da0(this,param_1,0x50);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0xf4))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))));
  if (uVar2 != 0) {
    puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
    puVar5 = puVar1;
    for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    return (uint)(puVar1 + 0x14);
  }
  F_00d1b580(*(undefined4 *)(this + 0x128),(uint)puVar1);
  return (uint)(puVar1 + 0x14);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::AmbientSound::vf28 */
uint F_00d1b1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1b1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  uVar1 = *(uint *)(this + 0x1c);
  if (*((int *)GEN_TOP((*(int *)(uVar1 + 0xc) + 0x2f8))) != 0) {
    F_00d22b20(this,&(*(undefined2 *)(gen_frame + 0x0)));
    (*(undefined2 *)(gen_frame + 0x0)) = (undefined2)param_1;
    (*(undefined2 *)(gen_frame + 0x2)) = 0x38;
    (*(ulonglong *)(gen_frame + 0x8)) = F_00427d90();
    F_00d1b510(&(*(undefined2 *)(gen_frame + 0x0)),&(*(undefined2 *)(gen_frame + 0x0)));
    uVar1 = F_00d00b10(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))),&(*(undefined2 *)(gen_frame + 0x0)),0x38);
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar1;
}

/* ref: FUN_00d1b270 */
uint F_00d1b270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd1b270u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int * this_00;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  F_00d22580(this,param_1,param_2,param_3);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1133504));
  *(uint *)((int)this + 0xb0) =
       *(uint *)((int)this + 0xb0) ^ ((param_4 & 0xff) << 4 ^ *(uint *)((int)this + 0xb0)) & 0x10;
  if ((char)param_4 == '\0') {
    *(undefined4 * PTR32 *)((int)this + 0x128) = param_1;
  }
  else {
    *(undefined4 * PTR32 *)((int)this + 0x128) = (undefined4 *)((int)this + 0x130);
    puVar3 = param_1;
    puVar4 = (undefined4 *)((int)this + 0x130);
    for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x128);
  F_00d228c0(this);
  F_00d20fe0(this,(uint)(~(*((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 4))) >> 5) & 1));
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  uVar1 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar1 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x60);
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc))) + 0x2f8))) != 0) {
    F_00d22b20(this,((undefined4 *)(gen_frame + 0x28)));
    ((undefined4 *)(gen_frame + 0x28))[0] = 0x380401;
    (*(ulonglong *)(gen_frame + 0x30)) = F_00427d90();
    F_00d1b510(((undefined4 *)(gen_frame + 0x28)),((undefined4 *)(gen_frame + 0x28)));
    F_00d00b10(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc))),((undefined4 *)(gen_frame + 0x28)),0x38);
  }
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70));
  return (uint)this;
}

/* ref: FUN_00d1b3b0 */
uint F_00d1b3b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1b3b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int * this_00;
  float10 fVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  F_00d22720(this,param_1,param_2);
  fVar1 = (float10)1;
  *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) | 0x10;
  *(undefined2 * PTR32 *)((int)this + 0x128) = (undefined2 *)((int)this + 0x130);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1133504));
  *(undefined2 *)((int)this + 0x133) = 0x400;
  *(undefined1 *)((int)this + 0x13c) = 0;
  *(undefined1 *)((int)this + 0x135) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined2 *)((int)this + 0x136) = 0;
  *(float *)((int)this + 0x140) = (float)fVar1;
  *(float *)((int)this + 0x144) = (float)fVar1;
  *(float *)((int)this + 0x148) = (float)fVar1;
  *(float *)((int)this + 0x14c) = (float)fVar1;
  *(undefined2 *)((int)this + 0x13e) = 0;
  *(float *)((int)this + 0x150) = (float)fVar1;
  *(undefined1 *)((int)this + 0x13d) = 0;
  *(float *)((int)this + 0x154) = (float)fVar1;
  *(undefined1 *)((int)this + 0x132) = 1;
  *(float *)((int)this + 0x158) = (float)fVar1;
  *(undefined2 *)((int)this + 0x130) = 0x50;
  *(float *)((int)this + 0x15c) = (float)fVar1;
  *(float *)((int)this + 0x160) = (float)fVar1;
  *(float *)((int)this + 0x164) = (float)fVar1;
  *(float *)((int)this + 0x168) = (float)fVar1;
  *(float *)((int)this + 0x16c) = (float)fVar1;
  *(float *)((int)this + 0x170) = (float)fVar1;
  *(float *)((int)this + 0x174) = (float)fVar1;
  *(float *)((int)this + 0x178) = (float)fVar1;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x128);
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  uVar2 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar2 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x60);
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc))) + 0x2f8))) != 0) {
    F_00d22b20(this,((undefined4 *)(gen_frame + 0x28)));
    ((undefined4 *)(gen_frame + 0x28))[0] = 0x380401;
    (*(ulonglong *)(gen_frame + 0x30)) = F_00427d90();
    F_00d1b510(((undefined4 *)(gen_frame + 0x28)),((undefined4 *)(gen_frame + 0x28)));
    F_00d00b10(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc))),((undefined4 *)(gen_frame + 0x28)),0x38);
  }
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70));
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf29 */
unsigned int F_00d1b500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1b500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00d1b510 */
unsigned int F_00d1b510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1b510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined2 *)this;
  param_1[1] = *(undefined2 *)((int)this + 2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((int)this + 0x18);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)((int)this + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((int)this + 0x20);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)((int)this + 0x2c);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((int)this + 0x28);
  param_1[0x18] = *(undefined2 *)((int)this + 0x30);
  param_1[0x19] = *(undefined2 *)((int)this + 0x32);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)((int)this + 0x34);
  return 0;
}

/* ref: FUN_00d1b580 */
unsigned int F_00d1b580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1b580u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  F_00d0c080(param_1,param_2);
  uVar1 = *(uint *)(param_1 + 0x20);
  *(uint *)(param_2 + 0x20) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x24);
  *(uint *)(param_2 + 0x24) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_2 + 0x28) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  iVar3 = 8;
  puVar2 = (uint *)(param_2 + 0x2c);
  do {
    uVar1 = *((uint *)GEN_TOP(((param_1 - param_2) + (int)puVar2)));
    iVar3 = iVar3 + -1;
    *puVar2 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    puVar2 = puVar2 + 1;
  } while (iVar3 != 0);
  *(undefined4 *)(param_2 + 0x4c) = 0;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::AmbientSound::vf0 */
uint F_00d1b600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1b600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1133504));
  F_00d23680(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00d1b630 */
unsigned int F_00d1b630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1b630u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: FUN_00d1b650 */
unsigned int F_00d1b650(float gen_a0)
{
  GEN_ENTER(0xd1b650u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00d1b670 */
uint F_00d1b670(float gen_a0)
{
  GEN_ENTER(0xd1b670u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  
  fVar1 = (float10)param_1;
  if ((float10)0 <= fVar1) {
    fVar1 = (float10)*(double *)&REFG(undefined, 0x1080228) + fVar1;
  }
  else {
    fVar1 = fVar1 - (float10)*(double *)&REFG(undefined, 0x1080228);
  }
  return (int)(fVar1 / (float10)REFG(double, 0x10920b8));
}

/* ref: FUN_00d1b7a0 */
uint F_00d1b7a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd1b7a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: FUN_00d1b7b0 */
uint F_00d1b7b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1b7b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf4 */
uint F_00d1b7c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1b7c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00cffbb0(param_1,param_2,this);
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf7 */
byte F_00d1b7e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1b7e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf8 */
byte F_00d1b7f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1b7f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf9 */
byte F_00d1b800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1b800u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00d1b810 */
unsigned int F_00d1b810(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xd1b810u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + 0x58) = param_2;
  *(float *)(in_ecx + 0x5c) = param_3;
  return 0;
}

/* ref: FUN_00d1b830 */
unsigned int F_00d1b830(unsigned int gen_a0)
{
  GEN_ENTER(0xd1b830u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(float *)(in_ecx + 0x58) = (float)(float10)0;
  *(float *)(in_ecx + 0x5c) = (float)(float10)0;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf19 */
float F_00d1b840(unsigned int gen_a0)
{
  GEN_ENTER(0xd1b840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  
  fVar1 = F_00cccde0(this + 0x30);
  return fVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf20 */
float10 F_00d1b850(unsigned int gen_a0)
{
  GEN_ENTER(0xd1b850u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x54) - (float10)*(float *)(in_ecx + 0x58))));
  fVar2 = (float10)*(float *)(in_ecx + 0x5c);
  if (fVar1 <= fVar2 && ((!GEN_ISNAN(fVar2) && !GEN_ISNAN(fVar1)) && fVar2 != fVar1)) {
    fVar1 = (float10)*(float *)(in_ecx + 0x5c);
  }
  return fVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf12 */
byte F_00d1b880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1b880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (*(int *)(this + 0x68) == 0) {
    return 0;
  }
  *param_1 = *(undefined4 *)(this + 0x70);
  param_1[1] = *(undefined4 *)(this + 0x74);
  param_1[2] = *(undefined4 *)(this + 0x78);
  param_1[3] = *(undefined4 *)(this + 0x7c);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf22 */
byte F_00d1b8b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1b8b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (*(int *)(this + 0x68) == 0) {
    return 0;
  }
  *param_1 = *(undefined4 *)(this + 0x80);
  param_1[1] = *(undefined4 *)(this + 0x84);
  param_1[2] = *(undefined4 *)(this + 0x88);
  param_1[3] = *(undefined4 *)(this + 0x8c);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf23 */
byte F_00d1b8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1b8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (*(int *)(this + 0x68) == 0) {
    return 0;
  }
  F_004eb4e0(param_1,this + 0x90);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf24 */
unsigned int F_00d1b930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1b930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_004eb4e0(this + 0x110,param_1);
  this[0x6d] = (undefined1)0x1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf25 */
byte F_00d1b950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1b950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (this[0x6d] == (undefined1)0x0) {
    return 0;
  }
  F_004eb4e0(param_1,this + 0x110);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf26 */
uint F_00d1b980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1b980u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined4 * puVar2;
  
  if (*(int *)(this + 0x68) == 0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    uVar1 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar1;
    return (uint)param_1;
  }
  puVar2 = (undefined4 *)F_00c34320(this + 0xd0,((undefined1 *)(gen_frame + 0xc)),param_2);
  *param_1 = *puVar2;
  param_1[1] = puVar2[1];
  uVar1 = puVar2[3];
  param_1[2] = puVar2[2];
  param_1[3] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00d1b9f0 */
unsigned int F_00d1b9f0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xd1b9f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  if ((float10)*(float *)(in_ecx + 0x24) <= (float10)param_3) {
    *(float *)(in_ecx + 0x20) = param_2;
    *(float *)(in_ecx + 0x24) = param_3;
    return 0;
  }
  return 0;
}

/* ref: FUN_00d1ba20 */
uint F_00d1ba20(unsigned int gen_a0)
{
  GEN_ENTER(0xd1ba20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 in_EAX = 0;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float10 fVar4;
  float10 fVar5;
  
  bVar2 = GEN_ISNAN((float10)*(float *)((int)this + 0x20)) || GEN_ISNAN((float10)*(float *)((int)this + 0x28));
  if (bVar2 != (bVar2 || (float10)*(float *)((int)this + 0x20) ==
                         (float10)*(float *)((int)this + 0x28))) {
    fVar4 = (float10)*(float *)((int)this + 0x2c);
    fVar5 = (float10)*(float *)((int)this + 0x24);
    bVar2 = GEN_ISNAN(fVar5) || GEN_ISNAN(fVar4);
    bVar3 = bVar2 || fVar5 == fVar4;
    uVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),
                     (ushort)!(fVar4 <= fVar5) << 8 | (ushort)bVar2 << 10 | (ushort)bVar3 << 0xe);
    if (bVar2 != bVar3) goto LAB_00d1ba7b;
  }
  F_00d2de20(((undefined1 *)(gen_frame + 0x4)),0);
  uVar1 = F_00cbb980(((undefined1 *)(gen_frame + 0x4)),*(float *)((int)this + 0x20),*(float *)((int)this + 0x24));
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)((int)this + 0x20);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)((int)this + 0x24);
  F_00cbb890(((undefined1 *)(gen_frame + 0x4)));
LAB_00d1ba7b: ;
  *(float *)((int)this + 0x20) = (float)(float10)0;
  *(float *)((int)this + 0x24) = (float)(float10)0;
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf32 */
unsigned int F_00d1bb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1bb20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined * pLVar4;
  uint local_8;
  
  iVar1 = *(int *)(this + 0x150);
  uVar2 = (uint)(byte)this[iVar1 * 2 + 0x1f2];
  local_8 = 0;
  if (uVar2 != 0) {
    do {
      iVar3 = 0;
      if (uVar2 != 0) {
        pLVar4 = this + (iVar1 * 3 + 0xea) * 2;
        do {
          if (local_8 == (byte)*pLVar4) {
            *(undefined4 *)(param_1 + local_8 * 4) =
                 *((undefined4 *)GEN_TOP((this + (iVar3 + iVar1 * 6) * 4 + 0x1fc)));
            break;
          }
          iVar3 = iVar3 + 1;
          pLVar4 = pLVar4 + 1;
        } while (iVar3 < (int)uVar2);
      }
      iVar1 = *(int *)(this + 0x150);
      uVar2 = (uint)(byte)this[iVar1 * 2 + 0x1f2];
      local_8 = local_8 + 1;
    } while ((int)local_8 < (int)uVar2);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf31 */
unsigned int F_00d1bba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1bba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)(byte)this[param_1 * 2 + 0x1f2];
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      iVar1 = 0;
      if (uVar2 != 0) {
        do {
          if (uVar3 == (byte)this[iVar1 + (param_1 * 3 + 0xea) * 2]) {
            *(undefined4 *)(param_2 + uVar3 * 4) =
                 *((undefined4 *)GEN_TOP((this + (iVar1 + param_1 * 6) * 4 + 0x1fc)));
            break;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < (int)uVar2);
      }
      uVar2 = (uint)(byte)this[param_1 * 2 + 0x1f2];
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < (int)uVar2);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf36 */
unsigned int F_00d1bc10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1bc10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x150);
  iVar2 = 0;
  if (this[iVar1 * 2 + 0x1f2] != (undefined1)0x0) {
    do {
      iVar1 = iVar2 + iVar1 * 6;
      iVar2 = iVar2 + 1;
      *(undefined4 *)(param_1 + -4 + iVar2 * 4) = *(undefined4 *)(this + iVar1 * 4 + 0x274);
      iVar1 = *(int *)(this + 0x150);
    } while (iVar2 < (int)(uint)(byte)this[iVar1 * 2 + 0x1f2]);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf35 */
unsigned int F_00d1bc60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1bc60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  undefined * pLVar2;
  
  iVar1 = 0;
  if (this[param_1 * 2 + 0x1f2] != (undefined1)0x0) {
    pLVar2 = this + param_1 * 0x18 + 0x274;
    do {
      iVar1 = iVar1 + 1;
      *(undefined4 *)(param_2 + -4 + iVar1 * 4) = *(undefined4 *)pLVar2;
      pLVar2 = pLVar2 + 4;
    } while (iVar1 < (int)(uint)(byte)this[param_1 * 2 + 0x1f2]);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf39 */
unsigned int F_00d1bca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1bca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * pLVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (this[*(int *)(this + 0x150) * 2 + 0x1f2] != (undefined1)0x0) {
    pLVar1 = this + 0x154;
    puVar2 = param_1;
    do {
      *puVar2 = *(undefined4 *)pLVar1;
      puVar2[1] = *(undefined4 *)(pLVar1 + 4);
      puVar2[2] = *(undefined4 *)(pLVar1 + 8);
      puVar2[3] = *(undefined4 *)(pLVar1 + 0xc);
      iVar3 = iVar3 + 1;
      pLVar1 = pLVar1 + 0x10;
      puVar2 = puVar2 + 4;
    } while (iVar3 < (int)(uint)(byte)this[*(int *)(this + 0x150) * 2 + 0x1f2]);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf30 */
byte F_00d1bd00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1bd00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined1 LVar1;
  
  *param_1 = this[*(int *)(this + 0x150) * 2 + 0x1f2];
  LVar1 = this[*(int *)(this + 0x150) * 2 + 499];
  *(undefined1 *)param_2 = LVar1;
  return (byte)LVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf29 */
byte F_00d1bd30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd1bd30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined1 LVar1;
  
  *param_2 = this[param_1 * 2 + 0x1f2];
  LVar1 = this[param_1 * 2 + 499];
  *(undefined1 *)param_3 = LVar1;
  return (byte)LVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf40 */
uint F_00d1bd60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd1bd60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  if (6 < (byte)*param_2) {
    *param_2 = (undefined1)0x6;
  }
  if (1 < (byte)*param_3) {
    *param_3 = (undefined1)0x1;
  }
  this[param_1 * 2 + 0x1f2] = *param_2;
  this[param_1 * 2 + 499] = *param_3;
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf33 */
unsigned int F_00d1bda0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xd1bda0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)*(double *)&REFG(undefined, 0x10920c0);
  *(float *)(in_ecx + 0x60) = (float)((float10)param_2 / fVar1);
  *(float *)(in_ecx + 100) = (float)((float10)param_3 / fVar1);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf34 */
unsigned int F_00d1bdc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1bdc0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)*(double *)&REFG(undefined, 0x10920c0);
  *param_2 = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x60) * fVar1)));
  *param_3 = ((float)GEN_TOF((fVar1 * (float10)*(float *)(in_ecx + 100))));
  return 0;
}

/* ref: FUN_00d1bdf0 */
uint F_00d1bdf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1bdf0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)*param_1;
  fVar2 = (float10)*param_2;
  if (fVar1 <= fVar2 && ((!GEN_ISNAN(fVar2) && !GEN_ISNAN(fVar1)) && fVar2 != fVar1)) {
    return 0xffffffff;
  }
  if (!((float10)*param_1 <= (float10)*param_2) !=
      (GEN_ISNAN((float10)*param_2) || GEN_ISNAN((float10)*param_1))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00d1be30 */
uint F_00d1be30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1be30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  byte bVar2;
  undefined1 uVar3;
  float10 fVar4;
  uint uVar5;
  float fVar6;
  float * pfVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  fVar6 = 0.0;
  if (*(char *)((int)this + param_1 * 2 + 0x1f2) != '\0') {
    fVar4 = (float10)0;
    (*(float * PTR32 *)(gen_frame + 0x0)) = (float *)((int)this + param_1 * 0x18 + 0x1fc);
    fVar8 = (float10)REFG(double, 0x10920b8);
    do {
      fVar9 = (float10)*(*(float * PTR32 *)(gen_frame + 0x0));
      if (fVar4 <= fVar9) {
        fVar10 = fVar9 + (float10)*(double *)&REFG(undefined, 0x1080228);
      }
      else {
        fVar10 = fVar9 - (float10)*(double *)&REFG(undefined, 0x1080228);
      }
      fVar1 = ((float)GEN_TOF((fVar9 - (float10)(int)(fVar10 / fVar8) * fVar8)));
      fVar9 = (float10)fVar1;
      ((float *)(gen_frame + 0xc))[(int)((int)gen_fl2bits(fVar6) * 2 + -1)] = fVar1;
      if (!(fVar4 <= fVar9) != (GEN_ISNAN(fVar9) || GEN_ISNAN(fVar4))) {
        ((float *)(gen_frame + 0xc))[(int)((int)gen_fl2bits(fVar6) * 2 + -1)] = (float)(fVar9 + fVar8);
      }
      bVar2 = *(byte *)((int)this + param_1 * 2 + 0x1f2);
      (*(float * PTR32 *)(gen_frame + 0x0)) = (*(float * PTR32 *)(gen_frame + 0x0)) + 1;
      ((float *)(gen_frame + 0xc))[(int)((int)gen_fl2bits(fVar6) * 2)] = fVar6;
      fVar6 = gen_bits2f((int)gen_fl2bits(fVar6) + 1);
    } while ((int)gen_fl2bits(fVar6) < (int)(uint)bVar2);
  }
  F_00c4f040(&(*(float *)(gen_frame + 0x8)),(uint)*(byte *)((int)this + param_1 * 2 + 0x1f2),8,((code *)REFP(0xd1bdf0)));
  uVar5 = 0;
  if (*(char *)((int)this + param_1 * 2 + 0x1f2) != '\0') {
    pfVar7 = (float *)((int)this + param_1 * 0x18 + 0x1fc);
    do {
      uVar3 = *(undefined1 *)(((float *)(gen_frame + 0xc)) + uVar5 * 2);
      *pfVar7 = ((float *)(gen_frame + 0xc))[(int)(uVar5 * 2 + -1)];
      *((undefined1 *)GEN_TOP(((int)this + uVar5 + (param_1 * 3 + 0xea) * 2))) = uVar3;
      uVar5 = uVar5 + 1;
      pfVar7 = pfVar7 + 1;
    } while ((int)uVar5 < (int)(uint)*(byte *)((int)this + param_1 * 2 + 0x1f2));
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar5;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf42 */
unsigned int F_00d1bf50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1bf50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  undefined * pLVar3;
  
  iVar2 = 0;
  if (this[param_1 * 2 + 0x1f2] != (undefined1)0x0) {
    pLVar3 = this + param_1 * 0x18 + 0x274;
    do {
      iVar1 = iVar2 * 4;
      iVar2 = iVar2 + 1;
      *(undefined4 *)pLVar3 = *(undefined4 *)(param_2 + iVar1);
      pLVar3 = pLVar3 + 4;
    } while (iVar2 < (int)(uint)(byte)this[param_1 * 2 + 0x1f2]);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf38 */
uint F_00d1bf90(unsigned int gen_a0)
{
  GEN_ENTER(0xd1bf90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  undefined1 LVar2;
  int iVar3;
  float10 fVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined * pLVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  this[*(int *)(this + 0x150) * 2 + 0x1f2] =
       *(undefined *)(&REFG(undefined, 0x13503a0) + *(int *)(this + 0x150) * 2);
  this[*(int *)(this + 0x150) * 2 + 499] =
       *(undefined *)(&REFG(undefined, 0x13503a1) + *(int *)(this + 0x150) * 2);
  *((undefined4 *)GEN_TOP((this + *(int *)(this + 0x150) * 0x18 + 0x1fc))) =
       *(undefined4 *)(&REFG(undefined, 0x13503b8) + *(int *)(this + 0x150) * 0x18);
  uVar5 = REFG(float, 0x1097250);
  *((undefined4 *)GEN_TOP((this + *(int *)(this + 0x150) * 0x18 + 0x274))) = REFG(float, 0x1097250);
  iVar8 = 0;
  *((undefined4 *)GEN_TOP((this + *(int *)(this + 0x150) * 0x18 + 0x200))) =
       *(undefined4 *)(&REFG(undefined, 0x13503bc) + *(int *)(this + 0x150) * 0x18);
  *((undefined4 *)GEN_TOP((this + *(int *)(this + 0x150) * 0x18 + 0x278))) = uVar5;
  *((undefined4 *)GEN_TOP((this + *(int *)(this + 0x150) * 0x18 + 0x204))) =
       *(undefined4 *)(&REFG(undefined, 0x13503c0) + *(int *)(this + 0x150) * 0x18);
  *((undefined4 *)GEN_TOP((this + *(int *)(this + 0x150) * 0x18 + 0x27c))) = uVar5;
  *((undefined4 *)GEN_TOP((this + *(int *)(this + 0x150) * 0x18 + 0x208))) =
       *(undefined4 *)(&REFG(undefined, 0x13503c4) + *(int *)(this + 0x150) * 0x18);
  *((undefined4 *)GEN_TOP((this + *(int *)(this + 0x150) * 0x18 + 0x280))) = uVar5;
  *((undefined4 *)GEN_TOP((this + *(int *)(this + 0x150) * 0x18 + 0x20c))) =
       *(undefined4 *)(&REFG(undefined, 0x13503c8) + *(int *)(this + 0x150) * 0x18);
  *((undefined4 *)GEN_TOP((this + *(int *)(this + 0x150) * 0x18 + 0x284))) = uVar5;
  *((undefined4 *)GEN_TOP((this + (*(int *)(this + 0x150) * 3 + 0x42) * 8))) =
       *(undefined4 *)(&REFG(undefined, 0x13503cc) + *(int *)(this + 0x150) * 0x18);
  *((undefined4 *)GEN_TOP((this + (*(int *)(this + 0x150) * 3 + 0x51) * 8))) = uVar5;
  iVar3 = *(int *)(this + 0x150);
  if (this[iVar3 * 2 + 0x1f2] != (undefined1)0x0) {
    fVar4 = (float10)0;
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + iVar3 * 0x18 + 0x1fc;
    fVar9 = (float10)REFG(double, 0x10920b8);
    do {
      fVar10 = (float10)*(float *)(*(undefined * PTR32 *)(gen_frame + 0x0));
      if (fVar4 <= fVar10) {
        fVar11 = fVar10 + (float10)*(double *)&REFG(undefined, 0x1080228);
      }
      else {
        fVar11 = fVar10 - (float10)*(double *)&REFG(undefined, 0x1080228);
      }
      fVar1 = ((float)GEN_TOF((fVar10 - (float10)(int)(fVar11 / fVar9) * fVar9)));
      fVar10 = (float10)fVar1;
      *(float *)(((undefined1 *)(gen_frame + 0xc)) + iVar8 * 8 + -4) = fVar1;
      if (!(fVar4 <= fVar10) != (GEN_ISNAN(fVar10) || GEN_ISNAN(fVar4))) {
        *(float *)(((undefined1 *)(gen_frame + 0xc)) + iVar8 * 8 + -4) = (float)(fVar10 + fVar9);
      }
      LVar2 = this[iVar3 * 2 + 0x1f2];
      (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 4;
      *(int *)(((undefined1 *)(gen_frame + 0xc)) + iVar8 * 8) = iVar8;
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)(uint)(byte)LVar2);
  }
  F_00c4f040(((undefined1 *)(gen_frame + 0x8)),(uint)(byte)this[iVar3 * 2 + 0x1f2],8,((code *)REFP(0xd1bdf0)));
  uVar6 = 0;
  if (this[iVar3 * 2 + 0x1f2] != (undefined1)0x0) {
    pLVar7 = this + iVar3 * 0x18 + 0x1fc;
    do {
      LVar2 = ((undefined1 *)(gen_frame + 0xc))[(int)(uVar6 * 8)];
      *(undefined4 *)pLVar7 = *(undefined4 *)(((undefined1 *)(gen_frame + 0xc)) + uVar6 * 8 + -4);
      this[uVar6 + (iVar3 * 3 + 0xea) * 2] = LVar2;
      uVar6 = uVar6 + 1;
      pLVar7 = pLVar7 + 4;
    } while ((int)uVar6 < (int)(uint)(byte)this[iVar3 * 2 + 0x1f2]);
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar6;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf37 */
uint F_00d1c1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1c1d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  undefined1 LVar2;
  float10 fVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined * pLVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  this[param_1 * 2 + 0x1f2] = *(undefined *)(&REFG(undefined, 0x13503a0) + param_1 * 2);
  this[param_1 * 2 + 499] = *(undefined *)(&REFG(undefined, 0x13503a1) + param_1 * 2);
  *(undefined4 *)(this + param_1 * 0x18 + 0x1fc) = *(undefined4 *)(&REFG(undefined, 0x13503b8) + param_1 * 0x18);
  uVar4 = REFG(float, 0x1097250);
  iVar7 = 0;
  *(undefined4 *)(this + param_1 * 0x18 + 0x274) = REFG(float, 0x1097250);
  *(undefined4 *)(this + param_1 * 0x18 + 0x200) = *(undefined4 *)(&REFG(undefined, 0x13503bc) + param_1 * 0x18);
  *(undefined4 *)(this + param_1 * 0x18 + 0x278) = uVar4;
  *(undefined4 *)(this + param_1 * 0x18 + 0x204) = *(undefined4 *)(&REFG(undefined, 0x13503c0) + param_1 * 0x18);
  *(undefined4 *)(this + param_1 * 0x18 + 0x27c) = uVar4;
  *(undefined4 *)(this + param_1 * 0x18 + 0x208) = *(undefined4 *)(&REFG(undefined, 0x13503c4) + param_1 * 0x18);
  *(undefined4 *)(this + param_1 * 0x18 + 0x280) = uVar4;
  *(undefined4 *)(this + param_1 * 0x18 + 0x20c) = *(undefined4 *)(&REFG(undefined, 0x13503c8) + param_1 * 0x18);
  *(undefined4 *)(this + param_1 * 0x18 + 0x284) = uVar4;
  *((undefined4 *)GEN_TOP((this + (param_1 * 3 + 0x42) * 8))) = *(undefined4 *)(&REFG(undefined, 0x13503cc) + param_1 * 0x18)
  ;
  *((undefined4 *)GEN_TOP((this + (param_1 * 3 + 0x51) * 8))) = uVar4;
  if (this[param_1 * 2 + 0x1f2] != (undefined1)0x0) {
    fVar3 = (float10)0;
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + param_1 * 0x18 + 0x1fc;
    fVar8 = (float10)REFG(double, 0x10920b8);
    do {
      fVar9 = (float10)*(float *)(*(undefined * PTR32 *)(gen_frame + 0x0));
      if (fVar3 <= fVar9) {
        fVar10 = fVar9 + (float10)*(double *)&REFG(undefined, 0x1080228);
      }
      else {
        fVar10 = fVar9 - (float10)*(double *)&REFG(undefined, 0x1080228);
      }
      fVar1 = ((float)GEN_TOF((fVar9 - (float10)(int)(fVar10 / fVar8) * fVar8)));
      fVar9 = (float10)fVar1;
      *(float *)(((undefined1 *)(gen_frame + 0xc)) + iVar7 * 8 + -4) = fVar1;
      if (!(fVar3 <= fVar9) != (GEN_ISNAN(fVar9) || GEN_ISNAN(fVar3))) {
        *(float *)(((undefined1 *)(gen_frame + 0xc)) + iVar7 * 8 + -4) = (float)(fVar9 + fVar8);
      }
      LVar2 = this[param_1 * 2 + 0x1f2];
      (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 4;
      *(int *)(((undefined1 *)(gen_frame + 0xc)) + iVar7 * 8) = iVar7;
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)(uint)(byte)LVar2);
  }
  F_00c4f040(((undefined1 *)(gen_frame + 0x8)),(uint)(byte)this[param_1 * 2 + 0x1f2],8,((code *)REFP(0xd1bdf0)));
  uVar5 = 0;
  if (this[param_1 * 2 + 0x1f2] != (undefined1)0x0) {
    pLVar6 = this + param_1 * 0x18 + 0x1fc;
    do {
      LVar2 = ((undefined1 *)(gen_frame + 0xc))[(int)(uVar5 * 8)];
      *(undefined4 *)pLVar6 = *(undefined4 *)(((undefined1 *)(gen_frame + 0xc)) + uVar5 * 8 + -4);
      this[uVar5 + (param_1 * 3 + 0xea) * 2] = LVar2;
      uVar5 = uVar5 + 1;
      pLVar6 = pLVar6 + 4;
    } while ((int)uVar5 < (int)(uint)(byte)this[param_1 * 2 + 0x1f2]);
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar5;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf43 */
float10 F_00d1c390(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xd1c390u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float param_1 = (float)gen_a1;
  float10 fVar1;
  float10 fVar2;
  
  fVar2 = (float10)((float)GEN_TOF((((float10)REFG(double, 0x10920b8) - (float10)param_1) -
                          (float10)*(double *)&REFG(undefined, 0x1094620))));
  fVar1 = (float10)*(double *)&REFG(undefined, 0x1080228);
  if (fVar1 <= fVar2 && ((!GEN_ISNAN(fVar2) && !GEN_ISNAN(fVar1)) && fVar2 != fVar1)) {
    return (float10)(float)(fVar2 - (float10)REFG(double, 0x10920b8));
  }
  return fVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf44 */
float10 F_00d1c3d0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xd1c3d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float param_1 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)(float)((float10)param_1 - (float10)*(double *)&REFG(undefined, 0x1133868));
  if (!((float10)*(double *)&REFG(undefined, 0x109c9b8) <= fVar1) !=
      (GEN_ISNAN(fVar1) || GEN_ISNAN((float10)*(double *)&REFG(undefined, 0x109c9b8)))) {
    fVar1 = (float10)(float)(fVar1 + (float10)REFG(double, 0x10920b8));
  }
  return fVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf45 */
float10 F_00d1c400(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xd1c400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float param_1 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)((float)GEN_TOF((((float10)REFG(double, 0x10920b8) - (float10)param_1) -
                          (float10)*(double *)&REFG(undefined, 0x1094620))));
  if (!((float10)0 <= fVar1) != (GEN_ISNAN(fVar1) || GEN_ISNAN((float10)0))) {
    return (float10)(float)(fVar1 + (float10)REFG(double, 0x10920b8));
  }
  return fVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf46 */
float10 F_00d1c440(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xd1c440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float param_1 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)(float)((float10)param_1 - (float10)*(double *)&REFG(undefined, 0x1094620));
  if (!((float10)0 <= fVar1) != (GEN_ISNAN(fVar1) || GEN_ISNAN((float10)0))) {
    fVar1 = (float10)(float)(fVar1 + (float10)REFG(double, 0x10920b8));
  }
  return fVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf47 */
float10 F_00d1c470(float gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd1c470u, 0u, 0u, 0u, 0u);
  float in_xmm1 = (float)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  float fVar1;
  float10 fVar2;
  float10 extraout_ST1;
  
  fVar1 = ((float)GEN_TOF(((((float10)param_5 - (float10)REFG(double, 0x1088130)) * (float10)REFG(double, 0x1088108)) *
                 (float10)*(double *)&REFG(undefined, 0x1080228))));
  fVar2 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)fVar1);
  *param_6 = (float)((float10)(float)fVar2 * (float10)REFG(double, 0x10944b8));
  param_6[1] = (float)(float10)0;
  fVar2 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)fVar1);
  param_6[2] = (float)((float10)(float)fVar2 * (float10)REFG(double, 0x10944b8));
  param_6[3] = GEN_FLT_TO(param_6[3], REFG(float, 0x1097250));
  return extraout_ST1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf55 */
unsigned int F_00d1c4e0(unsigned int gen_a0)
{
  GEN_ENTER(0xd1c4e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (this[0x308] != (undefined1)0x0) {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x2f0));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf56 */
unsigned int F_00d1c500(unsigned int gen_a0)
{
  GEN_ENTER(0xd1c500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (this[0x308] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x2f0));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf53 */
uint F_00d1cdf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd1cdf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  
  *param_1 = *(undefined4 *)(this + 0x10);
  *param_2 = *(undefined4 *)(this + 0x14);
  uVar1 = *(uint *)(this + 0x18);
  *param_3 = uVar1;
  return uVar1;
}

/* ref: FUN_00d1ce10 */
unsigned int F_00d1ce10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1ce10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined1 * puVar3;
  undefined1 * puVar4;
  undefined1 * puVar5;
  int local_8;
  
  *(uint *)((int)this + 0xc) = (uint)*(byte *)((int)param_1 + 4);
  *(uint *)((int)this + 0x150) = (uint)*(byte *)((int)param_1 + 5);
  puVar3 = (undefined1 *)((int)this + 499);
  local_8 = 5;
  puVar1 = (undefined4 *)((int)param_1 + 0x88);
  puVar2 = (undefined4 *)((int)this + 0x274);
  puVar4 = (undefined1 *)((int)param_1 + 0x101);
  puVar5 = (undefined1 *)((int)this + 0x1d5);
  param_1 = (undefined1 *)((int)param_1 + 7);
  do {
    puVar3[-1] = param_1[-1];
    *puVar3 = *param_1;
    param_1 = param_1 + 2;
    puVar3 = puVar3 + 2;
    puVar2[-0x1e] = puVar1[-0x1e];
    *puVar2 = *puVar1;
    puVar5[-1] = puVar4[-1];
    local_8 = local_8 + -1;
    puVar2[-0x1d] = puVar1[-0x1d];
    puVar2[1] = puVar1[1];
    *puVar5 = *puVar4;
    puVar2[-0x1c] = puVar1[-0x1c];
    puVar2[2] = puVar1[2];
    puVar5[1] = puVar4[1];
    puVar2[-0x1b] = puVar1[-0x1b];
    puVar2[3] = puVar1[3];
    puVar5[2] = puVar4[2];
    puVar2[-0x1a] = puVar1[-0x1a];
    puVar2[4] = puVar1[4];
    puVar5[3] = puVar4[3];
    puVar2[-0x19] = puVar1[-0x19];
    puVar2[5] = puVar1[5];
    puVar5[4] = puVar4[4];
    puVar1 = puVar1 + 6;
    puVar2 = puVar2 + 6;
    puVar4 = puVar4 + 6;
    puVar5 = puVar5 + 6;
  } while (local_8 != 0);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf2 */
uint F_00d1cf10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1cf10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  int * piVar4;
  uint uVar5;
  undefined * pvVar6;
  int iVar7;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x2f0);
  this[0x308] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (param_2 == 0xffffffff) {
    param_2 = *(uint *)(this + 8);
    *(uint *)(this + 8) = param_2 + 1;
  }
  iVar7 = 0;
  if (0 < *(int *)(this + 0x10)) {
    piVar4 = *(int * PTR32 *)(this + 0x2ec);
LAB_00d1cf58: ;
    if (*(uint *)(*piVar4 + 8) != param_2) goto code_r0x00d1cf5f;
    piVar4 = ((int *)GEN_TOP((*(int * PTR32 *)(this + 0x2ec))[iVar7]));
    uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4);
    if (uVar5 == param_1) {
      if (this[0x308] == (undefined1)0x0) {
        return param_2;
      }
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return param_2;
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(this + 0x2ec) + iVar7 * 4)));
    if (puVar3 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
    }
    iVar7 = iVar7 + 1;
    if (iVar7 < *(int *)(this + 0x10)) {
      do {
        iVar1 = iVar7 * 4;
        iVar2 = iVar7 * 4;
        iVar7 = iVar7 + 1;
        *((undefined4 *)GEN_TOP((*(int *)(this + 0x2ec) + iVar2 + -4))) =
             *((undefined4 *)GEN_TOP((*(int *)(this + 0x2ec) + iVar1)));
      } while (iVar7 < *(int *)(this + 0x10));
    }
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x2ec) + -4 + iVar7 * 4))) = 0;
    *(int *)(this + 0x10) = *(int *)(this + 0x10) + -1;
  }
LAB_00d1cfe9: ;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
  case 1: ;
    if (*(int *)(this + 0x18) <= *(int *)(this + 0x10)) {
LAB_00d1d0b7: ;
      if (this[0x308] != (undefined1)0x0) {
        gen_imp_LeaveCriticalSection(lpCriticalSection);
      }
      return 0;
    }
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(undefined4, 0x15d778c) = (int *)F_004042b0();
    }
    pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(undefined4, 0x15d778c),0x80,"CDev.Engine.Sd.SoundLayout",0,0,0x10)));
    if (pvVar6 == (undefined *)0x0) {
LAB_00d1d11b: ;
      uVar5 = 0;
    }
    else {
      uVar5 = F_00d2c8e0(pvVar6,param_2,this);
    }
    break;
  case 2: ;
    if (*(int *)(this + 0x18) <= *(int *)(this + 0x10)) goto LAB_00d1d0b7;
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(undefined4, 0x15d778c) = (int *)F_004042b0();
    }
    pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(undefined4, 0x15d778c),0x80,"CDev.Engine.Sd.SoundLayout",0,0,0x10)));
    if (pvVar6 == (undefined *)0x0) goto LAB_00d1d11b;
    uVar5 = F_00d2c550(pvVar6,param_2,this);
    break;
  case 3: ;
    if (*(int *)(this + 0x18) <= *(int *)(this + 0x10)) goto LAB_00d1d0b7;
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(undefined4, 0x15d778c) = (int *)F_004042b0();
    }
    pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(undefined4, 0x15d778c),0xb0,"CDev.Engine.Sd.SoundLayout",0,0,0x10)));
    if (pvVar6 == (undefined *)0x0) goto LAB_00d1d11b;
    uVar5 = F_00d2bf90(pvVar6,param_2,this);
    break;
  default: ;
    goto switchD_00d1cff5_default;
  }
  *((uint *)GEN_TOP((*(int *)(this + 0x2ec) + *(int *)(this + 0x10) * 4))) = uVar5;
  *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
switchD_00d1cff5_default: ;
  if (*(int *)(this + 0x14) < *(int *)(this + 0x10)) {
    *(int *)(this + 0x14) = *(int *)(this + 0x10);
  }
  if (this[0x308] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return param_2;
code_r0x00d1cf5f: ;
  iVar7 = iVar7 + 1;
  piVar4 = piVar4 + 1;
  if (*(int *)(this + 0x10) <= iVar7) goto LAB_00d1cfe9;
  goto LAB_00d1cf58;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf5 */
uint F_00d1d160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1d160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  int iVar2;
  int * piVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x2f0);
  this[0x308] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar2 = 0;
  if (0 < *(int *)(this + 0x10)) {
    piVar3 = *(int * PTR32 *)(this + 0x2ec);
    do {
      if (*(int *)(*piVar3 + 8) == param_1) {
        uVar1 = (*(int * PTR32 *)(this + 0x2ec))[iVar2];
        if (this[0x308] != (undefined1)0x0) {
          gen_imp_LeaveCriticalSection(lpCriticalSection);
        }
        return uVar1;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)(this + 0x10));
  }
  if (this[0x308] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

/* ref: FUN_00d1d1f0 */
uint F_00d1d1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1d1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  int iVar2;
  int * piVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x2f0);
  *(undefined1 *)((int)this + 0x308) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x10)) {
    piVar3 = *(int * PTR32 *)((int)this + 0x2ec);
    do {
      if (*(int *)(*piVar3 + 8) == param_1) {
        uVar1 = (*(int * PTR32 *)((int)this + 0x2ec))[iVar2];
        if (*(char *)((int)this + 0x308) != '\0') {
          gen_imp_LeaveCriticalSection(lpCriticalSection);
        }
        return uVar1;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)((int)this + 0x10));
  }
  if (*(char *)((int)this + 0x308) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf3 */
unsigned int F_00d1d280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1d280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  int * piVar4;
  int iVar5;
  
  if (param_1 != 0) {
    this[0x308] = (undefined1)0x1;
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x2f0));
    iVar5 = 0;
    if (0 < *(int *)(this + 0x10)) {
      piVar4 = *(int * PTR32 *)(this + 0x2ec);
LAB_00d1d2b6: ;
      if (*(int *)(*piVar4 + 8) != param_1) goto code_r0x00d1d2c0;
      puVar3 = ((undefined4 *)GEN_TOP((*(int * PTR32 *)(this + 0x2ec))[iVar5]));
      if (puVar3 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
      }
      iVar5 = iVar5 + 1;
      if (iVar5 < *(int *)(this + 0x10)) {
        do {
          iVar1 = iVar5 * 4;
          iVar2 = iVar5 * 4;
          iVar5 = iVar5 + 1;
          *((undefined4 *)GEN_TOP((*(int *)(this + 0x2ec) + iVar2 + -4))) =
               *((undefined4 *)GEN_TOP((*(int *)(this + 0x2ec) + iVar1)));
        } while (iVar5 < *(int *)(this + 0x10));
      }
      *((undefined4 *)GEN_TOP((*(int *)(this + 0x2ec) + -4 + iVar5 * 4))) = 0;
      *(int *)(this + 0x10) = *(int *)(this + 0x10) + -1;
    }
LAB_00d1d30b: ;
    if (this[0x308] != (undefined1)0x0) {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x2f0));
    }
  }
  return 0;
code_r0x00d1d2c0: ;
  iVar5 = iVar5 + 1;
  piVar4 = piVar4 + 1;
  if (*(int *)(this + 0x10) <= iVar5) goto LAB_00d1d30b;
  goto LAB_00d1d2b6;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf6 */
unsigned int F_00d1d330(unsigned int gen_a0)
{
  GEN_ENTER(0xd1d330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  this[0x308] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x2f0));
  iVar2 = 0;
  if (0 < *(int *)(this + 0x10)) {
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(this + 0x2ec) + iVar2 * 4)));
      if (puVar1 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      }
      *((undefined4 *)GEN_TOP((*(int *)(this + 0x2ec) + iVar2 * 4))) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0x10));
  }
  *(undefined4 *)(this + 0x10) = 0;
  if (this[0x308] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x2f0));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf10 */
uint F_00d1d390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1d390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  this[0x308] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x2f0));
  piVar1 = (int *)F_00d1d1f0(this,param_1);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_2);
  }
  if (this[0x308] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x2f0));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf11 */
byte F_00d1d3e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1d3e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  uint uVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x2f0);
  this[0x308] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar1 = (int *)F_00d1d1f0(this,param_1);
  if (piVar1 == (int *)0x0) {
    if (this[0x308] != (undefined1)0x0) {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (this[0x308] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return (byte)uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf13 */
byte F_00d1d440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1d440u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  uint uVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x2f0);
  this[0x308] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar1 = (int *)F_00d1d1f0(this,param_1);
  if (piVar1 == (int *)0x0) {
    if (this[0x308] != (undefined1)0x0) {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,param_2);
  if (this[0x308] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return (byte)uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf14 */
byte F_00d1d4b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1d4b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)param_1 + 0x2f0);
  *(undefined1 *)((int)param_1 + 0x308) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar1 = (int *)F_00d1d1f0(param_1,param_2);
  if (piVar1 == (int *)0x0) {
    if (*(char *)((int)param_1 + 0x308) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  iVar2 = F_00c51673((double)*(float *)(param_3 + 0x30));
  if (iVar2 == 0) {
    iVar2 = F_00c51673((double)*(float *)(param_3 + 0x34));
    if (iVar2 == 0) {
      iVar2 = F_00c51673((double)*(float *)(param_3 + 0x38));
      if (iVar2 == 0) {
        uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1,param_3);
        if (*(char *)((int)param_1 + 0x308) != '\0') {
          gen_imp_LeaveCriticalSection(lpCriticalSection);
        }
        return (byte)uVar3;
      }
    }
  }
  if (*(char *)((int)param_1 + 0x308) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf15 */
byte F_00d1d580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1d580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)param_1 + 0x2f0);
  *(undefined1 *)((int)param_1 + 0x308) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar1 = (int *)F_00d1d1f0(param_1,param_2);
  if (piVar1 == (int *)0x0) {
    if (*(char *)((int)param_1 + 0x308) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  iVar2 = F_00c51673((double)*(float *)(param_3 + 0x30));
  if (iVar2 == 0) {
    iVar2 = F_00c51673((double)*(float *)(param_3 + 0x34));
    if (iVar2 == 0) {
      iVar2 = F_00c51673((double)*(float *)(param_3 + 0x38));
      if (iVar2 == 0) {
        uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1,param_3);
        if (*(char *)((int)param_1 + 0x308) != '\0') {
          gen_imp_LeaveCriticalSection(lpCriticalSection);
        }
        return (byte)uVar3;
      }
    }
  }
  if (*(char *)((int)param_1 + 0x308) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf16 */
byte F_00d1d650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1d650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  uint uVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x2f0);
  this[0x308] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar1 = (int *)F_00d1d1f0(this,param_1);
  if (piVar1 == (int *)0x0) {
    if (this[0x308] != (undefined1)0x0) {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1,param_2);
  if (this[0x308] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return (byte)uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf17 */
uint F_00d1d6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1d6c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  uint uVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x2f0);
  this[0x308] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar1 = (int *)F_00d1d1f0(this,param_1);
  if (piVar1 == (int *)0x0) {
    if (this[0x308] != (undefined1)0x0) {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1);
  if (this[0x308] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf18 */
uint F_00d1d720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1d720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  this[0x308] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x2f0));
  piVar1 = (int *)F_00d1d1f0(this,param_1);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,param_2);
  }
  if (this[0x308] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x2f0));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf41 */
uint F_00d1db20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1db20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  float fVar2;
  undefined1 LVar3;
  float10 fVar4;
  int iVar5;
  uint uVar6;
  undefined * pLVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  iVar5 = 0;
  if (this[param_1 * 2 + 0x1f2] != (undefined1)0x0) {
    pLVar7 = this + param_1 * 0x18 + 0x1fc;
    do {
      iVar1 = iVar5 * 4;
      iVar5 = iVar5 + 1;
      *(undefined4 *)pLVar7 = *(undefined4 *)(param_2 + iVar1);
      pLVar7 = pLVar7 + 4;
    } while (iVar5 < (int)(uint)(byte)this[param_1 * 2 + 0x1f2]);
  }
  iVar5 = 0;
  if (this[param_1 * 2 + 0x1f2] != (undefined1)0x0) {
    fVar4 = (float10)0;
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = this + param_1 * 0x18 + 0x1fc;
    fVar8 = (float10)REFG(double, 0x10920b8);
    do {
      fVar9 = (float10)*(float *)(*(undefined * PTR32 *)(gen_frame + 0x0));
      if (fVar4 <= fVar9) {
        fVar10 = fVar9 + (float10)*(double *)&REFG(undefined, 0x1080228);
      }
      else {
        fVar10 = fVar9 - (float10)*(double *)&REFG(undefined, 0x1080228);
      }
      fVar2 = ((float)GEN_TOF((fVar9 - (float10)(int)(fVar10 / fVar8) * fVar8)));
      fVar9 = (float10)fVar2;
      *(float *)(((undefined1 *)(gen_frame + 0xc)) + iVar5 * 8 + -4) = fVar2;
      if (!(fVar4 <= fVar9) != (GEN_ISNAN(fVar9) || GEN_ISNAN(fVar4))) {
        *(float *)(((undefined1 *)(gen_frame + 0xc)) + iVar5 * 8 + -4) = (float)(fVar9 + fVar8);
      }
      LVar3 = this[param_1 * 2 + 0x1f2];
      (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x0)) + 4;
      *(int *)(((undefined1 *)(gen_frame + 0xc)) + iVar5 * 8) = iVar5;
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)(uint)(byte)LVar3);
  }
  F_00c4f040(((undefined1 *)(gen_frame + 0x8)),(uint)(byte)this[param_1 * 2 + 0x1f2],8,((code *)REFP(0xd1bdf0)));
  uVar6 = 0;
  if (this[param_1 * 2 + 0x1f2] != (undefined1)0x0) {
    pLVar7 = this + param_1 * 0x18 + 0x1fc;
    do {
      LVar3 = ((undefined1 *)(gen_frame + 0xc))[(int)(uVar6 * 8)];
      *(undefined4 *)pLVar7 = *(undefined4 *)(((undefined1 *)(gen_frame + 0xc)) + uVar6 * 8 + -4);
      this[uVar6 + (param_1 * 3 + 0xea) * 2] = LVar3;
      uVar6 = uVar6 + 1;
      pLVar7 = pLVar7 + 4;
    } while ((int)uVar6 < (int)(uint)(byte)this[param_1 * 2 + 0x1f2]);
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar6;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf49 */
uint F_00d1dc70(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd1dc70u, gen_a0, 0u, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  ((code *)*(gen_code32 *)(*param_1 + 0xbc))(param_1,(undefined4)gen_fl2bits(param_2),((undefined1 *)(gen_frame + 0x8)));
  F_00d1c520(param_1,param_3,((undefined1 *)(gen_frame + 0x8)),(float)(float10)0);
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x78))(param_1,param_4,&(*(undefined1 *)(gen_frame + 0x7)));
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf50 */
uint F_00d1dce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd1dce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint uVar1;
  undefined4 * puVar2;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this,((undefined1 *)(gen_frame + 0x28)));
  if ((char)uVar1 == '\0') {
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return uVar1;
  }
  puVar2 = (undefined4 *)F_00c34320(((undefined1 *)(gen_frame + 0x28)),((undefined1 *)(gen_frame + 0x4)),param_1);
  (*(undefined4 *)(gen_frame + 0x18)) = puVar2[1];
  (*(undefined4 *)(gen_frame + 0x14)) = *puVar2;
  (*(undefined4 *)(gen_frame + 0x1c)) = puVar2[2];
  (*(undefined4 *)(gen_frame + 0x20)) = puVar2[3];
  F_00d1c520(this,param_2,&(*(undefined4 *)(gen_frame + 0x14)),(float)(float10)0);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x78))(this,param_3,&(*(undefined1 *)(gen_frame + 0x27)));
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return CONCAT31((int3)(uVar1 >> 8),1);
}

/* ref: FUN_00d1df30 */
unsigned int F_00d1df30(unsigned int gen_a0)
{
  GEN_ENTER(0xd1df30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  
  *(undefined1 *)((int)this + 0x308) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2f0));
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x10)) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x2ec) + iVar2 * 4)));
      ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 0x10));
  }
  if (*(char *)((int)this + 0x308) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2f0));
  }
  return 0;
}

/* ref: FUN_00d1df80 */
byte F_00d1df80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1df80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  short sVar1;
  uint uVar2;
  int * piVar3;
  
  sVar1 = *param_1;
  if (sVar1 == 5) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 8))
                      (this,(uint)*(byte *)(param_1 + 8),*(undefined4 *)(param_1 + 2));
    piVar3 = (int *)F_00d1d1f0(this,uVar2);
    if (piVar3 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar3 + 0x58))(piVar3,param_1 + 8);
    }
    return 1;
  }
  if (sVar1 != 6) {
    if (sVar1 != 8) {
      return 0;
    }
    F_00d1ce10(this,param_1);
    return 1;
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,*(undefined4 *)(param_1 + 2));
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf54 */
uint F_00d1e000(unsigned int gen_a0)
{
  GEN_ENTER(0xd1e000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x140];
  undefined4 uVar1;
  undefined1 LVar2;
  uint uVar3;
  undefined * pLVar4;
  undefined4 * puVar5;
  int iVar6;
  undefined * pLVar7;
  undefined * pLVar8;
  
  (*(uint *)(gen_frame + 0x138)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x13c);
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0xe4))))(*(int * PTR32 *)(this + 4));
  if ((char)uVar3 != '\0') {
    (*(undefined1 *)(gen_frame + 0xd)) = this[0x150];
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = this + 499;
    (*(undefined1 *)(gen_frame + 0xc)) = this[0xc];
    (*(char * PTR32 *)(gen_frame + 0x8)) = ((char *)REFP(0x12fffdc)) + 0x2c;
    iVar6 = 0;
    pLVar7 = ((undefined1 *)(gen_frame + 0x109));
    pLVar8 = this + 0x1d5;
    puVar5 = ((undefined4 *)(gen_frame + 0x90));
    pLVar4 = this + 0x274;
    do {
      uVar1 = *(undefined4 *)(pLVar4 + -0x78);
      ((undefined1 *)(gen_frame + 0xe))[(int)(iVar6 * 2)] = (*(undefined * PTR32 *)(gen_frame + 0x4))[-1];
      ((undefined1 *)(gen_frame + 0xe))[(int)(iVar6 * 2 + 1)] = *(*(undefined * PTR32 *)(gen_frame + 0x4));
      LVar2 = pLVar8[-1];
      puVar5[-0x1e] = uVar1;
      *puVar5 = *(undefined4 *)pLVar4;
      pLVar7[-1] = LVar2;
      LVar2 = *(undefined1 *)pLVar8;
      puVar5[-0x1d] = *(undefined4 *)(pLVar4 + -0x74);
      puVar5[1] = *(undefined4 *)(pLVar4 + 4);
      *(undefined1 *)pLVar7 = LVar2;
      LVar2 = pLVar8[1];
      puVar5[-0x1c] = *(undefined4 *)(pLVar4 + -0x70);
      puVar5[2] = *(undefined4 *)(pLVar4 + 8);
      (*(undefined * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 *)(gen_frame + 0x4)) + 2;
      uVar1 = *(undefined4 *)(pLVar4 + -0x6c);
      pLVar7[1] = LVar2;
      LVar2 = pLVar8[2];
      puVar5[-0x1b] = uVar1;
      puVar5[3] = *(undefined4 *)(pLVar4 + 0xc);
      pLVar7[2] = LVar2;
      LVar2 = pLVar8[3];
      puVar5[-0x1a] = *(undefined4 *)(pLVar4 + -0x68);
      puVar5[4] = *(undefined4 *)(pLVar4 + 0x10);
      pLVar7[3] = LVar2;
      LVar2 = pLVar8[4];
      puVar5[-0x19] = *(undefined4 *)(pLVar4 + -100);
      puVar5[5] = *(undefined4 *)(pLVar4 + 0x14);
      pLVar7[4] = LVar2;
      iVar6 = iVar6 + 1;
      pLVar7 = pLVar7 + 6;
      pLVar4 = pLVar4 + 0x18;
      puVar5 = puVar5 + 6;
      pLVar8 = pLVar8 + 6;
    } while (iVar6 < 5);
    (*(undefined4 *)(gen_frame + 0x12c)) = 0;
    (*(undefined4 *)(gen_frame + 0x130)) = 0;
    (*(undefined4 *)(gen_frame + 0x134)) = 0;
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0xf4))))(*(int * PTR32 *)(this + 4));
    if (uVar3 == 0) {
      F_00d1e710(&(*(char * PTR32 *)(gen_frame + 0x8)),&(*(char * PTR32 *)(gen_frame + 0x8)));
    }
    uVar3 = F_00d00af0(*(undefined * PTR32 *)(this + 4),&(*(char * PTR32 *)(gen_frame + 0x8)),0x130);
  }
  F_00c47745((*(uint *)(gen_frame + 0x138)) ^ (uint)(uint)(gen_frame + 0x13c));
  return uVar3;
}

/* ref: FUN_00d1e180 */
uint F_00d1e180(unsigned int gen_a0)
{
  GEN_ENTER(0xd1e180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[57])REFP(0x1133884));
  F_00d1d330(this);
  if (*(int *)((int)this + 0x2ec) != 0) {
    F_00406810(*(int *)((int)this + 0x2ec));
    *(undefined4 *)((int)this + 0x2ec) = 0;
  }
  F_00d2bc40((int)this + 0x30c);
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2f0));
  F_00cccb40((int)this + 0x30);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[57])REFP(0x1133784));
  return extraout_EAX;
}

/* ref: FUN_00d1e1e0 */
uint F_00d1e1e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd1e1e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  uVar1 = (*(code *)REFG(undefined * PTR32, 0x134c5ac))(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
  return uVar1;
}

/* ref: FUN_00d1e280 */
uint F_00d1e280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1e280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  code * pcVar1;
  float10 fVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  int * piVar6;
  float in_XMM1_Da = 0;
  float in_XMM2_Da = 0;
  float in_XMM3_Da = 0;
  float in_XMM7_Da = 0;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[57])REFP(0x1133884));
  F_00cccb10((int)this + 0x30,(float)(float10)0);
  *(float *)((int)this + 0x58) = (float)(float10)0;
  *(float *)((int)this + 0x5c) = (float)(float10)0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2f0));
  *(undefined1 *)((int)this + 0x308) = 1;
  F_00d2bb90((undefined *)((int)this + 0x30c));
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x30) + 4)));
  *(undefined4 *)((int)this + 8) = 1;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  (*pcVar1)((int)this + 0x30,REFG(float, 0x1097250));
  fVar2 = (float10)0;
  *(float *)((int)this + 0x54) = (float)fVar2;
  *(float *)((int)this + 0x20) = (float)fVar2;
  *(undefined2 *)((int)this + 0x6c) = 1;
  *(float *)((int)this + 0x24) = (float)fVar2;
  *(float *)((int)this + 0x28) = (float)fVar2;
  *(float *)((int)this + 0x2c) = (float)fVar2;
  *(float *)((int)this + 0x70) = (float)fVar2;
  *(float *)((int)this + 0x74) = (float)fVar2;
  *(float *)((int)this + 0x78) = (float)fVar2;
  *(float *)((int)this + 0x7c) = (float)fVar2;
  *(float *)((int)this + 0x80) = (float)fVar2;
  *(float *)((int)this + 0x84) = (float)fVar2;
  *(float *)((int)this + 0x88) = (float)fVar2;
  *(float *)((int)this + 0x8c) = (float)fVar2;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(int *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x2ec) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(undefined4, 0x15d778c) = (int *)F_004042b0();
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                    (REFG(undefined4, 0x15d778c),param_1 * 4,"CDev.Engine.Sd.SoundLayout",0,0,0x10);
  *(uint *)((int)this + 0x2ec) = uVar3;
  if (uVar3 == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined4, 0x15d861c) = ((code *)REFP(0xd1e1e0));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(&REFG(undefined, 0x1133688),"","Listener\\ListenerManager.cpp",0x69,
                    "SQEX::CDev::Engine::Sd::Layout::ListenerManager::ListenerManager");
  }
  else {
    iVar4 = 0;
    if (0 < *(int *)((int)this + 0x18)) {
      do {
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x2ec) + iVar4 * 4))) = 0;
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)((int)this + 0x18));
    }
  }
  iVar4 = 0;
  do {
    F_00d1c1d0(this,iVar4);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 5);
  F_00d1ba90(this,in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,0);
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)&REFG(undefined, 0x11335ac);
  *(undefined4 *)((int)this + 100) = *(undefined4 *)&REFG(undefined, 0x11335b0);
  puVar5 = (undefined4 *)F_004ec420(((undefined1 *)(gen_frame + 0x8)));
  *(undefined4 *)((int)this + 0x90) = *puVar5;
  *(undefined4 *)((int)this + 0x94) = puVar5[1];
  *(undefined4 *)((int)this + 0x98) = puVar5[2];
  *(undefined4 *)((int)this + 0x9c) = puVar5[3];
  *(undefined4 *)((int)this + 0xa0) = puVar5[4];
  *(undefined4 *)((int)this + 0xa4) = puVar5[5];
  *(undefined4 *)((int)this + 0xa8) = puVar5[6];
  *(undefined4 *)((int)this + 0xac) = puVar5[7];
  *(undefined4 *)((int)this + 0xb0) = puVar5[8];
  *(undefined4 *)((int)this + 0xb4) = puVar5[9];
  *(undefined4 *)((int)this + 0xb8) = puVar5[10];
  *(undefined4 *)((int)this + 0xbc) = puVar5[0xb];
  *(undefined4 *)((int)this + 0xc0) = puVar5[0xc];
  *(undefined4 *)((int)this + 0xc4) = puVar5[0xd];
  *(undefined4 *)((int)this + 200) = puVar5[0xe];
  *(undefined4 *)((int)this + 0xcc) = puVar5[0xf];
  puVar5 = (undefined4 *)F_004ec420(((undefined1 *)(gen_frame + 0x8)));
  *(undefined4 *)((int)this + 0xd0) = *puVar5;
  *(undefined4 *)((int)this + 0xd4) = puVar5[1];
  *(undefined4 *)((int)this + 0xd8) = puVar5[2];
  *(undefined4 *)((int)this + 0xdc) = puVar5[3];
  *(undefined4 *)((int)this + 0xe0) = puVar5[4];
  *(undefined4 *)((int)this + 0xe4) = puVar5[5];
  *(undefined4 *)((int)this + 0xe8) = puVar5[6];
  *(undefined4 *)((int)this + 0xec) = puVar5[7];
  *(undefined4 *)((int)this + 0xf0) = puVar5[8];
  *(undefined4 *)((int)this + 0xf4) = puVar5[9];
  *(undefined4 *)((int)this + 0xf8) = puVar5[10];
  *(undefined4 *)((int)this + 0xfc) = puVar5[0xb];
  *(undefined4 *)((int)this + 0x100) = puVar5[0xc];
  *(undefined4 *)((int)this + 0x104) = puVar5[0xd];
  *(undefined4 *)((int)this + 0x108) = puVar5[0xe];
  *(undefined4 *)((int)this + 0x10c) = puVar5[0xf];
  uVar3 = F_00d1cf10(this,2,0xffffffff);
  piVar6 = (int *)F_00d1d160(this,uVar3);
  if (piVar6 != (int *)0x0) {
    F_004ec420(((undefined1 *)(gen_frame + 0x8)));
    ((code *)*(gen_code32 *)(*piVar6 + 0x14))(piVar6,((undefined1 *)(gen_frame + 0x8)));
    ((code *)*(gen_code32 *)(*piVar6 + 0x20))(piVar6,0);
    ((code *)*(gen_code32 *)(*piVar6 + 8))(piVar6,1);
  }
  *(float *)((int)this + 0x3a0) = (float)(float10)0;
  *(undefined1 *)((int)this + 0x39c) = 0;
  *(float *)((int)this + 0x3b0) = (float)(float10)0;
  *(undefined1 *)((int)this + 0x3a4) = 0;
  *(undefined4 *)((int)this + 0x3a8) = 0;
  *(undefined4 *)((int)this + 0x3ac) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::IListenerManager::vf0 */
uint F_00d1e5d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1e5d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[57])REFP(0x1133784));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00d1e650 */
uint F_00d1e650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1e650u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  F_004eb600(param_2,param_1);
  return param_1;
}

/* ref: FUN_00d1e670 */
unsigned int F_00d1e670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1e670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined2 *)this;
  param_1[1] = *(undefined2 *)((int)this + 2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((int)this + 0x18);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)((int)this + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((int)this + 0x20);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((int)this + 0x28);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)((int)this + 0x2c);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)((int)this + 0x30);
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)((int)this + 0x34);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((int)this + 0x38);
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)((int)this + 0x3c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)((int)this + 0x40);
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)((int)this + 0x44);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((int)this + 0x48);
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)((int)this + 0x4c);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)((int)this + 0x50);
  *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)((int)this + 0x54);
  return 0;
}

/* ref: FUN_00d1e710 */
unsigned int F_00d1e710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1e710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  uint uVar1;
  uint * puVar2;
  ushort * puVar3;
  uint * puVar4;
  int iVar5;
  ushort * puVar6;
  uint * puVar7;
  int local_14;
  int local_10;
  undefined1 * local_c;
  
  *param_1 = *(ushort *)((int)(uintptr_t)this) << 8 | *(ushort *)((int)(uintptr_t)this) >> 8;
  param_1[1] = *(ushort *)((int)this + 2) << 8 | *(ushort *)((int)this + 2) >> 8;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)((int)this + 4);
  *(undefined1 *)((int)param_1 + 5) = *(undefined1 *)((int)this + 5);
  local_c = (undefined1 *)((int)this + 7);
  puVar7 = (uint *)((int)this + 0x88);
  puVar2 = (uint *)(param_1 + 8);
  puVar6 = param_1 + 0x80;
  puVar3 = param_1 + 3;
  iVar5 = (int)this - (int)param_1;
  local_14 = 5;
  do {
    *(undefined1 *)puVar3 = *(undefined1 *)((int)puVar3 + iVar5);
    *(undefined1 *)((int)puVar3 + 1) = *local_c;
    local_10 = 6;
    puVar4 = puVar2;
    do {
      uVar1 = *(uint *)(iVar5 + (int)puVar4);
      *puVar4 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      uVar1 = *puVar7;
      puVar2 = puVar4 + 1;
      puVar4[0x1e] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18
      ;
      *(undefined1 *)puVar6 = *(undefined1 *)(iVar5 + (int)puVar6);
      puVar7 = puVar7 + 1;
      puVar6 = (ushort *)((int)puVar6 + 1);
      local_10 = local_10 + -1;
      puVar4 = puVar2;
    } while (local_10 != 0);
    local_c = local_c + 2;
    puVar3 = puVar3 + 1;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)((int)this + 0x120);
  param_1[0x8f] = 0;
  puVar3 = param_1;
  puVar3[0x92] = 0;
  puVar3[0x93] = 0;
  puVar3[0x94] = 0;
  puVar3[0x95] = 0;
  puVar3[0x96] = 0;
  puVar3[0x97] = 0;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf21 */
byte F_00d1e820(unsigned int gen_a0)
{
  GEN_ENTER(0xd1e820u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x6c);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf28 */
uint F_00d1e830(unsigned int gen_a0)
{
  GEN_ENTER(0xd1e830u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x150);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf52 */
uint F_00d1e840(unsigned int gen_a0)
{
  GEN_ENTER(0xd1e840u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x30c;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerManager::vf0 */
uint F_00d1e850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1e850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[57])REFP(0x1133884));
  F_00d1d330(this);
  if (*(int *)(this + 0x2ec) != 0) {
    F_00406810(*(int *)(this + 0x2ec));
    *(undefined4 *)(this + 0x2ec) = 0;
  }
  F_00d2bc40(this + 0x30c);
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0x2f0));
  F_00cccb40(this + 0x30);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[57])REFP(0x1133784));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf1 */
uint F_00d1e8c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd1e8c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar10 [16];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auVar9 [16];
  
  iVar6 = *(int *)(this + 0x128);
  *(undefined4 *)(this + 300) = *(undefined4 *)(iVar6 + 0x20);
  *(undefined4 *)(this + 0x130) = *(undefined4 *)(iVar6 + 0x24);
  *(undefined4 *)(this + 0x134) = *(undefined4 *)(iVar6 + 0x28);
  *(undefined4 *)(this + 0x138) = *(undefined4 *)(iVar6 + 0x2c);
  iVar6 = *(int *)(this + 0x128);
  *(undefined4 *)(this + 0x13c) = *(undefined4 *)(iVar6 + 0x20);
  *(undefined4 *)(this + 0x140) = *(undefined4 *)(iVar6 + 0x24);
  *(undefined4 *)(this + 0x144) = *(undefined4 *)(iVar6 + 0x28);
  *(undefined4 *)(this + 0x148) = *(undefined4 *)(iVar6 + 0x2c);
  iVar6 = 0x30;
  do {
    iVar5 = *(int *)(this + 0x128);
    uVar4 = *(undefined4 *)(iVar5 + 8 + iVar6);
    (*(undefined4 *)((char *)&auVar7 + 4)) = uVar4;
    (*(undefined4 *)((char *)&auVar7 + 0)) = *(undefined4 *)(iVar5 + iVar6);
    (*(undefined4 *)((char *)&auVar7 + 8)) = uVar4;
    (*(undefined4 *)((char *)&auVar7 + 12)) = *(undefined4 *)(iVar5 + 0xc + iVar6);
    (*(undefined8 *)((char *)&auVar8 + 8)) = (*(undefined8 *)((char *)&auVar7 + 8));
    (*(undefined4 *)((char *)&auVar8 + 4)) = *(undefined4 *)(iVar5 + 4 + iVar6);
    (*(undefined4 *)((char *)&auVar8 + 0)) = *(undefined4 *)(iVar5 + iVar6);
    gen_minps(&(auVar8), &(auVar8), (this + 300));
    local_40 = (*(undefined4 *)((char *)&auVar8 + 0));
    uStack_3c = (*(undefined4 *)((char *)&auVar8 + 4));
    *(undefined4 *)(this + 300) = local_40;
    uStack_38 = (*(undefined4 *)((char *)&auVar8 + 8));
    *(undefined4 *)(this + 0x130) = uStack_3c;
    uStack_34 = (*(undefined4 *)((char *)&auVar8 + 12));
    *(undefined4 *)(this + 0x134) = uStack_38;
    *(undefined4 *)(this + 0x138) = uStack_34;
    iVar5 = *(int *)(this + 0x128);
    uVar4 = *(undefined4 *)(iVar5 + 8 + iVar6);
    puVar2 = (undefined4 *)(iVar5 + 0xc + iVar6);
    puVar1 = (undefined4 *)(iVar5 + iVar6);
    puVar3 = (undefined4 *)(iVar5 + 4 + iVar6);
    iVar6 = iVar6 + 0x10;
    (*(undefined4 *)((char *)&auVar10 + 4)) = uVar4;
    (*(undefined4 *)((char *)&auVar10 + 0)) = *puVar1;
    (*(undefined4 *)((char *)&auVar10 + 8)) = uVar4;
    (*(undefined4 *)((char *)&auVar10 + 12)) = *puVar2;
    (*(undefined8 *)((char *)&auVar9 + 8)) = (*(undefined8 *)((char *)&auVar10 + 8));
    (*(undefined4 *)((char *)&auVar9 + 4)) = *puVar3;
    (*(undefined4 *)((char *)&auVar9 + 0)) = *puVar1;
    gen_maxps(&(auVar8), &(auVar9), (this + 0x13c));
    local_40 = (*(undefined4 *)((char *)&auVar8 + 0));
    uStack_3c = (*(undefined4 *)((char *)&auVar8 + 4));
    *(undefined4 *)(this + 0x13c) = local_40;
    uStack_38 = (*(undefined4 *)((char *)&auVar8 + 8));
    *(undefined4 *)(this + 0x140) = uStack_3c;
    uStack_34 = (*(undefined4 *)((char *)&auVar8 + 12));
    *(undefined4 *)(this + 0x144) = uStack_38;
    *(undefined4 *)(this + 0x148) = uStack_34;
  } while (iVar6 < 0x60);
  *(float *)(this + 0x130) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0x130) - (float10)*((float *)GEN_TOP((*(int *)(this + 0x128) + 100)))
              )));
  *(float *)(this + 0x140) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(uint *)(this + 0x128) + 0x60))) +
              (float10)*(float *)(this + 0x140))));
  return *(uint *)(this + 0x128);
}

/* ref: FUN_00d1eaa0 */
uint F_00d1eaa0(unsigned int gen_a0)
{
  GEN_ENTER(0xd1eaa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1133acc));
  F_00cccb40((int)this + 0x14c);
  uVar1 = F_00d23680(this);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf2 */
uint F_00d1eac0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xd1eac0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  F_00d211a0(param_1,param_2,param_3,param_4);
  F_00cccbd0(param_1 + 0x14c,param_4);
  F_00cccd90(param_1 + 0x14c,param_3,param_2);
  return REFG(undefined4, 0x11299e4);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf4 */
uint F_00d1eb10(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1eb10u, gen_a0, 0u, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cccd90(param_1 + 0x14c,param_2,param_3);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf9 */
uint F_00d1eb30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1eb30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  float * pfVar1;
  float * pfVar2;
  float * pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  
  F_00d213b0(this,param_1,param_2);
  iVar11 = 0;
  do {
    iVar9 = *(int *)(this + 0x128);
    fVar4 = *(float *)(iVar9 + 0x28 + iVar11);
    fVar5 = *(float *)(iVar9 + 0x2c + iVar11);
    pfVar1 = (float *)(iVar9 + 0x20 + iVar11);
    pfVar2 = (float *)(iVar9 + 0x24 + iVar11);
    fVar6 = param_1[3];
    pfVar3 = (float *)(iVar9 + 0x20 + iVar11);
    iVar11 = iVar11 + 0x10;
    fVar7 = param_1[1];
    fVar8 = param_1[2];
    *pfVar3 = *pfVar1 + *param_1;
    pfVar3[1] = *pfVar2 + fVar7;
    pfVar3[2] = fVar4 + fVar8;
    pfVar3[3] = fVar5 + fVar6;
    *((float *)GEN_TOP((*(int *)(this + 0x128) + 0x1c + iVar11))) = (float)(float10)1;
  } while (iVar11 < 0x40);
  uVar10 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
  return uVar10;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf14 */
byte F_00d1ec10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1ec10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x70))(this,0x406);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0x10))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))));
  if ((char)uVar1 == '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x14c) + 8))))(this + 0x14c,param_1);
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf15 */
byte F_00d1ec50(void)
{
  GEN_ENTER(0xd1ec50u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf21 */
byte F_00d1ec60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1ec60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  if (((((float10)*param_1 <= (float10)*(float *)(this + 0x13c)) &&
       ((float10)*(float *)(this + 300) <= (float10)*param_2)) &&
      ((float10)param_1[1] <= (float10)*(float *)(this + 0x140))) &&
     ((((float10)*(float *)(this + 0x130) <= (float10)param_2[1] &&
       ((float10)param_1[2] <= (float10)*(float *)(this + 0x144))) &&
      ((float10)*(float *)(this + 0x134) <= (float10)param_2[2])))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00d1ecf0 */
uint F_00d1ecf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1ecf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  uint uVar5;
  int iVar6;
  float * pfVar7;
  uint uVar8;
  int iVar10;
  bool bVar11;
  bool bVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float fVar19;
  undefined2 uVar9;
  
  uVar5 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10);
  (*(uint *)(gen_frame + 0xc)) = uVar5;
  fVar4 = (float10)0;
  iVar1 = *(int *)((int)this + 0x128);
  ((byte *)(gen_frame + 0x4))[0] = 0;
  ((byte *)(gen_frame + 0x4))[1] = 1;
  ((byte *)(gen_frame + 0x4))[2] = 1;
  ((byte *)(gen_frame + 0x4))[3] = 2;
  ((byte *)(gen_frame + 0x4))[4] = 2;
  ((byte *)(gen_frame + 0x4))[5] = 3;
  ((byte *)(gen_frame + 0x4))[6] = 3;
  ((byte *)(gen_frame + 0x4))[7] = 0;
  iVar10 = 0;
  fVar19 = *param_2 - *param_1;
  fVar13 = (float10)(param_2[2] - param_1[2]);
  do {
    iVar6 = (((byte *)(gen_frame + 0x4))[(int)(iVar10 * 2)] + 2) * 0x10;
    fVar2 = *(float *)(iVar6 + iVar1);
    fVar3 = *(float *)(iVar6 + iVar1 + 8);
    pfVar7 = ((float *)GEN_TOP(((((byte *)(gen_frame + 0x4))[(int)(iVar10 * 2 + 1)] + 2) * 0x10 + iVar1)));
    fVar14 = (float10)(pfVar7[2] - fVar3);
    fVar15 = (float10)(*pfVar7 - fVar2);
    fVar16 = (float10)(float)(fVar14 * (float10)fVar19 - fVar15 * fVar13);
    bVar11 = GEN_ISNAN(fVar4) || GEN_ISNAN(fVar16);
    bVar12 = bVar11 || fVar4 == fVar16;
    uVar9 = (undefined2)((uint)gen_fl2bits(pfVar7[3]) >> 0x10);
    uVar8 = CONCAT22(uVar9,(ushort)!(fVar16 <= fVar4) << 8 | (ushort)bVar11 << 10 |
                           (ushort)bVar12 << 0xe);
    if (bVar11 == bVar12) {
      fVar17 = (float10)(fVar2 - *param_1);
      fVar18 = (float10)(fVar3 - param_1[2]);
      fVar14 = (float10)((float)GEN_TOF(((fVar17 * fVar14 - fVar18 * fVar15) / fVar16)));
      bVar11 = (GEN_ISNAN(fVar14) || GEN_ISNAN(fVar4)) || fVar14 == fVar4;
      uVar8 = CONCAT22(uVar9,(ushort)!(fVar4 <= fVar14) << 8 |
                             (ushort)(GEN_ISNAN(fVar14) || GEN_ISNAN(fVar4)) << 10 | (ushort)bVar11 << 0xe);
      if (!(fVar4 <= fVar14) == bVar11) {
        fVar15 = (float10)1;
        bVar11 = (GEN_ISNAN(fVar15) || GEN_ISNAN(fVar14)) || fVar15 == fVar14;
        uVar8 = CONCAT22(uVar9,(ushort)!(fVar14 <= fVar15) << 8 |
                               (ushort)(GEN_ISNAN(fVar15) || GEN_ISNAN(fVar14)) << 10 | (ushort)bVar11 << 0xe);
        if (!(fVar14 <= fVar15) == bVar11) {
          fVar14 = (float10)((float)GEN_TOF(((fVar17 * fVar13 - (float10)fVar19 * fVar18) / fVar16)));
          bVar11 = (GEN_ISNAN(fVar14) || GEN_ISNAN(fVar4)) || fVar14 == fVar4;
          uVar8 = CONCAT22(uVar9,(ushort)!(fVar4 <= fVar14) << 8 |
                                 (ushort)(GEN_ISNAN(fVar14) || GEN_ISNAN(fVar4)) << 10 | (ushort)bVar11 << 0xe);
          if ((!(fVar4 <= fVar14) == bVar11) &&
             (uVar8 = CONCAT22(uVar9,(ushort)!(fVar15 <= fVar14) << 8 |
                                     (ushort)(GEN_ISNAN(fVar14) || GEN_ISNAN(fVar15)) << 10 |
                                     (ushort)((GEN_ISNAN(fVar14) || GEN_ISNAN(fVar15)) || fVar14 == fVar15) <<
                                     0xe), !(fVar15 <= fVar14))) {
            F_00c47745(uVar5 ^ (uint)(uint)(gen_frame + 0x10));
            return CONCAT31((int3)(uVar8 >> 8),1);
          }
        }
      }
    }
    iVar10 = iVar10 + 1;
    if (3 < iVar10) {
      F_00c47745(uVar5 ^ (uint)(uint)(gen_frame + 0x10));
      return uVar8;
    }
  } while( true );
}

/* ref: FUN_00d1eee0 */
uint F_00d1eee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1eee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float * pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float10 fVar9;
  byte bVar10;
  uint uVar11;
  float * pfVar12;
  float * pfVar13;
  int iVar14;
  float10 fVar15;
  float10 fVar16;
  
  uVar11 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  (*(uint *)(gen_frame + 0x5c)) = uVar11;
  iVar14 = *(int *)((int)this + 0x128);
  fVar9 = (float10)0;
  fVar15 = (float10)((float)GEN_TOF(((float10)param_1[1] - (float10)*(float *)(iVar14 + 0x24))));
  if (!(fVar9 <= fVar15) || ((GEN_ISNAN(fVar15) || GEN_ISNAN(fVar9)) || fVar15 == fVar9)) {
    if ((!(fVar9 <= fVar15) != (GEN_ISNAN(fVar15) || GEN_ISNAN(fVar9))) && ((*(byte *)(iVar14 + 4) & 0x10) == 0)
       ) {
      fVar16 = (float10)*(float *)(iVar14 + 100);
      fVar15 = -fVar15;
      if (fVar16 <= fVar15 && ((!GEN_ISNAN(fVar15) && !GEN_ISNAN(fVar16)) && fVar15 != fVar16)) {
        F_00c47745(uVar11 ^ (uint)(uint)(gen_frame + 0x60));
        return 0xfffffffe;
      }
    }
  }
  else if (((*(byte *)(iVar14 + 4) & 8) == 0) &&
          (!(fVar15 <= (float10)*(float *)(iVar14 + 0x60)) !=
           (GEN_ISNAN((float10)*(float *)(iVar14 + 0x60)) || GEN_ISNAN(fVar15)))) {
    F_00c47745(uVar11 ^ (uint)(uint)(gen_frame + 0x60));
    return 0xffffffff;
  }
  fVar2 = *param_1;
  fVar3 = param_1[1];
  fVar4 = param_1[2];
  fVar5 = param_1[3];
  pfVar13 = (float *)(iVar14 + 0x20);
  iVar14 = 4;
  pfVar12 = ((float *)(gen_frame + 0x18)) + 1;
  do {
    fVar6 = *pfVar13;
    pfVar1 = pfVar13 + 1;
    fVar7 = pfVar13[2];
    fVar8 = pfVar13[3];
    pfVar13 = pfVar13 + 4;
    iVar14 = iVar14 + -1;
    (*(float *)(gen_frame + 0x0)) = fVar2 - fVar6;
    (*(float *)(gen_frame + 0x4)) = fVar3 - *pfVar1;
    (*(float *)(gen_frame + 0x8)) = fVar4 - fVar7;
    (*(float *)(gen_frame + 0xc)) = fVar5 - fVar8;
    pfVar12[-1] = fVar2 - fVar6;
    pfVar12[1] = fVar4 - fVar7;
    pfVar12[2] = fVar5 - fVar8;
    *pfVar12 = (float)fVar9;
    pfVar12 = pfVar12 + 4;
  } while (iVar14 != 0);
  F_01052f50(((float *)(gen_frame + 0x18)),&(*(float *)(gen_frame + 0x0)));
  bVar10 = F_01053270(((float *)(gen_frame + 0x18)),&(*(float *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60));
  return (uint)(bVar10 != 0);
}

/* ref: FUN_00d1f050 */
float F_00d1f050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1f050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  float * pfVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte bVar7;
  bool bVar8;
  float * pfVar9;
  float * pfVar10;
  int iVar11;
  float10 fVar12;
  float10 fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  (*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  fVar17 = *param_1;
  fVar3 = param_1[1];
  fVar4 = param_1[2];
  fVar5 = param_1[3];
  pfVar9 = ((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x20)));
  iVar11 = 4;
  pfVar10 = ((float *)(gen_frame + 0x28)) + 1;
  do {
    fVar14 = *pfVar9;
    fVar6 = pfVar9[1];
    pfVar1 = pfVar9 + 2;
    pfVar2 = pfVar9 + 3;
    pfVar9 = pfVar9 + 4;
    iVar11 = iVar11 + -1;
    fVar14 = fVar14 - fVar17;
    fVar15 = *pfVar1 - fVar4;
    fVar16 = *pfVar2 - fVar5;
    (*(float *)(gen_frame + 0x10)) = fVar14;
    (*(float *)(gen_frame + 0x14)) = fVar6 - fVar3;
    (*(float *)(gen_frame + 0x18)) = fVar15;
    (*(float *)(gen_frame + 0x1c)) = fVar16;
    (*(float *)(gen_frame + 0x6c)) = fVar14;
    pfVar10[-1] = fVar14;
    (*(float *)(gen_frame + 0x70)) = fVar6 - fVar3;
    (*(float *)(gen_frame + 0x74)) = fVar15;
    pfVar10[1] = fVar15;
    (*(float *)(gen_frame + 0x78)) = fVar16;
    pfVar10[2] = fVar16;
    *pfVar10 = (float)(float10)0;
    pfVar10 = pfVar10 + 4;
  } while (iVar11 != 0);
  (*(float *)(gen_frame + 0x8)) = (float)(float10)0;
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x78)) + 0)) = 1;
  (*(float *)(gen_frame + 0x74)) = 3.7616967e-37;
  (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x78)) + 1)) = 0x302;
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x78)) + 3)) = 2;
  (*(float *)(gen_frame + 0x78)) = 9.624935e-38;
  bVar8 = false;
  iVar11 = 0;
  do {
    fVar17 = F_010536a0(((float *)(gen_frame + 0x28)) + (uint)*(byte *)((int)&(*(float *)(gen_frame + 0x74)) + iVar11 * 2) * 4,
                          ((float *)(gen_frame + 0x28)) + (uint)*(byte *)((int)&(*(float *)(gen_frame + 0x74)) + iVar11 * 2 + 1) * 4,&(*(float *)(gen_frame + 0x10)))
    ;
    fVar12 = (float10)fVar17;
    if (bVar8) {
      fVar13 = (float10)(*(float *)(gen_frame + 0x8));
      if (fVar12 <= fVar13 && ((!GEN_ISNAN(fVar13) && !GEN_ISNAN(fVar12)) && fVar13 != fVar12)) {
        (*(float *)(gen_frame + 0x8)) = fVar17;
      }
    }
    else {
      bVar8 = true;
      (*(float *)(gen_frame + 0x8)) = fVar17;
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 < 4);
  bVar7 = *((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 4)));
  if ((bVar7 & 8) == 0) {
    fVar12 = (float10)((float)GEN_TOF((((float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x60))) +
                              (float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x24)))) -
                             (float10)param_1[1])));
    if (!((float10)0 <= fVar12) != (GEN_ISNAN(fVar12) || GEN_ISNAN((float10)0))) {
      fVar12 = (float10)((float)GEN_TOF(-fVar12));
    }
    fVar13 = (float10)(*(float *)(gen_frame + 0x8));
    if (fVar12 <= fVar13 && ((!GEN_ISNAN(fVar13) && !GEN_ISNAN(fVar12)) && fVar13 != fVar12)) {
      (*(float *)(gen_frame + 0x8)) = (float)fVar12;
    }
  }
  if ((bVar7 & 0x10) == 0) {
    fVar12 = (float10)((float)GEN_TOF((((float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x24))) -
                              (float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 100)))) -
                             (float10)param_1[1])));
    if (!((float10)0 <= fVar12) != (GEN_ISNAN(fVar12) || GEN_ISNAN((float10)0))) {
      fVar12 = (float10)((float)GEN_TOF(-fVar12));
    }
    fVar13 = (float10)(*(float *)(gen_frame + 0x8));
    if (!(fVar12 <= fVar13) || ((GEN_ISNAN(fVar13) || GEN_ISNAN(fVar12)) || fVar13 == fVar12))
    goto LAB_00d1f216;
    (*(float *)(gen_frame + 0x8)) = (float)fVar12;
  }
  fVar13 = (float10)(*(float *)(gen_frame + 0x8));
LAB_00d1f216: ;
  F_00c47745((*(uint *)(gen_frame + 0x7c)) ^ (uint)(uint)(gen_frame + 0x80));
  return (float)fVar13;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf18 */
uint F_00d1f230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1f230u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_3 < 0x80) {
    return 0;
  }
  puVar2 = *(undefined4 * PTR32 *)(in_ecx + 0x128);
  puVar3 = param_2;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0x80;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf19 */
byte F_00d1f270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd1f270u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf20 */
unsigned int F_00d1f280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1f280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00d1f360 */
uint F_00d1f360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1f360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  ushort uVar1;
  uint uVar2;
  float10 fVar3;
  
  if (param_1 == 0) {
    uVar1 = *((ushort *)GEN_TOP((*(int *)((int)this + 0x128) + 0x7a)));
    fVar3 = (float10)1;
  }
  else {
    uVar1 = *((ushort *)GEN_TOP((*(int *)((int)this + 0x128) + 0x78)));
    fVar3 = (float10)0;
  }
  uVar2 = F_00cccd90((int)this + 0x14c,(float)fVar3,(uint)uVar1 * 1000 >> 4);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf25 */
uint F_00d1f3a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd1f3a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
  uVar1 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar1 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x90);
  }
  F_00c47745((*(uint *)(gen_frame + 0x9c)) ^ (uint)(uint)(gen_frame + 0xa0));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf27 */
unsigned int F_00d1f420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1f420u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_2;
  puVar3 = *(undefined4 * PTR32 *)(in_ecx + 0x128);
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf29 */
uint F_00d1f440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd1f440u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  HWND param_1 = (HWND)gen_a1;
  HDC param_2 = (HDC)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  char cVar1;
  float fVar2;
  undefined * pBVar3;
  HGDIOBJ pvVar4;
  undefined * pHVar5;
  int * piVar6;
  uint uVar7;
  float * pfVar8;
  char * pcVar9;
  int iVar10;
  int x;
  int iVar11;
  int iVar12;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = this;
  pvVar4 = gen_imp_GetStockObject(5);
  (*(HGDIOBJ *)(gen_frame + 0x24)) = pvVar4;
  pvVar4 = gen_imp_SelectObject(param_2,pvVar4);
  (*(HGDIOBJ *)(gen_frame + 0x28)) = pvVar4;
  pHVar5 = gen_imp_CreatePen(0,2,0x8000);
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = pHVar5;
  pvVar4 = gen_imp_SelectObject(param_2,pHVar5);
  (*(HGDIOBJ *)(gen_frame + 0x1c)) = pvVar4;
  gen_imp_GetClientRect(param_1,&(*(tagRECT *)(gen_frame + 0x98)));
  iVar12 = (*(tagRECT *)(gen_frame + 0x98)).right / 2;
  iVar11 = (*(tagRECT *)(gen_frame + 0x98)).bottom / 2;
  piVar6 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x1c) + 0xc))) + 0x98))))
                            (*((int * PTR32 *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x1c) + 0xc))))));
  (*(int * PTR32 *)(gen_frame + 0x38)) = piVar6;
  uVar7 = ((code *)*(gen_code32 *)(*piVar6 + 0x5c))(piVar6,((undefined1 *)(gen_frame + 0x48)));
  if ((char)uVar7 != '\0') {
    (*(byte *)(gen_frame + 0x47)) = *((byte *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x128) + 4))) >> 2 & 1;
    (*(float * PTR32 *)(gen_frame + 0x40)) = &(*(float *)(gen_frame + 0xac));
    (*(int *)(gen_frame + 0x34)) = *(int *)((*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x128) + 0x20;
    (*(int *)(gen_frame + 0x3c)) = 4;
    do {
      pfVar8 = (float *)F_00c34320(((undefined1 *)(gen_frame + 0x48)),((undefined1 *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x34)));
      (*(float * PTR32 *)(gen_frame + 0x40))[-1] = *pfVar8;
      *(*(float * PTR32 *)(gen_frame + 0x40)) = pfVar8[1];
      fVar2 = pfVar8[3];
      (*(float * PTR32 *)(gen_frame + 0x40))[1] = pfVar8[2];
      (*(float * PTR32 *)(gen_frame + 0x40))[2] = fVar2;
      if ((*(byte *)(gen_frame + 0x47)) == 0) {
        *(*(float * PTR32 *)(gen_frame + 0x40)) = (float)(float10)0;
      }
      (*(int *)(gen_frame + 0x34)) = (*(int *)(gen_frame + 0x34)) + 0x10;
      iVar10 = (*(int *)(gen_frame + 0x3c)) + -1;
      (*(int *)(gen_frame + 0x3c)) = iVar10;
      (*(float * PTR32 *)(gen_frame + 0x40)) = (*(float * PTR32 *)(gen_frame + 0x40)) + 4;
    } while (iVar10 != 0);
    iVar10 = iVar11 - (int)((double)(*(float *)(gen_frame + 0xb0)) * *(double *)&REFG(double, 0x1132488));
    (*(int *)(gen_frame + 0x3c)) = iVar10;
    x = iVar12 - (int)(*(double *)&REFG(double, 0x1132488) * (double)(*(float *)(gen_frame + 0xa8)));
    (*(float * PTR32 *)(gen_frame + 0x40)) = (float *)x;
    gen_imp_MoveToEx(param_2,x,iVar10,(LPPOINT)0x0);
    gen_imp_LineTo(param_2,iVar12 - (int)(*(double *)&REFG(double, 0x1132488) * (double)(*(float *)(gen_frame + 0xb8))),
           iVar11 - (int)((double)(*(float *)(gen_frame + 0xc0)) * *(double *)&REFG(double, 0x1132488)));
    gen_imp_LineTo(param_2,iVar12 - (int)(*(double *)&REFG(double, 0x1132488) * (double)(*(float *)(gen_frame + 0xc8))),
           iVar11 - (int)((double)(*(float *)(gen_frame + 0xd0)) * *(double *)&REFG(double, 0x1132488)));
    gen_imp_LineTo(param_2,iVar12 - (int)(*(double *)&REFG(double, 0x1132488) * (double)(*(float *)(gen_frame + 0xd8))),
           iVar11 - (int)((double)(*(float *)(gen_frame + 0xe0)) * *(double *)&REFG(double, 0x1132488)));
    iVar11 = (*(int *)(gen_frame + 0x3c));
    gen_imp_LineTo(param_2,(*(float * PTR32 *)(gen_frame + 0x40)),(*(int *)(gen_frame + 0x3c)));
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x38)) + 0x30))((*(int * PTR32 *)(gen_frame + 0x38)),((undefined1 *)(gen_frame + 0x88)));
    pBVar3 = (*(undefined * PTR32 *)(gen_frame + 0x30));
    piVar6 = ((int *)(uintptr_t)gen_fl2bits((float)(F_00d1f050((*(undefined * PTR32 *)(gen_frame + 0x30)),((undefined1 *)(gen_frame + 0x88))))));
    (*(int * PTR32 *)(gen_frame + 0x38)) = piVar6;
    ((code *)*(gen_code32 *)(*(int *)pBVar3 + 0x60))(pBVar3,&(*(float *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x18)),piVar6,0);
    F_00c472af(((char *)(gen_frame + 0xe8)),0x20,&REFG(undefined, 0x1133978),(int)(ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x20))),
               (int)((ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x20))) >> 0x20));
    pcVar9 = ((char *)(gen_frame + 0xe8));
    do {
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    gen_imp_GetTextExtentPoint32A(param_2,((char *)(gen_frame + 0xe8)),(int)pcVar9 - (int)(((char *)(gen_frame + 0xe8)) + 1),&(*(undefined8 *)(gen_frame + 0x10)));
    gen_imp_TextOutA(param_2,(int)(*(float * PTR32 *)(gen_frame + 0x40)),iVar11,((char *)(gen_frame + 0xe8)),(int)pcVar9 - (int)(((char *)(gen_frame + 0xe8)) + 1));
    gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x1c)));
    gen_imp_SelectObject(param_2,(*(HGDIOBJ *)(gen_frame + 0x28)));
    gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x2c)));
    uVar7 = gen_imp_DeleteObject((*(HGDIOBJ *)(gen_frame + 0x24)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar7;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf30 */
byte F_00d1f750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1f750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined * _File;
  byte bVar5;
  int iVar6;
  
  _File = param_1;
  bVar5 = F_00d21f00((undefined *)this,param_1);
  if (bVar5 == 0) {
    return 0;
  }
  iVar6 = 0;
  param_1 = (undefined *)0x0;
  do {
    iVar1 = *(int *)(this + 0x128);
    dVar2 = (double)*(float *)(iVar6 + 0x28 + iVar1);
    dVar3 = (double)*(float *)(iVar6 + 0x24 + iVar1);
    dVar4 = (double)*(float *)(iVar6 + 0x20 + iVar1);
    F_00c49386(_File,"Position[%d] = %f %f %f\n",param_1,(int)(ulonglong)gen_d2bits(dVar4),
             (int)((ulonglong)gen_d2bits(dVar4) >> 0x20),(int)(ulonglong)gen_d2bits(dVar3),
             (int)((ulonglong)gen_d2bits(dVar3) >> 0x20),(int)(ulonglong)gen_d2bits(dVar2),
             (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
    param_1 = (undefined *)((int)param_1 + (1) * 32);
    iVar6 = iVar6 + 0x10;
  } while (iVar6 < 0x40);
  param_1 = (undefined *)0x0;
  iVar6 = 0x60;
  do {
    F_00c49386(_File,"Height[%d] = %f\n",param_1,
             (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + iVar6)))),
             (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + iVar6)))) >> 0x20
                  ));
    param_1 = (undefined *)((int)param_1 + (1) * 32);
    iVar6 = iVar6 + 4;
  } while (iVar6 < 0x68);
  F_00c49386(_File,"ObstacleFac = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x68))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x68))))));
  F_00c49386(_File,"HicutFac = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x6c))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x6c))))));
  F_00c49386(_File,"BlockadeFlag = %d\n",*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x70))) & 0xf);
  F_00c49386(_File,"fUseHicutFac = %d\n",*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x70))) >> 4 & 1);
  F_00c49386(_File,"FadeRange = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x74))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x74))))));
  F_00c49386(_File,"[EndOfSoundObject]\n\n");
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf31 */
byte F_00d1f890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd1f890u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  char * pcVar2;
  int iVar3;
  uint uVar4;
  byte * pbVar5;
  bool bVar6;
  double dVar7;
  
  pcVar2 = "Position";
  pbVar5 = (byte *)param_2;
  do {
    bVar1 = *pcVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00d1f8c1: ;
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00d1f8c6;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00d1f8c1;
    pcVar2 = pcVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d1f8c6: ;
  if (iVar3 == 0) {
    uVar4 = F_00d00d00(0,0);
    if (uVar4 != 0) {
      uVar4 = F_00c4c74c(uVar4);
      pcVar2 = (char *)F_00d00d00(0,0);
      if (pcVar2 != (char *)0x0) {
        dVar7 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + (uVar4 + 2) * 0x10))) = (float)dVar7;
        pcVar2 = (char *)F_00d00d00(0,0);
        if (pcVar2 != (char *)0x0) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x24 + uVar4 * 0x10))) = (float)dVar7;
          pcVar2 = (char *)F_00d00d00(0,0);
          if (pcVar2 != (char *)0x0) {
            dVar7 = F_00c4acaa(pcVar2);
            *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x28 + uVar4 * 0x10))) = (float)dVar7;
            return 1;
          }
        }
      }
    }
  }
  else {
    pcVar2 = "Height";
    pbVar5 = (byte *)param_2;
    do {
      bVar1 = *pcVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00d1f9a0: ;
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00d1f9a5;
      }
      if (bVar1 == 0) break;
      bVar1 = pcVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00d1f9a0;
      pcVar2 = pcVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00d1f9a5: ;
    if (iVar3 == 0) {
      uVar4 = F_00d00d00(0,0);
      if (uVar4 != 0) {
        uVar4 = F_00c4c74c(uVar4);
        pcVar2 = (char *)F_00d00d00(0,0);
        if (pcVar2 != (char *)0x0) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x60 + uVar4 * 4))) = (float)dVar7;
          return 1;
        }
      }
    }
    else {
      pcVar2 = "ObstacleFac";
      pbVar5 = (byte *)param_2;
      do {
        bVar1 = *pcVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00d1fa20: ;
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00d1fa25;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00d1fa20;
        pcVar2 = pcVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00d1fa25: ;
      if (iVar3 == 0) {
        pcVar2 = (char *)F_00d00d00(0,0);
        if (pcVar2 != (char *)0x0) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x68))) = (float)dVar7;
          return 1;
        }
      }
      else {
        pcVar2 = "HicutFac";
        pbVar5 = (byte *)param_2;
        do {
          bVar1 = *pcVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00d1fa82: ;
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_00d1fa87;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00d1fa82;
          pcVar2 = pcVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00d1fa87: ;
        if (iVar3 == 0) {
          pcVar2 = (char *)F_00d00d00(0,0);
          if (pcVar2 != (char *)0x0) {
            dVar7 = F_00c4acaa(pcVar2);
            *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x6c))) = (float)dVar7;
            return 1;
          }
        }
        else {
          pcVar2 = "fUseHicutFac";
          pbVar5 = (byte *)param_2;
          do {
            bVar1 = *pcVar2;
            bVar6 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_00d1fae4: ;
              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
              goto LAB_00d1fae9;
            }
            if (bVar1 == 0) break;
            bVar1 = pcVar2[1];
            bVar6 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00d1fae4;
            pcVar2 = pcVar2 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_00d1fae9: ;
          if (iVar3 != 0) {
            pcVar2 = "BlockadeFlag";
            pbVar5 = (byte *)param_2;
            do {
              bVar1 = *pcVar2;
              bVar6 = bVar1 < *pbVar5;
              if (bVar1 != *pbVar5) {
LAB_00d1fb18: ;
                iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                goto LAB_00d1fb1d;
              }
              if (bVar1 == 0) break;
              bVar1 = pcVar2[1];
              bVar6 = bVar1 < pbVar5[1];
              if (bVar1 != pbVar5[1]) goto LAB_00d1fb18;
              pcVar2 = pcVar2 + 2;
              pbVar5 = pbVar5 + 2;
            } while (bVar1 != 0);
            iVar3 = 0;
LAB_00d1fb1d: ;
            if (iVar3 == 0) {
              uVar4 = F_00d00d00(0,0);
              if (uVar4 == 0) {
                return 0;
              }
              uVar4 = F_00c4c74c(uVar4);
              pbVar5 = ((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x70)));
              *pbVar5 = *pbVar5 ^ (*((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x70))) ^ (byte)uVar4) & 0xf;
              return 1;
            }
            pcVar2 = "fUseHicutFac";
            pbVar5 = (byte *)param_2;
            do {
              bVar1 = *pcVar2;
              bVar6 = bVar1 < *pbVar5;
              if (bVar1 != *pbVar5) {
LAB_00d1fb78: ;
                iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                goto LAB_00d1fb7d;
              }
              if (bVar1 == 0) break;
              bVar1 = pcVar2[1];
              bVar6 = bVar1 < pbVar5[1];
              if (bVar1 != pbVar5[1]) goto LAB_00d1fb78;
              pcVar2 = pcVar2 + 2;
              pbVar5 = pbVar5 + 2;
            } while (bVar1 != 0);
            iVar3 = 0;
LAB_00d1fb7d: ;
            if (iVar3 != 0) {
              pcVar2 = "FadeRange";
              pbVar5 = (byte *)param_2;
              do {
                bVar1 = *pcVar2;
                bVar6 = bVar1 < *pbVar5;
                if (bVar1 != *pbVar5) {
LAB_00d1fbe2: ;
                  iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                  goto LAB_00d1fbe7;
                }
                if (bVar1 == 0) break;
                bVar1 = pcVar2[1];
                bVar6 = bVar1 < pbVar5[1];
                if (bVar1 != pbVar5[1]) goto LAB_00d1fbe2;
                pcVar2 = pcVar2 + 2;
                pbVar5 = pbVar5 + 2;
              } while (bVar1 != 0);
              iVar3 = 0;
LAB_00d1fbe7: ;
              if (iVar3 != 0) {
                bVar1 = F_00d22040(param_1,param_2);
                return bVar1;
              }
              pcVar2 = (char *)F_00d00d00(0,0);
              if (pcVar2 == (char *)0x0) {
                return 0;
              }
              dVar7 = F_00c4acaa(pcVar2);
              *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x74))) = (float)dVar7;
              return 1;
            }
          }
          uVar4 = F_00d00d00(0,0);
          if (uVar4 != 0) {
            uVar4 = F_00c4c74c(uVar4);
            pbVar5 = ((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x70)));
            *pbVar5 = *pbVar5 ^ ((char)uVar4 << 4 ^ *((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x70)))) &
                                0x10;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00d1fc30 */
uint F_00d1fc30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd1fc30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  undefined1 uVar1;
  ushort uVar2;
  float * pfVar3;
  float * pfVar4;
  undefined2 uVar6;
  float fVar5;
  int iVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  (*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90);
  fVar17 = (float10)0;
  fVar16 = (float10)1;
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  iVar8 = *(int *)((int)this + 0x128);
  (*(float * PTR32 *)(gen_frame + 0x34)) = param_1;
  (*(byte *)(gen_frame + 0x3f)) = 0;
  ((byte *)(gen_frame + 0x84))[0] = 0;
  ((byte *)(gen_frame + 0x84))[1] = 1;
  ((byte *)(gen_frame + 0x84))[2] = 1;
  ((byte *)(gen_frame + 0x84))[3] = 2;
  ((byte *)(gen_frame + 0x84))[4] = 2;
  ((byte *)(gen_frame + 0x84))[5] = 3;
  ((byte *)(gen_frame + 0x84))[6] = 3;
  ((byte *)(gen_frame + 0x84))[7] = 0;
  iVar7 = 0;
  do {
    pfVar3 = ((float *)GEN_TOP(((((byte *)(gen_frame + 0x84))[(int)(iVar7 * 2)] + 2) * 0x10 + iVar8)));
    pfVar4 = ((float *)GEN_TOP(((((byte *)(gen_frame + 0x84))[(int)(iVar7 * 2 + 1)] + 2) * 0x10 + iVar8)));
    fVar18 = *pfVar4 - *pfVar3;
    fVar19 = pfVar4[2] - pfVar3[2];
    (*(float *)(gen_frame + 0x20)) = fVar18;
    (*(float *)(gen_frame + 0x24)) = pfVar4[1] - pfVar3[1];
    (*(float *)(gen_frame + 0x28)) = fVar19;
    (*(float *)(gen_frame + 0x2c)) = pfVar4[3] - pfVar3[3];
    fVar11 = (float10)fVar19;
    fVar12 = (float10)fVar18;
    fVar18 = (float)(fVar11 * (float10)*param_2 - fVar12 * (float10)param_2[2]);
    (*(float *)(gen_frame + 0x38)) = fVar18;
    fVar13 = (float10)fVar18;
    bVar9 = GEN_ISNAN(fVar17) || GEN_ISNAN(fVar13);
    bVar10 = bVar9 || fVar17 == fVar13;
    uVar6 = (undefined2)((uint)gen_fl2bits(pfVar4[3]) >> 0x10);
    fVar18 = gen_bits2f(CONCAT22(uVar6,(ushort)!(fVar13 <= fVar17) << 8 | (ushort)bVar9 << 10 |
                                       (ushort)bVar10 << 0xe));
    pfVar4 = (*(float * PTR32 *)(gen_frame + 0x34));
    if (bVar9 == bVar10) {
      fVar18 = *pfVar3 - *(*(float * PTR32 *)(gen_frame + 0x34));
      fVar19 = pfVar3[2] - (*(float * PTR32 *)(gen_frame + 0x34))[2];
      (*(float *)(gen_frame + 0x20)) = fVar18;
      (*(float *)(gen_frame + 0x24)) = pfVar3[1] - (*(float * PTR32 *)(gen_frame + 0x34))[1];
      (*(float *)(gen_frame + 0x28)) = fVar19;
      (*(float *)(gen_frame + 0x2c)) = pfVar3[3] - (*(float * PTR32 *)(gen_frame + 0x34))[3];
      fVar14 = (float10)fVar18;
      fVar15 = (float10)fVar19;
      fVar19 = ((float)GEN_TOF(((fVar14 * fVar11 - fVar15 * fVar12) / fVar13)));
      (*(float *)(gen_frame + 0x38)) = fVar19;
      fVar11 = (float10)fVar19;
      bVar9 = GEN_ISNAN(fVar11) || GEN_ISNAN(fVar17);
      fVar18 = gen_bits2f(CONCAT22(uVar6,(ushort)!(fVar17 <= fVar11) << 8 | (ushort)bVar9 << 10 |
                                         (ushort)(bVar9 || fVar11 == fVar17) << 0xe));
      if ((!(fVar17 <= fVar11) == bVar9) &&
         (uVar2 = (ushort)((GEN_ISNAN(fVar11) || GEN_ISNAN(fVar16)) || fVar11 == fVar16),
         fVar18 = gen_bits2f(CONCAT22(uVar6,(ushort)!(fVar16 <= fVar11) << 8 |
                                            (ushort)(GEN_ISNAN(fVar11) || GEN_ISNAN(fVar16)) << 10 |
                                            uVar2 << 0xe)), !(fVar16 <= fVar11) != 0 || uVar2 != 0))
      {
        fVar11 = (float10)((float)GEN_TOF((((float10)param_2[2] * fVar14 - (float10)*param_2 * fVar15) /
                                 fVar13)));
        bVar9 = GEN_ISNAN(fVar11) || GEN_ISNAN(fVar17);
        fVar18 = gen_bits2f(CONCAT22(uVar6,(ushort)!(fVar17 <= fVar11) << 8 | (ushort)bVar9 << 10 |
                                           (ushort)(bVar9 || fVar11 == fVar17) << 0xe));
        if ((!(fVar17 <= fVar11) == bVar9) &&
           (uVar2 = (ushort)((GEN_ISNAN(fVar11) || GEN_ISNAN(fVar16)) || fVar11 == fVar16),
           fVar18 = gen_bits2f(CONCAT22(uVar6,(ushort)!(fVar16 <= fVar11) << 8 |
                                              (ushort)(GEN_ISNAN(fVar11) || GEN_ISNAN(fVar16)) << 10 |
                                              uVar2 << 0xe)), !(fVar16 <= fVar11) != 0 || uVar2 != 0
           )) {
          fVar5 = gen_bits2f((uint)(*(byte *)(gen_frame + 0x3f)));
          (*(float *)(gen_frame + 0x20)) = *param_2 * fVar19;
          (*(float *)(gen_frame + 0x24)) = param_2[1] * fVar19;
          (*(float *)(gen_frame + 0x28)) = param_2[2] * fVar19;
          (*(float *)(gen_frame + 0x2c)) = param_2[3] * fVar19;
          (*(float *)(gen_frame + 0x38)) = fVar5;
          (*(byte *)(gen_frame + 0x3f)) = (*(byte *)(gen_frame + 0x3f)) + 1;
          fVar18 = *param_2 * fVar19 + *(*(float * PTR32 *)(gen_frame + 0x34));
          fVar21 = param_2[1] * fVar19 + (*(float * PTR32 *)(gen_frame + 0x34))[1];
          (*(float *)(gen_frame + 0x20)) = fVar18;
          (*(float *)(gen_frame + 0x24)) = fVar21;
          (*(float *)(gen_frame + 0x28)) = param_2[2] * fVar19 + (*(float * PTR32 *)(gen_frame + 0x34))[2];
          (*(float *)(gen_frame + 0x2c)) = param_2[3] * fVar19 + (*(float * PTR32 *)(gen_frame + 0x34))[3];
          (*(float *)(gen_frame + 0x10)) = fVar18;
          ((float *)(gen_frame + 0x40))[(int)((int)gen_fl2bits(fVar5) * 4)] = fVar18;
          fVar18 = (*(float *)(gen_frame + 0x28));
          (*(float *)(gen_frame + 0x14)) = fVar21;
          ((float *)(gen_frame + 0x40))[(int)((int)gen_fl2bits(fVar5) * 4 + 1)] = fVar21;
          fVar19 = (*(float *)(gen_frame + 0x2c));
          (*(float *)(gen_frame + 0x18)) = fVar18;
          ((float *)(gen_frame + 0x40))[(int)((int)gen_fl2bits(fVar5) * 4 + 2)] = fVar18;
          (*(float *)(gen_frame + 0x1c)) = fVar19;
          ((float *)(gen_frame + 0x40))[(int)((int)gen_fl2bits(fVar5) * 4 + 3)] = fVar19;
          pfVar4 = (*(float * PTR32 *)(gen_frame + 0x34));
          ((float *)(gen_frame + 0x40))[(int)((int)gen_fl2bits(fVar5) * 4 + 3)] = (float)fVar16;
          fVar18 = (*(float *)(gen_frame + 0x38));
          ((undefined1 *)(gen_frame + 0x8))[(int)((int)gen_fl2bits((*(float *)(gen_frame + 0x38))))] = (char)iVar7;
        }
      }
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  fVar18 = gen_bits2f(CONCAT31((int3)((uint)gen_fl2bits(fVar18) >> 8),(*(byte *)(gen_frame + 0x3f))));
  if ((*(byte *)(gen_frame + 0x3f)) != 0) {
    fVar19 = gen_bits2f((uint)(*(byte *)(gen_frame + 0x3f)));
    (*(float * PTR32 *)(gen_frame + 0x34)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)fVar17)));
    iVar8 = 0;
    (*(float *)(gen_frame + 0x38)) = fVar19;
    fVar18 = fVar19;
    if ((*(byte *)(gen_frame + 0x3f)) != 0) {
      do {
        fVar5 = ((float *)(gen_frame + 0x40))[(int)(iVar8 * 4)] - *pfVar4;
        fVar21 = ((float *)(gen_frame + 0x40))[(int)(iVar8 * 4 + 1)] - pfVar4[1];
        fVar20 = ((float *)(gen_frame + 0x40))[(int)(iVar8 * 4 + 2)] - pfVar4[2];
        (*(float *)(gen_frame + 0x20)) = fVar5;
        (*(float *)(gen_frame + 0x24)) = fVar21;
        (*(float *)(gen_frame + 0x28)) = fVar20;
        (*(float *)(gen_frame + 0x2c)) = ((float *)(gen_frame + 0x40))[(int)(iVar8 * 4 + 3)] - pfVar4[3];
        (*(float *)(gen_frame + 0x10)) = fVar5;
        (*(float *)(gen_frame + 0x14)) = fVar21;
        (*(float *)(gen_frame + 0x18)) = fVar20;
        (*(float *)(gen_frame + 0x1c)) = ((float *)(gen_frame + 0x40))[(int)(iVar8 * 4 + 3)] - pfVar4[3];
        pfVar3 = ((float *)GEN_TOP(SQRT((fVar20 * fVar20 + fVar5 * fVar5) + fVar21 * fVar21)));
        if (iVar8 == 0) {
          (*(float * PTR32 *)(gen_frame + 0x34)) = pfVar3;
          *param_3 = ((float *)(gen_frame + 0x40))[0];
          param_3[1] = ((float *)(gen_frame + 0x40))[1];
          param_3[2] = ((float *)(gen_frame + 0x40))[2];
          fVar18 = gen_bits2f(CONCAT31((int3)((uint)gen_fl2bits(((float *)(gen_frame + 0x40))[2]) >> 8),((undefined1 *)(gen_frame + 0x8))[0]));
          param_3[3] = ((float *)(gen_frame + 0x40))[3];
          *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x178) = ((undefined1 *)(gen_frame + 0x8))[0];
        }
        else {
          fVar16 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x34)))));
          fVar17 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar3)));
          bVar9 = GEN_ISNAN(fVar17) || GEN_ISNAN(fVar16);
          fVar18 = gen_bits2f(CONCAT22((short)((uint)gen_fl2bits(fVar18) >> 0x10),
                                       (ushort)!(fVar16 <= fVar17) << 8 | (ushort)bVar9 << 10 |
                                       (ushort)(bVar9 || fVar17 == fVar16) << 0xe));
          if (!(fVar16 <= fVar17) != bVar9) {
            (*(float * PTR32 *)(gen_frame + 0x34)) = pfVar3;
            *param_3 = ((float *)(gen_frame + 0x40))[(int)(iVar8 * 4)];
            param_3[1] = ((float *)(gen_frame + 0x40))[(int)(iVar8 * 4 + 1)];
            fVar18 = ((float *)(gen_frame + 0x40))[(int)(iVar8 * 4 + 2)];
            fVar5 = ((float *)(gen_frame + 0x40))[(int)(iVar8 * 4 + 3)];
            param_3[2] = fVar18;
            uVar1 = ((undefined1 *)(gen_frame + 0x8))[(int)(iVar8)];
            fVar18 = gen_bits2f(CONCAT31((int3)((uint)gen_fl2bits(fVar18) >> 8),uVar1));
            param_3[3] = fVar5;
            *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x178) = uVar1;
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)gen_fl2bits(fVar19));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x8c)) ^ (uint)(uint)(gen_frame + 0x90));
  return (uint)gen_fl2bits(fVar18);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf22 */
uint F_00d20060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd20060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  *param_4 = 0;
  (*(float *)(gen_frame + 0x10)) = *param_1 + *param_2;
  (*(float *)(gen_frame + 0x14)) = param_1[1] + param_2[1];
  (*(float *)(gen_frame + 0x18)) = param_1[2] + param_2[2];
  (*(float *)(gen_frame + 0x1c)) = param_1[3] + param_2[3];
  (*(float *)(gen_frame + 0x0)) = *param_1 + *param_2;
  (*(float *)(gen_frame + 0x4)) = param_1[1] + param_2[1];
  (*(float *)(gen_frame + 0x8)) = param_1[2] + param_2[2];
  (*(float *)(gen_frame + 0xc)) = param_1[3] + param_2[3];
  uVar3 = F_00d1eee0(this,param_1);
  *(uint *)(this + 0x170) = uVar3;
  uVar3 = F_00d1eee0(this,&(*(float *)(gen_frame + 0x0)));
  iVar1 = *(int *)(this + 0x170);
  *(uint *)(this + 0x174) = uVar3;
  if ((iVar1 < 0) || ((int)uVar3 < 0)) {
    if (iVar1 == 1) {
      iVar1 = *(int *)(this + 0x128);
      if (uVar3 == 0xffffffff) {
        fVar12 = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0x60) + (float10)*(float *)(iVar1 + 0x24))));
        (*(float *)(gen_frame + 0x2c)) = fVar12;
        fVar5 = (float10)fVar12;
      }
      else {
        fVar12 = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0x24) - (float10)*(float *)(iVar1 + 100))));
        (*(float *)(gen_frame + 0x2c)) = fVar12;
        fVar5 = (float10)fVar12;
      }
    }
    else {
      if (uVar3 != 1) {
        return uVar3;
      }
      iVar2 = *(int *)(this + 0x128);
      if (iVar1 == -1) {
        fVar12 = ((float)GEN_TOF(((float10)*(float *)(iVar2 + 0x60) + (float10)*(float *)(iVar2 + 0x24))));
        (*(float *)(gen_frame + 0x2c)) = fVar12;
        fVar5 = (float10)fVar12;
      }
      else {
        fVar12 = ((float)GEN_TOF(((float10)*(float *)(iVar2 + 0x24) - (float10)*(float *)(iVar2 + 100))));
        (*(float *)(gen_frame + 0x2c)) = fVar12;
        fVar5 = (float10)fVar12;
      }
    }
    fVar12 = param_1[1];
    *param_4 = 1;
    (*(float *)(gen_frame + 0x2c)) = (float)(fVar5 - (float10)fVar12);
    fVar5 = (float10)(float)(fVar5 - (float10)fVar12);
    bVar4 = GEN_ISNAN((float10)0) || GEN_ISNAN(fVar5);
    if (bVar4 == (bVar4 || (float10)0 == fVar5)) {
      fVar12 = (float)(fVar5 / (float10)param_2[1]);
      (*(float *)(gen_frame + 0x2c)) = fVar12;
      fVar6 = *param_2 * fVar12;
      fVar8 = param_2[1] * fVar12;
      fVar10 = param_2[2] * fVar12;
      fVar12 = param_2[3] * fVar12;
      (*(float *)(gen_frame + 0x0)) = fVar6;
      (*(float *)(gen_frame + 0x4)) = fVar8;
      (*(float *)(gen_frame + 0x8)) = fVar10;
      (*(float *)(gen_frame + 0xc)) = fVar12;
      (*(float *)(gen_frame + 0x10)) = fVar6;
      (*(float *)(gen_frame + 0x14)) = fVar8;
      (*(float *)(gen_frame + 0x18)) = fVar10;
      (*(float *)(gen_frame + 0x1c)) = fVar12;
      fVar7 = *param_1 + fVar6;
      fVar9 = param_1[1] + fVar8;
      fVar11 = param_1[2] + fVar10;
      fVar13 = param_1[3] + fVar12;
      (*(float *)(gen_frame + 0x0)) = fVar7;
      (*(float *)(gen_frame + 0x4)) = fVar9;
      (*(float *)(gen_frame + 0x8)) = fVar11;
      (*(float *)(gen_frame + 0xc)) = fVar13;
      (*(float *)(gen_frame + 0x10)) = fVar7;
      fVar8 = fVar8 * fVar8;
      fVar10 = fVar10 * fVar10;
      (*(float *)(gen_frame + 0x14)) = fVar9;
      (*(float *)(gen_frame + 0x18)) = fVar11;
      *param_3 = fVar7;
      (*(float *)(gen_frame + 0x1c)) = fVar13;
      param_3[1] = fVar9;
      param_3[2] = fVar11;
      (*(float *)(gen_frame + 0x0)) = SQRT((fVar10 + fVar6 * fVar6) + fVar8);
      (*(float *)(gen_frame + 0x4)) = (fVar10 + fVar8) + fVar8;
      (*(float *)(gen_frame + 0x8)) = (fVar10 + fVar10) + fVar8;
      (*(float *)(gen_frame + 0xc)) = (fVar10 + fVar12 * fVar12) + fVar8;
      param_3[3] = fVar13;
      return (uint)param_3;
    }
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    param_3[3] = param_1[3];
    return (uint)param_3;
  }
  if (iVar1 != 0) {
    if (uVar3 != 0) {
      return uVar3;
    }
    if (iVar1 != 0) goto LAB_00d2013d;
  }
  if (uVar3 == 0) {
    uVar3 = F_00d1fc30(this,param_1,param_2,param_3);
    return uVar3;
  }
LAB_00d2013d: ;
  uVar3 = F_00d1fc30(this,param_1,param_2,param_3);
  return uVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf26 */
uint F_00d20300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd20300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = (undefined4 *)F_00d22da0(this,param_1,0x80);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0xf4))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))));
  if (uVar2 != 0) {
    puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
    puVar5 = puVar1;
    for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    return (uint)(puVar1 + 0x20);
  }
  F_00d20d00(*(undefined4 *)(this + 0x128),(uint)puVar1);
  return (uint)(puVar1 + 0x20);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf28 */
uint F_00d20360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd20360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  uVar2 = *(uint *)(this + 0x1c);
  if (*((int *)GEN_TOP((*(int *)(uVar2 + 0xc) + 0x2f8))) != 0) {
    F_00d22b20(this,&(*(undefined2 *)(gen_frame + 0x0)));
    (*(undefined2 *)(gen_frame + 0x0)) = (undefined2)param_1;
    (*(undefined2 *)(gen_frame + 0x2)) = 0x68;
    uVar3 = F_00427d90();
    iVar1 = *(int *)(this + 0x128);
    (*(ulonglong *)(gen_frame + 0x8)) = uVar3;
    (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(iVar1 + 0x20);
    (*(undefined4 *)(gen_frame + 0x3c)) = *(undefined4 *)(iVar1 + 0x24);
    (*(undefined4 *)(gen_frame + 0x40)) = *(undefined4 *)(iVar1 + 0x28);
    (*(undefined4 *)(gen_frame + 0x44)) = *(undefined4 *)(iVar1 + 0x30);
    (*(undefined4 *)(gen_frame + 0x48)) = *(undefined4 *)(iVar1 + 0x34);
    (*(undefined4 *)(gen_frame + 0x4c)) = *(undefined4 *)(iVar1 + 0x38);
    (*(undefined4 *)(gen_frame + 0x50)) = *(undefined4 *)(iVar1 + 0x40);
    (*(undefined4 *)(gen_frame + 0x54)) = *(undefined4 *)(iVar1 + 0x44);
    (*(undefined4 *)(gen_frame + 0x58)) = *(undefined4 *)(iVar1 + 0x48);
    (*(undefined4 *)(gen_frame + 0x5c)) = *(undefined4 *)(iVar1 + 0x50);
    (*(undefined4 *)(gen_frame + 0x60)) = *(undefined4 *)(iVar1 + 0x54);
    (*(undefined4 *)(gen_frame + 0x64)) = *(undefined4 *)(iVar1 + 0x58);
    F_00d20ba0(&(*(undefined2 *)(gen_frame + 0x0)),&(*(undefined2 *)(gen_frame + 0x0)));
    uVar2 = F_00d00b10(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))),&(*(undefined2 *)(gen_frame + 0x0)),0x68);
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar2;
}

/* ref: FUN_00d20430 */
uint F_00d20430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd20430u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  int * this_00;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  F_00d22580(this,param_1,param_2,param_3);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1133acc));
  F_00cccb10((int)this + 0x14c,(float)(float10)1);
  *(uint *)((int)this + 0xb0) =
       *(uint *)((int)this + 0xb0) ^ ((param_4 & 0xff) << 4 ^ *(uint *)((int)this + 0xb0)) & 0x10;
  if ((char)param_4 == '\0') {
    *(undefined4 * PTR32 *)((int)this + 0x128) = param_1;
  }
  else {
    *(undefined4 * PTR32 *)((int)this + 0x128) = (undefined4 *)((int)this + 0x180);
    puVar3 = param_1;
    puVar4 = (undefined4 *)((int)this + 0x180);
    for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x128);
  F_00d1e8c0(this);
  F_00d20fe0(this,(uint)(~(*((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 4))) >> 5) & 1));
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  uVar1 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar1 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x90);
  }
  F_00d20360(this,0x401);
  F_00c47745((*(uint *)(gen_frame + 0x9c)) ^ (uint)(uint)(gen_frame + 0xa0));
  return (uint)this;
}

/* ref: FUN_00d20560 */
uint F_00d20560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd20560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  F_00d22720(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1133acc));
  F_00cccb10((int)this + 0x14c,(float)(float10)1);
  *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) | 0x10;
  *(undefined * PTR32 *)((int)this + 0x128) = (undefined *)((int)this + 0x180);
  F_00d20c50((undefined *)((int)this + 0x180));
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x128);
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  uVar1 = ((code *)*(gen_code32 *)(*this_00 + 0xe4))(this_00);
  if ((char)uVar1 != '\0') {
    ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00,((undefined1 *)(gen_frame + 0x0)),0x90);
  }
  F_00d20360(this,0x401);
  F_00c47745((*(uint *)(gen_frame + 0x9c)) ^ (uint)(uint)(gen_frame + 0xa0));
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf23 */
uint F_00d20630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd20630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined * pBVar1;
  undefined * pBVar2;
  int iVar3;
  undefined4 uVar4;
  undefined * pBVar5;
  float * pfVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 * puVar10;
  float10 fVar11;
  float10 fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  (*(float * PTR32 *)(gen_frame + 0x2c)) = param_3;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  (*(undefined4 * PTR32 *)(gen_frame + 0x54)) = param_2;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = param_4;
  if (((*(int *)(this + 0x170) == 0) ||
      ((*(int *)(this + 0x174) == 0 && (*(int *)(this + 0x170) == 0)))) &&
     (*(int *)(this + 0x174) == 0)) {
    iVar3 = *(int *)(this + 0x128);
    (*(byte *)(gen_frame + 0x5b)) = *(byte *)(iVar3 + 0x70);
    if ((*(byte *)(iVar3 + 0x70) & 0xf) != 0xf) {
      pBVar5 = (undefined *)(uint)(byte)this[0x178];
      (*(undefined4 *)(gen_frame + 0x64)) = 0x3020100;
      (*(undefined1 *)(gen_frame + 0x68)) = 0;
      (*(undefined * PTR32 *)(gen_frame + 0x1c)) = pBVar5;
      (*(undefined * PTR32 *)(gen_frame + 0x60)) = pBVar5;
      pfVar6 = (float *)F_00d03460(param_4,&(*(float *)(gen_frame + 0x0)),
                                     ((byte)pBVar5[(int)&(*(undefined4 *)(gen_frame + 0x64)) + 1] + 2) * 0x10 + iVar3);
      (*(uint *)(gen_frame + 0x20)) = 0xffffffff;
      fVar13 = pfVar6[1] * pfVar6[1];
      fVar14 = pfVar6[2] * pfVar6[2];
      fVar15 = SQRT((fVar14 + *pfVar6 * *pfVar6) + fVar13);
      (*(float *)(gen_frame + 0x30)) = fVar15;
      (*(float *)(gen_frame + 0x34)) = (fVar14 + fVar13) + fVar13;
      (*(float *)(gen_frame + 0x38)) = (fVar14 + fVar14) + fVar13;
      (*(float *)(gen_frame + 0x3c)) = (fVar14 + pfVar6[3] * pfVar6[3]) + fVar13;
      (*(float *)(gen_frame + 0x5c)) = 0.0;
      (*(float *)(gen_frame + 0x50)) = fVar15;
      (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)((*(byte *)(gen_frame + 0x5b)) & 0xf);
      puVar10 = param_2;
      do {
        pBVar5 = (*(undefined * PTR32 *)(gen_frame + 0x60)) + 1;
        (*(undefined * PTR32 *)(gen_frame + 0x60)) = pBVar5;
        if (3 < (int)pBVar5) {
          (*(undefined * PTR32 *)(gen_frame + 0x60)) = (undefined *)0x0;
        }
        if (((uint)(*(undefined * PTR32 *)(gen_frame + 0x18)) & 1 << ((byte)(*(undefined * PTR32 *)(gen_frame + 0x60)) & 0x1f)) != 0) break;
        iVar9 = ((byte)*(undefined *)((int)&(*(undefined4 *)(gen_frame + 0x64)) + (int)(*(undefined * PTR32 *)(gen_frame + 0x60))) + 2) * 0x10 + iVar3;
        uVar7 = F_00d1ecf0((*(undefined * PTR32 *)(gen_frame + 0x14)),iVar9,(*(float * PTR32 *)(gen_frame + 0x2c)));
        if ((char)uVar7 == '\0') {
          pfVar6 = (float *)F_00d03460((*(float * PTR32 *)(gen_frame + 0x2c)),&(*(float *)(gen_frame + 0x0)),iVar9);
          fVar13 = pfVar6[1] * pfVar6[1];
          fVar14 = pfVar6[2] * pfVar6[2];
          fVar15 = SQRT((fVar14 + *pfVar6 * *pfVar6) + fVar13);
          (*(float *)(gen_frame + 0x30)) = fVar15;
          (*(float *)(gen_frame + 0x34)) = (fVar14 + fVar13) + fVar13;
          (*(float *)(gen_frame + 0x38)) = (fVar14 + fVar14) + fVar13;
          (*(float *)(gen_frame + 0x3c)) = (fVar14 + pfVar6[3] * pfVar6[3]) + fVar13;
          (*(uint *)(gen_frame + 0x20)) = (uint)(byte)(*(undefined * PTR32 *)(gen_frame + 0x1c))[(int)&(*(undefined4 *)(gen_frame + 0x64)) + 1];
          (*(float *)(gen_frame + 0x50)) = (float)((float10)fVar15 + (float10)(*(float *)(gen_frame + 0x50)));
          puVar10 = (*(undefined4 * PTR32 *)(gen_frame + 0x54));
          break;
        }
        pfVar6 = (float *)F_00d03460(((byte)(*(undefined * PTR32 *)(gen_frame + 0x60))[(int)&(*(undefined4 *)(gen_frame + 0x64)) + 1] + 2) * 0x10 + iVar3,
                                       &(*(float *)(gen_frame + 0x0)),iVar9);
        iVar9 = (int)gen_fl2bits((*(float *)(gen_frame + 0x5c))) + 1;
        (*(float *)(gen_frame + 0x5c)) = gen_bits2f(iVar9);
        fVar13 = pfVar6[1] * pfVar6[1];
        fVar14 = pfVar6[2] * pfVar6[2];
        fVar15 = SQRT((fVar14 + *pfVar6 * *pfVar6) + fVar13);
        (*(float *)(gen_frame + 0x30)) = fVar15;
        (*(float *)(gen_frame + 0x34)) = (fVar14 + fVar13) + fVar13;
        (*(float *)(gen_frame + 0x38)) = (fVar14 + fVar14) + fVar13;
        (*(float *)(gen_frame + 0x3c)) = (fVar14 + pfVar6[3] * pfVar6[3]) + fVar13;
        (*(float *)(gen_frame + 0x50)) = (float)((float10)fVar15 + (float10)(*(float *)(gen_frame + 0x50)));
        puVar10 = (*(undefined4 * PTR32 *)(gen_frame + 0x54));
      } while (iVar9 < 4);
      iVar9 = ((byte)*(undefined *)((int)&(*(undefined4 *)(gen_frame + 0x64)) + (int)(*(undefined * PTR32 *)(gen_frame + 0x1c))) + 2) * 0x10;
      pBVar5 = (*(undefined * PTR32 *)(gen_frame + 0x28)) + 0xc;
      (*(uint *)(gen_frame + 0x24)) = 0xffffffff;
      pBVar1 = (*(undefined * PTR32 *)(gen_frame + 0x28)) + 4;
      pBVar2 = (*(undefined * PTR32 *)(gen_frame + 0x28)) + 8;
      fVar13 = *(float *)(*(undefined * PTR32 *)(gen_frame + 0x28));
      (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x0;
      fVar13 = fVar13 - *(float *)(iVar9 + iVar3);
      fVar14 = *(float *)pBVar1 - *(float *)(iVar9 + 4 + iVar3);
      fVar15 = *(float *)pBVar2 - *(float *)(iVar9 + 8 + iVar3);
      fVar16 = *(float *)pBVar5 - *(float *)(iVar9 + 0xc + iVar3);
      (*(float *)(gen_frame + 0x30)) = fVar13;
      (*(float *)(gen_frame + 0x34)) = fVar14;
      (*(float *)(gen_frame + 0x38)) = fVar15;
      (*(float *)(gen_frame + 0x3c)) = fVar16;
      (*(float *)(gen_frame + 0x40)) = fVar13;
      (*(float *)(gen_frame + 0x44)) = fVar14;
      (*(float *)(gen_frame + 0x48)) = fVar15;
      (*(float *)(gen_frame + 0x4c)) = fVar16;
      fVar14 = fVar14 * fVar14;
      fVar15 = fVar15 * fVar15;
      fVar13 = SQRT((fVar15 + fVar13 * fVar13) + fVar14);
      (*(float *)(gen_frame + 0x30)) = fVar13;
      (*(float *)(gen_frame + 0x34)) = (fVar15 + fVar14) + fVar14;
      (*(float *)(gen_frame + 0x38)) = (fVar15 + fVar15) + fVar14;
      (*(float *)(gen_frame + 0x3c)) = (fVar15 + fVar16 * fVar16) + fVar14;
      (*(float *)(gen_frame + 0x5c)) = fVar13;
      pBVar5 = (*(undefined * PTR32 *)(gen_frame + 0x1c));
      do {
        (*(undefined * PTR32 *)(gen_frame + 0x60)) = pBVar5 + -1;
        if ((int)(pBVar5 + -1) < 0) {
          (*(undefined * PTR32 *)(gen_frame + 0x60)) = (undefined *)0x3;
        }
        this = (*(undefined * PTR32 *)(gen_frame + 0x18));
        if (((uint)(*(undefined * PTR32 *)(gen_frame + 0x18)) & 1 << ((byte)(*(undefined * PTR32 *)(gen_frame + 0x60)) & 0x1f)) != 0) break;
        pfVar6 = ((float *)GEN_TOP((((byte)(*(undefined * PTR32 *)(gen_frame + 0x60))[(int)&(*(undefined4 *)(gen_frame + 0x64)) + 1] + 2) * 0x10 + iVar3)));
        uVar7 = F_00d1ecf0((*(undefined * PTR32 *)(gen_frame + 0x14)),pfVar6,(*(float * PTR32 *)(gen_frame + 0x2c)));
        puVar10 = (*(undefined4 * PTR32 *)(gen_frame + 0x54));
        if ((char)uVar7 == '\0') {
          fVar15 = *(*(float * PTR32 *)(gen_frame + 0x2c)) - *pfVar6;
          fVar13 = (*(float * PTR32 *)(gen_frame + 0x2c))[1] - pfVar6[1];
          fVar14 = (*(float * PTR32 *)(gen_frame + 0x2c))[2] - pfVar6[2];
          fVar16 = (*(float * PTR32 *)(gen_frame + 0x2c))[3] - pfVar6[3];
          (*(float *)(gen_frame + 0x30)) = fVar15;
          (*(float *)(gen_frame + 0x34)) = fVar13;
          (*(float *)(gen_frame + 0x38)) = fVar14;
          (*(float *)(gen_frame + 0x3c)) = fVar16;
          (*(uint *)(gen_frame + 0x24)) = (uint)(byte)*(undefined *)((int)&(*(undefined4 *)(gen_frame + 0x64)) + (int)(*(undefined * PTR32 *)(gen_frame + 0x1c)));
          (*(float *)(gen_frame + 0x40)) = fVar15;
          (*(float *)(gen_frame + 0x44)) = fVar13;
          (*(float *)(gen_frame + 0x48)) = fVar14;
          (*(float *)(gen_frame + 0x4c)) = fVar16;
          fVar13 = fVar13 * fVar13;
          fVar14 = fVar14 * fVar14;
          fVar15 = SQRT((fVar14 + fVar15 * fVar15) + fVar13);
          (*(float *)(gen_frame + 0x0)) = fVar15;
          (*(float *)(gen_frame + 0x4)) = (fVar14 + fVar13) + fVar13;
          (*(float *)(gen_frame + 0x8)) = (fVar14 + fVar14) + fVar13;
          (*(float *)(gen_frame + 0xc)) = (fVar14 + fVar16 * fVar16) + fVar13;
          (*(float *)(gen_frame + 0x5c)) = (float)((float10)fVar15 + (float10)(*(float *)(gen_frame + 0x5c)));
          this = (*(undefined * PTR32 *)(gen_frame + 0x1c));
          break;
        }
        iVar9 = ((byte)*(undefined *)((int)&(*(undefined4 *)(gen_frame + 0x64)) + (int)(*(undefined * PTR32 *)(gen_frame + 0x60))) + 2) * 0x10;
        this = (*(undefined * PTR32 *)(gen_frame + 0x28)) + 1;
        (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
        fVar13 = *(float *)(iVar9 + iVar3) - *pfVar6;
        fVar14 = *(float *)(iVar9 + 4 + iVar3) - pfVar6[1];
        fVar15 = *(float *)(iVar9 + 8 + iVar3) - pfVar6[2];
        fVar16 = *(float *)(iVar9 + 0xc + iVar3) - pfVar6[3];
        (*(float *)(gen_frame + 0x30)) = fVar13;
        (*(float *)(gen_frame + 0x34)) = fVar14;
        (*(float *)(gen_frame + 0x38)) = fVar15;
        (*(float *)(gen_frame + 0x3c)) = fVar16;
        (*(float *)(gen_frame + 0x40)) = fVar13;
        (*(float *)(gen_frame + 0x44)) = fVar14;
        (*(float *)(gen_frame + 0x48)) = fVar15;
        (*(float *)(gen_frame + 0x4c)) = fVar16;
        fVar14 = fVar14 * fVar14;
        fVar15 = fVar15 * fVar15;
        fVar13 = SQRT((fVar15 + fVar13 * fVar13) + fVar14);
        (*(float *)(gen_frame + 0x0)) = fVar13;
        (*(float *)(gen_frame + 0x4)) = (fVar15 + fVar14) + fVar14;
        (*(float *)(gen_frame + 0x8)) = (fVar15 + fVar15) + fVar14;
        (*(float *)(gen_frame + 0xc)) = (fVar15 + fVar16 * fVar16) + fVar14;
        (*(float *)(gen_frame + 0x5c)) = (float)((float10)fVar13 + (float10)(*(float *)(gen_frame + 0x5c)));
        pBVar5 = (*(undefined * PTR32 *)(gen_frame + 0x60));
      } while ((int)this < 4);
      if ((*(uint *)(gen_frame + 0x20)) != 0xffffffff) {
        if ((*(uint *)(gen_frame + 0x24)) == 0xffffffff) {
LAB_00d20af4: ;
          uVar7 = (*(uint *)(gen_frame + 0x20));
        }
        else {
          fVar11 = (float10)(*(float *)(gen_frame + 0x50));
          fVar12 = (float10)(*(float *)(gen_frame + 0x5c));
          uVar7 = (*(uint *)(gen_frame + 0x24));
          if (fVar11 <= fVar12 && ((!GEN_ISNAN(fVar12) && !GEN_ISNAN(fVar11)) && fVar12 != fVar11))
          goto LAB_00d20af4;
        }
        iVar9 = (uVar7 + 2) * 0x10;
        iVar8 = iVar9 + iVar3;
        *puVar10 = *(undefined4 *)(iVar9 + iVar3);
        puVar10[1] = *(undefined4 *)(iVar8 + 4);
        puVar10[2] = *(undefined4 *)(iVar8 + 8);
        puVar10[3] = *(undefined4 *)(iVar8 + 0xc);
        uVar7 = CONCAT31((int3)((uint)iVar8 >> 8),1);
        goto LAB_00d20b2d;
      }
      if ((*(uint *)(gen_frame + 0x24)) != 0xffffffff) {
        iVar9 = ((*(uint *)(gen_frame + 0x24)) + 2) * 0x10;
        iVar8 = iVar9 + iVar3;
        *puVar10 = *(undefined4 *)(iVar9 + iVar3);
        puVar10[1] = *(undefined4 *)(iVar8 + 4);
        puVar10[2] = *(undefined4 *)(iVar8 + 8);
        uVar4 = *(undefined4 *)(iVar8 + 0xc);
        puVar10[3] = uVar4;
        uVar7 = CONCAT31((int3)((uint)uVar4 >> 8),1);
        goto LAB_00d20b2d;
      }
    }
  }
  uVar7 = (uint)this & 0xffffff00;
LAB_00d20b2d: ;
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70));
  return uVar7;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf3 */
uint F_00d20b50(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd20b50u, gen_a0, 0u, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_3 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))((undefined4)gen_fl2bits(param_2),local_c);
  return uVar1;
}

/* ref: FUN_00d20ba0 */
unsigned int F_00d20ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd20ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined2 *)this;
  param_1[1] = *(undefined2 *)((int)this + 2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((int)this + 0x18);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)((int)this + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((int)this + 0x20);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)((int)this + 0x2c);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((int)this + 0x28);
  param_1[0x18] = *(undefined2 *)((int)this + 0x30);
  param_1[0x19] = *(undefined2 *)((int)this + 0x32);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)((int)this + 0x34);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((int)this + 0x38);
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)((int)this + 0x3c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)((int)this + 0x40);
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)((int)this + 0x44);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((int)this + 0x48);
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)((int)this + 0x4c);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)((int)this + 0x50);
  *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)((int)this + 0x54);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)((int)this + 0x58);
  *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)((int)this + 0x5c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)((int)this + 0x60);
  *(undefined4 *)(param_1 + 0x32) = *(undefined4 *)((int)this + 100);
  return 0;
}

/* ref: FUN_00d20c50 */
unsigned int F_00d20c50(unsigned int gen_a0)
{
  GEN_ENTER(0xd20c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  float10 fVar2;
  undefined4 uVar3;
  
  fVar1 = (float10)1;
  *(undefined2 *)((int)this + 3) = 0x400;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined1 *)((int)this + 5) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 6) = 0;
  *(float *)((int)this + 0x10) = (float)fVar1;
  *(float *)((int)this + 0x14) = (float)fVar1;
  *(float *)((int)this + 0x18) = (float)fVar1;
  *(float *)((int)this + 0x1c) = (float)fVar1;
  *(undefined2 *)((int)this + 0xe) = 0;
  fVar2 = (float10)0;
  *(undefined1 *)((int)this + 0xd) = 0;
  *(undefined1 *)((int)this + 2) = 9;
  *(undefined2 *)this = 0x80;
  *(float *)((int)this + 0x20) = (float)fVar2;
  *(float *)((int)this + 0x24) = (float)fVar2;
  *(float *)((int)this + 0x28) = (float)fVar2;
  *(float *)((int)this + 0x2c) = (float)fVar2;
  *(float *)((int)this + 0x2c) = (float)fVar1;
  *(float *)((int)this + 0x30) = (float)fVar2;
  *(float *)((int)this + 0x34) = (float)fVar2;
  *(float *)((int)this + 0x38) = (float)fVar2;
  *(float *)((int)this + 0x3c) = (float)fVar2;
  *(float *)((int)this + 0x3c) = (float)fVar1;
  *(float *)((int)this + 0x40) = (float)fVar2;
  *(float *)((int)this + 0x44) = (float)fVar2;
  *(float *)((int)this + 0x48) = (float)fVar2;
  *(float *)((int)this + 0x4c) = (float)fVar2;
  *(float *)((int)this + 0x4c) = (float)fVar1;
  *(float *)((int)this + 0x50) = (float)fVar2;
  *(float *)((int)this + 0x54) = (float)fVar2;
  *(float *)((int)this + 0x58) = (float)fVar2;
  *(float *)((int)this + 0x5c) = (float)fVar2;
  *(float *)((int)this + 0x5c) = (float)fVar1;
  *(undefined4 *)((int)this + 0x70) = 0;
  uVar3 = REFG(float, 0x1094880);
  *(undefined2 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x60) = uVar3;
  *(undefined2 *)((int)this + 0x7a) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(float *)((int)this + 100) = (float)fVar2;
  *(float *)((int)this + 0x74) = (float)fVar2;
  *(float *)((int)this + 0x68) = (float)fVar1;
  *(float *)((int)this + 0x6c) = (float)fVar1;
  return 0;
}

/* ref: FUN_00d20d00 */
uint F_00d20d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd20d00u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  uint * puVar4;
  uint * puVar5;
  int local_8;
  
  uVar2 = param_2;
  F_00d0c080(param_1,param_2);
  puVar5 = (uint *)(param_1 + 0x28);
  local_8 = 4;
  puVar4 = (uint *)(param_2 + 0x20);
  do {
    uVar1 = *((uint *)GEN_TOP(((param_1 - param_2) + (int)puVar4)));
    *puVar4 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = puVar5[-1];
    puVar4[1] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = *puVar5;
    puVar4[2] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = puVar5[1];
    puVar4[3] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    puVar5 = puVar5 + 4;
    local_8 = local_8 + -1;
    puVar4 = puVar4 + 4;
  } while (local_8 != 0);
  uVar1 = *(uint *)(param_1 + 0x60);
  *(uint *)(param_2 + 0x60) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 100);
  *(uint *)(param_2 + 100) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x68);
  *(uint *)(param_2 + 0x68) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x6c);
  *(uint *)(param_2 + 0x6c) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *(byte *)(param_2 + 0x70) =
       *(byte *)(param_2 + 0x70) ^ (*(byte *)(param_2 + 0x70) ^ *(byte *)(param_1 + 0x70)) & 0xf;
  *(byte *)(param_2 + 0x70) =
       (*(byte *)(param_1 + 0x70) ^ *(byte *)(param_2 + 0x70)) & 0x10 ^ *(byte *)(param_2 + 0x70);
  uVar1 = *(uint *)(param_1 + 0x74);
  *(byte *)(param_2 + 0x70) = *(byte *)(param_2 + 0x70) & 0x1f;
  *(uint *)(param_2 + 0x74) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *(undefined2 *)(param_2 + 0x71) = 0;
  *(undefined1 *)(param_2 + 0x73) = 0;
  *(ushort *)(param_2 + 0x78) = *(ushort *)(param_1 + 0x78) << 8 | *(ushort *)(param_1 + 0x78) >> 8;
  uVar3 = *(ushort *)(param_1 + 0x7a) << 8 | *(ushort *)(param_1 + 0x7a) >> 8;
  param_2 = (uint)uVar3;
  *(ushort *)(uVar2 + 0x7a) = uVar3;
  *(undefined4 *)(uVar2 + 0x7c) = 0;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::BoxObstruction::vf0 */
uint F_00d20e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd20e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1133acc));
  F_00cccb40(this + 0x14c);
  F_00d23680(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00d20e90 */
unsigned int F_00d20e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd20e90u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[3];
  fVar2 = param_2[1] * param_2[1];
  fVar3 = param_2[2] * param_2[2];
  *param_1 = SQRT((fVar3 + *param_2 * *param_2) + fVar2);
  param_1[1] = (fVar3 + fVar2) + fVar2;
  param_1[2] = (fVar3 + fVar3) + fVar2;
  param_1[3] = (fVar3 + fVar1 * fVar1) + fVar2;
  return 0;
}

/* ref: FUN_00d20fd0 */
uint F_00d20fd0(unsigned int gen_a0)
{
  GEN_ENTER(0xd20fd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*((byte *)GEN_TOP((*(int *)(in_ecx + 0x18) + 2)));
}

/* ref: FUN_00d20fe0 */
uint F_00d20fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd20fe0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (param_2 & 0xff ^ *(uint *)(in_ecx + 0xe4)) & 1;
  *(uint *)(in_ecx + 0xe4) = *(uint *)(in_ecx + 0xe4) ^ uVar1;
  return uVar1;
}

/* ref: FUN_00d21000 */
byte F_00d21000(unsigned int gen_a0)
{
  GEN_ENTER(0xd21000u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0xe4) & 1;
}

/* ref: FUN_00d21010 */
uint F_00d21010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd21010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  *(uint *)((int)this + 0xe4) =
       *(uint *)((int)this + 0xe4) ^ ((param_1 & 0xff) * 2 ^ *(uint *)((int)this + 0xe4)) & 2;
  this_00 = (undefined *)((int)this + 8);
  bVar1 = F_00cbc040(this_00);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    if ((char)param_1 != '\0') {
      uVar2 = F_00cbc120(this_00,param_2);
      return uVar2;
    }
    uVar2 = F_00cbc1a0(this_00,param_2);
  }
  return uVar2;
}

/* ref: FUN_00d21060 */
uint F_00d21060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd21060u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined * this;
  int iVar1;
  float10 fVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  undefined4 local_c;
  
  iVar1 = *(int *)param_3;
  fVar2 = (float10)*(double *)&REFG(undefined, 0x1097260);
  *(uint *)(param_1 + 0xe4) =
       *(uint *)(param_1 + 0xe4) ^ ((param_2 & 0xff) * 2 ^ *(uint *)(param_1 + 0xe4)) & 2;
  this = (undefined *)(param_1 + 8);
  local_c = (undefined4)
            (longlong)TRUNC((double)(float)((float10)iVar1 / fVar2) * *(double *)&REFG(undefined, 0x10912a8));
  bVar3 = F_00cbc040(this);
  uVar4 = CONCAT31(extraout_var,bVar3);
  if (bVar3 != 0) {
    if ((char)param_2 != '\0') {
      uVar4 = F_00cbc120(this,local_c);
      return uVar4;
    }
    uVar4 = F_00cbc1a0(this,local_c);
  }
  return uVar4;
}

/* ref: FUN_00d210f0 */
byte F_00d210f0(unsigned int gen_a0)
{
  GEN_ENTER(0xd210f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0xe4) >> 1 & 1;
}

/* ref: FUN_00d21100 */
byte F_00d21100(unsigned int gen_a0)
{
  GEN_ENTER(0xd21100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00cbbff0((undefined *)((int)this + 8));
  if (uVar2 == 0) {
    return ~(*(byte *)((int)this + 0xb0) >> 2) & 1;
  }
  bVar1 = F_00cbc290((undefined *)((int)this + 8));
  return bVar1 != 0;
}

/* ref: FUN_00d21130 */
byte F_00d21130(unsigned int gen_a0)
{
  GEN_ENTER(0xd21130u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0xb0) & 1;
}

/* ref: FUN_00d21150 */
uint F_00d21150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd21150u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x30) = param_2;
  return param_2;
}

/* ref: FUN_00d21160 */
uint F_00d21160(unsigned int gen_a0)
{
  GEN_ENTER(0xd21160u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x30);
}

/* ref: FUN_00d21170 */
unsigned int F_00d21170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd21170u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(int *)(in_ecx + 0x18) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)(in_ecx + 0x18) + 5))) = (undefined1)param_2;
  }
  return 0;
}

/* ref: FUN_00d21190 */
byte F_00d21190(unsigned int gen_a0)
{
  GEN_ENTER(0xd21190u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x18) == 0) {
    return 0;
  }
  return *((byte *)GEN_TOP((*(int *)(in_ecx + 0x18) + 5)));
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf2 */
uint F_00d211a0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xd211a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  byte bVar1;
  
  bVar1 = F_00cbc040((undefined *)(param_1 + 8));
  if (bVar1 != 0) {
    return REFG(undefined4, 0x1129a00);
  }
  *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) | 0x100;
  *(float *)(param_1 + 0xbc) = param_3;
  *(uint *)(param_1 + 0xe4) = *(uint *)(param_1 + 0xe4) | 1;
  *(float *)(param_1 + 0xd0) = param_4;
  *(undefined4 *)(param_1 + 0xd4) = param_2;
  return REFG(undefined4, 0x11299e4);
}

/* ref: FUN_00d21200 */
uint F_00d21200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd21200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00cbc040((undefined *)((int)this + 8));
  if (bVar1 != 0) {
    return REFG(undefined4, 0x1129a00);
  }
  *(uint *)((int)this + 0xe4) = *(uint *)((int)this + 0xe4) | 1;
  *(undefined4 *)((int)this + 0xd8) = param_1;
  return REFG(undefined4, 0x11299e4);
}

/* ref: FUN_00d21240 */
uint F_00d21240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd21240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00cbc040((undefined *)((int)this + 8));
  if (bVar1 != 0) {
    return REFG(undefined4, 0x1129a00);
  }
  *(undefined4 *)((int)this + 0xdc) = param_1;
  return REFG(undefined4, 0x11299e4);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf4 */
uint F_00d21270(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd21270u, gen_a0, 0u, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  *(float *)(param_1 + 0xbc) = param_2;
  bVar1 = F_00cbc040((undefined *)(param_1 + 8));
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    uVar2 = F_00cbc390(param_1 + 8,*(float *)(param_1 + 0xbc),param_3);
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf3 */
uint F_00d212b0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd212b0u, gen_a0, 0u, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_3 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))((undefined4)gen_fl2bits(param_2),local_c);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf6 */
uint F_00d21300(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd21300u, gen_a0, 0u, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  *(float *)(param_1 + 0xc0) = param_2;
  bVar1 = F_00cbc040((undefined *)(param_1 + 8));
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    uVar2 = F_00cbc680(param_1 + 8,*(float *)(param_1 + 0xc0),param_3);
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf5 */
uint F_00d21340(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd21340u, gen_a0, 0u, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_3 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x18))((undefined4)gen_fl2bits(param_2),local_c);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf7 */
unsigned int F_00d21390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd21390u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(uint *)(in_ecx + 0xe4) = *(uint *)(in_ecx + 0xe4) | 8;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf8 */
unsigned int F_00d213a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd213a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf9 */
uint F_00d213b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd213b0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  
  uVar1 = ((param_3 & 0xff) * 8 ^ *(uint *)(in_ecx + 0xe4)) & 8;
  *(uint *)(in_ecx + 0xe4) = *(uint *)(in_ecx + 0xe4) ^ uVar1;
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf10 */
unsigned int F_00d213d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd213d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf12 */
unsigned int F_00d213e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd213e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf13 */
unsigned int F_00d213f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd213f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00d21400 */
uint F_00d21400(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xd21400u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  *(float *)(param_1 + 0xc4) = param_2;
  bVar1 = F_00cbc040((undefined *)(param_1 + 8));
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    uVar2 = F_00cbc710(param_1 + 8,
                         ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x8c) *
                                (float10)*(float *)(param_1 + 0xc4)))));
  }
  return uVar2;
}

/* ref: FUN_00d21440 */
uint F_00d21440(unsigned int gen_a0)
{
  GEN_ENTER(0xd21440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cbc7e0((undefined *)((int)this + 8));
  return uVar1;
}

/* ref: FUN_00d21450 */
uint F_00d21450(unsigned int gen_a0)
{
  GEN_ENTER(0xd21450u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cbc850((undefined *)((int)this + 8));
  return uVar1;
}

/* ref: FUN_00d21460 */
uint F_00d21460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd21460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  
  bVar1 = F_00cbc040((undefined *)((int)this + 8));
  if (bVar1 == 0) {
    *param_1 = 0;
    return (uint)param_1;
  }
  F_00cbcab0((undefined *)((int)this + 8),param_1);
  return (uint)param_1;
}

/* ref: FUN_00d214a0 */
uint F_00d214a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd214a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) | 0x400;
  bVar1 = F_00cbc040((undefined *)((int)this + 8));
  if (bVar1 != 0) {
    uVar2 = F_00cbcbc0((undefined *)((int)this + 8));
    return uVar2;
  }
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00d214d0 */
ushort F_00d214d0(unsigned int gen_a0)
{
  GEN_ENTER(0xd214d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x18) != 0) {
    return *((ushort *)GEN_TOP((*(int *)(in_ecx + 0x18) + 0xe)));
  }
  return 0;
}

/* ref: FUN_00d214e0 */
uint F_00d214e0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd214e0u, gen_a0, 0u, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  *(float *)(param_1 + 200) = param_2;
  *(undefined4 *)(param_1 + 0xcc) = param_3;
  bVar1 = F_00cbc040((undefined *)(param_1 + 8));
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    uVar2 = F_00cbcd10(param_1 + 8,*(float *)(param_1 + 200),param_3);
  }
  return uVar2;
}

/* ref: FUN_00d21520 */
float F_00d21520(unsigned int gen_a0)
{
  GEN_ENTER(0xd21520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  float fVar2;
  
  bVar1 = F_00cbc040((undefined *)((int)this + 8));
  if (bVar1 == 0) {
    return *(float *)&REFG(undefined, 0x1097254);
  }
  fVar2 = F_00cbcd90((undefined *)((int)this + 8));
  return fVar2;
}

/* ref: FUN_00d21540 */
uint F_00d21540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd21540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  *(undefined1 *)((int)this + 0xe0) = (undefined1)param_1;
  bVar1 = F_00cbc040((undefined *)((int)this + 8));
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    uVar2 = F_00cbce00((undefined *)((int)this + 8),(uint)*(byte *)((int)this + 0xe0));
  }
  return uVar2;
}

/* ref: FUN_00d21580 */
float F_00d21580(unsigned int gen_a0)
{
  GEN_ENTER(0xd21580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  int * piVar2;
  uint uVar3;
  float10 fVar4;
  float fVar5;
  
  bVar1 = F_00cbc040((undefined *)((int)this + 8));
  if (bVar1 != 0) {
    fVar5 = F_00cbd050((undefined *)((int)this + 8));
    return fVar5;
  }
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x90))(piVar2)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xfc))(piVar2,*(undefined4 *)((int)this + 0x24));
  if ((char)uVar3 != '\0') {
    ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2,((undefined1 *)(gen_frame + 0xc)),*(undefined4 *)((int)this + 0x24));
    fVar4 = F_00cbec50(((undefined1 *)(gen_frame + 0xc)),*(uint *)((int)this + 0x28));
    (*(float *)(gen_frame + 0x18)) = (float)fVar4;
    F_00cbe3b0(((undefined1 *)(gen_frame + 0xc)));
    return (*(float *)(gen_frame + 0x18));
  }
  return *(float *)&REFG(undefined, 0x1097254);
}

/* ref: FUN_00d21610 */
float F_00d21610(unsigned int gen_a0)
{
  GEN_ENTER(0xd21610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  float fVar2;
  
  bVar1 = F_00cbc040((undefined *)((int)this + 8));
  if (bVar1 == 0) {
    return *(float *)&REFG(undefined, 0x1097254);
  }
  fVar2 = F_00cbd0c0((undefined *)((int)this + 8));
  return fVar2;
}

/* ref: FUN_00d21630 */
float F_00d21630(unsigned int gen_a0)
{
  GEN_ENTER(0xd21630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  float fVar2;
  
  bVar1 = F_00cbc040((undefined *)((int)this + 8));
  if (bVar1 == 0) {
    return *(float *)&REFG(undefined, 0x1097254);
  }
  fVar2 = F_00cbd130((undefined *)((int)this + 8));
  return fVar2;
}

/* ref: FUN_00d21650 */
double F_00d21650(unsigned int gen_a0)
{
  GEN_ENTER(0xd21650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00cbc040((undefined *)((int)this + 8));
  if (bVar1 == 0) {
    return (double)*(float *)&REFG(undefined, 0x1097254);
  }
  return (double)*(float *)((int)this + 0x8c);
}

/* ref: FUN_00d21680 */
uint F_00d21680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd21680u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xf8) = param_2;
  return param_2;
}

/* ref: FUN_00d21690 */
uint F_00d21690(unsigned int gen_a0)
{
  GEN_ENTER(0xd21690u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xf8);
}

/* ref: FUN_00d216a0 */
uint F_00d216a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd216a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cbd1a0((undefined *)((int)this + 8),param_1);
  return uVar1;
}

/* ref: FUN_00d216b0 */
uint F_00d216b0(unsigned int gen_a0)
{
  GEN_ENTER(0xd216b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cbd210((undefined *)((int)this + 8));
  return uVar1;
}

/* ref: FUN_00d216c0 */
uint F_00d216c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd216c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  
  F_00cbe360(((undefined1 *)(gen_frame + 0x0)),*(undefined4 *)((int)this + 0x24));
  uVar2 = F_00cbe810(((undefined1 *)(gen_frame + 0x0)),*(undefined4 *)((int)this + 0x28));
  if (uVar2 != 0) {
    bVar1 = *(byte *)(uVar2 + 0xe);
    F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)));
    return (uint)bVar1;
  }
  F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)));
  return 0;
}

/* ref: FUN_00d21710 */
byte F_00d21710(unsigned int gen_a0)
{
  GEN_ENTER(0xd21710u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0xb0) >> 5 & 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf21 */
byte F_00d21720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd21720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf22 */
unsigned int F_00d21730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd21730u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf23 */
byte F_00d21740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd21740u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: FUN_00d21750 */
uint F_00d21750(unsigned int gen_a0)
{
  GEN_ENTER(0xd21750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  iVar1 = *(int *)((int)this + 0x18);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x90))(piVar2)));
  ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2,((undefined1 *)(gen_frame + 0x0)),*(undefined4 *)(iVar1 + 8));
  uVar3 = F_00cbe720(((undefined1 *)(gen_frame + 0x0)),(uint)*(ushort *)(iVar1 + 6));
  F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)));
  return uVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf14 */
byte F_00d217a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd217a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  int iVar2;
  
  *(uint *)(this + 0xb0) = *(uint *)(this + 0xb0) & 0xfffffffe;
  if (((*(uint *)(this + 0xe4) & 1) != 0) && ((*(uint *)(this + 0xe4) & 2) == 0)) {
    if (this[0x2d] != (undefined1)0x0) {
      F_00d2ddd0(((undefined1 *)(gen_frame + 0xc)),(uint)(byte)this[0x2d]);
      bVar1 = F_00cbb1b0(((undefined1 *)(gen_frame + 0xc)));
      if (bVar1 != 0) {
        *(uint *)(this + 0xe4) = *(uint *)(this + 0xe4) | 2;
        F_00cbaf10(((undefined1 *)(gen_frame + 0xc)));
        return 0;
      }
      F_00cbaf10(((undefined1 *)(gen_frame + 0xc)));
    }
    if (*(int *)(this + 0xd8) != 0) {
      iVar2 = *(int *)(this + 0xd8) - param_1;
      *(int *)(this + 0xd8) = iVar2;
      if (-1 < iVar2) {
        return 0;
      }
      *(undefined4 *)(this + 0xd8) = 0;
    }
    return 1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf15 */
byte F_00d21830(unsigned int gen_a0)
{
  GEN_ENTER(0xd21830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  *(uint *)(this + 0xb0) = *(uint *)(this + 0xb0) | 1;
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0x98))))
                            (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1);
  uVar3 = *(uint *)(this + 0xe4);
  *(uint *)(this + 0xb0) =
       *(uint *)(this + 0xb0) ^
       (((uVar3 >> 1 | uVar3) >> 1 | (uVar2 & 0xff) * 2) ^ *(uint *)(this + 0xb0)) & 2;
  *(uint *)(this + 0xe4) = uVar3 & 0xfffffff3;
  if ((*(uint *)(this + 0xb0) & 4) != 0) {
    return 0;
  }
  if ((*(uint *)(this + 0xb0) & 0x200) == 0) {
    F_00d2dd80(((undefined1 *)(gen_frame + 0x0)),*(undefined4 *)(this + 0x24));
    F_00cbe8e0(((undefined1 *)(gen_frame + 0x0)));
    *(uint *)(this + 0xb0) = *(uint *)(this + 0xb0) | 0x200;
    F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)));
  }
  uVar3 = F_00cbbff0(this + 8);
  return uVar3 != 0;
}

/* ref: FUN_00d218e0 */
uint F_00d218e0(unsigned int gen_a0)
{
  GEN_ENTER(0xd218e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x1c) + 0x10)));
}

/* ref: FUN_00d218f0 */
byte F_00d218f0(float gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd218f0u, 0u, gen_a1, gen_a2, gen_a3);
  float param_1 = (float)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)*(float *)&REFG(undefined, 0x1097254);
  fVar2 = (float10)(float)((float10)param_1 - (float10)*param_2);
  if (!(fVar1 <= fVar2) || ((GEN_ISNAN(fVar2) || GEN_ISNAN(fVar1)) || fVar2 == fVar1)) {
    if (((*(byte *)(param_3 + 4) & 0x10) == 0) &&
       (fVar1 = (float10)param_4[1],
       fVar2 <= fVar1 && ((!GEN_ISNAN(fVar1) && !GEN_ISNAN(fVar2)) && fVar1 != fVar2))) {
      *param_2 = (float)((float10)*param_2 - (float10)param_4[1]);
      return 0;
    }
  }
  else if (((*(byte *)(param_3 + 4) & 8) == 0) &&
          (!(fVar2 <= (float10)*param_4) != (GEN_ISNAN((float10)*param_4) || GEN_ISNAN(fVar2)))) {
    *param_2 = (float)((float10)*param_2 + (float10)*param_4);
    return 0;
  }
  *param_2 = param_1;
  return 1;
}

/* ref: FUN_00d21970 */
unsigned int F_00d21970(unsigned int gen_a0)
{
  GEN_ENTER(0xd21970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)((int)this + 0x50);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)((int)this + 0x54);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)((int)this + 0x58);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)((int)this + 0x5c);
  *(int *)((int)this + 0xac) = *(int *)((int)this + 0xac) + 1;
  if (0x10 < *(int *)((int)this + 0xac)) {
    *(undefined4 *)((int)this + 0xac) = 0x10;
  }
  return 0;
}

/* ref: FUN_00d219b0 */
unsigned int F_00d219b0(unsigned int gen_a0)
{
  GEN_ENTER(0xd219b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x1090708);
  *(undefined4 *)(in_ecx + 0xac) = 0;
  *(undefined4 *)(in_ecx + 0x84) = uVar1;
  *(undefined4 *)(in_ecx + 0x88) = uVar1;
  return 0;
}

/* ref: FUN_00d219d0 */
uint F_00d219d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd219d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  uint param_4 = (uint)gen_a3;
  float fVar1;
  ushort uVar2;
  undefined4 in_EAX = 0;
  undefined2 uVar4;
  uint uVar3;
  bool bVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  bVar5 = GEN_ISNAN((float10)REFG(float, 0x1090708)) || GEN_ISNAN((float10)*(float *)(param_1 + 0x84));
  uVar4 = (undefined2)((uint)in_EAX >> 0x10);
  if (bVar5 != (bVar5 || (float10)REFG(float, 0x1090708) == (float10)*(float *)(param_1 + 0x84))) {
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)param_2;
    *(float *)(param_1 + 0x88) = *param_3;
    return param_2;
  }
  fVar6 = (float10)*(float *)&REFG(undefined, 0x1097254);
  fVar7 = (float10)((float)GEN_TOF(((float10)*(float *)param_2 - (float10)*(float *)(param_1 + 0x84))));
  fVar8 = (float10)(float)((float10)(int)param_4 * (float10)REFG(double, 0x1091858));
  if (!(fVar6 <= fVar7) == (GEN_ISNAN(fVar7) || GEN_ISNAN(fVar6))) {
    if (!(fVar7 <= fVar8) != (GEN_ISNAN(fVar8) || GEN_ISNAN(fVar7))) {
      fVar1 = ((float)GEN_TOF((fVar8 + (float10)*(float *)(param_1 + 0x84))));
      *(float *)(param_1 + 0x84) = fVar1;
      *(float *)param_2 = fVar1;
      goto LAB_00d21a83;
    }
  }
  else {
    fVar9 = -fVar8;
    if (fVar7 <= fVar9 && ((!GEN_ISNAN(fVar9) && !GEN_ISNAN(fVar7)) && fVar9 != fVar7)) {
      fVar1 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x84) - fVar8)));
      *(float *)(param_1 + 0x84) = fVar1;
      *(float *)param_2 = fVar1;
      goto LAB_00d21a83;
    }
  }
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)param_2;
LAB_00d21a83: ;
  fVar7 = (float10)((float)GEN_TOF(((float10)*param_3 - (float10)*(float *)(param_1 + 0x88))));
  if (!(fVar6 <= fVar7) == (GEN_ISNAN(fVar7) || GEN_ISNAN(fVar6))) {
    bVar5 = GEN_ISNAN(fVar8) || GEN_ISNAN(fVar7);
    uVar3 = CONCAT22(uVar4,(ushort)!(fVar7 <= fVar8) << 8 | (ushort)bVar5 << 10 |
                           (ushort)(bVar5 || fVar8 == fVar7) << 0xe);
    if (!(fVar7 <= fVar8) != bVar5) {
      fVar1 = ((float)GEN_TOF((fVar8 + (float10)*(float *)(param_1 + 0x88))));
      *(float *)(param_1 + 0x88) = fVar1;
      *param_3 = fVar1;
      return uVar3;
    }
  }
  else {
    fVar6 = -fVar8;
    uVar2 = (ushort)((GEN_ISNAN(fVar6) || GEN_ISNAN(fVar7)) || fVar6 == fVar7);
    uVar3 = CONCAT22(uVar4,(ushort)!(fVar7 <= fVar6) << 8 | (ushort)(GEN_ISNAN(fVar6) || GEN_ISNAN(fVar7)) << 10
                           | uVar2 << 0xe);
    if (fVar7 <= fVar6 && uVar2 == 0) {
      fVar1 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x88) - fVar8)));
      *(float *)(param_1 + 0x88) = fVar1;
      *param_3 = fVar1;
      return uVar3;
    }
  }
  *(float *)(param_1 + 0x88) = *param_3;
  return uVar3;
}

/* ref: FUN_00d21b00 */
unsigned int F_00d21b00(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0xd21b00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)*(float *)&REFG(undefined, 0x1097254);
  if ((*((byte *)GEN_TOP((*(int *)(in_ecx + 0x18) + 0xc))) & 0x80) == 0) {
    fVar3 = (float10)param_3 * (float10)param_5;
    fVar2 = (float10)param_2;
  }
  else {
    fVar2 = (float10)(float)((float10)param_2 - (float10)param_4);
    if ((!GEN_ISNAN(fVar2) && !GEN_ISNAN(fVar1)) && fVar2 < fVar1 != (fVar2 == fVar1)) {
      *(float *)(in_ecx + 0x94) = (float)(float10)1;
      return 0;
    }
    fVar3 = (float10)param_5 * ((float10)param_3 - (float10)param_4);
  }
  param_3 = (float)fVar3;
  fVar3 = (float10)param_3;
  if (((GEN_ISNAN(fVar1) || GEN_ISNAN(fVar3)) == ((GEN_ISNAN(fVar1) || GEN_ISNAN(fVar3)) || fVar1 == fVar3)) &&
     (!(fVar2 <= fVar3) == (GEN_ISNAN(fVar3) || GEN_ISNAN(fVar2)))) {
    *(float *)(in_ecx + 0x94) = (float)((float10)1 - fVar2 / fVar3);
    return 0;
  }
  *(float *)(in_ecx + 0x94) = *(float *)&REFG(undefined, 0x1097254);
  return 0;
}

/* ref: FUN_00d21ba0 */
unsigned int F_00d21ba0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xd21ba0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  int * piVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar3 = (float10)param_2;
  fVar4 = (float10)param_4;
  if (!(fVar3 <= fVar4) == (GEN_ISNAN(fVar4) || GEN_ISNAN(fVar3))) {
    fVar5 = (float10)param_3;
    if (fVar3 <= fVar5) {
      fVar3 = (float10)*(float *)&REFG(undefined, 0x1097254);
    }
    else {
      fVar3 = (float10)(float)(fVar3 - fVar5) / (fVar4 - fVar5);
    }
  }
  else {
    fVar3 = (float10)1;
  }
  *(float *)(param_1 + 0x98) = (float)fVar3;
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x98))(piVar1);
  if (*(char *)(uVar2 + 0x39c) != '\0') {
    *(float *)(param_1 + 0x98) =
         ((float)GEN_TOF(((float10)*(float *)(uVar2 + 0x3a0) * (float10)*(float *)(param_1 + 0x98))));
    return 0;
  }
  *(float *)(param_1 + 0x98) =
       ((float)GEN_TOF(((float10)*(float *)(param_1 + 0xb4) * (float10)*(float *)(param_1 + 0x98))));
  return 0;
}

/* ref: FUN_00d21c40 */
unsigned int F_00d21c40(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xd21c40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  if ((*((byte *)GEN_TOP((*(int *)(param_1 + 0x18) + 0xc))) & 0x40) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0xc)));
    ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x14)));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,&(*(float *)(gen_frame + 0xc)),&(*(float *)(gen_frame + 0x18)));
    fVar2 = (float10)param_2;
    fVar3 = (float10)(*(float *)(gen_frame + 0x14));
    if (!(fVar2 <= fVar3) != (GEN_ISNAN(fVar3) || GEN_ISNAN(fVar2))) {
      *(float *)(param_1 + 0x9c) = (*(float *)(gen_frame + 0x18));
      return 0;
    }
    fVar4 = (float10)(*(float *)(gen_frame + 0x10));
    if (fVar2 <= fVar4 && ((!GEN_ISNAN(fVar4) && !GEN_ISNAN(fVar2)) && fVar4 != fVar2)) {
      *(float *)(param_1 + 0x9c) = (float)(float10)1;
      return 0;
    }
    *(float *)(param_1 + 0x9c) =
         ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)1 -
                                                  (float10)((float)GEN_TOF(((float10)(float)(fVar2 - fVar4) /
                                                                  (fVar3 - fVar4))))))) *
                                 (float10)(*(float *)(gen_frame + 0xc))))) + (float10)(*(float *)(gen_frame + 0x18)))));
  }
  return 0;
}

/* ref: FUN_00d21d00 */
uint F_00d21d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd21d00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x18);
  if ((*(byte *)(uVar1 + 0xc) & 4) != 0) {
    *param_2 = (float)(float10)1;
    return uVar1;
  }
  uVar1 = F_00d007c0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc))),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00d21d30 */
byte F_00d21d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd21d30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0x18);
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x90))(piVar2)));
  if (*(short *)(iVar1 + 6) == -1) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x6c))(piVar2,*(undefined4 *)(iVar1 + 8),param_1,param_2);
    if ((char)uVar3 == '\0') {
      return 0;
    }
  }
  else {
    *param_1 = *(undefined4 *)(iVar1 + 8);
    *param_2 = (uint)*(ushort *)(iVar1 + 6);
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf30 */
byte F_00d21f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd21f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x18);
  F_00c49386(param_1,";-------- SoundObject %d ---------\n",*(undefined4 *)(this + 0x20));
  F_00c49386(param_1,"ObjectID = %d\n",*(undefined4 *)(this + 0x20));
  F_00c49386(param_1,"Type = %d\n",(uint)*(byte *)(iVar1 + 2));
  F_00c49386(param_1,"Version = %d\n",(uint)*(byte *)(iVar1 + 3));
  F_00c49386(param_1,"PointExpansion = %d\n",*(byte *)(iVar1 + 4) >> 1 & 1);
  F_00c49386(param_1,"3DFlag = %d\n",*(byte *)(iVar1 + 4) >> 2 & 1);
  F_00c49386(param_1,"TopInfinity = %d\n",*(byte *)(iVar1 + 4) >> 3 & 1);
  F_00c49386(param_1,"BottomInfinity = %d\n",*(byte *)(iVar1 + 4) >> 4 & 1);
  F_00c49386(param_1,"UsefixedDirection = %d\n",(uint)(*(byte *)(iVar1 + 4) >> 7));
  F_00c49386(param_1,"IsFirstFixedDirection = %d\n",*(byte *)(iVar1 + 0xc) >> 1 & 1);
  F_00c49386(param_1,"UseDistanceFilters = %d\n",*(byte *)(iVar1 + 0xc) >> 6 & 1);
  F_00c49386(param_1,"GroupNo = %d\n",(uint)*(byte *)(iVar1 + 5));
  F_00c49386(param_1,"BankID = %d\n",*(undefined4 *)(iVar1 + 8));
  F_00c49386(param_1,"LocalID = %d\n",(uint)*(ushort *)(iVar1 + 6));
  F_00c49386(param_1,"ABGroupNo = %d\n",(uint)*(ushort *)(iVar1 + 0xe));
  F_00c49386(param_1,"\n");
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::SoundObject::vf31 */
byte F_00d22040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd22040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  int iVar2;
  byte * pbVar3;
  int iVar4;
  uint uVar5;
  char * pcVar6;
  byte * pbVar7;
  bool bVar8;
  
  iVar2 = *(int *)(this + 0x18);
  pbVar3 = &REFG(undefined1, 0x1133ca8);
  pbVar7 = param_1;
  do {
    bVar1 = *pbVar3;
    bVar8 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_00d22075: ;
      iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_00d2207a;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar8 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_00d22075;
    pbVar3 = pbVar3 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00d2207a: ;
  if (iVar4 == 0) {
    uVar5 = F_00d00d00(0,0);
    if (uVar5 != 0) {
      uVar5 = F_00c4c74c(uVar5);
      *(char *)(iVar2 + 2) = (char)uVar5;
      return 1;
    }
  }
  else {
    pcVar6 = "Version";
    pbVar7 = param_1;
    do {
      bVar1 = *pcVar6;
      bVar8 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_00d220d1: ;
        iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_00d220d6;
      }
      if (bVar1 == 0) break;
      bVar1 = pcVar6[1];
      bVar8 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_00d220d1;
      pcVar6 = pcVar6 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00d220d6: ;
    if (iVar4 == 0) {
      uVar5 = F_00d00d00(0,0);
      if (uVar5 != 0) {
        uVar5 = F_00c4c74c(uVar5);
        *(char *)(iVar2 + 3) = (char)uVar5;
        return 1;
      }
    }
    else {
      pcVar6 = "PointExpansion";
      pbVar7 = param_1;
      do {
        bVar1 = *pcVar6;
        bVar8 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_00d22124: ;
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00d22129;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar6[1];
        bVar8 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_00d22124;
        pcVar6 = pcVar6 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00d22129: ;
      if (iVar4 == 0) {
        uVar5 = F_00d00d00(0,0);
        if (uVar5 != 0) {
          uVar5 = F_00c4c74c(uVar5);
          *(byte *)(iVar2 + 4) =
               *(byte *)(iVar2 + 4) ^ ((char)uVar5 * '\x02' ^ *(byte *)(iVar2 + 4)) & 2;
          return 1;
        }
      }
      else {
        pbVar3 = &REFG(undefined1, 0x1133cc8);
        pbVar7 = param_1;
        do {
          bVar1 = *pbVar3;
          bVar8 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_00d22182: ;
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00d22187;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar8 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_00d22182;
          pbVar3 = pbVar3 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_00d22187: ;
        if (iVar4 == 0) {
          uVar5 = F_00d00d00(0,0);
          if (uVar5 != 0) {
            uVar5 = F_00c4c74c(uVar5);
            *(byte *)(iVar2 + 4) =
                 *(byte *)(iVar2 + 4) ^ ((char)uVar5 * '\x04' ^ *(byte *)(iVar2 + 4)) & 4;
            return 1;
          }
        }
        else {
          pcVar6 = "TopInfinity";
          pbVar7 = param_1;
          do {
            bVar1 = *pcVar6;
            bVar8 = bVar1 < *pbVar7;
            if (bVar1 != *pbVar7) {
LAB_00d221e2: ;
              iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
              goto LAB_00d221e7;
            }
            if (bVar1 == 0) break;
            bVar1 = pcVar6[1];
            bVar8 = bVar1 < pbVar7[1];
            if (bVar1 != pbVar7[1]) goto LAB_00d221e2;
            pcVar6 = pcVar6 + 2;
            pbVar7 = pbVar7 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_00d221e7: ;
          if (iVar4 == 0) {
            uVar5 = F_00d00d00(0,0);
            if (uVar5 != 0) {
              uVar5 = F_00c4c74c(uVar5);
              *(byte *)(iVar2 + 4) =
                   *(byte *)(iVar2 + 4) ^ ((char)uVar5 << 3 ^ *(byte *)(iVar2 + 4)) & 8;
              return 1;
            }
          }
          else {
            pcVar6 = "BottomInfinity";
            pbVar7 = param_1;
            do {
              bVar1 = *pcVar6;
              bVar8 = bVar1 < *pbVar7;
              if (bVar1 != *pbVar7) {
LAB_00d22244: ;
                iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                goto LAB_00d22249;
              }
              if (bVar1 == 0) break;
              bVar1 = pcVar6[1];
              bVar8 = bVar1 < pbVar7[1];
              if (bVar1 != pbVar7[1]) goto LAB_00d22244;
              pcVar6 = pcVar6 + 2;
              pbVar7 = pbVar7 + 2;
            } while (bVar1 != 0);
            iVar4 = 0;
LAB_00d22249: ;
            if (iVar4 == 0) {
              uVar5 = F_00d00d00(0,0);
              if (uVar5 != 0) {
                uVar5 = F_00c4c74c(uVar5);
                *(byte *)(iVar2 + 4) =
                     *(byte *)(iVar2 + 4) ^ ((char)uVar5 << 4 ^ *(byte *)(iVar2 + 4)) & 0x10;
                return 1;
              }
            }
            else {
              pcVar6 = "UsefixedDirection";
              pbVar7 = param_1;
              do {
                bVar1 = *pcVar6;
                bVar8 = bVar1 < *pbVar7;
                if (bVar1 != *pbVar7) {
LAB_00d222a3: ;
                  iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                  goto LAB_00d222a8;
                }
                if (bVar1 == 0) break;
                bVar1 = pcVar6[1];
                bVar8 = bVar1 < pbVar7[1];
                if (bVar1 != pbVar7[1]) goto LAB_00d222a3;
                pcVar6 = pcVar6 + 2;
                pbVar7 = pbVar7 + 2;
              } while (bVar1 != 0);
              iVar4 = 0;
LAB_00d222a8: ;
              if (iVar4 == 0) {
                uVar5 = F_00d00d00(0,0);
                if (uVar5 != 0) {
                  uVar5 = F_00c4c74c(uVar5);
                  *(byte *)(iVar2 + 4) = *(byte *)(iVar2 + 4) & 0x7f | (char)uVar5 << 7;
                  return 1;
                }
              }
              else {
                pcVar6 = "IsFirstFixedDirection";
                pbVar7 = param_1;
                do {
                  bVar1 = *pcVar6;
                  bVar8 = bVar1 < *pbVar7;
                  if (bVar1 != *pbVar7) {
LAB_00d22305: ;
                    iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                    goto LAB_00d2230a;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pcVar6[1];
                  bVar8 = bVar1 < pbVar7[1];
                  if (bVar1 != pbVar7[1]) goto LAB_00d22305;
                  pcVar6 = pcVar6 + 2;
                  pbVar7 = pbVar7 + 2;
                } while (bVar1 != 0);
                iVar4 = 0;
LAB_00d2230a: ;
                if (iVar4 == 0) {
                  uVar5 = F_00d00d00(0,0);
                  if (uVar5 != 0) {
                    uVar5 = F_00c4c74c(uVar5);
                    *(byte *)(iVar2 + 0xc) =
                         *(byte *)(iVar2 + 0xc) ^
                         ((char)uVar5 * '\x02' ^ *(byte *)(iVar2 + 0xc)) & 2;
                    return 1;
                  }
                }
                else {
                  pcVar6 = "UseDistanceFilters";
                  pbVar7 = param_1;
                  do {
                    bVar1 = *pcVar6;
                    bVar8 = bVar1 < *pbVar7;
                    if (bVar1 != *pbVar7) {
LAB_00d22363: ;
                      iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                      goto LAB_00d22368;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pcVar6[1];
                    bVar8 = bVar1 < pbVar7[1];
                    if (bVar1 != pbVar7[1]) goto LAB_00d22363;
                    pcVar6 = pcVar6 + 2;
                    pbVar7 = pbVar7 + 2;
                  } while (bVar1 != 0);
                  iVar4 = 0;
LAB_00d22368: ;
                  if (iVar4 == 0) {
                    uVar5 = F_00d00d00(0,0);
                    if (uVar5 != 0) {
                      uVar5 = F_00c4c74c(uVar5);
                      *(byte *)(iVar2 + 0xc) =
                           *(byte *)(iVar2 + 0xc) ^
                           ((char)uVar5 << 6 ^ *(byte *)(iVar2 + 0xc)) & 0x40;
                      return 1;
                    }
                  }
                  else {
                    pcVar6 = "GroupNo";
                    pbVar7 = param_1;
                    do {
                      bVar1 = *pcVar6;
                      bVar8 = bVar1 < *pbVar7;
                      if (bVar1 != *pbVar7) {
LAB_00d223c2: ;
                        iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                        goto LAB_00d223c7;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pcVar6[1];
                      bVar8 = bVar1 < pbVar7[1];
                      if (bVar1 != pbVar7[1]) goto LAB_00d223c2;
                      pcVar6 = pcVar6 + 2;
                      pbVar7 = pbVar7 + 2;
                    } while (bVar1 != 0);
                    iVar4 = 0;
LAB_00d223c7: ;
                    if (iVar4 == 0) {
                      uVar5 = F_00d00d00(0,0);
                      if (uVar5 != 0) {
                        uVar5 = F_00c4c74c(uVar5);
                        *(char *)(iVar2 + 5) = (char)uVar5;
                        return 1;
                      }
                    }
                    else {
                      pcVar6 = "BankID";
                      pbVar7 = param_1;
                      do {
                        bVar1 = *pcVar6;
                        bVar8 = bVar1 < *pbVar7;
                        if (bVar1 != *pbVar7) {
LAB_00d22420: ;
                          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                          goto LAB_00d22425;
                        }
                        if (bVar1 == 0) break;
                        bVar1 = pcVar6[1];
                        bVar8 = bVar1 < pbVar7[1];
                        if (bVar1 != pbVar7[1]) goto LAB_00d22420;
                        pcVar6 = pcVar6 + 2;
                        pbVar7 = pbVar7 + 2;
                      } while (bVar1 != 0);
                      iVar4 = 0;
LAB_00d22425: ;
                      if (iVar4 == 0) {
                        uVar5 = F_00d00d00(0,0);
                        if (uVar5 != 0) {
                          uVar5 = F_00c4c74c(uVar5);
                          *(uint *)(iVar2 + 8) = uVar5;
                          uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0x128))))
                                            (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))),uVar5);
                          *(uint *)(iVar2 + 8) = uVar5;
                          return 1;
                        }
                      }
                      else {
                        pcVar6 = "LocalID";
                        pbVar7 = param_1;
                        do {
                          bVar1 = *pcVar6;
                          bVar8 = bVar1 < *pbVar7;
                          if (bVar1 != *pbVar7) {
LAB_00d22490: ;
                            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                            goto LAB_00d22495;
                          }
                          if (bVar1 == 0) break;
                          bVar1 = pcVar6[1];
                          bVar8 = bVar1 < pbVar7[1];
                          if (bVar1 != pbVar7[1]) goto LAB_00d22490;
                          pcVar6 = pcVar6 + 2;
                          pbVar7 = pbVar7 + 2;
                        } while (bVar1 != 0);
                        iVar4 = 0;
LAB_00d22495: ;
                        if (iVar4 == 0) {
                          uVar5 = F_00d00d00(0,0);
                          if (uVar5 != 0) {
                            uVar5 = F_00c4c74c(uVar5);
                            *(short *)(iVar2 + 6) = (short)uVar5;
                            return 1;
                          }
                        }
                        else {
                          pcVar6 = "ABGroupNo";
                          pbVar7 = param_1;
                          do {
                            bVar1 = *pcVar6;
                            bVar8 = bVar1 < *pbVar7;
                            if (bVar1 != *pbVar7) {
LAB_00d224e8: ;
                              iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                              goto LAB_00d224ed;
                            }
                            if (bVar1 == 0) break;
                            bVar1 = pcVar6[1];
                            bVar8 = bVar1 < pbVar7[1];
                            if (bVar1 != pbVar7[1]) goto LAB_00d224e8;
                            pcVar6 = pcVar6 + 2;
                            pbVar7 = pbVar7 + 2;
                          } while (bVar1 != 0);
                          iVar4 = 0;
LAB_00d224ed: ;
                          if (iVar4 != 0) {
                            pcVar6 = "FirstInactive";
                            pbVar7 = param_1;
                            do {
                              bVar1 = *pcVar6;
                              bVar8 = bVar1 < *pbVar7;
                              if (bVar1 != *pbVar7) {
LAB_00d22540: ;
                                iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                                goto LAB_00d22545;
                              }
                              if (bVar1 == 0) break;
                              bVar1 = pcVar6[1];
                              bVar8 = bVar1 < pbVar7[1];
                              if (bVar1 != pbVar7[1]) goto LAB_00d22540;
                              pcVar6 = pcVar6 + 2;
                              pbVar7 = pbVar7 + 2;
                            } while (bVar1 != 0);
                            iVar4 = 0;
LAB_00d22545: ;
                            if (iVar4 == 0) {
                              uVar5 = F_00d00d00(0,0);
                              if (uVar5 == 0) {
                                return 0;
                              }
                              uVar5 = F_00c4c74c(uVar5);
                              *(byte *)(iVar2 + 4) =
                                   *(byte *)(iVar2 + 4) ^
                                   ((char)uVar5 << 5 ^ *(byte *)(iVar2 + 4)) & 0x20;
                            }
                            return 1;
                          }
                          uVar5 = F_00d00d00(0,0);
                          if (uVar5 != 0) {
                            uVar5 = F_00c4c74c(uVar5);
                            *(short *)(iVar2 + 0xe) = (short)uVar5;
                            return 1;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00d22580 */
uint F_00d22580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd22580u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float10 fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x1133dc4));
  F_00cbbd70((int)this + 8);
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined4 *)((int)this + 0x20) = param_3;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x108));
  *(undefined1 *)((int)this + 0x120) = 1;
  *(undefined4 *)((int)this + 0x30) = 0;
  uVar4 = F_00cbbd70(((undefined1 *)(gen_frame + 0xc)));
  F_00cbbdc0((undefined *)((int)this + 8),uVar4);
  F_00cbbdb0(((undefined1 *)(gen_frame + 0xc)));
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x2d) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(uint *)((int)this + 0xe4) = *(uint *)((int)this + 0xe4) & 0xfffffffd | 1;
  *(byte *)((int)this + 0x2c) = *(byte *)((int)this + 0x2c) & 0xfc;
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1097254);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)&REFG(undefined, 0x1097254);
  *(undefined4 *)((int)this + 0x54) = uVar3;
  *(undefined4 *)((int)this + 0x58) = uVar3;
  *(undefined4 *)((int)this + 0x5c) = uVar3;
  *(undefined4 *)((int)this + 0x60) = uVar3;
  *(undefined4 *)((int)this + 100) = uVar3;
  *(undefined4 *)((int)this + 0x68) = uVar3;
  *(undefined4 *)((int)this + 0x6c) = uVar3;
  *(undefined4 *)((int)this + 0x70) = uVar3;
  *(undefined4 *)((int)this + 0x74) = uVar3;
  *(undefined4 *)((int)this + 0x78) = uVar3;
  *(undefined4 *)((int)this + 0x7c) = uVar3;
  *(uint *)((int)this + 0xe4) = *(uint *)((int)this + 0xe4) & 0xfffffff3;
  *(undefined4 *)((int)this + 0x80) = uVar3;
  uVar2 = REFG(float, 0x1090708);
  *(undefined4 *)((int)this + 0x84) = REFG(float, 0x1090708);
  *(undefined4 *)((int)this + 0x88) = uVar2;
  *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) & 0xfffff820 | 0x20;
  fVar1 = (float10)1;
  *(undefined1 *)((int)this + 0x34) = 0;
  *(float *)((int)this + 0x8c) = (float)fVar1;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(float *)((int)this + 0x9c) = (float)fVar1;
  *(undefined4 *)((int)this + 0x90) = uVar3;
  *(undefined4 *)((int)this + 0x94) = uVar3;
  *(undefined4 *)((int)this + 0x98) = uVar3;
  *(undefined4 *)((int)this + 0xa0) = uVar3;
  *(undefined4 *)((int)this + 0xa4) = uVar3;
  *(undefined4 *)((int)this + 0xa8) = uVar3;
  *(undefined4 *)((int)this + 0xb4) = uVar3;
  *(float *)((int)this + 0xbc) = (float)fVar1;
  *(float *)((int)this + 0xc0) = (float)fVar1;
  *(float *)((int)this + 0xc4) = (float)fVar1;
  *(undefined4 *)((int)this + 200) = uVar3;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = uVar3;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined1 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  return (uint)this;
}

