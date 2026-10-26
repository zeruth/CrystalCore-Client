#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_006a7260 */
unsigned int F_006a7260(unsigned int gen_a0)
{
  GEN_ENTER(0x6a7260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006a2f90(this);
  F_006a3030(this);
  F_006a30d0(this);
  F_006a3170(this);
  F_006a3210(this);
  if (*(short *)((int)this + 0x748) == 1) {
    F_00694230(this);
    return 0;
  }
  return 0;
}

/* ref: Client::Graphics::Scene::BGObject::vf10 */
unsigned int F_006a72a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6a72a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  short * psVar5;
  uint uVar6;
  undefined * pBVar7;
  undefined4 local_8;
  
  if (((byte)this[100] & 4) == 0) {
    this[100] = (undefined1)((byte)this[100] | 4);
    this_00 = *(undefined * PTR32 *)(this + 0x70);
    uVar3 = (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this_00 + 0xa8) + 4))) + 0x1e +
                           *(int *)((int)this_00 + 0xa8))));
    uVar6 = 0;
    uVar4 = 0;
    if (uVar3 != 0) {
      psVar5 = ((short *)GEN_TOP((*(int *)((int)this_00 + 0xb8) + 2)));
      do {
        if (*psVar5 != 0) {
          uVar6 = 1;
          *(uint *)(this + 0x74) = *(uint *)(this + 0x74) | 1;
          break;
        }
        uVar4 = uVar4 + 1;
        psVar5 = psVar5 + 0x1e;
      } while (uVar4 < uVar3);
    }
    uVar4 = (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this_00 + 0xa8) + 4))) + 0x1e +
                           *(int *)((int)this_00 + 0xa8))));
    uVar3 = 0;
    if (uVar4 != 0) {
      psVar5 = ((short *)GEN_TOP((*(int *)((int)this_00 + 0xb8) + 0xe)));
      do {
        if (*psVar5 != 0) {
          *(uint *)(this + 0x74) = *(uint *)(this + 0x74) | 2 << (char)uVar6 * '\x04';
          uVar6 = uVar6 + 1;
          break;
        }
        uVar3 = uVar3 + 1;
        psVar5 = psVar5 + 0x1e;
      } while (uVar3 < uVar4);
    }
    if (((*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this_00 + 0xa8) + 4))) + 0x23 +
                   *(int *)((int)this_00 + 0xa8)))) & 0x10) != 0) &&
       (*((short *)GEN_TOP((*(int *)((int)this_00 + 0xb8) + 0xb6))) != 0)) {
      *(uint *)(this + 0x74) = *(uint *)(this + 0x74) | 3 << (char)uVar6 * '\x04';
      uVar6 = uVar6 + 1;
    }
    if (uVar6 < 9) {
      if (1 < uVar6) {
        this[0x95] = (undefined1)((byte)this[0x95] | 8);
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                          (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),uVar6 * 4,4);
        *(uint *)(this + 0x78) = uVar3;
        if (uVar3 == 0) {
          return 0;
        }
      }
      if (((byte)this[0x95] & 8) == 0) {
        pBVar7 = this + 0x78;
      }
      else {
        pBVar7 = *(undefined * PTR32 *)(this + 0x78);
      }
      bVar2 = F_006ae750(this_00);
      if (bVar2 != 0) {
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x137127c) + 0xad10) + 0xc))))(REFG(int, 0x137127c) + 0xad10,this_00);
        *(uint *)pBVar7 = uVar3;
        pBVar7 = pBVar7 + 4;
        if (uVar3 == 0) {
          return 0;
        }
      }
      bVar2 = F_006ae790(this_00);
      if (bVar2 != 0) {
        uVar3 = F_006257b0(this_00);
        *(uint *)pBVar7 = uVar3;
        pBVar7 = pBVar7 + 4;
        if (uVar3 == 0) {
          return 0;
        }
      }
      if (((*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this_00 + 0xa8) + 4))) + 0x23 +
                     *(int *)((int)this_00 + 0xa8)))) & 0x10) != 0) &&
         (*((short *)GEN_TOP((*(int *)((int)this_00 + 0xb8) + 0xb6))) != 0)) {
        uVar3 = F_00637c00(this_00);
        *(uint *)pBVar7 = uVar3;
        if (uVar3 == 0) {
          return 0;
        }
      }
      uVar3 = F_00b14060(REFG(undefined4, 0x1370c1c),1);
      *(uint *)(this + 0x60) = uVar3;
      if (uVar3 == 0) {
        this[0x65] = (undefined1)0x4;
        return 0;
      }
      *(undefined * PTR32 *)(uVar3 + 4) = this;
      iVar1 = *(int *)(this + 0x60);
      *(ushort *)(iVar1 + 0xe) =
           (ushort)((*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this_00 + 0xa8) + 4))) + 0x23 +
                              *(int *)((int)this_00 + 0xa8)))) & 1) == 1) << 0xf |
           *(ushort *)(iVar1 + 0xe) & 0x7fff;
      if ((*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this_00 + 0xa8) + 4))) + 0x23 +
                    *(int *)((int)this_00 + 0xa8)))) & 4) != 0) {
        F_00b7f420(REFG(undefined4, 0x13712a4),iVar1);
      }
      F_0068f210(this);
      ((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this,1);
      local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),*(undefined1 *)(REFG(int, 0x1371278) + 0x11));
      F_00502350(*(undefined * PTR32 *)(this + 0x70),(uint)*(byte *)(REFG(int, 0x1371278) + 0x10));
      F_005046c0(*(undefined * PTR32 *)(this + 0x70),local_8);
      uVar3 = F_00c4f2dd();
      *(short *)(this + 0x82) = (short)uVar3;
      uVar3 = F_00c4f2dd();
      *(short *)(this + 0x84) = (short)uVar3;
      F_006a3820(this,(uint)*(ushort *)(this + 0x88));
    }
  }
  return 0;
}

/* ref: FUN_006a7520 */
byte F_006a7520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6a7520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char * param_2 = (char *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  char cVar1;
  int * piVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  char * pcVar6;
  
  if (param_1 == (char *)0x0) {
LAB_006a7546: ;
    bVar3 = false;
  }
  else {
    pcVar6 = param_1;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if (pcVar6 == param_1 + 1) goto LAB_006a7546;
    bVar3 = true;
  }
  if (param_2 == (char *)0x0) {
LAB_006a7561: ;
    bVar4 = false;
  }
  else {
    pcVar6 = param_2;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    bVar4 = true;
    if (pcVar6 == param_2 + 1) goto LAB_006a7561;
  }
  if ((bVar3) && (bVar4)) {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  if (bVar3) {
    if (bVar5 != 0) {
      bVar5 = F_006a4910(this,param_1,0);
      if (bVar5 != 0) {
        bVar5 = 1;
        goto LAB_006a75bb;
      }
    }
    bVar5 = 0;
  }
  else {
    piVar2 = *(int * PTR32 *)((int)this + 0x78);
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
      *(undefined4 *)((int)this + 0x78) = 0;
    }
    if (*(int *)((int)this + 0x70) != 0) {
      F_0050c620(*(int *)((int)this + 0x70),0,0);
      *(undefined4 *)((int)this + 0x70) = 0;
    }
  }
LAB_006a75bb: ;
  if (!bVar4) {
    piVar2 = *(int * PTR32 *)((int)this + 0x7c);
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
      *(undefined4 *)((int)this + 0x7c) = 0;
    }
    if (*(int *)((int)this + 0x74) != 0) {
      F_0050c620(*(int *)((int)this + 0x74),0,0);
      *(undefined4 *)((int)this + 0x74) = 0;
    }
    if (bVar5 == 0) {
      *(undefined1 *)((int)this + 0x65) = 4;
    }
    return bVar5;
  }
  if (bVar5 != 0) {
    bVar5 = F_006a4a30(this,param_2,0);
    if (bVar5 != 0) {
      return 1;
    }
  }
  *(undefined1 *)((int)this + 0x65) = 4;
  return 0;
}

/* ref: FUN_006a7630 */
uint F_006a7630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6a7630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char * param_2 = (char *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  char cVar1;
  int * piVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  char * pcVar6;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  undefined3 uVar7;
  bool bVar8;
  
  if (param_1 == (char *)0x0) {
LAB_006a7656: ;
    bVar4 = false;
  }
  else {
    pcVar6 = param_1;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    bVar4 = true;
    if (pcVar6 == param_1 + 1) goto LAB_006a7656;
  }
  if (param_2 == (char *)0x0) {
LAB_006a7673: ;
    bVar3 = false;
  }
  else {
    pcVar6 = param_2;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    bVar3 = true;
    if (pcVar6 == param_2 + 1) goto LAB_006a7673;
  }
  bVar8 = true;
  if (bVar4) {
    bVar5 = F_006a4ba0(this,param_1,0);
    bVar8 = bVar5 != 0;
    uVar7 = extraout_var;
  }
  else {
    piVar2 = *(int * PTR32 *)((int)this + 0x78);
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
      *(undefined4 *)((int)this + 0x78) = 0;
    }
    uVar7 = 0;
    if (*(int *)((int)this + 0x70) != 0) {
      F_0050c620(*(int *)((int)this + 0x70),0,0);
      *(undefined4 *)((int)this + 0x70) = 0;
      uVar7 = extraout_var_00;
    }
  }
  if (bVar3) {
    if (bVar8 != false) {
      bVar5 = F_006a4c80(this,param_2,0);
      uVar7 = extraout_var_01;
      if (bVar5 != 0) {
        bVar8 = true;
        goto LAB_006a7700;
      }
    }
    bVar8 = false;
  }
  else {
    piVar2 = *(int * PTR32 *)((int)this + 0x7c);
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
      *(undefined4 *)((int)this + 0x7c) = 0;
    }
    uVar7 = 0;
    if (*(int *)((int)this + 0x74) != 0) {
      F_0050c620(*(int *)((int)this + 0x74),0,0);
      *(undefined4 *)((int)this + 0x74) = 0;
      uVar7 = extraout_var_02;
    }
  }
LAB_006a7700: ;
  if ((!bVar4) && (!bVar3)) {
    *(undefined1 *)((int)this + 0x65) = 3;
    return CONCAT31(uVar7,1);
  }
  if (bVar8 == false) {
    *(undefined1 *)((int)this + 0x65) = 4;
  }
  return CONCAT31(uVar7,bVar8);
}

/* ref: Client::Graphics::Scene::VfxObject::vf4 */
uint F_006a7730(unsigned int gen_a0)
{
  GEN_ENTER(0x6a7730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  code * pcVar1;
  float10 fVar2;
  byte bVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  int iVar5;
  undefined4 * puVar6;
  undefined * pVVar7;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  if ((*(uint *)(this + 0x24) >> 1 & 1) != 0) {
    fVar2 = (float10)0;
    (*(float *)(gen_frame + 0x30)) = (float)fVar2;
    ((undefined4 *)(gen_frame + 0x0))[0] = *(undefined4 *)(this + 0x50);
    (*(float *)(gen_frame + 0x34)) = (float)fVar2;
    (*(float *)(gen_frame + 0x38)) = (float)fVar2;
    ((undefined4 *)(gen_frame + 0x0))[1] = 0;
    ((undefined4 *)(gen_frame + 0x0))[2] = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(this + 0x54);
    (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)(this + 0x58);
    F_004efe70(((undefined4 *)(gen_frame + 0x0)),(uint)(this + 0x40));
    (*(float *)(gen_frame + 0x30)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x30) + (float10)(*(float *)(gen_frame + 0x30)))));
    (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x34)) + (float10)*(float *)(this + 0x34))));
    (*(float *)(gen_frame + 0x38)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x38)) + (float10)*(float *)(this + 0x38))));
    puVar6 = ((undefined4 *)(gen_frame + 0x0));
    pVVar7 = this + 0x250;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pVVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      pVVar7 = pVVar7 + 4;
    }
    *(float *)(this + 0x284) =
         ((float)GEN_TOF(((float10)*(float *)(this + 0x23c) + (float10)*(float *)(this + 0x284))));
    fVar2 = (float10)0;
    ((undefined4 *)(gen_frame + 0x0))[0] = *(undefined4 *)(this + 0x50);
    (*(float *)(gen_frame + 0x30)) = (float)fVar2;
    (*(float *)(gen_frame + 0x34)) = (float)fVar2;
    ((undefined4 *)(gen_frame + 0x0))[1] = 0;
    (*(float *)(gen_frame + 0x38)) = (float)fVar2;
    ((undefined4 *)(gen_frame + 0x0))[2] = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(this + 0x54);
    (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)(this + 0x58);
    F_004efe70(((undefined4 *)(gen_frame + 0x0)),(uint)(this + 0x40));
    (*(float *)(gen_frame + 0x30)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x30) + (float10)(*(float *)(gen_frame + 0x30)))));
    (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x34)) + (float10)*(float *)(this + 0x34))));
    (*(float *)(gen_frame + 0x38)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x38)) + (float10)*(float *)(this + 0x38))));
    puVar6 = ((undefined4 *)(gen_frame + 0x0));
    pVVar7 = this + 0x290;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pVVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      pVVar7 = pVVar7 + 4;
    }
    *(float *)(this + 0x2c4) =
         ((float)GEN_TOF(((float10)*(float *)(this + 0x240) + (float10)*(float *)(this + 0x2c4))));
  }
  if ((byte)this[0x65] == 2) {
    bVar3 = F_00990c00(*(undefined4 *)(this + 0x234));
    if (bVar3 != 0) {
      this[0x65] = (undefined1)0x4;
      F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
      return CONCAT31(extraout_var,bVar3);
    }
    uVar4 = F_00982ce0(*(undefined4 *)(this + 0x234));
    if ((char)uVar4 != '\0') {
      pcVar1 = *(gen_code32 *)(*(int *)this + 0x28);
      this[0x65] = (undefined1)0x3;
      uVar4 = (*pcVar1)(this);
    }
  }
  else {
    uVar4 = (byte)this[0x65] - 3;
    if (uVar4 == 0) {
      uVar4 = F_006a55a0(this);
      F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
      return uVar4;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return uVar4;
}

/* ref: Client::Graphics::Scene::VfxObject::vf10 */
unsigned int F_006a7920(unsigned int gen_a0)
{
  GEN_ENTER(0x6a7920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (((byte)this[100] & 4) == 0) {
    this[100] = (undefined1)((byte)this[100] | 4);
    uVar1 = F_00b14060(REFG(undefined4, 0x1370c1c),4);
    *(uint *)(this + 0x60) = uVar1;
    if (uVar1 != 0) {
      *(undefined * PTR32 *)(uVar1 + 4) = this;
      ((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this,1);
      if (((byte)this[0x1e4] & 4) != 0) {
        F_00699cb0(this,*(float *)(this + 0x1f0));
      }
      F_006a55a0(this);
      return 0;
    }
    this[0x65] = (undefined1)0x4;
  }
  return 0;
}

/* ref: Client::Graphics::Scene::AttachUtility::vf2 */
unsigned int F_006a79c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6a79c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  float fVar5;
  
  if (((*(int *)(this + 4) != 0) && (*(int *)(this + 8) != 0)) && (*(int *)(this + 0x10) != 0)) {
    if (*(int *)(this + 0x14) == -1) {
      F_0069b800(this);
    }
    if (*(int *)(this + 0x14) != -1) {
      iVar1 = *(int *)(this + 4);
      if ((*(char *)(iVar1 + 0x65) == '\x03') && (*((char *)GEN_TOP((*(int *)(this + 8) + 0x65))) == '\x03')) {
        if (((byte)this[0x18] & 1) != 0) {
          if ((*(uint *)(this + 0x18) >> 2 & 1) != 0) {
            if ((*(uint *)(this + 0x18) >> 4 & 1) != 0) {
              fVar5 = F_006b2270(*(undefined * PTR32 *)(this + 0xc),*(int *)(this + 0x14),
                                   *(undefined4 *)(this + 0x24));
              *(float *)(this + 0x2c) = fVar5;
              *(uint *)(this + 0x18) = *(uint *)(this + 0x18) & 0xffffffef;
            }
            if ((*((int *)GEN_TOP((*(int *)(this + 4) + 200))) == 0) ||
               ((*(uint *)(this + 0x18) >> 3 & 1) != 0)) {
              F_006a5c60(this);
            }
            else if ((*(uint *)(this + 0x18) >> 5 & 1) != 0) {
              uVar3 = F_0069ba90(this,((undefined1 *)(gen_frame + 0x0)));
              F_006b13d0(*(undefined * PTR32 *)(this + 4),0,uVar3);
              *(uint *)(this + 0x18) = *(uint *)(this + 0x18) & 0xffffffdf;
            }
          }
          (*(float *)(gen_frame + 0x3c)) = *(float *)(this + 0x28);
          fVar4 = (float10)*(float *)(this + 0x28);
          fVar5 = ((float)GEN_TOF((fVar4 + (float10)*(float *)(this + 0x30) *
                                  ((float10)*(float *)(this + 0x2c) - fVar4))));
          (*(float *)(gen_frame + 0x3c)) = fVar5;
          if (*(double *)&REFG(undefined, 0x10b3220) < (double)fVar5) {
            if ((!GEN_ISNAN(REFG(float, 0x10905c4)) && !GEN_ISNAN(fVar5)) &&
                (!(REFG(float, 0x10905c4) < fVar5) && REFG(uint, 0x10905c4) != fVar5)) {
              *((ushort *)GEN_TOP((*(int *)(this + 4) + 0x70))) =
                   *((ushort *)GEN_TOP((*(int *)(this + 4) + 0x70))) & 0xfffb;
              return 0;
            }
          }
          *((ushort *)GEN_TOP((*(int *)(this + 4) + 0x70))) = *((ushort *)GEN_TOP((*(int *)(this + 4) + 0x70))) | 4;
          return 0;
        }
      }
      else {
        iVar2 = *(int *)(this + 8);
        *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar2 + 0x30);
        *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar2 + 0x34);
        *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(iVar2 + 0x38);
        *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 2;
      }
    }
  }
  return 0;
}

/* ref: FUN_006a7b20 */
byte F_006a7b20(unsigned int gen_a0)
{
  GEN_ENTER(0x6a7b20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x130];
  byte bVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x128)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x12c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined1 *)(gen_frame + 0x14)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x18)) = 5000;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x10100;
  (*(undefined1 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 6;
  (*(undefined2 *)(gen_frame + 0x21)) = 0;
  uVar2 = 1;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x28)),0x100,"chara/human/c%02d01/skeleton/base/b0001/skl_c%02d01b0001.sklb",uVar2
               ,uVar2);
    F_00513dc0(((undefined1 *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    F_00c472af(((undefined1 *)(gen_frame + 0x28)),0x100,"chara/human/c%02d01/skeleton/base/b0001/skl_c%02d01b0001.skp",uVar2,
               uVar2);
    F_00513dc0(((undefined1 *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    F_00c472af(((undefined1 *)(gen_frame + 0x28)),0x100,"chara/human/c%02d01/skeleton/base/b0001/eid_c%02d01b0001.eid",uVar2,
               uVar2);
    F_00513dc0(((undefined1 *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    F_00c472af(((undefined1 *)(gen_frame + 0x28)),0x100,"chara/human/c%02d01/skeleton/base/b0001/phy_c%02d01b0001.phyb",uVar2
               ,uVar2);
    F_00513dc0(((undefined1 *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xd);
  uVar2 = 1;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x28)),0x100,"chara/weapon/w%02d01/skeleton/base/b0001/skl_w%02d01b0001.sklb",
               uVar2,uVar2);
    F_00513dc0(((undefined1 *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xb);
  uVar2 = 0x32;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x28)),0x100,"chara/weapon/w%02d01/skeleton/base/b0001/skl_w%02d01b0001.sklb",
               uVar2,uVar2);
    F_00513dc0(((undefined1 *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x3a);
  uVar2 = 0x46;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x28)),0x100,"chara/weapon/w%02d01/skeleton/base/b0001/skl_w%02d01b0001.sklb",
               uVar2,uVar2);
    F_00513dc0(((undefined1 *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    F_00c472af(((undefined1 *)(gen_frame + 0x28)),0x100,"chara/weapon/w%02d51/skeleton/base/b0001/skl_w%02d51b0001.sklb",
               uVar2,uVar2);
    F_00513dc0(((undefined1 *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x49);
  uVar2 = 1;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x28)),0x100,"chara/xls/attachOffset/c%02d01.atch",uVar2,uVar2);
    F_00513dc0(((undefined1 *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xd);
  uVar2 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x28)),0x100,"chara/equipment/e%04d/e%04d.imc",uVar2,uVar2);
    F_00513dc0(((undefined1 *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x5f);
  uVar2 = 1;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x28)),0x100,"chara/accessory/a%04d/a%04d.imc",uVar2,uVar2);
    F_00513dc0(((undefined1 *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x15);
  *(undefined1 *)((int)this + 0x14) = 1;
  bVar1 = F_006a62a0((undefined *)((int)this + 4),&REFG(undefined * PTR32, 0x1322868),0x35
                      );
  F_00c47745((*(uint *)(gen_frame + 0x128)) ^ (uint)(uint)(gen_frame + 0x12c));
  return bVar1;
}

/* ref: FUN_006a7e90 */
uint F_006a7e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6a7e90u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  F_006b5e10(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6c0))),&(*(uint *)&gen_args[1]),(*(uint *)&gen_args[1]));
  if ((*(uint *)&gen_args[1]) == *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6c4)))) {
    return (*(uint *)&gen_args[1]) & 0xffffff00;
  }
  iVar2 = *(int *)((*(uint *)&gen_args[1]) + 0x40);
  piVar3 = (int *)(iVar2 + 0x88);
  LOCK();
  iVar1 = *piVar3;
  *piVar3 = *piVar3;
  UNLOCK();
  if (iVar1 == 2) {
    piVar3 = (int *)(iVar2 + 0x8c);
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3;
    UNLOCK();
    if (iVar1 < 8) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_006a7ef0 */
uint F_006a7ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6a7ef0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  int * piVar2;
  
  F_006b5e10(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6d0))),&(*(uint *)&gen_args[1]),(*(uint *)&gen_args[1]));
  if ((*(uint *)&gen_args[1]) == *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6d4)))) {
    return (*(uint *)&gen_args[1]) & 0xffffff00;
  }
  if ((*((uint *)GEN_TOP((*(int *)((*(uint *)&gen_args[1]) + 0x40) + 0x30))) & 0xc000000) != 0) {
    piVar2 = ((int *)GEN_TOP((*(int *)((*(uint *)&gen_args[1]) + 0x40) + 0x8c)));
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2;
    UNLOCK();
    if (iVar1 < 8) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_006a7f50 */
byte F_006a7f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6a7f50u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 uVar1;
  int * piVar2;
  
  uVar1 = (*(undefined4 *)&gen_args[1]);
  piVar2 = (int *)F_006b5e10(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6d0))),&(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[1]));
  if (*piVar2 != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6d4)))) {
    return 1;
  }
  piVar2 = (int *)F_006b5e10(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6c0))),&(*(undefined4 *)&gen_args[1]),uVar1);
  return *piVar2 != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6c4)));
}

/* ref: FUN_006a7fa0 */
uint F_006a7fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6a7fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  int * piVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  pvVar1 = *(undefined * PTR32 *)(REFG(int, 0x137129c) + 0x60);
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
  uVar4 = F_00500af0(pvVar1,param_1);
  uVar4 = F_00500ae0(pvVar1,uVar4 & 0xffff);
  if ((*(uint *)(uVar4 + 8) >> 4 & 1) != 0) {
    uVar4 = F_00b82240((undefined *)((int)this + 0x700),param_1);
    return uVar4;
  }
  (*(uint *)(gen_frame + 0x8)) = 0;
  if (param_3 != 0) {
    do {
      uVar4 = (*(uint *)(gen_frame + 0x8));
      iVar2 = *(int *)(param_2 + (*(uint *)(gen_frame + 0x8)) * 4);
      if (iVar2 != 0) {
        piVar5 = (int *)F_006b5da0((undefined *)((int)this + 0x6c0),((undefined1 *)(gen_frame + 0x0)),iVar2);
        if (*piVar5 != *(int *)((int)this + 0x6c4)) {
          pvVar1 = *(undefined * PTR32 *)(*piVar5 + 0x40);
          piVar5 = (int *)((int)pvVar1 + 0x88);
          LOCK();
          iVar2 = *piVar5;
          *piVar5 = *piVar5;
          UNLOCK();
          if (iVar2 == 2) {
            piVar5 = (int *)((int)pvVar1 + 0x8c);
            LOCK();
            iVar2 = *piVar5;
            *piVar5 = *piVar5;
            UNLOCK();
            if (iVar2 < 8) {
              uVar4 = F_00503790(pvVar1,param_1);
              if (uVar4 != 0) {
                return uVar4;
              }
              puVar6 = (undefined4 *)F_0050eba0(*(undefined * PTR32 *)(REFG(int, 0x137129c) + 0x5c),param_1);
              puVar3 = (undefined4 *)puVar6[1];
              this = (*(undefined * PTR32 *)(gen_frame + 0x4));
              uVar4 = (*(uint *)(gen_frame + 0x8));
              for (puVar6 = (undefined4 *)*puVar6; (*(undefined * PTR32 *)(gen_frame + 0x4)) = this, puVar6 != puVar3;
                  puVar6 = puVar6 + 7) {
                puVar7 = puVar6;
                if (0xf < (uint)puVar6[5]) {
                  puVar7 = (undefined4 *)*puVar6;
                }
                (*(uint *)(gen_frame + 0x8)) = uVar4;
                uVar4 = F_00503790(pvVar1,puVar7);
                if (uVar4 != 0) {
                  return uVar4;
                }
                this = (*(undefined * PTR32 *)(gen_frame + 0x4));
                uVar4 = (*(uint *)(gen_frame + 0x8));
              }
            }
          }
        }
      }
      (*(uint *)(gen_frame + 0x8)) = uVar4 + 1;
    } while (uVar4 + 1 < param_3);
  }
  uVar4 = F_00691f00(this,param_1);
  return uVar4;
}

/* ref: FUN_006a80c0 */
uint F_006a80c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6a80c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x108))(this,((undefined1 *)(gen_frame + 0x8)),0x100,param_1);
  if (uVar1 == 0) {
    uVar1 = F_0069fee0(this,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
    return uVar1;
  }
  F_006a6af0(this);
  F_006937b0(*(undefined * PTR32 *)((int)this + 0x2d0),param_1,0x736b6c62,uVar1,0);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xd0))(this,param_1);
  *(uint *)((int)this + 0x2c8) = *(uint *)((int)this + 0x2c8) | 0x80000000;
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar1;
}

/* ref: FUN_006a8160 */
byte F_006a8160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6a8160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x110))(this,((undefined1 *)(gen_frame + 0x8)),0x100,param_1);
  if (uVar2 == 0) {
    iVar3 = 0;
    if (*(undefined * PTR32 *)((int)this + 0x2d0) != (undefined *)0x0) {
      F_00693890(*(undefined * PTR32 *)((int)this + 0x2d0),param_1 + 5);
      iVar3 = *(int *)((int)this + 0x2d0);
      if (*(short *)(iVar3 + 0x42) == *(short *)(iVar3 + 0x40)) {
        *(uint *)((int)this + 0x2c8) = *(uint *)((int)this + 0x2c8) & 0x7fffffff;
      }
    }
    bVar1 = (byte)iVar3;
    if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
      bVar1 = F_0061edb0(*(undefined * PTR32 *)((int)this + 0x78),param_1,0);
      F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
      return bVar1;
    }
  }
  else {
    F_006a6af0(this);
    bVar1 = F_006937b0(*(undefined * PTR32 *)((int)this + 0x2d0),param_1 + 5,0x736b70,uVar2,0);
    *(uint *)((int)this + 0x2c8) = *(uint *)((int)this + 0x2c8) | 0x80000000;
  }
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return bVar1;
}

/* ref: FUN_006a82d0 */
byte F_006a82d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6a82d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  byte bVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 200))(this);
  uVar2 = uVar2 - 1;
  if (uVar2 < 3) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x13c))(this,((undefined1 *)(gen_frame + 0x8)),0x100);
    if (uVar2 == 0) {
      bVar1 = F_0069feb0(this);
      F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
      return bVar1;
    }
    F_006a6af0(this);
    bVar1 = F_006937b0(*(undefined * PTR32 *)((int)this + 0x2d0),0xf,0x656964,uVar2,0);
    uVar2 = (uint)bVar1;
    *(uint *)((int)this + 0x2c8) = *(uint *)((int)this + 0x2c8) | 0x80000000;
  }
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return (byte)uVar2;
}

/* ref: FUN_006a8370 */
unsigned int F_006a8370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6a8370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  int iVar1;
  ushort uVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 300))(this,((undefined1 *)(gen_frame + 0x8)),0x100,param_1);
  if (uVar3 == 0) {
    F_006a0240(this,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
    return 0;
  }
  F_006a6af0(this);
  F_006937b0(((undefined *)GEN_TOP((*(int *)((int)this + 0x2d4) + param_1 * 0x48))),0,0x696d63,uVar3,1);
  bVar4 = (byte)param_1;
  iVar6 = 3;
  (*(int *)(gen_frame + 0x4)) = 4;
  do {
    iVar7 = *(int *)((int)this + 0x2d4) + param_1 * 0x48;
    uVar5 = 0 << ((byte)iVar6 & 0x1f);
    uVar2 = ~(1 << ((byte)iVar6 & 0x1f));
    *(ushort *)(iVar7 + 0x40) = uVar2 & *(ushort *)(iVar7 + 0x40) | uVar5;
    *(ushort *)(iVar7 + 0x42) = uVar2 & *(ushort *)(iVar7 + 0x42) | uVar5;
    *(ushort *)(iVar7 + 0x44) = *(ushort *)(iVar7 + 0x44) & uVar2 | uVar5;
    iVar1 = *(int *)(iVar7 + iVar6 * 4);
    if (iVar1 != 0) {
      F_0050c620(iVar1,0,0);
      *(undefined4 *)(iVar7 + iVar6 * 4) = 0;
    }
    iVar6 = iVar6 + 1;
    (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + -1;
    *(uint *)((int)this + 0x2cc) =
         *(uint *)((int)this + 0x2cc) & ~(1 << (bVar4 & 0x1f) | 1U >> 0x20 - (bVar4 & 0x1f)) |
         0 << (bVar4 & 0x1f);
  } while ((*(int *)(gen_frame + 0x4)) != 0);
  uVar3 = 1 << (bVar4 & 0x1f);
  *(uint *)((int)this + 0x2c8) = ~uVar3 & *(uint *)((int)this + 0x2c8) | uVar3;
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return 0;
}

/* ref: FUN_006a84e0 */
uint F_006a84e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6a84e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  int iVar1;
  uint uVar2;
  uint * puVar3;
  int * piVar4;
  
  (*(uint *)(gen_frame + 0x118)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c);
  iVar1 = *(int *)((int)this + 0x2d4);
  if ((iVar1 == 0) || ((*(byte *)(iVar1 + 0x40 + param_1 * 0x48) >> 1 & 1) == 0)) {
    piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x7c) + param_1 * 4)));
    if (*((int *)GEN_TOP((*(int *)((int)this + 0x7c) + param_1 * 4))) == 0) goto LAB_006a8634;
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = *(undefined * PTR32 *)(*piVar4 + 0x18);
    F_006a6af0(this);
  }
  else {
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = *(undefined * PTR32 *)(iVar1 + param_1 * 0x48 + 4);
  }
  uVar2 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0xa8) + 4))) + 0x12 +
                 *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0xa8))));
  (*(uint *)(gen_frame + 0x14)) = uVar2;
  (*(uint *)(gen_frame + 0xc)) = 4;
  puVar3 = &(*(uint *)(gen_frame + 0x14));
  if (3 < uVar2) {
    puVar3 = &(*(uint *)(gen_frame + 0xc));
  }
  (*(uint *)(gen_frame + 0xc)) = (uint)(ushort)*puVar3;
  (*(uint *)(gen_frame + 0x14)) = 0;
  if ((ushort)*puVar3 != 0) {
    do {
      iVar1 = *(int *)this;
      uVar2 = F_004ffe90((*(undefined * PTR32 *)(gen_frame + 0x10)),(*(uint *)(gen_frame + 0x14)));
      uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0x130))(this,((undefined1 *)(gen_frame + 0x18)),0x100,param_1,uVar2);
      if (uVar2 == 0) {
        F_006a0400(this,param_1,(*(uint *)(gen_frame + 0x14)));
      }
      else {
        F_006937b0(((undefined *)GEN_TOP((*(int *)((int)this + 0x2d4) + param_1 * 0x48))),(*(uint *)(gen_frame + 0x14)) + 3,0x6d74726c
                     ,uVar2,1);
      }
      uVar2 = (*(uint *)(gen_frame + 0x14)) + 1;
      (*(uint *)(gen_frame + 0x14)) = uVar2;
    } while (uVar2 < (*(uint *)(gen_frame + 0xc)));
  }
  uVar2 = 1 << ((byte)param_1 & 0x1f);
  *(uint *)((int)this + 0x2c8) = ~uVar2 & *(uint *)((int)this + 0x2c8) | uVar2;
  piVar4 = ((int *)GEN_TOP((~uVar2 & *(uint *)((int)this + 0x2cc) | uVar2)));
  *(int * PTR32 *)((int)this + 0x2cc) = piVar4;
LAB_006a8634: ;
  F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
  return (uint)piVar4;
}

/* ref: FUN_006a8650 */
unsigned int F_006a8650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6a8650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  F_006a6af0(this);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x134))(this,((undefined1 *)(gen_frame + 0x8)),0x100,param_1);
  if (uVar1 == 0) {
    F_006a02a0(this,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
    return 0;
  }
  F_006937b0(((undefined *)GEN_TOP((*(int *)((int)this + 0x2d4) + param_1 * 0x48))),2,0x746578,uVar1,1);
  uVar1 = 1 << ((byte)param_1 & 0x1f);
  *(uint *)((int)this + 0x2c8) = ~uVar1 & *(uint *)((int)this + 0x2c8) | uVar1;
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return 0;
}

/* ref: FUN_006a86f0 */
uint F_006a86f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6a86f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  ushort uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  
  iVar3 = *(int *)((int)this + 0x2d4);
  iVar1 = param_1 * 0x48;
  if (((*(byte *)(iVar3 + 0x40 + iVar1) & 1) != 0) && ((*(byte *)(iVar3 + 0x42 + iVar1) & 1) != 0))
  {
    ((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this,param_1,*(undefined4 *)(iVar3 + iVar1));
    F_006a0240(this,param_1);
  }
  iVar1 = iVar1 + *(int *)((int)this + 0x2d4);
  uVar2 = *(ushort *)(iVar1 + 0x40);
  if ((uVar2 & 1) == 0) {
    bVar4 = (byte)(uVar2 >> 8);
    bVar5 = (byte)uVar2 >> 1;
    uVar2 = CONCAT11(bVar4,bVar5);
    if ((bVar5 & 1) == 0) {
      return CONCAT31((uint3)bVar4,1);
    }
    if ((*(byte *)(iVar1 + 0x42) >> 1 & 1) != 0) {
      F_006a84e0(this,param_1);
      F_006a8650(this,param_1);
      return (byte)~(byte)(*(uint *)((int)this + 0x2cc) >> ((byte)param_1 & 0x1f)) & 1;
    }
  }
  return (uint)(uVar2 >> 8) << 8;
}

/* ref: FUN_006a8790 */
unsigned int F_006a8790(unsigned int gen_a0)
{
  GEN_ENTER(0x6a8790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = *(uint *)((int)this + 0x74);
  uVar5 = 0;
  bVar2 = false;
  if (uVar1 != 0) {
    iVar4 = 0;
    do {
      bVar3 = (byte)*((undefined2 *)GEN_TOP((iVar4 + 0x40 + *(int *)((int)this + 0x2d4))));
      if (((bVar3 >> 1 & 1) != 0) || ((bVar3 >> 3 & 1) != 0)) {
        F_006a6c00(this,uVar5);
        ((code *)*(gen_code32 *)(*(int *)this + 0xdc))(this,uVar5);
        ((code *)*(gen_code32 *)(*(int *)this + 0xe8))
                  (this,uVar5,*((undefined4 *)GEN_TOP((iVar4 + 8 + *(int *)((int)this + 0x2d4)))));
        bVar2 = true;
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0x48;
    } while (uVar5 < uVar1);
    if (bVar2) {
      ((code *)*(gen_code32 *)(*(int *)this + 0x148))(this);
      ((code *)*(gen_code32 *)(*(int *)this + 0xe0))(this);
    }
  }
  return 0;
}

/* ref: Client::Graphics::Scene::Human::vf53 */
uint F_006a8830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6a8830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  uint extraout_EAX_01 = 0;
  
  uVar1 = param_1;
  if (param_1 < 0xc) {
    uVar1 = (uint)(&REFG(byte, 0x6a88b4))[param_1];
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      F_006a80c0(this,3);
      F_006a8230(this,3);
      return extraout_EAX_00;
    case 1: ;
      F_006a80c0(this,4);
      F_006a8230(this,4);
      uVar1 = extraout_EAX_01;
      break;
    case 10: ;
      F_006a80c0(this,2);
      F_006a8230(this,2);
      return extraout_EAX;
    case 0xb: ;
      F_006a80c0(this,1);
      uVar1 = F_0068d7f0(this);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: Client::Graphics::Scene::Human::vf54 */
float F_006a88c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6a88c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  float fVar1;
  
  fVar1 = F_006a6e70(this,param_1);
  return fVar1;
}

/* ref: Client::Graphics::Scene::Human::vf56 */
uint F_006a88d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6a88d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(this + 0x818) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
              (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),*(int *)(this + 0x818));
    *(undefined4 *)(this + 0x818) = 0;
  }
  uVar1 = F_006a7140(this);
  return uVar1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf56 */
unsigned int F_006a8900(unsigned int gen_a0)
{
  GEN_ENTER(0x6a8900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)(this + 0x790) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
              (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),*(int *)(this + 0x790));
    *(undefined4 *)(this + 0x790) = 0;
  }
  F_006a2f90(this);
  F_006a3030(this);
  F_006a30d0(this);
  F_006a3170(this);
  F_006a3210(this);
  if (*(short *)(this + 0x748) == 1) {
    F_00694230(this);
    return 0;
  }
  return 0;
}

/* ref: FUN_006a8960 */
uint F_006a8960(unsigned int gen_a0)
{
  GEN_ENTER(0x6a8960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b32d4));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
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
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0xbc) = 0xffffffff;
  *(undefined4 *)((int)this + 0xc0) = 0xffffffff;
  *(undefined4 *)((int)this + 0xc4) = 0xffffffff;
  *(undefined4 *)((int)this + 200) = 0xffffffff;
  *(undefined4 *)((int)this + 0xcc) = 0xffffffff;
  *(undefined4 *)((int)this + 0xd0) = 0xffffffff;
  *(undefined4 *)((int)this + 0xd4) = 0xffffffff;
  *(undefined4 *)((int)this + 0xd8) = 0xffffffff;
  *(undefined4 *)((int)this + 0xdc) = 0xffffffff;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = uVar1;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  return (uint)this;
}

/* ref: FUN_006a8d00 */
byte F_006a8d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6a8d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  undefined4 in_ebx = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  undefined * pvVar5;
  int iVar6;
  
  *(byte *)(in_ecx + 0x19) = *(byte *)(in_ecx + 0x19) & 0xfb;
  in_ecx[9] = in_ecx[9] | 3;
  *(undefined1 *)((int)in_ecx + 0x65) = 1;
  *(char *)(in_ecx + 0x1c8) = (char)param_4;
  if ((char)param_4 == '\0') {
    *(undefined1 *)(in_ecx + 0x1c8) = 1;
  }
  *(undefined2 *)((int)in_ecx + 0x72) = 3;
  *(ushort *)(in_ecx + 0x1c) = *(ushort *)(in_ecx + 0x1c) & 0xfffe;
  *(ushort *)(in_ecx + 0x1c) = *(ushort *)(in_ecx + 0x1c) & 0xfffd;
  *(ushort *)(in_ecx + 0x1c) = *(ushort *)(in_ecx + 0x1c) | 4;
  *(ushort *)(in_ecx + 0x1c) = *(ushort *)(in_ecx + 0x1c) & 0xfff7;
  *(ushort *)(in_ecx + 0x1c) = *(ushort *)(in_ecx + 0x1c) & 0xffef;
  *(ushort *)(in_ecx + 0x1c) = *(ushort *)(in_ecx + 0x1c) & 0xffdf;
  *(ushort *)(in_ecx + 0x1c) = *(ushort *)(in_ecx + 0x1c) & 0xffbf;
  *(ushort *)(in_ecx + 0x1c) = *(ushort *)(in_ecx + 0x1c) & 0xff7f;
  *(undefined1 *)(in_ecx + 0x1bb) = 1;
  F_0068db80(in_ecx,param_3);
  iVar6 = REFG(int, 0x137129c);
  uVar2 = ((code *)*(gen_code32 *)(*in_ecx + 200))(in_ecx);
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 1: ;
    pvVar5 = *(undefined * PTR32 *)(iVar6 + 0x68);
    break;
  case 2: ;
    pvVar5 = *(undefined * PTR32 *)(iVar6 + 0x70);
    break;
  case 3: ;
    pvVar5 = *(undefined * PTR32 *)(iVar6 + 0x6c);
    break;
  case 4: ;
    pvVar5 = *(undefined * PTR32 *)(iVar6 + 0x74);
    break;
  default: ;
    pvVar5 = (undefined *)0x0;
  }
  iVar6 = 4;
  uVar2 = ((code *)*(gen_code32 *)(*in_ecx + 200))(in_ecx);
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 1: ;
    iVar6 = 0;
    break;
  case 2: ;
    iVar6 = 2;
    break;
  case 3: ;
    iVar6 = 1;
    break;
  case 4: ;
    iVar6 = 3;
  }
  uVar2 = ((code *)*(gen_code32 *)(*in_ecx + 0x128))(in_ecx);
  piVar3 = (int *)F_00b51f60(pvVar5,uVar2 & 0xffff | iVar6 << 0x10);
  in_ecx[0x1c6] = *piVar3;
  in_ecx[0x1c7] = piVar3[1];
  uVar2 = F_00b14060(REFG(undefined4, 0x1370c1c),2);
  in_ecx[0x18] = uVar2;
  if (uVar2 != 0) {
    *(int * PTR32 *)(uVar2 + 4) = in_ecx;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),0xa8,0x10);
    if (uVar2 == 0) {
      pvVar5 = (undefined *)0x0;
    }
    else {
      pvVar5 = (undefined *)F_00621da0(uVar2);
    }
    in_ecx[0x58] = (int)pvVar5;
    if (((pvVar5 != (undefined *)0x0) && (bVar1 = F_00625d30(pvVar5), bVar1 != 0)) &&
       (bVar1 = F_006892b0(in_ecx), bVar1 != 0)) {
      F_006a80c0(in_ecx,0);
      if (((uint)in_ecx[0x1c7] >> 5 & 1) != 0) {
        F_006a8160(in_ecx,0);
      }
      F_006a82d0(in_ecx);
      uVar2 = ((code *)*(gen_code32 *)(*in_ecx + 0x140))(in_ecx);
      uVar2 = F_00638290(uVar2);
      if (uVar2 != 0) {
        *(int * PTR32 *)(uVar2 + 0x74) = in_ecx;
        uVar4 = ((code *)*(gen_code32 *)(*in_ecx + 0x14c))(in_ecx);
        F_00690310(in_ecx + 0x24,uVar4);
        F_00b82700(in_ecx + 0x1c0);
        in_ecx[0x1e] = uVar2;
        bVar1 = F_00692bd0(in_ecx);
        if (bVar1 != 0) {
          in_ecx[0x22] = (int)in_ecx;
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_006a8f40 */
uint F_006a8f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6a8f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  F_006a8370(this,param_1);
  F_006a0140(this,param_1);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10c))(this,((undefined1 *)(gen_frame + 0x8)),0x100,param_1);
  if (uVar1 == 0) {
    uVar1 = F_006a69d0(this,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
    return uVar1;
  }
  F_006a6af0(this);
  F_006937b0(((undefined *)GEN_TOP((*(int *)((int)this + 0x2d4) + param_1 * 0x48))),1,0x6d646c,uVar1,0);
  uVar1 = 1 << ((byte)param_1 & 0x1f);
  *(uint *)((int)this + 0x2c8) = ~uVar1 & *(uint *)((int)this + 0x2c8) | uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xd4))(this,param_1);
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar1;
}

/* ref: FUN_006a9000 */
uint F_006a9000(unsigned int gen_a0)
{
  GEN_ENTER(0x6a9000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  undefined3 extraout_var_00 = 0;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  (*(undefined4 *)(gen_frame + 0x17)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x17)), 1, 3),2);
  (*(undefined4 *)(gen_frame + 0x1b)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x1b)), 1, 3),2);
  iVar1 = *(int *)(REFG(int, 0x137127c) + 0x66f4);
  (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),*(undefined1 *)(REFG(int, 0x1371278) + 0x10));
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),*(undefined1 *)(REFG(int, 0x1371278) + 0x11));
  if (iVar1 != 0) {
    fVar6 = (float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0x34) -
                            (float10)*(float *)(iVar1 + 0x94))));
    fVar7 = (float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0x30) -
                            (float10)*(float *)(iVar1 + 0x90))));
    fVar8 = (float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0x38) -
                            (float10)*(float *)(iVar1 + 0x98))));
    fVar6 = F_006a0570(this,((float)GEN_TOF((fVar8 * fVar8 + (fVar7 * fVar7 + fVar6 * fVar6)))));
    bVar2 = F_00693210(this,(float)fVar6);
    (*(undefined4 *)(gen_frame + 0x17)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x17)), 1, 3),bVar2);
    uVar3 = F_00693280(this,(float)fVar6);
    (*(undefined4 *)(gen_frame + 0x1b)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x1b)), 1, 3),(char)uVar3);
  }
  if (*(int *)((int)this + 0x2c8) < 0) {
    bVar2 = F_006a0790(*(undefined * PTR32 *)((int)this + 0x2d0),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x17)),(*(undefined4 *)(gen_frame + 0x1b)));
    if (bVar2 == 0) {
      return CONCAT31(extraout_var,bVar2);
    }
    *(uint *)((int)this + 0x2c8) = *(uint *)((int)this + 0x2c8) & 0x7fffffff;
  }
  uVar3 = *(uint *)((int)this + 0x74);
  uVar5 = 0;
  (*(uint *)(gen_frame + 0xc)) = 1;
  uVar4 = 0;
  if (uVar3 != 0) {
    (*(int *)(gen_frame + 0x10)) = 0;
    do {
      uVar4 = F_00693730(((undefined *)GEN_TOP((*(int *)((int)this + 0x2d4) + (*(int *)(gen_frame + 0x10))))),(*(undefined4 *)(gen_frame + 0x17)),(*(undefined4 *)(gen_frame + 0x1b)));
      bVar2 = (byte)uVar5;
      if ((*(uint *)((int)this + 0x2c8) >> (bVar2 & 0x1f) & 1) != 0) {
        (*(byte *)(gen_frame + 0x1f)) = F_006a0790(((undefined *)GEN_TOP((*(int *)((int)this + 0x2d4) + (*(int *)(gen_frame + 0x10))))),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),
                                (*(undefined4 *)(gen_frame + 0x17)),(*(undefined4 *)(gen_frame + 0x1b)));
        uVar4 = CONCAT31(extraout_var_00,(*(byte *)(gen_frame + 0x1f)));
        if ((*(uint *)((int)this + 0x2cc) >> (bVar2 & 0x1f) & 1) == 0) {
          uVar4 = F_006a86f0(this,uVar5);
          (*(byte *)(gen_frame + 0x1f)) = (*(byte *)(gen_frame + 0x1f)) & (byte)uVar4;
        }
        if ((*(byte *)(gen_frame + 0x1f)) != 0) {
          uVar4 = 0 << (bVar2 & 0x1f);
          *(uint *)((int)this + 0x2c8) = ~(*(uint *)(gen_frame + 0xc)) & *(uint *)((int)this + 0x2c8) | uVar4;
          uVar4 = ~(*(uint *)(gen_frame + 0xc)) & *(uint *)((int)this + 0x2cc) | uVar4;
          *(uint *)((int)this + 0x2cc) = uVar4;
        }
      }
      (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 0x48;
      uVar5 = uVar5 + 1;
      (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) << 1 | (uint)((int)(*(uint *)(gen_frame + 0xc)) < 0);
    } while (uVar5 < uVar3);
  }
  if (*(int *)((int)this + 0x2c8) == 0) {
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this);
  }
  return uVar4;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf10 */
unsigned int F_006a91d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6a91d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00692c80(this);
  if ((*(undefined * PTR32 *)(this + 0x78) != (undefined *)0x0) &&
     ((*((byte *)GEN_TOP((*(int *)(this + 0x2d0) + 0x40))) >> 5 & 1) != 0)) {
    F_0061edb0(*(undefined * PTR32 *)(this + 0x78),0,*((undefined4 *)GEN_TOP((*(int *)(this + 0x2d0) + 0x14))));
  }
  if ((*(undefined * PTR32 *)(this + 0x78) != (undefined *)0x0) && (*((short *)GEN_TOP((*(int *)(this + 0x2d0) + 0x40))) < 0)) {
    F_0065a5f0(*(undefined * PTR32 *)(this + 0x78),*((undefined4 *)GEN_TOP((*(int *)(this + 0x2d0) + 0x3c))));
  }
  F_006a8790(this);
  return 0;
}

/* ref: FUN_006a9230 */
uint F_006a9230(unsigned int gen_a0)
{
  GEN_ENTER(0x6a9230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((*(uint *)((int)this + 0x74c) >> 10 & 1) != 0) {
    if (*(short *)((int)this + 0x77a) == 0) {
      F_006a69d0(this,10);
    }
    else {
      F_006a8f40(this,10);
    }
  }
  if ((*(uint *)((int)this + 0x74c) >> 0xb & 1) != 0) {
    if (*(short *)((int)this + 0x77c) == 0) {
      F_006a69d0(this,0xb);
    }
    else {
      F_006a8f40(this,0xb);
    }
  }
  if ((*(uint *)((int)this + 0x74c) >> 0xc & 1) != 0) {
    if (*(short *)((int)this + 0x77e) != 0) {
      F_006a8f40(this,0xc);
      uVar1 = F_006a8f40(this,0xf);
      return uVar1;
    }
    F_006a69d0(this,0xc);
  }
  uVar1 = F_006a8f40(this,0xf);
  return uVar1;
}

/* ref: FUN_006a92c0 */
uint F_006a92c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6a92c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar1 = *(ushort *)((int)this + 0x778);
  uVar2 = F_00689950((uint)uVar1);
  if (uVar2 != uVar1) {
    F_006a8f40(this,0xd);
    uVar3 = F_006a8f40(this,0xe);
    return uVar3;
  }
  F_006a69d0(this,0xd);
  uVar3 = F_006a69d0(this,0xe);
  return uVar3;
}

/* ref: FUN_006a9300 */
unsigned int F_006a9300(unsigned int gen_a0)
{
  GEN_ENTER(0x6a9300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int local_14;
  undefined4 * local_10;
  
  if (*(int *)((int)this + 0x74c) != 0) {
    local_10 = (undefined4 *)((int)this + 0x750);
    local_14 = (int)this + 0x782;
    uVar6 = 0;
    bVar1 = false;
    uVar5 = 0;
    do {
      if ((*(uint *)((int)this + 0x74c) >> ((byte)uVar6 & 0x1f) & 1) != 0) {
        if (((uVar6 == 0) || (4 < uVar6)) && (*((short *)GEN_TOP((uVar5 + *(int *)((int)this + 0x818)))) == 0))
        {
          F_006a69d0(this,uVar6);
          *local_10 = *((undefined4 *)GEN_TOP((uVar5 + *(int *)((int)this + 0x818))));
          *(undefined4 *)(local_14 + -2) = 0x3ff0000;
          *(undefined1 *)(local_14 + 2) = 0;
          bVar1 = true;
        }
        else {
          uVar3 = (uint)*((ushort *)GEN_TOP((uVar5 + *(int *)((int)this + 0x818))));
          uVar4 = (uint)*(ushort *)((int)this + 0x778) % 10;
          if (uVar4 == 1) {
            uVar2 = F_0068c9c0(REFG(undefined4, 0x137129c),(uint)*(ushort *)((int)this + 0x778),uVar6,uVar3);
          }
          else if (uVar4 == 4) {
            uVar2 = F_0068cc20(REFG(undefined4, 0x137129c),(uint)*(ushort *)((int)this + 0x778),uVar6,uVar3);
          }
          else {
            uVar2 = F_0068cd40(REFG(undefined4, 0x137129c),(uint)*(ushort *)((int)this + 0x778),uVar6,uVar3);
          }
          *((ushort *)GEN_TOP((uVar5 + 10 + *(int *)((int)this + 0x818)))) = uVar2;
          F_006a8f40(this,uVar6);
        }
      }
      local_10 = local_10 + 1;
      local_14 = local_14 + 6;
      uVar5 = uVar5 + 0xc;
      uVar6 = uVar6 + 1;
    } while (uVar5 < 0x78);
    if (bVar1) {
      F_006a7140(this);
    }
    *(undefined4 *)((int)this + 0x74c) = 0;
  }
  return 0;
}

/* ref: FUN_006a9440 */
unsigned int F_006a9440(unsigned int gen_a0)
{
  GEN_ENTER(0x6a9440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short sVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 * local_10;
  uint local_c;
  
  if (*(int *)((int)this + 0x730) != 0) {
    sVar1 = *(short *)((int)this + 0x748);
    local_10 = (undefined4 *)((int)this + 0x734);
    bVar2 = false;
    local_c = 0;
    uVar3 = 0;
    iVar4 = (int)this + 0x74c;
    do {
      if ((*(uint *)((int)this + 0x730) >> ((byte)local_c & 0x1f) & 1) != 0) {
        if (((sVar1 == 1) && (local_c < 2)) ||
           (*((short *)GEN_TOP((uVar3 + *(int *)((int)this + 0x790)))) != 0)) {
          F_006a8f40(this,local_c);
        }
        else {
          F_006a69d0(this,local_c);
          *local_10 = *((undefined4 *)GEN_TOP((uVar3 + *(int *)((int)this + 0x790))));
          *(undefined4 *)(iVar4 + -2) = 0x3ff0000;
          *(undefined1 *)(iVar4 + 2) = 0;
          bVar2 = true;
        }
      }
      local_10 = local_10 + 1;
      local_c = local_c + 1;
      uVar3 = uVar3 + 0xc;
      iVar4 = iVar4 + 6;
    } while (uVar3 < 0x3c);
    if (bVar2) {
      F_006a2f90(this);
      F_006a3030(this);
      F_006a30d0(this);
      F_006a3170(this);
      F_006a3210(this);
      if (*(short *)((int)this + 0x748) == 1) {
        F_00694230(this);
      }
    }
    *(undefined4 *)((int)this + 0x730) = 0;
  }
  return 0;
}

/* ref: FUN_006a9540 */
byte F_006a9540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6a9540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  if (*(short *)((int)this + 0x730) != *param_1) {
    return 0;
  }
  *(short *)((int)this + 0x732) = param_1[1];
  *(short *)((int)this + 0x734) = param_1[2];
  F_006a8f40(this,0);
  return 1;
}

/* ref: FUN_006a9580 */
byte F_006a9580(unsigned int gen_a0)
{
  GEN_ENTER(0x6a9580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  undefined4 * puVar4;
  char * pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  F_004ff310(((undefined1 *)(gen_frame + 0x18)),4,0);
  (*(undefined4 *)(gen_frame + 0x14)) = 0x657170;
  uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),"chara/xls/equipmentParameter/equipmentParameter.eqp",0,0,0)
  ;
  *(uint *)((int)this + 4) = uVar1;
  if (uVar1 != 0) {
    (*(undefined4 *)(gen_frame + 0x14)) = 0x65716470;
    uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),"chara/xls/charadb/EquipmentDeformerParameter.eqdp",0,0,0)
    ;
    *(uint *)((int)this + 8) = uVar1;
    if (uVar1 != 0) {
      (*(undefined4 *)(gen_frame + 0x14)) = 0x65716470;
      uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),"chara/xls/charadb/AccessoryDeformerParameter.eqdp",0,0,
                           0);
      *(uint *)((int)this + 0xc) = uVar1;
      if (uVar1 != 0) {
        (*(undefined4 *)(gen_frame + 0x14)) = 0x77616f65;
        uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),"chara/xls/attachOffset/attachOffsetExist.waoe",0,0,0)
        ;
        *(uint *)((int)this + 0x10) = uVar1;
        if (uVar1 != 0) {
          (*(undefined4 *)(gen_frame + 0x14)) = 0x777464;
          uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),"chara/xls/weapontype/attach.wtd",0,0,0);
          *(uint *)((int)this + 0x14) = uVar1;
          if (uVar1 != 0) {
            (*(undefined4 *)(gen_frame + 0x14)) = 0x777464;
            uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),"chara/xls/weapontype/motion.wtd",0,0,0);
            *(uint *)((int)this + 0x18) = uVar1;
            if (uVar1 != 0) {
              (*(undefined4 *)(gen_frame + 0x14)) = 0x777464;
              uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),"chara/xls/weapontype/se.wtd",0,0,0);
              *(uint *)((int)this + 0x1c) = uVar1;
              if (uVar1 != 0) {
                (*(undefined4 *)(gen_frame + 0x14)) = 0x706264;
                uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),"chara/xls/boneDeformer/human.pbd",0,0,0);
                *(uint *)((int)this + 0x20) = uVar1;
                if (uVar1 != 0) {
                  (*(undefined4 *)(gen_frame + 0x14)) = 0x636d70;
                  uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),"chara/xls/charaMake/human.cmp",0,0,0);
                  *(uint *)((int)this + 0x24) = uVar1;
                  if (uVar1 != 0) {
                    (*(undefined4 *)(gen_frame + 0x14)) = 0x657374;
                    uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),
                                         "chara/xls/charadb/faceSkeletonTemplate.est",0,0,0);
                    *(uint *)((int)this + 0x28) = uVar1;
                    if (uVar1 != 0) {
                      (*(undefined4 *)(gen_frame + 0x14)) = 0x657374;
                      uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),
                                           "chara/xls/charadb/hairSkeletonTemplate.est",0,0,0);
                      *(uint *)((int)this + 0x2c) = uVar1;
                      if (uVar1 != 0) {
                        (*(undefined4 *)(gen_frame + 0x14)) = 0x657374;
                        uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),"chara/xls/charadb/extra_met.est",0,0,
                                             0);
                        *(uint *)((int)this + 0x30) = uVar1;
                        if (uVar1 != 0) {
                          (*(undefined4 *)(gen_frame + 0x14)) = 0x657374;
                          uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),"chara/xls/charadb/extra_top.est",0,
                                               0,0);
                          *(uint *)((int)this + 0x34) = uVar1;
                          if (uVar1 != 0) {
                            uVar8 = 0;
                            uVar7 = 0;
                            uVar6 = 0;
                            pcVar5 = "common/graphics/texture/dummy.tex";
                            puVar4 = &(*(undefined4 *)(gen_frame + 0x14));
                            (*(undefined4 *)(gen_frame + 0x14)) = 0x746578;
                            uVar1 = F_004ff310(((byte *)(gen_frame + 0x0)) + 0x10,0,0);
                            uVar1 = F_00513d20(uVar1,puVar4,pcVar5,uVar6,uVar7,uVar8);
                            *(uint *)((int)this + 0x38) = uVar1;
                            if (uVar1 != 0) {
                              (*(undefined4 *)(gen_frame + 0x14)) = 0x746578;
                              uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),"chara/common/texture/black.tex"
                                                   ,0,0,0);
                              *(uint *)((int)this + 0x3c) = uVar1;
                              if (uVar1 != 0) {
                                (*(undefined4 *)(gen_frame + 0x14)) = 0x746578;
                                uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),
                                                     "chara/common/texture/white.tex",0,0,0);
                                *(uint *)((int)this + 0x40) = uVar1;
                                if (uVar1 != 0) {
                                  (*(undefined4 *)(gen_frame + 0x14)) = 0x746578;
                                  uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),
                                                       "chara/common/texture/transparent.tex",0,0,0)
                                  ;
                                  *(uint *)((int)this + 0x44) = uVar1;
                                  if (uVar1 != 0) {
                                    (*(undefined4 *)(gen_frame + 0x14)) = 0x746578;
                                    uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),
                                                                                                                  
                                                  "chara/common/texture/decal_equip/_stigma.tex",0,0
                                                  ,0);
                                    *(uint *)((int)this + 0x48) = uVar1;
                                    if (uVar1 != 0) {
                                      (*(undefined4 *)(gen_frame + 0x14)) = 0x746578;
                                      if ((*(uint *)(REFG(int, 0x1370b90) + 0x34) >> 6 & 1) == 0) {
                                        uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),
                                                             "chara/common/texture/-tile_low_d.tex",
                                                             0,0,0);
                                        *(uint *)((int)this + 0x4c) = uVar1;
                                        if (uVar1 == 0) goto LAB_006a9a7e;
                                        pcVar5 = "chara/common/texture/-tile_low_n.tex";
                                      }
                                      else {
                                        uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),
                                                             "chara/common/texture/-tile_d.tex",0,0,
                                                             0);
                                        *(uint *)((int)this + 0x4c) = uVar1;
                                        if (uVar1 == 0) goto LAB_006a9a7e;
                                        pcVar5 = "chara/common/texture/-tile_n.tex";
                                      }
                                      (*(undefined4 *)(gen_frame + 0x14)) = 0x746578;
                                      uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),pcVar5,0,0,0);
                                      *(uint *)((int)this + 0x50) = uVar1;
                                      if (uVar1 != 0) {
                                        uVar8 = 0;
                                        uVar7 = 0;
                                        uVar6 = 0;
                                        pcVar5 = "shader/shpk/skin.shpk";
                                        puVar4 = &(*(undefined4 *)(gen_frame + 0x14));
                                        (*(undefined4 *)(gen_frame + 0x14)) = 0x7368706b;
                                        uVar1 = F_004ff310(((byte *)(gen_frame + 0x0)) + 0x10,5,0);
                                        uVar1 = F_00513d20(uVar1,puVar4,pcVar5,uVar6,uVar7,uVar8);
                                        *(uint *)((int)this + 0x54) = uVar1;
                                        if (uVar1 != 0) {
                                          (*(undefined4 *)(gen_frame + 0x14)) = 0x7074626c;
                                          uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),
                                                                                                                              
                                                  "chara/xls/animation/pap_resident_table.ptbl",0,0,
                                                  0);
                                          *(uint *)((int)this + 0x58) = uVar1;
                                          if (uVar1 != 0) {
                                            (*(undefined4 *)(gen_frame + 0x14)) = 0x616574;
                                            uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),
                                                                                                                                  
                                                  "chara/xls/animation/AnimationExchangeTable.aet",0
                                                  ,0,0);
                                            *(uint *)((int)this + 0x5c) = uVar1;
                                            if (uVar1 != 0) {
                                              (*(undefined4 *)(gen_frame + 0x14)) = 0x6d6c74;
                                              uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),
                                                                                                                                      
                                                  "chara/xls/animation/MotionLineTable.mlt",0,0,0);
                                              *(uint *)((int)this + 0x60) = uVar1;
                                              if (uVar1 != 0) {
                                                (*(undefined4 *)(gen_frame + 0x14)) = 0x736b6c62;
                                                uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),
                                                                                                                                          
                                                  "chara/common/animation/skl_material.sklb",0,0,0);
                                                *(uint *)((int)this + 100) = uVar1;
                                                if (uVar1 != 0) {
                                                  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) = 
                                                  ((char *)REFP(0x10ae33c));
                                                  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) = 
                                                  ((char *)REFP(0x10ae370));
                                                  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) = 
                                                  ((char *)REFP(0x10ae3a8));
                                                  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) =
                                                       ((char *)REFP(0x10ae3e0));
                                                  uVar1 = 0;
                                                  puVar3 = (uint *)((int)this + 0x68);
                                                  while( true ) {
                                                    (*(undefined4 *)(gen_frame + 0x14)) = 0x617774;
                                                    uVar2 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),
                                                                         *(undefined4 *)
                                                                          (((byte *)(gen_frame + 0x0)) + uVar1 * 4),0,0,0
                                                                        );
                                                    *puVar3 = uVar2;
                                                    if (uVar2 == 0) break;
                                                    uVar1 = uVar1 + 1;
                                                    puVar3 = puVar3 + 1;
                                                    if (3 < uVar1) {
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
LAB_006a9a7e: ;
  F_006a8a80(this);
  return 0;
}

/* ref: FUN_006a9a90 */
byte F_006a9a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6a9a90u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  ushort uVar1;
  ushort uVar2;
  char * pcVar3;
  uint uVar4;
  float10 fVar5;
  
  if ((((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x730))) != *(*(char * PTR32 *)&gen_args[1])) || (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x731))) != (*(char * PTR32 *)&gen_args[1])[1]))
      || (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x732))) != (*(char * PTR32 *)&gen_args[1])[2])) ||
     ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x730))) == '\x01' && (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x734))) != (*(char * PTR32 *)&gen_args[1])[4])))) {
    return 0;
  }
  F_00b890c0((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x730,(*(char * PTR32 *)&gen_args[1]));
  if ((char)(*(undefined4 *)&gen_args[2]) == '\0') {
    pcVar3 = (*(char * PTR32 *)&gen_args[1]) + 0x1c;
    uVar4 = 0;
    do {
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xfc))))((*(undefined * PTR32 *)&gen_args[0]),uVar4,pcVar3);
      uVar4 = uVar4 + 1;
      pcVar3 = pcVar3 + 4;
    } while (uVar4 < 10);
  }
  F_00693ef0((*(undefined * PTR32 *)&gen_args[0]));
  uVar4 = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x734))) - 1;
  fVar5 = F_006b3220(*(undefined4 *)(REFG(int, 0x137129c) + 0x24),(uVar4 >> 1) + 1,
                       (uint)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x731))),uVar4 & 1,
                       (uint)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x732))),(uint)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x733))));
  *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x294))) = (float)fVar5;
  F_006a1010((*(undefined * PTR32 *)&gen_args[0]));
  (*(undefined4 *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[2]), 1, 3),0xff);
  F_006a6e70((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[2]));
  F_006a9230((*(undefined * PTR32 *)&gen_args[0]));
  uVar1 = *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x778)));
  uVar2 = F_00689950((uint)uVar1);
  if (uVar2 != uVar1) {
    F_006a8f40((*(undefined * PTR32 *)&gen_args[0]),0xd);
    F_006a8f40((*(undefined * PTR32 *)&gen_args[0]),0xe);
    F_006a9300((*(undefined * PTR32 *)&gen_args[0]));
    return 1;
  }
  F_006a69d0((*(undefined * PTR32 *)&gen_args[0]),0xd);
  F_006a69d0((*(undefined * PTR32 *)&gen_args[0]),0xe);
  F_006a9300((*(undefined * PTR32 *)&gen_args[0]));
  return 1;
}

/* ref: FUN_006a9bc0 */
unsigned int F_006a9bc0(unsigned int gen_a0)
{
  GEN_ENTER(0x6a9bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined * pvVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00690070();
  F_006b5f20((undefined *)((int)this + 0xe0ac),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0xe0b0),
               *(undefined4 * PTR32 *)((int)this + 0xe0b0));
  F_00429760(*(undefined4 *)((int)this + 0xe0b0),0x18,0xd8);
  pvVar2 = (undefined *)((int)this + 0xe090);
  iVar1 = 0x3ff;
  do {
    pvVar2 = (undefined *)((int)pvVar2 + -0x34);
    F_0064ad80(pvVar2);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  pvVar2 = (undefined *)((int)this + 0x1090);
  iVar1 = 0x3f;
  do {
    pvVar2 = (undefined *)((int)pvVar2 + -0x34);
    F_0064ad80(pvVar2);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  pvVar2 = (undefined *)((int)this + 0x390);
  iVar1 = 0xf;
  do {
    pvVar2 = (undefined *)((int)pvVar2 + -0x34);
    F_0064ad80(pvVar2);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  if (0xf < *(uint *)((int)this + 0x48)) {
    F_00429760(*(undefined4 *)((int)this + 0x34),*(uint *)((int)this + 0x48) + 1,0x32);
  }
  *(undefined4 *)((int)this + 0x48) = 0xf;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined1 *)((int)this + 0x34) = 0;
  return 0;
}

/* ref: FUN_006a9c90 */
unsigned int F_006a9c90(unsigned int gen_a0)
{
  GEN_ENTER(0x6a9c90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10b32e0));
  iVar1 = 2;
  do {
    F_00690070();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (0xf < *(uint *)((int)this + 0x1c1a8)) {
    F_00429760(*(undefined4 *)((int)this + 0x1c194),*(uint *)((int)this + 0x1c1a8) + 1,0x32);
  }
  *(undefined4 *)((int)this + 0x1c1a8) = 0xf;
  *(undefined4 *)((int)this + 0x1c1a4) = 0;
  *(undefined1 *)((int)this + 0x1c194) = 0;
  this_00 = (undefined *)((int)this + 0x1c190);
  iVar1 = 1;
  do {
    this_00 = (undefined *)((int)this_00 + -0xe0c0);
    F_006a9bc0(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10b2a84))
  ;
  return 0;
}

/* ref: FUN_006a9d10 */
uint F_006a9d10(unsigned int gen_a0)
{
  GEN_ENTER(0x6a9d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined * pvVar4;
  
  *(undefined4 *)this = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar1 = REFG(float, 0x1090998);
  *(undefined4 *)((int)this + 0x10) = REFG(float, 0x1090998);
  *(undefined4 *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x18) = uVar1;
  *(undefined4 *)((int)this + 0x30) = REFG(float, 0x109482c);
  iVar3 = 0xf;
  *(undefined4 *)((int)this + 0x48) = 0xf;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined1 *)((int)this + 0x34) = 0;
  pvVar4 = (undefined *)((int)this + 0x50);
  do {
    F_00624be0(pvVar4);
    pvVar4 = (undefined *)((int)pvVar4 + 0x34);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  pvVar4 = (undefined *)((int)this + 0x390);
  iVar3 = 0x3f;
  do {
    F_00624be0(pvVar4);
    pvVar4 = (undefined *)((int)pvVar4 + 0x34);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  pvVar4 = (undefined *)((int)this + 0x1090);
  iVar3 = 0x3ff;
  do {
    F_00624be0(pvVar4);
    pvVar4 = (undefined *)((int)pvVar4 + 0x34);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  *(undefined4 *)((int)this + 0xe090) = 0;
  *(undefined1 *)((int)this + 0xe09d) = 0;
  *(undefined4 *)((int)this + 0xe0a0) = 0;
  *(undefined4 *)((int)this + 0xe0a4) = 0;
  *(undefined1 *)((int)this + 0xe0a8) = 0;
  *(undefined4 *)((int)this + 0xe0b4) = 0;
  uVar2 = F_004296a0(0x18,0,0xd8);
  *(uint *)((int)this + 0xe0b0) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0xe0b0) + 4))) = *(int *)((int)this + 0xe0b0);
  *((int *)GEN_TOP((*(int *)((int)this + 0xe0b0) + 8))) = *(int *)((int)this + 0xe0b0);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xe0b0) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xe0b0) + 0x15))) = 1;
  *(undefined4 *)((int)this + 0xe094) = 0;
  *(undefined4 *)((int)this + 0xe098) = 0;
  return (uint)this;
}

/* ref: FUN_006a9e30 */
uint F_006a9e30(unsigned int gen_a0)
{
  GEN_ENTER(0x6a9e30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10b32e0));
  *(undefined4 *)((int)this + 4) = 2;
  *(undefined4 *)((int)this + 8) = 0;
  this_00 = (undefined *)((int)this + 0x10);
  iVar1 = 1;
  do {
    F_006a9d10(this_00);
    this_00 = (undefined *)((int)this_00 + 0xe0c0);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(undefined1 *)((int)this + 0x1c190) = 0;
  *(undefined4 *)((int)this + 0x1c1a8) = 0xf;
  *(undefined4 *)((int)this + 0x1c1a4) = 0;
  *(undefined1 *)((int)this + 0x1c194) = 0;
  *(uint *)((int)this + 4) = (uint)*(byte *)(REFG(int, 0x1371278) + 0x24);
  return (uint)this;
}

/* ref: FUN_006a9ea0 */
uint F_006a9ea0(unsigned int gen_a0)
{
  GEN_ENTER(0x6a9ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint * this_00;
  int * piVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined * pvVar7;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this;
  (*(undefined4 *)(gen_frame + 0x28)) = 0x65;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0xc9;
  (*(undefined4 *)(gen_frame + 0x30)) = 0x12d;
  (*(undefined4 *)(gen_frame + 0x34)) = 0x191;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x1f5;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0x259;
  (*(undefined4 *)(gen_frame + 0x40)) = 0x2bd;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x321;
  (*(undefined4 *)(gen_frame + 0x48)) = 0x385;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x3e9;
  (*(undefined4 *)(gen_frame + 0x50)) = 0x44d;
  (*(undefined4 *)(gen_frame + 0x54)) = 0x4b1;
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = &(*(undefined4 *)(gen_frame + 0x28));
  do {
    F_00515560(*(undefined * PTR32 *)((int)this + 0x58),&(*(int * PTR32 *)(gen_frame + 0x0)),*(*(undefined4 * PTR32 *)(gen_frame + 0x24)),1);
    (*(int * PTR32 *)(gen_frame + 0x18)) = (*(int * PTR32 *)(gen_frame + 0x0));
    (*(int * PTR32 *)(gen_frame + 0x10)) = (*(int * PTR32 *)(gen_frame + 0x4));
    pvVar7 = this;
    if ((*(int * PTR32 *)(gen_frame + 0x0)) != (*(int * PTR32 *)(gen_frame + 0x4))) {
      this_00 = (uint *)((int)this + 0xac);
      do {
        piVar1 = *(int * PTR32 *)((int)pvVar7 + 0xb0);
        piVar2 = (int *)*this_00;
        iVar3 = *(*(int * PTR32 *)(gen_frame + 0x18));
        (*(int *)(gen_frame + 0x20)) = iVar3;
        if (piVar2 == piVar1) {
LAB_006a9f74: ;
          piVar1 = *(int * PTR32 *)((int)this + 0xb0);
          if ((&(*(int *)(gen_frame + 0x20)) < piVar1) && (piVar2 = (int *)*this_00, piVar2 <= &(*(int *)(gen_frame + 0x20)))) {
            if (piVar1 == *(int * PTR32 *)((int)this + 0xb4)) {
              iVar3 = (int)piVar1 - (int)((int)(uintptr_t)piVar2) >> 2;
              if (iVar3 == -1) {
LAB_006aa0a6: ;
                    
                F_00c4579a("vector<T> too long");
              }
              uVar4 = iVar3 + 1;
              uVar6 = (int)*(int * PTR32 *)((int)this + 0xb4) - (int)((int)(uintptr_t)piVar2) >> 2;
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
                F_005286b0(this_00,uVar6);
              }
            }
            if (*(undefined4 * PTR32 *)((int)this + 0xb0) != (undefined4 *)0x0) {
              **(undefined4 * PTR32 *)((int)this + 0xb0) =
                   *((undefined4 *)GEN_TOP((*this_00 + ((int)&(*(int *)(gen_frame + 0x20)) - (int)((int)(uintptr_t)piVar2) >> 2) * 4)));
            }
            *(int *)((int)this + 0xb0) = *(int *)((int)this + 0xb0) + 4;
          }
          else {
            if (piVar1 == *(int * PTR32 *)((int)this + 0xb4)) {
              iVar5 = (int)((int)piVar1 - *this_00) >> 2;
              if (iVar5 == -1) goto LAB_006aa0a6;
              uVar4 = iVar5 + 1;
              uVar6 = (int)((int)*(int * PTR32 *)((int)this + 0xb4) - *this_00) >> 2;
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
                F_005286b0(this_00,uVar6);
              }
            }
            if (*(int * PTR32 *)((int)this + 0xb0) != (int *)0x0) {
              **(int * PTR32 *)((int)this + 0xb0) = iVar3;
            }
            *(int *)((int)this + 0xb0) = *(int *)((int)this + 0xb0) + 4;
          }
        }
        else {
          do {
            if (*piVar2 == iVar3) break;
            piVar2 = piVar2 + 1;
          } while (piVar2 != piVar1);
          if (piVar2 == piVar1) goto LAB_006a9f74;
          if (iVar3 != 0) {
            F_0050c620(iVar3,0,0);
          }
        }
        (*(int * PTR32 *)(gen_frame + 0x18)) = (*(int * PTR32 *)(gen_frame + 0x18)) + 1;
        pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x1c));
      } while ((*(int * PTR32 *)(gen_frame + 0x18)) != (*(int * PTR32 *)(gen_frame + 0x10)));
    }
    if ((*(int * PTR32 *)(gen_frame + 0x0)) != (int *)0x0) {
      F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),((*(int *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x0))) >> 2) * 4,0xcb);
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = (*(undefined4 * PTR32 *)(gen_frame + 0x24)) + 1;
    uVar6 = (*(uint *)(gen_frame + 0x14)) + 1;
    (*(int * PTR32 *)(gen_frame + 0x0)) = (int *)0x0;
    (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0x0;
    (*(int *)(gen_frame + 0x8)) = 0;
    (*(uint *)(gen_frame + 0x14)) = uVar6;
    this = pvVar7;
    if (0xb < uVar6) {
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
      return uVar6;
    }
  } while( true );
}

/* ref: FUN_006aa0c0 */
uint F_006aa0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6aa0c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a0;
  undefined1 * in_esi = (undefined1 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  char * PTR32 * PTR32 * pppcVar2;
  uint uVar3;
  char * PTR32 * PTR32 * PTR32 * ppppcVar4;
  char * PTR32 * PTR32 * PTR32 * ppppcVar5;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  ((undefined1 *)(gen_frame + 0xc))[0] = 0x2f;
  uVar3 = F_006b23a0(in_ecx,((undefined1 *)(gen_frame + 0xc)),0xffffffff,1);
  pppcVar2 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c))[0];
  if (uVar3 == 0xffffffff) {
    uVar3 = 0;
  }
  (*(uint *)(gen_frame + 0x40)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined1 *)((char *)&((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c))[0] + 0)) = 0;
  ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c))[0] = (char * PTR32 * PTR32 *)((uint)pppcVar2 & 0xffffff00);
  F_004e54d0(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c)),in_ecx,0,uVar3 + 1);
  uVar3 = ((uint *)(gen_frame + 0x10))[0];
  ppppcVar5 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c))[0];
  if ((*(uint *)(gen_frame + 0x40)) < 0x10) {
    ppppcVar5 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c));
  }
  (*(uint *)(gen_frame + 0x24)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x10))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x10))[0] = uVar3 & 0xffffff00;
  ppppcVar4 = ppppcVar5;
  do {
    cVar1 = *(char *)ppppcVar4;
    ppppcVar4 = (char * PTR32 * PTR32 * PTR32 *)((int)ppppcVar4 + 1);
  } while (cVar1 != '\0');
  F_004e5c20(((uint *)(gen_frame + 0x10)),ppppcVar5,(int)ppppcVar4 - (int)((int)ppppcVar5 + 1));
  if (0xf < (*(uint *)(gen_frame + 0x40))) {
    F_00429760(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c))[0],(*(uint *)(gen_frame + 0x40)) + 1,0x32);
  }
  *(undefined4 *)(in_esi + 0x14) = 0xf;
  *(undefined4 *)(in_esi + 0x10) = 0;
  *in_esi = 0;
  F_004e54d0(in_esi,((uint *)(gen_frame + 0x10)),0,0xffffffff);
  if (0xf < (*(uint *)(gen_frame + 0x24))) {
    F_00429760(((uint *)(gen_frame + 0x10))[0],(*(uint *)(gen_frame + 0x24)) + 1,0x32);
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return (uint)in_esi;
}

/* ref: FUN_006aa1a0 */
unsigned int F_006aa1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6aa1a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  uint * this_00;
  int iVar4;
  uint uVar5;
  int * piVar6;
  int iVar7;
  undefined4 * puVar8;
  uint uVar9;
  undefined * pvVar10;
  
  this_00 = (*(uint * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(int *)(gen_frame + 0x0)) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70)));
  F_006b74d0((*(uint * PTR32 *)&gen_args[1]),&(*(int *)(gen_frame + 0x0)));
  (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))) != 0) {
    do {
      iVar4 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) + (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x8))) * 4)));
      puVar8 = (undefined4 *)this_00[1];
      (*(uint * PTR32 *)&gen_args[1]) = (uint *)iVar4;
      if ((&(*(uint * PTR32 *)&gen_args[1]) < puVar8) && (puVar2 = (undefined4 *)*this_00, puVar2 <= &(*(uint * PTR32 *)&gen_args[1]))) {
        if (puVar8 == (undefined4 *)this_00[2]) {
          iVar4 = (int)puVar8 - (int)((int)(uintptr_t)puVar2) >> 2;
          if (iVar4 == -1) goto LAB_006aa2f8;
          uVar5 = iVar4 + 1;
          uVar9 = (int)this_00[2] - (int)((int)(uintptr_t)puVar2) >> 2;
          if (uVar9 < uVar5) {
            if (-(uVar9 >> 1) - 1 < uVar9) {
              uVar9 = 0;
            }
            else {
              uVar9 = uVar9 + (uVar9 >> 1);
            }
            if (uVar9 < uVar5) {
              uVar9 = uVar5;
            }
            F_006b6a50(this_00,uVar9);
            (*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 *)(gen_frame + 0x4));
          }
        }
        if ((undefined4 *)this_00[1] != (undefined4 *)0x0) {
          *(undefined4 *)this_00[1] =
               *((undefined4 *)GEN_TOP((*this_00 + ((int)&(*(uint * PTR32 *)&gen_args[1]) - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
        }
      }
      else {
        if (puVar8 == (undefined4 *)this_00[2]) {
          iVar7 = (int)((int)puVar8 - *this_00) >> 2;
          if (iVar7 == -1) goto LAB_006aa2f8;
          uVar5 = iVar7 + 1;
          uVar9 = (int)((int)this_00[2] - *this_00) >> 2;
          if (uVar9 < uVar5) {
            if (-(uVar9 >> 1) - 1 < uVar9) {
              uVar9 = 0;
            }
            else {
              uVar9 = uVar9 + (uVar9 >> 1);
            }
            if (uVar9 < uVar5) {
              uVar9 = uVar5;
            }
            F_006b6a50(this_00,uVar9);
            (*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 *)(gen_frame + 0x4));
          }
        }
        if ((int *)this_00[1] != (int *)0x0) {
          *(int *)this_00[1] = iVar4;
        }
      }
      this_00[1] = this_00[1] + 4;
      piVar6 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x8)) + 1);
      (*(int * PTR32 *)(gen_frame + 0x8)) = piVar6;
    } while (piVar6 < *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))));
  }
  iVar4 = REFG(int, 0x13759f4);
  (*(int *)(gen_frame + 0x0)) = REFG(int, 0x13759f4);
  if (REFG(int, 0x13759f4) != 0) {
    puVar8 = (undefined4 *)this_00[1];
    uVar3 = *(undefined4 *)(REFG(int, 0x13759f4) + 0xe0a0);
    (*(uint * PTR32 *)&gen_args[1]) = (uint *)uVar3;
    if ((&(*(uint * PTR32 *)&gen_args[1]) < puVar8) && (puVar2 = (undefined4 *)*this_00, puVar2 <= &(*(uint * PTR32 *)&gen_args[1]))) {
      if (puVar8 == (undefined4 *)this_00[2]) {
        F_006b7120(this_00,1);
      }
      if ((undefined4 *)this_00[1] != (undefined4 *)0x0) {
        *(undefined4 *)this_00[1] =
             *((undefined4 *)GEN_TOP((*this_00 + ((int)&(*(uint * PTR32 *)&gen_args[1]) - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
      }
    }
    else {
      if (puVar8 == (undefined4 *)this_00[2]) {
        F_006b7120(this_00,1);
      }
      if ((undefined4 *)this_00[1] != (undefined4 *)0x0) {
        *(undefined4 *)this_00[1] = uVar3;
      }
    }
    this_00[1] = this_00[1] + 4;
    puVar8 = (undefined4 *)this_00[1];
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)0x0;
    (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)(iVar4 + 0xe0a4);
    do {
      iVar4 = *(*(int * PTR32 *)(gen_frame + 0x8));
      if (iVar4 != 0) {
        (*(uint * PTR32 *)&gen_args[1]) = (uint *)iVar4;
        if (&(*(uint * PTR32 *)&gen_args[1]) < puVar8) {
          puVar2 = (undefined4 *)*this_00;
          if (&(*(uint * PTR32 *)&gen_args[1]) < puVar2) goto LAB_006aa3a2;
          if (puVar8 == (undefined4 *)this_00[2]) {
            iVar4 = (int)puVar8 - (int)((int)(uintptr_t)puVar2) >> 2;
            if (iVar4 == -1) goto LAB_006aa2f8;
            uVar5 = iVar4 + 1;
            uVar9 = (int)this_00[2] - (int)((int)(uintptr_t)puVar2) >> 2;
            if (uVar9 < uVar5) {
              if (-(uVar9 >> 1) - 1 < uVar9) {
                uVar9 = 0;
              }
              else {
                uVar9 = uVar9 + (uVar9 >> 1);
              }
              if (uVar9 < uVar5) {
                uVar9 = uVar5;
              }
              F_006b6a50(this_00,uVar9);
            }
          }
          if ((undefined4 *)this_00[1] != (undefined4 *)0x0) {
            *(undefined4 *)this_00[1] =
                 *((undefined4 *)GEN_TOP((*this_00 + ((int)&(*(uint * PTR32 *)&gen_args[1]) - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
          }
        }
        else {
LAB_006aa3a2: ;
          if (puVar8 == (undefined4 *)this_00[2]) {
            iVar7 = (int)((int)puVar8 - *this_00) >> 2;
            if (iVar7 == -1) goto LAB_006aa2f8;
            uVar5 = iVar7 + 1;
            uVar9 = (int)((int)this_00[2] - *this_00) >> 2;
            if (uVar9 < uVar5) {
              if (-(uVar9 >> 1) - 1 < uVar9) {
                uVar9 = 0;
              }
              else {
                uVar9 = uVar9 + (uVar9 >> 1);
              }
              if (uVar9 < uVar5) {
                uVar9 = uVar5;
              }
              F_006b6a50(this_00,uVar9);
            }
          }
          if ((int *)this_00[1] != (int *)0x0) {
            *(int *)this_00[1] = iVar4;
          }
        }
        this_00[1] = this_00[1] + 4;
        puVar8 = (undefined4 *)this_00[1];
      }
      (*(int * PTR32 *)(gen_frame + 0x8)) = (*(int * PTR32 *)(gen_frame + 0x8)) + 1;
      pvVar10 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 1);
      (*(undefined * PTR32 *)(gen_frame + 0x4)) = pvVar10;
    } while (pvVar10 < (undefined *)0x2);
    bVar1 = *(byte *)((*(int *)(gen_frame + 0x0)) + 0xe0ad);
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)0x0;
    if ((undefined *)(uint)bVar1 != (undefined *)0x0) {
      (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
      do {
        iVar4 = *((int *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x8)) + *(int *)((*(int *)(gen_frame + 0x0)) + 0xe0b0) + 4)));
        if (iVar4 != 0) {
          (*(uint * PTR32 *)&gen_args[1]) = (uint *)iVar4;
          if (&(*(uint * PTR32 *)&gen_args[1]) < puVar8) {
            puVar2 = (undefined4 *)*this_00;
            if (&(*(uint * PTR32 *)&gen_args[1]) < puVar2) goto LAB_006aa4a5;
            if (puVar8 == (undefined4 *)this_00[2]) {
              iVar4 = (int)puVar8 - (int)((int)(uintptr_t)puVar2) >> 2;
              if (iVar4 == -1) goto LAB_006aa2f8;
              uVar5 = iVar4 + 1;
              uVar9 = (int)this_00[2] - (int)((int)(uintptr_t)puVar2) >> 2;
              if (uVar9 < uVar5) {
                if (-(uVar9 >> 1) - 1 < uVar9) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = uVar9 + (uVar9 >> 1);
                }
                if (uVar9 < uVar5) {
                  uVar9 = uVar5;
                }
                F_006b6a50(this_00,uVar9);
              }
            }
            if ((undefined4 *)this_00[1] != (undefined4 *)0x0) {
              *(undefined4 *)this_00[1] =
                   *((undefined4 *)GEN_TOP((*this_00 + ((int)&(*(uint * PTR32 *)&gen_args[1]) - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
            }
          }
          else {
LAB_006aa4a5: ;
            if (puVar8 == (undefined4 *)this_00[2]) {
              iVar7 = (int)((int)puVar8 - *this_00) >> 2;
              if (iVar7 == -1) {
LAB_006aa2f8: ;
                    
                F_00c4579a("vector<T> too long");
              }
              uVar5 = iVar7 + 1;
              uVar9 = (int)((int)this_00[2] - *this_00) >> 2;
              if (uVar9 < uVar5) {
                if (-(uVar9 >> 1) - 1 < uVar9) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = uVar9 + (uVar9 >> 1);
                }
                if (uVar9 < uVar5) {
                  uVar9 = uVar5;
                }
                F_006b6a50(this_00,uVar9);
              }
            }
            if ((int *)this_00[1] != (int *)0x0) {
              *(int *)this_00[1] = iVar4;
            }
          }
          this_00[1] = this_00[1] + 4;
          puVar8 = (undefined4 *)this_00[1];
        }
        (*(int * PTR32 *)(gen_frame + 0x8)) = (*(int * PTR32 *)(gen_frame + 0x8)) + 3;
        pvVar10 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 1);
        (*(undefined * PTR32 *)(gen_frame + 0x4)) = pvVar10;
      } while (pvVar10 < (undefined *)(uint)bVar1);
    }
  }
  return 0;
}

/* ref: FUN_006aa520 */
uint F_006aa520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6aa520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  char cVar1;
  undefined4 * PTR32 * PTR32 * pppuVar2;
  char * PTR32 * PTR32 * pppcVar3;
  uint uVar4;
  char * PTR32 * PTR32 * PTR32 * ppppcVar5;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar6;
  char * PTR32 * PTR32 * PTR32 * ppppcVar7;
  undefined * this_00;
  ulonglong uVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = this;
  F_00690070();
  uVar4 = ((uint *)(gen_frame + 0x70))[0];
  (*(uint *)(gen_frame + 0x84)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x80)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x70))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x70))[0] = uVar4 & 0xffffff00;
  F_004e5c20(((uint *)(gen_frame + 0x70)),"grass/",6);
  uVar4 = F_006b6030(((uint *)(gen_frame + 0x70)),0,param_1,0,0xffffffff);
  pppcVar3 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c))[0];
  (*(uint *)(gen_frame + 0xa0)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x9c)) = 0;
  (*(undefined1 *)((char *)&((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c))[0] + 0)) = 0;
  ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c))[0] = (char * PTR32 * PTR32 *)((uint)pppcVar3 & 0xffffff00);
  F_006b6c60(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c)),uVar4);
  uVar4 = ((uint *)(gen_frame + 0x54))[0];
  ppppcVar7 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c))[0];
  if ((*(uint *)(gen_frame + 0xa0)) < 0x10) {
    ppppcVar7 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c));
  }
  (*(uint *)(gen_frame + 0x68)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x54))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x54))[0] = uVar4 & 0xffffff00;
  ppppcVar5 = ppppcVar7;
  do {
    cVar1 = *(char *)ppppcVar5;
    ppppcVar5 = (char * PTR32 * PTR32 * PTR32 *)((int)ppppcVar5 + 1);
  } while (cVar1 != '\0');
  F_004e5c20(((uint *)(gen_frame + 0x54)),ppppcVar7,(int)ppppcVar5 - (int)((int)ppppcVar7 + 1));
  this_00 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x34);
  F_004e54d0(this_00,((uint *)(gen_frame + 0x54)),0,0xffffffff);
  if (0xf < (*(uint *)(gen_frame + 0x68))) {
    F_00429760(((uint *)(gen_frame + 0x54))[0],(*(uint *)(gen_frame + 0x68)) + 1,0x32);
  }
  uVar4 = ((uint *)(gen_frame + 0x54))[0];
  (*(uint *)(gen_frame + 0x68)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x54))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x54))[0] = uVar4 & 0xffffff00;
  if (0xf < (*(uint *)(gen_frame + 0xa0))) {
    F_00429760(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c))[0],(*(uint *)(gen_frame + 0xa0)) + 1,0x32);
  }
  pppcVar3 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c))[0];
  (*(uint *)(gen_frame + 0xa0)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x9c)) = 0;
  (*(undefined1 *)((char *)&((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c))[0] + 0)) = 0;
  ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c))[0] = (char * PTR32 * PTR32 *)((uint)pppcVar3 & 0xffffff00);
  if (0xf < (*(uint *)(gen_frame + 0x84))) {
    F_00429760(((uint *)(gen_frame + 0x70))[0],(*(uint *)(gen_frame + 0x84)) + 1,0x32);
  }
  uVar4 = ((uint *)(gen_frame + 0x70))[0];
  (*(uint *)(gen_frame + 0x84)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x80)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x70))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x70))[0] = uVar4 & 0xffffff00;
  F_004e5c20(((uint *)(gen_frame + 0x70)),"grass_zone_data.gzd",0x13);
  uVar4 = F_006b6030(((uint *)(gen_frame + 0x70)),0,this_00,0,0xffffffff);
  pppcVar3 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c))[0];
  (*(uint *)(gen_frame + 0xa0)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x9c)) = 0;
  (*(undefined1 *)((char *)&((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c))[0] + 0)) = 0;
  ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c))[0] = (char * PTR32 * PTR32 *)((uint)pppcVar3 & 0xffffff00);
  F_006b6c60(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c)),uVar4);
  pppuVar2 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x38))[0];
  ppppcVar7 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c))[0];
  if ((*(uint *)(gen_frame + 0xa0)) < 0x10) {
    ppppcVar7 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c));
  }
  (*(uint *)(gen_frame + 0x4c)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x38))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x38))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar2 & 0xffffff00);
  ppppcVar5 = ppppcVar7;
  do {
    cVar1 = *(char *)ppppcVar5;
    ppppcVar5 = (char * PTR32 * PTR32 * PTR32 *)((int)ppppcVar5 + 1);
  } while (cVar1 != '\0');
  F_004e5c20(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x38)),ppppcVar7,(int)ppppcVar5 - (int)((int)ppppcVar7 + 1));
  if (0xf < (*(uint *)(gen_frame + 0xa0))) {
    F_00429760(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c))[0],(*(uint *)(gen_frame + 0xa0)) + 1,0x32);
  }
  pppcVar3 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c))[0];
  (*(uint *)(gen_frame + 0xa0)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x9c)) = 0;
  (*(undefined1 *)((char *)&((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c))[0] + 0)) = 0;
  ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c))[0] = (char * PTR32 * PTR32 *)((uint)pppcVar3 & 0xffffff00);
  if (0xf < (*(uint *)(gen_frame + 0x84))) {
    F_00429760(((uint *)(gen_frame + 0x70))[0],(*(uint *)(gen_frame + 0x84)) + 1,0x32);
  }
  (*(undefined4 *)(gen_frame + 0x18)) = param_2;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined1 *)(gen_frame + 0x1c)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x20)) = 5000;
  (*(undefined4 *)(gen_frame + 0x24)) = 0x10100;
  (*(undefined1 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined2 *)(gen_frame + 0x29)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0x677a64;
  ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x38))[0];
  if ((*(uint *)(gen_frame + 0x4c)) < 0x10) {
    ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x38));
  }
  uVar12 = 0;
  uVar11 = 0;
  puVar10 = &(*(undefined4 *)(gen_frame + 0x8));
  puVar9 = &(*(undefined4 *)(gen_frame + 0x30));
  uVar4 = F_004ff310(((undefined1 *)(gen_frame + 0x4)),2,0);
  uVar4 = F_00513d20(uVar4,puVar9,ppppuVar6,puVar10,uVar11,uVar12);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0xe090) = uVar4;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0xe0a4) = 1;
  uVar4 = (*(uint *)(gen_frame + 0x4c));
  if (0xf < (*(uint *)(gen_frame + 0x4c))) {
    uVar8 = F_00429760(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x38))[0],(*(uint *)(gen_frame + 0x4c)) + 1,0x32);
    uVar4 = (uint)uVar8;
  }
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return uVar4;
}

/* ref: FUN_006aa790 */
uint F_006aa790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6aa790u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float param_5 = (float)gen_a4;
  uint param_6 = (uint)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  float * pfVar7;
  int iVar8;
  
  uVar4 = *param_2;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = (undefined4 *)param_1;
  if (uVar4 != param_2[1]) {
    (*(float *)(gen_frame + 0x18)) = 0.0;
    F_00c46e20(uVar4,param_2[1],0);
    param_2[1] = (int)gen_fl2bits((*(float *)(gen_frame + 0x18))) + uVar4;
  }
  iVar8 = *(int *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x1c)) + 0xe090);
  uVar4 = 0;
  if (iVar8 != 0) {
    pfVar7 = (float *)0x0;
    if (param_3 == 0) {
      pfVar7 = *(float * PTR32 *)(iVar8 + 0xf4);
      uVar4 = (uint)*(ushort *)(iVar8 + 0xa8);
    }
    else if (param_3 == 1) {
      pfVar7 = *(float * PTR32 *)(iVar8 + 0xf8);
      uVar4 = (uint)*(ushort *)(iVar8 + 0xaa);
    }
    else if (param_3 == 2) {
      pfVar7 = *(float * PTR32 *)(iVar8 + 0xfc);
      uVar4 = (uint)*(ushort *)(iVar8 + 0xac);
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = (undefined4 *)0x0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
    (*(int *)(gen_frame + 0x8)) = 0;
    if (uVar4 != 0) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = (undefined4 *)uVar4;
      do {
        fVar1 = ((float)GEN_TOF(((float10)(float)((float10)pfVar7[2] - (float10)param_4[2]) *
                        (float10)(float)((float10)pfVar7[2] - (float10)param_4[2]) +
                       ((float10)(float)((float10)*pfVar7 - (float10)*param_4) *
                        (float10)(float)((float10)*pfVar7 - (float10)*param_4) +
                       (float10)(float)((float10)pfVar7[1] - (float10)param_4[1]) *
                       (float10)(float)((float10)pfVar7[1] - (float10)param_4[1])))));
        (*(float *)(gen_frame + 0x18)) = fVar1;
        if ((float10)fVar1 <= (float10)param_5) {
          (*(float * PTR32 *)(gen_frame + 0x10)) = pfVar7;
          (*(float *)(gen_frame + 0x14)) = fVar1;
          F_006b70a0(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)),&(*(float * PTR32 *)(gen_frame + 0x10)));
        }
        pfVar7 = pfVar7 + 5;
        uVar4 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x1c)) - 1;
        (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = (undefined4 *)uVar4;
      } while (uVar4 != 0);
    }
    F_006b6cf0((*(undefined4 * PTR32 *)(gen_frame + 0x0)),(*(undefined4 * PTR32 *)(gen_frame + 0x4)),(int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x0))) >> 3,((code *)REFP(0x68bb00)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x0));
    (*(float *)(gen_frame + 0x18)) = 0.0;
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x0)) != (*(undefined4 * PTR32 *)(gen_frame + 0x4))) {
      do {
        if (param_6 <= (uint)gen_fl2bits((*(float *)(gen_frame + 0x18)))) break;
        puVar2 = (undefined4 *)param_2[1];
        if (((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) < puVar2) && (puVar3 = (undefined4 *)*param_2, puVar3 <= (*(undefined4 * PTR32 *)(gen_frame + 0x1c)))) {
          iVar8 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x1c)) - (int)puVar3;
          if (puVar2 == (undefined4 *)param_2[2]) {
            iVar5 = (int)puVar2 - (int)((int)(uintptr_t)puVar3) >> 2;
            if (iVar5 == -1) {
LAB_006aaa01: ;
                    
              F_00c4579a("vector<T> too long");
            }
            uVar6 = iVar5 + 1;
            uVar4 = (int)param_2[2] - (int)((int)(uintptr_t)puVar3) >> 2;
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
              F_006b6bb0(param_2,uVar4);
            }
          }
          if ((undefined4 *)param_2[1] != (undefined4 *)0x0) {
            *(undefined4 *)param_2[1] = *((undefined4 *)GEN_TOP((*param_2 + (iVar8 >> 2) * 4)));
          }
        }
        else {
          if (puVar2 == (undefined4 *)param_2[2]) {
            iVar8 = (int)((int)puVar2 - *param_2) >> 2;
            if (iVar8 == -1) goto LAB_006aaa01;
            uVar6 = iVar8 + 1;
            uVar4 = (int)((int)param_2[2] - *param_2) >> 2;
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
              F_006b6bb0(param_2,uVar4);
            }
          }
          if ((undefined4 *)param_2[1] != (undefined4 *)0x0) {
            *(undefined4 *)param_2[1] = *(*(undefined4 * PTR32 *)(gen_frame + 0x1c));
          }
        }
        param_2[1] = param_2[1] + 4;
        (*(float *)(gen_frame + 0x18)) = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x18))) + 1);
        (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) + 2;
      } while ((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != (*(undefined4 * PTR32 *)(gen_frame + 0x4)));
    }
    uVar4 = (int)(param_2[1] - *param_2) >> 2;
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x0)) != (undefined4 *)0x0) {
      F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),((*(int *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x0))) >> 3) * 8,0xd8);
    }
  }
  return uVar4;
}

/* ref: FUN_006aaa10 */
uint F_006aaa10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6aaa10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  byte * pbVar3;
  float fVar4;
  int * piVar5;
  int * piVar6;
  int * piVar7;
  float10 fVar8;
  ulonglong uVar9;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(byte * PTR32 *)(gen_frame + 0x20)) = (byte *)param_1;
  (*(int *)(gen_frame + 0x1c)) = (int)this + 0x1090;
  ((float *)(gen_frame + 0x2c))[0] = 2.24208e-44;
  ((float *)(gen_frame + 0x2c))[1] = 8.96831e-44;
  ((float *)(gen_frame + 0x2c))[2] = 1.43493e-42;
  fVar2 = ((float *)(gen_frame + 0x2c))[(int)(param_2)];
  (*(int * PTR32 *)(gen_frame + 0x14)) = (int *)((int)this + 0x50);
  (*(int *)(gen_frame + 0x18)) = (int)this + 0x390;
  (*(int * PTR32 *)(gen_frame + 0xc)) = (&(*(int * PTR32 *)(gen_frame + 0x14)))[param_2];
  (*(int * PTR32 *)(gen_frame + 0x24)) = (*(int * PTR32 *)(gen_frame + 0xc));
  if (fVar2 != 0.0) {
    (*(float *)(gen_frame + 0x28)) = fVar2;
    do {
      F_00635b30((*(int * PTR32 *)(gen_frame + 0xc)),1);
      (*(int * PTR32 *)(gen_frame + 0xc)) = (*(int * PTR32 *)(gen_frame + 0xc)) + 0xd;
      fVar4 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x28))) + -1);
      (*(float *)(gen_frame + 0x28)) = fVar4;
    } while (fVar4 != 0.0);
  }
  (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x14)) = (int *)0x0;
  (*(int *)(gen_frame + 0x18)) = 0;
  fVar8 = F_006901d0(REFG(undefined4, 0x13759f4),param_2);
  (*(float *)(gen_frame + 0x28)) = (float)fVar8;
  pbVar3 = (byte *)F_006aa790(this,&(*(int * PTR32 *)(gen_frame + 0x10)),param_2,(*(byte * PTR32 *)(gen_frame + 0x20)),(float)fVar8,
                                (undefined4)gen_fl2bits(fVar2));
  (*(byte * PTR32 *)(gen_frame + 0x20)) = pbVar3;
  fVar4 = fVar2;
  piVar5 = (*(int * PTR32 *)(gen_frame + 0x24));
  if (pbVar3 != (byte *)0x0) {
    if (fVar2 == 0.0) goto LAB_006aab59;
    piVar7 = (*(int * PTR32 *)(gen_frame + 0x24)) + 10;
    (*(float *)(gen_frame + 0x28)) = fVar2;
    do {
      if ((*piVar7 != 0) && (piVar5 = (*(int * PTR32 *)(gen_frame + 0x14)), piVar6 = (*(int * PTR32 *)(gen_frame + 0x10)), (*(int * PTR32 *)(gen_frame + 0x10)) != (*(int * PTR32 *)(gen_frame + 0x14)))) {
        do {
          pbVar3 = (byte *)*piVar7;
          if (*(int *)(pbVar3 + 0x10) == *(int *)(*piVar6 + 0x10)) {
            F_00635b30(piVar7 + -10,0);
            pbVar3 = (byte *)F_00c46e20(piVar6,piVar6 + 1,((int)piVar5 - (int)(piVar6 + 1) >> 2) * 4
                                       );
            piVar5 = piVar5 + -1;
          }
          else {
            piVar6 = piVar6 + 1;
          }
        } while (piVar6 != piVar5);
        (*(int * PTR32 *)(gen_frame + 0x14)) = piVar5;
      }
      piVar7 = piVar7 + 0xd;
      fVar1 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x28))) + -1);
      (*(float *)(gen_frame + 0x28)) = fVar1;
      piVar5 = (*(int * PTR32 *)(gen_frame + 0x24));
    } while (fVar1 != 0.0);
  }
  for (; fVar4 != 0.0; fVar4 = gen_bits2f((int)gen_fl2bits(fVar4) + -1)) {
    if ((~*(byte *)(piVar5 + 2) & 1) != 0) {
      pbVar3 = (byte *)F_0064ad80(piVar5);
    }
    piVar5 = piVar5 + 0xd;
  }
LAB_006aab59: ;
  piVar5 = (*(int * PTR32 *)(gen_frame + 0x10));
  if (((*(byte * PTR32 *)(gen_frame + 0x20)) != (byte *)0x0) && (piVar7 = (*(int * PTR32 *)(gen_frame + 0x10)), (*(int * PTR32 *)(gen_frame + 0x10)) != (*(int * PTR32 *)(gen_frame + 0x14)))) {
    do {
      fVar4 = 0.0;
      if (fVar2 != 0.0) {
        pbVar3 = (byte *)((*(int * PTR32 *)(gen_frame + 0x24)) + 2);
        do {
          if ((~*pbVar3 & 1) != 0) {
            pbVar3 = (byte *)F_00651780((*(int * PTR32 *)(gen_frame + 0x24)) + (int)gen_fl2bits(fVar4) * 0xd,(int)this + 0x34,
                                          *piVar7);
            break;
          }
          fVar4 = gen_bits2f((int)gen_fl2bits(fVar4) + 1);
          pbVar3 = pbVar3 + 0x34;
        } while ((uint)gen_fl2bits(fVar4) < (uint)gen_fl2bits(fVar2));
      }
      piVar7 = piVar7 + 1;
    } while (piVar7 != (*(int * PTR32 *)(gen_frame + 0x14)));
  }
  if (piVar5 != (int *)0x0) {
    uVar9 = F_00429760(piVar5,((*(int *)(gen_frame + 0x18)) - (int)((int)(uintptr_t)piVar5) >> 2) * 4,0xd8);
    pbVar3 = (byte *)uVar9;
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return (uint)pbVar3;
}

/* ref: FUN_006aabf0 */
uint F_006aabf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6aabf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  F_006aa520((undefined *)(param_3 * 0xe0c0 + 0x10 + (int)this),param_1,param_2);
  uVar1 = F_004e54d0((undefined *)((int)this + 0x1c194),param_1,0,0xffffffff);
  *(undefined4 *)((int)this + 0x1c1b0) = param_2;
  return uVar1;
}

/* ref: FUN_006aac30 */
uint F_006aac30(unsigned int gen_a0)
{
  GEN_ENTER(0x6aac30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_006aa520((undefined *)((int)this + 0xe0d0),(int)this + 0x1c194,
                       *(undefined4 *)((int)this + 0x1c1b0));
  *(undefined1 *)((int)this + 0x1c190) = 1;
  return uVar1;
}

/* ref: FUN_006aac60 */
byte F_006aac60(unsigned int gen_a0)
{
  GEN_ENTER(0x6aac60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  byte bVar3;
  int * piVar4;
  undefined4 * puVar5;
  uint uVar6;
  
  iVar2 = *(int *)((int)this + 4);
  if (iVar2 != 0) {
    piVar4 = (int *)(iVar2 + 0x88);
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4;
    UNLOCK();
    if (iVar1 == 2) {
      piVar4 = (int *)(iVar2 + 0x8c);
      LOCK();
      iVar2 = *piVar4;
      *piVar4 = *piVar4;
      UNLOCK();
      if ((iVar2 < 8) && (iVar2 = *(int *)((int)this + 8), iVar2 != 0)) {
        piVar4 = (int *)(iVar2 + 0x88);
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4;
        UNLOCK();
        if (iVar1 == 2) {
          piVar4 = (int *)(iVar2 + 0x8c);
          LOCK();
          iVar2 = *piVar4;
          *piVar4 = *piVar4;
          UNLOCK();
          if ((iVar2 < 8) && (iVar2 = *(int *)((int)this + 0xc), iVar2 != 0)) {
            piVar4 = (int *)(iVar2 + 0x88);
            LOCK();
            iVar1 = *piVar4;
            *piVar4 = *piVar4;
            UNLOCK();
            if (iVar1 == 2) {
              piVar4 = (int *)(iVar2 + 0x8c);
              LOCK();
              iVar2 = *piVar4;
              *piVar4 = *piVar4;
              UNLOCK();
              if (iVar2 < 8) {
                bVar3 = F_00691c50(*(undefined4 *)((int)this + 0x10));
                if (bVar3 != 0) {
                  bVar3 = F_00691c50(*(undefined4 *)((int)this + 0x14));
                  if (bVar3 != 0) {
                    bVar3 = F_00691c50(*(undefined4 *)((int)this + 0x18));
                    if (bVar3 != 0) {
                      bVar3 = F_00691c50(*(undefined4 *)((int)this + 0x1c));
                      if (bVar3 != 0) {
                        bVar3 = F_00691c50(*(undefined4 *)((int)this + 0x20));
                        if (bVar3 != 0) {
                          bVar3 = F_00691c50(*(undefined4 *)((int)this + 0x24));
                          if (bVar3 != 0) {
                            bVar3 = F_00691c50(*(undefined4 *)((int)this + 0x28));
                            if (bVar3 != 0) {
                              bVar3 = F_00691c50(*(undefined4 *)((int)this + 0x2c));
                              if (bVar3 != 0) {
                                bVar3 = F_00691c50(*(undefined4 *)((int)this + 0x30));
                                if (bVar3 != 0) {
                                  bVar3 = F_00691c50(*(undefined4 *)((int)this + 0x34));
                                  if (bVar3 != 0) {
                                    bVar3 = F_00691c50(*(undefined4 *)((int)this + 0x38));
                                    if (bVar3 != 0) {
                                      bVar3 = F_00691c50(*(undefined4 *)((int)this + 0x3c));
                                      if (bVar3 != 0) {
                                        bVar3 = F_00691c50(*(undefined4 *)((int)this + 0x40));
                                        if (bVar3 != 0) {
                                          bVar3 = F_00691c50(*(undefined4 *)((int)this + 0x44));
                                          if (bVar3 != 0) {
                                            bVar3 = F_00691c50(*(undefined4 *)((int)this + 0x48));
                                            if (bVar3 != 0) {
                                              bVar3 = F_00691c50(*(undefined4 *)((int)this + 0x4c)
                                                                  );
                                              if (bVar3 != 0) {
                                                bVar3 = F_00691c50(*(undefined4 *)
                                                                      ((int)this + 0x50));
                                                if (bVar3 != 0) {
                                                  bVar3 = F_00691c50(*(undefined4 *)
                                                                        ((int)this + 0x54));
                                                  if (bVar3 != 0) {
                                                    bVar3 = F_00691c50(*(undefined4 *)
                                                                          ((int)this + 0x58));
                                                    if (bVar3 != 0) {
                                                      if ((*(uint *)((int)this + 0xf0) >> 2 & 1) ==
                                                          0) {
                                                        F_006a9ea0(this);
                                                        *(uint *)((int)this + 0xf0) =
                                                             *(uint *)((int)this + 0xf0) | 4;
                                                      }
                                                      bVar3 = F_00691c90(this);
                                                      if (bVar3 != 0) {
                                                        bVar3 = F_00691c50(*(undefined4 *)
                                                                              ((int)this + 0x5c));
                                                        if (bVar3 != 0) {
                                                          bVar3 = F_00691c50(*(undefined4 *)
                                                                                ((int)this + 0x60));
                                                          if (bVar3 != 0) {
                                                            bVar3 = F_00691c50(*(undefined4 *)
                                                                                  ((int)this + 100))
                                                            ;
                                                            if (bVar3 != 0) {
                                                              uVar6 = 0;
                                                              puVar5 = (undefined4 *)
                                                                       ((int)this + 0x68);
                                                              do {
                                                                bVar3 = F_00691c50(*puVar5);
                                                                if (bVar3 == 0) {
                                                                  return 0;
                                                                }
                                                                uVar6 = uVar6 + 1;
                                                                puVar5 = puVar5 + 1;
                                                              } while (uVar6 < 4);
                                                              *(uint *)((int)this + 0xf0) =
                                                                   *(uint *)((int)this + 0xf0) | 1;
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
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_006aaee0 */
uint F_006aaee0(unsigned int gen_a0)
{
  GEN_ENTER(0x6aaee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x150];
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  char * pcVar4;
  undefined4 * puVar5;
  undefined * this_00;
  uint uVar6;
  ulonglong uVar7;
  
  uVar6 = ((uint *)(gen_frame + 0x28))[0];
  (*(uint *)(gen_frame + 0x148)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14c);
  (*(uint *)(gen_frame + 0x3c)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x28))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x28))[0] = uVar6 & 0xffffff00;
  pcVar4 = (char *)((int)this + 0xa1);
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_004e5c20(((uint *)(gen_frame + 0x28)),(char *)((int)this + 0xa1),(int)pcVar4 - ((int)this + 0xa2));
  puVar5 = (undefined4 *)F_006aa0c0(((uint *)(gen_frame + 0x28)),((uint *)(gen_frame + 0xc)));
  if (0xf < (uint)puVar5[5]) {
    puVar5 = (undefined4 *)*puVar5;
  }
  F_00c472af(((char *)(gen_frame + 0x44)),0x104,&REFG(undefined, 0x10b17b0),puVar5);
  if (0xf < (*(uint *)(gen_frame + 0x20))) {
    F_00429760(((uint *)(gen_frame + 0xc))[0],(*(uint *)(gen_frame + 0x20)) + 1,0x32);
  }
  uVar6 = ((uint *)(gen_frame + 0xc))[0];
  (*(uint *)(gen_frame + 0x20)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0xc))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0xc))[0] = uVar6 & 0xffffff00;
  if (0xf < (*(uint *)(gen_frame + 0x3c))) {
    F_00429760(((uint *)(gen_frame + 0x28))[0],(*(uint *)(gen_frame + 0x3c)) + 1,0x32);
  }
  if (REFG(undefined4, 0x13759f4) == 0) {
    this_00 = (undefined *)F_00406b90(0x1c1c0,0,0);
    if (this_00 == (undefined *)0x0) {
      REFG(undefined4, 0x13759f4) = 0;
    }
    else {
      REFG(undefined4, 0x13759f4) = F_006a9e30(this_00);
    }
  }
  uVar3 = ((uint *)(gen_frame + 0x28))[0];
  uVar6 = REFG(undefined4, 0x13759f4);
  pcVar4 = ((char *)(gen_frame + 0x44));
  (*(uint *)(gen_frame + 0x3c)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x28))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x28))[0] = uVar3 & 0xffffff00;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_004e5c20(((uint *)(gen_frame + 0x28)),((char *)(gen_frame + 0x44)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x44)) + 1));
  uVar2 = *(undefined4 *)((int)this + 0x1a4);
  F_006aa520((undefined *)(uVar6 + 0x10),((uint *)(gen_frame + 0x28)),uVar2);
  F_004e54d0((undefined *)(uVar6 + 0x1c194),((uint *)(gen_frame + 0x28)),0,0xffffffff);
  *(undefined4 *)(uVar6 + 0x1c1b0) = uVar2;
  uVar6 = (*(uint *)(gen_frame + 0x3c));
  if (0xf < (*(uint *)(gen_frame + 0x3c))) {
    uVar7 = F_00429760(((uint *)(gen_frame + 0x28))[0],(*(uint *)(gen_frame + 0x3c)) + 1,0x32);
    uVar6 = (uint)uVar7;
  }
  F_00c47745((*(uint *)(gen_frame + 0x148)) ^ (uint)(uint)(gen_frame + 0x14c));
  return uVar6;
}

/* ref: FUN_006ab090 */
uint F_006ab090(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6ab090u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x190];
  ushort * puVar1;
  ushort uVar2;
  undefined * this;
  byte bVar3;
  uint uVar4;
  uint * PTR32 * ppuVar5;
  uint * puVar6;
  int * piVar7;
  uint uVar8;
  uint * puVar9;
  uint * PTR32 * ppuVar10;
  undefined4 * puVar11;
  int iVar12;
  uint * PTR32 * ppuVar13;
  int iVar14;
  uint * PTR32 * ppuVar15;
  uint * PTR32 * ppuVar16;
  float10 fVar17;
  ulonglong uVar18;
  undefined1 * puVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  
  uVar4 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x18c);
  (*(uint *)(gen_frame + 0x188)) = uVar4;
  iVar14 = *(int *)((int)param_1 + 0xe0a4);
  if (iVar14 == 1) {
    ppuVar5 = ((uint * PTR32 *)GEN_TOP((*(int *)((int)param_1 + 0xe090) + 0x88)));
    LOCK();
    puVar9 = *ppuVar5;
    *ppuVar5 = *ppuVar5;
    UNLOCK();
    if (puVar9 == (uint *)0x2) {
      ppuVar5 = ((uint * PTR32 *)GEN_TOP((*(int *)((int)param_1 + 0xe090) + 0x8c)));
      LOCK();
      puVar9 = *ppuVar5;
      *ppuVar5 = *ppuVar5;
      UNLOCK();
      if ((int)puVar9 < 8) {
        iVar14 = *(int *)((int)param_1 + 0xe090);
        uVar2 = *(ushort *)(iVar14 + 0xa8);
        if ((uint)*(ushort *)(iVar14 + 0xac) + (uint)*(ushort *)(iVar14 + 0xaa) + (uint)uVar2 == 0)
        {
          *(undefined4 *)((int)param_1 + 0xe0a4) = 0;
          F_00c47745(uVar4 ^ (uint)(uint)(gen_frame + 0x18c));
          return (uint)uVar2;
        }
        *(undefined1 *)((int)param_1 + 0xe09c) = 2;
        uVar4 = 0;
        puVar9 = (uint *)((int)param_1 + 0xe094);
        do {
          piVar7 = (int *)((int)param_1 + 0x34);
          if (0xf < *(uint *)((int)param_1 + 0x48)) {
            piVar7 = (int *)*piVar7;
          }
          F_00c472af(((undefined1 *)(gen_frame + 0x84)),0x104,"%s%s%s",piVar7,*(int *)((int)param_1 + 0xe090) + 0xb0 + uVar4,
                     &REFG(undefined, 0x10b17b4));
          uVar22 = 0;
          uVar21 = 0;
          uVar20 = 0;
          puVar19 = ((undefined1 *)(gen_frame + 0x84));
          puVar11 = &(*(undefined4 *)(gen_frame + 0x18));
          (*(undefined4 *)(gen_frame + 0x18)) = 0x746578;
          uVar8 = F_004ff310(((undefined1 *)(gen_frame + 0x8)),2,0);
          uVar8 = F_00513d20(uVar8,puVar11,puVar19,uVar20,uVar21,uVar22);
          *puVar9 = uVar8;
          uVar4 = uVar4 + 0x20;
          puVar9 = puVar9 + 1;
        } while (uVar4 < 0x40);
        ppuVar5 = (uint * PTR32 *)F_00500530(*(undefined4 *)((int)param_1 + 0xe090));
        (*(uint * PTR32 * PTR32 *)(gen_frame + 0x30)) = ppuVar5;
        *(char *)((int)param_1 + 0xe09d) = (char)ppuVar5;
        if ((char)ppuVar5 != '\0') {
          uVar4 = (uint)ppuVar5 & 0xff;
          puVar9 = (uint *)F_00406bb0(-(uint)(0xfffffffb < uVar4 * 0xc) | uVar4 * 0xc + 4,0,0);
          if (puVar9 == (uint *)0x0) {
            ppuVar5 = (uint * PTR32 *)0x0;
          }
          else {
            ppuVar5 = (uint * PTR32 *)(puVar9 + 1);
            *puVar9 = uVar4;
            ppuVar15 = ppuVar5;
            while (uVar4 = uVar4 - 1, -1 < (int)uVar4) {
              *(undefined2 *)ppuVar15 = 0;
              ppuVar15[1] = (uint *)0x0;
              ppuVar15[2] = (uint *)0x0;
              ppuVar15 = ppuVar15 + 3;
            }
          }
          ppuVar15 = (uint * PTR32 *)0x0;
          *(uint * PTR32 * PTR32 *)((int)param_1 + 0xe0a0) = ppuVar5;
          if ((*(uint * PTR32 * PTR32 *)(gen_frame + 0x30)) != (uint * PTR32 *)0x0) {
            iVar14 = 0;
            do {
              F_00c472af(((undefined1 *)(gen_frame + 0x84)),0x104,&REFG(undefined, 0x10b17c4),
                         *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)param_1 + 0xe090) + 0xf0))) + (int)((int)(uintptr_t)ppuVar15) * 4))));
              uVar22 = 0;
              uVar21 = 0;
              uVar20 = 0;
              puVar19 = ((undefined1 *)(gen_frame + 0x84));
              puVar11 = &(*(undefined4 *)(gen_frame + 0x10));
              (*(undefined4 *)(gen_frame + 0x10)) = 0x6d646c;
              uVar4 = F_004ff310(((undefined1 *)(gen_frame + 0xc)),2,0);
              ppuVar5 = (uint * PTR32 *)F_00513d20(uVar4,puVar11,puVar19,uVar20,uVar21,uVar22);
              *((uint * PTR32 * PTR32 *)GEN_TOP((iVar14 + 4 + *(int *)((int)param_1 + 0xe0a0)))) = ppuVar5;
              ppuVar15 = (uint * PTR32 *)((int)ppuVar15 + 1);
              iVar14 = iVar14 + 0xc;
            } while (ppuVar15 < (*(uint * PTR32 * PTR32 *)(gen_frame + 0x30)));
          }
        }
        *(undefined4 *)((int)param_1 + 0xe0a4) = 2;
      }
    }
  }
  else if (iVar14 == 2) {
    ppuVar15 = (uint * PTR32 *)0x0;
    (*(uint * PTR32 * PTR32 *)(gen_frame + 0x20)) = (uint * PTR32 *)0x0;
    (*(uint * PTR32 * PTR32 *)(gen_frame + 0x24)) = (uint * PTR32 *)0x0;
    (*(uint * PTR32 * PTR32 *)(gen_frame + 0x28)) = (uint * PTR32 *)0x0;
    ((uint * PTR32 *)(gen_frame + 0x34))[1] = (uint *)0x0;
    if (*(char *)((int)param_1 + 0xe09c) != '\0') {
      ((uint * PTR32 *)(gen_frame + 0x34))[0] = (uint *)((int)param_1 + 0xe094);
      do {
        puVar9 = ((uint *)GEN_TOP(*((uint * PTR32 *)(gen_frame + 0x34))[0]));
        (*(uint * PTR32 *)(gen_frame + 0x3c)) = puVar9;
        ppuVar5 = (*(uint * PTR32 * PTR32 *)(gen_frame + 0x24));
        if ((&(*(uint * PTR32 *)(gen_frame + 0x3c)) < (*(uint * PTR32 * PTR32 *)(gen_frame + 0x24))) && (ppuVar15 <= &(*(uint * PTR32 *)(gen_frame + 0x3c)))) {
          iVar14 = (int)&(*(uint * PTR32 *)(gen_frame + 0x3c)) - (int)ppuVar15;
          if ((*(uint * PTR32 * PTR32 *)(gen_frame + 0x24)) == (*(uint * PTR32 * PTR32 *)(gen_frame + 0x28))) {
            F_006b7190(&(*(uint * PTR32 * PTR32 *)(gen_frame + 0x20)),1);
            ppuVar5 = (*(uint * PTR32 * PTR32 *)(gen_frame + 0x24));
            ppuVar15 = (*(uint * PTR32 * PTR32 *)(gen_frame + 0x20));
          }
          if (ppuVar5 != (uint * PTR32 *)0x0) {
            *ppuVar5 = ppuVar15[iVar14 >> 2];
          }
        }
        else {
          if ((*(uint * PTR32 * PTR32 *)(gen_frame + 0x24)) == (*(uint * PTR32 * PTR32 *)(gen_frame + 0x28))) {
            F_006b7190(&(*(uint * PTR32 * PTR32 *)(gen_frame + 0x20)),1);
            ppuVar5 = (*(uint * PTR32 * PTR32 *)(gen_frame + 0x24));
            ppuVar15 = (*(uint * PTR32 * PTR32 *)(gen_frame + 0x20));
          }
          if (ppuVar5 != (uint * PTR32 *)0x0) {
            *ppuVar5 = puVar9;
          }
        }
        ((uint * PTR32 *)(gen_frame + 0x34))[0] = ((uint * PTR32 *)(gen_frame + 0x34))[0] + 1;
        uVar4 = (int)((uint * PTR32 *)(gen_frame + 0x34))[1] + 1;
        (*(uint * PTR32 * PTR32 *)(gen_frame + 0x24)) = ppuVar5 + 1;
        ((uint * PTR32 *)(gen_frame + 0x34))[1] = (uint *)uVar4;
      } while (uVar4 < *(byte *)((int)param_1 + 0xe09c));
    }
    ((uint * PTR32 *)(gen_frame + 0x34))[1] = (uint *)0x0;
    ppuVar16 = ppuVar15;
    if (*(char *)((int)param_1 + 0xe09d) != '\0') {
      (*(uint * PTR32 *)(gen_frame + 0x3c)) = (uint *)0x0;
      do {
        puVar9 = *((uint * PTR32 *)GEN_TOP(((int)(*(uint * PTR32 *)(gen_frame + 0x3c)) + *(int *)((int)param_1 + 0xe0a0) + 4)));
        ((uint * PTR32 *)(gen_frame + 0x34))[0] = puVar9;
        ppuVar5 = (*(uint * PTR32 * PTR32 *)(gen_frame + 0x24));
        if ((((uint * PTR32 *)(gen_frame + 0x34)) < (*(uint * PTR32 * PTR32 *)(gen_frame + 0x24))) && (ppuVar15 <= ((uint * PTR32 *)(gen_frame + 0x34)))) {
          iVar14 = (int)((uint * PTR32 *)(gen_frame + 0x34)) - (int)ppuVar15;
          if ((*(uint * PTR32 * PTR32 *)(gen_frame + 0x24)) == (*(uint * PTR32 * PTR32 *)(gen_frame + 0x28))) {
            iVar12 = (int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x24)) - (int)((int)(uintptr_t)ppuVar15) >> 2;
            if (iVar12 == -1) {
LAB_006ab53d: ;
                    
              F_00c4579a("vector<T> too long");
            }
            uVar8 = iVar12 + 1;
            uVar4 = (int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x28)) - (int)((int)(uintptr_t)ppuVar15) >> 2;
            if (uVar4 < uVar8) {
              if (-(uVar4 >> 1) - 1 < uVar4) {
                uVar4 = 0;
              }
              else {
                uVar4 = uVar4 + (uVar4 >> 1);
              }
              if (uVar4 < uVar8) {
                uVar4 = uVar8;
              }
              F_006b6b00(&(*(uint * PTR32 * PTR32 *)(gen_frame + 0x20)),uVar4);
              ppuVar5 = (*(uint * PTR32 * PTR32 *)(gen_frame + 0x24));
              ppuVar15 = (*(uint * PTR32 * PTR32 *)(gen_frame + 0x20));
            }
          }
          if (ppuVar5 != (uint * PTR32 *)0x0) {
            *ppuVar5 = ppuVar15[iVar14 >> 2];
          }
        }
        else {
          if ((*(uint * PTR32 * PTR32 *)(gen_frame + 0x24)) == (*(uint * PTR32 * PTR32 *)(gen_frame + 0x28))) {
            iVar14 = (int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x24)) - (int)((int)(uintptr_t)ppuVar15) >> 2;
            if (iVar14 == -1) goto LAB_006ab53d;
            uVar8 = iVar14 + 1;
            uVar4 = (int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x28)) - (int)((int)(uintptr_t)ppuVar15) >> 2;
            if (uVar4 < uVar8) {
              if (-(uVar4 >> 1) - 1 < uVar4) {
                uVar4 = 0;
              }
              else {
                uVar4 = uVar4 + (uVar4 >> 1);
              }
              if (uVar4 < uVar8) {
                uVar4 = uVar8;
              }
              F_006b6b00(&(*(uint * PTR32 * PTR32 *)(gen_frame + 0x20)),uVar4);
              ppuVar5 = (*(uint * PTR32 * PTR32 *)(gen_frame + 0x24));
              ppuVar15 = (*(uint * PTR32 * PTR32 *)(gen_frame + 0x20));
            }
          }
          if (ppuVar5 != (uint * PTR32 *)0x0) {
            *ppuVar5 = puVar9;
          }
        }
        (*(uint * PTR32 *)(gen_frame + 0x3c)) = (*(uint * PTR32 *)(gen_frame + 0x3c)) + 3;
        puVar9 = (uint *)((int)((uint * PTR32 *)(gen_frame + 0x34))[1] + 1);
        (*(uint * PTR32 * PTR32 *)(gen_frame + 0x24)) = ppuVar5 + 1;
        ((uint * PTR32 *)(gen_frame + 0x34))[1] = puVar9;
        ppuVar16 = ppuVar15;
      } while (puVar9 < (uint *)(uint)*(byte *)((int)param_1 + 0xe09d));
    }
    for (; ppuVar5 = (*(uint * PTR32 * PTR32 *)(gen_frame + 0x24)), ppuVar15 != (*(uint * PTR32 * PTR32 *)(gen_frame + 0x24)); ppuVar15 = ppuVar15 + 1) {
      ppuVar13 = (uint * PTR32 *)*ppuVar15;
      (*(uint * PTR32 * PTR32 *)(gen_frame + 0x30)) = ppuVar13;
      ppuVar10 = ppuVar13 + 0x22;
      LOCK();
      puVar9 = *ppuVar10;
      *ppuVar10 = *ppuVar10;
      UNLOCK();
      if (puVar9 != (uint *)0x2) goto LAB_006ab610;
      ppuVar13 = ppuVar13 + 0x23;
      LOCK();
      puVar9 = *ppuVar13;
      *ppuVar13 = *ppuVar13;
      UNLOCK();
      if (7 < (int)puVar9) goto LAB_006ab610;
    }
    (*(uint * PTR32 * PTR32 *)(gen_frame + 0x1c)) = (uint * PTR32 *)0x0;
    if (*(char *)((int)param_1 + 0xe09d) != '\0') {
      (*(uint * PTR32 * PTR32 *)(gen_frame + 0x30)) = (uint * PTR32 *)0x0;
      do {
        ppuVar15 = (*(uint * PTR32 * PTR32 *)(gen_frame + 0x30));
        puVar1 = ((ushort *)GEN_TOP(((int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x30)) + *(int *)((int)param_1 + 0xe0a0))));
        puVar9 = *(uint * PTR32 *)(puVar1 + 2);
        ((uint * PTR32 *)(gen_frame + 0x34))[0] = puVar9;
        if (puVar9 != (uint *)0x0) {
          uVar2 = *((ushort *)GEN_TOP((*(int *)(puVar9[0x2a] + 4) + 0xc + puVar9[0x2a])));
          puVar9 = (uint *)(uint)uVar2;
          *puVar1 = uVar2;
          ((uint * PTR32 *)(gen_frame + 0x34))[1] = puVar9;
          uVar4 = F_00406bb0((int)((int)(uintptr_t)puVar9) * 4,0,0);
          *((uint *)GEN_TOP(((int)ppuVar15 + *(int *)((int)param_1 + 0xe0a0) + 8))) = uVar4;
          F_00c48350(*((undefined * PTR32 *)GEN_TOP(((int)ppuVar15 + *(int *)((int)param_1 + 0xe0a0) + 8))),0,(int)((int)(uintptr_t)puVar9) * 4)
          ;
          if (uVar2 != 0) {
            iVar14 = 0;
            (*(uint * PTR32 *)(gen_frame + 0x3c)) = ((uint * PTR32 *)(gen_frame + 0x34))[1];
            do {
              iVar12 = *((int *)GEN_TOP((iVar14 + ((uint * PTR32 *)(gen_frame + 0x34))[0][0x42])));
              puVar9 = *(uint * PTR32 *)(iVar12 + 0x10);
              ((uint * PTR32 *)(gen_frame + 0x34))[1] = puVar9;
              puVar6 = (uint *)0x0;
              uVar4 = 0;
              (*(int *)(gen_frame + 0x14)) = iVar12;
              if (puVar9 != (uint *)0x0) {
                do {
                  if (puVar6 < *(uint * PTR32 *)(iVar12 + 0x10)) {
                    puVar11 = ((undefined4 *)GEN_TOP((*(int *)(iVar12 + 0xc) + (int)((int)(uintptr_t)puVar6) * 4)));
                  }
                  else {
                    puVar11 = (undefined4 *)0x0;
                  }
                  uVar8 = uVar4 & 0xffff;
                  puVar6 = (uint *)((int)puVar6 + 1);
                  uVar4 = uVar4 + 1;
                  *(undefined4 *)((int)&(*(undefined4 *)(gen_frame + 0x40)) + uVar8 * 4) = *puVar11;
                  iVar12 = (*(int *)(gen_frame + 0x14));
                  ppuVar15 = (*(uint * PTR32 * PTR32 *)(gen_frame + 0x30));
                } while (puVar6 < puVar9);
              }
              iVar12 = (uVar4 & 0xffff) * 4;
              *((undefined1 *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x40)) + (uVar4 & 0xffff) * 4))) = 2;
              *(undefined1 *)((int)&(*(undefined4 *)(gen_frame + 0x40)) + iVar12 + 1U) = 0;
              *(undefined1 *)((int)&(*(undefined4 *)(gen_frame + 0x40)) + iVar12 + 2U) = 0x74;
              *(undefined1 *)((int)&(*(undefined4 *)(gen_frame + 0x40)) + iVar12 + 3U) = 0xc;
              uVar4 = F_004deb40(REFG(undefined4, 0x1370b90),&(*(undefined4 *)(gen_frame + 0x40)),uVar4 + 1 & 0xffff);
              *((uint *)GEN_TOP((iVar14 + *((int *)GEN_TOP(((int)ppuVar15 + *(int *)((int)param_1 + 0xe0a0) + 8)))))) =
                   uVar4;
              iVar14 = iVar14 + 4;
              puVar9 = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x3c)) - 1);
              (*(uint * PTR32 *)(gen_frame + 0x3c)) = puVar9;
            } while (puVar9 != (uint *)0x0);
          }
        }
        ppuVar5 = (uint * PTR32 *)((int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x1c)) + 1);
        (*(uint * PTR32 * PTR32 *)(gen_frame + 0x1c)) = ppuVar5;
        (*(uint * PTR32 * PTR32 *)(gen_frame + 0x30)) = ppuVar15 + 3;
      } while (ppuVar5 < (uint * PTR32 *)(uint)*(byte *)((int)param_1 + 0xe09d));
    }
    *(undefined4 *)((int)param_1 + 0xe0a4) = 3;
    ppuVar16 = (*(uint * PTR32 * PTR32 *)(gen_frame + 0x20));
LAB_006ab610: ;
    if (ppuVar16 != (uint * PTR32 *)0x0) {
      uVar18 = F_00429760(ppuVar16,((int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x28)) - (int)((int)(uintptr_t)ppuVar16) >> 2) * 4,0xd8);
      F_00c47745((*(uint *)(gen_frame + 0x188)) ^ (uint)(uint)(gen_frame + 0x18c));
      return (uint)uVar18;
    }
  }
  else {
    ppuVar5 = (uint * PTR32 *)(iVar14 + -3);
    if (ppuVar5 == (uint * PTR32 *)0x0) {
      (*(uint * PTR32 * PTR32 *)(gen_frame + 0x30)) = ((uint * PTR32 *)(uintptr_t)gen_fl2bits((float)(*(float *)((int)param_1 + 0xc))));
      fVar17 = (float10)*(float *)((int)param_1 + 0xc);
      if ((float10)*(float *)&REFG(undefined, 0x132293c) < fVar17) {
        *(float *)((int)param_1 + 0xc) = (float)(fVar17 - (float10)*(float *)&REFG(undefined, 0x132293c));
      }
      uVar4 = 0;
      *(float *)((int)param_1 + 0xc) =
           ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0x30) * (float10)param_2 +
                  (float10)*(float *)((int)param_1 + 0xc))));
      if (*(char *)((int)param_1 + 0xe09d) != '\0') {
        (*(uint * PTR32 *)(gen_frame + 0x3c)) = (uint *)0x0;
        do {
          this = *((undefined * PTR32 *)GEN_TOP(((int)(*(uint * PTR32 *)(gen_frame + 0x3c)) + *(int *)((int)param_1 + 0xe0a0) + 4)));
          F_00502310(this,0);
          F_00504650(this,0);
          (*(uint * PTR32 *)(gen_frame + 0x3c)) = (*(uint * PTR32 *)(gen_frame + 0x3c)) + 3;
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(byte *)((int)param_1 + 0xe09d));
      }
      puVar11 = (undefined4 *)((int)param_1 + 0x20);
      bVar3 = F_0054ccb0((undefined *)((int)param_1 + 0x10),puVar11);
      if (bVar3 == 0) {
        *(byte *)((int)param_1 + 0xe0a8) = *(byte *)((int)param_1 + 0xe0a8) | 1;
      }
      if ((*(byte *)((int)param_1 + 0xe0a8) & 1) != 0) {
        *(undefined4 *)((int)param_1 + 0x10) = *puVar11;
        *(undefined4 *)((int)param_1 + 0x14) = *(undefined4 *)((int)param_1 + 0x24);
        *(undefined4 *)((int)param_1 + 0x18) = *(undefined4 *)((int)param_1 + 0x28);
        F_006aaa10(param_1,puVar11,0);
        F_006aaa10(param_1,puVar11,1);
        F_006aaa10(param_1,puVar11,2);
        *(byte *)((int)param_1 + 0xe0a8) = *(byte *)((int)param_1 + 0xe0a8) & 0xfe;
      }
      iVar14 = (int)param_1 + 0x50;
      iVar12 = 0x10;
      do {
        F_006514c0(iVar14,param_2);
        iVar14 = iVar14 + 0x34;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      iVar14 = (int)param_1 + 0x390;
      iVar12 = 0x40;
      do {
        F_006514c0(iVar14,param_2);
        iVar14 = iVar14 + 0x34;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      iVar14 = (int)param_1 + 0x1090;
      iVar12 = 0x400;
      do {
        uVar4 = F_006514c0(iVar14,param_2);
        iVar14 = iVar14 + 0x34;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      F_00c47745((*(uint *)(gen_frame + 0x188)) ^ (uint)(uint)(gen_frame + 0x18c));
      return uVar4;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x188)) ^ (uint)(uint)(gen_frame + 0x18c));
  return (uint)ppuVar5;
}

/* ref: FUN_006ab870 */
uint F_006ab870(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6ab870u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1 + 0x10;
  iVar3 = 2;
  do {
    uVar1 = F_006ab090(iVar2,param_2);
    iVar2 = iVar2 + 0xe0c0;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return uVar1;
}

/* ref: FUN_006ab8b0 */
uint F_006ab8b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ab8b0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int * piVar2;
  int * piVar3;
  ulonglong uVar4;
  
  piVar2 = (int *)param_1[1];
  for (piVar3 = (int *)*param_1; piVar3 != piVar2; piVar3 = piVar3 + 1) {
    if (*piVar3 != 0) {
      F_0050c620(*piVar3,0,0);
    }
  }
  piVar2 = ((int *)(gen_frame + 0xc));
  if (param_1 != piVar2) {
    iVar1 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    piVar2 = (int *)param_1[2];
    param_1[2] = 0;
    if (iVar1 != 0) {
      uVar4 = F_00429760(iVar1,((int)piVar2 - iVar1 >> 2) * 4,0xcb);
      piVar2 = (int *)uVar4;
    }
  }
  return (uint)piVar2;
}

/* ref: FUN_006ab920 */
uint F_006ab920(unsigned int gen_a0)
{
  GEN_ENTER(0x6ab920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x140))(this);
  if (uVar1 != 0) {
    this_00 = (undefined *)((int)this + 0x418);
    do {
      F_009f9de0(this_00,0,3);
      uVar2 = uVar2 + 1;
      this_00 = (undefined *)((int)this_00 + 0x88);
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x140))(this);
    } while (uVar2 < uVar1);
  }
  F_006ab8b0((int)this + 0x3fc);
  *(uint *)((int)this + 0x2c0) = *(uint *)((int)this + 0x2c0) & 0xfffffff7;
  *(uint *)((int)this + 0x2c4) = *(uint *)((int)this + 0x2c4) & 0xfffffff7;
  return 0xfffffff7;
}

/* ref: FUN_006ab990 */
uint F_006ab990(unsigned int gen_a0)
{
  GEN_ENTER(0x6ab990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x140))(this);
  if (uVar1 != 0) {
    this_00 = (undefined *)((int)this + 0x418);
    do {
      F_009f9de0(this_00,0,1);
      uVar2 = uVar2 + 1;
      this_00 = (undefined *)((int)this_00 + 0x88);
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x140))(this);
    } while (uVar2 < uVar1);
  }
  F_006ab8b0((int)this + 0x3ec);
  *(uint *)((int)this + 0x2c0) = *(uint *)((int)this + 0x2c0) & 0xfffffffd;
  *(uint *)((int)this + 0x2c4) = *(uint *)((int)this + 0x2c4) & 0xfffffffd;
  return 0xfffffffd;
}

/* ref: FUN_006aba00 */
uint F_006aba00(unsigned int gen_a0)
{
  GEN_ENTER(0x6aba00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x140))(this);
  if (uVar1 != 0) {
    this_00 = (undefined *)((int)this + 0x418);
    do {
      F_009f9de0(this_00,0,0);
      uVar2 = uVar2 + 1;
      this_00 = (undefined *)((int)this_00 + 0x88);
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x140))(this);
    } while (uVar2 < uVar1);
  }
  F_006ab8b0((int)this + 0x3dc);
  *(uint *)((int)this + 0x2c0) = *(uint *)((int)this + 0x2c0) & 0xfffffffe;
  *(uint *)((int)this + 0x2c4) = *(uint *)((int)this + 0x2c4) & 0xfffffffe;
  return 0xfffffffe;
}

/* ref: FUN_006aba70 */
uint F_006aba70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6aba70u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * PTR32 * ppuVar4;
  undefined4 * puVar5;
  undefined * this_00;
  uint * puVar6;
  
  puVar6 = (*(uint * PTR32 *)&gen_args[1]);
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_006b5da0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6c0))),&(*(undefined4 * PTR32 *)(gen_frame + 0x8)),(*(uint * PTR32 *)&gen_args[1]));
  puVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0x8));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x8)) != *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6c4)))) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)0x0;
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x140))))((*(undefined * PTR32 *)&gen_args[0]));
    if (uVar1 != 0) {
      this_00 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x418)));
      do {
        F_009f54d0(this_00,puVar5[0x10],0,2);
        F_009f54d0(this_00,puVar5[0x10],1,2);
        (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 1);
        this_00 = (undefined *)((int)this_00 + 0x88);
        puVar2 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x140))))((*(undefined * PTR32 *)&gen_args[0]))));
        puVar6 = (*(uint * PTR32 *)&gen_args[1]);
      } while ((*(undefined4 * PTR32 *)(gen_frame + 0x8)) < puVar2);
    }
    if (puVar5[0x10] != 0) {
      F_0050c620(puVar5[0x10],0,0);
      puVar5[0x10] = 0;
    }
    F_006b7c10(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6c0))),&(*(uint * PTR32 *)&gen_args[1]),puVar5);
  }
  puVar5 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6d4)));
  if (*(char *)((int)puVar5[1] + 0x45) == '\0') {
    puVar2 = (undefined4 *)puVar5[1];
    do {
      if ((uint)puVar2[3] < *puVar6) {
        puVar3 = (undefined4 *)puVar2[2];
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
        puVar5 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0x45) == '\0');
  }
  (*(uint * PTR32 *)&gen_args[1]) = puVar5;
  if ((puVar5 == *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6d4)))) || (*puVar6 < (uint)puVar5[3])) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6d4)));
    ppuVar4 = &(*(undefined4 * PTR32 *)(gen_frame + 0x8));
  }
  else {
    ppuVar4 = &(*(uint * PTR32 *)&gen_args[1]);
  }
  puVar5 = *ppuVar4;
  if (puVar5 != *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6d4)))) {
    if (puVar5[0x10] != 0) {
      F_0050c620(puVar5[0x10],0,0);
      puVar5[0x10] = 0;
    }
    ppuVar4 = (undefined4 * PTR32 *)F_006b7c10(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6d0))),&(*(uint * PTR32 *)&gen_args[1]),puVar5);
  }
  return (uint)ppuVar4;
}

/* ref: Client::Graphics::Scene::Terrain::vf10 */
byte F_006abbb0(unsigned int gen_a0)
{
  GEN_ENTER(0x6abbb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  float10 fVar7;
  float fVar8;
  
  bVar4 = 4;
  if (((byte)this[100] & 4) == 0) {
    this[100] = (undefined1)((byte)this[100] | 4);
    uVar5 = *(uint *)(this + 0x78);
    uVar6 = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),*(undefined1 *)(REFG(int, 0x1371278) + 0x10));
    (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),*(undefined1 *)(REFG(int, 0x1371278) + 0x11));
    if (uVar5 != 0) {
      do {
        F_00502350(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x74) + uVar6 * 4))),(*(undefined4 *)(gen_frame + 0x8)));
        F_005046c0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x74) + uVar6 * 4))),(*(undefined4 *)(gen_frame + 0x4)));
        piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x74) + uVar6 * 4)));
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,1);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar5);
    }
    iVar2 = REFG(int, 0x137127c);
    F_006201f0((undefined *)(REFG(int, 0x137127c) + 0xaf90));
    uVar5 = F_005003e0(*(undefined * PTR32 *)(this + 0x70));
    fVar7 = (float10)(int)uVar5;
    if ((int)uVar5 < 0) {
      fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    F_00b152d0(REFG(undefined4, 0x1370c1c),(float)fVar7);
    fVar8 = F_00500440(*(undefined * PTR32 *)(this + 0x70));
    *(float *)(iVar2 + 0xb184) = (float)((float10)fVar8 * (float10)fVar8);
    fVar8 = F_00500470(*(undefined * PTR32 *)(this + 0x70));
    *(float *)(iVar2 + 0xb188) = fVar8;
    bVar3 = F_00694950(this);
    bVar4 = 0;
    if (bVar3 != 0) {
      bVar3 = F_00694c40(this);
      bVar4 = 0;
      if (bVar3 != 0) {
        bVar3 = F_0068ed40(this);
        bVar4 = 0;
        if (bVar3 != 0) {
          if (this[0x1a8] != (undefined1)0x0) {
            F_006aaee0(this);
          }
          *(undefined4 *)(REFG(int, 0x1371280) + 0x2c) = REFG(float, 0x1094884);
          *(undefined4 *)(REFG(int, 0x1371280) + 0x30) = REFG(float, 0x10946b4);
          *(undefined4 *)(REFG(int, 0x1371280) + 0x34) = REFG(float, 0x1088068);
          bVar4 = F_005004a0(*(undefined * PTR32 *)(this + 0x70),0);
          *(byte *)(iVar2 + 0xe9fe) = bVar4;
          bVar4 = F_005004a0(*(undefined * PTR32 *)(this + 0x70),1);
          *(byte *)(iVar2 + 0xe9ff) = bVar4;
          bVar4 = F_005004a0(*(undefined * PTR32 *)(this + 0x70),2);
          *(byte *)(iVar2 + 0xea00) = bVar4;
        }
      }
    }
  }
  return bVar4;
}

/* ref: FUN_006abd20 */
unsigned int F_006abd20(unsigned int gen_a0)
{
  GEN_ENTER(0x6abd20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((*(byte *)((int)this + 0xf0) & 1) == 0) {
    F_006aac60(this);
  }
  F_0069f9d0(this);
  return 0;
}

/* ref: FUN_006ac150 */
uint F_006ac150(unsigned int gen_a0)
{
  GEN_ENTER(0x6ac150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int * piVar2;
  undefined * this_00;
  
  piVar2 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x6c4)));
  if (piVar2 != *(int * PTR32 *)((int)this + 0x6c4)) {
    do {
      (*(uint *)(gen_frame + 0x8)) = 0;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x140))(this);
      if (uVar1 != 0) {
        this_00 = (undefined *)((int)this + 0x418);
        do {
          F_009f54d0(this_00,*(undefined4 *)((int)piVar2 + 0x40),0,2);
          F_009f54d0(this_00,*(undefined4 *)((int)piVar2 + 0x40),1,2);
          (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
          this_00 = (undefined *)((int)this_00 + 0x88);
          uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x140))(this);
        } while ((*(uint *)(gen_frame + 0x8)) < uVar1);
      }
      if (*(int *)((int)piVar2 + 0x40) != 0) {
        F_0050c620(*(int *)((int)piVar2 + 0x40),0,0);
        *(undefined4 *)((int)piVar2 + 0x40) = 0;
      }
      piVar2 = (int *)F_006b7c10((undefined *)((int)this + 0x6c0),((undefined1 *)(gen_frame + 0x4)),piVar2);
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)((int)this + 0x6c4));
  }
  uVar1 = (*(uint *)(gen_frame + 0x8));
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x8)) = uVar1 & 0xffffff00;
  F_006b5990(**(undefined4 * PTR32 *)((int)this + 0x6c4),*(undefined4 * PTR32 *)((int)this + 0x6c4),(*(uint *)(gen_frame + 0x8)));
  F_006b7ea0((undefined *)((int)this + 0x6c0),*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x6c4) + 4))));
  uVar1 = (*(uint *)(gen_frame + 0x8));
  *((int *)GEN_TOP((*(int *)((int)this + 0x6c4) + 4))) = *(int *)((int)this + 0x6c4);
  *(undefined4 *)*(undefined4 *)((int)this + 0x6c4) = *(undefined4 *)((int)this + 0x6c4);
  *((int *)GEN_TOP((*(int *)((int)this + 0x6c4) + 8))) = *(int *)((int)this + 0x6c4);
  *(undefined4 *)((int)this + 0x6c8) = 0;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x8)) = uVar1 & 0xffffff00;
  F_006b5990(**(undefined4 * PTR32 *)((int)this + 0x6d4),*(undefined4 * PTR32 *)((int)this + 0x6d4),(*(uint *)(gen_frame + 0x8)));
  F_006b7ea0((undefined *)((int)this + 0x6d0),*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x6d4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 0x6d4) + 4))) = *(int *)((int)this + 0x6d4);
  *(undefined4 *)*(undefined4 *)((int)this + 0x6d4) = *(undefined4 *)((int)this + 0x6d4);
  uVar1 = *(uint *)((int)this + 0x6d4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 0x6d8) = 0;
  return uVar1;
}

/* ref: FUN_006ac2b0 */
byte F_006ac2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ac2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  undefined4 * puVar1;
  byte bVar2;
  ushort uVar3;
  undefined * this_00;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  F_00b890c0((int)this + 0x730,param_1);
  uVar5 = 0;
  iVar4 = param_1 + 0x1c;
  do {
    ((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this,uVar5,iVar4);
    uVar5 = uVar5 + 1;
    iVar4 = iVar4 + 4;
  } while (uVar5 < 10);
  F_00693ef0(this);
  *(uint *)((int)this + 0x74c) = *(uint *)((int)this + 0x74c) | 0x1c00;
  *(undefined4 *)((int)this + 0x800) = 0;
  *(undefined4 *)((int)this + 0x804) = 0;
  *(undefined4 *)((int)this + 0x808) = 0;
  *(undefined4 *)((int)this + 0x80c) = 0;
  bVar2 = F_006a8d00(this,iVar4,0x10,(uint)*(byte *)(param_1 + 0x44));
  if (bVar2 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
    return 0;
  }
  uVar5 = *(byte *)((int)this + 0x734) - 1;
  fVar6 = F_006b3220(*(undefined4 *)(REFG(int, 0x137129c) + 0x24),(uVar5 >> 1) + 1,
                       (uint)*(byte *)((int)this + 0x731),uVar5 & 1,
                       (uint)*(byte *)((int)this + 0x732),(uint)*(byte *)((int)this + 0x733));
  *(float *)((int)this + 0x294) = (float)fVar6;
  if (*(undefined * PTR32 *)((int)this + 0xe4) != (undefined *)0x0) {
    F_00b84960(*(undefined * PTR32 *)((int)this + 0xe4));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0xe4);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)((int)this + 0xe4) = 0;
    }
  }
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),0x150,0x10);
  if (uVar5 == 0) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = (undefined *)F_00b84860(uVar5);
  }
  *(undefined * PTR32 *)((int)this + 0xe4) = this_00;
  if (this_00 != (undefined *)0x0) {
    F_00b83750(this_00,*(undefined4 *)((int)this + 0x78));
  }
  F_006a1010(this);
  if ((*(uint *)((int)this + 0x71c) >> 0xc & 1) != 0) {
    uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x114))(this,((undefined1 *)(gen_frame + 0x8)),0x100,0);
    if (uVar5 == 0) {
      if ((*(undefined * PTR32 *)((int)this + 0x2d0) != (undefined *)0x0) &&
         (F_00693890(*(undefined * PTR32 *)((int)this + 0x2d0),10),
         *((short *)GEN_TOP((*(int *)((int)this + 0x2d0) + 0x42))) ==
         *((short *)GEN_TOP((*(int *)((int)this + 0x2d0) + 0x40))))) {
        *(uint *)((int)this + 0x2c8) = *(uint *)((int)this + 0x2c8) & 0x7fffffff;
      }
      if (*(undefined * PTR32 *)((int)this + 0xe4) != (undefined *)0x0) {
        F_00b84d90(*(undefined * PTR32 *)((int)this + 0xe4),0);
      }
    }
    else {
      F_006a6af0(this);
      F_006937b0(*(undefined * PTR32 *)((int)this + 0x2d0),10,0x70687962,uVar5,0);
      *(uint *)((int)this + 0x2c8) = *(uint *)((int)this + 0x2c8) | 0x80000000;
    }
  }
  F_006a9230(this);
  uVar3 = *(ushort *)((int)this + 0x778);
  uVar5 = (uint)uVar3;
  switch((unsigned int)(uintptr_t)(uVar5 % 10)) {
  case 1: ;
    if (uVar5 < 0x386) {
      if (uVar5 == 0x385) break;
      iVar4 = uVar5 - 0x65;
    }
    else {
      iVar4 = uVar5 - 0x44d;
    }
    if (((iVar4 != 0) && (iVar4 != 100)) && (uVar3 = 0xc9, (uVar5 / 100 & 1) != 0)) {
      uVar3 = 0x65;
    }
    break;
  case 2: ;
    uVar3 = 0xc9;
    if ((uVar5 / 100 & 1) != 0) {
      uVar3 = 0x65;
    }
    break;
  case 3: ;
    if ((uVar5 / 100 & 1) == 0) break;
  case 4: ;
    uVar3 = 0x65;
  }
  if (uVar3 == *(ushort *)((int)this + 0x778)) {
    F_006a69d0(this,0xd);
    F_006a69d0(this,0xe);
  }
  else {
    F_006a8f40(this,0xd);
    F_006a8f40(this,0xe);
  }
  F_006a9300(this);
  F_006abf50(this);
  F_006abe30(this,0x737764,0x736c64);
  uVar5 = F_006767d0((undefined *)(REFG(int, 0x137128c) + 0x3d0));
  *(uint *)((int)this + 0x7e4) = uVar5;
  bVar2 = F_006930a0(this);
  *(char *)((int)this + 0x65) = (bVar2 != 0) + '\x02';
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return 1;
}

/* ref: FUN_006ac620 */
byte F_006ac620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ac620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_ebx = (undefined4)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  byte bVar1;
  
  *(undefined2 *)((int)in_ecx + 0x730) = *param_3;
  *(undefined2 *)((int)in_ecx + 0x732) = param_3[1];
  *(undefined2 *)((int)in_ecx + 0x734) = param_3[2];
  *(undefined2 *)((int)in_ecx + 0x736) = param_3[3];
  bVar1 = F_006a8d00(in_ecx,in_ebx,1,(uint)*(byte *)(param_3 + 4));
  if (bVar1 == 0) {
    return 0;
  }
  F_006a8f40(in_ecx,0);
  F_006abf50(in_ecx);
  F_006abe30(in_ecx,0x656d70,0x656d70);
  bVar1 = F_006930a0(in_ecx);
  *(char *)((int)in_ecx + 0x65) = (bVar1 != 0) + '\x02';
  return 1;
}

/* ref: FUN_006ac790 */
unsigned int F_006ac790(unsigned int gen_a0)
{
  GEN_ENTER(0x6ac790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    F_0061eec0(*(undefined * PTR32 *)((int)this + 0x78),5);
  }
  F_006ab8b0((int)this + 0x3dc);
  F_006ab8b0((int)this + 0x3ec);
  F_006aba00(this);
  F_006ab990(this);
  F_006ac150(this);
  F_006ab920(this);
  F_006aba00(this);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x140))(this);
  if (uVar1 != 0) {
    this_00 = (undefined *)((int)this + 0x418);
    do {
      F_009f9e80(this_00);
      this_00 = (undefined *)((int)this_00 + 0x88);
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return 0;
}

/* ref: FUN_006ac810 */
byte F_006ac810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ac810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  undefined4 * puVar1;
  byte bVar2;
  undefined * this_00;
  undefined2 * in_ebx;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  uVar3 = 0;
  *(undefined2 *)((int)this + 0x748) = *param_1;
  in_ebx = param_1 + 2;
  do {
    ((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this,uVar3,in_ebx);
    uVar3 = uVar3 + 1;
    in_ebx = in_ebx + 2;
  } while (uVar3 < 5);
  bVar2 = F_006a8d00(this,in_ebx,5,(uint)*(byte *)((int)param_1 + 3));
  if (bVar2 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
    return 0;
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    F_006abf50(this);
    F_006abe30(this,0x656d70,0x656d70);
  }
  else {
    F_006ac6b0(this);
  }
  F_0068d7f0(this);
  uVar3 = F_006767d0((undefined *)(REFG(int, 0x137128c) + 0x3d0));
  *(uint *)((int)this + 0x77c) = uVar3;
  bVar2 = F_006930a0(this);
  *(char *)((int)this + 0x65) = (bVar2 != 0) + '\x02';
  if (*(undefined * PTR32 *)((int)this + 0xe4) != (undefined *)0x0) {
    F_00b84960(*(undefined * PTR32 *)((int)this + 0xe4));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0xe4);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)((int)this + 0xe4) = 0;
    }
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),0x150,0x10);
  if (uVar3 == 0) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = (undefined *)F_00b84860(uVar3);
  }
  *(undefined * PTR32 *)((int)this + 0xe4) = this_00;
  if (this_00 != (undefined *)0x0) {
    F_00b83750(this_00,*(undefined4 *)((int)this + 0x78));
  }
  if ((*(uint *)((int)this + 0x71c) >> 0xc & 1) != 0) {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x114))(this,((undefined1 *)(gen_frame + 0x8)),0x100,0);
    if (uVar3 == 0) {
      if (*(undefined * PTR32 *)((int)this + 0x2d0) != (undefined *)0x0) {
        F_00693890(*(undefined * PTR32 *)((int)this + 0x2d0),10);
        if (*((short *)GEN_TOP((*(int *)((int)this + 0x2d0) + 0x42))) ==
            *((short *)GEN_TOP((*(int *)((int)this + 0x2d0) + 0x40)))) {
          *(uint *)((int)this + 0x2c8) = *(uint *)((int)this + 0x2c8) & 0x7fffffff;
        }
      }
      if (*(undefined * PTR32 *)((int)this + 0xe4) != (undefined *)0x0) {
        F_00b84d90(*(undefined * PTR32 *)((int)this + 0xe4),0);
      }
    }
    else {
      F_006a6af0(this);
      F_006937b0(*(undefined * PTR32 *)((int)this + 0x2d0),10,0x70687962,uVar3,0);
      *(uint *)((int)this + 0x2c8) = *(uint *)((int)this + 0x2c8) | 0x80000000;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return 1;
}

/* ref: FUN_006ac9f0 */
byte F_006ac9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ac9f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_ebx = (undefined4)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  byte bVar1;
  uint uVar2;
  
  *(undefined2 *)((int)in_ecx + 0x730) = *param_3;
  *(undefined2 *)((int)in_ecx + 0x732) = param_3[1];
  *(undefined2 *)((int)in_ecx + 0x734) = param_3[2];
  bVar1 = F_006a8d00(in_ecx,in_ebx,1,(uint)*(byte *)((int)param_3 + 7));
  if (bVar1 == 0) {
    return 0;
  }
  F_006a8f40(in_ecx,0);
  if ((*(byte *)(param_3 + 3) & 1) == 0) {
    F_006abf50(in_ecx);
    F_006abe30(in_ecx,0x656d70,0x656d70);
  }
  else {
    F_006ac6b0(in_ecx);
  }
  F_0068d7f0(in_ecx);
  uVar2 = F_006767d0((undefined *)(REFG(int, 0x137128c) + 0x3d0));
  *(uint *)((int)in_ecx + 0x740) = uVar2;
  bVar1 = F_006930a0(in_ecx);
  *(char *)((int)in_ecx + 0x65) = (bVar1 != 0) + '\x02';
  F_00692c10(in_ecx);
  F_006a8230(in_ecx,0);
  return 1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf1 */
uint F_006acab0(unsigned int gen_a0)
{
  GEN_ENTER(0x6acab0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  byte bVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined * pCVar11;
  undefined * local_8;
  
  uVar9 = *(uint *)(this + 0x74);
  uVar10 = 0;
  if (uVar9 != 0) {
    do {
      if (*((int *)GEN_TOP((*(int *)(this + 0x80) + uVar10 * 4))) != 0) {
        F_009bc2a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x80) + uVar10 * 4))));
        if (*((int *)GEN_TOP((*(int *)(this + 0x80) + uVar10 * 4))) != 0) {
          this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x80) + uVar10 * 4)));
          if (this_00 != (undefined *)0x0) {
            F_009cfa70(this_00);
            F_00406ad0(this_00);
          }
          *((undefined4 *)GEN_TOP((*(int *)(this + 0x80) + uVar10 * 4))) = 0;
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar9);
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x8c))(this);
  pCVar11 = this + 0x168;
  iVar8 = 2;
  do {
    piVar1 = *(int * PTR32 *)pCVar11;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *(int *)pCVar11 = 0;
    }
    pCVar11 = pCVar11 + 4;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  if (*(undefined * PTR32 *)(this + 0x78) != (undefined *)0x0) {
    F_0061eec0(*(undefined * PTR32 *)(this + 0x78),5);
  }
  piVar1 = *(int * PTR32 *)(this + 0xe0);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    puVar2 = *(undefined4 * PTR32 *)(this + 0xe0);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)(this + 0xe0) = 0;
    }
  }
  *(undefined4 *)(this + 0xe0) = 0;
  iVar8 = 10;
  do {
    iVar3 = *(int *)(this + 0x2d0);
    if (iVar3 != 0) {
      uVar7 = 0 << ((byte)iVar8 & 0x1f);
      uVar5 = ~(1 << ((byte)iVar8 & 0x1f));
      *(ushort *)(iVar3 + 0x40) = *(ushort *)(iVar3 + 0x40) & uVar5 | uVar7;
      *(ushort *)(iVar3 + 0x42) = *(ushort *)(iVar3 + 0x42) & uVar5 | uVar7;
      *(ushort *)(iVar3 + 0x44) = *(ushort *)(iVar3 + 0x44) & uVar5 | uVar7;
      iVar4 = *(int *)(iVar3 + iVar8 * 4);
      if (iVar4 != 0) {
        F_0050c620(iVar4,0,0);
        *(undefined4 *)(iVar3 + iVar8 * 4) = 0;
      }
      if (*((short *)GEN_TOP((*(int *)(this + 0x2d0) + 0x42))) == *((short *)GEN_TOP((*(int *)(this + 0x2d0) + 0x40)))) {
        *(uint *)(this + 0x2c8) = *(uint *)(this + 0x2c8) & 0x7fffffff;
      }
    }
    if (*(undefined * PTR32 *)(this + 0xe4) != (undefined *)0x0) {
      F_00b84d90(*(undefined * PTR32 *)(this + 0xe4),iVar8 + -10);
    }
    uVar10 = iVar8 - 9;
    iVar8 = iVar8 + 1;
  } while (uVar10 < 5);
  uVar10 = 0;
  if (*(undefined * PTR32 *)(this + 0xe4) != (undefined *)0x0) {
    F_00b84960(*(undefined * PTR32 *)(this + 0xe4));
    puVar2 = *(undefined4 * PTR32 *)(this + 0xe4);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)(this + 0xe4) = 0;
    }
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x90) + 0xc))))(this + 0x90);
  if (uVar9 != 0) {
    do {
      F_006a69d0(this,uVar10);
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar9);
  }
  if (*(ushort *)(this + 0x11a) != 0xffff) {
    F_00621a50((undefined *)(REFG(int, 0x137127c) + 0x1061c),(uint)*(ushort *)(this + 0x11a));
    *(undefined2 *)(this + 0x11a) = 0xffff;
  }
  if (*(undefined * PTR32 *)(this + 0x164) != (undefined *)0x0) {
    F_00620800(*(undefined * PTR32 *)(this + 0x164));
    puVar2 = *(undefined4 * PTR32 *)(this + 0x164);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)(this + 0x164) = 0;
    }
  }
  if (*(undefined * PTR32 *)(this + 0x160) != (undefined *)0x0) {
    F_0061e400(*(undefined * PTR32 *)(this + 0x160));
    puVar2 = *(undefined4 * PTR32 *)(this + 0x160);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)(this + 0x160) = 0;
    }
  }
  F_009f54d0(this + 0x4a0,*(undefined4 *)(this + 0x414),1,0);
  uVar9 = 0;
  if (*(int *)(this + 0x414) != 0) {
    F_0050c620(*(int *)(this + 0x414),0,0);
    *(undefined4 *)(this + 0x414) = 0;
  }
  uVar10 = ((code *)*(gen_code32 *)(*(int *)this + 0x140))(this);
  if (uVar10 != 0) {
    local_8 = this + 0x418;
    do {
      iVar8 = *(int *)(this + 0x2d0);
      bVar6 = (byte)uVar9;
      if (iVar8 != 0) {
        uVar7 = 0 << (bVar6 & 0x1f);
        uVar5 = ~(1 << (bVar6 & 0x1f));
        *(ushort *)(iVar8 + 0x40) = uVar5 & *(ushort *)(iVar8 + 0x40) | uVar7;
        *(ushort *)(iVar8 + 0x42) = uVar5 & *(ushort *)(iVar8 + 0x42) | uVar7;
        *(ushort *)(iVar8 + 0x44) = uVar5 & *(ushort *)(iVar8 + 0x44) | uVar7;
        iVar3 = *(int *)(iVar8 + uVar9 * 4);
        if (iVar3 != 0) {
          F_0050c620(iVar3,0,0);
          *(undefined4 *)(iVar8 + uVar9 * 4) = 0;
        }
        if (*((short *)GEN_TOP((*(int *)(this + 0x2d0) + 0x42))) == *((short *)GEN_TOP((*(int *)(this + 0x2d0) + 0x40))))
        {
          *(uint *)(this + 0x2c8) = *(uint *)(this + 0x2c8) & 0x7fffffff;
        }
      }
      F_009f0670(local_8,0);
      if (*(undefined * PTR32 *)(this + 0x78) != (undefined *)0x0) {
        F_00622fe0(*(undefined * PTR32 *)(this + 0x78),uVar9,0);
      }
      iVar8 = *(int *)(this + 0x2d0);
      if (iVar8 != 0) {
        uVar7 = 0 << (bVar6 + 5 & 0x1f);
        uVar5 = ~(1 << (bVar6 + 5 & 0x1f));
        *(ushort *)(iVar8 + 0x40) = uVar5 & *(ushort *)(iVar8 + 0x40) | uVar7;
        *(ushort *)(iVar8 + 0x42) = *(ushort *)(iVar8 + 0x42) & uVar5 | uVar7;
        *(ushort *)(iVar8 + 0x44) = *(ushort *)(iVar8 + 0x44) & uVar5 | uVar7;
        iVar3 = *(int *)(iVar8 + 0x14 + uVar9 * 4);
        if (iVar3 != 0) {
          F_0050c620(iVar3,0,0);
          *(undefined4 *)(iVar8 + 0x14 + uVar9 * 4) = 0;
        }
        if (*((short *)GEN_TOP((*(int *)(this + 0x2d0) + 0x42))) == *((short *)GEN_TOP((*(int *)(this + 0x2d0) + 0x40))))
        {
          *(uint *)(this + 0x2c8) = *(uint *)(this + 0x2c8) & 0x7fffffff;
        }
      }
      if (*(undefined * PTR32 *)(this + 0x78) != (undefined *)0x0) {
        F_0061edb0(*(undefined * PTR32 *)(this + 0x78),uVar9,0);
      }
      local_8 = local_8 + 0x88;
      uVar9 = uVar9 + 1;
      uVar10 = ((code *)*(gen_code32 *)(*(int *)this + 0x140))(this);
    } while (uVar9 < uVar10);
  }
  piVar1 = *(int * PTR32 *)(this + 0x78);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x78) = 0;
  }
  iVar8 = *(int *)(this + 0x2d0);
  if (iVar8 != 0) {
    *(ushort *)(iVar8 + 0x40) = *(ushort *)(iVar8 + 0x40) & 0x7fff;
    *(ushort *)(iVar8 + 0x42) = *(ushort *)(iVar8 + 0x42) & 0x7fff;
    *(ushort *)(iVar8 + 0x44) = *(ushort *)(iVar8 + 0x44) & 0x7fff;
    if (*(int *)(iVar8 + 0x3c) != 0) {
      F_0050c620(*(int *)(iVar8 + 0x3c),0,0);
      *(undefined4 *)(iVar8 + 0x3c) = 0;
    }
    if (*((short *)GEN_TOP((*(int *)(this + 0x2d0) + 0x42))) == *((short *)GEN_TOP((*(int *)(this + 0x2d0) + 0x40)))) {
      *(uint *)(this + 0x2c8) = *(uint *)(this + 0x2c8) & 0x7fffffff;
    }
  }
  F_006ac790(this);
  piVar1 = *(int * PTR32 *)(this + 0x2d8);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x2d8) = 0;
  }
  if (*(int *)(this + 0x2c8) == 0) {
    F_006a0300(this);
  }
  if (*(int *)(this + 0x7c) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
              (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),*(int *)(this + 0x7c));
    *(undefined4 *)(this + 0x7c) = 0;
  }
  if (*(int *)(this + 0x80) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
              (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),*(int *)(this + 0x80));
    *(undefined4 *)(this + 0x80) = 0;
  }
  *(undefined4 *)(this + 0x74) = 0;
  this[100] = (undefined1)((byte)this[100] & 0xfb);
  this[0x65] = (undefined1)0x0;
  if (*(int *)(this + 0x60) != 0) {
    F_00b14100(REFG(undefined4, 0x1370c1c),*(int *)(this + 0x60));
    *(undefined4 *)(this + 0x60) = 0;
  }
  iVar8 = *(int *)(this + 0x14);
  if ((iVar8 != 0) && (*(undefined * PTR32 *)(iVar8 + 0x20) == this)) {
    *(uint *)(iVar8 + 0x20) =
         -(uint)(*(undefined * PTR32 *)(this + 0x1c) != this) & (uint)*(undefined * PTR32 *)(this + 0x1c);
  }
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x1c) + 0x18))) = *(undefined4 *)(this + 0x18);
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + 0x1c))) = *(undefined4 *)(this + 0x1c);
  iVar8 = *(int *)(this + 0x28);
  uVar10 = *(uint *)(this + 0x24) & 0xfffffffc;
  uVar9 = *(uint *)(this + 0x24) & 3;
  *(undefined * PTR32 *)(this + 0x18) = this;
  *(undefined * PTR32 *)(this + 0x1c) = this;
  *(undefined4 *)(this + 0x14) = 0;
  *(uint *)(this + 0x24) = uVar9;
  *(undefined4 *)(this + 0x28) = 0;
  if (uVar10 != 0) {
    *(int *)(uVar10 + 0x28) = iVar8;
  }
  if (iVar8 != 0) {
    uVar9 = *(uint *)(iVar8 + 0x24) & 3 | uVar10;
    *(uint *)(iVar8 + 0x24) = uVar9;
  }
  *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 1;
  return uVar9;
}

/* ref: FUN_006acff0 */
uint F_006acff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x6acff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x2a0];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x298)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x29c);
  (*(int *)(gen_frame + 0x14)) = param_2;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = param_3;
  (*(undefined4 *)(gen_frame + 0x20)) = param_4;
  (*(undefined4 *)(gen_frame + 0x18)) = param_5;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 2: ;
  case 4: ;
  case 5: ;
    goto switchD_006ad037_caseD_2;
  case 3: ;
    uVar1 = *(uint *)((int)this + 0x71c) >> 0xb;
    break;
  default: ;
    uVar1 = *(uint *)((int)this + 0x71c) >> 3;
  }
  if ((uVar1 & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 0xffffffff;
    param_1[2] = 1;
    param_1[3] = 0x656d70;
    param_1[4] = 0x656d70;
    param_1[5] = 0;
    param_1[0xb] = 0xf;
    param_1[10] = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    goto LAB_006ad341;
  }
switchD_006ad037_caseD_2: ;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 200))(this);
  iVar4 = 4;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 1: ;
    iVar4 = 0;
    break;
  case 2: ;
    iVar4 = 2;
    break;
  case 3: ;
    iVar4 = 1;
    break;
  case 4: ;
    iVar4 = 3;
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x128))(this);
  uVar1 = iVar4 << 0x10 | uVar1 & 0xffff;
  (*(uint *)(gen_frame + 0x28)) = (uint)*(byte *)((int)this + 0x720);
  (*(uint *)(gen_frame + 0x24)) = uVar1;
  F_006b6f60(&(*(undefined4 *)(gen_frame + 0x64)),(*(undefined4 * PTR32 *)(gen_frame + 0x1c)),(*(int *)(gen_frame + 0x14)),&(*(uint *)(gen_frame + 0x24)),&(*(uint *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x18)));
  piVar2 = (int *)F_006b5da0((undefined *)((int)this + 0x6c0),&(*(undefined * PTR32 *)(gen_frame + 0x10)),&(*(undefined4 *)(gen_frame + 0x64)));
  if (*(int *)((int)this + 0x6c4) == *piVar2) {
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = (undefined *)((int)this + 0x6d0);
    piVar2 = (int *)F_006b5da0((undefined *)((int)this + 0x6d0),&(*(uint *)(gen_frame + 0x24)),&(*(undefined4 *)(gen_frame + 0x64)));
    if (*(int *)((int)this + 0x6d4) != *piVar2) goto LAB_006ad2ca;
    (*(uint *)(gen_frame + 0x28)) = 0;
    if (((*(int *)(gen_frame + 0x14)) < 3) || (4 < (*(int *)(gen_frame + 0x14)))) {
      uVar1 = F_00516f10(*(undefined * PTR32 *)(REFG(int, 0x137129c) + 0x58),uVar1,(uint)*(byte *)((int)this + 0x720),
                           (*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x18)),(*(int *)(gen_frame + 0x14)),(*(undefined4 * PTR32 *)(gen_frame + 0x1c)),param_6);
LAB_006ad26a: ;
      (*(uint *)(gen_frame + 0x28)) = uVar1;
    }
    else {
      F_00c48350(((undefined1 *)(gen_frame + 0x198)),0,0x100);
      puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x1c));
      if (0xf < (uint)(*(undefined4 * PTR32 *)(gen_frame + 0x1c))[5]) {
        puVar3 = (undefined4 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x1c));
      }
      F_00c472af(((undefined1 *)(gen_frame + 0x98)),0x100,"nonresident/%s",puVar3);
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x118))(this,((undefined1 *)(gen_frame + 0x198)),0x100,1,((undefined1 *)(gen_frame + 0x98)));
      if (uVar1 != 0) {
        F_004ff310(&(*(undefined4 *)(gen_frame + 0x20)),4,0);
        (*(uint *)(gen_frame + 0x24)) = 0x706170;
        uVar1 = F_00513d20(&(*(undefined4 *)(gen_frame + 0x20)),&(*(uint *)(gen_frame + 0x24)),((undefined1 *)(gen_frame + 0x198)),0,0,0);
        goto LAB_006ad26a;
      }
    }
    uVar1 = F_006b7860(((undefined1 *)(gen_frame + 0x2c)),&(*(undefined4 *)(gen_frame + 0x64)),&(*(uint *)(gen_frame + 0x28)));
    F_006b81e0((*(undefined * PTR32 *)(gen_frame + 0x10)),((undefined1 *)(gen_frame + 0xc)),uVar1);
    if (0xf < (*(uint *)(gen_frame + 0x58))) {
      F_00429760((*(undefined4 *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x58)) + 1,0x32);
    }
    F_006b7320(param_1,&(*(undefined4 *)(gen_frame + 0x64)));
  }
  else {
LAB_006ad2ca: ;
    *param_1 = (*(undefined4 *)(gen_frame + 0x64));
    param_1[1] = (*(undefined4 *)(gen_frame + 0x68));
    param_1[2] = (*(undefined4 *)(gen_frame + 0x6c));
    param_1[3] = (*(undefined4 *)(gen_frame + 0x70));
    param_1[4] = (*(undefined4 *)(gen_frame + 0x74));
    param_1[5] = (*(undefined4 *)(gen_frame + 0x78));
    param_1[0xb] = 0xf;
    param_1[10] = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    F_004e54d0(param_1 + 6,((undefined4 *)(gen_frame + 0x7c)),0,0xffffffff);
  }
  if (0xf < (*(uint *)(gen_frame + 0x90))) {
    F_00429760(((undefined4 *)(gen_frame + 0x7c))[0],(*(uint *)(gen_frame + 0x90)) + 1,0x32);
  }
LAB_006ad341: ;
  F_00c47745((*(uint *)(gen_frame + 0x298)) ^ (uint)(uint)(gen_frame + 0x29c));
  return (uint)param_1;
}

/* ref: FUN_006ad380 */
unsigned int F_006ad380(unsigned int gen_a0)
{
  GEN_ENTER(0x6ad380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  int iVar2;
  char cVar3;
  int * piVar4;
  int iVar5;
  byte bVar6;
  int * piVar7;
  uint uVar8;
  int * piVar9;
  undefined4 * puVar10;
  uint uVar11;
  uint uVar12;
  
  if (*(int *)((int)this + 0x78) != 0) {
    uVar8 = *(uint *)((int)this + 0x2c0);
    if (((((byte)(uVar8 >> 3) | (byte)(uVar8 >> 2) | (byte)(uVar8 >> 1) | (byte)uVar8) & 1) != 0 ||
        *(int *)((int)this + 0x40c) != 0) || *(int *)((int)this + 0x6f8) != 0) {
      if ((uVar8 & 1) != 0) {
        bVar6 = F_00691d30((undefined4 *)((int)this + 0x3dc));
        if (bVar6 != 0) {
          piVar4 = *(int * PTR32 *)((int)this + 0x3e0);
          for (piVar9 = *(int * PTR32 *)((int)this + 0x3dc); piVar9 != piVar4; piVar9 = piVar9 + 1) {
            piVar7 = (int *)(*piVar9 + 0x8c);
            LOCK();
            iVar2 = *piVar7;
            *piVar7 = *piVar7;
            UNLOCK();
            if (iVar2 < 8) {
              F_009f9db0((undefined *)((int)this + 0x418),*piVar9,0,0);
            }
          }
          F_006ab8b0((int)this + 0x3dc);
          uVar8 = F_009f3260((undefined *)((int)this + 0x418));
          if (uVar8 != 0) {
            F_0061ef50(*(undefined * PTR32 *)((int)this + 0x78),0,(undefined *)((int)this + 0x418));
          }
          *(uint *)((int)this + 0x2c0) = *(uint *)((int)this + 0x2c0) & 0xfffffffe;
          *(uint *)((int)this + 0x2c4) = *(uint *)((int)this + 0x2c4) | 1;
        }
      }
      if ((*(uint *)((int)this + 0x2c0) >> 1 & 1) != 0) {
        bVar6 = F_00691d30((undefined4 *)((int)this + 0x3ec));
        if (bVar6 != 0) {
          piVar4 = *(int * PTR32 *)((int)this + 0x3f0);
          for (piVar9 = *(int * PTR32 *)((int)this + 0x3ec); piVar9 != piVar4; piVar9 = piVar9 + 1) {
            piVar7 = (int *)(*piVar9 + 0x8c);
            LOCK();
            iVar2 = *piVar7;
            *piVar7 = *piVar7;
            UNLOCK();
            if (iVar2 < 8) {
              F_009f9db0((undefined *)((int)this + 0x418),*piVar9,0,1);
            }
          }
          F_006ab8b0((int)this + 0x3ec);
          uVar8 = F_009f3260((undefined *)((int)this + 0x418));
          if (uVar8 != 0) {
            F_0061ef50(*(undefined * PTR32 *)((int)this + 0x78),0,(undefined *)((int)this + 0x418));
          }
          *(uint *)((int)this + 0x2c0) = *(uint *)((int)this + 0x2c0) & 0xfffffffd;
          *(uint *)((int)this + 0x2c4) = *(uint *)((int)this + 0x2c4) | 2;
        }
      }
      if (*(int *)((int)this + 0x40c) != 0) {
        piVar9 = ((int *)GEN_TOP((*(int *)((int)this + 0x414) + 0x88)));
        LOCK();
        iVar2 = *piVar9;
        *piVar9 = *piVar9;
        UNLOCK();
        if (iVar2 == 2) {
          piVar9 = ((int *)GEN_TOP((*(int *)((int)this + 0x414) + 0x8c)));
          LOCK();
          iVar2 = *piVar9;
          *piVar9 = *piVar9;
          UNLOCK();
          if (iVar2 < 8) {
            uVar8 = ((code *)*(gen_code32 *)(*(int *)this + 200))(this);
            pvVar1 = (undefined *)((uint)(uVar8 == 1) * 0x88 + 0x418 + (int)this);
            F_009f9db0(pvVar1,*(undefined4 *)((int)this + 0x414),1,0);
            F_0061ef50(*(undefined * PTR32 *)((int)this + 0x78),(uint)(uVar8 == 1),pvVar1);
          }
          else if (*(int *)((int)this + 0x414) != 0) {
            F_0050c620(*(int *)((int)this + 0x414),0,0);
            *(undefined4 *)((int)this + 0x414) = 0;
          }
          *(undefined4 *)((int)this + 0x40c) = 0;
          *(undefined4 *)((int)this + 0x410) = 0xffffffff;
        }
      }
      if ((*(uint *)((int)this + 0x2c0) >> 3 & 1) != 0) {
        piVar4 = *(int * PTR32 *)((int)this + 0x400);
        for (piVar9 = *(int * PTR32 *)((int)this + 0x3fc); piVar9 != piVar4; piVar9 = piVar9 + 1) {
          piVar7 = (int *)(*piVar9 + 0x88);
          LOCK();
          iVar2 = *piVar7;
          *piVar7 = *piVar7;
          UNLOCK();
          if (iVar2 != 2) goto LAB_006ad664;
        }
        piVar4 = *(int * PTR32 *)((int)this + 0x400);
        for (piVar9 = *(int * PTR32 *)((int)this + 0x3fc); piVar9 != piVar4; piVar9 = piVar9 + 1) {
          piVar7 = (int *)(*piVar9 + 0x8c);
          LOCK();
          iVar2 = *piVar7;
          *piVar7 = *piVar7;
          UNLOCK();
          if (iVar2 < 8) {
            F_009f9db0((undefined *)((int)this + 0x418),*piVar9,0,3);
          }
        }
        F_006ab8b0((int)this + 0x3fc);
        uVar8 = F_009f3260((undefined *)((int)this + 0x418));
        if (uVar8 != 0) {
          F_0061ef50(*(undefined * PTR32 *)((int)this + 0x78),0,(undefined *)((int)this + 0x418));
        }
        *(uint *)((int)this + 0x2c0) = *(uint *)((int)this + 0x2c0) & 0xfffffff7;
        *(uint *)((int)this + 0x2c4) = *(uint *)((int)this + 0x2c4) | 8;
      }
LAB_006ad664: ;
      F_00b820e0(((undefined4 *)(gen_frame + 0xc)));
      ((undefined4 *)(gen_frame + 0xc))[0] = 1;
      if ((*(byte *)((int)this + 0x6fa) & 1) != 0) {
        piVar9 = ((int *)GEN_TOP((*(int *)((int)this + 0x710) + 0x88)));
        LOCK();
        iVar2 = *piVar9;
        *piVar9 = *piVar9;
        UNLOCK();
        if (iVar2 == 2) {
          piVar9 = ((int *)GEN_TOP((*(int *)((int)this + 0x710) + 0x8c)));
          LOCK();
          iVar2 = *piVar9;
          *piVar9 = *piVar9;
          UNLOCK();
          if (iVar2 < 8) {
            F_00b82290((undefined *)((int)this + 0x700),((undefined4 *)(gen_frame + 0xc)),*(undefined4 *)((int)this + 0x710));
          }
          *(uint *)((int)this + 0x6f8) = *(uint *)((int)this + 0x6f8) & 0xfffeffff;
        }
      }
      uVar11 = *(uint *)((int)this + 0x74);
      uVar12 = 0;
      (*(uint *)(gen_frame + 0x24)) = uVar11;
      uVar8 = 1;
      if (uVar11 != 0) {
        do {
          if (((*(uint *)((int)this + 0x6f8) >> ((byte)uVar12 & 0x1f) & 1) != 0) &&
             (*((int *)GEN_TOP((*(int *)((int)this + 0x714) + uVar12 * 4))) != 0)) {
            piVar9 = ((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x714) + uVar12 * 4))) + 0x88)));
            LOCK();
            iVar2 = *piVar9;
            *piVar9 = *piVar9;
            UNLOCK();
            if (iVar2 == 2) {
              piVar9 = ((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x714) + uVar12 * 4))) + 0x8c)));
              LOCK();
              iVar2 = *piVar9;
              *piVar9 = *piVar9;
              UNLOCK();
              if (iVar2 < 8) {
                ((uint *)(gen_frame + 0x14))[0] = uVar12;
                F_00b82330((undefined *)((int)this + 0x700),((undefined4 *)(gen_frame + 0xc)),
                             *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x714) + uVar12 * 4))));
              }
              *(uint *)((int)this + 0x6f8) =
                   ~uVar8 & *(uint *)((int)this + 0x6f8) | 0 << ((byte)uVar12 & 0x1f);
              uVar11 = (*(uint *)(gen_frame + 0x24));
            }
          }
          uVar12 = uVar12 + 1;
          uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
        } while (uVar12 < uVar11);
      }
    }
    piVar9 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x6d4)));
    if (piVar9 != *(int * PTR32 *)((int)this + 0x6d4)) {
      do {
        iVar5 = piVar9[0x10];
        (*(uint *)(gen_frame + 0x24)) = iVar5;
        piVar4 = (int *)(iVar5 + 0x88);
        LOCK();
        iVar2 = *piVar4;
        *piVar4 = *piVar4;
        UNLOCK();
        if (iVar2 == 2) {
          piVar4 = (int *)(iVar5 + 0x8c);
          LOCK();
          iVar2 = *piVar4;
          *piVar4 = *piVar4;
          UNLOCK();
          if (iVar2 < 8) {
            puVar10 = (undefined4 *)F_004296a0(0x48,0,0xcb);
            *puVar10 = *(undefined4 *)((int)this + 0x6c4);
            puVar10[1] = *(undefined4 *)((int)this + 0x6c4);
            (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar10;
            puVar10[2] = *(undefined4 *)((int)this + 0x6c4);
            *(undefined2 *)(puVar10 + 0x11) = 0;
            if (puVar10 + 3 != (int *)0x0) {
              puVar10[3] = piVar9[3];
              puVar10[4] = piVar9[4];
              puVar10[5] = piVar9[5];
              puVar10[6] = piVar9[6];
              puVar10[7] = piVar9[7];
              puVar10[8] = piVar9[8];
              puVar10[0xe] = 0xf;
              puVar10[0xd] = 0;
              *(undefined1 *)(puVar10 + 9) = 0;
              F_004e54d0(puVar10 + 9,piVar9 + 9,0,0xffffffff);
              puVar10[0x10] = piVar9[0x10];
            }
            F_006b7f10((undefined *)((int)this + 0x6c0),((uint *)(gen_frame + 0x14)),(*(undefined4 * PTR32 *)(gen_frame + 0x28)),0);
            iVar2 = piVar9[8];
            if (((iVar2 == 3) || (iVar2 == 4)) || (iVar2 == 5)) {
              bVar6 = 1;
            }
            else {
              bVar6 = 0;
            }
            (*(uint *)(gen_frame + 0x20)) = (uint)bVar6;
            if (((iVar2 == 3) || (iVar2 == 4)) || (iVar2 == 5)) {
              bVar6 = 1;
            }
            else {
              bVar6 = 0;
            }
            (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = (undefined4 *)(uint)bVar6;
            uVar8 = ((code *)*(gen_code32 *)(*(int *)this + 200))(this);
            if (uVar8 != 1) {
              (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = (undefined4 *)0x0;
            }
            pvVar1 = (undefined *)((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x28))) * 0x88 + 0x418 + (int)this);
            F_009f9db0(pvVar1,(*(uint *)(gen_frame + 0x24)),(*(uint *)(gen_frame + 0x20)),2);
            uVar8 = F_009f3260(pvVar1);
            if (uVar8 != 0) {
              F_0061ef50(*(undefined * PTR32 *)((int)this + 0x78),(*(undefined4 * PTR32 *)(gen_frame + 0x28)),pvVar1);
            }
          }
          else if (iVar5 != 0) {
            F_0050c620(iVar5,0,0);
          }
          puVar10 = (undefined4 *)F_006b7c10((undefined *)((int)this + 0x6d0),((undefined1 *)(gen_frame + 0x1c)),piVar9);
          piVar9 = (int *)*puVar10;
        }
        else if (*(char *)((int)piVar9 + 0x45) == '\0') {
          piVar4 = (int *)piVar9[2];
          if (*(char *)((int)piVar4 + 0x45) == '\0') {
            cVar3 = *(char *)(*piVar4 + 0x45);
            piVar9 = piVar4;
            piVar4 = (int *)*piVar4;
            while (cVar3 == '\0') {
              cVar3 = *(char *)(*piVar4 + 0x45);
              piVar9 = piVar4;
              piVar4 = (int *)*piVar4;
            }
          }
          else {
            cVar3 = *(char *)(piVar9[1] + 0x45);
            piVar7 = (int *)piVar9[1];
            piVar4 = piVar9;
            while ((piVar9 = piVar7, cVar3 == '\0' && (piVar4 == (int *)piVar9[2]))) {
              cVar3 = *(char *)(piVar9[1] + 0x45);
              piVar7 = (int *)piVar9[1];
              piVar4 = piVar9;
            }
          }
        }
      } while (piVar9 != *(int * PTR32 *)((int)this + 0x6d4));
    }
  }
  return 0;
}

/* ref: Client::Graphics::Scene::Human::vf1 */
uint F_006ad970(unsigned int gen_a0)
{
  GEN_ENTER(0x6ad970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined * pHVar4;
  
  piVar1 = *(int * PTR32 *)(this + 0x810);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,this);
  }
  if (-1 < *(int *)(this + 0x7e4)) {
    F_00676850((undefined *)(REFG(int, 0x137128c) + 0x3d0),*(int *)(this + 0x7e4));
    *(undefined4 *)(this + 0x7e4) = 0xffffffff;
  }
  piVar1 = *(int * PTR32 *)(this + 0x7f8);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x7f8) = 0;
  }
  if (*(int *)(this + 0x7f4) != 0) {
    F_0050c620(*(int *)(this + 0x7f4),0,0);
    *(undefined4 *)(this + 0x7f4) = 0;
  }
  if (*(int *)(this + 0x7f0) != 0) {
    F_0050c620(*(int *)(this + 0x7f0),0,0);
    *(undefined4 *)(this + 0x7f0) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x7ec);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x7ec) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x7e8);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x7e8) = 0;
  }
  pHVar4 = this + 0x7bc;
  iVar3 = 10;
  do {
    if (*(int *)pHVar4 != 0) {
      F_0050c620(*(int *)pHVar4,0,0);
      *(int *)pHVar4 = 0;
    }
    pHVar4 = pHVar4 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  F_006acab0((undefined *)this);
  uVar2 = 0;
  if (*(int *)(this + 0x818) != 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),*(int *)(this + 0x818));
    *(undefined4 *)(this + 0x818) = 0;
  }
  return uVar2;
}

/* ref: Client::Graphics::Scene::Demihuman::vf1 */
uint F_006ada90(unsigned int gen_a0)
{
  GEN_ENTER(0x6ada90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined * pDVar4;
  
  piVar1 = *(int * PTR32 *)(this + 0x788);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,this);
  }
  if (-1 < *(int *)(this + 0x77c)) {
    F_00676850((undefined *)(REFG(int, 0x137128c) + 0x3d0),*(int *)(this + 0x77c));
    *(undefined4 *)(this + 0x77c) = 0xffffffff;
  }
  piVar1 = *(int * PTR32 *)(this + 0x780);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x780) = 0;
  }
  pDVar4 = this + 0x768;
  iVar3 = 5;
  do {
    if (*(int *)pDVar4 != 0) {
      F_0050c620(*(int *)pDVar4,0,0);
      *(int *)pDVar4 = 0;
    }
    pDVar4 = pDVar4 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  F_006acab0((undefined *)this);
  uVar2 = 0;
  if (*(int *)(this + 0x790) != 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),*(int *)(this + 0x790));
    *(undefined4 *)(this + 0x790) = 0;
  }
  return uVar2;
}

/* ref: Client::Graphics::Scene::Weapon::vf1 */
uint F_006adb50(unsigned int gen_a0)
{
  GEN_ENTER(0x6adb50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x744);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x744) = 0;
  }
  if (*(int *)(this + 0x740) != 0) {
    F_0050c620(*(int *)(this + 0x740),0,0);
    *(undefined4 *)(this + 0x740) = 0;
  }
  uVar2 = F_006acab0((undefined *)this);
  return uVar2;
}

/* ref: Client::Graphics::Scene::Monster::vf1 */
uint F_006adba0(unsigned int gen_a0)
{
  GEN_ENTER(0x6adba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (-1 < *(int *)(this + 0x740)) {
    F_00676850((undefined *)(REFG(int, 0x137128c) + 0x3d0),*(int *)(this + 0x740));
    *(undefined4 *)(this + 0x740) = 0xffffffff;
  }
  if (*(int *)(this + 0x73c) != 0) {
    F_0050c620(*(int *)(this + 0x73c),0,0);
    *(undefined4 *)(this + 0x73c) = 0;
  }
  uVar1 = F_006acab0((undefined *)this);
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf4 */
uint F_006adc00(unsigned int gen_a0)
{
  GEN_ENTER(0x6adc00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined * this_00;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  uint uVar4;
  
  if (((*(int *)(this + 0x2c8) != 0) || (*(int *)(this + 0x2d4) != 0)) ||
     (*(int *)(this + 0x2d0) != 0)) {
    F_006a9000(this);
  }
  F_006ad380(this);
  if (*(int *)(this + 0x2c8) == 0) {
    F_006a0300(this);
  }
  if (this[0x65] == (undefined1)0x2) {
    bVar2 = F_006930a0(this);
    if (bVar2 == 0) {
      return CONCAT31(extraout_var,bVar2);
    }
    this[0x65] = (undefined1)0x3;
  }
  *(ushort *)(this + 0x70) = *(ushort *)(this + 0x70) & 0xfffd;
  *(ushort *)(this + 0x70) = *(ushort *)(this + 0x70) & 0xfffe;
  ((code *)*(gen_code32 *)(*(int *)this + 0x144))(this);
  uVar3 = *(uint *)(this + 0x74);
  iVar1 = *(int *)(this + 0x80);
  uVar4 = 0;
  (*(uint *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x4)), 1, 3),(byte)this[0x70] >> 2 & (byte)this[100]) & 0xffffff01;
  if (uVar3 != 0) {
    do {
      this_00 = *(undefined * PTR32 *)(iVar1 + uVar4 * 4);
      if (this_00 != (undefined *)0x0) {
        F_009bc190(this_00,(*(uint *)(gen_frame + 0x4)));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  F_006a0520(this);
  uVar3 = *(uint *)(this + 0x71c) >> 0xc;
  if (((uVar3 & 1) != 0) && (*(undefined * PTR32 *)(this + 0xe4) != (undefined *)0x0)) {
    F_00b84310(*(undefined * PTR32 *)(this + 0xe4),*(int *)(this + 0x78) + 0x10);
    uVar3 = F_00b83a70(*(undefined * PTR32 *)(this + 0xe4));
  }
  return uVar3;
}

/* ref: Client::Graphics::Scene::Human::vf4 */
uint F_006add00(unsigned int gen_a0)
{
  GEN_ENTER(0x6add00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_006a9300(this);
  F_006adc00((undefined *)this);
  if ((*(int *)(this + 0x2c8) == 0) && (*(int *)(this + 0x818) != 0)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
              (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),*(int *)(this + 0x818));
    *(undefined4 *)(this + 0x818) = 0;
  }
  if (*(int *)(this + 0x7e4) < 0) {
    uVar1 = F_006767d0((undefined *)(REFG(int, 0x137128c) + 0x3d0));
    *(uint *)(this + 0x7e4) = uVar1;
    if ((int)uVar1 < 0) goto LAB_006add92;
  }
  uVar1 = F_00678120((undefined *)(REFG(int, 0x137128c) + 0x3d0),*(undefined4 *)(this + 0x7e4),this + 0x30);
  if (-1 < (int)uVar1) {
    this[100] = (undefined1)((uVar1 != 0) << 4 | (byte)this[100] & 0xef);
  }
LAB_006add92: ;
  F_006a2e10(this);
  uVar1 = F_006a1430(this);
  return uVar1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf4 */
uint F_006addb0(unsigned int gen_a0)
{
  GEN_ENTER(0x6addb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  F_006a9440(this);
  F_006adc00((undefined *)this);
  if ((*(int *)(this + 0x2c8) == 0) && (*(int *)(this + 0x790) != 0)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
              (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),*(int *)(this + 0x790));
    *(undefined4 *)(this + 0x790) = 0;
  }
  if (*(int *)(this + 0x77c) < 0) {
    uVar2 = F_006767d0((undefined *)(REFG(int, 0x137128c) + 0x3d0));
    *(uint *)(this + 0x77c) = uVar2;
    if ((int)uVar2 < 0) goto LAB_006ade42;
  }
  uVar2 = F_00678120((undefined *)(REFG(int, 0x137128c) + 0x3d0),*(undefined4 *)(this + 0x77c),this + 0x30);
  if (-1 < (int)uVar2) {
    this[100] = (undefined1)((uVar2 != 0) << 4 | (byte)this[100] & 0xef);
  }
LAB_006ade42: ;
  uVar2 = *(uint *)(this + 0x78c);
  if ((uVar2 != 0) && (piVar1 = *(int * PTR32 *)(this + 0x788), piVar1 != (int *)0x0)) {
    if ((uVar2 & 1) != 0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,this);
      *(uint *)(this + 0x78c) = *(uint *)(this + 0x78c) & 0xfffffffe;
      return uVar2;
    }
    uVar2 = uVar2 >> 1;
    if ((uVar2 & 1) != 0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,this);
      *(uint *)(this + 0x78c) = *(uint *)(this + 0x78c) & 0xfffffffd;
    }
  }
  return uVar2;
}

/* ref: Client::Graphics::Scene::Monster::vf4 */
uint F_006ade90(unsigned int gen_a0)
{
  GEN_ENTER(0x6ade90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 MVar1;
  uint uVar2;
  
  F_006adc00((undefined *)this);
  if (*(int *)(this + 0x740) < 0) {
    uVar2 = F_006767d0((undefined *)(REFG(int, 0x137128c) + 0x3d0));
    *(uint *)(this + 0x740) = uVar2;
    if ((int)uVar2 < 0) {
      return uVar2;
    }
  }
  uVar2 = F_00678120((undefined *)(REFG(int, 0x137128c) + 0x3d0),*(undefined4 *)(this + 0x740),this + 0x30);
  if (-1 < (int)uVar2) {
    MVar1 = (undefined1)((uVar2 != 0) << 4 | (byte)this[100] & 0xef);
    uVar2 = CONCAT31((int3)(uVar2 >> 8),MVar1);
    this[100] = MVar1;
  }
  return uVar2;
}

/* ref: FUN_006adef0 */
uint F_006adef0(unsigned int gen_a0)
{
  GEN_ENTER(0x6adef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  int iVar6;
  undefined * this_00;
  int local_8;
  
  F_00690510(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[50])REFP(0x10b2bf4));
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined2 *)((int)this + 100) = 0;
  *(undefined2 *)((int)this + 0x66) = 0xffff;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) | 0xb;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) & 0xef;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[91])REFP(0x10b32ec));
  *(undefined2 *)((int)this + 0x72) = 3;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[10])REFP(0x10b2b68));
  F_0062c700((int)this + 0x90);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x90) = (*(undefined * PTR32 (*)[5])REFP(0x10b32bc));
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
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined1 *)((int)this + 0x118) = 0xfe;
  *(undefined4 *)((int)this + 0x11a) = 0xffffffff;
  *(undefined4 *)((int)this + 0x120) = REFG(float, 0x1375ac0);
  *(undefined4 *)((int)this + 0x124) = REFG(float, 0x1375ac4);
  *(undefined4 *)((int)this + 0x128) = REFG(float, 0x1375ac8);
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = REFG(float, 0x1375ac0);
  *(undefined4 *)((int)this + 0x134) = REFG(float, 0x1375ac4);
  *(undefined4 *)((int)this + 0x138) = REFG(float, 0x1375ac8);
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = REFG(float, 0x1375ac0);
  *(undefined4 *)((int)this + 0x144) = REFG(float, 0x1375ac4);
  *(undefined4 *)((int)this + 0x148) = REFG(float, 0x1375ac8);
  *(undefined4 *)((int)this + 0x150) = REFG(float, 0x1375ac0);
  *(undefined4 *)((int)this + 0x154) = REFG(float, 0x1375ac4);
  *(undefined4 *)((int)this + 0x158) = REFG(float, 0x1375ac8);
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x270) = REFG(undefined4, 0x1302e44);
  *(undefined4 *)((int)this + 0x274) = REFG(undefined4, 0x1302e48);
  *(undefined4 *)((int)this + 0x278) = REFG(undefined4, 0x1302e4c);
  *(undefined4 *)((int)this + 0x27c) = REFG(undefined4, 0x1302e50);
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0x280) = REFG(undefined4, 0x1302e54);
  *(undefined4 *)((int)this + 0x284) = REFG(undefined4, 0x1302e58);
  *(undefined4 *)((int)this + 0x288) = REFG(undefined4, 0x1302e5c);
  uVar2 = REFG(undefined4, 0x1302e60);
  *(undefined4 *)((int)this + 0x298) = 0;
  *(undefined4 *)((int)this + 0x28c) = uVar2;
  *(undefined4 *)((int)this + 0x290) = uVar1;
  *(undefined4 *)((int)this + 0x294) = uVar1;
  *(undefined4 *)((int)this + 0x29c) = 0;
  *(undefined4 *)((int)this + 0x2a0) = 0;
  *(undefined4 *)((int)this + 0x2a4) = 0;
  *(undefined4 *)((int)this + 0x2a8) = 0;
  *(undefined4 *)((int)this + 0x2ac) = 0;
  uVar1 = REFG(float, 0x1094884);
  *(undefined4 *)((int)this + 0x2b0) = REFG(float, 0x1094884);
  *(undefined4 *)((int)this + 0x2b4) = uVar1;
  *(undefined4 *)((int)this + 0x2b8) = uVar1;
  *(undefined4 *)((int)this + 700) = uVar1;
  *(undefined4 *)((int)this + 0x2c8) = 0;
  *(undefined4 *)((int)this + 0x2cc) = 0;
  *(undefined4 *)((int)this + 0x2d0) = 0;
  *(undefined4 *)((int)this + 0x2d4) = 0;
  *(undefined4 *)((int)this + 0x2d8) = 0;
  *(undefined4 *)((int)this + 0x3dc) = 0;
  *(undefined4 *)((int)this + 0x3e0) = 0;
  *(undefined4 *)((int)this + 0x3e4) = 0;
  *(undefined4 *)((int)this + 0x3ec) = 0;
  *(undefined4 *)((int)this + 0x3f0) = 0;
  *(undefined4 *)((int)this + 0x3f4) = 0;
  *(undefined4 *)((int)this + 0x3fc) = 0;
  *(undefined4 *)((int)this + 0x400) = 0;
  *(undefined4 *)((int)this + 0x404) = 0;
  *(undefined4 *)((int)this + 0x414) = 0;
  this_00 = (undefined *)((int)this + 0x418);
  local_8 = 4;
  do {
    F_009f7db0(this_00);
    this_00 = (undefined *)((int)this_00 + 0x88);
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  *(undefined4 *)((int)this + 0x6c8) = 0;
  uVar3 = F_004296a0(0x48,0,0xcb);
  *(uint *)((int)this + 0x6c4) = uVar3;
  *(uint *)uVar3 = uVar3;
  *((int *)GEN_TOP((*(int *)((int)this + 0x6c4) + 4))) = *(int *)((int)this + 0x6c4);
  *((int *)GEN_TOP((*(int *)((int)this + 0x6c4) + 8))) = *(int *)((int)this + 0x6c4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x6c4) + 0x44))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x6c4) + 0x45))) = 1;
  *(undefined4 *)((int)this + 0x6d8) = 0;
  uVar3 = F_004296a0(0x48,0,0xcb);
  *(uint *)((int)this + 0x6d4) = uVar3;
  *(uint *)uVar3 = uVar3;
  *((int *)GEN_TOP((*(int *)((int)this + 0x6d4) + 4))) = *(int *)((int)this + 0x6d4);
  *((int *)GEN_TOP((*(int *)((int)this + 0x6d4) + 8))) = *(int *)((int)this + 0x6d4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x6d4) + 0x44))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x6d4) + 0x45))) = 1;
  *(undefined4 *)((int)this + 0x6e0) = 0;
  *(undefined4 *)((int)this + 0x6e4) = 0xdeadc0de;
  *(undefined4 *)((int)this + 0x6e8) = 0xdeadc0de;
  *(undefined1 *)((int)this + 0x6ec) = 1;
  *(undefined4 *)((int)this + 0x6f0) = 0;
  *(undefined4 *)((int)this + 0x6f4) = 0;
  *(undefined4 *)((int)this + 0x6f8) = 0;
  *(undefined4 *)((int)this + 0x6fc) = 0;
  F_00b82420((int)this + 0x700);
  *(undefined4 *)((int)this + 0x710) = 0;
  *(undefined4 *)((int)this + 0x714) = 0;
  F_00b89bb0((int)this + 0x718);
  *(undefined1 *)((int)this + 0x720) = 1;
  *(ushort *)((int)this + 0x70) = *(ushort *)((int)this + 0x70) & 0xfffe;
  *(ushort *)((int)this + 0x70) = *(ushort *)((int)this + 0x70) & 0xfffd;
  *(ushort *)((int)this + 0x70) = *(ushort *)((int)this + 0x70) | 4;
  *(ushort *)((int)this + 0x70) = *(ushort *)((int)this + 0x70) & 0xfff7;
  *(ushort *)((int)this + 0x70) = *(ushort *)((int)this + 0x70) & 0xffef;
  *(ushort *)((int)this + 0x70) = *(ushort *)((int)this + 0x70) & 0xffdf;
  *(ushort *)((int)this + 0x70) = *(ushort *)((int)this + 0x70) & 0xffbf;
  *(ushort *)((int)this + 0x70) = *(ushort *)((int)this + 0x70) & 0xff7f;
  *(gen_code32 *)((int)this + 0xe8) = ((code *)REFP(0x6b0490));
  *(undefined * PTR32 *)((int)this + 0xec) = this;
  *(gen_code32 *)((int)this + 0xf0) = ((code *)REFP(0x6a6580));
  *(gen_code32 *)((int)this + 0xf8) = ((code *)REFP(0x6b04b0));
  *(undefined * PTR32 *)((int)this + 0xfc) = this;
  *(gen_code32 *)((int)this + 0x100) = ((code *)REFP(0x691f90));
  *(gen_code32 *)((int)this + 0x108) = ((code *)REFP(0x6b04d0));
  *(undefined * PTR32 *)((int)this + 0x10c) = this;
  *(gen_code32 *)((int)this + 0x110) = ((code *)REFP(0x6a66c0));
  puVar4 = (undefined4 *)((int)this + 0x170);
  iVar6 = 0x10;
  do {
    iVar5 = 4;
    do {
      puVar4[0x5b] = 0;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  *(undefined4 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x410) = 0xffffffff;
  *(undefined4 *)((int)this + 0x40c) = 0;
  *(undefined4 *)((int)this + 0x2c0) = 0;
  *(undefined4 *)((int)this + 0x2c4) = 0;
  return (uint)this;
}

/* ref: FUN_006ae3e0 */
uint F_006ae3e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ae3e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006adef0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[91])REFP(0x10b345c));
  *(undefined4 *)((int)this + 0x74c) = 0;
  *(undefined4 *)((int)this + 0x778) = 0;
  *(undefined4 *)((int)this + 0x77c) = 0;
  *(undefined4 *)((int)this + 0x7e4) = 0xffffffff;
  *(undefined4 *)((int)this + 0x7e8) = 0;
  *(undefined4 *)((int)this + 0x7ec) = 0;
  *(undefined4 *)((int)this + 0x7f0) = 0;
  *(undefined4 *)((int)this + 0x7f4) = 0;
  *(undefined4 *)((int)this + 0x7f8) = 0;
  *(undefined4 *)((int)this + 0x7fc) = 0;
  *(undefined4 *)((int)this + 0x800) = 0;
  *(undefined4 *)((int)this + 0x804) = 0;
  *(undefined4 *)((int)this + 0x808) = 0;
  *(undefined4 *)((int)this + 0x80c) = 0;
  *(undefined4 *)((int)this + 0x810) = 0;
  *(undefined4 *)((int)this + 0x818) = 0;
  *(undefined4 *)((int)this + 0x730) = 0;
  *(undefined4 *)((int)this + 0x734) = 0;
  *(undefined4 *)((int)this + 0x738) = 0;
  *(undefined4 *)((int)this + 0x73c) = 0;
  *(undefined4 *)((int)this + 0x740) = 0;
  *(undefined4 *)((int)this + 0x744) = 0;
  *(undefined2 *)((int)this + 0x748) = 0;
  *(undefined4 *)((int)this + 0x750) = 0;
  *(undefined4 *)((int)this + 0x754) = 0;
  *(undefined4 *)((int)this + 0x758) = 0;
  *(undefined4 *)((int)this + 0x75c) = 0;
  *(undefined4 *)((int)this + 0x760) = 0;
  *(undefined4 *)((int)this + 0x764) = 0;
  *(undefined4 *)((int)this + 0x768) = 0;
  *(undefined4 *)((int)this + 0x76c) = 0;
  *(undefined4 *)((int)this + 0x770) = 0;
  *(undefined4 *)((int)this + 0x774) = 0;
  *(undefined4 *)((int)this + 0x780) = 0x3ff0000;
  *(undefined4 *)((int)this + 0x786) = 0x3ff0000;
  *(undefined1 *)((int)this + 0x784) = 0;
  *(undefined1 *)((int)this + 0x78a) = 0;
  *(undefined4 *)((int)this + 0x78c) = 0x3ff0000;
  *(undefined1 *)((int)this + 0x790) = 0;
  *(undefined4 *)((int)this + 0x792) = 0x3ff0000;
  *(undefined1 *)((int)this + 0x796) = 0;
  *(undefined4 *)((int)this + 0x798) = 0x3ff0000;
  *(undefined1 *)((int)this + 0x79c) = 0;
  *(undefined4 *)((int)this + 0x79e) = 0x3ff0000;
  *(undefined1 *)((int)this + 0x7a2) = 0;
  *(undefined4 *)((int)this + 0x7a4) = 0x3ff0000;
  *(undefined1 *)((int)this + 0x7a8) = 0;
  *(undefined4 *)((int)this + 0x7aa) = 0x3ff0000;
  *(undefined1 *)((int)this + 0x7ae) = 0;
  *(undefined4 *)((int)this + 0x7b0) = 0x3ff0000;
  *(undefined1 *)((int)this + 0x7b4) = 0;
  *(undefined4 *)((int)this + 0x7b6) = 0x3ff0000;
  *(undefined1 *)((int)this + 0x7ba) = 0;
  *(undefined4 *)((int)this + 0x7bc) = 0;
  *(undefined4 *)((int)this + 0x7c0) = 0;
  *(undefined4 *)((int)this + 0x7c4) = 0;
  *(undefined4 *)((int)this + 0x7c8) = 0;
  *(undefined4 *)((int)this + 0x7cc) = 0;
  *(undefined4 *)((int)this + 2000) = 0;
  *(undefined4 *)((int)this + 0x7d4) = 0;
  *(undefined4 *)((int)this + 0x7d8) = 0;
  *(undefined4 *)((int)this + 0x7dc) = 0;
  *(undefined4 *)((int)this + 0x7e0) = 0;
  *(undefined4 *)((int)this + 0x814) = 0;
  return (uint)this;
}

/* ref: FUN_006ae5b0 */
uint F_006ae5b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ae5b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006adef0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[91])REFP(0x10b35cc));
  *(undefined4 *)((int)this + 0x730) = 0;
  *(undefined2 *)((int)this + 0x748) = 0;
  *(undefined4 *)((int)this + 0x77c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x780) = 0;
  *(undefined4 *)((int)this + 0x784) = 0;
  *(undefined4 *)((int)this + 0x788) = 0;
  *(undefined4 *)((int)this + 0x790) = 0;
  *(undefined4 *)((int)this + 0x734) = 0;
  *(undefined4 *)((int)this + 0x738) = 0;
  *(undefined4 *)((int)this + 0x73c) = 0;
  *(undefined4 *)((int)this + 0x740) = 0;
  *(undefined4 *)((int)this + 0x744) = 0;
  *(undefined4 *)((int)this + 0x74a) = 0x3ff0000;
  *(undefined4 *)((int)this + 0x750) = 0x3ff0000;
  *(undefined1 *)((int)this + 0x74e) = 0;
  *(undefined1 *)((int)this + 0x754) = 0;
  *(undefined4 *)((int)this + 0x756) = 0x3ff0000;
  *(undefined1 *)((int)this + 0x75a) = 0;
  *(undefined4 *)((int)this + 0x75c) = 0x3ff0000;
  *(undefined1 *)((int)this + 0x760) = 0;
  *(undefined4 *)((int)this + 0x762) = 0x3ff0000;
  *(undefined1 *)((int)this + 0x766) = 0;
  *(undefined4 *)((int)this + 0x768) = 0;
  *(undefined4 *)((int)this + 0x76c) = 0;
  *(undefined4 *)((int)this + 0x770) = 0;
  *(undefined4 *)((int)this + 0x774) = 0;
  *(undefined4 *)((int)this + 0x778) = 0;
  *(undefined4 *)((int)this + 0x78c) = 0;
  return (uint)this;
}

/* ref: FUN_006ae690 */
uint F_006ae690(unsigned int gen_a0)
{
  GEN_ENTER(0x6ae690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006adef0(this);
  *(undefined4 *)((int)this + 0x730) = 0;
  *(undefined4 *)((int)this + 0x740) = 0;
  *(undefined4 *)((int)this + 0x744) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[91])REFP(0x10b373c));
  *(undefined4 *)((int)this + 0x734) = 0;
  *(undefined2 *)((int)this + 0x738) = 0xffff;
  *(undefined4 *)((int)this + 0x748) = 0;
  return (uint)this;
}

/* ref: FUN_006ae6d0 */
uint F_006ae6d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ae6d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006adef0(this);
  *(undefined4 *)((int)this + 0x730) = 0;
  *(undefined4 *)((int)this + 0x73c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[91])REFP(0x10b38ac));
  *(undefined2 *)((int)this + 0x734) = 0;
  *(undefined4 *)((int)this + 0x740) = 0xffffffff;
  return (uint)this;
}

/* ref: FUN_006ae710 */
uint F_006ae710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ae710u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x20 + *(int *)(in_ecx + 0xb4);
}

/* ref: FUN_006ae730 */
uint F_006ae730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ae730u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((param_2 * 0x20 + *(int *)(in_ecx + 0xb4))));
}

/* ref: FUN_006ae750 */
byte F_006ae750(unsigned int gen_a0)
{
  GEN_ENTER(0x6ae750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  short * psVar2;
  uint uVar3;
  
  uVar3 = (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xa8) + 4))) + 0x1e +
                         *(int *)((int)this + 0xa8))));
  uVar1 = 0;
  if (uVar3 != 0) {
    psVar2 = ((short *)GEN_TOP((*(int *)((int)this + 0xb8) + 2)));
    do {
      if (*psVar2 != 0) {
        return 1;
      }
      uVar1 = uVar1 + 1;
      psVar2 = psVar2 + 0x1e;
    } while (uVar1 < uVar3);
  }
  return 0;
}

/* ref: FUN_006ae790 */
byte F_006ae790(unsigned int gen_a0)
{
  GEN_ENTER(0x6ae790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  short * psVar2;
  uint uVar3;
  
  uVar3 = (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xa8) + 4))) + 0x1e +
                         *(int *)((int)this + 0xa8))));
  uVar1 = 0;
  if (uVar3 != 0) {
    psVar2 = ((short *)GEN_TOP((*(int *)((int)this + 0xb8) + 0xe)));
    do {
      if (*psVar2 != 0) {
        return 1;
      }
      uVar1 = uVar1 + 1;
      psVar2 = psVar2 + 0x1e;
    } while (uVar1 < uVar3);
  }
  return 0;
}

/* ref: FUN_006ae8d0 */
byte F_006ae8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ae8d0u, gen_a0, gen_a1, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  return *param_1 == *param_2;
}

/* ref: FUN_006ae920 */
uint F_006ae920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ae920u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*param_2 / (float10)*param_3);
  param_1[1] = (float)((float10)param_2[1] / (float10)param_3[1]);
  return (uint)param_1;
}

/* ref: FUN_006ae940 */
unsigned int F_006ae940(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x6ae940u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  *param_1 = (float)((float10)*param_2 - (float10)param_3);
  param_1[1] = (float)((float10)param_2[1] - (float10)param_3);
  return 0;
}

/* ref: FUN_006aea10 */
uint F_006aea10(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x6aea10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 uVar1;
  
  *in_ecx = *param_2;
  uVar1 = param_2[1];
  in_ecx[2] = (undefined4)gen_fl2bits(param_3);
  in_ecx[1] = uVar1;
  return (uint)in_ecx;
}

/* ref: FUN_006aea30 */
uint F_006aea30(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x6aea30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 uVar1;
  
  *in_ecx = *param_2;
  uVar1 = param_2[1];
  in_ecx[2] = (undefined4)gen_fl2bits(param_3);
  in_ecx[1] = uVar1;
  return (uint)in_ecx;
}

/* ref: FUN_006aea50 */
unsigned int F_006aea50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6aea50u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*param_2 + (float10)*param_3);
  param_1[1] = (float)((float10)param_2[1] + (float10)param_3[1]);
  param_1[2] = (float)((float10)param_2[2] + (float10)param_3[2]);
  return 0;
}

/* ref: FUN_006aea80 */
byte F_006aea80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6aea80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  byte * pbVar3;
  
  uVar1 = 0x10;
  pbVar3 = param_1;
  do {
    if (*(int *)this != *(int *)pbVar3) {
      iVar2 = (uint)*(byte *)this - (uint)*pbVar3;
      if (((iVar2 == 0) && (iVar2 = (uint)*(byte *)((int)this + 1) - (uint)pbVar3[1], iVar2 == 0))
         && (iVar2 = (uint)*(byte *)((int)this + 2) - (uint)pbVar3[2], iVar2 == 0)) {
        iVar2 = (uint)*(byte *)((int)this + 3) - (uint)pbVar3[3];
      }
      return (iVar2 >> 0x1f | 1U) == 0;
    }
    uVar1 = uVar1 - 4;
    pbVar3 = pbVar3 + 4;
    this = (undefined *)((int)this + 4);
  } while (3 < uVar1);
  return 1;
}

/* ref: FUN_006aeaf0 */
unsigned int F_006aeaf0(unsigned int gen_a0)
{
  GEN_ENTER(0x6aeaf0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_006aeb20 */
unsigned int F_006aeb20(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x6aeb20u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  *in_ecx = param_2;
  in_ecx[5] = param_3;
  in_ecx[1] = 0.0;
  in_ecx[2] = 0.0;
  in_ecx[4] = 0.0;
  in_ecx[6] = 0.0;
  in_ecx[8] = 0.0;
  in_ecx[9] = 0.0;
  in_ecx[10] = param_4;
  in_ecx[0xc] = 0.0;
  in_ecx[0xd] = 0.0;
  in_ecx[0xe] = 0.0;
  return 0;
}

/* ref: FUN_006aeb80 */
unsigned int F_006aeb80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6aeb80u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)(param_2 * 0x10 + in_ecx);
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  return 0;
}

/* ref: FUN_006aebb0 */
unsigned int F_006aebb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6aebb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  uVar1 = param_2[2];
  in_ecx[3] = 0;
  in_ecx[2] = uVar1;
  in_ecx[4] = param_2[4];
  in_ecx[5] = param_2[5];
  uVar1 = param_2[6];
  in_ecx[7] = 0;
  in_ecx[6] = uVar1;
  in_ecx[8] = param_2[8];
  in_ecx[9] = param_2[9];
  uVar1 = param_2[10];
  in_ecx[0xb] = 0;
  uVar2 = REFG(float, 0x1087f04);
  in_ecx[10] = uVar1;
  in_ecx[0xc] = param_2[0xc];
  in_ecx[0xd] = param_2[0xd];
  uVar1 = param_2[0xe];
  in_ecx[0xf] = uVar2;
  in_ecx[0xe] = uVar1;
  return 0;
}

/* ref: FUN_006aec30 */
unsigned int F_006aec30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6aec30u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar3 = (float10)REFG(double, 0x1088108);
  fVar4 = (float10)((float)GEN_TOF(((float10)(float)((float10)*in_ecx + (float10)in_ecx[4]) * fVar3)));
  fVar5 = (float10)((float)GEN_TOF(((float10)(float)((float10)in_ecx[5] + (float10)in_ecx[1]) * fVar3)));
  fVar1 = param_2[1];
  fVar3 = (float10)((float)GEN_TOF((fVar3 * (float10)(float)((float10)in_ecx[2] + (float10)in_ecx[6]))));
  fVar2 = param_2[2];
  *in_ecx = (float)(fVar4 - (float10)*param_2);
  in_ecx[1] = (float)(fVar5 - (float10)fVar1);
  in_ecx[2] = (float)(fVar3 - (float10)fVar2);
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  in_ecx[4] = (float)((float10)*param_2 + fVar4);
  in_ecx[5] = (float)(fVar5 + (float10)fVar1);
  in_ecx[6] = (float)(fVar3 + (float10)fVar2);
  return 0;
}

/* ref: FUN_006aecf0 */
undefined * F_006aecf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6aecf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar4 = (float10)REFG(double, 0x1088108);
  fVar1 = ((float)GEN_TOF(((float10)(float)((float10)param_1[4] - (float10)*param_1) * fVar4)));
  fVar2 = ((float)GEN_TOF(((float10)(float)((float10)param_1[5] - (float10)param_1[1]) * fVar4)));
  fVar3 = ((float)GEN_TOF((fVar4 * (float10)(float)((float10)param_1[6] - (float10)param_1[2]))));
  fVar4 = (float10)fVar1;
  fVar5 = (float10)fVar2;
  fVar6 = (float10)fVar3;
  *(float *)((int)this + 0xc) =
       ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar6 * fVar6 + (fVar5 * fVar5 + fVar4 * fVar4)))))));
  *(float *)this = (float)((float10)*param_1 + (float10)fVar1);
  *(float *)((int)this + 4) = (float)((float10)param_1[1] + (float10)fVar2);
  *(float *)((int)this + 8) = (float)((float10)param_1[2] + (float10)fVar3);
  return this;
}

/* ref: FUN_006aeda0 */
byte F_006aeda0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6aeda0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_006aea80(this,param_1);
  return bVar1 == 0;
}

/* ref: FUN_006aedc0 */
byte F_006aedc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6aedc0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)REFG(double, 0x1088108);
  if ((float10)((float)GEN_TOF(((float10)in_ecx[2] *
                       (float10)((float)GEN_TOF((fVar1 * (float10)(float)((float10)param_2[6] +
                                                                (float10)param_2[2])))) +
                      ((float10)*in_ecx *
                       (float10)((float)GEN_TOF(((float10)(float)((float10)param_2[4] + (float10)*param_2) *
                                       fVar1))) +
                      (float10)in_ecx[1] *
                      (float10)((float)GEN_TOF(((float10)(float)((float10)param_2[5] + (float10)param_2[1]) *
                                      fVar1))))))) - (float10)in_ecx[3] <=
      (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(ABS((float10)in_ecx[2]))) *
                       (float10)((float)GEN_TOF(((float10)(float)((float10)param_2[6] - (float10)param_2[2])
                                       * fVar1))) +
                      ((float10)((float)GEN_TOF(ABS((float10)*in_ecx))) *
                       (float10)((float)GEN_TOF(((float10)(float)((float10)param_2[4] - (float10)*param_2) *
                                       fVar1))) +
                      (float10)((float)GEN_TOF(ABS((float10)in_ecx[1]))) *
                      (float10)((float)GEN_TOF(((float10)(float)((float10)param_2[5] - (float10)param_2[1]) *
                                      fVar1)))))))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006aef10 */
uint F_006aef10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6aef10u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((float10)((float)GEN_TOF(((float10)*(float *)(param_2 + 8) * (float10)in_ecx[2] +
                      ((float10)*(float *)param_2 * (float10)*in_ecx +
                      (float10)*(float *)(param_2 + 4) * (float10)in_ecx[1])))) - (float10)in_ecx[3]
      <= (float10)*(float *)(param_2 + 0xc)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006aef50 */
uint F_006aef50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6aef50u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((float10)((float)GEN_TOF(((float10)*(float *)(param_2 + 8) * (float10)in_ecx[2] +
                      ((float10)*(float *)param_2 * (float10)*in_ecx +
                      (float10)*(float *)(param_2 + 4) * (float10)in_ecx[1])))) - (float10)in_ecx[3]
      <= -(float10)*(float *)(param_2 + 0xc)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006aef90 */
unsigned int F_006aef90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6aef90u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_006aefc0 */
unsigned int F_006aefc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6aefc0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_006aeff0 */
byte F_006aeff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6aeff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar1 = *(float *)((int)this + 4);
  fVar2 = *(float *)((int)this + 8);
  fVar3 = *(float *)((int)this + 0x14);
  fVar4 = *(float *)((int)this + 0x18);
  fVar6 = (float10)(float)((float10)*(float *)this - (float10)*param_1);
  fVar7 = (float10)(float)((float10)fVar1 - (float10)param_1[1]);
  fVar8 = (float10)(float)((float10)fVar2 - (float10)param_1[2]);
  fVar5 = ((float)GEN_TOF(((fVar6 * (float10)*(float *)((int)this + 0x10) + fVar7 * (float10)fVar3) +
                 fVar8 * (float10)fVar4)));
  fVar6 = (float10)((float)GEN_TOF(((float10)((float)GEN_TOF((fVar8 * fVar8 + (fVar6 * fVar6 + fVar7 * fVar7)))) -
                          (float10)param_1[3] * (float10)param_1[3])));
  if (((float10)0 < fVar6) &&
     ((!GEN_ISNAN(fVar5) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(fVar5 <= *(float *)&REFG(undefined, 0x1088114)))) {
    return 0;
  }
  fVar7 = (float10)fVar5;
  fVar6 = (float10)(float)(fVar7 * fVar7 - fVar6);
  if (fVar6 < (float10)0) {
    return 0;
  }
  fVar6 = (float10)(float)((float10)((float)GEN_TOF(-fVar7)) - (float10)((float)GEN_TOF(SQRT(fVar6))));
  if (fVar6 < (float10)0) {
    fVar6 = (float10)0.0;
  }
  *param_2 = ((float)GEN_TOF(((float10)*(float *)this +
                    (float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0x10) * fVar6))))));
  param_2[1] = ((float)GEN_TOF(((float10)fVar1 + (float10)(float)((float10)fVar3 * fVar6))));
  param_2[2] = ((float)GEN_TOF(((float10)fVar2 + (float10)(float)(fVar6 * (float10)fVar4))));
  return 1;
}

/* ref: FUN_006af160 */
byte F_006af160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6af160u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  
  fVar1 = ((float)GEN_TOF((((float10)*(float *)(param_2 + 0xc) -
                  (float10)((float)GEN_TOF((((float10)*(float *)param_2 * (float10)*in_ecx +
                                   (float10)*(float *)(param_2 + 4) * (float10)in_ecx[1]) +
                                  (float10)*(float *)(param_2 + 8) * (float10)in_ecx[2])))) /
                 (float10)((float)GEN_TOF((((float10)*(float *)param_2 * (float10)in_ecx[4] +
                                  (float10)in_ecx[5] * (float10)*(float *)(param_2 + 4)) +
                                 (float10)in_ecx[6] * (float10)*(float *)(param_2 + 8)))))));
  *param_3 = fVar1;
  if ((float10)0 <= (float10)fVar1) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006af1f0 */
unsigned int F_006af1f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6af1f0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_006af220 */
unsigned int F_006af220(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x6af220u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_006af2b0 */
uint F_006af2b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6af2b0u, gen_a0, gen_a1, gen_a2, 0u);
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
  *(float *)this = *param_1 - *param_2;
  *(float *)((int)this + 4) = fVar1 - fVar4;
  *(float *)((int)this + 8) = fVar2 - fVar5;
  *(float *)((int)this + 0xc) = fVar3 - fVar6;
  return (uint)param_1;
}

/* ref: FUN_006af2d0 */
unsigned int F_006af2d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6af2d0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_006af2f0 */
uint F_006af2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6af2f0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *in_ecx = *in_ecx - *param_2;
  in_ecx[1] = in_ecx[1] - fVar1;
  in_ecx[2] = in_ecx[2] - fVar2;
  in_ecx[3] = in_ecx[3] - fVar3;
  return (uint)param_2;
}

/* ref: FUN_006af310 */
uint F_006af310(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x6af310u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  F_00d988a0(param_1,param_2,param_3);
  return param_1;
}

/* ref: FUN_006af340 */
uint F_006af340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6af340u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_006af360 */
uint F_006af360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6af360u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(in_ecx + 0x20) = *param_2;
  *(undefined4 *)(in_ecx + 0x24) = uVar1;
  *(undefined4 *)(in_ecx + 0x28) = uVar2;
  *(undefined4 *)(in_ecx + 0x2c) = uVar3;
  return (uint)param_2;
}

/* ref: FUN_006af380 */
uint F_006af380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6af380u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_006af3b0 */
uint F_006af3b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6af3b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)this = CONCAT22((undefined2)param_1,(undefined2)param_2);
  return CONCAT22((undefined2)param_1,(undefined2)param_2);
}

/* ref: FUN_006af3d0 */
uint F_006af3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6af3d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006af3e0 */
uint F_006af3e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6af3e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)this = CONCAT22((undefined2)param_1,(undefined2)param_2);
  return CONCAT22((undefined2)param_1,(undefined2)param_2);
}

/* ref: FUN_006af420 */
uint F_006af420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6af420u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*in_ecx < *param_2);
}

/* ref: FUN_006af480 */
uint F_006af480(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x6af480u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  *in_ecx = param_2;
  in_ecx[1] = (undefined4)gen_fl2bits(param_3);
  return (uint)in_ecx;
}

/* ref: FUN_006af4a0 */
uint F_006af4a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6af4a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this)));
  return uVar1 + 4 + *piVar2 * 4;
}

/* ref: FUN_006af4c0 */
uint F_006af4c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6af4c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this)));
  return uVar1 + 0x14 + *piVar2 * 4;
}

/* ref: FUN_006af4e0 */
uint F_006af4e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6af4e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this)));
  return uVar1 + 0x14 + (*piVar2 + (param_2 + param_1 * 4) * 8) * 4;
}

/* ref: FUN_006af5d0 */
unsigned int F_006af5d0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6af5d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 4) = param_2;
  *(undefined1 *)(in_ecx + 9) = 1;
  return 0;
}

/* ref: FUN_006af5f0 */
byte F_006af5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6af5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *param_1 == *(int *)((int)this + 8);
}

/* ref: FUN_006af610 */
uint F_006af610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6af610u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x74) = param_2;
  return param_2;
}

/* ref: FUN_006af620 */
byte F_006af620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6af620u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  if (*(int *)(in_ecx + 0x54) != 0) {
    bVar1 = F_009f0920(*(int *)(in_ecx + 0x54),param_2);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_006af640 */
unsigned int F_006af640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6af640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(undefined * PTR32 *)((int)this + 0x54) != (undefined *)0x0) {
    F_009f4320(*(undefined * PTR32 *)((int)this + 0x54),param_1);
    return 0;
  }
  return 0;
}

/* ref: FUN_006af660 */
unsigned int F_006af660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6af660u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(int *)(in_ecx + 0x54) != 0) {
    F_009f0900(*(int *)(in_ecx + 0x54),param_2);
    return 0;
  }
  return 0;
}

/* ref: FUN_006af690 */
unsigned int F_006af690(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6af690u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(in_ecx + 0x54) != 0) {
    F_009f13a0(*(int *)(in_ecx + 0x54),param_2);
  }
  return 0;
}

/* ref: FUN_006af710 */
uint F_006af710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6af710u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_006af770 */
uint F_006af770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6af770u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (undefined2)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006af790 */
uint F_006af790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6af790u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (undefined2)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006af7b0 */
uint F_006af7b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6af7b0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006af7e0 */
uint F_006af7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6af7e0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006af830 */
uint F_006af830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6af830u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006af880 */
uint F_006af880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6af880u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006af920 */
uint F_006af920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6af920u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,0xd8);
  return (uint)uVar1;
}

/* ref: FUN_006af950 */
ushort F_006af950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6af950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  
  uVar1 = (ushort)(byte)param_1 << 0xf | *(ushort *)((int)this + 6) & 0x7fff;
  *(ushort *)((int)this + 6) = uVar1;
  return uVar1;
}

/* ref: FUN_006af990 */
ushort F_006af990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6af990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  
  uVar1 = (ushort)(byte)param_1 << 0xf | *(ushort *)((int)this + 0xe) & 0x7fff;
  *(ushort *)((int)this + 0xe) = uVar1;
  return uVar1;
}

/* ref: FUN_006afa50 */
uint F_006afa50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6afa50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xd8);
  return (uint)uVar1;
}

/* ref: FUN_006afa80 */
uint F_006afa80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6afa80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006afad0 */
uint F_006afad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6afad0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xd8);
  return (uint)uVar1;
}

/* ref: FUN_006afb40 */
uint F_006afb40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6afb40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,0xd8);
  return (uint)uVar1;
}

/* ref: FUN_006afb70 */
uint F_006afb70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6afb70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006afb90 */
uint F_006afb90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6afb90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006afbb0 */
uint F_006afbb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6afbb0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x48,param_2,0xcb);
  return uVar1;
}

/* ref: FUN_006afbe0 */
uint F_006afbe0(unsigned int gen_a0)
{
  GEN_ENTER(0x6afbe0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_006afbf0 */
uint F_006afbf0(unsigned int gen_a0)
{
  GEN_ENTER(0x6afbf0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_006afc00 */
uint F_006afc00(unsigned int gen_a0)
{
  GEN_ENTER(0x6afc00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006afc10 */
uint F_006afc10(unsigned int gen_a0)
{
  GEN_ENTER(0x6afc10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_006afc20 */
uint F_006afc20(unsigned int gen_a0)
{
  GEN_ENTER(0x6afc20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_006afc30 */
uint F_006afc30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6afc30u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,0xd8);
  return uVar1;
}

/* ref: FUN_006afc80 */
unsigned int F_006afc80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6afc80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x84);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)((int)this + 0x84) = param_1;
  return 0;
}

/* ref: FUN_006afce0 */
unsigned int F_006afce0(unsigned int gen_a0)
{
  GEN_ENTER(0x6afce0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_006afd20 */
uint F_006afd20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6afd20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x14) = param_2;
  return param_2;
}

/* ref: FUN_006afd30 */
uint F_006afd30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6afd30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  uint uVar2;
  
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 8))(param_2);
  }
  uVar2 = *(uint *)((int)this + 0x48);
  if (*(int *)(uVar2 + param_1 * 4) != 0) {
    piVar1 = *(int * PTR32 *)(uVar2 + param_1 * 4);
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x48) + param_1 * 4))) = param_2;
    return uVar2;
  }
  *(int * PTR32 *)(uVar2 + param_1 * 4) = param_2;
  return uVar2;
}

/* ref: FUN_006afd90 */
uint F_006afd90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6afd90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x70) = param_2;
  return param_2;
}

/* ref: FUN_006afdb0 */
uint F_006afdb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6afdb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x74) = param_2;
  return param_2;
}

/* ref: FUN_006afde0 */
uint F_006afde0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6afde0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if ((ushort)param_1 == 0xffff) {
    return 0;
  }
  return (int)this + (uint)(ushort)param_1 * 0x18 + 0x24;
}

/* ref: FUN_006afe20 */
uint F_006afe20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6afe20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xd4);
  return uVar1;
}

/* ref: FUN_006afe60 */
uint F_006afe60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6afe60u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xd8);
  return uVar1;
}

/* ref: FUN_006afea0 */
uint F_006afea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6afea0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xd8);
  return uVar1;
}

/* ref: FUN_006afee0 */
uint F_006afee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6afee0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 8,param_2,0xd8);
  return uVar1;
}

/* ref: FUN_006aff20 */
byte F_006aff20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6aff20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_006aff40 */
byte F_006aff40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6aff40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_006aff90 */
unsigned int F_006aff90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6aff90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*((char *)GEN_TOP((*(int *)(iVar1 + 8) + 0x15))) == '\0') {
    *((int * PTR32 *)GEN_TOP((*(int *)(iVar1 + 8) + 4))) = param_1;
  }
  *(int *)(iVar1 + 4) = param_1[1];
  if (param_1 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar1;
    *(int * PTR32 *)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return 0;
  }
  piVar2 = (int *)param_1[1];
  if (param_1 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int * PTR32 *)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return 0;
  }
  *piVar2 = iVar1;
  *(int * PTR32 *)(iVar1 + 8) = param_1;
  param_1[1] = iVar1;
  return 0;
}

/* ref: FUN_006afff0 */
uint F_006afff0(unsigned int gen_a0)
{
  GEN_ENTER(0x6afff0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_006b0000 */
uint F_006b0000(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0000u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_006b0020 */
uint F_006b0020(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0020u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_006b0080 */
uint F_006b0080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b0080u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x10) = *param_2;
  *(undefined4 *)(in_ecx + 0x14) = param_2[1];
  *(undefined4 *)(in_ecx + 0x18) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_006b00a0 */
uint F_006b00a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b00a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1f0) = param_2;
  return param_2;
}

/* ref: FUN_006b00b0 */
unsigned int F_006b00b0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6b00b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 500) = (float)((float10)param_2 * (float10)param_2);
  return 0;
}

/* ref: FUN_006b00d0 */
unsigned int F_006b00d0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6b00d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x1f8) = param_2;
  return 0;
}

/* ref: FUN_006b00f0 */
byte F_006b00f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b00f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(byte *)(param_1 + 0x3a6e + (int)this) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_006b0110 */
ushort F_006b0110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b0110u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 8) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_006b0120 */
ushort F_006b0120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b0120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(ushort *)((int)this + 10) = (ushort)param_1;
  *(undefined2 *)((int)this + 0xc) = (undefined2)param_2;
  return (ushort)param_1;
}

/* ref: FUN_006b0150 */
uint F_006b0150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b0150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006b0160 */
unsigned int F_006b0160(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x15) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x15);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x15);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x15);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_006b01b0 */
ushort F_006b01b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b01b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 8) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_006b0220 */
uint F_006b0220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b0220u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x78 + param_2 * 4);
}

/* ref: FUN_006b0230 */
uint F_006b0230(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0230u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b0250 */
uint F_006b0250(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0250u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b0260 */
uint F_006b0260(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0260u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b0270 */
uint F_006b0270(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0270u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b0280 */
uint F_006b0280(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0280u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b0290 */
uint F_006b0290(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0290u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b02a0 */
uint F_006b02a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b02a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b02d0 */
uint F_006b02d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b02d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b0310 */
unsigned int F_006b0310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b0310u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_006b0330 */
unsigned int F_006b0330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b0330u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_006b0350 */
unsigned int F_006b0350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b0350u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: Apricot::IInstanceListenner::vf1 */
byte F_006b0380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6b0380u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: std::allocator<std::_Container_proxy>::construct_006b0390 */
unsigned int F_006b0390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b0390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: Apricot::IInstanceListenner::vf2 */
byte F_006b03b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b03b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1087f04));
  return 1;
}

/* ref: Apricot::IInstanceListenner::vf3 */
uint F_006b03d0(void)
{
  GEN_ENTER(0x6b03d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::IInstanceListenner::vf4 */
uint F_006b03e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b03e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Apricot::IInstanceListenner::vf5 */
byte F_006b03f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6b03f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  return 0;
}

/* ref: Apricot::IInstanceListenner::vf6 */
byte F_006b0400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b0400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *param_2 = GEN_FLT_TO(*param_2, REFG(float, 0x1087f04));
  return 1;
}

/* ref: Apricot::IInstanceListenner::vf7 */
byte F_006b0420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6b0420u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  return 0;
}

/* ref: Apricot::IInstanceListenner::vf8 */
unsigned int F_006b0430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b0430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Apricot::IInstanceListenner::vf9 */
unsigned int F_006b0440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b0440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Apricot::IInstanceListenner::vf0 */
uint F_006b0450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b0450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10b2a9c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_006b0490 */
uint F_006b0490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b0490u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_006b04b0 */
uint F_006b04b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b04b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3);
  return uVar1;
}

/* ref: FUN_006b04d0 */
uint F_006b04d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b04d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3);
  return uVar1;
}

/* ref: FUN_006b04f0 */
uint F_006b04f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b04f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  return *in_ecx - *param_2 >> 3;
}

/* ref: FUN_006b0540 */
byte F_006b0540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b0540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 0x10;
  *(undefined4 *)((int)this + 0xc) = param_1;
  return 1;
}

/* ref: FUN_006b0570 */
unsigned int F_006b0570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b0570u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  if (param_1 != param_2) {
    piVar1 = param_1;
    do {
      if (*piVar1 == *param_3) {
        return 0;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_006b0590 */
byte F_006b0590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b0590u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  
  for (piVar1 = param_1; piVar1 != param_2; piVar1 = piVar1 + 1) {
    if (*piVar1 != 0) {
      F_0050c620(*piVar1,0,0);
    }
  }
  return (byte)param_3;
}

/* ref: FUN_006b05d0 */
uint F_006b05d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b05d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b05e0 */
uint F_006b05e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b05e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b05f0 */
uint F_006b05f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b05f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b0600 */
uint F_006b0600(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0600u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b0610 */
uint F_006b0610(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0610u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b0620 */
uint F_006b0620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b0620u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_006b0650 */
uint F_006b0650(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0650u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b0660 */
uint F_006b0660(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0660u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b0670 */
uint F_006b0670(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0670u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b0690 */
uint F_006b0690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b0690u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_006b06c0 */
uint F_006b06c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b06c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_006b0720 */
uint F_006b0720(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0720u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b0730 */
uint F_006b0730(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0730u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b0750 */
uint F_006b0750(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0750u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: Client::Graphics::Vfx::VfxResourceInstanceListenner::vf1 */
unsigned int F_006b0790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b0790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Vfx::VfxResourceInstanceListenner::vf2 */
unsigned int F_006b07a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b07a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Vfx::VfxResourceInstanceListenner::vf0 */
uint F_006b07b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b07b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10b2ad0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_006b0800 */
uint F_006b0800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b0800u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006b0830 */
uint F_006b0830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b0830u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_006b0850 */
byte F_006b0850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b0850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_006b0880 */
uint F_006b0880(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0880u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x1fU >> 5;
}

/* ref: FUN_006b0890 */
uint F_006b0890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b0890u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_006b08a0 */
uint F_006b08a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b08a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + param_2 * 4);
}

/* ref: FUN_006b08b0 */
uint F_006b08b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b08b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = 1 << ((byte)param_1 & 0x1f);
  puVar1 = ((uint *)GEN_TOP((*(int *)this + (param_1 >> 5) * 4)));
  if ((char)param_2 != '\0') {
    *puVar1 = *puVar1 | uVar2;
    return uVar2;
  }
  *puVar1 = *puVar1 & ~uVar2;
  return ~uVar2;
}

/* ref: FUN_006b08f0 */
unsigned int F_006b08f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b08f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  int iVar3;
  code * pcVar4;
  int iVar5;
  uint uVar6;
  int * piVar7;
  uint uVar8;
  int iVar9;
  
  iVar2 = *(int *)((int)this + 0x24);
  iVar3 = *(int *)((int)this + 0x18);
  pcVar4 = *(gen_code32 *)((int)this + 0x20);
  iVar5 = *(int *)((int)this + 0x68);
  puVar1 = (uint *)((int)this + 0x6c);
  LOCK();
  uVar8 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  while (uVar8 < iVar5 - 1U) {
    piVar7 = ((int *)GEN_TOP(((uVar8 & 0x1f) * 0x50 + *((int *)GEN_TOP(((int)this + (uVar8 >> 5) * 4 + 0x28))))));
    iVar9 = *piVar7;
    if (iVar9 != 0) {
      piVar7 = piVar7 + 4;
      do {
        (*pcVar4)(iVar2 + iVar3,piVar7);
        piVar7 = piVar7 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    puVar1 = (uint *)((int)this + 0x6c);
    LOCK();
    uVar8 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  uVar8 = *(int *)((int)this + 0x68) - 1;
  iVar5 = *((int *)GEN_TOP(((int)this + (uVar8 >> 5) * 4 + 0x28)));
  iVar9 = (uVar8 & 0x1f) * 0x50;
  uVar6 = *(uint *)(iVar5 + iVar9);
  puVar1 = (uint *)((int)this + 0x70);
  LOCK();
  uVar8 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  if (uVar8 < uVar6) {
    do {
      (*pcVar4)(iVar2 + iVar3,iVar5 + iVar9 + 0x10 + uVar8 * 4);
      puVar1 = (uint *)((int)this + 0x70);
      LOCK();
      uVar8 = *puVar1;
      *puVar1 = *puVar1 + 1;
      UNLOCK();
    } while (uVar8 < uVar6);
  }
  return 0;
}

/* ref: FUN_006b09d0 */
uint F_006b09d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b09d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  
  for (uVar5 = param_2 - 1U >> 5; param_1 >> 5 < uVar5; uVar5 = uVar5 - 1) {
    iVar2 = *(int *)this;
    *(uint *)(iVar2 + uVar5 * 4) =
         *(uint *)(iVar2 + -4 + uVar5 * 4) >> 0x1f | *(int *)(iVar2 + uVar5 * 4) * 2;
  }
  bVar6 = (byte)param_1 & 0x1f;
  uVar5 = -1 << bVar6;
  if ((char)param_3 == '\0') {
    uVar7 = 0;
  }
  else {
    uVar7 = 1 << bVar6;
  }
  puVar1 = ((uint *)GEN_TOP((*(int *)this + (param_1 >> 5) * 4)));
  uVar3 = *puVar1;
  uVar4 = (uVar3 & uVar5) * 2;
  *puVar1 = ~uVar5 & uVar3 | uVar4 | uVar7;
  return uVar4;
}

/* ref: FUN_006b0a50 */
unsigned int F_006b0a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b0a50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = -1 << ((byte)param_1 & 0x1f);
  uVar3 = param_1 >> 5;
  puVar1 = (uint *)(*(int *)this + uVar3 * 4);
  uVar2 = *puVar1;
  *puVar1 = ~uVar4 & uVar2 | uVar2 >> 1 & uVar4;
  while (uVar3 = uVar3 + 1, uVar3 <= param_2 - 1U >> 5) {
    puVar1 = (uint *)(*(int *)this + uVar3 * 4 + -4);
    *puVar1 = *puVar1 | *(int *)(*(int *)this + uVar3 * 4) << 0x1f;
    puVar1 = (uint *)(*(int *)this + uVar3 * 4);
    *puVar1 = *puVar1 >> 1;
  }
  return 0;
}

/* ref: FUN_006b0ae0 */
uint F_006b0ae0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0ae0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b0af0 */
uint F_006b0af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b0af0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_006b0b50 */
unsigned int F_006b0b50(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6b0b50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x4d0) = param_2;
  return 0;
}

/* ref: FUN_006b0b70 */
uint F_006b0b70(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0b70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b0b90 */
uint F_006b0b90(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0b90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b0ba0 */
uint F_006b0ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b0ba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_006b0bc0 */
uint F_006b0bc0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0bc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b0bd0 */
unsigned int F_006b0bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b0bd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_006b0c20 */
uint F_006b0c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6b0c20u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = param_2;
  while (param_3 < iVar2) {
    iVar4 = (iVar2 + -1) / 2;
    puVar1 = (undefined4 *)(param_1 + iVar4 * 8);
    uVar3 = (*param_5)(puVar1,param_4);
    if ((char)uVar3 == '\0') break;
    *(undefined4 *)(param_1 + iVar2 * 8) = *puVar1;
    *(undefined4 *)(param_1 + 4 + iVar2 * 8) = puVar1[1];
    iVar2 = iVar4;
  }
  *(undefined4 *)(param_1 + iVar2 * 8) = *param_4;
  uVar3 = param_4[1];
  *(uint *)(param_1 + 4 + iVar2 * 8) = uVar3;
  return uVar3;
}

/* ref: FUN_006b0c90 */
uint F_006b0c90(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0c90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b0ca0 */
uint F_006b0ca0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0ca0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: Client::Graphics::Scene::Object::vf3 */
byte F_006b0cc0(void)
{
  GEN_ENTER(0x6b0cc0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_006b0ce0 */
uint F_006b0ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b0ce0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x24) & 3 | param_2;
  *(uint *)(in_ecx + 0x24) = uVar1;
  return uVar1;
}

/* ref: FUN_006b0d10 */
uint F_006b0d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b0d10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x28) = param_2;
  return param_2;
}

/* ref: FUN_006b0d80 */
byte F_006b0d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b0d80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x65) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_006b0de0 */
uint F_006b0de0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6b0de0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0xc0);
  *(float *)(uVar1 + 0xa4) = param_2;
  return uVar1;
}

/* ref: FUN_006b0e20 */
uint F_006b0e20(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6b0e20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0xc0);
  *(float *)(uVar1 + 0xac) = param_2;
  return uVar1;
}

/* ref: FUN_006b0e50 */
uint F_006b0e50(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6b0e50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0xc0);
  *(float *)(uVar1 + 0xb0) = param_2;
  return uVar1;
}

/* ref: FUN_006b0e70 */
uint F_006b0e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b0e70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x60) = *param_2;
  *(undefined4 *)(in_ecx + 100) = param_2[1];
  *(undefined4 *)(in_ecx + 0x68) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_006b0ea0 */
uint F_006b0ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b0ea0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x70) = *param_2;
  *(undefined4 *)(in_ecx + 0x74) = param_2[1];
  *(undefined4 *)(in_ecx + 0x78) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_006b0ed0 */
uint F_006b0ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b0ed0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0xc0);
  *(undefined1 *)(uVar1 + 0xb8) = (undefined1)param_2;
  return uVar1;
}

/* ref: FUN_006b0ef0 */
uint F_006b0ef0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6b0ef0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0xc0);
  *(float *)(uVar1 + 0xb4) = param_2;
  return uVar1;
}

/* ref: FUN_006b0f20 */
uint F_006b0f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b0f20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  *(uint *)((int)this + param_1 * 4 + 0x34) = param_2;
  return param_2;
}

/* ref: FUN_006b0f40 */
unsigned int F_006b0f40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b0f40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((param_1 * 0x40 + 0x10 + *(int *)((int)this + 0x4c))));
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[4] = param_2[4];
  puVar1[5] = param_2[5];
  puVar1[6] = param_2[6];
  puVar1[7] = param_2[7];
  puVar1[8] = param_2[8];
  puVar1[9] = param_2[9];
  puVar1[10] = param_2[10];
  return 0;
}

/* ref: FUN_006b0fd0 */
ushort F_006b0fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b0fd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  ushort uVar1;
  uint uVar2;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  uVar1 = *((ushort *)GEN_TOP((uVar2 + 6 + (param_1 / *(ushort *)(uVar2 + 2)) * 2)));
  if (uVar1 == 0xffff) {
    return 0;
  }
  return *((ushort *)GEN_TOP(((uVar2 - 6) +
          ((uint)*(ushort *)(uVar2 + 4) +
          ((uint)uVar1 + param_1 % (uint)*(ushort *)(uVar2 + 2)) * (uint)*(byte *)(uVar2 + 1) +
          param_2 + (param_2 / 100 + (param_2 / 10) * -2) * 5) * 2)));
}

/* ref: FUN_006b1070 */
uint F_006b1070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b1070u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  return uVar1 + (param_2 + -2 + (param_3 + param_1 * 2) * 2) * 0x1400;
}

/* ref: FUN_006b10a0 */
uint F_006b10a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b10a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  return uVar1 + 0x1b5d0 + param_1 * 0x230;
}

/* ref: FUN_006b10c0 */
byte F_006b10c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b10c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (*(uint *)((*(int *)&gen_args[0]) + 4) & (*(uint *)&gen_args[1])) != 0;
}

/* ref: FUN_006b1150 */
uint F_006b1150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1150u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 1: ;
    return *(uint *)(in_ecx + 0x68);
  case 2: ;
    return *(uint *)(in_ecx + 0x70);
  case 3: ;
    return *(uint *)(in_ecx + 0x6c);
  case 4: ;
    return *(uint *)(in_ecx + 0x74);
  default: ;
    return 0;
  }
}

/* ref: FUN_006b11b0 */
uint F_006b11b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b11b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  uVar1 = (*(ushort *)(uVar1 + 2) >> 1 & 0x55555555) + (*(ushort *)(uVar1 + 2) & 0x55555555);
  uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
  uVar1 = (uVar1 >> 4 & 0xf0f0f0f) + (uVar1 & 0xf0f0f0f);
  return (uVar1 >> 8) + (uVar1 & 0xff00ff);
}

/* ref: FUN_006b1210 */
uint F_006b1210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  uVar1 = (uint)*(ushort *)(uVar1 + 2) & (1 << ((char)param_1 + 1U & 0x1f)) - 1U;
  uVar1 = (uVar1 >> 1 & 0x55555555) + (uVar1 & 0x55555555);
  uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
  uVar1 = (uVar1 >> 4 & 0xf0f0f0f) + (uVar1 & 0xf0f0f0f);
  return ((uVar1 >> 8) + (uVar1 & 0xff00ff)) - 1;
}

/* ref: FUN_006b12f0 */
unsigned int F_006b12f0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6b12f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x290) = param_2;
  return 0;
}

/* ref: FUN_006b1340 */
ushort F_006b1340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1340u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x72) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_006b1350 */
unsigned int F_006b1350(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6b1350u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x294) = param_2;
  return 0;
}

/* ref: FUN_006b1390 */
uint F_006b1390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1390u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x7c) + param_2 * 4)));
}

/* ref: FUN_006b13d0 */
uint F_006b13d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b13d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xdc) + 0x10 + param_1 * 0x40)));
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[4] = param_2[4];
  puVar1[5] = param_2[5];
  puVar1[6] = param_2[6];
  puVar1[7] = param_2[7];
  puVar1[8] = param_2[8];
  puVar1[9] = param_2[9];
  puVar1[10] = param_2[10];
  return (uint)puVar1;
}

/* ref: FUN_006b1440 */
float10 F_006b1440(unsigned int gen_a0)
{
  GEN_ENTER(0x6b1440u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float10 fVar1;
  
  if (*(int *)(in_ecx + 0x160) != 0) {
    fVar1 = (float10)((float)GEN_TOF(((float10)1 - (float10)*((float *)GEN_TOP((*(int *)(in_ecx + 0x160) + 0x7c))))));
    return (float10)(float)((float10)1 - fVar1 * fVar1);
  }
  return (float10)REFG(float, 0x1087f04);
}

/* ref: FUN_006b1530 */
uint F_006b1530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1530u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + param_2 * 4);
}

/* ref: FUN_006b1540 */
uint F_006b1540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1540u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_006b1550 */
uint F_006b1550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1550u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_006b15b0 */
uint F_006b15b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b15b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_006b15c0 */
uint F_006b15c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b15c0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_006b15d0 */
uint F_006b15d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b15d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)((int)this + 8);
  *param_1 = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(param_1 + 1) = uVar1;
  return (uint)param_1;
}

/* ref: FUN_006b1600 */
ushort F_006b1600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1600u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 10) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_006b1620 */
byte F_006b1620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1620u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xa0) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_006b1700 */
ushort F_006b1700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1700u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x82) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_006b1720 */
ushort F_006b1720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1720u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x84) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_006b1740 */
byte F_006b1740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1740u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x94) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_006b1760 */
ushort F_006b1760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1760u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x86) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_006b17a0 */
byte F_006b17a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b17a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x60) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_006b1800 */
unsigned int F_006b1800(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6b1800u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x88) = param_2;
  return 0;
}

/* ref: FUN_006b1830 */
byte F_006b1830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1830u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x94) = (byte)param_2;
  *(undefined1 *)(in_ecx + 0x96) = 1;
  return (byte)param_2;
}

/* ref: FUN_006b1850 */
byte F_006b1850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1850u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x95) = (byte)param_2;
  *(undefined1 *)(in_ecx + 0x96) = 1;
  return (byte)param_2;
}

/* ref: FUN_006b18d0 */
unsigned int F_006b18d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x6b18d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  param_1[2] = (undefined4)gen_fl2bits(param_4);
  param_1[3] = (undefined4)gen_fl2bits(param_5);
  *param_1 = param_2;
  param_1[4] = (undefined4)gen_fl2bits(param_6);
  param_1[1] = param_3;
  param_1[5] = (undefined4)gen_fl2bits(param_7);
  param_1[6] = param_8;
  return 0;
}

/* ref: FUN_006b1930 */
uint F_006b1930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1930u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0xf0) + param_2 * 4)));
}

/* ref: FUN_006b1960 */
uint F_006b1960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1960u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x20 + 0xb0 + in_ecx;
}

/* ref: FUN_006b19b0 */
uint F_006b19b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b19b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xe0a4) = param_2;
  return param_2;
}

/* ref: FUN_006b19d0 */
uint F_006b19d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b19d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x4c) = *param_1;
  *(undefined4 *)((int)this + 0x50) = param_1[1];
  uVar1 = param_1[2];
  *(uint *)((int)this + 0x54) = uVar1;
  return uVar1;
}

/* ref: FUN_006b19f0 */
unsigned int F_006b19f0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6b19f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x58) = param_2;
  return 0;
}

/* ref: FUN_006b1a20 */
uint F_006b1a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x5c) = *param_1;
  *(undefined4 *)((int)this + 0x60) = param_1[1];
  uVar1 = param_1[2];
  *(uint *)((int)this + 100) = uVar1;
  return uVar1;
}

/* ref: Client::Graphics::Scene::ResidentResourceManager::ResourceList::vf0 */
uint F_006b1a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b2afc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Singleton_VWorld_Scene_Graphics_Client_Graphics::vf0 */
uint F_006b1af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10b2a6c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Singleton_VCameraManager_Scene_Graphics_Client_Graphics::vf0 */
uint F_006b1b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10b2a74));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Singleton_VCharacterUtility_Scene_Graphics_Client_Graphics::vf0 */
uint F_006b1b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10b2a7c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Singleton_VGrassManager_Scene_Graphics_Client_Graphics::vf0 */
uint F_006b1b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10b2a84))
  ;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Singleton_VResidentResourceManager_Scene_Graphics_Client_Graphics::vf0 */
uint F_006b1bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10b2a8c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_006b1c00 */
uint F_006b1c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1c00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x48,0xcb);
  return (uint)uVar1;
}

/* ref: FUN_006b1c30 */
byte F_006b1c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_006b1c50 */
byte F_006b1c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_006b1c70 */
uint F_006b1c70(unsigned int gen_a0)
{
  GEN_ENTER(0x6b1c70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x44;
}

/* ref: FUN_006b1c80 */
uint F_006b1c80(unsigned int gen_a0)
{
  GEN_ENTER(0x6b1c80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x45;
}

/* ref: FUN_006b1c90 */
uint F_006b1c90(unsigned int gen_a0)
{
  GEN_ENTER(0x6b1c90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b1ca0 */
uint F_006b1ca0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b1ca0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_006b1cb0 */
uint F_006b1cb0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b1cb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_006b1cc0 */
uint F_006b1cc0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b1cc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_006b1cd0 */
uint F_006b1cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b1cd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x45)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x45);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_006b1cf0 */
uint F_006b1cf0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b1cf0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x45);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x45);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_006b1d20 */
uint F_006b1d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b1d20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006b1d30 */
unsigned int F_006b1d30(unsigned int gen_a0)
{
  GEN_ENTER(0x6b1d30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x45) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x45) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x45);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x45);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x45);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x45);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_006b1d80 */
uint F_006b1d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1d80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *in_ecx;
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_006b1da0 */
uint F_006b1da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1da0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(in_ecx + 4);
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_006b1dc0 */
uint F_006b1dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1dc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(in_ecx + 8);
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_006b1de0 */
uint F_006b1de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b1de0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  
  uVar1 = 0xffff;
  if (param_2 < 0x10) {
    uVar1 = (uint)(ushort)((1 << ((byte)param_2 & 0x1f)) - 1);
  }
  return *(ushort *)((int)(uintptr_t)this) >> ((byte)param_1 & 0x1f) & uVar1;
}

/* ref: FUN_006b1e10 */
uint F_006b1e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1e10u, gen_a0, gen_a1, 0u, 0u);
  ushort * in_ecx = (ushort *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *in_ecx >> ((byte)param_2 & 0x1f) & 1;
}

/* ref: FUN_006b1e30 */
unsigned int F_006b1e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1e30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (byte)*(undefined4 *)((int)this + 4);
  **(ushort * PTR32 *)this =
       ~(1 << (bVar1 & 0x1f)) & **(ushort * PTR32 *)this |
       (ushort)((char)param_1 != '\0') << (bVar1 & 0x1f);
  return 0;
}

/* ref: FUN_006b1e70 */
uint F_006b1e70(unsigned int gen_a0)
{
  GEN_ENTER(0x6b1e70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b1e80 */
uint F_006b1e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1e80u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (*(uint *)&gen_args[0]) & (*(uint *)&gen_args[1]);
}

/* ref: FUN_006b1e90 */
uint F_006b1e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b1e90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_006b1eb0 */
uint F_006b1eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_006b2f30((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_006b1ef0 */
unsigned int F_006b1ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  param_1[3] = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xa8) + 4))) + 8 + *(int *)((int)this + 0xa8))));
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return 0;
}

/* ref: FUN_006b1f20 */
uint F_006b1f20(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6b1f20u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float in_xmm1 = (float)gen_a1;
  float in_xmm2 = (float)gen_a2;
  float in_xmm3 = (float)gen_a3;
  float in_xmm7 = (float)gen_a4;
  uint param_6 = (uint)gen_a5;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = *(float *)param_6;
  fVar3 = (float10)REFG(double, 0x1088108);
  fVar2 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)(float)((float10)fVar1 * fVar3));
  *in_ecx = (float)fVar2;
  in_ecx[1] = 0.0;
  in_ecx[2] = 0.0;
  fVar3 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)(float)((float10)fVar1 * fVar3));
  in_ecx[3] = (float)fVar3;
  F_0054d030(in_ecx,in_xmm1,in_xmm2,in_xmm3,in_xmm7,*(float *)(param_6 + 4));
  F_0054d0f0(in_ecx,in_xmm1,in_xmm2,in_xmm3,in_xmm7,*(float *)(param_6 + 8));
  return (uint)in_ecx;
}

/* ref: FUN_006b1f90 */
uint F_006b1f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  F_004f5e90(this,&(*(float *)(gen_frame + 0x0)),param_1);
  fVar2 = (float10)(*(float *)(gen_frame + 0x0));
  (*(float *)(gen_frame + 0x0)) = (float)(fVar2 - (float10)*param_1);
  fVar3 = (float10)(*(float *)(gen_frame + 0x4));
  (*(float *)(gen_frame + 0x4)) = (float)(fVar3 - (float10)param_1[1]);
  fVar4 = (float10)(*(float *)(gen_frame + 0x8));
  (*(float *)(gen_frame + 0x8)) = (float)(fVar4 - (float10)param_1[2]);
  fVar2 = (float10)(float)(fVar2 - (float10)*param_1);
  fVar3 = (float10)(float)(fVar3 - (float10)param_1[1]);
  fVar4 = (float10)(float)(fVar4 - (float10)param_1[2]);
  fVar1 = ((float)GEN_TOF((fVar4 * fVar4 + (fVar3 * fVar3 + fVar2 * fVar2))));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  if ((float10)fVar1 <= (float10)param_1[3] * (float10)param_1[3]) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006b2020 */
uint F_006b2020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2020u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  undefined4 * puVar5;
  float10 fVar6;
  float10 fVar7;
  
  uVar4 = *(*(uint * PTR32 *)&gen_args[1]);
  fVar6 = (float10)*(double *)&REFG(undefined, 0x1088100);
  (*(uint * PTR32 *)&gen_args[1]) = (uint *)(uVar4 >> 0x18);
  fVar1 = ((float)GEN_TOF(((float10)(uVar4 & 0xff) / fVar6)));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)(uVar4 >> 8 & 0xff) / fVar6)));
  (*(float *)(gen_frame + 0x20)) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)(uVar4 >> 0x10 & 0xff) / fVar6)));
  (*(float *)(gen_frame + 0x24)) = fVar3;
  (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((float10)(int)(*(uint * PTR32 *)&gen_args[1]) / fVar6)));
  fVar7 = (float10)fVar1;
  (*(float *)(gen_frame + 0xc)) = (float)(fVar7 * fVar7);
  fVar7 = (float10)fVar2;
  (*(float *)(gen_frame + 0x10)) = (float)(fVar7 * fVar7);
  fVar7 = (float10)fVar3;
  (*(float *)(gen_frame + 0x14)) = (float)(fVar7 * fVar7);
  (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)(int)(*(uint * PTR32 *)&gen_args[1]) / fVar6)));
  puVar5 = (undefined4 *)F_00413ab0(&(*(uint * PTR32 *)&gen_args[1]),&(*(float *)(gen_frame + 0xc)));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar5;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_006b2100 */
unsigned int F_006b2100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = uVar1;
  *(undefined4 *)((int)this + 8) = uVar2;
  *(undefined4 *)((int)this + 0xc) = uVar3;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)((int)this + 0x10) = *param_2;
  *(undefined4 *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x18) = uVar2;
  *(undefined4 *)((int)this + 0x1c) = uVar3;
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1138afc);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138af8);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1138af4);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)&REFG(undefined, 0x1138af0);
  *(undefined4 *)((int)this + 0x24) = uVar1;
  *(undefined4 *)((int)this + 0x28) = uVar2;
  *(undefined4 *)((int)this + 0x2c) = uVar3;
  return 0;
}

/* ref: FUN_006b2130 */
uint F_006b2130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)this = CONCAT22((undefined2)param_1,(undefined2)param_2);
  return (uint)this;
}

/* ref: FUN_006b2160 */
unsigned int F_006b2160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2160u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return 0;
}

/* ref: FUN_006b2190 */
uint F_006b2190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  int iVar2;
  undefined * this_00;
  
  if ((param_1 & 2) != 0) {
    piVar1 = (int *)((int)this + -4);
    iVar2 = *piVar1;
    this_00 = (undefined *)((int)this + iVar2 * 0xc);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      this_00 = (undefined *)((int)this_00 + -0xc);
      F_0068b9a0(this_00);
    }
    if ((param_1 & 1) != 0) {
      F_00406b30(piVar1);
    }
    return (uint)piVar1;
  }
  F_0068b9a0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_006b21f0 */
byte F_006b21f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b21f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this)));
  return (byte)(*((uint *)GEN_TOP((uVar1 + 4 + ((param_1 >> 5) + *piVar2) * 4))) >> ((byte)param_1 & 0x1f)) & 1
  ;
}

/* ref: FUN_006b2230 */
uint F_006b2230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this)));
  iVar1 = *piVar3;
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  return uVar4 + *((int *)GEN_TOP((uVar2 + 0x14 + (iVar1 + (param_2 + param_1 * 4) * 8) * 4)));
}

/* ref: FUN_006b2270 */
float F_006b2270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this)));
  return *((float *)GEN_TOP((uVar1 + 0x18 + (*piVar2 + (param_2 + param_1 * 4) * 8) * 4)));
}

/* ref: FUN_006b22b0 */
uint F_006b22b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b22b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this)));
  return uVar1 + 0x1c + (*piVar2 + (param_2 + param_1 * 4) * 8) * 4;
}

/* ref: FUN_006b22f0 */
uint F_006b22f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b22f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this)));
  return uVar1 + 0x28 + (*piVar2 + (param_2 + param_1 * 4) * 8) * 4;
}

/* ref: Client::Graphics::Scene::AttachUtility::vf0 */
uint F_006b2340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10b2b58));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_006b23a0 */
uint F_006b23a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b23a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint uVar1;
  char * pcVar2;
  undefined * pvVar3;
  char * pcVar4;
  
  uVar1 = *(uint *)((int)this + 0x10);
  if (param_3 == 0) {
    if (param_2 < uVar1) {
      return param_2;
    }
  }
  else {
    if (param_3 <= uVar1) {
      uVar1 = uVar1 - param_3;
      if (param_2 < uVar1) {
        uVar1 = param_2;
      }
      pvVar3 = this;
      if (0xf < *(uint *)((int)this + 0x14)) {
        pvVar3 = *(undefined * PTR32 *)this;
      }
      pcVar4 = (char *)((int)pvVar3 + uVar1);
      while( true ) {
        if ((*pcVar4 == *param_1) && (uVar1 = F_0040d320(pcVar4,param_1,param_3), uVar1 == 0)) {
          if (0xf < *(uint *)((int)this + 0x14)) {
            this = *(undefined * PTR32 *)this;
          }
          return (int)pcVar4 - (int)this;
        }
        pcVar2 = (char *)F_004e18e0(this);
        if (pcVar4 == pcVar2) break;
        pcVar4 = pcVar4 + -1;
      }
    }
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

/* ref: FUN_006b2430 */
uint F_006b2430(unsigned int gen_a0)
{
  GEN_ENTER(0x6b2430u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b2440 */
uint F_006b2440(unsigned int gen_a0)
{
  GEN_ENTER(0x6b2440u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_006b2450 */
uint F_006b2450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006b2480 */
uint F_006b2480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006b2490 */
byte F_006b2490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_006b24f0 */
uint F_006b24f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b24f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006b2500 */
byte F_006b2500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_006b2520 */
uint F_006b2520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006b2530 */
byte F_006b2530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_006b2560 */
uint F_006b2560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2560u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_006b2580 */
uint F_006b2580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
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

/* ref: FUN_006b25c0 */
uint F_006b25c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b25c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
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

/* ref: FUN_006b2600 */
uint F_006b2600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
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

/* ref: FUN_006b2640 */
uint F_006b2640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3;
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

/* ref: FUN_006b2680 */
uint F_006b2680(unsigned int gen_a0)
{
  GEN_ENTER(0x6b2680u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b26b0 */
uint F_006b26b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b26b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),param_1,0x10);
  return uVar1;
}

/* ref: FUN_006b26d0 */
uint F_006b26d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b26d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),param_1,0x10);
  return uVar1;
}

/* ref: FUN_006b26f0 */
unsigned int F_006b26f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b26f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar1 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x15) == '\0') {
    *(int *)(*piVar1 + 4) = param_1;
  }
  piVar1[1] = *(int *)(param_1 + 4);
  if (param_1 == *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar1;
    *piVar1 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar1;
    return 0;
  }
  piVar2 = *(int * PTR32 *)(param_1 + 4);
  if (param_1 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar1;
    return 0;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_1;
  *(int * PTR32 *)(param_1 + 4) = piVar1;
  return 0;
}

/* ref: FUN_006b2760 */
uint F_006b2760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006b2770 */
uint F_006b2770(unsigned int gen_a0)
{
  GEN_ENTER(0x6b2770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006b0160(this);
  return (uint)this;
}

/* ref: FUN_006b2780 */
uint F_006b2780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(gen_code32 *)this = ((code *)REFP(0x6b0490));
  *(uint *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return param_1;
}

/* ref: FUN_006b27a0 */
uint F_006b27a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b27a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(gen_code32 *)this = ((code *)REFP(0x6b04b0));
  *(uint *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return param_1;
}

/* ref: FUN_006b27c0 */
uint F_006b27c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b27c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(gen_code32 *)this = ((code *)REFP(0x6b04d0));
  *(uint *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return param_1;
}

/* ref: FUN_006b27e0 */
uint F_006b27e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b27e0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_006b2810 */
unsigned int F_006b2810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_006b2830 */
uint F_006b2830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2830u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_006b2850 */
unsigned int F_006b2850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_006b2870 */
unsigned int F_006b2870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_006b2890 */
unsigned int F_006b2890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2890u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_006b28b0 */
unsigned int F_006b28b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b28b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_006b28d0 */
unsigned int F_006b28d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b28d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_006b28f0 */
unsigned int F_006b28f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b28f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_006b2910 */
unsigned int F_006b2910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_006b2930 */
uint F_006b2930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2930u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_006b2960 */
unsigned int F_006b2960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_006b2980 */
uint F_006b2980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2980u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_006b29e0 */
unsigned int F_006b29e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b29e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  
  bVar1 = (byte)*(undefined4 *)((int)this + 4);
  **(uint * PTR32 *)this =
       (*(uint *)*param_1 >> ((byte)param_1[1] & 0x1f) & 1) << (bVar1 & 0x1f) |
       ~(1 << (bVar1 & 0x1f)) & **(uint * PTR32 *)this;
  return 0;
}

/* ref: FUN_006b2a30 */
uint F_006b2a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2a30u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  return *in_ecx - *param_2 >> 3;
}

/* ref: FUN_006b2a50 */
uint F_006b2a50(unsigned int gen_a0)
{
  GEN_ENTER(0x6b2a50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1,0x10);
  return uVar1;
}

/* ref: FUN_006b2a70 */
uint F_006b2a70(unsigned int gen_a0)
{
  GEN_ENTER(0x6b2a70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

/* ref: FUN_006b2a90 */
uint F_006b2a90(unsigned int gen_a0)
{
  GEN_ENTER(0x6b2a90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

/* ref: FUN_006b2ab0 */
uint F_006b2ab0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b2ab0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

/* ref: FUN_006b2ae0 */
uint F_006b2ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2ae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_006b2b00 */
unsigned int F_006b2b00(unsigned int gen_a0)
{
  GEN_ENTER(0x6b2b00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x45) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return 0;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x45) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x45) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x45) == '\0');
      *(int *)this = iVar4;
      return 0;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x45);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x45);
    }
    if (*(char *)(*(int *)this + 0x45) != '\0') {
      return 0;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return 0;
}

/* ref: FUN_006b2b60 */
unsigned int F_006b2b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2b60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_006b08f0(this);
  return 0;
}

/* ref: FUN_006b2b70 */
uint F_006b2b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2b70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x6b0830));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_006b2b90 */
uint F_006b2b90(unsigned int gen_a0)
{
  GEN_ENTER(0x6b2b90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b2ba0 */
uint F_006b2ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_006b2bb0 */
uint F_006b2bb0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b2bb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b2bc0 */
uint F_006b2bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_006b2c10 */
byte F_006b2c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_006b2c30 */
uint F_006b2c30(unsigned int gen_a0)
{
  GEN_ENTER(0x6b2c30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006b1d30(this);
  return (uint)this;
}

/* ref: FUN_006b2c50 */
uint F_006b2c50(unsigned int gen_a0)
{
  GEN_ENTER(0x6b2c50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x1fU >> 3 & 0x1ffffffc;
}

/* ref: FUN_006b2c70 */
uint F_006b2c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  
  pvVar1 = F_00c48350(*(undefined * PTR32 *)this,0,param_1 + 0x1fU >> 3 & 0x1ffffffc);
  return (uint)pvVar1;
}

/* ref: FUN_006b2ca0 */
uint F_006b2ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2ca0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006b2cd0 */
uint F_006b2cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2cd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_006b2cf0 */
unsigned int F_006b2cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return 0;
}

/* ref: FUN_006b2d20 */
unsigned int F_006b2d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6b2d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = param_2;
  while( true ) {
    iVar4 = iVar1 * 2 + 2;
    if (param_3 <= iVar4) break;
    iVar2 = param_1 + iVar4 * 8;
    uVar3 = (*param_5)(iVar2,iVar2 + -8);
    if ((char)uVar3 != '\0') {
      iVar4 = iVar1 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar1 * 8) = *(undefined4 *)(param_1 + iVar4 * 8);
    *(undefined4 *)(param_1 + 4 + iVar1 * 8) = *(undefined4 *)(param_1 + 4 + iVar4 * 8);
    iVar1 = iVar4;
  }
  if (iVar4 == param_3) {
    *(undefined4 *)(param_1 + iVar1 * 8) = *(undefined4 *)(param_1 + -8 + param_3 * 8);
    *(undefined4 *)(param_1 + 4 + iVar1 * 8) = *(undefined4 *)(param_1 + -4 + param_3 * 8);
    iVar1 = param_3 + -1;
  }
  while (param_2 < iVar1) {
    iVar4 = (iVar1 + -1) / 2;
    uVar3 = (*param_5)(param_1 + iVar4 * 8,param_4);
    if ((char)uVar3 == '\0') break;
    *(undefined4 *)(param_1 + iVar1 * 8) = *(undefined4 *)(param_1 + iVar4 * 8);
    *(undefined4 *)(param_1 + 4 + iVar1 * 8) = *(undefined4 *)(param_1 + 4 + iVar4 * 8);
    iVar1 = iVar4;
  }
  *(undefined4 *)(param_1 + iVar1 * 8) = *param_4;
  *(undefined4 *)(param_1 + 4 + iVar1 * 8) = param_4[1];
  return 0;
}

/* ref: FUN_006b2e00 */
unsigned int F_006b2e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2e00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

