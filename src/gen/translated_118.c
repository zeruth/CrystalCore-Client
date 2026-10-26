#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00ab0d10 */
uint F_00ab0d10(void)
{
  GEN_ENTER(0xab0d10u, 0u, 0u, 0u, 0u);
  int * piVar1;
  uint uVar2;
  
  piVar1 = REFG(undefined4, 0x14bcc6c);
  uVar2 = 0;
  if (REFG(undefined4, 0x14bcc6c) != (int *)0x0) {
    if (*REFG(int * PTR32, 0x14bcc6c) != 0) {
      F_00406b30(*REFG(int * PTR32, 0x14bcc6c));
      *piVar1 = 0;
    }
    piVar1 = REFG(undefined4, 0x14bcc6c) + 2;
    if (REFG(int * PTR32, 0x14bcc6c)[2] != 0) {
      F_00406b30(REFG(int * PTR32, 0x14bcc6c)[2]);
      *piVar1 = 0;
    }
    uVar2 = 0;
    if (REFG(undefined4, 0x14bcc6c) != (int *)0x0) {
      uVar2 = F_00406ad0(REFG(undefined4, 0x14bcc6c));
      REFG(undefined4, 0x14bcc6c) = (int *)0x0;
    }
  }
  return uVar2;
}

/* ref: FUN_00ab0d70 */
uint F_00ab0d70(unsigned int gen_a0)
{
  GEN_ENTER(0xab0d70u, gen_a0, 0u, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte * pbVar1;
  byte bVar2;
  int iVar3;
  byte * pbVar4;
  byte * pbVar5;
  int iVar6;
  int * piVar7;
  bool bVar8;
  
  pbVar1 = param_1;
  piVar7 = REFG(undefined4, 0x14bcc6c);
  iVar6 = 0;
  if ((param_1 != (byte *)0x0) && (REFG(int * PTR32, 0x14bcc6c)[1] != 0)) {
    bVar2 = *param_1;
    (*(int *)(gen_frame + 0x4)) = 0;
    (*(int *)(gen_frame + 0x8)) = 0;
    if (bVar2 != 0) {
      pbVar5 = param_1;
      do {
        iVar3 = (int)(char)bVar2;
        pbVar4 = pbVar5 + (1 - (int)param_1);
        bVar2 = pbVar5[1];
        pbVar5 = pbVar5 + 1;
        iVar6 = iVar6 + (int)((int)(uintptr_t)pbVar4) * iVar3;
      } while (bVar2 != 0);
    }
    bVar2 = F_00aba2a0(REFG(undefined4, 0x14bcc6c),iVar6,&(*(int *)(gen_frame + 0x4)),&(*(int *)(gen_frame + 0x8)));
    if (bVar2 == 1) {
      if ((*(int *)(gen_frame + 0x4)) == (*(int *)(gen_frame + 0x8))) {
        return *(int *)(*piVar7 + 4 + (*(int *)(gen_frame + 0x4)) * 8) + 4;
      }
      param_1 = (byte *)(*(int *)(gen_frame + 0x4));
      if ((*(int *)(gen_frame + 0x4)) <= (*(int *)(gen_frame + 0x8))) {
        iVar6 = *piVar7;
        piVar7 = (int *)(iVar6 + 4 + (*(int *)(gen_frame + 0x4)) * 8);
        do {
          pbVar4 = ((byte *)GEN_TOP(((*(uint *)*piVar7 & 0xffffff) + *piVar7)));
          pbVar5 = pbVar1;
          do {
            bVar2 = *pbVar4;
            bVar8 = bVar2 < *pbVar5;
            if (bVar2 != *pbVar5) {
LAB_00ab0e30: ;
              iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
              goto LAB_00ab0e35;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar4[1];
            bVar8 = bVar2 < pbVar5[1];
            if (bVar2 != pbVar5[1]) goto LAB_00ab0e30;
            pbVar4 = pbVar4 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar2 != 0);
          iVar3 = 0;
LAB_00ab0e35: ;
          if (iVar3 == 0) {
            return *(int *)(iVar6 + 4 + (int)((int)(uintptr_t)param_1) * 8) + 4;
          }
          param_1 = (byte *)((int)param_1 + 1);
          piVar7 = piVar7 + 2;
        } while ((int)param_1 <= (*(int *)(gen_frame + 0x8)));
      }
    }
  }
  return 0;
}

/* ref: FUN_00ab0e70 */
uint F_00ab0e70(unsigned int gen_a0)
{
  GEN_ENTER(0xab0e70u, gen_a0, 0u, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  byte * pbVar2;
  byte bVar3;
  int iVar4;
  byte * pbVar5;
  byte * pbVar6;
  int iVar7;
  int * piVar8;
  bool bVar9;
  
  pbVar2 = param_1;
  iVar1 = REFG(int, 0x14bcc6c);
  iVar7 = 0;
  if ((param_1 != (byte *)0x0) && (*(int *)(REFG(int, 0x14bcc6c) + 0xc) != 0)) {
    bVar3 = *param_1;
    (*(int *)(gen_frame + 0x4)) = 0;
    (*(int *)(gen_frame + 0x8)) = 0;
    if (bVar3 != 0) {
      pbVar6 = param_1;
      do {
        iVar4 = (int)(char)bVar3;
        pbVar5 = pbVar6 + (1 - (int)param_1);
        bVar3 = pbVar6[1];
        pbVar6 = pbVar6 + 1;
        iVar7 = iVar7 + (int)((int)(uintptr_t)pbVar5) * iVar4;
      } while (bVar3 != 0);
    }
    bVar3 = F_00aba360((undefined *)(REFG(int, 0x14bcc6c) + 8),iVar7,&(*(int *)(gen_frame + 0x4)),&(*(int *)(gen_frame + 0x8)));
    if (bVar3 == 1) {
      if ((*(int *)(gen_frame + 0x4)) == (*(int *)(gen_frame + 0x8))) {
        return *((uint *)GEN_TOP((*(int *)(iVar1 + 8) + 4 + (*(int *)(gen_frame + 0x4)) * 8)));
      }
      param_1 = (byte *)(*(int *)(gen_frame + 0x4));
      if ((*(int *)(gen_frame + 0x4)) <= (*(int *)(gen_frame + 0x8))) {
        iVar1 = *(int *)(iVar1 + 8);
        piVar8 = (int *)(iVar1 + 4 + (*(int *)(gen_frame + 0x4)) * 8);
        do {
          pbVar5 = ((byte *)GEN_TOP(((*(uint *)*piVar8 & 0xffffff) + *piVar8)));
          pbVar6 = pbVar2;
          do {
            bVar3 = *pbVar5;
            bVar9 = bVar3 < *pbVar6;
            if (bVar3 != *pbVar6) {
LAB_00ab0f30: ;
              iVar7 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
              goto LAB_00ab0f35;
            }
            if (bVar3 == 0) break;
            bVar3 = pbVar5[1];
            bVar9 = bVar3 < pbVar6[1];
            if (bVar3 != pbVar6[1]) goto LAB_00ab0f30;
            pbVar5 = pbVar5 + 2;
            pbVar6 = pbVar6 + 2;
          } while (bVar3 != 0);
          iVar7 = 0;
LAB_00ab0f35: ;
          if (iVar7 == 0) {
            return *(uint *)(iVar1 + 4 + (int)((int)(uintptr_t)param_1) * 8);
          }
          param_1 = (byte *)((int)param_1 + 1);
          piVar8 = piVar8 + 2;
        } while ((int)param_1 <= (*(int *)(gen_frame + 0x8)));
      }
    }
  }
  return 0;
}

/* ref: FUN_00ab0f60 */
unsigned int F_00ab0f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab0f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    uVar1 = 0;
    bVar2 = 1;
    do {
      *(bool *)((int)this + uVar1) = (*((byte *)GEN_TOP(((uVar1 >> 3) + uVar3 + param_1))) & bVar2) != 0;
      uVar1 = uVar1 + 1;
      bVar2 = bVar2 << 1 | (char)bVar2 < '\0';
    } while (uVar1 < 0x10);
    uVar3 = uVar3 + 2;
    this = (undefined *)((int)this + 0x10);
  } while (uVar3 < 0x140);
  return 0;
}

/* ref: FUN_00ab0fb0 */
unsigned int F_00ab0fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab0fb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  iVar4 = (int)this + 0xa00;
  do {
    uVar1 = 0;
    bVar2 = 1;
    do {
      *(bool *)(iVar4 + uVar1) = (*((byte *)GEN_TOP(((uVar1 >> 3) + uVar3 + param_1))) & bVar2) != 0;
      uVar1 = uVar1 + 1;
      bVar2 = bVar2 << 1 | (char)bVar2 < '\0';
    } while (uVar1 < 0x20);
    uVar3 = uVar3 + 4;
    iVar4 = iVar4 + 0x20;
  } while (uVar3 < 0x50);
  return 0;
}

/* ref: FUN_00ab0ff0 */
uint F_00ab0ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab0ff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this_00;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (this_00 != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x24)) = *param_2;
    (*(undefined4 *)(gen_frame + 0x28)) = param_2[1];
    (*(undefined4 *)(gen_frame + 0x20)) = param_1;
    (*(undefined4 *)(gen_frame + 0x8)) = 0x194;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x20;
    (*(undefined4 *)(gen_frame + 0x2c)) = param_2[2];
    bVar1 = F_00974e00(this_00,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    uVar2 = CONCAT31(extraout_var,bVar1);
    *(undefined1 *)((int)this + 0xc80) = 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return uVar2;
}

/* ref: FUN_00ab10a0 */
byte F_00ab10a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xab10a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if ((char)param_3 == '\0') {
    if ((-1 < (short)(ushort)param_1) && ((ushort)param_1 < 0x14)) {
      return *((byte *)GEN_TOP(((int)this + (uint)(byte)param_2 + ((short)(ushort)param_1 + 0x50) * 0x20)));
    }
  }
  else if ((-1 < (short)(ushort)param_1) && ((ushort)param_1 < 0xa0)) {
    return *(byte *)((int)this + (uint)(byte)param_2 + (short)(ushort)param_1 * 0x10);
  }
  return 1;
}

/* ref: Client::Game::ConfigFloat::vf1 */
uint F_00ab1100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab1100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  float fVar3;
  
  if (*(float * PTR32 *)(this + 4) != (float *)0x0) {
    fVar3 = **(float * PTR32 *)(this + 4);
    uVar2 = F_00414500(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(this + 8));
    bVar1 = F_00414ad0(uVar2,fVar3);
    this = ((undefined *)GEN_TOP(CONCAT31(extraout_var,bVar1)));
  }
  return (uint)this;
}

/* ref: Client::Game::ConfigFloat::vf2 */
unsigned int F_00ab1130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab1130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (*(int *)(this + 4) != 0) {
    uVar1 = F_00414500(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(this + 8));
    **(undefined4 * PTR32 *)(this + 4) = *(undefined4 *)(uVar1 + 0x14);
  }
  return 0;
}

/* ref: FUN_00ab1160 */
uint F_00ab1160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab1160u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  float fVar1;
  float * pfVar2;
  
  if ((char)(*(uint *)&gen_args[1]) != '\0') {
    fVar1 = ((float)GEN_TOF((((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[0]))) - (float10)*(float *)(REFG(int, 0x137104c) + 0x1198))));
    (*(uint *)&gen_args[1]) = 0;
    *(*(float * PTR32 *)&gen_args[0]) = fVar1;
    pfVar2 = (*(float * PTR32 *)&gen_args[0]);
    if (!((float10)0 < (float10)fVar1)) {
      pfVar2 = (float *)&(*(uint *)&gen_args[1]);
    }
    *(*(float * PTR32 *)&gen_args[0]) = *pfVar2;
    return (uint)pfVar2;
  }
  *(*(float * PTR32 *)&gen_args[0]) = ((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) + ((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[0]))))));
  return (uint)(*(float * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00ab11c0 */
uint F_00ab11c0(void)
{
  GEN_ENTER(0xab11c0u, 0u, 0u, 0u, 0u);
  uint in_EAX = 0;
  int * piVar1;
  uint uVar2;
  
  if (REFG(char, 0x1379c96) == '\0') {
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    in_EAX = 0;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xa0))(piVar1);
      if ((uVar2 & 2) == 0) {
        uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xbc))(piVar1);
        if ((char)uVar2 == '\0') {
          return 1;
        }
      }
      return 0;
    }
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00ab1210 */
uint F_00ab1210(unsigned int gen_a0)
{
  GEN_ENTER(0xab1210u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  uint uVar2;
  
  if (param_1 == -0x20000000) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00a35490(&REFG(undefined4, 0x14a31f0),param_1);
  }
  uVar1 = F_00a5f2b0(uVar2);
  if ((uVar1 != 0) && ((*(byte *)(uVar1 + 0x2dd4) & 4) != 0)) {
    return 0;
  }
  return uVar2;
}

/* ref: FUN_00ab1250 */
uint F_00ab1250(unsigned int gen_a0)
{
  GEN_ENTER(0xab1250u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  uint uVar2;
  
  if (param_1 < 0x158) {
    uVar2 = (&REFG(undefined4, 0x14a31f0))[param_1];
  }
  else {
    uVar2 = 0;
  }
  uVar1 = F_00a5f2b0(uVar2);
  if ((uVar1 != 0) && ((*(byte *)(uVar1 + 0x2dd4) & 4) != 0)) {
    return 0;
  }
  return uVar2;
}

/* ref: FUN_00ab1290 */
uint F_00ab1290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab1290u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (param_1 == -0x20000000) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00a354d0(&REFG(undefined4, 0x14a31f0),param_1,param_2);
  }
  uVar1 = F_00a5f2b0(uVar2);
  if ((uVar1 != 0) && ((*(byte *)(uVar1 + 0x2dd4) & 4) != 0)) {
    return 0;
  }
  return uVar2;
}

/* ref: FUN_00ab1340 */
uint F_00ab1340(void)
{
  GEN_ENTER(0xab1340u, 0u, 0u, 0u, 0u);
  uint uVar1;
  uint uVar2;
  
  if (REFG(int, 0x1379694) == 0) {
    return 0;
  }
  if ((REFG(char, 0x14b5220) == '\x01') && (uVar2 = 0, REFG(undefined4, 0x14b5264) != 0)) {
    do {
      if (((*((byte *)GEN_TOP(((&REFG(undefined4, 0x14b5224))[uVar2] + 0x44))) & 4) != 0) &&
         (uVar1 = F_005f32a0(0x29,(&REFG(undefined4, 0x14b5224))[uVar2]), uVar1 != 0)) {
        return uVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < REFG(undefined4, 0x14b5264));
  }
  return 0;
}

/* ref: FUN_00ab1390 */
uint F_00ab1390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab1390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * this_00;
  uint uVar1;
  
  uVar1 = F_00424750(REFG(undefined4, 0x137104c));
  this_00 = REFG(undefined4, 0x1379694);
  if ((*(int *)this != 1) || (param_1 == 3)) {
    F_005f3240();
    *(undefined4 *)((int)this + 0x68) = 0;
    *(undefined4 *)((int)this + 0x6c) = 0;
    *(undefined1 *)((int)this + 0x70) = 0;
    *(undefined4 *)((int)this + 0x74) = 0;
    *(undefined4 *)((int)this + 0x78) = 0;
    if (this_00 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*this_00 + 0x54))(this_00,0);
      F_00a9fa00(this_00);
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[1])REFP(0x109c974));
      (*(undefined2 *)(gen_frame + 0x4)) = 1;
      (*(undefined2 *)(gen_frame + 0x7)) = 0;
      (*(undefined1 *)(gen_frame + 0x6)) = 1;
      F_00a9f980(this_00,*(float *)((int)this + 0x10),*(float *)((int)this + 0x14),
                   *(float *)((int)this + 0x18),GEN_TOF(gen_bits2f(this_00[0x2c])),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
    }
    *(undefined4 *)this = 6;
    F_00a4a760(&REFG(undefined, 0x14a7360),0x1d,1);
    *(undefined4 *)((int)this + 4) = 0;
    F_0053c160(&REFG(undefined, 0x1305d00));
    uVar1 = param_1;
    if ((param_1 == 5) || (param_1 == 8)) {
      F_00a696e0(&REFG(undefined, 0x14ab380));
    }
  }
  return uVar1;
}

/* ref: FUN_00ab1470 */
uint F_00ab1470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab1470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  int * piVar2;
  undefined3 extraout_var = 0;
  undefined4 * puVar3;
  uint uVar4;
  
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  bVar1 = F_00a9f620(param_1);
  uVar4 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    F_00a4a760(&REFG(undefined, 0x14a7360),0x1d,1);
    puVar3 = (undefined4 *)F_00a5feb0(param_1);
    *(undefined4 *)((int)this + 0x10) = *puVar3;
    *(undefined4 *)((int)this + 0x14) = puVar3[1];
    *(undefined4 *)((int)this + 0x18) = puVar3[2];
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined1 *)((int)this + 0x20) = 0;
    ((code *)*(gen_code32 *)(*piVar2 + 0xb4))(piVar2);
    *(undefined4 *)this = 4;
    uVar4 = F_00a4a760(&REFG(undefined, 0x14a7360),0x1d,0);
  }
  return uVar4;
}

/* ref: FUN_00ab14f0 */
uint F_00ab14f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab14f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00ab1470(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ab1500 */
uint F_00ab1500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab1500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00ab1470(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ab18e0 */
unsigned int F_00ab18e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab18e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((*(int *)((int)this + 0x68) <= param_1) && (*(int *)((int)this + 0x68) != 0)) {
    F_005f3240();
    *(undefined4 *)((int)this + 0x68) = 0;
    *(undefined4 *)((int)this + 0x6c) = 0;
    *(undefined1 *)((int)this + 0x70) = 0;
    *(undefined4 *)((int)this + 0x74) = 0;
    *(undefined4 *)((int)this + 0x78) = 0;
  }
  return 0;
}

/* ref: FUN_00ab1910 */
uint F_00ab1910(unsigned int gen_a0)
{
  GEN_ENTER(0xab1910u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  float fVar3;
  
  fVar3 = REFG(float, 0x1087f04);
  if ((char)param_1 != '\0') {
    fVar3 = 0.0;
  }
  uVar1 = *(undefined4 *)(REFG(int, 0x137104c) + 0x25f8);
  F_004e7f70(uVar1,fVar3);
  uVar2 = F_004e7cc0(uVar1,fVar3);
  return uVar2;
}

/* ref: FUN_00ab1960 */
unsigned int F_00ab1960(void)
{
  GEN_ENTER(0xab1960u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined * this;
  int * piVar8;
  float * pfVar9;
  uint uVar10;
  bool bVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float in_XMM1_Da = 0;
  float in_XMM2_Da = 0;
  float in_XMM3_Da = 0;
  float in_XMM7_Da = 0;
  ulonglong uVar15;
  ulonglong uVar16;
  
  this = REFG(undefined4, 0x1379694);
  if (((REFG(undefined4, 0x1379694) != (undefined *)0x0) && (REFG(char, 0x14b5220) == '\x01')) &&
     ((*(uint *)(gen_frame + 0x4)) = 0, REFG(undefined4, 0x14b5264) != 0)) {
    do {
      if ((((*((byte *)GEN_TOP(((&REFG(undefined4, 0x14b5224))[(*(uint *)(gen_frame + 0x4))] + 0x44))) & 0x40) != 0) &&
          (piVar8 = (int *)F_005f32a0(0x39,(&REFG(undefined4, 0x14b5224))[(*(uint *)(gen_frame + 0x4))]), piVar8 != (int *)0x0)) &&
         ((char)piVar8[0x23] != '\0')) {
        pfVar9 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0xe4))(piVar8)));
        fVar1 = *pfVar9;
        fVar2 = pfVar9[1];
        fVar3 = pfVar9[2];
        uVar10 = ((code *)*(gen_code32 *)(*piVar8 + 0xfc))(piVar8);
        F_00a1e160(&(*(float *)(gen_frame + 0x8)),uVar10 + 0x10);
        pfVar9 = (float *)F_00a5feb0(this);
        fVar4 = (float)((float10)*pfVar9 - (float10)fVar1);
        fVar5 = pfVar9[1];
        fVar6 = (float)((float10)pfVar9[2] - (float10)fVar3);
        fVar12 = (float10)fVar6;
        fVar13 = (float10)fVar4;
        fVar7 = (float)(fVar13 * fVar13 + fVar12 * fVar12);
        (*(float *)(gen_frame + 0xc)) = fVar7;
        fVar7 = ((float)GEN_TOF(SQRT((float10)fVar7)));
        (*(float *)(gen_frame + 0xc)) = fVar7;
        fVar12 = (float10)fVar7;
        bVar11 = GEN_ISNAN(fVar12) || GEN_ISNAN((float10)0);
        if (bVar11 == (bVar11 || fVar12 == (float10)0)) {
          fVar12 = F_00c4cde0(in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,(float10)(*(float *)(gen_frame + 0x8)));
          (*(float *)(gen_frame + 0xc)) = (float)fVar12;
          fVar13 = F_00c4ca20(in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,(float10)(*(float *)(gen_frame + 0x8)));
          (*(float *)(gen_frame + 0xc)) = (float)fVar13;
          fVar2 = ((float)GEN_TOF(((float10)(float)fVar13 * (float10)fVar6 +
                         ((float10)(float)((float10)fVar5 - (float10)fVar2) *
                          (float10)*(double *)&REFG(undefined, 0x108bec8) +
                         (float10)(float)fVar12 * (float10)fVar4))));
          (*(float *)(gen_frame + 0xc)) = fVar2;
          if ((float10)fVar2 < (float10)0) {
            (*(float *)(gen_frame + 0xc)) = (float)((float10)(*(float *)(gen_frame + 0x8)) + (float10)*(double *)&REFG(undefined, 0x1080228));
            fVar12 = F_00aed220((float)((float10)(*(float *)(gen_frame + 0x8)) + (float10)*(double *)&REFG(undefined, 0x1080228)));
            (*(float *)(gen_frame + 0x8)) = (float)fVar12;
          }
        }
        fVar12 = F_00c4cde0(in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,(float10)(*(float *)(gen_frame + 0x8)));
        (*(float *)(gen_frame + 0xc)) = (float)fVar12;
        fVar13 = F_00c4ca20(in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,(float10)(*(float *)(gen_frame + 0x8)));
        (*(float *)(gen_frame + 0xc)) = (float)fVar13;
        fVar14 = (float10)*(double *)&REFG(undefined, 0x10944e0);
        pfVar9 = (float *)F_00a5feb0(this);
        fVar2 = *pfVar9;
        fVar3 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)(fVar14 * (float10)(float)fVar13) +
                                        (float10)fVar3))) - (float10)pfVar9[2])));
        fVar13 = F_00c4d1fa((float10)fVar3);
        (*(float *)(gen_frame + 0xc)) = (float)fVar13;
        (*(float *)(gen_frame + 0x8)) = (float)fVar13;
        uVar10 = F_00a9fc60(this);
        if (((char)uVar10 == '\0') &&
           (uVar16 = *(ulonglong *)((int)this + 0x2f08), uVar15 = F_00427d90(),
           uVar16 < uVar15 - 1000)) {
          fVar12 = (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)((float10)(float)fVar12 *
                                                                     fVar14) + (float10)fVar1))) -
                                   (float10)fVar2)));
          fVar13 = (float10)fVar3;
          fVar1 = (float)(fVar13 * fVar13 + fVar12 * fVar12);
          (*(float *)(gen_frame + 0xc)) = fVar1;
          fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
          (*(float *)(gen_frame + 0xc)) = fVar1;
          F_00aa2400(this,in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,(*(float *)(gen_frame + 0x8)),fVar1,REFG(float, 0x1088068),
                       0,1);
          uVar16 = F_00427d90();
          *(ulonglong *)((int)this + 0x2f08) = uVar16;
        }
      }
      (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
    } while ((*(uint *)(gen_frame + 0x4)) < REFG(undefined4, 0x14b5264));
  }
  return 0;
}

/* ref: FUN_00ab1c10 */
byte F_00ab1c10(unsigned int gen_a0)
{
  GEN_ENTER(0xab1c10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int iVar2;
  int * piVar3;
  
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x20)) {
    piVar3 = (int *)((int)this + 0xc);
    do {
      if ((*piVar3 != 0) && (*(char *)(*piVar3 + 0x65) != '\x03')) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)((int)this + 0x20));
  }
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x4c)) {
    piVar3 = (int *)((int)this + 0x24);
    do {
      if (*piVar3 != 0) {
        bVar1 = F_00982b50(*piVar3);
        if (bVar1 == 0) {
          return 0;
        }
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)((int)this + 0x4c));
  }
  return 1;
}

/* ref: FUN_00ab1c70 */
uint F_00ab1c70(unsigned int gen_a0)
{
  GEN_ENTER(0xab1c70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00aaf890(this);
  uVar1 = F_00aaf890((undefined *)((int)this + 0x50));
  return uVar1;
}

/* ref: FUN_00ab1c90 */
uint F_00ab1c90(unsigned int gen_a0)
{
  GEN_ENTER(0xab1c90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x41,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab1cc0 */
uint F_00ab1cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xab1cc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xa4,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab1cf0 */
byte F_00ab1cf0(unsigned int gen_a0)
{
  GEN_ENTER(0xab1cf0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x41,param_1);
  if ((uVar1 != 0) && (*(int *)(uVar1 + 4) != 0)) {
    uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xa4,
                         (uint)*((byte *)GEN_TOP((*(int *)(uVar1 + 4) + 0x2a))));
    if ((uVar1 != 0) && (*(byte * PTR32 *)(uVar1 + 4) != (byte *)0x0)) {
      return **(byte * PTR32 *)(uVar1 + 4);
    }
  }
  return 0;
}

/* ref: FUN_00ab1d50 */
byte F_00ab1d50(unsigned int gen_a0)
{
  GEN_ENTER(0xab1d50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x41,param_1);
  if ((uVar1 != 0) && (*(int *)(uVar1 + 4) != 0)) {
    uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xa4,
                         (uint)*((byte *)GEN_TOP((*(int *)(uVar1 + 4) + 0x2a))));
    if ((uVar1 != 0) && (*(int *)(uVar1 + 4) != 0)) {
      return *((byte *)GEN_TOP((*(int *)(uVar1 + 4) + 1)));
    }
  }
  return 0;
}

/* ref: FUN_00ab1db0 */
byte F_00ab1db0(unsigned int gen_a0)
{
  GEN_ENTER(0xab1db0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x41,param_1);
  if ((uVar1 != 0) && (*(int *)(uVar1 + 4) != 0)) {
    uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xa4,
                         (uint)*((byte *)GEN_TOP((*(int *)(uVar1 + 4) + 0x2a))));
    if ((uVar1 != 0) && (*(int *)(uVar1 + 4) != 0)) {
      return *((byte *)GEN_TOP((*(int *)(uVar1 + 4) + 6)));
    }
  }
  return 0;
}

/* ref: FUN_00ab1e10 */
byte F_00ab1e10(unsigned int gen_a0)
{
  GEN_ENTER(0xab1e10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x41,param_1);
  if ((uVar1 != 0) && (*(int *)(uVar1 + 4) != 0)) {
    uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xa4,
                         (uint)*((byte *)GEN_TOP((*(int *)(uVar1 + 4) + 0x2a))));
    if ((uVar1 != 0) && (*(int *)(uVar1 + 4) != 0)) {
      return *((byte *)GEN_TOP((*(int *)(uVar1 + 4) + 7)));
    }
  }
  return 0;
}

/* ref: FUN_00ab1e70 */
uint F_00ab1e70(unsigned int gen_a0)
{
  GEN_ENTER(0xab1e70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x58,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab1ea0 */
uint F_00ab1ea0(unsigned int gen_a0)
{
  GEN_ENTER(0xab1ea0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x59,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab1ed0 */
uint F_00ab1ed0(unsigned int gen_a0)
{
  GEN_ENTER(0xab1ed0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),3,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab1f00 */
uint F_00ab1f00(unsigned int gen_a0)
{
  GEN_ENTER(0xab1f00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x24,param_1 + -100000);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab1f30 */
uint F_00ab1f30(unsigned int gen_a0)
{
  GEN_ENTER(0xab1f30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x50,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab1f60 */
uint F_00ab1f60(unsigned int gen_a0)
{
  GEN_ENTER(0xab1f60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x73,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab1f90 */
uint F_00ab1f90(unsigned int gen_a0)
{
  GEN_ENTER(0xab1f90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x45,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab1fc0 */
uint F_00ab1fc0(unsigned int gen_a0)
{
  GEN_ENTER(0xab1fc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x25,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab1ff0 */
uint F_00ab1ff0(unsigned int gen_a0)
{
  GEN_ENTER(0xab1ff0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x39,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2020 */
uint F_00ab2020(unsigned int gen_a0)
{
  GEN_ENTER(0xab2020u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x62,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2050 */
uint F_00ab2050(unsigned int gen_a0)
{
  GEN_ENTER(0xab2050u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x65,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2080 */
uint F_00ab2080(unsigned int gen_a0)
{
  GEN_ENTER(0xab2080u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xf2,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab20b0 */
uint F_00ab20b0(unsigned int gen_a0)
{
  GEN_ENTER(0xab20b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xf1,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab20e0 */
uint F_00ab20e0(unsigned int gen_a0)
{
  GEN_ENTER(0xab20e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),10,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2110 */
uint F_00ab2110(unsigned int gen_a0)
{
  GEN_ENTER(0xab2110u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x11c,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2140 */
uint F_00ab2140(unsigned int gen_a0)
{
  GEN_ENTER(0xab2140u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x146,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2170 */
uint F_00ab2170(unsigned int gen_a0)
{
  GEN_ENTER(0xab2170u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x57,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab21a0 */
uint F_00ab21a0(unsigned int gen_a0)
{
  GEN_ENTER(0xab21a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x27,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab21d0 */
uint F_00ab21d0(unsigned int gen_a0)
{
  GEN_ENTER(0xab21d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x6c,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2200 */
uint F_00ab2200(unsigned int gen_a0)
{
  GEN_ENTER(0xab2200u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x55,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2230 */
uint F_00ab2230(unsigned int gen_a0)
{
  GEN_ENTER(0xab2230u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x26,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2260 */
uint F_00ab2260(unsigned int gen_a0)
{
  GEN_ENTER(0xab2260u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x36,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2290 */
uint F_00ab2290(unsigned int gen_a0)
{
  GEN_ENTER(0xab2290u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x10e,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab22c0 */
uint F_00ab22c0(unsigned int gen_a0)
{
  GEN_ENTER(0xab22c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x2c,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab22f0 */
uint F_00ab22f0(unsigned int gen_a0)
{
  GEN_ENTER(0xab22f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x1f,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2320 */
uint F_00ab2320(unsigned int gen_a0)
{
  GEN_ENTER(0xab2320u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xd0,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2350 */
uint F_00ab2350(unsigned int gen_a0)
{
  GEN_ENTER(0xab2350u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x1e,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2380 */
uint F_00ab2380(unsigned int gen_a0)
{
  GEN_ENTER(0xab2380u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xe7,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab23b0 */
uint F_00ab23b0(unsigned int gen_a0)
{
  GEN_ENTER(0xab23b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xbc,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab23e0 */
uint F_00ab23e0(unsigned int gen_a0)
{
  GEN_ENTER(0xab23e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xdf,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2410 */
uint F_00ab2410(unsigned int gen_a0)
{
  GEN_ENTER(0xab2410u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x44,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2440 */
uint F_00ab2440(unsigned int gen_a0)
{
  GEN_ENTER(0xab2440u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xea,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2470 */
uint F_00ab2470(unsigned int gen_a0)
{
  GEN_ENTER(0xab2470u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x56,param_1 + -2000000);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab24a0 */
uint F_00ab24a0(unsigned int gen_a0)
{
  GEN_ENTER(0xab24a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = param_1;
  if (999999 < param_1) {
    uVar1 = param_1 - 1000000;
  }
  if (uVar1 < 0x18cf) {
    uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),9,uVar1);
    if (uVar1 != 0) {
      return *(uint *)(uVar1 + 4);
    }
  }
  return 0;
}

/* ref: FUN_00ab24e0 */
uint F_00ab24e0(unsigned int gen_a0)
{
  GEN_ENTER(0xab24e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xd8,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2510 */
uint F_00ab2510(unsigned int gen_a0)
{
  GEN_ENTER(0xab2510u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x52,param_1 + -2000000);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2540 */
uint F_00ab2540(unsigned int gen_a0)
{
  GEN_ENTER(0xab2540u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),5,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2570 */
uint F_00ab2570(unsigned int gen_a0)
{
  GEN_ENTER(0xab2570u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x4b,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab25a0 */
uint F_00ab25a0(unsigned int gen_a0)
{
  GEN_ENTER(0xab25a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),8,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab25d0 */
uint F_00ab25d0(unsigned int gen_a0)
{
  GEN_ENTER(0xab25d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xd3,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2600 */
uint F_00ab2600(unsigned int gen_a0)
{
  GEN_ENTER(0xab2600u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),6,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2630 */
uint F_00ab2630(unsigned int gen_a0)
{
  GEN_ENTER(0xab2630u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xcd,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2660 */
uint F_00ab2660(unsigned int gen_a0)
{
  GEN_ENTER(0xab2660u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x77,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2690 */
uint F_00ab2690(unsigned int gen_a0)
{
  GEN_ENTER(0xab2690u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x28,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab26c0 */
uint F_00ab26c0(unsigned int gen_a0)
{
  GEN_ENTER(0xab26c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x114,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab26f0 */
uint F_00ab26f0(unsigned int gen_a0)
{
  GEN_ENTER(0xab26f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x12,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2720 */
uint F_00ab2720(unsigned int gen_a0)
{
  GEN_ENTER(0xab2720u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x13,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2750 */
uint F_00ab2750(unsigned int gen_a0)
{
  GEN_ENTER(0xab2750u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x47,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2780 */
uint F_00ab2780(unsigned int gen_a0)
{
  GEN_ENTER(0xab2780u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x6f,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab27b0 */
uint F_00ab27b0(unsigned int gen_a0)
{
  GEN_ENTER(0xab27b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x112,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab27e0 */
uint F_00ab27e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab27e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fce0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x140,param_1,param_2,0,0);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2810 */
uint F_00ab2810(unsigned int gen_a0)
{
  GEN_ENTER(0xab2810u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x142,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2840 */
uint F_00ab2840(unsigned int gen_a0)
{
  GEN_ENTER(0xab2840u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2870 */
uint F_00ab2870(unsigned int gen_a0)
{
  GEN_ENTER(0xab2870u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xae,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab28a0 */
uint F_00ab28a0(unsigned int gen_a0)
{
  GEN_ENTER(0xab28a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x46,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab28d0 */
uint F_00ab28d0(unsigned int gen_a0)
{
  GEN_ENTER(0xab28d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x43,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2900 */
uint F_00ab2900(unsigned int gen_a0)
{
  GEN_ENTER(0xab2900u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),1,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2930 */
uint F_00ab2930(unsigned int gen_a0)
{
  GEN_ENTER(0xab2930u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x7e,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2960 */
uint F_00ab2960(unsigned int gen_a0)
{
  GEN_ENTER(0xab2960u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x15,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2990 */
uint F_00ab2990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab2990u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fce0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),4,param_1,param_2,0,0);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab29c0 */
uint F_00ab29c0(unsigned int gen_a0)
{
  GEN_ENTER(0xab29c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x86,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab29f0 */
uint F_00ab29f0(unsigned int gen_a0)
{
  GEN_ENTER(0xab29f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x135,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2a20 */
uint F_00ab2a20(unsigned int gen_a0)
{
  GEN_ENTER(0xab2a20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x48,param_1);
    if (uVar1 != 0) {
      return *(uint *)(uVar1 + 4);
    }
  }
  return 0;
}

/* ref: FUN_00ab2a50 */
uint F_00ab2a50(unsigned int gen_a0)
{
  GEN_ENTER(0xab2a50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x60,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2a80 */
uint F_00ab2a80(unsigned int gen_a0)
{
  GEN_ENTER(0xab2a80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x61,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2ab0 */
uint F_00ab2ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xab2ab0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x75,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2ae0 */
uint F_00ab2ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xab2ae0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),100,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2b10 */
uint F_00ab2b10(unsigned int gen_a0)
{
  GEN_ENTER(0xab2b10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x20,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2b40 */
uint F_00ab2b40(unsigned int gen_a0)
{
  GEN_ENTER(0xab2b40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x79,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2b70 */
uint F_00ab2b70(unsigned int gen_a0)
{
  GEN_ENTER(0xab2b70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x104,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2ba0 */
uint F_00ab2ba0(unsigned int gen_a0)
{
  GEN_ENTER(0xab2ba0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xe8,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2bd0 */
uint F_00ab2bd0(unsigned int gen_a0)
{
  GEN_ENTER(0xab2bd0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x118,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2c00 */
uint F_00ab2c00(unsigned int gen_a0)
{
  GEN_ENTER(0xab2c00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x11a,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2c30 */
uint F_00ab2c30(unsigned int gen_a0)
{
  GEN_ENTER(0xab2c30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x107,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2c60 */
uint F_00ab2c60(unsigned int gen_a0)
{
  GEN_ENTER(0xab2c60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x108,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2c90 */
uint F_00ab2c90(unsigned int gen_a0)
{
  GEN_ENTER(0xab2c90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x13a,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2cc0 */
uint F_00ab2cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xab2cc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x139,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2cf0 */
uint F_00ab2cf0(unsigned int gen_a0)
{
  GEN_ENTER(0xab2cf0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x106,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2d20 */
uint F_00ab2d20(unsigned int gen_a0)
{
  GEN_ENTER(0xab2d20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x116,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2d50 */
uint F_00ab2d50(unsigned int gen_a0)
{
  GEN_ENTER(0xab2d50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x130,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2d80 */
uint F_00ab2d80(unsigned int gen_a0)
{
  GEN_ENTER(0xab2d80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xd,param_1 + -30000);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2db0 */
uint F_00ab2db0(unsigned int gen_a0)
{
  GEN_ENTER(0xab2db0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xc,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2de0 */
uint F_00ab2de0(unsigned int gen_a0)
{
  GEN_ENTER(0xab2de0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xe,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2e10 */
uint F_00ab2e10(unsigned int gen_a0)
{
  GEN_ENTER(0xab2e10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xf,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2e40 */
uint F_00ab2e40(unsigned int gen_a0)
{
  GEN_ENTER(0xab2e40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x22,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2e70 */
uint F_00ab2e70(unsigned int gen_a0)
{
  GEN_ENTER(0xab2e70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x23,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2ea0 */
uint F_00ab2ea0(unsigned int gen_a0)
{
  GEN_ENTER(0xab2ea0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),200,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2ed0 */
uint F_00ab2ed0(unsigned int gen_a0)
{
  GEN_ENTER(0xab2ed0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x88,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2f00 */
uint F_00ab2f00(unsigned int gen_a0)
{
  GEN_ENTER(0xab2f00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x38,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2f30 */
uint F_00ab2f30(unsigned int gen_a0)
{
  GEN_ENTER(0xab2f30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xd1,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2f60 */
uint F_00ab2f60(unsigned int gen_a0)
{
  GEN_ENTER(0xab2f60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x9e,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2f90 */
uint F_00ab2f90(unsigned int gen_a0)
{
  GEN_ENTER(0xab2f90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x69,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2fc0 */
uint F_00ab2fc0(unsigned int gen_a0)
{
  GEN_ENTER(0xab2fc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x129,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab2ff0 */
uint F_00ab2ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab2ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fce0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x13e,param_1,param_2,0,0);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3020 */
uint F_00ab3020(unsigned int gen_a0)
{
  GEN_ENTER(0xab3020u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x127,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3050 */
uint F_00ab3050(unsigned int gen_a0)
{
  GEN_ENTER(0xab3050u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x125,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3080 */
uint F_00ab3080(unsigned int gen_a0)
{
  GEN_ENTER(0xab3080u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x147,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab30b0 */
uint F_00ab30b0(unsigned int gen_a0)
{
  GEN_ENTER(0xab30b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x11,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab30e0 */
uint F_00ab30e0(unsigned int gen_a0)
{
  GEN_ENTER(0xab30e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x10,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3110 */
uint F_00ab3110(unsigned int gen_a0)
{
  GEN_ENTER(0xab3110u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xda,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3140 */
uint F_00ab3140(unsigned int gen_a0)
{
  GEN_ENTER(0xab3140u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x1c,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3170 */
uint F_00ab3170(unsigned int gen_a0)
{
  GEN_ENTER(0xab3170u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xca,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab31a0 */
uint F_00ab31a0(unsigned int gen_a0)
{
  GEN_ENTER(0xab31a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x34,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab31d0 */
uint F_00ab31d0(unsigned int gen_a0)
{
  GEN_ENTER(0xab31d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x2a,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3200 */
uint F_00ab3200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab3200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  piVar2 = (int *)F_00424750(REFG(int, 0x137104c));
  uVar3 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x2a,param_1);
  uVar4 = 0;
  if ((uVar3 != 0) && (puVar1 = *(uint * PTR32 *)(uVar3 + 4), uVar4 = 0, puVar1 != (uint *)0x0)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),(*puVar1 & 0xffffff) + (int)puVar1,REFG(undefined4, 0x108cc50));
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2)));
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,((undefined1 *)(gen_frame + 0x4)),param_2,param_3);
    uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    uVar4 = (uint)uVar5;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar4;
}

/* ref: FUN_00ab32a0 */
uint F_00ab32a0(unsigned int gen_a0)
{
  GEN_ENTER(0xab32a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x4a,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab32d0 */
uint F_00ab32d0(unsigned int gen_a0)
{
  GEN_ENTER(0xab32d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x49,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3300 */
uint F_00ab3300(unsigned int gen_a0)
{
  GEN_ENTER(0xab3300u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x70,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3330 */
uint F_00ab3330(unsigned int gen_a0)
{
  GEN_ENTER(0xab3330u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x3c,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3360 */
uint F_00ab3360(unsigned int gen_a0)
{
  GEN_ENTER(0xab3360u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x6b,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3390 */
uint F_00ab3390(unsigned int gen_a0)
{
  GEN_ENTER(0xab3390u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x7c,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab33c0 */
uint F_00ab33c0(unsigned int gen_a0)
{
  GEN_ENTER(0xab33c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x9d,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab33f0 */
uint F_00ab33f0(unsigned int gen_a0)
{
  GEN_ENTER(0xab33f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xb2,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3420 */
uint F_00ab3420(unsigned int gen_a0)
{
  GEN_ENTER(0xab3420u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x6a,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3450 */
uint F_00ab3450(unsigned int gen_a0)
{
  GEN_ENTER(0xab3450u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xfd,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3480 */
uint F_00ab3480(unsigned int gen_a0)
{
  GEN_ENTER(0xab3480u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x3e,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab34b0 */
uint F_00ab34b0(unsigned int gen_a0)
{
  GEN_ENTER(0xab34b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x7a,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab34e0 */
uint F_00ab34e0(unsigned int gen_a0)
{
  GEN_ENTER(0xab34e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x7b,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3510 */
uint F_00ab3510(unsigned int gen_a0)
{
  GEN_ENTER(0xab3510u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x3f,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3540 */
uint F_00ab3540(unsigned int gen_a0)
{
  GEN_ENTER(0xab3540u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x3a,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3570 */
uint F_00ab3570(unsigned int gen_a0)
{
  GEN_ENTER(0xab3570u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x3b,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab35a0 */
uint F_00ab35a0(unsigned int gen_a0)
{
  GEN_ENTER(0xab35a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x5e,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab35d0 */
uint F_00ab35d0(unsigned int gen_a0)
{
  GEN_ENTER(0xab35d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x91,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3600 */
uint F_00ab3600(unsigned int gen_a0)
{
  GEN_ENTER(0xab3600u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x123,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3630 */
uint F_00ab3630(unsigned int gen_a0)
{
  GEN_ENTER(0xab3630u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xbd,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3660 */
uint F_00ab3660(unsigned int gen_a0)
{
  GEN_ENTER(0xab3660u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xc0,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3690 */
uint F_00ab3690(unsigned int gen_a0)
{
  GEN_ENTER(0xab3690u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x148,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab36c0 */
uint F_00ab36c0(unsigned int gen_a0)
{
  GEN_ENTER(0xab36c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x2b,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab36f0 */
uint F_00ab36f0(unsigned int gen_a0)
{
  GEN_ENTER(0xab36f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xa1,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3720 */
uint F_00ab3720(unsigned int gen_a0)
{
  GEN_ENTER(0xab3720u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x12a,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3750 */
uint F_00ab3750(unsigned int gen_a0)
{
  GEN_ENTER(0xab3750u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x12e,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3780 */
uint F_00ab3780(unsigned int gen_a0)
{
  GEN_ENTER(0xab3780u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x6d,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab37b0 */
uint F_00ab37b0(unsigned int gen_a0)
{
  GEN_ENTER(0xab37b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x11e,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab37e0 */
uint F_00ab37e0(unsigned int gen_a0)
{
  GEN_ENTER(0xab37e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x51,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3810 */
uint F_00ab3810(unsigned int gen_a0)
{
  GEN_ENTER(0xab3810u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x76,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3840 */
uint F_00ab3840(unsigned int gen_a0)
{
  GEN_ENTER(0xab3840u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xd6,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3870 */
uint F_00ab3870(unsigned int gen_a0)
{
  GEN_ENTER(0xab3870u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x6e,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab38a0 */
uint F_00ab38a0(unsigned int gen_a0)
{
  GEN_ENTER(0xab38a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x8a,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab38d0 */
uint F_00ab38d0(unsigned int gen_a0)
{
  GEN_ENTER(0xab38d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x98,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3900 */
uint F_00ab3900(unsigned int gen_a0)
{
  GEN_ENTER(0xab3900u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x12f,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3930 */
uint F_00ab3930(unsigned int gen_a0)
{
  GEN_ENTER(0xab3930u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x7f,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3960 */
uint F_00ab3960(unsigned int gen_a0)
{
  GEN_ENTER(0xab3960u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x82,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3990 */
uint F_00ab3990(unsigned int gen_a0)
{
  GEN_ENTER(0xab3990u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x1b,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab39c0 */
uint F_00ab39c0(unsigned int gen_a0)
{
  GEN_ENTER(0xab39c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x83,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab39f0 */
uint F_00ab39f0(unsigned int gen_a0)
{
  GEN_ENTER(0xab39f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x84,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3a20 */
uint F_00ab3a20(unsigned int gen_a0)
{
  GEN_ENTER(0xab3a20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x85,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3a50 */
uint F_00ab3a50(unsigned int gen_a0)
{
  GEN_ENTER(0xab3a50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x96,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3a80 */
uint F_00ab3a80(unsigned int gen_a0)
{
  GEN_ENTER(0xab3a80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x97,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3ab0 */
uint F_00ab3ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xab3ab0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xd4,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3ae0 */
uint F_00ab3ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xab3ae0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x8b,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3b10 */
uint F_00ab3b10(unsigned int gen_a0)
{
  GEN_ENTER(0xab3b10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x13d,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3b40 */
uint F_00ab3b40(unsigned int gen_a0)
{
  GEN_ENTER(0xab3b40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x8e,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3b70 */
uint F_00ab3b70(unsigned int gen_a0)
{
  GEN_ENTER(0xab3b70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x8d,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3ba0 */
uint F_00ab3ba0(unsigned int gen_a0)
{
  GEN_ENTER(0xab3ba0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x109,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3bd0 */
uint F_00ab3bd0(unsigned int gen_a0)
{
  GEN_ENTER(0xab3bd0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x9b,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3c00 */
uint F_00ab3c00(unsigned int gen_a0)
{
  GEN_ENTER(0xab3c00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x35,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3c30 */
uint F_00ab3c30(unsigned int gen_a0)
{
  GEN_ENTER(0xab3c30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xa5,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3c60 */
uint F_00ab3c60(unsigned int gen_a0)
{
  GEN_ENTER(0xab3c60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),299,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3c90 */
uint F_00ab3c90(unsigned int gen_a0)
{
  GEN_ENTER(0xab3c90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xa0,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3cc0 */
uint F_00ab3cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xab3cc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x137,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3cf0 */
uint F_00ab3cf0(unsigned int gen_a0)
{
  GEN_ENTER(0xab3cf0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x149,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3d20 */
uint F_00ab3d20(unsigned int gen_a0)
{
  GEN_ENTER(0xab3d20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x92,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3d50 */
uint F_00ab3d50(unsigned int gen_a0)
{
  GEN_ENTER(0xab3d50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x94,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3d80 */
uint F_00ab3d80(unsigned int gen_a0)
{
  GEN_ENTER(0xab3d80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xab,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3db0 */
uint F_00ab3db0(unsigned int gen_a0)
{
  GEN_ENTER(0xab3db0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xfb,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3de0 */
uint F_00ab3de0(unsigned int gen_a0)
{
  GEN_ENTER(0xab3de0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xb3,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3e10 */
uint F_00ab3e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab3e10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xd7,param_1);
  uVar3 = 0;
  if ((uVar2 != 0) && (puVar1 = *(uint * PTR32 *)(uVar2 + 4), uVar3 = 0, puVar1 != (uint *)0x0)) {
    uVar3 = F_0042e430(param_2,(*puVar1 & 0xffffff) + (int)puVar1);
  }
  return uVar3;
}

/* ref: FUN_00ab3e50 */
uint F_00ab3e50(unsigned int gen_a0)
{
  GEN_ENTER(0xab3e50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xb1,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3e80 */
uint F_00ab3e80(unsigned int gen_a0)
{
  GEN_ENTER(0xab3e80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xce,param_1 + -0x120000);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3eb0 */
uint F_00ab3eb0(unsigned int gen_a0)
{
  GEN_ENTER(0xab3eb0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xc3,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3ee0 */
uint F_00ab3ee0(unsigned int gen_a0)
{
  GEN_ENTER(0xab3ee0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xc4,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3f10 */
uint F_00ab3f10(unsigned int gen_a0)
{
  GEN_ENTER(0xab3f10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xc9,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3f40 */
uint F_00ab3f40(unsigned int gen_a0)
{
  GEN_ENTER(0xab3f40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xd2,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3f70 */
uint F_00ab3f70(unsigned int gen_a0)
{
  GEN_ENTER(0xab3f70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xe1,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3fa0 */
uint F_00ab3fa0(unsigned int gen_a0)
{
  GEN_ENTER(0xab3fa0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xe0,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab3fd0 */
uint F_00ab3fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab3fd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  if ((char)param_1 == '\x01') {
    this = *(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8);
    if ((char)param_3 != '\0') {
      uVar2 = F_0052ff60(this,0xf4,param_2);
      iVar1 = REFG(int, 0x137104c);
      goto joined_r0x00ab405c;
    }
    uVar3 = 0xf5;
  }
  else if ((char)param_1 == '\x02') {
    this = *(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8);
    if ((char)param_3 == '\0') {
      uVar3 = 0xf7;
    }
    else {
      uVar3 = 0xf6;
    }
  }
  else {
    if ((char)param_1 != '\x03') {
      return 0;
    }
    this = *(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8);
    if ((char)param_3 == '\0') {
      uVar3 = 0xf9;
    }
    else {
      uVar3 = 0xf8;
    }
  }
  uVar2 = F_0052ff60(this,uVar3,param_2);
  iVar1 = REFG(int, 0x137104c);
joined_r0x00ab405c: ;
  if (uVar2 == 0) {
    REFG(int, 0x137104c) = iVar1;
    return 0;
  }
  REFG(int, 0x137104c) = iVar1;
  return *(uint *)(uVar2 + 4);
}

/* ref: FUN_00ab4070 */
uint F_00ab4070(unsigned int gen_a0)
{
  GEN_ENTER(0xab4070u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xe3,param_1 + -0x160000);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab40a0 */
uint F_00ab40a0(unsigned int gen_a0)
{
  GEN_ENTER(0xab40a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xb4,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab40d0 */
uint F_00ab40d0(unsigned int gen_a0)
{
  GEN_ENTER(0xab40d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x10d,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab4100 */
uint F_00ab4100(unsigned int gen_a0)
{
  GEN_ENTER(0xab4100u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x10c,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab4130 */
uint F_00ab4130(unsigned int gen_a0)
{
  GEN_ENTER(0xab4130u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x119,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab4160 */
uint F_00ab4160(unsigned int gen_a0)
{
  GEN_ENTER(0xab4160u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x10b,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab4190 */
uint F_00ab4190(unsigned int gen_a0)
{
  GEN_ENTER(0xab4190u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x131,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab41c0 */
uint F_00ab41c0(unsigned int gen_a0)
{
  GEN_ENTER(0xab41c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x132,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab41f0 */
uint F_00ab41f0(unsigned int gen_a0)
{
  GEN_ENTER(0xab41f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x133,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab4220 */
uint F_00ab4220(unsigned int gen_a0)
{
  GEN_ENTER(0xab4220u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x13c,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab4250 */
uint F_00ab4250(unsigned int gen_a0)
{
  GEN_ENTER(0xab4250u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x141,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab4280 */
uint F_00ab4280(unsigned int gen_a0)
{
  GEN_ENTER(0xab4280u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x128,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab42b0 */
uint F_00ab42b0(unsigned int gen_a0)
{
  GEN_ENTER(0xab42b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xb5,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab42e0 */
uint F_00ab42e0(unsigned int gen_a0)
{
  GEN_ENTER(0xab42e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xbb,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab4310 */
uint F_00ab4310(unsigned int gen_a0)
{
  GEN_ENTER(0xab4310u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x138,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab4340 */
uint F_00ab4340(unsigned int gen_a0)
{
  GEN_ENTER(0xab4340u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x13b,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00ab4370 */
uint F_00ab4370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xab4370u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x290];
  char cVar1;
  uint uVar2;
  char * pcVar3;
  char * pcVar4;
  uint * puVar5;
  
  (*(uint *)(gen_frame + 0x27c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x280);
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),(undefined1)param_4);
  F_00990c20(((undefined1 *)(gen_frame + 0x10)));
  uVar2 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x6f,param_1);
  if (uVar2 == 0) {
    puVar5 = (uint *)0x0;
  }
  else {
    puVar5 = *(uint * PTR32 *)(uVar2 + 4);
  }
  if ((param_2 != 0) && (param_3 != (int *)0x0)) {
    uVar2 = ((code *)*(gen_code32 *)(*param_3 + 0x98))(param_3);
    if ((char)uVar2 != '\0') {
      F_00990c50(((undefined1 *)(gen_frame + 0x10)),(uint)*(ushort *)(param_2 + 0x88),0xffffffff,param_5);
      F_00990ca0(((undefined1 *)(gen_frame + 0x10)),(uint)*(ushort *)(param_3 + 0x22),0xffffffff,0);
      if (puVar5 != (uint *)0x0) {
        pcVar4 = ((char *)GEN_TOP(((*puVar5 & 0xffffff) + (int)puVar5)));
        pcVar3 = pcVar4;
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        if (pcVar3 != pcVar4 + 1) {
          F_00c472af(((undefined1 *)(gen_frame + 0x178)),0x100,"vfx/common/eff/%s.avfx",pcVar4);
          uVar2 = F_009cfc30(((undefined1 *)(gen_frame + 0x178)),((undefined1 *)(gen_frame + 0x10)),2,(*(undefined4 *)(gen_frame + 0x8)));
          F_00982d70();
          F_00c47745((*(uint *)(gen_frame + 0x27c)) ^ (uint)(uint)(gen_frame + 0x280));
          return uVar2;
        }
      }
    }
  }
  F_00982d70();
  F_00c47745((*(uint *)(gen_frame + 0x27c)) ^ (uint)(uint)(gen_frame + 0x280));
  return 0;
}

/* ref: FUN_00ab44e0 */
uint F_00ab44e0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xab44e0u, gen_a0, gen_a1, 0u, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x290];
  char cVar1;
  uint * puVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  
  (*(uint *)(gen_frame + 0x27c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x280);
  (*(undefined4 *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3),(undefined1)param_4);
  F_00990c20(((undefined1 *)(gen_frame + 0x10)));
  uVar3 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x6f,param_1);
  if ((uVar3 != 0) && (puVar2 = *(uint * PTR32 *)(uVar3 + 4), puVar2 != (uint *)0x0)) {
    pcVar5 = ((char *)GEN_TOP(((*puVar2 & 0xffffff) + (int)puVar2)));
    pcVar4 = pcVar5;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (pcVar4 != pcVar5 + 1) {
      F_00c472af(((undefined1 *)(gen_frame + 0x178)),0x100,"vfx/common/eff/%s.avfx",pcVar5);
      uVar3 = F_009cfd00(((undefined1 *)(gen_frame + 0x178)),2,(*(undefined4 *)(gen_frame + 0xc)),*param_2,param_2[1],param_2[2],param_3,param_3,
                           param_3,(float)(float10)0);
      F_00982d70();
      F_00c47745((*(uint *)(gen_frame + 0x27c)) ^ (uint)(uint)(gen_frame + 0x280));
      return uVar3;
    }
  }
  F_00982d70();
  F_00c47745((*(uint *)(gen_frame + 0x27c)) ^ (uint)(uint)(gen_frame + 0x280));
  return 0;
}

/* ref: FUN_00ab4610 */
uint F_00ab4610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab4610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x290];
  char cVar1;
  uint uVar2;
  char * pcVar3;
  char * pcVar4;
  uint * puVar5;
  
  (*(uint *)(gen_frame + 0x27c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x280);
  (*(undefined4 *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3),(undefined1)param_3);
  F_00990c20(((undefined1 *)(gen_frame + 0x10)));
  uVar2 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x6f,param_1);
  if (uVar2 == 0) {
    puVar5 = (uint *)0x0;
  }
  else {
    puVar5 = *(uint * PTR32 *)(uVar2 + 4);
  }
  if ((param_2 != 0) &&
     (F_00990c50(((undefined1 *)(gen_frame + 0x10)),(uint)*(ushort *)(param_2 + 0x88),0xffffffff,1), puVar5 != (uint *)0x0)
     ) {
    pcVar4 = ((char *)GEN_TOP(((*puVar5 & 0xffffff) + (int)puVar5)));
    pcVar3 = pcVar4;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (pcVar3 != pcVar4 + 1) {
      F_00c472af(((undefined1 *)(gen_frame + 0x178)),0x100,"vfx/common/eff/%s.avfx",pcVar4);
      uVar2 = F_009cfc30(((undefined1 *)(gen_frame + 0x178)),((undefined1 *)(gen_frame + 0x10)),2,(*(undefined4 *)(gen_frame + 0xc)));
      F_00982d70();
      F_00c47745((*(uint *)(gen_frame + 0x27c)) ^ (uint)(uint)(gen_frame + 0x280));
      return uVar2;
    }
  }
  F_00982d70();
  F_00c47745((*(uint *)(gen_frame + 0x27c)) ^ (uint)(uint)(gen_frame + 0x280));
  return 0;
}

/* ref: FUN_00ab4730 */
uint F_00ab4730(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xab4730u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x2d0];
  char cVar1;
  uint * puVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  char * pcVar6;
  float * pfVar7;
  float * pfVar8;
  
  (*(uint *)(gen_frame + 0x2bc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c0);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x48)) + 0)) = (undefined1)param_7;
  (*(undefined4 *)(gen_frame + 0x48)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x48)), 1, 3),(undefined1)param_7);
  F_00990c20(((float *)(gen_frame + 0x50)));
  puVar2 = (uint *)F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x6f,param_1);
  if (puVar2 == (uint *)0x0) {
    (*(uint * PTR32 *)(gen_frame + 0x4c)) = puVar2;
  }
  else {
    (*(uint * PTR32 *)(gen_frame + 0x4c)) = (uint *)puVar2[1];
  }
  if (param_2 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*param_2 + 0x98))(param_2);
    if ((char)uVar3 != '\0') {
      ((float *)(gen_frame + 0x0))[1] = 0.0;
      ((float *)(gen_frame + 0x0))[2] = 0.0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(float *)(gen_frame + 0x30)) = param_3;
      (*(float *)(gen_frame + 0x34)) = param_4;
      ((float *)(gen_frame + 0x0))[0] = param_6;
      (*(float *)(gen_frame + 0x14)) = param_6;
      (*(float *)(gen_frame + 0x28)) = param_6;
      (*(float *)(gen_frame + 0x38)) = param_5;
      F_00990c50(((float *)(gen_frame + 0x50)),(uint)*(ushort *)(param_2 + 0x22),0xffffffff,0);
      pfVar7 = ((float *)(gen_frame + 0x0));
      pfVar8 = ((float *)(gen_frame + 0x50));
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar8 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        pfVar8 = pfVar8 + 1;
      }
      if ((*(uint * PTR32 *)(gen_frame + 0x4c)) != (uint *)0x0) {
        pcVar6 = ((char *)GEN_TOP(((*(*(uint * PTR32 *)(gen_frame + 0x4c)) & 0xffffff) + (int)(*(uint * PTR32 *)(gen_frame + 0x4c)))));
        pcVar4 = pcVar6;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        if (pcVar4 != pcVar6 + 1) {
          F_00c472af(((undefined1 *)(gen_frame + 0x1b8)),0x100,"vfx/common/eff/%s.avfx",pcVar6);
          uVar3 = F_009cfc30(((undefined1 *)(gen_frame + 0x1b8)),((float *)(gen_frame + 0x50)),2,(*(undefined4 *)(gen_frame + 0x48)));
          F_00982d70();
          F_00c47745((*(uint *)(gen_frame + 0x2bc)) ^ (uint)(uint)(gen_frame + 0x2c0));
          return uVar3;
        }
      }
    }
  }
  F_00982d70();
  F_00c47745((*(uint *)(gen_frame + 0x2bc)) ^ (uint)(uint)(gen_frame + 0x2c0));
  return 0;
}

/* ref: FUN_00ab4900 */
uint F_00ab4900(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xab4900u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x2a0];
  char cVar1;
  uint * puVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  uint * puVar6;
  char * pcVar7;
  
  (*(uint *)(gen_frame + 0x28c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x290);
  (*(undefined4 *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3),(undefined1)param_7);
  F_00990c20(((undefined1 *)(gen_frame + 0x20)));
  uVar3 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x112,param_1);
  if ((uVar3 == 0) || (puVar2 = *(uint * PTR32 *)(uVar3 + 4), puVar2 == (uint *)0x0)) {
LAB_00ab4991: ;
    F_00982d70();
    F_00c47745((*(uint *)(gen_frame + 0x28c)) ^ (uint)(uint)(gen_frame + 0x290));
    return 0;
  }
  pcVar7 = ((char *)GEN_TOP(((*puVar2 & 0xffffff) + (int)puVar2)));
  pcVar4 = pcVar7;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (pcVar4 == pcVar7 + 1) goto LAB_00ab4991;
  if ((char)param_6 == '\0') {
    puVar6 = puVar2 + 1;
    pcVar5 = ((char *)GEN_TOP(((puVar2[1] & 0xffffff) + (int)puVar6)));
    pcVar4 = pcVar5 + 1;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if (pcVar5 != pcVar4) {
      pcVar7 = ((char *)GEN_TOP(((*puVar6 & 0xffffff) + (int)puVar6)));
      pcVar4 = "vfx/omen/eff/%s.avfx";
      goto override_prt_ab4a1b_112095b4;
    }
  }
  pcVar4 = "vfx/omen/eff/%s.avfx";
override_prt_ab4a1b_112095b4: ;
  F_00c472af(((undefined1 *)(gen_frame + 0x188)),0x100,pcVar4,pcVar7);
  uVar3 = F_009cfd00(((undefined1 *)(gen_frame + 0x188)),2,(*(undefined4 *)(gen_frame + 0xc)),*param_2,param_2[1],param_2[2],param_4,param_4,param_5,
                       param_3);
  F_00982d70();
  F_00c47745((*(uint *)(gen_frame + 0x28c)) ^ (uint)(uint)(gen_frame + 0x290));
  return uVar3;
}

/* ref: FUN_00ab4aa0 */
uint F_00ab4aa0(unsigned int gen_a0)
{
  GEN_ENTER(0xab4aa0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x280];
  char cVar1;
  uint * puVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  
  (*(uint *)(gen_frame + 0x26c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x270);
  F_00990c20(((undefined1 *)(gen_frame + 0x0)));
  uVar3 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x112,param_1);
  if ((uVar3 != 0) && (puVar2 = *(uint * PTR32 *)(uVar3 + 4), puVar2 != (uint *)0x0)) {
    pcVar5 = ((char *)GEN_TOP(((*puVar2 & 0xffffff) + (int)puVar2)));
    pcVar4 = pcVar5;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (pcVar4 != pcVar5 + 1) {
      F_00c472af(((undefined1 *)(gen_frame + 0x168)),0x100,"vfx/omen/eff/%s.avfx",pcVar5);
      uVar3 = F_00990ad0(((undefined1 *)(gen_frame + 0x168)));
      F_00982d70();
      F_00c47745((*(uint *)(gen_frame + 0x26c)) ^ (uint)(uint)(gen_frame + 0x270));
      return uVar3;
    }
  }
  F_00982d70();
  F_00c47745((*(uint *)(gen_frame + 0x26c)) ^ (uint)(uint)(gen_frame + 0x270));
  return 0;
}

/* ref: FUN_00ab4b90 */
unsigned int F_00ab4b90(unsigned int gen_a0)
{
  GEN_ENTER(0xab4b90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if (REFG(int, 0x14bcc68) != 0) {
    F_00ab0810((undefined *)(REFG(int, 0x14bcc68) + 0x10),param_1);
  }
  return 0;
}

/* ref: FUN_00ab4bb0 */
unsigned int F_00ab4bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xab4bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  if (REFG(undefined4, 0x14bcc68) != (undefined *)0x0) {
    F_00ab09a0(REFG(undefined4, 0x14bcc68),param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return 0;
}

/* ref: FUN_00ab4be0 */
unsigned int F_00ab4be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab4be0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  
  if (((REFG(int, 0x14bcc68) != 0) && (param_2 < *(uint *)(REFG(int, 0x14bcc68) + 8))) &&
     (iVar1 = param_2 * 0x50 + *(int *)(REFG(int, 0x14bcc68) + 0xa0), *(int *)(iVar1 + 0x48) != 1)) {
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined1 *)(iVar1 + 0x16) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined1 *)(iVar1 + 0x2c) = 0;
    *(undefined4 *)(iVar1 + 0x48) = 0;
    *(undefined2 *)(iVar1 + 0x10) = 0;
    *(undefined2 *)(iVar1 + 0x12) = 0;
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined4 *)(iVar1 + 0x38) = 0;
    *(undefined4 *)(iVar1 + 0x40) = 0;
    *(undefined4 *)(iVar1 + 0x44) = 0;
  }
  return 0;
}

/* ref: FUN_00ab4c40 */
unsigned int F_00ab4c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab4c40u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((REFG(int, 0x14bcc68) != 0) && (param_1 < *(uint *)(REFG(int, 0x14bcc68) + 8))) {
    *((undefined4 *)GEN_TOP((*(int *)(REFG(int, 0x14bcc68) + 0xa0) + 0x48 + param_1 * 0x50))) = param_2;
  }
  return 0;
}

/* ref: FUN_00ab4c70 */
uint F_00ab4c70(void)
{
  GEN_ENTER(0xab4c70u, 0u, 0u, 0u, 0u);
  int * piVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  if (REFG(int, 0x14bcc68) != 0) {
    uVar7 = 0;
    piVar1 = (int *)(REFG(int, 0x14bcc68) + 0xa0);
    if (*(int *)(REFG(int, 0x14bcc68) + 8) != 0) {
      iVar6 = 0;
      iVar5 = REFG(int, 0x14bcc68);
      do {
        uVar2 = *(ushort *)(iVar6 + 0x10 + *piVar1);
        if ((((uVar2 != 0) && (1000 < uVar2)) &&
            (uVar4 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x85,(uint)uVar2),
            iVar5 = REFG(int, 0x14bcc68), uVar4 != 0)) &&
           (((iVar3 = *(int *)(uVar4 + 4), iVar3 != 0 && (*(short *)(iVar3 + 4) != 0)) &&
            (*(short *)(iVar3 + 4) != 1)))) {
          return (uint)*(ushort *)(iVar3 + 4);
        }
        uVar7 = uVar7 + 1;
        iVar6 = iVar6 + 0x50;
      } while (uVar7 < *(uint *)(iVar5 + 8));
    }
  }
  return 0;
}

/* ref: FUN_00ab4cf0 */
uint F_00ab4cf0(unsigned int gen_a0)
{
  GEN_ENTER(0xab4cf0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xd4,param_1);
  if (uVar1 != 0) {
    if (*(uint *)(uVar1 + 4) != 0) {
      return *(uint *)(uVar1 + 4);
    }
  }
  return 0;
}

/* ref: FUN_00ab4dc0 */
unsigned int F_00ab4dc0(unsigned int gen_a0)
{
  GEN_ENTER(0xab4dc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1,0);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x14) + 0x78))))(*(int * PTR32 *)((int)this + 0x14),500);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  *(undefined4 *)((int)this + 0x38) = 0;
  uVar2 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined2 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x3c) = uVar2;
  *(undefined2 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined1 *)((int)this + 0x10) = 0;
  return 0;
}

/* ref: FUN_00ab4e30 */
uint F_00ab4e30(unsigned int gen_a0)
{
  GEN_ENTER(0xab4e30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x83,param_1 & 0xffff);
  if ((uVar2 != 0) && (puVar1 = *(uint * PTR32 *)(uVar2 + 4), puVar1 != (uint *)0x0)) {
    return (*puVar1 & 0xffffff) + (int)puVar1;
  }
  return 0;
}

/* ref: FUN_00ab4e70 */
uint F_00ab4e70(unsigned int gen_a0)
{
  GEN_ENTER(0xab4e70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  int local_8;
  
  puVar3 = (undefined4 *)((int)this + 8);
  *(undefined1 *)this = 0;
  local_8 = 1;
  puVar2 = (undefined4 *)((int)this + 0x30);
  do {
    uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xd4,3);
    if ((uVar1 == 0) || (*(undefined4 * PTR32 *)(uVar1 + 4) == (undefined4 *)0x0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = **(undefined4 * PTR32 *)(uVar1 + 4);
    }
    *puVar3 = uVar4;
    puVar2[-9] = 0;
    puVar2[-7] = 0;
    *(undefined1 *)(puVar2 + -6) = 0;
    puVar2[-5] = 0;
    puVar2[-4] = 0;
    *(undefined2 *)(puVar2 + -3) = 0;
    *(undefined2 *)(puVar2 + -8) = 0;
    puVar2[-2] = 0;
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    uVar4 = REFG(float, 0x1087f04);
    puVar2[5] = GEN_FLT_TO(puVar2[5], REFG(float, 0x1087f04));
    puVar3 = puVar3 + 0x10;
    puVar2 = puVar2 + 0x10;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  *(undefined4 *)((int)this + 0x88) = uVar4;
  return (uint)this;
}

/* ref: FUN_00ab4f20 */
unsigned int F_00ab4f20(unsigned int gen_a0)
{
  GEN_ENTER(0xab4f20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int * piVar3;
  int iVar4;
  
  iVar4 = REFG(float, 0x1087f04);
  *(undefined1 *)this = 0;
  *(int *)((int)this + 0x88) = iVar4;
  piVar3 = (int *)((int)this + 0x1c);
  iVar4 = 2;
  do {
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1,0);
      ((code *)*(gen_code32 *)(*(int *)*piVar3 + 0x78))((int *)*piVar3,500);
      *piVar3 = 0;
    }
    piVar3[9] = 0;
    iVar2 = REFG(float, 0x1087f04);
    piVar3[-4] = 0;
    piVar3[1] = 0;
    *(undefined2 *)(piVar3 + 2) = 0;
    piVar3[10] = iVar2;
    *(undefined2 *)(piVar3 + -3) = 0;
    piVar3[3] = 0;
    piVar3[4] = 0;
    piVar3[5] = 0;
    piVar3[7] = 0;
    piVar3[8] = 0;
    piVar3[-2] = 0;
    *(undefined1 *)(piVar3 + -1) = 0;
    piVar3 = piVar3 + 0x10;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return 0;
}

/* ref: FUN_00ab4fc0 */
uint F_00ab4fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xab4fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  int * piVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint local_8;
  
  iVar5 = 0;
  local_8 = 0;
  if ((char)param_3 == '\x03') {
    local_8 = 1;
  }
  else if ((char)param_1 == '\x03') {
    local_8 = 2;
  }
  else if ((*(int *)((uint)*(byte *)((int)(uintptr_t)this) * 0x40 + 0x1c + (int)this) == 0) ||
          (piVar1 = *(int * PTR32 *)((int)this + (uint)*(byte *)((int)(uintptr_t)this) * 0x40 + 0x1c),
          uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x7c))(piVar1), (char)uVar4 == '\0')) {
    local_8 = 3;
  }
  else {
    uVar4 = F_00530100(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x96);
    if (0 < (int)uVar4) {
      do {
        uVar3 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x96,iVar5);
        if ((((uVar3 != 0) && (puVar2 = *(uint * PTR32 *)(uVar3 + 4), puVar2 != (uint *)0x0)) &&
            (*puVar2 == (param_2 & 0xff))) && (puVar2[1] == (param_4 & 0xff))) {
          local_8 = puVar2[2];
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)uVar4);
    }
  }
  uVar4 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x97,local_8);
  if (uVar4 != 0) {
    return *(uint *)(uVar4 + 4);
  }
  return 0;
}

/* ref: FUN_00ab50b0 */
byte F_00ab50b0(unsigned int gen_a0)
{
  GEN_ENTER(0xab50b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x83,param_1 & 0xffff);
  if ((uVar1 != 0) && (*(int *)(uVar1 + 4) != 0)) {
    return *((byte *)GEN_TOP((*(int *)(uVar1 + 4) + 8)));
  }
  return 0;
}

/* ref: FUN_00ab50f0 */
unsigned int F_00ab50f0(unsigned int gen_a0)
{
  GEN_ENTER(0xab50f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(char *)((int)this + 0xb4) != '\0') {
    *(undefined4 *)((int)this + 0xb0) = 3;
    return 0;
  }
  uVar1 = F_00ab0c40();
  *(uint *)((int)this + 0xb0) = uVar1;
  return 0;
}

/* ref: FUN_00ab5120 */
uint F_00ab5120(unsigned int gen_a0)
{
  GEN_ENTER(0xab5120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(char *)((int)this + 199) != '\0') {
    if (*(char *)((int)this + 0xc6) == '\0') {
      *(undefined1 *)((int)this + 199) = 0;
    }
    if (*(char *)((int)this + 199) != '\0') goto LAB_00ab5154;
  }
  if (*(char *)((int)this + 0xc6) != '\0') {
    F_00ab0a20(this,0,6);
  }
LAB_00ab5154: ;
  uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0x1b0);
  if (((*(int *)(uVar1 + 0x14) != 1) && (4 < *(uint *)((int)this + 8))) &&
     (uVar1 = *(uint *)((int)this + 0xa0), *(int *)(uVar1 + 0x188) != 1)) {
    *(undefined4 *)(uVar1 + 0x14c) = 0;
    *(undefined1 *)(uVar1 + 0x156) = 0;
    *(undefined4 *)(uVar1 + 0x158) = 0;
    *(undefined1 *)(uVar1 + 0x16c) = 0;
    *(undefined4 *)(uVar1 + 0x188) = 0;
    *(undefined4 *)(uVar1 + 0x150) = 0;
    *(undefined4 *)(uVar1 + 0x170) = 0;
    *(undefined4 *)(uVar1 + 0x174) = 0;
    *(undefined4 *)(uVar1 + 0x178) = 0;
    *(undefined4 *)(uVar1 + 0x180) = 0;
    *(undefined4 *)(uVar1 + 0x184) = 0;
  }
  return uVar1;
}

/* ref: FUN_00ab51d0 */
uint F_00ab51d0(void)
{
  GEN_ENTER(0xab51d0u, 0u, 0u, 0u, 0u);
  uint * puVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  char * pcVar6;
  undefined4 * puVar7;
  int * piVar8;
  char cVar9;
  char * pcVar10;
  int iVar11;
  uint local_10;
  uint local_8;
  
  REFG(undefined4, 0x14bcc6c) = (int *)F_00406b90(0x1c,0,0);
  if (REFG(undefined4, 0x14bcc6c) == (int *)0x0) {
    REFG(undefined4, 0x14bcc6c) = (int *)0x0;
  }
  else {
    *REFG(int * PTR32, 0x14bcc6c) = 0;
    REFG(int * PTR32, 0x14bcc6c)[1] = 0;
    REFG(int * PTR32, 0x14bcc6c)[2] = 0;
    REFG(int * PTR32, 0x14bcc6c)[3] = 0;
  }
  uVar4 = F_00530100(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x75);
  F_00aba8d0(REFG(undefined4, 0x14bcc6c),uVar4);
  local_8 = 0;
  if (uVar4 != 0) {
    do {
      uVar5 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x75,local_8);
      if ((uVar5 == 0) || (puVar1 = *(uint * PTR32 *)(uVar5 + 4), puVar1 == (uint *)0x0)) {
LAB_00ab52a3: ;
        REFG(int * PTR32, 0x14bcc6c)[1] = REFG(int * PTR32, 0x14bcc6c)[1] + -1;
      }
      else {
        pcVar10 = ((char *)GEN_TOP(((*puVar1 & 0xffffff) + (int)puVar1)));
        if ((pcVar10 == (char *)0x0) || (*pcVar10 == '\0')) goto LAB_00ab52a3;
        cVar9 = *pcVar10;
        iVar11 = 0;
        if (cVar9 != '\0') {
          pcVar6 = pcVar10 + (-(int)puVar1 - (*puVar1 & 0xffffff));
          do {
            pcVar6 = pcVar6 + 1;
            pcVar10 = pcVar10 + 1;
            iVar11 = iVar11 + (int)cVar9 * (int)pcVar6;
            cVar9 = *pcVar10;
          } while (cVar9 != '\0');
        }
        *((int *)GEN_TOP((*REFG(int * PTR32, 0x14bcc6c) + local_8 * 8))) = iVar11;
        *((uint * PTR32 *)GEN_TOP((*REFG(int * PTR32, 0x14bcc6c) + 4 + local_8 * 8))) = puVar1;
      }
      local_8 = local_8 + 1;
    } while (local_8 < uVar4);
  }
  F_00aba940(REFG(undefined4, 0x14bcc6c));
  uVar5 = F_00530100(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x60);
  piVar8 = REFG(undefined4, 0x14bcc6c);
  REFG(int * PTR32, 0x14bcc6c)[3] = uVar5;
  puVar7 = (undefined4 *)
           F_00406bb0(-(uint)((int)((ulonglong)uVar5 * 8 >> 0x20) != 0) |
                        (uint)((ulonglong)uVar5 * 8),0,0);
  puVar2 = puVar7;
  uVar4 = uVar5;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    while (-1 < (int)(uVar4 - 1)) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = puVar2 + 2;
      uVar4 = uVar4 - 1;
    }
  }
  piVar8[2] = (int)puVar7;
  local_10 = 0;
  if (uVar5 != 0) {
    local_8 = 0;
    do {
      uVar4 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x60,local_10);
      if ((uVar4 == 0) || (puVar1 = *(uint * PTR32 *)(uVar4 + 4), puVar1 == (uint *)0x0)) {
LAB_00ab53b0: ;
        REFG(int * PTR32, 0x14bcc6c)[3] = REFG(int * PTR32, 0x14bcc6c)[3] + -1;
      }
      else {
        pcVar10 = ((char *)GEN_TOP(((*puVar1 & 0xffffff) + (int)puVar1)));
        if ((pcVar10 == (char *)0x0) || (*pcVar10 == '\0')) goto LAB_00ab53b0;
        cVar9 = *pcVar10;
        iVar11 = 0;
        if (cVar9 != '\0') {
          pcVar6 = pcVar10 + (-(int)puVar1 - (*puVar1 & 0xffffff));
          do {
            pcVar6 = pcVar6 + 1;
            pcVar10 = pcVar10 + 1;
            iVar11 = iVar11 + (int)cVar9 * (int)pcVar6;
            cVar9 = *pcVar10;
          } while (cVar9 != '\0');
        }
        *((int *)GEN_TOP((local_8 + REFG(int * PTR32, 0x14bcc6c)[2]))) = iVar11;
        *((uint * PTR32 *)GEN_TOP((REFG(int * PTR32, 0x14bcc6c)[2] + 4 + local_8))) = puVar1;
        local_8 = local_8 + 8;
      }
      local_10 = local_10 + 1;
    } while (local_10 < uVar5);
  }
  F_00abaaa0(REFG(undefined4, 0x14bcc6c) + 2);
  uVar4 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x2c,0);
  piVar3 = REFG(undefined4, 0x14bcc6c);
  piVar8 = (int *)0x0;
  if (uVar4 != 0) {
    piVar8 = *(int * PTR32 *)(uVar4 + 4);
  }
  REFG(int * PTR32, 0x14bcc6c)[4] = *piVar8;
  piVar3[5] = piVar8[1];
  uVar4 = piVar8[2];
  piVar3[6] = uVar4;
  return uVar4;
}

/* ref: FUN_00ab5410 */
unsigned int F_00ab5410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab5410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00ab0f60(this,param_1);
  F_00ab0fb0(this,param_2);
  return 0;
}

/* ref: FUN_00ab5430 */
byte F_00ab5430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab5430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x58,param_1);
  if ((uVar3 != 0) && (iVar2 = *(int *)(uVar3 + 4), iVar2 != 0)) {
    uVar1 = *(ushort *)(iVar2 + 0x1c);
    if (*(char *)(iVar2 + 0x22) == '\0') {
      if ((-1 < (short)uVar1) && (uVar1 < 0x14)) {
        return *((byte *)GEN_TOP(((int)this + (param_2 & 0xff) + ((short)uVar1 + 0x50) * 0x20)));
      }
    }
    else if ((-1 < (short)uVar1) && (uVar1 < 0xa0)) {
      return *((byte *)GEN_TOP(((int)this + (param_2 & 0xff) + (short)uVar1 * 0x10)));
    }
  }
  return 1;
}

/* ref: FUN_00ab54c0 */
uint F_00ab54c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xab54c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  byte bVar2;
  uint in_EAX = 0;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined4 * puVar4;
  
  if (*(char *)((int)this + 0xc80) == '\0') {
    uVar3 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x58,param_3);
    in_EAX = 0;
    if ((uVar3 != 0) && (iVar1 = *(int *)(uVar3 + 4), in_EAX = 0, iVar1 != 0)) {
      bVar2 = F_00ab10a0(this,(uint)*(ushort *)(iVar1 + 0x1c),param_2,
                           (uint)*(byte *)(iVar1 + 0x22));
      in_EAX = CONCAT31(extraout_var,bVar2);
      if ((bVar2 == 0) && (REFG(undefined4, 0x1379694) != (undefined *)0x0)) {
        puVar4 = (undefined4 *)F_00a5feb0(REFG(undefined4, 0x1379694));
        (*(undefined4 *)(gen_frame + 0x0)) = *puVar4;
        (*(undefined4 *)(gen_frame + 0x4)) = puVar4[1];
        (*(undefined4 *)(gen_frame + 0x8)) = puVar4[2];
        in_EAX = F_00ab0ff0(this,param_1,&(*(undefined4 *)(gen_frame + 0x0)));
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00ab5570 */
uint F_00ab5570(unsigned int gen_a0)
{
  GEN_ENTER(0xab5570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  uint * puVar2;
  int local_8;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined2 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined1 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  puVar2 = (uint *)((int)this + 0x80);
  local_8 = 3;
  do {
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                                (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),0x750,0x10)));
    if (this_00 == (undefined *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = F_006ae690(this_00);
    }
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x30) = 0;
  return uVar1;
}

/* ref: FUN_00ab5620 */
uint F_00ab5620(unsigned int gen_a0)
{
  GEN_ENTER(0xab5620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined2 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined1 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  uVar1 = *(undefined4 *)(REFG(int, 0x137104c) + 0x25f8);
  F_004e7f70(uVar1,(float)(float10)0);
  uVar2 = F_004e7cc0(uVar1,(float)(float10)0);
  return uVar2;
}

/* ref: Global::ReadInitZone */
uint F_00ab56a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab56a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  int * piVar2;
  undefined4 * puVar3;
  undefined * pvVar4;
  uint uVar5;
  undefined4 uVar6;
  
  (*(int * PTR32 *)(gen_frame + 0x3c)) = REFG(undefined4, 0x1379694);
  if ((*(byte *)(param_1 + 0xd) & 6) != 0) {
    REFG(undefined1, 0x1338ad4) = 0;
  }
  piVar2 = (int *)F_00424750(REFG(int, 0x137104c));
  ((code *)*(gen_code32 *)(*piVar2 + 0xa8))(piVar2,0,0,1);
  (*(int * PTR32 *)(gen_frame + 0x38)) = (int *)((int)this + 0x80);
  (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)0x3;
  do {
    ((code *)*(gen_code32 *)(*(int *)*(*(int * PTR32 *)(gen_frame + 0x38)) + 4))((int *)*(*(int * PTR32 *)(gen_frame + 0x38)));
    (*(int * PTR32 *)(gen_frame + 0x38)) = (*(int * PTR32 *)(gen_frame + 0x38)) + 1;
    piVar2 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x34)) + -1);
    (*(int * PTR32 *)(gen_frame + 0x34)) = piVar2;
  } while (piVar2 != (int *)0x0);
  if ((*(int * PTR32 *)(gen_frame + 0x3c)) != (int *)0x0) {
    piVar2 = *(int * PTR32 *)((int)this + 0x7c);
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
      puVar3 = *(undefined4 * PTR32 *)((int)this + 0x7c);
      if (puVar3 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
        *(undefined4 *)((int)this + 0x7c) = 0;
      }
    }
    *(int *)((int)this + 0x7c) = (*(int * PTR32 *)(gen_frame + 0x3c))[0x3b];
    iVar1 = (*(int * PTR32 *)(gen_frame + 0x3c))[0x3b];
    if ((iVar1 != 0) && (*(int *)(iVar1 + 200) != 0)) {
      F_006b2f70((undefined *)(iVar1 + 0x90));
    }
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x3c)) + 0x38))((*(int * PTR32 *)(gen_frame + 0x3c)),0);
    (*(int * PTR32 *)(gen_frame + 0x38)) = (int *)((int)this + 0x80);
    (*(int * PTR32 *)(gen_frame + 0x34)) = (*(int * PTR32 *)(gen_frame + 0x3c)) + 0x5ac;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 1;
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
    (*(int *)(gen_frame + 0x30)) = 3;
    do {
      iVar1 = *(*(int * PTR32 *)(gen_frame + 0x34));
      (*(int *)(gen_frame + 0x28)) = iVar1;
      if (iVar1 != 0 || (*(int * PTR32 *)(gen_frame + 0x34))[1] != 0) {
        (*(int *)(gen_frame + 0x4)) = (*(int * PTR32 *)(gen_frame + 0x34))[1];
        (*(int *)(gen_frame + 0x0)) = iVar1;
        F_006ac620(*(*(int * PTR32 *)(gen_frame + 0x38)),(gen_frame + 0x4c),&(*(int *)(gen_frame + 0x0)));
        F_0068bd00(REFG(undefined4, 0x1371294),*(*(int * PTR32 *)(gen_frame + 0x38)));
        F_00690620((undefined *)*(*(int * PTR32 *)(gen_frame + 0x38)));
        puVar3 = (undefined4 *)F_00a5feb0((*(int * PTR32 *)(gen_frame + 0x3c)));
        iVar1 = *(*(int * PTR32 *)(gen_frame + 0x38));
        *(undefined4 *)(iVar1 + 0x30) = *puVar3;
        *(undefined4 *)(iVar1 + 0x34) = puVar3[1];
        *(undefined4 *)(iVar1 + 0x38) = puVar3[2];
        *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 2;
      }
      (*(int * PTR32 *)(gen_frame + 0x38)) = (*(int * PTR32 *)(gen_frame + 0x38)) + 1;
      (*(int * PTR32 *)(gen_frame + 0x34)) = (*(int * PTR32 *)(gen_frame + 0x34)) + 0x1e8;
      iVar1 = (*(int *)(gen_frame + 0x30)) + -1;
      (*(int *)(gen_frame + 0x30)) = iVar1;
    } while (iVar1 != 0);
  }
  F_00a35550();
  F_00a4a760(&REFG(undefined, 0x14a7360),0x23,1);
  F_005d4d80((uint)*(ushort *)(param_1 + 2));
  F_005d4fa0(&REFG(undefined, 0x1379c6c),(uint)*(ushort *)(param_1 + 0xe),(uint)*(ushort *)(param_1 + 0x10),
               (uint)*(ushort *)(param_1 + 0x12),(uint)*(ushort *)(param_1 + 0x14));
  F_005d4fe0(&REFG(undefined, 0x1379c6c),(uint)*(ushort *)(param_1 + 2),*(undefined4 *)(param_1 + 4),0,1,1);
  F_00b7c250(&REFG(undefined, 0x133e5c0),(uint)*(byte *)(param_1 + 0xc),(uint)*(ushort *)(param_1 + 2));
  F_00a375a0(&REFG(undefined, 0x14a4230));
  F_00a3a050();
  F_00a37ab0(&REFG(undefined, 0x14a4230));
  (*(int *)(gen_frame + 0x0)) = *(int *)(param_1 + 0x18);
  (*(int *)(gen_frame + 0x4)) = *(undefined4 *)(param_1 + 0x1c);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_1 + 0x20);
  F_005f4a00(&(*(int *)(gen_frame + 0x0)));
  (*(float *)(gen_frame + 0x10)) = *(float *)(param_1 + 0x18);
  (*(float *)(gen_frame + 0x14)) = *(float *)(param_1 + 0x1c);
  uVar6 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 8);
  (*(undefined4 *)(gen_frame + 0x18)) = uVar6;
  F_00b70d10(&REFG(undefined4, 0x1375b90),0);
  if (REFG(int, 0x1375bbc) == -1) {
    (*(int * PTR32 *)(gen_frame + 0x38)) = (int *)0x0;
  }
  else {
    (*(int * PTR32 *)(gen_frame + 0x38)) = ((int *)GEN_TOP((&REFG(undefined4, 0x1375b90))[REFG(int, 0x1375bbc)]));
  }
  F_00b6ae80((*(int * PTR32 *)(gen_frame + 0x38)),&(*(float *)(gen_frame + 0x10)));
  (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x10)) + (float10)1);
  (*(float *)(gen_frame + 0x14)) = (float)((float10)1 + (float10)(*(float *)(gen_frame + 0x14)));
  F_00b6ae50((*(int * PTR32 *)(gen_frame + 0x38)),&(*(float *)(gen_frame + 0x10)));
  uVar5 = (uint)*(ushort *)(param_1 + 2);
  pvVar4 = (undefined *)F_006b8c00();
  F_006ebf80(pvVar4,uVar5);
  piVar2 = (int *)F_00424750(REFG(int, 0x137104c));
  (*(int * PTR32 *)(gen_frame + 0x34)) = piVar2;
  uVar6 = 0x1c;
  uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
  pvVar4 = (undefined *)F_00763050(uVar5,uVar6);
  if (pvVar4 != (undefined *)0x0) {
    F_008b8590(pvVar4);
  }
  F_00a6d810(&REFG(undefined, 0x14ab380),4);
  *(byte *)((int)this + 0x30) = *(byte *)(param_1 + 0xd) & 1;
  iVar1 = REFG(int, 0x14bcc68);
  if (REFG(int, 0x14bcc68) != 0) {
    *(undefined4 *)(REFG(int, 0x14bcc68) + 0xc0) = 0;
    *(undefined2 *)(iVar1 + 0xc4) = 0;
  }
  (*(int *)(gen_frame + 0x30)) = *(undefined4 *)(REFG(int, 0x137104c) + 0x25f8);
  F_004e7f70(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f8),(float)(float10)0);
  F_004e7cc0((*(int *)(gen_frame + 0x30)),(float)(float10)0);
  *(undefined1 *)((int)this + 0x28) = 1;
  F_005f3240();
  *(undefined2 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined1 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)this = 6;
  F_00a4a760(&REFG(undefined, 0x14a7360),0x1d,1);
  *(undefined4 *)((int)this + 4) = 0;
  ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x34)) + 0x7c))((*(int * PTR32 *)(gen_frame + 0x34)),5,0,param_1);
  uVar5 = F_00a6b4f0(&REFG(undefined, 0x14ab584),0xe0000000);
  return uVar5;
}

/* ref: FUN_00ab5a60 */
uint F_00ab5a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab5a60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = REFG(undefined4, 0x1379694);
  uVar2 = F_00a7d290(0x2d7,REFG(undefined4, 0x1379694),0,0,0,REFG(float, 0x10916ec));
  if ((((param_1 == 4) || (param_1 == 7)) && (uVar2 = *(uint *)((int)this + 0x68), (int)uVar2 < 3))
     && (uVar2 != 0)) {
    F_005f3240();
    uVar2 = 0;
    *(undefined4 *)((int)this + 0x68) = 0;
    *(undefined4 *)((int)this + 0x6c) = 0;
    *(undefined1 *)((int)this + 0x70) = 0;
    *(undefined4 *)((int)this + 0x74) = 0;
    *(undefined4 *)((int)this + 0x78) = 0;
  }
  if ((char)param_2 == '\x01') {
    if ((param_1 == 3) && (piVar1 != (int *)0x0)) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,0);
      return uVar2;
    }
  }
  else {
    uVar2 = *(uint *)this;
    if (((uVar2 != 5) && (uVar2 != 6)) && (uVar2 != 1)) {
      *(int *)((int)this + 0x24) = param_1;
      *(undefined1 *)((int)this + 0x20) = 1;
      return uVar2;
    }
    uVar2 = F_00ab1390(this,param_1);
  }
  return uVar2;
}

/* ref: FUN_00ab5b10 */
uint F_00ab5b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab5b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * this_00;
  char cVar1;
  uint in_EAX = 0;
  uint uVar2;
  
  cVar1 = REFG(char, 0x14a737d);
  this_00 = REFG(undefined4, 0x1379694);
  if (*(int *)this == 1) {
    if (param_1 == 0) {
      if ((((*(int *)((int)this + 0xc) != 0) && (REFG(undefined4, 0x1379694) != (int *)0x0)) &&
          ((char)REFG(int * PTR32, 0x1379694)[0xb82] != '\0')) &&
         ((uVar2 = F_00ab1c90((uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0xc) + 0x86)))), uVar2 != 0 &&
          (*(char *)(uVar2 + 0x2e) == '\0')))) {
        F_00aab790(this_00,0,0,0,0,1);
        F_00a51200(4,0,0,0,0);
        *(undefined4 *)this = 2;
        uVar2 = F_00a4a760(&REFG(undefined, 0x14a7360),0x1d,0);
        return uVar2;
      }
      *(undefined4 *)this = 3;
      in_EAX = F_00a4a760(&REFG(undefined, 0x14a7360),0x1d,0);
    }
    else {
      if (param_1 != 1) {
        *(undefined4 *)this = 0;
        uVar2 = F_00a4a760(&REFG(undefined, 0x14a7360),0x1d,0);
        return uVar2;
      }
      in_EAX = F_00a7d290(0x2d7,REFG(undefined4, 0x1379694),0,0,0,REFG(float, 0x10916ec));
      if (cVar1 != '\x01') {
        uVar2 = *(uint *)this;
        if (((uVar2 != 5) && (uVar2 != 6)) && (uVar2 != 1)) {
          *(undefined1 *)((int)this + 0x20) = 1;
          *(undefined4 *)((int)this + 0x24) = 3;
          return uVar2;
        }
        uVar2 = F_00ab1390(this,3);
        return uVar2;
      }
      if (this_00 != (int *)0x0) {
        uVar2 = ((code *)*(gen_code32 *)(*this_00 + 0x54))(this_00,0);
        return uVar2;
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00ab5c50 */
uint F_00ab5c50(unsigned int gen_a0)
{
  GEN_ENTER(0xab5c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  piVar1 = (int *)F_00424750(REFG(int, 0x137104c));
  F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x28,(uint)REFG(undefined1, 0x14ab29e));
  this_00 = REFG(undefined4, 0x1379694);
  F_00ab4370(0x70,REFG(undefined4, 0x1379694),REFG(undefined4, 0x1379694),0,0);
  ((code *)*(gen_code32 *)(*piVar1 + 0xa8))(piVar1,0,0x1e,1);
  puVar2 = (undefined4 *)F_00a5feb0(this_00);
  *(undefined4 *)((int)this + 0x10) = *puVar2;
  *(undefined4 *)((int)this + 0x14) = puVar2[1];
  *(undefined4 *)((int)this + 0x18) = puVar2[2];
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 0x20) = 0;
  ((code *)*(gen_code32 *)(*piVar1 + 0xb4))(piVar1);
  *(undefined4 *)this = 4;
  uVar3 = F_00a4a760(&REFG(undefined, 0x14a7360),0x1d,0);
  return uVar3;
}

/* ref: FUN_00ab5cf0 */
uint F_00ab5cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab5cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  int * piVar2;
  undefined3 extraout_var = 0;
  undefined4 * puVar3;
  uint uVar4;
  
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  F_00ab4370(0x70,param_1,param_1,0,0);
  bVar1 = F_00a9f620(param_1);
  uVar4 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xa8))(piVar2,0,0x1e,1);
    puVar3 = (undefined4 *)F_00a5feb0(param_1);
    *(undefined4 *)((int)this + 0x10) = *puVar3;
    *(undefined4 *)((int)this + 0x14) = puVar3[1];
    *(undefined4 *)((int)this + 0x18) = puVar3[2];
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined1 *)((int)this + 0x20) = 0;
    ((code *)*(gen_code32 *)(*piVar2 + 0xb4))(piVar2);
    *(undefined4 *)this = 4;
    uVar4 = F_00a4a760(&REFG(undefined, 0x14a7360),0x1d,0);
  }
  return uVar4;
}

/* ref: FUN_00ab5d80 */
uint F_00ab5d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab5d80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_1 == (int *)0x0) {
    return in_EAX;
  }
  ((code *)*(gen_code32 *)(*param_1 + 0x24))(param_1,10,0);
  ((code *)*(gen_code32 *)(*param_1 + 0x24))(param_1,9,0);
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 4: ;
  case 0xe: ;
    uVar4 = 0x6e;
    break;
  default: ;
    goto switchD_00ab5dbf_caseD_5;
  case 7: ;
  case 8: ;
    uVar4 = 0x6f;
  }
  F_00ab4370(uVar4,param_1,param_1,0,0);
switchD_00ab5dbf_caseD_5: ;
  if ((param_2 == 5) || (param_2 == 8)) {
    F_00aa2c50(param_1,0,0,0);
    F_00aa4270(param_1,0x4d,0,0);
    F_00a7d290(0x230,param_1,0,0,0,REFG(float, 0x10916ec));
  }
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 3: ;
  case 9: ;
  case 10: ;
  case 0xc: ;
  case 0xd: ;
  case 0x10: ;
    bVar1 = F_00a9f620(param_1);
    if (bVar1 == 0) goto switchD_00ab5e32_caseD_4;
  default: ;
    F_00aa0980(param_1,(float)(float10)1,0);
    iVar3 = 0;
    break;
  case 4: ;
  case 5: ;
  case 7: ;
  case 8: ;
  case 0xe: ;
switchD_00ab5e32_caseD_4: ;
    F_00aa0980(param_1,(float)(float10)0,0);
    iVar3 = REFG(float, 0x1087f04);
  }
  param_1[0xbb2] = iVar3;
  bVar1 = F_00a9f620(param_1);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    F_00a696f0(&REFG(undefined, 0x14ab380));
    *(undefined4 *)this = 0;
    uVar2 = F_00a4a760(&REFG(undefined, 0x14a7360),0x1d,0);
  }
  return uVar2;
}

/* ref: FUN_00ab5ef0 */
uint F_00ab5ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab5ef0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 uVar1;
  byte bVar2;
  int * piVar3;
  undefined * this;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  piVar3 = (int *)F_00424750(REFG(int, 0x137104c));
  this = (undefined *)F_006b8c00();
  bVar2 = F_006d7160(this);
  uVar1 = (*(undefined4 *)&gen_args[1]);
  bVar7 = (*(int *)&gen_args[0]) != 0xb;
  uVar4 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x41,(*(undefined4 *)&gen_args[1]));
  if (uVar4 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(uVar4 + 4);
  }
  uVar5 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x41,*(undefined4 *)&REFG(undefined2, 0x1379c78));
  uVar4 = 0;
  if (uVar5 != 0) {
    uVar4 = *(uint *)(uVar5 + 4);
  }
  if ((((iVar6 == 0) || (uVar4 == 0)) || (*(int *)(iVar6 + 0x10) != *(int *)(uVar4 + 0x10))) &&
     (bVar7 && bVar2 != 1)) {
    iVar6 = *piVar3;
    uVar4 = F_004142d0(&(*(int *)&gen_args[0]),0xffffffff);
    uVar4 = ((code *)*(gen_code32 *)(iVar6 + 0xf4))(piVar3,uVar1,1,1,uVar4);
  }
  return uVar4;
}

/* ref: FUN_00ab5fa0 */
byte F_00ab5fa0(void)
{
  GEN_ENTER(0xab5fa0u, 0u, 0u, 0u, 0u);
  char cVar1;
  uint uVar2;
  
  uVar2 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x41,*(undefined4 *)&REFG(undefined2, 0x1379c78));
  if ((uVar2 != 0) && (*(int *)(uVar2 + 4) != 0)) {
    cVar1 = *((char *)GEN_TOP((*(int *)(uVar2 + 4) + 0x2a)));
    if (cVar1 == '\0') {
      return 1;
    }
    return cVar1 == '\x01';
  }
  return 0;
}

/* ref: FUN_00ab5fe0 */
unsigned int F_00ab5fe0(unsigned int gen_a0)
{
  GEN_ENTER(0xab5fe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if (REFG(char, 0x14a7373) != '\x01') {
    bVar2 = F_00ab1680(this,&(*(int *)(gen_frame + 0x14)),&(*(uint *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x10)),&(*(char *)(gen_frame + 0x1b)));
    if ((bVar2 == 0) || (uVar4 = (*(uint *)(gen_frame + 0xc)), uVar5 = (*(undefined4 *)(gen_frame + 0x10)), (*(int *)(gen_frame + 0x14)) == 0)) {
      uVar3 = F_00ab1340();
      (*(char *)(gen_frame + 0x1b)) = '\x01';
      if (uVar3 == 0) {
        if (1 < *(int *)((int)this + 0x68)) {
          return 0;
        }
        if (*(int *)((int)this + 0x68) == 0) {
          return 0;
        }
        F_005f3240();
        *(undefined4 *)((int)this + 0x68) = 0;
        *(undefined4 *)((int)this + 0x6c) = 0;
        *(undefined1 *)((int)this + 0x70) = 0;
        *(undefined4 *)((int)this + 0x74) = 0;
        *(undefined4 *)((int)this + 0x78) = 0;
        return 0;
      }
      uVar4 = (uint)*(ushort *)(uVar3 + 0x86);
      uVar5 = *(undefined4 *)(uVar3 + 0x8c);
    }
    uVar3 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x41,uVar4 & 0xffff);
    if (((uVar3 != 0) && (iVar1 = *(int *)(uVar3 + 4), iVar1 != 0)) && ((*(char *)(gen_frame + 0x1b)) == '\x01')) {
      F_00aaf740(this,1,(*(uint *)(iVar1 + 4) & 0xffffff) + iVar1 + 4,0x28,uVar5,uVar4 & 0xffff);
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00ab60c0 */
uint F_00ab60c0(unsigned int gen_a0)
{
  GEN_ENTER(0xab60c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  piVar2 = (int *)F_00424750(REFG(int, 0x137104c));
  ((code *)*(gen_code32 *)(*piVar2 + 0xa4))(piVar2,1,0x5a,1);
  ((code *)*(gen_code32 *)(*piVar2 + 0xa4))(piVar2,0,0x5a,1);
  ((code *)*(gen_code32 *)(*piVar2 + 0xb8))(piVar2);
  F_00a6e120(&REFG(undefined, 0x14a9e40),*(undefined4 *)&REFG(undefined2, 0x1379c78),*(undefined4 *)((int)this + 8));
  if ((*(char *)((int)this + 0x30) != '\0') && (REFG(char, 0x1379c7c) == '\x05')) {
    F_00a69c30(&REFG(undefined, 0x14a9e40));
  }
  if ((*(char *)((int)this + 0x28) != '\0') &&
     (iVar3 = (*(char *)((int)this + 0x30) != '\0') + 2, REFG(int, 0x14b4eb4) < iVar3)) {
    REFG(int, 0x14b4eb4) = iVar3;
  }
  uVar1 = *(undefined4 *)(REFG(int, 0x137104c) + 0x25f8);
  F_004e7f70(uVar1,(float)(float10)1);
  uVar4 = F_004e7cc0(uVar1,(float)(float10)1);
  return uVar4;
}

/* ref: FUN_00ab6180 */
unsigned int F_00ab6180(unsigned int gen_a0)
{
  GEN_ENTER(0xab6180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  byte bVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  this_00 = REFG(undefined4, 0x1379694);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  if (REFG(undefined4, 0x1379694) != (undefined *)0x0) {
    puVar2 = (undefined4 *)F_00a5feb0(REFG(undefined4, 0x1379694));
    (*(undefined4 *)(gen_frame + 0x0)) = *puVar2;
    uVar3 = F_00a5feb0(this_00);
    (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(uVar3 + 4);
    uVar3 = F_00a5feb0(this_00);
    (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(uVar3 + 8);
    bVar1 = F_00551a90(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25e0),(int)this + 4,&(*(undefined4 *)(gen_frame + 0x0)),2);
    *(byte *)this = bVar1;
    F_00ab1960();
  }
  return 0;
}

/* ref: FUN_00ab6210 */
unsigned int F_00ab6210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab6210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(int *)((int)this + 0x4c) < 10) {
    uVar1 = F_00ab4aa0(param_1);
    *((uint *)GEN_TOP(((int)this + *(int *)((int)this + 0x4c) * 4 + 0x24))) = uVar1;
    *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + 1;
  }
  return 0;
}

/* ref: FUN_00ab6240 */
uint F_00ab6240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab6240u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  int iVar2;
  int * piVar3;
  undefined * pvVar4;
  int * piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 * puVar9;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  if ((*(uint *)&REFG(undefined, 0x14bce14) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14bce14) = *(uint *)&REFG(undefined, 0x14bce14) | 1;
    F_0042b630(&REFG(undefined, 0x14bcdc0));
    F_00c47de6(((code *)REFP(0x107c6b0)));
  }
  if ((*(uint *)&REFG(undefined, 0x14bce14) & 2) == 0) {
    *(uint *)&REFG(undefined, 0x14bce14) = *(uint *)&REFG(undefined, 0x14bce14) | 2;
    F_0042b630(&REFG(undefined4, 0x14bcd68));
    F_00c47de6(((code *)REFP(0x107c6a0)));
  }
  if ((*(uint *)&REFG(undefined, 0x14bce14) & 4) == 0) {
    *(uint *)&REFG(undefined, 0x14bce14) = *(uint *)&REFG(undefined, 0x14bce14) | 4;
    F_0042b630(&REFG(undefined4, 0x14bcd10));
    F_00c47de6(((code *)REFP(0x107c690)));
  }
  iVar2 = param_3;
  if (param_3 == 0) {
    uVar1 = param_1;
    if (999999 < param_1) {
      uVar1 = param_1 - 1000000;
    }
    if (uVar1 < 0x18cf) {
      uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),9,uVar1);
      iVar2 = 0;
      if (uVar1 != 0) {
        iVar2 = *(int *)(uVar1 + 4);
      }
      if (iVar2 != 0) goto LAB_00ab631a;
    }
    F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
    return 0;
  }
LAB_00ab631a: ;
  piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)(REFG(int, 0x137104c) + 0x25d8) + 0x10)));
  uVar1 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3);
  if ((((char)param_2 == '\0') && (uVar1 != 1)) && (uVar1 != 5)) {
    piVar3 = (int *)F_00424750(REFG(int, 0x137104c));
    if (piVar3 != (int *)0x0) {
      F_0042e430(&REFG(undefined, 0x14bcdc0),(*(uint *)(iVar2 + 0xc) & 0xffffff) + iVar2 + 0xc);
      if (999999 < param_1) {
        if (*REFG(int * PTR32, 0x14bcd68) == '\0') {
          uVar8 = 0;
          uVar7 = 0;
          uVar6 = 9;
          pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3)));
          uVar1 = F_0043bd00(pvVar4,uVar6,uVar7,uVar8);
          F_0042e430(&REFG(undefined4, 0x14bcd68),uVar1);
        }
        F_0042e360(&REFG(undefined, 0x14bcdc0),&REFG(undefined4, 0x14bcd68));
      }
      if (*REFG(int * PTR32, 0x14bcd10) == '\0') {
        piVar5 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3)));
        uVar1 = ((code *)*(gen_code32 *)(*piVar5 + 0x20))(piVar5,((undefined1 *)(gen_frame + 0xb4)),"<color(stackcolor)>");
        F_0042ccf0(&REFG(undefined4, 0x14bcd10),uVar1);
        F_0042c880(((undefined1 *)(gen_frame + 0xb4)));
      }
      uVar1 = (uint)*(byte *)(iVar2 + 0xa3);
      uVar6 = 6;
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3)));
      uVar1 = F_00460bd0(pvVar4,uVar6,uVar1);
      if (uVar1 != 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0xb4)),uVar1,REFG(undefined4, 0x108cc50));
        puVar9 = &REFG(undefined4, 0x14bcd10);
        uVar1 = F_0046e280(((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0xb4)),&REFG(undefined, 0x14bcdc0));
        uVar1 = F_0046e280(((undefined1 *)(gen_frame + 0x60)),uVar1,puVar9);
        F_0042ccf0(&REFG(undefined, 0x14bcdc0),uVar1);
        F_0042c880(((undefined1 *)(gen_frame + 0x60)));
        F_0042c880(((undefined1 *)(gen_frame + 0xc)));
        F_0042c880(((undefined1 *)(gen_frame + 0xb4)));
        uVar1 = F_0042a990(&REFG(undefined, 0x14bcdc0));
        F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
        return uVar1;
      }
    }
  }
  else {
    uVar1 = F_00463610(1,param_1,0);
    F_0042e430(&REFG(undefined, 0x14bcdc0),uVar1);
  }
  uVar1 = F_0042a990(&REFG(undefined, 0x14bcdc0));
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar1;
}

/* ref: FUN_00ab64e0 */
uint F_00ab64e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab64e0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  if ((*(uint *)&REFG(undefined, 0x14bce6c) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14bce6c) = *(uint *)&REFG(undefined, 0x14bce6c) | 1;
    F_0042b630(&REFG(undefined, 0x14bce18));
    F_00c47de6(((code *)REFP(0x107c6c0)));
  }
  iVar3 = param_3;
  if (param_3 == 0) {
    uVar2 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x52,param_1 + -2000000);
    iVar3 = 0;
    if (uVar2 != 0) {
      iVar3 = *(int *)(uVar2 + 4);
    }
    if (iVar3 == 0) {
      return 0;
    }
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(REFG(int, 0x137104c) + 0x25d8) + 0x10)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
  if ((((char)param_2 == '\0') && (uVar2 != 1)) && (uVar2 != 5)) {
    uVar2 = (*(uint *)(iVar3 + 0xc) & 0xffffff) + iVar3 + 0xc;
  }
  else {
    uVar2 = F_00463610(1,param_1,0);
  }
  F_0042e430(&REFG(undefined, 0x14bce18),uVar2);
  uVar2 = F_0042a990(&REFG(undefined, 0x14bce18));
  return uVar2;
}

/* ref: FUN_00ab65a0 */
uint F_00ab65a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab65a0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  
  iVar2 = param_2;
  if (param_2 == 0) {
    uVar1 = param_1;
    if (999999 < param_1) {
      uVar1 = param_1 - 1000000;
    }
    if (uVar1 < 0x18cf) {
      uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),9,uVar1);
      iVar2 = 0;
      if (uVar1 != 0) {
        iVar2 = *(int *)(uVar1 + 4);
      }
      if (iVar2 != 0) goto LAB_00ab65e4;
    }
    uVar1 = 0;
  }
  else {
LAB_00ab65e4: ;
    uVar1 = (uint)*(ushort *)(iVar2 + 0x7c);
    if (999999 < param_1) {
      return uVar1 + 1000000;
    }
  }
  return uVar1;
}

/* ref: FUN_00ab6600 */
byte F_00ab6600(unsigned int gen_a0)
{
  GEN_ENTER(0xab6600u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = F_00530100(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x139);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      uVar2 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x138,uVar3);
      if (((uVar2 != 0) && (*(ushort * PTR32 *)(uVar2 + 4) != (ushort *)0x0)) &&
         (**(ushort * PTR32 *)(uVar2 + 4) == param_1)) {
        return (byte)uVar3;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return 0;
}

/* ref: FUN_00ab6670 */
unsigned int F_00ab6670(unsigned int gen_a0)
{
  GEN_ENTER(0xab6670u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int iVar1;
  
  if ((REFG(int, 0x14bcc68) != 0) && (7 < *(uint *)(REFG(int, 0x14bcc68) + 8))) {
    iVar1 = *(int *)(REFG(int, 0x14bcc68) + 0xa0);
    *(undefined1 *)(iVar1 + 0x25c) = 0;
    *(undefined2 *)(iVar1 + 0x240) = (undefined2)param_1;
    *(undefined1 *)(iVar1 + 0x246) = 0;
    *(undefined4 *)(iVar1 + 0x248) = 0;
    *(undefined4 *)(iVar1 + 0x260) = 0;
    *(undefined4 *)(iVar1 + 0x264) = 0;
    *(undefined4 *)(iVar1 + 0x268) = 0;
    *(undefined4 *)(iVar1 + 0x270) = 0;
    *(undefined4 *)(iVar1 + 0x274) = 0;
    if (*(char *)(iVar1 + 0x25c) != '\0') {
      *(undefined4 *)(iVar1 + 0x260) = 0;
      *(undefined4 *)(iVar1 + 0x264) = 0;
      *(undefined4 *)(iVar1 + 0x268) = 0;
      *(undefined4 *)(iVar1 + 0x270) = 0;
      *(undefined4 *)(iVar1 + 0x274) = 0;
    }
  }
  return 0;
}

/* ref: FUN_00ab6700 */
unsigned int F_00ab6700(void)
{
  GEN_ENTER(0xab6700u, 0u, 0u, 0u, 0u);
  int iVar1;
  
  if (((REFG(int, 0x14bcc68) != 0) && (7 < *(uint *)(REFG(int, 0x14bcc68) + 8))) &&
     (iVar1 = *(int *)(REFG(int, 0x14bcc68) + 0xa0), *(int *)(iVar1 + 0x278) != 1)) {
    *(undefined4 *)(iVar1 + 0x23c) = 0;
    *(undefined1 *)(iVar1 + 0x246) = 0;
    *(undefined4 *)(iVar1 + 0x248) = 0;
    *(undefined1 *)(iVar1 + 0x25c) = 0;
    *(undefined4 *)(iVar1 + 0x278) = 0;
    *(undefined2 *)(iVar1 + 0x240) = 0;
    *(undefined2 *)(iVar1 + 0x242) = 0;
    *(undefined4 *)(iVar1 + 0x260) = 0;
    *(undefined4 *)(iVar1 + 0x264) = 0;
    *(undefined4 *)(iVar1 + 0x268) = 0;
    *(undefined4 *)(iVar1 + 0x270) = 0;
    *(undefined4 *)(iVar1 + 0x274) = 0;
  }
  return 0;
}

/* ref: FUN_00ab6780 */
unsigned int F_00ab6780(unsigned int gen_a0)
{
  GEN_ENTER(0xab6780u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int iVar1;
  
  if ((REFG(int, 0x14bcc68) != 0) && (6 < *(uint *)(REFG(int, 0x14bcc68) + 8))) {
    iVar1 = *(int *)(REFG(int, 0x14bcc68) + 0xa0);
    *(undefined1 *)(iVar1 + 0x20c) = 0;
    *(undefined2 *)(iVar1 + 0x1f0) = (undefined2)param_1;
    *(undefined1 *)(iVar1 + 0x1f6) = 0;
    *(undefined4 *)(iVar1 + 0x1f8) = 0;
    *(undefined4 *)(iVar1 + 0x210) = 0;
    *(undefined4 *)(iVar1 + 0x214) = 0;
    *(undefined4 *)(iVar1 + 0x218) = 0;
    *(undefined4 *)(iVar1 + 0x220) = 0;
    *(undefined4 *)(iVar1 + 0x224) = 0;
    if (*(char *)(iVar1 + 0x20c) != '\0') {
      *(undefined4 *)(iVar1 + 0x210) = 0;
      *(undefined4 *)(iVar1 + 0x214) = 0;
      *(undefined4 *)(iVar1 + 0x218) = 0;
      *(undefined4 *)(iVar1 + 0x220) = 0;
      *(undefined4 *)(iVar1 + 0x224) = 0;
    }
  }
  return 0;
}

/* ref: FUN_00ab6810 */
unsigned int F_00ab6810(void)
{
  GEN_ENTER(0xab6810u, 0u, 0u, 0u, 0u);
  int iVar1;
  
  if (((REFG(int, 0x14bcc68) != 0) && (6 < *(uint *)(REFG(int, 0x14bcc68) + 8))) &&
     (iVar1 = *(int *)(REFG(int, 0x14bcc68) + 0xa0), *(int *)(iVar1 + 0x228) != 1)) {
    *(undefined4 *)(iVar1 + 0x1ec) = 0;
    *(undefined1 *)(iVar1 + 0x1f6) = 0;
    *(undefined4 *)(iVar1 + 0x1f8) = 0;
    *(undefined1 *)(iVar1 + 0x20c) = 0;
    *(undefined4 *)(iVar1 + 0x228) = 0;
    *(undefined2 *)(iVar1 + 0x1f0) = 0;
    *(undefined2 *)(iVar1 + 0x1f2) = 0;
    *(undefined4 *)(iVar1 + 0x210) = 0;
    *(undefined4 *)(iVar1 + 0x214) = 0;
    *(undefined4 *)(iVar1 + 0x218) = 0;
    *(undefined4 *)(iVar1 + 0x220) = 0;
    *(undefined4 *)(iVar1 + 0x224) = 0;
  }
  return 0;
}

/* ref: FUN_00ab6890 */
unsigned int F_00ab6890(unsigned int gen_a0)
{
  GEN_ENTER(0xab6890u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int iVar1;
  
  if ((REFG(int, 0x14bcc68) != 0) && (3 < *(uint *)(REFG(int, 0x14bcc68) + 8))) {
    iVar1 = *(int *)(REFG(int, 0x14bcc68) + 0xa0);
    *(undefined1 *)(iVar1 + 0x11c) = 0;
    *(undefined2 *)(iVar1 + 0x100) = (undefined2)param_1;
    *(undefined1 *)(iVar1 + 0x106) = 0;
    *(undefined4 *)(iVar1 + 0x108) = 0;
    *(undefined4 *)(iVar1 + 0x120) = 0;
    *(undefined4 *)(iVar1 + 0x124) = 0;
    *(undefined4 *)(iVar1 + 0x128) = 0;
    *(undefined4 *)(iVar1 + 0x130) = 0;
    *(undefined4 *)(iVar1 + 0x134) = 0;
    if (*(char *)(iVar1 + 0x11c) != '\0') {
      *(undefined4 *)(iVar1 + 0x120) = 0;
      *(undefined4 *)(iVar1 + 0x124) = 0;
      *(undefined4 *)(iVar1 + 0x128) = 0;
      *(undefined4 *)(iVar1 + 0x130) = 0;
      *(undefined4 *)(iVar1 + 0x134) = 0;
    }
  }
  return 0;
}

/* ref: FUN_00ab6920 */
unsigned int F_00ab6920(void)
{
  GEN_ENTER(0xab6920u, 0u, 0u, 0u, 0u);
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = REFG(int, 0x14bcc68);
  uVar2 = REFG(float, 0x10a509c);
  if (REFG(int, 0x14bcc68) != 0) {
    *(undefined4 *)(REFG(int, 0x14bcc68) + 0xb8) = 0;
    *(undefined4 *)(iVar1 + 0xbc) = uVar2;
    *(undefined1 *)(iVar1 + 0xb4) = 0;
    if (((REFG(int, 0x14bcc68) != 0) && (3 < *(uint *)(REFG(int, 0x14bcc68) + 8))) &&
       (iVar1 = *(int *)(REFG(int, 0x14bcc68) + 0xa0), *(int *)(iVar1 + 0x138) != 1)) {
      *(undefined4 *)(iVar1 + 0xfc) = 0;
      *(undefined1 *)(iVar1 + 0x106) = 0;
      *(undefined4 *)(iVar1 + 0x108) = 0;
      *(undefined1 *)(iVar1 + 0x11c) = 0;
      *(undefined4 *)(iVar1 + 0x138) = 0;
      *(undefined2 *)(iVar1 + 0x100) = 0;
      *(undefined2 *)(iVar1 + 0x102) = 0;
      *(undefined4 *)(iVar1 + 0x120) = 0;
      *(undefined4 *)(iVar1 + 0x124) = 0;
      *(undefined4 *)(iVar1 + 0x128) = 0;
      *(undefined4 *)(iVar1 + 0x130) = 0;
      *(undefined4 *)(iVar1 + 0x134) = 0;
    }
  }
  return 0;
}

/* ref: FUN_00ab69c0 */
uint F_00ab69c0(unsigned int gen_a0)
{
  GEN_ENTER(0xab69c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  if ((REFG(undefined4, 0x14bcc68) != 0) && (4 < *(uint *)(REFG(undefined4, 0x14bcc68) + 8))) {
    uVar1 = *(uint *)(REFG(undefined4, 0x14bcc68) + 0xa0);
    *(undefined1 *)(uVar1 + 0x16c) = 0;
    *(undefined2 *)(uVar1 + 0x150) = (undefined2)param_1;
    *(undefined1 *)(uVar1 + 0x156) = 0;
    *(undefined4 *)(uVar1 + 0x158) = 0;
    *(undefined4 *)(uVar1 + 0x170) = 0;
    *(undefined4 *)(uVar1 + 0x174) = 0;
    *(undefined4 *)(uVar1 + 0x178) = 0;
    *(undefined4 *)(uVar1 + 0x180) = 0;
    *(undefined4 *)(uVar1 + 0x184) = 0;
    if (*(char *)(uVar1 + 0x16c) != '\0') {
      *(undefined4 *)(uVar1 + 0x170) = 0;
      *(undefined4 *)(uVar1 + 0x174) = 0;
      *(undefined4 *)(uVar1 + 0x178) = 0;
      *(undefined4 *)(uVar1 + 0x180) = 0;
      *(undefined4 *)(uVar1 + 0x184) = 0;
    }
  }
  return uVar1;
}

/* ref: FUN_00ab6a50 */
uint F_00ab6a50(unsigned int gen_a0)
{
  GEN_ENTER(0xab6a50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  if (((REFG(undefined4, 0x14bcc68) != 0) && (4 < *(uint *)(REFG(undefined4, 0x14bcc68) + 8))) &&
     (uVar1 = *(uint *)(REFG(undefined4, 0x14bcc68) + 0xa0), *(int *)(uVar1 + 0x188) != 1)) {
    *(undefined4 *)(uVar1 + 0x14c) = 0;
    *(undefined1 *)(uVar1 + 0x156) = 0;
    *(undefined4 *)(uVar1 + 0x158) = 0;
    *(undefined1 *)(uVar1 + 0x16c) = 0;
    *(undefined4 *)(uVar1 + 0x188) = 0;
    *(undefined2 *)(uVar1 + 0x150) = 0;
    *(undefined2 *)(uVar1 + 0x152) = 0;
    *(undefined4 *)(uVar1 + 0x170) = 0;
    *(undefined4 *)(uVar1 + 0x174) = 0;
    *(undefined4 *)(uVar1 + 0x178) = 0;
    *(undefined4 *)(uVar1 + 0x180) = 0;
    *(undefined4 *)(uVar1 + 0x184) = 0;
  }
  return uVar1;
}

/* ref: FUN_00ab6ad0 */
uint F_00ab6ad0(unsigned int gen_a0)
{
  GEN_ENTER(0xab6ad0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  if ((REFG(undefined4, 0x14bcc68) != 0) && (2 < *(uint *)(REFG(undefined4, 0x14bcc68) + 8))) {
    uVar1 = *(uint *)(REFG(undefined4, 0x14bcc68) + 0xa0);
    *(undefined1 *)(uVar1 + 0xcc) = 0;
    *(undefined2 *)(uVar1 + 0xb0) = (undefined2)param_1;
    *(undefined1 *)(uVar1 + 0xb6) = 0;
    *(undefined4 *)(uVar1 + 0xb8) = 0;
    *(undefined4 *)(uVar1 + 0xd0) = 0;
    *(undefined4 *)(uVar1 + 0xd4) = 0;
    *(undefined4 *)(uVar1 + 0xd8) = 0;
    *(undefined4 *)(uVar1 + 0xe0) = 0;
    *(undefined4 *)(uVar1 + 0xe4) = 0;
    if (*(char *)(uVar1 + 0xcc) != '\0') {
      *(undefined4 *)(uVar1 + 0xd0) = 0;
      *(undefined4 *)(uVar1 + 0xd4) = 0;
      *(undefined4 *)(uVar1 + 0xd8) = 0;
      *(undefined4 *)(uVar1 + 0xe0) = 0;
      *(undefined4 *)(uVar1 + 0xe4) = 0;
    }
  }
  return uVar1;
}

/* ref: FUN_00ab6b60 */
unsigned int F_00ab6b60(void)
{
  GEN_ENTER(0xab6b60u, 0u, 0u, 0u, 0u);
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = REFG(int, 0x14bcc68);
  uVar2 = REFG(float, 0x10a509c);
  if (REFG(int, 0x14bcc68) != 0) {
    *(undefined4 *)(REFG(int, 0x14bcc68) + 0xb8) = 0;
    *(undefined4 *)(iVar1 + 0xbc) = uVar2;
    *(undefined1 *)(iVar1 + 0xb4) = 0;
    if (((REFG(int, 0x14bcc68) != 0) && (2 < *(uint *)(REFG(int, 0x14bcc68) + 8))) &&
       (iVar1 = *(int *)(REFG(int, 0x14bcc68) + 0xa0), *(int *)(iVar1 + 0xe8) != 1)) {
      *(undefined4 *)(iVar1 + 0xac) = 0;
      *(undefined1 *)(iVar1 + 0xb6) = 0;
      *(undefined4 *)(iVar1 + 0xb8) = 0;
      *(undefined1 *)(iVar1 + 0xcc) = 0;
      *(undefined4 *)(iVar1 + 0xe8) = 0;
      *(undefined2 *)(iVar1 + 0xb0) = 0;
      *(undefined2 *)(iVar1 + 0xb2) = 0;
      *(undefined4 *)(iVar1 + 0xd0) = 0;
      *(undefined4 *)(iVar1 + 0xd4) = 0;
      *(undefined4 *)(iVar1 + 0xd8) = 0;
      *(undefined4 *)(iVar1 + 0xe0) = 0;
      *(undefined4 *)(iVar1 + 0xe4) = 0;
    }
  }
  return 0;
}

/* ref: FUN_00ab6c00 */
uint F_00ab6c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xab6c00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  uint uVar2;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  uVar2 = REFG(undefined4, 0x14bcc68);
  if ((REFG(undefined4, 0x14bcc68) != 0) && (1 < *(uint *)(REFG(undefined4, 0x14bcc68) + 8))) {
    uVar2 = *(uint *)(REFG(undefined4, 0x14bcc68) + 0xa0);
    *(undefined1 *)(uVar2 + 0x66) = (undefined1)param_6;
    *(undefined1 *)(uVar2 + 0x7c) = (undefined1)param_2;
    *(undefined4 *)(uVar2 + 0x68) = 0;
    *(undefined2 *)(uVar2 + 0x60) = (undefined2)param_1;
    *(undefined4 *)(uVar2 + 0x80) = 0;
    *(undefined4 *)(uVar2 + 0x84) = 0;
    *(undefined4 *)(uVar2 + 0x88) = 0;
    *(undefined4 *)(uVar2 + 0x90) = 0;
    *(undefined4 *)(uVar2 + 0x94) = 0;
    if (*(char *)(uVar2 + 0x7c) != '\0') {
      *(undefined4 *)(uVar2 + 0x80) = param_3;
      *(undefined4 *)(uVar2 + 0x84) = param_4;
      *(undefined4 *)(uVar2 + 0x88) = param_5;
      *(undefined4 *)(uVar2 + 0x90) = 0;
      *(undefined4 *)(uVar2 + 0x94) = 0;
    }
    *(undefined1 *)(uVar1 + 0xc5) = 1;
  }
  return uVar2;
}

/* ref: FUN_00ab6ca0 */
unsigned int F_00ab6ca0(void)
{
  GEN_ENTER(0xab6ca0u, 0u, 0u, 0u, 0u);
  int iVar1;
  
  if (((REFG(int, 0x14bcc68) != 0) && (1 < *(uint *)(REFG(int, 0x14bcc68) + 8))) &&
     (iVar1 = *(int *)(REFG(int, 0x14bcc68) + 0xa0), *(int *)(iVar1 + 0x98) != 1)) {
    *(undefined4 *)(iVar1 + 0x5c) = 0;
    *(undefined1 *)(iVar1 + 0x66) = 0;
    *(undefined4 *)(iVar1 + 0x68) = 0;
    *(undefined1 *)(iVar1 + 0x7c) = 0;
    *(undefined4 *)(iVar1 + 0x98) = 0;
    *(undefined2 *)(iVar1 + 0x60) = 0;
    *(undefined2 *)(iVar1 + 0x62) = 0;
    *(undefined4 *)(iVar1 + 0x80) = 0;
    *(undefined4 *)(iVar1 + 0x84) = 0;
    *(undefined4 *)(iVar1 + 0x88) = 0;
    *(undefined4 *)(iVar1 + 0x90) = 0;
    *(undefined4 *)(iVar1 + 0x94) = 0;
  }
  return 0;
}

/* ref: FUN_00ab6d10 */
uint F_00ab6d10(void)
{
  GEN_ENTER(0xab6d10u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  if ((REFG(undefined4, 0x14bcc68) != 0) && (1 < *(uint *)(REFG(undefined4, 0x14bcc68) + 8))) {
    uVar1 = *(uint *)(REFG(undefined4, 0x14bcc68) + 0xa0);
    *(undefined4 *)(uVar1 + 0x98) = 0;
  }
  return uVar1;
}

/* ref: FUN_00ab6d30 */
uint F_00ab6d30(void)
{
  GEN_ENTER(0xab6d30u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  if ((REFG(undefined4, 0x14bcc68) != 0) && (1 < *(uint *)(REFG(undefined4, 0x14bcc68) + 8))) {
    uVar1 = *(uint *)(REFG(undefined4, 0x14bcc68) + 0xa0);
    *(undefined4 *)(uVar1 + 0x98) = 1;
  }
  return uVar1;
}

/* ref: FUN_00ab6d50 */
uint F_00ab6d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xab6d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  uint uVar2;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  uVar2 = REFG(undefined4, 0x14bcc68);
  if ((REFG(undefined4, 0x14bcc68) != 0) && (*(int *)(REFG(undefined4, 0x14bcc68) + 8) != 0)) {
    uVar2 = *(uint *)(REFG(undefined4, 0x14bcc68) + 0xa0);
    *(undefined2 *)(uVar2 + 0x10) = (undefined2)param_1;
    *(undefined1 *)(uVar2 + 0x16) = (undefined1)param_6;
    *(undefined1 *)(uVar2 + 0x2c) = (undefined1)param_2;
    *(undefined4 *)(uVar2 + 0x18) = 0;
    *(undefined4 *)(uVar2 + 0x30) = 0;
    *(undefined4 *)(uVar2 + 0x34) = 0;
    *(undefined4 *)(uVar2 + 0x38) = 0;
    *(undefined4 *)(uVar2 + 0x40) = 0;
    *(undefined4 *)(uVar2 + 0x44) = 0;
    if (*(char *)(uVar2 + 0x2c) != '\0') {
      *(undefined4 *)(uVar2 + 0x30) = param_3;
      *(undefined4 *)(uVar2 + 0x34) = param_4;
      *(undefined4 *)(uVar2 + 0x38) = param_5;
      *(undefined4 *)(uVar2 + 0x40) = 0;
      *(undefined4 *)(uVar2 + 0x44) = 0;
    }
    *(undefined1 *)(uVar1 + 0xc5) = 1;
  }
  return uVar2;
}

/* ref: FUN_00ab6dc0 */
uint F_00ab6dc0(void)
{
  GEN_ENTER(0xab6dc0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  if (((REFG(undefined4, 0x14bcc68) != 0) && (*(int *)(REFG(undefined4, 0x14bcc68) + 8) != 0)) &&
     (uVar1 = *(uint *)(REFG(undefined4, 0x14bcc68) + 0xa0), *(int *)(uVar1 + 0x48) != 1)) {
    *(undefined4 *)(uVar1 + 0xc) = 0;
    *(undefined1 *)(uVar1 + 0x16) = 0;
    *(undefined4 *)(uVar1 + 0x18) = 0;
    *(undefined1 *)(uVar1 + 0x2c) = 0;
    *(undefined4 *)(uVar1 + 0x48) = 0;
    *(undefined2 *)(uVar1 + 0x10) = 0;
    *(undefined2 *)(uVar1 + 0x12) = 0;
    *(undefined4 *)(uVar1 + 0x30) = 0;
    *(undefined4 *)(uVar1 + 0x34) = 0;
    *(undefined4 *)(uVar1 + 0x38) = 0;
    *(undefined4 *)(uVar1 + 0x40) = 0;
    *(undefined4 *)(uVar1 + 0x44) = 0;
  }
  return uVar1;
}

/* ref: FUN_00ab6e10 */
uint F_00ab6e10(void)
{
  GEN_ENTER(0xab6e10u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  if ((REFG(undefined4, 0x14bcc68) != 0) && (*(int *)(REFG(undefined4, 0x14bcc68) + 8) != 0)) {
    uVar1 = *(uint *)(REFG(undefined4, 0x14bcc68) + 0xa0);
    *(undefined4 *)(uVar1 + 0x48) = 0;
  }
  return uVar1;
}

/* ref: FUN_00ab6e30 */
uint F_00ab6e30(void)
{
  GEN_ENTER(0xab6e30u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14bcc68);
  if ((REFG(undefined4, 0x14bcc68) != 0) && (*(int *)(REFG(undefined4, 0x14bcc68) + 8) != 0)) {
    uVar1 = *(uint *)(REFG(undefined4, 0x14bcc68) + 0xa0);
    *(undefined4 *)(uVar1 + 0x48) = 1;
  }
  return uVar1;
}

/* ref: FUN_00ab70d0 */
byte F_00ab70d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab70d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  short * psVar1;
  
  psVar1 = *(short * PTR32 *)((int)this + 0x1c);
  while( true ) {
    if (psVar1 == *(short * PTR32 *)((int)this + 0x20)) {
      return 0;
    }
    if (*psVar1 == (short)param_1) break;
    psVar1 = psVar1 + 8;
  }
  return 1;
}

/* ref: FUN_00ab7100 */
unsigned int F_00ab7100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab7100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  short * psVar1;
  
  psVar1 = *(short * PTR32 *)((int)this + 0x1c);
  if (psVar1 != *(short * PTR32 *)((int)this + 0x20)) {
    do {
      if (*psVar1 == (short)param_1) {
        *(undefined1 *)(psVar1 + 6) = 1;
      }
      psVar1 = psVar1 + 8;
    } while (psVar1 != *(short * PTR32 *)((int)this + 0x20));
  }
  return 0;
}

/* ref: FUN_00ab7140 */
byte F_00ab7140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xab7140u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  byte bVar4;
  float * pfVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  short * psVar11;
  undefined4 * puVar12;
  byte bVar13;
  int * piVar14;
  
  if ((short)(*(uint *)&gen_args[1]) == 1) {
    puVar12 = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)));
    (*(int *)(gen_frame + 0x14)) = 2;
    do {
      if (puVar12[-9] - 1 < 4) {
        if ((*(undefined4 * PTR32 *)&gen_args[5]) == (undefined4 *)0x0) {
          (*(undefined4 *)(gen_frame + 0x10)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x10)), 1, 3),*(undefined1 *)(puVar12 + -6));
          pfVar5 = (float *)F_00ab4fc0((*(undefined * PTR32 *)&gen_args[0]),puVar12[-7],(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
          if (pfVar5 == (float *)0x0) {
            uVar6 = 0;
          }
          else {
            (*(uint *)(gen_frame + 0x8)) = (uint)(longlong)TRUNC((double)*pfVar5 * *(double *)&REFG(undefined, 0x10912a8));
            uVar6 = (*(uint *)(gen_frame + 0x8));
          }
        }
        else {
          uVar6 = *(*(undefined4 * PTR32 *)&gen_args[5]);
        }
        puVar12[-9] = 5;
        *(undefined1 *)(puVar12 + -3) = (undefined1)(*(uint *)&gen_args[4]);
        puVar12[-2] = uVar6;
        puVar12[-1] = 0;
        *puVar12 = 0;
        puVar12[2] = 0;
        puVar12[3] = 0;
      }
      puVar12 = puVar12 + 0x10;
      (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + -1;
    } while ((*(int *)(gen_frame + 0x14)) != 0);
    return 1;
  }
  iVar7 = 0;
  psVar11 = ((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
  do {
    if ((*(int *)(psVar11 + -2) - 1U < 4) && (*psVar11 == (short)(*(uint *)&gen_args[1]))) {
      *((undefined1 *)GEN_TOP((iVar7 * 0x40 + 0x18 + (int)(*(undefined * PTR32 *)&gen_args[0])))) = (undefined1)(*(undefined4 *)&gen_args[3]);
      return 1;
    }
    iVar7 = iVar7 + 1;
    psVar11 = psVar11 + 0x20;
  } while (iVar7 < 2);
  bVar2 = false;
  iVar7 = 0;
  piVar14 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c)));
  do {
    if ((short)piVar14[-3] == (short)(*(uint *)&gen_args[1])) {
      switch((unsigned int)(uintptr_t)(piVar14[-4])) {
      case 1: ;
      case 7: ;
switchD_00ab722e_caseD_1: ;
        (*(byte *)(gen_frame + 0x1b)) = (byte)iVar7;
        bVar2 = true;
        goto LAB_00ab728c;
      case 5: ;
      case 6: ;
        if ((*piVar14 != 0) &&
           (uVar6 = ((code *)*(gen_code32 *)(*(int *)*piVar14 + 0x7c))((int *)*piVar14), (char)uVar6 != '\0'))
        goto switchD_00ab722e_caseD_1;
      }
    }
    iVar7 = iVar7 + 1;
    piVar14 = piVar14 + 0x10;
  } while (iVar7 < 2);
  iVar7 = 0;
  puVar12 = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
  do {
    switch((unsigned int)(uintptr_t)(*puVar12)) {
    case 0: ;
    case 2: ;
    case 3: ;
    case 7: ;
      (*(byte *)(gen_frame + 0x1b)) = (byte)iVar7;
LAB_00ab728c: ;
      uVar6 = (uint)(*(byte *)(gen_frame + 0x1b));
      iVar7 = uVar6 * 0x40;
      if (bVar2) {
        *((undefined4 *)GEN_TOP((iVar7 + 0xc + (int)(*(undefined * PTR32 *)&gen_args[0])))) = 1;
      }
      else {
        piVar14 = *((int * PTR32 *)GEN_TOP((iVar7 + 0x1c + (int)(*(undefined * PTR32 *)&gen_args[0]))));
        if (piVar14 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar14 + 0x50))(piVar14,0);
          piVar14 = *((int * PTR32 *)GEN_TOP((iVar7 + 0x1c + (int)(*(undefined * PTR32 *)&gen_args[0]))));
          ((code *)*(gen_code32 *)(*piVar14 + 0x78))(piVar14,500);
          *((undefined4 *)GEN_TOP((iVar7 + 0x1c + (int)(*(undefined * PTR32 *)&gen_args[0])))) = 0;
        }
        *((undefined4 *)GEN_TOP((iVar7 + 0x40 + (int)(*(undefined * PTR32 *)&gen_args[0])))) = 0;
        uVar3 = REFG(float, 0x1087f04);
        *((undefined4 *)GEN_TOP((iVar7 + 0x20 + (int)(*(undefined * PTR32 *)&gen_args[0])))) = 0;
        *((undefined2 *)GEN_TOP((iVar7 + 0x24 + (int)(*(undefined * PTR32 *)&gen_args[0])))) = 0;
        *((undefined4 *)GEN_TOP((iVar7 + 0x44 + (int)(*(undefined * PTR32 *)&gen_args[0])))) = uVar3;
        *((undefined4 *)GEN_TOP((iVar7 + 0x28 + (int)(*(undefined * PTR32 *)&gen_args[0])))) = 0;
        *((undefined4 *)GEN_TOP((iVar7 + 0x2c + (int)(*(undefined * PTR32 *)&gen_args[0])))) = 0;
        *((undefined4 *)GEN_TOP((iVar7 + 0x30 + (int)(*(undefined * PTR32 *)&gen_args[0])))) = 0;
        *((undefined4 *)GEN_TOP((iVar7 + 0x38 + (int)(*(undefined * PTR32 *)&gen_args[0])))) = 0;
        *((undefined4 *)GEN_TOP((iVar7 + 0x3c + (int)(*(undefined * PTR32 *)&gen_args[0])))) = 0;
        *((short *)GEN_TOP((iVar7 + 0x10 + (int)(*(undefined * PTR32 *)&gen_args[0])))) = (short)(*(uint *)&gen_args[1]);
        *((undefined4 *)GEN_TOP((iVar7 + 0xc + (int)(*(undefined * PTR32 *)&gen_args[0])))) = 2;
        *((undefined4 *)GEN_TOP((iVar7 + 0x14 + (int)(*(undefined * PTR32 *)&gen_args[0])))) = (*(undefined4 *)&gen_args[2]);
        *((undefined1 *)GEN_TOP((iVar7 + 0x18 + (int)(*(undefined * PTR32 *)&gen_args[0])))) = (undefined1)(*(undefined4 *)&gen_args[3]);
      }
      if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar6 * -0x40 + 0x4c))) - 1U < 4) {
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar6 * -0x40 + 0x4c))) = 5;
        *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar6 * -0x40 + 100))) = (undefined1)(*(uint *)&gen_args[4]);
      }
      if ((*(undefined4 * PTR32 *)&gen_args[5]) == (undefined4 *)0x0) {
        (*(uint *)&gen_args[4]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[4]), 1, 3),*((undefined1 *)GEN_TOP((iVar7 + 0x18 + (int)(*(undefined * PTR32 *)&gen_args[0])))));
        (*(uint *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[1]), 1, 3),*((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar6 * -0x40 + 0x58))));
        pfVar5 = (float *)F_00ab4fc0((*(undefined * PTR32 *)&gen_args[0]),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar6 * -0x40 + 0x54))),
                                       (*(uint *)&gen_args[1]),*((undefined4 *)GEN_TOP((iVar7 + 0x14 + (int)(*(undefined * PTR32 *)&gen_args[0])))),(*(uint *)&gen_args[4]));
        (*(uint *)(gen_frame + 0x8)) = (uint)(longlong)TRUNC((double)*pfVar5 * *(double *)&REFG(undefined, 0x10912a8));
        uVar8 = (*(uint *)(gen_frame + 0x8));
        if (*((int *)GEN_TOP((iVar7 + 0xc + (int)(*(undefined * PTR32 *)&gen_args[0])))) == 1) {
          (*(uint *)(gen_frame + 0x8)) = (uint)(longlong)TRUNC((double)pfVar5[3] * *(double *)&REFG(undefined, 0x10912a8));
          uVar9 = (*(uint *)(gen_frame + 0x8));
        }
        else {
          (*(uint *)(gen_frame + 0x8)) = (uint)(longlong)TRUNC((double)pfVar5[1] * *(double *)&REFG(undefined, 0x10912a8));
          uVar9 = (*(uint *)(gen_frame + 0x8));
        }
        (*(uint *)(gen_frame + 0x8)) = (uint)(longlong)TRUNC(*(double *)&REFG(undefined, 0x10912a8) * (double)pfVar5[2]);
        (*(uint *)&gen_args[4]) = (*(uint *)(gen_frame + 0x8));
      }
      else {
        uVar8 = *(*(undefined4 * PTR32 *)&gen_args[5]);
        uVar9 = (*(undefined4 * PTR32 *)&gen_args[5])[1];
        (*(uint *)&gen_args[4]) = (*(undefined4 * PTR32 *)&gen_args[5])[2];
      }
      puVar12 = ((undefined4 *)GEN_TOP((iVar7 + 0x28 + (int)(*(undefined * PTR32 *)&gen_args[0]))));
      puVar12[1] = uVar9;
      *puVar12 = 0;
      puVar12[4] = 0;
      puVar12[5] = 0;
      puVar12[2] = (*(uint *)&gen_args[4]);
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar6 * -0x40 + 0x68))) = uVar8;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar6 * -0x40 + 0x6c))) = 0;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar6 * -0x40 + 0x70))) = 0;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar6 * -0x40 + 0x78))) = 0;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar6 * -0x40 + 0x7c))) = 0;
      *(byte *)(*(undefined * PTR32 *)&gen_args[0]) = (*(byte *)(gen_frame + 0x1b));
      return 1;
    }
    iVar7 = iVar7 + 1;
    puVar12 = puVar12 + 0x10;
  } while (iVar7 < 2);
  uVar6 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x83,(*(uint *)&gen_args[1]) & 0xffff);
  if ((uVar6 == 0) || (*(int *)(uVar6 + 4) == 0)) {
    (*(uint *)&gen_args[4]) = (*(uint *)&gen_args[4]) & 0xffffff;
  }
  else {
    (*(uint *)&gen_args[4]) = CONCAT13(*((undefined1 *)GEN_TOP((*(int *)(uVar6 + 4) + 8))),(undefined3)(*(uint *)&gen_args[4]));
  }
  uVar6 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x83,
                       (uint)*((ushort *)GEN_TOP(((uint)*(byte *)(*(undefined * PTR32 *)&gen_args[0]) * 0x40 + 0x10 + (int)(*(undefined * PTR32 *)&gen_args[0])))));
  if ((uVar6 == 0) || (*(int *)(uVar6 + 4) == 0)) {
    bVar13 = 0;
  }
  else {
    bVar13 = *((byte *)GEN_TOP((*(int *)(uVar6 + 4) + 8)));
  }
  uVar6 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x83,
                       (uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (uint)*(byte *)(*(undefined * PTR32 *)&gen_args[0]) * -0x40 + 0x50))));
  if ((uVar6 == 0) || (*(int *)(uVar6 + 4) == 0)) {
    bVar10 = 0;
  }
  else {
    bVar10 = *((byte *)GEN_TOP((*(int *)(uVar6 + 4) + 8)));
    if (bVar13 < bVar10) {
      bVar4 = *(byte *)(*(undefined * PTR32 *)&gen_args[0]);
      bVar10 = bVar13;
      goto LAB_00ab7364;
    }
  }
  bVar4 = 1 - *(char *)(*(undefined * PTR32 *)&gen_args[0]);
LAB_00ab7364: ;
  iVar7 = (uint)bVar4 * 0x40;
  uVar6 = 1000;
  if ((*(undefined1 *)((char *)&(*(uint *)&gen_args[4]) + 3)) < bVar10) {
    (*(uint *)&gen_args[4]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[4]), 1, 3),*((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar7 + 0x18))));
    pfVar5 = (float *)F_00ab4fc0((*(undefined * PTR32 *)&gen_args[0]),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar7 + 0x14))),(*(uint *)&gen_args[4]),(*(undefined4 *)&gen_args[2]),
                                   (*(undefined4 *)&gen_args[3]));
    if (pfVar5 != (float *)0x0) {
      (*(uint *)(gen_frame + 0x8)) = (uint)(longlong)TRUNC((double)*pfVar5 * *(double *)&REFG(undefined, 0x10912a8));
      uVar6 = (*(uint *)(gen_frame + 0x8));
    }
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar7 + 0xc)));
  if ((iVar1 == 4) ||
     (((iVar1 == 5 || (iVar1 == 6)) &&
      (uVar8 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar7 + 0x28))) - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar7 + 0x38))),
      uVar6 < (((int)uVar8 < 1) - 1 & uVar8))))) {
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar7 + 0xc))) = 5;
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar7 + 0x24))) = 0;
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar7 + 0x28))) = uVar6;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar7 + 0x2c))) = 0;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar7 + 0x30))) = 0;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar7 + 0x38))) = 0;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar7 + 0x3c))) = 0;
  }
  return 0;
}

/* ref: FUN_00ab78d0 */
uint F_00ab78d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xab78d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  int param_4 = (int)gen_a4;
  byte bVar1;
  int * piVar2;
  undefined * this_00;
  undefined3 extraout_var = 0;
  uint uVar3;
  uint uVar4;
  char cVar5;
  
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (param_1 == (int *)0x0) {
    return (uint)piVar2;
  }
  cVar5 = '\x02';
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 3: ;
    bVar1 = F_00a9f620(param_1);
    cVar5 = bVar1 == 0;
    break;
  case 4: ;
    if ((param_3 & 1) != 0) break;
  case 0xe: ;
    F_00ab4370(0x70,param_1,param_1,0,0);
    cVar5 = '\x01';
    break;
  case 5: ;
    F_00ab4370(0xb5,param_1,param_1,0,0);
    cVar5 = '\x01';
    break;
  case 8: ;
    F_00ab4370(0x71,param_1,param_1,0,0);
    cVar5 = '\x01';
  }
  if (((undefined *)param_1[0xb81] != (undefined *)0x0) && (*(int *)&REFG(undefined2, 0x1379c78) == param_4)) {
    F_00bc7e20((undefined *)param_1[0xb81]);
  }
  bVar1 = F_00a9f620(param_1);
  if (bVar1 != 0) {
    F_005d9a00();
    this_00 = (undefined *)F_006b8c00();
    F_006e33b0(this_00);
    if (param_2 != 3) {
      ((code *)*(gen_code32 *)(*piVar2 + 0xa8))(piVar2,0,0x1e,1);
    }
    F_00a4a760(&REFG(undefined, 0x14a7360),0x1d,1);
    if ((param_3 & 2) == 0) {
      F_00ab5ef0(param_2,param_4);
    }
    F_00a6efa0(&REFG(undefined, 0x14ab428));
    ((code *)*(gen_code32 *)(*piVar2 + 0xb4))(piVar2);
    if (*(int *)&REFG(undefined2, 0x1379c78) == param_4) {
      *(undefined1 *)((int)this + 0x28) = 0;
    }
    else {
      *(undefined1 *)((int)this + 0x28) = 1;
      F_00ae33e0(&REFG(undefined * PTR32, 0x1338d48));
    }
    *(int *)((int)this + 8) = param_2;
  }
  if (cVar5 == '\x01') {
    param_1[0xbb2] = GEN_FLT_TO(param_1[0xbb2], REFG(float, 0x109cb08));
  }
  else if (cVar5 == '\x02') {
    ((code *)*(gen_code32 *)(*param_1 + 0x28))(param_1,9,0);
  }
  bVar1 = F_00a9f620(param_1);
  uVar3 = CONCAT31(extraout_var,bVar1);
  if (((bVar1 == 0) && (*(int *)&REFG(undefined2, 0x1379c78) != param_4)) &&
     (uVar3 = F_00a9fba0(param_1,param_2), (*(byte *)((int)param_1 + 0x2dd2) & 0x10) != 0)) {
    uVar4 = F_00ae0810(&REFG(undefined, 0x1336e40),param_1[0x1d]);
    uVar3 = 0;
    if (uVar4 != 0) {
      uVar3 = F_00b7aa60((undefined *)(uVar4 + 0x6c));
    }
  }
  return uVar3;
}

/* ref: FUN_00ab7ac0 */
uint F_00ab7ac0(unsigned int gen_a0)
{
  GEN_ENTER(0xab7ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc80];
  int iVar1;
  float fVar2;
  float * pfVar3;
  byte bVar4;
  int * piVar5;
  undefined * pvVar6;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  float * pfVar7;
  undefined4 * puVar8;
  uint uVar9;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  int * piVar10;
  float10 fVar11;
  float in_XMM1_Da = 0;
  float in_XMM2_Da = 0;
  float in_XMM3_Da = 0;
  float in_XMM7_Da = 0;
  undefined4 uVar12;
  undefined4 uVar13;
  
  piVar10 = REFG(undefined4, 0x1379694);
  (*(uint *)(gen_frame + 0xc6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc70);
  piVar5 = (int *)F_00424750(REFG(int, 0x137104c));
  (*(int * PTR32 *)(gen_frame + 0x3c)) = piVar5;
  pvVar6 = (undefined *)F_006b8c00();
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = pvVar6;
  if (REFG(int, 0x1379c74) == -1) goto switchD_00ab7b48_caseD_1;
  F_00ab5fe0(this);
  pvVar6 = *(undefined * PTR32 *)this;
  fVar2 = ((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) + (float10)*(float *)((int)this + 4))));
  (*(float *)(gen_frame + 0x44)) = fVar2;
  *(float *)((int)this + 4) = fVar2;
  switch((unsigned int)(uintptr_t)(pvVar6)) {
  case (undefined *)0x0: ;
    if ((piVar10 == (int *)0x0) || ((char)piVar10[0x62] != '\x02')) {
      uVar9 = F_00ab1340();
      *(uint *)((int)this + 0xc) = uVar9;
      pvVar6 = (undefined *)0x0;
      if (uVar9 != 0) {
        uVar9 = F_006b8c00();
        uVar9 = F_006c5190(uVar9);
        if ((char)uVar9 != '\0') {
          uVar13 = 0;
          uVar12 = 0x32;
          pvVar6 = (undefined *)F_006b8c00();
          bVar4 = F_006e3100(pvVar6,uVar12,uVar13);
          F_00c47745((*(uint *)(gen_frame + 0xc6c)) ^ (uint)(uint)(gen_frame + 0xc70));
          return CONCAT31(extraout_var,bVar4);
        }
        uVar9 = F_00ab1c90((uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0xc) + 0x86))));
        pvVar6 = (undefined *)0x0;
        if (uVar9 != 0) {
          piVar10 = (int *)F_005f3270(0x28,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x90))),0);
          if (piVar10 != (int *)0x0) {
            pfVar3 = (float *)piVar10[0x1f];
            (*(float *)(gen_frame + 0x20)) = *pfVar3;
            (*(float *)(gen_frame + 0x24)) = pfVar3[1];
            pfVar7 = &(*(float *)(gen_frame + 0x20));
            (*(float *)(gen_frame + 0x28)) = pfVar3[2];
            uVar9 = ((code *)*(gen_code32 *)(*piVar10 + 0xe4))(piVar10);
            puVar8 = (undefined4 *)F_004bd670(((undefined1 *)(gen_frame + 0x0)),uVar9,pfVar7);
            *(undefined4 *)((int)this + 0x10) = *puVar8;
            *(undefined4 *)((int)this + 0x14) = puVar8[1];
            *(undefined4 *)((int)this + 0x18) = puVar8[2];
          }
          uVar12 = *(undefined4 *)((int)this + 0xc);
          pvVar6 = (undefined *)F_006b8c00();
          F_006f7db0(pvVar6,uVar12);
          uVar9 = F_006b8c00();
          uVar9 = F_006c5190(uVar9);
          if ((char)uVar9 != '\0') {
            *(undefined4 *)this = 1;
            uVar9 = F_00a4a760(&REFG(undefined, 0x14a7360),0x1d,0);
            F_00c47745((*(uint *)(gen_frame + 0xc6c)) ^ (uint)(uint)(gen_frame + 0xc70));
            return uVar9;
          }
          *(undefined4 *)this = 3;
          uVar9 = F_00a4a760(&REFG(undefined, 0x14a7360),0x1d,0);
          F_00c47745((*(uint *)(gen_frame + 0xc6c)) ^ (uint)(uint)(gen_frame + 0xc70));
          return uVar9;
        }
      }
    }
    break;
  case (undefined *)0x2: ;
    if (piVar10 != (int *)0x0) {
      bVar4 = F_00a9fca0(piVar10);
      pvVar6 = ((undefined *)GEN_TOP(CONCAT31(extraout_var_00,bVar4)));
      if (bVar4 != 0) break;
    }
    *(undefined4 *)this = 3;
    uVar9 = F_00a4a760(&REFG(undefined, 0x14a7360),0x1d,0);
    F_00c47745((*(uint *)(gen_frame + 0xc6c)) ^ (uint)(uint)(gen_frame + 0xc70));
    return uVar9;
  case (undefined *)0x3: ;
    F_00ae8f70();
    fVar2 = *((float *)GEN_TOP((*(int *)((int)this + 0xc) + 0x94)));
    (*(float *)(gen_frame + 0x44)) = fVar2;
    fVar11 = F_00c4cde0(in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,(float10)fVar2);
    (*(float *)(gen_frame + 0x40)) = (float)fVar11;
    (*(float *)(gen_frame + 0x20)) = (float)fVar11;
    fVar11 = F_00c4ca20(in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,(float10)(*(float *)(gen_frame + 0x44)));
    fVar2 = (float)fVar11;
    (*(float *)(gen_frame + 0x40)) = fVar2;
    (*(float *)(gen_frame + 0x28)) = fVar2;
    fVar11 = (float10)REFG(double, 0x10944b8);
    (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x20)) * fVar11);
    (*(float *)(gen_frame + 0x24)) = (float)((float10)0 * fVar11);
    (*(float *)(gen_frame + 0x28)) = (float)(fVar11 * (float10)fVar2);
    pfVar7 = (float *)F_00a5feb0(piVar10);
    (*(float *)(gen_frame + 0x20)) = (float)((float10)*pfVar7 + (float10)(*(float *)(gen_frame + 0x20)));
    (*(float *)(gen_frame + 0x24)) = (float)((float10)pfVar7[1] + (float10)(*(float *)(gen_frame + 0x24)));
    (*(float *)(gen_frame + 0x28)) = (float)((float10)pfVar7[2] + (float10)(*(float *)(gen_frame + 0x28)));
    ((code *)*(gen_code32 *)(*piVar10 + 0x54))(piVar10,1);
    F_00a9f7c0(piVar10,(*(float *)(gen_frame + 0x20)),(*(float *)(gen_frame + 0x24)),(*(float *)(gen_frame + 0x28)),(*(float *)(gen_frame + 0x44)),0);
    F_00a4a760(&REFG(undefined, 0x14a7360),0x23,1);
    F_00a4a760(&REFG(undefined, 0x14a7360),0x1d,1);
    (*(float *)(gen_frame + 0x40)) = gen_bits2f(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x14))));
    puVar8 = (undefined4 *)F_00a5feb0(piVar10);
    (*(float *)(gen_frame + 0x44)) = gen_bits2f(*puVar8);
    uVar9 = F_00a5feb0(piVar10);
    (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (undefined *)*(undefined4 *)(uVar9 + 4);
    uVar9 = F_00a5feb0(piVar10);
    (*(undefined4 *)(gen_frame + 0x64)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x44)));
    (*(undefined4 *)(gen_frame + 0x48)) = 400;
    (*(undefined4 *)(gen_frame + 0x4c)) = 0x20;
    (*(undefined4 *)(gen_frame + 0x60)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x40)));
    uVar13 = 0;
    uVar12 = 0;
    puVar8 = &(*(undefined4 *)(gen_frame + 0x48));
    (*(undefined4 *)(gen_frame + 0x68)) = (*(undefined * PTR32 *)(gen_frame + 0x1c));
    (*(undefined4 *)(gen_frame + 0x6c)) = *(undefined4 *)(uVar9 + 8);
    pvVar6 = (undefined *)F_00424810(REFG(int, 0x137104c));
    F_00974e00(pvVar6,puVar8,uVar12,uVar13);
    F_005d9a00();
    piVar10 = (*(int * PTR32 *)(gen_frame + 0x3c));
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x3c)) + 0xa8))((*(int * PTR32 *)(gen_frame + 0x3c)),0,0x1e,1);
    *(undefined1 *)((int)this + 0x20) = 0;
    *(undefined4 *)((int)this + 4) = 0;
    ((code *)*(gen_code32 *)(*piVar10 + 0xb4))(piVar10);
    *(undefined4 *)this = 4;
    uVar9 = F_00a4a760(&REFG(undefined, 0x14a7360),0x1d,0);
    F_00c47745((*(uint *)(gen_frame + 0xc6c)) ^ (uint)(uint)(gen_frame + 0xc70));
    return uVar9;
  case (undefined *)0x4: ;
    if ((!GEN_ISNAN(fVar2) && !GEN_ISNAN(REFG(float, 0x1087f04))) && !(fVar2 < REFG(float, 0x1087f04))) {
      if (*(char *)((int)this + 0x20) == '\0') {
        uVar9 = F_00424810(REFG(int, 0x137104c));
        uVar9 = F_00974710(uVar9);
        if ((char)uVar9 != '\0') {
          *(undefined4 *)this = 5;
          uVar9 = F_00a4a760(&REFG(undefined, 0x14a7360),0x1d,0);
          F_00c47745((*(uint *)(gen_frame + 0xc6c)) ^ (uint)(uint)(gen_frame + 0xc70));
          return uVar9;
        }
      }
      uVar9 = F_00ab1390(this,*(undefined4 *)((int)this + 0x24));
      F_00c47745((*(uint *)(gen_frame + 0xc6c)) ^ (uint)(uint)(gen_frame + 0xc70));
      return uVar9;
    }
    break;
  case (undefined *)0x6: ;
    bVar4 = F_005e1600();
    piVar5 = (*(int * PTR32 *)(gen_frame + 0x3c));
    if ((((((((bVar4 == 0) || (bVar4 = F_005d99e0(), piVar5 = (*(int * PTR32 *)(gen_frame + 0x3c)), bVar4 == 0)) ||
            (piVar10 == (int *)0x0)) ||
           (uVar9 = ((code *)*(gen_code32 *)(*piVar10 + 0x68))(piVar10), pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x1c)), piVar5 = (*(int * PTR32 *)(gen_frame + 0x3c)),
           (char)uVar9 != '\x01')) ||
          (((uVar9 = F_006c5190((*(undefined * PTR32 *)(gen_frame + 0x1c))), (char)uVar9 != '\0' &&
            (piVar5 = (*(int * PTR32 *)(gen_frame + 0x3c)), *(char *)((int)this + 0x28) != '\0')) ||
           ((bVar4 = F_006da1b0(pvVar6), piVar5 = (*(int * PTR32 *)(gen_frame + 0x3c)), bVar4 == 0 ||
            ((uVar9 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x3c)) + 0x80))((*(int * PTR32 *)(gen_frame + 0x3c)),1), (char)uVar9 == '\0' ||
             (REFG(char, 0x14b5184) == '\0')))))))) || (REFG(char, 0x14b51d4) == '\0')) ||
        (((!(REFG(float, 0x1087ef8) <= *(float *)((int)this + 4)) &&
          ((*(int *)((int)this + 8) != 5 || (bVar4 = F_00ab5fa0(), bVar4 != 0)))) ||
         (uVar9 = F_00b7a2c0(&REFG(undefined, 0x14c5798)), (int)uVar9 < 0x50)))) &&
       (!(REFG(float, 0x10946b8) <= *(float *)((int)this + 4)))) {
      bVar4 = F_005e1600();
      pvVar6 = ((undefined *)GEN_TOP(CONCAT31(extraout_var_01,bVar4)));
      if (bVar4 != 0) {
        bVar4 = F_005d99e0();
        pvVar6 = ((undefined *)GEN_TOP(CONCAT31(extraout_var_02,bVar4)));
        if ((bVar4 != 0) && (REFG(char, 0x14a31e4) != '\0')) {
          pvVar6 = (undefined *)F_005d9a30();
        }
      }
      break;
    }
    if (*(int *)((int)this + 8) != 0x11) {
      if (REFG(int, 0x1375bbc) == -1) {
        piVar10 = (int *)0x0;
      }
      else {
        piVar10 = ((int *)GEN_TOP((&REFG(undefined4, 0x1375b90))[REFG(int, 0x1375bbc)]));
      }
      ((code *)*(gen_code32 *)(*piVar10 + 0x10))(piVar10);
    }
    F_00a4a760(&REFG(undefined, 0x14a7360),0x23,0);
    F_00a4a760(&REFG(undefined, 0x14a7360),0x1d,0);
    F_00a6e6a0(&REFG(undefined, 0x14a9e40));
    ((code *)*(gen_code32 *)(*piVar5 + 0xf8))(piVar5);
    F_00a51200(0xe,0,0,0,0);
    if (*(char *)((int)this + 0x28) != '\0') {
      pvVar6 = (undefined *)F_006b8c00();
      uVar9 = F_0070dfa0(pvVar6);
      if ((char)uVar9 != '\0') goto LAB_00ab8099;
    }
    F_00ab60c0(this);
LAB_00ab8099: ;
    F_00ab0590();
    uVar12 = *(undefined4 *)((int)this + 8);
    uVar9 = F_006b8c00();
    F_006c5150(uVar9,uVar12);
    piVar10 = *(int * PTR32 *)((int)this + 0x7c);
    if (piVar10 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar10 + 4))(piVar10);
      puVar8 = *(undefined4 * PTR32 *)((int)this + 0x7c);
      if (puVar8 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar8)(puVar8,1);
        *(undefined4 *)((int)this + 0x7c) = 0;
      }
    }
    puVar8 = (undefined4 *)((int)this + 0x80);
    (*(float *)(gen_frame + 0x44)) = 4.2039e-45;
    do {
      ((code *)*(gen_code32 *)(*(int *)*puVar8 + 4))((int *)*puVar8);
      puVar8 = puVar8 + 1;
      iVar1 = (int)gen_fl2bits((*(float *)(gen_frame + 0x44))) + -1;
      (*(float *)(gen_frame + 0x44)) = gen_bits2f(iVar1);
    } while (iVar1 != 0);
    F_005f3240();
    *(undefined2 *)((int)this + 0x40) = 0;
    *(undefined4 *)((int)this + 0x68) = 0;
    *(undefined4 *)((int)this + 0x6c) = 0;
    *(undefined1 *)((int)this + 0x70) = 0;
    *(undefined4 *)((int)this + 0x74) = 0;
    *(undefined4 *)((int)this + 0x78) = 0;
    *(undefined4 *)((int)this + 0x34) = 0;
    *(undefined4 *)((int)this + 0x38) = 0;
    *(undefined4 *)((int)this + 0x3c) = 0;
    *(undefined4 *)((int)this + 0x44) = 0;
    *(undefined4 *)((int)this + 0x48) = 0;
    *(undefined4 *)((int)this + 0x50) = 0;
    *(undefined4 *)((int)this + 0x54) = 0;
    *(undefined4 *)((int)this + 0x58) = 0;
    *(undefined2 *)((int)this + 0x60) = 0;
    *(undefined4 *)((int)this + 100) = 0;
    F_00a021b0((undefined *)(REFG(int, 0x137104c) + 0x2620),2,0);
    *(undefined4 *)((int)this + 8) = 0;
    F_005d9a70();
    *(undefined4 *)this = 0;
    uVar9 = F_00a4a760(&REFG(undefined, 0x14a7360),0x1d,0);
    F_00c47745((*(uint *)(gen_frame + 0xc6c)) ^ (uint)(uint)(gen_frame + 0xc70));
    return uVar9;
  }
switchD_00ab7b48_caseD_1: ;
  F_00c47745((*(uint *)(gen_frame + 0xc6c)) ^ (uint)(uint)(gen_frame + 0xc70));
  return (uint)pvVar6;
}

/* ref: FUN_00ab81e0 */
unsigned int F_00ab81e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab81e0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 in_ebx = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  byte * pbVar1;
  int * piVar2;
  uint uVar3;
  
  if (*(int *)(in_ecx + 0x20) < 5) {
    uVar3 = F_00aa55c0(in_ebx,param_3);
    *((uint *)GEN_TOP((in_ecx + 0xc + *(int *)(in_ecx + 0x20) * 4))) = uVar3;
    piVar2 = ((int *)GEN_TOP((in_ecx + 0xc + *(int *)(in_ecx + 0x20) * 4)));
    if (*piVar2 != 0) {
      pbVar1 = (byte *)(*piVar2 + 100);
      *pbVar1 = *pbVar1 & 0xfe;
    }
    *(int *)(in_ecx + 0x20) = *(int *)(in_ecx + 0x20) + 1;
  }
  return 0;
}

/* ref: FUN_00ab8220 */
uint F_00ab8220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab8220u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 in_ebx = (undefined4)gen_a1;
  char cVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  iVar4 = 0;
  while( true ) {
    uVar2 = F_0052fce0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x140,*in_ecx,iVar4,0,0);
    if (uVar2 == 0) {
      return 0;
    }
    piVar3 = *(int * PTR32 *)(uVar2 + 4);
    if (piVar3 == (int *)0x0) break;
    cVar1 = (char)piVar3[1];
    if (cVar1 == '\x01') {
      piVar3 = (int *)*piVar3;
      if ((int)in_ecx[8] < 5) {
        uVar2 = F_00aa55c0(in_ebx,piVar3);
        in_ecx[in_ecx[8] + 3] = uVar2;
        piVar3 = in_ecx + in_ecx[8] + 3;
        if (*piVar3 != 0) {
          piVar3 = (int *)*piVar3;
          *(byte *)(piVar3 + 0x19) = *(byte *)(piVar3 + 0x19) & 0xfe;
        }
        in_ecx[8] = in_ecx[8] + 1;
      }
    }
    else if (((cVar1 != '\x02') && (cVar1 == '\x04')) &&
            (piVar3 = (int *)*piVar3, (int)in_ecx[0x13] < 10)) {
      piVar3 = (int *)F_00ab4aa0(piVar3);
      in_ecx[in_ecx[0x13] + 9] = piVar3;
      in_ecx[0x13] = in_ecx[0x13] + 1;
    }
    iVar4 = iVar4 + 1;
    if (0x13 < iVar4) {
      return (uint)piVar3;
    }
  }
  return 0;
}

/* ref: FUN_00ab82c0 */
uint F_00ab82c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab82c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 in_ebx = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  int * piVar3;
  int iVar4;
  
  if (in_ecx[2] == 1) {
    iVar4 = 0;
    while ((uVar2 = F_0052fce0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x140,*in_ecx,iVar4,0,0),
           uVar2 != 0 && (piVar3 = *(int * PTR32 *)(uVar2 + 4), piVar3 != (int *)0x0))) {
      if (((char)piVar3[1] == '\x01') && (piVar3 = (int *)*piVar3, 999999 < (int)piVar3)) {
        piVar3 = (int *)F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x44,piVar3);
        if (piVar3 == (int *)0x0) {
          return 0;
        }
        if (piVar3[1] == 0) {
          return (uint)piVar3;
        }
      }
      iVar4 = iVar4 + 1;
      if (0x13 < iVar4) {
        return (uint)piVar3;
      }
    }
    uVar2 = F_00ab8220(in_ecx,in_ebx);
    in_ecx[2] = 2;
  }
  else {
    uVar2 = in_ecx[2] - 2;
    if (uVar2 == 0) {
      bVar1 = F_00ab1c10(in_ecx);
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) {
        *(undefined1 *)(in_ecx + 1) = 1;
        in_ecx[2] = 0;
        return uVar2;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00ab8360 */
uint F_00ab8360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab8360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  iVar1 = param_1;
  *(int *)this = param_1;
  uVar2 = F_00aaf890(this);
  iVar4 = 0;
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined1 *)((int)this + 4) = 1;
    return uVar2;
  }
  param_1 = 0;
  do {
    uVar2 = F_0052fce0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x140,iVar1,iVar4,0,0);
    piVar3 = (int *)0x0;
    if ((uVar2 == 0) || (piVar3 = *(int * PTR32 *)(uVar2 + 4), piVar3 == (int *)0x0)) break;
    if (((char)piVar3[1] == '\x01') && (piVar3 = (int *)*piVar3, 999999 < (int)piVar3)) {
      piVar3 = (int *)F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x44,piVar3);
      if ((piVar3 == (int *)0x0) || (piVar3[1] == 0)) {
        param_1 = param_1 + 1;
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x14);
  if (param_1 != 0) {
    *(undefined4 *)((int)this + 8) = 1;
    return (uint)piVar3;
  }
  uVar2 = F_00ab8220(this,this);
  *(undefined4 *)((int)this + 8) = 2;
  return uVar2;
}

/* ref: FUN_00ab8420 */
uint F_00ab8420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab8420u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 in_ebx = (undefined4)gen_a1;
  uint uVar1;
  
  F_00ab82c0(in_ecx,in_ebx);
  uVar1 = F_00ab82c0(in_ecx + 0x50,in_ebx);
  return uVar1;
}

/* ref: FUN_00ab8440 */
uint F_00ab8440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab8440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  uVar2 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x41,param_1);
  if ((uVar2 != 0) && (iVar1 = *(int *)(uVar2 + 4), iVar1 != 0)) {
    if (*(char *)((int)this + 4) == '\0') {
      F_00ab8360(this,1);
    }
    uVar2 = F_00ab8360((undefined *)((int)this + 0x50),(uint)*(byte *)(iVar1 + 0x2b));
  }
  return uVar2;
}

/* ref: FUN_00ab8490 */
uint F_00ab8490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab8490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined1 *)((int)this + 0x16) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  if ((uint)(*(int *)((int)this + 0x24) - *(int *)((int)this + 0x1c) >> 4) < 0x10) {
    uVar3 = F_004296a0(0x100,0,800);
    F_00abd2f0(*(undefined4 *)((int)this + 0x1c),*(undefined4 *)((int)this + 0x20),uVar3,
                 (int)this + 0x28);
    iVar1 = *(int *)((int)this + 0x1c);
    iVar2 = *(int *)((int)this + 0x20);
    if (iVar1 != 0) {
      F_00429760(iVar1,*(int *)((int)this + 0x24) - iVar1 & 0xfffffff0,800);
    }
    *(uint *)((int)this + 0x20) = (iVar2 - iVar1 & 0xfffffff0U) + uVar3;
    *(uint *)((int)this + 0x1c) = uVar3;
    *(uint *)((int)this + 0x24) = uVar3 + 0x100;
  }
  return (uint)this;
}

/* ref: FUN_00ab8560 */
uint F_00ab8560(unsigned int gen_a0)
{
  GEN_ENTER(0xab8560u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)((int)this + 0x1c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*(int *)((int)this + 0x24) - iVar1 & 0xfffffff0,800);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  return uVar2;
}

/* ref: FUN_00ab85a0 */
byte F_00ab85a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab85a0u, gen_a0, gen_a1, gen_a2, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte * param_3 = (byte *)(uintptr_t)gen_a2;
  byte bVar1;
  ushort uVar2;
  short sVar3;
  int * piVar4;
  short * psVar5;
  undefined4 uVar6;
  byte bVar7;
  uint uVar8;
  short * psVar9;
  ushort * puVar10;
  short sVar11;
  int iVar12;
  short * psVar13;
  short * psVar14;
  ushort * puVar15;
  byte * pbVar16;
  float fVar17;
  
  if (REFG(int, 0x137104c) == 0) {
    fVar17 = 0.0;
  }
  else {
    fVar17 = *(float *)(REFG(int, 0x137104c) + 0x1198);
  }
  uVar2 = (ushort)param_1[4];
  if (uVar2 == 0) goto LAB_00ab869f;
  *(ushort *)((int)param_1 + 0x12) = uVar2;
  param_1[3] = 0;
  if (((uVar2 < 0x3e9) ||
      (uVar8 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x85,(uint)uVar2), uVar8 == 0)) ||
     (psVar9 = *(short * PTR32 *)(uVar8 + 4), psVar9 == (short *)0x0)) goto switchD_00ab861f_default;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 1: ;
    sVar11 = *psVar9;
    param_1[3] = 1;
    goto LAB_00ab8693;
  case 2: ;
    *(short *)((int)param_1 + 0x12) = psVar9[1];
    param_1[3] = 2;
    break;
  case 3: ;
    *(short *)((int)param_1 + 0x12) = psVar9[2];
    param_1[3] = 3;
    break;
  case 4: ;
    sVar11 = psVar9[3];
    if (sVar11 != 0) {
      param_1[3] = 4;
      goto LAB_00ab8693;
    }
    *(short *)((int)param_1 + 0x12) = *psVar9;
    param_1[3] = 1;
    break;
  case 5: ;
    sVar11 = psVar9[4];
    if (sVar11 == 0) {
      sVar11 = psVar9[1];
      param_1[3] = 2;
    }
    else {
      param_1[3] = 5;
    }
LAB_00ab8693: ;
    *(short *)((int)param_1 + 0x12) = sVar11;
  }
switchD_00ab861f_default: ;
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)((int)param_1 + 0x12);
LAB_00ab869f: ;
  if (*(char *)((int)param_1 + 0x16) != '\0') {
    if (gen_bits2f(param_1[6]) < *(float *)&REFG(undefined, 0x10e9058)) {
      param_1[6] = (uint)gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f(param_1[6]))) + (float10)fVar17));
    }
    else if ((REFG(int, 0x14bcc68) == 0) || (*(char *)(REFG(int, 0x14bcc68) + 0xb4) == '\0')) {
      F_00ab07d0(param_1);
    }
  }
  puVar15 = (ushort *)param_1[7];
  psVar9 = (short *)((uint)*param_3 * 0x40);
  bVar1 = *((byte *)GEN_TOP(((int)(psVar9 + 0xc) + (int)param_3)));
  sVar11 = *((short *)GEN_TOP(((int)(psVar9 + 8) + (int)param_3)));
  if (puVar15 != (ushort *)param_1[8]) {
    do {
      if (((char)puVar15[1] != '\0') && ((char)puVar15[6] == '\0')) {
        if ((uint)bVar1 == *param_1) {
          iVar12 = 0;
          puVar10 = (ushort *)(param_3 + 0x10);
          do {
            if ((*(int *)(puVar10 + -2) - 1U < 4) && (*puVar10 == *puVar15)) {
              bVar7 = F_00aaf3c0(param_3,(uint)*puVar15);
              psVar9 = (short *)(uint)bVar7;
              if (bVar7 == 0) goto LAB_00ab8751;
              goto LAB_00ab874d;
            }
            iVar12 = iVar12 + 1;
            puVar10 = puVar10 + 0x20;
          } while (iVar12 < 2);
        }
        bVar7 = F_00aaf410(param_3,(uint)*puVar15);
        psVar9 = (short *)(uint)bVar7;
        if (bVar7 == 0) {
LAB_00ab874d: ;
          *(undefined1 *)(puVar15 + 6) = 1;
        }
      }
LAB_00ab8751: ;
      puVar15 = puVar15 + 8;
    } while (puVar15 != (ushort *)param_1[8]);
  }
  bVar7 = (byte)psVar9;
  psVar13 = (short *)param_1[7];
  param_2 = (uint)psVar13;
  if (psVar13 != (short *)param_1[8]) {
    do {
      if (((char)psVar13[6] == '\0') ||
         (*(float *)(psVar13 + 4) = ((float)GEN_TOF(((float10)fVar17 + (float10)*(float *)(psVar13 + 4)))),
         !((float10)*(float *)(psVar13 + 2) < (float10)*(float *)(psVar13 + 4)))) {
        psVar13 = psVar13 + 8;
        param_2 = (uint)psVar13;
      }
      else {
        sVar3 = *psVar13;
        if ((uint)bVar1 == *param_1) {
          iVar12 = 0;
          pbVar16 = param_3 + 0x1c;
          do {
            if ((((*(int *)(pbVar16 + -0x10) == 4) && (*(int *)pbVar16 != 0)) &&
                (uVar8 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pbVar16 + 0x7c))))(*(int * PTR32 *)pbVar16),
                psVar13 = (short *)param_2, (char)uVar8 == '\0')) &&
               (*(short *)(pbVar16 + -0xc) == sVar3)) {
              if (*(short *)((int)param_1 + 0x12) == sVar11) {
                iVar12 = (uint)*param_3 * 0x40;
                piVar4 = *(int * PTR32 *)(param_3 + iVar12 + 0x1c);
                if (piVar4 != (int *)0x0) {
                  ((code *)*(gen_code32 *)(*piVar4 + 0x50))(piVar4,0);
                  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_3 + iVar12 + 0x1c) + 0x78))))
                            (*(int * PTR32 *)(param_3 + iVar12 + 0x1c),500);
                  pbVar16 = param_3 + iVar12 + 0x1c;
                  pbVar16[0] = 0;
                  pbVar16[1] = 0;
                  pbVar16[2] = 0;
                  pbVar16[3] = 0;
                }
                pbVar16 = param_3 + iVar12 + 0x40;
                pbVar16[0] = 0;
                uVar6 = REFG(float, 0x1087f04);
                pbVar16[1] = 0;
                pbVar16[2] = 0;
                pbVar16[3] = 0;
                pbVar16 = param_3 + iVar12 + 0xc;
                pbVar16[0] = 0;
                pbVar16[1] = 0;
                pbVar16[2] = 0;
                pbVar16[3] = 0;
                (param_3 + iVar12 + 0x10)[0] = 0;
                (param_3 + iVar12 + 0x10)[1] = 0;
                pbVar16 = param_3 + iVar12 + 0x20;
                pbVar16[0] = 0;
                pbVar16[1] = 0;
                pbVar16[2] = 0;
                pbVar16[3] = 0;
                (param_3 + iVar12 + 0x24)[0] = 0;
                (param_3 + iVar12 + 0x24)[1] = 0;
                *(undefined4 *)(param_3 + iVar12 + 0x44) = uVar6;
                pbVar16 = param_3 + iVar12 + 0x28;
                pbVar16[0] = 0;
                pbVar16[1] = 0;
                pbVar16[2] = 0;
                pbVar16[3] = 0;
                pbVar16 = param_3 + iVar12 + 0x2c;
                pbVar16[0] = 0;
                pbVar16[1] = 0;
                pbVar16[2] = 0;
                pbVar16[3] = 0;
                pbVar16 = param_3 + iVar12 + 0x30;
                pbVar16[0] = 0;
                pbVar16[1] = 0;
                pbVar16[2] = 0;
                pbVar16[3] = 0;
                pbVar16 = param_3 + iVar12 + 0x38;
                pbVar16[0] = 0;
                pbVar16[1] = 0;
                pbVar16[2] = 0;
                pbVar16[3] = 0;
                pbVar16 = param_3 + iVar12 + 0x3c;
                pbVar16[0] = 0;
                pbVar16[1] = 0;
                pbVar16[2] = 0;
                pbVar16[3] = 0;
                pbVar16 = param_3 + iVar12 + 0x14;
                pbVar16[0] = 0;
                pbVar16[1] = 0;
                pbVar16[2] = 0;
                pbVar16[3] = 0;
                param_3[iVar12 + 0x18] = 0;
              }
              break;
            }
            iVar12 = iVar12 + 1;
            pbVar16 = pbVar16 + 0x40;
          } while (iVar12 < 2);
        }
        psVar5 = (short *)param_1[8];
        psVar14 = psVar13;
        psVar9 = psVar13;
        while (psVar9 = psVar9 + 8, psVar9 != psVar5) {
          *(undefined4 *)psVar14 = *(undefined4 *)psVar9;
          *(undefined4 *)(psVar14 + 2) = *(undefined4 *)(psVar9 + 2);
          *(undefined4 *)(psVar14 + 4) = *(undefined4 *)(psVar9 + 4);
          *(undefined4 *)(psVar14 + 6) = *(undefined4 *)(psVar9 + 6);
          psVar14 = psVar14 + 8;
          psVar13 = (short *)param_2;
        }
        param_1[8] = param_1[8] - 0x10;
      }
      bVar7 = (byte)psVar9;
    } while (psVar13 != (short *)param_1[8]);
  }
  return bVar7;
}

/* ref: FUN_00ab88e0 */
unsigned int F_00ab88e0(unsigned int gen_a0)
{
  GEN_ENTER(0xab88e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(char *)((int)this + 0x16) == '\0') {
LAB_00ab891f: ;
    if (*(int *)((int)this + 0x48) != 1) goto LAB_00ab894e;
  }
  else if (*(int *)((int)this + 0x48) != 1) {
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined1 *)((int)this + 0x16) = 0;
    *(undefined4 *)((int)this + 0x18) = 0;
    *(undefined1 *)((int)this + 0x2c) = 0;
    *(undefined4 *)((int)this + 0x48) = 0;
    *(undefined2 *)((int)this + 0x10) = 0;
    *(undefined2 *)((int)this + 0x12) = 0;
    *(undefined4 *)((int)this + 0x30) = 0;
    *(undefined4 *)((int)this + 0x34) = 0;
    *(undefined4 *)((int)this + 0x38) = 0;
    *(undefined4 *)((int)this + 0x40) = 0;
    *(undefined4 *)((int)this + 0x44) = 0;
    goto LAB_00ab891f;
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined1 *)((int)this + 0x16) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined2 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x12) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
LAB_00ab894e: ;
  if (*(int *)((int)this + 0x1c) != *(int *)((int)this + 0x20)) {
    *(int *)((int)this + 0x20) = *(int *)((int)this + 0x1c);
  }
  return 0;
}

/* ref: FUN_00ab8990 */
uint F_00ab8990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab8990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  ushort * puVar3;
  uint uVar4;
  
  uVar2 = *(int *)((int)this + 0x20) - *(int *)((int)this + 0x1c) >> 4;
  if (uVar2 < 0x10) {
    for (puVar3 = *(ushort * PTR32 *)((int)this + 0x1c); puVar3 != *(ushort * PTR32 *)((int)this + 0x20);
        puVar3 = puVar3 + 8) {
      if (*puVar3 == (ushort)param_1) {
        return (uint)puVar3;
      }
    }
    uVar4 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x83,(uint)(ushort)param_1);
    uVar2 = 0;
    if (uVar4 != 0) {
      iVar1 = *(int *)(uVar4 + 4);
      uVar2 = 0;
      if (iVar1 != 0) {
        (*(undefined1 *)(gen_frame + 0xe)) = *(undefined1 *)(iVar1 + 0xb);
        (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(iVar1 + 4);
        (*(ushort *)(gen_frame + 0xc)) = (ushort)param_1;
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        (*(undefined1 *)(gen_frame + 0x18)) = 0;
        uVar2 = F_00abd660((undefined4 *)((int)this + 0x1c),&(*(ushort *)(gen_frame + 0xc)));
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00ab8a60 */
byte F_00ab8a60(unsigned int gen_a0)
{
  GEN_ENTER(0xab8a60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  ushort * puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined * this_00;
  undefined4 local_14;
  uint local_10;
  int local_c;
  byte local_5;
  
  bVar5 = false;
  local_10 = 0;
  if (*(int *)((int)this + 8) != 0) {
    local_c = 0;
    do {
      this_00 = ((undefined *)GEN_TOP((*(int *)((int)this + 0xa0) + local_c)));
      cVar1 = *(char *)((int)this + 0xb4);
      uVar2 = *(ushort *)((int)this_00 + 0x12);
      uVar11 = (uint)uVar2;
      uVar3 = *(undefined4 *)((int)this_00 + 0xc);
      if (((uVar2 != 0) &&
          (uVar7 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x83,uVar11), uVar7 != 0)) &&
         (iVar9 = *(int *)(uVar7 + 4), iVar9 != 0)) {
        if (((*(char *)((int)this_00 + 4) == '\0') ||
            (iVar10 = (uint)*(byte *)((int)this + 0x10) * 0x40,
            3 < *(int *)((int)this + iVar10 + 0x1c) - 1U)) ||
           ((*(int *)((int)this + iVar10 + 0x24) != 3 || (cVar1 == '\0')))) {
          bVar4 = false;
          if ((*(char *)((int)this_00 + 8) != '\0') && (*(char *)(iVar9 + 10) != '\0')) {
            for (puVar8 = *(ushort * PTR32 *)((int)this_00 + 0x1c);
                puVar8 != *(ushort * PTR32 *)((int)this_00 + 0x20); puVar8 = puVar8 + 8) {
              if (*puVar8 == uVar2) {
                bVar6 = F_00aaf380((undefined *)((int)this + 0x10),uVar11);
                if ((bVar6 == 0) &&
                   (bVar6 = F_00aaf410((undefined *)((int)this + 0x10),uVar11), bVar6 == 0))
                goto LAB_00ab8b58;
                break;
              }
            }
            bVar4 = true;
          }
          local_5 = 0;
          if (*(char *)((int)this_00 + 6) != '\0') {
            if (*(char *)((int)this + 200) != '\0') goto LAB_00ab8b54;
            if (*(char *)(iVar9 + 9) != '\0') {
              local_5 = 1;
            }
          }
          local_14 = CONCAT31((int3)((uint)iVar9 >> 8),*(undefined1 *)((int)this_00 + 7));
          if (*(char *)((int)this_00 + 0x2c) == '\0') {
            iVar9 = 0;
          }
          else {
            iVar9 = (int)this_00 + 0x30;
          }
          bVar6 = F_00ab7140((undefined *)((int)this + 0x10),uVar11,uVar3,local_10,local_14,iVar9);
          local_10 = (uint)bVar6;
          if (bVar6 != 0) {
            if (bVar4) {
              F_00ab8990(this_00,uVar11);
            }
            local_10 = (uint)local_5;
            *(byte *)((int)this + 200) = local_5;
            if (local_5 != 0) {
              *(ushort *)((int)this + 0xca) = uVar2;
              return local_5;
            }
          }
          goto LAB_00ab8b95;
        }
LAB_00ab8b54: ;
        bVar5 = true;
      }
LAB_00ab8b58: ;
      local_c = local_c + 0x50;
      local_10 = local_10 + 1;
    } while (local_10 < *(uint *)((int)this + 8));
    if (bVar5) goto LAB_00ab8b95;
  }
  bVar6 = F_00ab7140((undefined *)((int)this + 0x10),1,
                       *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa0) + 0x23c))),7,
                       (uint)*((byte *)GEN_TOP((*(int *)((int)this + 0xa0) + 0x237))),0);
  local_10 = (uint)bVar6;
LAB_00ab8b95: ;
  return (byte)local_10;
}

/* ref: FUN_00ab8c00 */
uint F_00ab8c00(unsigned int gen_a0)
{
  GEN_ENTER(0xab8c00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * this_00;
  byte bVar1;
  undefined * pvVar2;
  byte * pbVar3;
  uint uVar4;
  int iVar5;
  
  F_00ab0ad0(this);
  if (*(char *)((int)this + 0xb4) == '\0') {
    uVar4 = F_00ab0c40();
    *(uint *)((int)this + 0xb0) = uVar4;
  }
  else {
    *(undefined4 *)((int)this + 0xb0) = 3;
  }
  uVar4 = 0;
  if (*(int *)((int)this + 8) != 0) {
    iVar5 = 0;
    do {
      F_00ab85a0(*(int *)((int)this + 0xa0) + iVar5,*(uint *)((int)this + 0xb0),(int)this + 0x10);
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x50;
    } while (uVar4 < *(uint *)((int)this + 8));
  }
  F_00ab0b90(this);
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0xc0))) {
  case 0: ;
    bVar1 = F_005e1600();
    if ((bVar1 != 0) && (REFG(int, 0x1379694) != 0)) {
      pvVar2 = (undefined *)F_006b8c00();
      bVar1 = F_006da1b0(pvVar2);
      if (bVar1 != 0) {
        pvVar2 = (undefined *)F_006b8c00();
        bVar1 = F_006da210(pvVar2);
        *(uint *)((int)this + 0xc0) = (uint)(bVar1 == 0) * 2 + 1;
      }
    }
    break;
  case 1: ;
    if (*(char *)((int)this + 0xc4) != '\0') {
      pvVar2 = (undefined *)F_006b8c00();
      bVar1 = F_006d9e20(pvVar2);
      *(uint *)((int)this + 0xc0) = (bVar1 != 0xf) + 2;
    }
    break;
  case 2: ;
    pvVar2 = (undefined *)F_006b8c00();
    bVar1 = F_006d9e20(pvVar2);
    if ((bVar1 == 0) || (*(char *)((int)this + 0xc5) != '\0')) {
      *(undefined4 *)((int)this + 0xc0) = 3;
    }
    break;
  case 3: ;
    *(undefined4 *)((int)this + 0xc0) = 4;
    *(undefined2 *)((int)this + 199) = 1;
    *(undefined2 *)((int)this + 0xca) = 0;
    F_00ab0890((undefined *)((int)this + 0x10));
    uVar4 = 0;
    if (*(int *)((int)this + 8) != 0) {
      iVar5 = 0;
      do {
        F_00ab88e0(((undefined *)GEN_TOP((*(int *)((int)this + 0xa0) + iVar5))));
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 0x50;
      } while (uVar4 < *(uint *)((int)this + 8));
    }
    iVar5 = *(int *)((int)this + 0xa0);
    *(undefined4 *)((int)this + 0xb8) = 0;
    *(undefined4 *)((int)this + 0xbc) = 0;
    *(undefined1 *)((int)this + 0xb4) = 0;
    if (*(int *)(iVar5 + 0x228) != 1) {
      *(undefined4 *)(iVar5 + 0x1ec) = 0;
      *(undefined1 *)(iVar5 + 0x1f6) = 0;
      *(undefined4 *)(iVar5 + 0x1f8) = 0;
      *(undefined1 *)(iVar5 + 0x20c) = 0;
      *(undefined4 *)(iVar5 + 0x228) = 0;
      *(undefined2 *)(iVar5 + 0x1f0) = 0;
      *(undefined2 *)(iVar5 + 0x1f2) = 0;
      *(undefined4 *)(iVar5 + 0x210) = 0;
      *(undefined4 *)(iVar5 + 0x214) = 0;
      *(undefined4 *)(iVar5 + 0x218) = 0;
      *(undefined4 *)(iVar5 + 0x220) = 0;
      *(undefined4 *)(iVar5 + 0x224) = 0;
    }
    break;
  case 4: ;
    F_00ab5120(this);
    F_00ab8a60(this);
  }
  this_00 = (byte *)((int)this + 0x10);
  pbVar3 = (byte *)F_00ab75e0(this_00);
  if ((*(char *)((int)this + 200) != '\0') &&
     ((pbVar3 = this_00 + (uint)*this_00 * 0x40,
      *(short *)(this_00 + (uint)*this_00 * 0x40 + 0x10) != *(short *)((int)this + 0xca) ||
      (((*(int *)(pbVar3 + 0xc) == 4 && (*(int *)(pbVar3 + 0x1c) != 0)) &&
       (pbVar3 = ((byte *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(pbVar3 + 0x1c) + 0x7c))))(*(int * PTR32 *)(pbVar3 + 0x1c)))),
       (char)pbVar3 == '\0')))))) {
    *(undefined1 *)((int)this + 200) = 0;
    *(undefined2 *)((int)this + 0xca) = 0;
  }
  return (uint)pbVar3;
}

/* ref: FUN_00ab8e60 */
unsigned int F_00ab8e60(void)
{
  GEN_ENTER(0xab8e60u, 0u, 0u, 0u, 0u);
  if (REFG(undefined4, 0x14bcc68) != (undefined *)0x0) {
    F_00ab8c00(REFG(undefined4, 0x14bcc68));
    return 0;
  }
  return 0;
}

/* ref: FUN_00ab8e70 */
unsigned int F_00ab8e70(unsigned int gen_a0)
{
  GEN_ENTER(0xab8e70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00abd9c0((undefined *)((int)this + 0xa0));
  F_00ab4f20((undefined *)((int)this + 0x10));
  return 0;
}

/* ref: FUN_00ab8e90 */
uint F_00ab8e90(unsigned int gen_a0)
{
  GEN_ENTER(0xab8e90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xd4,1);
  if ((uVar1 == 0) || (*(undefined4 * PTR32 *)(uVar1 + 4) == (undefined4 *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = **(undefined4 * PTR32 *)(uVar1 + 4);
  }
  *(undefined4 *)this = uVar3;
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xd4,2);
  if ((uVar1 == 0) || (*(undefined4 * PTR32 *)(uVar1 + 4) == (undefined4 *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = **(undefined4 * PTR32 *)(uVar1 + 4);
  }
  *(undefined4 *)((int)this + 4) = uVar3;
  uVar1 = F_00530100(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x84);
  *(uint *)((int)this + 8) = uVar1;
  F_00ab4e70((undefined *)((int)this + 0x10));
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined1 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 4;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined1 *)((int)this + 200) = 0;
  *(undefined2 *)((int)this + 0xca) = 0;
  F_00abda80((undefined *)((int)this + 0xa0),*(undefined4 *)((int)this + 8));
  if (*(int *)((int)this + 8) != 0) {
    uVar1 = 0;
    do {
      uVar2 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x84,uVar1);
      if ((uVar2 != 0) && (*(int *)(uVar2 + 4) != 0)) {
        uVar2 = F_00ab8490(((byte *)(gen_frame + 0x8)),uVar1,*(int *)(uVar2 + 4));
        F_00abdbf0((undefined *)((int)this + 0xa0),uVar2);
        if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 28)) != 0) {
          F_00429760((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 28)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 36)) - (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 28)) & 0xfffffff0,800);
        }
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)((int)this + 8));
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)this;
}

/* ref: FUN_00ab9000 */
uint F_00ab9000(unsigned int gen_a0)
{
  GEN_ENTER(0xab9000u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int * piVar2;
  undefined * this;
  uint uVar3;
  ulonglong uVar4;
  int * PTR32 * ppiVar5;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0;
  if (piVar1 != (int *)0x0) {
    (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0x0;
    piVar2 = (int *)F_004296a0(8,0,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0x4)) = piVar2;
    if (piVar2 != (int *)0x0) {
      *piVar2 = 0;
      piVar2[1] = 0;
    }
    ppiVar5 = &(*(int * PTR32 *)(gen_frame + 0x4));
    *piVar2 = (int)ppiVar5;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
    F_0046aa70(this,param_1,ppiVar5);
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x4)));
    uVar4 = F_00429760((*(int * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
    uVar3 = (uint)uVar4;
  }
  return uVar3;
}

/* ref: FUN_00ab9090 */
uint F_00ab9090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab9090u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int * piVar2;
  uint uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  
  uVar1 = F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0;
  if (uVar1 != 0) {
    if (param_2 == 5) {
      uVar4 = 0x4d2;
    }
    else {
      if (param_2 - 7U != 0) {
        return param_2 - 7U;
      }
      uVar4 = 0x4d3;
    }
    (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0x0;
    piVar2 = (int *)F_004296a0(8,0,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0x4)) = piVar2;
    if (piVar2 != (int *)0x0) {
      *piVar2 = 0;
      piVar2[1] = 0;
    }
    *piVar2 = (int)&(*(int * PTR32 *)(gen_frame + 0x4));
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_00aaece0(uVar1,uVar4,param_1,&(*(int * PTR32 *)(gen_frame + 0x4)));
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x4)));
    uVar5 = F_00429760((*(int * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
    uVar3 = (uint)uVar5;
  }
  return uVar3;
}

/* ref: FUN_00ab9130 */
unsigned int F_00ab9130(void)
{
  GEN_ENTER(0xab9130u, 0u, 0u, 0u, 0u);
  undefined * this;
  uint uVar1;
  
  if (REFG(undefined4, 0x14bcc68) == 0) {
    this = (undefined *)F_00406b90(0xd0,0,0);
    if (this != (undefined *)0x0) {
      uVar1 = F_00ab8e90(this);
      REFG(undefined4, 0x14bcc68) = uVar1;
      return 0;
    }
    REFG(undefined4, 0x14bcc68) = 0;
  }
  return 0;
}

/* ref: FUN_00ab9170 */
unsigned int F_00ab9170(void)
{
  GEN_ENTER(0xab9170u, 0u, 0u, 0u, 0u);
  int iVar1;
  
  iVar1 = REFG(int, 0x14bcc68);
  if (REFG(int, 0x14bcc68) != 0) {
    F_00abd9c0((undefined *)(REFG(int, 0x14bcc68) + 0xa0));
    F_00ab4f20((undefined *)(iVar1 + 0x10));
    F_00406ad0(iVar1);
    REFG(int, 0x14bcc68) = 0;
  }
  return 0;
}

/* ref: FUN_00ab91b0 */
uint F_00ab91b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab91b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  *(undefined1 *)((int)this + 0xc80) = 0;
  bVar2 = 0;
  uVar3 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x58,param_2);
  if ((uVar3 != 0) && (iVar1 = *(int *)(uVar3 + 4), iVar1 != 0)) {
    bVar2 = F_00aaf5f0(this,(uint)*(ushort *)(iVar1 + 0x1c),param_1,(uint)*(byte *)(iVar1 + 0x22),
                         1);
  }
  uVar4 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xa4,(uint)REFG(undefined1, 0x1379c7c));
  uVar3 = 0;
  if ((((uVar4 != 0) && (uVar3 = *(uint *)(uVar4 + 4), uVar3 != 0)) &&
      (*(char *)(uVar3 + 0xb) != '\0')) && (bVar2 != 0)) {
    uVar3 = F_00ab9000(0x58);
  }
  return uVar3;
}

/* ref: FUN_00ab9240 */
uint F_00ab9240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab9240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint * puVar1;
  undefined * this;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  ulonglong uVar6;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  (*(undefined4 *)(gen_frame + 0x24)) = param_3;
  piVar3 = (int *)F_00424750(REFG(int, 0x137104c));
  uVar4 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x2a,param_1);
  if ((uVar4 != 0) && (puVar1 = *(uint * PTR32 *)(uVar4 + 4), puVar1 != (uint *)0x0)) {
    (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0x0;
    piVar5 = (int *)F_004296a0(8,0,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0xc)) = piVar5;
    if (piVar5 != (int *)0x0) {
      *piVar5 = 0;
      piVar5[1] = 0;
    }
    *piVar5 = (int)&(*(int * PTR32 *)(gen_frame + 0xc));
    (*(undefined4 * PTR32 *)(gen_frame + 0x80)) = &(*(undefined4 *)(gen_frame + 0x7c));
    (*(undefined4 *)(gen_frame + 0x7c)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x7c)) = param_2;
    (*(char *)(gen_frame + 0x84)) = '\0';
    F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x7c)));
    if ((((*(undefined4 * PTR32 *)(gen_frame + 0x80)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x84)) != '\0')) && ((*(char *)(gen_frame + 0x84)) == '\x01')) {
      this = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x80));
      *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + -1;
      if (*(int *)((int)this + 0x54) < 1) {
        F_0042c880(this);
        F_00406ad0(this);
      }
    }
    uVar2 = (*(undefined4 *)(gen_frame + 0x24));
    F_0042aca0((*(undefined4 *)(gen_frame + 0x24)));
    F_0042cc20(((undefined1 *)(gen_frame + 0x28)),(*puVar1 & 0xffffff) + (int)puVar1,REFG(undefined4, 0x108cc50));
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3)));
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,((undefined1 *)(gen_frame + 0x28)),&(*(int * PTR32 *)(gen_frame + 0xc)),uVar2);
    F_0042c880(((undefined1 *)(gen_frame + 0x28)));
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0xc)));
    uVar6 = F_00429760((*(int * PTR32 *)(gen_frame + 0xc)),8,0x2c4);
    uVar4 = (uint)uVar6;
  }
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar4;
}

/* ref: FUN_00ab93a0 */
uint F_00ab93a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xab93a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  uint * puVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  ulonglong uVar7;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  piVar3 = (int *)F_00424750(REFG(int, 0x137104c));
  uVar4 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x2a,param_1);
  uVar6 = 0;
  if (uVar4 != 0) {
    puVar1 = *(uint * PTR32 *)(uVar4 + 4);
    uVar6 = 0;
    if (puVar1 != (uint *)0x0) {
      (*(int * PTR32 *)(gen_frame + 0x0)) = (int *)0x0;
      piVar5 = (int *)F_004296a0(8,0,0x2c4);
      (*(int * PTR32 *)(gen_frame + 0x0)) = piVar5;
      if (piVar5 != (int *)0x0) {
        *piVar5 = 0;
        piVar5[1] = 0;
      }
      *piVar5 = (int)&(*(int * PTR32 *)(gen_frame + 0x0));
      (*(undefined4 * PTR32 *)(gen_frame + 0x70)) = &(*(undefined4 *)(gen_frame + 0x6c));
      (*(undefined4 *)(gen_frame + 0x6c)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x6c)) = param_2;
      (*(char *)(gen_frame + 0x74)) = '\0';
      F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x6c)));
      if ((((*(undefined4 * PTR32 *)(gen_frame + 0x70)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x74)) != '\0')) && ((*(char *)(gen_frame + 0x74)) == '\x01')) {
        pvVar2 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x70));
        *(int *)((int)pvVar2 + 0x54) = *(int *)((int)pvVar2 + 0x54) + -1;
        if (*(int *)((int)pvVar2 + 0x54) < 1) {
          F_0042c880(pvVar2);
          F_00406ad0(pvVar2);
        }
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x70)) = &(*(undefined4 *)(gen_frame + 0x6c));
      (*(undefined4 *)(gen_frame + 0x6c)) = 0;
      (*(undefined4 *)(gen_frame + 0x6c)) = param_3;
      (*(char *)(gen_frame + 0x74)) = '\0';
      F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x6c)));
      if ((((*(undefined4 * PTR32 *)(gen_frame + 0x70)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x74)) != '\0')) && ((*(char *)(gen_frame + 0x74)) == '\x01')) {
        pvVar2 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x70));
        *(int *)((int)pvVar2 + 0x54) = *(int *)((int)pvVar2 + 0x54) + -1;
        if (*(int *)((int)pvVar2 + 0x54) < 1) {
          F_0042c880(pvVar2);
          F_00406ad0(pvVar2);
        }
      }
      F_0042aca0(param_4);
      F_0042cc20(((undefined1 *)(gen_frame + 0x18)),(*puVar1 & 0xffffff) + (int)puVar1,REFG(undefined4, 0x108cc50));
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3)));
      ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,((undefined1 *)(gen_frame + 0x18)),&(*(int * PTR32 *)(gen_frame + 0x0)),param_4);
      F_0042c880(((undefined1 *)(gen_frame + 0x18)));
      F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)));
      uVar7 = F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
      uVar6 = (uint)uVar7;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar6;
}

/* ref: FUN_00ab9550 */
uint F_00ab9550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab9550u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  undefined4 uVar2;
  undefined * pvVar3;
  uint uVar4;
  ulonglong uVar5;
  int * PTR32 * ppiVar6;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0x0;
  piVar1 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x4)) = piVar1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = 0;
    piVar1[1] = 0;
  }
  *piVar1 = (int)&(*(int * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (piVar1 == (int *)0x0) {
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x4)));
  }
  else {
    (*(uint * PTR32 *)(gen_frame + 0x20)) = &(*(uint *)(gen_frame + 0x1c));
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(uint *)(gen_frame + 0x1c)) = param_1;
    (*(char *)(gen_frame + 0x24)) = '\0';
    F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x1c)));
    if ((((*(uint * PTR32 *)(gen_frame + 0x20)) != (uint *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
      pvVar3 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x20));
      *(int *)((int)pvVar3 + 0x54) = *(int *)((int)pvVar3 + 0x54) + -1;
      if (*(int *)((int)pvVar3 + 0x54) < 1) {
        F_0042c880(pvVar3);
        F_00406ad0(pvVar3);
      }
    }
    uVar4 = param_2 & 0xffff;
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(uint *)(gen_frame + 0x1c)) = uVar4;
    (*(uint * PTR32 *)(gen_frame + 0x20)) = &(*(uint *)(gen_frame + 0x1c));
    (*(char *)(gen_frame + 0x24)) = '\0';
    F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x1c)));
    if ((((*(uint * PTR32 *)(gen_frame + 0x20)) != (uint *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
      pvVar3 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x20));
      *(int *)((int)pvVar3 + 0x54) = *(int *)((int)pvVar3 + 0x54) + -1;
      if (*(int *)((int)pvVar3 + 0x54) < 1) {
        F_0042c880(pvVar3);
        F_00406ad0(pvVar3);
      }
    }
    if (uVar4 == 0) {
      F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x4)));
    }
    else {
      uVar2 = 0x4d5;
      if (uVar4 == 1) {
        uVar2 = 0x4d4;
      }
      ppiVar6 = &(*(int * PTR32 *)(gen_frame + 0x4));
      pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
      F_0046aa70(pvVar3,uVar2,ppiVar6);
      F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x4)));
    }
  }
  uVar5 = F_00429760((*(int * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)uVar5;
}

/* ref: FUN_00ab96d0 */
uint F_00ab96d0(unsigned int gen_a0)
{
  GEN_ENTER(0xab96d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  undefined * pvVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  int * PTR32 * ppiVar5;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0x0;
  piVar1 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x4)) = piVar1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = 0;
    piVar1[1] = 0;
  }
  *piVar1 = (int)&(*(int * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if ((piVar1 == (int *)0x0) || (param_1 == 0)) {
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x4)));
  }
  else {
    (*(int *)(gen_frame + 0x1c)) = 0;
    (*(int *)(gen_frame + 0x1c)) = param_1;
    (*(int * PTR32 *)(gen_frame + 0x20)) = &(*(int *)(gen_frame + 0x1c));
    (*(char *)(gen_frame + 0x24)) = '\0';
    F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x4)),&(*(int *)(gen_frame + 0x1c)));
    if ((((*(int * PTR32 *)(gen_frame + 0x20)) != (int *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
      pvVar2 = (undefined *)*(*(int * PTR32 *)(gen_frame + 0x20));
      *(int *)((int)pvVar2 + 0x54) = *(int *)((int)pvVar2 + 0x54) + -1;
      if (*(int *)((int)pvVar2 + 0x54) < 1) {
        F_0042c880(pvVar2);
        F_00406ad0(pvVar2);
      }
    }
    ppiVar5 = &(*(int * PTR32 *)(gen_frame + 0x4));
    uVar4 = 0x4d6;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
    F_0046aa70(pvVar2,uVar4,ppiVar5);
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x4)));
  }
  uVar3 = F_00429760((*(int * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)uVar3;
}

/* ref: FUN_00ab97e0 */
uint F_00ab97e0(unsigned int gen_a0)
{
  GEN_ENTER(0xab97e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  undefined * pvVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  int * PTR32 * ppiVar5;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0x0;
  piVar1 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x4)) = piVar1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = 0;
    piVar1[1] = 0;
  }
  *piVar1 = (int)&(*(int * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (piVar1 == (int *)0x0) {
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x4)));
  }
  else {
    (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = param_1;
    (*(char *)(gen_frame + 0x24)) = '\0';
    F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x1c)));
    if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
      pvVar2 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
      *(int *)((int)pvVar2 + 0x54) = *(int *)((int)pvVar2 + 0x54) + -1;
      if (*(int *)((int)pvVar2 + 0x54) < 1) {
        F_0042c880(pvVar2);
        F_00406ad0(pvVar2);
      }
    }
    ppiVar5 = &(*(int * PTR32 *)(gen_frame + 0x4));
    uVar4 = 0x4e0;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
    F_0046aa70(pvVar2,uVar4,ppiVar5);
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x4)));
  }
  uVar3 = F_00429760((*(int * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)uVar3;
}

/* ref: FUN_00ab98f0 */
uint F_00ab98f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xab98f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  uVar2 = F_00424750(REFG(undefined4, 0x137104c));
  uVar4 = 0;
  if (uVar2 != 0) {
    F_0042b630(((undefined1 *)(gen_frame + 0x18)));
    if ((char)param_2 == '\x01') {
      uVar6 = 0x186;
    }
    else {
      if ((char)param_2 != '\x02') {
        uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x18)));
        F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
        return (uint)uVar5;
      }
      uVar6 = 0x187;
    }
    F_00ab0230(uVar6,((undefined1 *)(gen_frame + 0x18)));
    (*(int * PTR32 *)(gen_frame + 0x0)) = (int *)0x0;
    piVar3 = (int *)F_004296a0(8,0,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0x0)) = piVar3;
    if (piVar3 != (int *)0x0) {
      *piVar3 = 0;
      piVar3[1] = 0;
    }
    *piVar3 = (int)&(*(int * PTR32 *)(gen_frame + 0x0));
    (*(uint * PTR32 *)(gen_frame + 0x70)) = &(*(uint *)(gen_frame + 0x6c));
    (*(uint *)(gen_frame + 0x6c)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(uint *)(gen_frame + 0x6c)) = param_4;
    (*(char *)(gen_frame + 0x74)) = '\0';
    F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x0)),&(*(uint *)(gen_frame + 0x6c)));
    if ((((*(uint * PTR32 *)(gen_frame + 0x70)) != (uint *)0x0) && ((*(char *)(gen_frame + 0x74)) != '\0')) && ((*(char *)(gen_frame + 0x74)) == '\x01')) {
      pvVar1 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x70));
      *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
      if (*(int *)((int)pvVar1 + 0x54) < 1) {
        F_0042c880(pvVar1);
        F_00406ad0(pvVar1);
      }
    }
    (*(uint *)(gen_frame + 0x6c)) = 0;
    (*(uint * PTR32 *)(gen_frame + 0x70)) = (undefined4 *)0x0;
    (*(char *)(gen_frame + 0x74)) = -1;
    F_00490f90(&(*(uint *)(gen_frame + 0x6c)),((undefined1 *)(gen_frame + 0x18)));
    F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x0)),&(*(uint *)(gen_frame + 0x6c)));
    if ((((*(uint * PTR32 *)(gen_frame + 0x70)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x74)) != '\0')) && ((*(char *)(gen_frame + 0x74)) == '\x01')) {
      pvVar1 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x70));
      *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
      if (*(int *)((int)pvVar1 + 0x54) < 1) {
        F_0042c880(pvVar1);
        F_00406ad0(pvVar1);
      }
    }
    (*(uint *)(gen_frame + 0x6c)) = 0;
    (*(uint *)(gen_frame + 0x6c)) = param_3 & 0xff;
    (*(uint * PTR32 *)(gen_frame + 0x70)) = &(*(uint *)(gen_frame + 0x6c));
    (*(char *)(gen_frame + 0x74)) = '\0';
    F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x0)),&(*(uint *)(gen_frame + 0x6c)));
    if ((((*(uint * PTR32 *)(gen_frame + 0x70)) != (uint *)0x0) && ((*(char *)(gen_frame + 0x74)) != '\0')) && ((*(char *)(gen_frame + 0x74)) == '\x01')) {
      pvVar1 = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x70));
      *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
      if (*(int *)((int)pvVar1 + 0x54) < 1) {
        F_0042c880(pvVar1);
        F_00406ad0(pvVar1);
      }
    }
    F_00aaece0(uVar2,0x4cf,param_1,&(*(int * PTR32 *)(gen_frame + 0x0)));
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)));
    F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0x0)) = (int *)0x0;
    uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x18)));
    uVar4 = (uint)uVar5;
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar4;
}

/* ref: FUN_00ab9ad0 */
uint F_00ab9ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab9ad0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar1 = F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0;
  if (uVar1 != 0) {
    (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0x0;
    piVar2 = (int *)F_004296a0(8,0,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0x4)) = piVar2;
    if (piVar2 != (int *)0x0) {
      *piVar2 = 0;
      piVar2[1] = 0;
    }
    *piVar2 = (int)&(*(int * PTR32 *)(gen_frame + 0x4));
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(uint *)(gen_frame + 0x1c)) = param_2;
    (*(uint * PTR32 *)(gen_frame + 0x20)) = &(*(uint *)(gen_frame + 0x1c));
    (*(char *)(gen_frame + 0x24)) = '\0';
    F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x1c)));
    if ((((*(uint * PTR32 *)(gen_frame + 0x20)) != (uint *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
      this = (undefined *)*(*(uint * PTR32 *)(gen_frame + 0x20));
      *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + -1;
      if (*(int *)((int)this + 0x54) < 1) {
        F_0042c880(this);
        F_00406ad0(this);
      }
    }
    uVar3 = param_3 & 0xffff;
    uVar4 = (*(undefined4 *)(gen_frame + 0x0));
    if (uVar3 != 0) {
      if (uVar3 == 1) {
        uVar4 = 0x4d0;
      }
      else {
        (*(uint *)(gen_frame + 0x1c)) = 0;
        (*(uint *)(gen_frame + 0x1c)) = uVar3;
        uVar4 = 0x4d1;
        (*(uint * PTR32 *)(gen_frame + 0x20)) = &(*(uint *)(gen_frame + 0x1c));
        (*(char *)(gen_frame + 0x24)) = '\0';
        F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x1c)));
        F_004917c0(&(*(uint *)(gen_frame + 0x1c)));
      }
    }
    F_00aaece0(uVar1,uVar4,param_1,&(*(int * PTR32 *)(gen_frame + 0x4)));
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x4)));
    uVar5 = F_00429760((*(int * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
    uVar3 = (uint)uVar5;
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar3;
}

/* ref: FUN_00ab9c00 */
uint F_00ab9c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab9c00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  ulonglong uVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar1 = F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0;
  if (uVar1 != 0) {
    (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0x0;
    piVar2 = (int *)F_004296a0(8,0,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0x4)) = piVar2;
    if (piVar2 != (int *)0x0) {
      *piVar2 = 0;
      piVar2[1] = 0;
    }
    *piVar2 = (int)&(*(int * PTR32 *)(gen_frame + 0x4));
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = param_2;
    (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
    (*(char *)(gen_frame + 0x24)) = '\0';
    F_00493bc0(&(*(int * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x1c)));
    if ((((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x24)) != '\0')) && ((*(char *)(gen_frame + 0x24)) == '\x01')) {
      this = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20));
      *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + -1;
      if (*(int *)((int)this + 0x54) < 1) {
        F_0042c880(this);
        F_00406ad0(this);
      }
    }
    F_00aaece0(uVar1,0x4eb,param_1,&(*(int * PTR32 *)(gen_frame + 0x4)));
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x4)));
    uVar4 = F_00429760((*(int * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
    uVar3 = (uint)uVar4;
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar3;
}

/* ref: FUN_00ab9cf0 */
uint F_00ab9cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xab9cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  int * piVar1;
  int * piVar2;
  undefined * pvVar3;
  ulonglong uVar4;
  undefined1 * puVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  F_0042cc20(((undefined1 *)(gen_frame + 0x38)),&REFG(undefined, 0x10e88fa),REFG(undefined4, 0x108cc50));
  (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)0x0;
  piVar2 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x20)) = piVar2;
  if (piVar2 != (int *)0x0) {
    *piVar2 = 0;
    piVar2[1] = 0;
  }
  *piVar2 = (int)&(*(int * PTR32 *)(gen_frame + 0x20));
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  switch((unsigned int)(uintptr_t)(*param_2)) {
  case 0: ;
    F_00ab98f0(*(undefined4 *)(param_2 + 2),(uint)*(byte *)(param_2 + 4),
                 (uint)*(byte *)(param_2 + 6),*(undefined4 *)(param_2 + 8));
    break;
  case 1: ;
    if (REFG(int, 0x1379694) == 0) {
LAB_00ab9dd9: ;
      F_00493180(&(*(int * PTR32 *)(gen_frame + 0x20)));
      goto LAB_00ab9f00;
    }
    F_00ab9090(*(undefined4 *)(REFG(int, 0x1379694) + 0x74),*(undefined4 *)(param_2 + 0xc));
    F_00ab9ad0(*(undefined4 *)(param_2 + 2),*(undefined4 *)(param_2 + 8),(uint)(ushort)param_2[10]
                );
    break;
  case 2: ;
    F_00ab9550(*(undefined4 *)(param_2 + 2),(uint)(ushort)param_2[4]);
    break;
  case 3: ;
    F_00ab9ad0(*(undefined4 *)(param_2 + 2),*(undefined4 *)(param_2 + 4),(uint)(ushort)param_2[6])
    ;
    break;
  case 4: ;
    uVar6 = 0x4e5;
    goto LAB_00ab9eda;
  case 5: ;
    if (piVar1 != (int *)0x0) {
      F_004816e0(((undefined1 *)(gen_frame + 0x8)));
      F_00aaece0(piVar1,0x4e7,*(undefined4 *)(param_2 + 2),((undefined1 *)(gen_frame + 0x8)));
      F_00493180(((undefined1 *)(gen_frame + 0x8)));
    }
    break;
  case 6: ;
    if (piVar1 == (int *)0x0) goto LAB_00ab9dd9;
    if (*(int *)(param_2 + 2) == 0) {
      uVar6 = 0x4e9;
      pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
      F_0046a630(pvVar3,uVar6);
    }
    else {
      F_004816e0(((undefined1 *)(gen_frame + 0x8)));
      (*(undefined4 *)(gen_frame + 0x8c)) = 0;
      (*(undefined4 *)(gen_frame + 0x8c)) = *(undefined4 *)(param_2 + 2);
      (*(undefined4 * PTR32 *)(gen_frame + 0x90)) = &(*(undefined4 *)(gen_frame + 0x8c));
      (*(undefined1 *)(gen_frame + 0x94)) = 0;
      F_00493b50(((undefined1 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x8c)));
      F_004917c0(&(*(undefined4 *)(gen_frame + 0x8c)));
      puVar5 = ((undefined1 *)(gen_frame + 0x8));
      uVar6 = 0x4ea;
      pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
      F_0046aa70(pvVar3,uVar6,puVar5);
      F_00493180(((undefined1 *)(gen_frame + 0x8)));
    }
    break;
  case 8: ;
    uVar6 = 0x4dd;
LAB_00ab9eda: ;
    F_00ab9000(uVar6);
    break;
  case 9: ;
    F_00ab9c00(*(undefined4 *)(param_2 + 2),*(undefined4 *)(param_2 + 4));
  }
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x20)));
  F_00429760((*(int * PTR32 *)(gen_frame + 0x20)),8,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)0x0;
LAB_00ab9f00: ;
  uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0x38)));
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
  return (uint)uVar4;
}

/* ref: FUN_00ab9f70 */
uint F_00ab9f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xab9f70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x2f08) = param_1;
  *(undefined4 *)((int)this + 0x2f0c) = param_2;
  return param_1;
}

/* ref: FUN_00ab9fb0 */
unsigned int F_00ab9fb0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xab9fb0u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)(fVar1 + (float10)*in_ecx);
  in_ecx[1] = (float)((float10)in_ecx[1] + fVar1);
  in_ecx[2] = (float)(fVar1 + (float10)in_ecx[2]);
  return 0;
}

/* ref: FUN_00ab9fe0 */
unsigned int F_00ab9fe0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xab9fe0u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)(fVar1 + (float10)*in_ecx);
  in_ecx[1] = (float)((float10)in_ecx[1] + fVar1);
  in_ecx[2] = (float)(fVar1 + (float10)in_ecx[2]);
  return 0;
}

/* ref: FUN_00aba030 */
byte F_00aba030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaba030u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x10) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00aba090 */
uint F_00aba090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaba090u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x48) = param_2;
  return param_2;
}

/* ref: FUN_00aba0f0 */
unsigned int F_00aba0f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xaba0f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  *(float *)(param_1 + 2) = param_4;
  *param_1 = (undefined2)param_2;
  *(undefined1 *)(param_1 + 1) = (undefined1)param_3;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return 0;
}

/* ref: FUN_00aba120 */
int F_00aba120(unsigned int gen_a0)
{
  GEN_ENTER(0xaba120u, gen_a0, 0u, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  int iVar1;
  char cVar2;
  char * pcVar3;
  int iVar4;
  
  cVar2 = *param_1;
  iVar1 = 0;
  if (cVar2 != '\0') {
    iVar4 = 1;
    pcVar3 = param_1;
    do {
      pcVar3 = pcVar3 + 1;
      iVar1 = iVar1 + cVar2 * iVar4;
      cVar2 = *pcVar3;
      iVar4 = iVar4 + 1;
    } while (cVar2 != '\0');
  }
  return iVar1;
}

/* ref: FUN_00aba150 */
uint F_00aba150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaba150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00aba170 */
uint F_00aba170(unsigned int gen_a0)
{
  GEN_ENTER(0xaba170u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 1 << ((byte)param_1 & 7);
}

/* ref: FUN_00aba190 */
uint F_00aba190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaba190u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  return param_1 * param_3 + (param_2 >> 3);
}

/* ref: FUN_00aba220 */
uint F_00aba220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaba220u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x50 + *in_ecx;
}

/* ref: FUN_00aba240 */
uint F_00aba240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaba240u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x50 + *in_ecx;
}

/* ref: FUN_00aba280 */
uint F_00aba280(unsigned int gen_a0)
{
  GEN_ENTER(0xaba280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar2 = F_00406b30(*(int *)this);
    uVar1 = (uint)uVar2;
    *(undefined4 *)this = 0;
  }
  return uVar1;
}

/* ref: FUN_00aba2a0 */
byte F_00aba2a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaba2a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  iVar4 = 0;
  uVar2 = iVar3 / 2;
  if (iVar3 < 0) {
    return 0;
  }
  do {
    uVar1 = *(uint *)(*(int *)this + uVar2 * 8);
    if (param_1 < uVar1) {
      iVar4 = uVar2 + 1;
    }
    else {
      if (param_1 <= uVar1) {
        *param_2 = uVar2;
        *param_3 = uVar2;
        uVar2 = *param_2;
        while ((0 < (int)uVar2 && (*(uint *)(*(int *)this + -8 + *param_2 * 8) == param_1))) {
          uVar2 = *param_2 - 1;
          *param_2 = uVar2;
        }
        if (*param_3 < *(int *)((int)this + 4) - 1U) {
          do {
            if (*(uint *)(*(int *)this + 8 + *param_3 * 8) != param_1) {
              return 1;
            }
            *param_3 = *param_3 + 1;
          } while (*param_3 < *(int *)((int)this + 4) - 1U);
        }
        return 1;
      }
      iVar3 = uVar2 - 1;
    }
    uVar2 = (iVar3 - iVar4) / 2 + iVar4;
  } while (iVar4 <= iVar3);
  return 0;
}

/* ref: FUN_00aba340 */
uint F_00aba340(unsigned int gen_a0)
{
  GEN_ENTER(0xaba340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar2 = F_00406b30(*(int *)this);
    uVar1 = (uint)uVar2;
    *(undefined4 *)this = 0;
  }
  return uVar1;
}

/* ref: FUN_00aba360 */
byte F_00aba360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaba360u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  iVar4 = 0;
  uVar2 = iVar3 / 2;
  if (iVar3 < 0) {
    return 0;
  }
  do {
    uVar1 = *(uint *)(*(int *)this + uVar2 * 8);
    if (param_1 < uVar1) {
      iVar4 = uVar2 + 1;
    }
    else {
      if (param_1 <= uVar1) {
        *param_2 = uVar2;
        *param_3 = uVar2;
        uVar2 = *param_2;
        while ((0 < (int)uVar2 && (*(uint *)(*(int *)this + -8 + *param_2 * 8) == param_1))) {
          uVar2 = *param_2 - 1;
          *param_2 = uVar2;
        }
        if (*param_3 < *(int *)((int)this + 4) - 1U) {
          do {
            if (*(uint *)(*(int *)this + 8 + *param_3 * 8) != param_1) {
              return 1;
            }
            *param_3 = *param_3 + 1;
          } while (*param_3 < *(int *)((int)this + 4) - 1U);
        }
        return 1;
      }
      iVar3 = uVar2 - 1;
    }
    uVar2 = (iVar3 - iVar4) / 2 + iVar4;
  } while (iVar4 <= iVar3);
  return 0;
}

/* ref: FUN_00aba400 */
uint F_00aba400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaba400u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00aba430 */
uint F_00aba430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaba430u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00aba490 */
uint F_00aba490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaba490u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 << 4,param_2,800);
  return uVar1;
}

/* ref: FUN_00aba4b0 */
uint F_00aba4b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaba4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 << 4,800);
  return (uint)uVar1;
}

/* ref: FUN_00aba510 */
uint F_00aba510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaba510u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00aba570 */
uint F_00aba570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaba570u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x50,param_2,800);
  return uVar1;
}

/* ref: FUN_00aba5a0 */
uint F_00aba5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaba5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x50,800);
  return (uint)uVar1;
}

/* ref: FUN_00aba5d0 */
uint F_00aba5d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaba5d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00aba600 */
unsigned int F_00aba600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaba600u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  
  puVar2 = param_2;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *in_ecx = *puVar2;
    puVar2 = puVar2 + 1;
    in_ecx = in_ecx + 1;
  }
  return 0;
}

/* ref: FUN_00aba680 */
uint F_00aba680(unsigned int gen_a0)
{
  GEN_ENTER(0xaba680u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00aba690 */
uint F_00aba690(unsigned int gen_a0)
{
  GEN_ENTER(0xaba690u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00aba6a0 */
uint F_00aba6a0(unsigned int gen_a0)
{
  GEN_ENTER(0xaba6a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00aba6b0 */
uint F_00aba6b0(unsigned int gen_a0)
{
  GEN_ENTER(0xaba6b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00aba6c0 */
unsigned int F_00aba6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaba6c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  return 0;
}

/* ref: FUN_00aba6f0 */
unsigned int F_00aba6f0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0xaba6f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  in_ecx[7] = (undefined4)gen_fl2bits(param_3);
  in_ecx[8] = (undefined4)gen_fl2bits(param_4);
  *in_ecx = 400;
  in_ecx[1] = 0x20;
  in_ecx[6] = param_2;
  in_ecx[9] = (undefined4)gen_fl2bits(param_5);
  return 0;
}

/* ref: FUN_00aba730 */
unsigned int F_00aba730(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0xaba730u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  in_ecx[7] = (undefined4)gen_fl2bits(param_3);
  in_ecx[8] = (undefined4)gen_fl2bits(param_4);
  *in_ecx = 0x194;
  in_ecx[1] = 0x20;
  in_ecx[6] = param_2;
  in_ecx[9] = (undefined4)gen_fl2bits(param_5);
  return 0;
}

/* ref: FUN_00aba7a0 */
uint F_00aba7a0(unsigned int gen_a0)
{
  GEN_ENTER(0xaba7a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00aba7e0 */
uint F_00aba7e0(unsigned int gen_a0)
{
  GEN_ENTER(0xaba7e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00aba7f0 */
uint F_00aba7f0(unsigned int gen_a0)
{
  GEN_ENTER(0xaba7f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00530100(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1);
  return uVar1;
}

/* ref: FUN_00aba840 */
byte F_00aba840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaba840u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  return (*((byte *)GEN_TOP(((param_3 >> 3) + param_2 * param_4 + param_1))) & '\x01' << ((byte)param_3 & 7))
         != 0;
}

/* ref: FUN_00aba870 */
uint F_00aba870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaba870u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x7c) + param_2 * 0xc;
}

/* ref: FUN_00aba890 */
uint F_00aba890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaba890u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00aba8a0 */
uint F_00aba8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaba8a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00aba8d0 */
uint F_00aba8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaba8d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  
  *(uint *)((int)this + 4) = param_1;
  puVar1 = (undefined4 *)
           F_00406bb0(-(uint)((int)((ulonglong)param_1 * 8 >> 0x20) != 0) |
                        (uint)((ulonglong)param_1 * 8),0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    iVar3 = param_1 - 1;
    puVar2 = puVar1;
    if (-1 < iVar3) {
      do {
        *puVar2 = 0;
        puVar2[1] = 0;
        iVar3 = iVar3 + -1;
        puVar2 = puVar2 + 2;
      } while (-1 < iVar3);
      *(undefined4 * PTR32 *)this = puVar1;
      return (uint)puVar1;
    }
  }
  *(undefined4 * PTR32 *)this = puVar1;
  return (uint)puVar1;
}

/* ref: FUN_00aba940 */
uint F_00aba940(unsigned int gen_a0)
{
  GEN_ENTER(0xaba940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  uint * puVar5;
  ulonglong uVar6;
  uint local_10;
  uint local_c;
  undefined4 * local_8;
  
  uVar2 = *(uint *)((int)this + 4);
  local_8 = (undefined4 *)
            F_00406bb0(-(uint)((int)((ulonglong)uVar2 * 8 >> 0x20) != 0) |
                         (uint)((ulonglong)uVar2 * 8),0,0);
  puVar3 = local_8;
  if (local_8 == (undefined4 *)0x0) {
    local_8 = (undefined4 *)0x0;
  }
  else {
    while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3 = puVar3 + 2;
    }
  }
  uVar2 = *(uint *)((int)this + 4);
  local_10 = 0;
  if (uVar2 != 0) {
    do {
      uVar4 = 0;
      uVar1 = 0;
      local_c = 0;
      if (uVar2 != 0) {
        puVar5 = *(uint * PTR32 *)this;
        do {
          if ((puVar5[1] != 0) && (local_c < *puVar5)) {
            uVar4 = uVar1;
            local_c = *puVar5;
          }
          uVar1 = uVar1 + 1;
          puVar5 = puVar5 + 2;
        } while (uVar1 < uVar2);
      }
      local_8[local_10 * 2 + 1] = *(undefined4 *)(*(int *)this + 4 + uVar4 * 8);
      local_8[local_10 * 2] = *(undefined4 *)(*(int *)this + uVar4 * 8);
      *(undefined4 *)(*(int *)this + 4 + uVar4 * 8) = 0;
      uVar2 = *(uint *)((int)this + 4);
      local_10 = local_10 + 1;
    } while (local_10 < uVar2);
  }
  uVar6 = F_00c46aa0(*(undefined4 *)this,local_8,*(int *)((int)this + 4) * 8);
  uVar2 = (uint)uVar6;
  if (local_8 != (undefined4 *)0x0) {
    uVar6 = F_00406b30(local_8);
    uVar2 = (uint)uVar6;
  }
  return uVar2;
}

/* ref: FUN_00abaa30 */
uint F_00abaa30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabaa30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  
  *(uint *)((int)this + 4) = param_1;
  puVar1 = (undefined4 *)
           F_00406bb0(-(uint)((int)((ulonglong)param_1 * 8 >> 0x20) != 0) |
                        (uint)((ulonglong)param_1 * 8),0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    iVar3 = param_1 - 1;
    puVar2 = puVar1;
    if (-1 < iVar3) {
      do {
        *puVar2 = 0;
        puVar2[1] = 0;
        iVar3 = iVar3 + -1;
        puVar2 = puVar2 + 2;
      } while (-1 < iVar3);
      *(undefined4 * PTR32 *)this = puVar1;
      return (uint)puVar1;
    }
  }
  *(undefined4 * PTR32 *)this = puVar1;
  return (uint)puVar1;
}

/* ref: FUN_00abaaa0 */
uint F_00abaaa0(unsigned int gen_a0)
{
  GEN_ENTER(0xabaaa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  uint * puVar5;
  ulonglong uVar6;
  uint local_10;
  uint local_c;
  undefined4 * local_8;
  
  uVar2 = *(uint *)((int)this + 4);
  local_8 = (undefined4 *)
            F_00406bb0(-(uint)((int)((ulonglong)uVar2 * 8 >> 0x20) != 0) |
                         (uint)((ulonglong)uVar2 * 8),0,0);
  puVar3 = local_8;
  if (local_8 == (undefined4 *)0x0) {
    local_8 = (undefined4 *)0x0;
  }
  else {
    while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3 = puVar3 + 2;
    }
  }
  uVar2 = *(uint *)((int)this + 4);
  local_10 = 0;
  if (uVar2 != 0) {
    do {
      uVar4 = 0;
      uVar1 = 0;
      local_c = 0;
      if (uVar2 != 0) {
        puVar5 = *(uint * PTR32 *)this;
        do {
          if ((puVar5[1] != 0) && (local_c < *puVar5)) {
            uVar4 = uVar1;
            local_c = *puVar5;
          }
          uVar1 = uVar1 + 1;
          puVar5 = puVar5 + 2;
        } while (uVar1 < uVar2);
      }
      local_8[local_10 * 2 + 1] = *(undefined4 *)(*(int *)this + 4 + uVar4 * 8);
      local_8[local_10 * 2] = *(undefined4 *)(*(int *)this + uVar4 * 8);
      *(undefined4 *)(*(int *)this + 4 + uVar4 * 8) = 0;
      uVar2 = *(uint *)((int)this + 4);
      local_10 = local_10 + 1;
    } while (local_10 < uVar2);
  }
  uVar6 = F_00c46aa0(*(undefined4 *)this,local_8,*(int *)((int)this + 4) * 8);
  uVar2 = (uint)uVar6;
  if (local_8 != (undefined4 *)0x0) {
    uVar6 = F_00406b30(local_8);
    uVar2 = (uint)uVar6;
  }
  return uVar2;
}

/* ref: FUN_00ababf0 */
uint F_00ababf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xababf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00abac00 */
byte F_00abac00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabac00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00abac20 */
uint F_00abac20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabac20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 4;
  if (-(uVar1 >> 1) - 1 < uVar1) {
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

/* ref: FUN_00abac50 */
uint F_00abac50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabac50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x50;
  if (-(uVar1 >> 1) - 1 < uVar1) {
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

/* ref: FUN_00abac90 */
uint F_00abac90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabac90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abacc0 */
uint F_00abacc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabacc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abacf0 */
uint F_00abacf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabacf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abad20 */
uint F_00abad20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabad20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abad50 */
uint F_00abad50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabad50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abad80 */
uint F_00abad80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabad80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abadb0 */
uint F_00abadb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabadb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abade0 */
uint F_00abade0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabade0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abae10 */
uint F_00abae10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabae10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abae40 */
uint F_00abae40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabae40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abae70 */
uint F_00abae70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabae70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abaea0 */
uint F_00abaea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabaea0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abaed0 */
uint F_00abaed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabaed0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abaf00 */
uint F_00abaf00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabaf00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abaf30 */
uint F_00abaf30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabaf30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abaf60 */
uint F_00abaf60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabaf60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abaf90 */
uint F_00abaf90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabaf90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abafc0 */
uint F_00abafc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabafc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abaff0 */
uint F_00abaff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabaff0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb020 */
uint F_00abb020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb020u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb050 */
uint F_00abb050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb050u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb080 */
uint F_00abb080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb080u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb0b0 */
uint F_00abb0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb0b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb0e0 */
uint F_00abb0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb110 */
uint F_00abb110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb110u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb140 */
uint F_00abb140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb140u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb170 */
uint F_00abb170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb170u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb1a0 */
uint F_00abb1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb1d0 */
uint F_00abb1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb1d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb200 */
uint F_00abb200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb200u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb230 */
uint F_00abb230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb230u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb260 */
uint F_00abb260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb260u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb290 */
uint F_00abb290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb290u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb2c0 */
uint F_00abb2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb2f0 */
uint F_00abb2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052ff60(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00abb320 */
uint F_00abb320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xabb320u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0052fdd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),param_1,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(uVar1 + 4);
}

