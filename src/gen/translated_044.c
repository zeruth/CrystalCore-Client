#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00651390 */
uint F_00651390(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x651390u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  uVar1 = *((uint *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  *(uint *)(uVar1 + 0x3c) = REFG(undefined4, 0x1320770) & 0x7fffffff;
  *(uint *)(uVar1 + 0x50) = REFG(undefined4, 0x132077c) & 0x1f;
  *(uint *)(uVar1 + 0x38) = REFG(undefined4, 0x1320788) & 0x7ffffff;
  uVar2 = REFG(undefined4, 0x130236c) & 0xfffffffc;
  *(uint *)(uVar1 + 0x58) = REFG(undefined4, 0x1302368) & 0xfe000000;
  *(uint *)(uVar1 + 0x5c) = uVar2;
  puVar3 = *(undefined4 * PTR32 *)(in_ecx + 0x170);
  if (puVar3 != *(undefined4 * PTR32 *)(in_ecx + 0x174)) {
    do {
      uVar1 = F_00648f50(in_ecx,in_xmm2,in_xmm3,in_xmm7,param_5,*puVar3);
      puVar3 = puVar3 + 1;
    } while (puVar3 != *(undefined4 * PTR32 *)(in_ecx + 0x174));
  }
  return uVar1;
}

/* ref: FUN_00651420 */
uint F_00651420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x651420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  uVar1 = *((uint *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  *(uint *)(uVar1 + 0x3c) = REFG(undefined4, 0x1320770) & 0x7fffffff;
  *(uint *)(uVar1 + 0x50) = REFG(undefined4, 0x132077c) & 0x1f;
  *(uint *)(uVar1 + 0x38) = REFG(undefined4, 0x1320788) & 0x7ffffff;
  uVar2 = REFG(undefined4, 0x130236c) & 0xfffffffc;
  *(uint *)(uVar1 + 0x58) = REFG(undefined4, 0x1302368) & 0xfe000000;
  *(uint *)(uVar1 + 0x5c) = uVar2;
  puVar3 = *(undefined4 * PTR32 *)((int)this + 0x180);
  if (puVar3 != *(undefined4 * PTR32 *)((int)this + 0x184)) {
    do {
      uVar1 = F_00649e10(this,param_1,*puVar3);
      puVar3 = puVar3 + 1;
    } while (puVar3 != *(undefined4 * PTR32 *)((int)this + 0x184));
  }
  return uVar1;
}

/* ref: FUN_006514c0 */
uint F_006514c0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6514c0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  int * in_EAX = 0;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  int iVar6;
  undefined1 * puVar7;
  
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    if (*param_1 == 1) {
      in_EAX = (int *)(param_1[8] + 0x88);
      LOCK();
      iVar6 = *in_EAX;
      *in_EAX = *in_EAX;
      UNLOCK();
      if (iVar6 == 2) {
        in_EAX = (int *)(param_1[8] + 0x8c);
        LOCK();
        iVar6 = *in_EAX;
        *in_EAX = *in_EAX;
        UNLOCK();
        if (iVar6 < 8) {
          F_00624c30(param_1);
          uVar2 = F_006211a0(param_1);
          *(short *)(param_1 + 0xb) = (short)uVar2;
          if ((short)uVar2 != 0) {
            uVar3 = F_00406bb0((uVar2 & 0xffff) * 0x30,0,0);
            if (uVar3 == 0) {
              uVar3 = 0;
            }
            else {
              iVar6 = (uVar2 & 0xffff) - 1;
              if (-1 < iVar6) {
                puVar4 = (undefined4 *)(uVar3 + 8);
                do {
                  puVar4[-2] = 0;
                  puVar4[-1] = 0;
                  *puVar4 = 0;
                  puVar4[2] = 5;
                  puVar4[3] = 5;
                  puVar4[4] = 0;
                  puVar4[5] = 0;
                  *(undefined2 *)(puVar4 + 6) = 0;
                  puVar4 = puVar4 + 0xc;
                  iVar6 = iVar6 + -1;
                } while (-1 < iVar6);
              }
            }
            param_1[0xc] = uVar3;
            iVar6 = 0;
            uVar2 = 0;
            (*(uint *)(gen_frame + 0x1c)) = 0;
            if ((short)param_1[0xb] != 0) {
              (*(float *)(gen_frame + 0x18)) = 0.0;
              do {
                puVar7 = ((undefined1 *)(gen_frame + 0x0));
                uVar2 = F_00500600(param_1[8]);
                puVar4 = (undefined4 *)F_00b4e7c0(uVar2 + 0x48 + iVar6,(uint)puVar7);
                puVar5 = (undefined4 *)(param_1[0xc] + (int)gen_fl2bits((*(float *)(gen_frame + 0x18))));
                *(undefined2 *)(puVar5 + 8) = 0;
                puVar5[5] = 5;
                puVar5[4] = 5;
                puVar5[7] = 0;
                puVar5[6] = 0;
                *puVar5 = *puVar4;
                (*(float *)(gen_frame + 0x18)) = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x18))) + 0x30);
                puVar5[1] = puVar4[1];
                iVar6 = iVar6 + 0x40;
                puVar5[2] = puVar4[2];
                uVar2 = (*(uint *)(gen_frame + 0x1c)) + 1;
                (*(uint *)(gen_frame + 0x1c)) = uVar2;
              } while (uVar2 < *(ushort *)(param_1 + 0xb));
            }
          }
          param_1[1] = 0;
          *param_1 = 2;
          param_1[2] = param_1[2] & 0xfffffff7;
          return uVar2;
        }
      }
    }
    else {
      in_EAX = (int *)(*param_1 + -2);
      if (in_EAX == (int *)0x0) {
        if ((short)param_1[0xb] != 0) {
          iVar6 = 0;
          uVar2 = 0;
          do {
            F_00635a90(param_1[0xc] + iVar6,param_2);
            uVar2 = uVar2 + 1;
            iVar6 = iVar6 + 0x30;
          } while (uVar2 < *(ushort *)(param_1 + 0xb));
        }
        param_1[2] = param_1[2] | 4;
        in_EAX = (int *)((uint)param_1[2] >> 1);
        if (((uint)in_EAX & 1) == 0) {
          fVar1 = (float)(((float10)GEN_TOD(gen_bits2f(param_1[1]))) + (float10)param_2);
          (*(float *)(gen_frame + 0x18)) = fVar1;
          param_1[1] = (int)gen_fl2bits(fVar1);
          if ((float10)REFG(float, 0x13205dc) <= (float10)fVar1) {
            param_1[1] = (int)gen_fl2bits(REFG(float, 0x13205dc));
            param_1[2] = param_1[2] & 0xfffffffb;
          }
        }
        else {
          fVar1 = (float)(((float10)GEN_TOD(gen_bits2f(param_1[1]))) - (float10)param_2);
          (*(float *)(gen_frame + 0x18)) = fVar1;
          param_1[1] = (int)gen_fl2bits(fVar1);
          if (((!GEN_ISNAN((float10)0) && !GEN_ISNAN((float10)fVar1)) && !((float10)0 < (float10)fVar1)) ||
             (((uint)param_1[2] >> 3 & 1) != 0)) {
            param_1[1] = 0;
            param_1[2] = param_1[2] & 0xfffffffb;
            in_EAX = (int *)F_0064ad80(param_1);
          }
        }
        if ((*(byte *)((int)param_1 + 0xd) & 2) != 0) {
          fVar1 = (float)(((float10)GEN_TOD(gen_bits2f(param_1[6]))) + (float10)param_2);
          (*(float *)(gen_frame + 0x18)) = fVar1;
          param_1[6] = (int)gen_fl2bits(fVar1);
          if ((float10)REFG(float, 0x13205dc) <= (float10)fVar1) {
            param_1[6] = (int)gen_fl2bits(REFG(float, 0x13205dc));
            *(byte *)((int)param_1 + 0xd) = *(byte *)((int)param_1 + 0xd) & 0xfd;
            *(byte *)((int)param_1 + 0xd) = *(byte *)((int)param_1 + 0xd) | 4;
            param_1[7] = (int)gen_fl2bits(REFG(float, 0x13205dc));
          }
        }
        if ((*(byte *)((int)param_1 + 0xd) & 4) != 0) {
          fVar1 = (float)(((float10)GEN_TOD(gen_bits2f(param_1[7]))) - (float10)param_2);
          (*(float *)(gen_frame + 0x18)) = fVar1;
          param_1[7] = (int)gen_fl2bits(fVar1);
          if ((float10)fVar1 <= (float10)0) {
            param_1[7] = 0;
            *(byte *)((int)param_1 + 0xd) = *(byte *)((int)param_1 + 0xd) & 0xfb;
            param_1[2] = param_1[2] & 0xfffffff7;
            return (uint)in_EAX;
          }
        }
      }
    }
    param_1[2] = param_1[2] & 0xfffffff7;
  }
  return (uint)in_EAX;
}

/* ref: FUN_00651780 */
uint F_00651780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x651780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  uint uVar1;
  undefined4 * puVar2;
  char cVar3;
  undefined1 * puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  (*(uint *)(gen_frame + 0x118)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c);
  F_0064ad80(this);
  *(int *)((int)this + 0x28) = param_2;
  uVar1 = *(uint *)(param_2 + 0x10) & 0xff;
  cVar3 = 'h';
  if (uVar1 == 0) {
    cVar3 = 'h';
  }
  else if (uVar1 == 1) {
    cVar3 = 'm';
  }
  else if (uVar1 == 2) {
    cVar3 = 'l';
  }
  puVar2 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar2 = (undefined4 *)*param_1;
  }
  F_00c472af(((undefined1 *)(gen_frame + 0x14)),0x104,"%s%03d_%03d_%03d_%c.ggd",puVar2,(uint)*(byte *)(param_2 + 0x13),
             (uint)*(byte *)(param_2 + 0x12),(uint)*(byte *)(param_2 + 0x11),(int)cVar3);
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  puVar4 = ((undefined1 *)(gen_frame + 0x14));
  puVar2 = &(*(undefined4 *)(gen_frame + 0x10));
  (*(undefined4 *)(gen_frame + 0x10)) = 0x676764;
  uVar1 = F_004ff310(((undefined1 *)(gen_frame + 0xc)),2,0);
  uVar1 = F_00513d20(uVar1,puVar2,puVar4,uVar5,uVar6,uVar7);
  *(uint *)((int)this + 0x20) = uVar1;
  *(undefined4 *)this = 1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) | 5;
  F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
  return uVar1;
}

/* ref: FUN_00651870 */
unsigned int F_00651870(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x651870u, gen_a0, gen_a1, 0u, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  bool bVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  
  if (((*(byte *)(param_1 + 2) & 1) != 0) && (*param_1 == 2)) {
    if (((uint)param_1[2] >> 3 & 1) == 0) {
      F_0064ae00(param_1,param_3);
    }
    iVar4 = REFG(int, 0x137127c);
    dVar2 = (double)param_3;
    bVar1 = dVar2 <= *(double *)&REFG(undefined, 0x10ac2d0);
    bVar6 = (!GEN_ISNAN(*(double *)&REFG(undefined, 0x10ac2d0)) && !GEN_ISNAN(dVar2)) && !(*(double *)&REFG(undefined, 0x10ac2d0) < dVar2);
    bVar3 = bVar6;
    if ((short)param_1[0xb] != 0) {
      iVar7 = 0;
      uVar5 = 0;
      do {
        *(byte *)(iVar7 + 0x20 + param_1[0xc]) =
             *(byte *)(iVar7 + 0x20 + param_1[0xc]) & 0xfe | bVar6;
        uVar5 = uVar5 + 1;
        iVar7 = iVar7 + 0x30;
        bVar3 = bVar1;
      } while (uVar5 < *(ushort *)(param_1 + 0xb));
    }
    *(byte *)((int)param_1 + 0xd) = bVar3 | *(byte *)((int)param_1 + 0xd) & 0xfe;
    if (*(ushort *)(iVar4 + 0xff74) < 0x450) {
      *((int * PTR32 *)GEN_TOP((iVar4 + 0xee34 + (uint)*(ushort *)(iVar4 + 0xff74) * 4))) = param_1;
      *(short *)(iVar4 + 0xff74) = *(short *)(iVar4 + 0xff74) + 1;
    }
  }
  return 0;
}

/* ref: FUN_00651940 */
unsigned int F_00651940(unsigned int gen_a0)
{
  GEN_ENTER(0x651940u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = 0xff;
  fVar1 = F_00624ed0(param_1,*(int *)(REFG(int, 0x137127c) + 0x66f4) + 0x90);
  F_00651870(param_1,0,fVar1,uVar2,uVar3,uVar4);
  return 0;
}

/* ref: FUN_00651980 */
unsigned int F_00651980(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x651980u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  uint uVar2;
  
  *(uint *)((int)param_1 + 8) = *(uint *)((int)param_1 + 8) | 8;
  bVar1 = *(byte *)(REFG(int, 0x1371278) + 0x12);
  uVar2 = 0;
  if (bVar1 == 0xff) {
    uVar2 = F_0068bbb0(param_2);
  }
  else if (bVar1 < 3) {
    uVar2 = (uint)bVar1;
  }
  F_00635b60(param_1,uVar2);
  *(undefined4 *)((int)param_1 + 4) = REFG(float, 0x13205dc);
  return 0;
}

/* ref: FUN_006519d0 */
uint F_006519d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6519d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  float * pfVar1;
  ushort uVar2;
  int iVar3;
  byte bVar4;
  undefined * pvVar5;
  undefined4 * puVar6;
  uint uVar7;
  undefined4 uVar8;
  float fVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  ushort * puVar13;
  uint * puVar14;
  int iVar15;
  int * piVar16;
  int * piVar17;
  float * pfVar18;
  undefined * this_00;
  undefined4 * puVar19;
  float * pfVar20;
  bool bVar21;
  float10 fVar22;
  float10 fVar23;
  float fVar24;
  
  (*(uint *)(gen_frame + 0x1fc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x200);
  (*(undefined * PTR32 *)(gen_frame + 0x15c)) = this;
  (*(float * PTR32 *)(gen_frame + 0x158)) = (float *)REFG(undefined4, 0x13759f4);
  pvVar5 = (undefined *)F_0068bb90(REFG(undefined4, 0x13759f4),0);
  (*(undefined * PTR32 *)(gen_frame + 0xfc)) = pvVar5;
  iVar15 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  pvVar5 = *(undefined * PTR32 *)(iVar15 + 0x1a8);
  uVar7 = *(uint *)((int)pvVar5 + 8);
  *(uint *)((int)pvVar5 + 8) = uVar7 & 0xfe7fffff | 0x6000000;
  iVar11 = *((int *)GEN_TOP(((uVar7 >> 0x1b) * 0x358 + 0x2a4 + REFG(int, 0x137127c))));
  *(uint *)((int)pvVar5 + 0x38) = REFG(undefined4, 0x1302350) & 0x7ffffff;
  (*(undefined * PTR32 *)(gen_frame + 0xd0)) = pvVar5;
  *((float *)GEN_TOP((*(int *)(iVar15 + 0x1a8) + 0xa8 + (int)gen_fl2bits(REFG(int * PTR32, 0x13759f8)[1]) * 4))) =
       REFG(int * PTR32, 0x13759f8)[2];
  (*(int *)(gen_frame + 0x134)) = iVar15;
  uVar7 = *((uint *)GEN_TOP((*(int *)(iVar15 + 0x1a8) + 8)));
  iVar3 = *((int *)GEN_TOP(((uVar7 >> 0x1b) * 0x358 + ((uVar7 >> 0x17 & 0xf) + 1) * 0x34 + REFG(int, 0x137127c))));
  if (iVar3 != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(iVar15 + 0x1a8) + 0xa8 + (int)gen_fl2bits(REFG(int * PTR32, 0x13759f8)[0xb]) * 4))) =
         *(undefined4 *)(iVar3 + 0x120);
  }
  F_0063bbd0(REFG(undefined4, 0x13759f8),*((undefined4 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x15c)) + 0x1168) + 0xfc))));
  pfVar18 = (float *)(iVar11 + 0x10);
  (*(float * PTR32 *)(gen_frame + 0xf4)) = pfVar18;
  pfVar20 = ((float *)(gen_frame + 0x1a0));
  for (iVar15 = 0x10; iVar15 != 0; iVar15 = iVar15 + -1) {
    *pfVar20 = *pfVar18;
    pfVar18 = pfVar18 + 1;
    pfVar20 = pfVar20 + 1;
  }
  (*(float * PTR32 *)(gen_frame + 0x100)) = (*(float * PTR32 *)(gen_frame + 0x1b0));
  (*(float *)(gen_frame + 0x104)) = (*(float *)(gen_frame + 0x1b4));
  (*(float *)(gen_frame + 0x108)) = (*(float *)(gen_frame + 0x1b8));
  F_004bd580(&(*(float * PTR32 *)(gen_frame + 0x100)));
  pfVar18 = (float *)F_004d9920(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x15c)) + 0x1174),0,0x40,2);
  pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x15c));
  fVar22 = (float10)REFG(double, 0x1088108);
  if (pfVar18 != (float *)0x0) {
    *pfVar18 = ((float *)(gen_frame + 0x1a0))[0];
    pfVar18[1] = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x1b0)))));
    (*(float * PTR32 *)(gen_frame + 0xc0)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x100))))) * fVar22))));
    pfVar18[2] = (*(float *)(gen_frame + 0x1c0));
    pfVar18[3] = (*(float *)(gen_frame + 0x1d0));
    (*(float *)(gen_frame + 0xc4)) = (float)((float10)(*(float *)(gen_frame + 0x104)) * fVar22);
    pfVar18[4] = ((float *)(gen_frame + 0x1a0))[1];
    pfVar18[5] = (*(float *)(gen_frame + 0x1b4));
    (*(float *)(gen_frame + 0xc8)) = (float)((float10)(*(float *)(gen_frame + 0x108)) * fVar22);
    pfVar18[6] = (*(float *)(gen_frame + 0x1c4));
    pfVar18[7] = (*(float *)(gen_frame + 0x1d4));
    pfVar18[8] = ((float *)(gen_frame + 0x1a0))[2];
    pfVar20 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)(float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x100))))) * fVar22) + fVar22))))));
    (*(float * PTR32 *)(gen_frame + 0x100)) = pfVar20;
    pfVar18[9] = (*(float *)(gen_frame + 0x1b8));
    pfVar18[10] = (*(float *)(gen_frame + 0x1c8));
    fVar9 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x104)) * fVar22) + fVar22)));
    (*(float *)(gen_frame + 0x104)) = fVar9;
    pfVar18[0xb] = (*(float *)(gen_frame + 0x1d8));
    pfVar18[0xf] = 0.0;
    fVar12 = ((float)GEN_TOF((fVar22 + (float10)(float)((float10)(*(float *)(gen_frame + 0x108)) * fVar22))));
    (*(float *)(gen_frame + 0x108)) = fVar12;
    pfVar18[0xc] = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar20)));
    pfVar18[0xd] = fVar9;
    pfVar18[0xe] = fVar12;
    *((undefined4 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x15c)) + 0x1174) + 0x24))) = 0;
  }
  if ((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x15c)) + 0x1170) != -1) && (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x15c)) + 0x1174) != 0)) {
    *((int *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x134)) + 0x1a8) + 0xa8 + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x15c)) + 0x1170) * 4))) =
         *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x15c)) + 0x1174);
  }
  puVar6 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x15c)) + 0x117c),0,0x10,2);
  if (puVar6 != (undefined4 *)0x0) {
    pfVar18 = (float *)F_0068bb70((*(float * PTR32 *)(gen_frame + 0x158)));
    (*(float * PTR32 *)(gen_frame + 0xe0)) = ((float *)(uintptr_t)gen_fl2bits((float)(*pfVar18)));
    (*(float *)(gen_frame + 0xe4)) = pfVar18[1];
    (*(float *)(gen_frame + 0xe8)) = pfVar18[2];
    (*(float *)(gen_frame + 0xec)) = pfVar18[3];
    F_004eebf0(&(*(float * PTR32 *)(gen_frame + 0xe0)),(uint)(*(float * PTR32 *)(gen_frame + 0xf4)));
    fVar22 = (float10)REFG(double, 0x10944b8);
    (*(float *)(gen_frame + 0x10c)) = (*(float *)(gen_frame + 0xec));
    pfVar18 = ((float *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xe0))))) * fVar22))));
    (*(float * PTR32 *)(gen_frame + 0xe0)) = pfVar18;
    fVar9 = (float)((float10)(*(float *)(gen_frame + 0xe4)) * fVar22);
    (*(float *)(gen_frame + 0xe4)) = fVar9;
    fVar12 = (float)(fVar22 * (float10)(*(float *)(gen_frame + 0xe8)));
    (*(float *)(gen_frame + 0xe8)) = fVar12;
    (*(float * PTR32 *)(gen_frame + 0x100)) = pfVar18;
    *puVar6 = pfVar18;
    (*(float *)(gen_frame + 0x104)) = fVar9;
    puVar6[1] = (undefined4)gen_fl2bits(fVar9);
    (*(float *)(gen_frame + 0x108)) = fVar12;
    puVar6[2] = (undefined4)gen_fl2bits(fVar12);
    puVar6[3] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xec)));
    *((undefined4 *)GEN_TOP((*(int *)((int)pvVar5 + 0x117c) + 0x24))) = 0;
  }
  this_00 = (*(undefined * PTR32 *)(gen_frame + 0xd0));
  if ((*(int *)((int)pvVar5 + 0x1178) != -1) && (*(int *)((int)pvVar5 + 0x117c) != 0)) {
    *((int *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x134)) + 0x1a8) + 0xa8 + *(int *)((int)pvVar5 + 0x1178) * 4))) =
         *(int *)((int)pvVar5 + 0x117c);
  }
  uVar7 = REFG(undefined4, 0x1302370);
  if ((*(byte *)((int)pvVar5 + 0x1148) & 1) != 0) {
    uVar7 = REFG(undefined4, 0x1302370) & 0xfffffffe | 2;
  }
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0xd0)) + 0x3c) = uVar7 & 0x7ffffffb;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xd0)) + 0x4c) = *(undefined4 *)((int)pvVar5 + 0x1164);
  pfVar18 = REFG(undefined4, 0x13759f8);
  iVar15 = *(int *)((*(int *)(gen_frame + 0x134)) + 0x1a8);
  (*(float * PTR32 *)(gen_frame + 0x158)) = REFG(undefined4, 0x13759f8);
  if ((*(uint *)(iVar15 + 8) & 0xf8000000) == 0xf0000000) {
    *((uint *)GEN_TOP((iVar15 + 0x2ac + (int)gen_fl2bits(REFG(int * PTR32, 0x13759f8)[0xd]) * 8))) =
         (uint)gen_fl2bits(REFG(int * PTR32, 0x13759f8)[0x18]) & 0xfffffff;
  }
  uVar7 = *((uint *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x134)) + 0x1a8) + 8))) >> 0x1b;
  if (uVar7 < 0x1a) {
LAB_00651e33: ;
    uVar8 = 0;
  }
  else if (uVar7 < 0x1e) {
    uVar8 = *(undefined4 *)(REFG(int, 0x1371288) + 0xdc);
  }
  else {
    if (uVar7 != 0x1e) goto LAB_00651e33;
    uVar8 = *(undefined4 *)(REFG(int, 0x1371288) + 0x10);
  }
  *(undefined4 *)(iVar15 + 0x2a8 + (int)gen_fl2bits(pfVar18[0xd]) * 8) = uVar8;
  pfVar18 = REFG(undefined4, 0x13759f8);
  iVar15 = *(int *)((*(int *)(gen_frame + 0x134)) + 0x1a8);
  if ((*(uint *)(iVar15 + 8) & 0xf8000000) == 0xf0000000) {
    *((uint *)GEN_TOP((iVar15 + 0x2ac + (int)gen_fl2bits(REFG(int * PTR32, 0x13759f8)[0xe]) * 8))) =
         (uint)gen_fl2bits(REFG(int * PTR32, 0x13759f8)[0x19]) & 0xfffffff;
    *(uint *)(iVar15 + 0x2ac + (int)gen_fl2bits(pfVar18[0xf]) * 8) =
         (uint)gen_fl2bits(pfVar18[0x18]) & 0xfffffff;
  }
  uVar7 = *((uint *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x134)) + 0x1a8) + 8))) >> 0x1b;
  if (uVar7 < 0x1a) {
LAB_00651ec4: ;
    uVar8 = 0;
  }
  else if (uVar7 < 0x1e) {
    uVar8 = *(undefined4 *)((int)gen_fl2bits(pfVar18[0xa3]) + 0xfc);
  }
  else {
    if (uVar7 != 0x1e) goto LAB_00651ec4;
    uVar8 = *(undefined4 *)(REFG(int, 0x1371288) + 0x14);
  }
  *(undefined4 *)(iVar15 + 0x2a8 + (int)gen_fl2bits(pfVar18[0xe]) * 8) = uVar8;
  uVar7 = *((uint *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x134)) + 0x1a8) + 8))) >> 0x1b;
  if (0x19 < uVar7) {
    if (uVar7 < 0x1e) {
      uVar8 = *(undefined4 *)((int)gen_fl2bits(pfVar18[0xa3]) + 0xfc);
      goto LAB_00651f0c;
    }
    if (uVar7 == 0x1e) {
      uVar8 = *(undefined4 *)(REFG(int, 0x1371288) + 0x18);
      goto LAB_00651f0c;
    }
  }
  uVar8 = 0;
LAB_00651f0c: ;
  *(undefined4 *)(iVar15 + 0x2a8 + (int)gen_fl2bits(pfVar18[0xf]) * 8) = uVar8;
  (*(undefined * PTR32 *)(gen_frame + 0x1e8)) = (undefined *)0x0;
  (*(int *)(gen_frame + 0x1ec)) = 0;
  (*(undefined4 *)(gen_frame + 0x1f0)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1e4)) = (*(undefined * PTR32 (*)[1])REFP(0x10abb24));
  if (*(int *)(REFG(int, 0x137127c) + 0xabc4) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *((undefined4 *)GEN_TOP((*(int *)(REFG(int, 0x137127c) + 0xabc4) + 0x98)));
  }
  F_00b52c10(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1e4)),uVar8);
  pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x15c));
  if ((*(undefined * PTR32 *)(gen_frame + 0x1e8)) != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x1f4)) = *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x15c)) + 0x1200);
    (*(undefined4 *)(gen_frame + 0x1f8)) = *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x15c)) + 0x1204);
  }
  F_00627260(REFG(undefined4, 0x13759f8) + 0x1c);
  F_00627330(REFG(undefined4, 0x13759f8) + 0x1c,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1e4)),1,0);
  F_00667bd0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1e4)),(int)pvVar5 + 0x11b4);
  F_00667bd0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1e4)),(int)pvVar5 + 0x11f0);
  (*(uint *)(gen_frame + 0xa8)) = (uint)*(ushort *)((int)pvVar5 + 0x1144);
  (*(uint *)(gen_frame + 0xd4)) = 0;
  if (*(ushort *)((int)pvVar5 + 0x1144) != 0) {
    do {
      piVar17 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x15c)) + (*(uint *)(gen_frame + 0xd4)) * 4 + 4);
      (*(int * PTR32 *)(gen_frame + 0x124)) = piVar17;
      if (((*(byte *)(piVar17 + 2) & 1) != 0) && (*piVar17 == 2)) {
        bVar4 = F_00624e40(piVar17);
        if (bVar4 != 0) {
          fVar22 = (float10)REFG(float, 0x13205dc);
          ((int *)(gen_frame + 0x9c))[0] = piVar17[4];
          ((int *)(gen_frame + 0x9c))[1] = piVar17[5];
          (*(ushort * PTR32 *)(gen_frame + 0x140)) = (ushort *)0x0;
          ((float *)(gen_frame + 0x8))[0] = (float)(((float10)GEN_TOD(gen_bits2f(piVar17[6]))) / fVar22);
          ((float *)(gen_frame + 0x8))[1] = (float)(((float10)GEN_TOD(gen_bits2f(piVar17[7]))) / fVar22);
          pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x15c));
          do {
            if (*(int *)((int)((int *)(gen_frame + 0x9c)) + (int)(*(ushort * PTR32 *)(gen_frame + 0x140))) != 5) {
              (*(float *)(gen_frame + 0xc4)) = *(float *)((int)pvVar5 + 0x1218);
              (*(float *)(gen_frame + 0xc8)) = *(float *)((int)pvVar5 + 0x121c);
              (*(byte *)(gen_frame + 0x157)) = *(byte *)((int)((int *)(gen_frame + 0x9c)) + (int)(*(ushort * PTR32 *)(gen_frame + 0x140)));
              (*(float * PTR32 *)(gen_frame + 0xc0)) = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
              (*(undefined4 *)(gen_frame + 0xcc)) = 0;
              (*(float * PTR32 *)(gen_frame + 0x158)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)(((float10)GEN_TOD(gen_bits2f((*(int * PTR32 *)(gen_frame + 0x124))[1]))) / fVar22))));
              pfVar18 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)(float)(((float10)GEN_TOD(gen_bits2f((*(int * PTR32 *)(gen_frame + 0x124))[1]))) / fVar22)
                                        * (float10)*(float *)((int)((float *)(gen_frame + 0x8)) + (int)(*(ushort * PTR32 *)(gen_frame + 0x140)))))))));
              (*(float * PTR32 *)(gen_frame + 0x14c)) = pfVar18;
              bVar21 = GEN_ISNAN((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar18)))) || GEN_ISNAN((float10)0);
              if (bVar21 == (bVar21 || (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar18))) == (float10)0)) {
                if (((GEN_ISNAN((float)REFG(float, 0x1087f04)) || GEN_ISNAN(((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar18))))) ||
                     (float)REFG(float, 0x1087f04) <= ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar18)))) &&
                   (*(char *)((int)(*(int * PTR32 *)(gen_frame + 0x124)) + 0xd) == '\0' && ((uint)(*(int * PTR32 *)(gen_frame + 0x124))[2] >> 2 & 1) == 0)) {
                  iVar15 = (int)pvVar5 + 0x11c0;
                }
                else {
                  (*(float * PTR32 *)(gen_frame + 0xc0)) = pfVar18;
                  iVar15 = (int)pvVar5 + 0x11cc;
                }
                F_00667bd0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1e4)),iVar15);
                puVar6 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)pvVar5 + 0x1184),0,0x10,2);
                if (puVar6 != (undefined4 *)0x0) {
                  *puVar6 = (*(float * PTR32 *)(gen_frame + 0xc0));
                  puVar6[1] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc4)));
                  puVar6[2] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc8)));
                  puVar6[3] = (*(undefined4 *)(gen_frame + 0xcc));
                  *((undefined4 *)GEN_TOP((*(int *)((int)pvVar5 + 0x1184) + 0x24))) = 0;
                }
                if ((*(int *)((int)pvVar5 + 0x1180) != -1) && (*(int *)((int)pvVar5 + 0x1184) != 0))
                {
                  *((int *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x134)) + 0x1a8) + 0xa8 + *(int *)((int)pvVar5 + 0x1180) * 4))) =
                       *(int *)((int)pvVar5 + 0x1184);
                }
                pfVar18 = (float *)F_004d9920(*(undefined * PTR32 *)((int)pvVar5 + 0x118c),0,0xc,2);
                if (pfVar18 != (float *)0x0) {
                  pfVar20 = (float *)(*(int * PTR32 *)(gen_frame + 0x124))[10];
                  fVar9 = REFG(float, 0x1375ac0);
                  fVar12 = REFG(float, 0x1375ac4);
                  fVar24 = REFG(float, 0x1375ac8);
                  if (pfVar20 != (float *)0x0) {
                    fVar9 = *pfVar20;
                    fVar12 = pfVar20[1];
                    fVar24 = pfVar20[2];
                  }
                  (*(float *)(gen_frame + 0xb0)) = fVar9;
                  *pfVar18 = fVar9;
                  (*(float *)(gen_frame + 0xb4)) = fVar12;
                  (*(float *)(gen_frame + 0xb8)) = fVar24;
                  pfVar18[1] = fVar12;
                  pfVar18[2] = fVar24;
                  *((undefined4 *)GEN_TOP((*(int *)((int)pvVar5 + 0x118c) + 0x24))) = 0;
                }
                if ((*(int *)((int)pvVar5 + 0x1188) != -1) && (*(int *)((int)pvVar5 + 0x118c) != 0))
                {
                  *((int *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x134)) + 0x1a8) + 0xa8 + *(int *)((int)pvVar5 + 0x1188) * 4))) =
                       *(int *)((int)pvVar5 + 0x118c);
                }
                if ((*(undefined * PTR32 *)(gen_frame + 0x1e8)) == (undefined *)0x0) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = F_00b52db0((*(undefined * PTR32 *)(gen_frame + 0x1e8)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1e4)));
                }
                *(uint *)((int)this_00 + 0x60) = uVar7;
                fVar9 = gen_bits2f(F_0068ba50((*(undefined * PTR32 *)(gen_frame + 0xfc))));
                (*(float *)(gen_frame + 0x11c)) = fVar9;
                (*(float *)(gen_frame + 0x138)) = 0.0;
                if (fVar9 != 0.0) {
                  do {
                    puVar6 = (undefined4 *)
                             F_00500710((*(int * PTR32 *)(gen_frame + 0x124))[8],(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x138))));
                    (*(undefined4 * PTR32 *)(gen_frame + 0x12c)) = puVar6;
                    (*(float * PTR32 *)(gen_frame + 0x128)) = (float *)*puVar6;
                    if ((float *)*puVar6 != (float *)0x0) {
                      uVar7 = F_0068ba60((*(undefined * PTR32 *)(gen_frame + 0xfc)),(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x138))));
                      (*(uint *)(gen_frame + 0x120)) = uVar7;
                      if (uVar7 != 0) {
                        (*(float * PTR32 *)(gen_frame + 0x158)) = (float *)(*(undefined4 * PTR32 *)(gen_frame + 0x12c))[1];
                        uVar10 = F_004d9920(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x15c)) + 0x120c),0,
                                              (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x128))) << 6,2);
                        if (uVar10 != 0) {
                          if ((*(float * PTR32 *)(gen_frame + 0x128)) != (float *)0x0) {
                            (*(float * PTR32 *)(gen_frame + 0x144)) = (*(float * PTR32 *)(gen_frame + 0x158));
                            (*(float * PTR32 *)(gen_frame + 0x14c)) = (float *)(uVar10 + 0x38);
                            (*(float * PTR32 *)(gen_frame + 0x150)) = (*(float * PTR32 *)(gen_frame + 0x128));
                            do {
                              pfVar18 = (*(float * PTR32 *)(gen_frame + 0xf4));
                              pfVar20 = ((float *)(gen_frame + 0x160));
                              for (iVar15 = 0x10; iVar15 != 0; iVar15 = iVar15 + -1) {
                                *pfVar20 = *pfVar18;
                                pfVar18 = pfVar18 + 1;
                                pfVar20 = pfVar20 + 1;
                              }
                              F_004ef5a0((uint)((float *)(gen_frame + 0x160)),(uint)(*(float * PTR32 *)(gen_frame + 0x144)),(uint)(*(float * PTR32 *)(gen_frame + 0xf4)));
                              pfVar20 = (*(float * PTR32 *)(gen_frame + 0x14c));
                              fVar9 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x178)) * (float10)(*(float *)(gen_frame + 0x178)) +
                                             ((float10)(*(float *)(gen_frame + 0x170)) * (float10)(*(float *)(gen_frame + 0x170)) +
                                             (float10)(*(float *)(gen_frame + 0x174)) * (float10)(*(float *)(gen_frame + 0x174))))));
                              (*(float * PTR32 *)(gen_frame + 0x158)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar9)));
                              fVar9 = ((float)GEN_TOF(SQRT((float10)fVar9)));
                              (*(float * PTR32 *)(gen_frame + 0x158)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar9)));
                              (*(float * PTR32 *)(gen_frame + 0x14c))[-0xe] = ((float *)(gen_frame + 0x160))[0];
                              (*(float * PTR32 *)(gen_frame + 0x14c))[-0xd] = (*(float *)(gen_frame + 0x170));
                              (*(float * PTR32 *)(gen_frame + 0x14c))[-0xc] = (*(float *)(gen_frame + 0x180));
                              (*(float * PTR32 *)(gen_frame + 0x14c))[-0xb] = (*(float *)(gen_frame + 0x190));
                              (*(float * PTR32 *)(gen_frame + 0x14c))[-10] = ((float *)(gen_frame + 0x160))[1];
                              (*(float * PTR32 *)(gen_frame + 0x14c))[-9] = (*(float *)(gen_frame + 0x174));
                              (*(float * PTR32 *)(gen_frame + 0x14c))[-8] = (*(float *)(gen_frame + 0x184));
                              (*(float * PTR32 *)(gen_frame + 0x14c))[-7] = (*(float *)(gen_frame + 0x194));
                              (*(float * PTR32 *)(gen_frame + 0x14c))[-6] = ((float *)(gen_frame + 0x160))[2];
                              (*(float * PTR32 *)(gen_frame + 0x14c))[-5] = (*(float *)(gen_frame + 0x178));
                              (*(float * PTR32 *)(gen_frame + 0x14c))[-4] = (*(float *)(gen_frame + 0x188));
                              (*(float * PTR32 *)(gen_frame + 0x14c))[-3] = (*(float *)(gen_frame + 0x198));
                              pfVar18 = ((float *)(uintptr_t)gen_fl2bits((float)((float)((float10)1 / (float10)fVar9))));
                              (*(float * PTR32 *)(gen_frame + 0x158)) = pfVar18;
                              fVar22 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar18)));
                              (*(float *)(gen_frame + 0x70)) = (float)(fVar22 * (float10)(*(float *)(gen_frame + 0x170)));
                              (*(float *)(gen_frame + 0x74)) = (float)(fVar22 * (float10)(*(float *)(gen_frame + 0x174)));
                              (*(float *)(gen_frame + 0x78)) = (float)(fVar22 * (float10)(*(float *)(gen_frame + 0x178)));
                              fVar23 = (float10)REFG(double, 0x1088108);
                              fVar9 = ((float)GEN_TOF(((float10)(float)(fVar22 * (float10)(*(float *)(gen_frame + 0x170))) * fVar23)))
                              ;
                              ((float *)(gen_frame + 0x28))[2] = fVar9;
                              fVar12 = ((float)GEN_TOF(((float10)(float)(fVar22 * (float10)(*(float *)(gen_frame + 0x174))) * fVar23
                                              )));
                              ((float *)(gen_frame + 0x28))[3] = fVar12;
                              fVar24 = ((float)GEN_TOF(((float10)(float)(fVar22 * (float10)(*(float *)(gen_frame + 0x178))) * fVar23
                                              )));
                              (*(float *)(gen_frame + 0x38)) = fVar24;
                              fVar9 = (float)((float10)fVar9 + fVar23);
                              (*(float *)(gen_frame + 0x50)) = fVar9;
                              fVar12 = (float)((float10)fVar12 + fVar23);
                              (*(float *)(gen_frame + 0x54)) = fVar12;
                              (*(float * PTR32 *)(gen_frame + 0x144)) = (*(float * PTR32 *)(gen_frame + 0x144)) + 0x10;
                              (*(float * PTR32 *)(gen_frame + 0x14c))[1] = 0.0;
                              pfVar18 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x150)) + -1);
                              (*(float * PTR32 *)(gen_frame + 0x150)) = pfVar18;
                              fVar24 = (float)(fVar23 + (float10)fVar24);
                              (*(float *)(gen_frame + 0x58)) = fVar24;
                              (*(float * PTR32 *)(gen_frame + 0x14c)) = (*(float * PTR32 *)(gen_frame + 0x14c)) + 0x10;
                              pfVar20[-2] = fVar9;
                              pfVar20[-1] = fVar12;
                              *pfVar20 = fVar24;
                              this_00 = (*(undefined * PTR32 *)(gen_frame + 0xd0));
                              uVar7 = (*(uint *)(gen_frame + 0x120));
                            } while (pfVar18 != (float *)0x0);
                          }
                          *((undefined4 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x15c)) + 0x120c) + 0x24))) = 0;
                        }
                        if ((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x15c)) + 0x1208) != -1) &&
                           (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x15c)) + 0x120c) != 0)) {
                          *((int *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x134)) + 0x1a8) + 0xa8 +
                                  *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x15c)) + 0x1208) * 4))) =
                               *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x15c)) + 0x120c);
                        }
                        uVar10 = (uint)(*(byte *)(gen_frame + 0x157));
                        iVar15 = *(int *)(uVar7 + 0x118 + uVar10 * 4);
                        if (iVar15 != 0) {
                          *(int *)((int)this_00 + 0x48) = iVar15;
                          *((undefined4 *)GEN_TOP(((int)this_00 + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x15c)) + 0x1210) * 4 + 0xa8))) =
                               (*(undefined4 * PTR32 *)(gen_frame + 0x12c))[2];
                          (*(undefined4 * PTR32 *)(gen_frame + 0x12c)) = (undefined4 *)
                                     (uint)*((ushort *)GEN_TOP((*(int *)(uVar7 + 0xb8) + uVar10 * 0x3c)));
                          puVar6 = ((undefined4 *)GEN_TOP(((uint)*((ushort *)GEN_TOP((*(int *)(uVar7 + 0xb8) + uVar10 * 0x3c + 2))) +
                                   (int)(*(undefined4 * PTR32 *)(gen_frame + 0x12c)))));
                          (*(undefined4 * PTR32 *)(gen_frame + 0xdc)) = puVar6;
                          if ((*(undefined4 * PTR32 *)(gen_frame + 0x12c)) < puVar6) {
                            do {
                              (*(ushort * PTR32 *)(gen_frame + 0x148)) = ((ushort *)GEN_TOP((*(int *)(uVar7 + 0xbc) + ((uint)(*(undefined4 * PTR32 *)(gen_frame + 0x12c)) & 0xffff) * 0x24)))
                              ;
                              uVar10 = F_0068ba80((*(undefined * PTR32 *)(gen_frame + 0xfc)),(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x138))),
                                                    (*(undefined4 * PTR32 *)(gen_frame + 0x12c)));
                              *(uint *)((int)this_00 + 0x4c) = uVar10;
                              iVar15 = *((int *)GEN_TOP((*(int *)(uVar7 + 0x124) + (uint)(*(ushort * PTR32 *)(gen_frame + 0x148))[4] * 4)));
                              if (iVar15 != 0) {
                                iVar11 = 0;
                                if (*(char *)(iVar15 + 0xba) != '\0') {
                                  for (piVar17 = *(int * PTR32 *)(iVar15 + 0xa8); iVar11 = *piVar17,
                                      iVar11 == 0; piVar17 = piVar17 + 2) {
                                  }
                                }
                                *((uint *)GEN_TOP(((int)this_00 +
                                         *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x15c)) + 0x116c) * 8 + 0x2ac))) =
                                     REFG(undefined4, 0x1302378) & 0xfffffff;
                                *((undefined4 *)GEN_TOP(((int)this_00 + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x15c)) + 0x116c) * 8 + 0x2a8))) =
                                     *(undefined4 *)(iVar11 + 0xfc);
                                uVar7 = *(byte *)((int)(*(ushort * PTR32 *)(gen_frame + 0x148)) + 0x23) & 3;
                                (*(undefined4 * PTR32 *)(gen_frame + 0x130)) = (undefined4 *)uVar7;
                                (*(float * PTR32 *)(gen_frame + 0x14c)) = (float *)0x0;
                                if ((*(byte *)((int)(*(ushort * PTR32 *)(gen_frame + 0x148)) + 0x23) & 3) != 0) {
                                  puVar14 = (uint *)((int)this_00 + 0x6c);
                                  (*(float * PTR32 *)(gen_frame + 0x144)) = (float *)((*(ushort * PTR32 *)(gen_frame + 0x148)) + 10);
                                  do {
                                    iVar15 = (int)gen_fl2bits(*(*(float * PTR32 *)(gen_frame + 0x144)));
                                    bVar4 = *(byte *)((int)(*(ushort * PTR32 *)(gen_frame + 0x148)) + (int)(*(float * PTR32 *)(gen_frame + 0x14c)) + 0x20U);
                                    (*(float * PTR32 *)(gen_frame + 0x144)) = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x144)) + 4);
                                    (*(float * PTR32 *)(gen_frame + 0x158)) = (float *)(uint)bVar4;
                                    puVar14[-1] = *(uint *)((*(uint *)(gen_frame + 0x120)) + 0x10c + (uint)(*(byte *)(gen_frame + 0x157)) * 4);
                                    *puVar14 = *puVar14 ^ (iVar15 << 8 ^ *puVar14) & 0x7fffff00;
                                    *(byte *)puVar14 = bVar4;
                                    *puVar14 = *puVar14 & 0x7fffffff;
                                    uVar10 = (int)(*(float * PTR32 *)(gen_frame + 0x14c)) + 1;
                                    puVar14 = puVar14 + 2;
                                    (*(float * PTR32 *)(gen_frame + 0x14c)) = (float *)uVar10;
                                  } while (uVar10 < uVar7);
                                }
                                uVar8 = *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x15c)) + 0x1214);
                                *(uint *)((int)this_00 + 0x7c) =
                                     *(uint *)((int)this_00 + 0x7c) & 0x800000ff;
                                *(undefined1 *)((int)this_00 + 0x7c) = 4;
                                *(uint *)((int)this_00 + 0x7c) =
                                     *(uint *)((int)this_00 + 0x7c) | 0x80000000;
                                *(undefined4 *)((int)this_00 + 0x78) = uVar8;
                                *(uint *)((int)this_00 + 0x50) = REFG(undefined4, 0x1302360) & 0x1f;
                                *(uint *)((int)this_00 + 8) =
                                     *(uint *)((int)this_00 + 8) & 0xff910000 |
                                     (uint)gen_fl2bits((*(float *)(gen_frame + 0x138))) & 0xffff | 0x110000;
                                uVar7 = REFG(undefined4, 0x1302368);
                                *(uint *)((int)this_00 + 0x5c) = REFG(undefined4, 0x130236c) & 0xfffffffc;
                                *(uint *)((int)this_00 + 0x58) = uVar7 & 0xfe000000;
                                iVar15 = REFG(int, 0x1370b90);
                                pfVar18 = *(float * PTR32 *)((*(ushort * PTR32 *)(gen_frame + 0x148)) + 2);
                                uVar8 = *(undefined4 *)((*(ushort * PTR32 *)(gen_frame + 0x148)) + 8);
                                (*(float * PTR32 *)(gen_frame + 0x144)) = pfVar18;
                                uVar2 = *(*(ushort * PTR32 *)(gen_frame + 0x148));
                                (*(undefined4 * PTR32 *)(gen_frame + 0x130)) = (undefined4 *)(uint)uVar2;
                                (*(float * PTR32 *)(gen_frame + 0x14c)) = (float *)uVar8;
                                uVar7 = *(int *)((int)this_00 + 0x18) + 0x60;
                                if (uVar7 < 0x8001) {
                                  puVar6 = ((undefined4 *)GEN_TOP((*(int *)((int)this_00 + 0xc) +
                                           *(int *)((int)this_00 + 0x18))));
                                  *(uint *)((int)this_00 + 0x18) = uVar7;
LAB_006527f0: ;
                                  if (puVar6 != (undefined4 *)0x0) {
                                    *puVar6 = 6;
                                    puVar6[2] = 0;
                                    puVar6[3] = 0;
                                    puVar6[5] = uVar8;
                                    puVar6[4] = (uint)uVar2;
                                    puVar6[6] = pfVar18;
                                    puVar6[1] = 5;
                                    puVar6[7] = (*(float * PTR32 *)(gen_frame + 0x128));
                                    bVar4 = F_004dc830(this_00,puVar6 + 8);
                                    if (bVar4 != 0) {
                                      F_004d4810(this_00,puVar6);
                                    }
                                  }
                                }
                                else {
                                  pfVar20 = (float *)(REFG(int, 0x1370b90) + 0xc0);
                                  (*(float * PTR32 *)(gen_frame + 0x150)) = pfVar20;
                                  LOCK();
                                  pfVar1 = ((float *)(uintptr_t)gen_fl2bits((float)(*pfVar20)));
                                  *pfVar20 = gen_bits2f((int)gen_fl2bits(*pfVar20) + 0x8000);
                                  UNLOCK();
                                  (*(float * PTR32 *)(gen_frame + 0x158)) = pfVar1;
                                  if (*(uint *)(iVar15 + 0xb8) <
                                      (uint)(*(int *)(iVar15 + 0xc4) * 3 +
                                            (int)gen_fl2bits(*pfVar20))) {
                                    LOCK();
                                    *pfVar20 = gen_bits2f((int)gen_fl2bits(*pfVar20) + -0x8000);
                                    UNLOCK();
                                  }
                                  else {
                                    puVar6 = ((undefined4 *)GEN_TOP((*(int *)(iVar15 + 0xbc) + (int)pfVar1)));
                                    if (puVar6 != (undefined4 *)0x0) {
                                      *(undefined4 * PTR32 *)((int)this_00 + 0xc) = puVar6;
                                      *(undefined4 *)((int)this_00 + 0x18) = 0x60;
                                      goto LAB_006527f0;
                                    }
                                  }
                                }
                                *(uint *)((int)this_00 + 0x50) = REFG(undefined4, 0x1302364) & 0x1f;
                                *(uint *)((int)this_00 + 8) =
                                     *(uint *)((int)this_00 + 8) & 0xffb40000 |
                                     (uint)gen_fl2bits((*(float *)(gen_frame + 0x138))) & 0x3ffff | 0x340000;
                                uVar7 = REFG(undefined4, 0x1302368) & 0xfe000000;
                                *(uint *)((int)this_00 + 0x5c) = REFG(undefined4, 0x130236c) & 0xfffffffc;
                                *(uint *)((int)this_00 + 0x58) = uVar7;
                                iVar15 = REFG(int, 0x1370b90);
                                pfVar18 = *(float * PTR32 *)((*(ushort * PTR32 *)(gen_frame + 0x148)) + 2);
                                puVar6 = *(undefined4 * PTR32 *)((*(ushort * PTR32 *)(gen_frame + 0x148)) + 8);
                                (*(float * PTR32 *)(gen_frame + 0x14c)) = pfVar18;
                                uVar2 = *(*(ushort * PTR32 *)(gen_frame + 0x148));
                                (*(undefined4 * PTR32 *)(gen_frame + 0x130)) = puVar6;
                                uVar7 = *(int *)((int)this_00 + 0x18) + 0x60;
                                (*(float * PTR32 *)(gen_frame + 0x158)) = (float *)(uint)uVar2;
                                if (uVar7 < 0x8001) {
                                  puVar19 = ((undefined4 *)GEN_TOP((*(int *)((int)this_00 + 0xc) +
                                            *(int *)((int)this_00 + 0x18))));
                                  *(uint *)((int)this_00 + 0x18) = uVar7;
LAB_0065290c: ;
                                  if (puVar19 != (undefined4 *)0x0) {
                                    *puVar19 = 6;
                                    puVar19[4] = (float *)(uint)uVar2;
                                    puVar19[5] = puVar6;
                                    puVar19[2] = 0;
                                    puVar19[3] = 0;
                                    puVar19[7] = (*(float * PTR32 *)(gen_frame + 0x128));
                                    puVar19[1] = 5;
                                    puVar19[6] = pfVar18;
                                    bVar4 = F_004dc830(this_00,puVar19 + 8);
                                    if (bVar4 != 0) {
                                      F_004d4810(this_00,puVar19);
                                    }
                                  }
                                }
                                else {
                                  piVar17 = (int *)(REFG(int, 0x1370b90) + 0xc0);
                                  LOCK();
                                  iVar11 = *piVar17;
                                  *piVar17 = *piVar17 + 0x8000;
                                  UNLOCK();
                                  if (*(uint *)(iVar15 + 0xb8) <
                                      (uint)(*(int *)(iVar15 + 0xc4) * 3 + *piVar17)) {
                                    LOCK();
                                    *piVar17 = *piVar17 + -0x8000;
                                    UNLOCK();
                                  }
                                  else {
                                    puVar19 = ((undefined4 *)GEN_TOP((*(int *)(iVar15 + 0xbc) + iVar11)));
                                    if (puVar19 != (undefined4 *)0x0) {
                                      *(undefined4 * PTR32 *)((int)this_00 + 0xc) = puVar19;
                                      *(undefined4 *)((int)this_00 + 0x18) = 0x60;
                                      goto LAB_0065290c;
                                    }
                                  }
                                }
                              }
                              (*(undefined4 * PTR32 *)(gen_frame + 0x12c)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x12c)) + 1);
                              uVar7 = (*(uint *)(gen_frame + 0x120));
                            } while ((*(undefined4 * PTR32 *)(gen_frame + 0x12c)) < (*(undefined4 * PTR32 *)(gen_frame + 0xdc)));
                          }
                        }
                      }
                    }
                    fVar9 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x138))) + 1);
                    (*(float *)(gen_frame + 0x138)) = fVar9;
                    pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x15c));
                  } while ((uint)gen_fl2bits(fVar9) < (uint)gen_fl2bits((*(float *)(gen_frame + 0x11c))));
                }
              }
            }
            puVar13 = (*(ushort * PTR32 *)(gen_frame + 0x140)) + 2;
            (*(ushort * PTR32 *)(gen_frame + 0x140)) = puVar13;
            if ((ushort *)0x7 < puVar13) goto LAB_006534e8;
            fVar22 = (float10)REFG(float, 0x13205dc);
          } while( true );
        }
        if (((piVar17[8] == 0) || (piVar17[10] == 0)) || (piVar17[9] == 0)) {
          (*(float * PTR32 *)(gen_frame + 0x14c)) = (float *)0x0;
        }
        else {
          uVar7 = F_00500600(piVar17[8]);
          (*(float * PTR32 *)(gen_frame + 0x14c)) = *(float * PTR32 *)(uVar7 + 8);
        }
        (*(float * PTR32 *)(gen_frame + 0x144)) = (float *)0x0;
        if ((*(float * PTR32 *)(gen_frame + 0x14c)) != (float *)0x0) {
          do {
            uVar7 = F_00500730(piVar17[8],(*(float * PTR32 *)(gen_frame + 0x144)));
            (*(uint *)(gen_frame + 0xac)) = uVar7;
            puVar6 = (undefined4 *)((int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x144))) * 0x30 + piVar17[0xc]);
            (*(undefined4 * PTR32 *)(gen_frame + 0xdc)) = puVar6;
            if (*(char *)((int)puVar6 + 0x21) != '\0') {
              fVar22 = (float10)REFG(float, 0x13205dc);
              (*(undefined4 *)(gen_frame + 0x48)) = puVar6[4];
              (*(uint *)(gen_frame + 0x120)) = 0;
              ((float *)(gen_frame + 0x28))[0] = (float)(((float10)GEN_TOD(gen_bits2f(puVar6[6]))) / fVar22);
              (*(undefined4 *)(gen_frame + 0x4c)) = puVar6[5];
              ((float *)(gen_frame + 0x28))[1] = (float)(((float10)GEN_TOD(gen_bits2f(puVar6[7]))) / fVar22);
              pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x15c));
              do {
                (*(byte *)(gen_frame + 0x157)) = *(byte *)(&(*(undefined4 *)(gen_frame + 0x48)) + (*(uint *)(gen_frame + 0x120)));
                if (*(byte *)(&(*(undefined4 *)(gen_frame + 0x48)) + (*(uint *)(gen_frame + 0x120))) != 5) {
                  (*(float *)(gen_frame + 0x104)) = *(float *)((int)pvVar5 + 0x1218);
                  (*(float *)(gen_frame + 0x108)) = *(float *)((int)pvVar5 + 0x121c);
                  (*(float * PTR32 *)(gen_frame + 0x100)) = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
                  (*(float *)(gen_frame + 0x10c)) = 0.0;
                  (*(float *)(gen_frame + 0x11c)) = (float)(((float10)GEN_TOD(gen_bits2f((*(int * PTR32 *)(gen_frame + 0x124))[1]))) / fVar22);
                  pfVar18 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)(float)(((float10)GEN_TOD(gen_bits2f((*(int * PTR32 *)(gen_frame + 0x124))[1]))) /
                                                             fVar22) * (float10)((float *)(gen_frame + 0x28))[(int)((*(uint *)(gen_frame + 0x120)))]))))))
                  ;
                  (*(float * PTR32 *)(gen_frame + 0x150)) = pfVar18;
                  bVar21 = GEN_ISNAN((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar18)))) || GEN_ISNAN((float10)0);
                  if (bVar21 == (bVar21 || (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar18))) == (float10)0)) {
                    if ((((uint)(*(int * PTR32 *)(gen_frame + 0x124))[2] >> 2 & 1) == 0 && *(char *)((int)(*(int * PTR32 *)(gen_frame + 0x124)) + 0xd) == '\0'
                        ) && (*(char *)((*(undefined4 * PTR32 *)(gen_frame + 0xdc)) + 8) == '\0')) {
                      bVar21 = false;
                    }
                    else {
                      bVar21 = true;
                    }
                    if (((!GEN_ISNAN((float)REFG(float, 0x1087f04)) && !GEN_ISNAN(((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar18))))) &&
                         !((float)REFG(float, 0x1087f04) <= ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar18))))) || (bVar21)) {
                      (*(float * PTR32 *)(gen_frame + 0x100)) = pfVar18;
                      if (((*(undefined * PTR32 *)(gen_frame + 0x1e8)) != (undefined *)0x0) && ((*(int *)(gen_frame + 0x1ec)) != 0)) {
                        fVar9 = *(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1e8)) + 0x58);
                        fVar12 = 0.0;
                        (*(float *)(gen_frame + 0x11c)) = fVar9;
                        if (fVar9 != 0.0) {
                          piVar17 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1e8)) + 0x70);
                          do {
                            if (*piVar17 == *(int *)((int)pvVar5 + 0x11d0)) {
                              uVar8 = *(undefined4 *)((int)pvVar5 + 0x11d4);
                              goto LAB_00652bd4;
                            }
                            fVar12 = gen_bits2f((int)gen_fl2bits(fVar12) + 1);
                            piVar17 = piVar17 + 1;
                          } while ((uint)gen_fl2bits(fVar12) < (uint)gen_fl2bits(fVar9));
                        }
                      }
                    }
                    else if (((*(undefined * PTR32 *)(gen_frame + 0x1e8)) != (undefined *)0x0) && ((*(int *)(gen_frame + 0x1ec)) != 0)) {
                      fVar12 = 0.0;
                      if (*(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1e8)) + 0x58) != 0.0) {
                        piVar17 = (int *)((int)pvVar5 + 0x11c4);
                        piVar16 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1e8)) + 0x70);
LAB_00652bb4: ;
                        pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x15c));
                        if (*piVar16 != *piVar17) goto code_r0x00652bb8;
                        uVar8 = *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x15c)) + 0x11c8);
LAB_00652bd4: ;
                        *(undefined4 *)((*(int *)(gen_frame + 0x1ec)) + (int)gen_fl2bits(fVar12) * 4) = uVar8;
                      }
                    }
LAB_00652bda: ;
                    puVar6 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)pvVar5 + 0x1184),0,0x10,2);
                    if (puVar6 != (undefined4 *)0x0) {
                      *puVar6 = (*(float * PTR32 *)(gen_frame + 0x100));
                      puVar6[1] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x104)));
                      puVar6[2] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x108)));
                      puVar6[3] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x10c)));
                      *((undefined4 *)GEN_TOP((*(int *)((int)pvVar5 + 0x1184) + 0x24))) = 0;
                    }
                    if ((*(int *)((int)pvVar5 + 0x1180) != -1) &&
                       (*(int *)((int)pvVar5 + 0x1184) != 0)) {
                      *((int *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x134)) + 0x1a8) + 0xa8 +
                              *(int *)((int)pvVar5 + 0x1180) * 4))) = *(int *)((int)pvVar5 + 0x1184);
                    }
                    pfVar18 = (float *)F_004d9920(*(undefined * PTR32 *)((int)pvVar5 + 0x118c),0,0xc,2);
                    if (pfVar18 != (float *)0x0) {
                      pfVar20 = (float *)(*(int * PTR32 *)(gen_frame + 0x124))[10];
                      fVar9 = REFG(float, 0x1375ac0);
                      fVar12 = REFG(float, 0x1375ac4);
                      fVar24 = REFG(float, 0x1375ac8);
                      if (pfVar20 != (float *)0x0) {
                        fVar9 = *pfVar20;
                        fVar12 = pfVar20[1];
                        fVar24 = pfVar20[2];
                      }
                      (*(float *)(gen_frame + 0xe4)) = fVar9;
                      *pfVar18 = fVar9;
                      (*(float *)(gen_frame + 0xe8)) = fVar12;
                      (*(float *)(gen_frame + 0xec)) = fVar24;
                      pfVar18[1] = fVar12;
                      pfVar18[2] = fVar24;
                      *((undefined4 *)GEN_TOP((*(int *)((int)pvVar5 + 0x118c) + 0x24))) = 0;
                    }
                    if ((*(int *)((int)pvVar5 + 0x1188) != -1) &&
                       (*(int *)((int)pvVar5 + 0x118c) != 0)) {
                      *((int *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x134)) + 0x1a8) + 0xa8 +
                              *(int *)((int)pvVar5 + 0x1188) * 4))) = *(int *)((int)pvVar5 + 0x118c);
                    }
                    if ((*(undefined * PTR32 *)(gen_frame + 0x1e8)) == (undefined *)0x0) {
                      uVar7 = 0;
                    }
                    else {
                      uVar7 = F_00b52db0((*(undefined * PTR32 *)(gen_frame + 0x1e8)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1e4)));
                    }
                    *(uint *)((int)this_00 + 0x60) = uVar7;
                    puVar13 = (ushort *)F_0068ba50((*(undefined * PTR32 *)(gen_frame + 0xfc)));
                    (*(ushort * PTR32 *)(gen_frame + 0xa4)) = puVar13;
                    (*(ushort * PTR32 *)(gen_frame + 0x148)) = (ushort *)0x0;
                    if (puVar13 != (ushort *)0x0) {
                      (*(float *)(gen_frame + 0x11c)) = 5.60519e-44;
                      (*(float * PTR32 *)(gen_frame + 0x128)) = (float *)((*(uint *)(gen_frame + 0xac)) + 0x10);
                      do {
                        pfVar18 = (float *)F_00500710((*(int * PTR32 *)(gen_frame + 0x124))[8],(*(ushort * PTR32 *)(gen_frame + 0x148)));
                        (*(float * PTR32 *)(gen_frame + 0x158)) = pfVar18;
                        pfVar18 = (*(float * PTR32 *)(gen_frame + 0x128));
                        if (0x27 < (uint)gen_fl2bits(*(*(float * PTR32 *)(gen_frame + 0x128)))) {
                          pfVar18 = &(*(float *)(gen_frame + 0x11c));
                        }
                        (*(undefined4 * PTR32 *)(gen_frame + 0x12c)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(*pfVar18)));
                        if (((undefined4 *)(uintptr_t)gen_fl2bits((float)(*pfVar18))) != (undefined4 *)0x0) {
                          fVar9 = gen_bits2f(F_0068ba60((*(undefined * PTR32 *)(gen_frame + 0xfc)),(*(ushort * PTR32 *)(gen_frame + 0x148))));
                          (*(float *)(gen_frame + 0x138)) = fVar9;
                          if (fVar9 != 0.0) {
                            fVar9 = (*(float * PTR32 *)(gen_frame + 0x128))[1];
                            fVar12 = (*(float * PTR32 *)(gen_frame + 0x158))[1];
                            uVar7 = F_004d9920(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x15c)) + 0x120c),0,
                                                 (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x12c))) << 6,2);
                            if (uVar7 != 0) {
                              if ((*(undefined4 * PTR32 *)(gen_frame + 0x12c)) != (undefined4 *)0x0) {
                                (*(ushort * PTR32 *)(gen_frame + 0x140)) = (ushort *)
                                           ((int)gen_fl2bits(fVar9) * 0x40 +
                                           (int)gen_fl2bits(fVar12));
                                (*(float * PTR32 *)(gen_frame + 0x150)) = (float *)(uVar7 + 0x38);
                                (*(undefined4 * PTR32 *)(gen_frame + 0x130)) = (*(undefined4 * PTR32 *)(gen_frame + 0x12c));
                                do {
                                  pfVar18 = (*(float * PTR32 *)(gen_frame + 0xf4));
                                  pfVar20 = ((float *)(gen_frame + 0x1a0));
                                  for (iVar15 = 0x10; iVar15 != 0; iVar15 = iVar15 + -1) {
                                    *pfVar20 = *pfVar18;
                                    pfVar18 = pfVar18 + 1;
                                    pfVar20 = pfVar20 + 1;
                                  }
                                  F_004ef5a0((uint)((float *)(gen_frame + 0x1a0)),(uint)(*(ushort * PTR32 *)(gen_frame + 0x140)),(uint)(*(float * PTR32 *)(gen_frame + 0xf4)));
                                  pfVar18 = (*(float * PTR32 *)(gen_frame + 0x150));
                                  fVar9 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x1b8)) * (float10)(*(float *)(gen_frame + 0x1b8)) +
                                                 ((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x1b0))))) *
                                                  (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x1b0))))) +
                                                 (float10)(*(float *)(gen_frame + 0x1b4)) * (float10)(*(float *)(gen_frame + 0x1b4))))));
                                  (*(float *)(gen_frame + 0x13c)) = fVar9;
                                  fVar9 = ((float)GEN_TOF(SQRT((float10)fVar9)));
                                  (*(float *)(gen_frame + 0x13c)) = fVar9;
                                  (*(float * PTR32 *)(gen_frame + 0x150))[-0xe] = ((float *)(gen_frame + 0x1a0))[0];
                                  (*(float * PTR32 *)(gen_frame + 0x150))[-0xd] = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x1b0)))));
                                  (*(float * PTR32 *)(gen_frame + 0x150))[-0xc] = (*(float *)(gen_frame + 0x1c0));
                                  (*(float * PTR32 *)(gen_frame + 0x150))[-0xb] = (*(float *)(gen_frame + 0x1d0));
                                  (*(float * PTR32 *)(gen_frame + 0x150))[-10] = ((float *)(gen_frame + 0x1a0))[1];
                                  (*(float * PTR32 *)(gen_frame + 0x150))[-9] = (*(float *)(gen_frame + 0x1b4));
                                  (*(float * PTR32 *)(gen_frame + 0x150))[-8] = (*(float *)(gen_frame + 0x1c4));
                                  (*(float * PTR32 *)(gen_frame + 0x150))[-7] = (*(float *)(gen_frame + 0x1d4));
                                  (*(float * PTR32 *)(gen_frame + 0x150))[-6] = ((float *)(gen_frame + 0x1a0))[2];
                                  (*(float * PTR32 *)(gen_frame + 0x150))[-5] = (*(float *)(gen_frame + 0x1b8));
                                  (*(float * PTR32 *)(gen_frame + 0x150))[-4] = (*(float *)(gen_frame + 0x1c8));
                                  (*(float * PTR32 *)(gen_frame + 0x150))[-3] = (*(float *)(gen_frame + 0x1d8));
                                  fVar9 = (float)((float10)1 / (float10)fVar9);
                                  (*(float *)(gen_frame + 0x13c)) = fVar9;
                                  fVar22 = (float10)fVar9;
                                  ((float *)(gen_frame + 0x8))[2] = (float)(fVar22 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x1b0))))));
                                  ((float *)(gen_frame + 0x8))[3] = (float)((float10)(*(float *)(gen_frame + 0x1b4)) * fVar22);
                                  (*(float *)(gen_frame + 0x18)) = (float)(fVar22 * (float10)(*(float *)(gen_frame + 0x1b8)));
                                  fVar23 = (float10)REFG(double, 0x1088108);
                                  fVar9 = ((float)GEN_TOF(((float10)(float)(fVar22 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x1b0)))))
                                                                  ) * fVar23)));
                                  (*(float *)(gen_frame + 0x80)) = fVar9;
                                  fVar12 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x1b4)) * fVar22) *
                                                  fVar23)));
                                  (*(float *)(gen_frame + 0x84)) = fVar12;
                                  fVar24 = ((float)GEN_TOF(((float10)(float)(fVar22 * (float10)(*(float *)(gen_frame + 0x1b8))) *
                                                  fVar23)));
                                  (*(float *)(gen_frame + 0x88)) = fVar24;
                                  fVar9 = (float)((float10)fVar9 + fVar23);
                                  (*(float *)(gen_frame + 0x60)) = fVar9;
                                  (*(ushort * PTR32 *)(gen_frame + 0x140)) = (*(ushort * PTR32 *)(gen_frame + 0x140)) + 0x20;
                                  (*(float * PTR32 *)(gen_frame + 0x150))[1] = 0.0;
                                  puVar6 = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x130)) + -1);
                                  (*(undefined4 * PTR32 *)(gen_frame + 0x130)) = puVar6;
                                  fVar12 = (float)((float10)fVar12 + fVar23);
                                  (*(float *)(gen_frame + 0x64)) = fVar12;
                                  (*(float * PTR32 *)(gen_frame + 0x150)) = (*(float * PTR32 *)(gen_frame + 0x150)) + 0x10;
                                  fVar24 = (float)(fVar23 + (float10)fVar24);
                                  (*(float *)(gen_frame + 0x68)) = fVar24;
                                  pfVar18[-2] = fVar9;
                                  pfVar18[-1] = fVar12;
                                  *pfVar18 = fVar24;
                                  this_00 = (*(undefined * PTR32 *)(gen_frame + 0xd0));
                                } while (puVar6 != (undefined4 *)0x0);
                              }
                              *((undefined4 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x15c)) + 0x120c) + 0x24))) = 0;
                            }
                            if ((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x15c)) + 0x1208) != -1) &&
                               (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x15c)) + 0x120c) != 0)) {
                              *((int *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x134)) + 0x1a8) + 0xa8 +
                                      *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x15c)) + 0x1208) * 4))) =
                                   *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x15c)) + 0x120c);
                            }
                            iVar15 = *(int *)((int)gen_fl2bits((*(float *)(gen_frame + 0x138))) + 0x118 +
                                             (uint)(*(byte *)(gen_frame + 0x157)) * 4);
                            if (iVar15 != 0) {
                              *(int *)((int)this_00 + 0x48) = iVar15;
                              iVar15 = (int)gen_fl2bits(*(*(float * PTR32 *)(gen_frame + 0x128))) << 4;
                              fVar9 = gen_bits2f(F_004d9920(((undefined *)(uintptr_t)gen_fl2bits((float)((*(float * PTR32 *)(gen_frame + 0x158))[2]))),
                                                              (undefined4)gen_fl2bits((*(float * PTR32 *)(gen_frame + 0x128))[2]),
                                                              iVar15,1));
                              (*(float *)(gen_frame + 0x13c)) = fVar9;
                              uVar7 = F_004d9920(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x15c)) + 0x1220),0,iVar15,2);
                              F_00c46aa0(uVar7,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x13c))),iVar15);
                              *((undefined4 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x15c)) + 0x1220) + 0x24))) = 0;
                              *((undefined4 *)GEN_TOP(((int)this_00 + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x15c)) + 0x1210) * 4 + 0xa8))) =
                                   *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x15c)) + 0x1220);
                              puVar13 = ((ushort *)GEN_TOP((*(int *)((int)gen_fl2bits((*(float *)(gen_frame + 0x138))) + 0xb8) +
                                        (uint)(*(byte *)(gen_frame + 0x157)) * 0x3c)));
                              (*(undefined4 * PTR32 *)(gen_frame + 0x130)) = (undefined4 *)(uint)*puVar13;
                              puVar6 = (undefined4 *)((uint)puVar13[1] + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x130)));
                              (*(undefined4 * PTR32 *)(gen_frame + 0xbc)) = puVar6;
                              if ((*(undefined4 * PTR32 *)(gen_frame + 0x130)) < puVar6) {
                                do {
                                  puVar13 = ((ushort *)GEN_TOP((*(int *)((int)gen_fl2bits((*(float *)(gen_frame + 0x138))) + 0xbc) +
                                            ((uint)(*(undefined4 * PTR32 *)(gen_frame + 0x130)) & 0xffff) * 0x24)));
                                  (*(ushort * PTR32 *)(gen_frame + 0x140)) = puVar13;
                                  uVar7 = F_0068ba80((*(undefined * PTR32 *)(gen_frame + 0xfc)),(*(ushort * PTR32 *)(gen_frame + 0x148)),(*(undefined4 * PTR32 *)(gen_frame + 0x130)));
                                  *(uint *)((int)this_00 + 0x4c) = uVar7;
                                  iVar15 = *((int *)GEN_TOP((*(int *)((int)gen_fl2bits((*(float *)(gen_frame + 0x138))) + 0x124) +
                                                   (uint)puVar13[4] * 4)));
                                  if (iVar15 != 0) {
                                    iVar11 = 0;
                                    if (*(char *)(iVar15 + 0xba) != '\0') {
                                      for (piVar17 = *(int * PTR32 *)(iVar15 + 0xa8); iVar11 = *piVar17,
                                          iVar11 == 0; piVar17 = piVar17 + 2) {
                                      }
                                    }
                                    *((uint *)GEN_TOP(((int)this_00 +
                                             *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x15c)) + 0x116c) * 8 + 0x2ac))) =
                                         REFG(undefined4, 0x1302378) & 0xfffffff;
                                    *((undefined4 *)GEN_TOP(((int)this_00 + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x15c)) + 0x116c) * 8 + 0x2a8))) =
                                         *(undefined4 *)(iVar11 + 0xfc);
                                    fVar9 = gen_bits2f(*(byte *)((int)puVar13 + 0x23) & 3);
                                    (*(float *)(gen_frame + 0xf8)) = fVar9;
                                    (*(float * PTR32 *)(gen_frame + 0x158)) = (float *)0x0;
                                    if ((*(byte *)((int)puVar13 + 0x23) & 3) != 0) {
                                      puVar14 = (uint *)((int)this_00 + 0x6c);
                                      (*(float * PTR32 *)(gen_frame + 0x150)) = (float *)((*(ushort * PTR32 *)(gen_frame + 0x140)) + 10);
                                      do {
                                        fVar12 = *(*(float * PTR32 *)(gen_frame + 0x150));
                                        bVar4 = *(byte *)((int)(*(float * PTR32 *)(gen_frame + 0x158)) + 0x20 + (int)(*(ushort * PTR32 *)(gen_frame + 0x140)));
                                        (*(float * PTR32 *)(gen_frame + 0x150)) = (*(float * PTR32 *)(gen_frame + 0x150)) + 1;
                                        (*(float *)(gen_frame + 0x13c)) = gen_bits2f((uint)bVar4);
                                        puVar14[-1] = *(uint *)((int)gen_fl2bits((*(float *)(gen_frame + 0x138))) + 0x10c +
                                                               (uint)(*(byte *)(gen_frame + 0x157)) * 4);
                                        *puVar14 = *puVar14 ^
                                                   ((int)gen_fl2bits(fVar12) << 8 ^ *puVar14) &
                                                   0x7fffff00;
                                        *(byte *)puVar14 = bVar4;
                                        *puVar14 = *puVar14 & 0x7fffffff;
                                        fVar12 = gen_bits2f((int)(*(float * PTR32 *)(gen_frame + 0x158)) + 1);
                                        puVar14 = puVar14 + 2;
                                        (*(float * PTR32 *)(gen_frame + 0x158)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar12)));
                                      } while ((uint)gen_fl2bits(fVar12) < (uint)gen_fl2bits(fVar9))
                                      ;
                                    }
                                    uVar8 = *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x15c)) + 0x1214);
                                    *(uint *)((int)this_00 + 0x7c) =
                                         *(uint *)((int)this_00 + 0x7c) & 0x800000ff;
                                    *(undefined1 *)((int)this_00 + 0x7c) = 4;
                                    *(uint *)((int)this_00 + 0x7c) =
                                         *(uint *)((int)this_00 + 0x7c) | 0x80000000;
                                    *(undefined4 *)((int)this_00 + 0x78) = uVar8;
                                    *(uint *)((int)this_00 + 0x50) = REFG(undefined4, 0x1302360) & 0x1f;
                                    *(uint *)((int)this_00 + 8) =
                                         *(uint *)((int)this_00 + 8) & 0xff910000 |
                                         (uint)(*(ushort * PTR32 *)(gen_frame + 0x148)) & 0xffff | 0x110000;
                                    uVar7 = REFG(undefined4, 0x1302368);
                                    *(uint *)((int)this_00 + 0x5c) = REFG(undefined4, 0x130236c) & 0xfffffffc;
                                    *(uint *)((int)this_00 + 0x58) = uVar7 & 0xfe000000;
                                    iVar15 = REFG(int, 0x1370b90);
                                    uVar8 = *(undefined4 *)((*(ushort * PTR32 *)(gen_frame + 0x140)) + 2);
                                    pfVar18 = *(float * PTR32 *)((*(ushort * PTR32 *)(gen_frame + 0x140)) + 8);
                                    (*(uint *)(gen_frame + 0xd8)) = uVar8;
                                    uVar2 = *(*(ushort * PTR32 *)(gen_frame + 0x140));
                                    (*(float *)(gen_frame + 0x13c)) = gen_bits2f((uint)uVar2);
                                    (*(float * PTR32 *)(gen_frame + 0x158)) = pfVar18;
                                    uVar7 = *(int *)((int)this_00 + 0x18) + 0x60;
                                    if (uVar7 < 0x8001) {
                                      puVar6 = ((undefined4 *)GEN_TOP((*(int *)((int)this_00 + 0xc) +
                                               *(int *)((int)this_00 + 0x18))));
                                      *(uint *)((int)this_00 + 0x18) = uVar7;
LAB_00653300: ;
                                      if (puVar6 != (undefined4 *)0x0) {
                                        *puVar6 = 6;
                                        puVar6[2] = 0;
                                        puVar6[3] = 0;
                                        puVar6[5] = pfVar18;
                                        puVar6[4] = (uint)uVar2;
                                        puVar6[6] = uVar8;
                                        puVar6[1] = 5;
                                        puVar6[7] = (*(undefined4 * PTR32 *)(gen_frame + 0x12c));
                                        bVar4 = F_004dc830(this_00,puVar6 + 8);
                                        if (bVar4 != 0) {
                                          F_004d4810(this_00,puVar6);
                                        }
                                      }
                                    }
                                    else {
                                      pfVar20 = (float *)(REFG(int, 0x1370b90) + 0xc0);
                                      (*(float * PTR32 *)(gen_frame + 0x150)) = pfVar20;
                                      LOCK();
                                      fVar9 = *pfVar20;
                                      *pfVar20 = gen_bits2f((int)gen_fl2bits(*pfVar20) + 0x8000);
                                      UNLOCK();
                                      (*(float *)(gen_frame + 0xf8)) = fVar9;
                                      if (*(uint *)(iVar15 + 0xb8) <
                                          (uint)(*(int *)(iVar15 + 0xc4) * 3 +
                                                (int)gen_fl2bits(*pfVar20))) {
                                        LOCK();
                                        *pfVar20 = gen_bits2f((int)gen_fl2bits(*pfVar20) + -0x8000);
                                        UNLOCK();
                                      }
                                      else {
                                        puVar6 = ((undefined4 *)GEN_TOP((*(int *)(iVar15 + 0xbc) + (int)gen_fl2bits(fVar9))))
                                        ;
                                        if (puVar6 != (undefined4 *)0x0) {
                                          *(undefined4 * PTR32 *)((int)this_00 + 0xc) = puVar6;
                                          *(undefined4 *)((int)this_00 + 0x18) = 0x60;
                                          goto LAB_00653300;
                                        }
                                      }
                                    }
                                    *(uint *)((int)this_00 + 0x50) = REFG(undefined4, 0x1302364) & 0x1f;
                                    *(uint *)((int)this_00 + 8) =
                                         *(uint *)((int)this_00 + 8) & 0xffb40000 |
                                         (uint)(*(ushort * PTR32 *)(gen_frame + 0x148)) & 0x3ffff | 0x340000;
                                    uVar7 = REFG(undefined4, 0x1302368) & 0xfe000000;
                                    *(uint *)((int)this_00 + 0x5c) = REFG(undefined4, 0x130236c) & 0xfffffffc;
                                    *(uint *)((int)this_00 + 0x58) = uVar7;
                                    iVar15 = REFG(int, 0x1370b90);
                                    fVar9 = *(float *)((*(ushort * PTR32 *)(gen_frame + 0x140)) + 2);
                                    uVar8 = *(undefined4 *)((*(ushort * PTR32 *)(gen_frame + 0x140)) + 8);
                                    (*(float *)(gen_frame + 0x13c)) = fVar9;
                                    uVar2 = *(*(ushort * PTR32 *)(gen_frame + 0x140));
                                    (*(float *)(gen_frame + 0xf8)) = gen_bits2f(uVar8);
                                    uVar7 = *(int *)((int)this_00 + 0x18) + 0x60;
                                    (*(uint *)(gen_frame + 0xd8)) = (uint)uVar2;
                                    if (uVar7 < 0x8001) {
                                      puVar6 = ((undefined4 *)GEN_TOP((*(int *)((int)this_00 + 0xc) +
                                               *(int *)((int)this_00 + 0x18))));
                                      *(uint *)((int)this_00 + 0x18) = uVar7;
LAB_0065341c: ;
                                      if (puVar6 != (undefined4 *)0x0) {
                                        *puVar6 = 6;
                                        puVar6[4] = (uint)uVar2;
                                        puVar6[5] = uVar8;
                                        puVar6[2] = 0;
                                        puVar6[3] = 0;
                                        puVar6[7] = (*(undefined4 * PTR32 *)(gen_frame + 0x12c));
                                        puVar6[1] = 5;
                                        puVar6[6] = (undefined4)gen_fl2bits(fVar9);
                                        bVar4 = F_004dc830(this_00,puVar6 + 8);
                                        if (bVar4 != 0) {
                                          F_004d4810(this_00,puVar6);
                                        }
                                      }
                                    }
                                    else {
                                      piVar17 = (int *)(REFG(int, 0x1370b90) + 0xc0);
                                      LOCK();
                                      iVar11 = *piVar17;
                                      *piVar17 = *piVar17 + 0x8000;
                                      UNLOCK();
                                      if (*(uint *)(iVar15 + 0xb8) <
                                          (uint)(*(int *)(iVar15 + 0xc4) * 3 + *piVar17)) {
                                        LOCK();
                                        *piVar17 = *piVar17 + -0x8000;
                                        UNLOCK();
                                      }
                                      else {
                                        puVar6 = ((undefined4 *)GEN_TOP((*(int *)(iVar15 + 0xbc) + iVar11)));
                                        if (puVar6 != (undefined4 *)0x0) {
                                          *(undefined4 * PTR32 *)((int)this_00 + 0xc) = puVar6;
                                          *(undefined4 *)((int)this_00 + 0x18) = 0x60;
                                          goto LAB_0065341c;
                                        }
                                      }
                                    }
                                  }
                                  (*(undefined4 * PTR32 *)(gen_frame + 0x130)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x130)) + 1);
                                } while ((*(undefined4 * PTR32 *)(gen_frame + 0x130)) < (*(undefined4 * PTR32 *)(gen_frame + 0xbc)));
                              }
                            }
                          }
                        }
                        (*(float * PTR32 *)(gen_frame + 0x128)) = (*(float * PTR32 *)(gen_frame + 0x128)) + 3;
                        puVar13 = (ushort *)((int)(*(ushort * PTR32 *)(gen_frame + 0x148)) + 1);
                        (*(ushort * PTR32 *)(gen_frame + 0x148)) = puVar13;
                        pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x15c));
                      } while (puVar13 < (*(ushort * PTR32 *)(gen_frame + 0xa4)));
                    }
                  }
                }
                uVar7 = (*(uint *)(gen_frame + 0x120)) + 1;
                (*(uint *)(gen_frame + 0x120)) = uVar7;
                piVar17 = (*(int * PTR32 *)(gen_frame + 0x124));
                if (1 < uVar7) break;
                fVar22 = (float10)REFG(float, 0x13205dc);
              } while( true );
            }
            pfVar18 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x144)) + 1);
            (*(float * PTR32 *)(gen_frame + 0x144)) = pfVar18;
          } while (pfVar18 < (*(float * PTR32 *)(gen_frame + 0x14c)));
        }
      }
LAB_006534e8: ;
      uVar7 = (*(uint *)(gen_frame + 0xd4)) + 1;
      (*(uint *)(gen_frame + 0xd4)) = uVar7;
    } while (uVar7 < (*(uint *)(gen_frame + 0xa8)));
  }
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1e4)) = (*(undefined * PTR32 (*)[1])REFP(0x10abb24));
  uVar7 = F_00b52cb0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1e4)));
  F_00c47745((*(uint *)(gen_frame + 0x1fc)) ^ (uint)(uint)(gen_frame + 0x200));
  return uVar7;
code_r0x00652bb8: ;
  fVar12 = gen_bits2f((int)gen_fl2bits(fVar12) + 1);
  piVar16 = piVar16 + 1;
  if ((uint)gen_fl2bits(*(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1e8)) + 0x58)) <= (uint)gen_fl2bits(fVar12))
  goto LAB_00652bda;
  goto LAB_00652bb4;
}

/* ref: FUN_00653530 */
uint F_00653530(unsigned int gen_a0)
{
  GEN_ENTER(0x653530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x140];
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined * this_00;
  byte bVar7;
  uint uVar8;
  float * pfVar9;
  float * pfVar10;
  undefined4 uVar11;
  undefined4 * puVar12;
  int * PTR32 * ppiVar13;
  undefined * pvVar14;
  int iVar15;
  int * piVar16;
  uint uVar17;
  int * piVar18;
  float10 fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  
  (*(uint *)(gen_frame + 0x12c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x130);
  (*(undefined * PTR32 *)(gen_frame + 0xe8)) = this;
  (*(int * PTR32 *)(gen_frame + 0xdc)) = REFG(undefined4, 0x13759f4);
  uVar8 = F_0068bb90(REFG(undefined4, 0x13759f4),0);
  (*(uint *)(gen_frame + 0x7c)) = uVar8;
  iVar15 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  pvVar14 = *(undefined * PTR32 *)(iVar15 + 0x1a8);
  uVar8 = *(uint *)((int)pvVar14 + 8);
  *(uint *)((int)pvVar14 + 8) = uVar8 & 0xfe7fffff | 0x6000000;
  iVar4 = *((int *)GEN_TOP(((uVar8 >> 0x1b) * 0x358 + 0x2a4 + REFG(int, 0x137127c))));
  *(uint *)((int)pvVar14 + 0x38) = REFG(undefined4, 0x1302350) & 0x7ffffff;
  (*(undefined * PTR32 *)(gen_frame + 0xc4)) = pvVar14;
  *((int *)GEN_TOP((*(int *)(iVar15 + 0x1a8) + 0xa8 + REFG(int * PTR32, 0x13759f8)[1] * 4))) = REFG(int * PTR32, 0x13759f8)[2];
  (*(int *)(gen_frame + 0xd8)) = iVar15;
  uVar8 = *((uint *)GEN_TOP((*(int *)(iVar15 + 0x1a8) + 8)));
  iVar5 = *((int *)GEN_TOP(((uVar8 >> 0x1b) * 0x358 + ((uVar8 >> 0x17 & 0xf) + 1) * 0x34 + REFG(int, 0x137127c))));
  if (iVar5 != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(iVar15 + 0x1a8) + 0xa8 + REFG(int * PTR32, 0x13759f8)[0xb] * 4))) =
         *(undefined4 *)(iVar5 + 0x120);
  }
  F_0063bbd0(REFG(undefined4, 0x13759f8),*((undefined4 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xe8)) + 0x1168) + 0xfc))));
  piVar18 = (int *)(iVar4 + 0x10);
  (*(int * PTR32 *)(gen_frame + 0xac)) = piVar18;
  piVar16 = ((int *)(gen_frame + 0x0));
  for (iVar15 = 0x10; iVar15 != 0; iVar15 = iVar15 + -1) {
    *piVar16 = *piVar18;
    piVar18 = piVar18 + 1;
    piVar16 = piVar16 + 1;
  }
  (*(float *)(gen_frame + 0xb0)) = (*(float *)(gen_frame + 0x10));
  (*(float *)(gen_frame + 0xb4)) = (*(float *)(gen_frame + 0x14));
  (*(float *)(gen_frame + 0xb8)) = (*(float *)(gen_frame + 0x18));
  F_004bd580(&(*(float *)(gen_frame + 0xb0)));
  piVar18 = (int *)F_004d9920(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xe8)) + 0x1174),0,0x40,2);
  pvVar14 = (*(undefined * PTR32 *)(gen_frame + 0xe8));
  if (piVar18 != (int *)0x0) {
    fVar19 = (float10)REFG(double, 0x1088108);
    *piVar18 = ((int *)(gen_frame + 0x0))[0];
    piVar18[1] = (int)gen_fl2bits((*(float *)(gen_frame + 0x10)));
    (*(float *)(gen_frame + 0x80)) = (float)((float10)(*(float *)(gen_frame + 0xb0)) * fVar19);
    piVar18[2] = (*(int *)(gen_frame + 0x20));
    piVar18[3] = (*(int *)(gen_frame + 0x30));
    piVar18[4] = ((int *)(gen_frame + 0x0))[1];
    (*(float *)(gen_frame + 0x84)) = (float)((float10)(*(float *)(gen_frame + 0xb4)) * fVar19);
    piVar18[5] = (int)gen_fl2bits((*(float *)(gen_frame + 0x14)));
    piVar18[6] = (*(int *)(gen_frame + 0x24));
    (*(float *)(gen_frame + 0x88)) = (float)((float10)(*(float *)(gen_frame + 0xb8)) * fVar19);
    piVar18[7] = (*(int *)(gen_frame + 0x34));
    piVar18[8] = ((int *)(gen_frame + 0x0))[2];
    fVar1 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0xb0)) * fVar19) + fVar19)));
    (*(float *)(gen_frame + 0xb0)) = fVar1;
    piVar18[9] = (int)gen_fl2bits((*(float *)(gen_frame + 0x18)));
    piVar18[10] = (*(int *)(gen_frame + 0x28));
    piVar18[0xb] = (*(int *)(gen_frame + 0x38));
    fVar2 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0xb4)) * fVar19) + fVar19)));
    (*(float *)(gen_frame + 0xb4)) = fVar2;
    piVar18[0xf] = 0;
    fVar3 = ((float)GEN_TOF((fVar19 + (float10)(float)((float10)(*(float *)(gen_frame + 0xb8)) * fVar19))));
    (*(float *)(gen_frame + 0xb8)) = fVar3;
    piVar18[0xc] = (int)gen_fl2bits(fVar1);
    piVar18[0xd] = (int)gen_fl2bits(fVar2);
    piVar18[0xe] = (int)gen_fl2bits(fVar3);
    *((undefined4 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xe8)) + 0x1174) + 0x24))) = 0;
  }
  if ((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xe8)) + 0x1170) != -1) && (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xe8)) + 0x1174) != 0)) {
    *((int *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0xd8)) + 0x1a8) + 0xa8 + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xe8)) + 0x1170) * 4))) =
         *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xe8)) + 0x1174);
  }
  pfVar9 = (float *)F_004d9920(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xe8)) + 0x117c),0,0x10,2);
  if (pfVar9 != (float *)0x0) {
    pfVar10 = (float *)F_0068bb70((*(int * PTR32 *)(gen_frame + 0xdc)));
    (*(float *)(gen_frame + 0x110)) = *pfVar10;
    ((float *)(gen_frame + 0x114))[0] = pfVar10[1];
    ((float *)(gen_frame + 0x114))[1] = pfVar10[2];
    ((float *)(gen_frame + 0x114))[2] = pfVar10[3];
    F_004eebf0(&(*(float *)(gen_frame + 0x110)),(uint)(*(int * PTR32 *)(gen_frame + 0xac)));
    (*(float *)(gen_frame + 0xb0)) = (*(float *)(gen_frame + 0x110));
    (*(float *)(gen_frame + 0xb4)) = ((float *)(gen_frame + 0x114))[0];
    *pfVar9 = (*(float *)(gen_frame + 0x110));
    (*(float *)(gen_frame + 0xb8)) = ((float *)(gen_frame + 0x114))[1];
    pfVar9[1] = ((float *)(gen_frame + 0x114))[0];
    (*(float *)(gen_frame + 0xbc)) = ((float *)(gen_frame + 0x114))[2];
    pfVar9[2] = ((float *)(gen_frame + 0x114))[1];
    pfVar9[3] = ((float *)(gen_frame + 0x114))[2];
    *((undefined4 *)GEN_TOP((*(int *)((int)pvVar14 + 0x117c) + 0x24))) = 0;
  }
  this_00 = (*(undefined * PTR32 *)(gen_frame + 0xc4));
  if ((*(int *)((int)pvVar14 + 0x1178) != -1) && (*(int *)((int)pvVar14 + 0x117c) != 0)) {
    *((int *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0xd8)) + 0x1a8) + 0xa8 + *(int *)((int)pvVar14 + 0x1178) * 4))) =
         *(int *)((int)pvVar14 + 0x117c);
  }
  uVar8 = REFG(undefined4, 0x1302370);
  if ((*(byte *)((int)pvVar14 + 0x1148) & 1) != 0) {
    uVar8 = REFG(undefined4, 0x1302370) & 0xfffffffe | 2;
  }
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0xc4)) + 0x3c) = uVar8 & 0x7ffffffb;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xc4)) + 0x4c) = *(undefined4 *)((int)pvVar14 + 0x1164);
  piVar18 = REFG(undefined4, 0x13759f8);
  iVar15 = *(int *)((*(int *)(gen_frame + 0xd8)) + 0x1a8);
  (*(int * PTR32 *)(gen_frame + 0xdc)) = REFG(undefined4, 0x13759f8);
  if ((*(uint *)(iVar15 + 8) & 0xf8000000) == 0xf0000000) {
    *((uint *)GEN_TOP((iVar15 + 0x2ac + REFG(int * PTR32, 0x13759f8)[0xd] * 8))) = REFG(int * PTR32, 0x13759f8)[0x18] & 0xfffffff;
  }
  uVar8 = *((uint *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0xd8)) + 0x1a8) + 8))) >> 0x1b;
  if (uVar8 < 0x1a) {
LAB_00653918: ;
    uVar11 = 0;
  }
  else if (uVar8 < 0x1e) {
    uVar11 = *(undefined4 *)(REFG(int, 0x1371288) + 0xdc);
  }
  else {
    if (uVar8 != 0x1e) goto LAB_00653918;
    uVar11 = *(undefined4 *)(REFG(int, 0x1371288) + 0x10);
  }
  *(undefined4 *)(iVar15 + 0x2a8 + piVar18[0xd] * 8) = uVar11;
  piVar18 = REFG(undefined4, 0x13759f8);
  iVar15 = *(int *)((*(int *)(gen_frame + 0xd8)) + 0x1a8);
  if ((*(uint *)(iVar15 + 8) & 0xf8000000) == 0xf0000000) {
    *((uint *)GEN_TOP((iVar15 + 0x2ac + REFG(int * PTR32, 0x13759f8)[0xe] * 8))) = REFG(int * PTR32, 0x13759f8)[0x19] & 0xfffffff;
    *(uint *)(iVar15 + 0x2ac + piVar18[0xf] * 8) = piVar18[0x18] & 0xfffffff;
  }
  uVar8 = *((uint *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0xd8)) + 0x1a8) + 8))) >> 0x1b;
  if (uVar8 < 0x1a) {
LAB_006539a3: ;
    uVar11 = 0;
  }
  else if (uVar8 < 0x1e) {
    uVar11 = *(undefined4 *)(piVar18[0xa3] + 0xfc);
  }
  else {
    if (uVar8 != 0x1e) goto LAB_006539a3;
    uVar11 = *(undefined4 *)(REFG(int, 0x1371288) + 0x14);
  }
  *(undefined4 *)(iVar15 + 0x2a8 + piVar18[0xe] * 8) = uVar11;
  uVar8 = *((uint *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0xd8)) + 0x1a8) + 8))) >> 0x1b;
  if (0x19 < uVar8) {
    if (uVar8 < 0x1e) {
      uVar11 = *(undefined4 *)(piVar18[0xa3] + 0xfc);
      goto LAB_006539e8;
    }
    if (uVar8 == 0x1e) {
      uVar11 = *(undefined4 *)(REFG(int, 0x1371288) + 0x18);
      goto LAB_006539e8;
    }
  }
  uVar11 = 0;
LAB_006539e8: ;
  *(undefined4 *)(iVar15 + 0x2a8 + piVar18[0xf] * 8) = uVar11;
  (*(undefined * PTR32 *)(gen_frame + 0xf0)) = (undefined *)0x0;
  (*(undefined4 *)(gen_frame + 0xf4)) = 0;
  (*(undefined4 *)(gen_frame + 0xf8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xec)) = (*(undefined * PTR32 (*)[1])REFP(0x10abb24));
  if (*(int *)(REFG(int, 0x137127c) + 0xabc4) == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *((undefined4 *)GEN_TOP((*(int *)(REFG(int, 0x137127c) + 0xabc4) + 0x98)));
  }
  F_00b52c10(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xec)),uVar11);
  pvVar14 = (*(undefined * PTR32 *)(gen_frame + 0xe8));
  if ((*(undefined * PTR32 *)(gen_frame + 0xf0)) != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0xfc)) = *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xe8)) + 0x1200);
    (*(undefined4 *)(gen_frame + 0x100)) = *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xe8)) + 0x1204);
  }
  F_00627260(REFG(undefined4, 0x13759f8) + 0x1c);
  F_00627330(REFG(undefined4, 0x13759f8) + 0x1c,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xec)),1,0);
  F_00667bd0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xec)),(int)pvVar14 + 0x11e4);
  uVar8 = (uint)*(ushort *)((int)pvVar14 + 0x1144);
  (*(uint *)(gen_frame + 0x70)) = uVar8;
  (*(uint *)(gen_frame + 0xa4)) = 0;
  pvVar14 = (*(undefined * PTR32 *)(gen_frame + 0xe8));
  if (uVar8 != 0) {
    do {
      piVar18 = *(int * PTR32 *)((int)pvVar14 + (*(uint *)(gen_frame + 0xa4)) * 4 + 4);
      (*(int * PTR32 *)(gen_frame + 0xe4)) = piVar18;
      if (((*(byte *)(piVar18 + 2) & 1) != 0) && (*piVar18 == 2)) {
        bVar7 = F_00624e40(piVar18);
        if (bVar7 == 0) {
          if ((((*(int * PTR32 *)(gen_frame + 0xe4))[8] == 0) || ((*(int * PTR32 *)(gen_frame + 0xe4))[10] == 0)) || ((*(int * PTR32 *)(gen_frame + 0xe4))[9] == 0)) {
            piVar18 = (int *)0x0;
          }
          else {
            uVar8 = F_00500600((*(int * PTR32 *)(gen_frame + 0xe4))[8]);
            piVar18 = *(int * PTR32 *)(uVar8 + 8);
          }
          (*(int * PTR32 *)(gen_frame + 0xdc)) = piVar18;
          (*(int * PTR32 *)(gen_frame + 0xd0)) = (int *)0x0;
          if (piVar18 != (int *)0x0) {
            (*(int * PTR32 *)(gen_frame + 0xcc)) = (int *)0x0;
            do {
              pvVar14 = (*(undefined * PTR32 *)(gen_frame + 0xe8));
              iVar15 = (*(int * PTR32 *)(gen_frame + 0xe4))[0xc];
              if ((*(char *)((int)(*(int * PTR32 *)(gen_frame + 0xcc)) + iVar15 + 0x21) != '\0') &&
                 (bVar7 = *(byte *)((int)(*(int * PTR32 *)(gen_frame + 0xcc)) + iVar15 + 0x10), (*(byte *)(gen_frame + 0xcb)) = bVar7, bVar7 != 5)) {
                (*(float *)(gen_frame + 0xb0)) = REFG(float, 0x1087f04);
                (*(float *)(gen_frame + 0xb4)) = *(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0xe8)) + 0x1218);
                (*(float *)(gen_frame + 0xb8)) = *(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0xe8)) + 0x121c);
                (*(float *)(gen_frame + 0xbc)) = 0.0;
                if ((((uint)(*(int * PTR32 *)(gen_frame + 0xe4))[2] >> 2 & 1) == 0 && *(char *)((int)(*(int * PTR32 *)(gen_frame + 0xe4)) + 0xd) == '\0') &&
                   (*(char *)((int)(*(int * PTR32 *)(gen_frame + 0xcc)) + iVar15 + 0x20) == '\0')) {
                  iVar15 = (int)(*(undefined * PTR32 *)(gen_frame + 0xe8)) + 0x11c0;
                }
                else {
                  iVar15 = (int)(*(undefined * PTR32 *)(gen_frame + 0xe8)) + 0x11cc;
                  (*(float *)(gen_frame + 0xb0)) = (float)(((float10)GEN_TOD(gen_bits2f((*(int * PTR32 *)(gen_frame + 0xe4))[1]))) / (float10)REFG(float, 0x13205dc));
                }
                F_00667bd0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xec)),iVar15);
                pfVar9 = (float *)F_004d9920(*(undefined * PTR32 *)((int)pvVar14 + 0x1184),0,0x10,2);
                if (pfVar9 != (float *)0x0) {
                  *pfVar9 = (*(float *)(gen_frame + 0xb0));
                  pfVar9[1] = (*(float *)(gen_frame + 0xb4));
                  pfVar9[2] = (*(float *)(gen_frame + 0xb8));
                  pfVar9[3] = (*(float *)(gen_frame + 0xbc));
                  *((undefined4 *)GEN_TOP((*(int *)((int)pvVar14 + 0x1184) + 0x24))) = 0;
                }
                if ((*(int *)((int)pvVar14 + 0x1180) != -1) &&
                   (*(int *)((int)pvVar14 + 0x1184) != 0)) {
                  *((int *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0xd8)) + 0x1a8) + 0xa8 + *(int *)((int)pvVar14 + 0x1180) * 4)))
                       = *(int *)((int)pvVar14 + 0x1184);
                }
                puVar12 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)pvVar14 + 0x118c),0,0xc,2);
                if (puVar12 != (undefined4 *)0x0) {
                  puVar6 = (undefined4 *)(*(int * PTR32 *)(gen_frame + 0xe4))[10];
                  uVar11 = REFG(float, 0x1375ac0);
                  uVar20 = REFG(float, 0x1375ac4);
                  uVar21 = REFG(float, 0x1375ac8);
                  if (puVar6 != (undefined4 *)0x0) {
                    uVar11 = *puVar6;
                    uVar20 = puVar6[1];
                    uVar21 = puVar6[2];
                  }
                  (*(undefined4 *)(gen_frame + 0x64)) = uVar11;
                  *puVar12 = uVar11;
                  (*(undefined4 *)(gen_frame + 0x68)) = uVar20;
                  (*(undefined4 *)(gen_frame + 0x6c)) = uVar21;
                  puVar12[1] = uVar20;
                  puVar12[2] = uVar21;
                  *((undefined4 *)GEN_TOP((*(int *)((int)pvVar14 + 0x118c) + 0x24))) = 0;
                }
                if ((*(int *)((int)pvVar14 + 0x1188) != -1) &&
                   (*(int *)((int)pvVar14 + 0x118c) != 0)) {
                  *((int *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0xd8)) + 0x1a8) + 0xa8 + *(int *)((int)pvVar14 + 0x1188) * 4)))
                       = *(int *)((int)pvVar14 + 0x118c);
                }
                if ((*(undefined * PTR32 *)(gen_frame + 0xf0)) == (undefined *)0x0) {
                  uVar8 = 0;
                }
                else {
                  uVar8 = F_00b52db0((*(undefined * PTR32 *)(gen_frame + 0xf0)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xec)));
                }
                *(uint *)((int)this_00 + 0x60) = uVar8;
                pvVar14 = (undefined *)F_00500730((*(int * PTR32 *)(gen_frame + 0xe4))[8],(*(int * PTR32 *)(gen_frame + 0xd0)));
                (*(undefined * PTR32 *)(gen_frame + 0xc4)) = pvVar14;
                (*(uint *)(gen_frame + 0xe0)) = 0;
                (*(undefined4 * PTR32 *)(gen_frame + 0xd4)) = (undefined4 *)0x0;
                (*(undefined4 * PTR32 *)(gen_frame + 0xc0)) = (undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xe8)) + 0x114c);
                do {
                  uVar8 = (*(uint *)(gen_frame + 0xe0));
                  uVar17 = F_005006f0((*(int * PTR32 *)(gen_frame + 0xe4))[8],(*(uint *)(gen_frame + 0xe0)));
                  uVar8 = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0xc4)) + uVar8 * 8);
                  (*(uint *)(gen_frame + 0xa0)) = uVar17;
                  (*(uint *)(gen_frame + 0x9c)) = uVar8;
                  if (uVar8 != 0) {
                    uVar17 = (uint)(*(byte *)(gen_frame + 0xcb));
                    ((int *)(gen_frame + 0x104))[0] = 0;
                    ((int *)(gen_frame + 0x104))[1] = 0;
                    ((float *)(gen_frame + 0x114))[0] = 2.24208e-44;
                    ((float *)(gen_frame + 0x114))[1] = 2.24208e-44;
                    uVar11 = *(*(undefined4 * PTR32 *)(gen_frame + 0xc0));
                    *(uint *)((int)this_00 + 0x74) = *(uint *)((int)this_00 + 0x74) & 0x800000ff;
                    *(undefined1 *)((int)this_00 + 0x74) = 8;
                    *(uint *)((int)this_00 + 0x74) = *(uint *)((int)this_00 + 0x74) & 0x7fffffff;
                    *(undefined4 *)((int)this_00 + 0x70) = uVar11;
                    ((int *)(gen_frame + 0x104))[2] = 1;
                    ((float *)(gen_frame + 0x114))[2] = 1.68156e-44;
                    *(undefined4 *)((int)this_00 + 0x48) =
                         *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xe8)) + (int)(((int *)(gen_frame + 0x104))[(int)(uVar17)] + (int)(*(undefined4 * PTR32 *)(gen_frame + 0xd4))) * 4 + 0x1150)));
                    *((uint *)GEN_TOP(((int)this_00 + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xe8)) + 0x116c) * 8 + 0x2ac))) =
                         REFG(undefined4, 0x1302378) & 0xfffffff;
                    uVar8 = F_006901b0((*(uint *)(gen_frame + 0x7c)),(*(uint *)(gen_frame + 0xe0)));
                    *((uint *)GEN_TOP(((int)this_00 + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xe8)) + 0x116c) * 8 + 0x2a8))) = uVar8;
                    iVar15 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xc4)) + (*(uint *)(gen_frame + 0xe0)) * 8 + 4);
                    *(undefined4 *)((int)this_00 + 0x68) = *(undefined4 *)((*(uint *)(gen_frame + 0xa0)) + 4);
                    *(uint *)((int)this_00 + 0x6c) =
                         *(uint *)((int)this_00 + 0x6c) ^
                         (iVar15 << 8 ^ *(uint *)((int)this_00 + 0x6c)) & 0x7fffff00;
                    *(undefined1 *)((int)this_00 + 0x6c) = 0x10;
                    *(uint *)((int)this_00 + 0x6c) = *(uint *)((int)this_00 + 0x6c) & 0x7fffffff;
                    ((int *)(gen_frame + 0x44))[0] = 0xc;
                    ((int *)(gen_frame + 0x44))[1] = 0xc;
                    if ((*(undefined * PTR32 *)(gen_frame + 0xf0)) == (undefined *)0x0) {
                      uVar8 = 0;
                    }
                    else {
                      uVar8 = F_00b52db0((*(undefined * PTR32 *)(gen_frame + 0xf0)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xec)));
                    }
                    *(uint *)((int)this_00 + 0x60) = uVar8;
                    fVar1 = ((float *)(gen_frame + 0x114))[(int)(uVar17)];
                    *(uint *)((int)this_00 + 0x50) = REFG(undefined4, 0x1302360) & 0x1f;
                    iVar15 = ((int *)(gen_frame + 0x44))[(int)((*(uint *)(gen_frame + 0xe0)))];
                    *(uint *)((int)this_00 + 8) =
                         *(uint *)((int)this_00 + 8) & 0xff910000 | (*(uint *)(gen_frame + 0xe0)) & 0xffff | 0x110000;
                    uVar8 = REFG(undefined4, 0x130236c);
                    *(uint *)((int)this_00 + 0x58) = REFG(undefined4, 0x1302368) & 0xfe000000;
                    *(uint *)((int)this_00 + 0x5c) = uVar8 & 0xfffffffc;
                    (*(int * PTR32 *)(gen_frame + 0xac)) = (int *)((int)gen_fl2bits(fVar1) * (*(uint *)(gen_frame + 0x9c)));
                    (*(int *)(gen_frame + 0xa8)) = iVar15 * (*(uint *)(gen_frame + 0x9c));
                    puVar12 = (undefined4 *)F_004d4760(this_00,0x54);
                    if (puVar12 != (undefined4 *)0x0) {
                      *puVar12 = 5;
                      puVar12[2] = 0;
                      puVar12[3] = 0;
                      puVar12[5] = 0;
                      puVar12[4] = (*(int *)(gen_frame + 0xa8));
                      puVar12[1] = 6;
                      puVar12[6] = (*(int * PTR32 *)(gen_frame + 0xac));
                      bVar7 = F_004dc830(this_00,puVar12 + 7);
                      if (bVar7 != 0) {
                        F_004d4810(this_00,puVar12);
                      }
                    }
                    *(uint *)((int)this_00 + 0x50) = REFG(undefined4, 0x1302364) & 0x1f;
                    *(uint *)((int)this_00 + 8) =
                         *(uint *)((int)this_00 + 8) & 0xffb40000 | (*(uint *)(gen_frame + 0xe0)) & 0x3ffff | 0x340000;
                    uVar8 = REFG(undefined4, 0x130236c) & 0xfffffffc;
                    *(uint *)((int)this_00 + 0x58) = REFG(undefined4, 0x1302368) & 0xfe000000;
                    *(uint *)((int)this_00 + 0x5c) = uVar8;
                    puVar12 = (undefined4 *)F_004d4760(this_00,0x54);
                    if (puVar12 != (undefined4 *)0x0) {
                      *puVar12 = 5;
                      puVar12[2] = 0;
                      puVar12[3] = 0;
                      puVar12[5] = 0;
                      puVar12[4] = (*(int *)(gen_frame + 0xa8));
                      puVar12[1] = 6;
                      puVar12[6] = (*(int * PTR32 *)(gen_frame + 0xac));
                      bVar7 = F_004dc830(this_00,puVar12 + 7);
                      if (bVar7 != 0) {
                        F_004d4810(this_00,puVar12);
                      }
                    }
                  }
                  (*(undefined4 * PTR32 *)(gen_frame + 0xc0)) = (*(undefined4 * PTR32 *)(gen_frame + 0xc0)) + 3;
                  puVar12 = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0xd4)) + 3);
                  (*(uint *)(gen_frame + 0xe0)) = (*(uint *)(gen_frame + 0xe0)) + 1;
                  (*(undefined4 * PTR32 *)(gen_frame + 0xd4)) = puVar12;
                  piVar18 = (*(int * PTR32 *)(gen_frame + 0xdc));
                } while (puVar12 < &REFG(undefined, 0x6));
              }
              (*(int * PTR32 *)(gen_frame + 0xcc)) = (*(int * PTR32 *)(gen_frame + 0xcc)) + 0xc;
              piVar16 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0xd0)) + 1);
              (*(int * PTR32 *)(gen_frame + 0xd0)) = piVar16;
              pvVar14 = (*(undefined * PTR32 *)(gen_frame + 0xe8));
            } while (piVar16 < piVar18);
          }
        }
        else {
          (*(float *)(gen_frame + 0x80)) = REFG(float, 0x1087f04);
          (*(float *)(gen_frame + 0x84)) = *(float *)((int)pvVar14 + 0x1218);
          (*(float *)(gen_frame + 0x88)) = *(float *)((int)pvVar14 + 0x121c);
          (*(float *)(gen_frame + 0x8c)) = 0.0;
          if (((uint)(*(int * PTR32 *)(gen_frame + 0xe4))[2] >> 2 & 1) == 0 && *(char *)((int)(*(int * PTR32 *)(gen_frame + 0xe4)) + 0xd) == '\0') {
            iVar15 = (int)pvVar14 + 0x11c0;
          }
          else {
            iVar15 = (int)pvVar14 + 0x11cc;
            (*(float *)(gen_frame + 0x80)) = (float)(((float10)GEN_TOD(gen_bits2f((*(int * PTR32 *)(gen_frame + 0xe4))[1]))) / (float10)REFG(float, 0x13205dc));
          }
          F_00667bd0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xec)),iVar15);
          pfVar9 = (float *)F_004d9920(*(undefined * PTR32 *)((int)pvVar14 + 0x1184),0,0x10,2);
          if (pfVar9 != (float *)0x0) {
            *pfVar9 = (*(float *)(gen_frame + 0x80));
            pfVar9[1] = (*(float *)(gen_frame + 0x84));
            pfVar9[2] = (*(float *)(gen_frame + 0x88));
            pfVar9[3] = (*(float *)(gen_frame + 0x8c));
            *((undefined4 *)GEN_TOP((*(int *)((int)pvVar14 + 0x1184) + 0x24))) = 0;
          }
          if ((*(int *)((int)pvVar14 + 0x1180) != -1) && (*(int *)((int)pvVar14 + 0x1184) != 0)) {
            *((int *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0xd8)) + 0x1a8) + 0xa8 + *(int *)((int)pvVar14 + 0x1180) * 4))) =
                 *(int *)((int)pvVar14 + 0x1184);
          }
          puVar12 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)pvVar14 + 0x118c),0,0xc,2);
          if (puVar12 != (undefined4 *)0x0) {
            puVar6 = (undefined4 *)(*(int * PTR32 *)(gen_frame + 0xe4))[10];
            uVar11 = REFG(float, 0x1375ac0);
            uVar20 = REFG(float, 0x1375ac4);
            uVar21 = REFG(float, 0x1375ac8);
            if (puVar6 != (undefined4 *)0x0) {
              uVar11 = *puVar6;
              uVar20 = puVar6[1];
              uVar21 = puVar6[2];
            }
            (*(undefined4 *)(gen_frame + 0x58)) = uVar11;
            *puVar12 = uVar11;
            (*(undefined4 *)(gen_frame + 0x5c)) = uVar20;
            (*(undefined4 *)(gen_frame + 0x60)) = uVar21;
            puVar12[1] = uVar20;
            puVar12[2] = uVar21;
            *((undefined4 *)GEN_TOP((*(int *)((int)pvVar14 + 0x118c) + 0x24))) = 0;
          }
          if ((*(int *)((int)pvVar14 + 0x1188) != -1) && (*(int *)((int)pvVar14 + 0x118c) != 0)) {
            *((int *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0xd8)) + 0x1a8) + 0xa8 + *(int *)((int)pvVar14 + 0x1188) * 4))) =
                 *(int *)((int)pvVar14 + 0x118c);
          }
          if ((*(undefined * PTR32 *)(gen_frame + 0xf0)) == (undefined *)0x0) {
            uVar8 = 0;
          }
          else {
            uVar8 = F_00b52db0((*(undefined * PTR32 *)(gen_frame + 0xf0)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xec)));
          }
          *(uint *)((int)this_00 + 0x60) = uVar8;
          (*(uint *)(gen_frame + 0xe0)) = 0;
          (*(undefined4 * PTR32 *)(gen_frame + 0xd4)) = (undefined4 *)((int)pvVar14 + 0x114c);
          (*(undefined4 * PTR32 *)(gen_frame + 0xc0)) = (undefined4 *)((int)pvVar14 + 0x1150);
          do {
            puVar12 = (undefined4 *)F_005006f0((*(int * PTR32 *)(gen_frame + 0xe4))[8],(*(uint *)(gen_frame + 0xe0)));
            (*(undefined4 * PTR32 *)(gen_frame + 0x78)) = puVar12;
            piVar18 = (int *)*puVar12;
            if (piVar18 != (int *)0x0) {
              (*(int * PTR32 *)(gen_frame + 0xcc)) = piVar18;
              (*(int * PTR32 *)(gen_frame + 0xd0)) = (int *)0x0;
              if (0 < (int)piVar18) {
                ((int *)(gen_frame + 0x44))[2] = 0xc;
                ((int *)(gen_frame + 0x44))[3] = 0xc;
                ((int *)(gen_frame + 0x44))[4] = (*(uint *)(gen_frame + 0xe0)) & 0xffff;
                (*(uint *)(gen_frame + 0x9c)) = (*(uint *)(gen_frame + 0xe0)) & 0x3ffff;
                (*(int * PTR32 *)(gen_frame + 0xac)) = (int *)0x3e8;
                (*(int *)(gen_frame + 0xa8)) = ((int *)(gen_frame + 0x44))[(int)((*(uint *)(gen_frame + 0xe0)) + 2)];
                do {
                  (*(int * PTR32 *)(gen_frame + 0xdc)) = (*(int * PTR32 *)(gen_frame + 0xcc));
                  ppiVar13 = &(*(int * PTR32 *)(gen_frame + 0xdc));
                  if ((int *)0x3e7 < (*(int * PTR32 *)(gen_frame + 0xcc))) {
                    ppiVar13 = &(*(int * PTR32 *)(gen_frame + 0xac));
                  }
                  piVar18 = *ppiVar13;
                  uVar11 = *(*(undefined4 * PTR32 *)(gen_frame + 0xd4));
                  *(uint *)((int)this_00 + 0x74) = *(uint *)((int)this_00 + 0x74) & 0x800000ff;
                  *(undefined4 *)((int)this_00 + 0x70) = uVar11;
                  *(undefined1 *)((int)this_00 + 0x74) = 8;
                  *(uint *)((int)this_00 + 0x74) = *(uint *)((int)this_00 + 0x74) & 0x7fffffff;
                  *(undefined4 *)((int)this_00 + 0x48) = *(*(undefined4 * PTR32 *)(gen_frame + 0xc0));
                  *((uint *)GEN_TOP(((int)this_00 + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xe8)) + 0x116c) * 8 + 0x2ac))) =
                       REFG(undefined4, 0x1302378) & 0xfffffff;
                  uVar8 = F_006901b0((*(uint *)(gen_frame + 0x7c)),(*(uint *)(gen_frame + 0xe0)));
                  *((uint *)GEN_TOP(((int)this_00 + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xe8)) + 0x116c) * 8 + 0x2a8))) = uVar8;
                  uVar11 = (*(undefined4 * PTR32 *)(gen_frame + 0x78))[1];
                  *(uint *)((int)this_00 + 0x6c) =
                       *(uint *)((int)this_00 + 0x6c) ^
                       ((*(int *)(gen_frame + 0xa8)) * (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0xd0))) * 0x3e8000 ^ *(uint *)((int)this_00 + 0x6c)) &
                       0x7fffff00;
                  *(undefined1 *)((int)this_00 + 0x6c) = 0x10;
                  *(uint *)((int)this_00 + 0x6c) = *(uint *)((int)this_00 + 0x6c) & 0x7fffffff;
                  *(undefined4 *)((int)this_00 + 0x68) = uVar11;
                  if ((*(undefined * PTR32 *)(gen_frame + 0xf0)) == (undefined *)0x0) {
                    uVar8 = 0;
                  }
                  else {
                    uVar8 = F_00b52db0((*(undefined * PTR32 *)(gen_frame + 0xf0)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xec)));
                  }
                  *(uint *)((int)this_00 + 0x60) = uVar8;
                  *(uint *)((int)this_00 + 0x50) = REFG(undefined4, 0x1302360) & 0x1f;
                  *(uint *)((int)this_00 + 8) =
                       (*(uint *)((int)this_00 + 8) & 0xfff90000 | ((int *)(gen_frame + 0x44))[4]) & 0xff97ffff |
                       0x110000;
                  uVar8 = REFG(undefined4, 0x130236c);
                  *(uint *)((int)this_00 + 0x58) = REFG(undefined4, 0x1302368) & 0xfe000000;
                  pvVar14 = (undefined *)((*(int *)(gen_frame + 0xa8)) * (int)piVar18);
                  *(uint *)((int)this_00 + 0x5c) = uVar8 & 0xfffffffc;
                  iVar15 = REFG(int, 0x1370b90);
                  (*(undefined * PTR32 *)(gen_frame + 0xc4)) = pvVar14;
                  uVar17 = (int)((int)(uintptr_t)piVar18) << 4;
                  uVar8 = *(int *)((int)this_00 + 0x18) + 0x60;
                  (*(uint *)(gen_frame + 0xa0)) = uVar17;
                  if (uVar8 < 0x8001) {
                    puVar12 = ((undefined4 *)GEN_TOP((*(int *)((int)this_00 + 0xc) + *(int *)((int)this_00 + 0x18))));
                    *(uint *)((int)this_00 + 0x18) = uVar8;
LAB_00653e85: ;
                    if (puVar12 != (undefined4 *)0x0) {
                      *puVar12 = 5;
                      puVar12[6] = uVar17;
                      puVar12[4] = pvVar14;
                      puVar12[1] = 6;
                      puVar12[2] = 0;
                      puVar12[3] = 0;
                      puVar12[5] = 0;
                      bVar7 = F_004dc830(this_00,puVar12 + 7);
                      if (bVar7 != 0) {
                        F_004d4810(this_00,puVar12);
                      }
                    }
                  }
                  else {
                    piVar18 = (int *)(REFG(int, 0x1370b90) + 0xc0);
                    (*(int * PTR32 *)(gen_frame + 0xdc)) = piVar18;
                    LOCK();
                    iVar4 = *piVar18;
                    *piVar18 = *piVar18 + 0x8000;
                    UNLOCK();
                    (*(int *)(gen_frame + 0x74)) = iVar4;
                    if (*(uint *)(iVar15 + 0xb8) < (uint)(*(int *)(iVar15 + 0xc4) * 3 + *piVar18)) {
                      LOCK();
                      *piVar18 = *piVar18 + -0x8000;
                      UNLOCK();
                    }
                    else {
                      puVar12 = ((undefined4 *)GEN_TOP((*(int *)(iVar15 + 0xbc) + iVar4)));
                      if (puVar12 != (undefined4 *)0x0) {
                        *(undefined4 * PTR32 *)((int)this_00 + 0xc) = puVar12;
                        *(undefined4 *)((int)this_00 + 0x18) = 0x60;
                        goto LAB_00653e85;
                      }
                    }
                  }
                  *(uint *)((int)this_00 + 0x50) = REFG(undefined4, 0x1302364) & 0x1f;
                  *(uint *)((int)this_00 + 8) =
                       (*(uint *)((int)this_00 + 8) & 0xfffc0000 | (*(uint *)(gen_frame + 0x9c))) & 0xffb7ffff | 0x340000
                  ;
                  uVar8 = REFG(undefined4, 0x130236c) & 0xfffffffc;
                  *(uint *)((int)this_00 + 0x58) = REFG(undefined4, 0x1302368) & 0xfe000000;
                  *(uint *)((int)this_00 + 0x5c) = uVar8;
                  iVar15 = REFG(int, 0x1370b90);
                  uVar8 = *(int *)((int)this_00 + 0x18) + 0x60;
                  if (uVar8 < 0x8001) {
                    puVar12 = ((undefined4 *)GEN_TOP((*(int *)((int)this_00 + 0xc) + *(int *)((int)this_00 + 0x18))));
                    *(uint *)((int)this_00 + 0x18) = uVar8;
LAB_00653f64: ;
                    if (puVar12 != (undefined4 *)0x0) {
                      *puVar12 = 5;
                      puVar12[2] = 0;
                      puVar12[3] = 0;
                      puVar12[5] = 0;
                      puVar12[1] = 6;
                      puVar12[4] = (*(undefined * PTR32 *)(gen_frame + 0xc4));
                      puVar12[6] = (*(uint *)(gen_frame + 0xa0));
                      bVar7 = F_004dc830(this_00,puVar12 + 7);
                      if (bVar7 != 0) {
                        F_004d4810(this_00,puVar12);
                      }
                    }
                  }
                  else {
                    piVar18 = (int *)(REFG(int, 0x1370b90) + 0xc0);
                    LOCK();
                    iVar4 = *piVar18;
                    *piVar18 = *piVar18 + 0x8000;
                    UNLOCK();
                    if (*(uint *)(iVar15 + 0xb8) < (uint)(*(int *)(iVar15 + 0xc4) * 3 + *piVar18)) {
                      LOCK();
                      *piVar18 = *piVar18 + -0x8000;
                      UNLOCK();
                    }
                    else {
                      puVar12 = ((undefined4 *)GEN_TOP((*(int *)(iVar15 + 0xbc) + iVar4)));
                      if (puVar12 != (undefined4 *)0x0) {
                        *(undefined4 * PTR32 *)((int)this_00 + 0xc) = puVar12;
                        *(undefined4 *)((int)this_00 + 0x18) = 0x60;
                        goto LAB_00653f64;
                      }
                    }
                  }
                  (*(int * PTR32 *)(gen_frame + 0xd0)) = (int *)((int)(*(int * PTR32 *)(gen_frame + 0xd0)) + 1);
                  piVar18 = (*(int * PTR32 *)(gen_frame + 0xcc)) + -0xfa;
                  (*(int * PTR32 *)(gen_frame + 0xcc)) = piVar18;
                } while (0 < (int)piVar18);
              }
            }
            (*(undefined4 * PTR32 *)(gen_frame + 0xd4)) = (*(undefined4 * PTR32 *)(gen_frame + 0xd4)) + 3;
            (*(undefined4 * PTR32 *)(gen_frame + 0xc0)) = (*(undefined4 * PTR32 *)(gen_frame + 0xc0)) + 3;
            uVar8 = (*(uint *)(gen_frame + 0xe0)) + 1;
            (*(uint *)(gen_frame + 0xe0)) = uVar8;
            pvVar14 = (*(undefined * PTR32 *)(gen_frame + 0xe8));
          } while (uVar8 < 2);
        }
      }
      uVar8 = (*(uint *)(gen_frame + 0xa4)) + 1;
      (*(uint *)(gen_frame + 0xa4)) = uVar8;
    } while (uVar8 < (*(uint *)(gen_frame + 0x70)));
  }
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xec)) = (*(undefined * PTR32 (*)[1])REFP(0x10abb24));
  uVar8 = F_00b52cb0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xec)));
  F_00c47745((*(uint *)(gen_frame + 0x12c)) ^ (uint)(uint)(gen_frame + 0x130));
  return uVar8;
}

/* ref: FUN_006544c0 */
unsigned int F_006544c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6544c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x220];
  int iVar1;
  int iVar2;
  undefined * pvVar3;
  double dVar4;
  undefined * pvVar5;
  byte bVar6;
  uint uVar7;
  undefined * PTR32 * ppvVar8;
  undefined * PTR32 * ppvVar9;
  int * piVar10;
  uint * puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  
  (*(uint *)(gen_frame + 0x218)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x21c);
  iVar1 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  (*(int * PTR32 *)(gen_frame + 0x8)) = param_1;
  iVar2 = *(int *)(iVar1 + 0x1a8);
  (*(int *)(gen_frame + 0xc)) = iVar1;
  F_0063bc60(REFG(undefined4, 0x13759f8),*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1a0) + 0xfc))));
  iVar14 = (*(int *)(gen_frame + 0xc));
  pvVar3 = REFG(undefined4, 0x13759f8);
  iVar1 = *(int *)(iVar1 + 0x1a8);
  *((uint *)GEN_TOP((iVar1 + 0x2ac + *(int *)((int)REFG(undefined4, 0x13759f8) + 0x54) * 8))) =
       *(uint *)((int)REFG(undefined4, 0x13759f8) + 0x68) & 0xfffffff;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2a8 + *(int *)((int)pvVar3 + 0x54) * 8))) =
       *(undefined4 *)(REFG(int, 0x1371288) + 0x90);
  uVar7 = *((uint *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0xc)) + 0x1a8) + 8))) >> 0x1b;
  if (uVar7 < 0x1a) {
LAB_0065457c: ;
    uVar13 = 0;
  }
  else if (uVar7 < 0x1e) {
    uVar13 = *(undefined4 *)(REFG(int, 0x1371288) + 0xe0);
  }
  else {
    if (uVar7 != 0x1e) goto LAB_0065457c;
    uVar13 = *(undefined4 *)(REFG(int, 0x1371288) + 0x20);
  }
  if (uVar7 < 0x1a) {
LAB_0065459a: ;
    uVar12 = 0;
  }
  else if (uVar7 < 0x1e) {
    uVar12 = *(undefined4 *)(REFG(int, 0x1371288) + 0xe8);
  }
  else {
    if (uVar7 != 0x1e) goto LAB_0065459a;
    uVar12 = *(undefined4 *)(REFG(int, 0x1371288) + 0x34);
  }
  dVar4 = *(double *)&REFG(undefined, 0x10968a0) * 0.0;
  *((uint *)GEN_TOP((iVar2 + 0x2ac + *(int *)((int)this + 0x90) * 8))) =
       *(uint *)((int)REFG(undefined4, 0x13759f8) + 0x60) & 0xfffffff;
  *((uint *)GEN_TOP((iVar2 + 0x2ac + *(int *)((int)this + 0x94) * 8))) =
       *(uint *)((int)REFG(undefined4, 0x13759f8) + 0x60) & 0xfffffff;
  *((undefined4 *)GEN_TOP((iVar2 + 0x2a8 + *(int *)((int)this + 0x90) * 8))) = uVar13;
  *((undefined4 *)GEN_TOP((iVar2 + 0x2a8 + *(int *)((int)this + 0x94) * 8))) = uVar12;
  pvVar3 = (undefined *)(int)dVar4;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = pvVar3;
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (undefined *)0x1ff;
  ppvVar8 = &(*(undefined * PTR32 *)(gen_frame + 0x14));
  if (0x1fe < (int)pvVar3) {
    ppvVar8 = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = *ppvVar8;
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (undefined *)0xfffffe00;
  ppvVar9 = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (-0x201 < (int)*ppvVar8) {
    ppvVar9 = &(*(undefined * PTR32 *)(gen_frame + 0x14));
  }
  *((uint *)GEN_TOP((iVar2 + 0x2ac + *(int *)((int)this + 0x98) * 8))) = ((uint)*ppvVar9 & 0x3ff) << 10 | 0x340
  ;
  *((undefined4 *)GEN_TOP((iVar2 + 0x2a8 + *(int *)((int)this + 0x98) * 8))) =
       *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1a4) + 0xfc)));
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = pvVar3;
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (undefined *)0x1ff;
  ppvVar8 = &(*(undefined * PTR32 *)(gen_frame + 0x14));
  if (0x1fe < (int)pvVar3) {
    ppvVar8 = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = *ppvVar8;
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (undefined *)0xfffffe00;
  ppvVar9 = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (-0x201 < (int)*ppvVar8) {
    ppvVar9 = &(*(undefined * PTR32 *)(gen_frame + 0x14));
  }
  *((uint *)GEN_TOP((iVar2 + 0x2ac + *(int *)((int)this + 0x9c) * 8))) = ((uint)*ppvVar9 & 0x3ff) << 10 | 0x340
  ;
  *((undefined4 *)GEN_TOP((iVar2 + 0x2a8 + *(int *)((int)this + 0x9c) * 8))) =
       *(undefined4 *)((int)this + 0x1ac);
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = pvVar3;
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (undefined *)0x1ff;
  ppvVar8 = &(*(undefined * PTR32 *)(gen_frame + 0x14));
  if (0x1fe < (int)pvVar3) {
    ppvVar8 = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = *ppvVar8;
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (undefined *)0xfffffe00;
  ppvVar9 = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (-0x201 < (int)*ppvVar8) {
    ppvVar9 = &(*(undefined * PTR32 *)(gen_frame + 0x14));
  }
  *((uint *)GEN_TOP((iVar2 + 0x2ac + *(int *)((int)this + 0xa0) * 8))) = ((uint)*ppvVar9 & 0x3ff) << 10 | 0x2ea
  ;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = pvVar3;
  *((undefined4 *)GEN_TOP((iVar2 + 0x2a8 + *(int *)((int)this + 0xa0) * 8))) =
       *(undefined4 *)(REFG(int, 0x1371288) + 0x40);
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (undefined *)0x1ff;
  ppvVar8 = &(*(undefined * PTR32 *)(gen_frame + 0x14));
  if (0x1fe < (int)pvVar3) {
    ppvVar8 = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = *ppvVar8;
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (undefined *)0xfffffe00;
  ppvVar9 = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (-0x201 < (int)*ppvVar8) {
    ppvVar9 = &(*(undefined * PTR32 *)(gen_frame + 0x14));
  }
  *((uint *)GEN_TOP((iVar2 + 0x2ac + *(int *)((int)this + 0x1d4) * 8))) =
       ((uint)*ppvVar9 & 0x3ff) << 10 | 0x2ea;
  *((undefined4 *)GEN_TOP((iVar2 + 0x2a8 + *(int *)((int)this + 0x1d4) * 8))) =
       *(undefined4 *)(REFG(int, 0x1371288) + 0x1a4);
  if ((*(int *)((int)this + 4) != -1) && (*(int *)((int)this + 8) != 0)) {
    *((int *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0xc)) + 0x1a8) + 0xa8 + *(int *)((int)this + 4) * 4))) =
         *(int *)((int)this + 8);
  }
  *((undefined4 *)GEN_TOP((iVar2 + 0xa8 + *(int *)((int)this + 0x1a8) * 4))) =
       *(undefined4 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x14);
  *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xfe7fffff | 0x6000000;
  *((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0xc)) + 0x1a8) + 0xa8 + *(int *)((int)REFG(undefined4, 0x13759f8) + 4) * 4))) =
       *(undefined4 *)((int)REFG(undefined4, 0x13759f8) + 8);
  uVar7 = *((uint *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0xc)) + 0x1a8) + 8)));
  iVar1 = *((int *)GEN_TOP(((uVar7 >> 0x1b) * 0x358 + ((uVar7 >> 0x17 & 0xf) + 1) * 0x34 + REFG(int, 0x137127c))));
  if (iVar1 != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0xc)) + 0x1a8) + 0xa8 + *(int *)((int)REFG(undefined4, 0x13759f8) + 0x2c) * 4))) =
         *(undefined4 *)(iVar1 + 0x120);
  }
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = *(undefined * PTR32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x10);
  bVar6 = F_004ffbd0(*(undefined * PTR32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x10),0);
  pvVar3 = REFG(undefined4, 0x13759f8);
  (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0)) = bVar6;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x14)), 1, 3),bVar6)));
  iVar1 = *(int *)(iVar14 + 0x1a8);
  if ((*(uint *)(iVar1 + 8) & 0xf8000000) == 0xf0000000) {
    *((uint *)GEN_TOP((iVar1 + 0x2ac + *(int *)((int)REFG(undefined4, 0x13759f8) + 0x34) * 8))) =
         *(uint *)((int)REFG(undefined4, 0x13759f8) + 100) & 0xfffffff;
  }
  uVar7 = *((uint *)GEN_TOP((*(int *)(iVar14 + 0x1a8) + 8))) >> 0x1b;
  if (uVar7 < 0x1a) {
LAB_0065490e: ;
    uVar13 = 0;
  }
  else if (uVar7 < 0x1e) {
    uVar13 = *(undefined4 *)(REFG(int, 0x1371288) + 0xe4);
  }
  else {
    if (uVar7 != 0x1e) goto LAB_0065490e;
    uVar13 = *(undefined4 *)(REFG(int, 0x1371288) + 0x24);
  }
  *((undefined4 *)GEN_TOP((iVar1 + 0x2a8 + *(int *)((int)pvVar3 + 0x34) * 8))) = uVar13;
  pvVar3 = REFG(undefined4, 0x13759f8);
  iVar1 = *(int *)(iVar14 + 0x1a8);
  if ((*(uint *)(iVar1 + 8) & 0xf8000000) == 0xf0000000) {
    *((uint *)GEN_TOP((iVar1 + 0x2ac + *(int *)((int)REFG(undefined4, 0x13759f8) + 0x38) * 8))) =
         *(uint *)((int)REFG(undefined4, 0x13759f8) + 100) & 0xfffffff;
    *((uint *)GEN_TOP((iVar1 + 0x2ac + *(int *)((int)pvVar3 + 0x3c) * 8))) =
         *(uint *)((int)pvVar3 + 100) & 0xfffffff;
    iVar14 = (*(int *)(gen_frame + 0xc));
  }
  uVar7 = *((uint *)GEN_TOP((*(int *)(iVar14 + 0x1a8) + 8))) >> 0x1b;
  if (uVar7 < 0x1a) {
LAB_00654997: ;
    uVar13 = 0;
  }
  else if (uVar7 < 0x1e) {
    uVar13 = *((undefined4 *)GEN_TOP((*(int *)((int)pvVar3 + 0x28c) + 0xfc)));
  }
  else {
    if (uVar7 != 0x1e) goto LAB_00654997;
    uVar13 = *(undefined4 *)(REFG(int, 0x1371288) + 0x28);
  }
  *((undefined4 *)GEN_TOP((iVar1 + 0x2a8 + *(int *)((int)pvVar3 + 0x38) * 8))) = uVar13;
  uVar7 = *((uint *)GEN_TOP((*(int *)(iVar14 + 0x1a8) + 8))) >> 0x1b;
  if (0x19 < uVar7) {
    if (uVar7 < 0x1e) {
      uVar13 = *((undefined4 *)GEN_TOP((*(int *)((int)pvVar3 + 0x28c) + 0xfc)));
      goto LAB_006549d9;
    }
    if (uVar7 == 0x1e) {
      uVar13 = *(undefined4 *)(REFG(int, 0x1371288) + 0x2c);
      goto LAB_006549d9;
    }
  }
  uVar13 = 0;
LAB_006549d9: ;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2a8 + *(int *)((int)pvVar3 + 0x3c) * 8))) = uVar13;
  (*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x1302360) & 0x1f;
  (*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x1302360) & 0x1f;
  piVar10 = (int *)(REFG(undefined4, 0x1302370) & 0x7fffffff);
  uVar15 = REFG(undefined4, 0x1302368) & 0xfe000000;
  uVar7 = REFG(undefined4, 0x130236c) & 0xfffffffc;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x4;
  (*(uint *)(gen_frame + 0x1c)) = REFG(undefined4, 0x1302350) & 0x7ffffff;
  (*(uint *)(gen_frame + 0x28)) = uVar15;
  (*(uint *)(gen_frame + 0x2c)) = uVar7;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 9;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0x80100;
  (*(uint *)(gen_frame + 0x48)) = uVar15;
  (*(uint *)(gen_frame + 0x4c)) = uVar7;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(int * PTR32 *)(gen_frame + 0x8)) = piVar10;
  (*(int * PTR32 *)(gen_frame + 0x30)) = piVar10;
  (*(int * PTR32 *)(gen_frame + 0x50)) = piVar10;
  if (*(char *)((int)this + 0x1b0) != '\0') {
    puVar11 = (uint *)F_004d4a30(&(*(int *)(gen_frame + 0xc)),2,1,0,0,(float)(float10)0,(float)(float10)0);
    (*(int * PTR32 *)(gen_frame + 0x30)) = (int *)(*puVar11 & 0x7fffffff);
    puVar11 = (uint *)F_004d4a30(&(*(int *)(gen_frame + 0xc)),2,1,0,0,(float)(float10)0,(float)(float10)0);
    (*(int * PTR32 *)(gen_frame + 0x50)) = (int *)(*puVar11 & 0x7fffffff);
  }
  pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x14));
  pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x10));
  uVar13 = 2;
  if ((byte)(*(undefined * PTR32 *)(gen_frame + 0x14)) != '\x02') {
    (*(undefined4 *)(gen_frame + 0x58)) = 5;
    (*(undefined4 *)(gen_frame + 0x5c)) = 0x7a88286;
    (*(undefined4 *)(gen_frame + 0x60)) = 0xd;
    (*(uint *)(gen_frame + 0x68)) = uVar15;
    (*(uint *)(gen_frame + 0x6c)) = uVar7;
    (*(int * PTR32 *)(gen_frame + 0x70)) = (*(int * PTR32 *)(gen_frame + 0x8));
    (*(undefined4 *)(gen_frame + 0x74)) = 0x19;
    uVar13 = 3;
  }
  F_0064b9d0(this,(*(undefined * PTR32 *)(gen_frame + 0x10)),(*(undefined * PTR32 *)(gen_frame + 0x14)),&(*(undefined * PTR32 *)(gen_frame + 0x18)),uVar13);
  if (*(char *)((int)this + 0x1b1) != '\0') {
    F_006371c0(this,pvVar3,pvVar5);
    F_006374d0(this,pvVar3,pvVar5);
  }
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x8;
  (*(uint *)(gen_frame + 0x1c)) = 0x7008010;
  (*(uint *)(gen_frame + 0x20)) = 0xd;
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x1302368) & 0xfe000000;
  (*(uint *)(gen_frame + 0x2c)) = REFG(undefined4, 0x130236c) & 0xfffffffc;
  (*(undefined4 *)(gen_frame + 0x34)) = 0x41770;
  (*(int * PTR32 *)(gen_frame + 0x30)) = (int *)(REFG(undefined4, 0x1302370) & 0x7fffffff);
  if (*(char *)((int)this + 0x1b0) != '\0') {
    puVar11 = (uint *)F_004d4a30(&(*(int * PTR32 *)(gen_frame + 0x8)),2,1,0,0,(float)(float10)0,(float)(float10)0);
    (*(int * PTR32 *)(gen_frame + 0x30)) = (int *)(*puVar11 & 0x7fffffff);
  }
  F_0064bd90(this,pvVar3,pvVar5,&(*(undefined * PTR32 *)(gen_frame + 0x18)),1);
  F_00c47745((*(uint *)(gen_frame + 0x218)) ^ (uint)(uint)(gen_frame + 0x21c));
  return 0;
}

/* ref: FUN_00654c20 */
uint F_00654c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x654c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined * this_00;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar2 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  iVar3 = *(int *)(iVar2 + 0x1a8);
  *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) & 0xfe7fffff | 0x6000000;
  *((uint *)GEN_TOP((iVar3 + 0x2ac + *(int *)((int)this + 0xac) * 8))) =
       *(uint *)(REFG(int, 0x13759f8) + 0x60) & 0xfffffff;
  uVar5 = *((uint *)GEN_TOP((*(int *)(iVar2 + 0x1a8) + 8))) >> 0x1b;
  if (0x19 < uVar5) {
    if (uVar5 < 0x1e) {
      uVar6 = *(undefined4 *)(REFG(int, 0x1371288) + 0xe0);
      goto LAB_00654ca7;
    }
    if (uVar5 == 0x1e) {
      uVar6 = *(undefined4 *)(REFG(int, 0x1371288) + 0x20);
      goto LAB_00654ca7;
    }
  }
  uVar6 = 0;
LAB_00654ca7: ;
  *((undefined4 *)GEN_TOP((iVar3 + 0x2a8 + *(int *)((int)this + 0xac) * 8))) = uVar6;
  *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x1a8) + 0xa8 + *(int *)(REFG(int, 0x13759f8) + 4) * 4))) =
       *(undefined4 *)(REFG(int, 0x13759f8) + 8);
  uVar5 = *((uint *)GEN_TOP((*(int *)(iVar2 + 0x1a8) + 8)));
  iVar3 = *((int *)GEN_TOP(((uVar5 >> 0x1b) * 0x358 + ((uVar5 >> 0x17 & 0xf) + 1) * 0x34 + REFG(int, 0x137127c))));
  if (iVar3 != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x1a8) + 0xa8 + *(int *)(REFG(int, 0x13759f8) + 0x2c) * 4))) =
         *(undefined4 *)(iVar3 + 0x120);
  }
  if ((*(int *)((int)this + 0xb4) != -1) && (*(int *)((int)this + 0xb8) != 0)) {
    *((int *)GEN_TOP((*(int *)(iVar2 + 0x1a8) + 0xa8 + *(int *)((int)this + 0xb4) * 4))) =
         *(int *)((int)this + 0xb8);
  }
  iVar2 = *param_1;
  this_00 = *(undefined * PTR32 *)(iVar2 + 0x10);
  bVar4 = F_004ffbd0(this_00,(uint)REFG(undefined1, 0x1488098));
  iVar3 = *(int *)((int)this_00 + 0xb8);
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar4);
  uVar7 = (uint)*(ushort *)(iVar3 + 0x1a + (uint)bVar4 * 0x3c);
  uVar5 = iVar3 + (uint)bVar4 * 0x3c;
  uVar1 = *(ushort *)(uVar5 + 0x18);
  uVar8 = 0;
  if (uVar7 != 0) {
    do {
      uVar5 = F_0064c490(this,iVar2,(*(undefined4 *)(gen_frame + 0x8)),uVar8 + uVar1);
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar7);
  }
  return uVar5;
}

/* ref: Client::Graphics::Render::LightShaftRenderer::vf2 */
unsigned int F_00654da0(unsigned int gen_a0)
{
  GEN_ENTER(0x654da0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00637d90(this);
  F_0066e800(this + 4,this,((code *)REFP(0x64c910)),1);
  return 0;
}

/* ref: FUN_00654dc0 */
byte F_00654dc0(unsigned int gen_a0)
{
  GEN_ENTER(0x654dc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  byte bVar3;
  uint * puVar4;
  undefined * pvVar5;
  uint in_ecx;
  uint * puVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = 0x20;
  puVar6 = (uint *)((int)this + 8);
  do {
    *puVar6 = *puVar6 & 0xfffffffe;
    *puVar6 = *puVar6 | 2;
    puVar4 = puVar6 + 6;
    iVar7 = 0x10;
    do {
      *puVar4 = *puVar4 & 0xfffffffe;
      *puVar4 = *puVar4 | 2;
      puVar4 = puVar4 + 0xd;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    puVar6 = puVar6 + 0xd6;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  *(uint *)((int)this + 0x6458) = *(uint *)((int)this + 0x6458) | 1;
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(REFG(int, 0x1370b90) + 0x2c) + 0x34)));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x66f8);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
  }
  *(int * PTR32 *)((int)this + 0x66f8) = piVar1;
  *(undefined4 *)((int)this + 0x6708) = 1;
  piVar1 = *(int * PTR32 *)(REFG(int, 0x1371288) + 0x20);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x670c);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
  }
  *(int * PTR32 *)((int)this + 0x670c) = piVar1;
  *(uint *)((int)this + 0x66e0) = *(uint *)((int)this + 0x66e0) | 1;
  pvVar5 = (undefined *)F_00406b90(0x3940,0,0);
  if (pvVar5 == (undefined *)0x0) {
    REFG(undefined4, 0x1370c1c) = (undefined *)0x0;
  }
  else {
    REFG(undefined4, 0x1370c1c) = (undefined *)F_00b13ef0(pvVar5);
  }
  bVar3 = F_00b15450(REFG(undefined4, 0x1370c1c));
  if (bVar3 != 0) {
    pvVar5 = (undefined *)F_00406b90(0x8020,0,0);
    if (pvVar5 == (undefined *)0x0) {
      REFG(undefined4, 0x1487c58) = (undefined *)0x0;
    }
    else {
      REFG(undefined4, 0x1487c58) = (undefined *)F_00b7e160(pvVar5);
    }
    bVar3 = F_00b7e270(REFG(undefined4, 0x1487c58));
    if (bVar3 != 0) {
      in_ecx = F_00406b90(0x1e0,0,0);
      if (in_ecx == 0) {
        REFG(undefined4, 0x13712a4) = (undefined *)0x0;
      }
      else {
        REFG(undefined4, 0x13712a4) = (undefined *)F_00b7f390(in_ecx);
      }
      bVar3 = F_00b7f6e0(REFG(undefined4, 0x13712a4));
      if (bVar3 != 0) {
        bVar3 = F_0063bf90((undefined *)((int)this + 0xac2c));
        if (bVar3 != 0) {
          bVar3 = F_0066ebc0((undefined *)((int)this + 0x6b04),*(undefined4 *)(REFG(int, 0x1370b90) + 0x24));
          if (bVar3 != 0) {
            F_00663d10();
            bVar3 = F_00b80320(REFG(undefined4, 0x1487c64));
            if (bVar3 != 0) {
              bVar3 = F_00641410((undefined *)((int)this + 0x10528));
              if (bVar3 != 0) {
                bVar3 = F_00621930((int)this + 0x1061c);
                if (bVar3 != 0) {
                  bVar3 = F_00668ba0();
                  if (bVar3 != 0) {
                    bVar3 = F_0063ae10(REFG(undefined4, 0x1487c60));
                    if (bVar3 != 0) {
                      bVar3 = F_006708d0();
                      if (bVar3 != 0) {
                        bVar3 = F_0063b730(REFG(undefined4, 0x13759f8));
                        if (bVar3 != 0) {
                          bVar3 = F_006256b0(this);
                          if (bVar3 != 0) {
                            *(undefined4 *)((int)this + 0x11e40) = 0x7f7f7f;
                            *(uint *)((int)this + 0x11e44) = *(uint *)((int)this + 0x11e44) | 1;
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

/* ref: FUN_00654fd0 */
uint F_00654fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x654fd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  byte bVar1;
  undefined * this;
  int * this_00;
  
  this = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                           (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),0x78,0x10)));
  if (this != (undefined *)0x0) {
    this_00 = (int *)F_00627830(this);
    if (this_00 != (int *)0x0) {
      bVar1 = F_0064cc70(this_00,param_1,param_2,param_3,param_4,param_5);
      if (bVar1 != 0) {
        return (uint)this_00;
      }
      ((code *)*(gen_code32 *)(*this_00 + 0xc))(this_00);
    }
  }
  return 0;
}

/* ref: FUN_00655030 */
byte F_00655030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x655030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  float10 fVar7;
  
  (*(uint *)(gen_frame + 0x10c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x110);
  (*(uint *)(gen_frame + 0x6c)) = param_1;
  (*(int *)(gen_frame + 0x70)) = *(int *)((int)this + 0x20);
  if (*(int *)((int)this + 0x20) != 0) {
    (*(int *)(gen_frame + 0x78)) = *(int *)((int)this + 0x18);
    (*(int *)(gen_frame + 0x68)) = *(int *)((int)this + 0x68);
    (*(uint *)(gen_frame + 0x74)) = *(uint *)((int)this + 0x6c);
    (*(uint *)(gen_frame + 0x7c)) = 0;
    if (*(uint *)((int)this + 0x6c) != 0) {
      do {
        uVar1 = *(ushort *)((*(int *)(gen_frame + 0x68)) + (*(uint *)(gen_frame + 0x7c)) * 2);
        if (uVar1 == 0xffff) {
          puVar5 = &REFG(float, 0x1302d00);
          puVar6 = ((undefined4 *)(gen_frame + 0x0));
          for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
        }
        else {
          F_006705e0(((undefined *)GEN_TOP(((uint)(uVar1 >> 0xc) * 0x120 + *(int *)((*(int *)(gen_frame + 0x70)) + 0x4c)))),((undefined4 *)(gen_frame + 0x0)),
                       uVar1 & 0xfff);
        }
        puVar5 = ((undefined4 *)(gen_frame + 0x0));
        puVar6 = ((undefined4 *)(gen_frame + 0xc0));
        for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        fVar7 = F_004ef2d0(((undefined4 *)(gen_frame + 0xc0)));
        if ((float10)*(double *)&REFG(undefined, 0x10abfa0) < fVar7) {
          F_004f45d0(((undefined1 *)(gen_frame + 0x80)),((undefined4 *)(gen_frame + 0xc0)));
          uVar3 = (*(uint *)(gen_frame + 0x6c));
          F_004ee670(&(*(undefined4 *)(gen_frame + 0x40)),(*(uint *)(gen_frame + 0x6c)),(uint)((undefined1 *)(gen_frame + 0x80)));
          F_004ee850(&(*(undefined4 *)(gen_frame + 0x50)),uVar3 + 0x10,(uint)((undefined1 *)(gen_frame + 0x80)));
          (*(undefined4 *)(gen_frame + 0x20)) = (*(undefined4 *)(gen_frame + 0x40));
          (*(undefined4 *)(gen_frame + 0x24)) = (*(undefined4 *)(gen_frame + 0x44));
          (*(undefined4 *)(gen_frame + 0x28)) = (*(undefined4 *)(gen_frame + 0x48));
          (*(undefined4 *)(gen_frame + 0x30)) = (*(undefined4 *)(gen_frame + 0x50));
          (*(undefined4 *)(gen_frame + 0x34)) = (*(undefined4 *)(gen_frame + 0x54));
          (*(undefined4 *)(gen_frame + 0x38)) = (*(undefined4 *)(gen_frame + 0x58));
          bVar2 = F_006601a0(&(*(undefined4 *)(gen_frame + 0x20)),((*(uint *)(gen_frame + 0x7c)) & 0xffff) * 0x20 + *(int *)((*(int *)(gen_frame + 0x78)) + 0x100));
          if (bVar2 != 0) {
            bVar2 = 1;
            goto LAB_0065509b;
          }
        }
        uVar3 = (*(uint *)(gen_frame + 0x7c)) + 1;
        (*(uint *)(gen_frame + 0x7c)) = uVar3;
      } while (uVar3 < (*(uint *)(gen_frame + 0x74)));
    }
  }
  bVar2 = 0;
LAB_0065509b: ;
  F_00c47745((*(uint *)(gen_frame + 0x10c)) ^ (uint)(uint)(gen_frame + 0x110));
  return bVar2;
}

/* ref: FUN_00655230 */
byte F_00655230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x655230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  ushort uVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  float10 fVar8;
  
  (*(uint *)(gen_frame + 0x10c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x110);
  (*(undefined4 *)(gen_frame + 0x78)) = param_2;
  (*(uint *)(gen_frame + 0x70)) = param_1;
  (*(int *)(gen_frame + 0x68)) = *(int *)((int)this + 0x20);
  if (*(int *)((int)this + 0x20) != 0) {
    (*(int *)(gen_frame + 0x6c)) = *(int *)((int)this + 0x18);
    (*(int *)(gen_frame + 0x64)) = *(int *)((int)this + 0x68);
    (*(uint *)(gen_frame + 0x74)) = *(uint *)((int)this + 0x6c);
    (*(uint *)(gen_frame + 0x7c)) = 0;
    if (*(uint *)((int)this + 0x6c) != 0) {
      do {
        uVar1 = *(ushort *)((*(int *)(gen_frame + 0x64)) + (*(uint *)(gen_frame + 0x7c)) * 2);
        if (uVar1 == 0xffff) {
          puVar6 = &REFG(float, 0x1302d00);
          puVar7 = ((undefined4 *)(gen_frame + 0x0));
          for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
        }
        else {
          F_006705e0(((undefined *)GEN_TOP(((uint)(uVar1 >> 0xc) * 0x120 + *(int *)((*(int *)(gen_frame + 0x68)) + 0x4c)))),((undefined4 *)(gen_frame + 0x0)),
                       uVar1 & 0xfff);
        }
        puVar6 = ((undefined4 *)(gen_frame + 0x0));
        puVar7 = ((undefined4 *)(gen_frame + 0xc0));
        for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        fVar8 = F_004ef2d0(((undefined4 *)(gen_frame + 0xc0)));
        if ((float10)*(double *)&REFG(undefined, 0x10abfa0) < fVar8) {
          F_004f45d0(((undefined1 *)(gen_frame + 0x80)),((undefined4 *)(gen_frame + 0xc0)));
          uVar4 = (*(uint *)(gen_frame + 0x70));
          F_004ee670(&(*(undefined4 *)(gen_frame + 0x40)),(*(uint *)(gen_frame + 0x70)),(uint)((undefined1 *)(gen_frame + 0x80)));
          F_004ee850(&(*(undefined4 *)(gen_frame + 0x50)),uVar4 + 0x10,(uint)((undefined1 *)(gen_frame + 0x80)));
          uVar2 = (*(undefined4 *)(gen_frame + 0x78));
          (*(undefined4 *)(gen_frame + 0x20)) = (*(undefined4 *)(gen_frame + 0x40));
          (*(undefined4 *)(gen_frame + 0x24)) = (*(undefined4 *)(gen_frame + 0x44));
          (*(undefined4 *)(gen_frame + 0x28)) = (*(undefined4 *)(gen_frame + 0x48));
          (*(undefined4 *)(gen_frame + 0x30)) = (*(undefined4 *)(gen_frame + 0x50));
          (*(undefined4 *)(gen_frame + 0x34)) = (*(undefined4 *)(gen_frame + 0x54));
          (*(undefined4 *)(gen_frame + 0x38)) = (*(undefined4 *)(gen_frame + 0x58));
          bVar3 = F_006602f0(&(*(undefined4 *)(gen_frame + 0x20)),((*(uint *)(gen_frame + 0x7c)) & 0xffff) * 0x20 + *(int *)((*(int *)(gen_frame + 0x6c)) + 0x100),
                               (*(undefined4 *)(gen_frame + 0x78)));
          if (bVar3 != 0) {
            F_004eea10(uVar2,(uint)((undefined4 *)(gen_frame + 0xc0)));
            bVar3 = 1;
            goto LAB_006552a4;
          }
        }
        uVar4 = (*(uint *)(gen_frame + 0x7c)) + 1;
        (*(uint *)(gen_frame + 0x7c)) = uVar4;
      } while (uVar4 < (*(uint *)(gen_frame + 0x74)));
    }
  }
  bVar3 = 0;
LAB_006552a4: ;
  F_00c47745((*(uint *)(gen_frame + 0x10c)) ^ (uint)(uint)(gen_frame + 0x110));
  return bVar3;
}

/* ref: FUN_00655450 */
byte F_00655450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x655450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x150];
  ushort uVar1;
  byte bVar2;
  float * pfVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  (*(uint *)(gen_frame + 0x13c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x140);
  (*(uint *)(gen_frame + 0x90)) = param_1;
  (*(float * PTR32 *)(gen_frame + 0x98)) = param_2;
  (*(int *)(gen_frame + 0x88)) = *(int *)((int)this + 0x20);
  if (*(int *)((int)this + 0x20) != 0) {
    (*(int *)(gen_frame + 0x9c)) = *(int *)((int)this + 0x18);
    (*(int *)(gen_frame + 0x94)) = *(int *)((int)this + 0x68);
    (*(uint *)(gen_frame + 0x8c)) = *(uint *)((int)this + 0x6c);
    (*(float *)(gen_frame + 0xa8)) = REFG(float, 0x1090998);
    (*(char *)(gen_frame + 0xaf)) = '\0';
    (*(uint *)(gen_frame + 0xa4)) = 0;
    if (*(uint *)((int)this + 0x6c) != 0) {
      do {
        uVar1 = *(ushort *)((*(int *)(gen_frame + 0x94)) + (*(uint *)(gen_frame + 0xa4)) * 2);
        if (uVar1 == 0xffff) {
          puVar6 = &REFG(float, 0x1302d00);
          puVar7 = ((undefined4 *)(gen_frame + 0x10));
          for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
        }
        else {
          F_006705e0(((undefined *)GEN_TOP(((uint)(uVar1 >> 0xc) * 0x120 + *(int *)((*(int *)(gen_frame + 0x88)) + 0x4c)))),((undefined4 *)(gen_frame + 0x10)),
                       uVar1 & 0xfff);
        }
        puVar6 = ((undefined4 *)(gen_frame + 0x10));
        puVar7 = ((undefined4 *)(gen_frame + 0xb0));
        for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        pfVar3 = (float *)F_005fe770(((undefined4 *)(gen_frame + 0xb0)),(uint)((undefined1 *)(gen_frame + 0x0)));
        (*(float *)(gen_frame + 0x70)) = *pfVar3;
        (*(float *)(gen_frame + 0x74)) = pfVar3[1];
        (*(float *)(gen_frame + 0x78)) = pfVar3[2];
        if (!(((float10)pfVar3[1] * (float10)*pfVar3) * (float10)pfVar3[2] <=
             (float10)*(double *)&REFG(undefined, 0x10abfa0))) {
          F_004f45d0(((undefined1 *)(gen_frame + 0xf0)),((undefined4 *)(gen_frame + 0xb0)));
          uVar4 = (*(uint *)(gen_frame + 0x90));
          F_004ee670(&(*(undefined4 *)(gen_frame + 0x50)),(*(uint *)(gen_frame + 0x90)),(uint)((undefined1 *)(gen_frame + 0xf0)));
          F_004ee670(&(*(undefined4 *)(gen_frame + 0x60)),uVar4 + 0x10,(uint)((undefined1 *)(gen_frame + 0xf0)));
          (*(undefined4 *)(gen_frame + 0x30)) = (*(undefined4 *)(gen_frame + 0x50));
          (*(undefined4 *)(gen_frame + 0x34)) = (*(undefined4 *)(gen_frame + 0x54));
          (*(undefined4 *)(gen_frame + 0x38)) = (*(undefined4 *)(gen_frame + 0x58));
          (*(undefined4 *)(gen_frame + 0x40)) = (*(undefined4 *)(gen_frame + 0x60));
          (*(undefined4 *)(gen_frame + 0x44)) = (*(undefined4 *)(gen_frame + 0x64));
          (*(undefined4 *)(gen_frame + 0x48)) = (*(undefined4 *)(gen_frame + 0x68));
          bVar2 = F_00660580(&(*(undefined4 *)(gen_frame + 0x30)),((*(uint *)(gen_frame + 0xa4)) & 0xffff) * 0x20 + *(int *)((*(int *)(gen_frame + 0x9c)) + 0x100),
                               &(*(float *)(gen_frame + 0xa0)));
          if (bVar2 != 0) {
            pfVar3 = &(*(float *)(gen_frame + 0xa8));
            if (!((float10)(*(float *)(gen_frame + 0xa8)) < (float10)(*(float *)(gen_frame + 0xa0)))) {
              pfVar3 = &(*(float *)(gen_frame + 0xa0));
            }
            (*(float *)(gen_frame + 0xa8)) = *pfVar3;
            (*(char *)(gen_frame + 0xaf)) = '\x01';
          }
        }
        uVar4 = (*(uint *)(gen_frame + 0xa4)) + 1;
        (*(uint *)(gen_frame + 0xa4)) = uVar4;
      } while (uVar4 < (*(uint *)(gen_frame + 0x8c)));
      if ((*(char *)(gen_frame + 0xaf)) != '\0') {
        *(*(float * PTR32 *)(gen_frame + 0x98)) = (*(float *)(gen_frame + 0xa8));
        bVar2 = 1;
        goto LAB_006556cf;
      }
    }
  }
  bVar2 = 0;
LAB_006556cf: ;
  F_00c47745((*(uint *)(gen_frame + 0x13c)) ^ (uint)(uint)(gen_frame + 0x140));
  return bVar2;
}

/* ref: FUN_006556f0 */
byte F_006556f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6556f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  ushort uVar1;
  undefined * this_00;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  (*(uint *)(gen_frame + 0xcc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd0);
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = param_1;
  (*(int *)(gen_frame + 0x20)) = *(int *)((int)this + 0x20);
  if (*(int *)((int)this + 0x20) != 0) {
    (*(int *)(gen_frame + 0x18)) = *(int *)((int)this + 0x68);
    (*(int *)(gen_frame + 0x14)) = *(int *)((int)this + 0x18);
    (*(uint *)(gen_frame + 0x24)) = *(uint *)((int)this + 0x6c);
    (*(uint *)(gen_frame + 0x2c)) = 0;
    if (*(uint *)((int)this + 0x6c) != 0) {
      do {
        uVar1 = *(ushort *)((*(int *)(gen_frame + 0x18)) + (*(uint *)(gen_frame + 0x2c)) * 2);
        (*(int *)(gen_frame + 0x28)) = ((*(uint *)(gen_frame + 0x2c)) & 0xffff) * 0x20 + *(int *)((*(int *)(gen_frame + 0x14)) + 0x100);
        if (uVar1 == 0xffff) {
          puVar5 = &REFG(float, 0x1302d00);
          puVar6 = ((undefined4 *)(gen_frame + 0x30));
          for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
        }
        else {
          F_006705e0(((undefined *)GEN_TOP(((uint)(uVar1 >> 0xc) * 0x120 + *(int *)((*(int *)(gen_frame + 0x20)) + 0x4c)))),((undefined4 *)(gen_frame + 0x30)),
                       uVar1 & 0xfff);
        }
        F_005fede0(((undefined1 *)(gen_frame + 0x70)),((undefined4 *)(gen_frame + 0x30)),(*(int *)(gen_frame + 0x28)));
        this_00 = (*(undefined * PTR32 *)(gen_frame + 0x1c));
        (*(undefined4 *)(gen_frame + 0x0)) = (*(undefined4 *)(gen_frame + 0xa0));
        (*(undefined4 *)(gen_frame + 0x4)) = (*(undefined4 *)(gen_frame + 0xa4));
        (*(undefined4 *)(gen_frame + 0x8)) = (*(undefined4 *)(gen_frame + 0xa8));
        (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0xb4)) * (float10)(*(float *)(gen_frame + 0xb4)) +
                           (float10)(*(float *)(gen_frame + 0xb0)) * (float10)(*(float *)(gen_frame + 0xb0))) +
                          (float10)(*(float *)(gen_frame + 0xb8)) * (float10)(*(float *)(gen_frame + 0xb8)))));
        bVar2 = F_006600f0((*(undefined * PTR32 *)(gen_frame + 0x1c)),(uint)&(*(undefined4 *)(gen_frame + 0x0)));
        if ((bVar2 != 0) ||
           ((bVar2 = F_00660050(this_00,(uint)&(*(undefined4 *)(gen_frame + 0x0))), bVar2 != 0 &&
            (bVar2 = F_0065feb0(this_00,((undefined1 *)(gen_frame + 0x70))), bVar2 != 0)))) {
          bVar2 = 1;
          goto LAB_00655759;
        }
        uVar3 = (*(uint *)(gen_frame + 0x2c)) + 1;
        (*(uint *)(gen_frame + 0x2c)) = uVar3;
      } while (uVar3 < (*(uint *)(gen_frame + 0x24)));
    }
  }
  bVar2 = 0;
LAB_00655759: ;
  F_00c47745((*(uint *)(gen_frame + 0xcc)) ^ (uint)(uint)(gen_frame + 0xd0));
  return bVar2;
}

/* ref: FUN_006558a0 */
uint F_006558a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6558a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  uVar3 = 0;
  if (*(uint *)((int)this + 0x68) != 0) {
    piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 0x5c) + 0x20)));
    do {
      if (*piVar1 == param_2) {
        if ((uVar3 != 0xffffffff) && (*(int *)((int)this + 0x60) != 0)) {
          if ((*((uint *)GEN_TOP((*(int *)((int)this + 0x6c) + (uVar3 >> 5) * 4))) >> ((byte)uVar3 & 0x1f) & 1)
              != 0) {
            F_0064d4f0(this,uVar3);
          }
          puVar4 = ((undefined4 *)GEN_TOP((uVar3 * 0x40 + *(int *)((int)this + 0x60))));
          puVar5 = param_1;
          for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
          return (uint)param_1;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      piVar1 = piVar1 + 0x10;
    } while (uVar3 < *(uint *)((int)this + 0x68));
  }
  *param_1 = *(undefined4 *)((int)this + 0x30);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = *(undefined4 *)((int)this + 0x34);
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = *(undefined4 *)((int)this + 0x38);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  F_004efe70(param_1,(int)this + 0x20);
  param_1[0xc] = (undefined4)
                 gen_fl2bits(((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(param_1[0xc]))) +
                                    (float10)*(float *)((int)this + 0x10)))));
  param_1[0xd] = (undefined4)
                 gen_fl2bits(((float)GEN_TOF(((float10)*(float *)((int)this + 0x14) +
                                    ((float10)GEN_TOD(gen_bits2f(param_1[0xd])))))));
  param_1[0xe] = (undefined4)
                 gen_fl2bits(((float)GEN_TOF(((float10)*(float *)((int)this + 0x18) +
                                    ((float10)GEN_TOD(gen_bits2f(param_1[0xe])))))));
  return (uint)param_1;
}

/* ref: FUN_00655980 */
uint F_00655980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x655980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  uVar1 = F_006558a0(this,((undefined1 *)(gen_frame + 0x0)),param_1);
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return uVar1 + 0x30;
}

/* ref: FUN_00655df0 */
uint F_00655df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x655df0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1b0)));
  if (7 < *(uint *)(iVar2 + 8)) {
    if (*(uint * PTR32 *)(iVar2 + 0x10) != (uint *)0x0) {
      **(uint * PTR32 *)(iVar2 + 0x10) = *(uint *)(iVar2 + 8);
    }
    uVar3 = F_00671080(*(undefined * PTR32 *)(iVar2 + 0xc));
    *(uint *)(iVar2 + 0x10) = uVar3;
    *(uint *)(iVar2 + 4) = uVar3 + 0x10;
    *(undefined4 *)(iVar2 + 8) = 0;
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)(iVar2 + 4) + *(int *)(iVar2 + 8) * 8)));
  *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
  *puVar1 = param_1;
  puVar1[1] = param_2;
  return param_2;
}

/* ref: FUN_00655e50 */
unsigned int F_00655e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x655e50u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  int * piVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  
  if (param_2 != 0) {
    bVar4 = F_004ffbd0(*(undefined * PTR32 *)(param_1 + 0x18),param_3);
    iVar2 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1b4)));
    if (7 < *(uint *)(iVar2 + 8)) {
      if (*(uint * PTR32 *)(iVar2 + 0x10) != (uint *)0x0) {
        **(uint * PTR32 *)(iVar2 + 0x10) = *(uint *)(iVar2 + 8);
      }
      uVar5 = F_006710f0(*(undefined * PTR32 *)(iVar2 + 0xc));
      *(uint *)(iVar2 + 0x10) = uVar5;
      *(uint *)(iVar2 + 4) = uVar5 + 0x10;
      *(undefined4 *)(iVar2 + 8) = 0;
    }
    iVar3 = *(int *)(iVar2 + 8);
    *(int *)(iVar2 + 8) = iVar3 + 1;
    piVar1 = ((int *)GEN_TOP((*(int *)(iVar2 + 4) + iVar3 * 0x14)));
    piVar1[1] = param_2;
    *piVar1 = param_1;
    piVar1[2] = (uint)bVar4;
    piVar1[3] = *param_4;
    piVar1[4] = param_4[1];
  }
  return 0;
}

/* ref: FUN_00655ef0 */
uint F_00655ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x655ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  uint * puVar6;
  int iVar7;
  int iVar8;
  sbyte sVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  ushort * puVar14;
  int iVar15;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  iVar15 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  iVar7 = *param_1;
  (*(int * PTR32 *)(gen_frame + 0x1c)) = param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = this;
  (*(uint *)(gen_frame + 0x34)) = param_2;
  (*(uint *)(gen_frame + 0x30)) = param_3;
  (*(int *)(gen_frame + 0x28)) = iVar7;
  (*(bool *)(gen_frame + 0x3f)) = true;
  bVar4 = 0x13 < *(uint *)(iVar15 + 8) >> 0x1b;
  if (bVar4) {
    (*(bool *)(gen_frame + 0x3f)) = false;
  }
  (*(bool *)(gen_frame + 0x3f)) = !bVar4;
  puVar14 = ((ushort *)GEN_TOP((*(int *)(param_2 + 0xbc) + (param_3 & 0xffff) * 0x24)));
  (*(ushort * PTR32 *)(gen_frame + 0x38)) = puVar14;
  uVar5 = (uint)puVar14[4];
  uVar10 = *((uint *)GEN_TOP((*(int *)(iVar7 + 0x48) + uVar5 * 4)));
  if ((uVar10 != 0) &&
     ((uVar5 = F_0062d620(&(*(uint *)(gen_frame + 0x24)),iVar7,uVar10,uVar5), (*(bool *)(gen_frame + 0x3f)) == false ||
      (((*(uint *)(gen_frame + 0x24)) & 2) != 0)))) {
    (*(undefined4 *)(gen_frame + 0x44)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x4c)) = 0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x40)) = (*(undefined * PTR32 (*)[1])REFP(0x10abb24));
    F_00b52c10(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x40)),*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar10 + 8) + 0xa4))) + 0x98))));
    if (*(int *)((*(int *)(gen_frame + 0x28)) + 0x1c) == 0) {
      if (*(int *)((*(int *)(gen_frame + 0x28)) + 0x2c) == 0) {
        (*(uint *)(gen_frame + 0x2c)) = 0;
      }
      else {
        (*(uint *)(gen_frame + 0x2c)) = (uint)(*(ushort * PTR32 *)(gen_frame + 0x38))[7] * 0x90 + *(int *)((*(int *)(gen_frame + 0x28)) + 0x2c);
      }
      F_00667bd0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x40)),(int)this + 0x28);
      iVar7 = *(int *)((int)this + 0xc);
      uVar11 = *(undefined4 *)((*(uint *)(gen_frame + 0x2c)) + 0x68);
      uVar5 = (*(uint *)(gen_frame + 0x2c));
    }
    else {
      F_00667bd0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x40)),(int)this + 0x1c);
      uVar11 = *((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x28)) + 0x1c) + 0x10)));
      iVar7 = *(int *)((int)this + 8);
      uVar5 = uVar10;
    }
    *(undefined4 *)(iVar15 + 0xa8 + iVar7 * 4) = uVar11;
    *(uint *)(iVar15 + 8) = (uVar5 & 0x3ffff0 | 0x400000) >> 4 | *(uint *)(iVar15 + 8) & 0xfffc0000;
    F_00667bd0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x40)),(int)this + ((uint)(*(int * PTR32 *)(gen_frame + 0x1c))[4] >> 0x1e & 1) * 0xc + 0x34);
    F_0062d180(REFG(undefined4, 0x13759f8),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x40)),uVar10);
    *((undefined4 *)GEN_TOP((iVar15 + 0x2a8 + *(int *)((int)this + 0x14) * 8))) =
         *((undefined4 *)GEN_TOP((iVar15 + 0x2a8 + *(int *)((int)this + 0x10) * 8)));
    uVar10 = REFG(undefined4, 0x1302378);
    *((uint *)GEN_TOP((iVar15 + 0x2ac + *(int *)((int)this + 0x14) * 8))) = REFG(undefined4, 0x1302378) & 0xffffc3f;
    *((uint *)GEN_TOP((iVar15 + 0x2ac + *(int *)((int)this + 0x18) * 8))) = uVar10 & 0xffffc3f | 0x240;
    F_00627170((undefined *)((int)REFG(undefined4, 0x13759f8) + 0x70),*(undefined4 *)((*(int *)(gen_frame + 0x28)) + 0x70),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x40)));
    *(undefined4 *)(iVar15 + 0x4c) = *((undefined4 *)GEN_TOP((*(int *)((*(uint *)(gen_frame + 0x34)) + 0x108) + (*(uint *)(gen_frame + 0x30)) * 4)));
    bVar1 = *(byte *)((int)(*(ushort * PTR32 *)(gen_frame + 0x38)) + 0x23);
    uVar10 = 0;
    if ((bVar1 & 3) != 0) {
      puVar6 = (uint *)(iVar15 + 0x6c);
      puVar14 = (*(ushort * PTR32 *)(gen_frame + 0x38)) + 10;
      do {
        bVar2 = *(byte *)((int)(*(ushort * PTR32 *)(gen_frame + 0x38)) + uVar10 + 0x20);
        (*(uint *)(gen_frame + 0x18)) = (uint)bVar2;
        uVar10 = uVar10 + 1;
        *puVar6 = *puVar6 ^ (*(int *)((int)(uintptr_t)puVar14) << 8 ^ *puVar6) & 0x7fffff00;
        *(byte *)puVar6 = bVar2;
        *puVar6 = *puVar6 & 0x7fffffff;
        puVar14 = puVar14 + 2;
        puVar6 = puVar6 + 2;
      } while (uVar10 < (bVar1 & 3));
    }
    if ((*(uint *)((*(int *)(gen_frame + 0x28)) + 0x10) >> 4 & 1) == 0) {
      uVar10 = (uint)(*(ushort * PTR32 *)(gen_frame + 0x38))[5];
      (*(uint *)(gen_frame + 0x30)) = (uint)(*(ushort * PTR32 *)(gen_frame + 0x38))[6];
      (*(uint *)(gen_frame + 0x18)) = uVar10;
      (*(int *)(gen_frame + 0x14)) = *(int *)((*(uint *)(gen_frame + 0x34)) + 200);
      if ((*(uint *)(gen_frame + 0x30)) != 0) {
        (*(uint *)(gen_frame + 0xc)) = 0x20;
        do {
          puVar6 = &(*(uint *)(gen_frame + 0x30));
          if (0x1f < (*(uint *)(gen_frame + 0x30))) {
            puVar6 = &(*(uint *)(gen_frame + 0xc));
          }
          uVar5 = *puVar6;
          puVar6 = ((uint *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x28)) + 0x58) + (uVar10 >> 5) * 4)));
          sVar9 = (sbyte)(uVar10 & 0x1f);
          uVar12 = *puVar6 >> sVar9;
          (*(uint *)(gen_frame + 0x10)) = uVar5;
          (*(uint *)(gen_frame + 0x34)) = 0xffffffff;
          if (uVar5 < 0x20) {
            (*(uint *)(gen_frame + 0x34)) = 1;
            (*(uint *)(gen_frame + 0x34)) = (1 << ((byte)uVar5 & 0x1f)) - 1;
          }
          if ((uVar10 & 0x1f) != 0) {
            uVar12 = uVar12 + (puVar6[1] << (0x20U - sVar9 & 0x1f));
          }
          uVar12 = uVar12 & (*(uint *)(gen_frame + 0x34));
          if (uVar12 == 0xffffffff) {
            iVar15 = *(int *)(uVar10 * 0x10 + (*(int *)(gen_frame + 0x14)));
            iVar7 = (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + (uVar10 + 0x1f) * 0x10))) +
                    *(int *)(uVar10 * 0x10 + (*(int *)(gen_frame + 0x14)) + 500)) - iVar15;
            (*(uint *)(gen_frame + 0x18)) = uVar10;
            if ((*(bool *)(gen_frame + 0x3f)) == false) {
              F_0064d9f0((*(undefined * PTR32 *)(gen_frame + 0x20)),(*(int * PTR32 *)(gen_frame + 0x1c)),param_4,(uint)*(*(ushort * PTR32 *)(gen_frame + 0x38)),iVar15,iVar7,(*(uint *)(gen_frame + 0x24)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x40))
                          );
            }
            else {
              F_0063c670((*(undefined * PTR32 *)(gen_frame + 0x20)),param_4,(uint)*(*(ushort * PTR32 *)(gen_frame + 0x38)),iVar15,iVar7,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x40)));
            }
          }
          else {
            iVar15 = uVar10 * 0x10 + (*(int *)(gen_frame + 0x14));
            while ((*(uint *)(gen_frame + 0x10)) = uVar5, uVar12 != 0) {
              iVar7 = 0;
              if (uVar12 != 0) {
                for (; (uVar12 >> iVar7 & 1) == 0; iVar7 = iVar7 + 1) {
                }
              }
              (*(uint *)(gen_frame + 0x34)) = 0;
              if (uVar12 == 0) {
                iVar7 = 0x20;
              }
              uVar12 = uVar12 >> ((byte)iVar7 & 0x1f);
              (*(uint *)(gen_frame + 0x34)) = 0;
              (*(uint *)(gen_frame + 0x2c)) = uVar12;
              uVar12 = ~uVar12;
              iVar13 = 0;
              if (uVar12 != 0) {
                for (; (uVar12 >> iVar13 & 1) == 0; iVar13 = iVar13 + 1) {
                }
              }
              if (uVar12 == 0) {
                iVar13 = 0x20;
              }
              iVar8 = iVar13 + iVar7 + -1;
              iVar3 = *(int *)(iVar15 + iVar7 * 0x10);
              iVar8 = (*(int *)(iVar15 + 4 + iVar8 * 0x10) - iVar3) +
                      *(int *)(iVar15 + iVar8 * 0x10);
              (*(uint *)(gen_frame + 0x18)) = uVar10;
              if ((*(bool *)(gen_frame + 0x3f)) == false) {
                F_0064d9f0((*(undefined * PTR32 *)(gen_frame + 0x20)),(*(int * PTR32 *)(gen_frame + 0x1c)),param_4,(uint)*(*(ushort * PTR32 *)(gen_frame + 0x38)),iVar3,iVar8,(*(uint *)(gen_frame + 0x24)),
                             &(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x40)));
              }
              else {
                F_0063c670((*(undefined * PTR32 *)(gen_frame + 0x20)),param_4,(uint)*(*(ushort * PTR32 *)(gen_frame + 0x38)),iVar3,iVar8,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x40)));
              }
              uVar12 = (*(uint *)(gen_frame + 0x2c)) >> ((byte)iVar13 & 0x1f);
              iVar15 = iVar15 + (iVar13 + iVar7) * 0x10;
              (*(uint *)(gen_frame + 0x2c)) = uVar12;
              uVar5 = (*(uint *)(gen_frame + 0x10));
              uVar10 = (*(uint *)(gen_frame + 0x18));
            }
          }
          (*(uint *)(gen_frame + 0x30)) = (*(uint *)(gen_frame + 0x30)) - uVar5;
          uVar10 = uVar10 + uVar5;
          (*(uint *)(gen_frame + 0x18)) = uVar10;
        } while ((*(uint *)(gen_frame + 0x30)) != 0);
      }
    }
    else {
      iVar15 = *((int *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x28)) + 0x44) + (*(uint *)(gen_frame + 0x30)) * 4)));
      if (iVar15 != 0) {
        if ((*(bool *)(gen_frame + 0x3f)) == false) {
          F_0064d9f0(this,(*(int * PTR32 *)(gen_frame + 0x1c)),param_4,(uint)*(*(ushort * PTR32 *)(gen_frame + 0x38)),*(undefined4 *)((*(ushort * PTR32 *)(gen_frame + 0x38)) + 8),iVar15,
                       (*(uint *)(gen_frame + 0x24)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x40)));
        }
        else {
          F_0063c670(this,param_4,(uint)*(*(ushort * PTR32 *)(gen_frame + 0x38)),*(undefined4 *)((*(ushort * PTR32 *)(gen_frame + 0x38)) + 8),iVar15,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x40)));
        }
      }
    }
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x40)) = (*(undefined * PTR32 (*)[1])REFP(0x10abb24));
    uVar5 = F_00b52cb0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x40)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar5;
}

/* ref: Client::Graphics::Render::BGInstancingRenderer::vf2 */
unsigned int F_00656380(unsigned int gen_a0)
{
  GEN_ENTER(0x656380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  F_0062dbe0(this,(*(uint *)(iVar6 + 8) >> 0x1b) * 0x358 + 4 + REFG(int, 0x137127c));
  F_0062dd10(this,(*(uint *)(iVar6 + 8) >> 0x1b) * 0x358 + 4 + REFG(int, 0x137127c));
  uVar2 = *(uint *)(this + 0x10);
  iVar6 = *(int *)(this + 0xc);
  iVar4 = *(int *)(this + 0x7c);
  if (uVar2 != 0) {
    piVar5 = ((int *)GEN_TOP((*(int *)(this + 4) + 4)));
    uVar7 = 0;
    do {
      if (piVar5[1] - *piVar5 >> 5 != 0) {
        if (0xf < *(uint *)(iVar4 + 8)) {
          if (*(uint * PTR32 *)(iVar4 + 0x10) != (uint *)0x0) {
            **(uint * PTR32 *)(iVar4 + 0x10) = *(uint *)(iVar4 + 8);
          }
          uVar3 = F_00671170(*(undefined * PTR32 *)(iVar4 + 0xc));
          *(uint *)(iVar4 + 0x10) = uVar3;
          *(uint *)(iVar4 + 4) = uVar3 + 0x10;
          *(undefined4 *)(iVar4 + 8) = 0;
        }
        piVar1 = ((int *)GEN_TOP((*(int *)(iVar4 + 4) + *(int *)(iVar4 + 8) * 8)));
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
        *piVar1 = (int)(piVar5 + -1);
        piVar1[1] = *(int *)(iVar6 + uVar7 * 4);
      }
      uVar7 = uVar7 + 1;
      piVar5 = piVar5 + 0xb;
    } while (uVar7 < uVar2);
  }
  F_0066db60(this + 0x14,this,((code *)REFP(0x64ddb0)),1);
  iVar6 = *(int *)(REFG(int, 0x1370b90) + 0x24);
  if (iVar6 != 0) {
    piVar5 = (int *)(REFG(int, 0x1370b90) + 4);
    iVar4 = 0;
    do {
      *(uint *)(*piVar5 + 8 + iVar4) = *(uint *)(*piVar5 + 8 + iVar4) & 0xfe7fffff | 0x6000000;
      iVar4 = iVar4 + 0x5b0;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return 0;
}

/* ref: FUN_006564b0 */
uint F_006564b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6564b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x19500];
  uint * puVar1;
  int iVar2;
  int * piVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint * puVar10;
  undefined4 * puVar11;
  undefined4 * puVar12;
  undefined4 * puVar13;
  uint uVar14;
  
  ((uint *)(gen_frame + 0x194bc))[0xc] = 0x6564d0;
  ((uint *)(gen_frame + 0x194bc))[0xc] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  iVar2 = *(int *)(param_1 + 0x20);
  ((uint *)(gen_frame + 0x194bc))[0] = 0;
  ((uint *)(gen_frame + 0x194bc))[1] = 0;
  ((uint *)(gen_frame + 0x194bc))[2] = 0;
  ((uint *)(gen_frame + 0x194bc))[3] = 0;
  ((uint *)(gen_frame + 0x194bc))[4] = 0;
  ((uint *)(gen_frame + 0x194bc))[5] = 0;
  ((uint *)(gen_frame + 0x194bc))[6] = 0;
  ((uint *)(gen_frame + 0x194bc))[7] = 0;
  ((uint *)(gen_frame + 0x194bc))[8] = 0;
  ((uint *)(gen_frame + 0x194bc))[9] = 0;
  ((uint *)(gen_frame + 0x194bc))[10] = 0;
  ((uint *)(gen_frame + 0x194bc))[0xb] = 0;
  if (*(int *)(param_1 + 8) != 0) {
    puVar12 = (undefined4 *)(param_2 + 0x48);
    (*(int *)(gen_frame + 0x1001c)) = *(int *)(param_1 + 8);
    do {
      uVar14 = *(uint *)puVar12[-0x12];
      if ((*(uint *)(param_1 + 0xc) & uVar14) != 0) {
        bVar4 = *(byte *)(param_1 + 0x1d) & *(byte *)((int)puVar12 + 0x29);
        piVar3 = ((int *)GEN_TOP(((uint *)puVar12[-0x12])[1]));
        (*(undefined4 *)(gen_frame + 0x10010)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x10010)), 1, 3),*(byte *)((int)puVar12 + 0x2a));
        (*(undefined4 *)(gen_frame + 0x10004)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x10004)), 1, 3),*(byte *)(puVar12 + 10));
        iVar5 = (uint)*(byte *)((int)puVar12 + 0x2a) * 3 + (uint)*(byte *)(puVar12 + 10);
        puVar10 = ((uint *)(gen_frame + 0x194bc)) + iVar5;
        uVar9 = *puVar10;
        uVar6 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3);
        if (((char)uVar6 == '\0') || ((*(uint *)(param_1 + 0xc) & uVar14 & 0xaaaaaaaa) != 0)) {
          iVar7 = uVar9 + iVar5 * 0x21;
          puVar11 = puVar12 + -0xe;
          puVar13 = ((undefined4 *)(gen_frame + 0x10030)) + iVar7 * 0x18;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar13 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar13 = puVar13 + 1;
          }
          ((undefined4 *)(gen_frame + 0x10060))[(int)(iVar7 * 0x18)] = puVar12[-2];
          ((undefined4 *)(gen_frame + 0x10060))[(int)(iVar7 * 0x18 + 1)] = puVar12[-1];
          ((undefined4 *)(gen_frame + 0x10060))[(int)(iVar7 * 0x18 + 2)] = *puVar12;
          ((undefined4 *)(gen_frame + 0x10060))[(int)(iVar7 * 0x18 + 3)] = puVar12[1];
          ((undefined4 *)(gen_frame + 0x10060))[(int)(iVar7 * 0x18 + 4)] = puVar12[2];
          ((undefined4 *)(gen_frame + 0x10060))[(int)(iVar7 * 0x18 + 5)] = puVar12[3];
          ((undefined4 *)(gen_frame + 0x10060))[(int)(iVar7 * 0x18 + 6)] = puVar12[4];
          ((undefined4 *)(gen_frame + 0x10060))[(int)(iVar7 * 0x18 + 7)] = puVar12[5];
          ((undefined4 *)(gen_frame + 0x10060))[(int)(iVar7 * 0x18 + 8)] = puVar12[6];
          ((undefined4 *)(gen_frame + 0x10060))[(int)(iVar7 * 0x18 + 9)] = puVar12[7];
          ((undefined4 *)(gen_frame + 0x10060))[(int)(iVar7 * 0x18 + 10)] = puVar12[8];
          uVar9 = uVar9 + 1;
          ((undefined4 *)(gen_frame + 0x10060))[(int)(iVar7 * 0x18 + 0xb)] = puVar12[9];
          *puVar10 = uVar9;
          if (bVar4 != 0) {
            puVar1 = ((uint *)(gen_frame + 0x194bc)) + iVar5 + 6;
            puVar11 = ((undefined4 *)(gen_frame + 0x10030)) + iVar7 * 0x18;
            puVar13 = ((undefined4 *)(gen_frame + 0x14a70)) + (iVar5 * 0x21 + *puVar1) * 0x18;
            for (iVar8 = 0x18; iVar8 != 0; iVar8 = iVar8 + -1) {
              *puVar13 = *puVar11;
              puVar11 = puVar11 + 1;
              puVar13 = puVar13 + 1;
            }
            uVar14 = *puVar1 + 1;
            *puVar1 = uVar14;
            if (0x20 < uVar14) {
              F_0064e750(this,param_1,(*(undefined4 *)(gen_frame + 0x10004)),((undefined4 *)(gen_frame + 0x14a70)) + iVar5 * 0x318,uVar14,(*(undefined4 *)(gen_frame + 0x10010)),
                           0,param_1 + 0x28 + iVar2 * 0x18,1);
              *puVar1 = 0;
            }
          }
          if (0x20 < uVar9) {
            F_0064e750(this,param_1,(*(undefined4 *)(gen_frame + 0x10004)),((undefined4 *)(gen_frame + 0x10030)) + iVar5 * 0x318,uVar9,(*(undefined4 *)(gen_frame + 0x10010)),0,
                         param_1 + 0x28,*(undefined4 *)(param_1 + 0x20));
            *puVar10 = 0;
          }
        }
        else {
          iVar5 = *(int *)(param_1 + 0x20);
          if (bVar4 != 0) {
            iVar5 = iVar5 + 1;
          }
          F_0064ec60(this,param_1,(*(undefined4 *)(gen_frame + 0x10004)),puVar12 + -0xe,piVar3,(*(undefined4 *)(gen_frame + 0x10010)),0,param_1 + 0x28,
                       iVar5);
        }
      }
      puVar12 = puVar12 + 0x20;
      (*(int *)(gen_frame + 0x1001c)) = (*(int *)(gen_frame + 0x1001c)) + -1;
    } while ((*(int *)(gen_frame + 0x1001c)) != 0);
  }
  (*(uint *)(gen_frame + 0x10024)) = 0;
  puVar10 = ((uint *)(gen_frame + 0x194bc));
  puVar12 = ((undefined4 *)(gen_frame + 0x10030));
  do {
    (*(int *)(gen_frame + 0x1001c)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x1001c)), 1, 3),(*(uint *)(gen_frame + 0x10024)) == 1);
    uVar14 = 0;
    do {
      uVar9 = *puVar10;
      if (uVar9 != 0) {
        if (uVar9 == 1) {
          F_0064e220(this,param_1,uVar14,puVar12,(*(int *)(gen_frame + 0x1001c)),0,param_1 + 0x28,
                       *(undefined4 *)(param_1 + 0x20));
        }
        else {
          F_0064e750(this,param_1,uVar14,puVar12,uVar9,(*(int *)(gen_frame + 0x1001c)),0,param_1 + 0x28,
                       *(undefined4 *)(param_1 + 0x20));
        }
      }
      uVar14 = uVar14 + 1;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 0x318;
    } while (uVar14 < 3);
    (*(uint *)(gen_frame + 0x10024)) = (*(uint *)(gen_frame + 0x10024)) + 1;
  } while ((*(uint *)(gen_frame + 0x10024)) < 2);
  if (*(char *)(param_1 + 0x1d) != '\0') {
    (*(uint *)(gen_frame + 0x10018)) = 0;
    puVar10 = ((uint *)(gen_frame + 0x194bc)) + 6;
    puVar12 = ((undefined4 *)(gen_frame + 0x14a70));
    do {
      (*(int *)(gen_frame + 0x1001c)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x1001c)), 1, 3),(*(uint *)(gen_frame + 0x10018)) == 1);
      uVar14 = 0;
      do {
        uVar9 = *puVar10;
        if (uVar9 != 0) {
          if (uVar9 == 1) {
            F_0064e220(this,param_1,uVar14,puVar12,(*(int *)(gen_frame + 0x1001c)),0,param_1 + 0x28 + iVar2 * 0x18,1);
          }
          else {
            F_0064e750(this,param_1,uVar14,puVar12,uVar9,(*(int *)(gen_frame + 0x1001c)),0,
                         param_1 + 0x28 + iVar2 * 0x18,1);
          }
        }
        uVar14 = uVar14 + 1;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 0x318;
      } while (uVar14 < 3);
      (*(uint *)(gen_frame + 0x10018)) = (*(uint *)(gen_frame + 0x10018)) + 1;
    } while ((*(uint *)(gen_frame + 0x10018)) < 2);
  }
  F_00c47745(((uint *)(gen_frame + 0x194bc))[0xc] ^ (uint)(uint)(gen_frame + 0x0));
  return (uint)puVar12;
}

/* ref: FUN_00656940 */
unsigned int F_00656940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x656940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x11910];
  uint * puVar1;
  byte bVar2;
  int * piVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 * puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 * puVar11;
  
  (*(uint *)(gen_frame + 0x118fc)) = 0x656960;
  (*(uint *)(gen_frame + 0x118fc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  iVar6 = *((int *)GEN_TOP((*(int *)(param_1 + 4) + 0xa8)));
  cVar4 = *((char *)GEN_TOP((*(int *)(iVar6 + 4) + 0x1e + iVar6))) + -1;
  (*(undefined * PTR32 *)(gen_frame + 0x10020)) = this;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x1001c)) + 0)) = cVar4;
  (*(undefined4 *)(gen_frame + 0x1001c)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x1001c)), 1, 3),cVar4);
  (*(uint *)(gen_frame + 0x1002c)) = param_1;
  ((uint *)(gen_frame + 0x10004))[0] = 0;
  ((uint *)(gen_frame + 0x10004))[1] = 0;
  uVar9 = param_1;
  if (*(int *)(param_1 + 8) != 0) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x10024)) = (undefined4 *)(param_2 + 0x48);
    (*(int *)(gen_frame + 0x10028)) = *(int *)(param_1 + 8);
    do {
      uVar5 = *(uint *)(*(undefined4 * PTR32 *)(gen_frame + 0x10024))[-0x12];
      ((uint *)(gen_frame + 0x10004))[3] = uVar5;
      if ((*(uint *)(uVar9 + 0xc) & uVar5) != 0) {
        bVar2 = *(byte *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10024)) + 0x2a);
        piVar3 = ((int *)GEN_TOP(((uint *)(*(undefined4 * PTR32 *)(gen_frame + 0x10024))[-0x12])[1]));
        uVar10 = (uint)bVar2;
        puVar1 = ((uint *)(gen_frame + 0x10004)) + uVar10;
        (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x10018)) + 0)) = bVar2;
        (*(undefined4 *)(gen_frame + 0x10018)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x10018)), 1, 3),bVar2);
        (*(uint *)(gen_frame + 0x10014)) = *puVar1;
        ((uint *)(gen_frame + 0x10004))[2] = uVar10;
        uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3);
        if (((char)uVar5 == '\0') || ((*(uint *)(uVar9 + 0xc) & ((uint *)(gen_frame + 0x10004))[3] & 0xaaaaaaaa) != 0))
        {
          iVar6 = uVar10 * 0x21 + (*(uint *)(gen_frame + 0x10014));
          puVar8 = (*(undefined4 * PTR32 *)(gen_frame + 0x10024)) + -0xe;
          puVar11 = ((undefined4 *)(gen_frame + 0x10030)) + iVar6 * 0x18;
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar11 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar11 = puVar11 + 1;
          }
          ((undefined4 *)(gen_frame + 0x10060))[(int)(iVar6 * 0x18)] = (*(undefined4 * PTR32 *)(gen_frame + 0x10024))[-2];
          ((undefined4 *)(gen_frame + 0x10060))[(int)(iVar6 * 0x18 + 1)] = (*(undefined4 * PTR32 *)(gen_frame + 0x10024))[-1];
          ((undefined4 *)(gen_frame + 0x10060))[(int)(iVar6 * 0x18 + 2)] = *(*(undefined4 * PTR32 *)(gen_frame + 0x10024));
          ((undefined4 *)(gen_frame + 0x10060))[(int)(iVar6 * 0x18 + 3)] = (*(undefined4 * PTR32 *)(gen_frame + 0x10024))[1];
          ((undefined4 *)(gen_frame + 0x10060))[(int)(iVar6 * 0x18 + 4)] = (*(undefined4 * PTR32 *)(gen_frame + 0x10024))[2];
          ((undefined4 *)(gen_frame + 0x10060))[(int)(iVar6 * 0x18 + 5)] = (*(undefined4 * PTR32 *)(gen_frame + 0x10024))[3];
          ((undefined4 *)(gen_frame + 0x10060))[(int)(iVar6 * 0x18 + 6)] = (*(undefined4 * PTR32 *)(gen_frame + 0x10024))[4];
          ((undefined4 *)(gen_frame + 0x10060))[(int)(iVar6 * 0x18 + 7)] = (*(undefined4 * PTR32 *)(gen_frame + 0x10024))[5];
          ((undefined4 *)(gen_frame + 0x10060))[(int)(iVar6 * 0x18 + 8)] = (*(undefined4 * PTR32 *)(gen_frame + 0x10024))[6];
          ((undefined4 *)(gen_frame + 0x10060))[(int)(iVar6 * 0x18 + 9)] = (*(undefined4 * PTR32 *)(gen_frame + 0x10024))[7];
          ((undefined4 *)(gen_frame + 0x10060))[(int)(iVar6 * 0x18 + 10)] = (*(undefined4 * PTR32 *)(gen_frame + 0x10024))[8];
          ((undefined4 *)(gen_frame + 0x10060))[(int)(iVar6 * 0x18 + 0xb)] = (*(undefined4 * PTR32 *)(gen_frame + 0x10024))[9];
          uVar5 = (*(uint *)(gen_frame + 0x10014)) + 1;
          *puVar1 = uVar5;
          uVar9 = (*(uint *)(gen_frame + 0x1002c));
          if (0x20 < uVar5) {
            F_0064e750((*(undefined * PTR32 *)(gen_frame + 0x10020)),(*(uint *)(gen_frame + 0x1002c)),(*(undefined4 *)(gen_frame + 0x1001c)),((undefined4 *)(gen_frame + 0x10030)) + ((uint *)(gen_frame + 0x10004))[2] * 0x318
                         ,uVar5,(*(undefined4 *)(gen_frame + 0x10018)),1,(*(uint *)(gen_frame + 0x1002c)) + 0x28,*(undefined4 *)((*(uint *)(gen_frame + 0x1002c)) + 0x20)
                        );
            *puVar1 = 0;
            uVar9 = (*(uint *)(gen_frame + 0x1002c));
          }
        }
        else {
          F_0064ec60((*(undefined * PTR32 *)(gen_frame + 0x10020)),uVar9,(*(undefined4 *)(gen_frame + 0x1001c)),(*(undefined4 * PTR32 *)(gen_frame + 0x10024)) + -0xe,piVar3,(*(undefined4 *)(gen_frame + 0x10018)),1,
                       uVar9 + 0x28,*(undefined4 *)(uVar9 + 0x20));
        }
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x10024)) = (*(undefined4 * PTR32 *)(gen_frame + 0x10024)) + 0x20;
      iVar6 = (*(int *)(gen_frame + 0x10028)) + -1;
      (*(int *)(gen_frame + 0x10028)) = iVar6;
    } while (iVar6 != 0);
  }
  (*(uint *)(gen_frame + 0x1002c)) = 0;
  puVar8 = ((undefined4 *)(gen_frame + 0x10030));
  do {
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x10028)) + 0)) = (*(uint *)(gen_frame + 0x1002c)) == 1;
    (*(int *)(gen_frame + 0x10028)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x10028)), 1, 3),(*(uint *)(gen_frame + 0x1002c)) == 1);
    uVar5 = ((uint *)(gen_frame + 0x10004))[(int)((*(uint *)(gen_frame + 0x1002c)))];
    uVar10 = (*(uint *)(gen_frame + 0x1002c));
    if (uVar5 != 0) {
      if (uVar5 == 1) {
        F_0064e220((*(undefined * PTR32 *)(gen_frame + 0x10020)),uVar9,(*(undefined4 *)(gen_frame + 0x1001c)),puVar8,(*(int *)(gen_frame + 0x10028)),1,uVar9 + 0x28,
                     *(undefined4 *)(uVar9 + 0x20));
        uVar10 = (*(uint *)(gen_frame + 0x1002c));
      }
      else {
        F_0064e750((*(undefined * PTR32 *)(gen_frame + 0x10020)),uVar9,(*(undefined4 *)(gen_frame + 0x1001c)),puVar8,uVar5,(*(int *)(gen_frame + 0x10028)),1,uVar9 + 0x28,
                     *(undefined4 *)(uVar9 + 0x20));
        uVar10 = (*(uint *)(gen_frame + 0x1002c));
      }
    }
    puVar8 = puVar8 + 0x318;
    (*(uint *)(gen_frame + 0x1002c)) = uVar10 + 1;
  } while (uVar10 + 1 < 2);
  F_00c47745((*(uint *)(gen_frame + 0x118fc)) ^ (uint)(uint)(gen_frame + 0x0));
  return 0;
}

/* ref: FUN_00656bf0 */
unsigned int F_00656bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0x656bf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float param_6 = (float)gen_a5;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  
  if (*(uint *)(param_1 + 0x3a68) < 0x200) {
    iVar2 = *(int *)(param_1 + 0x3264);
    if (7 < *(uint *)(iVar2 + 8)) {
      if (*(uint * PTR32 *)(iVar2 + 0x10) != (uint *)0x0) {
        **(uint * PTR32 *)(iVar2 + 0x10) = *(uint *)(iVar2 + 8);
      }
      uVar3 = F_006711e0(*(undefined * PTR32 *)(iVar2 + 0xc));
      *(uint *)(iVar2 + 0x10) = uVar3;
      *(uint *)(iVar2 + 4) = uVar3 + 0x10;
      *(undefined4 *)(iVar2 + 8) = 0;
    }
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)(iVar2 + 4) + *(int *)(iVar2 + 8) * 0x14)));
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
    *puVar1 = param_2;
    puVar1[1] = param_3;
    *(undefined1 *)(puVar1 + 2) = (undefined1)param_4;
    *(undefined1 *)((int)puVar1 + 9) = (undefined1)param_5;
    puVar1[3] = (undefined4)gen_fl2bits(param_6);
    puVar1[4] = *((undefined4 *)GEN_TOP((param_1 + 0x3268 + *(int *)(param_1 + 0x3a68) * 4)));
    *(int *)(param_1 + 0x3a68) = *(int *)(param_1 + 0x3a68) + 1;
  }
  return 0;
}

/* ref: Client::Graphics::Render::TerrainRenderer::vf2 */
unsigned int F_00656c80(unsigned int gen_a0)
{
  GEN_ENTER(0x656c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)(this + 0x3a68) == 0) {
    F_0066df10(this + 0x31fc);
    return 0;
  }
  F_0062eac0(this,(*((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) +
                                       0x1a8))) + 8))) >> 0x1b) * 0x358 + 4 + REFG(int, 0x137127c));
  F_0066de40(this + 0x31fc,this,((code *)REFP(0x6500c0)),1);
  F_00661dd0(REFG(undefined4, 0x1370b90),0xc);
  return 0;
}

/* ref: FUN_00656cf0 */
unsigned int F_00656cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x656cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x220];
  float * pfVar1;
  char cVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  undefined * pvVar6;
  uint * puVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  
  (*(uint *)(gen_frame + 0x218)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x21c);
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = param_4;
  iVar10 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  iVar3 = *(int *)(iVar10 + 0x1a8);
  *(uint *)(iVar3 + 0x3c) = REFG(undefined4, 0x1302370) & 0x7fffffff;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  if (*(char *)((int)this + 0x3a6d) != '\0') {
    puVar7 = (uint *)F_004d4a30(&(*(undefined4 *)(gen_frame + 0x8)),2,1,0,0,(float)(float10)0,(float)(float10)0);
    *(uint *)(iVar3 + 0x3c) = *puVar7 & 0x7fffffff;
  }
  pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x10));
  iVar5 = REFG(int, 0x13759f8);
  iVar3 = *(int *)(iVar10 + 0x1a8);
  if ((*(uint *)(iVar3 + 8) & 0xf8000000) == 0xf0000000) {
    *((uint *)GEN_TOP((iVar3 + 0x2ac + *(int *)(REFG(int, 0x13759f8) + 0x34) * 8))) =
         *(uint *)(REFG(int, 0x13759f8) + 0x60) & 0xfffffff;
  }
  uVar8 = *((uint *)GEN_TOP((*(int *)(iVar10 + 0x1a8) + 8))) >> 0x1b;
  if (uVar8 < 0x1a) {
LAB_00656dd3: ;
    uVar9 = 0;
  }
  else if (uVar8 < 0x1e) {
    uVar9 = *(undefined4 *)(REFG(int, 0x1371288) + 0xdc);
  }
  else {
    if (uVar8 != 0x1e) goto LAB_00656dd3;
    uVar9 = *(undefined4 *)(REFG(int, 0x1371288) + 0x10);
  }
  *((undefined4 *)GEN_TOP((iVar3 + 0x2a8 + *(int *)(iVar5 + 0x34) * 8))) = uVar9;
  iVar5 = REFG(int, 0x13759f8);
  iVar3 = *(int *)(iVar10 + 0x1a8);
  if ((*(uint *)(iVar3 + 8) & 0xf8000000) == 0xf0000000) {
    *((uint *)GEN_TOP((iVar3 + 0x2ac + *(int *)(REFG(int, 0x13759f8) + 0x38) * 8))) =
         *(uint *)(REFG(int, 0x13759f8) + 100) & 0xfffffff;
    *((uint *)GEN_TOP((iVar3 + 0x2ac + *(int *)(iVar5 + 0x3c) * 8))) = *(uint *)(iVar5 + 0x60) & 0xfffffff;
  }
  uVar8 = *((uint *)GEN_TOP((*(int *)(iVar10 + 0x1a8) + 8))) >> 0x1b;
  if (uVar8 < 0x1a) {
LAB_00656e56: ;
    uVar9 = 0;
  }
  else if (uVar8 < 0x1e) {
    uVar9 = *((undefined4 *)GEN_TOP((*(int *)(iVar5 + 0x28c) + 0xfc)));
  }
  else {
    if (uVar8 != 0x1e) goto LAB_00656e56;
    uVar9 = *(undefined4 *)(REFG(int, 0x1371288) + 0x14);
  }
  *((undefined4 *)GEN_TOP((iVar3 + 0x2a8 + *(int *)(iVar5 + 0x38) * 8))) = uVar9;
  fVar4 = REFG(float, 0x1087f04);
  uVar8 = *((uint *)GEN_TOP((*(int *)(iVar10 + 0x1a8) + 8))) >> 0x1b;
  if (0x19 < uVar8) {
    if (uVar8 < 0x1e) {
      uVar9 = *((undefined4 *)GEN_TOP((*(int *)(iVar5 + 0x28c) + 0xfc)));
      goto LAB_00656e98;
    }
    if (uVar8 == 0x1e) {
      uVar9 = *(undefined4 *)(REFG(int, 0x1371288) + 0x18);
      goto LAB_00656e98;
    }
  }
  uVar9 = 0;
LAB_00656e98: ;
  *((undefined4 *)GEN_TOP((iVar3 + 0x2a8 + *(int *)(iVar5 + 0x3c) * 8))) = uVar9;
  pfVar1 = (float *)(param_3 + 3);
  if ((!GEN_ISNAN(fVar4) && !GEN_ISNAN(*pfVar1)) && (!(fVar4 < *pfVar1) && fVar4 != *pfVar1)) {
    F_00667bd0((*(undefined * PTR32 *)(gen_frame + 0x10)),(int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x1a4);
  }
  F_00627260((undefined *)(REFG(int, 0x13759f8) + 0x70));
  F_00627330((undefined *)(REFG(int, 0x13759f8) + 0x70),pvVar6,2,0);
  cVar2 = *(char *)(param_3 + 2);
  (*(undefined4 *)(gen_frame + 0x8)) = *param_3;
  F_00667bd0(pvVar6,((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + ((uint)(cVar2 == '\0') * -3 + 0x6f) * 4))));
  pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x14));
  ((uint *)(gen_frame + 0x18))[2] = REFG(undefined4, 0x1302360) & 0x1f;
  (*(uint *)(gen_frame + 0x2c)) = REFG(undefined4, 0x130236c) & 0xfffffffc;
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x130236c) & 0xfffffffc;
  ((uint *)(gen_frame + 0x18))[0] = 2;
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x1302368) & 0xfe000000;
  ((uint *)(gen_frame + 0x18))[1] = REFG(undefined4, 0x1302350) & 0x7ffffff;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 6;
  (*(undefined4 *)(gen_frame + 0x40)) = 0xd;
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x1302368) & 0xfe000000;
  (*(uint *)(gen_frame + 0x3c)) = REFG(undefined4, 0x1302350) & 0x7ffffff;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(int *)(gen_frame + 0xc)) = 2;
  if (cVar2 == '\0') {
    F_0062ecf0(((uint *)(gen_frame + 0x18)),&(*(int *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x8)));
    ((uint *)(gen_frame + 0x18))[2] = ((uint *)(gen_frame + 0x18))[2] & 0xfffffffd;
  }
  iVar10 = (*(int *)(gen_frame + 0xc));
  if (*(char *)((int)pvVar6 + 0x3a6c) != '\0') {
    ((uint *)(gen_frame + 0x18))[(int)((*(int *)(gen_frame + 0xc)) * 8)] = 3;
    ((uint *)(gen_frame + 0x18))[(int)((*(int *)(gen_frame + 0xc)) * 8 + 2)] = 0xd;
    ((uint *)(gen_frame + 0x18))[(int)((*(int *)(gen_frame + 0xc)) * 8 + 4)] = REFG(undefined4, 0x1302368) & 0xfe000000;
    ((uint *)(gen_frame + 0x18))[(int)((*(int *)(gen_frame + 0xc)) * 8 + 5)] = REFG(undefined4, 0x130236c) & 0xfffffffc;
    ((uint *)(gen_frame + 0x18))[(int)((*(int *)(gen_frame + 0xc)) * 8 + 1)] = 0x7a88286;
    ((uint *)(gen_frame + 0x18))[(int)((*(int *)(gen_frame + 0xc)) * 8 + 6)] = 0x19;
    iVar10 = (*(int *)(gen_frame + 0xc)) + 1;
  }
  F_00650890(pvVar6,param_1,(*(undefined * PTR32 *)(gen_frame + 0x10)),param_3,((uint *)(gen_frame + 0x18)),iVar10);
  F_00c47745((*(uint *)(gen_frame + 0x218)) ^ (uint)(uint)(gen_frame + 0x21c));
  return 0;
}

/* ref: FUN_00657070 */
uint F_00657070(unsigned int gen_a0)
{
  GEN_ENTER(0x657070u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1b8)));
  if (7 < *(uint *)(iVar1 + 8)) {
    if (*(uint * PTR32 *)(iVar1 + 0x10) != (uint *)0x0) {
      **(uint * PTR32 *)(iVar1 + 0x10) = *(uint *)(iVar1 + 8);
    }
    uVar3 = F_006713b0(*(undefined * PTR32 *)(iVar1 + 0xc));
    *(uint *)(iVar1 + 0x10) = uVar3;
    *(uint *)(iVar1 + 4) = uVar3 + 0x10;
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  iVar2 = *(int *)(iVar1 + 8);
  uVar3 = iVar2 + 1;
  *(uint *)(iVar1 + 8) = uVar3;
  *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 4) + iVar2 * 4))) = param_1;
  return uVar3;
}

/* ref: FUN_006570d0 */
uint F_006570d0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x6570d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90);
  (*(uint *)(gen_frame + 0x8c)) = uVar3;
  if (!(REFG(double, 0x1094800) < (double)param_3)) {
    puVar4 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)(param_1 + 4),0,0x50,2);
    if (puVar4 != (undefined4 *)0x0) {
      F_004be0e0(((undefined1 *)(gen_frame + 0x40)),param_2);
      iVar5 = *(int *)(REFG(int, 0x137127c) + 0x66f4);
      if (iVar5 != 0) {
        F_004be0e0(((undefined4 *)(gen_frame + 0x0)),iVar5 + 0x10);
        F_004f1f30(((undefined1 *)(gen_frame + 0x40)),(uint)((undefined4 *)(gen_frame + 0x0)));
        F_004f1f30(((undefined1 *)(gen_frame + 0x40)),iVar5 + 0x50);
      }
      F_0065f550(((undefined4 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x40)));
      puVar6 = ((undefined4 *)(gen_frame + 0x0));
      puVar7 = puVar4;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar4[0x10] = (undefined4)gen_fl2bits(param_3);
      puVar4[0x11] = (undefined4)gen_fl2bits(param_3);
      puVar4[0x12] = 0;
      puVar4[0x13] = 0;
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 0x24))) = 0;
    }
    uVar1 = *(undefined4 *)(param_1 + 4);
    iVar5 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1b8)));
    if (7 < *(uint *)(iVar5 + 8)) {
      if (*(uint * PTR32 *)(iVar5 + 0x10) != (uint *)0x0) {
        **(uint * PTR32 *)(iVar5 + 0x10) = *(uint *)(iVar5 + 8);
      }
      uVar3 = F_006713b0(*(undefined * PTR32 *)(iVar5 + 0xc));
      *(uint *)(iVar5 + 0x10) = uVar3;
      *(uint *)(iVar5 + 4) = uVar3 + 0x10;
      *(undefined4 *)(iVar5 + 8) = 0;
    }
    iVar2 = *(int *)(iVar5 + 8);
    uVar3 = iVar2 + 1;
    *(uint *)(iVar5 + 8) = uVar3;
    *((undefined4 *)GEN_TOP((*(int *)(iVar5 + 4) + iVar2 * 4))) = uVar1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x8c)) ^ (uint)(uint)(gen_frame + 0x90));
  return uVar3;
}

/* ref: FUN_00657240 */
uint F_00657240(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x657240u, gen_a0, 0u, 0u, 0u);
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a0;
  float in_xmm3 = (float)gen_a1;
  float in_xmm5 = (float)gen_a2;
  float in_xmm6 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x130];
  int * piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  uint * puVar7;
  uint * puVar8;
  uint uVar9;
  undefined * pvVar10;
  float * pfVar11;
  undefined4 * puVar12;
  float10 fVar13;
  float10 fVar14;
  float in_XMM2_Da = 0;
  float in_XMM7_Da = 0;
  
  (*(uint *)(gen_frame + 0x11c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x120);
  iVar3 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  iVar4 = *(int *)(iVar3 + 0x1a8);
  (*(int *)(gen_frame + 0x18)) = iVar3;
  *(uint *)(iVar4 + 8) = *(uint *)(iVar4 + 8) & 0xfe7fffff | 0x6000000;
  F_00633360(in_xmm3,in_xmm5,in_xmm6,((undefined1 *)(gen_frame + 0x30)));
  (*(uint *)(gen_frame + 0x24)) = 0;
  (*(bool *)(gen_frame + 0x23)) = *(int *)((int)in_ecx + 0x14) != 0;
  ((uint *)(gen_frame + 0x0))[0] = 0x1ff;
  ((uint *)(gen_frame + 0x0))[1] = 0xfffffe00;
  uVar5 = (uint)(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
  ((uint *)(gen_frame + 0x0))[3] = 0x1ff;
  ((uint *)(gen_frame + 0x0))[2] = 0xfffffe00;
  do {
    *(uint *)(iVar4 + 8) =
         (*(uint *)(&REFG(undefined, 0x10ac2dc) + (*(uint *)(gen_frame + 0x24)) * 4) & 0xf) << 0x13 |
         *(uint *)(iVar4 + 8) & 0xff800000;
    F_0064a9a0(in_ecx,(uint)(byte)(&REFG(undefined, 0x10ac2d8))[(*(uint *)(gen_frame + 0x24))]);
    *((uint *)GEN_TOP((iVar4 + 0x2ac + *(int *)((int)in_ecx + 0xf4) * 8))) =
         *(uint *)(REFG(int, 0x13759f8) + 100) & 0xfffffff;
    *((uint *)GEN_TOP((iVar4 + 0x2ac + *(int *)((int)in_ecx + 0xf8) * 8))) =
         *(uint *)(REFG(int, 0x13759f8) + 100) & 0xfffffff;
    (*(uint *)(gen_frame + 0x2c)) = uVar5;
    puVar7 = &(*(uint *)(gen_frame + 0x2c));
    if (0x1fe < (int)uVar5) {
      puVar7 = ((uint *)(gen_frame + 0x0));
    }
    (*(uint *)(gen_frame + 0x2c)) = *puVar7;
    puVar8 = ((uint *)(gen_frame + 0x0)) + 1;
    if (-0x201 < (int)*puVar7) {
      puVar8 = &(*(uint *)(gen_frame + 0x2c));
    }
    *((uint *)GEN_TOP((iVar4 + 0x2ac + *(int *)((int)in_ecx + 0xf0) * 8))) = (*puVar8 & 0x3ff) << 10 | 0x2a;
    *((undefined4 *)GEN_TOP((iVar4 + 0x2a8 + *(int *)((int)in_ecx + 0xf0) * 8))) =
         *((undefined4 *)GEN_TOP((*(int *)((int)in_ecx + 0x844) + 0xfc)));
    (*(uint *)(gen_frame + 0x2c)) = uVar5;
    puVar7 = &(*(uint *)(gen_frame + 0x2c));
    if (0x1fe < (int)uVar5) {
      puVar7 = ((uint *)(gen_frame + 0x0)) + 3;
    }
    (*(uint *)(gen_frame + 0x2c)) = *puVar7;
    puVar8 = ((uint *)(gen_frame + 0x0)) + 2;
    if (-0x201 < (int)*puVar7) {
      puVar8 = &(*(uint *)(gen_frame + 0x2c));
    }
    *((uint *)GEN_TOP((iVar4 + 0x2ac + *(int *)((int)in_ecx + 0xec) * 8))) = (*puVar8 & 0x3ff) << 10 | 0x36a;
    *((undefined4 *)GEN_TOP((iVar4 + 0x2a8 + *(int *)((int)in_ecx + 0xec) * 8))) =
         *((undefined4 *)GEN_TOP((*(int *)((int)in_ecx + 0x840) + 0xfc)));
    cVar2 = (&REFG(undefined, 0x10ac2d8))[(*(uint *)(gen_frame + 0x24))];
    uVar9 = *((uint *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x18)) + 0x1a8) + 8))) >> 0x1b;
    if (uVar9 < 0x1a) {
LAB_006574ce: ;
      (*(uint *)(gen_frame + 0x2c)) = 0;
    }
    else if (uVar9 < 0x1e) {
      if (cVar2 == '\0') {
        (*(uint *)(gen_frame + 0x2c)) = *(uint *)(REFG(int, 0x1371288) + 0xe0);
      }
      else {
        (*(uint *)(gen_frame + 0x2c)) = *(uint *)(REFG(int, 0x1371288) + 0xe8);
      }
    }
    else {
      if (uVar9 != 0x1e) goto LAB_006574ce;
      if (cVar2 == '\0') {
        (*(uint *)(gen_frame + 0x2c)) = *(uint *)(REFG(int, 0x1371288) + 0x20);
      }
      else {
        (*(uint *)(gen_frame + 0x2c)) = *(uint *)(REFG(int, 0x1371288) + 0x34);
      }
    }
    if (uVar9 == 0x1e) {
      if (cVar2 == '\0') {
        pvVar10 = *(undefined * PTR32 *)(REFG(int, 0x1371288) + 0x40);
      }
      else {
        pvVar10 = *(undefined * PTR32 *)(REFG(int, 0x1371288) + 0x44);
      }
      (*(undefined * PTR32 *)(gen_frame + 0x14)) = pvVar10;
    }
    else {
      (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)0x0;
    }
    pfVar11 = (float *)F_004d9920(*(undefined * PTR32 *)((int)in_ecx + 0xd0),0,0x40,2);
    uVar9 = 0;
    if (pfVar11 == (float *)0x0) break;
    fVar13 = (float10)*(int *)((*(uint *)(gen_frame + 0x2c)) + 0x18);
    if (*(int *)((*(uint *)(gen_frame + 0x2c)) + 0x18) < 0) {
      fVar13 = fVar13 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    piVar1 = (int *)((*(uint *)(gen_frame + 0x2c)) + 0x1c);
    (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar1;
    *pfVar11 = (float)((float10)1 / fVar13);
    iVar3 = *piVar1;
    (*(int *)(gen_frame + 0x28)) = iVar3;
    fVar13 = (float10)iVar3;
    if (iVar3 < 0) {
      fVar13 = fVar13 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    pfVar11[1] = (float)((float10)1 / fVar13);
    fVar13 = (float10)*(int *)((*(uint *)(gen_frame + 0x2c)) + 0x18);
    if (*(int *)((*(uint *)(gen_frame + 0x2c)) + 0x18) < 0) {
      fVar13 = fVar13 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar14 = (float10)REFG(double, 0x1088108);
    pfVar11[2] = (float)(fVar14 / fVar13);
    iVar3 = *piVar1;
    (*(int *)(gen_frame + 0x28)) = iVar3;
    fVar13 = (float10)iVar3;
    if (iVar3 < 0) {
      fVar13 = fVar13 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    pfVar11[3] = (float)(fVar14 / fVar13);
    iVar3 = *(int *)((*(uint *)(gen_frame + 0x2c)) + 0x18);
    (*(int *)(gen_frame + 0x28)) = iVar3;
    fVar13 = (float10)iVar3;
    if (iVar3 < 0) {
      fVar13 = fVar13 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    pfVar11[4] = (float)((float10)*(double *)&REFG(undefined, 0x1092098) / fVar13);
    fVar13 = (float10)*piVar1;
    if (*piVar1 < 0) {
      fVar13 = fVar13 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar14 = (float10)*(double *)&REFG(undefined, 0x10944c0);
    pfVar11[6] = GEN_FLT_TO(pfVar11[6], REFG(float, 0x1090708));
    pfVar11[7] = GEN_FLT_TO(pfVar11[7], REFG(float, 0x1087f04));
    pfVar11[8] = 0.0;
    pfVar11[9] = 0.0;
    pfVar11[10] = 0.0;
    pfVar11[0xb] = 0.0;
    pfVar11[5] = (float)(fVar14 / fVar13);
    pfVar11[0xc] = *(float *)(REFG(int, 0x13759f8) + 0x268);
    pfVar11[0xd] = *(float *)(REFG(int, 0x13759f8) + 0x26c);
    pfVar11[0xe] = *(float *)(REFG(int, 0x13759f8) + 0x280);
    pfVar11[0xf] = *(float *)(REFG(int, 0x13759f8) + 0x284);
    *((undefined4 *)GEN_TOP((*(int *)((int)in_ecx + 0xd0) + 0x24))) = 0;
    *((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x18)) + 0x1a8) + 0xa8 + *(int *)(REFG(int, 0x13759f8) + 4) * 4))) =
         *(undefined4 *)((int)in_ecx + 0xd0);
    uVar9 = *((uint *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x18)) + 0x1a8) + 8)));
    iVar3 = *((int *)GEN_TOP(((uVar9 >> 0x1b) * 0x358 + ((uVar9 >> 0x17 & 0xf) + 1) * 0x34 + REFG(int, 0x137127c))));
    if (iVar3 != 0) {
      *((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x18)) + 0x1a8) + 0xa8 + *(int *)(REFG(int, 0x13759f8) + 0x2c) * 4))) =
           *(undefined4 *)(iVar3 + 0x120);
    }
    F_006406f0((undefined *)(REFG(int, 0x137127c) + 0x100e0));
    cVar2 = (&REFG(undefined, 0x10ac2d8))[(*(uint *)(gen_frame + 0x24))];
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x10)) + 0)) = cVar2;
    (*(undefined4 *)(gen_frame + 0x10)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x10)), 1, 3),cVar2);
    iVar3 = *(int *)((*(int *)(gen_frame + 0x18)) + 0x1a8);
    (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)REFG(int, 0x13759f8);
    (*(int *)(gen_frame + 0x28)) = iVar3;
    if ((*(uint *)(iVar3 + 8) & 0xf8000000) == 0xf0000000) {
      if (cVar2 == '\0') {
        uVar9 = *(uint *)(REFG(int, 0x13759f8) + 0x60);
      }
      else {
        uVar9 = *(uint *)(REFG(int, 0x13759f8) + 100);
      }
      *((uint *)GEN_TOP((iVar3 + 0x2ac + *(int *)(REFG(int, 0x13759f8) + 0x34) * 8))) = uVar9 & 0xfffffff;
    }
    uVar9 = F_0062cd00((*(undefined4 *)(gen_frame + 0x10)));
    *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x28)) + 0x2a8 + *(int *)((int)(*(int * PTR32 *)(gen_frame + 0x1c)) + 0x34) * 8))) = uVar9;
    *((uint *)GEN_TOP((iVar4 + 0x2ac + *(int *)((int)in_ecx + 0x108) * 8))) =
         *(uint *)(REFG(int, 0x13759f8) + 0x60) & 0xfffffff;
    *((uint *)GEN_TOP((iVar4 + 0x2a8 + *(int *)((int)in_ecx + 0x108) * 8))) = (*(uint *)(gen_frame + 0x2c));
    *((uint *)GEN_TOP((iVar4 + 0x2ac + *(int *)((int)in_ecx + 0x10c) * 8))) =
         *(uint *)(REFG(int, 0x13759f8) + 0x60) & 0xfffffff;
    *((undefined * PTR32 *)GEN_TOP((iVar4 + 0x2a8 + *(int *)((int)in_ecx + 0x10c) * 8))) = (*(undefined * PTR32 *)(gen_frame + 0x14));
    *((uint *)GEN_TOP((iVar4 + 0x2ac + *(int *)((int)in_ecx + 0xfc) * 8))) =
         *(uint *)(REFG(int, 0x13759f8) + 100) & 0xfffffff;
    *(undefined4 *)(iVar4 + 0x4c) = *(undefined4 *)((int)in_ecx + 0x1a0);
    if ((*(bool *)(gen_frame + 0x23)) != false) {
      F_00651010(in_ecx,((undefined1 *)(gen_frame + 0x30)));
    }
    uVar9 = REFG(undefined4, 0x1488094);
    *(uint *)(iVar4 + 8) = *(uint *)(iVar4 + 8) & 0xfff80028 | 0x28;
    if ((uVar9 & 1) == 0) {
      uVar9 = uVar9 | 1;
      REFG(undefined4, 0x1488090) = REFG(undefined4, 0x1302e24);
      REFG(undefined4, 0x1488094) = uVar9;
    }
    if ((uVar9 & 2) == 0) {
      REFG(undefined4, 0x1488094) = uVar9 | 2;
      REFG(undefined4, 0x148808c) = REFG(undefined4, 0x1302e40);
    }
    (*(undefined * PTR32 *)(gen_frame + 0x14)) = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x18)) + 0x1a8);
    (*(int *)(gen_frame + 0x28)) = REFG(undefined4, 0x1488090);
    puVar12 = (undefined4 *)F_004d4760(*(undefined * PTR32 *)((*(int *)(gen_frame + 0x18)) + 0x1a8),0x28);
    fVar6 = REFG(float, 0x1087f04);
    if (puVar12 != (undefined4 *)0x0) {
      *puVar12 = 3;
      puVar12[4] = 0;
      puVar12[5] = 0;
      puVar12[1] = 1;
      puVar12[2] = (*(int *)(gen_frame + 0x28));
      puVar12[3] = (undefined4)gen_fl2bits(fVar6);
      F_004d4810((*(undefined * PTR32 *)(gen_frame + 0x14)),puVar12);
    }
    *((uint *)GEN_TOP((iVar4 + 0x2ac + *(int *)((int)in_ecx + 0xfc) * 8))) =
         *(uint *)(REFG(int, 0x13759f8) + 0x60) & 0xfffffff;
    uVar9 = F_0062ceb0((uint)(byte)(&REFG(undefined, 0x10ac2d8))[(*(uint *)(gen_frame + 0x24))]);
    *((uint *)GEN_TOP((iVar4 + 0x2a8 + *(int *)((int)in_ecx + 0xfc) * 8))) = uVar9;
    *((uint *)GEN_TOP((iVar4 + 0x2ac + *(int *)((int)in_ecx + 0x100) * 8))) =
         *(uint *)(REFG(int, 0x13759f8) + 0x60) & 0xfffffff;
    uVar9 = F_0062ceb0((uint)(byte)(&REFG(undefined, 0x10ac2d8))[(*(uint *)(gen_frame + 0x24))]);
    *((uint *)GEN_TOP((iVar4 + 0x2a8 + *(int *)((int)in_ecx + 0x100) * 8))) = uVar9;
    F_006510d0(in_ecx,((undefined1 *)(gen_frame + 0x30)),(uint)(byte)(&REFG(undefined, 0x10ac2d8))[(*(uint *)(gen_frame + 0x24))]);
    F_006511f0(in_ecx,((undefined1 *)(gen_frame + 0x30)));
    F_00651300(in_ecx,in_XMM2_Da,in_xmm3,in_XMM7_Da,((undefined1 *)(gen_frame + 0x30)));
    F_00651390(in_ecx,in_XMM2_Da,in_xmm3,in_XMM7_Da,((undefined1 *)(gen_frame + 0x30)));
    F_00651420(in_ecx,((undefined1 *)(gen_frame + 0x30)));
    *(uint *)(iVar4 + 8) = *(uint *)(iVar4 + 8) | 0x7ffff;
    uVar9 = (*(uint *)(gen_frame + 0x24)) + 1;
    (*(uint *)(gen_frame + 0x24)) = uVar9;
  } while (uVar9 < 2);
  F_00c47745((*(uint *)(gen_frame + 0x11c)) ^ (uint)(uint)(gen_frame + 0x120));
  return uVar9;
}

/* ref: FUN_006579a0 */
unsigned int F_006579a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6579a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 400);
  if (iVar1 != *(int *)((int)this + 0x194)) {
    F_00c46e20(iVar1,*(int *)((int)this + 0x194),0);
    *(int *)((int)this + 0x194) = iVar1;
  }
  return 0;
}

/* ref: FUN_006579e0 */
unsigned int F_006579e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6579e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x148);
  if (iVar1 != *(int *)((int)this + 0x14c)) {
    F_00c46e20(iVar1,*(int *)((int)this + 0x14c),0);
    *(int *)((int)this + 0x14c) = iVar1;
  }
  return 0;
}

/* ref: Client::Graphics::Render::GrassRenderer::vf2 */
unsigned int F_00657a20(unsigned int gen_a0)
{
  GEN_ENTER(0x657a20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(short *)(this + 0x1144) != 0) {
    F_006519d0(this);
    piVar1 = (int *)F_0068bb80(REFG(undefined4, 0x13759f4));
    if (*piVar1 != 0) {
      F_00653530(this);
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00657a50 */
byte F_00657a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x657a50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  
  uVar4 = *((uint *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  if ((*(uint *)(uVar4 + 8) & 0xf8000000) == 0xf0000000) {
    iVar2 = *(int *)((int)this + 0x88);
    if (7 < *(uint *)(iVar2 + 8)) {
      if (*(uint * PTR32 *)(iVar2 + 0x10) != (uint *)0x0) {
        **(uint * PTR32 *)(iVar2 + 0x10) = *(uint *)(iVar2 + 8);
      }
      uVar4 = F_00671260(*(undefined * PTR32 *)(iVar2 + 0xc));
      *(uint *)(iVar2 + 0x10) = uVar4;
      *(uint *)(iVar2 + 4) = uVar4 + 0x10;
      *(undefined4 *)(iVar2 + 8) = 0;
    }
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)(iVar2 + 4) + *(int *)(iVar2 + 8) * 8)));
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
    *puVar1 = param_1;
    puVar1[1] = param_2;
    bVar3 = (*(char *)((int)this + 0x1b1) != '\0') + 1;
    uVar4 = (uint)bVar3;
    *(byte *)(REFG(int, 0x13759f8) + 0x289) = bVar3;
    *(undefined1 *)((int)this + 0x1b2) = 1;
  }
  return (byte)uVar4;
}

/* ref: Client::Graphics::Render::WaterRenderer::vf2 */
unsigned int F_00657af0(unsigned int gen_a0)
{
  GEN_ENTER(0x657af0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  uint uVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  
  if (this[0x1b2] == (undefined1)0x0) {
    return 0;
  }
  iVar2 = *(int *)(REFG(int, 0x1371288) + 0x90);
  uVar6 = *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8))) + 8)))
          >> 0x1b;
  if (0x19 < uVar6) {
    if (uVar6 < 0x1e) {
      iVar7 = *(int *)(REFG(int, 0x1371288) + 0xe4);
      goto LAB_00657b4e;
    }
    if (uVar6 == 0x1e) {
      iVar7 = *(int *)(REFG(int, 0x1371288) + 0x24);
      goto LAB_00657b4e;
    }
  }
  iVar7 = 0;
LAB_00657b4e: ;
  fVar8 = (float10)*(int *)(iVar7 + 0x18);
  iVar3 = *((int *)GEN_TOP((*(int *)(this + 0x1a4) + 0xfc)));
  iVar4 = *(int *)(REFG(int, 0x1371288) + 0xc0);
  if (*(int *)(iVar7 + 0x18) < 0) {
    fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  piVar1 = (int *)(iVar7 + 0x1c);
  *(float *)(this + 0xc0) = (float)fVar8;
  fVar8 = (float10)*piVar1;
  if (*piVar1 < 0) {
    fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)(this + 0xc4) = (float)fVar8;
  fVar8 = (float10)*(int *)(iVar7 + 0x18);
  if (*(int *)(iVar7 + 0x18) < 0) {
    fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar5 = (float10)1;
  *(float *)(this + 200) = (float)(fVar5 / fVar8);
  fVar8 = (float10)*piVar1;
  if (*piVar1 < 0) {
    fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)(this + 0xcc) = (float)(fVar5 / fVar8);
  fVar8 = (float10)*(int *)(iVar7 + 0x18);
  if (*(int *)(iVar7 + 0x18) < 0) {
    fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)(this + 0xd0) = (float)(fVar5 / fVar8);
  fVar8 = (float10)*piVar1;
  if (*piVar1 < 0) {
    fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)(this + 0xd4) = (float)(fVar5 / fVar8);
  fVar8 = (float10)*(int *)(iVar7 + 0x18);
  if (*(int *)(iVar7 + 0x18) < 0) {
    fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar9 = (float10)REFG(double, 0x1088108);
  *(float *)(this + 0xd8) = (float)(fVar9 / fVar8);
  fVar8 = (float10)*piVar1;
  if (*piVar1 < 0) {
    fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)(this + 0xdc) = (float)(fVar9 / fVar8);
  fVar8 = (float10)*(int *)(iVar2 + 0x18);
  if (*(int *)(iVar2 + 0x18) < 0) {
    fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  piVar1 = (int *)(iVar2 + 0x1c);
  *(float *)(this + 0xe0) = (float)fVar8;
  fVar8 = (float10)*piVar1;
  if (*piVar1 < 0) {
    fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)(this + 0xe4) = (float)fVar8;
  fVar8 = (float10)*(int *)(iVar2 + 0x18);
  if (*(int *)(iVar2 + 0x18) < 0) {
    fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)(this + 0xe8) = (float)(fVar5 / fVar8);
  fVar8 = (float10)*piVar1;
  if (*piVar1 < 0) {
    fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)(this + 0xec) = (float)(fVar5 / fVar8);
  fVar8 = (float10)*(int *)(iVar2 + 0x18);
  if (*(int *)(iVar2 + 0x18) < 0) {
    fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)(this + 0xf0) = (float)(fVar5 / fVar8);
  fVar8 = (float10)*piVar1;
  if (*piVar1 < 0) {
    fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)(this + 0xf4) = (float)(fVar5 / fVar8);
  fVar8 = (float10)*(int *)(iVar2 + 0x18);
  if (*(int *)(iVar2 + 0x18) < 0) {
    fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)(this + 0xf8) = (float)(fVar9 / fVar8);
  fVar8 = (float10)*piVar1;
  if (*piVar1 < 0) {
    fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)(this + 0xfc) = (float)(fVar9 / fVar8);
  fVar8 = (float10)*(int *)(iVar3 + 0x18);
  if (*(int *)(iVar3 + 0x18) < 0) {
    fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  piVar1 = (int *)(iVar3 + 0x1c);
  *(float *)(this + 0x120) = (float)fVar8;
  fVar8 = (float10)*piVar1;
  if (*piVar1 < 0) {
    fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)(this + 0x124) = (float)fVar8;
  fVar8 = (float10)*(int *)(iVar3 + 0x18);
  if (*(int *)(iVar3 + 0x18) < 0) {
    fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)(this + 0x128) = (float)(fVar5 / fVar8);
  fVar8 = (float10)*piVar1;
  if (*piVar1 < 0) {
    fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)(this + 300) = (float)(fVar5 / fVar8);
  fVar8 = (float10)*(int *)(iVar4 + 0x18);
  if (*(int *)(iVar4 + 0x18) < 0) {
    fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)(this + 0x100) = (float)(fVar5 / fVar8);
  fVar8 = (float10)*(int *)(iVar4 + 0x1c);
  if (*(int *)(iVar4 + 0x1c) < 0) {
    fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)(this + 0x104) = (float)(fVar5 / fVar8);
  fVar8 = (float10)*(int *)(iVar4 + 0x18);
  if (*(int *)(iVar4 + 0x18) < 0) {
    fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)(this + 0x108) = (float)(fVar9 / fVar8);
  fVar8 = (float10)*(int *)(iVar4 + 0x1c);
  if (*(int *)(iVar4 + 0x1c) < 0) {
    fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(undefined4 *)(this + 0x110) = REFG(float, 0x10928e4);
  *(float *)(this + 0x10c) = (float)(fVar9 / fVar8);
  uVar6 = F_004d9920(*(undefined * PTR32 *)(this + 8),0,0xf0,2);
  if (uVar6 != 0) {
    F_00662720(uVar6,this + 0xb0);
    *((undefined4 *)GEN_TOP((*(int *)(this + 8) + 0x24))) = 0;
  }
  if (this[0x1b1] != (undefined1)0x0) {
    F_00636870(this);
  }
  F_0066e1b0(this + 0x20,this,((code *)REFP(0x6544c0)),1);
  F_00661dd0(REFG(undefined4, 0x1370b90),0xc);
  return 0;
}

/* ref: FUN_00657e40 */
unsigned int F_00657e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x657e40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_2 & 0x3000000) != 0) {
    iVar1 = *(int *)((int)this + 0x6c);
    if (7 < *(uint *)(iVar1 + 8)) {
      if (*(uint * PTR32 *)(iVar1 + 0x10) != (uint *)0x0) {
        **(uint * PTR32 *)(iVar1 + 0x10) = *(uint *)(iVar1 + 8);
      }
      uVar3 = F_006712d0(*(undefined * PTR32 *)(iVar1 + 0xc));
      *(uint *)(iVar1 + 0x10) = uVar3;
      *(uint *)(iVar1 + 4) = uVar3 + 0x10;
      *(undefined4 *)(iVar1 + 8) = 0;
    }
    iVar2 = *(int *)(iVar1 + 8);
    *(int *)(iVar1 + 8) = iVar2 + 1;
    *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 4) + iVar2 * 4))) = param_1;
  }
  return 0;
}

/* ref: Client::Graphics::Render::VerticalFogRenderer::vf2 */
unsigned int F_00657e90(unsigned int gen_a0)
{
  GEN_ENTER(0x657e90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((!(0.0 < *(float *)(this + 0xd4))) && (!(0.0 < *(float *)(this + 0xd8)))) {
    F_0066e560(this + 4);
    return 0;
  }
  F_0066e490(this + 4,this,((code *)REFP(0x654c20)),1);
  return 0;
}

/* ref: Client::Graphics::Render::VerticalFogRenderObject::vf5 */
unsigned int F_00657ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x657ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_1 & 0x3000000) != 0) {
    iVar1 = *(int *)(REFG(int, 0x137127c) + 0xed3c);
    if (7 < *(uint *)(iVar1 + 8)) {
      if (*(uint * PTR32 *)(iVar1 + 0x10) != (uint *)0x0) {
        **(uint * PTR32 *)(iVar1 + 0x10) = *(uint *)(iVar1 + 8);
      }
      uVar3 = F_006712d0(*(undefined * PTR32 *)(iVar1 + 0xc));
      *(uint *)(iVar1 + 0x10) = uVar3;
      *(uint *)(iVar1 + 4) = uVar3 + 0x10;
      *(undefined4 *)(iVar1 + 8) = 0;
    }
    iVar2 = *(int *)(iVar1 + 8);
    *(int *)(iVar1 + 8) = iVar2 + 1;
    *((undefined * PTR32 *)GEN_TOP((*(int *)(iVar1 + 4) + iVar2 * 4))) = this;
  }
  return 0;
}

/* ref: FUN_00657f30 */
byte F_00657f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x657f30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)((int)this + 0x6c);
  if (7 < *(uint *)(iVar2 + 8)) {
    if (*(uint * PTR32 *)(iVar2 + 0x10) != (uint *)0x0) {
      **(uint * PTR32 *)(iVar2 + 0x10) = *(uint *)(iVar2 + 8);
    }
    uVar3 = F_00671340(*(undefined * PTR32 *)(iVar2 + 0xc));
    *(uint *)(iVar2 + 0x10) = uVar3;
    *(uint *)(iVar2 + 4) = uVar3 + 0x10;
    *(undefined4 *)(iVar2 + 8) = 0;
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)(iVar2 + 4) + *(int *)(iVar2 + 8) * 8)));
  *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
  *puVar1 = param_1;
  *(byte *)(puVar1 + 1) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00658340 */
unsigned int F_00658340(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x658340u, gen_a0, 0u, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float fVar1;
  
  if (*(char *)(REFG(int, 0x137104c) + 0x25f0) == '\0') {
    F_009f15d0(5);
    fVar1 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x11e48) - (float10)param_2)));
    *(float *)(param_1 + 0x11e48) = fVar1;
    if ((float10)fVar1 <= (float10)0) {
      F_009f0540(1);
      *(undefined4 *)(param_1 + 0x11e48) = REFG(float, 0x10947a4);
    }
  }
  F_0063a7d0(REFG(undefined4, 0x1487c54));
  F_006559d0(REFG(undefined4, 0x1487c54),param_2,param_3);
  if (REFG(int, 0x1487c68) != 0) {
    F_009f27e0(REFG(int, 0x1487c68),param_2);
  }
  return 0;
}

/* ref: FUN_006583e0 */
unsigned int F_006583e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6583e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  iVar4 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1ac)));
  if (0xf < *(uint *)(iVar4 + 8)) {
    if (*(uint * PTR32 *)(iVar4 + 0x10) != (uint *)0x0) {
      **(uint * PTR32 *)(iVar4 + 0x10) = *(uint *)(iVar4 + 8);
    }
    uVar2 = F_00671e30(*(undefined * PTR32 *)(iVar4 + 0xc));
    *(uint *)(iVar4 + 0x10) = uVar2;
    *(uint *)(iVar4 + 4) = uVar2 + 0x10;
    *(undefined4 *)(iVar4 + 8) = 0;
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)(iVar4 + 4) + *(int *)(iVar4 + 8) * 8)));
  *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
  *puVar1 = *(undefined4 *)((int)this + 0x2c);
  puVar1[1] = *(undefined4 *)((int)this + 0x30);
  if (param_1 != *(int *)((int)this + 0x34)) {
    iVar4 = *(int *)((int)this + 0x30);
    if (iVar4 != 0) {
      piVar3 = ((int *)GEN_TOP((*(int *)((int)this + 0x2c) + 0x6c)));
      do {
        *piVar3 = param_1;
        piVar3 = piVar3 + 0x24;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    *(int *)((int)this + 0x34) = param_1;
  }
  if ((*(byte *)((int)this + 0x10) & 6) != 0) {
    F_00627b00(this);
  }
  if ((((byte)(*(uint *)((int)this + 0x10) >> 5) | (byte)(*(uint *)((int)this + 0x10) >> 3)) & 1) !=
      0) {
    F_00627bc0(this);
  }
  return 0;
}

/* ref: Client::Graphics::Render::Model::vf5 */
unsigned int F_00658490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x658490u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  if ((((byte)(*(undefined * PTR32 *)&gen_args[0])[0x10] & 1) != 0) && ((*((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x14))) & (*(uint *)&gen_args[1])) != 0)) {
    F_00655e50((*(undefined * PTR32 *)&gen_args[0]),*((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x14))) & (*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[5]));
  }
  return 0;
}

/* ref: FUN_006584c0 */
uint F_006584c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6584c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  ushort * puVar1;
  int iVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  iVar2 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  F_0064d960(this,*param_1);
  puVar3 = *(undefined4 * PTR32 *)(*param_1 + 0x24);
  if (puVar3 != (undefined4 *)0x0) {
    (*(code *)*puVar3)(puVar3[1],puVar3 + 2,*param_1,param_1 + 3);
  }
  iVar6 = *param_1;
  iVar4 = *(int *)(iVar6 + 0x18);
  if ((*(uint *)(iVar6 + 0x10) >> 4 & 1) == 0) {
    iVar6 = *(int *)(iVar4 + 0x118 + param_1[2] * 4);
  }
  else {
    iVar6 = *(int *)(iVar6 + 0x38 + param_1[2] * 4);
  }
  uVar8 = 0;
  if (iVar6 != 0) {
    *(int *)(iVar2 + 0x48) = iVar6;
    uVar5 = *(undefined4 *)(iVar4 + 0x10c + param_1[2] * 4);
    *(undefined4 *)(iVar2 + 0x68) = uVar5;
    *(undefined4 *)(iVar2 + 0x70) = uVar5;
    puVar1 = ((ushort *)GEN_TOP((*(int *)(iVar4 + 0xb8) + (uint)*(byte *)(param_1 + 2) * 0x3c)));
    uVar9 = (uint)puVar1[1];
    uVar7 = (uint)*puVar1;
    iVar2 = param_1[1];
    uVar10 = 0;
    uVar8 = uVar7;
    if (uVar9 != 0) {
      do {
        uVar8 = F_00655ef0(this,param_1,iVar4,uVar10 + uVar7,iVar2);
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar9);
    }
  }
  return uVar8;
}

/* ref: FUN_006585a0 */
uint F_006585a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6585a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10abed0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) =
       (*(undefined * PTR32 (*)[1])REFP(0x10abbb4));
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x110) = 0xffffffff;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x158) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x164) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined4 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x170) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x17c) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x188) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x194) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a0) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1ac) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b8) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c4) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d0) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1dc) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1e8) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  *(undefined4 *)((int)this + 0x1f0) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 500) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x200) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x1f8) = 0;
  *(undefined4 *)((int)this + 0x1fc) = 0;
  *(undefined4 *)((int)this + 0x204) = 0;
  *(undefined4 *)((int)this + 0x208) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20c) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x218) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x210) = 0;
  *(undefined4 *)((int)this + 0x214) = 0;
  *(undefined4 *)((int)this + 0x21c) = 0;
  *(undefined4 *)((int)this + 0x220) = 0;
  *(undefined4 *)((int)this + 0x224) = 0;
  *(undefined4 *)((int)this + 0x228) = 0;
  *(undefined2 *)((int)this + 0x270) = 0;
  F_00c48350((undefined *)((int)this + 0x90),0,0x40);
  F_00c48350((undefined *)((int)this + 0xd0),0,0x40);
  REFG(undefined4, 0x137fa10) = ((code *)REFP(0x62df40));
  *(gen_code32 *)&REFG(undefined, 0x137fa14) = ((code *)REFP(0x62df40));
  *(gen_code32 *)&REFG(undefined, 0x137fa18) = ((code *)REFP(0x62df40));
  *(gen_code32 *)&REFG(undefined, 0x137fa1c) = ((code *)REFP(0x62df40));
  *(gen_code32 *)&REFG(undefined, 0x137fa24) = ((code *)REFP(0x63ce60));
  *(gen_code32 *)&REFG(undefined, 0x137fa28) = ((code *)REFP(0x63ce60));
  *(gen_code32 *)&REFG(undefined, 0x137fa2c) = ((code *)REFP(0x63ce60));
  *(gen_code32 *)&REFG(undefined, 0x137fa30) = ((code *)REFP(0x63ce60));
  *(gen_code32 *)&REFG(undefined, 0x137fa20) = ((code *)REFP(0x63cca0));
  *(gen_code32 *)&REFG(undefined, 0x137fa40) = ((code *)REFP(0x63c9d0));
  *(gen_code32 *)&REFG(undefined, 0x137fa50) = ((code *)REFP(0x6564b0));
  *(gen_code32 *)&REFG(undefined, 0x137fa54) = ((code *)REFP(0x656940));
  return (uint)this;
}

/* ref: Client::Graphics::Render::TerrainRenderObject::vf5 */
unsigned int F_006587c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6587c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte * pbVar1;
  float fVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  float10 fVar6;
  float local_8;
  
  iVar5 = REFG(int, 0x137127c) + 0xaf90;
  fVar2 = *((float *)GEN_TOP((REFG(int, 0x137127c) + 0xc190 + (uint)*(ushort *)(this + 0x26) * 8)));
  pbVar1 = ((byte *)GEN_TOP((REFG(int, 0x137127c) + 0xc18c + (uint)*(ushort *)(this + 0x26) * 8)));
  if (*(float *)&REFG(undefined, 0x1088114) < fVar2) {
    fVar6 = (float10)(float)((float10)REFG(double, 0x1088108) - (float10)fVar2);
    if ((float10)REFG(float, 0x10ab17c) < fVar6) {
      local_8 = REFG(float, 0x1087f04);
    }
    else {
      local_8 = (float)(fVar6 * (float10)*(double *)&REFG(undefined, 0x1094788));
    }
    F_00656bf0(iVar5,this,param_1,(uint)*pbVar1,(uint)pbVar1[2],local_8);
    local_8 = REFG(float, 0x1087f04);
    if (*(float *)(pbVar1 + 4) <= REFG(float, 0x10ab17c)) {
      local_8 = ((float)GEN_TOF(((float10)*(float *)(pbVar1 + 4) * (float10)*(double *)&REFG(undefined, 0x1094788))));
    }
    fVar6 = (float10)local_8;
    bVar3 = pbVar1[1];
    bVar4 = pbVar1[3];
  }
  else {
    fVar6 = (float10)1;
    bVar3 = *pbVar1;
    bVar4 = pbVar1[2];
  }
  F_00656bf0(iVar5,this,param_1,(uint)bVar3,(uint)bVar4,(float)fVar6);
  return 0;
}

/* ref: FUN_006588b0 */
uint F_006588b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6588b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10abee8));
  *(undefined4 *)((int)this + 0x44) = 0xffffffff;
  *(undefined4 *)((int)this + 0x48) = 0;
  puVar1 = (undefined4 *)((int)this + 0x4c);
  iVar2 = 0xf;
  do {
    *puVar1 = 0xffffffff;
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *(undefined4 *)((int)this + 0xcc) = 0xffffffff;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x114) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x120) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 300) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x138) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x144) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x150) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x15c) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x168) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x174) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x180) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18c) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x198) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a4) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b0) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1bc) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c8) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d4) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  *(undefined4 *)((int)this + 0x1f0) = 0x80;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x31fc) =
       (*(undefined * PTR32 (*)[1])REFP(0x10abbbc));
  *(undefined4 *)((int)this + 0x3200) = 0;
  *(undefined4 *)((int)this + 0x3204) = 0;
  *(undefined4 *)((int)this + 0x3208) = 0;
  *(undefined4 *)((int)this + 0x320c) = 0;
  *(undefined4 *)((int)this + 0x3210) = 0;
  *(undefined4 *)((int)this + 0x3214) = 0;
  *(undefined4 *)((int)this + 0x3258) = 0;
  *(undefined4 *)((int)this + 0x325c) = 0;
  *(undefined4 *)((int)this + 0x3260) = 0;
  *(undefined2 *)((int)this + 0x3a6c) = 0;
  *(gen_code32 *)&REFG(undefined, 0x137fa58) = ((code *)REFP(0x650340));
  *(gen_code32 *)&REFG(undefined, 0x137fa5c) = ((code *)REFP(0x650340));
  *(gen_code32 *)&REFG(undefined, 0x137fa60) = ((code *)REFP(0x650340));
  *(gen_code32 *)&REFG(undefined, 0x137fa64) = ((code *)REFP(0x650340));
  *(gen_code32 *)&REFG(undefined, 0x137fa68) = ((code *)REFP(0x6504e0));
  *(gen_code32 *)&REFG(undefined, 0x137fa6c) = ((code *)REFP(0x6506d0));
  *(gen_code32 *)&REFG(undefined, 0x137fa70) = ((code *)REFP(0x6506d0));
  *(gen_code32 *)&REFG(undefined, 0x137fa74) = ((code *)REFP(0x6506d0));
  *(gen_code32 *)&REFG(undefined, 0x137fa78) = ((code *)REFP(0x6506d0));
  *(gen_code32 *)&REFG(undefined, 0x137fa88) = ((code *)REFP(0x656cf0));
  *(undefined4 *)((int)this + 0x3a74) = 0;
  *(undefined4 *)((int)this + 0x3a78) = 0;
  *(undefined4 *)((int)this + 0x3a7c) = 0;
  *(undefined4 *)((int)this + 0x3a80) = 0;
  *(undefined4 *)((int)this + 0x3a84) = 0;
  *(undefined4 *)((int)this + 0x3a88) = 0;
  F_00c48350((undefined *)((int)this + 0xd4),0,0x40);
  return (uint)this;
}

/* ref: Client::Graphics::Render::WaterRenderObject::vf5 */
byte F_00658b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x658b10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  
  bVar1 = F_00657a50((undefined *)(REFG(int, 0x137127c) + 0xea30),this,param_1);
  return bVar1;
}

/* ref: Client::Graphics::Render::LightShaftRenderObject::vf5 */
byte F_00658b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x658b30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  float * param_4 = (float *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  byte bVar7;
  uint uVar8;
  float * pfVar9;
  uint in_ecx;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  
  uVar8 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90);
  (*(uint *)(gen_frame + 0x8c)) = uVar8;
  if (*(int *)(this + 8) != 0) {
    iVar5 = *((int *)GEN_TOP(((*((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) +
                                        0x1a8))) + 8))) >> 0x1b) * 0x358 + 0x2a4 + REFG(int, 0x137127c))));
    fVar1 = ((float)GEN_TOF(((float10)*param_4 - (float10)*(float *)(iVar5 + 0x90))));
    (*(float *)(gen_frame + 0x10)) = fVar1;
    fVar2 = ((float)GEN_TOF(((float10)param_4[1] - (float10)*(float *)(iVar5 + 0x94))));
    (*(float *)(gen_frame + 0x14)) = fVar2;
    fVar3 = ((float)GEN_TOF(((float10)param_4[2] - (float10)*(float *)(iVar5 + 0x98))));
    (*(float *)(gen_frame + 0x18)) = fVar3;
    fVar10 = (float10)fVar2;
    fVar11 = (float10)fVar1;
    fVar12 = (float10)fVar3;
    fVar1 = ((float)GEN_TOF((fVar12 * fVar12 + (fVar11 * fVar11 + fVar10 * fVar10))));
    (*(float *)(gen_frame + 0x38)) = fVar1;
    fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
    (*(float *)(gen_frame + 0x38)) = fVar1;
    (*(double *)(gen_frame + 0x20)) = (double)fVar1;
    (*(float *)(gen_frame + 0xc)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x3c)) = 0.0;
    fVar2 = ((float)GEN_TOF(SQRT((float10)*((float *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 8) + 0xa8))) + 4))) + 0x24
                                           + *((int *)GEN_TOP((*(int *)(this + 8) + 0xa8)))))))));
    (*(float *)(gen_frame + 0x34)) = fVar2;
    pfVar9 = &(*(float *)(gen_frame + 0x34));
    fVar1 = (float)((float10)fVar1 / (float10)fVar2);
    (*(float *)(gen_frame + 0x34)) = fVar1;
    if (!((float10)fVar1 < (float10)1)) {
      pfVar9 = &(*(float *)(gen_frame + 0xc));
    }
    if (!(*(float *)&REFG(undefined, 0x1088114) < *pfVar9)) {
      pfVar9 = &(*(float *)(gen_frame + 0x3c));
    }
    fVar10 = ((float10)GEN_TOD(pow((float10)*pfVar9,(float10)REFG(double, 0x10ac068))));
    (*(float *)(gen_frame + 0x3c)) = (float)fVar10;
    (*(float *)(gen_frame + 0x3c)) = gen_bits2f((uint)(byte)this[0x10]);
    fVar1 = (float)((float10)1 - (float10)(float)fVar10);
    (*(float *)(gen_frame + 0xc)) = fVar1;
    fVar10 = (float10)*(double *)&REFG(undefined, 0x1088100);
    (*(float *)(gen_frame + 0x3c)) = gen_bits2f((uint)(byte)this[0x11]);
    fVar2 = (float)((float10)(byte)this[0x10] / fVar10);
    (*(float *)(gen_frame + 0x10)) = fVar2;
    (*(float *)(gen_frame + 0x3c)) = gen_bits2f((uint)(byte)this[0x12]);
    fVar3 = (float)((float10)(byte)this[0x11] / fVar10);
    (*(float *)(gen_frame + 0x14)) = fVar3;
    fVar4 = (float)((float10)(byte)this[0x12] / fVar10);
    (*(float *)(gen_frame + 0x18)) = fVar4;
    fVar10 = (float10)fVar1;
    (*(float *)(gen_frame + 0x10)) = (float)(fVar10 * (float10)fVar2);
    (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar3 * fVar10);
    (*(float *)(gen_frame + 0x18)) = (float)(fVar10 * (float10)fVar4);
    in_ecx = F_004d9920(*(undefined * PTR32 *)(this + 0xc),0,0,2);
    uVar8 = 0;
    if (in_ecx != 0) {
      uVar8 = F_0054fa20(((undefined1 *)(gen_frame + 0x40)),param_4);
      F_00518ab0(in_ecx,uVar8);
      uVar8 = F_004ef0c0(((undefined1 *)(gen_frame + 0x40)),(uint)(param_4 + 4));
      F_00518ab0(in_ecx + 0x30,uVar8);
      fVar1 = param_4[8];
      (*(float *)((char *)&(*(double *)(gen_frame + 0x20)) + 0)) = fVar1;
      fVar2 = param_4[9];
      (*(float *)((char *)&(*(double *)(gen_frame + 0x20)) + 4)) = fVar2;
      fVar3 = param_4[10];
      (*(float *)(gen_frame + 0x28)) = fVar3;
      *(float *)(in_ecx + 0x6c) = (*(float *)(gen_frame + 0x38));
      *(float *)(in_ecx + 0x60) = fVar1;
      (*(float *)((char *)&(*(double *)(gen_frame + 0x20)) + 0)) = (*(float *)(gen_frame + 0x10));
      *(float *)(in_ecx + 100) = fVar2;
      *(float *)(in_ecx + 0x68) = fVar3;
      (*(float *)((char *)&(*(double *)(gen_frame + 0x20)) + 4)) = (*(float *)(gen_frame + 0x14));
      (*(double *)(gen_frame + 0x20)) = gen_bits2d(CONCAT44((uint)gen_fl2bits((*(float *)(gen_frame + 0x14))),(uint)gen_fl2bits((*(float *)(gen_frame + 0x10)))));
      *(float *)(in_ecx + 0x70) = (*(float *)(gen_frame + 0x10));
      *(float *)(in_ecx + 0x74) = (*(float *)(gen_frame + 0x14));
      (*(float *)(gen_frame + 0x28)) = (*(float *)(gen_frame + 0x18));
      *(float *)(in_ecx + 0x78) = (*(float *)(gen_frame + 0x18));
      *(undefined4 *)(in_ecx + 0x7c) = 0;
      *((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 0x24))) = 0;
      bVar7 = F_00657f30((undefined *)(REFG(int, 0x137127c) + 0xedb0),this,param_3);
      uVar8 = (uint)bVar7;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x8c)) ^ (uint)(uint)(gen_frame + 0x90));
  return (byte)uVar8;
}

/* ref: FUN_00658de0 */
uint F_00658de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x658de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_006584c0(this,param_1);
  return uVar1;
}

/* ref: FUN_00658df0 */
byte F_00658df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x658df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  longlong lVar1;
  gen_size32 _Size;
  uint * puVar2;
  uint * puVar3;
  undefined * pvVar4;
  uint uVar5;
  uint * puVar6;
  uint uVar7;
  int iVar8;
  uint local_8;
  
  uVar7 = param_1 + 0x7fU & 0xffffff80;
  *(uint *)((int)this + 0x10) = uVar7;
  uVar5 = -(uint)((int)((ulonglong)uVar7 * 0x2c >> 0x20) != 0) | (uint)((ulonglong)uVar7 * 0x2c);
  puVar2 = ((uint *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                             (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),-(uint)(0xfffffffb < uVar5) | uVar5 + 4
                              ,0x10)));
  if (puVar2 == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  else {
    *puVar2 = uVar7;
    puVar3 = puVar2 + 1;
    iVar8 = uVar7 - 1;
    if (-1 < iVar8) {
      puVar2 = puVar2 + 4;
      puVar6 = puVar3;
      do {
        *puVar6 = 0;
        puVar2[-2] = 0;
        puVar2[-1] = 0;
        *puVar2 = 0;
        *(undefined2 *)(puVar2 + 2) = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        *(undefined1 *)(puVar2 + 7) = 0;
        puVar6 = puVar6 + 0xb;
        puVar2 = puVar2 + 0xb;
        iVar8 = iVar8 + -1;
      } while (-1 < iVar8);
    }
  }
  _Size = (*(uint *)((int)this + 0x10) >> 5) * 4;
  *(uint * PTR32 *)((int)this + 4) = puVar3;
  pvVar4 = (undefined *)F_00406bb0(_Size,0,0);
  *(undefined * PTR32 *)((int)this + 8) = pvVar4;
  F_00c48350(pvVar4,0,_Size);
  lVar1 = (ulonglong)*(uint *)((int)this + 0x10) * 4;
  pvVar4 = (undefined *)F_00406bb0(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,0,0);
  *(undefined * PTR32 *)((int)this + 0xc) = pvVar4;
  F_00c48350(pvVar4,0,*(int *)((int)this + 0x10) * 4);
  local_8 = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    param_1 = 0;
    do {
      iVar8 = *(int *)((int)this + 4) + param_1;
      uVar5 = F_004dcd60(0x60,2,0);
      *(uint *)(iVar8 + 0x1c) = uVar5;
      if (uVar5 == 0) {
        return 0;
      }
      uVar5 = F_004dcd60(0xc60,2,0);
      *(uint *)(iVar8 + 0x20) = uVar5;
      if (uVar5 == 0) {
        return 0;
      }
      param_1 = param_1 + 0x2c;
      local_8 = local_8 + 1;
    } while (local_8 < *(uint *)((int)this + 0x10));
  }
  if (REFG(undefined4, 0x137fa08) == (undefined *)0x0) {
    REFG(undefined4, 0x137fa08) = (undefined *)F_004dcc90(0x84,4,0);
    if ((REFG(undefined4, 0x137fa08) == (undefined *)0x0) || (uVar5 = F_004d68c0(REFG(undefined4, 0x137fa08),0,0x84,2), uVar5 == 0))
    {
      return 0;
    }
    uVar7 = 0;
    do {
      *(uint *)(uVar5 + uVar7 * 4) = ((uVar7 << 8 | uVar7) << 8 | uVar7) << 8 | uVar7;
      uVar7 = uVar7 + 1;
    } while (uVar7 < 0x21);
    F_004d6970(REFG(undefined4, 0x137fa08));
  }
  return 1;
}

/* ref: FUN_00658fa0 */
byte F_00658fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x658fa0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint * puVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int * piVar7;
  undefined4 * puVar8;
  char * pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  bVar4 = F_00658df0((*(undefined * PTR32 *)&gen_args[0]),(*(uint * PTR32 *)&gen_args[1]));
  if (bVar4 == 0) {
    return 0;
  }
  uVar5 = F_00b52710("GetInstanceData",0xf,0);
  uVar6 = F_00b52710("GeometryInstancingOn",0x14,0);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18c))) = uVar5;
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 400))) = uVar6;
  uVar5 = F_00b52710("GetInstanceData",0xf,0);
  uVar6 = F_00b52710("GeometryInstancingOff",0x15,0);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x198))) = uVar5;
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x19c))) = uVar6;
  uVar5 = F_00b52710("GetLocalPosition",0x10,0);
  uVar6 = F_00b52710("GetLocalPositionNone",0x14,0);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a4))) = uVar5;
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a8))) = uVar6;
  uVar5 = F_00b52710("GetNormalMap",0xc,0);
  uVar6 = F_00b52710("GetNormalMapOff",0xf,0);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) = uVar5;
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b4))) = uVar6;
  uVar5 = F_00b52710("GetNormalMap",0xc,0);
  uVar6 = F_00b52710("GetNormalMapOn",0xe,0);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bc))) = uVar5;
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))) = uVar6;
  uVar5 = F_00b52710("Forward",7,0);
  uVar6 = F_00b52710("ForwardOff",10,0);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c8))) = uVar5;
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1cc))) = uVar6;
  uVar5 = F_00b52710("Forward",7,0);
  uVar6 = F_00b52710("ForwardOn",9,0);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))) = uVar5;
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d8))) = uVar6;
  uVar5 = F_00b52710("ApplyWavingAnim",0xf,0);
  uVar6 = F_00b52710("ApplyWavingAnimOff",0x12,0);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e0))) = uVar5;
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e4))) = uVar6;
  uVar5 = F_00b52710("ApplyWavingAnim",0xf,0);
  uVar6 = F_00b52710("ApplyWavingAnimOn",0x11,0);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1ec))) = uVar5;
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1f0))) = uVar6;
  uVar5 = F_00b52710("ApplyDitherClip",0xf,0);
  uVar6 = F_00b52710("ApplyDitherClipOff",0x12,0);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1f8))) = uVar5;
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1fc))) = uVar6;
  uVar5 = F_00b52710("ApplyDitherClip",0xf,0);
  uVar6 = F_00b52710("ApplyDitherClipOn",0x11,0);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x204))) = uVar5;
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x208))) = uVar6;
  uVar5 = F_00b52710("GetMultiDebugColor",0x12,0);
  uVar6 = F_00b52710("GetMultiDebugColorOff",0x15,0);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x210))) = uVar5;
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x214))) = uVar6;
  uVar5 = F_00b52710("GetMultiDebugColor",0x12,0);
  uVar6 = F_00b52710("GetMultiDebugColorOn",0x14,0);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x21c))) = uVar5;
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x220))) = uVar6;
  iVar3 = REFG(int, 0x1370b90);
  uVar5 = F_004df8f0(*(undefined * PTR32 *)(REFG(int, 0x1370b90) + 0x1c),"g_WavingParam");
  (*(uint * PTR32 *)&gen_args[1]) = ((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x90)));
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x88))) = uVar5;
  (*(int *)(gen_frame + 0x8)) = 0x10;
  do {
    uVar5 = F_004dcd60(0x30,2,0);
    *(*(uint * PTR32 *)&gen_args[1]) = uVar5;
    (*(uint * PTR32 *)&gen_args[1]) = (*(uint * PTR32 *)&gen_args[1]) + 1;
    iVar2 = (*(int *)(gen_frame + 0x8)) + -1;
    (*(int *)(gen_frame + 0x8)) = iVar2;
  } while (iVar2 != 0);
  uVar5 = F_004df8f0(*(undefined * PTR32 *)(iVar3 + 0x1c),"g_DirectionalLightParam");
  (*(uint * PTR32 *)&gen_args[1]) = ((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd0)));
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x8c))) = uVar5;
  (*(int *)(gen_frame + 0x8)) = 0x10;
  do {
    uVar5 = F_004dcd60(0x30,2,0);
    *(*(uint * PTR32 *)&gen_args[1]) = uVar5;
    (*(uint * PTR32 *)&gen_args[1]) = (*(uint * PTR32 *)&gen_args[1]) + 1;
    iVar2 = (*(int *)(gen_frame + 0x8)) + -1;
    (*(int *)(gen_frame + 0x8)) = iVar2;
  } while (iVar2 != 0);
  uVar5 = F_004df8f0(*(undefined * PTR32 *)(iVar3 + 0x1c),"g_BGAmbientParameter");
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x110))) = uVar5;
  uVar5 = F_004dcd60(0x10,2,0);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x114))) = uVar5;
  uVar5 = F_00b52710("Default",7,0);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x15c))) = uVar5;
  uVar5 = F_00b52710("SUB_VIEW_MAIN",0xd,0);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x160))) = uVar5;
  uVar5 = F_00b52710("Default",7,0);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x168))) = uVar5;
  uVar5 = F_00b52710("SUB_VIEW_OCCLUSION",0x12,0);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c))) = uVar5;
  uVar5 = F_00b52710("Default",7,0);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x174))) = uVar5;
  uVar5 = F_00b52710("SUB_VIEW_SHADOW_0",0x11,0);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x178))) = uVar5;
  uVar5 = F_00b52710("Default",7,0);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x180))) = uVar5;
  uVar5 = F_00b52710("SUB_VIEW_CUBE_0",0xf,0);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x184))) = uVar5;
  iVar2 = (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x170;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x118))) = iVar2;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x11c))) = iVar2;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x120))) = iVar2;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x124))) = iVar2;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x128))) = (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x164;
  iVar2 = (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x17c;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 300))) = iVar2;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x130))) = iVar2;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x134))) = iVar2;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x138))) = iVar2;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x148))) = (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x158;
  uVar5 = F_004df8f0(*(undefined * PTR32 *)(iVar3 + 0x1c),"g_InstancingData");
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x80))) = uVar5;
  uVar5 = F_004df8f0(*(undefined * PTR32 *)(iVar3 + 0x1c),"g_InstanceData");
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x84))) = uVar5;
  uVar5 = 0;
  do {
    (*(uint * PTR32 *)&gen_args[1]) = (uint *)F_00c4f2dd();
    uVar6 = uVar5 + 4;
    *(float *)((int)&REFG(float, 0x1379d80) + uVar5) =
         ((float)GEN_TOF(((float10)(int)(*(uint * PTR32 *)&gen_args[1]) / (float10)*(double *)&REFG(undefined, 0x10920e0))));
    uVar5 = uVar6;
  } while (uVar6 < 0x400);
  F_004ff310(((undefined1 *)(gen_frame + 0x0)),0,0);
  (*(undefined4 *)(gen_frame + 0x4)) = 0x746578;
  uVar5 = F_00513d70(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x4)),"common/graphics/texture/-dither.tex",0,0,0);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x228))) = uVar5;
  if (uVar5 != 0) {
    piVar7 = (int *)(uVar5 + 0x8c);
    LOCK();
    iVar3 = *piVar7;
    *piVar7 = *piVar7;
    UNLOCK();
    if (iVar3 < 8) {
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0;
      pcVar9 = "common/graphics/texture/-fresnel.tex";
      puVar8 = &(*(undefined4 *)(gen_frame + 0x4));
      uVar5 = F_004ff310(&(*(uint * PTR32 *)&gen_args[1]),0,0);
      uVar5 = F_00513d70(uVar5,puVar8,pcVar9,uVar10,uVar11,uVar12);
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x224))) = uVar5;
      if (uVar5 != 0) {
        piVar7 = (int *)(uVar5 + 0x8c);
        LOCK();
        iVar3 = *piVar7;
        *piVar7 = *piVar7;
        uVar10 = REFG(float, 0x1087f04);
        UNLOCK();
        if (iVar3 < 8) {
          *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x230))) = REFG(float, 0x1087f04);
          *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x234))) = 0;
          *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x238))) = 0;
          *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x240))) = 0;
          *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x244))) = uVar10;
          *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x248))) = 0;
          *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x250))) = uVar10;
          *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x254))) = uVar10;
          *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 600))) = uVar10;
          *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x25c))) = uVar10;
          bVar4 = F_0066d950(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),*(undefined4 *)(REFG(int, 0x1370b90) + 0x24));
          if (bVar4 != 0) {
            puVar1 = ((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)));
            LOCK();
            uVar5 = *puVar1;
            *puVar1 = *puVar1 + 1;
            UNLOCK();
            if (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) <= uVar5) {
              *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7c))) = 0;
              return 0;
            }
            iVar3 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) + uVar5 * 0x14;
            *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7c))) = iVar3;
            return iVar3 != 0;
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00659530 */
uint F_00659530(unsigned int gen_a0)
{
  GEN_ENTER(0x659530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int local_8;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ac2f0));
  puVar1 = (undefined4 *)((int)this + 4);
  local_8 = 0x1f;
  do {
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abacc));
    puVar1[1] = 0;
    F_00401500(puVar1 + 6,0x34,0x10,((code *)REFP(0x622f40)));
    puVar1 = puVar1 + 0xd6;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6b04) =
       (*(undefined * PTR32 (*)[1])REFP(0x10abbe4));
  *(undefined4 *)((int)this + 0x6b08) = 0;
  *(undefined4 *)((int)this + 0x6b0c) = 0;
  *(undefined4 *)((int)this + 0x6b10) = 0;
  *(undefined4 *)((int)this + 0x6b14) = 0;
  *(undefined4 *)((int)this + 0x6b18) = 0;
  *(undefined4 *)((int)this + 0x6b1c) = 0;
  *(undefined4 *)((int)this + 0x6b60) = 0;
  *(undefined4 *)((int)this + 0x6b64) = 0;
  *(undefined4 *)((int)this + 0x6b68) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6b6c) =
       (*(undefined * PTR32 (*)[1])REFP(0x10ac2e8));
  *(undefined4 *)((int)this + 0xab70) = 0;
  *(undefined4 *)((int)this + 0xab74) = 0;
  *(undefined4 *)((int)this + 0xab78) = 0;
  *(undefined4 *)((int)this + 0xab7c) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xab84));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xab9c) = (*(undefined * PTR32 (*)[1])REFP(0x10aba94));
  F_00c48350((undefined *)((int)this + 0xaba0),0,0x8c);
  F_0063bef0((undefined *)((int)this + 0xac2c));
  F_006585a0((undefined *)((int)this + 0xad10));
  F_006588b0((undefined *)((int)this + 0xaf90));
  F_00636270((undefined *)((int)this + 0xea30));
  F_006379a0((undefined *)((int)this + 0xecd0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xedb0) = (*(undefined * PTR32 (*)[5])REFP(0x10abf00));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xedb4) =
       (*(undefined * PTR32 (*)[1])REFP(0x10abbd4));
  *(undefined4 *)((int)this + 0xedb8) = 0;
  *(undefined4 *)((int)this + 0xedbc) = 0;
  *(undefined4 *)((int)this + 0xedc0) = 0;
  *(undefined4 *)((int)this + 0xedc4) = 0;
  *(undefined4 *)((int)this + 0xedc8) = 0;
  *(undefined4 *)((int)this + 0xedcc) = 0;
  *(undefined4 *)((int)this + 0xee10) = 0;
  *(undefined4 *)((int)this + 0xee14) = 0;
  *(undefined4 *)((int)this + 0xee18) = 0;
  *(undefined4 *)((int)this + 0xee20) = 0xffffffff;
  *(undefined4 *)((int)this + 0xee24) = 0;
  *(undefined4 *)((int)this + 0xee1c) = 0;
  F_00635c90((undefined *)((int)this + 0xee30));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10054) = (*(undefined * PTR32 (*)[5])REFP(0x10ac214));
  *(undefined4 *)((int)this + 0x100b4) = 0;
  *(undefined4 *)((int)this + 0x100b8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x100b0) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined4 *)((int)this + 0x10058) = 0;
  *(undefined4 *)((int)this + 0x1005c) = 0;
  *(undefined4 *)((int)this + 0x10060) = 0;
  *(undefined4 *)((int)this + 0x10064) = 0;
  *(undefined4 *)((int)this + 0x10068) = 0;
  *(undefined4 *)((int)this + 0x1006c) = 0;
  *(undefined4 *)((int)this + 0x10070) = 0;
  *(undefined4 *)((int)this + 0x10074) = 0;
  *(undefined4 *)((int)this + 0x10078) = 0;
  *(undefined4 *)((int)this + 0x1007c) = 0;
  *(undefined4 *)((int)this + 0x10080) = 0;
  *(undefined4 *)((int)this + 0x10084) = 0;
  *(undefined4 *)((int)this + 0x10088) = 0;
  *(undefined4 *)((int)this + 0x1008c) = 0;
  *(undefined4 *)((int)this + 0x10090) = 0;
  F_006405d0((undefined *)((int)this + 0x100e0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10390) = (*(undefined * PTR32 (*)[5])REFP(0x10ac1fc));
  *(undefined4 *)((int)this + 0x10398) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1039c) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined4 *)((int)this + 0x103a0) = 0;
  *(undefined4 *)((int)this + 0x103a4) = 0;
  *(undefined4 *)((int)this + 0x10410) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10418) = (*(undefined * PTR32 (*)[5])REFP(0x10ac1fc));
  *(undefined4 *)((int)this + 0x10420) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10424) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined4 *)((int)this + 0x10428) = 0;
  *(undefined4 *)((int)this + 0x1042c) = 0;
  *(undefined4 *)((int)this + 0x10498) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x104a0) = (*(undefined * PTR32 (*)[5])REFP(0x10ac1fc));
  *(undefined4 *)((int)this + 0x104a8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x104ac) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined4 *)((int)this + 0x104b0) = 0;
  *(undefined4 *)((int)this + 0x104b4) = 0;
  *(undefined4 *)((int)this + 0x10520) = 0;
  F_006413a0((undefined *)((int)this + 0x10528));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x105d4) = (*(undefined * PTR32 (*)[5])REFP(0x10abe04));
  *(undefined4 *)((int)this + 0x105dc) = 0;
  *(undefined4 *)((int)this + 0x105e0) = 0;
  *(undefined4 *)((int)this + 0x105e8) = 0;
  *(undefined4 *)((int)this + 0x105ec) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x105d8) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x105e4) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x105f0) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined4 *)((int)this + 0x105f4) = 0;
  *(undefined4 *)((int)this + 0x105f8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x105fc) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined4 *)((int)this + 0x10600) = 0;
  *(undefined4 *)((int)this + 0x10604) = 0;
  *(undefined2 *)((int)this + 0x1061c) = 0;
  *(undefined4 *)((int)this + 0x11e44) = 0xffffffff;
  *(undefined4 *)((int)this + 0x11e48) = 0;
  *(uint *)((int)this + 0x11e44) = *(uint *)((int)this + 0x11e44) & 0xfffffff0;
  return (uint)this;
}

/* ref: FUN_00659830 */
byte F_00659830(unsigned int gen_a0)
{
  GEN_ENTER(0x659830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined * pvVar6;
  byte bVar7;
  uint uVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  float10 fVar11;
  float10 fVar12;
  float in_XMM1_Da = 0;
  float fVar13;
  float in_XMM2_Da = 0;
  float fVar14;
  float in_XMM3_Da = 0;
  float fVar15;
  float in_XMM7_Da = 0;
  double dVar16;
  
  bVar7 = F_00b7e070(REFG(undefined4, 0x1487c58));
  iVar3 = REFG(int, 0x13759f8);
  if (bVar7 == 0) {
    return 0;
  }
  uVar8 = F_00513dc0("chara/common/texture/white.tex",0,0,0);
  *(uint *)(iVar3 + 0x28c) = uVar8;
  bVar7 = F_006411c0((undefined *)((int)this + 0xab9c));
  if (bVar7 != 0) {
    bVar7 = F_0062d3d0((undefined *)((int)this + 0xac2c));
    if (bVar7 != 0) {
      bVar7 = F_00623960(REFG(undefined4, 0x1487c60));
      if (bVar7 != 0) {
        bVar7 = F_0063d040((undefined *)((int)this + 0xaf90));
        if (bVar7 != 0) {
          bVar7 = F_00658fa0((undefined *)((int)this + 0xad10),0x400);
          if (bVar7 != 0) {
            bVar7 = F_0064af20((undefined *)((int)this + 0xea30));
            if (bVar7 != 0) {
              bVar7 = F_0064c2d0((undefined *)((int)this + 0xecd0));
              if (bVar7 != 0) {
                bVar7 = F_00635e30((undefined *)((int)this + 0xee30));
                if (bVar7 != 0) {
                  bVar7 = F_0064c850((undefined *)((int)this + 0xedb0));
                  if (bVar7 != 0) {
                    bVar7 = F_006314f0((undefined *)((int)this + 0x10054));
                    if (bVar7 != 0) {
                      bVar7 = F_0062fac0((undefined *)((int)this + 0x100e0));
                      if (bVar7 != 0) {
                        *(undefined4 *)((int)this + 0x10394) = 0;
                        uVar8 = F_00b52710(&REFG(undefined, 0x10a6964),4,0);
                        *(uint *)((int)this + 0x103a0) = uVar8;
                        uVar8 = F_00b52710(&REFG(undefined, 0x10a69bc),4,0);
                        *(uint *)((int)this + 0x103a4) = uVar8;
                        pvVar6 = REFG(undefined4, 0x1370b90);
                        F_004d58e0(((undefined1 *)(gen_frame + 0x1c)),0,0,0x34,0);
                        F_004d58e0(((undefined1 *)(gen_frame + 0x20)),0,8,0x34,2);
                        uVar8 = F_004deb40(pvVar6,((undefined1 *)(gen_frame + 0x1c)),2);
                        *(uint *)((int)this + 0x10398) = uVar8;
                        if (REFG(undefined4, 0x137fa98) == (int *)0x0) {
                          REFG(undefined4, 0x137fa98) = (int *)F_004dcc90(32000,4,0);
                          uVar8 = F_004d68c0(REFG(undefined4, 0x137fa98),0,REFG(int * PTR32, 0x137fa98)[6],2);
                          puVar10 = (undefined4 *)(uVar8 + 0xc);
                          (*(float *)(gen_frame + 0x2c)) = 1.4013e-42;
                          do {
                            dVar16 = F_004a4fe0();
                            (*(float *)(gen_frame + 0x30)) = (float)dVar16;
                            dVar16 = F_004a4fe0();
                            (*(float *)(gen_frame + 0x34)) = (float)dVar16;
                            dVar16 = F_004a4fe0();
                            (*(float *)(gen_frame + 0x38)) = (float)dVar16;
                            dVar16 = F_004a4fe0();
                            (*(float *)(gen_frame + 0x28)) = (float)dVar16;
                            puVar9 = (undefined4 *)
                                     F_005212c0(((undefined1 *)(gen_frame + 0x14)),(*(float *)(gen_frame + 0x30)),(*(float *)(gen_frame + 0x34)),(*(float *)(gen_frame + 0x38)),(float)dVar16);
                            uVar2 = *puVar9;
                            fVar11 = (float10)*(double *)&REFG(undefined, 0x10912a8);
                            puVar10[2] = puVar9[1];
                            puVar10[1] = uVar2;
                            (*(float *)(gen_frame + 0x28)) = (float)((float10)(*(float *)(gen_frame + 0x30)) * fVar11);
                            puVar10[-3] = uVar2;
                            puVar10[-2] = puVar10[2];
                            fVar11 = F_00c4cde0(in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,
                                                  (float10)(float)((float10)(*(float *)(gen_frame + 0x30)) * fVar11));
                            (*(float *)(gen_frame + 0x28)) = (float)fVar11;
                            (*(float *)(gen_frame + 0x30)) = (float)fVar11;
                            (*(float *)(gen_frame + 0x28)) = (float)((float10)(*(float *)(gen_frame + 0x34)) * (float10)*(double *)&REFG(undefined, 0x10912a8))
                            ;
                            fVar11 = F_00c4cde0(in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,
                                                  (float10)(float)((float10)(*(float *)(gen_frame + 0x34)) *
                                                                  (float10)*(double *)&REFG(undefined, 0x10912a8))
                                                 );
                            (*(float *)(gen_frame + 0x28)) = (float)fVar11;
                            (*(float *)(gen_frame + 0x34)) = (float)fVar11;
                            (*(float *)(gen_frame + 0x28)) = (float)((float10)(*(float *)(gen_frame + 0x38)) * (float10)*(double *)&REFG(undefined, 0x10912a8))
                            ;
                            fVar11 = F_00c4cde0(in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,
                                                  (float10)(float)((float10)(*(float *)(gen_frame + 0x38)) *
                                                                  (float10)*(double *)&REFG(undefined, 0x10912a8))
                                                 );
                            fVar13 = (float)fVar11;
                            (*(float *)(gen_frame + 0x28)) = fVar13;
                            (*(float *)(gen_frame + 0x38)) = fVar13;
                            puVar9 = (undefined4 *)
                                     F_005212c0(((undefined1 *)(gen_frame + 0xc)),(*(float *)(gen_frame + 0x30)),(*(float *)(gen_frame + 0x34)),fVar13,(float)(float10)0
                                                 );
                            uVar2 = puVar9[1];
                            puVar10[-1] = *puVar9;
                            *puVar10 = uVar2;
                            puVar9 = (undefined4 *)
                                     F_005212c0(&(*(float *)(gen_frame + 0x4)),(*(float *)(gen_frame + 0x30)),(*(float *)(gen_frame + 0x34)),(*(float *)(gen_frame + 0x38)),
                                                  (float)(float10)1);
                            uVar2 = puVar9[1];
                            puVar10[3] = *puVar9;
                            puVar10[4] = uVar2;
                            puVar10 = puVar10 + 8;
                            fVar13 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x2c))) + -1);
                            (*(float *)(gen_frame + 0x2c)) = fVar13;
                          } while (fVar13 != 0.0);
                          F_004d6970(REFG(undefined4, 0x137fa98));
                        }
                        else {
                          ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x137fa98) + 8))))(REFG(undefined4, 0x137fa98));
                        }
                        if (REFG(undefined4, 0x137fa9c) == (int *)0x0) {
                          REFG(undefined4, 0x137fa9c) = (int *)F_004dcd60(0x40,2,0);
                        }
                        else {
                          ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x137fa9c) + 8))))(REFG(undefined4, 0x137fa9c));
                        }
                        if (REFG(undefined4, 0x137faa0) == (int *)0x0) {
                          REFG(undefined4, 0x137faa0) = (int *)F_004dcd60(0x40,2,0);
                        }
                        else {
                          ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x137faa0) + 8))))(REFG(undefined4, 0x137faa0));
                        }
                        if (REFG(undefined4, 0x137faa4) == (int *)0x0) {
                          REFG(undefined4, 0x137faa4) = (int *)F_004dcd60(0x40,2,0);
                        }
                        else {
                          ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x137faa4) + 8))))(REFG(undefined4, 0x137faa4));
                        }
                        if (REFG(undefined4, 0x137faa8) == (int *)0x0) {
                          REFG(undefined4, 0x137faa8) = (int *)F_004dcd60(0x40,2,0);
                        }
                        else {
                          ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x137faa8) + 8))))(REFG(undefined4, 0x137faa8));
                        }
                        if (REFG(undefined4, 0x137faac) == (int *)0x0) {
                          REFG(undefined4, 0x137faac) = (int *)F_004dcd60(0x40,2,0);
                        }
                        else {
                          ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x137faac) + 8))))(REFG(undefined4, 0x137faac));
                        }
                        if (REFG(undefined4, 0x137fab0) == (int *)0x0) {
                          REFG(undefined4, 0x137fab0) = (int *)F_004dcd60(0x60,2,0);
                        }
                        else {
                          ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x137fab0) + 8))))(REFG(undefined4, 0x137fab0));
                        }
                        if (REFG(undefined4, 0x1320528) == 0xffffffff) {
                          REFG(undefined4, 0x1320528) = F_004df8f0(*(undefined * PTR32 *)((int)pvVar6 + 0x1c),
                                                      "g_CameraParameter");
                        }
                        if (REFG(undefined4, 0x132052c) == 0xffffffff) {
                          REFG(undefined4, 0x132052c) = F_004df8f0(*(undefined * PTR32 *)((int)pvVar6 + 0x1c),
                                                      "g_WorldViewMatrix");
                        }
                        if (REFG(undefined4, 0x1320530) == 0xffffffff) {
                          REFG(undefined4, 0x1320530) = F_004df8f0(*(undefined * PTR32 *)((int)pvVar6 + 0x1c),
                                                      "g_WorldViewProjMatrix");
                        }
                        if (REFG(undefined4, 0x1320534) == 0xffffffff) {
                          REFG(undefined4, 0x1320534) = F_004df8f0(*(undefined * PTR32 *)((int)pvVar6 + 0x1c),
                                                      "g_GeometryParam");
                        }
                        if (REFG(undefined4, 0x1320538) == 0xffffffff) {
                          REFG(undefined4, 0x1320538) = F_004df8f0(*(undefined * PTR32 *)((int)pvVar6 + 0x1c),
                                                      "g_MaterialParam");
                        }
                        if (REFG(undefined4, 0x132053c) == 0xffffffff) {
                          REFG(undefined4, 0x132053c) = F_004df8f0(*(undefined * PTR32 *)((int)pvVar6 + 0x1c),"g_RoofMatrix")
                          ;
                        }
                        if (REFG(undefined4, 0x1320540) == 0xffffffff) {
                          REFG(undefined4, 0x1320540) = F_004df8f0(*(undefined * PTR32 *)((int)pvVar6 + 0x20),"g_RoofSampler"
                                                     );
                        }
                        if (REFG(undefined4, 0x1320544) == 0xffffffff) {
                          REFG(undefined4, 0x1320544) = F_004df8f0(*(undefined * PTR32 *)((int)pvVar6 + 0x1c),
                                                      "g_DirectionalShadowParameter");
                        }
                        if (REFG(undefined4, 0x1320548) == 0xffffffff) {
                          REFG(undefined4, 0x1320548) = F_004df8f0(*(undefined * PTR32 *)((int)pvVar6 + 0x20),
                                                      "g_SamplerShadow");
                        }
                        if (REFG(undefined4, 0x132054c) == 0xffffffff) {
                          REFG(undefined4, 0x132054c) = F_004df8f0(*(undefined * PTR32 *)((int)pvVar6 + 0x20),"g_AnimSampler"
                                                     );
                        }
                        uVar5 = REFG(float, 0x10a0d00);
                        fVar15 = REFG(float, 0x1094880);
                        fVar1 = REFG(float, 0x1090708);
                        fVar14 = REFG(float, 0x1088068);
                        fVar13 = REFG(float, 0x1087f04);
                        (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1090708);
                        *(undefined4 *)((int)this + 0x103c8) = 0;
                        (*(float *)(gen_frame + 0x8)) = 0.0;
                        *(float *)((int)this + 0x103cc) = fVar1;
                        *(undefined4 *)((int)this + 0x103d0) = 0;
                        (*(float *)(gen_frame + 0x24)) = fVar15;
                        (*(float *)(gen_frame + 0x28)) = fVar15;
                        *(float *)((int)this + 0x103f4) = fVar13;
                        *(float *)((int)this + 0x103a8) = fVar15;
                        *(float *)((int)this + 0x103ac) = fVar15;
                        (*(float *)(gen_frame + 0x4)) = fVar13;
                        (*(float *)(gen_frame + 0x8)) = fVar13;
                        *(float *)((int)this + 0x103f8) = fVar13;
                        *(float *)((int)this + 0x103fc) = fVar13;
                        *(float *)((int)this + 0x10400) = fVar13;
                        iVar3 = *(int *)((int)this + 0x10394);
                        *(undefined4 *)((int)this + 0x103b8) = 0;
                        *(undefined4 *)((int)this + 0x103b4) = 0;
                        *(undefined4 *)((int)this + 0x103d4) = 0;
                        *(undefined4 *)((int)this + 0x103e0) = 0;
                        *(undefined4 *)((int)this + 0x103b0) = uVar5;
                        *(float *)((int)this + 0x103e4) = fVar13;
                        *(float *)((int)this + 0x103e8) = fVar13;
                        *(undefined4 *)((int)this + 0x103ec) = 0;
                        *(undefined4 *)((int)this + 0x103f0) = 0;
                        *(float *)((int)this + 0x103d8) = fVar13;
                        *(float *)((int)this + 0x103dc) = fVar14;
                        *(undefined4 *)((int)this + 0x10404) = 0;
                        *(undefined4 *)((int)this + 0x103bc) = 0;
                        *(undefined4 *)((int)this + 0x10408) = 0;
                        *(undefined4 *)((int)this + 0x103c0) = 0;
                        *(float *)((int)this + 0x103c4) = fVar14;
                        *(undefined4 *)((int)this + 0x10414) = 0;
                        fVar1 = REFG(float, 0x10a509c);
                        uVar4 = REFG(float, 0x1094884);
                        uVar2 = REFG(float, 0x10947a4);
                        if (iVar3 == 0) {
                          *(float *)((int)this + 0x103f4) = fVar14;
                          (*(float *)(gen_frame + 0x4)) = fVar14;
                          (*(float *)(gen_frame + 0x8)) = fVar14;
                          *(float *)((int)this + 0x103f8) = fVar14;
                          *(undefined4 *)((int)this + 0x103b0) = uVar2;
                          uVar2 = REFG(float, 0x1087ef8);
                          *(float *)((int)this + 0x103fc) = fVar14;
                          *(float *)((int)this + 0x103d4) = fVar15;
                          *(float *)((int)this + 0x103e4) = fVar13;
                          *(undefined4 *)((int)this + 0x103e8) = uVar2;
                          *(float *)((int)this + 0x10400) = fVar14;
                        }
                        else if (iVar3 == 1) {
                          *(undefined4 *)((int)this + 0x103b0) = uVar5;
                          *(float *)((int)this + 0x103d4) = fVar13;
                          *(undefined4 *)((int)this + 0x103ec) = uVar4;
                          *(float *)((int)this + 0x103f0) = fVar13;
                          *(undefined4 *)((int)this + 0x103e4) = uVar5;
                          *(float *)((int)this + 0x103e8) = fVar15;
                        }
                        else if (iVar3 == 2) {
                          (*(float *)(gen_frame + 0x4)) = 0.0;
                          *(float *)((int)this + 0x103c8) = fVar13;
                          (*(float *)(gen_frame + 0x8)) = 0.0;
                          *(undefined4 *)((int)this + 0x103cc) = 0;
                          *(float *)((int)this + 0x103f4) = fVar13;
                          *(undefined4 *)((int)this + 0x103d0) = 0;
                          (*(float *)(gen_frame + 0x4)) = 0.0;
                          (*(float *)(gen_frame + 0x8)) = fVar13;
                          *(float *)((int)this + 0x103f8) = fVar13;
                          *(undefined4 *)((int)this + 0x103fc) = 0;
                          *(undefined4 *)((int)this + 0x103b0) = uVar5;
                          *(undefined4 *)((int)this + 0x103d4) = uVar5;
                          *(float *)((int)this + 0x103e4) = fVar1;
                          *(float *)((int)this + 0x103e8) = fVar13;
                          *(float *)((int)this + 0x10400) = fVar13;
                          fVar14 = fVar1;
                        }
                        *(undefined4 *)((int)this + 0x104a4) = 2;
                        F_00661870(&REFG(undefined * PTR32, 0x1320754),"GetShadow","GetShadow_Enable");
                        F_00661870(&REFG(undefined * PTR32, 0x1320760),"GetColor","GetColor_Texture");
                        uVar8 = F_00b52710(&REFG(undefined, 0x10a69b4),4,0);
                        *(uint *)((int)this + 0x104b0) = uVar8;
                        uVar8 = F_00b52710(&REFG(undefined, 0x10a69bc),4,0);
                        *(uint *)((int)this + 0x104b4) = uVar8;
                        pvVar6 = REFG(undefined4, 0x1370b90);
                        F_004d58e0(((undefined1 *)(gen_frame + 0x1c)),0,0,0x34,0);
                        F_004d58e0(((undefined1 *)(gen_frame + 0x20)),0,8,0x34,2);
                        uVar8 = F_004deb40(pvVar6,((undefined1 *)(gen_frame + 0x1c)),2);
                        *(uint *)((int)this + 0x104a8) = uVar8;
                        if (REFG(undefined4, 0x137fa0c) == (int *)0x0) {
                          REFG(undefined4, 0x137fa0c) = (int *)F_004dcc90(16000,4,0);
                          uVar8 = F_004d68c0(REFG(undefined4, 0x137fa0c),0,REFG(int * PTR32, 0x137fa0c)[6],2);
                          puVar10 = (undefined4 *)(uVar8 + 4);
                          (*(float *)(gen_frame + 0x28)) = 1.4013e-42;
                          do {
                            dVar16 = F_004a4fe0();
                            (*(float *)(gen_frame + 0x2c)) = (float)dVar16;
                            dVar16 = F_004a4fe0();
                            (*(float *)(gen_frame + 0x38)) = (float)dVar16;
                            dVar16 = F_004a4fe0();
                            (*(float *)(gen_frame + 0x34)) = (float)dVar16;
                            dVar16 = F_004a4fe0();
                            (*(float *)(gen_frame + 0x30)) = (float)dVar16;
                            puVar9 = (undefined4 *)
                                     F_005212c0(&(*(float *)(gen_frame + 0x4)),(*(float *)(gen_frame + 0x2c)),(*(float *)(gen_frame + 0x38)),(*(float *)(gen_frame + 0x34)),(float)dVar16);
                            fVar12 = (float10)(*(float *)(gen_frame + 0x2c));
                            fVar11 = (float10)*(double *)&REFG(undefined, 0x10912a8);
                            uVar2 = puVar9[1];
                            puVar10[-1] = *puVar9;
                            *puVar10 = uVar2;
                            (*(float *)(gen_frame + 0x2c)) = (float)(fVar12 * fVar11);
                            fVar11 = F_00c4cde0(fVar13,fVar14,fVar15,in_XMM7_Da,
                                                  (float10)(float)(fVar12 * fVar11));
                            (*(float *)(gen_frame + 0x2c)) = (float)fVar11;
                            fVar11 = (float10)(*(float *)(gen_frame + 0x38));
                            (*(float *)(gen_frame + 0x38)) = (float)(fVar11 * (float10)*(double *)&REFG(undefined, 0x10912a8));
                            fVar11 = F_00c4cde0(fVar13,fVar14,fVar15,in_XMM7_Da,
                                                  (float10)(float)(fVar11 * (float10)*(double *)
                                                                                      &REFG(undefined, 0x10912a8))
                                                 );
                            (*(float *)(gen_frame + 0x38)) = (float)fVar11;
                            fVar11 = (float10)(*(float *)(gen_frame + 0x34));
                            (*(float *)(gen_frame + 0x34)) = (float)(fVar11 * (float10)*(double *)&REFG(undefined, 0x10912a8));
                            fVar11 = F_00c4cde0(fVar13,fVar14,fVar15,in_XMM7_Da,
                                                  (float10)(float)(fVar11 * (float10)*(double *)
                                                                                      &REFG(undefined, 0x10912a8))
                                                 );
                            (*(float *)(gen_frame + 0x34)) = (float)fVar11;
                            fVar11 = (float10)(*(float *)(gen_frame + 0x30));
                            (*(float *)(gen_frame + 0x30)) = (float)(fVar11 * (float10)*(double *)&REFG(undefined, 0x10912a8));
                            fVar11 = F_00c4cde0(fVar13,fVar14,fVar15,in_XMM7_Da,
                                                  (float10)(float)(fVar11 * (float10)*(double *)
                                                                                      &REFG(undefined, 0x10912a8))
                                                 );
                            fVar1 = (float)fVar11;
                            (*(float *)(gen_frame + 0x30)) = fVar1;
                            puVar9 = (undefined4 *)
                                     F_005212c0(((undefined1 *)(gen_frame + 0xc)),(*(float *)(gen_frame + 0x2c)),(*(float *)(gen_frame + 0x38)),(*(float *)(gen_frame + 0x34)),fVar1);
                            uVar2 = puVar9[1];
                            puVar10[1] = *puVar9;
                            puVar10[2] = uVar2;
                            puVar10 = puVar10 + 4;
                            fVar1 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x28))) + -1);
                            (*(float *)(gen_frame + 0x28)) = fVar1;
                          } while (fVar1 != 0.0);
                          F_004d6970(REFG(undefined4, 0x137fa0c));
                        }
                        else {
                          ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x137fa0c) + 8))))(REFG(undefined4, 0x137fa0c));
                        }
                        if (REFG(undefined4, 0x137fa9c) == (int *)0x0) {
                          REFG(undefined4, 0x137fa9c) = (int *)F_004dcd60(0x40,2,0);
                        }
                        else {
                          ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x137fa9c) + 8))))(REFG(undefined4, 0x137fa9c));
                        }
                        if (REFG(undefined4, 0x137faa0) == (int *)0x0) {
                          REFG(undefined4, 0x137faa0) = (int *)F_004dcd60(0x40,2,0);
                        }
                        else {
                          ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x137faa0) + 8))))(REFG(undefined4, 0x137faa0));
                        }
                        if (REFG(undefined4, 0x137faa4) == (int *)0x0) {
                          REFG(undefined4, 0x137faa4) = (int *)F_004dcd60(0x40,2,0);
                        }
                        else {
                          ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x137faa4) + 8))))(REFG(undefined4, 0x137faa4));
                        }
                        if (REFG(undefined4, 0x137faa8) == (int *)0x0) {
                          REFG(undefined4, 0x137faa8) = (int *)F_004dcd60(0x40,2,0);
                        }
                        else {
                          ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x137faa8) + 8))))(REFG(undefined4, 0x137faa8));
                        }
                        if (REFG(undefined4, 0x137faac) == (int *)0x0) {
                          REFG(undefined4, 0x137faac) = (int *)F_004dcd60(0x40,2,0);
                        }
                        else {
                          ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x137faac) + 8))))(REFG(undefined4, 0x137faac));
                        }
                        if (REFG(undefined4, 0x137fab0) == (int *)0x0) {
                          REFG(undefined4, 0x137fab0) = (int *)F_004dcd60(0x60,2,0);
                        }
                        else {
                          ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x137fab0) + 8))))(REFG(undefined4, 0x137fab0));
                        }
                        if (REFG(undefined4, 0x1320528) == 0xffffffff) {
                          REFG(undefined4, 0x1320528) = F_004df8f0(*(undefined * PTR32 *)((int)pvVar6 + 0x1c),
                                                      "g_CameraParameter");
                        }
                        if (REFG(undefined4, 0x132052c) == 0xffffffff) {
                          REFG(undefined4, 0x132052c) = F_004df8f0(*(undefined * PTR32 *)((int)pvVar6 + 0x1c),
                                                      "g_WorldViewMatrix");
                        }
                        if (REFG(undefined4, 0x1320530) == 0xffffffff) {
                          REFG(undefined4, 0x1320530) = F_004df8f0(*(undefined * PTR32 *)((int)pvVar6 + 0x1c),
                                                      "g_WorldViewProjMatrix");
                        }
                        if (REFG(undefined4, 0x1320534) == 0xffffffff) {
                          REFG(undefined4, 0x1320534) = F_004df8f0(*(undefined * PTR32 *)((int)pvVar6 + 0x1c),
                                                      "g_GeometryParam");
                        }
                        if (REFG(undefined4, 0x1320538) == 0xffffffff) {
                          REFG(undefined4, 0x1320538) = F_004df8f0(*(undefined * PTR32 *)((int)pvVar6 + 0x1c),
                                                      "g_MaterialParam");
                        }
                        if (REFG(undefined4, 0x132053c) == 0xffffffff) {
                          REFG(undefined4, 0x132053c) = F_004df8f0(*(undefined * PTR32 *)((int)pvVar6 + 0x1c),"g_RoofMatrix")
                          ;
                        }
                        if (REFG(undefined4, 0x1320540) == 0xffffffff) {
                          REFG(undefined4, 0x1320540) = F_004df8f0(*(undefined * PTR32 *)((int)pvVar6 + 0x20),"g_RoofSampler"
                                                     );
                        }
                        if (REFG(undefined4, 0x1320544) == 0xffffffff) {
                          REFG(undefined4, 0x1320544) = F_004df8f0(*(undefined * PTR32 *)((int)pvVar6 + 0x1c),
                                                      "g_DirectionalShadowParameter");
                        }
                        if (REFG(undefined4, 0x1320548) == 0xffffffff) {
                          REFG(undefined4, 0x1320548) = F_004df8f0(*(undefined * PTR32 *)((int)pvVar6 + 0x20),
                                                      "g_SamplerShadow");
                        }
                        if (REFG(undefined4, 0x132054c) == 0xffffffff) {
                          REFG(undefined4, 0x132054c) = F_004df8f0(*(undefined * PTR32 *)((int)pvVar6 + 0x20),"g_AnimSampler"
                                                     );
                        }
                        uVar5 = REFG(float, 0x10a0d00);
                        fVar15 = REFG(float, 0x1094880);
                        fVar1 = REFG(float, 0x1090708);
                        fVar14 = REFG(float, 0x1088068);
                        fVar13 = REFG(float, 0x1087f04);
                        (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1090708);
                        *(undefined4 *)((int)this + 0x104d8) = 0;
                        (*(float *)(gen_frame + 0x8)) = 0.0;
                        *(float *)((int)this + 0x104dc) = fVar1;
                        *(undefined4 *)((int)this + 0x104e0) = 0;
                        (*(float *)(gen_frame + 0x24)) = fVar15;
                        (*(float *)(gen_frame + 0x28)) = fVar15;
                        *(float *)((int)this + 0x10504) = fVar13;
                        *(float *)((int)this + 0x104b8) = fVar15;
                        *(float *)((int)this + 0x104bc) = fVar15;
                        (*(float *)(gen_frame + 0x4)) = fVar13;
                        (*(float *)(gen_frame + 0x8)) = fVar13;
                        *(float *)((int)this + 0x10508) = fVar13;
                        *(float *)((int)this + 0x1050c) = fVar13;
                        *(float *)((int)this + 0x10510) = fVar13;
                        iVar3 = *(int *)((int)this + 0x104a4);
                        *(undefined4 *)((int)this + 0x104c8) = 0;
                        *(undefined4 *)((int)this + 0x104c4) = 0;
                        *(undefined4 *)((int)this + 0x104e4) = 0;
                        *(undefined4 *)((int)this + 0x104f0) = 0;
                        *(undefined4 *)((int)this + 0x104c0) = uVar5;
                        *(float *)((int)this + 0x104f4) = fVar13;
                        *(float *)((int)this + 0x104f8) = fVar13;
                        *(undefined4 *)((int)this + 0x104fc) = 0;
                        *(undefined4 *)((int)this + 0x10500) = 0;
                        *(float *)((int)this + 0x104e8) = fVar13;
                        *(float *)((int)this + 0x104ec) = fVar14;
                        *(undefined4 *)((int)this + 0x10514) = 0;
                        *(undefined4 *)((int)this + 0x104cc) = 0;
                        *(undefined4 *)((int)this + 0x10518) = 0;
                        *(undefined4 *)((int)this + 0x104d0) = 0;
                        *(float *)((int)this + 0x104d4) = fVar14;
                        *(undefined4 *)((int)this + 0x10524) = 0;
                        fVar1 = REFG(float, 0x10a509c);
                        uVar4 = REFG(float, 0x1094884);
                        uVar2 = REFG(float, 0x10947a4);
                        if (iVar3 == 0) {
                          *(float *)((int)this + 0x10504) = fVar14;
                          (*(float *)(gen_frame + 0x4)) = fVar14;
                          (*(float *)(gen_frame + 0x8)) = fVar14;
                          *(float *)((int)this + 0x10508) = fVar14;
                          *(undefined4 *)((int)this + 0x104c0) = uVar2;
                          uVar2 = REFG(float, 0x1087ef8);
                          *(float *)((int)this + 0x1050c) = fVar14;
                          *(float *)((int)this + 0x104e4) = fVar15;
                          *(float *)((int)this + 0x104f4) = fVar13;
                          *(undefined4 *)((int)this + 0x104f8) = uVar2;
                          *(float *)((int)this + 0x10510) = fVar14;
                        }
                        else if (iVar3 == 1) {
                          *(undefined4 *)((int)this + 0x104c0) = uVar5;
                          *(float *)((int)this + 0x104e4) = fVar13;
                          *(undefined4 *)((int)this + 0x104fc) = uVar4;
                          *(float *)((int)this + 0x10500) = fVar13;
                          *(undefined4 *)((int)this + 0x104f4) = uVar5;
                          *(float *)((int)this + 0x104f8) = fVar15;
                        }
                        else if (iVar3 == 2) {
                          (*(float *)(gen_frame + 0x4)) = 0.0;
                          *(float *)((int)this + 0x104d8) = fVar13;
                          (*(float *)(gen_frame + 0x8)) = 0.0;
                          *(undefined4 *)((int)this + 0x104dc) = 0;
                          *(float *)((int)this + 0x10504) = fVar13;
                          *(undefined4 *)((int)this + 0x104e0) = 0;
                          (*(float *)(gen_frame + 0x4)) = 0.0;
                          (*(float *)(gen_frame + 0x8)) = fVar13;
                          *(float *)((int)this + 0x10508) = fVar13;
                          *(undefined4 *)((int)this + 0x1050c) = 0;
                          *(undefined4 *)((int)this + 0x104c0) = uVar5;
                          *(undefined4 *)((int)this + 0x104e4) = uVar5;
                          *(float *)((int)this + 0x104f4) = fVar1;
                          *(float *)((int)this + 0x104f8) = fVar13;
                          *(float *)((int)this + 0x10510) = fVar13;
                        }
                        bVar7 = F_00624470((undefined *)((int)this + 0x10528));
                        if (bVar7 != 0) {
                          *(uint *)((int)this + 0x11e44) = *(uint *)((int)this + 0x11e44) | 2;
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

/* ref: FUN_0065a5f0 */
byte F_0065a5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65a5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  short sVar2;
  uint uVar3;
  int * piVar4;
  undefined4 * puVar5;
  int iVar6;
  undefined4 * puVar7;
  uint uVar8;
  undefined4 * puVar9;
  int iVar10;
  undefined * PTR32 * ppvVar11;
  
  ((undefined * PTR32 *)(gen_frame + 0x24))[1] = this;
  if (param_1 != 0) {
    uVar3 = F_005009f0(param_1);
    (*(uint *)(gen_frame + 0x1c)) = uVar3;
    F_0063a4d0(this,uVar3);
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (undefined * PTR32 *)0x0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10)) = (undefined * PTR32 *)0x0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)) = (undefined * PTR32 *)0x0;
    F_00673690(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)),uVar3);
    (*(uint *)(gen_frame + 0x20)) = 0;
    if (uVar3 != 0) {
      do {
        puVar5 = (undefined4 *)F_00500a00(param_1,(*(uint *)(gen_frame + 0x20)));
        pvVar1 = ((undefined * PTR32 *)(gen_frame + 0x24))[1];
        uVar3 = 0;
        if (*(uint *)((int)((undefined * PTR32 *)(gen_frame + 0x24))[1] + 0x68) != 0) {
          piVar4 = ((int *)GEN_TOP((*(int *)((int)((undefined * PTR32 *)(gen_frame + 0x24))[1] + 0x5c) + 0x20)));
LAB_0065a6a5: ;
          if (*piVar4 != puVar5[8]) goto code_r0x0065a6a9;
          puVar7 = ((undefined4 *)GEN_TOP((uVar3 * 0x40 + *(int *)((int)((undefined * PTR32 *)(gen_frame + 0x24))[1] + 0x5c))));
          puVar9 = puVar7;
          for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar9 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar9 = puVar9 + 1;
          }
          uVar8 = F_00623160(((undefined * PTR32 *)(gen_frame + 0x24))[1],puVar7);
          sVar2 = (short)uVar8;
          if (sVar2 == -1) {
            sVar2 = -1;
          }
          *((short *)GEN_TOP((*(int *)((int)pvVar1 + 100) + uVar3 * 2))) = sVar2;
          goto LAB_0065a7aa;
        }
LAB_0065a6b1: ;
        ((undefined * PTR32 *)(gen_frame + 0x24))[0] = puVar5;
        ppvVar11 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10));
        if ((((undefined * PTR32 *)(gen_frame + 0x24)) < (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10))) && ((*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) <= ((undefined * PTR32 *)(gen_frame + 0x24)))) {
          iVar10 = (int)((undefined * PTR32 *)(gen_frame + 0x24)) - (int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc));
          if ((*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10)) == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14))) {
            iVar6 = (int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10)) - (int)((int)(uintptr_t)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc))) >> 2;
            if (iVar6 == -1) {
LAB_0065a7c2: ;
                    
              F_00c4579a("vector<T> too long");
            }
            uVar8 = iVar6 + 1;
            uVar3 = (int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)) - (int)((int)(uintptr_t)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc))) >> 2;
            if (uVar3 < uVar8) {
              if (-(uVar3 >> 1) - 1 < uVar3) {
                uVar3 = 0;
              }
              else {
                uVar3 = uVar3 + (uVar3 >> 1);
              }
              if (uVar3 < uVar8) {
                uVar3 = uVar8;
              }
              F_00673690(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)),uVar3);
              ppvVar11 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10));
            }
          }
          if (ppvVar11 != (undefined * PTR32 *)0x0) {
            *ppvVar11 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[iVar10 >> 2];
          }
        }
        else {
          if ((*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10)) == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14))) {
            iVar10 = (int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10)) - (int)((int)(uintptr_t)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc))) >> 2;
            if (iVar10 == -1) goto LAB_0065a7c2;
            uVar8 = iVar10 + 1;
            uVar3 = (int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)) - (int)((int)(uintptr_t)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc))) >> 2;
            if (uVar3 < uVar8) {
              if (-(uVar3 >> 1) - 1 < uVar3) {
                uVar3 = 0;
              }
              else {
                uVar3 = uVar3 + (uVar3 >> 1);
              }
              if (uVar3 < uVar8) {
                uVar3 = uVar8;
              }
              F_00673690(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)),uVar3);
              ppvVar11 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10));
            }
          }
          if (ppvVar11 != (undefined * PTR32 *)0x0) {
            *ppvVar11 = puVar5;
          }
        }
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10)) = ppvVar11 + 1;
LAB_0065a7aa: ;
        uVar3 = (*(uint *)(gen_frame + 0x20)) + 1;
        (*(uint *)(gen_frame + 0x20)) = uVar3;
        this = ((undefined * PTR32 *)(gen_frame + 0x24))[1];
      } while (uVar3 < (*(uint *)(gen_frame + 0x1c)));
    }
    ppvVar11 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc));
    if ((*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) != (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10))) {
      do {
        pvVar1 = ((undefined * PTR32 *)(gen_frame + 0x24))[1];
        uVar3 = 0;
        if (*(uint *)((int)this + 0x68) != 0) {
          piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x5c) + 0x20)));
LAB_0065a663: ;
          if (*piVar4 != -1) goto code_r0x0065a66c;
          puVar7 = ((undefined4 *)GEN_TOP((uVar3 * 0x40 + *(int *)((int)this + 0x5c))));
          puVar5 = *ppvVar11;
          puVar9 = puVar7;
          for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar9 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar9 = puVar9 + 1;
          }
          uVar8 = F_00623160(((undefined * PTR32 *)(gen_frame + 0x24))[1],puVar7);
          sVar2 = (short)uVar8;
          if (sVar2 == -1) {
            sVar2 = -1;
          }
          *((short *)GEN_TOP((*(int *)((int)pvVar1 + 100) + uVar3 * 2))) = sVar2;
          this = pvVar1;
        }
LAB_0065a803: ;
        ppvVar11 = ppvVar11 + 1;
      } while (ppvVar11 != (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10)));
    }
    iVar10 = *(int *)((int)this + 0x68);
    if (*(int *)((int)this + 0x6c) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))
                (*(int * PTR32 *)(REFG(int, 0x1371270) + 4),*(int *)((int)this + 0x6c));
      *(undefined4 *)((int)this + 0x6c) = 0;
    }
    if (iVar10 == 0) {
      *(undefined4 *)((int)this + 0x70) = 0;
    }
    else {
      uVar3 = iVar10 + 0x1fU >> 5;
      puVar9 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))
                         (*(int * PTR32 *)(REFG(int, 0x1371270) + 4),uVar3 * 4,4)));
      puVar5 = puVar9;
      if (uVar3 != 0) {
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar5 = 0xffffffff;
          puVar5 = puVar5 + 1;
        }
      }
      *(undefined4 * PTR32 *)((int)this + 0x6c) = puVar9;
      *(int *)((int)this + 0x70) = iVar10;
    }
    if ((*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) != (undefined * PTR32 *)0x0) {
      F_00429760((*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)),((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)) - (int)((int)(uintptr_t)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc))) >> 2) * 4,0xd8);
    }
  }
  return 1;
code_r0x0065a6a9: ;
  uVar3 = uVar3 + 1;
  piVar4 = piVar4 + 0x10;
  if (*(uint *)((int)((undefined * PTR32 *)(gen_frame + 0x24))[1] + 0x68) <= uVar3) goto LAB_0065a6b1;
  goto LAB_0065a6a5;
code_r0x0065a66c: ;
  uVar3 = uVar3 + 1;
  piVar4 = piVar4 + 0x10;
  if (*(uint *)((int)this + 0x68) <= uVar3) goto LAB_0065a803;
  goto LAB_0065a663;
}

/* ref: FUN_0065a8a0 */
byte F_0065a8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65a8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  short sVar2;
  int * piVar3;
  int iVar4;
  uint uVar5;
  undefined4 * puVar6;
  int * PTR32 * ppiVar7;
  uint uVar8;
  int iVar9;
  int * piVar10;
  undefined4 * puVar11;
  float10 fVar12;
  float10 fVar13;
  
  uVar8 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0xa8) + 4))) + 0x20 + *(int *)(param_1 + 0xa8))));
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  (*(uint *)(gen_frame + 0x1c)) = uVar8;
  F_0063a4d0(this,uVar8);
  (*(int * PTR32 * PTR32 *)(gen_frame + 0xc)) = (int * PTR32 *)0x0;
  (*(int * PTR32 * PTR32 *)(gen_frame + 0x10)) = (int * PTR32 *)0x0;
  (*(int * PTR32 * PTR32 *)(gen_frame + 0x14)) = (int * PTR32 *)0x0;
  F_00673740(&(*(int * PTR32 * PTR32 *)(gen_frame + 0xc)),uVar8);
  piVar10 = *(int * PTR32 *)(param_1 + 0xb4);
  (*(int * PTR32 *)(gen_frame + 0x24)) = piVar10;
  (*(int * PTR32 * PTR32 *)(gen_frame + 0x20)) = (int * PTR32 *)0x0;
  if (uVar8 != 0) {
    do {
      (*(int * PTR32 *)(gen_frame + 0x24)) = piVar10;
      if (*(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x68) != 0) {
        piVar3 = ((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x5c) + 0x20)));
        uVar8 = 0;
        do {
          if (*piVar3 == *piVar10) {
            iVar9 = uVar8 * 0x40 + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x5c);
            F_00c49908(iVar9,0x20,piVar10[1] + 8 + *(int *)(param_1 + 0xa8));
            pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x28));
            *(int *)(iVar9 + 0x20) = *piVar10;
            *(int *)(iVar9 + 0x24) = piVar10[2];
            *(int *)(iVar9 + 0x28) = piVar10[3];
            *(int *)(iVar9 + 0x2c) = piVar10[4];
            fVar12 = (float10)*(double *)&REFG(undefined, 0x1080228);
            fVar13 = (float10)*(double *)&REFG(undefined, 0x1080220);
            *(float *)(iVar9 + 0x30) = ((float)GEN_TOF(((((float10)GEN_TOD(gen_bits2f(piVar10[5]))) * fVar12) / fVar13)));
            *(float *)(iVar9 + 0x34) = ((float)GEN_TOF(((((float10)GEN_TOD(gen_bits2f(piVar10[6]))) * fVar12) / fVar13)));
            *(float *)(iVar9 + 0x38) = ((float)GEN_TOF(((fVar12 * ((float10)GEN_TOD(gen_bits2f(piVar10[7])))) / fVar13)));
            uVar5 = F_00623160((*(undefined * PTR32 *)(gen_frame + 0x28)),iVar9);
            sVar2 = (short)uVar5;
            if (sVar2 == -1) {
              sVar2 = -1;
            }
            *((short *)GEN_TOP((*(int *)((int)pvVar1 + 100) + uVar8 * 2))) = sVar2;
            goto LAB_0065aa79;
          }
          uVar8 = uVar8 + 1;
          piVar3 = piVar3 + 0x10;
        } while (uVar8 < *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x68));
      }
      ppiVar7 = (*(int * PTR32 * PTR32 *)(gen_frame + 0x10));
      if ((&(*(int * PTR32 *)(gen_frame + 0x24)) < (*(int * PTR32 * PTR32 *)(gen_frame + 0x10))) && ((*(int * PTR32 * PTR32 *)(gen_frame + 0xc)) <= &(*(int * PTR32 *)(gen_frame + 0x24)))) {
        iVar9 = (int)&(*(int * PTR32 *)(gen_frame + 0x24)) - (int)(*(int * PTR32 * PTR32 *)(gen_frame + 0xc));
        if ((*(int * PTR32 * PTR32 *)(gen_frame + 0x10)) == (*(int * PTR32 * PTR32 *)(gen_frame + 0x14))) {
          iVar4 = (int)(*(int * PTR32 * PTR32 *)(gen_frame + 0x10)) - (int)((int)(uintptr_t)(*(int * PTR32 * PTR32 *)(gen_frame + 0xc))) >> 2;
          if (iVar4 == -1) {
LAB_0065aad2: ;
                    
            F_00c4579a("vector<T> too long");
          }
          uVar5 = iVar4 + 1;
          uVar8 = (int)(*(int * PTR32 * PTR32 *)(gen_frame + 0x14)) - (int)((int)(uintptr_t)(*(int * PTR32 * PTR32 *)(gen_frame + 0xc))) >> 2;
          if (uVar8 < uVar5) {
            if (-(uVar8 >> 1) - 1 < uVar8) {
              uVar8 = 0;
            }
            else {
              uVar8 = uVar8 + (uVar8 >> 1);
            }
            if (uVar8 < uVar5) {
              uVar8 = uVar5;
            }
            F_00673740(&(*(int * PTR32 * PTR32 *)(gen_frame + 0xc)),uVar8);
            ppiVar7 = (*(int * PTR32 * PTR32 *)(gen_frame + 0x10));
          }
        }
        if (ppiVar7 != (int * PTR32 *)0x0) {
          *ppiVar7 = (*(int * PTR32 * PTR32 *)(gen_frame + 0xc))[iVar9 >> 2];
        }
      }
      else {
        if ((*(int * PTR32 * PTR32 *)(gen_frame + 0x10)) == (*(int * PTR32 * PTR32 *)(gen_frame + 0x14))) {
          iVar9 = (int)(*(int * PTR32 * PTR32 *)(gen_frame + 0x10)) - (int)((int)(uintptr_t)(*(int * PTR32 * PTR32 *)(gen_frame + 0xc))) >> 2;
          if (iVar9 == -1) goto LAB_0065aad2;
          uVar5 = iVar9 + 1;
          uVar8 = (int)(*(int * PTR32 * PTR32 *)(gen_frame + 0x14)) - (int)((int)(uintptr_t)(*(int * PTR32 * PTR32 *)(gen_frame + 0xc))) >> 2;
          if (uVar8 < uVar5) {
            if (-(uVar8 >> 1) - 1 < uVar8) {
              uVar8 = 0;
            }
            else {
              uVar8 = uVar8 + (uVar8 >> 1);
            }
            if (uVar8 < uVar5) {
              uVar8 = uVar5;
            }
            F_00673740(&(*(int * PTR32 * PTR32 *)(gen_frame + 0xc)),uVar8);
            ppiVar7 = (*(int * PTR32 * PTR32 *)(gen_frame + 0x10));
          }
        }
        if (ppiVar7 != (int * PTR32 *)0x0) {
          *ppiVar7 = piVar10;
        }
      }
      (*(int * PTR32 * PTR32 *)(gen_frame + 0x10)) = ppiVar7 + 1;
LAB_0065aa79: ;
      uVar8 = (int)(*(int * PTR32 * PTR32 *)(gen_frame + 0x20)) + 1;
      piVar10 = piVar10 + 8;
      (*(int * PTR32 * PTR32 *)(gen_frame + 0x20)) = (int * PTR32 *)uVar8;
      (*(int * PTR32 *)(gen_frame + 0x24)) = piVar10;
      this = (*(undefined * PTR32 *)(gen_frame + 0x28));
    } while (uVar8 < (*(uint *)(gen_frame + 0x1c)));
  }
  (*(int * PTR32 * PTR32 *)(gen_frame + 0x20)) = (*(int * PTR32 * PTR32 *)(gen_frame + 0xc));
  if ((*(int * PTR32 * PTR32 *)(gen_frame + 0xc)) != (*(int * PTR32 * PTR32 *)(gen_frame + 0x10))) {
    do {
      piVar10 = *(*(int * PTR32 * PTR32 *)(gen_frame + 0x20));
      uVar8 = 0;
      if (*(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x68) != 0) {
        piVar3 = ((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x5c) + 0x20)));
        do {
          if (*piVar3 == -1) {
            iVar9 = uVar8 * 0x40 + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x5c);
            F_00c49908(iVar9,0x20,piVar10[1] + 8 + *(int *)(param_1 + 0xa8));
            pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x28));
            *(int *)(iVar9 + 0x20) = *piVar10;
            *(int *)(iVar9 + 0x24) = piVar10[2];
            *(int *)(iVar9 + 0x28) = piVar10[3];
            *(int *)(iVar9 + 0x2c) = piVar10[4];
            fVar12 = (float10)*(double *)&REFG(undefined, 0x1080228);
            fVar13 = (float10)*(double *)&REFG(undefined, 0x1080220);
            *(float *)(iVar9 + 0x30) = ((float)GEN_TOF(((((float10)GEN_TOD(gen_bits2f(piVar10[5]))) * fVar12) / fVar13)));
            *(float *)(iVar9 + 0x34) = ((float)GEN_TOF(((((float10)GEN_TOD(gen_bits2f(piVar10[6]))) * fVar12) / fVar13)));
            *(float *)(iVar9 + 0x38) = ((float)GEN_TOF(((fVar12 * ((float10)GEN_TOD(gen_bits2f(piVar10[7])))) / fVar13)));
            uVar5 = F_00623160((*(undefined * PTR32 *)(gen_frame + 0x28)),iVar9);
            sVar2 = (short)uVar5;
            if (sVar2 == -1) {
              sVar2 = -1;
            }
            *((short *)GEN_TOP((*(int *)((int)pvVar1 + 100) + uVar8 * 2))) = sVar2;
            break;
          }
          uVar8 = uVar8 + 1;
          piVar3 = piVar3 + 0x10;
        } while (uVar8 < *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x68));
      }
      (*(int * PTR32 * PTR32 *)(gen_frame + 0x20)) = (*(int * PTR32 * PTR32 *)(gen_frame + 0x20)) + 1;
      this = (*(undefined * PTR32 *)(gen_frame + 0x28));
    } while ((*(int * PTR32 * PTR32 *)(gen_frame + 0x20)) != (*(int * PTR32 * PTR32 *)(gen_frame + 0x10)));
  }
  ppiVar7 = (*(int * PTR32 * PTR32 *)(gen_frame + 0xc));
  iVar9 = *(int *)((int)this + 0x68);
  if (*(int *)((int)this + 0x6c) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))
              (*(int * PTR32 *)(REFG(int, 0x1371270) + 4),*(int *)((int)this + 0x6c));
    *(undefined4 *)((int)this + 0x6c) = 0;
  }
  if (iVar9 == 0) {
    *(undefined4 *)((int)this + 0x70) = 0;
  }
  else {
    uVar8 = iVar9 + 0x1fU >> 5;
    puVar6 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))
                       (*(int * PTR32 *)(REFG(int, 0x1371270) + 4),uVar8 * 4,4)));
    puVar11 = puVar6;
    if (uVar8 != 0) {
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar11 = 0xffffffff;
        puVar11 = puVar11 + 1;
      }
    }
    *(undefined4 * PTR32 *)((int)this + 0x6c) = puVar6;
    *(int *)((int)this + 0x70) = iVar9;
    ppiVar7 = (*(int * PTR32 * PTR32 *)(gen_frame + 0xc));
  }
  if (ppiVar7 != (int * PTR32 *)0x0) {
    F_00429760(ppiVar7,((int)(*(int * PTR32 * PTR32 *)(gen_frame + 0x14)) - (int)((int)(uintptr_t)ppiVar7) >> 2) * 4,0xd8);
  }
  return 1;
}

/* ref: FUN_0065ac10 */
unsigned int F_0065ac10(unsigned int gen_a0)
{
  GEN_ENTER(0x65ac10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = *(ushort *)((int)this + 0x14);
  uVar3 = (uint)uVar1;
  if (uVar1 != 0) {
    if (uVar1 != 0) {
      iVar4 = 0;
      do {
        if (*((int *)GEN_TOP((*(int *)((int)this + 0x18) + iVar4))) != 0) {
          piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + iVar4)));
          ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
          *((undefined4 *)GEN_TOP((iVar4 + *(int *)((int)this + 0x18)))) = 0;
        }
        iVar4 = iVar4 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    if (*(int *)((int)this + 0x18) != 0) {
      F_00406b30(*(int *)((int)this + 0x18));
      *(undefined4 *)((int)this + 0x18) = 0;
    }
  }
  *(undefined2 *)((int)this + 0x14) = 0;
  if (*(int *)((int)this + 4) == *(int *)((int)this + 8)) {
    *(undefined4 *)((int)this + 0x24) = 0;
    return 0;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 4);
  *(undefined4 *)((int)this + 0x24) = 0;
  return 0;
}

/* ref: Client::Graphics::Render::ModelRenderer::vf2 */
unsigned int F_0065acc0(unsigned int gen_a0)
{
  GEN_ENTER(0x65acc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0066d880(this + 0x78,this,((code *)REFP(0x658de0)),1);
  return 0;
}

/* ref: Client::Graphics::Render::BGInstancingRenderer::vf4 */
unsigned int F_0065ace0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65ace0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)(param_1 + 8);
  iVar3 = uVar2 * 0x2c;
  *((int *)GEN_TOP((*(int *)(this + 4) + iVar3))) = *((int *)GEN_TOP((*(int *)(this + 4) + iVar3))) + -1;
  if (*((int *)GEN_TOP((iVar3 + *(int *)(this + 4)))) == 0) {
    if (*((int *)GEN_TOP((*(int *)(this + 0xc) + uVar2 * 4))) != 0) {
      F_0050c620(*((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + uVar2 * 4))),0,0);
      *((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + uVar2 * 4))) = 0;
    }
    puVar1 = ((uint *)GEN_TOP((*(int *)(this + 8) + (uVar2 >> 5) * 4)));
    *puVar1 = *puVar1 & ~(1 << ((byte)uVar2 & 0x1f));
    F_0065ac10(((undefined *)GEN_TOP((*(int *)(this + 4) + iVar3))));
  }
  return 0;
}

/* ref: Client::Graphics::Render::BGInstancingRenderer::vf1 */
unsigned int F_0065ad60(unsigned int gen_a0)
{
  GEN_ENTER(0x65ad60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint local_18;
  int local_10;
  uint local_c;
  
  uVar1 = *(uint *)(this + 0x10);
  local_18 = 0;
  if (uVar1 >> 5 != 0) {
    local_10 = 0;
    do {
      uVar2 = *((uint *)GEN_TOP((*(int *)(this + 8) + local_18 * 4)));
      if (uVar2 != 0) {
        uVar4 = 0;
        local_c = 1;
        do {
          if ((local_c & uVar2) != 0) {
            iVar3 = (local_10 + uVar4) * 0x2c + *(int *)(this + 4);
            if (*(int *)(iVar3 + 4) != *(int *)(iVar3 + 8)) {
              *(int *)(iVar3 + 8) = *(int *)(iVar3 + 4);
            }
            *(undefined4 *)(iVar3 + 0x24) = 0;
          }
          uVar4 = uVar4 + 1;
          local_c = local_c << 1 | (uint)((int)local_c < 0);
        } while (uVar4 < 0x20);
      }
      local_10 = local_10 + 0x20;
      local_18 = local_18 + 1;
    } while (local_18 < uVar1 >> 5);
  }
  return 0;
}

/* ref: FUN_0065ae20 */
uint F_0065ae20(unsigned int gen_a0)
{
  GEN_ENTER(0x65ae20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  F_00671db0((undefined *)((int)this + 0x130));
  iVar1 = *(int *)((int)this + 0x140);
  if (iVar1 != *(int *)((int)this + 0x144)) {
    F_00c46e20(iVar1,*(int *)((int)this + 0x144),0);
    *(int *)((int)this + 0x144) = iVar1;
  }
  iVar1 = *(int *)((int)this + 0x160);
  if (iVar1 != *(int *)((int)this + 0x164)) {
    F_00c46e20(iVar1,*(int *)((int)this + 0x164),0);
    *(int *)((int)this + 0x164) = iVar1;
  }
  iVar1 = *(int *)((int)this + 0x170);
  if (iVar1 != *(int *)((int)this + 0x174)) {
    F_00c46e20(iVar1,*(int *)((int)this + 0x174),0);
    *(int *)((int)this + 0x174) = iVar1;
  }
  iVar1 = *(int *)((int)this + 0x180);
  if (iVar1 != *(int *)((int)this + 0x184)) {
    F_00c46e20(iVar1,*(int *)((int)this + 0x184),0);
    *(int *)((int)this + 0x184) = iVar1;
  }
  uVar2 = F_00673500((undefined *)((int)this + 0x150),(int)this + 400);
  return uVar2;
}

/* ref: FUN_0065af10 */
uint F_0065af10(unsigned int gen_a0)
{
  GEN_ENTER(0x65af10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10abb4c));
  F_004d6630((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ac310));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x10ac2f8));
  *(undefined4 *)((int)this + 0x120) = 0;
  uVar1 = F_004296a0(0x14,0,0xd3);
  *(uint *)((int)this + 0x11c) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x11c) + 4))) = *(int *)((int)this + 0x11c);
  *((int *)GEN_TOP((*(int *)((int)this + 0x11c) + 8))) = *(int *)((int)this + 0x11c);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x11c) + 0x10))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x11c) + 0x11))) = 1;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  return (uint)this;
}

/* ref: FUN_0065afb0 */
uint F_0065afb0(unsigned int gen_a0)
{
  GEN_ENTER(0x65afb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x1a0];
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  float * pfVar5;
  int iVar6;
  uint uVar7;
  uint * puVar8;
  uint uVar9;
  byte bVar10;
  int * piVar11;
  int * piVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  undefined4 uVar16;
  ulonglong uVar17;
  
  uVar4 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x190);
  (*(uint *)(gen_frame + 0x18c)) = uVar4;
  (*(undefined * PTR32 *)(gen_frame + 0x134)) = this;
  piVar11 = (int *)((int)this + 0x78);
  if (*(char *)((int)this + 0x4e) == '\0') {
    *(undefined4 *)((int)this + 0x68) = 0;
    *(undefined4 *)((int)this + 0x6c) = 0;
    F_00c47745(uVar4 ^ (uint)(uint)(gen_frame + 0x190));
    return (uint)this;
  }
  (*(int *)(gen_frame + 0x50)) = *piVar11;
  (*(int *)(gen_frame + 0x58)) = *(int *)((int)this + 0x80);
  (*(int *)(gen_frame + 0x54)) = *(int *)((int)this + 0x7c);
  (*(int *)(gen_frame + 0x60)) = *(int *)((int)this + 0x88);
  (*(int *)(gen_frame + 0x5c)) = *(int *)((int)this + 0x84);
  (*(int *)(gen_frame + 0x68)) = *(int *)((int)this + 0x90);
  (*(int *)(gen_frame + 0x64)) = *(int *)((int)this + 0x8c);
  ((int *)(gen_frame + 0x6c))[1] = *(undefined4 *)((int)this + 0x98);
  ((int *)(gen_frame + 0x6c))[0] = *(int *)((int)this + 0x94);
  ((int *)(gen_frame + 0x6c))[3] = *(undefined4 *)((int)this + 0xa0);
  ((int *)(gen_frame + 0x6c))[2] = *(undefined4 *)((int)this + 0x9c);
  (*(undefined4 *)(gen_frame + 0x80)) = *(undefined4 *)((int)this + 0xa8);
  (*(undefined4 *)(gen_frame + 0x7c)) = *(undefined4 *)((int)this + 0xa4);
  (*(undefined4 *)(gen_frame + 0x88)) = *(undefined4 *)((int)this + 0xb0);
  (*(undefined4 *)(gen_frame + 0x84)) = *(undefined4 *)((int)this + 0xac);
  (*(undefined4 *)(gen_frame + 0x90)) = *(undefined4 *)((int)this + 0xb8);
  (*(undefined4 *)(gen_frame + 0x8c)) = *(undefined4 *)((int)this + 0xb4);
  (*(undefined4 *)(gen_frame + 0x98)) = *(undefined4 *)((int)this + 0xc0);
  iVar6 = *(int *)(REFG(int, 0x137127c) + 0x66f4);
  (*(undefined4 *)(gen_frame + 0x94)) = *(undefined4 *)((int)this + 0xbc);
  (*(float *)(gen_frame + 0x100)) = *(float *)(iVar6 + 0x90);
  (*(undefined4 *)(gen_frame + 0x9c)) = *(undefined4 *)((int)this + 0xc4);
  (*(float *)(gen_frame + 0x104)) = *(float *)(iVar6 + 0x94);
  (*(uint *)(gen_frame + 0x15c)) = 0;
  (*(uint *)(gen_frame + 0x144)) = 0;
  (*(float *)(gen_frame + 0x108)) = *(float *)(iVar6 + 0x98);
  if ((*(int *)(REFG(int, 0x1371298) + 0x30) == 0) && (REFG(undefined4, 0x1379694) != (undefined *)0x0)) {
    pfVar5 = (float *)F_00a5feb0(REFG(undefined4, 0x1379694));
    (*(float *)(gen_frame + 0x100)) = *pfVar5;
    (*(float *)(gen_frame + 0x104)) = pfVar5[1];
    (*(float *)(gen_frame + 0x108)) = pfVar5[2];
  }
  piVar12 = (int *)0x0;
  uVar4 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x134)) + 0x14c) - *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x134)) + 0x148) >> 2;
  (*(uint *)(gen_frame + 0x154)) = 0;
  (*(int * PTR32 *)(gen_frame + 0x124)) = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x128)) = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x12c)) = (int *)0x0;
  (*(uint *)(gen_frame + 0x138)) = uVar4;
  (*(uint *)(gen_frame + 0x158)) = 0;
  if (uVar4 != 0) {
    do {
      iVar6 = *((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x134)) + 0x148) + (*(uint *)(gen_frame + 0x158)) * 4)));
      if (*(int *)(iVar6 + 0xc) - 2U < 4) {
        (*(int * PTR32 *)(gen_frame + 0x14c)) = ((int *)(uintptr_t)gen_fl2bits((float)(*(float *)(iVar6 + 0x54))));
        if (*(int *)(iVar6 + 0xc) == 5) {
          (*(int * PTR32 *)(gen_frame + 0x14c)) = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)(iVar6 + 0x10) + 0x20))) +
                                   (float10)*(float *)(iVar6 + 0x54)))))));
        }
        pfVar5 = *(float * PTR32 *)(iVar6 + 0x10);
        (*(int *)(gen_frame + 0x13c)) = iVar6;
        (*(float *)(gen_frame + 0x160)) = (float)((float10)(*(float *)(gen_frame + 0x100)) - (float10)*pfVar5);
        (*(float *)(gen_frame + 0x164)) = (float)((float10)(*(float *)(gen_frame + 0x104)) - (float10)pfVar5[1]);
        (*(float *)(gen_frame + 0x168)) = (float)((float10)(*(float *)(gen_frame + 0x108)) - (float10)pfVar5[2]);
        fVar13 = (float10)(float)((float10)(*(float *)(gen_frame + 0x100)) - (float10)*pfVar5);
        fVar14 = (float10)(float)((float10)(*(float *)(gen_frame + 0x104)) - (float10)pfVar5[1]);
        fVar15 = (float10)(float)((float10)(*(float *)(gen_frame + 0x108)) - (float10)pfVar5[2]);
        fVar1 = ((float)GEN_TOF((fVar15 * fVar15 + (fVar14 * fVar14 + fVar13 * fVar13))));
        (*(float *)(gen_frame + 0x148)) = fVar1;
        fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
        (*(float *)(gen_frame + 0x148)) = fVar1;
        (*(float *)(gen_frame + 0x140)) = (float)((float10)fVar1 - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x14c))))));
        if ((&(*(int *)(gen_frame + 0x13c)) < piVar12) && ((*(int * PTR32 *)(gen_frame + 0x124)) <= &(*(int *)(gen_frame + 0x13c)))) {
          (*(int *)(gen_frame + 0x150)) = (int)&(*(int *)(gen_frame + 0x13c)) - (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x124))) >> 3;
          if (piVar12 == (*(int * PTR32 *)(gen_frame + 0x12c))) {
            iVar6 = (int)piVar12 - (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x124))) >> 3;
            if (iVar6 == -1) {
LAB_0065b39d: ;
                    
              F_00c4579a("vector<T> too long");
            }
            uVar7 = iVar6 + 1;
            uVar4 = (int)(*(int * PTR32 *)(gen_frame + 0x12c)) - (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x124))) >> 3;
            if (uVar4 < uVar7) {
              if (-(uVar4 >> 1) - 1 < uVar4) {
                uVar4 = 0;
              }
              else {
                uVar4 = uVar4 + (uVar4 >> 1);
              }
              if (uVar4 < uVar7) {
                uVar4 = uVar7;
              }
              F_00672eb0(&(*(int * PTR32 *)(gen_frame + 0x124)),uVar4);
              piVar12 = (*(int * PTR32 *)(gen_frame + 0x128));
            }
          }
          if (piVar12 != (int *)0x0) {
            *piVar12 = (*(int * PTR32 *)(gen_frame + 0x124))[(*(int *)(gen_frame + 0x150)) * 2];
            piVar12[1] = (*(int * PTR32 *)(gen_frame + 0x124))[(*(int *)(gen_frame + 0x150)) * 2 + 1];
          }
        }
        else {
          if (piVar12 == (*(int * PTR32 *)(gen_frame + 0x12c))) {
            iVar6 = (int)piVar12 - (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x124))) >> 3;
            if (iVar6 == -1) goto LAB_0065b39d;
            uVar7 = iVar6 + 1;
            uVar4 = (int)(*(int * PTR32 *)(gen_frame + 0x12c)) - (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x124))) >> 3;
            if (uVar4 < uVar7) {
              if (-(uVar4 >> 1) - 1 < uVar4) {
                uVar4 = 0;
              }
              else {
                uVar4 = uVar4 + (uVar4 >> 1);
              }
              if (uVar4 < uVar7) {
                uVar4 = uVar7;
              }
              F_00672eb0(&(*(int * PTR32 *)(gen_frame + 0x124)),uVar4);
              piVar12 = (*(int * PTR32 *)(gen_frame + 0x128));
            }
          }
          if (piVar12 != (int *)0x0) {
            *piVar12 = (*(int *)(gen_frame + 0x13c));
            piVar12[1] = (int)gen_fl2bits((*(float *)(gen_frame + 0x140)));
          }
        }
        piVar12 = piVar12 + 2;
        (*(uint *)(gen_frame + 0x154)) = (*(uint *)(gen_frame + 0x154)) + 1;
        (*(int * PTR32 *)(gen_frame + 0x128)) = piVar12;
        uVar4 = (*(uint *)(gen_frame + 0x138));
      }
      uVar7 = (*(uint *)(gen_frame + 0x158)) + 1;
      (*(uint *)(gen_frame + 0x158)) = uVar7;
    } while (uVar7 < uVar4);
  }
  F_00673bc0((*(int * PTR32 *)(gen_frame + 0x124)),piVar12,(int)piVar12 - (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x124))) >> 3,0,0);
  if (0x14 < (*(uint *)(gen_frame + 0x154))) {
    (*(uint *)(gen_frame + 0x154)) = 0x14;
  }
  uVar4 = (*(uint *)(gen_frame + 0x154));
  F_00c48350(((int *)(gen_frame + 0x0)),0,0x50);
  piVar12 = (*(int * PTR32 *)(gen_frame + 0x124));
  uVar7 = 0;
  if (uVar4 != 0) {
    do {
      ((int *)(gen_frame + 0x0))[(int)(uVar7)] = piVar12[uVar7 * 2];
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
  }
  (*(float *)(gen_frame + 0x164)) = 0.0;
  (*(float *)(gen_frame + 0x168)) = 0.0;
  (*(undefined1 *)(gen_frame + 0x16c)) = 0;
  (*(undefined4 *)(gen_frame + 0x16d)) = 0;
  (*(undefined2 *)(gen_frame + 0x171)) = 0;
  (*(undefined1 *)(gen_frame + 0x173)) = 0;
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x160)) + 0)) = 0;
  (*(float *)(gen_frame + 0x160)) = 0.0;
  (*(uint *)(gen_frame + 0x138)) = 4;
  puVar8 = &(*(uint *)(gen_frame + 0x154));
  if (3 < uVar4) {
    puVar8 = &(*(uint *)(gen_frame + 0x138));
  }
  uVar4 = *puVar8;
  uVar7 = 0;
  (*(int * PTR32 *)(gen_frame + 0x14c)) = (int *)((*(uint *)(gen_frame + 0x154)) - uVar4);
  if (uVar4 != 0) {
    do {
      uVar9 = 0;
      do {
        if (((int *)(gen_frame + 0x0))[(int)(uVar7)] == piVar11[uVar9]) {
          ((int *)(gen_frame + 0x0))[(int)(uVar7)] = 0;
          *(undefined1 *)((int)&(*(float *)(gen_frame + 0x160)) + uVar9) = 1;
          break;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < 4);
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
  }
  uVar4 = 0;
  if ((*(int * PTR32 *)(gen_frame + 0x14c)) != (int *)0x0) {
    do {
      uVar7 = 4;
      do {
        if (((int *)(gen_frame + 0x10))[(int)(uVar4)] == piVar11[uVar7]) {
          ((int *)(gen_frame + 0x10))[(int)(uVar4)] = 0;
          *(undefined1 *)((int)&(*(float *)(gen_frame + 0x160)) + uVar7) = 1;
          break;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < 0x14);
      uVar4 = uVar4 + 1;
    } while (uVar4 < (*(int * PTR32 *)(gen_frame + 0x14c)));
  }
  uVar4 = 0;
  if ((*(uint *)(gen_frame + 0x154)) != 0) {
    do {
      if (((int *)(gen_frame + 0x0))[(int)(uVar4)] != 0) {
        uVar7 = 0;
        do {
          if (*(char *)((int)&(*(float *)(gen_frame + 0x160)) + uVar7) == '\0') {
            piVar11[uVar7] = ((int *)(gen_frame + 0x0))[(int)(uVar4)];
            ((int *)(gen_frame + 0x0))[(int)(uVar4)] = 0;
            *(undefined1 *)((int)&(*(float *)(gen_frame + 0x160)) + uVar7) = 1;
            break;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < 0x14);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (*(uint *)(gen_frame + 0x154)));
  }
  uVar4 = 0;
  do {
    if (*(char *)((int)&(*(float *)(gen_frame + 0x160)) + uVar4) == '\0') {
      piVar11[uVar4] = 0;
    }
    uVar2 = REFG(float, 0x1087f04);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x14);
  (*(uint *)(gen_frame + 0x138)) = 0x24U - (int)piVar11;
  (*(int *)(gen_frame + 0xe4)) = 0x74 - (int)piVar11;
  (*(int *)(gen_frame + 0xd0)) = 0x28 - (int)piVar11;
  (*(int *)(gen_frame + 0xc8)) = 0x78 - (int)piVar11;
  (*(int *)(gen_frame + 0xc0)) = (int)&(*(int *)(gen_frame + 0x50)) - (int)piVar11;
  (*(int *)(gen_frame + 0xb8)) = 0x2c - (int)piVar11;
  (*(int *)(gen_frame + 0xb0)) = 0x7c - (int)piVar11;
  (*(int *)(gen_frame + 0xa8)) = (int)&(*(int *)(gen_frame + 0x54)) - (int)piVar11;
  (*(int *)(gen_frame + 0xf4)) = 0x30 - (int)piVar11;
  (*(int *)(gen_frame + 0xc4)) = 0x80 - (int)piVar11;
  (*(int *)(gen_frame + 0xec)) = (int)&(*(int *)(gen_frame + 0x58)) - (int)piVar11;
  (*(int *)(gen_frame + 0xac)) = 0x34 - (int)piVar11;
  (*(int *)(gen_frame + 0xfc)) = 0x84 - (int)piVar11;
  (*(int *)(gen_frame + 0xbc)) = (int)&(*(int *)(gen_frame + 0x5c)) - (int)piVar11;
  (*(int *)(gen_frame + 0xdc)) = 0x38 - (int)piVar11;
  (*(int *)(gen_frame + 0xa0)) = 0x88 - (int)piVar11;
  (*(int *)(gen_frame + 0xd4)) = (int)&(*(int *)(gen_frame + 0x60)) - (int)piVar11;
  (*(int *)(gen_frame + 0xb4)) = 0x3c - (int)piVar11;
  (*(int *)(gen_frame + 0xcc)) = 0x8c - (int)piVar11;
  (*(int *)(gen_frame + 0xa4)) = (int)&(*(int *)(gen_frame + 0x64)) - (int)piVar11;
  (*(int *)(gen_frame + 0xf8)) = 0x40 - (int)piVar11;
  (*(int *)(gen_frame + 0xf0)) = 0x90 - (int)piVar11;
  (*(int *)(gen_frame + 0xe8)) = (int)&(*(int *)(gen_frame + 0x68)) - (int)piVar11;
  (*(int *)(gen_frame + 0xe0)) = 0x44 - (int)piVar11;
  (*(int * PTR32 *)(gen_frame + 0x14c)) = &(*(int *)(gen_frame + 0x54));
  uVar4 = 1;
  (*(uint *)(gen_frame + 0x154)) = 2;
  piVar12 = (int *)((int)this + 0x80);
  (*(int *)(gen_frame + 0xd8)) = 0x94 - (int)piVar11;
  (*(uint *)(gen_frame + 0x120)) = (int)((int *)(gen_frame + 0x6c)) - (int)piVar11;
  (*(float *)(gen_frame + 0x11c)) = gen_bits2f(0x48 - (int)piVar11);
  (*(float *)(gen_frame + 0x140)) = gen_bits2f(0x98 - (int)piVar11);
  (*(float *)(gen_frame + 0x148)) = 2.8026e-45;
  do {
    iVar3 = REFG(int, 0x1371284);
    iVar6 = piVar12[-2];
    if ((*(int * PTR32 *)(gen_frame + 0x14c))[-1] != iVar6) {
      (*(uint *)(gen_frame + 0x15c)) = (*(uint *)(gen_frame + 0x15c)) | uVar4;
    }
    (*(uint *)(gen_frame + 0x158)) = iVar6;
    (*(int *)(gen_frame + 0x150)) = REFG(int, 0x1371284);
    if ((iVar6 != 0) && ((*(int *)(iVar6 + 0xc) < 2 || (5 < *(int *)(iVar6 + 0xc))))) {
      (*(uint *)(gen_frame + 0x158)) = 0;
    }
    uVar16 = uVar2;
    if (3 < (int)((*(uint *)(gen_frame + 0x154)) - 2)) {
      uVar16 = 0;
    }
    *((undefined4 *)GEN_TOP(((int)piVar12 + REFG(int, 0x1371284) + (0x24U - (int)piVar11)))) = uVar16;
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)piVar12 + iVar3 + (0x74 - (int)piVar11)))) + 0x140))) = (*(uint *)(gen_frame + 0x158));
    iVar3 = REFG(int, 0x1371284);
    iVar6 = piVar12[-1];
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    if (*(*(int * PTR32 *)(gen_frame + 0x14c)) != iVar6) {
      (*(uint *)(gen_frame + 0x15c)) = (*(uint *)(gen_frame + 0x15c)) | uVar4;
    }
    (*(uint *)(gen_frame + 0x158)) = iVar6;
    if ((iVar6 != 0) && ((*(int *)(iVar6 + 0xc) < 2 || (5 < *(int *)(iVar6 + 0xc))))) {
      (*(uint *)(gen_frame + 0x158)) = 0;
    }
    uVar16 = uVar2;
    if (3 < (int)((*(uint *)(gen_frame + 0x154)) - 1)) {
      uVar16 = 0;
    }
    *((undefined4 *)GEN_TOP(((int)piVar12 + REFG(int, 0x1371284) + (0x28 - (int)piVar11)))) = uVar16;
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)piVar12 + iVar3 + (0x78 - (int)piVar11)))) + 0x140))) = (*(uint *)(gen_frame + 0x158));
    iVar3 = REFG(int, 0x1371284);
    iVar6 = *piVar12;
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    if (*((int *)GEN_TOP((((int)&(*(int *)(gen_frame + 0x50)) - (int)piVar11) + (int)piVar12))) != iVar6) {
      (*(uint *)(gen_frame + 0x15c)) = (*(uint *)(gen_frame + 0x15c)) | uVar4;
    }
    (*(uint *)(gen_frame + 0x158)) = iVar6;
    if ((iVar6 != 0) && ((*(int *)(iVar6 + 0xc) < 2 || (5 < *(int *)(iVar6 + 0xc))))) {
      (*(uint *)(gen_frame + 0x158)) = 0;
    }
    uVar16 = uVar2;
    if (3 < (int)(*(uint *)(gen_frame + 0x154))) {
      uVar16 = 0;
    }
    *((undefined4 *)GEN_TOP(((int)piVar12 + REFG(int, 0x1371284) + (0x2c - (int)piVar11)))) = uVar16;
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)piVar12 + iVar3 + (0x7c - (int)piVar11)))) + 0x140))) = (*(uint *)(gen_frame + 0x158));
    iVar3 = REFG(int, 0x1371284);
    iVar6 = piVar12[1];
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    if (*((int *)GEN_TOP((((int)&(*(int *)(gen_frame + 0x54)) - (int)piVar11) + (int)piVar12))) != iVar6) {
      (*(uint *)(gen_frame + 0x15c)) = (*(uint *)(gen_frame + 0x15c)) | uVar4;
    }
    (*(uint *)(gen_frame + 0x158)) = iVar6;
    if ((iVar6 != 0) && ((*(int *)(iVar6 + 0xc) < 2 || (5 < *(int *)(iVar6 + 0xc))))) {
      (*(uint *)(gen_frame + 0x158)) = 0;
    }
    uVar16 = uVar2;
    if (3 < (int)((*(uint *)(gen_frame + 0x154)) + 1)) {
      uVar16 = 0;
    }
    *((undefined4 *)GEN_TOP(((int)piVar12 + REFG(int, 0x1371284) + (0x30 - (int)piVar11)))) = uVar16;
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)piVar12 + iVar3 + (0x80 - (int)piVar11)))) + 0x140))) = (*(uint *)(gen_frame + 0x158));
    iVar3 = REFG(int, 0x1371284);
    iVar6 = piVar12[2];
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    if (*((int *)GEN_TOP((((int)&(*(int *)(gen_frame + 0x58)) - (int)piVar11) + (int)piVar12))) != iVar6) {
      (*(uint *)(gen_frame + 0x15c)) = (*(uint *)(gen_frame + 0x15c)) | uVar4;
    }
    (*(uint *)(gen_frame + 0x158)) = iVar6;
    if ((iVar6 != 0) && ((*(int *)(iVar6 + 0xc) < 2 || (5 < *(int *)(iVar6 + 0xc))))) {
      (*(uint *)(gen_frame + 0x158)) = 0;
    }
    uVar16 = uVar2;
    if (3 < (int)((*(uint *)(gen_frame + 0x154)) + 2)) {
      uVar16 = 0;
    }
    *((undefined4 *)GEN_TOP(((int)piVar12 + REFG(int, 0x1371284) + (0x34 - (int)piVar11)))) = uVar16;
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)piVar12 + iVar3 + (0x84 - (int)piVar11)))) + 0x140))) = (*(uint *)(gen_frame + 0x158));
    iVar3 = REFG(int, 0x1371284);
    iVar6 = piVar12[3];
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    if (*((int *)GEN_TOP((((int)&(*(int *)(gen_frame + 0x5c)) - (int)piVar11) + (int)piVar12))) != iVar6) {
      (*(uint *)(gen_frame + 0x15c)) = (*(uint *)(gen_frame + 0x15c)) | uVar4;
    }
    (*(uint *)(gen_frame + 0x158)) = iVar6;
    if ((iVar6 != 0) && ((*(int *)(iVar6 + 0xc) < 2 || (5 < *(int *)(iVar6 + 0xc))))) {
      (*(uint *)(gen_frame + 0x158)) = 0;
    }
    uVar16 = uVar2;
    if (3 < (int)((*(uint *)(gen_frame + 0x154)) + 3)) {
      uVar16 = 0;
    }
    *((undefined4 *)GEN_TOP(((int)piVar12 + REFG(int, 0x1371284) + (0x38 - (int)piVar11)))) = uVar16;
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)piVar12 + iVar3 + (0x88 - (int)piVar11)))) + 0x140))) = (*(uint *)(gen_frame + 0x158));
    iVar3 = REFG(int, 0x1371284);
    iVar6 = piVar12[4];
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    if (*((int *)GEN_TOP((((int)&(*(int *)(gen_frame + 0x60)) - (int)piVar11) + (int)piVar12))) != iVar6) {
      (*(uint *)(gen_frame + 0x15c)) = (*(uint *)(gen_frame + 0x15c)) | uVar4;
    }
    (*(uint *)(gen_frame + 0x158)) = iVar6;
    if ((iVar6 != 0) && ((*(int *)(iVar6 + 0xc) < 2 || (5 < *(int *)(iVar6 + 0xc))))) {
      (*(uint *)(gen_frame + 0x158)) = 0;
    }
    uVar16 = uVar2;
    if (3 < (int)((*(uint *)(gen_frame + 0x154)) + 4)) {
      uVar16 = 0;
    }
    *((undefined4 *)GEN_TOP(((int)piVar12 + REFG(int, 0x1371284) + (0x3c - (int)piVar11)))) = uVar16;
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)piVar12 + iVar3 + (0x8c - (int)piVar11)))) + 0x140))) = (*(uint *)(gen_frame + 0x158));
    iVar3 = REFG(int, 0x1371284);
    iVar6 = piVar12[5];
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    if (*((int *)GEN_TOP((((int)&(*(int *)(gen_frame + 0x64)) - (int)piVar11) + (int)piVar12))) != iVar6) {
      (*(uint *)(gen_frame + 0x15c)) = (*(uint *)(gen_frame + 0x15c)) | uVar4;
    }
    (*(uint *)(gen_frame + 0x158)) = iVar6;
    if ((iVar6 != 0) && ((*(int *)(iVar6 + 0xc) < 2 || (5 < *(int *)(iVar6 + 0xc))))) {
      (*(uint *)(gen_frame + 0x158)) = 0;
    }
    uVar16 = uVar2;
    if (3 < (int)((*(uint *)(gen_frame + 0x154)) + 5)) {
      uVar16 = 0;
    }
    *((undefined4 *)GEN_TOP(((int)piVar12 + REFG(int, 0x1371284) + (0x40 - (int)piVar11)))) = uVar16;
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)piVar12 + iVar3 + (0x90 - (int)piVar11)))) + 0x140))) = (*(uint *)(gen_frame + 0x158));
    iVar3 = REFG(int, 0x1371284);
    iVar6 = piVar12[6];
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    if (*((int *)GEN_TOP((((int)&(*(int *)(gen_frame + 0x68)) - (int)piVar11) + (int)piVar12))) != iVar6) {
      (*(uint *)(gen_frame + 0x15c)) = (*(uint *)(gen_frame + 0x15c)) | uVar4;
    }
    (*(uint *)(gen_frame + 0x158)) = iVar6;
    if ((iVar6 != 0) && ((*(int *)(iVar6 + 0xc) < 2 || (5 < *(int *)(iVar6 + 0xc))))) {
      (*(uint *)(gen_frame + 0x158)) = 0;
    }
    uVar16 = uVar2;
    if (3 < (int)((*(uint *)(gen_frame + 0x154)) + 6)) {
      uVar16 = 0;
    }
    *((undefined4 *)GEN_TOP(((int)piVar12 + REFG(int, 0x1371284) + (0x44 - (int)piVar11)))) = uVar16;
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)piVar12 + iVar3 + (0x94 - (int)piVar11)))) + 0x140))) = (*(uint *)(gen_frame + 0x158));
    iVar3 = REFG(int, 0x1371284);
    iVar6 = piVar12[7];
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    if (*((int *)GEN_TOP((((int)((int *)(gen_frame + 0x6c)) - (int)piVar11) + (int)piVar12))) != iVar6) {
      (*(uint *)(gen_frame + 0x15c)) = (*(uint *)(gen_frame + 0x15c)) | uVar4;
    }
    (*(uint *)(gen_frame + 0x158)) = iVar6;
    if ((iVar6 != 0) && ((*(int *)(iVar6 + 0xc) < 2 || (5 < *(int *)(iVar6 + 0xc))))) {
      (*(uint *)(gen_frame + 0x158)) = 0;
    }
    uVar16 = uVar2;
    if (3 < (int)((*(uint *)(gen_frame + 0x154)) + 7)) {
      uVar16 = 0;
    }
    (*(uint *)(gen_frame + 0x154)) = (*(uint *)(gen_frame + 0x154)) + 10;
    (*(int * PTR32 *)(gen_frame + 0x14c)) = (*(int * PTR32 *)(gen_frame + 0x14c)) + 10;
    *((undefined4 *)GEN_TOP(((int)piVar12 + REFG(int, 0x1371284) + (0x48 - (int)piVar11)))) = uVar16;
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)piVar12 + iVar3 + (0x98 - (int)piVar11)))) + 0x140))) = (*(uint *)(gen_frame + 0x158));
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    piVar12 = piVar12 + 10;
    iVar6 = (int)gen_fl2bits((*(float *)(gen_frame + 0x148))) + -1;
    (*(float *)(gen_frame + 0x148)) = gen_bits2f(iVar6);
  } while (iVar6 != 0);
  if (((*(uint *)(gen_frame + 0x15c)) == 0) &&
     (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x134)) + 0x70) = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x134)) + 0x70) + 1,
     0xe < *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x134)) + 0x70))) {
    uVar17 = (ulonglong)(*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x134)) + 0x74) + 1) % 0x14;
    *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x134)) + 0x70) = 0;
    *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x134)) + 0x74) = (int)uVar17;
    (*(uint *)(gen_frame + 0x15c)) = 1 << (sbyte)uVar17;
  }
  uVar4 = 1;
  piVar12 = (int *)((int)this + 0x80);
  (*(float *)(gen_frame + 0x148)) = 5.60519e-45;
  do {
    if (((piVar12[-2] != 0) &&
        (bVar10 = (byte)*(undefined2 *)(piVar12[-2] + 8), (bVar10 >> 1 & 1) != 0)) &&
       ((bVar10 >> 3 & 1) != 0)) {
      (*(uint *)(gen_frame + 0x15c)) = (*(uint *)(gen_frame + 0x15c)) | uVar4;
    }
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    if (((piVar12[-1] != 0) &&
        (bVar10 = (byte)*(undefined2 *)(piVar12[-1] + 8), (bVar10 >> 1 & 1) != 0)) &&
       ((bVar10 >> 3 & 1) != 0)) {
      (*(uint *)(gen_frame + 0x15c)) = (*(uint *)(gen_frame + 0x15c)) | uVar4;
    }
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    if (((*piVar12 != 0) && (bVar10 = (byte)*(undefined2 *)(*piVar12 + 8), (bVar10 >> 1 & 1) != 0))
       && ((bVar10 >> 3 & 1) != 0)) {
      (*(uint *)(gen_frame + 0x15c)) = (*(uint *)(gen_frame + 0x15c)) | uVar4;
    }
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    if (((piVar12[1] != 0) &&
        (bVar10 = (byte)*(undefined2 *)(piVar12[1] + 8), (bVar10 >> 1 & 1) != 0)) &&
       ((bVar10 >> 3 & 1) != 0)) {
      (*(uint *)(gen_frame + 0x15c)) = (*(uint *)(gen_frame + 0x15c)) | uVar4;
    }
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    if (((piVar12[2] != 0) &&
        (bVar10 = (byte)*(undefined2 *)(piVar12[2] + 8), (bVar10 >> 1 & 1) != 0)) &&
       ((bVar10 >> 3 & 1) != 0)) {
      (*(uint *)(gen_frame + 0x15c)) = (*(uint *)(gen_frame + 0x15c)) | uVar4;
    }
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    piVar12 = piVar12 + 5;
    iVar6 = (int)gen_fl2bits((*(float *)(gen_frame + 0x148))) + -1;
    (*(float *)(gen_frame + 0x148)) = gen_bits2f(iVar6);
  } while (iVar6 != 0);
  if (*piVar11 != 0) {
    (*(uint *)(gen_frame + 0x144)) = 1;
  }
  if (*(int *)((int)this + 0x7c) != 0) {
    (*(uint *)(gen_frame + 0x144)) = (*(uint *)(gen_frame + 0x144)) | 2;
  }
  piVar11 = (int *)((int)this + 0x80);
  if (*(int *)((int)this + 0x80) != 0) {
    (*(uint *)(gen_frame + 0x144)) = (*(uint *)(gen_frame + 0x144)) | 4;
  }
  if (*(int *)((int)this + 0x84) != 0) {
    (*(uint *)(gen_frame + 0x144)) = (*(uint *)(gen_frame + 0x144)) | 8;
  }
  if (*(char *)((int)(*(undefined * PTR32 *)(gen_frame + 0x134)) + 0x4f) != '\0') {
    uVar7 = 1;
    iVar6 = 4;
    uVar4 = (*(uint *)(gen_frame + 0x15c));
    do {
      if (piVar11[-2] != 0) {
        uVar4 = uVar4 | uVar7;
      }
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      if (piVar11[-1] != 0) {
        uVar4 = uVar4 | uVar7;
      }
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      if (*piVar11 != 0) {
        uVar4 = uVar4 | uVar7;
      }
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      if (piVar11[1] != 0) {
        uVar4 = uVar4 | uVar7;
      }
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      if (piVar11[2] != 0) {
        uVar4 = uVar4 | uVar7;
      }
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      piVar11 = piVar11 + 5;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    (*(uint *)(gen_frame + 0x15c)) = uVar4;
    *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x134)) + 0x4f) = 0;
  }
  uVar4 = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x134)) + 100);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x134)) + uVar4 * 4 + 0x54) = (*(uint *)(gen_frame + 0x15c));
  (*(float *)(gen_frame + 0x140)) = *(float *)(REFG(int, 0x1370b90) + 0x8c);
  (*(uint *)(gen_frame + 0x120)) = uVar4;
  (*(float *)(gen_frame + 0x11c)) = 5.60519e-45;
  pfVar5 = &(*(float *)(gen_frame + 0x140));
  if (3 < (uint)gen_fl2bits(*(float *)(REFG(int, 0x1370b90) + 0x8c))) {
    pfVar5 = &(*(float *)(gen_frame + 0x11c));
  }
  fVar1 = *pfVar5;
  (*(float *)(gen_frame + 0x140)) = fVar1;
  if (1 < (uint)gen_fl2bits(fVar1)) {
    iVar6 = (int)gen_fl2bits(fVar1) - 1;
    uVar9 = (*(uint *)(gen_frame + 0x15c));
    uVar7 = uVar4;
    do {
      uVar7 = uVar7 - 1;
      uVar9 = uVar9 | *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x134)) + (uVar7 & 3) * 4 + 0x54)));
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    (*(uint *)(gen_frame + 0x15c)) = uVar9;
  }
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x134)) + 100) = uVar4 + 1 & 3;
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x134)) + 0x68) = (*(uint *)(gen_frame + 0x15c));
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x134)) + 0x50) = (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x134)) + 0x50) + 1U) % (uint)gen_fl2bits(fVar1)
  ;
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x134)) + 0x6c) = (*(uint *)(gen_frame + 0x144));
  uVar4 = 0;
  if ((*(int * PTR32 *)(gen_frame + 0x124)) != (int *)0x0) {
    uVar17 = F_00429760((*(int * PTR32 *)(gen_frame + 0x124)),((int)(*(int * PTR32 *)(gen_frame + 0x12c)) - (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x124))) >> 3) * 8,0xd3);
    uVar4 = (uint)uVar17;
  }
  F_00c47745((*(uint *)(gen_frame + 0x18c)) ^ (uint)(uint)(gen_frame + 0x190));
  return uVar4;
}

/* ref: FUN_0065bc20 */
uint F_0065bc20(unsigned int gen_a0)
{
  GEN_ENTER(0x65bc20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  F_0065ae20(REFG(undefined4, 0x1371284));
  iVar2 = *(int *)(REFG(int, 0x1371280) + 0x148);
  piVar1 = (int *)(REFG(int, 0x1371280) + 0x14c);
  iVar3 = *piVar1;
  if (iVar2 != iVar3) {
    F_00c46e20(iVar2,iVar3,0);
    *piVar1 = iVar2;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xad10) + 4))))((int)this + 0xad10);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xaf90) + 4))))((int)this + 0xaf90);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xea30) + 4))))((int)this + 0xea30);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xac2c) + 4))))((int)this + 0xac2c);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xee30) + 4))))((int)this + 0xee30);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x10528) + 4))))((int)this + 0x10528);
  uVar4 = F_009a2150();
  return uVar4;
}

/* ref: FUN_0065bce0 */
ushort F_0065bce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65bce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  uint uVar2;
  ushort uVar3;
  char * pcVar4;
  
  uVar2 = ((uint *)(gen_frame + 0xc))[0];
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if (*(int *)((int)this + 0x18) == 0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c) ^ (uint)(uint)(gen_frame + 0x2c));
    return 0xffff;
  }
  (*(uint *)(gen_frame + 0x20)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0xc))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0xc))[0] = uVar2 & 0xffffff00;
  pcVar4 = param_1;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_004e5c20(((uint *)(gen_frame + 0xc)),param_1,(int)pcVar4 - (int)(param_1 + 1));
  uVar3 = F_00674000(*(undefined * PTR32 *)((int)this + 0x18),((uint *)(gen_frame + 0xc)));
  if (0xf < (*(uint *)(gen_frame + 0x20))) {
    F_00429760(((uint *)(gen_frame + 0xc))[0],(*(uint *)(gen_frame + 0x20)) + 1,0x32);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar3;
}

/* ref: FUN_0065bd80 */
ushort F_0065bd80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65bd80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  uint uVar2;
  ushort uVar3;
  char * pcVar4;
  
  uVar2 = ((uint *)(gen_frame + 0xc))[0];
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if (*(int *)((int)this + 0x18) == 0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c) ^ (uint)(uint)(gen_frame + 0x2c));
    return 0xffff;
  }
  (*(uint *)(gen_frame + 0x20)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0xc))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0xc))[0] = uVar2 & 0xffffff00;
  pcVar4 = param_1;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_004e5c20(((uint *)(gen_frame + 0xc)),param_1,(int)pcVar4 - (int)(param_1 + 1));
  uVar3 = F_00673f80(*(undefined * PTR32 *)((int)this + 0x18),((uint *)(gen_frame + 0xc)));
  if (0xf < (*(uint *)(gen_frame + 0x20))) {
    F_00429760(((uint *)(gen_frame + 0xc))[0],(*(uint *)(gen_frame + 0x20)) + 1,0x32);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar3;
}

/* ref: Client::Graphics::Render::PostBoneDeformerBase::vf4 */
unsigned int F_0065be20(unsigned int gen_a0)
{
  GEN_ENTER(0x65be20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint * puVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = REFG(int, 0x137127c);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  puVar1 = (uint *)(REFG(int, 0x137127c) + 0xab70);
  LOCK();
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  if (0xfff < uVar2) {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(iVar3 + 0xab84));
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
    F_00673cc0((undefined *)(iVar3 + 0xab74),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(iVar3 + 0xab84));
    return 0;
  }
  *(undefined * PTR32 *)(iVar3 + 0x6b70 + uVar2 * 4) = this;
  return 0;
}

/* ref: FUN_0065be80 */
unsigned int F_0065be80(unsigned int gen_a0)
{
  GEN_ENTER(0x65be80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x1c);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x20);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  F_0065ac10(this);
  return 0;
}

/* ref: FUN_0065bec0 */
uint F_0065bec0(unsigned int gen_a0)
{
  GEN_ENTER(0x65bec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int * piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 * puVar7;
  ulonglong uVar8;
  uint local_8;
  
  uVar3 = *(uint *)((int)this + 0x10);
  if ((*(int *)((int)this + 4) != 0) && (uVar3 != 0)) {
    iVar4 = 0;
    local_8 = uVar3;
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((iVar4 + 0x1c + *(int *)((int)this + 4))));
      this_00 = ((undefined *)GEN_TOP((iVar4 + *(int *)((int)this + 4))));
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
        *(undefined4 *)((int)this_00 + 0x1c) = 0;
      }
      piVar1 = *(int * PTR32 *)((int)this_00 + 0x20);
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
        *(undefined4 *)((int)this_00 + 0x20) = 0;
      }
      F_0065ac10(this_00);
      iVar4 = iVar4 + 0x2c;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  if ((*(int *)((int)this + 0xc) != 0) && (uVar6 = 0, uVar3 != 0)) {
    do {
      if (*((int *)GEN_TOP((*(int *)((int)this + 0xc) + uVar6 * 4))) != 0) {
        F_0050c620(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + uVar6 * 4))),0,0);
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + uVar6 * 4))) = 0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar3);
  }
  if (*(int *)((int)this + 0xc) != 0) {
    F_00406b30(*(int *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  iVar4 = *(int *)((int)this + 4);
  if (iVar4 != 0) {
    iVar5 = *(int *)(iVar4 + -4) + -1;
    if (-1 < iVar5) {
      puVar7 = ((undefined4 *)GEN_TOP((*(int *)(iVar4 + -4) * 0x2c + 4 + iVar4)));
      do {
        iVar2 = puVar7[-0xb];
        if (iVar2 != 0) {
          F_00429760(iVar2,puVar7[-9] - iVar2 & 0xffffffe0,0xd8);
        }
        iVar5 = iVar5 + -1;
        puVar7[-0xb] = 0;
        puVar7[-10] = 0;
        puVar7[-9] = 0;
        puVar7 = puVar7 + -0xb;
      } while (-1 < iVar5);
    }
    if (iVar4 + -4 != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))
                (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),iVar4 + -4);
    }
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar3 = 0;
  if (*(int *)((int)this + 8) != 0) {
    uVar8 = F_00406b30(*(int *)((int)this + 8));
    uVar3 = (uint)uVar8;
    *(undefined4 *)((int)this + 8) = 0;
  }
  if (REFG(undefined4, 0x137fa08) != (int *)0x0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x137fa08) + 0xc))))(REFG(undefined4, 0x137fa08));
    REFG(undefined4, 0x137fa08) = (int *)0x0;
  }
  return uVar3;
}

/* ref: FUN_0065c020 */
uint F_0065c020(unsigned int gen_a0)
{
  GEN_ENTER(0x65c020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  F_0066dab0((undefined *)((int)this + 0x14));
  piVar4 = (int *)((int)this + 0x90);
  iVar3 = 0x10;
  do {
    piVar1 = (int *)*piVar4;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  piVar4 = (int *)((int)this + 0xd0);
  iVar3 = 0x10;
  do {
    piVar1 = (int *)*piVar4;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  piVar4 = *(int * PTR32 *)((int)this + 0x114);
  if (piVar4 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
    *(undefined4 *)((int)this + 0x114) = 0;
  }
  if (*(int *)((int)this + 0x224) != 0) {
    F_0050c620(*(int *)((int)this + 0x224),0,0);
    *(undefined4 *)((int)this + 0x224) = 0;
  }
  if (*(int *)((int)this + 0x228) != 0) {
    F_0050c620(*(int *)((int)this + 0x228),0,0);
    *(undefined4 *)((int)this + 0x228) = 0;
  }
  uVar2 = F_0065bec0(this);
  return uVar2;
}

/* ref: FUN_0065c0e0 */
uint F_0065c0e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x65c0e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined1 * param_6 = (undefined1 *)(uintptr_t)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined * this_00;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float10 fVar7;
  float fVar8;
  undefined4 uVar9;
  
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + *(int *)(param_1 + 8) * 4)));
  (*(int *)(gen_frame + 0x2c)) = *(int *)(param_1 + 8);
  uVar5 = F_004fff80(this_00,param_4);
  uVar6 = 1;
  if (uVar5 != 1) {
    uVar1 = param_6[1];
    uVar9 = *(undefined4 *)(param_6 + 0xc);
    fVar8 = 0.0;
    (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)(param_6 + 8);
    iVar4 = *(int *)((int)this_00 + 0xa8);
    uVar2 = *param_6;
    (*(undefined1 *)(gen_frame + 0x3b)) = param_6[2];
    uVar3 = *(undefined2 *)(param_6 + 4);
    if ((*((byte *)GEN_TOP((*(int *)(iVar4 + 4) + 0x1f + iVar4))) & 4) == 0) {
      fVar7 = F_0061fe30((uint)*(ushort *)(param_6 + 6));
      fVar8 = (float)fVar7;
      (*(float *)(gen_frame + 0x34)) = fVar8;
    }
    (*(undefined4 *)(gen_frame + 0x8)) = param_2;
    (*(undefined1 *)(gen_frame + 0x14)) = (undefined1)param_4;
    (*(undefined4 *)(gen_frame + 0x18)) = (*(undefined4 *)(gen_frame + 0x30));
    (*(undefined4 *)(gen_frame + 0x10)) = param_5;
    (*(int *)(gen_frame + 0xc)) = param_1;
    (*(undefined1 *)(gen_frame + 0x17)) = (*(undefined1 *)(gen_frame + 0x3b));
    (*(undefined1 *)(gen_frame + 0x16)) = uVar1;
    (*(undefined1 *)(gen_frame + 0x15)) = uVar2;
    (*(undefined2 *)(gen_frame + 0x1c)) = uVar3;
    (*(float *)(gen_frame + 0x20)) = fVar8;
    (*(undefined4 *)(gen_frame + 0x24)) = uVar9;
    uVar6 = F_006749c0(((undefined *)GEN_TOP(((*(int *)(gen_frame + 0x2c)) * 0x2c + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 4)))),&(*(undefined4 *)(gen_frame + 0x8)));
  }
  return uVar6;
}

/* ref: FUN_0065c1b0 */
uint F_0065c1b0(unsigned int gen_a0)
{
  GEN_ENTER(0x65c1b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10abb54));
  F_004d6630((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ac330));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x10ac318));
  *(undefined4 *)((int)this + 0x138) = 0;
  uVar1 = F_004296a0(0x1c,0,0xd2);
  *(uint *)((int)this + 0x134) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x134) + 4))) = *(int *)((int)this + 0x134);
  *((int *)GEN_TOP((*(int *)((int)this + 0x134) + 8))) = *(int *)((int)this + 0x134);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x134) + 0x18))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x134) + 0x19))) = 1;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b0) =
       (*(undefined * PTR32 (*)[1])REFP(0x10ababc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1f0) =
       (*(undefined * PTR32 (*)[1])REFP(0x10ababc));
  *(undefined4 *)((int)this + 0x200) = 0;
  *(undefined4 *)((int)this + 0x204) = 0;
  *(undefined4 *)((int)this + 0x208) = 0;
  *(undefined4 *)((int)this + 0x20c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x230) =
       (*(undefined * PTR32 (*)[1])REFP(0x10ababc));
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 0x244) = 0;
  *(undefined4 *)((int)this + 0x248) = 0;
  *(undefined4 *)((int)this + 0x24c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x270) =
       (*(undefined * PTR32 (*)[1])REFP(0x10ababc));
  *(undefined4 *)((int)this + 0x280) = 0;
  *(undefined4 *)((int)this + 0x284) = 0;
  *(undefined4 *)((int)this + 0x288) = 0;
  *(undefined4 *)((int)this + 0x28c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2b0) =
       (*(undefined * PTR32 (*)[1])REFP(0x10ababc));
  *(undefined4 *)((int)this + 0x2c0) = 0;
  *(undefined4 *)((int)this + 0x2c4) = 0;
  *(undefined4 *)((int)this + 0x2c8) = 0;
  *(undefined4 *)((int)this + 0x2cc) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2f0) =
       (*(undefined * PTR32 (*)[1])REFP(0x10ababc));
  *(undefined4 *)((int)this + 0x300) = 0;
  *(undefined4 *)((int)this + 0x304) = 0;
  *(undefined4 *)((int)this + 0x308) = 0;
  *(undefined4 *)((int)this + 0x30c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x330) =
       (*(undefined * PTR32 (*)[1])REFP(0x10ababc));
  *(undefined4 *)((int)this + 0x340) = 0;
  *(undefined4 *)((int)this + 0x344) = 0;
  *(undefined4 *)((int)this + 0x348) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x370) =
       (*(undefined * PTR32 (*)[1])REFP(0x10ababc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3b0) =
       (*(undefined * PTR32 (*)[1])REFP(0x10ababc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3f0) =
       (*(undefined * PTR32 (*)[1])REFP(0x10ababc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x430) =
       (*(undefined * PTR32 (*)[1])REFP(0x10ababc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x470) =
       (*(undefined * PTR32 (*)[1])REFP(0x10ababc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x4b0) =
       (*(undefined * PTR32 (*)[1])REFP(0x10ababc));
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 *)((int)this + 900) = 0;
  *(undefined4 *)((int)this + 0x388) = 0;
  *(undefined4 *)((int)this + 0x38c) = 0;
  *(undefined4 *)((int)this + 0x3c0) = 0;
  *(undefined4 *)((int)this + 0x3c4) = 0;
  *(undefined4 *)((int)this + 0x3c8) = 0;
  *(undefined4 *)((int)this + 0x3cc) = 0;
  *(undefined4 *)((int)this + 0x400) = 0;
  *(undefined4 *)((int)this + 0x404) = 0;
  *(undefined4 *)((int)this + 0x408) = 0;
  *(undefined4 *)((int)this + 0x40c) = 0;
  *(undefined4 *)((int)this + 0x440) = 0;
  *(undefined4 *)((int)this + 0x444) = 0;
  *(undefined4 *)((int)this + 0x448) = 0;
  *(undefined4 *)((int)this + 0x44c) = 0;
  *(undefined4 *)((int)this + 0x480) = 0;
  *(undefined4 *)((int)this + 0x484) = 0;
  *(undefined4 *)((int)this + 0x488) = 0;
  *(undefined4 *)((int)this + 0x48c) = 0;
  *(undefined4 *)((int)this + 0x4c0) = 0;
  *(undefined4 *)((int)this + 0x4c4) = 0;
  *(undefined4 *)((int)this + 0x4c8) = 0;
  *(undefined4 *)((int)this + 0x4cc) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x4f0) =
       (*(undefined * PTR32 (*)[1])REFP(0x10ababc));
  *(undefined4 *)((int)this + 0x500) = 0;
  *(undefined4 *)((int)this + 0x504) = 0;
  *(undefined4 *)((int)this + 0x508) = 0;
  *(undefined4 *)((int)this + 0x50c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x530) =
       (*(undefined * PTR32 (*)[1])REFP(0x10ababc));
  *(undefined4 *)((int)this + 0x540) = 0;
  *(undefined4 *)((int)this + 0x544) = 0;
  *(undefined4 *)((int)this + 0x548) = 0;
  *(undefined4 *)((int)this + 0x54c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x570) =
       (*(undefined * PTR32 (*)[1])REFP(0x10ababc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x5b0) =
       (*(undefined * PTR32 (*)[1])REFP(0x10ababc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x5f0) =
       (*(undefined * PTR32 (*)[1])REFP(0x10ababc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x630) =
       (*(undefined * PTR32 (*)[1])REFP(0x10ababc));
  *(undefined4 *)((int)this + 0x580) = 0;
  *(undefined4 *)((int)this + 0x584) = 0;
  *(undefined4 *)((int)this + 0x588) = 0;
  *(undefined4 *)((int)this + 0x58c) = 0;
  *(undefined4 *)((int)this + 0x5c0) = 0;
  *(undefined4 *)((int)this + 0x5c4) = 0;
  *(undefined4 *)((int)this + 0x5c8) = 0;
  *(undefined4 *)((int)this + 0x5cc) = 0;
  *(undefined4 *)((int)this + 0x600) = 0;
  *(undefined4 *)((int)this + 0x604) = 0;
  *(undefined4 *)((int)this + 0x608) = 0;
  *(undefined4 *)((int)this + 0x60c) = 0;
  *(undefined4 *)((int)this + 0x640) = 0;
  *(undefined4 *)((int)this + 0x644) = 0;
  *(undefined4 *)((int)this + 0x648) = 0;
  *(undefined4 *)((int)this + 0x64c) = 0;
  *(undefined4 *)((int)this + 0x674) = 0;
  *(undefined4 *)((int)this + 0x678) = 0;
  *(undefined4 *)((int)this + 0x680) = 0;
  *(undefined4 *)((int)this + 0x684) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x670) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x67c) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x688) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x68c) = 0;
  *(undefined4 *)((int)this + 0x690) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x694) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x698) = 0;
  *(undefined4 *)((int)this + 0x69c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6a0) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x6a4) = 0;
  *(undefined4 *)((int)this + 0x6a8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6ac) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x6b0) = 0;
  *(undefined4 *)((int)this + 0x6b4) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6b8) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x6bc) = 0;
  *(undefined4 *)((int)this + 0x6c0) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6c4) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x6c8) = 0;
  *(undefined4 *)((int)this + 0x6cc) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6d0) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x6d4) = 0;
  *(undefined4 *)((int)this + 0x6d8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6dc) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x6e0) = 0;
  *(undefined4 *)((int)this + 0x6e4) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6e8) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x6ec) = 0;
  *(undefined4 *)((int)this + 0x6f0) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6f4) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x6f8) = 0;
  *(undefined4 *)((int)this + 0x6fc) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x700) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x704) = 0;
  *(undefined4 *)((int)this + 0x708) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x70c) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x710) = 0;
  *(undefined4 *)((int)this + 0x714) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x718) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x71c) = 0;
  *(undefined4 *)((int)this + 0x720) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x724) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x728) = 0;
  *(undefined4 *)((int)this + 0x72c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x730) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x734) = 0;
  *(undefined4 *)((int)this + 0x738) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x73c) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x740) = 0;
  *(undefined4 *)((int)this + 0x744) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x748) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x74c) = 0;
  *(undefined4 *)((int)this + 0x750) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x754) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x758) = 0;
  *(undefined4 *)((int)this + 0x75c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x760) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x764) = 0;
  *(undefined4 *)((int)this + 0x768) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x76c) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x770) = 0;
  *(undefined4 *)((int)this + 0x774) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x778) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x77c) = 0;
  *(undefined4 *)((int)this + 0x780) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x784) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x788) = 0;
  *(undefined4 *)((int)this + 0x78c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x790) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x794) = 0;
  *(undefined4 *)((int)this + 0x798) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x79c) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x7a0) = 0;
  *(undefined4 *)((int)this + 0x7a4) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x7a8) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x7ac) = 0;
  *(undefined4 *)((int)this + 0x7b0) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x7b4) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x7b8) = 0;
  *(undefined4 *)((int)this + 0x7bc) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x7c0) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x7c4) = 0;
  *(undefined4 *)((int)this + 0x7c8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x7cc) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 2000) = 0;
  *(undefined4 *)((int)this + 0x7d4) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x7d8) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x7dc) = 0;
  *(undefined4 *)((int)this + 0x7e0) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x7e4) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x7e8) = 0;
  *(undefined4 *)((int)this + 0x7ec) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x7f0) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x7f4) = 0;
  *(undefined4 *)((int)this + 0x7f8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x7fc) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x800) = 0;
  *(undefined4 *)((int)this + 0x804) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x808) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x814) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x80c) = 0;
  *(undefined4 *)((int)this + 0x810) = 0;
  *(undefined4 *)((int)this + 0x818) = 0;
  *(undefined4 *)((int)this + 0x81c) = 0;
  *(undefined4 *)((int)this + 0x824) = 0;
  *(undefined4 *)((int)this + 0x828) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x820) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x82c) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined4 *)((int)this + 0x830) = 0;
  *(undefined4 *)((int)this + 0x834) = 0;
  *(undefined4 *)((int)this + 0x838) = 0;
  *(undefined4 *)((int)this + 0x83c) = 0;
  *(undefined4 *)((int)this + 0x840) = 0;
  return (uint)this;
}

/* ref: FUN_0065c790 */
byte F_0065c790(unsigned int gen_a0)
{
  GEN_ENTER(0x65c790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined * this_00;
  float fVar5;
  uint uVar6;
  undefined4 * puVar7;
  int * piVar8;
  undefined4 * this_01;
  uint uVar9;
  int iVar10;
  int * in_ecx;
  float in_XMM3_Da = 0;
  float in_XMM5_Da = 0;
  float in_XMM6_Da = 0;
  
  this_00 = REFG(undefined4, 0x1370b90);
  uVar6 = F_004df8f0(*(undefined * PTR32 *)((int)REFG(undefined4, 0x1370b90) + 0x20),"g_SamplerAttenuation");
  *(uint *)((int)this + 0xec) = uVar6;
  uVar6 = F_004df8f0(*(undefined * PTR32 *)((int)this_00 + 0x20),"g_SamplerOmniShadowIndexTable");
  *(uint *)((int)this + 0xf0) = uVar6;
  uVar6 = F_004df8f0(*(undefined * PTR32 *)((int)this_00 + 0x20),"g_SamplerOmniShadowStatic");
  *(uint *)((int)this + 0xf4) = uVar6;
  uVar6 = F_004df8f0(*(undefined * PTR32 *)((int)this_00 + 0x20),"g_SamplerOmniShadowDynamic");
  *(uint *)((int)this + 0xf8) = uVar6;
  uVar6 = F_004df8f0(*(undefined * PTR32 *)((int)this_00 + 0x20),"g_SamplerShadow");
  *(uint *)((int)this + 0xfc) = uVar6;
  uVar6 = F_004df8f0(*(undefined * PTR32 *)((int)this_00 + 0x20),"g_SamplerShadowPointLight");
  *(uint *)((int)this + 0x100) = uVar6;
  uVar6 = F_004df8f0(*(undefined * PTR32 *)((int)this_00 + 0x20),"g_SamplerGBuffer");
  *(uint *)((int)this + 0x104) = uVar6;
  uVar6 = F_004df8f0(*(undefined * PTR32 *)((int)this_00 + 0x20),"g_SamplerViewPosition");
  *(uint *)((int)this + 0x10c) = uVar6;
  uVar6 = F_004df8f0(*(undefined * PTR32 *)((int)this_00 + 0x20),"g_SamplerDepth");
  *(uint *)((int)this + 0x108) = uVar6;
  uVar6 = F_004df8f0(*(undefined * PTR32 *)((int)this_00 + 0x20),"g_SamplerLight");
  *(uint *)((int)this + 0x110) = uVar6;
  uVar6 = F_004df8f0(*(undefined * PTR32 *)((int)this_00 + 0x1c),"g_LightParam");
  *(uint *)((int)this + 0x114) = uVar6;
  uVar6 = F_004df8f0(*(undefined * PTR32 *)((int)this_00 + 0x1c),"g_LightParamArray");
  *(uint *)((int)this + 0x118) = uVar6;
  uVar6 = F_004df8f0(*(undefined * PTR32 *)((int)this_00 + 0x1c),"g_FakeSpecularParam");
  *(uint *)((int)this + 0x11c) = uVar6;
  uVar6 = F_004df8f0(*(undefined * PTR32 *)((int)this_00 + 0x1c),"g_DirectionalShadowParameter");
  *(uint *)((int)this + 0x120) = uVar6;
  uVar6 = F_004df8f0(*(undefined * PTR32 *)((int)this_00 + 0x1c),"g_ScreenSize");
  *(uint *)((int)this + 0x124) = uVar6;
  uVar6 = F_004df8f0(*(undefined * PTR32 *)((int)this_00 + 0x1c),"g_OmniShadowViewProjectionMatrixTable");
  *(uint *)((int)this + 0x128) = uVar6;
  uVar6 = F_004df8f0(*(undefined * PTR32 *)((int)this_00 + 0x1c),"g_OmniShadowParameter");
  *(uint *)((int)this + 300) = uVar6;
  uVar6 = F_004dcd60(0x60,2,8);
  *(uint *)((int)this + 0xcc) = uVar6;
  uVar6 = F_004dcd60(0x40,2,8);
  *(uint *)((int)this + 0xd0) = uVar6;
  uVar6 = F_004dcd60(0x10,2,8);
  *(uint *)((int)this + 0xd4) = uVar6;
  uVar6 = F_004dcd60(0x180,2,8);
  *(uint *)((int)this + 0xd8) = uVar6;
  uVar6 = F_004dcd60(0x300,2,8);
  *(uint *)((int)this + 0xdc) = uVar6;
  uVar6 = F_004dcd60(0x60,2,8);
  *(uint *)((int)this + 0xe0) = uVar6;
  uVar6 = F_004dcd60(0x100,2,8);
  *(uint *)((int)this + 0xe4) = uVar6;
  uVar6 = F_004dcd60(0x50,2,8);
  *(uint *)((int)this + 0xe8) = uVar6;
  F_004d58e0(((undefined1 *)(gen_frame + 0x0)),0,0,0x23,0);
  uVar6 = F_004deb40(this_00,((undefined1 *)(gen_frame + 0x0)),1);
  *(uint *)((int)this + 0x1a0) = uVar6;
  F_00633520((undefined *)((int)this + 0x1b0));
  F_00634710((undefined *)((int)this + 0x1f0));
  F_00633670((undefined *)((int)this + 0x230),0);
  F_00633670((undefined *)((int)this + 0x270),1);
  iVar10 = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined *)((int)this + 0x570);
  do {
    F_00634920((*(undefined4 * PTR32 *)(gen_frame + 0x8)),iVar10);
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 0x40);
    iVar10 = iVar10 + 1;
  } while (iVar10 < 4);
  (*(float *)(gen_frame + 0x4)) = 0.0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)((int)this + 0x2b0);
  do {
    fVar5 = (*(float *)(gen_frame + 0x4));
    fVar1 = ((float)GEN_TOF((((float10)(int)gen_fl2bits((*(float *)(gen_frame + 0x4))) * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                   (float10)*(double *)&REFG(undefined, 0x1080220))));
    (*(float *)(gen_frame + 0x4)) = fVar1;
    F_00633cc0((*(undefined4 * PTR32 *)(gen_frame + 0x8)),fVar1);
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 0x40);
    (*(float *)(gen_frame + 0x4)) = gen_bits2f((int)gen_fl2bits(fVar5) + 10);
  } while ((int)gen_fl2bits(fVar5) + 10 < 0x5a);
  F_006342a0((undefined *)((int)this + 0x4f0));
  F_006344c0((undefined *)((int)this + 0x530));
  iVar10 = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)((int)this + 0x18);
  do {
    puVar7 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                       (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),0x1d0,0x10)));
    iVar4 = REFG(float, 0x10abcd4);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7[0x29] = GEN_FLT_TO(puVar7[0x29], REFG(float, 0x108b284));
      puVar7[0x2a] = GEN_FLT_TO(puVar7[0x2a], REFG(float, 0x1096cd4));
      puVar7[0x2b] = GEN_FLT_TO(puVar7[0x2b], REFG(float, 0x1094884));
      puVar7[0x2c] = GEN_FLT_TO(puVar7[0x2c], REFG(float, 0x1094724));
      puVar7[0x2d] = GEN_FLT_TO(puVar7[0x2d], REFG(float, 0x1094880));
      iVar3 = REFG(float, 0x10abcd0);
      puVar7[1] = 1;
      puVar7[0x28] = 0x1e;
      *(undefined1 *)(puVar7 + 0x2e) = 0;
      puVar7[0x48] = 0;
      *puVar7 = (*(undefined * PTR32 (*)[7])REFP(0x10abcb4));
      puVar7[0x6c] = iVar3;
      puVar7[0x6d] = iVar4;
      puVar7[0x6e] = iVar3;
    }
    *(*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar7;
    F_00629280(puVar7,0x1e,iVar10);
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 1;
    iVar10 = iVar10 + 1;
  } while (iVar10 < 4);
  piVar8 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                            (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),0x1d0,0x10)));
  iVar10 = REFG(float, 0x10abcd4);
  in_ecx = (int *)0x0;
  if (piVar8 != (int *)0x0) {
    piVar8[0x29] = GEN_FLT_TO(piVar8[0x29], REFG(float, 0x108b284));
    piVar8[0x2a] = GEN_FLT_TO(piVar8[0x2a], REFG(float, 0x1096cd4));
    piVar8[0x2b] = GEN_FLT_TO(piVar8[0x2b], REFG(float, 0x1094884));
    piVar8[0x2c] = GEN_FLT_TO(piVar8[0x2c], REFG(float, 0x1094724));
    piVar8[0x2d] = GEN_FLT_TO(piVar8[0x2d], REFG(float, 0x1094880));
    iVar4 = REFG(float, 0x10abcd0);
    piVar8[0x48] = 0;
    piVar8[1] = 1;
    piVar8[0x28] = 0x1e;
    *(undefined1 *)(piVar8 + 0x2e) = 0;
    *piVar8 = (int)(*(undefined * PTR32 (*)[7])REFP(0x10abcdc));
    piVar8[0x6c] = iVar4;
    piVar8[0x6d] = iVar10;
    piVar8[0x6e] = iVar4;
    in_ecx = piVar8;
  }
  *(int * PTR32 *)((int)this + 0x28) = in_ecx;
  uVar6 = F_004dcd60(0x1c0,1,0);
  in_ecx[0x48] = uVar6;
  if (uVar6 != 0) {
    F_00621fc0(in_ecx,in_XMM3_Da,in_XMM5_Da,in_XMM6_Da,&REFG(float, 0x1302d00));
    *(undefined1 *)(in_ecx + 0x70) = 0x1e;
    (*(float *)(gen_frame + 0x4)) = gen_bits2f((char)in_ecx[0x70] * 0x358 + 600 + REFG(int, 0x137127c));
    ((code *)*(gen_code32 *)(*in_ecx + 8))(in_ecx);
    piVar8 = *(int * PTR32 *)((int)gen_fl2bits((*(float *)(gen_frame + 0x4))) + 0x18);
    if (piVar8 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8);
    }
    *(int * PTR32 *)((int)gen_fl2bits((*(float *)(gen_frame + 0x4))) + 0x18) = in_ecx;
    *(uint *)((int)gen_fl2bits((*(float *)(gen_frame + 0x4))) + 4) = *(uint *)((int)gen_fl2bits((*(float *)(gen_frame + 0x4))) + 4) & 0xfffffffe
    ;
    *(undefined1 *)(in_ecx + 0x71) = 0;
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)0x0;
  puVar7 = (undefined4 *)((int)this + 0x7c);
  do {
    puVar7[-0x14] = 0;
    this_01 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                        (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),0x290,0x10)));
    if (this_01 == (undefined4 *)0x0) {
      this_01 = (undefined4 *)0x0;
    }
    else {
      this_01[0x29] = GEN_FLT_TO(this_01[0x29], REFG(float, 0x108b284));
      this_01[0x2a] = GEN_FLT_TO(this_01[0x2a], REFG(float, 0x1096cd4));
      this_01[0x2b] = GEN_FLT_TO(this_01[0x2b], REFG(float, 0x1094884));
      this_01[0x2c] = GEN_FLT_TO(this_01[0x2c], REFG(float, 0x1094724));
      iVar10 = REFG(float, 0x1094880);
      this_01[1] = 1;
      this_01[0x28] = 0x1e;
      this_01[0x2d] = iVar10;
      *(undefined1 *)(this_01 + 0x2e) = 0;
      this_01[0x48] = 0;
      *this_01 = (*(undefined * PTR32 (*)[8])REFP(0x10abcfc));
      this_01[0x50] = 0;
    }
    *puVar7 = this_01;
    F_006398c0(this_01,(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
    iVar10 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 1;
    puVar7 = puVar7 + 1;
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)iVar10;
  } while (iVar10 < 0x14);
  uVar6 = F_00b52710("Default",7,0);
  *(uint *)((int)this + 0x824) = uVar6;
  uVar6 = F_00b52710("SUB_VIEW_MAIN",0xd,0);
  *(uint *)((int)this + 0x828) = uVar6;
  uVar6 = F_00b52710("Default",7,0);
  *(uint *)((int)this + 0x830) = uVar6;
  uVar6 = F_00b52710("SUB_VIEW_SHADOW_0",0x11,0);
  *(uint *)((int)this + 0x834) = uVar6;
  uVar6 = F_00b52710("ShadowSoftShadowType",0x14,0);
  uVar9 = F_00b52710("ShadowSoftShadowType_1x1",0x18,0);
  *(uint *)((int)this + 0x674) = uVar6;
  *(uint *)((int)this + 0x678) = uVar9;
  uVar6 = F_00b52710("ShadowSoftShadowType",0x14,0);
  uVar9 = F_00b52710("ShadowSoftShadowType_3x3",0x18,0);
  *(uint *)((int)this + 0x680) = uVar6;
  *(uint *)((int)this + 0x684) = uVar9;
  uVar6 = F_00b52710("OutputChannel",0xd,0);
  uVar9 = F_00b52710("OutputChannel_R",0xf,0);
  *(uint *)((int)this + 0x68c) = uVar6;
  *(uint *)((int)this + 0x690) = uVar9;
  uVar6 = F_00b52710("OutputChannel",0xd,0);
  uVar9 = F_00b52710("OutputChannel_G",0xf,0);
  *(uint *)((int)this + 0x698) = uVar6;
  *(uint *)((int)this + 0x69c) = uVar9;
  uVar6 = F_00b52710("OutputChannel",0xd,0);
  uVar9 = F_00b52710("OutputChannel_B",0xf,0);
  *(uint *)((int)this + 0x6a4) = uVar6;
  *(uint *)((int)this + 0x6a8) = uVar9;
  uVar6 = F_00b52710("OutputChannel",0xd,0);
  uVar9 = F_00b52710("OutputChannel_A",0xf,0);
  *(uint *)((int)this + 0x6b0) = uVar6;
  *(uint *)((int)this + 0x6b4) = uVar9;
  uVar6 = F_00b52710("ShadowDistanceFadeType",0x16,0);
  uVar9 = F_00b52710("ShadowDistanceFadeType_Disable",0x1e,0);
  *(uint *)((int)this + 0x6d4) = uVar6;
  *(uint *)((int)this + 0x6d8) = uVar9;
  uVar6 = F_00b52710("ShadowDistanceFadeType",0x16,0);
  uVar9 = F_00b52710("ShadowDistanceFadeType_Enable",0x1d,0);
  *(uint *)((int)this + 0x6e0) = uVar6;
  *(uint *)((int)this + 0x6e4) = uVar9;
  uVar6 = F_00b52710("GetDirectionalLight",0x13,0);
  uVar9 = F_00b52710("GetDirectionalLight_Disable",0x1b,0);
  *(uint *)((int)this + 0x6ec) = uVar6;
  *(uint *)((int)this + 0x6f0) = uVar9;
  uVar6 = F_00b52710("GetDirectionalLight",0x13,0);
  uVar9 = F_00b52710("GetDirectionalLight_Enable",0x1a,0);
  *(uint *)((int)this + 0x6f8) = uVar6;
  *(uint *)((int)this + 0x6fc) = uVar9;
  uVar6 = F_00b52710("GetDirectionalLight",0x13,0);
  uVar9 = F_00b52710("GetDirectionalLight_Shadow",0x1a,0);
  *(uint *)((int)this + 0x704) = uVar6;
  *(uint *)((int)this + 0x708) = uVar9;
  uVar6 = F_00b52710("GetFakeSpecular",0xf,0);
  uVar9 = F_00b52710("GetFakeSpecular_Disable",0x17,0);
  *(uint *)((int)this + 0x710) = uVar6;
  *(uint *)((int)this + 0x714) = uVar9;
  uVar6 = F_00b52710("GetFakeSpecular",0xf,0);
  uVar9 = F_00b52710("GetFakeSpecular_Enable",0x16,0);
  *(uint *)((int)this + 0x71c) = uVar6;
  *(uint *)((int)this + 0x720) = uVar9;
  uVar6 = F_00b52710("LightClip",9,0);
  uVar9 = F_00b52710("LightClip_Disable",0x11,0);
  *(uint *)((int)this + 0x728) = uVar6;
  *(uint *)((int)this + 0x72c) = uVar9;
  uVar6 = F_00b52710("LightClip",9,0);
  uVar9 = F_00b52710("LightClip_Enable",0x10,0);
  *(uint *)((int)this + 0x734) = uVar6;
  *(uint *)((int)this + 0x738) = uVar9;
  uVar6 = F_00b52710("ApplyAttenuation",0x10,0);
  uVar9 = F_00b52710("ApplyAttenuation_Linear",0x17,0);
  *(uint *)((int)this + 0x770) = uVar6;
  *(uint *)((int)this + 0x774) = uVar9;
  uVar6 = F_00b52710("ApplyAttenuation",0x10,0);
  uVar9 = F_00b52710("ApplyAttenuation_Quadratic",0x1a,0);
  *(uint *)((int)this + 0x77c) = uVar6;
  *(uint *)((int)this + 0x780) = uVar9;
  uVar6 = F_00b52710("ApplyAttenuation",0x10,0);
  uVar9 = F_00b52710("ApplyAttenuation_Cubic",0x16,0);
  *(uint *)((int)this + 0x788) = uVar6;
  *(uint *)((int)this + 0x78c) = uVar9;
  uVar6 = F_00b52710("ApplyConeAttenuation",0x14,0);
  uVar9 = F_00b52710("ApplyConeAttenuation_Disable",0x1c,0);
  *(uint *)((int)this + 0x794) = uVar6;
  *(uint *)((int)this + 0x798) = uVar9;
  uVar6 = F_00b52710("ApplyConeAttenuation",0x14,0);
  uVar9 = F_00b52710("ApplyConeAttenuation_Enable",0x1b,0);
  *(uint *)((int)this + 0x7a0) = uVar6;
  *(uint *)((int)this + 0x7a4) = uVar9;
  uVar6 = F_00b52710("ApplyMaskTexture",0x10,0);
  uVar9 = F_00b52710("ApplyMaskTexture_Disable",0x18,0);
  *(uint *)((int)this + 0x740) = uVar6;
  *(uint *)((int)this + 0x744) = uVar9;
  uVar6 = F_00b52710("ApplyMaskTexture",0x10,0);
  uVar9 = F_00b52710("ApplyMaskTexture_Enable",0x17,0);
  *(uint *)((int)this + 0x74c) = uVar6;
  *(uint *)((int)this + 0x750) = uVar9;
  uVar6 = F_00b52710("SpecularLighting",0x10,0);
  uVar9 = F_00b52710("SpecularLighting_Disable",0x18,0);
  *(uint *)((int)this + 0x758) = uVar6;
  *(uint *)((int)this + 0x75c) = uVar9;
  uVar6 = F_00b52710("SpecularLighting",0x10,0);
  uVar9 = F_00b52710("SpecularLighting_Enable",0x17,0);
  *(uint *)((int)this + 0x764) = uVar6;
  *(uint *)((int)this + 0x768) = uVar9;
  uVar6 = F_00b52710("GetShadow",9,0);
  uVar9 = F_00b52710("GetShadowCascade",0x10,0);
  *(uint *)((int)this + 0x7dc) = uVar6;
  *(uint *)((int)this + 0x7e0) = uVar9;
  uVar6 = F_00b52710("GetShadow",9,0);
  uVar9 = F_00b52710("GetShadowCascadeWith",0x14,0);
  *(uint *)((int)this + 0x7e8) = uVar6;
  *(uint *)((int)this + 0x7ec) = uVar9;
  uVar6 = F_00b52710("GetShadow",9,0);
  uVar9 = F_00b52710("GetShadowCloudOnly",0x12,0);
  *(uint *)((int)this + 0x7f4) = uVar6;
  *(uint *)((int)this + 0x7f8) = uVar9;
  uVar6 = F_00b52710("TransformProj",0xd,0);
  uVar9 = F_00b52710("TransformProjPlaneNear",0x16,0);
  *(uint *)((int)this + 0x800) = uVar6;
  *(uint *)((int)this + 0x804) = uVar9;
  uVar6 = F_00b52710("TransformProj",0xd,0);
  uVar9 = F_00b52710("TransformProjPlaneFar",0x15,0);
  *(uint *)((int)this + 0x80c) = uVar6;
  *(uint *)((int)this + 0x810) = uVar9;
  uVar6 = F_00b52710("TransformProj",0xd,0);
  uVar9 = F_00b52710("TransformProjBox",0x10,0);
  *(uint *)((int)this + 0x818) = uVar6;
  *(uint *)((int)this + 0x81c) = uVar9;
  uVar6 = F_00b52710("ApplyOmniShadow",0xf,0);
  uVar9 = F_00b52710("ApplyOmniShadow_Disable",0x17,0);
  *(uint *)((int)this + 0x7ac) = uVar6;
  *(uint *)((int)this + 0x7b0) = uVar9;
  uVar6 = F_00b52710("ApplyOmniShadow",0xf,0);
  uVar9 = F_00b52710("ApplyOmniShadow_Map",0x13,0);
  *(uint *)((int)this + 0x7b8) = uVar6;
  *(uint *)((int)this + 0x7bc) = uVar9;
  uVar6 = F_00b52710("ApplyOmniShadow",0xf,0);
  uVar9 = F_00b52710("ApplyOmniShadow_Chara",0x15,0);
  *(uint *)((int)this + 0x7c4) = uVar6;
  *(uint *)((int)this + 0x7c8) = uVar9;
  uVar6 = F_00b52710("ApplyOmniShadow",0xf,0);
  uVar9 = F_00b52710("ApplyOmniShadow_MapChara",0x18,0);
  *(uint *)((int)this + 2000) = uVar6;
  *(uint *)((int)this + 0x7d4) = uVar9;
  *(undefined4 *)((int)this + 0x10) = 0x1000101;
  *(undefined4 *)((int)this + 0x14) = 0;
  F_0065ae20(this);
  *(undefined4 *)((int)this + 0x850) = REFG(float, 0x1302c70);
  *(undefined4 *)((int)this + 0x854) = REFG(float, 0x1302c74);
  *(undefined4 *)((int)this + 0x858) = REFG(float, 0x1302c78);
  *(undefined4 *)((int)this + 0x860) = REFG(float, 0x1302c80);
  *(undefined4 *)((int)this + 0x864) = REFG(float, 0x1302c84);
  *(undefined4 *)((int)this + 0x868) = REFG(float, 0x1302c88);
  *(undefined4 *)((int)this + 0x870) = REFG(float, 0x1302c90);
  *(undefined4 *)((int)this + 0x874) = REFG(float, 0x1302c94);
  *(undefined4 *)((int)this + 0x878) = REFG(float, 0x1302c98);
  *(undefined4 *)((int)this + 0x880) = REFG(undefined4, 0x1302e44);
  *(undefined4 *)((int)this + 0x884) = REFG(undefined4, 0x1302e48);
  *(undefined4 *)((int)this + 0x888) = REFG(undefined4, 0x1302e4c);
  uVar2 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0x88c) = REFG(undefined4, 0x1302e50);
  *(undefined4 *)((int)this + 0x890) = REFG(undefined4, 0x1302e44);
  *(undefined4 *)((int)this + 0x894) = REFG(undefined4, 0x1302e48);
  *(undefined4 *)((int)this + 0x898) = REFG(undefined4, 0x1302e4c);
  *(undefined4 *)((int)this + 0x89c) = REFG(undefined4, 0x1302e50);
  *(undefined4 *)((int)this + 0x8a0) = REFG(undefined4, 0x1302e44);
  *(undefined4 *)((int)this + 0x8a4) = REFG(undefined4, 0x1302e48);
  *(undefined4 *)((int)this + 0x8a8) = REFG(undefined4, 0x1302e4c);
  *(undefined4 *)((int)this + 0x8ac) = REFG(undefined4, 0x1302e50);
  *(undefined4 *)((int)this + 0x8b0) = uVar2;
  *(undefined4 *)((int)this + 0x8b4) = uVar2;
  *(undefined4 *)((int)this + 0x8b8) = uVar2;
  *(undefined4 *)((int)this + 0x8bc) = uVar2;
  return 1;
}

/* ref: FUN_0065d4d0 */
uint F_0065d4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65d4d0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((*(int *)&gen_args[1]) + 0xc) - 2;
  if (uVar1 == 0) {
    uVar1 = F_00674c30(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 400))),&(*(int *)&gen_args[1]));
  }
  return uVar1;
}

/* ref: FUN_0065d500 */
uint F_0065d500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65d500u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  iVar1 = (*(uint *)&gen_args[1]);
  uVar2 = *(int *)((*(uint *)&gen_args[1]) + 0xc) - 1;
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 0: ;
    uVar2 = F_00674c30(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x140))),&(*(uint *)&gen_args[1]));
    return uVar2;
  case 1: ;
    break;
  case 2: ;
    uVar2 = F_00674c30(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x160))),&(*(uint *)&gen_args[1]));
    return uVar2;
  case 3: ;
    uVar2 = F_00674c30(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x170))),&(*(uint *)&gen_args[1]));
    return uVar2;
  case 4: ;
    uVar2 = F_00674c30(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x180))),&(*(uint *)&gen_args[1]));
  default: ;
    return uVar2;
  }
  if (*(ushort *)((*(uint *)&gen_args[1]) + 10) == 0) {
    uVar2 = F_00674c30(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x150))),&(*(uint *)&gen_args[1]));
    return uVar2;
  }
  (*(uint *)&gen_args[1]) = (uint)*(ushort *)((*(uint *)&gen_args[1]) + 10);
  piVar3 = (int *)F_006744c0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x130))),&(*(uint *)&gen_args[1]));
  if (*piVar3 != 0) {
    piVar3[1] = iVar1;
    return (uint)piVar3;
  }
  *piVar3 = iVar1;
  return (uint)piVar3;
}

/* ref: FUN_0065d5d0 */
unsigned int F_0065d5d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65d5d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint * this_00;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  undefined4 * puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined * pvVar9;
  int * piVar10;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  puVar5 = (undefined4 *)F_004296a0(0x14,0,0xd3);
  *puVar5 = *(undefined4 *)((int)this + 0x11c);
  puVar5[1] = *(undefined4 *)((int)this + 0x11c);
  puVar5[2] = *(undefined4 *)((int)this + 0x11c);
  *(undefined2 *)(puVar5 + 4) = 0;
  if (puVar5 + 3 != (undefined4 *)0x0) {
    puVar5[3] = param_1;
  }
  F_00672280((undefined *)((int)this + 0x118),((undefined1 *)(gen_frame + 0x0)),puVar5,0);
  iVar6 = *(int *)((int)this + 0x128);
  this_00 = (uint *)((int)this + 0x128);
  pvVar9 = this;
  if (iVar6 != *(int *)((int)this + 300)) {
    F_00c46e20(iVar6,*(int *)((int)this + 300),0);
    *(int *)((int)this + 300) = iVar6;
    pvVar9 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  }
  piVar10 = ((int *)GEN_TOP(**(int * PTR32 *)((int)pvVar9 + 0x11c)));
  param_1 = piVar10;
  if (piVar10 != *(int * PTR32 *)((int)pvVar9 + 0x11c)) {
    do {
      piVar2 = *(int * PTR32 *)((int)this + 300);
      piVar4 = piVar10 + 3;
      if ((piVar4 < piVar2) && (piVar3 = (int *)*this_00, piVar3 <= piVar4)) {
        (*(int *)(gen_frame + 0x4)) = (int)piVar4 - (int)((int)(uintptr_t)piVar3) >> 2;
        if (piVar2 == *(int * PTR32 *)((int)this + 0x130)) {
          iVar6 = (int)piVar2 - (int)((int)(uintptr_t)piVar3) >> 2;
          if (iVar6 == -1) {
LAB_0065d794: ;
                    
            F_00c4579a("vector<T> too long");
          }
          uVar7 = iVar6 + 1;
          uVar8 = (int)*(int * PTR32 *)((int)this + 0x130) - (int)((int)(uintptr_t)piVar3) >> 2;
          if (uVar8 < uVar7) {
            if (-(uVar8 >> 1) - 1 < uVar8) {
              uVar8 = 0;
            }
            else {
              uVar8 = uVar8 + (uVar8 >> 1);
            }
            if (uVar8 < uVar7) {
              uVar8 = uVar7;
            }
            F_00673940(this_00,uVar8);
          }
        }
        if (*(undefined4 * PTR32 *)((int)this + 300) != (undefined4 *)0x0) {
          **(undefined4 * PTR32 *)((int)this + 300) = *(undefined4 *)(*this_00 + (*(int *)(gen_frame + 0x4)) * 4);
        }
      }
      else {
        if (piVar2 == *(int * PTR32 *)((int)this + 0x130)) {
          iVar6 = (int)((int)piVar2 - *this_00) >> 2;
          if (iVar6 == -1) goto LAB_0065d794;
          uVar7 = iVar6 + 1;
          uVar8 = (int)((int)*(int * PTR32 *)((int)this + 0x130) - *this_00) >> 2;
          if (uVar8 < uVar7) {
            if (-(uVar8 >> 1) - 1 < uVar8) {
              uVar8 = 0;
            }
            else {
              uVar8 = uVar8 + (uVar8 >> 1);
            }
            if (uVar8 < uVar7) {
              uVar8 = uVar7;
            }
            F_00673940(this_00,uVar8);
            piVar10 = param_1;
          }
        }
        if (*(int * PTR32 *)((int)this + 300) != (int *)0x0) {
          **(int * PTR32 *)((int)this + 300) = *piVar4;
        }
      }
      *(int *)((int)this + 300) = *(int *)((int)this + 300) + 4;
      if (*(char *)((int)piVar10 + 0x11) == '\0') {
        piVar4 = (int *)piVar10[2];
        if (*(char *)((int)piVar4 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar4 + 0x11);
          piVar10 = piVar4;
          piVar4 = (int *)*piVar4;
          while (param_1 = piVar10, cVar1 == '\0') {
            cVar1 = *(char *)(*piVar4 + 0x11);
            piVar10 = piVar4;
            piVar4 = (int *)*piVar4;
          }
        }
        else {
          cVar1 = *(char *)(piVar10[1] + 0x11);
          piVar2 = (int *)piVar10[1];
          piVar4 = piVar10;
          while ((piVar10 = piVar2, param_1 = piVar10, cVar1 == '\0' &&
                 (piVar4 == (int *)piVar10[2]))) {
            cVar1 = *(char *)(piVar10[1] + 0x11);
            piVar2 = (int *)piVar10[1];
            piVar4 = piVar10;
          }
        }
      }
    } while (piVar10 != *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x11c));
  }
  return 0;
}

/* ref: FUN_0065d7a0 */
unsigned int F_0065d7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65d7a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint * this_00;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined * pvVar8;
  int * piVar9;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_0066d160(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x118))),&(*(undefined4 *)(gen_frame + 0x0)),&(*(int * PTR32 *)&gen_args[1]));
  F_00672bb0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x118))),&(*(int * PTR32 *)&gen_args[1]),(*(undefined4 *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x4)));
  iVar5 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x128)));
  this_00 = ((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x128)));
  pvVar8 = (*(undefined * PTR32 *)&gen_args[0]);
  if (iVar5 != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 300)))) {
    F_00c46e20(iVar5,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 300))),0);
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 300))) = iVar5;
    pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  }
  piVar9 = ((int *)GEN_TOP(**(int * PTR32 *)((int)pvVar8 + 0x11c)));
  (*(int * PTR32 *)&gen_args[1]) = piVar9;
  if (piVar9 != *(int * PTR32 *)((int)pvVar8 + 0x11c)) {
    do {
      piVar2 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 300)));
      piVar4 = piVar9 + 3;
      if ((piVar4 < piVar2) && (piVar3 = (int *)*this_00, piVar3 <= piVar4)) {
        (*(int *)(gen_frame + 0x4)) = (int)piVar4 - (int)((int)(uintptr_t)piVar3) >> 2;
        if (piVar2 == *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x130)))) {
          iVar5 = (int)piVar2 - (int)((int)(uintptr_t)piVar3) >> 2;
          if (iVar5 == -1) {
LAB_0065d93d: ;
                    
            F_00c4579a("vector<T> too long");
          }
          uVar6 = iVar5 + 1;
          uVar7 = (int)*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x130))) - (int)((int)(uintptr_t)piVar3) >> 2;
          if (uVar7 < uVar6) {
            if (-(uVar7 >> 1) - 1 < uVar7) {
              uVar7 = 0;
            }
            else {
              uVar7 = uVar7 + (uVar7 >> 1);
            }
            if (uVar7 < uVar6) {
              uVar7 = uVar6;
            }
            F_00673940(this_00,uVar7);
          }
        }
        if (*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 300))) != (undefined4 *)0x0) {
          **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 300))) = *(undefined4 *)(*this_00 + (*(int *)(gen_frame + 0x4)) * 4);
        }
      }
      else {
        if (piVar2 == *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x130)))) {
          iVar5 = (int)((int)piVar2 - *this_00) >> 2;
          if (iVar5 == -1) goto LAB_0065d93d;
          uVar6 = iVar5 + 1;
          uVar7 = (int)((int)*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x130))) - *this_00) >> 2;
          if (uVar7 < uVar6) {
            if (-(uVar7 >> 1) - 1 < uVar7) {
              uVar7 = 0;
            }
            else {
              uVar7 = uVar7 + (uVar7 >> 1);
            }
            if (uVar7 < uVar6) {
              uVar7 = uVar6;
            }
            F_00673940(this_00,uVar7);
            piVar9 = (*(int * PTR32 *)&gen_args[1]);
          }
        }
        if (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 300))) != (int *)0x0) {
          **((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 300))) = *piVar4;
        }
      }
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 300))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 300))) + 4;
      if (*(char *)((int)piVar9 + 0x11) == '\0') {
        piVar4 = (int *)piVar9[2];
        if (*(char *)((int)piVar4 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar4 + 0x11);
          piVar9 = piVar4;
          piVar4 = (int *)*piVar4;
          while ((*(int * PTR32 *)&gen_args[1]) = piVar9, cVar1 == '\0') {
            cVar1 = *(char *)(*piVar4 + 0x11);
            piVar9 = piVar4;
            piVar4 = (int *)*piVar4;
          }
        }
        else {
          cVar1 = *(char *)(piVar9[1] + 0x11);
          piVar2 = (int *)piVar9[1];
          piVar4 = piVar9;
          while ((piVar9 = piVar2, (*(int * PTR32 *)&gen_args[1]) = piVar9, cVar1 == '\0' && (piVar4 == (int *)piVar9[2])))
          {
            cVar1 = *(char *)(piVar9[1] + 0x11);
            piVar2 = (int *)piVar9[1];
            piVar4 = piVar9;
          }
        }
      }
    } while (piVar9 != *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x11c));
  }
  return 0;
}

/* ref: FUN_0065d950 */
uint F_0065d950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65d950u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((*(int *)&gen_args[1]) + 0xc) - 2;
  if (uVar1 < 4) {
    uVar1 = F_00674bc0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x148))),&(*(int *)&gen_args[1]));
  }
  return uVar1;
}

/* ref: FUN_0065d980 */
double F_0065d980(unsigned int gen_a0)
{
  GEN_ENTER(0x65d980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  int iVar3;
  double dVar4;
  
  *(uint *)((int)this + 0x11e44) = *(uint *)((int)this + 0x11e44) & 0xfffffffd;
  F_006202b0((undefined *)((int)this + 0x104a0));
  F_006202b0((undefined *)((int)this + 0x10390));
  F_00620460((undefined *)((int)this + 0x100e0));
  F_00620680((undefined *)((int)this + 0x10054));
  piVar2 = *(int * PTR32 *)((int)this + 0xee24);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0xee24) = 0;
  }
  F_0066e750((undefined *)((int)this + 0xedb4));
  F_00621320((undefined *)((int)this + 0xee30));
  piVar2 = *(int * PTR32 *)((int)this + 0xed88);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0xed88) = 0;
  }
  F_0066e3e0((undefined *)((int)this + 0xecd4));
  F_0064b770((undefined *)((int)this + 0xea30));
  F_0063da80((undefined *)((int)this + 0xaf90));
  F_0065c020((undefined *)((int)this + 0xad10));
  iVar1 = REFG(int, 0x1487c60);
  piVar2 = (int *)(REFG(int, 0x1487c60) + 0x90);
  iVar3 = *piVar2;
  if (iVar3 != 0) {
    F_0050c620(iVar3,0,0);
    *piVar2 = 0;
  }
  iVar3 = *(int *)(iVar1 + 0x8c);
  if (iVar3 != 0) {
    F_0050c620(iVar3,0,0);
    *(undefined4 *)(iVar1 + 0x8c) = 0;
  }
  if (*(int *)((int)this + 0xac9c) != 0) {
    F_0050c620(*(int *)((int)this + 0xac9c),0,0);
    *(undefined4 *)((int)this + 0xac9c) = 0;
  }
  *(uint *)(REFG(int, 0x137127c) + 0x11e44) = *(uint *)(REFG(int, 0x137127c) + 0x11e44) & 0xfffffffb;
  piVar2 = (int *)((int)this + 0xaba0);
  iVar3 = 0x23;
  do {
    if (*piVar2 != 0) {
      F_0050c620(*piVar2,0,0);
      *piVar2 = 0;
    }
    iVar1 = REFG(int, 0x13759f8);
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (*(int *)(REFG(int, 0x13759f8) + 0x28c) != 0) {
    F_0050c620(*(int *)(REFG(int, 0x13759f8) + 0x28c),0,0);
    *(undefined4 *)(iVar1 + 0x28c) = 0;
  }
  dVar4 = F_00b7dfe0(REFG(undefined4, 0x1487c58));
  return dVar4;
}

/* ref: Client::Graphics::Render::Light::vf5 */
uint F_0065dca0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x65dca0u, gen_a0, gen_a1, 0u, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  float * pfVar4;
  float10 fVar5;
  
  fVar5 = (float10)((float)GEN_TOF(((float10)*(float *)(REFG(undefined4, 0x13759f8) + 0x280) +
                          (float10)*(float *)(param_1 + 0x7c))));
  uVar3 = REFG(undefined4, 0x13759f8);
  if (!((float10)(float)(fVar5 * fVar5) <= (float10)param_3)) {
    F_0065d500(REFG(undefined4, 0x1371284),param_1);
    uVar3 = *(int *)(param_1 + 0xc) - 2;
    if (uVar3 < 4) {
      uVar1 = *(ushort *)(param_1 + 8);
      uVar3 = (uint)uVar1;
      if ((((byte)uVar1 >> 2 & 1) != 0) ||
         (bVar2 = (byte)uVar1 >> 3, uVar3 = (uint)CONCAT11((char)(uVar1 >> 8),bVar2),
         (bVar2 & 1) != 0)) {
        pfVar4 = (float *)(param_1 + 0x18);
        if ((float10)*(float *)(param_1 + 0x18) < (float10)*(float *)(param_1 + 0x14)) {
          pfVar4 = (float *)(param_1 + 0x14);
        }
        if (!((float10)*(float *)(param_1 + 0x1c) < (float10)*pfVar4)) {
          pfVar4 = (float *)(param_1 + 0x1c);
        }
        if (*(double *)&REFG(undefined, 0x109cac8) <
            (double)((float)GEN_TOF(((float10)*(float *)(param_1 + 0x20) * (float10)*pfVar4)))) {
          uVar3 = F_0065d950(REFG(undefined4, 0x1371280),param_1);
        }
      }
    }
  }
  return uVar3;
}

/* ref: Client::Graphics::Render::BGLocalCullingRenderObject::vf5 */
uint F_0065dd50(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x65dd50u, gen_a0, gen_a1, 0u, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = F_0065c0e0((undefined *)(REFG(int, 0x137127c) + 0xad10),param_1,param_2,
                       (undefined4)gen_fl2bits(param_3),param_4,param_5,param_6);
  return uVar1;
}

/* ref: Client::Graphics::Render::BGInstancingRenderObject::vf5 */
uint F_0065dd80(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x65dd80u, gen_a0, gen_a1, 0u, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = F_0065c0e0((undefined *)(REFG(int, 0x137127c) + 0xad10),param_1,param_2,
                       (undefined4)gen_fl2bits(param_3),param_4,param_5,param_6);
  return uVar1;
}

/* ref: FUN_0065ddb0 */
unsigned int F_0065ddb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65ddb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined * this_00;
  int iVar5;
  uint uVar6;
  int local_14;
  int * local_c;
  
  this_00 = REFG(undefined4, 0x1370c1c);
  iVar4 = REFG(int, 0x1370b90);
  uVar1 = *(uint *)((int)REFG(undefined4, 0x1370c1c) + 0x14);
  if (uVar1 != 0) {
    F_00b16250(REFG(undefined4, 0x1370c1c),param_1);
    uVar6 = 0;
    if (uVar1 != 0) {
      local_c = (int *)((int)this_00 + 0x18);
      do {
        *(uint *)((int)this_00 + 0x3924) = uVar6;
        iVar2 = *local_c;
        local_14 = *(int *)(iVar4 + 0x24);
        if (local_14 != 0) {
          iVar5 = 0;
          do {
            iVar3 = *(int *)(iVar4 + 4);
            *(uint *)(iVar3 + 8 + iVar5) = *(uint *)(iVar3 + 8 + iVar5) & 0x7ffffff | iVar2 << 0x1b;
            iVar5 = iVar5 + 0x5b0;
            local_14 = local_14 + -1;
          } while (local_14 != 0);
        }
        F_00b161d0(this_00,param_1,uVar6);
        *(undefined4 *)((int)this_00 + 0x3928) = *(undefined4 *)(&REFG(undefined, 0x13205f8) + iVar2 * 4);
        F_0065bc20(this);
        F_00b13dc0(this_00,uVar6,*(int *)((int)this + iVar2 * 0x358 + 0x2a4) + 0x90);
        F_0065db00(this,param_1,iVar2);
        local_c = local_c + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar1);
    }
    *(undefined4 *)((int)this_00 + 0x14) = 0;
    *(undefined4 *)((int)this_00 + 0x38) = 0;
  }
  return 0;
}

/* ref: FUN_0065e230 */
ushort F_0065e230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65e230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return *((ushort *)GEN_TOP((*(int *)((int)this + 0xb8) + 2 + (uint)(byte)param_1 * 0x3c)));
}

/* ref: FUN_0065e250 */
ushort F_0065e250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65e250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return *((ushort *)GEN_TOP((*(int *)((int)this + 0xb8) + 0x16 + (uint)(byte)param_1 * 0x3c)));
}

/* ref: FUN_0065e270 */
ushort F_0065e270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65e270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return *((ushort *)GEN_TOP((*(int *)((int)this + 0xb8) + 0xe + (uint)(byte)param_1 * 0x3c)));
}

/* ref: FUN_0065e290 */
ushort F_0065e290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65e290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return *((ushort *)GEN_TOP((*(int *)((int)this + 0xb8) + 0x1a + (uint)(byte)param_1 * 0x3c)));
}

/* ref: FUN_0065e2c0 */
uint F_0065e2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65e2c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)(ushort)param_2 * 0x10 + *(int *)(in_ecx + 200);
}

/* ref: FUN_0065e2e0 */
uint F_0065e2e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65e2e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(int *)(in_ecx + 0xcc) + (uint)(ushort)param_2 * 0xc;
}

/* ref: FUN_0065e330 */
uint F_0065e330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65e330u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(int *)(in_ecx + 0xb8) + 0xb4 + (uint)(byte)param_2 * 0x28;
}

/* ref: FUN_0065e350 */
uint F_0065e350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65e350u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(int *)(in_ecx + 0xbc) + (uint)(ushort)param_2 * 0x24;
}

/* ref: FUN_0065e370 */
uint F_0065e370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x65e370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return *(int *)((int)this + 0xbc) +
         ((uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0xb8) + (uint)(byte)param_1 * 0x3c))) +
         (uint)(ushort)param_2) * 0x24;
}

/* ref: FUN_0065e3a0 */
uint F_0065e3a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x65e3a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return *(int *)((int)this + 0xbc) +
         ((uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0xb8) + 0xc + (uint)(byte)param_1 * 0x3c))) +
         (uint)(ushort)param_2) * 0x24;
}

/* ref: FUN_0065e3d0 */
uint F_0065e3d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x65e3d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return *(int *)((int)this + 0xc0) +
         (uint)(byte)(*((char *)GEN_TOP((*(int *)((int)this + 0xb8) + 0x14 + (uint)(byte)param_1 * 0x3c))) +
                     (char)param_2) * 0x14;
}

/* ref: FUN_0065e480 */
uint F_0065e480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65e480u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)(ushort)param_2 * 0x20 + *(int *)(in_ecx + 0x100);
}

/* ref: FUN_0065e4c0 */
uint F_0065e4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65e4c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)(ushort)param_2 * 0x84 + *(int *)(in_ecx + 0xd8);
}

/* ref: FUN_0065e4e0 */
uint F_0065e4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65e4e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x108) + param_2 * 4)));
}

/* ref: FUN_0065e500 */
uint F_0065e500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x65e500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  return *((uint *)GEN_TOP((*(int *)((int)this + 0x108) +
                  ((uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0xb8) + (uint)(byte)param_1 * 0x3c))) +
                  param_2) * 4)));
}

/* ref: FUN_0065e530 */
uint F_0065e530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x65e530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = *(undefined4 *)((int)this + param_2 * 4 + 0x10c);
  param_1[1] = *(undefined4 *)((int)this + param_2 * 4 + 0x10c);
  return 2;
}

/* ref: FUN_0065e5c0 */
uint F_0065e5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65e5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return *((int *)GEN_TOP((*(int *)((int)this + 0xc4) + (uint)(ushort)param_1 * 4))) + 8 +
         *(int *)((int)this + 0xa8);
}

/* ref: FUN_0065e690 */
uint F_0065e690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65e690u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x7a0 + 0x16c0 + in_ecx;
}

/* ref: FUN_0065e6c0 */
unsigned int F_0065e6c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x65e6c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_004a13a0(this,0,param_1,param_2);
  return 0;
}

/* ref: FUN_0065e850 */
unsigned int F_0065e850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x65e850u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*param_2 / (float10)*param_3);
  param_1[1] = (float)((float10)param_2[1] / (float10)param_3[1]);
  param_1[2] = (float)((float10)param_2[2] / (float10)param_3[2]);
  return 0;
}

/* ref: FUN_0065e880 */
unsigned int F_0065e880(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x65e880u, gen_a0, 0u, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *param_1 = (float)(fVar1 / (float10)*param_3);
  param_1[1] = (float)(fVar1 / (float10)param_3[1]);
  param_1[2] = (float)(fVar1 / (float10)param_3[2]);
  return 0;
}

/* ref: FUN_0065e8b0 */
unsigned int F_0065e8b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65e8b0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)*(float *)param_2;
  fVar1 = (float10)((float)GEN_TOF(((float10)1 /
                          (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)*(float *)(param_2 + 8) *
                                                                (float10)*(float *)(param_2 + 8) +
                                                               (fVar1 * fVar1 +
                                                               (float10)*(float *)(param_2 + 4) *
                                                               (float10)*(float *)(param_2 + 4)))))))))));
  *param_1 = (float)(fVar1 * (float10)*(float *)param_2);
  param_1[1] = ((float)GEN_TOF((fVar1 * (float10)*(float *)(param_2 + 4))));
  param_1[2] = ((float)GEN_TOF((fVar1 * (float10)*(float *)(param_2 + 8))));
  return 0;
}

/* ref: FUN_0065e920 */
uint F_0065e920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65e920u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar3 = (float10)fVar1;
  fVar4 = (float10)*(float *)param_2;
  fVar2 = *(float *)(param_2 + 8);
  fVar5 = (float10)fVar2;
  fVar3 = (float10)((float)GEN_TOF(((float10)1 /
                          (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar5 * fVar5 +
                                                               (fVar4 * fVar4 + fVar3 * fVar3))))))))));
  *param_1 = (float)(fVar3 * (float10)*(float *)param_2);
  param_1[1] = (float)((float10)fVar1 * fVar3);
  param_1[2] = (float)(fVar3 * (float10)fVar2);
  return (uint)param_1;
}

/* ref: FUN_0065e990 */
uint F_0065e990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65e990u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  F_005fe2e0(param_1,param_2);
  return param_1;
}

/* ref: FUN_0065ea60 */
unsigned int F_0065ea60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65ea60u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *in_ecx = (float)((float10)*param_2 * (float10)*in_ecx);
  in_ecx[1] = (float)((float10)param_2[1] * (float10)in_ecx[1]);
  in_ecx[2] = (float)((float10)param_2[2] * (float10)in_ecx[2]);
  in_ecx[3] = (float)((float10)param_2[3] * (float10)in_ecx[3]);
  return 0;
}

/* ref: FUN_0065ea90 */
unsigned int F_0065ea90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65ea90u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *in_ecx = (float)((float10)*param_2 * (float10)*in_ecx);
  in_ecx[1] = (float)((float10)param_2[1] * (float10)in_ecx[1]);
  in_ecx[2] = (float)((float10)param_2[2] * (float10)in_ecx[2]);
  in_ecx[3] = (float)((float10)param_2[3] * (float10)in_ecx[3]);
  return 0;
}

/* ref: FUN_0065eb90 */
uint F_0065eb90(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x65eb90u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float in_xmm1 = (float)gen_a1;
  float in_xmm2 = (float)gen_a2;
  float in_xmm3 = (float)gen_a3;
  float in_xmm7 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_6);
  fVar3 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_6);
  fVar1 = REFG(float, 0x1087f04);
  in_ecx[2] = 0.0;
  *in_ecx = (float)fVar3;
  in_ecx[6] = 0.0;
  in_ecx[8] = 0.0;
  in_ecx[1] = (float)fVar2;
  in_ecx[9] = 0.0;
  in_ecx[10] = fVar1;
  in_ecx[4] = ((float)GEN_TOF(-(float10)(float)fVar2));
  in_ecx[0xc] = 0.0;
  in_ecx[0xd] = 0.0;
  in_ecx[5] = (float)fVar3;
  in_ecx[0xe] = 0.0;
  return (uint)in_ecx;
}

/* ref: FUN_0065ec10 */
unsigned int F_0065ec10(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x65ec10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  *(float *)(in_ecx + 0x30) = ((float)GEN_TOF(((float10)param_2 + (float10)*(float *)(in_ecx + 0x30))));
  *(float *)(in_ecx + 0x34) = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x34) + (float10)param_3)));
  *(float *)(in_ecx + 0x38) = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x38) + (float10)param_4)));
  return 0;
}

/* ref: FUN_0065ec40 */
int F_0065ec40(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x65ec40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float in_xmm1 = (float)gen_a1;
  float in_xmm2 = (float)gen_a2;
  float in_xmm3 = (float)gen_a3;
  float in_xmm7 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar5 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_6);
  fVar6 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_6);
  fVar1 = *(float *)(in_ecx + 8);
  fVar5 = (float10)(float)fVar5;
  fVar6 = (float10)(float)fVar6;
  fVar2 = *(float *)(in_ecx + 0x18);
  *(float *)(in_ecx + 8) = ((float)GEN_TOF((fVar5 * (float10)*(float *)(in_ecx + 4) + fVar6 * (float10)fVar1)))
  ;
  fVar3 = *(float *)(in_ecx + 0x28);
  *(float *)(in_ecx + 0x18) =
       ((float)GEN_TOF(((float10)fVar2 * fVar6 + (float10)*(float *)(in_ecx + 0x14) * fVar5)));
  fVar4 = *(float *)(in_ecx + 0x38);
  *(float *)(in_ecx + 4) = ((float)GEN_TOF((fVar6 * (float10)*(float *)(in_ecx + 4) - fVar5 * (float10)fVar1)))
  ;
  *(float *)(in_ecx + 0x14) =
       ((float)GEN_TOF((fVar6 * (float10)*(float *)(in_ecx + 0x14) - (float10)fVar2 * fVar5)));
  *(float *)(in_ecx + 0x28) =
       ((float)GEN_TOF(((float10)fVar3 * fVar6 + (float10)*(float *)(in_ecx + 0x24) * fVar5)));
  *(float *)(in_ecx + 0x38) =
       ((float)GEN_TOF(((float10)fVar4 * fVar6 + (float10)*(float *)(in_ecx + 0x34) * fVar5)));
  *(float *)(in_ecx + 0x24) =
       ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x24) * fVar6 - (float10)fVar3 * fVar5)));
  *(float *)(in_ecx + 0x34) =
       ((float)GEN_TOF((fVar6 * (float10)*(float *)(in_ecx + 0x34) - (float10)fVar4 * fVar5)));
  return in_ecx;
}

/* ref: FUN_0065ed60 */
float10 F_0065ed60(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x65ed60u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float in_xmm1 = (float)gen_a1;
  float in_xmm2 = (float)gen_a2;
  float in_xmm3 = (float)gen_a3;
  float in_xmm7 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 extraout_ST1;
  
  fVar5 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_6);
  fVar6 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_6);
  fVar1 = in_ecx[2];
  fVar6 = (float10)(float)fVar6;
  fVar5 = (float10)(float)fVar5;
  fVar2 = in_ecx[6];
  in_ecx[2] = (float)(fVar6 * (float10)fVar1 - fVar5 * (float10)*in_ecx);
  fVar3 = in_ecx[10];
  in_ecx[6] = (float)((float10)fVar2 * fVar6 - (float10)in_ecx[4] * fVar5);
  fVar4 = in_ecx[0xe];
  *in_ecx = (float)(fVar6 * (float10)*in_ecx + fVar5 * (float10)fVar1);
  in_ecx[4] = (float)((float10)in_ecx[4] * fVar6 + fVar5 * (float10)fVar2);
  in_ecx[10] = (float)((float10)fVar3 * fVar6 - (float10)in_ecx[8] * fVar5);
  in_ecx[0xe] = (float)((float10)fVar4 * fVar6 - (float10)in_ecx[0xc] * fVar5);
  in_ecx[8] = (float)((float10)fVar3 * fVar5 + (float10)in_ecx[8] * fVar6);
  in_ecx[0xc] = (float)(fVar5 * (float10)fVar4 + (float10)in_ecx[0xc] * fVar6);
  return extraout_ST1;
}

/* ref: FUN_0065ee80 */
float * F_0065ee80(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x65ee80u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float in_xmm1 = (float)gen_a1;
  float in_xmm2 = (float)gen_a2;
  float in_xmm3 = (float)gen_a3;
  float in_xmm7 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar5 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_6);
  fVar6 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_6);
  fVar1 = in_ecx[1];
  fVar5 = (float10)(float)fVar5;
  fVar6 = (float10)(float)fVar6;
  fVar2 = in_ecx[5];
  in_ecx[1] = (float)(fVar5 * (float10)*in_ecx + fVar6 * (float10)fVar1);
  fVar3 = in_ecx[9];
  in_ecx[5] = (float)((float10)fVar2 * fVar6 + (float10)in_ecx[4] * fVar5);
  fVar4 = in_ecx[0xd];
  *in_ecx = (float)(fVar6 * (float10)*in_ecx - fVar5 * (float10)fVar1);
  in_ecx[4] = (float)(fVar6 * (float10)in_ecx[4] - (float10)fVar2 * fVar5);
  in_ecx[9] = (float)((float10)fVar3 * fVar6 + (float10)in_ecx[8] * fVar5);
  in_ecx[0xd] = (float)((float10)fVar4 * fVar6 + (float10)in_ecx[0xc] * fVar5);
  in_ecx[8] = (float)((float10)in_ecx[8] * fVar6 - (float10)fVar3 * fVar5);
  in_ecx[0xc] = (float)(fVar6 * (float10)in_ecx[0xc] - (float10)fVar4 * fVar5);
  return in_ecx;
}

/* ref: FUN_0065efa0 */
unsigned int F_0065efa0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x65efa0u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)(fVar1 * (float10)*in_ecx);
  fVar2 = (float10)param_3;
  in_ecx[1] = (float)(fVar2 * (float10)in_ecx[1]);
  fVar3 = (float10)param_4;
  in_ecx[2] = (float)(fVar3 * (float10)in_ecx[2]);
  in_ecx[4] = (float)(fVar1 * (float10)in_ecx[4]);
  in_ecx[5] = (float)((float10)in_ecx[5] * fVar2);
  in_ecx[6] = (float)(fVar3 * (float10)in_ecx[6]);
  in_ecx[8] = (float)((float10)in_ecx[8] * fVar1);
  in_ecx[9] = (float)(fVar2 * (float10)in_ecx[9]);
  in_ecx[10] = (float)((float10)in_ecx[10] * fVar3);
  in_ecx[0xc] = (float)((float10)in_ecx[0xc] * fVar1);
  in_ecx[0xd] = (float)(fVar2 * (float10)in_ecx[0xd]);
  in_ecx[0xe] = (float)(fVar3 * (float10)in_ecx[0xe]);
  return 0;
}

/* ref: FUN_0065f020 */
unsigned int F_0065f020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65f020u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *in_ecx = (float)((float10)*param_2 * (float10)*in_ecx);
  in_ecx[1] = (float)((float10)param_2[1] * (float10)in_ecx[1]);
  in_ecx[2] = (float)((float10)param_2[2] * (float10)in_ecx[2]);
  in_ecx[4] = (float)((float10)*param_2 * (float10)in_ecx[4]);
  in_ecx[5] = (float)((float10)in_ecx[5] * (float10)param_2[1]);
  in_ecx[6] = (float)((float10)param_2[2] * (float10)in_ecx[6]);
  in_ecx[8] = (float)((float10)in_ecx[8] * (float10)*param_2);
  in_ecx[9] = (float)((float10)in_ecx[9] * (float10)param_2[1]);
  in_ecx[10] = (float)((float10)in_ecx[10] * (float10)param_2[2]);
  in_ecx[0xc] = (float)((float10)*param_2 * (float10)in_ecx[0xc]);
  in_ecx[0xd] = (float)((float10)in_ecx[0xd] * (float10)param_2[1]);
  in_ecx[0xe] = (float)((float10)param_2[2] * (float10)in_ecx[0xe]);
  return 0;
}

/* ref: FUN_0065f0a0 */
unsigned int F_0065f0a0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x65f0a0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x1087f04);
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[0xb] = 0;
  in_ecx[0xc] = (undefined4)gen_fl2bits(param_2);
  in_ecx[0xd] = (undefined4)gen_fl2bits(param_3);
  *in_ecx = uVar1;
  in_ecx[5] = uVar1;
  in_ecx[10] = uVar1;
  in_ecx[0xe] = (undefined4)gen_fl2bits(param_4);
  in_ecx[0xf] = uVar1;
  return 0;
}

/* ref: FUN_0065f120 */
unsigned int F_0065f120(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x65f120u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float fVar1;
  
  *in_ecx = param_2;
  in_ecx[1] = 0.0;
  in_ecx[2] = 0.0;
  in_ecx[3] = 0.0;
  in_ecx[4] = 0.0;
  in_ecx[5] = param_3;
  in_ecx[6] = 0.0;
  in_ecx[7] = 0.0;
  in_ecx[8] = 0.0;
  in_ecx[9] = 0.0;
  in_ecx[0xb] = 0.0;
  in_ecx[0xc] = 0.0;
  in_ecx[0xd] = 0.0;
  in_ecx[0xe] = 0.0;
  fVar1 = REFG(float, 0x1087f04);
  in_ecx[10] = param_4;
  in_ecx[0xf] = fVar1;
  return 0;
}

/* ref: FUN_0065f1a0 */
unsigned int F_0065f1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65f1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_2;
  in_ecx[1] = 0;
  *in_ecx = uVar1;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = param_2[1];
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  uVar1 = param_2[2];
  in_ecx[0xb] = 0;
  in_ecx[10] = uVar1;
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  in_ecx[0xe] = 0;
  in_ecx[0xf] = GEN_FLT_TO(in_ecx[0xf], REFG(float, 0x1087f04));
  return 0;
}

/* ref: FUN_0065f270 */
unsigned int F_0065f270(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x65f270u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = (float10)in_ecx[3];
  fVar2 = (float10)param_2;
  *in_ecx = (float)((float10)*in_ecx + fVar2 * fVar1);
  fVar3 = (float10)param_3;
  in_ecx[1] = (float)((float10)in_ecx[1] + fVar3 * fVar1);
  fVar4 = (float10)param_4;
  in_ecx[2] = (float)((float10)in_ecx[2] + fVar4 * fVar1);
  fVar1 = (float10)in_ecx[7];
  in_ecx[4] = (float)(fVar1 * fVar2 + (float10)in_ecx[4]);
  in_ecx[5] = (float)(fVar1 * fVar3 + (float10)in_ecx[5]);
  in_ecx[6] = (float)(fVar1 * fVar4 + (float10)in_ecx[6]);
  fVar1 = (float10)in_ecx[0xb];
  in_ecx[8] = (float)(fVar1 * fVar2 + (float10)in_ecx[8]);
  in_ecx[9] = (float)(fVar1 * fVar3 + (float10)in_ecx[9]);
  in_ecx[10] = (float)(fVar1 * fVar4 + (float10)in_ecx[10]);
  fVar1 = (float10)in_ecx[0xf];
  in_ecx[0xc] = (float)((float10)in_ecx[0xc] + fVar1 * fVar2);
  in_ecx[0xd] = (float)(fVar3 * fVar1 + (float10)in_ecx[0xd]);
  in_ecx[0xe] = (float)(fVar1 * fVar4 + (float10)in_ecx[0xe]);
  return 0;
}

/* ref: FUN_0065f330 */
unsigned int F_0065f330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65f330u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)in_ecx[3];
  *in_ecx = (float)(fVar1 * (float10)*(float *)param_2 + (float10)*in_ecx);
  in_ecx[1] = ((float)GEN_TOF((fVar1 * (float10)*(float *)(param_2 + 4) + (float10)in_ecx[1])));
  in_ecx[2] = ((float)GEN_TOF((fVar1 * (float10)*(float *)(param_2 + 8) + (float10)in_ecx[2])));
  fVar1 = (float10)in_ecx[7];
  in_ecx[4] = (float)(fVar1 * (float10)*(float *)param_2 + (float10)in_ecx[4]);
  in_ecx[5] = ((float)GEN_TOF((fVar1 * (float10)*(float *)(param_2 + 4) + (float10)in_ecx[5])));
  in_ecx[6] = ((float)GEN_TOF((fVar1 * (float10)*(float *)(param_2 + 8) + (float10)in_ecx[6])));
  fVar1 = (float10)in_ecx[0xb];
  in_ecx[8] = (float)(fVar1 * (float10)*(float *)param_2 + (float10)in_ecx[8]);
  in_ecx[9] = ((float)GEN_TOF((fVar1 * (float10)*(float *)(param_2 + 4) + (float10)in_ecx[9])));
  in_ecx[10] = ((float)GEN_TOF((fVar1 * (float10)*(float *)(param_2 + 8) + (float10)in_ecx[10])));
  fVar1 = (float10)in_ecx[0xf];
  in_ecx[0xc] = (float)(fVar1 * (float10)*(float *)param_2 + (float10)in_ecx[0xc]);
  in_ecx[0xd] = ((float)GEN_TOF((fVar1 * (float10)*(float *)(param_2 + 4) + (float10)in_ecx[0xd])));
  in_ecx[0xe] = ((float)GEN_TOF((fVar1 * (float10)*(float *)(param_2 + 8) + (float10)in_ecx[0xe])));
  return 0;
}

/* ref: FUN_0065f3e0 */
uint F_0065f3e0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x65f3e0u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)(fVar1 * (float10)*in_ecx);
  fVar2 = (float10)param_3;
  in_ecx[1] = (float)(fVar2 * (float10)in_ecx[1]);
  fVar3 = (float10)param_4;
  in_ecx[2] = (float)(fVar3 * (float10)in_ecx[2]);
  in_ecx[4] = (float)(fVar1 * (float10)in_ecx[4]);
  in_ecx[5] = (float)((float10)in_ecx[5] * fVar2);
  in_ecx[6] = (float)(fVar3 * (float10)in_ecx[6]);
  in_ecx[8] = (float)((float10)in_ecx[8] * fVar1);
  in_ecx[9] = (float)(fVar2 * (float10)in_ecx[9]);
  in_ecx[10] = (float)((float10)in_ecx[10] * fVar3);
  in_ecx[0xc] = (float)((float10)in_ecx[0xc] * fVar1);
  in_ecx[0xd] = (float)(fVar2 * (float10)in_ecx[0xd]);
  in_ecx[0xe] = (float)(fVar3 * (float10)in_ecx[0xe]);
  return (uint)in_ecx;
}

/* ref: FUN_0065f460 */
unsigned int F_0065f460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65f460u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  F_004f1f30(in_ecx,param_2);
  return 0;
}

/* ref: FUN_0065f470 */
unsigned int F_0065f470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65f470u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[4];
  in_ecx[2] = param_2[8];
  in_ecx[3] = param_2[0xc];
  in_ecx[4] = param_2[1];
  in_ecx[5] = param_2[5];
  in_ecx[6] = param_2[9];
  in_ecx[7] = param_2[0xd];
  in_ecx[8] = param_2[2];
  in_ecx[9] = param_2[6];
  in_ecx[10] = param_2[10];
  in_ecx[0xb] = param_2[0xe];
  return 0;
}

/* ref: FUN_0065f550 */
unsigned int F_0065f550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65f550u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[4];
  in_ecx[2] = param_2[8];
  in_ecx[3] = param_2[0xc];
  in_ecx[4] = param_2[1];
  in_ecx[5] = param_2[5];
  in_ecx[6] = param_2[9];
  in_ecx[7] = param_2[0xd];
  in_ecx[8] = param_2[2];
  in_ecx[9] = param_2[6];
  in_ecx[10] = param_2[10];
  in_ecx[0xb] = param_2[0xe];
  in_ecx[0xc] = param_2[3];
  in_ecx[0xd] = param_2[7];
  in_ecx[0xe] = param_2[0xb];
  in_ecx[0xf] = param_2[0xf];
  return 0;
}

/* ref: FUN_0065f5c0 */
unsigned int F_0065f5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65f5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  *in_ecx = *param_2;
  in_ecx[1] = param_2[4];
  in_ecx[2] = param_2[8];
  in_ecx[3] = param_2[0xc];
  in_ecx[4] = param_2[1];
  in_ecx[5] = param_2[5];
  in_ecx[6] = param_2[9];
  in_ecx[7] = param_2[0xd];
  in_ecx[8] = param_2[2];
  in_ecx[9] = param_2[6];
  in_ecx[10] = param_2[10];
  uVar1 = param_2[0xe];
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  in_ecx[0xb] = uVar1;
  in_ecx[0xe] = 0;
  in_ecx[0xf] = GEN_FLT_TO(in_ecx[0xf], REFG(float, 0x1087f04));
  return 0;
}

/* ref: FUN_0065f640 */
uint F_0065f640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65f640u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0065f650 */
byte F_0065f650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65f650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  if ((!((float10)*(float *)((int)this + 0x10) < (float10)param_1[4]) &&
       !((float10)*param_1 < (float10)*(float *)this)) &&
     (!((float10)*(float *)((int)this + 0x14) < (float10)param_1[5]) &&
      !((float10)param_1[1] < (float10)*(float *)((int)this + 4)))) {
    if ((float10)*(float *)((int)this + 0x18) < (float10)param_1[6]) {
      return 0;
    }
    return !((float10)param_1[2] < (float10)*(float *)((int)this + 8));
  }
  return 0;
}

/* ref: FUN_0065f700 */
uint F_0065f700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65f700u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_0065f720 */
unsigned int F_0065f720(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x65f720u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xc) = param_2;
  return 0;
}

/* ref: FUN_0065f740 */
uint F_0065f740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65f740u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  if ((float10)((float)GEN_TOF(((float10)(float)((float10)in_ecx[2] - (float10)param_2[2]) *
                       (float10)(float)((float10)in_ecx[2] - (float10)param_2[2]) +
                      ((float10)(float)((float10)in_ecx[1] - (float10)param_2[1]) *
                       (float10)(float)((float10)in_ecx[1] - (float10)param_2[1]) +
                      (float10)(float)((float10)*in_ecx - (float10)*param_2) *
                      (float10)(float)((float10)*in_ecx - (float10)*param_2))))) <=
      (float10)(float)((float10)param_2[3] + (float10)in_ecx[3]) *
      (float10)(float)((float10)param_2[3] + (float10)in_ecx[3])) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0065f7d0 */
unsigned int F_0065f7d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65f7d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_005ff0f0(this,param_1);
  return 0;
}

/* ref: FUN_0065f7e0 */
unsigned int F_0065f7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65f7e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_2 + 0x44);
  fVar2 = *(float *)(param_2 + 0x40);
  fVar3 = *(float *)(param_2 + 0x48);
  *in_ecx = *(undefined4 *)(param_2 + 0x30);
  in_ecx[1] = *(undefined4 *)(param_2 + 0x34);
  in_ecx[2] = *(undefined4 *)(param_2 + 0x38);
  in_ecx[3] = (undefined4)
              gen_fl2bits(((float)GEN_TOF(((float10)fVar3 * (float10)fVar3 +
                                 ((float10)fVar2 * (float10)fVar2 + (float10)fVar1 * (float10)fVar1)
                                 ))));
  return 0;
}

/* ref: FUN_0065f840 */
unsigned int F_0065f840(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x65f840u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 uVar1;
  
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  uVar1 = param_2[2];
  in_ecx[3] = (undefined4)gen_fl2bits(param_3);
  in_ecx[2] = uVar1;
  return 0;
}

/* ref: FUN_0065f870 */
uint F_0065f870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x65f870u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  fVar1 = *param_2;
  fVar2 = *param_1;
  fVar3 = *param_3;
  fVar4 = (float10)(float)((float10)param_3[2] - (float10)param_2[2]);
  fVar5 = (float10)(float)((float10)param_2[1] - (float10)param_1[1]);
  fVar6 = (float10)(float)((float10)param_3[1] - (float10)param_2[1]);
  fVar7 = (float10)(float)((float10)param_2[2] - (float10)param_1[2]);
  *(float *)this = (float)(fVar5 * fVar4 - fVar7 * fVar6);
  fVar8 = (float10)(float)((float10)fVar3 - (float10)fVar1);
  fVar9 = (float10)(float)((float10)fVar1 - (float10)fVar2);
  *(float *)((int)this + 4) = (float)(fVar8 * fVar7 - fVar9 * fVar4);
  *(float *)((int)this + 8) = (float)(fVar6 * fVar9 - fVar5 * fVar8);
  F_004bd580(this);
  *(float *)((int)this + 0xc) =
       ((float)GEN_TOF(((float10)param_1[2] * (float10)*(float *)((int)this + 8) +
              ((float10)param_1[1] * (float10)*(float *)((int)this + 4) +
              (float10)*param_1 * (float10)*(float *)this))));
  return (uint)this;
}

/* ref: FUN_0065f950 */
undefined * F_0065f950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x65f950u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  fVar1 = *param_2;
  fVar2 = *param_1;
  fVar3 = *param_3;
  fVar4 = (float10)(float)((float10)param_3[2] - (float10)param_2[2]);
  fVar5 = (float10)(float)((float10)param_2[1] - (float10)param_1[1]);
  fVar6 = (float10)(float)((float10)param_3[1] - (float10)param_2[1]);
  fVar7 = (float10)(float)((float10)param_2[2] - (float10)param_1[2]);
  *(float *)this = (float)(fVar5 * fVar4 - fVar7 * fVar6);
  fVar8 = (float10)(float)((float10)fVar3 - (float10)fVar1);
  fVar9 = (float10)(float)((float10)fVar1 - (float10)fVar2);
  *(float *)((int)this + 4) = (float)(fVar8 * fVar7 - fVar9 * fVar4);
  *(float *)((int)this + 8) = (float)(fVar6 * fVar9 - fVar5 * fVar8);
  F_004bd580(this);
  *(float *)((int)this + 0xc) =
       ((float)GEN_TOF(((float10)param_1[2] * (float10)*(float *)((int)this + 8) +
              ((float10)param_1[1] * (float10)*(float *)((int)this + 4) +
              (float10)*param_1 * (float10)*(float *)this))));
  return this;
}

/* ref: FUN_0065fa50 */
unsigned int F_0065fa50(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x65fa50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xc) = param_2;
  return 0;
}

/* ref: FUN_0065fbc0 */
uint F_0065fbc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65fbc0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)(param_2 + 8) * (float10)in_ecx[2] +
                                           ((float10)*(float *)param_2 * (float10)*in_ecx +
                                           (float10)*(float *)(param_2 + 4) * (float10)in_ecx[1])))) -
                          (float10)in_ecx[3])));
  if (fVar1 * (float10)((float)GEN_TOF(ABS(fVar1))) <= (float10)*(float *)(param_2 + 0xc)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0065fc10 */
uint F_0065fc10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65fc10u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)(param_2 + 8) * (float10)in_ecx[2] +
                                           ((float10)*(float *)param_2 * (float10)*in_ecx +
                                           (float10)*(float *)(param_2 + 4) * (float10)in_ecx[1])))) -
                          (float10)in_ecx[3])));
  if (fVar1 * (float10)((float)GEN_TOF(ABS(fVar1))) <= -(float10)*(float *)(param_2 + 0xc)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0065fc60 */
uint F_0065fc60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65fc60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  
  (*(uint *)(gen_frame + 0xcc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd0);
  F_004f19e0(((undefined1 *)(gen_frame + 0x80)),param_1);
  (*(undefined4 *)(gen_frame + 0x70)) = REFG(float, 0x1090708);
  (*(undefined4 *)(gen_frame + 0x74)) = REFG(float, 0x1090708);
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x64)) = REFG(float, 0x1090708);
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x54)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x1090708);
  (*(undefined4 *)(gen_frame + 0x24)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = REFG(float, 0x1090708);
  (*(undefined4 *)(gen_frame + 0x34)) = REFG(float, 0x1090708);
  (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x40)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x44)) = REFG(float, 0x1090708);
  (*(undefined4 *)(gen_frame + 0x48)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x10)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x14)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x0)) = REFG(float, 0x1090708);
  (*(undefined4 *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
  F_004eeb30(&(*(undefined4 *)(gen_frame + 0x70)),(uint)((undefined1 *)(gen_frame + 0x80)));
  F_004eeb30(&(*(undefined4 *)(gen_frame + 0x60)),(uint)((undefined1 *)(gen_frame + 0x80)));
  F_004eeb30(&(*(undefined4 *)(gen_frame + 0x50)),(uint)((undefined1 *)(gen_frame + 0x80)));
  F_004eeb30(&(*(undefined4 *)(gen_frame + 0x20)),(uint)((undefined1 *)(gen_frame + 0x80)));
  F_004eeb30(&(*(undefined4 *)(gen_frame + 0x30)),(uint)((undefined1 *)(gen_frame + 0x80)));
  F_004eeb30(&(*(undefined4 *)(gen_frame + 0x40)),(uint)((undefined1 *)(gen_frame + 0x80)));
  F_004eeb30(&(*(undefined4 *)(gen_frame + 0x10)),(uint)((undefined1 *)(gen_frame + 0x80)));
  F_004eeb30(&(*(undefined4 *)(gen_frame + 0x0)),(uint)((undefined1 *)(gen_frame + 0x80)));
  F_0065f950(this,&(*(undefined4 *)(gen_frame + 0x70)),&(*(undefined4 *)(gen_frame + 0x60)),&(*(undefined4 *)(gen_frame + 0x50)));
  F_0065f950((undefined *)((int)this + 0x10),&(*(undefined4 *)(gen_frame + 0x50)),&(*(undefined4 *)(gen_frame + 0x60)),&(*(undefined4 *)(gen_frame + 0x40)));
  F_0065f950((undefined *)((int)this + 0x20),&(*(undefined4 *)(gen_frame + 0x70)),&(*(undefined4 *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x0)));
  F_0065f950((undefined *)((int)this + 0x30),&(*(undefined4 *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x50)),&(*(undefined4 *)(gen_frame + 0x10)));
  F_0065f950((undefined *)((int)this + 0x40),&(*(undefined4 *)(gen_frame + 0x60)),&(*(undefined4 *)(gen_frame + 0x70)),&(*(undefined4 *)(gen_frame + 0x30)));
  F_0065f950((undefined *)((int)this + 0x50),&(*(undefined4 *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x10)),&(*(undefined4 *)(gen_frame + 0x40)));
  F_00c47745((*(uint *)(gen_frame + 0xcc)) ^ (uint)(uint)(gen_frame + 0xd0));
  return (uint)this;
}

/* ref: FUN_0065fe70 */
uint F_0065fe70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65fe70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + in_ecx;
}

/* ref: FUN_0065fe80 */
unsigned int F_0065fe80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65fe80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  return 0;
}

/* ref: FUN_0065feb0 */
byte F_0065feb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x65feb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * pfVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  uVar2 = 0;
  pfVar1 = (float *)((int)this + 4);
  do {
    fVar3 = (float10)*pfVar1;
    fVar4 = (float10)pfVar1[-1];
    fVar5 = (float10)pfVar1[1];
    if (!((float10)((float)GEN_TOF(((fVar3 * (float10)param_1[0xd] + fVar4 * (float10)param_1[0xc]) +
                          fVar5 * (float10)param_1[0xe]))) - (float10)pfVar1[2] <=
         (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF((((float10)param_1[8] * fVar4 +
                                                               (float10)param_1[9] * fVar3) +
                                                              (float10)param_1[10] * fVar5)))))) *
                          (float10)param_1[0x12] +
                         ((float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)param_1[2] * fVar5 +
                                                              (fVar4 * (float10)*param_1 +
                                                              fVar3 * (float10)param_1[1]))))))) *
                          (float10)param_1[0x10] +
                         (float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)param_1[6] * fVar5 +
                                                             (fVar4 * (float10)param_1[4] +
                                                             fVar3 * (float10)param_1[5]))))))) *
                         (float10)param_1[0x11])))))) {
      return 0;
    }
    uVar2 = uVar2 + 1;
    pfVar1 = pfVar1 + 4;
  } while (uVar2 < 6);
  return 1;
}

/* ref: FUN_00660025 */
byte F_00660025(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x660025u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  uint in_edx = (uint)gen_a1;
  undefined4 in_ebx = (undefined4)gen_a2;
  int in_ebp = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  while( true ) {
    if (5 < in_edx) {
      return 1;
    }
    *(undefined4 *)(in_ebp + -4) = in_ecx[4];
    *(undefined4 *)(in_ebp + -0x10) = in_ecx[3];
    *(undefined4 *)(in_ebp + -0x18) = in_ecx[5];
    fVar5 = (float10)*(float *)(in_ebp + -4);
    fVar6 = (float10)*(float *)(in_ebp + -0x10);
    fVar7 = (float10)*(float *)(in_ebp + -0x18);
    *(float *)(in_ebp + -0x18) =
         ((float)GEN_TOF(((fVar5 * (float10)*(float *)(in_ebp + -8) +
                 fVar6 * (float10)*(float *)(in_ebp + -0xc)) +
                fVar7 * (float10)*(float *)(in_ebp + -0x14))));
    fVar1 = *(float *)(in_ebp + -0x18);
    fVar2 = gen_bits2f(in_ecx[6]);
    *(float *)(in_ebp + -0x18) =
         ((float)GEN_TOF(((float10)*(float *)(in_ebp + -0x38) * fVar7 +
                (fVar6 * (float10)*(float *)(in_ebp + -0x40) +
                fVar5 * (float10)*(float *)(in_ebp + -0x3c)))));
    *(float *)(in_ebp + -0x18) = ((float)GEN_TOF(ABS((float10)*(float *)(in_ebp + -0x18))));
    fVar3 = *(float *)(in_ebp + -0x18);
    *(float *)(in_ebp + -0x18) =
         ((float)GEN_TOF(((float10)*(float *)(in_ebp + -0x48) * fVar7 +
                (fVar6 * (float10)*(float *)(in_ebp + -0x50) +
                fVar5 * (float10)*(float *)(in_ebp + -0x4c)))));
    *(float *)(in_ebp + -0x18) = ((float)GEN_TOF(ABS((float10)*(float *)(in_ebp + -0x18))));
    fVar4 = *(float *)(in_ebp + -0x18);
    *(float *)(in_ebp + -0x18) =
         ((float)GEN_TOF((((float10)*(float *)(in_ebp + -0x60) * fVar6 +
                 (float10)*(float *)(in_ebp + -0x5c) * fVar5) +
                (float10)*(float *)(in_ebp + -0x58) * fVar7)));
    *(float *)(in_ebp + -0x18) = ((float)GEN_TOF(ABS((float10)*(float *)(in_ebp + -0x18))));
    *(float *)(in_ebp + -0x18) =
         ((float)GEN_TOF(((float10)*(float *)(in_ebp + -0x18) * (float10)*(float *)(in_ebp + -0x24) +
                ((float10)fVar4 * (float10)*(float *)(in_ebp + -0x20) +
                (float10)fVar3 * (float10)*(float *)(in_ebp + -0x1c)))));
    if (!((float10)fVar1 - (float10)fVar2 <= (float10)*(float *)(in_ebp + -0x18))) break;
    in_edx = in_edx + 1;
    in_ecx = in_ecx + 4;
  }
  return 0;
}

/* ref: FUN_00660050 */
byte F_00660050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x660050u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * pfVar1;
  uint uVar2;
  float10 fVar3;
  
  uVar2 = 0;
  pfVar1 = (float *)(param_1 + 8);
  do {
    fVar3 = (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*pfVar1 * (float10)*(float *)(param_2 + 8) +
                                             ((float10)pfVar1[-1] * (float10)*(float *)(param_2 + 4)
                                             + (float10)pfVar1[-2] * (float10)*(float *)param_2)))) -
                            (float10)pfVar1[1])));
    if (!(fVar3 * (float10)((float)GEN_TOF(ABS(fVar3))) <= (float10)*(float *)(param_2 + 0xc))) {
      return 0;
    }
    uVar2 = uVar2 + 1;
    pfVar1 = pfVar1 + 4;
  } while (uVar2 < 6);
  return 1;
}

/* ref: FUN_006600f0 */
byte F_006600f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6600f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * pfVar1;
  uint uVar2;
  float10 fVar3;
  
  uVar2 = 0;
  pfVar1 = (float *)(param_1 + 8);
  do {
    fVar3 = (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*pfVar1 * (float10)*(float *)(param_2 + 8) +
                                             ((float10)pfVar1[-1] * (float10)*(float *)(param_2 + 4)
                                             + (float10)pfVar1[-2] * (float10)*(float *)param_2)))) -
                            (float10)pfVar1[1])));
    if (!(fVar3 * (float10)((float)GEN_TOF(ABS(fVar3))) <=
         ((float10)GEN_TOD(gen_bits2f(*(uint *)(param_2 + 0xc) ^ REFG(uint, 0x10920d0)))))) {
      return 0;
    }
    uVar2 = uVar2 + 1;
    pfVar1 = pfVar1 + 4;
  } while (uVar2 < 6);
  return 1;
}

/* ref: FUN_006601a0 */
byte F_006601a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6601a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  float * pfVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float local_8;
  
  fVar6 = (float10)0.0;
  fVar7 = (float10)REFG(float, 0x1090998);
  uVar4 = 0;
  pfVar3 = (float *)(param_2 + 0x10);
  iVar5 = param_1 - param_2;
  do {
    fVar8 = (float10)*(float *)(iVar5 + (int)pfVar3);
    if ((float10)((float)GEN_TOF(ABS(fVar8))) <= (float10)REFG(float, 0x10905c4)) {
      fVar8 = (float10)*(float *)(param_1 + uVar4 * 4);
      if (((!GEN_ISNAN((float10)pfVar3[-4]) && !GEN_ISNAN(fVar8)) && !((float10)pfVar3[-4] <= fVar8)) ||
         ((!GEN_ISNAN(fVar8) && !GEN_ISNAN((float10)*pfVar3)) && !(fVar8 <= (float10)*pfVar3))) {
        return 0;
      }
    }
    else {
      fVar9 = (float10)*(float *)(param_1 + uVar4 * 4);
      fVar8 = (float10)(float)((float10)1 / fVar8);
      fVar1 = ((float)GEN_TOF((fVar8 * ((float10)pfVar3[-4] - fVar9))));
      fVar2 = ((float)GEN_TOF((((float10)*pfVar3 - fVar9) * fVar8)));
      param_2 = (uint)gen_fl2bits(fVar1);
      local_8 = fVar2;
      if ((float10)fVar2 < (float10)fVar1) {
        param_2 = (uint)gen_fl2bits(fVar2);
        local_8 = fVar1;
      }
      if (fVar6 < ((float10)GEN_TOD(gen_bits2f(param_2)))) {
        fVar6 = ((float10)GEN_TOD(gen_bits2f(param_2)));
      }
      if ((float10)local_8 < fVar7) {
        fVar7 = (float10)local_8;
      }
      if ((!GEN_ISNAN(fVar6) && !GEN_ISNAN(fVar7)) && !(fVar6 <= fVar7)) {
        return 0;
      }
    }
    uVar4 = uVar4 + 1;
    pfVar3 = pfVar3 + 1;
    if (2 < uVar4) {
      return 1;
    }
  } while( true );
}

/* ref: FUN_006602f0 */
byte F_006602f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6602f0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float * pfVar4;
  uint uVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float local_8;
  
  fVar7 = (float10)0.0;
  fVar8 = (float10)REFG(float, 0x1090998);
  uVar5 = 0;
  pfVar4 = (float *)(param_2 + 0x10);
  iVar6 = (int)param_1 - param_2;
  do {
    fVar9 = (float10)*(float *)(iVar6 + (int)pfVar4);
    if ((float10)((float)GEN_TOF(ABS(fVar9))) <= (float10)REFG(float, 0x10905c4)) {
      fVar9 = (float10)param_1[uVar5];
      if (((!GEN_ISNAN((float10)pfVar4[-4]) && !GEN_ISNAN(fVar9)) && !((float10)pfVar4[-4] <= fVar9)) ||
         ((!GEN_ISNAN(fVar9) && !GEN_ISNAN((float10)*pfVar4)) && !(fVar9 <= (float10)*pfVar4))) {
        return 0;
      }
    }
    else {
      fVar9 = (float10)(float)((float10)1 / fVar9);
      fVar1 = ((float)GEN_TOF((fVar9 * ((float10)pfVar4[-4] - (float10)param_1[uVar5]))));
      fVar2 = ((float)GEN_TOF((((float10)*pfVar4 - (float10)param_1[uVar5]) * fVar9)));
      param_2 = (uint)gen_fl2bits(fVar1);
      local_8 = fVar2;
      if ((float10)fVar2 < (float10)fVar1) {
        param_2 = (uint)gen_fl2bits(fVar2);
        local_8 = fVar1;
      }
      if (fVar7 < ((float10)GEN_TOD(gen_bits2f(param_2)))) {
        fVar7 = ((float10)GEN_TOD(gen_bits2f(param_2)));
      }
      if ((float10)local_8 < fVar8) {
        fVar8 = (float10)local_8;
      }
      if ((!GEN_ISNAN(fVar7) && !GEN_ISNAN(fVar8)) && !(fVar7 <= fVar8)) {
        return 0;
      }
    }
    uVar5 = uVar5 + 1;
    pfVar4 = pfVar4 + 1;
    if (2 < uVar5) {
      *param_3 = param_1[4];
      param_3[1] = param_1[5];
      param_3[2] = param_1[6];
      fVar1 = *param_3;
      *param_3 = (float)((float10)fVar1 * fVar7);
      fVar2 = param_3[1];
      param_3[1] = (float)((float10)fVar2 * fVar7);
      fVar3 = param_3[2];
      param_3[2] = (float)((float10)fVar3 * fVar7);
      *param_3 = ((float)GEN_TOF(((float10)*param_1 + (float10)(float)((float10)fVar1 * fVar7))));
      param_3[1] = ((float)GEN_TOF(((float10)param_1[1] + (float10)(float)((float10)fVar2 * fVar7))));
      param_3[2] = ((float)GEN_TOF(((float10)(float)((float10)fVar3 * fVar7) + (float10)param_1[2])));
      return 1;
    }
  } while( true );
}

/* ref: FUN_00660490 */
unsigned int F_00660490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x660490u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[4] = param_2[4];
  in_ecx[5] = param_2[5];
  in_ecx[6] = param_2[6];
  return 0;
}

/* ref: FUN_006604c0 */
uint F_006604c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6604c0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  F_004ee670(param_1,param_2,param_3);
  F_004ee850(param_1 + 0x10,param_2 + 0x10,param_3);
  return param_1;
}

/* ref: FUN_006604f0 */
unsigned int F_006604f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6604f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[4] = *param_3;
  in_ecx[5] = param_3[1];
  in_ecx[6] = param_3[2];
  return 0;
}

/* ref: FUN_00660530 */
uint F_00660530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x660530u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00660560 */
uint F_00660560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x660560u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x10) = *param_2;
  *(undefined4 *)(in_ecx + 0x14) = param_2[1];
  *(undefined4 *)(in_ecx + 0x18) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00660580 */
byte F_00660580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x660580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  float fVar3;
  float * pfVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float fVar10;
  
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x10) - (float10)*(float *)this)));
  (*(float *)(gen_frame + 0x10)) = fVar1;
  fVar10 = 0.0;
  (*(float *)(gen_frame + 0x24)) = 0.0;
  (*(float *)(gen_frame + 0x20)) = REFG(float, 0x1090998);
  fVar2 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x14) - (float10)*(float *)((int)this + 4))));
  (*(float *)(gen_frame + 0x14)) = fVar2;
  uVar5 = 0;
  fVar3 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x18) - (float10)*(float *)((int)this + 8))));
  (*(float *)(gen_frame + 0x18)) = fVar3;
  ((float *)(gen_frame + 0x0))[0] = fVar1;
  ((float *)(gen_frame + 0x0))[1] = fVar2;
  ((float *)(gen_frame + 0x0))[2] = fVar3;
  fVar6 = (float10)0.0;
  fVar7 = (float10)REFG(float, 0x1090998);
  pfVar4 = param_1;
  do {
    fVar1 = *((float *)GEN_TOP((((int)((float *)(gen_frame + 0x0)) - (int)param_1) + (int)pfVar4)));
    (*(float *)(gen_frame + 0x28)) = fVar1;
    fVar8 = (float10)fVar1;
    fVar1 = ((float)GEN_TOF(ABS(fVar8)));
    (*(float *)(gen_frame + 0x28)) = fVar1;
    if ((float10)fVar1 <= (float10)REFG(float, 0x10905c4)) {
      fVar1 = *((float *)GEN_TOP((((int)this - (int)param_1) + (int)pfVar4)));
      (*(float *)(gen_frame + 0x28)) = fVar1;
      fVar8 = (float10)fVar1;
      if ((!GEN_ISNAN((float10)*pfVar4) && !GEN_ISNAN(fVar8)) && !((float10)*pfVar4 <= fVar8)) {
        return 0;
      }
      if ((float10)pfVar4[4] < fVar8) {
        return 0;
      }
    }
    else {
      fVar1 = (float)((float10)1 / fVar8);
      (*(float *)(gen_frame + 0x2c)) = fVar1;
      fVar2 = *((float *)GEN_TOP((((int)this - (int)param_1) + (int)pfVar4)));
      (*(float *)(gen_frame + 0x28)) = fVar2;
      fVar8 = (float10)fVar2;
      fVar9 = (float10)fVar1;
      fVar1 = ((float)GEN_TOF((fVar9 * ((float10)*pfVar4 - fVar8))));
      (*(float *)(gen_frame + 0x2c)) = fVar1;
      fVar2 = ((float)GEN_TOF((((float10)pfVar4[4] - fVar8) * fVar9)));
      (*(float *)(gen_frame + 0x28)) = fVar2;
      if ((float10)fVar2 < (float10)fVar1) {
        (*(float *)(gen_frame + 0x28)) = fVar1;
        (*(float *)(gen_frame + 0x2c)) = fVar2;
      }
      if (fVar6 < (float10)(*(float *)(gen_frame + 0x2c))) {
        (*(float *)(gen_frame + 0x24)) = (*(float *)(gen_frame + 0x2c));
        fVar6 = (float10)(*(float *)(gen_frame + 0x2c));
        fVar10 = (*(float *)(gen_frame + 0x2c));
      }
      if ((float10)(*(float *)(gen_frame + 0x28)) < fVar7) {
        (*(float *)(gen_frame + 0x20)) = (*(float *)(gen_frame + 0x28));
        fVar7 = (float10)(*(float *)(gen_frame + 0x28));
      }
      if ((!GEN_ISNAN(fVar6) && !GEN_ISNAN(fVar7)) && !(fVar6 <= fVar7)) {
        return 0;
      }
    }
    uVar5 = uVar5 + 1;
    pfVar4 = pfVar4 + 1;
    if (2 < uVar5) {
      if ((!(fVar10 < 0.0)) && (!((float10)1 < fVar6))) {
        *param_2 = fVar10;
        return 1;
      }
      return 0;
    }
  } while( true );
}

/* ref: FUN_00660720 */
byte F_00660720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x660720u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar4 = (float10)(float)((float10)in_ecx[4] - (float10)*in_ecx);
  fVar5 = (float10)(float)((float10)in_ecx[5] - (float10)in_ecx[1]);
  fVar6 = (float10)(float)((float10)in_ecx[6] - (float10)in_ecx[2]);
  fVar1 = ((float)GEN_TOF((((float10)param_2[3] -
                  (float10)((float)GEN_TOF((((float10)param_2[1] * (float10)in_ecx[1] +
                                   (float10)*param_2 * (float10)*in_ecx) +
                                  (float10)param_2[2] * (float10)in_ecx[2])))) /
                 (float10)((float)GEN_TOF(((fVar4 * (float10)*param_2 + fVar5 * (float10)param_2[1]) +
                                 fVar6 * (float10)param_2[2]))))));
  fVar7 = (float10)fVar1;
  if (((float10)0 <= fVar7) && (fVar1 <= REFG(float, 0x1087f04))) {
    fVar1 = (float)(fVar7 * fVar4);
    *param_3 = fVar1;
    fVar2 = (float)(fVar7 * fVar5);
    param_3[1] = fVar2;
    fVar3 = (float)(fVar6 * fVar7);
    param_3[2] = fVar3;
    *param_3 = (float)((float10)*in_ecx + (float10)fVar1);
    param_3[1] = (float)((float10)in_ecx[1] + (float10)fVar2);
    param_3[2] = (float)((float10)fVar3 + (float10)in_ecx[2]);
    return 1;
  }
  return 0;
}

/* ref: FUN_00660860 */
unsigned int F_00660860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x660860u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[4] = param_2[4];
  in_ecx[5] = param_2[5];
  in_ecx[6] = param_2[6];
  return 0;
}

/* ref: FUN_00660890 */
uint F_00660890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x660890u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  F_004ee670(param_1,param_2,param_3);
  F_004ee670(param_1 + 0x10,param_2 + 0x10,param_3);
  return param_1;
}

/* ref: FUN_006608d0 */
uint F_006608d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6608d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return *((uint *)GEN_TOP((*(int *)this + (param_1 >> 5) * 4))) >> ((byte)param_1 & 0x1f) & 1;
}

/* ref: FUN_006608f0 */
uint F_006608f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6608f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint * puVar1;
  uint uVar2;
  sbyte sVar3;
  uint uVar4;
  
  puVar1 = ((uint *)GEN_TOP((*(int *)this + (param_1 >> 5) * 4)));
  sVar3 = (sbyte)(param_1 & 0x1f);
  uVar2 = *puVar1 >> sVar3;
  uVar4 = 0xffffffff;
  if (param_2 < 0x20) {
    uVar4 = (1 << ((byte)param_2 & 0x1f)) - 1;
  }
  if ((param_1 & 0x1f) != 0) {
    uVar2 = uVar2 + (puVar1[1] << (0x20U - sVar3 & 0x1f));
  }
  return uVar2 & uVar4;
}

/* ref: FUN_00660940 */
unsigned int F_00660940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x660940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * puVar1;
  byte bVar2;
  
  puVar1 = ((uint *)GEN_TOP((*(int *)this + (param_1 >> 5) * 4)));
  bVar2 = (byte)param_1 & 0x1f;
  *puVar1 = ~(1 << bVar2) & *puVar1 | (uint)((char)param_2 != '\0') << bVar2;
  return 0;
}

/* ref: FUN_00660980 */
unsigned int F_00660980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x660980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(int *)((int)this + 4) + 0x1fU >> 5;
  uVar1 = 0;
  if (uVar2 != 0) {
    do {
      *(uint *)(*(int *)this + uVar1 * 4) = -(uint)((char)param_1 != '\0');
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar2);
  }
  return 0;
}

/* ref: FUN_006609e0 */
unsigned int F_006609e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6609e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  byte bVar2;
  
  puVar1 = ((uint *)GEN_TOP((**(int * PTR32 *)this + (*(uint *)((int)this + 4) >> 5) * 4)));
  bVar2 = (byte)*(uint *)((int)this + 4) & 0x1f;
  *puVar1 = (uint)((char)param_1 != '\0') << bVar2 | ~(1 << bVar2) & *puVar1;
  return 0;
}

/* ref: FUN_00660a40 */
uint F_00660a40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x660a40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_00660a60 */
unsigned int F_00660a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x660a60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  return 0;
}

/* ref: FUN_00660a90 */
unsigned int F_00660a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x660a90u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar1 = in_ecx[1];
  fVar5 = (float10)*(double *)&REFG(undefined, 0x10ab9a0);
  fVar2 = in_ecx[2];
  fVar3 = *in_ecx;
  fVar4 = (float10)*(double *)&REFG(undefined, 0x1094658);
  *param_2 = (float)(fVar5 * (float10)in_ecx[3]);
  param_2[1] = (float)((float10)fVar1 * fVar5);
  param_2[2] = (float)((float10)fVar2 * fVar5);
  param_2[3] = (float)((float10)fVar3 * fVar4);
  return 0;
}

/* ref: FUN_00660ae0 */
unsigned int F_00660ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x660ae0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar1 = in_ecx[1];
  fVar4 = (float10)*(double *)&REFG(undefined, 0x10ab9a0);
  fVar2 = in_ecx[2];
  fVar3 = *in_ecx;
  fVar5 = (float10)*(double *)&REFG(undefined, 0x1094658);
  *param_2 = (float)((float10)in_ecx[3] * fVar4);
  param_2[1] = (float)((float10)fVar1 * fVar4);
  param_2[2] = (float)((float10)fVar2 * fVar4);
  param_2[3] = (float)((float10)fVar3 * fVar5);
  fVar1 = in_ecx[10];
  fVar2 = in_ecx[0xb];
  fVar3 = in_ecx[9];
  param_2[4] = (float)((float10)in_ecx[0xc] * fVar4);
  param_2[5] = (float)((float10)fVar1 * fVar4);
  param_2[6] = (float)((float10)fVar2 * fVar4);
  param_2[7] = (float)((float10)fVar3 * fVar5);
  fVar1 = in_ecx[0x13];
  fVar2 = in_ecx[0x14];
  fVar3 = in_ecx[0x12];
  param_2[8] = (float)(fVar4 * (float10)in_ecx[0x15]);
  param_2[9] = (float)((float10)fVar1 * fVar4);
  param_2[10] = (float)((float10)fVar2 * fVar4);
  param_2[0xb] = (float)(fVar5 * (float10)fVar3);
  return 0;
}

/* ref: FUN_00660b90 */
uint F_00660b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x660b90u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (undefined1)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00660bb0 */
uint F_00660bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x660bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (undefined1)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00660be0 */
uint F_00660be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x660be0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00660c00 */
uint F_00660c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x660c00u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00660c40 */
uint F_00660c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x660c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int iVar2;
  
  piVar1 = (int *)(*(int *)((int)(uintptr_t)this) * 0x2080 + 0x80 + (int)this);
  if (*(int *)((int)this + 4) == 0) {
    return 0xffffffff;
  }
  iVar2 = *piVar1;
  if (0xff < iVar2) {
    return 0xffffffff;
  }
  piVar1[(iVar2 + 4) * 8] = *param_1;
  piVar1[(iVar2 + 4) * 8 + 1] = param_1[1];
  piVar1[iVar2 * 8 + 0x22] = param_1[2];
  piVar1[iVar2 * 8 + 0x23] = param_1[3];
  piVar1[iVar2 * 8 + 0x24] = param_1[4];
  piVar1[iVar2 * 8 + 0x25] = param_1[5];
  piVar1[iVar2 * 8 + 0x26] = param_1[6];
  piVar1[iVar2 * 8 + 0x27] = param_1[7];
  *piVar1 = iVar2 + 1;
  return 0;
}

/* ref: FUN_00660cd0 */
unsigned int F_00660cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x660cd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  int local_8;
  
  *(undefined4 *)((int)this + 4) = 1;
  *(undefined4 *)((int)this + 8) = 0;
  uVar4 = 2;
  puVar3 = (undefined4 *)((int)this + 0x2104);
  local_8 = 0x20;
  do {
    puVar3[-0x821] = 0;
    puVar3[-0x820] = 0;
    iVar1 = (uVar4 - 2 & 7) + 1;
    puVar3[-0x81f] = iVar1;
    iVar2 = (uVar4 - 1 & 7) + 1;
    *(uint *)((int)this + 8) = *(uint *)((int)this + 8) | 1 << (sbyte)iVar1;
    puVar3[-1] = 0;
    *puVar3 = 0;
    puVar3[1] = iVar2;
    iVar1 = (uVar4 & 7) + 1;
    *(uint *)((int)this + 8) = *(uint *)((int)this + 8) | 1 << (sbyte)iVar2;
    puVar3[0x81f] = 0;
    puVar3[0x820] = 0;
    puVar3[0x821] = iVar1;
    iVar2 = (uVar4 + 1 & 7) + 1;
    *(uint *)((int)this + 8) = *(uint *)((int)this + 8) | 1 << (sbyte)iVar1;
    puVar3[0x103f] = 0;
    puVar3[0x1040] = 0;
    puVar3[0x1041] = iVar2;
    uVar4 = uVar4 + 4;
    *(uint *)((int)this + 8) = *(uint *)((int)this + 8) | 1 << (sbyte)iVar2;
    puVar3 = puVar3 + 0x2080;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return 0;
}

/* ref: FUN_00660de0 */
uint F_00660de0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x660de0u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  in_ecx[3] = param_5;
  return (uint)in_ecx;
}

/* ref: FUN_00660e10 */
uint F_00660e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x660e10u, gen_a0, gen_a1, 0u, 0u);
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
  return (uint)in_ecx;
}

/* ref: FUN_00660e30 */
unsigned int F_00660e30(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x660e30u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  in_ecx[3] = param_5;
  return 0;
}

/* ref: FUN_00660e60 */
uint F_00660e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x660e60u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00660e80 */
uint F_00660e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x660e80u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00660ea0 */
uint F_00660ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x660ea0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00660ec0 */
uint F_00660ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x660ec0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00660ee0 */
uint F_00660ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x660ee0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  fVar7 = param_1[1];
  fVar8 = param_1[2];
  fVar9 = param_1[3];
  *(float *)this = *param_2 * *param_3 + *param_1;
  *(float *)((int)this + 4) = fVar1 * fVar4 + fVar7;
  *(float *)((int)this + 8) = fVar2 * fVar5 + fVar8;
  *(float *)((int)this + 0xc) = fVar3 * fVar6 + fVar9;
  return (uint)param_1;
}

/* ref: FUN_00660f00 */
uint F_00660f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x660f00u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  fVar7 = param_1[1];
  fVar8 = param_1[2];
  fVar9 = param_1[3];
  *(float *)this = *param_2 * *param_3 + *param_1;
  *(float *)((int)this + 4) = fVar1 * fVar4 + fVar7;
  *(float *)((int)this + 8) = fVar2 * fVar5 + fVar8;
  *(float *)((int)this + 0xc) = fVar3 * fVar6 + fVar9;
  return (uint)param_1;
}

/* ref: FUN_00660f20 */
unsigned int F_00660f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x660f20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar5 = *param_1;
  fVar6 = param_1[1];
  fVar7 = param_1[2];
  fVar8 = param_1[3];
  *(float *)this = fVar6 * fVar3 - fVar7 * fVar2;
  *(float *)((int)this + 4) = fVar7 * fVar1 - fVar5 * fVar3;
  *(float *)((int)this + 8) = fVar5 * fVar2 - fVar6 * fVar1;
  *(float *)((int)this + 0xc) = fVar8 * fVar4 - fVar8 * fVar4;
  return 0;
}

/* ref: FUN_00660f60 */
uint F_00660f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x660f60u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2[1] ^ *(uint *)&REFG(undefined, 0x10ab9b4);
  uVar2 = param_2[2] ^ *(uint *)&REFG(undefined, 0x10ab9b8);
  uVar3 = param_2[3] ^ *(uint *)&REFG(undefined, 0x10ab9bc);
  *in_ecx = *param_2 ^ *(uint *)&REFG(undefined, 0x10ab9b0);
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar2;
  in_ecx[3] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00660f80 */
uint F_00660f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x660f80u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2[1] ^ *(uint *)&REFG(undefined, 0x10ab9c4);
  uVar2 = param_2[2] ^ *(uint *)&REFG(undefined, 0x10ab9c8);
  uVar3 = param_2[3] ^ *(uint *)&REFG(undefined, 0x10ab9cc);
  *in_ecx = *param_2 ^ *(uint *)&REFG(undefined, 0x10ab9c0);
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar2;
  in_ecx[3] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00660fa0 */
unsigned int F_00660fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x660fa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = uVar2;
  *(undefined4 *)((int)this + 8) = uVar3;
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return 0;
}

/* ref: FUN_00660fc0 */
unsigned int F_00660fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x660fc0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint * puVar6;
  int iVar7;
  
  do {
    uVar1 = *((uint *)GEN_TOP((param_1 + 4 + (param_2 + param_3 >> 1) * 8)));
    iVar5 = param_2;
    iVar7 = param_3;
    while( true ) {
      puVar6 = (uint *)(param_1 + 4 + iVar5 * 8);
      uVar2 = *(uint *)(param_1 + 4 + iVar5 * 8);
      while (uVar2 < uVar1) {
        puVar6 = puVar6 + 2;
        iVar5 = iVar5 + 1;
        uVar2 = *puVar6;
      }
      puVar6 = (uint *)(param_1 + 4 + iVar7 * 8);
      uVar2 = *(uint *)(param_1 + 4 + iVar7 * 8);
      while (uVar1 < uVar2) {
        puVar6 = puVar6 + -2;
        iVar7 = iVar7 + -1;
        uVar2 = *puVar6;
      }
      if (iVar7 <= iVar5) break;
      uVar3 = *(undefined4 *)(param_1 + 4 + iVar5 * 8);
      uVar4 = *(undefined4 *)(param_1 + iVar5 * 8);
      *(undefined4 *)(param_1 + iVar5 * 8) = *(undefined4 *)(param_1 + iVar7 * 8);
      *(undefined4 *)(param_1 + 4 + iVar5 * 8) = *(undefined4 *)(param_1 + 4 + iVar7 * 8);
      *(undefined4 *)(param_1 + iVar7 * 8) = uVar4;
      *(undefined4 *)(param_1 + 4 + iVar7 * 8) = uVar3;
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + -1;
    }
    if (param_2 < iVar5 + -1) {
      F_00660fc0(param_1,param_2,iVar5 + -1);
    }
    param_2 = iVar7 + 1;
  } while (param_2 < param_3);
  return 0;
}

/* ref: FUN_00661060 */
uint F_00661060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661060u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00661080 */
uint F_00661080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661080u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = param_2 * 0x10;
  uVar1 = *(undefined4 *)(&REFG(undefined, 0x1138ad4) + iVar4);
  uVar2 = *(undefined4 *)(&REFG(undefined, 0x1138ad8) + iVar4);
  uVar3 = *(undefined4 *)(&REFG(undefined, 0x1138adc) + iVar4);
  *param_1 = *(undefined4 *)(&REFG(undefined, 0x1138ad0) + iVar4);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return (uint)param_1;
}

/* ref: FUN_006610a0 */
uint F_006610a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6610a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009f44d0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_006610d0 */
uint F_006610d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6610d0u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
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
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  *param_2 = *in_ecx - *param_3;
  param_2[1] = fVar1 - fVar4;
  param_2[2] = fVar2 - fVar5;
  param_2[3] = fVar3 - fVar6;
  return (uint)param_2;
}

/* ref: FUN_006610f0 */
uint F_006610f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6610f0u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
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
  *param_2 = *param_3 * *in_ecx;
  param_2[1] = fVar1 * fVar4;
  param_2[2] = fVar2 * fVar5;
  param_2[3] = fVar3 * fVar6;
  return (uint)param_2;
}

/* ref: FUN_00661110 */
uint F_00661110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661110u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00661120 */
uint F_00661120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661120u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *in_ecx = *param_2 + *in_ecx;
  in_ecx[1] = fVar1 + in_ecx[1];
  in_ecx[2] = fVar2 + in_ecx[2];
  in_ecx[3] = fVar3 + in_ecx[3];
  return (uint)param_2;
}

/* ref: FUN_00661140 */
uint F_00661140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661140u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00661160 */
uint F_00661160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x661160u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00661180 */
uint F_00661180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x661180u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_006611a0 */
uint F_006611a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6611a0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00661210 */
uint F_00661210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661210u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00661220 */
unsigned int F_00661220(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x661220u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  in_ecx[3] = param_5;
  return 0;
}

/* ref: FUN_00661260 */
uint F_00661260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661260u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2[1] ^ *(uint *)&REFG(undefined, 0x10ab9b4);
  uVar2 = param_2[2] ^ *(uint *)&REFG(undefined, 0x10ab9b8);
  uVar3 = param_2[3] ^ *(uint *)&REFG(undefined, 0x10ab9bc);
  *in_ecx = *param_2 ^ *(uint *)&REFG(undefined, 0x10ab9b0);
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar2;
  in_ecx[3] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_006612b0 */
unsigned int F_006612b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6612b0u, gen_a0, gen_a1, 0u, 0u);
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
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  in_ecx[4] = param_2[4];
  in_ecx[5] = uVar1;
  in_ecx[6] = uVar2;
  in_ecx[7] = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  in_ecx[8] = param_2[8];
  in_ecx[9] = uVar1;
  in_ecx[10] = uVar2;
  in_ecx[0xb] = uVar3;
  return 0;
}

/* ref: FUN_006612f0 */
unsigned int F_006612f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6612f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_1;
  puVar3 = this;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x30) = param_1[0xc];
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  *(undefined4 *)((int)this + 0x38) = param_1[0xe];
  *(undefined4 *)((int)this + 0x3c) = param_1[0xf];
  *(undefined4 *)((int)this + 0x40) = param_1[0x10];
  *(undefined4 *)((int)this + 0x44) = param_1[0x11];
  *(undefined4 *)((int)this + 0x48) = param_1[0x12];
  *(undefined4 *)((int)this + 0x4c) = param_1[0x13];
  *(undefined4 *)((int)this + 0x50) = param_1[0x14];
  *(undefined4 *)((int)this + 0x54) = param_1[0x15];
  *(undefined4 *)((int)this + 0x58) = param_1[0x16];
  *(undefined4 *)((int)this + 0x5c) = param_1[0x17];
  return 0;
}

/* ref: FUN_00661360 */
unsigned int F_00661360(unsigned int gen_a0)
{
  GEN_ENTER(0x661360u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00d31f70(this);
  F_00d31b70(this);
  return 0;
}

/* ref: FUN_00661370 */
uint F_00661370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661370u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (*(uint *)&gen_args[0]) & (*(uint *)&gen_args[1]);
}

/* ref: FUN_00661380 */
uint F_00661380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661380u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *param_1 = *param_1 | param_2;
  return (uint)param_1;
}

/* ref: FUN_00661390 */
uint F_00661390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661390u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *param_1 = *param_1 & ~param_2;
  return (uint)param_1;
}

/* ref: FUN_006613b0 */
unsigned int F_006613b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6613b0u, gen_a0, gen_a1, 0u, 0u);
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
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  in_ecx[4] = param_2[4];
  in_ecx[5] = uVar1;
  in_ecx[6] = uVar2;
  in_ecx[7] = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  in_ecx[8] = param_2[8];
  in_ecx[9] = uVar1;
  in_ecx[10] = uVar2;
  in_ecx[0xb] = uVar3;
  return 0;
}

/* ref: FUN_006613e0 */
uint F_006613e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6613e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined1 *)this = (undefined1)param_1;
  *(undefined2 *)((int)this + 2) = (undefined2)param_2;
  return (uint)this;
}

/* ref: FUN_00661400 */
unsigned int F_00661400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(byte *)this = (byte)(param_1 >> 0xc) & 0xf;
  *(ushort *)((int)this + 2) = (ushort)param_1 & 0xfff;
  return 0;
}

/* ref: FUN_00661460 */
unsigned int F_00661460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661460u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  F_00d93970(param_2,param_1);
  return 0;
}

/* ref: FUN_00661480 */
uint F_00661480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661480u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = 0;
  return (uint)param_1;
}

/* ref: FUN_006614b0 */
uint F_006614b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6614b0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_006614e0 */
unsigned int F_006614e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6614e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = 0;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = 0;
  return 0;
}

/* ref: FUN_00661550 */
unsigned int F_00661550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661550u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  return 0;
}

/* ref: FUN_006615f0 */
byte F_006615f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6615f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a065a0();
  if ((char)uVar1 == '\0') {
    return 1;
  }
  return *(char *)(in_ecx + 8) < '\x01';
}

/* ref: FUN_00661670 */
uint F_00661670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return *(uint *)((int)this + 0xc);
}

/* ref: FUN_00661690 */
uint F_00661690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_009f0d90(this,param_1,1);
  if (uVar1 != 0) {
    return uVar1;
  }
  return 0;
}

/* ref: FUN_006616b0 */
uint F_006616b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6616b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4))) + 0x3c))) & 1;
}

/* ref: Client::Graphics::Render::SkeletonHelper::IPartiialSkeletonWalk::vf2 */
uint F_00661700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ab9d4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00661750 */
uint F_00661750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661750u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((in_ecx + 0xbc + (-(uint)(param_2 != 0) & 2) * 4)));
}

/* ref: FUN_006617a0 */
uint F_006617a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6617a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0xbc + param_2 * 4);
}

/* ref: FUN_00661850 */
uint F_00661850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x661850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return param_1;
}

/* ref: FUN_00661870 */
uint F_00661870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x661870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char * param_2 = (char *)(uintptr_t)gen_a2;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  uint uVar4;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00b52710(param_1,(int)pcVar2 - (int)(param_1 + 1),0);
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00b52710(param_2,(int)pcVar2 - (int)(param_2 + 1),0);
  *(uint *)((int)this + 4) = uVar3;
  *(uint *)((int)this + 8) = uVar4;
  return uVar4;
}

/* ref: FUN_006618e0 */
uint F_006618e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6618e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return param_1;
}

/* ref: FUN_00661900 */
uint F_00661900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x661900u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char * param_2 = (char *)(uintptr_t)gen_a2;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  uint uVar4;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00b52710(param_1,(int)pcVar2 - (int)(param_1 + 1),0);
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00b52710(param_2,(int)pcVar2 - (int)(param_2 + 1),0);
  *(uint *)((int)this + 4) = uVar3;
  *(uint *)((int)this + 8) = uVar4;
  return uVar4;
}

/* ref: FUN_00661960 */
uint F_00661960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661960u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00661970 */
uint F_00661970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00b52710(param_1,(int)pcVar2 - (int)(param_1 + 1),0);
  *(uint *)((int)this + 4) = uVar3;
  return uVar3;
}

/* ref: FUN_006619a0 */
uint F_006619a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6619a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_006619b0 */
uint F_006619b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6619b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00b52710(param_1,(int)pcVar2 - (int)(param_1 + 1),0);
  *(uint *)((int)this + 8) = uVar3;
  return uVar3;
}

/* ref: FUN_00661a50 */
unsigned int F_00661a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661a50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(int *)(in_ecx + 4) != 0) {
    *(undefined4 *)(in_ecx + 0xc) = param_2;
  }
  return 0;
}

/* ref: FUN_00661a70 */
unsigned int F_00661a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(int *)((int)this + 4) != 0) {
    *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 8);
  }
  return 0;
}

/* ref: FUN_00661ae0 */
uint F_00661ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661ae0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x60) + param_2 * 8;
}

/* ref: FUN_00661af0 */
uint F_00661af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(uint *)((int)this + 0x48) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x60);
    do {
      if (*piVar1 == param_1) {
        return (uint)piVar1;
      }
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 2;
    } while (uVar2 < *(uint *)((int)this + 0x48));
  }
  return 0;
}

/* ref: FUN_00661b30 */
uint F_00661b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661b30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x68) + param_2 * 0xc;
}

/* ref: FUN_00661b70 */
uint F_00661b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661b70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x74) + param_2 * 4)));
}

/* ref: FUN_00661b80 */
uint F_00661b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661b80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x80) + param_2 * 4)));
}

/* ref: FUN_00661ba0 */
uint F_00661ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661ba0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x5a8) = param_2 & 0x70003c0;
  return param_2 & 0x70003c0;
}

/* ref: FUN_00661bf0 */
uint F_00661bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661bf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x38);
  return (uint)param_2;
}

/* ref: FUN_00661c00 */
uint F_00661c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661c00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x50);
  return (uint)param_2;
}

/* ref: FUN_00661c10 */
uint F_00661c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)this + 0x5c);
  *param_1 = *(undefined4 *)((int)this + 0x58);
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00661c30 */
uint F_00661c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661c30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x3c);
  return (uint)param_2;
}

/* ref: FUN_00661c40 */
uint F_00661c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661c40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x60) = param_2;
  return param_2;
}

/* ref: FUN_00661c50 */
uint F_00661c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x661c50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  *(uint *)((int)this + param_1 * 8 + 0x68) = param_2;
  return param_2;
}

/* ref: FUN_00661c70 */
unsigned int F_00661c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x661c70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  uint * puVar1;
  
  puVar1 = (uint *)((int)this + param_1 * 8 + 0x6c);
  *puVar1 = *puVar1 ^ (param_2 << 8 ^ *(uint *)((int)this + param_1 * 8 + 0x6c)) & 0x7fffff00;
  *(undefined1 *)((int)this + param_1 * 8 + 0x6c) = (undefined1)param_3;
  *(uint *)((int)this + param_1 * 8 + 0x6c) =
       param_4 << 0x1f | *(uint *)((int)this + param_1 * 8 + 0x6c) & 0x7fffffff;
  return 0;
}

/* ref: FUN_00661cb0 */
uint F_00661cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661cb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x2a8 + param_2 * 8);
}

/* ref: FUN_00661cd0 */
uint F_00661cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x661cd0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  *param_2 = *(undefined4 *)(in_ecx + 0x2ac + param_3 * 8);
  return (uint)param_2;
}

/* ref: FUN_00661cf0 */
uint F_00661cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661cf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_2;
  if (param_2 != 0) {
    uVar1 = param_2 - *(int *)(in_ecx + 0x24);
    *(uint *)(in_ecx + 0x28) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00661d30 */
unsigned int F_00661d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x24);
  if (iVar2 != 0) {
    iVar1 = 0;
    do {
      *((uint *)GEN_TOP((*(int *)((int)this + 4) + 0x5a8 + iVar1))) = param_1 & 0x70003c0;
      iVar1 = iVar1 + 0x5b0;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00661d80 */
unsigned int F_00661d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x24);
  if (iVar2 != 0) {
    iVar1 = 0;
    do {
      *((uint *)GEN_TOP((*(int *)((int)this + 4) + 8 + iVar1))) =
           *((uint *)GEN_TOP((*(int *)((int)this + 4) + 8 + iVar1))) & 0x7ffffff | param_1 << 0x1b;
      iVar1 = iVar1 + 0x5b0;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00661dd0 */
unsigned int F_00661dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x24);
  if (iVar2 != 0) {
    iVar1 = 0;
    do {
      *((uint *)GEN_TOP((*(int *)((int)this + 4) + 8 + iVar1))) =
           *((uint *)GEN_TOP((*(int *)((int)this + 4) + 8 + iVar1))) & 0xf87fffff | (param_1 & 0xf) << 0x17;
      iVar1 = iVar1 + 0x5b0;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00661e20 */
unsigned int F_00661e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x661e20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_004de750(*(undefined * PTR32 *)((int)this + 0x10),param_1,param_2,param_3);
  return 0;
}

/* ref: FUN_00661e30 */
uint F_00661e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661e30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00661e50 */
uint F_00661e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661e50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x392c) = param_2;
  return param_2;
}

/* ref: FUN_00661e70 */
uint F_00661e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661e70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x3924) = param_2;
  return param_2;
}

/* ref: FUN_00661e90 */
uint F_00661e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x661e90u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  return (param_2 * 0x10 + param_3) * 0x80 + 0x50 + in_ecx;
}

/* ref: FUN_00661eb0 */
byte F_00661eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661eb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 4) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00661ec0 */
uint F_00661ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661ec0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x3928) = param_2;
  return param_2;
}

/* ref: FUN_00661ee0 */
uint F_00661ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x661ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + uVar1 * 4 + 0x18) = param_1;
  *(uint *)((int)this + uVar1 * 4 + 0x28) = param_2;
  *(uint *)((int)this + 0x38) = *(uint *)((int)this + 0x38) | param_2;
  *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
  return uVar1;
}

/* ref: FUN_00661f10 */
uint F_00661f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661f10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x18 + param_2 * 4);
}

/* ref: FUN_00661f20 */
byte F_00661f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661f20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x8018) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00661f30 */
byte F_00661f30(void)
{
  GEN_ENTER(0x661f30u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00661f40 */
byte F_00661f40(void)
{
  GEN_ENTER(0x661f40u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00661f50 */
byte F_00661f50(void)
{
  GEN_ENTER(0x661f50u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00661f60 */
byte F_00661f60(void)
{
  GEN_ENTER(0x661f60u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00661f70 */
byte F_00661f70(void)
{
  GEN_ENTER(0x661f70u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00661f80 */
byte F_00661f80(void)
{
  GEN_ENTER(0x661f80u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00661f90 */
byte F_00661f90(void)
{
  GEN_ENTER(0x661f90u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00661fa0 */
byte F_00661fa0(void)
{
  GEN_ENTER(0x661fa0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00661fb0 */
byte F_00661fb0(void)
{
  GEN_ENTER(0x661fb0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00661fc0 */
byte F_00661fc0(void)
{
  GEN_ENTER(0x661fc0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00661fd0 */
byte F_00661fd0(void)
{
  GEN_ENTER(0x661fd0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00661fe0 */
byte F_00661fe0(void)
{
  GEN_ENTER(0x661fe0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00661ff0 */
byte F_00661ff0(void)
{
  GEN_ENTER(0x661ff0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00662000 */
byte F_00662000(void)
{
  GEN_ENTER(0x662000u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00662010 */
byte F_00662010(void)
{
  GEN_ENTER(0x662010u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00662020 */
byte F_00662020(void)
{
  GEN_ENTER(0x662020u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00662030 */
byte F_00662030(void)
{
  GEN_ENTER(0x662030u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00662040 */
byte F_00662040(void)
{
  GEN_ENTER(0x662040u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00662050 */
byte F_00662050(void)
{
  GEN_ENTER(0x662050u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00662060 */
byte F_00662060(void)
{
  GEN_ENTER(0x662060u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00662070 */
byte F_00662070(void)
{
  GEN_ENTER(0x662070u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00662080 */
byte F_00662080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x662080u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x10) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00662090 */
byte F_00662090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x662090u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x11) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_006620a0 */
byte F_006620a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6620a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x12) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00662110 */
unsigned int F_00662110(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x662110u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xa4) = param_2;
  return 0;
}

/* ref: FUN_00662150 */
unsigned int F_00662150(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x662150u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xa8) = param_2;
  return 0;
}

/* ref: FUN_00662180 */
unsigned int F_00662180(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x662180u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xac) = param_2;
  return 0;
}

/* ref: FUN_006621a0 */
unsigned int F_006621a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6621a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xb0) = param_2;
  return 0;
}

/* ref: FUN_006621e0 */
byte F_006621e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6621e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xb8) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00662200 */
unsigned int F_00662200(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x662200u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xb4) = param_2;
  return 0;
}

/* ref: FUN_00662240 */
uint F_00662240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x662240u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xa0) = param_2;
  return param_2;
}

/* ref: FUN_00662250 */
uint F_00662250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x662250u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  in_ecx[4] = param_2[4];
  in_ecx[5] = param_2[5];
  in_ecx[6] = param_2[6];
  in_ecx[7] = param_2[7];
  in_ecx[8] = param_2[8];
  in_ecx[9] = param_2[9];
  in_ecx[10] = param_2[10];
  in_ecx[0xb] = param_2[0xb];
  in_ecx[0xc] = param_2[0xc];
  in_ecx[0xd] = param_2[0xd];
  in_ecx[0xe] = param_2[0xe];
  in_ecx[0xf] = param_2[0xf];
  in_ecx[0x10] = param_2[0x10];
  in_ecx[0x11] = param_2[0x11];
  in_ecx[0x12] = param_2[0x12];
  in_ecx[0x13] = param_2[0x13];
  in_ecx[0x14] = param_2[0x14];
  in_ecx[0x15] = param_2[0x15];
  in_ecx[0x16] = param_2[0x16];
  in_ecx[0x17] = param_2[0x17];
  return (uint)in_ecx;
}

/* ref: FUN_006622f0 */
byte F_006622f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6622f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(bool *)(in_ecx + 0x1c4) = (char)param_2 != '\0';
  return (char)param_2 != '\0';
}

/* ref: FUN_00662310 */
byte F_00662310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x662310u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(bool *)(in_ecx + 0x1c4) = (char)param_2 != '\0';
  return (char)param_2 != '\0';
}

/* ref: FUN_00662330 */
byte F_00662330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x662330u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x138) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00662340 */
uint F_00662340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x662340u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x140) = param_2;
  return param_2;
}

/* ref: FUN_00662360 */
uint F_00662360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x662360u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x40 + 400 + in_ecx;
}

/* ref: FUN_00662380 */
unsigned int F_00662380(unsigned int gen_a0)
{
  GEN_ENTER(0x662380u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10abac4));
  return 0;
}

/* ref: Client::Graphics::Render::SubView::vf0 */
uint F_00662390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x662390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abac4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Render::View::vf0 */
uint F_006623e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6623e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pVVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abacc));
  pVVar1 = this + 0x358;
  iVar2 = 0xf;
  do {
    pVVar1 = pVVar1 + -0x34;
    iVar2 = iVar2 + -1;
    *(undefined * PTR32 * PTR32 *)pVVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abac4));
  } while (-1 < iVar2);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00662430 */
unsigned int F_00662430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x662430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 8))(param_2);
  }
  piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 0x1c);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)((int)this + param_1 * 4 + 0x1c) = param_2;
  return 0;
}

/* ref: FUN_00662470 */
uint F_00662470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x662470u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x2c) = param_2;
  return param_2;
}

/* ref: FUN_00662480 */
unsigned int F_00662480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x662480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x30);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)((int)this + 0x30) = param_1;
  return 0;
}

/* ref: FUN_006624b0 */
unsigned int F_006624b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6624b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x2a0);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)((int)this + 0x2a0) = param_1;
  return 0;
}

/* ref: FUN_00662570 */
uint F_00662570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x662570u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00662600 */
unsigned int F_00662600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x662600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 8) + 0xa4)));
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x98);
  }
  iVar1 = *(int *)(param_1 + 4);
  if (iVar2 == iVar1) {
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((int)this + 0x10);
    }
  }
  else if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar1 + 0x80);
    return 0;
  }
  return 0;
}

/* ref: FUN_00662670 */
uint F_00662670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x662670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (param_1 < *(ushort *)((int)this + 0x1c)) {
    return *(int *)((int)this + 0x18) + param_1 * 0xc;
  }
  return 0;
}

/* ref: FUN_006626a0 */
uint F_006626a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6626a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (param_1 < *(ushort *)((int)this + 0x1c)) {
    return *((uint *)GEN_TOP((*(int *)((int)this + 0x18) + param_1 * 0xc)));
  }
  return 0xffffffff;
}

/* ref: Client::Graphics::Render::PreBoneDeformer::vf0 */
uint F_006626f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6626f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00662720 */
unsigned int F_00662720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x662720u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  in_ecx[4] = param_2[4];
  in_ecx[5] = param_2[5];
  in_ecx[6] = param_2[6];
  in_ecx[7] = param_2[7];
  in_ecx[8] = param_2[8];
  in_ecx[9] = param_2[9];
  in_ecx[10] = param_2[10];
  in_ecx[0xb] = param_2[0xb];
  in_ecx[0xc] = param_2[0xc];
  in_ecx[0xd] = param_2[0xd];
  in_ecx[0xe] = param_2[0xe];
  in_ecx[0xf] = param_2[0xf];
  in_ecx[0x10] = param_2[0x10];
  in_ecx[0x11] = param_2[0x11];
  in_ecx[0x12] = param_2[0x12];
  in_ecx[0x13] = param_2[0x13];
  in_ecx[0x14] = param_2[0x14];
  in_ecx[0x15] = param_2[0x15];
  in_ecx[0x16] = param_2[0x16];
  in_ecx[0x17] = param_2[0x17];
  in_ecx[0x18] = param_2[0x18];
  in_ecx[0x19] = param_2[0x19];
  in_ecx[0x1a] = param_2[0x1a];
  in_ecx[0x1b] = param_2[0x1b];
  in_ecx[0x1c] = param_2[0x1c];
  in_ecx[0x1d] = param_2[0x1d];
  in_ecx[0x1e] = param_2[0x1e];
  in_ecx[0x1f] = param_2[0x1f];
  in_ecx[0x20] = param_2[0x20];
  in_ecx[0x21] = param_2[0x21];
  in_ecx[0x22] = param_2[0x22];
  in_ecx[0x23] = param_2[0x23];
  in_ecx[0x24] = param_2[0x24];
  in_ecx[0x25] = param_2[0x25];
  in_ecx[0x26] = param_2[0x26];
  in_ecx[0x27] = param_2[0x27];
  in_ecx[0x28] = param_2[0x28];
  in_ecx[0x29] = param_2[0x29];
  in_ecx[0x2a] = param_2[0x2a];
  in_ecx[0x2b] = param_2[0x2b];
  in_ecx[0x2c] = param_2[0x2c];
  in_ecx[0x2d] = param_2[0x2d];
  in_ecx[0x2e] = param_2[0x2e];
  in_ecx[0x2f] = param_2[0x2f];
  in_ecx[0x30] = param_2[0x30];
  in_ecx[0x31] = param_2[0x31];
  in_ecx[0x34] = param_2[0x34];
  in_ecx[0x35] = param_2[0x35];
  in_ecx[0x36] = param_2[0x36];
  in_ecx[0x37] = param_2[0x37];
  in_ecx[0x38] = param_2[0x38];
  in_ecx[0x39] = param_2[0x39];
  in_ecx[0x3a] = param_2[0x3a];
  in_ecx[0x3b] = param_2[0x3b];
  return 0;
}

/* ref: FUN_00662940 */
uint F_00662940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x662940u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x6c) = param_2;
  return param_2;
}

/* ref: FUN_00662980 */
byte F_00662980(void)
{
  GEN_ENTER(0x662980u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00662990 */
unsigned int F_00662990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x662990u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: FUN_006629e0 */
uint F_006629e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6629e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * puVar1;
  
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
  puVar1 = (undefined4 *)F_004f4130(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x10)),*(int *)(in_ecx + 0x10) + 0x10);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  return (uint)param_2;
}

/* ref: FUN_00662af0 */
unsigned int F_00662af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x662af0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  in_ecx[4] = param_2[4];
  in_ecx[5] = param_2[5];
  in_ecx[6] = param_2[6];
  in_ecx[7] = param_2[7];
  in_ecx[8] = param_2[8];
  in_ecx[9] = param_2[9];
  in_ecx[10] = param_2[10];
  in_ecx[0xb] = param_2[0xb];
  in_ecx[0xc] = param_2[0xc];
  in_ecx[0xd] = param_2[0xd];
  in_ecx[0xe] = param_2[0xe];
  in_ecx[0xf] = param_2[0xf];
  in_ecx[0x10] = param_2[0x10];
  in_ecx[0x11] = param_2[0x11];
  in_ecx[0x12] = param_2[0x12];
  in_ecx[0x13] = param_2[0x13];
  in_ecx[0x14] = param_2[0x14];
  in_ecx[0x15] = param_2[0x15];
  in_ecx[0x16] = param_2[0x16];
  in_ecx[0x17] = param_2[0x17];
  in_ecx[0x18] = param_2[0x18];
  in_ecx[0x19] = param_2[0x19];
  in_ecx[0x1a] = param_2[0x1a];
  in_ecx[0x1b] = param_2[0x1b];
  return 0;
}

/* ref: FUN_00662be0 */
uint F_00662be0(unsigned int gen_a0)
{
  GEN_ENTER(0x662be0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abad4));
  puVar1 = (undefined4 *)((int)this + 0x1d0);
  iVar2 = 1;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  puVar1 = (undefined4 *)((int)this + 0x1b8);
  iVar2 = 1;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  puVar1 = (undefined4 *)((int)this + 0x1a0);
  iVar2 = 2;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xac) = (*(undefined * PTR32 (*)[1])REFP(0x10ab990));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x10ab990));
  return 0x10ab990;
}

/* ref: Client::Graphics::Render::AmbientLightRenderUtility::vf0 */
uint F_00662c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x662c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00662be0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00662ca0 */
uint F_00662ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x662ca0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint * puVar1;
  uint uVar2;
  sbyte sVar3;
  uint uVar4;
  
  puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x58) + (param_1 >> 5) * 4)));
  sVar3 = (sbyte)(param_1 & 0x1f);
  uVar2 = *puVar1 >> sVar3;
  uVar4 = 0xffffffff;
  if (param_2 < 0x20) {
    uVar4 = (1 << ((byte)param_2 & 0x1f)) - 1;
  }
  if ((param_1 & 0x1f) != 0) {
    uVar2 = uVar2 + (puVar1[1] << (0x20U - sVar3 & 0x1f));
  }
  return uVar2 & uVar4;
}

/* ref: FUN_00662cf0 */
uint F_00662cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x662cf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x48) + param_2 * 4)));
}

/* ref: FUN_00662d10 */
uint F_00662d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x662d10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (*(int *)(in_ecx + 0x2c) != 0) {
    return param_2 * 0x90 + *(int *)(in_ecx + 0x2c);
  }
  return 0;
}

/* ref: FUN_00662d30 */
uint F_00662d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x662d30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x44) + param_2 * 4)));
}

/* ref: FUN_00662db0 */
unsigned int F_00662db0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x662db0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xc) = param_2;
  return 0;
}

/* ref: FUN_00662df0 */
uint F_00662df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x662df0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00662e60 */
uint F_00662e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x662e60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x18) + param_2 * 4)));
}

/* ref: Client::Graphics::Render::BaseRenderer::vf1 */
unsigned int F_00662ea0(void)
{
  GEN_ENTER(0x662ea0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Graphics::Render::BaseRenderer::vf3 */
uint F_00662eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x662eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Render::BaseRenderer::vf4 */
unsigned int F_00662ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x662ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00662f30 */
byte F_00662f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x662f30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 != '\0') + 1;
  *(byte *)(in_ecx + 0x289) = bVar1;
  return bVar1;
}

/* ref: FUN_00662f60 */
uint F_00662f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x662f60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0xc) + param_2 * 4)));
}

/* ref: FUN_00662ff0 */
unsigned int F_00662ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x662ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  ushort uVar1;
  short sVar2;
  
  uVar1 = *(ushort *)((int)this + 0x24);
  sVar2 = *(short *)((int)this + 10);
  *param_1 = (float)(int)((int)*(short *)((int)this + 8) * (uint)uVar1 + (uint)(uVar1 >> 1));
  param_1[1] = 0.0;
  param_1[2] = (float)(int)((int)sVar2 * (uint)uVar1 + (uint)(uVar1 >> 1));
  return 0;
}

/* ref: FUN_00663040 */
unsigned int F_00663040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x663040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  ushort uVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  
  uVar4 = REFG(float, 0x1087f04);
  uVar1 = *(ushort *)((int)this + 0x24);
  sVar2 = *(short *)((int)this + 8);
  sVar3 = *(short *)((int)this + 10);
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1087f04));
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = uVar4;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = uVar4;
  param_1[0xc] = (undefined4)
                 gen_fl2bits((float)(int)((int)sVar2 * (uint)uVar1 + (uint)(uVar1 >> 1)));
  param_1[0xd] = 0;
  param_1[0xe] = (undefined4)
                 gen_fl2bits((float)(int)((int)sVar3 * (uint)uVar1 + (uint)(uVar1 >> 1)));
  return 0;
}

/* ref: FUN_006630c0 */
uint F_006630c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6630c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a2;
  ushort uVar1;
  
  *param_1 = *(undefined2 *)((int)this + 8);
  uVar1 = *(ushort *)((int)this + 10);
  *param_2 = uVar1;
  return (uint)uVar1;
}

/* ref: FUN_00663160 */
uint F_00663160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x663160u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (uint)*(byte *)(param_2 + 0x3a6e + in_ecx);
}

/* ref: FUN_00663180 */
uint F_00663180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x663180u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return in_ecx + 0x11fc + (uint)(ushort)param_2 * 8;
}

/* ref: FUN_006631b0 */
unsigned int F_006631b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6631b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  ushort uVar1;
  short sVar2;
  
  uVar1 = *(ushort *)((int)this + 8);
  sVar2 = *(short *)((int)this + 0xc);
  *param_1 = (float)(int)((int)*(short *)((int)this + 10) * (uint)uVar1 + (uint)(uVar1 >> 1));
  param_1[1] = 0.0;
  param_1[2] = (float)(int)((int)sVar2 * (uint)uVar1 + (uint)(uVar1 >> 1));
  return 0;
}

/* ref: FUN_00663230 */
byte F_00663230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x663230u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1b1) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00663280 */
unsigned int F_00663280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x663280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  ushort uVar1;
  short sVar2;
  
  uVar1 = *(ushort *)((int)this + 8);
  sVar2 = *(short *)((int)this + 0xc);
  *param_1 = (float)(int)((int)*(short *)((int)this + 10) * (uint)uVar1 + (uint)(uVar1 >> 1));
  param_1[1] = 0.0;
  param_1[2] = (float)(int)((int)sVar2 * (uint)uVar1 + (uint)(uVar1 >> 1));
  return 0;
}

/* ref: Client::Graphics::Render::ShadowMaskUnit::vf0 */
uint F_00663380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x663380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10aba9c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_006633b0 */
uint F_006633b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6633b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 4 + param_2 * 4);
  if (iVar1 != 0) {
    return *(uint *)(iVar1 + 0x98);
  }
  return 0;
}

/* ref: FUN_00663480 */
uint F_00663480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x663480u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if ((float10)*(float *)(param_1 + 4) < (float10)*(float *)(param_2 + 4)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006634c0 */
uint F_006634c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6634c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x14) = param_2;
  return param_2;
}

/* ref: FUN_006634e0 */
uint F_006634e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6634e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x18) = param_2;
  return param_2;
}

/* ref: FUN_00663500 */
uint F_00663500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x663500u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1c) = param_2;
  return param_2;
}

/* ref: FUN_00663520 */
uint F_00663520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x663520u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x20) = param_2;
  *(undefined1 *)(in_ecx + 0x4d) = 1;
  return param_2;
}

/* ref: FUN_00663550 */
uint F_00663550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x663550u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x24) = param_2;
  *(undefined1 *)(in_ecx + 0x4d) = 1;
  return param_2;
}

/* ref: FUN_00663580 */
unsigned int F_00663580(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x663580u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x2c) = param_2;
  return 0;
}

/* ref: FUN_006635b0 */
unsigned int F_006635b0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6635b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x30) = param_2;
  return 0;
}

/* ref: FUN_006635e0 */
unsigned int F_006635e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6635e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x34) = param_2;
  return 0;
}

/* ref: FUN_00663600 */
byte F_00663600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x663600u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x4c) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00663610 */
uint F_00663610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x663610u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  *param_2 = *(undefined4 *)((int)this + param_1 * 4 + 0x38);
  *param_3 = *(undefined4 *)((int)this + param_1 * 4 + 0x3c);
  return (uint)param_3;
}

/* ref: FUN_00663640 */
uint F_00663640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x663640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return (uint)((*(uint *)((int)this + 0x68) & 1 << ((byte)param_1 & 0x1f)) != 0);
}

/* ref: FUN_00663660 */
uint F_00663660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x663660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return (uint)((*(uint *)((int)this + 0x6c) & 1 << ((byte)param_1 & 0x1f)) != 0);
}

/* ref: FUN_00663690 */
byte F_00663690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x663690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  
  bVar1 = F_0065f650(param_1,(int)this + 0x20);
  return bVar1 == 0;
}

/* ref: FUN_006636b0 */
byte F_006636b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6636b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x13) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_006636e0 */
unsigned int F_006636e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6636e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  
  iVar1 = param_2;
  if ((param_2 != 0) && ((*(int *)(param_2 + 0xc) < 2 || (5 < *(int *)(param_2 + 0xc))))) {
    iVar1 = 0;
  }
  if (param_1 < 4) {
    *(undefined4 *)((int)this + param_1 * 4 + 0x2c) = REFG(float, 0x1087f04);
    *((int *)GEN_TOP((*(int *)((int)this + param_1 * 4 + 0x7c) + 0x140))) = iVar1;
    return 0;
  }
  *(undefined4 *)((int)this + param_1 * 4 + 0x2c) = 0;
  *((int *)GEN_TOP((*(int *)((int)this + param_1 * 4 + 0x7c) + 0x140))) = iVar1;
  return 0;
}

/* ref: FUN_00663760 */
byte F_00663760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x663760u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x11) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00663770 */
byte F_00663770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x663770u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x12) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00663780 */
uint F_00663780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x663780u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x10 + param_2 * 4);
}

/* ref: FUN_006637a0 */
uint F_006637a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6637a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x24 + param_2 * 4);
}

/* ref: FUN_00663890 */
uint F_00663890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x663890u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 == 0) {
    return *(uint *)(in_ecx + 0x90);
  }
  return 0;
}

/* ref: FUN_006638b0 */
uint F_006638b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6638b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (param_2 < 4) {
    return *(uint *)(in_ecx + 0x94 + param_2 * 4);
  }
  return 0;
}

/* ref: FUN_006638d0 */
uint F_006638d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6638d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (param_2 < 2) {
    return *(uint *)(in_ecx + 0xc0 + param_2 * 4);
  }
  return 0;
}

/* ref: FUN_006638f0 */
uint F_006638f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6638f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0xcc + param_2 * 4);
}

/* ref: FUN_00663950 */
uint F_00663950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x663950u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  
  *param_2 = *(undefined4 *)((int)this + param_1 * 4 + 0x110);
  uVar1 = *(uint *)((int)this + param_1 * 4 + 0x150);
  *param_3 = uVar1;
  return uVar1;
}

/* ref: FUN_006639a0 */
uint F_006639a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6639a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x1a0 + param_2 * 4);
}

/* ref: FUN_006639c0 */
uint F_006639c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6639c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abb24));
  F_00b52c10(this,*(undefined4 *)(param_1 + 0x98));
  return (uint)this;
}

/* ref: FUN_006639f0 */
uint F_006639f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6639f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abb24));
  uVar1 = F_00b52cb0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abab4));
  return uVar1;
}

/* ref: Client::Graphics::Render::ScopedShaderKey::vf0 */
uint F_00663a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x663a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abb24));
  F_00b52cb0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abab4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00663b70 */
uint F_00663b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x663b70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x10) = *param_2;
  *(undefined4 *)(in_ecx + 0x14) = param_2[1];
  *(undefined4 *)(in_ecx + 0x18) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00663c00 */
uint F_00663c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x663c00u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00663c10 */
uint F_00663c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x663c10u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00663c20 */
uint F_00663c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x663c20u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00663c90 */
uint F_00663c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x663c90u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00663d10 */
byte F_00663d10(void)
{
  GEN_ENTER(0x663d10u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00406b90(0x140,0,0);
  if (uVar1 != 0) {
    uVar1 = F_00b800e0(uVar1);
    REFG(undefined4, 0x1487c64) = uVar1;
    return uVar1 != 0;
  }
  REFG(undefined4, 0x1487c64) = 0;
  return 0;
}

/* ref: FUN_00663d80 */
byte F_00663d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x663d80u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float * pfVar1;
  uint uVar2;
  float10 fVar3;
  
  uVar2 = 0;
  pfVar1 = (float *)(param_1 + 0x58);
  do {
    fVar3 = (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)pfVar1[-0x14] *
                                              (float10)*(float *)(param_2 + 8) +
                                             ((float10)pfVar1[-0x15] *
                                              (float10)*(float *)(param_2 + 4) +
                                             (float10)pfVar1[-0x16] * (float10)*(float *)param_2)))) +
                            (float10)pfVar1[-0x13]))) +
            (float10)((float)GEN_TOF(((float10)*pfVar1 * (float10)*(float *)(param_3 + 8) +
                            ((float10)pfVar1[-1] * (float10)*(float *)(param_3 + 4) +
                            (float10)pfVar1[-2] * (float10)*(float *)param_3))));
    if ((!GEN_ISNAN((float10)0) && !GEN_ISNAN(fVar3)) && !((float10)0 < fVar3)) {
      return 0;
    }
    uVar2 = uVar2 + 1;
    pfVar1 = pfVar1 + 4;
  } while (uVar2 < 5);
  return 1;
}

/* ref: FUN_00663f10 */
unsigned int F_00663f10(unsigned int gen_a0)
{
  GEN_ENTER(0x663f10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (REFG(int, 0x1487c6c) == 0) {
    REFG(int, 0x1487c54) = param_1;
    REFG(int, 0x1487c6c) = param_1;
    return 0;
  }
  *(int *)(param_1 + 8) = REFG(int, 0x1487c6c);
  *(int *)(REFG(int, 0x1487c6c) + 0xc) = param_1;
  REFG(int, 0x1487c6c) = param_1;
  return 0;
}

/* ref: FUN_00663f40 */
unsigned int F_00663f40(unsigned int gen_a0)
{
  GEN_ENTER(0x663f40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  iVar3 = iVar2;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0xc) = iVar2;
    iVar3 = REFG(int, 0x1487c54);
  }
  REFG(int, 0x1487c54) = iVar3;
  if (iVar2 == 0) {
    REFG(int, 0x1487c6c) = iVar1;
    return 0;
  }
  *(int *)(iVar2 + 8) = iVar1;
  return 0;
}

/* ref: FUN_00663f70 */
unsigned int F_00663f70(unsigned int gen_a0)
{
  GEN_ENTER(0x663f70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (REFG(int, 0x1487c70) == 0) {
    REFG(int, 0x1487c5c) = param_1;
    REFG(int, 0x1487c70) = param_1;
    return 0;
  }
  *(int *)(param_1 + 8) = REFG(int, 0x1487c70);
  *(int *)(REFG(int, 0x1487c70) + 0xc) = param_1;
  REFG(int, 0x1487c70) = param_1;
  return 0;
}

/* ref: FUN_00663fa0 */
unsigned int F_00663fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x663fa0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (REFG(int, 0x1487c78) == 0) {
    *(int *)&REFG(undefined, 0x1487c74) = param_1;
    REFG(int, 0x1487c78) = param_1;
    return 0;
  }
  *(int *)(param_1 + 0x28) = REFG(int, 0x1487c78);
  *(int *)(REFG(int, 0x1487c78) + 0x2c) = param_1;
  REFG(int, 0x1487c78) = param_1;
  return 0;
}

/* ref: FUN_00663fd0 */
unsigned int F_00663fd0(unsigned int gen_a0)
{
  GEN_ENTER(0x663fd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (REFG(int, 0x1487c80) == 0) {
    *(int *)&REFG(undefined, 0x1487c7c) = param_1;
    REFG(int, 0x1487c80) = param_1;
    return 0;
  }
  *(int *)(param_1 + 0x28) = REFG(int, 0x1487c80);
  *(int *)(REFG(int, 0x1487c80) + 0x2c) = param_1;
  REFG(int, 0x1487c80) = param_1;
  return 0;
}

/* ref: FUN_00664000 */
unsigned int F_00664000(unsigned int gen_a0)
{
  GEN_ENTER(0x664000u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (REFG(int, 0x1487c88) == 0) {
    *(int *)&REFG(undefined, 0x1487c84) = param_1;
    REFG(int, 0x1487c88) = param_1;
    return 0;
  }
  *(int *)(param_1 + 8) = REFG(int, 0x1487c88);
  *(int *)(REFG(int, 0x1487c88) + 0xc) = param_1;
  REFG(int, 0x1487c88) = param_1;
  return 0;
}

/* ref: FUN_00664050 */
uint F_00664050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x664050u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00664080 */
uint F_00664080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x664080u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006640f0 */
uint F_006640f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6640f0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00664150 */
uint F_00664150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x664150u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006641c0 */
uint F_006641c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6641c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xd8);
  return uVar1;
}

/* ref: FUN_006641f0 */
uint F_006641f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6641f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xd8);
  return (uint)uVar1;
}

/* ref: FUN_00664240 */
uint F_00664240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x664240u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006642a0 */
uint F_006642a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6642a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xd8);
  return uVar1;
}

/* ref: FUN_006642d0 */
uint F_006642d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6642d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xd8);
  return (uint)uVar1;
}

/* ref: FUN_00664300 */
uint F_00664300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x664300u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00664360 */
byte F_00664360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x664360u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x30) == param_2;
}

/* ref: FUN_00664410 */
uint F_00664410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x664410u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xd2);
  return uVar1;
}

/* ref: FUN_00664440 */
uint F_00664440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x664440u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 0x50 + param_2 * 8;
}

/* ref: FUN_00664480 */
uint F_00664480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x664480u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x80 + param_2 * 4);
}

/* ref: FUN_006644b0 */
byte F_006644b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6644b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 < 0x400) {
    *(undefined4 *)((int)this + iVar1 * 4 + 0x80) = param_1;
    *(int *)this = iVar1 + 1;
    return 1;
  }
  return 0;
}

/* ref: FUN_00664500 */
uint F_00664500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x664500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00664540 */
uint F_00664540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x664540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00664560 */
uint F_00664560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x664560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

