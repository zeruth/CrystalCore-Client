#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_005a4450 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005a4450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x5a4450u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_TOP(0x68, 8, 4);
  int iVar1;
  byte bVar2;
  short sVar3;
  undefined * pvVar4;
  uint uVar5;
  undefined4 uVar6;
  byte * pbVar7;
  uint uVar8;
  int * piVar9;
  uint uVar10;
  int iVar11;
  int * piVar12;
  undefined4 * puVar13;
  undefined4 * puVar14;
  uint * puVar15;
  uint * puVar16;
  bool bVar17;
  float10 fVar18;
  float fVar19;
  
  ((uint *)(gen_frame + 0x54))[3] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x64);
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = this;
  if (param_1 == 0) {
    uVar8 = *((uint *)GEN_TOP(((int)this + 0xdc)));
    uVar10 = 0;
    if (uVar8 != 0) {
      *((uint *)GEN_TOP((uVar8 + 0x84))) = *((uint *)GEN_TOP((uVar8 + 0x84))) & 0xffefffff;
      *((uint *)GEN_TOP((uVar8 + 0x88))) = *((uint *)GEN_TOP((uVar8 + 0x88))) | 0x80;
      return uVar8;
    }
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0xe0)));
    if ((pvVar4 == ((undefined *)GEN_TOP(0x0))) || (*((short *)GEN_TOP(((int)pvVar4 + 0x18))) != 3)) {
      pvVar4 = ((undefined *)GEN_TOP(0x0));
    }
    F_00584110(pvVar4 GEN_EDX_FWD,param_5);
    if (*((int *)GEN_TOP(((int)this + 0xdc))) == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xdc))) + 0x7e)));
    }
    if (*((int *)GEN_TOP(((int)this + 0xe4))) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xe4))) + 0x7e)));
    }
    if (*((int *)GEN_TOP(((int)this + 0xe0))) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xe0))) + 0x7e)));
    }
    (*(int *)(gen_frame + 0x10)) = (uVar10 - uVar5) - uVar8;
    (*(int *)(gen_frame + 0x30)) = 0;
    (*(uint *)(gen_frame + 0x2c)) = 0;
    if (param_1 != 0) {
      do {
        iVar11 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + (*(uint *)(gen_frame + 0x2c)) * 4 + 0x150)));
        (*(int *)(gen_frame + 0x28)) = iVar11;
        if ((((((iVar11 == 0) || (*((ushort *)GEN_TOP((iVar11 + 0x18))) < 1000)) ||
              (iVar11 = *((int *)GEN_TOP((iVar11 + 0x8c))), iVar11 == 0)) ||
             (((*((byte *)GEN_TOP((iVar11 + 0x60))) & 1) == 0 || ((*((byte *)GEN_TOP((iVar11 + 0x60))) & 4) == 0)))) ||
            (*((char *)GEN_TOP((iVar11 + 0x1c))) != '\x01')) ||
           (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar11 + 0xc))) + 0xf))) != '\x15')) {
          iVar11 = 0;
        }
        bVar2 = *((byte *)GEN_TOP((iVar11 + 0x60))) & 1;
        (*(byte *)(gen_frame + 0x37)) = bVar2;
        if (((bVar2 != 0) && (*((int *)GEN_TOP((iVar11 + 0x94))) != 0)) &&
           ((iVar1 = *((int *)GEN_TOP((iVar11 + 0xc))), iVar1 != 0 &&
            ((uVar10 = *((uint *)GEN_TOP((iVar1 + 4))), uVar10 != 0 && (uVar8 = 0, uVar10 != 0)))))) {
          piVar12 = *((int * PTR32 *)GEN_TOP((iVar1 + 8)));
          (*(int * PTR32 *)(gen_frame + 0x38)) = piVar12;
          piVar9 = piVar12;
          do {
            if (*((int *)GEN_TOP((*piVar9 + 4))) == *((int *)GEN_TOP((iVar11 + 0x94)))) {
              pvVar4 = ((undefined *)GEN_TOP(piVar12[uVar8]));
              if ((pvVar4 != ((undefined *)GEN_TOP(0x0))) && (*((short *)GEN_TOP(((int)pvVar4 + 0x18))) == 3)) {
                (*(int * PTR32 *)(gen_frame + 0x38)) = pvVar4;
                goto LAB_005a45b4;
              }
              break;
            }
            uVar8 = uVar8 + 1;
            piVar9 = piVar9 + 1;
          } while (uVar8 < uVar10);
        }
        (*(int * PTR32 *)(gen_frame + 0x38)) = ((undefined *)GEN_TOP(0x0));
LAB_005a45b4: ;
        piVar12 = (*(int * PTR32 *)(gen_frame + 0x38));
        if ((((bVar2 != 0) && (*((int *)GEN_TOP((iVar11 + 0x90))) != 0)) &&
            (iVar1 = *((int *)GEN_TOP((iVar11 + 0xc))), iVar1 != 0)) &&
           ((uVar10 = *((uint *)GEN_TOP((iVar1 + 4))), uVar10 != 0 && (uVar8 = 0, uVar10 != 0)))) {
          piVar9 = *((int * PTR32 *)GEN_TOP((iVar1 + 8)));
          do {
            if (*((int *)GEN_TOP((*piVar9 + 4))) == *((int *)GEN_TOP((iVar11 + 0x90)))) {
              iVar11 = (*((int * PTR32 *)GEN_TOP((iVar1 + 8))))[uVar8];
              if ((iVar11 != 0) && (*((short *)GEN_TOP((iVar11 + 0x18))) == 3)) goto LAB_005a45f4;
              break;
            }
            uVar8 = uVar8 + 1;
            piVar9 = piVar9 + 1;
          } while (uVar8 < uVar10);
        }
        iVar11 = 0;
LAB_005a45f4: ;
        if ((*((byte *)GEN_TOP((param_3 + ((*(uint *)(gen_frame + 0x2c)) + param_4) * 8))) & 0xf) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *((undefined4 *)GEN_TOP((param_3 + ((*(uint *)(gen_frame + 0x2c)) + param_4) * 8 + 4)));
        }
        (*(undefined4 *)(gen_frame + 0x3c)) = 6;
        (*(undefined4 *)(gen_frame + 0x40)) = uVar6;
        if ((*(int * PTR32 *)(gen_frame + 0x38)) == ((undefined *)GEN_TOP(0x0))) {
          uVar10 = 0;
        }
        else {
          uVar10 = (uint)*((ushort *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x38)) + 0x7c)));
        }
        (*(undefined4 *)(gen_frame + 0x44)) = 4;
        (*(uint *)(gen_frame + 0x48)) = uVar10;
        if ((*(int * PTR32 *)(gen_frame + 0x38)) == ((undefined *)GEN_TOP(0x0))) {
          uVar10 = 0;
        }
        else {
          uVar10 = (uint)(*((byte *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x38)) + 0xfc))) >> 4);
        }
        (*(undefined4 *)(gen_frame + 0x4c)) = 4;
        (*(uint *)(gen_frame + 0x50)) = uVar10;
        if ((*(int * PTR32 *)(gen_frame + 0x38)) == ((undefined *)GEN_TOP(0x0))) {
          bVar2 = 0;
        }
        else {
          bVar2 = *((byte *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x38)) + 0xfd)));
        }
        ((uint *)(gen_frame + 0x54))[0] = 4;
        ((uint *)(gen_frame + 0x54))[1] = (uint)bVar2;
        pbVar7 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) + 4))))
                                   (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x1c)),0x2a,4,&(*(undefined4 *)(gen_frame + 0x3c)))));
        if ((*pbVar7 & 0xf) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)(pbVar7 + 4);
        }
        F_00584110(piVar12 GEN_EDX_ARG,uVar6);
        puVar13 = (*(undefined4 * PTR32 *)(gen_frame + 0x20));
        if (((*(uint *)(gen_frame + 0x1c)) >> 5 & 1) != 0) {
          if ((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != ((undefined4 *)GEN_TOP(0x0))) {
            uVar10 = (*(uint *)(gen_frame + 0x1c)) & 0xf;
            if (uVar10 == 9) {
              F_00488040((*(undefined4 * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),*(*(undefined4 * PTR32 *)(gen_frame + 0x20)),(*(undefined4 * PTR32 *)(gen_frame + 0x20))[1]);
              F_00488dc0(puVar13 GEN_EDX_ARG);
            }
            else if ((uVar10 != 6) && (uVar10 != 7)) goto LAB_005a4707;
            F_00406ad0(puVar13);
          }
LAB_005a4707: ;
          (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = ((undefined4 *)GEN_TOP(0x0));
        }
        (*(uint *)(gen_frame + 0x1c)) = 0;
        if (piVar12 == ((undefined *)GEN_TOP(0x0))) {
          sVar3 = 0;
        }
        else {
          fVar19 = (float)(int)(short)(*(int *)(gen_frame + 0x30));
          (*(float *)(gen_frame + 0x14)) = fVar19;
          if (((*((uint *)GEN_TOP(((int)piVar12 + 0x88))) & 1) == 0) &&
             (fVar18 = (float10)(int)(short)(*(int *)(gen_frame + 0x30)),
             bVar17 = GEN_ISNAN((float10)*((float *)GEN_TOP(((int)piVar12 + 0x3c)))) || GEN_ISNAN(fVar18),
             bVar17 == (bVar17 || (float10)*((float *)GEN_TOP(((int)piVar12 + 0x3c))) == fVar18))) {
            *((uint *)GEN_TOP(((int)piVar12 + 0x88))) = *((uint *)GEN_TOP(((int)piVar12 + 0x88))) | 1;
          }
          *((float *)GEN_TOP(((int)piVar12 + 0x3c))) = fVar19;
          sVar3 = (short)(int)fVar19;
        }
        if (iVar11 != 0) {
          fVar19 = (float)(int)sVar3;
          (*(float *)(gen_frame + 0x18)) = fVar19;
          if (((*((uint *)GEN_TOP((iVar11 + 0x88))) & 1) == 0) &&
             (fVar18 = (float10)(int)sVar3,
             bVar17 = GEN_ISNAN((float10)*((float *)GEN_TOP((iVar11 + 0x3c)))) || GEN_ISNAN(fVar18),
             bVar17 == (bVar17 || (float10)*((float *)GEN_TOP((iVar11 + 0x3c))) == fVar18))) {
            *((uint *)GEN_TOP((iVar11 + 0x88))) = *((uint *)GEN_TOP((iVar11 + 0x88))) | 1;
          }
          *((float *)GEN_TOP((iVar11 + 0x3c))) = fVar19;
        }
        if ((*(int *)(gen_frame + 0x28)) != 0) {
          *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x28)) + 0x84))) = *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x28)) + 0x84))) | 0x100000;
          *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x28)) + 0x88))) = *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x28)) + 0x88))) & 0xffffff7f;
        }
        (*(int *)(gen_frame + 0x28)) = REFG(undefined4, 0x108cc50);
        if (piVar12 == ((undefined *)GEN_TOP(0x0))) {
          uVar10 = 0;
        }
        else {
          uVar8 = F_005684e0(piVar12 GEN_EDX_ARG,0);
          uVar10 = 0;
          if (uVar8 != 0) {
            uVar10 = F_0042a990((int)piVar12 + 0x9c GEN_EDX_ARG);
            fVar19 = REFG(float, 0x10a0da0);
            if ((*((byte *)GEN_TOP((uVar8 + 0x148))) & 2) != 0) {
              pvVar4 = *((undefined * PTR32 *)GEN_TOP((uVar8 + 0x13c)));
              (*(int * PTR32 *)(gen_frame + 0x38)) = pvVar4;
              if (uVar10 == 0) {
                fVar19 = 0.0;
              }
              else {
                piVar12 = ((int *)GEN_TOP(((int)pvVar4 + 0x144)));
                ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar4 + 0x144))) + 0x24))))(piVar12,uVar8,uVar10);
                *((undefined1 *)GEN_TOP(((int)pvVar4 + 0x2a8))) = 0;
                *((undefined4 *)GEN_TOP(((int)pvVar4 + 0x1f8))) = 0;
                *((int *)GEN_TOP(((int)pvVar4 + 0x1fc))) = (*(int *)(gen_frame + 0x28));
                if ((((*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar4 + 0x14c))) + 0x148))) & 2) != 0) &&
                    (bVar2 = *((byte *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar4 + 0x150))) + 0x6e))), (bVar2 & 1) != 0)) &&
                   ((bVar2 & 2) != 0)) {
                  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar12 + 4))))(piVar12 GEN_EDX_ARG);
                  F_005662b0(piVar12 GEN_EDX_ARG,uVar10);
                  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar12 + 8))))(piVar12 GEN_EDX_ARG);
                }
                fVar19 = *((float *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x38)) + 0x288)));
                (*(float *)(gen_frame + 0xc)) = fVar19;
                (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x38)) + 0x284)));
              }
            }
            puVar13 = ((undefined4 *)GEN_TOP((uVar8 + 0xa8)));
            puVar14 = ((undefined4 *)GEN_TOP((uVar8 + 100)));
            for (iVar11 = 0x11; iVar11 != 0; iVar11 = iVar11 - 1) {
              *puVar14 = *puVar13;
              puVar13 = puVar13 + 1;
              puVar14 = puVar14 + 1;
            }
            uVar10 = (int)fVar19 & 0xffff;
          }
        }
        (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x30)) + 5 + uVar10;
        iVar11 = 3;
        puVar15 = ((uint *)(gen_frame + 0x54)) + 3;
        do {
          puVar16 = puVar15 - 2;
          if ((puVar15[-3] >> 5 & 1) != 0) {
            puVar13 = ((undefined4 *)GEN_TOP(*puVar16));
            if (puVar13 != ((undefined4 *)GEN_TOP(0x0))) {
              uVar10 = puVar15[-3] & 0xf;
              if (uVar10 == 9) {
                F_00488040(puVar13 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),*puVar13,puVar13[1]);
                F_00488dc0(puVar13 GEN_EDX_ARG);
                F_00406ad0(puVar13);
              }
              else if ((uVar10 == 6) || (uVar10 == 7)) {
                F_00406ad0(puVar13);
                *puVar16 = 0;
              }
            }
            *puVar16 = 0;
          }
          iVar11 = iVar11 - 1;
          puVar15[-3] = 0;
          puVar15 = puVar16;
        } while (-1 < iVar11);
        uVar10 = (*(uint *)(gen_frame + 0x2c)) + 1;
        (*(uint *)(gen_frame + 0x2c)) = uVar10;
      } while (uVar10 < param_1);
    }
    if (param_1 < 5) {
      piVar12 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + param_1 * 4 + 0x150)));
      iVar11 = 5 - param_1;
      do {
        iVar1 = *piVar12;
        if (iVar1 != 0) {
          *((uint *)GEN_TOP((iVar1 + 0x84))) = *((uint *)GEN_TOP((iVar1 + 0x84))) & 0xffefffff;
          *((uint *)GEN_TOP((iVar1 + 0x88))) = *((uint *)GEN_TOP((iVar1 + 0x88))) | 0x80;
        }
        piVar12 = piVar12 + 1;
        iVar11 = iVar11 - 1;
      } while (iVar11 != 0);
    }
    iVar11 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0xe0)));
    if ((iVar11 == 0) || (*((short *)GEN_TOP((iVar11 + 0x18))) != 3)) {
      sVar3 = 0;
    }
    else {
      sVar3 = *((short *)GEN_TOP((iVar11 + 0x7e)));
    }
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0xdc))) != 0) {
      *((short *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0xdc))) + 0x7e))) = (short)(*(int *)(gen_frame + 0x10)) + sVar3 + (short)(*(int *)(gen_frame + 0x30));
    }
    uVar10 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0xdc)));
    if (uVar10 != 0) {
      *((uint *)GEN_TOP((uVar10 + 0x84))) = *((uint *)GEN_TOP((uVar10 + 0x84))) | 0x100000;
      *((uint *)GEN_TOP((uVar10 + 0x88))) = *((uint *)GEN_TOP((uVar10 + 0x88))) & 0xffffff7f;
    }
  }
  return uVar10;
}

/* ref: FUN_005a49e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005a49e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x5a49e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_FRAME_DECL_TOP(0x64, 12, 4);
  int iVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  byte * pbVar8;
  undefined * this_00;
  int * piVar9;
  undefined4 * puVar10;
  undefined4 * puVar11;
  uint * puVar12;
  uint * puVar13;
  bool bVar14;
  float10 fVar15;
  float fVar16;
  
  ((uint *)(gen_frame + 0x50))[3] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = this;
  if (param_1 == 0) {
    uVar5 = *((uint *)GEN_TOP(((int)this + 0x114)));
    uVar7 = 0;
    if (uVar5 != 0) {
      *((uint *)GEN_TOP((uVar5 + 0x84))) = *((uint *)GEN_TOP((uVar5 + 0x84))) & 0xffefffff;
      *((uint *)GEN_TOP((uVar5 + 0x88))) = *((uint *)GEN_TOP((uVar5 + 0x88))) | 0x80;
      return uVar5;
    }
  }
  else {
    (*(uint *)(gen_frame + 0x34)) = (uint)*((ushort *)GEN_TOP(((int)this + 0xba)));
    iVar4 = *((int *)GEN_TOP(((int)this + 0x114)));
    if (iVar4 != 0) {
      *((uint *)GEN_TOP((iVar4 + 0x84))) = *((uint *)GEN_TOP((iVar4 + 0x84))) | 0x100000;
      *((uint *)GEN_TOP((iVar4 + 0x88))) = *((uint *)GEN_TOP((iVar4 + 0x88))) & 0xffffff7f;
    }
    if (param_1 != 0) {
      (*(int * PTR32 *)(gen_frame + 0x30)) = ((int *)GEN_TOP(((int)this + 0x23c)));
      (*(byte * PTR32 *)(gen_frame + 0x2c)) = ((byte *)GEN_TOP((param_3 + param_4 * 8)));
      (*(uint *)(gen_frame + 0x24)) = param_1;
      do {
        iVar4 = *(*(int * PTR32 *)(gen_frame + 0x30));
        if ((((iVar4 == 0) || (*((ushort *)GEN_TOP((iVar4 + 0x18))) < 1000)) ||
            (iVar4 = *((int *)GEN_TOP((iVar4 + 0x8c))), iVar4 == 0)) ||
           ((((*((byte *)GEN_TOP((iVar4 + 0x60))) & 1) == 0 || ((*((byte *)GEN_TOP((iVar4 + 0x60))) & 4) == 0)) ||
            ((*((char *)GEN_TOP((iVar4 + 0x1c))) != '\x01' ||
             (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0xc))) + 0xf))) != '\x15')))))) {
          iVar4 = 0;
        }
        if ((((*((byte *)GEN_TOP((iVar4 + 0x60))) & 1) != 0) && (*((int *)GEN_TOP((iVar4 + 0x90))) != 0)) &&
           ((iVar1 = *((int *)GEN_TOP((iVar4 + 0xc))), iVar1 != 0 &&
            ((uVar7 = *((uint *)GEN_TOP((iVar1 + 4))), uVar7 != 0 && (uVar5 = 0, uVar7 != 0)))))) {
          piVar9 = *((int * PTR32 *)GEN_TOP((iVar1 + 8)));
          do {
            if (*((int *)GEN_TOP((*piVar9 + 4))) == *((int *)GEN_TOP((iVar4 + 0x90)))) {
              this_00 = ((undefined *)GEN_TOP((*((int * PTR32 *)GEN_TOP((iVar1 + 8))))[uVar5]));
              if ((this_00 != ((undefined *)GEN_TOP(0x0))) && (*((short *)GEN_TOP(((int)this_00 + 0x18))) == 3))
              goto LAB_005a4af6;
              break;
            }
            uVar5 = uVar5 + 1;
            piVar9 = piVar9 + 1;
          } while (uVar5 < uVar7);
        }
        this_00 = ((undefined *)GEN_TOP(0x0));
LAB_005a4af6: ;
        if ((*(*(byte * PTR32 *)(gen_frame + 0x2c)) & 0xf) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)((*(byte * PTR32 *)(gen_frame + 0x2c)) + 4);
        }
        (*(undefined4 *)(gen_frame + 0x38)) = 6;
        (*(undefined4 *)(gen_frame + 0x3c)) = uVar6;
        if (this_00 == ((undefined *)GEN_TOP(0x0))) {
          uVar7 = 0;
        }
        else {
          uVar7 = (uint)*((ushort *)GEN_TOP(((int)this_00 + 0x7c)));
        }
        (*(undefined4 *)(gen_frame + 0x40)) = 4;
        (*(uint *)(gen_frame + 0x44)) = uVar7;
        if (this_00 == ((undefined *)GEN_TOP(0x0))) {
          uVar7 = 0;
        }
        else {
          uVar7 = (uint)(*((byte *)GEN_TOP(((int)this_00 + 0xfc))) >> 4);
        }
        (*(undefined4 *)(gen_frame + 0x48)) = 4;
        (*(uint *)(gen_frame + 0x4c)) = uVar7;
        if (this_00 == ((undefined *)GEN_TOP(0x0))) {
          bVar2 = 0;
        }
        else {
          bVar2 = *((byte *)GEN_TOP(((int)this_00 + 0xfd)));
        }
        ((uint *)(gen_frame + 0x50))[0] = 4;
        ((uint *)(gen_frame + 0x50))[1] = (uint)bVar2;
        pbVar8 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) + 4))))
                                   (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x18)),0x2a,4,&(*(undefined4 *)(gen_frame + 0x38)))));
        if ((*pbVar8 & 0xf) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)(pbVar8 + 4);
        }
        F_00584110(this_00 GEN_EDX_ARG,uVar6);
        puVar10 = (*(undefined4 * PTR32 *)(gen_frame + 0x1c));
        if (((*(uint *)(gen_frame + 0x18)) >> 5 & 1) != 0) {
          if ((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) {
            uVar7 = (*(uint *)(gen_frame + 0x18)) & 0xf;
            if (uVar7 == 9) {
              F_00488040((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),*(*(undefined4 * PTR32 *)(gen_frame + 0x1c)),(*(undefined4 * PTR32 *)(gen_frame + 0x1c))[1]);
              F_00488dc0(puVar10 GEN_EDX_ARG);
            }
            else if ((uVar7 != 6) && (uVar7 != 7)) goto LAB_005a4be3;
            F_00406ad0(puVar10);
          }
LAB_005a4be3: ;
          (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = ((undefined4 *)GEN_TOP(0x0));
        }
        iVar4 = *(*(int * PTR32 *)(gen_frame + 0x30));
        (*(uint *)(gen_frame + 0x18)) = 0;
        if (iVar4 != 0) {
          *((uint *)GEN_TOP((iVar4 + 0x84))) = *((uint *)GEN_TOP((iVar4 + 0x84))) | 0x100000;
          *((uint *)GEN_TOP((iVar4 + 0x88))) = *((uint *)GEN_TOP((iVar4 + 0x88))) & 0xffffff7f;
        }
        iVar4 = *(*(int * PTR32 *)(gen_frame + 0x30));
        if (iVar4 != 0) {
          fVar16 = (float)(int)(short)(*(uint *)(gen_frame + 0x34));
          (*(float *)(gen_frame + 0x14)) = fVar16;
          if (((*((uint *)GEN_TOP((iVar4 + 0x88))) & 1) == 0) &&
             (fVar15 = (float10)(int)(short)(*(uint *)(gen_frame + 0x34)),
             bVar14 = GEN_ISNAN((float10)*((float *)GEN_TOP((iVar4 + 0x3c)))) || GEN_ISNAN(fVar15),
             bVar14 == (bVar14 || (float10)*((float *)GEN_TOP((iVar4 + 0x3c))) == fVar15))) {
            *((uint *)GEN_TOP((iVar4 + 0x88))) = *((uint *)GEN_TOP((iVar4 + 0x88))) | 1;
          }
          *((float *)GEN_TOP((iVar4 + 0x3c))) = fVar16;
        }
        (*(undefined4 *)(gen_frame + 0x10)) = REFG(undefined4, 0x108cc50);
        if (this_00 == ((undefined *)GEN_TOP(0x0))) {
          sVar3 = 0;
        }
        else {
          uVar7 = F_005684e0(this_00 GEN_EDX_ARG,0);
          sVar3 = 0;
          if (uVar7 != 0) {
            uVar5 = F_0042a990((int)this_00 + 0x9c GEN_EDX_ARG);
            fVar16 = REFG(float, 0x10a0da0);
            if ((*((byte *)GEN_TOP((uVar7 + 0x148))) & 2) != 0) {
              iVar4 = *((int *)GEN_TOP((uVar7 + 0x13c)));
              (*(int *)(gen_frame + 0x28)) = iVar4;
              if (uVar5 == 0) {
                fVar16 = 0.0;
              }
              else {
                piVar9 = ((int *)GEN_TOP((iVar4 + 0x144)));
                ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x144))) + 0x24))))(piVar9,uVar7,uVar5);
                *((undefined1 *)GEN_TOP((iVar4 + 0x2a8))) = 0;
                *((undefined4 *)GEN_TOP((iVar4 + 0x1f8))) = 0;
                *((undefined4 *)GEN_TOP((iVar4 + 0x1fc))) = (*(undefined4 *)(gen_frame + 0x10));
                if ((((*((byte *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x14c))) + 0x148))) & 2) != 0) &&
                    (bVar2 = *((byte *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x150))) + 0x6e))), (bVar2 & 1) != 0)) &&
                   ((bVar2 & 2) != 0)) {
                  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 4))))(piVar9 GEN_EDX_ARG);
                  F_005662b0(piVar9 GEN_EDX_ARG,uVar5);
                  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 8))))(piVar9 GEN_EDX_ARG);
                }
                fVar16 = *((float *)GEN_TOP(((*(int *)(gen_frame + 0x28)) + 0x288)));
                (*(float *)(gen_frame + 0xc)) = fVar16;
                (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x28)) + 0x284)));
              }
            }
            puVar10 = ((undefined4 *)GEN_TOP((uVar7 + 0xa8)));
            puVar11 = ((undefined4 *)GEN_TOP((uVar7 + 100)));
            for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 - 1) {
              *puVar11 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar11 = puVar11 + 1;
            }
            sVar3 = (short)(int)fVar16;
          }
        }
        iVar4 = 3;
        sVar3 = (short)(*(uint *)(gen_frame + 0x34)) +
                (*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x20)) + 0xbc))) - *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x20)) + 0xb8)))) + sVar3;
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x34)) + 0)) = sVar3;
        (*(uint *)(gen_frame + 0x34)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x34)) + 2)),sVar3);
        puVar12 = ((uint *)(gen_frame + 0x50)) + 3;
        do {
          puVar13 = puVar12 - 2;
          if ((puVar12[-3] >> 5 & 1) != 0) {
            puVar10 = ((undefined4 *)GEN_TOP(*puVar13));
            if (puVar10 != ((undefined4 *)GEN_TOP(0x0))) {
              uVar7 = puVar12[-3] & 0xf;
              if (uVar7 == 9) {
                F_00488040(puVar10 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),*puVar10,puVar10[1]);
                F_00488dc0(puVar10 GEN_EDX_ARG);
                F_00406ad0(puVar10);
              }
              else if ((uVar7 == 6) || (uVar7 == 7)) {
                F_00406ad0(puVar10);
                *puVar13 = 0;
              }
            }
            *puVar13 = 0;
          }
          iVar4 = iVar4 - 1;
          puVar12[-3] = 0;
          puVar12 = puVar13;
        } while (-1 < iVar4);
        (*(byte * PTR32 *)(gen_frame + 0x2c)) = (*(byte * PTR32 *)(gen_frame + 0x2c)) + 8;
        (*(int * PTR32 *)(gen_frame + 0x30)) = (*(int * PTR32 *)(gen_frame + 0x30)) + 1;
        uVar7 = (*(uint *)(gen_frame + 0x24)) - 1;
        (*(uint *)(gen_frame + 0x24)) = uVar7;
        this = (*(undefined * PTR32 *)(gen_frame + 0x20));
      } while (uVar7 != 0);
    }
    if (param_1 < 0x18) {
      piVar9 = ((int *)GEN_TOP(((int)this + param_1 * 4 + 0x23c)));
      iVar4 = 0x18 - param_1;
      do {
        iVar1 = *piVar9;
        if (iVar1 != 0) {
          *((uint *)GEN_TOP((iVar1 + 0x84))) = *((uint *)GEN_TOP((iVar1 + 0x84))) & 0xffefffff;
          *((uint *)GEN_TOP((iVar1 + 0x88))) = *((uint *)GEN_TOP((iVar1 + 0x88))) | 0x80;
        }
        piVar9 = piVar9 + 1;
        iVar4 = iVar4 - 1;
      } while (iVar4 != 0);
    }
    uVar7 = *((uint *)GEN_TOP(((int)this + 0x114)));
    if (uVar7 != 0) {
      *((short *)GEN_TOP((uVar7 + 0x7e))) =
           ((*((short *)GEN_TOP(((int)this + 0xbe))) - *((short *)GEN_TOP(((int)this + 0xbc)))) -
           *((short *)GEN_TOP(((int)this + 0xba)))) + (short)(*(uint *)(gen_frame + 0x34));
    }
  }
  return uVar7;
}

/* ref: Component::GUI2::AtkComponentMap::vf5 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005a4e60(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x5a4e60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  int * piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  bool bVar6;
  int * piVar7;
  uint uVar8;
  float10 fVar9;
  float fVar10;
  
  F_005a1fa0((int)param_1 + 4 GEN_EDX_FWD,param_2);
  if (*((char *)GEN_TOP(((int)param_1 + 0xb8))) != '\0') {
    bVar6 = true;
    uVar8 = 0;
    piVar7 = ((int *)GEN_TOP(((int)param_1 + 0xac)));
    do {
      iVar5 = *piVar7;
      if (((iVar5 == 0) || (*((int *)GEN_TOP((iVar5 + 8))) != 0)) ||
         (iVar5 = *((int *)GEN_TOP((iVar5 + 0xc))), iVar5 == 0)) {
LAB_005a4ec6: ;
        F_0056f0a0(param_1 GEN_EDX_ARG,uVar8);
      }
      else {
        piVar1 = ((int *)GEN_TOP((iVar5 + 0x88)));
        iVar2 = _InterlockedExchangeAdd((volatile gen_long *)(piVar1), 0);
        if (iVar2 == 2) {
          LOCK();
          *((undefined4 *)GEN_TOP((iVar5 + 0x8c))) = *((undefined4 *)GEN_TOP((iVar5 + 0x8c)));
          UNLOCK();
          goto LAB_005a4ec6;
        }
        bVar6 = false;
      }
      uVar8 = uVar8 + 1;
      piVar7 = piVar7 + 1;
    } while (uVar8 < 3);
    if (bVar6) {
      iVar5 = *((int *)GEN_TOP(((int)param_1 + 0x88)));
      if (iVar5 != 0) {
        *((uint *)GEN_TOP((iVar5 + 0x84))) = *((uint *)GEN_TOP((iVar5 + 0x84))) | 0x100000;
        *((uint *)GEN_TOP((iVar5 + 0x88))) = *((uint *)GEN_TOP((iVar5 + 0x88))) & 0xffffff7f;
      }
      *((undefined1 *)GEN_TOP(((int)param_1 + 0xb8))) = 0;
    }
  }
  fVar10 = REFG(float, 0x1087f04);
  if (*((char *)GEN_TOP(((int)param_1 + 0xba))) == '\0') goto LAB_005a4fca;
  fVar3 = *((float *)GEN_TOP(((int)param_1 + 0x270)));
  fVar4 = ((float)GEN_TOF(((float10)param_2 + (float10)*((float *)GEN_TOP(((int)param_1 + 0x26c))))));
  *((float *)GEN_TOP(((int)param_1 + 0x26c))) = fVar4;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0xbb))) = 1;
  if (GEN_ISNAN(fVar3) || 0.0 < fVar3) {
    if (!((float10)fVar4 < (float10)fVar3)) goto LAB_005a4f94;
    fVar9 = ((float10)GEN_TOD(fsin(
                          (float10)((float)GEN_TOF((((float10)fVar4 * (float10)*(double *)&REFG(undefined, 0x1094620)) /
                                          (float10)fVar3))))));
    param_2 = (float)fVar9;
    fVar10 = REFG(float, 0x1087f04);
  }
  else {
LAB_005a4f94: ;
    param_2 = fVar10;
  }
  *((float *)GEN_TOP(((int)param_1 + 0x268))) = (float)((float10)1 - (float10)param_2);
  if ((float10)fVar3 <= (float10)fVar4) {
    *((undefined4 *)GEN_TOP(((int)param_1 + 0x264))) = 0;
    *((float *)GEN_TOP(((int)param_1 + 0x268))) = fVar10;
    *((undefined1 *)GEN_TOP(((int)param_1 + 0xba))) = 0;
  }
LAB_005a4fca: ;
  F_00575b20(param_1 GEN_EDX_ARG);
  return;
}

/* ref: FUN_005a4fe0 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_005a4fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5a4fe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  undefined4 uVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  byte * pbVar5;
  byte bVar6;
  uint * puVar7;
  uint * puVar8;
  
  uVar1 = *(*(undefined4 * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x0)) = 0;
  ((uint *)(gen_frame + 0x8))[0] = 3;
  ((uint *)(gen_frame + 0x8))[1] = (*(uint *)&gen_args[3]) & 0xff;
  uVar4 = F_00a34220(uVar1 GEN_EDX_ARG);
  if ((*((uint *)GEN_TOP((uVar4 + 0xc))) & (*(uint *)&gen_args[1])) != 0) {
    if (((*(uint *)(gen_frame + 0x0)) >> 5 & 1) != 0) {
      F_005a0260(&(*(uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
    piVar2 = ((int *)GEN_TOP((*(undefined4 * PTR32 *)&gen_args[0])[3]));
    (*(int *)(gen_frame + 0x4)) = ((*(uint *)&gen_args[2]) & 0xff) + 0x100;
    uVar1 = (*(undefined4 * PTR32 *)&gen_args[0])[4];
    (*(uint *)(gen_frame + 0x0)) = 3;
    pbVar5 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,((uint *)(gen_frame + 0x8)) + 3,&(*(uint *)(gen_frame + 0x0)),2,uVar1)));
    if ((*pbVar5 & 0xf) == 0) {
      bVar6 = 0;
    }
    else {
      bVar6 = pbVar5[4];
    }
    if ((((uint *)(gen_frame + 0x8))[3] >> 5 & 1) != 0) {
      F_005a0260(((uint *)(gen_frame + 0x8)) + 3 GEN_EDX_ARG);
    }
    if (bVar6 != 0) {
      (*(undefined4 * PTR32 *)&gen_args[0])[3] = 0;
    }
    (*(uint *)&gen_args[2]) = 1;
    puVar8 = ((uint *)(gen_frame + 0x8)) + 3;
    do {
      puVar7 = puVar8 - 2;
      if ((puVar8[-3] >> 5 & 1) != 0) {
        puVar3 = ((undefined4 *)GEN_TOP(*puVar7));
        if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
          uVar4 = puVar8[-3] & 0xf;
          if (uVar4 == 9) {
            F_00488040(puVar3 GEN_EDX_ARG,&(*(uint *)&gen_args[3]),*puVar3,puVar3[1]);
            F_00488dc0(puVar3 GEN_EDX_ARG);
            F_00406ad0(puVar3);
          }
          else if ((uVar4 == 6) || (uVar4 == 7)) {
            F_00406ad0(puVar3);
            *puVar7 = 0;
          }
        }
        *puVar7 = 0;
      }
      (*(uint *)&gen_args[2]) = (*(uint *)&gen_args[2]) - 1;
      puVar8[-3] = 0;
      puVar8 = puVar7;
    } while (-1 < (int)(*(uint *)&gen_args[2]));
    return 1;
  }
  if ((*((uint *)GEN_TOP((uVar4 + 0x18))) & (*(uint *)&gen_args[1])) != 0) {
    if (((*(uint *)(gen_frame + 0x0)) >> 5 & 1) != 0) {
      F_005a0260(&(*(uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
    piVar2 = ((int *)GEN_TOP((*(undefined4 * PTR32 *)&gen_args[0])[3]));
    (*(int *)(gen_frame + 0x4)) = ((*(uint *)&gen_args[2]) & 0xff) + 0x200;
    uVar1 = (*(undefined4 * PTR32 *)&gen_args[0])[4];
    (*(uint *)(gen_frame + 0x0)) = 3;
    pbVar5 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,((uint *)(gen_frame + 0x8)) + 3,&(*(uint *)(gen_frame + 0x0)),2,uVar1)));
    if ((*pbVar5 & 0xf) == 0) {
      bVar6 = 0;
    }
    else {
      bVar6 = pbVar5[4];
    }
    if ((((uint *)(gen_frame + 0x8))[3] >> 5 & 1) != 0) {
      F_005a0260(((uint *)(gen_frame + 0x8)) + 3 GEN_EDX_ARG);
    }
    if (bVar6 != 0) {
      (*(undefined4 * PTR32 *)&gen_args[0])[3] = 0;
    }
    (*(uint *)&gen_args[2]) = 1;
    puVar8 = ((uint *)(gen_frame + 0x8)) + 3;
    do {
      puVar7 = puVar8 - 2;
      if ((puVar8[-3] >> 5 & 1) != 0) {
        puVar3 = ((undefined4 *)GEN_TOP(*puVar7));
        if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
          uVar4 = puVar8[-3] & 0xf;
          if (uVar4 == 9) {
            F_00488040(puVar3 GEN_EDX_ARG,&(*(uint *)&gen_args[3]),*puVar3,puVar3[1]);
            F_00488dc0(puVar3 GEN_EDX_ARG);
            F_00406ad0(puVar3);
          }
          else if ((uVar4 == 6) || (uVar4 == 7)) {
            F_00406ad0(puVar3);
            *puVar7 = 0;
          }
        }
        *puVar7 = 0;
      }
      (*(uint *)&gen_args[2]) = (*(uint *)&gen_args[2]) - 1;
      puVar8[-3] = 0;
      puVar8 = puVar7;
    } while (-1 < (int)(*(uint *)&gen_args[2]));
    return 1;
  }
  (*(uint *)&gen_args[2]) = 1;
  puVar8 = ((uint *)(gen_frame + 0x8)) + 3;
  do {
    puVar7 = puVar8 - 2;
    if ((puVar8[-3] >> 5 & 1) != 0) {
      puVar3 = ((undefined4 *)GEN_TOP(*puVar7));
      if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
        uVar4 = puVar8[-3] & 0xf;
        if (uVar4 == 9) {
          F_00488040(puVar3 GEN_EDX_ARG,&(*(uint *)&gen_args[3]),*puVar3,puVar3[1]);
          F_00488dc0(puVar3 GEN_EDX_ARG);
          F_00406ad0(puVar3);
        }
        else if ((uVar4 == 6) || (uVar4 == 7)) {
          F_00406ad0(puVar3);
          *puVar7 = 0;
        }
      }
      *puVar7 = 0;
    }
    (*(uint *)&gen_args[2]) = (*(uint *)&gen_args[2]) - 1;
    puVar8[-3] = 0;
    puVar8 = puVar7;
  } while (-1 < (int)(*(uint *)&gen_args[2]));
  return 0;
}

/* ref: FUN_005a5250 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005a5250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x5a5250u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  uint * puVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x22210)));
  if ((param_2 < (uint)(*((int *)GEN_TOP(((int)this + 0x22214))) - iVar1 >> 2)) &&
     (*((int *)GEN_TOP((iVar1 + param_2 * 4))) != 0)) {
    puVar2 = ((uint *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((iVar1 + param_2 * 4))))((int)this - 4,((uint *)(gen_frame + 0x0)),param_4,param_3)));
    *param_1 = *puVar2;
    if ((*puVar2 & 0xf) == 9) {
      param_1[1] = 0;
    }
    else {
      *param_1 = *puVar2 & 0xf;
      param_1[1] = puVar2[1];
    }
    if ((*puVar2 >> 5 & 1) != 0) {
      F_00594f30(param_1 GEN_EDX_ARG,puVar2);
    }
    if ((((uint *)(gen_frame + 0x0))[0] >> 5 & 1) != 0) {
      F_005a0260(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
    return (uint)param_1;
  }
  if (*((int *)GEN_TOP(((int)this + 0x22220))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x22220))) + 4))))
              (*((int * PTR32 *)GEN_TOP(((int)this + 0x22220))) GEN_EDX_ARG,param_1,param_2,param_4,param_3);
    return (uint)param_1;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_005a5320 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005a5320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5a5320u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  code * pcVar1;
  
  if (-1 < param_2) {
    (*(int *)(gen_frame + 0x4)) = param_2;
    pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 4)));
    (*(uint *)(gen_frame + 0x0)) = 3;
    (*pcVar1)(this,param_1,0x17,1,&(*(uint *)(gen_frame + 0x0)));
    if (((*(uint *)(gen_frame + 0x0)) >> 5 & 1) != 0) {
      F_005a0260(&(*(uint *)(gen_frame + 0x0)) GEN_EDX_FWD);
    }
    return (uint)param_1;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_005a5380 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005a5380(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x5a5380u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  *((undefined1 *)GEN_TOP((in_ecx + 0x22d2c))) = 1;
  *param_2 = 0;
  return (uint)param_2;
}

/* ref: FUN_005a53a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005a53a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x5a53a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_005a53b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005a53b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5a53b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  
  if (0 < (*(int *)&gen_args[2])) {
    if ((*(*(byte * PTR32 *)&gen_args[1]) & 0xf) == 0) {
      (*(int *)&gen_args[2]) = 0;
    }
    else {
      (*(int *)&gen_args[2]) = *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[1]) + 4)));
    }
    if ((*(int *)&gen_args[2]) != 0) {
      F_005c6630(((undefined *)GEN_TOP(((int)this + 0x22228))) GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)),&(*(int *)&gen_args[2]));
      (*(int *)&gen_args[2]) = 0;
      F_005c7460((*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),&(*(int *)&gen_args[2]),(*(undefined4 * PTR32 *)&gen_args[0]));
      F_005c9de0(((undefined *)GEN_TOP(((int)this + 0x22228))) GEN_EDX_ARG,&(*(int *)&gen_args[2]),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)));
    }
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_005a5430 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005a5430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5a5430u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * piVar1;
  uint * this_00;
  byte * pbVar2;
  byte bVar3;
  
  pbVar2 = (*(byte * PTR32 *)&gen_args[1]);
  this_00 = (*(uint * PTR32 *)&gen_args[0]);
  *(*(uint * PTR32 *)&gen_args[0]) = 2;
  *((undefined1 *)GEN_TOP(((*(uint * PTR32 *)&gen_args[0]) + 1))) = 0;
  if (0 < (*(int *)&gen_args[2])) {
    if ((*(*(byte * PTR32 *)&gen_args[1]) & 0xf) == 0) {
      (*(uint * PTR32 *)&gen_args[0]) = ((uint *)GEN_TOP(0x0));
    }
    else {
      (*(uint * PTR32 *)&gen_args[0]) = *((uint * PTR32 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[1]) + 4)));
    }
    F_005cdc90(((undefined *)GEN_TOP(((int)this + 0x22228))) GEN_EDX_FWD,&(*(byte * PTR32 *)&gen_args[1]),&(*(uint * PTR32 *)&gen_args[0]));
    if (((*(byte * PTR32 *)&gen_args[1]) != *((byte * PTR32 *)GEN_TOP(((int)this + 0x2222c)))) &&
       (piVar1 = *((int * PTR32 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[1]) + 0x10))), piVar1 != ((int *)GEN_TOP(0x0)))) {
      pbVar2 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))
                                 (piVar1 GEN_EDX_ARG,((uint *)(gen_frame + 0x0)),pbVar2 + 8,(*(int *)&gen_args[2]) - 1,
                                  *((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[1]) + 0x14))))));
      if ((*pbVar2 & 0xf) == 0) {
        bVar3 = 0;
      }
      else {
        bVar3 = pbVar2[4];
      }
      if ((((uint *)(gen_frame + 0x0))[0] >> 5 & 1) != 0) {
        F_005a0260(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
      if ((*this_00 >> 5 & 1) != 0) {
        F_005a0260(this_00 GEN_EDX_ARG);
      }
      *this_00 = 2;
      *(byte *)(this_00 + 1) = bVar3;
    }
    return (uint)this_00;
  }
  return (uint)(*(uint * PTR32 *)&gen_args[0]);
}

/* ref: FUN_005a54f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005a54f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5a54f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int * piVar1;
  uint * this_00;
  byte * pbVar2;
  byte bVar3;
  
  pbVar2 = (*(byte * PTR32 *)&gen_args[1]);
  this_00 = (*(uint * PTR32 *)&gen_args[0]);
  *(*(uint * PTR32 *)&gen_args[0]) = 2;
  *((undefined1 *)GEN_TOP(((*(uint * PTR32 *)&gen_args[0]) + 1))) = 0;
  if (0 < (*(int *)&gen_args[2])) {
    if ((*(*(byte * PTR32 *)&gen_args[1]) & 0xf) == 0) {
      (*(uint * PTR32 *)&gen_args[0]) = ((uint *)GEN_TOP(0x0));
    }
    else {
      (*(uint * PTR32 *)&gen_args[0]) = *((uint * PTR32 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[1]) + 4)));
    }
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(((int)this + 0x22228)));
    F_005cdc90(((undefined *)GEN_TOP(((int)this + 0x22228))) GEN_EDX_FWD,&(*(byte * PTR32 *)&gen_args[1]),&(*(uint * PTR32 *)&gen_args[0]));
    if (((*(byte * PTR32 *)&gen_args[1]) != *((byte * PTR32 *)GEN_TOP(((int)this + 0x2222c)))) &&
       (piVar1 = *((int * PTR32 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[1]) + 0x10))), piVar1 != ((int *)GEN_TOP(0x0)))) {
      pbVar2 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))
                                 (piVar1 GEN_EDX_ARG,((uint *)(gen_frame + 0x0)),pbVar2 + 8,(*(int *)&gen_args[2]) - 1,
                                  *((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[1]) + 0x14))))));
      if ((*pbVar2 & 0xf) == 0) {
        bVar3 = 0;
      }
      else {
        bVar3 = pbVar2[4];
      }
      if ((((uint *)(gen_frame + 0x0))[0] >> 5 & 1) != 0) {
        F_005a0260(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
      F_005cdc30((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,&(*(uint * PTR32 *)&gen_args[0]));
      if ((*this_00 >> 5 & 1) != 0) {
        F_005a0260(this_00 GEN_EDX_ARG);
      }
      *this_00 = 2;
      *(byte *)(this_00 + 1) = bVar3;
    }
    return (uint)this_00;
  }
  return (uint)(*(uint * PTR32 *)&gen_args[0]);
}

/* ref: FUN_005a55c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005a55c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5a55c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  int iVar1;
  int iVar2;
  
  if ((*(int *)&gen_args[2]) == 4) {
    if ((*(*(byte * PTR32 *)&gen_args[1]) & 0xf) == 0) {
      (*(undefined1 *)((char *)&(*(int *)&gen_args[2]) + 0)) = 0;
    }
    else {
      (*(undefined1 *)((char *)&(*(int *)&gen_args[2]) + 0)) = (undefined1)*((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[1]) + 4)));
    }
    if (((*(byte * PTR32 *)&gen_args[1])[0x10] & 0xf) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[1]) + 0x14)));
    }
    if (((*(byte * PTR32 *)&gen_args[1])[8] & 0xf) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[1]) + 0xc)));
    }
    if (iVar1 == 0) {
      iVar1 = *((int *)GEN_TOP(((int)this + 0x20df8)));
    }
    else if (iVar1 == 1) {
      iVar1 = *((int *)GEN_TOP(((int)this + 0x20dec)));
    }
    else {
      if (iVar1 != 2) goto LAB_005a5638;
      iVar1 = *((int *)GEN_TOP(((int)this + 0x20e04)));
    }
    if (*((int *)GEN_TOP((iVar1 + iVar2 * 4))) != 0) {
      iVar2 = *((int *)GEN_TOP((iVar1 + iVar2 * 4)));
      *((undefined1 *)GEN_TOP((*((char *)GEN_TOP((iVar2 + 0x1c))) + 0xc + iVar2))) = (undefined1)(*(int *)&gen_args[2]);
      *((undefined1 *)GEN_TOP((iVar2 + 0x1d))) = 2;
      *((char *)GEN_TOP((iVar2 + 0x1c))) = *((char *)GEN_TOP((iVar2 + 0x1c))) + '\x01';
    }
  }
LAB_005a5638: ;
  *(*(undefined4 * PTR32 *)&gen_args[0]) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_005a5650 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005a5650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x5a5650u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int * piVar1;
  int iVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  
  if (param_3 != 4) goto LAB_005a5714;
  if ((*param_2 & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined1)*(undefined4 *)(param_2 + 4);
  }
  if ((param_2[0x10] & 0xf) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(param_2 + 0x14);
  }
  if ((param_2[8] & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 0xc);
  }
  if (iVar2 == 0) {
    if ((param_2[0x18] & 0xf) == 0) {
      bVar4 = 0;
    }
    else {
      bVar4 = param_2[0x1c];
    }
    if ((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20df8))) + iVar5 * 4))) == 0) ||
       (F_005569f0(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20df8))) + iVar5 * 4))) GEN_EDX_FWD,uVar3), bVar4 == 0))
    goto LAB_005a5714;
    iVar2 = *((int *)GEN_TOP(((int)this + 0x20df8)));
  }
  else {
    if (iVar2 == 1) {
      if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20dec))) + iVar5 * 4))) != 0) {
        F_005569f0(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20dec))) + iVar5 * 4))) GEN_EDX_ARG,uVar3);
        *param_1 = 0;
        return (uint)param_1;
      }
      goto LAB_005a5714;
    }
    if ((iVar2 != 2) || (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20e04))) + iVar5 * 4))) == 0))
    goto LAB_005a5714;
    F_005569f0(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20e04))) + iVar5 * 4))) GEN_EDX_ARG,uVar3);
    iVar2 = *((int *)GEN_TOP(((int)this + 0x20e04)));
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((iVar2 + iVar5 * 4)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
LAB_005a5714: ;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_005a5730 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_005a5730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x5a5730u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_FRAME_DECL_GS(0x70, 0, 4);
  undefined1 uVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c));
  if ((*param_2 & 0xf) == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = param_2[4];
    if (bVar2 != 0) goto LAB_005a5771;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2223c))) + 0x34))))((int)this + 0x2223c,2);
LAB_005a5771: ;
  *((byte *)GEN_TOP(((int)this + 0x20db2))) = bVar2;
  if (bVar2 != 0) {
    if (0xc < param_3) {
      uVar8 = 0;
      if ((param_2[0x18] & 0xf) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)(param_2 + 0x1c);
      }
      if ((param_2[0x10] & 0xf) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (undefined1)*(undefined4 *)(param_2 + 0x14);
      }
      if ((param_2[8] & 0xf) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = (undefined1)*(undefined4 *)(param_2 + 0xc);
      }
      *((undefined1 *)GEN_TOP(((int)this + 0x22a8c))) = uVar1;
      *((undefined1 *)GEN_TOP(((int)this + 0x22a8d))) = uVar6;
      *((undefined4 *)GEN_TOP(((int)this + 0x22a84))) = uVar7;
      if ((param_2[0x28] & 0xf) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)(param_2 + 0x2c);
      }
      if ((param_2[0x20] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(param_2 + 0x24);
      }
      F_0055bd90(((undefined *)GEN_TOP(((int)this + 0x2224c))) GEN_EDX_ARG,uVar4,uVar7);
      if ((param_2[0x38] & 0xf) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)(param_2 + 0x3c);
      }
      F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,uVar7,REFG(undefined4, 0x108cc50));
      if ((param_2[0x58] & 0xf) == 0) {
        (*(undefined1 *)(gen_frame + 0x10)) = 0;
      }
      else {
        (*(undefined1 *)(gen_frame + 0x10)) = (undefined1)*(undefined4 *)(param_2 + 0x5c);
      }
      if ((param_2[0x50] & 0xf) == 0) {
        (*(undefined2 *)(gen_frame + 0x0)) = 0;
      }
      else {
        (*(undefined2 *)(gen_frame + 0x0)) = (undefined2)*(undefined4 *)(param_2 + 0x54);
      }
      if ((param_2[0x48] & 0xf) == 0) {
        (*(undefined4 *)(gen_frame + 0x4)) = 0;
      }
      else {
        (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(param_2 + 0x4c);
      }
      if ((param_2[0x40] & 0xf) != 0) {
        uVar8 = *(undefined4 *)(param_2 + 0x44);
      }
      if ((param_2[0x30] & 0xf) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = (undefined2)*(undefined4 *)(param_2 + 0x34);
      }
      *((undefined2 *)GEN_TOP(((int)this + 0x22a24))) = uVar3;
      F_0042ccf0(((undefined *)GEN_TOP(((int)this + 0x22a28))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
      *((undefined2 *)GEN_TOP(((int)this + 0x22a88))) = (*(undefined2 *)(gen_frame + 0x0));
      *((undefined4 *)GEN_TOP(((int)this + 0x22a7c))) = uVar8;
      *((undefined4 *)GEN_TOP(((int)this + 0x22a80))) = (*(undefined4 *)(gen_frame + 0x4));
      *((undefined1 *)GEN_TOP(((int)this + 0x22a8f))) = (*(undefined1 *)(gen_frame + 0x10));
      F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
      if ((param_2[0x60] & 0xf) == 0) {
        bVar2 = 0;
      }
      else {
        bVar2 = param_2[100];
      }
      *((byte *)GEN_TOP(((int)this + 0x22a95))) = bVar2;
    }
    if ((*((byte *)GEN_TOP(((int)this + 0x22a24))) >> 5 & 1) == 0) {
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG);
      *((char *)GEN_TOP(((int)this + 0x22be9))) = (char)uVar5;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2223c))) + 0x20))))(((int *)GEN_TOP(((int)this + 0x2223c))) GEN_EDX_ARG,1);
    }
    else {
      *((undefined1 *)GEN_TOP(((int)this + 0x22be9))) = 4;
    }
    uVar5 = F_0042a990(&REFG(undefined * PTR32, 0x12fd328) GEN_EDX_ARG);
    param_1[1] = uVar5;
    *param_1 = 6;
    return (uint)param_1;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2223c))) + 0x20))))((int)this + 0x2223c,0);
  if (*((char *)GEN_TOP(((int)this + 0x22be9))) != '\x04') {
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2223c))) + 0x24))))
              ((int)this + 0x2223c,(int)*((char *)GEN_TOP(((int)this + 0x22be9))));
    *((undefined1 *)GEN_TOP(((int)this + 0x22be9))) = 4;
  }
  if (*((short *)GEN_TOP(((int)this + 0x22a14))) == 0) {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x22258))) + 0x3c))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x22258))) GEN_EDX_ARG);
    if ((char)uVar5 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x22258))) + 0x34))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x22258))) GEN_EDX_ARG,0);
    }
  }
  else {
    F_00572a00((int)this + 0x2224c GEN_EDX_ARG,1);
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,"",REFG(undefined4, 0x108cc50));
  uVar5 = F_0056a440(((undefined *)GEN_TOP(((int)this + 0x2224c))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
  uVar5 = F_00567510(this GEN_EDX_ARG,uVar5);
  uVar5 = F_0042a990(uVar5 GEN_EDX_ARG);
  *param_1 = 6;
  param_1[1] = uVar5;
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: FUN_005a59e0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_005a59e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x5a59e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0xb8, 8, 4);
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 * this_00;
  undefined4 uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xb0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb4));
  if (((byte)*(undefined4 *)param_2 & 0xf) == 6) {
    if ((param_2[8] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0xc);
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_FWD,uVar1,REFG(undefined4, 0x108cc50));
    if ((*param_2 & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 4);
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,uVar1,REFG(undefined4, 0x108cc50));
    if ((param_2[0x30] & 0xf) == 0) {
      (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x4)) + 0)) = 0;
    }
    else {
      (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x4)) + 0)) = param_2[0x34];
    }
    if ((param_2[0x28] & 0xf) == 0) {
      (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) & 0xffffff00;
    }
    else {
      (*(uint *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x0)), 1, 3),param_2[0x2c]);
    }
    if ((param_2[0x20] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x24);
    }
    if ((param_2[0x18] & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 0x1c);
    }
    if ((param_2[0x10] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x14);
    }
    F_00593de0((int)this + 0x2224c GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x5c)),uVar3,uVar2,uVar1,(*(uint *)(gen_frame + 0x0)),(byte)(*(int *)(gen_frame + 0x4)));
    F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    this_00 = ((undefined1 *)(gen_frame + 0x5c));
  }
  else {
    if ((param_2[8] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0xc);
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,uVar1,REFG(undefined4, 0x108cc50));
    F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,"",REFG(undefined4, 0x108cc50));
    if ((param_2[0x30] & 0xf) == 0) {
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x0)) + 0)) = 0;
    }
    else {
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x0)) + 0)) = param_2[0x34];
    }
    if ((param_2[0x28] & 0xf) == 0) {
      (*(int *)(gen_frame + 0x4)) = (uint)GEN_PIECE(&(*(int *)(gen_frame + 0x4)), 1, 3) << 8;
    }
    else {
      (*(int *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x4)), 1, 3),param_2[0x2c]);
    }
    if ((param_2[0x20] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x24);
    }
    if ((param_2[0x18] & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 0x1c);
    }
    if ((param_2[0x10] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x14);
    }
    F_00593de0((int)this + 0x2224c GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)),((undefined1 *)(gen_frame + 0x8)),uVar3,uVar2,uVar1,(*(int *)(gen_frame + 0x4)),(byte)(*(uint *)(gen_frame + 0x0)));
    F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
    this_00 = ((undefined1 *)(gen_frame + 0x8));
  }
  F_0042c880(this_00 GEN_EDX_ARG);
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_005a5bc0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_005a5bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x5a5bc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  undefined4 uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  uVar1 = *param_2 & 0xf;
  if (uVar1 == 6) {
    uVar2 = 10;
    uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_2[1],REFG(undefined4, 0x108cc50));
    uVar1 = F_00a4cf70(uVar1,uVar2);
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    if (*((short *)GEN_TOP(((int)this + 0x22a14))) == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x22258))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x22258))) GEN_EDX_ARG,uVar1);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x22258))) + 0x34))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x22258))) GEN_EDX_ARG,0);
      goto LAB_005a5c8a;
    }
  }
  else {
    if (uVar1 != 3) {
      if (uVar1 == 5) {
        F_0057ee80(((undefined *)GEN_TOP(((int)this + 0x2224c))) GEN_EDX_ARG,(int)gen_bits2f(param_2[1]));
      }
      goto LAB_005a5c8a;
    }
    uVar1 = param_2[1];
    if (*((short *)GEN_TOP(((int)this + 0x22a14))) == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x22258))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x22258))) GEN_EDX_ARG,uVar1);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x22258))) + 0x34))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x22258))) GEN_EDX_ARG,0);
      goto LAB_005a5c8a;
    }
  }
  F_00578b40(((undefined *)GEN_TOP(((int)this + 0x2224c))) GEN_EDX_ARG,uVar1);
LAB_005a5c8a: ;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_005a5cb0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_005a5cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x5a5cb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  if (((byte)*param_2 & 0xf) == 6) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_2[1],REFG(undefined4, 0x108cc50));
    uVar1 = F_0055c120(((undefined1 *)(gen_frame + 0x0)));
    *param_1 = 3;
    param_1[1] = uVar1;
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    return (uint)param_1;
  }
  *param_1 = 3;
  param_1[1] = 0;
  return (uint)param_1;
}

/* ref: FUN_005a5d40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005a5d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x5a5d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x20e98))) == 0) {
LAB_005a5da9: ;
    *param_1 = 0;
    return (uint)param_1;
  }
  if ((*param_2 & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 4);
    if (0x10 < uVar1) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe8))))(this GEN_EDX_FWD,0x11);
      goto LAB_005a5da9;
    }
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x20e98))) + 0x10))))
            (*((int * PTR32 *)GEN_TOP(((int)this + 0x20e98))) GEN_EDX_ARG,(int)(char)(&REFG(undefined1, 0x109ce6c))[(int)(uVar1)]);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe8))))(this GEN_EDX_ARG,(uint)(byte)(&REFG(undefined1, 0x109ce6c))[(int)(uVar1)]);
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_005a5dc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005a5dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x5a5dc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  undefined1 uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((0 < param_3) && (uVar1 = 0, ((byte)*param_2 & 0xf) == 6)) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe4))))(this GEN_EDX_FWD,param_2[1]);
    uVar1 = (undefined1)uVar2;
  }
  *(undefined1 *)(param_1 + 1) = uVar1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_005a5e00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005a5e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x5a5e00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  if ((0 < param_3) && (((byte)*param_2 & 0xf) == 6)) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe0))))(this GEN_EDX_FWD,param_2[1]);
    if (uVar1 != 0) {
      (*(uint *)(gen_frame + 0x0)) = 6;
      (*(uint *)(gen_frame + 0x4)) = uVar1;
      F_00560a60(param_1 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0)));
      if (((*(uint *)(gen_frame + 0x0)) >> 5 & 1) != 0) {
        F_005a0260(&(*(uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
      return (uint)param_1;
    }
  }
  *param_1 = 6;
  param_1[1] = "";
  return (uint)param_1;
}

/* ref: FUN_005a5e80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005a5e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x5a5e80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_005a5e90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005a5e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x5a5e90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined4 uVar1;
  int iVar2;
  
  if ((*param_2 & 0xf) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 4);
  }
  if ((param_2[8] & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0xc);
  }
  if (iVar2 == 3) {
    *((undefined4 *)GEN_TOP(((int)this + 0x22d10))) = uVar1;
    *param_1 = 0;
    return (uint)param_1;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x22d14))) = uVar1;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_005a5ee0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005a5ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5a5ee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  undefined * pvVar2;
  undefined4 * puVar3;
  
  uVar1 = F_00404270();
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    pvVar2 = ((undefined *)GEN_TOP(F_00406bd0(0x84,0,uVar1,0)));
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
    puVar3 = ((undefined4 *)GEN_TOP(F_00581150(pvVar2 GEN_EDX_ARG)));
    break;
  case 1: ;
    pvVar2 = ((undefined *)GEN_TOP(F_00406bd0(0x130,0,uVar1,0)));
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
    puVar3 = ((undefined4 *)GEN_TOP(F_005814a0(pvVar2 GEN_EDX_ARG)));
    break;
  case 2: ;
    pvVar2 = ((undefined *)GEN_TOP(F_00406bd0(0xc0,0,uVar1,0)));
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
    puVar3 = ((undefined4 *)GEN_TOP(F_0058a250(pvVar2 GEN_EDX_ARG)));
    break;
  case 3: ;
    pvVar2 = ((undefined *)GEN_TOP(F_00406bd0(0x150,0,uVar1,0)));
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
    puVar3 = ((undefined4 *)GEN_TOP(F_00581900(pvVar2 GEN_EDX_ARG)));
    break;
  case 4: ;
    pvVar2 = ((undefined *)GEN_TOP(F_00406bd0(0x138,0,uVar1,0)));
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
    puVar3 = ((undefined4 *)GEN_TOP(F_00581990(pvVar2 GEN_EDX_ARG)));
    break;
  case 5: ;
    pvVar2 = ((undefined *)GEN_TOP(F_00406bd0(0xf0,0,uVar1,0)));
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
    puVar3 = ((undefined4 *)GEN_TOP(F_00581230(pvVar2 GEN_EDX_ARG)));
    break;
  case 6: ;
    pvVar2 = ((undefined *)GEN_TOP(F_00406bd0(0xb0,0,uVar1,0)));
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
    puVar3 = ((undefined4 *)GEN_TOP(F_005813a0(pvVar2 GEN_EDX_ARG)));
    break;
  case 7: ;
    pvVar2 = ((undefined *)GEN_TOP(F_00406bd0(0x3bc,0,uVar1,0)));
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
    puVar3 = ((undefined4 *)GEN_TOP(F_005a3a80(pvVar2 GEN_EDX_ARG)));
    break;
  case 8: ;
    pvVar2 = ((undefined *)GEN_TOP(F_00406bd0(0x27c,0,uVar1,0)));
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
    puVar3 = ((undefined4 *)GEN_TOP(F_00582dd0(pvVar2 GEN_EDX_ARG)));
    break;
  case 9: ;
    pvVar2 = ((undefined *)GEN_TOP(F_00406bd0(300,0,uVar1,0)));
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
    puVar3 = ((undefined4 *)GEN_TOP(F_005819c0(pvVar2 GEN_EDX_ARG)));
    break;
  case 10: ;
    pvVar2 = ((undefined *)GEN_TOP(F_00406bd0(0x98,0,uVar1,0)));
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
    puVar3 = ((undefined4 *)GEN_TOP(F_00582260(pvVar2 GEN_EDX_ARG)));
    break;
  case 0xb: ;
    pvVar2 = ((undefined *)GEN_TOP(F_00406bd0(0x140,0,uVar1,0)));
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
    puVar3 = ((undefined4 *)GEN_TOP(F_00592620(pvVar2 GEN_EDX_ARG)));
    break;
  case 0xc: ;
    pvVar2 = ((undefined *)GEN_TOP(F_00406bd0(0x194,0,uVar1,0)));
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
    puVar3 = ((undefined4 *)GEN_TOP(F_00589c70(pvVar2 GEN_EDX_ARG)));
    break;
  case 0xd: ;
    pvVar2 = ((undefined *)GEN_TOP(F_00406bd0(0xd0,0,uVar1,0)));
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
    puVar3 = ((undefined4 *)GEN_TOP(F_00582140(pvVar2 GEN_EDX_ARG)));
    break;
  case 0xe: ;
    pvVar2 = ((undefined *)GEN_TOP(F_00406bd0(0x228,0,uVar1,0)));
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
    puVar3 = ((undefined4 *)GEN_TOP(F_00591190(pvVar2 GEN_EDX_ARG)));
    break;
  case 0xf: ;
    pvVar2 = ((undefined *)GEN_TOP(F_00406bd0(0xc0,0,uVar1,0)));
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
    puVar3 = ((undefined4 *)GEN_TOP(F_005811c0(pvVar2 GEN_EDX_ARG)));
    break;
  case 0x10: ;
    pvVar2 = ((undefined *)GEN_TOP(F_00406bd0(0xa4,0,uVar1,0)));
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
    puVar3 = ((undefined4 *)GEN_TOP(F_00582370(pvVar2 GEN_EDX_ARG)));
    break;
  case 0x11: ;
    pvVar2 = ((undefined *)GEN_TOP(F_00406bd0(0xac,0,uVar1,0)));
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
    puVar3 = ((undefined4 *)GEN_TOP(F_00582450(pvVar2 GEN_EDX_ARG)));
    break;
  case 0x12: ;
    pvVar2 = ((undefined *)GEN_TOP(F_00406bd0(0x9c,0,uVar1,0)));
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
    puVar3 = ((undefined4 *)GEN_TOP(F_005831b0(pvVar2 GEN_EDX_ARG)));
    break;
  case 0x13: ;
    pvVar2 = ((undefined *)GEN_TOP(F_00406bd0(0x94,0,uVar1,0)));
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
    puVar3 = ((undefined4 *)GEN_TOP(F_00583250(pvVar2 GEN_EDX_ARG)));
    break;
  case 0x14: ;
    pvVar2 = ((undefined *)GEN_TOP(F_00406bd0(0x29c,0,uVar1,0)));
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
    puVar3 = ((undefined4 *)GEN_TOP(F_00583400(pvVar2 GEN_EDX_ARG)));
    break;
  case 0x15: ;
    pvVar2 = ((undefined *)GEN_TOP(F_00406bd0(0x9c,0,uVar1,0)));
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
    puVar3 = ((undefined4 *)GEN_TOP(F_005835b0(pvVar2 GEN_EDX_ARG)));
    break;
  case 0x16: ;
    pvVar2 = ((undefined *)GEN_TOP(F_00406bd0(0x2f0,0,uVar1,0)));
    if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
    puVar3 = ((undefined4 *)GEN_TOP(F_00583630(pvVar2 GEN_EDX_ARG)));
    break;
  default: ;
    goto switchD_005a5ef8_default;
  }
  if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar1 = F_00a4b3a0(this GEN_EDX_ARG);
    if (uVar1 < 0x8000) {
      *(short *)(puVar3 + 0x19) = (short)uVar1;
      *((undefined4 * PTR32 *)GEN_TOP(((int)this + uVar1 * 4 + 0x14))) = puVar3;
      return (uint)puVar3;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
  }
switchD_005a5ef8_default: ;
  return 0;
}

/* ref: FUN_005a62e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005a62e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(short * param_3, unsigned int gen_a3), GEN_P(uint param_4, unsigned int gen_a4), GEN_P(uint param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8), GEN_P(undefined4 param_9, unsigned int gen_a9))
{
  GEN_ENTER(0x5a62e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(short * param_3 = (short *)(uintptr_t)gen_a3;)
  GEN_PIN(uint param_4 = (uint)gen_a4;)
  GEN_PIN(uint param_5 = (uint)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a9;)
  uint * puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined * this_00;
  int * piVar5;
  int * piVar6;
  uint uVar7;
  undefined4 * puVar8;
  int * piVar9;
  uint uVar10;
  int iVar11;
  int * piVar12;
  undefined4 uVar13;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_c;
  
  if ((*((byte *)GEN_TOP(((int)this + 0x5c))) & 1) == 0) {
    return 0xffffffff;
  }
  piVar5 = ((int *)GEN_TOP(F_00404270()));
  if (*((char *)GEN_TOP(((int)this + 0x18))) != '\x02') {
    *((undefined4 *)GEN_TOP(((int)this + 0x34))) = param_8;
  }
  iVar11 = *((int *)GEN_TOP((param_1 + 0x10))) + param_1;
  if (*((int *)GEN_TOP((iVar11 + 8))) == 0) {
    return 0xffffffff;
  }
  piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0xc))))(piVar5 GEN_EDX_ARG,0x10,0x10)));
  if (piVar6 == ((int *)GEN_TOP(0x0))) {
    return 0xfffffffd;
  }
  uVar7 = 0;
  *piVar6 = 0;
  piVar6[1] = 0;
  piVar6[2] = 0;
  piVar6[3] = 0;
  *((byte *)GEN_TOP(((int)this + 0x5c))) = *((byte *)GEN_TOP(((int)this + 0x5c))) | 4;
  *((undefined2 *)GEN_TOP(((int)this + 0x14))) = 1;
  *((int * PTR32 *)GEN_TOP(((int)this + 8))) = piVar6;
  piVar12 = ((int *)GEN_TOP((iVar11 + 0x10)));
  if (*((uint *)GEN_TOP((iVar11 + 8))) == 0) {
    return 0xfffffffe;
  }
  while (*piVar12 != param_2) {
    uVar7 = uVar7 + 1;
    piVar12 = ((int *)GEN_TOP(((int)piVar12 + (uint)*(ushort *)(piVar12 + 3))));
    if (*((uint *)GEN_TOP((iVar11 + 8))) <= (uVar7 & 0xffff)) {
      return 0xfffffffe;
    }
  }
  *piVar6 = *piVar12;
  *((undefined1 *)GEN_TOP(((int)piVar6 + 0xd))) = *((undefined1 *)GEN_TOP(((int)piVar12 + 5)));
  *((undefined1 *)GEN_TOP(((int)piVar6 + 0xe))) = *((undefined1 *)GEN_TOP(((int)piVar12 + 6)));
  *((undefined1 *)GEN_TOP(((int)piVar6 + 0xf))) = *((undefined1 *)GEN_TOP(((int)piVar12 + 7)));
  piVar6[1] = piVar12[2];
  switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP(((int)piVar12 + 7))))) {
  case 1: ;
    puVar8 = ((undefined4 *)GEN_TOP(F_00406bd0(0x18,0,piVar5,0)));
    if (puVar8 == ((undefined4 *)GEN_TOP(0x0))) {
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
      REFG(int, 0x0000000c) = piVar12[4];
      REFG(int, 0x00000010) = piVar12[5];
    }
    else {
      *puVar8 = 0;
      puVar8[1] = 0;
      *(undefined1 *)(puVar8 + 2) = 0;
      *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc))) = puVar8;
      puVar8[3] = piVar12[4];
      puVar8[4] = piVar12[5];
    }
    break;
  case 2: ;
    uVar13 = 0x38;
    goto LAB_005a6427;
  case 3: ;
    uVar13 = 0x1c;
    goto LAB_005a648a;
  case 4: ;
    puVar8 = ((undefined4 *)GEN_TOP(F_00406bd0(0x24,0,piVar5,0)));
    if (puVar8 == ((undefined4 *)GEN_TOP(0x0))) {
LAB_005a64ee: ;
      puVar8 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      *puVar8 = 0;
      puVar8[1] = 0;
      *(undefined1 *)(puVar8 + 2) = 0;
    }
    goto LAB_005a64f0;
  case 5: ;
    puVar8 = ((undefined4 *)GEN_TOP(F_00406bd0(0x3c,0,piVar5,0)));
    if (puVar8 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar8 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      *puVar8 = 0;
      puVar8[1] = 0;
      *(undefined1 *)(puVar8 + 2) = 0;
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc))) = puVar8;
    puVar8[3] = piVar12[4];
    puVar8[4] = piVar12[5];
    puVar8[5] = piVar12[6];
    puVar8[6] = piVar12[7];
    puVar8[7] = piVar12[8];
    puVar8[8] = piVar12[9];
    *(short *)(puVar8 + 9) = (short)piVar12[10];
    *((undefined2 *)GEN_TOP(((int)puVar8 + 0x26))) = *((undefined2 *)GEN_TOP(((int)piVar12 + 0x2a)));
    *(char *)(puVar8 + 10) = (char)piVar12[0xb];
    break;
  case 6: ;
    puVar8 = ((undefined4 *)GEN_TOP(F_00406bd0(0x34,0,piVar5,0)));
    if (puVar8 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar8 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      *puVar8 = 0;
      puVar8[1] = 0;
      *(undefined1 *)(puVar8 + 2) = 0;
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc))) = puVar8;
    puVar8[3] = piVar12[4];
    puVar8[4] = piVar12[5];
    puVar8[5] = piVar12[6];
    puVar8[6] = piVar12[7];
    *(char *)(puVar8 + 0xc) = (char)piVar12[8];
    puVar8[10] = (uint)*((byte *)GEN_TOP(((int)piVar12 + 0x21)));
    puVar8[0xb] = (uint)*((byte *)GEN_TOP(((int)piVar12 + 0x22)));
    break;
  case 7: ;
    puVar8 = ((undefined4 *)GEN_TOP(F_00406bd0(0x7c,0,piVar5,0)));
    if (puVar8 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar8 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      *puVar8 = 0;
      puVar8[1] = 0;
      *(undefined1 *)(puVar8 + 2) = 0;
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc))) = puVar8;
    F_00c48350(puVar8,0,0x7c);
    iVar11 = 0;
    piVar9 = puVar8 + 4;
    do {
      *piVar9 = piVar12[iVar11 + 4];
      iVar11 = iVar11 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar11 < 0x10);
    puVar8[0x14] = piVar12[0x14];
    puVar8[0x15] = piVar12[0x15];
    break;
  case 8: ;
    puVar8 = ((undefined4 *)GEN_TOP(F_00406bd0(0x3c,0,piVar5,0)));
    if (puVar8 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar8 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      *puVar8 = 0;
      puVar8[1] = 0;
      *(undefined1 *)(puVar8 + 2) = 0;
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc))) = puVar8;
    F_00c48350(puVar8,0,0x3c);
    puVar8[4] = piVar12[4];
    puVar8[5] = piVar12[5];
    puVar8[6] = piVar12[6];
    puVar8[7] = piVar12[7];
    puVar8[8] = piVar12[8];
    puVar8[3] = piVar12[9];
    break;
  case 9: ;
  case 0xc: ;
    puVar8 = ((undefined4 *)GEN_TOP(F_00406bd0(0x20,0,piVar5,0)));
    if (puVar8 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar8 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      *puVar8 = 0;
      puVar8[1] = 0;
      *(undefined1 *)(puVar8 + 2) = 0;
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc))) = puVar8;
    puVar8[3] = piVar12[4];
    puVar8[4] = piVar12[5];
    puVar8[5] = piVar12[6];
    *(char *)(puVar8 + 6) = (char)piVar12[7];
    *((undefined1 *)GEN_TOP(((int)puVar8 + 0x19))) = *((undefined1 *)GEN_TOP(((int)piVar12 + 0x1d)));
    *((byte *)GEN_TOP(((int)this + 0x5c))) = *((byte *)GEN_TOP(((int)this + 0x5c))) | 2;
    break;
  case 10: ;
    uVar13 = 0x14;
    goto LAB_005a6705;
  case 0xb: ;
    puVar8 = ((undefined4 *)GEN_TOP(F_00406bd0(0x24,0,piVar5,0)));
    if (puVar8 == ((undefined4 *)GEN_TOP(0x0))) goto LAB_005a64ee;
    *puVar8 = 0;
    puVar8[1] = 0;
    *(undefined1 *)(puVar8 + 2) = 0;
LAB_005a64f0: ;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc))) = puVar8;
    puVar8[3] = piVar12[4];
    puVar8[4] = piVar12[5];
    puVar8[5] = piVar12[6];
    puVar8[6] = piVar12[7];
    break;
  case 0xd: ;
    puVar8 = ((undefined4 *)GEN_TOP(F_00406bd0(0x20,0,piVar5,0)));
    if (puVar8 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar8 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      *puVar8 = 0;
      puVar8[1] = 0;
      *(undefined1 *)(puVar8 + 2) = 0;
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc))) = puVar8;
    puVar8[3] = piVar12[4];
    puVar8[4] = piVar12[5];
    puVar8[5] = piVar12[6];
    puVar8[6] = piVar12[7];
    *(short *)(puVar8 + 7) = (short)piVar12[8];
    *((undefined1 *)GEN_TOP(((int)puVar8 + 0x1e))) = *((undefined1 *)GEN_TOP(((int)piVar12 + 0x22)));
    break;
  case 0xe: ;
    puVar8 = ((undefined4 *)GEN_TOP(F_00406bd0(0x20,0,piVar5,0)));
    if (puVar8 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar8 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      *puVar8 = 0;
      puVar8[1] = 0;
      *(undefined1 *)(puVar8 + 2) = 0;
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc))) = puVar8;
    puVar8[3] = piVar12[4];
    puVar8[4] = piVar12[5];
    puVar8[5] = piVar12[6];
    puVar8[6] = piVar12[7];
    *((byte *)GEN_TOP(((int)this + 0x5c))) = *((byte *)GEN_TOP(((int)this + 0x5c))) | 2;
    break;
  case 0xf: ;
    uVar13 = 0x2c;
LAB_005a6427: ;
    puVar8 = ((undefined4 *)GEN_TOP(F_00406bd0(uVar13,0,piVar5,0)));
    if (puVar8 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar8 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      *puVar8 = 0;
      puVar8[1] = 0;
      *(undefined1 *)(puVar8 + 2) = 0;
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc))) = puVar8;
    puVar8[3] = piVar12[4];
    puVar8[4] = piVar12[5];
    puVar8[5] = piVar12[6];
    puVar8[6] = piVar12[7];
    puVar8[7] = piVar12[8];
    puVar8[8] = piVar12[9];
    puVar8[9] = piVar12[10];
    puVar8[10] = piVar12[0xb];
    break;
  case 0x10: ;
    puVar8 = ((undefined4 *)GEN_TOP(F_00406bd0(0x14,0,piVar5,0)));
    if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar8 = 0;
      puVar8[1] = 0;
      *(undefined1 *)(puVar8 + 2) = 0;
      *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc))) = puVar8;
      puVar8[3] = piVar12[4];
      puVar8[4] = piVar12[5];
      break;
    }
    goto LAB_005a6736;
  case 0x11: ;
    puVar8 = ((undefined4 *)GEN_TOP(F_00406bd0(0x10,0,piVar5,0)));
    if (puVar8 == ((undefined4 *)GEN_TOP(0x0))) {
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
      REFG(int, 0x0000000c) = piVar12[4];
    }
    else {
      *puVar8 = 0;
      puVar8[1] = 0;
      *(undefined1 *)(puVar8 + 2) = 0;
      *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc))) = puVar8;
      puVar8[3] = piVar12[4];
    }
    break;
  case 0x12: ;
    puVar8 = ((undefined4 *)GEN_TOP(F_00406bd0(0x1c,0,piVar5,0)));
    if (puVar8 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar8 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      *puVar8 = 0;
      puVar8[1] = 0;
      *(undefined1 *)(puVar8 + 2) = 0;
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc))) = puVar8;
    puVar8[4] = piVar12[4];
    puVar8[5] = piVar12[5];
    puVar8[6] = piVar12[6];
    break;
  case 0x13: ;
    uVar13 = 0x18;
LAB_005a6705: ;
    puVar8 = ((undefined4 *)GEN_TOP(F_00406bd0(uVar13,0,piVar5,0)));
    if (puVar8 == ((undefined4 *)GEN_TOP(0x0))) {
LAB_005a6736: ;
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
      REFG(int, 0x0000000c) = piVar12[4];
      REFG(int, 0x00000010) = piVar12[5];
    }
    else {
      *puVar8 = 0;
      puVar8[1] = 0;
      *(undefined1 *)(puVar8 + 2) = 0;
      *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc))) = puVar8;
      puVar8[3] = piVar12[4];
      puVar8[4] = piVar12[5];
    }
    break;
  case 0x14: ;
    puVar8 = ((undefined4 *)GEN_TOP(F_00406bd0(0x90,0,piVar5,0)));
    if (puVar8 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar8 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      *puVar8 = 0;
      puVar8[1] = 0;
      *(undefined1 *)(puVar8 + 2) = 0;
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc))) = puVar8;
    iVar11 = 0;
    piVar9 = puVar8 + 3;
    do {
      *piVar9 = piVar12[iVar11 + 4];
      iVar11 = iVar11 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar11 < 0x1f);
    *(short *)(puVar8 + 0x22) = (short)piVar12[0x23];
    *((undefined2 *)GEN_TOP(((int)puVar8 + 0x8a))) = *((undefined2 *)GEN_TOP(((int)piVar12 + 0x8e)));
    *(short *)(puVar8 + 0x23) = (short)piVar12[0x24];
    break;
  case 0x15: ;
    uVar13 = 0x18;
LAB_005a648a: ;
    puVar8 = ((undefined4 *)GEN_TOP(F_00406bd0(uVar13,0,piVar5,0)));
    if (puVar8 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar8 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      *puVar8 = 0;
      puVar8[1] = 0;
      *(undefined1 *)(puVar8 + 2) = 0;
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc))) = puVar8;
    puVar8[3] = piVar12[4];
    puVar8[4] = piVar12[5];
    puVar8[5] = piVar12[6];
    break;
  case 0x16: ;
    puVar8 = ((undefined4 *)GEN_TOP(F_00406bd0(0x34,0,piVar5,0)));
    if (puVar8 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar8 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      *puVar8 = 0;
      puVar8[1] = 0;
      *(undefined1 *)(puVar8 + 2) = 0;
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc))) = puVar8;
    puVar8[3] = piVar12[4];
    puVar8[4] = piVar12[5];
    puVar8[5] = piVar12[6];
    puVar8[6] = piVar12[7];
    puVar8[7] = piVar12[8];
    puVar8[8] = piVar12[9];
    puVar8[9] = piVar12[10];
    puVar8[10] = piVar12[0xb];
    puVar8[0xb] = piVar12[0xc];
    puVar8[0xc] = piVar12[0xd];
  }
  if (*((int *)GEN_TOP(((int)this + 0xc))) == 0) {
    puVar8 = ((undefined4 *)GEN_TOP(F_00406bd0(9,0,piVar5,0)));
    if (puVar8 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar8 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      *puVar8 = 0;
      puVar8[1] = 0;
      *(undefined1 *)(puVar8 + 2) = 0;
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc))) = puVar8;
  }
  uVar7 = F_00406c00(-(uint)((int)((ulonglong)(uint)piVar12[2] * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)(uint)piVar12[2] * 4),0,piVar5,0);
  piVar6[2] = uVar7;
  if (uVar7 == 0) {
    return 0xfffffffd;
  }
  iVar11 = (uint)*((ushort *)GEN_TOP(((int)piVar12 + 0xe))) + (int)piVar12;
  param_2 = 0;
  if (piVar12[2] != 0) {
    local_c = 0;
    do {
      uVar7 = F_0058c7c0(*((undefined4 *)GEN_TOP((iVar11 + 0x14))));
      *((uint *)GEN_TOP((piVar6[2] + local_c * 4))) = uVar7;
      F_0055c9f0(*((undefined4 *)GEN_TOP((piVar6[2] + local_c * 4))),iVar11);
      param_2 = param_2 + 1;
      local_c = param_2 & 0xffff;
      iVar11 = iVar11 + (uint)*((ushort *)GEN_TOP((iVar11 + 0x18)));
    } while (local_c < (uint)piVar12[2]);
  }
  local_14 = 0;
  if (piVar6[1] != 0) {
    uVar7 = 0;
    do {
      local_c = *((uint *)GEN_TOP((piVar6[2] + uVar7 * 4)));
      local_18 = *((uint *)GEN_TOP((local_c + 8)));
      if (((*((byte *)GEN_TOP(((int)this + 0x5c))) & 1) == 0) || (local_18 == 0)) {
        iVar11 = 0;
      }
      else {
        iVar3 = *((int *)GEN_TOP(((int)this + 8)));
        iVar11 = 0;
        if (((iVar3 != 0) && (*((int *)GEN_TOP((iVar3 + 4))) != 0)) && (uVar7 = 0, *((int *)GEN_TOP((iVar3 + 4))) != 0)) {
          piVar9 = *((int * PTR32 *)GEN_TOP((iVar3 + 8)));
          do {
            if (*((uint *)GEN_TOP((*piVar9 + 4))) == local_18) {
              iVar11 = (*((int * PTR32 *)GEN_TOP((iVar3 + 8))))[uVar7];
              goto LAB_005a6b48;
            }
            uVar7 = uVar7 + 1;
            piVar9 = piVar9 + 1;
          } while (uVar7 < *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))));
          iVar11 = 0;
        }
      }
LAB_005a6b48: ;
      iVar3 = *((int *)GEN_TOP((local_c + 0xc)));
      *((int *)GEN_TOP((local_c + 8))) = iVar11;
      if (((*((byte *)GEN_TOP(((int)this + 0x5c))) & 1) == 0) || (iVar3 == 0)) {
        iVar11 = 0;
      }
      else {
        iVar4 = *((int *)GEN_TOP(((int)this + 8)));
        iVar11 = 0;
        local_18 = 0;
        if (((iVar4 != 0) && (*((int *)GEN_TOP((iVar4 + 4))) != 0)) && (uVar7 = 0, *((int *)GEN_TOP((iVar4 + 4))) != 0)) {
          piVar9 = *((int * PTR32 *)GEN_TOP((iVar4 + 8)));
          do {
            if (*((int *)GEN_TOP((*piVar9 + 4))) == iVar3) {
              iVar11 = (*((int * PTR32 *)GEN_TOP((iVar4 + 8))))[uVar7];
              goto LAB_005a6ba8;
            }
            uVar7 = uVar7 + 1;
            piVar9 = piVar9 + 1;
          } while (uVar7 < *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))));
          iVar11 = 0;
        }
      }
LAB_005a6ba8: ;
      iVar3 = *((int *)GEN_TOP((local_c + 0x10)));
      *((int *)GEN_TOP((local_c + 0xc))) = iVar11;
      if (((*((byte *)GEN_TOP(((int)this + 0x5c))) & 1) == 0) || (iVar3 == 0)) {
        iVar11 = 0;
      }
      else {
        iVar4 = *((int *)GEN_TOP(((int)this + 8)));
        iVar11 = 0;
        local_18 = 0;
        if (((iVar4 != 0) && (*((int *)GEN_TOP((iVar4 + 4))) != 0)) && (uVar7 = 0, *((int *)GEN_TOP((iVar4 + 4))) != 0)) {
          piVar9 = *((int * PTR32 *)GEN_TOP((iVar4 + 8)));
          do {
            if (*((int *)GEN_TOP((*piVar9 + 4))) == iVar3) {
              iVar11 = (*((int * PTR32 *)GEN_TOP((iVar4 + 8))))[uVar7];
              goto LAB_005a6c08;
            }
            uVar7 = uVar7 + 1;
            piVar9 = piVar9 + 1;
          } while (uVar7 < *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))));
          iVar11 = 0;
        }
      }
LAB_005a6c08: ;
      local_1c = *((uint *)GEN_TOP((local_c + 0x14)));
      *((int *)GEN_TOP((local_c + 0x10))) = iVar11;
      if (((*((byte *)GEN_TOP(((int)this + 0x5c))) & 1) == 0) || (local_1c == 0)) {
        iVar11 = 0;
      }
      else {
        iVar3 = *((int *)GEN_TOP(((int)this + 8)));
        iVar11 = 0;
        local_18 = 0;
        if (((iVar3 != 0) && (*((int *)GEN_TOP((iVar3 + 4))) != 0)) && (uVar7 = 0, *((int *)GEN_TOP((iVar3 + 4))) != 0)) {
          piVar9 = *((int * PTR32 *)GEN_TOP((iVar3 + 8)));
          do {
            if (*((uint *)GEN_TOP((*piVar9 + 4))) == local_1c) {
              iVar11 = (*((int * PTR32 *)GEN_TOP((iVar3 + 8))))[uVar7];
              goto LAB_005a6c68;
            }
            uVar7 = uVar7 + 1;
            piVar9 = piVar9 + 1;
          } while (uVar7 < *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))));
          iVar11 = 0;
        }
      }
LAB_005a6c68: ;
      local_14 = local_14 + 1;
      *((int *)GEN_TOP((local_c + 0x14))) = iVar11;
      uVar7 = local_14 & 0xffff;
    } while (uVar7 < (uint)piVar6[1]);
  }
  *((uint *)GEN_TOP(((int)this + 4))) = param_5;
  *(uint *)this = param_4;
  *((undefined2 *)GEN_TOP(((int)this + 0x10))) = (undefined2)param_6;
  *((undefined2 *)GEN_TOP(((int)this + 0x12))) = (undefined2)param_7;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 2;
  if ((char)param_9 != '\0') {
    bVar2 = *((byte *)GEN_TOP(((int)this + 0x5c)));
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 3;
    *((byte *)GEN_TOP(((int)this + 0x5c))) = *((byte *)GEN_TOP(((int)this + 0x5c))) ^ ((char)param_9 * '\x02' ^ bVar2) & 2
    ;
  }
  iVar11 = (uint)*((ushort *)GEN_TOP(((int)piVar12 + 0xe))) + (int)piVar12;
  param_4 = 0;
  if (piVar12[2] != 0) {
    uVar7 = 0;
    do {
      iVar3 = *((int *)GEN_TOP((piVar6[2] + uVar7 * 4)));
      if (*((short *)GEN_TOP((iVar11 + 0x56))) != 0) {
        *param_3 = *param_3 + 1;
      }
      uVar10 = (uint)*((ushort *)GEN_TOP((iVar3 + 0x18)));
      if (uVar10 == 2) {
        iVar3 = *((int *)GEN_TOP((piVar6[2] + uVar7 * 4)));
        if ((iVar3 != 0) && (((int *)GEN_TOP((iVar11 + 0x58))) != ((int *)GEN_TOP(0x0)))) {
          *((undefined2 *)GEN_TOP((iVar3 + 0x90))) = *((undefined2 *)GEN_TOP((iVar11 + 0x5c)));
          *((byte *)GEN_TOP((iVar3 + 0x93))) =
               *((byte *)GEN_TOP((iVar3 + 0x93))) ^ (*((byte *)GEN_TOP((iVar11 + 0x60))) ^ *((byte *)GEN_TOP((iVar3 + 0x93)))) & 1;
          *((byte *)GEN_TOP((iVar3 + 0x93))) =
               (*((byte *)GEN_TOP((iVar11 + 0x61))) & 1) * '\x02' | *((byte *)GEN_TOP((iVar3 + 0x93))) & 0xf1;
          *((undefined1 *)GEN_TOP((iVar3 + 0x92))) = *((undefined1 *)GEN_TOP((iVar11 + 0x62)));
          *((byte *)GEN_TOP((iVar3 + 0x93))) =
               *((byte *)GEN_TOP((iVar3 + 0x93))) ^
               (*((char *)GEN_TOP((iVar11 + 99))) << 4 ^ *((byte *)GEN_TOP((iVar3 + 0x93)))) & 0x70;
        }
        iVar4 = *((int *)GEN_TOP((iVar11 + 0x58)));
        if (iVar4 == 0) {
          if (iVar3 != 0) {
            local_1c = (uint)*((ushort *)GEN_TOP((iVar3 + 0x7c)));
            param_5 = (uint)*((ushort *)GEN_TOP((iVar3 + 0x7e)));
          }
          uVar7 = F_0055d500(piVar5,local_1c,param_5);
          *((uint *)GEN_TOP((iVar3 + 0x8c))) = uVar7;
        }
        else {
          uVar7 = 0;
          if (*((short *)GEN_TOP(((int)this + 0x12))) != 0) {
            piVar9 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
            do {
              if (*piVar9 == iVar4) {
                *((int * PTR32 *)GEN_TOP((iVar3 + 0x8c))) = *((int * PTR32 *)GEN_TOP(((int)this + 4))) + uVar7 * 3;
                break;
              }
              uVar7 = uVar7 + 1;
              piVar9 = piVar9 + 3;
            } while (uVar7 < *((ushort *)GEN_TOP(((int)this + 0x12))));
          }
        }
        if (**((int * PTR32 *)GEN_TOP((iVar3 + 0x8c))) == 0) {
          *((byte *)GEN_TOP((iVar3 + 0x93))) = *((byte *)GEN_TOP((iVar3 + 0x93))) | 0x80;
        }
        else {
          *((byte *)GEN_TOP((iVar3 + 0x93))) = *((byte *)GEN_TOP((iVar3 + 0x93))) & 0x7f;
        }
      }
      else if (uVar10 == 3) {
        iVar3 = *((int *)GEN_TOP((piVar6[2] + uVar7 * 4)));
        uVar7 = F_0042a990(iVar3 + 0x9c GEN_EDX_ARG);
        *((uint *)GEN_TOP((iVar3 + 0xf0))) = uVar7;
        F_0055cd00(iVar3,iVar11 + 0x58);
      }
      else if (uVar10 == 4) {
        iVar3 = *((int *)GEN_TOP((piVar6[2] + uVar7 * 4)));
        F_0055ced0(iVar3,((int *)GEN_TOP((iVar11 + 0x58))));
        iVar4 = *((int *)GEN_TOP((iVar11 + 0x58)));
        if (iVar4 == 0) {
          if (iVar3 != 0) {
            local_14 = (uint)*((ushort *)GEN_TOP((iVar3 + 0x7c)));
            local_18 = (uint)*((ushort *)GEN_TOP((iVar3 + 0x7e)));
          }
          uVar7 = F_0055d500(piVar5,local_14,local_18);
          *((uint *)GEN_TOP((iVar3 + 0x8c))) = uVar7;
        }
        else {
          uVar7 = 0;
          if (*((short *)GEN_TOP(((int)this + 0x12))) != 0) {
            piVar9 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
            do {
              if (*piVar9 == iVar4) {
                *((uint *)GEN_TOP((iVar3 + 0x8c))) = *((int *)GEN_TOP(((int)this + 4))) + uVar7 * 0xc;
                break;
              }
              uVar7 = uVar7 + 1;
              piVar9 = piVar9 + 3;
            } while (uVar7 < *((ushort *)GEN_TOP(((int)this + 0x12))));
          }
        }
      }
      else if (uVar10 == 5) {
        this_00 = *((undefined * PTR32 *)GEN_TOP((piVar6[2] + uVar7 * 4)));
        if ((this_00 != ((undefined *)GEN_TOP(0x0))) && (((int *)GEN_TOP((iVar11 + 0x58))) != ((int *)GEN_TOP(0x0)))) {
          *((uint *)GEN_TOP(((int)this_00 + 0x90))) = (uint)*((byte *)GEN_TOP((iVar11 + 0x5c)));
          *((undefined1 *)GEN_TOP(((int)this_00 + 0x94))) = *((undefined1 *)GEN_TOP((iVar11 + 0x5d)));
          *((undefined1 *)GEN_TOP(((int)this_00 + 0x95))) = *((undefined1 *)GEN_TOP((iVar11 + 0x5f)));
          *((undefined1 *)GEN_TOP(((int)this_00 + 0x96))) = *((undefined1 *)GEN_TOP((iVar11 + 0x5e)));
          *((undefined2 *)GEN_TOP(((int)this_00 + 0x98))) = *((undefined2 *)GEN_TOP((iVar11 + 0x60)));
        }
        iVar3 = *((int *)GEN_TOP((iVar11 + 0x58)));
        if (iVar3 == 0) {
          if (this_00 != ((undefined *)GEN_TOP(0x0))) {
            local_20 = (uint)*((ushort *)GEN_TOP(((int)this_00 + 0x7c)));
            local_c = (uint)*((ushort *)GEN_TOP(((int)this_00 + 0x7e)));
          }
          uVar7 = F_0055d500(piVar5,local_20,local_c);
          *((uint *)GEN_TOP(((int)this_00 + 0x8c))) = uVar7;
        }
        else {
          uVar7 = 0;
          if (*((short *)GEN_TOP(((int)this + 0x12))) != 0) {
            piVar9 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
            do {
              if (*piVar9 == iVar3) {
                *((int * PTR32 *)GEN_TOP(((int)this_00 + 0x8c))) = *((int * PTR32 *)GEN_TOP(((int)this + 4))) + uVar7 * 3;
                break;
              }
              uVar7 = uVar7 + 1;
              piVar9 = piVar9 + 3;
            } while (uVar7 < *((ushort *)GEN_TOP(((int)this + 0x12))));
          }
        }
        F_0042e430(((undefined *)GEN_TOP(((int)this_00 + 0xa0))) GEN_EDX_ARG,&REFG(undefined, 0x109fe4c));
        uVar7 = F_0042a990((int)this_00 + 0xa0 GEN_EDX_ARG);
        *((uint *)GEN_TOP(((int)this_00 + 0xf4))) = uVar7;
        F_0055ae90(this_00 GEN_EDX_ARG);
      }
      else if (uVar10 == 6) {
        iVar3 = *((int *)GEN_TOP((piVar6[2] + uVar7 * 4)));
        uVar7 = F_0042a990(iVar3 + 0x9c GEN_EDX_ARG);
        *((uint *)GEN_TOP((iVar3 + 0xf0))) = uVar7;
        F_0055cfa0(iVar3,iVar11 + 0x58);
      }
      else if (uVar10 == 7) {
        iVar3 = *((int *)GEN_TOP((piVar6[2] + uVar7 * 4)));
        uVar7 = F_0042a990(iVar3 + 0x9c GEN_EDX_ARG);
        *((uint *)GEN_TOP((iVar3 + 0xf0))) = uVar7;
        F_0055d100(iVar3,iVar11 + 0x58);
      }
      else if (uVar10 == 8) {
        iVar3 = *((int *)GEN_TOP((piVar6[2] + uVar7 * 4)));
        if ((iVar3 != 0) && (((undefined2 *)GEN_TOP((iVar11 + 0x58))) != ((undefined2 *)GEN_TOP(0x0)))) {
          *((undefined2 *)GEN_TOP((iVar3 + 0x8c))) = *((undefined2 *)GEN_TOP((iVar11 + 0x58)));
          *((undefined2 *)GEN_TOP((iVar3 + 0x8e))) = *((undefined2 *)GEN_TOP((iVar11 + 0x5a)));
          *((undefined2 *)GEN_TOP((iVar3 + 0x90))) = *((undefined2 *)GEN_TOP((iVar11 + 0x5c)));
          *((undefined2 *)GEN_TOP((iVar3 + 0x92))) = *((undefined2 *)GEN_TOP((iVar11 + 0x60)));
          *((undefined4 *)GEN_TOP((iVar3 + 0x94))) = *((undefined4 *)GEN_TOP((iVar11 + 100)));
          *((undefined4 *)GEN_TOP((iVar3 + 0x98))) = 0;
        }
      }
      else if (uVar10 == 9) {
        F_0055d1e0(*((undefined4 *)GEN_TOP((piVar6[2] + uVar7 * 4))),iVar11 + 0x58);
      }
      else if (((999 < *((ushort *)GEN_TOP((iVar3 + 0x18)))) &&
               (uVar10 = F_0055d610(param_1,uVar10), uVar10 != 0)) &&
              (piVar9 = ((int *)GEN_TOP(F_005a5ee0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x10))) GEN_EDX_ARG,
                                            (uint)*((byte *)GEN_TOP((uVar10 + 7)))))), piVar9 != ((int *)GEN_TOP(0x0)))) {
        iVar4 = *((int *)GEN_TOP((piVar6[2] + uVar7 * 4)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0xc))))(piVar9 GEN_EDX_ARG);
        piVar9[0x1c] = iVar3;
        *((int * PTR32 *)GEN_TOP((iVar4 + 0x8c))) = piVar9;
        piVar9[8] = *((int *)GEN_TOP(((int)this + 0x1c)));
        F_005a62e0(piVar9 + 1 GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((iVar3 + 0x18))),param_3,*(undefined4 *)this,
                     *((undefined4 *)GEN_TOP(((int)this + 4))),(uint)*((ushort *)GEN_TOP(((int)this + 0x10))),
                     (uint)*((ushort *)GEN_TOP(((int)this + 0x12))),*((undefined4 *)GEN_TOP(((int)this + 0x34))),param_9);
        uVar7 = F_00578ee0(piVar9 + 1 GEN_EDX_ARG,0);
        if ((uVar7 != 0) && (*((int *)GEN_TOP((uVar7 + 8))) == 0)) {
          *((int *)GEN_TOP((uVar7 + 8))) = iVar3;
        }
        F_0055c600(iVar3,piVar9,*((undefined1 *)GEN_TOP((uVar10 + 7))),iVar11);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0x40))))(piVar9 GEN_EDX_ARG,piVar9[4]);
        if ((*(byte *)(piVar9 + 0x18) & 2) != 0) {
          *((byte *)GEN_TOP(((int)this + 0x5c))) = *((byte *)GEN_TOP(((int)this + 0x5c))) | 2;
        }
      }
      iVar11 = iVar11 + (uint)*((ushort *)GEN_TOP((iVar11 + 0x18)));
      param_4 = param_4 + 1;
      uVar7 = param_4 & 0xffff;
    } while (uVar7 < (uint)piVar12[2]);
  }
  puVar1 = ((uint *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 8))) + 0x84)));
  *puVar1 = *puVar1 | 0x10000000;
  F_00587440(this GEN_EDX_ARG);
  F_005964f0(this GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_005a7200 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005a7200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5a7200u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0x54, 12, 4);
  gen_size32 _Size;
  short sVar1;
  code * pcVar2;
  int * piVar3;
  int iVar4;
  uint uVar5;
  undefined * pvVar6;
  uint uVar7;
  ushort uVar8;
  ushort uVar9;
  int * piVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int * piVar14;
  undefined4 * puVar15;
  int iVar16;
  int * piVar17;
  int iVar18;
  float10 fVar19;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x4c)) = this;
  piVar3 = ((int *)GEN_TOP(F_00404270()));
  (*(int * PTR32 *)(gen_frame + 0x30)) = piVar3;
  F_0056ab80(this GEN_EDX_ARG);
  iVar13 = *((int *)GEN_TOP((param_2 + 0x18))) + param_2;
  (*(int *)(gen_frame + 0x20)) = iVar13;
  if (*((int *)GEN_TOP((iVar13 + 8))) == 0) {
    return 0xffffffff;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*((int *)GEN_TOP((iVar13 + 8))) * 0x18,0x10)));
  (*(int * PTR32 *)(gen_frame + 0x14)) = piVar3;
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    iVar18 = 0;
    iVar16 = 0;
    F_00c48350(piVar3,0,*((int *)GEN_TOP((iVar13 + 8))) * 0x18);
    piVar3 = (*(int * PTR32 *)(gen_frame + 0x30));
    *(byte *)((*(undefined4 * PTR32 *)(gen_frame + 0x4c)) + 0x17) = *(byte *)((*(undefined4 * PTR32 *)(gen_frame + 0x4c)) + 0x17) | 4;
    *(undefined2 *)((*(undefined4 * PTR32 *)(gen_frame + 0x4c)) + 5) = *((undefined2 *)GEN_TOP((iVar13 + 8)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x4c))[2] = (*(int * PTR32 *)(gen_frame + 0x14));
    (*(int * PTR32 *)(gen_frame + 0x44)) = (*(int * PTR32 *)(gen_frame + 0x14));
    uVar5 = *((uint *)GEN_TOP((iVar13 + 8)));
    uVar11 = 0;
    iVar13 = iVar13 + 0x10;
    (*(int * PTR32 *)(gen_frame + 0x4)) = ((int *)GEN_TOP(0x0));
    (*(uint *)(gen_frame + 0x40)) = 0;
    iVar4 = iVar13;
    if (1 < (int)uVar5) {
      iVar12 = (uVar5 - 2 >> 1) + 1;
      uVar11 = iVar12 * 2;
      (*(uint *)(gen_frame + 0xc)) = uVar11;
      do {
        iVar16 = iVar16 + (uint)*((ushort *)GEN_TOP((iVar4 + 0xc)));
        iVar4 = iVar4 + (uint)*((ushort *)GEN_TOP((iVar4 + 0xe)));
        iVar18 = iVar18 + (uint)*((ushort *)GEN_TOP((iVar4 + 0xc)));
        iVar4 = iVar4 + (uint)*((ushort *)GEN_TOP((iVar4 + 0xe)));
        iVar12 = iVar12 - 1;
      } while (iVar12 != 0);
    }
    if (uVar11 < uVar5) {
      uVar5 = (uint)*((ushort *)GEN_TOP((iVar4 + 0xc)));
    }
    else {
      uVar5 = 0;
    }
    uVar5 = uVar5 + iVar16 + iVar18;
    _Size = uVar5 * 4;
    (*(uint *)(gen_frame + 0x40)) = uVar5;
    (*(int *)(gen_frame + 0x34)) = iVar13;
    (*(uint *)(gen_frame + 0x38)) = 0;
    pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x30)) + 0xc))))((*(int * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG,_Size,0x10)));
    (*(undefined * PTR32 *)(gen_frame + 0x3c)) = pvVar6;
    if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
      F_00c48350(pvVar6,0,_Size);
      (*(uint *)(gen_frame + 0xc)) = 0;
      if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x20)) + 8))) != 0) {
        do {
          piVar14 = (*(int * PTR32 *)(gen_frame + 0x44));
          iVar4 = (*(int *)(gen_frame + 0x34));
          fVar19 = (float10)REFG(double, 0x10944b8);
          (*(int * PTR32 *)(gen_frame + 0x44))[3] = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x34)) + 4)));
          (*(int * PTR32 *)(gen_frame + 0x10)) = ((int *)GEN_TOP((int)*((short *)GEN_TOP(((*(int *)(gen_frame + 0x34)) + 8)))));
          (*(uint *)(gen_frame + 0x24)) = 0;
          (*(int * PTR32 *)(gen_frame + 0x44))[4] = (int)gen_fl2bits(((float)GEN_TOF(((float10)(int)*((short *)GEN_TOP(((*(int *)(gen_frame + 0x34)) + 8))) / fVar19))));
          (*(int * PTR32 *)(gen_frame + 0x10)) = ((int *)GEN_TOP((int)*((short *)GEN_TOP(((*(int *)(gen_frame + 0x34)) + 10)))));
          (*(int * PTR32 *)(gen_frame + 0x44))[5] = (int)gen_fl2bits(((float)GEN_TOF(((float10)(int)*((short *)GEN_TOP(((*(int *)(gen_frame + 0x34)) + 10))) / fVar19))));
          piVar3 = ((int *)GEN_TOP((*(undefined4 * PTR32 *)(gen_frame + 0x4c))[9]));
          (*(int * PTR32 *)(gen_frame + 0x10)) = piVar3;
          if (piVar3 != ((int *)GEN_TOP(0x0))) {
            piVar17 = ((int *)GEN_TOP(((*(int *)(gen_frame + 0x34)) + 0x10)));
            if (*((ushort *)GEN_TOP(((*(int *)(gen_frame + 0x34)) + 0xc))) != 0) {
              (*(uint *)(gen_frame + 0x18)) = (uint)*((ushort *)GEN_TOP(((*(int *)(gen_frame + 0x34)) + 0xc)));
              do {
                if ((99 < (uint)piVar17[5]) && (iVar16 = *piVar3, iVar16 != 0)) {
                  piVar10 = piVar3;
                  do {
                    if (*piVar17 == iVar16) {
                      uVar8 = (ushort)(*(uint *)(gen_frame + 0x24)) + (short)piVar10[1];
                      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 0)) = uVar8;
                      (*(uint *)(gen_frame + 0x24)) = (uint)uVar8;
                      break;
                    }
                    iVar16 = piVar10[2];
                    piVar10 = piVar10 + 2;
                  } while (iVar16 != 0);
                }
                piVar17 = ((int *)GEN_TOP(((int)piVar17 + (uint)*(ushort *)(piVar17 + 6))));
                uVar5 = (*(uint *)(gen_frame + 0x18)) - 1;
                (*(uint *)(gen_frame + 0x18)) = uVar5;
              } while (uVar5 != 0);
            }
          }
          iVar16 = *((ushort *)GEN_TOP(((*(int *)(gen_frame + 0x34)) + 0xc))) + (*(uint *)(gen_frame + 0x24));
          (*(int * PTR32 *)(gen_frame + 0x44))[1] = iVar16;
          uVar5 = F_00406c00(iVar16 * 4,0,(*(int * PTR32 *)(gen_frame + 0x30)),0);
          piVar14[2] = uVar5;
          if (uVar5 == 0) {
            return 0xfffffffd;
          }
          (*(int * PTR32 *)(gen_frame + 0x48)) = ((int *)GEN_TOP((iVar4 + 0x10)));
          (*(int * PTR32 *)(gen_frame + 0x10)) = ((int *)GEN_TOP(0x0));
          if (piVar14[1] != 0) {
            (*(uint *)(gen_frame + 0x18)) = 0;
            do {
              piVar3 = ((int *)GEN_TOP((*(undefined4 * PTR32 *)(gen_frame + 0x4c))[9]));
              uVar8 = 1;
              (*(uint *)(gen_frame + 0x28)) = 1;
              if (((piVar3 != ((int *)GEN_TOP(0x0))) && (99 < (uint)(*(int * PTR32 *)(gen_frame + 0x48))[5])) &&
                 (iVar4 = *piVar3, iVar4 != 0)) {
                do {
                  if (*(*(int * PTR32 *)(gen_frame + 0x48)) == iVar4) {
                    uVar8 = (short)piVar3[1] + 1;
                    (*(uint *)(gen_frame + 0x28)) = (uint)uVar8;
                    break;
                  }
                  iVar4 = piVar3[2];
                  piVar3 = piVar3 + 2;
                } while (iVar4 != 0);
              }
              (*(uint *)(gen_frame + 0x2c)) = 0;
              if (uVar8 != 0) {
LAB_005a7473: ;
                uVar11 = (*(uint *)(gen_frame + 0x2c)) & 0xffff;
                iVar4 = (uVar11 + (*(uint *)(gen_frame + 0x18))) * 4;
                uVar5 = F_0058c7c0((*(int * PTR32 *)(gen_frame + 0x48))[5]);
                piVar3 = (*(int * PTR32 *)(gen_frame + 0x44));
                *((uint *)GEN_TOP((iVar4 + (*(int * PTR32 *)(gen_frame + 0x44))[2]))) = uVar5;
                iVar4 = *((int *)GEN_TOP((iVar4 + (*(int * PTR32 *)(gen_frame + 0x44))[2])));
                F_0055c9f0(iVar4,(*(int * PTR32 *)(gen_frame + 0x48)));
                if ((short)(*(uint *)(gen_frame + 0x2c)) == 0) {
                  sVar1 = *((short *)GEN_TOP((iVar4 + 0x18)));
                  if (sVar1 == 2) {
                    iVar4 = (*(int * PTR32 *)(gen_frame + 0x48))[0x16];
                    uVar8 = 0xffff;
                    if ((*(uint *)(gen_frame + 0x40)) != 0) {
                      uVar5 = 0;
                      uVar9 = 0;
                      do {
                        iVar16 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + uVar5 * 4)));
                        if (iVar16 == iVar4) goto LAB_005a7769;
                        if ((iVar16 == 0) && ((short)uVar8 < 0)) {
                          uVar8 = uVar9;
                        }
                        uVar9 = uVar9 + 1;
                        uVar5 = (uint)uVar9;
                      } while (uVar5 < (*(uint *)(gen_frame + 0x40)));
LAB_005a7757: ;
                      if (uVar8 != 0xffff) {
                        (*(uint *)(gen_frame + 0x38)) = (*(uint *)(gen_frame + 0x38)) + 1;
                        *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + (short)uVar8 * 4))) = iVar4;
                      }
                    }
                  }
                  else if (sVar1 == 4) {
                    iVar4 = (*(int * PTR32 *)(gen_frame + 0x48))[0x16];
                    uVar9 = 0;
                    uVar8 = 0xffff;
                    if ((*(uint *)(gen_frame + 0x40)) != 0) {
                      uVar5 = 0;
                      do {
                        iVar16 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + uVar5 * 4)));
                        if (iVar16 == iVar4) goto LAB_005a7769;
                        if ((iVar16 == 0) && ((short)uVar8 < 0)) {
                          uVar8 = uVar9;
                        }
                        uVar9 = uVar9 + 1;
                        uVar5 = (uint)uVar9;
                      } while (uVar5 < (*(uint *)(gen_frame + 0x40)));
                      goto LAB_005a7757;
                    }
                  }
                  else if (sVar1 == 5) {
                    iVar4 = (*(int * PTR32 *)(gen_frame + 0x48))[0x16];
                    uVar9 = 0;
                    uVar8 = 0xffff;
                    if ((*(uint *)(gen_frame + 0x40)) != 0) {
                      uVar5 = 0;
                      do {
                        iVar16 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + uVar5 * 4)));
                        if (iVar16 == iVar4) goto LAB_005a7769;
                        if ((iVar16 == 0) && ((short)uVar8 < 0)) {
                          uVar8 = uVar9;
                        }
                        uVar9 = uVar9 + 1;
                        uVar5 = (uint)uVar9;
                      } while (uVar5 < (*(uint *)(gen_frame + 0x40)));
                      goto LAB_005a7757;
                    }
                  }
                }
                else {
                  uVar5 = *((uint *)GEN_TOP((iVar4 + 4)));
                  (*(uint *)(gen_frame + 0x24)) = uVar5;
                  (*(uint *)(gen_frame + 0x0)) = uVar5 * 10000 + uVar11;
                  *((uint *)GEN_TOP((iVar4 + 4))) = (*(uint *)(gen_frame + 0x0));
                  if ((short)(*(uint *)(gen_frame + 0x2c)) == 1) {
                    *((uint *)GEN_TOP((*((int *)GEN_TOP((piVar3[2] + (*(uint *)(gen_frame + 0x18)) * 4))) + 0x10))) = (*(uint *)(gen_frame + 0x0));
                    *((undefined4 *)GEN_TOP((iVar4 + 0xc))) =
                         *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((piVar3[2] + (*(uint *)(gen_frame + 0x18)) * 4))) + 4)));
                    if (((*(uint *)(gen_frame + 0x28)) & 0xffff) == 2) {
                      if (((((*(byte *)((*(undefined4 * PTR32 *)(gen_frame + 0x4c)) + 0x17) & 1) != 0) && (uVar5 != 0)) &&
                          (iVar16 = (*(undefined4 * PTR32 *)(gen_frame + 0x4c))[2], iVar16 != 0)) &&
                         ((*((int *)GEN_TOP((iVar16 + 4))) != 0 && (uVar11 = 0, *((int *)GEN_TOP((iVar16 + 4))) != 0)))) {
                        piVar3 = *((int * PTR32 *)GEN_TOP((iVar16 + 8)));
                        piVar14 = piVar3;
                        do {
                          if (*((uint *)GEN_TOP((*piVar14 + 4))) == uVar5) {
                            uVar5 = piVar3[uVar11];
                            (*(uint *)(gen_frame + 0x24)) = uVar5;
                            if ((uVar5 != 0) && (*((int *)GEN_TOP((uVar5 + 8))) != 0)) {
                              uVar11 = 0;
                              piVar14 = piVar3;
                              goto LAB_005a7578;
                            }
                            break;
                          }
                          uVar11 = uVar11 + 1;
                          piVar14 = piVar14 + 1;
                        } while (uVar11 < *((uint *)GEN_TOP(((*(undefined4 * PTR32 *)(gen_frame + 0x4c))[2] + 4))));
                      }
                    }
                    else {
                      *((int *)GEN_TOP((iVar4 + 0x10))) = *((int *)GEN_TOP((iVar4 + 4))) + 1;
                    }
                  }
                  else if (uVar11 == ((*(uint *)(gen_frame + 0x28)) & 0xffff) - 1) {
                    *((uint *)GEN_TOP((iVar4 + 0xc))) = (*(uint *)(gen_frame + 0x0)) - 1;
                    if (((((*(byte *)((*(undefined4 * PTR32 *)(gen_frame + 0x4c)) + 0x17) & 1) != 0) && (uVar5 != 0)) &&
                        (iVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x4c))[2], iVar4 != 0)) &&
                       ((*((int *)GEN_TOP((iVar4 + 4))) != 0 && (uVar11 = 0, *((int *)GEN_TOP((iVar4 + 4))) != 0)))) {
                      piVar3 = *((int * PTR32 *)GEN_TOP((iVar4 + 8)));
                      piVar14 = piVar3;
                      do {
                        if (*((uint *)GEN_TOP((*piVar14 + 4))) == uVar5) {
                          iVar4 = piVar3[uVar11];
                          if ((iVar4 != 0) && (*((int *)GEN_TOP((iVar4 + 8))) != 0)) {
                            uVar5 = 0;
                            piVar14 = piVar3;
                            goto LAB_005a7652;
                          }
                          break;
                        }
                        uVar11 = uVar11 + 1;
                        piVar14 = piVar14 + 1;
                      } while (uVar11 < *((uint *)GEN_TOP(((*(undefined4 * PTR32 *)(gen_frame + 0x4c))[2] + 4))));
                    }
                  }
                  else {
                    *((uint *)GEN_TOP((iVar4 + 0xc))) = (*(uint *)(gen_frame + 0x0)) - 1;
                    *((uint *)GEN_TOP((iVar4 + 0x10))) = (*(uint *)(gen_frame + 0x0)) + 1;
                  }
                }
                goto LAB_005a7769;
              }
LAB_005a777a: ;
              (*(int * PTR32 *)(gen_frame + 0x48)) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x48)) + (uint)*(ushort *)((*(int * PTR32 *)(gen_frame + 0x48)) + 6))));
              uVar5 = (int)(*(int * PTR32 *)(gen_frame + 0x10)) + (*(uint *)(gen_frame + 0x28));
              (*(int * PTR32 *)(gen_frame + 0x10)) = ((int *)GEN_TOP(uVar5));
              uVar5 = uVar5 & 0xffff;
              (*(uint *)(gen_frame + 0x18)) = uVar5;
            } while (uVar5 < (uint)(*(int * PTR32 *)(gen_frame + 0x44))[1]);
          }
          uVar5 = 0;
          if (((*(undefined4 * PTR32 *)(gen_frame + 0x4c))[9] != 0) && ((*(int * PTR32 *)(gen_frame + 0x10)) = ((int *)GEN_TOP(0x0)), (*(int * PTR32 *)(gen_frame + 0x44))[1] != 1)) {
            do {
              piVar3 = ((int *)GEN_TOP(((*(int * PTR32 *)(gen_frame + 0x44))[2] + uVar5 * 4)));
              iVar4 = *piVar3;
              iVar16 = piVar3[1];
              if (((((iVar4 != 0) && ((*(uint *)(gen_frame + 0x0)) = *((uint *)GEN_TOP((iVar4 + 4))), 10000 < (*(uint *)(gen_frame + 0x0)))) &&
                   (((iVar16 == 0 || (*((uint *)GEN_TOP((iVar16 + 4))) < 0x2711)) &&
                    ((*(byte *)((*(undefined4 * PTR32 *)(gen_frame + 0x4c)) + 0x17) & 1) != 0)))) &&
                  (((*((int *)GEN_TOP((iVar4 + 0x10))) != 0 && (iVar16 = (*(undefined4 * PTR32 *)(gen_frame + 0x4c))[2], iVar16 != 0)) &&
                   (*((int *)GEN_TOP((iVar16 + 4))) != 0)))) && (uVar5 = 0, *((int *)GEN_TOP((iVar16 + 4))) != 0)) {
                piVar3 = *((int * PTR32 *)GEN_TOP((iVar16 + 8)));
                do {
                  if (*((int *)GEN_TOP((*piVar3 + 4))) == *((int *)GEN_TOP((iVar4 + 0x10)))) {
                    iVar4 = (*((int * PTR32 *)GEN_TOP((iVar16 + 8))))[uVar5];
                    if (iVar4 != 0) {
                      *((uint *)GEN_TOP((iVar4 + 0xc))) = (*(uint *)(gen_frame + 0x0));
                    }
                    break;
                  }
                  uVar5 = uVar5 + 1;
                  piVar3 = piVar3 + 1;
                } while (uVar5 < *((uint *)GEN_TOP(((*(undefined4 * PTR32 *)(gen_frame + 0x4c))[2] + 4))));
              }
              uVar5 = (int)(*(int * PTR32 *)(gen_frame + 0x10)) + 1;
              (*(int * PTR32 *)(gen_frame + 0x10)) = ((int *)GEN_TOP(uVar5));
              uVar5 = uVar5 & 0xffff;
            } while (uVar5 < (*(int * PTR32 *)(gen_frame + 0x44))[1] - 1U);
          }
          (*(int * PTR32 *)(gen_frame + 0x10)) = ((int *)GEN_TOP(0x0));
          if ((*(int * PTR32 *)(gen_frame + 0x44))[1] != 0) {
            uVar5 = 0;
            do {
              uVar5 = *((uint *)GEN_TOP(((*(int * PTR32 *)(gen_frame + 0x44))[2] + uVar5 * 4)));
              (*(uint *)(gen_frame + 0x24)) = uVar5;
              if (((*(byte *)((*(undefined4 * PTR32 *)(gen_frame + 0x4c)) + 0x17) & 1) == 0) || (*((int *)GEN_TOP((uVar5 + 8))) == 0)) {
                iVar4 = 0;
              }
              else {
                iVar16 = (*(undefined4 * PTR32 *)(gen_frame + 0x4c))[2];
                iVar4 = 0;
                (*(uint *)(gen_frame + 0x0)) = 0;
                if (((iVar16 != 0) && (*((int *)GEN_TOP((iVar16 + 4))) != 0)) &&
                   (uVar11 = 0, *((int *)GEN_TOP((iVar16 + 4))) != 0)) {
                  piVar3 = *((int * PTR32 *)GEN_TOP((iVar16 + 8)));
                  do {
                    if (*((int *)GEN_TOP((*piVar3 + 4))) == *((int *)GEN_TOP((uVar5 + 8)))) {
                      iVar4 = (*((int * PTR32 *)GEN_TOP((iVar16 + 8))))[uVar11];
                      goto LAB_005a78d1;
                    }
                    uVar11 = uVar11 + 1;
                    piVar3 = piVar3 + 1;
                  } while (uVar11 < *((uint *)GEN_TOP(((*(undefined4 * PTR32 *)(gen_frame + 0x4c))[2] + 4))));
                  iVar4 = 0;
                }
              }
LAB_005a78d1: ;
              *((int *)GEN_TOP((uVar5 + 8))) = iVar4;
              if (((*(byte *)((*(undefined4 * PTR32 *)(gen_frame + 0x4c)) + 0x17) & 1) == 0) || (*((int *)GEN_TOP((uVar5 + 0xc))) == 0)) {
                iVar4 = 0;
              }
              else {
                iVar16 = (*(undefined4 * PTR32 *)(gen_frame + 0x4c))[2];
                iVar4 = 0;
                (*(uint *)(gen_frame + 0x0)) = 0;
                if (((iVar16 != 0) && (*((int *)GEN_TOP((iVar16 + 4))) != 0)) &&
                   (uVar11 = 0, *((int *)GEN_TOP((iVar16 + 4))) != 0)) {
                  piVar3 = *((int * PTR32 *)GEN_TOP((iVar16 + 8)));
                  do {
                    if (*((int *)GEN_TOP((*piVar3 + 4))) == *((int *)GEN_TOP((uVar5 + 0xc)))) {
                      iVar4 = (*((int * PTR32 *)GEN_TOP((iVar16 + 8))))[uVar11];
                      goto LAB_005a7923;
                    }
                    uVar11 = uVar11 + 1;
                    piVar3 = piVar3 + 1;
                  } while (uVar11 < *((uint *)GEN_TOP(((*(undefined4 * PTR32 *)(gen_frame + 0x4c))[2] + 4))));
                  iVar4 = 0;
                }
              }
LAB_005a7923: ;
              *((int *)GEN_TOP((uVar5 + 0xc))) = iVar4;
              if (((*(byte *)((*(undefined4 * PTR32 *)(gen_frame + 0x4c)) + 0x17) & 1) == 0) || (*((int *)GEN_TOP((uVar5 + 0x10))) == 0)) {
                iVar4 = 0;
              }
              else {
                iVar16 = (*(undefined4 * PTR32 *)(gen_frame + 0x4c))[2];
                iVar4 = 0;
                (*(uint *)(gen_frame + 0x0)) = 0;
                if (((iVar16 != 0) && (*((int *)GEN_TOP((iVar16 + 4))) != 0)) &&
                   (uVar11 = 0, *((int *)GEN_TOP((iVar16 + 4))) != 0)) {
                  piVar3 = *((int * PTR32 *)GEN_TOP((iVar16 + 8)));
                  do {
                    if (*((int *)GEN_TOP((*piVar3 + 4))) == *((int *)GEN_TOP((uVar5 + 0x10)))) {
                      iVar4 = (*((int * PTR32 *)GEN_TOP((iVar16 + 8))))[uVar11];
                      goto LAB_005a797d;
                    }
                    uVar11 = uVar11 + 1;
                    piVar3 = piVar3 + 1;
                  } while (uVar11 < *((uint *)GEN_TOP(((*(undefined4 * PTR32 *)(gen_frame + 0x4c))[2] + 4))));
                  iVar4 = 0;
                }
              }
LAB_005a797d: ;
              *((int *)GEN_TOP((uVar5 + 0x10))) = iVar4;
              if (((*(byte *)((*(undefined4 * PTR32 *)(gen_frame + 0x4c)) + 0x17) & 1) == 0) || (*((int *)GEN_TOP((uVar5 + 0x14))) == 0)) {
                iVar4 = 0;
              }
              else {
                iVar16 = (*(undefined4 * PTR32 *)(gen_frame + 0x4c))[2];
                iVar4 = 0;
                (*(uint *)(gen_frame + 0x0)) = 0;
                if (((iVar16 != 0) && (*((int *)GEN_TOP((iVar16 + 4))) != 0)) &&
                   (uVar11 = 0, *((int *)GEN_TOP((iVar16 + 4))) != 0)) {
                  piVar3 = *((int * PTR32 *)GEN_TOP((iVar16 + 8)));
                  do {
                    if (*((int *)GEN_TOP((*piVar3 + 4))) == *((int *)GEN_TOP((uVar5 + 0x14)))) {
                      iVar4 = (*((int * PTR32 *)GEN_TOP((iVar16 + 8))))[uVar11];
                      goto LAB_005a79d9;
                    }
                    uVar11 = uVar11 + 1;
                    piVar3 = piVar3 + 1;
                  } while (uVar11 < *((uint *)GEN_TOP(((*(undefined4 * PTR32 *)(gen_frame + 0x4c))[2] + 4))));
                  iVar4 = 0;
                }
              }
LAB_005a79d9: ;
              *((int *)GEN_TOP((uVar5 + 0x14))) = iVar4;
              uVar5 = (int)(*(int * PTR32 *)(gen_frame + 0x10)) + 1;
              (*(int * PTR32 *)(gen_frame + 0x10)) = ((int *)GEN_TOP(uVar5));
              uVar5 = uVar5 & 0xffff;
            } while (uVar5 < (uint)(*(int * PTR32 *)(gen_frame + 0x44))[1]);
          }
          (*(int * PTR32 *)(gen_frame + 0x44)) = (*(int * PTR32 *)(gen_frame + 0x44)) + 6;
          (*(int *)(gen_frame + 0x34)) = (*(int *)(gen_frame + 0x34)) + (uint)*((ushort *)GEN_TOP(((*(int *)(gen_frame + 0x34)) + 0xe)));
          uVar5 = (*(uint *)(gen_frame + 0xc)) + 1;
          (*(uint *)(gen_frame + 0xc)) = uVar5;
          piVar3 = (*(int * PTR32 *)(gen_frame + 0x30));
        } while (uVar5 < *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x20)) + 8))));
      }
      iVar4 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 8))) + 8 + param_1)));
      pcVar2 = *((gen_code32 *)GEN_TOP((*piVar3 + 0xc)));
      iVar16 = *((int *)GEN_TOP((param_1 + 8))) + param_1;
      (*(uint *)(gen_frame + 0xc)) = 0;
      uVar5 = (*pcVar2)(piVar3,iVar4 * 4,0x10);
      puVar15 = (*(undefined4 * PTR32 *)(gen_frame + 0x4c));
      (*(uint *)(gen_frame + 0x18)) = uVar5;
      if (uVar5 != 0) {
        F_0055d350((*(undefined4 * PTR32 *)(gen_frame + 0x4c)) GEN_EDX_ARG,piVar3,iVar16,*((int *)GEN_TOP((param_1 + 0xc))) + param_1,uVar5,&(*(uint *)(gen_frame + 0xc)),
                     (*(undefined * PTR32 *)(gen_frame + 0x3c)),(*(uint *)(gen_frame + 0x38)) & 0xffff);
        F_0058faa0(puVar15 GEN_EDX_ARG,piVar3,iVar16,(*(uint *)(gen_frame + 0x18)),(*(uint *)(gen_frame + 0xc)) & 0xffff);
        (*(int *)(gen_frame + 0x1c)) = 0;
        (*(int *)(gen_frame + 0x34)) = iVar13;
        (*(uint *)(gen_frame + 0x8)) = 0;
        if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x20)) + 8))) != 0) {
          (*(int * PTR32 *)(gen_frame + 0x44)) = (*(int * PTR32 *)(gen_frame + 0x14)) + 2;
          do {
            piVar3 = ((int *)GEN_TOP(((*(int *)(gen_frame + 0x34)) + 0x10)));
            (*(int * PTR32 *)(gen_frame + 0x48)) = piVar3;
            (*(int * PTR32 *)(gen_frame + 0x14)) = ((int *)GEN_TOP(0x0));
            if ((*(int * PTR32 *)(gen_frame + 0x44))[-1] != 0) {
              uVar5 = 0;
              do {
                uVar11 = *((uint *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x44)) + uVar5 * 4)));
                (*(uint *)(gen_frame + 0x24)) = uVar11;
                if ((short)(*(int * PTR32 *)(gen_frame + 0x14)) != 0) {
                  iVar13 = *((int *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x44)) + uVar5 * 4 - 4)));
                  if ((((iVar13 != 0) && (10000 < *((uint *)GEN_TOP((iVar13 + 4))))) || (uVar11 == 0)) ||
                     (piVar14 = (*(int * PTR32 *)(gen_frame + 0x4)), *((uint *)GEN_TOP((uVar11 + 4))) < 0x2711)) {
                    if (((iVar13 == 0) || (*((uint *)GEN_TOP((iVar13 + 4))) < 0x2711)) ||
                       ((uVar11 != 0 && (10000 < *((uint *)GEN_TOP((uVar11 + 4))))))) goto LAB_005a7b23;
                    piVar14 = ((int *)GEN_TOP(((int)piVar3 + (uint)*(ushort *)(piVar3 + 6))));
                  }
                  (*(int * PTR32 *)(gen_frame + 0x48)) = piVar14;
                  piVar3 = piVar14;
                }
LAB_005a7b23: ;
                if (*((short *)GEN_TOP(((int)piVar3 + 0x56))) != 0) {
                  (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 1;
                }
                uVar7 = (uint)*((ushort *)GEN_TOP((uVar11 + 0x18)));
                if (uVar7 == 2) {
                  iVar13 = *((int *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x44)) + uVar5 * 4)));
                  if ((iVar13 != 0) && (piVar3 + 0x16 != ((int *)GEN_TOP(0x0)))) {
                    *((short *)GEN_TOP((iVar13 + 0x90))) = (short)piVar3[0x17];
                    *((byte *)GEN_TOP((iVar13 + 0x93))) =
                         *((byte *)GEN_TOP((iVar13 + 0x93))) ^
                         (*(byte *)(piVar3 + 0x18) ^ *((byte *)GEN_TOP((iVar13 + 0x93)))) & 1;
                    *((byte *)GEN_TOP((iVar13 + 0x93))) =
                         (*((byte *)GEN_TOP(((int)piVar3 + 0x61))) & 1) * '\x02' |
                         *((byte *)GEN_TOP((iVar13 + 0x93))) & 0xf1;
                    *((undefined1 *)GEN_TOP((iVar13 + 0x92))) = *((undefined1 *)GEN_TOP(((int)piVar3 + 0x62)));
                    *((byte *)GEN_TOP((iVar13 + 0x93))) =
                         *((byte *)GEN_TOP((iVar13 + 0x93))) ^
                         (*((char *)GEN_TOP(((int)piVar3 + 99))) << 4 ^ *((byte *)GEN_TOP((iVar13 + 0x93)))) & 0x70;
                  }
                  iVar4 = piVar3[0x16];
                  if (iVar4 == 0) {
                    if (iVar13 != 0) {
                      (*(uint *)(gen_frame + 0x0)) = (uint)*((ushort *)GEN_TOP((iVar13 + 0x7e)));
                      (*(uint *)(gen_frame + 0xc)) = (uint)*((ushort *)GEN_TOP((iVar13 + 0x7c)));
                    }
                    uVar5 = F_0055d500((*(int * PTR32 *)(gen_frame + 0x30)),(*(uint *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x0)));
                    *((uint *)GEN_TOP((iVar13 + 0x8c))) = uVar5;
                  }
                  else if (*((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4c)) + 0x12))) != 0) {
                    uVar5 = 0;
                    piVar14 = ((int *)GEN_TOP((*(undefined4 * PTR32 *)(gen_frame + 0x4c))[1]));
                    do {
                      if (*piVar14 == iVar4) {
                        *((int * PTR32 *)GEN_TOP((iVar13 + 0x8c))) = ((int *)GEN_TOP((*(undefined4 * PTR32 *)(gen_frame + 0x4c))[1])) + uVar5 * 3;
                        break;
                      }
                      uVar5 = uVar5 + 1;
                      piVar14 = piVar14 + 3;
                      piVar3 = (*(int * PTR32 *)(gen_frame + 0x48));
                    } while (uVar5 < *((ushort *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4c)) + 0x12))));
                  }
                  (*(int * PTR32 *)(gen_frame + 0x4)) = piVar3;
                  if (**((int * PTR32 *)GEN_TOP((iVar13 + 0x8c))) == 0) {
                    *((byte *)GEN_TOP((iVar13 + 0x93))) = *((byte *)GEN_TOP((iVar13 + 0x93))) | 0x80;
                  }
                  else {
                    *((byte *)GEN_TOP((iVar13 + 0x93))) = *((byte *)GEN_TOP((iVar13 + 0x93))) & 0x7f;
                  }
                }
                else {
                  (*(int * PTR32 *)(gen_frame + 0x4)) = piVar3;
                  if (uVar7 == 3) {
                    iVar13 = *((int *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x44)) + uVar5 * 4)));
                    uVar5 = F_0042a990(iVar13 + 0x9c GEN_EDX_ARG);
                    *((uint *)GEN_TOP((iVar13 + 0xf0))) = uVar5;
                    F_0055cd00(iVar13,piVar3 + 0x16);
                  }
                  else if (uVar7 == 4) {
                    iVar13 = *((int *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x44)) + uVar5 * 4)));
                    F_0055ced0(iVar13,piVar3 + 0x16);
                    iVar4 = piVar3[0x16];
                    if (iVar4 == 0) {
                      if (iVar13 != 0) {
                        (*(uint *)(gen_frame + 0x28)) = (uint)*((ushort *)GEN_TOP((iVar13 + 0x7c)));
                        (*(int * PTR32 *)(gen_frame + 0x10)) = ((int *)GEN_TOP((uint)*((ushort *)GEN_TOP((iVar13 + 0x7e)))));
                      }
                      uVar5 = F_0055d500((*(int * PTR32 *)(gen_frame + 0x30)),(*(uint *)(gen_frame + 0x28)),(*(int * PTR32 *)(gen_frame + 0x10)));
                      *((uint *)GEN_TOP((iVar13 + 0x8c))) = uVar5;
                    }
                    else {
                      uVar5 = 0;
                      (*(int * PTR32 *)(gen_frame + 0x4)) = (*(int * PTR32 *)(gen_frame + 0x48));
                      if (*((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4c)) + 0x12))) != 0) {
                        piVar14 = ((int *)GEN_TOP((*(undefined4 * PTR32 *)(gen_frame + 0x4c))[1]));
                        do {
                          if (*piVar14 == iVar4) {
                            *((int * PTR32 *)GEN_TOP((iVar13 + 0x8c))) = ((int *)GEN_TOP((*(undefined4 * PTR32 *)(gen_frame + 0x4c))[1])) + uVar5 * 3;
                            (*(int * PTR32 *)(gen_frame + 0x4)) = piVar3;
                            break;
                          }
                          uVar5 = uVar5 + 1;
                          piVar14 = piVar14 + 3;
                          piVar3 = (*(int * PTR32 *)(gen_frame + 0x48));
                        } while (uVar5 < *((ushort *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4c)) + 0x12))));
                      }
                    }
                  }
                  else if (uVar7 == 5) {
                    pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x44)) + uVar5 * 4)));
                    if ((pvVar6 != ((undefined *)GEN_TOP(0x0))) && (piVar3 + 0x16 != ((int *)GEN_TOP(0x0)))) {
                      *((uint *)GEN_TOP(((int)pvVar6 + 0x90))) = (uint)*(byte *)(piVar3 + 0x17);
                      *((undefined1 *)GEN_TOP(((int)pvVar6 + 0x94))) = *((undefined1 *)GEN_TOP(((int)piVar3 + 0x5d)));
                      *((undefined1 *)GEN_TOP(((int)pvVar6 + 0x95))) = *((undefined1 *)GEN_TOP(((int)piVar3 + 0x5f)));
                      *((undefined1 *)GEN_TOP(((int)pvVar6 + 0x96))) = *((undefined1 *)GEN_TOP(((int)piVar3 + 0x5e)));
                      *((short *)GEN_TOP(((int)pvVar6 + 0x98))) = (short)piVar3[0x18];
                    }
                    F_0056a940((*(undefined4 * PTR32 *)(gen_frame + 0x4c)) GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0x30)),pvVar6,(int)pvVar6 + 0x8c,piVar3[0x16]);
                    F_0042e430(((undefined *)GEN_TOP(((int)pvVar6 + 0xa0))) GEN_EDX_ARG,&REFG(undefined, 0x109fe50));
                    uVar5 = F_0042a990((int)pvVar6 + 0xa0 GEN_EDX_ARG);
                    *((uint *)GEN_TOP(((int)pvVar6 + 0xf4))) = uVar5;
                    F_0055ae90(pvVar6 GEN_EDX_ARG);
                  }
                  else if (uVar7 == 6) {
                    iVar13 = *((int *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x44)) + uVar5 * 4)));
                    uVar5 = F_0042a990(iVar13 + 0x9c GEN_EDX_ARG);
                    *((uint *)GEN_TOP((iVar13 + 0xf0))) = uVar5;
                    F_0055cfa0(iVar13,piVar3 + 0x16);
                  }
                  else if (uVar7 == 7) {
                    iVar13 = *((int *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x44)) + uVar5 * 4)));
                    uVar5 = F_0042a990(iVar13 + 0x9c GEN_EDX_ARG);
                    *((uint *)GEN_TOP((iVar13 + 0xf0))) = uVar5;
                    F_0055d100(iVar13,piVar3 + 0x16);
                  }
                  else if (uVar7 == 8) {
                    F_0055d180(*((undefined4 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x44)) + uVar5 * 4))),piVar3 + 0x16);
                  }
                  else if (uVar7 == 9) {
                    F_0055d1e0(*((undefined4 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x44)) + uVar5 * 4))),piVar3 + 0x16);
                  }
                  else if (((999 < *((ushort *)GEN_TOP((uVar11 + 0x18)))) &&
                           (uVar11 = F_0055d610(param_1,uVar7), (*(int * PTR32 *)(gen_frame + 0x4)) = (*(int * PTR32 *)(gen_frame + 0x48)), uVar11 != 0))
                          && (piVar3 = ((int *)GEN_TOP(F_005a5ee0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x10))) GEN_EDX_ARG,
                                                           (uint)*((byte *)GEN_TOP((uVar11 + 7)))))),
                             (*(int * PTR32 *)(gen_frame + 0x4)) = (*(int * PTR32 *)(gen_frame + 0x48)), piVar3 != ((int *)GEN_TOP(0x0)))) {
                    iVar13 = *((int *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x44)) + uVar5 * 4)));
                    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG);
                    piVar3[0x1c] = (*(uint *)(gen_frame + 0x24));
                    *((int * PTR32 *)GEN_TOP((iVar13 + 0x8c))) = piVar3;
                    piVar3[8] = (*(undefined4 * PTR32 *)(gen_frame + 0x4c))[7];
                    F_005a62e0(piVar3 + 1 GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((*(uint *)(gen_frame + 0x24)) + 0x18))),&(*(int *)(gen_frame + 0x1c)),
                                 *(*(undefined4 * PTR32 *)(gen_frame + 0x4c)),(*(undefined4 * PTR32 *)(gen_frame + 0x4c))[1],(uint)*(ushort *)((*(undefined4 * PTR32 *)(gen_frame + 0x4c)) + 4),
                                 (uint)*((ushort *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4c)) + 0x12))),(*(undefined4 * PTR32 *)(gen_frame + 0x4c))[0xd],
                                 (uint)(*(byte *)((*(undefined4 * PTR32 *)(gen_frame + 0x4c)) + 0x17) >> 1 & 1));
                    uVar5 = F_00578ee0(piVar3 + 1 GEN_EDX_ARG,0);
                    if ((uVar5 != 0) && (*((int *)GEN_TOP((uVar5 + 8))) == 0)) {
                      *((uint *)GEN_TOP((uVar5 + 8))) = (*(uint *)(gen_frame + 0x24));
                    }
                    F_0055c600((*(uint *)(gen_frame + 0x24)),piVar3,*((undefined1 *)GEN_TOP((uVar11 + 7))),(*(int * PTR32 *)(gen_frame + 0x48)));
                    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x40))))(piVar3 GEN_EDX_ARG,piVar3[4]);
                    (*(int * PTR32 *)(gen_frame + 0x4)) = (*(int * PTR32 *)(gen_frame + 0x48));
                    if ((*(byte *)(piVar3 + 0x18) & 2) != 0) {
                      *(byte *)((*(undefined4 * PTR32 *)(gen_frame + 0x4c)) + 0x17) = *(byte *)((*(undefined4 * PTR32 *)(gen_frame + 0x4c)) + 0x17) | 2;
                    }
                  }
                }
                piVar3 = (*(int * PTR32 *)(gen_frame + 0x4));
                if (*((uint *)GEN_TOP(((*(uint *)(gen_frame + 0x24)) + 4))) < 0x2711) {
                  piVar3 = ((int *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x4)) + (uint)*(ushort *)((*(int * PTR32 *)(gen_frame + 0x4)) + 6))));
                  (*(int * PTR32 *)(gen_frame + 0x48)) = piVar3;
                }
                uVar5 = (uint)((int)(*(int * PTR32 *)(gen_frame + 0x14)) + 1) & 0xffff;
                (*(int * PTR32 *)(gen_frame + 0x14)) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x14)) + 1)));
              } while (uVar5 < (uint)(*(int * PTR32 *)(gen_frame + 0x44))[-1]);
            }
            (*(int * PTR32 *)(gen_frame + 0x44)) = (*(int * PTR32 *)(gen_frame + 0x44)) + 6;
            (*(int *)(gen_frame + 0x34)) = (*(int *)(gen_frame + 0x34)) + (uint)*((ushort *)GEN_TOP(((*(int *)(gen_frame + 0x34)) + 0xe)));
            (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
          } while ((*(uint *)(gen_frame + 0x8)) < *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x20)) + 8))));
        }
        puVar15 = (*(undefined4 * PTR32 *)(gen_frame + 0x4c));
        F_0058f9f0((*(undefined4 * PTR32 *)(gen_frame + 0x4c)) GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0x30)),param_1,param_2,(*(int *)(gen_frame + 0x1c)));
        F_00406810((*(undefined * PTR32 *)(gen_frame + 0x3c)));
        F_00406810((*(uint *)(gen_frame + 0x18)));
        F_00587440(puVar15 GEN_EDX_ARG);
        F_005964f0(puVar15 GEN_EDX_ARG);
        iVar13 = puVar15[2];
        param_2 = 0;
        param_1 = 0;
        if (iVar13 != 0) {
          param_2 = *((int *)GEN_TOP((iVar13 + 8)));
          param_1 = *((uint *)GEN_TOP((iVar13 + 4)));
        }
        uVar5 = 0;
        if (param_1 != 0) {
          do {
            iVar13 = *((int *)GEN_TOP((param_2 + uVar5 * 4)));
            if (999 < *((ushort *)GEN_TOP((iVar13 + 0x18)))) {
              iVar13 = *((int *)GEN_TOP((iVar13 + 0x8c)));
              if (((*((byte *)GEN_TOP((iVar13 + 0x60))) & 1) == 0) ||
                 (iVar4 = *((int *)GEN_TOP((iVar13 + 0xc))), iVar4 == 0)) {
LAB_005a8029: ;
                uVar11 = 0;
              }
              else {
                if (*((int *)GEN_TOP((iVar4 + 4))) == 0) {
                  iVar4 = 0;
                  for (piVar3 = *((int * PTR32 *)GEN_TOP((iVar13 + 0x4c))); piVar3 != *((int * PTR32 *)GEN_TOP((iVar13 + 0x50)));
                      piVar3 = piVar3 + 1) {
                    iVar16 = iVar4 - (((int *)GEN_TOP(*piVar3)))[1];
                    if (iVar16 < 0) {
                      uVar11 = iVar4 * 0x90 + *((int *)GEN_TOP(*piVar3));
                      goto LAB_005a802b;
                    }
                    iVar4 = iVar16;
                  }
                  goto LAB_005a8029;
                }
                uVar11 = **((uint * PTR32 *)GEN_TOP((iVar4 + 8)));
              }
LAB_005a802b: ;
              *((uint *)GEN_TOP((uVar11 + 0x84))) = *((uint *)GEN_TOP((uVar11 + 0x84))) | 0x800000;
              iVar13 = *((int *)GEN_TOP((param_2 + uVar5 * 4)));
              F_0057f1a0(uVar11,(uint)*((ushort *)GEN_TOP((uVar11 + 0x7c))),(uint)*((ushort *)GEN_TOP((uVar11 + 0x7e))),
                           (uint)*((ushort *)GEN_TOP((iVar13 + 0x7c))),(uint)*((ushort *)GEN_TOP((iVar13 + 0x7e))),0);
              puVar15 = (*(undefined4 * PTR32 *)(gen_frame + 0x4c));
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < param_1);
        }
        iVar13 = puVar15[2];
        if ((iVar13 != 0) && (*((int *)GEN_TOP((iVar13 + 4))) != 0)) {
          iVar13 = **((int * PTR32 *)GEN_TOP((iVar13 + 8)));
          if (iVar13 != 0) {
            F_0057f0d0(puVar15 GEN_EDX_ARG,iVar13,*((undefined4 *)GEN_TOP((iVar13 + 8))),0);
          }
          (*(int * PTR32 *)(gen_frame + 0x4)) = ((int *)GEN_TOP(0x0));
          if (param_1 != 0) {
            do {
              iVar13 = *((int *)GEN_TOP((param_2 + (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x4))) * 4)));
              if (((999 < *((ushort *)GEN_TOP((iVar13 + 0x18)))) &&
                  (iVar4 = *((int *)GEN_TOP((iVar13 + 0x8c))), (*((byte *)GEN_TOP((iVar4 + 0x60))) & 1) != 0)) &&
                 (iVar16 = *((int *)GEN_TOP((iVar4 + 0xc))), iVar16 != 0)) {
                if (*((int *)GEN_TOP((iVar16 + 4))) == 0) {
                  iVar16 = 0;
                  for (piVar3 = *((int * PTR32 *)GEN_TOP((iVar4 + 0x4c))); piVar3 != *((int * PTR32 *)GEN_TOP((iVar4 + 0x50)));
                      piVar3 = piVar3 + 1) {
                    iVar18 = iVar16 - (((int *)GEN_TOP(*piVar3)))[1];
                    if (iVar18 < 0) {
                      pvVar6 = ((undefined *)GEN_TOP((iVar16 * 0x90 + *((int *)GEN_TOP(*piVar3)))));
                      goto LAB_005a810c;
                    }
                    iVar16 = iVar18;
                  }
                }
                else {
                  pvVar6 = ((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((iVar16 + 8)))));
LAB_005a810c: ;
                  if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
                    F_0055a960(pvVar6 GEN_EDX_ARG,iVar13);
                  }
                }
              }
              (*(int * PTR32 *)(gen_frame + 0x4)) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x4)) + 1)));
            } while ((*(int * PTR32 *)(gen_frame + 0x4)) < param_1);
          }
        }
        return 0;
      }
    }
  }
  return 0xfffffffd;
  while( true ) {
    uVar5 = uVar5 + 1;
    piVar14 = piVar14 + 1;
    if (*((uint *)GEN_TOP(((*(undefined4 * PTR32 *)(gen_frame + 0x4c))[2] + 4))) <= uVar5) break;
LAB_005a7652: ;
    if (*((int *)GEN_TOP((*piVar14 + 4))) == *((int *)GEN_TOP((iVar4 + 8)))) {
      iVar16 = piVar3[uVar5];
      if ((iVar16 != 0) && (*((int *)GEN_TOP((iVar16 + 0x14))) == *((int *)GEN_TOP((iVar4 + 4))))) {
        *((uint *)GEN_TOP((iVar16 + 0x14))) = (*(uint *)(gen_frame + 0x0));
      }
      break;
    }
  }
  goto LAB_005a7769;
  while( true ) {
    uVar11 = uVar11 + 1;
    piVar14 = piVar14 + 1;
    if (*((uint *)GEN_TOP(((*(undefined4 * PTR32 *)(gen_frame + 0x4c))[2] + 4))) <= uVar11) break;
LAB_005a7578: ;
    if (*((int *)GEN_TOP((*piVar14 + 4))) == *((int *)GEN_TOP((uVar5 + 8)))) {
      iVar16 = piVar3[uVar11];
      if ((iVar16 != 0) && (*((int *)GEN_TOP((iVar16 + 0x14))) == *((int *)GEN_TOP((uVar5 + 4))))) {
        *((undefined4 *)GEN_TOP((iVar16 + 0x14))) = *((undefined4 *)GEN_TOP((iVar4 + 4)));
      }
      break;
    }
  }
LAB_005a7769: ;
  uVar5 = (*(uint *)(gen_frame + 0x2c)) + 1;
  (*(uint *)(gen_frame + 0x2c)) = uVar5;
  if ((ushort)(*(uint *)(gen_frame + 0x28)) <= (ushort)uVar5) goto LAB_005a777a;
  goto LAB_005a7473;
}

/* ref: FUN_005a8130 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005a8130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5a8130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  int iVar8;
  
  if ((*((byte *)GEN_TOP(((int)this + 0x5c))) & 1) != 0) {
    if ((*((int *)GEN_TOP(((int)this + 0x20))) == 1) && (*((int *)GEN_TOP(((int)this + 0x1c))) != 0)) {
      piVar4 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0x88)));
      iVar1 = _InterlockedExchangeAdd((volatile gen_long *)(piVar4), 0);
      if (iVar1 == 2) {
        piVar4 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 0x8c)));
        iVar1 = _InterlockedExchangeAdd((volatile gen_long *)(piVar4), 0);
        if (7 < iVar1) {
          *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 4;
          return;
        }
        *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 2;
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) + 0x5c))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_FWD);
        F_005a7200(this GEN_EDX_ARG,*((int *)GEN_TOP((uVar5 + 8))) + uVar5,*((int *)GEN_TOP((uVar5 + 0xc))) + uVar5);
        if (((*((byte *)GEN_TOP(((int)this + 0x5c))) & 2) == 0) && (*((int *)GEN_TOP(((int)this + 0x1c))) != 0)) {
          F_0050c620(*((int *)GEN_TOP(((int)this + 0x1c))),0,0);
          *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
        }
      }
    }
    if (*((int *)GEN_TOP(((int)this + 0x20))) == 2) {
      if ((*(int *)this != 0) && (uVar7 = 0, *((short *)GEN_TOP(((int)this + 0x10))) != 0)) {
        do {
          uVar5 = (uint)uVar7;
          if ((((*((int *)GEN_TOP((*(int *)this + 8 + uVar5 * 0x10))) != 0) ||
               ((iVar1 = *((int *)GEN_TOP((*(int *)this + uVar5 * 0x10 + 0xc))), iVar1 == 0 ||
                (uVar6 = F_00572c50(iVar1), uVar6 != 2)))) &&
              (*((int *)GEN_TOP((*(int *)this + 8 + uVar5 * 0x10))) == 0)) &&
             ((iVar1 = *((int *)GEN_TOP((*(int *)this + uVar5 * 0x10 + 0xc))), iVar1 != 0 &&
              (uVar5 = F_00572c50(iVar1), uVar5 != 0)))) goto LAB_005a827d;
          uVar7 = uVar7 + 1;
        } while (uVar7 < *((ushort *)GEN_TOP(((int)this + 0x10))));
      }
      iVar1 = *((int *)GEN_TOP(((int)this + 8)));
      iVar8 = 0;
      uVar5 = 0;
      if (iVar1 != 0) {
        iVar8 = *((int *)GEN_TOP((iVar1 + 8)));
        uVar5 = *((uint *)GEN_TOP((iVar1 + 4)));
      }
      uVar6 = 0;
      if (uVar5 != 0) {
        do {
          iVar1 = *((int *)GEN_TOP((iVar8 + uVar6 * 4)));
          if ((999 < *((ushort *)GEN_TOP((iVar1 + 0x18)))) &&
             ((iVar1 = *((int *)GEN_TOP((iVar1 + 0x8c))), (*((byte *)GEN_TOP((iVar1 + 0x60))) & 1) == 0 ||
              (*((int *)GEN_TOP((iVar1 + 0x24))) != 3)))) goto LAB_005a827d;
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar5);
      }
      *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 3;
    }
LAB_005a827d: ;
    if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
      piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3c)));
      for (piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 0x38))); piVar4 != piVar2; piVar4 = piVar4 + 1) {
        iVar1 = *piVar4;
        if (((iVar1 != 0) && (999 < *((ushort *)GEN_TOP((iVar1 + 0x18))))) &&
           (piVar3 = *((int * PTR32 *)GEN_TOP((iVar1 + 0x8c))), piVar3 != ((int *)GEN_TOP(0x0)))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG);
        }
      }
    }
  }
  return;
}

/* ref: FUN_005a82c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005a82c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x5a82c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_FRAME_DECL_TOP(0x34, 12, 4);
  undefined * this_00;
  uint uVar1;
  uint * puVar2;
  uint * puVar3;
  uint * puVar4;
  int iVar5;
  int iVar6;
  int * piVar7;
  int * piVar8;
  undefined * this_01;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 * puVar12;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x2c)) = this;
  if ((((*((byte *)GEN_TOP(((int)this + 0x5c))) & 2) == 0) || (*((int *)GEN_TOP(((int)this + 0x1c))) == 0)) ||
     (param_2 == 0)) {
    return 0;
  }
  this_00 = ((undefined *)GEN_TOP(F_0055d920(this GEN_EDX_FWD,param_1)));
  if (((this_00 == ((undefined *)GEN_TOP(0x0))) || (*((ushort *)GEN_TOP(((int)this_00 + 0x18))) < 1000)) ||
     (*((int *)GEN_TOP(((int)this_00 + 0x8c))) == 0)) {
    return 0;
  }
  uVar1 = F_00404270();
  puVar2 = ((uint *)GEN_TOP(F_00406bd0(8,0,uVar1,0)));
  (*(uint * PTR32 *)(gen_frame + 0x24)) = puVar2;
  if (puVar2 != ((uint *)GEN_TOP(0x0))) {
    uVar9 = -(uint)((int)((ulonglong)param_2 * 0x90 >> 0x20) != 0) |
            (uint)((ulonglong)param_2 * 0x90);
    puVar3 = ((uint *)GEN_TOP(F_00406c00(-(uint)(0xfffffffb < uVar9) | uVar9 + 4,0,uVar1,0)));
    puVar12 = (*(undefined4 * PTR32 *)(gen_frame + 0x2c));
    if (puVar3 == ((uint *)GEN_TOP(0x0))) {
      puVar4 = ((uint *)GEN_TOP(0x0));
    }
    else {
      puVar4 = puVar3 + 1;
      *puVar3 = param_2;
      puVar3 = puVar4;
      uVar1 = param_2;
      while (uVar1 = uVar1 - 1, puVar2 = (*(uint * PTR32 *)(gen_frame + 0x24)), -1 < (int)uVar1) {
        puVar3[7] = 0;
        puVar3[0x20] = 0;
        puVar3[0x21] = 0;
        puVar3[0x22] = 0;
        puVar3[2] = 0;
        *puVar3 = (uint)(*(undefined * PTR32 (*)[3])REFP(0x10a0f44));
        puVar3 = puVar3 + 0x24;
      }
    }
    *puVar2 = (uint)puVar4;
    puVar2[1] = param_2;
    if (*puVar2 != 0) {
      F_005d3760((*(undefined4 * PTR32 *)(gen_frame + 0x2c)) + 0x12 GEN_EDX_ARG,&(*(uint * PTR32 *)(gen_frame + 0x24)));
      uVar1 = *(*(uint * PTR32 *)(gen_frame + 0x24));
      iVar5 = *((int *)GEN_TOP(((int)this_00 + 4)));
      (*(int *)(gen_frame + 0xc)) = *((int *)GEN_TOP(((int)this_00 + 0x10)));
      piVar7 = ((int *)GEN_TOP(puVar12[0xe]));
      (*(uint *)(gen_frame + 0x8)) = uVar1;
      (*(uint *)(gen_frame + 0x10)) = iVar5;
      (*(int * PTR32 *)(gen_frame + 0x28)) = piVar7;
      if (piVar7 != ((int *)GEN_TOP(puVar12[0xf]))) {
        do {
          if (*((int *)GEN_TOP((*piVar7 + 4))) == iVar5) break;
          piVar7 = piVar7 + 1;
        } while (piVar7 != ((int *)GEN_TOP(puVar12[0xf])));
        (*(int * PTR32 *)(gen_frame + 0x28)) = piVar7;
      }
      uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(puVar12[7])) + 0x5c))))(((int *)GEN_TOP(puVar12[7])) GEN_EDX_ARG);
      (*(int *)(gen_frame + 0x18)) = *((int *)GEN_TOP((uVar9 + 8))) + uVar9;
      iVar10 = *((int *)GEN_TOP((uVar9 + 0xc))) + uVar9;
      iVar5 = *((int *)GEN_TOP((iVar10 + 0x18)));
      iVar6 = puVar12[2];
      uVar9 = 0;
      (*(int *)(gen_frame + 0x20)) = 0;
      iVar5 = iVar5 + iVar10 + 0x20;
      param_1 = 0;
      if (*((int *)GEN_TOP((iVar6 + 4))) != 0) {
        do {
          iVar10 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar6 + 8))) + uVar9 * 4)));
          if (*((short *)GEN_TOP((iVar5 + 0x56))) != 0) {
            (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 1;
          }
          puVar12 = (*(undefined4 * PTR32 *)(gen_frame + 0x2c));
          if (*((int *)GEN_TOP((iVar10 + 4))) == *((int *)GEN_TOP(((int)this_00 + 4)))) break;
          iVar5 = iVar5 + (uint)*((ushort *)GEN_TOP((iVar5 + 0x18)));
          param_1 = param_1 + 1;
          uVar9 = param_1 & 0xffff;
        } while (uVar9 < *((uint *)GEN_TOP((iVar6 + 4))));
      }
      (*(uint *)(gen_frame + 0x14)) = 0;
      if (param_2 == 0) {
LAB_005a874d: ;
        *((short *)GEN_TOP(((int)puVar12 + 0x2e))) = *((short *)GEN_TOP(((int)puVar12 + 0x2e))) + (short)param_2;
        *((short *)GEN_TOP(((int)puVar12 + 0x16))) = *((short *)GEN_TOP(((int)puVar12 + 0x16))) + (short)param_2;
        return *(*(uint * PTR32 *)(gen_frame + 0x24));
      }
      (*(int *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x10)) * 10000;
      (*(uint *)(gen_frame + 0x10)) = 0;
LAB_005a8490: ;
      iVar5 = *((int *)GEN_TOP(((int)this_00 + 8)));
      F_0055aff0(this_00 GEN_EDX_ARG,uVar1);
      *((uint *)GEN_TOP((uVar1 + 4))) = (*(int *)(gen_frame + 0x4)) + (*(uint *)(gen_frame + 0x10)) + 1 + param_3;
      iVar6 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + 0x10))) + (*(int *)(gen_frame + 0x18));
      uVar9 = *((uint *)GEN_TOP((iVar6 + 8)));
      if (uVar9 != 0) {
        puVar2 = ((uint *)GEN_TOP((iVar6 + 0x10)));
        uVar11 = 0;
        if (uVar9 != 0) {
          do {
            if (*puVar2 == (uint)*((ushort *)GEN_TOP(((int)this_00 + 0x18)))) {
              (*(uint * PTR32 *)(gen_frame + 0x1c)) = puVar2;
              piVar7 = ((int *)GEN_TOP(F_005a5ee0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x10))) GEN_EDX_ARG,
                                           (uint)*((byte *)GEN_TOP(((int)puVar2 + 7))))));
              puVar12 = (*(undefined4 * PTR32 *)(gen_frame + 0x2c));
              if (piVar7 != ((int *)GEN_TOP(0x0))) {
                ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG);
                piVar7[0x1c] = uVar1;
                *((int * PTR32 *)GEN_TOP((uVar1 + 0x8c))) = piVar7;
                piVar7[8] = (*(undefined4 * PTR32 *)(gen_frame + 0x2c))[7];
                F_005a62e0(piVar7 + 1 GEN_EDX_ARG,(*(int *)(gen_frame + 0x18)),(uint)*((ushort *)GEN_TOP((uVar1 + 0x18))),&(*(int *)(gen_frame + 0x20)),*(*(undefined4 * PTR32 *)(gen_frame + 0x2c)),
                             (*(undefined4 * PTR32 *)(gen_frame + 0x2c))[1],(uint)*(ushort *)((*(undefined4 * PTR32 *)(gen_frame + 0x2c)) + 4),
                             (uint)*((ushort *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x2c)) + 0x12))),(*(undefined4 * PTR32 *)(gen_frame + 0x2c))[0xd],1);
                uVar9 = F_00578ee0(piVar7 + 1 GEN_EDX_ARG,0);
                if ((uVar9 != 0) && (*((int *)GEN_TOP((uVar9 + 8))) == 0)) {
                  *((uint *)GEN_TOP((uVar9 + 8))) = uVar1;
                }
                F_0055c8f0(piVar7,*((undefined1 *)GEN_TOP(((int)(*(uint * PTR32 *)(gen_frame + 0x1c)) + 7))),
                             *((undefined4 *)GEN_TOP(((int)this_00 + 0x8c))));
                *((uint *)GEN_TOP((uVar1 + 0x88))) =
                     *((uint *)GEN_TOP((uVar1 + 0x88))) ^
                     (*((uint *)GEN_TOP((uVar1 + 0x88))) ^ *((uint *)GEN_TOP(((int)this_00 + 0x88)))) & 8;
                uVar9 = (*((uint *)GEN_TOP(((int)this_00 + 0x88))) ^ *((uint *)GEN_TOP((uVar1 + 0x88)))) & 0x10 ^
                        *((uint *)GEN_TOP((uVar1 + 0x88)));
                *((uint *)GEN_TOP((uVar1 + 0x88))) = uVar9;
                uVar9 = (*((uint *)GEN_TOP(((int)this_00 + 0x88))) ^ uVar9) & 0x20 ^ uVar9;
                *((uint *)GEN_TOP((uVar1 + 0x88))) = uVar9;
                *((uint *)GEN_TOP((uVar1 + 0x88))) = (*((uint *)GEN_TOP(((int)this_00 + 0x88))) ^ uVar9) & 0x40 ^ uVar9;
                ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x40))))(piVar7 GEN_EDX_ARG,piVar7[4]);
                piVar8 = ((int *)GEN_TOP(F_005d3c50((*(undefined4 * PTR32 *)(gen_frame + 0x2c)) + 0xe GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(*(int * PTR32 *)(gen_frame + 0x28)) + 1,&(*(uint *)(gen_frame + 0x8)))));
                (*(int * PTR32 *)(gen_frame + 0x28)) = ((int *)GEN_TOP(*piVar8));
                if ((short)(*(uint *)(gen_frame + 0x14)) == 0) {
                  *((uint *)GEN_TOP(((int)this_00 + 0x10))) = uVar1;
                  *((undefined * PTR32 *)GEN_TOP((uVar1 + 0xc))) = this_00;
                  if (param_2 == 1) {
                    *((int *)GEN_TOP((uVar1 + 0x10))) = (*(int *)(gen_frame + 0xc));
                    if ((*(int *)(gen_frame + 0xc)) != 0) {
                      *((uint *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 0xc))) = uVar1;
                    }
                    goto joined_r0x005a862a;
                  }
                  *((uint *)GEN_TOP((uVar1 + 0x10))) = uVar1 + 0x90;
                  goto LAB_005a86bc;
                }
                if ((*(uint *)(gen_frame + 0x10)) == param_2 - 1) {
                  *((uint *)GEN_TOP((uVar1 + 0xc))) = uVar1 - 0x90;
                  *((int *)GEN_TOP((uVar1 + 0x10))) = (*(int *)(gen_frame + 0xc));
                  if ((*(int *)(gen_frame + 0xc)) != 0) {
                    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 0xc))) = uVar1;
                  }
                  goto joined_r0x005a8681;
                }
                *((uint *)GEN_TOP((uVar1 + 0xc))) = uVar1 - 0x90;
                *((uint *)GEN_TOP((uVar1 + 0x10))) = uVar1 + 0x90;
                goto LAB_005a86bc;
              }
              break;
            }
            uVar11 = uVar11 + 1;
            puVar2 = ((uint *)GEN_TOP(((int)puVar2 + (uint)(ushort)puVar2[3])));
            puVar12 = (*(undefined4 * PTR32 *)(gen_frame + 0x2c));
          } while ((uVar11 & 0xffff) < uVar9);
        }
      }
      goto LAB_005a8734;
    }
    F_00406ad0(puVar2);
  }
  return 0;
joined_r0x005a8681: ;
  if (iVar5 == 0) goto LAB_005a86bc;
  *((short *)GEN_TOP((iVar5 + 0x1a))) = *((short *)GEN_TOP((iVar5 + 0x1a))) + (short)param_2;
  if (*((undefined * PTR32 *)GEN_TOP((iVar5 + 0x14))) == this_00) {
    *((uint *)GEN_TOP((iVar5 + 0x14))) = uVar1;
  }
  if (*((int *)GEN_TOP((iVar5 + 4))) == 1) goto LAB_005a86bc;
  iVar5 = *((int *)GEN_TOP((iVar5 + 8)));
  goto joined_r0x005a8681;
joined_r0x005a862a: ;
  if (iVar5 == 0) goto LAB_005a86bc;
  *((short *)GEN_TOP((iVar5 + 0x1a))) = *((short *)GEN_TOP((iVar5 + 0x1a))) + 1;
  if (*((undefined * PTR32 *)GEN_TOP((iVar5 + 0x14))) == this_00) {
    *((uint *)GEN_TOP((iVar5 + 0x14))) = uVar1;
  }
  if (*((int *)GEN_TOP((iVar5 + 4))) == 1) goto LAB_005a86bc;
  iVar5 = *((int *)GEN_TOP((iVar5 + 8)));
  goto joined_r0x005a862a;
LAB_005a86bc: ;
  F_0058f840(((undefined *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 0x8c))) + 4))) GEN_EDX_ARG,(*(int *)(gen_frame + 0x18)),(uint)*((ushort *)GEN_TOP((uVar1 + 0x18))),
               (*(undefined4 * PTR32 *)(gen_frame + 0x2c))[10]);
  this_01 = ((undefined *)GEN_TOP(F_00578ee0(((undefined *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 0x8c))) + 4))) GEN_EDX_ARG,0)));
  *((uint *)GEN_TOP(((int)this_01 + 0x84))) = *((uint *)GEN_TOP(((int)this_01 + 0x84))) | 0x800000;
  F_0057f1a0((uint)this_01,(uint)*((ushort *)GEN_TOP(((int)this_01 + 0x7c))),
               (uint)*((ushort *)GEN_TOP(((int)this_01 + 0x7e))),(uint)*((ushort *)GEN_TOP((uVar1 + 0x7c))),
               (uint)*((ushort *)GEN_TOP((uVar1 + 0x7e))),0);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x18))))(piVar7 GEN_EDX_ARG);
  F_0055a960(this_01 GEN_EDX_ARG,uVar1);
  uVar1 = uVar1 + 0x90;
  (*(uint *)(gen_frame + 0x8)) = uVar1;
  puVar12 = (*(undefined4 * PTR32 *)(gen_frame + 0x2c));
LAB_005a8734: ;
  uVar9 = (*(uint *)(gen_frame + 0x14)) + 1;
  (*(uint *)(gen_frame + 0x14)) = uVar9;
  uVar9 = uVar9 & 0xffff;
  (*(uint *)(gen_frame + 0x10)) = uVar9;
  if (param_2 <= uVar9) goto LAB_005a874d;
  goto LAB_005a8490;
}

/* ref: Component::GUI2::AtkUnitBase::vf4 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005a8770(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5a8770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  byte bVar1;
  uint uVar2;
  
  param_1[0x48] = param_1[0x48] & 0xfff7ffff;
  if (param_2 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc4))))(param_1 GEN_EDX_FWD);
  }
  uVar2 = (uint)param_1[0x3d] >> 0x14 & 0xf;
  if ((uVar2 == 5) || (uVar2 == 4)) {
    bVar1 = *(byte *)(param_1 + 0x3e) & 0xbf;
    *(byte *)(param_1 + 0x3e) = (~bVar1 * '\x02' ^ bVar1) & 2 ^ bVar1;
    if (*((byte *)GEN_TOP(((int)param_1 + 0x13a))) == 0) {
      return 1;
    }
    (*(uint *)(gen_frame + 0xc)) = (uint)*((byte *)GEN_TOP(((int)param_1 + 0x13a)));
    (*(uint *)(gen_frame + 0x8)) = 4;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) + 4))))
              (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) GEN_EDX_ARG,((uint *)(gen_frame + 0x0)),2,1,&(*(uint *)(gen_frame + 0x8)));
    if ((((uint *)(gen_frame + 0x0))[0] >> 5 & 1) != 0) {
      F_005a0260(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
  }
  else {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x18))))(param_1 GEN_EDX_ARG,0,0);
    bVar1 = *((byte *)GEN_TOP(((int)param_1 + 0x13a)));
    *(byte *)(param_1 + 0x3e) = *(byte *)(param_1 + 0x3e) & 0xbf;
    if (bVar1 == 0) {
      return 1;
    }
    (*(uint *)(gen_frame + 0x8)) = 4;
    (*(uint *)(gen_frame + 0xc)) = (uint)bVar1;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) + 4))))
              (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) GEN_EDX_ARG,((uint *)(gen_frame + 0x0)),2,1,&(*(uint *)(gen_frame + 0x8)));
    if ((((uint *)(gen_frame + 0x0))[0] >> 5 & 1) != 0) {
      F_005a0260(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
  }
  if (((*(uint *)(gen_frame + 0x8)) >> 5 & 1) != 0) {
    F_005a0260(&(*(uint *)(gen_frame + 0x8)) GEN_EDX_ARG);
  }
  return 1;
}

/* ref: FUN_005a8890 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005a8890(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5a8890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  code * pcVar1;
  byte bVar2;
  uint uVar3;
  
  if (param_2 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc4))))(param_1 GEN_EDX_FWD);
  }
  uVar3 = (uint)param_1[0x3d] >> 0x14 & 0xf;
  if ((uVar3 == 5) || (uVar3 == 4)) {
    bVar2 = *(byte *)(param_1 + 0x3e) & 0xbf;
    *(byte *)(param_1 + 0x3e) = (~bVar2 * '\x02' ^ bVar2) & 2 ^ bVar2;
    if (*((byte *)GEN_TOP(((int)param_1 + 0x13a))) == 0) {
      return 1;
    }
    (*(uint *)(gen_frame + 0xc)) = (uint)*((byte *)GEN_TOP(((int)param_1 + 0x13a)));
    (*(uint *)(gen_frame + 0x8)) = 4;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) + 4))))
              (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) GEN_EDX_ARG,((uint *)(gen_frame + 0x0)),2,1,&(*(uint *)(gen_frame + 0x8)));
    if ((((uint *)(gen_frame + 0x0))[0] >> 5 & 1) != 0) {
      F_005a0260(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
  }
  else {
    pcVar1 = *((gen_code32 *)GEN_TOP((*param_1 + 0x18)));
    param_1[0x48] = param_1[0x48] | 0x80000;
    (*pcVar1)(param_1,0,0);
    bVar2 = *((byte *)GEN_TOP(((int)param_1 + 0x13a)));
    *(byte *)(param_1 + 0x3e) = *(byte *)(param_1 + 0x3e) & 0xbf;
    if (bVar2 == 0) {
      return 1;
    }
    (*(uint *)(gen_frame + 0x8)) = 4;
    (*(uint *)(gen_frame + 0xc)) = (uint)bVar2;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) + 4))))
              (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) GEN_EDX_ARG,((uint *)(gen_frame + 0x0)),2,1,&(*(uint *)(gen_frame + 0x8)));
    if ((((uint *)(gen_frame + 0x0))[0] >> 5 & 1) != 0) {
      F_005a0260(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
  }
  if (((*(uint *)(gen_frame + 0x8)) >> 5 & 1) != 0) {
    F_005a0260(&(*(uint *)(gen_frame + 0x8)) GEN_EDX_ARG);
  }
  return 1;
}

/* ref: FUN_005a89b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005a89b0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5a89b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  ushort uVar1;
  uint uVar2;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x14))) + 0x50))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x14))) GEN_EDX_FWD,param_1,0);
  uVar2 = *((uint *)GEN_TOP((param_1 + 0xf4))) >> 0x14 & 0xf;
  if ((uVar2 != 3) && (uVar2 != 2)) {
    uVar2 = 0;
    *((byte *)GEN_TOP((param_1 + 0xfa))) =
         *((byte *)GEN_TOP((param_1 + 0xfa))) ^ (param_2 * '\b' ^ *((byte *)GEN_TOP((param_1 + 0xfa)))) & 8;
    if (param_2 == '\0') {
      uVar1 = *((ushort *)GEN_TOP((param_1 + 0x136)));
      uVar2 = (uint)uVar1;
      if (0 < (short)uVar1) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) + 8))))
                  (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) GEN_EDX_ARG,((uint *)(gen_frame + 0x0)),(int)(short)uVar1);
        uVar2 = ((uint *)(gen_frame + 0x0))[0] >> 5;
        if ((uVar2 & 1) != 0) {
          uVar2 = F_005a0260(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
        }
      }
    }
    *((byte *)GEN_TOP((param_1 + 0xf8))) =
         *((byte *)GEN_TOP((param_1 + 0xf8))) ^ (param_3 << 6 ^ *((byte *)GEN_TOP((param_1 + 0xf8)))) & 0x40;
    if ('\0' < *((char *)GEN_TOP((param_1 + 0x10d)))) {
      *((char *)GEN_TOP((param_1 + 0x10d))) = *((char *)GEN_TOP((param_1 + 0x10d))) - 1;
    }
    uVar2 = CONCAT31((int3)(uVar2 >> 8),*((undefined1 *)GEN_TOP((param_1 + 0xf8)))) & 0xfffffffd;
    *((uint *)GEN_TOP((param_1 + 0xf4))) = *((uint *)GEN_TOP((param_1 + 0xf4))) & 0xff2fffff | 0x200000;
    *((char *)GEN_TOP((param_1 + 0xf8))) = (char)uVar2;
    *((undefined1 *)GEN_TOP((param_1 + 0xf4))) = 1;
    if (((*((char *)GEN_TOP((param_1 + 0x13c))) == '\0') || ((*((byte *)GEN_TOP((param_1 + 0xfb))) & 2) != 0)) &&
       ((*((byte *)GEN_TOP((param_1 + 0xf9))) & 0x40) == 0)) {
      if (*((char *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x1379860) + 0x18))) + 0xc6a))) == '\0') {
        uVar2 = F_0059b860(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x14))) GEN_EDX_ARG,param_1,0);
      }
      else if (-1 < (char)uVar2) {
        uVar2 = F_00587d80(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x14))) GEN_EDX_ARG,param_1);
        return uVar2;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_005a8af0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005a8af0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5a8af0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  uint * this_00;
  byte bVar1;
  int iVar2;
  byte * pbVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  byte * pbVar5;
  bool bVar6;
  undefined4 uVar7;
  
  pbVar5 = (*(byte * PTR32 *)&gen_args[1]);
  this_00 = (*(uint * PTR32 *)&gen_args[0]);
  if (((*(*(byte * PTR32 *)&gen_args[1]) & 0xf) == 0) || ((*(byte * PTR32 *)&gen_args[1]) = *((byte * PTR32 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[1]) + 4))), (*(byte * PTR32 *)&gen_args[1]) == ((byte *)GEN_TOP(0x0)))) {
    if ((*(*(uint * PTR32 *)&gen_args[0]) >> 5 & 1) != 0) {
      pbVar5 = ((byte *)GEN_TOP(F_005a0260((*(uint * PTR32 *)&gen_args[0]) GEN_EDX_FWD)));
    }
    *this_00 = 6;
    this_00[1] = 0;
    return (uint)pbVar5;
  }
  if ((((byte)*(*(uint * PTR32 *)&gen_args[0]) & 0xf) == 6) &&
     (pbVar5 = ((byte *)GEN_TOP((*(uint * PTR32 *)&gen_args[0])[1])), pbVar3 = (*(byte * PTR32 *)&gen_args[1]), pbVar5 != ((byte *)GEN_TOP(0x0)))) {
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_005a8b48: ;
        iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_005a8b4d;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_005a8b48;
      pbVar5 = pbVar5 + 2;
      pbVar3 = pbVar3 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_005a8b4d: ;
    if (iVar2 == 0) {
      return 0;
    }
  }
  pbVar5 = (*(byte * PTR32 *)&gen_args[1]) + 1;
  pbVar3 = (*(byte * PTR32 *)&gen_args[1]);
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
  } while (bVar1 != 0);
  uVar7 = 0;
  uVar4 = F_00404270();
  uVar4 = F_00406c00(pbVar3 + (1 - (int)pbVar5),0,uVar4,uVar7);
  (*(uint * PTR32 *)&gen_args[0]) = ((uint *)GEN_TOP(uVar4));
  F_00c46aa0(uVar4,(*(byte * PTR32 *)&gen_args[1]),pbVar3 + (1 - (int)pbVar5));
  if ((*this_00 >> 5 & 1) != 0) {
    F_005a0260(this_00 GEN_EDX_ARG);
  }
  *this_00 = 6;
  this_00[1] = uVar4;
  bVar1 = F_00579410(this GEN_EDX_ARG,uVar4);
  if (bVar1 != 0) {
    *this_00 = 0x26;
    return CONCAT31(extraout_var,bVar1);
  }
  uVar4 = F_005d37d0(((undefined *)GEN_TOP(((int)this + 0xe4))) GEN_EDX_ARG,&(*(uint * PTR32 *)&gen_args[0]));
  return uVar4;
}

/* ref: FUN_005a8c00 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_005a8c00(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(byte * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5a8c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  ushort uVar1;
  ushort * puVar2;
  longlong lVar3;
  ushort * puVar4;
  int iVar5;
  ushort * puVar6;
  uint uVar7;
  uint uVar8;
  byte * pbVar9;
  bool bVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  
  if (((*param_2 & 0xf) == 0) || (puVar2 = *(ushort * PTR32 *)(param_2 + 4), puVar2 == ((ushort *)GEN_TOP(0x0)))) {
    pbVar9 = param_2;
    if ((*param_1 >> 5 & 1) != 0) {
      pbVar9 = ((byte *)GEN_TOP(F_005a0260(param_1 GEN_EDX_ARG)));
    }
    *param_1 = 7;
    param_1[1] = 0;
    return (uint)pbVar9;
  }
  if ((((byte)*param_1 & 0xf) == 6) &&
     (puVar6 = ((ushort *)GEN_TOP(param_1[1])), puVar4 = puVar2, puVar6 != ((ushort *)GEN_TOP(0x0)))) {
    do {
      uVar1 = *puVar4;
      bVar10 = uVar1 < *puVar6;
      if (uVar1 != *puVar6) {
LAB_005a8c58: ;
        iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_005a8c5d;
      }
      if (uVar1 == 0) break;
      uVar1 = puVar4[1];
      bVar10 = uVar1 < puVar6[1];
      if (uVar1 != puVar6[1]) goto LAB_005a8c58;
      puVar6 = puVar6 + 2;
      puVar4 = puVar4 + 2;
    } while (uVar1 != 0);
    iVar5 = 0;
LAB_005a8c5d: ;
    if (iVar5 == 0) {
      return 0;
    }
  }
  puVar6 = puVar2;
  do {
    uVar1 = *puVar6;
    puVar6 = puVar6 + 1;
  } while (uVar1 != 0);
  uVar12 = 0;
  uVar8 = ((int)puVar6 - (int)(puVar2 + 1) >> 1) + 1;
  uVar7 = F_00404270();
  lVar3 = (ulonglong)uVar8 * 2;
  uVar7 = F_00406c00(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3,0,uVar7,uVar12);
  uVar11 = F_00c46aa0(uVar7,puVar2,uVar8 * 2);
  uVar8 = (uint)uVar11;
  if ((*param_1 >> 5 & 1) != 0) {
    uVar8 = F_005a0260(param_1 GEN_EDX_ARG);
  }
  param_1[1] = uVar7;
  *param_1 = 0x27;
  return uVar8;
}

/* ref: FUN_005a8d00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005a8d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5a8d00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  uint * this_00;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint * puVar5;
  undefined4 uVar6;
  int local_8;
  
  puVar1 = ((uint *)GEN_TOP((int)*((short *)GEN_TOP(((int)this + 0x138)))));
  if ((int)puVar1 < (int)param_1) {
    *((short *)GEN_TOP(((int)this + 0x138))) = (short)param_1;
    if (*((int *)GEN_TOP(((int)this + 0xe0))) != 0) {
      F_005d45c0(*((int *)GEN_TOP(((int)this + 0xe0))) GEN_EDX_FWD,3);
      *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = 0;
    }
    uVar6 = 0;
    uVar2 = F_00404270();
    uVar3 = -(uint)((int)((ulonglong)param_1 * 8 >> 0x20) != 0) | (uint)((ulonglong)param_1 * 8);
    puVar1 = ((uint *)GEN_TOP(F_00406c00(-(uint)(0xfffffffb < uVar3) | uVar3 + 4,0,uVar2,uVar6)));
    if (puVar1 == ((uint *)GEN_TOP(0x0))) {
      puVar1 = ((uint *)GEN_TOP(0x0));
    }
    else {
      *puVar1 = param_1;
      puVar1 = puVar1 + 1;
      puVar5 = puVar1;
      uVar2 = param_1;
      while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
        *puVar5 = 0;
        puVar5 = puVar5 + 2;
      }
    }
    *((uint * PTR32 *)GEN_TOP(((int)this + 0xe0))) = puVar1;
    iVar4 = 0;
    puVar5 = param_2;
    if (0 < (int)param_1) {
      do {
        if ((*puVar5 & 0xf) == 6) {
          uVar2 = F_005a8af0(this GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0xe0))) + iVar4 * 8,puVar5);
        }
        else {
          uVar2 = *((uint *)GEN_TOP(((int)this + 0xe0)));
          if ((*puVar5 & 0xf) == 7) {
            uVar2 = F_005a8c00(uVar2 + iVar4 * 8,puVar5);
          }
          else {
            puVar1 = ((uint *)GEN_TOP((uVar2 + iVar4 * 8)));
            if (puVar1 != puVar5) {
              if ((*puVar1 >> 5 & 1) != 0) {
                F_005a0260(puVar1 GEN_EDX_ARG);
              }
              uVar2 = *puVar5 & 0xf;
              if (uVar2 != 9) {
                *puVar1 = uVar2;
                uVar2 = puVar5[1];
                puVar1[1] = uVar2;
              }
              if ((*puVar5 >> 5 & 1) != 0) {
                uVar2 = F_00594f30(puVar1 GEN_EDX_ARG,puVar5);
              }
            }
          }
        }
        iVar4 = iVar4 + 1;
        puVar5 = puVar5 + 2;
      } while (iVar4 < (int)param_1);
      return uVar2;
    }
  }
  else {
    local_8 = 0;
    puVar5 = param_2;
    if (0 < (int)param_1) {
      do {
        this_00 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xe0))) + local_8 * 8)));
        puVar1 = ((uint *)GEN_TOP((*puVar5 & 0xf)));
        if ((((uint *)GEN_TOP((*this_00 & 0xf))) == puVar1) || (puVar1 != ((uint *)GEN_TOP(0x0)))) {
          if (puVar1 == (uint *)&REFG(undefined, 0x6)) {
            puVar1 = ((uint *)GEN_TOP(F_005a8af0(this GEN_EDX_ARG,this_00,puVar5)));
          }
          else {
            puVar1 = ((uint *)GEN_TOP(((int)puVar1 - 7)));
            if (puVar1 == ((uint *)GEN_TOP(0x0))) {
              puVar1 = ((uint *)GEN_TOP(F_005a8c00(this_00,puVar5)));
            }
            else if (this_00 != puVar5) {
              if ((*this_00 >> 5 & 1) != 0) {
                F_005a0260(this_00 GEN_EDX_ARG);
              }
              puVar1 = ((uint *)GEN_TOP((*puVar5 & 0xf)));
              if (puVar1 != ((uint *)GEN_TOP(0x9))) {
                *this_00 = (uint)puVar1;
                puVar1 = ((uint *)GEN_TOP(puVar5[1]));
                this_00[1] = (uint)puVar1;
              }
              if ((*puVar5 >> 5 & 1) != 0) {
                puVar1 = ((uint *)GEN_TOP(F_00594f30(this_00 GEN_EDX_ARG,puVar5)));
              }
            }
          }
        }
        local_8 = local_8 + 1;
        puVar5 = puVar5 + 2;
      } while (local_8 < (int)param_1);
    }
  }
  return (uint)puVar1;
}

/* ref: FUN_005a8ed0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005a8ed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5a8ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  byte bVar1;
  undefined4 * this_00;
  int iVar2;
  uint uVar3;
  uint * puVar4;
  uint * puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint * puVar9;
  undefined4 uVar10;
  
  puVar9 = (*(uint * PTR32 *)&gen_args[1]);
  iVar2 = (int)(*(uint * PTR32 *)&gen_args[0]);
  uVar8 = (int)(*(uint * PTR32 *)&gen_args[0]) + 1;
  uVar10 = 0;
  (*(int * PTR32 *)(gen_frame + 0x10)) = this;
  (*(uint *)(gen_frame + 0xc)) = uVar8;
  uVar3 = F_00404270();
  uVar6 = -(uint)((int)((ulonglong)uVar8 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar8 * 8);
  puVar4 = ((uint *)GEN_TOP(F_00406c00(-(uint)(0xfffffffb < uVar6) | uVar6 + 4,0,uVar3,uVar10)));
  if (puVar4 == ((uint *)GEN_TOP(0x0))) {
    (*(uint * PTR32 *)&gen_args[0]) = ((uint *)GEN_TOP(0x0));
  }
  else {
    *puVar4 = uVar8;
    puVar5 = puVar4 + 1;
    for (iVar7 = (int)(*(uint * PTR32 *)&gen_args[0]); (*(uint * PTR32 *)&gen_args[0]) = puVar4 + 1, -1 < iVar7; iVar7 = iVar7 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 2;
    }
  }
  bVar1 = *((byte *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x10)) + 0x13b)));
  if (bVar1 == 0) {
    bVar1 = *((byte *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x10)) + 0x13a)));
  }
  if ((*(*(uint * PTR32 *)&gen_args[0]) >> 5 & 1) != 0) {
    F_005a0260((*(uint * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  }
  *(*(uint * PTR32 *)&gen_args[0]) = 4;
  (*(uint * PTR32 *)&gen_args[0])[1] = (uint)bVar1;
  if (0 < iVar2) {
    puVar4 = (*(uint * PTR32 *)&gen_args[0]) + 3;
    (*(uint * PTR32 *)&gen_args[1]) = ((uint *)GEN_TOP(iVar2));
    do {
      if (puVar4 - 1 != puVar9) {
        if ((puVar4[-1] >> 5 & 1) != 0) {
          this_00 = ((undefined4 *)GEN_TOP(*puVar4));
          if (this_00 != ((undefined4 *)GEN_TOP(0x0))) {
            uVar8 = puVar4[-1] & 0xf;
            if (uVar8 == 9) {
              F_00488040(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),*this_00,this_00[1]);
              F_00488dc0(this_00 GEN_EDX_ARG);
              F_00406ad0(this_00);
            }
            else if ((uVar8 == 6) || (uVar8 == 7)) {
              F_00406ad0(this_00);
              *puVar4 = 0;
            }
          }
          *puVar4 = 0;
        }
        if ((*puVar9 & 0xf) != 9) {
          puVar4[-1] = *puVar9 & 0xf;
          *puVar4 = puVar9[1];
        }
        if ((*puVar9 >> 5 & 1) != 0) {
          F_00594f30(puVar4 - 1 GEN_EDX_ARG,puVar9);
        }
      }
      puVar9 = puVar9 + 2;
      puVar4 = puVar4 + 2;
      (*(uint * PTR32 *)&gen_args[1]) = ((uint *)GEN_TOP(((int)(*(uint * PTR32 *)&gen_args[1]) - 1)));
      uVar8 = (*(uint *)(gen_frame + 0xc));
    } while ((*(uint * PTR32 *)&gen_args[1]) != ((uint *)GEN_TOP(0x0)));
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) + 4))))
            (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0)),3,uVar8,(*(uint * PTR32 *)&gen_args[0]));
  F_005d45c0((*(uint * PTR32 *)&gen_args[0]) GEN_EDX_ARG,3);
  if ((((char)(*(undefined4 *)&gen_args[2]) != '\0') && (((*(uint *)(gen_frame + 0x0)) & 0xf) != 0)) && ((char)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) != '\0')) {
    if ((*(byte *)((*(int * PTR32 *)(gen_frame + 0x10)) + 0x3e) & 1) == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x10)) + 0x10))))((*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,0);
    }
    else {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x10)) + 0x18))))((*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,0,0);
    }
    if (((*(uint *)(gen_frame + 0x0)) >> 5 & 1) != 0) {
      F_005a0260(&(*(uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
    return 1;
  }
  if ((((*(uint *)(gen_frame + 0x0)) >> 5 & 1) != 0) && ((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar8 = (*(uint *)(gen_frame + 0x0)) & 0xf;
    if (uVar8 == 9) {
      F_00488040((*(undefined4 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[2]),*(*(undefined4 * PTR32 *)(gen_frame + 0x4)),(*(undefined4 * PTR32 *)(gen_frame + 0x4))[1]);
      F_00488dc0((*(undefined4 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      F_00406ad0((*(undefined4 * PTR32 *)(gen_frame + 0x4)));
      return 0;
    }
    if ((uVar8 == 6) || (uVar8 == 7)) {
      F_00406ad0((*(undefined4 * PTR32 *)(gen_frame + 0x4)));
    }
  }
  return 0;
}

/* ref: FUN_005a9110 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005a9110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5a9110u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_005a8ed0(this GEN_EDX_FWD,param_1,param_2,1);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_005a9130 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005a9130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5a9130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  byte bVar1;
  
  (*(uint *)(gen_frame + 0x0)) = 3;
  (*(undefined4 *)(gen_frame + 0x4)) = param_1;
  bVar1 = F_005a8ed0(this GEN_EDX_FWD,1,&(*(uint *)(gen_frame + 0x0)),1);
  if (((*(uint *)(gen_frame + 0x0)) >> 5 & 1) != 0) {
    F_005a0260(&(*(uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  return bVar1;
}

/* ref: FUN_005a9170 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005a9170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5a9170u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_005a8ed0(this GEN_EDX_FWD,param_1,param_2,0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Component::GUI2::AtkUnitBase::vf49 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005a9190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5a9190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  ((uint *)(gen_frame + 0x0))[0] = 3;
  ((uint *)(gen_frame + 0x0))[1] = 0xfffffffe;
  bVar1 = F_005a8ed0(this GEN_EDX_FWD,1,((uint *)(gen_frame + 0x0)),0);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if ((((uint *)(gen_frame + 0x0))[0] >> 5 & 1) != 0) {
    uVar2 = F_005a0260(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: FUN_005a91d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005a91d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5a91d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x38, 8, 4);
  int iVar1;
  undefined4 * this_00;
  uint uVar2;
  uint * puVar3;
  uint * puVar4;
  
  (*(uint *)(gen_frame + 0x30)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x34);
  (*(uint *)(gen_frame + 0x10)) = (uint)*((byte *)GEN_TOP(((int)this + 0x13a)));
  (*(undefined4 *)(gen_frame + 0x18)) = param_1;
  (*(undefined4 *)(gen_frame + 0xc)) = 4;
  (*(undefined4 *)(gen_frame + 0x14)) = 4;
  (*(undefined4 *)(gen_frame + 0x1c)) = 4;
  (*(undefined4 *)(gen_frame + 0x20)) = param_2;
  (*(uint *)(gen_frame + 0x24)) = 2;
  ((undefined1 *)(gen_frame + 0x28))[0] = 0;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) + 4))))
            (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0)),5,4,&(*(undefined4 *)(gen_frame + 0xc)));
  if (((*(uint *)(gen_frame + 0x0)) >> 5 & 1) != 0) {
    F_005a0260(&(*(uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  (*(int *)(gen_frame + 0x8)) = 3;
  puVar3 = &(*(uint *)(gen_frame + 0x30));
  do {
    uVar2 = puVar3[-3];
    puVar4 = puVar3 - 2;
    if ((uVar2 >> 5 & 1) != 0) {
      this_00 = ((undefined4 *)GEN_TOP(*puVar4));
      if (this_00 != ((undefined4 *)GEN_TOP(0x0))) {
        uVar2 = uVar2 & 0xf;
        if (uVar2 == 9) {
          F_00488040(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),*this_00,this_00[1]);
          F_00488dc0(this_00 GEN_EDX_ARG);
          uVar2 = F_00406ad0(this_00);
        }
        else if ((uVar2 == 6) || (uVar2 == 7)) {
          uVar2 = F_00406ad0(this_00);
          *puVar4 = 0;
        }
      }
      *puVar4 = 0;
    }
    iVar1 = (*(int *)(gen_frame + 0x8)) - 1;
    (*(int *)(gen_frame + 0x8)) = iVar1;
    puVar3[-3] = 0;
    puVar3 = puVar4;
  } while (-1 < iVar1);
  return uVar2;
}

/* ref: FUN_005a92d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005a92d0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x5a92d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_FRAME_DECL_TOP(0x38, 8, 4);
  int iVar1;
  undefined4 * this;
  uint uVar2;
  uint * puVar3;
  uint * puVar4;
  
  (*(uint *)(gen_frame + 0x30)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x34);
  (*(uint *)(gen_frame + 0x10)) = (uint)*((byte *)GEN_TOP((param_1 + 0x13a)));
  (*(undefined4 *)(gen_frame + 0x18)) = param_2;
  (*(undefined4 *)(gen_frame + 0x20)) = param_3;
  (*(undefined4 *)(gen_frame + 0xc)) = 4;
  (*(undefined4 *)(gen_frame + 0x14)) = 4;
  (*(undefined4 *)(gen_frame + 0x1c)) = 4;
  ((undefined1 *)(gen_frame + 0x28))[0] = param_4;
  (*(uint *)(gen_frame + 0x24)) = 2;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) + 4))))
            (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0)),6,4,&(*(undefined4 *)(gen_frame + 0xc)));
  if (((*(uint *)(gen_frame + 0x0)) >> 5 & 1) != 0) {
    F_005a0260(&(*(uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  (*(int *)(gen_frame + 0x8)) = 3;
  puVar3 = &(*(uint *)(gen_frame + 0x30));
  do {
    uVar2 = puVar3[-3];
    puVar4 = puVar3 - 2;
    if ((uVar2 >> 5 & 1) != 0) {
      this = ((undefined4 *)GEN_TOP(*puVar4));
      if (this != ((undefined4 *)GEN_TOP(0x0))) {
        uVar2 = uVar2 & 0xf;
        if (uVar2 == 9) {
          F_00488040(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),*this,this[1]);
          F_00488dc0(this GEN_EDX_ARG);
          uVar2 = F_00406ad0(this);
        }
        else if ((uVar2 == 6) || (uVar2 == 7)) {
          uVar2 = F_00406ad0(this);
          *puVar4 = 0;
        }
      }
      *puVar4 = 0;
    }
    iVar1 = (*(int *)(gen_frame + 0x8)) - 1;
    (*(int *)(gen_frame + 0x8)) = iVar1;
    puVar3[-3] = 0;
    puVar3 = puVar4;
  } while (-1 < iVar1);
  return uVar2;
}

/* ref: FUN_005a93d0 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_005a93d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(ushort * param_1, unsigned int gen_a1), GEN_P(ushort * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x5a93d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a1;)
  GEN_PIN(ushort * param_2 = (ushort *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x58, 8, 4);
  byte bVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  uint * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  float fVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x50)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x54));
  bVar1 = *((byte *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x1379860) + 0x14))) + 0x1b0)));
  (*(ushort * PTR32 *)(gen_frame + 0x14)) = param_2;
  if ((bVar1 & 0x20) == 0) {
    return 0;
  }
  if (((*((byte *)GEN_TOP(((int)this + 0xfa))) & 0x40) == 0) ||
     ((*((uint *)GEN_TOP(((int)this + 0x120))) >> 0xf & 1) != 0)) {
    puVar5 = ((uint *)GEN_TOP(0x0));
    ((uint *)(gen_frame + 0x0))[0] = 0;
    ((uint *)(gen_frame + 0x0))[2] = 0;
    F_00c472af(((undefined1 *)(gen_frame + 0x2c)),0x24,&REFG(undefined, 0x109feb0),(int)this + 4);
    if ((((uint *)(gen_frame + 0x0))[0] >> 5 & 1) != 0) {
      F_005a0260(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
    ((uint *)(gen_frame + 0x0))[0] = 3;
    ((uint *)(gen_frame + 0x0))[1] = 0;
    if ((((uint *)(gen_frame + 0x0))[2] >> 5 & 1) != 0) {
      F_005a0260(((uint *)(gen_frame + 0x0)) + 2 GEN_EDX_ARG);
    }
    ((undefined1 * PTR32 *)(gen_frame + 0xc))[0] = ((undefined1 *)(gen_frame + 0x2c));
    ((uint *)(gen_frame + 0x0))[2] = 6;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) + 4))))
              (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x1c)),0x13,2,((uint *)(gen_frame + 0x0)));
    if ((((*((byte *)GEN_TOP(((int)this + 0x80))) & 1) != 0) && ((*((byte *)GEN_TOP(((int)this + 0x80))) & 4) != 0)) &&
       (*((char *)GEN_TOP(((int)this + 0x3c))) == '\x02')) {
      puVar5 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2c))) + 0xc)));
    }
    if (((((byte)(*(uint *)(gen_frame + 0x1c)) & 0xf) == 9) && ((*(int * PTR32 *)(gen_frame + 0x20)) != ((int *)GEN_TOP(0x0)))) &&
       ((7 < (uint)((*(int * PTR32 *)(gen_frame + 0x20))[1] - *(*(int * PTR32 *)(gen_frame + 0x20)) >> 3) && (puVar5 != ((uint *)GEN_TOP(0x0)))))) {
      uVar3 = *((uint *)GEN_TOP(((int)this + 0x120)));
      (*(uint *)(gen_frame + 0x24)) = 0;
      if ((uVar3 >> 0xf & 1) == 0) {
        F_0056c4c0(&(*(uint *)(gen_frame + 0x1c)) GEN_EDX_ARG,0,&(*(uint *)(gen_frame + 0x24)));
        *puVar5 = -(uint)(((*(uint *)(gen_frame + 0x24)) & 0xf) != 0) & (uint)gen_fl2bits((*(float *)(gen_frame + 0x28)));
        F_0056c4c0(&(*(uint *)(gen_frame + 0x1c)) GEN_EDX_ARG,1,&(*(uint *)(gen_frame + 0x24)));
        fVar8 = (*(float *)(gen_frame + 0x28));
        if (((*(uint *)(gen_frame + 0x24)) & 0xf) == 0) {
          fVar8 = 0.0;
        }
        puVar5[1] = (uint)gen_fl2bits(fVar8);
        F_0056c4c0(&(*(uint *)(gen_frame + 0x1c)) GEN_EDX_ARG,2,&(*(uint *)(gen_frame + 0x24)));
        fVar8 = (*(float *)(gen_frame + 0x28));
        if (((*(uint *)(gen_frame + 0x24)) & 0xf) == 0) {
          fVar8 = 0.0;
        }
        puVar5[2] = (uint)gen_fl2bits(fVar8);
        F_0056c4c0(&(*(uint *)(gen_frame + 0x1c)) GEN_EDX_ARG,6,&(*(uint *)(gen_frame + 0x24)));
        fVar8 = (*(float *)(gen_frame + 0x28));
        if (((*(uint *)(gen_frame + 0x24)) & 0xf) == 0) {
          fVar8 = 0.0;
        }
        (*(float *)(gen_frame + 0x18)) = fVar8;
        F_0056b4e0(this GEN_EDX_ARG,fVar8);
        F_0056c4c0(&(*(uint *)(gen_frame + 0x1c)) GEN_EDX_ARG,3,&(*(uint *)(gen_frame + 0x24)));
        *param_1 = ((short)(char)((byte)(*(uint *)(gen_frame + 0x24)) & 0xf) - (short)(char)((byte)(*(uint *)(gen_frame + 0x24)) & 0xf)) -
                   (ushort)(((*(uint *)(gen_frame + 0x24)) & 0xf) != 0) & (ushort)(uint)gen_fl2bits((*(float *)(gen_frame + 0x28)));
        F_0056c4c0(&(*(uint *)(gen_frame + 0x1c)) GEN_EDX_ARG,4,&(*(uint *)(gen_frame + 0x24)));
        *(*(ushort * PTR32 *)(gen_frame + 0x14)) = ((short)(char)((byte)(*(uint *)(gen_frame + 0x24)) & 0xf) - (short)(char)((byte)(*(uint *)(gen_frame + 0x24)) & 0xf)) -
                    (ushort)(((*(uint *)(gen_frame + 0x24)) & 0xf) != 0) & (ushort)(uint)gen_fl2bits((*(float *)(gen_frame + 0x28)));
        F_0056c4c0(&(*(uint *)(gen_frame + 0x1c)) GEN_EDX_ARG,7,&(*(uint *)(gen_frame + 0x24)));
        *((uint *)GEN_TOP(((int)this + 0xfc))) = -(uint)(((*(uint *)(gen_frame + 0x24)) & 0xf) != 0) & (uint)gen_fl2bits((*(float *)(gen_frame + 0x28)));
      }
      else {
        F_0056c4c0(&(*(uint *)(gen_frame + 0x1c)) GEN_EDX_ARG,0,&(*(uint *)(gen_frame + 0x24)));
        F_0056c4c0(&(*(uint *)(gen_frame + 0x1c)) GEN_EDX_ARG,1,&(*(uint *)(gen_frame + 0x24)));
        F_0056c4c0(&(*(uint *)(gen_frame + 0x1c)) GEN_EDX_ARG,2,&(*(uint *)(gen_frame + 0x24)));
        F_0056c4c0(&(*(uint *)(gen_frame + 0x1c)) GEN_EDX_ARG,6,&(*(uint *)(gen_frame + 0x24)));
        fVar8 = (*(float *)(gen_frame + 0x28));
        if (((*(uint *)(gen_frame + 0x24)) & 0xf) == 0) {
          fVar8 = 0.0;
        }
        (*(float *)(gen_frame + 0x18)) = fVar8;
        F_0056b4e0(this GEN_EDX_ARG,fVar8);
        F_0056c4c0(&(*(uint *)(gen_frame + 0x1c)) GEN_EDX_ARG,3,&(*(uint *)(gen_frame + 0x24)));
        F_0056c4c0(&(*(uint *)(gen_frame + 0x1c)) GEN_EDX_ARG,4,&(*(uint *)(gen_frame + 0x24)));
        F_0056c4c0(&(*(uint *)(gen_frame + 0x1c)) GEN_EDX_ARG,7,&(*(uint *)(gen_frame + 0x24)));
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xdc))))(this GEN_EDX_ARG,param_3);
      if (((*(uint *)(gen_frame + 0x24)) >> 5 & 1) != 0) {
        F_005a0260(&(*(uint *)(gen_frame + 0x24)) GEN_EDX_ARG);
      }
      (*(uint *)(gen_frame + 0x24)) = 0;
      if (((*(uint *)(gen_frame + 0x1c)) >> 5 & 1) != 0) {
        F_005a0260(&(*(uint *)(gen_frame + 0x1c)) GEN_EDX_ARG);
      }
      (*(uint *)(gen_frame + 0x1c)) = 0;
      (*(float *)(gen_frame + 0x18)) = 1.4013e-45;
      puVar6 = &(*(ushort * PTR32 *)(gen_frame + 0x14));
      do {
        puVar7 = puVar6 - 2;
        if (((uint)puVar6[-3] >> 5 & 1) != 0) {
          puVar2 = ((undefined4 *)GEN_TOP(*puVar7));
          if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
            uVar3 = puVar6[-3] & 0xf;
            if (uVar3 == 9) {
              F_00488040(puVar2 GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x14)),*puVar2,puVar2[1]);
              F_00488dc0(puVar2 GEN_EDX_ARG);
              F_00406ad0(puVar2);
            }
            else if ((uVar3 == 6) || (uVar3 == 7)) {
              F_00406ad0(puVar2);
              *puVar7 = 0;
            }
          }
          *puVar7 = 0;
        }
        iVar4 = (int)gen_fl2bits((*(float *)(gen_frame + 0x18))) - 1;
        (*(float *)(gen_frame + 0x18)) = gen_bits2f(iVar4);
        puVar6[-3] = 0;
        puVar6 = puVar7;
      } while (-1 < iVar4);
      return 1;
    }
    if (((*(uint *)(gen_frame + 0x1c)) >> 5 & 1) != 0) {
      F_005a0260(&(*(uint *)(gen_frame + 0x1c)) GEN_EDX_ARG);
    }
    (*(uint *)(gen_frame + 0x1c)) = 0;
    iVar4 = 1;
    puVar6 = &(*(ushort * PTR32 *)(gen_frame + 0x14));
    do {
      puVar7 = puVar6 - 2;
      if (((uint)puVar6[-3] >> 5 & 1) != 0) {
        puVar2 = ((undefined4 *)GEN_TOP(*puVar7));
        if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
          uVar3 = puVar6[-3] & 0xf;
          if (uVar3 == 9) {
            F_00488040(puVar2 GEN_EDX_ARG,&(*(ushort * PTR32 *)(gen_frame + 0x14)),*puVar2,puVar2[1]);
            F_00488dc0(puVar2 GEN_EDX_ARG);
            F_00406ad0(puVar2);
          }
          else if ((uVar3 == 6) || (uVar3 == 7)) {
            F_00406ad0(puVar2);
            *puVar7 = 0;
          }
        }
        *puVar7 = 0;
      }
      iVar4 = iVar4 - 1;
      puVar6[-3] = 0;
      puVar6 = puVar7;
    } while (-1 < iVar4);
  }
  return 0;
}

/* ref: Component::GUI2::AtkUnitBase::vf31 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005a97f0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5a97f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_FRAME_DECL_TOP(0x98, 8, 4);
  float fVar1;
  byte bVar2;
  code * pcVar3;
  undefined4 * this;
  uint uVar4;
  int iVar5;
  uint * puVar6;
  uint * puVar7;
  
  uVar4 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x94);
  (*(uint *)(gen_frame + 0x90)) = uVar4;
  if ((((*((byte *)GEN_TOP(((int)param_1 + 0xf9))) & 1) != 0) &&
      (uVar4 = REFG(undefined4, 0x1379860), (*((byte *)GEN_TOP((*((int *)GEN_TOP((REFG(undefined4, 0x1379860) + 0x14))) + 0x1b0))) & 0x20) != 0)) &&
     (((*((byte *)GEN_TOP(((int)param_1 + 0xfa))) & 0x40) == 0 || (((uint)param_1[0x48] >> 0xf & 1) != 0)))) {
    bVar2 = *(byte *)(param_1 + 0x20);
    uVar4 = CONCAT31((int3)(REFG(undefined4, 0x1379860) >> 8),bVar2);
    if ((((bVar2 & 1) != 0) && ((bVar2 & 4) != 0)) && ((char)param_1[0xf] == '\x02')) {
      iVar5 = param_1[0xb];
      uVar4 = 0;
      if (((undefined4 *)GEN_TOP((iVar5 + 0xc))) != ((undefined4 *)GEN_TOP(0x0))) {
        pcVar3 = *((gen_code32 *)GEN_TOP((*param_1 + 0x48)));
        ((uint *)(gen_frame + 0x18))[0] = 0;
        ((uint *)(gen_frame + 0x18))[2] = 0;
        ((undefined4 *)(gen_frame + 0x28))[0] = 0;
        (*(uint *)(gen_frame + 0x30)) = 0;
        (*(uint *)(gen_frame + 0x38)) = 0;
        ((undefined4 *)(gen_frame + 0x40))[0] = 0;
        ((undefined4 *)(gen_frame + 0x48))[0] = 0;
        ((undefined4 *)(gen_frame + 0x50))[0] = 0;
        (*(uint *)(gen_frame + 0x58)) = 0;
        ((uint *)(gen_frame + 0x60))[0] = 0;
        (*pcVar3)(param_1,((ushort *)(gen_frame + 0x8)),((ushort *)(gen_frame + 0xc)),0);
        F_00c472af(((uint *)(gen_frame + 0x60)) + 3,0x24,&REFG(undefined, 0x109feb8),param_1 + 1);
        if ((((uint *)(gen_frame + 0x18))[0] >> 5 & 1) != 0) {
          F_005a0260(((uint *)(gen_frame + 0x18)) GEN_EDX_ARG);
        }
        ((uint *)(gen_frame + 0x18))[0] = 3;
        ((uint *)(gen_frame + 0x18))[1] = 1;
        F_004311d0(((uint *)(gen_frame + 0x18)) + 2 GEN_EDX_ARG,((uint *)(gen_frame + 0x60)) + 3);
        F_005d43e0(((undefined4 *)(gen_frame + 0x28)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar5 + 0xc))));
        (*(float *)(gen_frame + 0x14)) = *((float *)GEN_TOP((iVar5 + 0x10)));
        if (((*(uint *)(gen_frame + 0x30)) >> 5 & 1) != 0) {
          F_005a0260(&(*(uint *)(gen_frame + 0x30)) GEN_EDX_ARG);
        }
        (*(float *)(gen_frame + 0x34)) = (*(float *)(gen_frame + 0x14));
        fVar1 = *((float *)GEN_TOP((iVar5 + 0x14)));
        (*(uint *)(gen_frame + 0x30)) = 5;
        (*(float *)(gen_frame + 0x14)) = fVar1;
        if (((*(uint *)(gen_frame + 0x38)) >> 5 & 1) != 0) {
          F_005a0260(&(*(uint *)(gen_frame + 0x38)) GEN_EDX_ARG);
        }
        (*(uint *)(gen_frame + 0x38)) = 5;
        (*(float *)(gen_frame + 0x3c)) = (*(float *)(gen_frame + 0x14));
        F_004311b0(((undefined4 *)(gen_frame + 0x40)) GEN_EDX_ARG,(uint)((ushort *)(gen_frame + 0x8))[0]);
        F_004311b0(((undefined4 *)(gen_frame + 0x48)) GEN_EDX_ARG,(uint)((ushort *)(gen_frame + 0xc))[0]);
        F_005d43a0(((undefined4 *)(gen_frame + 0x50)) GEN_EDX_ARG,*((byte *)GEN_TOP(((int)param_1 + 0x126))) & 1);
        (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF((((float10)1 / ((float10)GEN_TOD(gen_bits2f(param_1[0x47])))) *
                          ((float10)GEN_TOD(gen_bits2f(param_1[0x46]))))));
        if (((*(uint *)(gen_frame + 0x58)) >> 5 & 1) != 0) {
          F_005a0260(&(*(uint *)(gen_frame + 0x58)) GEN_EDX_ARG);
        }
        iVar5 = param_1[0x3f];
        (*(uint *)(gen_frame + 0x58)) = 5;
        (*(float *)(gen_frame + 0x5c)) = (*(float *)(gen_frame + 0x14));
        F_004311b0(((uint *)(gen_frame + 0x60)) GEN_EDX_ARG,iVar5);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(undefined4, 0x1379860) + 0x38))) + 4))))
                  (*((int * PTR32 *)GEN_TOP((REFG(undefined4, 0x1379860) + 0x38))) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x10)),0x13,10,((uint *)(gen_frame + 0x18)));
        if (((*(uint *)(gen_frame + 0x10)) >> 5 & 1) != 0) {
          F_005a0260(&(*(uint *)(gen_frame + 0x10)) GEN_EDX_ARG);
        }
        if (param_2 != '\0') {
          (*(uint *)(gen_frame + 0x10)) = 3;
          (*(float *)(gen_frame + 0x14)) = 4.2039e-45;
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(undefined4, 0x1379860) + 0x38))) + 4))))
                    (*((int * PTR32 *)GEN_TOP((REFG(undefined4, 0x1379860) + 0x38))) GEN_EDX_ARG,((uint *)(gen_frame + 0x0)),0x13,1,&(*(uint *)(gen_frame + 0x10)));
          if ((((uint *)(gen_frame + 0x0))[0] >> 5 & 1) != 0) {
            F_005a0260(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
          }
          if (((*(uint *)(gen_frame + 0x10)) >> 5 & 1) != 0) {
            F_005a0260(&(*(uint *)(gen_frame + 0x10)) GEN_EDX_ARG);
          }
        }
        iVar5 = 9;
        puVar6 = ((uint *)(gen_frame + 0x60)) + 3;
        do {
          uVar4 = puVar6[-3];
          puVar7 = puVar6 - 2;
          if ((uVar4 >> 5 & 1) != 0) {
            this = ((undefined4 *)GEN_TOP(*puVar7));
            if (this != ((undefined4 *)GEN_TOP(0x0))) {
              uVar4 = uVar4 & 0xf;
              if (uVar4 == 9) {
                F_00488040(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x14)),*this,this[1]);
                F_00488dc0(this GEN_EDX_ARG);
                uVar4 = F_00406ad0(this);
              }
              else if ((uVar4 == 6) || (uVar4 == 7)) {
                uVar4 = F_00406ad0(this);
                *puVar7 = 0;
              }
            }
            *puVar7 = 0;
          }
          iVar5 = iVar5 - 1;
          puVar6[-3] = 0;
          puVar6 = puVar7;
        } while (-1 < iVar5);
      }
    }
  }
  return uVar4;
}

/* ref: FUN_005a9af0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005a9af0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5a9af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int iVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar2 = ((int *)GEN_TOP(F_00561680((*(undefined4 *)&gen_args[0]))));
  (*(int * PTR32 *)(gen_frame + 0x8)) = piVar2;
  if (piVar2 == ((int *)GEN_TOP(0x0))) {
    (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[0]) + 3)) = 1;
  }
  else if (piVar2[0x1c] == 0) {
    (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[0]) + 3)) = 0;
  }
  else {
    (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[0]) + 3)) = (byte)(*((uint *)GEN_TOP((piVar2[0x1c] + 0x88))) >> 0x11) & 1;
  }
  (*(int *)(gen_frame + 0x4)) = 100;
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    while (0 < (*(int *)(gen_frame + 0x4))) {
      uVar3 = F_0055e5c0(piVar2,(*(undefined4 *)&gen_args[1]),(undefined1)(*(undefined4 *)&gen_args[2]));
      if ((int)uVar3 < 1) {
        return 0;
      }
      if (uVar3 == 0xff) {
        return 0;
      }
      if (uVar3 == 0) {
        return 0;
      }
      piVar2 = ((int *)GEN_TOP(F_00573130(param_1 + 0x24,uVar3,1,0)));
      if (piVar2 == ((int *)GEN_TOP(0x0))) {
        return 0;
      }
      if ((*(int * PTR32 *)(gen_frame + 0x8)) == piVar2) {
        return 0;
      }
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x3c))))(piVar2 GEN_EDX_ARG);
      if (uVar3 == 0) {
        return 0;
      }
      iVar1 = piVar2[0x1c];
      if (iVar1 != 0) {
        if (((*((uint *)GEN_TOP((iVar1 + 0x84))) & 0x100000) == 0) ||
           ((*((uint *)GEN_TOP((iVar1 + 0x88))) & 0x20000) != 0)) {
          if ((iVar1 != 0) &&
             ((((*((uint *)GEN_TOP((iVar1 + 0x88))) >> 0x11 & 1) != 0 && ((*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[0]) + 3)) == 0)) &&
              ((*((uint *)GEN_TOP((param_1 + 0x120))) >> 0xe & 1) == 0)))) {
            if (((*(byte *)&gen_args[3]) & 2) != 0) {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) + 8))))
                        (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0)),0);
              if (((*(uint *)(gen_frame + 0x0)) >> 5 & 1) != 0) {
                F_005a0260(&(*(uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
              }
              F_0059b460(param_1 GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0x8)),(uint)piVar2);
            }
            if (((*(byte *)&gen_args[3]) & 1) != 0) {
              F_0059b1c0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x18))) GEN_EDX_ARG,uVar3,param_1,(*(undefined4 *)&gen_args[1]));
            }
            *((uint *)GEN_TOP((param_1 + 0xa4))) = uVar3;
            return 1;
          }
        }
        else {
          if (((*(byte *)&gen_args[3]) & 2) == 0) {
LAB_005a9c48: ;
            iVar1 = REFG(int, 0x1379860);
            if (((*(byte *)&gen_args[3]) & 1) != 0) {
              uVar4 = param_1;
              if (param_1 == 0) {
                uVar4 = F_0057f8d0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x14))) GEN_EDX_ARG,uVar3);
              }
              F_0059b1c0(*((undefined * PTR32 *)GEN_TOP((iVar1 + 0x18))) GEN_EDX_ARG,uVar3,uVar4,(*(undefined4 *)&gen_args[1]));
            }
            *((uint *)GEN_TOP((param_1 + 0xa4))) = uVar3;
            return 1;
          }
          if (((iVar1 == 0) || ((*((uint *)GEN_TOP((iVar1 + 0x88))) >> 0x12 & 1) == 0)) ||
             ((*((uint *)GEN_TOP((param_1 + 0x120))) >> 0xe & 1) == 0)) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) + 8))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0)),0);
            if (((*(uint *)(gen_frame + 0x0)) >> 5 & 1) != 0) {
              F_005a0260(&(*(uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
            }
            if ((piVar2[0x1c] != 0) && ((*((uint *)GEN_TOP((piVar2[0x1c] + 0x88))) >> 0x12 & 1) != 0)) {
              F_0059b460(param_1 GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0x8)),(uint)piVar2);
            }
            goto LAB_005a9c48;
          }
        }
      }
      piVar2 = ((int *)GEN_TOP(F_00561680(uVar3)));
      if ((*(int * PTR32 *)(gen_frame + 0x8)) == piVar2) {
        return 0;
      }
      (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) - 1;
      if (piVar2 == ((int *)GEN_TOP(0x0))) {
        return 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_005a9d30 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005a9d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5a9d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0x18c, 4, 4);
  undefined4 * puVar1;
  int * piVar2;
  int * piVar3;
  code * pcVar4;
  uint uVar5;
  int iVar6;
  
  if (param_1 != 0) {
    for (puVar1 = ((undefined4 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xb4)))));
        puVar1 != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xb4))); puVar1 = ((undefined4 *)GEN_TOP(*puVar1))) {
      if (*((byte *)GEN_TOP((puVar1[2] + 0x13a))) == param_1) {
        piVar2 = ((int *)GEN_TOP(puVar1[2]));
        if (piVar2 == ((int *)GEN_TOP(0x0))) {
          return 0;
        }
        if (((((*((byte *)GEN_TOP(((int)this + 0x1b0))) & 0x10) != 0) &&
             ((*((byte *)GEN_TOP(((int)piVar2 + 0xfa))) & 0x20) == 0)) &&
            ((uVar5 = (uint)piVar2[0x3d] >> 0x14 & 0xf, uVar5 == 3 || (uVar5 == 2)))) &&
           (((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) + 8))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) GEN_EDX_ARG,((uint *)(gen_frame + 0x180)),0x18), (((uint *)(gen_frame + 0x180))[0] >> 5 & 1) != 0)) {
          F_005a0260(((uint *)(gen_frame + 0x180)) GEN_EDX_ARG);
        }
        if ((*((byte *)GEN_TOP(((int)piVar2 + 0xfa))) & 0x80) != 0) {
          uVar5 = F_005801e0(this GEN_EDX_ARG,((int *)(gen_frame + 0x0)),(uint)*((byte *)GEN_TOP(((int)piVar2 + 0x13a))),0x60);
          if (0 < (int)uVar5) {
            iVar6 = 0;
            do {
              piVar3 = ((int *)GEN_TOP(((int *)(gen_frame + 0x0))[(int)(iVar6)]));
              if (piVar3 != ((int *)GEN_TOP(0x0))) {
                pcVar4 = *((gen_code32 *)GEN_TOP((*piVar3 + 0x10)));
                *(byte *)(piVar3 + 0x3e) = *(byte *)(piVar3 + 0x3e) & 0xfe;
                (*pcVar4)(piVar3,1);
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < (int)uVar5);
          }
          pcVar4 = *((gen_code32 *)GEN_TOP((*piVar2 + 0x10)));
          *(byte *)(piVar2 + 0x3e) = *(byte *)(piVar2 + 0x3e) & 0xfe;
          (*pcVar4)(piVar2,1);
          return 1;
        }
        if ((*(byte *)(piVar2 + 0x3e) & 1) != 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_ARG,0,1);
          return 0;
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG,1);
        return 1;
      }
    }
  }
  return 0;
}

/* ref: Component::GUI2::AtkUnitManager::vf10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005a9e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x5a9e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint in_EAX = 0;
  uint uVar1;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    F_005a8d00(param_1 GEN_EDX_FWD,param_2,param_3);
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xb8))))(param_1 GEN_EDX_ARG,param_2,param_1[0x38]);
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_005a9ea0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005a9ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5a9ea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  byte bVar5;
  int * piVar6;
  
  iVar4 = param_1[0x43];
  piVar6 = param_1;
  if ((char)iVar4 != '\0') {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0xb4)));
    piVar2 = ((int *)GEN_TOP(*piVar1));
    piVar6 = piVar1;
    while (piVar2 != piVar1) {
      piVar3 = ((int *)GEN_TOP(piVar2[2]));
      piVar2 = ((int *)GEN_TOP(*piVar2));
      if ((piVar3 != param_1) && ((char)piVar3[0x43] == (char)iVar4)) {
        piVar6 = ((int *)GEN_TOP(F_0057f930(this GEN_EDX_FWD,piVar3)));
        if (piVar6 != ((int *)GEN_TOP(0x0))) {
          if (((uint)piVar6[0x48] >> 0x12 & 1) == 0) {
            if ((*(byte *)(piVar6 + 0x3e) & 1) == 0) {
              F_005a8890(piVar6 GEN_EDX_ARG,1);
            }
            else {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x18))))(piVar6 GEN_EDX_ARG,1,0);
            }
          }
          else {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x1c))))(piVar6 GEN_EDX_ARG,1);
          }
        }
        if (((uint)piVar3[0x48] >> 0x12 & 1) == 0) {
          if ((*(byte *)(piVar3 + 0x3e) & 1) == 0) {
            bVar5 = F_005a8890(piVar3 GEN_EDX_ARG,1);
            piVar6 = ((int *)GEN_TOP((uint)bVar5));
          }
          else {
            piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG,1,0)));
          }
        }
        else {
          piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x1c))))(piVar3 GEN_EDX_ARG,1)));
        }
      }
    }
  }
  return (byte)piVar6;
}

/* ref: FUN_005a9f80 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005a9f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5a9f80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  
  if (*((char *)GEN_TOP(((int)this + 0xe))) == '\0') {
    *((undefined1 *)GEN_TOP(((int)this + 0xe))) = 1;
    *(undefined4 *)this = 0;
    ((uint *)(gen_frame + 0x8))[0] = 4;
    ((uint *)(gen_frame + 0x8))[1] = 0;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) + 4))))
              (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) GEN_EDX_ARG,((uint *)(gen_frame + 0x0)),0xb,1,((uint *)(gen_frame + 0x8)));
    if ((((uint *)(gen_frame + 0x0))[0] >> 5 & 1) != 0) {
      F_005a0260(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
    if ((((uint *)(gen_frame + 0x8))[0] >> 5 & 1) != 0) {
      F_005a0260(((uint *)(gen_frame + 0x8)) GEN_EDX_ARG);
    }
  }
  return;
}

/* ref: FUN_005a9ff0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005a9ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5a9ff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  
  if (*((char *)GEN_TOP(((int)this + 0xe))) != '\0') {
    *((undefined1 *)GEN_TOP(((int)this + 0xe))) = 0;
    *(undefined4 *)this = 0x11;
    ((uint *)(gen_frame + 0x8))[0] = 4;
    ((uint *)(gen_frame + 0x8))[1] = 0x11;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) + 4))))
              (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) GEN_EDX_ARG,((uint *)(gen_frame + 0x0)),0xb,1,((uint *)(gen_frame + 0x8)));
    if ((((uint *)(gen_frame + 0x0))[0] >> 5 & 1) != 0) {
      F_005a0260(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
    if ((((uint *)(gen_frame + 0x8))[0] >> 5 & 1) != 0) {
      F_005a0260(((uint *)(gen_frame + 0x8)) GEN_EDX_ARG);
    }
  }
  return;
}

/* ref: FUN_005aa060 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005aa060(GEN_P(uint * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5aa060u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint in_EAX = 0;
  
  if ((((*((char *)GEN_TOP(((int)param_1 + 0xf))) == '\0') && (*((char *)GEN_TOP(((int)param_1 + 0xe))) != '\0')) &&
      (*((char *)GEN_TOP(((int)param_1 + 0x11))) != '\0')) &&
     (((*param_1 <= param_2 || (param_2 == 0)) || (param_3 != '\0')))) {
    (*(uint *)(gen_frame + 0x8)) = 4;
    (*(uint *)(gen_frame + 0xc)) = param_2;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) + 4))))
              (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) GEN_EDX_ARG,((uint *)(gen_frame + 0x0)),0xb,1,&(*(uint *)(gen_frame + 0x8)));
    in_EAX = ((uint *)(gen_frame + 0x0))[0] >> 5;
    if ((in_EAX & 1) != 0) {
      in_EAX = F_005a0260(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
    *param_1 = param_2;
    if (((*(uint *)(gen_frame + 0x8)) >> 5 & 1) != 0) {
      in_EAX = F_005a0260(&(*(uint *)(gen_frame + 0x8)) GEN_EDX_ARG);
    }
  }
  return in_EAX;
}

/* ref: FUN_005aa0f0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005aa0f0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5aa0f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  if (param_2 != '\0') {
    F_005a9f80(param_1 GEN_EDX_FWD);
    *((char *)GEN_TOP(((int)param_1 + 0x11))) = param_2;
    return;
  }
  F_005a9ff0(param_1 GEN_EDX_ARG);
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x11))) = 0;
  return;
}

/* ref: FUN_005aa150 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005aa150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5aa150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a1dbc));
  uVar1 = *((uint *)GEN_TOP(((int)this + 4))) >> 5;
  if ((uVar1 & 1) != 0) {
    uVar1 = F_005a0260(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: Component::GUI2::AtkDialogue::vf2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005aa180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x5aa180u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_TOP(0x38, 8, 4);
  int iVar1;
  int * piVar2;
  undefined4 * this_00;
  uint uVar3;
  uint * puVar4;
  uint * puVar5;
  
  ((uint *)(gen_frame + 0x24))[3] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x34);
  uVar3 = (param_1 & 0xffff) - 0x38;
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  if (uVar3 < 2) {
    iVar1 = *(int *)(this + 0xc);
    if (iVar1 != 0) {
      (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(this + 0x18);
      (*(undefined4 *)(gen_frame + 0x20)) = *param_4;
      (*(undefined4 *)(gen_frame + 0x14)) = 4;
      (*(undefined4 *)(gen_frame + 0x1c)) = 3;
      ((uint *)(gen_frame + 0x24))[0] = 1;
      piVar2 = *((int * PTR32 *)GEN_TOP((iVar1 + 0x38)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_FWD,((uint *)(gen_frame + 0x4)),0xc,3,&(*(undefined4 *)(gen_frame + 0x14)));
      if ((((uint *)(gen_frame + 0x4))[0] >> 5 & 1) != 0) {
        F_005a0260(((uint *)(gen_frame + 0x4)) GEN_EDX_ARG);
      }
      ((uint *)(gen_frame + 0x4))[0] = 0;
      (*(int *)(gen_frame + 0x10)) = 2;
      puVar4 = ((uint *)(gen_frame + 0x24)) + 3;
      do {
        puVar5 = puVar4 - 2;
        if ((puVar4[-3] >> 5 & 1) != 0) {
          this_00 = ((undefined4 *)GEN_TOP(*puVar5));
          if (this_00 != ((undefined4 *)GEN_TOP(0x0))) {
            uVar3 = puVar4[-3] & 0xf;
            if (uVar3 == 9) {
              F_00488040(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),*this_00,this_00[1]);
              F_00488dc0(this_00 GEN_EDX_ARG);
              F_00406ad0(this_00);
            }
            else if ((uVar3 == 6) || (uVar3 == 7)) {
              F_00406ad0(this_00);
              *puVar5 = 0;
            }
          }
          *puVar5 = 0;
          this = (*(undefined * PTR32 *)(gen_frame + 0xc));
        }
        iVar1 = (*(int *)(gen_frame + 0x10)) - 1;
        (*(int *)(gen_frame + 0x10)) = iVar1;
        puVar4[-3] = 0;
        puVar4 = puVar5;
      } while (-1 < iVar1);
    }
    uVar3 = F_0058d140(this GEN_EDX_ARG);
  }
  return uVar3;
}

/* ref: FUN_005aa2d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005aa2d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5aa2d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[3])REFP(0x10a1dbc));
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) >> 5;
  if ((uVar1 & 1) != 0) {
    uVar1 = F_005a0260(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar1;
}

/* ref: FUN_005aa300 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005aa300(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x5aa300u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  *((undefined4 *)GEN_TOP((param_1 + 0x80))) = 0;
  if (*((int *)GEN_TOP((param_1 + 0x6c))) != 0) {
    F_00583770(*((int *)GEN_TOP((param_1 + 0x6c))) + 0x23c GEN_EDX_FWD,3,0,param_1,0);
    F_00583770(*((int *)GEN_TOP((param_1 + 0x6c))) + 0x23c GEN_EDX_ARG,4,0,param_1,0);
    F_00583770(*((int *)GEN_TOP((param_1 + 0x6c))) + 0x23c GEN_EDX_ARG,5,0,param_1,0);
  }
  if (param_3 != '\0') {
    iVar1 = *((int *)GEN_TOP((param_1 + 0x6c)));
    (*(undefined4 *)(gen_frame + 0xc)) = param_4;
    (*(uint *)(gen_frame + 0x8)) = 3;
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar1 + 0x38)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG,((uint *)(gen_frame + 0x0)),0x17,1,&(*(uint *)(gen_frame + 0x8)));
    if ((((uint *)(gen_frame + 0x0))[0] >> 5 & 1) != 0) {
      F_005a0260(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
    if (((*(uint *)(gen_frame + 0x8)) >> 5 & 1) != 0) {
      F_005a0260(&(*(uint *)(gen_frame + 0x8)) GEN_EDX_ARG);
    }
  }
  uVar2 = *((uint *)GEN_TOP((param_1 + 0x78)));
  piVar3 = ((int *)GEN_TOP((uVar2 + 0x84)));
  if (uVar2 == 0) {
    piVar3 = *((int * PTR32 *)GEN_TOP((param_1 + 0x70)));
  }
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x20))))(piVar3 GEN_EDX_ARG,param_2);
  }
  *((undefined4 *)GEN_TOP((param_1 + 0x70))) = 0;
  return uVar2;
}

/* ref: FUN_005aa3d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005aa3d0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x5aa3d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  float fVar1;
  code * pcVar2;
  int iVar3;
  uint in_EAX = 0;
  uint uVar4;
  int * piVar5;
  bool bVar6;
  
  if (param_2 != 0) {
    *((undefined2 *)GEN_TOP((param_1 + 0x81))) = 0;
    *((undefined1 *)GEN_TOP((param_1 + 0x80))) = 1;
    *((undefined1 *)GEN_TOP((param_1 + 0x83))) = 1;
    *((uint *)GEN_TOP((param_1 + 0x70))) = param_2;
    piVar5 = ((int *)GEN_TOP(param_2));
    if (*((int *)GEN_TOP((param_1 + 0x78))) != 0) {
      piVar5 = ((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x78))) + 0x84)));
    }
    pcVar2 = *((gen_code32 *)GEN_TOP((*piVar5 + 0xc)));
    *((undefined1 *)GEN_TOP(((int)piVar5 + 0x1a))) = 1;
    uVar4 = (*pcVar2)(piVar5);
    if (uVar4 != 0) {
      param_2 = *((uint *)GEN_TOP((uVar4 + 0x38)));
      (*(float *)(gen_frame + 0xc)) = *((float *)GEN_TOP((uVar4 + 0x3c)));
    }
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0xc))))(piVar5 GEN_EDX_FWD);
    fVar1 = (float)((float10)(*(float *)(gen_frame + 0xc)) - (float10)*(double *)&REFG(undefined, 0x1094788));
    (*(float *)(gen_frame + 0xc)) = fVar1;
    if (uVar4 != 0) {
      if (((*((uint *)GEN_TOP((uVar4 + 0x88))) & 1) == 0) &&
         ((bVar6 = GEN_ISNAN((float10)*((float *)GEN_TOP((uVar4 + 0x38)))) || GEN_ISNAN(((float10)GEN_TOD(gen_bits2f(param_2)))),
          bVar6 == (bVar6 || (float10)*((float *)GEN_TOP((uVar4 + 0x38))) == ((float10)GEN_TOD(gen_bits2f(param_2)))) ||
          (bVar6 = GEN_ISNAN((float10)*((float *)GEN_TOP((uVar4 + 0x3c)))) || GEN_ISNAN((float10)fVar1),
          bVar6 == (bVar6 || (float10)*((float *)GEN_TOP((uVar4 + 0x3c))) == (float10)fVar1))))) {
        *((uint *)GEN_TOP((uVar4 + 0x88))) = *((uint *)GEN_TOP((uVar4 + 0x88))) | 1;
      }
      *((uint *)GEN_TOP((uVar4 + 0x38))) = param_2;
      *((float *)GEN_TOP((uVar4 + 0x3c))) = fVar1;
    }
    *((undefined2 *)GEN_TOP((param_1 + 0x7c))) = (undefined2)param_3;
    *((undefined2 *)GEN_TOP((param_1 + 0x7e))) = (undefined2)param_4;
    uVar4 = F_00565340(*((int *)GEN_TOP((param_1 + 0x6c))) + 0x23c GEN_EDX_ARG,4,0,0,*((int *)GEN_TOP((param_1 + 0x6c))),param_1,0);
    if (uVar4 != 0) {
      *((uint *)GEN_TOP((uVar4 + 0x14))) = *((uint *)GEN_TOP((uVar4 + 0x14))) & 0xffbfffff;
    }
    uVar4 = F_00565340(*((int *)GEN_TOP((param_1 + 0x6c))) + 0x23c GEN_EDX_ARG,3,0,0,*((int *)GEN_TOP((param_1 + 0x6c))),param_1,0);
    if (uVar4 != 0) {
      *((uint *)GEN_TOP((uVar4 + 0x14))) = *((uint *)GEN_TOP((uVar4 + 0x14))) & 0xffbfffff;
    }
    uVar4 = F_00565340(*((int *)GEN_TOP((param_1 + 0x6c))) + 0x23c GEN_EDX_ARG,5,0,0,*((int *)GEN_TOP((param_1 + 0x6c))),param_1,0);
    if (uVar4 != 0) {
      *((uint *)GEN_TOP((uVar4 + 0x14))) = *((uint *)GEN_TOP((uVar4 + 0x14))) & 0xffbfffff;
    }
    iVar3 = *((int *)GEN_TOP((param_1 + 0x6c)));
    ((uint *)(gen_frame + 0x0))[0] = 3;
    ((uint *)(gen_frame + 0x0))[1] = 8;
    piVar5 = *((int * PTR32 *)GEN_TOP((iVar3 + 0x38)));
    in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 4))))(piVar5 GEN_EDX_ARG,((uint *)(gen_frame + 0x0)) + 2,0x17,1,((uint *)(gen_frame + 0x0)));
    if ((((uint *)(gen_frame + 0x0))[2] >> 5 & 1) != 0) {
      in_EAX = F_005a0260(((uint *)(gen_frame + 0x0)) + 2 GEN_EDX_ARG);
    }
    if ((((uint *)(gen_frame + 0x0))[0] >> 5 & 1) != 0) {
      in_EAX = F_005a0260(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
  }
  return in_EAX;
}

/* ref: FUN_005aa560 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005aa560(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(char param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x5aa560u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(char param_5 = (char)gen_a4;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  undefined1 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  ushort uVar4;
  
  uVar2 = *param_2;
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 0)) = 0x2f;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 2)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0x2f;
  (*(uint *)(gen_frame + 0x10)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = ((undefined *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x8)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 1)) = *((undefined1 *)GEN_TOP(((int)param_2 + 9)));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = param_3;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 0)) = (char)*(ushort *)(param_2 + 2);
  (*(uint *)(gen_frame + 0x10)) = (uint)*(ushort *)(param_2 + 2);
  F_005997b0(param_3 GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)));
  if ((((param_5 == '\0') && (*((char *)GEN_TOP((param_1 + 0x80))) != '\0')) && (*((int *)GEN_TOP((param_1 + 0x70))) != 0)
      ) && ((*((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x70))) + 0x14))) & param_4) != 0)) {
    uVar4 = *(ushort *)(param_2 + 2);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = *param_2;
    (*(uint *)(gen_frame + 0x10)) = 0;
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = ((undefined *)GEN_TOP(0x0));
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    uVar1 = *((undefined1 *)GEN_TOP(((int)param_2 + 9)));
    uVar3 = *(ushort *)(param_2 + 2);
    (*(undefined4 *)(gen_frame + 0x0)) = 0x30;
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = param_3;
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 0)) = (char)uVar4;
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 1)) = uVar1;
    (*(uint *)(gen_frame + 0x10)) = (uint)uVar3;
    (*(int *)(gen_frame + 0x4)) = 0;
    F_005997b0(param_3 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
    if ((*(int *)(gen_frame + 0x4)) != 0) {
      F_005aa300(param_1 GEN_EDX_ARG,0,1,10);
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_005aa640 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005aa640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5aa640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  char cVar1;
  char * pcVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar6 = 0;
  uVar3 = F_00404270();
  uVar3 = F_00406c00(pcVar2 + (1 - (int)(param_1 + 1)),0,uVar3,uVar6);
  uVar5 = F_00c46aa0(uVar3,param_1,pcVar2 + (1 - (int)(param_1 + 1)));
  uVar4 = (uint)uVar5;
  if ((*(uint *)((int)(uintptr_t)this) >> 5 & 1) != 0) {
    uVar4 = F_005a0260(this GEN_EDX_ARG);
  }
  *((uint *)GEN_TOP(((int)this + 4))) = uVar3;
  *(undefined4 *)this = 0x26;
  return uVar4;
}

/* ref: Component::GUI2::AtkComponentBase::vf6 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005aa6a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5aa6a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 extraout_EAX = 0;
  uint uVar1;
  
  F_005a8130(this + 4 GEN_EDX_FWD);
  uVar1 = CONCAT31((int3)((uint)extraout_EAX >> 8),1);
  if (((((byte)this[0x66] & 1) == 0) && (((byte)this[0x60] & 1) != 0)) &&
     (*(int *)(this + 0x24) == 3)) {
    uVar1 = F_00578ee0(this + 4 GEN_EDX_ARG,0);
    *(uint *)(this + 0x6c) = uVar1;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x20))))(this GEN_EDX_ARG);
    if (this[0x78] == (undefined1)0xff) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x30))))(this GEN_EDX_ARG,0);
    }
    *(uint *)(this + 100) = *(uint *)(this + 100) | 0x10000;
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentGaugeBar::vf16 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005aa6f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5aa6f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  if (param_1 != ((char *)GEN_TOP(0x0))) {
    if (*param_1 != '\0') {
      *(undefined4 *)(this + 0x78) = *(undefined4 *)param_1;
      *(undefined4 *)(this + 0x7c) = *(undefined4 *)(param_1 + 4);
      this[0x80] = *(undefined *)(param_1 + 8);
    }
    if ((((byte)this[0x60] & 1) != 0) && (iVar1 = *(int *)(this + 0xc), iVar1 != 0)) {
      uVar3 = *((uint *)GEN_TOP((iVar1 + 4)));
      if ((uVar3 != 0) && (uVar2 = 0, uVar3 != 0)) {
        piVar4 = *((int * PTR32 *)GEN_TOP((iVar1 + 8)));
        do {
          if (*((int *)GEN_TOP((*piVar4 + 4))) == 2) break;
          uVar2 = uVar2 + 1;
          piVar4 = piVar4 + 1;
        } while (uVar2 < uVar3);
      }
    }
    uVar3 = F_0055d920(this + 4 GEN_EDX_FWD,*(undefined4 *)(param_1 + 0xc));
    *(uint *)(this + 0x84) = uVar3;
    uVar3 = F_0055d920(this + 4 GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x10));
    *(uint *)(this + 0x88) = uVar3;
    uVar3 = F_0055d920(this + 4 GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x18));
    *(uint *)(this + 0x8c) = uVar3;
    uVar3 = F_0055d920(this + 4 GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x1c));
    *(uint *)(this + 0x90) = uVar3;
    uVar3 = F_0055d920(this + 4 GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x14));
    *(uint *)(this + 0x94) = uVar3;
    uVar3 = F_0055d920(this + 4 GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x20));
    *(uint *)(this + 0x98) = uVar3;
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 <= *(int *)(this + 0xe0)) {
      if (*(int *)(this + 0xe4) < iVar1) {
        F_005a04e0(this GEN_EDX_ARG,iVar1,1);
      }
      *(int *)(this + 0xdc) = iVar1;
    }
    iVar1 = *(int *)(param_1 + 0x34);
    if (*(int *)(this + 0xdc) <= iVar1) {
      if (iVar1 < *(int *)(this + 0xe4)) {
        F_005a04e0(this GEN_EDX_ARG,iVar1,1);
      }
      *(int *)(this + 0xe0) = iVar1;
    }
    F_005a04e0(this GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x38),1);
  }
  return;
}

/* ref: FUN_005aa820 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005aa820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5aa820u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint * puVar1;
  int iVar2;
  undefined * this_00;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int * piVar8;
  int iVar9;
  int iVar10;
  uint local_10;
  int local_c;
  
  uVar4 = (ushort)param_2;
  uVar5 = F_005a82c0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,(int)(short)param_1,(int)(short)(ushort)param_2,1000)
  ;
  uVar6 = F_0055d920(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,(int)(short)param_1);
  if (uVar6 == 0) {
    param_2 = 0;
  }
  else if (((((*((ushort *)GEN_TOP((uVar6 + 0x18))) < 1000) || (param_2 = *((int *)GEN_TOP((uVar6 + 0x8c))), param_2 == 0)
             ) || ((*((byte *)GEN_TOP((param_2 + 0x60))) & 1) == 0)) ||
           (((*((byte *)GEN_TOP((param_2 + 0x60))) & 4) == 0 || (*((char *)GEN_TOP((param_2 + 0x1c))) != '\x01')))) ||
          (*((char *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0xc))) + 0xf))) != '\x0e')) {
    param_2 = 0;
  }
  if ((short)uVar4 < 1) {
    *((undefined1 *)GEN_TOP(((int)this + 0x11d))) = 1;
    return uVar5;
  }
  local_10 = (uint)uVar4;
  local_c = 1;
  do {
    if (local_c == 0) {
      iVar10 = (int)(short)param_1;
    }
    else {
      iVar10 = (short)param_1 * 10000 + 1000 + local_c;
      if ((*((int *)GEN_TOP(((int)this + 0x50))) - *((int *)GEN_TOP(((int)this + 0x4c))) & 0xfffffffcU) != 0) {
        for (piVar8 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3c))); piVar8 != *((int * PTR32 *)GEN_TOP(((int)this + 0x40)));
            piVar8 = piVar8 + 1) {
          iVar9 = *piVar8;
          if (*((int *)GEN_TOP((iVar9 + 4))) == iVar10) goto LAB_005aa942;
        }
      }
    }
    if (((*((byte *)GEN_TOP(((int)this + 0x60))) & 1) == 0) || (iVar10 == 0)) {
      iVar9 = 0;
    }
    else {
      iVar2 = *((int *)GEN_TOP(((int)this + 0xc)));
      iVar9 = 0;
      if (((iVar2 != 0) && (uVar6 = *((uint *)GEN_TOP((iVar2 + 4))), uVar6 != 0)) && (uVar7 = 0, uVar6 != 0)) {
        piVar8 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
        do {
          if (*((int *)GEN_TOP((*piVar8 + 4))) == iVar10) {
            iVar9 = (*((int * PTR32 *)GEN_TOP((iVar2 + 8))))[uVar7];
            goto LAB_005aa942;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 1;
        } while (uVar7 < uVar6);
        iVar9 = 0;
      }
    }
LAB_005aa942: ;
    if (((iVar9 != 0) && (999 < *((ushort *)GEN_TOP((iVar9 + 0x18))))) &&
       (this_00 = *((undefined * PTR32 *)GEN_TOP((iVar9 + 0x8c))), this_00 != ((undefined *)GEN_TOP(0x0)))) {
      if ((((*((byte *)GEN_TOP(((int)this_00 + 0x60))) & 1) != 0) &&
          ((*((byte *)GEN_TOP(((int)this_00 + 0x60))) & 4) != 0)) &&
         ((*((char *)GEN_TOP(((int)this_00 + 0x1c))) == '\x01' &&
          (*((char *)GEN_TOP((*((int *)GEN_TOP(((int)this_00 + 0xc))) + 0xf))) == '\x0e')))) {
        F_00574490(this GEN_EDX_ARG,this_00);
        if (*((int *)GEN_TOP(((int)this_00 + 0x70))) != 0) {
          puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this_00 + 0x70))) + 0x84)));
          *puVar1 = *puVar1 & 0xdfffffff;
        }
        if (*((int *)GEN_TOP(((int)this_00 + 0x70))) != 0) {
          puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this_00 + 0x70))) + 0x84)));
          *puVar1 = *puVar1 | 0x2000000;
        }
        bVar3 = F_005613c0(param_2 GEN_EDX_ARG);
        *((uint *)GEN_TOP(((int)this_00 + 100))) =
             *((uint *)GEN_TOP(((int)this_00 + 100))) ^
             ((uint)bVar3 << 0x11 ^ *((uint *)GEN_TOP(((int)this_00 + 100)))) & 0x20000;
        uVar4 = F_0057bd00(this_00 GEN_EDX_ARG,(int)this_00 + 4);
        if (uVar4 != 0) {
          piVar8 = ((int *)GEN_TOP(F_00404270()));
          uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xc))))(piVar8 GEN_EDX_ARG,(uint)uVar4 * 4,0x10);
          *((uint *)GEN_TOP(((int)this_00 + 0x1e8))) = uVar6;
        }
        *((undefined2 *)GEN_TOP(((int)this_00 + 0x20c))) = 0;
        F_0057bc60(this_00 GEN_EDX_ARG,(int)this_00 + 4);
        if ((*((int *)GEN_TOP(((int)this_00 + 0x68))) == 0) && (*((short *)GEN_TOP(((int)this_00 + 0x20c))) != 0)) {
          *((undefined4 *)GEN_TOP(((int)this_00 + 0x68))) = **((undefined4 * PTR32 *)GEN_TOP(((int)this_00 + 0x1e8)));
        }
        F_0056d7b0(this_00 GEN_EDX_ARG,param_2);
      }
    }
    local_c = local_c + 1;
    local_10 = local_10 - 1;
    if (local_10 == 0) {
      *((undefined1 *)GEN_TOP(((int)this + 0x11d))) = 1;
      return uVar5;
    }
  } while( true );
}

/* ref: FUN_005aaa80 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005aaa80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x5aaa80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[5];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  GEN_FRAME_DECL(0x58, 8);
  char cVar1;
  int iVar2;
  code * pcVar3;
  ushort uVar4;
  int * piVar5;
  byte bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  short * psVar11;
  undefined * pvVar12;
  short sVar13;
  uint uVar14;
  short sVar15;
  bool bVar16;
  bool bVar17;
  undefined4 * puVar18;
  
  if ((((*((int *)GEN_TOP(((int)this + 0xac))) == 0) && (uVar9 = *(*(uint * PTR32 *)&gen_args[0]), uVar9 != 9)) && (uVar9 != 10)) &&
     (((uVar9 != 7 && (uVar9 != 8)) && (uVar9 != 2)))) {
    return 0;
  }
  if (((*(int * PTR32 *)&gen_args[3]) != ((int *)GEN_TOP(0x0))) &&
     (bVar6 = F_005a2e90((*(int * PTR32 *)&gen_args[3]) GEN_EDX_FWD,(*(uint * PTR32 *)&gen_args[0])), iVar2 = REFG(int, 0x1379860), bVar6 != 0)) {
    if (*(*(uint * PTR32 *)&gen_args[0]) != 0x1f) {
      uVar9 = *((uint *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x1379860) + 0x14))) + 0xcc)));
      uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x3c))))(this GEN_EDX_ARG);
      if ((uVar8 != 0) && (uVar9 == 0)) {
        uVar9 = F_0057f8d0(*((undefined * PTR32 *)GEN_TOP((iVar2 + 0x14))) GEN_EDX_ARG,uVar8);
      }
      F_0059b1c0(*((undefined * PTR32 *)GEN_TOP((iVar2 + 0x18))) GEN_EDX_ARG,uVar8,uVar9,0);
      return 1;
    }
    if (*((char *)GEN_TOP(((int)this + 0x126))) != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x78))))(this GEN_EDX_ARG);
    }
    uVar10 = (*(uint *)&gen_args[2]);
    uVar9 = (*(uint * PTR32 *)&gen_args[0])[1];
    uVar8 = (*(uint * PTR32 *)&gen_args[0])[2];
    (*(uint *)(gen_frame + 0x20)) = *(*(uint * PTR32 *)&gen_args[0]);
    (*(uint *)(gen_frame + 0x2c)) = (*(uint * PTR32 *)&gen_args[0])[3];
    (*(uint *)(gen_frame + 0x24)) = uVar9;
    (*(uint *)(gen_frame + 0x28)) = uVar8;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x88))))(this GEN_EDX_ARG,0x25,(*(uint *)&gen_args[2]),&(*(uint *)(gen_frame + 0x20)),(*(uint *)&gen_args[1]),1);
    return *((byte *)GEN_TOP((uVar10 + 0x16))) & 1;
  }
  uVar8 = (*(uint *)&gen_args[4]);
  uVar9 = (*(uint *)&gen_args[2]);
  cVar1 = (char)(*(uint * PTR32 *)&gen_args[0])[1];
  if ((cVar1 == '\0') || (bVar17 = false, cVar1 == '\x02')) {
    bVar17 = true;
  }
  bVar16 = cVar1 == '\0';
  uVar10 = *(*(uint * PTR32 *)&gen_args[0]);
  (*(bool *)(gen_frame + 0x53)) = bVar16;
  switch((unsigned int)(uintptr_t)(uVar10)) {
  case 1: ;
  case 4: ;
    if (uVar10 != 1) {
      if ((*(int * PTR32 *)&gen_args[3]) == ((int *)GEN_TOP(0x0))) {
        return 0;
      }
      if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[3]) + 0x8e))) == '\0') {
        return 0;
      }
    }
    F_00589700(this GEN_EDX_ARG,1);
    piVar5 = (*(int * PTR32 *)&gen_args[3]);
    if (-1 < (int)(*(uint *)&gen_args[1])) {
      if (((*(int * PTR32 *)&gen_args[3]) != ((int *)GEN_TOP(0x0))) &&
         ((*((char *)GEN_TOP(((int)this + 0x11e))) != '\0' || ((char)(*(uint *)&gen_args[4]) == '\0')))) {
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 3)) = *((byte *)GEN_TOP(((int)(*(uint * PTR32 *)&gen_args[0]) + 5))) | 8;
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 2)) = *(*(uint * PTR32 *)&gen_args[0]) != 1;
        gen_piece_set(&(*(uint *)(gen_frame + 0x24)), 0, 3, (unsigned long long)(CONCAT12(*(*(uint * PTR32 *)&gen_args[0]) != 1,(undefined2)(*(uint *)(gen_frame + 0x24)))));
        (*(uint *)(gen_frame + 0x24)) = CONCAT13(*((byte *)GEN_TOP(((int)(*(uint * PTR32 *)&gen_args[0]) + 5))),(undefined3)(*(uint *)(gen_frame + 0x24))) | 0x8000000;
        if ((char)(*(uint * PTR32 *)&gen_args[0])[1] == '\x01') {
          (*(uint *)(gen_frame + 0x8)) = 0;
          (*(uint *)(gen_frame + 0xc)) = 0;
          (*(uint *)(gen_frame + 0x10)) = 0;
          (*(uint *)(gen_frame + 0x14)) = 0;
          (*(undefined4 *)(gen_frame + 0x18)) = 0;
          (*(undefined4 *)(gen_frame + 0x1c)) = 0;
          (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0x24));
          iVar2 = *(*(int * PTR32 *)&gen_args[3]);
          puVar18 = ((undefined4 *)(gen_frame + 0x0));
          (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x20));
          pcVar3 = *((gen_code32 *)GEN_TOP((iVar2 + 0x3c)));
          ((undefined4 *)(gen_frame + 0x0))[0] = 4;
          pvVar12 = ((undefined *)GEN_TOP((*pcVar3)((*(int * PTR32 *)&gen_args[3]))));
          F_005997b0(pvVar12 GEN_EDX_ARG,puVar18);
          if (*((uint *)GEN_TOP(((int)this + 0xc4))) == (*(uint *)&gen_args[1])) {
            (*(undefined2 *)((char *)&((undefined4 *)(gen_frame + 0x0))[0] + 0)) = 9;
            ((undefined4 *)(gen_frame + 0x0))[0] = CONCAT22((*(undefined2 *)((char *)&((undefined4 *)(gen_frame + 0x0))[0] + 2)),9);
            puVar18 = ((undefined4 *)(gen_frame + 0x0));
            pvVar12 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x3c))))(piVar5 GEN_EDX_ARG)));
            F_005997b0(pvVar12 GEN_EDX_ARG,puVar18);
            uVar9 = (*(uint *)&gen_args[2]);
            *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = 0xffffffff;
            if (((1 < *((short *)GEN_TOP(((int)this + 0xf8)))) && (*((char *)GEN_TOP(((int)this + 0x121))) != '\0')) &&
               (*(*(uint * PTR32 *)&gen_args[0]) == 1)) {
              if ((int)*((uint *)GEN_TOP(((int)this + 0xd0))) < 0) {
                pcVar3 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x88)));
                *((uint *)GEN_TOP(((int)this + 0xd0))) = (*(uint *)&gen_args[1]);
                (*pcVar3)(this,0x26,(*(uint *)&gen_args[2]),&(*(uint *)(gen_frame + 0x20)),(*(uint *)&gen_args[1]),1);
                return 1;
              }
              if (*((uint *)GEN_TOP(((int)this + 0xd0))) != (*(uint *)&gen_args[1])) {
                uVar8 = (*(uint * PTR32 *)&gen_args[0])[1];
                (*(uint *)(gen_frame + 0x8)) = *(*(uint * PTR32 *)&gen_args[0]);
                (*(uint *)(gen_frame + 0xc)) = uVar8;
                (*(uint *)(gen_frame + 0x10)) = (*(uint * PTR32 *)&gen_args[0])[2];
                (*(uint *)(gen_frame + 0x14)) = (*(uint * PTR32 *)&gen_args[0])[3];
                ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x88))))(this GEN_EDX_ARG,0x28,(*(uint *)&gen_args[2]),&(*(uint *)(gen_frame + 0x8)),(*(uint *)&gen_args[1]),1);
              }
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x88))))
                        (this GEN_EDX_ARG,0x27,uVar9,&(*(uint *)(gen_frame + 0x20)),*((undefined4 *)GEN_TOP(((int)this + 0xd0))),1);
              if (-1 < *((int *)GEN_TOP(((int)this + 0xd0)))) {
                pcVar3 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x78)));
                *((undefined4 *)GEN_TOP(((int)this + 0xd0))) = 0xffffffff;
                (*pcVar3)(this);
                ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x80))))(this GEN_EDX_ARG);
                return 1;
              }
            }
          }
        }
        else if ((char)(*(uint * PTR32 *)&gen_args[0])[1] == '\0') {
          (*(uint *)(gen_frame + 0x8)) = 0;
          (*(uint *)(gen_frame + 0xc)) = 0;
          (*(uint *)(gen_frame + 0x10)) = 0;
          (*(uint *)(gen_frame + 0x14)) = 0;
          (*(undefined4 *)(gen_frame + 0x18)) = 0;
          (*(undefined4 *)(gen_frame + 0x1c)) = 0;
          (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x20));
          puVar18 = ((undefined4 *)(gen_frame + 0x0));
          (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0x24));
          pcVar3 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[3]) + 0x3c)));
          ((undefined4 *)(gen_frame + 0x0))[0] = 3;
          pvVar12 = ((undefined *)GEN_TOP((*pcVar3)((*(int * PTR32 *)&gen_args[3]))));
          F_005997b0(pvVar12 GEN_EDX_ARG,puVar18);
          *((uint *)GEN_TOP(((int)this + 0xc4))) = (*(uint *)&gen_args[1]);
        }
      }
      return 1;
    }
    if ((!bVar17) || (iVar2 = *((int *)GEN_TOP(((int)this + 0xac))), iVar2 < 1)) goto LAB_005aaf31;
    uVar9 = *((uint *)GEN_TOP(((int)this + 0xb0)));
    if (*((short *)GEN_TOP(((int)this + 0xf8))) != 0) {
      uVar9 = uVar9 * *((ushort *)GEN_TOP(((int)this + 0xee)));
    }
    if (iVar2 <= (int)uVar9) {
      uVar9 = iVar2 - 1;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x38)),0);
    F_005a2670(((undefined1 *)(gen_frame + 0x38)) GEN_EDX_ARG);
    break;
  case 2: ;
    if (bVar16) {
      if (-1 < *((int *)GEN_TOP(((int)this + 0xd0)))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) + 8))))
                  (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x40)),3);
        F_005a2670(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG);
        if (-1 < *((int *)GEN_TOP(((int)this + 0xd0)))) {
          pcVar3 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x78)));
          *((undefined4 *)GEN_TOP(((int)this + 0xd0))) = 0xffffffff;
          (*pcVar3)(this);
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x80))))(this GEN_EDX_ARG);
        }
        uVar9 = (*(uint * PTR32 *)&gen_args[0])[1];
        uVar8 = (*(uint * PTR32 *)&gen_args[0])[2];
        (*(uint *)(gen_frame + 0x8)) = *(*(uint * PTR32 *)&gen_args[0]);
        (*(uint *)(gen_frame + 0x14)) = (*(uint * PTR32 *)&gen_args[0])[3];
        (*(uint *)(gen_frame + 0xc)) = uVar9;
        (*(uint *)(gen_frame + 0x10)) = uVar8;
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x88))))(this GEN_EDX_ARG,0x27,(*(uint *)&gen_args[2]),&(*(uint *)(gen_frame + 0x8)),(*(uint *)&gen_args[1]),1);
        return 1;
      }
      if ((*((char *)GEN_TOP(((int)this + 0x80))) == '\x01') && (-1 < *((int *)GEN_TOP(((int)this + 0xcc))))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x74))))(this GEN_EDX_ARG,0xffffffff,0);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) + 8))))
                  (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x48)),3);
        F_005a2670(((undefined1 *)(gen_frame + 0x48)) GEN_EDX_ARG);
        return 1;
      }
      if ((*(uint *)&gen_args[2]) != 0) {
        uVar8 = (*(uint * PTR32 *)&gen_args[0])[1];
        uVar14 = (*(uint * PTR32 *)&gen_args[0])[2];
        (*(uint *)(gen_frame + 0x8)) = uVar10;
        (*(uint *)(gen_frame + 0x14)) = (*(uint * PTR32 *)&gen_args[0])[3];
        (*(uint *)(gen_frame + 0x10)) = uVar14;
        (*(uint *)(gen_frame + 0xc)) = uVar8;
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x88))))(this GEN_EDX_ARG,0x25,(*(uint *)&gen_args[2]),&(*(uint *)(gen_frame + 0x8)),(*(uint *)&gen_args[1]),1);
        if ((*((byte *)GEN_TOP((uVar9 + 0x16))) & 1) != 0) {
          if (((*((char *)GEN_TOP(((int)this + 0x128))) != '\0') && (-1 < (int)(*(uint *)&gen_args[1]))) &&
             ((*((int *)GEN_TOP(((int)this + 0xc0))) < 0 && (uVar9 = F_005615f0(this GEN_EDX_ARG), (char)uVar9 == '\0')))
             ) {
            F_005623b0(this GEN_EDX_ARG,(*(uint *)&gen_args[1]));
          }
          return 1;
        }
      }
    }
  default: ;
    return 0;
  case 7: ;
  case 8: ;
  case 9: ;
  case 10: ;
    if ((!bVar17) && (!bVar16)) {
      bVar17 = (*(uint *)&gen_args[2]) == 0;
LAB_005aabbf: ;
      if (bVar17) {
        return 0;
      }
      *((uint *)GEN_TOP(((*(uint *)&gen_args[2]) + 0x14))) = *((uint *)GEN_TOP(((*(uint *)&gen_args[2]) + 0x14))) | 0x10000;
      return 0;
    }
    sVar13 = *((short *)GEN_TOP(((int)this + 0xfc)));
    (*(uint *)&gen_args[4]) = CONCAT13(1,(undefined3)(*(uint *)&gen_args[4]));
    if ((uVar10 == 7) || ((*(int * PTR32 *)&gen_args[3]) = ((int *)GEN_TOP(0x1)), uVar10 == 9)) {
      (*(int * PTR32 *)&gen_args[3]) = ((int *)GEN_TOP(0xffffffff));
    }
    uVar7 = (undefined1)uVar10;
    uVar14 = uVar10 & 0xff;
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x44)) + 0)) = uVar7;
    (*(uint *)(gen_frame + 0x44)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x44)), 1, 3),uVar7);
    (*(undefined1 *)(gen_frame + 0x3c)) = uVar7;
    *(undefined4 *)&(*(undefined1 *)(gen_frame + 0x3c)) = CONCAT31((*(undefined3 *)(gen_frame + 0x3d)),uVar7);
    if ((uVar10 == 7) || (uVar10 == 8)) {
      sVar13 = *((short *)GEN_TOP(((int)this + 0xfe)));
      (*(uint *)&gen_args[4]) = uVar8 & 0xffffff;
    }
    if (sVar13 == 0) {
      if ((*(uint *)&gen_args[2]) == 0) {
        return 0;
      }
      bVar17 = *((char *)GEN_TOP(((int)this + 0x11b))) == '\0';
      goto LAB_005aabbf;
    }
    if (*((int *)GEN_TOP(((int)this + 0xac))) == 0) {
      uVar8 = 1;
    }
    else {
      uVar8 = (*((int *)GEN_TOP(((int)this + 0xac))) - 1) / (int)sVar13 + 1U & 0xffff;
      uVar14 = (*(uint *)(gen_frame + 0x44));
    }
    (*(uint *)(gen_frame + 0x4c)) = uVar8;
    sVar15 = (short)uVar8;
    if ((*(uint *)&gen_args[1]) < 0x80000000) {
      if ((((int)(*(int * PTR32 *)&gen_args[3]) < 0) && (sVar13 - 1 < (int)(*(uint *)&gen_args[1]))) ||
         ((0 < (int)(*(int * PTR32 *)&gen_args[3]) && ((int)(*(uint *)&gen_args[1]) < (sVar15 - 1) * (int)sVar13)))) {
        if (!bVar17) goto LAB_005aaf31;
        uVar9 = (int)sVar13 * (int)(*(int * PTR32 *)&gen_args[3]) + (*(uint *)&gen_args[1]);
        if ((int)uVar9 < 0) {
          uVar9 = 0;
        }
        else if (*((int *)GEN_TOP(((int)this + 0xac))) <= (int)uVar9) {
          uVar9 = *((int *)GEN_TOP(((int)this + 0xac))) - 1;
        }
        break;
      }
      uVar9 = (*(uint *)&gen_args[1]);
      if ((*((char *)GEN_TOP(((int)this + 0x80))) == '\x02') &&
         ((!bVar16 || (uVar8 = F_0059e9e0(this GEN_EDX_ARG,uVar7,(*(uint *)&gen_args[2])), uVar8 != 0)))) goto LAB_005aaf31;
    }
    else {
      if ((!bVar16) || (uVar8 = F_0059e9e0(this GEN_EDX_ARG,(char)uVar14,(*(uint *)&gen_args[2])), uVar8 != 0))
      goto LAB_005aaf31;
      uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x7c))))(this GEN_EDX_ARG);
      if (uVar8 == 0) {
        if (uVar9 == 0) {
          return 0;
        }
        *((uint *)GEN_TOP((uVar9 + 0x14))) = *((uint *)GEN_TOP((uVar9 + 0x14))) | 0x10000;
        return 0;
      }
      if ((int)(*(int * PTR32 *)&gen_args[3]) < 1) {
        uVar9 = 0;
      }
      else {
        uVar9 = *((short *)GEN_TOP(((int)this + 0xf8))) - 1 + *((int *)GEN_TOP(((int)this + 0xb0)));
        if ((int)uVar9 < 0) {
          uVar9 = 0;
          goto LAB_005aad56;
        }
      }
      if (*((int *)GEN_TOP(((int)this + 0xac))) <= (int)uVar9) {
        uVar9 = *((int *)GEN_TOP(((int)this + 0xac))) - 1;
      }
    }
LAB_005aad56: ;
    if ((*(bool *)(gen_frame + 0x53)) != false) {
      if (*((char *)GEN_TOP(((int)this + 0x111))) == '\x01') {
        if ((int)(*(int * PTR32 *)&gen_args[3]) < 1) goto LAB_005aae2e;
        uVar9 = *((int *)GEN_TOP(((int)this + 0xac))) - 1;
      }
      else {
        if (*((char *)GEN_TOP(((int)this + 0x111))) != '\x02') {
          return 0;
        }
        if ((int)(*(int * PTR32 *)&gen_args[3]) < 1) {
          uVar8 = *((int *)GEN_TOP(((int)this + 0xac))) - 1;
        }
        else {
          uVar8 = 0;
        }
        uVar9 = uVar8;
        if ((((1 < sVar15) && (uVar10 = (uint)*((ushort *)GEN_TOP(((int)this + 0xee))), 1 < uVar10)) &&
            (*((char *)GEN_TOP(((int)this + 0x112))) == (*(undefined1 *)((char *)&(*(uint *)&gen_args[4]) + 3)))) &&
           (uVar9 = (int)(*(uint *)&gen_args[1]) % (int)uVar10, uVar8 != 0)) {
          uVar9 = (sVar15 - 1) * uVar10 + uVar9;
          if (*((int *)GEN_TOP(((int)this + 0xac))) <= (int)uVar9) {
            uVar9 = *((int *)GEN_TOP(((int)this + 0xac))) - 1;
          }
        }
      }
    }
    break;
  case 0xb: ;
    if (!bVar17) goto LAB_005aaf31;
    sVar13 = *((short *)GEN_TOP(((int)this + 0xac)));
    sVar15 = -*((short *)GEN_TOP(((int)this + 0xf8)));
    goto LAB_005aae55;
  case 0xc: ;
    if (!bVar17) goto LAB_005aaf31;
    sVar13 = *((short *)GEN_TOP(((int)this + 0xac)));
    sVar15 = *((short *)GEN_TOP(((int)this + 0xf8)));
LAB_005aae55: ;
    uVar4 = sVar15 + (short)(*(uint *)&gen_args[1]);
    (*(uint *)&gen_args[2]) = (uint)(ushort)(sVar13 - 1U);
    psVar11 = (short *)&(*(uint *)&gen_args[4]);
    (*(uint *)&gen_args[4]) = (uint)uVar4;
    (*(int * PTR32 *)&gen_args[3]) = ((int *)GEN_TOP(0x0));
    if ((short)(sVar13 - 1U) <= (short)uVar4) {
      psVar11 = (short *)&(*(uint *)&gen_args[2]);
    }
    if (*psVar11 < 1) {
      psVar11 = (short *)&(*(int * PTR32 *)&gen_args[3]);
    }
    uVar9 = (int)*psVar11;
    break;
  case 0xd: ;
    if (*((char *)GEN_TOP(((int)this + 0x120))) == '\0') {
      return 0;
    }
    if (bVar17) goto LAB_005aaf31;
LAB_005aae2e: ;
    uVar9 = 0;
    break;
  case 0xe: ;
    if (*((char *)GEN_TOP(((int)this + 0x120))) == '\0') {
      return 0;
    }
    if (bVar17) goto LAB_005aaf31;
    uVar9 = *((int *)GEN_TOP(((int)this + 0xac))) - 1;
  }
  if (uVar9 != (*(uint *)&gen_args[1])) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x84))))(this GEN_EDX_ARG,uVar9,0);
  }
LAB_005aaf31: ;
  return *((int *)GEN_TOP(((int)this + 0xcc))) != -2;
}

/* ref: FUN_005ab2b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ab2b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x5ab2b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  undefined * pvVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = REFG(int, 0x1379860);
  pvVar1 = ((undefined *)GEN_TOP((REFG(int, 0x1379860) + 0x50)));
  *((undefined4 *)GEN_TOP((REFG(int, 0x1379860) + 0x40))) = 0;
  *((undefined4 *)GEN_TOP((iVar2 + 0x44))) = 0xffffffff;
  *((undefined4 *)GEN_TOP((iVar2 + 0x48))) = 0;
  *((undefined4 *)GEN_TOP((iVar2 + 0x4c))) = 0;
  F_0042e430(pvVar1 GEN_EDX_FWD,"");
  *((undefined4 *)GEN_TOP((iVar2 + 0x44))) = param_1;
  *((undefined4 *)GEN_TOP((iVar2 + 0x40))) = param_3;
  *((undefined4 *)GEN_TOP((iVar2 + 0xa4))) = 0;
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x130))) + 0x34))))((int)this + 0x130U);
  *((uint *)GEN_TOP(((int)this + 0x210))) = uVar3;
  if (((uVar3 != 0) && (param_2 != 0)) && (pvVar1 = *((undefined * PTR32 *)GEN_TOP((uVar3 + 0xa4))), pvVar1 != ((undefined *)GEN_TOP(0x0)))
     ) {
    ((int *)(gen_frame + 0x0))[0] = param_2;
    ((int *)(gen_frame + 0x0))[1] = 0;
    (*(undefined1 *)(gen_frame + 0x8)) = 1;
    F_005924f0(pvVar1 GEN_EDX_ARG,((int *)(gen_frame + 0x0)),0,0);
  }
  F_005aa3d0(REFG(int, 0x1379860) + 0x3c GEN_EDX_ARG,(int)this + 0x130U,(uint)*((ushort *)GEN_TOP(((int)this + 0x21c))),
               (uint)*((ushort *)GEN_TOP(((int)this + 0x21e))));
  return *((uint *)GEN_TOP(((int)this + 0x210)));
}

/* ref: Component::GUI2::AtkComponentTreeList::vf8 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ab370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ab370u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint * puVar1;
  uint uVar2;
  double dVar4;
  undefined1 AVar5;
  undefined2 uVar6;
  ushort uVar7;
  uint uVar8;
  undefined4 * puVar9;
  int * piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ushort uVar14;
  undefined4 uVar15;
  
  F_0058dd80(this GEN_EDX_FWD);
  if ((this != ((undefined *)GEN_TOP(0x0))) && (*(int *)(this + 0x70) != 0)) {
    puVar1 = ((uint *)GEN_TOP((*(int *)(this + 0x70) + 0x84)));
    *puVar1 = *puVar1 | 0x2000000;
  }
  for ((*(uint *)(gen_frame + 0x8)) = 0;
      (*(int *)(this + 0xc) != 0 && ((*(uint *)(gen_frame + 0x8)) < (uint)*(ushort *)(this + 0x1a) + *((int *)GEN_TOP((*(int *)(this + 0xc) + 4)))));
      (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1) {
    uVar8 = F_00578ee0(this + 4 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x8)));
    if (((*((byte *)GEN_TOP((uVar8 + 0x87))) & 1) != 0) && (((*((ushort *)GEN_TOP((uVar8 + 0x18))) < 1000 && (*((ushort *)GEN_TOP((uVar8 + 0x18))) != 10000)) && (*(int *)(this + 0x90) == 0)))) {
      *(uint *)(this + 0x90) = uVar8;
    }
  }
  if (*(int *)(this + 0x90) == 0) {
    iVar12 = *(int *)(this + 0x70);
    *(int *)(this + 0x90) = iVar12;
    if (iVar12 != 0) {
      *((uint *)GEN_TOP((iVar12 + 0x84))) = *((uint *)GEN_TOP((iVar12 + 0x84))) | 0x4000000;
    }
    iVar12 = *(int *)(this + 0x90);
    if (iVar12 != 0) {
      if (*((int *)GEN_TOP((iVar12 + 0x80))) == 0) {
        uVar15 = 0;
        uVar8 = F_00404270();
        puVar9 = ((undefined4 *)GEN_TOP(F_00406bd0(4,0,uVar8,uVar15)));
        if (puVar9 == ((undefined4 *)GEN_TOP(0x0))) {
          puVar9 = ((undefined4 *)GEN_TOP(0x0));
        }
        else {
          *puVar9 = 0;
        }
        *((undefined4 * PTR32 *)GEN_TOP((iVar12 + 0x80))) = puVar9;
      }
      F_00565340(*((undefined4 *)GEN_TOP((iVar12 + 0x80))) GEN_EDX_ARG,0xc,3,0,iVar12,this,0);
    }
  }
  if (*(int *)(this + 0x88) != 0) {
    iVar12 = *((int *)GEN_TOP((*(int *)(this + 0x88) + 0x70)));
    if (iVar12 != 0) {
      if (*((int *)GEN_TOP((iVar12 + 0x80))) == 0) {
        uVar15 = 0;
        uVar8 = F_00404270();
        puVar9 = ((undefined4 *)GEN_TOP(F_00406bd0(4,0,uVar8,uVar15)));
        if (puVar9 == ((undefined4 *)GEN_TOP(0x0))) {
          puVar9 = ((undefined4 *)GEN_TOP(0x0));
        }
        else {
          *puVar9 = 0;
        }
        *((undefined4 * PTR32 *)GEN_TOP((iVar12 + 0x80))) = puVar9;
      }
      F_00565340(*((undefined4 *)GEN_TOP((iVar12 + 0x80))) GEN_EDX_ARG,8,2,0,iVar12,this,0);
    }
    if ((*(int *)(this + 0x88) != 0) && (iVar12 = *((int *)GEN_TOP((*(int *)(this + 0x88) + 0x70))), iVar12 != 0)) {
      if (*((int *)GEN_TOP((iVar12 + 0x80))) == 0) {
        uVar15 = 0;
        uVar8 = F_00404270();
        puVar9 = ((undefined4 *)GEN_TOP(F_00406bd0(4,0,uVar8,uVar15)));
        if (puVar9 == ((undefined4 *)GEN_TOP(0x0))) {
          puVar9 = ((undefined4 *)GEN_TOP(0x0));
        }
        else {
          *puVar9 = 0;
        }
        *((undefined4 * PTR32 *)GEN_TOP((iVar12 + 0x80))) = puVar9;
      }
      F_00565340(*((undefined4 *)GEN_TOP((iVar12 + 0x80))) GEN_EDX_ARG,4,2,0,iVar12,this,0);
    }
    if ((*(int *)(this + 0x88) != 0) && (iVar12 = *((int *)GEN_TOP((*(int *)(this + 0x88) + 0x70))), iVar12 != 0)) {
      if (*((int *)GEN_TOP((iVar12 + 0x80))) == 0) {
        uVar15 = 0;
        uVar8 = F_00404270();
        puVar9 = ((undefined4 *)GEN_TOP(F_00406bd0(4,0,uVar8,uVar15)));
        if (puVar9 == ((undefined4 *)GEN_TOP(0x0))) {
          puVar9 = ((undefined4 *)GEN_TOP(0x0));
        }
        else {
          *puVar9 = 0;
        }
        *((undefined4 * PTR32 *)GEN_TOP((iVar12 + 0x80))) = puVar9;
      }
      F_00565340(*((undefined4 *)GEN_TOP((iVar12 + 0x80))) GEN_EDX_ARG,0x19,2,0,iVar12,this,0);
    }
    if ((*(int *)(this + 0x88) != 0) && (iVar12 = *((int *)GEN_TOP((*(int *)(this + 0x88) + 0x70))), iVar12 != 0)) {
      if (*((int *)GEN_TOP((iVar12 + 0x80))) == 0) {
        uVar15 = 0;
        uVar8 = F_00404270();
        puVar9 = ((undefined4 *)GEN_TOP(F_00406bd0(4,0,uVar8,uVar15)));
        if (puVar9 == ((undefined4 *)GEN_TOP(0x0))) {
          puVar9 = ((undefined4 *)GEN_TOP(0x0));
        }
        else {
          *puVar9 = 0;
        }
        *((undefined4 * PTR32 *)GEN_TOP((iVar12 + 0x80))) = puVar9;
      }
      F_00565340(*((undefined4 *)GEN_TOP((iVar12 + 0x80))) GEN_EDX_ARG,0x46,2,0,iVar12,this,0);
    }
    if ((*(int *)(this + 0x84) == 0) || (iVar12 = *((int *)GEN_TOP((*(int *)(this + 0x84) + 0x70))), iVar12 == 0)) {
      uVar6 = 0;
    }
    else {
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 0)) = gen_x87_cw | 0xc00;
      gen_set_x87_cw((unsigned short)(ushort)(*(uint *)(gen_frame + 0x8)));
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 0)) = (ushort)(int)TRUNC((float10)*((ushort *)GEN_TOP((iVar12 + 0x7e))) * (float10)((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar12 + 0x28))) * (float10)*((float *)GEN_TOP((iVar12 + 0x28))) + (float10)*((float *)GEN_TOP((iVar12 + 0x2c))) * (float10)*((float *)GEN_TOP((iVar12 + 0x2c)))))))))));
      gen_set_x87_cw((unsigned short)gen_x87_cw);
      uVar6 = (ushort)(*(uint *)(gen_frame + 0x8));
    }
    *((undefined2 *)GEN_TOP((*(int *)(this + 0x88) + 0xc2))) = uVar6;
  }
  piVar10 = *(int * PTR32 *)(this + 0xa0);
  AVar5 = (undefined1)0x0;
  if (this[0x110] != (undefined1)0x0) {
    do {
      if ((*piVar10 == 0) || (iVar12 = *((int *)GEN_TOP((*piVar10 + 0x70))), iVar12 == 0)) {
        uVar14 = 0;
      }
      else {
        uVar14 = *((ushort *)GEN_TOP((iVar12 + 0x7e)));
      }
      uVar7 = F_005c0650(this GEN_EDX_ARG);
      dVar4 = (GEN_X87MATH(((double)(float)((float10)uVar7 / (float10)uVar14)),0xe));
      (*(ushort *)(gen_frame + 0x0)) = gen_x87_cw | 0xc00;
      gen_set_x87_cw((unsigned short)(*(ushort *)(gen_frame + 0x0)));
      (*(ushort *)(gen_frame + 0x0)) = (ushort)(int)TRUNC((float10)(float)dVar4);
      uVar8 = (uint)(ushort)((*(ushort *)(gen_frame + 0x0)) + 2);
      gen_set_x87_cw((unsigned short)gen_x87_cw);
      if (uVar8 < 8) {
        uVar8 = 8;
      }
      *(short *)(piVar10 + 2) = (short)uVar8;
      uVar8 = F_005aa820(this GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)piVar10 + 10))),uVar8);
      piVar10[1] = uVar8;
      AVar5 = (undefined1)((char)AVar5 + 1);
      piVar10 = piVar10 + 3;
    } while ((byte)AVar5 < (byte)this[0x110]);
  }
  iVar12 = *(int *)(this + 0xc);
  uVar8 = 0;
LAB_005ab6f4: ;
  do {
    if ((iVar12 == 0) || (uVar2 = *((uint *)GEN_TOP((iVar12 + 4))), *(ushort *)(this + 0x1a) + uVar2 <= uVar8)) goto LAB_005ab8b1;
    if (((byte)this[0x60] & 1) != 0) {
      if (uVar8 < uVar2) {
        iVar11 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar12 + 8))) + uVar8 * 4)));
LAB_005ab763: ;
        if ((iVar11 != 0) && ((*((byte *)GEN_TOP((iVar11 + 0x87))) & 1) != 0)) {
          if (*((int *)GEN_TOP((iVar11 + 0x80))) == 0) {
            uVar15 = 0;
            uVar8 = F_00404270();
            puVar9 = ((undefined4 *)GEN_TOP(F_00406bd0(4,0,uVar8,uVar15)));
            if (puVar9 == ((undefined4 *)GEN_TOP(0x0))) {
              puVar9 = ((undefined4 *)GEN_TOP(0x0));
            }
            else {
              *puVar9 = 0;
            }
            *((undefined4 * PTR32 *)GEN_TOP((iVar11 + 0x80))) = puVar9;
          }
          piVar10 = *((int * PTR32 *)GEN_TOP((iVar11 + 0x80)));
          uVar8 = F_00404270();
          puVar9 = ((undefined4 *)GEN_TOP(F_00406bd0(0x18,0,uVar8,0)));
          if (puVar9 == ((undefined4 *)GEN_TOP(0x0))) goto LAB_005ab813;
          puVar9[4] = 0;
          puVar9[5] = 0;
          iVar12 = *piVar10;
          if (iVar12 != 0) break;
          *piVar10 = (int)puVar9;
          goto LAB_005ab7f2;
        }
      }
      else {
        iVar11 = uVar8 - uVar2;
        piVar10 = *(int * PTR32 *)(this + 0x4c);
        if (piVar10 != *(int * PTR32 *)(this + 0x50)) {
          do {
            iVar13 = iVar11 - (((int *)GEN_TOP(*piVar10)))[1];
            if (iVar13 < 0) {
              iVar11 = iVar11 * 0x90 + *((int *)GEN_TOP(*piVar10));
              goto LAB_005ab763;
            }
            piVar10 = piVar10 + 1;
            iVar11 = iVar13;
          } while (piVar10 != *(int * PTR32 *)(this + 0x50));
          uVar8 = uVar8 + 1;
          goto LAB_005ab6f4;
        }
      }
    }
    uVar8 = uVar8 + 1;
  } while( true );
  while (iVar12 = iVar13, iVar13 != 0) {
    iVar13 = *((int *)GEN_TOP((iVar12 + 0x10)));
    if (iVar13 == 0) {
      *((undefined4 * PTR32 *)GEN_TOP((iVar12 + 0x10))) = puVar9;
      break;
    }
  }
LAB_005ab7f2: ;
  *(undefined1 *)(puVar9 + 5) = 0x11;
  puVar9[5] = puVar9[5] & 0xffefffff;
  puVar9[3] = 3;
  puVar9[1] = iVar11;
  puVar9[2] = this;
  *puVar9 = 0;
LAB_005ab813: ;
  if (*((int *)GEN_TOP((iVar11 + 0x80))) == 0) {
    uVar15 = 0;
    uVar8 = F_00404270();
    puVar9 = ((undefined4 *)GEN_TOP(F_00406bd0(4,0,uVar8,uVar15)));
    if (puVar9 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar9 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      *puVar9 = 0;
    }
    *((undefined4 * PTR32 *)GEN_TOP((iVar11 + 0x80))) = puVar9;
  }
  piVar10 = *((int * PTR32 *)GEN_TOP((iVar11 + 0x80)));
  uVar8 = F_00404270();
  puVar9 = ((undefined4 *)GEN_TOP(F_00406bd0(0x18,0,uVar8,0)));
  if (puVar9 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar9[4] = 0;
    puVar9[5] = 0;
    iVar12 = *piVar10;
    if (iVar12 == 0) {
      *piVar10 = (int)puVar9;
    }
    else {
      do {
        iVar13 = *((int *)GEN_TOP((iVar12 + 0x10)));
        if (iVar13 == 0) {
          *((undefined4 * PTR32 *)GEN_TOP((iVar12 + 0x10))) = puVar9;
          break;
        }
        iVar12 = iVar13;
      } while (iVar13 != 0);
    }
    *(undefined1 *)(puVar9 + 5) = 0x12;
    puVar9[5] = puVar9[5] & 0xffefffff;
    puVar9[3] = 3;
    puVar9[1] = iVar11;
    puVar9[2] = this;
    *puVar9 = 0;
  }
  *((uint *)GEN_TOP((iVar11 + 0x84))) = *((uint *)GEN_TOP((iVar11 + 0x84))) | 0x4000000;
LAB_005ab8b1: ;
  puVar9 = ((undefined4 *)GEN_TOP(F_0057c0b0(this GEN_EDX_ARG,this + 0x150,this + 0x15c)));
  iVar12 = *((int *)GEN_TOP((((int)(uint)(this)) + 0x70)));
  if (iVar12 != 0) {
    if (*((int *)GEN_TOP((iVar12 + 0x80))) == 0) {
      uVar15 = 0;
      uVar8 = F_00404270();
      puVar9 = ((undefined4 *)GEN_TOP(F_00406bd0(4,0,uVar8,uVar15)));
      if (puVar9 == ((undefined4 *)GEN_TOP(0x0))) {
        puVar9 = ((undefined4 *)GEN_TOP(0x0));
      }
      else {
        *puVar9 = 0;
      }
      *((undefined4 * PTR32 *)GEN_TOP((iVar12 + 0x80))) = puVar9;
    }
    piVar10 = *((int * PTR32 *)GEN_TOP((iVar12 + 0x80)));
    uVar8 = F_00404270();
    puVar9 = ((undefined4 *)GEN_TOP(F_00406bd0(0x18,0,uVar8,0)));
    if (puVar9 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar9[4] = 0;
      puVar9[5] = 0;
      iVar11 = *piVar10;
      if (iVar11 == 0) {
        *piVar10 = (int)puVar9;
      }
      else {
        do {
          iVar13 = *((int *)GEN_TOP((iVar11 + 0x10)));
          if (iVar13 == 0) {
            *((undefined4 * PTR32 *)GEN_TOP((iVar11 + 0x10))) = puVar9;
            break;
          }
          iVar11 = iVar13;
        } while (iVar13 != 0);
      }
      *(undefined1 *)(puVar9 + 5) = 0x46;
      puVar9[5] = puVar9[5] & 0xffefffff;
      puVar9[3] = 0;
      puVar9[1] = iVar12;
      puVar9[2] = this;
      *puVar9 = 0;
    }
  }
  iVar12 = *(int *)(this + 0x6c);
  if (iVar12 != 0) {
    if (*((int *)GEN_TOP((iVar12 + 0x80))) == 0) {
      uVar15 = 0;
      uVar8 = F_00404270();
      puVar9 = ((undefined4 *)GEN_TOP(F_00406bd0(4,0,uVar8,uVar15)));
      if (puVar9 == ((undefined4 *)GEN_TOP(0x0))) {
        puVar9 = ((undefined4 *)GEN_TOP(0x0));
      }
      else {
        *puVar9 = 0;
      }
      *((undefined4 * PTR32 *)GEN_TOP((iVar12 + 0x80))) = puVar9;
    }
    piVar10 = *((int * PTR32 *)GEN_TOP((iVar12 + 0x80)));
    uVar8 = F_00404270();
    puVar9 = ((undefined4 *)GEN_TOP(F_00406bd0(0x18,0,uVar8,0)));
    if (puVar9 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar9[4] = 0;
      puVar9[5] = 0;
      iVar11 = *piVar10;
      if (iVar11 == 0) {
        *piVar10 = (int)puVar9;
      }
      else {
        do {
          iVar13 = *((int *)GEN_TOP((iVar11 + 0x10)));
          if (iVar13 == 0) {
            *((undefined4 * PTR32 *)GEN_TOP((iVar11 + 0x10))) = puVar9;
            break;
          }
          iVar11 = iVar13;
        } while (iVar13 != 0);
      }
      *(undefined1 *)(puVar9 + 5) = 8;
      puVar9[5] = puVar9[5] & 0xffefffff;
      puVar9[3] = 0;
      puVar9[1] = iVar12;
      puVar9[2] = this;
      *puVar9 = 0;
    }
  }
  iVar12 = *(int *)(this + 0x6c);
  if (iVar12 != 0) {
    if (*((int *)GEN_TOP((iVar12 + 0x80))) == 0) {
      uVar15 = 0;
      uVar8 = F_00404270();
      puVar9 = ((undefined4 *)GEN_TOP(F_00406bd0(4,0,uVar8,uVar15)));
      if (puVar9 == ((undefined4 *)GEN_TOP(0x0))) {
        puVar9 = ((undefined4 *)GEN_TOP(0x0));
      }
      else {
        *puVar9 = 0;
      }
      *((undefined4 * PTR32 *)GEN_TOP((iVar12 + 0x80))) = puVar9;
    }
    piVar10 = *((int * PTR32 *)GEN_TOP((iVar12 + 0x80)));
    uVar8 = F_00404270();
    puVar9 = ((undefined4 *)GEN_TOP(F_00406bd0(0x18,0,uVar8,0)));
    if (puVar9 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar9[4] = 0;
      puVar9[5] = 0;
      iVar11 = *piVar10;
      if (iVar11 == 0) {
        *piVar10 = (int)puVar9;
      }
      else {
        do {
          iVar13 = *((int *)GEN_TOP((iVar11 + 0x10)));
          if (iVar13 == 0) {
            *((undefined4 * PTR32 *)GEN_TOP((iVar11 + 0x10))) = puVar9;
            break;
          }
          iVar11 = iVar13;
        } while (iVar13 != 0);
      }
      *(undefined1 *)(puVar9 + 5) = 0xc;
      puVar9[5] = puVar9[5] & 0xffefffff;
      puVar9[3] = 0;
      puVar9[1] = iVar12;
      puVar9[2] = this;
      *puVar9 = 0;
    }
  }
  return (uint)puVar9;
}

/* ref: FUN_005abab0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005abab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(ushort * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5abab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x38, 8, 4);
  byte bVar1;
  undefined * this_00;
  int iVar2;
  undefined4 in_EAX = 0;
  uint uVar3;
  uint uVar4;
  
  bVar1 = *((byte *)GEN_TOP(((int)this + 0xaa)));
  uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),bVar1);
  if ((bVar1 & 3) == 0) {
    if (*((int *)GEN_TOP(((int)this + 0xa4))) != 0) {
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa4))) + 0x95))) = 1;
    }
    (*(undefined2 *)(gen_frame + 0x0)) = 0x2d;
    (*(uint *)(gen_frame + 0x10)) = 0;
    (*(uint *)(gen_frame + 0x8)) = 0;
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = ((undefined *)GEN_TOP(0x0));
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x70)));
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(uint *)(gen_frame + 0x20)) = (int)this + 0x84U;
    (*(uint *)(gen_frame + 0x8)) = (int)this + 0x84U;
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 1)) = *((undefined1 *)GEN_TOP(((int)param_1 + 7)));
    iVar2 = *((int *)GEN_TOP(((int)this + 0x88)));
    (*(undefined2 *)(gen_frame + 0x2)) = 0;
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = this_00;
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 0)) = (char)param_1[3];
    (*(uint *)(gen_frame + 0x10)) = (uint)param_1[3];
    if (iVar2 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0;
    }
    else {
      (*(float *)(gen_frame + 0x30)) = *((float *)GEN_TOP((iVar2 + 0x30)));
      (*(float *)(gen_frame + 0x28)) = *((float *)GEN_TOP((iVar2 + 0x34)));
      F_00563250(this_00,(uint)&(*(float *)(gen_frame + 0x2c)),(uint)&(*(float *)(gen_frame + 0x24)));
      *((short *)GEN_TOP(((int)this + 0x94))) =
           (short)(int)(((float10)(int)(short)*param_1 - (float10)(*(float *)(gen_frame + 0x30))) / (float10)(*(float *)(gen_frame + 0x2c)));
      *((short *)GEN_TOP(((int)this + 0x96))) =
           (short)(int)(((float10)(int)(short)param_1[1] - (float10)(*(float *)(gen_frame + 0x28))) / (float10)(*(float *)(gen_frame + 0x24)));
    }
    F_005997b0(this_00 GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x0)));
    iVar2 = REFG(int, 0x1379860);
    if ((*((int *)GEN_TOP((REFG(int, 0x1379860) + 0xb4))) != 0) ||
       (((uVar3 = *((uint *)GEN_TOP(((int)this + 0x88))), uVar3 != 0 &&
         ((*((uint *)GEN_TOP((uVar3 + 0x84))) & 0x100000) != 0)) && ((*((uint *)GEN_TOP((uVar3 + 0x88))) & 0x20000) == 0))
       )) {
      F_00563170(this GEN_EDX_ARG,1);
      uVar3 = F_005aa3d0(iVar2 + 0x3c GEN_EDX_ARG,(*(uint *)(gen_frame + 0x20)),(uint)*param_1,(uint)param_1[1]);
      return uVar3;
    }
    if (*((int *)GEN_TOP(((int)this + 0xa4))) != 0) {
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa4))) + 0x95))) = 0;
    }
  }
  else if (((bVar1 & 4) != 0) && ((bVar1 & 2) != 0)) {
    uVar4 = F_00565340(REFG(int, 0x1379860) + 0x23c GEN_EDX_ARG,4,0,0,REFG(int, 0x1379860),this,0);
    uVar3 = 0;
    if (uVar4 != 0) {
      *((uint *)GEN_TOP((uVar4 + 0x14))) = *((uint *)GEN_TOP((uVar4 + 0x14))) & 0xffbfffff;
      return uVar4;
    }
  }
  return uVar3;
}

/* ref: FUN_005abc40 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005abc40(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_2, unsigned int gen_a1), GEN_P(char * param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x5abc40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(char * param_3 = (char *)(uintptr_t)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined * this;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  char * pcVar5;
  
  if (*((int *)GEN_TOP(((int)param_1 + 0x8c))) != 0) {
    pcVar5 = param_2;
    if (param_2 == ((char *)GEN_TOP(0x0))) {
      pcVar5 = "";
    }
    F_0042e430(((undefined *)GEN_TOP(((int)param_1 + 0xf0))) GEN_EDX_FWD,pcVar5);
    if ((param_3 == ((char *)GEN_TOP(0x0))) || (*param_3 == '\0')) {
      F_0042ccf0(((undefined *)GEN_TOP(((int)param_1 + 0x9c))) GEN_EDX_ARG,(int)param_1 + 0xf0);
    }
    else {
      F_0042e430(((undefined *)GEN_TOP(((int)param_1 + 0x9c))) GEN_EDX_ARG,param_3);
    }
    F_0058b2a0(param_1 GEN_EDX_ARG);
    iVar2 = *((int *)GEN_TOP(((int)param_1 + 0x8c)));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      this = ((undefined *)GEN_TOP(F_005684e0(iVar2 GEN_EDX_ARG,1)));
      if (this == ((undefined *)GEN_TOP(0x0))) {
        uVar1 = 0;
      }
      else {
        uVar1 = F_005769d0(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar2 + 0xf0))));
        puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0xa8)));
        puVar4 = ((undefined4 *)GEN_TOP(((int)this + 100)));
        for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
    }
    iVar2 = *((int *)GEN_TOP(((int)param_1 + 0x8c)));
    if (iVar2 != 0) {
      *((uint *)GEN_TOP((iVar2 + 0x104))) = uVar1 & 0xffff;
      *((uint *)GEN_TOP((iVar2 + 0x108))) = uVar1 & 0xffff;
    }
    uVar1 = F_0042a990((int)param_1 + 0x9c GEN_EDX_ARG);
    puVar3 = ((undefined4 *)GEN_TOP(((int)param_1 + 0x354)));
    if ((*((uint *)GEN_TOP(((int)param_1 + 0x354))) >> 5 & 1) != 0) {
      F_005a0260(puVar3 GEN_EDX_ARG);
    }
    *puVar3 = 6;
    *((uint *)GEN_TOP(((int)param_1 + 0x358))) = uVar1;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) + 4))))
              (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0)),10,1,puVar3);
    F_0058b190(param_1 GEN_EDX_ARG,-(uint)(((*(uint *)(gen_frame + 0x0)) & 0xf) != 0) & (*(uint *)(gen_frame + 0x4)));
    if (*((char *)GEN_TOP(((int)param_1 + 0x84))) != '\0') {
      if (param_4 == '\0') {
        F_0042ccf0(((undefined *)GEN_TOP(((int)param_1 + 0x1fc))) GEN_EDX_ARG,(int)param_1 + 0x9c);
        F_0042ccf0(((undefined *)GEN_TOP(((int)param_1 + 0x250))) GEN_EDX_ARG,(int)param_1 + 0xf0);
      }
      if (*((int *)GEN_TOP(((int)param_1 + 0x2f8))) != 0) {
        F_0042e430(((undefined *)GEN_TOP(((int)param_1 + 0x2a4))) GEN_EDX_ARG,
                     *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0x2f8))) + 0xf0))));
      }
      F_00593de0(**((undefined4 * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x18))) GEN_EDX_ARG,(int)param_1 + 0x9c,(int)param_1 + 0xf0,
                   0xffffffff,0,0,1,0);
    }
    iVar2 = *((int *)GEN_TOP(((int)param_1 + 0x8c)));
    if (iVar2 != 0) {
      *((uint *)GEN_TOP((iVar2 + 0x84))) =
           *((uint *)GEN_TOP((iVar2 + 0x84))) ^
           ((uint)(param_2 != ((char *)GEN_TOP(0x0))) << 0x14 ^ *((uint *)GEN_TOP((iVar2 + 0x84)))) & 0x100000;
      *((uint *)GEN_TOP((iVar2 + 0x88))) =
           *((uint *)GEN_TOP((iVar2 + 0x88))) ^
           ((uint)(param_2 == ((char *)GEN_TOP(0x0))) << 7 ^ *((uint *)GEN_TOP((iVar2 + 0x88)))) & 0x80;
    }
    if (((*(uint *)(gen_frame + 0x0)) >> 5 & 1) != 0) {
      F_005a0260(&(*(uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
  }
  return;
}

/* ref: FUN_005abe40 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005abe40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5abe40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined * this_00;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if ((*((int *)GEN_TOP(((int)this + 0x8c))) != 0) && (param_1 != 0)) {
    F_0042e370(((undefined *)GEN_TOP(((int)this + 0xf0))) GEN_EDX_FWD,param_1);
    F_0042e370(((undefined *)GEN_TOP(((int)this + 0x9c))) GEN_EDX_ARG,param_1);
    F_0058b2a0(this GEN_EDX_ARG);
    iVar2 = *((int *)GEN_TOP(((int)this + 0x8c)));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      this_00 = ((undefined *)GEN_TOP(F_005684e0(iVar2 GEN_EDX_ARG,1)));
      if (this_00 == ((undefined *)GEN_TOP(0x0))) {
        uVar1 = 0;
      }
      else {
        uVar1 = F_005769d0(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar2 + 0xf0))));
        puVar3 = ((undefined4 *)GEN_TOP(((int)this_00 + 0xa8)));
        puVar4 = ((undefined4 *)GEN_TOP(((int)this_00 + 100)));
        for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
    }
    iVar2 = *((int *)GEN_TOP(((int)this + 0x8c)));
    if (iVar2 != 0) {
      *((uint *)GEN_TOP((iVar2 + 0x104))) = uVar1 & 0xffff;
      *((uint *)GEN_TOP((iVar2 + 0x108))) = uVar1 & 0xffff;
    }
    iVar2 = (int)this + 0x9c;
    uVar1 = F_0042a990(iVar2 GEN_EDX_ARG);
    puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x354)));
    if ((*((uint *)GEN_TOP(((int)this + 0x354))) >> 5 & 1) != 0) {
      F_005a0260(puVar3 GEN_EDX_ARG);
    }
    *puVar3 = 6;
    *((uint *)GEN_TOP(((int)this + 0x358))) = uVar1;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) + 4))))
              (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0)),10,1,puVar3);
    F_0058b190(this GEN_EDX_ARG,-(uint)(((*(uint *)(gen_frame + 0x0)) & 0xf) != 0) & (*(uint *)(gen_frame + 0x4)));
    if (*((char *)GEN_TOP(((int)this + 0x84))) != '\0') {
      F_0042ccf0(((undefined *)GEN_TOP(((int)this + 0x1fc))) GEN_EDX_ARG,iVar2);
      F_0042ccf0(((undefined *)GEN_TOP(((int)this + 0x250))) GEN_EDX_ARG,(int)this + 0xf0);
      if (*((int *)GEN_TOP(((int)this + 0x2f8))) != 0) {
        F_0042e430(((undefined *)GEN_TOP(((int)this + 0x2a4))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2f8))) + 0xf0)))
                    );
      }
      F_00593de0(**((undefined4 * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x18))) GEN_EDX_ARG,iVar2,(int)this + 0xf0,0xffffffff,0,0,1,0)
      ;
    }
    iVar2 = *((int *)GEN_TOP(((int)this + 0x8c)));
    if (iVar2 != 0) {
      *((uint *)GEN_TOP((iVar2 + 0x84))) = *((uint *)GEN_TOP((iVar2 + 0x84))) | 0x100000;
      *((uint *)GEN_TOP((iVar2 + 0x88))) = *((uint *)GEN_TOP((iVar2 + 0x88))) & 0xffffff7f;
    }
    if (((*(uint *)(gen_frame + 0x0)) >> 5 & 1) != 0) {
      F_005a0260(&(*(uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
  }
  return;
}

/* ref: FUN_005abfe0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005abfe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5abfe0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  
  if ((*param_2 >> 5 & 1) != 0) {
    F_005a0260(param_2 GEN_EDX_FWD);
  }
  *(undefined1 *)(param_2 + 1) = (undefined1)param_1;
  *param_2 = 2;
  bVar1 = *((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x8c))) + 0xfc)));
  if ((param_2[2] >> 5 & 1) != 0) {
    F_005a0260(param_2 + 2 GEN_EDX_ARG);
  }
  param_2[2] = 4;
  param_2[3] = (uint)(bVar1 >> 4);
  bVar1 = *((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x8c))) + 0xfd)));
  if ((param_2[4] >> 5 & 1) != 0) {
    F_005a0260(param_2 + 4 GEN_EDX_ARG);
  }
  param_2[5] = (uint)bVar1;
  param_2[4] = 4;
  uVar3 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x8c))) + 0x90)));
  if ((param_2[6] >> 5 & 1) != 0) {
    F_005a0260(param_2 + 6 GEN_EDX_ARG);
  }
  param_2[6] = 4;
  param_2[7] = uVar3;
  uVar3 = *((uint *)GEN_TOP(((int)this + 0x1c8)));
  if ((param_2[8] >> 5 & 1) != 0) {
    F_005a0260(param_2 + 8 GEN_EDX_ARG);
  }
  param_2[8] = 4;
  param_2[9] = uVar3;
  uVar3 = *((uint *)GEN_TOP(((int)this + 0x1c4)));
  if ((param_2[10] >> 5 & 1) != 0) {
    F_005a0260(param_2 + 10 GEN_EDX_ARG);
  }
  param_2[10] = 4;
  param_2[0xb] = uVar3;
  uVar2 = *((ushort *)GEN_TOP(((int)this + 0x1f0)));
  if ((param_2[0xc] >> 5 & 1) != 0) {
    F_005a0260(param_2 + 0xc GEN_EDX_ARG);
  }
  param_2[0xc] = 4;
  param_2[0xd] = (uint)uVar2;
  if ((param_2[0xe] >> 5 & 1) != 0) {
    F_005a0260(param_2 + 0xe GEN_EDX_ARG);
  }
  param_2[0xe] = 6;
  param_2[0xf] = (int)this + 0x1e0;
  uVar3 = *((uint *)GEN_TOP(((int)this + 0x1d4)));
  if ((param_2[0x10] >> 5 & 1) != 0) {
    F_005a0260(param_2 + 0x10 GEN_EDX_ARG);
  }
  param_2[0x10] = 4;
  param_2[0x11] = uVar3;
  uVar3 = *((uint *)GEN_TOP(((int)this + 0x1d8)));
  if ((param_2[0x12] >> 5 & 1) != 0) {
    F_005a0260(param_2 + 0x12 GEN_EDX_ARG);
  }
  param_2[0x12] = 4;
  param_2[0x13] = uVar3;
  if ((*((byte *)GEN_TOP(((int)this + 0x1df))) & 0x10) == 0) {
    uVar3 = *((uint *)GEN_TOP(((int)this + 0x1cc)));
    if ((uVar3 != 0) || ((*((byte *)GEN_TOP(((int)this + 0x1df))) & 4) == 0)) {
      if ((param_2[0x14] >> 5 & 1) != 0) {
        F_005a0260(param_2 + 0x14 GEN_EDX_ARG);
      }
      param_2[0x15] = uVar3;
      goto LAB_005ac1f3;
    }
  }
  if (*((int *)GEN_TOP(((int)this + 0x8c))) == 0) {
    param_1 = 0;
  }
  else {
    param_1 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x8c))) + 0x7c)));
  }
  if ((param_2[0x14] >> 5 & 1) != 0) {
    F_005a0260(param_2 + 0x14 GEN_EDX_ARG);
  }
  param_2[0x15] = param_1;
LAB_005ac1f3: ;
  param_2[0x14] = 4;
  uVar3 = *((uint *)GEN_TOP(((int)this + 0x1d0)));
  if ((param_2[0x16] >> 5 & 1) != 0) {
    F_005a0260(param_2 + 0x16 GEN_EDX_ARG);
  }
  param_2[0x16] = 4;
  param_2[0x17] = uVar3;
  bVar1 = *((byte *)GEN_TOP(((int)this + 0x1de)));
  if ((param_2[0x18] >> 5 & 1) != 0) {
    uVar3 = F_005a0260(param_2 + 0x18 GEN_EDX_ARG);
  }
  *(byte *)(param_2 + 0x19) = bVar1 >> 3 & 1;
  param_2[0x18] = 2;
  return uVar3;
}

/* ref: FUN_005ac260 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ac260(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4), GEN_P(undefined1 param_6, unsigned int gen_a5), GEN_P(char param_7, unsigned int gen_a6))
{
  GEN_ENTER(0x5ac260u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  GEN_PIN(undefined1 param_6 = (undefined1)gen_a5;)
  GEN_PIN(char param_7 = (char)gen_a6;)
  GEN_FRAME_DECL_TOP(0x50, 0, 4);
  uint uVar1;
  undefined * this;
  uint * puVar2;
  uint * puVar3;
  undefined4 * puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 * puVar7;
  int iVar8;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  iVar8 = *((int *)GEN_TOP(((int)param_1 + 0x8c)));
  if (iVar8 == 0) {
    uVar6 = 0;
  }
  else {
    this = ((undefined *)GEN_TOP(F_005684e0(iVar8 GEN_EDX_FWD,1)));
    uVar6 = 0;
    if (this != ((undefined *)GEN_TOP(0x0))) {
      uVar6 = F_005769d0(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar8 + 0xf0))));
      puVar4 = ((undefined4 *)GEN_TOP(((int)this + 0xa8)));
      puVar7 = ((undefined4 *)GEN_TOP(((int)this + 100)));
      for (iVar8 = 0x11; iVar8 != 0; iVar8 = iVar8 - 1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
    }
  }
  uVar1 = *((uint *)GEN_TOP(((int)param_1 + 0x150)));
  (*(uint *)(gen_frame + 0x8)) = uVar6;
  if (((param_3 == uVar1) && (param_4 == *((uint *)GEN_TOP(((int)param_1 + 0x154))))) ||
     ((param_4 == uVar1 && (param_3 == *((uint *)GEN_TOP(((int)param_1 + 0x154))))))) {
    if ((uVar6 == *((uint *)GEN_TOP(((int)param_1 + 500)))) && (param_7 == '\0')) {
      return 0;
    }
  }
  else {
    iVar8 = *((int *)GEN_TOP(((int)param_1 + 0x8c)));
    if (iVar8 != 0) {
      *((uint *)GEN_TOP((iVar8 + 0x104))) = param_3 & 0xffff;
      *((uint *)GEN_TOP((iVar8 + 0x108))) = param_4 & 0xffff;
      uVar6 = (*(uint *)(gen_frame + 0x8));
    }
  }
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x158))) = param_2;
  *((uint *)GEN_TOP(((int)param_1 + 0x150))) = param_3;
  *((uint *)GEN_TOP(((int)param_1 + 0x154))) = param_4;
  *((uint *)GEN_TOP(((int)param_1 + 500))) = uVar6;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(uint *)(gen_frame + 0x1c)) = 0;
  (*(uint *)(gen_frame + 0x24)) = 0;
  (*(uint *)(gen_frame + 0x2c)) = 0;
  (*(uint *)(gen_frame + 0x34)) = 0;
  (*(uint *)(gen_frame + 0x3c)) = 0;
  uVar6 = F_0042a990((int)param_1 + 0x9c GEN_EDX_ARG);
  if (((*(uint *)(gen_frame + 0xc)) >> 5 & 1) != 0) {
    F_005a0260(&(*(uint *)(gen_frame + 0xc)) GEN_EDX_ARG);
  }
  (*(uint *)(gen_frame + 0xc)) = 6;
  (*(uint *)(gen_frame + 0x10)) = uVar6;
  uVar6 = F_0042a990((int)param_1 + 0xf0 GEN_EDX_ARG);
  if (((*(uint *)(gen_frame + 0x14)) >> 5 & 1) != 0) {
    F_005a0260(&(*(uint *)(gen_frame + 0x14)) GEN_EDX_ARG);
  }
  (*(uint *)(gen_frame + 0x14)) = 6;
  (*(uint *)(gen_frame + 0x18)) = uVar6;
  if (((*(uint *)(gen_frame + 0x1c)) >> 5 & 1) != 0) {
    F_005a0260(&(*(uint *)(gen_frame + 0x1c)) GEN_EDX_ARG);
  }
  uVar6 = *((uint *)GEN_TOP(((int)param_1 + 0x154)));
  uVar1 = *((uint *)GEN_TOP(((int)param_1 + 0x150)));
  (*(uint *)(gen_frame + 0x1c)) = 3;
  (*(undefined4 *)(gen_frame + 0x20)) = param_2;
  if (uVar6 < uVar1) {
    if (((*(uint *)(gen_frame + 0x24)) >> 5 & 1) != 0) {
      F_005a0260(&(*(uint *)(gen_frame + 0x24)) GEN_EDX_ARG);
    }
    (*(uint *)(gen_frame + 0x28)) = uVar6;
    uVar5 = *((undefined4 *)GEN_TOP(((int)param_1 + 0x150)));
  }
  else {
    if (((*(uint *)(gen_frame + 0x24)) >> 5 & 1) != 0) {
      F_005a0260(&(*(uint *)(gen_frame + 0x24)) GEN_EDX_ARG);
    }
    uVar5 = *((undefined4 *)GEN_TOP(((int)param_1 + 0x154)));
    (*(uint *)(gen_frame + 0x28)) = uVar1;
  }
  (*(uint *)(gen_frame + 0x24)) = 3;
  if (((*(uint *)(gen_frame + 0x2c)) >> 5 & 1) != 0) {
    F_005a0260(&(*(uint *)(gen_frame + 0x2c)) GEN_EDX_ARG);
  }
  (*(undefined4 *)(gen_frame + 0x30)) = uVar5;
  (*(uint *)(gen_frame + 0x2c)) = 3;
  if (((*(uint *)(gen_frame + 0x34)) >> 5 & 1) != 0) {
    F_005a0260(&(*(uint *)(gen_frame + 0x34)) GEN_EDX_ARG);
  }
  (*(uint *)(gen_frame + 0x34)) = 2;
  (*(undefined1 *)(gen_frame + 0x38)) = param_5;
  if (((*(uint *)(gen_frame + 0x3c)) >> 5 & 1) != 0) {
    F_005a0260(&(*(uint *)(gen_frame + 0x3c)) GEN_EDX_ARG);
  }
  (*(uint *)(gen_frame + 0x3c)) = 2;
  ((undefined1 *)(gen_frame + 0x40))[0] = param_6;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) + 4))))
            (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) GEN_EDX_ARG,((uint *)(gen_frame + 0x0)),8,7,&(*(uint *)(gen_frame + 0xc)));
  F_0057ce90(param_1 GEN_EDX_ARG);
  if ((((uint *)(gen_frame + 0x0))[0] >> 5 & 1) != 0) {
    F_005a0260(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  ((uint *)(gen_frame + 0x0))[0] = 0;
  iVar8 = 6;
  puVar2 = &(*(uint *)(gen_frame + 0x48));
  do {
    uVar6 = puVar2[-3];
    puVar3 = puVar2 - 2;
    if ((uVar6 >> 5 & 1) != 0) {
      puVar4 = ((undefined4 *)GEN_TOP(*puVar3));
      if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
        uVar6 = uVar6 & 0xf;
        if (uVar6 == 9) {
          F_00488040(puVar4 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x8)),*puVar4,puVar4[1]);
          F_00488dc0(puVar4 GEN_EDX_ARG);
          uVar6 = F_00406ad0(puVar4);
        }
        else if ((uVar6 == 6) || (uVar6 == 7)) {
          uVar6 = F_00406ad0(puVar4);
          *puVar3 = 0;
        }
      }
      *puVar3 = 0;
    }
    iVar8 = iVar8 - 1;
    puVar2[-3] = 0;
    puVar2 = puVar3;
  } while (-1 < iVar8);
  return uVar6;
}

/* ref: FUN_005ac530 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ac530(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5ac530u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  byte bVar1;
  uint uVar2;
  
  if ((*param_3 >> 5 & 1) != 0) {
    F_005a0260(param_3 GEN_EDX_FWD);
  }
  *param_3 = 2;
  *(undefined1 *)(param_3 + 1) = param_2;
  bVar1 = *((byte *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x8c))) + 0xfc)));
  if ((param_3[2] >> 5 & 1) != 0) {
    F_005a0260(param_3 + 2 GEN_EDX_ARG);
  }
  param_3[2] = 4;
  param_3[3] = (uint)(bVar1 >> 4);
  bVar1 = *((byte *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x8c))) + 0xfd)));
  if ((param_3[4] >> 5 & 1) != 0) {
    F_005a0260(param_3 + 4 GEN_EDX_ARG);
  }
  param_3[4] = 4;
  param_3[5] = (uint)bVar1;
  uVar2 = *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x8c))) + 0x90)));
  if ((param_3[6] >> 5 & 1) != 0) {
    F_005a0260(param_3 + 6 GEN_EDX_ARG);
  }
  param_3[6] = 4;
  param_3[7] = uVar2;
  if ((param_3[8] >> 5 & 1) != 0) {
    F_005a0260(param_3 + 8 GEN_EDX_ARG);
  }
  param_3[8] = 4;
  param_3[9] = 0;
  if ((param_3[10] >> 5 & 1) != 0) {
    F_005a0260(param_3 + 10 GEN_EDX_ARG);
  }
  param_3[10] = 4;
  param_3[0xb] = 0;
  if ((param_3[0xc] >> 5 & 1) != 0) {
    F_005a0260(param_3 + 0xc GEN_EDX_ARG);
  }
  param_3[0xc] = 4;
  param_3[0xd] = 4;
  if ((param_3[0xe] >> 5 & 1) != 0) {
    F_005a0260(param_3 + 0xe GEN_EDX_ARG);
  }
  param_3[0xe] = 6;
  param_3[0xf] = (uint)"";
  uVar2 = *((uint *)GEN_TOP((param_1 + 0x180)));
  if ((param_3[0x10] >> 5 & 1) != 0) {
    F_005a0260(param_3 + 0x10 GEN_EDX_ARG);
  }
  param_3[0x10] = 4;
  param_3[0x11] = uVar2;
  if ((param_3[0x12] >> 5 & 1) != 0) {
    F_005a0260(param_3 + 0x12 GEN_EDX_ARG);
  }
  param_3[0x12] = 4;
  param_3[0x13] = 0;
  if ((param_3[0x14] >> 5 & 1) != 0) {
    F_005a0260(param_3 + 0x14 GEN_EDX_ARG);
  }
  param_3[0x15] = 0;
  param_3[0x14] = 4;
  uVar2 = param_3[0x16] >> 5;
  if ((uVar2 & 1) != 0) {
    uVar2 = F_005a0260(param_3 + 0x16 GEN_EDX_ARG);
  }
  param_3[0x16] = 4;
  param_3[0x17] = 1;
  if ((param_3[0x18] >> 5 & 1) != 0) {
    uVar2 = F_005a0260(param_3 + 0x18 GEN_EDX_ARG);
  }
  *(undefined1 *)(param_3 + 0x19) = 0;
  param_3[0x18] = 2;
  return uVar2;
}

/* ref: FUN_005ac700 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ac700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x5ac700u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x84, 12, 4);
  undefined * pvVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  int iVar5;
  uint * puVar6;
  uint * puVar7;
  
  ((uint *)(gen_frame + 0x70))[3] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  uVar2 = *param_3;
  (*(int *)(gen_frame + 0xc)) = param_2;
  if (uVar2 == 0xd) {
    uVar2 = F_0059fef0(this GEN_EDX_FWD);
    if (*((int *)GEN_TOP(((int)this + 0x8c))) != 0) {
      puVar3 = ((undefined4 *)(gen_frame + 0x10));
      iVar5 = 0xc;
      do {
        *puVar3 = 0;
        puVar3 = puVar3 + 2;
        iVar5 = iVar5 - 1;
      } while (-1 < iVar5);
      F_005ac530(this GEN_EDX_ARG,0,((undefined4 *)(gen_frame + 0x10)));
      iVar5 = *((int *)GEN_TOP(((int)this + 0x90)));
      if ((iVar5 == 0) || (*((int *)GEN_TOP((iVar5 + 0x1c))) == 0)) {
        uVar2 = 0;
      }
      else {
        uVar2 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((iVar5 + 0x1c))) + 0x10)));
      }
      if ((iVar5 != 0) && (pvVar1 = *((undefined * PTR32 *)GEN_TOP((iVar5 + 0x1c))), pvVar1 != ((undefined *)GEN_TOP(0x0)))) {
        *((ushort *)GEN_TOP(((int)pvVar1 + 0x22))) = *((ushort *)GEN_TOP(((int)pvVar1 + 0x22))) & 0x7fff;
        *((uint *)GEN_TOP(((int)pvVar1 + 0x18))) = uVar2 - 1;
        F_00573430(pvVar1 GEN_EDX_ARG,uVar2 - 1);
      }
      iVar5 = *((int *)GEN_TOP(((int)this + 0x90)));
      if (iVar5 != 0) {
        *((uint *)GEN_TOP((iVar5 + 0x84))) = *((uint *)GEN_TOP((iVar5 + 0x84))) & 0xffefffff;
        *((uint *)GEN_TOP((iVar5 + 0x88))) = *((uint *)GEN_TOP((iVar5 + 0x88))) | 0x80;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) + 4))))
                (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) GEN_EDX_ARG,((uint *)(gen_frame + 0x4)),7,0xd,((undefined4 *)(gen_frame + 0x10)));
      if (*((int *)GEN_TOP(((int)this + 0x8c))) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x8c))) + 0xf0)));
      }
      pvVar1 = ((undefined *)GEN_TOP(((int)this + 0x9c)));
      F_0042e430(pvVar1 GEN_EDX_ARG,uVar4);
      F_0042ccf0(((undefined *)GEN_TOP(((int)this + 0xf0))) GEN_EDX_ARG,pvVar1);
      F_00593de0(**((undefined4 * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x18))) GEN_EDX_ARG,pvVar1,pvVar1,0xffffffff,0,0,1,0);
      *((undefined1 *)GEN_TOP(((int)this + 0x84))) = 0;
      *((undefined4 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x18))) + 4))) = 0;
      *((undefined1 *)GEN_TOP(((int)this + 0x186))) = 0;
      if (*((int *)GEN_TOP(((int)this + 0x8c))) != 0) {
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x8c))) + 0x90))) = *((undefined4 *)GEN_TOP(((int)this + 0x188)));
      }
      *((undefined1 *)GEN_TOP(((int)this + 0x187))) = 0;
      F_0059d190(this GEN_EDX_ARG);
      *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = 1;
      if ((*((int *)GEN_TOP(((int)this + 0x6c))) != 0) &&
         (pvVar1 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x6c))) + 0x1c))), pvVar1 != ((undefined *)GEN_TOP(0x0)))) {
        F_0059ba30(pvVar1 GEN_EDX_ARG,2,0x11,0,0);
      }
      *((uint *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 0x14))) = *((uint *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 0x14))) | 0x10000;
      F_0058b640(this GEN_EDX_ARG);
      if ((((uint *)(gen_frame + 0x4))[0] >> 5 & 1) != 0) {
        F_005a0260(((uint *)(gen_frame + 0x4)) GEN_EDX_ARG);
      }
      ((uint *)(gen_frame + 0x4))[0] = 0;
      (*(int *)(gen_frame + 0xc)) = 0xc;
      puVar6 = ((uint *)(gen_frame + 0x70)) + 3;
      do {
        uVar2 = puVar6[-3];
        puVar7 = puVar6 - 2;
        if ((uVar2 >> 5 & 1) != 0) {
          puVar3 = ((undefined4 *)GEN_TOP(*puVar7));
          if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
            uVar2 = uVar2 & 0xf;
            if (uVar2 == 9) {
              F_00488040(puVar3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),*puVar3,puVar3[1]);
              F_00488dc0(puVar3 GEN_EDX_ARG);
              uVar2 = F_00406ad0(puVar3);
            }
            else if ((uVar2 == 6) || (uVar2 == 7)) {
              uVar2 = F_00406ad0(puVar3);
              *puVar7 = 0;
            }
          }
          *puVar7 = 0;
        }
        iVar5 = (*(int *)(gen_frame + 0xc)) - 1;
        (*(int *)(gen_frame + 0xc)) = iVar5;
        puVar6[-3] = 0;
        puVar6 = puVar7;
      } while (-1 < iVar5);
    }
  }
  else if (uVar2 == 0x1b) {
    F_0059d240(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x17c))));
    *((undefined1 *)GEN_TOP(((int)this + 0x84))) = 0;
    *((undefined4 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x18))) + 4))) = 0;
    *((undefined1 *)GEN_TOP(((int)this + 0x186))) = 0;
    if (*((int *)GEN_TOP(((int)this + 0x8c))) != 0) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x8c))) + 0x90))) = *((undefined4 *)GEN_TOP(((int)this + 0x188)));
    }
    iVar5 = *((int *)GEN_TOP(((int)this + 0x8c)));
    if (iVar5 != 0) {
      *((undefined4 *)GEN_TOP((iVar5 + 0x104))) = 0;
      *((undefined4 *)GEN_TOP((iVar5 + 0x108))) = 0;
    }
    *((undefined1 *)GEN_TOP(((int)this + 0x187))) = 1;
    F_0059d110(this GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x18c))) = 1;
    if ((*((int *)GEN_TOP(((int)this + 0x6c))) != 0) &&
       (pvVar1 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x6c))) + 0x1c))), pvVar1 != ((undefined *)GEN_TOP(0x0)))) {
      F_0059ba30(pvVar1 GEN_EDX_ARG,2,0x11,0,0);
    }
    *((uint *)GEN_TOP((param_2 + 0x14))) = *((uint *)GEN_TOP((param_2 + 0x14))) | 0x10000;
    uVar2 = F_0058b640(this GEN_EDX_ARG);
    return uVar2;
  }
  return uVar2;
}

/* ref: FUN_005ac9e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ac9e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x5ac9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_TOP(0x50, 0, 4);
  uint uVar1;
  ushort uVar2;
  undefined4 * this_00;
  undefined * this_01;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  undefined4 uVar8;
  uint * puVar9;
  uint * puVar10;
  bool bVar11;
  float10 fVar12;
  float fVar13;
  float fVar14;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  iVar5 = (int)this + 0x9c;
  F_00593de0(**((undefined4 * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x18))) GEN_EDX_FWD,iVar5,iVar5,param_1,param_2,param_3,param_4,
               (undefined1)param_5);
  *((uint *)GEN_TOP(((int)this + 0x150))) = (uint)*((ushort *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x18))) + 0x26)));
  *((uint *)GEN_TOP(((int)this + 0x154))) = (uint)*((ushort *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x18))) + 0x28)));
  *((int *)GEN_TOP(((int)this + 0x158))) = (int)*((short *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x18))) + 0x22)));
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(uint *)(gen_frame + 0x1c)) = 0;
  (*(uint *)(gen_frame + 0x24)) = 0;
  (*(uint *)(gen_frame + 0x2c)) = 0;
  (*(uint *)(gen_frame + 0x34)) = 0;
  (*(uint *)(gen_frame + 0x3c)) = 0;
  uVar4 = F_0042a990(iVar5 GEN_EDX_ARG);
  if (((*(uint *)(gen_frame + 0xc)) >> 5 & 1) != 0) {
    F_005a0260(&(*(uint *)(gen_frame + 0xc)) GEN_EDX_ARG);
  }
  iVar5 = *((int *)GEN_TOP(((int)this + 0x8c)));
  (*(uint *)(gen_frame + 0xc)) = 6;
  (*(uint *)(gen_frame + 0x10)) = uVar4;
  if (iVar5 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *((undefined4 *)GEN_TOP((iVar5 + 0xf0)));
  }
  if (((*(uint *)(gen_frame + 0x14)) >> 5 & 1) != 0) {
    F_005a0260(&(*(uint *)(gen_frame + 0x14)) GEN_EDX_ARG);
  }
  (*(undefined4 *)(gen_frame + 0x18)) = uVar8;
  uVar8 = *((undefined4 *)GEN_TOP(((int)this + 0x158)));
  (*(uint *)(gen_frame + 0x14)) = 6;
  if (((*(uint *)(gen_frame + 0x1c)) >> 5 & 1) != 0) {
    F_005a0260(&(*(uint *)(gen_frame + 0x1c)) GEN_EDX_ARG);
  }
  (*(undefined4 *)(gen_frame + 0x20)) = uVar8;
  uVar8 = *((undefined4 *)GEN_TOP(((int)this + 0x150)));
  (*(uint *)(gen_frame + 0x1c)) = 3;
  if (((*(uint *)(gen_frame + 0x24)) >> 5 & 1) != 0) {
    F_005a0260(&(*(uint *)(gen_frame + 0x24)) GEN_EDX_ARG);
  }
  (*(undefined4 *)(gen_frame + 0x28)) = uVar8;
  uVar8 = *((undefined4 *)GEN_TOP(((int)this + 0x154)));
  (*(uint *)(gen_frame + 0x24)) = 3;
  if (((*(uint *)(gen_frame + 0x2c)) >> 5 & 1) != 0) {
    F_005a0260(&(*(uint *)(gen_frame + 0x2c)) GEN_EDX_ARG);
  }
  (*(uint *)(gen_frame + 0x2c)) = 3;
  (*(undefined4 *)(gen_frame + 0x30)) = uVar8;
  if (((*(uint *)(gen_frame + 0x34)) >> 5 & 1) != 0) {
    F_005a0260(&(*(uint *)(gen_frame + 0x34)) GEN_EDX_ARG);
  }
  (*(uint *)(gen_frame + 0x34)) = 2;
  (*(undefined1 *)(gen_frame + 0x38)) = (undefined1)param_4;
  if (((*(uint *)(gen_frame + 0x3c)) >> 5 & 1) != 0) {
    F_005a0260(&(*(uint *)(gen_frame + 0x3c)) GEN_EDX_ARG);
  }
  ((undefined1 *)(gen_frame + 0x40))[0] = (undefined1)param_5;
  (*(uint *)(gen_frame + 0x3c)) = 2;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) + 4))))
            (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0)),8,7,&(*(uint *)(gen_frame + 0xc)));
  if (((*(uint *)(gen_frame + 0x0)) >> 5 & 1) != 0) {
    F_005a0260(&(*(uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  (*(float *)(gen_frame + 0x8)) = 8.40779e-45;
  puVar9 = &(*(uint *)(gen_frame + 0x48));
  do {
    uVar4 = puVar9[-3];
    puVar10 = puVar9 - 2;
    if ((uVar4 >> 5 & 1) != 0) {
      this_00 = ((undefined4 *)GEN_TOP(*puVar10));
      if (this_00 != ((undefined4 *)GEN_TOP(0x0))) {
        uVar4 = uVar4 & 0xf;
        if (uVar4 == 9) {
          F_00488040(this_00 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x4)),*this_00,this_00[1]);
          F_00488dc0(this_00 GEN_EDX_ARG);
          uVar4 = F_00406ad0(this_00);
        }
        else if ((uVar4 == 6) || (uVar4 == 7)) {
          uVar4 = F_00406ad0(this_00);
          *puVar10 = 0;
        }
      }
      *puVar10 = 0;
    }
    uVar1 = (int)gen_fl2bits((*(float *)(gen_frame + 0x8))) - 1;
    (*(float *)(gen_frame + 0x8)) = gen_bits2f(uVar1);
    puVar9[-3] = 0;
    puVar9 = puVar10;
  } while (-1 < (int)uVar1);
  if (*((int *)GEN_TOP(((int)this + 0x90))) != 0) {
    this_01 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x8c)));
    if (this_01 == ((undefined *)GEN_TOP(0x0))) {
      sVar7 = (short)(uint)gen_fl2bits((*(float *)(gen_frame + 0x4)));
    }
    else {
      (*(float *)(gen_frame + 0x8)) = gen_bits2f((int)*((float *)GEN_TOP(((int)this_01 + 0x38))) & 0xffff);
      sVar7 = (short)(int)*((float *)GEN_TOP(((int)this_01 + 0x3c)));
    }
    uVar4 = F_00577c70(this_01 GEN_EDX_ARG,0,0,*((undefined4 *)GEN_TOP(((int)this + 0x158))));
    iVar3 = *((int *)GEN_TOP(((int)this + 0x90)));
    iVar5 = (int)gen_fl2bits((*(float *)(gen_frame + 0x8))) + uVar4;
    (*(float *)(gen_frame + 0x8)) = gen_bits2f(iVar5);
    if (iVar3 == 0) {
      fVar13 = 0.0;
    }
    else {
      fVar13 = *((float *)GEN_TOP((iVar3 + 0x74)));
    }
    (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x8)) + 0)) = (short)iVar5;
    if (iVar3 != 0) {
      iVar5 = (int)(short)((*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x8)) + 0)) - (short)(int)fVar13);
      uVar4 = *((uint *)GEN_TOP((iVar3 + 0x88)));
      fVar14 = (float)iVar5;
      iVar6 = (int)(short)(sVar7 - (short)(int)*((float *)GEN_TOP((iVar3 + 0x78))));
      fVar13 = (float)iVar6;
      (*(float *)(gen_frame + 0x8)) = fVar14;
      (*(float *)(gen_frame + 0x4)) = fVar13;
      if (((uVar4 & 1) == 0) &&
         ((fVar12 = (float10)iVar5, bVar11 = GEN_ISNAN((float10)*((float *)GEN_TOP((iVar3 + 0x38)))) || GEN_ISNAN(fVar12),
          bVar11 == (bVar11 || (float10)*((float *)GEN_TOP((iVar3 + 0x38))) == fVar12) ||
          (fVar12 = (float10)iVar6, bVar11 = GEN_ISNAN((float10)*((float *)GEN_TOP((iVar3 + 0x3c)))) || GEN_ISNAN(fVar12),
          bVar11 == (bVar11 || (float10)*((float *)GEN_TOP((iVar3 + 0x3c))) == fVar12))))) {
        *((uint *)GEN_TOP((iVar3 + 0x88))) = uVar4 | 1;
      }
      *((float *)GEN_TOP((iVar3 + 0x38))) = fVar14;
      *((float *)GEN_TOP((iVar3 + 0x3c))) = fVar13;
    }
    uVar4 = *((uint *)GEN_TOP(((int)this + 0x8c)));
    uVar2 = *((ushort *)GEN_TOP(((int)this + 0x154)));
    if (uVar4 != 0) {
      *((uint *)GEN_TOP((uVar4 + 0x104))) = (uint)*((ushort *)GEN_TOP(((int)this + 0x150)));
      *((uint *)GEN_TOP((uVar4 + 0x108))) = (uint)uVar2;
    }
  }
  return uVar4;
}

/* ref: FUN_005acd20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005acd20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5acd20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  code * pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  int * piVar7;
  int iVar8;
  int * piVar9;
  int iVar10;
  undefined4 uVar11;
  int * local_10;
  undefined * local_c;
  
  *((undefined1 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x80))) = 0;
  if (((param_2 & 2) == 0) && (iVar8 = *((int *)GEN_TOP(((int)this + 200))), iVar8 != 0)) {
    *((uint *)GEN_TOP((iVar8 + 0x84))) = *((uint *)GEN_TOP((iVar8 + 0x84))) & 0xffefffff;
    *((uint *)GEN_TOP((iVar8 + 0x88))) = *((uint *)GEN_TOP((iVar8 + 0x88))) | 0x80;
  }
  if ((param_2 & 4) == 0) {
    iVar8 = *((int *)GEN_TOP(((int)this + 0xd4)));
    if (iVar8 != 0) {
      *((uint *)GEN_TOP((iVar8 + 0x84))) = *((uint *)GEN_TOP((iVar8 + 0x84))) & 0xffefffff;
      *((uint *)GEN_TOP((iVar8 + 0x88))) = *((uint *)GEN_TOP((iVar8 + 0x88))) | 0x80;
    }
  }
  else {
    F_005a82c0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,(uint)*((ushort *)GEN_TOP(((int)this + 0x96))),4,600);
    local_10 = ((int *)GEN_TOP(0x0));
    do {
      uVar2 = (uint)*((ushort *)GEN_TOP(((int)this + 0x96)));
      if ((local_10 != ((int *)GEN_TOP(0x0))) &&
         (uVar2 = uVar2 * 10000 + 600 + (int)local_10,
         (*((int *)GEN_TOP(((int)this + 0x50))) - *((int *)GEN_TOP(((int)this + 0x4c))) & 0xfffffffcU) != 0)) {
        for (piVar9 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3c))); piVar9 != *((int * PTR32 *)GEN_TOP(((int)this + 0x40)));
            piVar9 = piVar9 + 1) {
          iVar8 = *piVar9;
          if (*((uint *)GEN_TOP((iVar8 + 4))) == uVar2) goto LAB_005ace29;
        }
      }
      if (((*((byte *)GEN_TOP(((int)this + 0x60))) & 1) == 0) || (uVar2 == 0)) {
        iVar8 = 0;
      }
      else {
        iVar10 = *((int *)GEN_TOP(((int)this + 0xc)));
        iVar8 = 0;
        if (((iVar10 != 0) && (uVar5 = *((uint *)GEN_TOP((iVar10 + 4))), uVar5 != 0)) &&
           (uVar3 = 0, uVar5 != 0)) {
          piVar9 = *((int * PTR32 *)GEN_TOP((iVar10 + 8)));
          do {
            if (*((uint *)GEN_TOP((*piVar9 + 4))) == uVar2) {
              iVar8 = (*((int * PTR32 *)GEN_TOP((iVar10 + 8))))[uVar3];
              goto LAB_005ace29;
            }
            uVar3 = uVar3 + 1;
            piVar9 = piVar9 + 1;
          } while (uVar3 < uVar5);
          iVar8 = 0;
        }
      }
LAB_005ace29: ;
      *((int *)GEN_TOP(((int)this + (int)((int)(uintptr_t)local_10) * 4 + 0x13c))) = iVar8;
      local_10 = ((int *)GEN_TOP(((int)local_10 + 1)));
    } while (local_10 < 5);
  }
  if ((param_2 & 0x10) == 0) {
    iVar8 = *((int *)GEN_TOP(((int)this + 0xdc)));
    if (iVar8 != 0) {
      *((uint *)GEN_TOP((iVar8 + 0x84))) = *((uint *)GEN_TOP((iVar8 + 0x84))) & 0xffefffff;
      *((uint *)GEN_TOP((iVar8 + 0x88))) = *((uint *)GEN_TOP((iVar8 + 0x88))) | 0x80;
    }
  }
  else {
    if (*((int *)GEN_TOP(((int)this + 0xe4))) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xe4))) + 4)));
      if (10000 < uVar2) {
        uVar2 = uVar2 / 10000;
      }
    }
    F_005a82c0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,uVar2,4,800);
    local_10 = ((int *)GEN_TOP(0x0));
    do {
      uVar5 = uVar2;
      if ((local_10 != ((int *)GEN_TOP(0x0))) &&
         (uVar5 = uVar2 * 10000 + 800 + (int)local_10,
         (*((int *)GEN_TOP(((int)this + 0x50))) - *((int *)GEN_TOP(((int)this + 0x4c))) & 0xfffffffcU) != 0)) {
        for (piVar9 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3c))); piVar9 != *((int * PTR32 *)GEN_TOP(((int)this + 0x40)));
            piVar9 = piVar9 + 1) {
          iVar8 = *piVar9;
          if (*((uint *)GEN_TOP((iVar8 + 4))) == uVar5) goto LAB_005acf47;
        }
      }
      if (((*((byte *)GEN_TOP(((int)this + 0x60))) & 1) == 0) || (uVar5 == 0)) {
        iVar8 = 0;
      }
      else {
        iVar10 = *((int *)GEN_TOP(((int)this + 0xc)));
        iVar8 = 0;
        if (((iVar10 != 0) && (uVar3 = *((uint *)GEN_TOP((iVar10 + 4))), uVar3 != 0)) &&
           (uVar4 = 0, uVar3 != 0)) {
          piVar9 = *((int * PTR32 *)GEN_TOP((iVar10 + 8)));
          do {
            if (*((uint *)GEN_TOP((*piVar9 + 4))) == uVar5) {
              iVar8 = (*((int * PTR32 *)GEN_TOP((iVar10 + 8))))[uVar4];
              goto LAB_005acf47;
            }
            uVar4 = uVar4 + 1;
            piVar9 = piVar9 + 1;
          } while (uVar4 < uVar3);
          iVar8 = 0;
        }
      }
LAB_005acf47: ;
      *((int *)GEN_TOP(((int)this + (int)((int)(uintptr_t)local_10) * 4 + 0x150))) = iVar8;
      local_10 = ((int *)GEN_TOP(((int)local_10 + 1)));
    } while (local_10 < 5);
  }
  if ((param_2 & 0x20) == 0) {
    iVar8 = *((int *)GEN_TOP(((int)this + 0xe8)));
    if (iVar8 != 0) {
      *((uint *)GEN_TOP((iVar8 + 0x84))) = *((uint *)GEN_TOP((iVar8 + 0x84))) & 0xffefffff;
      *((uint *)GEN_TOP((iVar8 + 0x88))) = *((uint *)GEN_TOP((iVar8 + 0x88))) | 0x80;
    }
  }
  else {
    F_005a82c0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)this + 0x8c))),4,100);
    F_005a82c0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)this + 0x8e))),4,200);
    F_005a82c0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)this + 0x90))),4,300);
    F_005a82c0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)this + 0x92))),2,400);
    local_c = ((undefined *)GEN_TOP(0x0));
    do {
      uVar2 = (uint)*((ushort *)GEN_TOP(((int)this + 0x8c)));
      if ((local_c != ((undefined *)GEN_TOP(0x0))) &&
         (uVar2 = uVar2 * 10000 + 100 + (int)local_c,
         (*((int *)GEN_TOP(((int)this + 0x50))) - *((int *)GEN_TOP(((int)this + 0x4c))) & 0xfffffffcU) != 0)) {
        for (piVar9 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3c))); piVar9 != *((int * PTR32 *)GEN_TOP(((int)this + 0x40)));
            piVar9 = piVar9 + 1) {
          iVar8 = *piVar9;
          if (*((uint *)GEN_TOP((iVar8 + 4))) == uVar2) goto LAB_005ad08c;
        }
      }
      if (((*((byte *)GEN_TOP(((int)this + 0x60))) & 1) == 0) || (uVar2 == 0)) {
        iVar8 = 0;
      }
      else {
        iVar10 = *((int *)GEN_TOP(((int)this + 0xc)));
        iVar8 = 0;
        if (((iVar10 != 0) && (uVar5 = *((uint *)GEN_TOP((iVar10 + 4))), uVar5 != 0)) &&
           (uVar3 = 0, uVar5 != 0)) {
          piVar9 = *((int * PTR32 *)GEN_TOP((iVar10 + 8)));
          do {
            if (*((uint *)GEN_TOP((*piVar9 + 4))) == uVar2) {
              iVar8 = (*((int * PTR32 *)GEN_TOP((iVar10 + 8))))[uVar3];
              goto LAB_005ad08c;
            }
            uVar3 = uVar3 + 1;
            piVar9 = piVar9 + 1;
          } while (uVar3 < uVar5);
          iVar8 = 0;
        }
      }
LAB_005ad08c: ;
      if (((((iVar8 == 0) || (*((ushort *)GEN_TOP((iVar8 + 0x18))) < 1000)) ||
           ((piVar9 = *((int * PTR32 *)GEN_TOP((iVar8 + 0x8c))), piVar9 == ((int *)GEN_TOP(0x0)) ||
            (((*(byte *)(piVar9 + 0x18) & 1) == 0 || ((*(byte *)(piVar9 + 0x18) & 4) == 0)))))) ||
          ((char)piVar9[7] != '\x01')) || (*((char *)GEN_TOP((piVar9[3] + 0xf))) != '\x15')) {
        piVar9 = ((int *)GEN_TOP(0x0));
      }
      *((int * PTR32 *)GEN_TOP(((int)this + (int)((int)(uintptr_t)local_c) * 4 + 0x164))) = piVar9;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0x38))))(piVar9 GEN_EDX_ARG);
      if (uVar2 == 0) {
        if (((*(byte *)(piVar9 + 0x18) & 1) == 0) || (*((ushort *)GEN_TOP(((int)this + 0x238))) == 0)) {
          iVar8 = 0;
        }
        else {
          iVar10 = piVar9[3];
          iVar8 = 0;
          if (((iVar10 != 0) && (uVar2 = *((uint *)GEN_TOP((iVar10 + 4))), uVar2 != 0)) && (uVar2 != 0)) {
            uVar5 = 0;
            piVar7 = *((int * PTR32 *)GEN_TOP((iVar10 + 8)));
            do {
              if (*((uint *)GEN_TOP((*piVar7 + 4))) == (uint)*((ushort *)GEN_TOP(((int)this + 0x238)))) {
                iVar8 = (*((int * PTR32 *)GEN_TOP((iVar10 + 8))))[uVar5];
                goto LAB_005ad12e;
              }
              uVar5 = uVar5 + 1;
              piVar7 = piVar7 + 1;
            } while (uVar5 < uVar2);
            iVar8 = 0;
          }
        }
LAB_005ad12e: ;
        pcVar1 = *((gen_code32 *)GEN_TOP((*piVar9 + 0x38)));
        piVar9[0x1a] = iVar8;
        uVar2 = (*pcVar1)(piVar9);
        if (uVar2 != 0) {
          uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0x38))))(piVar9 GEN_EDX_ARG);
          if (uVar2 != 0) {
            *((uint *)GEN_TOP((uVar2 + 0x84))) = *((uint *)GEN_TOP((uVar2 + 0x84))) | 0x4000000;
          }
          uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0x38))))(piVar9 GEN_EDX_ARG);
          if (uVar2 != 0) {
            *((uint *)GEN_TOP((uVar2 + 0x84))) = *((uint *)GEN_TOP((uVar2 + 0x84))) | 0x2000000;
          }
        }
      }
      local_c = ((undefined *)GEN_TOP(((int)local_c + 1)));
    } while (local_c < 5);
    local_c = ((undefined *)GEN_TOP(0x0));
    do {
      uVar2 = (uint)*((ushort *)GEN_TOP(((int)this + 0x8e)));
      if ((local_c != ((undefined *)GEN_TOP(0x0))) &&
         (uVar2 = uVar2 * 10000 + 200 + (int)local_c,
         (*((int *)GEN_TOP(((int)this + 0x50))) - *((int *)GEN_TOP(((int)this + 0x4c))) & 0xfffffffcU) != 0)) {
        for (piVar9 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3c))); piVar9 != *((int * PTR32 *)GEN_TOP(((int)this + 0x40)));
            piVar9 = piVar9 + 1) {
          iVar8 = *piVar9;
          if (*((uint *)GEN_TOP((iVar8 + 4))) == uVar2) goto LAB_005ad211;
        }
      }
      if (((*((byte *)GEN_TOP(((int)this + 0x60))) & 1) == 0) || (uVar2 == 0)) {
        iVar8 = 0;
      }
      else {
        iVar10 = *((int *)GEN_TOP(((int)this + 0xc)));
        iVar8 = 0;
        if (((iVar10 != 0) && (uVar5 = *((uint *)GEN_TOP((iVar10 + 4))), uVar5 != 0)) &&
           (uVar3 = 0, uVar5 != 0)) {
          piVar9 = *((int * PTR32 *)GEN_TOP((iVar10 + 8)));
          do {
            if (*((uint *)GEN_TOP((*piVar9 + 4))) == uVar2) {
              iVar8 = (*((int * PTR32 *)GEN_TOP((iVar10 + 8))))[uVar3];
              goto LAB_005ad211;
            }
            uVar3 = uVar3 + 1;
            piVar9 = piVar9 + 1;
          } while (uVar3 < uVar5);
          iVar8 = 0;
        }
      }
LAB_005ad211: ;
      if ((((iVar8 == 0) || (*((ushort *)GEN_TOP((iVar8 + 0x18))) < 1000)) ||
          ((local_10 = *((int * PTR32 *)GEN_TOP((iVar8 + 0x8c))), local_10 == ((undefined *)GEN_TOP(0x0)) ||
           (((*((byte *)GEN_TOP(((int)local_10 + 0x60))) & 1) == 0 ||
            ((*((byte *)GEN_TOP(((int)local_10 + 0x60))) & 4) == 0)))))) ||
         ((*((char *)GEN_TOP(((int)local_10 + 0x1c))) != '\x01' ||
          (*((char *)GEN_TOP((*((int *)GEN_TOP(((int)local_10 + 0xc))) + 0xf))) != '\x15')))) {
        local_10 = ((undefined *)GEN_TOP(0x0));
      }
      *((int * PTR32 *)GEN_TOP(((int)this + (int)((int)(uintptr_t)local_c) * 4 + 0x178))) = local_10;
      if (((*((byte *)GEN_TOP(((int)local_10 + 0x60))) & 1) != 0) && (*((int *)GEN_TOP(((int)local_10 + 0x90))) != 0)) {
        iVar8 = *((int *)GEN_TOP(((int)local_10 + 0xc)));
        iVar10 = 0;
        if ((iVar8 != 0) && ((uVar2 = *((uint *)GEN_TOP((iVar8 + 4))), uVar2 != 0 && (uVar5 = 0, uVar2 != 0))))
        {
          piVar9 = *((int * PTR32 *)GEN_TOP((iVar8 + 8)));
          do {
            if (*((int *)GEN_TOP((*piVar9 + 4))) == *((int *)GEN_TOP(((int)local_10 + 0x90)))) {
              iVar10 = (*((int * PTR32 *)GEN_TOP((iVar8 + 8))))[uVar5];
              break;
            }
            uVar5 = uVar5 + 1;
            piVar9 = piVar9 + 1;
          } while (uVar5 < uVar2);
        }
        if (iVar10 != 0) {
          if (((((*((ushort *)GEN_TOP((iVar10 + 0x18))) < 1000) ||
                (piVar9 = *((int * PTR32 *)GEN_TOP((iVar10 + 0x8c))), piVar9 == ((int *)GEN_TOP(0x0)))) ||
               ((*(byte *)(piVar9 + 0x18) & 1) == 0)) ||
              (((*(byte *)(piVar9 + 0x18) & 4) == 0 || ((char)piVar9[7] != '\x01')))) ||
             (*((char *)GEN_TOP((piVar9[3] + 0xf))) != '\x0f')) {
            piVar9 = ((int *)GEN_TOP(0x0));
          }
          if (((piVar9 != ((int *)GEN_TOP(0x0))) && (uVar2 = F_0057dd60(local_10 GEN_EDX_ARG), piVar9[0x2a] == 0)) &&
             (uVar2 != 0)) {
            piVar9[0x1a] = uVar2;
            *((uint *)GEN_TOP((uVar2 + 0x84))) = *((uint *)GEN_TOP((uVar2 + 0x84))) | 0x4000000;
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0x30))))(piVar9 GEN_EDX_ARG,1);
            if (*((short *)GEN_TOP((uVar2 + 0x18))) == 8) {
              *((int * PTR32 *)GEN_TOP((uVar2 + 0x98))) = piVar9;
            }
          }
        }
      }
      local_c = ((undefined *)GEN_TOP(((int)local_c + 1)));
    } while (local_c < 5);
    local_c = ((undefined *)GEN_TOP(0x0));
    do {
      uVar2 = (uint)*((ushort *)GEN_TOP(((int)this + 0x90)));
      if ((local_c != ((undefined *)GEN_TOP(0x0))) &&
         (uVar2 = uVar2 * 10000 + 300 + (int)local_c,
         (*((int *)GEN_TOP(((int)this + 0x50))) - *((int *)GEN_TOP(((int)this + 0x4c))) & 0xfffffffcU) != 0)) {
        for (piVar9 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3c))); piVar9 != *((int * PTR32 *)GEN_TOP(((int)this + 0x40)));
            piVar9 = piVar9 + 1) {
          iVar8 = *piVar9;
          if (*((uint *)GEN_TOP((iVar8 + 4))) == uVar2) goto LAB_005ad3cf;
        }
      }
      if (((*((byte *)GEN_TOP(((int)this + 0x60))) & 1) == 0) || (uVar2 == 0)) {
        iVar8 = 0;
      }
      else {
        iVar10 = *((int *)GEN_TOP(((int)this + 0xc)));
        iVar8 = 0;
        if (((iVar10 != 0) && (uVar5 = *((uint *)GEN_TOP((iVar10 + 4))), uVar5 != 0)) &&
           (uVar3 = 0, uVar5 != 0)) {
          piVar9 = *((int * PTR32 *)GEN_TOP((iVar10 + 8)));
          do {
            if (*((uint *)GEN_TOP((*piVar9 + 4))) == uVar2) {
              iVar8 = (*((int * PTR32 *)GEN_TOP((iVar10 + 8))))[uVar3];
              goto LAB_005ad3cf;
            }
            uVar3 = uVar3 + 1;
            piVar9 = piVar9 + 1;
          } while (uVar3 < uVar5);
          iVar8 = 0;
        }
      }
LAB_005ad3cf: ;
      if (((((iVar8 == 0) || (*((ushort *)GEN_TOP((iVar8 + 0x18))) < 1000)) ||
           ((local_10 = *((int * PTR32 *)GEN_TOP((iVar8 + 0x8c))), local_10 == ((undefined *)GEN_TOP(0x0)) ||
            (((*((byte *)GEN_TOP(((int)local_10 + 0x60))) & 1) == 0 ||
             ((*((byte *)GEN_TOP(((int)local_10 + 0x60))) & 4) == 0)))))) ||
          (*((char *)GEN_TOP(((int)local_10 + 0x1c))) != '\x01')) ||
         (*((char *)GEN_TOP((*((int *)GEN_TOP(((int)local_10 + 0xc))) + 0xf))) != '\x15')) {
        local_10 = ((undefined *)GEN_TOP(0x0));
      }
      *((int * PTR32 *)GEN_TOP(((int)this + (int)((int)(uintptr_t)local_c) * 4 + 0x18c))) = local_10;
      if (((*((byte *)GEN_TOP(((int)local_10 + 0x60))) & 1) == 0) || (*((int *)GEN_TOP(((int)local_10 + 0x90))) == 0)) {
LAB_005ad53a: ;
        local_10 = ((int *)GEN_TOP(0x0));
        piVar9 = local_10;
      }
      else {
        iVar8 = *((int *)GEN_TOP(((int)local_10 + 0xc)));
        iVar10 = 0;
        if ((iVar8 != 0) && ((uVar2 = *((uint *)GEN_TOP((iVar8 + 4))), uVar2 != 0 && (uVar5 = 0, uVar2 != 0))))
        {
          piVar9 = *((int * PTR32 *)GEN_TOP((iVar8 + 8)));
          do {
            if (*((int *)GEN_TOP((*piVar9 + 4))) == *((int *)GEN_TOP(((int)local_10 + 0x90)))) {
              iVar10 = (*((int * PTR32 *)GEN_TOP((iVar8 + 8))))[uVar5];
              break;
            }
            uVar5 = uVar5 + 1;
            piVar9 = piVar9 + 1;
          } while (uVar5 < uVar2);
        }
        if (iVar10 == 0) goto LAB_005ad53a;
        if ((((*((ushort *)GEN_TOP((iVar10 + 0x18))) < 1000) ||
             (piVar9 = *((int * PTR32 *)GEN_TOP((iVar10 + 0x8c))), piVar9 == ((int *)GEN_TOP(0x0)))) ||
            ((*(byte *)(piVar9 + 0x18) & 1) == 0)) ||
           ((((*(byte *)(piVar9 + 0x18) & 4) == 0 || ((char)piVar9[7] != '\x01')) ||
            (*((char *)GEN_TOP((piVar9[3] + 0xf))) != '\x0f')))) {
          piVar9 = ((int *)GEN_TOP(0x0));
        }
        if (((piVar9 != ((int *)GEN_TOP(0x0))) && (uVar2 = F_0057dd60(local_10 GEN_EDX_ARG), piVar9[0x2a] == 0)) &&
           (uVar2 != 0)) {
          piVar9[0x1a] = uVar2;
          *((uint *)GEN_TOP((uVar2 + 0x84))) = *((uint *)GEN_TOP((uVar2 + 0x84))) | 0x4000000;
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0x30))))(piVar9 GEN_EDX_ARG,1);
          if (*((short *)GEN_TOP((uVar2 + 0x18))) == 8) {
            *((int * PTR32 *)GEN_TOP((uVar2 + 0x98))) = piVar9;
          }
        }
      }
      local_10 = piVar9;
      if (((param_2 & 0x40) != 0) && (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*local_10 + 0x38))))(local_10 GEN_EDX_ARG), uVar2 != 0)
         ) {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*local_10 + 0x38))))(local_10 GEN_EDX_ARG);
        if (uVar2 != 0) {
          if (*((int *)GEN_TOP((uVar2 + 0x80))) == 0) {
            uVar11 = 0;
            uVar5 = F_00404270();
            puVar6 = ((undefined4 *)GEN_TOP(F_00406bd0(4,0,uVar5,uVar11)));
            if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) {
              puVar6 = ((undefined4 *)GEN_TOP(0x0));
            }
            else {
              *puVar6 = 0;
            }
            *((undefined4 * PTR32 *)GEN_TOP((uVar2 + 0x80))) = puVar6;
          }
          piVar9 = *((int * PTR32 *)GEN_TOP((uVar2 + 0x80)));
          uVar5 = F_00404270();
          puVar6 = ((undefined4 *)GEN_TOP(F_00406bd0(0x18,0,uVar5,0)));
          if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
            puVar6[4] = 0;
            puVar6[5] = 0;
            iVar8 = *piVar9;
            if (iVar8 == 0) {
              *piVar9 = (int)puVar6;
            }
            else {
              do {
                iVar10 = *((int *)GEN_TOP((iVar8 + 0x10)));
                if (iVar10 == 0) {
                  *((undefined4 * PTR32 *)GEN_TOP((iVar8 + 0x10))) = puVar6;
                  break;
                }
                iVar8 = iVar10;
              } while (iVar10 != 0);
            }
            *(undefined1 *)(puVar6 + 5) = 9;
            puVar6[5] = puVar6[5] & 0xffefffff;
            puVar6[3] = local_c;
            puVar6[1] = uVar2;
            puVar6[2] = this;
            *puVar6 = 0;
          }
        }
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*local_10 + 0x38))))(local_10 GEN_EDX_ARG);
        if (uVar2 != 0) {
          if (*((int *)GEN_TOP((uVar2 + 0x80))) == 0) {
            uVar11 = 0;
            uVar5 = F_00404270();
            puVar6 = ((undefined4 *)GEN_TOP(F_00406bd0(4,0,uVar5,uVar11)));
            if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) {
              puVar6 = ((undefined4 *)GEN_TOP(0x0));
            }
            else {
              *puVar6 = 0;
            }
            *((undefined4 * PTR32 *)GEN_TOP((uVar2 + 0x80))) = puVar6;
          }
          piVar9 = *((int * PTR32 *)GEN_TOP((uVar2 + 0x80)));
          uVar5 = F_00404270();
          puVar6 = ((undefined4 *)GEN_TOP(F_00406bd0(0x18,0,uVar5,0)));
          if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
            puVar6[4] = 0;
            puVar6[5] = 0;
            iVar8 = *piVar9;
            if (iVar8 == 0) {
              *piVar9 = (int)puVar6;
            }
            else {
              do {
                iVar10 = *((int *)GEN_TOP((iVar8 + 0x10)));
                if (iVar10 == 0) {
                  *((undefined4 * PTR32 *)GEN_TOP((iVar8 + 0x10))) = puVar6;
                  break;
                }
                iVar8 = iVar10;
              } while (iVar10 != 0);
            }
            *(undefined1 *)(puVar6 + 5) = 0xc;
            puVar6[5] = puVar6[5] & 0xffefffff;
            puVar6[3] = local_c;
            puVar6[1] = uVar2;
            puVar6[2] = this;
            *puVar6 = 0;
          }
        }
      }
      local_c = ((undefined *)GEN_TOP(((int)local_c + 1)));
    } while (local_c < 5);
    iVar8 = *((int *)GEN_TOP(((int)this + 0x104)));
    if (iVar8 != 0) {
      *((uint *)GEN_TOP((iVar8 + 0x84))) = *((uint *)GEN_TOP((iVar8 + 0x84))) & 0xffefffff;
      *((uint *)GEN_TOP((iVar8 + 0x88))) = *((uint *)GEN_TOP((iVar8 + 0x88))) | 0x80;
    }
    local_10 = ((int *)GEN_TOP(0x0));
    do {
      uVar2 = (uint)*((ushort *)GEN_TOP(((int)this + 0x92)));
      if ((local_10 != ((int *)GEN_TOP(0x0))) &&
         (uVar2 = uVar2 * 10000 + 400 + (int)local_10,
         (*((int *)GEN_TOP(((int)this + 0x50))) - *((int *)GEN_TOP(((int)this + 0x4c))) & 0xfffffffcU) != 0)) {
        for (piVar9 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3c))); piVar9 != *((int * PTR32 *)GEN_TOP(((int)this + 0x40)));
            piVar9 = piVar9 + 1) {
          iVar8 = *piVar9;
          if (*((uint *)GEN_TOP((iVar8 + 4))) == uVar2) goto LAB_005ad71f;
        }
      }
      if (((*((byte *)GEN_TOP(((int)this + 0x60))) & 1) == 0) || (uVar2 == 0)) {
        iVar8 = 0;
      }
      else {
        iVar10 = *((int *)GEN_TOP(((int)this + 0xc)));
        iVar8 = 0;
        if (((iVar10 != 0) && (uVar5 = *((uint *)GEN_TOP((iVar10 + 4))), uVar5 != 0)) &&
           (uVar3 = 0, uVar5 != 0)) {
          piVar9 = *((int * PTR32 *)GEN_TOP((iVar10 + 8)));
          do {
            if (*((uint *)GEN_TOP((*piVar9 + 4))) == uVar2) {
              iVar8 = (*((int * PTR32 *)GEN_TOP((iVar10 + 8))))[uVar3];
              goto LAB_005ad71f;
            }
            uVar3 = uVar3 + 1;
            piVar9 = piVar9 + 1;
          } while (uVar3 < uVar5);
          iVar8 = 0;
        }
      }
LAB_005ad71f: ;
      if ((((iVar8 == 0) || (*((ushort *)GEN_TOP((iVar8 + 0x18))) < 1000)) ||
          ((piVar9 = *((int * PTR32 *)GEN_TOP((iVar8 + 0x8c))), piVar9 == ((int *)GEN_TOP(0x0)) ||
           (((*(byte *)(piVar9 + 0x18) & 1) == 0 || ((*(byte *)(piVar9 + 0x18) & 4) == 0)))))) ||
         (((char)piVar9[7] != '\x01' || (*((char *)GEN_TOP((piVar9[3] + 0xf))) != '\x15')))) {
        piVar9 = ((int *)GEN_TOP(0x0));
      }
      *((int * PTR32 *)GEN_TOP(((int)this + (int)((int)(uintptr_t)local_10) * 4 + 0x1b4))) = piVar9;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0x38))))(piVar9 GEN_EDX_ARG);
      if (uVar2 == 0) {
        if (((*(byte *)(piVar9 + 0x18) & 1) == 0) || (*((ushort *)GEN_TOP(((int)this + 0x238))) == 0)) {
          iVar8 = 0;
        }
        else {
          iVar10 = piVar9[3];
          iVar8 = 0;
          if (((iVar10 != 0) && (uVar2 = *((uint *)GEN_TOP((iVar10 + 4))), uVar2 != 0)) && (uVar2 != 0)) {
            uVar5 = 0;
            piVar7 = *((int * PTR32 *)GEN_TOP((iVar10 + 8)));
            do {
              if (*((uint *)GEN_TOP((*piVar7 + 4))) == (uint)*((ushort *)GEN_TOP(((int)this + 0x238)))) {
                iVar8 = (*((int * PTR32 *)GEN_TOP((iVar10 + 8))))[uVar5];
                goto LAB_005ad7be;
              }
              uVar5 = uVar5 + 1;
              piVar7 = piVar7 + 1;
            } while (uVar5 < uVar2);
            iVar8 = 0;
          }
        }
LAB_005ad7be: ;
        pcVar1 = *((gen_code32 *)GEN_TOP((*piVar9 + 0x38)));
        piVar9[0x1a] = iVar8;
        uVar2 = (*pcVar1)(piVar9);
        if (uVar2 != 0) {
          uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0x38))))(piVar9 GEN_EDX_ARG);
          if (uVar2 != 0) {
            *((uint *)GEN_TOP((uVar2 + 0x84))) = *((uint *)GEN_TOP((uVar2 + 0x84))) | 0x4000000;
          }
          uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0x38))))(piVar9 GEN_EDX_ARG);
          if (uVar2 != 0) {
            *((uint *)GEN_TOP((uVar2 + 0x84))) = *((uint *)GEN_TOP((uVar2 + 0x84))) | 0x2000000;
          }
        }
      }
      local_10 = ((int *)GEN_TOP(((int)local_10 + 1)));
    } while (local_10 < 3);
    if (((*((byte *)GEN_TOP(((int)this + 0x60))) & 1) == 0) || (*((ushort *)GEN_TOP(((int)this + 0x94))) == 0)) {
      iVar8 = 0;
    }
    else {
      iVar10 = *((int *)GEN_TOP(((int)this + 0xc)));
      iVar8 = 0;
      if (((iVar10 != 0) && (uVar2 = *((uint *)GEN_TOP((iVar10 + 4))), uVar2 != 0)) && (uVar5 = 0, uVar2 != 0))
      {
        piVar9 = *((int * PTR32 *)GEN_TOP((iVar10 + 8)));
        do {
          if (*((uint *)GEN_TOP((*piVar9 + 4))) == (uint)*((ushort *)GEN_TOP(((int)this + 0x94)))) {
            iVar8 = (*((int * PTR32 *)GEN_TOP((iVar10 + 8))))[uVar5];
            goto LAB_005ad8a1;
          }
          uVar5 = uVar5 + 1;
          piVar9 = piVar9 + 1;
        } while (uVar5 < uVar2);
        iVar8 = 0;
      }
    }
LAB_005ad8a1: ;
    if (((((iVar8 == 0) || (*((ushort *)GEN_TOP((iVar8 + 0x18))) < 1000)) ||
         (local_c = *((undefined * PTR32 *)GEN_TOP((iVar8 + 0x8c))), local_c == ((undefined *)GEN_TOP(0x0)))) ||
        (((*((byte *)GEN_TOP(((int)local_c + 0x60))) & 1) == 0 || ((*((byte *)GEN_TOP(((int)local_c + 0x60))) & 4) == 0)))
        ) || ((*((char *)GEN_TOP(((int)local_c + 0x1c))) != '\x01' ||
              (*((char *)GEN_TOP((*((int *)GEN_TOP(((int)local_c + 0xc))) + 0xf))) != '\x15')))) {
      local_c = ((undefined *)GEN_TOP(0x0));
    }
    *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c0))) = local_c;
    if (((*((byte *)GEN_TOP(((int)local_c + 0x60))) & 1) != 0) && (*((int *)GEN_TOP(((int)local_c + 0x90))) != 0)) {
      iVar8 = *((int *)GEN_TOP(((int)local_c + 0xc)));
      iVar10 = 0;
      if ((iVar8 != 0) && ((uVar2 = *((uint *)GEN_TOP((iVar8 + 4))), uVar2 != 0 && (uVar5 = 0, uVar2 != 0)))) {
        piVar9 = *((int * PTR32 *)GEN_TOP((iVar8 + 8)));
        do {
          if (*((int *)GEN_TOP((*piVar9 + 4))) == *((int *)GEN_TOP(((int)local_c + 0x90)))) {
            iVar10 = (*((int * PTR32 *)GEN_TOP((iVar8 + 8))))[uVar5];
            break;
          }
          uVar5 = uVar5 + 1;
          piVar9 = piVar9 + 1;
        } while (uVar5 < uVar2);
      }
      if (iVar10 != 0) {
        if (((((*((ushort *)GEN_TOP((iVar10 + 0x18))) < 1000) ||
              (piVar9 = *((int * PTR32 *)GEN_TOP((iVar10 + 0x8c))), piVar9 == ((int *)GEN_TOP(0x0)))) ||
             ((*(byte *)(piVar9 + 0x18) & 1) == 0)) ||
            (((*(byte *)(piVar9 + 0x18) & 4) == 0 || ((char)piVar9[7] != '\x01')))) ||
           (*((char *)GEN_TOP((piVar9[3] + 0xf))) != '\x0f')) {
          piVar9 = ((int *)GEN_TOP(0x0));
        }
        if (((piVar9 != ((int *)GEN_TOP(0x0))) && (uVar2 = F_0057dd60(local_c GEN_EDX_ARG), piVar9[0x2a] == 0)) &&
           (uVar2 != 0)) {
          piVar9[0x1a] = uVar2;
          *((uint *)GEN_TOP((uVar2 + 0x84))) = *((uint *)GEN_TOP((uVar2 + 0x84))) | 0x4000000;
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0x30))))(piVar9 GEN_EDX_ARG,1);
          if (*((short *)GEN_TOP((uVar2 + 0x18))) == 8) {
            *((int * PTR32 *)GEN_TOP((uVar2 + 0x98))) = piVar9;
          }
        }
      }
    }
  }
  if ((char)param_2 < '\0') {
    F_005a82c0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)this + 0x98))),0x17,700);
    local_10 = ((int *)GEN_TOP(0x0));
    do {
      uVar2 = (uint)*((ushort *)GEN_TOP(((int)this + 0x98)));
      if ((local_10 != ((int *)GEN_TOP(0x0))) &&
         (uVar2 = uVar2 * 10000 + 700 + (int)local_10,
         (*((int *)GEN_TOP(((int)this + 0x50))) - *((int *)GEN_TOP(((int)this + 0x4c))) & 0xfffffffcU) != 0)) {
        for (piVar9 = *((int * PTR32 *)GEN_TOP(((int)this + 0x3c))); piVar9 != *((int * PTR32 *)GEN_TOP(((int)this + 0x40)));
            piVar9 = piVar9 + 1) {
          iVar8 = *piVar9;
          if (*((uint *)GEN_TOP((iVar8 + 4))) == uVar2) goto LAB_005adaa9;
        }
      }
      if (((*((byte *)GEN_TOP(((int)this + 0x60))) & 1) == 0) || (uVar2 == 0)) {
        iVar8 = 0;
      }
      else {
        iVar10 = *((int *)GEN_TOP(((int)this + 0xc)));
        iVar8 = 0;
        if (((iVar10 != 0) && (uVar5 = *((uint *)GEN_TOP((iVar10 + 4))), uVar5 != 0)) &&
           (uVar3 = 0, uVar5 != 0)) {
          piVar9 = *((int * PTR32 *)GEN_TOP((iVar10 + 8)));
          do {
            if (*((uint *)GEN_TOP((*piVar9 + 4))) == uVar2) {
              iVar8 = (*((int * PTR32 *)GEN_TOP((iVar10 + 8))))[uVar3];
              goto LAB_005adaa9;
            }
            uVar3 = uVar3 + 1;
            piVar9 = piVar9 + 1;
          } while (uVar3 < uVar5);
          iVar8 = 0;
        }
      }
LAB_005adaa9: ;
      *((int *)GEN_TOP(((int)this + (int)((int)(uintptr_t)local_10) * 4 + 0x23c))) = iVar8;
      local_10 = ((int *)GEN_TOP(((int)local_10 + 1)));
    } while (local_10 < 0x18);
  }
  else {
    iVar8 = *((int *)GEN_TOP(((int)this + 0x114)));
    if (iVar8 != 0) {
      *((uint *)GEN_TOP((iVar8 + 0x84))) = *((uint *)GEN_TOP((iVar8 + 0x84))) & 0xffefffff;
      *((uint *)GEN_TOP((iVar8 + 0x88))) = *((uint *)GEN_TOP((iVar8 + 0x88))) | 0x80;
    }
  }
  if ((param_2 & 0x100) == 0) {
    iVar8 = *((int *)GEN_TOP(((int)this + 0x11c)));
    if (iVar8 == 0) {
      *((uint *)GEN_TOP(((int)this + 0x84))) = param_1;
      *((uint *)GEN_TOP(((int)this + 0x88))) = param_2;
      return 0;
    }
    *((uint *)GEN_TOP((iVar8 + 0x84))) = *((uint *)GEN_TOP((iVar8 + 0x84))) & 0xffefffff;
    *((uint *)GEN_TOP((iVar8 + 0x88))) = *((uint *)GEN_TOP((iVar8 + 0x88))) | 0x80;
  }
  *((uint *)GEN_TOP(((int)this + 0x84))) = param_1;
  *((uint *)GEN_TOP(((int)this + 0x88))) = param_2;
  return param_1;
}

/* ref: FUN_005adb40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005adb40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0x5adb40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_FRAME_DECL_TOP(0x98, 8, 4);
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  short sVar5;
  byte * pbVar6;
  int iVar7;
  uint * puVar8;
  int * piVar9;
  undefined * this_00;
  uint * puVar10;
  undefined4 * puVar11;
  bool bVar12;
  float10 fVar13;
  undefined4 * puVar14;
  float fVar15;
  
  ((uint *)(gen_frame + 0x84))[3] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x94);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) = this;
  if (param_1 == 0) {
    iVar7 = *((int *)GEN_TOP(((int)this + 0x128)));
    if (iVar7 != 0) {
      *((uint *)GEN_TOP((iVar7 + 0x84))) = *((uint *)GEN_TOP((iVar7 + 0x84))) & 0xffefffff;
      *((uint *)GEN_TOP((iVar7 + 0x88))) = *((uint *)GEN_TOP((iVar7 + 0x88))) | 0x80;
    }
  }
  else {
    (*(uint *)(gen_frame + 0x0)) = param_1;
    if (8 < param_1) {
      (*(uint *)(gen_frame + 0x0)) = 8;
    }
    puVar14 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 300)));
    if ((puVar14 == ((undefined4 *)GEN_TOP(0x0))) || ((*(undefined4 * PTR32 *)(gen_frame + 0x18)) = puVar14, *(short *)(puVar14 + 6) != 3)) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = ((undefined4 *)GEN_TOP(0x0));
    }
    ((uint *)(gen_frame + 0x28))[0] = 0;
    ((uint *)(gen_frame + 0x28))[2] = 0;
    ((uint *)(gen_frame + 0x28))[4] = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    ((uint *)(gen_frame + 0x60))[0] = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 8;
    (*(undefined4 *)(gen_frame + 0x24)) = param_5;
    (*(int *)(gen_frame + 0x1c)) = 1;
    if ((*(uint *)(gen_frame + 0x0)) != 0) {
      puVar8 = ((uint *)(gen_frame + 0x28)) + 1;
      pbVar6 = ((byte *)GEN_TOP((param_3 + param_4 * 8)));
      (*(int *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x0)) + 1;
      do {
        if ((*pbVar6 & 0xf) == 0) {
          (*(uint *)(gen_frame + 0x4)) = 0;
        }
        else {
          (*(uint *)(gen_frame + 0x4)) = *(uint *)(pbVar6 + 4);
        }
        if ((puVar8[-1] >> 5 & 1) != 0) {
          puVar14 = ((undefined4 *)GEN_TOP(*puVar8));
          if (puVar14 != ((undefined4 *)GEN_TOP(0x0))) {
            uVar2 = puVar8[-1] & 0xf;
            if (uVar2 == 9) {
              F_00488040(puVar14 GEN_EDX_FWD,((byte *)(gen_frame + 0x8)) + 4,*puVar14,puVar14[1]);
              F_00488dc0(puVar14 GEN_EDX_ARG);
              F_00406ad0(puVar14);
            }
            else if ((uVar2 == 6) || (uVar2 == 7)) {
              F_00406ad0(puVar14);
              *puVar8 = 0;
            }
          }
          *puVar8 = 0;
        }
        puVar8[-1] = 8;
        *puVar8 = (*(uint *)(gen_frame + 0x4));
        puVar8 = puVar8 + 2;
        pbVar6 = pbVar6 + 8;
        (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) - 1;
      } while ((*(uint *)(gen_frame + 0x0)) != 0);
    }
    puVar14 = (*(undefined4 * PTR32 *)(gen_frame + 0x18));
    F_00584680((*(undefined4 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x1c)),&(*(undefined4 *)(gen_frame + 0x20)));
    (*(int *)(gen_frame + 0x1c)) = REFG(undefined4, 0x108cc50);
    if (puVar14 == ((undefined4 *)GEN_TOP(0x0))) {
      sVar5 = 0;
    }
    else {
      uVar2 = F_005684e0(puVar14 GEN_EDX_ARG,0);
      if (uVar2 == 0) {
        sVar5 = 0;
      }
      else {
        uVar4 = F_0042a990(puVar14 + 0x27 GEN_EDX_ARG);
        fVar15 = REFG(float, 0x10a0da0);
        if ((*((byte *)GEN_TOP((uVar2 + 0x148))) & 2) != 0) {
          puVar14 = *((undefined4 * PTR32 *)GEN_TOP((uVar2 + 0x13c)));
          (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = puVar14;
          if (uVar4 == 0) {
            fVar15 = 0.0;
          }
          else {
            piVar9 = puVar14 + 0x51;
            ((code *)*((gen_code32 *)GEN_TOP((puVar14[0x51] + 0x24))))(piVar9,uVar2,uVar4);
            *(undefined1 *)(puVar14 + 0xaa) = 0;
            puVar14[0x7e] = 0;
            puVar14[0x7f] = (*(int *)(gen_frame + 0x1c));
            if ((((*((byte *)GEN_TOP((puVar14[0x53] + 0x148))) & 2) != 0) &&
                ((*((byte *)GEN_TOP((puVar14[0x54] + 0x6e))) & 1) != 0)) &&
               ((*((byte *)GEN_TOP((puVar14[0x54] + 0x6e))) & 2) != 0)) {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 4))))(piVar9 GEN_EDX_ARG);
              F_005662b0(piVar9 GEN_EDX_ARG,uVar4);
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 8))))(piVar9 GEN_EDX_ARG);
            }
            fVar15 = gen_bits2f((*(undefined4 * PTR32 *)(gen_frame + 0x18))[0xa2]);
            (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) = (undefined4)gen_fl2bits(fVar15);
            (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) = (*(undefined4 * PTR32 *)(gen_frame + 0x18))[0xa1];
          }
        }
        puVar14 = ((undefined4 *)GEN_TOP((uVar2 + 0xa8)));
        puVar11 = ((undefined4 *)GEN_TOP((uVar2 + 100)));
        for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 - 1) {
          *puVar11 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar11 = puVar11 + 1;
        }
        sVar5 = (short)(int)fVar15;
      }
    }
    if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x128))) != 0) {
      *((short *)GEN_TOP((*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x128))) + 0x7e))) =
           (*((short *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0xb2))) - *((short *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0xb0)))) + sVar5;
    }
    iVar7 = *((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x128)));
    if (iVar7 != 0) {
      *((uint *)GEN_TOP((iVar7 + 0x84))) = *((uint *)GEN_TOP((iVar7 + 0x84))) | 0x100000;
      *((uint *)GEN_TOP((iVar7 + 0x88))) = *((uint *)GEN_TOP((iVar7 + 0x88))) & 0xffffff7f;
    }
    iVar7 = 8;
    puVar8 = ((uint *)(gen_frame + 0x60)) + 3;
    do {
      puVar10 = puVar8 - 2;
      if ((puVar8[-3] >> 5 & 1) != 0) {
        puVar14 = ((undefined4 *)GEN_TOP(*puVar10));
        if (puVar14 != ((undefined4 *)GEN_TOP(0x0))) {
          uVar2 = puVar8[-3] & 0xf;
          if (uVar2 == 9) {
            F_00488040(puVar14 GEN_EDX_ARG,((byte *)(gen_frame + 0x8)) + 4,*puVar14,puVar14[1]);
            F_00488dc0(puVar14 GEN_EDX_ARG);
            F_00406ad0(puVar14);
          }
          else if ((uVar2 == 6) || (uVar2 == 7)) {
            F_00406ad0(puVar14);
            *puVar10 = 0;
          }
        }
        *puVar10 = 0;
      }
      iVar7 = iVar7 - 1;
      puVar8[-3] = 0;
      puVar8 = puVar10;
    } while (-1 < iVar7);
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0xd0)));
  if ((this_00 == ((undefined *)GEN_TOP(0x0))) || (*((short *)GEN_TOP(((int)this_00 + 0x18))) != 3)) {
    this_00 = ((undefined *)GEN_TOP(0x0));
  }
  ((uint *)(gen_frame + 0x60))[3] = 6;
  ((uint *)(gen_frame + 0x60))[4] = param_6;
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)*((ushort *)GEN_TOP(((int)this_00 + 0x7c)));
  }
  (*(undefined4 *)(gen_frame + 0x74)) = 4;
  (*(uint *)(gen_frame + 0x78)) = uVar2;
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)(*((byte *)GEN_TOP(((int)this_00 + 0xfc))) >> 4);
  }
  (*(undefined4 *)(gen_frame + 0x7c)) = 4;
  (*(uint *)(gen_frame + 0x80)) = uVar2;
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    bVar1 = 0;
  }
  else {
    bVar1 = *((byte *)GEN_TOP(((int)this_00 + 0xfd)));
  }
  ((uint *)(gen_frame + 0x84))[0] = 4;
  ((uint *)(gen_frame + 0x84))[1] = (uint)bVar1;
  pbVar6 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) + 4))))
                             (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x14)),0x2a,4,((uint *)(gen_frame + 0x60)) + 3)));
  if ((*pbVar6 & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(pbVar6 + 4);
  }
  F_00584110(this_00 GEN_EDX_ARG,uVar3);
  puVar14 = (*(undefined4 * PTR32 *)(gen_frame + 0x18));
  if ((((*(uint *)(gen_frame + 0x14)) >> 5 & 1) != 0) && ((*(undefined4 * PTR32 *)(gen_frame + 0x18)) != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar2 = (*(uint *)(gen_frame + 0x14)) & 0xf;
    if (uVar2 == 9) {
      F_00488040((*(undefined4 * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,((byte *)(gen_frame + 0x8)) + 4,*(*(undefined4 * PTR32 *)(gen_frame + 0x18)),(*(undefined4 * PTR32 *)(gen_frame + 0x18))[1]);
      F_00488dc0(puVar14 GEN_EDX_ARG);
    }
    else if ((uVar2 != 6) && (uVar2 != 7)) goto LAB_005adf3c;
    F_00406ad0(puVar14);
  }
LAB_005adf3c: ;
  iVar7 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    puVar14 = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)(int)*((short *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0xaa))))));
    (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = puVar14;
    if (((*((uint *)GEN_TOP(((int)this_00 + 0x88))) & 1) == 0) &&
       (fVar13 = (float10)(int)*((short *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0xaa))),
       bVar12 = GEN_ISNAN((float10)*((float *)GEN_TOP(((int)this_00 + 0x3c)))) || GEN_ISNAN(fVar13),
       bVar12 == (bVar12 || (float10)*((float *)GEN_TOP(((int)this_00 + 0x3c))) == fVar13))) {
      *((uint *)GEN_TOP(((int)this_00 + 0x88))) = *((uint *)GEN_TOP(((int)this_00 + 0x88))) | 1;
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this_00 + 0x3c))) = puVar14;
  }
  (*(int *)(gen_frame + 0x1c)) = REFG(undefined4, 0x108cc50);
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    sVar5 = 0;
  }
  else {
    uVar2 = F_005684e0(this_00 GEN_EDX_ARG,0);
    if (uVar2 == 0) {
      sVar5 = 0;
    }
    else {
      uVar4 = F_0042a990((int)this_00 + 0x9c GEN_EDX_ARG);
      fVar15 = REFG(float, 0x10a0da0);
      if ((*((byte *)GEN_TOP((uVar2 + 0x148))) & 2) != 0) {
        puVar14 = *((undefined4 * PTR32 *)GEN_TOP((uVar2 + 0x13c)));
        (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = puVar14;
        if (uVar4 == 0) {
          fVar15 = 0.0;
        }
        else {
          piVar9 = puVar14 + 0x51;
          ((code *)*((gen_code32 *)GEN_TOP((puVar14[0x51] + 0x24))))(piVar9,uVar2,uVar4);
          *(undefined1 *)(puVar14 + 0xaa) = 0;
          puVar14[0x7e] = 0;
          puVar14[0x7f] = (*(int *)(gen_frame + 0x1c));
          if ((((*((byte *)GEN_TOP((puVar14[0x53] + 0x148))) & 2) != 0) &&
              ((*((byte *)GEN_TOP((puVar14[0x54] + 0x6e))) & 1) != 0)) &&
             ((*((byte *)GEN_TOP((puVar14[0x54] + 0x6e))) & 2) != 0)) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 4))))(piVar9 GEN_EDX_ARG);
            F_005662b0(piVar9 GEN_EDX_ARG,uVar4);
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 8))))(piVar9 GEN_EDX_ARG);
          }
          fVar15 = gen_bits2f((*(undefined4 * PTR32 *)(gen_frame + 0x18))[0xa2]);
          (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) = (undefined4)gen_fl2bits(fVar15);
          (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) = (*(undefined4 * PTR32 *)(gen_frame + 0x18))[0xa1];
        }
      }
      puVar14 = ((undefined4 *)GEN_TOP((uVar2 + 0xa8)));
      puVar11 = ((undefined4 *)GEN_TOP((uVar2 + 100)));
      for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 - 1) {
        *puVar11 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar11 = puVar11 + 1;
      }
      sVar5 = (short)(int)fVar15;
      iVar7 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8));
    }
  }
  if (*((int *)GEN_TOP((iVar7 + 200))) != 0) {
    *((short *)GEN_TOP((*((int *)GEN_TOP((iVar7 + 200))) + 0x7e))) =
         (*((short *)GEN_TOP((iVar7 + 0xae))) - *((short *)GEN_TOP((iVar7 + 0xac)))) + sVar5;
  }
  iVar7 = *((int *)GEN_TOP((iVar7 + 200)));
  if (iVar7 != 0) {
    *((uint *)GEN_TOP((iVar7 + 0x84))) = *((uint *)GEN_TOP((iVar7 + 0x84))) | 0x100000;
    *((uint *)GEN_TOP((iVar7 + 0x88))) = *((uint *)GEN_TOP((iVar7 + 0x88))) & 0xffffff7f;
  }
  iVar7 = 3;
  puVar8 = ((uint *)(gen_frame + 0x84)) + 3;
  do {
    uVar2 = puVar8[-3];
    puVar10 = puVar8 - 2;
    if ((uVar2 >> 5 & 1) != 0) {
      puVar14 = ((undefined4 *)GEN_TOP(*puVar10));
      if (puVar14 != ((undefined4 *)GEN_TOP(0x0))) {
        uVar2 = uVar2 & 0xf;
        if (uVar2 == 9) {
          F_00488040(puVar14 GEN_EDX_ARG,((byte *)(gen_frame + 0x8)) + 4,*puVar14,puVar14[1]);
          F_00488dc0(puVar14 GEN_EDX_ARG);
          uVar2 = F_00406ad0(puVar14);
        }
        else if ((uVar2 == 6) || (uVar2 == 7)) {
          uVar2 = F_00406ad0(puVar14);
          *puVar10 = 0;
        }
      }
      *puVar10 = 0;
    }
    iVar7 = iVar7 - 1;
    puVar8[-3] = 0;
    puVar8 = puVar10;
  } while (-1 < iVar7);
  return uVar2;
}

/* ref: FUN_005ae150 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005ae150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined * param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x5ae150u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined * param_7 = (undefined *)(uintptr_t)gen_a7;)
  GEN_FRAME_DECL_TOP(0xe4, 12, 4);
  byte bVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  uint uVar4;
  short sVar5;
  byte * pbVar6;
  uint * puVar7;
  undefined * pvVar8;
  int iVar9;
  uint uVar10;
  undefined * pvVar11;
  int * this_00;
  undefined4 * puVar12;
  uint * puVar13;
  bool bVar14;
  float10 fVar15;
  undefined * pvVar16;
  
  ((uint *)(gen_frame + 0xd0))[3] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xe0);
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = param_7;
  puVar2 = ((undefined4 *)GEN_TOP((param_1 & 0xffff)));
  (*(uint *)(gen_frame + 0x4)) = param_1 >> 0x10;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
    iVar9 = *((int *)GEN_TOP(((int)this + 200)));
    if (iVar9 != 0) {
      *((uint *)GEN_TOP((iVar9 + 0x84))) = *((uint *)GEN_TOP((iVar9 + 0x84))) & 0xffefffff;
      *((uint *)GEN_TOP((iVar9 + 0x88))) = *((uint *)GEN_TOP((iVar9 + 0x88))) | 0x80;
    }
    return 0;
  }
  (*(undefined4 *)(gen_frame + 0x24)) = param_5;
  ((uint *)(gen_frame + 0x60))[4] = param_5;
  if (((undefined4 *)GEN_TOP(0x8)) < puVar2) {
    puVar2 = ((undefined4 *)GEN_TOP(0x8));
  }
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  ((uint *)(gen_frame + 0x60))[0] = 0;
  ((uint *)(gen_frame + 0x74))[0] = 0;
  ((uint *)(gen_frame + 0x74))[2] = 0;
  ((uint *)(gen_frame + 0x74))[4] = 0;
  (*(undefined4 *)(gen_frame + 0x8c)) = 0;
  (*(undefined4 *)(gen_frame + 0x94)) = 0;
  (*(undefined4 *)(gen_frame + 0x9c)) = 0;
  (*(undefined4 *)(gen_frame + 0xa4)) = 0;
  ((uint *)(gen_frame + 0xac))[0] = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 8;
  ((uint *)(gen_frame + 0x60))[3] = 8;
  (*(uint *)(gen_frame + 0x0)) = 1;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    pbVar6 = ((byte *)GEN_TOP((param_3 + param_4 * 8)));
    puVar7 = ((uint *)(gen_frame + 0x74));
    (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar2;
    do {
      uVar10 = (*(uint *)(gen_frame + 0x4)) & 2;
      (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) >> 2;
      if (uVar10 != 0) {
        if ((*pbVar6 & 0xf) == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(uint *)(pbVar6 + 4);
        }
        if ((*puVar7 >> 5 & 1) != 0) {
          F_005a0260(puVar7 GEN_EDX_FWD);
        }
        (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) + 1;
        *puVar7 = 8;
        puVar7[1] = uVar10;
        puVar7 = puVar7 + 2;
      }
      pbVar6 = pbVar6 + 8;
      puVar2 = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc)) - 1)));
      (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar2;
    } while (puVar2 != ((undefined4 *)GEN_TOP(0x0)));
  }
  iVar9 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x128)));
  if (iVar9 != 0) {
    *((uint *)GEN_TOP((iVar9 + 0x84))) = *((uint *)GEN_TOP((iVar9 + 0x84))) & 0xffefffff;
    *((uint *)GEN_TOP((iVar9 + 0x88))) = *((uint *)GEN_TOP((iVar9 + 0x88))) | 0x80;
  }
  if ((*(undefined * PTR32 *)(gen_frame + 0x14)) != ((undefined *)GEN_TOP(0x0))) {
    F_00584680((*(undefined * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x0)),((uint *)(gen_frame + 0x60)) + 3);
  }
  pvVar11 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0xd0)));
  if ((pvVar11 == ((undefined *)GEN_TOP(0x0))) || (*((short *)GEN_TOP(((int)pvVar11 + 0x18))) != 3)) {
    pvVar11 = ((undefined *)GEN_TOP(0x0));
  }
  ((uint *)(gen_frame + 0xac))[3] = 6;
  ((uint *)(gen_frame + 0xac))[4] = param_6;
  if (pvVar11 == ((undefined *)GEN_TOP(0x0))) {
    uVar10 = 0;
  }
  else {
    uVar10 = (uint)*((ushort *)GEN_TOP(((int)pvVar11 + 0x7c)));
  }
  (*(undefined4 *)(gen_frame + 0xc0)) = 4;
  (*(uint *)(gen_frame + 0xc4)) = uVar10;
  if (pvVar11 == ((undefined *)GEN_TOP(0x0))) {
    uVar10 = 0;
  }
  else {
    uVar10 = (uint)(*((byte *)GEN_TOP(((int)pvVar11 + 0xfc))) >> 4);
  }
  (*(undefined4 *)(gen_frame + 0xc8)) = 4;
  (*(uint *)(gen_frame + 0xcc)) = uVar10;
  if (pvVar11 == ((undefined *)GEN_TOP(0x0))) {
    bVar1 = 0;
  }
  else {
    bVar1 = *((byte *)GEN_TOP(((int)pvVar11 + 0xfd)));
  }
  ((uint *)(gen_frame + 0xd0))[0] = 4;
  ((uint *)(gen_frame + 0xd0))[1] = (uint)bVar1;
  pbVar6 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) + 4))))
                             (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x8)),0x2a,4,((uint *)(gen_frame + 0xac)) + 3)));
  if ((*pbVar6 & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(pbVar6 + 4);
  }
  F_00584110(pvVar11 GEN_EDX_ARG,uVar3);
  puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0xc));
  if ((((*(uint *)(gen_frame + 0x8)) >> 5 & 1) != 0) && ((*(undefined4 * PTR32 *)(gen_frame + 0xc)) != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar10 = (*(uint *)(gen_frame + 0x8)) & 0xf;
    if (uVar10 == 9) {
      F_00488040((*(undefined4 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x14)),*(*(undefined4 * PTR32 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0xc))[1]);
      F_00488dc0(puVar2 GEN_EDX_ARG);
    }
    else if ((uVar10 != 6) && (uVar10 != 7)) goto LAB_005ae5c8;
    F_00406ad0(puVar2);
  }
LAB_005ae5c8: ;
  pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x18));
  if (pvVar11 != ((undefined *)GEN_TOP(0x0))) {
    sVar5 = *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0xaa)));
    uVar10 = *((uint *)GEN_TOP(((int)pvVar11 + 0x88)));
    pvVar16 = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)(int)sVar5)));
    (*(undefined * PTR32 *)(gen_frame + 0x14)) = pvVar16;
    if (((uVar10 & 1) == 0) &&
       (fVar15 = (float10)(int)sVar5,
       bVar14 = GEN_ISNAN((float10)*((float *)GEN_TOP(((int)pvVar11 + 0x3c)))) || GEN_ISNAN(fVar15),
       bVar14 == (bVar14 || (float10)*((float *)GEN_TOP(((int)pvVar11 + 0x3c))) == fVar15))) {
      *((uint *)GEN_TOP(((int)pvVar11 + 0x88))) = uVar10 | 1;
    }
    *((undefined * PTR32 *)GEN_TOP(((int)pvVar11 + 0x3c))) = pvVar16;
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = ((undefined4 *)GEN_TOP(REFG(undefined4, 0x108cc50)));
  if (pvVar11 == ((undefined *)GEN_TOP(0x0))) {
    sVar5 = 0;
  }
  else {
    uVar10 = F_005684e0(pvVar11 GEN_EDX_ARG,0);
    if (uVar10 == 0) {
      sVar5 = 0;
    }
    else {
      uVar4 = F_0042a990((int)pvVar11 + 0x9c GEN_EDX_ARG);
      pvVar11 = (undefined *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x10a0da0)));
      if ((*((byte *)GEN_TOP((uVar10 + 0x148))) & 2) != 0) {
        pvVar11 = *((undefined * PTR32 *)GEN_TOP((uVar10 + 0x13c)));
        (*(undefined * PTR32 *)(gen_frame + 0x14)) = pvVar11;
        if (uVar4 == 0) {
          pvVar11 = ((undefined *)GEN_TOP(0x0));
        }
        else {
          this_00 = ((int *)GEN_TOP(((int)pvVar11 + 0x144)));
          ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar11 + 0x144))) + 0x24))))(this_00,uVar10,uVar4);
          *((undefined1 *)GEN_TOP(((int)pvVar11 + 0x2a8))) = 0;
          *((undefined4 *)GEN_TOP(((int)pvVar11 + 0x1f8))) = 0;
          *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar11 + 0x1fc))) = (*(undefined4 * PTR32 *)(gen_frame + 0xc));
          if ((((*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar11 + 0x14c))) + 0x148))) & 2) != 0) &&
              (bVar1 = *((byte *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar11 + 0x150))) + 0x6e))), (bVar1 & 1) != 0)) &&
             ((bVar1 & 2) != 0)) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 4))))(this_00 GEN_EDX_ARG);
            F_005662b0(this_00 GEN_EDX_ARG,uVar4);
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 8))))(this_00 GEN_EDX_ARG);
          }
          pvVar11 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x288)));
          uVar3 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x284)));
          (*(undefined * PTR32 *)(gen_frame + 0x14)) = pvVar11;
          (*(undefined4 *)(gen_frame + 0x10)) = uVar3;
        }
      }
      puVar2 = ((undefined4 *)GEN_TOP((uVar10 + 0xa8)));
      puVar12 = ((undefined4 *)GEN_TOP((uVar10 + 100)));
      for (iVar9 = 0x11; iVar9 != 0; iVar9 = iVar9 - 1) {
        *puVar12 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar12 = puVar12 + 1;
      }
      sVar5 = (short)(int)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar11)));
      pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x18));
    }
  }
  if (*((int *)GEN_TOP(((int)pvVar8 + 200))) != 0) {
    *((short *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar8 + 200))) + 0x7e))) =
         (*((short *)GEN_TOP(((int)pvVar8 + 0xae))) - *((short *)GEN_TOP(((int)pvVar8 + 0xac)))) + sVar5;
  }
  iVar9 = *((int *)GEN_TOP(((int)pvVar8 + 200)));
  if (iVar9 != 0) {
    *((uint *)GEN_TOP((iVar9 + 0x84))) = *((uint *)GEN_TOP((iVar9 + 0x84))) | 0x100000;
    *((uint *)GEN_TOP((iVar9 + 0x88))) = *((uint *)GEN_TOP((iVar9 + 0x88))) & 0xffffff7f;
  }
  iVar9 = 3;
  (*(bool *)(gen_frame + 0x1f)) = 1 < (*(uint *)(gen_frame + 0x0));
  puVar7 = ((uint *)(gen_frame + 0xd0)) + 3;
  do {
    puVar13 = puVar7 - 2;
    if ((puVar7[-3] >> 5 & 1) != 0) {
      puVar2 = ((undefined4 *)GEN_TOP(*puVar13));
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        uVar10 = puVar7[-3] & 0xf;
        if (uVar10 == 9) {
          F_00488040(puVar2 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x14)),*puVar2,puVar2[1]);
          F_00488dc0(puVar2 GEN_EDX_ARG);
          F_00406ad0(puVar2);
        }
        else if ((uVar10 == 6) || (uVar10 == 7)) {
          F_00406ad0(puVar2);
          *puVar13 = 0;
        }
      }
      *puVar13 = 0;
    }
    iVar9 = iVar9 - 1;
    puVar7[-3] = 0;
    puVar7 = puVar13;
  } while (-1 < iVar9);
  iVar9 = 8;
  puVar7 = ((uint *)(gen_frame + 0xac)) + 3;
  do {
    puVar13 = puVar7 - 2;
    if ((puVar7[-3] >> 5 & 1) != 0) {
      puVar2 = ((undefined4 *)GEN_TOP(*puVar13));
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        uVar10 = puVar7[-3] & 0xf;
        if (uVar10 == 9) {
          F_00488040(puVar2 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x14)),*puVar2,puVar2[1]);
          F_00488dc0(puVar2 GEN_EDX_ARG);
          F_00406ad0(puVar2);
        }
        else if ((uVar10 == 6) || (uVar10 == 7)) {
          F_00406ad0(puVar2);
          *puVar13 = 0;
        }
      }
      *puVar13 = 0;
    }
    iVar9 = iVar9 - 1;
    puVar7[-3] = 0;
    puVar7 = puVar13;
  } while (-1 < iVar9);
  iVar9 = 8;
  puVar7 = ((uint *)(gen_frame + 0x60)) + 3;
  do {
    puVar13 = puVar7 - 2;
    if ((puVar7[-3] >> 5 & 1) != 0) {
      puVar2 = ((undefined4 *)GEN_TOP(*puVar13));
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        uVar10 = puVar7[-3] & 0xf;
        if (uVar10 == 9) {
          F_00488040(puVar2 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x14)),*puVar2,puVar2[1]);
          F_00488dc0(puVar2 GEN_EDX_ARG);
          F_00406ad0(puVar2);
        }
        else if ((uVar10 == 6) || (uVar10 == 7)) {
          F_00406ad0(puVar2);
          *puVar13 = 0;
        }
      }
      *puVar13 = 0;
    }
    iVar9 = iVar9 - 1;
    puVar7[-3] = 0;
    puVar7 = puVar13;
  } while (-1 < iVar9);
  return (*(bool *)(gen_frame + 0x1f));
}

/* ref: FUN_005ae8f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ae8f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_1, float gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(int param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x5ae8f0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_1 = (float)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(int param_7 = (int)gen_a7;)
  GEN_FRAME_DECL_TOP(0x98, 8, 4);
  short sVar1;
  undefined * pvVar2;
  byte bVar3;
  uint uVar4;
  byte * pbVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  short sVar9;
  undefined * pvVar10;
  uint * puVar11;
  int * piVar12;
  undefined4 * puVar13;
  undefined4 * puVar14;
  uint * puVar15;
  bool bVar16;
  float10 fVar17;
  float fVar18;
  
  ((uint *)(gen_frame + 0x84))[3] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x94);
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  if (param_1 == 0.0) {
    uVar8 = *((uint *)GEN_TOP(((int)this + 200)));
    uVar4 = 0;
    if (uVar8 != 0) {
      *((uint *)GEN_TOP((uVar8 + 0x84))) = *((uint *)GEN_TOP((uVar8 + 0x84))) & 0xffefffff;
      *((uint *)GEN_TOP((uVar8 + 0x88))) = *((uint *)GEN_TOP((uVar8 + 0x88))) | 0x80;
      return uVar8;
    }
  }
  else {
    if (8 < (uint)gen_fl2bits(param_1)) {
      param_1 = 1.12104e-44;
    }
    pvVar10 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0xd0)));
    if ((pvVar10 == ((undefined *)GEN_TOP(0x0))) || (*((short *)GEN_TOP(((int)pvVar10 + 0x18))) != 3)) {
      pvVar10 = ((undefined *)GEN_TOP(0x0));
    }
    ((uint *)(gen_frame + 0x60))[3] = 6;
    ((uint *)(gen_frame + 0x60))[4] = param_6;
    if (pvVar10 == ((undefined *)GEN_TOP(0x0))) {
      uVar4 = 0;
    }
    else {
      uVar4 = (uint)*((ushort *)GEN_TOP(((int)pvVar10 + 0x7c)));
    }
    (*(undefined4 *)(gen_frame + 0x74)) = 4;
    (*(uint *)(gen_frame + 0x78)) = uVar4;
    if (pvVar10 == ((undefined *)GEN_TOP(0x0))) {
      uVar4 = 0;
    }
    else {
      uVar4 = (uint)(*((byte *)GEN_TOP(((int)pvVar10 + 0xfc))) >> 4);
    }
    (*(undefined4 *)(gen_frame + 0x7c)) = 4;
    (*(uint *)(gen_frame + 0x80)) = uVar4;
    if (pvVar10 == ((undefined *)GEN_TOP(0x0))) {
      bVar3 = 0;
    }
    else {
      bVar3 = *((byte *)GEN_TOP(((int)pvVar10 + 0xfd)));
    }
    ((uint *)(gen_frame + 0x84))[0] = 4;
    ((uint *)(gen_frame + 0x84))[1] = (uint)bVar3;
    pbVar5 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) + 4))))
                               (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x10)),0x2a,4,((uint *)(gen_frame + 0x60)) + 3)));
    if ((*pbVar5 & 0xf) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(pbVar5 + 4);
    }
    F_00584110(pvVar10 GEN_EDX_ARG,uVar6);
    if (((*(uint *)(gen_frame + 0x10)) >> 5 & 1) != 0) {
      F_005a0260(&(*(uint *)(gen_frame + 0x10)) GEN_EDX_ARG);
    }
    if (pvVar10 != ((undefined *)GEN_TOP(0x0))) {
      sVar9 = *((short *)GEN_TOP(((int)this + 0xaa)));
      uVar4 = *((uint *)GEN_TOP(((int)pvVar10 + 0x88)));
      fVar18 = (float)(int)sVar9;
      ((float *)(gen_frame + 0x1c))[0] = fVar18;
      if (((uVar4 & 1) == 0) &&
         (fVar17 = (float10)(int)sVar9,
         bVar16 = GEN_ISNAN((float10)*((float *)GEN_TOP(((int)pvVar10 + 0x3c)))) || GEN_ISNAN(fVar17),
         bVar16 == (bVar16 || (float10)*((float *)GEN_TOP(((int)pvVar10 + 0x3c))) == fVar17))) {
        *((uint *)GEN_TOP(((int)pvVar10 + 0x88))) = uVar4 | 1;
      }
      *((float *)GEN_TOP(((int)pvVar10 + 0x3c))) = fVar18;
    }
    F_00577d20(pvVar10 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),((float *)(gen_frame + 0x1c)),0,0,REFG(undefined4, 0x108cc50),0);
    iVar7 = *((int *)GEN_TOP(((int)this + 200)));
    if (iVar7 != 0) {
      sVar9 = *((short *)GEN_TOP(((int)this + 0xae)));
      sVar1 = *((short *)GEN_TOP(((int)this + 0xac)));
      *((short *)GEN_TOP((iVar7 + 0x7e))) = (sVar9 - sVar1) + (*(undefined2 *)((char *)&((float *)(gen_frame + 0x1c))[0] + 0));
    }
    iVar7 = *((int *)GEN_TOP(((int)this + 200)));
    if (iVar7 != 0) {
      *((uint *)GEN_TOP((iVar7 + 0x84))) = *((uint *)GEN_TOP((iVar7 + 0x84))) | 0x100000;
      *((uint *)GEN_TOP((iVar7 + 0x88))) = *((uint *)GEN_TOP((iVar7 + 0x88))) & 0xffffff7f;
    }
    pvVar10 = *((undefined * PTR32 *)GEN_TOP(((int)this + 300)));
    if ((pvVar10 == ((undefined *)GEN_TOP(0x0))) || (*((short *)GEN_TOP(((int)pvVar10 + 0x18))) != 3)) {
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(0x0));
    }
    else {
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar10;
    }
    ((uint *)(gen_frame + 0x28))[0] = 0;
    ((uint *)(gen_frame + 0x28))[2] = 0;
    ((uint *)(gen_frame + 0x28))[4] = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    ((uint *)(gen_frame + 0x60))[0] = 0;
    ((float *)(gen_frame + 0x1c))[1] = 1.12104e-44;
    ((float *)(gen_frame + 0x1c))[2] = gen_bits2f(param_5);
    iVar7 = 1;
    if (param_1 != 0.0) {
      pbVar5 = ((byte *)GEN_TOP((param_3 + param_4 * 8)));
      ((float *)(gen_frame + 0x1c))[0] = param_1;
      puVar11 = ((uint *)(gen_frame + 0x28)) + 1;
      (*(int *)(gen_frame + 0x18)) = (int)gen_fl2bits(param_1) + 1;
      do {
        if ((*pbVar5 & 0xf) == 0) {
          (*(uint *)(gen_frame + 0x0)) = 0;
        }
        else {
          (*(uint *)(gen_frame + 0x0)) = *(uint *)(pbVar5 + 4);
        }
        if ((puVar11[-1] >> 5 & 1) != 0) {
          puVar13 = ((undefined4 *)GEN_TOP(*puVar11));
          if (puVar13 != ((undefined4 *)GEN_TOP(0x0))) {
            uVar4 = puVar11[-1] & 0xf;
            if (uVar4 == 9) {
              F_00488040(puVar13 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x14)),*puVar13,puVar13[1]);
              F_00488dc0(puVar13 GEN_EDX_ARG);
              F_00406ad0(puVar13);
            }
            else if ((uVar4 == 6) || (uVar4 == 7)) {
              F_00406ad0(puVar13);
              *puVar11 = 0;
            }
          }
          *puVar11 = 0;
          this = (*(undefined * PTR32 *)(gen_frame + 0xc));
        }
        puVar11[-1] = 8;
        *puVar11 = (*(uint *)(gen_frame + 0x0));
        puVar11 = puVar11 + 2;
        pbVar5 = pbVar5 + 8;
        fVar18 = gen_bits2f((int)gen_fl2bits(((float *)(gen_frame + 0x1c))[0]) - 1);
        ((float *)(gen_frame + 0x1c))[0] = fVar18;
        iVar7 = (*(int *)(gen_frame + 0x18));
      } while (fVar18 != 0.0);
    }
    pvVar10 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    F_00584680((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,iVar7,((float *)(gen_frame + 0x1c)) + 1);
    pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    (*(int *)(gen_frame + 0x18)) = REFG(undefined4, 0x108cc50);
    if (pvVar10 == ((undefined *)GEN_TOP(0x0))) {
      sVar9 = 0;
    }
    else {
      uVar4 = F_005684e0((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,0);
      if (uVar4 == 0) {
        sVar9 = 0;
        this = (*(undefined * PTR32 *)(gen_frame + 0xc));
      }
      else {
        uVar8 = F_0042a990((int)pvVar2 + 0x9c GEN_EDX_ARG);
        fVar18 = REFG(float, 0x10a0da0);
        if ((*((byte *)GEN_TOP((uVar4 + 0x148))) & 2) != 0) {
          fVar18 = *((float *)GEN_TOP((uVar4 + 0x13c)));
          ((float *)(gen_frame + 0x1c))[0] = fVar18;
          if (uVar8 == 0) {
            fVar18 = 0.0;
          }
          else {
            piVar12 = ((int *)GEN_TOP(((int)gen_fl2bits(fVar18) + 0x144)));
            ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)gen_fl2bits(fVar18) + 0x144))) + 0x24))))(piVar12,uVar4,uVar8);
            *((undefined1 *)GEN_TOP(((int)gen_fl2bits(fVar18) + 0x2a8))) = 0;
            *((undefined4 *)GEN_TOP(((int)gen_fl2bits(fVar18) + 0x1f8))) = 0;
            *((int *)GEN_TOP(((int)gen_fl2bits(fVar18) + 0x1fc))) = (*(int *)(gen_frame + 0x18));
            if ((((*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)gen_fl2bits(fVar18) + 0x14c))) + 0x148))) & 2) != 0) &&
                (bVar3 = *((byte *)GEN_TOP((*((int *)GEN_TOP(((int)gen_fl2bits(fVar18) + 0x150))) + 0x6e))),
                (bVar3 & 1) != 0)) && ((bVar3 & 2) != 0)) {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar12 + 4))))(piVar12 GEN_EDX_ARG);
              F_005662b0(piVar12 GEN_EDX_ARG,uVar8);
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar12 + 8))))(piVar12 GEN_EDX_ARG);
            }
            fVar18 = *((float *)GEN_TOP(((int)gen_fl2bits(((float *)(gen_frame + 0x1c))[0]) + 0x288)));
            uVar8 = *((uint *)GEN_TOP(((int)gen_fl2bits(((float *)(gen_frame + 0x1c))[0]) + 0x284)));
            (*(float *)(gen_frame + 0x14)) = fVar18;
            (*(uint *)(gen_frame + 0x10)) = uVar8;
          }
        }
        puVar13 = ((undefined4 *)GEN_TOP((uVar4 + 0xa8)));
        puVar14 = ((undefined4 *)GEN_TOP((uVar4 + 100)));
        for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 - 1) {
          *puVar14 = *puVar13;
          puVar13 = puVar13 + 1;
          puVar14 = puVar14 + 1;
        }
        sVar9 = (short)(int)fVar18;
        this = (*(undefined * PTR32 *)(gen_frame + 0xc));
      }
    }
    if (*((int *)GEN_TOP(((int)this + 0x128))) != 0) {
      *((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x128))) + 0x7e))) =
           (*((short *)GEN_TOP(((int)this + 0xb2))) - *((short *)GEN_TOP(((int)this + 0xb0)))) + sVar9;
    }
    iVar7 = *((int *)GEN_TOP(((int)this + 0x128)));
    if (iVar7 != 0) {
      *((uint *)GEN_TOP((iVar7 + 0x84))) = *((uint *)GEN_TOP((iVar7 + 0x84))) | 0x100000;
      *((uint *)GEN_TOP((iVar7 + 0x88))) = *((uint *)GEN_TOP((iVar7 + 0x88))) & 0xffffff7f;
    }
    if (param_7 != 0) {
      pvVar10 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x134)));
      if ((pvVar10 == ((undefined *)GEN_TOP(0x0))) || (*((short *)GEN_TOP(((int)pvVar10 + 0x18))) != 3)) {
        pvVar10 = ((undefined *)GEN_TOP(0x0));
      }
      F_00584110(pvVar10 GEN_EDX_ARG,param_7);
      iVar7 = *((int *)GEN_TOP(((int)this + 0x134)));
      if ((iVar7 == 0) || (*((short *)GEN_TOP((iVar7 + 0x18))) != 3)) {
        iVar7 = 0;
      }
      (*(int *)(gen_frame + 0x18)) = REFG(undefined4, 0x108cc50);
      if (iVar7 == 0) {
        sVar9 = 0;
      }
      else {
        uVar4 = F_005684e0(iVar7 GEN_EDX_ARG,0);
        if (uVar4 == 0) {
          sVar9 = 0;
          this = (*(undefined * PTR32 *)(gen_frame + 0xc));
        }
        else {
          uVar8 = F_0042a990(iVar7 + 0x9c GEN_EDX_ARG);
          fVar18 = REFG(float, 0x10a0da0);
          if ((*((byte *)GEN_TOP((uVar4 + 0x148))) & 2) != 0) {
            fVar18 = *((float *)GEN_TOP((uVar4 + 0x13c)));
            ((float *)(gen_frame + 0x1c))[0] = fVar18;
            if (uVar8 == 0) {
              fVar18 = 0.0;
            }
            else {
              piVar12 = ((int *)GEN_TOP(((int)gen_fl2bits(fVar18) + 0x144)));
              ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)gen_fl2bits(fVar18) + 0x144))) + 0x24))))(piVar12,uVar4,uVar8);
              *((undefined1 *)GEN_TOP(((int)gen_fl2bits(fVar18) + 0x2a8))) = 0;
              *((undefined4 *)GEN_TOP(((int)gen_fl2bits(fVar18) + 0x1f8))) = 0;
              *((int *)GEN_TOP(((int)gen_fl2bits(fVar18) + 0x1fc))) = (*(int *)(gen_frame + 0x18));
              if ((((*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)gen_fl2bits(fVar18) + 0x14c))) + 0x148))) & 2) != 0) &&
                  (bVar3 = *((byte *)GEN_TOP((*((int *)GEN_TOP(((int)gen_fl2bits(fVar18) + 0x150))) + 0x6e))),
                  (bVar3 & 1) != 0)) && ((bVar3 & 2) != 0)) {
                ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar12 + 4))))(piVar12 GEN_EDX_ARG);
                F_005662b0(piVar12 GEN_EDX_ARG,uVar8);
                ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar12 + 8))))(piVar12 GEN_EDX_ARG);
              }
              fVar18 = *((float *)GEN_TOP(((int)gen_fl2bits(((float *)(gen_frame + 0x1c))[0]) + 0x288)));
              uVar8 = *((uint *)GEN_TOP(((int)gen_fl2bits(((float *)(gen_frame + 0x1c))[0]) + 0x284)));
              (*(float *)(gen_frame + 0x14)) = fVar18;
              (*(uint *)(gen_frame + 0x10)) = uVar8;
            }
          }
          puVar13 = ((undefined4 *)GEN_TOP((uVar4 + 0xa8)));
          puVar14 = ((undefined4 *)GEN_TOP((uVar4 + 100)));
          for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 - 1) {
            *puVar14 = *puVar13;
            puVar13 = puVar13 + 1;
            puVar14 = puVar14 + 1;
          }
          sVar9 = (short)(int)fVar18;
          this = (*(undefined * PTR32 *)(gen_frame + 0xc));
        }
      }
      if (*((int *)GEN_TOP(((int)this + 0x130))) != 0) {
        *((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x130))) + 0x7e))) =
             (*((short *)GEN_TOP(((int)this + 0xb6))) - *((short *)GEN_TOP(((int)this + 0xb4)))) + sVar9;
      }
    }
    iVar7 = *((int *)GEN_TOP(((int)this + 0x130)));
    if (iVar7 != 0) {
      *((uint *)GEN_TOP((iVar7 + 0x84))) =
           *((uint *)GEN_TOP((iVar7 + 0x84))) ^
           ((uint)(param_7 != 0) << 0x14 ^ *((uint *)GEN_TOP((iVar7 + 0x84)))) & 0x100000;
      *((uint *)GEN_TOP((iVar7 + 0x88))) =
           *((uint *)GEN_TOP((iVar7 + 0x88))) ^ ((uint)(param_7 == 0) << 7 ^ *((uint *)GEN_TOP((iVar7 + 0x88)))) & 0x80;
    }
    ((float *)(gen_frame + 0x1c))[0] = 1.12104e-44;
    puVar11 = ((uint *)(gen_frame + 0x60)) + 3;
    do {
      puVar15 = puVar11 - 2;
      if ((puVar11[-3] >> 5 & 1) != 0) {
        puVar13 = ((undefined4 *)GEN_TOP(*puVar15));
        if (puVar13 != ((undefined4 *)GEN_TOP(0x0))) {
          uVar4 = puVar11[-3] & 0xf;
          if (uVar4 == 9) {
            F_00488040(puVar13 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x14)),*puVar13,puVar13[1]);
            F_00488dc0(puVar13 GEN_EDX_ARG);
            F_00406ad0(puVar13);
          }
          else if ((uVar4 == 6) || (uVar4 == 7)) {
            F_00406ad0(puVar13);
            *puVar15 = 0;
          }
        }
        *puVar15 = 0;
      }
      fVar18 = gen_bits2f((int)gen_fl2bits(((float *)(gen_frame + 0x1c))[0]) - 1);
      ((float *)(gen_frame + 0x1c))[0] = fVar18;
      puVar11[-3] = 0;
      puVar11 = puVar15;
    } while (-1 < (int)gen_fl2bits(fVar18));
    iVar7 = 3;
    puVar11 = ((uint *)(gen_frame + 0x84)) + 3;
    do {
      uVar4 = puVar11[-3];
      puVar15 = puVar11 - 2;
      if ((uVar4 >> 5 & 1) != 0) {
        puVar13 = ((undefined4 *)GEN_TOP(*puVar15));
        if (puVar13 != ((undefined4 *)GEN_TOP(0x0))) {
          uVar4 = uVar4 & 0xf;
          if (uVar4 == 9) {
            F_00488040(puVar13 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x14)),*puVar13,puVar13[1]);
            F_00488dc0(puVar13 GEN_EDX_ARG);
            uVar4 = F_00406ad0(puVar13);
          }
          else if ((uVar4 == 6) || (uVar4 == 7)) {
            uVar4 = F_00406ad0(puVar13);
            *puVar15 = 0;
          }
        }
        *puVar15 = 0;
      }
      iVar7 = iVar7 - 1;
      puVar11[-3] = 0;
      puVar11 = puVar15;
    } while (-1 < iVar7);
  }
  return uVar4;
}

/* ref: FUN_005aefb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005aefb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x5aefb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  int iVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined * local_8;
  
  F_00591760(this GEN_EDX_FWD,param_1);
  puVar2 = param_1;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0x0: ;
    local_8 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x98)));
    break;
  case 0x1: ;
    local_8 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x9c)));
    break;
  case 0x2: ;
    local_8 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0xa0)));
    break;
  case 0x3: ;
    local_8 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0xa4)));
    break;
  default: ;
    goto switchD_005aefd1_default;
  }
  puVar2 = ((uint *)GEN_TOP(0x0));
  if (local_8 != ((undefined *)GEN_TOP(0x0))) {
    if (1 < param_3) {
      uVar5 = *((uint *)GEN_TOP(((int)local_8 + 4)));
      if (10000 < uVar5) {
        uVar5 = uVar5 / 10000;
      }
      uVar5 = F_005a82c0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,uVar5,param_3 - 1,0);
      if (uVar5 == 0) {
        return 0;
      }
    }
    uVar6 = 0;
    uVar5 = F_00404270();
    uVar4 = -(uint)((int)((ulonglong)param_3 * 0x24 >> 0x20) != 0) |
            (uint)((ulonglong)param_3 * 0x24);
    puVar2 = ((uint *)GEN_TOP(F_00406c00(-(uint)(0xfffffffb < uVar4) | uVar4 + 4,0,uVar5,uVar6)));
    if (puVar2 == ((uint *)GEN_TOP(0x0))) {
      puVar2 = ((uint *)GEN_TOP(0x0));
    }
    else {
      *puVar2 = param_3;
      puVar2 = puVar2 + 1;
    }
    *((uint * PTR32 *)GEN_TOP(((int)this + (int)((int)(uintptr_t)param_1) * 4 + 0x2b0))) = puVar2;
    if (puVar2 != ((uint *)GEN_TOP(0x0))) {
      uVar5 = 0;
      *((uint *)GEN_TOP(((int)this + (int)((int)(uintptr_t)param_1) * 4 + 0x2a0))) = param_3;
      if (param_3 != 0) {
        do {
          uVar4 = F_00568410(local_8 GEN_EDX_ARG);
          if ((uVar5 != 0) &&
             (uVar4 = uVar4 * 10000 + uVar5,
             (*((int *)GEN_TOP(((int)this + 0x50))) - *((int *)GEN_TOP(((int)this + 0x4c))) & 0xfffffffcU) != 0)) {
            for (puVar2 = *((uint * PTR32 *)GEN_TOP(((int)this + 0x3c))); puVar2 != *((uint * PTR32 *)GEN_TOP(((int)this + 0x40)));
                puVar2 = puVar2 + 1) {
              uVar3 = *puVar2;
              if (*((uint *)GEN_TOP((uVar3 + 4))) == uVar4) goto LAB_005af0ec;
            }
          }
          uVar3 = F_0055d920(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,uVar4);
LAB_005af0ec: ;
          puVar2 = ((uint *)GEN_TOP(0x0));
          if (uVar3 != 0) {
            iVar1 = *((int *)GEN_TOP(((int)this + (int)((int)(uintptr_t)param_1) * 4 + 0x2b0))) + uVar5 * 0x24;
            *((uint *)GEN_TOP((iVar1 + 0x1c))) = uVar3;
            *((char *)GEN_TOP((iVar1 + 0x20))) = (char)param_1;
            puVar2 = ((uint *)GEN_TOP(F_00575ea0(param_1,iVar1,param_2)));
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < param_3);
      }
    }
  }
switchD_005aefd1_default: ;
  return (uint)puVar2;
}

/* ref: FUN_005af140 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005af140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5af140u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x9c, 4, 4);
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  undefined4 * puVar4;
  byte bVar5;
  undefined * pvVar6;
  double dVar7;
  byte bVar8;
  undefined2 uVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  byte * pbVar13;
  double * pdVar14;
  undefined * pvVar15;
  char cVar16;
  ushort uVar17;
  undefined2 uVar18;
  short sVar19;
  int iVar20;
  uint uVar21;
  uint * puVar22;
  uint * puVar23;
  undefined * this_00;
  int * piVar24;
  float10 fVar25;
  float10 fVar26;
  undefined4 uVar27;
  
  pvVar15 = REFG(void * PTR32, 0x1379860);
  ((uint *)(gen_frame + 0x88))[3] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x98);
  this_00 = ((undefined *)GEN_TOP(*param_2));
  (*(int * PTR32 *)(gen_frame + 0x10)) = param_1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x64)) = param_2;
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this_00;
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    return (uint)param_1;
  }
  (*(byte *)(gen_frame + 0x33)) = ~(*(byte *)(param_1 + 0x6c) >> 2) & 1;
  (*(ushort *)(gen_frame + 0x36)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = REFG(void * PTR32, 0x1379860);
  (*(undefined2 *)(gen_frame + 0x34)) = 0;
  (*(uint *)(gen_frame + 0x3c)) = 0;
  (*(byte *)(gen_frame + 0x40)) = 0;
  (*(byte *)(gen_frame + 0x41)) = 0;
  (*(undefined1 *)(gen_frame + 0x42)) = 0;
  (*(byte *)(gen_frame + 0x43)) = 0;
  (*(undefined2 *)(gen_frame + 0x44)) = 0;
  (*(undefined2 *)(gen_frame + 0x46)) = 0;
  (*(undefined1 *)(gen_frame + 0x48)) = 0;
  (*(byte *)(gen_frame + 0x49)) = 0;
  (*(undefined2 *)(gen_frame + 0x4a)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(uint *)(gen_frame + 0x50)) = 0;
  uVar11 = F_00a34210(this_00 GEN_EDX_FWD);
  (*(byte *)(gen_frame + 0x6b)) = *((byte *)GEN_TOP((uVar11 + 0x44))) & 1;
  (*(byte *)(gen_frame + 0x32)) = *((byte *)GEN_TOP((uVar11 + 0x4c))) & 1;
  (*(byte *)(gen_frame + 0x31)) = *((byte *)GEN_TOP((uVar11 + 0x48))) & 1;
  if ('\0' < *((char *)GEN_TOP(((int)this + 0xc6f)))) {
    *((char *)GEN_TOP(((int)this + 0xc6f))) = *((char *)GEN_TOP(((int)this + 0xc6f))) - 1;
    if ((*((char *)GEN_TOP(((int)this + 0xc70))) == '\0') || (*((char *)GEN_TOP(((int)pvVar15 + 0x21a))) == '\0')) {
LAB_005af2f4: ;
      *((undefined1 *)GEN_TOP(((int)this + 0xc6f))) = 0;
    }
    else {
      if (*((short *)GEN_TOP(((int)this + 0xc68))) == 0) {
        uVar27 = *((undefined4 *)GEN_TOP(((int)this + 0xc58)));
      }
      else {
        uVar27 = *((undefined4 *)GEN_TOP(((int)this + *((short *)GEN_TOP(((int)this + 0xc68))) * 0xc + 0x50)));
      }
      uVar11 = F_005673b0(uVar27);
      if (uVar11 != 0) {
        (*(undefined * PTR32 *)(gen_frame + 0x54)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(*((float *)GEN_TOP((uVar11 + 0x30))))));
        uVar17 = *((ushort *)GEN_TOP((uVar11 + 0x7e)));
        (*(undefined * PTR32 *)(gen_frame + 0x70)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(*((float *)GEN_TOP((uVar11 + 0x34))))));
        (*(float *)(gen_frame + 0x60)) = gen_bits2f((uint)*((ushort *)GEN_TOP((uVar11 + 0x7c))));
        fVar1 = ((float)GEN_TOF(((float10)*((ushort *)GEN_TOP((uVar11 + 0x7c))) * (float10)REFG(double, 0x1088108))));
        (*(float *)(gen_frame + 0x60)) = fVar1;
        fVar1 = ((float)GEN_TOF(((float10)fVar1 + (float10)*((float *)GEN_TOP((uVar11 + 0x30))))));
        (*(undefined * PTR32 *)(gen_frame + 0x54)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar1)));
        (*(double *)(gen_frame + 0x28)) = (double)fVar1;
        uVar11 = F_00a34e80(this_00 GEN_EDX_ARG,0);
        (*(float *)(gen_frame + 0x60)) = gen_bits2f(uVar11);
        (*(float *)(gen_frame + 0x60)) = gen_bits2f((uint)uVar17);
        (*(undefined * PTR32 *)(gen_frame + 0x54)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)((float10)(*(double *)(gen_frame + 0x28)) - (float10)(int)uVar11))));
        fVar1 = (float)((float10)uVar17 * (float10)REFG(double, 0x1088108));
        (*(float *)(gen_frame + 0x60)) = fVar1;
        fVar1 = (float)((float10)fVar1 + (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x70))))));
        (*(float *)(gen_frame + 0x60)) = fVar1;
        (*(undefined * PTR32 *)(gen_frame + 0x70)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar1)));
        uVar11 = F_00a34e80(this_00 GEN_EDX_ARG,1);
        (*(float *)(gen_frame + 0x60)) = gen_bits2f(uVar11);
        fVar26 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x70)))));
        fVar1 = (float)(fVar26 - (float10)(int)uVar11);
        (*(undefined * PTR32 *)(gen_frame + 0x70)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar1)));
        fVar2 = ((float)GEN_TOF(ABS((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x54))))))));
        (*(float *)(gen_frame + 0x60)) = fVar2;
        fVar25 = (float10)fVar1;
        if ((!(*(double *)&REFG(undefined, 0x1088070) < (double)fVar2)) &&
           (fVar1 = ((float)GEN_TOF(ABS(fVar25))), (*(float *)(gen_frame + 0x60)) = fVar1,
           !(*(double *)&REFG(undefined, 0x1088070) < (double)fVar1))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(undefined4 * PTR32 *)(gen_frame + 0x64))[5])) + 0x34))))
                    (((int *)GEN_TOP((*(undefined4 * PTR32 *)(gen_frame + 0x64))[5])) GEN_EDX_ARG,(int)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x54))))),(int)(fVar26 - (float10)(int)uVar11));
          goto LAB_005af2f4;
        }
        fVar25 = GEN_X87(fVar25 * (float10)*(double *)&REFG(undefined, 0x10920a8));
        (*(float *)(gen_frame + 0x60)) = (float)fVar25;
        fVar26 = GEN_X87((float10)*(double *)&REFG(undefined, 0x10920a8) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x54))))));
        (*(float *)(gen_frame + 0x60)) = (float)fVar26;
        ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(undefined4 * PTR32 *)(gen_frame + 0x64))[5])) + 0x34))))((*(undefined4 * PTR32 *)(gen_frame + 0x64))[5],(int)fVar26,(int)fVar25);
      }
    }
  }
  (*(char *)(gen_frame + 0x5b)) = *((char *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x64)) + 0x1f)));
  if ((*((char *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x64)) + 0x1f))) != '\0') && ((*(undefined4 * PTR32 *)(gen_frame + 0x64))[5] != 0)) {
    uVar11 = F_00a34e80(this_00 GEN_EDX_ARG,5);
    uVar12 = F_00a34e80(this_00 GEN_EDX_ARG,6);
    iVar20 = (int)((ulonglong)((longlong)(int)uVar12 * -0x66666667) >> 0x20);
    iVar20 = (iVar20 >> 1) - (iVar20 >> 0x1f);
    if (((int)uVar11 / 5 != 0) || (iVar20 != 0)) {
      *((undefined1 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x64)) + 0x1b))) = 1;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(undefined4 * PTR32 *)(gen_frame + 0x64))[5])) + 0x34))))(((int *)GEN_TOP((*(undefined4 * PTR32 *)(gen_frame + 0x64))[5])) GEN_EDX_ARG,(int)uVar11 / 5,iVar20);
    }
  }
  (*(undefined * PTR32 *)(gen_frame + 0x54)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x20c)));
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x21e))) = 0;
  if ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x21a))) != '\0') &&
     (uVar11 = F_005b6ca0(this_00 GEN_EDX_ARG), pvVar15 = (*(undefined * PTR32 *)(gen_frame + 0x24)), uVar11 == 1)) {
    if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0xbc))) != '\0') {
      if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0xbc))) != '\0') {
        F_005aa300((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x3c GEN_EDX_ARG,1,1,9);
      }
      F_0046dfe0(this_00 GEN_EDX_ARG);
      F_005b6d10(this_00 GEN_EDX_ARG);
    }
    pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x54));
    if (*((short *)GEN_TOP(((int)this + 0xc68))) == 0) {
      iVar20 = *((int *)GEN_TOP(((int)this + 0xc58)));
    }
    else {
      iVar20 = *((int *)GEN_TOP(((int)this + *((short *)GEN_TOP(((int)this + 0xc68))) * 0xc + 0x50)));
    }
    if (iVar20 != 0) {
      F_005a9ff0((*(undefined * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG);
      *((undefined1 *)GEN_TOP(((int)pvVar6 + 0x11))) = 0;
      F_0046dfe0(this_00 GEN_EDX_ARG);
      F_005b6d10(this_00 GEN_EDX_ARG);
      pvVar15 = (*(undefined * PTR32 *)(gen_frame + 0x24));
    }
    *((undefined1 *)GEN_TOP(((int)pvVar15 + 0x21e))) = 1;
  }
  if (*((char *)GEN_TOP(((int)this + 0xc6e))) != '\0') {
    uVar11 = F_005b6ca0(this_00 GEN_EDX_ARG);
    if (uVar11 == 1) {
      F_0046dfe0(this_00 GEN_EDX_ARG);
      F_005b6d10(this_00 GEN_EDX_ARG);
    }
    *((undefined1 *)GEN_TOP(((int)this + 0xc6e))) = 0;
  }
  uVar11 = F_00a34e80(this_00 GEN_EDX_ARG,0);
  (*(uint *)(gen_frame + 0x8)) = uVar11 & 0xffff;
  uVar11 = F_00a34e80(this_00 GEN_EDX_ARG,1);
  (*(uint *)(gen_frame + 0xc)) = uVar11 & 0xffff;
  uVar11 = F_00a34e80(this_00 GEN_EDX_ARG,2);
  bVar8 = ((*(byte *)(gen_frame + 0x6b)) & 1) * '\x04';
  (*(byte *)(gen_frame + 0x17)) = bVar8;
  (*(byte *)(gen_frame + 0x15)) = (*(byte *)(gen_frame + 0x31)) & 1;
  bVar5 = ((*(byte *)(gen_frame + 0x32)) & 1) * '\x02';
  (*(byte *)(gen_frame + 0x16)) = bVar5;
  cVar16 = *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x21d)));
  (*(byte *)(gen_frame + 0x43)) = (*(byte *)(gen_frame + 0x43)) & 0xf8 | bVar8 | (*(byte *)(gen_frame + 0x31)) & 1 | bVar5;
  uVar12 = (int)*((short *)GEN_TOP(((int)this + 0xc60))) - (int)(short)(*(uint *)(gen_frame + 0x8));
  (*(char *)(gen_frame + 0x6a)) = cVar16;
  uVar21 = (int)uVar12 >> 0x1f;
  ((uint *)(gen_frame + 0x18))[0] = uVar11;
  (*(uint *)(gen_frame + 0x6c)) = 0;
  (*(byte *)(gen_frame + 0x40)) = (byte)uVar11;
  (*(byte *)(gen_frame + 0x41)) = (byte)(uVar11 >> 8);
  (*(char *)(gen_frame + 0x77)) = '\0';
  if ((2 < (int)((uVar12 ^ uVar21) - uVar21)) ||
     (uVar12 = (int)*((short *)GEN_TOP(((int)this + 0xc62))) - (int)(short)(*(uint *)(gen_frame + 0xc)),
     uVar21 = (int)uVar12 >> 0x1f, 2 < (int)((uVar12 ^ uVar21) - uVar21))) {
    cVar16 = *((char *)GEN_TOP(((int)this + 0xc6d)));
    (*(char *)(gen_frame + 0x77)) = cVar16;
    if (cVar16 == '\0') {
      F_005a9ff0((*(undefined * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG);
    }
    else {
      F_005a9f80((*(undefined * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG);
    }
    *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x54)) + 0x11))) = (*(char *)(gen_frame + 0x77));
    *((undefined1 *)GEN_TOP(((int)this + 0xc6d))) = 1;
    *((short *)GEN_TOP(((int)this + 0xc60))) = (short)(*(uint *)(gen_frame + 0x8));
    *((short *)GEN_TOP(((int)this + 0xc62))) = (short)(*(uint *)(gen_frame + 0xc));
  }
  bVar8 = F_00a34080(this_00 GEN_EDX_ARG);
  pvVar15 = (*(undefined * PTR32 *)(gen_frame + 0x54));
  if ((bVar8 != 0) || (uVar11 != 0)) {
    F_005a9f80((*(undefined * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG);
    *((undefined1 *)GEN_TOP(((int)pvVar15 + 0x11))) = 1;
  }
  piVar24 = (*(int * PTR32 *)(gen_frame + 0x10));
  if ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x21d))) == '\0') &&
     (uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x10)) + 0x34))))((*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0xc)),1), (char)uVar11 != '\0'
     )) {
    uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar24 + 0x38))))(piVar24 GEN_EDX_ARG);
    (*(char *)(gen_frame + 0x77)) = (char)uVar11;
    if ((*(char *)(gen_frame + 0x6a)) != '\0') {
      (*(char *)(gen_frame + 0x77)) = '\x01';
    }
  }
  uVar9 = (undefined2)(*(uint *)(gen_frame + 0x8));
  *((undefined2 *)GEN_TOP(((int)this + 0xc5c))) = uVar9;
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x3c)) + 0)) = uVar9;
  uVar18 = (undefined2)(*(uint *)(gen_frame + 0xc));
  *((undefined2 *)GEN_TOP(((int)this + 0xc5e))) = uVar18;
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x3c)) + 2)) = uVar18;
  (*(uint *)(gen_frame + 0x3c)) = CONCAT22(uVar18,uVar9);
  if ((*(byte *)(gen_frame + 0x33)) == 0) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x64))[1] = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x64))[2] = 0;
  }
  else {
    (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x28)) + 0)) = 0;
    (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x28)) + 4)) = ((undefined *)GEN_TOP(0x0));
    (*(double *)(gen_frame + 0x28)) = 0.0;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x10)) + 0x1c))))((*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(double *)(gen_frame + 0x28)),(*(uint *)(gen_frame + 0x8)),(*(uint *)(gen_frame + 0xc)));
    puVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x64));
    fVar1 = gen_bits2f((*(undefined4 * PTR32 *)(gen_frame + 0x64))[1]);
    pvVar15 = ((undefined *)GEN_TOP((*(undefined4 * PTR32 *)(gen_frame + 0x64))[2]));
    cVar16 = *(char *)((*(undefined4 * PTR32 *)(gen_frame + 0x64)) + 8);
    (*(float *)(gen_frame + 0x60)) = fVar1;
    (*(undefined4 * PTR32 *)(gen_frame + 0x64))[1] = (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x28)) + 0));
    (*(undefined * PTR32 *)(gen_frame + 0x70)) = pvVar15;
    (*(char *)(gen_frame + 0x76)) = cVar16;
    *(undefined1 *)((*(undefined4 * PTR32 *)(gen_frame + 0x64)) + 8) = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x64))[2] = (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x28)) + 4));
    if (((*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x28)) + 4)) != ((undefined *)GEN_TOP(0x0))) && ((pvVar15 != (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x28)) + 4)) || (cVar16 != '\0')))) {
      fVar2 = *((float *)GEN_TOP(((int)(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x28)) + 4)) + 0x34)));
      *((short *)GEN_TOP(((int)this + 0xc64))) = (short)(int)*((float *)GEN_TOP(((int)(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x28)) + 4)) + 0x30)));
      sVar19 = (short)(int)fVar2;
      *((short *)GEN_TOP(((int)this + 0xc66))) = sVar19;
      iVar20 = (*(undefined4 * PTR32 *)(gen_frame + 0x64))[2];
      if (iVar20 == 0) {
        uVar17 = (ushort)((uint *)(gen_frame + 0x18))[0];
        uVar10 = uVar17;
      }
      else {
        uVar17 = *((ushort *)GEN_TOP((iVar20 + 0x7c)));
        uVar10 = *((ushort *)GEN_TOP((iVar20 + 0x7e)));
      }
      *((short *)GEN_TOP(((int)this + 0xc64))) = *((short *)GEN_TOP(((int)this + 0xc64))) + (uVar17 >> 1);
      *((ushort *)GEN_TOP(((int)this + 0xc66))) = (uVar10 >> 1) + sVar19;
    }
    if (((fVar1 != gen_bits2f((*(undefined4 * PTR32 *)(gen_frame + 0x64))[1])) || (cVar16 != '\0')) && (fVar1 != 0.0)) {
      pvVar15 = *((undefined * PTR32 *)GEN_TOP(((int)gen_fl2bits(fVar1) + 0x90)));
      (*(undefined2 *)(gen_frame + 0x34)) = 0x40;
      F_005997b0(pvVar15 GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x34)));
    }
    if ((((*(undefined * PTR32 *)(gen_frame + 0x70)) != ((undefined *)GEN_TOP(puVar4[2]))) || ((*(char *)(gen_frame + 0x76)) != '\0')) && ((*(undefined * PTR32 *)(gen_frame + 0x70)) != ((undefined *)GEN_TOP(0x0)))) {
      (*(undefined2 *)(gen_frame + 0x34)) = 7;
      F_005997b0((*(undefined * PTR32 *)(gen_frame + 0x70)) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x34)));
    }
    bVar8 = F_00a34de0(this_00 GEN_EDX_ARG,0x21);
    if (bVar8 != 0) {
      bVar8 = F_00a34190(this_00 GEN_EDX_ARG,1);
      uVar11 = F_0059adb0(this GEN_EDX_ARG,puVar4[2],0,&(*(undefined2 *)(gen_frame + 0x34)),(uint)bVar8);
      (*(uint *)(gen_frame + 0x6c)) = uVar11;
    }
    bVar8 = F_00a34de0(this_00 GEN_EDX_ARG,0x22);
    if (bVar8 != 0) {
      bVar8 = F_00a34190(this_00 GEN_EDX_ARG,4);
      uVar11 = F_0059adb0(this GEN_EDX_ARG,puVar4[2],1,&(*(undefined2 *)(gen_frame + 0x34)),(uint)bVar8);
      (*(uint *)(gen_frame + 0x6c)) = (*(uint *)(gen_frame + 0x6c)) | uVar11;
    }
    uVar17 = (*(ushort *)(gen_frame + 0x36));
    pvVar15 = ((undefined *)GEN_TOP(puVar4[2]));
    if (pvVar15 == ((undefined *)GEN_TOP(0x0))) {
LAB_005af785: ;
      uVar11 = (*(uint *)(gen_frame + 0x50));
      if ((*(char *)(gen_frame + 0x77)) != '\0') {
        (*(undefined2 *)(gen_frame + 0x34)) = 5;
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x50)) + 0)) = 0;
        (*(uint *)(gen_frame + 0x50)) = uVar11 & 0xffffff00;
        F_00599f80(REFG(void * PTR32, 0x1379860) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x34)));
      }
    }
    else {
      if (((uint *)(gen_frame + 0x18))[0] != 0) {
        (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x36)) + 0)) = (byte)(*(ushort *)(gen_frame + 0x36)) | 1;
        (*(ushort *)(gen_frame + 0x36)) = uVar17 | 1;
        (*(undefined2 *)(gen_frame + 0x34)) = 8;
        uVar11 = F_005997b0(pvVar15 GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x34)));
        uVar17 = (*(ushort *)(gen_frame + 0x36));
        (*(uint *)(gen_frame + 0x6c)) = (*(uint *)(gen_frame + 0x6c)) | uVar11;
        (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x36)) + 0)) = (byte)(*(ushort *)(gen_frame + 0x36)) & 0xfe;
        (*(ushort *)(gen_frame + 0x36)) = uVar17 & 0xfffe;
      }
      if ((*(char *)(gen_frame + 0x77)) != '\0') {
        (*(undefined2 *)(gen_frame + 0x34)) = 5;
        F_005997b0(((undefined *)GEN_TOP(puVar4[2])) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x34)));
        goto LAB_005af785;
      }
    }
    fVar1 = gen_bits2f(puVar4[1]);
    if ((((*(float *)(gen_frame + 0x60)) != fVar1) || ((*(char *)(gen_frame + 0x76)) != '\0')) && (fVar1 != 0.0)) {
      pvVar15 = *((undefined * PTR32 *)GEN_TOP(((int)gen_fl2bits(fVar1) + 0x90)));
      (*(undefined2 *)(gen_frame + 0x34)) = 0x3f;
      F_005997b0(pvVar15 GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x34)));
    }
    pvVar15 = ((undefined *)GEN_TOP(puVar4[2]));
    if ((((*(undefined * PTR32 *)(gen_frame + 0x70)) != pvVar15) || ((*(char *)(gen_frame + 0x76)) != '\0')) && (pvVar15 != ((undefined *)GEN_TOP(0x0)))) {
      (*(undefined2 *)(gen_frame + 0x34)) = 6;
      F_005997b0(pvVar15 GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x34)));
    }
    bVar8 = F_00a34970(this_00 GEN_EDX_ARG,0x21);
    if (bVar8 != 0) {
      uVar11 = F_0059ad50(this GEN_EDX_ARG,puVar4[2],0,&(*(undefined2 *)(gen_frame + 0x34)));
      (*(uint *)(gen_frame + 0x6c)) = (*(uint *)(gen_frame + 0x6c)) | uVar11;
    }
    bVar8 = F_00a34970(this_00 GEN_EDX_ARG,0x22);
    if (bVar8 != 0) {
      uVar11 = F_0059ad50(this GEN_EDX_ARG,puVar4[2],1,&(*(undefined2 *)(gen_frame + 0x34)));
      (*(uint *)(gen_frame + 0x6c)) = (*(uint *)(gen_frame + 0x6c)) | uVar11;
    }
    if ((*(uint *)(gen_frame + 0x6c)) != 0) {
      *(undefined1 *)(puVar4 + 6) = 1;
    }
    bVar8 = F_00a34970(this_00 GEN_EDX_ARG,0x21);
    if (bVar8 != 0) {
      pvVar15 = ((undefined *)GEN_TOP(puVar4[1]));
      if ((pvVar15 != ((undefined *)GEN_TOP(0x0))) && ((*((byte *)GEN_TOP(((int)pvVar15 + 0xfb))) & 0x10) == 0)) {
        F_00594790(pvVar15 GEN_EDX_ARG);
      }
      bVar8 = F_0059b8f0((*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,puVar4[1],puVar4[2]);
      if (bVar8 != 0) {
        *((undefined1 *)GEN_TOP(((int)puVar4 + 0x1d))) = 1;
      }
    }
    if (((*(char *)(gen_frame + 0x5b)) != '\0') &&
       ((bVar8 = F_00a34870(this_00 GEN_EDX_ARG,0x21), bVar8 != 0 ||
        (bVar8 = F_00a34870(this_00 GEN_EDX_ARG,0x22), bVar8 != 0)))) {
      *((undefined1 *)GEN_TOP(((int)puVar4 + 0x1b))) = 0;
    }
  }
  piVar24 = ((int *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x10))[0x33]));
  (*(uint *)(gen_frame + 0x6c)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x70)) = *((undefined * PTR32 *)GEN_TOP(((int)this + 0xc58)));
  (*(char *)(gen_frame + 0x76)) = '\0';
  (*(char *)(gen_frame + 0x6a)) = '\0';
  if ((piVar24 != ((int *)GEN_TOP(0x0))) && ((*((byte *)GEN_TOP(((int)piVar24 + 0xf9))) & 1) != 0)) {
    uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar24 + 0x74))))(piVar24 GEN_EDX_ARG);
    if ((char)uVar11 == '\0') {
      if (((uint)piVar24[0x48] >> 0xc & 1) == 0) {
        if ((*(undefined * PTR32 *)(gen_frame + 0x70)) == ((undefined *)GEN_TOP(0x0))) {
          (*(char *)(gen_frame + 0x76)) = '\x01';
        }
      }
      else {
        (*(undefined * PTR32 *)(gen_frame + 0x70)) = ((undefined *)GEN_TOP(0x0));
        (*(char *)(gen_frame + 0x6a)) = '\x01';
      }
    }
    else {
      (*(undefined * PTR32 *)(gen_frame + 0x70)) = ((undefined *)GEN_TOP(0x0));
    }
  }
  bVar8 = F_005606c0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x1e4))) GEN_EDX_ARG,piVar24);
  if (bVar8 == 0) {
    if (*((char *)GEN_TOP(((int)this + 0xc6a))) != '\0') {
      F_0059b1c0(this GEN_EDX_ARG,0,0,0);
    }
    piVar24 = ((int *)GEN_TOP(0x0));
    (*(undefined * PTR32 *)(gen_frame + 0x70)) = ((undefined *)GEN_TOP(0x0));
    (*(char *)(gen_frame + 0x76)) = '\0';
  }
  bVar8 = (*(byte *)(gen_frame + 0x43));
  uVar3 = (*(undefined1 *)(gen_frame + 0x42));
  uVar11 = (*(uint *)(gen_frame + 0x3c));
  if ((*(byte *)(gen_frame + 0x33)) == 0) {
LAB_005afe90: ;
    if ((*(char *)(gen_frame + 0x6a)) != '\0') goto LAB_005afe96;
  }
  else {
    (*(undefined2 *)(gen_frame + 0x46)) = CONCAT11((*(byte *)(gen_frame + 0x41)),(*(byte *)(gen_frame + 0x40)));
    uVar27 = CONCAT13((*(byte *)(gen_frame + 0x43)),CONCAT12((*(undefined1 *)(gen_frame + 0x42)),(*(undefined2 *)(gen_frame + 0x46))));
    (*(byte *)(gen_frame + 0x40)) = 0;
    (*(undefined2 *)(gen_frame + 0x4a)) = 0;
    (*(uint *)(gen_frame + 0x3c)) = 0;
    (*(undefined4 *)(gen_frame + 0x4c)) = 0;
    (*(uint *)(gen_frame + 0x50)) = 0;
    (*(ushort *)(gen_frame + 0x36)) = 0;
    (*(undefined1 *)(gen_frame + 0x42)) = (undefined1)uVar11;
    (*(byte *)(gen_frame + 0x43)) = (byte)(uVar11 >> 8);
    (*(undefined2 *)(gen_frame + 0x44)) = (undefined2)(uVar11 >> 0x10);
    (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x28)) + 4)) = ((undefined *)GEN_TOP(uVar27));
    (*(double *)(gen_frame + 0x28)) = gen_bits2d(CONCAT44(uVar27,(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x28)) + 0))));
    cVar16 = *((char *)GEN_TOP(((int)this + 0xc6a)));
    (*(undefined1 *)(gen_frame + 0x48)) = uVar3;
    (*(byte *)(gen_frame + 0x41)) = ((*(byte *)(gen_frame + 0x15)) & 0xfb | (*(byte *)(gen_frame + 0x17))) & 0xfd | (*(byte *)(gen_frame + 0x16));
    (*(byte *)(gen_frame + 0x49)) = bVar8 | 8;
    (*(char *)(gen_frame + 0x77)) = '\0';
    if (cVar16 == '\0') {
      if ((*(undefined4 * PTR32 *)(gen_frame + 0x64))[3] == 0) {
        (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x36)) + 0)) = 1;
        (*(ushort *)(gen_frame + 0x36)) = 1;
        if ((*(char *)(gen_frame + 0x76)) != '\0') {
          (*(undefined * PTR32 *)(gen_frame + 0x70)) = ((undefined *)GEN_TOP(piVar24[0x24]));
        }
        if (*((char *)GEN_TOP(((int)this + 0xc6b))) == '\0') {
          uVar11 = 0;
          do {
            uVar12 = F_0059d3d0(this GEN_EDX_ARG,this_00,(*(undefined * PTR32 *)(gen_frame + 0x70)),uVar11,&(*(undefined2 *)(gen_frame + 0x34)),&(*(char *)(gen_frame + 0x77)));
            (*(uint *)(gen_frame + 0x6c)) = (*(uint *)(gen_frame + 0x6c)) | uVar12;
            uVar11 = uVar11 + 1;
          } while (uVar11 < 0x1e);
        }
        else {
          uVar11 = F_0059d3d0(this GEN_EDX_ARG,this_00,(*(undefined * PTR32 *)(gen_frame + 0x70)),3,&(*(undefined2 *)(gen_frame + 0x34)),&(*(char *)(gen_frame + 0x77)));
          (*(uint *)(gen_frame + 0x6c)) = uVar11;
        }
        pvVar15 = (*(undefined * PTR32 *)(gen_frame + 0x54));
        if ((*(uint *)(gen_frame + 0x6c)) == 0) goto LAB_005afe90;
        if ((*(char *)(gen_frame + 0x5b)) == '\0') {
          F_005a9ff0((*(undefined * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG);
          *((undefined1 *)GEN_TOP(((int)pvVar15 + 0x11))) = 0;
        }
      }
      else {
        (*(uint *)(gen_frame + 0x78)) = 0;
        ((undefined4 *)(gen_frame + 0x80))[0] = 0;
        ((uint *)(gen_frame + 0x88))[0] = 0;
        uVar12 = -(uint)((*(byte *)(gen_frame + 0x32)) != 0) & 4 | -(uint)((*(byte *)(gen_frame + 0x31)) != 0) & 2 | (uint)((*(byte *)(gen_frame + 0x6b)) != 0);
        F_004311b0(((undefined4 *)(gen_frame + 0x80)) GEN_EDX_ARG,uVar12);
        F_00a341f0(this_00 GEN_EDX_ARG,&(*(double *)(gen_frame + 0x28)));
        cVar16 = (char)(ulonglong)gen_d2bits((*(double *)(gen_frame + 0x28)));
        uVar11 = (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x28)) + 0));
        while( true ) {
          if ((cVar16 == '\0') || ((*(undefined4 * PTR32 *)(gen_frame + 0x64))[3] == 0)) goto LAB_005afae5;
          uVar11 = (uVar11 >> 8 & 0xff) + (uVar11 & 0xff) * 0x100;
          ((uint *)(gen_frame + 0x18))[0] = uVar11;
          if (((*(uint *)(gen_frame + 0x78)) >> 5 & 1) != 0) {
            F_005a0260(&(*(uint *)(gen_frame + 0x78)) GEN_EDX_ARG);
            uVar11 = ((uint *)(gen_frame + 0x18))[0];
          }
          (*(uint *)(gen_frame + 0x7c)) = uVar11;
          (*(uint *)(gen_frame + 0x78)) = 3;
          ((uint *)(gen_frame + 0x18))[0] = (uint)(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x28)) + 4));
          if ((((uint *)(gen_frame + 0x88))[0] >> 5 & 1) != 0) {
            F_005a0260(((uint *)(gen_frame + 0x88)) GEN_EDX_ARG);
          }
          piVar24 = ((int *)GEN_TOP((*(undefined4 * PTR32 *)(gen_frame + 0x64))[3]));
          uVar27 = (*(undefined4 * PTR32 *)(gen_frame + 0x64))[4];
          ((uint *)(gen_frame + 0x88))[1] = ((uint *)(gen_frame + 0x18))[0];
          ((uint *)(gen_frame + 0x88))[0] = 4;
          pbVar13 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar24 + 4))))(piVar24 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x5c)),&(*(uint *)(gen_frame + 0x78)),3,uVar27)));
          if ((*pbVar13 & 0xf) == 0) {
            (*(byte *)(gen_frame + 0x6b)) = 0;
          }
          else {
            (*(byte *)(gen_frame + 0x6b)) = pbVar13[4];
          }
          if (((*(uint *)(gen_frame + 0x5c)) >> 5 & 1) != 0) {
            F_005a0260(&(*(uint *)(gen_frame + 0x5c)) GEN_EDX_ARG);
          }
          (*(uint *)(gen_frame + 0x5c)) = 0;
          if ((*(byte *)(gen_frame + 0x6b)) != 0) break;
          pdVar14 = ((double *)GEN_TOP(F_00a341f0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20)))));
          uVar11 = *(uint *)pdVar14;
          (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x28)) + 0)) = uVar11;
          (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x28)) + 4)) = ((undefined *)GEN_TOP(*((uint *)GEN_TOP(((int)pdVar14 + 4)))));
          cVar16 = (char)uVar11;
          (*(double *)(gen_frame + 0x28)) = *pdVar14;
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0x64))[3] = 0;
LAB_005afae5: ;
        F_00a34300(this_00 GEN_EDX_ARG);
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x64))[3] != 0) {
          bVar8 = F_005a4fe0((*(undefined4 * PTR32 *)(gen_frame + 0x64)),2,0xa1,uVar12);
          if (bVar8 == 0) {
            bVar8 = F_005a4fe0((*(undefined4 * PTR32 *)(gen_frame + 0x64)),8,0xa3,uVar12);
            if (bVar8 == 0) {
              bVar8 = F_005a4fe0((*(undefined4 * PTR32 *)(gen_frame + 0x64)),0x10,0xa4,uVar12);
              if (bVar8 == 0) goto LAB_005afb4a;
              uVar27 = 0x10;
            }
            else {
              uVar27 = 8;
            }
          }
          else {
            uVar27 = 2;
          }
          F_00a342d0(this_00 GEN_EDX_ARG,uVar27);
        }
LAB_005afb4a: ;
        pvVar15 = (*(undefined * PTR32 *)(gen_frame + 0x70));
        uVar11 = F_0059d3d0(this GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x4)),(*(undefined * PTR32 *)(gen_frame + 0x70)),0x1e,&(*(undefined2 *)(gen_frame + 0x34)),&(*(char *)(gen_frame + 0x77)));
        uVar12 = F_0059d3d0(this GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x4)),pvVar15,0x1f,&(*(undefined2 *)(gen_frame + 0x34)),&(*(char *)(gen_frame + 0x77)));
        (*(uint *)(gen_frame + 0x6c)) = uVar11 | uVar12;
        (*(float *)(gen_frame + 0x60)) = 2.8026e-45;
        puVar22 = ((uint *)(gen_frame + 0x88)) + 3;
        do {
          puVar23 = puVar22 - 2;
          if ((puVar22[-3] >> 5 & 1) != 0) {
            puVar4 = ((undefined4 *)GEN_TOP(*puVar23));
            if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
              uVar11 = puVar22[-3] & 0xf;
              if (uVar11 == 9) {
                F_00488040(puVar4 GEN_EDX_ARG,((uint *)(gen_frame + 0x18)),*puVar4,puVar4[1]);
                F_00488dc0(puVar4 GEN_EDX_ARG);
                F_00406ad0(puVar4);
              }
              else if ((uVar11 == 6) || (uVar11 == 7)) {
                F_00406ad0(puVar4);
                *puVar23 = 0;
              }
            }
            *puVar23 = 0;
          }
          fVar1 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x60))) - 1);
          (*(float *)(gen_frame + 0x60)) = fVar1;
          puVar22[-3] = 0;
          this_00 = (*(undefined * PTR32 *)(gen_frame + 0x4));
          puVar22 = puVar23;
        } while (-1 < (int)gen_fl2bits(fVar1));
      }
    }
    else {
      uVar11 = F_00a34210(this_00 GEN_EDX_ARG);
      F_005674c0(((uint *)(gen_frame + 0x18)),uVar11);
      uVar17 = (*(ushort *)(gen_frame + 0x36));
      (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x36)) + 0)) = 0;
      (*(ushort *)(gen_frame + 0x36)) = uVar17 & 0xff00;
      F_00a341f0(this_00 GEN_EDX_ARG,&(*(double *)(gen_frame + 0x28)));
      dVar7 = (*(double *)(gen_frame + 0x28));
      if ((char)(ulonglong)gen_d2bits((*(double *)(gen_frame + 0x28))) != '\0') {
        uVar12 = (uint)(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x28)) + 4));
        uVar11 = (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x28)) + 0));
        do {
          uVar21 = uVar11 >> 8 & 0xff;
          if ((uVar11 & 1) == 0) {
            if ((uVar11 & 8) == 0) {
              if ((uVar11 & 2) == 0) {
                if ((uVar11 & 4) != 0) {
                  if (uVar12 != 0x7f) {
                    F_0056a6e0(*(undefined * PTR32 *)this GEN_EDX_ARG,uVar12);
                  }
                  (*(uint *)(gen_frame + 0x6c)) = 1;
                }
              }
              else {
                bVar8 = F_0055c270(*(undefined4 *)this GEN_EDX_ARG,uVar21,((uint *)(gen_frame + 0x18)));
                if (bVar8 == 0) {
                  uVar11 = F_0059af50((*(undefined * PTR32 *)(gen_frame + 0x70)),1,uVar21,&(*(undefined2 *)(gen_frame + 0x34)));
                  (*(uint *)(gen_frame + 0x6c)) = (*(uint *)(gen_frame + 0x6c)) | uVar11;
                }
              }
            }
            else {
              bVar8 = F_00595bf0(*(undefined * PTR32 *)this GEN_EDX_ARG,uVar21,((uint *)(gen_frame + 0x18)));
              if (bVar8 == 0) {
                (*(undefined * PTR32 *)(gen_frame + 0x24)) = ((undefined *)GEN_TOP(0x0));
                (*(undefined2 *)(gen_frame + 0x34)) = 0xc;
                (*(uint *)(gen_frame + 0x3c)) = uVar21;
                (*(byte *)(gen_frame + 0x40)) = 2;
                if ((*(undefined * PTR32 *)(gen_frame + 0x70)) != ((undefined *)GEN_TOP(0x0))) {
                  pvVar15 = ((undefined *)GEN_TOP(F_005997b0((*(undefined * PTR32 *)(gen_frame + 0x70)) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x34)))));
                  (*(undefined * PTR32 *)(gen_frame + 0x24)) = pvVar15;
                }
                pvVar15 = (*(undefined * PTR32 *)(gen_frame + 0x24));
                if (((*(ushort *)(gen_frame + 0x36)) & 2) == 0) {
                  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x50)) + 0)) = (*(undefined * PTR32 *)(gen_frame + 0x24)) != ((undefined *)GEN_TOP(0x0));
                  (*(uint *)(gen_frame + 0x50)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x50)), 1, 3),(*(undefined * PTR32 *)(gen_frame + 0x24)) != ((undefined *)GEN_TOP(0x0)));
                  uVar11 = F_00599f80(REFG(void * PTR32, 0x1379860) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x34)));
                  (*(undefined * PTR32 *)(gen_frame + 0x24)) = ((undefined *)GEN_TOP(((uint)pvVar15 | uVar11)));
                }
                (*(uint *)(gen_frame + 0x6c)) = (*(uint *)(gen_frame + 0x6c)) | (uint)(*(undefined * PTR32 *)(gen_frame + 0x24));
              }
            }
          }
          else {
            bVar8 = F_00595bf0(*(undefined * PTR32 *)this GEN_EDX_ARG,uVar21,((uint *)(gen_frame + 0x18)));
            if (bVar8 == 0) {
              (*(undefined * PTR32 *)(gen_frame + 0x24)) = ((undefined *)GEN_TOP(0x0));
              (*(undefined2 *)(gen_frame + 0x34)) = 0xc;
              (*(uint *)(gen_frame + 0x3c)) = uVar21;
              (*(byte *)(gen_frame + 0x40)) = bVar8;
              if ((*(undefined * PTR32 *)(gen_frame + 0x70)) != ((undefined *)GEN_TOP(0x0))) {
                pvVar15 = ((undefined *)GEN_TOP(F_005997b0((*(undefined * PTR32 *)(gen_frame + 0x70)) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x34)))));
                (*(undefined * PTR32 *)(gen_frame + 0x24)) = pvVar15;
              }
              pvVar15 = (*(undefined * PTR32 *)(gen_frame + 0x24));
              if (((*(ushort *)(gen_frame + 0x36)) & 2) == 0) {
                (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x50)) + 0)) = (*(undefined * PTR32 *)(gen_frame + 0x24)) != ((undefined *)GEN_TOP(0x0));
                (*(uint *)(gen_frame + 0x50)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x50)), 1, 3),(*(undefined * PTR32 *)(gen_frame + 0x24)) != ((undefined *)GEN_TOP(0x0)));
                uVar11 = F_00599f80(REFG(void * PTR32, 0x1379860) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x34)));
                (*(undefined * PTR32 *)(gen_frame + 0x24)) = ((undefined *)GEN_TOP(((uint)pvVar15 | uVar11)));
              }
              (*(uint *)(gen_frame + 0x6c)) = (*(uint *)(gen_frame + 0x6c)) | (uint)(*(undefined * PTR32 *)(gen_frame + 0x24));
            }
          }
          pdVar14 = ((double *)GEN_TOP(F_00a341f0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
          uVar11 = *(uint *)pdVar14;
          (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x28)) + 0)) = uVar11;
          uVar12 = *((uint *)GEN_TOP(((int)pdVar14 + 4)));
          (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x28)) + 4)) = ((undefined *)GEN_TOP(uVar12));
          dVar7 = *pdVar14;
          (*(double *)(gen_frame + 0x28)) = *pdVar14;
        } while ((char)uVar11 != '\0');
      }
      (*(double *)(gen_frame + 0x28)) = dVar7;
      iVar20 = *(int *)this;
      if (**((char * PTR32 *)GEN_TOP((iVar20 + 0x80))) != '\0') {
        piVar24 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar20 + 0xc))) + 4)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar24 + 0xc))))(piVar24 GEN_EDX_ARG,iVar20 + 0x80);
        F_0042aca0(iVar20 + 0x80 GEN_EDX_ARG);
      }
      *((undefined1 *)GEN_TOP((iVar20 + 0x848))) = 0;
      uVar11 = F_0059d3d0(this GEN_EDX_ARG,this_00,(*(undefined * PTR32 *)(gen_frame + 0x70)),0x1e,&(*(undefined2 *)(gen_frame + 0x34)),&(*(char *)(gen_frame + 0x77)));
      uVar11 = (*(uint *)(gen_frame + 0x6c)) | uVar11;
      uVar12 = F_0059d3d0(this GEN_EDX_ARG,this_00,(*(undefined * PTR32 *)(gen_frame + 0x70)),0x1f,&(*(undefined2 *)(gen_frame + 0x34)),&(*(char *)(gen_frame + 0x77)));
      uVar21 = F_0059d3d0(this GEN_EDX_ARG,this_00,(*(undefined * PTR32 *)(gen_frame + 0x70)),0x20,&(*(undefined2 *)(gen_frame + 0x34)),&(*(char *)(gen_frame + 0x77)));
      (*(uint *)(gen_frame + 0x6c)) = uVar11 | uVar12 | uVar21;
    }
    if ((*(uint *)(gen_frame + 0x6c)) == 0) goto LAB_005afe90;
LAB_005afe96: ;
    *((undefined1 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x64)) + 0x19))) = 1;
  }
  puVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x64));
  if (*((char *)GEN_TOP(((int)this + 0xc6b))) != '\0') {
    F_00a34f60(this_00 GEN_EDX_ARG);
  }
  bVar8 = F_00a34060(this_00 GEN_EDX_ARG);
  if ((bVar8 == 0) && (bVar8 = F_00a34090(this_00 GEN_EDX_ARG), bVar8 == 0)) goto LAB_005affa2;
  (*(ushort *)(gen_frame + 0x36)) = 0;
  (*(uint *)(gen_frame + 0x3c)) = 0;
  (*(byte *)(gen_frame + 0x40)) = 0;
  (*(byte *)(gen_frame + 0x41)) = 0;
  (*(undefined1 *)(gen_frame + 0x42)) = 0;
  (*(byte *)(gen_frame + 0x43)) = 0;
  (*(undefined2 *)(gen_frame + 0x44)) = 0;
  (*(undefined2 *)(gen_frame + 0x46)) = 0;
  (*(undefined1 *)(gen_frame + 0x48)) = 0;
  (*(byte *)(gen_frame + 0x49)) = 0;
  (*(undefined2 *)(gen_frame + 0x4a)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(uint *)(gen_frame + 0x50)) = 0;
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x36)) + 0)) = 1;
  (*(ushort *)(gen_frame + 0x36)) = 1;
  uVar11 = F_00a34e80(this_00 GEN_EDX_ARG,3);
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x3c)) + 0)) = (short)uVar11;
  (*(uint *)(gen_frame + 0x3c)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x3c)) + 2)),(short)uVar11);
  uVar11 = F_00a34e80(this_00 GEN_EDX_ARG,4);
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x3c)) + 2)) = (short)uVar11;
  (*(uint *)(gen_frame + 0x3c)) = CONCAT22((short)uVar11,(undefined2)(*(uint *)(gen_frame + 0x3c)));
  uVar11 = F_00a34e80(this_00 GEN_EDX_ARG,5);
  (*(byte *)(gen_frame + 0x40)) = (byte)uVar11;
  (*(byte *)(gen_frame + 0x41)) = (byte)(uVar11 >> 8);
  uVar11 = F_00a34e80(this_00 GEN_EDX_ARG,6);
  uVar3 = *(undefined1 *)(puVar4 + 6);
  (*(undefined2 *)(gen_frame + 0x34)) = 0xf;
  (*(undefined1 *)(gen_frame + 0x42)) = (undefined1)uVar11;
  (*(byte *)(gen_frame + 0x43)) = (byte)(uVar11 >> 8);
  (*(undefined2 *)(gen_frame + 0x44)) = SUB42(this_00,0);
  (*(undefined2 *)(gen_frame + 0x46)) = (undefined2)((uint)((int)(uintptr_t)this_00) >> 0x10);
  (*(undefined1 *)(gen_frame + 0x48)) = uVar3;
  (*(byte *)(gen_frame + 0x49)) = *((byte *)GEN_TOP(((int)puVar4 + 0x19)));
  (*(uint *)(gen_frame + 0x38)) = 0;
  if ((*(undefined * PTR32 *)(gen_frame + 0x70)) == ((undefined *)GEN_TOP(0x0))) {
LAB_005aff50: ;
    uVar11 = (*(uint *)(gen_frame + 0x50));
    (*(uint *)(gen_frame + 0x38)) = 0;
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x50)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x50)) = uVar11 & 0xffffff00;
    uVar11 = F_00599f80(REFG(void * PTR32, 0x1379860) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x34)));
    uVar11 = uVar11 | (*(uint *)(gen_frame + 0x38));
    if (uVar11 == 0) goto LAB_005affa2;
  }
  else {
    uVar11 = F_005997b0((*(undefined * PTR32 *)(gen_frame + 0x70)) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x34)));
    uVar11 = uVar11 | (*(uint *)(gen_frame + 0x38));
    if (uVar11 == 0) goto LAB_005aff50;
  }
  if ((uVar11 & 1) != 0) {
    *((undefined1 *)GEN_TOP(((int)puVar4 + 0x1a))) = 1;
  }
  if ((uVar11 & 2) != 0) {
    *((undefined1 *)GEN_TOP(((int)puVar4 + 0x1b))) = 1;
  }
  if ((uVar11 & 4) != 0) {
    *(undefined1 *)(puVar4 + 7) = 1;
  }
  if (((*(char *)(gen_frame + 0x5b)) == '\0') && (bVar8 = F_00a34090(this_00 GEN_EDX_ARG), pvVar15 = (*(undefined * PTR32 *)(gen_frame + 0x54)), bVar8 != 0)) {
    F_005a9ff0((*(undefined * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG);
    *((undefined1 *)GEN_TOP(((int)pvVar15 + 0x11))) = 0;
  }
LAB_005affa2: ;
  uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x10)) + 0x18))))((*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,puVar4);
  return uVar11;
}

/* ref: FUN_005affd0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005affd0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5affd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  byte local_5;
  
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x22bec))) + 8))))(param_1 + 0x22bec);
  local_5 = 0;
  if (*((short *)GEN_TOP((param_1 + 0x22a14))) == 0) {
    iVar2 = *((int *)GEN_TOP((param_1 + 0x2223c)));
    uVar3 = F_00a34210(param_2 GEN_EDX_ARG);
    ((code *)*((gen_code32 *)GEN_TOP((iVar2 + 8))))(param_1 + 0x2223c,uVar3);
  }
  if (*((char *)GEN_TOP((param_1 + 0x22d2b))) == '\0') {
    *((undefined4 *)GEN_TOP((param_1 + 0x20dc0))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0x20dc4))) = 0;
    *((undefined1 *)GEN_TOP((param_1 + 0x20ddc))) = 0;
    return 0;
  }
  puVar1 = ((undefined4 *)GEN_TOP((param_1 + 0x20dbc)));
  *((undefined4 *)GEN_TOP((param_1 + 0x20dd7))) = 0;
  *((undefined2 *)GEN_TOP((param_1 + 0x20dd5))) = 0;
  *((undefined1 *)GEN_TOP((param_1 + 0x20dd4))) = 0;
  *((undefined1 *)GEN_TOP((param_1 + 0x20ddb))) = 0;
  *((undefined1 *)GEN_TOP((param_1 + 0x20ddd))) = 0;
  *puVar1 = param_2;
  *((undefined1 *)GEN_TOP((param_1 + 0x20dda))) = *((undefined1 *)GEN_TOP((param_1 + 0x22d2d)));
  *((undefined4 *)GEN_TOP((param_1 + 0x20dd0))) = *((undefined4 *)GEN_TOP((param_1 + 0x20e98)));
  *((char *)GEN_TOP((param_1 + 0x20ddb))) = param_3;
  F_005af140(((undefined *)GEN_TOP((param_1 + 0x20148))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0x130))),puVar1);
  *puVar1 = 0;
  *((undefined1 *)GEN_TOP((param_1 + 0x22d2e))) = 0;
  if ((*((char *)GEN_TOP((param_1 + 0x20dd4))) != '\0') && (*((char *)GEN_TOP((param_1 + 0x22d2d))) == '\0')) {
    *((undefined1 *)GEN_TOP((param_1 + 0x22d2e))) = 1;
    local_5 = 1;
    F_00a342d0(param_2 GEN_EDX_ARG,5);
    F_00a342f0(param_2 GEN_EDX_ARG);
    if (param_3 != '\0') {
      F_00a342b0(param_2 GEN_EDX_ARG);
    }
  }
  if ((*((char *)GEN_TOP((param_1 + 0x20dd5))) != '\0') || (*((char *)GEN_TOP((param_1 + 0x20db2))) != '\0')) {
    local_5 = local_5 | 2;
    F_00a34270(param_2 GEN_EDX_ARG);
  }
  if (*((char *)GEN_TOP((param_1 + 0x20dd6))) != '\0') {
    F_00a34270(param_2 GEN_EDX_ARG);
  }
  if (*((char *)GEN_TOP((param_1 + 0x20dd7))) != '\0') {
    F_00a342b0(param_2 GEN_EDX_ARG);
  }
  if (*((char *)GEN_TOP((param_1 + 0x20dd8))) != '\0') {
    F_00a34290(param_2 GEN_EDX_ARG);
  }
  return local_5;
}

/* ref: Component::GUI2::AtkModule::vf21 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b0130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5b0130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  byte bVar1;
  
  if ((*(int *)&gen_args[0]) != 0) {
    bVar1 = F_005a9d30(*(undefined * PTR32 *)(this + 0x130) GEN_EDX_FWD,(*(int *)&gen_args[0]));
    if (bVar1 != 0) {
      F_005c6630(this + 0x22228 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),&(*(int *)&gen_args[0]));
      F_005c9de0(this + 0x22228 GEN_EDX_ARG,&(*(int *)&gen_args[0]),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)));
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_005b0190 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b0190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8), GEN_P(undefined4 param_9, unsigned int gen_a9), GEN_P(undefined4 param_10, unsigned int gen_a10), GEN_P(undefined4 param_11, unsigned int gen_a11), GEN_P(undefined4 param_12, unsigned int gen_a12), GEN_P(undefined4 param_13, unsigned int gen_a13), GEN_P(undefined4 param_14, unsigned int gen_a14))
{
  GEN_ENTER(0x5b0190u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  GEN_PIN(undefined4 param_11 = (undefined4)gen_a11;)
  GEN_PIN(undefined4 param_12 = (undefined4)gen_a12;)
  GEN_PIN(undefined4 param_13 = (undefined4)gen_a13;)
  GEN_PIN(undefined4 param_14 = (undefined4)gen_a14;)
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_5;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_8;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_6;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_7;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = param_11;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_9;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = param_10;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = param_14;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a1dcc));
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = param_12;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = param_13;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x3c))) = (*(undefined * PTR32 (*)[3])REFP(0x10a0d1c));
  F_0042b630((int)this + 0x50 GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  F_0042e430(((undefined *)GEN_TOP(((int)this + 0x50))) GEN_EDX_ARG,"");
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc0))) = (*(undefined * PTR32 (*)[1])REFP(0x10a0fd8));
  *((undefined4 *)GEN_TOP(((int)this + 200))) = 0;
  uVar2 = F_004296a0(0xc,0,400);
  *((uint *)GEN_TOP(((int)this + 0xc4))) = uVar2;
  *((uint *)GEN_TOP(uVar2)) = uVar2;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc4))) + 4))) = *((int *)GEN_TOP(((int)this + 0xc4)));
  *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = 0;
  uVar2 = F_004296a0(0xc,0,400);
  *((uint *)GEN_TOP(((int)this + 0xd0))) = uVar2;
  *((uint *)GEN_TOP(uVar2)) = uVar2;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xd0))) + 4))) = *((int *)GEN_TOP(((int)this + 0xd0)));
  F_00590960(((undefined *)GEN_TOP(((int)this + 0xe0))) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x1c0))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1c4))) = (*(undefined * PTR32 (*)[3])REFP(0x10a1dbc));
  *((undefined4 *)GEN_TOP(((int)this + 0x1c8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1d0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1d4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1d8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1dc))) = 4;
  *((undefined2 *)GEN_TOP(((int)this + 0x1e0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1e4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1e8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1ec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1f0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 500))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x1f8))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x1fa))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x204))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x208))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1fc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x200))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20c))) = 0x11;
  *((undefined4 *)GEN_TOP(((int)this + 0x210))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x214))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x218))) = 0x10100;
  *((undefined2 *)GEN_TOP(((int)this + 0x21c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x21e))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x220))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x224))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x228))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x230))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x23c))) = 0;
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0x240)));
  *puVar1 = 0;
  puVar3 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,0x2c4)));
  *puVar1 = puVar3;
  if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar3 = 0;
    puVar3[1] = 0;
  }
  *((undefined4 * PTR32 *)GEN_TOP(*puVar1)) = puVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x244))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x248))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x250))) = 0;
  F_0042b630((int)this + 600 GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x234))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x238))) = 0;
  REFG(void * PTR32, 0x1379860) = this;
  return (uint)this;
}

/* ref: FUN_005b03e0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_005b03e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5b03e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x68, 8, 4);
  int in_ecx;
  undefined * this_00;
  undefined * pvVar1;
  uint uVar2;
  undefined4 uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x60)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x64));
  in_ecx = (int)this + 600;
  F_0042aca0(in_ecx GEN_EDX_FWD);
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x240)));
  F_00492c50(this_00 GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = &(*(undefined4 *)(gen_frame + 0x54));
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = param_1;
  (*(char *)(gen_frame + 0x5c)) = '\0';
  F_00493bc0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x5c)) != '\0')) && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = &(*(undefined4 *)(gen_frame + 0x54));
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = param_2;
  (*(char *)(gen_frame + 0x5c)) = '\0';
  F_00493bc0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x54)));
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) && ((*(char *)(gen_frame + 0x5c)) != '\0')) && ((*(char *)(gen_frame + 0x5c)) == '\x01')) {
    pvVar1 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58))));
    *((int *)GEN_TOP(((int)pvVar1 + 0x54))) = *((int *)GEN_TOP(((int)pvVar1 + 0x54))) - 1;
    if (*((int *)GEN_TOP(((int)pvVar1 + 0x54))) < 1) {
      F_0042c880(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
    }
  }
  uVar3 = REFG(undefined4, 0x108cc50);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x30))) + 0x2c))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG,0x13);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar2,uVar3);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x30))) + 0xc))))
            (*((int * PTR32 *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),this_00,in_ecx);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar2 = F_0042a990(in_ecx GEN_EDX_ARG);
  return uVar2;
}

/* ref: Component::GUI2::AtkUnitBase::vf37 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005b0510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5b0510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x7c))))(this GEN_EDX_FWD,0);
  F_0056b8d0(this GEN_EDX_ARG);
  F_005876c0(this GEN_EDX_ARG);
  F_0056c5f0(this + 0xb0 GEN_EDX_ARG);
  piVar1 = *(int * PTR32 *)(this + 0x140);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      F_00429760(iVar2,(piVar1[2] - iVar2 >> 2) * 4,400);
    }
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
    F_00406ad0(piVar1);
    *(undefined4 *)(this + 0x140) = 0;
  }
  if (*(int *)(this + 0xe0) != 0) {
    F_005d45c0(*(int *)(this + 0xe0) GEN_EDX_ARG,3);
    *(undefined4 *)(this + 0xe0) = 0;
  }
  uVar4 = *(int *)(this + 0xe8) - *(int *)(this + 0xe4) >> 2;
  if (uVar4 != 0) {
    do {
      F_00406b30(*((undefined4 *)GEN_TOP((*(int *)(this + 0xe4) + uVar3 * 4))));
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  iVar2 = *(int *)(this + 0xe4);
  if (iVar2 != *(int *)(this + 0xe8)) {
    F_00c46e20(iVar2,*(int *)(this + 0xe8),0);
    *(int *)(this + 0xe8) = iVar2;
  }
  F_00583770(REFG(int, 0x1379860) + 0x23c GEN_EDX_ARG,0x49,0,this,0);
  uVar3 = F_0058fe90(this + 0x24 GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_005b0610 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b0610(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x5b0610u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint uVar5;
  int * piVar6;
  int iVar7;
  
  if (param_4 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc4))))(param_1 GEN_EDX_FWD);
  }
  uVar3 = param_1[0x3d];
  uVar5 = uVar3 >> 0x14 & 0xf;
  if ((uVar5 != 5) && (uVar5 != 4)) {
    param_1[0x3d] = uVar3 & 0xff4fffff | 0x400000;
    if ((uint)*((byte *)GEN_TOP(((int)param_1 + 0x13a))) == *((uint *)GEN_TOP((REFG(int, 0x1379860) + 0x1b0)))) {
      F_00573dd0(((undefined *)GEN_TOP((REFG(int, 0x1379860) + 0xe0))) GEN_EDX_ARG);
    }
    if (((*((char *)GEN_TOP((REFG(int, 0x1379860) + 0xbc))) != '\0') &&
        (((piVar6 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0xb0))), piVar6 != ((int *)GEN_TOP(0x0)) ||
          (piVar6 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0xac))), piVar6 != ((int *)GEN_TOP(0x0)))) &&
         (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG), uVar3 != 0)))) &&
       ((bVar2 = F_0055de10(param_1 GEN_EDX_ARG,uVar3), bVar2 != 0 && (*((char *)GEN_TOP((REFG(int, 0x1379860) + 0xbc))) != '\0')
        ))) {
      F_005aa300(REFG(int, 0x1379860) + 0x3c GEN_EDX_ARG,1,1,9);
    }
    if (*((byte *)GEN_TOP(((int)param_1 + 0x13d))) != 0) {
      F_0057fe00(*((undefined4 *)GEN_TOP((REFG(int, 0x1379860) + 0x14))) GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)param_1 + 0x13d))),0,0);
      *((undefined1 *)GEN_TOP(((int)param_1 + 0x13d))) = 0;
    }
    F_00594ca0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x14))) GEN_EDX_ARG,param_1);
    iVar1 = *((int *)GEN_TOP((REFG(int, 0x1379860) + 0x18)));
    iVar7 = 0;
    if (0 < *((short *)GEN_TOP((iVar1 + 0xc68)))) {
      puVar4 = ((undefined4 *)GEN_TOP((iVar1 + 0x58)));
      do {
        if (((int *)GEN_TOP(*puVar4)) == param_1) {
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
        }
        iVar7 = iVar7 + 1;
        puVar4 = puVar4 + 3;
      } while (iVar7 < *((short *)GEN_TOP((iVar1 + 0xc68))));
    }
    *((char *)GEN_TOP(((int)param_1 + 0x10d))) = *((char *)GEN_TOP(((int)param_1 + 0x10d))) + '\x01';
    *((byte *)GEN_TOP(((int)param_1 + 0xfa))) =
         *((byte *)GEN_TOP(((int)param_1 + 0xfa))) ^ (param_2 * '\b' ^ *((byte *)GEN_TOP(((int)param_1 + 0xfa)))) & 8;
    *(byte *)(param_1 + 0x3e) = (param_3 & 1) << 6 | *(byte *)(param_1 + 0x3e) & 0xb7;
    uVar3 = F_005876c0(param_1 GEN_EDX_ARG);
    if ((*(byte *)(param_1 + 0x3e) & 0x10) == 0) {
      if (param_1[0x24] != 0) {
        F_005876c0(param_1 GEN_EDX_ARG);
        uVar3 = F_00596830(param_1 GEN_EDX_ARG);
      }
      bVar2 = *(byte *)(param_1 + 0x3e);
      *(byte *)(param_1 + 0x3e) = (~bVar2 * '\x02' ^ bVar2) & 2 ^ bVar2;
      param_1[0x3d] = param_1[0x3d] & 0xff5fffffU | 0x500000;
      return CONCAT31((int3)(uVar3 >> 8),bVar2);
    }
    uVar3 = param_1[0x3d] & 0xff4fffffU | 0x400000;
    param_1[0x3d] = uVar3;
  }
  return uVar3;
}

/* ref: FUN_005b07f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b07f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5b07f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x2c, 4, 4);
  undefined4 * puVar1;
  code * pcVar2;
  undefined * this_00;
  ushort uVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  undefined4 uVar10;
  uint uVar11;
  int * piVar12;
  float10 fVar13;
  float fVar14;
  
  uVar10 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if ((*((uint *)GEN_TOP(((int)this + 0x120))) >> 0xb & 1) == 0) {
    uVar10 = *((undefined4 *)GEN_TOP(((int)this + 0x11c)));
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x118))) = uVar10;
  uVar6 = F_00578ee0(((undefined *)GEN_TOP(((int)this + 0x24))) GEN_EDX_FWD,0);
  *((uint *)GEN_TOP(((int)this + 0x90))) = uVar6;
  if (uVar6 != 0) {
    *((uint *)GEN_TOP((uVar6 + 0x84))) = *((uint *)GEN_TOP((uVar6 + 0x84))) | 0x4000000;
  }
  iVar8 = *((int *)GEN_TOP(((int)this + 0x90)));
  if (iVar8 != 0) {
    fVar14 = *((float *)GEN_TOP(((int)this + 0x118)));
    (*(float *)(gen_frame + 0x1c)) = fVar14;
    F_00567d00(iVar8 GEN_EDX_ARG,fVar14,fVar14);
  }
  uVar11 = 0;
  uVar6 = F_0055e300(this GEN_EDX_ARG);
  if (uVar6 != 0) {
    do {
      uVar7 = F_00578ee0(((undefined *)GEN_TOP(((int)this + 0x24))) GEN_EDX_ARG,uVar11);
      if ((((uVar7 != 0) && (999 < *((ushort *)GEN_TOP((uVar7 + 0x18))))) &&
          (iVar8 = *((int *)GEN_TOP((uVar7 + 0x8c))), iVar8 != 0)) &&
         ((((*((byte *)GEN_TOP((iVar8 + 0x60))) & 1) != 0 && ((*((byte *)GEN_TOP((iVar8 + 0x60))) & 4) != 0)) &&
          ((*((char *)GEN_TOP((iVar8 + 0x1c))) == '\x01' && (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar8 + 0xc))) + 0xf))) == '\x02'))
          )))) {
        *((uint *)GEN_TOP(((int)this + 0xac))) = uVar7;
        break;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar6);
  }
  iVar8 = *((int *)GEN_TOP(((int)this + 0xac)));
  if (((iVar8 == 0) || (*((ushort *)GEN_TOP((iVar8 + 0x18))) < 1000)) ||
     (piVar12 = *((int * PTR32 *)GEN_TOP((iVar8 + 0x8c))), piVar12 == ((int *)GEN_TOP(0x0)))) {
    if ((*((byte *)GEN_TOP(((int)this + 0xfa))) & 4) != 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x94))) = *((undefined4 *)GEN_TOP(((int)this + 0x90)));
    }
  }
  else {
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar12 + 0x50))))(piVar12 GEN_EDX_ARG);
    *((uint *)GEN_TOP(((int)this + 0xa0))) = uVar6;
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar12 + 0x4c))))(piVar12 GEN_EDX_ARG);
    *((uint *)GEN_TOP(((int)this + 0x94))) = uVar6;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar12 + 0x54))))(piVar12 GEN_EDX_ARG,this);
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x1379860) + 0x18))) + 0xc6f))) = 8;
  }
  if ((((*((byte *)GEN_TOP(((int)this + 0x80))) & 1) != 0) && ((*((byte *)GEN_TOP(((int)this + 0x80))) & 4) != 0)) &&
     (*((char *)GEN_TOP(((int)this + 0x3c))) == '\x02')) {
    iVar8 = *((int *)GEN_TOP(((int)this + 0x2c)));
    if (((undefined4 *)GEN_TOP((iVar8 + 0xc))) != ((undefined4 *)GEN_TOP(0x0))) {
      *((undefined4 *)GEN_TOP(((int)this + 0x84))) = *((undefined4 *)GEN_TOP((iVar8 + 0xc)));
      *((undefined4 *)GEN_TOP(((int)this + 0x88))) = *((undefined4 *)GEN_TOP((iVar8 + 0x10)));
      *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = *((undefined4 *)GEN_TOP((iVar8 + 0x14)));
    }
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x10)),0);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xf4))))(this GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)));
  piVar12 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x14)));
  (*(int * PTR32 *)(gen_frame + 0x0)) = piVar12;
  bVar4 = F_005a93d0(this GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x14)),&(*(uint *)(gen_frame + 0x18)),0);
  if (*((char *)GEN_TOP(((int)this + 0x13d))) == '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xb0))))
              (this GEN_EDX_ARG,(int)*((short *)GEN_TOP(((int)this + 0x138))),*((undefined4 *)GEN_TOP(((int)this + 0xe0))));
    iVar8 = *((int *)GEN_TOP(((int)this + 0x90)));
    *((byte *)GEN_TOP(((int)this + 0xf9))) = *((byte *)GEN_TOP(((int)this + 0xf9))) | 1;
    if (iVar8 != 0) {
      F_0057f0d0(((undefined *)GEN_TOP(((int)this + 0x24))) GEN_EDX_ARG,iVar8,*((undefined4 *)GEN_TOP((iVar8 + 8))),0);
    }
    if (bVar4 != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xcc))))
                (this GEN_EDX_ARG,(undefined4)gen_fl2bits((float)((*(uint *)(gen_frame + 0x14)) & 0xffff)),
                 (undefined4)gen_fl2bits((float)((*(uint *)(gen_frame + 0x18)) & 0xffff)));
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 200))))(this GEN_EDX_ARG);
  }
  else {
    for (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(piVar12[0x2d])); puVar1 != ((undefined4 *)GEN_TOP(piVar12[0x2d]));
        puVar1 = ((undefined4 *)GEN_TOP(*puVar1))) {
      if (*((char *)GEN_TOP((puVar1[2] + 0x13a))) == *((char *)GEN_TOP(((int)this + 0x13d)))) {
        piVar12 = ((int *)GEN_TOP(puVar1[2]));
        goto LAB_005b09de;
      }
    }
    piVar12 = ((int *)GEN_TOP(0x0));
LAB_005b09de: ;
    uVar6 = 0;
    (*(uint *)(gen_frame + 0x20)) = 0;
    if (piVar12 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar12 + 0x28))))(piVar12 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x1c)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar12 + 0x48))))(piVar12 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x4)),0);
      fVar14 = gen_bits2f(piVar12[0x46]);
      fVar9 = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x8))) & 0xffff);
      (*(float *)(gen_frame + 0x24)) = fVar14;
      (*(float *)(gen_frame + 0x8)) = fVar9;
      (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x24)) + 0)) = (undefined2)(uint)gen_fl2bits(fVar14);
      (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x24)) + 2)) = gen_x87_cw;
      (*(float *)(gen_frame + 0x8)) = gen_bits2f(gen_x87_cw | 0xc00);
      uVar11 = (*(uint *)(gen_frame + 0x4)) & 0xffff;
      (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x8)) + 0)) = (ushort)(gen_x87_cw | 0xc00);
      gen_set_x87_cw((unsigned short)(*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x8)) + 0)));
      (*(uint *)(gen_frame + 0x4)) = uVar11;
      fVar9 = gen_bits2f((int)TRUNC((float10)(int)gen_fl2bits(fVar9) * (float10)fVar14));
      (*(float *)(gen_frame + 0x8)) = fVar9;
      (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x8)) + 0)) = (ushort)(uint)gen_fl2bits(fVar9);
      uVar3 = (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x8)) + 0));
      (*(float *)(gen_frame + 0x8)) = fVar14;
      gen_set_x87_cw((unsigned short)gen_x87_cw);
      uVar6 = (uint)(ushort)((uVar3 >> 1) + (short)(*(uint *)(gen_frame + 0x20)));
      (*(float *)(gen_frame + 0x24)) = gen_bits2f(CONCAT22(gen_x87_cw,(*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x24)) + 0))));
      (*(uint *)(gen_frame + 0x4)) = gen_x87_cw | 0xc00;
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x4)) + 0)) = (ushort)(gen_x87_cw | 0xc00);
      gen_set_x87_cw((unsigned short)(ushort)(*(uint *)(gen_frame + 0x4)));
      uVar11 = (uint)TRUNC((float10)uVar11 * (float10)fVar14);
      (*(uint *)(gen_frame + 0x4)) = uVar11;
      uVar11 = (*(uint *)(gen_frame + 0x4));
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x4)) + 0)) = (ushort)uVar11;
      gen_set_x87_cw((unsigned short)gen_x87_cw);
      (*(uint *)(gen_frame + 0x20)) = (uint)(ushort)(((ushort)(*(uint *)(gen_frame + 0x4)) >> 1) + (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x1c)) + 0)));
      (*(uint *)(gen_frame + 0x4)) = uVar11;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xb0))))
              (this GEN_EDX_ARG,(int)*((short *)GEN_TOP(((int)this + 0x138))),*((undefined4 *)GEN_TOP(((int)this + 0xe0))));
    pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x48)));
    *((byte *)GEN_TOP(((int)this + 0xf9))) = *((byte *)GEN_TOP(((int)this + 0xf9))) | 1;
    (*pcVar2)(this,&(*(uint *)(gen_frame + 0x14)),&(*(uint *)(gen_frame + 0x18)),0);
    fVar14 = *((float *)GEN_TOP(((int)this + 0x118)));
    (*(float *)(gen_frame + 0x1c)) = fVar14;
    (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x14)) & 0xffff;
    fVar13 = (float10)fVar14;
    iVar8 = *(int *)this;
    (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x24)) + 2)) = gen_x87_cw;
    (*(uint *)(gen_frame + 0x4)) = gen_x87_cw | 0xc00;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x4)) + 0)) = (ushort)(gen_x87_cw | 0xc00);
    gen_set_x87_cw((unsigned short)(ushort)(*(uint *)(gen_frame + 0x4)));
    pcVar2 = *((gen_code32 *)GEN_TOP((iVar8 + 0xe8)));
    uVar11 = (uint)TRUNC((float10)((*(uint *)(gen_frame + 0x14)) & 0xffff) * fVar13);
    (*(uint *)(gen_frame + 0x4)) = uVar11;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x4)) + 0)) = (ushort)uVar11;
    uVar3 = (ushort)(*(uint *)(gen_frame + 0x4));
    (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x18)) & 0xffff;
    (*(uint *)(gen_frame + 0x14)) = uVar11 & 0xffff;
    gen_set_x87_cw((unsigned short)gen_x87_cw);
    (*(float *)(gen_frame + 0x24)) = gen_bits2f(CONCAT22(gen_x87_cw,(*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x24)) + 0))));
    (*(uint *)(gen_frame + 0x4)) = gen_x87_cw | 0xc00;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x4)) + 0)) = (ushort)(gen_x87_cw | 0xc00);
    gen_set_x87_cw((unsigned short)(ushort)(*(uint *)(gen_frame + 0x4)));
    uVar11 = (uint)TRUNC((float10)((*(uint *)(gen_frame + 0x18)) & 0xffff) * fVar13);
    (*(uint *)(gen_frame + 0x4)) = uVar11;
    uVar11 = (*(uint *)(gen_frame + 0x4));
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x4)) + 0)) = (ushort)uVar11;
    (*(uint *)(gen_frame + 0x18)) = uVar11 & 0xffff;
    uVar5 = (ushort)(*(uint *)(gen_frame + 0x4)) >> 3;
    gen_set_x87_cw((unsigned short)gen_x87_cw);
    (*(uint *)(gen_frame + 0x4)) = uVar11;
    (*pcVar2)(this,uVar6,(*(uint *)(gen_frame + 0x20)),(uint)(ushort)-(uVar3 >> 1),(uint)(ushort)-uVar5);
    iVar8 = *((int *)GEN_TOP(((int)this + 0x90)));
    if (iVar8 != 0) {
      F_0057f0d0(((undefined *)GEN_TOP(((int)this + 0x24))) GEN_EDX_ARG,iVar8,*((undefined4 *)GEN_TOP((iVar8 + 8))),0);
    }
    F_0056ae10(this GEN_EDX_ARG);
    piVar12 = (*(int * PTR32 *)(gen_frame + 0x0));
  }
  fVar14 = (*(float *)(gen_frame + 0x1c));
  iVar8 = *((int *)GEN_TOP((REFG(int, 0x1379860) + 0x14)));
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x1c)) + 0)) = 0;
  (*(float *)(gen_frame + 0x1c)) = gen_bits2f((uint)gen_fl2bits(fVar14) & 0xffffff00);
  if (((*((byte *)GEN_TOP((iVar8 + 0x1b0))) & 0x80) != 0) && ((*((uint *)GEN_TOP(((int)this + 0x120))) >> 0xb & 1) == 0))
  {
    (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x1c)) + 0)) = 1;
    (*(float *)(gen_frame + 0x1c)) = gen_bits2f(CONCAT31((int3)((uint)gen_fl2bits(fVar14) >> 8),1));
  }
  F_0056b050(this GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),&(*(uint *)(gen_frame + 0x4)),(uint)*((ushort *)GEN_TOP(((int)this + 0x12a))),
               (uint)*((ushort *)GEN_TOP(((int)this + 300))),(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x1c))));
  if (((short)(*(int * PTR32 *)(gen_frame + 0x0)) != *((short *)GEN_TOP(((int)this + 0x12a)))) ||
     ((short)(*(uint *)(gen_frame + 0x4)) != *((short *)GEN_TOP(((int)this + 300))))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2c))))(this GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x4)));
  }
  if (*((char *)GEN_TOP(((int)this + 0x13c))) == '\0') {
    if ((((*((byte *)GEN_TOP(((int)this + 0xf9))) & 2) != 0) &&
        (uVar6 = *((uint *)GEN_TOP(((int)this + 0xf4))) >> 0x14 & 0xf, uVar6 != 5)) && (uVar6 != 4)) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar12 + 0x50))))(piVar12 GEN_EDX_ARG,this,1);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG,1,0);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar12 + 0x54))))(piVar12 GEN_EDX_ARG,this);
  }
  F_00594910(this GEN_EDX_ARG,0);
  iVar8 = *((int *)GEN_TOP(((int)this + 0x90)));
  fVar14 = 0.0;
  fVar9 = 0.0;
  if (iVar8 != 0) {
    fVar14 = *((float *)GEN_TOP((iVar8 + 0x38)));
    fVar9 = *((float *)GEN_TOP((iVar8 + 0x3c)));
  }
  *((short *)GEN_TOP(((int)this + 0x12a))) = (short)(int)fVar14;
  *((short *)GEN_TOP(((int)this + 300))) = (short)(int)fVar9;
  if (iVar8 != 0) {
    *((undefined1 *)GEN_TOP((iVar8 + 0x53))) = 0;
  }
  if ((*((byte *)GEN_TOP(((int)this + 0xfa))) & 1) != 0) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x18)));
    if (*((short *)GEN_TOP(((int)this_00 + 0xc68))) == 0) {
      iVar8 = *((int *)GEN_TOP(((int)this_00 + 0xc58)));
    }
    else {
      iVar8 = *((int *)GEN_TOP(((int)this_00 + *((short *)GEN_TOP(((int)this_00 + 0xc68))) * 0xc + 0x50)));
    }
    if (iVar8 == *((int *)GEN_TOP((REFG(int, 0x1379860) + 0x14))) + 0x100) {
      F_00558e30(this_00 GEN_EDX_ARG);
    }
    if (*((int *)GEN_TOP((REFG(int, 0x1379860) + 0x210))) != 0) {
      *((int *)GEN_TOP((REFG(int, 0x1379860) + 0x210))) = *((int *)GEN_TOP((REFG(int, 0x1379860) + 0x210))) - 1;
    }
    *((byte *)GEN_TOP(((int)this + 0xfa))) = *((byte *)GEN_TOP(((int)this + 0xfa))) & 0xfe;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x1379860) + 0x18))) + 0xc6e))) = 1;
    uVar6 = *((uint *)GEN_TOP(((int)this + 0xf4))) >> 0x14 & 0xf;
    if (((uVar6 == 3) || (uVar6 == 2)) && ((*((byte *)GEN_TOP(((int)this + 0xf8))) & 0x80) == 0)) {
      iVar8 = *((int *)GEN_TOP((REFG(int, 0x1379860) + 0x18)));
      if (*((short *)GEN_TOP((iVar8 + 0xc68))) == 0) {
        uVar10 = *((undefined4 *)GEN_TOP((iVar8 + 0xc58)));
      }
      else {
        uVar10 = *((undefined4 *)GEN_TOP((iVar8 + 0x50 + *((short *)GEN_TOP((iVar8 + 0xc68))) * 0xc)));
      }
      F_005877e0(this GEN_EDX_ARG,uVar10);
    }
  }
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xb4))))
                    (this GEN_EDX_ARG,(int)*((short *)GEN_TOP(((int)this + 0x138))),*((undefined4 *)GEN_TOP(((int)this + 0xe0))));
  return uVar6;
}

/* ref: FUN_005b0dd0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005b0dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5b0dd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 0xf4))) >> 0x1c == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa4))))(this GEN_EDX_FWD);
    *((uint *)GEN_TOP(((int)this + 0xf4))) =
         (((char)uVar1 == '\0') + 1) * 0x10000000 | *((uint *)GEN_TOP(((int)this + 0xf4))) & 0xfffffff;
  }
  if ((byte)((uint)*((undefined4 *)GEN_TOP(((int)this + 0xf4))) >> 0x1c) == 1) {
    F_005a8130(((undefined *)GEN_TOP(((int)this + 0x24))) GEN_EDX_ARG);
    if ((*((byte *)GEN_TOP(((int)this + 0x80))) & 1) == 0) {
      return 0;
    }
    if (*((int *)GEN_TOP(((int)this + 0x44))) != 3) {
      return 0;
    }
    *((uint *)GEN_TOP(((int)this + 0xf4))) = *((uint *)GEN_TOP(((int)this + 0xf4))) & 0xfffffff | 0x20000000;
  }
  if ((byte)((uint)*((undefined4 *)GEN_TOP(((int)this + 0xf4))) >> 0x1c) != 2) {
    return 0;
  }
  if ((*((byte *)GEN_TOP(((int)this + 0xf9))) & 1) == 0) {
    F_005b07f0(this GEN_EDX_ARG);
  }
  return ((byte)(*((uint *)GEN_TOP(((int)this + 0xf4))) >> 0x14) & 0xf) != 1;
}

/* ref: FUN_005b0e90 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b0e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5b0e90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  int * in_ecx;
  undefined * pvVar6;
  
  iVar1 = *param_1;
  if (param_1[3] != 0) {
    if ((param_1[3] == 2) && (param_1[2] - 9U < 2)) {
      uVar4 = 0;
      if (iVar1 != 0) {
        uVar4 = *((undefined4 *)GEN_TOP((iVar1 + 0x70)));
      }
      bVar3 = F_005a9af0(this GEN_EDX_FWD,uVar4,param_1[2],0,3);
      if (bVar3 != 0) {
        return 1;
      }
    }
    return 0;
  }
  if (iVar1 != 0) {
    iVar2 = param_1[2];
    param_1 = ((int *)GEN_TOP(0x0));
    switch((unsigned int)(uintptr_t)(iVar2)) {
    case 1: ;
      uVar5 = (uint)*((char *)GEN_TOP((iVar1 + 0x7f)));
      break;
    default: ;
      goto switchD_005b0f05_caseD_3;
    case 7: ;
      uVar5 = (uint)*((byte *)GEN_TOP((iVar1 + 0x7b)));
      break;
    case 8: ;
      uVar5 = (uint)*((byte *)GEN_TOP((iVar1 + 0x7c)));
      break;
    case 9: ;
      uVar5 = (uint)*((byte *)GEN_TOP((iVar1 + 0x79)));
      break;
    case 10: ;
      uVar5 = (uint)*((byte *)GEN_TOP((iVar1 + 0x7a)));
      break;
    case 0xf: ;
      uVar5 = (uint)*((char *)GEN_TOP((iVar1 + 0x7f)));
      param_1 = ((int *)GEN_TOP(iVar2));
      break;
    case 0x10: ;
      param_1 = ((int *)GEN_TOP(iVar2));
    case 2: ;
      uVar5 = (uint)*((char *)GEN_TOP((iVar1 + 0x7e)));
    }
    if ((((uVar5 != 0) && (uVar5 != 0xff)) &&
        (in_ecx = ((int *)GEN_TOP(F_00573130((int)this + 0x24,uVar5,1,0))), in_ecx != ((int *)GEN_TOP(0x0)))) &&
       (uVar5 = F_005c06b0(in_ecx GEN_EDX_ARG), (char)uVar5 != '\0')) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) GEN_EDX_ARG,((uint *)(gen_frame + 0x0)),0);
      if ((((uint *)(gen_frame + 0x0))[0] >> 5 & 1) != 0) {
        F_005a0260(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x3c))))(in_ecx GEN_EDX_ARG);
      iVar1 = REFG(int, 0x1379860);
      if (uVar5 != 0) {
        pvVar6 = this;
        if (this == ((undefined *)GEN_TOP(0x0))) {
          pvVar6 = ((undefined *)GEN_TOP(F_0057f8d0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x14))) GEN_EDX_ARG,uVar5)));
        }
        F_0059b1c0(*((undefined * PTR32 *)GEN_TOP((iVar1 + 0x18))) GEN_EDX_ARG,uVar5,pvVar6,param_1);
        *((uint *)GEN_TOP(((int)this + 0xa4))) = uVar5;
      }
      return 1;
    }
  }
switchD_005b0f05_caseD_3: ;
  return 0;
}

/* ref: Component::GUI2::AtkUnitBase::vf59 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b1020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5b1020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  int iVar5;
  
  uVar4 = *((uint *)GEN_TOP((REFG(int, 0x1379860) + 0x18)));
  if (*((short *)GEN_TOP((uVar4 + 0xc68))) == 0) {
    iVar5 = *((int *)GEN_TOP((uVar4 + 0xc58)));
  }
  else {
    iVar5 = *((int *)GEN_TOP((uVar4 + 0x50 + *((short *)GEN_TOP((uVar4 + 0xc68))) * 0xc)));
  }
  if (iVar5 != 0) {
    iVar2 = iVar5;
    iVar1 = *(int *)(this + 0x90);
    while (iVar1 != 0) {
      if (iVar2 == *(int *)(this + 0x90)) {
        bVar3 = F_005a9af0(this GEN_EDX_FWD,iVar5,param_1,param_2,3);
        return CONCAT31(extraout_var,bVar3);
      }
      uVar4 = 0;
      iVar2 = *((int *)GEN_TOP((iVar2 + 8)));
      iVar1 = iVar2;
    }
  }
  return uVar4 & 0xffffff00;
}

/* ref: Component::GUI2::AtkUnitManager::vf5 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b1090(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x5b1090u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_FRAME_DECL(0x28, 8);
  int * piVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  undefined3 uVar6;
  undefined4 uVar7;
  byte bVar8;
  uint uVar9;
  int * piVar10;
  int * piVar11;
  
  iVar2 = *((int *)GEN_TOP((REFG(int, 0x1379860) + 0x234)));
  iVar3 = *((int *)GEN_TOP((REFG(int, 0x1379860) + 0x238)));
  ((byte *)(gen_frame + 0x0))[0] = (char)iVar2;
  ((byte *)(gen_frame + 0x0))[1] = (char)((uint)iVar2 >> 8);
  ((byte *)(gen_frame + 0x0))[2] = (char)((uint)iVar2 >> 0x10);
  ((byte *)(gen_frame + 0x0))[3] = (char)((uint)iVar2 >> 0x18);
  ((byte *)(gen_frame + 0x0))[4] = (char)iVar3;
  ((byte *)(gen_frame + 0x0))[5] = (char)((uint)iVar3 >> 8);
  ((byte *)(gen_frame + 0x0))[6] = (char)((uint)iVar3 >> 0x10);
  ((byte *)(gen_frame + 0x0))[7] = (char)((uint)iVar3 >> 0x18);
  (*(char *)(gen_frame + 0x22)) = '\0';
  if ((iVar2 != *((int *)GEN_TOP(((int)param_1 + 0x18c)))) || (iVar3 != *((int *)GEN_TOP(((int)param_1 + 400))))) {
    (*(char *)(gen_frame + 0x22)) = '\x01';
    *((int *)GEN_TOP(((int)param_1 + 0x18c))) = iVar2;
    *((int *)GEN_TOP(((int)param_1 + 400))) = iVar3;
  }
  piVar10 = *((int * PTR32 *)GEN_TOP(((int)param_1 + 0xb4)));
  piVar11 = ((int *)GEN_TOP(*piVar10));
  (*(char *)(gen_frame + 0x23)) = '\0';
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) = piVar10;
  (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar11;
  if (piVar11 != piVar10) {
    do {
      piVar10 = ((int *)GEN_TOP(piVar11[2]));
      (*(int * PTR32 *)(gen_frame + 0x10)) = piVar10;
      if (((*(char *)(gen_frame + 0x22)) != '\0') && ((*((byte *)GEN_TOP(((int)piVar10 + 0xf9))) & 1) != 0)) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar10 + 0xd8))))(piVar10 GEN_EDX_FWD,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)));
        iVar2 = piVar10[0x24];
        if (iVar2 != 0) {
          F_0057f0d0(piVar10 + 9 GEN_EDX_ARG,iVar2,*((undefined4 *)GEN_TOP((iVar2 + 8))),0);
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar10 + 0x78))))(piVar10 GEN_EDX_ARG);
        F_0056b300(piVar10 GEN_EDX_ARG,0);
      }
      uVar7 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12));
      uVar9 = (uint)*(byte *)(piVar10 + 0x3d);
      (*(uint *)(gen_frame + 0x14)) = uVar9;
      (*(uint *)(gen_frame + 0x18)) = uVar9;
      ((byte *)(gen_frame + 0x0))[0xc] = 0;
      uVar6 = SUB43(uVar7,1);
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) = uVar7 & 0xffffff00;
      if (*((byte *)GEN_TOP(((int)piVar10 + 0xf5))) != uVar9) {
        ((byte *)(gen_frame + 0x0))[0xc] = 1;
        ((byte *)(gen_frame + 0x0))[0xd] = (char)uVar6;
        ((byte *)(gen_frame + 0x0))[0xe] = (char)((uint3)uVar6 >> 8);
        ((byte *)(gen_frame + 0x0))[0xf] = (char)((uint3)uVar6 >> 0x10);
        ((byte *)(gen_frame + 0x0))[0xc] = 1;
      }
      bVar8 = F_0059a0a0(piVar10 GEN_EDX_ARG);
      if (bVar8 != 0) {
        if ((*(byte *)(piVar10 + 0x3e) & 0x10) != 0) {
          iVar2 = (*((ushort *)GEN_TOP(((int)piVar10 + 0xf6))) & 0xf) * 3 + 6;
          piVar4 = *((int * PTR32 *)GEN_TOP(((int)param_1 + iVar2 * 4)));
          piVar1 = ((int *)GEN_TOP(((int)param_1 + iVar2 * 4)));
          for (piVar5 = ((int *)GEN_TOP(*piVar4)); piVar11 = (*(int * PTR32 *)(gen_frame + 0x1c)), piVar5 != piVar4; piVar5 = ((int *)GEN_TOP(*piVar5))
              ) {
            if (((int *)GEN_TOP(piVar5[2])) == piVar10) {
              *(byte *)(piVar10 + 0x3e) = *(byte *)(piVar10 + 0x3e) & 0xef;
              if (piVar5 != ((int *)GEN_TOP(*piVar1))) {
                *((int *)GEN_TOP(piVar5[1])) = *piVar5;
                *((int *)GEN_TOP((*piVar5 + 4))) = piVar5[1];
                F_00429760(piVar5,0xc,400);
                piVar1 = piVar1 + 1;
                *piVar1 = *piVar1 - 1;
              }
              *((byte *)GEN_TOP(((int)param_1 + 0x1b0))) = *((byte *)GEN_TOP(((int)param_1 + 0x1b0))) | 1;
              piVar11 = (*(int * PTR32 *)(gen_frame + 0x1c));
              break;
            }
          }
        }
        piVar10 = ((int *)GEN_TOP(*piVar11));
        if (piVar11 != *((int * PTR32 *)GEN_TOP(((int)param_1 + 0xb4)))) {
          *((int * PTR32 *)GEN_TOP(piVar11[1])) = piVar10;
          *((int *)GEN_TOP((*piVar11 + 4))) = piVar11[1];
          F_00429760(piVar11,0xc,400);
          *((int *)GEN_TOP(((int)param_1 + 0xb8))) = *((int *)GEN_TOP(((int)param_1 + 0xb8))) - 1;
        }
        (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar10;
        F_00587ac0(param_1 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x10)));
        (*(uint *)(gen_frame + 0x14)) = 0;
        piVar10 = (*(int * PTR32 *)(gen_frame + 0x10));
        piVar11 = (*(int * PTR32 *)(gen_frame + 0x1c));
      }
      if ((*(uint *)(gen_frame + 0x14)) == 0) {
LAB_005b1312: ;
        if (piVar10 != ((int *)GEN_TOP(0x0))) {
          if ((((*((byte *)GEN_TOP(((int)piVar10 + 0xf9))) & 1) == 0) || ((char)piVar10[0x4f] == '\0')) ||
             ((*((byte *)GEN_TOP(((int)piVar10 + 0xfb))) & 2) != 0)) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar10 + 0x98))))(piVar10 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
          }
          *(undefined1 *)(piVar10 + 0x3d) = (undefined1)(*(uint *)(gen_frame + 0x18));
          *((undefined1 *)GEN_TOP(((int)piVar10 + 0xf5))) = (undefined1)(*(uint *)(gen_frame + 0x14));
          piVar11 = ((int *)GEN_TOP(*piVar11));
          (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar11;
        }
      }
      else {
        if ((*(uint *)(gen_frame + 0x14)) == 1) {
          bVar8 = F_005b0dd0(piVar10 GEN_EDX_ARG);
          if (bVar8 == 0) goto LAB_005b1312;
          if (((*((byte *)GEN_TOP(((int)piVar10 + 0xfb))) & 0x10) == 0) &&
             (((uint)piVar10[0x48] >> 0xd & 1) == 0)) {
            (*(char *)(gen_frame + 0x21)) = '\x01';
            if ((*(byte *)(piVar10 + 0x3e) & 0x10) != 0) {
              F_00587d10(param_1 GEN_EDX_ARG,piVar10);
            }
LAB_005b12de: ;
            F_00590670(param_1 GEN_EDX_ARG,piVar10);
            if ((*(char *)(gen_frame + 0x21)) != '\0') {
              F_00591de0(param_1 GEN_EDX_ARG,piVar10,*((ushort *)GEN_TOP(((int)piVar10 + 0xf6))) & 0xf,0);
            }
          }
          else {
            (*(char *)(gen_frame + 0x21)) = '\0';
            if ((*(byte *)(piVar10 + 0x3e) & 0x10) == 0) goto LAB_005b12de;
          }
          piVar10[0x48] = piVar10[0x48] & 0xffffdfff;
          (*(uint *)(gen_frame + 0x18)) = 3;
          goto LAB_005b1312;
        }
        if (piVar10 != ((int *)GEN_TOP(0x0))) {
          if ((((*((byte *)GEN_TOP(((int)param_1 + 0x1b0))) & 2) != 0) && ((*(char *)(gen_frame + 0x23)) == '\0')) &&
             (bVar8 = F_0057ffd0(param_1 GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)piVar10 + 0x13a)))), bVar8 != 0)) {
            (*(char *)(gen_frame + 0x23)) = '\x01';
          }
          if (((byte)((uint)piVar10[0x3d] >> 0x14) & 0xf) != 5) {
            uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar10 + 0xa0))))(piVar10 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x18)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)));
            (*(uint *)(gen_frame + 0x18)) = uVar9;
          }
          goto LAB_005b1312;
        }
      }
    } while (piVar11 != ((int *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)))));
  }
  F_00594a00(param_1 GEN_EDX_ARG);
  uVar9 = F_0057f790(param_1 GEN_EDX_ARG);
  if (((*((byte *)GEN_TOP(((int)param_1 + 0x1b0))) & 2) != 0) && ((*(char *)(gen_frame + 0x23)) != '\0')) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) + 4))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) GEN_EDX_ARG,((byte *)(gen_frame + 0x0)),0,0,0);
    uVar9 = (uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) >> 5;
    if ((uVar9 & 1) != 0) {
      uVar9 = F_005a0260(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
    *((byte *)GEN_TOP(((int)param_1 + 0x1b0))) = *((byte *)GEN_TOP(((int)param_1 + 0x1b0))) & 0xfd;
  }
  return uVar9;
}

/* ref: FUN_005b13c0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005b13c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5b13c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  undefined1 gen_out[0x4];
  uint * puVar1;
  undefined * this_00;
  code * pcVar2;
  undefined * puVar3;
  int iVar4;
  int * piVar5;
  int * local_18;
  int * local_14;
  
  if (*((char *)GEN_TOP(((int)this + 0x21))) == '\0') {
    if ((*param_2 & 0xf) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_2 + 4);
      if ((iVar4 != 0) && (iVar4 != 1)) {
        return;
      }
    }
    if (*(int *)this != 0) {
      *((int *)GEN_TOP(((int)this + 0x1c))) = iVar4;
      puVar1 = (uint *)(param_2 + 0x10);
      local_18 = ((int *)GEN_TOP(*(uint *)(param_2 + 0x10)));
      if ((*puVar1 & 0xf) == 9) {
        local_14 = ((int *)GEN_TOP(0x0));
      }
      else {
        local_18 = ((int *)GEN_TOP((*puVar1 & 0xf)));
        local_14 = ((int *)GEN_TOP(*(undefined4 *)(param_2 + 0x14)));
      }
      if ((*puVar1 >> 5 & 1) != 0) {
        F_00594f30((gen_out + 0x0) GEN_EDX_FWD,puVar1);
      }
      F_005d44d0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,local_18,local_14);
      puVar3 = REFG(undefined * PTR32, 0x131dbc0);
      this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)this + 0x14)));
      local_14 = (int *)REFG(undefined * PTR32, 0x131dbc0);
      local_18 = ((int *)GEN_TOP(0x5b144d));
      piVar5 = ((int *)GEN_TOP(F_0057f860(this_00 GEN_EDX_ARG,REFG(undefined * PTR32, 0x131dbc0))));
      if (piVar5 == ((int *)GEN_TOP(0x0))) {
        local_14 = piVar5;
        local_18 = piVar5;
        piVar5 = ((int *)GEN_TOP(F_005d46f0(this_00 GEN_EDX_ARG,puVar3,0,0)));
      }
      if (piVar5 != ((int *)GEN_TOP(0x0))) {
        pcVar2 = *((gen_code32 *)GEN_TOP((*piVar5 + 0xc)));
        local_14 = ((int *)GEN_TOP(0x0));
        local_18 = ((int *)GEN_TOP(0xb));
        (*pcVar2)(piVar5,0xb,0);
        *((int * PTR32 *)GEN_TOP(((int)this + 0x14))) = piVar5;
        *((int * PTR32 *)GEN_TOP(((int)this + 0x18))) = piVar5 + 0x60;
        *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *(undefined4 *)this;
      }
      *((undefined1 *)GEN_TOP(((int)this + 0x20))) = 1;
    }
  }
  return;
}

/* ref: FUN_005b1490 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b1490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x5b1490u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  bVar1 = F_005aa560(this GEN_EDX_FWD,param_1,param_2,param_3,(undefined1)param_4);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if ((bVar1 == 0) && (*((char *)GEN_TOP(((int)this + 0x80))) != '\0')) {
    uVar2 = F_005aa300(this GEN_EDX_ARG,1,1,9);
  }
  return uVar2;
}

/* ref: FUN_005b14d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b14d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(ushort * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5b14d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(ushort * param_2 = (ushort *)(uintptr_t)gen_a2;)
  undefined * this_00;
  byte bVar1;
  uint in_EAX = 0;
  uint uVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  
  if ((char)param_2[3] != '\0') {
    return in_EAX;
  }
  uVar2 = F_0056c310(this GEN_EDX_FWD,(uint)*param_2,(uint)param_2[1]);
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  *((uint *)GEN_TOP((param_1 + 0x14))) = *((uint *)GEN_TOP((param_1 + 0x14))) | 0x10000;
  this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x6c))) + 0x1c))) + 4)));
  uVar2 = (uint)param_2[1];
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    uVar3 = F_005792f0(this_00 GEN_EDX_ARG,(uint)*param_2,uVar2);
    uVar2 = 0;
    if (uVar3 != 0) {
      bVar1 = F_0059a3a0(this GEN_EDX_ARG,uVar3,param_2);
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) {
        return uVar2;
      }
      if (*((char *)GEN_TOP(((int)this + 0x81))) == '\0') {
        if ((*((char *)GEN_TOP(((int)this + 0x82))) == '\0') &&
           (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x70))) + 0x1c))))
                              (*((int * PTR32 *)GEN_TOP(((int)this + 0x70))) GEN_EDX_ARG,param_2), (char)uVar2 != '\0')) {
          uVar2 = F_005d47c0(this GEN_EDX_ARG,0);
          return uVar2;
        }
        goto LAB_005b1569;
      }
      goto LAB_005b1576;
    }
  }
  if (*((char *)GEN_TOP(((int)this + 0x81))) == '\0') {
LAB_005b1569: ;
    *((undefined1 *)GEN_TOP(((int)this + 0x81))) = 1;
    return uVar2;
  }
LAB_005b1576: ;
  if (*((char *)GEN_TOP(((int)this + 0x80))) != '\0') {
    uVar2 = F_005aa300(this GEN_EDX_ARG,1,1,9);
  }
  return uVar2;
}

/* ref: FUN_005b15a0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005b15a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5b15a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  if (*((char *)GEN_TOP(((int)this + 0x83))) != '\0') {
    *((undefined1 *)GEN_TOP(((int)this + 0x83))) = 0;
    return;
  }
  if (*((char *)GEN_TOP((param_2 + 6))) == '\x01') {
    if (*((char *)GEN_TOP(((int)this + 0x80))) != '\0') {
      F_005aa300(this GEN_EDX_FWD,1,1,9);
    }
    *((uint *)GEN_TOP((param_1 + 0x14))) = *((uint *)GEN_TOP((param_1 + 0x14))) | 0x10000;
  }
  return;
}

/* ref: Component::GUI2::AtkDragDropManager::vf2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b15f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(uint param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x5b15f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(uint param_4 = (uint)gen_a4;)
  uint uVar1;
  
  uVar1 = param_1 & 0xffff;
  if (uVar1 == 3) {
    if (this[0x83] != (undefined1)0x0) {
      this[0x83] = (undefined1)0x0;
      return 0;
    }
    uVar1 = param_4;
    if (*((char *)GEN_TOP((param_4 + 6))) == '\x01') {
      if (this[0x80] != (undefined1)0x0) {
        F_005aa300(this GEN_EDX_FWD,1,1,9);
      }
      *((uint *)GEN_TOP((param_3 + 0x14))) = *((uint *)GEN_TOP((param_3 + 0x14))) | 0x10000;
      uVar1 = param_3;
    }
  }
  else {
    if (uVar1 == 4) {
      uVar1 = F_005b14d0(this GEN_EDX_ARG,param_3,param_4);
      return uVar1;
    }
    uVar1 = uVar1 - 5;
    if (uVar1 == 0) {
      uVar1 = F_005604e0(this GEN_EDX_ARG,param_3,param_4);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkMessageBoxManager::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b1670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x5b1670u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x34, 12, 4);
  undefined1 AVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  undefined4 * this_01;
  uint uVar4;
  int * this_02;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint * puVar8;
  uint * puVar9;
  bool bVar10;
  
  (*(uint *)(gen_frame + 0x2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x30);
  (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)GEN_TOP(0x0));
  iVar7 = *param_3;
  (*(uint *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 4;
  (*(int *)(gen_frame + 0x14)) = iVar7;
  (*(uint *)(gen_frame + 0x20)) = 0x29;
  uVar4 = F_00404270();
  this_02 = ((int *)GEN_TOP(F_00406bd0(0x10,0,uVar4,0)));
  if (this_02 == ((int *)GEN_TOP(0x0))) {
    this_02 = ((int *)GEN_TOP(0x0));
  }
  else {
    *this_02 = 0;
    this_02[1] = 0;
    this_02[2] = 0;
  }
  ((int * PTR32 *)(gen_frame + 0x24))[0] = this_02;
  if (this_02 != ((int *)GEN_TOP(0x0))) {
    F_005d29e0(this_02 GEN_EDX_ARG,5);
  }
  if (param_3[3] == 0) {
    puVar8 = (uint *)(param_3 + 4);
    if (&(*(uint *)(gen_frame + 0x18)) != puVar8) {
      if (((*(uint *)(gen_frame + 0x18)) >> 5 & 1) != 0) {
        F_005a0260(&(*(uint *)(gen_frame + 0x18)) GEN_EDX_ARG);
      }
      uVar4 = *puVar8;
      uVar5 = uVar4 & 0xf;
      if (uVar5 != 9) {
        (*(uint *)(gen_frame + 0x18)) = uVar5;
        (*(int *)(gen_frame + 0x1c)) = param_3[5];
      }
      if ((uVar4 >> 5 & 1) != 0) {
        F_00594f30(&(*(uint *)(gen_frame + 0x18)) GEN_EDX_ARG,puVar8);
      }
    }
  }
  else {
    if (((*(uint *)(gen_frame + 0x18)) >> 5 & 1) != 0) {
      F_005a0260(&(*(uint *)(gen_frame + 0x18)) GEN_EDX_ARG);
    }
    (*(uint *)(gen_frame + 0x18)) = 1;
  }
  AVar1 = this[0x44];
  bVar10 = (char)AVar1 < '\0';
  if (bVar10) {
    (*(uint *)(gen_frame + 0x0)) = 6;
    (*(char * PTR32 *)(gen_frame + 0x4)) = "";
    puVar8 = &(*(uint *)(gen_frame + 0x0));
  }
  else {
    this_00 = ((undefined *)GEN_TOP(*param_2));
    (*(uint *)(gen_frame + 0x8)) = 6;
    uVar4 = F_00cb0950(this_00 GEN_EDX_ARG,(int)(char)AVar1);
    (*(uint *)(gen_frame + 0xc)) = uVar4;
    puVar8 = &(*(uint *)(gen_frame + 0x8));
  }
  if ((((int * PTR32 *)(gen_frame + 0x24))[0] != ((int *)GEN_TOP(0x0))) && (puVar9 = ((uint *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0x24))[0])), puVar9 != puVar8)) {
    if ((*puVar9 >> 5 & 1) != 0) {
      F_005a0260(puVar9 GEN_EDX_ARG);
    }
    uVar4 = *puVar8;
    uVar5 = uVar4 & 0xf;
    if (uVar5 != 9) {
      uVar2 = puVar8[1];
      *puVar9 = uVar5;
      puVar9[1] = uVar2;
    }
    if ((uVar4 >> 5 & 1) != 0) {
      F_00594f30(puVar9 GEN_EDX_ARG,puVar8);
    }
  }
  if ((bVar10) && (((*(uint *)(gen_frame + 0x0)) >> 5 & 1) != 0)) {
    F_005a0260(&(*(uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  if ((!bVar10) && (((*(uint *)(gen_frame + 0x8)) >> 5 & 1) != 0)) {
    F_005a0260(&(*(uint *)(gen_frame + 0x8)) GEN_EDX_ARG);
  }
  uVar4 = F_00cb0950(((undefined *)GEN_TOP(*param_2)) GEN_EDX_ARG,(int)(char)this[0x45]);
  if (((int * PTR32 *)(gen_frame + 0x24))[0] != ((int *)GEN_TOP(0x0))) {
    iVar7 = *((int * PTR32 *)(gen_frame + 0x24))[0];
    puVar8 = ((uint *)GEN_TOP((iVar7 + 8)));
    if (puVar8 != &(*(uint *)(gen_frame + 0x8))) {
      if ((*puVar8 >> 5 & 1) != 0) {
        F_005a0260(puVar8 GEN_EDX_ARG);
      }
      *puVar8 = 6;
      *((uint *)GEN_TOP((iVar7 + 0xc))) = uVar4;
    }
  }
  if (*param_3 == 2) {
    uVar6 = *(undefined4 *)(this + 0x3c);
    if (((int * PTR32 *)(gen_frame + 0x24))[0] != ((int *)GEN_TOP(0x0))) {
      iVar7 = *((int * PTR32 *)(gen_frame + 0x24))[0];
      puVar8 = ((uint *)GEN_TOP((iVar7 + 0x10)));
      if (puVar8 != &(*(uint *)(gen_frame + 0x8))) {
        if ((*puVar8 >> 5 & 1) != 0) {
          F_005a0260(puVar8 GEN_EDX_ARG);
        }
        *puVar8 = 6;
        *((undefined4 *)GEN_TOP((iVar7 + 0x14))) = uVar6;
      }
    }
    uVar6 = *(undefined4 *)(this + 0x40);
  }
  else {
    uVar6 = *(undefined4 *)(this + 0x34);
    if (((int * PTR32 *)(gen_frame + 0x24))[0] != ((int *)GEN_TOP(0x0))) {
      iVar7 = *((int * PTR32 *)(gen_frame + 0x24))[0];
      puVar8 = ((uint *)GEN_TOP((iVar7 + 0x10)));
      if (puVar8 != &(*(uint *)(gen_frame + 0x8))) {
        if ((*puVar8 >> 5 & 1) != 0) {
          F_005a0260(puVar8 GEN_EDX_ARG);
        }
        *puVar8 = 6;
        *((undefined4 *)GEN_TOP((iVar7 + 0x14))) = uVar6;
      }
    }
    uVar6 = *(undefined4 *)(this + 0x38);
  }
  if (((int * PTR32 *)(gen_frame + 0x24))[0] != ((int *)GEN_TOP(0x0))) {
    iVar7 = *((int * PTR32 *)(gen_frame + 0x24))[0];
    puVar8 = ((uint *)GEN_TOP((iVar7 + 0x18)));
    if (puVar8 != &(*(uint *)(gen_frame + 0x8))) {
      if ((*puVar8 >> 5 & 1) != 0) {
        F_005a0260(puVar8 GEN_EDX_ARG);
      }
      *puVar8 = 6;
      *((undefined4 *)GEN_TOP((iVar7 + 0x1c))) = uVar6;
    }
  }
  iVar7 = param_3[2];
  if (((int * PTR32 *)(gen_frame + 0x24))[0] != ((int *)GEN_TOP(0x0))) {
    iVar3 = *((int * PTR32 *)(gen_frame + 0x24))[0];
    puVar8 = ((uint *)GEN_TOP((iVar3 + 0x20)));
    if (puVar8 != &(*(uint *)(gen_frame + 0x8))) {
      if ((*puVar8 >> 5 & 1) != 0) {
        F_005a0260(puVar8 GEN_EDX_ARG);
      }
      *puVar8 = 4;
      *((int *)GEN_TOP((iVar3 + 0x24))) = iVar7;
    }
  }
  F_005b13c0(*(undefined * PTR32 *)(this + 0x2c) GEN_EDX_ARG,3,&(*(undefined4 *)(gen_frame + 0x10)));
  this[0x46] = (undefined1)0x2;
  iVar7 = 2;
  puVar8 = &(*(uint *)(gen_frame + 0x2c));
  do {
    uVar4 = puVar8[-3];
    puVar9 = puVar8 - 2;
    if ((uVar4 >> 5 & 1) != 0) {
      this_01 = ((undefined4 *)GEN_TOP(*puVar9));
      if (this_01 != ((undefined4 *)GEN_TOP(0x0))) {
        uVar4 = uVar4 & 0xf;
        if (uVar4 == 9) {
          F_00488040(this_01 GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x4)),*this_01,this_01[1]);
          F_00488dc0(this_01 GEN_EDX_ARG);
          uVar4 = F_00406ad0(this_01);
        }
        else if ((uVar4 == 6) || (uVar4 == 7)) {
          uVar4 = F_00406ad0(this_01);
          *puVar9 = 0;
        }
      }
      *puVar9 = 0;
    }
    iVar7 = iVar7 - 1;
    puVar8[-3] = 0;
    puVar8 = puVar9;
  } while (-1 < iVar7);
  return uVar4;
}

/* ref: FUN_005b19a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b19a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5b19a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  undefined * this_00;
  byte bVar5;
  undefined4 in_EAX = 0;
  uint uVar6;
  undefined2 uVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  
  cVar1 = *((char *)GEN_TOP(((int)this + 0x112)));
  uVar6 = CONCAT31((int3)((uint)in_EAX >> 8),cVar1);
  if (cVar1 == '\0') {
    uVar7 = *((undefined2 *)GEN_TOP(((int)this + 0xf4)));
  }
  else {
    uVar7 = *((undefined2 *)GEN_TOP(((int)this + 0xf6)));
  }
  *((undefined2 *)GEN_TOP(((int)this + 0xe8))) = uVar7;
  if (cVar1 == '\0') {
    uVar7 = *((undefined2 *)GEN_TOP(((int)this + 0x10a)));
  }
  else {
    uVar7 = 0;
  }
  *((undefined2 *)GEN_TOP(((int)this + 0xea))) = uVar7;
  if (cVar1 == '\0') {
    uVar7 = 0;
  }
  else {
    uVar7 = *((undefined2 *)GEN_TOP(((int)this + 0x10c)));
  }
  *((undefined2 *)GEN_TOP(((int)this + 0xec))) = uVar7;
  if (cVar1 == '\0') {
    sVar2 = *((short *)GEN_TOP(((int)this + 0xf6)));
  }
  else {
    sVar2 = *((short *)GEN_TOP(((int)this + 0xf4)));
  }
  *((short *)GEN_TOP(((int)this + 0xee))) = sVar2;
  if (cVar1 == '\0') {
    uVar7 = 0;
  }
  else {
    uVar7 = *((undefined2 *)GEN_TOP(((int)this + 0x10a)));
  }
  *((undefined2 *)GEN_TOP(((int)this + 0xf0))) = uVar7;
  if (cVar1 == '\0') {
    uVar7 = *((undefined2 *)GEN_TOP(((int)this + 0x10c)));
  }
  else {
    uVar7 = 0;
  }
  *((undefined2 *)GEN_TOP(((int)this + 0xf2))) = uVar7;
  if (cVar1 == '\0') {
    uVar7 = 1;
  }
  else {
    uVar7 = *((undefined2 *)GEN_TOP(((int)this + 0xf4)));
  }
  *((undefined2 *)GEN_TOP(((int)this + 0xfc))) = uVar7;
  uVar7 = 1;
  if (cVar1 == '\0') {
    uVar7 = *((undefined2 *)GEN_TOP(((int)this + 0xf6)));
  }
  *((undefined2 *)GEN_TOP(((int)this + 0xfe))) = uVar7;
  if ((cVar1 != '\0') && (*((short *)GEN_TOP(((int)this + 0xf4))) == 1)) {
    uVar6 = 0;
    *((undefined2 *)GEN_TOP(((int)this + 0xfe))) = 0;
  }
  iVar4 = *((int *)GEN_TOP(((int)this + 0x84)));
  uVar8 = (sVar2 * 2 + *((short *)GEN_TOP(((int)this + 0xf8)))) - 1;
  if (iVar4 != 0) {
    iVar10 = *((int *)GEN_TOP((iVar4 + 0x70)));
    uVar6 = 0;
    if (iVar10 != 0) {
      uVar9 = *((uint *)GEN_TOP((iVar10 + 4)));
      uVar6 = CONCAT31((int3)((uint)iVar10 >> 8),10000 < uVar9);
      if (10000 < uVar9) {
        uVar6 = uVar9 * -0x2e48e8a7;
        uVar9 = uVar9 / 10000;
      }
      goto LAB_005b1ac7;
    }
  }
  uVar9 = 0;
LAB_005b1ac7: ;
  iVar10 = *((int *)GEN_TOP(((int)this + 0xa0)));
  uVar6 = uVar6 & 0xffffff00;
  if (*((char *)GEN_TOP(((int)this + 0x110))) != '\0') {
    while ((int)*((short *)GEN_TOP((iVar10 + 10))) != uVar9) {
      bVar5 = (char)uVar6 + 1;
      uVar6 = CONCAT31((int3)(uVar6 >> 8),bVar5);
      iVar10 = iVar10 + 0xc;
      if (*((byte *)GEN_TOP(((int)this + 0x110))) <= bVar5) {
        return uVar6;
      }
    }
    uVar3 = *((ushort *)GEN_TOP((iVar10 + 8)));
    uVar6 = (uint)uVar3;
    if ((short)uVar3 < (short)uVar8) {
      if (uVar3 != 0) {
        if ((iVar4 == 0) || (*((int *)GEN_TOP((iVar4 + 0x70))) == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = *((uint *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x70))) + 4)));
          if (10000 < uVar6) {
            uVar6 = uVar6 / 10000;
          }
        }
        F_00590210(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,uVar6,1000);
      }
      *((ushort *)GEN_TOP((iVar10 + 8))) = uVar8;
      if ((*((int *)GEN_TOP(((int)this + 0x84))) == 0) ||
         (iVar4 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x84))) + 0x70))), iVar4 == 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = *((uint *)GEN_TOP((iVar4 + 4)));
        if (10000 < uVar6) {
          uVar6 = uVar6 / 10000;
        }
      }
      uVar6 = F_005aa820(this GEN_EDX_ARG,uVar6,(uint)uVar8);
      *((uint *)GEN_TOP((iVar10 + 4))) = uVar6;
      uVar6 = 0;
      uVar9 = 0;
      if (0 < *((short *)GEN_TOP((iVar10 + 8)))) {
        do {
          iVar4 = *((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((iVar10 + 4))) + 0x8c + uVar6 * 0x90))) + 0x6c)));
          if ((iVar4 != 0) && (this_00 = *((undefined * PTR32 *)GEN_TOP((iVar4 + 0x1c))), this_00 != ((undefined *)GEN_TOP(0x0)))) {
            F_0059ba30(this_00 GEN_EDX_ARG,3,1,0,0);
          }
          uVar9 = uVar9 + 1;
          uVar6 = uVar9 & 0xffff;
        } while ((int)uVar6 < (int)*((short *)GEN_TOP((iVar10 + 8))));
      }
    }
  }
  return uVar6;
}

/* ref: FUN_005b1be0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b1be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x5b1be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int iVar1;
  byte bVar2;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  
  if ((*((char *)GEN_TOP(((int)this + 0x11a))) == '\0') && (*((char *)GEN_TOP(((int)this + 0x117))) == '\0')) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_2)) + 0x28))))(((int *)GEN_TOP(*param_2)) GEN_EDX_FWD);
    iVar1 = REFG(int, 0x1379860);
    bVar2 = F_005aa560(REFG(int, 0x1379860) + 0x3c GEN_EDX_ARG,param_2,*((undefined4 *)GEN_TOP(((int)this + 0x90))),
                         *((undefined4 *)GEN_TOP(((int)this + 0xe4))),0);
    in_EAX = CONCAT31(extraout_var,bVar2);
    if ((bVar2 == 0) && (*((char *)GEN_TOP((iVar1 + 0xbc))) != '\0')) {
      in_EAX = F_005aa300(iVar1 + 0x3c GEN_EDX_ARG,1,1,9);
    }
    *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = 0xffffffff;
  }
  return in_EAX;
}

/* ref: FUN_005b1c50 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b1c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5b1c50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  uint uVar2;
  
  uVar2 = F_0055d920(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1);
  if ((((uVar2 != 0) && (999 < *((ushort *)GEN_TOP((uVar2 + 0x18))))) &&
      (iVar1 = *((int *)GEN_TOP((uVar2 + 0x8c))), iVar1 != 0)) &&
     ((((*((byte *)GEN_TOP((iVar1 + 0x60))) & 1) != 0 && ((*((byte *)GEN_TOP((iVar1 + 0x60))) & 4) != 0)) &&
      ((*((char *)GEN_TOP((iVar1 + 0x1c))) == '\x01' && (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0xc))) + 0xf))) == '\x0e'))))))
  {
    *((int *)GEN_TOP(((int)this + 0x84))) = iVar1;
    *((undefined2 *)GEN_TOP(((int)this + 0x10a))) = *((undefined2 *)GEN_TOP((iVar1 + 0x204)));
    *((undefined2 *)GEN_TOP(((int)this + 0x10c))) = *((undefined2 *)GEN_TOP((iVar1 + 0x206)));
    F_005b19a0(this GEN_EDX_ARG);
    return 1;
  }
  return 0;
}

/* ref: FUN_005b1cd0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005b1cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5b1cd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  
  sVar3 = 0;
  sVar4 = 0;
  if ((this != ((undefined *)GEN_TOP(0x0))) && (iVar1 = *((int *)GEN_TOP(((int)this + 0x70))), iVar1 != 0)) {
    sVar3 = *((short *)GEN_TOP((iVar1 + 0x7c)));
    sVar4 = *((short *)GEN_TOP((iVar1 + 0x7e)));
  }
  if ((sVar3 != (short)param_1) || (sVar4 != (short)param_2)) {
    if (this != ((undefined *)GEN_TOP(0x0))) {
      iVar1 = *((int *)GEN_TOP(((int)this + 0x70)));
      if (iVar1 != 0) {
        *((short *)GEN_TOP((iVar1 + 0x7c))) = (short)param_1;
        *((short *)GEN_TOP((iVar1 + 0x7e))) = (short)param_2;
      }
      uVar2 = *((uint *)GEN_TOP(((int)this + 0x70)));
      if (uVar2 != 0) {
        F_0057f1a0(uVar2,(uint)*((ushort *)GEN_TOP((uVar2 + 0x7c))),(uint)*((ushort *)GEN_TOP((uVar2 + 0x7e))),param_1,
                     param_2,1);
      }
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 100))))(this GEN_EDX_ARG,1);
    if (((((*((byte *)GEN_TOP(((int)this + 0x60))) & 1) != 0) && ((*((byte *)GEN_TOP(((int)this + 0x60))) & 4) != 0)) &&
        (*((char *)GEN_TOP(((int)this + 0x1c))) == '\x01')) &&
       (*((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0xf))) == '\t')) {
      F_005b19a0(this GEN_EDX_ARG);
      F_0058d980(this GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)this + 0xac))));
    }
  }
  return;
}

/* ref: FUN_005b1d70 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005b1d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5b1d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *((short *)GEN_TOP(((int)this + 0xf4))) = (short)param_1;
  *((short *)GEN_TOP(((int)this + 0xf8))) = *((short *)GEN_TOP(((int)this + 0xf6))) * (short)param_1;
  F_005b19a0(this GEN_EDX_FWD);
  return;
}

/* ref: FUN_005b1da0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005b1da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5b1da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *((short *)GEN_TOP(((int)this + 0xf6))) = (short)param_1;
  *((short *)GEN_TOP(((int)this + 0xf8))) = *((short *)GEN_TOP(((int)this + 0xf4))) * (short)param_1;
  F_005b19a0(this GEN_EDX_FWD);
  return;
}

/* ref: FUN_005b1dd0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b1dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x5b1dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL(0x44, 12);
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined * pvVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar4 = F_005615f0(this GEN_EDX_FWD);
  uVar5 = (*(uint *)(gen_frame + 0x3b));
  if ((char)uVar4 == '\0') {
    *((uint *)GEN_TOP((param_3 + 0x14))) = *((uint *)GEN_TOP((param_3 + 0x14))) | 0x10000;
    return 0;
  }
  iVar1 = *param_1;
  if ((((iVar1 == 9) || (iVar1 == 10)) || (iVar1 == 7)) || ((*(char *)(gen_frame + 0x3f)) = '\0', iVar1 == 8)) {
    (*(char *)(gen_frame + 0x3f)) = '\x01';
  }
  iVar1 = *((int *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x18)));
  if (*((short *)GEN_TOP((iVar1 + 0xc68))) == 0) {
    (*(uint *)(gen_frame + 0x34)) = *((uint *)GEN_TOP((iVar1 + 0xc58)));
  }
  else {
    (*(uint *)(gen_frame + 0x34)) = *((uint *)GEN_TOP((iVar1 + 0x50 + *((short *)GEN_TOP((iVar1 + 0xc68))) * 0xc)));
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0xcc)));
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x3b)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x3b)) = uVar5 & 0xffffff00;
  if (-1 < iVar1) {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x58))))(this GEN_EDX_ARG,iVar1);
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x3b)) + 0)) = (char)uVar5;
    (*(uint *)(gen_frame + 0x3b)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x3b)), 1, 3),(char)uVar5);
  }
  bVar3 = F_005aaa80(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,(*(uint *)(gen_frame + 0x3b)));
  if (bVar3 == 0) {
    return 0;
  }
  F_00589700(this GEN_EDX_ARG,1);
  *((undefined4 *)GEN_TOP(((int)this + 0xd8))) = *((undefined4 *)GEN_TOP(((int)this + 0xcc)));
  pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x50))))(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0xcc))))));
  iVar2 = *((int *)GEN_TOP(((int)this + 0xd8)));
  if ((iVar1 != iVar2) && (-1 < iVar2)) {
    if ((param_4 != ((undefined *)GEN_TOP(0x0))) &&
       (((*((byte *)GEN_TOP(((int)param_4 + 0x220))) & 8) != 0 && (pvVar6 != ((undefined *)GEN_TOP(0x0)))))) {
      iVar1 = *((int *)GEN_TOP(((int)param_4 + 0x1dc)));
      if (iVar1 == 0) {
        *((undefined4 *)GEN_TOP(((int)pvVar6 + 0x1dc))) = 0;
      }
      else {
        if (*((int *)GEN_TOP(((int)pvVar6 + 0x1fc))) != iVar2) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x6c))))(this GEN_EDX_ARG,iVar2,1,0);
        }
        uVar5 = F_00568410(*((undefined * PTR32 *)GEN_TOP((iVar1 + 0x70))) GEN_EDX_ARG);
        F_0056d860(pvVar6 GEN_EDX_ARG,uVar5);
      }
    }
    (*(undefined1 *)(gen_frame + 0x1e)) = (char)param_1[3];
    (*(undefined1 *)(gen_frame + 0x1f)) = *((undefined1 *)GEN_TOP(((int)param_1 + 0xd)));
    if ((param_4 != ((undefined *)GEN_TOP(0x0))) && (param_4 == pvVar6)) {
      if (*((int *)GEN_TOP(((int)this + 200))) != *((int *)GEN_TOP(((int)this + 0xd8)))) {
        *((int *)GEN_TOP(((int)this + 200))) = *((int *)GEN_TOP(((int)this + 0xd8)));
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x88))))(this GEN_EDX_ARG,0x20,param_3,((undefined1 *)(gen_frame + 0x18)),param_2,0);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x88))))
                (this GEN_EDX_ARG,0x1f,param_3,((undefined1 *)(gen_frame + 0x18)),*((undefined4 *)GEN_TOP(((int)this + 0xd8))),0);
    }
    pvVar6 = REFG(void * PTR32, 0x1379860);
    uVar5 = F_0055b9e0(REFG(void * PTR32, 0x1379860) GEN_EDX_ARG);
    if ((*(uint *)(gen_frame + 0x34)) == uVar5) {
      uVar7 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar6 + 0x14))) + 0xcc)));
      uVar8 = 0;
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x3c))))(this GEN_EDX_ARG);
      F_0059b300(pvVar6 GEN_EDX_ARG,uVar5,uVar7,uVar8);
      pvVar6 = REFG(void * PTR32, 0x1379860);
    }
    if ((*(char *)(gen_frame + 0x3f)) != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar6 + 0x38))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar6 + 0x38))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)),0);
      F_005a2670(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x88))))
              (this GEN_EDX_ARG,0x24,param_3,((undefined1 *)(gen_frame + 0x18)),*((undefined4 *)GEN_TOP(((int)this + 0xd8))),1);
    if (((*((char *)GEN_TOP(((int)this + 0x122))) != '\0') && (-1 < *((int *)GEN_TOP(((int)this + 0xd0))))) &&
       (iVar1 = *((int *)GEN_TOP(((int)this + 0xd8))), iVar1 != *((int *)GEN_TOP(((int)this + 0xd0))))) {
      (*(int *)(gen_frame + 0x4)) = param_1[1];
      iVar2 = param_1[3];
      (*(int *)(gen_frame + 0x0)) = *param_1;
      (*(int *)(gen_frame + 0xc)) = iVar2;
      (*(int *)(gen_frame + 0x8)) = param_1[2];
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x88))))(this GEN_EDX_ARG,0x28,param_3,&(*(int *)(gen_frame + 0x0)),iVar1,1);
      if (uVar5 != 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0xd0))) = *((undefined4 *)GEN_TOP(((int)this + 0xd8)));
        F_005623b0(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0xd8))));
      }
    }
  }
  return 1;
}

/* ref: FUN_005b2060 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b2060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5b2060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint local_8;
  
  if ((*((short *)GEN_TOP(((int)this + 0x10e))) != 0) ||
     (uVar4 = (uint)*((short *)GEN_TOP(((int)this + 0xf6))), uVar4 != (param_1 & 0xffff))) {
    iVar1 = *((int *)GEN_TOP(((int)this + 0x84)));
    uVar4 = 0;
    *((undefined2 *)GEN_TOP(((int)this + 0x10e))) = 0;
    if ((iVar1 != 0) && (*((int *)GEN_TOP((iVar1 + 0x70))) != 0)) {
      uVar4 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x70))) + 0x7e)));
    }
    iVar2 = *((int *)GEN_TOP(((int)this + 0x70)));
    local_8 = 0;
    if (iVar2 != 0) {
      local_8 = (uint)*((ushort *)GEN_TOP((iVar2 + 0x7c)));
    }
    uVar4 = (int)((ulonglong)*((ushort *)GEN_TOP(((int)this + 0x104))) %
                 (ulonglong)(longlong)(int)(uint)*((ushort *)GEN_TOP((iVar1 + 0x206)))) + uVar4 * param_1;
    if (iVar2 != 0) {
      *((undefined2 *)GEN_TOP((iVar2 + 0x7c))) = (undefined2)local_8;
      *((short *)GEN_TOP((iVar2 + 0x7e))) = (short)uVar4;
    }
    uVar3 = *((uint *)GEN_TOP(((int)this + 0x70)));
    if (uVar3 != 0) {
      F_0057f1a0(uVar3,(uint)*((ushort *)GEN_TOP((uVar3 + 0x7c))),(uint)*((ushort *)GEN_TOP((uVar3 + 0x7e))),local_8,
                   uVar4 & 0xffff,1);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 100))))(this GEN_EDX_ARG,1);
    F_005b19a0(this GEN_EDX_ARG);
    uVar4 = F_0058d980(this GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)this + 0xac))));
  }
  return uVar4;
}

/* ref: FUN_005b2130 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005b2130(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b2130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  *((char *)GEN_TOP(((int)param_1 + 0x115))) = param_2;
  if ((param_2 != '\0') && (*((short *)GEN_TOP(((int)param_1 + 0x10e))) != 0)) {
    *((undefined2 *)GEN_TOP(((int)param_1 + 0x10e))) = 0;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 100))))(param_1 GEN_EDX_FWD,1);
    if (((*(byte *)(param_1 + 0x18) & 1) != 0) &&
       ((((*(byte *)(param_1 + 0x18) & 4) != 0 && ((char)param_1[7] == '\x01')) &&
        (*((char *)GEN_TOP((param_1[3] + 0xf))) == '\t')))) {
      F_005b19a0(param_1 GEN_EDX_ARG);
      if (0 < param_1[0x2b]) {
        F_0058d980(param_1 GEN_EDX_ARG,(uint)*(ushort *)(param_1 + 0x2b));
      }
    }
    if (*((short *)GEN_TOP(((int)param_1 + 0xfa))) != *((short *)GEN_TOP(((int)param_1 + 0xf6)))) {
      *((short *)GEN_TOP(((int)param_1 + 0xfa))) = *((short *)GEN_TOP(((int)param_1 + 0xf6)));
      if (param_1[0x1c] != 0) {
        *(undefined2 *)(param_1 + 0x41) = *((undefined2 *)GEN_TOP((param_1[0x1c] + 0x7e)));
        F_0056cf60(param_1 GEN_EDX_ARG);
        return;
      }
      *(undefined2 *)(param_1 + 0x41) = 0;
      F_0056cf60(param_1 GEN_EDX_ARG);
    }
  }
  return;
}

/* ref: Component::GUI2::AtkComponentTreeList::vf2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b21f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5b21f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  code * pcVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  int * PTR32 * ppiVar8;
  undefined3 extraout_var = 0;
  ushort uVar9;
  float10 fVar10;
  
  uVar3 = (*(uint *)&gen_args[2]);
  (*(int * PTR32 *)(gen_frame + 0x0)) = param_1;
  uVar6 = (*(uint *)&gen_args[0]) & 0xffff;
  uVar7 = uVar6 - 3;
  if (uVar7 < 0x44) {
    uVar7 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x5b26d0) + uVar6 + 1)));
    switch((unsigned int)(uintptr_t)(uVar6)) {
    case 3: ;
      if (*((char *)GEN_TOP(((int)param_1 + 0x11f))) != '\0') {
        uVar7 = F_00589700(param_1 GEN_EDX_FWD,0);
        if (param_1[0x36] < 0) {
          uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x44))))(param_1 GEN_EDX_ARG,(uint)*(*(ushort * PTR32 *)&gen_args[3]),(uint)(*(ushort * PTR32 *)&gen_args[3])[1]);
          return uVar7;
        }
      }
      break;
    case 4: ;
      if ((*(uint *)&gen_args[1]) == 1) {
        uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x88))))(param_1 GEN_EDX_ARG,0x1e,(*(uint *)&gen_args[2]),(*(ushort * PTR32 *)&gen_args[3]),param_1[0x36],1);
        return uVar7;
      }
      param_1[0x31] = -1;
      return uVar7;
    case 5: ;
      if (((*(uint *)&gen_args[1]) == 4) && (uVar7 = REFG(undefined4, 0x1379860), *((char *)GEN_TOP((REFG(undefined4, 0x1379860) + 0x21d))) != '\0')) {
        uVar7 = F_00589700(param_1 GEN_EDX_ARG,0);
        return uVar7;
      }
      break;
    case 6: ;
      if ((((char)param_1[0x45] != '\0') && (*((char *)GEN_TOP((REFG(undefined4, 0x1379860) + 0x21d))) == '\0')) &&
         (*((char *)GEN_TOP(((int)param_1 + 0x11f))) == '\0')) {
        uVar7 = F_005615f0(param_1 GEN_EDX_ARG);
        if ((((char)uVar7 != '\0') && (2 < (uint)param_1[0x57])) &&
           (iVar1 = param_1[0x33], -1 < iVar1)) {
          uVar5 = F_0057c130(param_1 GEN_EDX_ARG,iVar1,0);
          uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x68))))(param_1 GEN_EDX_ARG,iVar1,1);
          if (((char)uVar7 == '\0') || ((int)((uint)uVar5 - param_1[0x2e]) < 0)) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x84))))(param_1 GEN_EDX_ARG,param_1[0x33],1);
            F_00589700(param_1 GEN_EDX_ARG,1);
            iVar1 = param_1[0x1c];
            if (iVar1 != 0) {
              F_0057f0d0(param_1 + 1 GEN_EDX_ARG,iVar1,*((undefined4 *)GEN_TOP((iVar1 + 8))),0);
            }
          }
        }
      }
      param_1[0x32] = param_1[0x36];
      param_1[0x51] = param_1[0x52];
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x88))))(param_1 GEN_EDX_ARG,0x1f,(*(uint *)&gen_args[2]),(*(ushort * PTR32 *)&gen_args[3]),param_1[0x36],1);
      return uVar7;
    case 7: ;
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x88))))(param_1 GEN_EDX_ARG,0x20,(*(uint *)&gen_args[2]),(*(ushort * PTR32 *)&gen_args[3]),param_1[0x32],1);
      param_1[0x32] = -1;
      param_1[0x51] = 0;
      return uVar7;
    case 8: ;
      uVar7 = F_00589700(param_1 GEN_EDX_ARG,0);
      if (((char)param_1[0x45] != '\0') && (uVar7 = param_1[0x22], *((char *)GEN_TOP((uVar7 + 0xc9))) == '\0'))
      {
        uVar5 = *(ushort *)(param_1 + 0x55);
        uVar9 = (*(ushort * PTR32 *)&gen_args[3])[2];
        iVar1 = param_1[0x22];
        (*(uint *)&gen_args[1]) = (uint)uVar5;
        (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x0));
        uVar9 = ((ushort)((short)uVar9 < 1) * 2 - 1) * *((short *)GEN_TOP((iVar1 + 0xc2))) +
                (short)param_1[0x2e];
        (*(uint *)&gen_args[0]) = (uint)uVar9;
        ppiVar8 = (int * PTR32 *)&(*(uint *)&gen_args[0]);
        if ((short)uVar5 <= (short)uVar9) {
          ppiVar8 = (int * PTR32 *)&(*(uint *)&gen_args[1]);
        }
        if (*(short *)ppiVar8 < 1) {
          ppiVar8 = &(*(int * PTR32 *)(gen_frame + 0x0));
        }
        F_00562160(param_1 GEN_EDX_ARG,(int)*(short *)ppiVar8);
        fVar10 = (float10)param_1[0x55];
        if (param_1[0x55] < 0) {
          fVar10 = GEN_X87(fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110));
        }
        F_00574c80(param_1[0x22] GEN_EDX_ARG,
                     (int)(((float10)param_1[0x2e] / fVar10) *
                          (float10)*((int *)GEN_TOP((param_1[0x22] + 0xa8)))),1,1);
LAB_005b233d: ;
        *((uint *)GEN_TOP(((*(uint *)&gen_args[2]) + 0x14))) = *((uint *)GEN_TOP(((*(uint *)&gen_args[2]) + 0x14))) | 0x10000;
        return (*(uint *)&gen_args[2]);
      }
      break;
    case 0xc: ;
      if ((char)param_1[100] != '\0') goto LAB_005b233d;
      if ((param_1[0x52] == 0) && (-1 < param_1[0x33])) {
        uVar7 = F_0056dc60(param_1 GEN_EDX_ARG,param_1[0x33]);
        param_1[0x52] = uVar7;
      }
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x50))))(param_1 GEN_EDX_ARG,param_1[0x33]);
      uVar3 = (*(uint *)&gen_args[2]);
      bVar4 = F_005b1dd0(param_1 GEN_EDX_ARG,(*(ushort * PTR32 *)&gen_args[3]),param_1[0x53],(*(uint *)&gen_args[2]),uVar7);
      uVar7 = CONCAT31(extraout_var,bVar4);
      if (bVar4 != 0) {
        *((uint *)GEN_TOP((uVar3 + 0x14))) = *((uint *)GEN_TOP((uVar3 + 0x14))) | 0x10000;
        param_1[0x36] = param_1[0x33];
        uVar7 = F_0056dc60(param_1 GEN_EDX_ARG,param_1[0x33]);
        param_1[0x52] = uVar7;
        return uVar7;
      }
      break;
    case 0x11: ;
      uVar7 = F_0059c680(param_1 GEN_EDX_ARG,(*(uint *)&gen_args[2]),(*(ushort * PTR32 *)&gen_args[3]));
      break;
    case 0x12: ;
      uVar7 = F_0059ec30(param_1 GEN_EDX_ARG,(*(uint *)&gen_args[2]),(*(ushort * PTR32 *)&gen_args[3]));
      return uVar7;
    case 0x16: ;
      pcVar2 = *((gen_code32 *)GEN_TOP((*param_1 + 0x88)));
      param_1[0x31] = param_1[0x36];
      uVar7 = (*pcVar2)(param_1,0x1d,(*(uint *)&gen_args[2]),(*(ushort * PTR32 *)&gen_args[3]),param_1[0x36],1);
      return uVar7;
    case 0x17: ;
      uVar7 = F_00595370(param_1 GEN_EDX_ARG,(*(uint *)&gen_args[2]),(*(ushort * PTR32 *)&gen_args[3]));
      return uVar7;
    case 0x19: ;
      (*(uint *)&gen_args[0]) = (uint)gen_fl2bits(((float)GEN_TOF(((float10)*((int *)GEN_TOP((param_1[0x22] + 0xb0))) /
                                         (float10)*((int *)GEN_TOP((param_1[0x22] + 0xa8)))))));
      fVar10 = (float10)param_1[0x55];
      if (param_1[0x55] < 0) {
        fVar10 = GEN_X87(fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110));
      }
      uVar7 = F_00562160(param_1 GEN_EDX_ARG,(int)(short)(int)(fVar10 * ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[0]))))));
      return uVar7;
    case 0x22: ;
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x88))))(param_1 GEN_EDX_ARG,0x22,(*(uint *)&gen_args[2]),(*(ushort * PTR32 *)&gen_args[3]),param_1[0x36],1);
      return uVar7;
    case 0x46: ;
      if ((char)param_1[0x49] == '\0') {
        if ((*(uint *)&gen_args[1]) != 2) {
          if (((((param_1[0x56] != 0) && (*((char *)GEN_TOP(((int)param_1 + 0x11f))) == '\0')) &&
               (*((int *)GEN_TOP(((*(ushort * PTR32 *)&gen_args[3]) + 4))) == 0)) && ((param_1[0x36] < 0 && (param_1[0x2e] != 0)))) &&
             ((param_1[0x33] == -2 && (0 < param_1[0x2c])))) {
            uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x74))))(param_1 GEN_EDX_ARG,param_1[0x2c],0);
            return uVar7;
          }
          uVar7 = F_0059c320(param_1 GEN_EDX_ARG,(*(uint *)&gen_args[2]),(*(ushort * PTR32 *)&gen_args[3]));
          *((uint *)GEN_TOP((uVar3 + 0x14))) = *((uint *)GEN_TOP((uVar3 + 0x14))) | 0x10000;
          return uVar7;
        }
        goto LAB_005b233d;
      }
    }
  }
  return uVar7;
}

/* ref: Component::GUI2::AtkComponentDropDownList::vf8 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005b2720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5b2720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int iVar2;
  int * piVar3;
  code * pcVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 uVar7;
  
  if ((this != ((undefined *)GEN_TOP(0x0))) && (*(int *)(this + 0x70) != 0)) {
    puVar1 = ((uint *)GEN_TOP((*(int *)(this + 0x70) + 0x84)));
    *puVar1 = *puVar1 & 0xfdffffff;
  }
  if ((*(int *)(this + 0x84) != 0) && (iVar2 = *((int *)GEN_TOP((*(int *)(this + 0x84) + 0x70))), iVar2 != 0))
  {
    if (*((int *)GEN_TOP((iVar2 + 0x80))) == 0) {
      uVar7 = 0;
      uVar5 = F_00404270();
      puVar6 = ((undefined4 *)GEN_TOP(F_00406bd0(4,0,uVar5,uVar7)));
      if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) {
        puVar6 = ((undefined4 *)GEN_TOP(0x0));
      }
      else {
        *puVar6 = 0;
      }
      *((undefined4 * PTR32 *)GEN_TOP((iVar2 + 0x80))) = puVar6;
    }
    F_00565340(*((undefined4 *)GEN_TOP((iVar2 + 0x80))) GEN_EDX_ARG,0x16,2,0,iVar2,this,0);
  }
  if ((*(int *)(this + 0x84) != 0) && (iVar2 = *((int *)GEN_TOP((*(int *)(this + 0x84) + 0x70))), iVar2 != 0))
  {
    if (*((int *)GEN_TOP((iVar2 + 0x80))) == 0) {
      uVar7 = 0;
      uVar5 = F_00404270();
      puVar6 = ((undefined4 *)GEN_TOP(F_00406bd0(4,0,uVar5,uVar7)));
      if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) {
        puVar6 = ((undefined4 *)GEN_TOP(0x0));
      }
      else {
        *puVar6 = 0;
      }
      *((undefined4 * PTR32 *)GEN_TOP((iVar2 + 0x80))) = puVar6;
    }
    F_00565340(*((undefined4 *)GEN_TOP((iVar2 + 0x80))) GEN_EDX_ARG,0x17,2,0,iVar2,this,0);
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x84) + 0x38))))(*(int * PTR32 *)(this + 0x84) GEN_EDX_ARG);
  *(uint *)(this + 0x68) = uVar5;
  if ((*(int *)(this + 0x88) != 0) && (iVar2 = *((int *)GEN_TOP((*(int *)(this + 0x88) + 0x70))), iVar2 != 0))
  {
    if (*((int *)GEN_TOP((iVar2 + 0x80))) == 0) {
      uVar7 = 0;
      uVar5 = F_00404270();
      puVar6 = ((undefined4 *)GEN_TOP(F_00406bd0(4,0,uVar5,uVar7)));
      if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) {
        puVar6 = ((undefined4 *)GEN_TOP(0x0));
      }
      else {
        *puVar6 = 0;
      }
      *((undefined4 * PTR32 *)GEN_TOP((iVar2 + 0x80))) = puVar6;
    }
    F_00565340(*((undefined4 *)GEN_TOP((iVar2 + 0x80))) GEN_EDX_ARG,0x1d,1,0,iVar2,this,0);
  }
  if ((*(int *)(this + 0x88) != 0) && (iVar2 = *((int *)GEN_TOP((*(int *)(this + 0x88) + 0x70))), iVar2 != 0))
  {
    if (*((int *)GEN_TOP((iVar2 + 0x80))) == 0) {
      uVar7 = 0;
      uVar5 = F_00404270();
      puVar6 = ((undefined4 *)GEN_TOP(F_00406bd0(4,0,uVar5,uVar7)));
      if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) {
        puVar6 = ((undefined4 *)GEN_TOP(0x0));
      }
      else {
        *puVar6 = 0;
      }
      *((undefined4 * PTR32 *)GEN_TOP((iVar2 + 0x80))) = puVar6;
    }
    F_00565340(*((undefined4 *)GEN_TOP((iVar2 + 0x80))) GEN_EDX_ARG,0x21,1,0,iVar2,this,0);
  }
  if ((*(int *)(this + 0x88) != 0) && (iVar2 = *((int *)GEN_TOP((*(int *)(this + 0x88) + 0x70))), iVar2 != 0))
  {
    if (*((int *)GEN_TOP((iVar2 + 0x80))) == 0) {
      uVar7 = 0;
      uVar5 = F_00404270();
      puVar6 = ((undefined4 *)GEN_TOP(F_00406bd0(4,0,uVar5,uVar7)));
      if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) {
        puVar6 = ((undefined4 *)GEN_TOP(0x0));
      }
      else {
        *puVar6 = 0;
      }
      *((undefined4 * PTR32 *)GEN_TOP((iVar2 + 0x80))) = puVar6;
    }
    F_00565340(*((undefined4 *)GEN_TOP((iVar2 + 0x80))) GEN_EDX_ARG,0x22,1,0,iVar2,this,0);
  }
  if ((*(int *)(this + 0x88) != 0) && (iVar2 = *((int *)GEN_TOP((*(int *)(this + 0x88) + 0x70))), iVar2 != 0))
  {
    if (*((int *)GEN_TOP((iVar2 + 0x80))) == 0) {
      uVar7 = 0;
      uVar5 = F_00404270();
      puVar6 = ((undefined4 *)GEN_TOP(F_00406bd0(4,0,uVar5,uVar7)));
      if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) {
        puVar6 = ((undefined4 *)GEN_TOP(0x0));
      }
      else {
        *puVar6 = 0;
      }
      *((undefined4 * PTR32 *)GEN_TOP((iVar2 + 0x80))) = puVar6;
    }
    F_00565340(*((undefined4 *)GEN_TOP((iVar2 + 0x80))) GEN_EDX_ARG,0x23,1,0,iVar2,this,0);
  }
  if ((*(int *)(this + 0x88) != 0) && (iVar2 = *((int *)GEN_TOP((*(int *)(this + 0x88) + 0x70))), iVar2 != 0))
  {
    if (*((int *)GEN_TOP((iVar2 + 0x80))) == 0) {
      uVar7 = 0;
      uVar5 = F_00404270();
      puVar6 = ((undefined4 *)GEN_TOP(F_00406bd0(4,0,uVar5,uVar7)));
      if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) {
        puVar6 = ((undefined4 *)GEN_TOP(0x0));
      }
      else {
        *puVar6 = 0;
      }
      *((undefined4 * PTR32 *)GEN_TOP((iVar2 + 0x80))) = puVar6;
    }
    F_00565340(*((undefined4 *)GEN_TOP((iVar2 + 0x80))) GEN_EDX_ARG,0xc,1,0,iVar2,this,0);
  }
  if ((*(int *)(this + 0x88) != 0) && (iVar2 = *((int *)GEN_TOP((*(int *)(this + 0x88) + 0x70))), iVar2 != 0))
  {
    if (*((int *)GEN_TOP((iVar2 + 0x80))) == 0) {
      uVar7 = 0;
      uVar5 = F_00404270();
      puVar6 = ((undefined4 *)GEN_TOP(F_00406bd0(4,0,uVar5,uVar7)));
      if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) {
        puVar6 = ((undefined4 *)GEN_TOP(0x0));
      }
      else {
        *puVar6 = 0;
      }
      *((undefined4 * PTR32 *)GEN_TOP((iVar2 + 0x80))) = puVar6;
    }
    F_00565340(*((undefined4 *)GEN_TOP((iVar2 + 0x80))) GEN_EDX_ARG,0x12,1,0,iVar2,this,0);
  }
  if ((*(int *)(this + 0x88) != 0) && (iVar2 = *((int *)GEN_TOP((*(int *)(this + 0x88) + 0x70))), iVar2 != 0))
  {
    if (*((int *)GEN_TOP((iVar2 + 0x80))) == 0) {
      uVar7 = 0;
      uVar5 = F_00404270();
      puVar6 = ((undefined4 *)GEN_TOP(F_00406bd0(4,0,uVar5,uVar7)));
      if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) {
        puVar6 = ((undefined4 *)GEN_TOP(0x0));
      }
      else {
        *puVar6 = 0;
      }
      *((undefined4 * PTR32 *)GEN_TOP((iVar2 + 0x80))) = puVar6;
    }
    F_00565340(*((undefined4 *)GEN_TOP((iVar2 + 0x80))) GEN_EDX_ARG,0x11,1,0,iVar2,this,0);
  }
  piVar3 = *(int * PTR32 *)(this + 0x88);
  pcVar4 = *((gen_code32 *)GEN_TOP((*piVar3 + 0x28)));
  *((undefined1 *)GEN_TOP(((int)piVar3 + 0x119))) = 0;
  (*pcVar4)(piVar3,0);
  *((undefined1 *)GEN_TOP((*(int *)(this + 0x88) + 0x11b))) = 1;
  F_005b2130(*(undefined4 *)(this + 0x88) GEN_EDX_ARG,1);
  F_0056d400(*(undefined4 *)(this + 0x88) GEN_EDX_ARG,1,0,0);
  uVar5 = 0;
  if (*((int *)GEN_TOP((*(int *)(this + 0x88) + 0x88))) != 0) {
    piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x88) + 0x88))) + 0x88)));
    uVar5 = 0;
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x30))))(piVar3 GEN_EDX_ARG,1);
    }
    piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x88) + 0x88))) + 0x90)));
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x30))))(piVar3 GEN_EDX_ARG,1);
      uVar5 = F_005c4390(piVar3 GEN_EDX_ARG,0x16,3,this,0);
    }
  }
  if ((*(int *)(this + 0x88) != 0) && (uVar5 = *((uint *)GEN_TOP((*(int *)(this + 0x88) + 0x70))), uVar5 != 0))
  {
    *((uint *)GEN_TOP((uVar5 + 0x84))) = *((uint *)GEN_TOP((uVar5 + 0x84))) & 0xffefffff;
    *((uint *)GEN_TOP((uVar5 + 0x88))) = *((uint *)GEN_TOP((uVar5 + 0x88))) | 0x80;
  }
  return uVar5;
}

/* ref: FUN_005b2b20 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005b2b20(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5b2b20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  undefined * this;
  
  this = *((undefined * PTR32 *)GEN_TOP((param_1 + 0x88)));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    if (param_3 != '\0') {
      F_005b2060(this GEN_EDX_FWD,param_2);
      return;
    }
    *((short *)GEN_TOP(((int)this + 0xf6))) = (short)param_2;
    *((short *)GEN_TOP(((int)this + 0xf8))) = *((short *)GEN_TOP(((int)this + 0xf4))) * (short)param_2;
    F_005b19a0(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_005b2b70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b2b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5b2b70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0xc, 4);
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  uVar2 = REFG(undefined4, 0x1379860);
  if (*((char *)GEN_TOP((REFG(undefined4, 0x1379860) + 0xbc))) != '\0') {
    if (param_1 == 0) {
      if (*((char *)GEN_TOP((REFG(undefined4, 0x1379860) + 0xbc))) != '\0') {
        uVar2 = F_005aa300(REFG(undefined4, 0x1379860) + 0x3c GEN_EDX_FWD,1,1,9);
        return uVar2;
      }
    }
    else {
      bVar1 = F_0059a3a0(((undefined *)GEN_TOP((REFG(undefined4, 0x1379860) + 0x3c))) GEN_EDX_ARG,param_1,param_2);
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 == 0) {
        if (*((char *)GEN_TOP((REFG(undefined4, 0x1379860) + 0xbc))) != '\0') {
          F_005aa300(REFG(undefined4, 0x1379860) + 0x3c GEN_EDX_ARG,1,1,9);
        }
        (*(undefined2 *)(gen_frame + 0x6)) = 0x806;
        bVar1 = F_0059ccc0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
        uVar2 = CONCAT31(extraout_var_00,bVar1);
      }
    }
  }
  return uVar2;
}

/* ref: FUN_005b2c00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b2c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5b2c00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0xc, 4);
  char cVar1;
  undefined4 uVar2;
  byte bVar3;
  int * in_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar4;
  int iVar5;
  undefined3 extraout_var_00 = 0;
  
  if (((*((byte *)GEN_TOP((param_1 + 0x16))) & 1) == 0) && (this != ((undefined *)GEN_TOP(0x0)))) {
    in_EAX = ((int *)GEN_TOP(0x0));
    if ((*((int *)GEN_TOP(((int)this + 0x70))) != 0) &&
       ((in_EAX = ((int *)GEN_TOP(0x0)), (*((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x70))) + 0x84))) >> 0x15 & 1) != 0 &&
        (in_EAX = param_2, (char)param_2[1] == '\0')))) {
      iVar5 = *param_2;
      if (iVar5 == 1) {
        if ((char)REFG(int * PTR32, 0x1379860)[0x2f] != '\0') {
          iVar5 = (int)param_2 + 6;
          uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x84))) + 0x14))))(((int *)GEN_TOP(((int)this + 0x84))) GEN_EDX_FWD);
          uVar4 = F_005b2b70(this GEN_EDX_ARG,uVar4,iVar5);
          *((uint *)GEN_TOP((param_1 + 0x14))) = *((uint *)GEN_TOP((param_1 + 0x14))) | 0x10000;
          return uVar4;
        }
        if (*((int *)GEN_TOP(((int)this + 0x88))) == 0) {
          if (*((byte *)GEN_TOP(((int)this + 0xa9))) == 2) {
            (*(undefined2 *)(gen_frame + 0x6)) = 0x804;
            *(undefined4 *)((undefined1 *)(gen_frame + 0x4)) = CONCAT22(0x804,(*(unsigned short *)((undefined1 *)(gen_frame + 0x4))));
          }
          else {
            uVar4 = *((byte *)GEN_TOP(((int)this + 0xa9))) - 3;
            if (uVar4 != 0) {
              return uVar4;
            }
            (*(undefined2 *)(gen_frame + 0x6)) = 0x805;
            *(undefined4 *)((undefined1 *)(gen_frame + 0x4)) = CONCAT22(0x805,(*(unsigned short *)((undefined1 *)(gen_frame + 0x4))));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP(((int)this + 0xa9)));
          if (cVar1 == '\0') {
            if ((*((byte *)GEN_TOP(((int)this + 0xaa))) & 0x13) != 0) {
              return (uint)param_2;
            }
            uVar2 = *((undefined4 *)GEN_TOP(((int)param_2 + 10)));
            *(undefined4 *)((undefined1 *)(gen_frame + 0x4)) = uVar2;
            (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP(((int)param_2 + 6)));
            (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x6)) + 1)) = (undefined1)((uint)uVar2 >> 0x18);
            { unsigned short gen_ac = (unsigned short)(SUB42(uVar2,0)); memcpy(((undefined1 *)(gen_frame + 0x4)), &gen_ac, 2); }
            (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x6)) + 0)) = 0;
            *(uint3 *)((undefined1 *)(gen_frame + 0x4)) = (uint3)(ushort)(*(unsigned short *)((undefined1 *)(gen_frame + 0x4)));
            uVar4 = F_005abab0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
            *((uint *)GEN_TOP((param_1 + 0x14))) = *((uint *)GEN_TOP((param_1 + 0x14))) | 0x10000;
            return uVar4;
          }
          if (cVar1 == '\x02') {
            (*(undefined2 *)(gen_frame + 0x6)) = 0x804;
            *(undefined4 *)((undefined1 *)(gen_frame + 0x4)) = CONCAT22(0x804,(*(unsigned short *)((undefined1 *)(gen_frame + 0x4))));
          }
          else {
            if (cVar1 != '\x03') {
              return (uint)param_2;
            }
            (*(undefined2 *)(gen_frame + 0x6)) = 0x805;
            *(undefined4 *)((undefined1 *)(gen_frame + 0x4)) = CONCAT22(0x805,(*(unsigned short *)((undefined1 *)(gen_frame + 0x4))));
          }
        }
        bVar3 = F_0059ccc0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
        in_EAX = ((int *)GEN_TOP(CONCAT31(extraout_var_00,bVar3)));
        if (bVar3 == 0) {
          return (uint)in_EAX;
        }
      }
      else {
        in_EAX = REFG(int * PTR32, 0x1379860);
        if (iVar5 == 2) {
          if ((char)REFG(int * PTR32, 0x1379860)[0x2f] == '\0') {
            return (uint)REFG(int * PTR32, 0x1379860);
          }
          if ((char)REFG(int * PTR32, 0x1379860)[0x2f] != '\0') {
            uVar4 = F_005aa300(REFG(int * PTR32, 0x1379860) + 0xf GEN_EDX_ARG,1,1,9);
            *((uint *)GEN_TOP((param_1 + 0x14))) = *((uint *)GEN_TOP((param_1 + 0x14))) | 0x10000;
            return uVar4;
          }
        }
        else {
          if (iVar5 != 4) {
            return (uint)param_2;
          }
          if ((char)REFG(int * PTR32, 0x1379860)[0x2f] == '\0') {
            (*(undefined2 *)(gen_frame + 0x6)) = 0x803;
            *(undefined4 *)((undefined1 *)(gen_frame + 0x4)) = CONCAT22(0x803,(*(unsigned short *)((undefined1 *)(gen_frame + 0x4))));
            bVar3 = F_0059ccc0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
            *((uint *)GEN_TOP((param_1 + 0x14))) = *((uint *)GEN_TOP((param_1 + 0x14))) | 0x10000;
            return CONCAT31(extraout_var,bVar3);
          }
        }
      }
      *((uint *)GEN_TOP((param_1 + 0x14))) = *((uint *)GEN_TOP((param_1 + 0x14))) | 0x10000;
    }
  }
  return (uint)in_EAX;
}

/* ref: FUN_005b2db0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b2db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5b2db0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x1379860);
  if ((((*((char *)GEN_TOP((REFG(undefined4, 0x1379860) + 0xbc))) == '\0') && (this != ((undefined *)GEN_TOP(0x0)))) &&
      (uVar1 = 0, *((int *)GEN_TOP(((int)this + 0x70))) != 0)) &&
     (uVar1 = 0, (*((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x70))) + 0x84))) >> 0x15 & 1) != 0)) {
    F_0059fd80(this GEN_EDX_FWD,3);
    if (*((char *)GEN_TOP((param_2 + 6))) == '\0') {
      F_005abab0(this GEN_EDX_ARG,param_2);
    }
    else if (*((char *)GEN_TOP((param_2 + 6))) == '\x01') {
      F_0059ccc0(this GEN_EDX_ARG,param_2);
      *((uint *)GEN_TOP((param_1 + 0x14))) = *((uint *)GEN_TOP((param_1 + 0x14))) | 0x10000;
      return param_1;
    }
    *((uint *)GEN_TOP((param_1 + 0x14))) = *((uint *)GEN_TOP((param_1 + 0x14))) | 0x10000;
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_005b2e30 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005b2e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5b2e30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  if (((*((char *)GEN_TOP(((int)this + 0x1a))) != '\0') ||
      (((*((char *)GEN_TOP((REFG(int, 0x1379860) + 0xbc))) != '\0' &&
        ((-(uint)(this != ((undefined *)GEN_TOP(0x84))) & (uint)this) == *((uint *)GEN_TOP((REFG(int, 0x1379860) + 0xac))))) &&
       ((*((int *)GEN_TOP((REFG(int, 0x1379860) + 0xb4))) == 0 ||
        (*((short *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x1379860) + 0xb4))) + 0x9c))) ==
         *((short *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x1379860) + 0xb0))) + 0x18))))))))) &&
     (*((char *)GEN_TOP((REFG(int, 0x1379860) + 0xbc))) != '\0')) {
    F_005aa300(REFG(int, 0x1379860) + 0x3c GEN_EDX_FWD,1,1,9);
  }
  if (*((int *)GEN_TOP(((int)this + 0x20))) != 0) {
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + 0x95))) = 0;
  }
  *((byte *)GEN_TOP(((int)this + 0x26))) = *((byte *)GEN_TOP(((int)this + 0x26))) & 0xef;
  if (*((int *)GEN_TOP(((int)this - 0x18))) != 0) {
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this - 0x18))) + 0x53))) = 0xff;
  }
  if ((*((int *)GEN_TOP(((int)this + 0x20))) != 0) &&
     (iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + 0x70))), iVar1 != 0)) {
    *((undefined1 *)GEN_TOP((iVar1 + 0x53))) = 0xff;
  }
  F_00563170((int)this - 0x84 GEN_EDX_ARG,1);
  *((byte *)GEN_TOP(((int)this + 0x26))) = *((byte *)GEN_TOP(((int)this + 0x26))) & 0xf7;
  return;
}

/* ref: Component::GUI2::AtkComponentTextInput::vf4 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b2ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5b2ed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  undefined * this_00;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x34))) + 0x1c))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x34))) GEN_EDX_FWD);
  if ((char)uVar2 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x34))) + 0x18))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x34))) GEN_EDX_ARG);
  }
  if (this[0x84] != (undefined1)0x0) {
    this[0x84] = (undefined1)0x0;
    *((undefined4 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x18))) + 4))) = 0;
    F_005abfe0(this GEN_EDX_ARG,0,this + 0x354);
    iVar1 = *(int *)(this + 0x90);
    if ((iVar1 == 0) || (*((int *)GEN_TOP((iVar1 + 0x1c))) == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x1c))) + 0x10)));
    }
    if ((iVar1 != 0) && (this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x1c))), this_00 != ((undefined *)GEN_TOP(0x0)))) {
      *((ushort *)GEN_TOP(((int)this_00 + 0x22))) = *((ushort *)GEN_TOP(((int)this_00 + 0x22))) & 0x7fff;
      *((uint *)GEN_TOP(((int)this_00 + 0x18))) = uVar2 - 1;
      F_00573430(this_00 GEN_EDX_ARG,uVar2 - 1);
    }
    iVar1 = *(int *)(this + 0x90);
    if (iVar1 != 0) {
      *((uint *)GEN_TOP((iVar1 + 0x84))) = *((uint *)GEN_TOP((iVar1 + 0x84))) & 0xffefffff;
      *((uint *)GEN_TOP((iVar1 + 0x88))) = *((uint *)GEN_TOP((iVar1 + 0x88))) | 0x80;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) + 4))))
              (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x38))) GEN_EDX_ARG,((uint *)(gen_frame + 0x0)),7,0xd,this + 0x354);
    if ((((uint *)(gen_frame + 0x0))[0] >> 5 & 1) != 0) {
      F_005a0260(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
  }
  F_00583770(REFG(int, 0x1379860) + 0x23c GEN_EDX_ARG,0x49,0,this,0);
  uVar2 = F_0058fe90(this + 4 GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_005b2fe0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_005b2fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5b2fe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0xb0, 0, 4);
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_1,REFG(undefined4, 0x108cc50));
  F_0042b630(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  piVar1 = *((int * PTR32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x18))) + 0x14)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar2,((undefined1 *)(gen_frame + 0x54)));
  uVar4 = 0;
  uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  F_005abc40(this GEN_EDX_ARG,uVar2,param_1,uVar4);
  F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (uint)uVar3;
}

/* ref: FUN_005b3080 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b3080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5b3080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  if (param_1 == 1) {
    F_0042e430(((undefined *)GEN_TOP(((int)this + 0xf0))) GEN_EDX_FWD,"");
    F_0042e430(((undefined *)GEN_TOP(((int)this + 0x9c))) GEN_EDX_ARG,"");
    F_00584110(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x8c))) GEN_EDX_ARG,"");
    uVar1 = F_005ac260(this GEN_EDX_ARG,0,0,0,0,0,0);
  }
  else {
    uVar1 = param_1 - 2;
    if (uVar1 == 0) {
      uVar1 = F_005ac260(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x158))),
                           *((undefined4 *)GEN_TOP(((int)this + 0x150))),*((undefined4 *)GEN_TOP(((int)this + 0x154))),0,1
                           ,1);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentNumericInput::vf2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b3100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(ushort * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x5b3100u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(ushort * param_4 = (ushort *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_TOP(0x90, 0, 4);
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  undefined * pAVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined3 extraout_var = 0;
  uint * puVar6;
  uint * puVar7;
  undefined4 uVar8;
  
  ((uint *)(gen_frame + 0x7c))[3] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  uVar2 = param_1 & 0xffff;
  if (0x43 < uVar2 - 3) {
    return uVar2 - 3;
  }
  pAVar3 = ((undefined *)GEN_TOP((uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x5b3838) + uVar2 + 1)))));
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 3: ;
switchD_005b3135_caseD_3: ;
    if (this[0x84] == (undefined1)0x0) {
      return (uint)pAVar3;
    }
    goto LAB_005b3662;
  case 4: ;
    if (param_2 != ((undefined *)GEN_TOP(0x400))) {
      return (uint)pAVar3;
    }
    uVar2 = F_00577ea0(*(undefined * PTR32 *)(this + 0x8c) GEN_EDX_FWD,(uint)*param_4,(uint)param_4[1],0);
    F_005ac9e0(this GEN_EDX_ARG,uVar2,*(undefined4 *)(this + 0x150),uVar2,1,0);
    F_00583770((int)REFG(void * PTR32, 0x1379860) + 0x23c GEN_EDX_ARG,5,0x400,this,0);
    pAVar3 = ((undefined *)GEN_TOP(F_00583770((int)REFG(void * PTR32, 0x1379860) + 0x23c GEN_EDX_ARG,4,0x400,this,0)));
    goto LAB_005b37f6;
  case 5: ;
    if (param_2 == ((undefined *)GEN_TOP(0x400))) {
      uVar2 = F_00577ea0(*(undefined * PTR32 *)(this + 0x8c) GEN_EDX_ARG,(uint)*param_4,(uint)param_4[1],0);
      uVar2 = F_005ac9e0(this GEN_EDX_ARG,uVar2,*(undefined4 *)(this + 0x150),uVar2,1,0);
      return uVar2;
    }
    break;
  case 8: ;
    if (param_2 != ((undefined *)GEN_TOP(0x302))) goto switchD_005b3135_caseD_3;
    if (this[0x84] == (undefined1)0x0) {
      pAVar3 = ((undefined *)GEN_TOP(F_0059d240(this GEN_EDX_ARG,(int)(short)param_4[2] + *(int *)(this + 0x178))));
      *((uint *)GEN_TOP((param_3 + 0x14))) = *((uint *)GEN_TOP((param_3 + 0x14))) | 0x10000;
      goto switchD_005b3135_caseD_3;
    }
LAB_005b3662: ;
    if (param_2 != ((undefined *)GEN_TOP(0x400))) {
      return (uint)pAVar3;
    }
    F_0056a3d0(REFG(void * PTR32, 0x1379860) GEN_EDX_ARG,5,0x400,this,0,0);
    F_0056a3d0(REFG(void * PTR32, 0x1379860) GEN_EDX_ARG,4,0x400,this,0,0);
    uVar2 = F_00577ea0(*(undefined * PTR32 *)(this + 0x8c) GEN_EDX_ARG,(uint)*param_4,(uint)param_4[1],0);
    pAVar3 = ((undefined *)GEN_TOP(F_005ac9e0(this GEN_EDX_ARG,uVar2,uVar2,uVar2,1,0)));
    goto LAB_005b37f6;
  case 0xc: ;
    if (param_2 == ((undefined *)GEN_TOP(0x301))) {
      uVar2 = F_005a18a0(this GEN_EDX_ARG,0x301,param_3,param_4);
      return uVar2;
    }
    if (this[0x186] != (undefined1)0x0) {
      uVar2 = F_005a18a0(this GEN_EDX_ARG,param_2,param_3,param_4);
      return uVar2;
    }
    pAVar3 = param_2;
    if ((char)param_4[2] == '\0') {
      uVar2 = F_005ac700(this GEN_EDX_ARG,param_2,param_3,param_4);
      return uVar2;
    }
    break;
  case 0xf: ;
    bVar1 = F_0059d210(this GEN_EDX_ARG,param_4);
    pAVar3 = ((undefined *)GEN_TOP(CONCAT31(extraout_var,bVar1)));
    if (bVar1 == 0) {
      return (uint)pAVar3;
    }
    goto LAB_005b37f6;
  case 0x11: ;
    if (param_2 == ((undefined *)GEN_TOP(0x301))) {
      this[0x191] = (undefined1)(this[0x186] == (undefined1)0x0);
      return (uint)(this[0x186] == (undefined1)0x0);
    }
    if (this[0x185] != (undefined1)0x0) {
      this[0x84] = (undefined1)0x1;
      pAVar3 = this + 0x16c;
      *((undefined * PTR32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x18))) + 4))) = pAVar3;
      if (*(int *)(this + 0x8c) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x38))) + 8))))
                  (*((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x38))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),1);
        uVar2 = F_005a2670(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        if (this[0x186] != (undefined1)0x0) {
          this[0x191] = (undefined1)0x0;
          return uVar2;
        }
        *(undefined4 *)(this + 0x17c) = *(undefined4 *)(this + 0x178);
        puVar5 = ((undefined4 *)(gen_frame + 0x1c));
        iVar4 = 0xc;
        do {
          *puVar5 = 0;
          puVar5 = puVar5 + 2;
          iVar4 = iVar4 - 1;
        } while (-1 < iVar4);
        F_005ac530(this GEN_EDX_ARG,1,((undefined4 *)(gen_frame + 0x1c)));
        if ((*(int *)(this + 0x90) != 0) &&
           (iVar4 = *((int *)GEN_TOP((*(int *)(this + 0x90) + 0x1c))), iVar4 != 0)) {
          *((ushort *)GEN_TOP((iVar4 + 0x22))) = *((ushort *)GEN_TOP((iVar4 + 0x22))) | 0x8000;
          *((undefined4 *)GEN_TOP((iVar4 + 0x18))) = 0;
        }
        iVar4 = *(int *)(this + 0x90);
        if (iVar4 != 0) {
          *((uint *)GEN_TOP((iVar4 + 0x84))) = *((uint *)GEN_TOP((iVar4 + 0x84))) | 0x100000;
          *((uint *)GEN_TOP((iVar4 + 0x88))) = *((uint *)GEN_TOP((iVar4 + 0x88))) & 0xffffff7f;
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x38))) + 4))))
                  (*((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x38))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)),7,0xd,((undefined4 *)(gen_frame + 0x1c)));
        uVar8 = 0;
        if (*(int *)(this + 0x8c) != 0) {
          uVar8 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x8c) + 0xf0)));
        }
        F_0042e430(this + 0x9c GEN_EDX_ARG,uVar8);
        F_0042ccf0(this + 0xf0 GEN_EDX_ARG,this + 0x9c);
        F_005ac9e0(this GEN_EDX_ARG,0xff,0,0xff,1,0);
        F_005a2670(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
        iVar4 = 0xc;
        puVar7 = ((uint *)(gen_frame + 0x7c)) + 3;
        do {
          uVar2 = puVar7[-3];
          puVar6 = puVar7 - 2;
          if ((uVar2 >> 5 & 1) != 0) {
            puVar5 = ((undefined4 *)GEN_TOP(*puVar6));
            if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
              uVar2 = uVar2 & 0xf;
              if (uVar2 == 9) {
                F_00488040(puVar5 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)),*puVar5,puVar5[1]);
                F_00488dc0(puVar5 GEN_EDX_ARG);
                uVar2 = F_00406ad0(puVar5);
              }
              else if ((uVar2 == 6) || (uVar2 == 7)) {
                uVar2 = F_00406ad0(puVar5);
                *puVar6 = 0;
              }
            }
            *puVar6 = 0;
          }
          iVar4 = iVar4 - 1;
          puVar7[-3] = 0;
          puVar7 = puVar6;
        } while (-1 < iVar4);
        return uVar2;
      }
    }
    break;
  case 0x12: ;
    if (param_2 == ((undefined *)GEN_TOP(0x301))) {
      uVar2 = F_00583100(this GEN_EDX_ARG);
      return uVar2;
    }
    this[0x84] = (undefined1)0x0;
    *((undefined4 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x18))) + 4))) = 0;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x38))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x38))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),3);
    F_005a2670(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    if ((this[0x186] == (undefined1)0x0) &&
       (this[0x187] == (undefined1)0x0)) {
      F_0059fef0(this GEN_EDX_ARG);
    }
    else {
      F_0058b640(this GEN_EDX_ARG);
      if (*(int *)(this + 0x8c) != 0) {
        *((undefined4 *)GEN_TOP((*(int *)(this + 0x8c) + 0x90))) = *(undefined4 *)(this + 0x188);
      }
    }
    pAVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG)));
    if (*(undefined * PTR32 *)(param_4 + 2) != pAVar3) {
      pAVar3 = ((undefined *)GEN_TOP(F_00583100(this GEN_EDX_ARG)));
    }
    if ((*(int *)(this + 0x8c) != 0) && (this[0x185] != (undefined1)0x0)) {
      puVar5 = ((undefined4 *)(gen_frame + 0x1c));
      iVar4 = 0xc;
      do {
        *puVar5 = 0;
        puVar5 = puVar5 + 2;
        iVar4 = iVar4 - 1;
      } while (-1 < iVar4);
      F_005ac530(this GEN_EDX_ARG,0,((undefined4 *)(gen_frame + 0x1c)));
      F_0057cde0(this GEN_EDX_ARG,0);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x38))) + 4))))
                (*((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x38))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)),7,0xd,((undefined4 *)(gen_frame + 0x1c)));
      this[0x187] = (undefined1)0x0;
      if (this[0x186] != (undefined1)0x0) {
        this[0x186] = (undefined1)0x0;
      }
      if (this[0x80] != (undefined1)0x0) {
        this[0x80] = (undefined1)0x7f;
      }
      F_005a2670(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
      iVar4 = 0xc;
      puVar7 = ((uint *)(gen_frame + 0x7c)) + 3;
      do {
        uVar2 = puVar7[-3];
        puVar6 = puVar7 - 2;
        if ((uVar2 >> 5 & 1) != 0) {
          puVar5 = ((undefined4 *)GEN_TOP(*puVar6));
          if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
            uVar2 = uVar2 & 0xf;
            if (uVar2 == 9) {
              F_00488040(puVar5 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)),*puVar5,puVar5[1]);
              F_00488dc0(puVar5 GEN_EDX_ARG);
              uVar2 = F_00406ad0(puVar5);
            }
            else if ((uVar2 == 6) || (uVar2 == 7)) {
              uVar2 = F_00406ad0(puVar5);
              *puVar6 = 0;
            }
          }
          *puVar6 = 0;
        }
        iVar4 = iVar4 - 1;
        puVar7[-3] = 0;
        puVar7 = puVar6;
      } while (-1 < iVar4);
      return uVar2;
    }
    break;
  case 0x17: ;
    if (param_2 == ((undefined *)GEN_TOP(0x500))) {
      iVar4 = *(int *)(this + 0x270) + *(int *)(this + 0x178);
      if (((this[0x184] != (undefined1)0x0) && (*(int *)(this + 0x26c) < iVar4)) &&
         (*((char *)GEN_TOP((*(int *)(this + 0x170) + 0xa4))) == '\0')) {
        iVar4 = *(int *)(this + 0x268);
      }
      uVar2 = F_0059d240(this GEN_EDX_ARG,iVar4);
      return uVar2;
    }
    pAVar3 = param_2;
    if (param_2 == ((undefined *)GEN_TOP(0x501))) {
      iVar4 = *(int *)(this + 0x178) - *(int *)(this + 0x270);
      if (((this[0x184] != (undefined1)0x0) && (iVar4 < *(int *)(this + 0x268))) &&
         (*((char *)GEN_TOP((*(int *)(this + 0x174) + 0xa4))) == '\0')) {
        iVar4 = *(int *)(this + 0x26c);
      }
      uVar2 = F_0059d240(this GEN_EDX_ARG,iVar4);
      return uVar2;
    }
    break;
  case 0x46: ;
    if (this[0x80] != (undefined1)0x1) {
      return (uint)pAVar3;
    }
    if (*(int *)(param_4 + 4) == 0x11) {
      return (uint)pAVar3;
    }
    if (*(int *)(this + 0x8c) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(this + 0x8c) + 0x90))) = REFG(undefined4, 0x131de64);
    }
    if ((*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x21d))) == '\0') &&
       (this[0x186] != (undefined1)0x1)) {
      this[0x186] = (undefined1)0x1;
      this[0x191] = (undefined1)0x0;
      F_00583100(this GEN_EDX_ARG);
    }
    this_00 = REFG(void * PTR32, 0x1379860);
    uVar8 = 0;
    uVar2 = F_005826a0(this GEN_EDX_ARG);
    F_0059b300(this_00 GEN_EDX_ARG,*(undefined4 *)(this + 0x98),uVar2,uVar8);
    pAVar3 = ((undefined *)GEN_TOP(F_0058b640(this GEN_EDX_ARG)));
LAB_005b37f6: ;
    *((uint *)GEN_TOP((param_3 + 0x14))) = *((uint *)GEN_TOP((param_3 + 0x14))) | 0x10000;
  }
  return (uint)pAVar3;
}

/* ref: FUN_005b3880 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b3880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x5b3880u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  uint * puVar5;
  undefined4 uVar6;
  
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  if (((byte)*(undefined4 *)(param_2 + 8) & 0xf) != 4) {
    F_005b13c0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xb8))) + 0x1c0))) GEN_EDX_FWD,param_3,param_2);
    *param_1 = 0;
    return (uint)param_1;
  }
  if (param_3 < 3) {
    bVar3 = false;
    bVar2 = true;
    ((uint *)(gen_frame + 0x0))[0] = 0;
    puVar5 = ((uint *)(gen_frame + 0x0));
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x10);
    bVar3 = true;
    bVar2 = false;
    (*(uint *)(gen_frame + 0x8)) = uVar1;
    if ((uVar1 & 0xf) == 9) {
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
    }
    else {
      (*(uint *)(gen_frame + 0x8)) = uVar1 & 0xf;
      (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(param_2 + 0x14);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      F_00594f30(&(*(uint *)(gen_frame + 0x8)) GEN_EDX_ARG,param_2 + 0x10);
    }
    puVar5 = &(*(uint *)(gen_frame + 0x8));
  }
  if ((param_2[8] & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(param_2 + 0xc);
  }
  if ((*param_2 & 0xf) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(param_2 + 4);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x74))))(this GEN_EDX_ARG,uVar6,uVar4,0,0,puVar5);
  if (bVar2) {
    if ((((uint *)(gen_frame + 0x0))[0] >> 5 & 1) != 0) {
      F_005a0260(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
    ((uint *)(gen_frame + 0x0))[0] = 0;
  }
  if ((bVar3) && (((*(uint *)(gen_frame + 0x8)) >> 5 & 1) != 0)) {
    F_005a0260(&(*(uint *)(gen_frame + 0x8)) GEN_EDX_ARG);
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: Component::GUI2::AtkUnitBase::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b3990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(int * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x5b3990u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_TOP(0x2c, 4, 4);
  int iVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined3 extraout_var = 0;
  undefined * this_00;
  
  uVar4 = param_1 & 0xffff;
  if (0x3b < uVar4 - 0xc) {
    return uVar4 - 0xc;
  }
  uVar5 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x5b3e94) + uVar4)));
  switch((unsigned int)(uintptr_t)(uVar4)) {
  case 0xc: ;
  case 0xd: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x74))))(this GEN_EDX_FWD);
    if ((char)uVar4 != '\0') {
      return uVar4;
    }
    if ((char)param_4[1] != '\0') {
      if ((char)param_4[1] == '\x02') {
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xd0))))(this GEN_EDX_ARG,param_4);
        if ((char)uVar4 != '\0') goto switchD_005b39fe_caseD_1;
        iVar1 = *param_4;
        uVar5 = iVar1 - 7;
        switch((unsigned int)(uintptr_t)(iVar1)) {
        case 7: ;
        case 8: ;
        case 9: ;
        case 10: ;
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xec))))(this GEN_EDX_ARG,iVar1,1);
          *((uint *)GEN_TOP((param_3 + 0x14))) = *((uint *)GEN_TOP((param_3 + 0x14))) | 0x10000;
          return param_3;
        case 0xf: ;
        case 0x10: ;
          bVar3 = F_005b8fb0(this GEN_EDX_ARG);
          if (bVar3 != 0) {
            uVar4 = (uint)(byte)this[0x13c];
            this_00 = *((undefined * PTR32 *)GEN_TOP((REFG(undefined4, 0x1379860) + 0x14)));
            goto LAB_005b3a24;
          }
          uVar5 = *(uint *)(this + 0x120) >> 8;
          if ((uVar5 & 1) != 0) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xf0))))(this GEN_EDX_ARG,iVar1,1);
            *((uint *)GEN_TOP((param_3 + 0x14))) = *((uint *)GEN_TOP((param_3 + 0x14))) | 0x10000;
            return param_3;
          }
        }
      }
      else {
        uVar5 = *param_4 - 7;
        switch((unsigned int)(uintptr_t)(*param_4)) {
        case 7: ;
        case 8: ;
        case 9: ;
        case 10: ;
          goto switchD_005b39fe_caseD_1;
        case 0xf: ;
        case 0x10: ;
          bVar3 = F_005b8fb0(this GEN_EDX_ARG);
          if (bVar3 == 0) {
            uVar5 = *(uint *)(this + 0x120) >> 8;
            if ((uVar5 & 1) != 0) goto switchD_005b39fe_caseD_1;
          }
          else {
            piVar6 = ((int *)GEN_TOP(F_0057f810(*((undefined * PTR32 *)GEN_TOP((REFG(undefined4, 0x1379860) + 0x14))) GEN_EDX_ARG,(uint)(byte)this[0x13c])));
            uVar5 = 0;
            if (piVar6 != ((int *)GEN_TOP(0x0))) {
              uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 4))))(piVar6 GEN_EDX_ARG,param_1,param_2,param_3,param_4);
              return uVar4;
            }
          }
        }
      }
      goto switchD_005b39fe_caseD_5;
    }
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xd0))))(this GEN_EDX_ARG,param_4);
    if ((char)uVar4 != '\0') {
switchD_005b39fe_caseD_1: ;
      *((uint *)GEN_TOP((param_3 + 0x14))) = *((uint *)GEN_TOP((param_3 + 0x14))) | 0x10000;
      return param_3;
    }
    iVar1 = *param_4;
    uVar5 = iVar1 - 1;
    bVar2 = true;
    switch((unsigned int)(uintptr_t)(iVar1)) {
    case 1: ;
    case 4: ;
      goto switchD_005b39fe_caseD_1;
    case 3: ;
      bVar2 = false;
    case 2: ;
      bVar3 = F_005b8fb0(this GEN_EDX_ARG);
      uVar4 = REFG(undefined4, 0x1379860);
      if (bVar3 == 0) {
        if (((byte)this[0xf9] & 4) == 0) {
          if (((bVar2) && (uVar5 = *(uint *)(this + 0xa8), uVar5 != 0)) &&
             (uVar7 = F_0055b9e0(REFG(undefined4, 0x1379860) GEN_EDX_ARG), uVar5 != uVar7)) {
            F_0059b1c0(*((undefined * PTR32 *)GEN_TOP((uVar4 + 0x18))) GEN_EDX_ARG,uVar5,this,0);
            *(uint *)(this + 0xa4) = uVar5;
            *((uint *)GEN_TOP((param_3 + 0x14))) = *((uint *)GEN_TOP((param_3 + 0x14))) | 0x10000;
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(undefined4, 0x1379860) + 0x38))) + 8))))
                      (*((int * PTR32 *)GEN_TOP((REFG(undefined4, 0x1379860) + 0x38))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20)),3);
            uVar4 = F_005a2670(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG);
            return uVar4;
          }
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 100))))(this GEN_EDX_ARG);
          *((uint *)GEN_TOP((param_3 + 0x14))) = *((uint *)GEN_TOP((param_3 + 0x14))) | 0x10000;
          uVar5 = F_005b8a10(this GEN_EDX_ARG);
          if (((char)uVar5 != '\0') &&
             (((*((byte *)GEN_TOP((*((int *)GEN_TOP((REFG(undefined4, 0x1379860) + 0x14))) + 0x1b0))) & 0x10) != 0 ||
              (uVar5 = REFG(undefined4, 0x1379860), 0 < *(short *)(this + 0x136))))) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(undefined4, 0x1379860) + 0x38))) + 8))))
                      (*((int * PTR32 *)GEN_TOP((REFG(undefined4, 0x1379860) + 0x38))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x18)),0x18);
            uVar4 = F_005a2670(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG);
            return uVar4;
          }
        }
        else {
          uVar5 = *(uint *)(this + 0x120) >> 6;
          if ((uVar5 & 1) == 0) {
            if (((bVar2) && (uVar5 = *(uint *)(this + 0xa8), uVar5 != 0)) &&
               (uVar7 = F_0055b9e0(REFG(undefined4, 0x1379860) GEN_EDX_ARG), uVar5 != uVar7)) {
              F_0059b1c0(*((undefined * PTR32 *)GEN_TOP((uVar4 + 0x18))) GEN_EDX_ARG,uVar5,this,0);
              *(uint *)(this + 0xa4) = uVar5;
              *((uint *)GEN_TOP((param_3 + 0x14))) = *((uint *)GEN_TOP((param_3 + 0x14))) | 0x10000;
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(undefined4, 0x1379860) + 0x38))) + 8))))
                        (*((int * PTR32 *)GEN_TOP((REFG(undefined4, 0x1379860) + 0x38))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)),3);
              uVar4 = F_005a2670(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
              return uVar4;
            }
            F_00594ca0(*((undefined * PTR32 *)GEN_TOP((uVar4 + 0x14))) GEN_EDX_ARG,this);
            *((uint *)GEN_TOP((param_3 + 0x14))) = *((uint *)GEN_TOP((param_3 + 0x14))) | 0x10000;
            uVar8 = 3;
            if ((*((byte *)GEN_TOP((*((int *)GEN_TOP((REFG(undefined4, 0x1379860) + 0x14))) + 0x1b0))) & 0x10) != 0) {
              uVar8 = 0x19;
            }
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(undefined4, 0x1379860) + 0x38))) + 8))))
                      (*((int * PTR32 *)GEN_TOP((REFG(undefined4, 0x1379860) + 0x38))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),uVar8);
            uVar4 = F_005a2670(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
            return uVar4;
          }
        }
      }
      else {
        uVar4 = (uint)(byte)this[0x13c];
        this_00 = *((undefined * PTR32 *)GEN_TOP((REFG(undefined4, 0x1379860) + 0x14)));
LAB_005b3a24: ;
        piVar6 = ((int *)GEN_TOP(F_0057f810(this_00 GEN_EDX_ARG,uVar4)));
        uVar5 = 0;
        if (piVar6 != ((int *)GEN_TOP(0x0))) {
          uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 4))))(piVar6 GEN_EDX_ARG,param_1,param_2,param_3,param_4);
        }
      }
      break;
    case 6: ;
      uVar5 = CONCAT31((int3)(uVar5 >> 8),8);
      if (((((*((byte *)GEN_TOP((*((int *)GEN_TOP((REFG(undefined4, 0x1379860) + 0x14))) + 0x1b0))) & 8) != 0) &&
           (((byte)this[0xf8] & 8) == 0)) &&
          (uVar5 = *(uint *)(this + 0x120) >> 0xb, (uVar5 & 1) == 0)) &&
         ((*(uint *)(this + 0x108) >> 0x1a & 1) == 0)) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x44))))(this GEN_EDX_ARG,1);
        if (*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((REFG(undefined4, 0x1379860) + 0x1c))) + 4))) == this) {
          *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((REFG(undefined4, 0x1379860) + 0x1c))) + 0x20))) = 1;
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(undefined4, 0x1379860) + 0x38))) + 8))))
                  (*((int * PTR32 *)GEN_TOP((REFG(undefined4, 0x1379860) + 0x38))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0xd);
        F_005a2670(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        *((uint *)GEN_TOP((param_3 + 0x14))) = *((uint *)GEN_TOP((param_3 + 0x14))) | 0x10000;
        return param_3;
      }
      break;
    case 7: ;
    case 8: ;
    case 9: ;
    case 10: ;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xec))))(this GEN_EDX_ARG,iVar1,0);
      *((uint *)GEN_TOP((param_3 + 0x14))) = *((uint *)GEN_TOP((param_3 + 0x14))) | 0x10000;
      return param_3;
    case 0xf: ;
    case 0x10: ;
      bVar3 = F_005b8fb0(this GEN_EDX_ARG);
      if (bVar3 == 0) {
        uVar5 = *(uint *)(this + 0x120) >> 8;
        if ((uVar5 & 1) != 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xf0))))(this GEN_EDX_ARG,iVar1,0);
          *((uint *)GEN_TOP((param_3 + 0x14))) = *((uint *)GEN_TOP((param_3 + 0x14))) | 0x10000;
          return param_3;
        }
        break;
      }
      uVar4 = (uint)(byte)this[0x13c];
      this_00 = *((undefined * PTR32 *)GEN_TOP((REFG(undefined4, 0x1379860) + 0x14)));
      goto LAB_005b3a24;
    }
switchD_005b39fe_caseD_5: ;
    break;
  case 0x3f: ;
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x74))))(this GEN_EDX_ARG);
    if ((char)uVar5 == '\0') {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe0))))(this GEN_EDX_ARG);
      return uVar4;
    }
    break;
  case 0x40: ;
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x74))))(this GEN_EDX_ARG);
    if ((char)uVar5 == '\0') {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe4))))(this GEN_EDX_ARG);
      return uVar4;
    }
    break;
  case 0x47: ;
    bVar3 = F_005b0e90(this GEN_EDX_ARG,param_4);
    uVar5 = CONCAT31(extraout_var,bVar3);
    if (bVar3 != 0) {
      *((uint *)GEN_TOP((param_3 + 0x14))) = *((uint *)GEN_TOP((param_3 + 0x14))) | 0x10000;
      return param_3;
    }
  }
  return uVar5;
}

/* ref: Component::GUI2::AtkComponentList::vf8 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b3f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5b3f40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  undefined1 AVar2;
  ushort uVar3;
  undefined * this_00;
  int iVar4;
  uint uVar5;
  undefined4 * puVar6;
  int * piVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  undefined4 uVar14;
  
  F_0058dd80(this GEN_EDX_FWD);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_ARG,(uint)(byte)this[0x119]);
  if (*(int *)(this + 0x70) != 0) {
    puVar1 = ((uint *)GEN_TOP((*(int *)(this + 0x70) + 0x84)));
    *puVar1 = *puVar1 | 0x2000000;
  }
  iVar11 = *(int *)(this + 0x70);
  if (iVar11 == 0) {
    fVar13 = 0.0;
  }
  else {
    fVar13 = *((float *)GEN_TOP((iVar11 + 0x3c)));
  }
  *(short *)(this + 0x100) = (short)(int)fVar13;
  if (iVar11 != 0) {
    *(undefined2 *)(this + 0x102) = *((undefined2 *)GEN_TOP((iVar11 + 0x7c)));
    *(undefined2 *)(this + 0x104) = *((undefined2 *)GEN_TOP((iVar11 + 0x7e)));
  }
  for (uVar10 = 0;
      (*(int *)(this + 0xc) != 0 &&
      (uVar10 < (uint)*(ushort *)(this + 0x1a) + *((int *)GEN_TOP((*(int *)(this + 0xc) + 4)))));
      uVar10 = uVar10 + 1) {
    uVar5 = F_00578ee0(this + 4 GEN_EDX_ARG,uVar10);
    if (((*((byte *)GEN_TOP((uVar5 + 0x87))) & 1) != 0) &&
       (((*((ushort *)GEN_TOP((uVar5 + 0x18))) < 1000 && (*((ushort *)GEN_TOP((uVar5 + 0x18))) != 10000)) &&
        (*(int *)(this + 0x90) == 0)))) {
      *(uint *)(this + 0x90) = uVar5;
    }
  }
  if (*(int *)(this + 0x90) == 0) {
    *(int *)(this + 0x90) = iVar11;
    if (iVar11 != 0) {
      if (*((int *)GEN_TOP((iVar11 + 0x80))) == 0) {
        uVar14 = 0;
        uVar10 = F_00404270();
        puVar6 = ((undefined4 *)GEN_TOP(F_00406bd0(4,0,uVar10,uVar14)));
        if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) {
          puVar6 = ((undefined4 *)GEN_TOP(0x0));
        }
        else {
          *puVar6 = 0;
        }
        *((undefined4 * PTR32 *)GEN_TOP((iVar11 + 0x80))) = puVar6;
      }
      F_00565340(*((undefined4 *)GEN_TOP((iVar11 + 0x80))) GEN_EDX_ARG,0xc,3,0,iVar11,this,0);
    }
    if (*(int *)(this + 0x90) != 0) {
      puVar1 = ((uint *)GEN_TOP((*(int *)(this + 0x90) + 0x84)));
      *puVar1 = *puVar1 | 0x4000000;
    }
  }
  uVar8 = 0;
  uVar9 = 0;
  if ((*(int *)(this + 0x84) != 0) && (iVar11 = *((int *)GEN_TOP((*(int *)(this + 0x84) + 0x70))), iVar11 != 0)
     ) {
    uVar8 = *((undefined2 *)GEN_TOP((iVar11 + 0x7c)));
    uVar9 = *((undefined2 *)GEN_TOP((iVar11 + 0x7e)));
  }
  *(undefined2 *)(this + 0x10a) = uVar8;
  *(undefined2 *)(this + 0x10c) = uVar9;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 100))))(this GEN_EDX_ARG,0);
  if (this[0x112] != (undefined1)0x0) {
    if (*(int *)(this + 0x70) == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = (uint)*((ushort *)GEN_TOP((*(int *)(this + 0x70) + 0x7c)));
    }
    iVar11 = (int)*(short *)(this + 0xf4) * (int)*(short *)(this + 0x10a);
    if (iVar11 - uVar10 != 0 && (int)uVar10 <= iVar11) {
      *(short *)(this + 0x10a) = *(short *)(this + 0x10a) / *(short *)(this + 0xf4);
    }
  }
  iVar11 = *(int *)(this + 0x84);
  uVar3 = *(ushort *)(this + 0x10a);
  uVar10 = 0;
  if (iVar11 != 0) {
    iVar12 = *((int *)GEN_TOP((iVar11 + 0x70)));
    if (iVar12 != 0) {
      uVar10 = (uint)*((ushort *)GEN_TOP((iVar12 + 0x7e)));
      *((ushort *)GEN_TOP((iVar12 + 0x7c))) = uVar3;
      *((ushort *)GEN_TOP((iVar12 + 0x7e))) = *((ushort *)GEN_TOP((iVar12 + 0x7e)));
    }
    uVar5 = *((uint *)GEN_TOP((iVar11 + 0x70)));
    if (uVar5 != 0) {
      F_0057f1a0(uVar5,(uint)*((ushort *)GEN_TOP((uVar5 + 0x7c))),(uint)*((ushort *)GEN_TOP((uVar5 + 0x7e))),(uint)uVar3
                   ,uVar10,1);
    }
  }
  F_005b19a0(this GEN_EDX_ARG);
  *(undefined2 *)(this + 0xfa) = *(undefined2 *)(this + 0xf6);
  iVar11 = *(int *)(this + 0x88);
  if (iVar11 != 0) {
    iVar12 = *((int *)GEN_TOP((iVar11 + 0x70)));
    if (iVar12 != 0) {
      *(undefined2 *)(this + 0x106) = *((undefined2 *)GEN_TOP((iVar12 + 0x7c)));
      *(undefined2 *)(this + 0x108) = *((undefined2 *)GEN_TOP((iVar12 + 0x7e)));
    }
    *((undefined1 *)GEN_TOP((iVar11 + 0xcd))) = 0;
    if ((*(int *)(this + 0x88) != 0) &&
       (iVar11 = *((int *)GEN_TOP((*(int *)(this + 0x88) + 0x70))), iVar11 != 0)) {
      if (*((int *)GEN_TOP((iVar11 + 0x80))) == 0) {
        uVar14 = 0;
        uVar10 = F_00404270();
        puVar6 = ((undefined4 *)GEN_TOP(F_00406bd0(4,0,uVar10,uVar14)));
        if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) {
          puVar6 = ((undefined4 *)GEN_TOP(0x0));
        }
        else {
          *puVar6 = 0;
        }
        *((undefined4 * PTR32 *)GEN_TOP((iVar11 + 0x80))) = puVar6;
      }
      F_00565340(*((undefined4 *)GEN_TOP((iVar11 + 0x80))) GEN_EDX_ARG,8,2,0,iVar11,this,0);
    }
    if ((*(int *)(this + 0x88) != 0) &&
       (iVar11 = *((int *)GEN_TOP((*(int *)(this + 0x88) + 0x70))), iVar11 != 0)) {
      if (*((int *)GEN_TOP((iVar11 + 0x80))) == 0) {
        uVar14 = 0;
        uVar10 = F_00404270();
        puVar6 = ((undefined4 *)GEN_TOP(F_00406bd0(4,0,uVar10,uVar14)));
        if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) {
          puVar6 = ((undefined4 *)GEN_TOP(0x0));
        }
        else {
          *puVar6 = 0;
        }
        *((undefined4 * PTR32 *)GEN_TOP((iVar11 + 0x80))) = puVar6;
      }
      F_00565340(*((undefined4 *)GEN_TOP((iVar11 + 0x80))) GEN_EDX_ARG,5,2,0,iVar11,this,0);
    }
    if ((*(int *)(this + 0x88) != 0) &&
       (iVar11 = *((int *)GEN_TOP((*(int *)(this + 0x88) + 0x70))), iVar11 != 0)) {
      if (*((int *)GEN_TOP((iVar11 + 0x80))) == 0) {
        uVar14 = 0;
        uVar10 = F_00404270();
        puVar6 = ((undefined4 *)GEN_TOP(F_00406bd0(4,0,uVar10,uVar14)));
        if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) {
          puVar6 = ((undefined4 *)GEN_TOP(0x0));
        }
        else {
          *puVar6 = 0;
        }
        *((undefined4 * PTR32 *)GEN_TOP((iVar11 + 0x80))) = puVar6;
      }
      F_00565340(*((undefined4 *)GEN_TOP((iVar11 + 0x80))) GEN_EDX_ARG,4,2,0,iVar11,this,0);
    }
    if ((*(int *)(this + 0x88) != 0) &&
       (iVar11 = *((int *)GEN_TOP((*(int *)(this + 0x88) + 0x70))), iVar11 != 0)) {
      if (*((int *)GEN_TOP((iVar11 + 0x80))) == 0) {
        uVar14 = 0;
        uVar10 = F_00404270();
        puVar6 = ((undefined4 *)GEN_TOP(F_00406bd0(4,0,uVar10,uVar14)));
        if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) {
          puVar6 = ((undefined4 *)GEN_TOP(0x0));
        }
        else {
          *puVar6 = 0;
        }
        *((undefined4 * PTR32 *)GEN_TOP((iVar11 + 0x80))) = puVar6;
      }
      F_00565340(*((undefined4 *)GEN_TOP((iVar11 + 0x80))) GEN_EDX_ARG,3,2,0,iVar11,this,0);
    }
    if ((*(int *)(this + 0x88) != 0) &&
       (iVar11 = *((int *)GEN_TOP((*(int *)(this + 0x88) + 0x70))), iVar11 != 0)) {
      if (*((int *)GEN_TOP((iVar11 + 0x80))) == 0) {
        uVar14 = 0;
        uVar10 = F_00404270();
        puVar6 = ((undefined4 *)GEN_TOP(F_00406bd0(4,0,uVar10,uVar14)));
        if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) {
          puVar6 = ((undefined4 *)GEN_TOP(0x0));
        }
        else {
          *puVar6 = 0;
        }
        *((undefined4 * PTR32 *)GEN_TOP((iVar11 + 0x80))) = puVar6;
      }
      F_00565340(*((undefined4 *)GEN_TOP((iVar11 + 0x80))) GEN_EDX_ARG,0x19,2,0,iVar11,this,0);
    }
    if ((*(int *)(this + 0x88) != 0) &&
       (iVar11 = *((int *)GEN_TOP((*(int *)(this + 0x88) + 0x70))), iVar11 != 0)) {
      if (*((int *)GEN_TOP((iVar11 + 0x80))) == 0) {
        uVar14 = 0;
        uVar10 = F_00404270();
        puVar6 = ((undefined4 *)GEN_TOP(F_00406bd0(4,0,uVar10,uVar14)));
        if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) {
          puVar6 = ((undefined4 *)GEN_TOP(0x0));
        }
        else {
          *puVar6 = 0;
        }
        *((undefined4 * PTR32 *)GEN_TOP((iVar11 + 0x80))) = puVar6;
      }
      F_00565340(*((undefined4 *)GEN_TOP((iVar11 + 0x80))) GEN_EDX_ARG,0x46,2,0,iVar11,this,0);
    }
  }
  iVar11 = *(int *)(this + 0xc);
  uVar10 = 0;
  do {
    while( true ) {
      if ((iVar11 == 0) ||
         (uVar5 = *((uint *)GEN_TOP((iVar11 + 4))), *(ushort *)(this + 0x1a) + uVar5 <= uVar10))
      goto LAB_005b447f;
      if (((byte)this[0x60] & 1) != 0) break;
LAB_005b43e6: ;
      uVar10 = uVar10 + 1;
    }
    if (uVar10 < uVar5) break;
    piVar7 = *(int * PTR32 *)(this + 0x4c);
    iVar12 = uVar10 - uVar5;
    if (piVar7 == *(int * PTR32 *)(this + 0x50)) goto LAB_005b43e6;
    do {
      iVar11 = iVar12 - (((int *)GEN_TOP(*piVar7)))[1];
      if (iVar11 < 0) {
        iVar12 = iVar12 * 0x90 + *((int *)GEN_TOP(*piVar7));
        iVar11 = *(int *)(this + 0xc);
        goto LAB_005b43d9;
      }
      piVar7 = piVar7 + 1;
      iVar12 = iVar11;
    } while (piVar7 != *(int * PTR32 *)(this + 0x50));
    iVar11 = *(int *)(this + 0xc);
    uVar10 = uVar10 + 1;
  } while( true );
  iVar12 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar11 + 8))) + uVar10 * 4)));
LAB_005b43d9: ;
  if ((iVar12 == 0) || ((*((byte *)GEN_TOP((iVar12 + 0x87))) & 1) == 0)) goto LAB_005b43e6;
  if (*((int *)GEN_TOP((iVar12 + 0x80))) == 0) {
    uVar14 = 0;
    uVar10 = F_00404270();
    puVar6 = ((undefined4 *)GEN_TOP(F_00406bd0(4,0,uVar10,uVar14)));
    if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar6 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      *puVar6 = 0;
    }
    *((undefined4 * PTR32 *)GEN_TOP((iVar12 + 0x80))) = puVar6;
  }
  F_00565340(*((undefined4 *)GEN_TOP((iVar12 + 0x80))) GEN_EDX_ARG,0x11,3,0,iVar12,this,0);
  if (*((int *)GEN_TOP((iVar12 + 0x80))) == 0) {
    uVar14 = 0;
    uVar10 = F_00404270();
    puVar6 = ((undefined4 *)GEN_TOP(F_00406bd0(4,0,uVar10,uVar14)));
    if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar6 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      *puVar6 = 0;
    }
    *((undefined4 * PTR32 *)GEN_TOP((iVar12 + 0x80))) = puVar6;
  }
  F_00565340(*((undefined4 *)GEN_TOP((iVar12 + 0x80))) GEN_EDX_ARG,0x12,3,0,iVar12,this,0);
  *((uint *)GEN_TOP((iVar12 + 0x84))) = *((uint *)GEN_TOP((iVar12 + 0x84))) | 0x4000000;
LAB_005b447f: ;
  if (0 < *(int *)(this + 0x9c)) {
    F_005741a0(this GEN_EDX_ARG,(uint)*(ushort *)(this + 0x9c));
  }
  F_0056cf60(this GEN_EDX_ARG);
  puVar6 = ((undefined4 *)GEN_TOP(0x0));
  if (*(int *)(this + 0x88) != 0) {
    *((undefined *)GEN_TOP((*(int *)(this + 0x88) + 200))) = this[0x112];
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x88) + 0x28))))(*(int * PTR32 *)(this + 0x88) GEN_EDX_ARG,(uint)(byte)this[0x114]);
    if ((*((int *)GEN_TOP((*(int *)(this + 0x88) + 0x6c))) != 0) &&
       (this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x88) + 0x6c))) + 0x1c))), this_00 != ((undefined *)GEN_TOP(0x0)))
       ) {
      *((ushort *)GEN_TOP(((int)this_00 + 0x22))) = *((ushort *)GEN_TOP(((int)this_00 + 0x22))) & 0x7fff;
      F_00573430(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this_00 + 0x18))));
    }
    AVar2 = this[0x114];
    if ((*(int *)(this + 0x88) != 0) &&
       (iVar11 = *((int *)GEN_TOP((*(int *)(this + 0x88) + 0x70))), iVar11 != 0)) {
      *((uint *)GEN_TOP((iVar11 + 0x84))) =
           *((uint *)GEN_TOP((iVar11 + 0x84))) ^
           ((uint)(byte)AVar2 << 0x14 ^ *((uint *)GEN_TOP((iVar11 + 0x84)))) & 0x100000;
      *((uint *)GEN_TOP((iVar11 + 0x88))) =
           *((uint *)GEN_TOP((iVar11 + 0x88))) ^
           ((uint)(AVar2 == (undefined1)0x0) << 7 ^ *((uint *)GEN_TOP((iVar11 + 0x88)))) & 0x80;
    }
    piVar7 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x88) + 0x88)));
    if (piVar7 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x30))))(piVar7 GEN_EDX_ARG,1);
    }
    puVar6 = *(undefined4 * PTR32 *)(this + 0x88);
    piVar7 = ((int *)GEN_TOP(puVar6[0x24]));
    if (piVar7 != ((int *)GEN_TOP(0x0))) {
      puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x30))))(piVar7 GEN_EDX_ARG,1)));
    }
  }
  iVar11 = *(int *)(this + 0x70);
  if (iVar11 != 0) {
    if (*((int *)GEN_TOP((iVar11 + 0x80))) == 0) {
      uVar14 = 0;
      uVar10 = F_00404270();
      puVar6 = ((undefined4 *)GEN_TOP(F_00406bd0(4,0,uVar10,uVar14)));
      if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) {
        puVar6 = ((undefined4 *)GEN_TOP(0x0));
      }
      else {
        *puVar6 = 0;
      }
      *((undefined4 * PTR32 *)GEN_TOP((iVar11 + 0x80))) = puVar6;
    }
    piVar7 = *((int * PTR32 *)GEN_TOP((iVar11 + 0x80)));
    uVar10 = F_00404270();
    puVar6 = ((undefined4 *)GEN_TOP(F_00406bd0(0x18,0,uVar10,0)));
    if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar6[4] = 0;
      puVar6[5] = 0;
      iVar12 = *piVar7;
      if (iVar12 == 0) {
        *piVar7 = (int)puVar6;
      }
      else {
        do {
          iVar4 = *((int *)GEN_TOP((iVar12 + 0x10)));
          if (iVar4 == 0) {
            *((undefined4 * PTR32 *)GEN_TOP((iVar12 + 0x10))) = puVar6;
            break;
          }
          iVar12 = iVar4;
        } while (iVar4 != 0);
      }
      *(undefined1 *)(puVar6 + 5) = 0x46;
      puVar6[5] = puVar6[5] & 0xffefffff;
      puVar6[3] = 0;
      puVar6[1] = iVar11;
      puVar6[2] = this;
      *puVar6 = 0;
    }
  }
  iVar11 = *(int *)(this + 0x6c);
  if (iVar11 != 0) {
    if (*((int *)GEN_TOP((iVar11 + 0x80))) == 0) {
      uVar14 = 0;
      uVar10 = F_00404270();
      puVar6 = ((undefined4 *)GEN_TOP(F_00406bd0(4,0,uVar10,uVar14)));
      if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) {
        puVar6 = ((undefined4 *)GEN_TOP(0x0));
      }
      else {
        *puVar6 = 0;
      }
      *((undefined4 * PTR32 *)GEN_TOP((iVar11 + 0x80))) = puVar6;
    }
    piVar7 = *((int * PTR32 *)GEN_TOP((iVar11 + 0x80)));
    uVar10 = F_00404270();
    puVar6 = ((undefined4 *)GEN_TOP(F_00406bd0(0x18,0,uVar10,0)));
    if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar6[4] = 0;
      puVar6[5] = 0;
      iVar12 = *piVar7;
      if (iVar12 == 0) {
        *piVar7 = (int)puVar6;
      }
      else {
        do {
          iVar4 = *((int *)GEN_TOP((iVar12 + 0x10)));
          if (iVar4 == 0) {
            *((undefined4 * PTR32 *)GEN_TOP((iVar12 + 0x10))) = puVar6;
            break;
          }
          iVar12 = iVar4;
        } while (iVar4 != 0);
      }
      *(undefined1 *)(puVar6 + 5) = 8;
      puVar6[5] = puVar6[5] & 0xffefffff;
      puVar6[3] = 0;
      puVar6[1] = iVar11;
      puVar6[2] = this;
      *puVar6 = 0;
    }
  }
  iVar11 = *(int *)(this + 0x6c);
  if (iVar11 != 0) {
    if (*((int *)GEN_TOP((iVar11 + 0x80))) == 0) {
      uVar14 = 0;
      uVar10 = F_00404270();
      puVar6 = ((undefined4 *)GEN_TOP(F_00406bd0(4,0,uVar10,uVar14)));
      if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) {
        puVar6 = ((undefined4 *)GEN_TOP(0x0));
      }
      else {
        *puVar6 = 0;
      }
      *((undefined4 * PTR32 *)GEN_TOP((iVar11 + 0x80))) = puVar6;
    }
    piVar7 = *((int * PTR32 *)GEN_TOP((iVar11 + 0x80)));
    uVar10 = F_00404270();
    puVar6 = ((undefined4 *)GEN_TOP(F_00406bd0(0x18,0,uVar10,0)));
    if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar6[4] = 0;
      puVar6[5] = 0;
      iVar12 = *piVar7;
      if (iVar12 == 0) {
        *piVar7 = (int)puVar6;
      }
      else {
        do {
          iVar4 = *((int *)GEN_TOP((iVar12 + 0x10)));
          if (iVar4 == 0) {
            *((undefined4 * PTR32 *)GEN_TOP((iVar12 + 0x10))) = puVar6;
            break;
          }
          iVar12 = iVar4;
        } while (iVar4 != 0);
      }
      *(undefined1 *)(puVar6 + 5) = 0xc;
      puVar6[5] = puVar6[5] & 0xffefffff;
      puVar6[3] = 0;
      puVar6[1] = iVar11;
      puVar6[2] = this;
      *puVar6 = 0;
    }
  }
  return (uint)puVar6;
}

/* ref: Component::GUI2::AtkComponentList::vf2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b4760(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(ushort * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x5b4760u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(ushort * param_5 = (ushort *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  int iVar1;
  char cVar2;
  ushort uVar3;
  code * pcVar4;
  undefined1 uVar5;
  byte bVar6;
  uint uVar7;
  undefined * pvVar8;
  undefined * pvVar9;
  int iVar10;
  int * piVar11;
  uint uVar12;
  undefined3 extraout_var = 0;
  int iVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  iVar10 = param_1[0x36];
  if (*((char *)GEN_TOP(((int)param_1 + 0x11f))) == '\0') {
    if ((((param_3 == 1) && (iVar10 < 0)) && (param_4[1] != 0)) &&
       (uVar7 = F_005bda70(((undefined *)GEN_TOP(*param_4)) GEN_EDX_FWD,0xe), uVar7 != 0)) {
      iVar10 = *((int *)GEN_TOP((uVar7 + 0x1fc)));
    }
  }
  else {
    iVar10 = param_1[0x33];
  }
  uVar7 = param_2 & 0xffff;
  if (0x43 < uVar7 - 3) {
    return uVar7 - 3;
  }
  pvVar8 = ((undefined *)GEN_TOP((uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x5b50c4) + uVar7 + 1)))));
  switch((unsigned int)(uintptr_t)(uVar7)) {
  case 3: ;
    if ((*((char *)GEN_TOP(((int)param_1 + 0x11f))) != '\0') &&
       (pvVar8 = ((undefined *)GEN_TOP(F_00589700(param_1 GEN_EDX_ARG,0))), param_1[0x36] < 0)) {
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x44))))(param_1 GEN_EDX_ARG,(uint)*param_5,(uint)param_5[1]);
      return uVar7;
    }
    break;
  case 4: ;
    if (param_3 == 1) {
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x88))))(param_1 GEN_EDX_ARG,0x1e,param_4,param_5,iVar10,1);
      return uVar7;
    }
    goto LAB_005b4c6a;
  case 5: ;
    if (param_3 == 4) {
      pvVar8 = REFG(void * PTR32, 0x1379860);
      if (*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x21d))) != '\0') {
        F_00589700(param_1 GEN_EDX_ARG,0);
        pvVar8 = ((undefined *)GEN_TOP(F_0059c700(param_1 GEN_EDX_ARG,1)));
        if (((-1 < param_1[0x33]) && (*((char *)GEN_TOP(((int)param_1 + 0x126))) != '\0')) &&
           ((*((char *)GEN_TOP(((int)param_1 + 0x127))) == '\0' &&
            (pvVar8 = ((undefined *)GEN_TOP(F_005615f0(param_1 GEN_EDX_ARG))), (char)pvVar8 != '\0')))) {
          uVar7 = F_005623b0(param_1 GEN_EDX_ARG,param_1[0x33]);
          return uVar7;
        }
      }
    }
    else {
      if (*((char *)GEN_TOP(((int)param_1 + 0x112))) == '\0') {
        uVar3 = *((ushort *)GEN_TOP(((int)param_1 + 0x10a)));
      }
      else {
        uVar3 = *(ushort *)(param_1 + 0x43);
      }
      pvVar8 = ((undefined *)GEN_TOP((uint)uVar3));
      if (*((char *)GEN_TOP(((int)param_1 + 0x115))) != '\0') {
        iVar10 = *((int *)GEN_TOP((param_1[0x22] + 0xb0)));
        iVar13 = *((int *)GEN_TOP((param_1[0x22] + 0xa8)));
        iVar1 = param_1[0x2f];
        F_00562160(param_1 GEN_EDX_ARG,0);
        iVar10 = (int)((float10)(float)((float10)iVar10 / (float10)iVar13) * (float10)iVar1);
        param_1[0x2c] = iVar10;
        uVar7 = F_00574c80(param_1[0x22] GEN_EDX_ARG,
                             (int)(((float10)iVar10 / (float10)param_1[0x2f]) *
                                  (float10)*((int *)GEN_TOP((param_1[0x22] + 0xa8)))),0,1);
        return uVar7;
      }
      if (0 < (short)uVar3) {
        param_1[0x2c] = *((int *)GEN_TOP((param_1[0x22] + 0xb0))) / (int)(short)uVar3;
        uVar7 = F_00562160(param_1 GEN_EDX_ARG,*((int *)GEN_TOP((param_1[0x22] + 0xb0))) % (int)(short)uVar3);
        return uVar7;
      }
    }
    break;
  case 6: ;
    if (param_1[0x32] != iVar10) {
      param_1[0x32] = iVar10;
    }
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x88))))(param_1 GEN_EDX_ARG,0x1f,param_4,param_5,iVar10,0);
    return uVar7;
  case 7: ;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x88))))(param_1 GEN_EDX_ARG,0x20,param_4,param_5,param_1[0x32],0);
    uVar7 = F_005c08c0(param_1 GEN_EDX_ARG);
    return uVar7;
  case 8: ;
    uVar7 = F_00589700(param_1 GEN_EDX_ARG,0);
    param_4[5] = param_4[5] | 0x10000;
    if ((char)param_1[0x45] == '\0') {
      return uVar7;
    }
    if (*((char *)GEN_TOP((param_1[0x22] + 0xc9))) != '\0') {
      return uVar7;
    }
    iVar10 = (uint)((short)param_5[2] < 1) * 2 - 1;
    iVar13 = param_1[0x2c] + iVar10;
    F_0057ac30(param_1 GEN_EDX_ARG,iVar13);
    pvVar8 = ((undefined *)GEN_TOP(param_1[0x36]));
    if ((-1 < (int)pvVar8) && (param_1[0x2c] == iVar13)) {
      pvVar9 = ((undefined *)GEN_TOP(((uint)*((ushort *)GEN_TOP(((int)param_1 + 0xee))) * iVar10 + (int)pvVar8)));
      param_1[0x36] = (int)pvVar9;
      if (((int)pvVar9 < 0) || (param_1[0x2b] <= (int)pvVar9)) {
        param_1[0x36] = -1;
        return (uint)pvVar9;
      }
      if (((*((int *)GEN_TOP((param_1[0x26] + (int)((int)(uintptr_t)pvVar9) * 8))) != 0) &&
          (uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x50))))(param_1 GEN_EDX_ARG,pvVar8), uVar7 != 0)) &&
         (uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x50))))(param_1 GEN_EDX_ARG,pvVar8), *((int *)GEN_TOP((uVar7 + 0x1e4))) != 0)) {
        uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x50))))(param_1 GEN_EDX_ARG,pvVar8);
        iVar10 = *((int *)GEN_TOP((param_1[0x26] + param_1[0x36] * 8)));
        uVar7 = F_00568410(*((undefined * PTR32 *)GEN_TOP((uVar7 + 0x1e4))) GEN_EDX_ARG);
        uVar7 = F_0055d920(((undefined *)GEN_TOP((iVar10 + 4))) GEN_EDX_ARG,uVar7);
        *((uint *)GEN_TOP((iVar10 + 0x1e4))) = uVar7;
      }
      iVar10 = param_1[0x32];
      if ((-1 < iVar10) && (iVar10 != param_1[0x36])) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x88))))(param_1 GEN_EDX_ARG,0x20,param_4,param_5,iVar10,0);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x88))))(param_1 GEN_EDX_ARG,0x1f,param_4,param_5,param_1[0x36],0);
      }
      pvVar8 = ((undefined *)GEN_TOP(param_1[0x36]));
LAB_005b4d1c: ;
      if (((undefined *)GEN_TOP(param_1[0x32])) != pvVar8) {
        param_1[0x32] = (int)pvVar8;
      }
    }
    goto LAB_005b4d2a;
  case 0xc: ;
    iVar10 = param_1[0x33];
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x50))))(param_1 GEN_EDX_ARG,iVar10);
    bVar6 = F_005b1dd0(param_1 GEN_EDX_ARG,param_5,iVar10,param_4,uVar7);
    pvVar8 = ((undefined *)GEN_TOP(CONCAT31(extraout_var,bVar6)));
    if (bVar6 != 0) {
      param_4[5] = param_4[5] | 0x10000;
      return (uint)pvVar8;
    }
    break;
  case 0x11: ;
    pvVar8 = ((undefined *)GEN_TOP(F_0059c680(param_1 GEN_EDX_ARG,param_4,param_5)));
    break;
  case 0x12: ;
    uVar7 = F_0059ec30(param_1 GEN_EDX_ARG,param_4,param_5);
    return uVar7;
  case 0x16: ;
    if (*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0xbc))) == '\0') {
      if (*((char *)GEN_TOP(((int)param_1 + 0x11f))) != '\0') {
        param_1[0x36] = iVar10;
      }
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x58))))(param_1 GEN_EDX_ARG,iVar10);
      pcVar4 = *((gen_code32 *)GEN_TOP((*param_1 + 0x88)));
      *((bool *)GEN_TOP(((int)param_1 + 0x113))) = (char)uVar7 == '\0';
      param_1[0x31] = iVar10;
      uVar7 = (*pcVar4)(param_1,0x1d,param_4,param_5,iVar10,1);
      return uVar7;
    }
LAB_005b4ed5: ;
    param_4[5] = param_4[5] | 0x10000;
    return (uint)pvVar8;
  case 0x17: ;
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x58))))(param_1 GEN_EDX_ARG,iVar10);
    bVar14 = (char)uVar7 == '\0';
    *((bool *)GEN_TOP(((int)param_1 + 0x113))) = bVar14;
    if (param_1[0x31] != iVar10) {
      return CONCAT31((int3)(uVar7 >> 8),bVar14);
    }
    pvVar9 = ((undefined *)GEN_TOP(param_1[0x30]));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x88))))(param_1 GEN_EDX_ARG,0x21,param_4,param_5,iVar10,1);
    if ((*((char *)GEN_TOP(((int)param_1 + 0x126))) != '\0') && (*((char *)GEN_TOP(((int)param_1 + 0x127))) != '\0')) {
      uVar7 = F_005615f0(param_1 GEN_EDX_ARG);
      if (((char)uVar7 == '\0') && ((char)param_5[3] == '\0')) {
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
      *((undefined1 *)GEN_TOP(((int)param_1 + 0x113))) = uVar5;
      piVar11 = ((int *)GEN_TOP(F_0057f8d0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x14))) GEN_EDX_ARG,param_1[0x1c])));
      if (((piVar11 != ((int *)GEN_TOP(0x0))) &&
          (uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar11 + 0x74))))(piVar11 GEN_EDX_ARG), (char)uVar7 != '\0')) ||
         (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x1c))) + 0xc))) != 0)) {
        *((undefined1 *)GEN_TOP(((int)param_1 + 0x113))) = 1;
        uVar7 = F_0057f8d0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x14))) GEN_EDX_ARG,param_1[0x1c]);
        if (uVar7 != 0) {
          uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x38))))(param_1 GEN_EDX_ARG);
          *((uint *)GEN_TOP((uVar7 + 0xa4))) = uVar12;
        }
      }
    }
    if (*((char *)GEN_TOP(((int)param_1 + 0x113))) != '\0') {
      if ((char)param_5[3] != '\x02') {
        F_005623b0(param_1 GEN_EDX_ARG,iVar10);
      }
      if (pvVar9 != ((undefined *)GEN_TOP(param_1[0x30]))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x88))))(param_1 GEN_EDX_ARG,0x23,param_4,param_5,iVar10,1);
      }
    }
    pvVar8 = ((undefined *)GEN_TOP(param_1[0x30]));
    if ((pvVar8 != ((undefined *)GEN_TOP(param_1[0x33]))) || (pvVar9 != pvVar8)) {
      pvVar8 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x88))))(param_1 GEN_EDX_ARG,0x24,param_4,param_5,iVar10,1)));
    }
LAB_005b4c6a: ;
    param_1[0x31] = -1;
    return (uint)pvVar8;
  case 0x19: ;
    if (param_3 == 1) {
      uVar7 = F_005bda70(((undefined *)GEN_TOP(*param_4)) GEN_EDX_ARG,0xe);
      if (uVar7 != 0) {
        iVar10 = *((int *)GEN_TOP((uVar7 + 0x1fc)));
      }
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x88))))(param_1 GEN_EDX_ARG,0x19,param_4,param_5,iVar10,1);
      return uVar7;
    }
    iVar10 = param_1[0x2c];
    if (*((char *)GEN_TOP((param_1[0x22] + 0xcb))) == '\0') {
      if (*((char *)GEN_TOP((param_1[0x22] + 0xcc))) != '\0') {
        iVar13 = iVar10 + 1;
        goto LAB_005b4cdc;
      }
    }
    else {
      iVar13 = iVar10 - 1;
LAB_005b4cdc: ;
      F_0057ac30(param_1 GEN_EDX_ARG,iVar13);
    }
    pvVar8 = ((undefined *)GEN_TOP(param_1[0x36]));
    if ((-1 < (int)pvVar8) && (param_1[0x2c] != iVar10)) {
      pvVar8 = ((undefined *)GEN_TOP(((int)pvVar8 +
                       ((uint)(*((char *)GEN_TOP((param_1[0x22] + 0xcb))) == '\0') * 2 - 1) *
                       (uint)*((ushort *)GEN_TOP(((int)param_1 + 0xee))))));
      param_1[0x36] = (int)pvVar8;
      goto LAB_005b4d1c;
    }
LAB_005b4d2a: ;
    piVar11 = ((int *)GEN_TOP(param_1[0x29]));
    if (piVar11 != ((int *)GEN_TOP(0x0))) {
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar11 + 0x30))))(piVar11 GEN_EDX_ARG);
      param_1[0x29] = 0;
      return uVar7;
    }
    break;
  case 0x22: ;
    if (((param_1[0x31] == iVar10) &&
        (pvVar8 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x88))))(param_1 GEN_EDX_ARG,0x22,param_4,param_5,iVar10,1))),
        (*((byte *)GEN_TOP(((int)param_4 + 0x16))) & 1) != 0)) && (*((char *)GEN_TOP(((int)param_1 + 0x113))) != '\0')) {
      pvVar8 = ((undefined *)GEN_TOP(F_005623b0(param_1 GEN_EDX_ARG,iVar10)));
    }
    param_1[0x31] = -1;
    return (uint)pvVar8;
  case 0x2d: ;
    cVar2 = *((char *)GEN_TOP(((int)param_1 + 0x113)));
    (*(int *)(gen_frame + 0x10)) = 0;
    (*(uint *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    iVar13 = *(int *)param_5;
    (*(undefined4 *)(gen_frame + 0x0)) = 0x2d;
    param_1[0x29] = iVar13;
    (*(int *)(gen_frame + 0x10)) = iVar10;
    if (((cVar2 == '\0') || (param_1[0x31] < 0)) ||
       (piVar11 = *(int * PTR32 *)param_5, piVar11 == ((int *)GEN_TOP(0x0)))) {
      F_005623b0(param_1 GEN_EDX_ARG,iVar10);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x74))))(param_1 GEN_EDX_ARG,iVar10,0);
      param_1[0x31] = iVar10;
    }
    else {
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar11 + 0xc))))(piVar11 GEN_EDX_ARG);
      uVar7 = F_00559c20(uVar7 GEN_EDX_ARG);
      if ((uVar7 != 0) && (uVar7 = F_005613a0(uVar7 GEN_EDX_ARG), uVar7 == 0xe)) {
        (*(int *)(gen_frame + 0x10)) = param_1[0x31];
      }
    }
    bVar6 = (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x18)) + 1)) ^ (*((char *)GEN_TOP(((int)param_1 + 0x11f))) * '\b' ^ (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x18)) + 1))) & 8;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x18)) + 1)) = bVar6;
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x18)) + 0)) = CONCAT11(bVar6,(undefined1)(*(undefined4 *)(gen_frame + 0x18)));
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x50))))(param_1 GEN_EDX_ARG,(*(int *)(gen_frame + 0x10)));
    (*(uint *)(gen_frame + 0x8)) = uVar7;
    pvVar8 = ((undefined *)GEN_TOP(0x0));
    if (uVar7 != 0) {
      *((int *)GEN_TOP((uVar7 + 0x144))) = param_1[0x39];
      uVar7 = F_005997b0(((undefined *)GEN_TOP(param_1[0x1c])) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
      pvVar8 = ((undefined *)GEN_TOP(0x0));
      if (uVar7 != 0) {
        pvVar8 = ((undefined *)GEN_TOP(CONCAT31((int3)(uVar7 >> 8),(*(undefined1 *)(gen_frame + 0x4)))));
        param_4[5] = param_4[5] | 0x80000;
        *((undefined1 *)GEN_TOP(((int)param_4 + 0x15))) = (*(undefined1 *)(gen_frame + 0x4));
        goto LAB_005b4ed5;
      }
    }
    break;
  case 0x30: ;
    (*(uint *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(int *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    uVar15 = *(undefined4 *)(param_5 + 4);
    (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(param_5 + 2);
    (*(uint *)(gen_frame + 0x8)) = *(undefined4 *)param_5;
    pvVar8 = ((undefined *)GEN_TOP(param_1[0x1c]));
    (*(undefined4 *)(gen_frame + 0x0)) = 0x30;
    (*(int *)(gen_frame + 0x10)) = uVar15;
    uVar7 = F_005997b0(pvVar8 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
    pvVar8 = ((undefined *)GEN_TOP(0x0));
    if (uVar7 != 0) {
      param_4[5] = param_4[5] | 0x80000;
      *((undefined1 *)GEN_TOP(((int)param_4 + 0x15))) = (*(undefined1 *)(gen_frame + 0x4));
      param_4[5] = param_4[5] | 0x10000;
      param_1[0x31] = -1;
      return CONCAT31((int3)(uVar7 >> 8),(*(undefined1 *)(gen_frame + 0x4)));
    }
    break;
  case 0x31: ;
    uVar7 = F_005b1be0(param_1 GEN_EDX_ARG,param_4,param_5,iVar10);
    param_1[0x31] = -1;
    return uVar7;
  case 0x46: ;
    if ((char)param_1[0x49] == '\0') {
      if (param_3 != 2) {
        if (((*((char *)GEN_TOP(((int)param_1 + 0x11f))) == '\0') &&
            (*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x21d))) != '\0')) &&
           ((0x7fffffff < (uint)param_1[0x36] && ((param_1[0x2b] != 0 && (param_1[0x33] == -2))))))
        {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x74))))(param_1 GEN_EDX_ARG,0,1);
        }
        uVar7 = F_0059c320(param_1 GEN_EDX_ARG,param_4,param_5);
        return uVar7;
      }
      *(undefined1 *)(param_1 + 0x49) = 1;
      pvVar9 = REFG(void * PTR32, 0x1379860);
      if (-1 < param_1[0x33]) {
        uVar15 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x14))) + 0xcc)));
        uVar16 = 0;
        uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x3c))))(param_1 GEN_EDX_ARG);
        pvVar8 = ((undefined *)GEN_TOP(F_0059b300(pvVar9 GEN_EDX_ARG,uVar7,uVar15,uVar16)));
      }
      *(undefined1 *)(param_1 + 0x49) = 0;
      param_4[5] = param_4[5] | 0x10000;
      return (uint)pvVar8;
    }
  }
  return (uint)pvVar8;
}

/* ref: Component::GUI2::AtkComponentDragDrop::vf2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b5110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x5b5110u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  undefined * this_00;
  
  uVar6 = param_1 & 0xffff;
  if (0x2e < uVar6 - 3) {
    return uVar6 - 3;
  }
  uVar7 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x5b52c8) + uVar6 + 1)));
  switch((unsigned int)(uintptr_t)(uVar6)) {
  case 3: ;
    uVar2 = param_4[1];
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(0x0));
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = ((undefined *)GEN_TOP(0x0));
    (*(uint *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    uVar3 = *param_4;
    (*(uint *)(gen_frame + 0x0)) = 3;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(uVar3));
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = ((undefined *)GEN_TOP(uVar2));
    if (this == ((undefined *)GEN_TOP(0x0))) {
      this_00 = ((undefined *)GEN_TOP(0x0));
    }
    else {
      this_00 = *(undefined * PTR32 *)(this + 0x70);
    }
    F_005997b0(this_00 GEN_EDX_FWD,&(*(uint *)(gen_frame + 0x0)));
    uVar6 = F_005b2db0(this GEN_EDX_ARG,param_3,param_4);
    return uVar6;
  case 4: ;
    uVar6 = F_005a1740(this GEN_EDX_ARG,param_3,param_4);
    return uVar6;
  default: ;
    goto switchD_005b5130_caseD_5;
  case 6: ;
    if (this == ((undefined *)GEN_TOP(0x0))) {
      return uVar7;
    }
    if (*(int *)(this + 0x70) == 0) {
      return 0;
    }
    if ((*((uint *)GEN_TOP((*(int *)(this + 0x70) + 0x84))) >> 0x15 & 1) == 0) {
      return 0;
    }
    F_0059fd80(this GEN_EDX_ARG,2);
    uVar5 = 0x32;
    break;
  case 7: ;
    if (this == ((undefined *)GEN_TOP(0x0))) {
      return uVar7;
    }
    if (*(int *)(this + 0x70) == 0) {
      return 0;
    }
    if ((*((uint *)GEN_TOP((*(int *)(this + 0x70) + 0x84))) >> 0x15 & 1) == 0) {
      return 0;
    }
    F_0059fd80(this GEN_EDX_ARG,4);
    uVar5 = 0x33;
    break;
  case 0xc: ;
    uVar6 = F_005b2c00(this GEN_EDX_ARG,param_3,param_4);
    return uVar6;
  case 0x31: ;
    if ((((byte)this[0xaa] & 1) == 0) && (uVar6 = F_005c0730(this GEN_EDX_ARG), (char)uVar6 != '\0')) {
      uVar6 = ((uint)(uint)(this)) & 0xffffff00;
    }
    else {
      uVar6 = 1;
    }
    uVar6 = F_005b1490(((undefined *)GEN_TOP((REFG(int, 0x1379860) + 0x3c))) GEN_EDX_ARG,param_4,*(undefined4 *)(this + 0x70), *(undefined4 *)(this + 0xa0),uVar6);
    return uVar6;
  }
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x0)) + 0)) = uVar5;
  (*(uint *)(gen_frame + 0x10)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(0x0));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = ((undefined *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this + 0x84;
  uVar1 = *((undefined1 *)GEN_TOP(((int)param_4 + 7)));
  uVar4 = *((ushort *)GEN_TOP(((int)param_4 + 6)));
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 0)) = *((undefined1 *)GEN_TOP(((int)param_4 + 6)));
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x0)) + 2)) = 0;
  (*(uint *)(gen_frame + 0x0)) = (uint)uVar5;
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = *(undefined * PTR32 *)(this + 0x70);
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 1)) = uVar1;
  (*(uint *)(gen_frame + 0x10)) = (uint)uVar4;
  uVar6 = F_005997b0(*(undefined * PTR32 *)(this + 0x70) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0)));
  uVar7 = 0;
  if (uVar6 != 0) {
    *((uint *)GEN_TOP((param_3 + 0x14))) = *((uint *)GEN_TOP((param_3 + 0x14))) | 0x10000;
    return param_3;
  }
switchD_005b5130_caseD_5: ;
  return uVar7;
}

/* ref: FUN_005b5300 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b5300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5b5300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined * this_00;
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  iVar1 = REFG(int, 0x1379860);
  if ((*(uint *)&REFG(undefined, 0x1379c60) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x1379c60) = *(uint *)&REFG(undefined, 0x1379c60) | 1;
    *(undefined4 *)&REFG(undefined, 0x1379c58) = 0;
    *(undefined2 *)&REFG(undefined, 0x1379c5c) = 0;
  }
  this_00 = ((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((REFG(int, 0x1379860) + 0x18)))));
  bVar2 = F_00a34970(*((undefined * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_FWD,1);
  if (bVar2 != 0) {
    iVar1 = *((int *)GEN_TOP(((int)this + 0x350)));
    if (*((short *)GEN_TOP(((int)this_00 + 0x7c8))) == 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this_00 + 0xc))) + 0x3c))))(*((int * PTR32 *)GEN_TOP(((int)this_00 + 0xc))) GEN_EDX_ARG);
      if ((char)uVar3 != '\0') {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this_00 + 0xc))) + 0x34))))(*((int * PTR32 *)GEN_TOP(((int)this_00 + 0xc))) GEN_EDX_ARG,0);
      }
    }
    else {
      F_00578b40(this_00 GEN_EDX_ARG,(int)*((short *)GEN_TOP(((int)this_00 + 0x7cc))));
    }
    if (iVar1 == -1) {
      return 1;
    }
    if (((*((char *)GEN_TOP(((int)this + 0x80))) != '\0') && (*((char *)GEN_TOP(((int)this + 0x7f))) != 0)) &&
       (*((char *)GEN_TOP(((int)this + 0x7f))) != 0xff)) {
      F_0059ce80(this GEN_EDX_ARG,0xf);
    }
    if (*((int *)GEN_TOP(((int)this + 0x148))) == 0) {
      return 1;
    }
    uVar5 = *((undefined4 *)GEN_TOP(((int)this + 0x14c)));
    uVar3 = F_0042a990((int)this + 0x9c GEN_EDX_ARG);
    uVar4 = F_0042a990((int)this + 0xf0 GEN_EDX_ARG);
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x148))))(*((undefined4 *)GEN_TOP(((int)this + 0x144))),0,uVar4,uVar3,uVar5)
    ;
    F_005b3080(this GEN_EDX_ARG,uVar3);
    return 1;
  }
  bVar2 = F_00a34970(*((undefined * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,2);
  if (bVar2 != 0) {
    if (*((short *)GEN_TOP(((int)this_00 + 0x7c8))) == 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this_00 + 0xc))) + 0x3c))))(*((int * PTR32 *)GEN_TOP(((int)this_00 + 0xc))) GEN_EDX_ARG);
      if ((char)uVar3 != '\0') {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this_00 + 0xc))) + 0x34))))(*((int * PTR32 *)GEN_TOP(((int)this_00 + 0xc))) GEN_EDX_ARG,2);
      }
    }
    else {
      F_00572a00(this_00 GEN_EDX_ARG,0);
    }
    if (*((int *)GEN_TOP(((int)this + 0x350))) == -1) {
      return 1;
    }
    if (*((char *)GEN_TOP(((int)this + 0x84))) != '\0') {
      F_0059cee0(this GEN_EDX_ARG,0);
    }
    if (*((int *)GEN_TOP(((int)this + 0x148))) == 0) {
      return 1;
    }
    if (*((int *)GEN_TOP(((int)this + 0x144))) == 0) {
      return 1;
    }
    uVar5 = *((undefined4 *)GEN_TOP(((int)this + 0x14c)));
    uVar3 = F_0042a990((int)this + 0x9c GEN_EDX_ARG);
    uVar4 = F_0042a990((int)this + 0xf0 GEN_EDX_ARG);
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0x148))))(*((undefined4 *)GEN_TOP(((int)this + 0x144))),1,uVar4,uVar3,uVar5)
    ;
    F_005b3080(this GEN_EDX_ARG,uVar3);
    return 1;
  }
  bVar2 = F_00a34970(*((undefined * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,5);
  if (bVar2 == 0) {
    bVar2 = F_00a34970(*((undefined * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,9);
    if (bVar2 == 0) {
      bVar2 = F_00a34970(*((undefined * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,10);
      if (bVar2 == 0) {
        bVar2 = F_00a34970(*((undefined * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,7);
        if (bVar2 == 0) {
          bVar2 = F_00a34970(*((undefined * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,8);
          if (bVar2 == 0) {
            bVar2 = F_00a34970(*((undefined * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,4);
            if ((bVar2 == 0) && (bVar2 = F_00a34a70(*((undefined * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,4), bVar2 == 0)) {
              bVar2 = F_00a34970(*((undefined * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,0xf);
              if (bVar2 == 0) {
                bVar2 = F_00a34a70(*((undefined * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,9);
                if (bVar2 == 0) {
                  bVar2 = F_00a34a70(*((undefined * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,10);
                  if (bVar2 == 0) {
                    return 1;
                  }
                  if (*((short *)GEN_TOP(((int)this_00 + 0x7c8))) == 0) {
                    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this_00 + 0xc))) + 0x3c))))
                                      (*((int * PTR32 *)GEN_TOP(((int)this_00 + 0xc))) GEN_EDX_ARG);
                    if ((char)uVar3 == '\0') {
                      return 1;
                    }
                    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1488338) + 8))) + 0x18))))
                              (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1488338) + 8))) GEN_EDX_ARG,0x28,0);
                    return 1;
                  }
                  F_00572b60(this_00 GEN_EDX_ARG,1,1);
                  return 1;
                }
                if (*((short *)GEN_TOP(((int)this_00 + 0x7c8))) != 0) {
                  F_00572b60(this_00 GEN_EDX_ARG,0xffffffff,1);
                  return 1;
                }
                uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this_00 + 0xc))) + 0x3c))))
                                  (*((int * PTR32 *)GEN_TOP(((int)this_00 + 0xc))) GEN_EDX_ARG);
                if ((char)uVar3 == '\0') {
                  return 1;
                }
                ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1488338) + 8))) + 0x18))))
                          (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1488338) + 8))) GEN_EDX_ARG,0x26,0);
                return 1;
              }
              uVar5 = 9;
            }
            else {
              uVar5 = 8;
            }
          }
          else {
            uVar5 = 0x27;
          }
        }
        else {
          uVar5 = 0x25;
        }
      }
      else {
        uVar5 = 0x28;
      }
    }
    else {
      uVar5 = 0x26;
    }
    F_00595bf0(this_00 GEN_EDX_ARG,uVar5,&REFG(undefined, 0x1379c58));
    if ((*((short *)GEN_TOP(((int)this_00 + 0x7c8))) != 0) || (*((char *)GEN_TOP(((int)this_00 + 0x7ca))) != '\0')) {
      *((undefined1 *)GEN_TOP(((int)this_00 + 0x7ca))) = 0;
    }
    return 1;
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar1 + 0x34))) + 0x1c))))(*((int * PTR32 *)GEN_TOP((iVar1 + 0x34))) GEN_EDX_ARG);
  if ((char)uVar3 != '\0') {
    return 1;
  }
  if (this == ((undefined *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar1 + 0x34))) + 0x14))))(*((int * PTR32 *)GEN_TOP((iVar1 + 0x34))) GEN_EDX_ARG);
    return 1;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar1 + 0x34))) + 0x14))))(*((int * PTR32 *)GEN_TOP((iVar1 + 0x34))) GEN_EDX_ARG);
  return 1;
}

/* ref: Component::GUI2::AtkComponentTextInput::vf2 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_005b56c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(uint * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x5b56c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(uint * param_4 = (uint *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_GS(0xd4, 12, 4);
  byte bVar1;
  uint uVar2;
  undefined * pAVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  int iVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xcc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd0));
  uVar2 = param_1 & 0xffff;
  if (0x43 < uVar2 - 3) {
    return uVar2 - 3;
  }
  pAVar3 = ((undefined *)GEN_TOP((uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x5b5f84) + uVar2 + 1)))));
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 3: ;
    if (((param_2 == 0x400) && (this[0x84] != (undefined1)0x0)) &&
       (-1 < *(int *)(this + 0x350))) {
      F_0056a3d0(REFG(void * PTR32, 0x1379860) GEN_EDX_FWD,5,0x400,this,0,0);
      F_0056a3d0(REFG(void * PTR32, 0x1379860) GEN_EDX_ARG,4,0x400,this,0,0);
      uVar2 = F_00577ea0(*(undefined * PTR32 *)(this + 0x8c) GEN_EDX_ARG,(uint)(ushort)*param_4,
                           (uint)*((ushort *)GEN_TOP(((int)param_4 + 2))),0);
      uVar2 = F_005ac260(this GEN_EDX_ARG,uVar2,uVar2,uVar2,1,0,0);
      return uVar2;
    }
    break;
  case 4: ;
    if (param_2 == 0x400) {
      uVar2 = F_00577ea0(*(undefined * PTR32 *)(this + 0x8c) GEN_EDX_ARG,(uint)(ushort)*param_4,
                           (uint)*((ushort *)GEN_TOP(((int)param_4 + 2))),0);
      bVar1 = F_005c08f0(this GEN_EDX_ARG);
      if (bVar1 == 0) {
        F_005ac260(this GEN_EDX_ARG,uVar2,*(undefined4 *)(this + 0x150),uVar2,1,0,0);
      }
LAB_005b5ec2: ;
      F_00583770((int)REFG(void * PTR32, 0x1379860) + 0x23c GEN_EDX_ARG,5,0x400,this,0);
      uVar2 = F_00583770((int)REFG(void * PTR32, 0x1379860) + 0x23c GEN_EDX_ARG,4,0x400,this,0);
      return uVar2;
    }
    break;
  case 5: ;
    if (param_2 == 0x400) {
      uVar2 = F_00577ea0(*(undefined * PTR32 *)(this + 0x8c) GEN_EDX_ARG,(uint)(ushort)*param_4,
                           (uint)*((ushort *)GEN_TOP(((int)param_4 + 2))),0);
      if (-1 < *(int *)(this + 0x350)) {
        uVar2 = F_005ac260(this GEN_EDX_ARG,uVar2,*(undefined4 *)(this + 0x150),uVar2,1,0,0);
        return uVar2;
      }
      goto LAB_005b5ec2;
    }
    break;
  case 9: ;
switchD_005b56f5_caseD_9: ;
    *((uint *)GEN_TOP((param_3 + 0x14))) = *((uint *)GEN_TOP((param_3 + 0x14))) | 0x210000;
    return (uint)pAVar3;
  case 0xc: ;
    if (param_2 == 0x301) {
      if ((char)param_4[1] != '\0') {
        return (uint)pAVar3;
      }
      if (*param_4 != 1) {
        return (uint)pAVar3;
      }
      pAVar3 = ((undefined *)GEN_TOP(F_0059b300(REFG(void * PTR32, 0x1379860) GEN_EDX_ARG,*(undefined4 *)(this + 0x98),*(undefined4 *)(this + 0x144),
                            0)));
      goto switchD_005b56f5_caseD_9;
    }
    bVar1 = (byte)param_4[1];
    if ((bVar1 != 0) && (bVar1 != 2)) {
      return (uint)bVar1;
    }
    uVar2 = *param_4;
    if (uVar2 == 9) {
      if (this[0x80] == (undefined1)0x0) {
        return 9;
      }
      if ((*((byte *)GEN_TOP(((int)param_4 + 5))) & 4) == 0) {
        pAVar3 = ((undefined *)GEN_TOP((int)(char)this[0x7f]));
        if ((pAVar3 != ((undefined *)GEN_TOP(0x0))) && (pAVar3 != ((undefined *)GEN_TOP(0xff)))) {
          bVar1 = F_0059ce80(this GEN_EDX_ARG,0xf);
          pAVar3 = ((undefined *)GEN_TOP(CONCAT31(extraout_var,bVar1)));
        }
      }
      else {
        pAVar3 = ((undefined *)GEN_TOP(F_0059cee0(this GEN_EDX_ARG,1)));
      }
    }
    else if (uVar2 == 0xd) {
      if ((((((byte)this[0x1df] & 8) == 0) && (this[0x80] != (undefined1)0x0)) &&
          ((char)this[0x7f] != 0)) && ((char)this[0x7f] != 0xff)) {
        F_0059ce80(this GEN_EDX_ARG,0xf);
      }
      if (*(int *)(this + 0x148) != 0) {
        uVar7 = *(undefined4 *)(this + 0x14c);
        uVar2 = F_0042a990(this + 0x9c GEN_EDX_ARG);
        uVar4 = F_0042a990(this + 0xf0 GEN_EDX_ARG);
        uVar2 = ((code *)*(gen_code32 *)(this + 0x148))(*(undefined4 *)(this + 0x144),0,uVar4,uVar2,uVar7);
        F_005b3080(this GEN_EDX_ARG,uVar2);
      }
      F_0042ccf0(this + 0x1fc GEN_EDX_ARG,this + 0x9c);
      pAVar3 = ((undefined *)GEN_TOP(F_0042ccf0(this + 0x250 GEN_EDX_ARG,this + 0xf0)));
    }
    else {
      if (uVar2 != 0x1b) {
        return uVar2;
      }
      pAVar3 = ((undefined *)GEN_TOP(0x1b));
      if (this[0x84] != (undefined1)0x0) {
        pAVar3 = ((undefined *)GEN_TOP(F_0059cee0(this GEN_EDX_ARG,0)));
      }
      if ((*(int *)(this + 0x148) != 0) && (*(int *)(this + 0x144) != 0)) {
        uVar7 = *(undefined4 *)(this + 0x14c);
        uVar2 = F_0042a990(this + 0x9c GEN_EDX_ARG);
        uVar4 = F_0042a990(this + 0xf0 GEN_EDX_ARG);
        uVar2 = ((code *)*(gen_code32 *)(this + 0x148))(*(undefined4 *)(this + 0x144),1,uVar4,uVar2,uVar7);
        pAVar3 = ((undefined *)GEN_TOP(F_005b3080(this GEN_EDX_ARG,uVar2)));
      }
    }
    goto LAB_005b5f3f;
  case 0xf: ;
    bVar1 = F_005b5300(this GEN_EDX_ARG,param_4);
    pAVar3 = ((undefined *)GEN_TOP(CONCAT31(extraout_var_00,bVar1)));
    if (bVar1 == 0) {
      return (uint)pAVar3;
    }
    goto LAB_005b5f3f;
  case 0x11: ;
    if (this[0x1f8] != (undefined1)0x0) {
      if ((this[0x84] == (undefined1)0x0) &&
         (F_005d3ea0(this GEN_EDX_ARG,0x12), this[0x1f9] == (undefined1)0x0)) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x38))) + 8))))
                  (*((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x38))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),0x23);
        F_005a2670(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
      }
      this[0x84] = (undefined1)0x1;
      pAVar3 = this + 0x16c;
      *((undefined * PTR32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x18))) + 4))) = pAVar3;
      if (*(int *)(this + 0x8c) != 0) {
        F_005abfe0(this GEN_EDX_ARG,1,this + 0x354);
        if ((*(int *)(this + 0x90) != 0) &&
           (iVar5 = *((int *)GEN_TOP((*(int *)(this + 0x90) + 0x1c))), iVar5 != 0)) {
          *((ushort *)GEN_TOP((iVar5 + 0x22))) = *((ushort *)GEN_TOP((iVar5 + 0x22))) | 0x8000;
          *((undefined4 *)GEN_TOP((iVar5 + 0x18))) = 0;
        }
        iVar5 = *(int *)(this + 0x90);
        if (iVar5 != 0) {
          *((uint *)GEN_TOP((iVar5 + 0x84))) = *((uint *)GEN_TOP((iVar5 + 0x84))) | 0x100000;
          *((uint *)GEN_TOP((iVar5 + 0x88))) = *((uint *)GEN_TOP((iVar5 + 0x88))) & 0xffffff7f;
        }
        F_0042cbc0(((undefined1 *)(gen_frame + 0x78)) GEN_EDX_ARG,this + 0x9c);
        F_0042cbc0(((undefined1 *)(gen_frame + 0x24)) GEN_EDX_ARG,this + 0xf0);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x38))) + 4))))
                  (*((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x38))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x1c)),7,0xd,this + 0x354);
        if (this[0x1f9] == (undefined1)0x0) {
          F_00593de0(**((undefined4 * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x18))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x78)),((undefined1 *)(gen_frame + 0x24)),0xffffffff,0,0,
                       1,0);
        }
        *(uint *)(this + 0x150) = (uint)*((ushort *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x18))) + 0x26)));
        *(uint *)(this + 0x154) = (uint)*((ushort *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x18))) + 0x28)));
        *(int *)(this + 0x158) = (int)*((short *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x18))) + 0x22)));
        F_0042ccf0(this + 0x1fc GEN_EDX_ARG,this + 0x9c);
        F_0042ccf0(this + 0x250 GEN_EDX_ARG,this + 0xf0);
        if (*(int *)(this + 0x2f8) != 0) {
          F_0042e430(this + 0x2a4 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(this + 0x2f8) + 0xf0))));
        }
        if (this[0x1f9] == (undefined1)0x0) {
          F_005ac260(this GEN_EDX_ARG,*(undefined4 *)(this + 0x158),*(undefined4 *)(this + 0x150),
                       *(undefined4 *)(this + 0x154),0,0,1);
        }
        this[0x1f9] = (undefined1)0x0;
        F_005a2670(&(*(undefined * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
        F_0042c880(((undefined1 *)(gen_frame + 0x24)) GEN_EDX_ARG);
        uVar6 = F_0042c880(((undefined1 *)(gen_frame + 0x78)) GEN_EDX_ARG);
        return (uint)uVar6;
      }
    }
    break;
  case 0x12: ;
    if (this[0x1f8] != (undefined1)0x0) {
      if (*(int *)(this + 0x300) != 0) {
        iVar5 = 0;
        (*(undefined * PTR32 *)(gen_frame + 0x18)) = this + 0x308;
        do {
          uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x38))))(*(int * PTR32 *)(*(undefined * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG);
          if (param_4[1] == uVar2) {
            this[0x1f9] = (undefined1)0x1;
            return uVar2;
          }
          (*(undefined * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 *)(gen_frame + 0x18)) + 4;
          iVar5 = iVar5 + 1;
        } while (iVar5 < 9);
      }
      this[0x84] = (undefined1)0x0;
      *((undefined4 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x18))) + 4))) = 0;
      F_005d3ea0(this GEN_EDX_ARG,0x11);
      F_0056e5a0(this GEN_EDX_ARG);
      *(undefined4 *)(this + 0x350) = 0;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x38))) + 8))))
                (*((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x38))) GEN_EDX_ARG,((uint *)(gen_frame + 0x10)),3);
      pAVar3 = ((undefined *)GEN_TOP((((uint *)(gen_frame + 0x10))[0] >> 5)));
      if (((uint)pAVar3 & 1) != 0) {
        pAVar3 = ((undefined *)GEN_TOP(F_005a0260(((uint *)(gen_frame + 0x10)) GEN_EDX_ARG)));
      }
      ((uint *)(gen_frame + 0x10))[0] = 0;
      if (*(int *)(this + 0x8c) != 0) {
        F_005abfe0(this GEN_EDX_ARG,0,this + 0x354);
        F_0057cde0(this GEN_EDX_ARG,0);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x38))) + 4))))
                  (*((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x38))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x1c)),7,0xd,this + 0x354);
        if (((byte)(*(undefined * PTR32 *)(gen_frame + 0x1c)) & 0xf) == 6) {
          F_0042e430(this + 0xf0 GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0x20)));
          F_0058b2a0(this GEN_EDX_ARG);
        }
        if (*(int *)(this + 0x148) != 0) {
          uVar7 = *(undefined4 *)(this + 0x14c);
          uVar2 = F_0042a990(this + 0x9c GEN_EDX_ARG);
          uVar4 = F_0042a990(this + 0xf0 GEN_EDX_ARG);
          uVar2 = ((code *)*(gen_code32 *)(this + 0x148))(*(undefined4 *)(this + 0x144),2,uVar4,uVar2,uVar7);
          F_005b3080(this GEN_EDX_ARG,uVar2);
        }
        iVar5 = *(int *)(this + 0x8c);
        if (iVar5 != 0) {
          *((undefined4 *)GEN_TOP((iVar5 + 0x104))) = 0;
          *((undefined4 *)GEN_TOP((iVar5 + 0x108))) = 0;
        }
        iVar5 = **((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x18)));
        if ((((*((short *)GEN_TOP((iVar5 + 0x7c8))) == 0) &&
             (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar5 + 0xc))) + 0x3c))))(*((int * PTR32 *)GEN_TOP((iVar5 + 0xc))) GEN_EDX_ARG),
             (char)uVar2 == '\0')) && (*((char *)GEN_TOP((iVar5 + 0x849))) != '\0')) &&
           (*((int *)GEN_TOP((iVar5 + 0x10))) != 0)) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar5 + 0x10))) + 0xc))))(*((int * PTR32 *)GEN_TOP((iVar5 + 0x10))) GEN_EDX_ARG);
        }
        uVar2 = F_005a2670(&(*(undefined * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
        return uVar2;
      }
    }
    break;
  case 0x17: ;
    pAVar3 = *(undefined * PTR32 *)(this + 0x304);
    if (-1 < (int)pAVar3) {
      (*(undefined * PTR32 *)(gen_frame + 0x1c)) = ((undefined *)GEN_TOP(0x0));
      F_004311b0(&(*(undefined * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,pAVar3 + param_2);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x38))) + 4))))
                (*((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x38))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),9,1,&(*(undefined * PTR32 *)(gen_frame + 0x1c)));
      F_0059b300(REFG(void * PTR32, 0x1379860) GEN_EDX_ARG,*(undefined4 *)(this + 0x98),*(undefined4 *)(this + 0x144),0);
      F_005a2670(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      pAVar3 = (*(undefined * PTR32 *)(gen_frame + 0x1c));
      if ((((uint)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x1c))) >> 5 & 1) != 0) && ((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != ((undefined4 *)GEN_TOP(0x0)))) {
        pAVar3 = ((undefined *)GEN_TOP(((uint)(*(undefined * PTR32 *)(gen_frame + 0x1c)) & 0xf)));
        if (pAVar3 == ((undefined *)GEN_TOP(0x9))) {
          F_00488040((*(undefined4 * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x18)),*(*(undefined4 * PTR32 *)(gen_frame + 0x20)),(*(undefined4 * PTR32 *)(gen_frame + 0x20))[1]);
          F_00488dc0((*(undefined4 * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG);
          uVar2 = F_00406ad0((*(undefined4 * PTR32 *)(gen_frame + 0x20)));
          return uVar2;
        }
        if ((pAVar3 == (undefined *)&REFG(undefined, 0x6)) ||
           (pAVar3 == ((undefined *)GEN_TOP(0x7)))) {
          uVar2 = F_00406ad0((*(undefined4 * PTR32 *)(gen_frame + 0x20)));
          return uVar2;
        }
      }
    }
    break;
  case 0x46: ;
    if ((this[0x80] != (undefined1)0x1) || (param_4[2] == 0x11)) {
      bVar1 = F_00563900(this GEN_EDX_ARG,param_4[2]);
      if (bVar1 == 0) {
        return CONCAT31(extraout_var_01,bVar1);
      }
    }
    pAVar3 = ((undefined *)GEN_TOP(F_0059b300(REFG(void * PTR32, 0x1379860) GEN_EDX_ARG,*(undefined4 *)(this + 0x98),*(undefined4 *)(this + 0x144),0)))
    ;
LAB_005b5f3f: ;
    *((uint *)GEN_TOP((param_3 + 0x14))) = *((uint *)GEN_TOP((param_3 + 0x14))) | 0x10000;
  }
  return (uint)pAVar3;
}

/* ref: FUN_005b5fd0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005b5fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x5b5fd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(uint * param_5 = (uint *)(uintptr_t)gen_a5;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = param_1;
  (*(undefined4 *)(gen_frame + 0x8)) = param_3;
  (*(undefined4 *)(gen_frame + 0x4)) = param_2;
  uVar1 = *param_5;
  (*(undefined4 *)(gen_frame + 0xc)) = param_4;
  (*(uint *)(gen_frame + 0x10)) = uVar1;
  if ((uVar1 & 0xf) == 9) {
    (*(uint *)(gen_frame + 0x14)) = 0;
  }
  else {
    (*(uint *)(gen_frame + 0x10)) = uVar1 & 0xf;
    (*(uint *)(gen_frame + 0x14)) = param_5[1];
  }
  if ((uVar1 >> 5 & 1) != 0) {
    F_00594f30(&(*(uint *)(gen_frame + 0x10)) GEN_EDX_FWD,param_5);
  }
  F_005d4a80(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  if (((*(uint *)(gen_frame + 0x10)) >> 5 & 1) != 0) {
    F_005a0260(&(*(uint *)(gen_frame + 0x10)) GEN_EDX_ARG);
  }
  F_00588ae0(this GEN_EDX_ARG);
  return;
}

/* ref: Component::GUI2::AtkModule::vf29 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b6060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x5b6060u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  if (*(undefined * PTR32 *)(this + 0x22238) != ((undefined *)GEN_TOP(0x0))) {
    F_005b5fd0(*(undefined * PTR32 *)(this + 0x22238) GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
    return 1;
  }
  return 0;
}

/* ref: FUN_005b60a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b60a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5b60a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x20)));
  bVar4 = 1;
  iVar3 = 0;
  if (*((int * PTR32 *)GEN_TOP(((int)this + 0x14))) != ((int *)GEN_TOP(0x0))) {
    iVar3 = **((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
  }
  if (*((uint *)GEN_TOP((iVar3 + 8))) <= uVar2) {
    uVar2 = uVar2 - *((uint *)GEN_TOP((iVar3 + 8)));
  }
  iVar3 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 4))) + uVar2 * 4)));
  if (*((int *)GEN_TOP((iVar3 + 0xc))) != 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 0xc))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 0xc))) GEN_EDX_FWD,param_1,iVar3 + 0x10);
    bVar4 = (byte)uVar2;
  }
  if (*((int *)GEN_TOP(((int)this + 0x24))) != 0) {
    iVar3 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + *((int *)GEN_TOP(((int)this + 0x20))) * 4)));
    if ((*((uint *)GEN_TOP((iVar3 + 0x10))) >> 5 & 1) != 0) {
      F_005a0260(((undefined *)GEN_TOP((iVar3 + 0x10))) GEN_EDX_ARG);
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = 0;
    *((int *)GEN_TOP(((int)this + 0x20))) = *((int *)GEN_TOP(((int)this + 0x20))) + 1;
    if (*((uint *)GEN_TOP(((int)this + 0x1c))) <= *((uint *)GEN_TOP(((int)this + 0x20)))) {
      *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
    }
    piVar1 = ((int *)GEN_TOP(((int)this + 0x24)));
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
    }
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x46))) = 0;
  F_00588ae0(this GEN_EDX_ARG);
  return bVar4;
}

/* ref: FUN_005b6140 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b6140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x5b6140u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined4 uVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x22238))) != ((undefined *)GEN_TOP(0x0))) {
    if ((*((byte *)GEN_TOP((param_2 + 8))) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
    }
    F_005b60a0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x22238))) GEN_EDX_FWD,uVar1);
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: FUN_005b6180 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b6180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8), GEN_P(undefined4 param_9, unsigned int gen_a9))
{
  GEN_ENTER(0x5b6180u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[3])REFP(0x10a0a44));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[8])REFP(0x10a0a20));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10a1c3c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[3])REFP(0x10a1c2c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[8])REFP(0x10a1c08));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  F_00a29aa0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 200))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xcc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xe8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf0))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0xf4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xfc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x100))) = 0;
  *((int *)GEN_TOP(((int)this + 0x104))) = (int)this + 0x20ea0;
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x108))) = ((undefined *)GEN_TOP(((int)this + 0x18)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x110))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x128))) = 0;
  uVar1 = F_004296a0(0xc,0,400);
  *((uint *)GEN_TOP(((int)this + 0x124))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x124))) + 4))) = *((int *)GEN_TOP(((int)this + 0x124)));
  *((undefined4 *)GEN_TOP(((int)this + 0x130))) = param_6;
  F_00a4b300(((undefined *)GEN_TOP(((int)this + 0x134))) GEN_EDX_ARG,0x8000);
  F_005672b0(((undefined *)GEN_TOP(((int)this + 0x20148))) GEN_EDX_ARG,(int)this + 0x2224c);
  *((undefined4 *)GEN_TOP(((int)this + 0x20dbc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20dc0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20dc4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20dc8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20dcc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20dd0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20dd4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20dd8))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x20ddc))) = 0;
  F_00556fb0(((undefined *)GEN_TOP(((int)this + 0x20de0))) GEN_EDX_ARG,(int)(short)param_7,(int)(short)param_8,
               (int)(short)param_9);
  *((undefined4 *)GEN_TOP(((int)this + 0x20e10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20e14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20e18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20e1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20e20))) = 0;
  F_005d1180(((undefined4 *)GEN_TOP(((int)this + 0x20e18))) GEN_EDX_ARG,0x100);
  F_0058cdd0(((undefined *)GEN_TOP(((int)this + 0x20e28))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x20e70))) = (*(undefined * PTR32 (*)[1])REFP(0x10a0edc));
  *((undefined4 *)GEN_TOP(((int)this + 0x20e74))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20e78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20e7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20e84))) = 0;
  uVar1 = F_004296a0(0x10,0,400);
  *((uint *)GEN_TOP(((int)this + 0x20e80))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20e80))) + 4))) = *((int *)GEN_TOP(((int)this + 0x20e80)));
  *((undefined4 *)GEN_TOP(((int)this + 0x20e90))) = 0;
  uVar1 = F_004296a0(0xc,0,400);
  *((uint *)GEN_TOP(((int)this + 0x20e8c))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20e8c))) + 4))) = *((int *)GEN_TOP(((int)this + 0x20e8c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x20e98))) = param_5;
  *((undefined4 *)GEN_TOP(((int)this + 0x20e9c))) = 0;
  F_005a2480(((undefined *)GEN_TOP(((int)this + 0x20ea0))) GEN_EDX_ARG,param_2);
  *((undefined4 *)GEN_TOP(((int)this + 0x22214))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x22218))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2221c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x22224))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x22230))) = 0;
  uVar1 = F_004296a0(0x1c,0,400);
  *((uint *)GEN_TOP(((int)this + 0x2222c))) = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2222c))) + 4))) = *((int *)GEN_TOP(((int)this + 0x2222c)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2222c))) + 8))) = *((int *)GEN_TOP(((int)this + 0x2222c)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2222c))) + 0x18))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2222c))) + 0x19))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x22238))) = 0;
  F_0049e6a0((int)this + 0x2223c GEN_EDX_ARG,param_1,1);
  F_0055bb20(((undefined *)GEN_TOP(((int)this + 0x2224c))) GEN_EDX_ARG,param_4,(int)this + 0x2223c,param_3,(int)this + 0x20ea0
               ,(int)this + 0x18);
  F_0042b630((int)this + 0x22a98 GEN_EDX_ARG);
  F_0042b630((int)this + 0x22aec GEN_EDX_ARG);
  F_0042b630((int)this + 0x22b40 GEN_EDX_ARG);
  F_0042b630((int)this + 0x22b94 GEN_EDX_ARG);
  *((undefined2 *)GEN_TOP(((int)this + 0x22be8))) = 0x400;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x22bec))) = (*(undefined * PTR32 (*)[8])REFP(0x10a0cc4));
  uVar2 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x22d10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x22d14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x22d18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x22d28))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x22d2c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x22d2e))) = 0;
  uVar1 = F_00404270();
  this_00 = ((undefined *)GEN_TOP(F_00406bd0(0x3b0,0,uVar1,uVar2)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_005b0190(this_00 GEN_EDX_ARG,(int)this + 0xbc,(int)this + 0xec,(int)this + 0x124,
                         (int)this + 0x134,*((undefined4 *)GEN_TOP(((int)this + 0x130))),(int)this + 0x20148,
                         ((undefined4 *)GEN_TOP(((int)this + 0x20dbc))),(int)this + 0x20de0,(int)this + 0x20e10
                         ,(int)this + 0x20e28,(int)this + 0x20e70,param_3,(int)this + 0x22bec,
                         (int)this + 4);
  }
  *((uint *)GEN_TOP(((int)this + 0xb8))) = uVar1;
  F_005d1230(((undefined *)GEN_TOP(((int)this + 0x22214))) GEN_EDX_ARG,0x3b);
  if (*((int *)GEN_TOP(((int)this + 0x22218))) - *((int *)GEN_TOP(((int)this + 0x22214))) >> 2 == 0) {
    F_005d2940(((undefined *)GEN_TOP(((int)this + 0x22214))) GEN_EDX_ARG,1);
  }
  **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x22214))) = ((code *)REFP(0x5a5380));
  if ((uint)(*((int *)GEN_TOP(((int)this + 0x22218))) - *((int *)GEN_TOP(((int)this + 0x22214))) >> 2) < 2) {
    F_005d2940(((undefined *)GEN_TOP(((int)this + 0x22214))) GEN_EDX_ARG,2);
  }
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x22214))) + 4))) = ((code *)REFP(0x5a53a0));
  if ((uint)(*((int *)GEN_TOP(((int)this + 0x22218))) - *((int *)GEN_TOP(((int)this + 0x22214))) >> 2) < 3) {
    F_005d2940(((undefined *)GEN_TOP(((int)this + 0x22214))) GEN_EDX_ARG,3);
  }
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x22214))) + 8))) = ((code *)REFP(0x5a53b0));
  if ((uint)(*((int *)GEN_TOP(((int)this + 0x22218))) - *((int *)GEN_TOP(((int)this + 0x22214))) >> 2) < 4) {
    F_005d2940(((undefined *)GEN_TOP(((int)this + 0x22214))) GEN_EDX_ARG,4);
  }
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x22214))) + 0xc))) = ((code *)REFP(0x5a5430));
  if ((uint)(*((int *)GEN_TOP(((int)this + 0x22218))) - *((int *)GEN_TOP(((int)this + 0x22214))) >> 2) < 5) {
    F_005d2940(((undefined *)GEN_TOP(((int)this + 0x22214))) GEN_EDX_ARG,5);
  }
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x22214))) + 0x10))) = ((code *)REFP(0x5a54f0));
  if ((uint)(*((int *)GEN_TOP(((int)this + 0x22218))) - *((int *)GEN_TOP(((int)this + 0x22214))) >> 2) < 6) {
    F_005d2940(((undefined *)GEN_TOP(((int)this + 0x22214))) GEN_EDX_ARG,6);
  }
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x22214))) + 0x14))) = ((code *)REFP(0x5a55c0));
  if ((uint)(*((int *)GEN_TOP(((int)this + 0x22218))) - *((int *)GEN_TOP(((int)this + 0x22214))) >> 2) < 7) {
    F_005d2940(((undefined *)GEN_TOP(((int)this + 0x22214))) GEN_EDX_ARG,7);
  }
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x22214))) + 0x18))) = ((code *)REFP(0x5a5650));
  if ((uint)(*((int *)GEN_TOP(((int)this + 0x22218))) - *((int *)GEN_TOP(((int)this + 0x22214))) >> 2) < 8) {
    F_005d2940(((undefined *)GEN_TOP(((int)this + 0x22214))) GEN_EDX_ARG,8);
  }
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x22214))) + 0x1c))) = ((code *)REFP(0x5a5730));
  if ((uint)(*((int *)GEN_TOP(((int)this + 0x22218))) - *((int *)GEN_TOP(((int)this + 0x22214))) >> 2) < 9) {
    F_005d2940(((undefined *)GEN_TOP(((int)this + 0x22214))) GEN_EDX_ARG,9);
  }
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x22214))) + 0x20))) = ((code *)REFP(0x5a59e0));
  if ((uint)(*((int *)GEN_TOP(((int)this + 0x22218))) - *((int *)GEN_TOP(((int)this + 0x22214))) >> 2) < 10) {
    F_005d2940(((undefined *)GEN_TOP(((int)this + 0x22214))) GEN_EDX_ARG,10);
  }
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x22214))) + 0x24))) = ((code *)REFP(0x5a5bc0));
  if ((uint)(*((int *)GEN_TOP(((int)this + 0x22218))) - *((int *)GEN_TOP(((int)this + 0x22214))) >> 2) < 0xb) {
    F_005d2940(((undefined *)GEN_TOP(((int)this + 0x22214))) GEN_EDX_ARG,0xb);
  }
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x22214))) + 0x28))) = ((code *)REFP(0x5a5cb0));
  if ((uint)(*((int *)GEN_TOP(((int)this + 0x22218))) - *((int *)GEN_TOP(((int)this + 0x22214))) >> 2) < 0xc) {
    F_005d2940(((undefined *)GEN_TOP(((int)this + 0x22214))) GEN_EDX_ARG,0xc);
  }
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x22214))) + 0x2c))) = ((code *)REFP(0x5a5d40));
  if ((uint)(*((int *)GEN_TOP(((int)this + 0x22218))) - *((int *)GEN_TOP(((int)this + 0x22214))) >> 2) < 0xd) {
    F_005d2940(((undefined *)GEN_TOP(((int)this + 0x22214))) GEN_EDX_ARG,0xd);
  }
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x22214))) + 0x30))) = ((code *)REFP(0x5b6140));
  if ((uint)(*((int *)GEN_TOP(((int)this + 0x22218))) - *((int *)GEN_TOP(((int)this + 0x22214))) >> 2) < 0xe) {
    F_005d2940(((undefined *)GEN_TOP(((int)this + 0x22214))) GEN_EDX_ARG,0xe);
  }
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x22214))) + 0x34))) = ((code *)REFP(0x5b3880));
  if ((uint)(*((int *)GEN_TOP(((int)this + 0x22218))) - *((int *)GEN_TOP(((int)this + 0x22214))) >> 2) < 0xf) {
    F_005d2940(((undefined *)GEN_TOP(((int)this + 0x22214))) GEN_EDX_ARG,0xf);
  }
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x22214))) + 0x38))) = ((code *)REFP(0x5a5dc0));
  if ((uint)(*((int *)GEN_TOP(((int)this + 0x22218))) - *((int *)GEN_TOP(((int)this + 0x22214))) >> 2) < 0x10) {
    F_005d2940(((undefined *)GEN_TOP(((int)this + 0x22214))) GEN_EDX_ARG,0x10);
  }
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x22214))) + 0x3c))) = ((code *)REFP(0x5a5e00));
  if ((uint)(*((int *)GEN_TOP(((int)this + 0x22218))) - *((int *)GEN_TOP(((int)this + 0x22214))) >> 2) < 0x11) {
    F_005d2940(((undefined *)GEN_TOP(((int)this + 0x22214))) GEN_EDX_ARG,0x11);
  }
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x22214))) + 0x40))) = ((code *)REFP(0x5a5e80));
  if ((uint)(*((int *)GEN_TOP(((int)this + 0x22218))) - *((int *)GEN_TOP(((int)this + 0x22214))) >> 2) < 0x12) {
    F_005d2940(((undefined *)GEN_TOP(((int)this + 0x22214))) GEN_EDX_ARG,0x12);
  }
  *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x22214))) + 0x44))) = ((code *)REFP(0x5a5e90));
  *((int *)GEN_TOP(((int)this + 0x22240))) = (int)this + 8;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2223c))) + 4))))(((int *)GEN_TOP(((int)this + 0x2223c))) GEN_EDX_ARG);
  F_0055bd90(((undefined *)GEN_TOP(((int)this + 0x2224c))) GEN_EDX_ARG,0xf66800,0x4ba117);
  *((undefined1 *)GEN_TOP(((int)this + 0x22cf0))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x22d00))) = 0;
  return (uint)this;
}

/* ref: FUN_005b6880 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b6880(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x5b6880u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  F_00cb4700(param_1 GEN_EDX_FWD,1,0);
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10a1dd8));
  puVar1 = param_1 + 5;
  *puVar1 = 0;
  puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(8,0,400)));
  *puVar1 = puVar2;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *((undefined4 * PTR32 *)GEN_TOP(*puVar1)) = puVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = param_2;
  *(undefined1 *)(param_1 + 0x11) = param_4;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x46))) = 0;
  param_1[0xc] = param_3;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x45))) = param_5;
  return (uint)param_1;
}

/* ref: FUN_005b6900 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005b6900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5b6900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x30)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a1dd8));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x4c))))(piVar1 GEN_EDX_FWD,this);
  }
  F_005d4bc0(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG);
  F_00429760(*((undefined4 *)GEN_TOP(((int)this + 0x14))),8,400);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  uVar2 = F_00cb4870(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_005b6950 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b6950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x5b6950u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x22238)));
  if (uVar1 != 0) {
    *((undefined4 *)GEN_TOP((uVar1 + 0x30))) = param_1;
    *((undefined1 *)GEN_TOP((uVar1 + 0x44))) = (undefined1)param_2;
    *((undefined1 *)GEN_TOP((uVar1 + 0x45))) = (undefined1)param_3;
    return uVar1;
  }
  uVar2 = 0;
  uVar1 = F_00404270();
  uVar1 = F_00406bd0(0x48,0,uVar1,uVar2);
  if (uVar1 != 0) {
    uVar1 = F_005b6880(uVar1 GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0xb8))) + 0x1c0,param_1,(undefined1)param_2,
                         (undefined1)param_3);
    *((uint *)GEN_TOP(((int)this + 0x22238))) = uVar1;
    return uVar1;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x22238))) = 0;
  return 0;
}

/* ref: FUN_005b69d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b69d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5b69d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  
  *(int *)this = (int)*param_1;
  *((int *)GEN_TOP(((int)this + 4))) = (int)param_1[1];
  *((int *)GEN_TOP(((int)this + 8))) = (int)param_1[2];
  fVar1 = param_1[3];
  *((int *)GEN_TOP(((int)this + 0xc))) = (int)fVar1;
  return (int)fVar1;
}

/* ref: FUN_005b6a00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b6a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5b6a00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((uint *)GEN_TOP(((int)this + 8))) =
       *((uint *)GEN_TOP(((int)this + 8))) ^ (param_1 << 0xb ^ *((uint *)GEN_TOP(((int)this + 8)))) & 0x7fff800;
  *((int *)GEN_TOP(((int)this + 0xc))) = (int)*param_2;
  *((int *)GEN_TOP(((int)this + 0x10))) = (int)param_2[1];
  *((int *)GEN_TOP(((int)this + 0x14))) = (int)param_2[2];
  fVar1 = param_2[3];
  *((int *)GEN_TOP(((int)this + 0x18))) = (int)fVar1;
  return (int)fVar1;
}

/* ref: FUN_005b6a50 */
GEN_OWN GEN_FRAME uint F_005b6a50(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b6a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_1 & 0xffffff0f | param_2;
}

/* ref: FUN_005b6a60 */
GEN_OWN GEN_FRAME uint F_005b6a60(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b6a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_1 & 0xfffffeff | param_2;
}

/* ref: FUN_005b6a70 */
GEN_OWN GEN_FRAME uint F_005b6a70(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b6a70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_1 & 0xffff0fff | param_2;
}

/* ref: FUN_005b6ab0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b6ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5b6ab0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined2 *)this = (undefined2)param_1;
  *((undefined2 *)GEN_TOP(((int)this + 2))) = (undefined2)param_2;
  return (uint)this;
}

/* ref: FUN_005b6ad0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b6ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5b6ad0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined2 *)this = (undefined2)param_1;
  *((undefined2 *)GEN_TOP(((int)this + 2))) = (undefined2)param_2;
  return (uint)this;
}

/* ref: FUN_005b6af0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b6af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5b6af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_005b6b00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b6b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x5b6b00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  *(undefined2 *)this = (undefined2)param_1;
  *((undefined2 *)GEN_TOP(((int)this + 2))) = (undefined2)param_2;
  *((undefined2 *)GEN_TOP(((int)this + 4))) = (undefined2)param_3;
  *((undefined2 *)GEN_TOP(((int)this + 6))) = (undefined2)param_4;
  return (uint)this;
}

/* ref: FUN_005b6b30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b6b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x5b6b30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  *(undefined2 *)this = (undefined2)param_1;
  *((undefined2 *)GEN_TOP(((int)this + 2))) = (undefined2)param_2;
  *((undefined2 *)GEN_TOP(((int)this + 4))) = (undefined2)param_3;
  *((undefined2 *)GEN_TOP(((int)this + 6))) = (undefined2)param_4;
  return (uint)this;
}

/* ref: FUN_005b6b60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b6b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5b6b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_005b6b80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b6b80(GEN_P(undefined1 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x5b6b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return (uint)param_1;
}

/* ref: FUN_005b6ba0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b6ba0(GEN_P(undefined1 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x5b6ba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return (uint)param_1;
}

/* ref: FUN_005b6bc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b6bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5b6bc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_005b6bd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b6bd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b6bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return in_ecx + 0x24c + param_2 * 0x10;
}

/* ref: FUN_005b6c00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b6c00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b6c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x70))) = param_2;
  return param_2;
}

/* ref: FUN_005b6c10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b6c10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b6c10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x74))) = param_2;
  return param_2;
}

/* ref: FUN_005b6c20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b6c20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b6c20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x78))) = param_2;
  return param_2;
}

/* ref: FUN_005b6c30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b6c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5b6c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = param_1[2];
  uVar1 = param_1[3];
  *((uint *)GEN_TOP(((int)this + 0xa0))) = uVar1;
  return uVar1;
}

/* ref: FUN_005b6c60 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b6c60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b6c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  byte bVar1;
  
  bVar1 = (*((byte *)GEN_TOP((in_ecx + 0xa4))) ^ param_2) & 1;
  *((byte *)GEN_TOP((in_ecx + 0xa4))) = *((byte *)GEN_TOP((in_ecx + 0xa4))) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005b6c90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b6c90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b6c90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((in_ecx + 0x3c + param_2 * 4)));
}

/* ref: FUN_005b6ca0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005b6ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5b6ca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  uint uVar2;
  
  uVar2 = 1;
  while (((uVar2 == 3 || (uVar2 == 6)) || (bVar1 = F_00a34970(this GEN_EDX_FWD,uVar2), bVar1 == 0))) {
    uVar2 = uVar2 + 1;
    if (0x10 < uVar2) {
      uVar2 = 0x1e;
      do {
        bVar1 = F_00a34970(this GEN_EDX_ARG,uVar2);
        if (bVar1 != 0) {
          return 1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < 0x21);
      uVar2 = 0x14;
      do {
        bVar1 = F_00a34970(this GEN_EDX_ARG,uVar2);
        if (bVar1 != 0) {
          return 2;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < 0x1e);
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_005b6d10 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005b6d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5b6d10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if (uVar2 != 0x12) {
      uVar1 = F_00a343f0(this GEN_EDX_FWD,uVar2);
      F_00a34350(this GEN_EDX_ARG,uVar1);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x1e);
  return;
}

/* ref: Component::GUI2::AtkEventListener::vf1 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005b6d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x5b6d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  return;
}

/* ref: Component::GUI2::AtkEventListener::vf2 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005b6d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x5b6d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  return;
}

/* ref: Component::GUI2::AtkEventListener::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b6d70(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b6d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Component::GUI2::AtkEventTarget::vf1 */
GEN_OWN GEN_NOFRAME byte F_005b6f80(void)
{
  GEN_ENTER(0x5b6f80u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Component::GUI2::AtkEventTarget::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b6f90(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b6f90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10a0964));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_005b7010 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b7010(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b7010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x14))) = *((uint *)GEN_TOP((in_ecx + 0x14))) | 0x80000;
  *((byte *)GEN_TOP((in_ecx + 0x15))) = param_2;
  return param_2;
}

/* ref: FUN_005b70e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b70e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b70e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x14c))) = param_2;
  return param_2;
}

/* ref: FUN_005b7100 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b7100(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b7100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = (param_2 * '\x04' ^ *((byte *)GEN_TOP((in_ecx + 0x148)))) & 4;
  *((byte *)GEN_TOP((in_ecx + 0x148))) = *((byte *)GEN_TOP((in_ecx + 0x148))) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005b7130 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b7130(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b7130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = (param_2 * '\b' ^ *((byte *)GEN_TOP((in_ecx + 0x148)))) & 8;
  *((byte *)GEN_TOP((in_ecx + 0x148))) = *((byte *)GEN_TOP((in_ecx + 0x148))) ^ bVar1;
  return bVar1;
}

/* ref: Component::GUI2::AtkFontAnalyzerBase::vf10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b71b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b71b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x10))) = param_2;
  return param_2;
}

/* ref: FUN_005b7200 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b7200(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b7200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0xb4))) = param_2;
  return param_2;
}

/* ref: FUN_005b7220 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b7220(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b7220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0xb8))) = param_2;
  return param_2;
}

/* ref: FUN_005b7280 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b7280(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b7280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (param_2 + 6) * 0x20 + in_ecx;
}

/* ref: FUN_005b72e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005b72e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0x5b72e0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  *((float *)GEN_TOP((in_ecx + 0x288))) = param_2;
  *((float *)GEN_TOP((in_ecx + 0x28c))) = param_3;
  *((float *)GEN_TOP((in_ecx + 0x290))) = param_4;
  return;
}

/* ref: FUN_005b7320 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005b7320(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x5b7320u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  *((float *)GEN_TOP((in_ecx + 0x168))) = param_2;
  *((float *)GEN_TOP((in_ecx + 0x16c))) = param_3;
  return;
}

/* ref: Component::GUI2::AtkFontAnalyzerCRLFBase::vf0 */
GEN_OWN GEN_NOFRAME byte F_005b7390(void)
{
  GEN_ENTER(0x5b7390u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Component::GUI2::AtkFontAnalyzerCRLFBase::vf3 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b73b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b73b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x10a0970));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Component::GUI2::AtkFontAnalyzerCRLFCount::vf3 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b7410(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b7410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x10a0970));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Component::GUI2::AtkFontAnalyzerCRLFSearch::vf3 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b7480(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b7480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x10a0970));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Component::GUI2::AtkFontAnalyzerFunctor::vf1 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005b74e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5b74e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Component::GUI2::AtkFontAnalyzerFunctor::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b74f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b74f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10a09c4));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Component::GUI2::AtkFontAnalyzerFunctorSelect::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b7540(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b7540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10a09c4));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_005b7580 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b7580(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(float param_6, float gen_a5), GEN_P(float param_7, float gen_a6))
{
  GEN_ENTER(0x5b7580u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_PIN(float param_7 = (float)gen_a6;)
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  in_ecx[3] = param_5;
  in_ecx[4] = param_6;
  in_ecx[5] = param_7;
  return (uint)in_ecx;
}

/* ref: FUN_005b75e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b75e0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x5b75e0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *in_ecx = GEN_FLT_TO(*in_ecx, REFG(float, 0x1087f04));
  in_ecx[3] = uVar1;
  in_ecx[4] = (undefined4)gen_fl2bits(param_2);
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[5] = (undefined4)gen_fl2bits(param_3);
  return (uint)in_ecx;
}

/* ref: FUN_005b7620 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005b7620(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x5b7620u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)(fVar1 * (float10)*in_ecx);
  fVar2 = (float10)param_3;
  in_ecx[1] = (float)(fVar2 * (float10)in_ecx[1]);
  in_ecx[2] = (float)((float10)in_ecx[2] * fVar1);
  in_ecx[3] = (float)((float10)in_ecx[3] * fVar2);
  in_ecx[4] = (float)((float10)in_ecx[4] * fVar1);
  in_ecx[5] = (float)(fVar2 * (float10)in_ecx[5]);
  return 0;
}

/* ref: FUN_005b7670 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b7670(GEN_P(float * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x5b7670u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar4 = ((float10)GEN_TOD(fsin((float10)param_2)));
  fVar5 = ((float10)GEN_TOD(fcos((float10)param_2)));
  fVar1 = param_1[1];
  fVar4 = (float10)(float)fVar4;
  fVar5 = (float10)(float)fVar5;
  fVar2 = param_1[3];
  param_1[1] = (float)(fVar4 * (float10)*param_1 + fVar5 * (float10)fVar1);
  fVar3 = param_1[5];
  param_1[3] = (float)((float10)fVar2 * fVar5 + (float10)param_1[2] * fVar4);
  param_1[5] = (float)((float10)fVar3 * fVar5 + (float10)param_1[4] * fVar4);
  *param_1 = (float)(fVar5 * (float10)*param_1 - fVar4 * (float10)fVar1);
  param_1[2] = (float)(fVar5 * (float10)param_1[2] - (float10)fVar2 * fVar4);
  param_1[4] = (float)(fVar5 * (float10)param_1[4] - (float10)fVar3 * fVar4);
  return (uint)param_1;
}

/* ref: FUN_005b7750 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b7750(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x5b7750u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  *((float *)GEN_TOP((in_ecx + 0x10))) = ((float)GEN_TOF(((float10)param_2 + (float10)*((float *)GEN_TOP((in_ecx + 0x10))))));
  *((float *)GEN_TOP((in_ecx + 0x14))) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((in_ecx + 0x14))) + (float10)param_3)));
  return in_ecx;
}

/* ref: FUN_005b7780 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005b7780(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5b7780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 0xffff0000;
  in_ecx[1] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_005b77a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b77a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5b77a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0x38)));
  *param_3 = *((undefined4 *)GEN_TOP((in_ecx + 0x3c)));
  return (uint)param_2;
}

/* ref: FUN_005b77e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b77e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5b77e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0x40)));
  *param_3 = *((undefined4 *)GEN_TOP((in_ecx + 0x44)));
  return (uint)param_2;
}

/* ref: FUN_005b7820 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b7820(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5b7820u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0x30)));
  *param_3 = *((undefined4 *)GEN_TOP((in_ecx + 0x34)));
  return (uint)param_2;
}

/* ref: FUN_005b7870 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b7870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1), GEN_P(ushort * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5b7870u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  GEN_PIN(ushort * param_2 = (ushort *)(uintptr_t)gen_a2;)
  ushort uVar1;
  
  *param_1 = *((undefined2 *)GEN_TOP(((int)this + 0x7c)));
  uVar1 = *((ushort *)GEN_TOP(((int)this + 0x7e)));
  *param_2 = uVar1;
  return (uint)uVar1;
}

/* ref: FUN_005b78b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b78b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5b78b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0x74)));
  *param_3 = *((undefined4 *)GEN_TOP((in_ecx + 0x78)));
  return (uint)param_2;
}

/* ref: FUN_005b78f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005b78f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5b78f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0042a990(in_ecx GEN_EDX_FWD);
  *((uint *)GEN_TOP((in_ecx + 0x54))) = uVar1;
  return uVar1;
}

/* ref: FUN_005b7900 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b7900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1), GEN_P(ushort * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5b7900u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  GEN_PIN(ushort * param_2 = (ushort *)(uintptr_t)gen_a2;)
  ushort uVar1;
  
  *param_1 = *((undefined2 *)GEN_TOP(((int)this + 0x10c)));
  uVar1 = *((ushort *)GEN_TOP(((int)this + 0x10e)));
  *param_2 = uVar1;
  return (uint)uVar1;
}

/* ref: FUN_005b7930 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_005b7930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5b7930u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((ushort *)GEN_TOP(((int)this + 0x10c))) = (ushort)param_1;
  *((undefined2 *)GEN_TOP(((int)this + 0x10e))) = (undefined2)param_2;
  return (ushort)param_1;
}

/* ref: FUN_005b7990 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b7990(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b7990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x12))) = param_2;
  return param_2;
}

/* ref: FUN_005b79a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b79a0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b79a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_005b79b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b79b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5b79b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return (uint)this;
}

/* ref: FUN_005b79e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b79e0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x5b79e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  *param_1 = *param_4;
  param_1[1] = param_4[1];
  param_1[2] = param_4[2];
  param_1[3] = param_3;
  *(undefined1 *)(param_1 + 4) = param_2;
  return (uint)param_1;
}

/* ref: FUN_005b7a90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b7a90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b7a90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0xc))) = param_2;
  return param_2;
}

/* ref: FUN_005b7aa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b7aa0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b7aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x10))) = param_2;
  return param_2;
}

/* ref: FUN_005b7ab0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b7ab0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b7ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x14))) = param_2;
  return param_2;
}

/* ref: FUN_005b7ac0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b7ac0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b7ac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x18))) = param_2;
  return param_2;
}

/* ref: FUN_005b7ae0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b7ae0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b7ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x1c))) = param_2;
  return param_2;
}

/* ref: FUN_005b7b90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b7b90(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b7b90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005b7be0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b7be0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b7be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (uint)(*((byte *)GEN_TOP((param_2 + in_ecx))) >> 4);
}

/* ref: Client::System::Input::SoftKeyboardDeviceInterface::SoftKeyboardInputInterface::vf4 */
GEN_OWN GEN_NOFRAME uint F_005b7c10(void)
{
  GEN_ENTER(0x5b7c10u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Input::SoftKeyboardDeviceInterface::SoftKeyboardInputInterface::vf6 */
GEN_OWN GEN_NOFRAME uint F_005b7c20(void)
{
  GEN_ENTER(0x5b7c20u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: Client::System::Input::SoftKeyboardDeviceInterface::SoftKeyboardInputInterface::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b7c40(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b7c40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[7])REFP(0x10a09dc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Input::SoftKeyboardDeviceInterface::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b7c70(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b7c70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[8])REFP(0x10a09fc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Input::TextServiceInterface::TextServiceEvent::vf1 */
GEN_OWN GEN_NOFRAME unsigned int F_005b7cb0(void)
{
  GEN_ENTER(0x5b7cb0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Input::TextServiceInterface::TextServiceEvent::vf2 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005b7cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x5b7cc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  return;
}

/* ref: Client::System::Input::TextServiceInterface::TextServiceEvent::vf3 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005b7cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5b7cd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::System::Input::TextServiceInterface::TextServiceEvent::vf4 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005b7ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5b7ce0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Client::System::Input::TextServiceInterface::TextServiceEvent::vf5 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005b7cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5b7cf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Client::System::Input::TextServiceInterface::TextServiceEvent::vf6 */
GEN_OWN GEN_NOFRAME unsigned int F_005b7d00(void)
{
  GEN_ENTER(0x5b7d00u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Input::TextServiceInterface::TextServiceEvent::vf7 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005b7d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5b7d10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_005b7d20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b7d20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b7d20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: Client::System::Input::TextServiceInterface::TextServiceEvent::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b7d30(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b7d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[8])REFP(0x10a0a20));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Component::GUI2::AtkExternalInterface::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b7d90(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b7d90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10a0a44));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_005b7dc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b7dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5b7dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x238)));
  *param_1 = *((undefined4 *)GEN_TOP(((int)this + 0x234)));
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_005b7f60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b7f60(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b7f60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_005b7f80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b7f80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0x5b7f80u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  int iVar1;
  
  iVar1 = (int)param_2;
  *((float *)GEN_TOP((in_ecx + iVar1 * 0x10))) = param_3;
  *((float *)GEN_TOP((in_ecx + 4 + iVar1 * 0x10))) = param_4;
  *((float *)GEN_TOP((in_ecx + 8 + iVar1 * 0x10))) = param_5;
  return iVar1 * 2;
}

/* ref: FUN_005b7fb0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005b7fb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0x5b7fb0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  *((float *)GEN_TOP((in_ecx + 0xa0))) = param_2;
  *((float *)GEN_TOP((in_ecx + 0xa4))) = param_3;
  *((float *)GEN_TOP((in_ecx + 0xa8))) = param_4;
  *((float *)GEN_TOP((in_ecx + 0xac))) = param_5;
  return;
}

/* ref: FUN_005b7ff0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005b7ff0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0x5b7ff0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  *((float *)GEN_TOP((in_ecx + 0xb0))) = param_2;
  *((float *)GEN_TOP((in_ecx + 0xb4))) = param_3;
  *((float *)GEN_TOP((in_ecx + 0xb8))) = param_4;
  *((float *)GEN_TOP((in_ecx + 0xbc))) = param_5;
  return;
}

/* ref: FUN_005b8030 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b8030(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0x5b8030u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  uint uVar1;
  
  uVar1 = (uint)param_2;
  *((float *)GEN_TOP((in_ecx + 0x50 + uVar1 * 8))) = param_3;
  *((float *)GEN_TOP((in_ecx + 0x54 + uVar1 * 8))) = param_4;
  return uVar1;
}

/* ref: FUN_005b8060 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b8060(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b8060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = (*((uint *)GEN_TOP((in_ecx + 0x100))) ^ param_2) & 0xf;
  *((uint *)GEN_TOP((in_ecx + 0x100))) = *((uint *)GEN_TOP((in_ecx + 0x100))) ^ uVar1;
  return uVar1;
}

/* ref: FUN_005b8080 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005b8080(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0x5b8080u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  *((float *)GEN_TOP((in_ecx + 0xdc))) = param_2;
  *((float *)GEN_TOP((in_ecx + 0xe0))) = param_3;
  *((float *)GEN_TOP((in_ecx + 0xe4))) = param_4;
  return;
}

/* ref: FUN_005b80b0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005b80b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0x5b80b0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  *((float *)GEN_TOP((in_ecx + 0xe8))) = param_2;
  *((float *)GEN_TOP((in_ecx + 0xec))) = param_3;
  *((float *)GEN_TOP((in_ecx + 0xf0))) = param_4;
  return;
}

/* ref: FUN_005b80e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005b80e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x5b80e0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  *((float *)GEN_TOP((in_ecx + 0xf4))) = param_2;
  *((float *)GEN_TOP((in_ecx + 0xf8))) = param_3;
  return;
}

/* ref: FUN_005b8110 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005b8110(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x5b8110u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0xfc))) = param_2;
  return;
}

/* ref: FUN_005b8130 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b8130(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b8130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0xd8))) & 0xffffff0f | param_2;
  *((uint *)GEN_TOP((in_ecx + 0xd8))) = uVar1;
  return uVar1;
}

/* ref: FUN_005b8150 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b8150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5b8150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = (uint)(ushort)param_1 << 9 | *((uint *)GEN_TOP(((int)this + 0x100))) & 0xfe0001ff;
  *((uint *)GEN_TOP(((int)this + 0x100))) = uVar1;
  return uVar1;
}

/* ref: FUN_005b8190 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b8190(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b8190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_005b81a0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005b81a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x5b81a0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  *((float *)GEN_TOP((in_ecx + 8))) = param_2;
  *((float *)GEN_TOP((in_ecx + 0xc))) = param_3;
  return;
}

/* ref: FUN_005b81c0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005b81c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x5b81c0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  *((float *)GEN_TOP((in_ecx + 0x10))) = param_2;
  *((float *)GEN_TOP((in_ecx + 0x14))) = param_3;
  return;
}

/* ref: FUN_005b81e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005b81e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x5b81e0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  *((float *)GEN_TOP((in_ecx + 0x18))) = param_2;
  *((float *)GEN_TOP((in_ecx + 0x1c))) = param_3;
  return;
}

/* ref: FUN_005b8200 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_005b8200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5b8200u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((ushort *)GEN_TOP(((int)this + 0x20))) = (ushort)param_1;
  *((undefined2 *)GEN_TOP(((int)this + 0x22))) = (undefined2)param_2;
  return (ushort)param_1;
}

/* ref: FUN_005b8220 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_005b8220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5b8220u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((ushort *)GEN_TOP(((int)this + 0x24))) = (ushort)param_1;
  *((undefined2 *)GEN_TOP(((int)this + 0x26))) = (undefined2)param_2;
  return (ushort)param_1;
}

/* ref: FUN_005b8240 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_005b8240(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b8240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 0x2c))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_005b8250 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b8250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5b8250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_005b8260 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b8260(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b8260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x2b))) = param_2;
  return param_2;
}

/* ref: FUN_005b8270 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_005b8270(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5b8270u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return (uint)*((byte *)GEN_TOP((param_1 + 1)));
}

/* ref: FUN_005b8280 */
GEN_OWN GEN_FRAME float10 F_005b8280(GEN_P(int param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0x5b8280u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  float10 fVar1;
  float10 fVar2;
  
  if (!(param_2 <= 0.0)) {
    fVar1 = (float10)param_3;
    fVar2 = (float10)param_2;
    if (fVar1 < fVar2) {
      if (param_1 == 0) {
        return GEN_X87((float10)(float)(fVar1 / fVar2));
      }
      if (param_1 == 1) {
        fVar1 = ((float10)GEN_TOD(fsin(
                              (float10)((float)GEN_TOF(((((float10)param_4 *
                                                (float10)*(double *)&REFG(undefined, 0x1080228)) * fVar1) / fVar2)))
                             )));
        return (float10)(float)fVar1;
      }
      if (param_1 == 2) {
        fVar1 = ((float10)GEN_TOD(fsin(
                              (float10)((float)GEN_TOF((((fVar1 * (float10)REFG(double, 0x1088108)) / fVar2 +
                                               (float10)REFG(double, 0x1088108)) *
                                              (float10)*(double *)&REFG(undefined, 0x1080228)))))));
        return GEN_X87((float10)(float)((float10)1 - (float10)(float)fVar1));
      }
    }
  }
  return (float10)1;
}

/* ref: Component::GUI2::AtkModuleInterface::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b8320(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b8320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[43])REFP(0x10a0a64));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_005b8360 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b8360(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b8360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0xc6a))) = param_2;
  return param_2;
}

/* ref: FUN_005b8380 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b8380(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b8380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0xc6b))) = param_2;
  return param_2;
}

/* ref: FUN_005b83c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b83c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1), GEN_P(ushort * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5b83c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  GEN_PIN(ushort * param_2 = (ushort *)(uintptr_t)gen_a2;)
  ushort uVar1;
  
  *param_1 = *((undefined2 *)GEN_TOP(((int)this + 0xc5c)));
  uVar1 = *((ushort *)GEN_TOP(((int)this + 0xc5e)));
  *param_2 = uVar1;
  return (uint)uVar1;
}

/* ref: FUN_005b8410 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b8410(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b8410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return *((uint *)GEN_TOP((in_ecx + 4 + (uint)(ushort)param_2 * 4)));
}

/* ref: FUN_005b8420 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b8420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5b8420u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + (uint)(ushort)param_1 * 4 + 4))) = param_2;
  return (uint)(ushort)param_1;
}

/* ref: FUN_005b8440 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b8440(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b8440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  return in_ecx + 0x20 + (uint)param_2 * 8;
}

/* ref: FUN_005b8450 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_005b8450(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5b8450u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 / 0x14;
}

/* ref: FUN_005b84b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b84b0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b84b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_005b84c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b84c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5b84c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 0xc))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_2;
  return param_1;
}

/* ref: FUN_005b84e0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b84e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b84e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x1f))) = param_2;
  return param_2;
}

/* ref: FUN_005b84f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b84f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b84f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x14))) = param_2;
  return param_2;
}

/* ref: FUN_005b8580 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b8580(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b8580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  if (param_2 != '\0') {
    return *((byte *)GEN_TOP((in_ecx + 0x1b)));
  }
  return *((byte *)GEN_TOP((in_ecx + 0x1c)));
}

/* ref: FUN_005b85a0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005b85a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b85a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  if (param_2 != '\0') {
    *((undefined1 *)GEN_TOP((in_ecx + 0x1b))) = 1;
    return;
  }
  *((undefined1 *)GEN_TOP((in_ecx + 0x1c))) = 1;
  return;
}

/* ref: FUN_005b85d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b85d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b85d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x1e))) = param_2;
  return param_2;
}

/* ref: FUN_005b8640 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b8640(GEN_P(byte * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b8640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(byte * in_ecx = (byte *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_005b8650 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b8650(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b8650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 1))) = param_2;
  return param_2;
}

/* ref: FUN_005b8660 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b8660(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b8660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 2))) = param_2;
  return param_2;
}

/* ref: FUN_005b8670 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b8670(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b8670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 3))) = param_2;
  return param_2;
}

/* ref: FUN_005b8680 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b8680(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b8680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_005b8690 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b8690(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b8690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 5))) = param_2;
  return param_2;
}

/* ref: FUN_005b86d0 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_005b86d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b86d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 0x2c))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_005b8730 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005b8730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5b8730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    return (uint)*((ushort *)GEN_TOP(((int)this + 0x16))) + *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4)));
  }
  return 0;
}

/* ref: Component::GUI2::AtkComponentBase::vf8 */
GEN_OWN GEN_NOFRAME unsigned int F_005b8790(void)
{
  GEN_ENTER(0x5b8790u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_005b87b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b87b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b87b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  
  uVar1 = ((uint)param_2 << 0x11 ^ *((uint *)GEN_TOP((in_ecx + 100)))) & 0x20000;
  *((uint *)GEN_TOP((in_ecx + 100))) = *((uint *)GEN_TOP((in_ecx + 100))) ^ uVar1;
  return uVar1;
}

/* ref: FUN_005b87e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b87e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b87e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x74))) = param_2;
  return param_2;
}

/* ref: FUN_005b87f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b87f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b87f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x68))) = param_2;
  return param_2;
}

/* ref: FUN_005b8800 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005b8800(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5b8800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (in_ecx == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((in_ecx + 0x70)));
}

/* ref: FUN_005b8820 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_005b8820(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5b8820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if ((param_1 != 0) && (param_1 != 0xff)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005b8850 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b8850(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b8850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x80))) = param_2;
  return param_2;
}

/* ref: FUN_005b8860 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b8860(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b8860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x70))) = param_2;
  return param_2;
}

/* ref: FUN_005b8870 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_005b8870(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b8870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 100))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_005b8890 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b8890(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b8890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x6c))) = param_2;
  return param_2;
}

/* ref: FUN_005b88f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b88f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b88f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x10c))) = param_2;
  return param_2;
}

/* ref: FUN_005b8900 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b8900(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b8900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x85))) = param_2;
  return param_2;
}

/* ref: FUN_005b8990 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b8990(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b8990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x95))) = param_2;
  return param_2;
}

/* ref: FUN_005b89f0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005b89f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5b89f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0xf4))) >> 0x14 & 0xf;
  if ((uVar1 != 3) && (uVar1 != 2)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_005b8a10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005b8a10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5b8a10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0xf4))) >> 0x14 & 0xf;
  if ((uVar1 != 5) && (uVar1 != 4)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_005b8a90 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b8a90(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b8a90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = (param_2 == '\0') << 7 | *((byte *)GEN_TOP((param_1 + 0xf8))) & 0x7f;
  *((byte *)GEN_TOP((param_1 + 0xf8))) = bVar1;
  return bVar1;
}

/* ref: FUN_005b8b40 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005b8b40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5b8b40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  byte bVar1;
  
  bVar1 = *((byte *)GEN_TOP((in_ecx + 0x10d)));
  if ('\0' < (char)bVar1) {
    bVar1 = bVar1 - 1;
    *((byte *)GEN_TOP((in_ecx + 0x10d))) = bVar1;
  }
  return bVar1;
}

/* ref: FUN_005b8b60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b8b60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b8b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return (uint)((*((uint *)GEN_TOP((in_ecx + 0x108))) & param_2) != 0);
}

/* ref: FUN_005b8bb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b8bb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b8bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x98))) = param_2;
  return param_2;
}

/* ref: FUN_005b8be0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b8be0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b8be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0xa4))) = param_2;
  return param_2;
}

/* ref: FUN_005b8c00 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b8c00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b8c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = ((param_2 == '\0') * '\x04' ^ *((byte *)GEN_TOP((in_ecx + 0xf9)))) & 4;
  *((byte *)GEN_TOP((in_ecx + 0xf9))) = *((byte *)GEN_TOP((in_ecx + 0xf9))) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005b8c30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b8c30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b8c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return (uint)((*((ushort *)GEN_TOP((in_ecx + 0x126))) & (ushort)param_2) != 0);
}

/* ref: FUN_005b8c50 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005b8c50(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5b8c50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  if (param_3 != '\0') {
    *((ushort *)GEN_TOP((param_1 + 0x126))) = *((ushort *)GEN_TOP((param_1 + 0x126))) | (ushort)param_2;
    return;
  }
  *((ushort *)GEN_TOP((param_1 + 0x126))) = *((ushort *)GEN_TOP((param_1 + 0x126))) & ~(ushort)param_2;
  return;
}

/* ref: FUN_005b8c80 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b8c80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b8c80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return (*((uint *)GEN_TOP((in_ecx + 0x120))) & param_2) != 0;
}

/* ref: FUN_005b8cc0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005b8cc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b8cc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  if (param_2 != '\0') {
    *((uint *)GEN_TOP((in_ecx + 0x120))) = *((uint *)GEN_TOP((in_ecx + 0x120))) | 8;
    return;
  }
  *((uint *)GEN_TOP((in_ecx + 0x120))) = *((uint *)GEN_TOP((in_ecx + 0x120))) & 0xfffffff7;
  return;
}

/* ref: FUN_005b8d50 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005b8d50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b8d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  if (param_2 != '\0') {
    *((uint *)GEN_TOP((in_ecx + 0x120))) = *((uint *)GEN_TOP((in_ecx + 0x120))) | 0x400;
    return;
  }
  *((uint *)GEN_TOP((in_ecx + 0x120))) = *((uint *)GEN_TOP((in_ecx + 0x120))) & 0xfffffbff;
  return;
}

/* ref: FUN_005b8da0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005b8da0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b8da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  if (param_2 != '\0') {
    *((uint *)GEN_TOP((in_ecx + 0x120))) = *((uint *)GEN_TOP((in_ecx + 0x120))) | 0x1000;
    return;
  }
  *((uint *)GEN_TOP((in_ecx + 0x120))) = *((uint *)GEN_TOP((in_ecx + 0x120))) & 0xffffefff;
  return;
}

/* ref: FUN_005b8de0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005b8de0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b8de0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  if (param_2 != '\0') {
    *((uint *)GEN_TOP((in_ecx + 0x120))) = *((uint *)GEN_TOP((in_ecx + 0x120))) | 0x2000;
    return;
  }
  *((uint *)GEN_TOP((in_ecx + 0x120))) = *((uint *)GEN_TOP((in_ecx + 0x120))) & 0xffffdfff;
  return;
}

/* ref: FUN_005b8e60 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005b8e60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b8e60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  if (param_2 != '\0') {
    *((uint *)GEN_TOP((in_ecx + 0x120))) = *((uint *)GEN_TOP((in_ecx + 0x120))) | 0x80000;
    return;
  }
  *((uint *)GEN_TOP((in_ecx + 0x120))) = *((uint *)GEN_TOP((in_ecx + 0x120))) & 0xfff7ffff;
  return;
}

/* ref: FUN_005b8ee0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b8ee0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b8ee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = *((byte *)GEN_TOP((param_1 + 0xfa))) & 0x7f | param_2 << 7;
  *((byte *)GEN_TOP((param_1 + 0xfa))) = bVar1;
  return bVar1;
}

/* ref: FUN_005b8f10 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b8f10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b8f10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x13b))) = param_2;
  return param_2;
}

/* ref: FUN_005b8f30 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b8f30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b8f30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  byte bVar1;
  
  bVar1 = (*((byte *)GEN_TOP((in_ecx + 0xfb))) ^ param_2) & 1;
  *((byte *)GEN_TOP((in_ecx + 0xfb))) = *((byte *)GEN_TOP((in_ecx + 0xfb))) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005b8f60 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b8f60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b8f60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x13c))) = param_2;
  return param_2;
}

/* ref: FUN_005b8f90 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b8f90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b8f90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = (param_2 * '\x02' ^ *((byte *)GEN_TOP((in_ecx + 0xfb)))) & 2;
  *((byte *)GEN_TOP((in_ecx + 0xfb))) = *((byte *)GEN_TOP((in_ecx + 0xfb))) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005b8fb0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005b8fb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5b8fb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if ((*((char *)GEN_TOP((in_ecx + 0x13c))) != '\0') && ((*((byte *)GEN_TOP((in_ecx + 0xfb))) & 2) == 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005b8fe0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b8fe0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b8fe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = (param_2 * '\x04' ^ *((byte *)GEN_TOP((in_ecx + 0xfb)))) & 4;
  *((byte *)GEN_TOP((in_ecx + 0xfb))) = *((byte *)GEN_TOP((in_ecx + 0xfb))) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005b9010 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b9010(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b9010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x13d))) = param_2;
  return param_2;
}

/* ref: FUN_005b9050 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b9050(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b9050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x94))) = param_2;
  return param_2;
}

/* ref: FUN_005b9060 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b9060(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b9060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0xa0))) = param_2;
  return param_2;
}

/* ref: FUN_005b9080 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b9080(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b9080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  byte bVar1;
  
  bVar1 = (*((byte *)GEN_TOP((in_ecx + 0xf8))) ^ param_2) & 1;
  *((byte *)GEN_TOP((in_ecx + 0xf8))) = *((byte *)GEN_TOP((in_ecx + 0xf8))) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005b90a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b90a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b90a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = ((param_2 == '\0') * '\b' ^ *((byte *)GEN_TOP((in_ecx + 0xf9)))) & 8;
  *((byte *)GEN_TOP((in_ecx + 0xf9))) = *((byte *)GEN_TOP((in_ecx + 0xf9))) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005b90d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b90d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b90d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = (param_2 * '\x02' ^ *((byte *)GEN_TOP((in_ecx + 0xf9)))) & 2;
  *((byte *)GEN_TOP((in_ecx + 0xf9))) = *((byte *)GEN_TOP((in_ecx + 0xf9))) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005b9120 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b9120(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b9120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0xfc))) = param_2;
  return param_2;
}

/* ref: FUN_005b9130 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b9130(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b9130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x90))) = param_2;
  return param_2;
}

/* ref: FUN_005b9150 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b9150(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b9150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0xac))) = param_2;
  return param_2;
}

/* ref: FUN_005b9170 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b9170(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b9170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x13a))) = param_2;
  return param_2;
}

/* ref: FUN_005b9190 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b9190(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b9190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0xf4))) = param_2;
  return param_2;
}

/* ref: FUN_005b91b0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b91b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b91b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0xf5))) = param_2;
  return param_2;
}

/* ref: FUN_005b91c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b91c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b91c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  
  uVar1 = ((uint)param_2 << 0x14 ^ *((uint *)GEN_TOP((in_ecx + 0xf4)))) & 0xf00000;
  *((uint *)GEN_TOP((in_ecx + 0xf4))) = *((uint *)GEN_TOP((in_ecx + 0xf4))) ^ uVar1;
  return uVar1;
}

/* ref: FUN_005b91f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b91f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b91f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  
  uVar1 = ((uint)param_2 << 0x18 ^ *((uint *)GEN_TOP((in_ecx + 0xf4)))) & 0xf000000;
  *((uint *)GEN_TOP((in_ecx + 0xf4))) = *((uint *)GEN_TOP((in_ecx + 0xf4))) ^ uVar1;
  return uVar1;
}

/* ref: FUN_005b9220 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b9220(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b9220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  
  uVar1 = (uint)param_2 << 0x1c | *((uint *)GEN_TOP((param_1 + 0xf4))) & 0xfffffff;
  *((uint *)GEN_TOP((param_1 + 0xf4))) = uVar1;
  return uVar1;
}

/* ref: FUN_005b9260 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b9260(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b9260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = (param_2 * '\b' ^ *((byte *)GEN_TOP((in_ecx + 0xf8)))) & 8;
  *((byte *)GEN_TOP((in_ecx + 0xf8))) = *((byte *)GEN_TOP((in_ecx + 0xf8))) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005b9280 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b9280(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b9280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = (param_2 << 0x10 ^ *((uint *)GEN_TOP((in_ecx + 0xf4)))) & 0xf0000;
  *((uint *)GEN_TOP((in_ecx + 0xf4))) = *((uint *)GEN_TOP((in_ecx + 0xf4))) ^ uVar1;
  return uVar1;
}

/* ref: FUN_005b92a0 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_005b92a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b92a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 0x128))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_005b92c0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b92c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b92c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = (param_2 * '\x04' ^ *((byte *)GEN_TOP((in_ecx + 0xf8)))) & 4;
  *((byte *)GEN_TOP((in_ecx + 0xf8))) = *((byte *)GEN_TOP((in_ecx + 0xf8))) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005b92f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b92f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b92f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = (param_2 << 4 ^ *((byte *)GEN_TOP((in_ecx + 0xf8)))) & 0x10;
  *((byte *)GEN_TOP((in_ecx + 0xf8))) = *((byte *)GEN_TOP((in_ecx + 0xf8))) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005b9320 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b9320(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b9320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = (param_2 * '\x02' ^ *((byte *)GEN_TOP((in_ecx + 0xf8)))) & 2;
  *((byte *)GEN_TOP((in_ecx + 0xf8))) = *((byte *)GEN_TOP((in_ecx + 0xf8))) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005b9350 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b9350(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b9350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = (param_2 << 6 ^ *((byte *)GEN_TOP((in_ecx + 0xf8)))) & 0x40;
  *((byte *)GEN_TOP((in_ecx + 0xf8))) = *((byte *)GEN_TOP((in_ecx + 0xf8))) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005b9380 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b9380(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b9380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  byte bVar1;
  
  bVar1 = (*((byte *)GEN_TOP((in_ecx + 0xfa))) ^ param_2) & 1;
  *((byte *)GEN_TOP((in_ecx + 0xfa))) = *((byte *)GEN_TOP((in_ecx + 0xfa))) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005b93b0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b93b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b93b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = (param_2 * '\x04' ^ *((byte *)GEN_TOP((in_ecx + 0xfa)))) & 4;
  *((byte *)GEN_TOP((in_ecx + 0xfa))) = *((byte *)GEN_TOP((in_ecx + 0xfa))) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005b93f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b93f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b93f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  byte bVar1;
  
  bVar1 = (*((byte *)GEN_TOP((in_ecx + 0xf9))) ^ param_2) & 1;
  *((byte *)GEN_TOP((in_ecx + 0xf9))) = *((byte *)GEN_TOP((in_ecx + 0xf9))) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005b9430 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b9430(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b9430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = (param_2 * '\b' ^ *((byte *)GEN_TOP((in_ecx + 0xfa)))) & 8;
  *((byte *)GEN_TOP((in_ecx + 0xfa))) = *((byte *)GEN_TOP((in_ecx + 0xfa))) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005b9500 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_005b9500(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b9500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((ushort *)GEN_TOP((in_ecx + 0x194 + param_2 * 2)));
}

/* ref: FUN_005b95c0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b95c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b95c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x849))) = param_2;
  return param_2;
}

/* ref: FUN_005b95e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b95e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0x5b95e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  *(undefined2 *)this = (undefined2)param_1;
  *((undefined2 *)GEN_TOP(((int)this + 2))) = (undefined2)param_2;
  *((undefined2 *)GEN_TOP(((int)this + 4))) = (undefined2)param_3;
  *((undefined2 *)GEN_TOP(((int)this + 6))) = (undefined2)param_4;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_5;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_6;
  return (uint)this;
}

/* ref: FUN_005b9620 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b9620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5b9620u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return (uint)this;
}

/* ref: FUN_005b9650 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b9650(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b9650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_005b9660 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b9660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x5b9660u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  F_0042cbc0(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG,param_2);
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = param_3;
  return (uint)this;
}

/* ref: Component::GUI2::AtkTextInput::AtkTextInputEventInterface::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b96a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b96a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10a0b14));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_005b9700 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005b9700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5b9700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x10a0b24));
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
    uVar1 = F_00406ad0(*((int *)GEN_TOP(((int)this + 0xc))));
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkDragDropInterface::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b9730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5b9730u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *param_1 = 0;
  *param_2 = 0;
  return (uint)param_1;
}

/* ref: Component::GUI2::AtkDragDropInterface::vf2 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005b9750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5b9750u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: FUN_005b9760 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b9760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1), GEN_P(ushort * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5b9760u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  GEN_PIN(ushort * param_2 = (ushort *)(uintptr_t)gen_a2;)
  ushort uVar1;
  
  *param_1 = *((undefined2 *)GEN_TOP(((int)this + 0x10)));
  uVar1 = *((ushort *)GEN_TOP(((int)this + 0x12)));
  *param_2 = uVar1;
  return (uint)uVar1;
}

/* ref: FUN_005b9780 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_005b9780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5b9780u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((ushort *)GEN_TOP(((int)this + 0x10))) = (ushort)param_1;
  *((undefined2 *)GEN_TOP(((int)this + 0x12))) = (undefined2)param_2;
  return (ushort)param_1;
}

/* ref: Component::GUI2::AtkDragDropInterface::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005b97a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5b97a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 4)));
}

/* ref: Component::GUI2::AtkDragDropInterface::vf5 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005b97b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5b97b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 8)));
}

/* ref: Component::GUI2::AtkDragDropInterface::vf7 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005b97c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5b97c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: Component::GUI2::AtkDragDropInterface::vf8 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005b97d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5b97d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_005b97f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b97f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b97f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x1a))) = param_2;
  return param_2;
}

/* ref: FUN_005b9810 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b9810(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b9810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x14))) = param_2;
  return param_2;
}

/* ref: FUN_005b9830 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_005b9830(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b9830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 0x18))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: Component::GUI2::AtkDragDropInterface::vf13 */
GEN_OWN GEN_NOFRAME uint F_005b9840(void)
{
  GEN_ENTER(0x5b9840u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Component::GUI2::AtkDragDropInterface::vf14 */
GEN_OWN GEN_NOFRAME unsigned int F_005b9850(void)
{
  GEN_ENTER(0x5b9850u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Component::GUI2::AtkDragDropInterface::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b9860(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b9860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[15])REFP(0x10a0b24));
  if (param_1[3] != 0) {
    F_00406ad0(param_1[3]);
    param_1[3] = 0;
  }
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_005b98a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b98a0(GEN_P(uint * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x5b98a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  *(undefined1 *)(param_1 + 1) = param_2;
  *((undefined1 *)GEN_TOP(((int)param_1 + 5))) = param_3;
  *param_1 = param_5;
  *((undefined1 *)GEN_TOP(((int)param_1 + 6))) = param_4;
  return param_5;
}

/* ref: FUN_005b98d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b98d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x5b98d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  uint uVar1;
  
  if (*(int *)this != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 4))))
                      (*(int *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8)
    ;
    return uVar1;
  }
  return (uint)this;
}

/* ref: FUN_005b98f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b98f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x5b98f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  uint uVar1;
  
  if (*(int *)this != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 8))))
                      (*(int *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8)
    ;
    return uVar1;
  }
  return (uint)this;
}

/* ref: FUN_005b9920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b9920(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b9920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0xc))) = param_2;
  return param_2;
}

/* ref: FUN_005b9990 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b9990(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b9990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x1fc))) = param_2;
  return param_2;
}

/* ref: FUN_005b99a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b99a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5b99a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x1cc))) = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1d0))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x1d4))) = param_1[2];
  uVar1 = param_1[3];
  *((uint *)GEN_TOP(((int)this + 0x1d8))) = uVar1;
  return uVar1;
}

/* ref: FUN_005b99d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b99d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b99d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = (param_2 * '\x02' ^ *((byte *)GEN_TOP((in_ecx + 0x220)))) & 2;
  *((byte *)GEN_TOP((in_ecx + 0x220))) = *((byte *)GEN_TOP((in_ecx + 0x220))) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005b9a10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b9a10(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b9a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  in_ecx[1] = 0;
  *(undefined1 *)(in_ecx + 2) = 0;
  return (uint)in_ecx;
}

/* ref: Component::GUI2::ListComponentCallBackInterface::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005b9a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5b9a40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: Component::GUI2::ListComponentCallBackInterface::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005b9a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5b9a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: Component::GUI2::ListComponentCallBackInterface::vf3 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005b9a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5b9a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 1;
}

/* ref: Component::GUI2::ListComponentCallBackInterface::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b9a70(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b9a70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x10a0b64));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_005b9ae0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b9ae0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b9ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x111))) = param_2;
  return param_2;
}

/* ref: FUN_005b9b00 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b9b00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b9b00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x11b))) = param_2;
  return param_2;
}

/* ref: FUN_005b9b20 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b9b20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b9b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x123))) = param_2;
  return param_2;
}

/* ref: FUN_005b9bf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b9bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5b9bf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return (uint)this;
}

/* ref: FUN_005b9c80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b9c80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b9c80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (0 < (int)param_2) {
    *((uint *)GEN_TOP((in_ecx + 0xa4))) = param_2;
  }
  return param_2;
}

/* ref: FUN_005b9ca0 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_005b9ca0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b9ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (-1 < (short)(ushort)param_2) {
    *((ushort *)GEN_TOP((in_ecx + 0xa8))) = (ushort)param_2;
  }
  return (ushort)param_2;
}

/* ref: FUN_005b9cc0 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_005b9cc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b9cc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (-1 < (short)(ushort)param_2) {
    *((ushort *)GEN_TOP((in_ecx + 0xaa))) = (ushort)param_2;
  }
  return (ushort)param_2;
}

/* ref: FUN_005b9d20 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_005b9d20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5b9d20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF(((float10)*((int *)GEN_TOP((in_ecx + 0xb0))) / (float10)*((int *)GEN_TOP((in_ecx + 0xa8)))))));
}

/* ref: FUN_005b9d50 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b9d50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b9d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 200))) = param_2;
  return param_2;
}

/* ref: FUN_005b9d60 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_005b9d60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b9d60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 0xc2))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_005b9d90 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b9d90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b9d90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0xcd))) = param_2;
  return param_2;
}

/* ref: FUN_005b9de0 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_005b9de0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5b9de0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF(((float10)*((int *)GEN_TOP((in_ecx + 0xac))) / (float10)*((int *)GEN_TOP((in_ecx + 0xa8)))))));
}

/* ref: FUN_005b9e10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b9e10(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x5b9e10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 2) = param_4;
  return (uint)param_1;
}

/* ref: FUN_005b9e60 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005b9e60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b9e60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = (param_2 * '\x04' ^ *((byte *)GEN_TOP((in_ecx + 0xaa)))) & 4;
  *((byte *)GEN_TOP((in_ecx + 0xaa))) = *((byte *)GEN_TOP((in_ecx + 0xaa))) ^ bVar1;
  return bVar1;
}

/* ref: Component::GUI2::AtkResourceRendererBase::vf1 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005b9f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5b9f40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Component::GUI2::AtkResourceRendererBase::vf2 */
GEN_OWN GEN_NOFRAME uint F_005b9f50(void)
{
  GEN_ENTER(0x5b9f50u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Component::GUI2::AtkResourceRendererBase::vf4 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005b9f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5b9f60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Component::GUI2::AtkResourceRendererBase::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b9f70(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b9f70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_005b9fc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b9fc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b9fc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: Component::GUI2::AtkImageNodeRenderer::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b9fd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b9fd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: Component::GUI2::AtkImageNodeRenderer::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005b9fe0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5b9fe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 4)));
}

/* ref: Component::GUI2::AtkImageNodeRenderer::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005b9ff0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5b9ff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_005ba040 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ba040(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5ba040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: Component::GUI2::AtkTextNodeRenderer::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ba050(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5ba050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: Component::GUI2::AtkTextNodeRenderer::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ba060(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5ba060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_005ba0b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ba0b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5ba0b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: Component::GUI2::AtkNineGridNodeRenderer::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ba0c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5ba0c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: Component::GUI2::AtkNineGridNodeRenderer::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005ba0d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ba0d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 4)));
}

/* ref: Component::GUI2::AtkNineGridNodeRenderer::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ba0e0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5ba0e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_005ba130 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ba130(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5ba130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: Component::GUI2::AtkCounterNodeRenderer::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ba140(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5ba140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: Component::GUI2::AtkCounterNodeRenderer::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005ba150(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ba150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 4)));
}

/* ref: Component::GUI2::AtkCounterNodeRenderer::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ba160(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5ba160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Component::GUI2::AtkComponentNodeRenderer::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ba1b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5ba1b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: Component::GUI2::AtkComponentNodeRenderer::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ba1c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5ba1c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Component::GUI2::AtkResourceRendererManager::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ba210(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5ba210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10a0c08));
  param_1[0xe] = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  param_1[0xb] = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  param_1[8] = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  param_1[5] = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  param_1[2] = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  param_1[1] = (*(undefined * PTR32 (*)[5])REFP(0x10a0b78));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_005ba250 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ba250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5ba250u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_1,param_2);
  if ((int)uVar1 < 0) {
    return 0xffffffff;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG,param_1,param_2);
  return 0;
}

/* ref: Component::GUI2::AtkResourceRendererBase::vf3 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ba290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5ba290u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return (param_1 != 0) - 1;
}

/* ref: FUN_005ba2b0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_005ba2b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5ba2b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return ((uint)*((ushort *)GEN_TOP((param_2 + 0x2c))) - (*((uint *)GEN_TOP((param_1 + 0x88))) >> 0x14 & 1)) * 0x40;
}

/* ref: FUN_005ba2e0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_005ba2e0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(float param_6, float gen_a5), GEN_P(float param_7, float gen_a6))
{
  GEN_ENTER(0x5ba2e0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_PIN(float param_7 = (float)gen_a6;)
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = (float10)REFG(double, 0x1088108);
  if (param_3 - 1U < 8) {
                    
    switch((unsigned int)(uintptr_t)((&REFG(undefined, 0x5ba35f))[(int)(param_3)])) {
    case 0: ;
      fVar3 = GEN_X87(((float10)param_4 - (float10)param_6) * fVar2);
      break;
    case 1: ;
      fVar3 = GEN_X87((float10)param_4 - (float10)param_6);
      break;
    case 2: ;
      goto switchD_005ba2fb_caseD_3;
    }
    *param_1 = (float)(fVar3 + (float10)*param_1);
  }
switchD_005ba2fb_caseD_3: ;
  uVar1 = param_3 - 3;
  if (uVar1 < 6) {
                    
    switch((unsigned int)(uintptr_t)(uVar1)) {
    default: ;
      *param_2 = ((float)GEN_TOF((((float10)param_5 - (float10)param_7) * fVar2 + (float10)*param_2)));
      return (uint)param_2;
    case 3: ;
      *param_2 = ((float)GEN_TOF((((float10)param_5 - (float10)param_7) + (float10)*param_2)));
      return (uint)param_2;
    }
  }
  return uVar1;
}

/* ref: FUN_005ba3d0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_005ba3d0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(byte param_5, unsigned int gen_a4), GEN_P(char param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x5ba3d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(byte param_5 = (byte)gen_a4;)
  GEN_PIN(char param_6 = (char)gen_a5;)
  uint * puVar1;
  
  puVar1 = ((uint *)GEN_TOP(0x0));
  if (param_4 != 0) {
    *param_1 = 0;
    if ((*((uint *)GEN_TOP((param_4 + 0x84))) & 0x40000000) != 0) {
      *param_2 = (uint)param_5 << 4 | ((param_6 != '\x03') - 1 & 0x4000) + 0x121100;
      *param_3 = 0x10;
      return (uint)param_3;
    }
    *param_2 = (uint)param_5 << 4 | ((param_6 != '\x03') - 1 & 0x4000) + 0x120000;
    *param_3 = 0;
    puVar1 = param_2;
  }
  return (uint)puVar1;
}

/* ref: FUN_005ba480 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005ba480(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5ba480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x20))) = param_2;
  return param_2;
}

/* ref: FUN_005ba490 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ba490(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5ba490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x1c))) = param_2;
  return param_2;
}

/* ref: FUN_005ba4b0 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_005ba4b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ba4b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x88))) + 0x30))) -
                         (float10)(int)*((short *)GEN_TOP((in_ecx + 0x290)))))));
}

