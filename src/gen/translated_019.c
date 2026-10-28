#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: Client::System::Resource::Handle::GrassGridDataResourceHandle::vf25 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00505b00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x505b00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)(this + 0x3c0) != (undefined *)0x0) {
    F_00520630(*(undefined * PTR32 *)(this + 0x3c0) GEN_EDX_FWD,3);
    *(undefined4 *)(this + 0x3c0) = 0;
  }
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  return;
}

/* ref: FUN_00505b30 */
GEN_NOFRAME uint GEN_THISCALL F_00505b30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x505b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x350];
  ushort * puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort * puVar5;
  ushort * puVar6;
  uint uVar7;
  float * pfVar8;
  uint * puVar9;
  ushort * PTR32 * ppuVar10;
  float fVar11;
  undefined4 * puVar12;
  int iVar13;
  int * piVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  int iVar19;
  int iVar20;
  undefined * pvVar21;
  undefined4 * puVar22;
  float10 fVar23;
  float fVar24;
  
  (*(uint *)(gen_frame + 0x33c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x340);
  (*(int *)(gen_frame + 0x5c)) = param_1;
  (*(undefined4 *)(gen_frame + 0x1b4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088138)));
  (*(undefined4 *)(gen_frame + 0x1d4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088138)));
  (*(undefined4 *)(gen_frame + 0x1f4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088138)));
  (*(undefined4 *)(gen_frame + 0x214)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088138)));
  (*(undefined4 *)(gen_frame + 0x234)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088138)));
  (*(undefined4 *)(gen_frame + 0x254)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088138)));
  (*(undefined * PTR32 *)(gen_frame + 0xdc)) = this;
  ((float *)(gen_frame + 0x78))[0] = 1.68156e-44;
  ((float *)(gen_frame + 0x78))[1] = 1.68156e-44;
  (*(undefined4 *)(gen_frame + 0x1b0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1099848)));
  (*(undefined4 *)(gen_frame + 0x1b8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1099848)));
  (*(undefined4 *)(gen_frame + 0x1c4)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1d0)) = 0;
  (*(undefined4 *)(gen_frame + 0x1d8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1e0)) = 0;
  (*(undefined4 *)(gen_frame + 0x1e4)) = 0;
  (*(undefined4 *)(gen_frame + 0x1e8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1f0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094808)));
  (*(undefined4 *)(gen_frame + 0x1f8)) = 0;
  (*(undefined4 *)(gen_frame + 0x200)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094808)));
  (*(undefined4 *)(gen_frame + 0x204)) = 0;
  (*(undefined4 *)(gen_frame + 0x208)) = 0;
  (*(undefined4 *)(gen_frame + 0x210)) = 0;
  (*(undefined4 *)(gen_frame + 0x218)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1099848)));
  (*(undefined4 *)(gen_frame + 0x220)) = 0;
  (*(undefined4 *)(gen_frame + 0x224)) = 0;
  (*(undefined4 *)(gen_frame + 0x228)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1099848)));
  (*(undefined4 *)(gen_frame + 0x230)) = 0;
  (*(undefined4 *)(gen_frame + 0x238)) = 0;
  (*(undefined4 *)(gen_frame + 0x240)) = 0;
  (*(undefined4 *)(gen_frame + 0x244)) = 0;
  (*(undefined4 *)(gen_frame + 0x248)) = 0;
  (*(undefined4 *)(gen_frame + 0x250)) = 0;
  (*(undefined4 *)(gen_frame + 0x258)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094808)));
  (*(undefined4 *)(gen_frame + 0x260)) = 0;
  (*(undefined4 *)(gen_frame + 0x264)) = 0;
  (*(undefined4 *)(gen_frame + 0x268)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094808)));
  (*(undefined4 *)(gen_frame + 0x270)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1099848)));
  (*(undefined4 *)(gen_frame + 0x274)) = 0;
  (*(undefined4 *)(gen_frame + 0x278)) = 0;
  (*(undefined4 *)(gen_frame + 0x280)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094808)));
  (*(undefined4 *)(gen_frame + 0x284)) = 0;
  (*(undefined4 *)(gen_frame + 0x288)) = 0;
  (*(undefined4 *)(gen_frame + 0x290)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1099848)));
  (*(undefined4 *)(gen_frame + 0x294)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
  (*(undefined4 *)(gen_frame + 0x298)) = 0;
  (*(undefined4 *)(gen_frame + 0x2a0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094808)));
  (*(undefined4 *)(gen_frame + 0x2a4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
  (*(undefined4 *)(gen_frame + 0x2a8)) = 0;
  (*(undefined4 *)(gen_frame + 0x2b0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1099848)));
  (*(uint *)(gen_frame + 0x2b4)) = (uint)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x2b8)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094808)));
  (*(uint *)(gen_frame + 0x2c4)) = (uint)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x2c8)) = 0;
  (*(undefined4 *)(gen_frame + 0x2d0)) = 0;
  (*(undefined4 *)(gen_frame + 0x2d4)) = 0;
  (*(undefined4 *)(gen_frame + 0x2d8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1099848)));
  (*(undefined4 *)(gen_frame + 0x2e0)) = 0;
  (*(undefined4 *)(gen_frame + 0x2e4)) = 0;
  (*(undefined4 *)(gen_frame + 0x2e8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094808)));
  (*(undefined4 *)(gen_frame + 0x2f0)) = 0;
  (*(undefined4 *)(gen_frame + 0x2f4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
  (*(undefined4 *)(gen_frame + 0x2f8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1099848)));
  (*(undefined4 *)(gen_frame + 0x300)) = 0;
  (*(undefined4 *)(gen_frame + 0x304)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
  (*(undefined4 *)(gen_frame + 0x308)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094808)));
  (*(undefined4 *)(gen_frame + 0x310)) = 0;
  (*(undefined4 *)(gen_frame + 0x320)) = 0;
  (*(float *)(gen_frame + 0xc0)) = 0.0;
  ((undefined4 * PTR32 *)(gen_frame + 0x18))[1] = &(*(undefined4 *)(gen_frame + 0x270));
  (*(float *)(gen_frame + 0x20)) = *(float *)((int)this + 0xe4);
  fVar15 = *(float *)((int)this + 0xe8);
  ((undefined4 * PTR32 *)(gen_frame + 0x18))[0] = &(*(undefined4 *)(gen_frame + 0x1b0));
  fVar11 = *(float *)((int)this + 0xb0);
  puVar12 = &REFG(float, 0x1302d00);
  ppuVar10 = ((ushort * PTR32 *)(gen_frame + 0x170));
  for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 - 1) {
    *ppuVar10 = (ushort *)*puVar12;
    puVar12 = puVar12 + 1;
    ppuVar10 = ppuVar10 + 1;
  }
  (*(float *)(gen_frame + 0x24)) = fVar15;
  (*(uint *)(gen_frame + 0x314)) = (uint)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x318)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1099848)));
  (*(uint *)(gen_frame + 0x324)) = (uint)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x328)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094808)));
  (*(float *)(gen_frame + 0x28)) = *(float *)((int)this + 0xec);
  (*(float *)(gen_frame + 0xa4)) = fVar11;
  F_00b4e820(((undefined4 *)(gen_frame + 0xf0)) GEN_EDX_FWD);
  (*(float *)(gen_frame + 0xc8)) = 0.0;
  do {
    pvVar21 = (*(undefined * PTR32 *)(gen_frame + 0xdc));
    fVar15 = (*(float *)(gen_frame + 0xc8));
    if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + (int)gen_fl2bits((*(float *)(gen_frame + 0xc8))) * 8 + 0x2f0) != 0) {
      puVar5 = (ushort *)
               F_004d68c0(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + (int)gen_fl2bits((*(float *)(gen_frame + 0xc8))) * 8 + 0x2f4) GEN_EDX_ARG,0,0
                            ,2);
      (*(ushort * PTR32 *)(gen_frame + 0xd0)) = puVar5;
      (*(int * PTR32 *)(gen_frame + 0xc4)) = (int *)0x0;
      uVar7 = (uint)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      if ((*(float *)(gen_frame + 0xa4)) != 0.0) {
        do {
          fVar11 = (*(float *)(gen_frame + 0xc8));
          puVar5 = (ushort *)
                   (uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) +
                          ((int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0xc4))) * 0x20 + (int)gen_fl2bits(fVar15)) * 2 + 0x10c)));
          (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar5;
          if (puVar5 != (ushort *)0x0) {
            iVar13 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x3c0);
            (*(ushort * PTR32 *)(gen_frame + 0xd8)) = (ushort *)0x0;
            (*(ushort * PTR32 *)(gen_frame + 0xe8)) = (ushort *)0x0;
            iVar17 = ((int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0xc4))) * 0x1a + (int)gen_fl2bits(fVar15)) * 8;
            *(ushort * PTR32 *)(iVar17 + iVar13) = puVar5;
            fVar18 = 0.0;
            (*(ushort * PTR32 *)(gen_frame + 0xe0)) = (ushort *)0x0;
            if (1 < (int)(*(int * PTR32 *)(gen_frame + 0xc4))) {
              puVar6 = ((ushort *)(uintptr_t)gen_fl2bits((float)(((float *)(gen_frame + 0x78))[(int)((int)gen_fl2bits(fVar15))])));
              (*(ushort * PTR32 *)(gen_frame + 0xe4)) = puVar6;
              piVar14 = ((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x3c0) + (int)gen_fl2bits(fVar15) * 8)));
              iVar13 = ((int)(*(int * PTR32 *)(gen_frame + 0xc4)) - 2U >> 1) + 1;
              fVar18 = gen_bits2f(iVar13 * 2);
              (*(ushort * PTR32 *)(gen_frame + 0xd4)) = ((ushort *)(uintptr_t)gen_fl2bits((float)(fVar18)));
              do {
                (*(ushort * PTR32 *)(gen_frame + 0xd8)) = (ushort *)((int)(*(ushort * PTR32 *)(gen_frame + 0xd8)) + *piVar14 * (int)((int)(uintptr_t)puVar6) * 0x10);
                (*(ushort * PTR32 *)(gen_frame + 0xe8)) = (*(ushort * PTR32 *)(gen_frame + 0xe8)) + piVar14[0x34] * (int)((int)(uintptr_t)puVar6) * 8;
                piVar14 = piVar14 + 0x68;
                iVar13 = iVar13 - 1;
                fVar15 = (*(float *)(gen_frame + 0xc8));
              } while (iVar13 != 0);
            }
            iVar13 = 0;
            if ((uint)gen_fl2bits(fVar18) < (*(int * PTR32 *)(gen_frame + 0xc4))) {
              iVar13 = *((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x3c0) +
                               ((int)gen_fl2bits(fVar18) * 0x1a + (int)gen_fl2bits(fVar15)) * 8))) *
                       (int)gen_fl2bits(((float *)(gen_frame + 0x78))[(int)((int)gen_fl2bits(fVar15))]) * 0x10;
            }
            iVar19 = 0;
            *((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x3c0) + 4 + iVar17))) =
                 (int)(*(ushort * PTR32 *)(gen_frame + 0xe8)) + iVar13 + (int)(*(ushort * PTR32 *)(gen_frame + 0xd8));
            iVar17 = (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0xc4))) * 0x40 + 0xf0 + (int)(*(undefined * PTR32 *)(gen_frame + 0xdc));
            iVar13 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0xc4))) * 4 + 0xb4) + 0x40 + (*(int *)(gen_frame + 0x5c));
            (*(int *)(gen_frame + 0xcc)) = iVar13;
            fVar15 = 0.0;
            (*(ushort * PTR32 *)(gen_frame + 0xd8)) = (ushort *)iVar17;
            if ((int)gen_fl2bits((*(float *)(gen_frame + 0xc8))) < 2) {
              iVar20 = 0;
            }
            else {
              puVar6 = (ushort *)(iVar17 + 0x1e);
              iVar16 = ((int)gen_fl2bits((*(float *)(gen_frame + 0xc8))) - 2U >> 1) + 1;
              fVar15 = gen_bits2f(iVar16 * 2);
              (*(ushort * PTR32 *)(gen_frame + 0xd4)) = ((ushort *)(uintptr_t)gen_fl2bits((float)(fVar15)));
              iVar20 = 0;
              do {
                iVar19 = iVar19 + (uint)puVar6[-1] * 0x16;
                iVar20 = iVar20 + (uint)*puVar6 * 0x16;
                puVar6 = puVar6 + 2;
                iVar16 = iVar16 - 1;
              } while (iVar16 != 0);
            }
            if ((uint)gen_fl2bits(fVar15) < (uint)gen_fl2bits((*(float *)(gen_frame + 0xc8)))) {
              (*(int *)(gen_frame + 0xcc)) = iVar13 + (uint)*(ushort *)(iVar17 + 0x1c + (int)gen_fl2bits(fVar15) * 2) *
                                   0x16;
            }
            fVar18 = ((float *)(gen_frame + 0x78))[(int)((int)gen_fl2bits((*(float *)(gen_frame + 0xc8))))];
            (*(int *)(gen_frame + 0xcc)) = (*(int *)(gen_frame + 0xcc)) + iVar19 + iVar20;
            (*(uint *)(gen_frame + 0x40)) = uVar7;
            (*(ushort * PTR32 *)(gen_frame + 0xd4)) = (ushort *)((int)gen_fl2bits(fVar18) * (int)puVar5);
            uVar4 = 0;
            uVar3 = (ushort)(uVar7 >> 0x10);
            if (uVar7 != 0) {
              puVar6 = ((ushort *)GEN_TOP(((uVar7 >> 0x17 & 0xff) - 0x70)));
              (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar6;
              if ((int)puVar6 < 0) {
                uVar4 = 0;
              }
              else {
                (*(ushort * PTR32 *)(gen_frame + 0xe4)) = (ushort *)0x1f;
                ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xec));
                if (0x1e < (int)puVar6) {
                  ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xe4));
                }
                uVar4 = uVar3 & 0x8000 | (ushort)(uVar7 >> 0xd) & 0x3ff |
                        (ushort)((int)*ppuVar10 << 10);
              }
            }
            (*(uint *)(gen_frame + 0x48)) = uVar7;
            (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x9c)) + 0)) = uVar4;
            (*(undefined4 *)(gen_frame + 0x9c)) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x9c)) + 2)),uVar4);
            uVar2 = 0;
            if (uVar7 != 0) {
              puVar6 = ((ushort *)GEN_TOP(((uVar7 >> 0x17 & 0xff) - 0x70)));
              (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar6;
              if ((int)puVar6 < 0) {
                uVar2 = 0;
              }
              else {
                (*(ushort * PTR32 *)(gen_frame + 0xe4)) = (ushort *)0x1f;
                ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xec));
                if (0x1e < (int)puVar6) {
                  ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xe4));
                }
                uVar2 = uVar3 & 0x8000 | (ushort)(uVar7 >> 0xd) & 0x3ff |
                        (ushort)((int)*ppuVar10 << 10);
              }
            }
            (*(uint *)(gen_frame + 0x58)) = uVar7;
            (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x9c)) + 2)) = uVar2;
            (*(undefined4 *)(gen_frame + 0x9c)) = CONCAT22(uVar2,uVar4);
            uVar4 = 0;
            if (uVar7 != 0) {
              puVar6 = ((ushort *)GEN_TOP(((uVar7 >> 0x17 & 0xff) - 0x70)));
              (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar6;
              if ((int)puVar6 < 0) {
                uVar4 = 0;
              }
              else {
                (*(ushort * PTR32 *)(gen_frame + 0xe4)) = (ushort *)0x1f;
                ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xec));
                if (0x1e < (int)puVar6) {
                  ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xe4));
                }
                uVar4 = uVar3 & 0x8000 | (ushort)(uVar7 >> 0xd) & 0x3ff |
                        (ushort)((int)*ppuVar10 << 10);
              }
            }
            (*(uint *)(gen_frame + 0x38)) = uVar7;
            (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xa0)) + 0)) = uVar4;
            (*(undefined4 *)(gen_frame + 0xa0)) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xa0)) + 2)),uVar4);
            uVar2 = 0;
            if (uVar7 != 0) {
              puVar6 = ((ushort *)GEN_TOP(((uVar7 >> 0x17 & 0xff) - 0x70)));
              (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar6;
              if ((int)puVar6 < 0) {
                uVar2 = 0;
              }
              else {
                (*(ushort * PTR32 *)(gen_frame + 0xe4)) = (ushort *)0x1f;
                ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xec));
                if (0x1e < (int)puVar6) {
                  ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xe4));
                }
                uVar2 = uVar3 & 0x8000 | (ushort)(uVar7 >> 0xd) & 0x3ff |
                        (ushort)((int)*ppuVar10 << 10);
              }
            }
            (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xa0)) + 2)) = uVar2;
            (*(undefined4 *)(gen_frame + 0xa0)) = CONCAT22(uVar2,uVar4);
            (*(ushort * PTR32 *)(gen_frame + 0xe4)) = (ushort *)0xffffffff;
            (*(ushort * PTR32 *)(gen_frame + 0xd8)) = (ushort *)0x0;
            fVar15 = fVar11;
            if ((ushort *)((int)gen_fl2bits(fVar18) * (int)puVar5) != (ushort *)0x0) {
              (*(uint *)(gen_frame + 0x54)) = (uint)gen_fl2bits(((float *)(gen_frame + 0x78))[(int)((int)gen_fl2bits((*(float *)(gen_frame + 0xc8))))]) >> 1;
              (*(uint *)(gen_frame + 0x74)) = uVar7;
              do {
                puVar5 = (ushort *)
                         ((uint)((int)(uintptr_t)(*(ushort * PTR32 *)(gen_frame + 0xd8))) / (uint)gen_fl2bits(((float *)(gen_frame + 0x78))[(int)((int)gen_fl2bits(fVar11))]));
                if ((*(ushort * PTR32 *)(gen_frame + 0xe4)) != puVar5) {
                  (*(ushort * PTR32 *)(gen_frame + 0xe4)) = puVar5;
                  uVar7 = F_00b50490(((undefined4 *)(gen_frame + 0xf0)) GEN_EDX_ARG,(*(int *)(gen_frame + 0xcc)));
                  (*(int *)(gen_frame + 0xcc)) = (*(int *)(gen_frame + 0xcc)) + uVar7;
                  puVar6 = ((ushort *)(uintptr_t)gen_fl2bits((float)(F_00a4b7d0())));
                  (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar6;
                  uVar4 = *(ushort *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + (int)gen_fl2bits(fVar11) * 2 + 0xd8);
                  if (uVar4 == 0) {
                    (*(int * PTR32 *)(gen_frame + 0xb4)) = (int *)0x0;
                  }
                  else {
                    (*(int * PTR32 *)(gen_frame + 0xb4)) = ((int *)GEN_TOP((((uVar4 & 0xffff8000) * 8 | uVar4 & 0x3ff) << 0xd |
                                       ((uVar4 >> 10 & 0x1f) + 0x70) * 0x800000)));
                  }
                  uVar4 = *(ushort *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + (int)gen_fl2bits(fVar11) * 2 + 0xd4);
                  if (uVar4 == 0) {
                    (*(undefined4 * PTR32 *)(gen_frame + 0xb8)) = (undefined4 *)0x0;
                  }
                  else {
                    (*(undefined4 * PTR32 *)(gen_frame + 0xb8)) = ((undefined4 *)GEN_TOP((((uVar4 & 0xffff8000) * 8 | uVar4 & 0x3ff) << 0xd |
                                ((uVar4 >> 10 & 0x1f) + 0x70) * 0x800000)));
                  }
                  puVar6 = ((ushort *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0xb8))))) +
                                  (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar6))) *
                                  ((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0xb4))))) - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0xb8))))))))))));
                  (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar6;
                  (*(float *)(gen_frame + 0xc0)) = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar6))) * (float10)(*(float *)(gen_frame + 0x168)));
                  puVar6 = ((ushort *)(uintptr_t)gen_fl2bits((float)(F_00a4b7d0())));
                  (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar6;
                  uVar4 = *(ushort *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + (int)gen_fl2bits(fVar11) * 2 + 0xe0);
                  if (uVar4 == 0) {
                    (*(float *)(gen_frame + 0xac)) = 0.0;
                  }
                  else {
                    (*(float *)(gen_frame + 0xac)) = gen_bits2f(((uVar4 & 0xffff8000) * 8 | uVar4 & 0x3ff) << 0xd |
                                           ((uVar4 >> 10 & 0x1f) + 0x70) * 0x800000);
                  }
                  uVar4 = *(ushort *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + (int)gen_fl2bits(fVar11) * 2 + 0xdc);
                  if (uVar4 == 0) {
                    (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)0x0;
                  }
                  else {
                    (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = ((undefined4 *)GEN_TOP((((uVar4 & 0xffff8000) * 8 | uVar4 & 0x3ff) << 0xd |
                                ((uVar4 >> 10 & 0x1f) + 0x70) * 0x800000)));
                  }
                  puVar6 = ((ushort *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0xa8))))) +
                                  (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar6))) *
                                  ((float10)(*(float *)(gen_frame + 0xac)) - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0xa8))))))))))));
                  (*(ushort * PTR32 *)(gen_frame + 0xe8)) = puVar6;
                  fVar23 = ((float10)GEN_TOD(fsin((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar6))))));
                  puVar1 = ((ushort *)(uintptr_t)gen_fl2bits((float)((float)fVar23)));
                  (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar1;
                  (*(ushort * PTR32 *)(gen_frame + 0xe0)) = puVar1;
                  fVar23 = ((float10)GEN_TOD(fcos((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar6))))));
                  puVar6 = ((ushort *)(uintptr_t)gen_fl2bits((float)((float)fVar23)));
                  (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar6;
                  ((ushort * PTR32 *)(gen_frame + 0x170))[1] = (ushort *)0x0;
                  ((ushort * PTR32 *)(gen_frame + 0x170))[0] = puVar6;
                  (*(undefined4 *)(gen_frame + 0x180)) = 0;
                  (*(uint *)(gen_frame + 0x184)) = (uint)gen_fl2bits((float)(REFG(float, 0x1087f04)));
                  (*(undefined4 *)(gen_frame + 0x188)) = 0;
                  (*(undefined4 *)(gen_frame + 0x194)) = 0;
                  (*(float *)(gen_frame + 0x178)) = ((float)GEN_TOF(-(float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar1)))));
                  (*(undefined4 *)(gen_frame + 0x1a0)) = 0;
                  (*(undefined4 *)(gen_frame + 0x1a4)) = 0;
                  (*(ushort * PTR32 *)(gen_frame + 0x190)) = puVar1;
                  (*(undefined4 *)(gen_frame + 0x1a8)) = 0;
                  (*(ushort * PTR32 *)(gen_frame + 0x198)) = puVar6;
                  fVar18 = F_00a4b7d0();
                  puVar6 = ((ushort *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar18 * (float10)*(double *)&REFG(undefined, 0x1099840) +
                                  (float10)*(double *)&REFG(undefined, 0x1099838)))));
                  (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar6;
                  fVar23 = ((float10)GEN_TOD(fsin((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar6))))));
                  (*(ushort * PTR32 *)(gen_frame + 0xec)) = ((ushort *)(uintptr_t)gen_fl2bits((float)((float)fVar23)));
                  fVar18 = (float)((float10)(float)fVar23 * (float10)REFG(double, 0x1088108));
                  (*(ushort * PTR32 *)(gen_frame + 0xe0)) = ((ushort *)(uintptr_t)gen_fl2bits((float)(fVar18)));
                  (*(ushort * PTR32 *)(gen_frame + 0xe8)) = ((ushort *)(uintptr_t)gen_fl2bits((float)((float)((float10)REFG(double, 0x1088108) * (float10)fVar18))));
                  puVar6 = ((ushort *)(uintptr_t)gen_fl2bits((float)(F_00a4b7d0())));
                  (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar6;
                  (*(float *)(gen_frame + 0x60)) = ((float)GEN_TOF((((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar6))) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(ushort * PTR32 *)(gen_frame + 0xe0))))) -
                                      (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(ushort * PTR32 *)(gen_frame + 0xe8)))))) * (float10)(*(float *)(gen_frame + 0x168)))));
                  puVar6 = ((ushort *)(uintptr_t)gen_fl2bits((float)(F_00a4b7d0())));
                  (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar6;
                  (*(float *)(gen_frame + 0x64)) = ((float)GEN_TOF((((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar6))) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(ushort * PTR32 *)(gen_frame + 0xe0))))) -
                                      (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(ushort * PTR32 *)(gen_frame + 0xe8)))))) * (float10)(*(float *)(gen_frame + 0x168)))));
                  puVar6 = ((ushort *)(uintptr_t)gen_fl2bits((float)(F_00a4b7d0())));
                  (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar6;
                  (*(float *)(gen_frame + 0x68)) = ((float)GEN_TOF((((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar6))) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(ushort * PTR32 *)(gen_frame + 0xe0))))) -
                                      (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(ushort * PTR32 *)(gen_frame + 0xe8)))))) * (float10)(*(float *)(gen_frame + 0x168)))));
                  puVar6 = ((ushort *)(uintptr_t)gen_fl2bits((float)(F_00a4b7d0())));
                  (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar6;
                  (*(float *)(gen_frame + 0x6c)) = ((float)GEN_TOF((((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar6))) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(ushort * PTR32 *)(gen_frame + 0xe0))))) -
                                      (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(ushort * PTR32 *)(gen_frame + 0xe8)))))) * (float10)(*(float *)(gen_frame + 0x168)))));
                  fVar24 = F_00a4b7d0();
                  (*(ushort * PTR32 *)(gen_frame + 0xe0)) = ((ushort *)(uintptr_t)gen_fl2bits((float)(fVar24)));
                  (*(ushort * PTR32 *)(gen_frame + 0xec)) = (ushort *)(uint)(*(byte *)(gen_frame + 0x160));
                  fVar18 = (float)((float10)(int)(uint)(*(byte *)(gen_frame + 0x160)) * (float10)*(double *)&REFG(double, 0x10948e0)
                                  );
                  (*(float *)(gen_frame + 0x44)) = fVar18;
                  uVar4 = 0;
                  if (fVar18 != 0.0) {
                    puVar6 = ((ushort *)GEN_TOP((((uint)gen_fl2bits(fVar18) >> 0x17 & 0xff) - 0x70)));
                    (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar6;
                    if ((int)puVar6 < 0) {
                      uVar4 = 0;
                    }
                    else {
                      (*(ushort * PTR32 *)(gen_frame + 0xe8)) = (ushort *)0x1f;
                      ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xec));
                      if (0x1e < (int)puVar6) {
                        ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xe8));
                      }
                      uVar4 = (ushort)((uint)gen_fl2bits(fVar18) >> 0x10) & 0x8000 |
                              (ushort)((uint)gen_fl2bits(fVar18) >> 0xd) & 0x3ff |
                              (ushort)((int)*ppuVar10 << 10);
                    }
                  }
                  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x9c)) + 0)) = uVar4;
                  (*(undefined4 *)(gen_frame + 0x9c)) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x9c)) + 2)),uVar4);
                  fVar18 = (float)((float10)fVar24 * (float10)*(double *)&REFG(undefined, 0x1080228));
                  (*(float *)(gen_frame + 0x50)) = fVar18;
                  uVar3 = 0;
                  if (fVar18 != 0.0) {
                    puVar6 = ((ushort *)GEN_TOP((((uint)gen_fl2bits(fVar18) >> 0x17 & 0xff) - 0x70)));
                    (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar6;
                    if ((int)puVar6 < 0) {
                      uVar3 = 0;
                    }
                    else {
                      (*(ushort * PTR32 *)(gen_frame + 0xe8)) = (ushort *)0x1f;
                      ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xec));
                      if (0x1e < (int)puVar6) {
                        ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xe8));
                      }
                      uVar3 = (ushort)((uint)gen_fl2bits(fVar18) >> 0x10) & 0x8000 |
                              (ushort)((uint)gen_fl2bits(fVar18) >> 0xd) & 0x3ff |
                              (ushort)((int)*ppuVar10 << 10);
                    }
                  }
                  (*(uint *)(gen_frame + 0x4c)) = (*(uint *)(gen_frame + 0x164));
                  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x9c)) + 2)) = uVar3;
                  (*(undefined4 *)(gen_frame + 0x9c)) = CONCAT22(uVar3,uVar4);
                  uVar4 = 0;
                  if ((*(uint *)(gen_frame + 0x164)) != 0) {
                    puVar6 = ((ushort *)GEN_TOP((((*(uint *)(gen_frame + 0x164)) >> 0x17 & 0xff) - 0x70)));
                    (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar6;
                    if ((int)puVar6 < 0) {
                      uVar4 = 0;
                    }
                    else {
                      (*(ushort * PTR32 *)(gen_frame + 0xe8)) = (ushort *)0x1f;
                      ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xec));
                      if (0x1e < (int)puVar6) {
                        ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xe8));
                      }
                      uVar4 = (ushort)((*(uint *)(gen_frame + 0x164)) >> 0x10) & 0x8000 |
                              (ushort)((*(uint *)(gen_frame + 0x164)) >> 0xd) & 0x3ff | (ushort)((int)*ppuVar10 << 10);
                    }
                  }
                  (*(uint *)(gen_frame + 0x3c)) = (uint)gen_fl2bits((float)(REFG(float, 0x1087f04)));
                  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xa0)) + 0)) = uVar4;
                  (*(undefined4 *)(gen_frame + 0xa0)) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xa0)) + 2)),uVar4);
                  uVar3 = 0;
                  if (REFG(float, 0x1087f04) != 0) {
                    puVar6 = ((ushort *)GEN_TOP(((REFG(uint, 0x1087f04) >> 0x17 & 0xff) - 0x70)));
                    (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar6;
                    if ((int)puVar6 < 0) {
                      uVar3 = 0;
                    }
                    else {
                      (*(ushort * PTR32 *)(gen_frame + 0xe8)) = (ushort *)0x1f;
                      ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xec));
                      if (0x1e < (int)puVar6) {
                        ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xe8));
                      }
                      uVar3 = (ushort)(REFG(uint, 0x1087f04) >> 0x10) & 0x8000 |
                              (ushort)(REFG(uint, 0x1087f04) >> 0xd) & 0x3ff | (ushort)((int)*ppuVar10 << 10)
                      ;
                    }
                  }
                  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xa0)) + 2)) = uVar3;
                  (*(undefined4 *)(gen_frame + 0xa0)) = CONCAT22(uVar3,uVar4);
                }
                uVar7 = (int)(*(ushort * PTR32 *)(gen_frame + 0xd8)) -
                        (int)((int)(uintptr_t)puVar5) * (int)gen_fl2bits(((float *)(gen_frame + 0x78))[(int)((int)gen_fl2bits(fVar11))]);
                pfVar8 = (float *)(((undefined4 * PTR32 *)(gen_frame + 0x18))[(int)((int)gen_fl2bits(fVar11))] + uVar7 * 4);
                fVar18 = *pfVar8;
                ((float *)(gen_frame + 0x78))[2] = fVar18;
                ((float *)(gen_frame + 0x78))[3] = pfVar8[1];
                fVar24 = pfVar8[2];
                (*(float *)(gen_frame + 0x88)) = fVar24;
                if (fVar11 == 0.0) {
                  switch((unsigned int)(uintptr_t)(uVar7)) {
                  case 2: ;
                  case 3: ;
                    ((float *)(gen_frame + 0x78))[2] = (float)((float10)fVar18 + (float10)(*(float *)(gen_frame + 0x60)));
                    fVar23 = (float10)fVar24 + (float10)(*(float *)(gen_frame + 0x64));
                    break;
                  default: ;
                    goto switchD_005067ef_caseD_4;
                  case 8: ;
                  case 9: ;
                    ((float *)(gen_frame + 0x78))[2] = (float)((float10)fVar18 + (float10)(*(float *)(gen_frame + 0x68)));
                    fVar23 = (float10)fVar24 + (float10)(*(float *)(gen_frame + 0x6c));
                  }
                  (*(float *)(gen_frame + 0x88)) = (float)fVar23;
                }
switchD_005067ef_caseD_4: ;
                if (uVar7 < (*(uint *)(gen_frame + 0x54))) {
                  ((float *)(gen_frame + 0x78))[2] = (float)((float10)((float *)(gen_frame + 0x78))[2] + (float10)(*(float *)(gen_frame + 0xc0)));
                }
                else {
                  F_004eea10(((float *)(gen_frame + 0x78)) + 2 GEN_EDX_ARG,(uint)((ushort * PTR32 *)(gen_frame + 0x170)));
                  (*(float *)(gen_frame + 0x88)) = (float)((float10)(*(float *)(gen_frame + 0x88)) + (float10)(*(float *)(gen_frame + 0xc0)));
                }
                puVar9 = (uint *)F_004ee970(((undefined1 *)(gen_frame + 0x0)),((float *)(gen_frame + 0x78)) + 2,((undefined4 *)(gen_frame + 0xf0)));
                puVar5 = (*(ushort * PTR32 *)(gen_frame + 0xd0));
                uVar7 = *puVar9;
                fVar18 = gen_bits2f(puVar9[1]);
                piVar14 = (int *)puVar9[2];
                (*(uint *)(gen_frame + 0x70)) = uVar7;
                uVar4 = 0;
                if (uVar7 != 0) {
                  puVar6 = ((ushort *)GEN_TOP(((uVar7 >> 0x17 & 0xff) - 0x70)));
                  (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar6;
                  if ((int)puVar6 < 0) {
                    uVar4 = 0;
                  }
                  else {
                    (*(ushort * PTR32 *)(gen_frame + 0xe8)) = (ushort *)0x1f;
                    ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xec));
                    if (0x1e < (int)puVar6) {
                      ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xe8));
                    }
                    uVar4 = (ushort)(uVar7 >> 0x10) & 0x8000 | (ushort)(uVar7 >> 0xd) & 0x3ff |
                            (ushort)((int)*ppuVar10 << 10);
                  }
                }
                (*(float *)(gen_frame + 0xb0)) = fVar18;
                *(*(ushort * PTR32 *)(gen_frame + 0xd0)) = uVar4;
                uVar4 = 0;
                if (fVar18 != 0.0) {
                  puVar6 = ((ushort *)GEN_TOP((((uint)gen_fl2bits(fVar18) >> 0x17 & 0xff) - 0x70)));
                  (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar6;
                  if ((int)puVar6 < 0) {
                    uVar4 = 0;
                  }
                  else {
                    (*(ushort * PTR32 *)(gen_frame + 0xd0)) = (ushort *)0x1f;
                    ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xec));
                    if (0x1e < (int)puVar6) {
                      ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xd0));
                    }
                    uVar4 = (ushort)((uint)gen_fl2bits(fVar18) >> 0x10) & 0x8000 |
                            (ushort)((uint)gen_fl2bits(fVar18) >> 0xd) & 0x3ff |
                            (ushort)((int)*ppuVar10 << 10);
                  }
                }
                (*(int * PTR32 *)(gen_frame + 0xbc)) = piVar14;
                puVar5[1] = uVar4;
                uVar4 = 0;
                if (piVar14 != (int *)0x0) {
                  puVar6 = ((ushort *)GEN_TOP((((uint)((int)(uintptr_t)piVar14) >> 0x17 & 0xff) - 0x70)));
                  (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar6;
                  if ((int)puVar6 < 0) {
                    uVar4 = 0;
                  }
                  else {
                    (*(ushort * PTR32 *)(gen_frame + 0xd0)) = (ushort *)0x1f;
                    ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xec));
                    if (0x1e < (int)puVar6) {
                      ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xd0));
                    }
                    uVar4 = (ushort)((uint)((int)(uintptr_t)piVar14) >> 0x10) & 0x8000 |
                            (ushort)((uint)((int)(uintptr_t)piVar14) >> 0xd) & 0x3ff | (ushort)((int)*ppuVar10 << 10);
                  }
                }
                puVar5[2] = uVar4;
                if ((*(uint *)(gen_frame + 0x74)) == 0) {
                  uVar4 = 0;
                }
                else {
                  puVar6 = ((ushort *)GEN_TOP((((*(uint *)(gen_frame + 0x74)) >> 0x17 & 0xff) - 0x70)));
                  (*(ushort * PTR32 *)(gen_frame + 0xec)) = puVar6;
                  if ((int)puVar6 < 0) {
                    uVar4 = 0;
                  }
                  else {
                    (*(ushort * PTR32 *)(gen_frame + 0xd0)) = (ushort *)0x1f;
                    ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xec));
                    if (0x1e < (int)puVar6) {
                      ppuVar10 = &(*(ushort * PTR32 *)(gen_frame + 0xd0));
                    }
                    uVar4 = (ushort)((int)*ppuVar10 << 10) |
                            (ushort)((*(uint *)(gen_frame + 0x74)) >> 0xd) & 0x3ff |
                            (ushort)((*(uint *)(gen_frame + 0x74)) >> 0x10) & 0x8000;
                  }
                }
                puVar5[3] = uVar4;
                *(undefined4 *)(puVar5 + 4) = (*(undefined4 *)(gen_frame + 0x9c));
                puVar6 = (ushort *)((int)(*(ushort * PTR32 *)(gen_frame + 0xd8)) + 1);
                *(undefined4 *)(puVar5 + 6) = (*(undefined4 *)(gen_frame + 0xa0));
                (*(ushort * PTR32 *)(gen_frame + 0xd0)) = puVar5 + 8;
                (*(ushort * PTR32 *)(gen_frame + 0xd8)) = puVar6;
                uVar7 = (uint)gen_fl2bits((float)(REFG(float, 0x1087f04)));
              } while (puVar6 < (*(ushort * PTR32 *)(gen_frame + 0xd4)));
            }
          }
          fVar11 = gen_bits2f((int)(*(int * PTR32 *)(gen_frame + 0xc4)) + 1);
          (*(int * PTR32 *)(gen_frame + 0xc4)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar11)));
          pvVar21 = (*(undefined * PTR32 *)(gen_frame + 0xdc));
        } while ((uint)gen_fl2bits(fVar11) < (uint)gen_fl2bits((*(float *)(gen_frame + 0xa4))));
      }
      F_004d6970(*(undefined * PTR32 *)((int)pvVar21 + (int)gen_fl2bits(fVar15) * 8 + 0x2f4) GEN_EDX_ARG);
    }
    (*(float *)(gen_frame + 0xc8)) = gen_bits2f((int)gen_fl2bits(fVar15) + 1U);
    if (1 < (int)gen_fl2bits(fVar15) + 1U) {
      (*(uint *)(gen_frame + 0x70)) = -0x2f0 - (int)(*(undefined * PTR32 *)(gen_frame + 0xdc));
      puVar5 = (ushort *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x308);
      (*(int * PTR32 *)(gen_frame + 0xc4)) = (int *)0x0;
      (*(ushort * PTR32 *)(gen_frame + 0xe0)) = puVar5;
      (*(ushort * PTR32 *)(gen_frame + 0xe4)) = (ushort *)0x4;
      (*(uint *)(gen_frame + 0x74)) = -0x308 - (int)(*(undefined * PTR32 *)(gen_frame + 0xdc));
      (*(float *)(gen_frame + 0xac)) = 2.24208e-44;
      do {
        if (*(int *)((int)puVar5 - 8) != 0) {
          (*(ushort * PTR32 *)(gen_frame + 0xe0)) = puVar5;
          puVar12 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)puVar5 GEN_EDX_ARG,0,*(int *)((int)puVar5 - 8) << 4,2)
          ;
          (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = puVar12;
          (*(undefined4 * PTR32 *)(gen_frame + 0xb8)) = *(undefined4 * PTR32 *)((int)puVar5 - 4);
          (*(float *)(gen_frame + 0xc8)) = 0.0;
          if ((*(float *)(gen_frame + 0xa4)) != 0.0) {
            (*(ushort * PTR32 *)(gen_frame + 0xd8)) = (ushort *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x10c);
            (*(ushort * PTR32 *)(gen_frame + 0xe8)) = (ushort *)0x0;
            (*(int * PTR32 *)(gen_frame + 0xb4)) = (int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0xb4);
            do {
              puVar6 = (ushort *)(uint)*(ushort *)((int)(*(ushort * PTR32 *)(gen_frame + 0xe4)) + (int)(*(ushort * PTR32 *)(gen_frame + 0xd8)));
              (*(ushort * PTR32 *)(gen_frame + 0xd0)) = puVar6;
              if (puVar6 != (ushort *)0x0) {
                puVar5 = (ushort *)((int)puVar5 + (*(uint *)(gen_frame + 0x74)));
                *((ushort * PTR32 *)GEN_TOP(((int)(*(ushort * PTR32 *)(gen_frame + 0xe8)) + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x3c0) + 0x10 + (int)puVar5)))
                     = puVar6;
                iVar17 = 0;
                iVar19 = 0;
                iVar13 = 0;
                fVar15 = 0.0;
                (*(ushort * PTR32 *)(gen_frame + 0xd4)) = puVar5;
                if (1 < (int)gen_fl2bits((*(float *)(gen_frame + 0xc8)))) {
                  piVar14 = ((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x3c0) + 0xe0 + (int)puVar5)));
                  (*(int * PTR32 *)(gen_frame + 0xbc)) = piVar14;
                  iVar20 = ((int)gen_fl2bits((*(float *)(gen_frame + 0xc8))) - 2U >> 1) + 1;
                  fVar15 = gen_bits2f(iVar20 * 2);
                  (*(float *)(gen_frame + 0xb0)) = fVar15;
                  do {
                    iVar17 = iVar17 + piVar14[-0x34];
                    iVar19 = iVar19 + *piVar14;
                    piVar14 = piVar14 + 0x68;
                    iVar20 = iVar20 - 1;
                  } while (iVar20 != 0);
                }
                if ((uint)gen_fl2bits(fVar15) < (uint)gen_fl2bits((*(float *)(gen_frame + 0xc8)))) {
                  iVar13 = *((int *)GEN_TOP(((int)gen_fl2bits(fVar15) * 0xd0 +
                                    *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x3c0) + 0x10 + (int)puVar5)));
                }
                iVar13 = iVar13 + iVar17 + iVar19;
                *((int *)GEN_TOP(((int)(*(ushort * PTR32 *)(gen_frame + 0xe8)) + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x3c0) + 0x14 + (int)puVar5))) =
                     iVar13;
                *((int *)GEN_TOP(((int)(*(ushort * PTR32 *)(gen_frame + 0xe8)) + (*(uint *)(gen_frame + 0x70)) + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xdc)) + 0x3c0) +
                        (int)(*(ushort * PTR32 *)(gen_frame + 0xe0))))) = iVar13 * 0x10;
                iVar13 = (*(int *)(gen_frame + 0x5c)) + 0x40 + *(*(int * PTR32 *)(gen_frame + 0xb4)) +
                         ((uint)(*(ushort * PTR32 *)(gen_frame + 0xd8))[1] + (uint)*(*(ushort * PTR32 *)(gen_frame + 0xd8))) * 0x16;
                piVar14 = (int *)0x0;
                (*(float *)(gen_frame + 0xc0)) = 0.0;
                (*(int *)(gen_frame + 0xcc)) = 0;
                if (1 < (int)(*(int * PTR32 *)(gen_frame + 0xc4))) {
                  puVar5 = (*(ushort * PTR32 *)(gen_frame + 0xd8)) + 3;
                  iVar17 = ((int)(*(int * PTR32 *)(gen_frame + 0xc4)) - 2U >> 1) + 1;
                  piVar14 = (int *)(iVar17 * 2);
                  (*(int * PTR32 *)(gen_frame + 0xbc)) = piVar14;
                  do {
                    (*(float *)(gen_frame + 0xc0)) = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0xc0))) + (uint)puVar5[-1] * 0x16);
                    (*(int *)(gen_frame + 0xcc)) = (*(int *)(gen_frame + 0xcc)) + (uint)*puVar5 * 0x16;
                    puVar5 = puVar5 + 2;
                    iVar17 = iVar17 - 1;
                  } while (iVar17 != 0);
                }
                if (piVar14 < (*(int * PTR32 *)(gen_frame + 0xc4))) {
                  iVar13 = iVar13 + (uint)(*(ushort * PTR32 *)(gen_frame + 0xd8))[(int)piVar14 + 2] * 0x16;
                }
                piVar14 = (int *)(iVar13 + (int)gen_fl2bits((*(float *)(gen_frame + 0xc0))) + (*(int *)(gen_frame + 0xcc)));
                puVar5 = (*(ushort * PTR32 *)(gen_frame + 0xe0));
                if (puVar6 != (ushort *)0x0) {
                  (*(ushort * PTR32 *)(gen_frame + 0xd4)) = puVar6;
                  do {
                    uVar7 = F_00b50490(((undefined4 *)(gen_frame + 0xf0)) GEN_EDX_ARG,piVar14);
                    (*(int * PTR32 *)(gen_frame + 0xbc)) = (int *)((int)piVar14 + uVar7);
                    (*(float *)(gen_frame + 0x60)) = (float)((float10)(*(float *)(gen_frame + 0x130)) + (float10)(*(float *)(gen_frame + 0x20)));
                    (*(float *)(gen_frame + 0x64)) = (float)((float10)(*(float *)(gen_frame + 0x134)) + (float10)(*(float *)(gen_frame + 0x24)));
                    (*(float *)(gen_frame + 0x68)) = (float)((float10)(*(float *)(gen_frame + 0x138)) + (float10)(*(float *)(gen_frame + 0x28)));
                    (*(float *)(gen_frame + 0x120)) = (float)((float10)(*(float *)(gen_frame + 0x130)) + (float10)(*(float *)(gen_frame + 0x20)));
                    (*(float *)(gen_frame + 0x124)) = (float)((float10)(*(float *)(gen_frame + 0x134)) + (float10)(*(float *)(gen_frame + 0x24)));
                    (*(float *)(gen_frame + 0x128)) = (float)((float10)(*(float *)(gen_frame + 0x138)) + (float10)(*(float *)(gen_frame + 0x28)));
                    puVar12 = ((undefined4 *)(gen_frame + 0xf0));
                    puVar22 = (*(undefined4 * PTR32 *)(gen_frame + 0xb8));
                    for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 - 1) {
                      *puVar22 = *puVar12;
                      puVar12 = puVar12 + 1;
                      puVar22 = puVar22 + 1;
                    }
                    fVar15 = F_00a4b7d0();
                    (*(float *)(gen_frame + 0xb0)) = fVar15;
                    fVar23 = (float10)*(double *)&REFG(undefined, 0x1080228);
                    (*(undefined4 * PTR32 *)(gen_frame + 0xb8)) = (*(undefined4 * PTR32 *)(gen_frame + 0xb8)) + 0x10;
                    (*(undefined4 * PTR32 *)(gen_frame + 0xa8))[2] = (*(uint *)(gen_frame + 0x164));
                    uVar7 = (uint)gen_fl2bits((float)(REFG(float, 0x1087f04)));
                    (*(undefined4 * PTR32 *)(gen_frame + 0xa8))[1] = (undefined4)gen_fl2bits((float)((float10)fVar15 * fVar23));
                    *(*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = 0;
                    (*(undefined4 * PTR32 *)(gen_frame + 0xa8))[3] = uVar7;
                    puVar6 = (ushort *)((int)(*(ushort * PTR32 *)(gen_frame + 0xd4)) - 1);
                    (*(ushort * PTR32 *)(gen_frame + 0xd4)) = puVar6;
                    (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) + 4;
                    piVar14 = (*(int * PTR32 *)(gen_frame + 0xbc));
                    puVar5 = (*(ushort * PTR32 *)(gen_frame + 0xe0));
                  } while (puVar6 != (ushort *)0x0);
                }
              }
              (*(int * PTR32 *)(gen_frame + 0xb4)) = (*(int * PTR32 *)(gen_frame + 0xb4)) + 1;
              (*(ushort * PTR32 *)(gen_frame + 0xe8)) = (*(ushort * PTR32 *)(gen_frame + 0xe8)) + 0x68;
              fVar15 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0xc8))) + 1);
              (*(ushort * PTR32 *)(gen_frame + 0xd8)) = (*(ushort * PTR32 *)(gen_frame + 0xd8)) + 0x20;
              (*(float *)(gen_frame + 0xc8)) = fVar15;
            } while ((uint)gen_fl2bits(fVar15) < (uint)gen_fl2bits((*(float *)(gen_frame + 0xa4))));
          }
          *(undefined4 *)(*(int *)puVar5 + 0x24) = 0;
        }
        (*(ushort * PTR32 *)(gen_frame + 0xe4)) = (*(ushort * PTR32 *)(gen_frame + 0xe4)) + 1;
        (*(int * PTR32 *)(gen_frame + 0xc4)) = (int *)((int)(*(int * PTR32 *)(gen_frame + 0xc4)) + 1);
        puVar5 = (ushort *)((int)puVar5 + 0xc);
        iVar13 = (int)gen_fl2bits((*(float *)(gen_frame + 0xac))) - 1;
        (*(float *)(gen_frame + 0xac)) = gen_bits2f(iVar13);
        (*(ushort * PTR32 *)(gen_frame + 0xe0)) = puVar5;
      } while (iVar13 != 0);
      F_00c47745((*(uint *)(gen_frame + 0x33c)) ^ (uint)(uint)(gen_frame + 0x340) GEN_EDX_ARG);
      return 1;
    }
  } while( true );
}

/* ref: FUN_00506ea0 */
GEN_FRAME uint GEN_THISCALL F_00506ea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x506ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  
  uVar1 = F_00503630(this GEN_EDX_FWD,param_1);
  if ((-1 < (short)uVar1) &&
     (uVar1 = *((ushort *)GEN_TOP((*(int *)((int)this + 0xd4) + 0x22 + (short)uVar1 * 0x28))),
     -1 < (short)uVar1)) {
    return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xb0) + 0x20))) + (uint)uVar1 * 4)));
  }
  return 0;
}

/* ref: FUN_00506ef0 */
GEN_FRAME float10 F_00506ef0(unsigned int gen_a0)
{
  GEN_ENTER(0x506ef0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int iVar1;
  char * _String;
  double dVar2;
  
  if ((*(int *)(param_1 + 0xc0) - (int)*(int * PTR32 *)(param_1 + 0xbc) & 0xfffffffcU) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = **(int * PTR32 *)(param_1 + 0xbc);
  }
  _String = (char *)F_0042a990(iVar1 + 0x68 GEN_EDX_ARG);
  dVar2 = F_00c4acaa(_String);
  return (float10)(float)dVar2;
}

/* ref: FUN_00506f30 */
GEN_FRAME uint F_00506f30(unsigned int gen_a0)
{
  GEN_ENTER(0x506f30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((*(int *)(param_1 + 0xc0) - (int)*(int * PTR32 *)(param_1 + 0xbc) & 0xfffffffcU) != 0) {
    return **(int * PTR32 *)(param_1 + 0xbc) + 0x68;
  }
  return 0x68;
}

/* ref: FUN_00506f60 */
GEN_FRAME uint F_00506f60(unsigned int gen_a0)
{
  GEN_ENTER(0x506f60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  if ((*(int *)(param_1 + 0xc0) - (int)*(int * PTR32 *)(param_1 + 0xbc) & 0xfffffffcU) != 0) {
    bVar1 = F_0042b6a0(((undefined *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xbc) + 0x68))) GEN_EDX_ARG,&REFG(undefined, 0x1098a24));
    return CONCAT31(extraout_var,bVar1);
  }
  bVar1 = F_0042b6a0((undefined *)0x68 GEN_EDX_ARG,&REFG(undefined, 0x1098a24));
  return CONCAT31(extraout_var_00,bVar1);
}

/* ref: FUN_00506fa0 */
GEN_FRAME unsigned int F_00506fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x506fa0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  char * pcVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  
  if ((*(int *)(param_2 + 0xc0) - (int)*(int * PTR32 *)(param_2 + 0xbc) & 0xfffffffcU) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = **(int * PTR32 *)(param_2 + 0xbc);
  }
  pcVar2 = (char *)F_0042a990(iVar4 + 0x68 GEN_EDX_ARG);
  dVar5 = F_00c4acaa(pcVar2);
  iVar4 = *(int *)(param_2 + 0xc);
  *param_1 = (float)dVar5;
  if ((*(int *)(iVar4 + 0xc0) - (int)*(int * PTR32 *)(iVar4 + 0xbc) & 0xfffffffcU) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int * PTR32 *)(iVar4 + 0xbc);
  }
  pcVar2 = (char *)F_0042a990(iVar3 + 0x68 GEN_EDX_ARG);
  dVar5 = F_00c4acaa(pcVar2);
  param_1[1] = (float)dVar5;
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(iVar4 + 0xc) + 0xbc)));
  if ((*((int *)GEN_TOP((*(int *)(iVar4 + 0xc) + 0xc0))) - (int)piVar1 & 0xfffffffcU) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar1;
  }
  pcVar2 = (char *)F_0042a990(iVar4 + 0x68 GEN_EDX_ARG);
  dVar5 = F_00c4acaa(pcVar2);
  param_1[2] = (float)dVar5;
  return 0;
}

/* ref: FUN_00507050 */
GEN_FRAME unsigned int F_00507050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x507050u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int * piVar1;
  float10 fVar2;
  float10 fVar3;
  char * pcVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  double dVar8;
  
  if ((*(int *)(param_2 + 0xc0) - (int)*(int * PTR32 *)(param_2 + 0xbc) & 0xfffffffcU) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = **(int * PTR32 *)(param_2 + 0xbc);
  }
  pcVar4 = (char *)F_0042a990(iVar6 + 0x68 GEN_EDX_ARG);
  dVar8 = F_00c4acaa(pcVar4);
  iVar6 = *(int *)(param_2 + 0xc);
  *param_1 = ((float)GEN_TOF((((float10)(float)dVar8 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                    (float10)*(double *)&REFG(undefined, 0x1080220))));
  if ((*(int *)(iVar6 + 0xc0) - (int)*(int * PTR32 *)(iVar6 + 0xbc) & 0xfffffffcU) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = **(int * PTR32 *)(iVar6 + 0xbc);
  }
  pcVar4 = (char *)F_0042a990(iVar5 + 0x68 GEN_EDX_ARG);
  dVar8 = F_00c4acaa(pcVar4);
  iVar6 = *(int *)(iVar6 + 0xc);
  param_1[1] = ((float)GEN_TOF((((float10)(float)dVar8 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                      (float10)*(double *)&REFG(undefined, 0x1080220))));
  if ((*(int *)(iVar6 + 0xc0) - (int)*(int * PTR32 *)(iVar6 + 0xbc) & 0xfffffffcU) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = **(int * PTR32 *)(iVar6 + 0xbc);
  }
  pcVar4 = (char *)F_0042a990(iVar5 + 0x68 GEN_EDX_ARG);
  dVar8 = F_00c4acaa(pcVar4);
  iVar6 = *(int *)(iVar6 + 0xc);
  param_1[2] = ((float)GEN_TOF((((float10)(float)dVar8 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                      (float10)*(double *)&REFG(undefined, 0x1080220))));
  piVar1 = *(int * PTR32 *)(iVar6 + 0xbc);
  if ((*(int *)(iVar6 + 0xc0) - (int)piVar1 & 0xfffffffcU) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *piVar1;
  }
  pcVar4 = (char *)F_0042a990(iVar6 + 0x68 GEN_EDX_ARG);
  dVar8 = F_00c4acaa(pcVar4);
  fVar3 = (float10)*(double *)&REFG(undefined, 0x1080228);
  fVar2 = (float10)*(double *)&REFG(undefined, 0x1080220);
  fVar7 = (float10)REFG(double, 0x1094890);
  param_1[1] = (float)((float10)param_1[1] * fVar7);
  param_1[3] = ((float)GEN_TOF((fVar7 * (float10)((float)GEN_TOF((((float10)(float)dVar8 * fVar3) / fVar2))))));
  return 0;
}

/* ref: Client::System::Resource::Handle::SkeletonParamResourceHandle::vf25 */
GEN_NOFRAME uint GEN_THISCALL F_00507190(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x507190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(this + 200) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) GEN_EDX_ARG,*(int *)(this + 200));
    *(undefined4 *)(this + 200) = 0;
  }
  if (*(undefined * PTR32 *)(this + 0xcc) != (undefined *)0x0) {
    uVar1 = F_00520030(*(undefined * PTR32 *)(this + 0xcc) GEN_EDX_ARG,3);
    *(undefined4 *)(this + 0xcc) = 0;
  }
  return uVar1;
}

/* ref: FUN_005071e0 */
GEN_FRAME uint GEN_THISCALL F_005071e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5071e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  uint uVar6;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  puVar3 = (undefined4 *)*puVar2;
  while (puVar3 != puVar2) {
    if (puVar3[4] != 0) {
      F_00406ad0(puVar3[4]);
      puVar3[4] = 0;
    }
    if (*(char *)((int)puVar3 + 0x15) == '\0') {
      puVar4 = (undefined4 *)puVar3[2];
      if (*(char *)((int)puVar4 + 0x15) == '\0') {
        cVar1 = *(char *)((int)*puVar4 + 0x15);
        puVar3 = puVar4;
        puVar4 = (undefined4 *)*puVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar4 + 0x15);
          puVar3 = puVar4;
          puVar4 = (undefined4 *)*puVar4;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar3[1] + 0x15);
        puVar5 = (undefined4 *)puVar3[1];
        puVar4 = puVar3;
        while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == (undefined4 *)puVar3[2]))) {
          cVar1 = *(char *)((int)puVar3[1] + 0x15);
          puVar5 = (undefined4 *)puVar3[1];
          puVar4 = puVar3;
        }
      }
    }
  }
  uVar6 = F_00524550(this GEN_EDX_ARG);
  return uVar6;
}

/* ref: FUN_00507260 */
GEN_FRAME uint GEN_THISCALL F_00507260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x507260u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  F_005245b0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(int *)&gen_args[1]),(*(int *)&gen_args[1]));
  if ((*(int *)&gen_args[1]) != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) {
    return *(int *)((*(int *)&gen_args[1]) + 0x10) + 4;
  }
  return 0x1097dd7;
}

/* ref: FUN_005072a0 */
GEN_FRAME byte GEN_THISCALL F_005072a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5072a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  char * pcVar2;
  uint uVar3;
  undefined * puVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  F_0040b1a0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_FWD,param_1,(int)pcVar2 - (int)(param_1 + 1));
  uVar3 = F_00408810(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0xc)) = uVar3;
  F_004087f0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_005245b0(this GEN_EDX_ARG,&(*(int *)(gen_frame + 0x14)),&(*(uint *)(gen_frame + 0xc)));
  if ((*(int *)(gen_frame + 0x14)) == *(int *)((int)this + 4)) {
    puVar4 = &REFG(undefined, 0x1097dd7);
  }
  else {
    puVar4 = ((undefined *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x14)) + 0x10) + 4)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return puVar4 != (undefined *)0x0;
}

/* ref: FUN_00507330 */
GEN_FRAME byte GEN_THISCALL F_00507330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x507330u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  F_005245b0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(int *)&gen_args[1]),(*(int *)&gen_args[1]));
  if ((*(int *)&gen_args[1]) != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) {
    return *(int *)((*(int *)&gen_args[1]) + 0x10) != -4;
  }
  return 1;
}

/* ref: FUN_00507370 */
GEN_NOFRAME byte GEN_THISCALL F_00507370(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x507370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (*(int *)((int)this + 0x10) == 0) {
    *(undefined1 *)((int)this + 0x4e) = 0;
    *(undefined1 *)((int)this + 0x51) = 1;
    if (*(int *)((int)this + 0x18) == 0 && *(int *)((int)this + 0x1c) == 0) {
      uVar3 = F_00427d90();
      *(ulonglong *)((int)this + 0x18) = uVar3 + 10000;
    }
    else {
      uVar3 = F_00427d90();
      uVar2 = (uint)(uVar3 >> 0x20);
      if ((*(uint *)((int)this + 0x1c) <= uVar2) &&
         ((*(uint *)((int)this + 0x1c) < uVar2 || (*(uint *)((int)this + 0x18) < (uint)uVar3)))) {
        *(undefined4 *)((int)this + 0x10) = 2;
        return 1;
      }
    }
    bVar1 = F_00505780(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG);
    if ((bVar1 != 0) || (*(int *)((int)this + 0xdd4) != *(int *)((int)this + 0xdd8))) {
      return 0;
    }
    *(undefined4 *)((int)this + 0x10) = 1;
  }
  return 1;
}

/* ref: FUN_005073f0 */
GEN_NOFRAME uint GEN_THISCALL F_005073f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5073f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  uVar2 = 0;
  piVar4 = (int *)((int)this + 0xd2c);
  do {
    if (*piVar4 != 0) {
      if ((int *)piVar4[-4] == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)piVar4[-4];
      }
      uVar1 = (uint)piVar4[-1] >> 2;
      if (*(uint *)(iVar3 + 8) <= uVar1) {
        uVar1 = uVar1 - *(uint *)(iVar3 + 8);
      }
      iVar3 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar1 * 4))) + (piVar4[-1] & 3U) * 4)));
      if (iVar3 != 0) {
        if (*(uint *)(iVar3 + 0x50) < 0x10) {
          return (uint)(uint *)(iVar3 + 0x3c);
        }
        return *(uint *)(iVar3 + 0x3c);
      }
    }
    uVar2 = uVar2 + 1;
    piVar4 = piVar4 + 6;
    if (6 < uVar2) {
      return 0x1097de6;
    }
  } while( true );
}

/* ref: FUN_00507460 */
GEN_FRAME uint GEN_THISCALL F_00507460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x507460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  int * piVar3;
  
  piVar3 = *(int * PTR32 *)((int)this + 0xde4);
  if (piVar3 != *(int * PTR32 *)((int)this + 0xde8)) {
    piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0xde8) - 4)));
    iVar1 = *piVar2;
    while (iVar1 != param_1) {
      if (piVar2 == piVar3) {
        return (uint)piVar2;
      }
      piVar2 = piVar2 - 1;
      iVar1 = *piVar2;
    }
    piVar3 = (int *)F_00c46e20(piVar2,piVar2 + 1,
                               (*(int *)((int)this + 0xde8) - (int)(piVar2 + 1) >> 2) * 4);
    *(int *)((int)this + 0xde8) = *(int *)((int)this + 0xde8) - 4;
  }
  return (uint)piVar3;
}

/* ref: FUN_005074c0 */
GEN_FRAME uint GEN_THISCALL F_005074c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5074c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  uint uVar6;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  puVar3 = (undefined4 *)*puVar2;
  while (puVar3 != puVar2) {
    puVar4 = (undefined4 *)puVar3[4];
    if (puVar4 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar4)(puVar4 GEN_EDX_FWD,1);
      puVar3[4] = 0;
    }
    if (*(char *)((int)puVar3 + 0x15) == '\0') {
      puVar4 = (undefined4 *)puVar3[2];
      if (*(char *)((int)puVar4 + 0x15) == '\0') {
        cVar1 = *(char *)((int)*puVar4 + 0x15);
        puVar3 = puVar4;
        puVar4 = (undefined4 *)*puVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar4 + 0x15);
          puVar3 = puVar4;
          puVar4 = (undefined4 *)*puVar4;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar3[1] + 0x15);
        puVar5 = (undefined4 *)puVar3[1];
        puVar4 = puVar3;
        while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == (undefined4 *)puVar3[2]))) {
          cVar1 = *(char *)((int)puVar3[1] + 0x15);
          puVar5 = (undefined4 *)puVar3[1];
          puVar4 = puVar3;
        }
      }
    }
  }
  uVar6 = F_00524690(this GEN_EDX_ARG);
  return uVar6;
}

/* ref: FUN_00507540 */
GEN_FRAME uint GEN_THISCALL F_00507540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x507540u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined * pvVar1;
  
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + ((*(*(uint * PTR32 *)&gen_args[1]) >> 0x10) + (*(*(uint * PTR32 *)&gen_args[1]) & 0xffff) * 0x14) * 4)));
  if (pvVar1 != (undefined *)0x0) {
    F_00524dd0(pvVar1 GEN_EDX_FWD,&(*(uint * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
    if ((*(uint * PTR32 *)((int)pvVar1 + 4) != (*(uint * PTR32 *)&gen_args[1])) &&
       (pvVar1 = ((undefined *)GEN_TOP((*(uint * PTR32 *)&gen_args[1])[4])), pvVar1 != (undefined *)0x0)) {
      F_00525140(pvVar1 GEN_EDX_ARG,&(*(uint * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]));
      if (*(uint * PTR32 *)((int)pvVar1 + 4) != (*(uint * PTR32 *)&gen_args[1])) {
        return (*(uint * PTR32 *)&gen_args[1])[4];
      }
    }
  }
  return 0;
}

/* ref: FUN_005075b0 */
GEN_FRAME byte GEN_THISCALL F_005075b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5075b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x70);
  while( true ) {
    if (piVar1 == *(int * PTR32 *)((int)this + 0x74)) {
      return 0;
    }
    if (*piVar1 == param_1) break;
    piVar1 = piVar1 + 1;
  }
  F_00c46e20(piVar1,piVar1 + 1,(*(int *)((int)this + 0x74) - (int)(piVar1 + 1) >> 2) * 4);
  *(int *)((int)this + 0x74) = *(int *)((int)this + 0x74) - 4;
  return 1;
}

/* ref: Client::System::Resource::Handle::GrassGridDataResourceHandle::vf33 */
GEN_FRAME uint GEN_THISCALL F_00507600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x507600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * pGVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint * puVar6;
  int * piVar7;
  uint uVar8;
  uint * puVar9;
  
  uVar5 = param_2;
  if (param_2 == 1) {
    pGVar1 = this + 0x88;
    iVar2 = _InterlockedExchangeAdd((volatile long *)(((int *)pGVar1)), 0);
    if (iVar2 != 3) {
      uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_FWD);
      F_00b4dc80(this + 0xa8 GEN_EDX_ARG,uVar5);
      bVar4 = F_00b4dd30(this + 0xa8 GEN_EDX_ARG);
      if (bVar4 != 0) {
        return 0xfffffff6;
      }
      uVar3 = *(uint *)(this + 0xb0);
      if (uVar3 != 0) {
        uVar8 = -(uint)((int)((ulonglong)uVar3 * 0xd0 >> 0x20) != 0) |
                (uint)((ulonglong)uVar3 * 0xd0);
        puVar6 = (uint *)F_00406bb0(-(uint)(0xfffffffb < uVar8) | uVar8 + 4,0,0);
        if (puVar6 == (uint *)0x0) {
          puVar6 = (uint *)0x0;
        }
        else {
          *puVar6 = uVar3;
          puVar6 = puVar6 + 1;
          puVar9 = puVar6;
          while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
            F_00401500(puVar9,8,2,((code *)REFP(0x500540)));
            F_00401500(puVar9 + 4,0xc,0x10,((code *)REFP(0x500560)));
            puVar9 = puVar9 + 0x34;
          }
        }
        *(uint * PTR32 *)(this + 0x3c0) = puVar6;
        F_00504b90(this GEN_EDX_ARG);
        F_00505b30(this GEN_EDX_ARG,uVar5);
      }
      piVar7 = *(int * PTR32 *)(this + 0x98);
      if (piVar7 != (int *)0x0) {
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7 GEN_EDX_ARG)));
        ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7 GEN_EDX_ARG,*(undefined4 *)(this + 0x98));
        *(undefined4 *)(this + 0x98) = 0;
      }
      uVar5 = 1;
    }
  }
  return uVar5;
}

/* ref: FUN_00507740 */
GEN_FRAME byte GEN_THISCALL F_00507740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x507740u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  int iVar2;
  
  F_00526ab0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(int *)&gen_args[1]),(*(int *)&gen_args[1]));
  iVar2 = (*(int *)&gen_args[1]);
  if ((*(int *)&gen_args[1]) != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) {
    piVar1 = *(int * PTR32 *)((*(int *)&gen_args[1]) + 0x10);
    *piVar1 = *piVar1 - 1;
    if (*piVar1 < 1) {
      if (*(int *)((*(int *)&gen_args[1]) + 0x10) != 0) {
        F_00406ad0(*(int *)((*(int *)&gen_args[1]) + 0x10));
        *(undefined4 *)(iVar2 + 0x10) = 0;
      }
      F_005242f0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(int *)&gen_args[1]),iVar2);
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_005077a0 */
GEN_NOFRAME uint GEN_THISCALL F_005077a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5077a0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[4] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_005077b0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_005077b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5077b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int * piVar3;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  for (piVar3 = *(int * PTR32 *)this; piVar3 != piVar1; piVar3 = piVar3 + 1) {
    if (*piVar3 != 0) {
      F_00406ad0(*piVar3);
      *piVar3 = 0;
    }
  }
  iVar2 = *(int *)this;
  if (iVar2 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar2,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar2;
  }
  return;
}

/* ref: FUN_00507810 */
GEN_FRAME uint GEN_THISCALL F_00507810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x507810u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  
  piVar1 = (int *)F_00526b50((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[1]));
  if (*piVar1 != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) {
    return *(uint *)(*piVar1 + 0x10);
  }
  return 0;
}

/* ref: FUN_00507840 */
GEN_FRAME uint GEN_THISCALL F_00507840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x507840u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  
  *(undefined4 *)this = 0;
  puVar1 = (undefined4 *)F_004296a0(8,0,0x12e);
  *(undefined4 * PTR32 *)this = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  **(undefined4 * PTR32 *)this = this;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  piVar2 = &REFG(undefined4, 0x1098040);
  uVar3 = 0;
  while ((*piVar2 != param_1 || (piVar2[1] != *param_2))) {
    uVar3 = uVar3 + 0xc;
    piVar2 = piVar2 + 3;
    if (0xb3 < uVar3) {
      *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
      return (uint)this;
    }
  }
  *(int *)((int)this + 0x1c) = piVar2[2];
  return (uint)this;
}

/* ref: FUN_005078d0 */
GEN_FRAME uint GEN_THISCALL F_005078d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5078d0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined * this_00;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (*(int *)&gen_args[1]) * 4)));
  if (this_00 != (undefined *)0x0) {
    F_00526bc0(this_00 GEN_EDX_FWD,&(*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
    if (*(int *)((int)this_00 + 4) != (*(int *)&gen_args[1])) {
      return *(uint *)((int)this_00 + 0x10);
    }
  }
  return 0;
}

/* ref: FUN_00507910 */
GEN_FRAME byte GEN_THISCALL F_00507910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x507910u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined * pvVar1;
  int iVar2;
  
  iVar2 = (*(int *)&gen_args[1]);
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) +
                     ((uint)*(ushort *)((*(int *)&gen_args[1]) + 6) + (uint)*(ushort *)((*(int *)&gen_args[1]) + 4) * 0x14) * 4)));
  if (pvVar1 != (undefined *)0x0) {
    F_00526d10(pvVar1 GEN_EDX_FWD,&(*(int *)&gen_args[1]),(*(int *)&gen_args[1]) + 8);
    if ((*(int *)((int)pvVar1 + 4) != (*(int *)&gen_args[1])) &&
       (pvVar1 = *(undefined * PTR32 *)((*(int *)&gen_args[1]) + 0x10), pvVar1 != (undefined *)0x0)) {
      F_00526d80(pvVar1 GEN_EDX_ARG,&(*(int *)&gen_args[1]),iVar2 + 0xc);
      if (*(int *)((int)pvVar1 + 4) != (*(int *)&gen_args[1])) {
        F_00524e80(pvVar1 GEN_EDX_ARG,&(*(int *)&gen_args[1]),(*(int *)&gen_args[1]));
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00507980 */
GEN_FRAME uint GEN_THISCALL F_00507980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x507980u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined * pvVar1;
  
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + ((*(*(uint * PTR32 *)&gen_args[1]) >> 0x10) + (*(*(uint * PTR32 *)&gen_args[1]) & 0xffff) * 0x14) * 4)));
  if (pvVar1 != (undefined *)0x0) {
    F_00526d10(pvVar1 GEN_EDX_FWD,&(*(uint * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
    if ((*(uint * PTR32 *)((int)pvVar1 + 4) != (*(uint * PTR32 *)&gen_args[1])) &&
       (pvVar1 = ((undefined *)GEN_TOP((*(uint * PTR32 *)&gen_args[1])[4])), pvVar1 != (undefined *)0x0)) {
      F_00526d80(pvVar1 GEN_EDX_ARG,&(*(uint * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]));
      if (*(uint * PTR32 *)((int)pvVar1 + 4) != (*(uint * PTR32 *)&gen_args[1])) {
        return (*(uint * PTR32 *)&gen_args[1])[4];
      }
    }
  }
  return 0;
}

/* ref: FUN_005079f0 */
GEN_FRAME unsigned int GEN_THISCALL F_005079f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5079f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int * piVar2;
  char cVar3;
  int * piVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  uint uVar8;
  undefined4 * puVar9;
  undefined4 * PTR32 * ppuVar10;
  code * pcVar11;
  int iVar12;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x1375aec) + 0x20));
  (*(int *)(gen_frame + 0x10)) = 0x14;
  do {
    (*(int * PTR32 *)(gen_frame + 0x18)) = this;
    (*(int *)(gen_frame + 0x14)) = 0x14;
    do {
      iVar12 = *(int *)this;
      (*(int * PTR32 *)(gen_frame + 0x18)) = this;
      if (iVar12 != 0) {
        puVar9 = *(undefined4 * PTR32 *)(iVar12 + 4);
        if (*(char *)((int)puVar9[1] + 0x15) == '\0') {
          puVar6 = (undefined4 *)puVar9[1];
          do {
            if ((uint)puVar6[3] < *param_1) {
              puVar7 = (undefined4 *)puVar6[2];
            }
            else {
              puVar7 = (undefined4 *)*puVar6;
              puVar9 = puVar6;
            }
            puVar6 = puVar7;
          } while (*(char *)((int)puVar7 + 0x15) == '\0');
        }
        puVar6 = *(undefined4 * PTR32 *)(iVar12 + 4);
        (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar9;
        if ((puVar9 == puVar6) || (*param_1 < (uint)puVar9[3])) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar6;
          ppuVar10 = &(*(undefined4 * PTR32 *)(gen_frame + 0x8));
        }
        else {
          ppuVar10 = &(*(undefined4 * PTR32 *)(gen_frame + 0xc));
        }
        if ((puVar6 != *ppuVar10) && (iVar12 = (*ppuVar10)[4], iVar12 != 0)) {
          puVar9 = *(undefined4 * PTR32 *)(iVar12 + 4);
          puVar6 = (undefined4 *)*puVar9;
          while (puVar6 != puVar9) {
            piVar4 = (int *)puVar6[4];
            uVar8 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 4))(piVar4 GEN_EDX_ARG);
            if ((char)uVar8 == '\0') {
              if (param_3 == 0) {
                pcVar11 = *(gen_code32 *)(*piVar4 + 0x24);
                iVar12 = 0;
LAB_00507b17: ;
                (*pcVar11)(piVar4,param_2,iVar12);
              }
              else {
                piVar1 = piVar4 + 0x20;
                do {
                  iVar12 = _InterlockedExchange((volatile long *)(piVar1), (long)(1));
                } while (iVar12 != 0);
                _InterlockedExchange((volatile long *)(piVar1), (long)(0));
                if ((piVar4[0xc] & 0xc000000U) == 0) {
                  piVar1 = piVar4 + 0x22;
                  iVar12 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
                  if (iVar12 == 2) {
                    piVar2 = piVar4 + 0x23;
                    iVar12 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
                    if (iVar12 == 7) {
                      iVar12 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
                      if (iVar12 != 3) {
                        pcVar11 = *(gen_code32 *)(*piVar4 + 0x24);
                        iVar12 = param_3;
                        goto LAB_00507b17;
                      }
                    }
                  }
                }
              }
            }
            if (*(char *)((int)puVar6 + 0x15) == '\0') {
              puVar7 = (undefined4 *)puVar6[2];
              if (*(char *)((int)puVar7 + 0x15) == '\0') {
                cVar3 = *(char *)((int)*puVar7 + 0x15);
                puVar6 = puVar7;
                puVar7 = (undefined4 *)*puVar7;
                while (cVar3 == '\0') {
                  cVar3 = *(char *)((int)*puVar7 + 0x15);
                  puVar6 = puVar7;
                  puVar7 = (undefined4 *)*puVar7;
                }
              }
              else {
                cVar3 = *(char *)((int)puVar6[1] + 0x15);
                puVar5 = (undefined4 *)puVar6[1];
                puVar7 = puVar6;
                while ((puVar6 = puVar5, cVar3 == '\0' && (puVar7 == (undefined4 *)puVar6[2]))) {
                  cVar3 = *(char *)((int)puVar6[1] + 0x15);
                  puVar5 = (undefined4 *)puVar6[1];
                  puVar7 = puVar6;
                }
              }
            }
          }
        }
      }
      this = (*(int * PTR32 *)(gen_frame + 0x18)) + 1;
      iVar12 = (*(int *)(gen_frame + 0x14)) - 1;
      (*(int *)(gen_frame + 0x14)) = iVar12;
      (*(int * PTR32 *)(gen_frame + 0x18)) = this;
    } while (iVar12 != 0);
    iVar12 = (*(int *)(gen_frame + 0x10)) - 1;
    (*(int *)(gen_frame + 0x10)) = iVar12;
    if (iVar12 == 0) {
      return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x1375aec) + 0x20)));
    }
  } while( true );
}

/* ref: FUN_00507ba0 */
GEN_FRAME unsigned int GEN_THISCALL F_00507ba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x507ba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int * piVar2;
  char cVar3;
  int * piVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  uint uVar8;
  undefined4 * puVar9;
  undefined4 * PTR32 * ppuVar10;
  code * pcVar11;
  int * piVar12;
  int iVar13;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x1375aec) + 0x20));
  piVar12 = (int *)(param_1 * 0x50 + (int)this);
  (*(int *)(gen_frame + 0x8)) = 0x14;
  do {
    iVar13 = *piVar12;
    if (iVar13 != 0) {
      puVar9 = *(undefined4 * PTR32 *)(iVar13 + 4);
      if (*(char *)((int)puVar9[1] + 0x15) == '\0') {
        puVar6 = (undefined4 *)puVar9[1];
        do {
          if ((uint)puVar6[3] < *param_2) {
            puVar7 = (undefined4 *)puVar6[2];
          }
          else {
            puVar7 = (undefined4 *)*puVar6;
            puVar9 = puVar6;
          }
          puVar6 = puVar7;
        } while (*(char *)((int)puVar7 + 0x15) == '\0');
      }
      puVar6 = *(undefined4 * PTR32 *)(iVar13 + 4);
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar9;
      if ((puVar9 == puVar6) || (*param_2 < (uint)puVar9[3])) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar6;
        ppuVar10 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
      }
      else {
        ppuVar10 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
      }
      if ((puVar6 != *ppuVar10) && (iVar13 = (*ppuVar10)[4], iVar13 != 0)) {
        puVar9 = *(undefined4 * PTR32 *)(iVar13 + 4);
        puVar6 = (undefined4 *)*puVar9;
        while (puVar6 != puVar9) {
          piVar4 = (int *)puVar6[4];
          uVar8 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 4))(piVar4 GEN_EDX_ARG);
          if ((char)uVar8 == '\0') {
            if (param_4 == 0) {
              pcVar11 = *(gen_code32 *)(*piVar4 + 0x24);
              iVar13 = 0;
LAB_00507cc7: ;
              (*pcVar11)(piVar4,param_3,iVar13);
            }
            else {
              piVar1 = piVar4 + 0x20;
              do {
                iVar13 = _InterlockedExchange((volatile long *)(piVar1), (long)(1));
              } while (iVar13 != 0);
              _InterlockedExchange((volatile long *)(piVar1), (long)(0));
              if ((piVar4[0xc] & 0xc000000U) == 0) {
                piVar1 = piVar4 + 0x22;
                iVar13 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
                if (iVar13 == 2) {
                  piVar2 = piVar4 + 0x23;
                  iVar13 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
                  if (iVar13 == 7) {
                    iVar13 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
                    if (iVar13 != 3) {
                      pcVar11 = *(gen_code32 *)(*piVar4 + 0x24);
                      iVar13 = param_4;
                      goto LAB_00507cc7;
                    }
                  }
                }
              }
            }
          }
          if (*(char *)((int)puVar6 + 0x15) == '\0') {
            puVar7 = (undefined4 *)puVar6[2];
            if (*(char *)((int)puVar7 + 0x15) == '\0') {
              cVar3 = *(char *)((int)*puVar7 + 0x15);
              puVar6 = puVar7;
              puVar7 = (undefined4 *)*puVar7;
              while (cVar3 == '\0') {
                cVar3 = *(char *)((int)*puVar7 + 0x15);
                puVar6 = puVar7;
                puVar7 = (undefined4 *)*puVar7;
              }
            }
            else {
              cVar3 = *(char *)((int)puVar6[1] + 0x15);
              puVar5 = (undefined4 *)puVar6[1];
              puVar7 = puVar6;
              while ((puVar6 = puVar5, cVar3 == '\0' && (puVar7 == (undefined4 *)puVar6[2]))) {
                cVar3 = *(char *)((int)puVar6[1] + 0x15);
                puVar5 = (undefined4 *)puVar6[1];
                puVar7 = puVar6;
              }
            }
          }
        }
      }
    }
    piVar12 = piVar12 + 1;
    iVar13 = (*(int *)(gen_frame + 0x8)) - 1;
    (*(int *)(gen_frame + 0x8)) = iVar13;
    if (iVar13 == 0) {
      return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x1375aec) + 0x20)));
    }
  } while( true );
}

/* ref: FUN_00507d50 */
GEN_FRAME uint GEN_THISCALL F_00507d50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x507d50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)F_004296a0(0x14,0,0x12e);
  *puVar1 = *(undefined4 *)((int)this + 0x14);
  puVar1[1] = *(undefined4 *)((int)this + 0x14);
  puVar1[2] = *(undefined4 *)((int)this + 0x14);
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = param_1;
  }
  uVar2 = F_00526110((undefined *)((int)this + 0x10) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),puVar1,0);
  return uVar2;
}

/* ref: FUN_00507db0 */
GEN_FRAME uint GEN_THISCALL F_00507db0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x507db0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  int * PTR32 * ppiVar8;
  
  F_00524ca0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) GEN_EDX_FWD,&(*(int * PTR32 *)(gen_frame + 0x8)),&(*(int * PTR32 *)&gen_args[1]));
  piVar6 = (*(int * PTR32 *)(gen_frame + 0x8));
  if (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) != (*(int * PTR32 *)(gen_frame + 0x8))) {
    piVar6 = (int *)F_00524a40(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x8)),(*(int * PTR32 *)(gen_frame + 0x8)));
  }
  uVar5 = (uint)(*(int * PTR32 *)&gen_args[1]);
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  piVar3 = (int *)*piVar2;
  while (piVar3 != piVar2) {
    piVar6 = ((int *)GEN_TOP(((int *)piVar3[5])[1]));
    cVar1 = *(char *)((int)piVar6 + 0x15);
    piVar4 = (int *)piVar3[5];
    while (cVar1 == '\0') {
      if ((uint)piVar6[3] < uVar5) {
        piVar7 = (int *)piVar6[2];
        piVar6 = piVar4;
      }
      else {
        piVar7 = (int *)*piVar6;
      }
      piVar4 = piVar6;
      piVar6 = piVar7;
      cVar1 = *(char *)((int)piVar7 + 0x15);
    }
    piVar6 = (int *)piVar3[5];
    (*(int * PTR32 *)&gen_args[1]) = piVar4;
    if ((piVar4 == piVar6) || (uVar5 < (uint)piVar4[3])) {
      (*(int * PTR32 *)(gen_frame + 0x8)) = piVar6;
      ppiVar8 = &(*(int * PTR32 *)(gen_frame + 0x8));
    }
    else {
      ppiVar8 = &(*(int * PTR32 *)&gen_args[1]);
    }
    if (piVar6 != *ppiVar8) {
      piVar6 = (int *)F_005247b0(piVar3 + 4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),*ppiVar8);
    }
    if (*(char *)((int)piVar3 + 0x21) == '\0') {
      piVar6 = (int *)piVar3[2];
      if (*(char *)((int)piVar6 + 0x21) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x21);
        piVar3 = piVar6;
        piVar6 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar6 + 0x21);
          piVar3 = piVar6;
          piVar6 = (int *)*piVar6;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x21);
        piVar6 = (int *)piVar3[1];
        piVar4 = piVar3;
        while ((piVar3 = piVar6, piVar6 = piVar3, cVar1 == '\0' && (piVar4 == (int *)piVar3[2]))) {
          cVar1 = *(char *)(piVar3[1] + 0x21);
          piVar6 = (int *)piVar3[1];
          piVar4 = piVar3;
        }
      }
    }
  }
  return (uint)piVar6;
}

/* ref: FUN_00507ea0 */
GEN_FRAME unsigned int GEN_THISCALL F_00507ea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x507ea0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int * piVar5;
  undefined4 * puVar6;
  undefined4 * PTR32 * ppuVar7;
  undefined4 * puVar8;
  
  piVar5 = (int *)F_00526ca0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)&gen_args[1]));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) != *piVar5) {
    puVar2 = *(undefined4 * PTR32 *)(*piVar5 + 0x14);
    puVar3 = (undefined4 *)*puVar2;
    while (puVar3 != puVar2) {
      puVar8 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))))[1]));
      piVar5 = (int *)puVar3[3];
      cVar1 = *(char *)((int)puVar8 + 0x11);
      puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14)));
      while (cVar1 == '\0') {
        if ((int *)puVar8[3] < piVar5) {
          puVar6 = (undefined4 *)puVar8[2];
          puVar8 = puVar4;
        }
        else {
          puVar6 = (undefined4 *)*puVar8;
        }
        puVar4 = puVar8;
        puVar8 = puVar6;
        cVar1 = *(char *)((int)puVar6 + 0x11);
      }
      puVar8 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar4;
      if ((puVar4 == puVar8) || (piVar5 < (int *)puVar4[3])) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar8;
        ppuVar7 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
      }
      else {
        ppuVar7 = &(*(undefined4 * PTR32 *)(gen_frame + 0x8));
      }
      if (*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) != *ppuVar7) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 4))(piVar5 GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
      }
      if (*(char *)((int)puVar3 + 0x15) == '\0') {
        puVar8 = (undefined4 *)puVar3[2];
        if (*(char *)((int)puVar8 + 0x15) == '\0') {
          cVar1 = *(char *)((int)*puVar8 + 0x15);
          puVar3 = puVar8;
          puVar8 = (undefined4 *)*puVar8;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*puVar8 + 0x15);
            puVar3 = puVar8;
            puVar8 = (undefined4 *)*puVar8;
          }
        }
        else {
          cVar1 = *(char *)((int)puVar3[1] + 0x15);
          puVar4 = (undefined4 *)puVar3[1];
          puVar8 = puVar3;
          while ((puVar3 = puVar4, cVar1 == '\0' && (puVar8 == (undefined4 *)puVar3[2]))) {
            cVar1 = *(char *)((int)puVar3[1] + 0x15);
            puVar4 = (undefined4 *)puVar3[1];
            puVar8 = puVar3;
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00507f80 */
GEN_FRAME unsigned int GEN_THISCALL F_00507f80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x507f80u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int * piVar5;
  undefined4 * puVar6;
  undefined4 * PTR32 * ppuVar7;
  undefined4 * puVar8;
  
  piVar5 = (int *)F_00526ca0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)&gen_args[1]));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) != *piVar5) {
    puVar2 = *(undefined4 * PTR32 *)(*piVar5 + 0x14);
    puVar3 = (undefined4 *)*puVar2;
    while (puVar3 != puVar2) {
      puVar8 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))))[1]));
      piVar5 = (int *)puVar3[3];
      cVar1 = *(char *)((int)puVar8 + 0x11);
      puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14)));
      while (cVar1 == '\0') {
        if ((int *)puVar8[3] < piVar5) {
          puVar6 = (undefined4 *)puVar8[2];
          puVar8 = puVar4;
        }
        else {
          puVar6 = (undefined4 *)*puVar8;
        }
        puVar4 = puVar8;
        puVar8 = puVar6;
        cVar1 = *(char *)((int)puVar6 + 0x11);
      }
      puVar8 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar4;
      if ((puVar4 == puVar8) || (piVar5 < (int *)puVar4[3])) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar8;
        ppuVar7 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
      }
      else {
        ppuVar7 = &(*(undefined4 * PTR32 *)(gen_frame + 0x8));
      }
      if (*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) != *ppuVar7) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 8))(piVar5 GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
      }
      if (*(char *)((int)puVar3 + 0x15) == '\0') {
        puVar8 = (undefined4 *)puVar3[2];
        if (*(char *)((int)puVar8 + 0x15) == '\0') {
          cVar1 = *(char *)((int)*puVar8 + 0x15);
          puVar3 = puVar8;
          puVar8 = (undefined4 *)*puVar8;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*puVar8 + 0x15);
            puVar3 = puVar8;
            puVar8 = (undefined4 *)*puVar8;
          }
        }
        else {
          cVar1 = *(char *)((int)puVar3[1] + 0x15);
          puVar4 = (undefined4 *)puVar3[1];
          puVar8 = puVar3;
          while ((puVar3 = puVar4, cVar1 == '\0' && (puVar8 == (undefined4 *)puVar3[2]))) {
            cVar1 = *(char *)((int)puVar3[1] + 0x15);
            puVar4 = (undefined4 *)puVar3[1];
            puVar8 = puVar3;
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00508060 */
GEN_FRAME uint GEN_THISCALL F_00508060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x508060u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00526ca0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(int * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)&gen_args[1]));
  piVar6 = (*(int * PTR32 *)(gen_frame + 0x4));
  if (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) != (*(int * PTR32 *)(gen_frame + 0x4))) {
    piVar2 = (int *)(*(int * PTR32 *)(gen_frame + 0x4))[5];
    piVar3 = (int *)*piVar2;
    piVar6 = (*(int * PTR32 *)(gen_frame + 0x4));
    while (piVar3 != piVar2) {
      iVar4 = piVar3[4];
      piVar5 = (int *)piVar3[3];
      (*(int * PTR32 *)(gen_frame + 0x4)) = piVar5;
      if (iVar4 != 0) {
        piVar6 = (int *)F_00524ca0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)),&(*(int * PTR32 *)(gen_frame + 0x4)));
        if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x14) != (*(int *)(gen_frame + 0x0))) {
          while (0 < iVar4) {
            piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5 GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]))));
            piVar3[4] = piVar3[4] - 1;
            iVar4 = piVar3[4];
          }
        }
        piVar3[4] = 0;
      }
      if (*(char *)((int)piVar3 + 0x15) == '\0') {
        piVar6 = (int *)piVar3[2];
        if (*(char *)((int)piVar6 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar6 + 0x15);
          piVar3 = piVar6;
          piVar6 = (int *)*piVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar6 + 0x15);
            piVar3 = piVar6;
            piVar6 = (int *)*piVar6;
          }
        }
        else {
          cVar1 = *(char *)(piVar3[1] + 0x15);
          piVar6 = (int *)piVar3[1];
          piVar5 = piVar3;
          while ((piVar3 = piVar6, piVar6 = piVar3, cVar1 == '\0' && (piVar5 == (int *)piVar3[2])))
          {
            cVar1 = *(char *)(piVar3[1] + 0x15);
            piVar6 = (int *)piVar3[1];
            piVar5 = piVar3;
          }
        }
      }
    }
  }
  return (uint)piVar6;
}

/* ref: FUN_00508150 */
GEN_FRAME unsigned int GEN_THISCALL F_00508150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x508150u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int * piVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * PTR32 * ppuVar7;
  undefined4 * puVar8;
  
  F_00526ca0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if (*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) != (*(undefined4 * PTR32 *)(gen_frame + 0x8))) {
    puVar2 = (undefined4 *)(*(undefined4 * PTR32 *)(gen_frame + 0x8))[5];
    puVar3 = (undefined4 *)*puVar2;
    while (puVar3 != puVar2) {
      puVar8 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))))[1]));
      piVar4 = (int *)puVar3[3];
      cVar1 = *(char *)((int)puVar8 + 0x11);
      puVar5 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14)));
      while (cVar1 == '\0') {
        if ((int *)puVar8[3] < piVar4) {
          puVar6 = (undefined4 *)puVar8[2];
          puVar8 = puVar5;
        }
        else {
          puVar6 = (undefined4 *)*puVar8;
        }
        puVar5 = puVar8;
        puVar8 = puVar6;
        cVar1 = *(char *)((int)puVar6 + 0x11);
      }
      puVar8 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar5;
      if ((puVar5 == puVar8) || (piVar4 < (int *)puVar5[3])) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar8;
        ppuVar7 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
      }
      else {
        ppuVar7 = &(*(undefined4 * PTR32 *)(gen_frame + 0x8));
      }
      if (*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) != *ppuVar7) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4 GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
      }
      if (*(char *)((int)puVar3 + 0x15) == '\0') {
        puVar8 = (undefined4 *)puVar3[2];
        if (*(char *)((int)puVar8 + 0x15) == '\0') {
          cVar1 = *(char *)((int)*puVar8 + 0x15);
          puVar3 = puVar8;
          puVar8 = (undefined4 *)*puVar8;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*puVar8 + 0x15);
            puVar3 = puVar8;
            puVar8 = (undefined4 *)*puVar8;
          }
        }
        else {
          cVar1 = *(char *)((int)puVar3[1] + 0x15);
          puVar5 = (undefined4 *)puVar3[1];
          puVar8 = puVar3;
          while ((puVar3 = puVar5, cVar1 == '\0' && (puVar8 == (undefined4 *)puVar3[2]))) {
            cVar1 = *(char *)((int)puVar3[1] + 0x15);
            puVar5 = (undefined4 *)puVar3[1];
            puVar8 = puVar3;
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00508230 */
GEN_NOFRAME uint GEN_THISCALL F_00508230(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x508230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  ulonglong uVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x1099854));
  piVar2 = (int *)((int)this + 0x80);
  do {
    iVar1 = _InterlockedExchange((volatile long *)(piVar2), (long)(1));
  } while (iVar1 != 0);
  if ((*(uint *)((int)this + 0x30) & 0xc000000) != 0) {
    F_004fad40((undefined *)((int)this + 0x30) GEN_EDX_FWD);
  }
  _InterlockedExchange((volatile long *)(piVar2), (long)(0));
  piVar2 = *(int * PTR32 *)((int)this + 0x38);
  if (piVar2 != (int *)0x0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x38));
    *(undefined4 *)((int)this + 0x38) = 0;
  }
  iVar1 = *(int *)((int)this + 0x70);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x78) - iVar1 >> 2) * 4,0x12e);
  }
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  uVar3 = *(uint *)((int)this + 0x50);
  if (0xf < uVar3) {
    uVar4 = F_00429760(*(undefined4 *)((int)this + 0x3c),uVar3 + 1,0x32);
    uVar3 = (uint)uVar4;
  }
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0xf;
  *(undefined1 *)((int)this + 0x3c) = 0;
  return uVar3;
}

/* ref: FUN_005082e0 */
GEN_NOFRAME uint GEN_THISCALL F_005082e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5082e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00508330 */
GEN_NOFRAME uint GEN_THISCALL F_00508330(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x508330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00508390 */
GEN_NOFRAME uint GEN_THISCALL F_00508390(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x508390u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_005083d0 */
GEN_NOFRAME uint GEN_THISCALL F_005083d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5083d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x1099bec));
  F_00b4d860((undefined *)((int)this + 0xa0) GEN_EDX_FWD);
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00508420 */
GEN_FRAME uint GEN_THISCALL F_00508420(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x508420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  undefined4 * puVar4;
  int local_8;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x1099cdc));
  if (*(undefined * PTR32 *)((int)this + 0x3c0) != (undefined *)0x0) {
    F_00520630(*(undefined * PTR32 *)((int)this + 0x3c0) GEN_EDX_FWD,3);
    *(undefined4 *)((int)this + 0x3c0) = 0;
  }
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  local_8 = 0xf;
  piVar1 = (int *)((int)this + 0x3c8);
  do {
    piVar3 = piVar1 - 3;
    piVar1[-5] = 0;
    if (piVar1[-4] != 0) {
      F_00406b30(piVar1[-4]);
      piVar1[-4] = 0;
    }
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
      *piVar3 = 0;
    }
    local_8 = local_8 - 1;
    piVar1 = piVar3;
  } while (-1 < local_8);
  local_8 = 1;
  puVar4 = (undefined4 *)((int)this + 0x300);
  do {
    piVar1 = (int *)puVar4[-1];
    puVar4[-2] = 0;
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
      puVar4[-1] = 0;
    }
    local_8 = local_8 - 1;
    puVar4 = puVar4 - 2;
  } while (-1 < local_8);
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00508500 */
GEN_NOFRAME uint GEN_THISCALL F_00508500(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x508500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00508540 */
GEN_NOFRAME uint GEN_THISCALL F_00508540(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x508540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00508580 */
GEN_NOFRAME uint GEN_THISCALL F_00508580(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x508580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_005085c0 */
GEN_NOFRAME uint GEN_THISCALL F_005085c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5085c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00508600 */
GEN_NOFRAME uint GEN_THISCALL F_00508600(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x508600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00508640 */
GEN_NOFRAME uint GEN_THISCALL F_00508640(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x508640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00508680 */
GEN_NOFRAME uint GEN_THISCALL F_00508680(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x508680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_005086c0 */
GEN_NOFRAME uint GEN_THISCALL F_005086c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5086c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00508700 */
GEN_NOFRAME uint GEN_THISCALL F_00508700(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x508700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00508740 */
GEN_NOFRAME uint GEN_THISCALL F_00508740(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x508740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00508780 */
GEN_NOFRAME uint GEN_THISCALL F_00508780(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x508780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_005087c0 */
GEN_NOFRAME uint GEN_THISCALL F_005087c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5087c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::System::Resource::Handle::PartialAnimationPackResourceHandle::vf33 */
GEN_FRAME uint GEN_THISCALL F_00508800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x508800u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined * pPVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  LPVOID pvVar6;
  undefined4 * puVar7;
  undefined * pvVar8;
  uint uVar9;
  int * piVar10;
  int iVar11;
  undefined4 uVar12;
  
  uVar4 = param_2;
  if (param_2 == 1) {
    pPVar1 = this + 0x88;
    iVar2 = _InterlockedExchangeAdd((volatile long *)(((int *)pPVar1)), 0);
    if (iVar2 != 3) {
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_FWD);
      (*(int *)(gen_frame + 0x30)) = *(int *)(this + 0x1c);
      uVar5 = F_00b4d3c0(this + 0xb8 GEN_EDX_ARG,uVar4);
      if (*(ushort *)(this + 0xc0) != 0) {
        F_00b508e0(this + 0xd4 GEN_EDX_ARG,uVar5 + uVar4,(uint)*(ushort *)(this + 0xc0));
        F_00d93630(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,*(int *)(this + 0xcc) + uVar4,
                     *(int *)(this + 0xd0) - *(int *)(this + 0xcc),2);
        pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        puVar7 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar6 + 0x2c) + 4))))
                           (*(int * PTR32 *)((int)pvVar6 + 0x2c) GEN_EDX_ARG,0x14)));
        puVar7[1] = 0x10014;
        *puVar7 = (*(undefined * PTR32 (*)[11])REFP(0x1099dcc));
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7[4] = 0x80000000;
        *(undefined4 * PTR32 *)(this + 0xb4) = puVar7;
        F_00d91340(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_ARG);
        F_00deb100(((undefined1 *)(gen_frame + 0x4)),((int *)(gen_frame + 0x20)));
        F_00d934b0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,0,2);
        uVar5 = F_00d93510(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
        F_00d934b0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,0,0);
        if (((int *)(gen_frame + 0x20))[0] != 4) {
          F_00d91510(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_ARG);
          F_00d936b0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
          return 1;
        }
        pvVar8 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xb4) + 0x24))))
                                   (*(int * PTR32 *)(this + 0xb4) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)))));
        uVar12 = 0;
        (*(undefined * PTR32 *)(gen_frame + 0x34)) = pvVar8;
        uVar9 = F_00d92610(&REFG(undefined, 0x15d93b4) GEN_EDX_ARG);
        uVar9 = F_00dea020((*(undefined * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG,uVar9,uVar12);
        *(uint *)(this + 0xb0) = uVar9;
        F_00d91510(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_ARG);
        F_00d936b0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
        if ((*(int *)(this + 0xbc) == 0x10001) || (*(int *)(this + 0xbc) == 0x20001)) {
          iVar2 = *(int *)(this + 0xd0);
          (*(uint *)(gen_frame + 0x38)) = (uint)*(ushort *)(this + 0xc0);
          uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                            (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) GEN_EDX_ARG,(uint)*(ushort *)(this + 0xc0) * 4,0x10)
          ;
          iVar11 = (*(int *)(gen_frame + 0x30)) - *(int *)(this + 0xd0);
          *(uint *)(this + 0xe8) = uVar9;
          (*(undefined * PTR32 *)(gen_frame + 0x34)) = (undefined *)0x0;
          uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                            (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) GEN_EDX_ARG,iVar11,0x10);
          iVar3 = (*(uint *)(gen_frame + 0x38)) * 4;
          *(uint *)(this + 0xe4) = uVar9;
          F_00c46aa0(uVar9,iVar2 + uVar4,iVar11);
          uVar4 = 0;
          if ((*(uint *)(gen_frame + 0x38)) != 0) {
            do {
              iVar2 = *(int *)(this + 0xe4);
              *((int *)GEN_TOP((*(int *)(this + 0xe8) + uVar4 * 4))) = iVar2 + (int)(*(undefined * PTR32 *)(gen_frame + 0x34));
              uVar4 = uVar4 + 1;
              (*(undefined * PTR32 *)(gen_frame + 0x34)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) +
                                (*(int *)(iVar2 + (int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 4) + 3U & 0xfffffffc))));
            } while (uVar4 < (*(uint *)(gen_frame + 0x38)));
          }
          piVar10 = *(int * PTR32 *)(this + 0x98);
          if (piVar10 != (int *)0x0) {
            piVar10 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar10 + 0xc))(piVar10 GEN_EDX_ARG)));
            ((GEN_TCODE *)*(gen_code32 *)(*piVar10 + 0xc))(piVar10 GEN_EDX_ARG,*(undefined4 *)(this + 0x98));
            *(undefined4 *)(this + 0x98) = 0;
          }
          *(uint *)(this + 0x9c) = uVar5 + iVar3 + iVar11;
        }
      }
      uVar4 = 1;
    }
  }
  return uVar4;
}

/* ref: FUN_00508a60 */
GEN_FRAME byte GEN_THISCALL F_00508a60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x508a60u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  F_005269c0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa0))) GEN_EDX_FWD,&(*(int *)&gen_args[2]),(*(int *)&gen_args[2]));
  if ((*(int *)&gen_args[2]) != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa4)))) {
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *(undefined4 *)((*(int *)&gen_args[2]) + 0x14);
    (*(undefined4 * PTR32 *)&gen_args[1])[1] = *(undefined4 *)((*(int *)&gen_args[2]) + 0x18);
    (*(undefined4 * PTR32 *)&gen_args[1])[2] = *(undefined4 *)((*(int *)&gen_args[2]) + 0x1c);
    (*(undefined4 * PTR32 *)&gen_args[1])[3] = *(undefined4 *)((*(int *)&gen_args[2]) + 0x20);
    (*(undefined4 * PTR32 *)&gen_args[1])[4] = *(undefined4 *)((*(int *)&gen_args[2]) + 0x24);
    (*(undefined4 * PTR32 *)&gen_args[1])[5] = *(undefined4 *)((*(int *)&gen_args[2]) + 0x28);
    return 1;
  }
  return 0;
}

/* ref: FUN_00508ac0 */
GEN_NOFRAME uint GEN_THISCALL F_00508ac0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x508ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x1099dfc));
  if (0xf < *(uint *)((int)this + 0xd8)) {
    F_00429760(*(undefined4 *)((int)this + 0xc4),*(uint *)((int)this + 0xd8) + 1,0x32);
  }
  *(undefined4 *)((int)this + 0xd8) = 0xf;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined1 *)((int)this + 0xc4) = 0;
  if (0xf < *(uint *)((int)this + 0xbc)) {
    F_00429760(*(undefined4 *)((int)this + 0xa8),*(uint *)((int)this + 0xbc) + 1,0x32);
  }
  *(undefined4 *)((int)this + 0xbc) = 0xf;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined1 *)((int)this + 0xa8) = 0;
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00508b70 */
GEN_NOFRAME uint GEN_THISCALL F_00508b70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x508b70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x1099eb4));
  if (0xf < *(uint *)((int)this + 0x1cc)) {
    F_00429760(*(undefined4 *)((int)this + 0x1b8),*(uint *)((int)this + 0x1cc) + 1,0x32);
  }
  *(undefined4 *)((int)this + 0x1cc) = 0xf;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined1 *)((int)this + 0x1b8) = 0;
  if (0xf < *(uint *)((int)this + 0x1b0)) {
    F_00429760(*(undefined4 *)((int)this + 0x19c),*(uint *)((int)this + 0x1b0) + 1,0x32);
  }
  *(undefined4 *)((int)this + 0x1b0) = 0xf;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined1 *)((int)this + 0x19c) = 0;
  if (0xf < *(uint *)((int)this + 0x194)) {
    F_00429760(*(undefined4 *)((int)this + 0x180),*(uint *)((int)this + 0x194) + 1,0x32);
  }
  *(undefined4 *)((int)this + 0x194) = 0xf;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined1 *)((int)this + 0x180) = 0;
  if (0xf < *(uint *)((int)this + 0x178)) {
    F_00429760(*(undefined4 *)((int)this + 0x164),*(uint *)((int)this + 0x178) + 1,0x32);
  }
  *(undefined4 *)((int)this + 0x178) = 0xf;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined1 *)((int)this + 0x164) = 0;
  if (0xf < *(uint *)((int)this + 0x15c)) {
    F_00429760(*(undefined4 *)((int)this + 0x148),*(uint *)((int)this + 0x15c) + 1,0x32);
  }
  *(undefined4 *)((int)this + 0x15c) = 0xf;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined1 *)((int)this + 0x148) = 0;
  if (0xf < *(uint *)((int)this + 0x140)) {
    F_00429760(*(undefined4 *)((int)this + 300),*(uint *)((int)this + 0x140) + 1,0x32);
  }
  *(undefined4 *)((int)this + 0x140) = 0xf;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined1 *)((int)this + 300) = 0;
  if (0xf < *(uint *)((int)this + 0x124)) {
    F_00429760(*(undefined4 *)((int)this + 0x110),*(uint *)((int)this + 0x124) + 1,0x32);
  }
  *(undefined4 *)((int)this + 0x124) = 0xf;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined1 *)((int)this + 0x110) = 0;
  if (0xf < *(uint *)((int)this + 0x108)) {
    F_00429760(*(undefined4 *)((int)this + 0xf4),*(uint *)((int)this + 0x108) + 1,0x32);
  }
  *(undefined4 *)((int)this + 0x108) = 0xf;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined1 *)((int)this + 0xf4) = 0;
  if (0xf < *(uint *)((int)this + 0xec)) {
    F_00429760(*(undefined4 *)((int)this + 0xd8),*(uint *)((int)this + 0xec) + 1,0x32);
  }
  *(undefined4 *)((int)this + 0xec) = 0xf;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined1 *)((int)this + 0xd8) = 0;
  if (0xf < *(uint *)((int)this + 0xd0)) {
    F_00429760(*(undefined4 *)((int)this + 0xbc),*(uint *)((int)this + 0xd0) + 1,0x32);
  }
  *(undefined4 *)((int)this + 0xd0) = 0xf;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined1 *)((int)this + 0xbc) = 0;
  if (0xf < *(uint *)((int)this + 0xb4)) {
    F_00429760(*(undefined4 *)((int)this + 0xa0),*(uint *)((int)this + 0xb4) + 1,0x32);
  }
  *(undefined4 *)((int)this + 0xb4) = 0xf;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined1 *)((int)this + 0xa0) = 0;
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00508dd0 */
GEN_NOFRAME uint GEN_THISCALL F_00508dd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x508dd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00508e10 */
GEN_NOFRAME uint GEN_THISCALL F_00508e10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x508e10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x1099f6c));
  F_00b50640((undefined *)((int)this + 0xa0) GEN_EDX_FWD);
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00508e60 */
GEN_NOFRAME uint GEN_THISCALL F_00508e60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x508e60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00508ea0 */
GEN_NOFRAME uint GEN_THISCALL F_00508ea0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x508ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00508ef0 */
GEN_NOFRAME uint GEN_THISCALL F_00508ef0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x508ef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00508f30 */
GEN_NOFRAME uint GEN_THISCALL F_00508f30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x508f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00508f70 */
GEN_NOFRAME uint GEN_THISCALL F_00508f70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x508f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00508fb0 */
GEN_NOFRAME uint GEN_THISCALL F_00508fb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x508fb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00508ff0 */
GEN_NOFRAME uint GEN_THISCALL F_00508ff0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x508ff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00509030 */
GEN_NOFRAME uint GEN_THISCALL F_00509030(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x509030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00509070 */
GEN_NOFRAME uint GEN_THISCALL F_00509070(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x509070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_005090b0 */
GEN_NOFRAME uint GEN_THISCALL F_005090b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5090b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_005090f0 */
GEN_NOFRAME uint GEN_THISCALL F_005090f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5090f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00509130 */
GEN_NOFRAME uint GEN_THISCALL F_00509130(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x509130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00509170 */
GEN_NOFRAME uint GEN_THISCALL F_00509170(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x509170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_005091b0 */
GEN_NOFRAME uint GEN_THISCALL F_005091b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5091b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_005091f0 */
GEN_NOFRAME uint GEN_THISCALL F_005091f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5091f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00509230 */
GEN_NOFRAME uint GEN_THISCALL F_00509230(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x509230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00509270 */
GEN_NOFRAME uint GEN_THISCALL F_00509270(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x509270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_005092b0 */
GEN_NOFRAME uint GEN_THISCALL F_005092b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5092b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_005092f0 */
GEN_NOFRAME uint GEN_THISCALL F_005092f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5092f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_00508230(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00509330 */
GEN_FRAME uint GEN_THISCALL F_00509330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x509330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  char * pcVar2;
  uint uVar3;
  int * piVar4;
  undefined4 * puVar5;
  int iVar6;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  F_0040b1a0(&(*(int *)(gen_frame + 0x10)) GEN_EDX_FWD,param_1,(int)pcVar2 - (int)(param_1 + 1));
  uVar3 = F_00408810(&(*(int *)(gen_frame + 0x10)) GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0xc)) = uVar3;
  F_004087f0(&(*(int *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_00526ab0(this GEN_EDX_ARG,&(*(int *)(gen_frame + 0x14)),&(*(uint *)(gen_frame + 0xc)));
  if ((*(int *)(gen_frame + 0x14)) == *(int *)((int)this + 4)) {
    piVar4 = (int *)F_00406b90(0x108,0,0);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      *piVar4 = 0;
      F_00c48350(piVar4 + 1,0,0x104);
      F_00c49908(piVar4 + 1,0x103,param_1);
      *piVar4 = *piVar4 + 1;
    }
    puVar5 = (undefined4 *)F_004296a0(0x18,0,0x12e);
    *puVar5 = *(undefined4 *)((int)this + 4);
    puVar5[1] = *(undefined4 *)((int)this + 4);
    puVar5[2] = *(undefined4 *)((int)this + 4);
    *(undefined2 *)(puVar5 + 5) = 0;
    if (puVar5 + 3 != (uint *)0x0) {
      puVar5[3] = (*(uint *)(gen_frame + 0xc));
      puVar5[4] = piVar4;
    }
    F_00525d90(this GEN_EDX_ARG,&(*(int *)(gen_frame + 0x10)),puVar5,0);
    iVar6 = (*(int *)(gen_frame + 0x10));
  }
  else {
    **(int * PTR32 *)((*(int *)(gen_frame + 0x14)) + 0x10) = **(int * PTR32 *)((*(int *)(gen_frame + 0x14)) + 0x10) + 1;
    iVar6 = (*(int *)(gen_frame + 0x14));
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return iVar6 + 0xc;
}

/* ref: FUN_00509440 */
GEN_NOFRAME uint GEN_THISCALL F_00509440(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x509440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  F_005077b0(this GEN_EDX_FWD);
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x12e);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00509480 */
GEN_FRAME uint GEN_THISCALL F_00509480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x509480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0xc);
  puVar2 = (undefined4 *)F_004296a0(0x14,0,0x12e);
  *puVar2 = *(undefined4 *)(iVar1 + 0x14);
  puVar2[1] = *(undefined4 *)(iVar1 + 0x14);
  puVar2[2] = *(undefined4 *)(iVar1 + 0x14);
  *(undefined2 *)(puVar2 + 4) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    puVar2[3] = param_1;
  }
  uVar3 = F_00526110((undefined *)(iVar1 + 0x10) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),puVar2,0);
  return uVar3;
}

/* ref: FUN_005094e0 */
GEN_FRAME uint GEN_THISCALL F_005094e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5094e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00507db0(*(undefined * PTR32 *)((int)this + 0xc) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_005094f0 */
GEN_FRAME uint GEN_THISCALL F_005094f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5094f0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  puVar4 = (*(undefined4 * PTR32 *)&gen_args[1]);
  uVar3 = F_00526b50((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[1]),(*(undefined4 * PTR32 *)&gen_args[1]));
  puVar2 = (*(undefined4 * PTR32 *)&gen_args[1]);
  if ((*(undefined4 * PTR32 *)&gen_args[1]) != *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) {
    puVar4 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)&gen_args[1])[4]));
    if (puVar4 != (undefined4 *)0x0) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)*puVar4)(puVar4 GEN_EDX_ARG,1);
      puVar2[4] = 0;
    }
    puVar2[4] = (*(undefined4 *)&gen_args[2]);
    return uVar3;
  }
  uVar1 = *puVar4;
  puVar4 = (undefined4 *)F_004296a0(0x18,0,0x12e);
  *puVar4 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  puVar4[1] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  puVar4[2] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  *(undefined2 *)(puVar4 + 5) = 0;
  if (puVar4 + 3 != (undefined4 *)0x0) {
    puVar4[3] = uVar1;
    puVar4[4] = (*(undefined4 *)&gen_args[2]);
  }
  uVar3 = F_00525e70((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),puVar4,0);
  return uVar3;
}

/* ref: FUN_00509590 */
GEN_FRAME uint GEN_THISCALL F_00509590(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x509590u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 * puVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x109a0d8));
  iVar1 = *(int *)(REFG(int, 0x1375aec) + 0xc);
  puVar2 = (undefined4 *)F_004296a0(0x14,0,0x12e);
  *puVar2 = *(undefined4 *)(iVar1 + 0x14);
  puVar2[1] = *(undefined4 *)(iVar1 + 0x14);
  puVar2[2] = *(undefined4 *)(iVar1 + 0x14);
  *(undefined2 *)(puVar2 + 4) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    puVar2[3] = this;
  }
  F_00526110((undefined *)(iVar1 + 0x10) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),puVar2,0);
  return (uint)this;
}

/* ref: FUN_005095f0 */
GEN_NOFRAME uint GEN_THISCALL F_005095f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5095f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x109a0d8));
  uVar1 = F_00507db0(*(undefined * PTR32 *)(REFG(int, 0x1375aec) + 0xc) GEN_EDX_FWD,this);
  return uVar1;
}

/* ref: Client::System::Resource::Handle::SkeletonResourceHandle::vf33 */
GEN_FRAME uint GEN_THISCALL F_00509610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x509610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  ushort uVar1;
  uint uVar2;
  int * piVar3;
  uint * puVar4;
  uint * puVar5;
  uint uVar6;
  LPVOID pvVar7;
  undefined4 * puVar8;
  int iVar9;
  undefined * pSVar10;
  undefined4 uVar11;
  
  uVar2 = param_2;
  if (param_2 == 1) {
    pSVar10 = this + 0x88;
    iVar9 = _InterlockedExchangeAdd((volatile long *)(((int *)pSVar10)), 0);
    if (iVar9 != 3) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_FWD);
      iVar9 = *(int *)(this + 0x1c);
      (*(uint *)(gen_frame + 0x34)) = uVar2;
      (*(int *)(gen_frame + 0x48)) = iVar9;
      F_00b4ed50(this + 0xd4 GEN_EDX_ARG,uVar2);
      piVar3 = ((int *)GEN_TOP((*(int *)(this + 0xdc) + uVar2)));
      (*(int * PTR32 *)(gen_frame + 0x3c)) = piVar3;
      if (*piVar3 == 0x616c7068) {
        uVar1 = *(ushort *)(piVar3 + 1);
        *(ushort *)(this + 0x10c) = uVar1;
        uVar2 = (int)piVar3 + 6;
        if (uVar1 != 0) {
          (*(uint *)(gen_frame + 0x44)) = (uint)uVar1;
          uVar6 = (uint)uVar1 * 0xc;
          puVar4 = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                                     (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) GEN_EDX_ARG,
                                      -(uint)(0xfffffffb < uVar6) | uVar6 + 4,0x10)));
          if (puVar4 == (uint *)0x0) {
            puVar4 = (uint *)0x0;
          }
          else {
            *puVar4 = (*(uint *)(gen_frame + 0x44));
            puVar4 = puVar4 + 1;
            puVar5 = puVar4;
            uVar6 = (*(uint *)(gen_frame + 0x44));
            while (uVar6 = uVar6 - 1, -1 < (int)uVar6) {
              *puVar5 = 0;
              *(undefined2 *)(puVar5 + 1) = 0;
              puVar5[2] = 0;
              puVar5 = puVar5 + 3;
            }
          }
          *(uint * PTR32 *)(this + 0x108) = puVar4;
          uVar1 = 0;
          iVar9 = (*(int *)(gen_frame + 0x48));
          if (*(short *)(this + 0x10c) != 0) {
            do {
              uVar6 = (uint)(ushort)((ushort)(uVar1 != 0) * 2);
              puVar8 = ((undefined4 *)GEN_TOP(((uint)*(ushort *)(uVar2 + uVar6) + (int)(*(int * PTR32 *)(gen_frame + 0x3c)))));
              (*(uint *)(gen_frame + 0x44)) = uVar2 + uVar6;
              iVar9 = (uint)uVar1 * 0xc;
              *((undefined4 *)GEN_TOP((iVar9 + *(int *)(this + 0x108)))) = *puVar8;
              *((undefined2 *)GEN_TOP((iVar9 + 4 + *(int *)(this + 0x108)))) = *(undefined2 *)(puVar8 + 1);
              uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                                (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) GEN_EDX_ARG,
                                 (uint)*((ushort *)GEN_TOP((iVar9 + 4 + *(int *)(this + 0x108)))) * 2,0x10);
              *((uint *)GEN_TOP((iVar9 + 8 + *(int *)(this + 0x108)))) = uVar2;
              F_00c46aa0(*((undefined4 *)GEN_TOP((iVar9 + 8 + *(int *)(this + 0x108)))),(int)puVar8 + 6,
                         (uint)*((ushort *)GEN_TOP((iVar9 + 4 + *(int *)(this + 0x108)))) * 2);
              uVar1 = uVar1 + 1;
              iVar9 = (*(int *)(gen_frame + 0x48));
              uVar2 = (*(uint *)(gen_frame + 0x44));
            } while (uVar1 < *(ushort *)(this + 0x10c));
          }
        }
        F_00d93630(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,*(int *)(this + 0xe0) + (*(uint *)(gen_frame + 0x34)),iVar9 - *(int *)(this + 0xe0),2);
        pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        puVar8 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar7 + 0x2c) + 4))))
                           (*(int * PTR32 *)((int)pvVar7 + 0x2c) GEN_EDX_ARG,0x14)));
        puVar8[1] = 0x10014;
        *puVar8 = (*(undefined * PTR32 (*)[11])REFP(0x1099dcc));
        uVar2 = 0;
        puVar8[2] = 0;
        puVar8[3] = 0;
        puVar8[4] = 0x80000000;
        *(undefined4 * PTR32 *)(this + 0xd0) = puVar8;
        F_00d91340(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_ARG);
        F_00deb100(((undefined1 *)(gen_frame + 0x4)),((int *)(gen_frame + 0x20)));
        if (((int *)(gen_frame + 0x20))[0] == 4) {
          uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xd0) + 0x24))))(*(int * PTR32 *)(this + 0xd0) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
          *(uint *)(this + 0xa0) = uVar6;
        }
        F_00d91510(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_ARG);
        F_00d936b0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
        uVar11 = 0;
        uVar6 = F_00d92610(&REFG(undefined, 0x15d93b4) GEN_EDX_ARG);
        uVar6 = F_00dea020(*(undefined * PTR32 *)(this + 0xa0) GEN_EDX_ARG,uVar6,uVar11);
        F_00b506a0(this + 0xa4 GEN_EDX_ARG,uVar6);
        pSVar10 = this + 0xec;
        (*(int *)(gen_frame + 0x48)) = 4;
        do {
          if (((*(int *)pSVar10 != -1) && (*(short *)(pSVar10 + 2) != 4)) &&
             (*(short *)(pSVar10 + 2) != 5)) {
            uVar6 = F_00d92610(&REFG(undefined, 0x15d93fc) GEN_EDX_ARG);
            uVar2 = F_00dea020(*(undefined * PTR32 *)(this + 0xa0) GEN_EDX_ARG,uVar6,uVar2);
            (*(int *)(gen_frame + 0x30)) = *(int *)pSVar10;
            puVar8 = (undefined4 *)F_004296a0(0x18,0,0xcb);
            *puVar8 = *(undefined4 *)(this + 0xc0);
            puVar8[1] = *(undefined4 *)(this + 0xc0);
            puVar8[2] = *(undefined4 *)(this + 0xc0);
            *(undefined2 *)(puVar8 + 5) = 0;
            if (puVar8 + 3 != (int *)0x0) {
              puVar8[3] = (*(int *)(gen_frame + 0x30));
              puVar8[4] = uVar2;
            }
            F_00527470(this + 0xbc GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x40)),puVar8,0);
            if (0x3132302f < *(uint *)(this + 0xd8)) {
              uVar6 = F_00d92610(&REFG(undefined, 0x15d93fc) GEN_EDX_ARG);
              uVar2 = F_00dea020(*(undefined * PTR32 *)(this + 0xa0) GEN_EDX_ARG,uVar6,uVar2);
              (*(int *)(gen_frame + 0x38)) = *(int *)pSVar10;
              puVar8 = (undefined4 *)F_004296a0(0x18,0,0xcb);
              *puVar8 = *(undefined4 *)(this + 0xb0);
              puVar8[1] = *(undefined4 *)(this + 0xb0);
              puVar8[2] = *(undefined4 *)(this + 0xb0);
              *(undefined2 *)(puVar8 + 5) = 0;
              if (puVar8 + 3 != (int *)0x0) {
                puVar8[3] = (*(int *)(gen_frame + 0x38));
                puVar8[4] = uVar2;
              }
              F_00527470(this + 0xac GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x28)),puVar8,0);
            }
          }
          pSVar10 = pSVar10 + 4;
          iVar9 = (*(int *)(gen_frame + 0x48)) - 1;
          (*(int *)(gen_frame + 0x48)) = iVar9;
        } while (iVar9 != 0);
        piVar3 = *(int * PTR32 *)(this + 0x98);
        if (piVar3 != (int *)0x0) {
          piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG)));
          ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(this + 0x98));
          *(undefined4 *)(this + 0x98) = 0;
        }
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}

/* ref: FUN_005099e0 */
GEN_FRAME unsigned int GEN_THISCALL F_005099e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5099e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar8;
  uint uVar9;
  undefined4 * puVar10;
  char * pcVar11;
  int iVar12;
  char * pcVar13;
  
  iVar12 = 0;
  (*(uint *)(gen_frame + 0x1c)) = (uint)*(ushort *)((int)this + 0xc0);
  (*(uint *)(gen_frame + 0x24)) = 0;
  if (*(ushort *)((int)this + 0xc0) != 0) {
    do {
      uVar9 = (uint)*((ushort *)GEN_TOP((iVar12 + 0x22 + *(int *)((int)this + 0xd4))));
      iVar3 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xb0) + 0x14))) + uVar9 * 4)));
      uVar4 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xb0) + 0x20))) + uVar9 * 4)));
      uVar5 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xe8) + (*(uint *)(gen_frame + 0x24)) * 4)));
      puVar10 = (undefined4 *)F_00b4d420((int)this + 0xb8 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x18)));
      uVar6 = *puVar10;
      fVar1 = ((float)GEN_TOF(((float10)*(float *)(iVar3 + 0xc) * (float10)*(double *)&REFG(undefined, 0x1088070))));
      (*(float *)(gen_frame + 0x28)) = fVar1;
      dVar8 = (GEN_X87MATH(((double)fVar1),0xe));
      (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x28)) + 2)) = gen_x87_cw;
      (*(float *)(gen_frame + 0x28)) = gen_bits2f(CONCAT22(gen_x87_cw,(short)(uint)gen_fl2bits(fVar1)));
      (*(uint *)(gen_frame + 0x20)) = gen_x87_cw | 0xc00;
      pcVar13 = ((char *)GEN_TOP((*(int *)((int)this + 0xd4) + iVar12)));
      (*(uint *)(gen_frame + 0x20)) = (int)TRUNC(dVar8);
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 0)) = (undefined2)(int)TRUNC(dVar8);
      (*(undefined4 *)(gen_frame + 0xc)) = CONCAT22((undefined2)(*(uint *)(gen_frame + 0x20)),
                          *((undefined2 *)GEN_TOP((iVar12 + 0x20 + *(int *)((int)this + 0xd4)))));
      pcVar11 = pcVar13;
      do {
        cVar2 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar2 != '\0');
      (*(uint *)(gen_frame + 0x20)) = (int)pcVar11 - (int)(pcVar13 + 1);
      puVar10 = (undefined4 *)F_004296a0(0x30,0,0xd6);
      *puVar10 = *(undefined4 *)((int)this + 0xa4);
      puVar10[1] = *(undefined4 *)((int)this + 0xa4);
      puVar10[2] = *(undefined4 *)((int)this + 0xa4);
      *(undefined2 *)(puVar10 + 0xb) = 0;
      if (puVar10 + 3 != (int *)0x0) {
        puVar10[3] = (*(uint *)(gen_frame + 0x20));
        puVar10[5] = 0;
        puVar10[6] = iVar3;
        puVar10[7] = uVar4;
        puVar10[8] = uVar5;
        puVar10[9] = uVar6;
        puVar10[4] = pcVar13;
        puVar10[10] = (*(undefined4 *)(gen_frame + 0xc));
      }
      F_00525cb0((undefined *)((int)this + 0xa0) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)),puVar10,0);
      uVar9 = (*(uint *)(gen_frame + 0x24)) + 1;
      iVar12 = iVar12 + 0x28;
      (*(uint *)(gen_frame + 0x24)) = uVar9;
    } while (uVar9 < (*(uint *)(gen_frame + 0x1c)));
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::LookAtIkResourceHandle::vf25 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00509b40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x509b40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)(this + 0xa4) != (undefined *)0x0) {
    F_00528fd0(*(undefined * PTR32 *)(this + 0xa4) GEN_EDX_FWD,3);
    *(undefined4 *)(this + 0xa4) = 0;
  }
  return;
}

/* ref: FUN_00509b60 */
GEN_FRAME uint GEN_THISCALL F_00509b60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x509b60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_005071e0(this GEN_EDX_FWD);
  F_00525800(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,0x12e);
  return (uint)uVar1;
}

/* ref: FUN_00509ba0 */
GEN_FRAME uint GEN_THISCALL F_00509ba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x509ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00529480(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00509bb0 */
GEN_FRAME uint GEN_THISCALL F_00509bb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x509bb0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = (*(int *)&gen_args[1]);
  _InterlockedExchange((volatile long *)(((undefined4 *)((*(int *)&gen_args[1]) + 0x8c))), (long)(3));
  piVar1 = (int *)((*(int *)&gen_args[1]) + 0x80);
  do {
    iVar2 = _InterlockedExchange((volatile long *)(piVar1), (long)(1));
  } while (iVar2 != 0);
  if ((*(uint *)((*(int *)&gen_args[1]) + 0x30) & 0xc000000) == 0) {
    F_004fb700(REFG(void * PTR32, 0x1375ae8) GEN_EDX_FWD,(*(int *)&gen_args[1]) + 0x30,(*(int *)&gen_args[1]));
  }
  _InterlockedExchange((volatile long *)(piVar1), (long)(0));
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(iVar3 + 0x2c))) {
  case 0: ;
    iVar3 = 0;
    break;
  case 1: ;
    iVar3 = 1;
    break;
  case 2: ;
    iVar3 = 2;
    break;
  case 3: ;
    iVar3 = 3;
    break;
  case 4: ;
    iVar3 = 4;
    break;
  default: ;
    iVar3 = 5;
    break;
  case 6: ;
    iVar3 = 6;
  }
  uVar4 = F_00529340(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar3 * 0x18 + 0xd1c))) GEN_EDX_ARG,&(*(int *)&gen_args[1]));
  return uVar4;
}

/* ref: FUN_00509c70 */
GEN_FRAME byte GEN_THISCALL F_00509c70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x509c70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  int * piVar6;
  int * piVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(param_1 + 0x2c))) {
  case 0: ;
    (*(uint *)(gen_frame + 0x18)) = 0;
    break;
  case 1: ;
    (*(uint *)(gen_frame + 0x18)) = 1;
    break;
  case 2: ;
    (*(uint *)(gen_frame + 0x18)) = 2;
    break;
  case 3: ;
    (*(uint *)(gen_frame + 0x18)) = 3;
    break;
  case 4: ;
    (*(uint *)(gen_frame + 0x18)) = 4;
    break;
  default: ;
    (*(uint *)(gen_frame + 0x18)) = 5;
    break;
  case 6: ;
    (*(uint *)(gen_frame + 0x18)) = 6;
  }
  uVar8 = *(uint *)((int)this + (*(uint *)(gen_frame + 0x18)) * 0x18 + 0xd28);
  piVar7 = (int *)((int)this + (*(uint *)(gen_frame + 0x18)) * 0x18 + 0xd1c);
  (*(uint * PTR32 *)(gen_frame + 0x14)) = (uint *)piVar7;
  piVar5 = (int *)*piVar7;
  uVar4 = piVar7[4] + uVar8;
  ((int * PTR32 *)(gen_frame + 0x4))[0] = (int *)0x0;
  pvVar2 = this;
  if ((piVar5 != (int *)0x0) && (puVar1 = (undefined4 *)*piVar5, puVar1 != (undefined4 *)0x0)) {
    ((int * PTR32 *)(gen_frame + 0x4))[0] = (int *)*puVar1;
  }
  for (; uVar8 != uVar4; uVar8 = uVar8 + 1) {
    if (((int * PTR32 *)(gen_frame + 0x4))[0] == (int *)0x0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *((int * PTR32 *)(gen_frame + 0x4))[0];
    }
    uVar3 = uVar8 >> 2;
    if (*(uint *)(iVar9 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(iVar9 + 8);
    }
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar9 + 4) + uVar3 * 4))) + (uVar8 & 3) * 4))) == param_1) {
      piVar5 = (int *)0x0;
      if ((((int * PTR32 *)(gen_frame + 0x4))[0] != (int *)0x0) && (((undefined4 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0x4))[0])) != (undefined4 *)0x0)) {
        piVar5 = *((int * PTR32 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0x4))[0]));
      }
      piVar6 = (int *)0x0;
      if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
        piVar6 = *(int * PTR32 *)*piVar5;
      }
      uVar11 = 0;
      if ((piVar6 != (int *)0x0) && ((undefined4 *)*piVar6 != (undefined4 *)0x0)) {
        uVar11 = *(undefined4 *)*piVar6;
      }
      uVar10 = 0;
      if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
        uVar10 = *(undefined4 *)*piVar5;
      }
      F_00528340(piVar7 GEN_EDX_FWD,((int * PTR32 *)(gen_frame + 0x4)),uVar10,0,uVar8,uVar11,0,uVar8 + 1);
      return 1;
    }
    pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x10));
  }
  if ((char)param_2 != '\0') {
    (*(uint * PTR32 *)(gen_frame + 0x14)) = (uint *)((int)pvVar2 + 0xd28);
    param_2 = 0;
    do {
      if ((*(uint *)(gen_frame + 0x18)) != param_2) {
        uVar8 = *(*(uint * PTR32 *)(gen_frame + 0x14));
        piVar7 = (int *)(*(uint * PTR32 *)(gen_frame + 0x14))[-3];
        uVar4 = (*(uint * PTR32 *)(gen_frame + 0x14))[1] + uVar8;
        ((int * PTR32 *)(gen_frame + 0x4))[0] = (int *)0x0;
        if ((piVar7 != (int *)0x0) && (puVar1 = (undefined4 *)*piVar7, puVar1 != (undefined4 *)0x0))
        {
          ((int * PTR32 *)(gen_frame + 0x4))[0] = (int *)*puVar1;
        }
        for (; uVar8 != uVar4; uVar8 = uVar8 + 1) {
          if (((int * PTR32 *)(gen_frame + 0x4))[0] == (int *)0x0) {
            iVar9 = 0;
          }
          else {
            iVar9 = *((int * PTR32 *)(gen_frame + 0x4))[0];
          }
          uVar3 = uVar8 >> 2;
          if (*(uint *)(iVar9 + 8) <= uVar3) {
            uVar3 = uVar3 - *(uint *)(iVar9 + 8);
          }
          if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar9 + 4) + uVar3 * 4))) + (uVar8 & 3) * 4))) == param_1) {
            piVar7 = (int *)0x0;
            if ((((int * PTR32 *)(gen_frame + 0x4))[0] != (int *)0x0) && (((undefined4 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0x4))[0])) != (undefined4 *)0x0)) {
              piVar7 = *((int * PTR32 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0x4))[0]));
            }
            piVar5 = (int *)0x0;
            if ((piVar7 != (int *)0x0) && ((undefined4 *)*piVar7 != (undefined4 *)0x0)) {
              piVar5 = *(int * PTR32 *)*piVar7;
            }
            uVar11 = 0;
            if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
              uVar11 = *(undefined4 *)*piVar5;
            }
            uVar10 = 0;
            if ((piVar7 != (int *)0x0) && ((undefined4 *)*piVar7 != (undefined4 *)0x0)) {
              uVar10 = *(undefined4 *)*piVar7;
            }
            F_00528340((undefined *)((int)this + param_2 * 0x18 + 0xd1c) GEN_EDX_ARG,((int * PTR32 *)(gen_frame + 0x4)),uVar10,0,uVar8,uVar11
                         ,0,uVar8 + 1);
            return 1;
          }
        }
      }
      param_2 = param_2 + 1;
      (*(uint * PTR32 *)(gen_frame + 0x14)) = (*(uint * PTR32 *)(gen_frame + 0x14)) + 6;
    } while (param_2 < 7);
  }
  return 0;
}

/* ref: FUN_00509f00 */
GEN_FRAME byte GEN_THISCALL F_00509f00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x509f00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  int * piVar6;
  int * piVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(param_1 + 0x2c))) {
  case 0: ;
    (*(uint *)(gen_frame + 0x18)) = 0;
    break;
  case 1: ;
    (*(uint *)(gen_frame + 0x18)) = 1;
    break;
  case 2: ;
    (*(uint *)(gen_frame + 0x18)) = 2;
    break;
  case 3: ;
    (*(uint *)(gen_frame + 0x18)) = 3;
    break;
  case 4: ;
    (*(uint *)(gen_frame + 0x18)) = 4;
    break;
  default: ;
    (*(uint *)(gen_frame + 0x18)) = 5;
    break;
  case 6: ;
    (*(uint *)(gen_frame + 0x18)) = 6;
  }
  uVar8 = *(uint *)((int)this + (*(uint *)(gen_frame + 0x18)) * 0x18 + 0xc80);
  piVar7 = (int *)((int)this + (*(uint *)(gen_frame + 0x18)) * 0x18 + 0xc74);
  (*(uint * PTR32 *)(gen_frame + 0x14)) = (uint *)piVar7;
  piVar5 = (int *)*piVar7;
  uVar4 = piVar7[4] + uVar8;
  ((int * PTR32 *)(gen_frame + 0x4))[0] = (int *)0x0;
  pvVar2 = this;
  if ((piVar5 != (int *)0x0) && (puVar1 = (undefined4 *)*piVar5, puVar1 != (undefined4 *)0x0)) {
    ((int * PTR32 *)(gen_frame + 0x4))[0] = (int *)*puVar1;
  }
  for (; uVar8 != uVar4; uVar8 = uVar8 + 1) {
    if (((int * PTR32 *)(gen_frame + 0x4))[0] == (int *)0x0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *((int * PTR32 *)(gen_frame + 0x4))[0];
    }
    uVar3 = uVar8 >> 2;
    if (*(uint *)(iVar9 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(iVar9 + 8);
    }
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar9 + 4) + uVar3 * 4))) + (uVar8 & 3) * 4))) == param_1) {
      piVar5 = (int *)0x0;
      if ((((int * PTR32 *)(gen_frame + 0x4))[0] != (int *)0x0) && (((undefined4 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0x4))[0])) != (undefined4 *)0x0)) {
        piVar5 = *((int * PTR32 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0x4))[0]));
      }
      piVar6 = (int *)0x0;
      if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
        piVar6 = *(int * PTR32 *)*piVar5;
      }
      uVar11 = 0;
      if ((piVar6 != (int *)0x0) && ((undefined4 *)*piVar6 != (undefined4 *)0x0)) {
        uVar11 = *(undefined4 *)*piVar6;
      }
      uVar10 = 0;
      if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
        uVar10 = *(undefined4 *)*piVar5;
      }
      F_00528340(piVar7 GEN_EDX_FWD,((int * PTR32 *)(gen_frame + 0x4)),uVar10,0,uVar8,uVar11,0,uVar8 + 1);
      return 1;
    }
    pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x10));
  }
  if ((char)param_2 != '\0') {
    (*(uint * PTR32 *)(gen_frame + 0x14)) = (uint *)((int)pvVar2 + 0xc80);
    param_2 = 0;
    do {
      if ((*(uint *)(gen_frame + 0x18)) != param_2) {
        uVar8 = *(*(uint * PTR32 *)(gen_frame + 0x14));
        piVar7 = (int *)(*(uint * PTR32 *)(gen_frame + 0x14))[-3];
        uVar4 = (*(uint * PTR32 *)(gen_frame + 0x14))[1] + uVar8;
        ((int * PTR32 *)(gen_frame + 0x4))[0] = (int *)0x0;
        if ((piVar7 != (int *)0x0) && (puVar1 = (undefined4 *)*piVar7, puVar1 != (undefined4 *)0x0))
        {
          ((int * PTR32 *)(gen_frame + 0x4))[0] = (int *)*puVar1;
        }
        for (; uVar8 != uVar4; uVar8 = uVar8 + 1) {
          if (((int * PTR32 *)(gen_frame + 0x4))[0] == (int *)0x0) {
            iVar9 = 0;
          }
          else {
            iVar9 = *((int * PTR32 *)(gen_frame + 0x4))[0];
          }
          uVar3 = uVar8 >> 2;
          if (*(uint *)(iVar9 + 8) <= uVar3) {
            uVar3 = uVar3 - *(uint *)(iVar9 + 8);
          }
          if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar9 + 4) + uVar3 * 4))) + (uVar8 & 3) * 4))) == param_1) {
            piVar7 = (int *)0x0;
            if ((((int * PTR32 *)(gen_frame + 0x4))[0] != (int *)0x0) && (((undefined4 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0x4))[0])) != (undefined4 *)0x0)) {
              piVar7 = *((int * PTR32 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0x4))[0]));
            }
            piVar5 = (int *)0x0;
            if ((piVar7 != (int *)0x0) && ((undefined4 *)*piVar7 != (undefined4 *)0x0)) {
              piVar5 = *(int * PTR32 *)*piVar7;
            }
            uVar11 = 0;
            if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
              uVar11 = *(undefined4 *)*piVar5;
            }
            uVar10 = 0;
            if ((piVar7 != (int *)0x0) && ((undefined4 *)*piVar7 != (undefined4 *)0x0)) {
              uVar10 = *(undefined4 *)*piVar7;
            }
            F_00528340((undefined *)((int)this + param_2 * 0x18 + 0xc74) GEN_EDX_ARG,((int * PTR32 *)(gen_frame + 0x4)),uVar10,0,uVar8,uVar11
                         ,0,uVar8 + 1);
            return 1;
          }
        }
      }
      param_2 = param_2 + 1;
      (*(uint * PTR32 *)(gen_frame + 0x14)) = (*(uint * PTR32 *)(gen_frame + 0x14)) + 6;
    } while (param_2 < 7);
  }
  return 0;
}

/* ref: FUN_0050a190 */
GEN_FRAME byte GEN_THISCALL F_0050a190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x50a190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  int iVar3;
  byte bVar4;
  
  piVar1 = (int *)(param_1 + 0x80);
  do {
    iVar3 = _InterlockedExchange((volatile long *)(piVar1), (long)(1));
  } while (iVar3 != 0);
  _InterlockedExchange((volatile long *)(piVar1), (long)(0));
  if ((*(uint *)(param_1 + 0x30) & 0xc000000) != 0) {
    F_00509c70(this GEN_EDX_FWD,param_1,1);
  }
  do {
    iVar3 = _InterlockedExchange((volatile long *)(piVar1), (long)(1));
  } while (iVar3 != 0);
  piVar2 = (int *)(param_1 + 0x8c);
  iVar3 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
  _InterlockedExchange((volatile long *)(piVar1), (long)(0));
  bVar4 = 0;
  if (iVar3 == 2) {
    bVar4 = F_00509f00(this GEN_EDX_ARG,param_1,1);
  }
  return bVar4;
}

/* ref: FUN_0050a210 */
GEN_FRAME byte GEN_THISCALL F_0050a210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x50a210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  byte bVar2;
  
  bVar1 = F_00509c70(this GEN_EDX_FWD,param_1,0);
  bVar2 = F_00509f00(this GEN_EDX_ARG,param_1,0);
  return bVar2 != 0 || bVar1 != 0;
}

/* ref: FUN_0050a250 */
GEN_FRAME byte GEN_THISCALL F_0050a250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x50a250u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  byte bVar1;
  
  F_005291e0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xdd4))) GEN_EDX_FWD,&(*(undefined4 *)&gen_args[1]));
  bVar1 = F_00507910(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
  return bVar1;
}

/* ref: FUN_0050a280 */
GEN_FRAME uint GEN_THISCALL F_0050a280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x50a280u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xde4)));
  if ((iVar1 != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xde8)))) &&
     (uVar2 = (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xde8))) - iVar1 >> 2) - 1, -1 < (int)uVar2)) {
    piVar3 = (int *)(iVar1 + uVar2 * 4);
    do {
      if (*piVar3 == (*(int *)&gen_args[1])) {
        return uVar2;
      }
      piVar3 = piVar3 - 1;
      uVar2 = uVar2 - 1;
    } while (-1 < (int)uVar2);
  }
  uVar2 = F_005291e0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xde4))) GEN_EDX_FWD,&(*(int *)&gen_args[1]));
  return uVar2;
}

/* ref: FUN_0050a2c0 */
GEN_FRAME uint GEN_THISCALL F_0050a2c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x50a2c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_005074c0(this GEN_EDX_FWD);
  F_005258a0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,0x12e);
  return (uint)uVar1;
}

/* ref: FUN_0050a300 */
GEN_FRAME uint GEN_THISCALL F_0050a300(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x50a300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x109945c));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x6d646c;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x109946c));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x746578;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x109947c));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x6d74726c;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x109948c));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x73686364;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x109949c));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x7368706b;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10994ac));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x74657261;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10994bc));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x677a64;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10994cc));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x676764;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10994dc));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x656e7662;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10994ec));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x65737362;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10994fc));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = &REFG(undefined, 0x616d62);
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x109950c));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x6f627362;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x109951c));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x737662;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x109952c));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x6c6362;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x109953c));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x61746368;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x109954c));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x706264;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x109955c));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x657170;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x109956c));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x636d70;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x109957c));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x696d63;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x109958c));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x657374;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x109959c));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x65716470;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10995ac));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x777464;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10995bc));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x77616f65;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10995cc));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x736b6c62;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10995dc));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x706170;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10995ec));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x6c61696b;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10995fc));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x6173696b;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x109960c));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x736b70;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x109961c));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x7074626c;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x109962c));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x656964;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x109963c))
    ;
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x616574;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x109964c));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x6d6c74;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x109965c));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x617774;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x109966c));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x61766678;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x109967c));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x61746578;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x109968c));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x736364;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x109969c));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x706362;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10996ac));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x70687962;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10996bc));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x63757462;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10996cc));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x746d62;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10996dc));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x637462;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10996ec));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x636d74;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10996fc));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = &REFG(undefined, 0x6c7662);
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x109970c));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x6c6762;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x109971c));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x736762;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x109972c));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x6e766d;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x109973c));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x65786c;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x109974c));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x657868;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x109975c));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x657864;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x109976c));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x687763;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x109977c));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x637572;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x109978c));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x706e67;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x109979c));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x756764;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10997ac));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x756c64;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10997bc));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x646963;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10997cc));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = &REFG(undefined, 0x6c7561);
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10997dc));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x6c756162;
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10997ec));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = &REFG(undefined, 0x666474);
  F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x10997fc));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = REFP(0x00676664);
  uVar2 = F_005094f0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar1);
  return uVar2;
}

/* ref: FUN_0050adf0 */
GEN_FRAME uint GEN_THISCALL F_0050adf0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x50adf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * PTR32 * ppiVar1;
  int * PTR32 * ppiVar2;
  undefined * this_00;
  int * piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  undefined4 * PTR32 * ppuVar9;
  undefined4 * puVar10;
  int iVar11;
  ulonglong uVar12;
  
  (*(int * PTR32 *)(gen_frame + 0x20)) = this;
  (*(uint *)(gen_frame + 0xc)) = *(uint *)((int)this + 0x10);
  (*(uint *)(gen_frame + 0x24)) = 0;
  if (*(uint *)((int)this + 0x10) != 0) {
    do {
      if (*(uint *)((int)this + 0x10) <= (*(uint *)(gen_frame + 0x24))) {
                    
        F_00c457e7("invalid deque<T> subscript");
      }
      piVar3 = (int *)0x0;
      if ((*(int * PTR32 *)this != (int *)0x0) &&
         (puVar10 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar10 != (undefined4 *)0x0)) {
        piVar3 = (int *)*puVar10;
      }
      if (((piVar3 == (int *)0x0) || ((int *)*piVar3 == (int *)0x0)) ||
         (piVar3 = *(int * PTR32 *)*piVar3, piVar3 == (int *)0x0)) {
        iVar11 = 0;
      }
      else {
        iVar11 = *piVar3;
      }
      uVar4 = *(int *)((int)this + 0xc) + (*(uint *)(gen_frame + 0x24)) >> 2;
      if (*(uint *)(iVar11 + 8) <= uVar4) {
        uVar4 = uVar4 - *(uint *)(iVar11 + 8);
      }
      piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar11 + 4) + uVar4 * 4))) +
                        (*(int *)((int)this + 0xc) + (*(uint *)(gen_frame + 0x24)) & 3) * 4)));
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)piVar3[0x21]);
      iVar11 = REFG(int, 0x1375aec);
      ppiVar1 = *(int * PTR32 * PTR32 *)(REFG(int, 0x1375aec) + 0xdd8);
      (*(int * PTR32 *)(gen_frame + 0x28)) = piVar3;
      if (&(*(int * PTR32 *)(gen_frame + 0x28)) < ppiVar1) {
        ppiVar2 = *(int * PTR32 * PTR32 *)(REFG(int, 0x1375aec) + 0xdd4);
        if (&(*(int * PTR32 *)(gen_frame + 0x28)) < ppiVar2) goto LAB_0050af01;
        (*(int *)(gen_frame + 0x1c)) = (int)&(*(int * PTR32 *)(gen_frame + 0x28)) - (int)((int)(uintptr_t)ppiVar2) >> 2;
        if (ppiVar1 == *(int * PTR32 * PTR32 *)(REFG(int, 0x1375aec) + 0xddc)) {
          iVar5 = (int)ppiVar1 - (int)((int)(uintptr_t)ppiVar2) >> 2;
          if (iVar5 == -1) goto LAB_0050b05d;
          uVar6 = iVar5 + 1;
          uVar4 = (int)*(int * PTR32 * PTR32 *)(REFG(int, 0x1375aec) + 0xddc) - (int)((int)(uintptr_t)ppiVar2) >> 2;
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
            F_00527fb0((undefined *)(REFG(int, 0x1375aec) + 0xdd4) GEN_EDX_ARG,uVar4);
          }
        }
        this = (*(int * PTR32 *)(gen_frame + 0x20));
        if (*(undefined4 * PTR32 *)(iVar11 + 0xdd8) != (undefined4 *)0x0) {
          **(undefined4 * PTR32 *)(iVar11 + 0xdd8) =
               *((undefined4 *)GEN_TOP((*(int *)(iVar11 + 0xdd4) + (*(int *)(gen_frame + 0x1c)) * 4)));
        }
      }
      else {
LAB_0050af01: ;
        if (ppiVar1 == *(int * PTR32 * PTR32 *)(REFG(int, 0x1375aec) + 0xddc)) {
          iVar5 = (int)ppiVar1 - *(int *)(REFG(int, 0x1375aec) + 0xdd4) >> 2;
          if (iVar5 == -1) {
LAB_0050b05d: ;
                    
            F_00c4579a("vector<T> too long");
          }
          uVar6 = iVar5 + 1;
          uVar4 = (int)*(int * PTR32 * PTR32 *)(REFG(int, 0x1375aec) + 0xddc) - *(int *)(REFG(int, 0x1375aec) + 0xdd4) >> 2;
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
            F_00527fb0((undefined *)(REFG(int, 0x1375aec) + 0xdd4) GEN_EDX_ARG,uVar4);
            this = (*(int * PTR32 *)(gen_frame + 0x20));
          }
        }
        if (*(int * PTR32 *)(iVar11 + 0xdd8) != (int *)0x0) {
          **(int * PTR32 *)(iVar11 + 0xdd8) = (int)piVar3;
        }
      }
      *(int *)(iVar11 + 0xdd8) = *(int *)(iVar11 + 0xdd8) + 4;
      iVar11 = *((int *)GEN_TOP((*(int *)(iVar11 + 4) +
                       ((uint)*(ushort *)((int)piVar3 + 6) + (uint)*(ushort *)(piVar3 + 1) * 0x14) *
                       4)));
      if (iVar11 != 0) {
        puVar10 = *(undefined4 * PTR32 *)(iVar11 + 4);
        if (*(char *)((int)puVar10[1] + 0x15) == '\0') {
          puVar7 = (undefined4 *)puVar10[1];
          do {
            if ((uint)puVar7[3] < (uint)piVar3[2]) {
              puVar8 = (undefined4 *)puVar7[2];
            }
            else {
              puVar8 = (undefined4 *)*puVar7;
              puVar10 = puVar7;
            }
            puVar7 = puVar8;
          } while (*(char *)((int)puVar8 + 0x15) == '\0');
        }
        puVar7 = *(undefined4 * PTR32 *)(iVar11 + 4);
        (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = puVar10;
        if ((puVar10 == puVar7) || ((uint)piVar3[2] < (uint)puVar10[3])) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = puVar7;
          ppuVar9 = &(*(undefined4 * PTR32 *)(gen_frame + 0x14));
        }
        else {
          ppuVar9 = &(*(undefined4 * PTR32 *)(gen_frame + 0x18));
        }
        if (((puVar7 != *ppuVar9) && (this_00 = ((undefined *)GEN_TOP((*ppuVar9)[4])), this_00 != (undefined *)0x0)) &&
           (F_00526d80(this_00 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x10)),piVar3 + 3), *(int *)((int)this_00 + 4) != (*(int *)(gen_frame + 0x10)))) {
          F_00524e80(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),(*(int *)(gen_frame + 0x10)));
        }
      }
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x44))(piVar3 GEN_EDX_ARG);
      *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) - uVar4;
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3 GEN_EDX_ARG);
      *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) - uVar4;
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)piVar3[0x21]);
      uVar4 = (*(uint *)(gen_frame + 0x24)) + 1;
      (*(uint *)(gen_frame + 0x24)) = uVar4;
    } while (uVar4 < (*(uint *)(gen_frame + 0xc)));
  }
  F_005252b0(this GEN_EDX_ARG);
  F_005252b0(this GEN_EDX_ARG);
  uVar12 = F_00429760(*(int *)this,8,0x12e);
  *(int *)this = 0;
  return (uint)uVar12;
}

/* ref: FUN_0050b070 */
GEN_FRAME uint GEN_THISCALL F_0050b070(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x50b070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)((int)this + 0x10) == 0) {
    return 0;
  }
  if (*(int * PTR32 *)this == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = **(int * PTR32 *)this;
  }
  uVar2 = *(uint *)((int)this + 0xc) >> 2;
  if (*(uint *)(iVar4 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(iVar4 + 8);
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar4 + 4) + uVar2 * 4))) +
                    (*(uint *)((int)this + 0xc) & 3) * 4)));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)piVar1[0x21]);
  iVar4 = REFG(int, 0x1375aec);
  (*(int * PTR32 *)(gen_frame + 0x8)) = piVar1;
  F_005291e0((undefined *)(REFG(int, 0x1375aec) + 0xdd4) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x8)));
  F_00507910(*(undefined * PTR32 *)(iVar4 + 4) GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0x8)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_ARG);
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) - (uVar2 + uVar3);
  if (*(int *)((int)this + 0x10) != 0) {
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
    if ((uint)(*(int *)((int)this + 8) * 4) <= *(uint *)((int)this + 0xc)) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
    iVar4 = *(int *)((int)this + 0x10) - 1;
    *(int *)((int)this + 0x10) = iVar4;
    if (iVar4 == 0) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
  }
  if (*(int *)((int)this + 0x18) < 0) {
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)piVar1[0x21]);
  return uVar2 + uVar3;
}

/* ref: FUN_0050b150 */
GEN_FRAME uint GEN_THISCALL F_0050b150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x50b150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  if (*(int *)((int)this + 0x10) == 0) {
    return 0;
  }
  uVar5 = *(uint *)((int)this + 0xc);
  uVar3 = uVar5 + *(int *)((int)this + 0x10);
  (*(uint *)(gen_frame + 0x24)) = 0;
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x0;
  (*(uint *)(gen_frame + 0x14)) = uVar3;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)*puVar1;
  }
  do {
    if (uVar5 == uVar3) {
LAB_0050b224: ;
      if (*(int *)((int)this + 0x18) < 0) {
        *(undefined4 *)((int)this + 0x18) = 0;
      }
      return (*(uint *)(gen_frame + 0x24));
    }
    if ((*(int * PTR32 *)(gen_frame + 0x18)) == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(*(int * PTR32 *)(gen_frame + 0x18));
    }
    uVar2 = uVar5 >> 2;
    if (*(uint *)(iVar4 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(iVar4 + 8);
    }
    if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar4 + 4) + uVar2 * 4))) + (uVar5 & 3) * 4))) == param_1) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x48))(param_1 GEN_EDX_FWD);
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x44))(param_1 GEN_EDX_ARG);
      *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x18) = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x18) - (uVar3 + uVar2);
      (*(uint *)(gen_frame + 0x24)) = uVar3 + uVar2;
      uVar6 = 0;
      if (((*(int * PTR32 *)(gen_frame + 0x18)) != (int *)0x0) && ((undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18)) != (undefined4 *)0x0)) {
        uVar6 = *(undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18));
      }
      F_005293c0((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),uVar6,0,uVar5);
      this = (*(undefined * PTR32 *)(gen_frame + 0x28));
      goto LAB_0050b224;
    }
    uVar5 = uVar5 + 1;
    this = (*(undefined * PTR32 *)(gen_frame + 0x28));
  } while( true );
}

/* ref: FUN_0050b240 */
GEN_FRAME byte GEN_THISCALL F_0050b240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x50b240u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined * this_00;
  int iVar1;
  uint uVar2;
  
  iVar1 = (*(int *)&gen_args[1]);
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (*(uint *)((*(int *)&gen_args[1]) + 4) & 0xffff) * 4)));
  if (this_00 != (undefined *)0x0) {
    F_00526bc0(this_00 GEN_EDX_FWD,&(*(int *)&gen_args[1]),(*(int *)&gen_args[1]) + 8);
    if (*(int *)((int)this_00 + 4) != (*(int *)&gen_args[1])) {
      uVar2 = F_0050b150(*(undefined * PTR32 *)((*(int *)&gen_args[1]) + 0x10) GEN_EDX_ARG,iVar1);
      *(int *)((int)this_00 + 0x10) = *(int *)((int)this_00 + 0x10) - uVar2;
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) - uVar2;
      if (*(int *)((int)this_00 + 0x10) < 0) {
        *(undefined4 *)((int)this_00 + 0x10) = 0;
      }
      if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) < 0) {
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = 0;
      }
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_0050b2b0 */
GEN_FRAME unsigned int GEN_THISCALL F_0050b2b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x50b2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  int * piVar7;
  int * piVar8;
  int * piVar9;
  
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int * PTR32 *)(gen_frame + 0xc)) = this;
  do {
    (*(int *)(gen_frame + 0x18)) = 0;
    (*(int * PTR32 *)(gen_frame + 0x14)) = this;
    (*(int * PTR32 *)(gen_frame + 0xc)) = this;
    do {
      (*(int * PTR32 *)(gen_frame + 0x14)) = this;
      if (*(int *)this != 0) {
        piVar8 = *(int * PTR32 *)(*(int *)this + 4);
        piVar7 = (int *)*piVar8;
        (*(int * PTR32 *)(gen_frame + 0x8)) = piVar8;
        (*(int * PTR32 *)(gen_frame + 0x28)) = piVar7;
        if (piVar7 != piVar8) {
          do {
            (*(undefined * PTR32 *)(gen_frame + 0x20)) = (undefined *)piVar7[4];
            piVar2 = *(int * PTR32 *)(piVar7[4] + 4);
            piVar9 = (int *)*piVar2;
            (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar2;
            if (piVar9 != piVar2) {
              do {
                iVar3 = piVar9[4];
                (*(int *)(gen_frame + 0x24)) = iVar3;
                piVar8 = (int *)(iVar3 + 0x94);
                iVar3 = _InterlockedExchangeAdd((volatile long *)(piVar8), 0);
                if (iVar3 == 0) {
                  piVar8 = (int *)param_1[1];
                  if (&(*(int *)(gen_frame + 0x24)) < piVar8) {
                    piVar7 = (int *)*param_1;
                    if (&(*(int *)(gen_frame + 0x24)) < piVar7) goto LAB_0050b39c;
                    if (piVar8 == (int *)param_1[2]) {
                      iVar3 = (int)piVar8 - (int)((int)(uintptr_t)piVar7) >> 2;
                      if (iVar3 == -1) goto LAB_0050b4ed;
                      uVar4 = iVar3 + 1;
                      uVar6 = (int)param_1[2] - (int)((int)(uintptr_t)piVar7) >> 2;
                      if (uVar6 < uVar4) {
                        if (-(uVar6 >> 1) - 1 < uVar6) {
                          uVar6 = 0;
                        }
                        else {
                          uVar6 = uVar6 + (uVar6 >> 1);
                        }
                        if (uVar6 < uVar4) {
                          uVar6 = uVar4;
                        }
                        F_00527fb0(param_1 GEN_EDX_FWD,uVar6);
                      }
                    }
                    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
                      *(undefined4 *)param_1[1] =
                           *((undefined4 *)GEN_TOP((*param_1 + ((int)&(*(int *)(gen_frame + 0x24)) - (int)((int)(uintptr_t)piVar7) >> 2) * 4)));
                    }
                  }
                  else {
LAB_0050b39c: ;
                    if (piVar8 == (int *)param_1[2]) {
                      iVar3 = (int)((int)piVar8 - *param_1) >> 2;
                      if (iVar3 == -1) {
LAB_0050b4ed: ;
                    
                        F_00c4579a("vector<T> too long");
                      }
                      uVar4 = iVar3 + 1;
                      uVar6 = (int)((int)param_1[2] - *param_1) >> 2;
                      if (uVar6 < uVar4) {
                        if (-(uVar6 >> 1) - 1 < uVar6) {
                          uVar6 = 0;
                        }
                        else {
                          uVar6 = uVar6 + (uVar6 >> 1);
                        }
                        if (uVar6 < uVar4) {
                          uVar6 = uVar4;
                        }
                        F_00527fb0(param_1 GEN_EDX_ARG,uVar6);
                      }
                    }
                    if ((int *)param_1[1] != (int *)0x0) {
                      *(int *)param_1[1] = (*(int *)(gen_frame + 0x24));
                    }
                  }
                  param_1[1] = param_1[1] + 4;
                  puVar5 = (undefined4 *)F_00524e80((*(undefined * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),piVar9);
                  piVar9 = (int *)*puVar5;
                  (*(int * PTR32 *)(gen_frame + 0x1c)) = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x20)) + 4);
                  piVar7 = (*(int * PTR32 *)(gen_frame + 0x28));
                }
                else if (*(char *)((int)piVar9 + 0x15) == '\0') {
                  piVar8 = (int *)piVar9[2];
                  if (*(char *)((int)piVar8 + 0x15) == '\0') {
                    cVar1 = *(char *)(*piVar8 + 0x15);
                    piVar9 = piVar8;
                    piVar8 = (int *)*piVar8;
                    while (cVar1 == '\0') {
                      cVar1 = *(char *)(*piVar8 + 0x15);
                      piVar9 = piVar8;
                      piVar8 = (int *)*piVar8;
                    }
                  }
                  else {
                    cVar1 = *(char *)(piVar9[1] + 0x15);
                    piVar2 = (int *)piVar9[1];
                    piVar8 = piVar9;
                    while ((piVar9 = piVar2, cVar1 == '\0' && (piVar8 == (int *)piVar9[2]))) {
                      cVar1 = *(char *)(piVar9[1] + 0x15);
                      piVar2 = (int *)piVar9[1];
                      piVar8 = piVar9;
                    }
                  }
                }
                piVar8 = (*(int * PTR32 *)(gen_frame + 0x8));
              } while (piVar9 != (*(int * PTR32 *)(gen_frame + 0x1c)));
            }
            if (*(char *)((int)piVar7 + 0x15) == '\0') {
              piVar2 = (int *)piVar7[2];
              if (*(char *)((int)piVar2 + 0x15) == '\0') {
                cVar1 = *(char *)(*piVar2 + 0x15);
                piVar7 = (int *)*piVar2;
                while (cVar1 == '\0') {
                  cVar1 = *(char *)(*piVar7 + 0x15);
                  piVar2 = piVar7;
                  piVar7 = (int *)*piVar7;
                }
                (*(int * PTR32 *)(gen_frame + 0x28)) = piVar2;
                piVar7 = (*(int * PTR32 *)(gen_frame + 0x28));
              }
              else {
                cVar1 = *(char *)(piVar7[1] + 0x15);
                piVar2 = (int *)piVar7[1];
                while ((piVar9 = piVar2, cVar1 == '\0' && (piVar7 == (int *)piVar9[2]))) {
                  (*(int * PTR32 *)(gen_frame + 0x28)) = piVar9;
                  cVar1 = *(char *)(piVar9[1] + 0x15);
                  piVar2 = (int *)piVar9[1];
                  piVar7 = piVar9;
                }
                (*(int * PTR32 *)(gen_frame + 0x28)) = piVar9;
                piVar7 = (*(int * PTR32 *)(gen_frame + 0x28));
              }
            }
          } while (piVar7 != piVar8);
        }
      }
      iVar3 = (*(int *)(gen_frame + 0x18)) + 1;
      this = (*(int * PTR32 *)(gen_frame + 0x14)) + 1;
      (*(int *)(gen_frame + 0x18)) = iVar3;
      (*(int * PTR32 *)(gen_frame + 0x14)) = this;
    } while (iVar3 < 0x14);
    iVar3 = (*(int *)(gen_frame + 0x10)) + 1;
    this = (*(int * PTR32 *)(gen_frame + 0xc)) + 0x14;
    (*(int *)(gen_frame + 0x10)) = iVar3;
    (*(int * PTR32 *)(gen_frame + 0xc)) = this;
    if (0x13 < iVar3) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_0050b500 */
GEN_FRAME byte GEN_THISCALL F_0050b500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x50b500u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  F_005291e0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70))) GEN_EDX_FWD,&(*(int * PTR32 *)&gen_args[1]));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0xc))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG,(uint)(*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) >> 3 & 1));
  return 1;
}

/* ref: FUN_0050b530 */
GEN_FRAME byte GEN_THISCALL F_0050b530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x50b530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  int * piVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  
  piVar1 = (int *)((int)this + 0x90);
  iVar6 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
  if (iVar6 == 2) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xa0))(this GEN_EDX_FWD);
  }
  else {
    iVar6 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
    if (iVar6 == 1) {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x74))(this GEN_EDX_ARG);
      bVar7 = 1;
      goto LAB_0050b57b;
    }
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x70))(this GEN_EDX_ARG);
  }
  bVar7 = 0;
LAB_0050b57b: ;
  if (*(char *)((int)this + 0x60) != -1) {
    if (*(int *)((int)this + 0x34) == 1) {
      *(char *)((int)this + 99) = *(char *)((int)this + 0x60);
      uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x30))(this GEN_EDX_ARG);
      if ((char)uVar5 != '\0') {
        F_0050a280(REFG(void * PTR32, 0x1375aec) GEN_EDX_ARG,this);
      }
    }
    else {
      iVar6 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
      if (iVar6 == 1) {
        *(undefined1 *)((int)this + 99) = *(undefined1 *)((int)this + 0x62);
        *(undefined1 *)((int)this + 0x60) = *(undefined1 *)((int)this + 0x62);
      }
    }
  }
  piVar1 = (int *)((int)this + 0x88);
  iVar6 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
  if (iVar6 != 3) {
    puVar2 = (undefined4 *)((int)this + 0x8c);
    uVar4 = _InterlockedExchangeAdd((volatile long *)(puVar2), 0);
    switch((unsigned int)(uintptr_t)(uVar4)) {
    case 2: ;
    case 3: ;
      piVar3 = (int *)((int)this + 0x80);
      do {
        iVar6 = _InterlockedExchange((volatile long *)(piVar3), (long)(1));
      } while (iVar6 != 0);
      _InterlockedExchange((volatile long *)(piVar3), (long)(0));
      if ((*(uint *)((int)this + 0x30) & 0xc000000) != 0) {
        return bVar7;
      }
      _InterlockedExchange((volatile long *)(puVar2), (long)(7));
    case 10: ;
    case 0xc: ;
      iVar6 = 2;
      break;
    default: ;
      _InterlockedExchange((volatile long *)(piVar1), (long)(2));
      return bVar7;
    case 8: ;
      iVar6 = 3;
    }
    _InterlockedExchange((volatile long *)(piVar1), (long)(iVar6));
    return bVar7;
  }
  return bVar7;
}

/* ref: FUN_0050b680 */
GEN_NOFRAME uint GEN_THISCALL F_0050b680(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x50b680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004296a0(0x18,0,0x12e);
  *(uint *)((int)this + 4) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
  return (uint)this;
}

/* ref: FUN_0050b6c0 */
GEN_FRAME uint GEN_THISCALL F_0050b6c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x50b6c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 uVar1;
  uint uVar2;
  int * piVar3;
  undefined * this_00;
  int * piVar4;
  
  uVar1 = (*(uint *)&gen_args[1]);
  uVar2 = F_005056f0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(uint *)&gen_args[1]));
  if (-1 < (int)uVar2) {
    piVar4 = *((int * PTR32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + uVar2 * 4)));
    *piVar4 = *piVar4 + 1;
    return uVar2;
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) < 1) {
    uVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) - *(int *)(*(undefined * PTR32 *)&gen_args[0]) >> 2;
    this_00 = (undefined *)F_00406b90(0x108,0,0);
    if (this_00 == (undefined *)0x0) {
      (*(uint *)&gen_args[1]) = 0;
      F_00529de0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(uint *)&gen_args[1]));
      return uVar2;
    }
    (*(uint *)&gen_args[1]) = F_0051c520(this_00 GEN_EDX_ARG,uVar1);
    F_00529de0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(uint *)&gen_args[1]));
    return uVar2;
  }
  piVar4 = *(int * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]);
  uVar2 = 0;
  while( true ) {
    if (piVar4 == *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) {
      return 0xffffffff;
    }
    if (*piVar4 == 0) break;
    piVar4 = piVar4 + 1;
    uVar2 = uVar2 + 1;
  }
  piVar3 = (int *)F_00406b90(0x108,0,0);
  if (piVar3 == (int *)0x0) {
    *piVar4 = 0;
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) - 1;
    return uVar2;
  }
  *piVar3 = 0;
  F_00c48350(piVar3 + 1,0,0x104);
  F_00c49908(piVar3 + 1,0x103,(*(uint *)&gen_args[1]));
  *piVar3 = *piVar3 + 1;
  *piVar4 = (int)piVar3;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) - 1;
  return uVar2;
}

/* ref: FUN_0050b800 */
GEN_FRAME uint GEN_THISCALL F_0050b800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x50b800u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  uVar2 = (*(uint *)&gen_args[1]);
  if (*(char *)(REFG(int, 0x137104c) + 8) != '\0') {
    _InterlockedExchange((volatile long *)(((undefined4 *)((*(uint *)&gen_args[1]) + 0x8c))), (long)(0xb));
    _InterlockedExchange((volatile long *)(((undefined4 *)((*(uint *)&gen_args[1]) + 0x88))), (long)(2));
    return (*(uint *)&gen_args[1]) + 0x88;
  }
  if (((*(int *)&gen_args[2]) != 0) && (*(char *)((*(int *)&gen_args[2]) + 0x22) != '\0')) {
    *(byte *)((*(uint *)&gen_args[1]) + 0x58) = *(byte *)((*(uint *)&gen_args[1]) + 0x58) | 0x20;
    return (*(uint *)&gen_args[1]);
  }
  bVar1 = F_00504070((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(uint *)&gen_args[1]));
  if (bVar1 != 0) {
    _InterlockedExchange((volatile long *)(((undefined4 *)(uVar2 + 0x8c))), (long)(2));
    puVar3 = &(*(uint *)&gen_args[1]);
    uVar2 = F_004ff570(*(undefined4 *)(uVar2 + 0x2c));
    uVar2 = F_00529340(((undefined *)GEN_TOP(((int)((undefined *)(uint)((*(undefined * PTR32 *)&gen_args[0]))) + uVar2 * 0x18 + 0xc74))) GEN_EDX_ARG,puVar3);
    return uVar2;
  }
  uVar2 = F_00509bb0(((undefined *)(uint)((*(undefined * PTR32 *)&gen_args[0]))) GEN_EDX_ARG,uVar2);
  return uVar2;
}

/* ref: FUN_0050b890 */
GEN_FRAME unsigned int GEN_THISCALL F_0050b890(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x50b890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  undefined * this_00;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int * piVar7;
  int iVar8;
  undefined4 * puVar9;
  uint * puVar10;
  int * piVar11;
  uint * puVar12;
  uint uVar13;
  int * local_28;
  int local_14;
  uint * local_10;
  
  if (*(int *)((int)this + 0xdc4) != *(int *)((int)this + 0xdc8)) {
    uVar5 = *(int *)((int)this + 0xdc8) - *(int *)((int)this + 0xdc4) >> 2;
    uVar13 = 0;
    if (uVar5 != 0) {
      do {
        iVar8 = *((int *)GEN_TOP((*(int *)((int)this + 0xdc4) + uVar13 * 4)));
        if (iVar8 != 0) {
          gen_imp_EnterCriticalSection(*(LPCRITICAL_SECTION *)(iVar8 + 0x84));
          piVar11 = (int *)(iVar8 + 0x90);
          iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar11), 0);
          if (iVar2 == 1) {
            F_00508150(*(undefined * PTR32 *)((int)this + 0xc) GEN_EDX_ARG,iVar8);
          }
          else {
            F_00508060(*(undefined * PTR32 *)((int)this + 0xc) GEN_EDX_ARG,iVar8);
          }
          *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xdc4) + uVar13 * 4))) = 0;
          gen_imp_LeaveCriticalSection(*(LPCRITICAL_SECTION *)(iVar8 + 0x84));
          if (uVar5 != *(int *)((int)this + 0xdc8) - *(int *)((int)this + 0xdc4) >> 2)
          goto LAB_0050b9a1;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar5);
    }
    uVar13 = 0;
    uVar5 = *(int *)((int)this + 0xdc8) - *(int *)((int)this + 0xdc4) >> 2;
    if (uVar5 != 0) {
      piVar11 = *(int * PTR32 *)((int)this + 0xdc4);
      do {
        if (*piVar11 != 0) goto LAB_0050b9a1;
        uVar13 = uVar13 + 1;
        piVar11 = piVar11 + 1;
      } while (uVar13 < uVar5);
    }
    iVar8 = *(int *)((int)this + 0xdc4);
    if (iVar8 != *(int *)((int)this + 0xdc8)) {
      F_00c46e20(iVar8,*(int *)((int)this + 0xdc8),0);
      *(int *)((int)this + 0xdc8) = iVar8;
    }
  }
LAB_0050b9a1: ;
  piVar11 = (int *)((int)this + 0xd2c);
  local_14 = 7;
  puVar10 = ((uint *)GEN_TOP((*(int *)((int)this + 0xda4) + *(int *)((int)this + 0xd44) +
                     *(int *)((int)this + 0xdbc) + *(int *)((int)this + 0xd8c) + *piVar11 +
                     *(int *)((int)this + 0xd74) + *(int *)((int)this + 0xd5c))));
  puVar12 = (uint *)((int)this + 0xc80);
  local_10 = puVar10;
  do {
    uVar5 = puVar12[1];
    while (uVar5 != 0) {
      bVar3 = false;
      if ((int *)puVar12[-3] == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)puVar12[-3];
      }
      uVar5 = *puVar12 >> 2;
      if (*(uint *)(iVar8 + 8) <= uVar5) {
        uVar5 = uVar5 - *(uint *)(iVar8 + 8);
      }
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar8 + 4) + uVar5 * 4))) + (*puVar12 & 3) * 4)));
      gen_imp_EnterCriticalSection(*(LPCRITICAL_SECTION *)(iVar2 + 0x84));
      piVar7 = (int *)(iVar2 + 0x88);
      iVar8 = _InterlockedExchangeAdd((volatile long *)(piVar7), 0);
      if (iVar8 == 3) {
LAB_0050bad0: ;
        if (puVar12[1] != 0) {
          *puVar12 = *puVar12 + 1;
          if (puVar12[-1] * 4 <= *puVar12) {
            *puVar12 = 0;
          }
          uVar5 = puVar12[1] - 1;
          puVar12[1] = uVar5;
          if (uVar5 == 0) {
            *puVar12 = 0;
          }
        }
      }
      else {
        piVar1 = (int *)(iVar2 + 0x8c);
        iVar8 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
        if (iVar8 == 7) {
          iVar8 = _InterlockedExchangeAdd((volatile long *)(piVar7), 0);
          if (iVar8 != 3) {
            piVar7 = (int *)(iVar2 + 0x90);
            iVar8 = _InterlockedExchangeAdd((volatile long *)(piVar7), 0);
            if (iVar8 == 1) {
              F_00508150(*(undefined * PTR32 *)((int)this + 0xc) GEN_EDX_ARG,iVar2);
            }
            else {
              F_00508060(*(undefined * PTR32 *)((int)this + 0xc) GEN_EDX_ARG,iVar2);
            }
            uVar13 = 0;
            uVar5 = *(int *)((int)this + 0xdc8) - *(int *)((int)this + 0xdc4) >> 2;
            if (uVar5 != 0) {
              piVar7 = *(int * PTR32 *)((int)this + 0xdc4);
              do {
                if (*piVar7 == iVar2) {
                  (*(int * PTR32 *)((int)this + 0xdc4))[uVar13] = 0;
                  break;
                }
                uVar13 = uVar13 + 1;
                piVar7 = piVar7 + 1;
              } while (uVar13 < uVar5);
            }
            goto LAB_0050bad0;
          }
        }
        if (puVar10 < 0x20) {
          F_00509bb0(this GEN_EDX_ARG,iVar2);
          local_10 = (uint *)((int)puVar10 + 1);
          goto LAB_0050bad0;
        }
        bVar3 = true;
      }
      gen_imp_LeaveCriticalSection(*(LPCRITICAL_SECTION *)(iVar2 + 0x84));
      puVar10 = local_10;
      if (bVar3) break;
      uVar5 = puVar12[1];
    }
    puVar12 = puVar12 + 6;
    local_14 = local_14 - 1;
  } while (local_14 != 0);
  local_10 = (uint *)((int)this + 0xd28);
  local_14 = 7;
  puVar10 = local_10;
  do {
    uVar5 = puVar10[1];
    while (uVar5 != 0) {
      bVar3 = false;
      if ((int *)puVar10[-3] == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)puVar10[-3];
      }
      uVar5 = *puVar10 >> 2;
      if (*(uint *)(iVar8 + 8) <= uVar5) {
        uVar5 = uVar5 - *(uint *)(iVar8 + 8);
      }
      this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar8 + 4) + uVar5 * 4))) + (*puVar10 & 3) * 4)));
      gen_imp_EnterCriticalSection(*(LPCRITICAL_SECTION *)((int)this_00 + 0x84));
      piVar7 = (int *)((int)this_00 + 0x80);
      do {
        iVar8 = _InterlockedExchange((volatile long *)(piVar7), (long)(1));
      } while (iVar8 != 0);
      _InterlockedExchange((volatile long *)(piVar7), (long)(0));
      if ((*(uint *)((int)this_00 + 0x30) & 0xc000000) == 0) {
        bVar4 = F_0050b530(this_00 GEN_EDX_ARG,0);
        if (bVar4 == 0) {
          F_00508060(*(undefined * PTR32 *)((int)this + 0xc) GEN_EDX_ARG,this_00);
        }
        else {
          F_00508150(*(undefined * PTR32 *)((int)this + 0xc) GEN_EDX_ARG,this_00);
        }
        uVar13 = 0;
        uVar5 = *(int *)((int)this + 0xdc8) - *(int *)((int)this + 0xdc4) >> 2;
        if (uVar5 != 0) {
          puVar9 = *(undefined4 * PTR32 *)((int)this + 0xdc4);
          do {
            if ((undefined *)*puVar9 == this_00) {
              (*(undefined4 * PTR32 *)((int)this + 0xdc4))[uVar13] = 0;
              break;
            }
            uVar13 = uVar13 + 1;
            puVar9 = puVar9 + 1;
          } while (uVar13 < uVar5);
        }
        if (puVar10[1] != 0) {
          *puVar10 = *puVar10 + 1;
          if (puVar10[-1] * 4 <= *puVar10) {
            *puVar10 = 0;
          }
          uVar5 = puVar10[1] - 1;
          puVar10[1] = uVar5;
          if (uVar5 == 0) {
            *puVar10 = 0;
          }
        }
      }
      else {
        bVar3 = true;
      }
      gen_imp_LeaveCriticalSection(*(LPCRITICAL_SECTION *)((int)this_00 + 0x84));
      if (bVar3) break;
      uVar5 = puVar10[1];
    }
    puVar10 = puVar10 + 6;
    local_14 = local_14 - 1;
  } while (local_14 != 0);
  *(undefined4 *)((int)this + 0xc6c) = 0;
  *(undefined4 *)((int)this + 0xc70) = 0;
  uVar5 = 0;
  piVar7 = piVar11;
  do {
    if (*piVar7 != 0) goto LAB_0050bc8b;
    uVar5 = uVar5 + 1;
    piVar7 = piVar7 + 6;
  } while (uVar5 < 7);
  uVar5 = 0;
  piVar7 = (int *)((int)this + 0xc84);
  while (*piVar7 == 0) {
    uVar5 = uVar5 + 1;
    piVar7 = piVar7 + 6;
    if (6 < uVar5) {
      return 0;
    }
  }
LAB_0050bc8b: ;
  local_14 = 7;
  *(int *)((int)this + 0xc6c) =
       *(int *)((int)this + 0xd14) + *(int *)((int)this + 0xcfc) + *(int *)((int)this + 0xce4) +
       *(int *)((int)this + 0xccc) + *(int *)((int)this + 0xcb4) + *(int *)((int)this + 0xc9c) +
       *(int *)((int)this + 0xc84) +
       *(int *)((int)this + 0xda4) + *(int *)((int)this + 0xd44) + *(int *)((int)this + 0xdbc) +
       *(int *)((int)this + 0xd8c) + *piVar11 + *(int *)((int)this + 0xd74) +
       *(int *)((int)this + 0xd5c);
  do {
    uVar5 = *local_10;
    uVar13 = local_10[1] + uVar5;
    local_28 = (int *)0x0;
    if (((int *)local_10[-3] != (int *)0x0) &&
       (puVar9 = *(undefined4 * PTR32 *)local_10[-3], puVar9 != (undefined4 *)0x0)) {
      local_28 = (int *)*puVar9;
    }
    for (; uVar5 != uVar13; uVar5 = uVar5 + 1) {
      if (local_28 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *local_28;
      }
      uVar6 = uVar5 >> 2;
      if (*(uint *)(iVar8 + 8) <= uVar6) {
        uVar6 = uVar6 - *(uint *)(iVar8 + 8);
      }
      iVar8 = *((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar8 + 4) + uVar6 * 4))) + (uVar5 & 3) * 4))) + 8)));
      if (((iVar8 == 0x6d646c) || (iVar8 == 0x6d74726c)) || (iVar8 == 0x746578)) {
        *(int *)((int)this + 0xc70) = *(int *)((int)this + 0xc70) + 1;
      }
    }
    local_10 = local_10 + 6;
    local_14 = local_14 - 1;
  } while (local_14 != 0);
  local_14 = 7;
  local_10 = (uint *)((int)this + 0xc80);
  do {
    uVar5 = *local_10;
    uVar13 = local_10[1] + uVar5;
    local_28 = (int *)0x0;
    if (((int *)local_10[-3] != (int *)0x0) &&
       (puVar9 = *(undefined4 * PTR32 *)local_10[-3], puVar9 != (undefined4 *)0x0)) {
      local_28 = (int *)*puVar9;
    }
    for (; uVar5 != uVar13; uVar5 = uVar5 + 1) {
      if (local_28 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *local_28;
      }
      uVar6 = uVar5 >> 2;
      if (*(uint *)(iVar8 + 8) <= uVar6) {
        uVar6 = uVar6 - *(uint *)(iVar8 + 8);
      }
      iVar8 = *((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar8 + 4) + uVar6 * 4))) + (uVar5 & 3) * 4))) + 8)));
      if (((iVar8 == 0x6d646c) || (iVar8 == 0x6d74726c)) || (iVar8 == 0x746578)) {
        *(int *)((int)this + 0xc70) = *(int *)((int)this + 0xc70) + 1;
      }
    }
    local_10 = local_10 + 6;
    local_14 = local_14 - 1;
  } while (local_14 != 0);
  return 0;
}

/* ref: FUN_0050be10 */
GEN_FRAME unsigned int GEN_THISCALL F_0050be10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x50be10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  code * pcVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  undefined4 local_18;
  undefined4 local_14;
  int local_c;
  
  if (((*(char *)(REFG(int, 0x137104c) + 8) == '\0') &&
      (*(int *)((int)this + 0xde4) != *(int *)((int)this + 0xde8))) &&
     ((*(byte *)(REFG(int, 0x13712a4) + 0x30) & 1) != 0)) {
    uVar9 = F_00427d90();
    if (*(char *)((int)this + 0x4d) == '\0') {
      iVar8 = (*(int *)((int)this + 0x48) + 1) % 10;
      *(int *)((int)this + 0x48) = iVar8;
      local_c = 10;
    }
    else {
      iVar8 = 0;
      local_c = 1;
      *(undefined1 *)((int)this + 0x4d) = 0;
    }
    iVar3 = *(int *)((int)this + 0xde8);
    iVar4 = *(int *)((int)this + 0xde4);
    for (; iVar8 < iVar3 - iVar4 >> 2; iVar8 = iVar8 + local_c) {
      piVar5 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xde4) + iVar8 * 4)));
      piVar1 = piVar5 + 0x22;
      iVar10 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
      if (iVar10 == 2) {
        piVar2 = piVar5 + 0x23;
        iVar10 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
        if (iVar10 == 7) {
          iVar10 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
          if (iVar10 != 3) {
            local_14 = (undefined4)(uVar9 >> 0x20);
            local_18 = (undefined4)uVar9;
            uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x38))(piVar5 GEN_EDX_ARG,local_18,local_14);
            if (uVar7 == 1) {
              piVar1 = piVar5 + 0x20;
              do {
                iVar10 = _InterlockedExchange((volatile long *)(piVar1), (long)(1));
              } while (iVar10 != 0);
              _InterlockedExchange((volatile long *)(piVar1), (long)(0));
              if ((piVar5[0xc] & 0xc000000U) == 0) {
                gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)piVar5[0x21]);
                if (((byte)piVar5[0x17] & 3) != 1) {
                  piVar5[0x17] = piVar5[0x17] & 0xfffffffdU | 1;
                }
                LOCK();
                piVar5[0x24] = 1;
                UNLOCK();
                pcVar6 = *(gen_code32 *)(*piVar5 + 8);
                piVar5[0xd] = -0x14;
                uVar7 = (*pcVar6)(piVar5);
                piVar5[0xb] = 5 - (uint)((uVar7 & 0xff) != 0);
                F_0050b800(this GEN_EDX_ARG,piVar5,0);
                iVar10 = piVar5[0x21];
override_prt_50bfec_f1b3cf7: ;
                gen_imp_LeaveCriticalSection(iVar10);
              }
            }
            else if (uVar7 == 2) {
              piVar1 = piVar5 + 0x20;
              do {
                iVar10 = _InterlockedExchange((volatile long *)(piVar1), (long)(1));
              } while (iVar10 != 0);
              _InterlockedExchange((volatile long *)(piVar1), (long)(0));
              if ((piVar5[0xc] & 0xc000000U) == 0) {
                gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)piVar5[0x21]);
                F_00508150(*(undefined * PTR32 *)((int)this + 0xc) GEN_EDX_ARG,piVar5);
                iVar10 = piVar5[0x21];
                goto override_prt_50bfec_f1b3cf7;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_0050c050 */
GEN_FRAME uint GEN_THISCALL F_0050c050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x50c050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004296a0(0x18,0,0x12e);
  *(uint *)((int)this + 4) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = (&REFG(undefined4, 0x10993c0))[(int)(param_1)];
  return (uint)this;
}

/* ref: FUN_0050c0b0 */
GEN_FRAME byte GEN_THISCALL F_0050c0b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x50c0b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined * pvVar5;
  undefined4 * puVar6;
  int iVar7;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)(uint)*((ushort *)GEN_TOP(((*(int * PTR32 *)&gen_args[1]) + 1)));
  (*(int * PTR32 *)(gen_frame + 0x14)) = (*(int * PTR32 *)&gen_args[1]) + 2;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x48))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_FWD);
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
  iVar7 = uVar2 + uVar3;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) + iVar7;
  pvVar4 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x18))) * 4)));
  if (pvVar4 == (undefined *)0x0) {
    pvVar4 = (undefined *)F_00406b90(0x18,0,0);
    if (pvVar4 == (undefined *)0x0) {
      pvVar4 = (undefined *)0x0;
    }
    else {
      pvVar4 = (undefined *)F_0050c050(pvVar4 GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x18)));
    }
    *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x18))) * 4))) = pvVar4;
  }
  *(int *)((int)pvVar4 + 0x10) = *(int *)((int)pvVar4 + 0x10) + iVar7;
  F_00526bc0(pvVar4 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x10)),(*(int * PTR32 *)(gen_frame + 0x14)));
  if (*(int *)((int)pvVar4 + 4) == (*(int *)(gen_frame + 0x10))) {
    pvVar5 = (undefined *)F_00406b90(0x20,0,0);
    if (pvVar5 == (undefined *)0x0) {
      (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
    }
    else {
      pvVar5 = (undefined *)F_00507840(pvVar5 GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x18)),(*(int * PTR32 *)(gen_frame + 0x14)));
      (*(undefined * PTR32 *)(gen_frame + 0x18)) = pvVar5;
    }
    (*(int *)(gen_frame + 0xc)) = *(*(int * PTR32 *)(gen_frame + 0x14));
    puVar6 = (undefined4 *)F_004296a0(0x18,0,0x12e);
    *puVar6 = *(undefined4 *)((int)pvVar4 + 4);
    puVar6[1] = *(undefined4 *)((int)pvVar4 + 4);
    puVar6[2] = *(undefined4 *)((int)pvVar4 + 4);
    *(undefined2 *)(puVar6 + 5) = 0;
    if (puVar6 + 3 != (int *)0x0) {
      puVar6[3] = (*(int *)(gen_frame + 0xc));
      puVar6[4] = (*(undefined * PTR32 *)(gen_frame + 0x18));
    }
    F_00525f50(pvVar4 GEN_EDX_ARG,&(*(int *)(gen_frame + 0xc)),puVar6,0);
  }
  else {
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x10)) + 0x10);
  }
  F_00529340((*(undefined * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[1]));
  *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x18) = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x18) + iVar7;
  while( true ) {
    if ((*(uint *)((int)pvVar4 + 0x10) <= *(uint *)((int)pvVar4 + 0x14)) &&
       (*(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x18) <= *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x1c))) {
      return 1;
    }
    uVar2 = F_0050b070((*(undefined * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG);
    if ((uVar2 == 0) && (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x10) == 0)) break;
    *(int *)((int)pvVar4 + 0x10) = *(int *)((int)pvVar4 + 0x10) - uVar2;
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) - uVar2;
    if (*(int *)((int)pvVar4 + 0x10) < 0) {
      *(undefined4 *)((int)pvVar4 + 0x10) = 0;
    }
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) < 0) {
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = 0;
    }
  }
  return 0;
}

/* ref: FUN_0050c230 */
GEN_FRAME byte GEN_THISCALL F_0050c230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x50c230u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint * puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined * pvVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined * this_00;
  
  puVar1 = ((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) +
                   ((*(uint *)((*(int *)&gen_args[1]) + 4) >> 0x10) + (*(uint *)((*(int *)&gen_args[1]) + 4) & 0xffff) * 0x14) * 4
                   )));
  this_00 = (undefined *)*puVar1;
  if (this_00 == (undefined *)0x0) {
    pvVar4 = (undefined *)F_00406b90(0x10,0,0);
    if (pvVar4 != (undefined *)0x0) {
      *(undefined4 *)((int)pvVar4 + 8) = 0;
      uVar5 = F_004296a0(0x18,0,0x12e);
      *(uint *)((int)pvVar4 + 4) = uVar5;
      *(uint *)uVar5 = uVar5;
      *((int *)GEN_TOP((*(int *)((int)pvVar4 + 4) + 4))) = *(int *)((int)pvVar4 + 4);
      *((int *)GEN_TOP((*(int *)((int)pvVar4 + 4) + 8))) = *(int *)((int)pvVar4 + 4);
      *((undefined1 *)GEN_TOP((*(int *)((int)pvVar4 + 4) + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((*(int *)((int)pvVar4 + 4) + 0x15))) = 1;
      this_00 = pvVar4;
    }
    *puVar1 = (uint)this_00;
  }
  puVar6 = (undefined4 *)((*(int *)&gen_args[1]) + 8);
  F_00526d10(this_00 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x8)),puVar6);
  if (*(int *)((int)this_00 + 4) == (*(int *)(gen_frame + 0x8))) {
    pvVar4 = (undefined *)F_00406b90(0x10,0,0);
    if (pvVar4 == (undefined *)0x0) {
      pvVar4 = (undefined *)0x0;
    }
    else {
      *(undefined4 *)((int)pvVar4 + 8) = 0;
      uVar5 = F_004296a0(0x18,0,0x12e);
      *(uint *)((int)pvVar4 + 4) = uVar5;
      *(uint *)uVar5 = uVar5;
      *((int *)GEN_TOP((*(int *)((int)pvVar4 + 4) + 4))) = *(int *)((int)pvVar4 + 4);
      *((int *)GEN_TOP((*(int *)((int)pvVar4 + 4) + 8))) = *(int *)((int)pvVar4 + 4);
      *((undefined1 *)GEN_TOP((*(int *)((int)pvVar4 + 4) + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((*(int *)((int)pvVar4 + 4) + 0x15))) = 1;
    }
    uVar2 = *puVar6;
    puVar6 = (undefined4 *)F_004296a0(0x18,0,0x12e);
    *puVar6 = *(undefined4 *)((int)this_00 + 4);
    puVar6[1] = *(undefined4 *)((int)this_00 + 4);
    puVar6[2] = *(undefined4 *)((int)this_00 + 4);
    *(undefined2 *)(puVar6 + 5) = 0;
    if (puVar6 + 3 != (undefined4 *)0x0) {
      puVar6[3] = uVar2;
      puVar6[4] = pvVar4;
    }
    F_005261f0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),puVar6,0);
  }
  else {
    pvVar4 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x8)) + 0x10);
  }
  iVar3 = (*(int *)&gen_args[1]);
  puVar6 = (undefined4 *)((*(int *)&gen_args[1]) + 0xc);
  F_00526d80(pvVar4 GEN_EDX_ARG,&(*(int *)&gen_args[1]),puVar6);
  if (*(int *)((int)pvVar4 + 4) == (*(int *)&gen_args[1])) {
    uVar2 = *puVar6;
    puVar6 = (undefined4 *)F_004296a0(0x18,0,0x12e);
    *puVar6 = *(undefined4 *)((int)pvVar4 + 4);
    puVar6[1] = *(undefined4 *)((int)pvVar4 + 4);
    puVar6[2] = *(undefined4 *)((int)pvVar4 + 4);
    *(undefined2 *)(puVar6 + 5) = 0;
    if (puVar6 + 3 != (undefined4 *)0x0) {
      puVar6[3] = uVar2;
      puVar6[4] = iVar3;
    }
    F_005262d0(pvVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),puVar6,0);
    return 1;
  }
  return 0;
}

/* ref: FUN_0050c3d0 */
GEN_NOFRAME byte GEN_THISCALL F_0050c3d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x50c3d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined * this_00;
  byte bVar1;
  
  bVar1 = *(byte *)((int)this + 0x58);
  if ((bVar1 & 0x20) != 0) {
    *(byte *)((int)this + 0x58) = bVar1 & 0xdf;
    this_00 = REFG(void * PTR32, 0x1375aec);
    lpCriticalSection = (LPCRITICAL_SECTION)((int)REFG(void * PTR32, 0x1375aec) + 0x20);
    gen_imp_EnterCriticalSection(lpCriticalSection);
    gen_imp_EnterCriticalSection(*(LPCRITICAL_SECTION *)((int)this + 0x84));
    F_0050b800(this_00 GEN_EDX_ARG,this,0);
    gen_imp_LeaveCriticalSection(*(undefined4 *)((int)this + 0x84));
    bVar1 = gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return bVar1;
}

/* ref: FUN_0050c420 */
GEN_FRAME uint GEN_THISCALL F_0050c420(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x50c420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[44])REFP(0x109a0f4));
  F_005052d0(this GEN_EDX_FWD);
  iVar1 = *(int *)((int)this + 0xd4);
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 0xdc) - iVar1) / 0x28) * 0x28,0xcb);
  }
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  F_00526f00((undefined *)((int)this + 0xa0) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0xa4),
               *(undefined4 * PTR32 *)((int)this + 0xa4));
  F_00429760(*(undefined4 *)((int)this + 0xa4),0x30,0xd6);
  piVar2 = *(int * PTR32 *)((int)this + 0x98);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  if (piVar2 != (int *)0x0) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x98));
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar3 = F_00508230(this GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_0050c4f0 */
GEN_FRAME byte GEN_THISCALL F_0050c4f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x50c4f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int iVar2;
  byte bVar3;
  DWORD DVar4;
  uint uVar5;
  bool bVar6;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  DVar4 = gen_imp_GetCurrentThreadId();
  if (*(DWORD *)((int)this + 0x40) == DVar4) {
    piVar1 = (int *)((int)this + 0x38);
    iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
    bVar6 = iVar2 != 0;
    if (bVar6) goto LAB_0050c53a;
  }
  else {
    bVar6 = false;
  }
  gen_imp_EnterCriticalSection((int)this + 0x20);
  gen_imp_EnterCriticalSection(param_1[0x21]);
LAB_0050c53a: ;
  piVar1 = param_1 + 0x25;
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = iVar2 - 1;
  UNLOCK();
  if (iVar2 - 1 == 0) {
    bVar3 = F_00501140(this GEN_EDX_ARG,param_1);
    F_00507f80(*(undefined * PTR32 *)((int)this + 0xc) GEN_EDX_ARG,param_1);
    F_00501aa0(param_1 GEN_EDX_ARG);
    F_0050a190(this GEN_EDX_ARG,param_1);
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0xc))(param_1 GEN_EDX_ARG,0);
    if ((char)param_1[0x18] != -1) {
      uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x30))(param_1 GEN_EDX_ARG);
      if ((char)uVar5 != '\0') {
        F_00507460(this GEN_EDX_ARG,param_1);
      }
    }
    if (bVar3 == 0) {
      (*(int * PTR32 *)(gen_frame + 0x8)) = param_1;
      F_005291e0((undefined *)((int)this + 0xdd4) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x8)));
      bVar3 = F_00507910(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0x8)));
    }
    else {
      uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x90))(param_1 GEN_EDX_ARG);
      if ((char)uVar5 != '\0') {
        ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x94))(param_1 GEN_EDX_ARG);
      }
      bVar3 = F_0050c0b0(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,param_1);
    }
  }
  else {
    iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
    bVar3 = 0 < iVar2;
  }
  if (!bVar6) {
    gen_imp_LeaveCriticalSection(param_1[0x21]);
    gen_imp_LeaveCriticalSection((int)this + 0x20);
  }
  return bVar3;
}

/* ref: FUN_0050c620 */
GEN_FRAME uint F_0050c620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x50c620u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if (param_1 == 0) {
    return 0;
  }
  bVar1 = F_0050c4f0(REFG(void * PTR32, 0x1375aec) GEN_EDX_ARG,param_1,param_2,param_3);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_0050c650 */
GEN_FRAME uint GEN_THISCALL F_0050c650(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x50c650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  undefined * this_00;
  int * piVar3;
  int * piVar4;
  ulonglong uVar5;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  piVar2 = *(int * PTR32 *)((int)this + 4);
  piVar4 = (int *)*piVar2;
  (*(int * PTR32 *)(gen_frame + 0x8)) = piVar2;
  if (piVar4 != piVar2) {
    do {
      this_00 = (undefined *)piVar4[4];
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) - *(int *)((int)this_00 + 0x18);
      F_0050adf0(this_00 GEN_EDX_FWD);
      F_00406ad0(this_00);
      if (*(char *)((int)piVar4 + 0x15) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x15);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x15);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != (*(int * PTR32 *)(gen_frame + 0x8)));
  }
  F_00524720(this GEN_EDX_ARG);
  F_00525940(this GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar5 = F_00429760(*(undefined4 *)((int)this + 4),0x18,0x12e);
  return (uint)uVar5;
}

/* ref: FUN_0050c700 */
GEN_FRAME unsigned int GEN_THISCALL F_0050c700(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x50c700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  char cVar2;
  undefined * pvVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  (*(int *)(gen_frame + 0x18)) = 0x14;
  do {
    (*(int * PTR32 *)(gen_frame + 0x20)) = this;
    (*(int *)(gen_frame + 0x1c)) = 0x14;
    do {
      pvVar3 = *(undefined * PTR32 *)this;
      (*(undefined * PTR32 *)(gen_frame + 0x24)) = pvVar3;
      if (pvVar3 != (undefined *)0x0) {
        piVar4 = *(int * PTR32 *)((int)pvVar3 + 4);
        (*(int * PTR32 *)(gen_frame + 0x14)) = piVar4;
        (*(int * PTR32 *)(gen_frame + 0x28)) = (int *)*piVar4;
        (*(int * PTR32 *)(gen_frame + 0x20)) = this;
        if ((int *)*piVar4 != piVar4) {
          do {
            pvVar3 = (undefined *)(*(int * PTR32 *)(gen_frame + 0x28))[4];
            piVar4 = *((int * PTR32 *)GEN_TOP((*(int *)((int)pvVar3 + 4) + 4)));
            cVar2 = *(char *)((int)piVar4 + 0x15);
            while (cVar2 == '\0') {
              F_00521220(pvVar3 GEN_EDX_FWD,piVar4[2]);
              piVar5 = (int *)*piVar4;
              F_00429760(piVar4,0x18,0x12e);
              piVar4 = piVar5;
              cVar2 = *(char *)((int)piVar5 + 0x15);
            }
            *((int *)GEN_TOP((*(int *)((int)pvVar3 + 4) + 4))) = *(int *)((int)pvVar3 + 4);
            *(undefined4 *)*(undefined4 *)((int)pvVar3 + 4) = *(undefined4 *)((int)pvVar3 + 4);
            *((int *)GEN_TOP((*(int *)((int)pvVar3 + 4) + 8))) = *(int *)((int)pvVar3 + 4);
            *(undefined4 *)((int)pvVar3 + 8) = 0;
            F_00525a80(pvVar3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)),**(undefined4 * PTR32 *)((int)pvVar3 + 4),
                         *(undefined4 * PTR32 *)((int)pvVar3 + 4));
            F_00429760(*(undefined4 *)((int)pvVar3 + 4),0x18,0x12e);
            F_00406ad0(pvVar3);
            if (*(char *)((int)(*(int * PTR32 *)(gen_frame + 0x28)) + 0x15) == '\0') {
              piVar4 = (int *)(*(int * PTR32 *)(gen_frame + 0x28))[2];
              if (*(char *)((int)piVar4 + 0x15) == '\0') {
                cVar2 = *(char *)(*piVar4 + 0x15);
                piVar5 = (int *)*piVar4;
                while (cVar2 == '\0') {
                  cVar2 = *(char *)(*piVar5 + 0x15);
                  piVar4 = piVar5;
                  piVar5 = (int *)*piVar5;
                }
                (*(int * PTR32 *)(gen_frame + 0x28)) = piVar4;
              }
              else {
                cVar2 = *(char *)((*(int * PTR32 *)(gen_frame + 0x28))[1] + 0x15);
                piVar5 = (int *)(*(int * PTR32 *)(gen_frame + 0x28))[1];
                piVar4 = (*(int * PTR32 *)(gen_frame + 0x28));
                while ((piVar6 = piVar5, cVar2 == '\0' && (piVar4 == (int *)piVar6[2]))) {
                  (*(int * PTR32 *)(gen_frame + 0x28)) = piVar6;
                  cVar2 = *(char *)(piVar6[1] + 0x15);
                  piVar5 = (int *)piVar6[1];
                  piVar4 = piVar6;
                }
                (*(int * PTR32 *)(gen_frame + 0x28)) = piVar6;
              }
            }
          } while ((*(int * PTR32 *)(gen_frame + 0x28)) != (*(int * PTR32 *)(gen_frame + 0x14)));
        }
        piVar4 = *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 4) + 4)));
        cVar2 = *(char *)((int)piVar4 + 0x15);
        while (cVar2 == '\0') {
          F_00521140((*(undefined * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,piVar4[2]);
          piVar5 = (int *)*piVar4;
          F_00429760(piVar4,0x18,0x12e);
          piVar4 = piVar5;
          cVar2 = *(char *)((int)piVar5 + 0x15);
        }
        *((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 4) + 4))) = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 4);
        *(undefined4 *)*(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 4) = *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 4);
        *((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 4) + 8))) = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 4);
        *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 8) = 0;
        F_005259e0((*(undefined * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),**(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 4),
                     *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 4));
        pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x24));
        F_00429760(*(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 4),0x18,0x12e);
        F_00406ad0(pvVar3);
        this = (*(int * PTR32 *)(gen_frame + 0x20));
      }
      this = (undefined *)((int)this + 4);
      iVar1 = (*(int *)(gen_frame + 0x1c)) - 1;
      (*(int *)(gen_frame + 0x1c)) = iVar1;
      (*(int * PTR32 *)(gen_frame + 0x20)) = this;
    } while (iVar1 != 0);
    iVar1 = (*(int *)(gen_frame + 0x18)) - 1;
    (*(int *)(gen_frame + 0x18)) = iVar1;
  } while (iVar1 != 0);
  return 0;
}

/* ref: FUN_0050c8c0 */
GEN_FRAME uint GEN_THISCALL F_0050c8c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50c8c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  char * param_4 = (char *)(uintptr_t)gen_a4;
  int param_5 = (int)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint * puVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  undefined4 uVar7;
  char * pcVar8;
  uint uVar9;
  
  uVar9 = ((uint *)(gen_frame + 0xc))[0];
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x1099854));
  *(undefined4 *)((int)this + 4) = *param_1;
  *(undefined4 *)((int)this + 8) = *param_2;
  *(undefined4 *)((int)this + 0xc) = *param_3;
  if (param_5 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined4 *)(param_5 + 4);
  }
  *(undefined4 *)((int)this + 0x10) = uVar7;
  if (param_5 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined4 *)(param_5 + 8);
  }
  *(undefined4 *)((int)this + 0x14) = uVar7;
  if (param_5 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined4 *)(param_5 + 0xc);
  }
  *(undefined4 *)((int)this + 0x18) = uVar7;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  if (param_5 == 0) {
    uVar7 = 5;
  }
  else {
    uVar7 = *(undefined4 *)(param_5 + 0x10);
  }
  *(undefined4 *)((int)this + 0x2c) = uVar7;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0xffffffec;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x50) = 0xf;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined1 *)((int)this + 0x3c) = 0;
  if (param_5 == 0) {
    bVar5 = 1;
  }
  else {
    bVar5 = *(byte *)(param_5 + 0x1d);
  }
  *(byte *)((int)this + 0x58) =
       *(byte *)((int)this + 0x58) ^ (*(byte *)((int)this + 0x58) ^ bVar5) & 1;
  if (param_5 == 0) {
    cVar4 = '\x01';
  }
  else {
    cVar4 = *(char *)(param_5 + 0x1e);
  }
  bVar5 = (cVar4 * '\x02' ^ *(byte *)((int)this + 0x58)) & 2 ^ *(byte *)((int)this + 0x58);
  *(byte *)((int)this + 0x58) = bVar5;
  if (param_5 == 0) {
    cVar4 = '\0';
  }
  else {
    cVar4 = *(char *)(param_5 + 0x1f);
  }
  bVar5 = (cVar4 << 2 ^ bVar5) & 4 ^ bVar5;
  *(byte *)((int)this + 0x58) = bVar5;
  if (param_5 == 0) {
    bVar6 = 0;
  }
  else {
    bVar6 = *(byte *)(param_5 + 0x21);
  }
  *(uint *)((int)this + 0x5c) = *(uint *)((int)this + 0x5c) & 0xf8000000;
  *(byte *)((int)this + 0x58) = (bVar6 & 1) * '\b' | bVar5 & 199;
  *(byte *)((int)this + 0x6c) = *(byte *)((int)this + 0x6c) & 0xfe;
  *(uint *)((int)this + 0x68) = *(uint *)((int)this + 0x68) & 0x80001388 | 5000;
  *(undefined4 *)((int)this + 0x60) = 0xffffffff;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  _InterlockedExchange((volatile long *)(((undefined4 *)((int)this + 0x80))), (long)(0));
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  iVar3 = REFG(int, 0x1375aec);
  puVar1 = (uint *)(REFG(int, 0x1375aec) + 0x68);
  uVar2 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  (*(uint *)(gen_frame + 0x20)) = 0xf;
  *(uint *)((int)this + 0x84) = iVar3 + 0x6c + (uVar2 & 0x7f) * 0x18;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0xc))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0xc))[0] = uVar9 & 0xffffff00;
  pcVar8 = param_4;
  do {
    cVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar4 != '\0');
  F_004e5c20(((uint *)(gen_frame + 0xc)) GEN_EDX_FWD,param_4,(int)pcVar8 - (int)(param_4 + 1));
  F_004e54d0((undefined *)((int)this + 0x3c) GEN_EDX_ARG,((uint *)(gen_frame + 0xc)),0,0xffffffff);
  if (0xf < (*(uint *)(gen_frame + 0x20))) {
    F_00429760(((uint *)(gen_frame + 0xc))[0],(*(uint *)(gen_frame + 0x20)) + 1,0x32);
  }
  bVar5 = *(byte *)((int)this + 0x58) >> 3 & 1;
  *(byte *)((int)this + 0x58) =
       *(byte *)((int)this + 0x58) ^ (bVar5 * '\b' ^ *(byte *)((int)this + 0x58)) & 8;
  if ((bVar5 != 0) && (*(int *)((int)this + 0x2c) == 5)) {
    *(undefined4 *)((int)this + 0x2c) = 4;
  }
  if ((*(byte *)((int)this + 0x58) & 1) != 0) {
    uVar9 = *(uint *)((int)this + 4) & 0xffff;
    if ((&REFG(undefined4, 0x10993c0))[(int)(uVar9)] == 0) {
      *(byte *)((int)this + 0x58) = *(byte *)((int)this + 0x58) & 0xfe;
    }
    else {
      bVar5 = F_00501290(uVar9,(int)this + 8);
      if (bVar5 == 0) {
        *(byte *)((int)this + 0x58) = *(byte *)((int)this + 0x58) & 0xfe;
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_0050cb10 */
GEN_FRAME uint GEN_THISCALL F_0050cb10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50cb10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::DefaultResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050cb50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50cb50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xa0,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050c8c0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
    this_00[0x26] = 0;
    this_00[0x27] = 0;
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_0050cbb0 */
GEN_NOFRAME uint GEN_THISCALL F_0050cbb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x50cbb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  uint in_EAX = 0;
  int * piVar2;
  uint uVar3;
  int iVar4;
  
  if ((*(int *)((int)this + 0xa8) != 0) &&
     (uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xa8) + 4))) + 0x12 + *(int *)((int)this + 0xa8)))),
     in_EAX = (uint)uVar1, uVar1 != 0)) {
    iVar4 = 0;
    uVar3 = in_EAX;
    do {
      in_EAX = *(uint *)((int)this + 0x124);
      if (*(int *)(in_EAX + iVar4) != 0) {
        if (*(int *)(in_EAX + iVar4) != 0) {
          F_0050c4f0(REFG(void * PTR32, 0x1375aec) GEN_EDX_FWD,*(int *)(in_EAX + iVar4),0,0);
        }
        for (piVar2 = *(int * PTR32 *)((int)this + 0x70); piVar2 != *(int * PTR32 *)((int)this + 0x74);
            piVar2 = piVar2 + 1) {
          if (*piVar2 == *((int *)GEN_TOP((iVar4 + *(int *)((int)this + 0x124))))) {
            F_00c46e20(piVar2,piVar2 + 1,(*(int *)((int)this + 0x74) - (int)(piVar2 + 1) >> 2) * 4);
            *(int *)((int)this + 0x74) = *(int *)((int)this + 0x74) - 4;
            break;
          }
        }
        in_EAX = *(uint *)((int)this + 0x124);
        *(undefined4 *)(iVar4 + in_EAX) = 0;
      }
      iVar4 = iVar4 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return in_EAX;
}

/* ref: Client::System::Resource::Handle::ModelResourceHandle::vf37 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0050cc60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x50cc60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)(this + 0x124) != 0) {
    F_0050cbb0(this GEN_EDX_FWD);
    return;
  }
  return;
}

/* ref: Client::System::Resource::Handle::ModelResourceHandle::vf40 */
GEN_NOFRAME uint GEN_THISCALL F_0050cc70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x50cc70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pMVar1;
  uint uVar2;
  
  pMVar1 = this + 0x8c;
  uVar2 = _InterlockedExchangeAdd((volatile long *)(((uint *)pMVar1)), 0);
  if (uVar2 == 7) {
    pMVar1 = this + 0x88;
    uVar2 = _InterlockedExchangeAdd((volatile long *)(((uint *)pMVar1)), 0);
    if (uVar2 != 3) {
      *(undefined4 *)(this + 0x15c) = 0xffffffff;
      *(undefined4 *)(this + 0x160) = 0xffffffff;
      *(undefined2 *)(this + 0x164) = 0;
      this[0x17e] = (undefined1)0x0;
      this[0x17f] = (undefined1)0x0;
      return 0xffffff00;
    }
  }
  if (*(int *)(this + 0x124) == 0) {
    return uVar2;
  }
  uVar2 = F_0050cbb0(this GEN_EDX_FWD);
  return uVar2;
}

/* ref: FUN_0050ccd0 */
GEN_FRAME uint GEN_THISCALL F_0050ccd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50ccd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int param_5 = (int)gen_a5;
  char cVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  char * pcVar5;
  char * pcVar6;
  
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(byte *)((int)this + 0xec) = *(byte *)((int)this + 0xec) & 0xe1;
  *(uint *)((int)this + 0xe8) = *(uint *)((int)this + 0xe8) & 0xf8000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x10999c4));
  *(undefined4 *)((int)this + 0xf0) = 0xffffffff;
  *(undefined4 *)((int)this + 0xf4) = 0xffffffff;
  *(undefined2 *)((int)this + 0xf8) = 0;
  *(byte *)((int)this + 0xec) = *(byte *)((int)this + 0xec) | 1;
  bVar4 = *(byte *)((int)this + 0xec);
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  if ((param_5 == 0) || (*(int *)(param_5 + 4) != REFG(int, 0x1302ff0))) {
    if (*(uint *)((int)this + 0x50) < 0x10) {
      pcVar6 = (char *)((int)this + 0x3c);
    }
    else {
      pcVar6 = *(char * PTR32 *)((int)this + 0x3c);
    }
    pcVar5 = pcVar6;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    iVar2 = (int)pcVar5 - (int)(pcVar6 + 1);
    if ((int)pcVar5 - (int)(pcVar6 + 1) != 0) {
      do {
        iVar3 = iVar2;
        iVar2 = iVar3 - 1;
        if (iVar2 < 0) goto LAB_0050cd8b;
      } while (pcVar6[iVar2] != '/');
      if (((-1 < iVar3) && (pcVar6[iVar3] != '-')) && (pcVar6[iVar3] != '_')) {
        return (uint)this;
      }
    }
LAB_0050cd8b: ;
    bVar4 = *(byte *)((int)this + 0xec);
  }
  *(byte *)((int)this + 0xec) = bVar4 & 0xfe;
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::TextureResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050cdb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50cdb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00406b90(0x104,0,0);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_0050ccd0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0050cde0 */
GEN_FRAME uint GEN_THISCALL F_0050cde0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50cde0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined1 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109a1ac));
  *(undefined4 *)((int)this + 0xb8) = 0xffff;
  return (uint)this;
}

/* ref: FUN_0050ce50 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0050ce50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x50ce50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((*(int *)((int)this + 0xa8) != 0) && (*(int *)((int)this + 0xa4) != 0)) {
    F_0050c4f0(REFG(void * PTR32, 0x1375aec) GEN_EDX_FWD,*(int *)((int)this + 0xa4),0,0);
    F_005075b0(this GEN_EDX_ARG,*(undefined4 *)((int)this + 0xa4));
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  return;
}

/* ref: FUN_0050ce90 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0050ce90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x50ce90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  
  if ((*(int *)((int)this + 0xa8) != 0) && (*(byte *)((int)this + 0xba) != 0)) {
    iVar4 = 0;
    uVar3 = (uint)*(byte *)((int)this + 0xba);
    do {
      iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0xa8) + iVar4 * 8)));
      if (iVar1 != 0) {
        for (piVar2 = *(int * PTR32 *)((int)this + 0x70); piVar2 != *(int * PTR32 *)((int)this + 0x74);
            piVar2 = piVar2 + 1) {
          if (*piVar2 == iVar1) {
            F_00c46e20(piVar2,piVar2 + 1,(*(int *)((int)this + 0x74) - (int)(piVar2 + 1) >> 2) * 4);
            *(int *)((int)this + 0x74) = *(int *)((int)this + 0x74) - 4;
            break;
          }
        }
        iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0xa8) + iVar4 * 8)));
        if (iVar1 != 0) {
          F_0050c4f0(REFG(void * PTR32, 0x1375aec) GEN_EDX_ARG,iVar1,0,0);
          *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa8) + iVar4 * 8))) = 0;
        }
        if (*(undefined * PTR32 *)((int)this + 0xa0) != (undefined *)0x0) {
          F_0061e550(*(undefined * PTR32 *)((int)this + 0xa0) GEN_EDX_ARG,iVar4,0);
        }
      }
      iVar4 = iVar4 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}

/* ref: Client::System::Resource::Handle::MaterialResourceHandle::vf40 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0050cf60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x50cf60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pMVar1;
  int iVar2;
  
  pMVar1 = this + 0x8c;
  iVar2 = _InterlockedExchangeAdd((volatile long *)(((int *)pMVar1)), 0);
  if (iVar2 == 7) {
    pMVar1 = this + 0x88;
    iVar2 = _InterlockedExchangeAdd((volatile long *)(((int *)pMVar1)), 0);
    if (iVar2 != 3) {
      return;
    }
  }
  F_0050ce90(this GEN_EDX_FWD);
  return;
}

/* ref: Client::System::Resource::Handle::MaterialResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050cf90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50cf90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00406b90(0xc4,0,0);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_0050cde0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0050cfc0 */
GEN_FRAME uint GEN_THISCALL F_0050cfc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50cfc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x1099a7c));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::ShaderCodeResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050d010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50d010u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xa4,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050c8c0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x1099a7c));
    this_00[0x26] = 0;
    this_00[0x27] = 0;
    this_00[0x28] = 0;
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_0050d080 */
GEN_FRAME uint GEN_THISCALL F_0050d080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50d080u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x1099b34));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::ShaderPackageResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050d0c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50d0c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xa0,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050c8c0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x1099b34));
    this_00[0x26] = 0;
    this_00[0x27] = 0;
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_0050d120 */
GEN_FRAME uint GEN_THISCALL F_0050d120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50d120u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109a264));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::TerrainResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050d160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50d160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xa0,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050c8c0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    this_00[0x26] = 0;
    this_00[0x27] = 0;
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x109a264));
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_0050d1c0 */
GEN_FRAME uint GEN_THISCALL F_0050d1c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50d1c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x1099bec));
  F_00b4d820((undefined *)((int)this + 0xa0) GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x100) = 0;
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::GrassZoneDataResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050d220(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50d220u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0x104,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050c8c0(this_00 GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]));
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
    this_00[0x26] = 0;
    this_00[0x27] = 0;
    F_00526b50(((undefined *)GEN_TOP(*REFG(undefined4 * PTR32, 0x1375aec))) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[5]),(*(undefined4 *)&gen_args[2]));
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x1099bec));
    F_00b4d820(this_00 + 0x28 GEN_EDX_ARG);
    this_00[0x40] = 0;
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_0050d2b0 */
GEN_FRAME uint GEN_THISCALL F_0050d2b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50d2b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * puVar1;
  int iVar2;
  
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x1099cdc));
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  F_00b505d0((undefined *)((int)this + 0xa8) GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x2f0) = 0;
  *(undefined4 *)((int)this + 0x2f4) = 0;
  *(undefined4 *)((int)this + 0x2f8) = 0;
  *(undefined4 *)((int)this + 0x2fc) = 0;
  puVar1 = (undefined4 *)((int)this + 0x300);
  iVar2 = 0xf;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  *(undefined4 *)((int)this + 0x3c0) = 0;
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::GrassGridDataResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050d340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50d340u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00406b90(0x3c4,0,0);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_0050d2b0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0050d370 */
GEN_FRAME uint GEN_THISCALL F_0050d370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50d370u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109a31c));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::EnvSetResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050d3c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50d3c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xa4,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050c8c0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    this_00[0x26] = 0;
    this_00[0x27] = 0;
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x109a31c));
    this_00[0x28] = 0;
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_0050d430 */
GEN_FRAME uint GEN_THISCALL F_0050d430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50d430u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109a3d4));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::SoundSetResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050d480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50d480u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xa4,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050c8c0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    this_00[0x26] = 0;
    this_00[0x27] = 0;
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x109a3d4));
    this_00[0x28] = 0;
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_0050d4f0 */
GEN_FRAME uint GEN_THISCALL F_0050d4f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50d4f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109a48c));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::AmbientSetResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050d540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50d540u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xa4,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050c8c0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    this_00[0x26] = 0;
    this_00[0x27] = 0;
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x109a48c));
    this_00[0x28] = 0;
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_0050d5b0 */
GEN_FRAME uint GEN_THISCALL F_0050d5b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50d5b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109a544));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::ObjectBehaviorSetResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050d600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50d600u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xa4,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050c8c0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    this_00[0x26] = 0;
    this_00[0x27] = 0;
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x109a544));
    this_00[0x28] = 0;
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_0050d670 */
GEN_FRAME uint GEN_THISCALL F_0050d670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50d670u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109a5fc));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::SkyVisibilityResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050d6c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50d6c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xa4,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050c8c0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    this_00[0x26] = 0;
    this_00[0x27] = 0;
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x109a5fc));
    this_00[0x28] = 0;
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_0050d730 */
GEN_FRAME uint GEN_THISCALL F_0050d730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50d730u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109a6b4));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::ClipAABBResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050d780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50d780u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xa4,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050c8c0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    this_00[0x26] = 0;
    this_00[0x27] = 0;
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x109a6b4));
    this_00[0x28] = 0;
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_0050d7f0 */
GEN_FRAME uint GEN_THISCALL F_0050d7f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50d7f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109a76c));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::AttachOffsetResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050d830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50d830u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xa0,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050c8c0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    this_00[0x26] = 0;
    this_00[0x27] = 0;
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x109a76c));
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_0050d890 */
GEN_FRAME uint GEN_THISCALL F_0050d890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50d890u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109a824));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::PreBoneDeformerResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050d8d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50d8d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xa0,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050c8c0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    this_00[0x26] = 0;
    this_00[0x27] = 0;
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x109a824));
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_0050d930 */
GEN_FRAME uint GEN_THISCALL F_0050d930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50d930u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109a8dc))
  ;
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::EquipmentParameterResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050d970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50d970u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xa0,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050c8c0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    this_00[0x26] = 0;
    this_00[0x27] = 0;
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x109a8dc));
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_0050d9d0 */
GEN_FRAME uint GEN_THISCALL F_0050d9d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50d9d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109a994))
  ;
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::CharaMakeParameterResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050da10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50da10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xa0,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050c8c0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    this_00[0x26] = 0;
    this_00[0x27] = 0;
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x109a994));
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_0050da70 */
GEN_FRAME uint GEN_THISCALL F_0050da70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50da70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109aa4c));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::ImageChangeDataResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050dab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50dab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xa0,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050c8c0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    this_00[0x26] = 0;
    this_00[0x27] = 0;
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x109aa4c));
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_0050db10 */
GEN_FRAME uint GEN_THISCALL F_0050db10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50db10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109ab04));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::ExSkeletonTableResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050db50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50db50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xa0,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050c8c0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    this_00[0x26] = 0;
    this_00[0x27] = 0;
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x109ab04));
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_0050dbb0 */
GEN_FRAME uint GEN_THISCALL F_0050dbb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50dbb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[44])REFP(0x109a0f4));
  *(undefined4 *)((int)this + 0xa8) = 0;
  uVar1 = F_004296a0(0x30,0,0xd6);
  *(uint *)((int)this + 0xa4) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0xa4) + 4))) = *(int *)((int)this + 0xa4);
  *((int *)GEN_TOP((*(int *)((int)this + 0xa4) + 8))) = *(int *)((int)this + 0xa4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xa4) + 0x2c))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xa4) + 0x2d))) = 1;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  F_00b4ecd0((int)this + 0xb8 GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::PartialAnimationPackResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050dc70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50dc70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00406b90(0xec,0,0);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_0050dbb0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0050dca0 */
GEN_FRAME uint GEN_THISCALL F_0050dca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50dca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x1099dfc));
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0xf;
  *(undefined1 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0xf;
  *(undefined1 *)((int)this + 0xc4) = 0;
  return (uint)this;
}

/* ref: FUN_0050dd20 */
GEN_FRAME uint GEN_THISCALL F_0050dd20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x50dd20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  uint uVar2;
  byte bVar3;
  int * piVar4;
  int iVar5;
  char * pcVar6;
  int iVar7;
  int * piVar8;
  char * pcVar9;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x20))(param_1 GEN_EDX_FWD)));
  piVar8 = (int *)*piVar4;
  if (piVar8 != (int *)piVar4[1]) {
    do {
      iVar7 = *piVar8;
      bVar3 = F_0042b6a0((undefined *)(iVar7 + 0x14) GEN_EDX_ARG,&REFG(undefined, 0x10989a4));
      if (bVar3 != 0) {
        if ((*(int *)(iVar7 + 0xc0) - (int)*(int * PTR32 *)(iVar7 + 0xbc) & 0xfffffffcU) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = **(int * PTR32 *)(iVar7 + 0xbc);
        }
        if ((*(int *)(iVar5 + 0xc0) - (int)*(int * PTR32 *)(iVar5 + 0xbc) & 0xfffffffcU) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = **(int * PTR32 *)(iVar5 + 0xbc);
        }
        pcVar6 = (char *)F_0042a990(iVar5 + 0x68 GEN_EDX_ARG);
        uVar2 = ((uint *)(gen_frame + 0xc))[0];
        (*(uint *)(gen_frame + 0x20)) = 0xf;
        (*(undefined4 *)(gen_frame + 0x1c)) = 0;
        (*(undefined1 *)((char *)&((uint *)(gen_frame + 0xc))[0] + 0)) = 0;
        ((uint *)(gen_frame + 0xc))[0] = uVar2 & 0xffffff00;
        pcVar9 = pcVar6;
        do {
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        F_004e5c20(((uint *)(gen_frame + 0xc)) GEN_EDX_ARG,pcVar6,(int)pcVar9 - (int)(pcVar6 + 1));
        F_004e54d0((undefined *)((int)this + 0xa8) GEN_EDX_ARG,((uint *)(gen_frame + 0xc)),0,0xffffffff);
        if (0xf < (*(uint *)(gen_frame + 0x20))) {
          F_00429760(((uint *)(gen_frame + 0xc))[0],(*(uint *)(gen_frame + 0x20)) + 1,0x32);
        }
      }
      bVar3 = F_0042b6a0((undefined *)(iVar7 + 0x14) GEN_EDX_ARG,&REFG(undefined, 0x1098a2c));
      if (bVar3 != 0) {
        if ((*(int *)(iVar7 + 0xc0) - (int)*(int * PTR32 *)(iVar7 + 0xbc) & 0xfffffffcU) == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = **(int * PTR32 *)(iVar7 + 0xbc);
        }
        if ((*(int *)(iVar7 + 0xc0) - (int)*(int * PTR32 *)(iVar7 + 0xbc) & 0xfffffffcU) == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = **(int * PTR32 *)(iVar7 + 0xbc);
        }
        pcVar6 = (char *)F_0042a990(iVar7 + 0x68 GEN_EDX_ARG);
        uVar2 = ((uint *)(gen_frame + 0xc))[0];
        (*(uint *)(gen_frame + 0x20)) = 0xf;
        (*(undefined4 *)(gen_frame + 0x1c)) = 0;
        (*(undefined1 *)((char *)&((uint *)(gen_frame + 0xc))[0] + 0)) = 0;
        ((uint *)(gen_frame + 0xc))[0] = uVar2 & 0xffffff00;
        pcVar9 = pcVar6;
        do {
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        F_004e5c20(((uint *)(gen_frame + 0xc)) GEN_EDX_ARG,pcVar6,(int)pcVar9 - (int)(pcVar6 + 1));
        F_004e54d0((undefined *)((int)this + 0xc4) GEN_EDX_ARG,((uint *)(gen_frame + 0xc)),0,0xffffffff);
        if (0xf < (*(uint *)(gen_frame + 0x20))) {
          F_00429760(((uint *)(gen_frame + 0xc))[0],(*(uint *)(gen_frame + 0x20)) + 1,0x32);
        }
      }
      piVar8 = piVar8 + 1;
    } while (piVar8 != (int *)piVar4[1]);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return (uint)piVar4;
}

/* ref: FUN_0050ded0 */
GEN_FRAME byte GEN_STDCALL F_0050ded0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x50ded0u, gen_a0, gen_a1, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  int iVar2;
  byte bVar3;
  int * piVar4;
  char * pcVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int * piVar9;
  char * pcVar10;
  double dVar11;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  bVar3 = F_0042b6a0(param_2 + 5 GEN_EDX_ARG,"#comment");
  if (bVar3 == 0) {
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x20))(param_2 GEN_EDX_ARG)));
    piVar9 = (int *)*piVar4;
    if (piVar9 != (int *)piVar4[1]) {
      do {
        iVar2 = *piVar9;
        bVar3 = F_0042b6a0((undefined *)(iVar2 + 0x14) GEN_EDX_ARG,"enable");
        if (bVar3 != 0) {
          if ((*(int *)(iVar2 + 0xc0) - (int)*(int * PTR32 *)(iVar2 + 0xbc) & 0xfffffffcU) == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = **(int * PTR32 *)(iVar2 + 0xbc);
          }
          bVar3 = F_0042b6a0((undefined *)(iVar6 + 0x68) GEN_EDX_ARG,&REFG(undefined, 0x1098a24));
          *param_1 = bVar3;
        }
        bVar3 = F_0042b6a0((undefined *)(iVar2 + 0x14) GEN_EDX_ARG,"range_limits_enable");
        if (bVar3 != 0) {
          if ((*(int *)(iVar2 + 0xc0) - (int)*(int * PTR32 *)(iVar2 + 0xbc) & 0xfffffffcU) == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = **(int * PTR32 *)(iVar2 + 0xbc);
          }
          bVar3 = F_0042b6a0((undefined *)(iVar6 + 0x68) GEN_EDX_ARG,&REFG(undefined, 0x1098a24));
          param_1[1] = bVar3;
        }
        bVar3 = F_0042b6a0((undefined *)(iVar2 + 0x14) GEN_EDX_ARG,"bone_name");
        if (bVar3 != 0) {
          if ((*(int *)(iVar2 + 0xc0) - (int)*(int * PTR32 *)(iVar2 + 0xbc) & 0xfffffffcU) == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = **(int * PTR32 *)(iVar2 + 0xbc);
          }
          pcVar5 = (char *)F_0042a990(iVar6 + 0x68 GEN_EDX_ARG);
          uVar8 = ((uint *)(gen_frame + 0xc))[0];
          (*(uint *)(gen_frame + 0x20)) = 0xf;
          (*(undefined4 *)(gen_frame + 0x1c)) = 0;
          (*(undefined1 *)((char *)&((uint *)(gen_frame + 0xc))[0] + 0)) = 0;
          ((uint *)(gen_frame + 0xc))[0] = uVar8 & 0xffffff00;
          pcVar10 = pcVar5;
          do {
            cVar1 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar1 != '\0');
          F_004e5c20(((uint *)(gen_frame + 0xc)) GEN_EDX_ARG,pcVar5,(int)pcVar10 - (int)(pcVar5 + 1));
          F_004e54d0(param_1 + 4 GEN_EDX_ARG,((uint *)(gen_frame + 0xc)),0,0xffffffff);
          if (0xf < (*(uint *)(gen_frame + 0x20))) {
            F_00429760(((uint *)(gen_frame + 0xc))[0],(*(uint *)(gen_frame + 0x20)) + 1,0x32);
          }
        }
        bVar3 = F_0042b6a0((undefined *)(iVar2 + 0x14) GEN_EDX_ARG,&REFG(undefined, 0x1098a64));
        if (bVar3 != 0) {
          if ((*(int *)(iVar2 + 0xc0) - (int)*(int * PTR32 *)(iVar2 + 0xbc) & 0xfffffffcU) == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = **(int * PTR32 *)(iVar2 + 0xbc);
          }
          pcVar10 = (char *)F_0042a990(iVar6 + 0x68 GEN_EDX_ARG);
          dVar11 = F_00c4acaa(pcVar10);
          *(float *)(param_1 + 0x20) = (float)dVar11;
        }
        bVar3 = F_0042b6a0((undefined *)(iVar2 + 0x14) GEN_EDX_ARG,"limit_angle");
        if (bVar3 != 0) {
          if ((*(int *)(iVar2 + 0xc0) - (int)*(int * PTR32 *)(iVar2 + 0xbc) & 0xfffffffcU) == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = **(int * PTR32 *)(iVar2 + 0xbc);
          }
          pcVar10 = (char *)F_0042a990(iVar6 + 0x68 GEN_EDX_ARG);
          dVar11 = F_00c4acaa(pcVar10);
          *(float *)(param_1 + 0x24) =
               ((float)GEN_TOF((((float10)(float)dVar11 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                      (float10)*(double *)&REFG(undefined, 0x1080220))));
        }
        bVar3 = F_0042b6a0((undefined *)(iVar2 + 0x14) GEN_EDX_ARG,"limit_rotation");
        if (bVar3 != 0) {
          if ((*(int *)(iVar2 + 0xc0) - (int)*(undefined4 * PTR32 *)(iVar2 + 0xbc) & 0xfffffffcU) == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = **(undefined4 * PTR32 *)(iVar2 + 0xbc);
          }
          F_00506fa0(param_1 + 0x30,uVar7);
        }
        bVar3 = F_0042b6a0((undefined *)(iVar2 + 0x14) GEN_EDX_ARG,"range_limits");
        if (bVar3 != 0) {
          if ((*(int *)(iVar2 + 0xc0) - (int)*(uint * PTR32 *)(iVar2 + 0xbc) & 0xfffffffcU) == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = **(uint * PTR32 *)(iVar2 + 0xbc);
          }
          F_00507050(param_1 + 0x40,uVar8);
        }
        piVar9 = piVar9 + 1;
      } while (piVar9 != (int *)piVar4[1]);
    }
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
    return 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_0050e180 */
GEN_FRAME byte GEN_THISCALL F_0050e180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x50e180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  byte bVar2;
  int * piVar3;
  uint * puVar4;
  uint * puVar5;
  uint uVar6;
  int iVar7;
  int * piVar8;
  undefined4 * puVar9;
  
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x20))(param_1 GEN_EDX_FWD)));
  piVar8 = (int *)*piVar3;
  if (piVar8 != (int *)piVar3[1]) {
    do {
      bVar2 = F_0042b740((undefined *)(*piVar8 + 0x14) GEN_EDX_ARG,"#comment");
      if (bVar2 != 0) {
        *(int *)((int)this + 0xa0) = *(int *)((int)this + 0xa0) + 1;
      }
      piVar8 = piVar8 + 1;
    } while (piVar8 != (int *)piVar3[1]);
  }
  uVar1 = *(uint *)((int)this + 0xa0);
  uVar6 = -(uint)((int)((ulonglong)uVar1 * 0x50 >> 0x20) != 0) | (uint)((ulonglong)uVar1 * 0x50);
  puVar4 = (uint *)F_00406bb0(-(uint)(0xffffffef < uVar6) | uVar6 + 0x10,0,0);
  if (puVar4 == (uint *)0x0) {
    puVar5 = (uint *)0x0;
  }
  else {
    iVar7 = uVar1 - 1;
    *puVar4 = uVar1;
    puVar5 = puVar4 + 4;
    if (-1 < iVar7) {
      puVar4 = puVar4 + 9;
      do {
        puVar4[1] = 0xf;
        *puVar4 = 0;
        *(undefined1 *)(puVar4 - 4) = 0;
        puVar4 = puVar4 + 0x14;
        iVar7 = iVar7 - 1;
      } while (-1 < iVar7);
    }
  }
  *(uint * PTR32 *)((int)this + 0xa4) = puVar5;
  puVar9 = (undefined4 *)*piVar3;
  if (puVar9 != (undefined4 *)piVar3[1]) {
    iVar7 = 0;
    do {
      bVar2 = F_0050ded0(*(int *)((int)this + 0xa4) + iVar7,*puVar9);
      puVar5 = (uint *)(uint)bVar2;
      if (bVar2 != 0) {
        iVar7 = iVar7 + 0x50;
      }
      puVar9 = puVar9 + 1;
    } while (puVar9 != (undefined4 *)piVar3[1]);
  }
  return (byte)puVar5;
}

/* ref: FUN_0050e270 */
GEN_FRAME byte GEN_THISCALL F_0050e270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x50e270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0xc0) - (int)*(int * PTR32 *)(param_1 + 0xbc) & 0xfffffffcU) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = **(int * PTR32 *)(param_1 + 0xbc);
  }
  F_0050dd20(this GEN_EDX_FWD,iVar2);
  bVar1 = F_0050e180(this GEN_EDX_ARG,*(undefined4 *)(iVar2 + 0xc));
  return bVar1;
}

/* ref: Client::System::Resource::Handle::LookAtIkResourceHandle::vf33 */
GEN_FRAME uint GEN_THISCALL F_0050e2b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x50e2b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * pLVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  int * piVar6;
  int iVar7;
  
  uVar4 = param_2;
  if (param_2 == 1) {
    pLVar1 = this + 0x88;
    iVar7 = _InterlockedExchangeAdd((volatile long *)(((int *)pLVar1)), 0);
    if (iVar7 != 3) {
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_FWD);
      uVar2 = *(undefined4 *)(this + 0x1c);
      F_00b568a0(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,0);
      F_00b574b0(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,uVar4,uVar2);
      piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x10)) + 0x20))((*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG)));
      piVar6 = (int *)*piVar5;
      if (piVar6 != (int *)piVar5[1]) {
        do {
          piVar3 = *(int * PTR32 *)(*piVar6 + 0xbc);
          if ((*(int *)(*piVar6 + 0xc0) - (int)piVar3 & 0xfffffffcU) == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *piVar3;
          }
          if ((*(int *)(iVar7 + 0xc0) - (int)*(int * PTR32 *)(iVar7 + 0xbc) & 0xfffffffcU) == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = **(int * PTR32 *)(iVar7 + 0xbc);
          }
          F_0050dd20(this GEN_EDX_ARG,iVar7);
          F_0050e180(this GEN_EDX_ARG,*(undefined4 *)(iVar7 + 0xc));
          piVar6 = piVar6 + 1;
        } while (piVar6 != (int *)piVar5[1]);
      }
      F_00b55ec0(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      uVar4 = 1;
    }
  }
  return uVar4;
}

/* ref: Client::System::Resource::Handle::LookAtIkResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050e380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50e380u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00406b90(0xe0,0,0);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_0050dca0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0050e3b0 */
GEN_FRAME uint GEN_THISCALL F_0050e3b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50e3b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x1099eb4));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0xf;
  *(undefined1 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0xf;
  *(undefined1 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0xf;
  *(undefined1 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0xf;
  *(undefined1 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0xf;
  *(undefined1 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0xf;
  *(undefined1 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0xf;
  *(undefined1 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0xf;
  *(undefined1 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0xf;
  *(undefined1 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0xf;
  *(undefined1 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0xf;
  *(undefined1 *)((int)this + 0x1b8) = 0;
  return (uint)this;
}

/* ref: FUN_0050e4c0 */
GEN_FRAME uint GEN_STDCALL F_0050e4c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x50e4c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  int * piVar2;
  char * pcVar3;
  int iVar4;
  uint uVar5;
  char * pcVar6;
  ulonglong uVar7;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if ((*(int *)(param_3 + 0xc0) - (int)*(int * PTR32 *)(param_3 + 0xbc) & 0xfffffffcU) == 0) {
    (*(int *)(gen_frame + 0x8)) = 0;
  }
  else {
    (*(int *)(gen_frame + 0x8)) = **(int * PTR32 *)(param_3 + 0xbc);
  }
  if ((*(int *)((*(int *)(gen_frame + 0x8)) + 0xc0) - (int)*(int * PTR32 *)((*(int *)(gen_frame + 0x8)) + 0xbc) & 0xfffffffcU) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = **(int * PTR32 *)((*(int *)(gen_frame + 0x8)) + 0xbc);
  }
  pcVar3 = (char *)F_0042a990(iVar4 + 0x68 GEN_EDX_ARG);
  uVar5 = ((uint *)(gen_frame + 0xc))[0];
  (*(uint *)(gen_frame + 0x20)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0xc))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0xc))[0] = uVar5 & 0xffffff00;
  pcVar6 = pcVar3;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_004e5c20(((uint *)(gen_frame + 0xc)) GEN_EDX_ARG,pcVar3,(int)pcVar6 - (int)(pcVar3 + 1));
  F_004e54d0(param_1 GEN_EDX_ARG,((uint *)(gen_frame + 0xc)),0,0xffffffff);
  if (0xf < (*(uint *)(gen_frame + 0x20))) {
    F_00429760(((uint *)(gen_frame + 0xc))[0],(*(uint *)(gen_frame + 0x20)) + 1,0x32);
  }
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x8)) + 0xc) + 0xbc)));
  if ((*((int *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x8)) + 0xc) + 0xc0))) - (int)piVar2 & 0xfffffffcU) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar2;
  }
  pcVar3 = (char *)F_0042a990(iVar4 + 0x68 GEN_EDX_ARG);
  uVar5 = ((uint *)(gen_frame + 0xc))[0];
  (*(uint *)(gen_frame + 0x20)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0xc))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0xc))[0] = uVar5 & 0xffffff00;
  pcVar6 = pcVar3;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_004e5c20(((uint *)(gen_frame + 0xc)) GEN_EDX_ARG,pcVar3,(int)pcVar6 - (int)(pcVar3 + 1));
  F_004e54d0(param_2 GEN_EDX_ARG,((uint *)(gen_frame + 0xc)),0,0xffffffff);
  uVar5 = (*(uint *)(gen_frame + 0x20));
  if (0xf < (*(uint *)(gen_frame + 0x20))) {
    uVar7 = F_00429760(((uint *)(gen_frame + 0xc))[0],(*(uint *)(gen_frame + 0x20)) + 1,0x32);
    uVar5 = (uint)uVar7;
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar5;
}

/* ref: FUN_0050e610 */
GEN_FRAME uint GEN_THISCALL F_0050e610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x50e610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0050e4c0((int)this + 0xa0,(int)this + 0xbc,param_1);
  return uVar1;
}

/* ref: FUN_0050e630 */
GEN_FRAME uint GEN_THISCALL F_0050e630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x50e630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0050e4c0((int)this + 0xd8,(int)this + 0xf4,param_1);
  return uVar1;
}

/* ref: FUN_0050e650 */
GEN_FRAME uint GEN_THISCALL F_0050e650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x50e650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  char * pcVar2;
  uint uVar3;
  int iVar4;
  char * pcVar5;
  ulonglong uVar6;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if ((*(int *)(param_1 + 0xc0) - (int)*(int * PTR32 *)(param_1 + 0xbc) & 0xfffffffcU) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = **(int * PTR32 *)(param_1 + 0xbc);
  }
  pcVar2 = (char *)F_0042a990(iVar4 + 0x68 GEN_EDX_FWD);
  uVar3 = ((uint *)(gen_frame + 0xc))[0];
  (*(uint *)(gen_frame + 0x20)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0xc))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0xc))[0] = uVar3 & 0xffffff00;
  pcVar5 = pcVar2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  F_004e5c20(((uint *)(gen_frame + 0xc)) GEN_EDX_ARG,pcVar2,(int)pcVar5 - (int)(pcVar2 + 1));
  F_004e54d0((undefined *)((int)this + 0x110) GEN_EDX_ARG,((uint *)(gen_frame + 0xc)),0,0xffffffff);
  uVar3 = (*(uint *)(gen_frame + 0x20));
  if (0xf < (*(uint *)(gen_frame + 0x20))) {
    uVar6 = F_00429760(((uint *)(gen_frame + 0xc))[0],(*(uint *)(gen_frame + 0x20)) + 1,0x32);
    uVar3 = (uint)uVar6;
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_0050e700 */
GEN_FRAME uint GEN_THISCALL F_0050e700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x50e700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0050e4c0((int)this + 300,(int)this + 0x148,param_1);
  return uVar1;
}

/* ref: FUN_0050e720 */
GEN_FRAME uint GEN_THISCALL F_0050e720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x50e720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0050e4c0((int)this + 0x164,(int)this + 0x180,param_1);
  return uVar1;
}

/* ref: FUN_0050e740 */
GEN_FRAME uint GEN_THISCALL F_0050e740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x50e740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0050e4c0((int)this + 0x19c,(int)this + 0x1b8,param_1);
  return uVar1;
}

/* ref: FUN_0050e760 */
GEN_FRAME uint GEN_THISCALL F_0050e760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x50e760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0xc0) - (int)*(int * PTR32 *)(param_1 + 0xbc) & 0xfffffffcU) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = **(int * PTR32 *)(param_1 + 0xbc);
  }
  F_0050e4c0((int)this + 0xa0,(int)this + 0xbc,iVar2);
  iVar2 = *(int *)(iVar2 + 0xc);
  F_0050e4c0((int)this + 0xd8,(int)this + 0xf4,iVar2);
  iVar2 = *(int *)(iVar2 + 0xc);
  F_0050e650(this GEN_EDX_ARG,iVar2);
  iVar2 = *(int *)(iVar2 + 0xc);
  F_0050e4c0((int)this + 300,(int)this + 0x148,iVar2);
  iVar2 = *(int *)(iVar2 + 0xc);
  F_0050e4c0((int)this + 0x164,(int)this + 0x180,iVar2);
  uVar1 = F_0050e4c0((int)this + 0x19c,(int)this + 0x1b8,*(undefined4 *)(iVar2 + 0xc));
  return uVar1;
}

/* ref: Client::System::Resource::Handle::AutoShakeIkResourceHandle::vf33 */
GEN_FRAME uint GEN_THISCALL F_0050e820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x50e820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * pAVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  int * piVar5;
  undefined4 uVar6;
  int * piVar7;
  
  uVar4 = param_2;
  if (param_2 == 1) {
    pAVar1 = this + 0x88;
    iVar2 = _InterlockedExchangeAdd((volatile long *)(((int *)pAVar1)), 0);
    if (iVar2 != 3) {
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_FWD);
      uVar6 = *(undefined4 *)(this + 0x1c);
      F_00b568a0(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,0);
      F_00b574b0(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,uVar4,uVar6);
      piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x10)) + 0x20))((*(int * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG)));
      piVar7 = (int *)*piVar5;
      if (piVar7 != (int *)piVar5[1]) {
        do {
          puVar3 = *(undefined4 * PTR32 *)(*piVar7 + 0xbc);
          if ((*(int *)(*piVar7 + 0xc0) - (int)puVar3 & 0xfffffffcU) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *puVar3;
          }
          F_0050e760(this GEN_EDX_ARG,uVar6);
          piVar7 = piVar7 + 1;
        } while (piVar7 != (int *)piVar5[1]);
      }
      F_00b55ec0(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      uVar4 = 1;
    }
  }
  return uVar4;
}

/* ref: Client::System::Resource::Handle::AutoShakeIkResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050e8d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50e8d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00406b90(0x1d4,0,0);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_0050e3b0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0050e900 */
GEN_FRAME uint GEN_THISCALL F_0050e900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50e900u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109abbc));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::ElementIdResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050e950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50e950u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xa8,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050c8c0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    this_00[0x26] = 0;
    this_00[0x27] = 0;
    this_00[0x28] = 0;
    this_00[0x29] = 0;
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x109abbc));
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_0050e9c0 */
GEN_FRAME uint GEN_THISCALL F_0050e9c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50e9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109ac74));
  F_00b50ce0((int)this + 0xa0 GEN_EDX_ARG);
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::ResidentPapTableResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050ea10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50ea10u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(200,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050c8c0(this_00 GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]));
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
    this_00[0x26] = 0;
    this_00[0x27] = 0;
    F_00526b50(((undefined *)GEN_TOP(*REFG(undefined4 * PTR32, 0x1375aec))) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[5]),(*(undefined4 *)&gen_args[2]));
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x109ac74));
    F_00b50ce0(this_00 + 0x28 GEN_EDX_ARG);
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_0050eaa0 */
GEN_FRAME uint GEN_THISCALL F_0050eaa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50eaa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109ad2c));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0x736b6c70;
  *(undefined4 *)((int)this + 0xa4) = 0x31333030;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined2 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(gen_code32 *)((int)this + 0xd0) = ((code *)REFP(0x667370));
  *(undefined4 *)((int)this + 0xd4) = 0x2000000;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  F_00b4d580((int)this + 0xf4 GEN_EDX_ARG);
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::SkeletonParamResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050eb70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50eb70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00406b90(0x108,0,0);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_0050eaa0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0050eba0 */
GEN_FRAME uint GEN_THISCALL F_0050eba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x50eba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * PTR32 * ppuVar4;
  uint uVar5;
  char * pcVar6;
  uint uVar7;
  undefined4 * puVar8;
  uint * puVar9;
  undefined * puVar10;
  undefined4 * PTR32 * PTR32 * pppuVar11;
  
  ppuVar4 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
  (*(uint *)(gen_frame + 0x20)) = 0xf;
  (*(uint *)(gen_frame + 0x1c)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 *)((uint)ppuVar4 & 0xffffff00);
  pcVar6 = param_1;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_004e5c20(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_FWD,param_1,(int)pcVar6 - (int)(param_1 + 1));
  uVar7 = F_00526fb0((undefined *)((int)this + 0xa0) GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc)));
  uVar5 = (*(uint *)(gen_frame + 0x1c));
  uVar2 = *(uint *)((int)this + 0xa4);
  (*(uint *)(gen_frame + 0x0)) = uVar7;
  if (uVar7 != uVar2) {
    uVar3 = *(uint *)(uVar7 + 0x1c);
    puVar8 = (undefined4 *)(uVar7 + 0xc);
    if (0xf < *(uint *)(uVar7 + 0x20)) {
      puVar8 = (undefined4 *)*puVar8;
    }
    uVar7 = (*(uint *)(gen_frame + 0x1c));
    if (uVar3 <= (*(uint *)(gen_frame + 0x1c))) {
      uVar7 = uVar3;
    }
    pppuVar11 = (undefined4 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
    if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
      pppuVar11 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc));
    }
    uVar7 = F_0040d320(pppuVar11,puVar8,uVar7);
    if (uVar7 == 0) {
      if (uVar5 < uVar3) goto LAB_0050ec47;
      uVar7 = (uint)(uVar5 != uVar3);
    }
    if (-1 < (int)uVar7) {
      puVar9 = &(*(uint *)(gen_frame + 0x0));
      goto LAB_0050ec4d;
    }
  }
LAB_0050ec47: ;
  (*(uint *)(gen_frame + 0x8)) = uVar2;
  puVar9 = &(*(uint *)(gen_frame + 0x8));
LAB_0050ec4d: ;
  uVar2 = *puVar9;
  if (0xf < (*(uint *)(gen_frame + 0x20))) {
    F_00429760(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0],(*(uint *)(gen_frame + 0x20)) + 1,0x32);
  }
  puVar10 = (undefined *)(uVar2 + 0x28);
  if (uVar2 == *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0xa4)) {
    puVar10 = &REFG(undefined, 0x1375af0);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return (uint)puVar10;
}

/* ref: FUN_0050ec90 */
GEN_FRAME uint GEN_THISCALL F_0050ec90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50ec90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x1099f6c));
  F_00b4e870((int)this + 0xa0 GEN_EDX_ARG);
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::MotionLineTableResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050ece0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50ece0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xc4,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050c8c0(this_00 GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]));
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x109990c));
    this_00[0x26] = 0;
    this_00[0x27] = 0;
    F_00526b50(((undefined *)GEN_TOP(*REFG(undefined4 * PTR32, 0x1375aec))) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[5]),(*(undefined4 *)&gen_args[2]));
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x1099f6c));
    F_00b4e870(this_00 + 0x28 GEN_EDX_ARG);
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_0050ed70 */
GEN_FRAME uint GEN_THISCALL F_0050ed70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50ed70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109ade4));
  *(undefined4 *)((int)this + 0xa0) = 0;
  this_00 = (undefined *)F_004069f0(0x68);
  if (this_00 == (undefined *)0x0) {
    uVar1 = 0;
  }
  else {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,param_4,REFG(undefined4, 0x108cc50));
    uVar1 = F_00990b80(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),this);
  }
  *(uint *)((int)this + 0xa0) = uVar1;
  if (this_00 != (undefined *)0x0) {
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::ApricotResourceHandle::vf25 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0050ee30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x50ee30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = *(undefined4 * PTR32 *)(this + 0xa0);
  uVar3 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_FWD,1);
    *(undefined4 *)(this + 0xa0) = 0;
  }
  uVar4 = *(int *)(this + 0x74) - *(int *)(this + 0x70) >> 2;
  if (uVar4 != 0) {
    do {
      iVar2 = *((int *)GEN_TOP((*(int *)(this + 0x70) + uVar3 * 4)));
      if (iVar2 != 0) {
        F_0050c4f0(REFG(void * PTR32, 0x1375aec) GEN_EDX_ARG,iVar2,0,0);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  iVar2 = *(int *)(this + 0x70);
  if (iVar2 != *(int *)(this + 0x74)) {
    F_00c46e20(iVar2,*(int *)(this + 0x74),0);
    *(int *)(this + 0x74) = iVar2;
  }
  return;
}

/* ref: Client::System::Resource::Handle::ApricotResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050eeb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50eeb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00406b90(0xa4,0,0);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_0050ed70(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0050eee0 */
GEN_FRAME uint GEN_THISCALL F_0050eee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50eee0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109ae9c));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::ApricotTextureResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050ef30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50ef30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xa8,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050c8c0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    this_00[0x26] = 0;
    this_00[0x27] = 0;
    this_00[0x28] = 0;
    this_00[0x29] = 0;
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x109ae9c));
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_0050efa0 */
GEN_FRAME uint GEN_THISCALL F_0050efa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50efa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109a024));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::SoundResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050f000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50f000u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xb0,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050c8c0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    this_00[0x26] = 0;
    this_00[0x27] = 0;
    this_00[0x28] = 0;
    this_00[0x29] = 0;
    this_00[0x2a] = 0;
    this_00[0x2b] = 0;
    this_00[4] = 0;
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x109a024));
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_0050f080 */
GEN_FRAME uint GEN_THISCALL F_0050f080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50f080u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109af54));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::CollisionMeshResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050f0c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50f0c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xa0,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050c8c0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    this_00[0x26] = 0;
    this_00[0x27] = 0;
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x109af54));
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_0050f120 */
GEN_FRAME uint GEN_THISCALL F_0050f120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50f120u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109b00c));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::CutSceneResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050f160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50f160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xa0,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050c8c0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    this_00[0x26] = 0;
    this_00[0x27] = 0;
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x109b00c));
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_0050f1c0 */
GEN_FRAME uint GEN_THISCALL F_0050f1c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50f1c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109b0c4));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::TimeLineResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050f200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50f200u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xa0,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050c8c0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    this_00[0x26] = 0;
    this_00[0x27] = 0;
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x109b0c4));
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_0050f260 */
GEN_FRAME uint GEN_THISCALL F_0050f260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50f260u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109b17c));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::LevelSceneResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050f2a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50f2a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xa0,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050c8c0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    this_00[0x26] = 0;
    this_00[0x27] = 0;
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x109b17c));
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_0050f300 */
GEN_FRAME uint GEN_THISCALL F_0050f300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50f300u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109b234));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::LayerGroupResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050f340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50f340u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xa0,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050c8c0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    this_00[0x26] = 0;
    this_00[0x27] = 0;
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x109b234));
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_0050f3a0 */
GEN_FRAME uint GEN_THISCALL F_0050f3a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50f3a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109b2ec));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::SharedGroupResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050f3e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50f3e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xa0,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050c8c0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    this_00[0x26] = 0;
    this_00[0x27] = 0;
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x109b2ec));
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_0050f440 */
GEN_FRAME uint GEN_THISCALL F_0050f440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50f440u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109b3a4));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::NaviMeshResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050f480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50f480u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xa0,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050c8c0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    this_00[0x26] = 0;
    this_00[0x27] = 0;
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x109b3a4));
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_0050f4e0 */
GEN_FRAME uint GEN_THISCALL F_0050f4e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50f4e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109b45c));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::ExlResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050f520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50f520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xa0,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050c8c0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    this_00[0x26] = 0;
    this_00[0x27] = 0;
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x109b45c));
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_0050f580 */
GEN_FRAME uint GEN_THISCALL F_0050f580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50f580u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109b514));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::ExhResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050f5c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50f5c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xa0,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050c8c0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    this_00[0x26] = 0;
    this_00[0x27] = 0;
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x109b514));
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_0050f620 */
GEN_FRAME uint GEN_THISCALL F_0050f620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50f620u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109b5cc));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::ExdResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050f660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50f660u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xa0,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050c8c0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    this_00[0x26] = 0;
    this_00[0x27] = 0;
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x109b5cc));
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_0050f6c0 */
GEN_FRAME uint GEN_THISCALL F_0050f6c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50f6c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109b684));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::HardwareCursorResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050f700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50f700u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xa0,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050c8c0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    this_00[0x26] = 0;
    this_00[0x27] = 0;
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x109b684));
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_0050f760 */
GEN_FRAME uint GEN_THISCALL F_0050f760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50f760u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109b73c));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::CursorResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050f7a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50f7a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xa0,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050c8c0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    this_00[0x26] = 0;
    this_00[0x27] = 0;
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x109b73c));
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_0050f800 */
GEN_FRAME uint GEN_THISCALL F_0050f800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50f800u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109b7f4));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::UldResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050f840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50f840u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xa0,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050c8c0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    this_00[0x26] = 0;
    this_00[0x27] = 0;
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x109b7f4));
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_0050f8a0 */
GEN_FRAME uint GEN_THISCALL F_0050f8a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50f8a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109b8ac));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::UgdResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050f8e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50f8e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xa0,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050c8c0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    this_00[0x26] = 0;
    this_00[0x27] = 0;
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x109b8ac));
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_0050f940 */
GEN_FRAME uint GEN_THISCALL F_0050f940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50f940u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109b964));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::PNGResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050f980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50f980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xa0,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050c8c0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    this_00[0x26] = 0;
    this_00[0x27] = 0;
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x109b964));
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_0050f9e0 */
GEN_FRAME uint GEN_THISCALL F_0050f9e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50f9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109ba1c));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::LuaResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050fa20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50fa20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xa0,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050c8c0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    this_00[0x26] = 0;
    this_00[0x27] = 0;
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x109ba1c));
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_0050fa80 */
GEN_FRAME uint GEN_THISCALL F_0050fa80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50fa80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109bad4));
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::LuabResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050fac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50fac0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * this_00;
  
  this_00 = (undefined4 *)F_00406b90(0xa0,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_0050c8c0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    this_00[0x26] = 0;
    this_00[0x27] = 0;
    *this_00 = (*(undefined * PTR32 (*)[44])REFP(0x109bad4));
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_0050fb20 */
GEN_FRAME uint GEN_THISCALL F_0050fb20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x50fb20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int * piVar2;
  int iVar3;
  byte bVar4;
  undefined3 extraout_var = 0;
  int * piVar5;
  int * piVar6;
  ulonglong uVar7;
  
  piVar5 = *(int * PTR32 *)((int)this + 0xdf4);
  piVar1 = (int *)((int)this + 0xdf4);
  if (piVar5 != *(int * PTR32 *)((int)this + 0xdf8)) {
    piVar2 = *(int * PTR32 *)((int)this + 0xdf8);
    for (piVar6 = piVar5; piVar6 != piVar2; piVar6 = piVar6 + 1) {
      piVar5 = (int *)0x0;
      if (*piVar6 != 0) {
        bVar4 = F_0050c4f0(REFG(void * PTR32, 0x1375aec) GEN_EDX_FWD,*piVar6,0,0);
        piVar5 = ((int *)GEN_TOP(CONCAT31(extraout_var,bVar4)));
      }
    }
    iVar3 = *piVar1;
    if (iVar3 != *(int *)((int)this + 0xdf8)) {
      piVar5 = (int *)F_00c46e20(iVar3,*(int *)((int)this + 0xdf8),0);
      *(int *)((int)this + 0xdf8) = iVar3;
    }
    if (piVar1 != ((int *)(gen_frame + 0xc))) {
      iVar3 = *piVar1;
      *piVar1 = 0;
      *(undefined4 *)((int)this + 0xdf8) = 0;
      piVar5 = *(int * PTR32 *)((int)this + 0xdfc);
      *(undefined4 *)((int)this + 0xdfc) = 0;
      if (iVar3 != 0) {
        uVar7 = F_00429760(iVar3,((int)piVar5 - iVar3 >> 2) * 4,0x12e);
        piVar5 = (int *)uVar7;
      }
    }
  }
  return (uint)piVar5;
}

/* ref: FUN_0050fbd0 */
GEN_FRAME uint GEN_THISCALL F_0050fbd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50fbd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  undefined4 uVar1;
  int * piVar2;
  uint uVar3;
  
  uVar1 = (*(undefined4 *)&gen_args[2]);
  piVar2 = (int *)F_00526b50((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[2]));
  if ((*piVar2 != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) &&
     (piVar2 = *(int * PTR32 *)(*piVar2 + 0x10), piVar2 != (int *)0x0)) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),uVar1,(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]));
    return uVar3;
  }
  uVar3 = F_0050cb50((undefined *)&(*(undefined4 *)&gen_args[5]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),uVar1,(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]))
  ;
  return uVar3;
}

/* ref: FUN_0050fc40 */
GEN_FRAME unsigned int GEN_THISCALL F_0050fc40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x50fc40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + param_1 * 4);
  if (this_00 != (undefined *)0x0) {
    *(int *)((int)this + 0x50) = *(int *)((int)this + 0x50) - *(int *)((int)this_00 + 0x10);
    F_0050c650(this_00 GEN_EDX_FWD);
    F_00406ad0(this_00);
  }
  *(undefined4 *)((int)this + param_1 * 4) = 0;
  return;
}

/* ref: FUN_0050fc80 */
GEN_FRAME unsigned int GEN_THISCALL F_0050fc80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x50fc80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + param_1 * 4);
  if (this_00 != (undefined *)0x0) {
    *(int *)((int)this + 0x50) = *(int *)((int)this + 0x50) - *(int *)((int)this_00 + 0x10);
    F_0050c650(this_00 GEN_EDX_FWD);
    F_00406ad0(this_00);
  }
  *(undefined4 *)((int)this + param_1 * 4) = 0;
  return;
}

/* ref: Client::System::Resource::Handle::ModelResourceHandle::vf28 */
GEN_NOFRAME uint GEN_THISCALL F_0050fcc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x50fcc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pMVar1;
  uint uVar2;
  
  pMVar1 = this + 0x8c;
  uVar2 = _InterlockedExchangeAdd((volatile long *)(((uint *)pMVar1)), 0);
  if (uVar2 == 7) {
    pMVar1 = this + 0x88;
    uVar2 = _InterlockedExchangeAdd((volatile long *)(((uint *)pMVar1)), 0);
    if (uVar2 != 3) {
      uVar2 = F_005042c0(this GEN_EDX_FWD);
      return uVar2;
    }
  }
  if (*(int *)(this + 0x124) != 0) {
    uVar2 = F_0050cbb0(this GEN_EDX_ARG);
    return uVar2;
  }
  return uVar2;
}

/* ref: FUN_0050fd00 */
GEN_FRAME unsigned int GEN_THISCALL F_0050fd00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x50fd00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  int local_8;
  
  if (*(int *)((int)this + 0xa8) != 0) {
    if (*(int *)((int)this + 0x124) != 0) {
      F_0050cbb0(this GEN_EDX_FWD);
    }
    if (*(int *)((int)this + 0xb8) != 0) {
      uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xa8) + 4))) + 0xc + *(int *)((int)this + 0xa8))));
      uVar3 = (uint)uVar1;
      if ((*(int *)((int)this + 0x108) != 0) && (uVar1 != 0)) {
        iVar4 = 0;
        do {
          if (*((int *)GEN_TOP((*(int *)((int)this + 0x108) + iVar4))) != 0) {
            piVar5 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x108) + iVar4)));
            ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5 GEN_EDX_ARG);
            *((undefined4 *)GEN_TOP((iVar4 + *(int *)((int)this + 0x108)))) = 0;
          }
          iVar4 = iVar4 + 4;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
    }
    piVar5 = (int *)((int)this + 0x118);
    local_8 = 3;
    do {
      piVar2 = (int *)piVar5[-3];
      if (piVar2 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG);
        piVar5[-3] = 0;
      }
      piVar2 = (int *)*piVar5;
      if (piVar2 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG);
        *piVar5 = 0;
      }
      piVar5 = piVar5 + 1;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
    if (*(int *)((int)this + 0xa4) != 0) {
      F_00406b30(*(int *)((int)this + 0xa4));
      *(undefined4 *)((int)this + 0xa4) = 0;
    }
    if (*(int *)((int)this + 0xa8) != 0) {
      F_00406b30(*(int *)((int)this + 0xa8));
      *(undefined4 *)((int)this + 0xa8) = 0;
    }
  }
  return;
}

/* ref: Client::System::Resource::Handle::MaterialResourceHandle::vf25 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0050fdf0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x50fdf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0x98);
  if (piVar1 != (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x98));
    *(undefined4 *)(this + 0x98) = 0;
  }
  if (*(int *)(this + 0xa8) != 0) {
    if (*(int *)(this + 0xa4) != 0) {
      F_0050c4f0(REFG(void * PTR32, 0x1375aec) GEN_EDX_ARG,*(int *)(this + 0xa4),0,0);
      F_005075b0(this GEN_EDX_ARG,*(undefined4 *)(this + 0xa4));
      *(undefined4 *)(this + 0xa4) = 0;
    }
    F_0050ce90(this GEN_EDX_ARG);
    piVar1 = *(int * PTR32 *)(this + 0xa0);
    *(undefined4 *)(this + 0xc0) = 0;
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
      *(undefined4 *)(this + 0xa0) = 0;
    }
    if (*(int *)(this + 0xa8) != 0) {
      F_00406ad0(*(int *)(this + 0xa8));
      *(undefined4 *)(this + 0xa8) = 0;
    }
  }
  return;
}

/* ref: Client::System::Resource::Handle::MaterialResourceHandle::vf28 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0050fea0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x50fea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pMVar1;
  int iVar2;
  
  pMVar1 = this + 0x8c;
  iVar2 = _InterlockedExchangeAdd((volatile long *)(((int *)pMVar1)), 0);
  if (iVar2 == 7) {
    pMVar1 = this + 0x88;
    iVar2 = _InterlockedExchangeAdd((volatile long *)(((int *)pMVar1)), 0);
    if (iVar2 != 3) {
      return;
    }
  }
  F_0050ce90(this GEN_EDX_FWD);
  return;
}

/* ref: FUN_0050fed0 */
GEN_FRAME uint GEN_THISCALL F_0050fed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50fed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109bb8c));
  *(undefined4 *)((int)this + 0xa0) = 0;
  F_0052c140((undefined *)((int)this + 0xa4) GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0x736b6c62;
  *(undefined4 *)((int)this + 0xd8) = 0x31333030;
  *(undefined2 *)((int)this + 0xe4) = 0xffff;
  *(undefined2 *)((int)this + 0xe6) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0xffffffff;
  *(undefined4 *)((int)this + 0xec) = 0xffffffff;
  *(undefined4 *)((int)this + 0xf0) = 0xffffffff;
  *(undefined4 *)((int)this + 0xf4) = 0xffffffff;
  *(undefined4 *)((int)this + 0xf8) = 0xffffffff;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0x616c7068;
  *(undefined2 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined2 *)((int)this + 0x10c) = 0;
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::SkeletonResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_0050ffa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x50ffa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00406b90(0x110,0,0);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_0050fed0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0050ffd0 */
GEN_NOFRAME uint GEN_THISCALL F_0050ffd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x50ffd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  if (*(int *)((int)this + 0x18) != 0 || *(int *)((int)this + 0x1c) != 0) {
    uVar2 = F_00427d90();
    uVar1 = (uint)(uVar2 >> 0x20);
    if ((*(uint *)((int)this + 0x1c) <= uVar1) &&
       ((*(uint *)((int)this + 0x1c) < uVar1 || (*(uint *)((int)this + 0x18) < (uint)uVar2)))) {
      *(ulonglong *)((int)this + 0x18) = uVar2;
    }
    return (uint)uVar2;
  }
  uVar1 = F_0050fb20(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00510000 */
GEN_FRAME uint F_00510000(unsigned int gen_a0)
{
  GEN_ENTER(0x510000u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  *((undefined1 *)GEN_TOP(((int)REFG(void * PTR32, 0x1375aec) + 0x4f))) = (undefined1)param_1;
  uVar1 = F_0050fb20(REFG(void * PTR32, 0x1375aec) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00510020 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00510020(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x510020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  uVar1 = 0;
  do {
    this_00 = *(undefined * PTR32 *)((int)this + uVar1 * 4);
    if (this_00 != (undefined *)0x0) {
      *(int *)((int)this + 0x50) = *(int *)((int)this + 0x50) - *(int *)((int)this_00 + 0x10);
      F_0050c650(this_00 GEN_EDX_FWD);
      F_00406ad0(this_00);
    }
    *(undefined4 *)((int)this + uVar1 * 4) = 0;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x14);
  *(undefined4 *)((int)this + 0x50) = 0;
  return;
}

/* ref: FUN_00510080 */
GEN_FRAME byte GEN_THISCALL F_00510080(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x510080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  bool bVar3;
  
  bVar3 = *(char *)((int)this + 0x51) != '\0';
  if (bVar3) {
    F_00510020(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_FWD);
  }
  uVar2 = 0;
  do {
    if (*(char *)((int)this + uVar2 + 0x52) != '\0') {
      iVar1 = *(int *)((int)this + 8);
      this_00 = *(undefined * PTR32 *)(iVar1 + uVar2 * 4);
      if (this_00 != (undefined *)0x0) {
        *(int *)(iVar1 + 0x50) = *(int *)(iVar1 + 0x50) - *(int *)((int)this_00 + 0x10);
        F_0050c650(this_00 GEN_EDX_ARG);
        F_00406ad0(this_00);
      }
      *(undefined4 *)(iVar1 + uVar2 * 4) = 0;
      bVar3 = true;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x14);
  if (*(char *)((int)this + 0x4e) == '\0') {
    bVar3 = true;
  }
  return bVar3;
}

/* ref: FUN_00510100 */
GEN_NOFRAME uint GEN_THISCALL F_00510100(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x510100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005011b0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00510120 */
GEN_FRAME byte GEN_THISCALL F_00510120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x510120u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00526ca0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if (*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) != (*(undefined * PTR32 *)(gen_frame + 0x8))) {
    F_0052d060((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[1]),(*(undefined * PTR32 *)(gen_frame + 0x8)));
    return 1;
  }
  return 0;
}

/* ref: FUN_00510160 */
GEN_FRAME byte GEN_THISCALL F_00510160(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x510160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  char * pcVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  short sVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  byte bVar14;
  char * pcVar15;
  ushort * puVar16;
  float * pfVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  ushort uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  ushort uVar28;
  uint uVar29;
  float10 fVar30;
  float10 fVar31;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  iVar27 = *(int *)((int)this + 0xa8);
  iVar20 = *(int *)(iVar27 + 4);
  bVar3 = *(byte *)(iVar20 + 0x1e + iVar27);
  bVar14 = *(byte *)(iVar20 + 0x22 + iVar27);
  uVar21 = *(ushort *)(iVar20 + 0xe + iVar27);
  uVar22 = (uint)*(ushort *)(iVar20 + 0x10 + iVar27);
  uVar28 = *(ushort *)(iVar20 + 0x2e + iVar27);
  sVar6 = *(short *)(iVar20 + 0x2c + iVar27);
  uVar23 = (uint)*(ushort *)(iVar20 + 0x12 + iVar27);
  uVar7 = *(ushort *)(iVar20 + 0x14 + iVar27);
  uVar24 = (uint)uVar7;
  uVar8 = *(ushort *)(iVar20 + 0x16 + iVar27);
  uVar18 = (uint)*(ushort *)(iVar20 + 0x20 + iVar27);
  uVar9 = *(ushort *)(iVar20 + 0x18 + iVar27);
  uVar10 = *(ushort *)(iVar20 + 0x1a + iVar27);
  uVar29 = (uint)*(ushort *)(iVar20 + 0xc + iVar27);
  uVar25 = (uint)*(ushort *)(iVar20 + 0x1c + iVar27);
  *(int *)((int)this + 0x108) = *(int *)((int)this + 0xac) + iVar27;
  *(uint *)((int)this + 0x124) = iVar27 + uVar29 * 4 + *(int *)((int)this + 0xac);
  bVar4 = *((byte *)GEN_TOP((*(int *)(iVar27 + 4) + 0x23 + iVar27)));
  iVar11 = (uint)bVar14 * 0x14;
  iVar12 = (uint)uVar28 * 0xc;
  iVar26 = (uint)uVar8 * 0x84;
  iVar13 = (uint)uVar10 * 0xc;
  if (uVar18 != 0) {
    *(int *)((int)this + 0xb4) = iVar27 + 0x40 + iVar20;
  }
  iVar20 = iVar20 + 0x40 + uVar18 * 0x20;
  iVar2 = iVar20 + 0xb4 + (-(uint)((bVar4 & 0x10) != 0) & 0x78);
  iVar19 = iVar2 + uVar29 * 0x24;
  *(int *)((int)this + 0xbc) = iVar27 + iVar2;
  *(int *)((int)this + 0xb8) = iVar27 + iVar20;
  if (iVar11 != 0) {
    *(int *)((int)this + 0xc0) = iVar27 + iVar19;
  }
  iVar19 = iVar19 + iVar11;
  if (uVar21 != 0) {
    *(int *)((int)this + 0xc4) = iVar27 + iVar19;
  }
  iVar19 = (uint)uVar21 * 4 + iVar19;
  if (uVar22 != 0) {
    *(int *)((int)this + 200) = iVar27 + iVar19;
  }
  iVar19 = iVar19 + uVar22 * 0x10;
  if (iVar12 != 0) {
    *(int *)((int)this + 0xcc) = iVar27 + iVar19;
  }
  iVar19 = iVar19 + iVar12;
  if (uVar23 != 0) {
    *(int *)((int)this + 0xd0) = iVar27 + iVar19;
  }
  iVar19 = iVar19 + uVar23 * 4;
  if (uVar24 != 0) {
    *(int *)((int)this + 0xd4) = iVar27 + iVar19;
  }
  iVar19 = iVar19 + uVar24 * 4;
  if (iVar26 != 0) {
    *(int *)((int)this + 0xd8) = iVar27 + iVar19;
  }
  iVar19 = iVar19 + iVar26;
  if (uVar9 != 0) {
    *(int *)((int)this + 0xdc) = iVar27 + iVar19;
  }
  iVar19 = iVar19 + (uint)uVar9 * 0x10;
  if (iVar13 != 0) {
    *(int *)((int)this + 0xe0) = iVar27 + iVar19;
  }
  iVar19 = iVar19 + iVar13;
  if (uVar25 != 0) {
    *(int *)((int)this + 0xe4) = iVar27 + iVar19;
  }
  iVar19 = uVar25 * 4 + iVar19;
  *(int * PTR32 *)((int)this + 0xe8) = (int *)(iVar27 + iVar19);
  iVar20 = *(int *)(iVar27 + iVar19);
  if (iVar20 != 0) {
    *(int *)((int)this + 0xec) = iVar27 + 4 + iVar19;
  }
  iVar19 = iVar20 + 4 + iVar19;
  iVar19 = *(byte *)(iVar27 + iVar19) + 1 + iVar19;
  *(int *)((int)this + 0xf0) = iVar27 + iVar19;
  uVar18 = *(uint *)((int)this + 0x98);
  if (uVar18 < 0x1000003) {
    iVar19 = iVar19 + 0x20;
  }
  else {
    *(int *)((int)this + 0xf4) = iVar27 + 0x20 + iVar19;
    *(int *)((int)this + 0xf8) = iVar27 + 0x40 + iVar19;
    iVar19 = iVar19 + 0x60;
  }
  if (0x1000003 < uVar18) {
    *(int *)((int)this + 0xfc) = iVar27 + iVar19;
    iVar19 = iVar19 + 0x20;
  }
  if (uVar18 < 0x1000005) {
    iVar20 = uVar29 << 5;
  }
  else {
    iVar20 = 0;
  }
  if (uVar24 != 0) {
    *(int *)((int)this + 0x100) = iVar27 + iVar19 + iVar20;
  }
  if (sVar6 != 0) {
    *(uint *)((int)this + 0x104) = iVar27 + iVar19 + iVar20 + uVar24 * 0x20;
  }
  uVar28 = 0;
  if (uVar21 != 0) {
    (*(int *)(gen_frame + 0x8)) = 0;
    do {
      uVar18 = ((uint *)(gen_frame + 0x1c))[0];
      pcVar1 = ((char *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc4) + (*(int *)(gen_frame + 0x8))))) + 8 +
                       *(int *)((int)this + 0xa8))));
      (*(uint *)(gen_frame + 0x30)) = 0xf;
      (*(undefined4 *)(gen_frame + 0x2c)) = 0;
      (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x1c))[0] + 0)) = 0;
      ((uint *)(gen_frame + 0x1c))[0] = uVar18 & 0xffffff00;
      pcVar15 = pcVar1;
      do {
        cVar5 = *pcVar15;
        pcVar15 = pcVar15 + 1;
      } while (cVar5 != '\0');
      F_004e5c20(((uint *)(gen_frame + 0x1c)) GEN_EDX_FWD,pcVar1,(int)pcVar15 - (int)(pcVar1 + 1));
      puVar16 = (ushort *)F_0052d2e0((undefined *)((int)this + 300) GEN_EDX_ARG,((uint *)(gen_frame + 0x1c)));
      *puVar16 = uVar28;
      if (0xf < (*(uint *)(gen_frame + 0x30))) {
        F_00429760(((uint *)(gen_frame + 0x1c))[0],(*(uint *)(gen_frame + 0x30)) + 1,0x32);
      }
      (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 4;
      uVar28 = uVar28 + 1;
    } while (uVar28 < uVar21);
  }
  uVar21 = 0;
  if (uVar7 != 0) {
    (*(uint *)(gen_frame + 0xc)) = 0;
    do {
      uVar18 = ((uint *)(gen_frame + 0x1c))[0];
      pcVar1 = ((char *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xd4) + (*(uint *)(gen_frame + 0xc))))) + 8 +
                       *(int *)((int)this + 0xa8))));
      (*(uint *)(gen_frame + 0x30)) = 0xf;
      (*(undefined4 *)(gen_frame + 0x2c)) = 0;
      (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x1c))[0] + 0)) = 0;
      ((uint *)(gen_frame + 0x1c))[0] = uVar18 & 0xffffff00;
      pcVar15 = pcVar1;
      do {
        cVar5 = *pcVar15;
        pcVar15 = pcVar15 + 1;
      } while (cVar5 != '\0');
      F_004e5c20(((uint *)(gen_frame + 0x1c)) GEN_EDX_ARG,pcVar1,(int)pcVar15 - (int)(pcVar1 + 1));
      puVar16 = (ushort *)F_0052d2e0((undefined *)((int)this + 0x13c) GEN_EDX_ARG,((uint *)(gen_frame + 0x1c)));
      *puVar16 = uVar21;
      if (0xf < (*(uint *)(gen_frame + 0x30))) {
        F_00429760(((uint *)(gen_frame + 0x1c))[0],(*(uint *)(gen_frame + 0x30)) + 1,0x32);
      }
      (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 4;
      uVar21 = uVar21 + 1;
    } while (uVar21 < uVar7);
  }
  uVar21 = 0;
  if ((uVar9 != 0) && (uVar9 != 0)) {
    (*(int *)(gen_frame + 0x14)) = 0;
    do {
      uVar18 = ((uint *)(gen_frame + 0x1c))[0];
      pcVar1 = ((char *)GEN_TOP((*((int *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + *(int *)((int)this + 0xdc)))) + 8 +
                       *(int *)((int)this + 0xa8))));
      (*(uint *)(gen_frame + 0x30)) = 0xf;
      (*(undefined4 *)(gen_frame + 0x2c)) = 0;
      (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x1c))[0] + 0)) = 0;
      ((uint *)(gen_frame + 0x1c))[0] = uVar18 & 0xffffff00;
      pcVar15 = pcVar1;
      do {
        cVar5 = *pcVar15;
        pcVar15 = pcVar15 + 1;
      } while (cVar5 != '\0');
      F_004e5c20(((uint *)(gen_frame + 0x1c)) GEN_EDX_ARG,pcVar1,(int)pcVar15 - (int)(pcVar1 + 1));
      puVar16 = (ushort *)F_0052d2e0((undefined *)((int)this + 0x14c) GEN_EDX_ARG,((uint *)(gen_frame + 0x1c)));
      *puVar16 = uVar21;
      if (0xf < (*(uint *)(gen_frame + 0x30))) {
        F_00429760(((uint *)(gen_frame + 0x1c))[0],(*(uint *)(gen_frame + 0x30)) + 1,0x32);
      }
      (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 0x10;
      uVar21 = uVar21 + 1;
    } while (uVar21 < uVar9);
  }
  bVar14 = F_00504330(this GEN_EDX_ARG,*(undefined4 *)((int)this + 0xa4),uVar29);
  if (bVar14 != 0) {
    fVar30 = (float10)*(double *)&REFG(undefined, 0x1090710);
    uVar18 = 0;
    pfVar17 = (float *)((int)this + 0x170);
    do {
      iVar27 = *(int *)((int)this + 0xb8) + (uVar18 & 0xff) * 0x3c;
      uVar18 = uVar18 + 1;
      pfVar17[-2] = ((float)GEN_TOF(((float10)*(float *)(iVar27 + 4) + fVar30)));
      *pfVar17 = ((float)GEN_TOF(((float10)*(float *)(iVar27 + 8) + fVar30)));
      pfVar17 = pfVar17 + 1;
    } while (uVar18 < 2);
    *(byte *)((int)this + 0x17c) = bVar3;
    *(undefined4 *)((int)this + 0x178) = 0;
    *(byte *)((int)this + 0x17d) = bVar3 - 1;
    if (1 < bVar3) {
      iVar27 = *(int *)((int)this + 0xb8) + (bVar3 - 2 & 0xff) * 0x3c;
      fVar30 = (float10)*(float *)(iVar27 + 8);
      fVar31 = (float10)*(float *)(iVar27 + 4);
      if (fVar30 < fVar31) {
        fVar30 = fVar31;
      }
      *(float *)((int)this + 0x178) = ((float)GEN_TOF(SQRT(fVar30)));
    }
    (*(uint *)(gen_frame + 0xc)) = (uint)bVar3;
    if (bVar3 != 0) {
      (*(int *)(gen_frame + 0x14)) = 0;
      do {
        puVar16 = ((ushort *)GEN_TOP((*(int *)((int)this + 0xb8) + (*(int *)(gen_frame + 0x14)))));
        iVar27 = 0;
        uVar18 = (uint)*puVar16;
        uVar22 = puVar16[1] + uVar18;
        if (uVar18 < uVar22) {
          (*(uint *)(gen_frame + 0x10)) = uVar18;
          do {
            iVar20 = uVar18 * 0x24;
            (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) + 1;
            uVar18 = (*(uint *)(gen_frame + 0x10)) & 0xffff;
            iVar27 = iVar27 + *((uint *)GEN_TOP((*(int *)((int)this + 0xbc) + 4 + iVar20))) / 3;
          } while (uVar18 < uVar22);
        }
        uVar18 = (uint)puVar16[6];
        uVar22 = puVar16[7] + uVar18;
        if (uVar18 < uVar22) {
          (*(uint *)(gen_frame + 0x10)) = uVar18;
          do {
            iVar20 = uVar18 * 0x24;
            (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) + 1;
            uVar18 = (*(uint *)(gen_frame + 0x10)) & 0xffff;
            iVar27 = iVar27 + *((uint *)GEN_TOP((*(int *)((int)this + 0xbc) + 4 + iVar20))) / 3;
          } while (uVar18 < uVar22);
        }
        uVar18 = (uint)puVar16[0xc];
        uVar22 = puVar16[0xd] + uVar18;
        if (uVar18 < uVar22) {
          (*(uint *)(gen_frame + 0x10)) = uVar18;
          do {
            iVar20 = uVar18 * 0x24;
            (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) + 1;
            uVar18 = (*(uint *)(gen_frame + 0x10)) & 0xffff;
            iVar27 = iVar27 + *((uint *)GEN_TOP((*(int *)((int)this + 0xbc) + 4 + iVar20))) / 3;
          } while (uVar18 < uVar22);
        }
        (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 0x3c;
        (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) - 1;
        *(int *)(puVar16 + 0x12) = iVar27;
      } while ((*(uint *)(gen_frame + 0xc)) != 0);
    }
    if ((*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xa8) + 4))) + 0x1f + *(int *)((int)this + 0xa8)))) & 4
        ) == 0) {
      *(undefined1 *)((int)this + 299) = 1;
    }
    if (*(int *)((int)this + 0xa4) != 0) {
      F_00406b30(*(int *)((int)this + 0xa4));
      *(undefined4 *)((int)this + 0xa4) = 0;
    }
    F_004ffdd0(this GEN_EDX_ARG);
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
    return 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_005107f0 */
GEN_FRAME byte GEN_THISCALL F_005107f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5107f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  char cVar2;
  int * piVar3;
  int * piVar4;
  undefined * this_00;
  undefined4 * puVar5;
  uint uVar6;
  uint * puVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined4 * PTR32 * ppuVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  uVar11 = F_00427e30();
  puVar7 = *(uint * PTR32 *)((int)this + 0xdd4);
  (*(int *)(gen_frame + 0xc)) = *(int *)((int)this + 0xdd8) - *(int *)((int)this + 0xdd4) >> 2;
  (*(uint * PTR32 *)(gen_frame + 0x18)) = puVar7;
  if (puVar7 == *(uint * PTR32 *)((int)this + 0xdd8)) {
    return 0;
  }
  do {
    piVar3 = (int *)*puVar7;
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)piVar3[0x21]);
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x68))(piVar3 GEN_EDX_ARG);
    if (((char)uVar6 == '\0') || ((piVar3[0xc] & 0xc000000U) != 0)) {
      puVar7 = puVar7 + 1;
      (*(uint * PTR32 *)(gen_frame + 0x18)) = puVar7;
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)piVar3[0x21]);
    }
    else {
      LOCK();
      piVar3[0x25] = piVar3[0x25];
      UNLOCK();
      piVar1 = piVar3 + 0x22;
      LOCK();
      *piVar1 = *piVar1;
      UNLOCK();
      F_00509c70(this GEN_EDX_ARG,piVar3,0);
      F_00509f00(this GEN_EDX_ARG,piVar3,0);
      if (*(uint * PTR32 *)((int)this + 0xde4) != *(uint * PTR32 *)((int)this + 0xde8)) {
        puVar7 = ((uint *)GEN_TOP((*(int *)((int)this + 0xde8) - 4)));
        piVar4 = (int *)*puVar7;
        while (piVar4 != piVar3) {
          if (puVar7 == *(uint * PTR32 *)((int)this + 0xde4)) goto LAB_005108e3;
          puVar7 = puVar7 - 1;
          piVar4 = (int *)*puVar7;
        }
        F_00c46e20(puVar7,puVar7 + 1,(*(int *)((int)this + 0xde8) - (int)(puVar7 + 1) >> 2) * 4);
        *(int *)((int)this + 0xde8) = *(int *)((int)this + 0xde8) - 4;
      }
LAB_005108e3: ;
      F_00507ea0(*(undefined * PTR32 *)((int)this + 0xc) GEN_EDX_ARG,piVar3);
      ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 100))(piVar3 GEN_EDX_ARG);
      _InterlockedExchange((volatile long *)(piVar1), (long)(4));
      this_00 = *(undefined * PTR32 *)((int)this + 0xc);
      puVar9 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this_00 + 4))[1]));
      cVar2 = *(char *)((int)puVar9 + 0x21);
      puVar5 = *(undefined4 * PTR32 *)((int)this_00 + 4);
      while (cVar2 == '\0') {
        if ((int *)puVar9[3] < piVar3) {
          puVar8 = (undefined4 *)puVar9[2];
          puVar9 = puVar5;
        }
        else {
          puVar8 = (undefined4 *)*puVar9;
        }
        puVar5 = puVar9;
        puVar9 = puVar8;
        cVar2 = *(char *)((int)puVar8 + 0x21);
      }
      puVar9 = *(undefined4 * PTR32 *)((int)this_00 + 4);
      (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = puVar5;
      if ((puVar5 == puVar9) || (piVar3 < (int *)puVar5[3])) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar9;
        ppuVar10 = &(*(undefined4 * PTR32 *)(gen_frame + 0x10));
      }
      else {
        ppuVar10 = &(*(undefined4 * PTR32 *)(gen_frame + 0x14));
      }
      if (puVar9 != *ppuVar10) {
        F_0052d060(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),*ppuVar10);
      }
      if ((*(int *)(gen_frame + 0xc)) == *(int *)((int)this + 0xdd8) - *(int *)((int)this + 0xdd4) >> 2) {
        F_00c46e20((*(uint * PTR32 *)(gen_frame + 0x18)),(*(uint * PTR32 *)(gen_frame + 0x18)) + 1,(*(int *)((int)this + 0xdd8) - (int)((*(uint * PTR32 *)(gen_frame + 0x18)) + 1) >> 2) * 4);
LAB_005109bb: ;
        *(int *)((int)this + 0xdd8) = *(int *)((int)this + 0xdd8) - 4;
      }
      else {
        for (puVar7 = *(uint * PTR32 *)((int)this + 0xdd4); puVar7 != *(uint * PTR32 *)((int)this + 0xdd8);
            puVar7 = puVar7 + 1) {
          if ((int *)*puVar7 == piVar3) {
            F_00c46e20(puVar7,puVar7 + 1,(*(int *)((int)this + 0xdd8) - (int)(puVar7 + 1) >> 2) * 4)
            ;
            (*(uint * PTR32 *)(gen_frame + 0x18)) = puVar7;
            goto LAB_005109bb;
          }
        }
      }
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)piVar3[0x21]);
      ((GEN_TCODE *)*(gen_code32 *)*piVar3)(piVar3 GEN_EDX_ARG,1);
      puVar7 = (*(uint * PTR32 *)(gen_frame + 0x18));
    }
    uVar12 = F_00427e30();
    uVar6 = (uint)(uVar12 >> 0x20);
    (*(uint *)(gen_frame + 0x4)) = (uint)(uVar11 + 3000 >> 0x20);
    if (((*(uint *)(gen_frame + 0x4)) < uVar6) ||
       (((*(uint *)(gen_frame + 0x4)) <= uVar6 && ((*(uint *)(gen_frame + 0x0)) = (uint)(uVar11 + 3000), (*(uint *)(gen_frame + 0x0)) < (uint)uVar12)))) {
      return 1;
    }
    if (puVar7 == *(uint * PTR32 *)((int)this + 0xdd8)) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00510a30 */
GEN_FRAME byte GEN_THISCALL F_00510a30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x510a30u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  
  F_00526ca0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(int *)(gen_frame + 0x28)),&(*(undefined4 *)&gen_args[2]));
  iVar4 = (*(int *)(gen_frame + 0x28));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) == (*(int *)(gen_frame + 0x28))) {
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    puVar2 = (undefined4 *)F_004296a0(0x18,0,0x12e);
    uVar1 = (*(undefined4 *)&gen_args[2]);
    (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = puVar2;
    *puVar2 = puVar2;
    puVar2[1] = puVar2;
    puVar2[2] = puVar2;
    *(undefined1 *)(puVar2 + 5) = 1;
    *(undefined1 *)((int)puVar2 + 0x15) = 1;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    puVar2 = (undefined4 *)F_004296a0(0x18,0,0x12e);
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar2;
    *puVar2 = puVar2;
    puVar2[1] = puVar2;
    puVar2[2] = puVar2;
    *(undefined1 *)(puVar2 + 5) = 1;
    *(undefined1 *)((int)puVar2 + 0x15) = 1;
    F_00528b00(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
    puVar2 = (undefined4 *)F_004296a0(0x24,0,0x12e);
    *puVar2 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
    puVar2[1] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
    puVar2[2] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
    *(undefined2 *)(puVar2 + 8) = 0;
    if (puVar2 + 3 != (undefined4 *)0x0) {
      puVar2[3] = uVar1;
      puVar2[6] = 0;
      uVar3 = F_004296a0(0x18,0,0x12e);
      puVar2[5] = uVar3;
      *(uint *)uVar3 = uVar3;
      *(undefined4 *)(puVar2[5] + 4) = puVar2[5];
      *(undefined4 *)(puVar2[5] + 8) = puVar2[5];
      *(undefined1 *)(puVar2[5] + 0x14) = 1;
      *(undefined1 *)(puVar2[5] + 0x15) = 1;
      F_00528b00(puVar2 + 4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
    }
    F_0052d460((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x24)),puVar2,0);
    F_00527040(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[2]),*(*(undefined4 * PTR32 *)(gen_frame + 0x8)),(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
    F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x8)),0x18,0x12e);
    F_00527040(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[2]),*(*(undefined4 * PTR32 *)(gen_frame + 0x18)),(*(undefined4 * PTR32 *)(gen_frame + 0x18)));
    F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x18)),0x18,0x12e);
    iVar4 = (*(int *)(gen_frame + 0x24));
  }
  puVar2 = (undefined4 *)F_004296a0(0x18,0,0x12e);
  *puVar2 = *(undefined4 *)(iVar4 + 0x14);
  puVar2[1] = *(undefined4 *)(iVar4 + 0x14);
  puVar2[2] = *(undefined4 *)(iVar4 + 0x14);
  *(undefined2 *)(puVar2 + 5) = 0;
  if (puVar2 + 3 != (undefined4 *)0x0) {
    puVar2[3] = (*(undefined4 *)&gen_args[1]);
    puVar2[4] = 0;
  }
  F_00526030((undefined *)(iVar4 + 0x10) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x24)),puVar2,0);
  *(int *)((*(int *)(gen_frame + 0x24)) + 0x10) = *(int *)((*(int *)(gen_frame + 0x24)) + 0x10) + 1;
  return (byte)(*(int *)(gen_frame + 0x28));
}

/* ref: FUN_00510c00 */
GEN_FRAME uint GEN_THISCALL F_00510c00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x510c00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109bc44));
  F_0052c950((undefined *)((int)this + 0x14c) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x150),
               *(undefined4 * PTR32 *)((int)this + 0x150));
  F_00429760(*(undefined4 *)((int)this + 0x150),0x30,0xd4);
  F_0052c950((undefined *)((int)this + 0x13c) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x140),
               *(undefined4 * PTR32 *)((int)this + 0x140));
  F_00429760(*(undefined4 *)((int)this + 0x140),0x30,0xd4);
  F_0052c950((undefined *)((int)this + 300) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x130),
               *(undefined4 * PTR32 *)((int)this + 0x130));
  F_00429760(*(undefined4 *)((int)this + 0x130),0x30,0xd4);
  uVar1 = F_00508230(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00510cb0 */
GEN_FRAME uint GEN_THISCALL F_00510cb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x510cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0xdd4);
  if (uVar2 != *(uint *)((int)this + 0xdd8)) {
    if ((char)param_1 == '\0') {
      bVar1 = F_005107f0(this GEN_EDX_FWD);
      if (bVar1 != 0) {
        return CONCAT31(extraout_var,bVar1);
      }
    }
    else {
      do {
        bVar1 = F_005107f0(this GEN_EDX_ARG);
      } while (bVar1 != 0);
    }
    uVar2 = 0;
    *(undefined1 *)((int)this + 0x51) = 0;
    *(undefined4 *)((int)this + 0x52) = 0;
    *(undefined4 *)((int)this + 0x56) = 0;
    *(undefined4 *)((int)this + 0x5a) = 0;
    *(undefined4 *)((int)this + 0x5e) = 0;
    *(undefined4 *)((int)this + 0x62) = 0;
  }
  return uVar2;
}

/* ref: FUN_00510d00 */
GEN_FRAME unsigned int GEN_THISCALL F_00510d00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x510d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int iVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  int * piVar6;
  
  piVar2 = (*(int * PTR32 *)&gen_args[2]);
  piVar6 = (*(int * PTR32 *)&gen_args[1]);
  if ((*(int * PTR32 *)&gen_args[2]) != (int *)0x0) {
    if (*(*(int * PTR32 *)&gen_args[2]) != 0) {
      F_00510a30(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) GEN_EDX_FWD,*(*(int * PTR32 *)&gen_args[2]),(*(int * PTR32 *)&gen_args[1]));
      piVar5 = piVar6 + 0x22;
      iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar5), 0);
      if (iVar1 == 2) {
        if ((char)(*(undefined4 *)&gen_args[3]) == '\0') {
          F_00508060(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) GEN_EDX_ARG,piVar6);
        }
        else {
          uVar3 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xdc8))) - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xdc4))) >> 2;
          uVar4 = 0;
          if (uVar3 != 0) {
            piVar5 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xdc4)));
            do {
              if ((int *)*piVar5 == piVar6) goto LAB_00510d83;
              uVar4 = uVar4 + 1;
              piVar5 = piVar5 + 1;
            } while (uVar4 < uVar3);
          }
          F_005291e0(((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xdc4))) GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[1]));
          piVar6 = (*(int * PTR32 *)&gen_args[1]);
        }
      }
    }
LAB_00510d83: ;
    if (*(byte *)(piVar2 + 5) != 0xff) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x34))
                (piVar6 GEN_EDX_ARG,(uint)*(byte *)(piVar2 + 5),piVar2[6],(uint)*(byte *)(piVar2 + 7));
    }
  }
  return;
}

/* ref: FUN_00510db0 */
GEN_NOFRAME uint F_00510db0(void)
{
  GEN_ENTER(0x510db0u, 0u, 0u, 0u, 0u);
  undefined * this;
  byte bVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  this = REFG(void * PTR32, 0x1375aec);
  uVar2 = gen_imp_GetCurrentThreadId();
  if (uVar2 == *(DWORD *)((int)this + 0x40)) {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x20));
    F_00510020(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG);
    if (*(int *)((int)this + 0xdd4) != *(int *)((int)this + 0xdd8)) {
      do {
        bVar1 = F_005107f0(this GEN_EDX_ARG);
      } while (bVar1 != 0);
      *(undefined1 *)((int)this + 0x51) = 0;
      *(undefined4 *)((int)this + 0x52) = 0;
      *(undefined4 *)((int)this + 0x56) = 0;
      *(undefined4 *)((int)this + 0x5a) = 0;
      *(undefined4 *)((int)this + 0x5e) = 0;
      *(undefined4 *)((int)this + 0x62) = 0;
    }
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x20));
    uVar2 = extraout_EAX;
  }
  *(undefined1 *)((int)this + 0x51) = 1;
  return uVar2;
}

/* ref: FUN_00510e20 */
GEN_FRAME uint F_00510e20(unsigned int gen_a0)
{
  GEN_ENTER(0x510e20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int iVar1;
  undefined * this;
  undefined * this_00;
  byte bVar2;
  DWORD DVar3;
  uint extraout_EAX = 0;
  
  this_00 = REFG(void * PTR32, 0x1375aec);
  DVar3 = gen_imp_GetCurrentThreadId();
  if (DVar3 != *(DWORD *)((int)this_00 + 0x40)) {
    *((undefined1 *)GEN_TOP(((param_1 & 0xffff) + 0x52 + (int)this_00))) = 1;
    return param_1 & 0xffff;
  }
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this_00 + 0x20));
  iVar1 = *(int *)((int)this_00 + 8);
  this = *((undefined * PTR32 *)GEN_TOP((iVar1 + (param_1 & 0xffff) * 4)));
  if (this != (undefined *)0x0) {
    *(int *)(iVar1 + 0x50) = *(int *)(iVar1 + 0x50) - *(int *)((int)this + 0x10);
    F_0050c650(this GEN_EDX_ARG);
    F_00406ad0(this);
  }
  *((undefined4 *)GEN_TOP((iVar1 + (param_1 & 0xffff) * 4))) = 0;
  if (*(int *)((int)this_00 + 0xdd4) != *(int *)((int)this_00 + 0xdd8)) {
    do {
      bVar2 = F_005107f0(this_00 GEN_EDX_ARG);
    } while (bVar2 != 0);
    *(undefined1 *)((int)this_00 + 0x51) = 0;
    *(undefined4 *)((int)this_00 + 0x52) = 0;
    *(undefined4 *)((int)this_00 + 0x56) = 0;
    *(undefined4 *)((int)this_00 + 0x5a) = 0;
    *(undefined4 *)((int)this_00 + 0x5e) = 0;
    *(undefined4 *)((int)this_00 + 0x62) = 0;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this_00 + 0x20));
  return extraout_EAX;
}

/* ref: FUN_00510ed0 */
GEN_FRAME uint GEN_THISCALL F_00510ed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x510ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD,param_2,param_3);
  if (uVar2 == 0) {
    bVar1 = false;
    uVar3 = F_0040dd00();
    F_00510e20((uint)*(ushort *)((int)this + 4));
    F_004cee80();
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_ARG,param_2,param_3);
    while ((uVar2 == 0 && (uVar4 = F_0040dd00(), uVar4 <= uVar3 + 5000))) {
      if ((!bVar1) && (uVar3 + 1000 < uVar4)) {
        F_00510db0();
        bVar1 = true;
      }
      F_004cee80();
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_ARG,param_2,param_3);
    }
  }
  return uVar2;
}

/* ref: FUN_00510f80 */
GEN_FRAME uint GEN_THISCALL F_00510f80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x510f80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  ushort * puVar6;
  undefined * this_01;
  bool bVar7;
  
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x4c))(this GEN_EDX_FWD);
  iVar1 = *(int *)(param_1 + 200);
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x4c))(this GEN_EDX_ARG);
  uVar5 = ~(uVar3 - 1) & (uVar2 - 1) + iVar1;
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x4c))(this GEN_EDX_ARG);
  uVar3 = F_00404310();
  piVar4 = (int *)F_00510ed0(this GEN_EDX_ARG,uVar3,uVar5,uVar2);
  *param_2 = piVar4;
  if (piVar4 == (int *)0x0) {
    return 0xfffffff6;
  }
  if (param_3 != (uint *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 8))(piVar4 GEN_EDX_ARG);
    *param_3 = uVar2;
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 4))(piVar4 GEN_EDX_ARG);
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x44) + 0xa70 + *(int *)(param_1 + 0xd8) * 4)));
  this_01 = *(undefined * PTR32 *)(param_1 + 0xdc);
  (*(uint *)(gen_frame + 0x10)) = uVar2;
  iVar1 = *(int *)(param_1 + 0xe8);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this_01;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this_00;
  uVar2 = *(int *)(param_1 + 0x58) * 0x80;
  F_004f78b0(this_00 GEN_EDX_ARG,0,0,1,&(*(uint *)(gen_frame + 0x0)));
  if (((uVar2 < 0x400001) && (*(int *)((int)this + 0x14) == 0)) && (*(int *)((int)this + 0x18) == 0)
     ) {
    *(uint *)((int)this + 0x24) = uVar2;
    *(undefined4 *)((int)this + 0x28) = 0;
    uVar3 = F_004f9290(this_01 GEN_EDX_ARG,uVar2,"Client.System.File.FileThread.Spurs");
    (*(ushort * PTR32 *)(gen_frame + 0x8)) = (ushort *)uVar3;
    F_004f8a90((*(undefined * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,uVar3,uVar2,0,(*(uint *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x4)));
    bVar7 = CARRY4((*(uint *)(gen_frame + 0x0)),uVar2);
    (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) + uVar2;
    (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + (uint)bVar7;
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xac))(this GEN_EDX_ARG);
    param_1 = 0;
    param_2 = (undefined4 *)0x0;
    (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)0x0;
    if (*(int *)(iVar1 + 0x14) != 0) {
      puVar6 = (ushort *)(iVar1 + 0x1e);
      do {
        uVar2 = (uint)*puVar6;
        (*(uint *)(gen_frame + 0xc)) = (uint)puVar6[-1];
        F_004f81e0((*(undefined * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,6,param_1 + (int)(*(ushort * PTR32 *)(gen_frame + 0x8)),(uint)puVar6[-1],(int)param_2 + (*(uint *)(gen_frame + 0x10)),
                     uVar2 + 0xf & 0xfffffff0);
        param_1 = param_1 + (*(uint *)(gen_frame + 0xc));
        param_2 = (undefined4 *)((int)param_2 + uVar2);
        *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
        uVar2 = (int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 1;
        puVar6 = puVar6 + 4;
        (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)uVar2;
      } while (uVar2 < *(uint *)(iVar1 + 0x14));
      return 0x20;
    }
  }
  else {
    *(undefined4 *)((int)this + 0x24) = 0;
    *(undefined4 *)((int)this + 0x28) = 0;
    param_2 = (undefined4 *)0x0;
    (*(uint *)(gen_frame + 0xc)) = 0;
    if (*(int *)(iVar1 + 0x14) != 0) {
      (*(ushort * PTR32 *)(gen_frame + 0x8)) = (ushort *)(iVar1 + 0x1e);
      do {
        uVar2 = (uint)*(*(ushort * PTR32 *)(gen_frame + 0x8));
        uVar3 = (uint)(*(ushort * PTR32 *)(gen_frame + 0x8))[-1];
        if ((*(uint *)((int)this + 0x14) == 0) ||
           (*(uint *)((int)this + 0x14) <= (int)param_2 + uVar2)) {
          uVar5 = F_004f9290(this_01 GEN_EDX_ARG,uVar3,"Client.System.File.FileThread.Spurs");
          F_004f8a90((*(undefined * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,uVar5,uVar3,0,(*(uint *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x4)));
          bVar7 = CARRY4((*(uint *)(gen_frame + 0x0)),uVar3);
          (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) + uVar3;
          (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + (uint)bVar7;
          ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xa8))(this GEN_EDX_ARG);
          F_004f81e0((*(undefined * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,6,uVar5,uVar3,(int)param_2 + (*(uint *)(gen_frame + 0x10)),uVar2 + 0xf & 0xfffffff0);
          *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + uVar3;
          *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
          this_01 = (*(undefined * PTR32 *)(gen_frame + 0x18));
        }
        else {
          bVar7 = CARRY4((*(uint *)(gen_frame + 0x0)),uVar3);
          (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) + uVar3;
          (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + (uint)bVar7;
        }
        param_2 = (undefined4 *)((int)param_2 + uVar2);
        if ((*(int *)((int)this + 0x18) != 0) &&
           ((uint)(*(int *)((int)this + 0x14) + *(int *)((int)this + 0x18)) < param_2)) {
          return 0x20;
        }
        uVar2 = (*(uint *)(gen_frame + 0xc)) + 1;
        (*(ushort * PTR32 *)(gen_frame + 0x8)) = (*(ushort * PTR32 *)(gen_frame + 0x8)) + 4;
        (*(uint *)(gen_frame + 0xc)) = uVar2;
      } while (uVar2 < *(uint *)(iVar1 + 0x14));
    }
  }
  return 0x20;
}

/* ref: Client::System::Resource::Handle::DefaultResourceHandle::vf32 */
GEN_FRAME uint GEN_THISCALL F_00511200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x511200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * pDVar1;
  undefined * pDVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  
  piVar3 = *(int * PTR32 *)(this + 0x98);
  pDVar1 = this + 0x98;
  if (piVar3 != (int *)0x0) {
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_FWD)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)pDVar1);
    *(undefined4 *)pDVar1 = 0;
  }
  pDVar2 = this + 0x9c;
  *(uint *)pDVar2 = 0;
  if (*param_1 == 0xb) {
    if ((1 < (uint)param_1[0x13]) && (uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xa4))(this GEN_EDX_ARG), uVar4 == 0))
    {
      uVar4 = F_00510f80(this GEN_EDX_ARG,param_1,pDVar1,pDVar2);
      return uVar4;
    }
    if (((*param_1 == 0xb) && (1 < (uint)param_1[0x13])) &&
       (uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xa4))(this GEN_EDX_ARG), uVar4 == 1)) {
      piVar3 = *(int * PTR32 *)(this + 0x38);
      if (piVar3 == (int *)0x0) {
        return 0xfffffff6;
      }
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 8))(piVar3 GEN_EDX_ARG);
      if (uVar4 == 0) {
        return 0xfffffff6;
      }
    }
  }
  uVar6 = *(undefined4 *)(this + 0x1c);
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x4c))(this GEN_EDX_ARG);
  uVar7 = uVar6;
  uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x50))(this GEN_EDX_ARG);
  piVar3 = (int *)F_00510ed0(this GEN_EDX_ARG,uVar5,uVar7,uVar4);
  *(int * PTR32 *)pDVar1 = piVar3;
  if (piVar3 == (int *)0x0) {
    return 0xfffffff6;
  }
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 8))(piVar3 GEN_EDX_ARG);
  *(uint *)pDVar2 = uVar4;
  iVar9 = param_1[5];
  iVar8 = param_1[4];
  uVar7 = 0;
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pDVar1 + 4))))(*(int * PTR32 *)pDVar1 GEN_EDX_ARG);
  uVar4 = F_00504190(param_1,uVar4,uVar6,uVar7,iVar8,iVar9,param_2);
  return uVar4;
}

/* ref: FUN_00511320 */
GEN_FRAME uint GEN_THISCALL F_00511320(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x511320u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[44])REFP(0x109bc44));
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
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0x10000;
  *(undefined4 *)((int)this + 0x134) = 0;
  uVar1 = F_004296a0(0x30,0,0xd4);
  *(uint *)((int)this + 0x130) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x130) + 4))) = *(int *)((int)this + 0x130);
  *((int *)GEN_TOP((*(int *)((int)this + 0x130) + 8))) = *(int *)((int)this + 0x130);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x130) + 0x2c))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x130) + 0x2d))) = 1;
  *(undefined4 *)((int)this + 0x144) = 0;
  uVar1 = F_004296a0(0x30,0,0xd4);
  *(uint *)((int)this + 0x140) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x140) + 4))) = *(int *)((int)this + 0x140);
  *((int *)GEN_TOP((*(int *)((int)this + 0x140) + 8))) = *(int *)((int)this + 0x140);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x140) + 0x2c))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x140) + 0x2d))) = 1;
  *(undefined4 *)((int)this + 0x154) = 0;
  uVar1 = F_004296a0(0x30,0,0xd4);
  *(uint *)((int)this + 0x150) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x150) + 4))) = *(int *)((int)this + 0x150);
  *((int *)GEN_TOP((*(int *)((int)this + 0x150) + 8))) = *(int *)((int)this + 0x150);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x150) + 0x2c))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x150) + 0x2d))) = 1;
  *(undefined2 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x160) = 0xffffffff;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined1 *)((int)this + 0x17e) = 0;
  *(undefined1 *)((int)this + 0x17f) = 0;
  return (uint)this;
}

/* ref: FUN_00511520 */
GEN_FRAME uint GEN_THISCALL F_00511520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x511520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  uint uVar7;
  undefined * this_00;
  uint uVar8;
  
  iVar2 = *(int *)(param_1 + 0xe8);
  uVar3 = *(undefined4 *)(param_1 + 0xdc);
  uVar4 = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x44) + 0xa70 + *(int *)(param_1 + 0xd8) * 4)));
  F_00501d40(param_1,*((undefined4 *)GEN_TOP((iVar2 + 0x78 + (param_2 & 0xff) * 4))),0,0);
  sVar1 = *(short *)((int)this + 4);
  uVar5 = *((undefined4 *)GEN_TOP((iVar2 + 0x20 + (param_2 & 0xff) * 4)));
  if ((sVar1 == 1) || (sVar1 == 2)) {
    uVar7 = 6;
  }
  else {
    uVar7 = (sVar1 != 4) - 1 & 7;
  }
  this_00 = (undefined *)F_004dcc90(uVar5,4,uVar7);
  if (this_00 == (undefined *)0x0) {
    bVar6 = false;
    uVar7 = F_0040dd00();
    F_00510e20((uint)*(ushort *)((int)this + 4));
    F_004cee80();
    uVar8 = F_00502570(this GEN_EDX_ARG);
    this_00 = (undefined *)F_004dcc90(uVar5,4,uVar8);
    while (this_00 == (undefined *)0x0) {
      uVar8 = F_0040dd00();
      if (uVar7 + 5000 < uVar8) {
        return 0;
      }
      if ((!bVar6) && (uVar7 + 1000 < uVar8)) {
        F_00510db0();
        bVar6 = true;
      }
      F_004cee80();
      uVar8 = F_00502570(this GEN_EDX_ARG);
      this_00 = (undefined *)F_004dcc90(uVar5,4,uVar8);
    }
  }
  uVar7 = F_004d68c0(this_00 GEN_EDX_ARG,0,uVar5,2);
  if (uVar7 == 0) {
    return 0;
  }
  uVar8 = param_2 & 0xff;
  F_005020a0(this GEN_EDX_ARG,uVar4,uVar3,uVar7,*(undefined4 *)(iVar2 + 0x4c + uVar8 * 4),
               (uint)*(ushort *)(iVar2 + 0xb6 + uVar8 * 2),
               iVar2 + 0xd0 + (uint)*(ushort *)(iVar2 + 0xa0 + uVar8 * 2) * 2);
  return (uint)this_00;
}

/* ref: FUN_005116a0 */
GEN_FRAME uint GEN_THISCALL F_005116a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5116a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  short sVar1;
  bool bVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  
  sVar1 = *(short *)((int)this + 4);
  if ((sVar1 == 1) || (sVar1 == 2)) {
    uVar3 = 6;
  }
  else {
    uVar3 = (sVar1 != 4) - 1 & 7;
  }
  this_00 = (undefined *)F_004dcc90(param_3,4,uVar3);
  if (this_00 == (undefined *)0x0) {
    bVar2 = false;
    uVar3 = F_0040dd00();
    F_00510e20((uint)*(ushort *)((int)this + 4));
    F_004cee80();
    uVar4 = F_00502570(this GEN_EDX_ARG);
    this_00 = (undefined *)F_004dcc90(param_3,4,uVar4);
    while (this_00 == (undefined *)0x0) {
      uVar4 = F_0040dd00();
      if (uVar3 + 5000 < uVar4) {
        return 0;
      }
      if ((!bVar2) && (uVar3 + 1000 < uVar4)) {
        F_00510db0();
        bVar2 = true;
      }
      F_004cee80();
      uVar4 = F_00502570(this GEN_EDX_ARG);
      this_00 = (undefined *)F_004dcc90(param_3,4,uVar4);
    }
  }
  uVar3 = F_004d68c0(this_00 GEN_EDX_ARG,0,param_3,2);
  if ((uVar3 != 0) && (uVar3 = F_00504190(param_1,uVar3,param_3,0,param_2,0,1), uVar3 == 1)) {
    F_004d6970(this_00 GEN_EDX_ARG);
    return (uint)this_00;
  }
  return 0;
}

/* ref: FUN_005117c0 */
GEN_FRAME uint GEN_THISCALL F_005117c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5117c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  uint uVar7;
  undefined * this_00;
  uint uVar8;
  
  iVar2 = *(int *)(param_1 + 0xe8);
  uVar3 = *(undefined4 *)(param_1 + 0xdc);
  uVar4 = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x44) + 0xa70 + *(int *)(param_1 + 0xd8) * 4)));
  F_00501d40(param_1,*((undefined4 *)GEN_TOP((iVar2 + 0x90 + (param_2 & 0xff) * 4))),0,0);
  sVar1 = *(short *)((int)this + 4);
  uVar5 = *((undefined4 *)GEN_TOP((iVar2 + 0x38 + (param_2 & 0xff) * 4)));
  if ((sVar1 == 1) || (sVar1 == 2)) {
    uVar7 = 6;
  }
  else {
    uVar7 = (sVar1 != 4) - 1 & 7;
  }
  this_00 = (undefined *)F_004dccf0(uVar5,1,param_3,uVar7);
  if (this_00 == (undefined *)0x0) {
    bVar6 = false;
    uVar7 = F_0040dd00();
    F_00510e20((uint)*(ushort *)((int)this + 4));
    F_004cee80();
    uVar8 = F_00502570(this GEN_EDX_ARG);
    this_00 = (undefined *)F_004dccf0(uVar5,1,param_3,uVar8);
    while (this_00 == (undefined *)0x0) {
      uVar8 = F_0040dd00();
      if (uVar7 + 5000 < uVar8) {
        return 0;
      }
      if ((!bVar6) && (uVar7 + 1000 < uVar8)) {
        F_00510db0();
        bVar6 = true;
      }
      F_004cee80();
      uVar8 = F_00502570(this GEN_EDX_ARG);
      this_00 = (undefined *)F_004dccf0(uVar5,1,param_3,uVar8);
    }
  }
  uVar7 = F_004d6a30(this_00 GEN_EDX_ARG,0,uVar5,2);
  if (uVar7 == 0) {
    return 0;
  }
  uVar8 = param_2 & 0xff;
  F_005020a0(this GEN_EDX_ARG,uVar4,uVar3,uVar7,*(undefined4 *)(iVar2 + 100 + uVar8 * 4),
               (uint)*(ushort *)(iVar2 + 0xc2 + uVar8 * 2),
               iVar2 + 0xd0 + (uint)*(ushort *)(iVar2 + 0xac + uVar8 * 2) * 2);
  return (uint)this_00;
}

/* ref: FUN_00511950 */
GEN_FRAME uint GEN_THISCALL F_00511950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x511950u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  short sVar1;
  bool bVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  
  sVar1 = *(short *)((int)this + 4);
  if ((sVar1 == 1) || (sVar1 == 2)) {
    uVar3 = 6;
  }
  else {
    uVar3 = (sVar1 != 4) - 1 & 7;
  }
  this_00 = (undefined *)F_004dccf0(param_3,1,param_4,uVar3);
  if (this_00 == (undefined *)0x0) {
    bVar2 = false;
    uVar3 = F_0040dd00();
    F_00510e20((uint)*(ushort *)((int)this + 4));
    F_004cee80();
    uVar4 = F_00502570(this GEN_EDX_ARG);
    this_00 = (undefined *)F_004dccf0(param_3,1,param_4,uVar4);
    while (this_00 == (undefined *)0x0) {
      uVar4 = F_0040dd00();
      if (uVar3 + 5000 < uVar4) {
        return 0;
      }
      if ((!bVar2) && (uVar3 + 1000 < uVar4)) {
        F_00510db0();
        bVar2 = true;
      }
      F_004cee80();
      uVar4 = F_00502570(this GEN_EDX_ARG);
      this_00 = (undefined *)F_004dccf0(param_3,1,param_4,uVar4);
    }
  }
  uVar3 = F_004d6a30(this_00 GEN_EDX_ARG,0,param_3,2);
  if ((uVar3 != 0) && (uVar3 = F_00504190(param_1,uVar3,param_3,0,param_2,0,1), uVar3 == 1)) {
    F_004d6ae0(this_00 GEN_EDX_ARG);
    return (uint)this_00;
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::ModelResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_00511a90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x511a90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00406b90(0x180,0,0);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00511320(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00511ac0 */
GEN_FRAME uint GEN_THISCALL F_00511ac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x511ac0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  short sVar1;
  bool bVar2;
  undefined * this_00;
  ushort uVar3;
  uint * puVar4;
  uint uVar5;
  uint uVar6;
  int * piVar7;
  int * piVar8;
  int iVar9;
  int * piVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  this_00 = param_1;
  (*(int * PTR32 *)(gen_frame + 0x34)) = this;
  (*(int *)(gen_frame + 0x30)) = REFG(int, 0x1370b90);
  puVar4 = (uint *)F_00b4cf20(param_1 GEN_EDX_FWD);
  (*(uint * PTR32 *)(gen_frame + 0x24)) = puVar4;
  uVar3 = F_00b4d010(param_1 GEN_EDX_ARG,param_2);
  uVar5 = (uint)uVar3;
  (*(uint *)(gen_frame + 0x2c)) = (uint)(ushort)(*(short *)((int)puVar4 + 0xe) - uVar3);
  (*(uint *)(gen_frame + 0x38)) = uVar5;
  uVar6 = F_00b4cf80(param_1 GEN_EDX_ARG,uVar5);
  uVar5 = F_00b4cf50(param_1 GEN_EDX_ARG,uVar5);
  (*(uint *)(gen_frame + 0x14)) = uVar5;
  (*(uint *)(gen_frame + 0x18)) = uVar6;
  if ((((*puVar4 & 0x80000000) == 0) && ((uVar5 & uVar5 - 1) == 0)) && ((uVar6 & uVar6 - 1) == 0)) {
    uVar5 = 0x4000000;
  }
  else {
    uVar5 = 0;
  }
  sVar1 = (short)(*(int * PTR32 *)(gen_frame + 0x34))[1];
  (*(uint *)(gen_frame + 0x28)) = uVar5 | 4;
  if ((sVar1 == 1) || (sVar1 == 2)) {
    uVar6 = 6;
  }
  else if (sVar1 == 4) {
    uVar6 = 7;
  }
  else if (sVar1 == 0) {
    uVar6 = 5;
  }
  else {
    uVar6 = (sVar1 != 6) - 1 & 0xc;
  }
  uVar11 = (*(uint *)(gen_frame + 0x2c)) & 0xffff;
  (*(uint *)(gen_frame + 0x2c)) = uVar11;
  piVar7 = (int *)F_004dca20(&(*(uint *)(gen_frame + 0x14)),uVar11,puVar4[1],uVar5 | 4,uVar6);
  if (piVar7 == (int *)0x0) {
    bVar2 = false;
    uVar5 = F_0040dd00();
    piVar7 = (*(int * PTR32 *)(gen_frame + 0x34));
    (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)(uVar5 + 5000);
    (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)(uVar5 + 1000);
    F_00510e20((uint)*(ushort *)((*(int * PTR32 *)(gen_frame + 0x34)) + 1));
    F_004cee80();
    uVar5 = F_00502a10(piVar7 GEN_EDX_ARG);
    piVar7 = (int *)F_004dca20(&(*(uint *)(gen_frame + 0x14)),uVar11,(*(uint * PTR32 *)(gen_frame + 0x24))[1],(*(uint *)(gen_frame + 0x28)),uVar5);
    while (piVar7 == (int *)0x0) {
      piVar7 = (int *)F_0040dd00();
      if ((*(int * PTR32 *)(gen_frame + 0x20)) < piVar7) {
        return 0;
      }
      if ((!bVar2) && ((*(int * PTR32 *)(gen_frame + 0x1c)) < piVar7)) {
        F_00510db0();
        bVar2 = true;
      }
      F_004cee80();
      uVar5 = F_00502a10((*(int * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG);
      piVar7 = (int *)F_004dca20(&(*(uint *)(gen_frame + 0x14)),uVar11,(*(uint * PTR32 *)(gen_frame + 0x24))[1],(*(uint *)(gen_frame + 0x28)),uVar5);
    }
  }
  if ((char)param_3 != '\0') {
    if (param_4 != 0) {
      if (*(char *)(REFG(int, 0x1375aec) + 0x50) == '\0') {
        param_1 = (undefined *)0x0;
        if (uVar11 == 0) {
          return (uint)piVar7;
        }
        param_3 = (*(uint *)(gen_frame + 0x38));
        while( true ) {
          uVar5 = F_00b4d220(this_00 GEN_EDX_ARG,param_3);
          uVar6 = F_004d6dd0(piVar7 GEN_EDX_ARG,param_1,((byte *)(gen_frame + 0x8)),2);
          if (uVar6 == 0) break;
          uVar11 = F_00b4d050(this_00 GEN_EDX_ARG,param_3);
          uVar5 = F_00504190(param_4,uVar6,uVar11,0,uVar5 + 0x50,0,1);
          if (uVar5 != 1) {
            F_004d6e60(piVar7 GEN_EDX_ARG,param_1);
            break;
          }
          F_004d6e60(piVar7 GEN_EDX_ARG,param_1);
          param_3 = param_3 + 1;
          param_1 = (undefined *)((int)param_1 + 1);
          if ((*(uint *)(gen_frame + 0x2c)) <= param_1) {
            return (uint)piVar7;
          }
        }
      }
      else {
        param_3 = 0;
        (*(int *)(gen_frame + 0x30)) = 0;
        param_2 = 0;
        if (uVar11 != 0) {
          do {
            uVar5 = F_00b4d050(param_1 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x38)) + param_2);
            param_3 = param_3 + uVar5;
            param_2 = param_2 + 1;
          } while (param_2 < uVar11);
        }
        piVar8 = (*(int * PTR32 *)(gen_frame + 0x34));
        uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x34)) + 0x4c))((*(int * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG);
        iVar12 = param_3;
        uVar6 = F_00404310();
        piVar8 = (int *)F_00510ed0(piVar8 GEN_EDX_ARG,uVar6,iVar12,uVar5);
        (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar8;
        if (piVar8 != (int *)0x0) {
          uVar5 = F_00b4d220(param_1 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x38)));
          uVar15 = 1;
          uVar14 = 0;
          iVar9 = uVar5 + 0x50;
          uVar13 = 0;
          iVar12 = param_3;
          uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 4))(piVar8 GEN_EDX_ARG);
          uVar5 = F_00504190(param_4,uVar5,iVar12,uVar13,iVar9,uVar14,uVar15);
          if (uVar5 != 1) {
            if (piVar7 != (int *)0x0) {
              ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7 GEN_EDX_ARG);
            }
            piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8 GEN_EDX_ARG)));
            ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7 GEN_EDX_ARG,piVar8);
            return 0;
          }
          param_4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 4))(piVar8 GEN_EDX_ARG);
          uVar5 = 0;
          if ((*(uint *)(gen_frame + 0x2c)) != 0) {
            do {
              uVar6 = F_004d6dd0(piVar7 GEN_EDX_ARG,uVar5,((byte *)(gen_frame + 0x8)),2);
              if (uVar6 == 0) goto LAB_00511e4b;
              uVar11 = F_00b4d050(param_1 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x38)) + uVar5);
              F_00c46aa0(uVar6,param_4,uVar11);
              param_4 = param_4 + uVar11;
              (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x30)) + uVar11;
              F_004d6e60(piVar7 GEN_EDX_ARG,uVar5);
              uVar5 = uVar5 + 1;
            } while (uVar5 < (*(uint *)(gen_frame + 0x2c)));
          }
          piVar8 = (*(int * PTR32 *)(gen_frame + 0x1c));
          if (param_3 == (*(int *)(gen_frame + 0x30))) {
            piVar10 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x1c)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG)));
            ((GEN_TCODE *)*(gen_code32 *)(*piVar10 + 0xc))(piVar10 GEN_EDX_ARG,piVar8);
            return (uint)piVar7;
          }
        }
      }
LAB_00511e4b: ;
      if (piVar7 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7 GEN_EDX_ARG);
      }
      return 0;
    }
    param_3 = 0;
    if (uVar11 != 0) {
      param_4 = (*(uint *)(gen_frame + 0x38));
      do {
        uVar5 = F_00b4e180(param_1 GEN_EDX_ARG,param_4);
        uVar6 = F_004d6dd0(piVar7 GEN_EDX_ARG,param_3,((byte *)(gen_frame + 0x8)),2);
        if (uVar6 == 0) {
          if (piVar7 != (int *)0x0) {
            ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7 GEN_EDX_ARG);
          }
          return 0;
        }
        uVar6 = F_00b4d050(param_1 GEN_EDX_ARG,param_4);
        F_00c46aa0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),uVar5,uVar6);
        F_004d6e60(piVar7 GEN_EDX_ARG,param_3);
        param_4 = param_4 + 1;
        param_3 = param_3 + 1;
      } while (param_3 < uVar11);
      return (uint)piVar7;
    }
  }
  return (uint)piVar7;
}

/* ref: FUN_00511ef0 */
GEN_FRAME uint GEN_THISCALL F_00511ef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x511ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  short sVar1;
  bool bVar2;
  undefined * this_00;
  ushort uVar3;
  uint * puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int * piVar8;
  int * piVar9;
  int iVar10;
  int * piVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  this_00 = param_1;
  (*(int * PTR32 *)(gen_frame + 0x2c)) = this;
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x1370b90);
  puVar4 = (uint *)F_00b4cf20(param_1 GEN_EDX_FWD);
  uVar3 = F_00b4d010(param_1 GEN_EDX_ARG,param_2);
  uVar5 = (uint)uVar3;
  (*(uint *)(gen_frame + 0x38)) = (uint)(ushort)(*(short *)((int)puVar4 + 0xe) - uVar3);
  (*(uint *)(gen_frame + 0x30)) = uVar5;
  uVar6 = F_00b4cf80(param_1 GEN_EDX_ARG,uVar5);
  uVar7 = F_00b4cf50(param_1 GEN_EDX_ARG,uVar5);
  (*(uint *)(gen_frame + 0x14)) = uVar7;
  (*(uint *)(gen_frame + 0x18)) = uVar6;
  uVar3 = F_00b4cfb0(param_1 GEN_EDX_ARG,uVar5);
  (*(uint *)(gen_frame + 0x34)) = (uint)uVar3;
  if ((((*puVar4 & 0x80000000) == 0) && (((*(uint *)(gen_frame + 0x14)) & (*(uint *)(gen_frame + 0x14)) - 1) == 0)) &&
     (((*(uint *)(gen_frame + 0x18)) & (*(uint *)(gen_frame + 0x18)) - 1) == 0)) {
    uVar5 = 0x4000000;
  }
  else {
    uVar5 = 0;
  }
  sVar1 = (short)(*(int * PTR32 *)(gen_frame + 0x2c))[1];
  (*(uint *)(gen_frame + 0x24)) = uVar5 | 4;
  if ((sVar1 == 1) || (sVar1 == 2)) {
    uVar6 = 6;
  }
  else if (sVar1 == 4) {
    uVar6 = 7;
  }
  else if (sVar1 == 0) {
    uVar6 = 5;
  }
  else {
    uVar6 = (sVar1 != 6) - 1 & 0xc;
  }
  uVar7 = (*(uint *)(gen_frame + 0x38)) & 0xffff;
  (*(uint *)(gen_frame + 0x38)) = uVar7;
  piVar8 = (int *)F_004dca90(&(*(uint *)(gen_frame + 0x14)),(uint)uVar3,uVar7,puVar4[1],uVar5 | 4,uVar6);
  if (piVar8 == (int *)0x0) {
    bVar2 = false;
    uVar5 = F_0040dd00();
    piVar8 = (*(int * PTR32 *)(gen_frame + 0x2c));
    (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)(uVar5 + 5000);
    (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)(uVar5 + 1000);
    F_00510e20((uint)*(ushort *)((*(int * PTR32 *)(gen_frame + 0x2c)) + 1));
    F_004cee80();
    uVar5 = F_00502a10(piVar8 GEN_EDX_ARG);
    piVar8 = (int *)F_004dca90(&(*(uint *)(gen_frame + 0x14)),(*(uint *)(gen_frame + 0x34)) & 0xffff,(*(uint *)(gen_frame + 0x38)),puVar4[1],(*(uint *)(gen_frame + 0x24)),uVar5);
    while (piVar8 == (int *)0x0) {
      piVar8 = (int *)F_0040dd00();
      if ((*(int * PTR32 *)(gen_frame + 0x20)) < piVar8) {
        return 0;
      }
      if ((!bVar2) && ((*(int * PTR32 *)(gen_frame + 0x1c)) < piVar8)) {
        F_00510db0();
        bVar2 = true;
      }
      F_004cee80();
      uVar5 = F_00502a10((*(int * PTR32 *)(gen_frame + 0x2c)) GEN_EDX_ARG);
      piVar8 = (int *)F_004dca90(&(*(uint *)(gen_frame + 0x14)),(*(uint *)(gen_frame + 0x34)) & 0xffff,(*(uint *)(gen_frame + 0x38)),puVar4[1],(*(uint *)(gen_frame + 0x24)),uVar5);
    }
  }
  if ((char)param_3 != '\0') {
    param_3 = (*(uint *)(gen_frame + 0x34)) & 0xffff;
    uVar5 = 0;
    if (param_4 != 0) {
      param_2 = 0;
      if (*(char *)(REFG(int, 0x1375aec) + 0x50) == '\0') {
        if ((*(uint *)(gen_frame + 0x38)) == 0) {
          return (uint)piVar8;
        }
        param_1 = (undefined *)(*(uint *)(gen_frame + 0x30));
        while( true ) {
          uVar5 = F_00b4d240(this_00 GEN_EDX_ARG,param_1,0);
          piVar9 = (int *)F_004d9de0(piVar8 GEN_EDX_ARG,param_2,((byte *)(gen_frame + 0x8)),2);
          (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar9;
          if (piVar9 == (int *)0x0) break;
          uVar6 = F_00b4d050(this_00 GEN_EDX_ARG,param_1);
          uVar5 = F_00504190(param_4,(*(int * PTR32 *)(gen_frame + 0x1c)),uVar6 * param_3,0,uVar5 + 0x50,0,1);
          if (uVar5 != 1) {
            F_004d9ed0(piVar8 GEN_EDX_ARG,param_2);
            break;
          }
          if (1 < (ushort)param_3) {
            param_3 = (uint)((ushort)param_3 >> 1);
          }
          F_004d9ed0(piVar8 GEN_EDX_ARG,param_2);
          param_1 = (undefined *)((int)param_1 + 1);
          param_2 = param_2 + 1;
          if ((*(uint *)(gen_frame + 0x38)) <= param_2) {
            return (uint)piVar8;
          }
        }
      }
      else {
        (*(uint *)(gen_frame + 0x28)) = 0;
        if ((*(uint *)(gen_frame + 0x38)) != 0) {
          do {
            uVar6 = F_00b4d050(param_1 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x30)) + uVar5);
            param_2 = param_2 + uVar6 * param_3;
            if (1 < (ushort)param_3) {
              param_3 = (uint)((ushort)param_3 >> 1);
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < (*(uint *)(gen_frame + 0x38)));
        }
        piVar9 = (*(int * PTR32 *)(gen_frame + 0x2c));
        uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x2c)) + 0x4c))((*(int * PTR32 *)(gen_frame + 0x2c)) GEN_EDX_ARG);
        uVar5 = param_2;
        uVar7 = F_00404310();
        piVar9 = (int *)F_00510ed0(piVar9 GEN_EDX_ARG,uVar7,uVar5,uVar6);
        (*(int * PTR32 *)(gen_frame + 0x20)) = piVar9;
        if (piVar9 != (int *)0x0) {
          uVar5 = F_00b4d240(param_1 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x30)),0);
          uVar14 = 1;
          uVar13 = 0;
          iVar10 = uVar5 + 0x50;
          uVar12 = 0;
          uVar5 = param_2;
          uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar9 + 4))(piVar9 GEN_EDX_ARG);
          uVar5 = F_00504190(param_4,uVar6,uVar5,uVar12,iVar10,uVar13,uVar14);
          if (uVar5 != 1) {
            if (piVar8 != (int *)0x0) {
              ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8 GEN_EDX_ARG);
            }
            piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar9 + 0xc))(piVar9 GEN_EDX_ARG)));
            ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8 GEN_EDX_ARG,piVar9);
            return 0;
          }
          param_4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar9 + 4))(piVar9 GEN_EDX_ARG);
          param_3 = (*(uint *)(gen_frame + 0x34)) & 0xffff;
          uVar5 = 0;
          if ((*(uint *)(gen_frame + 0x38)) != 0) {
            do {
              piVar9 = (int *)F_004d9de0(piVar8 GEN_EDX_ARG,uVar5,((byte *)(gen_frame + 0x8)),2);
              (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar9;
              if (piVar9 == (int *)0x0) goto LAB_005122d3;
              uVar6 = F_00b4d050(param_1 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x30)) + uVar5);
              iVar10 = uVar6 * param_3;
              F_00c46aa0((*(int * PTR32 *)(gen_frame + 0x1c)),param_4,iVar10);
              if (1 < (ushort)param_3) {
                param_3 = (uint)((ushort)param_3 >> 1);
              }
              param_4 = param_4 + iVar10;
              (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) + iVar10;
              F_004d9ed0(piVar8 GEN_EDX_ARG,uVar5);
              uVar5 = uVar5 + 1;
            } while (uVar5 < (*(uint *)(gen_frame + 0x38)));
          }
          piVar9 = (*(int * PTR32 *)(gen_frame + 0x20));
          if (param_2 == (*(uint *)(gen_frame + 0x28))) {
            piVar11 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x20)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG)));
            ((GEN_TCODE *)*(gen_code32 *)(*piVar11 + 0xc))(piVar11 GEN_EDX_ARG,piVar9);
            return (uint)piVar8;
          }
        }
      }
LAB_005122d3: ;
      if (piVar8 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8 GEN_EDX_ARG);
      }
      return 0;
    }
    if ((*(uint *)(gen_frame + 0x38)) != 0) {
      param_4 = (*(uint *)(gen_frame + 0x30));
      do {
        uVar6 = F_00b4e1a0(param_1 GEN_EDX_ARG,param_4,0);
        uVar7 = F_004d9de0(piVar8 GEN_EDX_ARG,uVar5,((byte *)(gen_frame + 0x8)),2);
        if (uVar7 == 0) goto LAB_005122d3;
        uVar7 = F_00b4d050(param_1 GEN_EDX_ARG,param_4);
        F_00c46aa0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),uVar6,uVar7 * param_3);
        if (1 < (ushort)param_3) {
          param_3 = (uint)((ushort)param_3 >> 1);
        }
        F_004d9ed0(piVar8 GEN_EDX_ARG,uVar5);
        param_4 = param_4 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 < (*(uint *)(gen_frame + 0x38)));
    }
  }
  return (uint)piVar8;
}

/* ref: FUN_00512370 */
GEN_FRAME uint GEN_THISCALL F_00512370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x512370u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  short sVar1;
  bool bVar2;
  ushort uVar3;
  uint * puVar4;
  int * piVar5;
  uint uVar6;
  int * piVar7;
  int iVar8;
  int * piVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  (*(int * PTR32 *)(gen_frame + 0x24)) = this;
  (*(int *)(gen_frame + 0x20)) = REFG(int, 0x1370b90);
  puVar4 = (uint *)F_00b4cf20(param_1 GEN_EDX_FWD);
  uVar3 = F_00b4d010(param_1 GEN_EDX_ARG,param_2);
  uVar11 = (uint)(ushort)(*(short *)((int)puVar4 + 0xe) - uVar3);
  (*(uint *)(gen_frame + 0x28)) = (uint)uVar3;
  piVar5 = (int *)F_00b4cf50(param_1 GEN_EDX_ARG,(uint)uVar3);
  (*(int * PTR32 *)(gen_frame + 0x18)) = piVar5;
  if ((*puVar4 & 0x80000000) == 0) {
    uVar6 = (-(uint)(((int)piVar5 - 1U & (uint)piVar5) != 0) & 0xfc000000) + 0x4000000;
  }
  else {
    uVar6 = 0;
  }
  sVar1 = (short)(*(int * PTR32 *)(gen_frame + 0x24))[1];
  (*(uint *)(gen_frame + 0x1c)) = uVar6 | 4;
  if ((sVar1 == 1) || (sVar1 == 2)) {
    uVar12 = 6;
  }
  else if (sVar1 == 4) {
    uVar12 = 7;
  }
  else if (sVar1 == 0) {
    uVar12 = 5;
  }
  else {
    uVar12 = (sVar1 != 6) - 1 & 0xc;
  }
  (*(uint *)(gen_frame + 0x14)) = uVar11;
  piVar5 = (int *)F_004dcb00(piVar5,uVar11,puVar4[1],uVar6 | 4,uVar12);
  if (piVar5 == (int *)0x0) {
    bVar2 = false;
    uVar6 = F_0040dd00();
    piVar5 = (*(int * PTR32 *)(gen_frame + 0x24));
    (*(uint *)(gen_frame + 0xc)) = uVar6 + 1000;
    (*(uint *)(gen_frame + 0x10)) = uVar6 + 5000;
    F_00510e20((uint)*(ushort *)((*(int * PTR32 *)(gen_frame + 0x24)) + 1));
    F_004cee80();
    uVar6 = F_00502a10(piVar5 GEN_EDX_ARG);
    piVar5 = (int *)F_004dcb00((*(int * PTR32 *)(gen_frame + 0x18)),uVar11,puVar4[1],(*(uint *)(gen_frame + 0x1c)),uVar6);
    while (piVar5 == (int *)0x0) {
      uVar6 = F_0040dd00();
      if ((*(uint *)(gen_frame + 0x10)) < uVar6) {
        return 0;
      }
      if ((!bVar2) && ((*(uint *)(gen_frame + 0xc)) < uVar6)) {
        F_00510db0();
        bVar2 = true;
      }
      F_004cee80();
      uVar6 = F_00502a10((*(int * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG);
      piVar5 = (int *)F_004dcb00((*(int * PTR32 *)(gen_frame + 0x18)),uVar11,puVar4[1],(*(uint *)(gen_frame + 0x1c)),uVar6);
    }
  }
  if ((char)param_3 != '\0') {
    uVar6 = 0;
    if (param_4 != 0) {
      param_2 = 0;
      (*(int *)(gen_frame + 0x20)) = 0;
      param_3 = 0;
      if (uVar11 != 0) {
        do {
          iVar13 = 6;
          (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0x28)) + param_3;
          do {
            uVar6 = F_00b4d050(param_1 GEN_EDX_ARG,(*(uint *)(gen_frame + 0xc)));
            param_2 = param_2 + uVar6;
            iVar13 = iVar13 - 1;
          } while (iVar13 != 0);
          param_3 = param_3 + 1;
        } while (param_3 < uVar11);
      }
      piVar7 = (*(int * PTR32 *)(gen_frame + 0x24));
      uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x24)) + 0x4c))((*(int * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG);
      iVar13 = param_2;
      uVar12 = F_00404310();
      piVar7 = (int *)F_00510ed0(piVar7 GEN_EDX_ARG,uVar12,iVar13,uVar6);
      (*(int * PTR32 *)(gen_frame + 0x18)) = piVar7;
      if (piVar7 != (int *)0x0) {
        uVar6 = F_00b4d2e0(param_1 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x28)),0);
        uVar16 = 1;
        uVar15 = 0;
        iVar8 = uVar6 + 0x50;
        uVar14 = 0;
        iVar13 = param_2;
        uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 4))(piVar7 GEN_EDX_ARG);
        uVar6 = F_00504190(param_4,uVar6,iVar13,uVar14,iVar8,uVar15,uVar16);
        if (uVar6 != 1) {
          if (piVar5 != (int *)0x0) {
            ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5 GEN_EDX_ARG);
          }
          piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7 GEN_EDX_ARG)));
          ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5 GEN_EDX_ARG,piVar7);
          return 0;
        }
        param_4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 4))(piVar7 GEN_EDX_ARG);
        param_3 = 0;
        if (uVar11 != 0) {
          do {
            uVar11 = 0;
            (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0x28)) + param_3;
            do {
              uVar6 = F_004d5bb0(piVar5 GEN_EDX_ARG,param_3,uVar11,((byte *)(gen_frame + 0x0)),2);
              (*(uint *)(gen_frame + 0x10)) = uVar6;
              if (uVar6 == 0) goto LAB_0051267a;
              uVar6 = F_00b4d050(param_1 GEN_EDX_ARG,(*(uint *)(gen_frame + 0xc)));
              F_00c46aa0((*(uint *)(gen_frame + 0x10)),param_4,uVar6);
              param_4 = param_4 + uVar6;
              (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + uVar6;
              F_004d5c30(piVar5 GEN_EDX_ARG,param_3,uVar11);
              uVar11 = uVar11 + 1;
            } while (uVar11 < 6);
            param_3 = param_3 + 1;
            piVar7 = (*(int * PTR32 *)(gen_frame + 0x18));
          } while (param_3 < (*(uint *)(gen_frame + 0x14)));
        }
        if (param_2 == (*(int *)(gen_frame + 0x20))) {
          piVar9 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7 GEN_EDX_ARG)));
          ((GEN_TCODE *)*(gen_code32 *)(*piVar9 + 0xc))(piVar9 GEN_EDX_ARG,piVar7);
          return (uint)piVar5;
        }
      }
      if (piVar5 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5 GEN_EDX_ARG);
      }
      return 0;
    }
    if (uVar11 != 0) {
      do {
        uVar11 = 0;
        do {
          uVar12 = F_00b4e250(param_1 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x28)) + uVar6,uVar11);
          uVar10 = F_004d5bb0(piVar5 GEN_EDX_ARG,uVar6,uVar11,((byte *)(gen_frame + 0x0)),2);
          if (uVar10 == 0) {
LAB_0051267a: ;
            if (piVar5 != (int *)0x0) {
              ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5 GEN_EDX_ARG);
            }
            return 0;
          }
          uVar10 = F_00b4d050(param_1 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x28)) + uVar6);
          F_00c46aa0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),uVar12,uVar10);
          F_004d5c30(piVar5 GEN_EDX_ARG,uVar6,uVar11);
          uVar11 = uVar11 + 1;
        } while (uVar11 < 6);
        uVar6 = uVar6 + 1;
      } while (uVar6 < (*(uint *)(gen_frame + 0x14)));
    }
  }
  return (uint)piVar5;
}

/* ref: FUN_00512700 */
GEN_FRAME uint GEN_THISCALL F_00512700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x512700u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  
  puVar2 = (uint *)F_00b4cf20(param_1 GEN_EDX_FWD);
  uVar3 = *puVar2 & 0x3c00000;
  if (uVar3 == 0x800000) {
    uVar3 = F_00511ac0(this GEN_EDX_ARG,param_1,param_2,param_3,param_4);
  }
  else if (uVar3 == 0x1000000) {
    uVar3 = F_00511ef0(this GEN_EDX_ARG,param_1,param_2,param_3,param_4);
  }
  else {
    if (uVar3 != 0x2000000) {
      return 0;
    }
    uVar3 = F_00512370(this GEN_EDX_ARG,param_1,param_2,param_3,param_4);
  }
  if (uVar3 == 0) {
    return 0;
  }
  *(char *)(uVar3 + 0x25) = (char)param_2;
  uVar1 = *(uint *)((int)this + 0xe8);
  *(uint *)((int)this + 0xe8) =
       ((*(uint *)(uVar3 + 8) & 0xfffffff0) + uVar1 ^ uVar1) & 0x7ffffff ^ uVar1;
  return uVar3;
}

/* ref: FUN_005127b0 */
GEN_FRAME uint GEN_THISCALL F_005127b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5127b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  F_00b4ec90(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,(int)this + 0x98,0,param_4);
  uVar1 = F_00512700(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),param_4,1,param_2);
  *param_1 = uVar1;
  if (uVar1 == 0) {
    F_00b4cf40(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    return 0xfffffff6;
  }
  F_00b4cf40(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00512810 */
GEN_FRAME uint GEN_THISCALL F_00512810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x512810u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  char * pcVar1;
  ushort uVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  uint uVar6;
  undefined * pIVar7;
  uint uVar8;
  undefined * pIVar9;
  int iVar10;
  int iVar11;
  ushort * puVar12;
  
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = *(undefined * PTR32 *)(param_2 + 0xdc);
  piVar4 = *(int * PTR32 *)(param_2 + 0xe8);
  (*(int *)(gen_frame + 0x1c)) = *((int *)GEN_TOP((*(int *)(param_2 + 0x44) + 0xa70 + *(int *)(param_2 + 0xd8) * 4)));
  (*(int * PTR32 *)(gen_frame + 0x38)) = piVar4;
  (*(int * PTR32 *)(gen_frame + 0x20)) = piVar4 + piVar4[5] * 5 + 6;
  F_00b4cf00(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_FWD,(uint *)((int)this + 0x98));
  uVar2 = F_00b4d010(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,param_1);
  (*(uint *)(gen_frame + 0x30)) = (uint)uVar2;
  uVar2 = F_00b4d000(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x2c)) = (uint)uVar2;
  uVar3 = F_00512700(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)),param_1,0,0);
  *(uint *)((int)this + 0x100) = uVar3;
  if (uVar3 == 0) {
LAB_0051289e: ;
    F_00b4cf40(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
    return 0xfffffff6;
  }
  if (*(char *)(REFG(int, 0x1375aec) + 0x50) != '\0') {
    uVar3 = *(uint *)((int)this + 0x98) & 0x3c00000;
    (*(undefined * PTR32 *)(gen_frame + 0x34)) = (undefined *)0x0;
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x0;
    param_1 = 0;
    if ((uVar3 == 0x800000) || (uVar3 == 0x1000000)) {
      uVar6 = (*(uint *)(gen_frame + 0x2c)) & 0xffff;
      uVar3 = (*(uint *)(gen_frame + 0x30)) & 0xffff;
      iVar10 = 0;
      iVar11 = 0;
      if (uVar3 < uVar6) {
        if (1 < (int)(uVar6 - uVar3)) {
          piVar4 = (*(int * PTR32 *)(gen_frame + 0x38)) + uVar3 * 5 + 0xc;
          iVar5 = ((uVar6 - uVar3) - 2 >> 1) + 1;
          uVar3 = uVar3 + iVar5 * 2;
          iVar10 = 0;
          do {
            iVar10 = iVar10 + piVar4[-5];
            iVar11 = iVar11 + *piVar4;
            piVar4 = piVar4 + 10;
            iVar5 = iVar5 - 1;
          } while (iVar5 != 0);
        }
        if (uVar3 < ((*(uint *)(gen_frame + 0x2c)) & 0xffff)) {
          (*(undefined * PTR32 *)(gen_frame + 0x34)) = (undefined *)(*(int * PTR32 *)(gen_frame + 0x38))[uVar3 * 5 + 7];
        }
        (*(undefined * PTR32 *)(gen_frame + 0x34)) = (undefined *)(((char *)((char *)((*(undefined * PTR32 *)(gen_frame + 0x34))))) + iVar10 + iVar11);
      }
      param_1 = (*(int * PTR32 *)(gen_frame + 0x38))[((*(uint *)(gen_frame + 0x30)) & 0xffff) * 5 + 6];
LAB_005129bc: ;
      if (&(*(undefined (*)[128])REFP(0x400000)) < (*(undefined * PTR32 *)(gen_frame + 0x34))) goto LAB_00512c0d;
    }
    else if (uVar3 == 0x2000000) {
      uVar3 = (*(uint *)(gen_frame + 0x30)) & 0xffff;
      if (uVar3 < ((*(uint *)(gen_frame + 0x2c)) & 0xffff)) {
        param_1 = ((*(uint *)(gen_frame + 0x2c)) & 0xffff) - uVar3;
        pIVar7 = (undefined *)0x0;
        piVar4 = (*(int * PTR32 *)(gen_frame + 0x38)) + uVar3 * 0x1e + 0x1b;
        do {
          pIVar7 = (undefined *)
                   (((char *)((char *)(pIVar7))) +
                   piVar4[-0x14] + piVar4[-0xf] + piVar4[-10] + piVar4[-5] + piVar4[5] + *piVar4);
          param_1 = param_1 - 1;
          piVar4 = piVar4 + 0x1e;
        } while (param_1 != 0);
        (*(undefined * PTR32 *)(gen_frame + 0x34)) = pIVar7;
      }
      param_1 = (*(int * PTR32 *)(gen_frame + 0x38))[uVar3 * 0x1e + 6];
      goto LAB_005129bc;
    }
    if ((*(int *)((int)this + 0x14) == 0) && (*(int *)((int)this + 0x18) == 0)) {
      uVar3 = F_004f9290((*(undefined * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x34)),
                           "Client.System.Resource.Handle.TextureResourceHandle.Tex1");
      F_00504190(param_2,uVar3,(*(undefined * PTR32 *)(gen_frame + 0x34)),0,param_1,0,1);
      uVar6 = *(uint *)((int)this + 0x98) & 0x3c00000;
      if (uVar6 == 0x800000) {
        uVar6 = (*(uint *)(gen_frame + 0x30)) & 0xffff;
        uVar8 = (*(uint *)(gen_frame + 0x2c)) & 0xffff;
        (*(uint *)(gen_frame + 0x30)) = uVar6;
        param_2 = 0;
        if (uVar6 < uVar8) {
          piVar4 = (*(int * PTR32 *)(gen_frame + 0x38)) + uVar6 * 5 + 7;
          do {
            (*(int *)(gen_frame + 0x1c)) = (int)(*(int * PTR32 *)(gen_frame + 0x20)) + piVar4[2] * 2;
            uVar6 = F_004d6dd0(*(undefined * PTR32 *)((int)this + 0x100) GEN_EDX_ARG,param_2,((undefined1 *)(gen_frame + 0x4)),2);
            if (uVar6 == 0) goto LAB_0051289e;
            F_00500140((*(undefined * PTR32 *)(gen_frame + 0x24)),uVar3,uVar6,*piVar4,(uint)*(ushort *)(piVar4 + 3),(*(int *)(gen_frame + 0x1c)));
            (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)(((char *)((char *)((*(undefined * PTR32 *)(gen_frame + 0x28))))) + *piVar4);
            param_2 = param_2 + 1;
            uVar3 = uVar3 + *piVar4;
            uVar6 = (*(uint *)(gen_frame + 0x30)) + 1;
            piVar4 = piVar4 + 5;
            (*(uint *)(gen_frame + 0x30)) = uVar6;
          } while (uVar6 < uVar8);
        }
      }
      else if (uVar6 == 0x1000000) {
        uVar6 = (*(uint *)(gen_frame + 0x30)) & 0xffff;
        uVar8 = (*(uint *)(gen_frame + 0x2c)) & 0xffff;
        (*(uint *)(gen_frame + 0x30)) = uVar6;
        param_2 = 0;
        if (uVar6 < uVar8) {
          piVar4 = (*(int * PTR32 *)(gen_frame + 0x38)) + uVar6 * 5 + 7;
          do {
            (*(int *)(gen_frame + 0x1c)) = (int)(*(int * PTR32 *)(gen_frame + 0x20)) + piVar4[2] * 2;
            uVar6 = F_004d9de0(*(undefined * PTR32 *)((int)this + 0x100) GEN_EDX_ARG,param_2,((undefined1 *)(gen_frame + 0x4)),2);
            if (uVar6 == 0) goto LAB_0051289e;
            F_00500140((*(undefined * PTR32 *)(gen_frame + 0x24)),uVar3,uVar6,*piVar4,(uint)*(ushort *)(piVar4 + 3),(*(int *)(gen_frame + 0x1c)));
            (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)(((char *)((char *)((*(undefined * PTR32 *)(gen_frame + 0x28))))) + *piVar4);
            param_2 = param_2 + 1;
            uVar3 = uVar3 + *piVar4;
            uVar6 = (*(uint *)(gen_frame + 0x30)) + 1;
            piVar4 = piVar4 + 5;
            (*(uint *)(gen_frame + 0x30)) = uVar6;
          } while (uVar6 < uVar8);
        }
      }
      else if (uVar6 == 0x2000000) {
        uVar6 = (*(uint *)(gen_frame + 0x30)) & 0xffff;
        uVar8 = (*(uint *)(gen_frame + 0x2c)) & 0xffff;
        (*(uint *)(gen_frame + 0x30)) = uVar6;
        param_2 = 0;
        if (uVar6 < uVar8) {
          (*(int * PTR32 *)(gen_frame + 0x38)) = (*(int * PTR32 *)(gen_frame + 0x38)) + uVar6 * 0x1e + 7;
          do {
            (*(uint *)(gen_frame + 0x2c)) = 0;
            piVar4 = (*(int * PTR32 *)(gen_frame + 0x38));
            do {
              (*(int *)(gen_frame + 0x1c)) = (int)(*(int * PTR32 *)(gen_frame + 0x20)) + piVar4[2] * 2;
              uVar6 = F_004d5bb0(*(undefined * PTR32 *)((int)this + 0x100) GEN_EDX_ARG,param_2,(*(uint *)(gen_frame + 0x2c)),((undefined1 *)(gen_frame + 0x4)),2);
              if (uVar6 == 0) goto LAB_0051289e;
              F_00500140((*(undefined * PTR32 *)(gen_frame + 0x24)),uVar3,uVar6,*piVar4,(uint)*(ushort *)(piVar4 + 3),(*(int *)(gen_frame + 0x1c)));
              (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)(((char *)((char *)((*(undefined * PTR32 *)(gen_frame + 0x28))))) + *piVar4);
              uVar3 = uVar3 + *piVar4;
              uVar6 = (*(uint *)(gen_frame + 0x2c)) + 1;
              piVar4 = piVar4 + 5;
              (*(uint *)(gen_frame + 0x2c)) = uVar6;
            } while (uVar6 < 6);
            (*(int * PTR32 *)(gen_frame + 0x38)) = (*(int * PTR32 *)(gen_frame + 0x38)) + 0x1e;
            param_2 = param_2 + 1;
            uVar6 = (*(uint *)(gen_frame + 0x30)) + 1;
            (*(uint *)(gen_frame + 0x30)) = uVar6;
          } while (uVar6 < uVar8);
        }
      }
      if ((*(undefined * PTR32 *)(gen_frame + 0x34)) != (*(undefined * PTR32 *)(gen_frame + 0x28))) {
        F_00b4cf40(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
        return 0xfffffff6;
      }
      goto LAB_00512dfe;
    }
  }
LAB_00512c0d: ;
  uVar3 = *(uint *)((int)this + 0x98) & 0x3c00000;
  if (uVar3 == 0x800000) {
    uVar3 = (*(uint *)(gen_frame + 0x2c)) & 0xffff;
    uVar6 = (*(uint *)(gen_frame + 0x30)) & 0xffff;
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x0;
    if (uVar6 < uVar3) {
      puVar12 = (ushort *)((*(int * PTR32 *)(gen_frame + 0x38)) + uVar6 * 5 + 10);
      do {
        (*(uint *)(gen_frame + 0x2c)) = (int)(*(int * PTR32 *)(gen_frame + 0x20)) + *(int *)(puVar12 - 2) * 2;
        F_00501d40(param_2,*(undefined4 *)(puVar12 - 8),0,0);
        uVar8 = F_004d6dd0(*(undefined * PTR32 *)((int)this + 0x100) GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x28)),((undefined1 *)(gen_frame + 0x4)),2);
        if (uVar8 == 0) goto LAB_0051289e;
        F_00502630(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x1c)),(*(undefined * PTR32 *)(gen_frame + 0x24)),uVar8,*(undefined4 *)(puVar12 - 6),(uint)*puVar12,
                     (*(uint *)(gen_frame + 0x2c)));
        (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)(((char *)((char *)((*(undefined * PTR32 *)(gen_frame + 0x28))))) + 1);
        uVar6 = uVar6 + 1;
        puVar12 = puVar12 + 10;
      } while (uVar6 < uVar3);
    }
  }
  else if (uVar3 == 0x1000000) {
    uVar3 = (*(uint *)(gen_frame + 0x2c)) & 0xffff;
    uVar6 = (*(uint *)(gen_frame + 0x30)) & 0xffff;
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x0;
    if (uVar6 < uVar3) {
      puVar12 = (ushort *)((*(int * PTR32 *)(gen_frame + 0x38)) + uVar6 * 5 + 10);
      do {
        (*(uint *)(gen_frame + 0x2c)) = (int)(*(int * PTR32 *)(gen_frame + 0x20)) + *(int *)(puVar12 - 2) * 2;
        F_00501d40(param_2,*(undefined4 *)(puVar12 - 8),0,0);
        uVar8 = F_004d9de0(*(undefined * PTR32 *)((int)this + 0x100) GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x28)),((undefined1 *)(gen_frame + 0x4)),2);
        if (uVar8 == 0) goto LAB_0051289e;
        F_00502630(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x1c)),(*(undefined * PTR32 *)(gen_frame + 0x24)),uVar8,*(undefined4 *)(puVar12 - 6),(uint)*puVar12,
                     (*(uint *)(gen_frame + 0x2c)));
        (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)(((char *)((char *)((*(undefined * PTR32 *)(gen_frame + 0x28))))) + 1);
        uVar6 = uVar6 + 1;
        puVar12 = puVar12 + 10;
      } while (uVar6 < uVar3);
    }
  }
  else if (uVar3 == 0x2000000) {
    pIVar7 = (undefined *)((*(uint *)(gen_frame + 0x30)) & 0xffff);
    (*(uint *)(gen_frame + 0x30)) = 0;
    pIVar9 = (undefined *)((*(uint *)(gen_frame + 0x2c)) & 0xffff);
    (*(undefined * PTR32 *)(gen_frame + 0x34)) = pIVar7;
    if (pIVar7 < pIVar9) {
      (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)((*(int * PTR32 *)(gen_frame + 0x38)) + (int)((int)(uintptr_t)pIVar7) * 0x1e + 10);
      do {
        uVar3 = 0;
        pIVar7 = (*(undefined * PTR32 *)(gen_frame + 0x28));
        do {
          (*(uint *)(gen_frame + 0x2c)) = (int)(*(int * PTR32 *)(gen_frame + 0x20)) + *((int *)GEN_TOP(((((byte *)GEN_TOP(((((char *)(pIVar7) + (-1) * 128) + 64))))) + 0x3c))) * 2;
          F_00501d40(param_2,*((undefined4 *)GEN_TOP(((((byte *)GEN_TOP(((((char *)(pIVar7) + (-1) * 128) + 64))))) + 0x30))),0,0);
          uVar6 = F_004d5bb0(*(undefined * PTR32 *)((int)this + 0x100) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x30)),uVar3,((undefined1 *)(gen_frame + 0x4)),2);
          if (uVar6 == 0) goto LAB_0051289e;
          F_00502630(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x1c)),(*(undefined * PTR32 *)(gen_frame + 0x24)),uVar6,*((undefined4 *)GEN_TOP(((((byte *)GEN_TOP(((((char *)(pIVar7) + (-1) * 128) + 64))))) + 0x34))),
                       (uint)*(ushort *)((char *)((char *)(pIVar7))),(*(uint *)(gen_frame + 0x2c)));
          uVar3 = uVar3 + 1;
          pIVar7 = (undefined *)&(*(word *)(((char *)(pIVar7) + 20)));
        } while (uVar3 < 6);
        (*(undefined * PTR32 *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP((((byte *)(((char *)((*(undefined * PTR32 *)(gen_frame + 0x28))) + 64))) + 0x38)));
        (*(uint *)(gen_frame + 0x30)) = (*(uint *)(gen_frame + 0x30)) + 1;
        pcVar1 = ((char *)((char *)((*(undefined * PTR32 *)(gen_frame + 0x34)))));
        (*(undefined * PTR32 *)(gen_frame + 0x34)) = (undefined *)(pcVar1 + 1);
      } while ((undefined *)(pcVar1 + 1) < pIVar9);
    }
  }
LAB_00512dfe: ;
  F_00b4cf40(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  return 0x20;
}

/* ref: FUN_00512e20 */
GEN_FRAME uint GEN_THISCALL F_00512e20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x512e20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00512810(this GEN_EDX_FWD,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00512e30 */
GEN_FRAME uint GEN_THISCALL F_00512e30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x512e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  uVar1 = F_00504190(param_2,(int)this + 0x98,0x50,0,0,0,param_3);
  if (uVar1 == 1) {
    F_00b4ec90(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(int)this + 0x98,0,param_1);
    uVar1 = F_00512700(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),param_1,1,param_2);
    *(uint *)((int)this + 0x100) = uVar1;
    if (uVar1 == 0) {
      F_00b4cf40(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      return 0xfffffff6;
    }
    F_00b4cf40(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    uVar1 = 1;
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::TextureResourceHandle::vf32 */
GEN_FRAME uint GEN_THISCALL F_00512ec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x512ec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  piVar1 = *(int * PTR32 *)(this + 0x100);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)(this + 0x100) = 0;
  }
  if (((byte)this[0xec] & 1) == 0) {
    uVar3 = 0;
  }
  else if (*(byte *)(REFG(int, 0x1371278) + 0x11) == 0xff) {
    uVar3 = 2;
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_ARG,2,0);
  }
  else {
    uVar3 = (uint)*(byte *)(REFG(int, 0x1371278) + 0x11);
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_ARG,uVar3,1);
  }
  if ((*param_1 == 0xb) && (1 < (uint)param_1[0x13])) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xa4))(this GEN_EDX_ARG);
    if (uVar2 == 2) {
      uVar2 = F_00504190(param_1,this + 0x98,0x50,0,0,0,param_2);
      if (uVar2 == 1) {
        uVar3 = F_00512810(this GEN_EDX_ARG,uVar3,param_1,param_2);
        F_00505920(this GEN_EDX_ARG);
        return uVar3;
      }
      goto LAB_00512f8d;
    }
  }
  uVar2 = F_00512e30(this GEN_EDX_ARG,uVar3,param_1,param_2);
LAB_00512f8d: ;
  F_00505920(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::System::Resource::Handle::TextureResourceHandle::vf34 */
GEN_FRAME uint GEN_THISCALL F_00512fa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x512fa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  piVar1 = *(int * PTR32 *)(this + 0x100);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)(this + 0x100) = 0;
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_ARG);
  uVar2 = uVar2 & 0xff;
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1c))(this GEN_EDX_ARG);
  if (*(int *)(this + uVar2 * 4 + 0xa8) != *((int *)GEN_TOP((this + (uVar3 & 0xff) * 4 + 0xa8)))) {
    if (((*param_1 == 0xb) && (1 < (uint)param_1[0x13])) &&
       (uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xa4))(this GEN_EDX_ARG), uVar3 == 2)) {
      uVar2 = F_00512810(this GEN_EDX_ARG,uVar2,param_1,param_2);
      return uVar2;
    }
    uVar2 = F_005127b0(this GEN_EDX_ARG,this + 0x100,param_1,param_2,uVar2);
    return uVar2;
  }
  if ((*param_1 == 0xb) && (1 < (uint)param_1[0x13])) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xa4))(this GEN_EDX_ARG);
  }
  return 1;
}

/* ref: Client::System::Resource::Handle::TextureResourceHandle::vf31 */
GEN_FRAME byte GEN_THISCALL F_00513060(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x513060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_FWD);
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1c))(this GEN_EDX_ARG);
  if (*((int *)GEN_TOP((this + (uVar2 & 0xff) * 4 + 0xa8))) != *((int *)GEN_TOP((this + (uVar3 & 0xff) * 4 + 0xa8)))) {
    piVar1 = *(int * PTR32 *)(this + 0x100);
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
      *(undefined4 *)(this + 0x100) = 0;
    }
    F_00b4cf00(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,this + 0x98);
    uVar2 = F_00512700(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar2 & 0xff,0,0);
    *(uint *)(this + 0x100) = uVar2;
    if (uVar2 == 0) {
      F_00b4cf40(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      return 0;
    }
    F_005000c0(this GEN_EDX_ARG,uVar2,*(undefined4 *)(this + 0xfc));
    F_005025a0(this GEN_EDX_ARG);
    F_00b4cf40(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  return 1;
}

/* ref: FUN_00513110 */
GEN_FRAME uint GEN_THISCALL F_00513110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x513110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (*(short *)((int)this + 4) == 3) {
    uVar2 = F_004042d0(0);
    uVar4 = F_00406c00(param_1,0,uVar2,uVar4);
    if (uVar4 != 0) goto LAB_00513155;
    uVar2 = F_004042b0();
  }
  else {
    uVar2 = F_004042b0();
  }
  uVar4 = F_00406c00(param_1,0,uVar2,uVar4);
LAB_00513155: ;
  *(uint *)((int)this + 0x98) = uVar4;
  if (uVar4 != 0) {
    *(undefined4 *)((int)this + 0xa0) = param_1;
    return uVar4;
  }
  bVar1 = false;
  uVar4 = F_0040dd00();
  F_00510e20((uint)*(ushort *)((int)this + 4));
  do {
    F_004cee80();
    uVar3 = 0;
    if (*(short *)((int)this + 4) == 3) {
      uVar2 = F_004042d0(0);
      uVar2 = F_00406c00(param_1,0,uVar2,uVar3);
      if (uVar2 == 0) goto LAB_005131b7;
    }
    else {
LAB_005131b7: ;
      uVar3 = 0;
      uVar2 = F_004042b0();
      uVar2 = F_00406c00(param_1,0,uVar2,uVar3);
    }
    *(uint *)((int)this + 0x98) = uVar2;
    if (uVar2 != 0) {
      *(undefined4 *)((int)this + 0xa0) = param_1;
LAB_005131f4: ;
      return *(uint *)((int)this + 0x98);
    }
    uVar2 = F_0040dd00();
    if (uVar4 + 5000 < uVar2) goto LAB_005131f4;
    if ((!bVar1) && (uVar4 + 1000 < uVar2)) {
      F_00510db0();
      bVar1 = true;
    }
  } while( true );
}

/* ref: FUN_00513210 */
GEN_FRAME uint GEN_THISCALL F_00513210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x513210u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)((int)this + 0x1c);
  uVar2 = F_00513110(this GEN_EDX_FWD,uVar1);
  if (uVar2 == 0) {
    return 0xfffffff6;
  }
  uVar2 = F_00504190(param_1,uVar2,uVar1,0,*(undefined4 *)(param_1 + 0x10),
                       *(undefined4 *)(param_1 + 0x14),param_2);
  return uVar2;
}

/* ref: FUN_00513250 */
GEN_FRAME uint GEN_THISCALL F_00513250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x513250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  ushort * puVar4;
  undefined * this_01;
  bool bVar5;
  
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x4c))(this GEN_EDX_FWD);
  iVar1 = *(int *)(param_1 + 200);
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x4c))(this GEN_EDX_ARG);
  uVar2 = F_00513110(this GEN_EDX_ARG,~(uVar3 - 1) & (uVar2 - 1) + iVar1);
  (*(uint *)(gen_frame + 0x18)) = uVar2;
  if (uVar2 == 0) {
    return 0xfffffff6;
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x44) + 0xa70 + *(int *)(param_1 + 0xd8) * 4)));
  this_01 = *(undefined * PTR32 *)(param_1 + 0xdc);
  iVar1 = *(int *)(param_1 + 0xe8);
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = this_01;
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this_00;
  uVar2 = *(int *)(param_1 + 0x58) * 0x80;
  F_004f78b0(this_00 GEN_EDX_ARG,0,0,1,&(*(uint *)(gen_frame + 0x8)));
  if (((uVar2 < 0x400001) && (*(int *)((int)this + 0x14) == 0)) && (*(int *)((int)this + 0x18) == 0)
     ) {
    *(uint *)((int)this + 0x24) = uVar2;
    *(undefined4 *)((int)this + 0x28) = 0;
    uVar3 = F_004f9290(this_01 GEN_EDX_ARG,uVar2,"Client.System.File.FileThread.Spurs");
    (*(ushort * PTR32 *)(gen_frame + 0x10)) = (ushort *)uVar3;
    F_004f8a90((*(undefined * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,uVar3,uVar2,0,(*(uint *)(gen_frame + 0x8)),(*(int *)(gen_frame + 0xc)));
    bVar5 = CARRY4((*(uint *)(gen_frame + 0x8)),uVar2);
    (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + uVar2;
    (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + (uint)bVar5;
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xac))(this GEN_EDX_ARG);
    (*(uint *)(gen_frame + 0x28)) = 0;
    (*(uint *)(gen_frame + 0x24)) = 0;
    (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (undefined *)0x0;
    if (*(int *)(iVar1 + 0x14) != 0) {
      puVar4 = (ushort *)(iVar1 + 0x1e);
      do {
        uVar2 = (uint)*puVar4;
        (*(uint *)(gen_frame + 0x14)) = (uint)puVar4[-1];
        F_004f81e0((*(undefined * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,6,(*(uint *)(gen_frame + 0x28)) + (int)(*(ushort * PTR32 *)(gen_frame + 0x10)),(uint)puVar4[-1],(*(uint *)(gen_frame + 0x24)) + (*(uint *)(gen_frame + 0x18)),
                     uVar2 + 0xf & 0xfffffff0);
        (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) + (*(uint *)(gen_frame + 0x14));
        (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x24)) + uVar2;
        *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar2;
        uVar2 = (int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 1;
        puVar4 = puVar4 + 4;
        (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (undefined *)uVar2;
      } while (uVar2 < *(uint *)(iVar1 + 0x14));
      return 0x20;
    }
  }
  else {
    *(undefined4 *)((int)this + 0x24) = 0;
    *(undefined4 *)((int)this + 0x28) = 0;
    (*(uint *)(gen_frame + 0x28)) = 0;
    (*(uint *)(gen_frame + 0x14)) = 0;
    if (*(int *)(iVar1 + 0x14) != 0) {
      (*(ushort * PTR32 *)(gen_frame + 0x10)) = (ushort *)(iVar1 + 0x1e);
      do {
        uVar2 = (uint)*(*(ushort * PTR32 *)(gen_frame + 0x10));
        uVar3 = (uint)(*(ushort * PTR32 *)(gen_frame + 0x10))[-1];
        (*(uint *)(gen_frame + 0x24)) = uVar2;
        if ((*(uint *)((int)this + 0x14) == 0) || (*(uint *)((int)this + 0x14) <= (*(uint *)(gen_frame + 0x28)) + uVar2))
        {
          uVar2 = F_004f9290(this_01 GEN_EDX_ARG,uVar3,"Client.System.File.FileThread.Spurs");
          F_004f8a90((*(undefined * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,uVar2,uVar3,0,(*(uint *)(gen_frame + 0x8)),(*(int *)(gen_frame + 0xc)));
          bVar5 = CARRY4((*(uint *)(gen_frame + 0x8)),uVar3);
          (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + uVar3;
          (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + (uint)bVar5;
          ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xa8))(this GEN_EDX_ARG);
          F_004f81e0((*(undefined * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,6,uVar2,uVar3,(*(uint *)(gen_frame + 0x28)) + (*(uint *)(gen_frame + 0x18)),(*(uint *)(gen_frame + 0x24)) + 0xf & 0xfffffff0);
          *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + uVar3;
          *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + (*(uint *)(gen_frame + 0x24));
          uVar2 = (*(uint *)(gen_frame + 0x24));
          this_01 = (*(undefined * PTR32 *)(gen_frame + 0x20));
        }
        else {
          bVar5 = CARRY4((*(uint *)(gen_frame + 0x8)),uVar3);
          (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + uVar3;
          (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + (uint)bVar5;
        }
        uVar2 = (*(uint *)(gen_frame + 0x28)) + uVar2;
        (*(uint *)(gen_frame + 0x28)) = uVar2;
        if ((*(int *)((int)this + 0x18) != 0) &&
           ((uint)(*(int *)((int)this + 0x14) + *(int *)((int)this + 0x18)) < uVar2)) {
          return 0x20;
        }
        uVar2 = (*(uint *)(gen_frame + 0x14)) + 1;
        (*(ushort * PTR32 *)(gen_frame + 0x10)) = (*(ushort * PTR32 *)(gen_frame + 0x10)) + 4;
        (*(uint *)(gen_frame + 0x14)) = uVar2;
      } while (uVar2 < *(uint *)(iVar1 + 0x14));
    }
  }
  return 0x20;
}

/* ref: FUN_00513490 */
GEN_FRAME uint GEN_THISCALL F_00513490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x513490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ushort * puVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = *(undefined * PTR32 *)(param_1 + 0xdc);
  pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x44) + 0xa70 + *(int *)(param_1 + 0xd8) * 4)));
  iVar2 = *(int *)(param_1 + 0xe8);
  uVar3 = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  uVar6 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = pvVar1;
  (*(int *)(gen_frame + 0x24)) = iVar2;
  param_1 = 0;
  if (*(int *)(iVar2 + 0x14) != 0) {
    uVar7 = *(uint *)((int)this + 0x14);
    (*(ushort * PTR32 *)(gen_frame + 0x28)) = (ushort *)(iVar2 + 0x1e);
    do {
      uVar4 = (uint)*(*(ushort * PTR32 *)(gen_frame + 0x28));
      if ((uVar7 == 0) || (uVar7 <= uVar4 + uVar3)) {
        if (param_1 == 0) {
          *(uint *)((int)this + 0xa4) = uVar7 - uVar3;
        }
        param_1 = param_1 + uVar4;
      }
      uVar3 = uVar3 + uVar4;
      if ((*(int *)((int)this + 0x18) != 0) && (*(int *)((int)this + 0x18) + uVar7 < uVar3)) break;
      (*(ushort * PTR32 *)(gen_frame + 0x28)) = (*(ushort * PTR32 *)(gen_frame + 0x28)) + 4;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(iVar2 + 0x14));
  }
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x4c))(this GEN_EDX_FWD);
  uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x4c))(this GEN_EDX_ARG);
  uVar7 = ~(uVar6 - 1) & (uVar3 - 1) + param_1;
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x4c))(this GEN_EDX_ARG);
  uVar6 = F_00404310();
  uVar3 = F_00510ed0(this GEN_EDX_ARG,uVar6,uVar7,uVar3);
  *(uint *)((int)this + 0x9c) = uVar3;
  if (uVar3 == 0) {
    return 0xfffffff6;
  }
  F_004f78b0((*(undefined * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,0,0,1,&(*(uint *)(gen_frame + 0x4)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x9c) + 4))))(*(int * PTR32 *)((int)this + 0x9c) GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x10)) = uVar3;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  (*(ushort * PTR32 *)(gen_frame + 0x28)) = (ushort *)0x0;
  param_1 = 0;
  (*(uint *)(gen_frame + 0x18)) = 0;
  if (*(int *)((*(int *)(gen_frame + 0x24)) + 0x14) != 0) {
    (*(ushort * PTR32 *)(gen_frame + 0x14)) = (ushort *)((*(int *)(gen_frame + 0x24)) + 0x1e);
    do {
      uVar6 = (uint)(*(ushort * PTR32 *)(gen_frame + 0x14))[-1];
      uVar3 = (uint)*(*(ushort * PTR32 *)(gen_frame + 0x14));
      if ((*(uint *)((int)this + 0x14) == 0) ||
         (*(uint *)((int)this + 0x14) <= uVar3 + (int)(*(ushort * PTR32 *)(gen_frame + 0x28)))) {
        uVar7 = F_004f9290((*(undefined * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,uVar6,"Client.System.File.FileThread.Spurs");
        (*(uint *)(gen_frame + 0xc)) = uVar7;
        F_004f8a90((*(undefined * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,uVar7,uVar6,0,(*(uint *)(gen_frame + 0x4)),(*(int *)(gen_frame + 0x8)));
        bVar8 = CARRY4((*(uint *)(gen_frame + 0x4)),uVar6);
        (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + uVar6;
        (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + (uint)bVar8;
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xa8))(this GEN_EDX_ARG);
        F_004f81e0((*(undefined * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,6,(*(uint *)(gen_frame + 0xc)),uVar6,param_1 + (*(uint *)(gen_frame + 0x10)),uVar3 + 0xf & 0xfffffff0);
        *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + uVar6;
        *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar3;
        param_1 = param_1 + uVar3;
        puVar5 = (*(ushort * PTR32 *)(gen_frame + 0x28));
      }
      else {
        bVar8 = CARRY4((*(uint *)(gen_frame + 0x4)),uVar6);
        (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + uVar6;
        (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + (uint)bVar8;
        puVar5 = (*(ushort * PTR32 *)(gen_frame + 0x28));
      }
      (*(ushort * PTR32 *)(gen_frame + 0x28)) = (ushort *)((int)puVar5 + uVar3);
      if ((*(int *)((int)this + 0x18) != 0) &&
         ((uint)(*(int *)((int)this + 0x14) + *(int *)((int)this + 0x18)) < (int)puVar5 + uVar3)) {
        return 0x20;
      }
      uVar3 = (*(uint *)(gen_frame + 0x18)) + 1;
      (*(ushort * PTR32 *)(gen_frame + 0x14)) = (*(ushort * PTR32 *)(gen_frame + 0x14)) + 4;
      (*(uint *)(gen_frame + 0x18)) = uVar3;
    } while (uVar3 < *(uint *)((*(int *)(gen_frame + 0x24)) + 0x14));
  }
  return 0x20;
}

/* ref: Client::System::Resource::Handle::SoundResourceHandle::vf33 */
GEN_FRAME uint GEN_THISCALL F_00513690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x513690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  piVar4 = *(int * PTR32 *)(this + 0x9c);
  if (piVar4 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 4))(piVar4 GEN_EDX_FWD);
    iVar1 = *(int *)(this + 0xa4);
    uVar3 = F_00513110(this GEN_EDX_ARG,*(undefined4 *)(this + 0x1c));
    if (uVar3 == 0) {
      uVar2 = 0xfffffff6;
    }
    else {
      F_00c46aa0(uVar3,uVar2 + iVar1,*(undefined4 *)(this + 0x1c));
      uVar2 = param_2;
    }
    piVar4 = *(int * PTR32 *)(this + 0x9c);
    if (piVar4 != (int *)0x0) {
      piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4 GEN_EDX_ARG)));
      ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4 GEN_EDX_ARG,*(undefined4 *)(this + 0x9c));
      *(undefined4 *)(this + 0x9c) = 0;
    }
    return uVar2;
  }
  return param_2;
}

/* ref: FUN_00513710 */
GEN_FRAME unsigned int GEN_THISCALL F_00513710(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x513710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int iVar2;
  byte bVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x20));
  _InterlockedExchange((volatile long *)(((undefined4 *)((int)this + 0x38))), (long)(1));
  piVar1 = (int *)((int)this + 0x3c);
  iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
  if (iVar2 == 0) {
    F_0050b890(this GEN_EDX_ARG);
  }
  F_0050be10(this GEN_EDX_ARG);
  iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
  if (iVar2 == 0) {
    bVar3 = F_00510080(this GEN_EDX_ARG);
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar3);
    F_00510cb0(this GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x8)));
  }
  _InterlockedExchange((volatile long *)(((undefined4 *)((int)this + 0x38))), (long)(0));
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x20)));
}

/* ref: FUN_00513790 */
GEN_FRAME uint GEN_THISCALL F_00513790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x513790u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  DWORD DVar2;
  undefined3 uVar3;
  byte bVar4;
  DWORD DVar5;
  int * piVar6;
  undefined * extraout_EAX = 0;
  undefined * pvVar7;
  uint3 uVar11;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  DVar5 = gen_imp_GetCurrentThreadId();
  DVar2 = *((DWORD *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40)));
  uVar3 = (undefined3)(*(uint *)&gen_args[6]);
  if (DVar2 == DVar5) {
    piVar6 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38)));
    iVar8 = _InterlockedExchangeAdd((volatile long *)(piVar6), 0);
    if (iVar8 == 0) goto LAB_005137bf;
LAB_00513874: ;
    (*(uint *)&gen_args[6]) = CONCAT13(1,uVar3);
  }
  else {
LAB_005137bf: ;
    if ((char)(*(uint *)&gen_args[6]) != '\0') goto LAB_00513874;
    (*(uint *)&gen_args[6]) = (*(uint *)&gen_args[6]) & 0xffffff;
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20));
  }
  pvVar7 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) +
                     ((*(*(uint * PTR32 *)&gen_args[1]) >> 0x10) + (*(*(uint * PTR32 *)&gen_args[1]) & 0xffff) * 0x14) * 4)));
  if (pvVar7 == (undefined *)0x0) {
LAB_00513837: ;
    pvVar7 = *(undefined * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]);
    piVar6 = (int *)F_00526b50(pvVar7 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),(*(uint *)&gen_args[2]));
    if ((*piVar6 == *(int *)((int)pvVar7 + 4)) ||
       (piVar6 = *(int * PTR32 *)(*piVar6 + 0x10), piVar6 == (int *)0x0)) {
      piVar6 = (int *)F_0050cb50((undefined *)&(*(uint *)&gen_args[6]) GEN_EDX_ARG,(*(uint * PTR32 *)&gen_args[1]),(*(uint *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),
                                 (*(undefined4 *)&gen_args[4]),(*(int *)&gen_args[5]));
    }
    else {
      piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 4))(piVar6 GEN_EDX_ARG,(*(uint * PTR32 *)&gen_args[1]),(*(uint *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(int *)&gen_args[5]))));
    }
    if ((*(undefined1 *)((char *)&(*(uint *)&gen_args[6]) + 3)) == '\0') {
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)piVar6[0x21]);
    }
    LOCK();
    piVar6[0x22] = 1;
    UNLOCK();
    LOCK();
    piVar6[0x23] = 1;
    UNLOCK();
    LOCK();
    piVar6[0x25] = piVar6[0x25] + 1;
    UNLOCK();
    ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x60))(piVar6 GEN_EDX_ARG);
    F_0050c230(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) GEN_EDX_ARG,piVar6);
    piVar6[0x17] = piVar6[0x17] & 0xfffffffdU | 1;
  }
  else {
    F_00526d10(pvVar7 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),(*(uint *)&gen_args[2]));
    if ((*(undefined * PTR32 *)((int)pvVar7 + 4) == (*(undefined * PTR32 *)(gen_frame + 0x8))) ||
       (pvVar7 = *(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10), pvVar7 == (undefined *)0x0)) goto LAB_00513837;
    F_00526d80(pvVar7 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)&gen_args[3]));
    if ((*(undefined * PTR32 *)((int)pvVar7 + 4) == (*(undefined * PTR32 *)(gen_frame + 0x8))) ||
       (piVar6 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10), piVar6 == (int *)0x0)) goto LAB_00513837;
    pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    if ((*(undefined1 *)((char *)&(*(uint *)&gen_args[6]) + 3)) == '\0') {
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)piVar6[0x21]);
      pvVar7 = extraout_EAX;
    }
    uVar11 = (uint3)((uint)((int)(uintptr_t)pvVar7) >> 8);
    if ((*(int *)&gen_args[5]) == 0) {
      iVar8 = (uint)uVar11 << 8;
    }
    else {
      iVar8 = CONCAT31(uVar11,*(undefined1 *)((*(int *)&gen_args[5]) + 0x21));
    }
    ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6 GEN_EDX_ARG,iVar8);
    LOCK();
    piVar6[0x25] = piVar6[0x25] + 1;
    UNLOCK();
    uVar10 = (*(uint *)&gen_args[2]) >> 8;
    (*(uint *)&gen_args[2]) = (*(uint *)&gen_args[2]) & 0xffffff00;
    piVar1 = piVar6 + 0x22;
    iVar8 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
    if (iVar8 == 3) {
      uVar9 = ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x90))(piVar6 GEN_EDX_ARG);
      if ((char)uVar9 == '\0') {
        if ((char)piVar6[0x18] != -1) {
          uVar10 = ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x30))(piVar6 GEN_EDX_ARG);
          if ((char)uVar10 != '\0') {
            F_0050a280((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
          }
        }
      }
      else {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x98))(piVar6 GEN_EDX_ARG);
        (*(uint *)&gen_args[2]) = CONCAT31((int3)uVar10,1);
      }
      F_0050b240(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) GEN_EDX_ARG,piVar6);
    }
    if (((byte)piVar6[0x17] & 3) != 1) {
      piVar6[0x17] = piVar6[0x17] & 0xfffffffdU | 1;
    }
    bVar4 = F_005017b0(piVar6 GEN_EDX_ARG,(*(int *)&gen_args[5]),(*(uint *)&gen_args[2]));
    if (bVar4 == 0) goto LAB_005139bd;
  }
  F_0050b800((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6,(*(int *)&gen_args[5]));
LAB_005139bd: ;
  F_00510d00((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6,(*(int *)&gen_args[5]),1);
  if ((*(undefined1 *)((char *)&(*(uint *)&gen_args[6]) + 3)) == '\0') {
    gen_imp_LeaveCriticalSection(piVar6[0x21]);
    gen_imp_LeaveCriticalSection((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20);
  }
  return (uint)piVar6;
}

/* ref: FUN_005139f0 */
GEN_FRAME uint GEN_THISCALL F_005139f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x5139f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[8];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  int * piVar2;
  int iVar3;
  undefined * pvVar4;
  byte bVar5;
  int * piVar6;
  undefined4 uVar7;
  uint uVar8;
  DWORD DVar9;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar3 = (*(int *)&gen_args[2]);
  pvVar4 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) +
                     ((*(*(uint * PTR32 *)&gen_args[1]) >> 0x10) + (*(*(uint * PTR32 *)&gen_args[1]) & 0xffff) * 0x14) * 4)));
  if (pvVar4 == (undefined *)0x0) {
LAB_00513a66: ;
    pvVar4 = *(undefined * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]);
    piVar6 = (int *)F_00526b50(pvVar4 GEN_EDX_ARG,&(*(int *)&gen_args[2]),iVar3);
    if ((*piVar6 == *(int *)((int)pvVar4 + 4)) ||
       (piVar6 = *(int * PTR32 *)(*piVar6 + 0x10), piVar6 == (int *)0x0)) {
      piVar6 = (int *)F_0050cb50((undefined *)&(*(int * PTR32 *)&gen_args[5]) GEN_EDX_ARG,(*(uint * PTR32 *)&gen_args[1]),iVar3,(*(uint *)&gen_args[3]),
                                 (*(undefined4 *)&gen_args[4]),(*(int * PTR32 *)&gen_args[5]));
    }
    else {
      piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 4))(piVar6 GEN_EDX_ARG,(*(uint * PTR32 *)&gen_args[1]),iVar3,(*(uint *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(int * PTR32 *)&gen_args[5]))));
    }
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)piVar6[0x21]);
    LOCK();
    piVar6[0x22] = 1;
    UNLOCK();
    LOCK();
    piVar6[0x23] = 1;
    UNLOCK();
    LOCK();
    piVar6[0x25] = piVar6[0x25] + 1;
    UNLOCK();
    ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x60))(piVar6 GEN_EDX_ARG);
    F_0050c230(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) GEN_EDX_ARG,piVar6);
    piVar6[0x17] = piVar6[0x17] & 0xfffffffeU | 2;
  }
  else {
    F_00526d10(pvVar4 GEN_EDX_ARG,&(*(int *)&gen_args[2]),(*(int *)&gen_args[2]));
    if ((*(int *)((int)pvVar4 + 4) == (*(int *)&gen_args[2])) ||
       (pvVar4 = *(undefined * PTR32 *)((*(int *)&gen_args[2]) + 0x10), pvVar4 == (undefined *)0x0)) goto LAB_00513a66;
    F_00526d80(pvVar4 GEN_EDX_ARG,&(*(int *)&gen_args[2]),(*(uint *)&gen_args[3]));
    if ((*(int *)((int)pvVar4 + 4) == (*(int *)&gen_args[2])) ||
       (piVar6 = *(int * PTR32 *)((*(int *)&gen_args[2]) + 0x10), piVar6 == (int *)0x0)) goto LAB_00513a66;
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)piVar6[0x21]);
    if ((*(int * PTR32 *)&gen_args[5]) == (int *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = CONCAT31((int3)((uint)(*(int * PTR32 *)&gen_args[5]) >> 8),*((undefined1 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[5]) + 0x21))));
    }
    ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6 GEN_EDX_ARG,uVar7);
    LOCK();
    piVar6[0x25] = piVar6[0x25] + 1;
    UNLOCK();
    (*(uint *)&gen_args[3]) = (*(uint *)&gen_args[3]) & 0xffffff00;
    piVar1 = piVar6 + 0x22;
    iVar3 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
    if (iVar3 == 3) {
      uVar8 = ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x90))(piVar6 GEN_EDX_ARG);
      if ((char)uVar8 == '\0') {
        if ((char)piVar6[0x18] != -1) {
          uVar8 = ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x30))(piVar6 GEN_EDX_ARG);
          if ((char)uVar8 != '\0') {
            F_0050a280((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
          }
        }
      }
      else {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x98))(piVar6 GEN_EDX_ARG);
        (*(uint *)&gen_args[3]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[3]), 1, 3),1);
      }
      F_0050b240(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) GEN_EDX_ARG,piVar6);
    }
    if ((piVar6[0x17] << 0x1e) >> 0x1e != 2) {
      piVar6[0x17] = piVar6[0x17] & 0xfffffffeU | 2;
    }
    piVar1 = piVar6 + 0x20;
    do {
      iVar3 = _InterlockedExchange((volatile long *)(piVar1), (long)(1));
    } while (iVar3 != 0);
    piVar2 = piVar6 + 0x23;
    iVar3 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
    _InterlockedExchange((volatile long *)(piVar1), (long)(0));
    if (iVar3 == 2) {
      F_0050a190((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
      bVar5 = 1;
    }
    else if ((piVar6[0xc] & 0xc000000U) == 0) {
      bVar5 = F_005017b0(piVar6 GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[5]),(*(uint *)&gen_args[3]));
    }
    else {
      bVar5 = 0;
    }
    if ((*(byte *)(piVar6 + 0x16) & 0x20) == 0) goto LAB_00513c24;
    *(byte *)(piVar6 + 0x16) = *(byte *)(piVar6 + 0x16) & 0xdf;
  }
  bVar5 = 1;
LAB_00513c24: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)piVar6[0x21]);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  if (bVar5 != 0) {
    DVar9 = gen_imp_GetCurrentThreadId();
    (*(uint *)&gen_args[3]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[3]), 1, 3),DVar9 == *((DWORD *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))));
    _InterlockedExchange((volatile long *)((((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))))), (long)(1));
    F_004fda90(REFG(void * PTR32, 0x1375ae8) GEN_EDX_ARG,piVar6 + 0xc,piVar6,(*(uint *)&gen_args[3]));
    _InterlockedExchange((volatile long *)((((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))))), (long)(0));
  }
  gen_imp_EnterCriticalSection(lpCriticalSection);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)piVar6[0x21]);
  if (bVar5 != 0) {
    DVar9 = gen_imp_GetCurrentThreadId();
    F_0050b530(piVar6 GEN_EDX_ARG,(uint)(DVar9 != *((DWORD *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44)))));
  }
  piVar1 = (*(int * PTR32 *)&gen_args[5]);
  if ((*(int * PTR32 *)&gen_args[5]) != (int *)0x0) {
    if (*(*(int * PTR32 *)&gen_args[5]) != 0) {
      F_00510a30(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) GEN_EDX_ARG,*(*(int * PTR32 *)&gen_args[5]),piVar6);
      piVar2 = piVar6 + 0x22;
      iVar3 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
      if (iVar3 == 2) {
        F_00508060(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) GEN_EDX_ARG,piVar6);
      }
    }
    if (*(byte *)(piVar1 + 5) != 0xff) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x34))
                (piVar6 GEN_EDX_ARG,(uint)*(byte *)(piVar1 + 5),piVar1[6],(uint)*(byte *)(piVar1 + 7));
    }
  }
  gen_imp_LeaveCriticalSection(piVar6[0x21]);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return (uint)piVar6;
}

/* ref: FUN_00513d20 */
GEN_FRAME uint F_00513d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x513d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar1 = (*(int *)&gen_args[3]);
  if ((*(int *)&gen_args[3]) == 0) {
    uVar4 = 0;
    uVar2 = 0;
  }
  else {
    uVar4 = *(undefined4 *)((*(int *)&gen_args[3]) + 0xc);
    uVar2 = *(undefined4 *)((*(int *)&gen_args[3]) + 8);
  }
  F_004ff470(&(*(int *)&gen_args[3]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[2]),uVar2,uVar4);
  uVar3 = F_00513790(REFG(void * PTR32, 0x1375aec) GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),&(*(int *)&gen_args[3]),(*(undefined4 *)&gen_args[2]),iVar1,0,(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]));
  return uVar3;
}

/* ref: FUN_00513d70 */
GEN_FRAME uint F_00513d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x513d70u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar1 = (*(int *)&gen_args[3]);
  if ((*(int *)&gen_args[3]) == 0) {
    uVar4 = 0;
    uVar2 = 0;
  }
  else {
    uVar4 = *(undefined4 *)((*(int *)&gen_args[3]) + 0xc);
    uVar2 = *(undefined4 *)((*(int *)&gen_args[3]) + 8);
  }
  F_004ff470(&(*(int *)&gen_args[3]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[2]),uVar2,uVar4);
  uVar3 = F_005139f0(REFG(void * PTR32, 0x1375aec) GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),&(*(int *)&gen_args[3]),(*(undefined4 *)&gen_args[2]),iVar1,(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]));
  return uVar3;
}

/* ref: FUN_00513dc0 */
GEN_FRAME uint F_00513dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x513dc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  char * pcVar6;
  undefined4 uVar7;
  bool bVar8;
  
  (*(uint *)(gen_frame + 0x4)) = 0xffffffff;
  F_00503ef0(&(*(uint *)(gen_frame + 0x4)),param_1);
  if ((*(uint *)(gen_frame + 0x4)) != 0xffffffff) {
    pbVar2 = (&REFG(undefined * PTR32, 0x1097ee8))[(int)(((*(uint *)(gen_frame + 0x4)) & 0xffff) * 2)];
    pcVar6 = "reserved";
    do {
      bVar1 = *pbVar2;
      bVar8 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_00513e17: ;
        iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_00513e1c;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar8 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_00513e17;
      pbVar2 = pbVar2 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00513e1c: ;
    if (iVar3 != 0) {
      (*(int *)(gen_frame + 0x8)) = 0;
      F_004ff3e0(&(*(int *)(gen_frame + 0x8)),param_1);
      if ((*(int *)(gen_frame + 0x8)) != 0) {
        if (param_2 == 0) {
          uVar7 = 0;
          uVar4 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(param_2 + 0xc);
          uVar4 = *(undefined4 *)(param_2 + 8);
        }
        F_004ff470(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,uVar4,uVar7);
        uVar5 = F_00513790(REFG(void * PTR32, 0x1375aec) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x4)),&(*(int *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x0)),param_1,param_2,0,param_3,
                             param_4);
        return uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00513e90 */
GEN_FRAME uint F_00513e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x513e90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  char * pcVar6;
  undefined4 uVar7;
  bool bVar8;
  
  (*(uint *)(gen_frame + 0x4)) = 0xffffffff;
  F_00503ef0(&(*(uint *)(gen_frame + 0x4)),param_1);
  if ((*(uint *)(gen_frame + 0x4)) != 0xffffffff) {
    pbVar2 = (&REFG(undefined * PTR32, 0x1097ee8))[(int)(((*(uint *)(gen_frame + 0x4)) & 0xffff) * 2)];
    pcVar6 = "reserved";
    do {
      bVar1 = *pbVar2;
      bVar8 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_00513ee7: ;
        iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_00513eec;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar8 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_00513ee7;
      pbVar2 = pbVar2 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00513eec: ;
    if (iVar3 != 0) {
      (*(int *)(gen_frame + 0x8)) = 0;
      F_004ff3e0(&(*(int *)(gen_frame + 0x8)),param_1);
      if ((*(int *)(gen_frame + 0x8)) != 0) {
        if (param_2 == 0) {
          uVar7 = 0;
          uVar4 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(param_2 + 0xc);
          uVar4 = *(undefined4 *)(param_2 + 8);
        }
        F_004ff470(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,uVar4,uVar7);
        uVar5 = F_005139f0(REFG(void * PTR32, 0x1375aec) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x4)),&(*(int *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x0)),param_1,param_2,param_3,param_4
                            );
        return uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00513f60 */
GEN_FRAME uint F_00513f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x513f60u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  undefined * this;
  DWORD DVar2;
  int * piVar3;
  uint uVar4;
  bool bVar5;
  
  this = REFG(void * PTR32, 0x1375aec);
  DVar2 = gen_imp_GetCurrentThreadId();
  if (*(DWORD *)((int)this + 0x40) == DVar2) {
    piVar3 = (int *)((int)this + 0x38);
    iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar3), 0);
    bVar5 = iVar1 != 0;
    if (bVar5) goto LAB_00513fa3;
  }
  else {
    bVar5 = false;
  }
  gen_imp_EnterCriticalSection((int)this + 0x20);
LAB_00513fa3: ;
  gen_imp_EnterCriticalSection(*(undefined4 *)(param_1 + 0x84));
  piVar3 = (int *)(param_1 + 0x94);
  iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar3), 0);
  if (iVar1 == 0) {
    piVar3 = (int *)(param_1 + 0x3c);
    if (0xf < *(uint *)(param_1 + 0x50)) {
      piVar3 = (int *)*piVar3;
    }
    uVar4 = F_00513790(this GEN_EDX_ARG,param_1 + 4,param_1 + 8,param_1 + 0xc,piVar3,0,1,param_2,param_3);
  }
  else {
    _InterlockedExchangeAdd((volatile long *)(piVar3), (long)(1));
    uVar4 = param_1;
  }
  gen_imp_LeaveCriticalSection(*(undefined4 *)(param_1 + 0x84));
  if (!bVar5) {
    gen_imp_LeaveCriticalSection((int)this + 0x20);
  }
  return uVar4;
}

/* ref: FUN_00514030 */
GEN_FRAME unsigned int GEN_THISCALL F_00514030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x514030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  int * piVar6;
  int * piVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int * piVar15;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x1375aec) + 0x20));
  uVar11 = F_00505820(this GEN_EDX_ARG,param_1);
  F_00527fb0(param_2 GEN_EDX_ARG,uVar11);
  piVar15 = ((int *)GEN_TOP(((param_1 & 0xffff) * 0x50 + (int)this)));
  (*(uint *)(gen_frame + 0x4)) = 0;
  do {
    if (*piVar15 != 0) {
      puVar2 = *(undefined4 * PTR32 *)(*piVar15 + 4);
      puVar3 = (undefined4 *)*puVar2;
      puVar9 = puVar3;
      while (puVar3 != puVar2) {
        puVar4 = *(undefined4 * PTR32 *)(puVar3[4] + 4);
        puVar5 = (undefined4 *)*puVar4;
        while (puVar5 != puVar4) {
          iVar12 = puVar5[4];
          (*(int *)(gen_frame + 0x8)) = iVar12;
          F_00513f60(iVar12,0,0);
          piVar6 = (int *)param_2[1];
          if ((&(*(int *)(gen_frame + 0x8)) < piVar6) && (piVar7 = (int *)*param_2, piVar7 <= &(*(int *)(gen_frame + 0x8)))) {
            if (piVar6 == (int *)param_2[2]) {
              iVar12 = (int)piVar6 - (int)((int)(uintptr_t)piVar7) >> 2;
              if (iVar12 == -1) {
LAB_00514252: ;
                    
                F_00c4579a("vector<T> too long");
              }
              uVar13 = iVar12 + 1;
              uVar11 = (int)param_2[2] - (int)((int)(uintptr_t)piVar7) >> 2;
              if (uVar11 < uVar13) {
                if (-(uVar11 >> 1) - 1 < uVar11) {
                  uVar11 = 0;
                }
                else {
                  uVar11 = uVar11 + (uVar11 >> 1);
                }
                if (uVar11 < uVar13) {
                  uVar11 = uVar13;
                }
                F_00527fb0(param_2 GEN_EDX_ARG,uVar11);
              }
            }
            if ((undefined4 *)param_2[1] != (undefined4 *)0x0) {
              *(undefined4 *)param_2[1] =
                   *((undefined4 *)GEN_TOP((*param_2 + ((int)&(*(int *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)piVar7) >> 2) * 4)));
            }
          }
          else {
            if (piVar6 == (int *)param_2[2]) {
              iVar14 = (int)((int)piVar6 - *param_2) >> 2;
              if (iVar14 == -1) goto LAB_00514252;
              uVar13 = iVar14 + 1;
              uVar11 = (int)((int)param_2[2] - *param_2) >> 2;
              if (uVar11 < uVar13) {
                if (-(uVar11 >> 1) - 1 < uVar11) {
                  uVar11 = 0;
                }
                else {
                  uVar11 = uVar11 + (uVar11 >> 1);
                }
                if (uVar11 < uVar13) {
                  uVar11 = uVar13;
                }
                F_00527fb0(param_2 GEN_EDX_ARG,uVar11);
                iVar12 = (*(int *)(gen_frame + 0x8));
              }
            }
            if ((int *)param_2[1] != (int *)0x0) {
              *(int *)param_2[1] = iVar12;
            }
          }
          param_2[1] = param_2[1] + 4;
          puVar3 = puVar9;
          if (*(char *)((int)puVar5 + 0x15) == '\0') {
            puVar8 = (undefined4 *)puVar5[2];
            if (*(char *)((int)puVar8 + 0x15) == '\0') {
              cVar1 = *(char *)((int)*puVar8 + 0x15);
              puVar5 = puVar8;
              puVar8 = (undefined4 *)*puVar8;
              while (cVar1 == '\0') {
                cVar1 = *(char *)((int)*puVar8 + 0x15);
                puVar5 = puVar8;
                puVar8 = (undefined4 *)*puVar8;
              }
            }
            else {
              cVar1 = *(char *)((int)puVar5[1] + 0x15);
              puVar10 = (undefined4 *)puVar5[1];
              puVar8 = puVar5;
              while ((puVar5 = puVar10, cVar1 == '\0' && (puVar8 == (undefined4 *)puVar5[2]))) {
                cVar1 = *(char *)((int)puVar5[1] + 0x15);
                puVar10 = (undefined4 *)puVar5[1];
                puVar8 = puVar5;
              }
            }
          }
        }
        if (*(char *)((int)puVar3 + 0x15) == '\0') {
          puVar9 = (undefined4 *)puVar3[2];
          if (*(char *)((int)puVar9 + 0x15) == '\0') {
            cVar1 = *(char *)((int)*puVar9 + 0x15);
            puVar3 = puVar9;
            puVar4 = (undefined4 *)*puVar9;
            while (puVar9 = puVar3, cVar1 == '\0') {
              cVar1 = *(char *)((int)*puVar4 + 0x15);
              puVar3 = puVar4;
              puVar4 = (undefined4 *)*puVar4;
            }
          }
          else {
            cVar1 = *(char *)((int)puVar3[1] + 0x15);
            puVar9 = (undefined4 *)puVar3[1];
            puVar4 = puVar3;
            while ((puVar3 = puVar9, puVar9 = puVar3, cVar1 == '\0' &&
                   (puVar4 == (undefined4 *)puVar3[2]))) {
              cVar1 = *(char *)((int)puVar3[1] + 0x15);
              puVar9 = (undefined4 *)puVar3[1];
              puVar4 = puVar3;
            }
          }
        }
      }
    }
    (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
    piVar15 = piVar15 + 1;
    if (0x13 < (*(uint *)(gen_frame + 0x4))) {
      return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x1375aec) + 0x20)));
    }
  } while( true );
}

/* ref: FUN_00514260 */
GEN_FRAME uint GEN_THISCALL F_00514260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x514260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  piVar1 = (int *)((int)this + 0x88);
  iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
  if (iVar2 == 3) {
    return 2;
  }
  _InterlockedExchange((volatile long *)(((undefined4 *)((int)this + 0x8c))), (long)(4));
  piVar1 = (int *)((int)this + 0x90);
  iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
  if (iVar2 == 2) {
    return 2 - (*(int *)((int)this + 0x1c) != 0);
  }
  if (*param_1 == 0xb) {
    iVar2 = param_1[0x32];
  }
  else {
    uVar4 = F_004f7900((undefined *)param_1[9] GEN_EDX_FWD);
    iVar2 = (int)uVar4;
  }
  *(int *)((int)this + 0x20) = iVar2;
  uVar3 = F_00504120(param_1);
  *(uint *)((int)this + 0x1c) = uVar3;
  if (uVar3 == 0) {
    return 2;
  }
  if ((*param_1 == 0xb) && (1 < (uint)param_1[0x13])) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xa4))(this GEN_EDX_ARG);
    if (uVar3 == 1) {
      uVar3 = F_00510f80(this GEN_EDX_ARG,param_1,(int)this + 0x38,0);
      return uVar3;
    }
  }
  iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
  if (iVar2 == 1) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x88))(this GEN_EDX_ARG,param_1,param_2);
    return uVar3;
  }
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x80))(this GEN_EDX_ARG,param_1,param_2);
  return uVar3;
}

/* ref: FUN_00514370 */
GEN_FRAME uint GEN_THISCALL F_00514370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x514370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  int * piVar5;
  uint uVar6;
  undefined * _Dst;
  int iVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  F_00504190(param_1,((byte *)(gen_frame + 0x14)),0x44,0,uVar3,uVar2,param_2);
  *(undefined4 *)((int)this + 0x98) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x14)) + 0));
  piVar5 = (int *)F_00406520();
  uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5 GEN_EDX_ARG,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x14)) + 4)),0);
  *(uint *)((int)this + 0xa4) = uVar6;
  if (uVar6 == 0) goto LAB_00514526;
  F_00504190(param_1,uVar6,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x14)) + 4)),0,uVar3,uVar2,param_2);
  *(undefined4 *)((int)this + 0xac) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x14)) + 8));
  *(uint *)((int)this + 0xb0) =
       (*(undefined4 *)((char *)((byte *)(gen_frame + 0x14)) + 8)) + ((uint)(ushort)(*(undefined2 *)((char *)((byte *)(gen_frame + 0x14)) + 14)) + (uint)(ushort)(*(undefined2 *)((char *)((byte *)(gen_frame + 0x14)) + 12))) * 4;
  piVar5 = (int *)F_00406520();
  _Dst = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5 GEN_EDX_ARG,*(undefined4 *)((int)this + 0xb0),0)));
  *(undefined * PTR32 *)((int)this + 0xa8) = _Dst;
  if (_Dst == (undefined *)0x0) goto LAB_00514526;
  F_00c48350(_Dst,0,*(gen_size32 *)((int)this + 0xb0));
  F_00504190(param_1,*(undefined4 *)((int)this + 0xa8),*(undefined4 *)((int)this + 0xac),0,uVar3,
               uVar2,param_2);
  *(bool *)((int)this + 0x12a) = *(int *)((int)this + 4) != 4;
  (*(byte *)(gen_frame + 0x13)) = *(char *)(REFG(int, 0x1371278) + 0x10);
  if (*(int *)((int)this + 4) == 4) {
LAB_005144e2: ;
    (*(byte *)(gen_frame + 0x13)) = '\0';
    *(undefined1 *)((int)this + 0x128) = 1;
  }
  else {
    (*(uint *)(gen_frame + 0x4)) = (uint)((byte *)(gen_frame + 0x14))[0x40];
    iVar7 = 0;
    uVar6 = 0;
    (*(uint * PTR32 *)(gen_frame + 0xc)) = (uint *)0x0;
    if (1 < (*(uint *)(gen_frame + 0x4))) {
      do {
        iVar9 = uVar6 * 4;
        iVar1 = uVar6 * 4;
        uVar6 = uVar6 + 2;
        iVar7 = iVar7 + *(int *)(((byte *)(gen_frame + 0x14)) + iVar9 + 0x34) + *(int *)(((byte *)(gen_frame + 0x14)) + iVar1 + 0x28);
        (*(uint * PTR32 *)(gen_frame + 0xc)) = ((uint *)GEN_TOP(((int)(*(uint * PTR32 *)(gen_frame + 0xc)) +
                           *(int *)(((byte *)(gen_frame + 0x14)) + uVar6 * 4 + 0x24) + *(int *)(((byte *)(gen_frame + 0x14)) + uVar6 * 4 + 0x30)
                           )));
      } while (uVar6 < (*(uint *)(gen_frame + 0x4)) - 1);
    }
    iVar9 = 0;
    if (uVar6 < (*(uint *)(gen_frame + 0x4))) {
      iVar9 = *(int *)(((byte *)(gen_frame + 0x14)) + uVar6 * 4 + 0x34) + *(int *)(((byte *)(gen_frame + 0x14)) + uVar6 * 4 + 0x28);
    }
    if ((uint)(iVar7 + (int)(*(uint * PTR32 *)(gen_frame + 0xc)) + iVar9) < 0x20001) goto LAB_005144e2;
  }
  bVar8 = ((byte *)(gen_frame + 0x14))[0x40] - 1;
  (*(uint *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x4)), 1, 3),bVar8);
  if ((*(byte *)(gen_frame + 0x13)) == -1) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_ARG,(*(uint *)(gen_frame + 0x4)),0);
    uVar10 = (uint)bVar8;
    uVar6 = F_005116a0(this GEN_EDX_ARG,param_1,*(undefined4 *)(((byte *)(gen_frame + 0x14)) + uVar10 * 4 + 0x10),
                         *(undefined4 *)(((byte *)(gen_frame + 0x14)) + uVar10 * 4 + 0x28));
    *(uint *)((int)this + uVar10 * 4 + 0x10c) = uVar6;
    bVar4 = ((byte *)(gen_frame + 0x14))[0x40];
    if (uVar6 == 0) {
LAB_00514526: ;
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
      return 0xfffffff6;
    }
  }
  else {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_ARG,0,1);
    uVar6 = 0;
    bVar4 = ((byte *)(gen_frame + 0x14))[0x40];
    if (((byte *)(gen_frame + 0x14))[0x40] != 0) {
      (*(uint * PTR32 *)(gen_frame + 0xc)) = (uint *)((int)this + 0x10c);
      do {
        uVar10 = F_005116a0(this GEN_EDX_ARG,param_1,*(undefined4 *)(((byte *)(gen_frame + 0x14)) + uVar6 * 4 + 0x10),
                              *(undefined4 *)(((byte *)(gen_frame + 0x14)) + uVar6 * 4 + 0x28));
        *(*(uint * PTR32 *)(gen_frame + 0xc)) = uVar10;
        if (uVar10 == 0) goto LAB_00514526;
        (*(uint * PTR32 *)(gen_frame + 0xc)) = (*(uint * PTR32 *)(gen_frame + 0xc)) + 1;
        uVar6 = uVar6 + 1;
        bVar4 = ((byte *)(gen_frame + 0x14))[0x40];
      } while (uVar6 < ((byte *)(gen_frame + 0x14))[0x40]);
    }
  }
  if ((*(int *)((int)this + 4) == 4) || ((*(byte *)(gen_frame + 0x13)) != -1)) {
    (*(uint *)(gen_frame + 0x4)) = 4;
    if (*(int *)((int)this + 4) == 4) {
      (*(uint *)(gen_frame + 0x4)) = 0x50;
    }
    (*(byte *)(gen_frame + 0x13)) = 0;
    if (bVar4 != 0) {
      do {
        uVar10 = (uint)(*(byte *)(gen_frame + 0x13));
        uVar6 = F_00511950(this GEN_EDX_ARG,param_1,*(undefined4 *)(((byte *)(gen_frame + 0x14)) + uVar10 * 4 + 0x1c),
                             *(undefined4 *)(((byte *)(gen_frame + 0x14)) + uVar10 * 4 + 0x34),(*(uint *)(gen_frame + 0x4)));
        *(uint *)((int)this + uVar10 * 4 + 0x118) = uVar6;
        if (uVar6 == 0) goto LAB_00514526;
        (*(byte *)(gen_frame + 0x13)) = (*(byte *)(gen_frame + 0x13)) + 1;
      } while ((*(byte *)(gen_frame + 0x13)) < bVar4);
    }
  }
  else {
    uVar6 = (uint)bVar8;
    uVar10 = F_00511950(this GEN_EDX_ARG,param_1,*(undefined4 *)(((byte *)(gen_frame + 0x14)) + uVar6 * 4 + 0x1c),
                          *(undefined4 *)(((byte *)(gen_frame + 0x14)) + uVar6 * 4 + 0x34),4);
    *(uint *)((int)this + uVar6 * 4 + 0x118) = uVar10;
    if (uVar10 == 0) {
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
      return 0xfffffff6;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00514650 */
GEN_FRAME uint GEN_THISCALL F_00514650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x514650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  gen_size32 _Size;
  int * piVar2;
  undefined * pvVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  undefined4 uVar9;
  
  iVar1 = *(int *)(param_1 + 0xe8);
  *(undefined4 *)((int)this + 0x98) = *(undefined4 *)(iVar1 + 0x14);
  (*(int *)(gen_frame + 0x4)) = *(int *)(param_1 + 0xdc);
  _Size = *(gen_size32 *)(iVar1 + 0x18);
  (*(uint * PTR32 *)(gen_frame + 0x0)) = *((uint * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x44) + 0xa70 + *(int *)(param_1 + 0xd8) * 4)));
  piVar2 = (int *)F_00406520();
  pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,_Size,0x80)));
  *(undefined * PTR32 *)((int)this + 0xa4) = pvVar3;
  if (pvVar3 == (undefined *)0x0) {
    return 0xfffffff6;
  }
  F_00c48350(pvVar3,0,_Size);
  F_005020a0(this GEN_EDX_ARG,(*(uint * PTR32 *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x4)),*(undefined4 *)((int)this + 0xa4),*(undefined4 *)(iVar1 + 0x44)
               ,(uint)*(ushort *)(iVar1 + 0xb2),iVar1 + 0xd0 + (uint)*(ushort *)(iVar1 + 0x9c) * 2);
  iVar5 = *(int *)(iVar1 + 0x1c);
  *(int *)((int)this + 0xac) = iVar5;
  *(uint *)((int)this + 0xb0) =
       iVar5 + ((uint)*(ushort *)(iVar1 + 0xca) + (uint)*(ushort *)(iVar1 + 200)) * 4;
  piVar2 = (int *)F_00406520();
  pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,*(undefined4 *)((int)this + 0xb0),0x80)));
  *(undefined * PTR32 *)((int)this + 0xa8) = pvVar3;
  if (pvVar3 == (undefined *)0x0) {
    return 0xfffffff6;
  }
  F_00c48350(pvVar3,0,*(gen_size32 *)((int)this + 0xb0));
  F_005020a0(this GEN_EDX_ARG,(*(uint * PTR32 *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x4)),*(undefined4 *)((int)this + 0xa8),*(undefined4 *)(iVar1 + 0x48)
               ,(uint)*(ushort *)(iVar1 + 0xb4),iVar1 + 0xd0 + (uint)*(ushort *)(iVar1 + 0x9e) * 2);
  (*(char *)(gen_frame + 0xb)) = *(char *)(REFG(int, 0x1371278) + 0x10);
  if (*(int *)((int)this + 4) != 4) {
    uVar6 = 0;
    (*(uint * PTR32 *)(gen_frame + 0x0)) = (uint *)0x0;
    (*(int *)(gen_frame + 0x4)) = 0;
    if (1 < *(byte *)(iVar1 + 0xcc)) {
      iVar5 = (*(byte *)(iVar1 + 0xcc) - 2 >> 1) + 1;
      uVar6 = iVar5 * 2;
      piVar2 = (int *)(iVar1 + 0x20);
      do {
        (*(uint * PTR32 *)(gen_frame + 0x0)) = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x0)) + piVar2[6] + *piVar2);
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + piVar2[7] + piVar2[1];
        iVar5 = iVar5 - 1;
        piVar2 = piVar2 + 2;
      } while (iVar5 != 0);
    }
    iVar5 = 0;
    if (uVar6 < *(byte *)(iVar1 + 0xcc)) {
      iVar5 = *(int *)(iVar1 + 0x38 + uVar6 * 4) + *(int *)(iVar1 + 0x20 + uVar6 * 4);
    }
    if (0x20000 < (uint)((int)(*(uint * PTR32 *)(gen_frame + 0x0)) + iVar5 + (*(int *)(gen_frame + 0x4)))) goto LAB_005147fb;
  }
  *(undefined1 *)((int)this + 0x128) = 1;
  (*(char *)(gen_frame + 0xb)) = '\0';
LAB_005147fb: ;
  bVar7 = *(char *)(iVar1 + 0xcc) - 1;
  (*(int *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x4)), 1, 3),bVar7);
  iVar5 = (*(int *)(gen_frame + 0x4));
  if ((*(char *)(gen_frame + 0xb)) != -1) {
    iVar5 = 0;
  }
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_ARG,iVar5,(uint)((*(char *)(gen_frame + 0xb)) != -1));
  *(bool *)((int)this + 0x12a) = *(int *)((int)this + 4) != 4;
  if ((*(char *)(gen_frame + 0xb)) == -1) {
    uVar6 = F_00511520(this GEN_EDX_ARG,param_1,(*(int *)(gen_frame + 0x4)));
    *(uint *)((int)this + (uint)bVar7 * 4 + 0x10c) = uVar6;
    if (uVar6 == 0) {
      return 0xfffffff6;
    }
  }
  else {
    uVar6 = 0;
    if (*(char *)(iVar1 + 0xcc) != '\0') {
      (*(uint * PTR32 *)(gen_frame + 0x0)) = (uint *)((int)this + 0x10c);
      do {
        uVar4 = F_00511520(this GEN_EDX_ARG,param_1,uVar6);
        *(*(uint * PTR32 *)(gen_frame + 0x0)) = uVar4;
        if (uVar4 == 0) {
          return 0xfffffff6;
        }
        (*(uint * PTR32 *)(gen_frame + 0x0)) = (*(uint * PTR32 *)(gen_frame + 0x0)) + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(byte *)(iVar1 + 0xcc));
    }
  }
  if ((*(int *)((int)this + 4) == 4) || ((*(char *)(gen_frame + 0xb)) != -1)) {
    bVar7 = *(byte *)(iVar1 + 0xcc);
    uVar9 = 4;
    if (*(int *)((int)this + 4) == 4) {
      uVar9 = 0x50;
    }
    bVar8 = 0;
    (*(uint * PTR32 *)(gen_frame + 0x0)) = (uint *)((uint)(*(uint * PTR32 *)(gen_frame + 0x0)) & 0xffffff00);
    if (bVar7 != 0) {
      do {
        uVar6 = F_005117c0(this GEN_EDX_ARG,param_1,(*(uint * PTR32 *)(gen_frame + 0x0)),uVar9);
        *(uint *)((int)this + (uint)bVar8 * 4 + 0x118) = uVar6;
        if (uVar6 == 0) {
          return 0xfffffff6;
        }
        bVar8 = bVar8 + 1;
        (*(uint * PTR32 *)(gen_frame + 0x0)) = ((uint *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(uint * PTR32 *)(gen_frame + 0x0)), 1, 3),bVar8)));
      } while (bVar8 < bVar7);
    }
  }
  else {
    uVar6 = F_005117c0(this GEN_EDX_ARG,param_1,(*(int *)(gen_frame + 0x4)),4);
    *(uint *)((int)this + (uint)bVar7 * 4 + 0x118) = uVar6;
    if (uVar6 == 0) {
      return 0xfffffff6;
    }
  }
  return 0x20;
}

/* ref: Client::System::Resource::Handle::ModelResourceHandle::vf34 */
GEN_FRAME uint GEN_THISCALL F_00514930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x514930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_FWD);
  uVar6 = uVar4 & 0xff;
  uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1c))(this GEN_EDX_ARG);
  bVar3 = (byte)uVar4;
  if (((*param_1 == 0xb) && (1 < (uint)param_1[0x13])) &&
     (uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xa4))(this GEN_EDX_ARG), uVar4 == 2)) {
    ((byte *)(gen_frame + 0x8))[0xe] = bVar3;
    uVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 14));
    while (bVar3 < (byte)uVar5) {
      if (*(int *)(this + uVar6 * 4 + 0x10c) == 0) {
        uVar4 = F_00511520(this GEN_EDX_ARG,param_1,uVar2);
        *(uint *)(this + uVar6 * 4 + 0x10c) = uVar4;
        if (uVar4 == 0) {
          return 0xfffffff6;
        }
      }
      if ((this[0x12a] != (undefined1)0x0) && (*(int *)(this + uVar6 * 4 + 0x118) == 0)) {
        uVar4 = F_005117c0(this GEN_EDX_ARG,param_1,uVar2,4);
        *(uint *)(this + uVar6 * 4 + 0x118) = uVar4;
        if (uVar4 == 0) {
          return 0xfffffff6;
        }
      }
      ((byte *)(gen_frame + 0x8))[0xe] = (byte)uVar2;
      bVar3 = ((byte *)(gen_frame + 0x8))[0xe] + 1;
      uVar6 = (uint)bVar3;
      gen_piece_set(((byte *)(gen_frame + 0x8)), 15, 3, (unsigned long long)(SUB43(uVar2,1)));
      ((byte *)(gen_frame + 0x8))[0xe] = bVar3;
      uVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 14));
    }
    uVar6 = 0x20;
  }
  else {
    while (bVar3 < (byte)uVar5) {
      iVar1 = *(int *)(this + 0xb8) + uVar6 * 0x3c;
      if (*(int *)(this + uVar6 * 4 + 0x10c) == 0) {
        uVar4 = F_005116a0(this GEN_EDX_ARG,param_1,*(undefined4 *)(iVar1 + 0x34),
                             *(undefined4 *)(iVar1 + 0x2c));
        *(uint *)(this + uVar6 * 4 + 0x10c) = uVar4;
        if (uVar4 == 0) {
          return 0xfffffff6;
        }
      }
      if ((this[0x12a] != (undefined1)0x0) && (*(int *)(this + uVar6 * 4 + 0x118) == 0)) {
        uVar4 = F_00511950(this GEN_EDX_ARG,param_1,*(undefined4 *)(iVar1 + 0x38),
                             *(undefined4 *)(iVar1 + 0x30),4);
        *(uint *)(this + uVar6 * 4 + 0x118) = uVar4;
        if (uVar4 == 0) {
          return 0xfffffff6;
        }
      }
      bVar3 = bVar3 + 1;
      uVar6 = (uint)bVar3;
    }
    uVar6 = 1;
  }
  if ((*param_1 == 0xb) && (1 < (uint)param_1[0x13])) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xa4))(this GEN_EDX_ARG);
  }
  return uVar6;
}

/* ref: FUN_00514ad0 */
GEN_FRAME byte GEN_THISCALL F_00514ad0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x514ad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  int * piVar5;
  
  uVar3 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xa8) + 4))) + 0x12 + *(int *)((int)this + 0xa8))));
  (*(uint *)(gen_frame + 0x28)) = uVar3;
  (*(uint *)(gen_frame + 0x34)) = 0;
  if (uVar3 == 0) {
    return 1;
  }
  do {
    uVar3 = (*(uint *)(gen_frame + 0x34));
    uVar1 = *((ushort *)GEN_TOP((*(int *)((int)this + 0xd0) + (*(uint *)(gen_frame + 0x34)) * 4)));
    iVar2 = *(int *)((int)this + 0xa8);
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 5;
    (*(undefined1 *)(gen_frame + 0x14)) = 0xff;
    (*(undefined4 *)(gen_frame + 0x18)) = 5000;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0x10100;
    (*(undefined2 *)(gen_frame + 0x20)) = 0;
    (*(undefined1 *)(gen_frame + 0x22)) = 0;
    (*(undefined * PTR32 *)(gen_frame + 0x24)) = this;
    piVar4 = (int *)F_00513e90(uVar1 + 8 + iVar2,&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x124) + uVar3 * 4))) = piVar4;
    (*(int * PTR32 *)(gen_frame + 0x30)) = piVar4;
    piVar5 = ((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x124) + uVar3 * 4))) + 0x8c)));
    iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar5), 0);
    if (7 < iVar2) {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x124) + uVar3 * 4)));
      if (iVar2 != 0) {
        F_0050c4f0(REFG(void * PTR32, 0x1375aec) GEN_EDX_ARG,iVar2,0,0);
      }
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x124) + uVar3 * 4))) = 0;
      return 0;
    }
    (*(int * PTR32 *)(gen_frame + 0x38)) = piVar4;
    if ((&(*(int * PTR32 *)(gen_frame + 0x38)) < *(int * PTR32 * PTR32 *)((int)this + 0x74)) && (*(int * PTR32 * PTR32 *)((int)this + 0x70) <= &(*(int * PTR32 *)(gen_frame + 0x38)))) {
      (*(int *)(gen_frame + 0x2c)) = (int)&(*(int * PTR32 *)(gen_frame + 0x38)) - (int)*(int * PTR32 * PTR32 *)((int)this + 0x70) >> 2;
      if (*(int *)((int)this + 0x74) == *(int *)((int)this + 0x78)) {
        F_005282b0((undefined *)((int)this + 0x70) GEN_EDX_ARG,1);
      }
      if (*(int *)((int)this + 0x74) != 0) {
        **(undefined4 * PTR32 *)((int)this + 0x74) =
             *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x70) + (*(int *)(gen_frame + 0x2c)) * 4)));
      }
    }
    else {
      if (*(int *)((int)this + 0x74) == *(int *)((int)this + 0x78)) {
        F_005282b0((undefined *)((int)this + 0x70) GEN_EDX_ARG,1);
      }
      if (*(undefined4 * PTR32 *)((int)this + 0x74) != (undefined4 *)0x0) {
        **(undefined4 * PTR32 *)((int)this + 0x74) = (*(int * PTR32 *)(gen_frame + 0x30));
      }
    }
    *(int *)((int)this + 0x74) = *(int *)((int)this + 0x74) + 4;
    ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x30)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG,(uint)(*(byte *)((int)this + 0x58) >> 3 & 1));
    uVar3 = (*(uint *)(gen_frame + 0x34)) + 1;
    (*(uint *)(gen_frame + 0x34)) = uVar3;
  } while (uVar3 < (*(uint *)(gen_frame + 0x28)));
  return 1;
}

/* ref: Client::System::Resource::Handle::ModelResourceHandle::vf39 */
GEN_FRAME uint GEN_THISCALL F_00514c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x514c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pMVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  
  uVar4 = param_1;
  if (param_1 == 1) {
    pMVar1 = this + 0x88;
    iVar2 = _InterlockedExchangeAdd((volatile long *)(((int *)pMVar1)), 0);
    if (iVar2 != 3) {
      if ((*(short *)(this + 4) != 4) && (bVar3 = F_00514ad0(this GEN_EDX_FWD), bVar3 == 0)) {
        return 0xfffffff6;
      }
      uVar4 = 1;
    }
  }
  return uVar4;
}

/* ref: FUN_00514c90 */
GEN_FRAME byte GEN_THISCALL F_00514c90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x514c90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  char cVar1;
  int iVar2;
  int * piVar3;
  char * pcVar4;
  
  (*(uint *)(gen_frame + 0x118)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c);
  F_00c472af(((char *)(gen_frame + 0x18)),0x100,"shader/shpk/%s",
             (uint)*(ushort *)((int)this + 0xb8) + *(int *)((int)this + 0xb0));
  pcVar4 = ((char *)(gen_frame + 0x18));
  cVar1 = ((char *)(gen_frame + 0x18))[0];
  while (cVar1 != '\0') {
    iVar2 = F_00c4ef4f((int)*pcVar4);
    *pcVar4 = (char)iVar2;
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  (*(undefined4 *)(gen_frame + 0xc)) = 5;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x7368706b;
  F_004ff470(&(*(int * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,((char *)(gen_frame + 0x18)),0,0);
  piVar3 = (int *)F_005139f0(REFG(void * PTR32, 0x1375aec) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x10)),&(*(int * PTR32 *)(gen_frame + 0x14)),((char *)(gen_frame + 0x18)),0,0,0);
  *(int * PTR32 *)((int)this + 0xa4) = piVar3;
  (*(int * PTR32 *)(gen_frame + 0x14)) = piVar3;
  F_005291e0((undefined *)((int)this + 0x70) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x14)));
  ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,(uint)(*(byte *)((int)this + 0x58) >> 3 & 1));
  F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00514da0 */
GEN_FRAME byte GEN_THISCALL F_00514da0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x514da0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint * this_00;
  int * piVar1;
  undefined4 * puVar2;
  byte bVar3;
  int * PTR32 * ppiVar4;
  int * PTR32 * ppiVar5;
  byte * pbVar6;
  int iVar7;
  uint uVar8;
  char * pcVar9;
  uint uVar10;
  byte * pbVar11;
  bool bVar12;
  
  (*(byte *)(gen_frame + 0x3b)) = 1;
  (*(uint *)(gen_frame + 0x30)) = 0;
  if (*(char *)((int)this + 0xba) != '\0') {
    do {
      pbVar11 = ((byte *)GEN_TOP(((uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0xa8) + 4 + (*(uint *)(gen_frame + 0x30)) * 8))) +
                        *(int *)((int)this + 0xb0))));
      pcVar9 = "dummy.tex";
      pbVar6 = pbVar11;
      do {
        bVar3 = *pbVar6;
        bVar12 = bVar3 < (byte)*pcVar9;
        if (bVar3 != *pcVar9) {
LAB_00514e00: ;
          iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
          goto LAB_00514e05;
        }
        if (bVar3 == 0) break;
        bVar3 = pbVar6[1];
        bVar12 = bVar3 < (byte)pcVar9[1];
        if (bVar3 != pcVar9[1]) goto LAB_00514e00;
        pbVar6 = pbVar6 + 2;
        pcVar9 = pcVar9 + 2;
      } while (bVar3 != 0);
      iVar7 = 0;
LAB_00514e05: ;
      if (iVar7 == 0) {
        (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)F_00513e90("common/graphics/texture/dummy.tex",0,0,0);
      }
      else {
        (*(undefined4 *)(gen_frame + 0x4)) = 0;
        (*(undefined4 *)(gen_frame + 0x8)) = 0;
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(undefined4 *)(gen_frame + 0xc)) = 0;
        (*(undefined4 *)(gen_frame + 0x14)) = 5;
        (*(undefined1 *)(gen_frame + 0x18)) = 0xff;
        (*(undefined4 *)(gen_frame + 0x1c)) = 5000;
        (*(undefined4 *)(gen_frame + 0x20)) = 0x10100;
        (*(undefined2 *)(gen_frame + 0x24)) = 0;
        (*(undefined1 *)(gen_frame + 0x26)) = 0;
        (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
        (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)F_00513e90(pbVar11,&(*(undefined4 *)(gen_frame + 0x4)),0,0);
      }
      piVar1 = (*(int * PTR32 *)(gen_frame + 0x34)) + 0x23;
      iVar7 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
      if (7 < iVar7) {
        (*(byte *)(gen_frame + 0x3b)) = 0;
      }
      this_00 = (uint *)((int)this + 0x70);
      *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xa8) + (*(uint *)(gen_frame + 0x30)) * 8))) = (*(int * PTR32 *)(gen_frame + 0x34));
      ppiVar4 = *(int * PTR32 * PTR32 *)((int)this + 0x74);
      (*(int * PTR32 *)(gen_frame + 0x2c)) = (*(int * PTR32 *)(gen_frame + 0x34));
      if ((&(*(int * PTR32 *)(gen_frame + 0x2c)) < ppiVar4) && (ppiVar5 = (int * PTR32 *)*this_00, ppiVar5 <= &(*(int * PTR32 *)(gen_frame + 0x2c)))) {
        if (ppiVar4 == *(int * PTR32 * PTR32 *)((int)this + 0x78)) {
          iVar7 = (int)ppiVar4 - (int)((int)(uintptr_t)ppiVar5) >> 2;
          if (iVar7 == -1) {
LAB_0051504d: ;
                    
            F_00c4579a("vector<T> too long");
          }
          uVar8 = iVar7 + 1;
          uVar10 = (int)*(int * PTR32 * PTR32 *)((int)this + 0x78) - (int)((int)(uintptr_t)ppiVar5) >> 2;
          if (uVar10 < uVar8) {
            if (-(uVar10 >> 1) - 1 < uVar10) {
              uVar10 = 0;
            }
            else {
              uVar10 = uVar10 + (uVar10 >> 1);
            }
            if (uVar10 < uVar8) {
              uVar10 = uVar8;
            }
            F_00527fb0((undefined *)((int)this + 0x70) GEN_EDX_ARG,uVar10);
          }
        }
        if (*(undefined4 * PTR32 *)((int)this + 0x74) != (undefined4 *)0x0) {
          **(undefined4 * PTR32 *)((int)this + 0x74) =
               *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x70) + ((int)&(*(int * PTR32 *)(gen_frame + 0x2c)) - (int)((int)(uintptr_t)ppiVar5) >> 2) * 4)));
        }
      }
      else {
        if (ppiVar4 == *(int * PTR32 * PTR32 *)((int)this + 0x78)) {
          iVar7 = (int)((int)ppiVar4 - *this_00) >> 2;
          if (iVar7 == -1) goto LAB_0051504d;
          uVar8 = iVar7 + 1;
          uVar10 = (int)((int)*(int * PTR32 * PTR32 *)((int)this + 0x78) - *this_00) >> 2;
          if (uVar10 < uVar8) {
            if (-(uVar10 >> 1) - 1 < uVar10) {
              uVar10 = 0;
            }
            else {
              uVar10 = uVar10 + (uVar10 >> 1);
            }
            if (uVar10 < uVar8) {
              uVar10 = uVar8;
            }
            F_00527fb0(this_00 GEN_EDX_ARG,uVar10);
          }
        }
        if (*(undefined4 * PTR32 *)((int)this + 0x74) != (undefined4 *)0x0) {
          **(undefined4 * PTR32 *)((int)this + 0x74) = (*(int * PTR32 *)(gen_frame + 0x34));
        }
      }
      *(int *)((int)this + 0x74) = *(int *)((int)this + 0x74) + 4;
      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x34)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG,(uint)(*(byte *)((int)this + 0x58) >> 3 & 1));
      uVar10 = (*(uint *)(gen_frame + 0x30)) + 1;
      (*(uint *)(gen_frame + 0x30)) = uVar10;
    } while (uVar10 < *(byte *)((int)this + 0xba));
  }
  if ((*(int *)((int)this + 0xa0) != 0) && (uVar10 = 0, *(char *)((int)this + 0xba) != '\0')) {
    do {
      if ((*((byte *)GEN_TOP((*(int *)((int)this + 0xa8) + 6 + uVar10 * 8))) & 0x1f) != 0x1f) {
        puVar2 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa8) + uVar10 * 8)));
        F_0061e550(*(undefined * PTR32 *)((int)this + 0xa0) GEN_EDX_ARG,*(ushort *)((int)puVar2 + 6) & 0x1f,*puVar2);
      }
      if ((*((ushort *)GEN_TOP((*(int *)((int)this + 0xa8) + 6 + uVar10 * 8))) & 0x3e0) != 0x3e0) {
        F_0061e550(*(undefined * PTR32 *)((int)this + 0xa0) GEN_EDX_ARG,
                     *((ushort *)GEN_TOP((*(int *)((int)this + 0xa8) + uVar10 * 8 + 6))) >> 5 & 0x1f,
                     *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa8) + uVar10 * 8))));
      }
      if ((*((ushort *)GEN_TOP((*(int *)((int)this + 0xa8) + 6 + uVar10 * 8))) & 0x7c00) != 0x7c00) {
        F_0061e550(*(undefined * PTR32 *)((int)this + 0xa0) GEN_EDX_ARG,
                     *((ushort *)GEN_TOP((*(int *)((int)this + 0xa8) + uVar10 * 8 + 6))) >> 10 & 0x1f,
                     *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa8) + uVar10 * 8))));
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(byte *)((int)this + 0xba));
  }
  return (*(byte *)(gen_frame + 0x3b));
}

/* ref: Client::System::Resource::Handle::MaterialResourceHandle::vf39 */
GEN_FRAME uint GEN_THISCALL F_00515060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x515060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pMVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  
  uVar4 = param_1;
  if (param_1 == 1) {
    pMVar1 = this + 0x88;
    iVar2 = _InterlockedExchangeAdd((volatile long *)(((int *)pMVar1)), 0);
    if (iVar2 != 3) {
      bVar3 = F_00514da0(this GEN_EDX_FWD);
      uVar4 = (-(uint)(bVar3 != 0) & 0xb) - 10;
    }
  }
  return uVar4;
}

/* ref: FUN_005150a0 */
GEN_FRAME uint GEN_THISCALL F_005150a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5150a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x160];
  int iVar1;
  undefined * pvVar2;
  byte bVar3;
  uint uVar4;
  ushort * puVar5;
  int * piVar6;
  uint * puVar7;
  uint * puVar8;
  int * piVar9;
  int iVar10;
  int iVar11;
  char * pcVar12;
  
  (*(uint *)(gen_frame + 0x158)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x15c);
  iVar10 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = this;
  ((int *)(gen_frame + 0xc))[0] = 0;
  ((int *)(gen_frame + 0xc))[1] = 0;
  ((int *)(gen_frame + 0xc))[2] = 0;
  bVar3 = F_00b4e350((int)this + 0xa0 GEN_EDX_FWD);
  pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x30));
  if (bVar3 != 0) {
    F_005292c0(param_1 GEN_EDX_ARG,((int *)(gen_frame + 0xc)));
    F_00c47745((*(uint *)(gen_frame + 0x158)) ^ (uint)(uint)(gen_frame + 0x15c) GEN_EDX_ARG);
    return (uint)param_1;
  }
  (*(undefined4 *)(gen_frame + 0x20)) = 4;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x706170;
  if ((param_2 & 0xffff0000) != 0x30000) {
    puVar5 = (ushort *)((int)this + 0xac);
    uVar4 = 0;
    if (*puVar5 != 0) {
      piVar6 = (int *)((int)this + 0xb4);
      puVar8 = (uint *)*piVar6;
      do {
        this = (*(undefined * PTR32 *)(gen_frame + 0x30));
        if ((*puVar8 == param_2) && (puVar8[1] == param_3)) {
          puVar8 = (uint *)*piVar6 + uVar4 * 4;
          (*(uint * PTR32 *)(gen_frame + 0x24)) = puVar8;
          if (puVar8 != (uint *)0x0) {
            if (puVar8[2] == 0) goto LAB_00515438;
            iVar11 = 0;
            (*(uint *)(gen_frame + 0x28)) = puVar8[2];
            goto LAB_005151a6;
          }
          break;
        }
        uVar4 = uVar4 + 1;
        puVar8 = puVar8 + 4;
      } while (uVar4 < *puVar5);
    }
    puVar8 = *(uint * PTR32 *)((int)this + 0xb0);
    if (*(ushort *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0xaa) != 0) {
      (*(uint *)(gen_frame + 0x28)) = (uint)*(ushort *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0xaa);
      do {
        if ((*puVar8 & 1) != 0) {
          uVar4 = param_2 >> 0x10;
          switch((unsigned int)(uintptr_t)(uVar4)) {
          case 0: ;
            bVar3 = (byte)(*puVar8 >> 2);
            break;
          case 1: ;
            bVar3 = (byte)(*puVar8 >> 4);
            break;
          case 2: ;
            bVar3 = (byte)(*puVar8 >> 3);
            break;
          case 3: ;
            goto switchD_005152f7_caseD_3;
          default: ;
            goto switchD_005152f7_default;
          }
          if ((bVar3 & 1) != 0) {
switchD_005152f7_caseD_3: ;
            if (uVar4 == 0) {
              pcVar12 = "chara/human/c%04d";
override_prt_515358_112095b4: ;
              F_00c472af(((undefined1 *)(gen_frame + 0x138)),0x20,pcVar12,param_2 & 0xffff);
            }
            else {
              if (uVar4 == 1) {
                pcVar12 = "chara/monster/m%04d";
                goto override_prt_515358_112095b4;
              }
              if (uVar4 == 2) {
                pcVar12 = "chara/demihuman/d%04d";
                goto override_prt_515358_112095b4;
              }
            }
            iVar10 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0xb8);
            piVar6 = ((int *)GEN_TOP((iVar10 + (uint)*(ushort *)((int)puVar8 + 6) * 0x1c)));
            if (0xf < (uint)piVar6[5]) {
              piVar6 = (int *)*piVar6;
            }
            piVar9 = (int *)(iVar10 + (uint)(ushort)puVar8[1] * 0x1c);
            if (0xf < *(uint *)(iVar10 + 0x14 + (uint)(ushort)puVar8[1] * 0x1c)) {
              piVar9 = (int *)*piVar9;
            }
            F_00c472af(((undefined1 *)(gen_frame + 0x34)),0x104,"%s/animation/a%04d/%s/%s.pap",((undefined1 *)(gen_frame + 0x138)),param_3,piVar9,piVar6
                      );
            F_004ff470(&(*(uint *)(gen_frame + 0x2c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x34)),0,0);
            puVar7 = (uint *)F_00513790(REFG(void * PTR32, 0x1375aec) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x1c)),&(*(uint *)(gen_frame + 0x2c)),((undefined1 *)(gen_frame + 0x34)),0,
                                          0,0,0);
            (*(uint * PTR32 *)(gen_frame + 0x24)) = puVar7;
            F_00529d70(((int *)(gen_frame + 0xc)) GEN_EDX_ARG,&(*(uint * PTR32 *)(gen_frame + 0x24)));
          }
        }
switchD_005152f7_default: ;
        puVar8 = puVar8 + 2;
        uVar4 = (*(uint *)(gen_frame + 0x28)) - 1;
        (*(uint *)(gen_frame + 0x28)) = uVar4;
        iVar10 = ((int *)(gen_frame + 0xc))[2];
      } while (uVar4 != 0);
    }
    goto LAB_00515438;
  }
  F_00c472af(((undefined1 *)(gen_frame + 0x34)),0x104,"chara/weapon/w%04d/animation/a%04d/wp_common/resident/weapon.pap",
             param_2 & 0xffff,param_3);
  F_004ff470(&(*(uint *)(gen_frame + 0x2c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x34)),0,0);
  uVar4 = F_00513790(REFG(void * PTR32, 0x1375aec) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x1c)),&(*(uint *)(gen_frame + 0x2c)),((undefined1 *)(gen_frame + 0x34)),0,0,0,0);
  (*(uint *)(gen_frame + 0x2c)) = uVar4;
  F_00529d70(((int *)(gen_frame + 0xc)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x2c)));
  F_005292c0(param_1 GEN_EDX_ARG,((int *)(gen_frame + 0xc)));
  if (((int *)(gen_frame + 0xc))[0] == 0) goto LAB_00515528;
  iVar10 = ((int *)(gen_frame + 0xc))[2] - ((int *)(gen_frame + 0xc))[0];
  goto LAB_0051551f;
LAB_005151a6: ;
  do {
    uVar4 = (uint)*(ushort *)((*(uint * PTR32 *)(gen_frame + 0x24))[3] + iVar11);
    iVar10 = *(int *)((int)pvVar2 + 0xb0);
    puVar5 = (ushort *)((*(uint * PTR32 *)(gen_frame + 0x24))[3] + iVar11);
    puVar8 = (uint *)(iVar10 + uVar4 * 8);
    if ((*(byte *)(iVar10 + uVar4 * 8) & 1) != 0) {
      switch((unsigned int)(uintptr_t)(param_2 >> 0x10)) {
      case 0: ;
        bVar3 = (byte)(*puVar8 >> 2);
        break;
      case 1: ;
        bVar3 = (byte)(*puVar8 >> 4);
        break;
      case 2: ;
        bVar3 = (byte)(*puVar8 >> 3);
        break;
      case 3: ;
        goto switchD_005151d1_caseD_3;
      default: ;
        goto switchD_005151d1_default;
      }
      if ((bVar3 & 1) != 0) {
switchD_005151d1_caseD_3: ;
        iVar1 = *(int *)((int)pvVar2 + 0xb8);
        F_005055d0(((undefined1 *)(gen_frame + 0x34)),0x104,*(undefined4 *)(puVar5 + 2),*(undefined4 *)(puVar5 + 4),
                     iVar1 + (short)puVar5[6] * 0x1c,
                     iVar1 + (uint)*(ushort *)(iVar10 + 6 + (uint)*puVar5 * 8) * 0x1c);
        F_004ff470(&(*(undefined * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x34)),0,0);
        uVar4 = F_00513790(REFG(void * PTR32, 0x1375aec) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x1c)),&(*(undefined * PTR32 *)(gen_frame + 0x30)),((undefined1 *)(gen_frame + 0x34)),0,0,0,0);
        (*(uint *)(gen_frame + 0x2c)) = uVar4;
        F_00529d70(((int *)(gen_frame + 0xc)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x2c)));
      }
    }
switchD_005151d1_default: ;
    iVar11 = iVar11 + 0x10;
    uVar4 = (*(uint *)(gen_frame + 0x28)) - 1;
    (*(uint *)(gen_frame + 0x28)) = uVar4;
    iVar10 = ((int *)(gen_frame + 0xc))[2];
  } while (uVar4 != 0);
LAB_00515438: ;
  F_005292c0(param_1 GEN_EDX_ARG,((int *)(gen_frame + 0xc)));
  if (((int *)(gen_frame + 0xc))[0] == 0) goto LAB_00515528;
  iVar10 = iVar10 - ((int *)(gen_frame + 0xc))[0];
LAB_0051551f: ;
  F_00429760(((int *)(gen_frame + 0xc))[0],(iVar10 >> 2) * 4,0xcb);
LAB_00515528: ;
  F_00c47745((*(uint *)(gen_frame + 0x158)) ^ (uint)(uint)(gen_frame + 0x15c) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: FUN_00515560 */
GEN_FRAME uint GEN_THISCALL F_00515560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x515560u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x160];
  int iVar1;
  undefined * pvVar2;
  byte bVar3;
  uint uVar4;
  ushort * puVar5;
  int * piVar6;
  uint * puVar7;
  uint * puVar8;
  uint uVar9;
  int * piVar10;
  int iVar11;
  int iVar12;
  char * pcVar13;
  
  (*(uint *)(gen_frame + 0x158)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x15c);
  iVar11 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = this;
  ((int *)(gen_frame + 0xc))[0] = 0;
  ((int *)(gen_frame + 0xc))[1] = 0;
  ((int *)(gen_frame + 0xc))[2] = 0;
  bVar3 = F_00b4e350((int)this + 0xa0 GEN_EDX_FWD);
  pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x30));
  if (bVar3 != 0) {
    F_005292c0(param_1 GEN_EDX_ARG,((int *)(gen_frame + 0xc)));
    F_00c47745((*(uint *)(gen_frame + 0x158)) ^ (uint)(uint)(gen_frame + 0x15c) GEN_EDX_ARG);
    return (uint)param_1;
  }
  (*(undefined4 *)(gen_frame + 0x20)) = 4;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x706170;
  if ((param_2 & 0xffff0000) != 0x30000) {
    puVar5 = (ushort *)((int)this + 0xac);
    uVar4 = 0;
    if (*puVar5 != 0) {
      piVar6 = (int *)((int)this + 0xb4);
      puVar8 = (uint *)*piVar6;
      do {
        this = (*(undefined * PTR32 *)(gen_frame + 0x30));
        if ((*puVar8 == param_2) && (puVar8[1] == param_3)) {
          puVar8 = (uint *)*piVar6 + uVar4 * 4;
          (*(uint * PTR32 *)(gen_frame + 0x24)) = puVar8;
          if (puVar8 != (uint *)0x0) {
            if (puVar8[2] == 0) goto LAB_005158fa;
            iVar12 = 0;
            (*(uint *)(gen_frame + 0x28)) = puVar8[2];
            goto LAB_00515666;
          }
          break;
        }
        uVar4 = uVar4 + 1;
        puVar8 = puVar8 + 4;
      } while (uVar4 < *puVar5);
    }
    puVar8 = *(uint * PTR32 *)((int)this + 0xb0);
    if (*(ushort *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0xaa) != 0) {
      (*(uint *)(gen_frame + 0x28)) = (uint)*(ushort *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0xaa);
      do {
        uVar4 = *puVar8;
        if ((uVar4 >> 5 & 1) != 0) {
          uVar9 = param_2 >> 0x10;
          switch((unsigned int)(uintptr_t)(uVar9)) {
          case 0: ;
            bVar3 = (byte)(uVar4 >> 2);
            break;
          case 1: ;
            bVar3 = (byte)(uVar4 >> 4);
            break;
          case 2: ;
            bVar3 = (byte)(uVar4 >> 3);
            break;
          case 3: ;
            goto switchD_005157be_caseD_3;
          default: ;
            goto switchD_005157be_default;
          }
          if ((bVar3 & 1) != 0) {
switchD_005157be_caseD_3: ;
            if (uVar9 == 0) {
              pcVar13 = "chara/human/c%04d";
override_prt_51581a_112095b4: ;
              F_00c472af(((undefined1 *)(gen_frame + 0x138)),0x20,pcVar13,param_2 & 0xffff);
            }
            else {
              if (uVar9 == 1) {
                pcVar13 = "chara/monster/m%04d";
                goto override_prt_51581a_112095b4;
              }
              if (uVar9 == 2) {
                pcVar13 = "chara/demihuman/d%04d";
                goto override_prt_51581a_112095b4;
              }
            }
            iVar11 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0xb8);
            piVar6 = ((int *)GEN_TOP((iVar11 + (uint)*(ushort *)((int)puVar8 + 6) * 0x1c)));
            if (0xf < (uint)piVar6[5]) {
              piVar6 = (int *)*piVar6;
            }
            piVar10 = (int *)(iVar11 + (uint)(ushort)puVar8[1] * 0x1c);
            if (0xf < *(uint *)(iVar11 + 0x14 + (uint)(ushort)puVar8[1] * 0x1c)) {
              piVar10 = (int *)*piVar10;
            }
            F_00c472af(((undefined1 *)(gen_frame + 0x34)),0x104,"%s/animation/a%04d/%s/%s.pap",((undefined1 *)(gen_frame + 0x138)),param_3,piVar10,
                       piVar6);
            F_004ff470(&(*(uint *)(gen_frame + 0x2c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x34)),0,0);
            puVar7 = (uint *)F_00513790(REFG(void * PTR32, 0x1375aec) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x1c)),&(*(uint *)(gen_frame + 0x2c)),((undefined1 *)(gen_frame + 0x34)),0,
                                          0,0,0);
            (*(uint * PTR32 *)(gen_frame + 0x24)) = puVar7;
            F_00529d70(((int *)(gen_frame + 0xc)) GEN_EDX_ARG,&(*(uint * PTR32 *)(gen_frame + 0x24)));
          }
        }
switchD_005157be_default: ;
        puVar8 = puVar8 + 2;
        uVar4 = (*(uint *)(gen_frame + 0x28)) - 1;
        (*(uint *)(gen_frame + 0x28)) = uVar4;
        iVar11 = ((int *)(gen_frame + 0xc))[2];
      } while (uVar4 != 0);
    }
    goto LAB_005158fa;
  }
  F_00c472af(((undefined1 *)(gen_frame + 0x34)),0x104,"chara/weapon/w%04d/animation/a%04d/wp_common/resident/weapon.pap",
             param_2 & 0xffff,param_3);
  F_004ff470(&(*(uint *)(gen_frame + 0x2c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x34)),0,0);
  uVar4 = F_00513790(REFG(void * PTR32, 0x1375aec) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x1c)),&(*(uint *)(gen_frame + 0x2c)),((undefined1 *)(gen_frame + 0x34)),0,0,0,0);
  (*(uint *)(gen_frame + 0x2c)) = uVar4;
  F_00529d70(((int *)(gen_frame + 0xc)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x2c)));
  F_005292c0(param_1 GEN_EDX_ARG,((int *)(gen_frame + 0xc)));
  if (((int *)(gen_frame + 0xc))[0] == 0) goto LAB_005159ea;
  iVar11 = ((int *)(gen_frame + 0xc))[2] - ((int *)(gen_frame + 0xc))[0];
  goto LAB_005159e1;
LAB_00515666: ;
  do {
    uVar4 = (uint)*(ushort *)((*(uint * PTR32 *)(gen_frame + 0x24))[3] + iVar12);
    iVar11 = *(int *)((int)pvVar2 + 0xb0);
    puVar5 = (ushort *)((*(uint * PTR32 *)(gen_frame + 0x24))[3] + iVar12);
    puVar8 = (uint *)(iVar11 + uVar4 * 8);
    if ((*(uint *)(iVar11 + uVar4 * 8) >> 5 & 1) != 0) {
      switch((unsigned int)(uintptr_t)(param_2 >> 0x10)) {
      case 0: ;
        bVar3 = (byte)(*puVar8 >> 2);
        break;
      case 1: ;
        bVar3 = (byte)(*puVar8 >> 4);
        break;
      case 2: ;
        bVar3 = (byte)(*puVar8 >> 3);
        break;
      case 3: ;
        goto switchD_00515696_caseD_3;
      default: ;
        goto switchD_00515696_default;
      }
      if ((bVar3 & 1) != 0) {
switchD_00515696_caseD_3: ;
        iVar1 = *(int *)((int)pvVar2 + 0xb8);
        F_005055d0(((undefined1 *)(gen_frame + 0x34)),0x104,*(undefined4 *)(puVar5 + 2),*(undefined4 *)(puVar5 + 4),
                     iVar1 + (short)puVar5[6] * 0x1c,
                     iVar1 + (uint)*(ushort *)(iVar11 + 6 + (uint)*puVar5 * 8) * 0x1c);
        F_004ff470(&(*(undefined * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x34)),0,0);
        uVar4 = F_00513790(REFG(void * PTR32, 0x1375aec) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x1c)),&(*(undefined * PTR32 *)(gen_frame + 0x30)),((undefined1 *)(gen_frame + 0x34)),0,0,0,0);
        (*(uint *)(gen_frame + 0x2c)) = uVar4;
        F_00529d70(((int *)(gen_frame + 0xc)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x2c)));
      }
    }
switchD_00515696_default: ;
    iVar12 = iVar12 + 0x10;
    uVar4 = (*(uint *)(gen_frame + 0x28)) - 1;
    (*(uint *)(gen_frame + 0x28)) = uVar4;
    iVar11 = ((int *)(gen_frame + 0xc))[2];
  } while (uVar4 != 0);
LAB_005158fa: ;
  F_005292c0(param_1 GEN_EDX_ARG,((int *)(gen_frame + 0xc)));
  if (((int *)(gen_frame + 0xc))[0] == 0) goto LAB_005159ea;
  iVar11 = iVar11 - ((int *)(gen_frame + 0xc))[0];
LAB_005159e1: ;
  F_00429760(((int *)(gen_frame + 0xc))[0],(iVar11 >> 2) * 4,0xcb);
LAB_005159ea: ;
  F_00c47745((*(uint *)(gen_frame + 0x158)) ^ (uint)(uint)(gen_frame + 0x15c) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: FUN_00515a20 */
GEN_FRAME uint GEN_THISCALL F_00515a20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x515a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[8];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x1c0];
  char cVar1;
  byte * PTR32 * PTR32 * PTR32 * ppppbVar2;
  uint uVar3;
  char * pcVar4;
  uint uVar5;
  int iVar6;
  int * piVar7;
  uint uVar8;
  byte * PTR32 * PTR32 * PTR32 * PTR32 * pppppbVar9;
  byte * pbVar10;
  undefined4 * puVar11;
  uint * puVar12;
  undefined4 * puVar13;
  
  ppppbVar2 = ((byte * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x58))[0];
  uVar3 = ((uint *)(gen_frame + 0x3c))[0];
  (*(uint *)(gen_frame + 0x1b8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1bc);
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (*(undefined4 * PTR32 *)&gen_args[6]);
  (*(undefined4 *)(gen_frame + 0x8)) = 0x706170;
  (*(uint *)(gen_frame + 0x6c)) = 0xf;
  (*(uint *)(gen_frame + 0x68)) = 0;
  (*(undefined1 *)((char *)&((byte * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x58))[0] + 0)) = 0;
  ((byte * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x58))[0] = (byte * PTR32 * PTR32 * PTR32 *)((uint)ppppbVar2 & 0xffffff00);
  (*(uint *)(gen_frame + 0x50)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x3c))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x3c))[0] = uVar3 & 0xffffff00;
  F_004e54d0(((uint *)(gen_frame + 0x3c)) GEN_EDX_FWD,(*(undefined4 * PTR32 *)&gen_args[6]),0,0xffffffff);
  uVar3 = F_0051df70(((uint *)(gen_frame + 0x3c)) GEN_EDX_ARG,&REFG(undefined, 0x1098d00),0,4);
  if (uVar3 == 0xffffffff) {
    F_004e5a40(((uint *)(gen_frame + 0x3c)) GEN_EDX_ARG,&REFG(undefined, 0x1098d08),4);
  }
  uVar3 = ((uint *)(gen_frame + 0x19c))[0];
  if ((*(int *)&gen_args[5]) == 0) {
    (*(uint *)(gen_frame + 0x1b0)) = 0xf;
    (*(undefined4 *)(gen_frame + 0x1ac)) = 0;
    (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x19c))[0] + 0)) = 0;
    ((uint *)(gen_frame + 0x19c))[0] = uVar3 & 0xffffff00;
    F_004e5c20(((uint *)(gen_frame + 0x19c)) GEN_EDX_ARG,"bt_common",9);
    F_004e54d0(((byte * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x58)) GEN_EDX_ARG,((uint *)(gen_frame + 0x19c)),0,0xffffffff);
    uVar3 = ((uint *)(gen_frame + 0x19c))[0];
    uVar5 = (*(uint *)(gen_frame + 0x1b0));
joined_r0x00515bac: ;
    if (0xf < uVar5) {
      F_00429760(uVar3,uVar5 + 1,0x32);
    }
  }
  else if ((*(int *)&gen_args[5]) == 1) {
    F_00c472af(((char *)(gen_frame + 0x178)),0x20,"bt_%c%c%c_%c%c%c",(*(uint *)&gen_args[3]) >> 0x10 & 0xff,(*(uint *)&gen_args[3]) >> 8 & 0xff,
               (*(uint *)&gen_args[3]) & 0xff,(*(uint *)&gen_args[4]) >> 0x10 & 0xff,(*(uint *)&gen_args[4]) >> 8 & 0xff,(*(uint *)&gen_args[4]) & 0xff);
    uVar3 = ((uint *)(gen_frame + 0x20))[0];
    pcVar4 = ((char *)(gen_frame + 0x178));
    (*(uint *)(gen_frame + 0x34)) = 0xf;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x20))[0] + 0)) = 0;
    ((uint *)(gen_frame + 0x20))[0] = uVar3 & 0xffffff00;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    F_004e5c20(((uint *)(gen_frame + 0x20)) GEN_EDX_ARG,((char *)(gen_frame + 0x178)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x178)) + 1));
    F_004e54d0(((byte * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x58)) GEN_EDX_ARG,((uint *)(gen_frame + 0x20)),0,0xffffffff);
    uVar3 = ((uint *)(gen_frame + 0x20))[0];
    uVar5 = (*(uint *)(gen_frame + 0x34));
    goto joined_r0x00515bac;
  }
  uVar3 = 0;
  puVar11 = (*(undefined4 * PTR32 *)&gen_args[6]);
  if (*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xac))) != 0) {
    puVar12 = *((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb4)));
    do {
      if ((*puVar12 == (*(uint *)&gen_args[1])) && (puVar12[1] == (*(uint *)&gen_args[2]))) {
        puVar12 = *((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb4))) + uVar3 * 4;
        if (puVar12 != (uint *)0x0) {
          uVar3 = puVar12[2];
          (*(uint *)(gen_frame + 0x1c)) = uVar3;
          (*(uint *)(gen_frame + 0x4)) = 0;
          if (uVar3 != 0) {
            (*(int *)(gen_frame + 0xc)) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb0)));
            (*(int *)(gen_frame + 0x10)) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb8)));
            (*(ushort * PTR32 *)(gen_frame + 0x14)) = (ushort *)puVar12[3];
            goto LAB_00515c50;
          }
        }
        break;
      }
      uVar3 = uVar3 + 1;
      puVar12 = puVar12 + 4;
    } while (uVar3 < *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xac))));
  }
  goto LAB_00515bec;
LAB_00515c50: ;
  do {
    uVar5 = (uint)*(ushort *)((*(int *)(gen_frame + 0xc)) + 4 + (uint)*(*(ushort * PTR32 *)(gen_frame + 0x14)) * 8);
    uVar3 = *(uint *)((*(int *)(gen_frame + 0x10)) + 0x10 + uVar5 * 0x1c);
    pbVar10 = (byte *)((*(int *)(gen_frame + 0x10)) + uVar5 * 0x1c);
    if (0xf < *(uint *)(pbVar10 + 0x14)) {
      pbVar10 = *(byte * PTR32 *)pbVar10;
    }
    uVar5 = (*(uint *)(gen_frame + 0x68));
    if (uVar3 <= (*(uint *)(gen_frame + 0x68))) {
      uVar5 = uVar3;
    }
    pppppbVar9 = (byte * PTR32 * PTR32 * PTR32 * PTR32 *)((byte * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x58))[0];
    if ((*(uint *)(gen_frame + 0x6c)) < 0x10) {
      pppppbVar9 = ((byte * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x58));
    }
    for (; 3 < uVar5; uVar5 = uVar5 - 4) {
      if (*pppppbVar9 != *(byte * PTR32 * PTR32 * PTR32 * PTR32 *)pbVar10) goto LAB_00515ccb;
      pbVar10 = pbVar10 + 4;
      pppppbVar9 = pppppbVar9 + 1;
    }
    if (uVar5 == 0) {
LAB_00515d1a: ;
      uVar5 = 0;
    }
    else {
LAB_00515ccb: ;
      iVar6 = (uint)*(byte *)pppppbVar9 - (uint)*pbVar10;
      puVar11 = (*(undefined4 * PTR32 *)(gen_frame + 0x18));
      if (iVar6 == 0) {
        if (uVar5 < 2) goto LAB_00515d1a;
        iVar6 = (uint)*(byte *)((int)pppppbVar9 + 1) - (uint)pbVar10[1];
        if (iVar6 == 0) {
          if (uVar5 < 3) goto LAB_00515d1a;
          iVar6 = (uint)*(byte *)((int)pppppbVar9 + 2) - (uint)pbVar10[2];
          if (iVar6 == 0) {
            if (uVar5 < 4) goto LAB_00515d1a;
            iVar6 = (uint)*(byte *)((int)pppppbVar9 + 3) - (uint)pbVar10[3];
          }
        }
      }
      uVar5 = iVar6 >> 0x1f | 1;
    }
    if (((uVar5 == 0) && (uVar3 <= (*(uint *)(gen_frame + 0x68)))) && ((*(uint *)(gen_frame + 0x68)) == uVar3)) {
      uVar3 = puVar11[4];
      piVar7 = ((int *)GEN_TOP(((*(int *)(gen_frame + 0x10)) + (uint)*(ushort *)((*(int *)(gen_frame + 0xc)) + 6 + (uint)*(*(ushort * PTR32 *)(gen_frame + 0x14)) * 8) * 0x1c)));
      puVar13 = puVar11;
      if (0xf < (uint)puVar11[5]) {
        puVar13 = (undefined4 *)*puVar11;
      }
      uVar5 = piVar7[4];
      uVar8 = uVar5;
      if (uVar3 <= uVar5) {
        uVar8 = uVar3;
      }
      if (0xf < (uint)piVar7[5]) {
        piVar7 = (int *)*piVar7;
      }
      uVar8 = F_0040d320(piVar7,puVar13,uVar8);
      if (((uVar8 == 0) && (uVar3 <= uVar5)) && (uVar5 == uVar3)) {
        F_005055d0(((undefined1 *)(gen_frame + 0x74)),0x104,*(undefined4 *)((*(ushort * PTR32 *)(gen_frame + 0x14)) + 2),*(undefined4 *)((*(ushort * PTR32 *)(gen_frame + 0x14)) + 4),
                     (*(int *)(gen_frame + 0x10)) + (short)(*(ushort * PTR32 *)(gen_frame + 0x14))[6] * 0x1c,
                     (*(int *)(gen_frame + 0x10)) + (uint)*(ushort *)((*(int *)(gen_frame + 0xc)) + 6 + (uint)*(*(ushort * PTR32 *)(gen_frame + 0x14)) * 8) * 0x1c);
        F_004ff470(&(*(uint *)(gen_frame + 0x1c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x74)),0,0);
        uVar3 = F_00513790(REFG(void * PTR32, 0x1375aec) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[7]),&(*(undefined4 *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x1c)),((undefined1 *)(gen_frame + 0x74)),0,0,0,0);
        if (0xf < (*(uint *)(gen_frame + 0x50))) {
          F_00429760(((uint *)(gen_frame + 0x3c))[0],(*(uint *)(gen_frame + 0x50)) + 1,0x32);
        }
        uVar5 = ((uint *)(gen_frame + 0x3c))[0];
        (*(uint *)(gen_frame + 0x50)) = 0xf;
        (*(undefined4 *)(gen_frame + 0x4c)) = 0;
        (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x3c))[0] + 0)) = 0;
        ((uint *)(gen_frame + 0x3c))[0] = uVar5 & 0xffffff00;
        if ((*(uint *)(gen_frame + 0x6c)) < 0x10) goto LAB_00515fd4;
        goto LAB_00515fcc;
      }
    }
    (*(ushort * PTR32 *)(gen_frame + 0x14)) = (*(ushort * PTR32 *)(gen_frame + 0x14)) + 8;
    (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
  } while ((*(uint *)(gen_frame + 0x4)) < (*(uint *)(gen_frame + 0x1c)));
LAB_00515bec: ;
  switch((unsigned int)(uintptr_t)((*(uint *)&gen_args[1]) >> 0x10)) {
  case 0: ;
    pcVar4 = "chara/human/c%04d";
    break;
  case 1: ;
    pcVar4 = "chara/monster/m%04d";
    break;
  case 2: ;
    pcVar4 = "chara/demihuman/d%04d";
    break;
  case 3: ;
    pcVar4 = "chara/weapon/w%04d";
    break;
  default: ;
    goto switchD_00515c00_default;
  }
  F_00c472af(((char *)(gen_frame + 0x198)),0x20,pcVar4,(*(uint *)&gen_args[1]) & 0xffff);
switchD_00515c00_default: ;
  if (0xf < (uint)puVar11[5]) {
    puVar11 = (undefined4 *)*puVar11;
  }
  pppppbVar9 = (byte * PTR32 * PTR32 * PTR32 * PTR32 *)((byte * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x58))[0];
  if ((*(uint *)(gen_frame + 0x6c)) < 0x10) {
    pppppbVar9 = ((byte * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x58));
  }
  F_00c472af(((undefined1 *)(gen_frame + 0x74)),0x104,"%s/animation/a%04d/%s/%s.pap",((char *)(gen_frame + 0x198)),(*(uint *)&gen_args[2]),pppppbVar9,puVar11);
  F_004ff470(&(*(uint *)(gen_frame + 0x1c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x74)),0,0);
  uVar3 = F_00513790(REFG(void * PTR32, 0x1375aec) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[7]),&(*(undefined4 *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x1c)),((undefined1 *)(gen_frame + 0x74)),0,0,0,0);
  if (0xf < (*(uint *)(gen_frame + 0x50))) {
    F_00429760(((uint *)(gen_frame + 0x3c))[0],(*(uint *)(gen_frame + 0x50)) + 1,0x32);
  }
  uVar5 = ((uint *)(gen_frame + 0x3c))[0];
  (*(uint *)(gen_frame + 0x50)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x3c))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x3c))[0] = uVar5 & 0xffffff00;
  if (0xf < (*(uint *)(gen_frame + 0x6c))) {
LAB_00515fcc: ;
    (*(uint *)(gen_frame + 0x50)) = 0xf;
    (*(undefined4 *)(gen_frame + 0x4c)) = 0;
    F_00429760(((byte * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x58))[0],(*(uint *)(gen_frame + 0x6c)) + 1,0x32);
  }
LAB_00515fd4: ;
  F_00c47745((*(uint *)(gen_frame + 0x1b8)) ^ (uint)(uint)(gen_frame + 0x1bc) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00516000 */
GEN_FRAME uint GEN_STDCALL F_00516000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x516000u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = (*(undefined4 * PTR32 *)&gen_args[2])[5];
  (*(undefined4 *)(gen_frame + 0x8)) = 0x706170;
  puVar2 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if (0xf < uVar1) {
    puVar2 = ((undefined4 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2])));
  }
  F_004ff470(&(*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG,puVar2,0,0);
  uVar1 = F_00513790(REFG(void * PTR32, 0x1375aec) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[3]),&(*(undefined4 *)(gen_frame + 0x8)),&(*(undefined4 * PTR32 *)&gen_args[2]),puVar2,0,0,0,0);
  return uVar1;
}

/* ref: FUN_00516050 */
GEN_FRAME uint GEN_THISCALL F_00516050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x516050u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  byte * param_4 = (byte *)(uintptr_t)gen_a4;
  int * param_5 = (int *)(uintptr_t)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x160];
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint * puVar4;
  uint * puVar5;
  uint uVar6;
  byte * pbVar7;
  int iVar8;
  ushort * puVar9;
  int * piVar10;
  uint uVar11;
  uint uVar12;
  byte * pbVar13;
  uint * puVar14;
  int * piVar15;
  bool bVar16;
  char * pcVar17;
  
  (*(uint *)(gen_frame + 0x158)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x15c);
  (*(uint * PTR32 *)(gen_frame + 0x10)) = param_1;
  uVar6 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = this;
  (*(int * PTR32 *)(gen_frame + 0x24)) = param_5;
  (*(uint * PTR32 *)(gen_frame + 0x1c)) = (uint *)0x0;
  if (*(ushort *)((int)this + 0xac) != 0) {
    puVar14 = *(uint * PTR32 *)((int)this + 0xb4);
    do {
      if ((*puVar14 == param_2) && (puVar14[1] == param_3)) {
        (*(uint * PTR32 *)(gen_frame + 0x1c)) = *(uint * PTR32 *)((int)this + 0xb4) + uVar6 * 4;
        break;
      }
      uVar6 = uVar6 + 1;
      puVar14 = puVar14 + 4;
    } while (uVar6 < *(ushort *)((int)this + 0xac));
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 4;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x706170;
  (*(uint *)(gen_frame + 0x20)) = 0;
  if ((*(uint * PTR32 *)(gen_frame + 0x1c)) == (uint *)0x0) {
    uVar2 = *(ushort *)((int)this + 0xaa);
    iVar8 = *(int *)((int)this + 0xb0);
    (*(int *)(gen_frame + 0x30)) = iVar8;
    (*(uint *)(gen_frame + 0x18)) = (uint)uVar2;
    piVar15 = param_5;
    if (uVar2 != 0) {
      do {
        (*(int *)(gen_frame + 0x30)) = iVar8;
        uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar15 + 8))(piVar15 GEN_EDX_FWD,iVar8);
        if ((char)uVar6 != '\0') {
          uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar15 + 4))(piVar15 GEN_EDX_ARG);
          if ((char)uVar6 != '\0') {
            pbVar13 = ((byte *)GEN_TOP((*(int *)((int)this + 0xb8) + (uint)*(ushort *)(iVar8 + 4) * 0x1c)));
            pbVar7 = param_4;
            if (0xf < *((uint *)GEN_TOP((*(int *)((int)this + 0xb8) + 0x14 +
                               (uint)*(ushort *)(iVar8 + 4) * 0x1c)))) {
              pbVar13 = *(byte * PTR32 *)pbVar13;
            }
            do {
              bVar1 = *pbVar7;
              bVar16 = bVar1 < *pbVar13;
              if (bVar1 != *pbVar13) {
LAB_00516450: ;
                iVar8 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                goto LAB_00516455;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar7[1];
              bVar16 = bVar1 < pbVar13[1];
              if (bVar1 != pbVar13[1]) goto LAB_00516450;
              pbVar7 = pbVar7 + 2;
              pbVar13 = pbVar13 + 2;
            } while (bVar1 != 0);
            iVar8 = 0;
LAB_00516455: ;
            if (iVar8 != 0) goto LAB_00516637;
          }
          piVar15 = ((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0xb8) +
                           (uint)*(ushort *)((*(int *)(gen_frame + 0x30)) + 6) * 0x1c)));
          piVar10 = ((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0xb8) +
                           (uint)*(ushort *)((*(int *)(gen_frame + 0x30)) + 4) * 0x1c)));
          switch((unsigned int)(uintptr_t)(param_2 >> 0x10)) {
          case 0: ;
            pcVar17 = "chara/human/c%04d";
            break;
          case 1: ;
            pcVar17 = "chara/monster/m%04d";
            break;
          case 2: ;
            pcVar17 = "chara/demihuman/d%04d";
            break;
          case 3: ;
            pcVar17 = "chara/weapon/w%04d";
            break;
          default: ;
            goto switchD_0051649f_default;
          }
          F_00c472af(((char *)(gen_frame + 0x138)),0x20,pcVar17,param_2 & 0xffff);
switchD_0051649f_default: ;
          if (0xf < (uint)piVar15[5]) {
            piVar15 = (int *)*piVar15;
          }
          if (0xf < (uint)piVar10[5]) {
            piVar10 = (int *)*piVar10;
          }
          F_00c472af(((undefined1 *)(gen_frame + 0x34)),0x104,"%s/animation/a%04d/%s/%s.pap",((char *)(gen_frame + 0x138)),param_3,piVar10,piVar15
                    );
          F_004ff470(&(*(uint *)(gen_frame + 0x14)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x34)),0,0);
          uVar6 = F_00513790(REFG(void * PTR32, 0x1375aec) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0xc)),&(*(uint *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x34)),0,0,0,0);
          puVar5 = (*(uint * PTR32 *)(gen_frame + 0x10));
          puVar14 = (uint *)(*(uint * PTR32 *)(gen_frame + 0x10))[1];
          (*(uint *)(gen_frame + 0x28)) = uVar6;
          if ((&(*(uint *)(gen_frame + 0x28)) < puVar14) && (puVar4 = (uint *)*(*(uint * PTR32 *)(gen_frame + 0x10)), puVar4 <= &(*(uint *)(gen_frame + 0x28)))) {
            if (puVar14 == (uint *)(*(uint * PTR32 *)(gen_frame + 0x10))[2]) {
              iVar8 = (int)puVar14 - (int)((int)(uintptr_t)puVar4) >> 2;
              if (iVar8 == -1) goto LAB_005163bb;
              uVar11 = iVar8 + 1;
              uVar6 = (int)(*(uint * PTR32 *)(gen_frame + 0x10))[2] - (int)((int)(uintptr_t)puVar4) >> 2;
              if (uVar6 < uVar11) {
                if (-(uVar6 >> 1) - 1 < uVar6) {
                  uVar6 = 0;
                }
                else {
                  uVar6 = uVar6 + (uVar6 >> 1);
                }
                if (uVar6 < uVar11) {
                  uVar6 = uVar11;
                }
                F_005286b0((*(uint * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,uVar6);
              }
            }
            if ((undefined4 *)puVar5[1] != (undefined4 *)0x0) {
              *(undefined4 *)puVar5[1] =
                   *((undefined4 *)GEN_TOP((*puVar5 + ((int)&(*(uint *)(gen_frame + 0x28)) - (int)((int)(uintptr_t)puVar4) >> 2) * 4)));
            }
          }
          else {
            if (puVar14 == (uint *)(*(uint * PTR32 *)(gen_frame + 0x10))[2]) {
              iVar8 = (int)((int)puVar14 - *(*(uint * PTR32 *)(gen_frame + 0x10))) >> 2;
              if (iVar8 == -1) goto LAB_005163bb;
              uVar12 = iVar8 + 1;
              uVar11 = (int)((int)(*(uint * PTR32 *)(gen_frame + 0x10))[2] - *(*(uint * PTR32 *)(gen_frame + 0x10))) >> 2;
              if (uVar11 < uVar12) {
                if (-(uVar11 >> 1) - 1 < uVar11) {
                  uVar11 = 0;
                }
                else {
                  uVar11 = uVar11 + (uVar11 >> 1);
                }
                if (uVar11 < uVar12) {
                  uVar11 = uVar12;
                }
                F_005286b0((*(uint * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,uVar11);
              }
            }
            if ((uint *)puVar5[1] != (uint *)0x0) {
              *(uint *)puVar5[1] = uVar6;
            }
          }
          puVar5[1] = puVar5[1] + 4;
          piVar15 = (*(int * PTR32 *)(gen_frame + 0x24));
          this = (*(undefined * PTR32 *)(gen_frame + 0x2c));
        }
LAB_00516637: ;
        uVar6 = (*(uint *)(gen_frame + 0x20)) + 1;
        iVar8 = (*(int *)(gen_frame + 0x30)) + 8;
        (*(uint *)(gen_frame + 0x20)) = uVar6;
        (*(int *)(gen_frame + 0x30)) = iVar8;
      } while (uVar6 < (*(uint *)(gen_frame + 0x18)));
    }
  }
  else {
    uVar6 = (*(uint * PTR32 *)(gen_frame + 0x1c))[2];
    (*(uint *)(gen_frame + 0x14)) = uVar6;
    if (uVar6 != 0) {
      (*(int *)(gen_frame + 0x30)) = 0;
      piVar15 = param_5;
      do {
        iVar8 = (uint)*(ushort *)((*(int *)(gen_frame + 0x30)) + (*(uint * PTR32 *)(gen_frame + 0x1c))[3]) * 8;
        uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar15 + 8))(piVar15 GEN_EDX_ARG,*(int *)((int)this + 0xb0) + iVar8);
        if ((char)uVar6 != '\0') {
          uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar15 + 4))(piVar15 GEN_EDX_ARG);
          if ((char)uVar6 != '\0') {
            uVar6 = (uint)*((ushort *)GEN_TOP((iVar8 + 4 + *(int *)((int)this + 0xb0))));
            pbVar13 = ((byte *)GEN_TOP((*(int *)((int)this + 0xb8) + uVar6 * 0x1c)));
            pbVar7 = param_4;
            if (0xf < *((uint *)GEN_TOP((*(int *)((int)this + 0xb8) + 0x14 + uVar6 * 0x1c)))) {
              pbVar13 = *(byte * PTR32 *)pbVar13;
            }
            do {
              bVar1 = *pbVar7;
              bVar16 = bVar1 < *pbVar13;
              if (bVar1 != *pbVar13) {
LAB_005161a0: ;
                iVar8 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
                goto LAB_005161a5;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar7[1];
              bVar16 = bVar1 < pbVar13[1];
              if (bVar1 != pbVar13[1]) goto LAB_005161a0;
              pbVar7 = pbVar7 + 2;
              pbVar13 = pbVar13 + 2;
            } while (bVar1 != 0);
            iVar8 = 0;
LAB_005161a5: ;
            if (iVar8 != 0) goto LAB_00516396;
          }
          puVar9 = (ushort *)((*(uint * PTR32 *)(gen_frame + 0x1c))[3] + (*(int *)(gen_frame + 0x30)));
          uVar3 = *(undefined4 *)(puVar9 + 4);
          piVar15 = ((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0xb8) +
                           (uint)*((ushort *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0xb0) + 6 + (uint)*puVar9 * 8))) * 0x1c)));
          piVar10 = ((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0xb8) + (short)puVar9[6] * 0x1c)));
          switch((unsigned int)(uintptr_t)(*(uint *)(puVar9 + 2) >> 0x10)) {
          case 0: ;
            pcVar17 = "chara/human/c%04d";
            break;
          case 1: ;
            pcVar17 = "chara/monster/m%04d";
            break;
          case 2: ;
            pcVar17 = "chara/demihuman/d%04d";
            break;
          case 3: ;
            pcVar17 = "chara/weapon/w%04d";
            break;
          default: ;
            goto switchD_00516202_default;
          }
          F_00c472af(((char *)(gen_frame + 0x138)),0x20,pcVar17,*(uint *)(puVar9 + 2) & 0xffff);
switchD_00516202_default: ;
          if (0xf < (uint)piVar15[5]) {
            piVar15 = (int *)*piVar15;
          }
          if (0xf < (uint)piVar10[5]) {
            piVar10 = (int *)*piVar10;
          }
          F_00c472af(((undefined1 *)(gen_frame + 0x34)),0x104,"%s/animation/a%04d/%s/%s.pap",((char *)(gen_frame + 0x138)),uVar3,piVar10,piVar15);
          F_004ff470(&(*(uint *)(gen_frame + 0x18)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x34)),0,0);
          uVar6 = F_00513790(REFG(void * PTR32, 0x1375aec) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0xc)),&(*(uint *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x34)),0,0,0,0);
          puVar5 = (*(uint * PTR32 *)(gen_frame + 0x10));
          puVar14 = (uint *)(*(uint * PTR32 *)(gen_frame + 0x10))[1];
          (*(uint *)(gen_frame + 0x28)) = uVar6;
          if ((&(*(uint *)(gen_frame + 0x28)) < puVar14) && (puVar4 = (uint *)*(*(uint * PTR32 *)(gen_frame + 0x10)), puVar4 <= &(*(uint *)(gen_frame + 0x28)))) {
            if (puVar14 == (uint *)(*(uint * PTR32 *)(gen_frame + 0x10))[2]) {
              iVar8 = (int)puVar14 - (int)((int)(uintptr_t)puVar4) >> 2;
              if (iVar8 == -1) goto LAB_005163bb;
              uVar11 = iVar8 + 1;
              uVar6 = (int)(*(uint * PTR32 *)(gen_frame + 0x10))[2] - (int)((int)(uintptr_t)puVar4) >> 2;
              if (uVar6 < uVar11) {
                if (-(uVar6 >> 1) - 1 < uVar6) {
                  uVar6 = 0;
                }
                else {
                  uVar6 = uVar6 + (uVar6 >> 1);
                }
                if (uVar6 < uVar11) {
                  uVar6 = uVar11;
                }
                F_005286b0((*(uint * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,uVar6);
              }
            }
            if ((undefined4 *)puVar5[1] != (undefined4 *)0x0) {
              *(undefined4 *)puVar5[1] =
                   *((undefined4 *)GEN_TOP((*puVar5 + ((int)&(*(uint *)(gen_frame + 0x28)) - (int)((int)(uintptr_t)puVar4) >> 2) * 4)));
            }
          }
          else {
            if (puVar14 == (uint *)(*(uint * PTR32 *)(gen_frame + 0x10))[2]) {
              iVar8 = (int)((int)puVar14 - *(*(uint * PTR32 *)(gen_frame + 0x10))) >> 2;
              if (iVar8 == -1) {
LAB_005163bb: ;
                    
                F_00c4579a("vector<T> too long");
              }
              uVar12 = iVar8 + 1;
              uVar11 = (int)((int)(*(uint * PTR32 *)(gen_frame + 0x10))[2] - *(*(uint * PTR32 *)(gen_frame + 0x10))) >> 2;
              if (uVar11 < uVar12) {
                if (-(uVar11 >> 1) - 1 < uVar11) {
                  uVar11 = 0;
                }
                else {
                  uVar11 = uVar11 + (uVar11 >> 1);
                }
                if (uVar11 < uVar12) {
                  uVar11 = uVar12;
                }
                F_005286b0((*(uint * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,uVar11);
              }
            }
            if ((uint *)puVar5[1] != (uint *)0x0) {
              *(uint *)puVar5[1] = uVar6;
            }
          }
          puVar5[1] = puVar5[1] + 4;
          piVar15 = (*(int * PTR32 *)(gen_frame + 0x24));
          this = (*(undefined * PTR32 *)(gen_frame + 0x2c));
        }
LAB_00516396: ;
        (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x30)) + 0x10;
        uVar6 = (*(uint *)(gen_frame + 0x20)) + 1;
        (*(uint *)(gen_frame + 0x20)) = uVar6;
      } while (uVar6 < (*(uint *)(gen_frame + 0x14)));
    }
  }
  uVar6 = (*(uint * PTR32 *)(gen_frame + 0x10))[1];
  uVar11 = *(*(uint * PTR32 *)(gen_frame + 0x10));
  F_00c47745((*(uint *)(gen_frame + 0x158)) ^ (uint)(uint)(gen_frame + 0x15c) GEN_EDX_ARG);
  return (int)(uVar6 - uVar11) >> 2;
}

/* ref: Client::System::Resource::Handle::SoundResourceHandle::vf32 */
GEN_FRAME uint GEN_THISCALL F_005166a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5166a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  if ((*param_1 == 0xb) && (1 < (uint)param_1[0x13])) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xa4))(this GEN_EDX_FWD);
    if (uVar2 == 2) {
      if ((*(int *)(this + 0x14) == 0) && (*(int *)(this + 0x18) == 0)) {
        uVar2 = F_00513250(this GEN_EDX_ARG,param_1);
        return uVar2;
      }
      uVar2 = F_00513490(this GEN_EDX_ARG,param_1);
      return uVar2;
    }
  }
  uVar1 = *(undefined4 *)(this + 0x1c);
  uVar2 = F_00513110(this GEN_EDX_ARG,uVar1);
  if (uVar2 == 0) {
    return 0xfffffff6;
  }
  uVar2 = F_00504190(param_1,uVar2,uVar1,0,param_1[4],param_1[5],param_2);
  return uVar2;
}

/* ref: FUN_00516730 */
GEN_NOFRAME unsigned int F_00516730(void)
{
  GEN_ENTER(0x516730u, 0u, 0u, 0u, 0u);
  if (REFG(void * PTR32, 0x1375aec) != (undefined *)0x0) {
    F_00513710(REFG(void * PTR32, 0x1375aec) GEN_EDX_ARG);
    return;
  }
  return;
}

/* ref: FUN_00516740 */
GEN_FRAME unsigned int GEN_THISCALL F_00516740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x516740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if ((*(char *)(REFG(int, 0x1375aec) + 0x4e) != '\0') && (*(char *)(REFG(int, 0x1375aec) + 0x4f) != '\0')) {
    F_0050fb20(this GEN_EDX_FWD);
    F_00514030(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,param_1,(int)this + 0xdf4);
  }
  return;
}

/* ref: Client::System::Resource::Handle::ModelResourceHandle::vf32 */
GEN_FRAME uint GEN_THISCALL F_00516780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x516780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if ((*param_1 == 0xb) && (1 < (uint)param_1[0x13])) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xa4))(this GEN_EDX_FWD);
    if (uVar1 == 2) {
      uVar1 = F_00514650(this GEN_EDX_ARG,param_1,param_2);
      return uVar1;
    }
  }
  uVar1 = F_00514370(this GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: Client::System::Resource::Handle::ModelResourceHandle::vf33 */
GEN_FRAME uint GEN_THISCALL F_005167d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5167d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  byte bVar1;
  uint uVar2;
  undefined * pMVar3;
  int iVar4;
  
  uVar2 = param_2;
  if (param_2 == 1) {
    pMVar3 = this + 0x88;
    iVar4 = _InterlockedExchangeAdd((volatile long *)(((int *)pMVar3)), 0);
    if (iVar4 != 3) {
      F_00510160(this GEN_EDX_FWD);
      pMVar3 = this + 0x118;
      iVar4 = 3;
      do {
        if (*(undefined * PTR32 *)(pMVar3 - 0xc) != (undefined *)0x0) {
          F_004d6970(*(undefined * PTR32 *)(pMVar3 - 0xc) GEN_EDX_ARG);
        }
        if (*(undefined * PTR32 *)pMVar3 != (undefined *)0x0) {
          F_004d6ae0(*(undefined * PTR32 *)pMVar3 GEN_EDX_ARG);
        }
        pMVar3 = pMVar3 + 4;
        iVar4 = iVar4 - 1;
      } while (iVar4 != 0);
      if ((*(short *)(this + 4) != 4) && (bVar1 = F_00514ad0(this GEN_EDX_ARG), bVar1 == 0)) {
        return 0xfffffff6;
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}

/* ref: Client::System::Resource::Handle::MaterialResourceHandle::vf33 */
GEN_FRAME uint GEN_THISCALL F_00516850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x516850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * pMVar1;
  int iVar2;
  ushort * puVar3;
  byte bVar4;
  uint * puVar5;
  int * piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ushort uVar11;
  ushort uVar12;
  int iVar13;
  int iVar14;
  uint local_8;
  
  if (param_2 != 1) {
    return param_2;
  }
  pMVar1 = this + 0x88;
  iVar14 = _InterlockedExchangeAdd((volatile long *)(((int *)pMVar1)), 0);
  if (iVar14 == 3) {
    return 1;
  }
  puVar5 = ((uint *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_FWD)));
  uVar10 = *(uint *)(this + 0x1c);
  if (uVar10 < 0x10) {
    piVar6 = *(int * PTR32 *)(this + 0x98);
    if (piVar6 != (int *)0x0) {
      piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6 GEN_EDX_ARG)));
      ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6 GEN_EDX_ARG,*(undefined4 *)(this + 0x98));
      *(undefined4 *)(this + 0x98) = 0;
    }
    return 0xfffffff6;
  }
  if ((((char)*puVar5 == '\0') && ((*puVar5 & 0xffffff00) == 0x1030000)) && (puVar5[1] == uVar10)) {
    *(undefined2 *)(this + 0xb8) = *(undefined2 *)((int)puVar5 + 10);
    this[0xba] = *(undefined *)(puVar5 + 3);
    this[0xbb] = *(undefined *)((int)puVar5 + 0xd);
    this[0xbc] = *(undefined *)((int)puVar5 + 0xe);
    this[0xbd] = *(undefined *)((int)puVar5 + 0xf);
    uVar7 = F_00500220(puVar5);
    *(uint *)(this + 0xc0) = uVar7;
    piVar6 = (int *)F_00406520();
    uVar8 = ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6 GEN_EDX_ARG,uVar7,0);
    *(uint *)(this + 0xa8) = uVar8;
    iVar14 = uVar8 + (uint)(byte)puVar5[3] * 8;
    *(int *)(this + 0xac) = iVar14;
    uVar8 = (uint)(byte)this[0xba];
    iVar14 = iVar14 + ((uint)*(byte *)((int)puVar5 + 0xe) + (uint)*(byte *)((int)puVar5 + 0xd)) * 4;
    *(int *)(this + 0xb0) = iVar14;
    *(uint *)(this + 0xb4) = (uint)(ushort)puVar5[2] + iVar14;
    if (uVar8 * 4 <= uVar10 - 0x10) {
      uVar9 = 0;
      if (uVar8 != 0) {
        do {
          *((undefined4 *)GEN_TOP((*(int *)(this + 0xa8) + uVar9 * 8))) = 0;
          *((short *)GEN_TOP((*(int *)(this + 0xa8) + 4 + uVar9 * 8))) = (short)puVar5[uVar9 + 4];
          puVar3 = ((ushort *)GEN_TOP((*(int *)(this + 0xa8) + 6 + uVar9 * 8)));
          *puVar3 = *puVar3 | 0x1f;
          puVar3 = ((ushort *)GEN_TOP((*(int *)(this + 0xa8) + 6 + uVar9 * 8)));
          *puVar3 = *puVar3 | 0x3e0;
          puVar3 = ((ushort *)GEN_TOP((*(int *)(this + 0xa8) + 6 + uVar9 * 8)));
          *puVar3 = *puVar3 | 0x7c00;
          puVar3 = ((ushort *)GEN_TOP((*(int *)(this + 0xa8) + 6 + uVar9 * 8)));
          *puVar3 = *puVar3 & 0x7fff;
          uVar9 = uVar9 + 1;
        } while (uVar9 < (byte)this[0xba]);
      }
      uVar7 = uVar7 + (uint)(byte)this[0xba] * -8;
      if (uVar7 <= (uVar10 - 0x10) + uVar8 * -4) {
        F_00c46aa0(*(undefined4 *)(this + 0xac),puVar5 + uVar8 + 4,uVar7);
        iVar14 = (int)(puVar5 + uVar8 + 4) + uVar7;
        bVar4 = F_00514c90(this GEN_EDX_ARG);
        if (bVar4 == 0) {
LAB_00516bf3: ;
          piVar6 = *(int * PTR32 *)(this + 0x98);
          if (piVar6 == (int *)0x0) {
            return 0xfffffff6;
          }
          piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6 GEN_EDX_ARG)));
          goto LAB_00516c04;
        }
        bVar4 = F_00514da0(this GEN_EDX_ARG);
        if (bVar4 != 0) {
          iVar13 = iVar14 + 0xc + (uint)*(ushort *)(iVar14 + 2) * 8;
          iVar2 = iVar13 + (uint)*(ushort *)(iVar14 + 4) * 8;
          uVar10 = F_00627410(this,iVar14,iVar14 + 8,iVar14 + 0xc,iVar13,iVar2,
                                iVar2 + (uint)*(ushort *)(iVar14 + 6) * 0xc);
          *(uint *)(this + 0xa0) = uVar10;
          if (uVar10 == 0) {
            piVar6 = *(int * PTR32 *)(this + 0x98);
            if (piVar6 != (int *)0x0) {
              piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6 GEN_EDX_ARG)));
              ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6 GEN_EDX_ARG,*(undefined4 *)(this + 0x98));
              *(undefined4 *)(this + 0x98) = 0;
            }
            return 0xfffffff6;
          }
          local_8 = 0;
          if (this[0xba] != (undefined1)0x0) {
            do {
              uVar10 = 0;
              if (*(short *)(iVar14 + 6) != 0) {
                param_2 = 0;
                do {
                  if (uVar10 < *((ushort *)GEN_TOP((*(int *)(this + 0xa0) + 0x1c)))) {
                    iVar13 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xa0) + 0x18))) + 4 + param_2)));
                  }
                  else {
                    iVar13 = 0;
                  }
                  iVar2 = *(int *)(this + 0xa8) + local_8 * 8;
                  if (*((int *)GEN_TOP((*(int *)(this + 0xa8) + local_8 * 8))) == iVar13) {
                    uVar11 = *(ushort *)(iVar2 + 6);
                    if (((byte)uVar11 & 0x1f) == 0x1f) {
                      uVar11 = (*(ushort *)(iVar2 + 6) ^ (ushort)uVar10) & 0x1f;
                    }
                    else {
                      if ((uVar11 & 0x3e0) == 0x3e0) {
                        uVar12 = (ushort)(uVar10 << 5);
                        uVar11 = 0x3e0;
                      }
                      else {
                        if ((uVar11 & 0x7c00) != 0x7c00) goto LAB_00516bf3;
                        uVar12 = (ushort)(uVar10 << 10);
                        uVar11 = 0x7c00;
                      }
                      uVar11 = (uVar12 ^ *(ushort *)(iVar2 + 6)) & uVar11;
                    }
                    *(ushort *)(iVar2 + 6) = *(ushort *)(iVar2 + 6) ^ uVar11;
                  }
                  param_2 = param_2 + 0xc;
                  uVar10 = uVar10 + 1;
                } while (uVar10 < *(ushort *)(iVar14 + 6));
              }
              local_8 = local_8 + 1;
            } while (local_8 < (byte)this[0xba]);
          }
          piVar6 = *(int * PTR32 *)(this + 0x98);
          if (piVar6 != (int *)0x0) {
            piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6 GEN_EDX_ARG)));
            ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6 GEN_EDX_ARG,*(undefined4 *)(this + 0x98));
            *(undefined4 *)(this + 0x98) = 0;
          }
          return 1;
        }
      }
    }
  }
  piVar6 = *(int * PTR32 *)(this + 0x98);
  if (piVar6 == (int *)0x0) {
    return 0xfffffff6;
  }
  piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6 GEN_EDX_ARG)));
LAB_00516c04: ;
  ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6 GEN_EDX_ARG,*(undefined4 *)(this + 0x98));
  *(undefined4 *)(this + 0x98) = 0;
  return 0xfffffff6;
}

/* ref: FUN_00516c30 */
GEN_FRAME uint GEN_THISCALL F_00516c30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x516c30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  uint param_5 = (uint)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x140];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x138)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x13c);
  bVar1 = F_00b4e350((int)this + 0xa0 GEN_EDX_FWD);
  if (bVar1 != 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    F_00c47745((*(uint *)(gen_frame + 0x138)) ^ (uint)(uint)(gen_frame + 0x13c) GEN_EDX_ARG);
    return (uint)param_1;
  }
  ((int *)(gen_frame + 0x10))[0] = 0;
  ((int *)(gen_frame + 0x10))[1] = 0;
  ((int *)(gen_frame + 0x10))[2] = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 4;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x706170;
  if (param_2 >> 0x10 == 1) {
    uVar2 = 0x656d70;
    uVar3 = 0x656d70;
  }
  else {
    uVar2 = param_5;
    uVar3 = param_4;
    if (param_2 >> 0x10 == 3) {
      F_00c472af(((undefined1 *)(gen_frame + 0x24)),0x104,"chara/weapon/w%04d/animation/a%04d/wp_common/resident/weapon.pap",
                 param_2 & 0xffff,param_3);
      F_004ff470(&(*(uint *)(gen_frame + 0x20)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x24)),0,0);
      uVar2 = F_00513790(REFG(void * PTR32, 0x1375aec) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x24)),0,0,0,0);
      (*(uint *)(gen_frame + 0x20)) = uVar2;
      F_00529d70(((int *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x20)));
      F_005292c0(param_1 GEN_EDX_ARG,((int *)(gen_frame + 0x10)));
      F_00528bc0(((int *)(gen_frame + 0x10)) GEN_EDX_ARG);
      goto LAB_00516e18;
    }
  }
  F_00c472af(((undefined1 *)(gen_frame + 0x128)),0x10,"bt_%c%c%c_%c%c%c",uVar3 >> 0x10 & 0xff,uVar3 >> 8 & 0xff,uVar3 & 0xff,
             uVar2 >> 0x10 & 0xff,uVar2 >> 8 & 0xff,uVar2 & 0xff);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[3])REFP(0x109980c));
  (*(uint *)(gen_frame + 0xc)) = param_2;
  F_00516050(this GEN_EDX_ARG,((int *)(gen_frame + 0x10)),param_2,param_3,((undefined1 *)(gen_frame + 0x128)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  F_005292c0(param_1 GEN_EDX_ARG,((int *)(gen_frame + 0x10)));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[3])REFP(0x1099414));
  if (((int *)(gen_frame + 0x10))[0] != 0) {
    F_00429760(((int *)(gen_frame + 0x10))[0],(((int *)(gen_frame + 0x10))[2] - ((int *)(gen_frame + 0x10))[0] >> 2) * 4,0xcb);
  }
LAB_00516e18: ;
  F_00c47745((*(uint *)(gen_frame + 0x138)) ^ (uint)(uint)(gen_frame + 0x13c) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: FUN_00516e30 */
GEN_FRAME uint GEN_THISCALL F_00516e30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x516e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  char cVar1;
  byte bVar2;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  bVar2 = F_00b4e350((int)this + 0xa0 GEN_EDX_FWD);
  if (bVar2 == 0) {
    builtin_strncpy(((char *)(gen_frame + 0x24)),"cmdw",4);
    cVar1 = ((char *)(gen_frame + 0x24))[(int)(param_4 >> 0x10)];
    ((int *)(gen_frame + 0xc))[0] = 0;
    ((int *)(gen_frame + 0xc))[1] = 0;
    ((int *)(gen_frame + 0xc))[2] = 0;
    F_00c472af(((char *)(gen_frame + 0x24)) + 4,0x10,"mt_%c%04d",(int)cVar1,param_4 & 0xffff);
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)) = (*(undefined * PTR32 (*)[3])REFP(0x109981c));
    (*(undefined4 *)(gen_frame + 0x20)) = param_2;
    F_00516050(this GEN_EDX_ARG,((int *)(gen_frame + 0xc)),param_2,param_3,((char *)(gen_frame + 0x24)) + 4,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)));
    F_005292c0(param_1 GEN_EDX_ARG,((int *)(gen_frame + 0xc)));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)) = (*(undefined * PTR32 (*)[3])REFP(0x1099414));
    if (((int *)(gen_frame + 0xc))[0] != 0) {
      F_00429760(((int *)(gen_frame + 0xc))[0],(((int *)(gen_frame + 0xc))[2] - ((int *)(gen_frame + 0xc))[0] >> 2) * 4,0xcb);
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: FUN_00516f10 */
GEN_FRAME uint GEN_THISCALL F_00516f10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x516f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[8];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  uint uVar1;
  undefined4 * puVar2;
  
  if (((*(int *)&gen_args[5]) != 2) && ((*(int *)&gen_args[5]) != 5)) {
    uVar1 = F_00515a20((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(int *)&gen_args[5]),(*(undefined4 * PTR32 *)&gen_args[6]),(*(undefined4 *)&gen_args[7]));
    return uVar1;
  }
  uVar1 = (*(undefined4 * PTR32 *)&gen_args[6])[5];
  (*(undefined4 *)&gen_args[4]) = (*(undefined4 *)&gen_args[7]);
  (*(int *)&gen_args[5]) = 0x706170;
  puVar2 = (*(undefined4 * PTR32 *)&gen_args[6]);
  if (0xf < uVar1) {
    puVar2 = ((undefined4 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[6])));
  }
  F_004ff470(&(*(undefined4 * PTR32 *)&gen_args[6]) GEN_EDX_ARG,puVar2,0,0);
  uVar1 = F_00513790(REFG(void * PTR32, 0x1375aec) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[4]),&(*(int *)&gen_args[5]),&(*(undefined4 * PTR32 *)&gen_args[6]),puVar2,0,0,0,0);
  return uVar1;
}

/* ref: FUN_00516f90 */
GEN_FRAME uint GEN_THISCALL F_00516f90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x516f90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  bVar1 = F_00b4e350((int)this + 0xa0 GEN_EDX_FWD);
  if (bVar1 == 0) {
    if (((*(uint *)&gen_a2) >> 0x10 != 0) && ((*(uint *)&gen_a2) >> 0x10 != 3)) {
      (*(uint *)(gen_frame + 0x18)) = (*(uint *)&gen_a2);
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)) = (*(undefined * PTR32 (*)[3])REFP(0x109982c));
      F_00516050(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)),(*(uint *)&gen_a2),param_3,"",&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)));
      F_005292c0(param_1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)));
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)) = (*(undefined * PTR32 (*)[3])REFP(0x1099414));
      F_00528bc0(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      return (uint)param_1;
    }
  }
  F_005292c0(param_1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)));
  return (uint)param_1;
}

/* ref: FUN_00517030 */
GEN_FRAME uint GEN_THISCALL F_00517030(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x517030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_005270e0((undefined *)((int)this + 0x10) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x14),
               *(undefined4 * PTR32 *)((int)this + 0x14));
  F_00429760(*(undefined4 *)((int)this + 0x14),0x14,0x12e);
  F_0052d970(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x24,0x12e);
  return (uint)uVar1;
}

/* ref: FUN_00517090 */
GEN_NOFRAME uint GEN_THISCALL F_00517090(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x517090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004296a0(0x24,0,0x12e);
  *(uint *)((int)this + 4) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x20))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x21))) = 1;
  *(undefined4 *)((int)this + 0x18) = 0;
  uVar1 = F_004296a0(0x14,0,0x12e);
  *(uint *)((int)this + 0x14) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x14) + 4))) = *(int *)((int)this + 0x14);
  *((int *)GEN_TOP((*(int *)((int)this + 0x14) + 8))) = *(int *)((int)this + 0x14);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x14) + 0x10))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x14) + 0x11))) = 1;
  return (uint)this;
}

/* ref: FUN_00517110 */
GEN_FRAME uint GEN_THISCALL F_00517110(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x517110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined * pvVar4;
  undefined4 * puVar5;
  int iVar6;
  LPCRITICAL_SECTION lpCriticalSection;
  int local_8;
  
  uVar1 = F_00406b90(0x10,0,0);
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    *(undefined4 *)(uVar1 + 8) = 0;
    uVar2 = F_004296a0(0x18,0,0x12e);
    *(uint *)(uVar1 + 4) = uVar2;
    *(uint *)uVar2 = uVar2;
    *((int *)GEN_TOP((*(int *)(uVar1 + 4) + 4))) = *(int *)(uVar1 + 4);
    *((int *)GEN_TOP((*(int *)(uVar1 + 4) + 8))) = *(int *)(uVar1 + 4);
    *((undefined1 *)GEN_TOP((*(int *)(uVar1 + 4) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)(uVar1 + 4) + 0x15))) = 1;
  }
  *(uint *)this = uVar1;
  puVar3 = (undefined4 *)F_00406b90(0x640,0,0);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar5 = puVar3;
    for (iVar6 = 400; iVar6 != 0; iVar6 = iVar6 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  pvVar4 = (undefined *)F_00406b90(0x58,0,0);
  if (pvVar4 == (undefined *)0x0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    F_005011b0(pvVar4 GEN_EDX_ARG);
  }
  *(undefined * PTR32 *)((int)this + 8) = pvVar4;
  pvVar4 = (undefined *)F_00406b90(0x20,0,0);
  if (pvVar4 == (undefined *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00517090(pvVar4 GEN_EDX_ARG);
  }
  *(uint *)((int)this + 0xc) = uVar1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x20));
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(REFG(int, 0x1375a1c) + 4);
  *(undefined4 *)((int)this + 0x44) = *((undefined4 *)GEN_TOP((*(int *)(REFG(int, 0x1375ae8) + 0x28) + 0xb8)));
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0x1010000;
  *(undefined2 *)((int)this + 0x50) = 1;
  _InterlockedExchange((volatile long *)(((undefined4 *)((int)this + 0x68))), (long)(0));
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x6c);
  local_8 = 0x7f;
  do {
    gen_imp_InitializeCriticalSection(lpCriticalSection);
    lpCriticalSection = lpCriticalSection + 1;
    local_8 = local_8 - 1;
  } while (-1 < local_8);
  *(undefined4 *)((int)this + 0xc6c) = 0;
  *(undefined4 *)((int)this + 0xc70) = 0;
  puVar3 = (undefined4 *)((int)this + 0xc74);
  local_8 = 6;
  do {
    *puVar3 = 0;
    puVar5 = (undefined4 *)F_004296a0(8,0,0x12e);
    *puVar3 = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = 0;
      puVar5[1] = 0;
    }
    *(undefined4 * PTR32 *)*puVar3 = puVar3;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3 = puVar3 + 6;
    local_8 = local_8 - 1;
  } while (-1 < local_8);
  puVar3 = (undefined4 *)((int)this + 0xd1c);
  local_8 = 6;
  do {
    *puVar3 = 0;
    puVar5 = (undefined4 *)F_004296a0(8,0,0x12e);
    *puVar3 = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = 0;
      puVar5[1] = 0;
    }
    *(undefined4 * PTR32 *)*puVar3 = puVar3;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3 = puVar3 + 6;
    local_8 = local_8 - 1;
  } while (-1 < local_8);
  *(undefined4 *)((int)this + 0xdc4) = 0;
  *(undefined4 *)((int)this + 0xdc8) = 0;
  *(undefined4 *)((int)this + 0xdcc) = 0;
  *(undefined4 *)((int)this + 0xdd4) = 0;
  *(undefined4 *)((int)this + 0xdd8) = 0;
  *(undefined4 *)((int)this + 0xddc) = 0;
  *(undefined4 *)((int)this + 0xde4) = 0;
  *(undefined4 *)((int)this + 0xde8) = 0;
  *(undefined4 *)((int)this + 0xdec) = 0;
  *(undefined4 *)((int)this + 0xdf4) = 0;
  *(undefined4 *)((int)this + 0xdf8) = 0;
  *(undefined4 *)((int)this + 0xdfc) = 0;
  *(undefined4 *)((int)this + 0x52) = 0;
  *(undefined4 *)((int)this + 0x56) = 0;
  *(undefined4 *)((int)this + 0x5a) = 0;
  *(undefined4 *)((int)this + 0x5e) = 0;
  *(undefined4 *)((int)this + 0x62) = 0;
  return (uint)this;
}

/* ref: FUN_00517330 */
GEN_NOFRAME uint F_00517330(void)
{
  GEN_ENTER(0x517330u, 0u, 0u, 0u, 0u);
  undefined * this;
  
  this = (undefined *)F_00406b90(0xe08,0,0);
  if (this != (undefined *)0x0) {
    REFG(undefined4 * PTR32, 0x1375aec) = (undefined4 *)F_00517110(this GEN_EDX_ARG);
    F_0050a300(((undefined *)GEN_TOP(*REFG(undefined4 * PTR32, 0x1375aec))) GEN_EDX_ARG);
    return (uint)REFG(undefined4 * PTR32, 0x1375aec);
  }
  REFG(undefined4 * PTR32, 0x1375aec) = (undefined4 *)0x0;
  F_0050a300(*(undefined * PTR32 *)&REFG(undefined, 0x0) GEN_EDX_ARG);
  return (uint)REFG(undefined4 * PTR32, 0x1375aec);
}

/* ref: FUN_00517380 */
GEN_FRAME unsigned int GEN_THISCALL F_00517380(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x517380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  pvVar1 = *(undefined * PTR32 *)((int)this + 0xc);
  if (pvVar1 != (undefined *)0x0) {
    F_005270e0((undefined *)((int)pvVar1 + 0x10) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)pvVar1 + 0x14),
                 *(undefined4 * PTR32 *)((int)pvVar1 + 0x14));
    F_00429760(*(undefined4 *)((int)pvVar1 + 0x14),0x14,0x12e);
    F_0052d970(pvVar1 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)pvVar1 + 4),
                 *(undefined4 * PTR32 *)((int)pvVar1 + 4));
    F_00429760(*(undefined4 *)((int)pvVar1 + 4),0x24,0x12e);
    F_00406ad0(pvVar1);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  pvVar1 = *(undefined * PTR32 *)((int)this + 8);
  if (pvVar1 != (undefined *)0x0) {
    F_00510020(pvVar1 GEN_EDX_ARG);
    F_00406ad0(pvVar1);
    *(undefined4 *)((int)this + 8) = 0;
  }
  pvVar1 = *(undefined * PTR32 *)((int)this + 4);
  if (pvVar1 != (undefined *)0x0) {
    F_0050c700(pvVar1 GEN_EDX_ARG);
    F_00406ad0(pvVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  pvVar1 = *(undefined * PTR32 *)this;
  if (pvVar1 != (undefined *)0x0) {
    F_005074c0(pvVar1 GEN_EDX_ARG);
    F_005258a0(pvVar1 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)pvVar1 + 4),
                 *(undefined4 * PTR32 *)((int)pvVar1 + 4));
    F_00429760(*(undefined4 *)((int)pvVar1 + 4),0x18,0x12e);
    F_00406ad0(pvVar1);
    *(undefined4 *)this = 0;
  }
  return;
}

/* ref: Client::System::Resource::Handle::AnimationExchangeTableResourceHandle::vf33 */
GEN_FRAME uint GEN_THISCALL F_00517460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x517460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined4 * this_00;
  uint * puVar1;
  undefined * pAVar2;
  int iVar3;
  char cVar4;
  short sVar5;
  undefined4 uVar6;
  uint * puVar7;
  uint uVar8;
  char * pcVar9;
  undefined4 * puVar10;
  uint uVar11;
  char * pcVar12;
  uint * puVar13;
  uint uVar14;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  uVar11 = param_2;
  if (param_2 == 1) {
    pAVar2 = this + 0x88;
    iVar3 = _InterlockedExchangeAdd((volatile long *)(((int *)pAVar2)), 0);
    if (iVar3 != 3) {
      uVar8 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_FWD);
      (*(uint *)(gen_frame + 0x2c)) = uVar8;
      uVar11 = *(uint *)(uVar8 + 8);
      uVar14 = uVar11 & 0xffff;
      (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(uVar8 + 4);
      (*(uint *)(gen_frame + 0x10)) = uVar11;
      pcVar12 = (char *)0xc;
      (*(uint * PTR32 *)(gen_frame + 0x18)) = (uint *)0x0;
      (*(uint * PTR32 *)(gen_frame + 0x1c)) = (uint *)0x0;
      (*(int *)(gen_frame + 0x20)) = 0;
      F_0052c7c0(&(*(uint * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,uVar14);
      for (; uVar14 != 0; uVar14 = uVar14 - 1) {
        F_00c49908(((char *)(gen_frame + 0x3c)),0x20,pcVar12 + (*(uint *)(gen_frame + 0x2c)));
        uVar11 = ((uint *)(gen_frame + 0x5c))[0];
        pcVar9 = ((char *)(gen_frame + 0x3c));
        (*(uint *)(gen_frame + 0x70)) = 0xf;
        (*(uint * PTR32 *)(gen_frame + 0x6c)) = (uint *)0x0;
        (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x5c))[0] + 0)) = 0;
        ((uint *)(gen_frame + 0x5c))[0] = uVar11 & 0xffffff00;
        do {
          cVar4 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar4 != '\0');
        F_004e5c20(((uint *)(gen_frame + 0x5c)) GEN_EDX_ARG,((char *)(gen_frame + 0x3c)),(int)pcVar9 - (int)(((char *)(gen_frame + 0x3c)) + 1));
        F_0052cc30(&(*(uint * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,((uint *)(gen_frame + 0x5c)));
        if (0xf < (*(uint *)(gen_frame + 0x70))) {
          F_00429760(((uint *)(gen_frame + 0x5c))[0],(*(uint *)(gen_frame + 0x70)) + 1,0x32);
        }
        pcVar9 = ((char *)(gen_frame + 0x3c));
        do {
          cVar4 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar4 != '\0');
        pcVar12 = pcVar9 + (int)(pcVar12 + (1 - (int)(((char *)(gen_frame + 0x3c)) + 1)));
      }
      if ((*(uint *)(gen_frame + 0x10)) >> 0x10 != 0) {
        (*(undefined * PTR32 *)(gen_frame + 0x28)) = (*(undefined * PTR32 *)(gen_frame + 0x28)) + 0xa0;
        pcVar12 = pcVar12 + (*(uint *)(gen_frame + 0x2c));
        (*(uint *)(gen_frame + 0x2c)) = (*(uint *)(gen_frame + 0x10)) >> 0x10;
        do {
          pAVar2 = (*(undefined * PTR32 *)(gen_frame + 0x28));
          uVar6 = *(undefined4 *)pcVar12;
          sVar5 = *(short *)(pcVar12 + 4);
          (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar12 + 6;
          (*(uint * PTR32 *)(gen_frame + 0x68)) = (uint *)0x0;
          (*(uint * PTR32 *)(gen_frame + 0x6c)) = (uint *)0x0;
          (*(uint *)(gen_frame + 0x70)) = 0;
          F_0052cc30(&(*(uint * PTR32 *)(gen_frame + 0x68)) GEN_EDX_ARG,(*(uint * PTR32 *)(gen_frame + 0x18)) + (short)((uint)uVar6 >> 0x10) * 7);
          if (-1 < sVar5) {
            F_0052cc30(&(*(uint * PTR32 *)(gen_frame + 0x68)) GEN_EDX_ARG,(*(uint * PTR32 *)(gen_frame + 0x18)) + sVar5 * 7);
          }
          uVar11 = ((uint *)(gen_frame + 0x30))[0];
          (*(short *)(gen_frame + 0x0)) = (short)uVar6;
          (*(uint *)(gen_frame + 0x44)) = 0xf;
          (*(undefined4 *)(gen_frame + 0x40)) = 0;
          (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x30))[0] + 0)) = 0;
          ((uint *)(gen_frame + 0x30))[0] = uVar11 & 0xffffff00;
          F_004e54d0(((uint *)(gen_frame + 0x30)) GEN_EDX_ARG,(*(uint * PTR32 *)(gen_frame + 0x18)) + (*(short *)(gen_frame + 0x0)) * 7,0,0xffffffff);
          F_0052cb20(&(*(uint * PTR32 *)(gen_frame + 0x4c)) GEN_EDX_ARG,&(*(uint * PTR32 *)(gen_frame + 0x68)));
          puVar10 = (undefined4 *)F_004296a0(0x3c,0,0xd6);
          *puVar10 = *(undefined4 *)(pAVar2 + 4);
          puVar10[1] = *(undefined4 *)(pAVar2 + 4);
          this_00 = puVar10 + 3;
          puVar10[2] = *(undefined4 *)(pAVar2 + 4);
          *(undefined2 *)(puVar10 + 0xe) = 0;
          if (this_00 != (undefined4 *)0x0) {
            puVar10[8] = 0xf;
            puVar10[7] = 0;
            *(undefined1 *)this_00 = 0;
            F_004e54d0(this_00 GEN_EDX_ARG,((uint *)(gen_frame + 0x30)),0,0xffffffff);
            F_0052cb20(puVar10 + 10 GEN_EDX_ARG,&(*(uint * PTR32 *)(gen_frame + 0x4c)));
          }
          F_0052e3b0((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)),puVar10,0);
          puVar7 = (*(uint * PTR32 *)(gen_frame + 0x50));
          if ((*(uint * PTR32 *)(gen_frame + 0x4c)) != (uint *)0x0) {
            if ((*(uint * PTR32 *)(gen_frame + 0x4c)) != (*(uint * PTR32 *)(gen_frame + 0x50))) {
              puVar13 = (*(uint * PTR32 *)(gen_frame + 0x4c)) + 5;
              do {
                if (0xf < *puVar13) {
                  F_00429760(puVar13[-5],*puVar13 + 1,0x32);
                }
                *puVar13 = 0xf;
                puVar13[-1] = 0;
                *(undefined1 *)(puVar13 - 5) = 0;
                puVar1 = puVar13 + 2;
                puVar13 = puVar13 + 7;
              } while (puVar1 != puVar7);
            }
            F_00429760((*(uint * PTR32 *)(gen_frame + 0x4c)),(((*(int *)(gen_frame + 0x54)) - (int)(*(uint * PTR32 *)(gen_frame + 0x4c))) / 0x1c) * 0x1c,0xcb);
          }
          (*(uint * PTR32 *)(gen_frame + 0x4c)) = (uint *)0x0;
          (*(uint * PTR32 *)(gen_frame + 0x50)) = (uint *)0x0;
          (*(int *)(gen_frame + 0x54)) = 0;
          if (0xf < (*(uint *)(gen_frame + 0x44))) {
            F_00429760(((uint *)(gen_frame + 0x30))[0],(*(uint *)(gen_frame + 0x44)) + 1,0x32);
          }
          puVar7 = (*(uint * PTR32 *)(gen_frame + 0x68));
          if ((*(uint * PTR32 *)(gen_frame + 0x68)) != (uint *)0x0) {
            if ((*(uint * PTR32 *)(gen_frame + 0x68)) != (*(uint * PTR32 *)(gen_frame + 0x6c))) {
              puVar13 = (*(uint * PTR32 *)(gen_frame + 0x68)) + 5;
              do {
                if (0xf < *puVar13) {
                  F_00429760(puVar13[-5],*puVar13 + 1,0x32);
                }
                *puVar13 = 0xf;
                puVar13[-1] = 0;
                *(undefined1 *)(puVar13 - 5) = 0;
                puVar1 = puVar13 + 2;
                puVar13 = puVar13 + 7;
              } while (puVar1 != (*(uint * PTR32 *)(gen_frame + 0x6c)));
            }
            F_00429760(puVar7,((int)((*(uint *)(gen_frame + 0x70)) - (int)puVar7) / 0x1c) * 0x1c,0xcb);
          }
          uVar11 = (*(uint *)(gen_frame + 0x2c)) - 1;
          (*(uint *)(gen_frame + 0x2c)) = uVar11;
          (*(uint * PTR32 *)(gen_frame + 0x68)) = (uint *)0x0;
          (*(uint * PTR32 *)(gen_frame + 0x6c)) = (uint *)0x0;
          (*(uint *)(gen_frame + 0x70)) = 0;
          pcVar12 = (*(char * PTR32 *)(gen_frame + 0x14));
        } while (uVar11 != 0);
      }
      puVar7 = (*(uint * PTR32 *)(gen_frame + 0x18));
      if ((*(uint * PTR32 *)(gen_frame + 0x18)) != (uint *)0x0) {
        if ((*(uint * PTR32 *)(gen_frame + 0x18)) != (*(uint * PTR32 *)(gen_frame + 0x1c))) {
          puVar13 = (*(uint * PTR32 *)(gen_frame + 0x18)) + 5;
          do {
            if (0xf < *puVar13) {
              F_00429760(puVar13[-5],*puVar13 + 1,0x32);
            }
            *puVar13 = 0xf;
            puVar13[-1] = 0;
            *(undefined1 *)(puVar13 - 5) = 0;
            puVar1 = puVar13 + 2;
            puVar13 = puVar13 + 7;
          } while (puVar1 != (*(uint * PTR32 *)(gen_frame + 0x1c)));
        }
        F_00429760(puVar7,(((*(int *)(gen_frame + 0x20)) - (int)puVar7) / 0x1c) * 0x1c,0xcb);
      }
      uVar11 = 1;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
  return uVar11;
}

/* ref: FUN_00517820 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00517820(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x517820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  F_00517380(this GEN_EDX_FWD);
  iVar1 = *(int *)((int)this + 0xdf4);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0xdfc) - iVar1 >> 2) * 4,0x12e);
  }
  *(undefined4 *)((int)this + 0xdf4) = 0;
  *(undefined4 *)((int)this + 0xdf8) = 0;
  *(undefined4 *)((int)this + 0xdfc) = 0;
  iVar1 = *(int *)((int)this + 0xde4);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0xdec) - iVar1 >> 2) * 4,0x12e);
  }
  *(undefined4 *)((int)this + 0xde4) = 0;
  *(undefined4 *)((int)this + 0xde8) = 0;
  *(undefined4 *)((int)this + 0xdec) = 0;
  iVar1 = *(int *)((int)this + 0xdd4);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0xddc) - iVar1 >> 2) * 4,0x12e);
  }
  *(undefined4 *)((int)this + 0xdd4) = 0;
  *(undefined4 *)((int)this + 0xdd8) = 0;
  *(undefined4 *)((int)this + 0xddc) = 0;
  iVar1 = *(int *)((int)this + 0xdc4);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0xdcc) - iVar1 >> 2) * 4,0x12e);
  }
  *(undefined4 *)((int)this + 0xdc4) = 0;
  *(undefined4 *)((int)this + 0xdc8) = 0;
  *(undefined4 *)((int)this + 0xdcc) = 0;
  puVar2 = (undefined4 *)((int)this + 0xdc4);
  iVar1 = 6;
  do {
    puVar2 = puVar2 - 6;
    F_005252b0(puVar2 GEN_EDX_ARG);
    F_00429760(*puVar2,8,0x12e);
    iVar1 = iVar1 - 1;
    *puVar2 = 0;
  } while (-1 < iVar1);
  puVar2 = (undefined4 *)((int)this + 0xd1c);
  iVar1 = 6;
  do {
    puVar2 = puVar2 - 6;
    F_005252b0(puVar2 GEN_EDX_ARG);
    F_00429760(*puVar2,8,0x12e);
    iVar1 = iVar1 - 1;
    *puVar2 = 0;
  } while (-1 < iVar1);
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xc6c);
  iVar1 = 0x7f;
  do {
    lpCriticalSection = lpCriticalSection - 1;
    gen_imp_DeleteCriticalSection(lpCriticalSection);
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  return (uint)(gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x20)));
}

/* ref: FUN_005179a0 */
GEN_NOFRAME unsigned int F_005179a0(void)
{
  GEN_ENTER(0x5179a0u, 0u, 0u, 0u, 0u);
  undefined * pvVar1;
  
  pvVar1 = REFG(void * PTR32, 0x1375aec);
  if (REFG(void * PTR32, 0x1375aec) != (undefined *)0x0) {
    F_00517820(REFG(void * PTR32, 0x1375aec) GEN_EDX_ARG);
    F_00406ad0(pvVar1);
    REFG(void * PTR32, 0x1375aec) = (undefined *)0x0;
  }
  return;
}

/* ref: FUN_005179d0 */
GEN_FRAME uint GEN_THISCALL F_005179d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x5179d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  
  F_0050c8c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[44])REFP(0x109bcfc));
  *(undefined4 *)((int)this + 0xa8) = 0;
  uVar1 = F_004296a0(0x3c,0,0xd6);
  *(uint *)((int)this + 0xa4) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0xa4) + 4))) = *(int *)((int)this + 0xa4);
  *((int *)GEN_TOP((*(int *)((int)this + 0xa4) + 8))) = *(int *)((int)this + 0xa4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xa4) + 0x38))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xa4) + 0x39))) = 1;
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::AnimationExchangeTableResourceHandleFactory::vf1 */
GEN_FRAME uint GEN_THISCALL F_00517a50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x517a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined * this_00;
  uint uVar1;
  
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                              (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) GEN_EDX_ARG,0xb0,0x10)));
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_005179d0(this_00 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00517aa0 */
GEN_FRAME float10 F_00517aa0(float gen_a0)
{
  GEN_ENTER(0x517aa0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  double dVar2;
  
  dVar2 = (GEN_X87MATH(((double)param_1),0xe));
  return (float10)(float)dVar2;
}

/* ref: FUN_00517b10 */
GEN_FRAME byte GEN_THISCALL F_00517b10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x517b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  bool bVar4;
  
  pbVar2 = (byte *)((int)this + 4);
  pbVar3 = param_1;
  while( true ) {
    bVar1 = *pbVar2;
    bVar4 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) break;
    if (bVar1 == 0) {
      return 1;
    }
    bVar1 = pbVar2[1];
    bVar4 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) break;
    pbVar2 = pbVar2 + 2;
    pbVar3 = pbVar3 + 2;
    if (bVar1 == 0) {
      return 1;
    }
  }
  return 1 - bVar4 == (uint)(bVar4 != 0);
}

/* ref: FUN_00517b60 */
GEN_FRAME byte GEN_THISCALL F_00517b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x517b60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x128) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00517b90 */
GEN_FRAME uint GEN_THISCALL F_00517b90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x517b90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0xa8) + 8 + param_2;
}

/* ref: FUN_00517c10 */
GEN_FRAME uint GEN_THISCALL F_00517c10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x517c10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(int *)(in_ecx + 0xc4) + (uint)(ushort)param_2 * 4;
}

/* ref: FUN_00517cc0 */
GEN_FRAME uint GEN_THISCALL F_00517cc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x517cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return *(int *)((int)this + 0xb8) + (uint)(byte)param_1 * 0x3c;
}

/* ref: FUN_00517d10 */
GEN_FRAME uint GEN_THISCALL F_00517d10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x517d10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(int *)(in_ecx + 0xd4) + (uint)(ushort)param_2 * 4;
}

/* ref: FUN_00517d30 */
GEN_FRAME uint GEN_THISCALL F_00517d30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x517d30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)(ushort)param_2 * 0x10 + *(int *)(in_ecx + 0xdc);
}

/* ref: FUN_00517d50 */
GEN_FRAME uint GEN_THISCALL F_00517d50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x517d50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(int *)(in_ecx + 0xe0) + (uint)(ushort)param_2 * 0xc;
}

/* ref: FUN_00517d70 */
GEN_FRAME uint GEN_THISCALL F_00517d70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x517d70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(int *)(in_ecx + 0xe4) + (uint)(ushort)param_2 * 4;
}

/* ref: FUN_00517d90 */
GEN_FRAME uint GEN_THISCALL F_00517d90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x517d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return *((int *)GEN_TOP((*(int *)((int)this + 0xdc) + (uint)(ushort)param_1 * 0x10))) + 8 +
         *(int *)((int)this + 0xa8);
}

/* ref: FUN_00517db0 */
GEN_FRAME uint GEN_THISCALL F_00517db0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x517db0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x124) + (uint)(ushort)param_2 * 4)));
}

/* ref: FUN_00517dd0 */
GEN_FRAME uint GEN_THISCALL F_00517dd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x517dd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x10c + param_2 * 4);
}

/* ref: FUN_00517df0 */
GEN_FRAME uint GEN_THISCALL F_00517df0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x517df0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x118 + param_2 * 4);
}

/* ref: FUN_00517f20 */
GEN_FRAME byte GEN_THISCALL F_00517f20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x517f20u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx == param_2;
}

/* ref: FUN_00517f40 */
GEN_FRAME byte GEN_THISCALL F_00517f40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x517f40u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx != param_2;
}

/* ref: FUN_00517f60 */
GEN_FRAME uint GEN_THISCALL F_00517f60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x517f60u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0x28;
}

/* ref: FUN_00517f90 */
GEN_FRAME uint GEN_THISCALL F_00517f90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x517f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)this + param_1 * 0x1c;
}

/* ref: FUN_00517fb0 */
GEN_FRAME uint GEN_THISCALL F_00517fb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x517fb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)this + param_1 * 0x1c;
}

/* ref: FUN_00518040 */
GEN_FRAME uint GEN_THISCALL F_00518040(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x518040u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00518050 */
GEN_FRAME uint GEN_THISCALL F_00518050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x518050u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00518060 */
GEN_FRAME byte GEN_THISCALL F_00518060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x518060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00518080 */
GEN_FRAME byte GEN_THISCALL F_00518080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x518080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_005180d0 */
GEN_FRAME byte GEN_THISCALL F_005180d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5180d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_005180f0 */
GEN_FRAME byte GEN_THISCALL F_005180f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5180f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00518110 */
GEN_FRAME byte GEN_THISCALL F_00518110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x518110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00518130 */
GEN_FRAME byte GEN_THISCALL F_00518130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x518130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00518150 */
GEN_FRAME byte GEN_THISCALL F_00518150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x518150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00518180 */
GEN_FRAME byte GEN_THISCALL F_00518180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x518180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_005181a0 */
GEN_FRAME byte GEN_THISCALL F_005181a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5181a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_005181c0 */
GEN_FRAME byte GEN_THISCALL F_005181c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5181c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_005181e0 */
GEN_FRAME byte GEN_THISCALL F_005181e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5181e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00518220 */
GEN_FRAME uint GEN_THISCALL F_00518220(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x518220u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = REFG(float, 0x1087f04);
  fVar2 = ((float10)GEN_TOD(fsin((float10)param_2)));
  fVar3 = ((float10)GEN_TOD(fcos((float10)param_2)));
  param_1[1] = 0.0;
  *param_1 = (float)fVar3;
  param_1[4] = 0.0;
  param_1[5] = fVar1;
  param_1[6] = 0.0;
  param_1[9] = 0.0;
  param_1[2] = ((float)GEN_TOF(-(float10)(float)fVar2));
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[8] = (float)fVar2;
  param_1[0xe] = 0.0;
  param_1[10] = (float)fVar3;
  return (uint)param_1;
}

/* ref: FUN_005182a0 */
GEN_FRAME uint GEN_THISCALL F_005182a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5182a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x30) = *param_2;
  *(undefined4 *)(in_ecx + 0x34) = param_2[1];
  *(undefined4 *)(in_ecx + 0x38) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_005182d0 */
GEN_FRAME uint F_005182d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5182d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00518330 */
GEN_FRAME uint GEN_THISCALL F_00518330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x518330u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00518390 */
GEN_FRAME uint GEN_STDCALL F_00518390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x518390u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x12e);
  return uVar1;
}

/* ref: FUN_005183c0 */
GEN_FRAME uint GEN_STDCALL F_005183c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5183c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x12e);
  return (uint)uVar1;
}

/* ref: FUN_00518430 */
GEN_FRAME uint GEN_THISCALL F_00518430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x518430u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00518480 */
GEN_FRAME uint GEN_STDCALL F_00518480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x518480u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x1c,param_2,0xcb);
  return uVar1;
}

/* ref: FUN_005184c0 */
GEN_FRAME uint GEN_THISCALL F_005184c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5184c0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00518530 */
GEN_FRAME uint F_00518530(unsigned int gen_a0)
{
  GEN_ENTER(0x518530u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_00518540 */
GEN_FRAME uint F_00518540(unsigned int gen_a0)
{
  GEN_ENTER(0x518540u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00518550 */
GEN_FRAME uint F_00518550(unsigned int gen_a0)
{
  GEN_ENTER(0x518550u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00518560 */
GEN_FRAME uint F_00518560(unsigned int gen_a0)
{
  GEN_ENTER(0x518560u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00518570 */
GEN_FRAME uint F_00518570(unsigned int gen_a0)
{
  GEN_ENTER(0x518570u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00518580 */
GEN_FRAME uint F_00518580(unsigned int gen_a0)
{
  GEN_ENTER(0x518580u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00518590 */
GEN_FRAME uint F_00518590(unsigned int gen_a0)
{
  GEN_ENTER(0x518590u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x15)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x15);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_005185b0 */
GEN_FRAME uint F_005185b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5185b0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x15);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x15);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_005185f0 */
GEN_FRAME uint GEN_STDCALL F_005185f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5185f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,0x12e);
  return (uint)uVar1;
}

/* ref: FUN_00518630 */
GEN_FRAME uint GEN_THISCALL F_00518630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x518630u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00518690 */
GEN_FRAME uint GEN_STDCALL F_00518690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x518690u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x12e);
  return uVar1;
}

/* ref: FUN_005186c0 */
GEN_FRAME uint GEN_STDCALL F_005186c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5186c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x12e);
  return (uint)uVar1;
}

/* ref: FUN_00518710 */
GEN_FRAME uint GEN_THISCALL F_00518710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x518710u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00518760 */
GEN_FRAME uint F_00518760(unsigned int gen_a0)
{
  GEN_ENTER(0x518760u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_00518770 */
GEN_FRAME uint F_00518770(unsigned int gen_a0)
{
  GEN_ENTER(0x518770u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00518780 */
GEN_FRAME uint F_00518780(unsigned int gen_a0)
{
  GEN_ENTER(0x518780u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00518790 */
GEN_FRAME uint F_00518790(unsigned int gen_a0)
{
  GEN_ENTER(0x518790u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_005187a0 */
GEN_FRAME uint F_005187a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5187a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_005187b0 */
GEN_FRAME uint F_005187b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5187b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_005187c0 */
GEN_FRAME uint F_005187c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5187c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x15)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x15);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_005187e0 */
GEN_FRAME uint F_005187e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5187e0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x15);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x15);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00518820 */
GEN_FRAME uint GEN_STDCALL F_00518820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x518820u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_00518840 */
GEN_FRAME uint GEN_STDCALL F_00518840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x518840u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,0x12e);
  return (uint)uVar1;
}

/* ref: FUN_00518870 */
GEN_FRAME uint F_00518870(unsigned int gen_a0)
{
  GEN_ENTER(0x518870u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x20;
}

/* ref: FUN_00518880 */
GEN_FRAME uint F_00518880(unsigned int gen_a0)
{
  GEN_ENTER(0x518880u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x21;
}

/* ref: FUN_00518890 */
GEN_FRAME uint F_00518890(unsigned int gen_a0)
{
  GEN_ENTER(0x518890u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005188a0 */
GEN_FRAME uint F_005188a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5188a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_005188b0 */
GEN_FRAME uint F_005188b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5188b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_005188c0 */
GEN_FRAME uint F_005188c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5188c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

