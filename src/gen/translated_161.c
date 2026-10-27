#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00cf41f0 */
uint F_00cf41f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf41f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  short sVar1;
  ushort uVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  
  uVar2 = F_00cf3838(param_1);
  if (uVar2 == 0x165) {
    uVar3 = F_00cf3e04(param_2,param_3,&REFG(undefined, 0x1130bd4));
  }
  else {
    sVar1 = *(short *)(param_1 + 2);
    if (sVar1 == 1) {
      pcVar5 = "Mono";
    }
    else if (sVar1 == 2) {
      pcVar5 = "Stereo";
    }
    else if (sVar1 == 3) {
      pcVar5 = "2.1";
    }
    else if (sVar1 == 4) {
      pcVar5 = "Quad";
    }
    else if (sVar1 == 5) {
      pcVar5 = "4.1";
    }
    else if (sVar1 == 6) {
      pcVar5 = "5.1";
    }
    else if (sVar1 == 7) {
      pcVar5 = "6.1";
    }
    else {
      pcVar5 = "7.1";
      if (sVar1 != 8) {
        pcVar5 = "ManyChannels";
      }
    }
    if (uVar2 == 3) {
      pcVar4 = "Float";
    }
    else if (uVar2 == 2) {
      pcVar4 = "Adpcm";
    }
    else if (uVar2 == 0x166) {
      pcVar4 = "XMA2";
    }
    else if (uVar2 == 0x161) {
      pcVar4 = "WMAStd";
    }
    else if (uVar2 == 0x162) {
      pcVar4 = "WMAPro";
    }
    else if (uVar2 == 0x164) {
      pcVar4 = "WMASpdif";
    }
    else if (uVar2 == 0x92) {
      pcVar4 = "AC3Spdif";
    }
    else if (uVar2 == 1) {
      sVar1 = *(short *)(param_1 + 0xe);
      if (sVar1 == 8) {
        pcVar4 = "Pcm8Bit";
      }
      else if (sVar1 == 0x10) {
        pcVar4 = "Pcm16Bit";
      }
      else if (sVar1 == 0x18) {
        pcVar4 = "Pcm24Bit";
      }
      else {
        pcVar4 = "Pcm32Bit";
        if (sVar1 != 0x20) {
          pcVar4 = "BadBitsPerSample";
        }
      }
    }
    else {
      pcVar4 = "Unknown";
    }
    uVar3 = F_00cf3e04(param_2,param_3,"%luk%s%s",*(uint *)(param_1 + 4) / 1000,pcVar4,pcVar5);
  }
  return uVar3;
}

/* ref: FUN_00cf436b */
unsigned int F_00cf436b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf436bu, gen_a0, gen_a1, gen_a2, 0u);
  int in_eax = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * puVar1;
  float fVar2;
  undefined4 uVar3;
  float * pfVar4;
  bool bVar5;
  float * pfVar6;
  int iVar7;
  
  do {
    iVar7 = 0;
    bVar5 = false;
    if (in_eax + -1 < 1) {
      return 0;
    }
    pfVar4 = param_2;
    do {
      pfVar6 = pfVar4 + 1;
      if ((float10)*pfVar6 < (float10)*pfVar4) {
        fVar2 = *pfVar4;
        *pfVar4 = *pfVar6;
        *pfVar6 = fVar2;
        puVar1 = (undefined4 *)(param_3 + iVar7 * 4);
        uVar3 = *puVar1;
        *puVar1 = *((undefined4 *)GEN_TOP(((param_3 - (int)param_2) + (int)pfVar6)));
        *((undefined4 *)GEN_TOP(((param_3 - (int)param_2) + (int)pfVar6))) = uVar3;
        bVar5 = true;
      }
      iVar7 = iVar7 + 1;
      pfVar4 = pfVar6;
    } while (iVar7 < in_eax + -1);
  } while (bVar5);
  return 0;
}

/* ref: FUN_00cf43cb */
uint F_00cf43cb(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcf43cbu, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  float fVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  HANDLE pvVar5;
  LPVOID pvVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  float * pfVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  int * piVar14;
  int iVar15;
  int iVar16;
  code * pcVar17;
  int * piVar18;
  undefined4 * puVar19;
  int iVar20;
  float10 fVar21;
  float10 fVar22;
  float fVar23;
  longlong lVar24;
  undefined4 uVar25;
  uint local_24;
  uint local_20;
  undefined4 * puStack_14;
  LPVOID local_10;
  LPVOID local_c;
  uint local_8;
  
  uVar4 = param_2;
  uVar3 = param_1;
  pcVar17 = (((code *)GEN_TOP(gen_imp_GetProcessHeap)));
  lVar24 = (ulonglong)(param_1 << 2) << 0x20;
  local_20 = 0;
  local_c = (LPVOID)0x0;
  local_10 = (LPVOID)0x0;
  pvVar5 = gen_imp_GetProcessHeap();
  pvVar6 = gen_imp_HeapAlloc(pvVar5,(int)lVar24,(int)((ulonglong)lVar24 >> 0x20));
  if (pvVar6 != (LPVOID)0x0) {
    lVar24 = (ulonglong)(param_2 << 2) << 0x20;
    pvVar5 = gen_imp_GetProcessHeap();
    local_c = gen_imp_HeapAlloc(pvVar5,(int)lVar24,(int)((ulonglong)lVar24 >> 0x20));
    if (local_c != (LPVOID)0x0) {
      lVar24 = (ulonglong)(param_2 << 2) << 0x20;
      pvVar5 = gen_imp_GetProcessHeap();
      local_10 = gen_imp_HeapAlloc(pvVar5,(int)lVar24,(int)((ulonglong)lVar24 >> 0x20));
      if (local_10 != (LPVOID)0x0) {
        iVar7 = 0;
        if (0 < (int)param_1) {
          do {
            *(int *)((int)pvVar6 + iVar7 * 4) = iVar7;
            iVar7 = iVar7 + 1;
          } while (iVar7 < (int)param_1);
        }
        iVar7 = 0;
        if (0 < (int)param_2) {
          do {
            *(int *)((int)local_c + iVar7 * 4) = iVar7;
            iVar7 = iVar7 + 1;
          } while (iVar7 < (int)param_2);
        }
        F_00cf436b(param_1,param_3,pvVar6);
        F_00cf436b(param_2,param_4,local_c);
        uVar8 = 0;
        local_24 = param_1;
        local_8 = param_2;
        uVar12 = local_24;
        if (0 < (int)param_1) {
          do {
            fVar23 = *(float *)(param_3 + uVar8 * 4);
            uVar12 = uVar8;
            if (!GEN_ISNAN(fVar23) && !(fVar23 < 0.0)) break;
            uVar8 = uVar8 + 1;
            uVar12 = local_24;
          } while ((int)uVar8 < (int)param_1);
        }
        local_24 = uVar12;
        uVar8 = 0;
        uVar12 = local_8;
        if (0 < (int)param_2) {
          do {
            fVar23 = *(float *)(param_4 + uVar8 * 4);
            uVar12 = uVar8;
            if (!GEN_ISNAN(fVar23) && !(fVar23 < 0.0)) break;
            uVar8 = uVar8 + 1;
            uVar12 = local_8;
          } while ((int)uVar8 < (int)param_2);
        }
        local_8 = uVar12;
        iVar7 = param_2 - local_8;
        iVar15 = 0;
        if (0 < (int)param_2) {
          puStack_14 = param_5;
          do {
            *(undefined4 *)((int)local_10 + iVar15 * 4) = 0;
            uVar12 = param_1;
            puVar19 = puStack_14;
            if (0 < (int)param_1) {
              for (; uVar12 != 0; uVar12 = uVar12 - 1) {
                *puVar19 = 0;
                puVar19 = puVar19 + 1;
              }
            }
            puStack_14 = puStack_14 + param_1;
            iVar15 = iVar15 + 1;
          } while (iVar15 < (int)param_2);
        }
        if (0 < iVar7) {
          if ((int)local_24 < (int)param_1) {
            piVar18 = (int *)((int)pvVar6 + local_24 * 4);
            iVar15 = param_3 - (int)pvVar6;
            do {
              uVar12 = local_8;
              if ((int)local_8 < (int)param_2) {
                do {
                  fVar21 = (float10)*(float *)(iVar15 + (int)piVar18);
                  fVar22 = (float10)*(float *)(param_4 + uVar12 * 4);
                  if ((!GEN_ISNAN(fVar22) && !GEN_ISNAN(fVar21)) && !(fVar22 < fVar21)) break;
                  uVar12 = uVar12 + 1;
                } while ((int)uVar12 < (int)param_2);
              }
              iVar20 = (int)(uVar12 - local_8) % iVar7 + local_8;
              iVar9 = iVar20 * 4;
              iVar16 = (int)((uVar12 - local_8) + -1 + iVar7) % iVar7 + local_8;
              iVar13 = iVar16 * 4;
              fVar21 = F_00cf3ae6(((float)GEN_TOF(((float10)*(float *)(iVar9 + param_4) -
                                           (float10)*(float *)(iVar13 + param_4)))));
              fVar23 = (float)fVar21;
              fVar21 = F_00cf3ae6(((float)GEN_TOF(((float10)*(float *)(iVar15 + (int)piVar18) -
                                           (float10)*(float *)(iVar13 + param_4)))));
              if (iVar16 == iVar20) {
                param_5[*(int *)(iVar13 + (int)local_c) * param_1 + *piVar18] =
                     (undefined4)gen_fl2bits(REFG(float, 0x1087f04));
                pfVar10 = ((float *)GEN_TOP(((int)local_10 + *(int *)(iVar13 + (int)local_c) * 4)));
                fVar21 = (float10)*pfVar10 + (float10)REFG(double, 0x1088130);
              }
              else {
                if ((GEN_ISNAN(fVar23) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) !=
                    ((GEN_ISNAN(fVar23) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ||
                    fVar23 == *(float *)&REFG(undefined, 0x1088114))) {
                  local_20 = 0x80070057;
                  pcVar17 = (((code *)GEN_TOP(gen_imp_GetProcessHeap)));
                  goto LAB_00cf4772;
                }
                dVar2 = ((double)GEN_TOD(((((float10)(float)fVar21 / (float10)fVar23) *
                                 (float10)*(double *)&REFG(undefined, 0x1130be0)) * (float10)REFG(double, 0x1088108))));
                uVar11 = (undefined4)(ulonglong)gen_d2bits(dVar2);
                uVar25 = (undefined4)((ulonglong)gen_d2bits(dVar2) >> 0x20);
                fVar21 = F_00c4c9e0(fVar23,uVar11,uVar25);
                param_3 = (uint)gen_fl2bits((float)fVar21);
                if (((float10)GEN_TOD(gen_bits2f(param_3))) < (float10)0) {
                  fVar23 = 0.0;
                  param_3 = 0;
                }
                fVar21 = F_00c4cda0(fVar23,uVar11,uVar25);
                puStack_14 = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)fVar21)));
                if ((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puStack_14))) < (float10)0) {
                  puStack_14 = (undefined4 *)0x0;
                }
                if (param_2 == 1) {
                  puStack_14 = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04))));
                  param_3 = (uint)gen_fl2bits(REFG(float, 0x1087f04));
                }
                piVar14 = (int *)((int)local_c + iVar9);
                param_5[*(int *)(iVar13 + (int)local_c) * param_1 + *piVar18] = param_3;
                param_5[*piVar14 * param_1 + *piVar18] = puStack_14;
                pfVar10 = ((float *)GEN_TOP(((int)local_10 + *(int *)(iVar13 + (int)local_c) * 4)));
                *pfVar10 = (float)(((float10)GEN_TOD(gen_bits2f(param_3))) + (float10)*pfVar10);
                pfVar10 = (float *)((int)local_10 + *piVar14 * 4);
                fVar21 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puStack_14))) + (float10)*pfVar10;
              }
              local_24 = local_24 + 1;
              *pfVar10 = (float)fVar21;
              piVar18 = piVar18 + 1;
              pcVar17 = (((code *)GEN_TOP(gen_imp_GetProcessHeap)));
            } while ((int)local_24 < (int)param_1);
          }
          iVar7 = 0;
          fVar23 = 0.0;
          param_2 = 0;
          if (0 < (int)uVar4) {
            do {
              fVar1 = *(float *)((int)local_10 + iVar7 * 4);
              if (((float10)GEN_TOD(gen_bits2f(param_2))) < (float10)fVar1) {
                fVar23 = fVar1;
                param_2 = (uint)gen_fl2bits(fVar1);
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < (int)uVar4);
            if (GEN_ISNAN(fVar23) == (GEN_ISNAN(fVar23) || fVar23 == 0.0)) {
              fVar21 = (float10)*(double *)&REFG(undefined, 0x10912a8);
              param_1 = (uint)param_5;
              param_5 = (undefined4 *)uVar4;
              do {
                if (0 < (int)uVar3) {
                  param_4 = uVar3;
                  pfVar10 = (float *)param_1;
                  do {
                    *pfVar10 = ((float)GEN_TOF(((float10)(int)((float10)(float)((float10)*pfVar10 /
                                                                      ((float10)GEN_TOD(gen_bits2f(param_2))))
                                                      * fVar21 + (float10)REFG(double, 0x1088108)) / fVar21)));
                    pfVar10 = pfVar10 + 1;
                    param_4 = param_4 - 1;
                  } while (param_4 != 0);
                }
                param_1 = param_1 + uVar3 * 4;
                param_5 = (undefined4 *)((int)param_5 - 1);
              } while (param_5 != (undefined4 *)0x0);
            }
          }
        }
        goto LAB_00cf4772;
      }
    }
  }
  local_20 = 0x8007000e;
LAB_00cf4772: ;
  lVar24 = ZEXT48(pvVar6) << 0x20;
  uVar11 = (*pcVar17)();
  gen_imp_HeapFree(uVar11,(int)lVar24,(int)((ulonglong)lVar24 >> 0x20));
  lVar24 = ZEXT48(local_c) << 0x20;
  uVar11 = (*pcVar17)();
  gen_imp_HeapFree(uVar11,(int)lVar24,(int)((ulonglong)lVar24 >> 0x20));
  lVar24 = ZEXT48(local_10) << 0x20;
  uVar11 = (*pcVar17)();
  gen_imp_HeapFree(uVar11,(int)lVar24,(int)((ulonglong)lVar24 >> 0x20));
  return local_20;
}

/* ref: FUN_00cf47af */
uint F_00cf47af(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcf47afu, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float fVar1;
  bool bVar2;
  uint uVar3;
  HANDLE pvVar4;
  LPVOID pvVar5;
  uint uVar6;
  float * pfVar7;
  uint uVar8;
  int iVar9;
  float * pfVar10;
  undefined4 * puVar11;
  float10 fVar12;
  undefined4 uVar13;
  
  fVar1 = REFG(float, 0x1087f04);
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (((*(uint *)&gen_args[0]) == 0) || ((*(uint *)&gen_args[2]) == 0)) {
LAB_00cf4b70: ;
    uVar3 = 0x80070057;
    goto LAB_00cf4b75;
  }
  if ((*(uint *)&gen_args[3]) != 0) {
    uVar8 = 0;
    uVar3 = (*(uint *)&gen_args[3]);
    do {
      uVar8 = uVar8 + 1;
      uVar3 = uVar3 & uVar3 - 1;
    } while (uVar3 != 0);
    if ((*(uint *)&gen_args[0]) != uVar8) goto LAB_00cf4b70;
  }
  if ((*(uint *)&gen_args[4]) != 0) {
    uVar8 = 0;
    uVar3 = (*(uint *)&gen_args[4]);
    do {
      uVar8 = uVar8 + 1;
      uVar3 = uVar3 & uVar3 - 1;
    } while (uVar3 != 0);
    if ((*(uint *)&gen_args[2]) != uVar8) goto LAB_00cf4b70;
  }
  if ((((*(uint *)&gen_args[3]) == 0x3f) || ((*(uint *)&gen_args[3]) == 0x60f)) && (((*(uint *)&gen_args[4]) == 0x3f || ((*(uint *)&gen_args[4]) == 0x60f)))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (((*(uint *)&gen_args[3]) == 0) || ((*(uint *)&gen_args[4]) == 0)) {
    bVar2 = true;
  }
  if (bVar2) {
    F_00c48350((*(float * PTR32 *)&gen_args[1]),0,(*(uint *)&gen_args[2]) * (*(uint *)&gen_args[0]) * 4);
    uVar3 = (*(uint *)&gen_args[0]);
    if ((int)(*(uint *)&gen_args[2]) < (int)(*(uint *)&gen_args[0])) {
      uVar3 = (*(uint *)&gen_args[2]);
    }
    if (0 < (int)uVar3) {
      do {
        *(*(float * PTR32 *)&gen_args[1]) = REFG(float, 0x1087f04);
        (*(float * PTR32 *)&gen_args[1]) = (*(float * PTR32 *)&gen_args[1]) + (*(uint *)&gen_args[0]) + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  else {
    if ((*(uint *)&gen_args[3]) != 4) {
      ((float *)(gen_frame + 0x2c))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x2c))[0], REFG(float, 0x1130bfc));
      ((float *)(gen_frame + 0x2c))[1] = gen_bits2f(REFG(float, 0x10947a4));
      ((float *)(gen_frame + 0x2c))[2] = 0.0;
      ((float *)(gen_frame + 0x2c))[3] = gen_bits2f(REFG(float, 0x1130bf8));
      ((float *)(gen_frame + 0x2c))[4] = gen_bits2f(REFG(float, 0x1130bf4));
      ((float *)(gen_frame + 0x2c))[5] = gen_bits2f(REFG(float, 0x1094864));
      ((float *)(gen_frame + 0x2c))[6] = gen_bits2f(REFG(float, 0x1130bf0));
      ((float *)(gen_frame + 0x2c))[7] = gen_bits2f(REFG(float, 0x1094838));
      ((float *)(gen_frame + 0x2c))[8] = gen_bits2f(REFG(float, 0x10943cc));
      iVar9 = (*(uint *)&gen_args[0]) << 2;
      uVar3 = 0;
      ((float *)(gen_frame + 0x2c))[9] = gen_bits2f(REFG(float, 0x1130bec));
      uVar13 = 0;
      uVar8 = 0;
      (*(uint *)(gen_frame + 0x18)) = 1;
      (*(LPVOID *)(gen_frame + 0x4)) = (LPVOID)0x0;
      ((float *)(gen_frame + 0x2c))[10] = gen_bits2f(REFG(float, 0x1130be8));
      pvVar4 = gen_imp_GetProcessHeap();
      pvVar5 = gen_imp_HeapAlloc(pvVar4,uVar13,iVar9);
      if (pvVar5 == (LPVOID)0x0) {
LAB_00cf4983: ;
        (*(uint *)(gen_frame + 0x20)) = 0x8007000e;
      }
      else {
        iVar9 = (*(uint *)&gen_args[2]) << 2;
        uVar13 = 0;
        pvVar4 = gen_imp_GetProcessHeap();
        (*(LPVOID *)(gen_frame + 0x4)) = gen_imp_HeapAlloc(pvVar4,uVar13,iVar9);
        if ((*(LPVOID *)(gen_frame + 0x4)) == (LPVOID)0x0) goto LAB_00cf4983;
        uVar6 = 0;
        do {
          if (((*(uint *)&gen_args[3]) & (*(uint *)(gen_frame + 0x18))) != 0) {
            if (uVar8 != (*(uint *)&gen_args[0])) {
              *(float *)((int)pvVar5 + uVar8 * 4) = ((float *)(gen_frame + 0x2c))[(int)(uVar6)];
              uVar8 = uVar8 + 1;
              goto LAB_00cf49b0;
            }
LAB_00cf4ab9: ;
            (*(uint *)(gen_frame + 0x20)) = 0x80070057;
            goto LAB_00cf4b4b;
          }
LAB_00cf49b0: ;
          if (((*(uint *)&gen_args[4]) & (*(uint *)(gen_frame + 0x18))) != 0) {
            if (uVar3 == (*(uint *)&gen_args[2])) goto LAB_00cf4ab9;
            *(float *)((int)(*(LPVOID *)(gen_frame + 0x4)) + uVar3 * 4) = ((float *)(gen_frame + 0x2c))[(int)(uVar6)];
            uVar3 = uVar3 + 1;
          }
          (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) * 2;
          uVar6 = uVar6 + 1;
        } while (uVar6 < 0xb);
        if ((int)uVar8 < (int)(*(uint *)&gen_args[0])) {
          puVar11 = (undefined4 *)((int)pvVar5 + uVar8 * 4);
          for (iVar9 = (*(uint *)&gen_args[0]) - uVar8; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar11 = 0xc3b40000;
            puVar11 = puVar11 + 1;
          }
        }
        if ((int)uVar3 < (int)(*(uint *)&gen_args[2])) {
          puVar11 = (undefined4 *)((int)(*(LPVOID *)(gen_frame + 0x4)) + uVar3 * 4);
          for (iVar9 = (*(uint *)&gen_args[2]) - uVar3; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar11 = 0xc3b40000;
            puVar11 = puVar11 + 1;
          }
        }
        (*(uint *)(gen_frame + 0x20)) = F_00cf43cb((*(uint *)&gen_args[0]),(*(uint *)&gen_args[2]),(uint)pvVar5,(*(LPVOID *)(gen_frame + 0x4)),(*(float * PTR32 *)&gen_args[1]));
        if (-1 < (int)(*(uint *)(gen_frame + 0x20))) {
          (*(int *)(gen_frame + 0x14)) = 0;
          (*(uint *)(gen_frame + 0x18)) = 1;
          (*(uint *)(gen_frame + 0xc)) = 0;
          (*(int *)(gen_frame + 0x0)) = 0;
          do {
            if ((10 < (*(uint *)(gen_frame + 0xc))) || (!(*(float *)&REFG(undefined, 0x1088114) <= ((float *)(gen_frame + 0x2c))[(int)((*(uint *)(gen_frame + 0xc)))]))) {
              if ((((*(uint *)(gen_frame + 0x18)) & (*(uint *)&gen_args[3])) != 0) && (((*(uint *)&gen_args[4]) & (*(uint *)(gen_frame + 0x18))) != 0)) {
                (*(float * PTR32 *)&gen_args[1])[(*(int *)(gen_frame + 0x0)) + (*(int *)(gen_frame + 0x14))] = REFG(float, 0x1087f04);
              }
              if (((*(uint *)(gen_frame + 0x18)) & (*(uint *)&gen_args[3])) == 0) {
                if ((((*(uint *)&gen_args[4]) & (*(uint *)(gen_frame + 0x18))) != 0) && (((*(uint *)(gen_frame + 0x18)) & 8) == 0)) {
LAB_00cf4b42: ;
                  (*(uint *)(gen_frame + 0x20)) = 0x80004001;
                  break;
                }
              }
              else if (((*(uint *)&gen_args[4]) & (*(uint *)(gen_frame + 0x18))) == 0) {
                if (((*(uint *)(gen_frame + 0x18)) & 8) == 0) goto LAB_00cf4b42;
                if ((*(uint *)&gen_args[0]) == 1) {
                  if (0 < (int)(*(uint *)&gen_args[2])) {
                    pfVar10 = (*(float * PTR32 *)&gen_args[1]);
                    for (uVar3 = (*(uint *)&gen_args[2]); uVar3 != 0; uVar3 = uVar3 - 1) {
                      *pfVar10 = (float)((float10)1 / (float10)(int)(*(uint *)&gen_args[2]));
                      pfVar10 = pfVar10 + 1;
                    }
                  }
                }
                else {
                  fVar1 = ((float)GEN_TOF(((float10)1 / (float10)(int)((*(uint *)&gen_args[0]) - 1))));
                  pfVar10 = (*(float * PTR32 *)&gen_args[1]);
                  uVar3 = (*(uint *)&gen_args[2]);
                  if (0 < (int)(*(uint *)&gen_args[2])) {
                    do {
                      iVar9 = 0;
                      if (0 < (int)(*(uint *)&gen_args[0])) {
                        pfVar7 = pfVar10;
                        do {
                          if (iVar9 == (*(int *)(gen_frame + 0x14))) {
                            fVar12 = (float10)fVar1;
                          }
                          else {
                            fVar12 = (float10)(int)(*(uint *)&gen_args[2]) * (float10)*pfVar7;
                          }
                          iVar9 = iVar9 + 1;
                          *pfVar7 = ((float)GEN_TOF((fVar12 / ((float10)(int)(*(uint *)&gen_args[2]) + (float10)fVar1))));
                          pfVar7 = pfVar7 + 1;
                        } while (iVar9 < (int)(*(uint *)&gen_args[0]));
                      }
                      uVar3 = uVar3 - 1;
                      pfVar10 = pfVar10 + (*(uint *)&gen_args[0]);
                    } while (uVar3 != 0);
                  }
                }
              }
            }
            if (((*(uint *)&gen_args[3]) & (*(uint *)(gen_frame + 0x18))) != 0) {
              (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
            }
            if (((*(uint *)&gen_args[4]) & (*(uint *)(gen_frame + 0x18))) != 0) {
              (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + (*(uint *)&gen_args[0]);
            }
            (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) * 2;
            (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
          } while ((*(uint *)(gen_frame + 0xc)) < 0xb);
        }
      }
LAB_00cf4b4b: ;
      uVar13 = 0;
      pvVar4 = gen_imp_GetProcessHeap();
      gen_imp_HeapFree(pvVar4,uVar13,pvVar5);
      uVar13 = 0;
      pvVar4 = gen_imp_GetProcessHeap();
      gen_imp_HeapFree(pvVar4,uVar13,(*(LPVOID *)(gen_frame + 0x4)));
      uVar3 = (*(uint *)(gen_frame + 0x20));
      goto LAB_00cf4b75;
    }
    *(*(float * PTR32 *)&gen_args[1]) = REFG(float, 0x1087f04);
    if ((1 < (int)(*(uint *)&gen_args[2])) && ((*(float * PTR32 *)&gen_args[1])[1] = fVar1, 2 < (int)(*(uint *)&gen_args[2]))) {
      pfVar10 = (*(float * PTR32 *)&gen_args[1]) + 2;
      for (iVar9 = (*(uint *)&gen_args[2]) - 2; iVar9 != 0; iVar9 = iVar9 + -1) {
        *pfVar10 = 0.0;
        pfVar10 = pfVar10 + 1;
      }
    }
  }
  uVar3 = 0;
LAB_00cf4b75: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar3;
}

/* ref: FUN_00cf4b89 */
uint F_00cf4b89(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcf4b89u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  short sVar1;
  short * psVar2;
  int iVar3;
  ushort uVar4;
  LPVOID pvVar5;
  float * pfVar6;
  uint uVar7;
  int * piVar8;
  uint uVar9;
  bool bVar10;
  float10 fVar11;
  undefined4 uVar12;
  int local_10;
  uint local_c;
  short local_8;
  
  iVar3 = param_1;
  if (param_2 != 0) {
    piVar8 = param_5;
    do {
      if ((*((byte *)GEN_TOP((*(int *)(param_1 + 4) + 0x418))) & 2) != 0) {
        F_00cf3838(*((undefined4 *)GEN_TOP((((int)param_3 - (int)param_5) + (int)piVar8))));
        F_00cf3838(*piVar8);
      }
      piVar8 = piVar8 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  local_c = 0;
  if (((byte)*((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 0x418))) & 2) == 2) {
    uVar9 = (uint)*(ushort *)(*param_3 + 2);
    uVar7 = (uint)*(ushort *)(*param_5 + 2);
    pvVar5 = gen_imp_CoTaskMemAlloc(uVar7 * uVar9 * 4);
    *(LPVOID *)(param_1 + 0xc) = pvVar5;
    if (pvVar5 == (LPVOID)0x0) {
      local_c = 0x8007000e;
    }
    else {
      psVar2 = (short *)*param_3;
      sVar1 = psVar2[7];
      param_1 = 0;
      local_8 = sVar1;
      if (*psVar2 == -2) {
        param_1 = *(uint *)(psVar2 + 10);
        local_8 = psVar2[9];
      }
      param_2 = 0;
      if (*(short *)*param_5 == -2) {
        param_2 = *(uint *)((short *)*param_5 + 10);
      }
      if (param_1 == 0) {
        param_1 = F_00cf38b4(uVar9);
      }
      if (param_2 == 0) {
        param_2 = F_00cf38b4(uVar7);
      }
      local_c = F_00cf47af(uVar9,pvVar5,uVar7,param_1,param_2);
      if (-1 < (int)local_c) {
        *(undefined4 *)(iVar3 + 0x14) = 0;
        param_5 = (int *)0x4;
        if (uVar9 == uVar7) {
          param_5 = (int *)0x7;
          param_1 = 0;
          if (uVar7 != 0) {
            local_10 = 0;
            do {
              param_2 = 0;
              if (uVar9 != 0) {
                pfVar6 = ((float *)GEN_TOP((local_10 + (int)*(float * PTR32 *)(iVar3 + 0xc))));
                do {
                  if (param_2 == param_1) {
                    fVar11 = ((float10)GEN_TOD(**(float * PTR32 *)(iVar3 + 0xc)));
                    bVar10 = GEN_ISNAN((float10)*pfVar6) || GEN_ISNAN(fVar11);
                    if (bVar10 == (bVar10 || (float10)*pfVar6 == fVar11)) {
                      param_5 = (int *)((uint)param_5 & 0xfffffffe);
                    }
                  }
                  else {
                    bVar10 = GEN_ISNAN(*pfVar6) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
                    if (bVar10 == (bVar10 || *pfVar6 == *(float *)&REFG(undefined, 0x1088114))) {
                      param_5 = (int *)((uint)param_5 & 0xfffffffc);
                    }
                  }
                  param_2 = param_2 + 1;
                  pfVar6 = pfVar6 + 1;
                } while (param_2 < uVar9);
              }
              param_1 = param_1 + 1;
              local_10 = local_10 + uVar9 * 4;
            } while (param_1 < uVar7);
          }
        }
        if (((uint)param_5 & 1) != 0) {
          gen_imp_CoTaskMemFree(*(LPVOID *)(iVar3 + 0xc));
          *(undefined4 *)(iVar3 + 0xc) = 0;
          *(undefined4 *)(iVar3 + 0x14) = 1;
        }
        uVar4 = F_00cf3838(*param_3);
        if (uVar4 == 1) {
          if (sVar1 == 0x20) {
            if (local_8 == 0x20) {
              uVar12 = 6;
            }
            else if (local_8 == 0x18) {
              uVar12 = 5;
            }
            else {
              uVar12 = 3;
            }
          }
          else {
            if (sVar1 != 0x18) {
              if (sVar1 == 0x10) {
                uVar7 = F_00cfeb30(1,uVar9,uVar7,param_5);
                *(uint *)(iVar3 + 8) = uVar7;
                *(undefined4 *)(iVar3 + 0x10) = 1;
              }
              else {
                uVar7 = F_00cfeb30(0,uVar9,uVar7,param_5);
                *(undefined4 *)(iVar3 + 0x10) = 0;
                *(uint *)(iVar3 + 8) = uVar7;
              }
              goto LAB_00cf4c38;
            }
            if (local_8 == 0x18) {
              uVar12 = 4;
            }
            else {
              uVar12 = 2;
            }
          }
        }
        else {
          uVar12 = 7;
        }
        uVar7 = F_00cfeb30(uVar12,uVar9,uVar7,param_5);
        *(uint *)(iVar3 + 8) = uVar7;
        *(undefined4 *)(iVar3 + 0x10) = uVar12;
        goto LAB_00cf4c38;
      }
    }
    if (*(LPVOID *)(iVar3 + 0xc) != (LPVOID)0x0) {
      gen_imp_CoTaskMemFree(*(LPVOID *)(iVar3 + 0xc));
      *(undefined4 *)(iVar3 + 0xc) = 0;
    }
    *(undefined4 *)(iVar3 + 8) = 0;
    *(undefined4 *)(iVar3 + 0x10) = 7;
    *(undefined4 *)(iVar3 + 0x14) = 0;
    if ((int)local_c < 0) {
      return local_c;
    }
  }
LAB_00cf4c38: ;
  *(undefined4 *)(iVar3 + 0x18) = 1;
  return local_c;
}

/* ref: FUN_00cf4deb */
uint F_00cf4deb(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf4debu, gen_a0, gen_a1, gen_a2, gen_a3);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  uint uVar6;
  
  uVar1 = *param_1;
  F_00cf379a(param_1,param_2,param_3);
  puVar5 = (undefined4 *)0xfffe;
  if (uVar1 != 0xfffe) {
    *param_2 = 0xfffe;
    param_2[8] = 0x16;
    param_2[9] = param_1[7];
    uVar6 = F_00cf4019(param_1,param_4);
    *(uint *)(param_2 + 10) = uVar6;
    uVar4 = REFG(undefined4, 0x1130ae0);
    uVar3 = REFG(undefined4, 0x1130adc);
    uVar2 = REFG(undefined4, 0x1130ad8);
    *(uint *)(param_2 + 0xc) = (uint)uVar1;
    *(undefined4 *)(param_2 + 0xe) = uVar2;
    *(undefined4 *)(param_2 + 0x10) = uVar3;
    *(undefined4 *)(param_2 + 0x12) = uVar4;
    *param_3 = 0x28;
    puVar5 = param_3;
  }
  return (uint)puVar5;
}

/* ref: XAPOBaseWaveHlpNameSpace::AllocateWaveFormatExtensibleCopy */
undefined * F_00cf4e61(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf4e61u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined * pWVar2;
  
  uVar1 = F_00cf3762(param_1,1);
  (*(uint *)(gen_frame + 0x8)) = uVar1;
  if (uVar1 < 0x28) {
    (*(uint *)(gen_frame + 0x8)) = 0x28;
  }
  pWVar2 = (undefined *)F_004069f0((*(uint *)(gen_frame + 0x8)));
  if (pWVar2 != (undefined *)0x0) {
    F_00cf4deb(param_1,pWVar2,&(*(uint *)(gen_frame + 0x8)),param_2);
  }
  return pWVar2;
}

/* ref: FUN_00cf4ea4 */
uint F_00cf4ea4(unsigned int gen_a0)
{
  GEN_ENTER(0xcf4ea4u, gen_a0, 0u, 0u, 0u);
  short * param_1 = (short *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  short sVar1;
  ushort uVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(uint *)(gen_frame + 0x4)) = 1;
  if ((*param_1 != 0x165) && ((*(uint *)(gen_frame + 0x4)) = (uint)(param_1[1] != 0), *(int *)(param_1 + 2) == 0)) {
    (*(uint *)(gen_frame + 0x4)) = 0;
  }
  uVar2 = F_00cf3838(param_1);
  if (uVar2 == 1) {
    uVar3 = F_00cf38d1(param_1);
  }
  else if (uVar2 == 2) {
    uVar3 = F_00cf39a7(param_1);
  }
  else if (uVar2 == 3) {
    uVar3 = F_00cf3951(param_1);
  }
  else {
    if (uVar2 < 0x161) goto LAB_00cf4f72;
    if (uVar2 < 0x163) {
      uVar3 = (uint)(param_1[7] == 0x10);
      if ((*param_1 == -2) && (param_1[9] != 0x10)) {
        uVar3 = 0;
      }
      if (param_1[6] == 0) {
        uVar3 = 0;
      }
      if (*(int *)(param_1 + 4) == 0) {
        uVar3 = 0;
      }
    }
    else if (uVar2 == 0x165) {
      uVar3 = F_00cf4093(param_1);
    }
    else {
      if (uVar2 != 0x166) goto LAB_00cf4f72;
      uVar3 = F_00cf4139(param_1);
    }
  }
  if (uVar3 == 0) {
    (*(uint *)(gen_frame + 0x4)) = 0;
  }
LAB_00cf4f72: ;
  sVar1 = *param_1;
  if ((sVar1 == -2) &&
     (((ushort)param_1[8] < 0x16 ||
      ((*(int *)(param_1 + 10) != 0 &&
       (uVar2 = F_00cf3dd2(*(int *)(param_1 + 10)), uVar2 != param_1[1])))))) {
    (*(uint *)(gen_frame + 0x4)) = 0;
  }
  if (((*(uint *)(gen_frame + 0x4)) == 0) && (sVar1 != 0x165)) {
    F_00cf41f0(param_1,((undefined1 *)(gen_frame + 0x8)),0x40);
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return (*(uint *)(gen_frame + 0x4));
}

/* ref: FUN_00cf4fcb */
uint F_00cf4fcb(unsigned int gen_a0)
{
  GEN_ENTER(0xcf4fcbu, gen_a0, 0u, 0u, 0u);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  SIZE_T cb;
  undefined2 * puVar4;
  uint uVar5;
  
  cb = F_00cf3762(param_1,1);
  if (cb < 0x28) {
    cb = 0x28;
  }
  puVar4 = gen_imp_CoTaskMemAlloc(cb);
  if (puVar4 != (undefined2 *)0x0) {
    uVar5 = F_00cf3762(param_1,0);
    F_00c46aa0(puVar4,param_1,uVar5);
    F_00c48350((undefined *)(uVar5 + (int)puVar4),0,cb - uVar5);
    if (*param_1 != 0xfffe) {
      puVar4[9] = param_1[7];
      uVar5 = F_00cf4019(param_1,1);
      *puVar4 = 0xfffe;
      *(uint *)(puVar4 + 10) = uVar5;
      puVar4[8] = 0x16;
      uVar3 = REFG(undefined4, 0x1130ae0);
      uVar2 = REFG(undefined4, 0x1130adc);
      uVar1 = REFG(undefined4, 0x1130ad8);
      *(uint *)(puVar4 + 0xc) = (uint)*param_1;
      *(undefined4 *)(puVar4 + 0xe) = uVar1;
      *(undefined4 *)(puVar4 + 0x10) = uVar2;
      *(undefined4 *)(puVar4 + 0x12) = uVar3;
    }
  }
  return (uint)puVar4;
}

/* ref: FUN_00cf506d */
uint F_00cf506d(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf506du, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 7;
  *(undefined4 *)((int)this + 0x14) = 1;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 1;
  return (uint)this;
}

/* ref: FUN_00cf5099 */
uint F_00cf5099(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf5099u, gen_a0, gen_a1, 0u, 0u);
  short * param_1 = (short *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  undefined4 uVar6;
  uint local_8;
  
  local_8 = 0;
  uVar5 = F_00cf4ea4(param_1);
  if (uVar5 == 0) {
    return 0x80070057;
  }
  uVar3 = F_00cf3838(param_1);
  uVar2 = REFG(undefined4, 0x1130ae0);
  uVar1 = REFG(undefined4, 0x1130adc);
  uVar6 = REFG(undefined4, 0x1130ad8);
  if ((uVar3 != 3) && (local_8 = 0x88970001, param_2 != 0)) {
    if (*param_1 == -2) {
      param_1[0xc] = 3;
      param_1[0xd] = 0;
      *(undefined4 *)(param_1 + 0xe) = uVar6;
      *(undefined4 *)(param_1 + 0x10) = uVar1;
      *(undefined4 *)(param_1 + 0x12) = uVar2;
    }
    else {
      *param_1 = 3;
    }
  }
  if (param_1[1] == 0) {
    local_8 = 0x88970001;
    if (param_2 == 0) goto LAB_00cf5131;
    sVar4 = 1;
  }
  else {
    if (((ushort)param_1[1] < 0x41) || (local_8 = 0x88970001, param_2 == 0)) goto LAB_00cf5131;
    sVar4 = 0x40;
  }
  local_8 = 0x88970001;
  param_1[1] = sVar4;
LAB_00cf5131: ;
  uVar6 = 1000;
  if (((*(uint *)(param_1 + 2) < 1000) || (uVar6 = 200000, 200000 < *(uint *)(param_1 + 2))) &&
     (local_8 = 0x88970001, param_2 != 0)) {
    *(undefined4 *)(param_1 + 2) = uVar6;
  }
  if ((param_1[7] != 0x20) && (local_8 = 0x88970001, param_2 != 0)) {
    param_1[7] = 0x20;
  }
  if (((*param_1 == -2) && (param_1[9] != 0x20)) && (local_8 = 0x88970001, param_2 != 0)) {
    param_1[9] = 0x20;
  }
  return local_8;
}

/* ref: FUN_00cf518e */
uint F_00cf518e(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf518eu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  short * param_2 = (short *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  short sVar1;
  uint local_8;
  
  local_8 = 0;
  if ((((*((byte *)GEN_TOP((*(int *)((int)this + 4) + 0x418))) & 1) != 0) && (param_2[1] != param_1[1])) &&
     (local_8 = 0x88970001, param_3 != 0)) {
    param_2[1] = param_1[1];
  }
  if ((((*((byte *)GEN_TOP((*(int *)((int)this + 4) + 0x418))) & 2) != 0) &&
      (*(int *)(param_2 + 2) != *(int *)(param_1 + 2))) && (local_8 = 0x88970001, param_3 != 0)) {
    *(int *)(param_2 + 2) = *(int *)(param_1 + 2);
  }
  if ((*((byte *)GEN_TOP((*(int *)((int)this + 4) + 0x418))) & 4) != 0) {
    if ((param_2[7] != param_1[7]) && (local_8 = 0x88970001, param_3 != 0)) {
      param_2[7] = param_1[7];
    }
    if (*param_1 == -2) {
      if (*param_2 != -2) {
        if (param_2[7] == param_1[9]) {
          return local_8;
        }
        return 0x88970001;
      }
      sVar1 = param_1[9];
    }
    else {
      if (*param_2 != -2) {
        return local_8;
      }
      sVar1 = param_1[7];
    }
    if ((param_2[9] != sVar1) && (local_8 = 0x88970001, param_3 != 0)) {
      param_2[9] = sVar1;
    }
  }
  return local_8;
}

/* ref: FUN_00cf5256 */
uint F_00cf5256(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf5256u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  LPVOID param_3 = (LPVOID)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  uint uVar1;
  uint uVar2;
  LPVOID pv;
  uint local_8;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x34))(param_1,param_2,0);
  if ((int)uVar1 < 0) {
    return 0x80070057;
  }
  uVar2 = F_00cf4ea4(param_3);
  if (uVar2 == 0) {
    uVar1 = 0x80070057;
  }
  if ((int)uVar1 < 0) {
    return uVar1;
  }
  pv = param_3;
  if (param_4 != (undefined4 *)0x0) {
    pv = (LPVOID)F_00cf4fcb(param_3);
    uVar1 = (-(uint)(pv != (LPVOID)0x0) & 0x7ff8fff2) + 0x8007000e;
  }
  local_8 = (uint)(param_4 != (undefined4 *)0x0);
  if ((((int)uVar1 < 0) ||
      (uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x34))(param_1,pv,local_8), (int)uVar1 < 0)) ||
     (uVar1 = F_00cf518e(param_1,param_2,pv,local_8), (int)uVar1 < 0)) {
    if (local_8 == 0) {
      return uVar1;
    }
    if (pv == (LPVOID)0x0) {
      return uVar1;
    }
    if (uVar1 == 0x88970001) {
      *param_4 = pv;
      return 0x88970001;
    }
  }
  else if (local_8 == 0) {
    return uVar1;
  }
  gen_imp_CoTaskMemFree(pv);
  return uVar1;
}

/* ref: FUN_00cf5314 */
uint F_00cf5314(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf5314u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  LPVOID param_3 = (LPVOID)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  uint uVar1;
  uint uVar2;
  LPVOID pv;
  uint local_8;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x34))(param_1,param_2,0);
  if ((int)uVar1 < 0) {
    return 0x80070057;
  }
  uVar2 = F_00cf4ea4(param_3);
  if (uVar2 == 0) {
    uVar1 = 0x80070057;
  }
  if ((int)uVar1 < 0) {
    return uVar1;
  }
  pv = param_3;
  if (param_4 != (undefined4 *)0x0) {
    pv = (LPVOID)F_00cf4fcb(param_3);
    uVar1 = (-(uint)(pv != (LPVOID)0x0) & 0x7ff8fff2) + 0x8007000e;
  }
  local_8 = (uint)(param_4 != (undefined4 *)0x0);
  if ((((int)uVar1 < 0) ||
      (uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x34))(param_1,pv,local_8), (int)uVar1 < 0)) ||
     (uVar1 = F_00cf518e(param_1,param_2,pv,local_8), (int)uVar1 < 0)) {
    if (local_8 == 0) {
      return uVar1;
    }
    if (pv == (LPVOID)0x0) {
      return uVar1;
    }
    if (uVar1 == 0x88970001) {
      *param_4 = pv;
      return 0x88970001;
    }
  }
  else if (local_8 == 0) {
    return uVar1;
  }
  gen_imp_CoTaskMemFree(pv);
  return uVar1;
}

/* ref: FUN_00cf53e0 */
uint F_00cf53e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcf53e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x14) = 1;
  *(undefined4 *)((int)this + 0x1c) = 1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x24) = param_2;
  *(undefined4 *)((int)this + 0x28) = param_2;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x10) = 7;
  *(undefined4 *)((int)this + 0x34) = param_3;
  *(undefined4 *)((int)this + 0x3c) = param_4;
  return (uint)this;
}

/* ref: FUN_00cf5430 */
unsigned int F_00cf5430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf5430u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: FUN_00cf5450 */
uint F_00cf5450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf5450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  float10 fVar1;
  undefined4 uVar2;
  uint uVar3;
  int in_ecx;
  
  fVar1 = (float10)1;
  *(float *)((int)this + 0x14) = (float)fVar1;
  *(float *)((int)this + 0x40) = (float)fVar1;
  *(float *)((int)this + 0x44) = (float)fVar1;
  *(float *)((int)this + 0x48) = (float)fVar1;
  fVar1 = (float10)0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[55])REFP(0x1131354));
  *(float *)((int)this + 0x4c) = (float)fVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[7])REFP(0x1131334));
  *(float *)((int)this + 0x50) = (float)fVar1;
  *(int *)((int)this + 8) = param_1;
  *(float *)((int)this + 0x54) = (float)fVar1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined2 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x2e) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined1 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined1 *)((int)this + 0x5c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xb8));
  *(undefined1 *)((int)this + 0xd0) = 1;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  in_ecx = (int)this + 0xf0;
  param_1 = 3;
  do {
    F_00cea700(in_ecx);
    uVar2 = REFG(undefined4, 0x134fe14);
    in_ecx = in_ecx + 0x54;
    param_1 = param_1 + -1;
  } while (-1 < param_1);
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 0x244) = 0;
  *(undefined2 *)((int)this + 0x248) = 0;
  *(undefined4 *)((int)this + 0x24c) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c),uVar2,"CDev.Engine.Sd",0,0,0x10);
  *(uint *)((int)this + 0xe4) = uVar3;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c),0x1a8,"CDev.Engine.Sd",0,0,0x10);
  *(uint *)((int)this + 0xec) = uVar3;
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf41 */
uint F_00cf55b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcf55b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  float10 fVar2;
  uint uVar3;
  
  fVar1 = (float10)1;
  *(float *)(this + 0x40) = (float)fVar1;
  *(float *)(this + 0x44) = (float)fVar1;
  *(float *)(this + 0x48) = (float)fVar1;
  *(undefined4 *)(this + 0x3c) = 0;
  fVar2 = (float10)0;
  *(undefined4 *)(this + 0x84) = 0;
  *(float *)(this + 0x4c) = (float)fVar2;
  *(undefined4 *)(this + 0x88) = 0;
  *(float *)(this + 0x50) = (float)fVar2;
  this[0x80] = (undefined1)0x0;
  *(float *)(this + 0x54) = (float)fVar2;
  *(float *)(this + 0x14) = (float)fVar1;
  F_00cea740(this + 0x144);
  F_00cea740(this + 0xf0);
  F_00cea740(this + 0x198);
  uVar3 = F_00cea740(this + 0x1ec);
  fVar1 = (float10)0;
  *(float *)(this + 0x4c) = (float)fVar1;
  *(undefined4 *)(this + 0x58) = 0;
  *(float *)(this + 0x50) = (float)fVar1;
  *(float *)(this + 0x54) = (float)fVar1;
  return uVar3;
}

/* ref: FUN_00cf5630 */
unsigned int F_00cf5630(unsigned int gen_a0)
{
  GEN_ENTER(0xcf5630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 0xc) != 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x40))(this);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 100))))(*(int * PTR32 *)((int)this + 0xc),((undefined1 *)(gen_frame + 0xc)));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x48))))(*(int * PTR32 *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
    if (*(char *)((int)this + 0x2e) != '\0') {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x30) + 0x34))))(*(int * PTR32 *)((int)this + 0x30));
    }
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xe0);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
    *(undefined4 *)((int)this + 0xe0) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xe8);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
    *(undefined4 *)((int)this + 0xe8) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x18);
  if (piVar2 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x50))(piVar2);
    piVar2 = *(int * PTR32 *)((int)this + 0x18);
    if ((char)uVar3 == '\0') {
      if (piVar2 != (int *)0x0) {
        ((code *)*(gen_code32 *)*piVar2)(piVar2,1);
        *(undefined4 *)((int)this + 0x18) = 0;
        return 0;
      }
    }
    else {
      if (*(int *)((int)this + 0x34) == 3) {
        ((code *)*(gen_code32 *)(*piVar2 + 0x68))(piVar2);
        *(undefined4 *)((int)this + 0x18) = 0;
        return 0;
      }
      ((code *)*(gen_code32 *)*piVar2)(piVar2,0);
    }
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf49 */
uint F_00cf5700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcf5700u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)(this + 0x18) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18) + 0x5c))))
                      (*(int * PTR32 *)(this + 0x18),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf8 */
byte F_00cf5720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf5720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x50))))(*(int * PTR32 *)(this + 0xc),0,0);
  piVar1 = *(int * PTR32 *)(this + 0x18);
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xd4) = 1;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1,param_2);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18) + 0x30))))(*(int * PTR32 *)(this + 0x18),0,0);
  }
  return 1;
}

/* ref: FUN_00cf5770 */
uint F_00cf5770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf5770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  uint * puVar3;
  int * piVar4;
  uint uVar5;
  int iVar6;
  
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (undefined *)0x0;
  (*(undefined4 *)(gen_frame + 0x8)) = param_1;
  iVar6 = *(int *)((int)this + 0xa8);
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(uint *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  uVar5 = *(uint *)((int)this + 0x94);
  (*(undefined4 *)(gen_frame + 0x0)) = 0x40;
  (*(uint *)(gen_frame + 0x4)) = uVar5;
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = this;
  if (iVar6 == 0) {
    (*(uint *)(gen_frame + 0x14)) = 0;
    (*(uint *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  }
  else {
    iVar1 = *(int *)((int)this + 0xa0);
    if (iVar1 == 0xf) {
      (*(uint *)(gen_frame + 0x14)) = 0;
      (*(uint *)(gen_frame + 0x18)) = uVar5;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0xff;
    }
    else if (iVar1 == 0xb) {
      (*(uint *)(gen_frame + 0x14)) = *(uint *)((int)this + 0xa4) & 0xffffff80;
      (*(uint *)(gen_frame + 0x18)) = (iVar6 - *(uint *)((int)this + 0xa4)) + 0x7f & 0xffffff80;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0xff;
    }
    else {
      uVar2 = *(uint *)((int)this + 0xa4);
      (*(uint *)(gen_frame + 0x14)) = uVar2;
      if (iVar1 == 0xc) {
        (*(uint *)(gen_frame + 0x18)) = iVar6 - uVar2;
        (*(undefined4 *)(gen_frame + 0x1c)) = 0xff;
      }
      else {
        (*(uint *)(gen_frame + 0x18)) = (iVar6 - uVar2) + 1;
        (*(undefined4 *)(gen_frame + 0x1c)) = 0xff;
      }
    }
  }
  if (param_2 != 0) {
    iVar6 = *(int *)((int)this + 0xa0);
    (*(uint *)(gen_frame + 0xc)) = param_2;
    if (iVar6 == 1) {
      uVar5 = uVar5 / (uint)(*(int *)((int)this + 0x98) * 2);
    }
    else if (iVar6 == 0xc) {
      iVar6 = (*(int *)((int)this + 0x1c) - *(int *)((int)this + 0xac)) + -0x20;
      uVar5 = F_00ce93e0(iVar6);
      iVar6 = iVar6 + uVar5;
      uVar5 = (*(uint *)((int)this + 0x94) / (uint)*(ushort *)(iVar6 + 0xc)) *
              (uint)*(ushort *)(iVar6 + 0x12);
    }
    else if (iVar6 == 0xb) {
      iVar6 = (*(int *)((int)this + 0x1c) - *(int *)((int)this + 0xac)) + -0x20;
      uVar5 = F_00ce93e0(iVar6);
      uVar5 = *(uint *)(uVar5 + 0x18 + iVar6);
    }
    else {
      uVar5 = uVar5 >> 1;
    }
    if (uVar5 < param_2) {
      return uVar5;
    }
    (*(int *)(gen_frame + 0x10)) = uVar5 - param_2;
  }
  if (*(int *)((int)this + 0xa0) != 0xf) {
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x54))))
                      (*(int * PTR32 *)((int)this + 0xc),&(*(undefined4 *)(gen_frame + 0x0)),0);
    return uVar5;
  }
  puVar3 = *(uint * PTR32 *)((int)this + 0x24);
  piVar4 = *(int * PTR32 *)((int)this + 0xc);
  (*(uint *)(gen_frame + 0x28)) = 0;
  (*(uint * PTR32 *)(gen_frame + 0x24)) = puVar3 + 1;
  (*(uint *)(gen_frame + 0x28)) = *puVar3 >> 2;
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x54))(piVar4,&(*(undefined4 *)(gen_frame + 0x0)),&(*(uint * PTR32 *)(gen_frame + 0x24)));
  return uVar5;
}

/* ref: FUN_00cf5910 */
byte F_00cf5910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf5910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  short sVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  iVar5 = *(int *)((int)this + 0xa0);
  if ((((iVar5 != 0) && (iVar5 != 1)) && (iVar5 != 0xd)) && (iVar5 != 6)) {
    if (iVar5 == 0xc) {
      uVar3 = F_00ce93e0(param_2);
      uVar4 = *(ushort *)(uVar3 + 0x10 + param_2) + 0x12;
      if ((uVar4 < 0x33) && (*(short *)(uVar3 + param_2 + 0x14) == 7)) {
        F_00c46aa0(param_1,uVar3 + param_2,uVar4);
        return 1;
      }
    }
    else if (iVar5 == 0xf) {
      puVar6 = (undefined4 *)(param_2 + 0x20);
      puVar7 = param_1;
      for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      return 1;
    }
    return 0;
  }
  *(undefined2 *)param_1 = 1;
  sVar1 = *(short *)((int)this + 0x98);
  *(short *)((int)param_1 + 2) = sVar1;
  param_1[1] = *(undefined4 *)((int)this + 0x9c);
  uVar2 = sVar1 * 2;
  *(ushort *)(param_1 + 3) = uVar2;
  *(undefined2 *)((int)param_1 + 0xe) = 0x10;
  param_1[2] = (uint)uVar2 * param_1[1];
  *(undefined2 *)(param_1 + 4) = 0;
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf14 */
uint F_00cf59e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcf59e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)(this + 0x3c) != 0) {
    *(undefined4 *)(this + 0xd4) = 4;
    return in_EAX;
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x40))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf15 */
uint F_00cf5a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcf5a00u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0xd4) != 2) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x40))
                      (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  *(undefined4 *)(this + 0xd4) = 5;
  *(undefined4 *)(this + 0xdc) = 0;
  if (*(uint *)(this + 0xa4) < *(uint *)(this + 0xa8)) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x40))
                      (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  return *(uint *)(this + 0xa8);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf16 */
uint F_00cf5a40(unsigned int gen_a0)
{
  GEN_ENTER(0xcf5a40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0xc);
  *(undefined4 *)(this + 0xd4) = 6;
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1,0,0);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x58))))(*(int * PTR32 *)(this + 0xc));
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf17 */
unsigned int F_00cf5a70(unsigned int gen_a0)
{
  GEN_ENTER(0xcf5a70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)(this + 0xd4) == 2) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x50))))(*(int * PTR32 *)(this + 0xc),0x20,0);
    *(undefined4 *)(this + 0xd4) = 3;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf18 */
uint F_00cf5aa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcf5aa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)(this + 0xd4) == 3) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x30))
                      (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf19 */
uint F_00cf5ac0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcf5ac0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = F_00c51673((double)param_2);
  if (iVar2 != 0) {
    param_2 = (float)(float10)1;
  }
  piVar1 = *(int * PTR32 *)(param_1 + 0xc);
  uVar3 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1,(undefined4)gen_fl2bits(param_2),0);
  }
  *(float *)(param_1 + 0x44) = param_2;
  return uVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf30 */
uint F_00cf5b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf5b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined * pVVar7;
  float10 fVar8;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  piVar2 = (int *)F_00d2ccd0();
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x124))(piVar2);
  iVar6 = 0;
  if (0 < (int)uVar3) {
    do {
      iVar4 = F_00c51673((double)param_1[iVar6]);
      if (iVar4 != 0) {
        param_1[iVar6] = (float)(float10)1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)uVar3);
  }
  uVar5 = uVar3;
  if (((*(int *)(this + 0xc) != 0) && (*(int *)(this + 0xd4) != 6)) && (*(int *)(this + 0x98) == 1))
  {
    piVar2 = *(int * PTR32 *)(this + 0xc);
    (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x14) * (float10)*param_1)));
    (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF(((float10)param_1[1] * (float10)*(float *)(this + 0x14))));
    (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x14) * (float10)param_1[2])));
    (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)param_1[3] * (float10)*(float *)(this + 0x14))));
    (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x14) * (float10)param_1[4])));
    (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF(((float10)param_1[5] * (float10)*(float *)(this + 0x14))));
    (*(float *)(gen_frame + 0x20)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x14) * (float10)param_1[6])));
    (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((float10)param_1[7] * (float10)*(float *)(this + 0x14))));
    uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0x40))(piVar2,*(undefined4 *)(this + 0x10),1,uVar3,&(*(float *)(gen_frame + 0x8)),0);
    (*(uint *)(gen_frame + 0x0)) = 0;
    if (this[0x80] != (undefined1)0x0) {
      pVVar7 = this + 0x60;
      do {
        piVar2 = *(int * PTR32 *)(this + 0xc);
        fVar8 = (float10)*(float *)(pVVar7 + 0x10);
        uVar1 = *(undefined4 *)pVVar7;
        (*(float *)(gen_frame + 0x8)) = (float)(fVar8 * (float10)*param_1);
        (*(float *)(gen_frame + 0xc)) = (float)((float10)param_1[1] * fVar8);
        (*(float *)(gen_frame + 0x10)) = (float)((float10)param_1[2] * fVar8);
        (*(float *)(gen_frame + 0x14)) = (float)((float10)param_1[3] * fVar8);
        (*(float *)(gen_frame + 0x18)) = (float)((float10)param_1[4] * fVar8);
        (*(float *)(gen_frame + 0x1c)) = (float)((float10)param_1[5] * fVar8);
        (*(float *)(gen_frame + 0x20)) = (float)((float10)param_1[6] * fVar8);
        (*(float *)(gen_frame + 0x24)) = (float)(fVar8 * (float10)param_1[7]);
        ((code *)*(gen_code32 *)(*piVar2 + 0x40))(piVar2,uVar1,1,uVar3,&(*(float *)(gen_frame + 0x8)),0);
        uVar5 = (*(uint *)(gen_frame + 0x0)) + 1;
        pVVar7 = pVVar7 + 4;
        (*(uint *)(gen_frame + 0x0)) = uVar5;
      } while ((int)uVar5 < (int)(uint)(byte)this[0x80]);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar5;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf45 */
uint F_00cf5c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf5c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x140];
  float fVar1;
  int iVar2;
  int * piVar3;
  float fVar4;
  float * pfVar5;
  float * pfVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float10 fVar12;
  
  (*(uint *)(gen_frame + 0x138)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x13c);
  (*(int *)(gen_frame + 0x10)) = param_2;
  if (0 < param_1) {
    iVar10 = 0;
    do {
      iVar2 = F_00c51673((double)*(float *)((*(int *)(gen_frame + 0x10)) + iVar10 * 4));
      if (iVar2 != 0) {
        *(float *)((*(int *)(gen_frame + 0x10)) + iVar10 * 4) = (float)(float10)1;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < param_1);
  }
  piVar3 = (int *)F_00d2ccd0();
  fVar4 = gen_bits2f(((code *)*(gen_code32 *)(*piVar3 + 0x124))(piVar3));
  iVar2 = (*(int *)(gen_frame + 0x10));
  iVar10 = *(int *)(this + 0xc);
  (*(float *)(gen_frame + 0x8)) = fVar4;
  if (((iVar10 != 0) && (*(int *)(this + 0xd4) != 6)) && (*(int *)(this + 0x98) == param_1)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x40))))
              (*(int * PTR32 *)(this + 0xc),*(undefined4 *)(this + 0x10),param_1,
               (undefined4)gen_fl2bits(fVar4),(*(int *)(gen_frame + 0x10)),0);
  }
  ((float *)(gen_frame + 0x118))[0] = (float)(float10)0;
  ((float *)(gen_frame + 0x18))[0] = (float)(float10)0;
  ((float *)(gen_frame + 0x118))[1] = 0.0;
  ((float *)(gen_frame + 0x118))[2] = 0.0;
  ((float *)(gen_frame + 0x118))[3] = 0.0;
  ((float *)(gen_frame + 0x118))[4] = 0.0;
  ((float *)(gen_frame + 0x118))[5] = 0.0;
  ((float *)(gen_frame + 0x118))[6] = 0.0;
  ((float *)(gen_frame + 0x118))[7] = 0.0;
  F_00c48350(((float *)(gen_frame + 0x18)) + 1,0,0xfc);
  iVar10 = 0;
  iVar11 = iVar2;
  if (3 < param_1 * 8) {
    (*(int *)(gen_frame + 0xc)) = (int)((float *)(gen_frame + 0x18)) - iVar2;
    (*(float *)(gen_frame + 0x14)) = gen_bits2f(param_1 * 8 + -3);
    pfVar6 = (float *)(iVar2 + 8);
    iVar9 = iVar10;
    do {
      iVar10 = iVar9 + 4;
      pfVar5 = pfVar6 + 4;
      (&(*(float *)(gen_frame + 0x8)))[iVar10] = ((float)GEN_TOF(((float10)pfVar6[-2] * (float10)*(float *)(this + 0x90))));
      (&(*(float *)(gen_frame + 0x8)))[iVar9 + 5] = ((float)GEN_TOF(((float10)pfVar6[-1] * (float10)*(float *)(this + 0x90))));
      *(float *)((*(int *)(gen_frame + 0xc)) + -0x10 + (int)pfVar5) =
           ((float)GEN_TOF(((float10)*(float *)(this + 0x90) * (float10)*pfVar6)));
      *((float *)GEN_TOP((((int)&(*(int *)(gen_frame + 0xc)) - iVar2) + (int)pfVar5))) =
           ((float)GEN_TOF(((float10)pfVar6[1] * (float10)*(float *)(this + 0x90))));
      pfVar6 = pfVar5;
      iVar9 = iVar10;
      iVar11 = (*(int *)(gen_frame + 0x10));
    } while (iVar10 < (int)gen_fl2bits((*(float *)(gen_frame + 0x14))));
  }
  while (iVar10 < param_1 * 8) {
    iVar2 = iVar10 * 4;
    iVar10 = iVar10 + 1;
    (&(*(float *)(gen_frame + 0x14)))[iVar10] =
         ((float)GEN_TOF(((float10)*(float *)(iVar11 + iVar2) * (float10)*(float *)(this + 0x90))));
  }
  if (0 < param_1) {
    pfVar6 = ((float *)(gen_frame + 0x18)) + 1;
    iVar10 = 0;
    do {
      fVar4 = pfVar6[-1];
      iVar2 = iVar10 + 1;
      fVar1 = ((float *)(gen_frame + 0x108))[(int)(iVar10 + 4)];
      (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar4 + (float10)fVar1);
      fVar4 = ((float)GEN_TOF(((float10)(float)((float10)fVar4 + (float10)fVar1) + (float10)*pfVar6)));
      (*(float *)(gen_frame + 0x14)) = fVar4;
      fVar4 = (float)((float10)fVar4 + (float10)pfVar6[1]);
      (*(float *)(gen_frame + 0x14)) = fVar4;
      fVar4 = (float)((float10)fVar4 + (float10)pfVar6[2]);
      (*(float *)(gen_frame + 0x14)) = fVar4;
      fVar4 = (float)((float10)fVar4 + (float10)pfVar6[3]);
      (*(float *)(gen_frame + 0x14)) = fVar4;
      fVar4 = (float)((float10)fVar4 + (float10)pfVar6[4]);
      (*(float *)(gen_frame + 0x14)) = fVar4;
      fVar4 = (float)((float10)fVar4 + (float10)pfVar6[5]);
      (*(float *)(gen_frame + 0x14)) = fVar4;
      ((float *)(gen_frame + 0x108))[(int)(iVar10 + 4)] = (float)((float10)fVar4 + (float10)pfVar6[6]);
      pfVar6 = pfVar6 + 8;
      iVar10 = iVar2;
    } while (iVar2 < param_1);
  }
  fVar12 = (float10)*(double *)&REFG(double, 0x10948e0);
  uVar7 = 0;
  if (3 < param_1) {
    uVar8 = uVar7;
    do {
      uVar7 = uVar8 + 4;
      ((float *)(gen_frame + 0x108))[(int)(uVar7)] = (float)((float10)((float *)(gen_frame + 0x108))[(int)(uVar8 + 4)] * fVar12);
      ((float *)(gen_frame + 0x108))[(int)(uVar8 + 5)] = (float)((float10)((float *)(gen_frame + 0x108))[(int)(uVar8 + 5)] * fVar12);
      ((float *)(gen_frame + 0x108))[(int)(uVar8 + 6)] = (float)((float10)((float *)(gen_frame + 0x108))[(int)(uVar8 + 6)] * fVar12);
      ((float *)(gen_frame + 0x108))[(int)(uVar8 + 7)] = (float)((float10)((float *)(gen_frame + 0x108))[(int)(uVar8 + 7)] * fVar12);
      uVar8 = uVar7;
    } while ((int)uVar7 < param_1 + -3);
  }
  for (; (int)uVar7 < param_1; uVar7 = uVar7 + 1) {
    ((float *)(gen_frame + 0x108))[(int)(uVar7 + 4)] = (float)((float10)((float *)(gen_frame + 0x108))[(int)(uVar7 + 4)] * fVar12);
  }
  if ((*(int *)(this + 0x88) != 0) && (*(int *)(this + 0x84) != 0)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x40))))
              (*(int * PTR32 *)(this + 0xc),*(int *)(this + 0x88),param_1,
               (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x8))),((float *)(gen_frame + 0x18)),0);
    uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x40))))
                      (*(int * PTR32 *)(this + 0xc),*(undefined4 *)(this + 0x84),param_1,1,((float *)(gen_frame + 0x108)) + 4,0
                      );
  }
  F_00c47745((*(uint *)(gen_frame + 0x138)) ^ (uint)(uint)(gen_frame + 0x13c));
  return uVar7;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf31 */
unsigned int F_00cf69d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf69d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf32 */
uint F_00cf69e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcf69e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(param_1 + 0xc);
  if ((piVar1 != (int *)0x0) && (*(int *)(param_1 + 0xd4) != 6)) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x68))(piVar1,(undefined4)gen_fl2bits(param_2),0)));
  }
  *(float *)(param_1 + 0x48) = param_2;
  return (uint)piVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf33 */
unsigned int F_00cf6a20(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcf6a20u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(param_1 + 0xe8) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xe8) + 0xc))))
              (*(int * PTR32 *)(param_1 + 0xe8),(undefined4)gen_fl2bits(param_2),0,0);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xe8) + 4))))(*(int * PTR32 *)(param_1 + 0xe8),0);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf35 */
uint F_00cf6aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf6aa0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x3c) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf36 */
uint F_00cf6ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xcf6ab0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x3c);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf37 */
unsigned int F_00cf6ac0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcf6ac0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x40) = param_2;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf11 */
unsigned int F_00cf6ad0(void)
{
  GEN_ENTER(0xcf6ad0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00cf6ae0 */
uint F_00cf6ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf6ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(uint *)((int)this + 0x240) = param_1;
  uVar1 = param_1;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x10) != 0)) {
    uVar1 = param_1 + 0x14;
    *(undefined2 *)((int)this + 0x248) = 0;
    *(undefined4 *)((int)this + 0x24c) = 0;
    *(uint *)((int)this + 0x244) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00cf6b20 */
byte F_00cf6b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf6b20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  short sVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  byte local_5;
  
  if (*(int *)((int)this + 0x240) == 0) {
    return 0;
  }
  sVar1 = *(short *)((int)this + 0x248);
  bVar4 = 0;
  uVar3 = param_1 / *(uint *)((int)this + 0x98) >> 1;
  *(int *)((int)this + 0x24c) = *(int *)((int)this + 0x24c) + uVar3;
  if (-1 < sVar1) {
    iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x244) + sVar1 * 4)));
    if ((*(int *)((int)this + 0x24c) < iVar2) &&
       ((int)(uVar3 / 2) <= iVar2 - *(int *)((int)this + 0x24c))) {
      local_5 = 0;
      bVar4 = local_5;
    }
    else {
      *(short *)((int)this + 0x248) = sVar1 + 1;
      bVar4 = 1;
      if (*((int *)GEN_TOP((*(int *)((int)this + 0x240) + 0x10))) <= (int)(short)(sVar1 + 1)) {
        *(undefined2 *)((int)this + 0x248) = 0xffff;
      }
    }
  }
  if ((char)param_2 != '\0') {
    *(undefined4 *)((int)this + 0x24c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x240) + 8)));
    *(undefined2 *)((int)this + 0x248) = 0;
    if (**(int * PTR32 *)((int)this + 0x244) <= *(int *)((int)this + 0x24c)) {
      while (*(short *)((int)this + 0x248) = *(short *)((int)this + 0x248) + 1,
            (int)*(short *)((int)this + 0x248) < *((int *)GEN_TOP((*(int *)((int)this + 0x240) + 0x10)))) {
        if (*(int *)((int)this + 0x24c) <
            *((int *)GEN_TOP((*(int *)((int)this + 0x244) + *(short *)((int)this + 0x248) * 4)))) {
          return bVar4;
        }
      }
      *(undefined2 *)((int)this + 0x248) = 0xffff;
    }
  }
  return bVar4;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf42 */
uint F_00cf6c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcf6c30u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0x18) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18) + 0x34))))
                      (*(int * PTR32 *)(this + 0x18),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf43 */
uint F_00cf6c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcf6c50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)(this + 0x18) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18) + 0x40))))
                      (*(int * PTR32 *)(this + 0x18),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf13 */
byte F_00cf6c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf6c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char * pcVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  uint local_10;
  
  if (param_1 == 0) {
    return 1;
  }
  if (*(int *)(this + 0xc) != 0) {
    iVar5 = *(int *)(this + 0xa0);
    if (iVar5 == 1) {
      fVar6 = (float10)param_1;
      if (param_1 < 0) {
        fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      fVar7 = (float10)*(int *)(this + 0x9c);
      if (*(int *)(this + 0x9c) < 0) {
        fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      uVar3 = *(uint *)(this + 0xa8);
      local_10 = (uint)(longlong)TRUNC(fVar7 * (fVar6 * (float10)REFG(double, 0x1091858)));
      uVar4 = local_10;
      if ((uVar3 != 0) && (uVar3 < local_10)) {
        do {
          uVar4 = uVar4 + (*(int *)(this + 0xa4) - uVar3);
        } while (uVar3 < uVar4);
      }
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x50))))(*(int * PTR32 *)(this + 0xc),0,0);
    }
    else {
      if (iVar5 != 0xc) {
        if (iVar5 == 6) {
          iVar5 = (*(int *)(this + 0x1c) - *(int *)(this + 0xac)) + -0x20;
          uVar4 = F_00ce93e0(iVar5);
          pcVar1 = (char *)(iVar5 + uVar4);
          if ((*pcVar1 != '\0') && (*(uint *)(pcVar1 + 0x10) != 0)) {
            bVar2 = pcVar1[1];
            fVar6 = (float10)param_1;
            uVar4 = *(uint *)(pcVar1 + 0x10) >> 2;
            if (param_1 < 0) {
              fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
            }
            iVar5 = (int)((fVar6 * (float10)REFG(double, 0x1091858)) / (float10)*(float *)(pcVar1 + 0xc));
            if ((int)uVar4 <= iVar5) {
              if (*(uint *)(this + 0xa8) <= *(uint *)(this + 0xa4)) {
                return 0;
              }
              do {
                iVar5 = iVar5 + (*(int *)(pcVar1 + 0x18) - uVar4);
              } while ((int)uVar4 <= iVar5);
            }
            ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x50))))(*(int * PTR32 *)(this + 0xc),0,0);
            ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18) + 0x30))))
                      (*(int * PTR32 *)(this + 0x18),*(undefined4 *)(pcVar1 + iVar5 * 4 + (uint)bVar2),1);
            return 1;
          }
        }
        return 0;
      }
      iVar5 = (*(int *)(this + 0x1c) - *(int *)(this + 0xac)) + -0x20;
      uVar4 = F_00ce93e0(iVar5);
      fVar6 = (float10)param_1;
      iVar5 = iVar5 + uVar4;
      if (param_1 < 0) {
        fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      fVar7 = (float10)*(int *)(iVar5 + 4);
      if (*(int *)(iVar5 + 4) < 0) {
        fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      local_10 = (uint)(longlong)TRUNC(fVar7 * (fVar6 * (float10)REFG(double, 0x1091858)));
      uVar4 = local_10;
      if ((*(uint *)(this + 0x94) / (uint)*(ushort *)(iVar5 + 0xc)) *
          (uint)*(ushort *)(iVar5 + 0x12) <= local_10) {
        uVar3 = *(uint *)(this + 0xa8);
        if (uVar3 <= *(uint *)(this + 0xa4)) {
          return 0;
        }
        if (uVar3 < local_10) {
          do {
            uVar4 = uVar4 + (*(uint *)(this + 0xa4) - uVar3);
          } while (uVar3 < uVar4);
        }
      }
      uVar4 = uVar4 - uVar4 % (uint)*(ushort *)(iVar5 + 0x12);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x50))))(*(int * PTR32 *)(this + 0xc),0,0);
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x58))))(*(int * PTR32 *)(this + 0xc));
    F_00cf5770(this,*(undefined4 *)(this + 0x1c),uVar4);
    return 1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf48 */
uint F_00cf6ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcf6ec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)(this + 0x18) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18) + 0x54))))
                      (*(int * PTR32 *)(this + 0x18),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00cf6ee0 */
unsigned int F_00cf6ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf6ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  if (*(char *)(param_1 + 0x2a) != '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 100))))(*(int * PTR32 *)(param_1 + 8),((undefined1 *)(gen_frame + 0xc)));
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x2c) + 0x38))))(*(int * PTR32 *)(param_1 + 0x2c));
    if (((((char)uVar1 == '\0') && (*(int *)(param_1 + 0xd4) == 2)) &&
        (*(int *)(param_1 + 0xd0) != 3)) && (*(int *)(param_1 + 0xd0) != 6)) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 0x50))))(*(int * PTR32 *)(param_1 + 8),0x20,0);
      *(uint *)(param_1 + 0xd4) = ((int)uVar1 < 0) - 1 & 3;
    }
  }
  return 0;
}

/* ref: FUN_00cf6f50 */
unsigned int F_00cf6f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf6f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  if (*(char *)(param_1 + 0x2a) != '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 100))))(*(int * PTR32 *)(param_1 + 8),((undefined1 *)(gen_frame + 0xc)));
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x2c) + 0x38))))(*(int * PTR32 *)(param_1 + 0x2c));
    if (((((char)uVar1 != '\0') && (*(int *)(param_1 + 0xd4) == 3)) &&
        (*(int *)(param_1 + 0xd0) != 3)) && (*(int *)(param_1 + 0xd0) != 6)) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 0x4c))))(*(int * PTR32 *)(param_1 + 8),0,0);
      *(uint *)(param_1 + 0xd4) = ((int)uVar1 < 0) - 1 & 2;
    }
  }
  return 0;
}

/* ref: FUN_00cf6fc0 */
uint F_00cf6fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf6fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined4 *)(param_1 + 0xd0) = 6;
  return param_1;
}

/* ref: FUN_00cf7000 */
unsigned int F_00cf7000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf7000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00cf7010 */
uint F_00cf7010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf7010u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + -4) + 0x40))))(param_1 + -4);
  return uVar1;
}

/* ref: FUN_00cf7030 */
uint F_00cf7030(unsigned int gen_a0)
{
  GEN_ENTER(0xcf7030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  undefined4 uVar2;
  uint uVar3;
  int in_ecx;
  int local_8;
  
  fVar1 = (float10)1;
  *(float *)((int)this + 0x14) = (float)fVar1;
  *(float *)((int)this + 0x40) = (float)fVar1;
  *(float *)((int)this + 0x44) = (float)fVar1;
  *(float *)((int)this + 0x48) = (float)fVar1;
  fVar1 = (float10)0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[55])REFP(0x1131354));
  *(float *)((int)this + 0x4c) = (float)fVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[7])REFP(0x1131334));
  *(float *)((int)this + 0x50) = (float)fVar1;
  *(undefined4 *)((int)this + 8) = 0;
  *(float *)((int)this + 0x54) = (float)fVar1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined2 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x2e) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined1 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined1 *)((int)this + 0x5c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xb8));
  *(undefined1 *)((int)this + 0xd0) = 1;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  in_ecx = (int)this + 0xf0;
  local_8 = 3;
  do {
    F_00cea700(in_ecx);
    uVar2 = REFG(undefined4, 0x134fe14);
    in_ecx = in_ecx + 0x54;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 0x244) = 0;
  *(undefined2 *)((int)this + 0x248) = 0;
  *(undefined4 *)((int)this + 0x24c) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c),uVar2,"CDev.Engine.Sd",0,0,0x10);
  *(uint *)((int)this + 0xe4) = uVar3;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c),0x1a8,"CDev.Engine.Sd",0,0,0x10);
  *(uint *)((int)this + 0xec) = uVar3;
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf40 */
uint F_00cf7190(unsigned int gen_a0)
{
  GEN_ENTER(0xcf7190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  uint uVar2;
  
  F_00cf5630(this);
  pcVar1 = *(gen_code32 *)(*(int *)this + 0xa4);
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  uVar2 = (*pcVar1)(this);
  *(undefined4 *)(this + 0x34) = 0;
  this[0x5c] = (undefined1)0x0;
  this[0x38] = (undefined1)0x0;
  return uVar2;
}

/* ref: FUN_00cf71c0 */
uint F_00cf71c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf71c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char * param_2 = (char *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte * pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined * this_00;
  int * piVar5;
  
  if (((*param_2 == '\x02') &&
      (bVar2 = param_2[1], iVar3 = *(int *)(param_2 + 0x10),
      *(int *)(param_2 + (uint)bVar2 + iVar3) != 0x5367674f)) &&
     (uVar4 = 0, *(int *)(param_2 + 0x14) != 0)) {
    do {
      pbVar1 = ((byte *)GEN_TOP((uVar4 + (int)(param_2 + (uint)bVar2 + iVar3))));
      *pbVar1 = *pbVar1 ^ param_2[2];
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_2 + 0x14));
  }
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                              (REFG(int * PTR32, 0x15d778c),0x68,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
  if (this_00 == (undefined *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)F_00cfed50(this_00,param_1,*(undefined4 *)((int)this + 0x94),
                                 *(int *)((int)this + 0x98) << 0xb,4,0,param_2,0);
  }
  *(int * PTR32 *)((int)this + 0x18) = piVar5;
  if (*(int *)((int)this + 0xa8) != 0) {
    ((code *)*(gen_code32 *)(*piVar5 + 0x2c))
              (piVar5,*(undefined4 *)((int)this + 0xa4),*(int *)((int)this + 0xa8));
  }
  uVar4 = F_00ce9400(param_3);
  *(uint *)((int)this + 0x240) = uVar4;
  if ((uVar4 != 0) && (*(int *)(uVar4 + 0x10) != 0)) {
    uVar4 = uVar4 + 0x14;
    *(undefined2 *)((int)this + 0x248) = 0;
    *(undefined4 *)((int)this + 0x24c) = 0;
    *(uint *)((int)this + 0x244) = uVar4;
  }
  return uVar4;
}

/* ref: FUN_00cf72c0 */
unsigned int F_00cf72c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcf72c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * piVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(char *)((int)this + 0x38) != '\x01') {
    piVar1 = *(int * PTR32 *)((int)this + 0x18);
    (*(int * PTR32 *)(gen_frame + 0x34)) = piVar1;
    if (piVar1 != (int *)0x0) {
      if (*(int *)((int)this + 0x34) == 3) {
        (*(int *)(gen_frame + 0x24)) = 0;
        (*(int *)(gen_frame + 0x28)) = 0;
        (*(undefined4 *)(gen_frame + 0x2c)) = 0;
        (*(undefined4 *)(gen_frame + 0x30)) = 0;
        (*(undefined4 *)(gen_frame + 0x0)) = 0;
        (*(uint *)(gen_frame + 0x4)) = 0;
        (*(uint *)(gen_frame + 0x8)) = 0;
        (*(undefined4 *)(gen_frame + 0xc)) = 0;
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(undefined4 *)(gen_frame + 0x1c)) = 0;
        (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)0x0;
        (*(uint *)(gen_frame + 0x38)) = 0;
        uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1);
        if (uVar3 != 0) {
          while (piVar1 = (*(int * PTR32 *)(gen_frame + 0x34)), uVar3 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x34)) + 0x24))((*(int * PTR32 *)(gen_frame + 0x34))),
                (char)uVar3 == '\0') {
            uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 100))(piVar1,&(*(int *)(gen_frame + 0x24)));
            if (uVar3 == 0xffffffff) {
              F_00cde750(*((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 8))));
              break;
            }
            if (((*(int *)(gen_frame + 0x24)) == 0) || ((*(int *)(gen_frame + 0x28)) == 0)) break;
            (*(uint *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x24));
            (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)*(undefined4 *)((int)this + 0x18);
            (*(uint *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x28));
            (*(undefined4 *)(gen_frame + 0x14)) = 0;
            (*(undefined4 *)(gen_frame + 0x18)) = 0;
            (*(undefined4 *)(gen_frame + 0x1c)) = 0;
            bVar2 = F_00cf6b20(this,(*(int *)(gen_frame + 0x28)),(uint)(uVar3 == 3));
            if (bVar2 == 1) {
              (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)0x1;
            }
            if (0 < (int)uVar3) {
              (*(undefined4 *)(gen_frame + 0x0)) = 0x40;
            }
            uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x54))))
                              (*(int * PTR32 *)((int)this + 0xc),&(*(undefined4 *)(gen_frame + 0x0)),0);
            if ((int)uVar3 < 0) break;
            uVar5 = (*(uint *)(gen_frame + 0x38)) + 1;
            (*(uint *)(gen_frame + 0x38)) = uVar5;
            uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x1c))))(*(int * PTR32 *)((int)this + 0x18));
            if (uVar3 <= uVar5) {
              *(undefined1 *)((int)this + 0x38) = 1;
              return 0;
            }
          }
        }
      }
      else {
        uVar5 = 0;
        uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1);
        if (uVar3 != 0) {
          while (uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x24))))
                                   (*(int * PTR32 *)((int)this + 0x18)), (char)uVar3 == '\0') {
            uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x20))))(*(int * PTR32 *)((int)this + 0x18));
            piVar1 = *(int * PTR32 *)((int)this + 0x18);
            (*(undefined4 *)(gen_frame + 0x0)) = 0;
            (*(uint *)(gen_frame + 0x4)) = 0;
            (*(uint *)(gen_frame + 0x8)) = 0;
            (*(undefined4 *)(gen_frame + 0xc)) = 0;
            (*(undefined4 *)(gen_frame + 0x10)) = 0;
            (*(undefined4 *)(gen_frame + 0x14)) = 0;
            (*(undefined4 *)(gen_frame + 0x18)) = 0;
            (*(undefined4 *)(gen_frame + 0x1c)) = 0;
            (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)0x0;
            uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
            (*(uint *)(gen_frame + 0x4)) = uVar4;
            if (uVar4 == 0) break;
            uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 8))))
                              (*(int * PTR32 *)((int)this + 0x18),uVar5);
            piVar1 = *(int * PTR32 *)((int)this + 0x18);
            (*(uint *)(gen_frame + 0x8)) = uVar4;
            (*(undefined4 *)(gen_frame + 0x14)) = 0;
            (*(undefined4 *)(gen_frame + 0x18)) = 0;
            (*(undefined4 *)(gen_frame + 0x1c)) = 0;
            (*(int * PTR32 *)(gen_frame + 0x20)) = piVar1;
            if (uVar3 != 0) {
              (*(undefined4 *)(gen_frame + 0x0)) = 0x40;
              ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,1);
            }
            uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0xc))))
                              (*(int * PTR32 *)((int)this + 0x18),uVar5);
            bVar2 = F_00cf6b20(this,(*(uint *)(gen_frame + 0x4)),uVar3 & 0xff);
            if (bVar2 == 1) {
              (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)0x1;
            }
            ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x54))))
                      (*(int * PTR32 *)((int)this + 0xc),&(*(undefined4 *)(gen_frame + 0x0)),0);
            uVar5 = uVar5 + 1;
            uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x1c))))(*(int * PTR32 *)((int)this + 0x18));
            if (uVar3 <= uVar5) {
              *(undefined1 *)((int)this + 0x38) = 1;
              return 0;
            }
          }
        }
      }
      *(undefined1 *)((int)this + 0x38) = 1;
    }
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf12 */
uint F_00cf74f0(unsigned int gen_a0)
{
  GEN_ENTER(0xcf74f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xd4);
  if ((uVar1 == 1) || (uVar1 == 3)) {
    F_00cf72c0(this);
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x4c))))(*(int * PTR32 *)(this + 0xc),0,0);
    *(undefined4 *)(this + 0xd4) = 2;
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf29 */
unsigned int F_00cf7530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf7530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_00cf9bb0(this + 0x144,param_1 + 0x54);
  F_00cf9bb0(this + 0xf0,param_1);
  F_00cf9bb0(this + 0x198,param_1 + 0xa8);
  F_00cf9bb0(this + 0x1ec,param_1 + 0xfc);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf46 */
float10 F_00cf7580(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcf7580u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float fVar1;
  
  *(float *)((int)param_1 + 0x4c) = param_2;
  *(undefined4 *)((int)param_1 + 0x58) = param_5;
  *(float *)((int)param_1 + 0x50) = param_3;
  *(float *)((int)param_1 + 0x54) = param_4;
  fVar1 = F_00cf5f80(param_1);
  return (float10)fVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf51 */
uint F_00cf75b0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0xcf75b0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * puVar1;
  undefined * pvVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  float10 extraout_ST0;
  
  piVar4 = *(int * PTR32 *)(param_1 + 0xc);
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  ((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4,0);
  puVar1 = *(undefined4 * PTR32 *)(param_1 + 0xe0);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)(param_1 + 0xe8);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
    *(undefined4 *)(param_1 + 0xe8) = 0;
  }
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 1: ;
    pvVar2 = *(undefined * PTR32 *)(param_1 + 0xe4);
    if ((pvVar2 == (undefined *)0x0) ||
       (piVar4 = (int *)F_00cf9500(pvVar2,(int)pvVar2 + 0x88,0,1), piVar4 == (int *)0x0)) break;
LAB_00cf7633: ;
    piVar4 = ((int *)GEN_TOP((*(int *)(*piVar4 + 4) + (int)piVar4)));
    goto LAB_00cf763a;
  case 2: ;
    pvVar2 = *(undefined * PTR32 *)(param_1 + 0xe4);
    if (pvVar2 != (undefined *)0x0) {
      piVar4 = (int *)F_00cf9570(pvVar2,(int)pvVar2 + 0x88,0,1);
      if (piVar4 != (int *)0x0) goto LAB_00cf7633;
      piVar4 = (int *)0x0;
      goto LAB_00cf763a;
    }
    break;
  case 3: ;
    pvVar2 = *(undefined * PTR32 *)(param_1 + 0xe4);
    if (pvVar2 != (undefined *)0x0) {
      piVar4 = (int *)F_00cf95e0(pvVar2,(int)pvVar2 + 0x88,0,1);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
        goto LAB_00cf763a;
      }
      goto LAB_00cf7633;
    }
    break;
  case 4: ;
    pvVar2 = *(undefined * PTR32 *)(param_1 + 0xe4);
    if (pvVar2 != (undefined *)0x0) {
      piVar4 = (int *)F_00cf9650(pvVar2,(int)pvVar2 + 0x88,0,1);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
        goto LAB_00cf763a;
      }
      goto LAB_00cf7633;
    }
    break;
  case 5: ;
    pvVar2 = *(undefined * PTR32 *)(param_1 + 0xe4);
    if (pvVar2 != (undefined *)0x0) {
      piVar4 = (int *)F_00cf96c0(pvVar2,(int)pvVar2 + 0x88,0,1);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
        goto LAB_00cf763a;
      }
      goto LAB_00cf7633;
    }
    break;
  case 6: ;
    pvVar2 = *(undefined * PTR32 *)(param_1 + 0xe4);
    if (pvVar2 != (undefined *)0x0) {
      piVar4 = (int *)F_00cf9800(pvVar2,(int)pvVar2 + 0x88,0,1);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
        goto LAB_00cf763a;
      }
      goto LAB_00cf7633;
    }
    break;
  case 7: ;
    pvVar2 = *(undefined * PTR32 *)(param_1 + 0xe4);
    if (pvVar2 != (undefined *)0x0) {
      piVar4 = (int *)F_00cf9940(pvVar2,(int)pvVar2 + 0x88,0,1);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
        goto LAB_00cf763a;
      }
      goto LAB_00cf7633;
    }
    break;
  default: ;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    goto LAB_00cf7782;
  }
  piVar4 = (int *)0x0;
LAB_00cf763a: ;
  *(int * PTR32 *)(param_1 + 0xe0) = piVar4;
  ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,(undefined4)gen_fl2bits(param_3),0,0);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xe0) + 0xc))))
            (*(int * PTR32 *)(param_1 + 0xe0),(undefined4)gen_fl2bits(param_4),1,0);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xe0) + 0xc))))
            (*(int * PTR32 *)(param_1 + 0xe0),(undefined4)gen_fl2bits(param_5),2,0);
LAB_00cf7782: ;
  (*(uint * PTR32 *)(gen_frame + 0x28)) = ((uint *)(gen_frame + 0xc));
  piVar4 = *(int * PTR32 *)(param_1 + 0xe0);
  (*(int *)(gen_frame + 0x24)) = 0;
  if (piVar4 != (int *)0x0) {
    ((uint *)(gen_frame + 0xc))[2] = *(undefined4 *)(param_1 + 0x98);
    ((uint *)(gen_frame + 0xc))[1] = 1;
    uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4);
    ((uint *)(gen_frame + 0xc))[(int)((*(int *)(gen_frame + 0x24)) * 3)] = uVar5;
    (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + 1;
  }
  if (*(int *)(param_1 + 0xe8) != 0) {
    piVar4 = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 8) + 8)));
    extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*piVar4 + 0x100))(piVar4);
    iVar3 = (*(int *)(gen_frame + 0x24));
    ((uint *)(gen_frame + 0xc))[(int)((*(int *)(gen_frame + 0x24)) * 3 + 1)] = (uint)((float10)*(float *)&REFG(undefined, 0x1088114) <= extraout_ST0);
    ((uint *)(gen_frame + 0xc))[(int)(iVar3 * 3 + 2)] = *(uint *)(param_1 + 0x98);
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xe8) + 0x18))))(*(int * PTR32 *)(param_1 + 0xe8));
    ((uint *)(gen_frame + 0xc))[(int)((*(int *)(gen_frame + 0x24)) * 3)] = uVar5;
    (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + 1;
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 8))))(*(int * PTR32 *)(param_1 + 0xc),&(*(int *)(gen_frame + 0x24)));
  piVar4 = *(int * PTR32 *)(param_1 + 0xe0);
  if (piVar4 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar4 + 0x14))(piVar4,*(undefined4 *)(param_1 + 0xc),0);
  }
  uVar5 = (uint)(piVar4 != (int *)0x0);
  piVar4 = *(int * PTR32 *)(param_1 + 0xe8);
  if (piVar4 != (int *)0x0) {
    uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x14))(piVar4,*(undefined4 *)(param_1 + 0xc),uVar5);
  }
  return uVar5;
}

/* ref: FUN_00cf7890 */
unsigned int F_00cf7890(unsigned int gen_a0)
{
  GEN_ENTER(0xcf7890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  
  if ((((*(int *)((int)this + 0xc) != 0) && (*(int *)((int)this + 0x18) != 0)) &&
      (iVar4 = *(int *)((int)this + 0xd4), iVar4 != 6)) &&
     ((*(int *)((int)this + 0x34) != 2 || ((iVar4 != 4 && (iVar4 != 5)))))) {
    lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xb8);
    if (*(char *)((int)this + 0xd0) != '\0') {
      gen_imp_EnterCriticalSection(lpCriticalSection);
    }
    iVar4 = *(int *)((int)this + 0xb4);
    *(undefined4 *)((int)this + 0xb4) = 0;
    (*(int *)(gen_frame + 0x38)) = iVar4;
    if (*(char *)((int)this + 0xd0) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    if (*(int *)((int)this + 0x34) == 3) {
      piVar1 = *(int * PTR32 *)((int)this + 0x18);
      (*(int *)(gen_frame + 0x28)) = 0;
      (*(int *)(gen_frame + 0x2c)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(undefined4 *)(gen_frame + 0x34)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      (*(uint *)(gen_frame + 0x8)) = 0;
      (*(uint *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(uint *)(gen_frame + 0x24)) = 0;
      if ((*(int *)(gen_frame + 0x38)) != 0) {
        while (uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1), (char)uVar3 == '\0') {
          uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 100))(piVar1,&(*(int *)(gen_frame + 0x28)));
          if (uVar3 == 0xffffffff) {
            F_00cde750(*((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 8))));
            break;
          }
          if (((*(int *)(gen_frame + 0x28)) == 0) || ((*(int *)(gen_frame + 0x2c)) == 0)) break;
          (*(uint *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x2c));
          (*(uint *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0x28));
          if (uVar3 == 1) {
            (*(undefined4 *)(gen_frame + 0x4)) = 0x40;
          }
          bVar2 = F_00cf6b20(this,(*(int *)(gen_frame + 0x2c)),(uint)(uVar3 == 3));
          (*(int *)(gen_frame + 0x38)) = (*(int *)(gen_frame + 0x38)) + -1;
          (*(uint *)(gen_frame + 0x24)) = (uint)(bVar2 == 1);
          uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x54))))
                            (*(int * PTR32 *)((int)this + 0xc),&(*(undefined4 *)(gen_frame + 0x4)),0);
          if ((int)uVar3 < 0) break;
          if ((*(int *)(gen_frame + 0x38)) == 0) {
            return 0;
          }
        }
        iVar4 = (*(int *)(gen_frame + 0x38));
        if ((*(int *)(gen_frame + 0x38)) != 0) {
          if (*(char *)((int)this + 0xd0) != '\0') {
            gen_imp_EnterCriticalSection(lpCriticalSection);
          }
          *(int *)((int)this + 0xb4) = *(int *)((int)this + 0xb4) + iVar4;
          if (*(char *)((int)this + 0xd0) != '\0') {
            gen_imp_LeaveCriticalSection(lpCriticalSection);
            return 0;
          }
        }
      }
    }
    else if (iVar4 != 0) {
      while (uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x24))))(*(int * PTR32 *)((int)this + 0x18))
            , (char)uVar3 == '\0') {
        piVar1 = *(int * PTR32 *)((int)this + 0x18);
        (*(uint *)(gen_frame + 0x8)) = 0;
        (*(uint *)(gen_frame + 0xc)) = 0;
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(undefined4 *)(gen_frame + 0x1c)) = 0;
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        (*(uint *)(gen_frame + 0x24)) = 0;
        (*(undefined4 *)(gen_frame + 0x4)) = 0;
        uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1);
        if ((uVar3 != 0) || (*(int *)((int)this + 0xd4) == 5)) {
          piVar1 = *(int * PTR32 *)((int)this + 0x18);
          (*(undefined4 *)(gen_frame + 0x4)) = 0x40;
          ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,1);
          uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x58))))(*(int * PTR32 *)((int)this + 0x18));
          if ((char)uVar3 != '\0') {
            F_00cd87f0(*(undefined * PTR32 *)((int)this + 8),0);
            return 0;
          }
        }
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x14))))(*(int * PTR32 *)((int)this + 0x18));
        if ((int)uVar3 < 0) {
          return 0;
        }
        (*(uint *)(gen_frame + 0x8)) = uVar3;
        if (uVar3 == 0) {
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x30))))
                    (*(int * PTR32 *)((int)this + 0xc),(undefined4)gen_fl2bits((float)(float10)0),0);
          uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x10))))(*(int * PTR32 *)((int)this + 0x18));
          (*(uint *)(gen_frame + 0x8)) = uVar3;
          *(undefined1 *)((int)this + 0x5c) = 1;
        }
        else if (*(char *)((int)this + 0x5c) != '\0') {
          ((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this,*(undefined4 *)((int)this + 0x44));
          *(undefined1 *)((int)this + 0x5c) = 0;
        }
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x18))))(*(int * PTR32 *)((int)this + 0x18));
        iVar4 = uVar3 - 1;
        if (iVar4 < 0) {
          uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0x1c))))(*(int * PTR32 *)((int)this + 0x18));
          iVar4 = uVar3 - 1;
        }
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 8))))(*(int * PTR32 *)((int)this + 0x18),iVar4);
        (*(uint *)(gen_frame + 0xc)) = uVar3;
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 0xc))))(*(int * PTR32 *)((int)this + 0x18),iVar4)
        ;
        bVar2 = F_00cf6b20(this,(*(uint *)(gen_frame + 0x8)),uVar3 & 0xff);
        if (bVar2 == 1) {
          (*(uint *)(gen_frame + 0x24)) = 1;
        }
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x54))))(*(int * PTR32 *)((int)this + 0xc),&(*(undefined4 *)(gen_frame + 0x4)),0);
        iVar4 = (*(int *)(gen_frame + 0x38)) + -1;
        (*(int *)(gen_frame + 0x38)) = iVar4;
        if (iVar4 == 0) {
          return 0;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00cf7b70 */
unsigned int F_00cf7b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf7b70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined1 *)(param_1 + 0xcc) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb4));
  *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
  if (*(char *)(param_1 + 0xcc) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb4));
  }
  return 0;
}

/* ref: FUN_00cf7bb0 */
uint F_00cf7bb0(unsigned int gen_a0)
{
  GEN_ENTER(0xcf7bb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * this_00;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  int * piVar4;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  undefined4 uVar5;
  
  piVar4 = *((int * PTR32 *)GEN_TOP((*(uint *)((int)this + 8) + 8)));
  if (piVar4 == (int *)0x0) {
    return *(uint *)((int)this + 8);
  }
  this_00 = *(int * PTR32 *)((int)this + 0xec);
  if (this_00 != (int *)0x0) {
    *this_00 = (int)&REFG(undefined, 0x112a2b8);
    this_00[4] = (int)&REFG(undefined * PTR32, 0x112a2b0);
    F_00ccd4d0(this_00 + 6,0);
    F_00cd0850(this_00,this_00 + 0x22,0,0);
    *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this_00 + *(int *)(this_00[4] + 4) + 0x10))) =
         (*(undefined * PTR32 (*)[17])REFP(0x112a12c));
    *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this_00 + *(int *)(*this_00 + 4)))) =
         (*(undefined * PTR32 (*)[17])REFP(0x112a26c));
    *((int *)GEN_TOP((*(int *)(*this_00 + 4) + -4 + (int)this_00))) = *(int *)(*this_00 + 4) + -0x18;
    *(int *)((int)this + 0xe8) = *(int *)(*this_00 + 4) + (int)this_00;
    extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*piVar4 + 0x100))(piVar4);
    if ((float10)*(float *)&REFG(undefined, 0x1088114) <= extraout_ST0) {
      iVar1 = *(int *)this;
      extraout_ST0_00 = ((gen_fcode *)*(gen_code32 *)(*piVar4 + 0x100))(piVar4);
      ((code *)*(gen_code32 *)(iVar1 + 0x84))(this,(undefined4)gen_fl2bits((float)extraout_ST0_00));
    }
  }
  uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0xb4))(piVar4);
  uVar3 = uVar3 - 1;
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 0: ;
    pvVar2 = *(undefined * PTR32 *)((int)this + 0xe4);
    if (pvVar2 != (undefined *)0x0) {
      uVar5 = 1;
      uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0xb8))(piVar4);
      piVar4 = (int *)F_00cf9500(pvVar2,*(int *)((int)this + 0xe4) + 0x88,uVar3,uVar5);
      if (piVar4 == (int *)0x0) {
        *(undefined4 *)((int)this + 0xe0) = 0;
        return 0;
      }
LAB_00cf7e83: ;
      *(int *)((int)this + 0xe0) = *(int *)(*piVar4 + 4) + (int)piVar4;
      return (uint)piVar4;
    }
    break;
  case 1: ;
    pvVar2 = *(undefined * PTR32 *)((int)this + 0xe4);
    if (pvVar2 != (undefined *)0x0) {
      uVar5 = 1;
      uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0xb8))(piVar4);
      piVar4 = (int *)F_00cf9570(pvVar2,*(int *)((int)this + 0xe4) + 0x88,uVar3,uVar5);
      if (piVar4 == (int *)0x0) {
        *(undefined4 *)((int)this + 0xe0) = 0;
        return 0;
      }
LAB_00cf7e2f: ;
      *(int *)((int)this + 0xe0) = *(int *)(*piVar4 + 4) + (int)piVar4;
      return (uint)piVar4;
    }
    goto LAB_00cf7e20;
  case 2: ;
    pvVar2 = *(undefined * PTR32 *)((int)this + 0xe4);
    if (pvVar2 != (undefined *)0x0) {
      uVar5 = 1;
      uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0xb8))(piVar4);
      piVar4 = (int *)F_00cf95e0(pvVar2,*(int *)((int)this + 0xe4) + 0x88,uVar3,uVar5);
      if (piVar4 == (int *)0x0) {
        *(undefined4 *)((int)this + 0xe0) = 0;
        return 0;
      }
      goto LAB_00cf7e83;
    }
    break;
  case 3: ;
    pvVar2 = *(undefined * PTR32 *)((int)this + 0xe4);
    if (pvVar2 != (undefined *)0x0) {
      uVar5 = 1;
      uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0xb8))(piVar4);
      piVar4 = (int *)F_00cf9650(pvVar2,*(int *)((int)this + 0xe4) + 0x88,uVar3,uVar5);
      if (piVar4 == (int *)0x0) {
        *(undefined4 *)((int)this + 0xe0) = 0;
        return 0;
      }
      goto LAB_00cf7e2f;
    }
    goto LAB_00cf7e20;
  case 4: ;
    pvVar2 = *(undefined * PTR32 *)((int)this + 0xe4);
    if (pvVar2 != (undefined *)0x0) {
      uVar5 = 1;
      uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0xb8))(piVar4);
      piVar4 = (int *)F_00cf96c0(pvVar2,*(int *)((int)this + 0xe4) + 0x88,uVar3,uVar5);
      if (piVar4 == (int *)0x0) {
        *(undefined4 *)((int)this + 0xe0) = 0;
        return 0;
      }
      goto LAB_00cf7e83;
    }
    break;
  case 5: ;
    pvVar2 = *(undefined * PTR32 *)((int)this + 0xe4);
    if (pvVar2 != (undefined *)0x0) {
      uVar5 = 1;
      uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0xb8))(piVar4);
      piVar4 = (int *)F_00cf9800(pvVar2,*(int *)((int)this + 0xe4) + 0x88,uVar3,uVar5);
      uVar3 = 0;
      if (piVar4 != (int *)0x0) goto LAB_00cf7e2f;
    }
LAB_00cf7e20: ;
    *(undefined4 *)((int)this + 0xe0) = 0;
    return uVar3;
  case 6: ;
    pvVar2 = *(undefined * PTR32 *)((int)this + 0xe4);
    if (pvVar2 != (undefined *)0x0) {
      uVar5 = 1;
      uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0xb8))(piVar4);
      piVar4 = (int *)F_00cf9940(pvVar2,*(int *)((int)this + 0xe4) + 0x88,uVar3,uVar5);
      uVar3 = 0;
      if (piVar4 != (int *)0x0) goto LAB_00cf7e83;
    }
    break;
  default: ;
    *(undefined4 *)((int)this + 0xe0) = 0;
    return uVar3;
  }
  *(undefined4 *)((int)this + 0xe0) = 0;
  return uVar3;
}

/* ref: FUN_00cf7ed0 */
unsigned int F_00cf7ed0(unsigned int gen_a0)
{
  GEN_ENTER(0xcf7ed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = *(int * PTR32 *)((int)this + 0xe8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[55])REFP(0x1131354));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[7])REFP(0x1131334));
  if (piVar2 != (int *)0x0) {
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2)));
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  }
  F_00cf5630(this);
  pcVar1 = *(gen_code32 *)(*(int *)this + 0xa4);
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  (*pcVar1)(this);
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined1 *)((int)this + 0x5c) = 0;
  *(undefined1 *)((int)this + 0x38) = 0;
  if (*(int *)((int)this + 0xe4) != 0) {
    F_00406810(*(int *)((int)this + 0xe4));
    *(undefined4 *)((int)this + 0xe4) = 0;
    *(undefined4 *)((int)this + 0xe0) = 0;
  }
  if (*(int *)((int)this + 0xec) != 0) {
    F_00406810(*(int *)((int)this + 0xec));
    *(undefined4 *)((int)this + 0xec) = 0;
    *(undefined4 *)((int)this + 0xe8) = 0;
  }
  iVar3 = 3;
  iVar4 = (int)this + 0x244;
  do {
    F_00cccb40(iVar4 + -0x30);
    F_00cccb40(iVar4 + -0x54);
    iVar3 = iVar3 + -1;
    iVar4 = iVar4 + -0x54;
  } while (-1 < iVar3);
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0xb8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[55])REFP(0x1131164));
  return 0;
}

/* ref: FUN_00cf7fa0 */
byte F_00cf7fa0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf7fa0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float param_1 = (float)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x1f0];
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  code * pcVar4;
  float10 fVar5;
  float10 fVar6;
  byte bVar7;
  uint uVar8;
  float fVar9;
  int iVar10;
  float * pfVar11;
  uint uVar12;
  undefined4 uVar13;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float fVar14;
  
  (*(uint *)(gen_frame + 0x1e8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1ec);
  (*(float *)(gen_frame + 0x3c)) = param_1;
  if (REFG(char, 0x15d8bd9) != '\0') {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1ec) ^ (uint)(uint)(gen_frame + 0x1ec));
    return 0;
  }
  uVar8 = F_00cd7ae0(*(undefined * PTR32 *)((int)this + 8));
  uVar12 = 1;
  ((float *)(gen_frame + 0x1c4))[4] = 0.0;
  ((float *)(gen_frame + 0x1c4))[5] = 0.0;
  ((float *)(gen_frame + 0x1c4))[6] = 0.0;
  ((float *)(gen_frame + 0x1c4))[7] = 0.0;
  ((float *)(gen_frame + 0x1c4))[8] = 0.0;
  (*(uint *)(gen_frame + 0x38)) = 1;
  if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
    F_00ccaf80(&REFG(char, 0x15d7798));
  }
  if (REFG(char, 0x15d7798) == '\0') {
    *(undefined1 *)((int)this + 0x2e) = 0;
    *(undefined4 *)((int)this + 0xd8) = 0;
    *(undefined4 *)((int)this + 0x30) = 0;
    fVar14 = gen_bits2f(F_00ccb4d0(uVar8 - 1));
    *(float *)((int)this + 0x10) = fVar14;
    if (fVar14 == 0.0) goto LAB_00cf8463;
    ((float *)(gen_frame + 0x1c4))[4] = fVar14;
    if ((char)param_2 != '\0') {
      F_00d2de20(((undefined1 *)(gen_frame + 0x30)),0);
      bVar7 = F_00cbb930(((undefined1 *)(gen_frame + 0x30)));
      iVar10 = -(uint)(bVar7 != 0);
      if (-1 < iVar10) {
        uVar8 = F_00ccb560(iVar10);
        *(uint *)((int)this + 0x84) = uVar8;
        fVar9 = gen_bits2f(F_00ccb580(iVar10));
        fVar14 = *(float *)((int)this + 0x84);
        *(float *)((int)this + 0x88) = fVar9;
        if ((fVar14 != 0.0) && (fVar9 != 0.0)) {
          (*(uint *)(gen_frame + 0x38)) = 3;
          uVar12 = 3;
          *(float *)((int)this + 0x14) = (float)(float10)0;
          ((float *)(gen_frame + 0x1c4))[5] = fVar9;
          *(float *)((int)this + 0x8c) = (float)(float10)1;
          ((float *)(gen_frame + 0x1c4))[6] = fVar14;
          *(float *)((int)this + 0x90) = (float)(float10)1;
          *(undefined1 *)((int)this + 0x80) = 0;
        }
      }
      F_00cbb890(((undefined1 *)(gen_frame + 0x30)));
    }
  }
  else {
    bVar7 = F_00cd7b40(*(undefined * PTR32 *)((int)this + 8),0);
    iVar10 = REFG(int, 0x15d8bac);
    if (bVar7 == 0) {
      *(int *)((int)this + 0x10) = REFG(int, 0x15d8bac);
      if (iVar10 == 0) {
        *(undefined4 *)((int)this + 0x10) = REFG(undefined4, 0x15d8ba8);
      }
    }
    else {
      uVar8 = F_00ccb4d0(bVar7 - 1);
      *(uint *)((int)this + 0x10) = uVar8;
    }
    ((float *)(gen_frame + 0x1c4))[4] = *(float *)((int)this + 0x10);
    bVar7 = F_00cd7c00(*(undefined * PTR32 *)((int)this + 8));
    if (bVar7 != 0) {
      fVar14 = F_00cd7ba0(*(undefined * PTR32 *)((int)this + 8),0);
      *(float *)((int)this + 0x14) = fVar14;
    }
    bVar7 = F_00cd7c00(*(undefined * PTR32 *)((int)this + 8));
    if ((byte)(bVar7 - 1) != 0) {
      pfVar11 = (float *)((int)this + 0x70);
      (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)(uint)(byte)(bVar7 - 1);
      uVar8 = uVar12;
      do {
        bVar7 = F_00cd7b40(*(undefined * PTR32 *)((int)this + 8),uVar8);
        if (bVar7 != 0) {
          fVar14 = gen_bits2f(F_00ccb4d0(bVar7 - 1));
          ((float *)(gen_frame + 0x1c4))[(int)((*(uint *)(gen_frame + 0x38)) + 4)] = fVar14;
          pfVar11[-4] = fVar14;
          (*(uint *)(gen_frame + 0x38)) = (*(uint *)(gen_frame + 0x38)) + 1;
          fVar14 = F_00cd7ba0(*(undefined * PTR32 *)((int)this + 8),uVar8);
          *pfVar11 = fVar14;
        }
        uVar8 = (uint)(byte)((char)uVar8 + 1);
        pfVar11 = pfVar11 + 1;
        piVar2 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x34)) + -1);
        (*(int * PTR32 *)(gen_frame + 0x34)) = piVar2;
        uVar12 = (*(uint *)(gen_frame + 0x38));
      } while (piVar2 != (int *)0x0);
    }
    bVar7 = F_00cd7d80(*(undefined * PTR32 *)((int)this + 8));
    *(byte *)((int)this + 0x2e) = bVar7;
    if (bVar7 == 0) {
      *(undefined4 *)((int)this + 0xd8) = 0;
      *(undefined4 *)((int)this + 0x30) = 0;
    }
    else {
      *(undefined4 *)((int)this + 0xd8) = 2;
      uVar8 = F_00d2dec0(((undefined1 *)(gen_frame + 0x30)),0);
      uVar8 = F_00cc6b40(uVar8);
      *(uint *)((int)this + 0x30) = uVar8;
      F_00cc6ac0(((undefined1 *)(gen_frame + 0x30)));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x30) + 0x30))))(*(int * PTR32 *)((int)this + 0x30));
      extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x30) + 0x3c))))(*(int * PTR32 *)((int)this + 0x30));
      F_00cd6890(*(undefined4 *)((int)this + 8),(float)extraout_ST0);
    }
  }
  iVar10 = 0;
  ((float *)(gen_frame + 0x140))[0] = 0.0;
  ((float *)(gen_frame + 0x140))[1] = 0.0;
  ((float *)(gen_frame + 0x140))[2] = 0.0;
  ((float *)(gen_frame + 0x140))[3] = 0.0;
  ((float *)(gen_frame + 0x140))[4] = 0.0;
  ((float *)(gen_frame + 0x140))[5] = 0.0;
  ((float *)(gen_frame + 0x140))[6] = 0.0;
  ((float *)(gen_frame + 0x140))[7] = 0.0;
  ((float *)(gen_frame + 0x140))[8] = 0.0;
  ((float *)(gen_frame + 0x140))[9] = 0.0;
  if (0 < (int)uVar12) {
    do {
      fVar14 = ((float *)(gen_frame + 0x1c4))[(int)(iVar10 + 4)];
      ((float *)(gen_frame + 0x140))[(int)(iVar10 * 2)] = 0.0;
      ((float *)(gen_frame + 0x140))[(int)(iVar10 * 2 + 1)] = fVar14;
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)uVar12);
  }
  (*(uint *)(gen_frame + 0x20)) = uVar12;
  (*(float * PTR32 *)(gen_frame + 0x24)) = ((float *)(gen_frame + 0x140));
  F_00cf7bb0(this);
  (*(uint * PTR32 *)(gen_frame + 0x2c)) = ((uint *)(gen_frame + 0x8));
  piVar2 = *(int * PTR32 *)((int)this + 0xe0);
  (*(int *)(gen_frame + 0x28)) = 0;
  if (piVar2 != (int *)0x0) {
    ((uint *)(gen_frame + 0x8))[2] = *(undefined4 *)((int)this + 0x98);
    ((uint *)(gen_frame + 0x8))[1] = 0;
    uVar12 = ((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2);
    ((uint *)(gen_frame + 0x8))[(int)((*(int *)(gen_frame + 0x28)) * 3)] = uVar12;
    (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 1;
  }
  if (*(int *)((int)this + 0xe8) != 0) {
    piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 8) + 8)));
    extraout_ST0_00 = ((gen_fcode *)*(gen_code32 *)(*piVar2 + 0x100))(piVar2);
    iVar10 = (*(int *)(gen_frame + 0x28));
    ((uint *)(gen_frame + 0x8))[(int)((*(int *)(gen_frame + 0x28)) * 3 + 1)] = (uint)((float10)*(float *)&REFG(undefined, 0x1088114) <= extraout_ST0_00);
    ((uint *)(gen_frame + 0x8))[(int)(iVar10 * 3 + 2)] = *(uint *)((int)this + 0x98);
    uVar12 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xe8) + 0x18))))(*(int * PTR32 *)((int)this + 0xe8));
    ((uint *)(gen_frame + 0x8))[(int)((*(int *)(gen_frame + 0x28)) * 3)] = uVar12;
    (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 1;
  }
  fVar14 = (*(float *)(gen_frame + 0x1b4));
  piVar2 = REFG(int * PTR32, 0x15d8ba4);
  (*(int * PTR32 *)(gen_frame + 0x34)) = REFG(int * PTR32, 0x15d8ba4);
  if (REFG(int * PTR32, 0x15d8ba4) == (int *)0x0) goto LAB_00cf8463;
  (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x1b4)) + 0)) = 0;
  (*(float *)(gen_frame + 0x1b4)) = gen_bits2f((uint)gen_fl2bits(fVar14) & 0xffff0000);
  F_00c48350((undefined *)((int)&(*(float *)(gen_frame + 0x1b4)) + 2),0,0x32);
  fVar14 = (*(float *)(gen_frame + 0x3c));
  bVar7 = F_00cf5910(this,&(*(float *)(gen_frame + 0x1b4)),(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x3c))));
  if (bVar7 == 0) goto LAB_00cf8463;
  if (*(int *)((int)this + 0xa0) == 0xc) {
    if (*(int *)((int)this + 0xa8) != 0) {
      uVar8 = F_00ce9420((int)this + 0x94);
      uVar12 = (uint)gen_fl2bits(((float *)(gen_frame + 0x1c4))[0]) >> 0x10;
      if (uVar8 == 1) {
        *(uint *)((int)this + 0xa4) = (*(uint *)((int)this + 0xa4) / uVar12) * uVar12;
        uVar8 = *(int *)((int)this + 0xa8) + 1;
      }
      else {
        *(uint *)((int)this + 0xa4) = (*(uint *)((int)this + 0xa4) / uVar12) * uVar12;
        uVar8 = *(uint *)((int)this + 0xa8);
      }
      *(uint *)((int)this + 0xa8) = (uVar8 / uVar12) * uVar12;
    }
    uVar12 = (uint)gen_fl2bits((*(float *)(gen_frame + 0x1c0))) & 0xffff;
    if (*(uint *)((int)this + 0x94) % uVar12 != 0) {
      *(uint *)((int)this + 0x94) = (*(uint *)((int)this + 0x94) / uVar12) * uVar12;
    }
LAB_00cf8416: ;
    *(uint *)((int)this + 0x20) = uVar12;
  }
  else if (*(int *)((int)this + 0xa0) == 0xf) {
    uVar12 = (uint)gen_fl2bits((*(float *)(gen_frame + 0x1c0))) & 0xffff;
    *(int *)((int)this + 0x24) = (int)gen_fl2bits(fVar14) + 0x32;
    goto LAB_00cf8416;
  }
  puVar1 = (undefined4 *)((int)this + 0xc);
  uVar12 = ((code *)*(gen_code32 *)(*piVar2 + 0x20))
                     ((*(int * PTR32 *)(gen_frame + 0x34)),puVar1,&(*(float *)(gen_frame + 0x1b4)),0,*(undefined4 *)&REFG(undefined, 0x134c7f0),(int)this + 4,
                      &(*(uint *)(gen_frame + 0x20)),-(uint)((*(int *)(gen_frame + 0x28)) != 0) & (uint)&(*(int *)(gen_frame + 0x28)));
  if (-1 < (int)uVar12) {
    piVar2 = *(int * PTR32 *)((int)this + 0xe0);
    uVar13 = 0;
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2,*puVar1,0);
      piVar2 = *(int * PTR32 *)((int)this + 0x30);
      uVar13 = 1;
      if ((piVar2 != (int *)0x0) &&
         (uVar12 = ((code *)*(gen_code32 *)(*piVar2 + 0x38))(piVar2), (char)uVar12 == '\0')) {
        ((code *)*(gen_code32 *)(*(int *)*puVar1 + 0x50))((int *)*puVar1,0x20,0);
      }
    }
    piVar2 = *(int * PTR32 *)((int)this + 0xe8);
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2,*puVar1,uVar13);
    }
    iVar10 = *(int *)this;
    fVar14 = F_00cd83d0(*(undefined * PTR32 *)((int)this + 8));
    ((code *)*(gen_code32 *)(iVar10 + 0x4c))(this,(undefined4)gen_fl2bits(fVar14));
    iVar10 = *(int *)this;
    fVar14 = F_00cd68f0(*(undefined * PTR32 *)((int)this + 8));
    ((code *)*(gen_code32 *)(iVar10 + 0x80))(this,(undefined4)gen_fl2bits(fVar14));
    if ((*(int *)((int)this + 0x84) != 0) && (*(int *)((int)this + 0x88) != 0)) {
      ((float *)(gen_frame + 0x1c4))[1] = (float)(float10)0;
      ((float *)(gen_frame + 0x1c4))[2] = 0.0;
      ((float *)(gen_frame + 0x1c4))[3] = 0.0;
      ((float *)(gen_frame + 0x1c4))[4] = 0.0;
      ((float *)(gen_frame + 0x1c4))[5] = 0.0;
      ((float *)(gen_frame + 0x1c4))[6] = 0.0;
      ((float *)(gen_frame + 0x1c4))[7] = 0.0;
      ((float *)(gen_frame + 0x1c4))[8] = 0.0;
      ((code *)*(gen_code32 *)(*(int *)*puVar1 + 0x44))
                ((int *)*puVar1,*(int *)((int)this + 0x88),*(undefined4 *)((int)this + 0x98),8,
                 ((float *)(gen_frame + 0x40)));
      uVar12 = *(uint *)((int)this + 0x98);
      uVar8 = 0;
      if (uVar12 != 0) {
        pfVar11 = ((float *)(gen_frame + 0x40)) + 1;
        do {
          uVar8 = uVar8 + 1;
          (*(float *)(gen_frame + 0x3c)) = (float)((float10)pfVar11[-1] + (float10)((float *)(gen_frame + 0x1c4))[(int)(uVar8)]);
          fVar14 = ((float)GEN_TOF(((float10)(float)((float10)pfVar11[-1] + (float10)((float *)(gen_frame + 0x1c4))[(int)(uVar8)]) +
                          (float10)*pfVar11)));
          (*(float *)(gen_frame + 0x3c)) = fVar14;
          fVar14 = (float)((float10)fVar14 + (float10)pfVar11[1]);
          (*(float *)(gen_frame + 0x3c)) = fVar14;
          fVar14 = (float)((float10)fVar14 + (float10)pfVar11[2]);
          (*(float *)(gen_frame + 0x3c)) = fVar14;
          fVar14 = (float)((float10)fVar14 + (float10)pfVar11[3]);
          (*(float *)(gen_frame + 0x3c)) = fVar14;
          fVar14 = (float)((float10)fVar14 + (float10)pfVar11[4]);
          (*(float *)(gen_frame + 0x3c)) = fVar14;
          fVar14 = (float)((float10)fVar14 + (float10)pfVar11[5]);
          (*(float *)(gen_frame + 0x3c)) = fVar14;
          ((float *)(gen_frame + 0x1c4))[(int)(uVar8)] = (float)((float10)fVar14 + (float10)pfVar11[6]);
          pfVar11 = pfVar11 + 8;
        } while (uVar8 < uVar12);
      }
      uVar8 = 0;
      if (uVar12 != 0) {
        uVar3 = *(uint *)((int)this + 0x98);
        do {
          uVar13 = uVar8 + 1;
          uVar8 = uVar8 + 1;
          ((float *)(gen_frame + 0x1c4))[(int)(uVar8)] = (float)((float10)((float *)(gen_frame + 0x1c4))[(int)(uVar13)] * (float10)*(double *)&REFG(double, 0x10948e0));
        } while (uVar8 < uVar3);
      }
      ((code *)*(gen_code32 *)(*(int *)*puVar1 + 0x40))
                ((int *)*puVar1,*(undefined4 *)((int)this + 0x84),uVar12,1,((float *)(gen_frame + 0x1c4)) + 1,0);
    }
    if (*(int *)((int)this + 0x98) == 4) {
      fVar5 = (float10)1;
      ((float *)(gen_frame + 0x140))[10] = (float)fVar5;
      pcVar4 = *(gen_code32 *)(*(int *)this + 0xb4);
      fVar6 = (float10)0;
      (*(float *)(gen_frame + 0x16c)) = (float)fVar6;
      (*(float *)(gen_frame + 0x170)) = (float)fVar6;
      (*(float *)(gen_frame + 0x174)) = (float)fVar6;
      (*(float *)(gen_frame + 0x178)) = (float)fVar6;
      (*(float *)(gen_frame + 0x180)) = (float)fVar6;
      (*(float *)(gen_frame + 0x184)) = (float)fVar6;
      (*(float *)(gen_frame + 0x188)) = (float)fVar6;
      (*(float *)(gen_frame + 0x18c)) = (float)fVar6;
      (*(float *)(gen_frame + 0x190)) = (float)fVar6;
      (*(float *)(gen_frame + 0x194)) = (float)fVar6;
      (*(float *)(gen_frame + 0x198)) = (float)fVar6;
      (*(float *)(gen_frame + 0x19c)) = (float)fVar6;
      (*(float *)(gen_frame + 0x1a0)) = (float)fVar6;
      (*(float *)(gen_frame + 0x1a4)) = (float)fVar6;
      (*(float *)(gen_frame + 0x1a8)) = (float)fVar6;
      (*(float *)(gen_frame + 0x1ac)) = (float)fVar6;
      (*(float *)(gen_frame + 0x1b4)) = (float)fVar6;
      (*(float *)(gen_frame + 0x1b8)) = (float)fVar6;
      (*(float *)(gen_frame + 0x1bc)) = (float)fVar6;
      (*(float *)(gen_frame + 0x1c0)) = (float)fVar6;
      ((float *)(gen_frame + 0x1c4))[1] = (float)fVar6;
      ((float *)(gen_frame + 0x1c4))[2] = (float)fVar6;
      ((float *)(gen_frame + 0x1c4))[3] = (float)fVar6;
      ((float *)(gen_frame + 0x1c4))[4] = (float)fVar6;
      ((float *)(gen_frame + 0x1c4))[5] = (float)fVar6;
      ((float *)(gen_frame + 0x1c4))[6] = (float)fVar6;
      ((float *)(gen_frame + 0x1c4))[7] = (float)fVar6;
      ((float *)(gen_frame + 0x1c4))[8] = (float)fVar6;
      (*(float *)(gen_frame + 0x17c)) = (float)fVar5;
      (*(float *)(gen_frame + 0x1b0)) = (float)fVar5;
      ((float *)(gen_frame + 0x1c4))[0] = (float)fVar5;
      (*pcVar4)(this,4,((float *)(gen_frame + 0x140)) + 10);
    }
    piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 8) + 8)));
    uVar12 = ((code *)*(gen_code32 *)(*piVar2 + 0x16c))(piVar2);
    if ((((char)uVar12 != '\0') && (bVar7 = F_00d2cdf0(), bVar7 != 0)) &&
       (*(int *)((int)this + 0x98) == 2)) {
      fVar5 = (float10)0;
      pcVar4 = *(gen_code32 *)(*(int *)this + 0xb4);
      (*(float *)(gen_frame + 0x1a8)) = (float)fVar5;
      (*(float *)(gen_frame + 0x1ac)) = (float)fVar5;
      (*(float *)(gen_frame + 0x1b0)) = (float)fVar5;
      (*(float *)(gen_frame + 0x1b4)) = (float)fVar5;
      (*(float *)(gen_frame + 0x1b8)) = (float)fVar5;
      (*(float *)(gen_frame + 0x1bc)) = (float)fVar5;
      (*(float *)(gen_frame + 0x1c0)) = (float)fVar5;
      ((float *)(gen_frame + 0x1c4))[0] = (float)fVar5;
      ((float *)(gen_frame + 0x1c4))[1] = (float)fVar5;
      ((float *)(gen_frame + 0x1c4))[2] = (float)fVar5;
      ((float *)(gen_frame + 0x1c4))[3] = (float)fVar5;
      ((float *)(gen_frame + 0x1c4))[4] = (float)fVar5;
      ((float *)(gen_frame + 0x1c4))[5] = (float)(float10)1;
      ((float *)(gen_frame + 0x1c4))[8] = (float)(float10)1;
      ((float *)(gen_frame + 0x1c4))[6] = (float)fVar5;
      ((float *)(gen_frame + 0x1c4))[7] = (float)fVar5;
      (*pcVar4)(this,2,&(*(float *)(gen_frame + 0x1a8)));
    }
    F_00c47745((*(uint *)(gen_frame + 0x1e8)) ^ (uint)(uint)(gen_frame + 0x1ec));
    return 1;
  }
  *puVar1 = 0;
LAB_00cf8463: ;
  F_00c47745((*(uint *)(gen_frame + 0x1e8)) ^ (uint)(uint)(gen_frame + 0x1ec));
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf28 */
unsigned int F_00cf8730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf8730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  F_00cf9bb0((undefined *)((int)param_1 + 0x54),this + 0x144);
  F_00cf9bb0(param_1,this + 0xf0);
  F_00cf9bb0((undefined *)((int)param_1 + 0xa8),this + 0x198);
  F_00cf9bb0((undefined *)((int)param_1 + 0xfc),this + 0x1ec);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf10 */
unsigned int F_00cf8790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf8790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  if (*(int *)(this + 0xd4) == 5) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 100))))(*(int * PTR32 *)(this + 0xc),((undefined1 *)(gen_frame + 0xc)));
    if ((*(int *)(gen_frame + 0x10)) == 0) {
      *(undefined4 *)(this + 0xd4) = 6;
      F_00cf7890(this);
      return 0;
    }
    if (1000 < *(uint *)(this + 0xdc)) {
      ((code *)*(gen_code32 *)(*(int *)this + 0x40))(this);
      F_00cf7890(this);
      return 0;
    }
    F_00cf93f0(this,param_1);
    if (*(int *)(this + 0xd8) == 2) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x4c))))(*(int * PTR32 *)(this + 0xc),0,0);
      *(int *)(this + 0xdc) = *(int *)(this + 0xdc) + 1;
      F_00cf7890(this);
      return 0;
    }
  }
  else {
    F_00cf93f0(this,param_1);
  }
  F_00cf7890(this);
  return 0;
}

/* ref: FUN_00cf8850 */
uint F_00cf8850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcf8850u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
  return extraout_EAX;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf6 */
uint F_00cf88f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf88f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined * pVVar5;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x98))(this);
  if (((char)uVar2 == '\0') && (*(int *)(this + 0xd4) != 1)) {
    return uVar2;
  }
  F_00cf5630(this);
  puVar4 = param_1;
  pVVar5 = this + 0x94;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pVVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    pVVar5 = pVVar5 + 4;
  }
  *(int *)(this + 0x1c) = *(int *)(this + 0xac) + 0x20 + (int)param_1;
  iVar3 = *(int *)(this + 0xa0);
  if ((((iVar3 != 0xd) && (iVar3 != 5)) && ((iVar3 != 0xb || (*(uint *)(this + 0x94) < 0x7ff801))))
     && ((*(uint *)(this + 0x94) < 0x80000001 && (iVar3 != -1)))) {
    bVar1 = F_00cf7fa0(this,GEN_TOF(param_1),param_2);
    if (bVar1 == 0) {
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xa0))(this);
      return uVar2 & 0xffffff00;
    }
    if (*(int *)(this + 0xa0) == 6) {
      puVar4 = param_1;
      uVar2 = F_00ce93e0(param_1);
      F_00cf71c0(this,*(int *)(this + 0xac) + 0x20 + (int)param_1,uVar2 + (int)param_1,puVar4);
      *(undefined4 *)(this + 0x34) = 1;
      *(undefined4 *)(this + 0xd4) = 1;
      return 1;
    }
    F_00cf5770(this,*(int *)(this + 0xac) + 0x20 + (int)param_1,0);
    *(undefined4 *)(this + 0x34) = 1;
    *(undefined4 *)(this + 0xd4) = 1;
    return 1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xa0))(this);
  return uVar2 & 0xffffff00;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf9 */
byte F_00cf8a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf8a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  int * this_00;
  undefined4 * puVar2;
  undefined * pvVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined * pVVar7;
  
  F_00cf5630(this);
  this_00 = (int *)F_00cd7cc0(*(undefined * PTR32 *)(this + 8));
  puVar2 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*this_00 + 0x14))(this_00,0)));
  puVar6 = puVar2;
  pVVar7 = this + 0x94;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pVVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    pVVar7 = pVVar7 + 4;
  }
  iVar5 = *(int *)(this + 0xa0);
  if (iVar5 != -1) {
    if (iVar5 == 6) {
      *(undefined1 *)(this_00 + 0x33) = 1;
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this_00 + 0x2d));
      this_00[0x2b] = this_00[0x29];
      this_00[0x2c] = this_00[0x2a];
      if ((char)this_00[0x33] != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this_00 + 0x2d));
      }
      pvVar3 = (undefined *)F_00cf9ab0(this_00 + 0x29,0x38,4);
      if (pvVar3 == (undefined *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = F_00cff5e0(pvVar3,this_00);
      }
      *(uint *)(this + 0x18) = uVar4;
      uVar4 = F_00ce9400(puVar2);
      *(uint *)(this + 0x240) = uVar4;
      if ((uVar4 != 0) && (*(int *)(uVar4 + 0x10) != 0)) {
        *(undefined2 *)(this + 0x248) = 0;
        *(undefined4 *)(this + 0x24c) = 0;
        *(uint *)(this + 0x244) = uVar4 + 0x14;
      }
    }
    else {
      if (iVar5 != 0xc) goto LAB_00cf8b73;
      F_00cf9b60(this_00);
      pvVar3 = (undefined *)F_00cf9ab0(this_00 + 0x29,0x18,4);
      if (pvVar3 == (undefined *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = F_00cff240(pvVar3,this_00);
      }
      *(uint *)(this + 0x18) = uVar4;
    }
    bVar1 = F_00cf7fa0(this,GEN_TOF(puVar2),param_2);
    if (bVar1 != 0) {
      *(undefined4 *)(this + 0x34) = 3;
      *(undefined4 *)(this + 0xd4) = 1;
      return 1;
    }
  }
LAB_00cf8b73: ;
  ((code *)*(gen_code32 *)(*(int *)this + 0xa0))(this);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf7 */
byte F_00cf8b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcf8b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
    REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcf8850));
  }
  ((code *)REFG(gen_code32, 0x15d861c))("false","[sd][driver][voice]SetStreamAudioData is not use","XA2\\VoiceXA2.cpp",
                  0x180,"SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::SetStreamAudioData");
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf20 */
uint F_00cf8be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf8be0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  if (4 < (byte)param_1) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcf8850));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("carrier < Oscillator::NUM_CARRIER_TYPES",&REFG(undefined, 0x1130c7d),"XA2\\VoiceXA2.cpp",
                    0x50e,"SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::SetModulationMode");
  }
  *(uint *)(this + (uint)(byte)param_1 * 0x54 + 0xec) = param_2 & 0xff;
  return param_2 & 0xff;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf21 */
uint F_00cf8c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf8c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (4 < (byte)param_1) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcf8850));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("carrier < Oscillator::NUM_CARRIER_TYPES",&REFG(undefined, 0x1130c7e),"XA2\\VoiceXA2.cpp",
                    0x519,"SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::DisableModulation");
  }
  uVar1 = F_00cea740(this + (uint)(byte)param_1 * 0x54 + 0x9c);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf22 */
uint F_00cf8cc0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf8cc0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  if (4 < (byte)param_2) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcf8850));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("carrier < Oscillator::NUM_CARRIER_TYPES",&REFG(undefined, 0x1130c7f),"XA2\\VoiceXA2.cpp",
                    0x524,"SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::SetModulationDepth");
  }
  uVar1 = F_00ceaa80((uint)(byte)param_2 * 0x54 + 0x9c + param_1,param_3,param_4);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf23 */
uint F_00cf8d40(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xcf8d40u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined * this;
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  
  if (4 < (byte)param_2) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcf8850));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("carrier < Oscillator::NUM_CARRIER_TYPES",&REFG(undefined, 0x1130cc2),"XA2\\VoiceXA2.cpp",
                    0x52f,"SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::AddModulationDepth");
  }
  this = (undefined *)((uint)(byte)param_2 * 0x54 + 0x9c + param_1);
  fVar2 = (float10)F_00ceaab0(this);
  param_3 = (float)(fVar2 + (float10)param_3);
  fVar2 = (float10)1;
  fVar3 = (float10)param_3;
  if ((fVar2 <= fVar3 && ((!GEN_ISNAN(fVar3) && !GEN_ISNAN(fVar2)) && fVar3 != fVar2)) ||
     (fVar2 = (float10)0, fVar3 <= fVar2 && ((!GEN_ISNAN(fVar2) && !GEN_ISNAN(fVar3)) && fVar2 != fVar3))) {
    param_3 = (float)fVar2;
  }
  uVar1 = F_00ceaa80(this,param_3,0);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf24 */
unsigned int F_00cf8df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf8df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (4 < (byte)param_1) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcf8850));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("carrier < Oscillator::NUM_CARRIER_TYPES",&REFG(undefined, 0x1130cc3),"XA2\\VoiceXA2.cpp",
                    0x541,"SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::GetModulationDepth");
  }
  F_00ceaab0(this + (uint)(byte)param_1 * 0x54 + 0x9c);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf25 */
uint F_00cf8e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf8e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (4 < (byte)param_1) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcf8850));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("carrier < Oscillator::NUM_CARRIER_TYPES",&REFG(undefined, 0x1130cf5),"XA2\\VoiceXA2.cpp",
                    0x54c,"SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::SetModulationSpeed");
  }
  uVar1 = F_00ceaac0(this + (uint)(byte)param_1 * 0x54 + 0x9c,param_2,param_3);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf26 */
uint F_00cf8ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf8ed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  if (4 < (byte)param_1) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcf8850));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("carrier < Oscillator::NUM_CARRIER_TYPES",&REFG(undefined, 0x1130cf6),"XA2\\VoiceXA2.cpp",
                    0x557,"SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::AddModulationSpeed");
  }
  uVar1 = F_00ceab20(this + (uint)(byte)param_1 * 0x54 + 0x9c);
  uVar1 = F_00ceaac0(this + (uint)(byte)param_1 * 0x54 + 0x9c,param_2 + uVar1,0);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf27 */
uint F_00cf8f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf8f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (4 < (byte)param_1) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcf8850));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("carrier < Oscillator::NUM_CARRIER_TYPES",&REFG(undefined, 0x1130cf7),"XA2\\VoiceXA2.cpp",
                    0x566,"SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::GetModulationSpeed");
  }
  uVar1 = F_00ceab20(this + (uint)(byte)param_1 * 0x54 + 0x9c);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf1 */
uint F_00cf8fd0(void)
{
  GEN_ENTER(0xcf8fd0u, 0u, 0u, 0u, 0u);
  return 0xffffffff;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf2 */
byte F_00cf8fe0(void)
{
  GEN_ENTER(0xcf8fe0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf3 */
byte F_00cf8ff0(void)
{
  GEN_ENTER(0xcf8ff0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf7 */
byte F_00cf9000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcf9000u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf8 */
byte F_00cf9010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf9010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf9 */
byte F_00cf9020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf9020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf34 */
unsigned int F_00cf9030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf9030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf45 */
unsigned int F_00cf9040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf9040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf46 */
unsigned int F_00cf9050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcf9050u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf47 */
uint F_00cf9060(void)
{
  GEN_ENTER(0xcf9060u, 0u, 0u, 0u, 0u);
  return 0xffffffff;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf48 */
unsigned int F_00cf9070(void)
{
  GEN_ENTER(0xcf9070u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf49 */
unsigned int F_00cf9080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf9080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf50 */
unsigned int F_00cf9090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf9090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf51 */
unsigned int F_00cf90a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcf90a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf52 */
uint F_00cf90b0(void)
{
  GEN_ENTER(0xcf90b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf53 */
unsigned int F_00cf90c0(void)
{
  GEN_ENTER(0xcf90c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf54 */
uint F_00cf90d0(void)
{
  GEN_ENTER(0xcf90d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf0 */
uint F_00cf90e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf90e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[55])REFP(0x1131164));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cf9110 */
uint F_00cf9110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf9110u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x50) = param_2;
  return param_2;
}

/* ref: FUN_00cf9170 */
uint F_00cf9170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf9170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 != 0) {
    *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x1131288);
    F_00ccd4d0((undefined *)((int)this + 4),0);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x1131244));
  return (uint)this;
}

/* ref: FUN_00cf91c0 */
unsigned int F_00cf91c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcf91c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined * PTR32 * PTR32 *)(in_ecx + 4) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(in_ecx + 0x50);
  F_00cccb40(in_ecx + 0x2c);
  F_00cccb40(in_ecx + 8);
  *(undefined * PTR32 * PTR32 *)(in_ecx + 4) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return 0;
}

/* ref: FUN_00cf91f0 */
uint F_00cf91f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf91f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 != 0) {
    *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x11312d8);
    F_00ccd4d0((undefined *)((int)this + 4),0);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x1131294));
  return (uint)this;
}

/* ref: FUN_00cf9240 */
unsigned int F_00cf9240(unsigned int gen_a0)
{
  GEN_ENTER(0xcf9240u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined * PTR32 * PTR32 *)(in_ecx + 4) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(in_ecx + 0x50);
  F_00cccb40(in_ecx + 0x2c);
  F_00cccb40(in_ecx + 8);
  *(undefined * PTR32 * PTR32 *)(in_ecx + 4) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return 0;
}

/* ref: FUN_00cf9270 */
uint F_00cf9270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf9270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 != 0) {
    *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x1131328);
    F_00ccd4d0((undefined *)((int)this + 4),0);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x11312e4));
  return (uint)this;
}

/* ref: FUN_00cf92c0 */
unsigned int F_00cf92c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcf92c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined * PTR32 * PTR32 *)(in_ecx + 4) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(in_ecx + 0x50);
  F_00cccb40(in_ecx + 0x2c);
  F_00cccb40(in_ecx + 8);
  *(undefined * PTR32 * PTR32 *)(in_ecx + 4) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf4 */
uint F_00cf9310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf9310u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf5 */
uint F_00cf9320(unsigned int gen_a0)
{
  GEN_ENTER(0xcf9320u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf38 */
uint F_00cf9330(unsigned int gen_a0)
{
  GEN_ENTER(0xcf9330u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(int *)(in_ecx + 0xd4) != 6) && (*(int *)(in_ecx + 0xd4) != 0)) {
    return 0;
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf39 */
uint F_00cf9350(unsigned int gen_a0)
{
  GEN_ENTER(0xcf9350u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(int *)(in_ecx + 0xd4) != 1) && (*(int *)(in_ecx + 0xd4) != 0)) {
    return 0;
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf44 */
byte F_00cf9370(unsigned int gen_a0)
{
  GEN_ENTER(0xcf9370u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x98);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf52 */
uint F_00cf9380(unsigned int gen_a0)
{
  GEN_ENTER(0xcf9380u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xe0);
}

/* ref: FUN_00cf9390 */
unsigned int F_00cf9390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf9390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined1 *)((int)this + 0x20) = *(undefined1 *)(param_1 + 0x20);
  *(undefined1 *)((int)this + 0x21) = *(undefined1 *)(param_1 + 0x21);
  *(undefined1 *)((int)this + 0x22) = *(undefined1 *)(param_1 + 0x22);
  *(undefined1 *)((int)this + 0x23) = *(undefined1 *)(param_1 + 0x23);
  return 0;
}

/* ref: FUN_00cf93f0 */
unsigned int F_00cf93f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf93f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  byte bVar4;
  float fVar5;
  
  if (*(int *)((int)param_1 + 0xc) != 0) {
    fVar3 = (float10)1;
    fVar2 = (float10)*(float *)((int)param_1 + 0x40);
    if ((fVar2 <= fVar3 && ((!GEN_ISNAN(fVar3) && !GEN_ISNAN(fVar2)) && fVar3 != fVar2)) ||
       (bVar4 = F_00cea9b0((undefined *)((int)param_1 + 0xf0)), bVar4 != 0)) {
      iVar1 = **(int * PTR32 *)((int)param_1 + 0xc);
      fVar5 = F_00cea780((undefined *)((int)param_1 + 0xf0));
      ((code *)*(gen_code32 *)(iVar1 + 0x30))
                (*(undefined4 *)((int)param_1 + 0xc),
                 (undefined4)
                 gen_fl2bits(((float)GEN_TOF((((float10)*(float *)((int)param_1 + 0x44) *
                                     (float10)*(float *)((int)param_1 + 0x40)) *
                                    ((float10)fVar5 + (float10)REFG(double, 0x1088130)))))));
      F_00cea9f0((int)param_1 + 0xf0,param_2);
    }
    bVar4 = F_00cea9b0((undefined *)((int)param_1 + 0x144));
    if (bVar4 != 0) {
      iVar1 = **(int * PTR32 *)((int)param_1 + 0xc);
      fVar5 = F_00cea780((undefined *)((int)param_1 + 0x144));
      ((code *)*(gen_code32 *)(iVar1 + 0x68))
                (*(undefined4 *)((int)param_1 + 0xc),
                 (undefined4)
                 gen_fl2bits(((float)GEN_TOF((((float10)fVar5 + (float10)REFG(double, 0x1088130)) *
                                    (float10)*(float *)((int)param_1 + 0x48))))));
      F_00cea9f0((int)param_1 + 0x144,param_2);
    }
    bVar4 = F_00cea9b0((undefined *)((int)param_1 + 0x198));
    if ((bVar4 != 0) || (bVar4 = F_00cea9b0((undefined *)((int)param_1 + 0x1ec)), bVar4 != 0)) {
      F_00cf5f80(param_1);
      F_00cea9f0((int)param_1 + 0x198,param_2);
      F_00cea9f0((int)param_1 + 0x1ec,param_2);
    }
  }
  return 0;
}

/* ref: FUN_00cf9500 */
uint F_00cf9500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf9500u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  if (param_3 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x112a2b8);
    *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = &REFG(undefined * PTR32, 0x112a2b0);
    F_00ccd4d0((undefined *)((int)this + 0x18),0);
  }
  F_00cd0850(this,param_1,param_2,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a12c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a26c));
  *((int *)GEN_TOP((*(int *)(*(int *)this + 4) + -4 + (int)this))) = *(int *)(*(int *)this + 4) + -0x18;
  return (uint)this;
}

/* ref: FUN_00cf9570 */
uint F_00cf9570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf9570u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  if (param_3 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x112a310);
    *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = &REFG(undefined * PTR32, 0x112a308);
    F_00ccd4d0((undefined *)((int)this + 0x18),0);
  }
  F_00cd0850(this,param_1,param_2,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a17c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a2c4));
  *((int *)GEN_TOP((*(int *)(*(int *)this + 4) + -4 + (int)this))) = *(int *)(*(int *)this + 4) + -0x18;
  return (uint)this;
}

/* ref: FUN_00cf95e0 */
uint F_00cf95e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf95e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  if (param_3 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x112a368);
    *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = &REFG(undefined * PTR32, 0x112a360);
    F_00ccd4d0((undefined *)((int)this + 0x18),0);
  }
  F_00cd0850(this,param_1,param_2,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a1cc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a31c));
  *((int *)GEN_TOP((*(int *)(*(int *)this + 4) + -4 + (int)this))) = *(int *)(*(int *)this + 4) + -0x18;
  return (uint)this;
}

/* ref: FUN_00cf9650 */
uint F_00cf9650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf9650u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  if (param_3 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x112a3c0);
    *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = &REFG(undefined * PTR32, 0x112a3b8);
    F_00ccd4d0((undefined *)((int)this + 0x18),0);
  }
  F_00cd0850(this,param_1,param_2,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a21c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a374));
  *((int *)GEN_TOP((*(int *)(*(int *)this + 4) + -4 + (int)this))) = *(int *)(*(int *)this + 4) + -0x18;
  return (uint)this;
}

/* ref: FUN_00cf96c0 */
uint F_00cf96c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf96c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  if (param_3 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x1131488);
    *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = &REFG(undefined * PTR32, 0x1131480);
    F_00ccd4d0((undefined *)((int)this + 0x18),0);
  }
  F_00cd0850(this,param_1,param_2,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[17])REFP(0x1131244));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x113143c));
  *((int *)GEN_TOP((*(int *)(*(int *)this + 4) + -4 + (int)this))) = *(int *)(*(int *)this + 4) + -0x18;
  return (uint)this;
}

/* ref: FUN_00cf9730 */
uint F_00cf9730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf9730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cf9c60(((undefined *)GEN_TOP(((int)this - *(int *)((int)this + -4)))),param_1);
  return uVar1;
}

/* ref: FUN_00cf9750 */
uint F_00cf9750(unsigned int gen_a0)
{
  GEN_ENTER(0xcf9750u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ccd440();
  return uVar1;
}

/* ref: FUN_00cf9760 */
unsigned int F_00cf9760(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, float gen_a5, float gen_a6, float gen_a7)
{
  GEN_ENTER(0xcf9760u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined4 in_ecx = (undefined4)gen_a0;
  float in_xmm3 = (float)gen_a1;
  float in_xmm5 = (float)gen_a2;
  float in_xmm6 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  F_00ccd450(in_xmm3,in_xmm5,in_xmm6,param_5,param_6,param_7,param_8);
  return 0;
}

/* ref: FUN_00cf9770 */
uint F_00cf9770(unsigned int gen_a0)
{
  GEN_ENTER(0xcf9770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cd0920((undefined *)((int)this + 0x14));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 100);
  F_00cccb40((int)this + 0x40);
  F_00cccb40((int)this + 0x1c);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return uVar1;
}

/* ref: FUN_00cf97b0 */
uint F_00cf97b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf97b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 0x4c);
  F_00cccb40((int)this + 0x28);
  F_00cccb40((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_1 & 1) != 0) && ((int)this + -4 != 0)) {
    F_00406810((int)this + -4);
  }
  return (int)this - 4;
}

/* ref: FUN_00cf9800 */
uint F_00cf9800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf9800u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  if (param_3 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x11314e0);
    *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = &REFG(undefined * PTR32, 0x11314d8);
    F_00ccd4d0((undefined *)((int)this + 0x18),0);
  }
  F_00cd0850(this,param_1,param_2,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[17])REFP(0x1131294));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x1131494));
  *((int *)GEN_TOP((*(int *)(*(int *)this + 4) + -4 + (int)this))) = *(int *)(*(int *)this + 4) + -0x18;
  return (uint)this;
}

/* ref: FUN_00cf9870 */
unsigned int F_00cf9870(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, float gen_a5, float gen_a6, float gen_a7)
{
  GEN_ENTER(0xcf9870u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined4 in_ecx = (undefined4)gen_a0;
  float in_xmm3 = (float)gen_a1;
  float in_xmm5 = (float)gen_a2;
  float in_xmm6 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  F_00ccd490(in_xmm3,in_xmm5,in_xmm6,param_5,param_6,param_7,param_8);
  return 0;
}

/* ref: FUN_00cf9880 */
uint F_00cf9880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf9880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cf9cb0(((undefined *)GEN_TOP(((int)this - *(int *)((int)this + -4)))),param_1);
  return uVar1;
}

/* ref: FUN_00cf98a0 */
uint F_00cf98a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcf98a0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ccd480();
  return uVar1;
}

/* ref: FUN_00cf98b0 */
uint F_00cf98b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcf98b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cd0920((undefined *)((int)this + 0x14));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 100);
  F_00cccb40((int)this + 0x40);
  F_00cccb40((int)this + 0x1c);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return uVar1;
}

/* ref: FUN_00cf98f0 */
uint F_00cf98f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf98f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 0x4c);
  F_00cccb40((int)this + 0x28);
  F_00cccb40((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_1 & 1) != 0) && ((int)this + -4 != 0)) {
    F_00406810((int)this + -4);
  }
  return (int)this - 4;
}

/* ref: FUN_00cf9940 */
uint F_00cf9940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcf9940u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  if (param_3 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x1131538);
    *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = &REFG(undefined * PTR32, 0x1131530);
    F_00ccd4d0((undefined *)((int)this + 0x18),0);
  }
  F_00cd0850(this,param_1,param_2,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[17])REFP(0x11312e4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x11314ec));
  *((int *)GEN_TOP((*(int *)(*(int *)this + 4) + -4 + (int)this))) = *(int *)(*(int *)this + 4) + -0x18;
  return (uint)this;
}

/* ref: FUN_00cf99b0 */
uint F_00cf99b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf99b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cf9d00(((undefined *)GEN_TOP(((int)this - *(int *)((int)this + -4)))),param_1);
  return uVar1;
}

/* ref: FUN_00cf99d0 */
uint F_00cf99d0(unsigned int gen_a0)
{
  GEN_ENTER(0xcf99d0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ccd4c0();
  return uVar1;
}

/* ref: FUN_00cf99e0 */
unsigned int F_00cf99e0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcf99e0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float param_1 = (float)gen_a1;
  float param_2 = (float)gen_a2;
  float param_3 = (float)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00ccdbe0((int)this + -4,param_1,param_2,param_3,param_4);
  return 0;
}

/* ref: FUN_00cf99f0 */
uint F_00cf99f0(unsigned int gen_a0)
{
  GEN_ENTER(0xcf99f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cd0920((undefined *)((int)this + 0x14));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 100);
  F_00cccb40((int)this + 0x40);
  F_00cccb40((int)this + 0x1c);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return uVar1;
}

/* ref: FUN_00cf9a30 */
uint F_00cf9a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf9a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 0x4c);
  F_00cccb40((int)this + 0x28);
  F_00cccb40((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_1 & 1) != 0) && ((int)this + -4 != 0)) {
    F_00406810((int)this + -4);
  }
  return (int)this - 4;
}

/* ref: FUN_00cf9a80 */
unsigned int F_00cf9a80(unsigned int gen_a0)
{
  GEN_ENTER(0xcf9a80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined1 *)((int)this + 0x28) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  *(undefined4 *)((int)this + 8) = *(undefined4 *)this;
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)this + 4);
  if (*(char *)((int)this + 0x28) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  }
  return 0;
}

/* ref: FUN_00cf9ab0 */
uint F_00cf9ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf9ab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x10);
  *(undefined1 *)((int)this + 0x28) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar2 = *(int *)((int)this + 8);
  if (iVar2 == 0) {
    if (*(char *)((int)this + 0x28) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  uVar4 = ((iVar2 + -1 + param_2) / param_2) * param_2;
  iVar1 = uVar4 + param_1;
  uVar3 = iVar1 - iVar2;
  if (*(uint *)((int)this + 0xc) < uVar3) {
    if (*(char *)((int)this + 0x28) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  *(int *)((int)this + 8) = iVar1;
  *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) - uVar3;
  if (*(char *)((int)this + 0x28) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return uVar4;
}

/* ref: FUN_00cf9b60 */
unsigned int F_00cf9b60(unsigned int gen_a0)
{
  GEN_ENTER(0xcf9b60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined1 *)((int)this + 0xcc) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xb4));
  *(undefined4 *)((int)this + 0xac) = *(undefined4 *)((int)this + 0xa4);
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)((int)this + 0xa8);
  if (*(char *)((int)this + 0xcc) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xb4));
  }
  return 0;
}

/* ref: FUN_00cf9ba0 */
uint F_00cf9ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcf9ba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cf9ab0((undefined *)((int)this + 0xa4),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00cf9bb0 */
unsigned int F_00cf9bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf9bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined1 *)((int)this + 0x24) = *(undefined1 *)(param_1 + 9);
  *(undefined1 *)((int)this + 0x25) = *(undefined1 *)((int)param_1 + 0x25);
  *(undefined1 *)((int)this + 0x26) = *(undefined1 *)((int)param_1 + 0x26);
  *(undefined1 *)((int)this + 0x27) = *(undefined1 *)((int)param_1 + 0x27);
  *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
  *(undefined4 *)((int)this + 0x30) = param_1[0xc];
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  *(undefined4 *)((int)this + 0x38) = param_1[0xe];
  *(undefined4 *)((int)this + 0x3c) = param_1[0xf];
  *(undefined4 *)((int)this + 0x40) = param_1[0x10];
  *(undefined4 *)((int)this + 0x44) = param_1[0x11];
  *(undefined1 *)((int)this + 0x48) = *(undefined1 *)(param_1 + 0x12);
  *(undefined1 *)((int)this + 0x49) = *(undefined1 *)((int)param_1 + 0x49);
  *(undefined1 *)((int)this + 0x4a) = *(undefined1 *)((int)param_1 + 0x4a);
  *(undefined1 *)((int)this + 0x4b) = *(undefined1 *)((int)param_1 + 0x4b);
  *(undefined4 *)((int)this + 0x4c) = param_1[0x13];
  *(undefined4 *)((int)this + 0x50) = param_1[0x14];
  return 0;
}

/* ref: FUN_00cf9c60 */
uint F_00cf9c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf9c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (int)this - 0x18;
  F_00cd0920((undefined *)((int)this + -4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 0x4c);
  F_00cccb40((int)this + 0x28);
  F_00cccb40((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_1 & 1) != 0) && (uVar1 != 0)) {
    F_00406810(uVar1);
  }
  return uVar1;
}

/* ref: FUN_00cf9cb0 */
uint F_00cf9cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf9cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (int)this - 0x18;
  F_00cd0920((undefined *)((int)this + -4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 0x4c);
  F_00cccb40((int)this + 0x28);
  F_00cccb40((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_1 & 1) != 0) && (uVar1 != 0)) {
    F_00406810(uVar1);
  }
  return uVar1;
}

/* ref: FUN_00cf9d00 */
uint F_00cf9d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf9d00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (int)this - 0x18;
  F_00cd0920((undefined *)((int)this + -4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 0x4c);
  F_00cccb40((int)this + 0x28);
  F_00cccb40((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_1 & 1) != 0) && (uVar1 != 0)) {
    F_00406810(uVar1);
  }
  return uVar1;
}

/* ref: FUN_00cf9d50 */
uint F_00cf9d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcf9d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cf7ed0(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cf9d75 */
unsigned int F_00cf9d75(unsigned int gen_a0)
{
  GEN_ENTER(0xcf9d75u, gen_a0, 0u, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float * pfVar6;
  float * pfVar7;
  uint uVar8;
  uint uVar9;
  float * pfVar10;
  uint uVar11;
  uint uVar12;
  float * pfVar13;
  float10 fVar14;
  float fVar15;
  uint local_10;
  uint local_c;
  int local_8;
  
  iVar5 = (int)gen_fl2bits(param_1[8]);
  uVar11 = (uint)gen_fl2bits(param_1[7]);
  uVar12 = (uint)gen_fl2bits(param_1[6]);
  local_8 = (int)gen_fl2bits(param_1[1]);
  if (param_1[9] != 0.0) {
    uVar12 = 1;
    uVar11 = 1;
  }
  pfVar6 = ((float *)(uintptr_t)gen_fl2bits((float)(param_1[3])));
  if (pfVar6 == (float *)0x0) {
    local_10 = (uint)gen_fl2bits(param_1[5]) / uVar12;
    if (local_10 != 0) {
      pfVar6 = ((float *)(uintptr_t)gen_fl2bits((float)(param_1[2])));
      param_1 = ((float *)(uintptr_t)gen_fl2bits((float)(*param_1)));
      do {
        uVar8 = 0;
        if (uVar11 != 0) {
          fVar2 = *param_1;
          pfVar7 = pfVar6;
          do {
            fVar15 = fVar2 * *pfVar7;
            uVar9 = 1;
            pfVar7 = pfVar7 + 1;
            if (1 < uVar12) {
              do {
                pfVar10 = param_1 + uVar9;
                fVar3 = *pfVar7;
                pfVar7 = pfVar7 + 1;
                uVar9 = uVar9 + 1;
                fVar15 = fVar15 + *pfVar10 * fVar3;
              } while (uVar9 < uVar12);
            }
            if (iVar5 != 0) {
              fVar15 = fVar15 + *(float *)(local_8 + uVar8 * 4);
            }
            *(float *)(local_8 + uVar8 * 4) = fVar15;
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar11);
        }
        param_1 = param_1 + uVar12;
        local_8 = local_8 + uVar11 * 4;
        local_10 = local_10 - 1;
      } while (local_10 != 0);
    }
  }
  else {
    uVar8 = (uint)gen_fl2bits(param_1[5]) / uVar12;
    local_10 = 0;
    if (uVar8 != 0) {
      pfVar7 = ((float *)(uintptr_t)gen_fl2bits((float)(param_1[2])));
      param_1 = ((float *)(uintptr_t)gen_fl2bits((float)(*param_1)));
      do {
        local_c = 0;
        if (uVar11 != 0) {
          fVar14 = (float10)(int)local_10;
          fVar2 = *param_1;
          if ((int)local_10 < 0) {
            fVar14 = fVar14 + (float10)*(float *)&REFG(undefined, 0x1088110);
          }
          pfVar10 = pfVar6;
          pfVar13 = pfVar7;
          do {
            fVar15 = *pfVar10;
            fVar3 = *pfVar13;
            uVar9 = 1;
            pfVar10 = pfVar10 + 1;
            pfVar13 = pfVar13 + 1;
            fVar15 = (fVar15 * (float)fVar14 + fVar3) * fVar2;
            if (1 < uVar12) {
              do {
                fVar3 = *pfVar10;
                fVar4 = *pfVar13;
                pfVar1 = param_1 + uVar9;
                pfVar10 = pfVar10 + 1;
                pfVar13 = pfVar13 + 1;
                uVar9 = uVar9 + 1;
                fVar15 = fVar15 + (fVar3 * (float)fVar14 + fVar4) * *pfVar1;
              } while (uVar9 < uVar12);
            }
            if (iVar5 == 0) {
              *(float *)(local_8 + local_c * 4) = fVar15;
            }
            else {
              pfVar1 = (float *)(local_8 + local_c * 4);
              *pfVar1 = fVar15 + *pfVar1;
            }
            local_c = local_c + 1;
          } while (local_c < uVar11);
        }
        param_1 = param_1 + uVar12;
        local_8 = local_8 + uVar11 * 4;
        local_10 = local_10 + 1;
      } while (local_10 < uVar8);
    }
  }
  return 0;
}

/* ref: FUN_00cf9f10 */
unsigned int F_00cf9f10(unsigned int gen_a0)
{
  GEN_ENTER(0xcf9f10u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int iVar1;
  float * pfVar2;
  float * pfVar3;
  float * pfVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  pfVar4 = (float *)*param_1;
  pfVar3 = (float *)param_1[1];
  iVar1 = param_1[8];
  iVar5 = param_1[5];
  pfVar2 = (float *)param_1[3];
  fVar9 = *(float *)param_1[2];
  fVar8 = ((float *)param_1[2])[1];
  if (pfVar2 == (float *)0x0) {
    if (iVar5 != 0) {
      do {
        fVar6 = *pfVar4;
        iVar5 = iVar5 + -1;
        pfVar4 = pfVar4 + 1;
        fVar10 = fVar6 * fVar9;
        fVar6 = fVar6 * fVar8;
        if (iVar1 == 0) {
          *pfVar3 = fVar10;
        }
        else {
          *pfVar3 = fVar10 + *pfVar3;
          fVar6 = fVar6 + pfVar3[1];
        }
        pfVar3[1] = fVar6;
        pfVar3 = pfVar3 + 2;
      } while (iVar5 != 0);
      return 0;
    }
  }
  else {
    fVar6 = *pfVar2;
    fVar10 = pfVar2[1];
    while (iVar5 != 0) {
      fVar7 = *pfVar4;
      iVar5 = iVar5 + -1;
      pfVar4 = pfVar4 + 1;
      fVar11 = fVar7 * fVar9;
      fVar7 = fVar7 * fVar8;
      if (iVar1 == 0) {
        *pfVar3 = fVar11;
      }
      else {
        *pfVar3 = fVar11 + *pfVar3;
        fVar7 = fVar7 + pfVar3[1];
      }
      pfVar3[1] = fVar7;
      fVar9 = fVar9 + fVar6;
      pfVar3 = pfVar3 + 2;
      fVar8 = fVar10 + fVar8;
    }
  }
  return 0;
}

/* ref: FUN_00cf9fe0 */
unsigned int F_00cf9fe0(unsigned int gen_a0)
{
  GEN_ENTER(0xcf9fe0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float * pfVar7;
  float * pfVar8;
  float * pfVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  pfVar9 = (float *)param_1[2];
  pfVar8 = (float *)param_1[1];
  fVar14 = *pfVar9;
  fVar15 = pfVar9[1];
  fVar16 = pfVar9[2];
  fVar17 = pfVar9[3];
  fVar18 = pfVar9[4];
  fVar13 = pfVar9[5];
  iVar6 = param_1[8];
  pfVar9 = (float *)*param_1;
  iVar10 = param_1[5];
  pfVar7 = (float *)param_1[3];
  if (pfVar7 == (float *)0x0) {
    if (iVar10 != 0) {
      do {
        fVar11 = *pfVar9;
        iVar10 = iVar10 + -1;
        pfVar9 = pfVar9 + 1;
        if (iVar6 == 0) {
          *pfVar8 = fVar11 * fVar14;
          pfVar8[1] = fVar11 * fVar15;
          pfVar8[2] = fVar11 * fVar16;
          pfVar8[3] = fVar11 * fVar17;
          pfVar8[4] = fVar11 * fVar18;
          fVar11 = fVar11 * fVar13;
        }
        else {
          *pfVar8 = fVar11 * fVar14 + *pfVar8;
          pfVar8[1] = fVar11 * fVar15 + pfVar8[1];
          pfVar8[2] = fVar11 * fVar16 + pfVar8[2];
          pfVar8[3] = fVar11 * fVar17 + pfVar8[3];
          pfVar8[4] = fVar11 * fVar18 + pfVar8[4];
          fVar11 = fVar11 * fVar13 + pfVar8[5];
        }
        pfVar8[5] = fVar11;
        pfVar8 = pfVar8 + 6;
      } while (iVar10 != 0);
      return 0;
    }
  }
  else {
    fVar11 = *pfVar7;
    fVar1 = pfVar7[1];
    fVar2 = pfVar7[2];
    fVar3 = pfVar7[3];
    fVar4 = pfVar7[4];
    fVar5 = pfVar7[5];
    while (iVar10 != 0) {
      fVar12 = *pfVar9;
      iVar10 = iVar10 + -1;
      pfVar9 = pfVar9 + 1;
      if (iVar6 == 0) {
        *pfVar8 = fVar12 * fVar14;
        pfVar8[1] = fVar12 * fVar15;
        pfVar8[2] = fVar12 * fVar16;
        pfVar8[3] = fVar12 * fVar17;
        pfVar8[4] = fVar12 * fVar18;
        fVar12 = fVar12 * fVar13;
      }
      else {
        *pfVar8 = fVar12 * fVar14 + *pfVar8;
        pfVar8[1] = fVar12 * fVar15 + pfVar8[1];
        pfVar8[2] = fVar12 * fVar16 + pfVar8[2];
        pfVar8[3] = fVar12 * fVar17 + pfVar8[3];
        pfVar8[4] = fVar12 * fVar18 + pfVar8[4];
        fVar12 = fVar12 * fVar13 + pfVar8[5];
      }
      fVar14 = fVar14 + fVar11;
      fVar15 = fVar15 + fVar1;
      fVar16 = fVar16 + fVar2;
      fVar17 = fVar17 + fVar3;
      fVar18 = fVar18 + fVar4;
      pfVar8[5] = fVar12;
      pfVar8 = pfVar8 + 6;
      fVar13 = fVar5 + fVar13;
    }
  }
  return 0;
}

/* ref: FUN_00cfa210 */
unsigned int F_00cfa210(unsigned int gen_a0)
{
  GEN_ENTER(0xcfa210u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
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
  float * pfVar12;
  int iVar13;
  float * pfVar14;
  int iVar15;
  float * pfVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  pfVar12 = (float *)param_1[2];
  local_24 = pfVar12[4];
  fVar22 = pfVar12[3];
  fVar19 = *pfVar12;
  fVar20 = pfVar12[1];
  fVar21 = pfVar12[2];
  pfVar16 = (float *)*param_1;
  pfVar14 = (float *)param_1[1];
  iVar13 = param_1[8];
  local_20 = pfVar12[5];
  local_1c = pfVar12[6];
  local_18 = pfVar12[7];
  local_14 = pfVar12[8];
  local_10 = pfVar12[9];
  local_c = pfVar12[10];
  local_8 = pfVar12[0xb];
  pfVar12 = (float *)param_1[3];
  iVar15 = param_1[5];
  if (pfVar12 == (float *)0x0) {
    if (iVar15 != 0) {
      iVar15 = (iVar15 - 1U >> 1) + 1;
      do {
        fVar17 = *pfVar16;
        fVar1 = pfVar16[1];
        pfVar16 = pfVar16 + 2;
        fVar23 = fVar1 * fVar20 + fVar17 * fVar19;
        if (iVar13 == 0) {
          *pfVar14 = fVar23;
          pfVar14[1] = fVar1 * fVar22 + fVar17 * fVar21;
          pfVar14[2] = fVar1 * local_20 + fVar17 * local_24;
          pfVar14[3] = fVar1 * local_18 + fVar17 * local_1c;
          pfVar14[4] = fVar1 * local_10 + fVar17 * local_14;
          fVar17 = fVar1 * local_8 + fVar17 * local_c;
        }
        else {
          *pfVar14 = fVar23 + *pfVar14;
          pfVar14[1] = (fVar1 * fVar22 + fVar17 * fVar21) + pfVar14[1];
          pfVar14[2] = (fVar1 * local_20 + fVar17 * local_24) + pfVar14[2];
          pfVar14[3] = (fVar1 * local_18 + fVar17 * local_1c) + pfVar14[3];
          pfVar14[4] = (fVar1 * local_10 + fVar17 * local_14) + pfVar14[4];
          fVar17 = (fVar1 * local_8 + fVar17 * local_c) + pfVar14[5];
        }
        pfVar14[5] = fVar17;
        pfVar14 = pfVar14 + 6;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
      return 0;
    }
  }
  else {
    fVar17 = *pfVar12;
    fVar1 = pfVar12[1];
    fVar23 = pfVar12[2];
    fVar2 = pfVar12[3];
    fVar3 = pfVar12[4];
    fVar4 = pfVar12[5];
    fVar5 = pfVar12[6];
    fVar6 = pfVar12[7];
    fVar7 = pfVar12[8];
    fVar8 = pfVar12[9];
    fVar9 = pfVar12[10];
    fVar10 = pfVar12[0xb];
    if (iVar15 != 0) {
      iVar15 = (iVar15 - 1U >> 1) + 1;
      do {
        fVar18 = *pfVar16;
        fVar11 = pfVar16[1];
        pfVar16 = pfVar16 + 2;
        fVar24 = fVar11 * fVar20 + fVar18 * fVar19;
        if (iVar13 == 0) {
          *pfVar14 = fVar24;
          pfVar14[1] = fVar11 * fVar22 + fVar18 * fVar21;
          pfVar14[2] = fVar11 * local_20 + fVar18 * local_24;
          pfVar14[3] = fVar11 * local_18 + fVar18 * local_1c;
          pfVar14[4] = fVar11 * local_10 + fVar18 * local_14;
          fVar18 = fVar11 * local_8 + fVar18 * local_c;
        }
        else {
          *pfVar14 = fVar24 + *pfVar14;
          pfVar14[1] = (fVar11 * fVar22 + fVar18 * fVar21) + pfVar14[1];
          pfVar14[2] = (fVar11 * local_20 + fVar18 * local_24) + pfVar14[2];
          pfVar14[3] = (fVar11 * local_18 + fVar18 * local_1c) + pfVar14[3];
          pfVar14[4] = (fVar11 * local_10 + fVar18 * local_14) + pfVar14[4];
          fVar18 = (fVar11 * local_8 + fVar18 * local_c) + pfVar14[5];
        }
        pfVar14[5] = fVar18;
        local_24 = fVar3 + local_24;
        local_20 = fVar4 + local_20;
        fVar22 = fVar2 + fVar22;
        fVar19 = fVar19 + fVar17;
        fVar20 = fVar20 + fVar1;
        fVar21 = fVar21 + fVar23;
        local_1c = fVar5 + local_1c;
        local_18 = fVar6 + local_18;
        local_14 = fVar7 + local_14;
        local_10 = fVar8 + local_10;
        local_c = fVar9 + local_c;
        local_8 = fVar10 + local_8;
        pfVar14 = pfVar14 + 6;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
  }
  return 0;
}

/* ref: FUN_00cfa670 */
float * F_00cfa670(unsigned int gen_a0)
{
  GEN_ENTER(0xcfa670u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float * pfVar1;
  float * pfVar2;
  float * pfVar3;
  float * pfVar4;
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
  int iVar16;
  float * pfVar17;
  float * pfVar18;
  int iVar19;
  int iVar20;
  float * pfVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  pfVar17 = *(float * PTR32 *)(param_1 + 8);
  local_30 = pfVar17[2];
  fVar24 = *pfVar17;
  fVar25 = pfVar17[1];
  pfVar18 = *(float * PTR32 *)param_1;
  local_2c = pfVar17[3];
  local_28 = pfVar17[4];
  local_24 = pfVar17[5];
  local_20 = pfVar17[6];
  local_1c = pfVar17[7];
  local_18 = pfVar17[8];
  local_14 = pfVar17[9];
  local_10 = pfVar17[10];
  iVar16 = *(int *)(param_1 + 0x20);
  local_c = pfVar17[0xb];
  pfVar17 = *(float * PTR32 *)(param_1 + 0xc);
  pfVar21 = *(float * PTR32 *)(param_1 + 4);
  iVar20 = *(int *)(param_1 + 0x14);
  if (pfVar17 == (float *)0x0) {
    if (iVar20 != 0) {
      iVar19 = (iVar20 - 1U) / 6 + 1;
      do {
        pfVar17 = pfVar18 + 5;
        pfVar1 = pfVar18 + 1;
        fVar22 = *pfVar18;
        pfVar2 = pfVar18 + 2;
        pfVar3 = pfVar18 + 3;
        pfVar4 = pfVar18 + 4;
        pfVar18 = pfVar18 + 6;
        fVar26 = ((((*pfVar1 * fVar25 + fVar22 * fVar24) + *pfVar2 * local_30) + *pfVar3 * local_2c)
                 + *pfVar4 * local_28) + *pfVar17 * local_24;
        fVar22 = ((((*pfVar1 * local_1c + fVar22 * local_20) + *pfVar2 * local_18) +
                  *pfVar3 * local_14) + *pfVar4 * local_10) + *pfVar17 * local_c;
        if (iVar16 == 0) {
          *pfVar21 = fVar26;
        }
        else {
          *pfVar21 = fVar26 + *pfVar21;
          fVar22 = fVar22 + pfVar21[1];
        }
        pfVar21[1] = fVar22;
        pfVar21 = pfVar21 + 2;
        iVar19 = iVar19 + -1;
      } while (iVar19 != 0);
      return ((float *)GEN_TOP(((iVar20 - 1U) * -0x55555555)));
    }
  }
  else {
    fVar22 = *pfVar17;
    fVar26 = pfVar17[1];
    fVar5 = pfVar17[2];
    fVar6 = pfVar17[3];
    fVar7 = pfVar17[4];
    fVar8 = pfVar17[5];
    fVar9 = pfVar17[6];
    fVar10 = pfVar17[7];
    fVar11 = pfVar17[8];
    fVar12 = pfVar17[9];
    fVar13 = pfVar17[10];
    fVar14 = pfVar17[0xb];
    if (iVar20 != 0) {
      pfVar17 = ((float *)GEN_TOP(((iVar20 - 1U) * -0x55555555)));
      iVar20 = (iVar20 - 1U) / 6 + 1;
      do {
        fVar15 = pfVar18[5];
        pfVar1 = pfVar18 + 1;
        fVar23 = *pfVar18;
        pfVar2 = pfVar18 + 2;
        pfVar3 = pfVar18 + 3;
        pfVar4 = pfVar18 + 4;
        fVar27 = (((*pfVar1 * fVar25 + fVar23 * fVar24) + *pfVar2 * local_30) + *pfVar3 * local_2c)
                 + *pfVar4 * local_28;
        pfVar18 = pfVar18 + 6;
        fVar23 = ((((*pfVar1 * local_1c + fVar23 * local_20) + *pfVar2 * local_18) +
                  *pfVar3 * local_14) + *pfVar4 * local_10) + fVar15 * local_c;
        if (iVar16 == 0) {
          *pfVar21 = fVar27 + fVar15 * local_24;
        }
        else {
          *pfVar21 = (fVar27 + fVar15 * local_24) + *pfVar21;
          fVar23 = fVar23 + pfVar21[1];
        }
        pfVar21[1] = fVar23;
        local_30 = fVar5 + local_30;
        local_2c = fVar6 + local_2c;
        local_28 = fVar7 + local_28;
        fVar24 = fVar22 + fVar24;
        fVar25 = fVar26 + fVar25;
        local_24 = fVar8 + local_24;
        local_20 = fVar9 + local_20;
        local_1c = fVar10 + local_1c;
        local_18 = fVar11 + local_18;
        local_14 = fVar12 + local_14;
        local_10 = fVar13 + local_10;
        pfVar21 = pfVar21 + 2;
        iVar20 = iVar20 + -1;
        local_c = fVar14 + local_c;
      } while (iVar20 != 0);
    }
  }
  return pfVar17;
}

/* ref: FUN_00cfaa50 */
unsigned int F_00cfaa50(unsigned int gen_a0)
{
  GEN_ENTER(0xcfaa50u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
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
  float * pfVar25;
  int iVar26;
  float * pfVar27;
  int iVar28;
  float * pfVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  pfVar25 = (float *)param_1[2];
  local_58 = pfVar25[3];
  local_54 = pfVar25[4];
  local_50 = pfVar25[5];
  local_4c = pfVar25[6];
  local_48 = pfVar25[7];
  local_44 = pfVar25[8];
  local_40 = pfVar25[9];
  local_3c = pfVar25[10];
  local_38 = pfVar25[0xb];
  local_34 = pfVar25[0xc];
  fVar35 = pfVar25[1];
  fVar36 = pfVar25[2];
  fVar32 = *pfVar25;
  local_30 = pfVar25[0xd];
  pfVar29 = (float *)*param_1;
  pfVar27 = (float *)param_1[1];
  iVar26 = param_1[8];
  local_2c = pfVar25[0xe];
  local_28 = pfVar25[0xf];
  local_24 = pfVar25[0x10];
  local_20 = pfVar25[0x11];
  local_1c = pfVar25[0x12];
  local_18 = pfVar25[0x13];
  local_14 = pfVar25[0x14];
  local_10 = pfVar25[0x15];
  local_c = pfVar25[0x16];
  local_8 = pfVar25[0x17];
  pfVar25 = (float *)param_1[3];
  iVar28 = param_1[5];
  if (pfVar25 == (float *)0x0) {
    if (iVar28 != 0) {
      iVar28 = (iVar28 - 1U >> 2) + 1;
      do {
        fVar30 = pfVar29[1];
        fVar1 = *pfVar29;
        fVar2 = pfVar29[2];
        fVar3 = pfVar29[3];
        fVar37 = ((fVar30 * fVar35 + fVar1 * fVar32) + fVar2 * fVar36) + fVar3 * local_58;
        fVar33 = ((fVar30 * local_50 + fVar1 * local_54) + fVar2 * local_4c) + fVar3 * local_48;
        pfVar29 = pfVar29 + 4;
        if (iVar26 == 0) {
          *pfVar27 = fVar37;
          pfVar27[1] = fVar33;
          pfVar27[2] = ((fVar30 * local_40 + fVar1 * local_44) + fVar2 * local_3c) +
                       fVar3 * local_38;
          pfVar27[3] = ((fVar30 * local_30 + fVar1 * local_34) + fVar2 * local_2c) +
                       fVar3 * local_28;
          pfVar27[4] = ((fVar30 * local_20 + fVar1 * local_24) + fVar2 * local_1c) +
                       fVar3 * local_18;
          fVar30 = ((fVar30 * local_10 + fVar1 * local_14) + fVar2 * local_c) + fVar3 * local_8;
        }
        else {
          *pfVar27 = fVar37 + *pfVar27;
          pfVar27[1] = fVar33 + pfVar27[1];
          pfVar27[2] = (((fVar30 * local_40 + fVar1 * local_44) + fVar2 * local_3c) +
                       fVar3 * local_38) + pfVar27[2];
          pfVar27[3] = (((fVar30 * local_30 + fVar1 * local_34) + fVar2 * local_2c) +
                       fVar3 * local_28) + pfVar27[3];
          pfVar27[4] = (((fVar30 * local_20 + fVar1 * local_24) + fVar2 * local_1c) +
                       fVar3 * local_18) + pfVar27[4];
          fVar30 = (((fVar30 * local_10 + fVar1 * local_14) + fVar2 * local_c) + fVar3 * local_8) +
                   pfVar27[5];
        }
        pfVar27[5] = fVar30;
        pfVar27 = pfVar27 + 6;
        iVar28 = iVar28 + -1;
      } while (iVar28 != 0);
      return 0;
    }
  }
  else {
    fVar30 = *pfVar25;
    fVar1 = pfVar25[1];
    fVar2 = pfVar25[2];
    fVar3 = pfVar25[3];
    fVar33 = pfVar25[4];
    fVar37 = pfVar25[5];
    fVar4 = pfVar25[6];
    fVar5 = pfVar25[7];
    fVar6 = pfVar25[8];
    fVar7 = pfVar25[9];
    fVar8 = pfVar25[10];
    fVar9 = pfVar25[0xb];
    fVar10 = pfVar25[0xc];
    fVar11 = pfVar25[0xd];
    fVar12 = pfVar25[0xe];
    fVar13 = pfVar25[0xf];
    fVar14 = pfVar25[0x10];
    fVar15 = pfVar25[0x11];
    fVar16 = pfVar25[0x12];
    fVar17 = pfVar25[0x13];
    fVar18 = pfVar25[0x14];
    fVar19 = pfVar25[0x15];
    fVar20 = pfVar25[0x16];
    fVar21 = pfVar25[0x17];
    if (iVar28 != 0) {
      iVar28 = (iVar28 - 1U >> 2) + 1;
      do {
        fVar31 = pfVar29[1];
        fVar22 = *pfVar29;
        fVar23 = pfVar29[2];
        fVar24 = pfVar29[3];
        fVar38 = ((fVar31 * fVar35 + fVar22 * fVar32) + fVar23 * fVar36) + fVar24 * local_58;
        fVar34 = ((fVar31 * local_50 + fVar22 * local_54) + fVar23 * local_4c) + fVar24 * local_48;
        pfVar29 = pfVar29 + 4;
        if (iVar26 == 0) {
          *pfVar27 = fVar38;
          pfVar27[1] = fVar34;
          pfVar27[2] = ((fVar31 * local_40 + fVar22 * local_44) + fVar23 * local_3c) +
                       fVar24 * local_38;
          pfVar27[3] = ((fVar31 * local_30 + fVar22 * local_34) + fVar23 * local_2c) +
                       fVar24 * local_28;
          pfVar27[4] = ((fVar31 * local_20 + fVar22 * local_24) + fVar23 * local_1c) +
                       fVar24 * local_18;
          fVar31 = ((fVar31 * local_10 + fVar22 * local_14) + fVar23 * local_c) + fVar24 * local_8;
        }
        else {
          *pfVar27 = fVar38 + *pfVar27;
          pfVar27[1] = fVar34 + pfVar27[1];
          pfVar27[2] = (((fVar31 * local_40 + fVar22 * local_44) + fVar23 * local_3c) +
                       fVar24 * local_38) + pfVar27[2];
          pfVar27[3] = (((fVar31 * local_30 + fVar22 * local_34) + fVar23 * local_2c) +
                       fVar24 * local_28) + pfVar27[3];
          pfVar27[4] = (((fVar31 * local_20 + fVar22 * local_24) + fVar23 * local_1c) +
                       fVar24 * local_18) + pfVar27[4];
          fVar31 = (((fVar31 * local_10 + fVar22 * local_14) + fVar23 * local_c) + fVar24 * local_8)
                   + pfVar27[5];
        }
        pfVar27[5] = fVar31;
        local_58 = fVar3 + local_58;
        local_54 = fVar33 + local_54;
        local_50 = fVar37 + local_50;
        local_4c = fVar4 + local_4c;
        local_48 = fVar5 + local_48;
        local_44 = fVar6 + local_44;
        local_40 = fVar7 + local_40;
        local_3c = fVar8 + local_3c;
        local_38 = fVar9 + local_38;
        local_34 = fVar10 + local_34;
        local_30 = fVar11 + local_30;
        local_2c = fVar12 + local_2c;
        local_28 = fVar13 + local_28;
        local_24 = fVar14 + local_24;
        local_20 = fVar15 + local_20;
        fVar35 = fVar1 + fVar35;
        fVar36 = fVar2 + fVar36;
        fVar32 = fVar32 + fVar30;
        local_1c = fVar16 + local_1c;
        local_18 = fVar17 + local_18;
        local_14 = fVar18 + local_14;
        local_10 = fVar19 + local_10;
        local_c = fVar20 + local_c;
        pfVar27 = pfVar27 + 6;
        iVar28 = iVar28 + -1;
        local_8 = fVar21 + local_8;
      } while (iVar28 != 0);
    }
  }
  return 0;
}

/* ref: FUN_00cfb2a0 */
uint F_00cfb2a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcfb2a0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float * pfVar7;
  float * pfVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  
  uVar5 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(uint *)(gen_frame + 0x48)) = uVar5;
  (*(uint *)(gen_frame + 0x4)) = param_1[6];
  iVar1 = *param_1;
  uVar2 = param_1[5];
  iVar3 = param_1[1];
  iVar4 = param_1[8];
  if (param_1[9] != 0) {
    (*(uint *)(gen_frame + 0x4)) = 1;
  }
  switch((unsigned int)(uintptr_t)((*(uint *)(gen_frame + 0x4)))) {
  case 1: ;
    pfVar7 = (float *)param_1[3];
    ((float *)(gen_frame + 0x28))[0] = *(float *)param_1[2];
    if (pfVar7 != (float *)0x0) {
      ((float *)(gen_frame + 0x8))[0] = *pfVar7;
    }
    break;
  case 2: ;
    pfVar7 = (float *)param_1[2];
    ((float *)(gen_frame + 0x28))[0] = *pfVar7;
    pfVar8 = (float *)param_1[3];
    ((float *)(gen_frame + 0x28))[1] = pfVar7[3];
    if (pfVar8 != (float *)0x0) {
      ((float *)(gen_frame + 0x8))[0] = *pfVar8;
      ((float *)(gen_frame + 0x8))[1] = pfVar8[3];
    }
    break;
  case 3: ;
    pfVar7 = (float *)param_1[2];
    ((float *)(gen_frame + 0x28))[0] = *pfVar7;
    ((float *)(gen_frame + 0x28))[1] = pfVar7[4];
    pfVar8 = (float *)param_1[3];
    ((float *)(gen_frame + 0x28))[2] = pfVar7[8];
    if (pfVar8 != (float *)0x0) {
      ((float *)(gen_frame + 0x8))[0] = *pfVar8;
      ((float *)(gen_frame + 0x8))[1] = pfVar8[4];
      ((float *)(gen_frame + 0x8))[2] = pfVar8[8];
    }
    break;
  case 4: ;
    pfVar7 = (float *)param_1[2];
    ((float *)(gen_frame + 0x28))[0] = *pfVar7;
    ((float *)(gen_frame + 0x28))[1] = pfVar7[5];
    ((float *)(gen_frame + 0x28))[2] = pfVar7[10];
    pfVar8 = (float *)param_1[3];
    ((float *)(gen_frame + 0x28))[3] = pfVar7[0xf];
    if (pfVar8 != (float *)0x0) {
      ((float *)(gen_frame + 0x8))[0] = *pfVar8;
      ((float *)(gen_frame + 0x8))[1] = pfVar8[5];
      ((float *)(gen_frame + 0x8))[2] = pfVar8[10];
      ((float *)(gen_frame + 0x8))[3] = pfVar8[0xf];
    }
    break;
  case 5: ;
    pfVar7 = (float *)param_1[2];
    ((float *)(gen_frame + 0x28))[0] = *pfVar7;
    ((float *)(gen_frame + 0x28))[1] = pfVar7[6];
    ((float *)(gen_frame + 0x28))[2] = pfVar7[0xc];
    ((float *)(gen_frame + 0x28))[3] = pfVar7[0x12];
    pfVar8 = (float *)param_1[3];
    (*(float *)(gen_frame + 0x38)) = pfVar7[0x18];
    if (pfVar8 != (float *)0x0) {
      ((float *)(gen_frame + 0x8))[0] = *pfVar8;
      ((float *)(gen_frame + 0x8))[1] = pfVar8[6];
      ((float *)(gen_frame + 0x8))[2] = pfVar8[0xc];
      ((float *)(gen_frame + 0x8))[3] = pfVar8[0x12];
      (*(float *)(gen_frame + 0x18)) = pfVar8[0x18];
    }
    break;
  case 6: ;
    pfVar7 = (float *)param_1[2];
    ((float *)(gen_frame + 0x28))[0] = *pfVar7;
    ((float *)(gen_frame + 0x28))[1] = pfVar7[7];
    ((float *)(gen_frame + 0x28))[2] = pfVar7[0xe];
    ((float *)(gen_frame + 0x28))[3] = pfVar7[0x15];
    (*(float *)(gen_frame + 0x38)) = pfVar7[0x1c];
    pfVar8 = (float *)param_1[3];
    (*(float *)(gen_frame + 0x3c)) = pfVar7[0x23];
    if (pfVar8 != (float *)0x0) {
      ((float *)(gen_frame + 0x8))[0] = *pfVar8;
      ((float *)(gen_frame + 0x8))[1] = pfVar8[7];
      ((float *)(gen_frame + 0x8))[2] = pfVar8[0xe];
      ((float *)(gen_frame + 0x8))[3] = pfVar8[0x15];
      (*(float *)(gen_frame + 0x18)) = pfVar8[0x1c];
      (*(float *)(gen_frame + 0x1c)) = pfVar8[0x23];
    }
  }
  uVar6 = 0;
  uVar9 = 0;
  if (param_1[3] == 0) {
    if (3 < (int)uVar2) {
      pfVar7 = (float *)(iVar3 + 4);
      pfVar8 = (float *)(iVar1 + 0xc);
      iVar10 = (uVar2 - 4 >> 2) + 1;
      uVar9 = iVar10 * 4;
      do {
        if (iVar4 == 0) {
          pfVar7[-1] = ((float *)(gen_frame + 0x28))[(int)(uVar6)] * pfVar8[-3];
        }
        else {
          pfVar7[-1] = pfVar7[-1] + ((float *)(gen_frame + 0x28))[(int)(uVar6)] * pfVar8[-3];
        }
        uVar6 = uVar6 + 1;
        if ((*(uint *)(gen_frame + 0x4)) <= uVar6) {
          uVar6 = 0;
        }
        fVar11 = ((float *)(gen_frame + 0x28))[(int)(uVar6)] * *((float *)GEN_TOP(((iVar1 - iVar3) + (int)pfVar7)));
        if (iVar4 == 0) {
          *pfVar7 = fVar11;
        }
        else {
          *pfVar7 = *pfVar7 + fVar11;
        }
        uVar6 = uVar6 + 1;
        if ((*(uint *)(gen_frame + 0x4)) <= uVar6) {
          uVar6 = 0;
        }
        if (iVar4 == 0) {
          pfVar7[1] = ((float *)(gen_frame + 0x28))[(int)(uVar6)] * pfVar8[-1];
        }
        else {
          pfVar7[1] = pfVar7[1] + ((float *)(gen_frame + 0x28))[(int)(uVar6)] * pfVar8[-1];
        }
        uVar6 = uVar6 + 1;
        if ((*(uint *)(gen_frame + 0x4)) <= uVar6) {
          uVar6 = 0;
        }
        fVar11 = ((float *)(gen_frame + 0x28))[(int)(uVar6)] * *pfVar8;
        if (iVar4 != 0) {
          fVar11 = fVar11 + pfVar7[2];
        }
        uVar6 = uVar6 + 1;
        pfVar7[2] = fVar11;
        if ((*(uint *)(gen_frame + 0x4)) <= uVar6) {
          uVar6 = 0;
        }
        pfVar7 = pfVar7 + 4;
        pfVar8 = pfVar8 + 4;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    if (uVar9 < uVar2) {
      iVar10 = uVar2 - uVar9;
      pfVar7 = (float *)(iVar3 + uVar9 * 4);
      do {
        fVar11 = ((float *)(gen_frame + 0x28))[(int)(uVar6)] * *((float *)GEN_TOP(((int)pfVar7 + (iVar1 - iVar3))));
        if (iVar4 == 0) {
          *pfVar7 = fVar11;
        }
        else {
          *pfVar7 = *pfVar7 + fVar11;
        }
        uVar6 = uVar6 + 1;
        if ((*(uint *)(gen_frame + 0x4)) <= uVar6) {
          uVar6 = 0;
        }
        pfVar7 = pfVar7 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      F_00c47745(uVar5 ^ (uint)(uint)(gen_frame + 0x4c));
      return uVar6;
    }
  }
  else {
    if (3 < (int)uVar2) {
      pfVar7 = (float *)(iVar1 + 0xc);
      pfVar8 = (float *)(iVar3 + 4);
      iVar10 = (uVar2 - 4 >> 2) + 1;
      uVar9 = iVar10 * 4;
      do {
        fVar11 = pfVar7[-3] * ((float *)(gen_frame + 0x28))[(int)(uVar6)];
        ((float *)(gen_frame + 0x28))[(int)(uVar6)] = ((float *)(gen_frame + 0x8))[(int)(uVar6)] + ((float *)(gen_frame + 0x28))[(int)(uVar6)];
        if (iVar4 == 0) {
          pfVar8[-1] = fVar11;
        }
        else {
          pfVar8[-1] = pfVar8[-1] + fVar11;
        }
        uVar6 = uVar6 + 1;
        if ((*(uint *)(gen_frame + 0x4)) <= uVar6) {
          uVar6 = 0;
        }
        fVar11 = *((float *)GEN_TOP(((int)pfVar8 + (iVar1 - iVar3)))) * ((float *)(gen_frame + 0x28))[(int)(uVar6)];
        ((float *)(gen_frame + 0x28))[(int)(uVar6)] = ((float *)(gen_frame + 0x8))[(int)(uVar6)] + ((float *)(gen_frame + 0x28))[(int)(uVar6)];
        if (iVar4 == 0) {
          *pfVar8 = fVar11;
        }
        else {
          *pfVar8 = *pfVar8 + fVar11;
        }
        uVar6 = uVar6 + 1;
        if ((*(uint *)(gen_frame + 0x4)) <= uVar6) {
          uVar6 = 0;
        }
        fVar11 = pfVar7[-1] * ((float *)(gen_frame + 0x28))[(int)(uVar6)];
        ((float *)(gen_frame + 0x28))[(int)(uVar6)] = ((float *)(gen_frame + 0x8))[(int)(uVar6)] + ((float *)(gen_frame + 0x28))[(int)(uVar6)];
        if (iVar4 == 0) {
          pfVar8[1] = fVar11;
        }
        else {
          pfVar8[1] = pfVar8[1] + fVar11;
        }
        uVar6 = uVar6 + 1;
        if ((*(uint *)(gen_frame + 0x4)) <= uVar6) {
          uVar6 = 0;
        }
        fVar11 = *pfVar7 * ((float *)(gen_frame + 0x28))[(int)(uVar6)];
        ((float *)(gen_frame + 0x28))[(int)(uVar6)] = ((float *)(gen_frame + 0x8))[(int)(uVar6)] + ((float *)(gen_frame + 0x28))[(int)(uVar6)];
        if (iVar4 != 0) {
          fVar11 = fVar11 + pfVar8[2];
        }
        uVar6 = uVar6 + 1;
        pfVar8[2] = fVar11;
        if ((*(uint *)(gen_frame + 0x4)) <= uVar6) {
          uVar6 = 0;
        }
        pfVar8 = pfVar8 + 4;
        pfVar7 = pfVar7 + 4;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    if (uVar9 < uVar2) {
      iVar10 = uVar2 - uVar9;
      pfVar7 = (float *)(iVar3 + uVar9 * 4);
      do {
        fVar11 = *((float *)GEN_TOP(((int)pfVar7 + (iVar1 - iVar3)))) * ((float *)(gen_frame + 0x28))[(int)(uVar6)];
        ((float *)(gen_frame + 0x28))[(int)(uVar6)] = ((float *)(gen_frame + 0x8))[(int)(uVar6)] + ((float *)(gen_frame + 0x28))[(int)(uVar6)];
        if (iVar4 == 0) {
          *pfVar7 = fVar11;
        }
        else {
          *pfVar7 = *pfVar7 + fVar11;
        }
        uVar6 = uVar6 + 1;
        if ((*(uint *)(gen_frame + 0x4)) <= uVar6) {
          uVar6 = 0;
        }
        pfVar7 = pfVar7 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar6;
}

/* ref: FUN_00cfb810 */
unsigned int F_00cfb810(unsigned int gen_a0)
{
  GEN_ENTER(0xcfb810u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int iVar1;
  float * pfVar2;
  float * pfVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  float * pfVar7;
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
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fStack_28;
  float fStack_24;
  float fStack_18;
  float fStack_14;
  
  pfVar7 = (float *)*param_1;
  pfVar8 = (float *)param_1[1];
  uVar6 = param_1[5];
  iVar1 = param_1[8];
  pfVar2 = (float *)param_1[2];
  pfVar3 = (float *)param_1[3];
  fVar25 = *pfVar2;
  fVar26 = pfVar2[1];
  if (pfVar3 == (float *)0x0) {
    fStack_28 = *pfVar2;
    fStack_18 = 0.0;
    fStack_14 = 0.0;
    fStack_24 = fVar26;
  }
  else {
    fStack_18 = *pfVar3;
    fStack_28 = *pfVar2 + fStack_18;
    fStack_14 = pfVar3[1];
    fStack_24 = pfVar2[1] + fStack_14;
  }
  fVar27 = fStack_28;
  fVar28 = fStack_24;
  if (((uint)pfVar8 & 0x38) != 0) {
    if ((int)uVar6 < 8) goto LAB_00cfb940;
    do {
      fVar29 = *pfVar7 * fVar25;
      fVar30 = *pfVar7 * fVar26;
      fVar25 = fVar25 + fStack_18;
      fVar26 = fVar26 + fStack_14;
      fVar27 = fVar27 + fStack_18;
      fVar28 = fVar28 + fStack_14;
      pfVar7 = pfVar7 + 1;
      if (iVar1 != 0) {
        fVar29 = fVar29 + *pfVar8;
        fVar30 = fVar30 + pfVar8[1];
      }
      uVar6 = uVar6 - 1;
      *pfVar8 = fVar29;
      pfVar8[1] = fVar30;
      pfVar8 = pfVar8 + 2;
    } while (((uint)pfVar8 & 0x38) != 0);
  }
  if (7 < (int)uVar6) {
    uVar4 = uVar6 & 0xfffffff8;
    uVar6 = uVar6 & 7;
    fVar29 = fStack_18 + fStack_18;
    fVar30 = fStack_14 + fStack_14;
    fVar31 = fStack_18 + fStack_18;
    fVar32 = fStack_14 + fStack_14;
    pfVar7 = pfVar7 + uVar4;
    pfVar8 = pfVar8 + uVar4 * 2;
    iVar5 = -uVar4;
    do {
      pfVar2 = pfVar7 + iVar5;
      pfVar3 = pfVar7 + iVar5 + 4;
      fVar9 = *pfVar2 * fVar25;
      fVar10 = *pfVar2 * fVar26;
      fVar11 = pfVar2[1] * fVar27;
      fVar12 = pfVar2[1] * fVar28;
      fVar13 = pfVar2[2] * (fVar25 + fVar29);
      fVar14 = pfVar2[2] * (fVar26 + fVar30);
      fVar15 = pfVar2[3] * (fVar27 + fVar31);
      fVar16 = pfVar2[3] * (fVar28 + fVar32);
      fVar25 = (fVar25 + fVar29) + fVar29;
      fVar26 = (fVar26 + fVar30) + fVar30;
      fVar27 = (fVar27 + fVar31) + fVar31;
      fVar28 = (fVar28 + fVar32) + fVar32;
      fVar17 = *pfVar3 * fVar25;
      fVar18 = *pfVar3 * fVar26;
      fVar19 = pfVar3[1] * fVar27;
      fVar20 = pfVar3[1] * fVar28;
      fVar25 = fVar25 + fVar29;
      fVar26 = fVar26 + fVar30;
      fVar27 = fVar27 + fVar31;
      fVar28 = fVar28 + fVar32;
      fVar21 = pfVar3[2] * fVar25;
      fVar22 = pfVar3[2] * fVar26;
      fVar23 = pfVar3[3] * fVar27;
      fVar24 = pfVar3[3] * fVar28;
      fVar25 = fVar25 + fVar29;
      fVar26 = fVar26 + fVar30;
      fVar27 = fVar27 + fVar31;
      fVar28 = fVar28 + fVar32;
      if (iVar1 != 0) {
        pfVar2 = pfVar8 + iVar5 * 2;
        fVar9 = fVar9 + *pfVar2;
        fVar10 = fVar10 + pfVar2[1];
        fVar11 = fVar11 + pfVar2[2];
        fVar12 = fVar12 + pfVar2[3];
        pfVar2 = pfVar8 + iVar5 * 2 + 4;
        fVar13 = fVar13 + *pfVar2;
        fVar14 = fVar14 + pfVar2[1];
        fVar15 = fVar15 + pfVar2[2];
        fVar16 = fVar16 + pfVar2[3];
        pfVar2 = pfVar8 + iVar5 * 2 + 8;
        fVar17 = fVar17 + *pfVar2;
        fVar18 = fVar18 + pfVar2[1];
        fVar19 = fVar19 + pfVar2[2];
        fVar20 = fVar20 + pfVar2[3];
        pfVar2 = pfVar8 + iVar5 * 2 + 0xc;
        fVar21 = fVar21 + *pfVar2;
        fVar22 = fVar22 + pfVar2[1];
        fVar23 = fVar23 + pfVar2[2];
        fVar24 = fVar24 + pfVar2[3];
      }
      pfVar2 = pfVar8 + iVar5 * 2;
      *pfVar2 = fVar9;
      pfVar2[1] = fVar10;
      pfVar2[2] = fVar11;
      pfVar2[3] = fVar12;
      pfVar2 = pfVar8 + iVar5 * 2 + 4;
      *pfVar2 = fVar13;
      pfVar2[1] = fVar14;
      pfVar2[2] = fVar15;
      pfVar2[3] = fVar16;
      pfVar2 = pfVar8 + iVar5 * 2 + 8;
      *pfVar2 = fVar17;
      pfVar2[1] = fVar18;
      pfVar2[2] = fVar19;
      pfVar2[3] = fVar20;
      pfVar2 = pfVar8 + iVar5 * 2 + 0xc;
      *pfVar2 = fVar21;
      pfVar2[1] = fVar22;
      pfVar2[2] = fVar23;
      pfVar2[3] = fVar24;
      iVar5 = iVar5 + 8;
    } while (iVar5 != 0);
  }
LAB_00cfb940: ;
  while ((uVar6 & 7) != 0) {
    fVar27 = *pfVar7;
    pfVar7 = pfVar7 + 1;
    uVar6 = uVar6 - 1;
    fVar28 = fVar27 * fVar25;
    fVar27 = fVar27 * fVar26;
    fVar25 = fVar25 + fStack_18;
    fVar26 = fVar26 + fStack_14;
    if (iVar1 != 0) {
      fVar28 = fVar28 + *pfVar8;
      fVar27 = fVar27 + pfVar8[1];
    }
    *pfVar8 = fVar28;
    pfVar8[1] = fVar27;
    pfVar8 = pfVar8 + 2;
  }
  return 0;
}

/* ref: FUN_00cfb9d0 */
unsigned int F_00cfb9d0(unsigned int gen_a0)
{
  GEN_ENTER(0xcfb9d0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  float * pfVar5;
  float * pfVar6;
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
  
  (*(float * PTR32 *)(gen_frame + 0x78)) = (float *)param_1[1];
  iVar1 = param_1[8];
  (*(float * PTR32 *)(gen_frame + 0x74)) = (float *)*param_1;
  (*(uint *)(gen_frame + 0x70)) = param_1[5];
  pfVar5 = (float *)param_1[2];
  fVar11 = *pfVar5;
  pfVar6 = (float *)param_1[3];
  fVar12 = pfVar5[1];
  fVar13 = pfVar5[2];
  fVar14 = pfVar5[3];
  fVar15 = pfVar5[4];
  fVar16 = pfVar5[5];
  if (pfVar6 == (float *)0x0) {
    (*(float *)(gen_frame + 0x8)) = *pfVar5;
    (*(float *)(gen_frame + 0xc)) = pfVar5[1];
    (*(float *)(gen_frame + 0x10)) = pfVar5[2];
    (*(float *)(gen_frame + 0x14)) = pfVar5[3];
    (*(float *)(gen_frame + 0x18)) = pfVar5[4];
    (*(float *)(gen_frame + 0x1c)) = pfVar5[5];
    F_00c48350(&(*(float *)(gen_frame + 0x20)),0,0x30);
  }
  else {
    (*(float *)(gen_frame + 0x8)) = *pfVar5 + *pfVar6;
    (*(float *)(gen_frame + 0xc)) = pfVar6[1] + pfVar5[1];
    (*(float *)(gen_frame + 0x10)) = pfVar6[2] + pfVar5[2];
    (*(float *)(gen_frame + 0x14)) = pfVar6[3] + pfVar5[3];
    (*(float *)(gen_frame + 0x18)) = pfVar6[4] + pfVar5[4];
    (*(float *)(gen_frame + 0x1c)) = pfVar6[5] + pfVar5[5];
    fVar17 = pfVar6[1];
    (*(float *)(gen_frame + 0x20)) = *pfVar6;
    (*(float *)(gen_frame + 0x24)) = fVar17;
    (*(float *)(gen_frame + 0x28)) = pfVar6[2];
    (*(float *)(gen_frame + 0x2c)) = pfVar6[3];
    (*(float *)(gen_frame + 0x30)) = pfVar6[4];
    (*(float *)(gen_frame + 0x34)) = pfVar6[5];
    (*(float *)(gen_frame + 0x38)) = *pfVar6;
    (*(float *)(gen_frame + 0x3c)) = pfVar6[1];
    (*(float *)(gen_frame + 0x40)) = pfVar6[2];
    (*(float *)(gen_frame + 0x44)) = pfVar6[3];
    (*(float *)(gen_frame + 0x48)) = pfVar6[4];
    (*(float *)(gen_frame + 0x4c)) = pfVar6[5];
  }
  uVar4 = (*(uint *)(gen_frame + 0x70));
  pfVar5 = (*(float * PTR32 *)(gen_frame + 0x74));
  pfVar6 = (*(float * PTR32 *)(gen_frame + 0x78));
  fVar17 = (*(float *)(gen_frame + 0x8));
  fVar18 = (*(float *)(gen_frame + 0xc));
  fVar19 = (*(float *)(gen_frame + 0x10));
  fVar20 = (*(float *)(gen_frame + 0x14));
  fVar21 = (*(float *)(gen_frame + 0x18));
  fVar22 = (*(float *)(gen_frame + 0x1c));
  if (((uint)(*(float * PTR32 *)(gen_frame + 0x78)) & 0xc) != 0) {
    if ((int)(*(uint *)(gen_frame + 0x70)) < 2) goto LAB_00cfbbcf;
    do {
      fVar10 = *pfVar5;
      fVar19 = fVar19 + (*(float *)(gen_frame + 0x40));
      fVar20 = fVar20 + (*(float *)(gen_frame + 0x44));
      fVar21 = fVar21 + (*(float *)(gen_frame + 0x48));
      fVar22 = fVar22 + (*(float *)(gen_frame + 0x4c));
      fVar7 = fVar10 * fVar11;
      fVar8 = fVar10 * fVar12;
      fVar9 = fVar10 * fVar13;
      fVar10 = fVar10 * fVar14;
      fVar11 = fVar11 + (*(float *)(gen_frame + 0x20));
      fVar12 = fVar12 + (*(float *)(gen_frame + 0x24));
      fVar13 = fVar13 + (*(float *)(gen_frame + 0x28));
      fVar14 = fVar14 + (*(float *)(gen_frame + 0x2c));
      if (iVar1 != 0) {
        fVar7 = fVar7 + *pfVar6;
        fVar8 = fVar8 + pfVar6[1];
        fVar9 = fVar9 + pfVar6[2];
        fVar10 = fVar10 + pfVar6[3];
      }
      *pfVar6 = fVar7;
      pfVar6[1] = fVar8;
      pfVar6[2] = fVar9;
      pfVar6[3] = fVar10;
      fVar10 = *pfVar5 * fVar15;
      fVar7 = *pfVar5 * fVar16;
      fVar15 = fVar15 + (*(float *)(gen_frame + 0x30));
      fVar16 = fVar16 + (*(float *)(gen_frame + 0x34));
      fVar17 = fVar17 + (*(float *)(gen_frame + 0x38));
      fVar18 = fVar18 + (*(float *)(gen_frame + 0x3c));
      pfVar5 = pfVar5 + 1;
      if (iVar1 != 0) {
        fVar10 = fVar10 + gen_bits2f((uint)*(undefined8 *)(pfVar6 + 4));
        fVar7 = fVar7 + gen_bits2f((uint)((ulonglong)*(undefined8 *)(pfVar6 + 4) >> 0x20));
      }
      *(ulonglong *)(pfVar6 + 4) = CONCAT44((uint)gen_fl2bits(fVar7),(uint)gen_fl2bits(fVar10));
      uVar4 = uVar4 - 1;
      pfVar6 = pfVar6 + 6;
    } while (((uint)pfVar6 & 0xc) != 0);
  }
  if (1 < (int)uVar4) {
    uVar2 = uVar4 & 0xfffffffe;
    uVar4 = uVar4 & 1;
    pfVar5 = pfVar5 + uVar2;
    iVar3 = -uVar2;
    do {
      fVar10 = gen_bits2f((uint)*(undefined8 *)(pfVar5 + iVar3));
      fVar7 = gen_bits2f((uint)((ulonglong)*(undefined8 *)(pfVar5 + iVar3) >> 0x20));
      if (iVar1 == 0) {
        *pfVar6 = fVar10 * fVar11;
        pfVar6[1] = fVar10 * fVar12;
        pfVar6[2] = fVar10 * fVar13;
        pfVar6[3] = fVar10 * fVar14;
        pfVar6[4] = fVar10 * fVar15;
        pfVar6[5] = fVar10 * fVar16;
        pfVar6[6] = fVar7 * fVar17;
        pfVar6[7] = fVar7 * fVar18;
        pfVar6[8] = fVar7 * fVar19;
        pfVar6[9] = fVar7 * fVar20;
        pfVar6[10] = fVar7 * fVar21;
        pfVar6[0xb] = fVar7 * fVar22;
      }
      else {
        *pfVar6 = fVar10 * fVar11 + *pfVar6;
        pfVar6[1] = fVar10 * fVar12 + pfVar6[1];
        pfVar6[2] = fVar10 * fVar13 + pfVar6[2];
        pfVar6[3] = fVar10 * fVar14 + pfVar6[3];
        pfVar6[4] = fVar10 * fVar15 + pfVar6[4];
        pfVar6[5] = fVar10 * fVar16 + pfVar6[5];
        pfVar6[6] = fVar7 * fVar17 + pfVar6[6];
        pfVar6[7] = fVar7 * fVar18 + pfVar6[7];
        pfVar6[8] = fVar7 * fVar19 + pfVar6[8];
        pfVar6[9] = fVar7 * fVar20 + pfVar6[9];
        pfVar6[10] = fVar7 * fVar21 + pfVar6[10];
        pfVar6[0xb] = fVar7 * fVar22 + pfVar6[0xb];
      }
      fVar22 = fVar22 + ((*(float *)(gen_frame + 0x4c)) + (*(float *)(gen_frame + 0x4c)));
      fVar21 = fVar21 + ((*(float *)(gen_frame + 0x48)) + (*(float *)(gen_frame + 0x48)));
      fVar20 = fVar20 + ((*(float *)(gen_frame + 0x44)) + (*(float *)(gen_frame + 0x44)));
      fVar19 = fVar19 + ((*(float *)(gen_frame + 0x40)) + (*(float *)(gen_frame + 0x40)));
      fVar18 = fVar18 + ((*(float *)(gen_frame + 0x3c)) + (*(float *)(gen_frame + 0x3c)));
      fVar17 = fVar17 + ((*(float *)(gen_frame + 0x38)) + (*(float *)(gen_frame + 0x38)));
      fVar16 = fVar16 + ((*(float *)(gen_frame + 0x34)) + (*(float *)(gen_frame + 0x34)));
      fVar15 = fVar15 + ((*(float *)(gen_frame + 0x30)) + (*(float *)(gen_frame + 0x30)));
      fVar14 = fVar14 + ((*(float *)(gen_frame + 0x2c)) + (*(float *)(gen_frame + 0x2c)));
      fVar13 = fVar13 + ((*(float *)(gen_frame + 0x28)) + (*(float *)(gen_frame + 0x28)));
      fVar12 = fVar12 + ((*(float *)(gen_frame + 0x24)) + (*(float *)(gen_frame + 0x24)));
      fVar11 = fVar11 + ((*(float *)(gen_frame + 0x20)) + (*(float *)(gen_frame + 0x20)));
      pfVar6 = pfVar6 + 0xc;
      iVar3 = iVar3 + 2;
    } while (iVar3 != 0);
  }
LAB_00cfbbcf: ;
  if ((uVar4 & 1) != 0) {
    fVar17 = *pfVar5;
    fVar11 = fVar17 * fVar11;
    fVar12 = fVar17 * fVar12;
    fVar13 = fVar17 * fVar13;
    fVar14 = fVar17 * fVar14;
    fVar15 = fVar17 * fVar15;
    fVar17 = fVar17 * fVar16;
    if (iVar1 != 0) {
      fVar11 = fVar11 + *pfVar6;
      fVar12 = fVar12 + pfVar6[1];
      fVar13 = fVar13 + pfVar6[2];
      fVar14 = fVar14 + pfVar6[3];
      fVar15 = fVar15 + gen_bits2f((uint)*(undefined8 *)(pfVar6 + 4));
      fVar17 = fVar17 + gen_bits2f((uint)((ulonglong)*(undefined8 *)(pfVar6 + 4) >> 0x20));
    }
    *pfVar6 = fVar11;
    pfVar6[1] = fVar12;
    pfVar6[2] = fVar13;
    pfVar6[3] = fVar14;
    *(ulonglong *)(pfVar6 + 4) = CONCAT44((uint)gen_fl2bits(fVar17),(uint)gen_fl2bits(fVar15));
  }
  return 0;
}

/* ref: FUN_00cfbc70 */
unsigned int F_00cfbc70(unsigned int gen_a0)
{
  GEN_ENTER(0xcfbc70u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float * pfVar1;
  float * pfVar2;
  int iVar3;
  float * pfVar4;
  float * pfVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  float * pfVar9;
  float * pfVar10;
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
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  pfVar9 = (float *)*param_1;
  pfVar10 = (float *)param_1[1];
  uVar8 = param_1[5];
  iVar3 = param_1[8];
  iVar6 = param_1[6];
  if (param_1[9] != 0) {
    iVar6 = 1;
  }
  if (iVar6 == 1) {
    local_30 = *(float *)param_1[2];
    fStack_2c = local_30;
    fStack_28 = local_30;
    fStack_24 = local_30;
    if ((float *)param_1[3] == (float *)0x0) {
LAB_00cfbdbe: ;
      local_20 = 0.0;
      fStack_1c = 0.0;
      fStack_18 = 0.0;
      fStack_14 = 0.0;
    }
    else {
      fVar28 = *(float *)param_1[3];
      fVar29 = *(float *)param_1[2];
      fStack_2c = fVar29 + fVar28;
      fStack_28 = fVar28 * REFG(float, 0x10928e4) + fVar29;
      local_20 = fVar28 * REFG(float, 0x1094870);
      fStack_24 = fVar28 * REFG(float, 0x1087ef8) + fVar29;
      fStack_1c = local_20;
      fStack_18 = local_20;
      fStack_14 = local_20;
    }
  }
  else if (iVar6 == 2) {
    pfVar4 = (float *)param_1[2];
    local_30 = *pfVar4;
    pfVar5 = (float *)param_1[3];
    fStack_2c = pfVar4[3];
    if (pfVar5 == (float *)0x0) {
      local_20 = 0.0;
      fStack_1c = 0.0;
      fStack_18 = 0.0;
      fStack_14 = 0.0;
      fStack_28 = local_30;
      fStack_24 = fStack_2c;
    }
    else {
      fStack_28 = *pfVar4 + *pfVar5;
      local_20 = *pfVar5 * REFG(float, 0x10928e4);
      fStack_1c = pfVar5[3] * REFG(float, 0x10928e4);
      fStack_24 = pfVar5[3] + pfVar4[3];
      fStack_18 = local_20;
      fStack_14 = fStack_1c;
    }
  }
  else if (iVar6 == 4) {
    pfVar4 = (float *)param_1[2];
    local_30 = *pfVar4;
    pfVar5 = (float *)param_1[3];
    fStack_2c = pfVar4[5];
    fStack_28 = pfVar4[10];
    fStack_24 = pfVar4[0xf];
    if (pfVar5 == (float *)0x0) goto LAB_00cfbdbe;
    local_20 = *pfVar5;
    fStack_1c = pfVar5[5];
    fStack_18 = pfVar5[10];
    fStack_14 = pfVar5[0xf];
  }
  fVar28 = local_30;
  fVar29 = fStack_2c;
  fVar30 = fStack_28;
  fVar31 = fStack_24;
  fVar12 = local_20;
  fVar32 = fStack_1c;
  fVar33 = fStack_18;
  fVar34 = fStack_14;
  if (((uint)pfVar10 & 0x3c) != 0) {
    fVar11 = local_30;
    fVar13 = fStack_2c;
    fVar14 = fStack_28;
    fVar15 = local_20;
    fVar12 = local_20;
    fVar16 = fStack_1c;
    fVar17 = fStack_18;
    if ((int)uVar8 < 0x10) goto LAB_00cfbebd;
    do {
      fVar33 = fVar34;
      fVar32 = fVar17;
      fVar12 = fVar16;
      fVar34 = fVar15;
      fVar30 = fVar31;
      fVar29 = fVar14;
      fVar28 = fVar13;
      fVar13 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      uVar8 = uVar8 - 1;
      fVar13 = fVar13 * fVar11;
      fVar31 = fVar11 + fVar34;
      if (iVar3 != 0) {
        fVar13 = fVar13 + *pfVar10;
      }
      *pfVar10 = fVar13;
      pfVar10 = pfVar10 + 1;
      fVar11 = fVar28;
      fVar13 = fVar29;
      fVar14 = fVar30;
      fVar15 = fVar12;
      fVar16 = fVar32;
      fVar17 = fVar33;
    } while (((uint)pfVar10 & 0x3c) != 0);
  }
  if (0xf < (int)uVar8) {
    uVar7 = uVar8 & 0xfffffff0;
    uVar8 = uVar8 & 0xf;
    pfVar9 = pfVar9 + uVar7;
    pfVar10 = pfVar10 + uVar7;
    iVar6 = -uVar7;
    do {
      pfVar4 = pfVar9 + iVar6;
      pfVar5 = pfVar9 + iVar6 + 4;
      pfVar1 = pfVar9 + iVar6 + 8;
      pfVar2 = pfVar9 + iVar6 + 0xc;
      fVar11 = *pfVar4 * fVar28;
      fVar13 = pfVar4[1] * fVar29;
      fVar14 = pfVar4[2] * fVar30;
      fVar15 = pfVar4[3] * fVar31;
      fVar16 = *pfVar5 * (fVar28 + fVar12);
      fVar17 = pfVar5[1] * (fVar29 + fVar32);
      fVar18 = pfVar5[2] * (fVar30 + fVar33);
      fVar19 = pfVar5[3] * (fVar31 + fVar34);
      fVar28 = (fVar28 + fVar12) + fVar12;
      fVar29 = (fVar29 + fVar32) + fVar32;
      fVar30 = (fVar30 + fVar33) + fVar33;
      fVar31 = (fVar31 + fVar34) + fVar34;
      fVar20 = *pfVar1 * fVar28;
      fVar21 = pfVar1[1] * fVar29;
      fVar22 = pfVar1[2] * fVar30;
      fVar23 = pfVar1[3] * fVar31;
      fVar28 = fVar28 + fVar12;
      fVar29 = fVar29 + fVar32;
      fVar30 = fVar30 + fVar33;
      fVar31 = fVar31 + fVar34;
      fVar24 = *pfVar2 * fVar28;
      fVar25 = pfVar2[1] * fVar29;
      fVar26 = pfVar2[2] * fVar30;
      fVar27 = pfVar2[3] * fVar31;
      fVar28 = fVar28 + fVar12;
      fVar29 = fVar29 + fVar32;
      fVar30 = fVar30 + fVar33;
      fVar31 = fVar31 + fVar34;
      if (iVar3 != 0) {
        pfVar4 = pfVar10 + iVar6;
        fVar11 = fVar11 + *pfVar4;
        fVar13 = fVar13 + pfVar4[1];
        fVar14 = fVar14 + pfVar4[2];
        fVar15 = fVar15 + pfVar4[3];
        pfVar4 = pfVar10 + iVar6 + 4;
        fVar16 = fVar16 + *pfVar4;
        fVar17 = fVar17 + pfVar4[1];
        fVar18 = fVar18 + pfVar4[2];
        fVar19 = fVar19 + pfVar4[3];
        pfVar4 = pfVar10 + iVar6 + 8;
        fVar20 = fVar20 + *pfVar4;
        fVar21 = fVar21 + pfVar4[1];
        fVar22 = fVar22 + pfVar4[2];
        fVar23 = fVar23 + pfVar4[3];
        pfVar4 = pfVar10 + iVar6 + 0xc;
        fVar24 = fVar24 + *pfVar4;
        fVar25 = fVar25 + pfVar4[1];
        fVar26 = fVar26 + pfVar4[2];
        fVar27 = fVar27 + pfVar4[3];
      }
      pfVar4 = pfVar10 + iVar6;
      *pfVar4 = fVar11;
      pfVar4[1] = fVar13;
      pfVar4[2] = fVar14;
      pfVar4[3] = fVar15;
      pfVar4 = pfVar10 + iVar6 + 4;
      *pfVar4 = fVar16;
      pfVar4[1] = fVar17;
      pfVar4[2] = fVar18;
      pfVar4[3] = fVar19;
      pfVar4 = pfVar10 + iVar6 + 8;
      *pfVar4 = fVar20;
      pfVar4[1] = fVar21;
      pfVar4[2] = fVar22;
      pfVar4[3] = fVar23;
      pfVar4 = pfVar10 + iVar6 + 0xc;
      *pfVar4 = fVar24;
      pfVar4[1] = fVar25;
      pfVar4[2] = fVar26;
      pfVar4[3] = fVar27;
      iVar6 = iVar6 + 0x10;
    } while (iVar6 != 0);
  }
LAB_00cfbebd: ;
  while (fVar11 = fVar12, (uVar8 & 0xf) != 0) {
    fVar12 = *pfVar9;
    pfVar9 = pfVar9 + 1;
    uVar8 = uVar8 - 1;
    fVar12 = fVar12 * fVar28;
    fVar13 = fVar28 + fVar11;
    if (iVar3 != 0) {
      fVar12 = fVar12 + *pfVar10;
    }
    *pfVar10 = fVar12;
    pfVar10 = pfVar10 + 1;
    fVar28 = fVar29;
    fVar29 = fVar30;
    fVar30 = fVar31;
    fVar31 = fVar13;
    fVar12 = fVar32;
    fVar32 = fVar33;
    fVar33 = fVar34;
    fVar34 = fVar11;
  }
  return 0;
}

/* ref: FUN_00cfbf33 */
unsigned int F_00cfbf33(unsigned int gen_a0)
{
  GEN_ENTER(0xcfbf33u, gen_a0, 0u, 0u, 0u);
  short * param_1 = (short *)(uintptr_t)gen_a0;
  short * psVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  int iVar6;
  float * pfVar7;
  float fVar8;
  float * pfVar9;
  uint uVar10;
  uint uVar11;
  float * pfVar12;
  uint uVar13;
  uint uVar14;
  float * pfVar15;
  float10 fVar16;
  float fVar17;
  uint local_10;
  uint local_c;
  int local_8;
  
  fVar8 = REFG(float, 0x1131540);
  iVar6 = *(int *)((int)param_1 + 0x20);
  uVar13 = *(uint *)((int)param_1 + 0x1c);
  uVar14 = *(uint *)((int)param_1 + 0x18);
  local_8 = *(int *)((int)param_1 + 4);
  if (*(int *)((int)param_1 + 0x24) != 0) {
    uVar14 = 1;
    uVar13 = 1;
  }
  pfVar7 = *(float * PTR32 *)((int)param_1 + 0xc);
  if (pfVar7 == (float *)0x0) {
    local_10 = *(uint *)((int)param_1 + 0x14) / uVar14;
    if (local_10 != 0) {
      pfVar7 = *(float * PTR32 *)((int)param_1 + 8);
      param_1 = *(short * PTR32 *)param_1;
      do {
        uVar10 = 0;
        if (uVar13 != 0) {
          sVar5 = *param_1;
          pfVar9 = pfVar7;
          do {
            fVar17 = *pfVar9;
            uVar11 = 1;
            pfVar9 = pfVar9 + 1;
            fVar17 = ((float)(int)sVar5 * fVar17) * fVar8;
            if (1 < uVar14) {
              do {
                psVar1 = param_1 + uVar11;
                fVar3 = *pfVar9;
                pfVar9 = pfVar9 + 1;
                uVar11 = uVar11 + 1;
                fVar17 = fVar17 + ((float)(int)*psVar1 * fVar3) * fVar8;
              } while (uVar11 < uVar14);
            }
            if (iVar6 == 0) {
              *(float *)(local_8 + uVar10 * 4) = fVar17;
            }
            else {
              *(float *)(local_8 + uVar10 * 4) = *(float *)(local_8 + uVar10 * 4) + fVar17;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar13);
        }
        param_1 = param_1 + uVar14;
        local_8 = local_8 + uVar13 * 4;
        local_10 = local_10 - 1;
      } while (local_10 != 0);
    }
  }
  else {
    uVar10 = *(uint *)((int)param_1 + 0x14) / uVar14;
    local_10 = 0;
    if (uVar10 != 0) {
      pfVar9 = *(float * PTR32 *)((int)param_1 + 8);
      param_1 = *(short * PTR32 *)param_1;
      do {
        local_c = 0;
        if (uVar13 != 0) {
          fVar16 = (float10)(int)local_10;
          sVar5 = *param_1;
          if ((int)local_10 < 0) {
            fVar16 = fVar16 + (float10)*(float *)&REFG(undefined, 0x1088110);
          }
          pfVar12 = pfVar7;
          pfVar15 = pfVar9;
          do {
            fVar17 = *pfVar12;
            fVar3 = *pfVar15;
            uVar11 = 1;
            pfVar12 = pfVar12 + 1;
            pfVar15 = pfVar15 + 1;
            fVar17 = ((fVar17 * (float)fVar16 + fVar3) * (float)(int)sVar5) * fVar8;
            if (1 < uVar14) {
              do {
                fVar3 = *pfVar12;
                psVar1 = param_1 + uVar11;
                fVar4 = *pfVar15;
                pfVar12 = pfVar12 + 1;
                pfVar15 = pfVar15 + 1;
                uVar11 = uVar11 + 1;
                fVar17 = fVar17 + ((fVar3 * (float)fVar16 + fVar4) * (float)(int)*psVar1) * fVar8;
              } while (uVar11 < uVar14);
            }
            if (iVar6 == 0) {
              *(float *)(local_8 + local_c * 4) = fVar17;
            }
            else {
              pfVar2 = (float *)(local_8 + local_c * 4);
              *pfVar2 = *pfVar2 + fVar17;
            }
            local_c = local_c + 1;
          } while (local_c < uVar13);
        }
        param_1 = param_1 + uVar14;
        local_8 = local_8 + uVar13 * 4;
        local_10 = local_10 + 1;
      } while (local_10 < uVar10);
    }
  }
  return 0;
}

/* ref: FUN_00cfc120 */
unsigned int F_00cfc120(unsigned int gen_a0)
{
  GEN_ENTER(0xcfc120u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  short sVar1;
  int iVar2;
  float * pfVar3;
  float * pfVar4;
  short * psVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  psVar5 = (short *)*param_1;
  pfVar4 = (float *)param_1[1];
  iVar2 = param_1[8];
  iVar6 = param_1[5];
  pfVar3 = (float *)param_1[3];
  fVar9 = *(float *)param_1[2] * REFG(float, 0x1131540);
  fVar10 = ((float *)param_1[2])[1] * REFG(float, 0x1131540);
  if (pfVar3 == (float *)0x0) {
    if (iVar6 != 0) {
      do {
        sVar1 = *psVar5;
        iVar6 = iVar6 + -1;
        psVar5 = psVar5 + 1;
        fVar11 = (float)(int)sVar1 * fVar9;
        fVar7 = (float)(int)sVar1 * fVar10;
        if (iVar2 == 0) {
          *pfVar4 = fVar11;
        }
        else {
          *pfVar4 = fVar11 + *pfVar4;
          fVar7 = fVar7 + pfVar4[1];
        }
        pfVar4[1] = fVar7;
        pfVar4 = pfVar4 + 2;
      } while (iVar6 != 0);
      return 0;
    }
  }
  else {
    fVar7 = *pfVar3 * REFG(float, 0x1131540);
    fVar11 = pfVar3[1] * REFG(float, 0x1131540);
    while (iVar6 != 0) {
      sVar1 = *psVar5;
      iVar6 = iVar6 + -1;
      psVar5 = psVar5 + 1;
      fVar12 = (float)(int)sVar1 * fVar9;
      fVar8 = (float)(int)sVar1 * fVar10;
      if (iVar2 == 0) {
        *pfVar4 = fVar12;
      }
      else {
        *pfVar4 = fVar12 + *pfVar4;
        fVar8 = fVar8 + pfVar4[1];
      }
      pfVar4[1] = fVar8;
      pfVar4 = pfVar4 + 2;
      fVar9 = fVar9 + fVar7;
      fVar10 = fVar10 + fVar11;
    }
  }
  return 0;
}

/* ref: FUN_00cfc220 */
unsigned int F_00cfc220(unsigned int gen_a0)
{
  GEN_ENTER(0xcfc220u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float * pfVar1;
  int iVar2;
  float * pfVar3;
  float * pfVar4;
  short * psVar5;
  int iVar6;
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
  
  pfVar1 = (float *)param_1[2];
  pfVar4 = (float *)param_1[1];
  iVar2 = param_1[8];
  psVar5 = (short *)*param_1;
  iVar6 = param_1[5];
  pfVar3 = (float *)param_1[3];
  fVar9 = *pfVar1 * REFG(float, 0x1131540);
  fVar10 = pfVar1[1] * REFG(float, 0x1131540);
  fVar11 = pfVar1[2] * REFG(float, 0x1131540);
  fVar12 = pfVar1[3] * REFG(float, 0x1131540);
  fVar13 = pfVar1[4] * REFG(float, 0x1131540);
  fVar14 = pfVar1[5] * REFG(float, 0x1131540);
  if (pfVar3 == (float *)0x0) {
    if (iVar6 != 0) {
      do {
        iVar6 = iVar6 + -1;
        fVar7 = (float)(int)*psVar5;
        psVar5 = psVar5 + 1;
        if (iVar2 == 0) {
          *pfVar4 = fVar7 * fVar9;
          pfVar4[1] = fVar7 * fVar10;
          pfVar4[2] = fVar7 * fVar11;
          pfVar4[3] = fVar7 * fVar12;
          pfVar4[4] = fVar7 * fVar13;
          fVar7 = fVar7 * fVar14;
        }
        else {
          *pfVar4 = fVar7 * fVar9 + *pfVar4;
          pfVar4[1] = fVar7 * fVar10 + pfVar4[1];
          pfVar4[2] = fVar7 * fVar11 + pfVar4[2];
          pfVar4[3] = fVar7 * fVar12 + pfVar4[3];
          pfVar4[4] = fVar7 * fVar13 + pfVar4[4];
          fVar7 = fVar7 * fVar14 + pfVar4[5];
        }
        pfVar4[5] = fVar7;
        pfVar4 = pfVar4 + 6;
      } while (iVar6 != 0);
      return 0;
    }
  }
  else {
    fVar7 = *pfVar3 * REFG(float, 0x1131540);
    fVar15 = pfVar3[1] * REFG(float, 0x1131540);
    fVar16 = pfVar3[2] * REFG(float, 0x1131540);
    fVar17 = pfVar3[3] * REFG(float, 0x1131540);
    fVar18 = pfVar3[4] * REFG(float, 0x1131540);
    fVar19 = pfVar3[5] * REFG(float, 0x1131540);
    while (iVar6 != 0) {
      iVar6 = iVar6 + -1;
      fVar8 = (float)(int)*psVar5;
      psVar5 = psVar5 + 1;
      if (iVar2 == 0) {
        *pfVar4 = fVar8 * fVar9;
        pfVar4[1] = fVar8 * fVar10;
        pfVar4[2] = fVar8 * fVar11;
        pfVar4[3] = fVar8 * fVar12;
        pfVar4[4] = fVar8 * fVar13;
        fVar8 = fVar8 * fVar14;
      }
      else {
        *pfVar4 = fVar8 * fVar9 + *pfVar4;
        pfVar4[1] = fVar8 * fVar10 + pfVar4[1];
        pfVar4[2] = fVar8 * fVar11 + pfVar4[2];
        pfVar4[3] = fVar8 * fVar12 + pfVar4[3];
        pfVar4[4] = fVar8 * fVar13 + pfVar4[4];
        fVar8 = fVar8 * fVar14 + pfVar4[5];
      }
      fVar9 = fVar9 + fVar7;
      fVar10 = fVar10 + fVar15;
      fVar11 = fVar11 + fVar16;
      fVar12 = fVar12 + fVar17;
      fVar13 = fVar13 + fVar18;
      fVar14 = fVar14 + fVar19;
      pfVar4[5] = fVar8;
      pfVar4 = pfVar4 + 6;
    }
  }
  return 0;
}

/* ref: FUN_00cfc490 */
unsigned int F_00cfc490(unsigned int gen_a0)
{
  GEN_ENTER(0xcfc490u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float * pfVar1;
  int iVar2;
  float * pfVar3;
  float * pfVar4;
  int iVar5;
  short * psVar6;
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
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  pfVar1 = (float *)param_1[2];
  local_24 = pfVar1[4] * REFG(float, 0x1131540);
  local_20 = pfVar1[5] * REFG(float, 0x1131540);
  psVar6 = (short *)*param_1;
  pfVar4 = (float *)param_1[1];
  iVar2 = param_1[8];
  local_1c = pfVar1[6] * REFG(float, 0x1131540);
  local_18 = pfVar1[7] * REFG(float, 0x1131540);
  local_14 = pfVar1[8] * REFG(float, 0x1131540);
  local_10 = pfVar1[9] * REFG(float, 0x1131540);
  local_c = pfVar1[10] * REFG(float, 0x1131540);
  pfVar3 = (float *)param_1[3];
  iVar5 = param_1[5];
  fVar23 = pfVar1[3] * REFG(float, 0x1131540);
  local_8 = pfVar1[0xb] * REFG(float, 0x1131540);
  fVar20 = *pfVar1 * REFG(float, 0x1131540);
  fVar21 = pfVar1[1] * REFG(float, 0x1131540);
  fVar22 = pfVar1[2] * REFG(float, 0x1131540);
  if (pfVar3 == (float *)0x0) {
    if (iVar5 != 0) {
      iVar5 = (iVar5 - 1U >> 1) + 1;
      do {
        fVar9 = (float)(int)*psVar6;
        fVar7 = (float)(int)psVar6[1];
        psVar6 = psVar6 + 2;
        fVar24 = fVar7 * fVar21 + fVar9 * fVar20;
        if (iVar2 == 0) {
          *pfVar4 = fVar24;
          pfVar4[1] = fVar7 * fVar23 + fVar9 * fVar22;
          pfVar4[2] = fVar7 * local_20 + fVar9 * local_24;
          pfVar4[3] = fVar7 * local_18 + fVar9 * local_1c;
          pfVar4[4] = fVar7 * local_10 + fVar9 * local_14;
          fVar7 = fVar7 * local_8 + fVar9 * local_c;
        }
        else {
          *pfVar4 = fVar24 + *pfVar4;
          pfVar4[1] = (fVar7 * fVar23 + fVar9 * fVar22) + pfVar4[1];
          pfVar4[2] = (fVar7 * local_20 + fVar9 * local_24) + pfVar4[2];
          pfVar4[3] = (fVar7 * local_18 + fVar9 * local_1c) + pfVar4[3];
          pfVar4[4] = (fVar7 * local_10 + fVar9 * local_14) + pfVar4[4];
          fVar7 = (fVar7 * local_8 + fVar9 * local_c) + pfVar4[5];
        }
        pfVar4[5] = fVar7;
        pfVar4 = pfVar4 + 6;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      return 0;
    }
  }
  else {
    fVar7 = *pfVar3 * REFG(float, 0x1131540);
    fVar9 = pfVar3[1] * REFG(float, 0x1131540);
    fVar24 = pfVar3[2] * REFG(float, 0x1131540);
    fVar10 = pfVar3[3] * REFG(float, 0x1131540);
    fVar11 = pfVar3[4] * REFG(float, 0x1131540);
    fVar12 = pfVar3[5] * REFG(float, 0x1131540);
    fVar13 = pfVar3[6] * REFG(float, 0x1131540);
    fVar14 = pfVar3[7] * REFG(float, 0x1131540);
    fVar15 = pfVar3[8] * REFG(float, 0x1131540);
    fVar16 = pfVar3[9] * REFG(float, 0x1131540);
    fVar17 = pfVar3[10] * REFG(float, 0x1131540);
    fVar18 = pfVar3[0xb] * REFG(float, 0x1131540);
    if (iVar5 != 0) {
      iVar5 = (iVar5 - 1U >> 1) + 1;
      do {
        fVar19 = (float)(int)*psVar6;
        fVar8 = (float)(int)psVar6[1];
        psVar6 = psVar6 + 2;
        fVar25 = fVar8 * fVar21 + fVar19 * fVar20;
        if (iVar2 == 0) {
          *pfVar4 = fVar25;
          pfVar4[1] = fVar8 * fVar23 + fVar19 * fVar22;
          pfVar4[2] = fVar8 * local_20 + fVar19 * local_24;
          pfVar4[3] = fVar8 * local_18 + fVar19 * local_1c;
          pfVar4[4] = fVar8 * local_10 + fVar19 * local_14;
          fVar8 = fVar8 * local_8 + fVar19 * local_c;
        }
        else {
          *pfVar4 = fVar25 + *pfVar4;
          pfVar4[1] = (fVar8 * fVar23 + fVar19 * fVar22) + pfVar4[1];
          pfVar4[2] = (fVar8 * local_20 + fVar19 * local_24) + pfVar4[2];
          pfVar4[3] = (fVar8 * local_18 + fVar19 * local_1c) + pfVar4[3];
          pfVar4[4] = (fVar8 * local_10 + fVar19 * local_14) + pfVar4[4];
          fVar8 = (fVar8 * local_8 + fVar19 * local_c) + pfVar4[5];
        }
        pfVar4[5] = fVar8;
        local_24 = fVar11 + local_24;
        local_20 = fVar12 + local_20;
        fVar23 = fVar10 + fVar23;
        fVar20 = fVar20 + fVar7;
        fVar21 = fVar21 + fVar9;
        fVar22 = fVar22 + fVar24;
        local_1c = fVar13 + local_1c;
        local_18 = fVar14 + local_18;
        local_14 = fVar15 + local_14;
        local_10 = fVar16 + local_10;
        local_c = fVar17 + local_c;
        local_8 = fVar18 + local_8;
        pfVar4 = pfVar4 + 6;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return 0;
}

/* ref: FUN_00cfc980 */
unsigned int F_00cfc980(unsigned int gen_a0)
{
  GEN_ENTER(0xcfc980u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  short * psVar1;
  short * psVar2;
  short * psVar3;
  short * psVar4;
  short * psVar5;
  short sVar6;
  float * pfVar7;
  int iVar8;
  float * pfVar9;
  short * psVar10;
  int iVar11;
  float * pfVar12;
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
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  pfVar7 = *(float * PTR32 *)(param_1 + 8);
  local_30 = pfVar7[2] * REFG(float, 0x1131540);
  local_2c = pfVar7[3] * REFG(float, 0x1131540);
  local_28 = pfVar7[4] * REFG(float, 0x1131540);
  local_24 = pfVar7[5] * REFG(float, 0x1131540);
  psVar10 = *(short * PTR32 *)param_1;
  local_20 = pfVar7[6] * REFG(float, 0x1131540);
  local_1c = pfVar7[7] * REFG(float, 0x1131540);
  local_18 = pfVar7[8] * REFG(float, 0x1131540);
  local_14 = pfVar7[9] * REFG(float, 0x1131540);
  local_10 = pfVar7[10] * REFG(float, 0x1131540);
  iVar8 = *(int *)(param_1 + 0x20);
  pfVar9 = *(float * PTR32 *)(param_1 + 0xc);
  pfVar12 = *(float * PTR32 *)(param_1 + 4);
  iVar11 = *(int *)(param_1 + 0x14);
  fVar25 = *pfVar7 * REFG(float, 0x1131540);
  fVar26 = pfVar7[1] * REFG(float, 0x1131540);
  local_c = pfVar7[0xb] * REFG(float, 0x1131540);
  if (pfVar9 == (float *)0x0) {
    if (iVar11 != 0) {
      iVar11 = (iVar11 - 1U) / 6 + 1;
      do {
        sVar6 = *psVar10;
        psVar1 = psVar10 + 1;
        psVar2 = psVar10 + 2;
        psVar3 = psVar10 + 3;
        psVar4 = psVar10 + 4;
        psVar5 = psVar10 + 5;
        psVar10 = psVar10 + 6;
        fVar27 = (((((float)(int)*psVar1 * fVar26 + (float)(int)sVar6 * fVar25) +
                   (float)(int)*psVar2 * local_30) + (float)(int)*psVar3 * local_2c) +
                 (float)(int)*psVar4 * local_28) + (float)(int)*psVar5 * local_24;
        fVar13 = (((((float)(int)*psVar1 * local_1c + (float)(int)sVar6 * local_20) +
                   (float)(int)*psVar2 * local_18) + (float)(int)*psVar3 * local_14) +
                 (float)(int)*psVar4 * local_10) + (float)(int)*psVar5 * local_c;
        if (iVar8 == 0) {
          *pfVar12 = fVar27;
        }
        else {
          *pfVar12 = fVar27 + *pfVar12;
          fVar13 = fVar13 + pfVar12[1];
        }
        pfVar12[1] = fVar13;
        pfVar12 = pfVar12 + 2;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      return 0;
    }
  }
  else {
    fVar13 = *pfVar9 * REFG(float, 0x1131540);
    fVar27 = pfVar9[1] * REFG(float, 0x1131540);
    fVar15 = pfVar9[2] * REFG(float, 0x1131540);
    fVar16 = pfVar9[3] * REFG(float, 0x1131540);
    fVar17 = pfVar9[4] * REFG(float, 0x1131540);
    fVar18 = pfVar9[5] * REFG(float, 0x1131540);
    fVar19 = pfVar9[6] * REFG(float, 0x1131540);
    fVar20 = pfVar9[7] * REFG(float, 0x1131540);
    fVar21 = pfVar9[8] * REFG(float, 0x1131540);
    fVar22 = pfVar9[9] * REFG(float, 0x1131540);
    fVar23 = pfVar9[10] * REFG(float, 0x1131540);
    fVar24 = pfVar9[0xb] * REFG(float, 0x1131540);
    if (iVar11 != 0) {
      iVar11 = (iVar11 - 1U) / 6 + 1;
      do {
        sVar6 = *psVar10;
        psVar1 = psVar10 + 1;
        psVar2 = psVar10 + 2;
        psVar3 = psVar10 + 3;
        psVar4 = psVar10 + 4;
        fVar28 = (float)(int)psVar10[5];
        fVar29 = ((((float)(int)*psVar1 * fVar26 + (float)(int)sVar6 * fVar25) +
                  (float)(int)*psVar2 * local_30) + (float)(int)*psVar3 * local_2c) +
                 (float)(int)*psVar4 * local_28;
        psVar10 = psVar10 + 6;
        fVar14 = (((((float)(int)*psVar1 * local_1c + (float)(int)sVar6 * local_20) +
                   (float)(int)*psVar2 * local_18) + (float)(int)*psVar3 * local_14) +
                 (float)(int)*psVar4 * local_10) + fVar28 * local_c;
        if (iVar8 == 0) {
          *pfVar12 = fVar29 + fVar28 * local_24;
        }
        else {
          *pfVar12 = (fVar29 + fVar28 * local_24) + *pfVar12;
          fVar14 = fVar14 + pfVar12[1];
        }
        pfVar12[1] = fVar14;
        local_30 = fVar15 + local_30;
        local_2c = fVar16 + local_2c;
        local_28 = fVar17 + local_28;
        fVar25 = fVar13 + fVar25;
        fVar26 = fVar27 + fVar26;
        local_24 = fVar18 + local_24;
        local_20 = fVar19 + local_20;
        local_1c = fVar20 + local_1c;
        local_18 = fVar21 + local_18;
        local_14 = fVar22 + local_14;
        local_10 = fVar23 + local_10;
        pfVar12 = pfVar12 + 2;
        iVar11 = iVar11 + -1;
        local_c = fVar24 + local_c;
      } while (iVar11 != 0);
    }
  }
  return 0;
}

/* ref: FUN_00cfce10 */
unsigned int F_00cfce10(unsigned int gen_a0)
{
  GEN_ENTER(0xcfce10u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float * pfVar1;
  int iVar2;
  float * pfVar3;
  int iVar4;
  short * psVar5;
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
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  pfVar1 = (float *)param_1[2];
  local_58 = pfVar1[3] * REFG(float, 0x1131540);
  local_54 = pfVar1[4] * REFG(float, 0x1131540);
  local_50 = pfVar1[5] * REFG(float, 0x1131540);
  local_4c = pfVar1[6] * REFG(float, 0x1131540);
  local_48 = pfVar1[7] * REFG(float, 0x1131540);
  local_44 = pfVar1[8] * REFG(float, 0x1131540);
  local_40 = pfVar1[9] * REFG(float, 0x1131540);
  local_3c = pfVar1[10] * REFG(float, 0x1131540);
  local_38 = pfVar1[0xb] * REFG(float, 0x1131540);
  local_34 = pfVar1[0xc] * REFG(float, 0x1131540);
  local_30 = pfVar1[0xd] * REFG(float, 0x1131540);
  local_2c = pfVar1[0xe] * REFG(float, 0x1131540);
  local_28 = pfVar1[0xf] * REFG(float, 0x1131540);
  local_24 = pfVar1[0x10] * REFG(float, 0x1131540);
  psVar5 = (short *)*param_1;
  pfVar3 = (float *)param_1[1];
  iVar2 = param_1[8];
  local_20 = pfVar1[0x11] * REFG(float, 0x1131540);
  local_1c = pfVar1[0x12] * REFG(float, 0x1131540);
  local_18 = pfVar1[0x13] * REFG(float, 0x1131540);
  local_14 = pfVar1[0x14] * REFG(float, 0x1131540);
  local_10 = pfVar1[0x15] * REFG(float, 0x1131540);
  local_c = pfVar1[0x16] * REFG(float, 0x1131540);
  iVar4 = param_1[5];
  fVar33 = pfVar1[1] * REFG(float, 0x1131540);
  fVar36 = pfVar1[2] * REFG(float, 0x1131540);
  local_8 = pfVar1[0x17] * REFG(float, 0x1131540);
  fVar32 = *pfVar1 * REFG(float, 0x1131540);
  pfVar1 = (float *)param_1[3];
  if (pfVar1 == (float *)0x0) {
    if (iVar4 != 0) {
      iVar4 = (iVar4 - 1U >> 2) + 1;
      do {
        fVar8 = (float)(int)*psVar5;
        fVar6 = (float)(int)psVar5[1];
        fVar28 = (float)(int)psVar5[2];
        fVar30 = (float)(int)psVar5[3];
        fVar37 = ((fVar6 * fVar33 + fVar8 * fVar32) + fVar28 * fVar36) + fVar30 * local_58;
        fVar34 = ((fVar6 * local_50 + fVar8 * local_54) + fVar28 * local_4c) + fVar30 * local_48;
        psVar5 = psVar5 + 4;
        if (iVar2 == 0) {
          *pfVar3 = fVar37;
          pfVar3[1] = fVar34;
          pfVar3[2] = ((fVar6 * local_40 + fVar8 * local_44) + fVar28 * local_3c) +
                      fVar30 * local_38;
          pfVar3[3] = ((fVar6 * local_30 + fVar8 * local_34) + fVar28 * local_2c) +
                      fVar30 * local_28;
          pfVar3[4] = ((fVar6 * local_20 + fVar8 * local_24) + fVar28 * local_1c) +
                      fVar30 * local_18;
          fVar6 = ((fVar6 * local_10 + fVar8 * local_14) + fVar28 * local_c) + fVar30 * local_8;
        }
        else {
          *pfVar3 = fVar37 + *pfVar3;
          pfVar3[1] = fVar34 + pfVar3[1];
          pfVar3[2] = (((fVar6 * local_40 + fVar8 * local_44) + fVar28 * local_3c) +
                      fVar30 * local_38) + pfVar3[2];
          pfVar3[3] = (((fVar6 * local_30 + fVar8 * local_34) + fVar28 * local_2c) +
                      fVar30 * local_28) + pfVar3[3];
          pfVar3[4] = (((fVar6 * local_20 + fVar8 * local_24) + fVar28 * local_1c) +
                      fVar30 * local_18) + pfVar3[4];
          fVar6 = (((fVar6 * local_10 + fVar8 * local_14) + fVar28 * local_c) + fVar30 * local_8) +
                  pfVar3[5];
        }
        pfVar3[5] = fVar6;
        pfVar3 = pfVar3 + 6;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      return 0;
    }
  }
  else {
    fVar6 = *pfVar1 * REFG(float, 0x1131540);
    fVar8 = pfVar1[1] * REFG(float, 0x1131540);
    fVar28 = pfVar1[2] * REFG(float, 0x1131540);
    fVar30 = pfVar1[3] * REFG(float, 0x1131540);
    fVar34 = pfVar1[4] * REFG(float, 0x1131540);
    fVar37 = pfVar1[5] * REFG(float, 0x1131540);
    fVar9 = pfVar1[6] * REFG(float, 0x1131540);
    fVar10 = pfVar1[7] * REFG(float, 0x1131540);
    fVar11 = pfVar1[8] * REFG(float, 0x1131540);
    fVar12 = pfVar1[9] * REFG(float, 0x1131540);
    fVar13 = pfVar1[10] * REFG(float, 0x1131540);
    fVar14 = pfVar1[0xb] * REFG(float, 0x1131540);
    fVar15 = pfVar1[0xc] * REFG(float, 0x1131540);
    fVar16 = pfVar1[0xd] * REFG(float, 0x1131540);
    fVar17 = pfVar1[0xe] * REFG(float, 0x1131540);
    fVar18 = pfVar1[0xf] * REFG(float, 0x1131540);
    fVar19 = pfVar1[0x10] * REFG(float, 0x1131540);
    fVar20 = pfVar1[0x11] * REFG(float, 0x1131540);
    fVar21 = pfVar1[0x12] * REFG(float, 0x1131540);
    fVar22 = pfVar1[0x13] * REFG(float, 0x1131540);
    fVar23 = pfVar1[0x14] * REFG(float, 0x1131540);
    fVar24 = pfVar1[0x15] * REFG(float, 0x1131540);
    fVar25 = pfVar1[0x16] * REFG(float, 0x1131540);
    fVar26 = pfVar1[0x17] * REFG(float, 0x1131540);
    if (iVar4 != 0) {
      iVar4 = (iVar4 - 1U >> 2) + 1;
      do {
        fVar27 = (float)(int)*psVar5;
        fVar7 = (float)(int)psVar5[1];
        fVar29 = (float)(int)psVar5[2];
        fVar31 = (float)(int)psVar5[3];
        fVar38 = ((fVar7 * fVar33 + fVar27 * fVar32) + fVar29 * fVar36) + fVar31 * local_58;
        fVar35 = ((fVar7 * local_50 + fVar27 * local_54) + fVar29 * local_4c) + fVar31 * local_48;
        psVar5 = psVar5 + 4;
        if (iVar2 == 0) {
          *pfVar3 = fVar38;
          pfVar3[1] = fVar35;
          pfVar3[2] = ((fVar7 * local_40 + fVar27 * local_44) + fVar29 * local_3c) +
                      fVar31 * local_38;
          pfVar3[3] = ((fVar7 * local_30 + fVar27 * local_34) + fVar29 * local_2c) +
                      fVar31 * local_28;
          pfVar3[4] = ((fVar7 * local_20 + fVar27 * local_24) + fVar29 * local_1c) +
                      fVar31 * local_18;
          fVar7 = ((fVar7 * local_10 + fVar27 * local_14) + fVar29 * local_c) + fVar31 * local_8;
        }
        else {
          *pfVar3 = fVar38 + *pfVar3;
          pfVar3[1] = fVar35 + pfVar3[1];
          pfVar3[2] = (((fVar7 * local_40 + fVar27 * local_44) + fVar29 * local_3c) +
                      fVar31 * local_38) + pfVar3[2];
          pfVar3[3] = (((fVar7 * local_30 + fVar27 * local_34) + fVar29 * local_2c) +
                      fVar31 * local_28) + pfVar3[3];
          pfVar3[4] = (((fVar7 * local_20 + fVar27 * local_24) + fVar29 * local_1c) +
                      fVar31 * local_18) + pfVar3[4];
          fVar7 = (((fVar7 * local_10 + fVar27 * local_14) + fVar29 * local_c) + fVar31 * local_8) +
                  pfVar3[5];
        }
        pfVar3[5] = fVar7;
        local_58 = fVar30 + local_58;
        local_54 = fVar34 + local_54;
        local_50 = fVar37 + local_50;
        local_4c = fVar9 + local_4c;
        local_48 = fVar10 + local_48;
        local_44 = fVar11 + local_44;
        local_40 = fVar12 + local_40;
        local_3c = fVar13 + local_3c;
        local_38 = fVar14 + local_38;
        local_34 = fVar15 + local_34;
        local_30 = fVar16 + local_30;
        local_2c = fVar17 + local_2c;
        local_28 = fVar18 + local_28;
        local_24 = fVar19 + local_24;
        local_20 = fVar20 + local_20;
        fVar33 = fVar8 + fVar33;
        fVar36 = fVar28 + fVar36;
        fVar32 = fVar32 + fVar6;
        local_1c = fVar21 + local_1c;
        local_18 = fVar22 + local_18;
        local_14 = fVar23 + local_14;
        local_10 = fVar24 + local_10;
        local_c = fVar25 + local_c;
        pfVar3 = pfVar3 + 6;
        iVar4 = iVar4 + -1;
        local_8 = fVar26 + local_8;
      } while (iVar4 != 0);
    }
  }
  return 0;
}

/* ref: FUN_00cfd750 */
uint F_00cfd750(unsigned int gen_a0)
{
  GEN_ENTER(0xcfd750u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float * pfVar5;
  uint uVar6;
  uint uVar7;
  short * psVar8;
  float * pfVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  
  uVar6 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(uint *)(gen_frame + 0x48)) = uVar6;
  (*(uint *)(gen_frame + 0x4)) = param_1[6];
  iVar1 = param_1[1];
  iVar2 = *param_1;
  uVar3 = param_1[5];
  iVar4 = param_1[8];
  if (param_1[9] != 0) {
    (*(uint *)(gen_frame + 0x4)) = 1;
  }
  switch((unsigned int)(uintptr_t)((*(uint *)(gen_frame + 0x4)))) {
  case 1: ;
    pfVar9 = (float *)param_1[3];
    ((float *)(gen_frame + 0x28))[0] = *(float *)param_1[2] * REFG(float, 0x1131540);
    if (pfVar9 != (float *)0x0) {
      ((float *)(gen_frame + 0x8))[0] = *pfVar9 * REFG(float, 0x1131540);
    }
    break;
  case 2: ;
    pfVar9 = (float *)param_1[2];
    ((float *)(gen_frame + 0x28))[0] = *pfVar9 * REFG(float, 0x1131540);
    pfVar5 = (float *)param_1[3];
    ((float *)(gen_frame + 0x28))[1] = pfVar9[3] * REFG(float, 0x1131540);
    if (pfVar5 != (float *)0x0) {
      ((float *)(gen_frame + 0x8))[0] = *pfVar5 * REFG(float, 0x1131540);
      ((float *)(gen_frame + 0x8))[1] = pfVar5[3] * REFG(float, 0x1131540);
    }
    break;
  case 3: ;
    pfVar9 = (float *)param_1[2];
    ((float *)(gen_frame + 0x28))[0] = *pfVar9 * REFG(float, 0x1131540);
    ((float *)(gen_frame + 0x28))[1] = pfVar9[4] * REFG(float, 0x1131540);
    pfVar5 = (float *)param_1[3];
    ((float *)(gen_frame + 0x28))[2] = pfVar9[8] * REFG(float, 0x1131540);
    if (pfVar5 != (float *)0x0) {
      ((float *)(gen_frame + 0x8))[0] = *pfVar5 * REFG(float, 0x1131540);
      ((float *)(gen_frame + 0x8))[1] = pfVar5[4] * REFG(float, 0x1131540);
      ((float *)(gen_frame + 0x8))[2] = pfVar5[8] * REFG(float, 0x1131540);
    }
    break;
  case 4: ;
    pfVar9 = (float *)param_1[2];
    ((float *)(gen_frame + 0x28))[0] = *pfVar9 * REFG(float, 0x1131540);
    ((float *)(gen_frame + 0x28))[1] = pfVar9[5] * REFG(float, 0x1131540);
    ((float *)(gen_frame + 0x28))[2] = pfVar9[10] * REFG(float, 0x1131540);
    pfVar5 = (float *)param_1[3];
    ((float *)(gen_frame + 0x28))[3] = pfVar9[0xf] * REFG(float, 0x1131540);
    if (pfVar5 != (float *)0x0) {
      ((float *)(gen_frame + 0x8))[0] = *pfVar5 * REFG(float, 0x1131540);
      ((float *)(gen_frame + 0x8))[1] = pfVar5[5] * REFG(float, 0x1131540);
      ((float *)(gen_frame + 0x8))[2] = pfVar5[10] * REFG(float, 0x1131540);
      ((float *)(gen_frame + 0x8))[3] = pfVar5[0xf] * REFG(float, 0x1131540);
    }
    break;
  case 5: ;
    pfVar9 = (float *)param_1[2];
    ((float *)(gen_frame + 0x28))[0] = *pfVar9 * REFG(float, 0x1131540);
    ((float *)(gen_frame + 0x28))[1] = pfVar9[6] * REFG(float, 0x1131540);
    ((float *)(gen_frame + 0x28))[2] = pfVar9[0xc] * REFG(float, 0x1131540);
    ((float *)(gen_frame + 0x28))[3] = pfVar9[0x12] * REFG(float, 0x1131540);
    pfVar5 = (float *)param_1[3];
    (*(float *)(gen_frame + 0x38)) = pfVar9[0x18] * REFG(float, 0x1131540);
    if (pfVar5 != (float *)0x0) {
      ((float *)(gen_frame + 0x8))[0] = *pfVar5 * REFG(float, 0x1131540);
      ((float *)(gen_frame + 0x8))[1] = pfVar5[6] * REFG(float, 0x1131540);
      ((float *)(gen_frame + 0x8))[2] = pfVar5[0xc] * REFG(float, 0x1131540);
      ((float *)(gen_frame + 0x8))[3] = pfVar5[0x12] * REFG(float, 0x1131540);
      (*(float *)(gen_frame + 0x18)) = pfVar5[0x18] * REFG(float, 0x1131540);
    }
    break;
  case 6: ;
    pfVar9 = (float *)param_1[2];
    ((float *)(gen_frame + 0x28))[0] = *pfVar9 * REFG(float, 0x1131540);
    ((float *)(gen_frame + 0x28))[1] = pfVar9[7] * REFG(float, 0x1131540);
    ((float *)(gen_frame + 0x28))[2] = pfVar9[0xe] * REFG(float, 0x1131540);
    ((float *)(gen_frame + 0x28))[3] = pfVar9[0x15] * REFG(float, 0x1131540);
    (*(float *)(gen_frame + 0x38)) = pfVar9[0x1c] * REFG(float, 0x1131540);
    pfVar5 = (float *)param_1[3];
    (*(float *)(gen_frame + 0x3c)) = pfVar9[0x23] * REFG(float, 0x1131540);
    if (pfVar5 != (float *)0x0) {
      ((float *)(gen_frame + 0x8))[0] = *pfVar5 * REFG(float, 0x1131540);
      ((float *)(gen_frame + 0x8))[1] = pfVar5[7] * REFG(float, 0x1131540);
      ((float *)(gen_frame + 0x8))[2] = pfVar5[0xe] * REFG(float, 0x1131540);
      ((float *)(gen_frame + 0x8))[3] = pfVar5[0x15] * REFG(float, 0x1131540);
      (*(float *)(gen_frame + 0x18)) = pfVar5[0x1c] * REFG(float, 0x1131540);
      (*(float *)(gen_frame + 0x1c)) = pfVar5[0x23] * REFG(float, 0x1131540);
    }
  }
  uVar7 = 0;
  uVar11 = 0;
  if (param_1[3] == 0) {
    if (3 < (int)uVar3) {
      pfVar9 = (float *)(iVar1 + 8);
      iVar10 = (uVar3 - 4 >> 2) + 1;
      psVar8 = (short *)(iVar2 + 4);
      uVar11 = iVar10 * 4;
      do {
        if (iVar4 == 0) {
          pfVar9[-2] = (float)(int)psVar8[-2] * ((float *)(gen_frame + 0x28))[(int)(uVar7)];
        }
        else {
          pfVar9[-2] = pfVar9[-2] + (float)(int)psVar8[-2] * ((float *)(gen_frame + 0x28))[(int)(uVar7)];
        }
        uVar7 = uVar7 + 1;
        if ((*(uint *)(gen_frame + 0x4)) <= uVar7) {
          uVar7 = 0;
        }
        if (iVar4 == 0) {
          pfVar9[-1] = (float)(int)psVar8[-1] * ((float *)(gen_frame + 0x28))[(int)(uVar7)];
        }
        else {
          pfVar9[-1] = pfVar9[-1] + (float)(int)psVar8[-1] * ((float *)(gen_frame + 0x28))[(int)(uVar7)];
        }
        uVar7 = uVar7 + 1;
        if ((*(uint *)(gen_frame + 0x4)) <= uVar7) {
          uVar7 = 0;
        }
        if (iVar4 == 0) {
          *pfVar9 = (float)(int)*psVar8 * ((float *)(gen_frame + 0x28))[(int)(uVar7)];
        }
        else {
          *pfVar9 = *pfVar9 + (float)(int)*psVar8 * ((float *)(gen_frame + 0x28))[(int)(uVar7)];
        }
        uVar7 = uVar7 + 1;
        if ((*(uint *)(gen_frame + 0x4)) <= uVar7) {
          uVar7 = 0;
        }
        fVar12 = (float)(int)psVar8[1] * ((float *)(gen_frame + 0x28))[(int)(uVar7)];
        if (iVar4 != 0) {
          fVar12 = fVar12 + pfVar9[1];
        }
        uVar7 = uVar7 + 1;
        pfVar9[1] = fVar12;
        if ((*(uint *)(gen_frame + 0x4)) <= uVar7) {
          uVar7 = 0;
        }
        psVar8 = psVar8 + 4;
        pfVar9 = pfVar9 + 4;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    if (uVar11 < uVar3) {
      do {
        fVar12 = (float)(int)*(short *)(iVar2 + uVar11 * 2) * ((float *)(gen_frame + 0x28))[(int)(uVar7)];
        if (iVar4 == 0) {
          *(float *)(iVar1 + uVar11 * 4) = fVar12;
        }
        else {
          *(float *)(iVar1 + uVar11 * 4) = *(float *)(iVar1 + uVar11 * 4) + fVar12;
        }
        uVar7 = uVar7 + 1;
        if ((*(uint *)(gen_frame + 0x4)) <= uVar7) {
          uVar7 = 0;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar3);
      F_00c47745(uVar6 ^ (uint)(uint)(gen_frame + 0x4c));
      return uVar7;
    }
  }
  else {
    if (3 < (int)uVar3) {
      pfVar9 = (float *)(iVar1 + 8);
      iVar10 = (uVar3 - 4 >> 2) + 1;
      psVar8 = (short *)(iVar2 + 4);
      uVar11 = iVar10 * 4;
      do {
        fVar12 = (float)(int)psVar8[-2] * ((float *)(gen_frame + 0x28))[(int)(uVar7)];
        ((float *)(gen_frame + 0x28))[(int)(uVar7)] = ((float *)(gen_frame + 0x8))[(int)(uVar7)] + ((float *)(gen_frame + 0x28))[(int)(uVar7)];
        if (iVar4 == 0) {
          pfVar9[-2] = fVar12;
        }
        else {
          pfVar9[-2] = pfVar9[-2] + fVar12;
        }
        uVar7 = uVar7 + 1;
        if ((*(uint *)(gen_frame + 0x4)) <= uVar7) {
          uVar7 = 0;
        }
        fVar12 = (float)(int)psVar8[-1] * ((float *)(gen_frame + 0x28))[(int)(uVar7)];
        ((float *)(gen_frame + 0x28))[(int)(uVar7)] = ((float *)(gen_frame + 0x8))[(int)(uVar7)] + ((float *)(gen_frame + 0x28))[(int)(uVar7)];
        if (iVar4 == 0) {
          pfVar9[-1] = fVar12;
        }
        else {
          pfVar9[-1] = pfVar9[-1] + fVar12;
        }
        uVar7 = uVar7 + 1;
        if ((*(uint *)(gen_frame + 0x4)) <= uVar7) {
          uVar7 = 0;
        }
        fVar12 = (float)(int)*psVar8 * ((float *)(gen_frame + 0x28))[(int)(uVar7)];
        ((float *)(gen_frame + 0x28))[(int)(uVar7)] = ((float *)(gen_frame + 0x8))[(int)(uVar7)] + ((float *)(gen_frame + 0x28))[(int)(uVar7)];
        if (iVar4 != 0) {
          fVar12 = fVar12 + *pfVar9;
        }
        uVar7 = uVar7 + 1;
        *pfVar9 = fVar12;
        if ((*(uint *)(gen_frame + 0x4)) <= uVar7) {
          uVar7 = 0;
        }
        fVar12 = (float)(int)psVar8[1] * ((float *)(gen_frame + 0x28))[(int)(uVar7)];
        ((float *)(gen_frame + 0x28))[(int)(uVar7)] = ((float *)(gen_frame + 0x8))[(int)(uVar7)] + ((float *)(gen_frame + 0x28))[(int)(uVar7)];
        if (iVar4 == 0) {
          pfVar9[1] = fVar12;
        }
        else {
          pfVar9[1] = pfVar9[1] + fVar12;
        }
        uVar7 = uVar7 + 1;
        if ((*(uint *)(gen_frame + 0x4)) <= uVar7) {
          uVar7 = 0;
        }
        psVar8 = psVar8 + 4;
        pfVar9 = pfVar9 + 4;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    for (; uVar11 < uVar3; uVar11 = uVar11 + 1) {
      fVar12 = (float)(int)*(short *)(iVar2 + uVar11 * 2) * ((float *)(gen_frame + 0x28))[(int)(uVar7)];
      ((float *)(gen_frame + 0x28))[(int)(uVar7)] = ((float *)(gen_frame + 0x8))[(int)(uVar7)] + ((float *)(gen_frame + 0x28))[(int)(uVar7)];
      if (iVar4 == 0) {
        *(float *)(iVar1 + uVar11 * 4) = fVar12;
      }
      else {
        *(float *)(iVar1 + uVar11 * 4) = *(float *)(iVar1 + uVar11 * 4) + fVar12;
      }
      uVar7 = uVar7 + 1;
      if ((*(uint *)(gen_frame + 0x4)) <= uVar7) {
        uVar7 = 0;
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar7;
}

/* ref: FUN_00cfddb0 */
unsigned int F_00cfddb0(unsigned int gen_a0)
{
  GEN_ENTER(0xcfddb0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined1 auVar1 [16];
  short sVar2;
  float * pfVar3;
  int iVar4;
  float * pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  short * psVar13;
  float * pfVar14;
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
  float fStack_28;
  float fStack_24;
  float fStack_18;
  float fStack_14;
  
  psVar13 = (short *)*param_1;
  pfVar14 = (float *)param_1[1];
  uVar12 = param_1[5];
  pfVar3 = (float *)param_1[2];
  fVar15 = *pfVar3 * REFG(float, 0x1131540);
  iVar4 = param_1[8];
  pfVar5 = (float *)param_1[3];
  fVar16 = pfVar3[1] * REFG(float, 0x1131540);
  if (pfVar5 == (float *)0x0) {
    fStack_18 = 0.0;
    fStack_14 = 0.0;
    fStack_28 = fVar15;
    fStack_24 = fVar16;
  }
  else {
    fStack_28 = (*pfVar3 + *pfVar5) * REFG(float, 0x1131540);
    fStack_18 = *pfVar5 * REFG(float, 0x1131540);
    fStack_14 = pfVar5[1] * REFG(float, 0x1131540);
    fStack_24 = (pfVar3[1] + pfVar5[1]) * REFG(float, 0x1131540);
  }
  fVar29 = fStack_28;
  fVar30 = fStack_24;
  if (((uint)pfVar14 & 0x38) != 0) {
    if ((int)uVar12 < 8) goto LAB_00cfdf29;
    do {
      sVar2 = *psVar13;
      psVar13 = psVar13 + 1;
      uVar12 = uVar12 - 1;
      fVar31 = (float)(int)sVar2 * fVar15;
      fVar32 = (float)(int)sVar2 * fVar16;
      fVar15 = fVar15 + fStack_18;
      fVar16 = fVar16 + fStack_14;
      fVar29 = fVar29 + fStack_18;
      fVar30 = fVar30 + fStack_14;
      if (iVar4 != 0) {
        fVar31 = fVar31 + *pfVar14;
        fVar32 = fVar32 + pfVar14[1];
      }
      *pfVar14 = fVar31;
      pfVar14[1] = fVar32;
      pfVar14 = pfVar14 + 2;
    } while (((uint)pfVar14 & 0x38) != 0);
  }
  if (7 < (int)uVar12) {
    uVar10 = uVar12 & 0xfffffff8;
    uVar12 = uVar12 & 7;
    fVar31 = fStack_18 + fStack_18;
    fVar32 = fStack_14 + fStack_14;
    fVar33 = fStack_18 + fStack_18;
    fVar34 = fStack_14 + fStack_14;
    psVar13 = psVar13 + uVar10;
    pfVar14 = pfVar14 + uVar10 * 2;
    iVar11 = -uVar10;
    do {
      memcpy(&(auVar1), &(*(gen_v16 *)(psVar13 + iVar11)), sizeof(*(gen_v16 *)(psVar13 + iVar11)) < sizeof(auVar1) ? sizeof(*(gen_v16 *)(psVar13 + iVar11)) : sizeof(auVar1));
      fVar17 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 0)) * fVar15;
      fVar18 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 0)) * fVar16;
      fVar19 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 2)) * fVar29;
      fVar20 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 2)) * fVar30;
      fVar21 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 4)) * (fVar15 + fVar31);
      fVar22 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 4)) * (fVar16 + fVar32);
      fVar23 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 6)) * (fVar29 + fVar33);
      fVar24 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 6)) * (fVar30 + fVar34);
      fVar15 = (fVar15 + fVar31) + fVar31;
      fVar16 = (fVar16 + fVar32) + fVar32;
      fVar29 = (fVar29 + fVar33) + fVar33;
      fVar30 = (fVar30 + fVar34) + fVar34;
      fVar6 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 8)) * fVar15;
      fVar7 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 8)) * fVar16;
      fVar8 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 10)) * fVar29;
      fVar9 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 10)) * fVar30;
      fVar15 = fVar15 + fVar31;
      fVar16 = fVar16 + fVar32;
      fVar29 = fVar29 + fVar33;
      fVar30 = fVar30 + fVar34;
      fVar25 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 12)) * fVar15;
      fVar26 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 12)) * fVar16;
      fVar27 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 14)) * fVar29;
      fVar28 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 14)) * fVar30;
      fVar15 = fVar15 + fVar31;
      fVar16 = fVar16 + fVar32;
      fVar29 = fVar29 + fVar33;
      fVar30 = fVar30 + fVar34;
      if (iVar4 != 0) {
        pfVar3 = pfVar14 + iVar11 * 2;
        fVar17 = fVar17 + *pfVar3;
        fVar18 = fVar18 + pfVar3[1];
        fVar19 = fVar19 + pfVar3[2];
        fVar20 = fVar20 + pfVar3[3];
        pfVar3 = pfVar14 + iVar11 * 2 + 4;
        fVar21 = fVar21 + *pfVar3;
        fVar22 = fVar22 + pfVar3[1];
        fVar23 = fVar23 + pfVar3[2];
        fVar24 = fVar24 + pfVar3[3];
        pfVar3 = pfVar14 + iVar11 * 2 + 8;
        fVar6 = fVar6 + *pfVar3;
        fVar7 = fVar7 + pfVar3[1];
        fVar8 = fVar8 + pfVar3[2];
        fVar9 = fVar9 + pfVar3[3];
        pfVar3 = pfVar14 + iVar11 * 2 + 0xc;
        fVar25 = fVar25 + *pfVar3;
        fVar26 = fVar26 + pfVar3[1];
        fVar27 = fVar27 + pfVar3[2];
        fVar28 = fVar28 + pfVar3[3];
      }
      pfVar3 = pfVar14 + iVar11 * 2;
      *pfVar3 = fVar17;
      pfVar3[1] = fVar18;
      pfVar3[2] = fVar19;
      pfVar3[3] = fVar20;
      pfVar3 = pfVar14 + iVar11 * 2 + 4;
      *pfVar3 = fVar21;
      pfVar3[1] = fVar22;
      pfVar3[2] = fVar23;
      pfVar3[3] = fVar24;
      (*(undefined2 *)((char *)&auVar1 + 4)) = (short)(uint)gen_fl2bits(fVar7);
      (*(undefined4 *)((char *)&auVar1 + 0)) = (undefined4)gen_fl2bits(fVar6);
      (*(undefined2 *)((char *)&auVar1 + 6)) = (short)((uint)gen_fl2bits(fVar7) >> 0x10);
      (*(undefined2 *)((char *)&auVar1 + 8)) = (short)(uint)gen_fl2bits(fVar8);
      (*(undefined2 *)((char *)&auVar1 + 10)) = (short)((uint)gen_fl2bits(fVar8) >> 0x10);
      (*(undefined2 *)((char *)&auVar1 + 12)) = (short)(uint)gen_fl2bits(fVar9);
      (*(undefined2 *)((char *)&auVar1 + 14)) = (short)((uint)gen_fl2bits(fVar9) >> 0x10);
      memcpy(&(*(gen_v16 *)(pfVar14 + iVar11 * 2 + 8)), &(auVar1), sizeof(auVar1) < sizeof(*(gen_v16 *)(pfVar14 + iVar11 * 2 + 8)) ? sizeof(auVar1) : sizeof(*(gen_v16 *)(pfVar14 + iVar11 * 2 + 8)));
      pfVar3 = pfVar14 + iVar11 * 2 + 0xc;
      *pfVar3 = fVar25;
      pfVar3[1] = fVar26;
      pfVar3[2] = fVar27;
      pfVar3[3] = fVar28;
      iVar11 = iVar11 + 8;
    } while (iVar11 != 0);
  }
LAB_00cfdf29: ;
  while ((uVar12 & 7) != 0) {
    sVar2 = *psVar13;
    psVar13 = psVar13 + 1;
    uVar12 = uVar12 - 1;
    fVar29 = (float)(int)sVar2 * fVar15;
    fVar30 = (float)(int)sVar2 * fVar16;
    fVar15 = fVar15 + fStack_18;
    fVar16 = fVar16 + fStack_14;
    if (iVar4 != 0) {
      fVar29 = fVar29 + *pfVar14;
      fVar30 = fVar30 + pfVar14[1];
    }
    *pfVar14 = fVar29;
    pfVar14[1] = fVar30;
    pfVar14 = pfVar14 + 2;
  }
  return 0;
}

/* ref: FUN_00cfdfc0 */
unsigned int F_00cfdfc0(unsigned int gen_a0)
{
  GEN_ENTER(0xcfdfc0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int iVar1;
  float * pfVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  short * psVar7;
  float * pfVar8;
  undefined2 uVar10;
  float fVar9;
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
  
  (*(short * PTR32 *)(gen_frame + 0x74)) = (short *)*param_1;
  (*(uint *)(gen_frame + 0x70)) = param_1[5];
  pfVar8 = (float *)param_1[2];
  fVar14 = *pfVar8 * REFG(float, 0x1131540);
  fVar15 = pfVar8[1] * REFG(float, 0x1131540);
  fVar16 = pfVar8[2] * REFG(float, 0x1131540);
  fVar17 = pfVar8[3] * REFG(float, 0x1131540);
  fVar18 = pfVar8[4] * REFG(float, 0x1131540);
  (*(float * PTR32 *)(gen_frame + 0x78)) = (float *)param_1[1];
  iVar1 = param_1[8];
  pfVar2 = (float *)param_1[3];
  fVar19 = pfVar8[5] * REFG(float, 0x1131540);
  if (pfVar2 == (float *)0x0) {
    F_00c48350(&(*(float *)(gen_frame + 0x20)),0,0x30);
    (*(float *)(gen_frame + 0x8)) = fVar14;
    (*(float *)(gen_frame + 0xc)) = fVar15;
    (*(float *)(gen_frame + 0x10)) = fVar16;
    (*(float *)(gen_frame + 0x14)) = fVar17;
    (*(float *)(gen_frame + 0x18)) = fVar18;
    (*(float *)(gen_frame + 0x1c)) = fVar19;
  }
  else {
    (*(float *)(gen_frame + 0x8)) = (*pfVar8 + *pfVar2) * REFG(float, 0x1131540);
    (*(float *)(gen_frame + 0xc)) = (pfVar2[1] + pfVar8[1]) * REFG(float, 0x1131540);
    (*(float *)(gen_frame + 0x10)) = (pfVar2[2] + pfVar8[2]) * REFG(float, 0x1131540);
    fVar20 = pfVar2[3];
    (*(float *)(gen_frame + 0x14)) = (fVar20 + pfVar8[3]) * REFG(float, 0x1131540);
    fVar21 = pfVar2[4];
    (*(float *)(gen_frame + 0x18)) = (fVar21 + pfVar8[4]) * REFG(float, 0x1131540);
    fVar22 = pfVar2[5];
    fVar23 = pfVar8[5];
    fVar24 = *pfVar2 * REFG(float, 0x1131540);
    fVar25 = pfVar2[1] * REFG(float, 0x1131540);
    fVar9 = pfVar2[2] * REFG(float, 0x1131540);
    (*(float *)(gen_frame + 0x20)) = fVar24;
    (*(float *)(gen_frame + 0x24)) = fVar25;
    (*(float *)(gen_frame + 0x28)) = fVar9;
    fVar20 = fVar20 * REFG(float, 0x1131540);
    fVar21 = fVar21 * REFG(float, 0x1131540);
    fVar11 = fVar22 * REFG(float, 0x1131540);
    (*(float *)(gen_frame + 0x2c)) = fVar20;
    (*(float *)(gen_frame + 0x30)) = fVar21;
    (*(float *)(gen_frame + 0x34)) = fVar11;
    (*(float *)(gen_frame + 0x38)) = fVar24;
    (*(float *)(gen_frame + 0x3c)) = fVar25;
    (*(float *)(gen_frame + 0x40)) = fVar9;
    (*(float *)(gen_frame + 0x1c)) = (fVar22 + fVar23) * REFG(float, 0x1131540);
    (*(float *)(gen_frame + 0x44)) = fVar20;
    (*(float *)(gen_frame + 0x48)) = fVar21;
    (*(float *)(gen_frame + 0x4c)) = fVar11;
  }
  uVar6 = (*(uint *)(gen_frame + 0x70));
  psVar7 = (*(short * PTR32 *)(gen_frame + 0x74));
  pfVar8 = (*(float * PTR32 *)(gen_frame + 0x78));
  fVar20 = (*(float *)(gen_frame + 0x8));
  fVar21 = (*(float *)(gen_frame + 0xc));
  fVar22 = (*(float *)(gen_frame + 0x10));
  fVar23 = (*(float *)(gen_frame + 0x14));
  fVar24 = (*(float *)(gen_frame + 0x18));
  fVar25 = (*(float *)(gen_frame + 0x1c));
  if (((uint)(*(float * PTR32 *)(gen_frame + 0x78)) & 0xc) != 0) {
    if ((int)(*(uint *)(gen_frame + 0x70)) < 2) goto LAB_00cfe251;
    do {
      fVar22 = fVar22 + (*(float *)(gen_frame + 0x40));
      fVar23 = fVar23 + (*(float *)(gen_frame + 0x44));
      fVar24 = fVar24 + (*(float *)(gen_frame + 0x48));
      fVar25 = fVar25 + (*(float *)(gen_frame + 0x4c));
      fVar9 = (float)(int)*psVar7;
      fVar11 = fVar9 * fVar14;
      fVar12 = fVar9 * fVar15;
      fVar13 = fVar9 * fVar16;
      fVar9 = fVar9 * fVar17;
      fVar14 = fVar14 + (*(float *)(gen_frame + 0x20));
      fVar15 = fVar15 + (*(float *)(gen_frame + 0x24));
      fVar16 = fVar16 + (*(float *)(gen_frame + 0x28));
      fVar17 = fVar17 + (*(float *)(gen_frame + 0x2c));
      if (iVar1 != 0) {
        fVar11 = fVar11 + *pfVar8;
        fVar12 = fVar12 + pfVar8[1];
        fVar13 = fVar13 + pfVar8[2];
        fVar9 = fVar9 + pfVar8[3];
      }
      *pfVar8 = fVar11;
      pfVar8[1] = fVar12;
      pfVar8[2] = fVar13;
      pfVar8[3] = fVar9;
      fVar9 = (float)(int)*psVar7 * fVar18;
      fVar11 = (float)(int)*psVar7 * fVar19;
      fVar18 = fVar18 + (*(float *)(gen_frame + 0x30));
      fVar19 = fVar19 + (*(float *)(gen_frame + 0x34));
      fVar20 = fVar20 + (*(float *)(gen_frame + 0x38));
      fVar21 = fVar21 + (*(float *)(gen_frame + 0x3c));
      psVar7 = psVar7 + 1;
      if (iVar1 != 0) {
        fVar9 = fVar9 + gen_bits2f((uint)*(undefined8 *)(pfVar8 + 4));
        fVar11 = fVar11 + gen_bits2f((uint)((ulonglong)*(undefined8 *)(pfVar8 + 4) >> 0x20));
      }
      *(ulonglong *)(pfVar8 + 4) = CONCAT44((uint)gen_fl2bits(fVar11),(uint)gen_fl2bits(fVar9));
      uVar6 = uVar6 - 1;
      pfVar8 = pfVar8 + 6;
    } while (((uint)pfVar8 & 0xc) != 0);
  }
  if (1 < (int)uVar6) {
    uVar4 = uVar6 & 0xfffffffe;
    uVar6 = uVar6 & 1;
    psVar7 = psVar7 + uVar4;
    iVar5 = -uVar4;
    do {
      uVar3 = *(undefined4 *)(psVar7 + iVar5);
      uVar10 = (undefined2)((uint)uVar3 >> 0x10);
      fVar9 = (float)(int)(short)uVar3;
      fVar11 = (float)(int)((longlong)CONCAT26(uVar10,CONCAT24(uVar10,uVar3)) >> 0x30);
      if (iVar1 == 0) {
        *pfVar8 = fVar9 * fVar14;
        pfVar8[1] = fVar9 * fVar15;
        pfVar8[2] = fVar9 * fVar16;
        pfVar8[3] = fVar9 * fVar17;
        pfVar8[4] = fVar9 * fVar18;
        pfVar8[5] = fVar9 * fVar19;
        pfVar8[6] = fVar11 * fVar20;
        pfVar8[7] = fVar11 * fVar21;
        pfVar8[8] = fVar11 * fVar22;
        pfVar8[9] = fVar11 * fVar23;
        pfVar8[10] = fVar11 * fVar24;
        pfVar8[0xb] = fVar11 * fVar25;
      }
      else {
        *pfVar8 = fVar9 * fVar14 + *pfVar8;
        pfVar8[1] = fVar9 * fVar15 + pfVar8[1];
        pfVar8[2] = fVar9 * fVar16 + pfVar8[2];
        pfVar8[3] = fVar9 * fVar17 + pfVar8[3];
        pfVar8[4] = fVar9 * fVar18 + pfVar8[4];
        pfVar8[5] = fVar9 * fVar19 + pfVar8[5];
        pfVar8[6] = fVar11 * fVar20 + pfVar8[6];
        pfVar8[7] = fVar11 * fVar21 + pfVar8[7];
        pfVar8[8] = fVar11 * fVar22 + pfVar8[8];
        pfVar8[9] = fVar11 * fVar23 + pfVar8[9];
        pfVar8[10] = fVar11 * fVar24 + pfVar8[10];
        pfVar8[0xb] = fVar11 * fVar25 + pfVar8[0xb];
      }
      fVar25 = fVar25 + ((*(float *)(gen_frame + 0x4c)) + (*(float *)(gen_frame + 0x4c)));
      fVar24 = fVar24 + ((*(float *)(gen_frame + 0x48)) + (*(float *)(gen_frame + 0x48)));
      fVar23 = fVar23 + ((*(float *)(gen_frame + 0x44)) + (*(float *)(gen_frame + 0x44)));
      fVar22 = fVar22 + ((*(float *)(gen_frame + 0x40)) + (*(float *)(gen_frame + 0x40)));
      fVar21 = fVar21 + ((*(float *)(gen_frame + 0x3c)) + (*(float *)(gen_frame + 0x3c)));
      fVar20 = fVar20 + ((*(float *)(gen_frame + 0x38)) + (*(float *)(gen_frame + 0x38)));
      fVar19 = fVar19 + ((*(float *)(gen_frame + 0x34)) + (*(float *)(gen_frame + 0x34)));
      fVar18 = fVar18 + ((*(float *)(gen_frame + 0x30)) + (*(float *)(gen_frame + 0x30)));
      fVar17 = fVar17 + ((*(float *)(gen_frame + 0x2c)) + (*(float *)(gen_frame + 0x2c)));
      fVar16 = fVar16 + ((*(float *)(gen_frame + 0x28)) + (*(float *)(gen_frame + 0x28)));
      fVar15 = fVar15 + ((*(float *)(gen_frame + 0x24)) + (*(float *)(gen_frame + 0x24)));
      fVar14 = fVar14 + ((*(float *)(gen_frame + 0x20)) + (*(float *)(gen_frame + 0x20)));
      pfVar8 = pfVar8 + 0xc;
      iVar5 = iVar5 + 2;
    } while (iVar5 != 0);
  }
LAB_00cfe251: ;
  if ((uVar6 & 1) != 0) {
    fVar20 = (float)(int)*psVar7;
    fVar14 = fVar20 * fVar14;
    fVar15 = fVar20 * fVar15;
    fVar16 = fVar20 * fVar16;
    fVar17 = fVar20 * fVar17;
    fVar18 = fVar20 * fVar18;
    fVar20 = fVar20 * fVar19;
    if (iVar1 != 0) {
      fVar14 = fVar14 + *pfVar8;
      fVar15 = fVar15 + pfVar8[1];
      fVar16 = fVar16 + pfVar8[2];
      fVar17 = fVar17 + pfVar8[3];
      fVar18 = fVar18 + gen_bits2f((uint)*(undefined8 *)(pfVar8 + 4));
      fVar20 = fVar20 + gen_bits2f((uint)((ulonglong)*(undefined8 *)(pfVar8 + 4) >> 0x20));
    }
    *pfVar8 = fVar14;
    pfVar8[1] = fVar15;
    pfVar8[2] = fVar16;
    pfVar8[3] = fVar17;
    *(ulonglong *)(pfVar8 + 4) = CONCAT44((uint)gen_fl2bits(fVar20),(uint)gen_fl2bits(fVar18));
  }
  return 0;
}

/* ref: FUN_00cfe300 */
unsigned int F_00cfe300(float gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcfe300u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_a2, 0u);
  float in_xmm1 = (float)gen_a0;
  float in_xmm3 = (float)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  short sVar3;
  int iVar4;
  float * pfVar5;
  float * pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  short * psVar16;
  float * pfVar17;
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
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  psVar16 = (short *)*param_3;
  pfVar17 = (float *)param_3[1];
  uVar15 = param_3[5];
  iVar4 = param_3[8];
  iVar13 = param_3[6];
  if (param_3[9] != 0) {
    iVar13 = 1;
  }
  if (iVar13 == 1) {
    local_30 = *(float *)param_3[2] * REFG(float, 0x1131540);
    fStack_2c = local_30;
    fStack_28 = local_30;
    fStack_24 = local_30;
    if ((float *)param_3[3] == (float *)0x0) {
LAB_00cfe49c: ;
      local_20 = 0.0;
      fStack_1c = 0.0;
      fStack_18 = 0.0;
      fStack_14 = 0.0;
    }
    else {
      fVar27 = *(float *)param_3[3];
      fVar30 = *(float *)param_3[2];
      fStack_2c = (fVar30 + fVar27) * REFG(float, 0x1131540);
      fVar31 = fVar27 * REFG(float, 0x10928e4) + fVar30;
      local_20 = (fVar27 * REFG(float, 0x1094870)) * REFG(float, 0x1131540);
      fVar30 = fVar27 * REFG(float, 0x1087ef8) + fVar30;
      fStack_14 = local_20;
LAB_00cfe505: ;
      fStack_28 = fVar31 * REFG(float, 0x1131540);
      fStack_24 = fVar30 * REFG(float, 0x1131540);
      fStack_1c = fStack_14;
      fStack_18 = local_20;
    }
  }
  else if (iVar13 == 2) {
    pfVar5 = (float *)param_3[2];
    pfVar6 = (float *)param_3[3];
    local_30 = *pfVar5 * REFG(float, 0x1131540);
    fStack_2c = pfVar5[3] * REFG(float, 0x1131540);
    if (pfVar6 != (float *)0x0) {
      fVar31 = *pfVar5 + *pfVar6;
      fVar30 = pfVar6[3] + pfVar5[3];
      fStack_14 = (pfVar6[3] * REFG(float, 0x10928e4)) * REFG(float, 0x1131540);
      local_20 = (*pfVar6 * REFG(float, 0x10928e4)) * REFG(float, 0x1131540);
      goto LAB_00cfe505;
    }
    local_20 = 0.0;
    fStack_1c = 0.0;
    fStack_18 = 0.0;
    fStack_14 = 0.0;
    fStack_28 = local_30;
    fStack_24 = fStack_2c;
  }
  else if (iVar13 == 4) {
    pfVar5 = (float *)param_3[2];
    pfVar6 = (float *)param_3[3];
    local_30 = *pfVar5 * REFG(float, 0x1131540);
    fStack_2c = pfVar5[5] * REFG(float, 0x1131540);
    fStack_28 = pfVar5[10] * REFG(float, 0x1131540);
    fStack_24 = pfVar5[0xf] * REFG(float, 0x1131540);
    if (pfVar6 == (float *)0x0) goto LAB_00cfe49c;
    local_20 = *pfVar6 * REFG(float, 0x1131540);
    fStack_1c = pfVar6[5] * REFG(float, 0x1131540);
    fStack_18 = pfVar6[10] * REFG(float, 0x1131540);
    fStack_14 = pfVar6[0xf] * REFG(float, 0x1131540);
  }
  fVar27 = local_30;
  fVar30 = fStack_2c;
  fVar31 = fStack_28;
  fVar32 = fStack_24;
  fVar19 = local_20;
  fVar33 = fStack_1c;
  fVar34 = fStack_18;
  fVar35 = fStack_14;
  if (((uint)pfVar17 & 0x3c) != 0) {
    fVar29 = local_30;
    fVar28 = fStack_2c;
    fVar7 = fStack_28;
    fVar8 = local_20;
    fVar19 = local_20;
    fVar9 = fStack_1c;
    fVar10 = fStack_18;
    if ((int)uVar15 < 0x10) goto LAB_00cfe5ed;
    do {
      fVar34 = fVar35;
      fVar33 = fVar10;
      fVar19 = fVar9;
      fVar35 = fVar8;
      fVar31 = fVar32;
      fVar30 = fVar7;
      fVar27 = fVar28;
      sVar3 = *psVar16;
      psVar16 = psVar16 + 1;
      uVar15 = uVar15 - 1;
      fVar28 = (float)(int)sVar3 * fVar29;
      fVar32 = fVar29 + fVar35;
      if (iVar4 != 0) {
        fVar28 = fVar28 + *pfVar17;
      }
      *pfVar17 = fVar28;
      pfVar17 = pfVar17 + 1;
      fVar29 = fVar27;
      fVar28 = fVar30;
      fVar7 = fVar31;
      fVar8 = fVar19;
      fVar9 = fVar33;
      fVar10 = fVar34;
    } while (((uint)pfVar17 & 0x3c) != 0);
  }
  if (0xf < (int)uVar15) {
    uVar14 = uVar15 & 0xfffffff0;
    uVar15 = uVar15 & 0xf;
    psVar16 = psVar16 + uVar14;
    pfVar17 = pfVar17 + uVar14;
    iVar13 = -uVar14;
    do {
      memcpy(&(auVar1), &(*(gen_v16 *)(psVar16 + iVar13)), sizeof(*(gen_v16 *)(psVar16 + iVar13)) < sizeof(auVar1) ? sizeof(*(gen_v16 *)(psVar16 + iVar13)) : sizeof(auVar1));
      memcpy(&(auVar2), &(*(gen_v16 *)(psVar16 + iVar13 + 8)), sizeof(*(gen_v16 *)(psVar16 + iVar13 + 8)) < sizeof(auVar2) ? sizeof(*(gen_v16 *)(psVar16 + iVar13 + 8)) : sizeof(auVar2));
      fVar18 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 0)) * fVar27;
      fVar20 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 2)) * fVar30;
      fVar21 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 4)) * fVar31;
      fVar22 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 6)) * fVar32;
      fVar29 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 8)) * (fVar27 + fVar19);
      fVar28 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 10)) * (fVar30 + fVar33);
      fVar7 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 12)) * (fVar31 + fVar34);
      fVar8 = (float)(int)(*(undefined2 *)((char *)&auVar1 + 14)) * (fVar32 + fVar35);
      fVar27 = (fVar27 + fVar19) + fVar19;
      fVar30 = (fVar30 + fVar33) + fVar33;
      fVar31 = (fVar31 + fVar34) + fVar34;
      fVar32 = (fVar32 + fVar35) + fVar35;
      fVar23 = (float)(int)(*(undefined2 *)((char *)&auVar2 + 0)) * fVar27;
      fVar24 = (float)(int)(*(undefined2 *)((char *)&auVar2 + 2)) * fVar30;
      fVar25 = (float)(int)(*(undefined2 *)((char *)&auVar2 + 4)) * fVar31;
      fVar26 = (float)(int)(*(undefined2 *)((char *)&auVar2 + 6)) * fVar32;
      fVar27 = fVar27 + fVar19;
      fVar30 = fVar30 + fVar33;
      fVar31 = fVar31 + fVar34;
      fVar32 = fVar32 + fVar35;
      fVar9 = (float)(int)(*(undefined2 *)((char *)&auVar2 + 8)) * fVar27;
      fVar10 = (float)(int)(*(undefined2 *)((char *)&auVar2 + 10)) * fVar30;
      fVar11 = (float)(int)(*(undefined2 *)((char *)&auVar2 + 12)) * fVar31;
      fVar12 = (float)(int)(*(undefined2 *)((char *)&auVar2 + 14)) * fVar32;
      fVar27 = fVar27 + fVar19;
      fVar30 = fVar30 + fVar33;
      fVar31 = fVar31 + fVar34;
      fVar32 = fVar32 + fVar35;
      if (iVar4 != 0) {
        pfVar5 = pfVar17 + iVar13;
        fVar18 = fVar18 + *pfVar5;
        fVar20 = fVar20 + pfVar5[1];
        fVar21 = fVar21 + pfVar5[2];
        fVar22 = fVar22 + pfVar5[3];
        pfVar5 = pfVar17 + iVar13 + 4;
        fVar29 = fVar29 + *pfVar5;
        fVar28 = fVar28 + pfVar5[1];
        fVar7 = fVar7 + pfVar5[2];
        fVar8 = fVar8 + pfVar5[3];
        pfVar5 = pfVar17 + iVar13 + 8;
        fVar23 = fVar23 + *pfVar5;
        fVar24 = fVar24 + pfVar5[1];
        fVar25 = fVar25 + pfVar5[2];
        fVar26 = fVar26 + pfVar5[3];
        pfVar5 = pfVar17 + iVar13 + 0xc;
        fVar9 = fVar9 + *pfVar5;
        fVar10 = fVar10 + pfVar5[1];
        fVar11 = fVar11 + pfVar5[2];
        fVar12 = fVar12 + pfVar5[3];
      }
      pfVar5 = pfVar17 + iVar13;
      *pfVar5 = fVar18;
      pfVar5[1] = fVar20;
      pfVar5[2] = fVar21;
      pfVar5[3] = fVar22;
      (*(undefined2 *)((char *)&auVar1 + 4)) = (short)(uint)gen_fl2bits(fVar28);
      (*(undefined4 *)((char *)&auVar1 + 0)) = (undefined4)gen_fl2bits(fVar29);
      (*(undefined2 *)((char *)&auVar1 + 6)) = (short)((uint)gen_fl2bits(fVar28) >> 0x10);
      (*(undefined2 *)((char *)&auVar1 + 8)) = (short)(uint)gen_fl2bits(fVar7);
      (*(undefined2 *)((char *)&auVar1 + 10)) = (short)((uint)gen_fl2bits(fVar7) >> 0x10);
      (*(undefined2 *)((char *)&auVar1 + 12)) = (short)(uint)gen_fl2bits(fVar8);
      (*(undefined2 *)((char *)&auVar1 + 14)) = (short)((uint)gen_fl2bits(fVar8) >> 0x10);
      memcpy(&(*(gen_v16 *)(pfVar17 + iVar13 + 4)), &(auVar1), sizeof(auVar1) < sizeof(*(gen_v16 *)(pfVar17 + iVar13 + 4)) ? sizeof(auVar1) : sizeof(*(gen_v16 *)(pfVar17 + iVar13 + 4)));
      pfVar5 = pfVar17 + iVar13 + 8;
      *pfVar5 = fVar23;
      pfVar5[1] = fVar24;
      pfVar5[2] = fVar25;
      pfVar5[3] = fVar26;
      (*(undefined2 *)((char *)&auVar2 + 4)) = (short)(uint)gen_fl2bits(fVar10);
      (*(undefined4 *)((char *)&auVar2 + 0)) = (undefined4)gen_fl2bits(fVar9);
      (*(undefined2 *)((char *)&auVar2 + 6)) = (short)((uint)gen_fl2bits(fVar10) >> 0x10);
      (*(undefined2 *)((char *)&auVar2 + 8)) = (short)(uint)gen_fl2bits(fVar11);
      (*(undefined2 *)((char *)&auVar2 + 10)) = (short)((uint)gen_fl2bits(fVar11) >> 0x10);
      (*(undefined2 *)((char *)&auVar2 + 12)) = (short)(uint)gen_fl2bits(fVar12);
      (*(undefined2 *)((char *)&auVar2 + 14)) = (short)((uint)gen_fl2bits(fVar12) >> 0x10);
      memcpy(&(*(gen_v16 *)(pfVar17 + iVar13 + 0xc)), &(auVar2), sizeof(auVar2) < sizeof(*(gen_v16 *)(pfVar17 + iVar13 + 0xc)) ? sizeof(auVar2) : sizeof(*(gen_v16 *)(pfVar17 + iVar13 + 0xc)));
      iVar13 = iVar13 + 0x10;
    } while (iVar13 != 0);
  }
LAB_00cfe5ed: ;
  while (fVar29 = fVar19, (uVar15 & 0xf) != 0) {
    sVar3 = *psVar16;
    psVar16 = psVar16 + 1;
    uVar15 = uVar15 - 1;
    fVar19 = (float)(int)sVar3 * fVar27;
    fVar28 = fVar27 + fVar29;
    if (iVar4 != 0) {
      fVar19 = fVar19 + *pfVar17;
    }
    *pfVar17 = fVar19;
    pfVar17 = pfVar17 + 1;
    fVar27 = fVar30;
    fVar30 = fVar31;
    fVar31 = fVar32;
    fVar32 = fVar28;
    fVar19 = fVar33;
    fVar33 = fVar34;
    fVar34 = fVar35;
    fVar35 = fVar29;
  }
  return 0;
}

/* ref: FUN_00cfe670 */
uint F_00cfe670(unsigned int gen_a0)
{
  GEN_ENTER(0xcfe670u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00cfe6a0 */
uint F_00cfe6a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcfe6a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00cfe6c0 */
uint F_00cfe6c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcfe6c0u, gen_a0, 0u, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  return (uint)*param_1;
}

/* ref: FUN_00cfe700 */
uint F_00cfe700(unsigned int gen_a0)
{
  GEN_ENTER(0xcfe700u, gen_a0, 0u, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  return (uint)*param_1;
}

/* ref: FUN_00cfe740 */
uint F_00cfe740(unsigned int gen_a0)
{
  GEN_ENTER(0xcfe740u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00cfe760 */
uint F_00cfe760(unsigned int gen_a0)
{
  GEN_ENTER(0xcfe760u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00cfe780 */
uint F_00cfe780(unsigned int gen_a0)
{
  GEN_ENTER(0xcfe780u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00cfe7a0 */
unsigned int F_00cfe7a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcfe7a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
                    
                    
  (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0xcfeaf8))[(int)(*(int *)(param_1 + 0x10))])))();
  return 0;
}

/* ref: FUN_00cfeb30 */
uint F_00cfeb30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcfeb30u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  uint param_4 = (uint)gen_a3;
  BOOL BVar1;
  
  if (param_1 != 0) {
    if (param_1 == 1) {
      if (param_2 == 1) {
        if (param_3 == 2) {
          BVar1 = gen_imp_IsProcessorFeaturePresent(10);
          if ((BVar1 != 0) && ((param_4 & 4) != 0)) {
            return 0xcfddb0;
          }
          return 0xcfc120;
        }
        if (param_3 == 6) {
          BVar1 = gen_imp_IsProcessorFeaturePresent(10);
          if ((BVar1 != 0) && ((param_4 & 4) != 0)) {
            return 0xcfdfc0;
          }
          return 0xcfc220;
        }
      }
      else if (param_2 == 2) {
        if (param_3 == 6) {
          return 0xcfc490;
        }
      }
      else if (param_2 == 6) {
        if (param_3 == 2) {
          return 0xcfc980;
        }
      }
      else if ((param_2 == 4) && (param_3 == 6)) {
        return 0xcfce10;
      }
      if ((param_4 & 2) != 0) {
        BVar1 = gen_imp_IsProcessorFeaturePresent(10);
        if ((BVar1 != 0) &&
           (((param_4 & 1) != 0 || (((param_2 < 5 && (param_2 != 3)) && ((param_4 & 4) != 0)))))) {
          return 0xcfe300;
        }
        if (param_2 < 7) {
          return 0xcfd750;
        }
      }
      return 0xcfbf33;
    }
    if (param_1 < 2) {
      return 0;
    }
    if (6 < param_1) {
      if (param_1 != 7) {
        return 0;
      }
      if (param_2 == 1) {
        if (param_3 == 2) {
          BVar1 = gen_imp_IsProcessorFeaturePresent(6);
          if ((BVar1 != 0) && ((param_4 & 4) != 0)) {
            return 0xcfb810;
          }
          return 0xcf9f10;
        }
        if (param_3 == 6) {
          BVar1 = gen_imp_IsProcessorFeaturePresent(6);
          if ((BVar1 != 0) && ((param_4 & 4) != 0)) {
            return 0xcfb9d0;
          }
          return 0xcf9fe0;
        }
      }
      else if (param_2 == 2) {
        if (param_3 == 6) {
          return 0xcfa210;
        }
      }
      else if (param_2 == 6) {
        if (param_3 == 2) {
          return 0xcfa670;
        }
      }
      else if ((param_2 == 4) && (param_3 == 6)) {
        return 0xcfaa50;
      }
      if ((param_4 & 2) != 0) {
        BVar1 = gen_imp_IsProcessorFeaturePresent(6);
        if ((BVar1 != 0) &&
           (((param_4 & 1) != 0 || (((param_2 < 5 && (param_2 != 3)) && ((param_4 & 4) != 0)))))) {
          return 0xcfbc70;
        }
        if (param_2 < 7) {
          return 0xcfb2a0;
        }
      }
      return 0xcf9d75;
    }
  }
  return 0xcfe7a0;
}

/* ref: FUN_00cfed50 */
uint F_00cfed50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xcfed50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  char * param_6 = (char *)(uintptr_t)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  F_00cff8c0(this,param_1,param_2,param_3,param_4,param_5,1,param_7,0x10);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x113159c));
  F_00ce4660((undefined *)((int)this + 0x48));
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(param_6 + 4);
  *(undefined4 *)((int)this + 100) = *(undefined4 *)(param_6 + 8);
  if (*param_6 != '\0') {
    iVar2 = *(int *)(param_6 + 0x14);
    (*(int *)(gen_frame + 0x18)) = 0;
    (*(int *)(gen_frame + 0x18)) = param_2 + iVar2;
    bVar1 = param_6[1];
    iVar3 = *(int *)(param_6 + 0x10);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)0x0;
    (*(int *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(char * PTR32 *)(gen_frame + 0x4)) = param_6 + (uint)bVar1 + iVar3;
    (*(int *)(gen_frame + 0xc)) = iVar2;
    uVar4 = F_00ce4700((undefined *)((int)this + 0x48),&(*(undefined4 *)(gen_frame + 0x0)),0);
    if (uVar4 == 0xffffffff) {
      F_00cff770(this,1);
    }
  }
  return (uint)this;
}

/* ref: FUN_00cfee00 */
unsigned int F_00cfee00(unsigned int gen_a0)
{
  GEN_ENTER(0xcfee00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x113159c));
  F_00ce4c50((undefined *)((int)this + 0x48));
  F_00cffb40(this);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::OggVorbisDataTransfer::vf8 */
uint F_00cfee20(unsigned int gen_a0)
{
  GEN_ENTER(0xcfee20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  code * pcVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this);
  if ((char)uVar3 != '\0') {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    F_00c48350(*((undefined * PTR32 *)GEN_TOP((this + *(int *)(this + 8) * 4 + 0x34))),0,uVar3);
    return *(int *)(this + 8) + 1;
  }
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(uint *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  uVar3 = F_00cff810(this + 0x1c);
  (*(uint *)(gen_frame + 0x4)) = uVar3;
  (*(int *)(gen_frame + 0xc)) = *(int *)(this + 0x20) - *(int *)(this + 0x24);
  pcVar1 = *(gen_code32 *)(*(int *)this + 0x10);
  (*(int *)(gen_frame + 0x0)) = *((int *)GEN_TOP((this + *(int *)(this + 8) * 4 + 0x34)));
  uVar3 = (*pcVar1)(this);
  (*(uint *)(gen_frame + 0x8)) = uVar3;
  F_00ce4700(this + 0x48,&(*(int *)(gen_frame + 0x0)),0);
  F_00cff820(this + 0x1c,(*(undefined4 *)(gen_frame + 0x14)));
  this[*(int *)(this + 8) + 0x44] = (undefined1)0x0;
  bVar2 = F_00cff870(this + 0x1c);
  if (bVar2 == 0) {
    bVar2 = F_00cff8a0(this + 0x1c);
    if (bVar2 != 0) {
      F_00ce45d0(this + 0x48,*(undefined4 *)(this + 100));
      F_00cff8b0(this + 0x1c);
      uVar3 = F_00cff810(this + 0x1c);
      (*(uint *)(gen_frame + 0x4)) = uVar3;
      (*(int *)(gen_frame + 0xc)) = *(int *)(this + 0x20) - *(int *)(this + 0x24);
      F_00ce4700(this + 0x48,&(*(int *)(gen_frame + 0x0)),1);
      F_00cff820(this + 0x1c,(*(undefined4 *)(gen_frame + 0x14)));
      this[*(int *)(this + 8) + 0x44] = (undefined1)0x1;
    }
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    F_00c48350(((undefined *)GEN_TOP((*((int *)GEN_TOP((this + *(int *)(this + 8) * 4 + 0x34))) + (*(uint *)(gen_frame + 0x10))))),0,uVar3 - (*(uint *)(gen_frame + 0x10)));
    if ((*(uint *)(gen_frame + 0x10)) == 0) {
      return *(int *)(this + 8) + 1;
    }
  }
  if ((*(uint *)(gen_frame + 0x10)) < (*(uint *)(gen_frame + 0x8))) {
    F_00c48350((undefined *)((*(uint *)(gen_frame + 0x10)) + (*(int *)(gen_frame + 0x0))),0,(*(uint *)(gen_frame + 0x8)) - (*(uint *)(gen_frame + 0x10)));
  }
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this);
  *(uint *)(this + 8) = (*(int *)(this + 8) + 1U) % uVar3;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf4 */
uint F_00cfefa0(unsigned int gen_a0)
{
  GEN_ENTER(0xcfefa0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf5 */
uint F_00cfefb0(unsigned int gen_a0)
{
  GEN_ENTER(0xcfefb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf6 */
uint F_00cfefc0(unsigned int gen_a0)
{
  GEN_ENTER(0xcfefc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf7 */
uint F_00cfefd0(unsigned int gen_a0)
{
  GEN_ENTER(0xcfefd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf16 */
unsigned int F_00cfefe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcfefe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf17 */
unsigned int F_00cfeff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcfeff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf18 */
uint F_00cff000(void)
{
  GEN_ENTER(0xcff000u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf19 */
unsigned int F_00cff010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcff010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf20 */
byte F_00cff020(unsigned int gen_a0)
{
  GEN_ENTER(0xcff020u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x1a);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf21 */
unsigned int F_00cff030(void)
{
  GEN_ENTER(0xcff030u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf22 */
byte F_00cff040(void)
{
  GEN_ENTER(0xcff040u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf23 */
unsigned int F_00cff050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcff050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf13 */
uint F_00cff070(unsigned int gen_a0)
{
  GEN_ENTER(0xcff070u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x24);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf14 */
uint F_00cff080(unsigned int gen_a0)
{
  GEN_ENTER(0xcff080u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x20);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf15 */
byte F_00cff090(unsigned int gen_a0)
{
  GEN_ENTER(0xcff090u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x30);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::OggVorbisDataTransfer::vf0 */
uint F_00cff0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcff0a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x113159c));
  F_00ce4c50(this + 0x48);
  F_00cffb40(this);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IDataTransfer::vf0 */
uint F_00cff0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcff0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x113164c));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::AdpcmStreamDataTransferEx::vf26 */
unsigned int F_00cff160(void)
{
  GEN_ENTER(0xcff160u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::AdpcmStreamDataTransferEx::vf25 */
uint F_00cff170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcff170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint local_8;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x14))))(*(int * PTR32 *)(this + 4),0);
  uVar3 = F_00ce93e0(uVar2);
  *param_1 = *(int *)(this + 0xc) * *(int *)(this + 0x14) + *(int *)(this + 0x10);
  local_8 = 0;
  uVar4 = F_00ce1c20(*(undefined * PTR32 *)(this + 4));
  param_1[1] = uVar4;
  if (*(int *)(this + 0xc) < (int)uVar4) {
    param_1[1] = *(int *)(this + 0xc);
  }
  iVar5 = param_1[1] % (int)(uint)*(ushort *)(uVar2 + uVar3 + 0xc);
  if (iVar5 != 0) {
    param_1[1] = param_1[1] - iVar5;
  }
  iVar5 = param_1[1];
  uVar2 = F_00ce1c00(*(undefined * PTR32 *)(this + 4));
  F_00c46aa0(*param_1,uVar2,iVar5);
  F_00ce1f10(*(undefined * PTR32 *)(this + 4),param_1[1]);
  bVar1 = F_00ce1dc0(*(undefined4 *)(this + 4));
  if (bVar1 == 0) {
    bVar1 = F_00ce1df0(*(undefined * PTR32 *)(this + 4));
    if (bVar1 != 0) {
      local_8 = 1;
    }
  }
  else {
    F_00ce1f50(*(undefined * PTR32 *)(this + 4));
  }
  *(int *)(this + 0x14) = (*(int *)(this + 0x14) + 1) % 3;
  return local_8;
}

/* ref: FUN_00cff240 */
uint F_00cff240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcff240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)((int)this + 0xc) = 0;
  *(int *)((int)this + 4) = param_1;
  *(undefined1 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x1131724));
  iVar1 = *(int *)(param_1 + 0xd0);
  *(int *)((int)this + 0xc) = iVar1;
  uVar2 = F_00cf9ab0((undefined *)(param_1 + 0xa4),iVar1 * 3,4);
  *(uint *)((int)this + 0x10) = uVar2;
  return (uint)this;
}

/* ref: FUN_00cff290 */
uint F_00cff290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcff290u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x11316b4));
  in_ecx[1] = param_2;
  *(undefined1 *)(in_ecx + 2) = 0;
  return (uint)in_ecx;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf7 */
uint F_00cff2b0(void)
{
  GEN_ENTER(0xcff2b0u, 0u, 0u, 0u, 0u);
  return 3;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf20 */
byte F_00cff2c0(void)
{
  GEN_ENTER(0xcff2c0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf9 */
byte F_00cff2d0(unsigned int gen_a0)
{
  GEN_ENTER(0xcff2d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 8);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf2 */
uint F_00cff2e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcff2e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf10 */
unsigned int F_00cff2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcff2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf1 */
unsigned int F_00cff300(void)
{
  GEN_ENTER(0xcff300u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf3 */
byte F_00cff310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcff310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf4 */
uint F_00cff320(void)
{
  GEN_ENTER(0xcff320u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf5 */
uint F_00cff330(void)
{
  GEN_ENTER(0xcff330u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf6 */
uint F_00cff340(void)
{
  GEN_ENTER(0xcff340u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf8 */
uint F_00cff350(void)
{
  GEN_ENTER(0xcff350u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf11 */
unsigned int F_00cff360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcff360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf12 */
unsigned int F_00cff370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcff370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf13 */
uint F_00cff380(void)
{
  GEN_ENTER(0xcff380u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf14 */
uint F_00cff390(void)
{
  GEN_ENTER(0xcff390u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf15 */
byte F_00cff3a0(void)
{
  GEN_ENTER(0xcff3a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf16 */
unsigned int F_00cff3b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcff3b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf17 */
unsigned int F_00cff3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcff3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf18 */
uint F_00cff3d0(void)
{
  GEN_ENTER(0xcff3d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf19 */
unsigned int F_00cff3e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcff3e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf21 */
unsigned int F_00cff3f0(void)
{
  GEN_ENTER(0xcff3f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf22 */
byte F_00cff400(void)
{
  GEN_ENTER(0xcff400u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf23 */
unsigned int F_00cff410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcff410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamDataTransferEx::vf0 */
uint F_00cff420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcff420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x113164c));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::AdpcmStreamDataTransferEx::vf24 */
uint F_00cff450(void)
{
  GEN_ENTER(0xcff450u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::AdpcmStreamDataTransferEx::vf0 */
uint F_00cff460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcff460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x113164c));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cff490 */
uint F_00cff490(unsigned int gen_a0)
{
  GEN_ENTER(0xcff490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x11317dc));
  uVar1 = F_00ce4c50((undefined *)((int)this + 0x14));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x113164c));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::OggVorbisStreamDataTransferEx::vf26 */
uint F_00cff4b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcff4b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ce46b0(this + 0x14);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::OggVorbisStreamDataTransferEx::vf25 */
uint F_00cff4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcff4c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  uVar7 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this);
  uVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32));
  if ((char)uVar5 != '\0') {
    return 1;
  }
  iVar1 = *(int *)(this + 0xc);
  iVar8 = *(int *)(this + 0x34) * iVar1 + *(int *)(this + 0x10);
  iVar6 = 0;
  bVar3 = false;
  ((byte *)(gen_frame + 0x8))[0] = 0;
  ((byte *)(gen_frame + 0x8))[1] = 0;
  ((byte *)(gen_frame + 0x8))[2] = 0;
  ((byte *)(gen_frame + 0x8))[3] = 0;
  ((byte *)(gen_frame + 0x8))[4] = 0;
  ((byte *)(gen_frame + 0x8))[5] = 0;
  ((byte *)(gen_frame + 0x8))[6] = 0;
  ((byte *)(gen_frame + 0x8))[7] = 0;
  ((byte *)(gen_frame + 0x8))[8] = 0;
  ((byte *)(gen_frame + 0x8))[9] = 0;
  ((byte *)(gen_frame + 0x8))[10] = 0;
  ((byte *)(gen_frame + 0x8))[0xb] = 0;
  ((byte *)(gen_frame + 0x8))[0xc] = 0;
  ((byte *)(gen_frame + 0x8))[0xd] = 0;
  ((byte *)(gen_frame + 0x8))[0xe] = 0;
  ((byte *)(gen_frame + 0x8))[0xf] = 0;
  ((byte *)(gen_frame + 0x8))[0x10] = 0;
  ((byte *)(gen_frame + 0x8))[0x11] = 0;
  ((byte *)(gen_frame + 0x8))[0x12] = 0;
  ((byte *)(gen_frame + 0x8))[0x13] = 0;
  ((byte *)(gen_frame + 0x8))[0x14] = 0;
  ((byte *)(gen_frame + 0x8))[0x15] = 0;
  ((byte *)(gen_frame + 0x8))[0x16] = 0;
  ((byte *)(gen_frame + 0x8))[0x17] = 0;
  ((byte *)(gen_frame + 0x8))[0x18] = 0;
  ((byte *)(gen_frame + 0x8))[0x19] = 0;
  ((byte *)(gen_frame + 0x8))[0x1a] = 0;
  ((byte *)(gen_frame + 0x8))[0x1b] = 0;
  ((byte *)(gen_frame + 0x8))[0x20] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = uVar2 & 0xffffff00;
  if (0 < iVar1) {
    do {
      if (!bVar3) {
        uVar2 = *(undefined4 *)(this + 0xc);
        (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) = iVar8;
        (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) = uVar2;
      }
      ((byte *)(gen_frame + 0x8))[0x1c] = ((byte *)(gen_frame + 0x8))[0x10];
      ((byte *)(gen_frame + 0x8))[0x1d] = ((byte *)(gen_frame + 0x8))[0x11];
      ((byte *)(gen_frame + 0x8))[0x1e] = ((byte *)(gen_frame + 0x8))[0x12];
      ((byte *)(gen_frame + 0x8))[0x1f] = ((byte *)(gen_frame + 0x8))[0x13];
      uVar5 = F_00ce1c00(*(undefined * PTR32 *)(this + 4));
      ((byte *)(gen_frame + 0x8))[4] = (char)uVar5;
      ((byte *)(gen_frame + 0x8))[5] = (char)(uVar5 >> 8);
      ((byte *)(gen_frame + 0x8))[6] = (char)(uVar5 >> 0x10);
      ((byte *)(gen_frame + 0x8))[7] = (char)(uVar5 >> 0x18);
      uVar5 = F_00ce1c20(*(undefined * PTR32 *)(this + 4));
      ((byte *)(gen_frame + 0x8))[0xc] = (char)uVar5;
      ((byte *)(gen_frame + 0x8))[0xd] = (char)(uVar5 >> 8);
      ((byte *)(gen_frame + 0x8))[0xe] = (char)(uVar5 >> 0x10);
      ((byte *)(gen_frame + 0x8))[0xf] = (char)(uVar5 >> 0x18);
      uVar5 = F_00ce4700(this + 0x14,((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
      if (uVar5 == 0xffffffff) {
        return 0xffffffff;
      }
      F_00ce1f10(*(undefined * PTR32 *)(this + 4),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 20)));
      bVar4 = F_00ce1dc0(*(undefined4 *)(this + 4));
      if (bVar4 == 0) {
        bVar4 = F_00ce1df0(*(undefined * PTR32 *)(this + 4));
        if ((bVar4 != 0) && ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 16)) == 0)) {
          this[8] = (undefined1)0x1;
          uVar7 = 1;
        }
      }
      else {
        F_00ce1f50(*(undefined * PTR32 *)(this + 4));
        F_00ce45d0(this + 0x14,*(undefined4 *)(this + 0x30));
        uVar7 = 3;
      }
      iVar6 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 16));
      if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 28)) == (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 16))) break;
      bVar3 = true;
      ((byte *)(gen_frame + 0x8))[0x20] = 1;
      ((byte *)(gen_frame + 0x8))[0x20] = 1;
    } while ((int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 16)) < *(int *)(this + 0xc));
  }
  param_1[1] = iVar6;
  *param_1 = iVar8;
  *(int *)(this + 0x34) = (*(int *)(this + 0x34) + 1) % 3;
  return uVar7;
}

/* ref: FUN_00cff5e0 */
uint F_00cff5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcff5e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char * pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int * piVar5;
  uint uVar6;
  
  *(int * PTR32 *)((int)this + 4) = param_1;
  *(undefined1 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x11317dc));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  F_00ce4660((undefined *)((int)this + 0x14));
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  piVar5 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1,0)));
  iVar2 = param_1[0x34];
  *(int *)((int)this + 0xc) = iVar2;
  uVar6 = F_00cf9ab0(param_1 + 0x29,iVar2 * 3,4);
  *(uint *)((int)this + 0x10) = uVar6;
  uVar6 = F_00ce93e0(piVar5);
  pcVar1 = (char *)((int)piVar5 + uVar6);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(pcVar1 + 4);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(pcVar1 + 8);
  if (*pcVar1 != '\0') {
    iVar2 = *piVar5;
    iVar3 = *(int *)(pcVar1 + 0x14);
    (*(int *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(int *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(int *)(gen_frame + 0x18)) = iVar2 + iVar3;
    uVar6 = F_00ce93e0(piVar5);
    uVar4 = *(undefined4 *)(pcVar1 + 0x14);
    (*(int *)(gen_frame + 0x4)) = uVar6 + (byte)pcVar1[1] + *(int *)(pcVar1 + 0x10) + (int)piVar5;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = uVar4;
    uVar6 = F_00ce4700((undefined *)((int)this + 0x14),&(*(undefined4 *)(gen_frame + 0x0)),0);
    if (uVar6 == 0xffffffff) {
      *(undefined1 *)((int)this + 8) = 1;
      return (uint)this;
    }
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::OggVorbisStreamDataTransferEx::vf24 */
uint F_00cff6d0(void)
{
  GEN_ENTER(0xcff6d0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::OggVorbisStreamDataTransferEx::vf0 */
uint F_00cff6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcff6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x11317dc));
  F_00ce4c50(this + 0x14);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x113164c));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cff710 */
uint F_00cff710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcff710u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf2 */
uint F_00cff720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcff720u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (*(int *)(in_ecx + 0x10) <= param_2) {
    return 0;
  }
  return *(uint *)(in_ecx + 0x34 + param_2 * 4);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf3 */
byte F_00cff740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcff740u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (*(int *)(in_ecx + 0x10) <= param_2) {
    return 0;
  }
  return *(byte *)(param_2 + 0x44 + in_ecx);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf9 */
byte F_00cff760(unsigned int gen_a0)
{
  GEN_ENTER(0xcff760u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x18);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf10 */
byte F_00cff770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcff770u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x18) = (byte)param_2;
  return (byte)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf12 */
unsigned int F_00cff780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcff780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined4 *)(this + 0x24) = param_1;
  if (((char)param_2 != '\0') && (uVar1 = 0, *(int *)(this + 0x10) != 0)) {
    do {
      ((code *)*(gen_code32 *)(*(int *)this + 0x20))(this);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(this + 0x10));
  }
  return 0;
}

/* ref: FUN_00cff7c0 */
uint F_00cff7c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcff7c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x14) = 0;
  return (uint)this;
}

/* ref: FUN_00cff7f0 */
uint F_00cff7f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcff7f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return param_1;
}

/* ref: FUN_00cff810 */
uint F_00cff810(unsigned int gen_a0)
{
  GEN_ENTER(0xcff810u, gen_a0, 0u, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  return in_ecx[2] + *in_ecx;
}

/* ref: FUN_00cff820 */
uint F_00cff820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcff820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  iVar1 = *(int *)((int)this + 4);
  iVar2 = *(int *)((int)this + 8);
  uVar3 = param_1;
  if (iVar1 <= iVar2) {
    if (*(char *)((int)this + 0x14) == '\x01') {
      *(undefined1 *)((int)this + 0x15) = 1;
      *(int *)((int)this + 8) = iVar1;
      return param_1 + (iVar1 - iVar2);
    }
    uVar3 = param_1 + (iVar1 - iVar2);
    *(undefined1 *)((int)this + 0xc) = 1;
    *(int *)((int)this + 8) = iVar1;
  }
  return uVar3;
}

/* ref: FUN_00cff870 */
byte F_00cff870(unsigned int gen_a0)
{
  GEN_ENTER(0xcff870u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0xc);
}

/* ref: FUN_00cff880 */
uint F_00cff880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcff880u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  if ((int)param_1 < param_2) {
    *(uint *)((int)this + 0x10) = param_1;
    *(int *)((int)this + 4) = param_2;
    *(undefined1 *)((int)this + 0x14) = 1;
  }
  return param_1;
}

/* ref: FUN_00cff8a0 */
byte F_00cff8a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcff8a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x15);
}

/* ref: FUN_00cff8b0 */
uint F_00cff8b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcff8b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x15) = 0;
  *(undefined1 *)(in_ecx + 0xc) = 0;
  *(uint *)(in_ecx + 8) = *(uint *)(in_ecx + 0x10);
  return *(uint *)(in_ecx + 0x10);
}

/* ref: FUN_00cff8c0 */
uint F_00cff8c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcff8c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  int param_7 = (int)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  
  uVar3 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x1131894));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = param_3;
  uVar2 = param_4;
  if (4 < param_4) {
    uVar2 = 4;
  }
  *(uint *)((int)this + 0x10) = uVar2;
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(char *)((int)this + 0x19) = (char)param_6;
  *(undefined1 *)((int)this + 0x18) = 0;
  *(bool *)((int)this + 0x1a) = param_7 != 0;
  *(undefined4 *)((int)this + 0x1c) = param_1;
  *(undefined4 *)((int)this + 0x20) = param_2;
  *(undefined4 *)((int)this + 0x24) = param_5;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined2 *)((int)this + 0x30) = 0;
  puVar4 = (uint *)((int)this + 0x34);
  do {
    if ((uVar3 < *(uint *)((int)this + 0x10)) && ((char)param_6 != '\0')) {
      uVar1 = *(undefined4 *)((int)this + 0xc);
      if (param_7 == 0) {
        if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
          REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
        }
        uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c),uVar1,"CDev.Engine.Sd",0,0,0x10);
        *puVar4 = uVar2;
      }
      else {
        uVar2 = F_00cf9ab0((undefined *)(param_7 + 0x78),uVar1,param_8);
        *puVar4 = uVar2;
      }
    }
    else {
      *puVar4 = 0;
    }
    *(undefined1 *)((int)this + uVar3 + 0x44) = 0;
    uVar3 = uVar3 + 1;
    puVar4 = puVar4 + 1;
  } while (uVar3 < 4);
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf1 */
unsigned int F_00cff9b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcff9b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pAVar2;
  
  uVar1 = 0;
  if (*(int *)(this + 0x10) != 0) {
    pAVar2 = this + 0x34;
    do {
      if (((*(int *)pAVar2 != 0) && (this[0x19] != (undefined1)0x0)) &&
         (this[0x1a] == (undefined1)0x0)) {
        F_00406810(*(int *)pAVar2);
      }
      *(int *)pAVar2 = 0;
      uVar1 = uVar1 + 1;
      pAVar2 = pAVar2 + 4;
    } while (uVar1 < *(uint *)(this + 0x10));
  }
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf8 */
uint F_00cffa00(unsigned int gen_a0)
{
  GEN_ENTER(0xcffa00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (this[0x28] == (undefined1)0x1) {
    F_00c48350(*((undefined * PTR32 *)GEN_TOP((this + *(int *)(this + 8) * 4 + 0x34))),0,*(gen_size32 *)(this + 0xc));
    return *(int *)(this + 8) + 1;
  }
  iVar1 = *(int *)(this + 0x20);
  uVar3 = *(uint *)(this + 0xc);
  *(uint *)(this + 0x24) = *(int *)(this + 0x24) + uVar3;
  if (iVar1 <= *(int *)(this + 0x24)) {
    if (this[0x30] == (undefined1)0x1) {
      this[0x31] = (undefined1)0x1;
    }
    else {
      this[0x28] = (undefined1)0x1;
    }
    uVar3 = uVar3 + (iVar1 - *(int *)(this + 0x24));
    *(int *)(this + 0x24) = iVar1;
  }
  if (this[0x19] == (undefined1)0x0) {
    *((uint *)GEN_TOP((this + *(int *)(this + 8) * 4 + 0x34))) =
         (*(int *)(this + 0x24) - uVar3) + *(int *)(this + 0x1c);
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(this + 0xc);
  }
  else {
    F_00c46aa0(*((undefined4 *)GEN_TOP((this + *(int *)(this + 8) * 4 + 0x34))),
               (*(int *)(this + 0x24) - uVar3) + *(int *)(this + 0x1c),uVar3);
    if ((this[0x28] != (undefined1)0x0) && (uVar3 < *(uint *)(this + 0xc))) {
      F_00c48350(((undefined *)GEN_TOP((*((int *)GEN_TOP((this + *(int *)(this + 8) * 4 + 0x34))) + uVar3))),0,
              *(uint *)(this + 0xc) - uVar3);
    }
  }
  if (this[0x31] != (undefined1)0x0) {
    this[0x31] = (undefined1)0x0;
    this[0x28] = (undefined1)0x0;
    *(undefined4 *)(this + 0x24) = *(undefined4 *)(this + 0x2c);
    if (this[0x19] == (undefined1)0x0) {
      *(uint *)(this + 0x14) = uVar3;
    }
    else {
      uVar2 = F_00cff820(this + 0x1c,*(int *)(this + 0xc) - uVar3);
      F_00c46aa0(*((int *)GEN_TOP((this + *(int *)(this + 8) * 4 + 0x34))) + uVar3,
                 (*(int *)(this + 0x24) - uVar2) + *(int *)(this + 0x1c),uVar2);
      *(undefined4 *)(this + 0x14) = *(undefined4 *)(this + 0xc);
    }
  }
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  if (*(uint *)(this + 0x10) <= *(uint *)(this + 8)) {
    *(undefined4 *)(this + 8) = 0;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf11 */
uint F_00cffb20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcffb20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  if ((int)param_1 < param_2) {
    *(uint *)(this + 0x2c) = param_1;
    *(int *)(this + 0x20) = param_2;
    this[0x30] = (undefined1)0x1;
  }
  return param_1;
}

/* ref: FUN_00cffb40 */
unsigned int F_00cffb40(unsigned int gen_a0)
{
  GEN_ENTER(0xcffb40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x1131894));
  F_00cff9b0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x113164c));
  return 0;
}

/* ref: FUN_00cffb60 */
uint F_00cffb60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcffb60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cf9ab0((undefined *)((int)this + 0x78),param_1,param_2);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AudioDataTransfer::vf0 */
uint F_00cffb70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcffb70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x1131894));
  F_00cff9b0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x113164c));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cffbb0 */
uint F_00cffbb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcffbb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1131904));
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00cffbf0 */
uint F_00cffbf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcffbf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1131904));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  return (uint)this;
}

/* ref: FUN_00cffc10 */
unsigned int F_00cffc10(unsigned int gen_a0)
{
  GEN_ENTER(0xcffc10u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1131904));
  return 0;
}

/* ref: FUN_00cffc20 */
uint F_00cffc20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcffc20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (this != param_1) {
    *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)param_1 + 4);
    *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)param_1 + 8);
  }
  return (uint)this;
}

/* ref: FUN_00cffcb0 */
unsigned int F_00cffcb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcffcb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xdc))))(*(int * PTR32 *)((int)this + 8));
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x14))))
                            (*(int * PTR32 *)((int)this + 8),*(undefined4 *)((int)this + 4))));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1);
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xe0))))(*(int * PTR32 *)((int)this + 8));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cffd70 */
byte F_00cffd70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcffd70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  byte bVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xdc))))(*(int * PTR32 *)((int)this + 8));
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x14))))
                            (*(int * PTR32 *)((int)this + 8),*(undefined4 *)((int)this + 4))));
  bVar3 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1,param_1);
    bVar3 = (byte)uVar2;
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xe0))))(*(int * PTR32 *)((int)this + 8));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar3;
}

/* ref: FUN_00cffde0 */
byte F_00cffde0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcffde0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  byte bVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xdc))))(*(int * PTR32 *)((int)this + 8));
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x14))))
                            (*(int * PTR32 *)((int)this + 8),*(undefined4 *)((int)this + 4))));
  bVar3 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1,param_1);
    bVar3 = (byte)uVar2;
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xe0))))(*(int * PTR32 *)((int)this + 8));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar3;
}

/* ref: FUN_00cffe50 */
unsigned int F_00cffe50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcffe50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x60))))(*(int * PTR32 *)((int)this + 8),param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cffe80 */
byte F_00cffe80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcffe80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  byte bVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xdc))))(*(int * PTR32 *)((int)this + 8));
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x14))))
                            (*(int * PTR32 *)((int)this + 8),*(undefined4 *)((int)this + 4))));
  bVar3 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1,param_1);
    bVar3 = (byte)uVar2;
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xe0))))(*(int * PTR32 *)((int)this + 8));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar3;
}

/* ref: FUN_00cfff50 */
unsigned int F_00cfff50(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcfff50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int * piVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 0xdc))))(*(int * PTR32 *)(param_1 + 8));
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 0x14))))
                            (*(int * PTR32 *)(param_1 + 8),*(undefined4 *)(param_1 + 4))));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1,(undefined4)gen_fl2bits(param_2));
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 0xe0))))(*(int * PTR32 *)(param_1 + 8));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00d00000 */
byte F_00d00000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd00000u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)(param_1 + 4);
  gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d939c));
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d939c));
  iVar2 = *(int *)(param_2 + 4);
  gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d939c));
  return iVar1 == iVar2;
}

/* ref: FUN_00d00050 */
byte F_00d00050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd00050u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)(param_1 + 4);
  gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d939c));
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d939c));
  iVar2 = *(int *)(param_2 + 4);
  gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d939c));
  return iVar1 != iVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ListenerController::vf0 */
uint F_00d000a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd000a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1131904));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00d000d0 */
unsigned int F_00d000d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd000d0u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf1 */
unsigned int F_00d00140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd00140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  if (param_2 == -1) {
    *(uint *)(this + 0x40) = *(uint *)(this + 0x40) ^ (param_1 & 0xff ^ *(uint *)(this + 0x40)) & 1;
    return 0;
  }
  if (param_2 < 0x40) {
    uVar1 = 1 << ((byte)param_2 & 0x1f);
    if ((char)param_1 != '\0') {
      *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | uVar1;
      *(uint *)(this + 0x4c) = *(uint *)(this + 0x4c) | (int)uVar1 >> 0x1f;
      return 0;
    }
    *(uint *)(this + 0x48) = *(uint *)(this + 0x48) & ~uVar1;
    *(uint *)(this + 0x4c) = *(uint *)(this + 0x4c) & ~((int)uVar1 >> 0x1f);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf2 */
byte F_00d00190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd00190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 == -1) {
    return (byte)this[0x40] & 1;
  }
  if (param_1 < 0x40) {
    return ((ulonglong)(byte)param_1 < 0x40) *
           (char)(*(ulonglong *)(this + 0x48) >> (ulonglong)(byte)param_1) & 1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf3 */
uint F_00d001d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd001d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = ((param_2 & 0xff) * 2 ^ *(uint *)(in_ecx + 0x40)) & 2;
  *(uint *)(in_ecx + 0x40) = *(uint *)(in_ecx + 0x40) ^ uVar1;
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf4 */
byte F_00d001f0(unsigned int gen_a0)
{
  GEN_ENTER(0xd001f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x40) >> 1 & 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf5 */
byte F_00d00200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd00200u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (3 < param_2) {
    return 0;
  }
  *(char *)(in_ecx + 0x30) = (char)param_2;
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf6 */
byte F_00d00220(unsigned int gen_a0)
{
  GEN_ENTER(0xd00220u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x30);
}

/* ref: FUN_00d00230 */
uint F_00d00230(unsigned int gen_a0)
{
  GEN_ENTER(0xd00230u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x34);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf35 */
unsigned int F_00d00240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd00240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  undefined * _Dst;
  int iVar3;
  int iVar4;
  undefined * pLVar5;
  undefined * pLVar6;
  
  *(int * PTR32 *)(this + 8) = param_1;
  if ((param_1 != (int *)0x0) && (uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x110))(param_1), -1 < (int)uVar1)
     ) {
    pLVar5 = this + 0x10;
    pLVar6 = this + 0x134;
    do {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x100))))
                        (*(int * PTR32 *)(this + 8),pLVar5 + (-0x10 - (int)this));
      *pLVar5 = SUB41(uVar2,0);
      if (SUB41(uVar2,0) != (undefined1)0x0) {
        if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
          REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
        }
        _Dst = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                 (REFG(int * PTR32, 0x15d778c),(uVar2 & 0xff) * 0x28,"CDev.Engine.Sd.SoundLayout",0,
                                  0,0x10)));
        *(undefined * PTR32 *)(pLVar6 + -0x80) = _Dst;
        *(undefined * PTR32 *)pLVar6 = (undefined *)((int)_Dst + (uint)(byte)*pLVar5 * 0x14);
        F_00c48350(_Dst,0,(uint)(byte)*pLVar5 * 0x28);
        iVar4 = 0;
        if (*pLVar5 != (undefined1)0x0) {
          iVar3 = 0;
          do {
            *((undefined4 *)GEN_TOP((*(int *)(pLVar6 + -0x80) + 0xc + iVar3))) = 0xffffffff;
            *(undefined4 *)(*(int *)pLVar6 + 0xc + iVar3) = 0xffffffff;
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 + 0x14;
          } while (iVar4 < (int)(uint)(byte)*pLVar5);
        }
      }
      pLVar5 = pLVar5 + 1;
      pLVar6 = pLVar6 + 4;
    } while ((int)(pLVar5 + (-0x10 - (int)this)) <= (int)uVar1);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf36 */
uint F_00d00350(unsigned int gen_a0)
{
  GEN_ENTER(0xd00350u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf37 */
uint F_00d00360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd00360u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf38 */
uint F_00d00370(unsigned int gen_a0)
{
  GEN_ENTER(0xd00370u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: FUN_00d00380 */
float F_00d00380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd00380u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float fVar1;
  
  switch((unsigned int)(uintptr_t)(*(undefined1 *)(param_1 + 2))) {
  case 1: ;
    fVar1 = F_00d1aa00(param_1,param_2,param_3);
    return fVar1;
  case 2: ;
    fVar1 = F_00d196d0(param_1,param_2,param_3);
    return fVar1;
  case 3: ;
    fVar1 = F_00d18bc0(param_1,param_2,param_3);
    return fVar1;
  case 4: ;
    fVar1 = F_00d16880(param_1,param_2,param_3);
    return fVar1;
  case 5: ;
    fVar1 = F_00d12f80(param_1,param_2,param_3);
    return fVar1;
  case 6: ;
    fVar1 = F_00d10980(param_1,param_2,param_3);
    return fVar1;
  case 7: ;
    fVar1 = F_00d0ee30(param_1,param_2,param_3);
    return fVar1;
  case 8: ;
    fVar1 = F_00d0db20(param_1,param_2,param_3);
    return fVar1;
  default: ;
    return (float)(float10)0;
  case 0xe: ;
    fVar1 = F_00d0ab20(param_1,param_2,param_3);
    return fVar1;
  }
}

/* ref: FUN_00d00490 */
uint F_00d00490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd00490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  
  bVar1 = *(byte *)((int)this + 0x2d0);
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),bVar1);
  if (bVar1 < 0x40) {
    uVar2 = (uint)bVar1;
    *(undefined4 *)((int)this + uVar2 * 4 + 0x1d0) = param_1;
  }
  *(char *)((int)this + 0x2d0) = *(char *)((int)this + 0x2d0) + '\x01';
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf41 */
uint F_00d004c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd004c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00d04680(param_1,param_2,this);
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf44 */
uint F_00d004e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd004e0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xb4))(param_1,local_c);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf46 */
uint F_00d00530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd00530u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_3 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xbc))(param_1,param_2,local_c);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf49 */
uint F_00d00580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0xd00580u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  *(float *)(param_1 + 0x74) = param_4;
  *(uint *)(param_1 + 0x6c) = param_2;
  *(float *)(param_1 + 0x78) = param_5;
  *(undefined4 *)(param_1 + 0x70) = param_3;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf50 */
uint F_00d005a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd005a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  *param_1 = *(undefined4 *)(this + 0x6c);
  *param_2 = *(undefined4 *)(this + 0x70);
  *param_3 = *(undefined4 *)(this + 0x74);
  *param_4 = *(undefined4 *)(this + 0x78);
  return (uint)param_3;
}

/* ref: FUN_00d005d0 */
float F_00d005d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd005d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((*(int *)((int)this + 0x6c) == 0) || (*(int *)((int)this + 0x70) == 0)) {
    return (float)(float10)1;
  }
  if (*(int *)((int)this + 0x6c) == param_1) {
    return *(float *)((int)this + 0x74);
  }
  if (*(int *)((int)this + 0x70) == param_1) {
    return *(float *)((int)this + 0x78);
  }
  return (float)(float10)1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf51 */
unsigned int F_00d00610(unsigned int gen_a0)
{
  GEN_ENTER(0xd00610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (this[0xb0] != (undefined1)0x0) {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf52 */
unsigned int F_00d00630(unsigned int gen_a0)
{
  GEN_ENTER(0xd00630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (this[0xb0] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf33 */
byte F_00d00650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd00650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint in_ecx;
  int iVar2;
  undefined * pLVar3;
  undefined * pLVar4;
  int local_8;
  
  if (((byte)this[0x40] & 1) == 0) {
    if (this[0x1cc] != (undefined1)0x0) {
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x1b4));
    }
    pLVar4 = this + 0x10;
    pLVar3 = this + 0xb4;
    local_8 = 0x20;
    do {
      if (*pLVar4 != (undefined1)0x0) {
        F_00c46aa0(*(int *)(pLVar3 + 0x80),*(int *)pLVar3,(uint)(byte)*pLVar4 * 0x14);
        F_00c48350(*(undefined * PTR32 *)pLVar3,0,(uint)(byte)*pLVar4 * 0x14);
        iVar1 = 0;
        if (*pLVar4 != (undefined1)0x0) {
          iVar2 = 0;
          do {
            *(undefined4 *)(iVar2 + 0xc + *(int *)pLVar3) = 0xffffffff;
            iVar1 = iVar1 + 1;
            iVar2 = iVar2 + 0x14;
          } while (iVar1 < (int)(uint)(byte)*pLVar4);
        }
      }
      pLVar3 = pLVar3 + 4;
      pLVar4 = pLVar4 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    if (this[0x1cc] != (undefined1)0x0) {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x1b4));
    }
    if (this[0xb0] != (undefined1)0x0) {
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
    }
    in_ecx = ((code *)*(gen_code32 *)(*(int *)this + 0x98))(this);
    F_00d1b830(in_ecx);
    iVar1 = 0;
    if (0 < *(int *)(this + 0x58)) {
      do {
        F_00d07290(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x94) + iVar1 * 4))),param_1,0);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(this + 0x58));
    }
    iVar1 = 0;
    if (0 < *(int *)(this + 0x58)) {
      do {
        F_00d07290(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x94) + iVar1 * 4))),param_1,1);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(this + 0x58));
    }
    if (this[0xb0] != (undefined1)0x0) {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
    }
  }
  return 1;
}

/* ref: FUN_00d007a0 */
uint F_00d007a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd007a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (*(uint *)(param_1 + 0xc) < *(uint *)(param_2 + 0xc)) {
    return 0xffffffff;
  }
  return (uint)(*(uint *)(param_2 + 0xc) < *(uint *)(param_1 + 0xc));
}

/* ref: FUN_00d007c0 */
byte F_00d007c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd007c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * piVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  float fVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(float * PTR32 *)(gen_frame + 0x10)) = param_1;
  (*(float * PTR32 *)(gen_frame + 0x18)) = param_2;
  (*(int *)(gen_frame + 0x20)) = 0;
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x98))(this)));
  ((code *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1,((undefined1 *)(gen_frame + 0x28)));
  *(undefined1 *)((int)this + 0x2d0) = 0;
  if (*(char *)((int)this + 0x2ec) != '\0') {
    gen_imp_EnterCriticalSection((int)this + 0x2d4);
  }
  if (*(char *)((int)this + 0xb0) != '\0') {
    gen_imp_EnterCriticalSection((int)this + 0x98);
  }
  iVar3 = 0;
  if (0 < *(int *)((int)this + 0x58)) {
    do {
      F_00d07600(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x94) + iVar3 * 4))),((undefined1 *)(gen_frame + 0x28)));
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)this + 0x58));
  }
  if (*(char *)((int)this + 0xb0) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x98));
  }
  *(*(float * PTR32 *)(gen_frame + 0x18)) = (float)(float10)1;
  if (*(char *)((int)this + 0x2d0) != '\0') {
    (*(int *)(gen_frame + 0x14)) = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = (undefined4 *)((int)this + 0x1d0);
    do {
      piVar1 = (int *)*(*(undefined4 * PTR32 *)(gen_frame + 0x24));
      (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar1;
      uVar2 = F_00d1eee0(piVar1,((undefined1 *)(gen_frame + 0x28)));
      if (uVar2 != 0) {
        iVar3 = *piVar1;
        uVar6 = 0;
        fVar5 = F_00d1f050((*(int * PTR32 *)(gen_frame + 0x1c)),((undefined1 *)(gen_frame + 0x28)));
        ((code *)*(gen_code32 *)(iVar3 + 0x60))
                  ((*(int * PTR32 *)(gen_frame + 0x1c)),&(*(float *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0xc)),(undefined4)gen_fl2bits(fVar5),uVar6);
        (*(int *)(gen_frame + 0x20)) = 1;
        *(*(float * PTR32 *)(gen_frame + 0x10)) = (float)((float10)*(*(float * PTR32 *)(gen_frame + 0x10)) * (float10)(*(float *)(gen_frame + 0x8)));
        *(*(float * PTR32 *)(gen_frame + 0x18)) = (float)((float10)*(*(float * PTR32 *)(gen_frame + 0x18)) * (float10)(*(float *)(gen_frame + 0xc)));
        if ((float10)*(*(float * PTR32 *)(gen_frame + 0x10)) <= (float10)0) break;
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = (*(undefined4 * PTR32 *)(gen_frame + 0x24)) + 1;
      iVar3 = (*(int *)(gen_frame + 0x14)) + 1;
      (*(int *)(gen_frame + 0x14)) = iVar3;
    } while (iVar3 < (int)(uint)*(byte *)((int)this + 0x2d0));
  }
  if (*(char *)((int)this + 0x2ec) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2d4));
  }
  bVar4 = (*(int *)(gen_frame + 0x20)) != 0;
  *(undefined1 *)((int)this + 0x2d0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return bVar4;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf9 */
byte F_00d00940(unsigned int gen_a0)
{
  GEN_ENTER(0xd00940u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x40) >> 2 & 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf10 */
unsigned int F_00d00950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd00950u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x40) = *(uint *)(in_ecx + 0x40) | 4;
    return 0;
  }
  *(uint *)(in_ecx + 0x40) = *(uint *)(in_ecx + 0x40) & 0xfffffffb;
  return 0;
}

/* ref: FUN_00d00970 */
byte F_00d00970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd00970u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00d00980 */
unsigned int F_00d00980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd00980u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x40) = *(uint *)(in_ecx + 0x40) | 8;
    return 0;
  }
  *(uint *)(in_ecx + 0x40) = *(uint *)(in_ecx + 0x40) & 0xfffffff7;
  return 0;
}

/* ref: FUN_00d009a0 */
byte F_00d009a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd009a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x40) >> 3 & 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf27 */
uint F_00d009b0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xd009b0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0x98))(param_1)));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x84))(piVar1);
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf28 */
byte F_00d009f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd009f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x98))(this)));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x88))(piVar1,param_1,param_2);
    return 1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf29 */
uint F_00d00a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd00a30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xc) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf30 */
unsigned int F_00d00a40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd00a40u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[3]));
  }
  return 0;
}

/* ref: FUN_00d00a70 */
uint F_00d00a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd00a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  char cStack_e;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(uint *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,uVar3 & 0xff);
  ((code *)*(gen_code32 *)(*(int *)this + 0x30))(this,uVar3 >> 8 & 0xff);
  cStack_e = (char)(uVar3 >> 0x10);
  ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,(uint)(cStack_e != '\0'));
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this,uVar3 >> 0x18);
  *(undefined4 *)((int)this + 0x50) = uVar1;
  *(undefined4 *)((int)this + 0x54) = uVar2;
  return uVar3;
}

/* ref: FUN_00d00af0 */
uint F_00d00af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd00af0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = 0;
  if ((code *)*(gen_code32 *)((int)this + 0x2f4) != (code *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)((int)this + 0x2f4))(param_1,param_2);
  }
  return uVar1;
}

/* ref: FUN_00d00b10 */
uint F_00d00b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd00b10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = 0;
  if ((code *)*(gen_code32 *)((int)this + 0x2f8) != (code *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)((int)this + 0x2f8))(param_1,param_2);
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf67 */
uint F_00d00b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xd00b30u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  *(float *)(param_1 + 0x310) = param_4;
  *(uint *)(param_1 + 0x308) = param_2;
  *(undefined4 *)(param_1 + 0x30c) = param_3;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf69 */
uint F_00d00b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd00b60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  code * pcVar1;
  int * piVar2;
  
  *(float *)(this + 0x8c) = (float)(float10)0;
  pcVar1 = *(gen_code32 *)(*(int *)this + 0x98);
  *(float *)(this + 0x90) = (float)(float10)1;
  piVar2 = ((int *)GEN_TOP((*pcVar1)(this)));
  ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2,2,param_1);
  ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,0);
  ((code *)*(gen_code32 *)(*(int *)this + 0x84))(this,0);
  *param_2 = *(undefined4 *)(this + 0x8c);
  *param_3 = *(undefined4 *)(this + 0x90);
  return (uint)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf72 */
uint F_00d00bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, float gen_a8)
{
  GEN_ENTER(0xd00bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[9];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  memcpy(&gen_args[4], &gen_a4, sizeof gen_a4);
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  memcpy(&gen_args[8], &gen_a8, sizeof gen_a8);
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int * piVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x98))))((*(int * PTR32 *)&gen_args[0]))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x5c))(piVar1,((undefined1 *)(gen_frame + 0x28)));
  if ((char)uVar2 != '\0') {
    gen_imp_GetClientRect((HWND)(*(int * PTR32 *)&gen_args[0])[0xc2],&(*(tagRECT *)(gen_frame + 0x68)));
    (*(float *)&gen_args[4]) = (float)(float10)1;
    (*(float *)&gen_args[8]) = (float)(float10)1;
    F_00c34320(((undefined1 *)(gen_frame + 0x28)),((float *)(gen_frame + 0x18)),&(*(undefined4 *)&gen_args[1]));
    F_00c34320(((undefined1 *)(gen_frame + 0x28)),((byte *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[5]));
    gen_imp_MoveToEx((HDC)(*(int * PTR32 *)&gen_args[0])[0xc3],
             (int)((float10)((float *)(gen_frame + 0x18))[0] * ((float10)GEN_TOD(gen_bits2f((*(int * PTR32 *)&gen_args[0])[0xc4])))) + (*(tagRECT *)(gen_frame + 0x68)).right / 2,
             (int)((float10)(*(float *)(gen_frame + 0x20)) * ((float10)GEN_TOD(gen_bits2f((*(int * PTR32 *)&gen_args[0])[0xc4])))) + (*(tagRECT *)(gen_frame + 0x68)).bottom / 2,
             (LPPOINT)0x0);
    uVar2 = gen_imp_LineTo((HDC)(*(int * PTR32 *)&gen_args[0])[0xc3],
                   (int)(((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0))))) * ((float10)GEN_TOD(gen_bits2f((*(int * PTR32 *)&gen_args[0])[0xc4])))) +
                   (*(tagRECT *)(gen_frame + 0x68)).right / 2,
                   (int)(((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8))))) * ((float10)GEN_TOD(gen_bits2f((*(int * PTR32 *)&gen_args[0])[0xc4])))) +
                   (*(tagRECT *)(gen_frame + 0x68)).bottom / 2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf74 */
uint F_00d00cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd00cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if ((code *)*(gen_code32 *)(this + 0x2fc) == (code *)0x0) {
    return param_1;
  }
  uVar1 = ((code *)*(gen_code32 *)(this + 0x2fc))(param_1);
  return uVar1;
}

/* ref: FUN_00d00d00 */
uint F_00d00d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd00d00u, gen_a0, gen_a1, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  bool bVar4;
  
  pbVar2 = param_1;
  if ((param_1 == (byte *)0x0) && (pbVar2 = REFG(byte * PTR32, 0x15d9304), REFG(byte * PTR32, 0x15d9304) == (byte *)0x0)) {
    return 0;
  }
  if ((param_2 == 3) && (*pbVar2 == 0x2c)) {
    *pbVar2 = 0;
    REFG(byte * PTR32, 0x15d9304) = pbVar2 + 1;
    return (uint)pbVar2;
  }
LAB_00d00d35: ;
  while( true ) {
    for (; ((((bVar1 = *pbVar2, bVar1 == 0x20 || (bVar1 == 0x2c)) || (bVar1 == 9)) ||
            ((bVar1 == 0x3d || (bVar1 == 0x5b)))) ||
           ((bVar1 == 0x5d || ((bVar1 == 0x28 || (bVar1 == 0x29)))))); pbVar2 = pbVar2 + 1) {
      if (param_2 == 4) {
        if (bVar1 == 0x2c) {
          REFG(byte * PTR32, 0x15d9304) = pbVar2 + 1;
          return (uint)pbVar2;
        }
      }
      else if (((4 < param_2) &&
               ((((bVar1 == 0x28 || (bVar1 == 0x29)) || (bVar1 == 0x5b)) || (bVar1 == 0x5d)))) ||
              ((param_2 == 6 && (bVar1 == 0x20)))) goto LAB_00d00de8;
    }
    if ((param_2 != 1) || (bVar1 != 0x3a)) break;
    pbVar2 = pbVar2 + 1;
  }
  if (((char)bVar1 == 0x81) && (pbVar2[1] == 0x40)) {
    if (param_2 != 6) {
      pbVar2 = pbVar2 + 2;
      goto LAB_00d00d35;
    }
  }
  else {
    if ((param_2 == 2) && (bVar1 == 0x5f)) {
      pbVar2 = pbVar2 + 1;
      goto LAB_00d00d35;
    }
    if (*pbVar2 == 0) {
      REFG(byte * PTR32, 0x15d9304) = (byte *)0x0;
      return 0;
    }
  }
LAB_00d00de8: ;
  bVar1 = *pbVar2;
  pbVar3 = pbVar2;
joined_r0x00d00dee: ;
  if (bVar1 == 0) {
    REFG(byte * PTR32, 0x15d9304) = (byte *)0x0;
    return (uint)pbVar2;
  }
  bVar1 = *pbVar3;
  if ((((bVar1 == 0x20) || (bVar1 == 0x2c)) || (bVar1 == 9)) ||
     (((bVar1 == 0x3d || (bVar1 == 0x5b)) ||
      ((bVar1 == 0x5d || ((bVar1 == 0x28 || (bVar1 == 0x29)))))))) {
    if (param_2 == 3) {
      if (bVar1 == 0x2c) goto LAB_00d00e6b;
    }
    else if (((param_2 < 5) ||
             ((((bVar1 != 0x28 && (bVar1 != 0x29)) && (bVar1 != 0x5b)) && (bVar1 != 0x5d)))) &&
            ((param_2 != 6 || (bVar1 != 0x20)))) goto LAB_00d00e6b;
  }
  else {
    if (param_2 == 1) {
      bVar4 = bVar1 == 0x3a;
LAB_00d00e30: ;
      if (bVar4) {
LAB_00d00e6b: ;
        *pbVar3 = 0;
        REFG(byte * PTR32, 0x15d9304) = pbVar3 + 1;
        return (uint)pbVar2;
      }
    }
    else if (param_2 == 2) {
      bVar4 = bVar1 == 0x5f;
      goto LAB_00d00e30;
    }
    if (((char)bVar1 == 0x81) && (pbVar3[1] == 0x40)) {
      if (param_2 != 6) {
        *pbVar3 = 0;
        REFG(byte * PTR32, 0x15d9304) = pbVar3 + 2;
        return (uint)pbVar2;
      }
      pbVar3 = pbVar3 + 1;
    }
    else if (((0x80 < bVar1) && (bVar1 < 0xa0)) || ((0xdf < bVar1 && (bVar1 < 0xfd)))) {
      pbVar3 = pbVar3 + 1;
    }
  }
  pbVar3 = pbVar3 + 1;
  bVar1 = *pbVar3;
  goto joined_r0x00d00dee;
}

/* ref: FUN_00d00ed0 */
byte F_00d00ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0xd00ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  float param_5 = (float)gen_a4;
  LPCRITICAL_SECTION lpCriticalSection;
  float fVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  uint * puVar5;
  int iVar6;
  undefined * this;
  undefined * this_00;
  uint * puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint * puVar11;
  float10 fVar12;
  float10 fVar13;
  double dVar14;
  
  if (0x1f < (byte)param_3) {
    return 0;
  }
  uVar9 = (uint)*(byte *)((byte)param_3 + 0x10 + (int)param_1);
  if (uVar9 != 0) {
    fVar12 = ((float10)GEN_TOD(gen_bits2f(param_1[0x23])));
    fVar13 = (float10)param_5;
    if (fVar12 <= fVar13 && ((!GEN_ISNAN(fVar13) && !GEN_ISNAN(fVar12)) && fVar13 != fVar12)) {
      param_1[0x23] = (int)gen_fl2bits(param_5);
    }
    fVar1 = gen_bits2f(param_1[0x24]);
    dVar14 = F_00d21650(param_2);
    if (!((double)fVar1 <= dVar14) != (GEN_ISNAN(dVar14) || GEN_ISNAN((double)fVar1))) {
      dVar14 = F_00d21650(param_2);
      param_1[0x24] = (int)gen_fl2bits((float)dVar14);
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x6d);
    *(undefined1 *)(param_1 + 0x73) = 1;
    gen_imp_EnterCriticalSection(lpCriticalSection);
    puVar7 = (uint *)param_1[(byte)param_3 + 0x2d];
    uVar4 = F_00d214d0(param_2);
    if ((uVar4 != 0) && (iVar8 = 0, uVar9 != 0)) {
      puVar5 = puVar7 + 4;
LAB_00d00f82: ;
      if (puVar5[-1] != 0xffffffff) {
        if ((ushort)*puVar5 != uVar4) goto code_r0x00d00f91;
        if ((puVar5[-4] <= param_4) &&
           (!(((float10)GEN_TOD(gen_bits2f(puVar5[-3]))) <= (float10)param_5) ==
            (GEN_ISNAN((float10)param_5) || GEN_ISNAN(((float10)GEN_TOD(gen_bits2f(puVar5[-3]))))))) {
          if (iVar8 < (int)(uVar9 - 1)) {
            iVar6 = (uVar9 - 1) - iVar8;
            puVar5 = puVar7 + iVar8 * 5 + 5;
            puVar11 = puVar7 + iVar8 * 5;
            for (uVar10 = (uint)(iVar6 * 0x14) >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *puVar11 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar11 = puVar11 + 1;
            }
            iVar8 = iVar8 + iVar6;
          }
          puVar7[iVar8 * 5 + 3] = 0xffffffff;
          goto LAB_00d00f9c;
        }
        goto LAB_00d01134;
      }
    }
LAB_00d00f9c: ;
    fVar12 = (float10)param_5;
    uVar10 = 0;
    puVar5 = puVar7;
    if (uVar9 != 0) {
      do {
        if (puVar5[3] == 0xffffffff) break;
        if ((*puVar5 <= param_4) &&
           ((*puVar5 != param_4 ||
            (fVar13 = ((float10)GEN_TOD(gen_bits2f(puVar5[1]))),
            !(fVar12 <= fVar13) || ((GEN_ISNAN(fVar13) || GEN_ISNAN(fVar12)) || fVar13 == fVar12))))) {
          uVar2 = puVar7[uVar9 * 5 + -2];
          if ((uVar2 != 0xffffffff) &&
             (this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xa0))(param_1,uVar2))), this != (undefined *)0x0)) {
            F_00d05290(this);
            this_00 = (undefined *)F_00d05480(this,uVar2);
            if ((this_00 != (undefined *)0x0) && (bVar3 = F_00d210f0(this_00), bVar3 == 0)) {
              bVar3 = F_00d22a30(this_00);
              if (bVar3 != 0) {
                F_00d22c70(this_00,0);
              }
              F_00d055c0(this,uVar2,0);
            }
            F_00d052b0(this);
          }
          iVar8 = uVar9 - 1;
          if ((int)uVar10 < iVar8) {
            puVar7 = puVar7 + iVar8 * 5;
            iVar8 = iVar8 - uVar10;
            do {
              *puVar7 = puVar7[-5];
              puVar7[1] = puVar7[-4];
              puVar7[2] = puVar7[-3];
              puVar7[3] = puVar7[-2];
              puVar7[4] = puVar7[-1];
              puVar7 = puVar7 + -5;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
          *puVar5 = param_4;
          goto LAB_00d00fe4;
        }
        uVar10 = uVar10 + 1;
        puVar5 = puVar5 + 5;
      } while ((int)uVar10 < (int)uVar9);
    }
    if (uVar10 != uVar9) {
      puVar5 = puVar7 + uVar10 * 5;
      *puVar5 = param_4;
LAB_00d00fe4: ;
      puVar5[1] = (uint)gen_fl2bits(param_5);
      uVar9 = F_00d218e0(param_2);
      puVar5[2] = uVar9;
      puVar5[3] = *(uint *)((int)param_2 + 0x20);
      *(ushort *)(puVar5 + 4) = uVar4;
      if ((char)param_1[0x73] != '\0') {
        gen_imp_LeaveCriticalSection(lpCriticalSection);
      }
      return 1;
    }
LAB_00d01134: ;
    if ((char)param_1[0x73] != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
  }
  return 0;
code_r0x00d00f91: ;
  iVar8 = iVar8 + 1;
  puVar5 = puVar5 + 5;
  if ((int)uVar9 <= iVar8) goto LAB_00d00f9c;
  goto LAB_00d00f82;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf39 */
uint F_00d01150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd01150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int * piVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x98);
  this[0xb0] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar1 = 0;
  if (0 < *(int *)(this + 0x58)) {
    piVar3 = *(int * PTR32 *)(this + 0x94);
    do {
      if (*(uint *)(*piVar3 + 0x10) == param_1) goto LAB_00d0121f;
      iVar1 = iVar1 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar1 < *(int *)(this + 0x58));
  }
  if (*(int *)(this + 0x60) <= *(int *)(this + 0x58)) {
    if (this[0xb0] != (undefined1)0x0) {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                              (REFG(int * PTR32, 0x15d778c),0xf8,"CDev.Engine.Sd.SoundLayout",0,0,0x10)));
  if (this_00 == (undefined *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00d09300(this_00,this,param_1,*(undefined4 *)(this + 100),
                         *(undefined4 *)(this + 0x68));
  }
  *((uint *)GEN_TOP((*(int *)(this + 0x94) + *(int *)(this + 0x58) * 4))) = uVar2;
  *(int *)(this + 0x58) = *(int *)(this + 0x58) + 1;
  if (*(int *)(this + 0x5c) < *(int *)(this + 0x58)) {
    *(int *)(this + 0x5c) = *(int *)(this + 0x58);
  }
LAB_00d0121f: ;
  if (this[0xb0] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf40 */
uint F_00d01240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd01240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  int iVar2;
  int * piVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x98);
  this[0xb0] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar2 = 0;
  if (0 < *(int *)(this + 0x58)) {
    piVar3 = *(int * PTR32 *)(this + 0x94);
    do {
      if (*(int *)(*piVar3 + 0x10) == param_1) {
        uVar1 = (*(int * PTR32 *)(this + 0x94))[iVar2];
        if (this[0xb0] != (undefined1)0x0) {
          gen_imp_LeaveCriticalSection(lpCriticalSection);
        }
        return uVar1;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)(this + 0x58));
  }
  if (this[0xb0] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

/* ref: FUN_00d012c0 */
unsigned int F_00d012c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd012c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  int * piVar4;
  int iVar5;
  
  *(undefined1 *)((int)this + 0xb0) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x98));
  iVar5 = 0;
  if (0 < *(int *)((int)this + 0x58)) {
    piVar4 = *(int * PTR32 *)((int)this + 0x94);
    do {
      if (*(int *)(*piVar4 + 0x10) == param_1) {
        puVar3 = ((undefined4 *)GEN_TOP((*(int * PTR32 *)((int)this + 0x94))[iVar5]));
        if (puVar3 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
        }
        iVar5 = iVar5 + 1;
        if (iVar5 < *(int *)((int)this + 0x58)) {
          do {
            iVar1 = iVar5 * 4;
            iVar2 = iVar5 * 4;
            iVar5 = iVar5 + 1;
            *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x94) + iVar2 + -4))) =
                 *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x94) + iVar1)));
          } while (iVar5 < *(int *)((int)this + 0x58));
        }
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x94) + -4 + iVar5 * 4))) = 0;
        *(int *)((int)this + 0x58) = *(int *)((int)this + 0x58) + -1;
        break;
      }
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar5 < *(int *)((int)this + 0x58));
  }
  if (*(char *)((int)this + 0xb0) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x98));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf45 */
unsigned int F_00d01360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd01360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  this[0xb0] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
  iVar1 = 0;
  if (0 < *(int *)(this + 0x58)) {
    do {
      F_00d059d0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x94) + iVar1 * 4))),0xffffffff,param_1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(this + 0x58));
  }
  if (this[0xb0] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf47 */
uint F_00d013b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd013b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint extraout_EAX = 0;
  uint uVar1;
  uint extraout_EAX_00 = 0;
  int iVar2;
  
  this[0xb0] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
  iVar2 = 0;
  uVar1 = extraout_EAX;
  if (0 < *(int *)(this + 0x58)) {
    do {
      uVar1 = F_00d052f0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x94) + iVar2 * 4))),param_1,param_2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0x58));
  }
  if (this[0xb0] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
    uVar1 = extraout_EAX_00;
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf48 */
byte F_00d01400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd01400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  int iVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x98);
  this[0xb0] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar2 = 0;
  if (0 < *(int *)(this + 0x58)) {
    do {
      bVar1 = F_00d06580(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x94) + iVar2 * 4))),param_1);
      if (bVar1 == 0) {
        if (this[0xb0] != (undefined1)0x0) {
          gen_imp_LeaveCriticalSection(lpCriticalSection);
        }
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0x58));
  }
  if (this[0xb0] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf53 */
unsigned int F_00d01470(unsigned int gen_a0)
{
  GEN_ENTER(0xd01470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  this[0xb0] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
  *(undefined4 *)(this + 0x300) = 1;
  *(undefined4 *)(this + 0x304) = 0;
  if (this[0xb0] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf54 */
uint F_00d014b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd014b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x98);
  this[0xb0] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)(this + 0x300) < *(int *)(this + 0x58)) {
    do {
      uVar1 = F_00d053b0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x94) + *(int *)(this + 0x300) * 4))),
                           *(undefined4 *)(this + 0x304),param_1,param_2);
      if (uVar1 == 0) {
        if (this[0xb0] != (undefined1)0x0) {
          gen_imp_LeaveCriticalSection(lpCriticalSection);
        }
        return 0;
      }
      if (uVar1 != 0xffffffff) {
        *(int *)(this + 0x304) = *(int *)(this + 0x304) + 1;
        if (this[0xb0] != (undefined1)0x0) {
          gen_imp_LeaveCriticalSection(lpCriticalSection);
        }
        return uVar1;
      }
      *(int *)(this + 0x300) = *(int *)(this + 0x300) + 1;
      *(undefined4 *)(this + 0x304) = 0;
    } while (*(int *)(this + 0x300) < *(int *)(this + 0x58));
  }
  if (this[0xb0] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 0xffffffff;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf55 */
byte F_00d01570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd01570u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[1]);
  if ((*(undefined4 * PTR32 *)&gen_args[1]) != (undefined4 *)0x0) {
    (*(undefined * PTR32 *)&gen_args[0])[0xb0] = (undefined1)0x1;
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((*(undefined * PTR32 *)&gen_args[0]) + 0x98));
    *puVar1 = *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x58)));
    puVar1[1] = *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x5c)));
    puVar1[2] = *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x60)));
    puVar1[5] = *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 100)));
    puVar1[8] = *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x68)));
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    if (0 < *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x58)))) {
      iVar2 = 0;
      do {
        F_00d05440(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x94))) + iVar2 * 4))),&(*(undefined4 * PTR32 *)&gen_args[1]),&(*(int *)(gen_frame + 0x8)),&(*(int *)(gen_frame + 0x4)),
                     &(*(int *)(gen_frame + 0x0)));
        if ((int)puVar1[3] < (int)(*(undefined4 * PTR32 *)&gen_args[1])) {
          puVar1[3] = (*(undefined4 * PTR32 *)&gen_args[1]);
        }
        if ((int)puVar1[4] < (*(int *)(gen_frame + 0x8))) {
          puVar1[4] = (*(int *)(gen_frame + 0x8));
        }
        if ((int)puVar1[6] < (*(int *)(gen_frame + 0x4))) {
          puVar1[6] = (*(int *)(gen_frame + 0x4));
        }
        if ((int)puVar1[7] < (*(int *)(gen_frame + 0x0))) {
          puVar1[7] = (*(int *)(gen_frame + 0x0));
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x58))));
    }
    if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0xd4))))
                (*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))),puVar1 + 9,puVar1 + 10,puVar1 + 0xb);
    }
    if ((*(undefined * PTR32 *)&gen_args[0])[0xb0] != (undefined1)0x0) {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((*(undefined * PTR32 *)&gen_args[0]) + 0x98));
    }
    return 1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf31 */
uint F_00d01670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd01670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint extraout_EAX = 0;
  uint uVar1;
  uint extraout_EAX_00 = 0;
  int iVar2;
  
  this[0xb0] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
  iVar2 = 0;
  uVar1 = extraout_EAX;
  if (0 < *(int *)(this + 0x58)) {
    do {
      uVar1 = F_00d07430(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x94) + iVar2 * 4))),param_1,param_2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0x58));
  }
  if (this[0xb0] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
    uVar1 = extraout_EAX_00;
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf32 */
uint F_00d016c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd016c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint extraout_EAX = 0;
  
  this[0xb0] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
  uVar1 = F_00d074a0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)(this + 0x94))),param_1);
  if (this[0xb0] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf34 */
byte F_00d01700(unsigned int gen_a0)
{
  GEN_ENTER(0xd01700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined1 LVar1;
  undefined * pLVar2;
  short * psVar3;
  byte bVar4;
  short * psVar5;
  undefined * pvVar6;
  LPCRITICAL_SECTION p_Var7;
  undefined * pvVar8;
  uint uVar9;
  gen_size32 _NumOfElements;
  int * piVar10;
  uint uVar11;
  int * piVar12;
  int iVar13;
  int iVar14;
  undefined * pLVar15;
  undefined * pLVar16;
  
  (*(undefined * PTR32 *)(gen_frame + 0x58)) = this;
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x38)) = (LPCRITICAL_SECTION)(this + 0x1b4);
  this[0x1cc] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x1b4));
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = this + 0x134;
  (*(undefined * PTR32 *)(gen_frame + 0x44)) = this + 0x10;
  (*(int *)(gen_frame + 0x40)) = 0x20;
  do {
    if (*(*(undefined * PTR32 *)(gen_frame + 0x44)) != (undefined1)0x0) {
      (*(undefined * PTR32 *)(gen_frame + 0x3c)) = (undefined *)*(int *)(*(undefined * PTR32 *)(gen_frame + 0x48));
      uVar11 = (uint)(byte)*(*(undefined * PTR32 *)(gen_frame + 0x44));
      (*(int *)(gen_frame + 0x4c)) = 0;
      if (uVar11 != 0) {
        pLVar15 = ((undefined *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x48)) + -0x80) + 8)));
        (*(undefined * PTR32 *)(gen_frame + 0x54)) = pLVar15;
        do {
          (*(undefined * PTR32 *)(gen_frame + 0x54)) = pLVar15;
          if (*(int *)((int)pLVar15 + 4) == -1) break;
          if (((short)*(int *)((int)pLVar15 + 8) != 0) && (iVar14 = 0, uVar11 != 0)) {
            psVar3 = (short *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x10);
            do {
              psVar5 = psVar3;
              if (*(int *)(psVar5 + -2) == -1) goto LAB_00d018b2;
              if ((short)*(int *)((int)pLVar15 + 8) == *psVar5) break;
              iVar14 = iVar14 + 1;
              psVar3 = psVar5 + 10;
            } while (iVar14 < (int)uVar11);
            if (((*(int *)pLVar15 != *(int *)(psVar5 + -4)) ||
                (*(int *)((int)pLVar15 + 4) != *(int *)(psVar5 + -2))) &&
               (pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0xa0))((*(undefined * PTR32 *)(gen_frame + 0x58)),*(int *)pLVar15))),
               pvVar6 != (undefined *)0x0)) {
              F_00d05290(pvVar6);
              p_Var7 = (LPCRITICAL_SECTION)F_00d05480(pvVar6,*(int *)((int)pLVar15 + 4));
              (*(LPCRITICAL_SECTION *)(gen_frame + 0x50)) = p_Var7;
              if ((p_Var7 != (LPCRITICAL_SECTION)0x0) &&
                 (pvVar8 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0xa0))
                                             ((*(undefined * PTR32 *)(gen_frame + 0x58)),*(undefined4 *)(psVar5 + -4)))),
                 pLVar15 = (*(undefined * PTR32 *)(gen_frame + 0x54)), pvVar8 != (undefined *)0x0)) {
                F_00d05290(pvVar8);
                uVar11 = F_00d05480(pvVar6,*(undefined4 *)(psVar5 + -2));
                if ((uVar11 != 0) &&
                   ((*(HANDLE *)(uVar11 + 0x24) == (*((HANDLE *)GEN_TOP(((((char *)((*(LPCRITICAL_SECTION *)(gen_frame + 0x50))) + (1) * 24) + 12))))) &&
                    (*(HANDLE *)(uVar11 + 0x28) == (*((HANDLE *)GEN_TOP(((((char *)((*(LPCRITICAL_SECTION *)(gen_frame + 0x50))) + (1) * 24) + 16))))))))) {
                  F_00cbbd90(((undefined1 *)(gen_frame + 0x28)),(undefined *)(uVar11 + 8));
                  bVar4 = F_00cbc040(((undefined1 *)(gen_frame + 0x28)));
                  if (bVar4 != 0) {
                    F_00cbbd90(((undefined1 *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x28)));
                    F_00cbbdc0(&(*(LONG *)(((char *)((*(LPCRITICAL_SECTION *)(gen_frame + 0x50))) + 8))),((undefined1 *)(gen_frame + 0x18)));
                    F_00cbbdb0(((undefined1 *)(gen_frame + 0x18)));
                    uVar9 = F_00cbbd70(((undefined1 *)(gen_frame + 0x8)));
                    F_00cbbdc0((undefined *)(uVar11 + 8),uVar9);
                    F_00cbbdb0(((undefined1 *)(gen_frame + 0x8)));
                  }
                  F_00cbbdb0(((undefined1 *)(gen_frame + 0x28)));
                }
                F_00d052b0(pvVar8);
                pLVar15 = (*(undefined * PTR32 *)(gen_frame + 0x54));
              }
              F_00d052b0(pvVar6);
            }
          }
LAB_00d018b2: ;
          uVar11 = (uint)(byte)*(*(undefined * PTR32 *)(gen_frame + 0x44));
          iVar14 = (*(int *)(gen_frame + 0x4c)) + 1;
          pLVar15 = (undefined *)((int)pLVar15 + 0x14);
          (*(int *)(gen_frame + 0x4c)) = iVar14;
          (*(undefined * PTR32 *)(gen_frame + 0x54)) = pLVar15;
        } while (iVar14 < (int)uVar11);
      }
    }
    (*(undefined * PTR32 *)(gen_frame + 0x48)) = (*(undefined * PTR32 *)(gen_frame + 0x48)) + 4;
    (*(undefined * PTR32 *)(gen_frame + 0x44)) = (*(undefined * PTR32 *)(gen_frame + 0x44)) + 1;
    iVar14 = (*(int *)(gen_frame + 0x40)) + -1;
    (*(int *)(gen_frame + 0x40)) = iVar14;
  } while (iVar14 != 0);
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = (*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x10;
  (*(undefined * PTR32 *)(gen_frame + 0x44)) = (*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x134;
  (*(int *)(gen_frame + 0x4c)) = 0x20;
  do {
    LVar1 = *(undefined1 *)(*(undefined * PTR32 *)(gen_frame + 0x48));
    if (LVar1 != (undefined1)0x0) {
      iVar14 = *(int *)(*(undefined * PTR32 *)(gen_frame + 0x44));
      uVar11 = (uint)(byte)LVar1;
      (*(undefined * PTR32 *)(gen_frame + 0x3c)) = (undefined *)*(int *)((*(undefined * PTR32 *)(gen_frame + 0x44)) + -0x80);
      (*(int *)(gen_frame + 0x40)) = 0;
      if (LVar1 != (undefined1)0x0) {
        do {
          pLVar15 = (*(undefined * PTR32 *)(gen_frame + 0x58));
          if (*(int *)(iVar14 + 0xc) == -1) break;
          uVar9 = 0;
          if (uVar11 != 0) {
            piVar12 = (int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0xc);
            do {
              if ((piVar12[-1] == *(int *)(iVar14 + 8)) && (*piVar12 == *(int *)(iVar14 + 0xc)))
              break;
              uVar9 = uVar9 + 1;
              piVar12 = piVar12 + 5;
            } while ((int)uVar9 < (int)uVar11);
          }
          if (uVar9 == uVar11) {
            p_Var7 = (LPCRITICAL_SECTION)((*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x98);
            (*(LPCRITICAL_SECTION *)(gen_frame + 0x50)) = p_Var7;
            if ((*(undefined * PTR32 *)(gen_frame + 0x58))[0xb0] != (undefined1)0x0) {
              gen_imp_EnterCriticalSection(p_Var7);
            }
            pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)pLVar15 + 0xa0))
                                       (pLVar15,*(undefined4 *)(iVar14 + 8))));
            if (pvVar6 != (undefined *)0x0) {
              F_00d05290(pvVar6);
              pvVar8 = (undefined *)F_00d05480(pvVar6,*(undefined4 *)(iVar14 + 0xc));
              if ((pvVar8 != (undefined *)0x0) && (bVar4 = F_00d210f0(pvVar8), bVar4 == 0)) {
                bVar4 = F_00d22a30(pvVar8);
                if (bVar4 == 0) {
                  F_00d055c0(pvVar6,*(undefined4 *)(iVar14 + 0xc),0);
                }
                else {
                  F_00d22c70(pvVar8,0);
                }
              }
              F_00d052b0(pvVar6);
              p_Var7 = (*(LPCRITICAL_SECTION *)(gen_frame + 0x50));
            }
            if (*(char *)&(*(undefined * PTR32 *)(((char *)(p_Var7) + (1) * 24))) != '\0') {
              gen_imp_LeaveCriticalSection(p_Var7);
            }
          }
          uVar11 = (uint)(byte)*(*(undefined * PTR32 *)(gen_frame + 0x48));
          iVar13 = (*(int *)(gen_frame + 0x40)) + 1;
          iVar14 = iVar14 + 0x14;
          (*(int *)(gen_frame + 0x40)) = iVar13;
        } while (iVar13 < (int)uVar11);
      }
    }
    (*(undefined * PTR32 *)(gen_frame + 0x44)) = (*(undefined * PTR32 *)(gen_frame + 0x44)) + 4;
    (*(undefined * PTR32 *)(gen_frame + 0x48)) = (*(undefined * PTR32 *)(gen_frame + 0x48)) + 1;
    iVar14 = (*(int *)(gen_frame + 0x4c)) + -1;
    (*(int *)(gen_frame + 0x4c)) = iVar14;
  } while (iVar14 != 0);
  pLVar15 = (*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x10;
  pLVar16 = (*(undefined * PTR32 *)(gen_frame + 0x58)) + 0xb4;
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = pLVar16;
  (*(int *)(gen_frame + 0x40)) = 0x20;
  do {
    LVar1 = *(undefined1 *)pLVar15;
    if (LVar1 != (undefined1)0x0) {
      _NumOfElements = 0;
      if ((byte)LVar1 != 0) {
        piVar12 = ((int *)GEN_TOP(((int)*(undefined * PTR32 *)pLVar16 + 0xc)));
        do {
          if (*piVar12 == -1) break;
          _NumOfElements = _NumOfElements + 1;
          piVar12 = piVar12 + 5;
        } while ((int)_NumOfElements < (int)(uint)(byte)LVar1);
      }
      F_00c4f040(*(undefined * PTR32 *)pLVar16,_NumOfElements,0x14,((code *)REFP(0xd007a0)));
    }
    pLVar2 = (*(undefined * PTR32 *)(gen_frame + 0x58));
    pLVar16 = pLVar16 + 4;
    pLVar15 = pLVar15 + 1;
    iVar14 = (*(int *)(gen_frame + 0x40)) + -1;
    (*(int *)(gen_frame + 0x40)) = iVar14;
  } while (iVar14 != 0);
  if (*(int *)((*(undefined * PTR32 *)(gen_frame + 0x58)) + 8) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x58)) + 8) + 0x114))))(*(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x58)) + 8));
  }
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x50)) = (LPCRITICAL_SECTION)(pLVar2 + 0x10);
  (*(undefined * PTR32 *)(gen_frame + 0x54)) = (*(undefined * PTR32 *)(gen_frame + 0x3c));
  (*(undefined * PTR32 *)(gen_frame + 0x44)) = (undefined *)0x20;
  do {
    if (*(undefined *)(*(LPCRITICAL_SECTION *)(gen_frame + 0x50)) != (undefined1)0x0) {
      (*(int *)(gen_frame + 0x40)) = 0;
      piVar12 = (int *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x54)) + 0xc);
      do {
        pLVar15 = (*(undefined * PTR32 *)(gen_frame + 0x58));
        if (*piVar12 == -1) break;
        p_Var7 = (LPCRITICAL_SECTION)((*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x98);
        if ((*(undefined * PTR32 *)(gen_frame + 0x58))[0xb0] != (undefined1)0x0) {
          gen_imp_EnterCriticalSection(p_Var7);
        }
        pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0xa0))((*(undefined * PTR32 *)(gen_frame + 0x58)),piVar12[-1])));
        if (pvVar6 != (undefined *)0x0) {
          F_00d05290(pvVar6);
          piVar10 = (int *)F_00d05480(pvVar6,*piVar12);
          if ((piVar10 != (int *)0x0) &&
             (uVar11 = ((code *)*(gen_code32 *)(*piVar10 + 0x3c))(piVar10), (char)uVar11 == '\0')) {
            F_00d055c0(pvVar6,*piVar12,0);
          }
          F_00d052b0(pvVar6);
        }
        if (pLVar15[0xb0] != (undefined1)0x0) {
          gen_imp_LeaveCriticalSection(p_Var7);
        }
        iVar14 = (*(int *)(gen_frame + 0x40)) + 1;
        piVar12 = piVar12 + 5;
        (*(int *)(gen_frame + 0x40)) = iVar14;
      } while (iVar14 < (int)(uint)(byte)*(undefined *)(*(LPCRITICAL_SECTION *)(gen_frame + 0x50)));
    }
    (*(undefined * PTR32 *)(gen_frame + 0x54)) = (*(undefined * PTR32 *)(gen_frame + 0x54)) + 4;
    (*(LPCRITICAL_SECTION *)(gen_frame + 0x50)) = (LPCRITICAL_SECTION)((int)(*(LPCRITICAL_SECTION *)(gen_frame + 0x50)) + 1);
    iVar14 = (int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + -1;
    (*(undefined * PTR32 *)(gen_frame + 0x44)) = (undefined *)iVar14;
    if (iVar14 == 0) {
      if (*(int *)((*(undefined * PTR32 *)(gen_frame + 0x58)) + 8) != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x58)) + 8) + 0x118))))(*(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x58)) + 8));
      }
      if (*(char *)&(*(undefined * PTR32 *)(((char *)((*(LPCRITICAL_SECTION *)(gen_frame + 0x38))) + (1) * 24))) != '\0') {
        gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x38)));
      }
      return 1;
    }
  } while( true );
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf23 */
uint F_00d02600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd02600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint extraout_EAX = 0;
  uint uVar1;
  uint extraout_EAX_00 = 0;
  int iVar2;
  
  this[0xb0] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
  iVar2 = 0;
  uVar1 = extraout_EAX;
  if (0 < *(int *)(this + 0x58)) {
    do {
      uVar1 = F_00d06b20(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x94) + iVar2 * 4))),param_1,param_2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0x58));
  }
  if (this[0xb0] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
    uVar1 = extraout_EAX_00;
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf24 */
uint F_00d02650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd02650u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint extraout_EAX = 0;
  uint uVar1;
  uint extraout_EAX_00 = 0;
  int iVar2;
  
  this[0xb0] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
  iVar2 = 0;
  uVar1 = extraout_EAX;
  if (0 < *(int *)(this + 0x58)) {
    do {
      uVar1 = F_00d06d10(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x94) + iVar2 * 4))),param_1,param_2,param_3);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0x58));
  }
  if (this[0xb0] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
    uVar1 = extraout_EAX_00;
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf25 */
uint F_00d026c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd026c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint extraout_EAX = 0;
  uint uVar1;
  uint extraout_EAX_00 = 0;
  int iVar2;
  
  this[0xb0] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
  iVar2 = 0;
  uVar1 = extraout_EAX;
  if (0 < *(int *)(this + 0x58)) {
    do {
      uVar1 = F_00d06db0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x94) + iVar2 * 4))),param_1,param_2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0x58));
  }
  if (this[0xb0] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
    uVar1 = extraout_EAX_00;
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf26 */
uint F_00d02710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd02710u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint extraout_EAX = 0;
  uint uVar1;
  uint extraout_EAX_00 = 0;
  int iVar2;
  
  this[0xb0] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
  iVar2 = 0;
  uVar1 = extraout_EAX;
  if (0 < *(int *)(this + 0x58)) {
    do {
      uVar1 = F_00d06ed0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x94) + iVar2 * 4))),param_1,param_2,param_3);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0x58));
  }
  if (this[0xb0] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
    uVar1 = extraout_EAX_00;
  }
  return uVar1;
}

/* ref: FUN_00d02780 */
unsigned int F_00d02780(unsigned int gen_a0)
{
  GEN_ENTER(0xd02780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  *(undefined1 *)((int)this + 0xb0) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x98));
  iVar1 = 0;
  if (0 < *(int *)((int)this + 0x58)) {
    do {
      F_00d08e80(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x94) + iVar1 * 4))));
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)((int)this + 0x58));
  }
  if (*(char *)((int)this + 0xb0) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x98));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf66 */
byte F_00d027d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd027d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  undefined * pvVar2;
  int iVar3;
  undefined2 * puVar4;
  
  iVar3 = 0;
  puVar4 = param_1;
  if (0 < param_2) {
    do {
      switch((unsigned int)(uintptr_t)(*puVar4)) {
      case 1: ;
        ((code *)*(gen_code32 *)(*(int *)this + 0x9c))(this,*(undefined4 *)(puVar4 + 2));
        break;
      case 2: ;
        ((code *)*(gen_code32 *)(*(int *)this + 0xa8))(this,*(undefined4 *)(puVar4 + 2));
        break;
      case 3: ;
        pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xa0))(this,*(undefined4 *)(puVar4 + 2))));
        if ((pvVar2 == (undefined *)0x0) || (bVar1 = F_00d08f70(pvVar2,puVar4), bVar1 == 0)) {
          return 0;
        }
        break;
      case 4: ;
        pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xa0))(this,*(undefined4 *)(puVar4 + 2))));
        if (pvVar2 == (undefined *)0x0) {
          return 0;
        }
        F_00d055c0(pvVar2,*(undefined4 *)(puVar4 + 4),1);
        break;
      default: ;
        F_00d1df80(*(undefined * PTR32 *)(this + 4),puVar4);
        break;
      case 7: ;
        F_00d00a70(this,puVar4);
        break;
      case 9: ;
        ((code *)*(gen_code32 *)(*(int *)this + 0xa8))(this,1);
      }
      iVar3 = iVar3 + (uint)(ushort)puVar4[1];
      puVar4 = (undefined2 *)((int)puVar4 + (uint)(ushort)puVar4[1]);
    } while (iVar3 < param_2);
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf64 */
uint F_00d028e0(unsigned int gen_a0)
{
  GEN_ENTER(0xd028e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  code * pcVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this);
  if ((char)uVar2 != '\0') {
    pcVar1 = *(gen_code32 *)(*(int *)this + 0x34);
    (*(undefined4 *)(gen_frame + 0x8)) = 0x100007;
    uVar2 = (*pcVar1)(this);
    (*(undefined1 *)(gen_frame + 0xc)) = (char)uVar2;
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x2c))(this);
    (*(undefined1 *)(gen_frame + 0xd)) = (char)uVar2;
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this);
    (*(undefined1 *)(gen_frame + 0xe)) = (char)uVar2;
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x20))(this);
    (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(this + 0x50);
    (*(undefined1 *)(gen_frame + 0xf)) = (char)uVar2;
    (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(this + 0x54);
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xf4))(this);
    if (uVar2 == 0) {
      uVar2 = F_00d03a90(&(*(undefined4 *)(gen_frame + 0x8)),(uint)&(*(undefined4 *)(gen_frame + 0x8)));
    }
    if ((code *)*(gen_code32 *)(this + 0x2f4) != (code *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(this + 0x2f4))(&(*(undefined4 *)(gen_frame + 0x8)),0x10);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf65 */
uint F_00d02990(unsigned int gen_a0)
{
  GEN_ENTER(0xd02990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  code * pcVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this);
  if ((char)uVar2 != '\0') {
    pcVar1 = *(gen_code32 *)(*(int *)this + 0xf4);
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0x100009;
    uVar2 = (*pcVar1)(this);
    if (uVar2 == 0) {
      uVar2 = F_00d03a20(&(*(undefined4 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x8)));
    }
    if ((code *)*(gen_code32 *)(this + 0x2f4) != (code *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(this + 0x2f4))(&(*(undefined4 *)(gen_frame + 0x8)),0x10);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf70 */
byte F_00d02a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd02a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  int iVar2;
  
  F_00c49386(param_1,"[StartOfSoundLayout]\n");
  F_00c49386(param_1,"SoundLayoutVersion = %d\n",0);
  F_00c49386(param_1,"\n");
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x98);
  this[0xb0] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar2 = 0;
  if (0 < *(int *)(this + 0x58)) {
    do {
      bVar1 = F_00d078f0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x94) + iVar2 * 4))),param_1);
      if (bVar1 == 0) {
        if (this[0xb0] != (undefined1)0x0) {
          gen_imp_LeaveCriticalSection(lpCriticalSection);
        }
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0x58));
  }
  F_00c49386(param_1,"[EndOfSoundLayout]\n");
  F_00c49386(param_1,"\n");
  if (this[0xb0] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf71 */
byte F_00d02ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd02ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x12010];
  byte bVar1;
  char * pcVar2;
  byte * pbVar3;
  int iVar4;
  uint uVar5;
  undefined * this_00;
  byte * pbVar6;
  byte * pbVar7;
  bool bVar8;
  
  (*(uint *)(gen_frame + 0x12008)) = 0xd02add;
  (*(uint *)(gen_frame + 0x12008)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  pcVar2 = F_00c5281f((char *)((byte *)(gen_frame + 0x10008)),0x2000,param_1);
  pbVar3 = REFG(byte * PTR32, 0x15d9304);
  while (REFG(byte * PTR32, 0x15d9304) = pbVar3, pcVar2 != (char *)0x0) {
    pbVar3 = ((byte *)(gen_frame + 0x10008));
    do {
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
    if (pbVar3[(int)(((byte *)(gen_frame + 0x10008)) + (-1 - (int)(((byte *)(gen_frame + 0x10008)) + 1)))] == 10) {
      pbVar3[(int)(((byte *)(gen_frame + 0x10008)) + (-1 - (int)(((byte *)(gen_frame + 0x10008)) + 1)))] = 0;
    }
    pbVar3 = ((byte *)(gen_frame + 0x10008));
    do {
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
    if (pbVar3[(int)(((byte *)(gen_frame + 0x10008)) + (-1 - (int)(((byte *)(gen_frame + 0x10008)) + 1)))] == 0xd) {
      pbVar3[(int)(((byte *)(gen_frame + 0x10008)) + (-1 - (int)(((byte *)(gen_frame + 0x10008)) + 1)))] = 0;
    }
    if ((((byte *)(gen_frame + 0x10008))[0] != 0) && (((byte *)(gen_frame + 0x10008))[0] != 0x3b)) {
      pbVar3 = ((byte *)(gen_frame + 0x10008));
      while( true ) {
        for (; ((((bVar1 = *pbVar3, bVar1 == 0x20 || (bVar1 == 0x2c)) || (bVar1 == 9)) ||
                ((bVar1 == 0x3d || (bVar1 == 0x5b)))) ||
               ((bVar1 == 0x5d || ((bVar1 == 0x28 || (bVar1 == 0x29)))))); pbVar3 = pbVar3 + 1) {
        }
        if (((char)bVar1 != 0x81) || (pbVar3[1] != 0x40)) break;
        pbVar3 = pbVar3 + 2;
      }
      pbVar6 = pbVar3;
      if (*pbVar3 == 0) {
LAB_00d02dde: ;
        REFG(byte * PTR32, 0x15d9304) = (byte *)0x0;
LAB_00d02de4: ;
        F_00c47745((*(uint *)(gen_frame + 0x12008)) ^ (uint)(uint)(gen_frame + 0x0));
        return 0;
      }
      do {
        bVar1 = *pbVar6;
        if ((((bVar1 == 0x20) || (bVar1 == 0x2c)) || (bVar1 == 9)) ||
           (((bVar1 == 0x3d || (bVar1 == 0x5b)) ||
            ((bVar1 == 0x5d || ((bVar1 == 0x28 || (bVar1 == 0x29)))))))) {
          pbVar7 = pbVar6 + 1;
LAB_00d02c1a: ;
          *pbVar6 = 0;
          goto LAB_00d02c1c;
        }
        if (((char)bVar1 == 0x81) && (pbVar6[1] == 0x40)) {
          pbVar7 = pbVar6 + 2;
          goto LAB_00d02c1a;
        }
        if (((0x80 < bVar1) && (bVar1 < 0xa0)) || ((0xdf < bVar1 && (bVar1 < 0xfd)))) {
          pbVar6 = pbVar6 + 1;
        }
        pbVar6 = pbVar6 + 1;
      } while (*pbVar6 != 0);
      pbVar7 = (byte *)0x0;
LAB_00d02c1c: ;
      pcVar2 = "EndOfSoundLayout";
      pbVar6 = pbVar3;
      do {
        bVar1 = *pcVar2;
        bVar8 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_00d02c50: ;
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00d02c55;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar2[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00d02c50;
        pcVar2 = pcVar2 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00d02c55: ;
      REFG(byte * PTR32, 0x15d9304) = pbVar7;
      if (iVar4 == 0) break;
      pcVar2 = "EndOfSoundPage";
      pbVar6 = pbVar3;
      do {
        bVar1 = *pcVar2;
        bVar8 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_00d02c84: ;
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00d02c89;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar2[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00d02c84;
        pcVar2 = pcVar2 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00d02c89: ;
      if (iVar4 != 0) {
        pcVar2 = "PageID";
        do {
          bVar1 = *pcVar2;
          bVar8 = bVar1 < *pbVar3;
          if (bVar1 != *pbVar3) {
LAB_00d02cb8: ;
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00d02cbd;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar2[1];
          bVar8 = bVar1 < pbVar3[1];
          if (bVar1 != pbVar3[1]) goto LAB_00d02cb8;
          pcVar2 = pcVar2 + 2;
          pbVar3 = pbVar3 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_00d02cbd: ;
        if (iVar4 == 0) {
          if (pbVar7 == (byte *)0x0) goto LAB_00d02de4;
          while( true ) {
            for (; (((bVar1 = *pbVar7, bVar1 == 0x20 || (bVar1 == 0x2c)) || (bVar1 == 9)) ||
                   (((bVar1 == 0x3d || (bVar1 == 0x5b)) ||
                    ((bVar1 == 0x5d || ((bVar1 == 0x28 || (bVar1 == 0x29))))))));
                pbVar7 = pbVar7 + 1) {
            }
            if (((char)bVar1 != 0x81) || (pbVar7[1] != 0x40)) break;
            pbVar7 = pbVar7 + 2;
          }
          pbVar3 = pbVar7;
          if (*pbVar7 == 0) goto LAB_00d02dde;
          do {
            bVar1 = *pbVar3;
            if (((((bVar1 == 0x20) || (bVar1 == 0x2c)) || (bVar1 == 9)) ||
                ((bVar1 == 0x3d || (bVar1 == 0x5b)))) ||
               ((bVar1 == 0x5d || ((bVar1 == 0x28 || (bVar1 == 0x29)))))) {
              *pbVar3 = 0;
              REFG(byte * PTR32, 0x15d9304) = pbVar3 + 1;
              goto LAB_00d02d75;
            }
            if (((char)bVar1 == 0x81) && (pbVar3[1] == 0x40)) {
              *pbVar3 = 0;
              REFG(byte * PTR32, 0x15d9304) = pbVar3 + 2;
              goto LAB_00d02d75;
            }
            if (((0x80 < bVar1) && (bVar1 < 0xa0)) || ((0xdf < bVar1 && (bVar1 < 0xfd)))) {
              pbVar3 = pbVar3 + 1;
            }
            pbVar3 = pbVar3 + 1;
          } while (*pbVar3 != 0);
          REFG(byte * PTR32, 0x15d9304) = (byte *)0x0;
LAB_00d02d75: ;
          uVar5 = F_00c4c74c(pbVar7);
          uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x9c))(this,uVar5);
          this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xa0))(this,uVar5)));
          if ((this_00 == (undefined *)0x0) || (bVar1 = F_00d08fa0(this_00,param_1), bVar1 == 0))
          goto LAB_00d02de4;
        }
      }
    }
    pcVar2 = F_00c5281f((char *)((byte *)(gen_frame + 0x10008)),0x2000,param_1);
    pbVar3 = REFG(byte * PTR32, 0x15d9304);
  }
  F_00c47745((*(uint *)(gen_frame + 0x12008)) ^ (uint)(uint)(gen_frame + 0x0));
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf42 */
unsigned int F_00d02e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd02e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 != 0) {
    F_00d012c0(this,param_1);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf43 */
unsigned int F_00d02e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd02e30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00d012c0(this,param_1);
  return 0;
}

/* ref: FUN_00d02e40 */
uint F_00d02e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd02e40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
  return extraout_EAX;
}

/* ref: FUN_00d02ee0 */
uint F_00d02ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd02ee0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[75])REFP(0x1131c74));
  *(undefined4 *)((int)this + 8) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x98));
  *(undefined1 *)((int)this + 0xb0) = 1;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1b4));
  *(undefined1 *)((int)this + 0x1cc) = 1;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2d4));
  uVar1 = *(undefined4 *)&REFG(undefined, 0x113191c);
  *(undefined1 *)((int)this + 0x2ec) = 1;
  *(undefined4 *)((int)this + 0x314) = 0;
  *(undefined4 *)((int)this + 0x318) = 0;
  *(undefined4 *)((int)this + 0x31c) = 0;
  *(undefined4 *)((int)this + 0x50) = uVar1;
  *(undefined4 *)((int)this + 0x54) = uVar1;
  *(uint *)((int)this + 0x40) = *(uint *)((int)this + 0x40) & 0xfffffffc;
  *(float *)((int)this + 0x74) = (float)(float10)0;
  *(float *)((int)this + 0x78) = (float)(float10)0;
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1131924);
  *(undefined4 *)((int)this + 100) = param_2;
  *(undefined4 *)((int)this + 0x7c) = uVar1;
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1131928);
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x80) = uVar1;
  *(undefined4 *)((int)this + 0x4c) = 0;
  uVar1 = *(undefined4 *)&REFG(undefined, 0x135007c);
  *(undefined1 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x84) = uVar1;
  *(undefined4 *)((int)this + 0x34) = 1;
  uVar1 = *(undefined4 *)&REFG(undefined, 0x113192c);
  *(undefined4 *)((int)this + 0x38) = 1;
  *(undefined4 *)((int)this + 0x88) = uVar1;
  *(undefined4 *)((int)this + 0x3c) = 1;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(int *)((int)this + 0x60) = param_1;
  *(undefined4 *)((int)this + 0x68) = param_3;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                    (REFG(int * PTR32, 0x15d778c),param_1 * 4,"CDev.Engine.Sd.SoundLayout",0,0,0x10);
  *(uint *)((int)this + 0x94) = uVar2;
  if (uVar2 == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xd02e40));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(&REFG(undefined, 0x11319e0),"","LayoutManager.cpp",0x4a,
                    "SQEX::CDev::Engine::Sd::Layout::LayoutManager::LayoutManager");
  }
  else {
    iVar3 = 0;
    if (0 < *(int *)((int)this + 0x60)) {
      do {
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x94) + iVar3 * 4))) = 0;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)((int)this + 0x60));
    }
  }
  iVar3 = 0;
  puVar4 = (undefined4 *)((int)this + 0x134);
  do {
    *(undefined1 *)((int)this + iVar3 + 0x10) = 0;
    puVar4[-0x20] = 0;
    *puVar4 = 0;
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar3 < 0x20);
  *(uint *)((int)this + 0x40) = *(uint *)((int)this + 0x40) & 0xfffffff3;
  F_00c48350((undefined *)((int)this + 0x1d0),0,0x100);
  *(float *)((int)this + 0x8c) = (float)(float10)0;
  *(float *)((int)this + 0x90) = (float)(float10)1;
  *(undefined1 *)((int)this + 0x2d0) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined2 *)((int)this + 0x2f1) = 0;
  *(undefined1 *)((int)this + 0x2f0) = 0;
  *(float *)((int)this + 0x310) = (float)(float10)0;
  *(undefined4 *)((int)this + 0x2f4) = 0;
  *(undefined4 *)((int)this + 0x2f8) = 0;
  *(undefined4 *)((int)this + 0x2fc) = 0;
  *(undefined4 *)((int)this + 0x300) = 0;
  *(undefined4 *)((int)this + 0x304) = 0;
  *(undefined4 *)((int)this + 0x308) = 0;
  *(undefined4 *)((int)this + 0x30c) = 0;
  return (uint)this;
}

/* ref: FUN_00d030f0 */
uint F_00d030f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, float gen_a8)
{
  GEN_ENTER(0xd030f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[9];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  memcpy(&gen_args[4], &gen_a4, sizeof gen_a4);
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  memcpy(&gen_args[8], &gen_a8, sizeof gen_a8);
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  float fVar1;
  float fVar2;
  int * piVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x98))))((*(int * PTR32 *)&gen_args[0]))));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,((undefined1 *)(gen_frame + 0x28)));
  if ((char)uVar4 != '\0') {
    gen_imp_GetClientRect((HWND)(*(int * PTR32 *)&gen_args[0])[0xc2],&(*(tagRECT *)(gen_frame + 0x68)));
    (*(float *)&gen_args[4]) = (float)(float10)1;
    (*(float *)&gen_args[8]) = (float)(float10)1;
    (*(float *)(gen_frame + 0x24)) = gen_bits2f((*(tagRECT *)(gen_frame + 0x68)).right / 2);
    (*(float *)(gen_frame + 0x20)) = gen_bits2f((*(tagRECT *)(gen_frame + 0x68)).bottom / 2);
    F_00c34320(((undefined1 *)(gen_frame + 0x28)),((float *)(gen_frame + 0x10)),&(*(undefined4 *)&gen_args[1]));
    F_00c34320(((undefined1 *)(gen_frame + 0x28)),((byte *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[5]));
    fVar2 = (*(float *)(gen_frame + 0x24));
    fVar1 = (*(float *)(gen_frame + 0x20));
    (*(float *)(gen_frame + 0x24)) = (float)(int)gen_fl2bits((*(float *)(gen_frame + 0x24)));
    (*(float *)(gen_frame + 0x78)) = ((float)GEN_TOF(((float10)(int)gen_fl2bits(fVar2) +
                      (float10)((float *)(gen_frame + 0x10))[0] * ((float10)GEN_TOD(gen_bits2f((*(int * PTR32 *)&gen_args[0])[0xc4]))))));
    (*(float *)(gen_frame + 0x7c)) = (float)(float10)0;
    (*(float *)(gen_frame + 0x20)) = (float)(int)gen_fl2bits((*(float *)(gen_frame + 0x20)));
    (*(float *)(gen_frame + 0x80)) = ((float)GEN_TOF(((float10)(int)gen_fl2bits(fVar1) +
                      (float10)(*(float *)(gen_frame + 0x18)) * ((float10)GEN_TOD(gen_bits2f((*(int * PTR32 *)&gen_args[0])[0xc4]))))));
    (*(float *)(gen_frame + 0x84)) = (float)(float10)1;
    (*(float *)(gen_frame + 0x88)) = ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0))))) * ((float10)GEN_TOD(gen_bits2f((*(int * PTR32 *)&gen_args[0])[0xc4]))) +
                      (float10)(int)gen_fl2bits(fVar2))));
    (*(float *)(gen_frame + 0x8c)) = (float)(float10)0;
    (*(float *)(gen_frame + 0x90)) = ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8))))) * ((float10)GEN_TOD(gen_bits2f((*(int * PTR32 *)&gen_args[0])[0xc4]))) +
                      (float10)(int)gen_fl2bits(fVar1))));
    (*(float *)(gen_frame + 0x94)) = (float)(float10)1;
    uVar4 = F_00d042d0((*(int * PTR32 *)&gen_args[0]) + 0xc5,&(*(float *)(gen_frame + 0x78)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
  return uVar4;
}

/* ref: FUN_00d03210 */
unsigned int F_00d03210(unsigned int gen_a0)
{
  GEN_ENTER(0xd03210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[75])REFP(0x1131c74));
  *(undefined1 *)((int)this + 0xb0) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x98));
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x58)) {
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x94) + iVar2 * 4)));
      if (puVar1 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      }
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x94) + iVar2 * 4))) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 0x58));
  }
  *(undefined4 *)((int)this + 0x58) = 0;
  if (*(int *)((int)this + 0x94) != 0) {
    F_00406810(*(int *)((int)this + 0x94));
    *(undefined4 *)((int)this + 0x94) = 0;
  }
  piVar3 = (int *)((int)this + 0xb4);
  iVar2 = 0x20;
  do {
    if (*piVar3 != 0) {
      F_00406810(*piVar3);
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  piVar3 = (int *)((int)this + 0x314);
  *(undefined1 *)((int)this + 0x2d0) = 0;
  if (((int *)(gen_frame + 0x8)) != piVar3) {
    iVar2 = *piVar3;
    *piVar3 = 0;
    *(undefined4 *)((int)this + 0x318) = 0;
    *(undefined4 *)((int)this + 0x31c) = 0;
    if (iVar2 != 0) {
      F_00406810(iVar2);
    }
  }
  if (*(char *)((int)this + 0xb0) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x98));
  }
  if (*piVar3 != 0) {
    F_00406810(*piVar3);
  }
  *piVar3 = 0;
  *(undefined4 *)((int)this + 0x318) = 0;
  *(undefined4 *)((int)this + 0x31c) = 0;
  gen_imp_DeleteCriticalSection((int)this + 0x2d4);
  gen_imp_DeleteCriticalSection((int)this + 0x1b4);
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x98));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[75])REFP(0x1131b44));
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf68 */
unsigned int F_00d03330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd03330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * pLVar1;
  undefined * h;
  HGDIOBJ h_00;
  int iVar2;
  float * pfVar3;
  
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x18)) = (LPCRITICAL_SECTION)(this + 0x98);
  this[0xb0] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
  iVar2 = 0;
  if (0 < *(int *)(this + 0x58)) {
    do {
      F_00d077d0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x94) + iVar2 * 4))),param_1,param_2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0x58));
  }
  pLVar1 = this + 0x314;
  if (*(int *)(this + 0x314) != *(int *)(this + 0x318)) {
    h = gen_imp_CreatePen(0,1,0xff);
    h_00 = gen_imp_SelectObject(*(HDC *)(this + 0x30c),h);
    pfVar3 = *(float * PTR32 *)pLVar1;
    if (pfVar3 != *(float * PTR32 *)(this + 0x318)) {
      do {
        gen_imp_MoveToEx(*(HDC *)(this + 0x30c),(int)*pfVar3,(int)pfVar3[2],(LPPOINT)0x0);
        gen_imp_LineTo(*(HDC *)(this + 0x30c),(int)pfVar3[4],(int)pfVar3[6]);
        pfVar3 = pfVar3 + 8;
      } while (pfVar3 != *(float * PTR32 *)(this + 0x318));
    }
    gen_imp_SelectObject(*(HDC *)(this + 0x30c),h_00);
    gen_imp_DeleteObject(h);
    if (((undefined1 *)(gen_frame + 0x4)) != pLVar1) {
      iVar2 = *(int *)pLVar1;
      *(int *)pLVar1 = 0;
      *(undefined4 *)(this + 0x318) = 0;
      *(undefined4 *)(this + 0x31c) = 0;
      if (iVar2 != 0) {
        F_00406810(iVar2);
      }
    }
  }
  if (*(char *)&(*(undefined * PTR32 *)(((char *)((*(LPCRITICAL_SECTION *)(gen_frame + 0x18))) + (1) * 24))) != '\0') {
    gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x18)));
  }
  return 0;
}

/* ref: FUN_00d03460 */
uint F_00d03460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd03460u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_3[2];
  fVar2 = param_3[3];
  fVar3 = param_3[1];
  fVar4 = in_ecx[3];
  fVar5 = in_ecx[1];
  fVar6 = in_ecx[2];
  *param_2 = *in_ecx - *param_3;
  param_2[1] = fVar5 - fVar3;
  param_2[2] = fVar6 - fVar1;
  param_2[3] = fVar4 - fVar2;
  return (uint)param_2;
}

/* ref: FUN_00d034e0 */
uint F_00d034e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd034e0u, gen_a0, gen_a1, 0u, 0u);
  gen_v12 * in_ecx = (gen_v12 *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
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
  float fVar14;
  float fVar15;
  undefined1 in_XMM4 [16] = {0};
  undefined1 auVar13 [16];
  
  fVar1 = *(float *)(*in_ecx + 8);
  fVar2 = *(float *)in_ecx[1];
  fVar3 = *(float *)*in_ecx;
  fVar4 = *(float *)(*in_ecx + 4);
  fVar5 = fVar3 * fVar3;
  fVar6 = gen_bits2f((uint)((ulonglong)*(undefined8 *)*in_ecx >> 0x20)) * fVar4;
  fVar7 = SUB124(*in_ecx,8) * fVar1;
  fVar8 = fVar2 * fVar2;
  fVar9 = (fVar7 + fVar5) + fVar6;
  fVar10 = (fVar5 + fVar6) + fVar7;
  fVar5 = (fVar6 + fVar7) + fVar5;
  (*(undefined4 *)((char *)&auVar13 + 4)) = (undefined4)gen_fl2bits(fVar10);
  (*(undefined4 *)((char *)&auVar13 + 0)) = (undefined4)gen_fl2bits(fVar9);
  (*(undefined4 *)((char *)&auVar13 + 8)) = (undefined4)gen_fl2bits(fVar5);
  (*(undefined4 *)((char *)&auVar13 + 12)) = (undefined4)gen_fl2bits((fVar8 + fVar8) + fVar8);
  gen_rsqrtps(&(auVar13), &(in_XMM4), &(auVar13));
  fVar12 = (*(float *)((char *)&auVar13 + 0));
  fVar14 = (*(float *)((char *)&auVar13 + 4));
  fVar15 = (*(float *)((char *)&auVar13 + 8));
  fVar8 = *(float *)&REFG(undefined, 0x1131b34) * fVar14;
  fVar11 = *(float *)&REFG(undefined, 0x1131b38) * fVar15;
  fVar6 = *(float *)&REFG(undefined, 0x1131b24) - (fVar14 * fVar10) * fVar14;
  fVar7 = *(float *)&REFG(undefined, 0x1131b28) - (fVar15 * fVar5) * fVar15;
  *param_2 = (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x1131b20) - (fVar12 * fVar9) * fVar12) *
                                (*(float *)&REFG(undefined, 0x1131b30) * fVar12) + fVar12) * fVar3) &
             -(uint)(0.0 < fVar9) | ~-(uint)(0.0 < fVar9) & (uint)gen_fl2bits(fVar3);
  param_2[1] = (uint)gen_fl2bits((fVar6 * fVar8 + fVar14) * fVar4) & -(uint)(0.0 < fVar10) |
               ~-(uint)(0.0 < fVar10) & (uint)gen_fl2bits(fVar4);
  param_2[2] = (uint)gen_fl2bits((fVar7 * fVar11 + fVar15) * fVar1) & -(uint)(0.0 < fVar5) |
               ~-(uint)(0.0 < fVar5) & (uint)gen_fl2bits(fVar1);
  param_2[3] = (uint)gen_fl2bits(fVar2);
  return (uint)param_2;
}

/* ref: FUN_00d035a0 */
ushort F_00d035a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd035a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return (ushort)param_1 << 8 | (ushort)param_1 >> 8;
}

/* ref: FUN_00d035c0 */
uint F_00d035c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd035c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1 >> 0x18 | (param_1 & 0xff0000) >> 8 | (param_1 & 0xff00) << 8 | param_1 << 0x18;
}

/* ref: FUN_00d035d0 */
uint F_00d035d0(unsigned int gen_a0)
{
  GEN_ENTER(0xd035d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1 >> 0x18 | (param_1 & 0xff0000) >> 8 | (param_1 & 0xff00) << 8 | param_1 << 0x18;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::ILayoutManager::vf0 */
uint F_00d035f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd035f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[75])REFP(0x1131b44));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf20 */
unsigned int F_00d03630(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xd03630u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + 0x7c) = param_2;
  *(float *)(in_ecx + 0x80) = param_3;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf22 */
unsigned int F_00d03650(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xd03650u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + 0x84) = param_2;
  *(float *)(in_ecx + 0x88) = param_3;
  return 0;
}

/* ref: FUN_00d03680 */
uint F_00d03680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd03680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  F_00cbbd90(param_1,(int)this + 8);
  return (uint)param_1;
}

/* ref: FUN_00d036a0 */
uint F_00d036a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd036a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  
  uVar1 = F_00cbbdc0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),&(*(undefined4 *)&gen_args[1]));
  F_00cbbdb0(&(*(undefined4 *)&gen_args[1]));
  return uVar1;
}

/* ref: FUN_00d036c0 */
uint F_00d036c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd036c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  uVar1 = F_00cbbd70(((undefined1 *)(gen_frame + 0xc)));
  uVar1 = F_00cbbdc0((undefined *)((int)this + 8),uVar1);
  F_00cbbdb0(((undefined1 *)(gen_frame + 0xc)));
  return uVar1;
}

/* ref: FUN_00d03750 */
uint F_00d03750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd03750u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00d037d0 */
uint F_00d037d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd037d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00406810(param_1);
  }
  return uVar1;
}

/* ref: FUN_00d037f0 */
uint F_00d037f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd037f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00d03830 */
uint F_00d03830(unsigned int gen_a0)
{
  GEN_ENTER(0xd03830u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                    (REFG(int * PTR32, 0x15d778c),param_1 << 5,"CDev.Engine.Sd.Allocator",0,0,0x10);
  return uVar1;
}

/* ref: FUN_00d038a0 */
ushort F_00d038a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd038a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return (ushort)param_1 << 8 | (ushort)param_1 >> 8;
}

/* ref: FUN_00d038c0 */
uint F_00d038c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd038c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1 >> 0x18 | (param_1 & 0xff0000) >> 8 | (param_1 & 0xff00) << 8 | param_1 << 0x18;
}

/* ref: FUN_00d038e0 */
uint F_00d038e0(float gen_a0)
{
  GEN_ENTER(0xd038e0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (uint)gen_fl2bits(param_1) >> 0x18 | ((uint)gen_fl2bits(param_1) & 0xff0000) >> 8 |
         ((uint)gen_fl2bits(param_1) & 0xff00) << 8 | (int)gen_fl2bits(param_1) << 0x18;
}

/* ref: FUN_00d03900 */
uint F_00d03900(unsigned int gen_a0)
{
  GEN_ENTER(0xd03900u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00d03920 */
uint F_00d03920(unsigned int gen_a0)
{
  GEN_ENTER(0xd03920u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00d03930 */
uint F_00d03930(unsigned int gen_a0)
{
  GEN_ENTER(0xd03930u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00d03950 */
uint F_00d03950(unsigned int gen_a0)
{
  GEN_ENTER(0xd03950u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00d03960 */
uint F_00d03960(unsigned int gen_a0)
{
  GEN_ENTER(0xd03960u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00d03970 */
uint F_00d03970(unsigned int gen_a0)
{
  GEN_ENTER(0xd03970u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00d03980 */
uint F_00d03980(unsigned int gen_a0)
{
  GEN_ENTER(0xd03980u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00d03990 */
uint F_00d03990(unsigned int gen_a0)
{
  GEN_ENTER(0xd03990u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00d039b0 */
uint F_00d039b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd039b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  return (uint)this;
}

/* ref: FUN_00d03a00 */
uint F_00d03a00(unsigned int gen_a0)
{
  GEN_ENTER(0xd03a00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00d03a20 */
uint F_00d03a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd03a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  *(ushort *)param_1 = *(ushort *)((int)(uintptr_t)this) << 8 | *(ushort *)((int)(uintptr_t)this) >> 8;
  *(ushort *)((int)param_1 + 2) = *(ushort *)((int)this + 2) << 8 | *(ushort *)((int)this + 2) >> 8;
  iVar3 = 3;
  puVar2 = param_1;
  do {
    puVar2 = puVar2 + 1;
    uVar1 = *((uint *)GEN_TOP((((int)this - (int)param_1) + (int)puVar2)));
    uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    *puVar2 = uVar1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return uVar1;
}

/* ref: FUN_00d03a90 */
uint F_00d03a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd03a90u, gen_a0, gen_a1, 0u, 0u);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  *(ushort *)param_2 = *param_1 << 8 | *param_1 >> 8;
  *(ushort *)(param_2 + 2) = param_1[1] << 8 | param_1[1] >> 8;
  *(char *)(param_2 + 4) = (char)param_1[2];
  *(undefined1 *)(param_2 + 5) = *(undefined1 *)((int)param_1 + 5);
  *(char *)(param_2 + 6) = (char)param_1[3];
  *(undefined1 *)(param_2 + 7) = *(undefined1 *)((int)param_1 + 7);
  uVar1 = *(uint *)(param_1 + 4);
  *(uint *)(param_2 + 8) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 6);
  uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *(uint *)(param_2 + 0xc) = uVar1;
  return uVar1;
}

/* ref: FUN_00d03b30 */
uint F_00d03b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd03b30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00d03b60 */
byte F_00d03b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd03b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00d03b90 */
uint F_00d03b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd03b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 5;
  if (0x7ffffff - (uVar1 >> 1) < uVar1) {
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

/* ref: FUN_00d03be0 */
uint F_00d03be0(unsigned int gen_a0)
{
  GEN_ENTER(0xd03be0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00d03bf0 */
uint F_00d03bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd03bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00d03c00 */
uint F_00d03c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd03c00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00d03c20 */
uint F_00d03c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd03c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  return (uint)this;
}

/* ref: FUN_00d03c60 */
uint F_00d03c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd03c60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    param_1[6] = param_2[6];
    param_1[7] = param_2[7];
  }
  return (uint)param_1;
}

/* ref: FUN_00d03ca0 */
uint F_00d03ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd03ca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 8) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[3] = puVar2[3];
    puVar1[4] = puVar2[4];
    puVar1[5] = puVar2[5];
    puVar1[6] = puVar2[6];
    puVar1[7] = puVar2[7];
    puVar1 = puVar1 + 8;
  }
  return (uint)puVar1;
}

/* ref: FUN_00d03cf0 */
uint F_00d03cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd03cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    param_1[6] = param_2[6];
    param_1[7] = param_2[7];
  }
  return (uint)param_1;
}

/* ref: FUN_00d03d40 */
uint F_00d03d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd03d40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00d03d50 */
uint F_00d03d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd03d50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00d03d70 */
uint F_00d03d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd03d70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  
  iVar1 = *(int *)this;
  *param_1 = iVar1;
  *(int *)this = iVar1 + 0x20;
  return (uint)param_1;
}

/* ref: FUN_00d03d90 */
byte F_00d03d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd03d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00d03dc0 */
uint F_00d03dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd03dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    param_2[4] = param_3[4];
    param_2[5] = param_3[5];
    param_2[6] = param_3[6];
    param_2[7] = param_3[7];
  }
  return (uint)param_2;
}

/* ref: FUN_00d03e00 */
uint F_00d03e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd03e00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00d03ca0(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00d03e20 */
uint F_00d03e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd03e20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    param_1[6] = param_2[6];
    param_1[7] = param_2[7];
  }
  return (uint)param_1;
}

/* ref: FUN_00d03e60 */
uint F_00d03e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd03e60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    param_1[6] = param_2[6];
    param_1[7] = param_2[7];
  }
  return (uint)param_1;
}

/* ref: FUN_00d03ec0 */
uint F_00d03ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd03ec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    param_2[4] = param_3[4];
    param_2[5] = param_3[5];
    param_2[6] = param_3[6];
    param_2[7] = param_3[7];
  }
  return (uint)param_2;
}

/* ref: FUN_00d03f00 */
uint F_00d03f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd03f00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    param_2[4] = param_3[4];
    param_2[5] = param_3[5];
    param_2[6] = param_3[6];
    param_2[7] = param_3[7];
  }
  return (uint)param_2;
}

/* ref: FUN_00d03f50 */
unsigned int F_00d03f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd03f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 8) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      puVar1[4] = puVar2[4];
      puVar1[5] = puVar2[5];
      puVar1[6] = puVar2[6];
      puVar1[7] = puVar2[7];
    }
    puVar1 = puVar1 + 8;
  }
  return 0;
}

/* ref: FUN_00d03fb0 */
unsigned int F_00d03fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd03fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 in_ECX = 0;
  
  F_00d03f50(param_1,param_2,param_3,param_4,0,in_ECX);
  return 0;
}

/* ref: FUN_00d03ff0 */
uint F_00d03ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd03ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_00d03ca0(param_3,*(undefined4 *)((int)this + 4),param_2,param_1);
    *(uint *)((int)this + 4) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00d04030 */
unsigned int F_00d04030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd04030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00d03f50(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return 0;
}

/* ref: FUN_00d04060 */
uint F_00d04060(unsigned int gen_a0)
{
  GEN_ENTER(0xd04060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406810(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00d04090 */
uint F_00d04090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd04090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint in_EAX = 0;
  
  if (0x7ffffff < param_1) {
                    
    F_00c4579a("vector<T> too long");
  }
  if ((uint)(*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 5) < param_1) {
    in_EAX = F_00d03830(param_1);
    F_00d03f50(*(undefined4 *)this,*(undefined4 *)((int)this + 4),in_EAX,(int)this + 0xc,0,in_EAX)
    ;
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00406810(iVar1);
    }
    *(uint *)((int)this + 4) = (iVar2 - iVar1 & 0xffffffe0U) + in_EAX;
    *(uint *)((int)this + 8) = param_1 * 0x20 + in_EAX;
    *(uint *)this = in_EAX;
  }
  return in_EAX;
}

/* ref: FUN_00d04110 */
uint F_00d04110(unsigned int gen_a0)
{
  GEN_ENTER(0xd04110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 4);
  if (*(uint *)this != uVar1) {
    uVar1 = F_00d03ca0(uVar1,uVar1,*(uint *)this,this);
    *(uint *)((int)this + 4) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00d04140 */
uint F_00d04140(unsigned int gen_a0)
{
  GEN_ENTER(0xd04140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406810(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00d04170 */
uint F_00d04170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd04170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 5;
  if (0x7ffffffU - param_1 < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 5;
  if (uVar2 < uVar1) {
    if (0x7ffffff - (uVar2 >> 1) < uVar2) {
      uVar2 = 0;
    }
    else {
      uVar2 = uVar2 + (uVar2 >> 1);
    }
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00d04090(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00d041d0 */
uint F_00d041d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd041d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar4) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar4 == *(undefined4 * PTR32 *)((int)this + 8)) {
      puVar4 = (undefined4 *)F_00d04170(this,1);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar2 != (undefined4 *)0x0) {
      puVar4 = ((undefined4 *)GEN_TOP((((int)param_1 - (int)puVar1 & 0xffffffe0U) + *(int *)this)));
      *puVar2 = *puVar4;
      puVar2[1] = puVar4[1];
      puVar2[2] = puVar4[2];
      puVar2[3] = puVar4[3];
      puVar2[4] = puVar4[4];
      puVar2[5] = puVar4[5];
      puVar2[6] = puVar4[6];
      uVar3 = puVar4[7];
      puVar2[7] = uVar3;
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x20;
      return uVar3;
    }
  }
  else {
    if (puVar4 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00d04170(this,1);
    }
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *param_1;
      puVar4[1] = param_1[1];
      puVar4[2] = param_1[2];
      puVar4[3] = param_1[3];
      puVar4[4] = param_1[4];
      puVar4[5] = param_1[5];
      puVar4[6] = param_1[6];
      puVar4[7] = param_1[7];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x20;
  return (uint)puVar4;
}

/* ref: FUN_00d04290 */
uint F_00d04290(unsigned int gen_a0)
{
  GEN_ENTER(0xd04290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406810(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00d042d0 */
uint F_00d042d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd042d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar4) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar4 == *(undefined4 * PTR32 *)((int)this + 8)) {
      puVar4 = (undefined4 *)F_00d04170(this,1);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar2 != (undefined4 *)0x0) {
      puVar4 = ((undefined4 *)GEN_TOP((((int)param_1 - (int)puVar1 & 0xffffffe0U) + *(int *)this)));
      *puVar2 = *puVar4;
      puVar2[1] = puVar4[1];
      puVar2[2] = puVar4[2];
      puVar2[3] = puVar4[3];
      puVar2[4] = puVar4[4];
      puVar2[5] = puVar4[5];
      puVar2[6] = puVar4[6];
      uVar3 = puVar4[7];
      puVar2[7] = uVar3;
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x20;
      return uVar3;
    }
  }
  else {
    if (puVar4 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00d04170(this,1);
    }
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *param_1;
      puVar4[1] = param_1[1];
      puVar4[2] = param_1[2];
      puVar4[3] = param_1[3];
      puVar4[4] = param_1[4];
      puVar4[5] = param_1[5];
      puVar4[6] = param_1[6];
      puVar4[7] = param_1[7];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x20;
  return (uint)puVar4;
}

/* ref: FUN_00d04390 */
unsigned int F_00d04390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd04390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (this != param_1) {
    if (*(int *)this != 0) {
      F_00406810(*(int *)this);
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = param_1[1];
    *(undefined4 *)((int)this + 8) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf7 */
uint F_00d043e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd043e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x34) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf8 */
uint F_00d043f0(unsigned int gen_a0)
{
  GEN_ENTER(0xd043f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x34);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf11 */
uint F_00d04400(unsigned int gen_a0)
{
  GEN_ENTER(0xd04400u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x38);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf12 */
uint F_00d04410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd04410u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x38) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf13 */
uint F_00d04420(unsigned int gen_a0)
{
  GEN_ENTER(0xd04420u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x3c);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LayoutManager::vf14 */
uint F_00d04430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd04430u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x3c) = param_2;
  return param_2;
}

