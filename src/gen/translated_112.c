#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: Client::Game::Network::PacketQue::vf1 */
uint F_00a54be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa54be0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  undefined * this_00;
  uint uVar11;
  
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = this;
  if (*(ushort *)(param_2 + 2) == 0x1b1) {
    uVar5 = *(uint *)(this + 0x1c);
    if (uVar5 != 0) {
      do {
        if (*(int *)(uVar5 + 0x10) == *(int *)(param_2 + 0x10)) goto LAB_00a54cdb;
        uVar5 = *(uint *)(uVar5 + 0x28);
      } while (uVar5 != 0);
    }
    uVar5 = F_00a53a10(this,*(undefined4 *)(param_2 + 0x10));
    if (uVar5 == 0) {
      return 0;
    }
LAB_00a54cdb: ;
    this_00 = (*(undefined * PTR32 *)(gen_frame + 0x48));
    uVar2 = *(undefined4 *)(param_2 + 0x10);
    uVar3 = *(undefined4 *)(param_2 + 0x14);
    ((uint *)(gen_frame + 0x0))[0] = (uint)*(ushort *)(param_2 + 2);
    uVar4 = *(undefined4 *)(param_2 + 0x18);
    ((undefined4 *)(gen_frame + 0x8))[0] = uVar2;
    ((undefined4 *)(gen_frame + 0x8))[2] = uVar4;
    ((undefined4 *)(gen_frame + 0x8))[1] = uVar3;
    ((undefined4 *)(gen_frame + 0x8))[3] = *(undefined4 *)(param_2 + 0x1c);
    *(uint *)(uVar5 + 0x20) = (uint)*(byte *)(param_2 + 0x1a);
    uVar7 = F_00a4fee0((*(undefined * PTR32 *)(gen_frame + 0x48)),uVar5,((uint *)(gen_frame + 0x0)));
    if (*(int *)(uVar5 + 0x1c) < *(int *)(uVar5 + 0x20)) {
      return uVar7;
    }
    uVar11 = *(uint *)(uVar5 + 0x14);
  }
  else {
    uVar5 = *(ushort *)(param_2 + 2) - 0x1b2;
    if (uVar5 != 0) {
      return uVar5;
    }
    uVar5 = *(uint *)(this + 0x1c);
    if (uVar5 != 0) {
      do {
        if (*(int *)(uVar5 + 0x10) == *(int *)(param_2 + 0x10)) {
          (*(uint *)(gen_frame + 0x4c)) = uVar5;
          goto LAB_00a54c47;
        }
        uVar5 = *(uint *)(uVar5 + 0x28);
      } while (uVar5 != 0);
    }
    uVar5 = F_00a53a10(this,*(undefined4 *)(param_2 + 0x10));
    (*(uint *)(gen_frame + 0x4c)) = uVar5;
    if (uVar5 == 0) {
      return 0;
    }
LAB_00a54c47: ;
    uVar5 = (*(uint *)(gen_frame + 0x4c));
    ((uint *)(gen_frame + 0x0))[0] = (uint)*(ushort *)(param_2 + 2);
    puVar9 = (undefined4 *)(param_2 + 0x10);
    puVar10 = ((undefined4 *)(gen_frame + 0x8));
    for (iVar8 = 0xc; this_00 = (*(undefined * PTR32 *)(gen_frame + 0x48)), iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    F_00a4fee0((*(undefined * PTR32 *)(gen_frame + 0x48)),uVar5,((uint *)(gen_frame + 0x0)));
    uVar5 = *(uint *)((*(uint *)(gen_frame + 0x4c)) + 0x20);
    if (uVar5 == 0xffffffff) {
      return 0xffffffff;
    }
    if (*(int *)((*(uint *)(gen_frame + 0x4c)) + 0x1c) < (int)uVar5) {
      return uVar5;
    }
    uVar11 = *(uint *)((*(uint *)(gen_frame + 0x4c)) + 0x14);
    uVar6 = uVar11;
    uVar5 = (*(uint *)(gen_frame + 0x4c));
    uVar7 = 0;
    if (uVar11 != 0) {
      do {
        uVar7 = uVar6;
        if (*(int *)(uVar6 + 8) == 0x1b1) goto LAB_00a54d1d;
        puVar1 = (uint *)(uVar6 + 0x54);
        uVar6 = *puVar1;
      } while (*puVar1 != 0);
      uVar7 = 0;
    }
  }
LAB_00a54d1d: ;
  F_00a47b20(&REFG(undefined, 0x14a4230),uVar11,uVar7);
  uVar5 = F_00a53a80(this_00,uVar5);
  return uVar5;
}

/* ref: FUN_00a54d40 */
uint F_00a54d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa54d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  uVar3 = *(uint *)((int)this + 0x1c);
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = this;
  for (; uVar3 != 0; uVar3 = *(uint *)(uVar3 + 0x28)) {
    if (*(int *)(uVar3 + 0x10) == param_2) {
      (*(uint *)(gen_frame + 0x4c)) = uVar3;
      goto LAB_00a54d8f;
    }
  }
  uVar3 = F_00a53a10(this,param_2);
  (*(uint *)(gen_frame + 0x4c)) = uVar3;
  if (uVar3 == 0) {
    return 0;
  }
LAB_00a54d8f: ;
  uVar3 = (uint)*(ushort *)(param_3 + 2);
  ((uint *)(gen_frame + 0x0))[0] = uVar3;
  if (uVar3 == 0x1af) {
    puVar5 = (undefined4 *)(param_3 + 0x10);
    iVar4 = 0x10;
    puVar6 = ((undefined4 *)(gen_frame + 0x8));
  }
  else {
    if (uVar3 != 0x1b3) {
      if (uVar3 == 0x1b7) {
        uVar1 = *(undefined4 *)(param_3 + 0x14);
        ((undefined4 *)(gen_frame + 0x8))[0] = *(undefined4 *)(param_3 + 0x10);
        ((undefined4 *)(gen_frame + 0x8))[1] = uVar1;
        ((undefined4 *)(gen_frame + 0x8))[2] = *(undefined4 *)(param_3 + 0x18);
        ((undefined4 *)(gen_frame + 0x8))[3] = *(undefined4 *)(param_3 + 0x1c);
      }
      goto LAB_00a54de6;
    }
    iVar4 = 8;
    puVar5 = (undefined4 *)(param_3 + 0x10);
    puVar6 = ((undefined4 *)(gen_frame + 0x8));
  }
  for (; this = (*(undefined * PTR32 *)(gen_frame + 0x48)), iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
LAB_00a54de6: ;
  F_00a4fee0(this,(*(uint *)(gen_frame + 0x4c)),((uint *)(gen_frame + 0x0)));
  uVar2 = (*(uint *)(gen_frame + 0x4c));
  uVar3 = *(uint *)((*(uint *)(gen_frame + 0x4c)) + 0x20);
  if ((uVar3 != 0xffffffff) && ((int)uVar3 <= *(int *)((*(uint *)(gen_frame + 0x4c)) + 0x1c))) {
    F_00a49c10(&REFG(undefined, 0x14a4230),*(undefined4 *)((*(uint *)(gen_frame + 0x4c)) + 0x14),param_1);
    uVar3 = F_00a53a80(this,uVar2);
  }
  return uVar3;
}

/* ref: FUN_00a54e30 */
unsigned int F_00a54e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa54e30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint local_8;
  
  local_8 = 0;
  if (param_1 != 0) {
    do {
      if (*(uint *)((int)this + 0x2c) == *(uint *)((int)this + 0x30)) {
        return 0;
      }
      uVar1 = *(uint *)((int)this + 0x2c);
      while( true ) {
        uVar2 = (*(int *)((int)this + 0x2c) + 1U) % *(uint *)((int)this + 0x28);
        *(uint *)((int)this + 0x2c) = uVar2;
        if (*((char *)GEN_TOP((uVar1 * 0x2a0 + 0x298 + *(int *)((int)this + 0x24)))) != '\0') break;
        uVar1 = uVar2;
        if (uVar2 == *(uint *)((int)this + 0x30)) {
          return 0;
        }
      }
      *((undefined1 *)GEN_TOP((uVar1 * 0x2a0 + 0x298 + *(int *)((int)this + 0x24)))) = 0;
      puVar3 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + uVar1 * 0x2a0)));
      if (REFG(int, 0x1379c70) == 3) {
        return 0;
      }
      this_00 = (undefined *)F_00a64860(&REFG(undefined, 0x14a9a18),*puVar3,(uint)*(byte *)((int)puVar3 + 0x3b));
      if (this_00 != (undefined *)0x0) {
        F_00aac200(this_00,puVar3 + 4);
      }
      local_8 = local_8 + 1;
    } while (local_8 < param_1);
  }
  return 0;
}

/* ref: FUN_00a54f07 */
byte F_00a54f07(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa54f07u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int in_ebp = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * this;
  uint * puVar1;
  undefined * this_00;
  uint uVar2;
  int * piVar3;
  
  this = (int *)(in_ecx + 0x24);
  F_00a5e350(this,in_ebp + -8);
  uVar2 = *(uint *)(in_ebp + -8);
  if (uVar2 != 0xffffffff) {
    piVar3 = *(int * PTR32 *)(in_ebp + -4);
    do {
      if (*piVar3 == *(int *)(in_ebp + 8)) {
        this_00 = (undefined *)F_00a64860(&REFG(undefined, 0x14a9a18),*piVar3,(uint)*(byte *)((int)piVar3 + 0x3b));
        if (this_00 != (undefined *)0x0) {
          F_00aac200(this_00,piVar3 + 4);
        }
        if ((-1 < (int)uVar2) && (uVar2 < *(uint *)(in_ecx + 0x28))) {
          *(undefined1 *)(uVar2 * 0x2a0 + 0x298 + *this) = 0;
        }
        return 1;
      }
      puVar1 = (uint *)F_00a5e3d0(this,in_ebp + -0x10,in_ebp + -8);
      uVar2 = *puVar1;
      piVar3 = (int *)puVar1[1];
      *(uint *)(in_ebp + -8) = uVar2;
      *(int * PTR32 *)(in_ebp + -4) = piVar3;
    } while (uVar2 != 0xffffffff);
  }
  return 0;
}

/* ref: FUN_00a54fa0 */
uint F_00a54fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa54fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * this_00;
  uint uVar1;
  int * piVar2;
  
  this_00 = (int *)((int)this + 0x24);
  F_00a5e350(this_00,&(*(uint *)(gen_frame + 0x4)));
  uVar1 = (*(uint *)(gen_frame + 0x4));
  piVar2 = (*(int * PTR32 *)(gen_frame + 0x8));
  if ((*(uint *)(gen_frame + 0x4)) != 0xffffffff) {
    do {
      if (((*piVar2 == param_1) && (-1 < (int)uVar1)) && (uVar1 < *(uint *)((int)this + 0x28))) {
        *(undefined1 *)(uVar1 * 0x2a0 + 0x298 + *this_00) = 0;
      }
      if (uVar1 != *(uint *)((int)this + 0x30)) {
        do {
          uVar1 = (uVar1 + 1) % *(uint *)((int)this + 0x28);
          if (*(char *)(uVar1 * 0x2a0 + 0x298 + *this_00) != '\0') {
            piVar2 = (int *)(uVar1 * 0x2a0 + *this_00);
            goto LAB_00a55014;
          }
        } while (uVar1 != *(uint *)((int)this + 0x30));
      }
      uVar1 = 0xffffffff;
      piVar2 = (int *)0x0;
LAB_00a55014: ;
    } while (uVar1 != 0xffffffff);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

/* ref: FUN_00a55030 */
unsigned int F_00a55030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa55030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte * pbVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  undefined4 * puVar9;
  byte bVar10;
  undefined * this_00;
  uint uVar11;
  uint uVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  
  (*(uint *)(gen_frame + 0x28)) = 0;
  if (param_1 != 0) {
    (*(undefined * PTR32 *)(gen_frame + 0x24)) = (undefined *)((int)this + 0x34);
    do {
      F_00a5e4b0((*(undefined * PTR32 *)(gen_frame + 0x24)),&(*(undefined4 * PTR32 *)(gen_frame + 0x14)));
      puVar9 = (*(undefined4 * PTR32 *)(gen_frame + 0x14));
      if ((*(char *)(gen_frame + 0x18)) == '\0') {
        return 0;
      }
      if ((*(char *)(gen_frame + 0x19)) != '\0') {
        pbVar1 = (byte *)((*(undefined4 * PTR32 *)(gen_frame + 0x14)) + 4);
        this_00 = (undefined *)F_00a64450(&REFG(undefined, 0x14a9a18),*(*(undefined4 * PTR32 *)(gen_frame + 0x14)));
        if (this_00 != (undefined *)0x0) {
          uVar11 = puVar9[2];
          (*(uint *)(gen_frame + 0xc)) = uVar11;
          (*(int *)(gen_frame + 0x10)) = puVar9[3];
          uVar8 = *(uint *)((int)this_00 + 0xf8);
          uVar12 = (puVar9[3] - *(int *)((int)this_00 + 0xfc)) -
                   (uint)(uVar11 < *(uint *)((int)this_00 + 0xf8));
          bVar10 = F_00a611f0(this_00,0,&(*(uint *)(gen_frame + 0xc)));
          if (bVar10 != 0) {
            fVar2 = ((float)GEN_TOF(((-(float10)(longlong)(((ulonglong)uVar12 & 0x80000000) << 0x20) +
                            ((float10)GEN_TOD((CONCAT44(uVar12,uVar11 - uVar8) & 0x7fffffffffffffff)))) /
                           (float10)*(double *)&REFG(undefined, 0x10912a8))));
            (*(float *)(gen_frame + 0x20)) = fVar2;
            fVar13 = F_00a9f650(this_00,fVar2,pbVar1);
            (*(float *)(gen_frame + 0x1c)) = (float)fVar13;
            (*(float *)(gen_frame + 0x20)) = gen_bits2f((uint)*(byte *)(puVar9 + 5));
            fVar14 = ((float10)*(float *)&REFG(undefined, 0x1334840) * (float10)*(double *)&REFG(undefined, 0x1088118)) /
                     (float10)*(double *)&REFG(undefined, 0x1088100);
            fVar2 = ((float)GEN_TOF(((float10)*(byte *)(puVar9 + 5) / (float10)REFG(double, 0x10944b8))));
            (*(float *)(gen_frame + 0x20)) = fVar2;
            (*(float *)(gen_frame + 0x1c)) = gen_bits2f((uint)*(byte *)((int)puVar9 + 0x11));
            uVar11 = (uint)*pbVar1;
            fVar15 = (float10)*(double *)&REFG(undefined, 0x10928e8);
            fVar3 = ((float)GEN_TOF((((float10)*(byte *)((int)puVar9 + 0x11) * fVar14) * fVar15 -
                           (float10)*(double *)&REFG(undefined, 0x1080228))));
            (*(float *)(gen_frame + 0x1c)) = fVar3;
            (*(float *)(gen_frame + 0x1c)) = gen_bits2f(uVar11);
            fVar4 = ((float)GEN_TOF((((float10)uVar11 * fVar14) * fVar15 - (float10)*(double *)&REFG(undefined, 0x1080228))))
            ;
            (*(float *)(gen_frame + 0x1c)) = fVar4;
            (*(float *)(gen_frame + 0x1c)) = gen_bits2f((uint)*(ushort *)((int)puVar9 + 0x1a));
            fVar14 = (float10)*(double *)&REFG(undefined, 0x10a3960);
            fVar16 = (float10)*(double *)&REFG(undefined, 0x10912a8);
            fVar5 = ((float)GEN_TOF((((float10)*(ushort *)((int)puVar9 + 0x1a) * fVar14) * fVar15 - fVar16)));
            (*(float *)(gen_frame + 0x1c)) = fVar5;
            (*(float *)(gen_frame + 0x1c)) = gen_bits2f((uint)*(ushort *)(puVar9 + 6));
            fVar6 = ((float)GEN_TOF((((float10)*(ushort *)(puVar9 + 6) * fVar14) * fVar15 - fVar16)));
            (*(float *)(gen_frame + 0x1c)) = fVar6;
            (*(float *)(gen_frame + 0x1c)) = gen_bits2f((uint)*(ushort *)((int)puVar9 + 0x16));
            fVar7 = ((float)GEN_TOF((((float10)*(ushort *)((int)puVar9 + 0x16) * fVar14) * fVar15 - fVar16)));
            (*(float *)(gen_frame + 0x1c)) = fVar7;
            F_00a9f6d0(this_00,fVar7,fVar6,fVar5,fVar4,fVar3,(uint)*(byte *)((int)puVar9 + 0x12),
                         (uint)*(byte *)((int)puVar9 + 0x13),(float)fVar13,fVar2);
          }
        }
      }
      uVar11 = (*(uint *)(gen_frame + 0x28)) + 1;
      (*(uint *)(gen_frame + 0x28)) = uVar11;
    } while (uVar11 < param_1);
  }
  return 0;
}

/* ref: FUN_00a55210 */
unsigned int F_00a55210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa55210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  uVar3 = 0;
  if (param_1 != 0) {
    do {
      F_00a5e680((undefined *)((int)this + 0x44),&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
      puVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x4));
      if ((*(char *)(gen_frame + 0x8)) == '\0') {
        return 0;
      }
      if ((*(char *)(gen_frame + 0x9)) != '\0') {
        (*(float *)(gen_frame + 0x18)) = gen_bits2f((uint)*(ushort *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 0x1a));
        fVar4 = (float10)*(double *)&REFG(undefined, 0x10a3960);
        (*(float *)(gen_frame + 0x18)) = gen_bits2f((uint)*(ushort *)((*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 7));
        fVar5 = (float10)*(double *)&REFG(undefined, 0x10928e8);
        fVar6 = (float10)*(double *)&REFG(undefined, 0x10912a8);
        (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF((((float10)*(ushort *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 0x1a) * fVar4) * fVar5 - fVar6)));
        (*(float *)(gen_frame + 0x18)) = gen_bits2f((uint)*(ushort *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 0x1e));
        (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF((((float10)*(ushort *)((*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 7) * fVar4) * fVar5 - fVar6)));
        (*(float *)(gen_frame + 0x18)) = gen_bits2f((uint)*(ushort *)((*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 4));
        (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF((((float10)*(ushort *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 0x1e) * fVar4) * fVar5 - fVar6)));
        (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF((((float10)*(ushort *)((*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 4) *
                          (((float10)*(float *)&REFG(undefined, 0x1334840) * (float10)*(double *)&REFG(undefined, 0x1088118)) /
                          (float10)REFG(double, 0x109cab0))) * fVar5 - (float10)*(double *)&REFG(undefined, 0x1080228))));
        uVar2 = F_00a64450(&REFG(undefined, 0x14a9a18),*(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
        if (uVar2 != 0) {
          F_00a9f750(uVar2,(*(float *)(gen_frame + 0xc)),(*(float *)(gen_frame + 0x10)),(*(float *)(gen_frame + 0x14)),(*(float *)(gen_frame + 0x18)),GEN_TOF(gen_bits2f(puVar1[5])),
                       (uint)*(byte *)(puVar1 + 6));
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_1);
  }
  return 0;
}

/* ref: FUN_00a55330 */
uint F_00a55330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa55330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a5e350((int *)((int)this + 0x24),&(*(uint *)(gen_frame + 0x4)));
  uVar2 = (*(uint *)(gen_frame + 0x4));
  piVar3 = (*(int * PTR32 *)(gen_frame + 0x8));
joined_r0x00a5534d: ;
  do {
    if (uVar2 == 0xffffffff) {
      return 0;
    }
    if (*piVar3 == param_1) {
      return (uint)(piVar3 + 4);
    }
    if (uVar2 != *(uint *)((int)this + 0x30)) {
      iVar1 = *(int *)((int)this + 0x24);
      do {
        uVar2 = (uVar2 + 1) % *(uint *)((int)this + 0x28);
        if (*(char *)(uVar2 * 0x2a0 + 0x298 + iVar1) != '\0') {
          piVar3 = (int *)(uVar2 * 0x2a0 + iVar1);
          goto joined_r0x00a5534d;
        }
      } while (uVar2 != *(uint *)((int)this + 0x30));
    }
    uVar2 = 0xffffffff;
    piVar3 = (int *)0x0;
  } while( true );
}

/* ref: FUN_00a553c0 */
uint F_00a553c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa553c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * this_00;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  this_00 = (int *)((int)this + 0x34);
  piVar2 = (int *)F_00a5e530(this_00,&(*(uint *)(gen_frame + 0x4)));
  uVar3 = (*(uint *)(gen_frame + 0x4));
  piVar1 = (*(int * PTR32 *)(gen_frame + 0x8));
joined_r0x00a553db: ;
  do {
    if (uVar3 == 0xffffffff) {
      return (uint)piVar2;
    }
    if (((*piVar1 == param_1) && (-1 < (int)uVar3)) && (uVar3 < *(uint *)((int)this + 0x38))) {
      *(undefined1 *)(*this_00 + 0x20 + uVar3 * 0x28) = 0;
    }
    if (uVar3 != *(uint *)((int)this + 0x40)) {
      do {
        uVar3 = (uVar3 + 1) % *(uint *)((int)this + 0x38);
        if (*(char *)(*this_00 + 0x20 + uVar3 * 0x28) != '\0') {
          piVar2 = (int *)(*this_00 + uVar3 * 0x28);
          piVar1 = piVar2;
          goto joined_r0x00a553db;
        }
      } while (uVar3 != *(uint *)((int)this + 0x40));
    }
    uVar3 = 0xffffffff;
    piVar2 = (int *)0x0;
    piVar1 = piVar2;
  } while( true );
}

/* ref: FUN_00a55440 */
uint F_00a55440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa55440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * this_00;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  this_00 = (int *)((int)this + 0x44);
  piVar2 = (int *)F_00a5e700(this_00,&(*(uint *)(gen_frame + 0x4)));
  uVar3 = (*(uint *)(gen_frame + 0x4));
  piVar1 = (*(int * PTR32 *)(gen_frame + 0x8));
joined_r0x00a5545b: ;
  do {
    if (uVar3 == 0xffffffff) {
      return (uint)piVar2;
    }
    if (((*piVar1 == param_1) && (-1 < (int)uVar3)) && (uVar3 < *(uint *)((int)this + 0x48))) {
      *(undefined1 *)(*this_00 + 0x20 + uVar3 * 0x28) = 0;
    }
    if (uVar3 != *(uint *)((int)this + 0x50)) {
      do {
        uVar3 = (uVar3 + 1) % *(uint *)((int)this + 0x48);
        if (*(char *)(*this_00 + 0x20 + uVar3 * 0x28) != '\0') {
          piVar2 = (int *)(*this_00 + uVar3 * 0x28);
          piVar1 = piVar2;
          goto joined_r0x00a5545b;
        }
      } while (uVar3 != *(uint *)((int)this + 0x50));
    }
    uVar3 = 0xffffffff;
    piVar2 = (int *)0x0;
    piVar1 = piVar2;
  } while( true );
}

/* ref: FUN_00a554c0 */
uint F_00a554c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa554c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint in_EAX = 0;
  uint uVar1;
  uint uVar2;
  
  if (REFG(int, 0x1379c70) != 3) {
    uVar1 = F_00a64450(&REFG(undefined, 0x14a9a18),param_1);
    if (uVar1 == 0) {
      uVar1 = F_00a55330(&REFG(undefined * PTR32, 0x1334920),param_1);
      if (uVar1 != 0) {
        *(undefined4 *)(uVar1 + 0x6c) = *param_2;
        *(undefined2 *)(uVar1 + 0x72) = *(undefined2 *)((int)param_2 + 6);
        uVar2 = F_00ab21a0((uint)*(byte *)(uVar1 + 0x6b));
        if (*(int *)(uVar2 + 0x10) == 0x20) {
          *(undefined2 *)(uVar1 + 0x70) = *(undefined2 *)(param_2 + 2);
        }
        else if (*(int *)(uVar2 + 0x10) != 0x21) {
          *(undefined2 *)(uVar1 + 0x70) = *(undefined2 *)(param_2 + 1);
        }
      }
    }
    else {
      *(undefined4 *)(uVar1 + 0x1690) = *param_2;
      *(uint *)(uVar1 + 0x1698) = (uint)*(ushort *)(param_2 + 1);
      *(undefined2 *)(uVar1 + 0x16a2) = *(undefined2 *)(param_2 + 2);
      *(undefined2 *)(uVar1 + 0x16a0) = *(undefined2 *)((int)param_2 + 6);
    }
    uVar1 = F_00ae0810(&REFG(undefined, 0x1336e40),param_1);
    if (uVar1 != 0) {
      *(undefined4 *)(uVar1 + 0x58) = *param_2;
      *(undefined2 *)(uVar1 + 0x60) = *(undefined2 *)(param_2 + 1);
      *(undefined2 *)(uVar1 + 100) = *(undefined2 *)((int)param_2 + 6);
    }
    in_EAX = F_00ae0880(&REFG(undefined, 0x1336e40),param_1);
    if (in_EAX != 0) {
      *(undefined4 *)(in_EAX + 0x20c) = *param_2;
    }
    if (param_1 == REFG(int, 0x14ab5bc)) {
      REFG(undefined4, 0x14ab5c0) = *param_2;
    }
  }
  return in_EAX;
}

/* ref: FUN_00a555b0 */
uint F_00a555b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa555b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  byte bVar4;
  int * in_EAX = 0;
  int * piVar5;
  uint uVar6;
  undefined * this;
  byte * pbVar7;
  undefined4 * puVar8;
  undefined2 uVar9;
  int iVar10;
  ushort * puVar11;
  uint local_c;
  uint local_8;
  
  if (REFG(int, 0x1379c70) != 3) {
    piVar5 = (int *)F_00a64450(&REFG(undefined, 0x14a9a18),param_1);
    uVar9 = 0;
    uVar2 = 0;
    uVar1 = 0;
    uVar3 = 0;
    local_c = 0;
    local_8 = 0;
    uVar6 = F_00ab21a0((uint)*param_2);
    if (*(int *)(uVar6 + 0x10) == 0x20) {
      uVar3 = *(undefined2 *)(param_2 + 0xe);
      uVar9 = *(undefined2 *)(param_2 + 0xc);
    }
    else if (*(int *)(uVar6 + 0x10) == 0x21) {
      uVar1 = *(undefined2 *)(param_2 + 0xc);
      uVar2 = *(undefined2 *)(param_2 + 0xe);
    }
    else {
      local_8 = (uint)*(ushort *)(param_2 + 0xc);
      local_c = (uint)*(ushort *)(param_2 + 0xe);
    }
    if (piVar5 == (int *)0x0) {
      uVar6 = F_00a55330(&REFG(undefined * PTR32, 0x1334920),param_1);
      if (uVar6 != 0) {
        *(byte *)(uVar6 + 0x6a) = param_2[1];
        *(byte *)(uVar6 + 0x6b) = *param_2;
        *(undefined4 *)(uVar6 + 0x6c) = *(undefined4 *)(param_2 + 4);
        *(undefined4 *)(uVar6 + 0x74) = *(undefined4 *)(param_2 + 8);
        *(undefined2 *)(uVar6 + 0x70) = *(undefined2 *)(param_2 + 0xc);
        *(undefined2 *)(uVar6 + 0x78) = *(undefined2 *)(param_2 + 0xe);
        *(undefined2 *)(uVar6 + 0x72) = *(undefined2 *)(param_2 + 0x10);
        puVar8 = (undefined4 *)(uVar6 + 0x98);
        pbVar7 = param_2 + 0x14;
        iVar10 = 0x1e;
        do {
          *puVar8 = *(undefined4 *)pbVar7;
          puVar8[1] = *(undefined4 *)(pbVar7 + 4);
          puVar8[2] = *(undefined4 *)(pbVar7 + 8);
          pbVar7 = pbVar7 + 0xc;
          puVar8 = puVar8 + 3;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
    }
    else {
      *(byte *)(piVar5 + 0x5a2) = *param_2;
      *(byte *)((int)piVar5 + 0x1689) = param_2[1];
      piVar5[0x5a4] = *(int *)(param_2 + 4);
      piVar5[0x5a5] = *(int *)(param_2 + 8);
      piVar5[0x5a6] = local_8;
      piVar5[0x5a7] = local_c;
      *(undefined2 *)(piVar5 + 0x5a9) = uVar3;
      *(undefined2 *)((int)piVar5 + 0x16a2) = uVar9;
      *(undefined2 *)((int)piVar5 + 0x16a6) = uVar1;
      *(undefined2 *)(piVar5 + 0x5aa) = uVar2;
      *(undefined2 *)(piVar5 + 0x5a8) = *(undefined2 *)(param_2 + 0x10);
      bVar4 = F_00a9f620(piVar5);
      if (bVar4 == 0) {
        pbVar7 = param_2 + 0x14;
        this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0xd4))(piVar5)));
        F_00b7b8e0(this,pbVar7);
      }
    }
    uVar6 = F_00ae0810(&REFG(undefined, 0x1336e40),param_1);
    if (uVar6 != 0) {
      *(byte *)(uVar6 + 0x51) = *param_2;
      *(byte *)(uVar6 + 0x53) = param_2[2];
      *(byte *)(uVar6 + 0x54) = param_2[3];
      *(undefined4 *)(uVar6 + 0x58) = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)(uVar6 + 0x5c) = *(undefined4 *)(param_2 + 8);
      *(undefined2 *)(uVar6 + 0x60) = (undefined2)local_8;
      *(undefined2 *)(uVar6 + 0x62) = (undefined2)local_c;
      *(undefined2 *)(uVar6 + 100) = *(undefined2 *)(param_2 + 0x10);
      iVar10 = 0;
      puVar11 = (ushort *)(param_2 + 0x16);
      do {
        F_00b7b840(uVar6 + 0x6c,iVar10,(uint)puVar11[-1],*(float *)(puVar11 + 1),(uint)*puVar11,
                     *(undefined4 *)(puVar11 + 3));
        iVar10 = iVar10 + 1;
        puVar11 = puVar11 + 6;
      } while (iVar10 < 0x1e);
    }
    in_EAX = (int *)F_00ae0880(&REFG(undefined, 0x1336e40),param_1);
    if (in_EAX != (int *)0x0) {
      in_EAX[0x83] = *(int *)(param_2 + 4);
      in_EAX[0x84] = *(int *)(param_2 + 8);
      if (*in_EAX == REFG(int, 0x1379690)) {
        iVar10 = 0;
        piVar5 = in_EAX + 0x85;
        puVar11 = (ushort *)(param_2 + 0x16);
        do {
          in_EAX = (int *)F_00b7b840(piVar5,iVar10,(uint)puVar11[-1],*(float *)(puVar11 + 1),
                                       (uint)*puVar11,*(undefined4 *)(puVar11 + 3));
          iVar10 = iVar10 + 1;
          puVar11 = puVar11 + 6;
        } while (iVar10 < 0x1e);
      }
    }
    if (param_1 == REFG(int, 0x14ab5bc)) {
      REFG(undefined4, 0x14ab5c0) = *(undefined4 *)(param_2 + 4);
      REFG(undefined4, 0x14ab5c4) = *(undefined4 *)(param_2 + 8);
      iVar10 = 0;
      puVar11 = (ushort *)(param_2 + 0x16);
      do {
        in_EAX = (int *)F_00b7b840(&REFG(undefined, 0x14ab5c8),iVar10,(uint)puVar11[-1],*(float *)(puVar11 + 1),
                                     (uint)*puVar11,*(undefined4 *)(puVar11 + 3));
        iVar10 = iVar10 + 1;
        puVar11 = puVar11 + 6;
      } while (iVar10 < 0x1e);
    }
  }
  return (uint)in_EAX;
}

/* ref: FUN_00a55860 */
uint F_00a55860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa55860u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a54be0((undefined *)&REFG(undefined * PTR32, 0x1334920),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a55880 */
uint F_00a55880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa55880u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a54a90(&REFG(undefined * PTR32, 0x1334920),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a558a0 */
uint F_00a558a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa558a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a54950(&REFG(undefined * PTR32, 0x1334920),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a558c0 */
byte F_00a558c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa558c0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if (param_1 != REFG(undefined4, 0x1379690)) {
    bVar1 = F_00a54ef0(param_1);
    uVar2 = (uint)bVar1;
  }
  return (byte)uVar2;
}

/* ref: FUN_00a55930 */
uint F_00a55930(unsigned int gen_a0)
{
  GEN_ENTER(0xa55930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e5cd8));
  if (*(int *)((int)this + 0x44) != 0) {
    F_00406b30(*(int *)((int)this + 0x44) + -8);
    *(undefined4 *)((int)this + 0x44) = 0;
  }
  if (*(int *)((int)this + 0x34) != 0) {
    F_00406b30(*(int *)((int)this + 0x34) + -8);
    *(undefined4 *)((int)this + 0x34) = 0;
  }
  uVar1 = 0;
  if (*(int *)((int)this + 0x24) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 0x24) + -8);
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e5cc4));
  return uVar1;
}

/* ref: FUN_00a55990 */
uint F_00a55990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa55990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined4 uVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(ushort *)(param_2 + 2) - 0x1af;
  (*(undefined * PTR32 *)(gen_frame + 0x4c)) = this;
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 0: ;
  case 4: ;
  case 8: ;
    uVar3 = F_00a54d40(this,param_1,*(undefined4 *)(param_2 + 0x10),param_2);
    break;
  case 1: ;
    uVar4 = *(uint *)((int)this + 0x1c);
    if (uVar4 != 0) {
      do {
        if (*(int *)(uVar4 + 0x10) == *(int *)(param_2 + 0x10)) goto LAB_00a559ef;
        uVar4 = *(uint *)(uVar4 + 0x28);
      } while (uVar4 != 0);
    }
    uVar4 = F_00a53a10(this,*(undefined4 *)(param_2 + 0x10));
    uVar3 = 0;
    if (uVar4 != 0) {
LAB_00a559ef: ;
      this_00 = (*(undefined * PTR32 *)(gen_frame + 0x4c));
      uVar1 = *(undefined4 *)(param_2 + 0x10);
      iVar2 = *(int *)(param_2 + 0x14);
      ((uint *)(gen_frame + 0x0))[0] = (uint)*(ushort *)(param_2 + 2);
      (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(param_2 + 0x18);
      (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
      (*(int *)(gen_frame + 0xc)) = iVar2;
      (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(param_2 + 0x1c);
      *(int *)(uVar4 + 0x20) = iVar2 + 1;
      uVar3 = F_00a4fee0((*(undefined * PTR32 *)(gen_frame + 0x4c)),uVar4,((uint *)(gen_frame + 0x0)));
      if (*(int *)(uVar4 + 0x20) <= *(int *)(uVar4 + 0x1c)) {
        F_00a49c10(&REFG(undefined, 0x14a4230),*(undefined4 *)(uVar4 + 0x14),param_1);
        uVar3 = F_00a53a80(this_00,uVar4);
        return uVar3;
      }
    }
  }
  return uVar3;
}

/* ref: FUN_00a55a90 */
uint F_00a55a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa55a90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar2;
  
  bVar1 = F_00a5d350((undefined *)((int)this + 0x24),param_1,param_2,0,0);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    F_00a54e30(this,5);
    bVar1 = F_00a5d350((undefined *)((int)this + 0x24),param_1,param_2,0,0);
    uVar2 = CONCAT31(extraout_var_00,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00a55ae0 */
uint F_00a55ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa55ae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  undefined * this_00;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined4 * puVar3;
  uint uVar2;
  
  puVar3 = &(*(undefined4 *)(gen_frame + 0xc));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  F_009755f0(this_00,puVar3);
  bVar1 = F_00a5d450((undefined *)((int)this + 0x34),param_1,param_2,(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)));
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    F_00a55030(this,1);
    bVar1 = F_00a5d450((undefined *)((int)this + 0x34),param_1,param_2,0,0);
    uVar2 = CONCAT31(extraout_var_00,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00a55b70 */
uint F_00a55b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa55b70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar2;
  
  bVar1 = F_00a5d540((undefined *)((int)this + 0x44),param_1,param_2,0,0);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    F_00a55210(this,10);
    bVar1 = F_00a5d540((undefined *)((int)this + 0x44),param_1,param_2,0,0);
    uVar2 = CONCAT31(extraout_var_00,bVar1);
  }
  return uVar2;
}

/* ref: Global::HandleSpawn */
uint F_00a55c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa55c00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar2;
  
  bVar1 = F_00a5d350(&REFG(undefined, 0x1334944),param_1,param_2,0,0);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    F_00a54e30(&REFG(undefined * PTR32, 0x1334920),5);
    bVar1 = F_00a5d350(&REFG(undefined, 0x1334944),param_1,param_2,0,0);
    uVar2 = CONCAT31(extraout_var_00,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00a55c40 */
uint F_00a55c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa55c40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a55ae0(&REFG(undefined * PTR32, 0x1334920),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a55c60 */
uint F_00a55c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa55c60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar2;
  
  bVar1 = F_00a5d540(&REFG(undefined, 0x1334964),param_1,param_2,0,0);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    F_00a55210(&REFG(undefined * PTR32, 0x1334920),10);
    bVar1 = F_00a5d540(&REFG(undefined, 0x1334964),param_1,param_2,0,0);
    uVar2 = CONCAT31(extraout_var_00,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00a55ca0 */
uint F_00a55ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa55ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a55990(&REFG(undefined * PTR32, 0x1334920),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a55cc0 */
uint F_00a55cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xa55cc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5ce4));
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004296a0(0x10,0,800);
  *(uint *)((int)this + 4) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  return (uint)this;
}

/* ref: FUN_00a55cf0 */
unsigned int F_00a55cf0(unsigned int gen_a0)
{
  GEN_ENTER(0xa55cf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  
  piVar2 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 4)));
  if (piVar2 != *(int * PTR32 *)((int)this + 4)) {
    do {
      F_009bc530((undefined *)piVar2[2],1);
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)((int)this + 4));
  }
  piVar2 = *(int * PTR32 *)((int)this + 4);
  piVar1 = (int *)*piVar2;
  *piVar2 = (int)piVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)((int)this + 8) = 0;
  if (piVar1 != *(int * PTR32 *)((int)this + 4)) {
    do {
      piVar2 = (int *)*piVar1;
      F_00429760(piVar1,0x10,800);
      piVar1 = piVar2;
    } while (piVar2 != (int *)*(int *)((int)this + 4));
  }
  return 0;
}

/* ref: FUN_00a55d60 */
unsigned int F_00a55d60(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa55d60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  piVar2 = *(int * PTR32 *)(param_1 + 4);
  piVar3 = (int *)*piVar2;
  while (piVar4 = piVar3, piVar4 != piVar2) {
    fVar1 = gen_bits2f(piVar4[3]);
    if ((GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0)) &&
       (piVar4[3] = (int)gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f(piVar4[3]))) - (float10)param_2)),
       gen_bits2f(piVar4[3]) <= 0.0)) {
      F_009bc530((undefined *)piVar4[2],1);
      piVar3 = (int *)*piVar4;
      if (piVar4 != *(int * PTR32 *)(param_1 + 4)) {
        *(int * PTR32 *)piVar4[1] = piVar3;
        *(int *)(*piVar4 + 4) = piVar4[1];
        F_00429760(piVar4,0x10,800);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
      }
    }
    else {
      piVar3 = (int *)*piVar4;
    }
  }
  return 0;
}

/* ref: FUN_00a55df0 */
uint F_00a55df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0xa55df0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float10 fVar1;
  uint in_ecx;
  undefined * this;
  float * pfVar2;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  (*(int *)(gen_frame + 0xc)) = param_1;
  in_ecx = F_00ab44e0(param_2,param_3,(float)(float10)1,0);
  if (in_ecx != 0) {
    fVar1 = (float10)0;
    (*(float *)(gen_frame + 0x40)) = (float)fVar1;
    (*(float *)(gen_frame + 0x44)) = (float)fVar1;
    (*(float *)(gen_frame + 0x48)) = (float)fVar1;
    ((float *)(gen_frame + 0x10))[0] = param_5;
    ((float *)(gen_frame + 0x10))[1] = 0.0;
    ((float *)(gen_frame + 0x10))[2] = 0.0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(float *)(gen_frame + 0x24)) = param_5;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(float *)(gen_frame + 0x38)) = param_5;
    F_0065ed60(((float *)(gen_frame + 0x10)),param_6);
    pfVar2 = ((float *)(gen_frame + 0x10));
    (*(float *)(gen_frame + 0x40)) = (float)((float10)(*(float *)(gen_frame + 0x40)) + (float10)*param_3);
    (*(float *)(gen_frame + 0x44)) = (float)((float10)param_3[1] + (float10)(*(float *)(gen_frame + 0x44)));
    (*(float *)(gen_frame + 0x48)) = (float)((float10)param_3[2] + (float10)(*(float *)(gen_frame + 0x48)));
    this = (undefined *)F_00983160(in_ecx);
    F_009bc130(this,pfVar2);
    if ((!GEN_ISNAN(param_4) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(param_4 <= *(float *)&REFG(undefined, 0x1088114))) {
      (*(uint *)(gen_frame + 0x4)) = in_ecx;
      (*(float *)(gen_frame + 0x8)) = param_4;
      F_00a5ed60((undefined *)((*(int *)(gen_frame + 0xc)) + 4),&(*(uint *)(gen_frame + 0x4)));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60));
  return in_ecx;
}

/* ref: FUN_00a55f00 */
uint F_00a55f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0xa55f00u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  uVar1 = F_00ab4370(param_2,param_3,param_4,0,0);
  if ((uVar1 != 0) &&
     ((!GEN_ISNAN(param_5) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(param_5 <= *(float *)&REFG(undefined, 0x1088114)))) {
    (*(uint *)(gen_frame + 0x4)) = uVar1;
    (*(float *)(gen_frame + 0x8)) = param_5;
    F_00a5ed60((undefined *)(param_1 + 4),&(*(uint *)(gen_frame + 0x4)));
  }
  return uVar1;
}

/* ref: FUN_00a55f60 */
uint F_00a55f60(unsigned int gen_a0)
{
  GEN_ENTER(0xa55f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5ce4));
  F_00a55cf0(this);
  uVar1 = F_00a5ec40((undefined *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00a5c400 */
ushort F_00a5c400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  ushort uVar1;
  
  *(undefined4 *)((int)this + 0x166c) = *param_1;
  uVar1 = *(ushort *)(param_1 + 1);
  *(ushort *)((int)this + 0x1670) = uVar1;
  return uVar1;
}

/* ref: FUN_00a5c430 */
byte F_00a5c430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c430u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x02' ^ *(byte *)(in_ecx + 0x2dd4)) & 2;
  *(byte *)(in_ecx + 0x2dd4) = *(byte *)(in_ecx + 0x2dd4) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00a5c450 */
byte F_00a5c450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c450u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\b' ^ *(byte *)(in_ecx + 0x2dd4)) & 8;
  *(byte *)(in_ecx + 0x2dd4) = *(byte *)(in_ecx + 0x2dd4) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00a5c470 */
byte F_00a5c470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c470u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x196) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5c480 */
uint F_00a5c480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5c480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x198) = param_1;
  *(undefined4 *)((int)this + 0x19c) = param_2;
  return param_1;
}

/* ref: FUN_00a5c4a0 */
uint F_00a5c4a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5c4a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x1a0) = param_1;
  *(undefined4 *)((int)this + 0x1a4) = param_2;
  return param_1;
}

/* ref: FUN_00a5c4c0 */
byte F_00a5c4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c4c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1688) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5c4d0 */
byte F_00a5c4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c4d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1689) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5c4e0 */
uint F_00a5c4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c4e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1690) = param_2;
  return param_2;
}

/* ref: FUN_00a5c4f0 */
uint F_00a5c4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c4f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1694) = param_2;
  return param_2;
}

/* ref: FUN_00a5c500 */
uint F_00a5c500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c500u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1698) = param_2;
  return param_2;
}

/* ref: FUN_00a5c510 */
uint F_00a5c510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c510u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x169c) = param_2;
  return param_2;
}

/* ref: FUN_00a5c520 */
ushort F_00a5c520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c520u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x16a0) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5c540 */
ushort F_00a5c540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c540u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x16a2) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5c560 */
ushort F_00a5c560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c560u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x16a4) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5c580 */
ushort F_00a5c580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c580u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x16a6) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5c5a0 */
ushort F_00a5c5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c5a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x16a8) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5c5c0 */
uint F_00a5c5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5c5c0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  uint uVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xd4))(param_1);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0xd4))(param_1);
    uVar2 = F_00b7b840(uVar2,param_2,param_3,param_4,param_5,param_6);
  }
  return uVar2;
}

/* ref: FUN_00a5c610 */
byte F_00a5c610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c610u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x18a) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5c620 */
byte F_00a5c620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c620u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x02' ^ *(byte *)(in_ecx + 0x2dd2)) & 2;
  *(byte *)(in_ecx + 0x2dd2) = *(byte *)(in_ecx + 0x2dd2) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00a5c670 */
byte F_00a5c670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c670u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1c) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5c680 */
unsigned int F_00a5c680(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa5c680u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x20) = param_2;
  return 0;
}

/* ref: FUN_00a5c6a0 */
uint F_00a5c6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c6a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x24) = param_2;
  return param_2;
}

/* ref: FUN_00a5c6b0 */
byte F_00a5c6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c6b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x22e) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5c6c0 */
uint F_00a5c6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c6c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x254) = param_2;
  return param_2;
}

/* ref: FUN_00a5c6d0 */
byte F_00a5c6d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c6d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x60) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5c6e0 */
uint F_00a5c6e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5c6e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if ((-1 < (int)param_1) && (param_1 < 3)) {
    *(undefined1 *)(param_1 + 0x22f + (int)this) = (undefined1)param_2;
  }
  return param_1;
}

/* ref: FUN_00a5c700 */
uint F_00a5c700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5c700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 < 4) {
    *(undefined1 *)(param_1 + 600 + (int)this) = (undefined1)param_2;
  }
  return param_1;
}

/* ref: FUN_00a5c720 */
uint F_00a5c720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5c720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte * pbVar1;
  uint uVar2;
  byte bVar3;
  
  uVar2 = param_1 >> 3;
  if (uVar2 < 4) {
    bVar3 = (byte)(0x80 >> ((byte)param_1 & 7));
    if ((char)param_2 != '\0') {
      pbVar1 = (byte *)(uVar2 + 600 + (int)this);
      *pbVar1 = *pbVar1 | bVar3;
      return uVar2;
    }
    pbVar1 = (byte *)(uVar2 + 600 + (int)this);
    *pbVar1 = *pbVar1 & ~bVar3;
  }
  return uVar2;
}

/* ref: FUN_00a5c760 */
uint F_00a5c760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5c760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 < 3) {
    *(undefined4 *)((int)this + param_1 * 4 + 0x25c) = param_2;
  }
  return param_1;
}

/* ref: FUN_00a5c780 */
uint F_00a5c780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c780u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x268) = param_2;
  return param_2;
}

/* ref: FUN_00a5c790 */
uint F_00a5c790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa5c790u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined2 *)((int)this + param_1 * 2 + 0x272) = (undefined2)param_2;
  *(undefined2 *)((int)this + param_1 * 2 + 0x296) = (undefined2)param_3;
  return param_1;
}

/* ref: FUN_00a5c7c0 */
byte F_00a5c7c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5c7c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(byte *)(param_1 + 0x2d3 + (int)this) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5c7e0 */
uint F_00a5c7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c7e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x308) = param_2;
  return param_2;
}

/* ref: FUN_00a5c7f0 */
uint F_00a5c7f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5c7f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x3aa8) = param_1;
  *(undefined2 *)((int)this + 0x3aac) = (undefined2)param_2;
  return param_1;
}

/* ref: FUN_00a5c810 */
float10 F_00a5c810(unsigned int gen_a0)
{
  GEN_ENTER(0xa5c810u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return (float10)((float)GEN_TOF((((float10)(param_1 & 0xffff) * (float10)*(double *)&REFG(undefined, 0x10a3960)) *
                          (float10)*(double *)&REFG(undefined, 0x10928e8) - (float10)*(double *)&REFG(undefined, 0x10912a8))));
}

/* ref: FUN_00a5c840 */
uint F_00a5c840(unsigned int gen_a0)
{
  GEN_ENTER(0xa5c840u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1 & 0xffff;
}

/* ref: FUN_00a5c880 */
uint F_00a5c880(unsigned int gen_a0)
{
  GEN_ENTER(0xa5c880u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1 & 0xff;
}

/* ref: FUN_00a5c8c0 */
uint F_00a5c8c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c8c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)((int)this + 4) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5c8e0 */
uint F_00a5c8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c8e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)((int)this + 6) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5c8f0 */
uint F_00a5c8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)((int)this + 7) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5c900 */
uint F_00a5c900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5c900u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined1 *)(param_1 + 8 + (int)this) = *param_2;
  return param_1;
}

/* ref: FUN_00a5c920 */
uint F_00a5c920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)((int)this + 4) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5c940 */
uint F_00a5c940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)((int)this + 6) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5c950 */
uint F_00a5c950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)((int)this + 8) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5c970 */
uint F_00a5c970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)((int)this + 10) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5c990 */
uint F_00a5c990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)((int)this + 0xc) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5c9a0 */
uint F_00a5c9a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c9a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)((int)this + 4) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5c9b0 */
uint F_00a5c9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)((int)this + 5) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5c9d0 */
uint F_00a5c9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c9d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x15bc + in_ecx;
}

/* ref: FUN_00a5c9f0 */
uint F_00a5c9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c9f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x1df1 + in_ecx;
}

/* ref: FUN_00a5ca10 */
uint F_00a5ca10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5ca10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined1 *)(param_1 + 0x12ea + (int)this) = *param_2;
  return param_1;
}

/* ref: FUN_00a5ca30 */
uint F_00a5ca30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5ca30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined1 *)(param_1 + 0x15bc + (int)this) = *param_2;
  return param_1;
}

/* ref: FUN_00a5ca50 */
uint F_00a5ca50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ca50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x12ea + in_ecx;
}

/* ref: FUN_00a5ca70 */
uint F_00a5ca70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ca70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x1594 + in_ecx;
}

/* ref: FUN_00a5ca90 */
uint F_00a5ca90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ca90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x15bc + in_ecx;
}

/* ref: FUN_00a5cab0 */
uint F_00a5cab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cab0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 0x1890 + param_2 * 8;
}

/* ref: FUN_00a5cad0 */
uint F_00a5cad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cad0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x2088 + in_ecx;
}

/* ref: FUN_00a5caf0 */
uint F_00a5caf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5caf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x20a4 + in_ecx;
}

/* ref: FUN_00a5cb10 */
uint F_00a5cb10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cb10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x20b6 + in_ecx;
}

/* ref: FUN_00a5cb30 */
uint F_00a5cb30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cb30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x20c0 + in_ecx;
}

/* ref: FUN_00a5cb50 */
uint F_00a5cb50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cb50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x20c6 + in_ecx;
}

/* ref: FUN_00a5cb70 */
uint F_00a5cb70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cb70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x20c8 + in_ecx;
}

/* ref: FUN_00a5cb90 */
uint F_00a5cb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cb90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x20e4 + in_ecx;
}

/* ref: FUN_00a5cbb0 */
uint F_00a5cbb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cbb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x20f6 + in_ecx;
}

/* ref: FUN_00a5cbd0 */
uint F_00a5cbd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cbd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x2100 + in_ecx;
}

/* ref: FUN_00a5cbf0 */
uint F_00a5cbf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cbf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x2106 + in_ecx;
}

/* ref: FUN_00a5cc10 */
uint F_00a5cc10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cc10u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00a5cc20 */
uint F_00a5cc20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cc20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00a5cc30 */
uint F_00a5cc30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5cc30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  return param_1;
}

/* ref: FUN_00a5cc50 */
uint F_00a5cc50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cc50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c4d9ef((int)this + 0x10,0x40,param_1,0x3f);
  return uVar1;
}

/* ref: FUN_00a5cc70 */
byte F_00a5cc70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cc70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x50) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5cc80 */
byte F_00a5cc80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cc80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x51) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5cc90 */
byte F_00a5cc90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cc90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x52) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5cca0 */
byte F_00a5cca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cca0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x53) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5ccb0 */
byte F_00a5ccb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ccb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x54) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5ccc0 */
uint F_00a5ccc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ccc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x58) = param_2;
  return param_2;
}

/* ref: FUN_00a5ccd0 */
uint F_00a5ccd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ccd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x5c) = param_2;
  return param_2;
}

/* ref: FUN_00a5cce0 */
ushort F_00a5cce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cce0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x60) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5ccf0 */
ushort F_00a5ccf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ccf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x62) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5cd00 */
ushort F_00a5cd00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cd00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 100) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5cd10 */
ushort F_00a5cd10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cd10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x66) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5cd20 */
byte F_00a5cd20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cd20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x68) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5cd30 */
byte F_00a5cd30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cd30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x69) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5cd40 */
byte F_00a5cd40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cd40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x6a) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5cd50 */
uint F_00a5cd50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cd50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x1f0) = *param_2;
  *(undefined4 *)(in_ecx + 500) = param_2[1];
  *(undefined4 *)(in_ecx + 0x1f8) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00a5cd80 */
byte F_00a5cd80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cd80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1e0) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5cd90 */
byte F_00a5cd90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cd90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x204) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5cda0 */
uint F_00a5cda0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cda0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x208) = param_2;
  return param_2;
}

/* ref: FUN_00a5cdb0 */
uint F_00a5cdb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cdb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x20c) = param_2;
  return param_2;
}

/* ref: FUN_00a5cdc0 */
uint F_00a5cdc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cdc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x210) = param_2;
  return param_2;
}

/* ref: FUN_00a5cde0 */
uint F_00a5cde0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5cde0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x388) = param_1;
  *(undefined4 *)((int)this + 0x38c) = param_2;
  return param_1;
}

/* ref: FUN_00a5ce00 */
uint F_00a5ce00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ce00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1c90) = param_2;
  return param_2;
}

/* ref: FUN_00a5ce10 */
byte F_00a5ce10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ce10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1c94) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5ce20 */
uint F_00a5ce20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5ce20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x1c80) = param_1;
  *(undefined4 *)((int)this + 0x1c84) = param_2;
  return param_1;
}

/* ref: FUN_00a5ce40 */
uint F_00a5ce40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5ce40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x1c88) = param_1;
  *(undefined4 *)((int)this + 0x1c8c) = param_2;
  return param_1;
}

/* ref: FUN_00a5ce60 */
byte F_00a5ce60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ce60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1c95) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5ce70 */
byte F_00a5ce70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ce70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 1) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5ce80 */
unsigned int F_00a5ce80(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa5ce80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 4) = param_2;
  return 0;
}

/* ref: FUN_00a5cea0 */
unsigned int F_00a5cea0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa5cea0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 8) = param_2;
  return 0;
}

/* ref: FUN_00a5cec0 */
uint F_00a5cec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cec0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x2c) = param_2;
  return param_2;
}

/* ref: FUN_00a5ced0 */
byte F_00a5ced0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ced0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x30) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5cee0 */
byte F_00a5cee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cee0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x31) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5cef0 */
byte F_00a5cef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cef0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x35) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5cf00 */
uint F_00a5cf00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cf00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x3c) = param_2;
  return param_2;
}

/* ref: FUN_00a5cf10 */
uint F_00a5cf10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cf10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x40) = param_2;
  return param_2;
}

/* ref: FUN_00a5cf20 */
byte F_00a5cf20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cf20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1b8) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5cf30 */
byte F_00a5cf30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cf30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1b9) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5cf60 */
unsigned int F_00a5cf60(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa5cf60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x24) = param_2;
  return 0;
}

/* ref: FUN_00a5cf80 */
unsigned int F_00a5cf80(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa5cf80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x7cc) = param_2;
  return 0;
}

/* ref: FUN_00a5cfa0 */
unsigned int F_00a5cfa0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa5cfa0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x184) = param_2;
  return 0;
}

/* ref: FUN_00a5cfc0 */
unsigned int F_00a5cfc0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa5cfc0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x18c) = param_2;
  return 0;
}

/* ref: FUN_00a5cfe0 */
uint F_00a5cfe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cfe0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1ec) = param_2;
  return param_2;
}

/* ref: FUN_00a5cff0 */
uint F_00a5cff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cff0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1d0) = param_2;
  return param_2;
}

/* ref: FUN_00a5d000 */
byte F_00a5d000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d000u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1e2) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5d010 */
uint F_00a5d010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d010u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1e4) = param_2;
  return param_2;
}

/* ref: FUN_00a5d020 */
uint F_00a5d020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5d020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  return param_1;
}

/* ref: FUN_00a5d040 */
ushort F_00a5d040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d040u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x18a) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5d070 */
uint F_00a5d070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5d070u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00b07230((undefined *)((int)this + 0x10),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a5d090 */
uint F_00a5d090(unsigned int gen_a0)
{
  GEN_ENTER(0xa5d090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined1 *)((int)this + 0x90) = 1;
  uVar1 = F_008edf60(this);
  return uVar1;
}

/* ref: Client::Game::Network::PacketElement::vf0 */
uint F_00a5d0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d0b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  undefined * pPVar2;
  
  if ((param_1 & 2) == 0) {
    *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5cb4));
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
    return (uint)this;
  }
  iVar1 = *(int *)(this + -8);
  pPVar2 = this + iVar1 * 0x58;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    pPVar2 = pPVar2 + -0x58;
    *(undefined * PTR32 * PTR32 *)pPVar2 = (*(undefined * PTR32 (*)[1])REFP(0x10e5cb4));
  }
  if ((param_1 & 1) != 0) {
    F_00406b30(this + -8);
  }
  return (uint)(this + -8);
}

/* ref: Client::Game::Network::PacketContext::vf0 */
uint F_00a5d110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  undefined * pPVar2;
  
  if ((param_1 & 2) == 0) {
    *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5cbc));
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
    return (uint)this;
  }
  iVar1 = *(int *)(this + -4);
  pPVar2 = this + iVar1 * 0x30;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    pPVar2 = pPVar2 + -0x30;
    *(undefined * PTR32 * PTR32 *)pPVar2 = (*(undefined * PTR32 (*)[1])REFP(0x10e5cbc));
  }
  if ((param_1 & 1) != 0) {
    F_00406b30(this + -4);
  }
  return (uint)(this + -4);
}

/* ref: FUN_00a5d1c0 */
uint F_00a5d1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d1c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 4 + param_2 * 4;
}

/* ref: FUN_00a5d1d0 */
uint F_00a5d1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d1d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 0x14) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5d1e0 */
uint F_00a5d1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 0x18) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5d1f0 */
uint F_00a5d1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 0x1c) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5d200 */
uint F_00a5d200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 0x20) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5d210 */
uint F_00a5d210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 0x24) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5d220 */
uint F_00a5d220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5d220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)((int)this + param_1 * 4 + 4) = *param_2;
  return param_1;
}

/* ref: FUN_00a5d240 */
unsigned int F_00a5d240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa5d240u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if ((ushort)param_1 <= (ushort)param_2) {
    puVar1 = (undefined4 *)((int)this + (uint)(ushort)param_1 * 4 + 4);
    uVar2 = (uint)(ushort)(((ushort)param_2 - (ushort)param_1) + 1);
    do {
      *puVar1 = *((undefined4 *)GEN_TOP((param_3 + (uVar3 & 0xffff) * 4)));
      puVar1 = puVar1 + 1;
      uVar3 = uVar3 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00a5d290 */
byte F_00a5d290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d290u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x271) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5d2a0 */
byte F_00a5d2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d2a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x3a6d) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5d2b0 */
byte F_00a5d2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d2b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1b0) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5d2c0 */
uint F_00a5d2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d2c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 0x5a8c + param_2 * 4;
}

/* ref: FUN_00a5d2f0 */
uint F_00a5d2f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa5d2f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 gen_out[0x4];
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  F_00edfd00(this);
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  F_00c47745(uVar1 ^ (uint)(uint)(gen_out + 0x0));
  return (uint)this;
}

/* ref: Global::QueueSpawn */
byte F_00a5d350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa5d350u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  uVar3 = (*(int *)((int)this + 0xc) + 1U) % *(uint *)((int)this + 4);
  if (uVar3 == *(uint *)((int)this + 8)) {
    return 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) * 0x2a0 + *(int *)this))) = param_1;
  puVar4 = param_2;
  puVar5 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) * 0x2a0 + 0x10 + *(int *)this)));
  for (iVar2 = 0xa2; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  iVar2 = *(int *)this;
  iVar1 = *(int *)((int)this + 0xc) * 0x2a0;
  *(undefined4 *)(iVar1 + 8 + iVar2) = param_3;
  *(undefined4 *)(iVar1 + 0xc + iVar2) = param_4;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xc) * 0x2a0 + 0x298 + *(int *)this))) = 1;
  *(uint *)((int)this + 0xc) = uVar3;
  return 1;
}

/* ref: FUN_00a5d400 */
byte F_00a5d400(unsigned int gen_a0)
{
  GEN_ENTER(0xa5d400u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  return *param_1 == -1;
}

/* ref: FUN_00a5d420 */
uint F_00a5d420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d420u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *param_2;
  if ((-1 < (int)uVar1) && (uVar1 < (uint)in_ecx[1])) {
    uVar1 = uVar1 * 0x2a0;
    *(undefined1 *)(uVar1 + 0x298 + *in_ecx) = 0;
  }
  return uVar1;
}

/* ref: FUN_00a5d450 */
byte F_00a5d450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa5d450u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (*(int *)((int)this + 0xc) + 1U) % *(uint *)((int)this + 4);
  if (uVar4 == *(uint *)((int)this + 8)) {
    return 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 0xc) * 0x28))) = param_1;
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + 0x10 + *(int *)((int)this + 0xc) * 0x28)));
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[3] = param_2[3];
  iVar2 = *(int *)((int)this + 0xc);
  iVar3 = *(int *)this;
  *(undefined4 *)(iVar3 + 8 + iVar2 * 0x28) = param_3;
  *(undefined4 *)(iVar3 + 0xc + iVar2 * 0x28) = param_4;
  *((undefined1 *)GEN_TOP((*(int *)this + 0x20 + *(int *)((int)this + 0xc) * 0x28))) = 1;
  *(uint *)((int)this + 0xc) = uVar4;
  return 1;
}

/* ref: FUN_00a5d500 */
byte F_00a5d500(unsigned int gen_a0)
{
  GEN_ENTER(0xa5d500u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  return *param_1 == -1;
}

/* ref: FUN_00a5d520 */
uint F_00a5d520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = uVar1;
  if ((-1 < (int)uVar1) && (uVar1 < *(uint *)((int)this + 4))) {
    uVar2 = *(uint *)this;
    *(undefined1 *)(uVar2 + 0x20 + uVar1 * 0x28) = 0;
  }
  return uVar2;
}

/* ref: FUN_00a5d540 */
byte F_00a5d540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa5d540u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (*(int *)((int)this + 0xc) + 1U) % *(uint *)((int)this + 4);
  if (uVar4 == *(uint *)((int)this + 8)) {
    return 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 0xc) * 0x28))) = param_1;
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + 0x10 + *(int *)((int)this + 0xc) * 0x28)));
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[3] = param_2[3];
  iVar2 = *(int *)((int)this + 0xc);
  iVar3 = *(int *)this;
  *(undefined4 *)(iVar3 + 8 + iVar2 * 0x28) = param_3;
  *(undefined4 *)(iVar3 + 0xc + iVar2 * 0x28) = param_4;
  *((undefined1 *)GEN_TOP((*(int *)this + 0x20 + *(int *)((int)this + 0xc) * 0x28))) = 1;
  *(uint *)((int)this + 0xc) = uVar4;
  return 1;
}

/* ref: FUN_00a5d5f0 */
byte F_00a5d5f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa5d5f0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  return *param_1 == -1;
}

/* ref: FUN_00a5d610 */
uint F_00a5d610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = uVar1;
  if ((-1 < (int)uVar1) && (uVar1 < *(uint *)((int)this + 4))) {
    uVar2 = *(uint *)this;
    *(undefined1 *)(uVar2 + 0x20 + uVar1 * 0x28) = 0;
  }
  return uVar2;
}

/* ref: FUN_00a5d630 */
uint F_00a5d630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa5d630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)this = 300;
  *(undefined4 *)((int)this + 4) = 0x20;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined1 *)((int)this + 0x20) = (undefined1)param_3;
  return (uint)this;
}

/* ref: FUN_00a5d660 */
uint F_00a5d660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xa5d660u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined4 *)((int)this + 0x20) = param_3;
  *(undefined4 *)((int)this + 0x24) = param_4;
  *(undefined4 *)((int)this + 0x28) = param_5;
  *(undefined4 *)this = 0x191;
  *(undefined4 *)((int)this + 4) = 0x30;
  *(undefined4 *)((int)this + 0x30) = param_6;
  *(undefined4 *)((int)this + 0x34) = param_7;
  return (uint)this;
}

/* ref: FUN_00a5d6a0 */
uint F_00a5d6a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6, float gen_a7, float gen_a8)
{
  GEN_ENTER(0xa5d6a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  float param_9 = (float)gen_a8;
  param_1[6] = param_2;
  param_1[0xb] = (undefined4)gen_fl2bits(param_7);
  param_1[7] = param_3;
  param_1[8] = param_4;
  param_1[0xc] = (undefined4)gen_fl2bits(param_8);
  *param_1 = 0x195;
  param_1[1] = 0x30;
  param_1[9] = param_5;
  param_1[10] = param_6;
  param_1[0xd] = (undefined4)gen_fl2bits(param_9);
  return (uint)param_1;
}

/* ref: FUN_00a5d700 */
uint F_00a5d700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa5d700u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  *(undefined1 *)((int)this + 0x18) = (undefined1)param_1;
  *(undefined1 *)((int)this + 0x19) = (undefined1)param_2;
  *(undefined4 *)((int)this + 0x1c) = param_3;
  *(undefined4 *)((int)this + 0x20) = param_4;
  *(undefined2 *)((int)this + 0x24) = (undefined2)param_5;
  *(undefined2 *)((int)this + 0x26) = (undefined2)param_6;
  *(undefined4 *)this = 0x196;
  *(undefined4 *)((int)this + 4) = 0x28;
  *(undefined4 *)((int)this + 0x28) = param_7;
  *(undefined4 *)((int)this + 0x2c) = param_8;
  return (uint)this;
}

/* ref: FUN_00a5d750 */
uint F_00a5d750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xa5d750u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined4 *)((int)this + 0x20) = param_3;
  *(undefined4 *)((int)this + 0x24) = param_4;
  *(undefined4 *)((int)this + 0x28) = param_5;
  *(undefined4 *)this = 0x197;
  *(undefined4 *)((int)this + 4) = 0x30;
  *(undefined4 *)((int)this + 0x30) = param_6;
  *(undefined4 *)((int)this + 0x34) = param_7;
  return (uint)this;
}

/* ref: FUN_00a5d790 */
uint F_00a5d790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa5d790u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a6;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x20) = param_3;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined4 *)((int)this + 0x28) = param_5;
  *(undefined4 *)this = 0x198;
  *(undefined4 *)((int)this + 4) = 0x48;
  *(undefined4 *)((int)this + 0x24) = param_4;
  puVar2 = param_6;
  puVar3 = (undefined4 *)((int)this + 0x2c);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5d7e0 */
uint F_00a5d7e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, float gen_a7, float gen_a8, float gen_a9)
{
  GEN_ENTER(0xa5d7e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  float param_8 = (float)gen_a7;
  float param_9 = (float)gen_a8;
  float param_10 = (float)gen_a9;
  *(undefined1 *)(param_1 + 6) = (undefined1)param_2;
  *(undefined1 *)((int)param_1 + 0x19) = (undefined1)param_3;
  param_1[10] = (undefined4)gen_fl2bits(param_8);
  param_1[7] = param_4;
  param_1[8] = param_5;
  param_1[0xb] = (undefined4)gen_fl2bits(param_9);
  *param_1 = 0x199;
  param_1[1] = 0x30;
  *(undefined2 *)(param_1 + 9) = (undefined2)param_6;
  *(undefined2 *)((int)param_1 + 0x26) = (undefined2)param_7;
  param_1[0xc] = (undefined4)gen_fl2bits(param_10);
  return (uint)param_1;
}

/* ref: FUN_00a5d840 */
unsigned int F_00a5d840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12)
{
  GEN_ENTER(0xa5d840u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  undefined4 param_10 = (undefined4)gen_a10;
  undefined4 param_11 = (undefined4)gen_a11;
  undefined4 param_12 = (undefined4)gen_a12;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined1 *)((int)this + 0x1c) = (undefined1)param_2;
  *(undefined4 *)((int)this + 0x20) = param_3;
  *(undefined4 *)((int)this + 0x24) = param_4;
  *(undefined2 *)((int)this + 0x28) = (undefined2)param_5;
  *(undefined4 *)((int)this + 0x2c) = param_6;
  *(undefined4 *)((int)this + 0x30) = param_7;
  *(undefined4 *)((int)this + 0x34) = param_8;
  *(undefined4 *)((int)this + 0x38) = param_9;
  *(undefined2 *)((int)this + 0x3c) = (undefined2)param_10;
  *(undefined4 *)this = 0x1ae;
  *(undefined4 *)((int)this + 4) = 0x40;
  *(undefined4 *)((int)this + 0x40) = param_11;
  *(undefined4 *)((int)this + 0x44) = param_12;
  return 0;
}

/* ref: FUN_00a5d8b0 */
uint F_00a5d8b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa5d8b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)this = 0x1b3;
  *(undefined4 *)((int)this + 4) = 0x20;
  *(undefined1 *)((int)this + 0x1c) = (undefined1)param_2;
  *(undefined4 *)((int)this + 0x20) = param_3;
  return (uint)this;
}

/* ref: FUN_00a5d8e0 */
uint F_00a5d8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5d8e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1d7;
  *(undefined4 *)((int)this + 4) = 0x20;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  *(undefined4 *)((int)this + 0x20) = *param_5;
  *(undefined4 *)((int)this + 0x24) = param_5[1];
  return (uint)this;
}

/* ref: FUN_00a5d920 */
uint F_00a5d920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5d920u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1d8;
  *(undefined4 *)((int)this + 4) = 0x28;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  *(undefined4 *)((int)this + 0x20) = *param_5;
  *(undefined4 *)((int)this + 0x24) = param_5[1];
  *(undefined4 *)((int)this + 0x28) = param_5[2];
  *(undefined4 *)((int)this + 0x2c) = param_5[3];
  return (uint)this;
}

/* ref: FUN_00a5d970 */
uint F_00a5d970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5d970u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1d9;
  *(undefined4 *)((int)this + 4) = 0x38;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  puVar2 = param_5;
  puVar3 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5d9c0 */
uint F_00a5d9c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5d9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1da;
  *(undefined4 *)((int)this + 4) = 0x58;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  puVar2 = param_5;
  puVar3 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5da10 */
uint F_00a5da10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5da10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1db;
  *(undefined4 *)((int)this + 4) = 0x98;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  puVar2 = param_5;
  puVar3 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5da60 */
uint F_00a5da60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5da60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1dc;
  *(undefined4 *)((int)this + 4) = 0x118;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  puVar2 = param_5;
  puVar3 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5dab0 */
uint F_00a5dab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5dab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1dd;
  *(undefined4 *)((int)this + 4) = 0x218;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  puVar2 = param_5;
  puVar3 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5db00 */
uint F_00a5db00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5db00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1de;
  *(undefined4 *)((int)this + 4) = 0x418;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  puVar2 = param_5;
  puVar3 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5db50 */
uint F_00a5db50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5db50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1e0;
  *(undefined4 *)((int)this + 4) = 0x20;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  *(undefined4 *)((int)this + 0x20) = *param_5;
  *(undefined4 *)((int)this + 0x24) = param_5[1];
  return (uint)this;
}

/* ref: FUN_00a5db90 */
uint F_00a5db90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5db90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1e1;
  *(undefined4 *)((int)this + 4) = 0x28;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  *(undefined4 *)((int)this + 0x20) = *param_5;
  *(undefined4 *)((int)this + 0x24) = param_5[1];
  *(undefined4 *)((int)this + 0x28) = param_5[2];
  *(undefined4 *)((int)this + 0x2c) = param_5[3];
  return (uint)this;
}

/* ref: FUN_00a5dbe0 */
uint F_00a5dbe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5dbe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1e2;
  *(undefined4 *)((int)this + 4) = 0x38;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  puVar2 = param_5;
  puVar3 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5dc30 */
uint F_00a5dc30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5dc30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1e3;
  *(undefined4 *)((int)this + 4) = 0x58;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  puVar2 = param_5;
  puVar3 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5dc80 */
uint F_00a5dc80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5dc80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1e4;
  *(undefined4 *)((int)this + 4) = 0x98;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  puVar2 = param_5;
  puVar3 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5dcd0 */
uint F_00a5dcd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5dcd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1e5;
  *(undefined4 *)((int)this + 4) = 0x118;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  puVar2 = param_5;
  puVar3 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5dd20 */
uint F_00a5dd20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5dd20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1e6;
  *(undefined4 *)((int)this + 4) = 0x218;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  puVar2 = param_5;
  puVar3 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5dd70 */
uint F_00a5dd70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5dd70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1e7;
  *(undefined4 *)((int)this + 4) = 0x418;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  puVar2 = param_5;
  puVar3 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5ddc0 */
uint F_00a5ddc0(unsigned int gen_a0)
{
  GEN_ENTER(0xa5ddc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a5ddd0 */
uint F_00a5ddd0(unsigned int gen_a0)
{
  GEN_ENTER(0xa5ddd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00a5de00 */
uint F_00a5de00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5de00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 << 4,800);
  return (uint)uVar1;
}

/* ref: FUN_00a5de20 */
uint F_00a5de20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa5de20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1eb;
  *(undefined4 *)((int)this + 4) = 0x20;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined4 *)((int)this + 0x1f) = *param_4;
  *(undefined4 *)((int)this + 0x23) = param_4[1];
  return (uint)this;
}

/* ref: FUN_00a5de60 */
uint F_00a5de60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa5de60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1ec;
  *(undefined4 *)((int)this + 4) = 0x28;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined4 *)((int)this + 0x1f) = *param_4;
  *(undefined4 *)((int)this + 0x23) = param_4[1];
  *(undefined4 *)((int)this + 0x27) = param_4[2];
  *(undefined4 *)((int)this + 0x2b) = param_4[3];
  return (uint)this;
}

/* ref: FUN_00a5deb0 */
uint F_00a5deb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa5deb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined1 *)((int)this + 4) = (undefined1)param_2;
  *(undefined1 *)((int)this + 5) = (undefined1)param_3;
  return (uint)this;
}

/* ref: FUN_00a5ded0 */
uint F_00a5ded0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa5ded0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1ed;
  *(undefined4 *)((int)this + 4) = 0x38;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  puVar2 = param_4;
  puVar3 = (undefined4 *)((int)this + 0x1f);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5df40 */
uint F_00a5df40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5df40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_00a5df60 */
uint F_00a5df60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa5df60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined1 *)((int)this + 4) = (undefined1)param_2;
  *(undefined1 *)((int)this + 5) = (undefined1)param_3;
  return (uint)this;
}

/* ref: FUN_00a5df80 */
uint F_00a5df80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa5df80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a6;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined4 *)((int)this + 0x24) = param_5;
  *(undefined4 *)this = 0x1ee;
  *(undefined4 *)((int)this + 4) = 0x40;
  *(undefined4 *)((int)this + 0x20) = param_4;
  puVar2 = param_6;
  puVar3 = (undefined4 *)((int)this + 0x28);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5dff0 */
uint F_00a5dff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa5dff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined1 *)((int)this + 4) = (undefined1)param_2;
  *(undefined1 *)((int)this + 5) = (undefined1)param_3;
  return (uint)this;
}

/* ref: FUN_00a5e030 */
uint F_00a5e030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5e030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_00a5e050 */
uint F_00a5e050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5e050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_00a5e070 */
uint F_00a5e070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e070u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = 0x262;
  in_ecx[1] = 0x18;
  *(undefined2 *)(in_ecx + 6) = (undefined2)param_2;
  return (uint)in_ecx;
}

/* ref: Client::Network::Protocol::Zone::PacketReceiverCallbackInterface::vf0 */
uint F_00a5e0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e0a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e5cc4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a5e0e0 */
uint F_00a5e0e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5e0e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00a5e100 */
byte F_00a5e100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00a5e130 */
uint F_00a5e130(unsigned int gen_a0)
{
  GEN_ENTER(0xa5e130u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00a5e160 */
uint F_00a5e160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e160u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 << 4,param_2,800);
  return uVar1;
}

/* ref: FUN_00a5e180 */
uint F_00a5e180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5e180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a5e1a0 */
uint F_00a5e1a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa5e1a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00a5e1c0 */
unsigned int F_00a5e1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5e1c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00a5e1f0 */
uint F_00a5e1f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa5e1f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a5e200 */
uint F_00a5e200(unsigned int gen_a0)
{
  GEN_ENTER(0xa5e200u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  if (param_1 == -0x20000000) {
    return 0;
  }
  uVar1 = F_00a35490(&REFG(undefined4, 0x14a31f0),param_1);
  return uVar1;
}

/* ref: FUN_00a5e220 */
uint F_00a5e220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5e220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x1a8);
  *(undefined4 *)(uVar1 + 8) = param_1;
  *(undefined4 *)(uVar1 + 0xc) = param_2;
  return uVar1;
}

/* ref: FUN_00a5e240 */
uint F_00a5e240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  uint * puVar2;
  uint uVar3;
  
  *(undefined4 *)this = 0;
  *(uint *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar3 = -(uint)((int)((ulonglong)param_1 * 0x2a0 >> 0x20) != 0) |
          (uint)((ulonglong)param_1 * 0x2a0);
  puVar1 = (uint *)F_00406bb0(-(uint)(0xfffffff7 < uVar3) | uVar3 + 8,0,0);
  if (puVar1 == (uint *)0x0) {
    *(undefined4 *)this = 0;
    return (uint)this;
  }
  *puVar1 = param_1;
  puVar2 = puVar1 + 2;
  uVar3 = param_1;
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    *puVar2 = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 0xa6) = 0;
    puVar2 = puVar2 + 0xa8;
  }
  *(uint * PTR32 *)this = puVar1 + 2;
  return (uint)this;
}

/* ref: FUN_00a5e2c0 */
uint F_00a5e2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(uint *)((int)this + 8) == *(uint *)((int)this + 0xc)) {
    *param_1 = *(int *)this;
    *(undefined2 *)(param_1 + 1) = 0;
    return (uint)param_1;
  }
  iVar1 = *(int *)this;
  uVar3 = *(uint *)((int)this + 8);
  do {
    uVar2 = (*(int *)((int)this + 8) + 1U) % *(uint *)((int)this + 4);
    *(uint *)((int)this + 8) = uVar2;
    if (*(char *)(uVar3 * 0x2a0 + 0x298 + iVar1) != '\0') {
      *(undefined1 *)(uVar3 * 0x2a0 + 0x298 + iVar1) = 0;
      *param_1 = *(int *)this + uVar3 * 0x2a0;
      *(undefined2 *)(param_1 + 1) = 0x101;
      return (uint)param_1;
    }
    uVar3 = uVar2;
  } while (uVar2 != *(uint *)((int)this + 0xc));
  *param_1 = iVar1;
  *(undefined2 *)(param_1 + 1) = 0;
  return (uint)param_1;
}

/* ref: FUN_00a5e350 */
uint F_00a5e350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((int)this + 8);
  uVar1 = *(uint *)((int)this + 0xc);
  if (uVar3 == uVar1) {
    *param_1 = 0xffffffff;
    param_1[1] = 0;
    return (uint)param_1;
  }
  if (uVar3 != uVar1) {
    iVar2 = *(int *)this;
    do {
      if (*(char *)(uVar3 * 0x2a0 + 0x298 + iVar2) != '\0') {
        *param_1 = uVar3;
        param_1[1] = uVar3 * 0x2a0 + iVar2;
        return (uint)param_1;
      }
      uVar3 = (uVar3 + 1) % *(uint *)((int)this + 4);
    } while (uVar3 != uVar1);
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  return (uint)param_1;
}

/* ref: FUN_00a5e3d0 */
uint F_00a5e3d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5e3d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  
  uVar2 = *param_2;
  if (uVar2 != *(uint *)((int)this + 0xc)) {
    iVar1 = *(int *)this;
    do {
      uVar2 = (uVar2 + 1) % *(uint *)((int)this + 4);
      if (*(char *)(uVar2 * 0x2a0 + 0x298 + iVar1) != '\0') {
        *param_1 = uVar2;
        param_1[1] = uVar2 * 0x2a0 + iVar1;
        return (uint)param_1;
      }
    } while (uVar2 != *(uint *)((int)this + 0xc));
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  return (uint)param_1;
}

/* ref: FUN_00a5e430 */
uint F_00a5e430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  uint * puVar2;
  uint uVar3;
  
  *(undefined4 *)this = 0;
  *(uint *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar3 = -(uint)((int)((ulonglong)param_1 * 0x28 >> 0x20) != 0) | (uint)((ulonglong)param_1 * 0x28)
  ;
  puVar1 = (uint *)F_00406bb0(-(uint)(0xfffffff7 < uVar3) | uVar3 + 8,0,0);
  if (puVar1 == (uint *)0x0) {
    *(undefined4 *)this = 0;
    return (uint)this;
  }
  *puVar1 = param_1;
  puVar2 = puVar1 + 2;
  uVar3 = param_1;
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    *puVar2 = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 8) = 0;
    puVar2 = puVar2 + 10;
  }
  *(uint * PTR32 *)this = puVar1 + 2;
  return (uint)this;
}

/* ref: FUN_00a5e4b0 */
uint F_00a5e4b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(uint *)((int)this + 8) == *(uint *)((int)this + 0xc)) {
    *param_1 = *(int *)this;
    *(undefined2 *)(param_1 + 1) = 0;
    return (uint)param_1;
  }
  iVar1 = *(int *)this;
  uVar3 = *(uint *)((int)this + 8);
  do {
    uVar2 = (*(int *)((int)this + 8) + 1U) % *(uint *)((int)this + 4);
    *(uint *)((int)this + 8) = uVar2;
    if (*(char *)(iVar1 + 0x20 + uVar3 * 0x28) != '\0') {
      *(undefined1 *)(uVar3 * 0x28 + 0x20 + iVar1) = 0;
      *param_1 = *(int *)this + uVar3 * 0x28;
      *(undefined2 *)(param_1 + 1) = 0x101;
      return (uint)param_1;
    }
    uVar3 = uVar2;
  } while (uVar2 != *(uint *)((int)this + 0xc));
  *param_1 = iVar1;
  *(undefined2 *)(param_1 + 1) = 0;
  return (uint)param_1;
}

/* ref: FUN_00a5e530 */
uint F_00a5e530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((int)this + 8);
  uVar1 = *(uint *)((int)this + 0xc);
  if (uVar3 == uVar1) {
    *param_1 = 0xffffffff;
    param_1[1] = 0;
    return (uint)param_1;
  }
  if (uVar3 != uVar1) {
    iVar2 = *(int *)this;
    do {
      if (*(char *)(iVar2 + 0x20 + uVar3 * 0x28) != '\0') {
        *param_1 = uVar3;
        param_1[1] = iVar2 + uVar3 * 0x28;
        return (uint)param_1;
      }
      uVar3 = (uVar3 + 1) % *(uint *)((int)this + 4);
    } while (uVar3 != uVar1);
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  return (uint)param_1;
}

/* ref: FUN_00a5e5a0 */
uint F_00a5e5a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5e5a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  
  uVar2 = *param_2;
  if (uVar2 != *(uint *)((int)this + 0xc)) {
    iVar1 = *(int *)this;
    do {
      uVar2 = (uVar2 + 1) % *(uint *)((int)this + 4);
      if (*(char *)(iVar1 + 0x20 + uVar2 * 0x28) != '\0') {
        *param_1 = uVar2;
        param_1[1] = iVar1 + uVar2 * 0x28;
        return (uint)param_1;
      }
    } while (uVar2 != *(uint *)((int)this + 0xc));
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  return (uint)param_1;
}

/* ref: FUN_00a5e600 */
uint F_00a5e600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  uint * puVar2;
  uint uVar3;
  
  *(undefined4 *)this = 0;
  *(uint *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar3 = -(uint)((int)((ulonglong)param_1 * 0x28 >> 0x20) != 0) | (uint)((ulonglong)param_1 * 0x28)
  ;
  puVar1 = (uint *)F_00406bb0(-(uint)(0xfffffff7 < uVar3) | uVar3 + 8,0,0);
  if (puVar1 == (uint *)0x0) {
    *(undefined4 *)this = 0;
    return (uint)this;
  }
  *puVar1 = param_1;
  puVar2 = puVar1 + 2;
  uVar3 = param_1;
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    *puVar2 = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 8) = 0;
    puVar2 = puVar2 + 10;
  }
  *(uint * PTR32 *)this = puVar1 + 2;
  return (uint)this;
}

/* ref: FUN_00a5e680 */
uint F_00a5e680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(uint *)((int)this + 8) == *(uint *)((int)this + 0xc)) {
    *param_1 = *(int *)this;
    *(undefined2 *)(param_1 + 1) = 0;
    return (uint)param_1;
  }
  iVar1 = *(int *)this;
  uVar3 = *(uint *)((int)this + 8);
  do {
    uVar2 = (*(int *)((int)this + 8) + 1U) % *(uint *)((int)this + 4);
    *(uint *)((int)this + 8) = uVar2;
    if (*(char *)(iVar1 + 0x20 + uVar3 * 0x28) != '\0') {
      *(undefined1 *)(uVar3 * 0x28 + 0x20 + iVar1) = 0;
      *param_1 = *(int *)this + uVar3 * 0x28;
      *(undefined2 *)(param_1 + 1) = 0x101;
      return (uint)param_1;
    }
    uVar3 = uVar2;
  } while (uVar2 != *(uint *)((int)this + 0xc));
  *param_1 = iVar1;
  *(undefined2 *)(param_1 + 1) = 0;
  return (uint)param_1;
}

/* ref: FUN_00a5e700 */
uint F_00a5e700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((int)this + 8);
  uVar1 = *(uint *)((int)this + 0xc);
  if (uVar3 == uVar1) {
    *param_1 = 0xffffffff;
    param_1[1] = 0;
    return (uint)param_1;
  }
  if (uVar3 != uVar1) {
    iVar2 = *(int *)this;
    do {
      if (*(char *)(iVar2 + 0x20 + uVar3 * 0x28) != '\0') {
        *param_1 = uVar3;
        param_1[1] = iVar2 + uVar3 * 0x28;
        return (uint)param_1;
      }
      uVar3 = (uVar3 + 1) % *(uint *)((int)this + 4);
    } while (uVar3 != uVar1);
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  return (uint)param_1;
}

/* ref: FUN_00a5e770 */
uint F_00a5e770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5e770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  
  uVar2 = *param_2;
  if (uVar2 != *(uint *)((int)this + 0xc)) {
    iVar1 = *(int *)this;
    do {
      uVar2 = (uVar2 + 1) % *(uint *)((int)this + 4);
      if (*(char *)(iVar1 + 0x20 + uVar2 * 0x28) != '\0') {
        *param_1 = uVar2;
        param_1[1] = iVar1 + uVar2 * 0x28;
        return (uint)param_1;
      }
    } while (uVar2 != *(uint *)((int)this + 0xc));
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  return (uint)param_1;
}

/* ref: FUN_00a5e7e0 */
uint F_00a5e7e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5e7e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00a5e800 */
byte F_00a5e800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00a5e820 */
uint F_00a5e820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 2) == 0) {
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
  }
  else {
    this = (undefined *)((int)this - 8);
    if ((param_1 & 1) != 0) {
      F_00406b30(this);
      return (uint)this;
    }
  }
  return (uint)this;
}

/* ref: FUN_00a5e860 */
uint F_00a5e860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 2) == 0) {
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
  }
  else {
    this = (undefined *)((int)this - 8);
    if ((param_1 & 1) != 0) {
      F_00406b30(this);
      return (uint)this;
    }
  }
  return (uint)this;
}

/* ref: FUN_00a5e8a0 */
uint F_00a5e8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 2) == 0) {
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
  }
  else {
    this = (undefined *)((int)this - 8);
    if ((param_1 & 1) != 0) {
      F_00406b30(this);
      return (uint)this;
    }
  }
  return (uint)this;
}

/* ref: FUN_00a5e910 */
uint F_00a5e910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5e910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00a5e940 */
unsigned int F_00a5e940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5e940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00a5e960 */
uint F_00a5e960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5e960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this_00;
  undefined3 extraout_var = 0;
  undefined4 * puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  uVar2 = CONCAT22((short)((REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30)) >> 0x10),(undefined2)param_1);
  *(undefined2 *)((int)this + 0xb078) = (undefined2)param_1;
  if ((char)param_2 != '\0') {
    uVar5 = 0;
    uVar4 = 0;
    puVar3 = &(*(undefined4 *)(gen_frame + 0x8));
    (*(undefined2 *)(gen_frame + 0x20)) = REFG(undefined2, 0x14b4eb8);
    (*(undefined4 *)(gen_frame + 0x8)) = 0x262;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
    this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
    bVar1 = F_00974e00(this_00,puVar3,uVar4,uVar5);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return uVar2;
}

/* ref: FUN_00a5e9f0 */
uint F_00a5e9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = (uint)((char)param_1 != '\0') | *(uint *)((int)this + 0x1148) & 0xfffffffe;
  *(uint *)((int)this + 0x1148) = uVar1;
  return uVar1;
}

/* ref: FUN_00a5ea10 */
uint F_00a5ea10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ea10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(char *)((int)this + 0xe9fd) = (char)param_1;
  *(char *)((int)this + 0xaf81) = (char)param_1;
  *(char *)((int)this + 0xebe0) = (char)param_1;
  uVar1 = *(uint *)((int)this + 0xff78) & 0xfffffffe;
  *(uint *)((int)this + 0xff78) = (char)param_1 != '\0' | uVar1;
  return uVar1;
}

/* ref: FUN_00a5ea50 */
uint F_00a5ea50(unsigned int gen_a0)
{
  GEN_ENTER(0xa5ea50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar2 = F_00406b30(*(int *)this + -8);
    uVar1 = (uint)uVar2;
    *(undefined4 *)this = 0;
  }
  return uVar1;
}

/* ref: FUN_00a5ea70 */
uint F_00a5ea70(unsigned int gen_a0)
{
  GEN_ENTER(0xa5ea70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar2 = F_00406b30(*(int *)this + -8);
    uVar1 = (uint)uVar2;
    *(undefined4 *)this = 0;
  }
  return uVar1;
}

/* ref: FUN_00a5ea90 */
uint F_00a5ea90(unsigned int gen_a0)
{
  GEN_ENTER(0xa5ea90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar2 = F_00406b30(*(int *)this + -8);
    uVar1 = (uint)uVar2;
    *(undefined4 *)this = 0;
  }
  return uVar1;
}

/* ref: FUN_00a5eb90 */
uint F_00a5eb90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5eb90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a5eba0 */
uint F_00a5eba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5eba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (-*(int *)((int)this + 4) - 2U < param_1) {
                    
    F_00c4579a("list<T> too long");
  }
  uVar1 = *(int *)((int)this + 4) + param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00a5ebd0 */
uint F_00a5ebd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5ebd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x10,0,800);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_3;
    puVar1[3] = param_3[1];
  }
  return (uint)puVar1;
}

/* ref: FUN_00a5ec40 */
uint F_00a5ec40(unsigned int gen_a0)
{
  GEN_ENTER(0xa5ec40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  ulonglong uVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar2;
      F_00429760(piVar2,0x10,800);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  uVar3 = F_00429760(*(undefined4 *)this,0x10,800);
  return (uint)uVar3;
}

/* ref: FUN_00a5ec90 */
uint F_00a5ec90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ec90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00a5eca0 */
uint F_00a5eca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5eca0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00a5ecb0 */
uint F_00a5ecb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ecb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a5ecc0 */
uint F_00a5ecc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5ecc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)F_004296a0(0x10,0,800);
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = *param_2;
    piVar2[3] = param_2[1];
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  return (uint)piVar2;
}

/* ref: Client::Game::Network::PacketQue::vf0 */
uint F_00a5ed30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ed30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a55930(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a5ed60 */
uint F_00a5ed60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ed60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0x10,0,800);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = *param_1;
    piVar3[3] = param_1[1];
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_00a5edd0 */
uint F_00a5edd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5edd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    F_00429760(param_2,0x10,800);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: Client::Game::Network::PacketVFX::vf0 */
uint F_00a5ee20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ee20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5ce4));
  F_00a55cf0(this);
  F_00a5ec40(this + 4);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a5ee80 */
unsigned int F_00a5ee80(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa5ee80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xc0) = param_2;
  return 0;
}

/* ref: FUN_00a5eed0 */
byte F_00a5eed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5eed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = *(byte *)((int)this + 0x8f) & 0x7f | (char)param_1 << 7;
  *(byte *)((int)this + 0x8f) = bVar1;
  return bVar1;
}

/* ref: FUN_00a5eef0 */
uint F_00a5eef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5eef0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xf0) = param_2;
  return param_2;
}

/* ref: FUN_00a5ef00 */
unsigned int F_00a5ef00(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa5ef00u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x20) = param_2;
  return 0;
}

/* ref: FUN_00a5ef40 */
uint F_00a5ef40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa5ef40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + param_1 * 8 + 0xf8) = param_2;
  *(undefined4 *)((int)this + param_1 * 8 + 0xfc) = param_3;
  return param_1;
}

/* ref: FUN_00a5ef80 */
byte F_00a5ef80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ef80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 << 4 ^ *(byte *)(in_ecx + 0x8f)) & 0x10;
  *(byte *)(in_ecx + 0x8f) = *(byte *)(in_ecx + 0x8f) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00a5efe0 */
uint F_00a5efe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5efe0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x118) = param_2;
  return param_2;
}

/* ref: FUN_00a5f000 */
uint F_00a5f000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f000u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x170) = param_2;
  return param_2;
}

/* ref: FUN_00a5f010 */
unsigned int F_00a5f010(float gen_a0)
{
  GEN_ENTER(0xa5f010u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00a5f030 */
uint F_00a5f030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa5f030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if ((char)param_2 != '\0') {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this,param_1,param_3);
    return uVar1;
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,param_1,param_3);
  return uVar1;
}

/* ref: FUN_00a5f060 */
byte F_00a5f060(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x98))(this);
  if ((char)uVar1 == '\0') {
    return 0;
  }
  return *(byte *)((int)this + 0x8e) >> 1 & 1;
}

/* ref: Client::Game::Object::GameObject::vf0 */
uint F_00a5f080(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(uint *)(this + 0x74) != 0xe0000000) {
    return *(uint *)(this + 0x74);
  }
  if (*(uint *)(this + 0x78) == 0) {
    return (uint)*(ushort *)(this + 0x88);
  }
  return *(uint *)(this + 0x78);
}

/* ref: FUN_00a5f0b0 */
uint F_00a5f0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f0b0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = 0xe0000000;
  if ((param_2 < 2) && (uVar1 = param_1, param_2 != 0)) {
    uVar1 = 0xe0000000;
  }
  return uVar1;
}

/* ref: FUN_00a5f0d0 */
unsigned int F_00a5f0d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f0d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0xec);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if (*(int *)((int)this + 0x7c) == 0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0xec);
    if (puVar2 == (undefined4 *)0x0) goto LAB_00a5f106;
    ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
  }
  *(undefined4 *)((int)this + 0xec) = 0;
LAB_00a5f106: ;
  ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,0xb,0);
  return 0;
}

/* ref: FUN_00a5f120 */
unsigned int F_00a5f120(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  
  if (*(int *)((int)this + 0xf0) != 0) {
    if (*(int *)((int)this + 0x7c) == 0) {
      F_00a1b5a0((undefined4 *)((int)this + 0xf0));
    }
    pcVar1 = *(gen_code32 *)(*(int *)this + 0x28);
    *(undefined4 *)((int)this + 0xf0) = 0;
    (*pcVar1)(this,0xb,0);
  }
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf17 */
uint F_00a5f160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  float fVar2;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
  fVar2 = F_00aae7a0(param_1,&(*(undefined4 *)(gen_frame + 0x0)));
  (*(float *)(gen_frame + 0x1c)) = fVar2;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this);
  return uVar1;
}

/* ref: FUN_00a5f1d0 */
float10 F_00a5f1d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f1d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0xb4);
}

/* ref: FUN_00a5f1e0 */
uint F_00a5f1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f1e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0xd0);
  param_2[2] = *(undefined4 *)(in_ecx + 0xd8);
  param_2[1] = (undefined4)
               gen_fl2bits(((float)GEN_TOF(((float10)*(float *)(in_ecx + 0xc4) +
                                  (float10)*(float *)(in_ecx + 0xd4)))));
  return (uint)param_2;
}

/* ref: Client::Game::Object::GameObject::vf22 */
unsigned int F_00a5f210(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f210u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x20) = *(undefined4 *)(in_ecx + 0xb0);
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf23 */
unsigned int F_00a5f220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5f220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00a5f230 */
byte F_00a5f230(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = *(byte *)((int)this + 0x70);
  if (((bVar1 & 1) != 0) &&
     ((REFG(int, 0x1379694) == 0 ||
      (((((bVar1 & 2) != 0 || (*(int *)(REFG(int, 0x1379694) + 0xe4) == 0)) ||
        (*(int *)(REFG(int, 0x1379694) + 0xe4) != *(int *)((int)this + 0xe4))) &&
       ((((bVar1 & 4) != 0 || (*(int *)((int)this + 0x84) == -0x20000000)) ||
        (*(int *)(REFG(int, 0x1379694) + 0x74) != *(int *)((int)this + 0x84))))))))) {
    return *(byte *)((int)this + 0x8f) >> 4 & 1;
  }
  return 1;
}

/* ref: FUN_00a5f290 */
uint F_00a5f290(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this);
  return -(uint)((uVar1 & 0xff) != 0) & (uint)this;
}

/* ref: FUN_00a5f2b0 */
uint F_00a5f2b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f2b0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xb8))(param_1);
  return -(uint)((uVar1 & 0xff) != 0) & (uint)param_1;
}

/* ref: FUN_00a5f310 */
uint F_00a5f310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xa5f310u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  uint uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0xe0000000;
  }
  uVar1 = ((code *)*(gen_code32 *)*param_1)
                    (param_1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a5f330 */
uint F_00a5f330(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f330u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 == 0) {
    return 0xe0000000;
  }
  return *(uint *)(param_1 + 0x74);
}

/* ref: Client::Game::Object::GameObject::vf24 */
uint F_00a5f350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f350u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  if (*(int *)(in_ecx + 0x178) != 0) {
    *param_2 = *(int *)(in_ecx + 0x178);
    return 1;
  }
  return 0;
}

/* ref: FUN_00a5f380 */
uint F_00a5f380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0xe4);
  if ((uVar1 != 0) && ((uVar1 & 0x80000000) == 0x80000000)) {
    this_00 = (undefined *)F_006b8c00();
    uVar1 = F_006da050(this_00,uVar1);
    if (uVar1 != 0) {
      *param_1 = uVar1;
      return 1;
    }
    return 0;
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this,param_1);
  return uVar1;
}

/* ref: FUN_00a5f3d0 */
uint F_00a5f3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f3d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined * this_00;
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)((int)this + 0xe4);
  iVar2 = 0;
  if ((uVar1 != 0) && ((uVar1 & 0x80000000) == 0x80000000)) {
    this_00 = (undefined *)F_006b8c00();
    uVar1 = F_006da050(this_00,uVar1);
    if (uVar1 != 0) {
      *param_1 = uVar1;
      iVar2 = 1;
    }
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this,param_1 + iVar2);
  return uVar1 + iVar2;
}

/* ref: FUN_00a5f430 */
uint F_00a5f430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 0x78) != param_1) {
    *(uint *)((int)this + 0x78) = param_1;
    uVar1 = F_00a35710(&REFG(undefined, 0x14a31e0),this);
  }
  return uVar1;
}

/* ref: FUN_00a5f450 */
uint F_00a5f450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 0x74) != param_1) {
    *(uint *)((int)this + 0x74) = param_1;
    uVar1 = F_00a35720(&REFG(undefined, 0x14a31e0),this);
  }
  return uVar1;
}

/* ref: FUN_00a5f470 */
byte F_00a5f470(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f470u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 8: ;
    return 3;
  case 9: ;
    return 2;
  default: ;
    return 0;
  case 0xc: ;
    return 5;
  case 0xe: ;
    return 6;
  case 0x10: ;
    return 4;
  case 0x2d: ;
    return 7;
  }
}

/* ref: FUN_00a5f500 */
uint F_00a5f500(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0xec) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xec) + 8))))(*(int * PTR32 *)((int)this + 0xec));
    if (uVar1 == 3) {
      return *(uint *)((int)this + 0xec);
    }
  }
  return 0;
}

/* ref: FUN_00a5f530 */
uint F_00a5f530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f530u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(byte *)(in_ecx + 0x8f) = *(byte *)(in_ecx + 0x8f) | 0xc;
  *(uint *)(in_ecx + 0xe4) = param_2;
  return param_2;
}

/* ref: FUN_00a5f550 */
ushort F_00a5f550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f550u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x8f) = *(byte *)(in_ecx + 0x8f) | 0xc;
  *(ushort *)(in_ecx + 0xe8) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5f570 */
byte F_00a5f570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f570u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x8f) = *(byte *)(in_ecx + 0x8f) | 8;
  *(byte *)(in_ecx + 0x70) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5f590 */
unsigned int F_00a5f590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5f590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if ((*(undefined * PTR32 *)((int)this + 0xf0) != (undefined *)0x0) && (*(int *)((int)this + 0x7c) == 0)) {
    F_005db410(*(undefined * PTR32 *)((int)this + 0xf0),param_1,param_2);
    return 0;
  }
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf25 */
uint F_00a5f5b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f5b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  undefined * this_00;
  uint uVar2;
  
  pcVar1 = *(gen_code32 *)(*(int *)this + 0x94);
  this[0x8f] = (undefined1)((byte)this[0x8f] | 8);
  (*pcVar1)(this);
  this_00 = (undefined *)F_006b8c00();
  uVar2 = F_006e5cf0(this_00,this);
  return uVar2;
}

/* ref: Client::Game::Object::GameObject::vf26 */
byte F_00a5f5e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f5e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x8e) >> 2 & 1;
}

/* ref: Client::Game::Object::GameObject::vf29 */
unsigned int F_00a5f5f0(void)
{
  GEN_ENTER(0xa5f5f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf30 */
byte F_00a5f600(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f600u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x8e) >> 3 & 1;
}

/* ref: Client::Game::Object::GameObject::vf34 */
unsigned int F_00a5f610(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f610u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(byte *)(in_ecx + 0x90) = *(byte *)(in_ecx + 0x90) & 0xf3;
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf35 */
byte F_00a5f620(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f620u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if ((*(int *)(in_ecx + 0x7c) != 0) && (bVar1 = *(byte *)(in_ecx + 0x90), (bVar1 & 4) == 0)) {
    *(byte *)(in_ecx + 0x90) = bVar1 | 4;
    return (bVar1 & 8) >> 3;
  }
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf36 */
byte F_00a5f650(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f650u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if ((*(int *)(in_ecx + 0x7c) != 0) && (bVar1 = *(byte *)(in_ecx + 0x90), (bVar1 & 8) == 0)) {
    *(byte *)(in_ecx + 0x90) = bVar1 | 8;
    return (bVar1 & 4) >> 2;
  }
  return 0;
}

/* ref: FUN_00a5f680 */
unsigned int F_00a5f680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  if (*(int *)((int)this + 0xf0) != 0) {
    gen_piece_set(&(*(int *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((uint3)((uint)((int)(uintptr_t)this) >> 8)));
    (*(int *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3),1);
    if ((char)param_1 == '\x01') {
      (*(int *)(gen_frame + 0x8)) = (uint)GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3) << 8;
    }
    ((code *)*(gen_code32 *)(*(int *)this + 0xbc))(this,1,(*(int *)(gen_frame + 0x8)));
    ((code *)*(gen_code32 *)(*(int *)this + 0xd0))(this);
  }
  return 0;
}

/* ref: FUN_00a5f6d0 */
unsigned int F_00a5f6d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f6d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  if (*(int *)((int)this + 0xf0) != 0) {
    gen_piece_set(&(*(int *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((uint3)((uint)((int)(uintptr_t)this) >> 8)));
    (*(int *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3),1);
    if ((char)param_1 == '\x01') {
      (*(int *)(gen_frame + 0x8)) = (uint)GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3) << 8;
    }
    ((code *)*(gen_code32 *)(*(int *)this + 0xbc))(this,0,(*(int *)(gen_frame + 0x8)));
  }
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf47 */
unsigned int F_00a5f710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5f710u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  int iVar1;
  char cVar2;
  
  if ((((byte)this[0x8f] & 2) == 0) && (this_00 = *(undefined * PTR32 *)(this + 0xf0), this_00 != (undefined *)0x0))
  {
    cVar2 = (char)param_1;
    if (*(int *)((int)this_00 + 0x9c) != 0) {
      iVar1 = (*(int *)((int)this_00 + 0xb0) << 0x1a) >> 0x1d;
      if (iVar1 != 0) {
        if (iVar1 == 1) {
          if (cVar2 != '\0') {
            return 0;
          }
        }
        else {
          if (iVar1 != 2) {
            return 0;
          }
          if (cVar2 != '\x01') {
            return 0;
          }
        }
      }
      F_005e3480(this_00,param_1,param_2);
      return 0;
    }
    iVar1 = (*(int *)((int)this_00 + 0xb0) << 0x1d) >> 0x1d;
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        if (cVar2 != '\0') {
          return 0;
        }
      }
      else {
        if (iVar1 != 2) {
          return 0;
        }
        if (cVar2 != '\x01') {
          return 0;
        }
      }
    }
    F_005f51d0(this_00,param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00a5f7a0 */
uint F_00a5f7a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f7a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xc4))(this);
  if (((char)uVar2 != '\0') && (REFG(char, 0x1379c96) == '\0')) {
    bVar1 = F_005e1600();
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 == 1) {
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x9c))(this);
      if ((char)uVar2 == '\0') {
        if ((((*(byte *)((int)this + 0x8e) & 0x80) != 0) && (*(int *)((int)this + 0x7c) == 0)) &&
           (*(undefined * PTR32 *)((int)this + 0xf0) != (undefined *)0x0)) {
          bVar1 = F_005d5fe0(*(undefined * PTR32 *)((int)this + 0xf0));
          uVar2 = CONCAT31(extraout_var_00,bVar1);
          if (bVar1 == 1) {
            uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xf0) + 0xbc))))(*(int * PTR32 *)((int)this + 0xf0));
            if ((char)uVar2 == '\0') {
              uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x30))(this);
              return uVar2;
            }
          }
        }
      }
      else if ((*(byte *)((int)this + 0x8e) & 0x80) == 0) {
        uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x2c))(this);
        return uVar2;
      }
    }
  }
  return uVar2;
}

/* ref: Client::Game::Object::GameObject::vf49 */
byte F_00a5f830(void)
{
  GEN_ENTER(0xa5f830u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf50 */
byte F_00a5f840(void)
{
  GEN_ENTER(0xa5f840u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf51 */
uint F_00a5f850(void)
{
  GEN_ENTER(0xa5f850u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00a5f860 */
uint F_00a5f860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5f860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  
  if (*(undefined * PTR32 *)((int)this + 0xf0) != (undefined *)0x0) {
    bVar1 = F_005dbc90(*(undefined * PTR32 *)((int)this + 0xf0),param_1);
    in_EAX = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      in_EAX = F_005eb180(*(undefined * PTR32 *)((int)this + 0xf0),param_1,param_2);
    }
  }
  return in_EAX;
}

/* ref: FUN_00a5f8a0 */
uint F_00a5f8a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f8a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0xec);
  if (uVar1 == 0) {
    if (*(undefined * PTR32 *)((int)this + 0xf0) != (undefined *)0x0) {
      uVar1 = F_005e3290(*(undefined * PTR32 *)((int)this + 0xf0),0x2d);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00a5f8c0 */
uint F_00a5f8c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f8c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  byte bVar2;
  uint in_EAX = 0;
  char * pcVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 == (char *)0x0) {
    *(undefined1 *)((int)this + 0x30) = 0;
    return in_EAX;
  }
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00c4d9ef((int)this + 0x30,0x40,param_1,0xffffffff);
  if (0x3f < (uint)((int)pcVar3 - (int)(param_1 + 1))) {
    uVar5 = 0x3e;
    do {
      bVar2 = *(byte *)((int)this + 0x30 + uVar5);
      if ((bVar2 & 0xc0) == 0xc0) {
        *(undefined1 *)(uVar5 + 0x30 + (int)this) = 0;
        return uVar5;
      }
      if (-1 < (char)bVar2) {
        return uVar5;
      }
      uVar4 = uVar5 - 1;
      *(undefined1 *)((int)this + uVar5 + 0x30) = 0;
      uVar5 = uVar4;
    } while (-1 < (int)uVar4);
  }
  return uVar4;
}

/* ref: Client::Game::Object::GameObject::vf31 */
byte F_00a5f940(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f940u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x8e) >> 5 & 1;
}

/* ref: Client::Game::Object::GameObject::vf32 */
unsigned int F_00a5f950(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f950u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(byte *)(in_ecx + 0x8e) = *(byte *)(in_ecx + 0x8e) | 0x20;
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf48 */
byte F_00a5f960(void)
{
  GEN_ENTER(0xa5f960u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Game::Object::GameObject::vf43 */
unsigned int F_00a5f970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  this[0x90] = (undefined1)((byte)this[0x90] & 0xfc);
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)(this + 0x74) = 0xe0000000;
  *(undefined4 *)(this + 0x84) = 0xe0000000;
  *(undefined2 *)(this + 0x88) = (undefined2)param_1;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x170) = 0;
  this[0x70] = (undefined1)0x0;
  *(undefined2 *)(this + 0x8a) = 0;
  this[0x8e] = (undefined1)((byte)this[0x8e] & 0x7c | 3);
  this[0x8f] = (undefined1)((byte)this[0x8f] & 3 | 0xec);
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  this[0x8e] = (undefined1)((byte)this[0x8e] & 0x83);
  this[0x8f] = (undefined1)((byte)this[0x8f] & 0xfd);
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined2 *)(this + 0x8c) = 0xd;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0xb4) = uVar1;
  *(undefined4 *)(this + 0xb8) = uVar1;
  *(undefined4 *)(this + 0xbc) = uVar1;
  uVar1 = REFG(float, 0x1088068);
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0x174) = 0;
  *(undefined4 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0xc0) = uVar1;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined2 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x140) = *(undefined4 *)(this + 0x120);
  *(undefined4 *)(this + 0x144) = *(undefined4 *)(this + 0x124);
  *(undefined4 *)(this + 0x148) = *(undefined4 *)(this + 0x128);
  *(undefined4 *)(this + 0x150) = *(undefined4 *)(this + 0x130);
  *(undefined4 *)(this + 0x154) = *(undefined4 *)(this + 0x134);
  *(undefined4 *)(this + 0x158) = *(undefined4 *)(this + 0x138);
  this[0x8f] = (undefined1)((byte)this[0x8f] & 0xfe);
  *(undefined4 *)(this + 0x11c) = 0x900;
  *(undefined4 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x164) = 0;
  *(undefined4 *)(this + 0x168) = 0;
  this[0x90] = (undefined1)((byte)this[0x90] & 0xf3);
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf44 */
uint F_00a5fb90(unsigned int gen_a0)
{
  GEN_ENTER(0xa5fb90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  code * pcVar3;
  uint uVar4;
  undefined * this_00;
  undefined * pGVar5;
  
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this);
  if ((char)uVar4 == '\0') {
    pGVar5 = this;
    this_00 = (undefined *)F_006b8c00();
    uVar4 = F_006e5b10(this_00,pGVar5);
  }
  piVar1 = *(int * PTR32 *)(this + 0xec);
  *(undefined4 *)(this + 0x174) = 0;
  if (piVar1 == (int *)0x0) goto LAB_00a5fbf9;
  if (*(int *)(this + 0x7c) == 0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    puVar2 = *(undefined4 * PTR32 *)(this + 0xec);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      goto LAB_00a5fbe2;
    }
  }
  else {
LAB_00a5fbe2: ;
    *(undefined4 *)(this + 0xec) = 0;
  }
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,0xb,0);
LAB_00a5fbf9: ;
  if (*(int *)(this + 0xf0) != 0) {
    if (*(int *)(this + 0x7c) == 0) {
      F_00a1b5a0(this + 0xf0);
    }
    pcVar3 = *(gen_code32 *)(*(int *)this + 0x28);
    *(undefined4 *)(this + 0xf0) = 0;
    uVar4 = (*pcVar3)(this,0xb,0);
  }
  return uVar4;
}

/* ref: Client::Game::Object::GameObject::vf12 */
unsigned int F_00a5fc30(unsigned int gen_a0)
{
  GEN_ENTER(0xa5fc30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  code * pcVar3;
  
  if (((byte)this[0x8e] & 0x80) == 0) {
    return 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0xec);
  if (piVar1 == (int *)0x0) goto LAB_00a5fc7c;
  if (*(int *)(this + 0x7c) == 0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    puVar2 = *(undefined4 * PTR32 *)(this + 0xec);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      goto LAB_00a5fc65;
    }
  }
  else {
LAB_00a5fc65: ;
    *(undefined4 *)(this + 0xec) = 0;
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,0xb,0);
LAB_00a5fc7c: ;
  if (*(int *)(this + 0xf0) != 0) {
    if (*(int *)(this + 0x7c) == 0) {
      F_00a1b5a0(this + 0xf0);
    }
    pcVar3 = *(gen_code32 *)(*(int *)this + 0x28);
    *(undefined4 *)(this + 0xf0) = 0;
    (*pcVar3)(this,0xb,0);
  }
  this[0x8e] = (undefined1)((byte)this[0x8e] & 0x6f);
  return 0;
}

/* ref: FUN_00a5fcc0 */
byte F_00a5fcc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5fcc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  
  if (*(undefined * PTR32 *)((int)this + 0xf0) == (undefined *)0x0) {
    piVar1 = *(int * PTR32 *)((int)this + 0xec);
    if ((piVar1 != (int *)0x0) && (*(char *)((int)piVar1 + 0x65) == '\x03')) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1,param_1);
      return (byte)uVar3;
    }
  }
  else {
    bVar2 = F_005d5fe0(*(undefined * PTR32 *)((int)this + 0xf0));
    if (bVar2 != 0) {
      bVar2 = F_005eae70(*(undefined * PTR32 *)((int)this + 0xf0),param_1);
      return bVar2;
    }
  }
  return 0;
}

/* ref: FUN_00a5fd10 */
uint F_00a5fd10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5fd10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float fVar3;
  int * piVar4;
  byte bVar5;
  float * pfVar6;
  uint uVar7;
  float10 fVar8;
  
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  if (*(undefined * PTR32 *)((int)this + 0xf0) != (undefined *)0x0) {
    bVar5 = F_005d5fe0(*(undefined * PTR32 *)((int)this + 0xf0));
    if (bVar5 != 0) {
      bVar5 = F_005eae70(*(undefined * PTR32 *)((int)this + 0xf0),param_2);
      if (bVar5 == 0) {
        param_2 = 0x2e;
      }
      bVar5 = F_005eae70(*(undefined * PTR32 *)((int)this + 0xf0),param_2);
      if (bVar5 != 0) {
        F_005eb040(*(undefined * PTR32 *)((int)this + 0xf0),param_1,param_2);
      }
      goto LAB_00a5fdf3;
    }
  }
  piVar4 = *(int * PTR32 *)((int)this + 0xec);
  if ((piVar4 != (int *)0x0) && (*(char *)((int)piVar4 + 0x65) == '\x03')) {
    uVar7 = ((code *)*(gen_code32 *)(*piVar4 + 0x50))(piVar4,param_2);
    if ((char)uVar7 == '\0') {
      param_2 = 0x2e;
    }
    uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xec) + 0x50))))(*(int * PTR32 *)((int)this + 0xec),param_2);
    if ((char)uVar7 != '\0') {
      pfVar6 = ((float *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xec) + 0x48))))
                                  (*(int * PTR32 *)((int)this + 0xec),&(*(float *)(gen_frame + 0x0)),param_2)));
      *param_1 = *pfVar6;
      param_1[1] = pfVar6[1];
      param_1[2] = pfVar6[2];
    }
  }
LAB_00a5fdf3: ;
  if (*(int *)((int)this + 0x7c) == 0) {
    (*(float *)(gen_frame + 0x1c)) = *(float *)((int)this + 0xb4);
    fVar8 = (float10)*(float *)((int)this + 0xb4);
    *param_1 = (float)(fVar8 * (float10)*param_1);
    param_1[1] = (float)((float10)param_1[1] * fVar8);
    param_1[2] = (float)(fVar8 * (float10)param_1[2]);
    uVar7 = ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this);
    if (((char)uVar7 != '\0') && (*(int *)((int)this + 0xec) != 0)) {
      fVar1 = *((float *)GEN_TOP((*(int *)((int)this + 0xec) + 0x294)));
      (*(float *)(gen_frame + 0x1c)) = fVar1;
      fVar8 = (float10)fVar1;
      *param_1 = (float)(fVar8 * (float10)*param_1);
      param_1[1] = (float)((float10)param_1[1] * fVar8);
      param_1[2] = (float)(fVar8 * (float10)param_1[2]);
    }
  }
  fVar2 = *(float *)((int)this + 0xd0);
  fVar1 = *(float *)((int)this + 0xd8);
  (*(float *)(gen_frame + 0x0)) = fVar2;
  (*(float *)(gen_frame + 0x8)) = fVar1;
  (*(float *)(gen_frame + 0x4)) = *(float *)((int)this + 0xd4);
  fVar3 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xc4) + (float10)*(float *)((int)this + 0xd4))));
  (*(float *)(gen_frame + 0x4)) = fVar3;
  *param_1 = (float)((float10)*param_1 + (float10)fVar2);
  param_1[1] = (float)((float10)param_1[1] + (float10)fVar3);
  param_1[2] = (float)((float10)param_1[2] + (float10)fVar1);
  return (uint)param_1;
}

/* ref: FUN_00a5feb0 */
uint F_00a5feb0(unsigned int gen_a0)
{
  GEN_ENTER(0xa5feb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x7c) != 0) {
    if (*(int *)((int)this + 0xf0) != 0) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xf0) + 0xe4))))(*(int * PTR32 *)((int)this + 0xf0));
      return uVar1;
    }
    if (*(int *)((int)this + 0xec) != 0) {
      return *(int *)((int)this + 0xec) + 0x30;
    }
  }
  return (int)this + 0xa0;
}

/* ref: FUN_00a5fef0 */
uint F_00a5fef0(unsigned int gen_a0)
{
  GEN_ENTER(0xa5fef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0xf0) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xf0) + 0xe4))))(*(int * PTR32 *)((int)this + 0xf0));
    return uVar1;
  }
  if (*(int *)((int)this + 0xec) != 0) {
    return *(int *)((int)this + 0xec) + 0x30;
  }
  return (int)this + 0xa0;
}

/* ref: Client::Game::Object::GameObject::vf21 */
uint F_00a5ff20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ff20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 GVar1;
  uint uVar2;
  byte bVar3;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this,param_1,(uint)((byte)this[0x8e] >> 6 & 1));
  GVar1 = this[0x8e];
  uVar2 = CONCAT31((int3)(uVar2 >> 8),GVar1);
  bVar3 = (byte)param_1;
  if ((((byte)GVar1 >> 6 & 1) != bVar3) &&
     (this[0x8e] = (undefined1)((bVar3 << 6 ^ (byte)GVar1) & 0x40 ^ (byte)GVar1), bVar3 != 0)) {
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(this + 0xa0);
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(this + 0xa4);
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(this + 0xa8);
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this);
  }
  return uVar2;
}

/* ref: FUN_00a5ffa0 */
float F_00a5ffa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ffa0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  float10 fVar3;
  
  if (*(int *)(param_1 + 0x7c) == 0) {
LAB_00a5ffef: ;
    uVar1 = param_1 + 0xa0;
  }
  else if (*(int *)(param_1 + 0xf0) == 0) {
    uVar1 = *(int *)(param_1 + 0xec) + 0x30;
    if (*(int *)(param_1 + 0xec) == 0) goto LAB_00a5ffef;
  }
  else {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xf0) + 0xe4))))(*(int * PTR32 *)(param_1 + 0xf0));
  }
  if (*(int *)(param_2 + 0x7c) != 0) {
    if (*(int *)(param_2 + 0xf0) != 0) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_2 + 0xf0) + 0xe4))))(*(int * PTR32 *)(param_2 + 0xf0));
      goto LAB_00a6002f;
    }
    if (*(int *)(param_2 + 0xec) != 0) {
      uVar2 = *(int *)(param_2 + 0xec) + 0x30;
      goto LAB_00a6002f;
    }
  }
  uVar2 = param_2 + 0xa0;
LAB_00a6002f: ;
  fVar3 = F_00c4d1fa((float10)((float)GEN_TOF(((float10)*(float *)(uVar2 + 8) -
                                       (float10)*(float *)(uVar1 + 8)))));
  fVar3 = (float10)(float)fVar3;
  if ((float10)*(double *)&REFG(undefined, 0x1080228) < fVar3) {
    fVar3 = (float10)(float)(fVar3 - (float10)*(float *)&REFG(undefined, 0x1334a30));
  }
  if (fVar3 <= (float10)*(double *)&REFG(undefined, 0x109c9b8)) {
    return (float)((float10)*(float *)&REFG(undefined, 0x1334a30) + fVar3);
  }
  return (float)fVar3;
}

/* ref: FUN_00a600a0 */
double F_00a600a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa600a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  float * pfVar1;
  float * pfVar2;
  
  if (((param_1 != (undefined *)0x0) && (param_2 != (undefined *)0x0)) && (param_1 != param_2)) {
    pfVar1 = (float *)F_00a5feb0(param_2);
    pfVar2 = (float *)F_00a5feb0(param_1);
    return (double)((float)GEN_TOF((((float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)(float)((float10)*pfVar2
                                                                                  - (float10)*pfVar1
                                                                                  ) *
                                                                  (float10)(float)((float10)*pfVar2
                                                                                  - (float10)*pfVar1
                                                                                  ) +
                                                                 (float10)(float)((float10)pfVar2[2]
                                                                                 - (float10)pfVar1[2
                                                  ]) * (float10)(float)((float10)pfVar2[2] -
                                                                       (float10)pfVar1[2]))))))) -
                           (float10)*(float *)((int)param_1 + 0xc0)) -
                          (float10)*(float *)((int)param_2 + 0xc0))));
  }
  return 0.0;
}

/* ref: FUN_00a60140 */
float F_00a60140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa60140u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  float * pfVar1;
  float * pfVar2;
  
  if (((param_1 != (undefined *)0x0) && (param_2 != (undefined *)0x0)) && (param_1 != param_2)) {
    pfVar1 = (float *)F_00a5feb0(param_2);
    pfVar2 = (float *)F_00a5feb0(param_1);
    return ((float)GEN_TOF((((float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)(float)((float10)pfVar2[2] -
                                                                          (float10)pfVar1[2]) *
                                                          (float10)(float)((float10)pfVar2[2] -
                                                                          (float10)pfVar1[2]) +
                                                         ((float10)(float)((float10)*pfVar2 -
                                                                          (float10)*pfVar1) *
                                                          (float10)(float)((float10)*pfVar2 -
                                                                          (float10)*pfVar1) +
                                                         (float10)(float)((float10)pfVar2[1] -
                                                                         (float10)pfVar1[1]) *
                                                         (float10)(float)((float10)pfVar2[1] -
                                                                         (float10)pfVar1[1])))))))) -
                   (float10)*(float *)((int)param_1 + 0xc0)) -
                  (float10)*(float *)((int)param_2 + 0xc0))));
  }
  return (float)(float10)0;
}

/* ref: FUN_00a601f0 */
float F_00a601f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa601f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  double dVar1;
  
  dVar1 = F_00a600a0(this,param_1);
  return (float)dVar1;
}

/* ref: FUN_00a60210 */
float F_00a60210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa60210u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (param_1 == param_2) {
    return 0.0;
  }
  if (*(int *)(param_2 + 0x7c) != 0) {
    if (*(int *)(param_2 + 0xf0) != 0) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_2 + 0xf0) + 0xe4))))(*(int * PTR32 *)(param_2 + 0xf0));
      goto LAB_00a60264;
    }
    uVar1 = *(int *)(param_2 + 0xec) + 0x30;
    if (*(int *)(param_2 + 0xec) != 0) goto LAB_00a60264;
  }
  uVar1 = param_2 + 0xa0;
LAB_00a60264: ;
  if (*(int *)(param_1 + 0x7c) != 0) {
    if (*(int *)(param_1 + 0xf0) != 0) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xf0) + 0xe4))))(*(int * PTR32 *)(param_1 + 0xf0));
      return ((float)GEN_TOF(((float10)*(float *)(uVar1 + 4) - (float10)*(float *)(uVar2 + 4))));
    }
    if (*(int *)(param_1 + 0xec) != 0) {
      return ((float)GEN_TOF(((float10)*(float *)(uVar1 + 4) -
                    (float10)*((float *)GEN_TOP((*(int *)(param_1 + 0xec) + 0x34))))));
    }
  }
  return ((float)GEN_TOF(((float10)*(float *)(uVar1 + 4) - (float10)*(float *)(param_1 + 0xa4))));
}

/* ref: FUN_00a602d0 */
float F_00a602d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa602d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  float fVar1;
  
  fVar1 = F_00a60210(this,param_1);
  return fVar1;
}

/* ref: FUN_00a602f0 */
unsigned int F_00a602f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa602f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x88)) = this;
  if ((((*(byte *)((int)this + 0x8f) & 4) != 0) && (REFG(int, 0x1379694) != 0)) &&
     (uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this), (char)uVar2 != '\0')) {
    uVar2 = F_00a5f3d0(this,((int *)(gen_frame + 0x0)));
    this_00 = (undefined *)F_006b8c00();
    F_006d9de0(this_00);
    F_006d9e70(this_00);
    if (uVar2 != 0) {
      uVar5 = 0;
      if (uVar2 != 0) {
        do {
          piVar4 = (int *)((int *)(gen_frame + 0x0))[(int)(uVar5)];
          if ((piVar4 != (int *)0x0) &&
             (uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x1c4))(piVar4), (char)uVar3 == '\0')) {
            return 0;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar2);
      }
      uVar5 = 0;
      piVar4 = (int *)0x0;
      (*(uint *)(gen_frame + 0x84)) = 0;
      if (uVar2 != 0) {
        do {
          piVar1 = (int *)((int *)(gen_frame + 0x0))[(int)(uVar5)];
          if (piVar1 != (int *)0x0) {
            uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x1cc))(piVar1,(*(undefined * PTR32 *)(gen_frame + 0x88)));
            if (((ushort)uVar3 != 0) && ((ushort)(*(uint *)(gen_frame + 0x84)) < (ushort)uVar3)) {
              piVar4 = (int *)((int *)(gen_frame + 0x0))[(int)(uVar5)];
              (*(uint *)(gen_frame + 0x84)) = uVar3 & 0xffff;
            }
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar2);
      }
      uVar2 = 0;
      if (piVar4 != (int *)0x0) {
        uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0x1c0))(piVar4,(*(undefined * PTR32 *)(gen_frame + 0x88)));
      }
      *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x88)) + 0x118) = uVar2;
      this = (*(undefined * PTR32 *)(gen_frame + 0x88));
    }
    *(byte *)((int)this + 0x8f) = *(byte *)((int)this + 0x8f) & 0xfb;
  }
  return 0;
}

/* ref: FUN_00a60400 */
unsigned int F_00a60400(unsigned int gen_a0)
{
  GEN_ENTER(0xa60400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x88)) = this;
  if ((((*(byte *)((int)this + 0x8f) & 0x20) != 0) && (REFG(int, 0x1379694) != 0)) &&
     (uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this), (char)uVar2 != '\0')) {
    uVar2 = F_00a5f3d0(this,((int *)(gen_frame + 0x0)));
    if (uVar2 != 0) {
      uVar4 = 0;
      if (uVar2 != 0) {
        do {
          piVar5 = (int *)((int *)(gen_frame + 0x0))[(int)(uVar4)];
          if ((piVar5 != (int *)0x0) &&
             (uVar3 = ((code *)*(gen_code32 *)(*piVar5 + 0x208))(piVar5), (char)uVar3 == '\0')) {
            return 0;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar2);
      }
      uVar4 = 0;
      piVar5 = (int *)0x0;
      (*(uint *)(gen_frame + 0x84)) = 0;
      if (uVar2 != 0) {
        do {
          piVar1 = (int *)((int *)(gen_frame + 0x0))[(int)(uVar4)];
          if (piVar1 != (int *)0x0) {
            uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x1cc))(piVar1,(*(undefined * PTR32 *)(gen_frame + 0x88)));
            if (((ushort)uVar3 != 0) && ((ushort)(*(uint *)(gen_frame + 0x84)) < (ushort)uVar3)) {
              piVar5 = (int *)((int *)(gen_frame + 0x0))[(int)(uVar4)];
              (*(uint *)(gen_frame + 0x84)) = uVar3 & 0xffff;
            }
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar2);
      }
      uVar2 = 0;
      if (piVar5 != (int *)0x0) {
        uVar2 = ((code *)*(gen_code32 *)(*piVar5 + 0x1fc))(piVar5,(*(undefined * PTR32 *)(gen_frame + 0x88)));
      }
      *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x88)) + 0x170) = uVar2;
      this = (*(undefined * PTR32 *)(gen_frame + 0x88));
    }
    *(byte *)((int)this + 0x8f) = *(byte *)((int)this + 0x8f) & 0xdf;
  }
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf28 */
byte F_00a60500(unsigned int gen_a0)
{
  GEN_ENTER(0xa60500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if (((byte)this[0x8e] & 0x80) != 0) {
    if ((*(int *)(this + 0xec) == 0) && (*(int *)(this + 0xf0) == 0)) {
      return 1;
    }
    if ((*(undefined * PTR32 *)(this + 0xf0) != (undefined *)0x0) &&
       (bVar1 = F_005d5fe0(*(undefined * PTR32 *)(this + 0xf0)), bVar1 != 0)) {
      return 1;
    }
    if (((*(int *)(this + 0xec) != 0) && (*((char *)GEN_TOP((*(int *)(this + 0xec) + 0x65))) == '\x03')) &&
       (bVar1 = F_00b5ba80(REFG(void * PTR32, 0x14c4e84),(uint)*(ushort *)(this + 0x88)), bVar1 != 0)) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00a60560 */
unsigned int F_00a60560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa60560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  float * pfVar2;
  undefined4 * puVar3;
  
  iVar1 = *(int *)((int)this + 0xf0);
  (*(undefined4 *)(gen_frame + 0x10)) = REFG(undefined4, 0x1302cf0);
  (*(undefined4 *)(gen_frame + 0x14)) = REFG(undefined4, 0x1302cf4);
  (*(undefined4 *)(gen_frame + 0x18)) = REFG(undefined4, 0x1302cf8);
  (*(undefined4 *)(gen_frame + 0x1c)) = REFG(undefined4, 0x1302cfc);
  if (iVar1 == 0) {
    if (*(int *)((int)this + 0xec) != 0) {
      iVar1 = *(int *)((int)this + 0xec);
      *param_1 = *(float *)(iVar1 + 0x30);
      param_1[1] = *(float *)(iVar1 + 0x34);
      param_1[2] = *(float *)(iVar1 + 0x38);
      iVar1 = *(int *)((int)this + 0xec);
      (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(iVar1 + 0x40);
      (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(iVar1 + 0x44);
      (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(iVar1 + 0x48);
      (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)(iVar1 + 0x4c);
      (*(float *)(gen_frame + 0x0)) = *(float *)(iVar1 + 0x50);
      (*(float *)(gen_frame + 0x4)) = *(float *)(iVar1 + 0x54);
      (*(float *)(gen_frame + 0x8)) = *(float *)(iVar1 + 0x58);
    }
  }
  else {
    pfVar2 = ((float *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xf0) + 0xe4))))
                                (*(int * PTR32 *)((int)this + 0xf0))));
    *param_1 = *pfVar2;
    param_1[1] = pfVar2[1];
    param_1[2] = pfVar2[2];
    puVar3 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xf0) + 0xec))))(*(int * PTR32 *)((int)this + 0xf0))));
    (*(undefined4 *)(gen_frame + 0x10)) = *puVar3;
    (*(undefined4 *)(gen_frame + 0x14)) = puVar3[1];
    (*(undefined4 *)(gen_frame + 0x18)) = puVar3[2];
    (*(undefined4 *)(gen_frame + 0x1c)) = puVar3[3];
    pfVar2 = ((float *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xf0) + 0xf4))))
                                (*(int * PTR32 *)((int)this + 0xf0))));
    (*(float *)(gen_frame + 0x0)) = *pfVar2;
    (*(float *)(gen_frame + 0x4)) = pfVar2[1];
    (*(float *)(gen_frame + 0x8)) = pfVar2[2];
  }
  F_00a1e160(&(*(float *)(gen_frame + 0x2c)),&(*(undefined4 *)(gen_frame + 0x10)));
  *param_2 = (float)((float10)*param_2 * (float10)(*(float *)(gen_frame + 0x0)));
  param_2[1] = (float)((float10)param_2[1] * (float10)(*(float *)(gen_frame + 0x4)));
  param_2[2] = (float)((float10)param_2[2] * (float10)(*(float *)(gen_frame + 0x8)));
  F_00aaeb00((uint)param_2,(*(float *)(gen_frame + 0x2c)));
  *param_1 = (float)((float10)*param_1 + (float10)*param_2);
  param_1[1] = (float)((float10)param_1[1] + (float10)param_2[1]);
  param_1[2] = (float)((float10)param_2[2] + (float10)param_1[2]);
  return 0;
}

/* ref: FUN_00a606e0 */
byte F_00a606e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa606e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int * piVar1;
  bool bVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar3 = F_00424810(REFG(undefined4, 0x137104c));
  if ((uVar3 == 0) || (uVar3 = F_00974710(uVar3), (char)uVar3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    if (REFG(int, 0x1379694) == 0) {
      return 0;
    }
  }
  else if (REFG(int, 0x1379694) == 0) goto LAB_00a6075d;
  if ((((*(uint *)(REFG(int, 0x1379694) + 0xe4) != 0) &&
       (uVar3 = *(uint *)((int)this + 0xe4), *(uint *)(REFG(int, 0x1379694) + 0xe4) == uVar3)) &&
      (uVar3 != 0)) && ((uVar3 & 0x80000000) == 0x80000000)) {
    pvVar4 = (undefined *)F_006b8c00();
    uVar3 = F_006da050(pvVar4,uVar3);
    if (uVar3 == 0) {
      return 0;
    }
  }
LAB_00a6075d: ;
  uVar3 = *(uint *)((int)this + 0xe4);
  iVar6 = 0;
  if ((uVar3 != 0) && ((uVar3 & 0x80000000) == 0x80000000)) {
    pvVar4 = (undefined *)F_006b8c00();
    uVar3 = F_006da050(pvVar4,uVar3);
    if (uVar3 != 0) {
      ((uint *)(gen_frame + 0x8))[0] = uVar3;
      iVar6 = 1;
    }
  }
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this,((uint *)(gen_frame + 0x8)) + iVar6);
  uVar3 = uVar3 + iVar6;
  if ((uVar3 != 0) && (uVar7 = 0, uVar3 != 0)) {
    do {
      piVar1 = (int *)((uint *)(gen_frame + 0x8))[(int)(uVar7)];
      if ((piVar1 != (int *)0x0) &&
         (uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1), (char)uVar5 == '\0')) {
        return 0;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar3);
  }
  return 1;
}

/* ref: FUN_00a607e0 */
uint F_00a607e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa607e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00463610(param_1,param_2,param_3);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00a5f8c0(this,uVar1);
    *(byte *)((int)this + 0x8f) = *(byte *)((int)this + 0x8f) | 1;
  }
  return uVar2;
}

/* ref: FUN_00a60820 */
uint F_00a60820(unsigned int gen_a0)
{
  GEN_ENTER(0xa60820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x7c);
  if ((((uVar2 != 0) && (*(int *)((int)this + 0xf0) == 0)) && (*(int *)((int)this + 0xec) == 0)) &&
     (REFG(char, 0x1379c96) == '\0')) {
    piVar1 = (int *)F_005f3270(1,uVar2,0);
    if ((piVar1 == (int *)0x0) &&
       (piVar1 = (int *)F_005f3270(6,*(undefined4 *)((int)this + 0x7c),0), piVar1 == (int *)0x0))
    {
      return 0;
    }
    *(undefined4 *)((int)this + 0xc0) = REFG(float, 0x10928e4);
    if (*(byte *)((int)piVar1 + 0x11) == 1) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x5c))(piVar1);
        *(uint *)((int)this + 0xec) = uVar2;
      }
    }
    else {
      uVar2 = *(byte *)((int)piVar1 + 0x11) - 6;
      if (uVar2 == 0) {
        *(int * PTR32 *)((int)this + 0xf0) = piVar1;
        return 0;
      }
    }
  }
  return uVar2;
}

/* ref: Client::Game::Object::GameObject::vf11 */
uint F_00a608c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa608c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 GVar1;
  undefined4 in_EAX = 0;
  undefined3 uVar3;
  uint uVar2;
  
  GVar1 = this[0x8e];
  uVar3 = (undefined3)((uint)in_EAX >> 8);
  uVar2 = CONCAT31(uVar3,GVar1);
  if ((-1 < (char)GVar1) && (((byte)GVar1 & 0x20) != 0)) {
    uVar2 = CONCAT31(uVar3,GVar1) & 0xffffffef | 0x80;
    this[0x8e] = SUB41(uVar2,0);
    if (*(int *)(this + 0x7c) != 0) {
      uVar2 = F_00a60820(this);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_00a608f0 */
uint F_00a608f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa608f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * this_00;
  int * piVar1;
  byte bVar2;
  float * pfVar3;
  int iVar4;
  float * pfVar5;
  float10 fVar6;
  float10 fVar7;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  this_00 = *(undefined * PTR32 *)((int)this + 0xf0);
  if (this_00 == (undefined *)0x0) {
    piVar1 = *(int * PTR32 *)((int)this + 0xec);
    if ((piVar1 != (int *)0x0) && (*(char *)((int)piVar1 + 0x65) == '\x03')) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x40))(piVar1,param_1,param_2);
      goto LAB_00a60a28;
    }
LAB_00a60967: ;
    fVar6 = ((float10)GEN_TOD(fsin((float10)*(float *)((int)this + 0xb0))));
    fVar7 = ((float10)GEN_TOD(fcos((float10)*(float *)((int)this + 0xb0))));
    iVar4 = *(int *)((int)this + 0x7c);
    ((float *)(gen_frame + 0x0))[0] = (float)fVar7;
    ((float *)(gen_frame + 0x0))[1] = 0.0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    ((float *)(gen_frame + 0x0))[2] = ((float)GEN_TOF(-(float10)(float)fVar6));
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(float *)(gen_frame + 0x20)) = (float)fVar6;
    (*(float *)(gen_frame + 0x28)) = (float)fVar7;
    if (iVar4 == 0) {
LAB_00a609fc: ;
      pfVar3 = (float *)((int)this + 0xa0);
    }
    else if (*(int *)((int)this + 0xf0) == 0) {
      if (*(int *)((int)this + 0xec) == 0) goto LAB_00a609fc;
      pfVar3 = ((float *)GEN_TOP((*(int *)((int)this + 0xec) + 0x30)));
    }
    else {
      pfVar3 = ((float *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xf0) + 0xe4))))
                                  (*(int * PTR32 *)((int)this + 0xf0))));
    }
    fVar6 = (float10)0;
    (*(float *)(gen_frame + 0x30)) = (float)((float10)*pfVar3 + fVar6);
    (*(float *)(gen_frame + 0x34)) = (float)((float10)pfVar3[1] + fVar6);
    (*(float *)(gen_frame + 0x38)) = (float)(fVar6 + (float10)pfVar3[2]);
  }
  else {
    bVar2 = F_005d5fe0(this_00);
    if (bVar2 == 0) goto LAB_00a60967;
    F_005eaf50(this_00,((float *)(gen_frame + 0x0)),param_2);
  }
  pfVar3 = ((float *)(gen_frame + 0x0));
  pfVar5 = param_1;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar5 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar5 = pfVar5 + 1;
  }
LAB_00a60a28: ;
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return (uint)param_1;
}

/* ref: FUN_00a60a40 */
uint F_00a60a40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa60a40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int * piVar4;
  byte bVar5;
  undefined4 * puVar6;
  uint uVar7;
  undefined4 * puVar8;
  int iVar9;
  
  (*(uint *)(gen_frame + 0xcc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd0);
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = param_1;
  (*(int *)(gen_frame + 0x3c)) = param_2;
  if (*(int *)((int)this + 0x7c) != 0) {
    piVar4 = *(int * PTR32 *)((int)this + 0xf0);
    if (piVar4 != (int *)0x0) {
      puVar6 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0xe4))(piVar4)));
      goto LAB_00a60aad;
    }
    if (*(int *)((int)this + 0xec) != 0) {
      puVar6 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xec) + 0x30)));
      goto LAB_00a60aad;
    }
  }
  puVar6 = (undefined4 *)((int)this + 0xa0);
LAB_00a60aad: ;
  *param_1 = *puVar6;
  param_1[1] = puVar6[1];
  param_1[2] = puVar6[2];
  piVar4 = *(int * PTR32 *)((int)this + 0xf0);
  (*(int * PTR32 *)(gen_frame + 0x38)) = piVar4;
  puVar6 = param_1;
  if (piVar4 == (int *)0x0) {
    piVar4 = *(int * PTR32 *)((int)this + 0xec);
    (*(int * PTR32 *)(gen_frame + 0x38)) = piVar4;
    if ((piVar4 != (int *)0x0) && (*(char *)((int)piVar4 + 0x65) == '\x03')) {
      uVar7 = ((code *)*(gen_code32 *)(*piVar4 + 0x50))(piVar4,(*(int *)(gen_frame + 0x3c)));
      if (((char)uVar7 == '\0') || ((*(int *)(gen_frame + 0x3c)) == 0x2e)) {
        if ((*(byte *)((int)this + 0x8f) & 0x80) != 0) {
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xec) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0xec),&(*(undefined4 *)(gen_frame + 0x20)),0x2e);
          puVar8 = (undefined4 *)F_004bd7b0(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x20)),*(float *)((int)this + 0xb4));
          uVar1 = *puVar8;
          (*(undefined4 *)(gen_frame + 0x20)) = uVar1;
          uVar2 = puVar8[1];
          (*(undefined4 *)(gen_frame + 0x24)) = uVar2;
          uVar3 = puVar8[2];
          *(undefined4 *)((int)this + 0x160) = uVar1;
          *(undefined4 *)((int)this + 0x164) = uVar2;
          *(undefined4 *)((int)this + 0x168) = uVar3;
          *(byte *)((int)this + 0x8f) = *(byte *)((int)this + 0x8f) & 0x7f;
        }
        (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)((int)this + 0x160);
        (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)((int)this + 0x164);
        (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)((int)this + 0x168);
        puVar8 = (undefined4 *)F_004bd670(((undefined1 *)(gen_frame + 0x0)),(*(int * PTR32 *)(gen_frame + 0x38)) + 0xc,&(*(undefined4 *)(gen_frame + 0x20)));
        *param_1 = *puVar8;
        param_1[1] = puVar8[1];
        param_1[2] = puVar8[2];
      }
      else {
        puVar6 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x38)) + 0x40))((*(int * PTR32 *)(gen_frame + 0x38)),((undefined1 *)(gen_frame + 0x40)),(*(int *)(gen_frame + 0x3c)))));
        puVar8 = ((undefined4 *)(gen_frame + 0x80));
        for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        *(*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = (*(undefined4 *)(gen_frame + 0xb0));
        (*(undefined4 * PTR32 *)(gen_frame + 0x1c))[1] = (*(undefined4 *)(gen_frame + 0xb4));
        (*(undefined4 * PTR32 *)(gen_frame + 0x1c))[2] = (*(undefined4 *)(gen_frame + 0xb8));
        puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0x1c));
      }
    }
  }
  else {
    bVar5 = F_005d5fe0(piVar4);
    piVar4 = (*(int * PTR32 *)(gen_frame + 0x38));
    if (bVar5 != 0) {
      bVar5 = F_005eae70((*(int * PTR32 *)(gen_frame + 0x38)),(*(int *)(gen_frame + 0x3c)));
      if (bVar5 == 0) {
        (*(int *)(gen_frame + 0x3c)) = 0x2e;
      }
      F_005eaf50(piVar4,((undefined4 *)(gen_frame + 0x80)),(*(int *)(gen_frame + 0x3c)));
      *param_1 = (*(undefined4 *)(gen_frame + 0xb0));
      param_1[1] = (*(undefined4 *)(gen_frame + 0xb4));
      param_1[2] = (*(undefined4 *)(gen_frame + 0xb8));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xcc)) ^ (uint)(uint)(gen_frame + 0xd0));
  return (uint)puVar6;
}

/* ref: FUN_00a60ca0 */
byte F_00a60ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa60ca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int * piVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),(undefined1)param_3);
  if (*(undefined * PTR32 *)((int)this + 0xf0) == (undefined *)0x0) {
    piVar1 = *(int * PTR32 *)((int)this + 0xec);
    if ((piVar1 != (int *)0x0) && (*(char *)((int)piVar1 + 0x65) == '\x03')) {
      puVar4 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,((undefined1 *)(gen_frame + 0x10)),0x3d,param_2,(*(undefined4 *)(gen_frame + 0x4)))));
      puVar6 = puVar4;
      puVar7 = param_1;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      goto LAB_00a60dc0;
    }
  }
  else {
    bVar3 = F_005d5fe0(*(undefined * PTR32 *)((int)this + 0xf0));
    if (bVar3 != 0) {
      bVar3 = F_005eaf50(*(undefined * PTR32 *)((int)this + 0xf0),param_1,0x2e);
      puVar4 = (undefined4 *)(uint)bVar3;
      goto LAB_00a60dc0;
    }
  }
  puVar4 = &REFG(float, 0x1302d00);
  puVar6 = param_1;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  if (*(int *)((int)this + 0x7c) == 0) {
LAB_00a60d70: ;
    puVar4 = (undefined4 *)((int)this + 0xa0);
  }
  else if (*(int *)((int)this + 0xf0) == 0) {
    if (*(int *)((int)this + 0xec) == 0) goto LAB_00a60d70;
    puVar4 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xec) + 0x30)));
  }
  else {
    puVar4 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xf0) + 0xe4))))(*(int * PTR32 *)((int)this + 0xf0))));
  }
  uVar2 = REFG(float, 0x1087f04);
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1087f04));
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = uVar2;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = uVar2;
  param_1[0xc] = *puVar4;
  param_1[0xd] = puVar4[1];
  param_1[0xe] = puVar4[2];
LAB_00a60dc0: ;
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60));
  return (byte)puVar4;
}

/* ref: FUN_00a60de0 */
uint F_00a60de0(unsigned int gen_a0)
{
  GEN_ENTER(0xa60de0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  float fVar3;
  int * piVar4;
  byte bVar5;
  uint in_EAX = 0;
  uint uVar6;
  float * pfVar7;
  
  if (*(int *)((int)this + 0x7c) == 0) {
    if (*(int *)((int)this + 0xf0) != 0) {
      fVar2 = *(float *)((int)this + 0xc4);
      fVar1 = *(float *)((int)this + 0xa8);
      (*(float *)(gen_frame + 0x28)) = fVar2;
      fVar3 = *(float *)((int)this + 0xa4);
      (*(float *)(gen_frame + 0x10)) = *(float *)((int)this + 0xa0);
      (*(float *)(gen_frame + 0x18)) = fVar1;
      fVar1 = (float)((float10)fVar3 + (float10)fVar2);
      (*(float *)(gen_frame + 0x28)) = fVar1;
      (*(float *)(gen_frame + 0x14)) = fVar1;
      bVar5 = F_0054ccb0((undefined *)((int)this + 0xd0),&REFG(float, 0x1375ac0));
      if (bVar5 == 0) {
        fVar1 = *(float *)((int)this + 0xd8);
        (*(float *)(gen_frame + 0x0)) = *(float *)((int)this + 0xd0);
        (*(float *)(gen_frame + 0x4)) = *(float *)((int)this + 0xd4);
        (*(float *)(gen_frame + 0x8)) = fVar1;
        fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xe0) +
                       (float10)*(float *)((int)this + 0xb0))));
        (*(float *)(gen_frame + 0x28)) = fVar1;
        F_00aaeb00((uint)&(*(float *)(gen_frame + 0x0)),fVar1);
        (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x0)) + (float10)(*(float *)(gen_frame + 0x10)));
        (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x4)) + (float10)(*(float *)(gen_frame + 0x14)));
        (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x8)) + (float10)(*(float *)(gen_frame + 0x18)));
      }
      uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xf0) + 0xe8))))
                        (*(int * PTR32 *)((int)this + 0xf0),&(*(float *)(gen_frame + 0x10)));
      return uVar6;
    }
    if (*(int *)((int)this + 0xec) != 0) {
      (*(float *)(gen_frame + 0x28)) = *(float *)((int)this + 0xc4);
      pfVar7 = (float *)F_00a5feb0(this);
      (*(float *)(gen_frame + 0x2c)) = *pfVar7;
      uVar6 = F_00a5feb0(this);
      fVar1 = *(float *)(uVar6 + 4);
      (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x2c));
      fVar1 = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x28)));
      (*(float *)(gen_frame + 0x28)) = fVar1;
      (*(float *)(gen_frame + 0x14)) = fVar1;
      uVar6 = F_00a5feb0(this);
      (*(float *)(gen_frame + 0x18)) = *(float *)(uVar6 + 8);
      bVar5 = F_0054ccb0((undefined *)((int)this + 0xd0),&REFG(float, 0x1375ac0));
      if (bVar5 == 0) {
        fVar1 = *(float *)((int)this + 0xd8);
        (*(float *)(gen_frame + 0x0)) = *(float *)((int)this + 0xd0);
        (*(float *)(gen_frame + 0x4)) = *(float *)((int)this + 0xd4);
        (*(float *)(gen_frame + 0x8)) = fVar1;
        fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xe0) +
                       (float10)*(float *)((int)this + 0xb0))));
        (*(float *)(gen_frame + 0x24)) = fVar1;
        F_00aaeb00((uint)&(*(float *)(gen_frame + 0x0)),fVar1);
        (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x0)) + (float10)(*(float *)(gen_frame + 0x2c)));
        (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x4)) + (float10)(*(float *)(gen_frame + 0x28)));
        (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x8)) + (float10)(*(float *)(gen_frame + 0x18)));
      }
      in_EAX = ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this);
      if (((char)in_EAX == '\0') || (*(char *)((int)this + 0x2e08) == '\0')) {
        in_EAX = *(uint *)((int)this + 0xec);
        *(float *)(in_EAX + 0x30) = (*(float *)(gen_frame + 0x10));
        *(float *)(in_EAX + 0x34) = (*(float *)(gen_frame + 0x14));
        *(float *)(in_EAX + 0x38) = (*(float *)(gen_frame + 0x18));
        *(uint *)(in_EAX + 0x24) = *(uint *)(in_EAX + 0x24) | 2;
      }
      piVar4 = *(int * PTR32 *)((int)this + 0xec);
      if (*(char *)((int)piVar4 + 0x65) == '\x03') {
        in_EAX = ((code *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4,1);
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00a61000 */
uint F_00a61000(unsigned int gen_a0)
{
  GEN_ENTER(0xa61000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  int iVar3;
  int * piVar4;
  byte bVar5;
  uint in_EAX = 0;
  uint uVar6;
  undefined3 extraout_var = 0;
  float10 fVar7;
  
  if (*(int *)((int)this + 0x7c) == 0) {
    if (*(int *)((int)this + 0xf0) != 0) {
      fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xe0) + (float10)*(float *)((int)this + 0xb0))))
      ;
      (*(float *)(gen_frame + 0x1c)) = fVar1;
      fVar1 = (float)((float10)fVar1 * (float10)REFG(double, 0x1088108));
      (*(float *)(gen_frame + 0x1c)) = fVar1;
      fVar7 = ((float10)GEN_TOD(fsin((float10)fVar1)));
      fVar2 = (float)fVar7;
      (*(float *)(gen_frame + 0x18)) = fVar2;
      fVar7 = (float10)fVar2;
      (*(float *)(gen_frame + 0x0)) = (float)(fVar7 * (float10)REFG(float, 0x1302c80));
      (*(float *)(gen_frame + 0x4)) = (float)((float10)REFG(float, 0x1302c84) * fVar7);
      (*(float *)(gen_frame + 0x8)) = (float)(fVar7 * (float10)REFG(float, 0x1302c88));
      fVar7 = ((float10)GEN_TOD(fcos((float10)fVar1)));
      (*(float *)(gen_frame + 0x18)) = (float)fVar7;
      (*(float *)(gen_frame + 0xc)) = (float)fVar7;
      uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xf0) + 0xf0))))
                        (*(int * PTR32 *)((int)this + 0xf0),&(*(float *)(gen_frame + 0x0)));
      return uVar6;
    }
    iVar3 = *(int *)((int)this + 0xec);
    if (iVar3 != 0) {
      fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xe0) + (float10)*(float *)((int)this + 0xb0))))
      ;
      (*(float *)(gen_frame + 0x18)) = fVar1;
      F_0054cfd0(&(*(float *)(gen_frame + 0x0)),&REFG(float, 0x1302c80),fVar1);
      *(uint *)(iVar3 + 0x24) = *(uint *)(iVar3 + 0x24) | 2;
      *(float *)(iVar3 + 0x40) = (*(float *)(gen_frame + 0x0));
      *(float *)(iVar3 + 0x44) = (*(float *)(gen_frame + 0x4));
      *(float *)(iVar3 + 0x48) = (*(float *)(gen_frame + 0x8));
      *(float *)(iVar3 + 0x4c) = (*(float *)(gen_frame + 0xc));
      piVar4 = *(int * PTR32 *)((int)this + 0xec);
      if (*(char *)((int)piVar4 + 0x65) == '\x03') {
        ((code *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4,1);
      }
    }
    bVar5 = F_0054ccb0((undefined *)((int)this + 0xd0),&REFG(float, 0x1375ac0));
    in_EAX = CONCAT31(extraout_var,bVar5);
    if (bVar5 == 0) {
      in_EAX = F_00a60de0(this);
    }
  }
  return in_EAX;
}

/* ref: FUN_00a61140 */
unsigned int F_00a61140(unsigned int gen_a0)
{
  GEN_ENTER(0xa61140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  
  if (*(int *)((int)this + 0x7c) == 0) {
    if (*(int *)((int)this + 0xf0) != 0) {
      uVar1 = *(undefined4 *)((int)this + 0xb4);
      piVar2 = *(int * PTR32 *)((int)this + 0xf0);
      (*(undefined4 *)(gen_frame + 0x0)) = uVar1;
      (*(undefined4 *)(gen_frame + 0x4)) = uVar1;
      (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
      ((code *)*(gen_code32 *)(*piVar2 + 0xf8))(piVar2,&(*(undefined4 *)(gen_frame + 0x0)));
      return 0;
    }
    if (*(int *)((int)this + 0xec) != 0) {
      uVar1 = *(undefined4 *)((int)this + 0xb4);
      iVar3 = *(int *)((int)this + 0xec);
      *(undefined4 *)(iVar3 + 0x58) = uVar1;
      *(undefined4 *)(iVar3 + 0x50) = uVar1;
      *(undefined4 *)(iVar3 + 0x54) = uVar1;
      *(uint *)(iVar3 + 0x24) = *(uint *)(iVar3 + 0x24) | 2;
      piVar2 = *(int * PTR32 *)((int)this + 0xec);
      if (*(char *)((int)piVar2 + 0x65) == '\x03') {
        ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2,1);
      }
    }
  }
  return 0;
}

/* ref: FUN_00a611f0 */
byte F_00a611f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa611f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  if (param_2 == (uint *)0x0) {
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(uint *)(gen_frame + 0x34)) = 0;
    (*(uint *)(gen_frame + 0x38)) = 0;
    puVar4 = &(*(undefined4 *)(gen_frame + 0xc));
    this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
    F_009755f0(this_00,puVar4);
    uVar2 = (*(uint *)(gen_frame + 0x34));
    uVar3 = (*(uint *)(gen_frame + 0x38));
  }
  else {
    uVar2 = *param_2;
    uVar3 = param_2[1];
  }
  uVar1 = *(uint *)((int)this + param_1 * 8 + 0xfc);
  if ((uVar3 <= uVar1) && ((uVar3 < uVar1 || (uVar2 < *(uint *)((int)this + param_1 * 8 + 0xf8)))))
  {
    return 0;
  }
  *(uint *)((int)this + param_1 * 8 + 0xf8) = uVar2;
  *(uint *)((int)this + param_1 * 8 + 0xfc) = uVar3;
  return 1;
}

/* ref: FUN_00a61290 */
uint F_00a61290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa61290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  int iVar2;
  
  *param_1 = *(float *)((int)this + 0xa0);
  param_1[1] = *(float *)((int)this + 0xa4);
  param_1[2] = *(float *)((int)this + 0xa8);
  iVar2 = *(int *)((int)this + 0x7c);
  (*(float *)(gen_frame + 0x0)) = *(float *)((int)this + 0x120);
  (*(float *)(gen_frame + 0x4)) = *(float *)((int)this + 0x124);
  (*(float *)(gen_frame + 0x8)) = *(float *)((int)this + 0x128);
  if (iVar2 != 0) {
    F_00a60560(this,param_1,&(*(float *)(gen_frame + 0x0)));
    return (uint)param_1;
  }
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xe0) + (float10)*(float *)((int)this + 0xb0))));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  F_00aaeb00((uint)&(*(float *)(gen_frame + 0x0)),fVar1);
  *param_1 = (float)((float10)*param_1 + (float10)(*(float *)(gen_frame + 0x0)));
  param_1[1] = (float)((float10)param_1[1] + (float10)(*(float *)(gen_frame + 0x4)));
  param_1[2] = (float)((float10)param_1[2] + (float10)(*(float *)(gen_frame + 0x8)));
  return (uint)param_1;
}

/* ref: FUN_00a61360 */
uint F_00a61360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa61360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  int iVar2;
  
  *param_1 = *(float *)((int)this + 0xa0);
  param_1[1] = *(float *)((int)this + 0xa4);
  param_1[2] = *(float *)((int)this + 0xa8);
  iVar2 = *(int *)((int)this + 0x7c);
  (*(float *)(gen_frame + 0x0)) = *(float *)((int)this + 0x130);
  (*(float *)(gen_frame + 0x4)) = *(float *)((int)this + 0x134);
  (*(float *)(gen_frame + 0x8)) = *(float *)((int)this + 0x138);
  if (iVar2 != 0) {
    F_00a60560(this,param_1,&(*(float *)(gen_frame + 0x0)));
    return (uint)param_1;
  }
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xe0) + (float10)*(float *)((int)this + 0xb0))));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  F_00aaeb00((uint)&(*(float *)(gen_frame + 0x0)),fVar1);
  *param_1 = (float)((float10)*param_1 + (float10)(*(float *)(gen_frame + 0x0)));
  param_1[1] = (float)((float10)param_1[1] + (float10)(*(float *)(gen_frame + 0x4)));
  param_1[2] = (float)((float10)param_1[2] + (float10)(*(float *)(gen_frame + 0x8)));
  return (uint)param_1;
}

/* ref: Client::Game::Object::GameObject::vf33 */
uint F_00a61430(unsigned int gen_a0)
{
  GEN_ENTER(0xa61430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 GVar6;
  code * pcVar7;
  byte bVar8;
  uint uVar9;
  float * pfVar10;
  bool bVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  
  if ((((byte)this[0x8e] & 0x20) == 0) &&
     (uVar9 = ((code *)*(gen_code32 *)(*(int *)this + 0xc0))(this), (char)uVar9 != '\0')) {
    this[0x8e] = (undefined1)((byte)this[0x8e] | 0x20);
  }
  if (((((byte)this[0x8e] & 8) == 0) && (((byte)this[0x8e] & 0x20) != 0)) &&
     (bVar8 = F_00a606e0(this), bVar8 != 0)) {
    pcVar7 = *(gen_code32 *)(*(int *)this + 0x74);
    this[0x8e] = (undefined1)((byte)this[0x8e] | 8);
    (*pcVar7)(this);
  }
  if ((((byte)this[0x8e] & 0x10) == 0) &&
     (uVar9 = ((code *)*(gen_code32 *)(*(int *)this + 0x70))(this), (char)uVar9 != '\0')) {
    pcVar7 = *(gen_code32 *)(*(int *)this + 0x6c);
    this[0x8e] = (undefined1)((byte)this[0x8e] | 0x10);
    (*pcVar7)(this);
  }
  GVar6 = this[0x8e];
  if (((((byte)GVar6 & 4) == 0) && (((byte)GVar6 & 0x20) != 0)) &&
     ((((byte)GVar6 & 8) != 0 &&
      ((((byte)GVar6 & 0x10) != 0 && (bVar8 = F_00a606e0(this), bVar8 != 0)))))) {
    pcVar7 = *(gen_code32 *)(*(int *)this + 100);
    this[0x8e] = (undefined1)((byte)this[0x8e] | 4);
    (*pcVar7)(this);
  }
  fVar1 = *(float *)(this + 0x140);
  (*(float *)(gen_frame + 0x28)) = fVar1;
  fVar2 = *(float *)(this + 0x144);
  fVar3 = *(float *)(this + 0x124);
  fVar4 = *(float *)(this + 0x148);
  fVar5 = *(float *)(this + 0x128);
  fVar12 = (float10)((float)GEN_TOF(((float10)fVar1 - (float10)*(float *)(this + 0x120))));
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)fVar1 - (float10)*(float *)(this + 0x120))));
  fVar13 = (float10)(float)((float10)fVar2 - (float10)fVar3);
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar2 - (float10)fVar3);
  fVar14 = (float10)(float)((float10)fVar4 - (float10)fVar5);
  (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar4 - (float10)fVar5);
  fVar2 = ((float)GEN_TOF((fVar14 * fVar14 + (fVar12 * fVar12 + fVar13 * fVar13))));
  (*(float *)(gen_frame + 0x2c)) = fVar2;
  fVar15 = (float10)fVar2;
  bVar11 = GEN_ISNAN(fVar15) || GEN_ISNAN((float10)0);
  if (bVar11 == (bVar11 || fVar15 == (float10)0)) {
    if (fVar2 < REFG(float, 0x10e5d90)) {
      *(float *)(this + 0x120) = fVar1;
      *(undefined4 *)(this + 0x124) = *(undefined4 *)(this + 0x144);
      *(undefined4 *)(this + 0x128) = *(undefined4 *)(this + 0x148);
    }
    else {
      fVar16 = (float10)*(double *)&REFG(undefined, 0x10a1b58);
      if (fVar15 * fVar16 < (float10)*(double *)&REFG(undefined, 0x10e5d88)) {
        pfVar10 = (float *)F_004bd580(&(*(float *)(gen_frame + 0x10)));
        fVar14 = (float10)*(double *)&REFG(undefined, 0x10e5d88);
        fVar12 = (float10)*pfVar10 * fVar14;
        fVar13 = (float10)pfVar10[1] * fVar14;
        fVar14 = fVar14 * (float10)pfVar10[2];
      }
      else {
        fVar12 = fVar12 * fVar16;
        fVar13 = fVar13 * fVar16;
        fVar14 = fVar14 * fVar16;
      }
      (*(float *)(gen_frame + 0x4)) = (float)fVar13;
      (*(float *)(gen_frame + 0x0)) = (float)fVar12;
      *(float *)(this + 0x120) = ((float)GEN_TOF(((float10)*(float *)(this + 0x120) + (float10)(*(float *)(gen_frame + 0x0)))));
      *(float *)(this + 0x124) = ((float)GEN_TOF(((float10)*(float *)(this + 0x124) + (float10)(*(float *)(gen_frame + 0x4)))));
      *(float *)(this + 0x128) = ((float)GEN_TOF(((float10)*(float *)(this + 0x128) + (float10)(float)fVar14)))
      ;
    }
  }
  fVar1 = *(float *)(this + 0x150);
  (*(float *)(gen_frame + 0x28)) = fVar1;
  fVar2 = *(float *)(this + 0x154);
  fVar3 = *(float *)(this + 0x134);
  fVar4 = *(float *)(this + 0x158);
  fVar5 = *(float *)(this + 0x138);
  fVar12 = (float10)((float)GEN_TOF(((float10)fVar1 - (float10)*(float *)(this + 0x130))));
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)fVar1 - (float10)*(float *)(this + 0x130))));
  fVar15 = (float10)(float)((float10)fVar2 - (float10)fVar3);
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar2 - (float10)fVar3);
  fVar13 = (float10)(float)((float10)fVar4 - (float10)fVar5);
  (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar4 - (float10)fVar5);
  fVar2 = ((float)GEN_TOF(((fVar12 * fVar12 + fVar15 * fVar15) + fVar13 * fVar13)));
  (*(float *)(gen_frame + 0x2c)) = fVar2;
  bVar11 = GEN_ISNAN((float10)fVar2) || GEN_ISNAN((float10)0);
  if (bVar11 == (bVar11 || (float10)fVar2 == (float10)0)) {
    if (fVar2 <= REFG(float, 0x10e5d84)) {
      *(float *)(this + 0x130) = fVar1;
      *(undefined4 *)(this + 0x134) = *(undefined4 *)(this + 0x154);
      fVar12 = (float10)*(float *)(this + 0x158);
    }
    else {
      pfVar10 = (float *)F_004bd580(&(*(float *)(gen_frame + 0x10)));
      fVar12 = (float10)REFG(double, 0x1094800);
      fVar1 = pfVar10[1];
      fVar2 = pfVar10[2];
      *(float *)(this + 0x130) =
           ((float)GEN_TOF(((float10)*(float *)(this + 0x130) + (float10)(float)((float10)*pfVar10 * fVar12))))
      ;
      *(float *)(this + 0x134) =
           ((float)GEN_TOF(((float10)*(float *)(this + 0x134) + (float10)(float)((float10)fVar1 * fVar12))));
      fVar12 = (float10)(float)(fVar12 * (float10)fVar2) + (float10)*(float *)(this + 0x138);
    }
    *(float *)(this + 0x138) = (float)fVar12;
  }
  F_00a602f0(this);
  F_00a60400(this);
  ((code *)*(gen_code32 *)(*(int *)this + 0x94))(this);
  uVar9 = F_00a5f7a0(this);
  return uVar9;
}

/* ref: FUN_00a61740 */
unsigned int F_00a61740(unsigned int gen_a0)
{
  GEN_ENTER(0xa61740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  if (*(int *)((int)this + 0xf0) == 0) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 200))(this);
    if ((char)uVar2 != '\0') {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xcc))(this)));
      if (piVar3 != (int *)0x0) {
        bVar1 = *(byte *)((int)this + 0x8e);
        *(int * PTR32 *)((int)this + 0xf0) = piVar3;
        if (((-1 < (char)bVar1) && ((bVar1 & 0x20) != 0)) &&
           (*(byte *)((int)this + 0x8e) = bVar1 & 0xef | 0x80, *(int *)((int)this + 0x7c) != 0)) {
          F_00a60820(this);
        }
        F_00a1eab0(((undefined1 *)(gen_frame + 0x0)),this);
        ((code *)*(gen_code32 *)(*piVar3 + 0x100))(piVar3,((undefined1 *)(gen_frame + 0x0)));
      }
    }
  }
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf5 */
uint F_00a617e0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xa617e0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  
  *(float *)((int)param_1 + 0xd0) = param_2;
  *(float *)((int)param_1 + 0xd4) = param_3;
  *(float *)((int)param_1 + 0xd8) = param_4;
  uVar1 = F_00a60de0(param_1);
  return uVar1;
}

/* ref: Client::Game::Object::GameObject::vf6 */
uint F_00a61820(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa61820u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 in_EAX = 0;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar4 = (float10)param_2;
  fVar5 = (float10)*(float *)((int)param_1 + 0xe0);
  bVar2 = GEN_ISNAN(fVar5) || GEN_ISNAN(fVar4);
  bVar3 = bVar2 || fVar5 == fVar4;
  uVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),
                   CONCAT11(bVar3 << 6 | bVar2 << 2 | 2U | !(fVar4 <= fVar5),(char)in_EAX));
  if (bVar2 == bVar3) {
    *(float *)((int)param_1 + 0xe0) = param_2;
    uVar1 = F_00a61000(param_1);
  }
  return uVar1;
}

/* ref: Client::Game::Object::GameObject::vf16 */
uint F_00a61850(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xa61850u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  
  *(float *)((int)param_1 + 0xa0) = param_2;
  *(float *)((int)param_1 + 0xa4) = param_3;
  *(float *)((int)param_1 + 0xa8) = param_4;
  uVar1 = F_00a60de0(param_1);
  return uVar1;
}

/* ref: Client::Game::Object::GameObject::vf18 */
uint F_00a61890(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa61890u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  *(float *)((int)param_1 + 0xb0) = param_2;
  uVar1 = F_00a61000(param_1);
  return uVar1;
}

/* ref: Client::Game::Object::GameObject::vf19 */
unsigned int F_00a618b0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa618b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)((int)param_1 + 0xb4) = param_2;
  F_00a61140(param_1);
  *(byte *)((int)param_1 + 0x8f) = *(byte *)((int)param_1 + 0x8f) | 0x80;
  return 0;
}

/* ref: FUN_00a618e0 */
byte F_00a618e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa618e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0xec) == 0) {
    return 1;
  }
  return *((byte *)GEN_TOP((*(int *)(in_ecx + 0xec) + 100))) >> 3 & 1;
}

/* ref: FUN_00a61900 */
uint F_00a61900(unsigned int gen_a0)
{
  GEN_ENTER(0xa61900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * pbVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)((int)this + 0xec) != 0) {
    pbVar1 = ((byte *)GEN_TOP((*(int *)((int)this + 0xec) + 100)));
    *pbVar1 = *pbVar1 | 1;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xec) + 8))))(*(int * PTR32 *)((int)this + 0xec));
    if (uVar2 == 4) {
      uVar2 = F_00699cb0(*(undefined4 *)((int)this + 0xec),(float)(float10)0);
    }
  }
  return uVar2;
}

/* ref: FUN_00a61940 */
uint F_00a61940(unsigned int gen_a0)
{
  GEN_ENTER(0xa61940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * pbVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)((int)this + 0xec) != 0) {
    pbVar1 = ((byte *)GEN_TOP((*(int *)((int)this + 0xec) + 100)));
    *pbVar1 = *pbVar1 & 0xfe;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xec) + 8))))(*(int * PTR32 *)((int)this + 0xec));
    if (uVar2 == 4) {
      uVar2 = F_0068b730(*(undefined4 *)((int)this + 0xec),(float)(float10)0);
    }
  }
  return uVar2;
}

/* ref: Client::Game::Object::GameObject::vf9 */
byte F_00a61980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa61980u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(this + 0x11c);
  uVar2 = ~(1 << ((byte)param_1 & 0x1f)) & uVar1;
  *(uint *)(this + 0x11c) = uVar2;
  if (((*(int *)(this + 0xf0) != 0) && (uVar1 != 0)) && (uVar2 == 0)) {
    F_00a5f680(this,param_2);
    return 1;
  }
  if (((*(int *)(this + 0xec) != 0) && (uVar1 != 0)) && (uVar2 == 0)) {
    F_00a61900(this);
    return 1;
  }
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf10 */
byte F_00a619f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa619f0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x11c)));
  uVar2 = 1 << ((byte)(*(int *)&gen_args[1]) & 0x1f) | uVar1;
  *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x11c))) = uVar2;
  if (((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xf0))) != 0) && (uVar1 == 0)) && (uVar2 != 0)) {
    (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),1);
    if ((char)(*(undefined4 *)&gen_args[2]) == '\x01') {
      (*(int *)&gen_args[1]) = (uint)GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3) << 8;
    }
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xbc))))((*(undefined * PTR32 *)&gen_args[0]),0,(*(int *)&gen_args[1]));
    return 1;
  }
  if (((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xec))) != 0) && (uVar1 == 0)) && (uVar2 != 0)) {
    F_00a61940((*(undefined * PTR32 *)&gen_args[0]));
    return 1;
  }
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf37 */
uint F_00a61a70(unsigned int gen_a0)
{
  GEN_ENTER(0xa61a70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  int * piVar1;
  char cVar2;
  byte bVar3;
  uint in_EAX = 0;
  uint uVar4;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  code * pcVar5;
  uint uVar6;
  int * piVar7;
  uint uVar8;
  bool bVar9;
  
  if (((byte)this[0x8f] & 8) == 0) {
LAB_00a61a85: ;
    return in_EAX & 0xffffff00;
  }
  uVar4 = F_00424810(REFG(undefined4, 0x137104c));
  in_EAX = F_00974710(uVar4);
  if ((((char)in_EAX != '\0') && (REFG(int, 0x1379694) == 0)) ||
     (in_EAX = ((code *)*(gen_code32 *)(*(int *)this + 0x78))(this), (char)in_EAX == '\0')) goto LAB_00a61a85;
  if (*(undefined * PTR32 *)(this + 0xf0) != (undefined *)0x0) {
    bVar3 = F_005d5fe0(*(undefined * PTR32 *)(this + 0xf0));
    if (bVar3 == 0) {
      return CONCAT31(extraout_var,bVar3);
    }
  }
  uVar4 = F_00a5f380(this,((int *)(gen_frame + 0x4)));
  (*(uint *)(gen_frame + 0xc4)) = uVar4;
  (*(int * PTR32 *)(gen_frame + 0xd4)) = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0xc8)) = (int *)0x0;
  if (uVar4 != 0) {
    (*(char *)(gen_frame + 0xdb)) = '\0';
    piVar7 = ((int *)(gen_frame + 0x4));
    (*(uint *)(gen_frame + 0xd0)) = uVar4;
    do {
      piVar1 = (int *)*piVar7;
      if (piVar1 != (int *)0x0) {
        if (*(short *)((int)piVar1 + 10) == 0xd) {
          uVar4 = F_006ce010(piVar1,((undefined4 *)(gen_frame + 0x84)),0x10);
          uVar6 = 0;
          (*(uint *)(gen_frame + 0xcc)) = uVar4;
          if (uVar4 != 0) {
            do {
              bVar9 = (*(int * PTR32 *)(gen_frame + 0xd4)) == (int *)0x0;
              piVar1 = (int *)((undefined4 *)(gen_frame + 0x84))[(int)(uVar6)];
              *piVar7 = (int)piVar1;
              if ((bVar9) &&
                 (uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x1d0))(piVar1,this), (char)uVar4 != '\0')) {
                (*(char *)(gen_frame + 0xdb)) = '\x01';
                (*(int * PTR32 *)(gen_frame + 0xd4)) = (int *)*piVar7;
              }
              if (*(short *)(*piVar7 + 10) == 0x1a) {
                (*(int * PTR32 *)(gen_frame + 0xc8)) = (int *)*piVar7;
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 < (*(uint *)(gen_frame + 0xcc)));
          }
        }
        else {
          if (((*(int * PTR32 *)(gen_frame + 0xd4)) == (int *)0x0) &&
             (uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x1d0))(piVar1,this), (char)uVar4 != '\0')) {
            (*(char *)(gen_frame + 0xdb)) = '\x01';
            (*(int * PTR32 *)(gen_frame + 0xd4)) = (int *)*piVar7;
          }
          if (*(short *)(*piVar7 + 10) == 0x1a) {
            (*(int * PTR32 *)(gen_frame + 0xc8)) = (int *)*piVar7;
          }
        }
      }
      piVar7 = piVar7 + 1;
      uVar4 = (*(uint *)(gen_frame + 0xd0)) - 1;
      (*(uint *)(gen_frame + 0xd0)) = uVar4;
    } while (uVar4 != 0);
    if ((((*(int * PTR32 *)(gen_frame + 0xd4)) != (int *)0x0) && ((*(int * PTR32 *)(gen_frame + 0xc8)) != (int *)0x0)) && ((*(int * PTR32 *)(gen_frame + 0xd4)) != (*(int * PTR32 *)(gen_frame + 0xc8)))) {
      uVar4 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xc8)) + 0x1d0))((*(int * PTR32 *)(gen_frame + 0xc8)),this);
      (*(char *)(gen_frame + 0xdb)) = (char)uVar4;
    }
    this[0x8f] = (undefined1)((byte)this[0x8f] ^ ((*(char *)(gen_frame + 0xdb)) << 4 ^ (byte)this[0x8f]) & 0x10);
  }
  piVar7 = (*(int * PTR32 *)(gen_frame + 0xd4));
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x90))(this);
  cVar2 = (char)uVar4;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xd0)) + 0)) = cVar2;
  (*(uint *)(gen_frame + 0xd0)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0xd0)), 1, 3),cVar2);
  bVar3 = F_00a5f230(this);
  if (bVar3 == 0) {
    pcVar5 = *(gen_code32 *)(*(int *)this + 0x28);
  }
  else {
    pcVar5 = *(gen_code32 *)(*(int *)this + 0x24);
  }
  (*pcVar5)(8,(*(uint *)(gen_frame + 0xd0)));
  if (cVar2 == '\x01') {
    if (*(int *)(this + 0x11c) == 0) {
      if (*(int *)(this + 0xf0) != 0) {
        ((code *)*(gen_code32 *)(*(int *)this + 0xbc))(this,1,0);
        ((code *)*(gen_code32 *)(*(int *)this + 0xd0))(this);
      }
      if (*(int *)(this + 0xec) != 0) {
        F_00a61900(this);
      }
    }
    else {
      if (*(int *)(this + 0xf0) != 0) {
        ((code *)*(gen_code32 *)(*(int *)this + 0xbc))(this,0,0);
      }
      if (*(int *)(this + 0xec) != 0) {
        F_00a61940(this);
      }
    }
  }
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x70))(this);
  if ((char)uVar4 != '\0') {
    bVar3 = F_005e1600();
    uVar4 = CONCAT31(extraout_var_00,bVar3);
    if (bVar3 != 0) {
      bVar3 = F_005d99e0();
      uVar4 = CONCAT31(extraout_var_01,bVar3);
      if (bVar3 != 0) goto LAB_00a61c9e;
    }
  }
  if (((byte)this[0x8e] & 0x80) != 0) {
    return uVar4 & 0xffffff00;
  }
LAB_00a61c9e: ;
  uVar4 = CONCAT31((int3)(uVar4 >> 8),(byte)this[0x8e] >> 1) & 0xffffff01;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xcc)) + 0)) = (char)uVar4;
  (*(uint *)(gen_frame + 0xcc)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0xcc)), 1, 3),(char)uVar4);
  if (piVar7 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar7 + 0x1d4))(piVar7,this,(*(uint *)(gen_frame + 0xcc)));
  }
  uVar6 = (*(uint *)(gen_frame + 0xc4));
  uVar8 = 0;
  uVar4 = CONCAT31((int3)(uVar4 >> 8),(char)uVar4 * '\x02' ^ (byte)this[0x8e]) & 0xffffff02;
  this[0x8e] = (undefined1)((byte)this[0x8e] ^ (byte)uVar4);
  if ((*(uint *)(gen_frame + 0xc4)) != 0) {
    do {
      piVar7 = (int *)((int *)(gen_frame + 0x4))[(int)(uVar8)];
      if (piVar7 != (int *)0x0) {
        uVar4 = ((code *)*(gen_code32 *)(*piVar7 + 0xc0))(piVar7,this);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar6);
  }
  this[0x8f] = (undefined1)((byte)this[0x8f] & 0xf7);
  return CONCAT31((int3)(uVar4 >> 8),1);
}

/* ref: Client::Game::Object::GameObject::vf27 */
uint F_00a61d10(unsigned int gen_a0)
{
  GEN_ENTER(0xa61d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code * pcVar4;
  undefined4 * puVar5;
  uint uVar6;
  
  puVar5 = (undefined4 *)F_00a5fd10(this,((undefined1 *)(gen_frame + 0x0)),0x2d);
  uVar1 = *puVar5;
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  *(undefined4 *)(this + 0x120) = uVar1;
  *(undefined4 *)(this + 0x124) = uVar2;
  *(undefined4 *)(this + 0x128) = uVar3;
  *(undefined4 *)(this + 0x140) = uVar1;
  *(undefined4 *)(this + 0x144) = uVar2;
  *(undefined4 *)(this + 0x148) = uVar3;
  puVar5 = (undefined4 *)F_00a5fd10(this,((undefined1 *)(gen_frame + 0x0)),0x46);
  uVar1 = *puVar5;
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  *(undefined4 *)(this + 0x130) = uVar1;
  *(undefined4 *)(this + 0x134) = uVar2;
  *(undefined4 *)(this + 0x138) = uVar3;
  *(undefined4 *)(this + 0x150) = uVar1;
  *(undefined4 *)(this + 0x154) = uVar2;
  *(undefined4 *)(this + 0x158) = uVar3;
  F_00a60de0(this);
  F_00a61000(this);
  F_00a61140(this);
  ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this,0xb,(uint)(*(int *)(this + 0x7c) != 0));
  pcVar4 = *(gen_code32 *)(*(int *)this + 0x8c);
  this[0x8f] = (undefined1)((byte)this[0x8f] | 8);
  uVar6 = (*pcVar4)(this);
  if ((char)uVar6 == '\x01') {
    if (*(int *)(this + 0x11c) == 0) {
      if (*(int *)(this + 0xf0) != 0) {
        ((code *)*(gen_code32 *)(*(int *)this + 0xbc))(this,1,0);
        uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0xd0))(this);
      }
      if (*(int *)(this + 0xec) != 0) {
        uVar6 = F_00a61900(this);
      }
    }
    else {
      if (*(int *)(this + 0xf0) != 0) {
        uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0xbc))(this,0,0);
      }
      if (*(int *)(this + 0xec) != 0) {
        uVar6 = F_00a61940(this);
        return uVar6;
      }
    }
  }
  return uVar6;
}

/* ref: FUN_00a61e80 */
uint F_00a61e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa61e80u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *in_ecx = (float)((float10)*param_2 * (float10)*in_ecx);
  in_ecx[1] = (float)((float10)param_2[1] * (float10)in_ecx[1]);
  in_ecx[2] = (float)((float10)param_2[2] * (float10)in_ecx[2]);
  return (uint)in_ecx;
}

/* ref: FUN_00a61eb0 */
uint F_00a61eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa61eb0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *in_ecx = (float)((float10)*param_2 * (float10)*in_ecx);
  in_ecx[1] = (float)((float10)param_2[1] * (float10)in_ecx[1]);
  in_ecx[2] = (float)((float10)param_2[2] * (float10)in_ecx[2]);
  return (uint)in_ecx;
}

/* ref: FUN_00a61ee0 */
uint F_00a61ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa61ee0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x160) = *param_2;
  *(undefined4 *)(in_ecx + 0x164) = param_2[1];
  *(undefined4 *)(in_ecx + 0x168) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00a61f10 */
uint F_00a61f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa61f10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x160);
  param_2[1] = *(undefined4 *)(in_ecx + 0x164);
  param_2[2] = *(undefined4 *)(in_ecx + 0x168);
  return (uint)param_2;
}

/* ref: FUN_00a61f40 */
unsigned int F_00a61f40(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xa61f40u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  *(float *)(in_ecx + 0x10) = param_2;
  *(float *)(in_ecx + 0x14) = param_3;
  *(float *)(in_ecx + 0x18) = param_4;
  return 0;
}

/* ref: FUN_00a61f70 */
uint F_00a61f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa61f70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *(undefined4 *)(in_ecx + 0x10) = *param_2;
  *(undefined4 *)(in_ecx + 0x14) = uVar1;
  *(undefined4 *)(in_ecx + 0x18) = uVar2;
  return (uint)param_2;
}

/* ref: FUN_00a61fd0 */
uint F_00a61fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa61fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)((int)this + param_1 * 8 + 0x58);
}

/* ref: FUN_00a62010 */
byte F_00a62010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa62010u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x149) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a62020 */
uint F_00a62020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa62020u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a62040 */
unsigned int F_00a62040(float gen_a0)
{
  GEN_ENTER(0xa62040u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00a620a0 */
byte F_00a620a0(void)
{
  GEN_ENTER(0xa620a0u, 0u, 0u, 0u, 0u);
  int iVar1;
  
  iVar1 = *(int *)&REFG(undefined2, 0x1379c78);
  if (REFG(int, 0x1334d6c) != *(int *)&REFG(undefined2, 0x1379c78)) {
    REFG(undefined4, 0x14a9a08) = F_00ab1c90(*(int *)&REFG(undefined2, 0x1379c78));
    REFG(int, 0x1334d6c) = iVar1;
  }
  if (((REFG(undefined4, 0x14a9a08) != 0) && (1 < *(byte *)(REFG(undefined4, 0x14a9a08) + 0x28))) &&
     (*(byte *)(REFG(undefined4, 0x14a9a08) + 0x28) < 5)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a620f0 */
uint F_00a620f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa620f0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)&REFG(undefined2, 0x1379c78);
  if (REFG(int, 0x1334d6c) != *(int *)&REFG(undefined2, 0x1379c78)) {
    REFG(undefined4, 0x14a9a08) = F_00ab1c90(*(int *)&REFG(undefined2, 0x1379c78));
    REFG(int, 0x1334d6c) = iVar2;
  }
  if (REFG(undefined4, 0x14a9a08) != 0) {
    bVar1 = *(byte *)(REFG(undefined4, 0x14a9a08) + 0x28);
    if (bVar1 == 1) {
      uVar3 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
      if ((uVar3 != 1) && (uVar3 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1), uVar3 == 2)) {
        return (uint)*(byte *)(param_1 + 0x65);
      }
    }
    else if ((1 < bVar1) && (bVar1 < 5)) {
      return (uint)*(byte *)(param_1 + 0x65);
    }
  }
  return 0;
}

/* ref: FUN_00a62170 */
byte F_00a62170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa62170u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  
  iVar1 = *(int *)&REFG(undefined2, 0x1379c78);
  if (REFG(int, 0x1334d6c) != *(int *)&REFG(undefined2, 0x1379c78)) {
    REFG(undefined4, 0x14a9a08) = F_00ab1c90(*(int *)&REFG(undefined2, 0x1379c78));
    REFG(int, 0x1334d6c) = iVar1;
  }
  if (REFG(undefined4, 0x14a9a08) == 0) {
    cVar4 = '\0';
  }
  else {
    cVar4 = *(char *)(REFG(undefined4, 0x14a9a08) + 0x28);
  }
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  if ((((uVar2 == 1) || (uVar2 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1), uVar2 == 2)) &&
      ((uVar2 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2), uVar2 == 1 ||
       (uVar2 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2), uVar2 == 2)))) && (cVar4 != '\0')) {
    uVar2 = F_00a620f0(param_1);
    uVar3 = F_00a620f0(param_2);
    uVar2 = F_00ab22c0(uVar2);
    return *(char *)(uVar2 + uVar3) == '\x01';
  }
  return 0;
}

/* ref: FUN_00a62220 */
uint F_00a62220(unsigned int gen_a0)
{
  GEN_ENTER(0xa62220u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  
  iVar1 = REFG(int, 0x1379694);
  uVar3 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  uVar4 = 0;
  if (uVar3 != 1) {
    uVar4 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
    if (uVar4 != 2) goto LAB_00a6224a;
  }
  if (iVar1 != 0) {
    bVar2 = F_00a62170(iVar1,param_1);
    return CONCAT31(extraout_var,bVar2);
  }
LAB_00a6224a: ;
  return uVar4 & 0xffffff00;
}

/* ref: FUN_00a62270 */
byte F_00a62270(unsigned int gen_a0)
{
  GEN_ENTER(0xa62270u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  iVar1 = REFG(int, 0x1379694);
  uVar3 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  if ((uVar3 != 1) && (uVar3 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1), uVar3 != 2)) {
    return 1;
  }
  if (iVar1 == 0) {
    return 1;
  }
  bVar2 = F_00a62170(iVar1,param_1);
  return bVar2 == 0;
}

/* ref: FUN_00a622c0 */
unsigned int F_00a622c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa622c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00a622d0 */
unsigned int F_00a622d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa622d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00a622e0 */
unsigned int F_00a622e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa622e0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  if (param_1 != (int *)0x0) {
    if (param_2 == 3) {
      uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xd8))(param_1);
      uVar1 = F_00ab24a0(*(undefined4 *)(uVar1 + 0x48));
      if (uVar1 != 0) {
        F_00aa8240(param_1,*(undefined4 *)(uVar1 + 0x18),*(undefined4 *)(uVar1 + 0x1c));
      }
    }
    else {
      if (param_2 == 6) {
        F_00aa8240(param_1,0x102b9,1);
        return 0;
      }
      if (param_2 == 7) {
        F_00aa8240(param_1,0x10707,1);
        return 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_00a62350 */
unsigned int F_00a62350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa62350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_1 != (undefined *)0x0) {
    F_00aa2e00(param_1,param_2,param_3,0,1,0);
  }
  return 0;
}

/* ref: FUN_00a62370 */
uint F_00a62370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa62370u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint in_EAX = 0;
  
  if (param_1 != (undefined *)0x0) {
    in_EAX = F_00aa3ff0(param_1,0,param_2);
  }
  return in_EAX;
}

/* ref: FUN_00a62390 */
uint F_00a62390(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0xa62390u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = F_00a9faf0(param_1);
  uVar3 = param_2;
  if ((-1 < (int)param_2) || ((int)param_2 < 3)) {
    if (((uVar1 & 0x7f) < 0x12) && (((uVar1 & 0x7f) != 0 && (*(char *)(param_1 + 0x2ea7) != '\0'))))
    {
      switch((unsigned int)(uintptr_t)(uVar1 & 0x7f)) {
      case 1: ;
        iVar2 = param_2 + 0x90;
        break;
      case 2: ;
        iVar2 = param_2 + 0x93;
        break;
      case 3: ;
        iVar2 = param_2 + 0x96;
        break;
      default: ;
        iVar2 = param_2 + 0x9c;
        break;
      case 0xb: ;
        iVar2 = param_2 + 0x9f;
        break;
      case 0xd: ;
        iVar2 = param_2 + 0x99;
      }
      uVar3 = F_00ab4730(iVar2,param_1,param_3,param_4,param_5,param_6,0);
    }
  }
  return uVar3;
}

/* ref: FUN_00a62460 */
uint F_00a62460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa62460u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  undefined4 * puVar2;
  undefined * this;
  float * pfVar3;
  float * pfVar4;
  uint uVar5;
  uint uVar6;
  int local_18;
  int local_14;
  
  local_14 = 0;
  if (((param_1 != (undefined *)0x0) && (param_2 != 0)) &&
     (uVar6 = (uint)*(byte *)(param_2 + 0x2de8), uVar6 != 0)) {
    if (REFG(undefined1, 0x1338ad4) == 0) {
      local_14 = *(byte *)((int)param_1 + 0x1689) + 10;
    }
    else {
      local_18 = 0;
      if (REFG(undefined1, 0x1338ad4) != 0) {
        do {
          puVar2 = (undefined4 *)F_00ae0850(&REFG(undefined, 0x1336e40),local_18);
          this = (undefined *)F_00a64450(&REFG(undefined, 0x14a9a18),*puVar2);
          if (this != (undefined *)0x0) {
            pfVar3 = (float *)F_00a5feb0(param_1);
            pfVar4 = (float *)F_00a5feb0(this);
            if (!(*(double *)&REFG(undefined, 0x1088118) <=
                 (double)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)(float)((float10)pfVar4[2] -
                                                                      (float10)pfVar3[2]) *
                                                      (float10)(float)((float10)pfVar4[2] -
                                                                      (float10)pfVar3[2]) +
                                                     ((float10)(float)((float10)*pfVar4 -
                                                                      (float10)*pfVar3) *
                                                      (float10)(float)((float10)*pfVar4 -
                                                                      (float10)*pfVar3) +
                                                     (float10)(float)((float10)pfVar4[1] -
                                                                     (float10)pfVar3[1]) *
                                                     (float10)(float)((float10)pfVar4[1] -
                                                                     (float10)pfVar3[1])))))))))) {
              bVar1 = F_0054c430(this);
              if (bVar1 == 0) {
                local_14 = local_14 + 10 + (uint)*(byte *)((int)this + 0x1689);
              }
              else {
                local_14 = local_14 + (*(byte *)((int)this + 0x1689) + 10) / 2;
              }
            }
          }
          local_18 = local_18 + 1;
        } while (local_18 < (int)(uint)REFG(undefined1, 0x1338ad4));
      }
    }
    uVar5 = local_14 / (int)(*(byte *)(param_2 + 0x1689) + 10) - 1;
    if ((int)uVar5 < 0) {
      uVar5 = 0;
    }
    if ((int)uVar6 < (int)uVar5) {
      uVar5 = uVar6;
    }
    if (6 < (int)uVar5) {
      uVar5 = 6;
    }
    return uVar5;
  }
  return 0;
}

/* ref: FUN_00a625d0 */
byte F_00a625d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa625d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(byte *)(param_1 + 0x2deb) >> 1 & 1;
}

/* ref: FUN_00a625f0 */
byte F_00a625f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa625f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 != 0) {
    uVar3 = F_00ab22f0(*(undefined4 *)(param_1 + 0x80));
    bVar1 = *(byte *)(uVar3 + 0x13);
    uVar3 = F_00ab22f0(*(undefined4 *)(param_2 + 0x80));
    bVar2 = *(byte *)(uVar3 + 0x13);
    uVar3 = F_00ab2900((uint)bVar1);
    if (uVar3 != 0) {
      return *(byte *)(uVar3 + bVar2);
    }
  }
  return 0;
}

/* ref: FUN_00a62650 */
uint F_00a62650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa62650u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * this;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  float fVar5;
  
  if (param_2 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
    if ((uVar2 == 2) &&
       ((*(uint *)(gen_frame + 0x10)) = (uint)*(byte *)((int)param_2 + 0x2dea), *(byte *)((int)param_2 + 0x2dea) != 0)) {
      (*(float *)(gen_frame + 0x14)) = gen_bits2f(param_2[0xb79]);
      (*(uint *)(gen_frame + 0x1c)) = 0;
      (*(uint *)(gen_frame + 0x18)) = 0;
      do {
        this = *(int * PTR32 *)((int)&REFG(undefined4, 0x14a9a1c) + (*(uint *)(gen_frame + 0x18)));
        if ((this != (int *)0x0) && (this != param_2)) {
          uVar2 = ((code *)*(gen_code32 *)(*this + 4))(this);
          if ((uVar2 == 2) &&
             (((char)this[0x62] != '\x02' && ((*(byte *)((int)this + 0x2dd2) & 2) == 0)))) {
            uVar2 = F_00a5feb0(this);
            uVar3 = F_00a5feb0(param_2);
            pvVar4 = (undefined *)F_0046f4a0(((undefined1 *)(gen_frame + 0x0)),uVar3,uVar2);
            fVar5 = F_004bd280(pvVar4);
            if (!((float10)(*(float *)(gen_frame + 0x14)) < (float10)fVar5)) {
              pvVar4 = (undefined *)F_006b8c00();
              bVar1 = F_006d7160(pvVar4);
              if ((((bVar1 != 0) || (param_2[0x39] == this[0x39])) &&
                  (*(byte *)((int)this + 0x2dea) == (*(uint *)(gen_frame + 0x10)))) &&
                 ((*(byte *)((int)this + 0x2deb) & 1) == (byte)param_3)) {
                *(int * PTR32 *)(param_1 + (*(uint *)(gen_frame + 0x1c)) * 4) = this;
                (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x1c)) + 1;
              }
            }
          }
        }
        uVar2 = (*(uint *)(gen_frame + 0x18)) + 4;
        (*(uint *)(gen_frame + 0x18)) = uVar2;
      } while (uVar2 < 400);
      return (*(uint *)(gen_frame + 0x1c));
    }
  }
  return 0;
}

/* ref: FUN_00a62780 */
unsigned int F_00a62780(unsigned int gen_a0)
{
  GEN_ENTER(0xa62780u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0xe0000000;
  in_ecx[1] = 0xe0000000;
  return 0;
}

/* ref: FUN_00a62930 */
unsigned int F_00a62930(void)
{
  GEN_ENTER(0xa62930u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00a62940 */
unsigned int F_00a62940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa62940u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x10e64e4);
  if ((char)param_2 != '\0') {
    *(undefined1 *)(in_ecx + 0x2c8) = 1;
    *(undefined4 *)(in_ecx + 0x2c4) = uVar1;
    return 0;
  }
  *(undefined1 *)(in_ecx + 0x2c8) = 0;
  return 0;
}

/* ref: FUN_00a62970 */
unsigned int F_00a62970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa62970u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x10928e4);
  if ((char)param_2 != '\0') {
    *(undefined1 *)(in_ecx + 0x2d0) = 1;
    *(undefined4 *)(in_ecx + 0x2cc) = uVar1;
    return 0;
  }
  *(undefined1 *)(in_ecx + 0x2d0) = 0;
  return 0;
}

/* ref: FUN_00a629a0 */
unsigned int F_00a629a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa629a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x10adb9c);
  if ((char)param_2 != '\0') {
    *(undefined1 *)(in_ecx + 0x2d8) = 1;
    *(undefined4 *)(in_ecx + 0x2d4) = uVar1;
    return 0;
  }
  *(undefined1 *)(in_ecx + 0x2d8) = 0;
  return 0;
}

/* ref: FUN_00a629e0 */
uint F_00a629e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa629e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)(byte)param_2 * 0x40 + in_ecx;
}

/* ref: FUN_00a629f0 */
byte F_00a629f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa629f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)((undefined1)param_1)) {
  case 1: ;
  case 0x13: ;
    return 0;
  case 2: ;
  case 0x14: ;
    return 1;
  case 3: ;
  case 0x15: ;
    return 2;
  case 4: ;
  case 0x16: ;
    return 3;
  case 5: ;
  case 0x17: ;
    return 4;
  case 6: ;
  case 0x18: ;
    return 5;
  case 7: ;
  case 0x19: ;
    return 6;
  default: ;
    return 0xff;
  case 0x1a: ;
  case 0x1b: ;
  case 0x1c: ;
    return 7;
  }
}

/* ref: FUN_00a62a70 */
byte F_00a62a70(unsigned int gen_a0)
{
  GEN_ENTER(0xa62a70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)((undefined1)param_1)) {
  case 0: ;
    return 1;
  case 1: ;
    return 2;
  case 2: ;
    return 3;
  case 3: ;
    return 4;
  case 4: ;
    return 5;
  case 5: ;
    return 6;
  case 6: ;
    return 7;
  case 7: ;
    return 0x1a;
  default: ;
    return 0xff;
  }
}

/* ref: FUN_00a62ad0 */
byte F_00a62ad0(unsigned int gen_a0)
{
  GEN_ENTER(0xa62ad0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if ((char)param_1 == '\b') {
    return 1;
  }
  if ((char)param_1 != '\t') {
    if ((char)param_1 != '\n') {
      return 0xff;
    }
    return 3;
  }
  return 2;
}

/* ref: FUN_00a62b00 */
byte F_00a62b00(unsigned int gen_a0)
{
  GEN_ENTER(0xa62b00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if ((char)param_1 == '\x01') {
    return 8;
  }
  if ((char)param_1 != '\x02') {
    if ((char)param_1 != '\x03') {
      return 0xff;
    }
    return 10;
  }
  return 9;
}

/* ref: FUN_00a62b20 */
byte F_00a62b20(unsigned int gen_a0)
{
  GEN_ENTER(0xa62b20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if ((7 < (byte)param_1) && ((byte)param_1 < 0xb)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a62b40 */
byte F_00a62b40(unsigned int gen_a0)
{
  GEN_ENTER(0xa62b40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if ((7 < (byte)param_1) && ((byte)param_1 < 0xb)) {
    return 3;
  }
  return -((byte)param_1 < 0xb) & 5;
}

