#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00ac3470 */
uint F_00ac3470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xac3470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined * pvVar5;
  
  uVar4 = F_00ab1ed0(param_1);
  pvVar5 = (undefined *)F_00ac29c0(this,1,param_1);
  if ((pvVar5 != (undefined *)0xffffffff) && (bVar1 = *(byte *)(uVar4 + 0x1c), 1 < bVar1)) {
    if (bVar1 < 4) {
      iVar2 = (int)((int)(uintptr_t)pvVar5) * 5;
      pvVar5 = (undefined *)((int)this + (int)((int)(uintptr_t)pvVar5) * 0x14);
      *(undefined4 *)((int)pvVar5 + 0xf8) = 0;
      uVar3 = REFG(float, 0x10947a4);
      *((undefined1 *)GEN_TOP(((int)this + (iVar2 + 0x3c) * 4))) = 1;
      *(undefined4 *)((int)pvVar5 + 0xfc) = uVar3;
    }
    else if (bVar1 == 4) {
      *((undefined1 *)GEN_TOP(((int)this + ((int)((int)(uintptr_t)pvVar5) * 5 + 0x3c) * 4))) = 1;
      *(undefined4 *)((int)this + (int)((int)(uintptr_t)pvVar5) * 0x14 + 0xf8) = 0;
      uVar4 = F_00ac1640(1,param_1,1);
      *(float *)((int)this + (int)((int)(uintptr_t)pvVar5) * 0x14 + 0xfc) =
           (float)((float10)(int)uVar4 / (float10)*(double *)&REFG(undefined, 0x10912a8));
      return uVar4;
    }
  }
  return (uint)pvVar5;
}

/* ref: FUN_00ac3520 */
uint F_00ac3520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xac3520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint * puVar6;
  
  uVar4 = F_00ab21a0(param_1);
  uVar5 = 0;
  if (uVar4 != 0) {
    bVar1 = *(byte *)(uVar4 + 0x3e);
    uVar5 = F_00ab1c90(*(undefined4 *)&REFG(undefined2, 0x1379c78));
    if (uVar5 != 0) {
      cVar2 = *(char *)(uVar5 + 0x2a);
      uVar5 = CONCAT31((int3)(uVar5 >> 8),cVar2);
      if (cVar2 == '\0') {
        return uVar5;
      }
      if (cVar2 == '\x02') {
        return uVar5;
      }
    }
    uVar4 = 1;
    uVar5 = F_00aafad0();
    if (1 < uVar5) {
      do {
        uVar5 = F_00ab1ed0(uVar4);
        if ((((int)*(char *)(uVar5 + 0x2b) == param_1) ||
            ((int)*(char *)(uVar5 + 0x2b) == (uint)bVar1)) &&
           ((int)(uint)*(byte *)(uVar5 + 0x1f) <= param_2)) {
          F_00ac3470(this,uVar4);
        }
        uVar4 = uVar4 + 1;
        uVar5 = F_00aafad0();
      } while (uVar4 < uVar5);
    }
    uVar5 = F_00a68280(&REFG(undefined1, 0x14ab070),0xffffffff,1);
    uVar5 = F_00ab2260(uVar5 & 0xffff);
    if (uVar5 == 0) {
      param_1 = 0;
      uVar5 = 0;
    }
    else {
      bVar1 = *(byte *)(uVar5 + 0x1e);
      uVar5 = F_00ab21a0((uint)REFG(undefined1, 0x14ab0d4));
      if (uVar5 == 0) {
        param_1 = 0;
      }
      else {
        param_1 = (uint)bVar1;
        if (*(char *)(uVar5 + 0x45) != '\0') {
          uVar5 = bVar1 / 2;
          param_1 = uVar5;
        }
      }
    }
    uVar4 = 0;
    if (param_1 != 0) {
      puVar6 = (uint *)((int)this + 200);
      do {
        if (((uVar4 < 10) && (uVar3 = *puVar6, uVar3 != 0)) &&
           (uVar5 = F_00aafad0(), uVar3 < uVar5)) {
          uVar5 = F_00ac3470(this,uVar3);
        }
        uVar4 = uVar4 + 1;
        puVar6 = puVar6 + 1;
      } while (uVar4 < param_1);
    }
  }
  return uVar5;
}

/* ref: FUN_00ac3640 */
byte F_00ac3640(unsigned int gen_a0)
{
  GEN_ENTER(0xac3640u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  bVar1 = 1;
  if ((*(int *)(in_ecx + 0x70) == 0) && (*(char *)(in_ecx + 0x7c) != '\x01')) {
    bVar1 = 0;
  }
  return bVar1;
}

/* ref: FUN_00ac3660 */
unsigned int F_00ac3660(unsigned int gen_a0)
{
  GEN_ENTER(0xac3660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)((int)this + 0x80) != (undefined *)0x0) {
    F_009bc530(*(undefined * PTR32 *)((int)this + 0x80),1);
    *(undefined4 *)((int)this + 0x80) = 0;
  }
  if (*(undefined * PTR32 *)((int)this + 0x84) != (undefined *)0x0) {
    F_009bc530(*(undefined * PTR32 *)((int)this + 0x84),1);
    *(undefined4 *)((int)this + 0x84) = 0;
  }
  return 0;
}

/* ref: FUN_00ac36a0 */
byte F_00ac36a0(void)
{
  GEN_ENTER(0xac36a0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00ab1c90(*(undefined4 *)&REFG(undefined2, 0x1379c78));
  if (uVar1 != 0) {
    uVar1 = F_00ab1cc0((uint)*(byte *)(uVar1 + 0x2a));
    if (uVar1 != 0) {
      return *(byte *)(uVar1 + 3);
    }
  }
  return 0;
}

/* ref: FUN_00ac36d0 */
byte F_00ac36d0(void)
{
  GEN_ENTER(0xac36d0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00ab1c90(*(undefined4 *)&REFG(undefined2, 0x1379c78));
  if (uVar1 != 0) {
    uVar1 = F_00ab1cc0((uint)*(byte *)(uVar1 + 0x2a));
    if (uVar1 != 0) {
      return *(byte *)(uVar1 + 4);
    }
  }
  return 0;
}

/* ref: FUN_00ac3720 */
byte F_00ac3720(unsigned int gen_a0)
{
  GEN_ENTER(0xac3720u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((!GEN_ISNAN(*(float *)(in_ecx + 0x7c4)) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
      !(*(float *)(in_ecx + 0x7c4) <= *(float *)&REFG(undefined, 0x1088114))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ac3740 */
byte F_00ac3740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xac3740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  uint uVar6;
  
  uVar6 = (uint)REFG(undefined1, 0x14ab0d4);
  uVar2 = F_00ab1ed0(param_1);
  uVar3 = F_00ab21a0(uVar6);
  if ((param_1 == 3) || (*(char *)(uVar2 + 0x1c) == '\t')) {
    return 1;
  }
  cVar1 = *(char *)(uVar2 + 0x2b);
  if (cVar1 != '\0') {
    if ((int)cVar1 == uVar6) {
      return 1;
    }
    if ((int)cVar1 == (uint)*(byte *)(uVar3 + 0x3e)) {
      return 1;
    }
    uVar2 = F_00ab21d0((uint)*(byte *)(uVar2 + 0x29));
    if ((uVar2 != 0) && (*(char *)(uVar2 + 4 + uVar6) != '\0')) {
      iVar4 = 0;
      piVar5 = (int *)((int)this + 200);
      do {
        if (*piVar5 == param_1) {
          return 1;
        }
        iVar4 = iVar4 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar4 < 10);
    }
  }
  return 0;
}

/* ref: FUN_00ac37d0 */
uint F_00ac37d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xac37d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  float fVar3;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    bVar1 = F_00ab6600(*(undefined4 *)(param_2 + 0x80));
    if (bVar1 != 0) {
      uVar2 = F_00ab4310((uint)bVar1);
      if ((uVar2 == 0) ||
         (((*(char *)(param_1 + 0x188) == '\b' && (*(char *)((int)this + 0x90) == '\x01')) &&
          (*(int *)((int)this + 0xb8) == *(int *)(param_2 + 0x74))))) {
        return 7;
      }
      bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360),8);
      if (bVar1 == 0) {
        return 1;
      }
      fVar3 = F_00a600a0(param_1,param_2);
      if ((float10)*(float *)&REFG(undefined, 0x10e90fc) < (float10)fVar3) {
        return 2;
      }
      if (*(char *)(param_2 + 0x188) == '\x02') {
        return 4;
      }
      if ((*(char *)(uVar2 + 6) != '\x01') && (*(char *)(uVar2 + 6) != '\x02')) {
        return 6;
      }
      return 0;
    }
  }
  return 7;
}

/* ref: FUN_00ac38c0 */
uint F_00ac38c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xac38c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = param_2 - 1;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    uVar1 = F_00a7d4b0(0x287,param_1,param_1,0,0,0,0,0,0,REFG(float, 0x10916ec));
    return uVar1;
  case 1: ;
    uVar1 = F_00a7d4b0(0x288,param_1,param_1,0,0,0,0,0,0,REFG(float, 0x10916ec));
    return uVar1;
  case 2: ;
    uVar1 = F_00a7d4b0(0x289,param_1,param_1,0,0,0,0,0,0,REFG(float, 0x10916ec));
    return uVar1;
  case 3: ;
    uVar1 = F_00a7d4b0(0x28a,param_1,param_1,0,0,0,0,0,0,REFG(float, 0x10916ec));
    return uVar1;
  case 4: ;
    uVar1 = F_00a7d4b0(0x28b,param_1,param_1,0,0,0,0,0,0,REFG(float, 0x10916ec));
    return uVar1;
  case 5: ;
    uVar1 = F_00a7d4b0(0x28c,param_1,param_1,0,0,0,0,0,0,REFG(float, 0x10916ec));
  }
  return uVar1;
}

/* ref: FUN_00ac3a00 */
unsigned int F_00ac3a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xac3a00u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  *(undefined1 *)(param_1 + 0x91) = (undefined1)param_2;
  *(undefined1 *)(param_1 + 0x90) = 1;
  *(undefined4 *)(param_1 + 0xa0) = *param_3;
  *(undefined4 *)(param_1 + 0xa4) = param_3[1];
  *(undefined4 *)(param_1 + 0xa8) = param_3[2];
  *(float *)(param_1 + 0xb0) = param_4;
  *(float *)(param_1 + 0xb4) = param_5;
  *(undefined4 *)(param_1 + 0xb8) = param_6;
  return 0;
}

/* ref: FUN_00ac3a60 */
uint F_00ac3a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xac3a60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined * this_00;
  float * pfVar2;
  uint uVar3;
  float fVar4;
  
  if (((((char)param_3 == '\0') && (*(int *)((int)this + 0xb8) == param_1)) &&
      (REFG(undefined4, 0x1379694) != (undefined *)0x0)) && (*(char *)((int)REFG(undefined4, 0x1379694) + 0x188) == '\b')) {
    bVar1 = F_00906a70(REFG(undefined4, 0x1379694));
    if (bVar1 == 1) {
      return CONCAT31(extraout_var,bVar1);
    }
  }
  this_00 = (undefined *)F_00a64450(&REFG(undefined, 0x14a9a18),param_1);
  uVar3 = 0;
  if (this_00 != (undefined *)0x0) {
    pfVar2 = (float *)F_00a5feb0(this_00);
    (*(float *)(gen_frame + 0x20)) = (float)((float10)*param_2 - (float10)*pfVar2);
    (*(float *)(gen_frame + 0x24)) = (float)((float10)param_2[1] - (float10)pfVar2[1]);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(float *)(gen_frame + 0x28)) = (float)((float10)param_2[2] - (float10)pfVar2[2]);
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(float *)(gen_frame + 0x0)) = (float)((float10)*param_2 - (float10)*pfVar2);
    (*(undefined4 *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x4)) = (float)((float10)param_2[1] - (float10)pfVar2[1]);
    (*(float *)(gen_frame + 0x8)) = (float)((float10)param_2[2] - (float10)pfVar2[2]);
    fVar4 = F_00aae7a0(&(*(float *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x10)));
    (*(float *)(gen_frame + 0x3c)) = fVar4;
    uVar3 = F_00a9f850(this_00,fVar4,0);
  }
  return uVar3;
}

/* ref: FUN_00ac3b40 */
uint F_00ac3b40(unsigned int gen_a0)
{
  GEN_ENTER(0xac3b40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  
  pvVar1 = F_00c48350(this,0,0xc80);
  return (uint)pvVar1;
}

/* ref: FUN_00ac3b60 */
unsigned int F_00ac3b60(void)
{
  GEN_ENTER(0xac3b60u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00ac3bb0 */
uint F_00ac3bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xac3bb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = 0;
  piVar2 = this;
  while ((*piVar2 != param_1 || ((char)piVar2[2] != (char)param_2))) {
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 0x19;
    if (0x1f < iVar1) {
      return 0;
    }
  }
  return (uint)(iVar1 * 100 + (int)this);
}

/* ref: FUN_00ac3c30 */
uint F_00ac3c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xac3c30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  if (param_2 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_2 + 0x98))(param_2);
    if ((char)uVar1 == '\0') {
      return 0;
    }
  }
  if (param_3 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_3 + 0x98))(param_3);
    if ((char)uVar1 == '\0') {
      return 0;
    }
  }
  uVar1 = F_00ab4370(param_1,param_2,param_3,0,0);
  return uVar1;
}

/* ref: FUN_00ac3c90 */
unsigned int F_00ac3c90(unsigned int gen_a0)
{
  GEN_ENTER(0xac3c90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  
  piVar1 = (int *)((int)this + 4);
  iVar2 = 8;
  do {
    if ((piVar1[-1] != 0) && (10 < (uint)(REFG(int, 0x1379c9c) - *piVar1))) {
      piVar1[-1] = 0;
      *(undefined1 *)(piVar1 + 1) = 0;
      *piVar1 = 0;
    }
    if ((piVar1[0x18] != 0) && (10 < (uint)(REFG(int, 0x1379c9c) - piVar1[0x19]))) {
      piVar1[0x18] = 0;
      *(undefined1 *)(piVar1 + 0x1a) = 0;
      piVar1[0x19] = 0;
    }
    if ((piVar1[0x31] != 0) && (10 < (uint)(REFG(int, 0x1379c9c) - piVar1[0x32]))) {
      piVar1[0x31] = 0;
      *(undefined1 *)(piVar1 + 0x33) = 0;
      piVar1[0x32] = 0;
    }
    if ((piVar1[0x4a] != 0) && (10 < (uint)(REFG(int, 0x1379c9c) - piVar1[0x4b]))) {
      piVar1[0x4a] = 0;
      *(undefined1 *)(piVar1 + 0x4c) = 0;
      piVar1[0x4b] = 0;
    }
    piVar1 = piVar1 + 100;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_00ac3d40 */
uint F_00ac3d40(unsigned int gen_a0)
{
  GEN_ENTER(0xac3d40u, gen_a0, 0u, 0u, 0u);
  undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 0x1c) = 0;
  *(undefined4 *)(in_ecx + 0x1a) = 0;
  *(undefined4 *)(in_ecx + 8) = 0xe0000000;
  *(undefined4 *)(in_ecx + 10) = 0;
  *in_ecx = 0;
  *(undefined4 *)(in_ecx + 2) = 0;
  return 0;
}

/* ref: FUN_00ac3d70 */
uint F_00ac3d70(unsigned int gen_a0)
{
  GEN_ENTER(0xac3d70u, gen_a0, 0u, 0u, 0u);
  undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 0x1c) = 0;
  *(undefined4 *)(in_ecx + 0x1a) = 0;
  *(undefined4 *)(in_ecx + 8) = 0xe0000000;
  *(undefined4 *)(in_ecx + 10) = 0;
  *in_ecx = 0;
  *(undefined4 *)(in_ecx + 2) = 0;
  return 0;
}

/* ref: FUN_00ac3da0 */
unsigned int F_00ac3da0(unsigned int gen_a0)
{
  GEN_ENTER(0xac3da0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)(in_ecx + 0x50) = 0;
  *(undefined4 *)(in_ecx + 0x4c) = 0;
  *(undefined2 *)(in_ecx + 0x148) = 0;
  *(undefined4 *)(in_ecx + 0x58) = 0xe0000000;
  *(undefined4 *)(in_ecx + 0x5c) = 0;
  puVar2 = (undefined4 *)(in_ecx + 0x58);
  puVar3 = (undefined4 *)(in_ecx + 0x60);
  for (iVar1 = 0x3a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}

/* ref: FUN_00ac3dd0 */
uint F_00ac3dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xac3dd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint param_6 = (uint)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  *(undefined4 *)(param_1 + 8) = param_7;
  param_1[1] = (undefined1)param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *param_1 = 1;
  *(float *)(param_1 + 0x38) = param_4;
  *(undefined4 *)(param_1 + 0x10) = param_5;
  *(uint *)(param_1 + 0x14) = param_6;
  return param_6;
}

/* ref: FUN_00ac3e10 */
uint F_00ac3e10(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xac3e10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  if (*(uint *)(in_ecx + 0x40) == param_2) {
    *(float *)(in_ecx + 0x38) = param_3;
  }
  return *(uint *)(in_ecx + 0x40);
}

/* ref: FUN_00ac3e30 */
uint F_00ac3e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xac3e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined1 *)((int)this + 0x44) = (undefined1)param_1;
  *(undefined4 *)((int)this + 0x48) = param_2;
  *(uint *)((int)this + 0x40) = param_3;
  return param_3;
}

/* ref: FUN_00ac3e50 */
unsigned int F_00ac3e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xac3e50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int iVar1;
  undefined4 * puVar2;
  
  *(undefined1 *)((int)this + 0x44) = (undefined1)param_1;
  *(undefined4 *)((int)this + 0x48) = param_2;
  *(undefined4 *)((int)this + 0x40) = param_3;
  *(undefined4 *)((int)this + 0x50) = param_6;
  *(undefined4 *)((int)this + 0x4c) = param_7;
  iVar1 = 0;
  *(char *)((int)this + 0x148) = (char)param_5;
  if (0 < param_5) {
    puVar2 = (undefined4 *)((int)this + 0x58);
    do {
      *puVar2 = *(undefined4 *)(param_4 + iVar1 * 8);
      puVar2[1] = *(undefined4 *)(param_4 + 4 + iVar1 * 8);
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 2;
    } while (iVar1 < param_5);
  }
  return 0;
}

/* ref: FUN_00ac4240 */
uint F_00ac4240(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xac4240u, gen_a0, 0u, 0u, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  byte bVar8;
  float10 fVar9;
  float10 fVar10;
  
  fVar1 = *param_4;
  (*(float *)(gen_frame + 0x84)) = fVar1;
  fVar2 = *param_1;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(float *)(gen_frame + 0x88)) = fVar2;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(float *)(gen_frame + 0x90)) = (float)((float10)fVar1 - (float10)fVar2);
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  fVar3 = param_4[2];
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(float *)(gen_frame + 0x8c)) = fVar3;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  fVar4 = param_1[2];
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(float *)(gen_frame + 0xac)) = fVar4;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(float *)(gen_frame + 0x98)) = (float)((float10)fVar3 - (float10)fVar4);
  (*(float *)(gen_frame + 0x58)) = 0.0;
  fVar9 = (float10)(float)((float10)fVar1 - (float10)fVar2);
  (*(float *)(gen_frame + 0x5c)) = 0.0;
  fVar10 = (float10)(float)((float10)fVar3 - (float10)fVar4);
  (*(float *)(gen_frame + 0x60)) = 0.0;
  (*(float *)(gen_frame + 0x64)) = 0.0;
  (*(float *)(gen_frame + 0x68)) = 0.0;
  (*(float *)(gen_frame + 0x6c)) = 0.0;
  fVar5 = (float)(fVar10 * fVar10 + fVar9 * fVar9);
  (*(float *)(gen_frame + 0xcc)) = fVar5;
  fVar5 = ((float)GEN_TOF(SQRT((float10)fVar5)));
  (*(float *)(gen_frame + 0xcc)) = fVar5;
  if (!((float10)param_3 + (float10)param_2 < (float10)fVar5)) {
    fVar5 = param_4[1];
    (*(float *)(gen_frame + 0xcc)) = fVar5;
    fVar6 = param_1[1];
    (*(float *)(gen_frame + 0xbc)) = fVar6;
    (*(float *)(gen_frame + 0xbc)) = (float)((float10)fVar5 - (float10)fVar6);
    fVar7 = ((float)GEN_TOF(ABS((float10)(float)((float10)fVar5 - (float10)fVar6))));
    (*(float *)(gen_frame + 0xbc)) = fVar7;
    if (!((float10)param_3 < (float10)fVar7)) {
      (*(float *)(gen_frame + 0x74)) = fVar5;
      (*(float *)(gen_frame + 0x70)) = fVar1;
      (*(float *)(gen_frame + 0x78)) = fVar3;
      fVar5 = (float)((float10)fVar5 + (float10)*(double *)&REFG(undefined, 0x10928e8));
      (*(float *)(gen_frame + 0x74)) = fVar5;
      (*(float *)(gen_frame + 0xb0)) = fVar2;
      (*(float *)(gen_frame + 0xb4)) = fVar6;
      (*(float *)(gen_frame + 0xb8)) = fVar4;
      (*(float *)(gen_frame + 0xb4)) = (float)((float10)fVar6 + (float10)*(double *)&REFG(undefined, 0x1092098));
      fVar2 = (float)((float10)fVar2 - (float10)fVar1);
      (*(float *)(gen_frame + 0x90)) = fVar2;
      fVar6 = ((float)GEN_TOF(((float10)(float)((float10)fVar6 + (float10)*(double *)&REFG(undefined, 0x1092098)) -
                     (float10)fVar5)));
      (*(float *)(gen_frame + 0x94)) = fVar6;
      fVar4 = (float)((float10)fVar4 - (float10)fVar3);
      (*(float *)(gen_frame + 0x98)) = fVar4;
      fVar7 = ((float)GEN_TOF(((float10)fVar4 * (float10)fVar4 +
                     ((float10)fVar6 * (float10)fVar6 + (float10)fVar2 * (float10)fVar2))));
      (*(float *)(gen_frame + 0xbc)) = fVar7;
      fVar7 = ((float)GEN_TOF(SQRT((float10)fVar7)));
      (*(float *)(gen_frame + 0xac)) = fVar7;
      (*(float *)(gen_frame + 0xcc)) = fVar7;
      if ((GEN_ISNAN(fVar7) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
          ((GEN_ISNAN(fVar7) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar7 == *(float *)&REFG(undefined, 0x1088114))) {
        (*(float *)(gen_frame + 0x58)) = fVar1;
        (*(float *)(gen_frame + 0x5c)) = fVar5;
        (*(float *)(gen_frame + 0x60)) = fVar3;
        (*(float *)(gen_frame + 0xbc)) = (float)((float10)1 / (float10)fVar7);
        fVar9 = (float10)(float)((float10)1 / (float10)fVar7);
        (*(float *)(gen_frame + 0xbc)) = 2.29589e-41;
        (*(float *)(gen_frame + 0xb0)) = (float)(fVar9 * (float10)fVar2);
        (*(float *)(gen_frame + 0xb4)) = (float)((float10)fVar6 * fVar9);
        (*(float *)(gen_frame + 0xb8)) = (float)(fVar9 * (float10)fVar4);
        (*(float *)(gen_frame + 0x64)) = (float)(fVar9 * (float10)fVar2);
        (*(float *)(gen_frame + 0x68)) = (float)((float10)fVar6 * fVar9);
        (*(float *)(gen_frame + 0xb8)) = 2.29589e-41;
        (*(float *)(gen_frame + 0x6c)) = (float)(fVar9 * (float10)fVar4);
        bVar8 = F_005518b0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25e0),&(*(undefined4 *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0x58)),&(*(float *)(gen_frame + 0x64)),
                             (undefined4)gen_fl2bits(fVar7),1,&(*(float *)(gen_frame + 0xb8)));
        if (bVar8 == 1) {
          return 0x232;
        }
      }
      return 0;
    }
  }
  return 0x236;
}

/* ref: FUN_00ac44e0 */
uint F_00ac44e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xac44e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 * param_4 = (undefined1 *)(uintptr_t)gen_a3;
  char cVar1;
  int * this;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined * pvVar6;
  int iVar7;
  
  this = REFG(undefined4, 0x1379694);
  if (REFG(undefined4, 0x1379694) != (int *)0x0) {
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 1: ;
    case 0xd: ;
      uVar2 = F_00ac1a20(param_1,param_2);
      uVar2 = F_00ab1ed0(uVar2);
      if (uVar2 == 0) {
        return 0;
      }
      if (((char)param_3 != '\0') && (*(char *)(uVar2 + 0x1c) != '\t')) {
        if (param_2 == 0x98) {
          uVar3 = F_0071ce90(this,0xa5);
          if ((char)uVar3 != '\0') {
            if (param_4 == (undefined1 *)0x0) {
              return 0;
            }
            *param_4 = 1;
            return 0;
          }
        }
        else if ((((param_2 == 0x90) || (param_2 == 0x94)) || (param_2 == 0x99)) &&
                (uVar3 = F_0071ce90(this,0xa4), (char)uVar3 != '\0')) {
          if (param_4 == (undefined1 *)0x0) {
            return 0;
          }
          *param_4 = 2;
          return 0;
        }
        if ((*(char *)(uVar2 + 0x1c) == '\x02') &&
           (uVar3 = F_0071ce90(this,0xa7), (char)uVar3 != '\0')) {
          if (param_4 == (undefined1 *)0x0) {
            return 0;
          }
          *param_4 = 3;
          return 0;
        }
      }
      uVar4 = F_00ab2260((uint)*(byte *)((int)this + 0x1689));
      uVar3 = (uint)*(ushort *)(uVar2 + 0x14) * 100;
      cVar1 = *(char *)(uVar2 + 0x1c);
      if (cVar1 != '\t') {
        if (cVar1 == '\x03') {
          uVar5 = F_00a68510(&REFG(undefined1, 0x14ab070),0x2d);
        }
        else if (cVar1 == '\x02') {
          uVar5 = F_00a68510(&REFG(undefined1, 0x14ab070),0x2e);
        }
        else {
          uVar5 = *(uint *)(uVar4 + 8);
        }
        iVar7 = (int)((*(int *)(uVar4 + 8) - uVar5) * 0x82) / *(int *)(uVar4 + 0xc) + 1000;
        if (iVar7 < 0) {
          iVar7 = 0;
        }
        uVar4 = F_00a68510(&REFG(undefined1, 0x14ab070),0x2f);
        uVar3 = (int)(uVar4 * ((int)(iVar7 * uVar3) / 1000)) / 100;
        if ((*(char *)(uVar2 + 0x1c) == '\x02') && (*(char *)(uVar2 + 0x25) == '\x01')) {
          pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*this + 0xd4))(this)));
          uVar4 = F_00b7aef0(pvVar6);
          if (uVar4 == 0xfffffffd) {
            uVar3 = (int)uVar3 / 2;
          }
        }
        if ((*(char *)(uVar2 + 0x1c) == '\x02') && (*(char *)(uVar2 + 0x25) == '\x02')) {
          pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*this + 0xd4))(this)));
          uVar2 = F_00b7aef0(pvVar6);
          if (uVar2 == 3) {
            uVar3 = (int)uVar3 / 2;
          }
        }
      }
      return uVar3;
    case 2: ;
      uVar2 = F_00ab24a0(param_2);
      if (uVar2 == 0) {
        uVar2 = F_00ab24a0(0);
      }
      return (uint)*(byte *)(uVar2 + 0xab) * 1000;
    case 3: ;
      uVar2 = F_00ab2510(param_2);
      return (uint)*(byte *)(uVar2 + 0x21) * 1000;
    }
  }
  return 0;
}

/* ref: FUN_00ac4750 */
uint F_00ac4750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xac4750u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * this;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  undefined4 uVar6;
  
  this = REFG(undefined4, 0x1379694);
  if (REFG(undefined4, 0x1379694) == (int *)0x0) {
    return 0;
  }
  uVar2 = F_00ac1a20(param_1,param_2);
  uVar2 = F_00ab1ed0(uVar2);
  if (uVar2 == 0) {
    return 0;
  }
  if (((*(char *)(uVar2 + 0x22) != '\0') && (*(ushort *)(uVar2 + 0x18) != 0)) &&
     (uVar3 = F_0071ce90(this,(uint)*(ushort *)(uVar2 + 0x18)), (char)uVar3 != '\0')) {
    return 0;
  }
  switch((unsigned int)(uintptr_t)(*(undefined1 *)(uVar2 + 0x22))) {
  case 0: ;
    return 0;
  case 1: ;
    return ((uint)*(ushort *)(uVar2 + 0xe) * this[0x5a5]) / 100;
  default: ;
    uVar3 = 0;
    break;
  case 3: ;
    if (param_1 == 1) {
      if (param_2 == 0x87) {
        uVar6 = 0x9b;
LAB_00ac482e: ;
        uVar3 = F_0071ce90(this,uVar6);
        cVar1 = (char)uVar3;
      }
      else {
        if (param_2 == 0x98) {
          uVar6 = 0xa5;
          goto LAB_00ac482e;
        }
        if (((param_2 == 0x90) || (param_2 == 0x94)) || (param_2 == 0x99)) {
          uVar6 = 0xa4;
          goto LAB_00ac482e;
        }
        if (param_2 != 0xba) goto LAB_00ac485a;
        uVar3 = F_0071ce90(this,0xa6);
        cVar1 = (char)uVar3;
      }
      if (cVar1 != '\0') {
        return 0;
      }
    }
LAB_00ac485a: ;
    uVar3 = F_00ab2260((uint)*(byte *)((int)this + 0x1689));
    uVar3 = (int)((uint)*(ushort *)(uVar2 + 0xe) * *(int *)(uVar3 + 4)) / 100;
    uVar4 = ((code *)*(gen_code32 *)(*this + 0xd4))(this);
    if (uVar4 == 0) {
      uVar4 = 0;
    }
    else {
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*this + 0xd4))(this)));
      uVar4 = F_00b7aef0(this_00);
    }
    if (*(char *)(uVar2 + 0x1c) != '\x02') {
      return uVar3;
    }
    if (*(char *)(uVar2 + 0x25) == '\x01') {
      if (uVar4 == 3) {
        iVar5 = uVar3 * 200;
      }
      else if (uVar4 == 2) {
        iVar5 = uVar3 * 200;
      }
      else if (uVar4 == 1) {
        iVar5 = uVar3 * 200;
      }
      else if (uVar4 == 0xffffffff) {
        iVar5 = uVar3 * 0x32;
      }
      else {
        if ((uVar4 != 0xfffffffe) && (uVar4 != 0xfffffffd)) goto LAB_00ac490e;
        iVar5 = uVar3 * 0x19;
      }
      uVar3 = iVar5 / 100;
    }
LAB_00ac490e: ;
    if (*(char *)(uVar2 + 0x25) == '\x02') {
      if ((uVar4 == 3) || (uVar4 == 2)) {
        iVar5 = 0x19;
      }
      else {
        if (uVar4 != 1) {
          return uVar3;
        }
        iVar5 = 0x32;
      }
      return (int)(uVar3 * iVar5) / 100;
    }
    break;
  case 4: ;
    uVar3 = F_00ab2260((uint)*(byte *)((int)this + 0x1689));
    uVar3 = (int)((uint)*(ushort *)(uVar2 + 0xe) * *(int *)(uVar3 + 4)) / 100;
    if (((char)param_4 == '\0') && (uVar3 < (uint)this[0x5a6])) {
      return this[0x5a6];
    }
    break;
  case 5: ;
    if (param_1 == 1) {
      if (param_2 == 0xc3) {
        uVar6 = 0x7e;
      }
      else if (param_2 == 0x6a) {
        uVar6 = 0x84;
      }
      else {
        if (param_2 != 0x75) goto switchD_00ac47bb_caseD_7;
        uVar6 = 0x83;
      }
      uVar3 = F_0071ce90(this,uVar6);
      if ((char)uVar3 != '\0') {
        return 0;
      }
    }
  case 7: ;
  case 8: ;
switchD_00ac47bb_caseD_7: ;
    return (uint)*(ushort *)(uVar2 + 0xe);
  case 6: ;
    if ((char)param_4 == '\0') {
      if (*(ushort *)(uVar2 + 0xe) < *(ushort *)(this + 0x5a8)) {
        return (uint)*(ushort *)(this + 0x5a8);
      }
      return (uint)*(ushort *)(uVar2 + 0xe);
    }
    goto switchD_00ac47bb_caseD_7;
  }
  return uVar3;
}

/* ref: FUN_00ac4a50 */
unsigned int F_00ac4a50(unsigned int gen_a0)
{
  GEN_ENTER(0xac4a50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)((int)this + 0x80) != (undefined *)0x0) {
    F_009bc530(*(undefined * PTR32 *)((int)this + 0x80),1);
    *(undefined4 *)((int)this + 0x80) = 0;
  }
  if (*(undefined * PTR32 *)((int)this + 0x84) != (undefined *)0x0) {
    F_009bc530(*(undefined * PTR32 *)((int)this + 0x84),1);
    *(undefined4 *)((int)this + 0x84) = 0;
  }
  return 0;
}

/* ref: FUN_00ac4a90 */
byte F_00ac4a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xac4a90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int * piVar6;
  
  bVar1 = F_00ac2200(param_1,param_2);
  if (bVar1 != 0) {
    if (param_1 == 1) {
      uVar2 = F_00ab1ed0(param_2);
      uVar3 = F_00ab21a0((uint)REFG(undefined1, 0x14ab0d4));
      bVar1 = *(byte *)(uVar2 + 0x27);
      if ((bVar1 == 0) || (((&REFG(undefined1, 0x14b4ec0))[bVar1 >> 3] & (byte)(1 << (bVar1 & 7))) != 0)) {
        if (*(char *)(uVar2 + 0x2b) == '\0') {
          return 1;
        }
        uVar4 = F_00a68280(&REFG(undefined1, 0x14ab070),(int)*(char *)(uVar2 + 0x2b),1);
        if ((ushort)*(byte *)(uVar2 + 0x1f) <= (ushort)uVar4) {
          if ((int)*(char *)(uVar2 + 0x2b) == (uint)REFG(undefined1, 0x14ab0d4)) {
            return 1;
          }
          if ((int)*(char *)(uVar2 + 0x2b) == (uint)*(byte *)(uVar3 + 0x3e)) {
            return 1;
          }
          uVar2 = F_00ac30f0(1);
          iVar5 = 0;
          if (0 < (int)uVar2) {
            piVar6 = (int *)((int)this + 200);
            do {
              if (*piVar6 == param_2) {
                return 1;
              }
              iVar5 = iVar5 + 1;
              piVar6 = piVar6 + 1;
            } while (iVar5 < (int)uVar2);
          }
        }
      }
    }
    else {
      if (param_1 != 9) {
        return 1;
      }
      uVar2 = F_00ab1f00(param_2);
      F_00ab21a0((uint)REFG(undefined1, 0x14ab0d4));
      if ((uVar2 != 0) &&
         (uVar3 = F_00a68280(&REFG(undefined1, 0x14ab070),(int)*(char *)(uVar2 + 0x11),1),
         (ushort)*(byte *)(uVar2 + 0xf) <= (ushort)uVar3)) {
        if ((int)*(char *)(uVar2 + 0x11) == (uint)REFG(undefined1, 0x14ab0d4)) {
          return 1;
        }
        uVar2 = F_00ac30f0(1);
        iVar5 = 0;
        if (0 < (int)uVar2) {
          piVar6 = (int *)((int)this + 200);
          do {
            if (*piVar6 == param_2) {
              return 1;
            }
            iVar5 = iVar5 + 1;
            piVar6 = piVar6 + 1;
          } while (iVar5 < (int)uVar2);
          return 0;
        }
        return 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_00ac4bf0 */
byte F_00ac4bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xac4bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00ac29c0(this,param_1,param_2);
  if ((uVar1 != 0xffffffff) && (*((char *)GEN_TOP(((int)this + (uVar1 * 5 + 0x3c) * 4))) != '\0')) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00ac4c30 */
uint F_00ac4c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xac4c30u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  ushort uVar1;
  int iVar2;
  byte bVar3;
  undefined * this;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  
  iVar2 = REFG(int, 0x1379694);
  if (param_1 != 1) {
    if (param_1 != 9) {
      return 0;
    }
    uVar6 = 0xa0001;
    this = (undefined *)F_006b8c00();
    uVar4 = F_006e3240(this,uVar6);
    if (uVar4 == 0) {
      return 0;
    }
    bVar3 = F_006bf130(param_2,iVar2,0);
    if (bVar3 != 0) {
      return 0;
    }
    return 0x23b;
  }
  uVar4 = F_00ac1a20(1,param_2);
  if ((uVar4 == 0) || (uVar4 = F_00ab1ed0(uVar4), uVar4 == 0)) {
    return 0x243;
  }
  switch((unsigned int)(uintptr_t)(*(undefined1 *)(uVar4 + 0x22))) {
  case 1: ;
    uVar4 = *(uint *)(iVar2 + 0x1690);
    uVar5 = F_00ac4750(1,param_2,1,0);
    if (uVar4 <= uVar5) {
      return 0x237;
    }
    break;
  case 3: ;
    uVar6 = 0;
    goto LAB_00ac4ced;
  case 4: ;
    uVar6 = 1;
LAB_00ac4ced: ;
    uVar4 = *(uint *)(iVar2 + 0x1698);
    uVar5 = F_00ac4750(1,param_2,1,uVar6);
    if (uVar4 < uVar5) {
      return 0x238;
    }
    break;
  case 5: ;
    uVar6 = 0;
    goto LAB_00ac4d15;
  case 6: ;
    uVar6 = 1;
LAB_00ac4d15: ;
    uVar1 = *(ushort *)(iVar2 + 0x16a0);
    uVar4 = F_00ac4750(1,param_2,1,uVar6);
    if (uVar1 < uVar4) {
      return 0x239;
    }
    break;
  case 7: ;
    uVar1 = *(ushort *)(iVar2 + 0x16a2);
    uVar4 = F_00ac4750(1,param_2,1,0);
    if (uVar1 < uVar4) {
      return 0x23a;
    }
    break;
  case 8: ;
    uVar1 = *(ushort *)(iVar2 + 0x16a6);
    uVar4 = F_00ac4750(1,param_2,1,0);
    if (uVar1 < uVar4) {
      return 0x23b;
    }
  }
  return 0;
}

/* ref: FUN_00ac4db0 */
unsigned int F_00ac4db0(unsigned int gen_a0)
{
  GEN_ENTER(0xac4db0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  undefined2 * puVar3;
  int * piVar4;
  undefined * this_00;
  undefined4 uVar5;
  
  piVar4 = REFG(undefined4, 0x1379694);
  uVar2 = F_00ac29c0(this,*(undefined4 *)((int)this + 0x18),*(undefined4 *)((int)this + 0x1c));
  if (uVar2 != 0xffffffff) {
    *((undefined1 *)GEN_TOP(((int)this + (uVar2 * 5 + 0x3c) * 4))) = 0;
    *(undefined4 *)((int)this + uVar2 * 0x14 + 0xf8) = 0;
    *(undefined4 *)((int)this + uVar2 * 0x14 + 0xfc) = 0;
  }
  uVar2 = F_00aa0210(piVar4,0,0);
  bVar1 = F_00aa06e0(piVar4,uVar2);
  if (bVar1 == 0) {
    uVar2 = F_00aa0210(piVar4,0,0);
    bVar1 = F_00aa06f0(piVar4,uVar2);
    if (bVar1 == 0) {
      F_00aa0100(piVar4,0,0);
    }
  }
  puVar3 = ((undefined2 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0xd8))(piVar4)));
  *(undefined4 *)(puVar3 + 4) = 0;
  *(undefined4 *)(puVar3 + 0x1c) = 0;
  *(undefined4 *)(puVar3 + 0x1a) = 0;
  *(undefined4 *)(puVar3 + 8) = 0xe0000000;
  *(undefined4 *)(puVar3 + 10) = 0;
  *puVar3 = 0;
  *(undefined4 *)(puVar3 + 2) = 0;
  F_00a4a760(&REFG(undefined, 0x14a7360),0x29,0);
  if (*(int *)((int)this + 0x14) == 2) {
    F_00a4a760(&REFG(undefined, 0x14a7360),0xe,0);
  }
  F_00a4a760(&REFG(undefined, 0x14a7360),0xb,0);
  if (*(int *)((int)this + 0x14) - 5U < 2) {
    F_00ab18e0(&REFG(undefined4, 0x14bcc80),2);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar5 = 3;
  uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0x48))(piVar4);
  this_00 = (undefined *)F_00763050(uVar2,uVar5);
  F_00770bc0(this_00);
  return 0;
}

/* ref: FUN_00ac4ed0 */
unsigned int F_00ac4ed0(unsigned int gen_a0)
{
  GEN_ENTER(0xac4ed0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  int * this;
  byte bVar2;
  uint uVar3;
  float * pfVar4;
  bool bVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float fVar9;
  
  this = REFG(undefined4, 0x1379694);
  iVar1 = REFG(int, 0x137104c);
  if ((REFG(undefined4, 0x1379694) != (int *)0x0) && (REFG(int, 0x137104c) != 0)) {
    bVar2 = F_00a4a790(&REFG(undefined, 0x14a7360),0x30);
    if (bVar2 != 0) {
      uVar3 = F_00414500(*(undefined4 *)(iVar1 + 0x10),0x73);
      if (*(int *)(uVar3 + 0x14) != 0) {
        uVar3 = F_00a5feb0(this);
        pfVar4 = (float *)F_0046f4a0(&(*(undefined4 *)(gen_frame + 0x0)),param_1,uVar3);
        (*(float *)(gen_frame + 0x10)) = *pfVar4;
        (*(float *)(gen_frame + 0x14)) = pfVar4[1];
        (*(float *)(gen_frame + 0x18)) = pfVar4[2];
        fVar6 = (float10)*pfVar4;
        fVar7 = (float10)pfVar4[1];
        fVar8 = (float10)pfVar4[2];
        fVar9 = ((float)GEN_TOF((fVar8 * fVar8 + (fVar7 * fVar7 + fVar6 * fVar6))));
        (*(float *)(gen_frame + 0x2c)) = fVar9;
        fVar9 = ((float)GEN_TOF(SQRT((float10)fVar9)));
        (*(float *)(gen_frame + 0x2c)) = fVar9;
        fVar6 = (float10)fVar9;
        bVar5 = GEN_ISNAN(fVar6) || GEN_ISNAN((float10)0);
        if (bVar5 == (bVar5 || fVar6 == (float10)0)) {
          (*(undefined4 *)(gen_frame + 0x0)) = 0;
          (*(undefined4 *)(gen_frame + 0x4)) = 0;
          (*(undefined4 *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
          fVar9 = F_00aae7a0(&(*(float *)(gen_frame + 0x10)),&(*(undefined4 *)(gen_frame + 0x0)));
          (*(float *)(gen_frame + 0x2c)) = fVar9;
          ((code *)*(gen_code32 *)(*this + 0x48))(this);
          F_00ae8f30(&(*(float *)(gen_frame + 0x2c)));
          if (REFG(int, 0x1375bbc) == 0) {
            F_00b6ade0(REFG(undefined4, 0x1375b90));
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00ac5000 */
uint F_00ac5000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xac5000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  undefined4 uVar1;
  undefined * this_00;
  uint uVar2;
  float * pfVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  this_00 = REFG(undefined4, 0x1379694);
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  (*(uint *)(gen_frame + 0x108)) = uVar2;
  if ((!(0.0 < *(float *)((int)this + 8))) && (!(REFG(float, 0x14ab588) <= 0.0))) {
    if (param_1 - 4U < 4) {
      uVar2 = F_00ab2c00(1);
      F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x100,"sound/battle/etc/%s.scd",
                 (*((uint *)GEN_TOP(((uVar2 - 0x10) + param_1 * 4))) & 0xffffff) + (uVar2 - 0x10) + param_1 * 4
                );
      uVar1 = *(undefined4 *)(REFG(int, 0x137104c) + 0x25f8);
      pfVar3 = (float *)F_00a5feb0(this_00);
      uVar8 = 1;
      uVar7 = 0;
      uVar6 = 0;
      fVar5 = (float)(float10)1;
      uVar2 = F_00a5feb0(this_00);
      fVar4 = *(float *)(uVar2 + 8);
      uVar2 = F_00a5feb0(this_00);
      F_004e95a0(uVar1,((undefined1 *)(gen_frame + 0x8)),(float)(float10)1,0,*pfVar3,*(float *)(uVar2 + 4),fVar4,fVar5,
                   uVar6,uVar7,uVar8);
    }
    uVar2 = F_00a51200(9,param_1,0,0,0);
    *(undefined4 *)((int)this + 0x7c4) = REFG(float, 0x1087f04);
    *(undefined4 *)((int)this + 8) = REFG(float, 0x1088068);
    F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  F_00c47745(uVar2 ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar2 & 0xffffff00;
}

/* ref: FUN_00ac5140 */
byte F_00ac5140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xac5140u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  undefined * this_00;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  iVar1 = REFG(int, 0x1379694);
  if (((!GEN_ISNAN(*(float *)((int)this + 0xc)) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
       !(*(float *)((int)this + 0xc) <= *(float *)&REFG(undefined, 0x1088114))) || (REFG(char, 0x14ab5ba) == '\0')) {
    return 0;
  }
  if (param_1 == 3) {
    *(undefined4 *)((int)this + 0x78) = 3;
    *(undefined4 *)((int)this + 0x70) = 0xffffffff;
    *(undefined4 *)((int)this + 0x74) = 0xb;
    return 1;
  }
  uVar4 = F_00ab2d50(param_1);
  iVar7 = param_2;
  if (((((uVar4 != 0) && (*(short *)(uVar4 + 0xc) != 0)) || (param_1 == 7)) || (param_1 == 8)) &&
     (iVar1 != 0)) {
    uVar8 = 0;
    if (*(ushort *)(uVar4 + 0xc) != 0) {
      uVar8 = F_00ab1ed0((uint)*(ushort *)(uVar4 + 0xc));
      if (uVar8 == 0) {
        return 0;
      }
      if (((((*(char *)(uVar8 + 0x2e) == '\x01') && (*(char *)(uVar8 + 0x2f) == '\0')) &&
           ((*(char *)(uVar8 + 0x30) == '\0' &&
            ((*(char *)(uVar8 + 0x31) == '\0' && (*(char *)(uVar8 + 0x32) == '\0')))))) &&
          (*(char *)(uVar8 + 0x34) == '\0')) &&
         ((*(char *)(uVar8 + 0x37) == '\0' && (*(char *)(uVar8 + 0x35) == '\0')))) {
        param_3 = 0;
        iVar7 = REFG(int, 0x14ab5bc);
      }
      if ((((((*(char *)(uVar8 + 0x2e) == '\0') && (*(char *)(uVar8 + 0x2f) == '\0')) &&
            (*(char *)(uVar8 + 0x30) == '\0')) &&
           ((*(char *)(uVar8 + 0x31) == '\0' && (*(char *)(uVar8 + 0x32) == '\0')))) &&
          (*(char *)(uVar8 + 0x34) == '\0')) &&
         ((*(char *)(uVar8 + 0x37) == '\0' && (*(char *)(uVar8 + 0x35) == '\x01')))) {
        param_3 = 0;
        iVar7 = REFG(int, 0x14ab5bc);
      }
    }
    piVar5 = (int *)F_00475fa0(iVar7,param_3);
    if (((uVar8 != 0) && (*(char *)(uVar8 + 0x2e) == '\x01')) &&
       (bVar2 = F_00ac1510((uint)*(ushort *)(uVar4 + 0xc),piVar5), iVar9 = REFG(int, 0x14ab5bc),
       bVar2 == 0)) {
      param_3 = 0;
      piVar5 = (int *)F_00475fa0(REFG(int, 0x14ab5bc),0);
      iVar7 = iVar9;
    }
    if ((piVar5 != (int *)0x0) &&
       (uVar6 = ((code *)*(gen_code32 *)(*piVar5 + 0xb8))(piVar5), (char)uVar6 != '\0')) {
      uVar6 = (uint)*(ushort *)(piVar5 + 0x3a);
      if (*(ushort *)(piVar5 + 0x3a) != 0) {
        iVar9 = iVar1;
        this_00 = (undefined *)F_00b070f0();
        bVar2 = F_00b088e0(this_00,uVar6,iVar9);
        if (bVar2 == 0) {
          F_00a7d290(0x876,0,0,0,0,REFG(float, 0x10916ec));
          return 0;
        }
      }
      uVar6 = F_00a62220(piVar5);
      if ((char)uVar6 != '\0') {
        sVar3 = (short)((uint)piVar5[0x39] >> 0x10);
        if ((((sVar3 == -0x7fff) || (sVar3 == -0x7ffe)) || (sVar3 == -0x7ff9)) &&
           (*(int *)(iVar1 + 0xe4) != piVar5[0x39])) {
          F_00a7d290(0x555,0,0,0,0,REFG(float, 0x10916ec));
          return 0;
        }
      }
    }
    if ((((uVar8 != 0) &&
         (((*(char *)(uVar8 + 0x2e) != '\x01' || (iVar7 != REFG(int, 0x14ab5bc))) || (param_3 != 0)))) &&
        (bVar2 = F_00ac1510((uint)*(ushort *)(uVar4 + 0xc),piVar5), bVar2 == 0)) ||
       (((param_1 == 7 || (param_1 == 8)) &&
        ((piVar5 == (int *)0x0 || (uVar4 = F_00a62220(piVar5), (char)uVar4 == '\0')))))) {
      F_00a7d290(0x233,0,0,0,0,REFG(float, 0x10916ec));
      return 0;
    }
  }
  F_00a512b0(0xb,iVar7,param_3,param_1,0,0,0);
  *(undefined4 *)((int)this + 0xc) = REFG(float, 0x1088068);
  return 1;
}

/* ref: FUN_00ac5730 */
uint F_00ac5730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xac5730u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint * puVar2;
  int * piVar3;
  uint uVar4;
  undefined2 * puVar5;
  undefined4 uVar6;
  
  puVar2 = (uint *)F_00ab1fc0(param_1);
  piVar1 = REFG(undefined4, 0x1379694);
  uVar4 = 0;
  if (puVar2 != (uint *)0x0) {
    uVar4 = 0;
    if (REFG(undefined4, 0x1379694) != (int *)0x0) {
      *(undefined4 *)((int)this + 0x14) = 2;
      *(undefined4 *)((int)this + 0x28) = param_2;
      *(undefined4 *)((int)this + 0x2c) = param_3;
      *(float *)((int)this + 0x24) = (float)(byte)puVar2[3];
      *(undefined4 *)((int)this + 0x20) = 0;
      piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      if (piVar3 != (int *)0x0) {
        uVar6 = 3;
        uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3);
        uVar4 = F_00763050(uVar4,uVar6);
        if (uVar4 != 0) {
          F_0086dce0(uVar4,(*puVar2 & 0xffffff) + (int)puVar2,(uint)(ushort)puVar2[1],
                       *(float *)((int)this + 0x20),*(float *)((int)this + 0x24),1,param_2,param_3);
        }
      }
      uVar6 = *(undefined4 *)((int)this + 0x24);
      puVar5 = ((undefined2 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xd8))(piVar1)));
      *(undefined4 *)(puVar5 + 2) = param_1;
      *(undefined4 *)(puVar5 + 0x1a) = 0;
      *(undefined4 *)(puVar5 + 4) = 0;
      *puVar5 = 0x401;
      *(undefined4 *)(puVar5 + 0x1c) = uVar6;
      *(undefined4 *)(puVar5 + 8) = param_2;
      *(undefined4 *)(puVar5 + 10) = param_3;
      uVar4 = F_00a4a760(&REFG(undefined, 0x14a7360),0xe,1);
    }
  }
  return uVar4;
}

/* ref: FUN_00ac5840 */
byte F_00ac5840(unsigned int gen_a0)
{
  GEN_ENTER(0xac5840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  char * pcVar3;
  bool bVar4;
  
  piVar1 = REFG(undefined4, 0x1379694);
  if (((REFG(undefined4, 0x1379694) != (int *)0x0) &&
      (uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 0xd8))))(REFG(undefined4, 0x1379694)), uVar2 != 0)) &&
     (pcVar3 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xd8))(piVar1))), *pcVar3 != '\0')) {
    return 0;
  }
  bVar4 = GEN_ISNAN(*(float *)this) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  if ((bVar4 != (bVar4 || *(float *)this == *(float *)&REFG(undefined, 0x1088114))) &&
     ((uVar2 = F_00ac29c0(this,*(undefined4 *)((int)this + 0x5c),*(undefined4 *)((int)this + 0x60)
                           ), uVar2 == 0xffffffff ||
      (*((char *)GEN_TOP(((int)this + (uVar2 * 5 + 0x3c) * 4))) == '\0')))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ac58b0 */
byte F_00ac58b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xac58b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char cVar1;
  byte bVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  
  pvVar3 = REFG(undefined4, 0x1379694);
  if (REFG(undefined4, 0x1379694) == (undefined *)0x0) {
    return 0;
  }
  if (param_1 == 1) {
    uVar4 = F_00ab1ed0(param_2);
    if (uVar4 == 0) {
      return 0;
    }
    bVar2 = F_00ac4a90(this,1,param_2);
    if (bVar2 == 0) {
      return 0;
    }
    cVar1 = *(char *)(uVar4 + 0x23);
    if ((((((cVar1 != '\0') && (cVar1 != '\b')) && (cVar1 != '\t')) &&
         (((cVar1 != '\v' && (cVar1 != '\a')) &&
          ((cVar1 != '\x19' && ((cVar1 != '\x1a' && (cVar1 != '\x15')))))))) &&
        ((cVar1 != '\x16' && (((cVar1 != '\x17' && (cVar1 != '\x18')) && (cVar1 != '\x1c')))))) &&
       (uVar5 = F_00ac23f0(this,param_2), uVar5 == 0)) {
      return 1;
    }
    if ((*(char *)((int)this + 0x7bc) == '\0') &&
       (bVar2 = F_00ac1b30(param_2,*(undefined4 *)((int)this + 0x54)), bVar2 != 0)) {
      return 1;
    }
    if ((*(byte *)(uVar4 + 0x26) != 0) &&
       (uVar5 = F_0071ce90(pvVar3,(uint)*(byte *)(uVar4 + 0x26)), (char)uVar5 != '\0')) {
      return 1;
    }
    uVar4 = (uint)*(ushort *)(uVar4 + 0x10);
    if (((((uVar4 == 0x6b) || (uVar4 == 0x6c)) || (uVar4 == 0x6d)) || (uVar4 == 0x61)) &&
       (uVar4 = F_0071ce90(pvVar3,uVar4), (char)uVar4 != '\0')) {
      return 1;
    }
  }
  else if (param_1 == 9) {
    uVar6 = 0xa0001;
    pvVar3 = (undefined *)F_006b8c00();
    uVar4 = F_006e3240(pvVar3,uVar6);
    if (uVar4 != 0) {
      uVar4 = F_006bf0c0(uVar4,param_2);
      return uVar4 == 1;
    }
  }
  return 0;
}

/* ref: FUN_00ac59f0 */
unsigned int F_00ac59f0(unsigned int gen_a0)
{
  GEN_ENTER(0xac59f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)((int)this + 0x80) != (undefined *)0x0) {
    F_009bc530(*(undefined * PTR32 *)((int)this + 0x80),1);
    *(undefined4 *)((int)this + 0x80) = 0;
  }
  if (*(undefined * PTR32 *)((int)this + 0x84) != (undefined *)0x0) {
    F_009bc530(*(undefined * PTR32 *)((int)this + 0x84),1);
    *(undefined4 *)((int)this + 0x84) = 0;
  }
  *(undefined4 *)((int)this + 0x70) = 0;
  return 0;
}

/* ref: FUN_00ac5a30 */
uint F_00ac5a30(unsigned int gen_a0)
{
  GEN_ENTER(0xac5a30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar1 = REFG(int, 0x1379694);
  uVar2 = F_005339c0(&REFG(undefined4, 0x1375bc0));
  uVar2 = F_00a64450(&REFG(undefined, 0x14a9a18),uVar2);
  if ((iVar1 != 0) && (uVar2 != 0)) {
    uVar3 = F_00ac37d0(this,iVar1,uVar2);
    if (uVar3 != 0) {
      uVar2 = F_00ac38c0(iVar1,uVar3);
      return uVar2;
    }
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    *(undefined1 *)((int)this + 0x90) = 0;
    uVar3 = F_005339c0(&REFG(undefined4, 0x1375bc0));
    F_00a51200(0x61,uVar3,uVar5,uVar6,uVar7);
    fVar4 = F_00a5ffa0(iVar1,uVar2);
    uVar2 = F_00a9f850(iVar1,fVar4,0);
  }
  return uVar2;
}

/* ref: FUN_00ac5ac0 */
uint F_00ac5ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xac5ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  char cVar1;
  undefined4 uVar2;
  char * pcVar3;
  float * pfVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  pcVar3 = param_2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar5 = 0;
  if (pcVar3 != param_2 + 1) {
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0xff,"sound/battle/etc/%s.scd",param_2);
    uVar2 = *(undefined4 *)(REFG(int, 0x137104c) + 0x25f8);
    pfVar4 = (float *)F_00a5feb0(param_1);
    uVar10 = 1;
    uVar9 = 0;
    uVar8 = 0;
    fVar7 = (float)(float10)1;
    uVar5 = F_00a5feb0(param_1);
    fVar6 = *(float *)(uVar5 + 8);
    uVar5 = F_00a5feb0(param_1);
    uVar5 = F_004e95a0(uVar2,((undefined1 *)(gen_frame + 0x8)),(float)(float10)1,0,*pfVar4,*(float *)(uVar5 + 4),fVar6,
                         fVar7,uVar8,uVar9,uVar10);
  }
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar5;
}

/* ref: FUN_00ac5b80 */
unsigned int F_00ac5b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xac5b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  char * param_4 = (char *)(uintptr_t)gen_a4;
  short sVar1;
  byte bVar2;
  undefined * this_00;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_8;
  
  local_8 = 0;
  if (param_1 == (undefined *)0x0) {
    return 0;
  }
  if (param_2 == (int *)0x0) {
    return 0;
  }
  bVar2 = F_00aa19d0(param_1,param_3,1);
  if (bVar2 == 0) {
    return 0;
  }
  switch((unsigned int)(uintptr_t)(*param_4)) {
  case '\x02': ;
    F_00ac3c30(7,param_1,param_2);
    return 0;
  case '\x03': ;
  case '\x05': ;
  case '\a': ;
  case '\b': ;
    if (((param_3 == 0x10) || (param_3 == 0x18)) || (param_3 == 0x19)) {
      local_8 = 1;
    }
    uVar3 = F_00ab1ed0(param_3);
    if ((*(char *)(uVar3 + 0x1c) == '\x01') || (*(char *)(uVar3 + 0x1c) == '\x03')) {
      F_00aa2e00(param_1,0x10,0,param_2,1,local_8);
    }
    if (*param_4 == '\a') {
      iVar5 = 0x43;
      goto LAB_00ac5c80;
    }
    if (*param_4 == '\b') {
      iVar5 = 0x44;
      goto LAB_00ac5c80;
    }
    switch((unsigned int)(uintptr_t)(param_4[1])) {
    case '\x01': ;
      iVar5 = 0x10;
      break;
    case '\x02': ;
      iVar5 = 0x11;
      break;
    case '\x03': ;
      iVar5 = 0x12;
      break;
    case '\x04': ;
      iVar5 = 0x13;
      break;
    case '\x05': ;
    case '\x06': ;
      iVar5 = (byte)param_4[2] + 0x17;
      break;
    case '\a': ;
      iVar5 = 0x16;
      break;
    default: ;
      goto switchD_00ac5c51_default;
    }
LAB_00ac5c80: ;
    F_00ac3c30(iVar5,param_1,param_2);
switchD_00ac5c51_default: ;
    if ((param_4[6] & 1U) != 0) {
      F_00ac3c30(0x3e,param_1,param_2);
    }
    if ((param_4[6] & 2U) != 0) {
      F_00ac3c30(0x40,param_1,param_2);
    }
    if ((param_4[6] & 4U) != 0) {
      F_00ac3c30(0x41,param_1,param_2);
    }
    if ((param_4[6] & 8U) != 0) {
      F_00ac3c30(0x42,param_1,param_2);
    }
    if ((param_4[6] & 0x10U) != 0) {
      F_00ac3c30(5,param_1,param_2);
    }
    if ((param_4[6] & 0x20U) != 0) {
      F_00ac3c30(0x78,param_1,param_2);
    }
    if (*param_4 == '\x05') {
      if ((byte)(param_4[1] - 1U) < 4) {
        F_00ac3c30(0x25,param_1,param_2);
        return 0;
      }
      F_00ac3c30(0x26,param_1,param_2);
      return 0;
    }
    break;
  case '\x04': ;
  case '\x06': ;
    if (param_4[1] == '\0') {
      uVar6 = 0x1f;
    }
    else {
      uVar6 = 0x22;
    }
    F_00ac3c30(uVar6,param_1,param_2);
    if (*param_4 == '\x06') {
      F_00ac3c30(0x27,param_1,param_2);
      return 0;
    }
    break;
  case '\t': ;
    F_00ac3c30(5,param_1,param_2);
    return 0;
  case '\f': ;
    F_00ac3c30(0x17,param_1,param_2);
    return 0;
  case '\r': ;
    if (param_4[1] != '\0') {
      F_00ac3c30(0x23,param_1,param_2);
      return 0;
    }
    F_00ac3c30(0x20,param_1,param_2);
    return 0;
  case '\x0f': ;
    if (param_4[1] != '\0') {
      F_00ac3c30(0x24,param_1,param_2);
      return 0;
    }
    F_00ac3c30(0x21,param_1,param_2);
    return 0;
  case '\x11': ;
  case '\x12': ;
    uVar3 = F_00ab1ff0((int)*(short *)(param_4 + 4));
    F_00ac3c30((uint)*(byte *)(uVar3 + 0x10),param_1,param_2);
    return 0;
  case '\x13': ;
  case '\x14': ;
    iVar5 = (int)*(short *)(param_4 + 4);
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_2 + 0xd4))(param_2)));
    F_00b7ad80(this_00,iVar5);
    return 0;
  case '\x16': ;
    F_00ac3c30(0x3d,param_1,param_2);
    return 0;
  case '\x1d': ;
    F_00ac3c30(8,param_1,param_2);
    return 0;
  case '\x1e': ;
    sVar1 = *(short *)(param_4 + 4);
    if ((0 < sVar1) && (sVar1 < 8)) {
      F_00ac3c30(sVar1 + 8,param_1,param_2);
      return 0;
    }
    break;
  case '$': ;
    uVar3 = F_00ab2840((int)*(short *)(param_4 + 4));
    uVar4 = ((code *)*(gen_code32 *)(*param_2 + 0x98))(param_2);
    if (((char)uVar4 != '\0') && (uVar3 != 0)) {
      if (param_4[1] == '\x01') {
        F_00ac5ac0(param_2,(*(uint *)(uVar3 + 8) & 0xffffff) + uVar3 + 8);
        return 0;
      }
      F_00ac5ac0(param_2,(*(uint *)(uVar3 + 0xc) & 0xffffff) + uVar3 + 0xc);
      return 0;
    }
    break;
  case '-': ;
    uVar3 = F_00ac3c30((int)*(short *)(param_4 + 4),param_1,param_2);
    if (uVar3 != 0) {
      F_00a9fe80(param_1,uVar3);
      return 0;
    }
    break;
  case '.': ;
    if (param_3 == 0x355) {
      F_00ac3c30(0x72,param_1,param_2);
    }
  }
  return 0;
}

/* ref: FUN_00ac5fd0 */
uint F_00ac5fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xac5fd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte * param_6 = (byte *)(uintptr_t)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  ushort uVar1;
  byte bVar2;
  float fVar3;
  undefined * pvVar4;
  undefined4 * puVar5;
  undefined3 extraout_var = 0;
  int iVar6;
  undefined4 * puVar7;
  undefined4 extraout_EDX = 0;
  int iVar8;
  float10 fVar9;
  float in_XMM1_Da = 0;
  float in_XMM2_Da = 0;
  float in_XMM3_Da = 0;
  float in_XMM7_Da = 0;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  byte * pbVar13;
  
  ((uint *)(gen_frame + 0x3c))[8] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = this;
  (*(undefined4 * PTR32 *)(gen_frame + 0x38)) = param_1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x2c)) = param_3;
  (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = REFG(undefined4, 0x1379694);
  puVar5 = param_1;
  if (param_2 == (undefined4 *)0x0) goto switchD_00ac60b6_caseD_b;
  fVar3 = gen_bits2f(F_00ab1ed0(param_3));
  (*(float *)(gen_frame + 0x24)) = fVar3;
  puVar5 = (undefined4 *)0x0;
  if (fVar3 == 0.0) goto switchD_00ac60b6_caseD_b;
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x38)) != (undefined4 *)0x0) {
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x38)) == (*(undefined4 * PTR32 *)(gen_frame + 0x28))) {
      puVar5 = param_2;
      puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x2c));
      pbVar13 = param_6;
      pvVar4 = (undefined *)F_006b8c00();
      F_006f88c0(pvVar4,puVar5,puVar7,(undefined4)gen_fl2bits(fVar3),pbVar13);
    }
    bVar2 = F_00a9f620(param_2);
    if ((bVar2 != 0) && (*(char *)((int)gen_fl2bits((*(float *)(gen_frame + 0x24))) + 0x3a) == '\x01')) {
      F_0053f190(&REFG(undefined4, 0x1375bc0),(*(undefined4 * PTR32 *)(gen_frame + 0x38)));
    }
  }
  (*(bool *)(gen_frame + 0x37)) = *(char *)((int)gen_fl2bits((*(float *)(gen_frame + 0x24))) + 0x1c) == '\x01';
  F_00ae0810(&REFG(undefined, 0x1336e40),param_2[0x1d]);
  F_00ac5b80((*(undefined * PTR32 *)(gen_frame + 0x30)),(*(undefined4 * PTR32 *)(gen_frame + 0x38)),param_2,(*(undefined4 * PTR32 *)(gen_frame + 0x2c)),param_6);
  bVar2 = *param_6;
  puVar5 = (undefined4 *)(bVar2 - 1);
  if ((undefined4 *)0x2f < puVar5) goto switchD_00ac60b6_caseD_b;
  puVar5 = (undefined4 *)(uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0xac69a0) + bVar2 + 3)));
  puVar7 = param_2;
  switch((unsigned int)(uintptr_t)(bVar2)) {
  case 1: ;
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x38)) == (*(undefined4 * PTR32 *)(gen_frame + 0x28))) {
      *(undefined4 *)&REFG(undefined, 0x14bd688) = REFG(float, 0x10a509c);
    }
    if (param_2 == (*(undefined4 * PTR32 *)(gen_frame + 0x28))) {
      *(undefined4 *)&REFG(undefined, 0x14bd694) = REFG(float, 0x10a509c);
    }
    uVar12 = 0;
    iVar8 = 0;
    uVar11 = (-(uint)((*(bool *)(gen_frame + 0x37)) != false) & 0xfffffff7) + 0x203;
    puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
    break;
  case 2: ;
    uVar12 = 0;
    iVar8 = 0;
    if ((char)param_8 == '\0') {
      uVar11 = 0x202;
      puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
    }
    else {
      uVar11 = 0x276;
      puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
    }
    break;
  case 3: ;
  case 5: ;
    bVar2 = param_6[6];
    (*(bool *)(gen_frame + 0x37)) = true;
    if (((bVar2 & 2) != 0) && (param_2[0x5a4] == (int)*(short *)(param_6 + 4))) {
      (*(bool *)(gen_frame + 0x37)) = false;
    }
    if ((bVar2 & 0x10) != 0) {
      (*(bool *)(gen_frame + 0x37)) = false;
    }
    if ((bVar2 & 4) != 0) {
      (*(bool *)(gen_frame + 0x37)) = false;
    }
    if (((bVar2 & 8) != 0) && (param_2[0x5a4] == (int)*(short *)(param_6 + 4))) {
      (*(bool *)(gen_frame + 0x37)) = false;
    }
    uVar12 = F_0071ce90(param_2,1);
    if ((((char)uVar12 != '\x01') && ((*(bool *)(gen_frame + 0x37)) != false)) && (param_2[0x5a5] != 0)) {
      F_00aa3ff0(param_2,(uint)(*(short *)(param_6 + 4) * 100) / (uint)param_2[0x5a5],(*(undefined4 * PTR32 *)(gen_frame + 0x38)));
    }
    if ((char)param_8 == '\0') {
      if (*param_6 == 3) {
        iVar8 = (int)(char)param_6[3];
        iVar6 = (int)*(short *)(param_6 + 4);
        uVar10 = 0x1fe;
      }
      else {
        iVar8 = (int)(char)param_6[3];
        iVar6 = (int)*(short *)(param_6 + 4);
        uVar10 = 0x1ff;
      }
    }
    else if (*param_6 == 3) {
      iVar8 = (int)(char)param_6[3];
      iVar6 = (int)*(short *)(param_6 + 4);
      uVar10 = 0x1f8;
    }
    else {
      iVar8 = (int)(char)param_6[3];
      iVar6 = (int)*(short *)(param_6 + 4);
      uVar10 = 0x1f9;
    }
    F_00a7d4b0(uVar10,(*(undefined4 * PTR32 *)(gen_frame + 0x38)),param_2,param_4,param_5,iVar6,iVar8,0,0,REFG(float, 0x10916ec));
    bVar2 = F_00a9f620(param_2);
    puVar5 = ((undefined4 *)GEN_TOP(CONCAT31(extraout_var,bVar2)));
    if (bVar2 != 0) {
      uVar12 = ((code *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x38)))((*(undefined4 * PTR32 *)(gen_frame + 0x38)));
      puVar5 = (undefined4 *)F_00532a00(&REFG(undefined4, 0x1375bc0),uVar12,extraout_EDX);
    }
    goto switchD_00ac60b6_caseD_b;
  case 4: ;
  case 6: ;
    if (*(char *)(param_2 + 0x62) == '\x02') goto switchD_00ac60b6_caseD_b;
    uVar12 = 0;
    if (param_6[1] == 0) {
      if (bVar2 == 4) {
        iVar8 = (int)*(short *)(param_6 + 4);
        uVar11 = 0x207;
        puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
      }
      else {
        iVar8 = (int)*(short *)(param_6 + 4);
        uVar11 = 0x208;
        puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
      }
    }
    else {
      iVar8 = (int)*(short *)(param_6 + 4);
      uVar11 = 0x20b;
      puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
    }
    break;
  case 7: ;
    if (param_2 == (*(undefined4 * PTR32 *)(gen_frame + 0x28))) {
      *(undefined4 *)&REFG(undefined, 0x14bd68c) = REFG(float, 0x10a509c);
    }
    F_00aa4270(param_2,0x4f,0,0);
    uVar12 = (uint)(char)param_6[3];
    iVar8 = (int)*(short *)(param_6 + 4);
    uVar11 = (-(uint)((*(bool *)(gen_frame + 0x37)) != false) & 0xfffffff7) + 0x205;
    puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
    break;
  case 8: ;
    if (param_2 == (*(undefined4 * PTR32 *)(gen_frame + 0x28))) {
      *(undefined4 *)&REFG(undefined, 0x14bd690) = REFG(float, 0x10a509c);
    }
    F_00aa4270(param_2,0x4e,0,0);
    uVar12 = (uint)(char)param_6[3];
    iVar8 = (int)*(short *)(param_6 + 4);
    uVar11 = (-(uint)((*(bool *)(gen_frame + 0x37)) != false) & 0xfffffff7) + 0x206;
    puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
    break;
  case 9: ;
    if (*(short *)(param_6 + 4) == 0) {
      uVar12 = 0;
      iVar8 = 0;
      if ((char)param_8 == '\0') {
        uVar11 = 0x253;
        puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
      }
      else {
        uVar11 = 0x252;
        puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
      }
    }
    else {
      uVar12 = (uint)param_6[1];
      iVar8 = (int)*(short *)(param_6 + 4);
      uVar11 = 0x25f;
      puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
    }
    break;
  case 10: ;
    uVar12 = 0;
    iVar8 = 0;
    uVar11 = 0x263;
    puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
    break;
  default: ;
    goto switchD_00ac60b6_caseD_b;
  case 0xc: ;
    iVar8 = (int)*(short *)(param_6 + 4);
    uVar12 = 0;
    uVar11 = 0x211;
    puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
    break;
  case 0xd: ;
    uVar12 = 0;
    if (param_6[1] == 0) {
      iVar8 = (int)*(short *)(param_6 + 4);
      uVar11 = 0x209;
      puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
    }
    else {
      iVar8 = (int)*(short *)(param_6 + 4);
      uVar11 = 0x20c;
      puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
    }
    break;
  case 0xe: ;
    iVar8 = (int)*(short *)(param_6 + 4);
    uVar12 = 0;
    uVar11 = 0x212;
    puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
    break;
  case 0xf: ;
    uVar12 = 0;
    if (param_6[1] == 0) {
      iVar8 = (int)*(short *)(param_6 + 4);
      uVar11 = 0x20a;
      puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
    }
    else {
      iVar8 = (int)*(short *)(param_6 + 4);
      uVar11 = 0x20d;
      puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
    }
    break;
  case 0x10: ;
    iVar8 = (int)*(short *)(param_6 + 4);
    uVar12 = 0;
    uVar11 = 0x277;
    puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
    break;
  case 0x11: ;
  case 0x12: ;
    uVar12 = F_00ab1ff0((int)*(short *)(param_6 + 4));
    puVar5 = (undefined4 *)0x0;
    if (uVar12 == 0) goto switchD_00ac60b6_caseD_b;
    uVar11 = (uint)*(ushort *)(uVar12 + 10);
    if (*(ushort *)(uVar12 + 10) == 0) {
      uVar11 = (*(char *)(uVar12 + 0xf) == '\x02') + 0x20e;
    }
    if (*param_6 == 0x11) {
      uVar12 = (uint)param_6[3];
      iVar8 = (int)*(short *)(param_6 + 4);
      puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
    }
    else {
      uVar12 = (uint)param_6[3];
      iVar8 = (int)*(short *)(param_6 + 4);
    }
    break;
  case 0x13: ;
    uVar11 = F_00ab1ff0((int)*(short *)(param_6 + 4));
    puVar5 = (undefined4 *)0x0;
    if (uVar11 == 0) goto switchD_00ac60b6_caseD_b;
    iVar8 = (int)*(short *)(param_6 + 4);
    uVar12 = 0;
    uVar11 = (*(char *)(uVar11 + 0xf) == '\x02') + 0x213;
    puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
    break;
  case 0x14: ;
    uVar11 = F_00ab1ff0((int)*(short *)(param_6 + 4));
    puVar5 = (undefined4 *)0x0;
    if (uVar11 == 0) goto switchD_00ac60b6_caseD_b;
    iVar8 = (int)*(short *)(param_6 + 4);
    uVar12 = 0;
    uVar11 = (*(char *)(uVar11 + 0xf) == '\x02') + 0x213;
    break;
  case 0x15: ;
    uVar12 = (uint)param_6[1];
    iVar8 = (int)*(short *)(param_6 + 4);
    uVar11 = 0x264;
    puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
    break;
  case 0x19: ;
  case 0x1a: ;
    iVar8 = (int)*(short *)(param_6 + 4);
    uVar12 = 0;
    uVar11 = 0x218;
    puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
    break;
  case 0x1c: ;
    if (param_2 == (*(undefined4 * PTR32 *)(gen_frame + 0x28))) {
      uVar1 = *(ushort *)(param_6 + 4);
      puVar5 = (undefined4 *)(uint)uVar1;
      *(undefined4 *)&REFG(undefined, 0x14bcf90) = REFG(float, 0x1094880);
      if (uVar1 == 0) {
        *(undefined4 *)&REFG(undefined, 0x14bcf90) = 0;
      }
      *(int *)&REFG(undefined, 0x14bcf94) = (int)(short)uVar1;
    }
    goto switchD_00ac60b6_caseD_b;
  case 0x21: ;
    uVar12 = F_00a5feb0((*(undefined4 * PTR32 *)(gen_frame + 0x38)));
    uVar11 = F_00a5feb0(param_2);
    uVar12 = F_0046f4a0(((undefined1 *)(gen_frame + 0x10)),uVar11,uVar12);
    fVar3 = F_00aae900(uVar12);
    (*(float *)(gen_frame + 0x24)) = fVar3;
    iVar8 = (int)*(short *)(param_6 + 4);
    (*(undefined * PTR32 *)(gen_frame + 0x30)) = (undefined *)iVar8;
    (*(undefined * PTR32 *)(gen_frame + 0x30)) = (undefined *)(uint)param_6[1];
    pvVar4 = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)((float10)iVar8 / (float10)param_6[1]))));
    (*(undefined * PTR32 *)(gen_frame + 0x30)) = pvVar4;
    puVar5 = (undefined4 *)
             F_00aa2400(param_2,in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,fVar3,(float)iVar8,
                          ((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar4))),0,0);
    goto switchD_00ac60b6_caseD_b;
  case 0x22: ;
    uVar12 = F_00a5feb0(param_2);
    uVar11 = F_00a5feb0((*(undefined4 * PTR32 *)(gen_frame + 0x38)));
    uVar12 = F_0046f4a0(((undefined1 *)(gen_frame + 0x0)),uVar11,uVar12);
    fVar3 = F_00aae900(uVar12);
    (*(float *)(gen_frame + 0x24)) = fVar3;
    puVar5 = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(F_00a600a0(param_2,(*(undefined4 * PTR32 *)(gen_frame + 0x38))))));
    (*(undefined4 * PTR32 *)(gen_frame + 0x2c)) = puVar5;
    iVar8 = (int)*(short *)(param_6 + 4);
    (*(undefined * PTR32 *)(gen_frame + 0x30)) = (undefined *)iVar8;
    fVar9 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar5)));
    if ((float10)iVar8 < fVar9) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x2c)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)iVar8)));
      fVar9 = (float10)iVar8;
    }
    (*(undefined * PTR32 *)(gen_frame + 0x30)) = (undefined *)(uint)param_6[1];
    pvVar4 = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)(fVar9 / (float10)param_6[1]))));
    (*(undefined * PTR32 *)(gen_frame + 0x30)) = pvVar4;
    puVar5 = (undefined4 *)
             F_00aa2400(param_2,in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,(*(float *)(gen_frame + 0x24)),(float)fVar9,
                          ((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar4))),(uint)(param_6[2] != 0),0);
    goto switchD_00ac60b6_caseD_b;
  case 0x29: ;
    ((uint *)(gen_frame + 0x3c))[0] = 0x11;
    ((uint *)(gen_frame + 0x3c))[1] = 7;
    ((uint *)(gen_frame + 0x3c))[2] = 0x12;
    ((uint *)(gen_frame + 0x3c))[3] = 0xf;
    ((uint *)(gen_frame + 0x3c))[4] = 9;
    ((uint *)(gen_frame + 0x3c))[5] = 0xe;
    ((uint *)(gen_frame + 0x3c))[6] = 0x16;
    ((uint *)(gen_frame + 0x3c))[7] = 0x3e;
    (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = (undefined4 *)0x0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x2c)) = (undefined4 *)0x1;
    do {
      puVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0x2c));
      if (((uint)(*(undefined4 * PTR32 *)(gen_frame + 0x2c)) & (int)*(short *)(param_6 + 4)) != 0) {
        uVar12 = F_00ab1ff0(((uint *)(gen_frame + 0x3c))[(int)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x28)))]);
        uVar11 = (uint)*(ushort *)(uVar12 + 10);
        if (*(ushort *)(uVar12 + 10) == 0) {
          uVar11 = (*(char *)(uVar12 + 0xf) == '\x02') + 0x20e;
        }
        F_00a7d4b0(uVar11,(*(undefined4 * PTR32 *)(gen_frame + 0x38)),param_2,param_4,param_5,((uint *)(gen_frame + 0x3c))[(int)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x28)))],0,0,0,
                     REFG(float, 0x10916ec));
        puVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0x2c));
      }
      puVar7 = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x28)) + 1);
      puVar5 = (undefined4 *)((int)((int)(uintptr_t)puVar5) << 1 | (uint)((int)puVar5 < 0));
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar7;
      (*(undefined4 * PTR32 *)(gen_frame + 0x2c)) = puVar5;
    } while ((int)puVar7 < 8);
    goto switchD_00ac60b6_caseD_b;
  case 0x2a: ;
    puVar5 = (undefined4 *)F_00aa4270(param_2,0x4d,0,0);
    goto switchD_00ac60b6_caseD_b;
  case 0x2f: ;
    iVar8 = (int)*(short *)(param_6 + 4);
    uVar12 = 0;
    uVar11 = 0x254;
    puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
    break;
  case 0x30: ;
    iVar8 = (int)*(short *)(param_6 + 4);
    uVar12 = 0;
    uVar11 = 0x278;
    puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
  }
  puVar5 = (undefined4 *)
           F_00a7d4b0(uVar11,puVar7,param_2,param_4,param_5,iVar8,uVar12,0,0,REFG(float, 0x10916ec));
switchD_00ac60b6_caseD_b: ;
  F_00c47745(((uint *)(gen_frame + 0x3c))[8] ^ (uint)(uint)(gen_frame + 0x60));
  return (uint)puVar5;
}

/* ref: FUN_00ac69e0 */
uint F_00ac69e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xac69e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  int * piVar2;
  uint3 uVar5;
  int iVar3;
  int * piVar4;
  undefined * this_00;
  int iVar6;
  undefined4 * puVar7;
  undefined * this_01;
  int iVar8;
  
  iVar6 = 0;
  piVar4 = this;
  while ((*piVar4 != param_1 || ((char)piVar4[2] != (char)param_2))) {
    iVar6 = iVar6 + 1;
    piVar4 = piVar4 + 0x19;
    if (0x1f < iVar6) {
      return (uint)piVar4;
    }
  }
  puVar7 = (undefined4 *)(iVar6 * 100 + (int)this);
  if (puVar7 != (undefined4 *)0x0) {
    if (puVar7[5] == -0x20000000) {
      this_00 = (undefined *)0x0;
    }
    else {
      this_00 = (undefined *)F_00a35490(&REFG(undefined4, 0x14a31f0),puVar7[5]);
    }
    if (puVar7[0xf] == -0x20000000) {
      this_01 = (undefined *)0x0;
    }
    else {
      this_01 = (undefined *)F_00a35490(&REFG(undefined4, 0x14a31f0),puVar7[0xf]);
    }
    if (this_00 == (undefined *)0x0) {
      param_1 = 0;
    }
    else {
      param_1 = F_00a5f290(this_00);
    }
    if (this_01 == (undefined *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = F_00a5f290(this_01);
    }
    piVar2 = (int *)F_00ab1ed0((uint)*(ushort *)(puVar7 + 4));
    piVar4 = (int *)0x0;
    if (piVar2 != (int *)0x0) {
      iVar6 = piVar2[7];
      iVar8 = 0;
      do {
        uVar5 = (uint3)((uint)((int)(uintptr_t)piVar2) >> 8);
        if (((char)iVar6 == '\x01') && (iVar8 == 0)) {
          iVar3 = CONCAT31(uVar5,1);
        }
        else {
          iVar3 = (uint)uVar5 << 8;
        }
        F_00ac5fd0(this,param_1,uVar1,(uint)*(ushort *)(puVar7 + 4),
                     (uint)*(byte *)((int)puVar7 + 9),puVar7[3],(int)puVar7 + iVar8 * 8 + 0x42,
                     (uint)*(byte *)(puVar7 + 0x10),iVar3);
        piVar2 = (int *)F_00ac5fd0(this,uVar1,param_1,(uint)*(ushort *)(puVar7 + 4),
                                     (uint)*(byte *)((int)puVar7 + 9),puVar7[3],
                                     (int)puVar7 + iVar8 * 8 + 0x1a,(uint)*(byte *)(puVar7 + 6),0);
        iVar8 = iVar8 + 1;
      } while (iVar8 < 4);
      puVar7[1] = 0;
      *puVar7 = 0;
      *(undefined1 *)(puVar7 + 2) = 0;
      piVar4 = piVar2;
    }
  }
  return (uint)piVar4;
}

/* ref: FUN_00ac6b20 */
uint F_00ac6b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xac6b20u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint in_EAX = 0;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  undefined1 * puVar6;
  int * piVar7;
  int * piVar8;
  undefined2 * puVar9;
  int iVar10;
  
  iVar1 = (int)param_2;
  iVar10 = 0;
  if ('\0' < *(char *)((int)param_2 + 0x1e)) {
    piVar7 = (int *)((int)param_2 + 0x428);
    param_2 = (undefined1 *)((int)param_2 + 0x4a);
    do {
      if ((((*piVar7 != -0x20000000) &&
           (piVar2 = (int *)F_00a354d0(&REFG(undefined4, 0x14a31f0),*piVar7,piVar7[1]), piVar2 != (int *)0x0)) &&
          (uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xb8))(piVar2), (char)uVar3 != '\0')) &&
         (uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xdc))(piVar2), uVar3 != 0)) {
        piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0xdc))(piVar2)));
        iVar5 = 0;
        piVar8 = piVar4;
        do {
          if (*piVar8 == 0) goto LAB_00ac6bb4;
          iVar5 = iVar5 + 1;
          piVar8 = piVar8 + 0x19;
        } while (iVar5 < 0x20);
        iVar5 = 0;
LAB_00ac6bb4: ;
        piVar4 = piVar4 + iVar5 * 0x19;
        piVar4[1] = REFG(int, 0x1379c9c);
        piVar4[5] = param_1;
        *piVar4 = param_3;
        *(char *)(piVar4 + 2) = (char)iVar10;
        piVar4[0xf] = piVar2[0x1d];
        *(undefined1 *)(piVar4 + 6) = 0;
        *(undefined1 *)(piVar4 + 0x10) = 0;
        *(undefined2 *)(piVar4 + 4) = *(undefined2 *)(iVar1 + 8);
        *(undefined1 *)((int)piVar4 + 9) = *(undefined1 *)(iVar1 + 0xb);
        piVar4[3] = *(int *)(iVar1 + 0xc);
        puVar9 = (undefined2 *)((int)piVar4 + 0x46);
        iVar5 = 4;
        puVar6 = param_2;
        do {
          *(undefined1 *)(puVar9 + -2) = puVar6[-6];
          *puVar9 = *(undefined2 *)(puVar6 + -2);
          *(undefined1 *)(puVar9 + 1) = *puVar6;
          *(undefined1 *)((int)puVar9 + -3) = puVar6[-5];
          *(undefined1 *)(puVar9 + -1) = puVar6[-4];
          *(undefined1 *)((int)puVar9 + -1) = puVar6[-3];
          *(undefined1 *)(puVar9 + -0x16) = puVar6[-0x26];
          puVar9[-0x14] = *(undefined2 *)(puVar6 + -0x22);
          *(undefined1 *)(puVar9 + -0x13) = puVar6[-0x20];
          *(undefined1 *)((int)puVar9 + -0x2b) = puVar6[-0x25];
          *(undefined1 *)(puVar9 + -0x15) = puVar6[-0x24];
          *(undefined1 *)((int)puVar9 + -0x29) = puVar6[-0x23];
          puVar6 = puVar6 + 8;
          puVar9 = puVar9 + 4;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      in_EAX = (uint)*(char *)(iVar1 + 0x1e);
      param_2 = param_2 + 0x40;
      iVar10 = iVar10 + 1;
      piVar7 = piVar7 + 2;
    } while (iVar10 < (int)in_EAX);
  }
  return in_EAX;
}

/* ref: FUN_00ac6c80 */
unsigned int F_00ac6c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xac6c80u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  ushort uVar1;
  ushort uVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  uVar1 = *(ushort *)(param_2 + 0x4aa);
  uVar2 = *(ushort *)(param_2 + 0x4ac);
  fVar3 = (float10)*(double *)&REFG(undefined, 0x10a3960);
  fVar4 = (float10)*(double *)&REFG(undefined, 0x10928e8);
  fVar5 = (float10)*(double *)&REFG(undefined, 0x10912a8);
  *param_1 = ((float)GEN_TOF((((float10)*(ushort *)(param_2 + 0x4a8) * fVar3) * fVar4 - fVar5)));
  param_1[1] = ((float)GEN_TOF((((float10)uVar1 * fVar3) * fVar4 - fVar5)));
  param_1[2] = ((float)GEN_TOF((fVar4 * ((float10)uVar2 * fVar3) - fVar5)));
  return 0;
}

/* ref: FUN_00ac6ce0 */
unsigned int F_00ac6ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xac6ce0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  int iVar2;
  undefined * this;
  undefined2 * puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 * puVar7;
  float fVar8;
  
  if (param_1 != (int *)0x0) {
    iVar1 = REFG(int, 0x14bd000) + 1;
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    (*(int *)(gen_frame + 0x1c)) = iVar1;
    REFG(int, 0x14bd000) = iVar1 + 1;
    if (REFG(int, 0x14bd000) == 0) {
      REFG(int, 0x14bd000) = 1;
    }
    (*(float *)(gen_frame + 0x18)) = gen_bits2f(REFG(int, 0x14bd000));
    F_00ac6b20(param_1[0x1d],param_2,REFG(int, 0x14bd000));
    iVar2 = (int)*(char *)((int)param_2 + 0x1e);
    uVar5 = (uint)*(ushort *)(param_2 + 2);
    uVar6 = param_2[3];
    puVar7 = param_2 + 0x10a;
    uVar4 = (uint)*(byte *)((int)param_2 + 0xb);
    iVar1 = (*(int *)(gen_frame + 0x1c));
    fVar8 = (*(float *)(gen_frame + 0x18));
    this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xd8))(param_1)));
    F_00ac3e50(this,uVar4,uVar6,uVar5,puVar7,iVar2,iVar1,(undefined4)gen_fl2bits(fVar8));
    F_00ac6c80(((undefined1 *)(gen_frame + 0x0)),param_2);
    (*(float *)(gen_frame + 0x18)) = gen_bits2f((uint)*(ushort *)(param_2 + 7));
    (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF((((float10)*(ushort *)(param_2 + 7) *
                       (((float10)*(float *)&REFG(undefined, 0x1336738) * (float10)*(double *)&REFG(undefined, 0x1088118)) /
                       (float10)REFG(double, 0x109cab0))) * (float10)*(double *)&REFG(undefined, 0x10928e8) -
                      (float10)*(double *)&REFG(undefined, 0x1080228))));
    puVar3 = ((undefined2 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xd8))(param_1)));
    *(undefined4 *)(puVar3 + 4) = 0;
    *(undefined4 *)(puVar3 + 10) = 0;
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 2) = 0;
    *(undefined4 *)(puVar3 + 0x1c) = 0;
    *(undefined4 *)(puVar3 + 0x1a) = 0;
    *(undefined4 *)(puVar3 + 8) = 0xe0000000;
    F_00aa6ad0(param_1,(uint)*(byte *)((int)param_2 + 0xb),param_2[3],*param_2,param_2[1],((undefined1 *)(gen_frame + 0x0))
                 ,(*(float *)(gen_frame + 0x18)),(*(int *)(gen_frame + 0x1c)),(uint)*(byte *)((int)param_2 + 10),0xe0000000);
  }
  return 0;
}

/* ref: FUN_00ac6e20 */
unsigned int F_00ac6e20(unsigned int gen_a0)
{
  GEN_ENTER(0xac6e20u, gen_a0, 0u, 0u, 0u);
  undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)(in_ecx + 0x20) = 0;
  *(undefined1 *)(in_ecx + 0x22) = 0;
  *(undefined4 *)(in_ecx + 0x24) = 0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 0x1c) = 0;
  *(undefined4 *)(in_ecx + 0x1a) = 0;
  *(undefined4 *)(in_ecx + 8) = 0xe0000000;
  *(undefined4 *)(in_ecx + 10) = 0;
  *in_ecx = 0;
  *(undefined4 *)(in_ecx + 2) = 0;
  *(undefined4 *)(in_ecx + 0x28) = 0;
  *(undefined4 *)(in_ecx + 0x26) = 0;
  in_ecx[0xa4] = 0;
  *(undefined4 *)(in_ecx + 0x2c) = 0xe0000000;
  *(undefined4 *)(in_ecx + 0x2e) = 0;
  puVar2 = (undefined4 *)(in_ecx + 0x2c);
  puVar3 = (undefined4 *)(in_ecx + 0x30);
  for (iVar1 = 0x3a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}

/* ref: FUN_00ac6e80 */
uint F_00ac6e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xac6e80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  char cVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ushort * puVar7;
  int iVar8;
  int * piVar9;
  undefined * pvVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  
  uVar4 = F_00ac1a20(param_1,param_2);
  iVar8 = REFG(int, 0x1379694);
  if (REFG(int, 0x1379694) == 0) {
    return 0x243;
  }
  uVar5 = F_00ab1ed0(uVar4);
  if (uVar5 == 0) {
    return 0x243;
  }
  if ((((REFG(char, 0x1379c7c) == '\x02') || (REFG(char, 0x1379c7c) == '\x06')) && (0 < param_1)) && (param_1 < 3)) {
    return 0x251;
  }
  if ((uVar4 == 4) && (*(byte *)(iVar8 + 0x2e08) != 0)) {
    uVar6 = F_00ab2840((uint)*(byte *)(iVar8 + 0x2e08));
    if (uVar6 == 0) {
      return 0x243;
    }
    if (-1 < *(char *)(uVar6 + 0xa0)) {
      uVar12 = 0x34;
      goto LAB_00ac6f7f;
    }
  }
  bVar3 = *(byte *)(uVar5 + 0x27);
  if ((bVar3 != 0) && (((&REFG(undefined1, 0x14b4ec0))[bVar3 >> 3] & (byte)(1 << (bVar3 & 7))) == 0)) {
    return 0x23d;
  }
  if ((*(char *)(uVar5 + 0x3d) != '\0') && (bVar3 = F_00a4a790(&REFG(undefined, 0x14a7360),0x30), bVar3 == 0)) {
    return 0x243;
  }
  if (param_1 == 5) {
    if (param_2 == 1) {
      uVar12 = 0x38;
LAB_00ac6f7f: ;
      bVar3 = F_00a4a790(&REFG(undefined, 0x14a7360),uVar12);
      return (-(uint)(bVar3 != 0) & 0xfffffdbd) + 0x243;
    }
    if (param_2 == 2) {
      uVar12 = 0x30;
      goto LAB_00ac6f7f;
    }
  }
  bVar3 = F_00ac2f20();
  if (bVar3 != 0) {
    if ((*(int *)((int)this + 0x14) != 1) && (*(int *)((int)this + 0x14) != 2)) {
      return 0x244;
    }
    return 0x250;
  }
  bVar3 = F_00a4a790(&REFG(undefined, 0x14a7360),0x39);
  if (bVar3 == 0) {
    return 0x243;
  }
  if ((param_1 == 2) && (bVar3 = F_00a4a790(&REFG(undefined, 0x14a7360),0x3a), bVar3 == 0)) {
    return 0x243;
  }
  if (((char)param_5 != '\0') && (bVar3 = F_00ac4bf0(this,param_1,param_2), bVar3 == 0)) {
    return 0x246;
  }
  bVar3 = F_00ac2900(uVar4);
  if (bVar3 == 0) {
    return 0x245;
  }
  if ((uVar4 == 5) || ((param_1 == 5 && (param_2 == 7)))) {
    if ((REFG(undefined1, 0x14b4ec0) & 0x10) == 0) {
      return 0x23d;
    }
    bVar3 = F_00ab1db0(*(undefined4 *)&REFG(undefined2, 0x1379c78));
    if (bVar3 == 0) {
      return 0x688;
    }
    bVar3 = F_00a4a790(&REFG(undefined, 0x14a7360),0x7e);
    if (bVar3 == 0) {
      return 0x243;
    }
  }
  if ((uVar4 == 6) || ((param_1 == 5 && (param_2 == 8)))) {
    if ((REFG(undefined1, 0x14b4ec0) & 2) == 0) {
      return 0x23d;
    }
    bVar3 = F_00ab1e10(*(undefined4 *)&REFG(undefined2, 0x1379c78));
    if (bVar3 == 0) {
      return 0x675;
    }
    bVar3 = F_00a4a790(&REFG(undefined, 0x14a7360),0x80);
    if (bVar3 == 0) {
      return 0x243;
    }
  }
  if (((uVar4 == 0xa5) || (uVar4 == 0xaa)) && (bVar3 = F_00ac36d0(), bVar3 == 0)) {
    return 0x531;
  }
  if ((*(char *)(uVar5 + 0x23) != '\x19') && (*(char *)(iVar8 + 0x2e08) != '\0')) {
    return 0x243;
  }
  if ((*(char *)(iVar8 + 0x188) == '\b') && (*(char *)(uVar5 + 0x1c) != '\v')) {
    return 0x243;
  }
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 1: ;
    bVar3 = F_00ac4a90(this,1,uVar4);
    if (bVar3 == 0) {
      bVar3 = F_00ac1ae0(uVar4,(uint)*(byte *)(iVar8 + 0x1688));
      return 0x23e - (bVar3 != 0);
    }
    cVar1 = *(char *)(uVar5 + 0x1c);
    if (cVar1 == '\x06') {
      if ((*(char *)(uVar5 + 0x2b) != '\x12') && (*(char *)(iVar8 + 0x188) != '\x06')) {
        return 0x248;
      }
    }
    else if (cVar1 == '\a') {
      if (*(char *)(iVar8 + 0x188) != '\x05') {
        return 0x24a;
      }
    }
    else if (cVar1 == '\t') {
      uVar5 = F_00ab21a0((uint)*(byte *)(iVar8 + 0x1688));
      if (uVar5 == 0) {
        return 0x23e;
      }
      iVar8 = 0;
      puVar7 = (ushort *)(uVar5 + 0x38);
      while (*puVar7 != param_2) {
        iVar8 = iVar8 + 1;
        puVar7 = puVar7 + 1;
        if (2 < iVar8) {
          return 0x23e;
        }
      }
      if (iVar8 < 0) {
        return 0x23e;
      }
      uVar5 = REFG(undefined2, 0x14b29b6) / 10000;
      if (3 < (byte)uVar5) {
        uVar5 = 3;
      }
      if ((int)uVar5 < iVar8 + 1) {
        return 0x23c;
      }
    }
    else {
      if (*(char *)(iVar8 + 0x188) == '\x06') {
        return 0x249;
      }
      if (*(char *)(iVar8 + 0x188) == '\x05') {
        return 0x24b;
      }
    }
    uVar5 = F_00ac4c30(param_1,param_2);
    if (uVar5 != 0) {
      return uVar5;
    }
    uVar4 = F_00ac23f0(this,uVar4);
    if (uVar4 != 0) {
      return uVar4;
    }
    break;
  case 2: ;
    uVar4 = F_00ab24a0(param_2);
    if (uVar4 == 0) {
      return 0x243;
    }
    puVar7 = (ushort *)F_00ab24e0((uint)*(ushort *)(uVar4 + 0x90));
    if (puVar7 == (ushort *)0x0) {
      return 0x243;
    }
    if ((*(char *)((int)puVar7 + 0x27) == '\0') && ((*(byte *)(iVar8 + 0x2dd2) & 2) != 0)) {
      return 0x23f;
    }
    if (((char)puVar7[0x14] == '\0') && (bVar3 = F_00a620a0(), bVar3 != 0)) {
      return 0x27f;
    }
    uVar4 = F_00a41080(&REFG(undefined, 0x14a4230),param_2,0,1,1);
    if (uVar4 == 0) {
      return 0x247;
    }
    pvVar10 = (undefined *)F_00a40a20(&REFG(undefined, 0x14a4230),param_2,0,0,1,1);
    if (pvVar10 == (undefined *)0x0) {
      return 0x247;
    }
    uVar4 = F_00a37c50(pvVar10);
    if (uVar4 != 0) {
      return 0x23c;
    }
    uVar4 = F_00ac23f0(this,(uint)*puVar7);
    if (uVar4 != 0) {
      return uVar4;
    }
    if (*puVar7 == 0x353) {
      if ((!GEN_ISNAN(REFG(float, 0x14ab588)) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
          !(REFG(float, 0x14ab588) <= *(float *)&REFG(undefined, 0x1088114))) {
        return 0x532;
      }
      if ((REFG(undefined1, 0x14b4ec2) & 4) == 0) {
        return 0x23d;
      }
      bVar3 = F_00ac36a0();
      if (bVar3 == 0) {
        return 0x531;
      }
      if (7 < REFG(undefined1, 0x1338ad4)) {
        return 0x534;
      }
      if (*(char *)(iVar8 + 0x2e08) != '\0') {
        return 0x243;
      }
      if ((*(short *)(iVar8 + 0xe6) == -0x7ffe) || (*(short *)(iVar8 + 0xe6) == -0x7ff9)) {
        return 0x535;
      }
    }
    if ((*puVar7 == 0x3f5) && (bVar3 = F_00a6b2e0(&REFG(undefined, 0x14ab584),(uint)puVar7[1]), bVar3 == 1)) {
      return 0x53a;
    }
    uVar2 = *puVar7;
    if ((uVar2 == 0x355) && (bVar3 = F_009080e0(&REFG(undefined, 0x14a9e40),(uint)puVar7[1]), bVar3 == 1)) {
      return 0x260;
    }
    if ((uVar2 == 0x52a) && (bVar3 = F_00a68960(&REFG(undefined1, 0x14ab070),(uint)puVar7[1]), bVar3 == 1)) {
      return 0x283;
    }
    if (param_2 == 0x16f9) {
      uVar4 = F_00ab21a0((uint)*(byte *)(iVar8 + 0x1688));
      if (uVar4 == 0) {
        return 0x23e;
      }
      if (*(int *)(uVar4 + 0x10) == 0x20) {
        return 0x23e;
      }
      if (*(int *)(uVar4 + 0x10) == 0x21) {
        return 0x23e;
      }
      iVar8 = 0;
      while ((&REFG(undefined1, 0x14ab294))[iVar8] == '\0') {
        iVar8 = iVar8 + 1;
        if (5 < iVar8) {
          return 0x243;
        }
      }
    }
    break;
  case 3: ;
    uVar4 = param_2;
    pvVar10 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),0x7d4);
    bVar3 = F_00a3ab80(pvVar10,uVar4);
    if (bVar3 == 0) {
      return 0x247;
    }
    if ((param_3 != 0 || param_4 != 0) && (*(char *)(uVar5 + 0x34) == '\0')) {
      uVar4 = F_00475fa0(param_3,param_4);
      if (uVar4 == 0) {
        return 0x233;
      }
      pvVar10 = (undefined *)F_006b8c00();
      bVar3 = F_006e3330(pvVar10,uVar4,param_2);
      if (bVar3 == 0) {
        return 0x233;
      }
    }
    break;
  case 5: ;
    if (param_2 == 6) {
      uVar4 = F_00ab21a0((uint)*(byte *)(iVar8 + 0x1688));
      if (*(int *)(uVar4 + 0x10) != 0x21) {
        return 0x23e;
      }
      bVar3 = F_00a4a790(&REFG(undefined, 0x14a7360),0x17);
      if (bVar3 == 0) {
        return 0x243;
      }
    }
    else if ((param_2 == 0xc) || (param_2 == 0xd)) {
      bVar3 = F_00a4a790(&REFG(undefined, 0x14a7360),7);
      if (bVar3 == 0) {
        return 0x243;
      }
      piVar9 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      uVar12 = 0x23;
      uVar4 = ((code *)*(gen_code32 *)(*piVar9 + 0x48))(piVar9);
      piVar9 = (int *)F_00763050(uVar4,uVar12);
      uVar4 = ((code *)*(gen_code32 *)(*piVar9 + 0x10))(piVar9);
      if ((char)uVar4 != '\0') {
        return 0x197;
      }
    }
    uVar4 = F_00ac4c30(param_1,param_2);
    if (uVar4 != 0) {
      return uVar4;
    }
    if (param_2 == 3) {
      uVar4 = REFG(undefined2, 0x14b29b6) / 10000;
      if ((byte)uVar4 < 4) {
        if ((byte)uVar4 == 0) {
          return 0x23c;
        }
      }
      else {
        uVar4 = 3;
      }
      uVar5 = F_00ab21a0((uint)*(byte *)(iVar8 + 0x1688));
      if (uVar5 == 0) {
        return 0x23e;
      }
      uVar4 = (uint)*(ushort *)(uVar5 + 0x36 + uVar4 * 2);
      if (uVar4 == 0) {
        return 0x23e;
      }
      uVar12 = 1;
      uVar11 = F_00533b60(&REFG(undefined4, 0x1375bc0));
      uVar4 = F_00ac6e80(this,1,uVar4,(int)uVar11,(int)(uVar11 >> 0x20),uVar12);
      if (uVar4 != 0) {
        return uVar4;
      }
    }
    break;
  case 6: ;
    if (param_2 == 5) {
      uVar12 = 0;
LAB_00ac76ff: ;
      bVar3 = F_00a6b380(&REFG(undefined, 0x14ab584),uVar12);
      if (bVar3 == 0) {
        return 0x52a;
      }
    }
    else {
      if (param_2 == 6) {
        uVar12 = 1;
        goto LAB_00ac76ff;
      }
      if (param_2 == 7) {
        uVar12 = 2;
        goto LAB_00ac76ff;
      }
    }
    if (REFG(float, 0x14ab588) <= 0.0) {
      return 0x536;
    }
    break;
  case 8: ;
    uVar4 = F_00ac2ca0(param_2);
    if (uVar4 != 0) {
      return uVar4;
    }
    break;
  case 9: ;
    uVar12 = 0xa0001;
    pvVar10 = (undefined *)F_006b8c00();
    pvVar10 = (undefined *)F_006e3240(pvVar10,uVar12);
    if (pvVar10 != (undefined *)0x0) {
      uVar4 = F_006d0480(pvVar10,param_2,iVar8);
      return uVar4;
    }
    break;
  case 0xb: ;
    if (REFG(char, 0x14ab5ba) == '\0') {
      return 0x27b;
    }
    uVar4 = F_00ab2d50(param_2);
    if ((uVar4 == 0) ||
       ((*(char *)(uVar4 + 0xe) != '\0' && (*(char *)(uVar4 + 0xe) != REFG(char, 0x14ab5ba))))) {
      return 0x27c;
    }
    uVar2 = *(ushort *)(uVar4 + 0xc);
    if ((uVar2 != 0) && (REFG(char, 0x14ab73c) == '\a')) {
      return 0x27e;
    }
    if (((4 < (int)param_2) && ((int)param_2 < 7)) && (REFG(undefined1, 0x14ab73d) == param_2)) {
      return 0x281;
    }
    if (uVar2 != 0) {
      uVar5 = F_00ab1ed0((uint)uVar2);
      if (uVar5 == 0) {
        return 0x243;
      }
      uVar6 = F_00a68280(&REFG(undefined1, 0x14ab070),0xffffffff,1);
      if ((ushort)uVar6 < (ushort)*(byte *)(uVar5 + 0x1f)) {
        return 0x23d;
      }
    }
    if (*(char *)(uVar4 + 0x10) == '\x01') {
      return 0x27d;
    }
    break;
  case 0xd: ;
    if ((REFG(undefined1, 0x14b4ec2) & 2) == 0) {
      return 0x28d;
    }
    bVar3 = F_00a4a790(&REFG(undefined, 0x14a7360),4);
    if (bVar3 == 0) {
      return 0x243;
    }
    uVar4 = F_00ab1c90(*(undefined4 *)&REFG(undefined2, 0x1379c78));
    if ((uVar4 != 0) && (*(char *)(uVar4 + 0x2e) == '\0')) {
      return 0x28e;
    }
    if ((!GEN_ISNAN(REFG(float, 0x14ab588)) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
        (!(REFG(float, 0x14ab588) < *(float *)&REFG(undefined, 0x1088114)) && REFG(uint, 0x14ab588) != *(float *)&REFG(undefined, 0x1088114))) {
      return 0x243;
    }
    bVar3 = F_00a68960(&REFG(undefined1, 0x14ab070),param_2);
    if (bVar3 == 0) {
      return 0x243;
    }
  }
  return 0;
}

/* ref: FUN_00ac78f0 */
byte F_00ac78f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xac78f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  
  if (param_1 == 1) {
    uVar2 = F_00ab1ed0(param_2);
    if (*(char *)(uVar2 + 0x2b) == '\0') {
      return 0;
    }
  }
  bVar1 = F_00ac4a90(this,param_1,param_2);
  return bVar1 != 0;
}

/* ref: FUN_00ac7930 */
byte F_00ac7930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xac7930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00ac6e80(this,param_1,param_2,0,0,0);
  return uVar1 == 0;
}

/* ref: FUN_00ac7950 */
unsigned int F_00ac7950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xac7950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1 != (undefined *)0x0) {
    uVar1 = F_00a5feb0(param_1);
    F_00ac4ed0(uVar1);
  }
  return 0;
}

/* ref: FUN_00ac83b0 */
byte F_00ac83b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xac83b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  double dVar6;
  float fVar7;
  
  this_00 = REFG(undefined4, 0x1379694);
  if ((((*(int *)&gen_args[6]) != 1) && (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) != '\0')) || (REFG(undefined4, 0x1379694) == (undefined *)0x0)) {
    return 0;
  }
  uVar1 = F_00ac1a20((*(undefined4 *)&gen_args[1]),(*(int *)&gen_args[2]));
  uVar2 = F_00ab1ed0(uVar1);
  if (uVar2 == 0) {
    return 0;
  }
  uVar3 = F_00ac6e80((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(int *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),1);
  if ((uVar1 == 4) && (*(byte *)((int)this_00 + 0x2e08) != 0)) {
    uVar4 = F_00ab2840((uint)*(byte *)((int)this_00 + 0x2e08));
    if (uVar4 == 0) {
      return 0;
    }
    if (-1 < *(char *)(uVar4 + 0xa0)) {
      F_00a51200(4,0,0,0,0);
      return 1;
    }
  }
  if ((((*(int *)&gen_args[6]) != 2) && (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) == '\0')) &&
     ((uVar1 != 5 &&
      ((((uVar3 == 0x246 || (uVar3 == 0x244)) ||
        ((!GEN_ISNAN(*(float *)(*(undefined * PTR32 *)&gen_args[0])) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
         !(*(float *)(*(undefined * PTR32 *)&gen_args[0]) <= *(float *)&REFG(undefined, 0x1088114)))) &&
       ((*(char *)(uVar2 + 0x1c) == '\x03' || (*(char *)(uVar2 + 0x1c) == '\x02')))))))) {
    fVar7 = F_00ac3090((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(int *)&gen_args[2]));
    dVar6 = F_00ac3060((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(int *)&gen_args[2]));
    if ((float10)fVar7 - (float10)dVar6 <= (float10)REFG(double, 0x1088108)) {
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60))) = (*(int *)&gen_args[2]);
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = (*(undefined4 *)&gen_args[1]);
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6c))) = (*(undefined4 *)&gen_args[4]);
      *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) = 1;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x68))) = (*(undefined4 *)&gen_args[3]);
      return 1;
    }
  }
  if (uVar3 != 0) {
    F_00a7d4b0(uVar3,this_00,0,(*(undefined4 *)&gen_args[1]),(*(int *)&gen_args[2]),0,0,0,0,REFG(float, 0x10916ec));
    return 0;
  }
  if (*(char *)(uVar2 + 0x34) == '\x01') {
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70))) = uVar1;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) = (*(undefined4 *)&gen_args[1]);
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))) = (*(int *)&gen_args[2]);
    if (*(char *)(uVar2 + 0x1c) != '\b') {
      return 0;
    }
    piVar5 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    if (piVar5 == (int *)0x0) {
      return 0;
    }
    ((code *)*(gen_code32 *)(*piVar5 + 0x8c))(piVar5);
    return 0;
  }
  F_00af2090();
  (*(undefined1 *)((char *)&(*(int *)&gen_args[6]) + 3)) = 1;
  switch((unsigned int)(uintptr_t)((*(undefined4 *)&gen_args[1]))) {
  case 1: ;
  case 2: ;
  case 3: ;
  case 0xd: ;
    if ((((*(int *)&gen_args[2]) == 0x121) || ((*(int *)&gen_args[2]) == 0x128)) ||
       (((*(int *)&gen_args[2]) == 299 || (((*(int *)&gen_args[2]) == 0x129 || ((*(int *)&gen_args[2]) == 0x120))))))
    goto switchD_00ac856f_caseD_a;
    uVar1 = F_00ac7970((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(int *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),&REFG(float, 0x1375ac0),(*(undefined4 *)&gen_args[5]));
    (*(undefined1 *)((char *)&(*(int *)&gen_args[6]) + 3)) = (byte)uVar1;
    goto LAB_00ac85b8;
  case 5: ;
    F_00ac5420((*(undefined * PTR32 *)&gen_args[0]),(*(int *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
    break;
  case 6: ;
    F_00ac5000((*(undefined * PTR32 *)&gen_args[0]),(*(int *)&gen_args[2]));
    break;
  case 8: ;
    F_00ac2d50((*(undefined * PTR32 *)&gen_args[0]),(*(int *)&gen_args[2]));
    break;
  case 9: ;
    uVar1 = F_00ac2c60((*(int *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
    (*(undefined1 *)((char *)&(*(int *)&gen_args[6]) + 3)) = (byte)uVar1;
    goto LAB_00ac85b8;
  case 10: ;
switchD_00ac856f_caseD_a: ;
    uVar1 = F_00ac2c80((*(int *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
    (*(undefined1 *)((char *)&(*(int *)&gen_args[6]) + 3)) = (byte)uVar1;
LAB_00ac85b8: ;
    if ((*(undefined1 *)((char *)&(*(int *)&gen_args[6]) + 3)) == 0) {
      return 0;
    }
    break;
  case 0xb: ;
    F_00ac5140((*(undefined * PTR32 *)&gen_args[0]),(*(int *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
  }
  F_00aa0f60(this_00,1);
  return (*(undefined1 *)((char *)&(*(int *)&gen_args[6]) + 3));
}

/* ref: FUN_00ac8670 */
uint F_00ac8670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xac8670u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x6c))(piVar1);
  if ((char)uVar2 == '\x01') {
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x70))(piVar1);
    if ((char)uVar2 == '\0') {
      *param_1 = (uint)(*(int *)(REFG(int, 0x1370b90) + 0x90) * 0x32) / 100;
      *param_2 = (uint)(*(int *)(REFG(int, 0x1370b90) + 0x94) * 0x14) / 100;
      return (uint)param_2;
    }
  }
  uVar2 = F_0053b2c0();
  *param_1 = uVar2;
  uVar2 = F_0053b2e0();
  *param_2 = uVar2;
  return uVar2;
}

/* ref: FUN_00ac8af0 */
byte F_00ac8af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xac8af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  char cVar1;
  undefined * this_00;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int * piVar7;
  
  iVar2 = (*(int *)&gen_args[2]);
  if ((*(int *)&gen_args[1]) == 1) {
    if (REFG(undefined4, 0x1379694) == (undefined *)0x0) {
      return 0;
    }
    uVar3 = F_00ac1a20(1,(*(int *)&gen_args[2]));
    uVar4 = F_00ab1ed0(uVar3);
    if (*(char *)(uVar4 + 0x2b) == -1) {
      return 0;
    }
    cVar1 = *(char *)(uVar4 + 0x1c);
    if (cVar1 == '\0') {
      return 0;
    }
    if (cVar1 == '\x01') {
      return 0;
    }
    if (cVar1 == '\x05') {
      return 0;
    }
    if (cVar1 == '\b') {
      return 0;
    }
    if (uVar3 == 4) {
      return 0;
    }
    if (uVar3 == 5) {
      return 0;
    }
    if (uVar3 == 6) {
      return 0;
    }
  }
  this_00 = REFG(undefined4, 0x1379694);
  if ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) != '\0') || (REFG(undefined4, 0x1379694) == (undefined *)0x0)) {
    return 0;
  }
  uVar3 = F_00ac1a20((*(int *)&gen_args[1]),(*(int *)&gen_args[2]));
  uVar4 = F_00ab1ed0(uVar3);
  if (uVar4 == 0) {
    return 0;
  }
  uVar5 = F_00ac6e80((*(undefined * PTR32 *)&gen_args[0]),(*(int *)&gen_args[1]),(*(int *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),1);
  if ((uVar3 == 4) && (*(byte *)((int)this_00 + 0x2e08) != 0)) {
    uVar6 = F_00ab2840((uint)*(byte *)((int)this_00 + 0x2e08));
    if (uVar6 == 0) {
      return 0;
    }
    if (-1 < *(char *)(uVar6 + 0xa0)) {
      F_00a51200(4,0,0,0,0);
      return 1;
    }
  }
  if (uVar5 != 0) {
    F_00a7d4b0(uVar5,this_00,0,(*(int *)&gen_args[1]),(*(int *)&gen_args[2]),0,0,0,0,REFG(float, 0x10916ec));
    return 0;
  }
  if (*(char *)(uVar4 + 0x34) == '\x01') {
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70))) = uVar3;
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) = (*(int *)&gen_args[1]);
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))) = (*(int *)&gen_args[2]);
    if ((*(char *)(uVar4 + 0x1c) == '\b') &&
       (piVar7 = (int *)F_00424750(REFG(undefined4, 0x137104c)), piVar7 != (int *)0x0)) {
      ((code *)*(gen_code32 *)(*piVar7 + 0x8c))(piVar7);
    }
    return 0;
  }
  F_00af2090();
  (*(undefined1 *)((char *)&(*(int *)&gen_args[2]) + 3)) = 1;
  switch((unsigned int)(uintptr_t)((*(int *)&gen_args[1]))) {
  case 1: ;
  case 2: ;
  case 3: ;
  case 0xd: ;
    if ((((iVar2 == 0x121) || (iVar2 == 0x128)) || (iVar2 == 299)) ||
       ((iVar2 == 0x129 || (iVar2 == 0x120)))) goto switchD_00ac8c99_caseD_a;
    uVar3 = F_00ac7970((*(undefined * PTR32 *)&gen_args[0]),(*(int *)&gen_args[1]),iVar2,(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),&REFG(float, 0x1375ac0),0);
    (*(undefined1 *)((char *)&(*(int *)&gen_args[2]) + 3)) = (byte)uVar3;
    goto LAB_00ac8cdd;
  case 5: ;
    F_00ac5420((*(undefined * PTR32 *)&gen_args[0]),iVar2,(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
    break;
  case 6: ;
    F_00ac5000((*(undefined * PTR32 *)&gen_args[0]),iVar2);
    break;
  case 8: ;
    F_00ac2d50((*(undefined * PTR32 *)&gen_args[0]),iVar2);
    break;
  case 9: ;
    uVar3 = F_00ac2c60(iVar2,(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
    (*(undefined1 *)((char *)&(*(int *)&gen_args[2]) + 3)) = (byte)uVar3;
    goto LAB_00ac8cdd;
  case 10: ;
switchD_00ac8c99_caseD_a: ;
    uVar3 = F_00ac2c80(iVar2,(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
    (*(undefined1 *)((char *)&(*(int *)&gen_args[2]) + 3)) = (byte)uVar3;
LAB_00ac8cdd: ;
    if ((*(undefined1 *)((char *)&(*(int *)&gen_args[2]) + 3)) == 0) {
      return 0;
    }
    break;
  case 0xb: ;
    F_00ac5140((*(undefined * PTR32 *)&gen_args[0]),iVar2,(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
  }
  F_00aa0f60(this_00,1);
  return (*(undefined1 *)((char *)&(*(int *)&gen_args[2]) + 3));
}

/* ref: FUN_00ac9740 */
uint F_00ac9740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xac9740u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  uint uVar5;
  int * piVar6;
  undefined * this;
  undefined4 uVar7;
  int iVar8;
  undefined1 * puVar9;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  (*(int *)(gen_frame + 0x24)) = param_1;
  uVar5 = 0;
  if (param_1 != 0) {
    uVar2 = F_00ac1a20(param_3,param_4);
    uVar5 = 0;
    if (uVar2 != 0) {
      uVar3 = F_00ab1ed0(uVar2);
      uVar5 = 0;
      if (uVar3 != 0) {
        cVar1 = *(char *)(uVar3 + 0x1c);
        uVar5 = CONCAT31((int3)(uVar3 >> 8),cVar1);
        if (((cVar1 != '\x01') && (uVar2 != 0x2dd)) && (uVar2 != 0x2de)) {
          if ((param_3 == 2) || (param_3 == 3)) {
            uVar7 = 0x217;
          }
          else {
            if (param_3 == 0xd) {
              puVar4 = (uint *)F_00ab2840(param_4);
              uVar5 = 0;
              if (puVar4 != (uint *)0x0) {
                F_004816e0(((undefined1 *)(gen_frame + 0xc)));
                uVar5 = F_0042cc20(((undefined1 *)(gen_frame + 0x28)),(*puVar4 & 0xffffff) + (int)puVar4,REFG(undefined4, 0x108cc50));
                F_004918c0(((undefined1 *)(gen_frame + 0x7c)),uVar5);
                F_00493b50(((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x7c)));
                F_004917c0(((undefined1 *)(gen_frame + 0x7c)));
                F_0042c880(((undefined1 *)(gen_frame + 0x28)));
                piVar6 = (int *)F_00424750(REFG(undefined4, 0x137104c));
                puVar9 = ((undefined1 *)(gen_frame + 0xc));
                uVar7 = 0x286;
                iVar8 = (*(int *)(gen_frame + 0x24));
                this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0x28))(piVar6)));
                F_0046ab30(this,uVar7,iVar8,puVar9);
                uVar5 = F_00493180(((undefined1 *)(gen_frame + 0xc)));
                F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
                return uVar5;
              }
              goto LAB_00ac98c0;
            }
            if (cVar1 == '\x02') {
              uVar7 = 0x216;
            }
            else {
              uVar7 = 0x215;
            }
          }
          uVar5 = F_00a7d4b0(uVar7,(*(int *)(gen_frame + 0x24)),0,param_3,param_4,0,0,0,0,REFG(float, 0x10916ec));
        }
      }
    }
  }
LAB_00ac98c0: ;
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar5;
}

/* ref: FUN_00ac98d0 */
uint F_00ac98d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xac98d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  int * piVar3;
  undefined * this;
  int iVar4;
  uint * puVar5;
  undefined4 uVar6;
  int iVar7;
  
  uVar1 = F_00a64450(&REFG(undefined, 0x14a9a18),param_1);
  puVar5 = (uint *)(param_2 + 0x428);
  if (*puVar5 == 0xe0000000) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00a354d0(&REFG(undefined4, 0x14a31f0),*puVar5,*(undefined4 *)(param_2 + 0x42c));
  }
  F_00ac9740(uVar1,uVar2,(uint)*(byte *)(param_2 + 0xb),*(undefined4 *)(param_2 + 0xc));
  uVar1 = F_00ac6b20(param_1,param_2,0xffffffff);
  iVar4 = 0;
  if ('\0' < *(char *)(param_2 + 0x1e)) {
    do {
      uVar1 = *puVar5;
      if (uVar1 != 0xe0000000) {
        piVar3 = (int *)F_00a354d0(&REFG(undefined4, 0x14a31f0),uVar1,puVar5[1]);
        uVar1 = 0;
        if ((piVar3 != (int *)0x0) &&
           (uVar1 = ((code *)*(gen_code32 *)(*piVar3 + 0xb8))(piVar3), (char)uVar1 != '\0')) {
          uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0xdc))(piVar3);
          uVar1 = 0;
          if (uVar2 != 0) {
            uVar6 = 0xffffffff;
            iVar7 = iVar4;
            this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xdc))(piVar3)));
            uVar1 = F_00ac69e0(this,uVar6,iVar7);
          }
        }
      }
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 2;
    } while (iVar4 < *(char *)(param_2 + 0x1e));
  }
  return uVar1;
}

/* ref: FUN_00ac99b0 */
unsigned int F_00ac99b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xac99b0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  undefined * this;
  undefined4 * puVar5;
  int iVar6;
  undefined4 * puVar7;
  int iVar8;
  int iVar9;
  int local_8;
  
  if (param_2 != 0) {
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0xd8))(param_1);
    if (*(int *)(uVar2 + 0x58) == -0x20000000) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_00a354d0(&REFG(undefined4, 0x14a31f0),*(int *)(uVar2 + 0x58),*(undefined4 *)(uVar2 + 0x5c));
    }
    uVar3 = ((code *)*(gen_code32 *)(*param_1 + 0xd8))(param_1);
    uVar1 = *(undefined4 *)(uVar3 + 0x48);
    uVar3 = ((code *)*(gen_code32 *)(*param_1 + 0xd8))(param_1);
    F_00ac9740(param_1,uVar2,(uint)*(byte *)(uVar3 + 0x44),uVar1);
    local_8 = 0;
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0xd8))(param_1);
    if (*(char *)(uVar2 + 0x148) != '\0') {
      iVar6 = 0x58;
      do {
        uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0xd8))(param_1);
        if ((((*(int *)(iVar6 + uVar2) != -0x20000000) &&
             (piVar4 = (int *)F_00a354d0(&REFG(undefined4, 0x14a31f0),*(int *)(iVar6 + uVar2),
                                           *(undefined4 *)(iVar6 + 4 + uVar2)), piVar4 != (int *)0x0
             )) && (uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0xb8))(piVar4), (char)uVar2 != '\0')) &&
           (uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0xdc))(piVar4), uVar2 != 0)) {
          iVar8 = param_2;
          iVar9 = local_8;
          this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0xdc))(piVar4)));
          F_00ac69e0(this,iVar8,iVar9);
        }
        local_8 = local_8 + 1;
        iVar6 = iVar6 + 8;
        uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0xd8))(param_1);
      } while (local_8 < (int)(uint)*(byte *)(uVar2 + 0x148));
    }
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0xd8))(param_1);
    *(undefined4 *)(uVar2 + 0x50) = 0;
    *(undefined4 *)(uVar2 + 0x4c) = 0;
    *(undefined2 *)(uVar2 + 0x148) = 0;
    *(undefined4 *)(uVar2 + 0x58) = 0xe0000000;
    *(undefined4 *)(uVar2 + 0x5c) = 0;
    puVar5 = (undefined4 *)(uVar2 + 0x58);
    puVar7 = (undefined4 *)(uVar2 + 0x60);
    for (iVar6 = 0x3a; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0xd8))(param_1);
    *(undefined1 *)(uVar2 + 0x44) = 0;
    *(undefined4 *)(uVar2 + 0x48) = 0;
    *(undefined4 *)(uVar2 + 0x40) = 0;
  }
  return 0;
}

/* ref: FUN_00ac9b30 */
uint F_00ac9b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xac9b30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  int * this;
  uint uVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined * this_00;
  undefined3 extraout_var_00 = 0;
  undefined2 * puVar4;
  int iVar5;
  uint uVar6;
  float10 fVar7;
  undefined4 uVar8;
  undefined4 * puVar9;
  undefined4 uVar10;
  
  this = (int *)F_00a64450(&REFG(undefined, 0x14a9a18),param_1);
  uVar3 = 0;
  if (this != (int *)0x0) {
    uVar2 = F_00ab1ed0((uint)*(ushort *)(param_2 + 2));
    (*(uint *)(gen_frame + 0x1c)) = uVar2;
    uVar3 = 0;
    if (uVar2 != 0) {
      bVar1 = F_00a9f620(this);
      if ((bVar1 != 0) && (param_2[4] != 0)) {
        F_00ac2e20(&REFG(undefined, 0x14bcf40));
      }
      if (*(char *)((*(uint *)(gen_frame + 0x1c)) + 0x1c) == '\x01') {
        uVar3 = F_00aa0350(this,1,0);
        if (2 < (int)uVar3) {
LAB_00ac9bbd: ;
          uVar3 = F_00ac98d0(param_1,param_2);
          return uVar3;
        }
        bVar1 = F_00906a70(this);
        if (bVar1 != 0) goto LAB_00ac9bbd;
      }
      uVar3 = ((code *)*(gen_code32 *)(*this + 0xd8))(this);
      if (*(int *)(uVar3 + 0x4c) != 0) {
        uVar3 = ((code *)*(gen_code32 *)(*this + 0xd8))(this);
        F_00ac99b0(this,*(undefined4 *)(uVar3 + 0x4c));
      }
      bVar1 = F_00a9f620(this);
      if ((bVar1 != 0) && (param_2[4] != 0)) {
        *(undefined4 *)&REFG(undefined, 0x14bcf40) = param_2[6];
      }
      bVar1 = F_00a9f620(this);
      uVar3 = CONCAT31(extraout_var,bVar1);
      if (((bVar1 != 0) && (uVar3 = param_2[4], uVar3 != 0)) && (uVar3 <= REFG(undefined4, 0x14bd004))) {
        uVar3 = F_00ac98d0(param_1,param_2);
        return uVar3;
      }
      if ((char)this[0x62] != '\x02') {
        (*(uint *)(gen_frame + 0x1c)) = param_2[4];
        if (param_2[4] == 0) {
          bVar1 = F_00a9f620(this);
          if (bVar1 != 0) {
            uVar3 = F_00ac2b80(&REFG(undefined, 0x14bcf40));
            (*(uint *)(gen_frame + 0x1c)) = uVar3;
          }
        }
        F_00ac6b20(param_1,param_2,param_2[5]);
        uVar10 = param_2[5];
        iVar5 = (int)*(char *)((int)param_2 + 0x1e);
        uVar2 = (uint)*(ushort *)(param_2 + 2);
        uVar8 = param_2[3];
        puVar9 = param_2 + 0x10a;
        uVar6 = (uint)*(byte *)((int)param_2 + 0xb);
        uVar3 = (*(uint *)(gen_frame + 0x1c));
        this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*this + 0xd8))(this)));
        F_00ac3e50(this_00,uVar6,uVar8,uVar2,puVar9,iVar5,uVar3,uVar10);
        bVar1 = F_00a9f620(this);
        uVar3 = CONCAT31(extraout_var_00,bVar1);
        if ((bVar1 == 0) || (param_2[4] == 0)) {
          F_00ac6c80(((undefined1 *)(gen_frame + 0x0)),param_2);
          fVar7 = (float10)F_00a5c840((uint)*(ushort *)(param_2 + 7));
          (*(float *)(gen_frame + 0x18)) = (float)fVar7;
          puVar4 = ((undefined2 *)GEN_TOP(((code *)*(gen_code32 *)(*this + 0xd8))(this)));
          *(undefined4 *)(puVar4 + 4) = 0;
          *(undefined4 *)(puVar4 + 10) = 0;
          *puVar4 = 0;
          *(undefined4 *)(puVar4 + 2) = 0;
          *(undefined4 *)(puVar4 + 0x1c) = 0;
          *(undefined4 *)(puVar4 + 0x1a) = 0;
          *(undefined4 *)(puVar4 + 8) = 0xe0000000;
          uVar3 = F_00aa6ad0(this,(uint)*(byte *)((int)param_2 + 0xb),param_2[3],*param_2,
                               param_2[1],((undefined1 *)(gen_frame + 0x0)),(*(float *)(gen_frame + 0x18)),(*(uint *)(gen_frame + 0x1c)),
                               (uint)*(byte *)((int)param_2 + 10),param_2[8]);
        }
      }
    }
  }
  return uVar3;
}

/* ref: FUN_00ac9dd0 */
uint F_00ac9dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xac9dd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x20) = *param_2;
  *(undefined4 *)(in_ecx + 0x24) = param_2[1];
  *(undefined4 *)(in_ecx + 0x28) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00ac9e00 */
uint F_00ac9e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xac9e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042b630(param_1);
  F_0042e170(((undefined1 *)(gen_frame + 0x4)),this);
  F_004feba0(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return param_1;
}

/* ref: FUN_00ac9e50 */
uint F_00ac9e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xac9e50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042b630(param_1);
  F_0042e170(((undefined1 *)(gen_frame + 0x4)),this);
  F_004ff130(param_1,((undefined1 *)(gen_frame + 0x4)),param_2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return param_1;
}

/* ref: FUN_00ac9eb0 */
unsigned int F_00ac9eb0(float gen_a0)
{
  GEN_ENTER(0xac9eb0u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00ac9ed0 */
uint F_00ac9ed0(unsigned int gen_a0)
{
  GEN_ENTER(0xac9ed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  ulonglong uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x194);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x194) = 0;
  }
  F_0042c880((undefined *)((int)this + 300));
  F_0042c880((undefined *)((int)this + 0xd8));
  F_0042c880((undefined *)((int)this + 0x84));
  uVar2 = F_0042c880((undefined *)((int)this + 0x30));
  return (uint)uVar2;
}

/* ref: FUN_00ac9f20 */
uint F_00ac9f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xac9f20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    uVar1 = F_0042a990(in_ecx + 0x30);
    return uVar1;
  case 1: ;
    uVar1 = F_0042a990(in_ecx + 0x84);
    return uVar1;
  case 2: ;
    uVar1 = F_0042a990(in_ecx + 0xd8);
    return uVar1;
  case 3: ;
    uVar1 = F_0042a990(in_ecx + 300);
    return uVar1;
  default: ;
    return 0;
  }
}

/* ref: FUN_00ac9f90 */
unsigned int F_00ac9f90(void)
{
  GEN_ENTER(0xac9f90u, 0u, 0u, 0u, 0u);
  F_00accac0(0);
  return 0;
}

/* ref: FUN_00ac9fa0 */
byte F_00ac9fa0(unsigned int gen_a0)
{
  GEN_ENTER(0xac9fa0u, gen_a0, 0u, 0u, 0u);
  undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;
  *in_ecx = 1;
  return in_ecx[1] == '\0';
}

/* ref: FUN_00ac9fb0 */
uint F_00ac9fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xac9fb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (((*(char *)((int)this + 1) == '\0') && (*(char *)((int)this + 2) != '\0')) &&
     (*(char *)this == '\0')) {
    *(undefined4 *)((int)this + 4) = param_1;
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 1: ;
    case 2: ;
    case 3: ;
      F_00accbd0(param_2,1);
      *(undefined1 *)((int)this + 1) = 1;
      return 0;
    case 4: ;
      F_00accbd0(param_2,10);
    }
    *(undefined1 *)((int)this + 1) = 1;
    return 0;
  }
  return 1;
}

/* ref: FUN_00aca030 */
uint F_00aca030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaca030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (((*(char *)((int)this + 1) == '\0') && (*(char *)((int)this + 2) != '\0')) &&
     (*(char *)this == '\0')) {
    *(int *)((int)this + 4) = param_1;
    if ((0 < param_1) && (param_1 < 5)) {
      F_00accb50(param_2);
    }
    *(undefined1 *)((int)this + 1) = 1;
    return 0;
  }
  return 1;
}

/* ref: FUN_00aca080 */
unsigned int F_00aca080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaca080u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != 0) {
    F_00c472af(param_2,param_3,"FFXIV_CHR%016llX",*param_1,param_1[1]);
  }
  return 0;
}

/* ref: FUN_00aca0c0 */
uint F_00aca0c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaca0c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  F_00c49908(&REFG(undefined, 0x14bd710) + REFG(int, 0x14be750) * 0x104,0x104,param_1);
  uVar1 = F_00acca30(REFG(int, 0x14be750),param_2,param_3);
  REFG(int, 0x14be750) = REFG(int, 0x14be750) + 1;
  return uVar1;
}

/* ref: FUN_00aca130 */
byte F_00aca130(unsigned int gen_a0)
{
  GEN_ENTER(0xaca130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LOCK();
  UNLOCK();
  if ((REFG(int, 0x14bee60) == 0) && (*(int *)((int)this + 0x194) == 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00aca150 */
uint F_00aca150(unsigned int gen_a0)
{
  GEN_ENTER(0xaca150u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x2c);
}

/* ref: FUN_00aca160 */
uint F_00aca160(unsigned int gen_a0)
{
  GEN_ENTER(0xaca160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  LOCK();
  uVar1 = REFG(undefined4, 0x14bee60);
  UNLOCK();
  *(undefined1 *)((int)this + 1) = 0;
  return uVar1;
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::FixedContainer::vf6 */
byte F_00aca170(unsigned int gen_a0)
{
  GEN_ENTER(0xaca170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  byte * pbVar6;
  byte * pbVar7;
  undefined4 * puVar8;
  uint local_1c;
  int local_14;
  int local_c;
  uint local_8;
  
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this);
  if ((char)uVar3 != '\0') {
    local_14 = 0;
    local_c = 0;
    local_1c = 0;
    do {
      puVar4 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 8))(this,local_c)));
      local_8 = 0;
      pbVar6 = (byte *)((int)puVar4 + 0x13);
      do {
        cVar2 = (char)(pbVar6 + (-0x13 - (int)puVar4));
        pbVar7 = pbVar6 + 4;
        local_8 = local_8 ^ (uint)pbVar6[-2] <<
                            (cVar2 + (char)((uint)(pbVar6 + (-0x12 - (int)puVar4)) / 0x18) * -0x18 +
                             1U & 0x1f) ^
                            (uint)pbVar6[-1] <<
                            (cVar2 + (char)((uint)(pbVar6 + (-0x11 - (int)puVar4)) / 0x18) * -0x18 +
                             2U & 0x1f) ^
                            (uint)*pbVar6 <<
                            (cVar2 + (char)((uint)(pbVar6 + (-0x10 - (int)puVar4)) / 0x18) * -0x18 +
                             3U & 0x1f) ^
                            (uint)pbVar6[-3] <<
                            (cVar2 + (char)((uint)(pbVar6 + (-0x13 - (int)puVar4)) / 0x18) * -0x18 &
                            0x1fU);
        pbVar6 = pbVar7;
      } while (pbVar7 + (-0x13 - (int)puVar4) < (byte *)0xc4);
      local_14 = local_14 + local_8;
      local_c = local_c + 1;
      puVar4[2] = local_8;
      puVar4[0x4e] = 3;
      iVar1 = local_1c + 0x10;
      local_1c = local_1c + 0xd4;
      puVar8 = ((undefined4 *)GEN_TOP((iVar1 + *(int *)(this + 0x3208))));
      for (iVar5 = 0x35; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
    } while (local_1c < 0x2120);
    puVar4 = *(undefined4 * PTR32 *)(this + 0x3208);
    *puVar4 = 0x2013ff14;
    puVar4[1] = 1;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *((int *)GEN_TOP((*(int *)(this + 0x3208) + 8))) = local_14;
    return 1;
  }
  return 0;
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::FixedContainer::vf7 */
byte F_00aca320(unsigned int gen_a0)
{
  GEN_ENTER(0xaca320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(this + 0x3208) != 0) {
    F_00406ad0(*(int *)(this + 0x3208));
    *(undefined4 *)(this + 0x3208) = 0;
  }
  uVar1 = F_00406b90(0x2130,0,0);
  *(uint *)(this + 0x3208) = uVar1;
  return uVar1 != 0;
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::FixedContainer::vf8 */
byte F_00aca360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaca360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  undefined4 * this_00;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  byte * pbVar5;
  byte * pbVar6;
  undefined4 * puVar7;
  int local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  if (*(int *)(this + 0x3208) != 0) {
    local_14 = 0;
    local_8 = 0;
    local_10 = 0;
    do {
      this_00 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 8))(this,local_8)));
      puVar4 = ((undefined4 *)GEN_TOP((local_10 + 0x10 + *(int *)(this + 0x3208))));
      puVar7 = this_00;
      for (iVar3 = 0x35; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      this_00[0x4d] = 0;
      if (this_00[3] == 1) {
        this_00[0x4d] = 1;
        *(undefined1 *)(this_00 + 0x4f) = (undefined1)local_8;
        if (this_00[1] == 1) {
          uVar2 = F_00acc850(this_00);
          if (this_00[2] != uVar2) {
            this_00[0x4d] = 3;
          }
        }
        else {
          this_00[0x4d] = 2;
        }
        this_00[0x4e] = param_1;
      }
      local_c = 0;
      pbVar5 = (byte *)((int)this_00 + 0x13);
      do {
        cVar1 = (char)(pbVar5 + (-0x13 - (int)this_00));
        pbVar6 = pbVar5 + 4;
        local_c = local_c ^ (uint)pbVar5[-2] <<
                            (cVar1 + (char)((uint)(pbVar5 + (-0x12 - (int)this_00)) / 0x18) * -0x18
                             + 1U & 0x1f) ^
                            (uint)pbVar5[-1] <<
                            (cVar1 + (char)((uint)(pbVar5 + (-0x11 - (int)this_00)) / 0x18) * -0x18
                             + 2U & 0x1f) ^
                            (uint)*pbVar5 <<
                            (cVar1 + (char)((uint)(pbVar5 + (-0x10 - (int)this_00)) / 0x18) * -0x18
                             + 3U & 0x1f) ^
                            (uint)pbVar5[-3] <<
                            (cVar1 + (char)((uint)(pbVar5 + (-0x13 - (int)this_00)) / 0x18) * -0x18
                            & 0x1fU);
        pbVar5 = pbVar6;
      } while (pbVar6 + (-0x13 - (int)this_00) < (byte *)0xc4);
      local_14 = local_14 + local_c;
      local_8 = local_8 + 1;
      local_10 = local_10 + 0xd4;
    } while (local_10 < 0x2120);
    return *((int *)GEN_TOP((*(int *)(this + 0x3208) + 8))) == local_14;
  }
  return 0;
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::FixedContainer::vf9 */
uint F_00aca530(unsigned int gen_a0)
{
  GEN_ENTER(0xaca530u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x3208);
}

/* ref: Client::System::Configuration::CharamakeAvatarSaveDataContainer::FixedContainer::vf10 */
uint F_00aca540(void)
{
  GEN_ENTER(0xaca540u, 0u, 0u, 0u, 0u);
  return 0x2130;
}

/* ref: FUN_00aca580 */
unsigned int F_00aca580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaca580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 in_ecx = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_eax = in_ecx;
  in_eax[1] = param_3;
  in_eax[2] = 0;
  return 0;
}

/* ref: FUN_00aca5a0 */
byte F_00aca5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaca5a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  char * in_edi = (char *)(uintptr_t)gen_a1;
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((uint)in_ecx[2] < (uint)in_ecx[1]) {
    do {
      cVar1 = *(char *)(*in_ecx + in_ecx[2]);
      if (cVar1 == '_') {
        in_ecx[2] = in_ecx[2] + 1;
        break;
      }
      if ((byte)(cVar1 + 0xbfU) < 0x1a) {
        cVar1 = cVar1 + ' ';
      }
      if (((cVar1 < 'a') || ('z' < cVar1)) && (cVar1 != '-')) {
        return 0;
      }
      in_edi[iVar2] = cVar1;
      in_ecx[2] = in_ecx[2] + 1;
      iVar2 = iVar2 + 1;
    } while ((uint)in_ecx[2] < (uint)in_ecx[1]);
    if (iVar2 != 0) {
      *in_edi = *in_edi + -0x20;
      in_edi[iVar2] = '\0';
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00aca620 */
uint F_00aca620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaca620u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  byte * pbVar4;
  uint uVar5;
  uint * puVar6;
  uint uVar7;
  bool bVar8;
  
  uVar5 = 0;
  bVar1 = *param_2;
  pbVar4 = param_2;
  while (bVar1 != 0) {
    pbVar4 = pbVar4 + 1;
    uVar5 = uVar5 * 2 ^ (uint)bVar1;
    bVar1 = *pbVar4;
  }
  uVar7 = 0;
  if (*param_1 != 0) {
    puVar6 = param_1 + 1;
    do {
      if (uVar5 == puVar6[1]) {
        pbVar4 = (byte *)*puVar6;
        pbVar2 = param_2;
        do {
          bVar1 = *pbVar2;
          bVar8 = bVar1 < *pbVar4;
          if (bVar1 != *pbVar4) {
LAB_00aca680: ;
            iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00aca685;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar8 = bVar1 < pbVar4[1];
          if (bVar1 != pbVar4[1]) goto LAB_00aca680;
          pbVar2 = pbVar2 + 2;
          pbVar4 = pbVar4 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00aca685: ;
        if (iVar3 == 0) {
          return param_1[uVar7 * 3 + 3];
        }
      }
      uVar7 = uVar7 + 1;
      puVar6 = puVar6 + 3;
    } while (uVar7 < *param_1);
  }
  return 0;
}

/* ref: FUN_00aca6c0 */
unsigned int F_00aca6c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaca6c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 in_ecx = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_eax = in_ecx;
  in_eax[1] = param_3;
  in_eax[2] = 0;
  return 0;
}

/* ref: FUN_00aca740 */
uint F_00aca740(unsigned int gen_a0)
{
  GEN_ENTER(0xaca740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x9640) = 0;
  puVar3 = (undefined4 *)((int)this + 0x9644);
  iVar2 = 4;
  do {
    ((code *)*(gen_code32 *)(*(int *)*puVar3 + 0x10))((int *)*puVar3);
    uVar1 = ((code *)*(gen_code32 *)(*(int *)*puVar3 + 0xc))((int *)*puVar3);
    *(int *)((int)this + 0x9640) = *(int *)((int)this + 0x9640) + uVar1;
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_00aca790 */
uint F_00aca790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaca790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  puVar3 = (undefined4 *)((int)this + 0x9644);
  uVar4 = 0;
  do {
    piVar1 = (int *)*puVar3;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    if (param_1 < uVar2) {
      uVar2 = 0;
      uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
      if (uVar4 != 0) {
        do {
          uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,uVar2);
          if (*(int *)(uVar4 + 0x134) == 1) {
            if (param_1 == 0) {
              return uVar4;
            }
            param_1 = param_1 - 1;
          }
          uVar2 = uVar2 + 1;
          uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
        } while (uVar2 < uVar4);
      }
      return 0;
    }
    param_1 = param_1 - uVar2;
    uVar4 = uVar4 + 1;
    puVar3 = puVar3 + 1;
  } while (uVar4 < 4);
  return 0;
}

/* ref: FUN_00aca810 */
uint F_00aca810(unsigned int gen_a0)
{
  GEN_ENTER(0xaca810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x9654) + 8))))(*(int * PTR32 *)((int)this + 0x9654));
  return uVar1;
}

/* ref: FUN_00aca830 */
uint F_00aca830(unsigned int gen_a0)
{
  GEN_ENTER(0xaca830u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (piVar1 != (int *)0x0) {
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x40))(piVar1,param_1);
      return uVar2;
    case 1: ;
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1,param_1);
      return uVar2;
    case 2: ;
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1,param_1);
      return uVar2;
    case 3: ;
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1);
      if (uVar2 != 0) {
        return uVar2 + 0x850;
      }
      break;
    case 4: ;
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x58))(piVar1,param_1);
      return uVar2;
    case 5: ;
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1,param_1);
      return uVar2;
    case 6: ;
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x38))(piVar1,param_1);
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00aca8c0 */
uint F_00aca8c0(unsigned int gen_a0)
{
  GEN_ENTER(0xaca8c0u, gen_a0, 0u, 0u, 0u);
  undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  *(undefined1 *)(in_ecx + 1) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 10) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  *(undefined4 *)(in_ecx + 0xe) = 0;
  *(undefined1 *)(in_ecx + 0x12) = 0;
  F_0042b630(in_ecx + 0x18);
  F_0042b630(in_ecx + 0x42);
  F_0042b630(in_ecx + 0x6c);
  F_0042b630(in_ecx + 0x96);
  *(undefined4 *)(in_ecx + 0xc0) = 0;
  *(undefined4 *)(in_ecx + 0xc2) = 0;
  *(undefined4 *)(in_ecx + 0xc4) = 0;
  *(undefined4 *)(in_ecx + 0xc6) = 0;
  *(undefined4 *)(in_ecx + 0xca) = 0;
  *(undefined4 *)(in_ecx + 10) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00aca930 */
unsigned int F_00aca930(unsigned int gen_a0)
{
  GEN_ENTER(0xaca930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  bool bVar2;
  uint uVar3;
  int * piVar4;
  undefined * this_00;
  uint uVar5;
  undefined4 uVar6;
  
  if (*(char *)((int)this + 2) == '\0') {
    if (*(char *)(REFG(int, 0x137104c) + 8) == '\0') {
      F_00ab0230(0x17d7,(int)this + 0x30);
      F_00ab0230(0x17d8,(int)this + 0x84);
      F_00ab0230(0x17d9,(int)this + 0xd8);
      F_00ab0230(0x17da,(int)this + 300);
      F_0042a990((int)this + 0xd8);
      F_0042a990((int)this + 0x84);
      F_0042a990((int)this + 0x30);
    }
    *(undefined1 *)((int)this + 2) = 1;
  }
  if (*(char *)((int)this + 1) == '\0') {
    LOCK();
    UNLOCK();
    if ((REFG(int, 0x14bee60) == 0) && (*(int *)((int)this + 0x194) == 0)) {
      bVar2 = false;
      uVar5 = 0;
      do {
        uVar3 = F_00aca830(uVar5);
        if ((uVar3 != 0) && (*(char *)(uVar3 + 0x2d) != '\0')) {
          *(undefined1 *)(uVar3 + 0x2c) = 1;
          bVar2 = true;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < 7);
      if (bVar2) {
        piVar4 = (int *)F_00424750(REFG(int, 0x137104c));
        uVar6 = 0xc;
        uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x48))(piVar4);
        this_00 = (undefined *)F_00763050(uVar5,uVar6);
        F_00822a70(this_00);
      }
    }
  }
  else if (*(int *)((int)this + 4) == 5) {
    if (*(undefined * PTR32 *)((int)this + 0x194) != (undefined *)0x0) {
      F_004cf020(*(undefined * PTR32 *)((int)this + 0x194));
      puVar1 = *(undefined4 * PTR32 *)((int)this + 0x194);
      if (puVar1 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
        *(undefined4 *)((int)this + 0x194) = 0;
      }
    }
    *(undefined4 *)((int)this + 0x2c) = 0;
    if (*(int *)((int)this + 0x14) != 0) {
      LOCK();
      UNLOCK();
      uVar6 = *(undefined4 *)((int)this + 0x14);
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) = *(undefined4 *)((int)this + 0x18);
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 12)) = *(undefined4 *)((int)this + 0x1c);
      *(undefined1 *)((int)this + 1) = 0;
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) = *(gen_code32 *)((int)this + 0x10);
      ((byte *)(gen_frame + 0xc))[4] = (byte)uVar6;
      ((byte *)(gen_frame + 0xc))[5] = SUB41(uVar6,1);
      ((byte *)(gen_frame + 0xc))[6] = SUB41(uVar6,2);
      ((byte *)(gen_frame + 0xc))[7] = SUB41(uVar6,3);
      *(undefined4 *)((int)this + 0x14) = 0;
      ((code *)*(gen_code32 *)((int)this + 0x10))(uVar6,((byte *)(gen_frame + 0xc)) + 8,this,*(undefined4 *)((int)this + 0x20));
      return 0;
    }
  }
  else {
    LOCK();
    UNLOCK();
    if (REFG(int, 0x14bee60) == 0) {
      if (*(int *)((int)this + 4) == 0) {
        *(undefined4 *)((int)this + 0x2c) = 0;
        *(undefined1 *)((int)this + 0x24) = 1;
      }
      else if (*(int *)((int)this + 4) - 1U < 4) {
        *(undefined4 *)((int)this + 0x2c) = REFG(undefined4, 0x14bee10);
      }
      if (*(int *)((int)this + 0x14) != 0) {
        LOCK();
        UNLOCK();
        uVar6 = *(undefined4 *)((int)this + 0x14);
        (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) = *(undefined4 *)((int)this + 0x18);
        *(undefined1 *)((int)this + 1) = 0;
        *(undefined4 *)((int)this + 0x14) = 0;
        (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) = *(gen_code32 *)((int)this + 0x10);
        ((byte *)(gen_frame + 0xc))[4] = (byte)uVar6;
        ((byte *)(gen_frame + 0xc))[5] = SUB41(uVar6,1);
        ((byte *)(gen_frame + 0xc))[6] = SUB41(uVar6,2);
        ((byte *)(gen_frame + 0xc))[7] = SUB41(uVar6,3);
        (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 12)) = *(undefined4 *)((int)this + 0x1c);
        ((code *)*(gen_code32 *)((int)this + 0x10))(uVar6,((byte *)(gen_frame + 0xc)) + 8,this,*(undefined4 *)((int)this + 0x20));
        return 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_00acab30 */
byte F_00acab30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xacab30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  if (((*(char *)((int)this + 1) == '\0') && (*(char *)((int)this + 2) != '\0')) &&
     (*(char *)this == '\0')) {
    *(undefined1 *)((int)this + 1) = 1;
    *(undefined4 *)((int)this + 0x10) = *param_4;
    *(undefined4 *)((int)this + 0x14) = param_4[1];
    *(undefined4 *)((int)this + 0x18) = param_4[2];
    *(undefined4 *)((int)this + 0x1c) = param_4[3];
    *(undefined4 *)((int)this + 0x20) = param_5;
    return 1;
  }
  return 0;
}

/* ref: FUN_00acab80 */
byte F_00acab80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xacab80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if (((*(char *)((int)this + 1) == '\0') && (*(char *)((int)this + 2) != '\0')) &&
     (*(char *)this == '\0')) {
    *(undefined4 *)((int)this + 0x10) = *param_3;
    *(undefined4 *)((int)this + 0x14) = param_3[1];
    *(undefined4 *)((int)this + 0x18) = param_3[2];
    *(undefined4 *)((int)this + 0x1c) = param_3[3];
    *(undefined4 *)((int)this + 0x20) = param_4;
    *(undefined4 *)((int)this + 4) = 5;
    *(undefined4 *)((int)this + 0x28) = 2;
    *(undefined1 *)((int)this + 1) = 1;
    return 1;
  }
  return 0;
}

/* ref: FUN_00acac40 */
uint F_00acac40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacac40u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  byte * param_3 = (byte *)(uintptr_t)gen_a2;
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte * pbVar5;
  
  uVar3 = 0;
  *param_2 = 0;
  if (in_eax != 0) {
    do {
      bVar1 = param_3[uVar3];
      if (((bVar1 == 9) || (bVar1 == 10)) || (bVar1 == 0x2c)) {
        param_3[uVar3] = 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < in_eax);
  }
  uVar3 = 0;
  pbVar5 = param_3;
  if (param_3 != (byte *)0x0) {
    while( true ) {
      param_2[*param_2 * 3 + 1] = (int)pbVar5;
      uVar4 = 0;
      bVar1 = *pbVar5;
      while (bVar1 != 0) {
        pbVar5 = pbVar5 + 1;
        uVar4 = uVar4 * 2 ^ (uint)bVar1;
        bVar1 = *pbVar5;
      }
      param_2[*param_2 * 3 + 2] = uVar4;
      if (in_eax <= uVar3) break;
      while (param_3[uVar3] != 0) {
        uVar3 = uVar3 + 1;
        if (in_eax <= uVar3) {
          return (uint)param_2;
        }
      }
      if (in_eax <= uVar3) {
        return (uint)param_2;
      }
      while (param_3[uVar3] == 0) {
        uVar3 = uVar3 + 1;
        if (in_eax <= uVar3) {
          return (uint)param_2;
        }
      }
      if (param_3 + uVar3 == (byte *)0x0) {
        return (uint)param_2;
      }
      if (in_eax <= uVar3) {
        return (uint)param_2;
      }
      while (param_3[uVar3] != 0) {
        uVar3 = uVar3 + 1;
        if (in_eax <= uVar3) {
          return (uint)param_2;
        }
      }
      if (in_eax <= uVar3) {
        return (uint)param_2;
      }
      while (param_3[uVar3] == 0) {
        uVar3 = uVar3 + 1;
        if (in_eax <= uVar3) {
          return (uint)param_2;
        }
      }
      if (param_3 + uVar3 == (byte *)0x0) {
        return (uint)param_2;
      }
      if (in_eax <= uVar3) {
        return (uint)param_2;
      }
      while (param_3[uVar3] != 0) {
        uVar3 = uVar3 + 1;
        if (in_eax <= uVar3) {
          return (uint)param_2;
        }
      }
      if (in_eax <= uVar3) {
        return (uint)param_2;
      }
      while (param_3[uVar3] == 0) {
        uVar3 = uVar3 + 1;
        if (in_eax <= uVar3) {
          return (uint)param_2;
        }
      }
      pbVar5 = param_3 + uVar3;
      if (pbVar5 == (byte *)0x0) {
        return (uint)param_2;
      }
      iVar2 = 0;
      bVar1 = *pbVar5;
      while (bVar1 != 0) {
        pbVar5 = pbVar5 + 1;
        iVar2 = (bVar1 - 0x30) + iVar2 * 10;
        bVar1 = *pbVar5;
      }
      param_2[*param_2 * 3 + 3] = iVar2;
      *param_2 = *param_2 + 1;
      for (; uVar3 < in_eax; uVar3 = uVar3 + 1) {
        if (param_3[uVar3] == 0) goto joined_r0x00acade3;
      }
LAB_00acadc3: ;
      pbVar5 = (byte *)0x0;
LAB_00acadc5: ;
      if (*param_2 == 0x80) {
        return (uint)param_2;
      }
      if (pbVar5 == (byte *)0x0) {
        return (uint)param_2;
      }
    }
  }
  return (uint)param_2;
joined_r0x00acade3: ;
  if (in_eax <= uVar3) goto LAB_00acadc3;
  if (param_3[uVar3] != 0) {
    pbVar5 = param_3 + uVar3;
    goto LAB_00acadc5;
  }
  uVar3 = uVar3 + 1;
  goto joined_r0x00acade3;
}

/* ref: FUN_00acae00 */
uint F_00acae00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacae00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint in_EAX = 0;
  
  if (*(int *)((int)this + 0x966c) != 0) {
    in_EAX = ((code *)*(gen_code32 *)((int)this + 0x9668))
                       (*(undefined4 *)((int)this + 0x966c),(int)this + 0x9670,param_1,
                        *(undefined4 *)((int)this + 0x9678));
    *(undefined4 *)((int)this + 0x966c) = 0;
  }
  return in_EAX;
}

/* ref: FUN_00acaeb0 */
byte F_00acaeb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacaeb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(char *)((int)this + 1) != '\0') {
    F_00ace4a0();
    *(undefined4 *)((int)this + 0x10) = *param_1;
    *(undefined4 *)((int)this + 0x14) = param_1[1];
    *(undefined4 *)((int)this + 0x18) = param_1[2];
    *(undefined4 *)((int)this + 0x1c) = param_1[3];
    *(undefined4 *)((int)this + 0x20) = param_2;
    return 1;
  }
  return 0;
}

/* ref: FUN_00acaef0 */
byte F_00acaef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xacaef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  char * param_3 = (char *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined * puVar1;
  uint uVar2;
  char * pcVar3;
  char * pcVar4;
  
  if (((*(char *)((int)this + 1) != '\0') || (*(char *)((int)this + 2) == '\0')) ||
     (*(char *)this != '\0')) {
    return 0;
  }
  *(char * PTR32 *)((int)this + 8) = param_3;
  *(int *)((int)this + 4) = param_1;
  if ((param_1 < 1) || (3 < param_1)) goto LAB_00acaff7;
  if (param_1 == 1) {
    pcVar4 = "FFXIV_CHARA_";
LAB_00acaf7c: ;
    puVar1 = &REFG(undefined, 0x10e9947);
    pcVar3 = "%s%s%02d";
  }
  else if (param_1 == 2) {
    pcVar4 = "FFXIV_CHARA_BETA";
    puVar1 = (undefined *)F_00430520(5);
    pcVar3 = "/../%s/%s%02d";
  }
  else if (param_1 == 3) {
    pcVar4 = "FFXIV_CHARA_BENCH";
    puVar1 = (undefined *)F_00430520(7);
    pcVar3 = "/../%s/%s%02d";
  }
  else {
    pcVar4 = param_3;
    if (param_1 == 1) goto LAB_00acaf7c;
    puVar1 = (undefined *)F_00430520(param_3);
    pcVar3 = "/../%s/%s%02d";
  }
  F_00c472af(&REFG(undefined, 0x14beec0),0x104,pcVar3,puVar1,pcVar4,param_2 + 1);
  uVar2 = F_00ac9fb0(this,param_1,&REFG(undefined, 0x14beec0));
  if (uVar2 != 0) {
    return 0;
  }
  F_00aca0c0("AVATAR.DAT",param_3,param_4);
  if (*(char *)((int)this + 1) != '\0') {
    F_00ace4a0();
  }
LAB_00acaff7: ;
  *(undefined4 *)((int)this + 0x28) = 1;
  *(undefined1 *)((int)this + 1) = 1;
  return 1;
}

/* ref: FUN_00acb020 */
byte F_00acb020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xacb020u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  byte bVar1;
  
  bVar1 = F_00acaef0(this,param_1,param_2,param_3,param_4);
  if (bVar1 != 0) {
    *(undefined4 *)((int)this + 0x10) = *param_5;
    *(undefined4 *)((int)this + 0x14) = param_5[1];
    *(undefined4 *)((int)this + 0x18) = param_5[2];
    *(undefined4 *)((int)this + 0x1c) = param_5[3];
    *(undefined4 *)((int)this + 0x20) = param_6;
  }
  return bVar1;
}

/* ref: FUN_00acb070 */
uint F_00acb070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacb070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (((*(char *)((int)this + 1) == '\0') && (*(char *)((int)this + 2) != '\0')) &&
     (*(char *)this == '\0')) {
    *(undefined4 *)((int)this + 4) = 0;
    uVar1 = 1;
    *(undefined4 *)((int)this + 8) = param_1;
    *(undefined4 *)((int)this + 0x28) = 1;
    *(undefined1 *)((int)this + 1) = 1;
  }
  return uVar1;
}

/* ref: FUN_00acb0a0 */
byte F_00acb0a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xacb0a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  
  bVar1 = 0;
  if (((*(char *)((int)this + 1) == '\0') && (*(char *)((int)this + 2) != '\0')) &&
     (*(char *)this == '\0')) {
    *(undefined4 *)((int)this + 8) = param_1;
    *(undefined4 *)((int)this + 4) = 0;
    bVar1 = 1;
    *(undefined4 *)((int)this + 0x28) = 1;
    *(undefined1 *)((int)this + 1) = 1;
    *(undefined4 *)((int)this + 0x10) = *param_2;
    *(undefined4 *)((int)this + 0x14) = param_2[1];
    *(undefined4 *)((int)this + 0x18) = param_2[2];
    *(undefined4 *)((int)this + 0x1c) = param_2[3];
    *(undefined4 *)((int)this + 0x20) = param_3;
  }
  return bVar1;
}

/* ref: FUN_00acb110 */
byte F_00acb110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacb110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(char *)((int)this + 1) != '\0') {
    F_00ace360();
    *(undefined4 *)((int)this + 0x10) = *param_1;
    *(undefined4 *)((int)this + 0x14) = param_1[1];
    *(undefined4 *)((int)this + 0x18) = param_1[2];
    *(undefined4 *)((int)this + 0x1c) = param_1[3];
    *(undefined4 *)((int)this + 0x20) = param_2;
    return 1;
  }
  return 0;
}

/* ref: FUN_00acb150 */
byte F_00acb150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xacb150u, gen_a0, gen_a1, gen_a2, gen_a3);
  char * in_ecx = (char *)(uintptr_t)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  char * _Format;
  uint uVar1;
  
  if (((in_ecx[1] != '\0') || (in_ecx[2] == '\0')) || (*in_ecx != '\0')) {
    return 0;
  }
  *(int *)(in_ecx + 4) = param_3;
  *(undefined4 *)(in_ecx + 8) = param_5;
  if (param_3 == 0) {
    F_00acd970(in_edi,param_5,"FFXIV.CFG",0x2000,1);
  }
  else if (param_3 == 1) {
    F_00c472af(&REFG(undefined, 0x14bf4e8),0x104,"FFXIV_CHARA_%02d",param_4 + 1);
    _Format = (char *)F_0042a990(in_ecx + 0x30);
    F_00c472af(&REFG(undefined, 0x14bf5ec),0x80,_Format,in_edi);
    F_00c472af(&REFG(undefined, 0x14bf66c),0x80,"charamake");
    F_00c472af(&REFG(undefined, 0x14bf6ec),0x400,"");
    F_00c472af(&REFG(undefined, 0x14bfaec),8,"AVT%02d",param_4 + 1);
    *(undefined4 *)&REFG(undefined, 0x14bfaf4) = 1;
    *(undefined4 *)&REFG(undefined, 0x14bfaf8) = 0;
    *(undefined4 *)&REFG(undefined, 0x14bfafc) = 0;
    *(undefined4 *)&REFG(undefined, 0x14bfb00) = 0;
    *(undefined4 *)&REFG(undefined, 0x14bfb08) = 0;
    uVar1 = F_00aca030(in_ecx,1,&REFG(undefined, 0x14bf4e8));
    if (uVar1 != 0) {
      return 0;
    }
    F_00aca0c0("AVATAR.DAT",param_5,param_6);
    if (in_ecx[1] != '\0') {
      F_00ace360();
      in_ecx[0x28] = '\0';
      in_ecx[0x29] = '\0';
      in_ecx[0x2a] = '\0';
      in_ecx[0x2b] = '\0';
      in_ecx[1] = '\x01';
      return 1;
    }
  }
  in_ecx[0x28] = '\0';
  in_ecx[0x29] = '\0';
  in_ecx[0x2a] = '\0';
  in_ecx[0x2b] = '\0';
  in_ecx[1] = '\x01';
  return 1;
}

/* ref: FUN_00acb290 */
byte F_00acb290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xacb290u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  byte bVar1;
  
  bVar1 = F_00acb150(in_ecx,in_edi,param_3,param_4,param_5,param_6);
  if (bVar1 != 0) {
    *(undefined4 *)(in_ecx + 0x10) = *param_7;
    *(undefined4 *)(in_ecx + 0x14) = param_7[1];
    *(undefined4 *)(in_ecx + 0x18) = param_7[2];
    *(undefined4 *)(in_ecx + 0x1c) = param_7[3];
    *(undefined4 *)(in_ecx + 0x20) = param_8;
  }
  return bVar1;
}

/* ref: FUN_00acb2e0 */
byte F_00acb2e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacb2e0u, gen_a0, gen_a1, gen_a2, 0u);
  char * in_ecx = (char *)(uintptr_t)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (((in_ecx[1] == '\0') && (in_ecx[2] != '\0')) && (*in_ecx == '\0')) {
    *(undefined4 *)(in_ecx + 8) = param_3;
    in_ecx[4] = '\0';
    in_ecx[5] = '\0';
    in_ecx[6] = '\0';
    in_ecx[7] = '\0';
    F_00acd970(in_edi,param_3,"FFXIV.CFG",0x2000,1);
    in_ecx[0x28] = '\0';
    in_ecx[0x29] = '\0';
    in_ecx[0x2a] = '\0';
    in_ecx[0x2b] = '\0';
    in_ecx[1] = '\x01';
    return 1;
  }
  return 0;
}

/* ref: FUN_00acb340 */
byte F_00acb340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xacb340u, gen_a0, gen_a1, gen_a2, gen_a3);
  char * in_ecx = (char *)(uintptr_t)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  if (((in_ecx[1] == '\0') && (in_ecx[2] != '\0')) && (*in_ecx == '\0')) {
    *(undefined4 *)(in_ecx + 8) = param_3;
    in_ecx[4] = '\0';
    in_ecx[5] = '\0';
    in_ecx[6] = '\0';
    in_ecx[7] = '\0';
    F_00acd970(in_edi,param_3,"FFXIV.CFG",0x2000,1);
    in_ecx[0x28] = '\0';
    in_ecx[0x29] = '\0';
    in_ecx[0x2a] = '\0';
    in_ecx[0x2b] = '\0';
    in_ecx[1] = '\x01';
    *(undefined4 *)(in_ecx + 0x10) = *param_4;
    *(undefined4 *)(in_ecx + 0x14) = param_4[1];
    *(undefined4 *)(in_ecx + 0x18) = param_4[2];
    *(undefined4 *)(in_ecx + 0x1c) = param_4[3];
    *(undefined4 *)(in_ecx + 0x20) = param_5;
    return 1;
  }
  return 0;
}

/* ref: FUN_00acb3c0 */
byte F_00acb3c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xacb3c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined * this_00;
  char * pcVar1;
  
  this_00 = (undefined *)F_00406b90(0x14c,0,0);
  if (this_00 != (undefined *)0x0) {
    F_0042b630(this_00);
    F_0042b630((undefined *)((int)this_00 + 0x54));
    F_0042b630((int)this_00 + 0xa8);
    F_00c472af(&REFG(undefined, 0x14bfb10),0x104,"FFXIV_CHR%016llX",param_1,param_2);
    pcVar1 = (char *)F_0042a990((int)this + 300);
    F_00c472af(&REFG(undefined, 0x14bfc14),0x80,pcVar1);
    pcVar1 = (char *)F_0042a990(param_3);
    F_00c472af(&REFG(undefined, 0x14bfc94),0x80,pcVar1);
    pcVar1 = (char *)F_0042a990(param_4);
    F_00c472af(&REFG(undefined, 0x14bfd14),0x400,pcVar1);
    F_00c472af(&REFG(undefined, 0x14c0114),8,"UI");
    *(undefined4 *)&REFG(undefined, 0x14c011c) = 10;
    *(undefined4 *)&REFG(undefined, 0x14c0120) = 0;
    *(undefined4 *)&REFG(undefined, 0x14c0124) = 0;
    *(undefined4 *)&REFG(undefined, 0x14c0128) = 0;
    *(undefined4 *)&REFG(undefined, 0x14c0130) = 0;
    if (((*(char *)((int)this + 1) == '\0') && (*(char *)((int)this + 2) != '\0')) &&
       (*(char *)this == '\0')) {
      *(undefined4 *)((int)this + 4) = 4;
      F_00accb50(&REFG(undefined, 0x14bfb10));
      *(undefined1 *)((int)this + 1) = 1;
      F_00ace5e0(this_00,this);
      if ((char)param_5 == '\0') {
        F_00aca0c0("COMMON.DAT",*(undefined4 *)((int)this_00 + 0xfc),
                     *(undefined4 *)((int)this_00 + 0x124));
        F_00aca0c0("CONTROL0.DAT",*(undefined4 *)((int)this_00 + 0x100),
                     *(undefined4 *)((int)this_00 + 0x128));
        F_00aca0c0("CONTROL1.DAT",*(undefined4 *)((int)this_00 + 0x104),
                     *(undefined4 *)((int)this_00 + 300));
      }
      if (*(int *)((int)this_00 + 0x130) != 0) {
        F_00aca0c0("ADDON.DAT",*(undefined4 *)((int)this_00 + 0x108),
                     *(int *)((int)this_00 + 0x130));
      }
      if (*(int *)((int)this_00 + 0x134) != 0) {
        F_00aca0c0("MACRO.DAT",*(undefined4 *)((int)this_00 + 0x10c),
                     *(int *)((int)this_00 + 0x134));
      }
      if (*(int *)((int)this_00 + 0x138) != 0) {
        F_00aca0c0("HOTBAR.DAT",*(undefined4 *)((int)this_00 + 0x110),
                     *(int *)((int)this_00 + 0x138));
      }
      if (*(int *)((int)this_00 + 0x13c) != 0) {
        F_00aca0c0("KEYBIND.DAT",*(undefined4 *)((int)this_00 + 0x114),
                     *(int *)((int)this_00 + 0x13c));
      }
      if (*(int *)((int)this_00 + 0x140) != 0) {
        F_00aca0c0("LOGFLTR.DAT",*(undefined4 *)((int)this_00 + 0x118),
                     *(int *)((int)this_00 + 0x140));
      }
      if (*(int *)((int)this_00 + 0x144) != 0) {
        F_00aca0c0("GEARSET.DAT",*(undefined4 *)((int)this_00 + 0x11c),
                     *(int *)((int)this_00 + 0x144));
      }
      if (*(int *)((int)this_00 + 0x148) != 0) {
        F_00aca0c0("ACQ.DAT",*(undefined4 *)((int)this_00 + 0x120),*(int *)((int)this_00 + 0x148))
        ;
      }
      if (*(char *)((int)this + 1) != '\0') {
        F_00ace360();
      }
      *(undefined1 *)((int)this + 1) = 1;
      *(undefined4 *)((int)this + 4) = 4;
      *(undefined4 *)((int)this + 0x28) = 0;
      return 1;
    }
    F_0042c880((undefined *)((int)this_00 + 0xa8));
    F_0042c880((undefined *)((int)this_00 + 0x54));
    F_0042c880(this_00);
    F_00406ad0(this_00);
  }
  return 0;
}

/* ref: FUN_00acb660 */
byte F_00acb660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xacb660u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  byte bVar1;
  
  bVar1 = F_00acb3c0(this,param_1,param_2,param_3,param_4,param_7);
  if (bVar1 != 0) {
    *(undefined4 *)((int)this + 0x180) = *param_5;
    *(undefined4 *)((int)this + 0x184) = param_5[1];
    *(undefined4 *)((int)this + 0x188) = param_5[2];
    *(undefined4 *)((int)this + 0x18c) = param_5[3];
    *(undefined4 *)((int)this + 400) = param_6;
    return 1;
  }
  return 0;
}

/* ref: FUN_00acb6d0 */
byte F_00acb6d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacb6d0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined * this_00;
  
  this_00 = (undefined *)F_00406b90(0x14c,0,0);
  if (this_00 != (undefined *)0x0) {
    F_0042b630(this_00);
    F_0042b630((int)this_00 + 0x54);
    F_0042b630((int)this_00 + 0xa8);
    F_00c472af(&REFG(undefined, 0x14c0138),0x104,"FFXIV_CHR%016llX",(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
    *(undefined4 *)&REFG(undefined, 0x14c0744) = 10;
    if (((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 1))) == '\0') && (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 2))) != '\0')) &&
       (*(char *)(*(undefined * PTR32 *)&gen_args[0]) == '\0')) {
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 4;
      F_00accbd0(&REFG(undefined, 0x14c0138),10);
      *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 1))) = 1;
      F_00ace7a0(this_00,(*(undefined * PTR32 *)&gen_args[0]));
      uVar1 = *(undefined4 *)((int)this_00 + 0xfc);
      uVar2 = *(undefined4 *)((int)this_00 + 0x124);
      F_00c49908(&REFG(undefined, 0x14bd710) + REFG(int, 0x14be750) * 0x104,0x104,"COMMON.DAT");
      F_00acca30(REFG(int, 0x14be750),uVar1,uVar2);
      REFG(int, 0x14be750) = REFG(int, 0x14be750) + 1;
      uVar1 = *(undefined4 *)((int)this_00 + 0x100);
      uVar2 = *(undefined4 *)((int)this_00 + 0x128);
      F_00c49908(&REFG(undefined, 0x14bd710) + REFG(int, 0x14be750) * 0x104,0x104,"CONTROL0.DAT");
      F_00acca30(REFG(int, 0x14be750),uVar1,uVar2);
      REFG(int, 0x14be750) = REFG(int, 0x14be750) + 1;
      uVar1 = *(undefined4 *)((int)this_00 + 0x104);
      uVar2 = *(undefined4 *)((int)this_00 + 300);
      F_00c49908(&REFG(undefined, 0x14bd710) + REFG(int, 0x14be750) * 0x104,0x104,"CONTROL1.DAT");
      F_00acca30(REFG(int, 0x14be750),uVar1,uVar2);
      REFG(int, 0x14be750) = REFG(int, 0x14be750) + 1;
      uVar1 = *(undefined4 *)((int)this_00 + 0x108);
      uVar2 = *(undefined4 *)((int)this_00 + 0x130);
      F_00c49908(&REFG(undefined, 0x14bd710) + REFG(int, 0x14be750) * 0x104,0x104,"ADDON.DAT");
      F_00acca30(REFG(int, 0x14be750),uVar1,uVar2);
      REFG(int, 0x14be750) = REFG(int, 0x14be750) + 1;
      uVar1 = *(undefined4 *)((int)this_00 + 0x10c);
      uVar2 = *(undefined4 *)((int)this_00 + 0x134);
      F_00c49908(&REFG(undefined, 0x14bd710) + REFG(int, 0x14be750) * 0x104,0x104,"MACRO.DAT");
      F_00acca30(REFG(int, 0x14be750),uVar1,uVar2);
      REFG(int, 0x14be750) = REFG(int, 0x14be750) + 1;
      uVar1 = *(undefined4 *)((int)this_00 + 0x110);
      uVar2 = *(undefined4 *)((int)this_00 + 0x138);
      F_00c49908(&REFG(undefined, 0x14bd710) + REFG(int, 0x14be750) * 0x104,0x104,"HOTBAR.DAT");
      F_00acca30(REFG(int, 0x14be750),uVar1,uVar2);
      REFG(int, 0x14be750) = REFG(int, 0x14be750) + 1;
      uVar1 = *(undefined4 *)((int)this_00 + 0x114);
      uVar2 = *(undefined4 *)((int)this_00 + 0x13c);
      F_00c49908(&REFG(undefined, 0x14bd710) + REFG(int, 0x14be750) * 0x104,0x104,"KEYBIND.DAT");
      F_00acca30(REFG(int, 0x14be750),uVar1,uVar2);
      REFG(int, 0x14be750) = REFG(int, 0x14be750) + 1;
      uVar1 = *(undefined4 *)((int)this_00 + 0x118);
      uVar2 = *(undefined4 *)((int)this_00 + 0x140);
      F_00c49908(&REFG(undefined, 0x14bd710) + REFG(int, 0x14be750) * 0x104,0x104,"LOGFLTR.DAT");
      F_00acca30(REFG(int, 0x14be750),uVar1,uVar2);
      REFG(int, 0x14be750) = REFG(int, 0x14be750) + 1;
      uVar1 = *(undefined4 *)((int)this_00 + 0x11c);
      uVar2 = *(undefined4 *)((int)this_00 + 0x144);
      F_00c49908(&REFG(undefined, 0x14bd710) + REFG(int, 0x14be750) * 0x104,0x104,"GEARSET.DAT");
      F_00acca30(REFG(int, 0x14be750),uVar1,uVar2);
      REFG(int, 0x14be750) = REFG(int, 0x14be750) + 1;
      uVar1 = *(undefined4 *)((int)this_00 + 0x120);
      uVar2 = *(undefined4 *)((int)this_00 + 0x148);
      F_00c49908(&REFG(undefined, 0x14bd710) + REFG(int, 0x14be750) * 0x104,0x104,"ACQ.DAT");
      F_00acca30(REFG(int, 0x14be750),uVar1,uVar2);
      REFG(int, 0x14be750) = REFG(int, 0x14be750) + 1;
      F_00acdae0(&(*(undefined4 *)&gen_args[1]));
      if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 1))) != '\0') {
        F_00ace4a0();
      }
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = 1;
      *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 1))) = 1;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 4;
      return 1;
    }
    F_0042c880((undefined *)((int)this_00 + 0xa8));
    F_0042c880((undefined *)((int)this_00 + 0x54));
    F_0042c880(this_00);
    F_00406ad0(this_00);
  }
  return 0;
}

/* ref: FUN_00acbaa0 */
byte F_00acbaa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xacbaa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  
  bVar1 = F_00acb6d0(this,param_1,param_2);
  if (bVar1 != 0) {
    *(undefined4 *)((int)this + 0x180) = *param_3;
    *(undefined4 *)((int)this + 0x184) = param_3[1];
    *(undefined4 *)((int)this + 0x188) = param_3[2];
    *(undefined4 *)((int)this + 0x18c) = param_3[3];
    *(undefined4 *)((int)this + 400) = param_4;
    return 1;
  }
  return 0;
}

/* ref: FUN_00acbb00 */
byte F_00acbb00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xacbb00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  byte bVar1;
  int * this_00;
  int iVar2;
  uint uVar3;
  int * piVar4;
  int * piVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0xd8)) = this;
  if (-1 < *(int *)((int)this + 0x9660)) {
    this_00 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_3 + 8))(param_3,*(int *)((int)this + 0x9660))));
    this_00[0x4d] = (uint)(param_2 == 0);
    if (param_2 == 0) {
      if (*this_00 == 0x2013ff14) {
        if (this_00[1] != 1) {
          this_00[0x4d] = 2;
          goto LAB_00acbbec;
        }
        uVar3 = F_00acc850(this_00);
        if (this_00[2] != uVar3) {
          this_00[0x4d] = 3;
          goto LAB_00acbbec;
        }
      }
      else {
        piVar4 = this_00;
        piVar5 = ((int *)(gen_frame + 0x4));
        for (iVar2 = 0x31; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar5 = *piVar4;
          piVar4 = piVar4 + 1;
          piVar5 = piVar5 + 1;
        }
        piVar4 = ((int *)(gen_frame + 0x4));
        piVar5 = this_00 + 4;
        for (iVar2 = 0x31; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar5 = *piVar4;
          piVar4 = piVar4 + 1;
          piVar5 = piVar5 + 1;
        }
        *this_00 = 0x2013ff14;
        this_00[1] = 1;
        this_00[2] = 0;
        this_00[3] = 0;
        this = (*(undefined * PTR32 *)(gen_frame + 0xd8));
      }
      ((code *)*(gen_code32 *)(*param_3 + 0x10))(param_3);
      *(int *)((int)this + 0x9640) = *(int *)((int)this + 0x9640) + 1;
      if (param_4 == 1) {
        iVar2 = 3;
      }
      else {
        iVar2 = (param_4 == 3) + 1;
      }
      this_00[0x4e] = iVar2;
    }
  }
LAB_00acbbec: ;
  *(int *)((int)this + 0x9660) = *(int *)((int)this + 0x9660) + 1;
  iVar2 = *(int *)((int)this + 0x9660);
  uVar3 = ((code *)*(gen_code32 *)(*param_3 + 0x14))(param_3);
  if (iVar2 < (int)uVar3) {
    (*(undefined4 *)(gen_frame + 0xd0)) = 0;
    uVar3 = ((code *)*(gen_code32 *)(*param_3 + 8))(param_3,iVar2);
    bVar1 = F_00acaef0(param_1,param_4,*(undefined4 *)((int)this + 0x9660),uVar3,0xd4);
    if (bVar1 != 0) {
      *(gen_code32 *)((int)param_1 + 0x18) = ((code *)REFP(0xacc2f0));
      *(gen_code32 *)((int)param_1 + 0x10) = ((code *)REFP(0xacd180));
      *(undefined * PTR32 *)((int)param_1 + 0x14) = this;
      *(undefined4 *)((int)param_1 + 0x1c) = 0;
      *(undefined4 *)((int)param_1 + 0x20) = 0;
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00acbcc0 */
uint F_00acbcc0(unsigned int gen_a0)
{
  GEN_ENTER(0xacbcc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  F_00acd3c0(this);
  F_00acd3c0((undefined *)((int)this + 0x320c));
  F_00acd3c0((undefined *)((int)this + 0x6418));
  *(undefined4 *)((int)this + 0x9624) =
       (*(undefined * PTR32 (*)[11])REFP(0x10d8290));
  puVar1 = (undefined4 *)((int)this + 0x9628);
  *puVar1 = 0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x137);
  *puVar1 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar1 = puVar1;
  *(undefined4 *)((int)this + 0x962c) = 0;
  *(undefined4 *)((int)this + 0x9630) = 0;
  *(undefined4 *)((int)this + 0x9634) = 0;
  *(undefined4 *)((int)this + 0x9638) = 0;
  *(undefined4 *)((int)this + 0x9668) = 0;
  *(undefined4 *)((int)this + 0x966c) = 0;
  *(undefined4 *)((int)this + 0x9670) = 0;
  *(undefined4 *)((int)this + 0x9674) = 0;
  *(int *)((int)this + 0x9648) = (int)this + 0x6418;
  *(int *)((int)this + 0x964c) = (int)this + 0x320c;
  *(undefined4 * PTR32 *)((int)this + 0x9650) = (undefined4 *)((int)this + 0x9624);
  *(undefined * PTR32 *)((int)this + 0x9644) = this;
  *(undefined * PTR32 *)((int)this + 0x9654) = this;
  return (uint)this;
}

/* ref: FUN_00acbd70 */
uint F_00acbd70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacbd70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x11200];
  int * piVar1;
  byte bVar2;
  uint uVar3;
  char * _Str1;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_ecx_00;
  wchar_t * pwVar7;
  wchar_t * pwVar8;
  bool bVar9;
  ulonglong uVar10;
  undefined * PTR32 * _Str2;
  
  (*(uint *)(gen_frame + 0x111f8)) = 0xacbd7d;
  (*(uint *)(gen_frame + 0x111f8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  (*(undefined * PTR32 *)(gen_frame + 0x1005c)) = this;
  uVar3 = F_004308f0(REFG(undefined4, 0x137104c));
  F_0042e170(((undefined1 *)(gen_frame + 0x10e18)),uVar3);
  F_0042a3a0(((wchar_t *)(gen_frame + 0x10a7c)),((undefined1 *)(gen_frame + 0x10e18)),1);
  F_0042c880(((undefined1 *)(gen_frame + 0x10e18)));
  F_0042b630(((undefined1 *)(gen_frame + 0x10e18)));
  F_0042e170(((undefined1 *)(gen_frame + 0x10dc4)),((wchar_t *)(gen_frame + 0x10a7c)));
  F_004fecf0(((undefined1 *)(gen_frame + 0x10e18)),((undefined1 *)(gen_frame + 0x10dc4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x10dc4)));
  F_0042a3a0(((wchar_t *)(gen_frame + 0x10874)),((undefined1 *)(gen_frame + 0x10e18)),1);
  F_00c4a8e0(((wchar_t *)(gen_frame + 0x10a7c)),0x104,((wchar_t *)(gen_frame + 0x10874)));
  F_00429fa0();
  F_0042c880(((undefined1 *)(gen_frame + 0x10e18)));
  F_0042a2a0(((wchar_t *)(gen_frame + 0x10a7c)),"FINAL FANTASY XIV\\user\\00000000");
  F_004f88e0(((undefined1 *)(gen_frame + 0x10004)));
  uVar3 = F_004f9fa0(((undefined1 *)(gen_frame + 0x10004)),((wchar_t *)(gen_frame + 0x10a7c)),&(*(undefined4 *)(gen_frame + 0x10060)),&(*(char *)(gen_frame + 0x10067)));
  do {
    if (uVar3 != 1) {
      F_004f8eb0(((undefined1 *)(gen_frame + 0x10004)));
      uVar3 = F_004f9ed0(((undefined1 *)(gen_frame + 0x10004)));
      F_00429fa0();
      F_00c47745((*(uint *)(gen_frame + 0x111f8)) ^ (uint)(uint)(gen_frame + 0x0));
      return uVar3;
    }
    if ((*(char *)(gen_frame + 0x10067)) == '\0') {
      F_0042e170(((undefined1 *)(gen_frame + 0x10e18)),(*(undefined4 *)(gen_frame + 0x10060)));
      F_0042a3a0(((undefined1 *)(gen_frame + 0x1066c)),((undefined1 *)(gen_frame + 0x10e18)),1);
      F_0042c880(((undefined1 *)(gen_frame + 0x10e18)));
      F_0042b630(((undefined1 *)(gen_frame + 0x10e18)));
      F_0042e170(((undefined1 *)(gen_frame + 0x10dc4)),((undefined1 *)(gen_frame + 0x1066c)));
      F_004feba0(((undefined1 *)(gen_frame + 0x10e18)),((undefined1 *)(gen_frame + 0x10dc4)));
      F_0042c880(((undefined1 *)(gen_frame + 0x10dc4)));
      _Str2 = (*(undefined * PTR32 (*)[1])REFP(0x10ea1ec));
      _Str1 = (char *)F_0042a990(((undefined1 *)(gen_frame + 0x10e18)));
      iVar4 = F_00c4c468(_Str1,(char *)_Str2);
      F_0042c880(((undefined1 *)(gen_frame + 0x10e18)));
      if (iVar4 == 0) {
        (*(int *)(gen_frame + 0x10058)) = 0;
        F_0042b630(((undefined1 *)(gen_frame + 0x10e18)));
        F_0042e170(((undefined1 *)(gen_frame + 0x10dc4)),((undefined1 *)(gen_frame + 0x1066c)));
        F_004ff130(((undefined1 *)(gen_frame + 0x10e18)),((undefined1 *)(gen_frame + 0x10dc4)),0);
        F_0042c880(((undefined1 *)(gen_frame + 0x10dc4)));
        uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x10e18)));
        uVar5 = F_0042b790(((undefined1 *)(gen_frame + 0x10e18)));
        bVar9 = true;
        if (uVar5 == 8) {
          uVar6 = 0;
          do {
            if (!bVar9) goto LAB_00acbfd7;
            if (*(char *)(uVar6 + uVar3) != '0') {
              bVar9 = false;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < 7);
          if (bVar9) {
            if (7 < (byte)(*(char *)(uVar3 + 7) - 0x30U)) goto LAB_00acbfd5;
            (*(int *)(gen_frame + 0x10058)) = *(char *)(uVar3 + 7) + -0x30;
          }
        }
        else {
LAB_00acbfd5: ;
          bVar9 = false;
        }
LAB_00acbfd7: ;
        ((char *)(gen_frame + 0x11074))[0] = '\0';
        if (bVar9) {
LAB_00acc032: ;
          pwVar7 = ((wchar_t *)(gen_frame + 0x10a7c));
          pwVar8 = ((wchar_t *)(gen_frame + 0x10874));
          for (iVar4 = 0x82; iVar4 != 0; iVar4 = iVar4 + -1) {
            *(undefined4 *)pwVar8 = *(undefined4 *)pwVar7;
            pwVar7 = pwVar7 + 2;
            pwVar8 = pwVar8 + 2;
          }
          F_0042a020(((wchar_t *)(gen_frame + 0x10874)),((undefined1 *)(gen_frame + 0x1066c)));
          F_004f88e0(((undefined1 *)(gen_frame + 0x10024)));
          uVar3 = F_004f8900(((undefined1 *)(gen_frame + 0x10024)),((wchar_t *)(gen_frame + 0x10874)),0);
          if (uVar3 == 1) {
            uVar10 = F_004f7900(((undefined1 *)(gen_frame + 0x10024)));
            iVar4 = (int)uVar10;
            uVar3 = F_00406bb0(iVar4,0,0);
            (*(uint *)(gen_frame + 0x10050)) = uVar3;
            uVar5 = F_004f77b0(((undefined1 *)(gen_frame + 0x10024)),uVar3,iVar4,0);
            if (uVar5 == 1) {
              (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10054)) = (*(undefined * PTR32 (*)[3])REFP(0x1090b70));
              uVar5 = F_00406bb0(iVar4 + 1,0,0);
              uVar3 = F_00407d50((undefined *)&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10054)),uVar3,iVar4,uVar5,iVar4);
              *(undefined1 *)(uVar3 + uVar5) = 0;
              F_00acac40(iVar4,((undefined1 *)(gen_frame + 0x10068)),uVar5);
              uVar3 = 0;
              do {
                F_00c472af(((undefined1 *)(gen_frame + 0x11178)),0x80,"appearancetype_%s",
                           *((undefined4 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x10ea304) + uVar3))));
                uVar6 = F_00aca620(((undefined1 *)(gen_frame + 0x10068)),((undefined1 *)(gen_frame + 0x11178)));
                piVar1 = (int *)((int)&REFG(undefined4, 0x10ea300) + uVar3);
                uVar3 = uVar3 + 8;
                ((uint *)(gen_frame + 0x10dd0))[(int)(*piVar1)] = uVar6;
              } while (uVar3 < 0x90);
              uVar3 = F_00aca620(((undefined1 *)(gen_frame + 0x10068)),"rsc_tribe");
              (*(undefined4 *)(gen_frame + 0x10db8)) = 1;
              (*(undefined4 *)(gen_frame + 0x10dbc)) = 0;
              (*(undefined1 *)(gen_frame + 0x10dc0)) = (undefined1)(*(int *)(gen_frame + 0x10058));
              (*(undefined1 *)(gen_frame + 0x10cb4)) = 0;
              (*(undefined4 *)(gen_frame + 0x10cb0)) = 0;
              (*(undefined1 *)(gen_frame + 0x10cae)) = 0;
              bVar9 = ((char *)(gen_frame + 0x11074))[0] == '\0';
              if (bVar9) {
                ((undefined1 *)(gen_frame + 0x10d58))[0] = 0;
                ((undefined1 *)(gen_frame + 0x10d78))[0] = 0;
                ((undefined1 *)(gen_frame + 0x10d98))[0] = 0;
              }
              else {
                F_00c49908(((undefined1 *)(gen_frame + 0x10d58)),0x20,((char *)(gen_frame + 0x11074)));
                F_00c49908(((undefined1 *)(gen_frame + 0x10d78)),0x20,((undefined1 *)(gen_frame + 0x10e6c)));
                F_00c49908(((undefined1 *)(gen_frame + 0x10d98)),0x20,((undefined1 *)(gen_frame + 0x10f70)));
              }
              uVar3 = F_00b894b0(((undefined1 *)(gen_frame + 0x10c94)),uVar3,((uint *)(gen_frame + 0x10dd0)));
              if (uVar3 == 0) {
                if (bVar9) {
                  F_00acf400((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1005c)) + 0x9624),((undefined1 *)(gen_frame + 0x10c84)));
                }
                else {
                  F_00acf1f0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1005c)) + 0x9628),((undefined1 *)(gen_frame + 0x10c84)));
                }
              }
              F_00406b30(uVar5);
              uVar3 = (*(uint *)(gen_frame + 0x10050));
            }
            F_00406b30(uVar3);
            F_004f8b30(((undefined1 *)(gen_frame + 0x10024)));
          }
          F_004f9ed0(((undefined1 *)(gen_frame + 0x10024)));
          F_00429fa0();
        }
        else {
          (*(uint *)(gen_frame + 0x10048)) = uVar5;
          (*(uint *)(gen_frame + 0x10044)) = uVar3;
          (*(undefined4 *)(gen_frame + 0x1004c)) = 0;
          bVar2 = F_00aca5a0(&(*(uint *)(gen_frame + 0x10044)),((char *)(gen_frame + 0x11074)));
          if (((bVar2 != 0) && (bVar2 = F_00aca5a0(((undefined4)(uint)(this)),((undefined1 *)(gen_frame + 0x10f70))), bVar2 != 0)) &&
             (bVar2 = F_00aca5a0(in_ecx_00,((undefined1 *)(gen_frame + 0x10e6c))), bVar2 != 0)) goto LAB_00acc032;
        }
        F_0042c880(((undefined1 *)(gen_frame + 0x10e18)));
      }
      F_00429fa0();
    }
    uVar3 = F_004f8db0(((undefined1 *)(gen_frame + 0x10004)),&(*(undefined4 *)(gen_frame + 0x10060)),&(*(char *)(gen_frame + 0x10067)));
  } while( true );
}

/* ref: FUN_00acc2f0 */
uint F_00acc2f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacc2f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x260];
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined4 uVar3;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x258)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x25c);
  uVar3 = 0;
  if (param_1 == 0) {
    iVar4 = *(int *)(REFG(int, 0x137104c) + 0x18);
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x2c);
    LOCK();
    UNLOCK();
    *(undefined1 *)(param_1 + 1) = 0;
    iVar4 = param_1;
  }
  if (*(char *)((int)this + 0x9658) != '\0') {
    uVar2 = F_00aca740(this);
    *(undefined4 *)((int)this + 0x9664) = uVar3;
    if (*(int *)((int)this + 0x966c) != 0) {
      uVar2 = ((code *)*(gen_code32 *)((int)this + 0x9668))
                        (*(undefined4 *)((int)this + 0x966c),(int)this + 0x9670,iVar4,
                         *(undefined4 *)((int)this + 0x9678));
      *(undefined4 *)((int)this + 0x966c) = 0;
      F_00c47745((*(uint *)(gen_frame + 0x258)) ^ (uint)(uint)(gen_frame + 0x25c));
      return uVar2;
    }
    goto switchD_00acc3fe_default;
  }
  if (*(char *)(REFG(int, 0x137104c) + 8) != '\0') {
    uVar2 = F_00aca740(this);
    *(undefined4 *)((int)this + 0x9664) = 0;
    if (*(int *)((int)this + 0x966c) != 0) {
      uVar2 = ((code *)*(gen_code32 *)((int)this + 0x9668))
                        (*(undefined4 *)((int)this + 0x966c),(int)this + 0x9670,iVar4,
                         *(undefined4 *)((int)this + 0x9678));
      *(undefined4 *)((int)this + 0x966c) = 0;
      F_00c47745((*(uint *)(gen_frame + 0x258)) ^ (uint)(uint)(gen_frame + 0x25c));
      return uVar2;
    }
    goto switchD_00acc3fe_default;
  }
  uVar2 = *(uint *)((int)this + 0x965c);
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 0: ;
  case 1: ;
    F_009546c0((undefined *)((int)this + 0x9628));
    F_004f9bb0(((undefined1 *)(gen_frame + 0x18)));
    (*(gen_code32 *)(gen_frame + 0x10)) = (code *)0x0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(gen_code32 *)(gen_frame + 0x4c)) = ((code *)REFP(0xacbc70));
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
    (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0xacd160));
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
    (*(gen_code32 *)(gen_frame + 0x10)) = ((code *)REFP(0xacbd70));
    uVar2 = F_004fc7b0(REFG(undefined4, 0x1375ae8),((undefined1 *)(gen_frame + 0x18)),&(*(gen_code32 *)(gen_frame + 0x8)),5);
    *(undefined4 *)((int)this + 0x965c) = 3;
    *(undefined4 *)((int)this + 0x9660) = 0xffffffff;
    F_00c47745((*(uint *)(gen_frame + 0x258)) ^ (uint)(uint)(gen_frame + 0x25c));
    return uVar2;
  case 2: ;
    goto switchD_00acc3fe_caseD_2;
  case 3: ;
    bVar1 = F_00acbb00(this,iVar4,uVar3,(int)this + 0x320c,2);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) goto switchD_00acc3fe_default;
    *(undefined4 *)((int)this + 0x965c) = 2;
    *(undefined4 *)((int)this + 0x9660) = 0xffffffff;
switchD_00acc3fe_caseD_2: ;
    bVar1 = F_00acbb00(this,iVar4,uVar3,(int)this + 0x6418,3);
    uVar2 = CONCAT31(extraout_var_00,bVar1);
    if (bVar1 == 0) {
      *(undefined4 *)((int)this + 0x965c) = 4;
      *(undefined4 *)((int)this + 0x9660) = 0xffffffff;
switchD_00acc3fe_caseD_4: ;
      bVar1 = F_00acbb00(this,iVar4,uVar3,this,1);
      uVar2 = CONCAT31(extraout_var_01,bVar1);
      if (bVar1 == 0) {
        F_00aca740(this);
        *(undefined4 *)((int)this + 0x9664) = 0;
        uVar2 = F_00acae00(this,iVar4);
      }
    }
switchD_00acc3fe_default: ;
    F_00c47745((*(uint *)(gen_frame + 0x258)) ^ (uint)(uint)(gen_frame + 0x25c));
    return uVar2;
  case 4: ;
    goto switchD_00acc3fe_caseD_4;
  default: ;
    goto switchD_00acc3fe_default;
  }
}

/* ref: FUN_00acc540 */
uint F_00acc540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacc540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_00acc2f0(*(undefined * PTR32 *)((int)this + 0x28),0,0);
  uVar1 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)this)))(this,1);
  return uVar1;
}

/* ref: FUN_00acc5d0 */
byte F_00acc5d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacc5d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 0x966c) = 0;
  *(undefined1 *)((int)this + 0x9658) = 0;
  LOCK();
  UNLOCK();
  if ((REFG(int, 0x14bee60) == 0) && (*((int *)GEN_TOP((*(int *)(REFG(int, 0x137104c) + 0x18) + 0x194))) == 0)) {
    *(undefined4 *)((int)this + 0x9640) = 0;
    *(undefined4 *)((int)this + 0x965c) = 1;
    *(undefined4 *)((int)this + 0x9660) = 0xffffffff;
    *(undefined4 *)((int)this + 0x9664) = 1;
    F_00acc2f0(this,0,0);
    *(undefined4 *)((int)this + 0x9668) = *param_1;
    *(undefined4 *)((int)this + 0x966c) = param_1[1];
    *(undefined4 *)((int)this + 0x9670) = param_1[2];
    *(undefined4 *)((int)this + 0x9674) = param_1[3];
    *(undefined4 *)((int)this + 0x9678) = param_2;
    return 1;
  }
  return 0;
}

/* ref: FUN_00acc670 */
byte F_00acc670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacc670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int in_ecx;
  byte bVar1;
  undefined4 * this_00;
  uint uVar2;
  
  *(undefined1 *)((int)this + 0x9658) = 1;
  this_00 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x9654) + 8))))(*(int * PTR32 *)((int)this + 0x9654),param_1)))
  ;
  this_00[0x4d] = 1;
  this_00[1] = 1;
  this_00[0x4e] = 3;
  *this_00 = 0x2013ff14;
  this_00[2] = 0;
  this_00[3] = 0;
  uVar2 = F_00acc850(this_00);
  this_00[2] = uVar2;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x9654) + 0x10))))(*(int * PTR32 *)((int)this + 0x9654));
  in_ecx = *(int *)(REFG(int, 0x137104c) + 0x18);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x9654) + 8))))(*(int * PTR32 *)((int)this + 0x9654),param_1);
  bVar1 = F_00acb150(in_ecx,this,1,param_1,uVar2,0xd4);
  if (bVar1 != 0) {
    *(gen_code32 *)(in_ecx + 0x18) = ((code *)REFP(0xacc2f0));
    *(gen_code32 *)(in_ecx + 0x10) = ((code *)REFP(0xacd180));
    *(undefined * PTR32 *)(in_ecx + 0x14) = this;
    *(undefined4 *)(in_ecx + 0x1c) = 0;
    *(undefined4 *)(in_ecx + 0x20) = 0;
  }
  return bVar1;
}

/* ref: FUN_00acc730 */
byte F_00acc730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xacc730u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  
  bVar1 = F_00acc670(this,param_1);
  if (bVar1 != 0) {
    *(undefined4 *)((int)this + 0x9668) = *param_2;
    *(undefined4 *)((int)this + 0x966c) = param_2[1];
    *(undefined4 *)((int)this + 0x9670) = param_2[2];
    *(undefined4 *)((int)this + 0x9674) = param_2[3];
    *(undefined4 *)((int)this + 0x9678) = param_3;
    return 1;
  }
  return 0;
}

/* ref: FUN_00acc7c0 */
uint F_00acc7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacc7c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte * pbVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  uVar4 = 0;
  if (param_2 != 0) {
    do {
      uVar3 = uVar4 / 0x18;
      cVar2 = (char)uVar4;
      pbVar1 = (byte *)(uVar4 + param_1);
      uVar4 = uVar4 + 1;
      uVar5 = uVar5 ^ (uint)*pbVar1 << (cVar2 + (char)uVar3 * -0x18 & 0x1fU);
    } while (uVar4 < param_2);
  }
  return uVar5;
}

/* ref: FUN_00acc810 */
uint F_00acc810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacc810u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00acc850 */
uint F_00acc850(unsigned int gen_a0)
{
  GEN_ENTER(0xacc850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  byte * pbVar2;
  byte * pbVar3;
  uint local_8;
  
  local_8 = 0;
  pbVar2 = (byte *)((int)this + 0x13);
  do {
    cVar1 = (char)(pbVar2 + (-0x13 - (int)this));
    pbVar3 = pbVar2 + 4;
    local_8 = local_8 ^ (uint)pbVar2[-2] <<
                        (cVar1 + (char)((uint)(pbVar2 + (-0x12 - (int)this)) / 0x18) * -0x18 + 1U &
                        0x1f) ^ (uint)pbVar2[-1] <<
                                (cVar1 + (char)((uint)(pbVar2 + (-0x11 - (int)this)) / 0x18) * -0x18
                                 + 2U & 0x1f) ^
                        (uint)*pbVar2 <<
                        (cVar1 + (char)((uint)(pbVar2 + (-0x10 - (int)this)) / 0x18) * -0x18 + 3U &
                        0x1f) ^ (uint)pbVar2[-3] <<
                                (cVar1 + (char)((uint)(pbVar2 + (-0x13 - (int)this)) / 0x18) * -0x18
                                & 0x1fU);
    pbVar2 = pbVar3;
  } while (pbVar3 + (-0x13 - (int)this) < (byte *)0xc4);
  return local_8;
}

/* ref: FUN_00acc960 */
uint F_00acc960(unsigned int gen_a0)
{
  GEN_ENTER(0xacc960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  
  pvVar1 = F_00c48350((undefined *)((int)this + 0x10),0,0xc4);
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined1 *)((int)this + 0xd4) = 0;
  *(undefined1 *)((int)this + 0xf4) = 0;
  *(undefined1 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)this = 0x2013ff14;
  *(undefined4 *)((int)this + 4) = 1;
  *(undefined1 *)((int)this + 0x13c) = 0xff;
  return (uint)pvVar1;
}

/* ref: FUN_00acc9e0 */
byte F_00acc9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacc9e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x34) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00acc9f0 */
unsigned int F_00acc9f0(unsigned int gen_a0)
{
  GEN_ENTER(0xacc9f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((&REFG(undefined1, 0x14bee00))[param_1] != '\0') {
    if ((&REFG(undefined4, 0x14bedc0))[param_1] != 0) {
      F_00406b30((&REFG(undefined4, 0x14bedc0))[param_1]);
      (&REFG(undefined4, 0x14bedc0))[param_1] = 0;
    }
    (&REFG(undefined1, 0x14bee00))[param_1] = 0;
  }
  (&REFG(undefined4, 0x14bed80))[param_1] = 0;
  return 0;
}

/* ref: FUN_00acca30 */
uint F_00acca30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacca30u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  
  if ((&REFG(undefined1, 0x14bee00))[param_1] != '\0') {
    if ((&REFG(undefined4, 0x14bedc0))[param_1] != 0) {
      F_00406b30((&REFG(undefined4, 0x14bedc0))[param_1]);
      (&REFG(undefined4, 0x14bedc0))[param_1] = 0;
    }
    (&REFG(undefined1, 0x14bee00))[param_1] = 0;
  }
  piVar1 = &REFG(undefined4, 0x14bed80) + param_1;
  *piVar1 = 0;
  (&REFG(undefined4, 0x14bedc0))[param_1] = param_2;
  if (param_2 == 0) {
    uVar2 = 0;
    if (param_3 != 0) {
      uVar2 = F_00406bb0(param_3 + 0xb,0,0);
      (&REFG(undefined4, 0x14bedc0))[param_1] = uVar2;
      *(undefined1 *)(uVar2 + param_3) = 0;
      (&REFG(undefined1, 0x14bee00))[param_1] = 1;
    }
    *piVar1 = param_3;
    return uVar2;
  }
  *piVar1 = param_3;
  return param_2;
}

/* ref: FUN_00accac0 */
unsigned int F_00accac0(unsigned int gen_a0)
{
  GEN_ENTER(0xaccac0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LOCK();
  REFG(undefined4, 0x14bee60) = 0;
  UNLOCK();
  *(undefined4 *)&REFG(undefined1, 0x14bee00) = 0;
  *(undefined4 *)&REFG(undefined, 0x14bee04) = 0;
  *(undefined4 *)&REFG(undefined, 0x14bee08) = 0;
  *(undefined4 *)&REFG(undefined, 0x14bee0c) = 0;
  REFG(undefined4, 0x14bedc0) = 0;
  REFG(undefined4, 0x14bedc4) = 0;
  REFG(undefined4, 0x14bedc8) = 0;
  REFG(undefined4, 0x14bedcc) = 0;
  REFG(undefined4, 0x14bedd0) = 0;
  *(undefined4 *)&REFG(undefined, 0x14bedd4) = 0;
  *(undefined4 *)&REFG(undefined, 0x14bedd8) = 0;
  *(undefined4 *)&REFG(undefined, 0x14beddc) = 0;
  *(undefined4 *)&REFG(undefined, 0x14bede0) = 0;
  *(undefined4 *)&REFG(undefined, 0x14bede4) = 0;
  *(undefined4 *)&REFG(undefined, 0x14bede8) = 0;
  *(undefined4 *)&REFG(undefined, 0x14bedec) = 0;
  *(undefined4 *)&REFG(undefined, 0x14bedf0) = 0;
  *(undefined4 *)&REFG(undefined, 0x14bedf4) = 0;
  *(undefined4 *)&REFG(undefined, 0x14bedf8) = 0;
  *(undefined4 *)&REFG(undefined, 0x14bedfc) = 0;
  return 0;
}

/* ref: FUN_00accb50 */
uint F_00accb50(unsigned int gen_a0)
{
  GEN_ENTER(0xaccb50u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  LOCK();
  UNLOCK();
  if (REFG(int, 0x14bee60) != 0) {
    return 1;
  }
  uVar2 = 0;
  do {
    if ((&REFG(undefined1, 0x14bee00))[uVar2] != '\0') {
      if ((&REFG(undefined4, 0x14bedc0))[uVar2] != 0) {
        F_00406b30((&REFG(undefined4, 0x14bedc0))[uVar2]);
        (&REFG(undefined4, 0x14bedc0))[uVar2] = 0;
      }
      (&REFG(undefined1, 0x14bee00))[uVar2] = 0;
    }
    (&REFG(undefined4, 0x14bed80))[uVar2] = 0;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  puVar3 = param_1;
  puVar4 = &REFG(undefined4, 0x14be758);
  for (iVar1 = 0x18a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  REFG(undefined4, 0x14be750) = 0;
  return 0;
}

/* ref: FUN_00accbd0 */
uint F_00accbd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaccbd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  LOCK();
  UNLOCK();
  if (REFG(int, 0x14bee60) != 0) {
    return 1;
  }
  uVar1 = 0;
  do {
    if ((&REFG(undefined1, 0x14bee00))[uVar1] != '\0') {
      if ((&REFG(undefined4, 0x14bedc0))[uVar1] != 0) {
        F_00406b30((&REFG(undefined4, 0x14bedc0))[uVar1]);
        (&REFG(undefined4, 0x14bedc0))[uVar1] = 0;
      }
      (&REFG(undefined1, 0x14bee00))[uVar1] = 0;
    }
    (&REFG(undefined4, 0x14bed80))[uVar1] = 0;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x10);
  F_00c49908(&REFG(undefined4, 0x14be758),0x104,param_1);
  REFG(undefined4, 0x14bed64) = param_2;
  REFG(undefined4, 0x14be750) = 0;
  return 0;
}

/* ref: FUN_00accc50 */
uint F_00accc50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaccc50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  F_00c49908(&REFG(undefined, 0x14bd710) + REFG(int, 0x14be750) * 0x104,0x104,param_1);
  uVar1 = F_00acca30(REFG(int, 0x14be750),param_2,param_3);
  REFG(int, 0x14be750) = REFG(int, 0x14be750) + 1;
  return uVar1;
}

/* ref: FUN_00accca0 */
uint F_00accca0(unsigned int gen_a0)
{
  GEN_ENTER(0xaccca0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (&REFG(undefined4, 0x14bedc0))[param_1];
}

/* ref: FUN_00acccb0 */
uint F_00acccb0(unsigned int gen_a0)
{
  GEN_ENTER(0xacccb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (&REFG(undefined4, 0x14bed80))[param_1];
}

/* ref: FUN_00acccc0 */
unsigned int F_00acccc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xacccc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  if ((char)param_7 == '\0') {
    REFG(int, 0x14bee10) = (-(uint)((char)param_8 != '\0') & 0xfffffffd) + 6;
  }
  else {
    REFG(int, 0x14bee10) = 0;
  }
  LOCK();
  REFG(undefined4, 0x14bee60) = 0;
  UNLOCK();
  return 0;
}

/* ref: FUN_00accd00 */
uint F_00accd00(void)
{
  GEN_ENTER(0xaccd00u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x14bee60);
  LOCK();
  REFG(undefined4, 0x14bee60) = 0;
  UNLOCK();
  return uVar1;
}

/* ref: FUN_00accd20 */
uint F_00accd20(unsigned int gen_a0)
{
  GEN_ENTER(0xaccd20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (&REFG(undefined4, 0x14bee18))[param_1];
}

/* ref: FUN_00accd80 */
uint F_00accd80(unsigned int gen_a0)
{
  GEN_ENTER(0xaccd80u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  F_0042b630(in_ecx + 0x54);
  F_0042b630(in_ecx + 0xa8);
  return in_ecx;
}

/* ref: FUN_00accda0 */
uint F_00accda0(unsigned int gen_a0)
{
  GEN_ENTER(0xaccda0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0xa8));
  F_0042c880((undefined *)((int)this + 0x54));
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: FUN_00accdc0 */
uint F_00accdc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaccdc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  
  *(int *)((int)this + param_1 * 4 + 0x108) = param_2[5];
  uVar1 = ((code *)*(gen_code32 *)(*param_2 + 0x10))(param_2);
  *(uint *)((int)this + param_1 * 4 + 0x130) = uVar1 + 0x20;
  return uVar1 + 0x20;
}

/* ref: FUN_00accdf0 */
unsigned int F_00accdf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaccdf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  *(undefined4 *)((int)this + param_1 * 4 + 0x108) = 0;
  *(undefined4 *)((int)this + param_1 * 4 + 0x130) = 0;
  if (((char)param_2[0xb] != '\0') || ((char)param_3 != '\0')) {
    F_00447240(param_2,param_1);
    *(int *)((int)this + param_1 * 4 + 0x108) = param_2[5];
    uVar1 = ((code *)*(gen_code32 *)(*param_2 + 0x10))(param_2);
    *(uint *)((int)this + param_1 * 4 + 0x130) = uVar1 + 0x20;
  }
  if (*(char *)((int)param_2 + 0x2d) != '\0') {
    *(undefined1 *)((int)param_2 + 0x2d) = 0;
  }
  return 0;
}

/* ref: FUN_00acce80 */
uint F_00acce80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacce80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x108 + param_2 * 4);
}

/* ref: FUN_00acced0 */
uint F_00acced0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacced0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x130 + param_2 * 4);
}

/* ref: FUN_00accef0 */
uint F_00accef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaccef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880((undefined *)((int)this + 0xa8));
  F_0042c880((undefined *)((int)this + 0x54));
  F_0042c880(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00accf70 */
uint F_00accf70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaccf70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  uVar1 = param_1[3];
  *(uint *)((int)this + 0xc) = uVar1;
  return uVar1;
}

/* ref: FUN_00accf90 */
uint F_00accf90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaccf90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)this)(*(undefined4 *)((int)this + 4),(int)this + 8,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00accfe0 */
uint F_00accfe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaccfe0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x140,param_2,0x137);
  return uVar1;
}

/* ref: FUN_00acd030 */
uint F_00acd030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacd030u, gen_a0, gen_a1, gen_a2, 0u);
  code * param_1 = (code *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = (*param_1)(param_3);
  return uVar1;
}

/* ref: FUN_00acd060 */
uint F_00acd060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacd060u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x137);
  return uVar1;
}

/* ref: FUN_00acd090 */
uint F_00acd090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacd090u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 8) = *(int *)(in_ecx + 8) - param_2;
  return in_ecx;
}

/* ref: FUN_00acd0b0 */
uint F_00acd0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacd0b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 8,param_2,0x137);
  return uVar1;
}

/* ref: FUN_00acd100 */
unsigned int F_00acd100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacd100u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = param_2;
    puVar3 = param_1;
    for (iVar1 = 0x50; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return 0;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00acd120 */
unsigned int F_00acd120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacd120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00acd140 */
uint F_00acd140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xacd140u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00acd160 */
uint F_00acd160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacd160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3);
  return uVar1;
}

/* ref: FUN_00acd180 */
uint F_00acd180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xacd180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00acd1a0 */
uint F_00acd1a0(unsigned int gen_a0)
{
  GEN_ENTER(0xacd1a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00acd1b0 */
uint F_00acd1b0(unsigned int gen_a0)
{
  GEN_ENTER(0xacd1b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00acd1f0 */
uint F_00acd1f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacd1f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 4) = param_1;
  return (uint)this;
}

/* ref: FUN_00acd230 */
uint F_00acd230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacd230u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_2;
  return param_1;
}

/* ref: FUN_00acd240 */
byte F_00acd240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacd240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) == *(int *)(param_1 + 4);
}

/* ref: FUN_00acd260 */
uint F_00acd260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacd260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) - *(int *)(param_1 + 4);
}

/* ref: FUN_00acd280 */
uint F_00acd280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacd280u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 4) = *(int *)(in_ecx + 4) + param_2;
  return in_ecx;
}

/* ref: FUN_00acd290 */
unsigned int F_00acd290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacd290u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_00acd2d0 */
uint F_00acd2d0(unsigned int gen_a0)
{
  GEN_ENTER(0xacd2d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00acd2e0 */
uint F_00acd2e0(unsigned int gen_a0)
{
  GEN_ENTER(0xacd2e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00acd2f0 */
uint F_00acd2f0(unsigned int gen_a0)
{
  GEN_ENTER(0xacd2f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00acd320 */
uint F_00acd320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacd320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x10) = *param_1;
  *(undefined4 *)((int)this + 0x14) = param_1[1];
  *(undefined4 *)((int)this + 0x18) = param_1[2];
  uVar1 = param_1[3];
  *(uint *)((int)this + 0x1c) = uVar1;
  *(undefined4 *)((int)this + 0x20) = param_2;
  return uVar1;
}

/* ref: FUN_00acd350 */
uint F_00acd350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacd350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x180) = *param_1;
  *(undefined4 *)((int)this + 0x184) = param_1[1];
  *(undefined4 *)((int)this + 0x188) = param_1[2];
  uVar1 = param_1[3];
  *(uint *)((int)this + 0x18c) = uVar1;
  *(undefined4 *)((int)this + 400) = param_2;
  return uVar1;
}

/* ref: FUN_00acd3c0 */
uint F_00acd3c0(unsigned int gen_a0)
{
  GEN_ENTER(0xacd3c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x10c3ea0));
  *(undefined4 *)((int)this + 0x3208) = 0;
  uVar1 = 0;
  puVar2 = (undefined4 *)((int)this + 8);
  do {
    F_00c48350(puVar2 + 3,0,0xc4);
    puVar2[-1] = 0x2013ff14;
    *puVar2 = 1;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *(undefined1 *)(puVar2 + 0x34) = 0;
    *(undefined1 *)(puVar2 + 0x3c) = 0;
    *(undefined1 *)(puVar2 + 0x44) = 0;
    puVar2[0x4c] = 0;
    *(undefined1 *)(puVar2 + 0x4e) = 0xff;
    *(char *)(puVar2 + 0x4e) = (char)uVar1;
    uVar1 = uVar1 + 1;
    puVar2 = puVar2 + 0x50;
  } while (uVar1 < 0x28);
  *(undefined4 *)((int)this + 0x3204) = 0;
  return (uint)this;
}

/* ref: FUN_00acd450 */
uint F_00acd450(void)
{
  GEN_ENTER(0xacd450u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  LOCK();
  UNLOCK();
  if (REFG(int, 0x14bee60) == 0) {
    uVar1 = 0;
    do {
      if ((&REFG(undefined1, 0x14bee00))[uVar1] != '\0') {
        if ((&REFG(undefined4, 0x14bedc0))[uVar1] != 0) {
          F_00406b30((&REFG(undefined4, 0x14bedc0))[uVar1]);
          (&REFG(undefined4, 0x14bedc0))[uVar1] = 0;
        }
        (&REFG(undefined1, 0x14bee00))[uVar1] = 0;
      }
      (&REFG(undefined4, 0x14bed80))[uVar1] = 0;
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0x10);
    return 0;
  }
  return 1;
}

/* ref: FUN_00acd4b0 */
uint F_00acd4b0(void)
{
  GEN_ENTER(0xacd4b0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x4a0];
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  (*(uint *)(gen_frame + 0x498)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x49c);
  uVar1 = F_004308f0(REFG(undefined4, 0x137104c));
  F_0042e170(((undefined1 *)(gen_frame + 0x444)),uVar1);
  F_0042a3a0(((undefined4 *)(gen_frame + 0x23c)),((undefined1 *)(gen_frame + 0x444)),1);
  F_0042c880(((undefined1 *)(gen_frame + 0x444)));
  F_0042a2a0(((undefined4 *)(gen_frame + 0x23c)),&REFG(undefined4, 0x14be758));
  F_004f88e0(((undefined1 *)(gen_frame + 0xc)));
  uVar1 = F_004f7d10(((undefined4 *)(gen_frame + 0x23c)),0);
  if (uVar1 != 1) {
    REFG(undefined4, 0x14bee10) = 6;
    if (REFG(undefined4, 0x14be750) != 0) {
      puVar4 = &REFG(undefined4, 0x14bee18);
      for (uVar1 = REFG(undefined4, 0x14be750); uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar4 = 6;
        puVar4 = puVar4 + 1;
      }
    }
    uVar1 = F_004f9ed0(((undefined1 *)(gen_frame + 0xc)));
    F_00429fa0();
    F_00c47745((*(uint *)(gen_frame + 0x498)) ^ (uint)(uint)(gen_frame + 0x49c));
    return uVar1;
  }
  uVar1 = 0;
  (*(char *)(gen_frame + 0x33)) = '\0';
  if (REFG(undefined4, 0x14be750) != 0) {
    (*(undefined * PTR32 *)(gen_frame + 0x2c)) = &REFG(undefined, 0x14bd710);
    do {
      puVar4 = ((undefined4 *)(gen_frame + 0x23c));
      puVar5 = ((undefined4 *)(gen_frame + 0x34));
      for (iVar3 = 0x82; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      F_0042a2a0(((undefined4 *)(gen_frame + 0x34)),(*(undefined * PTR32 *)(gen_frame + 0x2c)));
      uVar2 = F_004f8900(((undefined1 *)(gen_frame + 0xc)),((undefined4 *)(gen_frame + 0x34)),1);
      if (uVar2 == 1) {
        (&REFG(undefined4, 0x14bee18))[uVar1] = 0;
        uVar2 = F_004f7840(((undefined1 *)(gen_frame + 0xc)),(&REFG(undefined4, 0x14bedc0))[uVar1],(&REFG(undefined4, 0x14bed80))[uVar1],0);
        if (uVar2 != 1) {
          REFG(undefined4, 0x14bee10) = 6;
          (&REFG(undefined4, 0x14bee18))[uVar1] = 6;
        }
        F_004f8b30(((undefined1 *)(gen_frame + 0xc)));
      }
      else {
        (*(char *)(gen_frame + 0x33)) = '\x01';
        REFG(undefined4, 0x14bee10) = 6;
        (&REFG(undefined4, 0x14bee18))[uVar1] = 6;
      }
      F_00429fa0();
      (*(undefined * PTR32 *)(gen_frame + 0x2c)) = (*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x104;
      uVar1 = uVar1 + 1;
    } while (uVar1 < REFG(undefined4, 0x14be750));
    REFG(undefined4, 0x14bee10) = 6;
    if ((*(char *)(gen_frame + 0x33)) != '\0') goto LAB_00acd671;
  }
  REFG(undefined4, 0x14bee10) = 0;
LAB_00acd671: ;
  uVar1 = F_004f9ed0(((undefined1 *)(gen_frame + 0xc)));
  F_00429fa0();
  F_00c47745((*(uint *)(gen_frame + 0x498)) ^ (uint)(uint)(gen_frame + 0x49c));
  return uVar1;
}

/* ref: FUN_00acd6a0 */
uint F_00acd6a0(void)
{
  GEN_ENTER(0xacd6a0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x4a0];
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  ulonglong uVar7;
  
  (*(uint *)(gen_frame + 0x498)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x49c);
  uVar2 = F_004308f0(REFG(undefined4, 0x137104c));
  F_0042e170(((undefined1 *)(gen_frame + 0x444)),uVar2);
  F_0042a3a0(((undefined4 *)(gen_frame + 0x23c)),((undefined1 *)(gen_frame + 0x444)),1);
  F_0042c880(((undefined1 *)(gen_frame + 0x444)));
  F_0042a2a0(((undefined4 *)(gen_frame + 0x23c)),&REFG(undefined4, 0x14be758));
  F_004f88e0(((undefined1 *)(gen_frame + 0xc)));
  uVar2 = 0;
  (*(char *)(gen_frame + 0x33)) = '\0';
  (*(char *)(gen_frame + 0x32)) = '\0';
  if (REFG(undefined4, 0x14be750) != 0) {
    (*(undefined * PTR32 *)(gen_frame + 0x2c)) = &REFG(undefined, 0x14bd710);
    do {
      puVar5 = ((undefined4 *)(gen_frame + 0x23c));
      puVar6 = ((undefined4 *)(gen_frame + 0x34));
      for (iVar4 = 0x82; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      F_0042a2a0(((undefined4 *)(gen_frame + 0x34)),(*(undefined * PTR32 *)(gen_frame + 0x2c)));
      uVar3 = F_004f8900(((undefined1 *)(gen_frame + 0xc)),((undefined4 *)(gen_frame + 0x34)),0);
      if (uVar3 == 1) {
        if ((&REFG(undefined4, 0x14bedc0))[uVar2] == 0) {
          iVar4 = (&REFG(undefined4, 0x14bed80))[uVar2];
          if (iVar4 == 0) {
            uVar7 = F_004f7900(((undefined1 *)(gen_frame + 0xc)));
            iVar4 = (int)uVar7;
          }
          cVar1 = (&REFG(undefined1, 0x14bee00))[uVar2];
          (&REFG(undefined4, 0x14bed80))[uVar2] = iVar4;
          if (cVar1 != '\0') {
            if ((&REFG(undefined4, 0x14bedc0))[uVar2] != 0) {
              F_00406b30((&REFG(undefined4, 0x14bedc0))[uVar2]);
              (&REFG(undefined4, 0x14bedc0))[uVar2] = 0;
            }
            (&REFG(undefined1, 0x14bee00))[uVar2] = 0;
          }
          (&REFG(undefined4, 0x14bed80))[uVar2] = 0;
          (&REFG(undefined4, 0x14bedc0))[uVar2] = 0;
          if (iVar4 != 0) {
            uVar3 = F_00406bb0(iVar4 + 0xb,0,0);
            (&REFG(undefined4, 0x14bedc0))[uVar2] = uVar3;
            *(undefined1 *)(uVar3 + iVar4) = 0;
            (&REFG(undefined1, 0x14bee00))[uVar2] = 1;
          }
          (&REFG(undefined4, 0x14bed80))[uVar2] = iVar4;
        }
        if ((&REFG(undefined4, 0x14bed80))[uVar2] == 0) {
          uVar3 = 2;
        }
        else {
          uVar3 = F_004f77b0(((undefined1 *)(gen_frame + 0xc)),(&REFG(undefined4, 0x14bedc0))[uVar2],(&REFG(undefined4, 0x14bed80))[uVar2],0);
        }
        F_004f8b30(((undefined1 *)(gen_frame + 0xc)));
        (&REFG(undefined4, 0x14bee18))[uVar2] = 0;
        if (uVar3 != 1) {
          REFG(undefined4, 0x14bee10) = 4;
          (*(char *)(gen_frame + 0x33)) = '\x01';
          goto LAB_00acd851;
        }
      }
      else {
        REFG(undefined4, 0x14bee10) = 3;
        (*(char *)(gen_frame + 0x32)) = '\x01';
LAB_00acd851: ;
        (&REFG(undefined4, 0x14bee18))[uVar2] = REFG(undefined4, 0x14bee10);
      }
      F_00429fa0();
      (*(undefined * PTR32 *)(gen_frame + 0x2c)) = (*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x104;
      uVar2 = uVar2 + 1;
    } while (uVar2 < REFG(undefined4, 0x14be750));
  }
  REFG(undefined4, 0x14bee10) = 0;
  if ((*(char *)(gen_frame + 0x33)) == '\0') {
    if ((*(char *)(gen_frame + 0x32)) != '\0') {
      REFG(undefined4, 0x14bee10) = 3;
    }
  }
  else {
    REFG(undefined4, 0x14bee10) = 4;
  }
  uVar2 = F_004f9ed0(((undefined1 *)(gen_frame + 0xc)));
  F_00429fa0();
  F_00c47745((*(uint *)(gen_frame + 0x498)) ^ (uint)(uint)(gen_frame + 0x49c));
  return uVar2;
}

/* ref: FUN_00acd8e0 */
uint F_00acd8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacd8e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x250];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x248)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24c);
  F_004f9bb0(&(*(undefined4 *)(gen_frame + 0x8)));
  F_004f84e0(&(*(undefined4 *)(gen_frame + 0x8)),param_1);
  (*(undefined4 *)(gen_frame + 0x8)) = param_3;
  (*(undefined4 *)(gen_frame + 0x20)) = param_2;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(gen_code32 *)(gen_frame + 0x3c)) = ((code *)REFP(0xacccc0));
  F_004fc510(REFG(undefined4, 0x1375ae8),&(*(undefined4 *)(gen_frame + 0x8)));
  uVar1 = REFG(undefined4, 0x14bee60);
  LOCK();
  REFG(undefined4, 0x14bee60) = 1;
  UNLOCK();
  F_00c47745((*(uint *)(gen_frame + 0x248)) ^ (uint)(uint)(gen_frame + 0x24c));
  return uVar1;
}

/* ref: FUN_00acd970 */
uint F_00acd970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xacd970u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_edi = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  LOCK();
  UNLOCK();
  if (REFG(int, 0x14bee60) == 0) {
    if ((*(uint *)&REFG(undefined, 0x14beebc) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14beebc) = *(uint *)&REFG(undefined, 0x14beebc) | 1;
      F_0042b630(&REFG(undefined, 0x14bee68));
      F_00c47de6(((code *)REFP(0x107c720)));
    }
    F_0041f130(param_2,in_edi,&REFG(undefined, 0x14bee68));
    iVar1 = REFG(int, 0x137104c);
    uVar2 = F_0042a970(&REFG(undefined, 0x14bee68));
    iVar3 = uVar2 + 1;
    uVar2 = F_0042a990(&REFG(undefined, 0x14bee68));
    F_00acd8e0(iVar1 + 0x24,uVar2,iVar3);
    return 0;
  }
  return 1;
}

/* ref: FUN_00acd9f0 */
uint F_00acd9f0(unsigned int gen_a0)
{
  GEN_ENTER(0xacd9f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0;
  if (piVar1 != (int *)0x0) {
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x40))(piVar1)));
    F_0043c630(pvVar2);
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1)));
    F_0043c630(pvVar2);
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1)));
    F_0043c630(pvVar2);
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1);
    F_0043c630((undefined *)(uVar3 + 0x850));
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x58))(piVar1)));
    F_0043c630(pvVar2);
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1)));
    F_0043c630(pvVar2);
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x38))(piVar1)));
    uVar3 = F_0043c630(pvVar2);
  }
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  return uVar3;
}

/* ref: FUN_00acdae0 */
uint F_00acdae0(unsigned int gen_a0)
{
  GEN_ENTER(0xacdae0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0;
  if (piVar1 != (int *)0x0) {
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x40))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2,*param_1,param_1[1]);
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2,*param_1,param_1[1]);
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2,*param_1,param_1[1]);
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1);
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(uVar3 + 0x850) + 0x1c))))((int *)(uVar3 + 0x850),*param_1,param_1[1]);
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x58))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2,*param_1,param_1[1]);
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2,*param_1,param_1[1]);
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x38))(piVar1)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1,*param_1,param_1[1]);
  }
  return uVar3;
}

/* ref: FUN_00acdbc0 */
uint F_00acdbc0(unsigned int gen_a0)
{
  GEN_ENTER(0xacdbc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0;
  if (piVar1 != (int *)0x0) {
    uVar4 = param_1;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x40))(piVar1)));
    F_00447310(pvVar2,uVar4);
    uVar4 = param_1;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1)));
    F_00447310(pvVar2,uVar4);
    uVar4 = param_1;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1)));
    F_00447310(pvVar2,uVar4);
    uVar4 = param_1;
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1);
    F_00447310((undefined *)(uVar3 + 0x850),uVar4);
    uVar4 = param_1;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x58))(piVar1)));
    F_00447310(pvVar2,uVar4);
    uVar4 = param_1;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1)));
    F_00447310(pvVar2,uVar4);
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x38))(piVar1)));
    uVar3 = F_00447310(pvVar2,param_1);
  }
  return uVar3;
}

/* ref: FUN_00acdc60 */
uint F_00acdc60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacdc60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  F_00acd9f0(this);
  LOCK();
  UNLOCK();
  *(undefined1 *)(param_1 + 1) = 0;
  uVar1 = param_1;
  if (*(int *)(param_1 + 0x184) != 0) {
    uVar1 = ((code *)*(gen_code32 *)(param_1 + 0x180))
                      (*(undefined4 *)(param_1 + 0x184),param_1 + 0x188,param_1,
                       *(undefined4 *)(param_1 + 400));
  }
  if (this != (undefined *)0x0) {
    F_0042c880((undefined *)((int)this + 0xa8));
    F_0042c880((undefined *)((int)this + 0x54));
    F_0042c880(this);
    uVar1 = F_00406ad0(this);
  }
  return uVar1;
}

/* ref: FUN_00acdce0 */
uint F_00acdce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacdce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  ushort * puVar2;
  undefined * pvVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 * puVar8;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0xfc) = REFG(undefined4, 0x14bedc0);
    *(undefined4 *)((int)this + 0x100) = REFG(undefined4, 0x14bedc4);
    *(undefined4 *)((int)this + 0x104) = REFG(undefined4, 0x14bedc8);
    piVar4 = (int *)((int)this + 0x108);
    uVar7 = 0;
    do {
      if (*piVar4 != 0) {
        uVar5 = *(uint *)((int)&REFG(undefined4, 0x14bed8c) + uVar7);
        if ((uint)piVar4[10] < *(uint *)((int)&REFG(undefined4, 0x14bed8c) + uVar7)) {
          uVar5 = piVar4[10];
        }
        if ((*(int *)((int)&REFG(undefined4, 0x14bedcc) + uVar7) != 0) && (uVar5 != 0)) {
          F_00c46aa0(*piVar4,*(int *)((int)&REFG(undefined4, 0x14bedcc) + uVar7),uVar5);
        }
      }
      uVar7 = uVar7 + 4;
      piVar4 = piVar4 + 1;
    } while (uVar7 < 0x1c);
    iVar1 = *(int *)(REFG(int, 0x137104c) + 0x10);
    F_0042b630(((undefined1 *)(gen_frame + 0xc)));
    F_0042e430(((undefined1 *)(gen_frame + 0xc)),*(undefined4 *)((int)this + 0xfc));
    F_00420340((undefined *)(iVar1 + 0xb0),((undefined1 *)(gen_frame + 0xc)));
    F_0042e430(((undefined1 *)(gen_frame + 0xc)),*(undefined4 *)((int)this + 0x100));
    puVar8 = ((undefined1 *)(gen_frame + 0xc));
    pvVar3 = (undefined *)F_00414010(iVar1,0);
    F_00420340(pvVar3,puVar8);
    F_0042e430(((undefined1 *)(gen_frame + 0xc)),*(undefined4 *)((int)this + 0x104));
    puVar8 = ((undefined1 *)(gen_frame + 0xc));
    pvVar3 = (undefined *)F_00414010(iVar1,1);
    F_00420340(pvVar3,puVar8);
    F_00acdbc0(1);
  }
  else {
    if ((iVar1 != 3) && (iVar1 != 4)) goto LAB_00ace080;
    piVar4 = (int *)F_00424750(REFG(int, 0x137104c));
    uVar7 = ((code *)*(gen_code32 *)(*piVar4 + 0x40))(piVar4);
    *(undefined4 *)((int)this + 0xfc) = REFG(undefined4, 0x14bedc0);
    *(undefined4 *)((int)this + 0x100) = REFG(undefined4, 0x14bedc4);
    *(undefined4 *)((int)this + 0x104) = REFG(undefined4, 0x14bedc8);
    (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)((int)this + 0x108);
    ((char *)(gen_frame + 0x60))[0] = '\0';
    ((char *)(gen_frame + 0x60))[1] = '\0';
    ((char *)(gen_frame + 0x60))[2] = '\0';
    ((char *)(gen_frame + 0x60))[3] = '\0';
    ((char *)(gen_frame + 0x60))[4] = '\0';
    ((char *)(gen_frame + 0x60))[5] = '\0';
    ((char *)(gen_frame + 0x60))[6] = '\0';
    (*(uint *)(gen_frame + 0x4)) = 0;
    do {
      if (*(*(int * PTR32 *)(gen_frame + 0x8)) != 0) {
        puVar2 = ((ushort *)GEN_TOP((&REFG(undefined4, 0x14bedcc))[(*(uint *)(gen_frame + 0x4))]));
        iVar1 = (&REFG(undefined4, 0x14bed8c))[(*(uint *)(gen_frame + 0x4))];
        if (((((puVar2 != (ushort *)0x0) && (iVar1 != 0)) && ((&REFG(undefined4, 0x14bee24))[(*(uint *)(gen_frame + 0x4))] == 0)) &&
            ((uVar5 = (uint)*puVar2, uVar5 < 7 && ((*(uint *)(gen_frame + 0x4)) <= uVar5)))) &&
           (((char *)(gen_frame + 0x60))[(int)(uVar5)] == '\0')) {
          F_00c46aa0(*(undefined4 *)((int)this + uVar5 * 4 + 0x108),puVar2,iVar1)
          ;
          *(int *)((int)this + (uint)*puVar2 * 4 + 0x130) = iVar1;
          ((char *)(gen_frame + 0x60))[(int)(*puVar2)] = '\x01';
        }
      }
      (*(int * PTR32 *)(gen_frame + 0x8)) = (*(int * PTR32 *)(gen_frame + 0x8)) + 1;
      (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
    } while ((*(uint *)(gen_frame + 0x4)) < 7);
    if (((char *)(gen_frame + 0x60))[0] == '\0') {
      *(undefined4 *)((int)this + 0x130) = 0;
    }
    if (((char *)(gen_frame + 0x60))[1] == '\0') {
      *(undefined4 *)((int)this + 0x134) = 0;
    }
    if (((char *)(gen_frame + 0x60))[2] == '\0') {
      *(undefined4 *)((int)this + 0x138) = 0;
    }
    if (((char *)(gen_frame + 0x60))[3] == '\0') {
      *(undefined4 *)((int)this + 0x13c) = 0;
    }
    if (((char *)(gen_frame + 0x60))[4] == '\0') {
      *(undefined4 *)((int)this + 0x140) = 0;
    }
    if (((char *)(gen_frame + 0x60))[5] == '\0') {
      *(undefined4 *)((int)this + 0x144) = 0;
    }
    if (((char *)(gen_frame + 0x60))[6] == '\0') {
      *(undefined4 *)((int)this + 0x148) = 0;
    }
    iVar1 = *(int *)(REFG(int, 0x137104c) + 0x10);
    F_0042b630(((undefined1 *)(gen_frame + 0xc)));
    if (*(int *)((int)this + 0xfc) != 0) {
      F_0042e430(((undefined1 *)(gen_frame + 0xc)),*(int *)((int)this + 0xfc));
      F_00420340((undefined *)(iVar1 + 0xb0),((undefined1 *)(gen_frame + 0xc)));
    }
    if (*(int *)((int)this + 0x100) != 0) {
      F_0042e430(((undefined1 *)(gen_frame + 0xc)),*(int *)((int)this + 0x100));
      puVar8 = ((undefined1 *)(gen_frame + 0xc));
      pvVar3 = (undefined *)F_00414010(iVar1,0);
      F_00420340(pvVar3,puVar8);
    }
    if (*(int *)((int)this + 0x104) != 0) {
      F_0042e430(((undefined1 *)(gen_frame + 0xc)),*(int *)((int)this + 0x104));
      puVar8 = ((undefined1 *)(gen_frame + 0xc));
      pvVar3 = (undefined *)F_00414010(iVar1,1);
      F_00420340(pvVar3,puVar8);
    }
    uVar5 = (uint)(*(int *)((int)this + 0x130) != 0);
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x40))(piVar4)));
    F_00447310(pvVar3,uVar5);
    uVar5 = (uint)(*(int *)((int)this + 0x134) != 0);
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x2c))(piVar4)));
    F_00447310(pvVar3,uVar5);
    uVar5 = (uint)(*(int *)((int)this + 0x138) != 0);
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x30))(piVar4)));
    F_00447310(pvVar3,uVar5);
    uVar6 = (uint)(*(int *)((int)this + 0x13c) != 0);
    uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x50))(piVar4);
    F_00447310((undefined *)(uVar5 + 0x850),uVar6);
    uVar5 = (uint)(*(int *)((int)this + 0x140) != 0);
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x58))(piVar4)));
    F_00447310(pvVar3,uVar5);
    uVar5 = (uint)(*(int *)((int)this + 0x144) != 0);
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x34))(piVar4)));
    F_00447310(pvVar3,uVar5);
    uVar5 = (uint)(*(int *)((int)this + 0x148) != 0);
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x38))(piVar4)));
    F_00447310(pvVar3,uVar5);
    *(undefined1 *)(uVar7 + 0x34) = 1;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0xc)));
LAB_00ace080: ;
  F_00acd9f0(this);
  LOCK();
  UNLOCK();
  *(undefined1 *)(param_1 + 1) = 0;
  uVar7 = param_1;
  if (*(int *)(param_1 + 0x184) != 0) {
    uVar7 = ((code *)*(gen_code32 *)(param_1 + 0x180))
                      (*(undefined4 *)(param_1 + 0x184),param_1 + 0x188,param_1,
                       *(undefined4 *)(param_1 + 400));
  }
  if (this != (undefined *)0x0) {
    F_0042c880((undefined *)((int)this + 0xa8));
    F_0042c880((undefined *)((int)this + 0x54));
    F_0042c880(this);
    uVar7 = F_00406ad0(this);
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar7;
}

/* ref: FUN_00ace100 */
uint F_00ace100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xace100u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  *in_ecx = ((code *)REFP(0xacd030));
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00ace140 */
uint F_00ace140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xace140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) - *(int *)(param_1 + 8);
}

/* ref: FUN_00ace160 */
byte F_00ace160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xace160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) == *(int *)(param_1 + 8);
}

/* ref: FUN_00ace190 */
uint F_00ace190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xace190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0xacd140));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00ace1b0 */
uint F_00ace1b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xace1b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0xacd160));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00ace1d0 */
uint F_00ace1d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xace1d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0xacd180));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00ace1f0 */
unsigned int F_00ace1f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xace1f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (iVar1 = 0x50; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return 0;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00ace220 */
unsigned int F_00ace220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xace220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00ace240 */
uint F_00ace240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xace240u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_2;
  return param_1;
}

/* ref: FUN_00ace250 */
uint F_00ace250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xace250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 4) = param_1;
  return (uint)this;
}

/* ref: FUN_00ace270 */
uint F_00ace270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xace270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) - *(int *)(param_1 + 8);
}

/* ref: FUN_00ace290 */
uint F_00ace290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xace290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) - *(int *)(param_1 + 4);
}

/* ref: FUN_00ace2b0 */
uint F_00ace2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xace2b0u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 4) = *(int *)(in_ecx + 4) + param_2;
  return in_ecx;
}

/* ref: FUN_00ace2c0 */
unsigned int F_00ace2c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xace2c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00ace2e0 */
unsigned int F_00ace2e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xace2e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00ace320 */
unsigned int F_00ace320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xace320u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x150];
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_1;
  puVar3 = ((undefined4 *)(gen_frame + 0xc));
  for (iVar1 = 0x50; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_2;
  puVar3 = param_1;
  for (iVar1 = 0x50; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = ((undefined4 *)(gen_frame + 0xc));
  puVar3 = param_2;
  for (iVar1 = 0x50; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}

/* ref: FUN_00ace360 */
uint F_00ace360(void)
{
  GEN_ENTER(0xace360u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x4c0];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x4b8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4bc);
  if (REFG(int, 0x14bed64) == 1) {
    uVar1 = F_004308f0(REFG(undefined4, 0x137104c));
    F_0042e170(((undefined1 *)(gen_frame + 0x464)),uVar1);
    F_0042a3a0(((undefined1 *)(gen_frame + 0x1c)),((undefined1 *)(gen_frame + 0x464)),1);
    F_0042c880(((undefined1 *)(gen_frame + 0x464)));
    F_0042a2a0(((undefined1 *)(gen_frame + 0x1c)),&REFG(undefined4, 0x14be758));
    F_0042a2a0(((undefined1 *)(gen_frame + 0x1c)),&REFG(undefined, 0x10ea2f4));
    F_004f9bb0(&(*(undefined4 *)(gen_frame + 0x224)));
    F_004f84e0(&(*(undefined4 *)(gen_frame + 0x224)),((undefined1 *)(gen_frame + 0x1c)));
    (*(undefined4 *)(gen_frame + 0x23c)) = REFG(undefined4, 0x14bedc0);
    (*(undefined4 *)(gen_frame + 0x224)) = REFG(undefined4, 0x14bed80);
    (*(undefined4 *)(gen_frame + 0x228)) = 0;
    (*(gen_code32 *)(gen_frame + 0x258)) = ((code *)REFP(0xacccc0));
    uVar1 = F_004fc510(REFG(undefined4, 0x1375ae8),&(*(undefined4 *)(gen_frame + 0x224)));
    F_00429fa0();
  }
  else {
    F_004f9bb0(&(*(undefined4 *)(gen_frame + 0x224)));
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(gen_code32 *)(gen_frame + 0x258)) = ((code *)REFP(0xaccd00));
    (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0xacd030));
    (*(gen_code32 *)(gen_frame + 0x10)) = ((code *)REFP(0xacd4b0));
    uVar1 = F_004fc7b0(REFG(undefined4, 0x1375ae8),&(*(undefined4 *)(gen_frame + 0x224)),&(*(gen_code32 *)(gen_frame + 0xc)),5);
  }
  LOCK();
  REFG(undefined4, 0x14bee60) = 1;
  UNLOCK();
  F_00c47745((*(uint *)(gen_frame + 0x4b8)) ^ (uint)(uint)(gen_frame + 0x4bc));
  return uVar1;
}

/* ref: FUN_00ace4a0 */
uint F_00ace4a0(void)
{
  GEN_ENTER(0xace4a0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x4c0];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x4b8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4bc);
  if (REFG(int, 0x14bed64) == 1) {
    uVar1 = F_004308f0(REFG(undefined4, 0x137104c));
    F_0042e170(((undefined1 *)(gen_frame + 0x464)),uVar1);
    F_0042a3a0(((undefined1 *)(gen_frame + 0x1c)),((undefined1 *)(gen_frame + 0x464)),1);
    F_0042c880(((undefined1 *)(gen_frame + 0x464)));
    F_0042a2a0(((undefined1 *)(gen_frame + 0x1c)),&REFG(undefined4, 0x14be758));
    F_0042a2a0(((undefined1 *)(gen_frame + 0x1c)),&REFG(undefined, 0x10ea2f4));
    F_004f9bb0(&(*(undefined4 *)(gen_frame + 0x224)));
    F_004f84e0(&(*(undefined4 *)(gen_frame + 0x224)),((undefined1 *)(gen_frame + 0x1c)));
    (*(undefined4 *)(gen_frame + 0x23c)) = REFG(undefined4, 0x14bedc0);
    (*(undefined4 *)(gen_frame + 0x224)) = REFG(undefined4, 0x14bed80);
    (*(undefined4 *)(gen_frame + 0x228)) = 0;
    (*(gen_code32 *)(gen_frame + 0x258)) = ((code *)REFP(0xacccc0));
    uVar1 = F_004fc400(REFG(undefined4, 0x1375ae8),&(*(undefined4 *)(gen_frame + 0x224)));
    F_00429fa0();
  }
  else {
    F_004f9bb0(&(*(undefined4 *)(gen_frame + 0x224)));
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(gen_code32 *)(gen_frame + 0x258)) = ((code *)REFP(0xaccd00));
    (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0xacd030));
    (*(gen_code32 *)(gen_frame + 0x10)) = ((code *)REFP(0xacd6a0));
    uVar1 = F_004fc7b0(REFG(undefined4, 0x1375ae8),&(*(undefined4 *)(gen_frame + 0x224)),&(*(gen_code32 *)(gen_frame + 0xc)),5);
  }
  LOCK();
  REFG(undefined4, 0x14bee60) = 1;
  UNLOCK();
  F_00c47745((*(uint *)(gen_frame + 0x4b8)) ^ (uint)(uint)(gen_frame + 0x4bc));
  return uVar1;
}

/* ref: FUN_00ace5e0 */
unsigned int F_00ace5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xace5e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int in_edi;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  
  in_edi = *(int *)(REFG(int, 0x137104c) + 0x10);
  F_0041f130(in_edi + 0xb0,in_edi,this);
  iVar4 = (int)this + 0x54;
  uVar1 = F_00414010(in_edi,0);
  F_0041f130(uVar1,in_edi,iVar4);
  iVar4 = (int)this + 0xa8;
  uVar1 = F_00414010(in_edi,1);
  F_0041f130(uVar1,in_edi,iVar4);
  uVar1 = 0;
  do {
    piVar2 = (int *)F_00424750(REFG(int, 0x137104c));
    if (piVar2 == (int *)0x0) {
switchD_00ace646_default: ;
      piVar2 = (int *)0x0;
    }
    else {
      switch((unsigned int)(uintptr_t)(uVar1)) {
      case 0: ;
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x40))(piVar2)));
        break;
      case 1: ;
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x2c))(piVar2)));
        break;
      case 2: ;
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x30))(piVar2)));
        break;
      case 3: ;
        uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x50))(piVar2);
        if (uVar3 == 0) goto switchD_00ace646_default;
        piVar2 = (int *)(uVar3 + 0x850);
        break;
      case 4: ;
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x58))(piVar2)));
        break;
      case 5: ;
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x34))(piVar2)));
        break;
      case 6: ;
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x38))(piVar2)));
        break;
      default: ;
        goto switchD_00ace646_default;
      }
    }
    *(undefined4 *)((int)this + uVar1 * 4 + 0x108) = 0;
    *(undefined4 *)((int)this + uVar1 * 4 + 0x130) = 0;
    if ((char)piVar2[0xb] != '\0') {
      F_00447240(piVar2,uVar1);
      *(int *)((int)this + uVar1 * 4 + 0x108) = piVar2[5];
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
      *(uint *)((int)this + uVar1 * 4 + 0x130) = uVar3 + 0x20;
    }
    if (*(char *)((int)piVar2 + 0x2d) != '\0') {
      *(undefined1 *)((int)piVar2 + 0x2d) = 0;
    }
    uVar1 = uVar1 + 1;
    if (6 < uVar1) {
      uVar1 = F_0042a990(this);
      *(uint *)((int)this + 0xfc) = uVar1;
      uVar1 = F_0042a990((int)this + 0x54);
      *(uint *)((int)this + 0x100) = uVar1;
      uVar1 = F_0042a990((int)this + 0xa8);
      *(uint *)((int)this + 0x104) = uVar1;
      uVar1 = F_0042a970(this);
      *(uint *)((int)this + 0x124) = uVar1 + 1;
      uVar1 = F_0042a970((int)this + 0x54);
      *(uint *)((int)this + 0x128) = uVar1 + 1;
      uVar1 = F_0042a970((int)this + 0xa8);
      *(uint *)((int)this + 300) = uVar1 + 1;
      *(undefined * PTR32 *)(param_1 + 0x14) = this;
      *(gen_code32 *)(param_1 + 0x10) = ((code *)REFP(0xacd140));
      *(gen_code32 *)(param_1 + 0x18) = ((code *)REFP(0xacdc60));
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      return 0;
    }
  } while( true );
}

/* ref: FUN_00ace7a0 */
unsigned int F_00ace7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xace7a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x40))(piVar1)));
  F_0043c5e0(pvVar2);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x40))(piVar1)));
  *(int *)((int)this + 0x108) = piVar3[5];
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
  *(uint *)((int)this + 0x130) = uVar4 + 0x20;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1)));
  F_0043c5e0(pvVar2);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1)));
  *(int *)((int)this + 0x10c) = piVar3[5];
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
  *(uint *)((int)this + 0x134) = uVar4 + 0x20;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1)));
  F_0043c5e0(pvVar2);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1)));
  *(int *)((int)this + 0x110) = piVar3[5];
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
  *(uint *)((int)this + 0x138) = uVar4 + 0x20;
  uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1);
  F_0043c5e0((undefined *)(uVar4 + 0x850));
  uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1);
  if (uVar4 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)(uVar4 + 0x850);
  }
  *(int *)((int)this + 0x114) = piVar3[5];
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
  *(uint *)((int)this + 0x13c) = uVar4 + 0x20;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x58))(piVar1)));
  F_0043c5e0(pvVar2);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x58))(piVar1)));
  *(int *)((int)this + 0x118) = piVar3[5];
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
  *(uint *)((int)this + 0x140) = uVar4 + 0x20;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1)));
  F_0043c5e0(pvVar2);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1)));
  *(int *)((int)this + 0x11c) = piVar3[5];
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3);
  *(uint *)((int)this + 0x144) = uVar4 + 0x20;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x38))(piVar1)));
  F_0043c5e0(pvVar2);
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x38))(piVar1)));
  *(int *)((int)this + 0x120) = piVar1[5];
  uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
  *(uint *)((int)this + 0x148) = uVar4 + 0x20;
  *(undefined * PTR32 *)(param_1 + 0x14) = this;
  *(gen_code32 *)(param_1 + 0x10) = ((code *)REFP(0xacd140));
  *(gen_code32 *)(param_1 + 0x18) = ((code *)REFP(0xacdce0));
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return 0;
}

/* ref: FUN_00ace9c0 */
byte F_00ace9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xace9c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) != *(int *)(param_1 + 8);
}

/* ref: FUN_00acea20 */
uint F_00acea20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacea20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  if (*(undefined4 * PTR32 *)this == (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)((int)this + 8);
    *param_1 = 0;
    param_1[1] = uVar1;
    return (uint)param_1;
  }
  uVar1 = *(undefined4 *)((int)this + 8);
  *param_1 = **(undefined4 * PTR32 *)this;
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00acea50 */
uint F_00acea50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xacea50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int param_6 = (int)gen_a5;
  int * param_7 = (int *)(uintptr_t)gen_a6;
  *param_7 = *param_7 + (param_6 - param_3);
  return param_6 - param_3;
}

/* ref: FUN_00acea70 */
unsigned int F_00acea70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacea70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00aceaa0 */
unsigned int F_00aceaa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaceaa0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00acead0 */
uint F_00acead0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacead0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  *param_1 = *(undefined4 *)this;
  param_1[1] = iVar1 + param_2;
  return (uint)param_1;
}

/* ref: FUN_00aceaf0 */
unsigned int F_00aceaf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaceaf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  uint param_4 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x150];
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  uVar1 = param_4;
  if (*(uint *)(param_3 + 8) <= param_4) {
    uVar1 = param_4 - *(uint *)(param_3 + 8);
  }
  uVar2 = param_2;
  if (*(uint *)(param_1 + 8) <= param_2) {
    uVar2 = param_2 - *(uint *)(param_1 + 8);
  }
  puVar5 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 4) + uVar2 * 4)));
  puVar7 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_3 + 4) + uVar1 * 4)));
  puVar4 = puVar5;
  puVar6 = ((undefined4 *)(gen_frame + 0xc));
  for (iVar3 = 0x50; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar4 = puVar7;
  for (iVar3 = 0x50; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar5 = ((undefined4 *)(gen_frame + 0xc));
  for (iVar3 = 0x50; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  return 0;
}

/* ref: FUN_00aceba0 */
uint F_00aceba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaceba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)((int)this + 0x10);
  iVar2 = *(int *)((int)this + 0xc);
  uVar3 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar3;
  param_1[2] = iVar1 + iVar2;
  return (uint)param_1;
}

/* ref: FUN_00acebc0 */
unsigned int F_00acebc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacebc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  iVar2 = *(int *)((int)this + 8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar2 - param_2;
  if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar3;
  }
  return 0;
}

/* ref: FUN_00acec00 */
uint F_00acec00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xacec00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  if (param_2 == (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = param_4;
    return (uint)param_1;
  }
  *param_1 = *param_2;
  param_1[1] = param_4;
  return (uint)param_1;
}

/* ref: FUN_00acec30 */
uint F_00acec30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xacec30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int param_6 = (int)gen_a5;
  return param_6 - param_3;
}

/* ref: FUN_00acec40 */
unsigned int F_00acec40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacec40u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00acec70 */
unsigned int F_00acec70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacec70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00aceca0 */
unsigned int F_00aceca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xaceca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint param_6 = (uint)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x190];
  int iVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  
  iVar2 = param_4 - param_2;
  (*(int *)(gen_frame + 0x184)) = iVar2;
  (*(int *)(gen_frame + 0x188)) = param_6 - param_2;
  iVar1 = (*(int *)(gen_frame + 0x188));
  while (iVar2 != 0) {
    (*(int *)(gen_frame + 0x188)) = iVar2;
    iVar2 = iVar1 % iVar2;
    iVar1 = (*(int *)(gen_frame + 0x188));
  }
  (*(int *)(gen_frame + 0x188)) = iVar1;
  if (iVar1 < (int)(param_6 - param_2)) {
    while (0 < (*(int *)(gen_frame + 0x188))) {
      uVar3 = (*(int *)(gen_frame + 0x188)) + param_2;
      uVar5 = (*(int *)(gen_frame + 0x184)) + uVar3;
      (*(uint *)(gen_frame + 0x168)) = param_2;
      (*(uint *)(gen_frame + 0x168)) = uVar3;
      (*(int *)(gen_frame + 0x17c)) = param_1;
      if (uVar5 == param_6) {
        (*(int *)(gen_frame + 0x174)) = param_1;
        uVar5 = param_2;
      }
      else {
        (*(uint *)(gen_frame + 0x158)) = uVar3;
        (*(int *)(gen_frame + 0x16c)) = param_1;
        (*(uint *)(gen_frame + 0x170)) = uVar5;
        (*(int *)(gen_frame + 0x174)) = param_1;
      }
      do {
        uVar6 = uVar5;
        uVar5 = uVar6;
        if (*(uint *)((*(int *)(gen_frame + 0x174)) + 8) <= uVar6) {
          uVar5 = uVar6 - *(uint *)((*(int *)(gen_frame + 0x174)) + 8);
        }
        if (*(uint *)((*(int *)(gen_frame + 0x17c)) + 8) <= uVar3) {
          uVar3 = uVar3 - *(uint *)((*(int *)(gen_frame + 0x17c)) + 8);
        }
        puVar10 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x174)) + 4) + uVar5 * 4)));
        puVar8 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x17c)) + 4) + uVar3 * 4)));
        puVar7 = puVar8;
        puVar9 = ((undefined4 *)(gen_frame + 0xc));
        for (iVar2 = 0x50; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        }
        puVar7 = puVar10;
        for (iVar2 = 0x50; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar8 = ((undefined4 *)(gen_frame + 0xc));
        for (iVar2 = 0x50; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
        (*(int *)(gen_frame + 0x17c)) = (*(int *)(gen_frame + 0x174));
        (*(uint *)(gen_frame + 0x180)) = uVar6;
        if ((*(int *)(gen_frame + 0x184)) < (int)(param_6 - uVar6)) {
          (*(uint *)(gen_frame + 0x158)) = uVar6;
          (*(int *)(gen_frame + 0x15c)) = (*(int *)(gen_frame + 0x174));
          (*(int *)(gen_frame + 0x160)) = uVar6 + (*(int *)(gen_frame + 0x184));
          piVar4 = &(*(int *)(gen_frame + 0x15c));
        }
        else {
          (*(uint *)(gen_frame + 0x158)) = param_2;
          (*(int *)(gen_frame + 0x14c)) = param_1;
          (*(int *)(gen_frame + 0x150)) = (param_2 - (param_6 - uVar6)) + (*(int *)(gen_frame + 0x184));
          piVar4 = &(*(int *)(gen_frame + 0x14c));
        }
        (*(int *)(gen_frame + 0x174)) = *piVar4;
        uVar5 = piVar4[1];
        uVar3 = uVar6;
      } while (piVar4[1] != (*(uint *)(gen_frame + 0x168)));
      iVar2 = (*(int *)(gen_frame + 0x188)) + -1;
      (*(int *)(gen_frame + 0x188)) = iVar2;
    }
  }
  return 0;
}

/* ref: FUN_00acee10 */
unsigned int F_00acee10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacee10u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00acee40 */
unsigned int F_00acee40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacee40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00acee70 */
unsigned int F_00acee70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xacee70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  F_00aceca0(param_1,param_2,param_3,param_4,param_5,param_6,0,0);
  return 0;
}

/* ref: FUN_00aceef0 */
uint F_00aceef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xaceef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 * puVar8;
  ulonglong uVar9;
  
  uVar6 = *(uint *)((int)this + 8);
  if (-uVar6 - 1 < param_1) {
                    
    F_00c4579a("deque<T> too long");
  }
  uVar7 = uVar6 >> 1;
  if (uVar7 < 8) {
    uVar7 = 8;
  }
  if ((param_1 < uVar7) && (uVar6 <= -uVar7 - 1)) {
    param_1 = uVar7;
  }
  uVar7 = *(uint *)((int)this + 0xc);
  puVar3 = (undefined4 *)F_004296a0((uVar6 + param_1) * 4,0,0x137);
  iVar5 = *(int *)((int)this + 8);
  iVar2 = *(int *)((int)this + 4);
  puVar8 = puVar3 + uVar7;
  for (puVar4 = (undefined4 *)(iVar2 + uVar7 * 4); puVar4 != (undefined4 *)(iVar2 + iVar5 * 4);
      puVar4 = puVar4 + 1) {
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = *puVar4;
    }
    puVar8 = puVar8 + 1;
  }
  puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
  if (param_1 < uVar7) {
    puVar1 = puVar4 + param_1;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    iVar5 = *(int *)((int)this + 4);
    puVar8 = puVar3;
    for (puVar4 = (undefined4 *)(iVar5 + param_1 * 4); uVar6 = param_1,
        puVar4 != (undefined4 *)(iVar5 + uVar7 * 4); puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
  }
  else {
    puVar1 = puVar4 + uVar7;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (iVar5 = param_1 - uVar7; puVar4 = puVar3, iVar5 != 0; iVar5 = iVar5 + -1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
  }
  uVar6 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar9 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0x137);
    uVar6 = (uint)uVar9;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return uVar6;
}

/* ref: FUN_00acf060 */
unsigned int F_00acf060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xacf060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  int param_7 = (int)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  int param_10 = (int)gen_a9;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = param_4;
  if ((param_4 != param_7) && (param_7 != param_10)) {
    if ((param_8 == (int *)0x0) ||
       (((int *)*param_8 == (int *)0x0 ||
        (puVar1 = *(undefined4 * PTR32 *)*param_8, puVar1 == (undefined4 *)0x0)))) {
      uVar4 = 0;
    }
    else {
      uVar4 = *puVar1;
    }
    if (((param_5 == (int *)0x0) || ((int *)*param_5 == (int *)0x0)) ||
       (puVar1 = *(undefined4 * PTR32 *)*param_5, puVar1 == (undefined4 *)0x0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *puVar1;
    }
    if (((param_2 == (int *)0x0) || ((int *)*param_2 == (int *)0x0)) ||
       (puVar1 = *(undefined4 * PTR32 *)*param_2, puVar1 == (undefined4 *)0x0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *puVar1;
    }
    F_00aceca0(uVar2,param_4,uVar3,param_7,uVar4,param_10,0,0);
    iVar5 = param_4 + (param_10 - param_7);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar5;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*param_2;
  }
  return 0;
}

/* ref: FUN_00acf110 */
uint F_00acf110(unsigned int gen_a0)
{
  GEN_ENTER(0xacf110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x10d8290));
  puVar1 = (undefined4 *)((int)this + 4);
  *puVar1 = 0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0x137);
  *puVar1 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar1 = puVar1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)this;
}

/* ref: FUN_00acf160 */
uint F_00acf160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacf160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  uVar1 = *(int *)((int)this + 0x10) + 1;
  if (*(uint *)((int)this + 8) <= uVar1) {
    uVar1 = F_00aceef0(this,1);
  }
  iVar2 = *(int *)((int)this + 0xc);
  if (iVar2 == 0) {
    iVar2 = *(int *)((int)this + 8);
  }
  uVar3 = iVar2 - 1;
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4))) == 0) {
    uVar1 = F_004296a0(0x140,0,0x137);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4))) = uVar1;
  }
  puVar5 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4)));
  if (puVar5 != (undefined4 *)0x0) {
    puVar4 = param_1;
    for (iVar2 = 0x50; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
    *(uint *)((int)this + 0xc) = uVar3;
    return uVar3;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  *(uint *)((int)this + 0xc) = uVar3;
  return uVar1;
}

/* ref: FUN_00acf1f0 */
unsigned int F_00acf1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacf1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  if (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 1U) {
    F_00aceef0(this,1);
  }
  uVar3 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  if (*(uint *)((int)this + 8) <= uVar3) {
    uVar3 = uVar3 - *(uint *)((int)this + 8);
  }
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4))) == 0) {
    uVar1 = F_004296a0(0x140,0,0x137);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4))) = uVar1;
  }
  puVar5 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4)));
  if (puVar5 != (undefined4 *)0x0) {
    puVar4 = param_1;
    for (iVar2 = 0x50; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return 0;
}

/* ref: FUN_00acf260 */
uint F_00acf260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xacf260u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  int * piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar2 = param_4 - *(int *)((int)this + 0xc);
  (*(uint *)(gen_frame + 0x18)) = uVar2;
  if (*(uint *)((int)this + 0x10) >> 1 < uVar2) {
    F_00acf1f0(this,param_5);
    iVar5 = *(int *)((int)this + 0x10) + *(int *)((int)this + 0xc);
    uVar10 = *(undefined4 *)this;
    piVar4 = (int *)0x0;
    if ((*(int * PTR32 *)this != (int *)0x0) &&
       (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
      piVar4 = (int *)*puVar1;
    }
    iVar3 = *(int *)((int)this + 0x10) + *(int *)((int)this + 0xc) + -1;
    uVar9 = 0;
    if ((piVar4 != (int *)0x0) && ((undefined4 *)*piVar4 != (undefined4 *)0x0)) {
      uVar9 = *(undefined4 *)*piVar4;
    }
    piVar4 = (int *)0x0;
    if ((*(int * PTR32 *)this != (int *)0x0) &&
       (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
      piVar4 = (int *)*puVar1;
    }
    iVar6 = (*(uint *)(gen_frame + 0x18)) + *(int *)((int)this + 0xc);
    uVar8 = 0;
    if ((piVar4 != (int *)0x0) && ((undefined4 *)*piVar4 != (undefined4 *)0x0)) {
      uVar8 = *(undefined4 *)*piVar4;
    }
  }
  else {
    F_00acf160(this,param_5);
    piVar4 = (int *)0x0;
    if ((*(int * PTR32 *)this != (int *)0x0) &&
       (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
      piVar4 = (int *)*puVar1;
    }
    piVar7 = (int *)0x0;
    if ((piVar4 != (int *)0x0) && ((undefined4 *)*piVar4 != (undefined4 *)0x0)) {
      piVar7 = *(int * PTR32 *)*piVar4;
    }
    piVar4 = (int *)0x0;
    if ((piVar7 != (int *)0x0) && ((undefined4 *)*piVar7 != (undefined4 *)0x0)) {
      piVar4 = *(int * PTR32 *)*piVar7;
    }
    iVar5 = *(int *)((int)this + 0xc) + 1 + (*(uint *)(gen_frame + 0x18));
    uVar10 = 0;
    if ((piVar4 != (int *)0x0) && ((undefined4 *)*piVar4 != (undefined4 *)0x0)) {
      uVar10 = *(undefined4 *)*piVar4;
    }
    piVar4 = (int *)0x0;
    if ((*(int * PTR32 *)this != (int *)0x0) &&
       (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
      piVar4 = (int *)*puVar1;
    }
    iVar3 = *(int *)((int)this + 0xc) + 1;
    uVar9 = 0;
    if ((piVar4 != (int *)0x0) && ((undefined4 *)*piVar4 != (undefined4 *)0x0)) {
      uVar9 = *(undefined4 *)*piVar4;
    }
    iVar6 = *(int *)((int)this + 0xc);
    uVar8 = *(undefined4 *)this;
  }
  F_00acf060(((undefined1 *)(gen_frame + 0xc)),uVar8,0,iVar6,uVar9,0,iVar3,uVar10,0,iVar5);
  iVar5 = *(int *)((int)this + 0xc);
  piVar4 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar4 = (int *)*puVar1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = (*(uint *)(gen_frame + 0x18)) + iVar5;
  if ((piVar4 != (int *)0x0) && ((undefined4 *)*piVar4 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar4;
  }
  return (uint)param_1;
}

/* ref: FUN_00acf3f0 */
unsigned int F_00acf3f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacf3f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00acf1f0((undefined *)((int)this + 4),param_1);
  return 0;
}

/* ref: FUN_00acf400 */
uint F_00acf400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacf400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * this_00;
  int * piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 uVar8;
  
  uVar2 = *(uint *)((int)this + 0x10);
  this_00 = (int *)((int)this + 4);
  piVar1 = (int *)*this_00;
  uVar5 = *(int *)((int)this + 0x14) + uVar2;
  (*(char *)(gen_frame + 0x1b)) = '\x01';
  ((int * PTR32 *)(gen_frame + 0xc))[0] = piVar1;
  while( true ) {
    if (uVar2 == uVar5) {
      if (*(uint *)((int)this + 0xc) <= *(int *)((int)this + 0x14) + 1U) {
        F_00aceef0(this_00,1);
      }
      uVar5 = *(int *)((int)this + 0x10) + *(int *)((int)this + 0x14);
      uVar2 = *(uint *)((int)this + 0xc);
      if (uVar2 <= uVar5) {
        uVar5 = uVar5 - uVar2;
      }
      if (*((int *)GEN_TOP((*(int *)((int)this + 8) + uVar5 * 4))) == 0) {
        uVar2 = F_004296a0(0x140,0,0x137);
        *((uint *)GEN_TOP((*(int *)((int)this + 8) + uVar5 * 4))) = uVar2;
      }
      puVar7 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 8) + uVar5 * 4)));
      if (puVar7 != (undefined4 *)0x0) {
        puVar6 = param_1;
        for (iVar3 = 0x50; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
      }
      *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
      return uVar2;
    }
    if (piVar1 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
    uVar4 = uVar2;
    if (*(uint *)(iVar3 + 8) <= uVar2) {
      uVar4 = uVar2 - *(uint *)(iVar3 + 8);
    }
    if (*((char *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar4 * 4))) + 0xf4))) != '\0') break;
    if (piVar1 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
    uVar4 = uVar2;
    if (*(uint *)(iVar3 + 8) <= uVar2) {
      uVar4 = uVar2 - *(uint *)(iVar3 + 8);
    }
    if (*(char *)(param_1 + 0x4f) < *((char *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar4 * 4))) + 0x13c))))
    goto LAB_00acf508;
    uVar2 = uVar2 + 1;
    (*(char *)(gen_frame + 0x1b)) = '\0';
  }
  if ((*(char *)(gen_frame + 0x1b)) != '\0') {
    uVar2 = F_00acf160(this_00,param_1);
    return uVar2;
  }
  uVar2 = uVar2 - 1;
LAB_00acf508: ;
  uVar8 = 0;
  if ((piVar1 != (int *)0x0) && ((undefined4 *)*piVar1 != (undefined4 *)0x0)) {
    uVar8 = *(undefined4 *)*piVar1;
  }
  uVar2 = F_00acf260(this_00,((int * PTR32 *)(gen_frame + 0xc)),uVar8,0,uVar2,param_1);
  return uVar2;
}

/* ref: FUN_00acf570 */
byte F_00acf570(unsigned int gen_a0)
{
  GEN_ENTER(0xacf570u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_00acf5c0 */
uint F_00acf5c0(unsigned int gen_a0)
{
  GEN_ENTER(0xacf5c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0042b790((undefined *)((int)this + 0xcc));
  return (uint)(uVar1 != 0);
}

/* ref: FUN_00acf5e0 */
byte F_00acf5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacf5e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (1 < param_1) {
    return 1;
  }
  if (*(int *)((int)this + param_1 * 4 + 8) == 0) {
    return 0;
  }
  return *(int *)((int)this + param_1 * 4 + 0x18) == 1;
}

/* ref: FUN_00acf630 */
uint F_00acf630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xacf630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  char * pcVar1;
  uint uVar2;
  
  if (param_5 != 0) {
    pcVar1 = "https:";
    if ((char)param_6 == '\0') {
      pcVar1 = "http:";
    }
    uVar2 = F_00c472af(param_1,param_2,"%s//frontier.ffxiv.com/frontier-api/ffxivsupport/%s/%s?%s",
                       pcVar1,param_3,param_4,param_5);
    return uVar2;
  }
  pcVar1 = "https:";
  if ((char)param_6 == '\0') {
    pcVar1 = "http:";
  }
  uVar2 = F_00c472af(param_1,param_2,"%s//frontier.ffxiv.com/frontier-api/ffxivsupport/%s/%s",pcVar1
                     ,param_3,param_4);
  return uVar2;
}

/* ref: FUN_00acf6a0 */
uint F_00acf6a0(unsigned int gen_a0)
{
  GEN_ENTER(0xacf6a0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0042d540(param_1,"<?xml version=\"1.0\" encoding=\"UTF-8\"?>");
  return uVar1;
}

/* ref: FUN_00acf6c0 */
uint F_00acf6c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacf6c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x40,&REFG(undefined, 0x10ea85c),param_2);
  F_0042d540(param_1,((undefined1 *)(gen_frame + 0x8)));
  F_0042d540(param_1,param_3);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x40,"</%s>",param_2);
  uVar1 = F_0042d540(param_1,((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar1;
}

/* ref: FUN_00acf740 */
uint F_00acf740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacf740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x40,&REFG(undefined, 0x10ea86c),param_2);
  F_0042d540(param_1,((undefined1 *)(gen_frame + 0x8)));
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x40,&REFG(undefined, 0x10ea874),param_3);
  F_0042d540(param_1,((undefined1 *)(gen_frame + 0x8)));
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x40,"</%s>",param_2);
  uVar1 = F_0042d540(param_1,((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar1;
}

/* ref: FUN_00acf7d0 */
unsigned int F_00acf7d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacf7d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 200) = *(uint *)((int)this + 200) | 1 << ((byte)param_1 & 0x1f);
  if ((char)param_2 == '\0') {
    *(uint *)((int)this + 200) = 1 << ((byte)param_1 + 8 & 0x1f) | *(uint *)((int)this + 200);
  }
  return 0;
}

/* ref: FUN_00acf810 */
unsigned int F_00acf810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacf810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 < 2) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + param_1 * 4 + 8);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)((int)this + param_1 * 4 + 8) = 0;
    }
    if ((char)param_2 != '\0') {
      *(undefined4 *)((int)this + param_1 * 4 + 0x10) = 0;
      *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 0;
      F_0042aca0(param_1 * 0x54 + 0x20 + (int)this);
    }
  }
  return 0;
}

/* ref: FUN_00acf860 */
uint F_00acf860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacf860u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  int iVar4;
  byte * pbVar5;
  bool bVar6;
  
  uVar2 = F_00bc86e0(param_1,"return_code");
  if (uVar2 == 0) {
    return 0xffffffff;
  }
  F_0042e430(param_2,*(undefined4 *)(uVar2 + 4));
  pbVar3 = *(byte * PTR32 *)(uVar2 + 4);
  pbVar5 = &REFG(undefined1, 0x10ea88c);
  do {
    bVar1 = *pbVar3;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00acf8c0: ;
      iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00acf8c5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00acf8c0;
    pbVar3 = pbVar3 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00acf8c5: ;
  if (iVar4 == 0) {
    return 0;
  }
  uVar2 = F_00bc86e0(param_1,"return_status");
  if (uVar2 == 0) {
    return 0xffffffff;
  }
  F_0042e430((undefined *)((int)param_2 + 0x54),*(undefined4 *)(uVar2 + 4));
  return 1;
}

/* ref: FUN_00acf910 */
byte F_00acf910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacf910u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  byte * pbVar4;
  bool bVar5;
  
  uVar2 = F_00bc86e0(param_1,"return_code");
  if (uVar2 == 0) {
    return 0;
  }
  pbVar3 = *(byte * PTR32 *)(uVar2 + 4);
  pbVar4 = &REFG(undefined1, 0x10ea930);
  while( true ) {
    bVar1 = *pbVar3;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) break;
    if (bVar1 == 0) {
      return 1;
    }
    bVar1 = pbVar3[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) break;
    pbVar3 = pbVar3 + 2;
    pbVar4 = pbVar4 + 2;
    if (bVar1 == 0) {
      return 1;
    }
  }
  return 1 - bVar5 == (uint)(bVar5 != 0);
}

/* ref: FUN_00acf980 */
byte F_00acf980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xacf980u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  undefined4 * puVar2;
  uint uVar3;
  byte * pbVar4;
  int iVar5;
  byte * pbVar6;
  bool bVar7;
  
  uVar3 = F_00bc86e0(param_1,"inquiry_template");
  if (uVar3 == 0) {
    return 0;
  }
  do {
    for (puVar2 = *(undefined4 * PTR32 *)(uVar3 + 8); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)puVar2[3]) {
      pbVar4 = (byte *)*puVar2;
      pbVar6 = &REFG(undefined1, 0x10eab5c);
      do {
        bVar1 = *pbVar4;
        bVar7 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_00acf9d7: ;
          iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_00acf9dc;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar7 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00acf9d7;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_00acf9dc: ;
      if (iVar5 == 0) {
        F_0042e430((undefined *)(param_2 + 0xa8),puVar2[1]);
      }
    }
    uVar3 = *(uint *)(uVar3 + 0xc);
    if (uVar3 == 0) {
      return 1;
    }
  } while( true );
}

/* ref: FUN_00acfa30 */
uint F_00acfa30(unsigned int gen_a0)
{
  GEN_ENTER(0xacfa30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  __time64_t _Var2;
  
  _Var2 = F_00c4b7c2((__time64_t *)0x0);
  uVar1 = F_0042d000(param_1,&REFG(undefined, 0x10eab80),(int)_Var2,(int)((ulonglong)_Var2 >> 0x20));
  return uVar1;
}

/* ref: FUN_00acfa60 */
uint F_00acfa60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xacfa60u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_00c4f4ca(((byte *)(gen_frame + 0x4)),&(*(undefined4 *)&gen_args[1]));
  *((byte *)GEN_TOP(((int)(*(short * PTR32 *)&gen_args[0]) + 3))) = ((byte *)(gen_frame + 0x4))[0xc];
  *((byte *)GEN_TOP(((*(short * PTR32 *)&gen_args[0]) + 1))) = ((byte *)(gen_frame + 0x4))[0x10] + 1;
  *((byte *)GEN_TOP(((*(short * PTR32 *)&gen_args[0]) + 3))) = ((byte *)(gen_frame + 0x4))[0];
  *(*(short * PTR32 *)&gen_args[0]) = (*(undefined2 *)((char *)((byte *)(gen_frame + 0x4)) + 20)) + 0x76c;
  *((byte *)GEN_TOP(((*(short * PTR32 *)&gen_args[0]) + 2))) = ((byte *)(gen_frame + 0x4))[8];
  *((byte *)GEN_TOP(((int)(*(short * PTR32 *)&gen_args[0]) + 5))) = ((byte *)(gen_frame + 0x4))[4];
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)((byte *)(gen_frame + 0x4))[4];
}

/* ref: FUN_00acfad0 */
uint F_00acfad0(unsigned int gen_a0)
{
  GEN_ENTER(0xacfad0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * in_ecx_00;
  
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10eab8c));
  in_ecx_00 = in_ecx + 8;
  iVar1 = 1;
  do {
    F_0042b630(in_ecx_00);
    in_ecx_00 = in_ecx_00 + 0x15;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_0042b630(in_ecx + 0x33);
  F_0042b630(in_ecx + 0x48);
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  F_0042aca0(in_ecx + 0x33);
  F_0042aca0(in_ecx + 0x48);
  in_ecx[0x5d] = 0;
  in_ecx[0x5e] = 0;
  in_ecx[0x32] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00acfb50 */
byte F_00acfb50(unsigned int gen_a0)
{
  GEN_ENTER(0xacfb50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  uVar4 = 0;
  piVar3 = (int *)((int)this + 8);
  do {
    if (*piVar3 != 0) {
      uVar2 = ((code *)*(gen_code32 *)(*(int *)*piVar3 + 0xc))((int *)*piVar3);
      if ((char)uVar2 != '\0') {
        piVar3 = *(int * PTR32 *)((int)this + uVar4 * 4 + 8);
        ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3);
        return 0;
      }
    }
    uVar4 = uVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (uVar4 < 2);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 8);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  F_0042aca0((int)this + 0x20);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  F_0042aca0((int)this + 0x74);
  piVar3 = *(int * PTR32 *)((int)this + 4);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined4 *)((int)this + 200) = 0;
  F_0042aca0((int)this + 0xcc);
  F_0042aca0((int)this + 0x120);
  return 1;
}

/* ref: FUN_00acfc20 */
byte F_00acfc20(unsigned int gen_a0)
{
  GEN_ENTER(0xacfc20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  undefined * this_00;
  byte * pbVar5;
  int iVar6;
  byte * pbVar7;
  uint uVar8;
  int * piVar9;
  bool bVar10;
  undefined * local_c;
  
  if (*(int *)((int)this + 4) == 0) {
    return 0;
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0xc))))(*(int * PTR32 *)((int)this + 4));
  uVar8 = 0;
  piVar9 = (int *)((int)this + 8);
  local_c = (undefined *)((int)this + 0x20);
  do {
    piVar2 = (int *)*piVar9;
    if ((piVar2 == (int *)0x0) || (uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2), (char)uVar4 == '\0'))
    goto switchD_00acfc7f_default;
    uVar4 = ((code *)*(gen_code32 *)(*(int *)*piVar9 + 0x10))((int *)*piVar9);
    switch((unsigned int)(uintptr_t)(uVar4)) {
    case 0: ;
      uVar4 = ((code *)*(gen_code32 *)(*(int *)*piVar9 + 0x18))((int *)*piVar9);
      if (uVar4 / 100 != 2) goto switchD_00acfc7f_caseD_1;
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*piVar9 + 0x14))((int *)*piVar9)));
      uVar4 = F_00bc86e0(this_00,"return_code");
      if (uVar4 == 0) {
        piVar9[4] = 4;
      }
      else {
        pbVar5 = *(byte * PTR32 *)(uVar4 + 4);
        pbVar7 = &REFG(undefined1, 0x10ea39c);
        do {
          bVar1 = *pbVar5;
          bVar10 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_00acfcf0: ;
            iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_00acfcf5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar10 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_00acfcf0;
          pbVar5 = pbVar5 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_00acfcf5: ;
        if (iVar6 == 0) {
          piVar9[4] = 2;
        }
        else {
          piVar9[4] = 3;
          uVar4 = F_00bc86e0(this_00,"return_status");
          F_0042e430(local_c,*(undefined4 *)(uVar4 + 4));
        }
      }
      if (piVar9[2] == 1) {
        uVar4 = F_00bc86e0(this_00,"sessionKey");
        if (uVar4 != 0) {
          F_0042e430((undefined *)((int)this + 0xcc),*(undefined4 *)(uVar4 + 4));
        }
        uVar4 = F_00bc86e0(this_00,"lastaccess");
        if (uVar4 != 0) {
          F_0042e430((undefined *)((int)this + 0x120),*(undefined4 *)(uVar4 + 4));
        }
      }
      if (piVar9[2] == 2) {
        F_00acf910(this_00,0);
        F_00acf810(this,uVar8,1);
      }
      goto switchD_00acfc7f_default;
    case 1: ;
    case 2: ;
switchD_00acfc7f_caseD_1: ;
      piVar9[4] = 4;
      break;
    case 3: ;
      piVar9[4] = 5;
      break;
    case 4: ;
      piVar9[4] = 6;
      break;
    default: ;
      goto switchD_00acfc7f_default;
    }
    if (((int)uVar8 < 2) && (puVar3 = (undefined4 *)*piVar9, puVar3 != (undefined4 *)0x0)) {
      ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
      *piVar9 = 0;
    }
switchD_00acfc7f_default: ;
    local_c = (undefined *)((int)local_c + 0x54);
    uVar8 = uVar8 + 1;
    piVar9 = piVar9 + 1;
    if (1 < uVar8) {
      return 1;
    }
  } while( true );
}

/* ref: FUN_00acfdf0 */
uint F_00acfdf0(unsigned int gen_a0)
{
  GEN_ENTER(0xacfdf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  uint uVar2;
  char * pcVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (REFG(int, 0x137104c) == 0) {
    uVar2 = F_00c49908((int)this + 0x174,8,"en-us");
    return uVar2;
  }
  cVar1 = *(char *)(REFG(int, 0x137104c) + 0x1d);
  uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),4);
  F_004142d0(&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)(uVar2 + 0x14));
  switch((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8)))) {
  case (undefined *)0x0: ;
    pcVar3 = "ja";
    break;
  case (undefined *)0x1: ;
    if (cVar1 != '\x03') {
      uVar2 = F_00c49908((int)this + 0x174,8,"en-us");
      return uVar2;
    }
    uVar2 = F_00c49908((int)this + 0x174,8,"en-gb");
    return uVar2;
  case (undefined *)0x2: ;
    pcVar3 = "de";
    break;
  case (undefined *)0x3: ;
    pcVar3 = "fr";
    break;
  case (undefined *)0x4: ;
  case (undefined *)0x5: ;
    pcVar3 = "ch";
    break;
  default: ;
    pcVar3 = "en-us";
  }
  uVar2 = F_00c49908((int)this + 0x174,8,pcVar3);
  return uVar2;
}

/* ref: FUN_00acfed0 */
uint F_00acfed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xacfed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  undefined4 * puVar1;
  uint uVar2;
  undefined * PTR32 * ppuVar3;
  
  (*(uint *)(gen_frame + 0x118)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c);
  if (*(int *)((int)this + 4) == 0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c) ^ (uint)(uint)(gen_frame + 0x11c));
    return param_3 & 0xffffff00;
  }
  uVar2 = param_2 - 1;
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 0: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea658);
    break;
  case 1: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea674);
    break;
  case 2: ;
    F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x10,"lang=%s",(int)this + 0x174);
    ppuVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10ea694));
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x100,"%s//frontier.ffxiv.com/frontier-api/ffxivsupport/%s/%s?%s","http:",
               &REFG(undefined, 0x10ea6a4),"get_init",((undefined1 *)(gen_frame + 0x108)));
    goto LAB_00ad00b5;
  case 3: ;
    F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x10,"lang=%s",(int)this + 0x174);
    ppuVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10ea6b4));
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x100,"%s//frontier.ffxiv.com/frontier-api/ffxivsupport/%s/%s?%s","http:",
               "information","get_headline_all",((undefined1 *)(gen_frame + 0x108)));
    goto LAB_00ad00b5;
  case 4: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea6d8);
    break;
  case 5: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea6f8);
    break;
  case 6: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea710);
    break;
  case 7: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea728);
    break;
  case 8: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea748);
    break;
  case 9: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea764);
    break;
  case 10: ;
    ppuVar3 = (undefined * PTR32 *)&REFG(undefined, 0x10ea784);
    break;
  default: ;
    goto switchD_00acff24_default;
  }
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x100,"%s//frontier.ffxiv.com/frontier-api/ffxivsupport/%s/%s","https:");
LAB_00ad00b5: ;
  puVar1 = *(undefined4 * PTR32 *)((int)this + param_1 * 4 + 8);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(uint *)((int)this + 200) =
         *(uint *)((int)this + 200) &
         ~(1 << ((byte)param_1 + 8 & 0x1f)) & ~(1 << ((byte)param_1 & 0x1f));
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x10))))
                    (*(int * PTR32 *)((int)this + 4),((undefined1 *)(gen_frame + 0x8)),ppuVar3,param_3,param_4);
  if (uVar2 != 0) {
    *(uint *)((int)this + param_1 * 4 + 0x10) = param_2;
    *(uint *)((int)this + param_1 * 4 + 8) = uVar2;
    *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 1;
    F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  *(undefined4 *)((int)this + param_1 * 4 + 8) = 0;
  *(uint *)((int)this + param_1 * 4 + 0x10) = param_2;
  *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 4;
  uVar2 = param_2;
switchD_00acff24_default: ;
  F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
  return uVar2 & 0xffffff00;
}

/* ref: FUN_00ad0190 */
uint F_00ad0190(unsigned int gen_a0)
{
  GEN_ENTER(0xad0190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * this_00;
  int iVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10eab8c));
  bVar1 = F_00acfb50(this);
  while (bVar1 == 0) {
    F_00acfc20(this);
    bVar1 = F_00acfb50(this);
  }
  F_0042c880((undefined *)((int)this + 0x120));
  F_0042c880((undefined *)((int)this + 0xcc));
  this_00 = (undefined *)((int)this + 200);
  iVar2 = 1;
  do {
    this_00 = (undefined *)((int)this_00 + -0x54);
    uVar3 = F_0042c880(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return (uint)uVar3;
}

/* ref: FUN_00ad01f0 */
byte F_00ad01f0(unsigned int gen_a0)
{
  GEN_ENTER(0xad01f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 4) != 0) {
    return 1;
  }
  F_00acfdf0(this);
  F_0042aca0((int)this + 0xcc);
  F_0042aca0((int)this + 0x120);
  piVar1 = (int *)F_00bc89d0();
  *(int * PTR32 *)((int)this + 4) = piVar1;
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  return (byte)uVar2;
}

/* ref: FUN_00ad0240 */
uint F_00ad0240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad0240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c);
  (*(uint *)(gen_frame + 0x118)) = uVar2;
  if ((param_1 < 2) &&
     ((*(int *)((int)this + param_1 * 4 + 8) == 0 ||
      (bVar4 = *(int *)((int)this + param_1 * 4 + 0x18) == 1,
      uVar2 = CONCAT31((int3)(uVar2 >> 8),bVar4), !bVar4)))) {
    F_0042e1e0(((undefined1 *)(gen_frame + 0xc4)),0x100);
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = (undefined *)0x0;
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = (undefined *)0x0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    if ((REFG(int, 0x137104c) != 0) && (*(int *)(REFG(int, 0x137104c) + 0x25f4) != 0)) {
      bVar1 = F_0049bd60(&(*(undefined4 *)(gen_frame + 0x4)));
      if ((bVar1 != 0) && ((*(undefined * PTR32 *)(gen_frame + 0xc)) != (undefined *)0x0)) {
        uVar2 = F_0042b790((*(undefined * PTR32 *)(gen_frame + 0xc)));
        if ((uVar2 != 0) && ((*(undefined * PTR32 *)(gen_frame + 0x10)) != (undefined *)0x0)) {
          uVar2 = F_0042b790((*(undefined * PTR32 *)(gen_frame + 0x10)));
          if (uVar2 != 0) {
            F_0042b630(((undefined1 *)(gen_frame + 0x1c)));
            F_0042b630(((undefined1 *)(gen_frame + 0x70)));
            F_0042d000(((undefined1 *)(gen_frame + 0x1c)),&REFG(undefined, 0x10ea3c8),(*(undefined4 *)(gen_frame + 0x14)));
            F_0042d000(((undefined1 *)(gen_frame + 0x70)),&REFG(undefined, 0x10ea3cc),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
            F_0042d540(((undefined1 *)(gen_frame + 0xc4)),"<?xml version=\"1.0\" encoding=\"UTF-8\"?>");
            F_0042d540(((undefined1 *)(gen_frame + 0xc4)),"<params>");
            uVar2 = F_0042a990((*(undefined * PTR32 *)(gen_frame + 0xc)));
            F_00acf6c0(((undefined1 *)(gen_frame + 0xc4)),"gamesession",uVar2);
            uVar2 = F_0042a990((*(undefined * PTR32 *)(gen_frame + 0x10)));
            F_00acf6c0(((undefined1 *)(gen_frame + 0xc4)),"world",uVar2);
            uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x70)));
            F_00acf6c0(((undefined1 *)(gen_frame + 0xc4)),"characterid",uVar2);
            uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x1c)));
            F_00acf6c0(((undefined1 *)(gen_frame + 0xc4)),"sessionid",uVar2);
            F_0042d540(((undefined1 *)(gen_frame + 0xc4)),"</params>");
            F_0042c880(((undefined1 *)(gen_frame + 0x70)));
            F_0042c880(((undefined1 *)(gen_frame + 0x1c)));
            uVar2 = F_0042a970(((undefined1 *)(gen_frame + 0xc4)));
            uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0xc4)));
            uVar2 = F_00acfed0(this,param_1,1,uVar3,uVar2);
            uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0xc4)));
            F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
            return CONCAT31((int3)(uVar5 >> 8),(char)uVar2);
          }
        }
      }
    }
    uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0xc4)));
    uVar2 = (uint)uVar5;
  }
  F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
  return uVar2 & 0xffffff00;
}

/* ref: FUN_00ad0470 */
uint F_00ad0470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad0470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  uint uVar2;
  bool bVar3;
  ulonglong uVar4;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar1 = param_1;
  if (((int)param_1 < 2) &&
     ((*(int *)((int)this + param_1 * 4 + 8) == 0 ||
      (bVar3 = *(int *)((int)this + param_1 * 4 + 0x18) == 1,
      uVar1 = CONCAT31((int3)(param_1 >> 8),bVar3), !bVar3)))) {
    uVar1 = F_0042b790((undefined *)((int)this + 0xcc));
    if (uVar1 == 0) {
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
      return 0;
    }
    F_0042e1e0(((undefined1 *)(gen_frame + 0x4)),0x40);
    F_0042d540(((undefined1 *)(gen_frame + 0x4)),"<?xml version=\"1.0\" encoding=\"UTF-8\"?>");
    F_0042d540(((undefined1 *)(gen_frame + 0x4)),"<params>");
    uVar1 = F_0042a990((int)this + 0xcc);
    F_00acf6c0(((undefined1 *)(gen_frame + 0x4)),"sessionKey",uVar1);
    uVar1 = F_0042a990((int)this + 0x120);
    F_00acf6c0(((undefined1 *)(gen_frame + 0x4)),"lastaccess",uVar1);
    F_0042d540(((undefined1 *)(gen_frame + 0x4)),"</params>");
    F_0042aca0((int)this + 0xcc);
    F_0042aca0((int)this + 0x120);
    uVar1 = F_0042a970(((undefined1 *)(gen_frame + 0x4)));
    uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
    uVar1 = F_00acfed0(this,param_1,2,uVar2,uVar1);
    uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return CONCAT31((int3)(uVar4 >> 8),(char)uVar1);
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1 & 0xffffff00;
}

/* ref: FUN_00ad05a0 */
uint F_00ad05a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad05a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (((int)param_1 < 2) &&
     ((*(int *)((int)this + param_1 * 4 + 8) == 0 || (*(int *)((int)this + param_1 * 4 + 0x18) != 1)
      ))) {
    uVar1 = F_00acfed0(this,param_1,3,0,0);
    return uVar1;
  }
  return param_1 & 0xffffff00;
}

/* ref: FUN_00ad05e0 */
uint F_00ad05e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad05e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  uint uVar1;
  uint uVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  (*(uint *)(gen_frame + 0x98)) = uVar1;
  uVar2 = uVar1;
  if ((param_1 < 2) &&
     ((*(int *)((int)this + param_1 * 4 + 8) == 0 ||
      (bVar3 = *(int *)((int)this + param_1 * 4 + 0x18) == 1,
      uVar2 = CONCAT31((int3)(uVar1 >> 8),bVar3), !bVar3)))) {
    F_0042e1e0(((undefined1 *)(gen_frame + 0x4)),0x40);
    F_0042d540(((undefined1 *)(gen_frame + 0x4)),"<?xml version=\"1.0\" encoding=\"UTF-8\"?>");
    F_0042d540(((undefined1 *)(gen_frame + 0x4)),"<params>");
    F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x40,&REFG(undefined, 0x10ea85c),&REFG(undefined, 0x10ea454));
    F_0042d540(((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x58)));
    F_0042d540(((undefined1 *)(gen_frame + 0x4)),(int)this + 0x174);
    F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x40,"</%s>",&REFG(undefined, 0x10ea454));
    F_0042d540(((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x58)));
    F_0042d540(((undefined1 *)(gen_frame + 0x4)),"</params>");
    uVar2 = F_00acfed0(this,param_1,4,0,0);
    uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
    return CONCAT31((int3)(uVar4 >> 8),(char)uVar2);
  }
  F_00c47745(uVar1 ^ (uint)(uint)(gen_frame + 0x9c));
  return uVar2 & 0xffffff00;
}

/* ref: FUN_00ad0700 */
uint F_00ad0700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad0700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x1a0];
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  bool bVar6;
  ulonglong uVar7;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x19c);
  (*(uint *)(gen_frame + 0x198)) = uVar3;
  uVar4 = uVar3;
  if ((1 < param_1) ||
     ((iVar1 = *(int *)((int)this + param_1 * 4 + 8), iVar1 != 0 &&
      (bVar6 = *(int *)((int)this + param_1 * 4 + 0x18) == 1,
      uVar4 = CONCAT31((int3)((uint)iVar1 >> 8),bVar6), bVar6)))) {
    F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x19c));
    return uVar4 & 0xffffff00;
  }
  F_0042e1e0(((undefined1 *)(gen_frame + 0x4)),0x400);
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),"<?xml version=\"1.0\" encoding=\"UTF-8\"?>");
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),"<params>");
  F_00c472af(((undefined1 *)(gen_frame + 0x158)),0x40,&REFG(undefined, 0x10ea85c),&REFG(undefined, 0x10ea474));
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x158)));
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),(int)this + 0x174);
  F_00c472af(((undefined1 *)(gen_frame + 0x158)),0x40,"</%s>",&REFG(undefined, 0x10ea474));
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x158)));
  uVar4 = F_0042a990(param_2);
  F_00c472af(((undefined1 *)(gen_frame + 0x158)),0x40,&REFG(undefined, 0x10ea85c),"queryString");
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x158)));
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),uVar4);
  F_00c472af(((undefined1 *)(gen_frame + 0x158)),0x40,"</%s>","queryString");
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x158)));
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),"</params>");
  uVar4 = F_0042a970(((undefined1 *)(gen_frame + 0x4)));
  uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
  if (*(int *)((int)this + 4) != 0) {
    F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x100,"%s//frontier.ffxiv.com/frontier-api/ffxivsupport/%s/%s","https:",
               (*(undefined * PTR32 (*)[1])REFP(0x10ea70c)),"get_list");
    puVar2 = *(undefined4 * PTR32 *)((int)this + param_1 * 4 + 8);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(uint *)((int)this + 200) =
           *(uint *)((int)this + 200) &
           ~(1 << ((byte)param_1 + 8 & 0x1f)) & ~(1 << ((byte)param_1 & 0x1f));
    }
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x10))))
                      (*(int * PTR32 *)((int)this + 4),((undefined1 *)(gen_frame + 0x58)),&REFG(undefined, 0x10ea6f8),uVar3,uVar4);
    *(undefined4 *)((int)this + param_1 * 4 + 0x10) = 6;
    if (uVar4 != 0) {
      *(uint *)((int)this + param_1 * 4 + 8) = uVar4;
      *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 1;
      uVar5 = 1;
      goto LAB_00ad0916;
    }
    *(undefined4 *)((int)this + param_1 * 4 + 8) = 0;
    *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 4;
  }
  uVar5 = 0;
LAB_00ad0916: ;
  uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x198)) ^ (uint)(uint)(gen_frame + 0x19c));
  return CONCAT31((int3)(uVar7 >> 8),uVar5);
}

/* ref: FUN_00ad0940 */
uint F_00ad0940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad0940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x1a0];
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  bool bVar6;
  ulonglong uVar7;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x19c);
  (*(uint *)(gen_frame + 0x198)) = uVar3;
  uVar4 = uVar3;
  if ((1 < param_1) ||
     ((iVar1 = *(int *)((int)this + param_1 * 4 + 8), iVar1 != 0 &&
      (bVar6 = *(int *)((int)this + param_1 * 4 + 0x18) == 1,
      uVar4 = CONCAT31((int3)((uint)iVar1 >> 8),bVar6), bVar6)))) {
    F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x19c));
    return uVar4 & 0xffffff00;
  }
  F_0042e1e0(((undefined1 *)(gen_frame + 0x4)),0x40);
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),"<?xml version=\"1.0\" encoding=\"UTF-8\"?>");
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),"<params>");
  F_00c472af(((undefined1 *)(gen_frame + 0x158)),0x40,&REFG(undefined, 0x10ea85c),&REFG(undefined, 0x10ea4a0));
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x158)));
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),(int)this + 0x174);
  F_00c472af(((undefined1 *)(gen_frame + 0x158)),0x40,"</%s>",&REFG(undefined, 0x10ea4a0));
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x158)));
  F_00acf740(((undefined1 *)(gen_frame + 0x4)),(*(undefined * PTR32 (*)[1])REFP(0x10ea4a8)),param_2);
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),"</params>");
  uVar4 = F_0042a970(((undefined1 *)(gen_frame + 0x4)));
  uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
  if (*(int *)((int)this + 4) != 0) {
    F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x100,"%s//frontier.ffxiv.com/frontier-api/ffxivsupport/%s/%s","https:",
               (*(undefined * PTR32 (*)[1])REFP(0x10ea724)),"get_item");
    puVar2 = *(undefined4 * PTR32 *)((int)this + param_1 * 4 + 8);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(uint *)((int)this + 200) =
           *(uint *)((int)this + 200) &
           ~(1 << ((byte)param_1 + 8 & 0x1f)) & ~(1 << ((byte)param_1 & 0x1f));
    }
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x10))))
                      (*(int * PTR32 *)((int)this + 4),((undefined1 *)(gen_frame + 0x58)),&REFG(undefined, 0x10ea710),uVar3,uVar4);
    *(undefined4 *)((int)this + param_1 * 4 + 0x10) = 7;
    if (uVar4 != 0) {
      *(uint *)((int)this + param_1 * 4 + 8) = uVar4;
      *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 1;
      uVar5 = 1;
      goto LAB_00ad0b03;
    }
    *(undefined4 *)((int)this + param_1 * 4 + 8) = 0;
    *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 4;
  }
  uVar5 = 0;
LAB_00ad0b03: ;
  uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x198)) ^ (uint)(uint)(gen_frame + 0x19c));
  return CONCAT31((int3)(uVar7 >> 8),uVar5);
}

/* ref: FUN_00ad0b30 */
uint F_00ad0b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad0b30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x160];
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  bool bVar6;
  ulonglong uVar7;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x15c);
  (*(uint *)(gen_frame + 0x158)) = uVar3;
  uVar4 = uVar3;
  if ((1 < param_1) ||
     ((iVar1 = *(int *)((int)this + param_1 * 4 + 8), iVar1 != 0 &&
      (bVar6 = *(int *)((int)this + param_1 * 4 + 0x18) == 1,
      uVar4 = CONCAT31((int3)((uint)iVar1 >> 8),bVar6), bVar6)))) {
    F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x15c));
    return uVar4 & 0xffffff00;
  }
  uVar4 = F_0042b790((undefined *)((int)this + 0xcc));
  if (uVar4 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0x158)) ^ (uint)(uint)(gen_frame + 0x15c));
    return 0;
  }
  F_0042e1e0(((undefined1 *)(gen_frame + 0x4)),0x100);
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),"<?xml version=\"1.0\" encoding=\"UTF-8\"?>");
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),"<params>");
  uVar4 = F_0042a990((int)this + 0xcc);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x4)),"sessionKey",uVar4);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x10ea4d0),(int)this + 0x174);
  F_00acf740(((undefined1 *)(gen_frame + 0x4)),"mainCategoryId",param_2);
  F_00acf740(((undefined1 *)(gen_frame + 0x4)),"subCategoryId",param_3);
  F_0042d540(((undefined1 *)(gen_frame + 0x4)),"</params>");
  uVar4 = F_0042a970(((undefined1 *)(gen_frame + 0x4)));
  uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
  if (*(int *)((int)this + 4) != 0) {
    F_00c472af(((undefined1 *)(gen_frame + 0x58)),0x100,"%s//frontier.ffxiv.com/frontier-api/ffxivsupport/%s/%s","https:",
               "inquiry","get_template");
    puVar2 = *(undefined4 * PTR32 *)((int)this + param_1 * 4 + 8);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(uint *)((int)this + 200) =
           *(uint *)((int)this + 200) &
           ~(1 << ((byte)param_1 + 8 & 0x1f)) & ~(1 << ((byte)param_1 & 0x1f));
    }
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x10))))
                      (*(int * PTR32 *)((int)this + 4),((undefined1 *)(gen_frame + 0x58)),&REFG(undefined, 0x10ea728),uVar3,uVar4);
    *(undefined4 *)((int)this + param_1 * 4 + 0x10) = 8;
    if (uVar4 != 0) {
      *(uint *)((int)this + param_1 * 4 + 8) = uVar4;
      *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 1;
      uVar5 = 1;
      goto LAB_00ad0d0a;
    }
    *(undefined4 *)((int)this + param_1 * 4 + 8) = 0;
    *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 4;
  }
  uVar5 = 0;
LAB_00ad0d0a: ;
  uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x158)) ^ (uint)(uint)(gen_frame + 0x15c));
  return CONCAT31((int3)(uVar7 >> 8),uVar5);
}

/* ref: FUN_00ad0d30 */
uint F_00ad0d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad0d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x1b0];
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  bool bVar6;
  __time64_t _Var7;
  ulonglong uVar8;
  
  (*(uint *)(gen_frame + 0x1a8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1ac);
  uVar4 = param_3;
  if ((1 < param_1) ||
     ((iVar1 = *(int *)((int)this + param_1 * 4 + 8), iVar1 != 0 &&
      (bVar6 = *(int *)((int)this + param_1 * 4 + 0x18) == 1,
      uVar4 = CONCAT31((int3)((uint)iVar1 >> 8),bVar6), bVar6)))) {
LAB_00ad0d70: ;
    F_00c47745((*(uint *)(gen_frame + 0x1a8)) ^ (uint)(uint)(gen_frame + 0x1ac));
    return uVar4 & 0xffffff00;
  }
  uVar3 = F_0042b790((undefined *)((int)this + 0xcc));
  uVar4 = 0;
  if (uVar3 == 0) goto LAB_00ad0d70;
  F_0042b630(((undefined1 *)(gen_frame + 0x0)));
  _Var7 = F_00c4b7c2((__time64_t *)0x0);
  F_0042d000(((undefined1 *)(gen_frame + 0x0)),&REFG(undefined, 0x10eab80),(int)_Var7,(int)((ulonglong)_Var7 >> 0x20));
  F_0042e1e0(((undefined1 *)(gen_frame + 0x54)),0x400);
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"<?xml version=\"1.0\" encoding=\"UTF-8\"?>");
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"<params>");
  uVar4 = F_0042a990((int)this + 0xcc);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),"sessionKey",uVar4);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),&REFG(undefined, 0x10ea51c),(int)this + 0x174);
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"<item>");
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"<head>");
  F_00acf740(((undefined1 *)(gen_frame + 0x54)),"ticketId",*param_2);
  uVar4 = F_0042a990(param_2 + 1);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),"summary",uVar4);
  F_00acf740(((undefined1 *)(gen_frame + 0x54)),"mainCategoryId",param_2[0x16]);
  F_00acf740(((undefined1 *)(gen_frame + 0x54)),"subCategoryId",param_2[0x17]);
  F_00acf740(((undefined1 *)(gen_frame + 0x54)),"status",param_2[0x18]);
  uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x0)));
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),"dateTime",uVar4);
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"</head>");
  uVar4 = F_0042a990(param_3);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),&REFG(undefined, 0x10ea584),uVar4);
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"</item>");
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"</params>");
  uVar4 = F_0042a970(((undefined1 *)(gen_frame + 0x54)));
  uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x54)));
  if (*(int *)((int)this + 4) != 0) {
    F_00c472af(((undefined1 *)(gen_frame + 0xa8)),0x100,"%s//frontier.ffxiv.com/frontier-api/ffxivsupport/%s/%s","https:",
               "inquiry","post_item");
    puVar2 = *(undefined4 * PTR32 *)((int)this + param_1 * 4 + 8);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(uint *)((int)this + 200) =
           *(uint *)((int)this + 200) &
           ~(1 << ((byte)param_1 + 8 & 0x1f)) & ~(1 << ((byte)param_1 & 0x1f));
    }
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x10))))
                      (*(int * PTR32 *)((int)this + 4),((undefined1 *)(gen_frame + 0xa8)),&REFG(undefined, 0x10ea748),uVar3,uVar4);
    *(undefined4 *)((int)this + param_1 * 4 + 0x10) = 9;
    if (uVar4 != 0) {
      *(uint *)((int)this + param_1 * 4 + 8) = uVar4;
      *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 1;
      uVar5 = 1;
      goto LAB_00ad0ff1;
    }
    *(undefined4 *)((int)this + param_1 * 4 + 8) = 0;
    *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 4;
  }
  uVar5 = 0;
LAB_00ad0ff1: ;
  F_0042c880(((undefined1 *)(gen_frame + 0x54)));
  uVar8 = F_0042c880(((undefined1 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x1a8)) ^ (uint)(uint)(gen_frame + 0x1ac));
  return CONCAT31((int3)(uVar8 >> 8),uVar5);
}

/* ref: FUN_00ad1020 */
uint F_00ad1020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad1020u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x1b0];
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  bool bVar6;
  __time64_t _Var7;
  ulonglong uVar8;
  
  (*(uint *)(gen_frame + 0x1a8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1ac);
  uVar4 = param_3;
  if ((1 < param_1) ||
     ((iVar1 = *(int *)((int)this + param_1 * 4 + 8), iVar1 != 0 &&
      (bVar6 = *(int *)((int)this + param_1 * 4 + 0x18) == 1,
      uVar4 = CONCAT31((int3)((uint)iVar1 >> 8),bVar6), bVar6)))) {
LAB_00ad1060: ;
    F_00c47745((*(uint *)(gen_frame + 0x1a8)) ^ (uint)(uint)(gen_frame + 0x1ac));
    return uVar4 & 0xffffff00;
  }
  uVar3 = F_0042b790((undefined *)((int)this + 0xcc));
  uVar4 = 0;
  if (uVar3 == 0) goto LAB_00ad1060;
  F_0042b630(((undefined1 *)(gen_frame + 0x0)));
  _Var7 = F_00c4b7c2((__time64_t *)0x0);
  F_0042d000(((undefined1 *)(gen_frame + 0x0)),&REFG(undefined, 0x10eab80),(int)_Var7,(int)((ulonglong)_Var7 >> 0x20));
  F_0042e1e0(((undefined1 *)(gen_frame + 0x54)),0x400);
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"<?xml version=\"1.0\" encoding=\"UTF-8\"?>");
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"<params>");
  uVar4 = F_0042a990((int)this + 0xcc);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),"sessionKey",uVar4);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),&REFG(undefined, 0x10ea5b8),(int)this + 0x174);
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"<item>");
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"<head>");
  uVar4 = F_0042a990(param_2);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),"summary",uVar4);
  F_00acf740(((undefined1 *)(gen_frame + 0x54)),"mainCategoryId",*(undefined4 *)(param_2 + 0x54));
  F_00acf740(((undefined1 *)(gen_frame + 0x54)),"subCategoryId",*(undefined4 *)(param_2 + 0x58));
  uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x0)));
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),"dateTime",uVar4);
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"</head>");
  uVar4 = F_0042a990(param_3);
  F_00acf6c0(((undefined1 *)(gen_frame + 0x54)),&REFG(undefined, 0x10ea60c),uVar4);
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"</item>");
  F_0042d540(((undefined1 *)(gen_frame + 0x54)),"</params>");
  uVar4 = F_0042a970(((undefined1 *)(gen_frame + 0x54)));
  uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x54)));
  if (*(int *)((int)this + 4) != 0) {
    F_00c472af(((undefined1 *)(gen_frame + 0xa8)),0x100,"%s//frontier.ffxiv.com/frontier-api/ffxivsupport/%s/%s","https:",
               "report","post_item");
    puVar2 = *(undefined4 * PTR32 *)((int)this + param_1 * 4 + 8);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(uint *)((int)this + 200) =
           *(uint *)((int)this + 200) &
           ~(1 << ((byte)param_1 + 8 & 0x1f)) & ~(1 << ((byte)param_1 & 0x1f));
    }
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x10))))
                      (*(int * PTR32 *)((int)this + 4),((undefined1 *)(gen_frame + 0xa8)),&REFG(undefined, 0x10ea784),uVar3,uVar4);
    *(undefined4 *)((int)this + param_1 * 4 + 0x10) = 0xb;
    if (uVar4 != 0) {
      *(uint *)((int)this + param_1 * 4 + 8) = uVar4;
      *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 1;
      uVar5 = 1;
      goto LAB_00ad12b3;
    }
    *(undefined4 *)((int)this + param_1 * 4 + 8) = 0;
    *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 4;
  }
  uVar5 = 0;
LAB_00ad12b3: ;
  F_0042c880(((undefined1 *)(gen_frame + 0x54)));
  uVar8 = F_0042c880(((undefined1 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x1a8)) ^ (uint)(uint)(gen_frame + 0x1ac));
  return CONCAT31((int3)(uVar8 >> 8),uVar5);
}

/* ref: FUN_00ad12e0 */
uint F_00ad12e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad12e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x200];
  byte bVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte * pbVar7;
  byte * pbVar8;
  char * pcVar9;
  byte * pbVar10;
  bool bVar11;
  ulonglong uVar12;
  
  (*(uint *)(gen_frame + 0x1f8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1fc);
  uVar4 = F_00bc86e0(param_1,"information");
  if (uVar4 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0x1f8)) ^ (uint)(uint)(gen_frame + 0x1fc));
    return 0;
  }
  iVar6 = *(int *)(param_2 + 0xac);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)(param_2 + 0xa8);
  if (*(int *)(param_2 + 0xa8) != iVar6) {
    uVar5 = F_00ad41d0(iVar6,iVar6,*(int *)(param_2 + 0xa8),(undefined *)(param_2 + 0xa8));
    iVar6 = F_00485c80(uVar5,*(undefined4 *)(param_2 + 0xac),param_2 + 0xb4,(*(undefined * PTR32 *)(gen_frame + 0x18)));
    *(uint *)(param_2 + 0xac) = uVar5;
  }
  iVar2 = *(int *)(uVar4 + 8);
  do {
    if (iVar2 == 0) {
      F_00c47745((*(uint *)(gen_frame + 0x1f8)) ^ (uint)(uint)(gen_frame + 0x1fc));
      return CONCAT31((int3)((uint)iVar6 >> 8),1);
    }
    F_0042b630(((undefined1 *)(gen_frame + 0x1c)));
    F_0042b630(((undefined1 *)(gen_frame + 0x70)));
    F_0042b630(((undefined1 *)(gen_frame + 0xd4)));
    F_0042b630(((undefined1 *)(gen_frame + 0x128)));
    F_0042b630(((undefined1 *)(gen_frame + 0x17c)));
    for (puVar3 = *(undefined4 * PTR32 *)(iVar2 + 8); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)puVar3[3]) {
      pbVar8 = (byte *)*puVar3;
      pcVar9 = "title";
      pbVar7 = pbVar8;
      do {
        bVar1 = *pbVar7;
        bVar11 = bVar1 < (byte)*pcVar9;
        if (bVar1 != *pcVar9) {
LAB_00ad13e0: ;
          iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
          goto LAB_00ad13e5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar7[1];
        bVar11 = bVar1 < (byte)pcVar9[1];
        if (bVar1 != pcVar9[1]) goto LAB_00ad13e0;
        pbVar7 = pbVar7 + 2;
        pcVar9 = pcVar9 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_00ad13e5: ;
      if (iVar6 == 0) {
        F_0042e430(((undefined1 *)(gen_frame + 0x1c)),puVar3[1]);
      }
      else {
        pcVar9 = "content";
        pbVar7 = pbVar8;
        do {
          bVar1 = *pbVar7;
          bVar11 = bVar1 < (byte)*pcVar9;
          if (bVar1 != *pcVar9) {
LAB_00ad1424: ;
            iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_00ad1429;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar11 = bVar1 < (byte)pcVar9[1];
          if (bVar1 != pcVar9[1]) goto LAB_00ad1424;
          pbVar7 = pbVar7 + 2;
          pcVar9 = pcVar9 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_00ad1429: ;
        if (iVar6 == 0) {
          F_0042e430(((undefined1 *)(gen_frame + 0x70)),puVar3[1]);
        }
        else {
          pcVar9 = "published";
          pbVar7 = pbVar8;
          do {
            bVar1 = *pbVar7;
            bVar11 = bVar1 < (byte)*pcVar9;
            if (bVar1 != *pcVar9) {
LAB_00ad1468: ;
              iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
              goto LAB_00ad146d;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar7[1];
            bVar11 = bVar1 < (byte)pcVar9[1];
            if (bVar1 != pcVar9[1]) goto LAB_00ad1468;
            pbVar7 = pbVar7 + 2;
            pcVar9 = pcVar9 + 2;
          } while (bVar1 != 0);
          iVar6 = 0;
LAB_00ad146d: ;
          if (iVar6 == 0) {
            uVar4 = F_00c4c74c(puVar3[1]);
            (*(uint *)(gen_frame + 0x8)) = uVar4;
            (*(int *)(gen_frame + 0xc)) = (int)uVar4 >> 0x1f;
            F_00c4f4ca(((undefined1 *)(gen_frame + 0x1d4)),&(*(uint *)(gen_frame + 0x8)));
            (*(char *)(gen_frame + 0xc6)) = (*(char *)(gen_frame + 0x1e4)) + '\x01';
            (*(undefined1 *)(gen_frame + 0xc7)) = (*(undefined1 *)(gen_frame + 0x1e0));
            (*(short *)(gen_frame + 0xc4)) = (short)(*(undefined4 *)(gen_frame + 0x1e8)) + 0x76c;
            (*(undefined1 *)(gen_frame + 0xc8)) = (*(undefined1 *)(gen_frame + 0x1dc));
            (*(undefined1 *)(gen_frame + 0xc9)) = (*(undefined1 *)(gen_frame + 0x1d8));
            (*(undefined1 *)(gen_frame + 0xca)) = ((undefined1 *)(gen_frame + 0x1d4))[0];
          }
          else {
            pcVar9 = "updated";
            pbVar7 = pbVar8;
            do {
              bVar1 = *pbVar7;
              bVar11 = bVar1 < (byte)*pcVar9;
              if (bVar1 != *pcVar9) {
LAB_00ad1510: ;
                iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                goto LAB_00ad1515;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar7[1];
              bVar11 = bVar1 < (byte)pcVar9[1];
              if (bVar1 != pcVar9[1]) goto LAB_00ad1510;
              pbVar7 = pbVar7 + 2;
              pcVar9 = pcVar9 + 2;
            } while (bVar1 != 0);
            iVar6 = 0;
LAB_00ad1515: ;
            if (iVar6 == 0) {
              uVar4 = F_00c4c74c(puVar3[1]);
              (*(uint *)(gen_frame + 0x10)) = uVar4;
              (*(int *)(gen_frame + 0x14)) = (int)uVar4 >> 0x1f;
              F_00c4f4ca(((undefined1 *)(gen_frame + 0x1d4)),&(*(uint *)(gen_frame + 0x10)));
              (*(char *)(gen_frame + 0xce)) = (*(char *)(gen_frame + 0x1e4)) + '\x01';
              (*(undefined1 *)(gen_frame + 0xcf)) = (*(undefined1 *)(gen_frame + 0x1e0));
              (*(short *)(gen_frame + 0xcc)) = (short)(*(undefined4 *)(gen_frame + 0x1e8)) + 0x76c;
              (*(undefined1 *)(gen_frame + 0xd0)) = (*(undefined1 *)(gen_frame + 0x1dc));
              (*(undefined1 *)(gen_frame + 0xd1)) = (*(undefined1 *)(gen_frame + 0x1d8));
              (*(undefined1 *)(gen_frame + 0xd2)) = ((undefined1 *)(gen_frame + 0x1d4))[0];
            }
            else {
              pbVar10 = &REFG(undefined1, 0x10eaa9c);
              pbVar7 = pbVar8;
              do {
                bVar1 = *pbVar7;
                bVar11 = bVar1 < *pbVar10;
                if (bVar1 != *pbVar10) {
LAB_00ad15b1: ;
                  iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                  goto LAB_00ad15b6;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar7[1];
                bVar11 = bVar1 < pbVar10[1];
                if (bVar1 != pbVar10[1]) goto LAB_00ad15b1;
                pbVar7 = pbVar7 + 2;
                pbVar10 = pbVar10 + 2;
              } while (bVar1 != 0);
              iVar6 = 0;
LAB_00ad15b6: ;
              if (iVar6 == 0) {
                F_0042e430(((undefined1 *)(gen_frame + 0xd4)),puVar3[1]);
              }
              else {
                pbVar10 = &REFG(undefined1, 0x10eaaa4);
                pbVar7 = pbVar8;
                do {
                  bVar1 = *pbVar7;
                  bVar11 = bVar1 < *pbVar10;
                  if (bVar1 != *pbVar10) {
LAB_00ad15f5: ;
                    iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                    goto LAB_00ad15fa;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar7[1];
                  bVar11 = bVar1 < pbVar10[1];
                  if (bVar1 != pbVar10[1]) goto LAB_00ad15f5;
                  pbVar7 = pbVar7 + 2;
                  pbVar10 = pbVar10 + 2;
                } while (bVar1 != 0);
                iVar6 = 0;
LAB_00ad15fa: ;
                if (iVar6 == 0) {
                  F_0042e430(((undefined1 *)(gen_frame + 0x17c)),puVar3[1]);
                }
                else {
                  pcVar9 = "lsb_parendid";
                  pbVar7 = pbVar8;
                  do {
                    bVar1 = *pbVar7;
                    bVar11 = bVar1 < (byte)*pcVar9;
                    if (bVar1 != *pcVar9) {
LAB_00ad1636: ;
                      iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                      goto LAB_00ad163b;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar7[1];
                    bVar11 = bVar1 < (byte)pcVar9[1];
                    if (bVar1 != pcVar9[1]) goto LAB_00ad1636;
                    pbVar7 = pbVar7 + 2;
                    pcVar9 = pcVar9 + 2;
                  } while (bVar1 != 0);
                  iVar6 = 0;
LAB_00ad163b: ;
                  if (iVar6 == 0) {
                    F_0042e430(((undefined1 *)(gen_frame + 0x128)),puVar3[1]);
                  }
                  else {
                    pcVar9 = "catId";
                    do {
                      bVar1 = *pbVar8;
                      bVar11 = bVar1 < (byte)*pcVar9;
                      if (bVar1 != *pcVar9) {
LAB_00ad1677: ;
                        iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                        goto LAB_00ad167c;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar8[1];
                      bVar11 = bVar1 < (byte)pcVar9[1];
                      if (bVar1 != pcVar9[1]) goto LAB_00ad1677;
                      pbVar8 = pbVar8 + 2;
                      pcVar9 = pcVar9 + 2;
                    } while (bVar1 != 0);
                    iVar6 = 0;
LAB_00ad167c: ;
                    if (iVar6 == 0) {
                      uVar4 = F_00c4c74c(puVar3[1]);
                      (*(uint *)(gen_frame + 0x1d0)) = uVar4;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    F_00ad6270((*(undefined * PTR32 *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x1c)));
    iVar2 = *(int *)(iVar2 + 0xc);
    F_0042c880(((undefined1 *)(gen_frame + 0x17c)));
    F_0042c880(((undefined1 *)(gen_frame + 0x128)));
    F_0042c880(((undefined1 *)(gen_frame + 0xd4)));
    F_0042c880(((undefined1 *)(gen_frame + 0x70)));
    uVar12 = F_0042c880(((undefined1 *)(gen_frame + 0x1c)));
    iVar6 = (int)uVar12;
  } while( true );
}

/* ref: FUN_00ad1700 */
uint F_00ad1700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad1700u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  byte bVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  byte * pbVar5;
  int iVar6;
  byte * pbVar7;
  char * pcVar8;
  undefined * PTR32 * ppuVar9;
  undefined * this;
  bool bVar10;
  ulonglong uVar11;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  uVar4 = F_00bc86e0(param_1,"faq_itemList");
  if (uVar4 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return 0;
  }
  iVar2 = *(int *)(uVar4 + 8);
  this = (undefined *)(param_2 + 0xa8);
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  uVar4 = F_00ad5370(this,((undefined1 *)(gen_frame + 0x8)),*(undefined4 *)(param_2 + 0xa8),*(undefined4 *)(param_2 + 0xac)
                      );
  do {
    if (iVar2 == 0) {
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
      return CONCAT31((int3)(uVar4 >> 8),1);
    }
    F_0042b630(((undefined1 *)(gen_frame + 0x10)));
    for (puVar3 = *(undefined4 * PTR32 *)(iVar2 + 8); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)puVar3[3]) {
      pbVar7 = (byte *)*puVar3;
      pcVar8 = "title";
      pbVar5 = pbVar7;
      do {
        bVar1 = *pbVar5;
        bVar10 = bVar1 < (byte)*pcVar8;
        if (bVar1 != *pcVar8) {
LAB_00ad17b0: ;
          iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_00ad17b5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar10 = bVar1 < (byte)pcVar8[1];
        if (bVar1 != pcVar8[1]) goto LAB_00ad17b0;
        pbVar5 = pbVar5 + 2;
        pcVar8 = pcVar8 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_00ad17b5: ;
      if (iVar6 == 0) {
        F_0042e430(((undefined1 *)(gen_frame + 0x10)),puVar3[1]);
      }
      else {
        ppuVar9 = (*(undefined * PTR32 (*)[1])REFP(0x10eaadc));
        do {
          bVar1 = *pbVar7;
          bVar10 = bVar1 < *(byte *)ppuVar9;
          if (bVar1 != *(byte *)ppuVar9) {
LAB_00ad17f0: ;
            iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_00ad17f5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar10 = bVar1 < *(byte *)((int)ppuVar9 + 1);
          if (bVar1 != *(byte *)((int)ppuVar9 + 1)) goto LAB_00ad17f0;
          pbVar7 = pbVar7 + 2;
          ppuVar9 = (undefined * PTR32 *)((int)ppuVar9 + 2);
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_00ad17f5: ;
        if (iVar6 == 0) {
          uVar4 = F_00c4c74c(puVar3[1]);
          (*(uint *)(gen_frame + 0x64)) = uVar4;
        }
      }
      this = (*(undefined * PTR32 *)(gen_frame + 0xc));
    }
    F_00ad6340(this,((undefined1 *)(gen_frame + 0x10)));
    iVar2 = *(int *)(iVar2 + 0xc);
    uVar11 = F_0042c880(((undefined1 *)(gen_frame + 0x10)));
    uVar4 = (uint)uVar11;
  } while( true );
}

/* ref: FUN_00ad1850 */
uint F_00ad1850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad1850u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  byte bVar1;
  undefined4 * puVar2;
  undefined * this;
  uint uVar3;
  byte * pbVar4;
  int iVar5;
  int iVar6;
  byte * pbVar7;
  byte * pbVar8;
  char * pcVar9;
  undefined * PTR32 * ppuVar10;
  bool bVar11;
  ulonglong uVar12;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = param_1;
  uVar3 = F_00bc86e0(param_1,"faq_item");
  if (uVar3 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
    return 0;
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = *(undefined4 * PTR32 *)(uVar3 + 8);
  this = param_1;
  do {
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x18)) == (undefined4 *)0x0) {
      uVar3 = F_00bc86e0(this,"faq_rel");
      if (uVar3 == 0) {
        F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
        return 0;
      }
      iVar5 = *(int *)(uVar3 + 8);
      (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)(param_2 + 0x164);
      uVar3 = F_00ad5370((undefined *)(param_2 + 0x164),&(*(undefined4 * PTR32 *)(gen_frame + 0x18)),*(undefined4 *)(param_2 + 0x164),
                           *(undefined4 *)(param_2 + 0x168));
      do {
        if (iVar5 == 0) {
          F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
          return CONCAT31((int3)(uVar3 >> 8),1);
        }
        F_0042b630(((undefined1 *)(gen_frame + 0x1c)));
        for (puVar2 = *(undefined4 * PTR32 *)(iVar5 + 8); puVar2 != (undefined4 *)0x0;
            puVar2 = (undefined4 *)puVar2[3]) {
          pbVar7 = (byte *)*puVar2;
          pcVar9 = "title";
          pbVar4 = pbVar7;
          do {
            bVar1 = *pbVar4;
            bVar11 = bVar1 < (byte)*pcVar9;
            if (bVar1 != *pcVar9) {
LAB_00ad1bc0: ;
              iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
              goto LAB_00ad1bc5;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar11 = bVar1 < (byte)pcVar9[1];
            if (bVar1 != pcVar9[1]) goto LAB_00ad1bc0;
            pbVar4 = pbVar4 + 2;
            pcVar9 = pcVar9 + 2;
          } while (bVar1 != 0);
          iVar6 = 0;
LAB_00ad1bc5: ;
          if (iVar6 == 0) {
            F_0042e430(((undefined1 *)(gen_frame + 0x1c)),puVar2[1]);
          }
          else {
            ppuVar10 = (*(undefined * PTR32 (*)[1])REFP(0x10eab44));
            do {
              bVar1 = *pbVar7;
              bVar11 = bVar1 < *(byte *)ppuVar10;
              if (bVar1 != *(byte *)ppuVar10) {
LAB_00ad1c00: ;
                iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                goto LAB_00ad1c05;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar7[1];
              bVar11 = bVar1 < *(byte *)((int)ppuVar10 + 1);
              if (bVar1 != *(byte *)((int)ppuVar10 + 1)) goto LAB_00ad1c00;
              pbVar7 = pbVar7 + 2;
              ppuVar10 = (undefined * PTR32 *)((int)ppuVar10 + 2);
            } while (bVar1 != 0);
            iVar6 = 0;
LAB_00ad1c05: ;
            if (iVar6 == 0) {
              uVar3 = F_00c4c74c(puVar2[1]);
              (*(uint *)(gen_frame + 0x70)) = uVar3;
            }
          }
        }
        F_00ad6340((*(undefined * PTR32 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x1c)));
        iVar5 = *(int *)(iVar5 + 0xc);
        uVar12 = F_0042c880(((undefined1 *)(gen_frame + 0x1c)));
        uVar3 = (uint)uVar12;
      } while( true );
    }
    pbVar7 = (byte *)*(*(undefined4 * PTR32 *)(gen_frame + 0x18));
    pbVar8 = &REFG(undefined1, 0x10eaaec);
    pbVar4 = pbVar7;
    do {
      bVar1 = *pbVar4;
      bVar11 = bVar1 < *pbVar8;
      if (bVar1 != *pbVar8) {
LAB_00ad18d0: ;
        iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_00ad18d5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar11 = bVar1 < pbVar8[1];
      if (bVar1 != pbVar8[1]) goto LAB_00ad18d0;
      pbVar4 = pbVar4 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_00ad18d5: ;
    if (iVar5 == 0) {
      for (puVar2 = (undefined4 *)(*(undefined4 * PTR32 *)(gen_frame + 0x18))[2]; puVar2 != (undefined4 *)0x0;
          puVar2 = (undefined4 *)puVar2[3]) {
        pbVar7 = (byte *)*puVar2;
        pcVar9 = "title";
        pbVar4 = pbVar7;
        do {
          bVar1 = *pbVar4;
          bVar11 = bVar1 < (byte)*pcVar9;
          if (bVar1 != *pcVar9) {
LAB_00ad1920: ;
            iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_00ad1925;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar11 = bVar1 < (byte)pcVar9[1];
          if (bVar1 != pcVar9[1]) goto LAB_00ad1920;
          pbVar4 = pbVar4 + 2;
          pcVar9 = pcVar9 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_00ad1925: ;
        if (iVar5 == 0) {
          F_0042e430((undefined *)(param_2 + 0xa8),puVar2[1]);
        }
        else {
          ppuVar10 = (*(undefined * PTR32 (*)[1])REFP(0x10eaafc));
          pbVar4 = pbVar7;
          do {
            bVar1 = *pbVar4;
            bVar11 = bVar1 < *(byte *)ppuVar10;
            if (bVar1 != *(byte *)ppuVar10) {
LAB_00ad1964: ;
              iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
              goto LAB_00ad1969;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar11 = bVar1 < *(byte *)((int)ppuVar10 + 1);
            if (bVar1 != *(byte *)((int)ppuVar10 + 1)) goto LAB_00ad1964;
            pbVar4 = pbVar4 + 2;
            ppuVar10 = (undefined * PTR32 *)((int)ppuVar10 + 2);
          } while (bVar1 != 0);
          iVar5 = 0;
LAB_00ad1969: ;
          if (iVar5 == 0) {
            uVar3 = F_00c4c74c(puVar2[1]);
            *(uint *)(param_2 + 0xfc) = uVar3;
          }
          else {
            pcVar9 = "mainCategoryId";
            pbVar4 = pbVar7;
            do {
              bVar1 = *pbVar4;
              bVar11 = bVar1 < (byte)*pcVar9;
              if (bVar1 != *pcVar9) {
LAB_00ad19b0: ;
                iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                goto LAB_00ad19b5;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar4[1];
              bVar11 = bVar1 < (byte)pcVar9[1];
              if (bVar1 != pcVar9[1]) goto LAB_00ad19b0;
              pbVar4 = pbVar4 + 2;
              pcVar9 = pcVar9 + 2;
            } while (bVar1 != 0);
            iVar5 = 0;
LAB_00ad19b5: ;
            if (iVar5 == 0) {
              uVar3 = F_00c4c74c(puVar2[1]);
              *(uint *)(param_2 + 0x100) = uVar3;
            }
            else {
              pcVar9 = "subCategoryId";
              pbVar4 = pbVar7;
              do {
                bVar1 = *pbVar4;
                bVar11 = bVar1 < (byte)*pcVar9;
                if (bVar1 != *pcVar9) {
LAB_00ad19f7: ;
                  iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                  goto LAB_00ad19fc;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar4[1];
                bVar11 = bVar1 < (byte)pcVar9[1];
                if (bVar1 != pcVar9[1]) goto LAB_00ad19f7;
                pbVar4 = pbVar4 + 2;
                pcVar9 = pcVar9 + 2;
              } while (bVar1 != 0);
              iVar5 = 0;
LAB_00ad19fc: ;
              if (iVar5 == 0) {
                uVar3 = F_00c4c74c(puVar2[1]);
                *(uint *)(param_2 + 0x104) = uVar3;
              }
              else {
                pcVar9 = "dateTime";
                do {
                  bVar1 = *pbVar7;
                  bVar11 = bVar1 < (byte)*pcVar9;
                  if (bVar1 != *pcVar9) {
LAB_00ad1a40: ;
                    iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                    goto LAB_00ad1a45;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar7[1];
                  bVar11 = bVar1 < (byte)pcVar9[1];
                  if (bVar1 != pcVar9[1]) goto LAB_00ad1a40;
                  pbVar7 = pbVar7 + 2;
                  pcVar9 = pcVar9 + 2;
                } while (bVar1 != 0);
                iVar5 = 0;
LAB_00ad1a45: ;
                if (iVar5 == 0) {
                  uVar3 = F_00c4c74c(puVar2[1]);
                  (*(uint *)(gen_frame + 0xc)) = uVar3;
                  (*(int *)(gen_frame + 0x10)) = (int)uVar3 >> 0x1f;
                  F_00c4f4ca(((undefined1 *)(gen_frame + 0x74)),&(*(uint *)(gen_frame + 0xc)));
                  *(char *)(param_2 + 0x10a) = (*(char *)(gen_frame + 0x84)) + '\x01';
                  *(undefined1 *)(param_2 + 0x10b) = (*(undefined1 *)(gen_frame + 0x80));
                  *(short *)(param_2 + 0x108) = (short)(*(undefined4 *)(gen_frame + 0x88)) + 0x76c;
                  *(undefined1 *)(param_2 + 0x10c) = (*(undefined1 *)(gen_frame + 0x7c));
                  *(undefined1 *)(param_2 + 0x10d) = (*(undefined1 *)(gen_frame + 0x78));
                  *(undefined1 *)(param_2 + 0x10e) = ((undefined1 *)(gen_frame + 0x74))[0];
                }
              }
            }
          }
        }
      }
    }
    else {
      pbVar4 = &REFG(undefined1, 0x10eab2c);
      do {
        bVar1 = *pbVar7;
        bVar11 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_00ad1af0: ;
          iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
          goto LAB_00ad1af5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar7[1];
        bVar11 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_00ad1af0;
        pbVar7 = pbVar7 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_00ad1af5: ;
      if (iVar5 == 0) {
        F_0042e430((undefined *)(param_2 + 0x110),(*(undefined4 * PTR32 *)(gen_frame + 0x18))[1]);
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (undefined4 *)(*(undefined4 * PTR32 *)(gen_frame + 0x18))[3];
    this = (*(undefined * PTR32 *)(gen_frame + 0x14));
  } while( true );
}

/* ref: FUN_00ad1c60 */
uint F_00ad1c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad1c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  byte bVar1;
  undefined4 * puVar2;
  undefined1 * puVar3;
  undefined1 * puVar4;
  uint uVar5;
  byte * pbVar6;
  int iVar7;
  byte * pbVar8;
  uint * this;
  int iVar9;
  bool bVar10;
  ulonglong uVar11;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  uVar5 = F_00bc86e0(param_1,"report_templateList");
  if (uVar5 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return 0;
  }
  iVar9 = *(int *)(uVar5 + 8);
  this = (uint *)(param_2 + 0xa8);
  (*(int *)(gen_frame + 0x10)) = iVar9;
  uVar5 = F_00ad54e0(this,((undefined1 *)(gen_frame + 0xc)),*(undefined4 *)(param_2 + 0xa8),*(undefined4 *)(param_2 + 0xac)
                      );
  iVar7 = iVar9;
  do {
    if (iVar7 == 0) {
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
      return CONCAT31((int3)(uVar5 >> 8),1);
    }
    F_0042b630(((undefined1 *)(gen_frame + 0x14)));
    for (puVar2 = *(undefined4 * PTR32 *)(iVar9 + 8); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)puVar2[3]) {
      pbVar6 = (byte *)*puVar2;
      pbVar8 = &REFG(undefined1, 0x10eab78);
      do {
        bVar1 = *pbVar6;
        bVar10 = bVar1 < *pbVar8;
        if (bVar1 != *pbVar8) {
LAB_00ad1d10: ;
          iVar7 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_00ad1d15;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar10 = bVar1 < pbVar8[1];
        if (bVar1 != pbVar8[1]) goto LAB_00ad1d10;
        pbVar6 = pbVar6 + 2;
        pbVar8 = pbVar8 + 2;
      } while (bVar1 != 0);
      iVar7 = 0;
LAB_00ad1d15: ;
      if (iVar7 == 0) {
        F_0042e430(((undefined1 *)(gen_frame + 0x14)),puVar2[1]);
      }
    }
    puVar3 = *(undefined1 * PTR32 *)(param_2 + 0xac);
    if ((((undefined1 *)(gen_frame + 0x14)) < puVar3) && (puVar4 = (undefined1 *)*this, puVar4 <= ((undefined1 *)(gen_frame + 0x14)))) {
      if (puVar3 == *(undefined1 * PTR32 *)(param_2 + 0xb0)) {
        F_00ad5ee0(this,1);
      }
      iVar9 = (*(int *)(gen_frame + 0x10));
      if (*(undefined * PTR32 *)(param_2 + 0xac) != (undefined *)0x0) {
        F_0042cbc0(*(undefined * PTR32 *)(param_2 + 0xac),
                     (((int)((undefined1 *)(gen_frame + 0x14)) - (int)puVar4) / 0x54) * 0x54 + *this);
        iVar9 = (*(int *)(gen_frame + 0x10));
      }
    }
    else {
      if (puVar3 == *(undefined1 * PTR32 *)(param_2 + 0xb0)) {
        F_00ad5ee0(this,1);
      }
      if (*(undefined * PTR32 *)(param_2 + 0xac) != (undefined *)0x0) {
        F_0042cbc0(*(undefined * PTR32 *)(param_2 + 0xac),((undefined1 *)(gen_frame + 0x14)));
      }
    }
    *(int *)(param_2 + 0xac) = *(int *)(param_2 + 0xac) + 0x54;
    iVar7 = *(int *)(iVar9 + 0xc);
    (*(int *)(gen_frame + 0x10)) = iVar7;
    uVar11 = F_0042c880(((undefined1 *)(gen_frame + 0x14)));
    uVar5 = (uint)uVar11;
    iVar9 = (*(int *)(gen_frame + 0x10));
  } while( true );
}

/* ref: FUN_00ad1dd0 */
uint F_00ad1dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad1dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x2c0];
  byte bVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  uint uVar5;
  int iVar6;
  byte * pbVar7;
  byte * pbVar8;
  char * pcVar9;
  byte * pbVar10;
  undefined * this;
  bool bVar11;
  ulonglong uVar12;
  
  (*(uint *)(gen_frame + 0x2b8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2bc);
  uVar5 = F_00bc86e0(param_1,"history");
  iVar6 = 0;
  if (uVar5 != 0) {
    iVar2 = *(int *)(uVar5 + 8);
    iVar6 = *(int *)(param_2 + 0xac);
    this = (undefined *)(param_2 + 0xa8);
    (*(int *)(gen_frame + 0xc)) = iVar2;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
    if (*(int *)(param_2 + 0xa8) != iVar6) {
      uVar5 = F_00ad4990(iVar6,iVar6,*(int *)(param_2 + 0xa8),this);
      iVar6 = F_00485ce0(uVar5,*(undefined4 *)(param_2 + 0xac),param_2 + 0xb4,(*(undefined * PTR32 *)(gen_frame + 0x8)));
      *(uint *)(param_2 + 0xac) = uVar5;
    }
    while (iVar2 != 0) {
      F_0042b630(((undefined1 *)(gen_frame + 0x12c)));
      F_0042b630(((undefined1 *)(gen_frame + 0x184)));
      F_0042b630(((undefined1 *)(gen_frame + 0x1e0)));
      F_0042b630(((undefined1 *)(gen_frame + 0x240)));
      for (puVar3 = *(undefined4 * PTR32 *)((*(int *)(gen_frame + 0xc)) + 8); puVar3 != (undefined4 *)0x0;
          puVar3 = (undefined4 *)puVar3[3]) {
        pbVar8 = (byte *)*puVar3;
        pcVar9 = "status";
        pbVar7 = pbVar8;
        do {
          bVar1 = *pbVar7;
          bVar11 = bVar1 < (byte)*pcVar9;
          if (bVar1 != *pcVar9) {
LAB_00ad1ed0: ;
            iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_00ad1ed5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar11 = bVar1 < (byte)pcVar9[1];
          if (bVar1 != pcVar9[1]) goto LAB_00ad1ed0;
          pbVar7 = pbVar7 + 2;
          pcVar9 = pcVar9 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_00ad1ed5: ;
        if (iVar6 == 0) {
          uVar5 = F_00c4c74c(puVar3[1]);
          (*(uint *)(gen_frame + 0x124)) = uVar5;
        }
        else {
          pbVar10 = &REFG(undefined1, 0x10ea8b0);
          pbVar7 = pbVar8;
          do {
            bVar1 = *pbVar7;
            bVar11 = bVar1 < *pbVar10;
            if (bVar1 != *pbVar10) {
LAB_00ad1f17: ;
              iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
              goto LAB_00ad1f1c;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar7[1];
            bVar11 = bVar1 < pbVar10[1];
            if (bVar1 != pbVar10[1]) goto LAB_00ad1f17;
            pbVar7 = pbVar7 + 2;
            pbVar10 = pbVar10 + 2;
          } while (bVar1 != 0);
          iVar6 = 0;
LAB_00ad1f1c: ;
          if (iVar6 == 0) {
            uVar5 = F_00c4c74c(puVar3[1]);
            (*(uint *)(gen_frame + 0x128)) = uVar5;
          }
          else {
            pbVar10 = &REFG(undefined1, 0x10ea8b8);
            pbVar7 = pbVar8;
            do {
              bVar1 = *pbVar7;
              bVar11 = bVar1 < *pbVar10;
              if (bVar1 != *pbVar10) {
LAB_00ad1f60: ;
                iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                goto LAB_00ad1f65;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar7[1];
              bVar11 = bVar1 < pbVar10[1];
              if (bVar1 != pbVar10[1]) goto LAB_00ad1f60;
              pbVar7 = pbVar7 + 2;
              pbVar10 = pbVar10 + 2;
            } while (bVar1 != 0);
            iVar6 = 0;
LAB_00ad1f65: ;
            if (iVar6 == 0) {
              F_0042b630(((undefined1 *)(gen_frame + 0x10)));
              F_0042b630(((undefined1 *)(gen_frame + 0x68)));
              F_0042b630(((undefined1 *)(gen_frame + 0xc4)));
              for (puVar4 = (undefined4 *)puVar3[2]; puVar4 != (undefined4 *)0x0;
                  puVar4 = (undefined4 *)puVar4[3]) {
                pbVar8 = (byte *)*puVar4;
                pcVar9 = "messageId";
                pbVar7 = pbVar8;
                do {
                  bVar1 = *pbVar7;
                  bVar11 = bVar1 < (byte)*pcVar9;
                  if (bVar1 != *pcVar9) {
LAB_00ad1fd0: ;
                    iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                    goto LAB_00ad1fd5;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar7[1];
                  bVar11 = bVar1 < (byte)pcVar9[1];
                  if (bVar1 != pcVar9[1]) goto LAB_00ad1fd0;
                  pbVar7 = pbVar7 + 2;
                  pcVar9 = pcVar9 + 2;
                } while (bVar1 != 0);
                iVar6 = 0;
LAB_00ad1fd5: ;
                if (iVar6 == 0) {
                  F_0042e430(((undefined1 *)(gen_frame + 0x12c)),puVar4[1]);
                }
                else {
                  pcVar9 = "ticketId";
                  pbVar7 = pbVar8;
                  do {
                    bVar1 = *pbVar7;
                    bVar11 = bVar1 < (byte)*pcVar9;
                    if (bVar1 != *pcVar9) {
LAB_00ad2014: ;
                      iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                      goto LAB_00ad2019;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar7[1];
                    bVar11 = bVar1 < (byte)pcVar9[1];
                    if (bVar1 != pcVar9[1]) goto LAB_00ad2014;
                    pbVar7 = pbVar7 + 2;
                    pcVar9 = pcVar9 + 2;
                  } while (bVar1 != 0);
                  iVar6 = 0;
LAB_00ad2019: ;
                  if (iVar6 == 0) {
                    uVar5 = F_00c4c74c(puVar4[1]);
                    (*(uint *)(gen_frame + 0x180)) = uVar5;
                  }
                  else {
                    pcVar9 = "summary";
                    pbVar7 = pbVar8;
                    do {
                      bVar1 = *pbVar7;
                      bVar11 = bVar1 < (byte)*pcVar9;
                      if (bVar1 != *pcVar9) {
LAB_00ad2060: ;
                        iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                        goto LAB_00ad2065;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar7[1];
                      bVar11 = bVar1 < (byte)pcVar9[1];
                      if (bVar1 != pcVar9[1]) goto LAB_00ad2060;
                      pbVar7 = pbVar7 + 2;
                      pcVar9 = pcVar9 + 2;
                    } while (bVar1 != 0);
                    iVar6 = 0;
LAB_00ad2065: ;
                    if (iVar6 == 0) {
                      F_0042e430(((undefined1 *)(gen_frame + 0x184)),puVar4[1]);
                    }
                    else {
                      pcVar9 = "mainCategoryId";
                      pbVar7 = pbVar8;
                      do {
                        bVar1 = *pbVar7;
                        bVar11 = bVar1 < (byte)*pcVar9;
                        if (bVar1 != *pcVar9) {
LAB_00ad20a4: ;
                          iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                          goto LAB_00ad20a9;
                        }
                        if (bVar1 == 0) break;
                        bVar1 = pbVar7[1];
                        bVar11 = bVar1 < (byte)pcVar9[1];
                        if (bVar1 != pcVar9[1]) goto LAB_00ad20a4;
                        pbVar7 = pbVar7 + 2;
                        pcVar9 = pcVar9 + 2;
                      } while (bVar1 != 0);
                      iVar6 = 0;
LAB_00ad20a9: ;
                      if (iVar6 == 0) {
                        uVar5 = F_00c4c74c(puVar4[1]);
                        (*(uint *)(gen_frame + 0x1d8)) = uVar5;
                      }
                      else {
                        pcVar9 = "subCategoryId";
                        pbVar7 = pbVar8;
                        do {
                          bVar1 = *pbVar7;
                          bVar11 = bVar1 < (byte)*pcVar9;
                          if (bVar1 != *pcVar9) {
LAB_00ad20f0: ;
                            iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                            goto LAB_00ad20f5;
                          }
                          if (bVar1 == 0) break;
                          bVar1 = pbVar7[1];
                          bVar11 = bVar1 < (byte)pcVar9[1];
                          if (bVar1 != pcVar9[1]) goto LAB_00ad20f0;
                          pbVar7 = pbVar7 + 2;
                          pcVar9 = pcVar9 + 2;
                        } while (bVar1 != 0);
                        iVar6 = 0;
LAB_00ad20f5: ;
                        if (iVar6 == 0) {
                          uVar5 = F_00c4c74c(puVar4[1]);
                          (*(uint *)(gen_frame + 0x1dc)) = uVar5;
                        }
                        else {
                          pbVar10 = &REFG(undefined1, 0x10ea900);
                          pbVar7 = pbVar8;
                          do {
                            bVar1 = *pbVar7;
                            bVar11 = bVar1 < *pbVar10;
                            if (bVar1 != *pbVar10) {
LAB_00ad2137: ;
                              iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                              goto LAB_00ad213c;
                            }
                            if (bVar1 == 0) break;
                            bVar1 = pbVar7[1];
                            bVar11 = bVar1 < pbVar10[1];
                            if (bVar1 != pbVar10[1]) goto LAB_00ad2137;
                            pbVar7 = pbVar7 + 2;
                            pbVar10 = pbVar10 + 2;
                          } while (bVar1 != 0);
                          iVar6 = 0;
LAB_00ad213c: ;
                          if (iVar6 == 0) {
                            F_0042e430(((undefined1 *)(gen_frame + 0x1e0)),puVar4[1]);
                          }
                          else {
                            pcVar9 = "status";
                            pbVar7 = pbVar8;
                            do {
                              bVar1 = *pbVar7;
                              bVar11 = bVar1 < (byte)*pcVar9;
                              if (bVar1 != *pcVar9) {
LAB_00ad2180: ;
                                iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                                goto LAB_00ad2185;
                              }
                              if (bVar1 == 0) break;
                              bVar1 = pbVar7[1];
                              bVar11 = bVar1 < (byte)pcVar9[1];
                              if (bVar1 != pcVar9[1]) goto LAB_00ad2180;
                              pbVar7 = pbVar7 + 2;
                              pcVar9 = pcVar9 + 2;
                            } while (bVar1 != 0);
                            iVar6 = 0;
LAB_00ad2185: ;
                            if (iVar6 == 0) {
                              uVar5 = F_00c4c74c(puVar4[1]);
                              (*(uint *)(gen_frame + 0x234)) = uVar5;
                            }
                            else {
                              pcVar9 = "dateTime";
                              do {
                                bVar1 = *pbVar8;
                                bVar11 = bVar1 < (byte)*pcVar9;
                                if (bVar1 != *pcVar9) {
LAB_00ad21c7: ;
                                  iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                                  goto LAB_00ad21cc;
                                }
                                if (bVar1 == 0) break;
                                bVar1 = pbVar8[1];
                                bVar11 = bVar1 < (byte)pcVar9[1];
                                if (bVar1 != pcVar9[1]) goto LAB_00ad21c7;
                                pbVar8 = pbVar8 + 2;
                                pcVar9 = pcVar9 + 2;
                              } while (bVar1 != 0);
                              iVar6 = 0;
LAB_00ad21cc: ;
                              if (iVar6 == 0) {
                                uVar5 = F_00c4c74c(puVar4[1]);
                                (*(int *)(gen_frame + 0x4)) = (int)uVar5 >> 0x1f;
                                (*(uint *)(gen_frame + 0x0)) = uVar5;
                                F_00c4f4ca(((undefined1 *)(gen_frame + 0x294)),&(*(uint *)(gen_frame + 0x0)));
                                (*(char *)(gen_frame + 0x23a)) = (*(char *)(gen_frame + 0x2a4)) + '\x01';
                                (*(undefined1 *)(gen_frame + 0x23b)) = (*(undefined1 *)(gen_frame + 0x2a0));
                                (*(short *)(gen_frame + 0x238)) = (short)(*(undefined4 *)(gen_frame + 0x2a8)) + 0x76c;
                                (*(undefined1 *)(gen_frame + 0x23c)) = (*(undefined1 *)(gen_frame + 0x29c));
                                (*(undefined1 *)(gen_frame + 0x23d)) = (*(undefined1 *)(gen_frame + 0x298));
                                (*(undefined1 *)(gen_frame + 0x23e)) = ((undefined1 *)(gen_frame + 0x294))[0];
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              F_0042c880(((undefined1 *)(gen_frame + 0xc4)));
              F_0042c880(((undefined1 *)(gen_frame + 0x68)));
              F_0042c880(((undefined1 *)(gen_frame + 0x10)));
              this = (*(undefined * PTR32 *)(gen_frame + 0x8));
            }
            else {
              pbVar7 = &REFG(undefined1, 0x10ea91c);
              do {
                bVar1 = *pbVar8;
                bVar11 = bVar1 < *pbVar7;
                if (bVar1 != *pbVar7) {
LAB_00ad2290: ;
                  iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                  goto LAB_00ad2295;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar8[1];
                bVar11 = bVar1 < pbVar7[1];
                if (bVar1 != pbVar7[1]) goto LAB_00ad2290;
                pbVar8 = pbVar8 + 2;
                pbVar7 = pbVar7 + 2;
              } while (bVar1 != 0);
              iVar6 = 0;
LAB_00ad2295: ;
              if (iVar6 == 0) {
                F_0042e430(((undefined1 *)(gen_frame + 0x240)),puVar3[1]);
              }
            }
          }
        }
      }
      F_00ad6660(this,&(*(uint *)(gen_frame + 0x124)));
      iVar2 = *(int *)((*(int *)(gen_frame + 0xc)) + 0xc);
      (*(int *)(gen_frame + 0xc)) = iVar2;
      F_0042c880(((undefined1 *)(gen_frame + 0x240)));
      F_0042c880(((undefined1 *)(gen_frame + 0x1e0)));
      F_0042c880(((undefined1 *)(gen_frame + 0x184)));
      uVar12 = F_0042c880(((undefined1 *)(gen_frame + 0x12c)));
      iVar6 = (int)uVar12;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x2b8)) ^ (uint)(uint)(gen_frame + 0x2bc));
  return CONCAT31((int3)((uint)iVar6 >> 8),1);
}

/* ref: FUN_00ad2320 */
uint F_00ad2320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad2320u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x2d0];
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte * pbVar7;
  char * pcVar8;
  uint * puVar9;
  undefined * PTR32 * ppuVar10;
  byte * pbVar11;
  undefined4 * puVar12;
  uint * puVar13;
  undefined4 * puVar14;
  bool bVar15;
  ulonglong uVar16;
  
  (*(uint *)(gen_frame + 0x2c8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2cc);
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = param_1;
  (*(int *)(gen_frame + 0x20)) = param_2;
  uVar2 = F_00bc86e0(param_1,"information");
  if (uVar2 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0x2c8)) ^ (uint)(uint)(gen_frame + 0x2cc));
    return 0;
  }
  puVar12 = *(undefined4 * PTR32 *)(uVar2 + 8);
  if (puVar12 != (undefined4 *)0x0) {
    pbVar3 = (byte *)*puVar12;
    pbVar7 = &REFG(undefined1, 0x10ea940);
    do {
      bVar1 = *pbVar3;
      bVar15 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_00ad23a0: ;
        uVar2 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_00ad23a5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar15 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_00ad23a0;
      pbVar3 = pbVar3 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    uVar2 = 0;
LAB_00ad23a5: ;
    if (uVar2 != 0) goto LAB_00ad2d30;
    F_00ad5b00((undefined *)((*(int *)(gen_frame + 0x20)) + 0xa8));
    do {
      F_0042b630(((undefined1 *)(gen_frame + 0x28)));
      F_0042b630(((undefined1 *)(gen_frame + 0x7c)));
      F_0042b630(((undefined1 *)(gen_frame + 0xe0)));
      F_0042b630(((undefined1 *)(gen_frame + 0x134)));
      F_0042b630(((undefined1 *)(gen_frame + 0x188)));
      for (puVar14 = (undefined4 *)puVar12[2]; puVar14 != (undefined4 *)0x0;
          puVar14 = (undefined4 *)puVar14[3]) {
        pbVar3 = (byte *)*puVar14;
        pcVar8 = "title";
        pbVar7 = pbVar3;
        do {
          bVar1 = *pbVar7;
          bVar15 = bVar1 < (byte)*pcVar8;
          if (bVar1 != *pcVar8) {
LAB_00ad2430: ;
            iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
            goto LAB_00ad2435;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar15 = bVar1 < (byte)pcVar8[1];
          if (bVar1 != pcVar8[1]) goto LAB_00ad2430;
          pbVar7 = pbVar7 + 2;
          pcVar8 = pcVar8 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_00ad2435: ;
        if (iVar4 == 0) {
          F_0042e430(((undefined1 *)(gen_frame + 0x28)),puVar14[1]);
        }
        else {
          pcVar8 = "content";
          pbVar7 = pbVar3;
          do {
            bVar1 = *pbVar7;
            bVar15 = bVar1 < (byte)*pcVar8;
            if (bVar1 != *pcVar8) {
LAB_00ad2474: ;
              iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
              goto LAB_00ad2479;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar7[1];
            bVar15 = bVar1 < (byte)pcVar8[1];
            if (bVar1 != pcVar8[1]) goto LAB_00ad2474;
            pbVar7 = pbVar7 + 2;
            pcVar8 = pcVar8 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_00ad2479: ;
          if (iVar4 == 0) {
            F_0042e430(((undefined1 *)(gen_frame + 0x7c)),puVar14[1]);
          }
          else {
            pcVar8 = "published";
            pbVar7 = pbVar3;
            do {
              bVar1 = *pbVar7;
              bVar15 = bVar1 < (byte)*pcVar8;
              if (bVar1 != *pcVar8) {
LAB_00ad24b8: ;
                iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                goto LAB_00ad24bd;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar7[1];
              bVar15 = bVar1 < (byte)pcVar8[1];
              if (bVar1 != pcVar8[1]) goto LAB_00ad24b8;
              pbVar7 = pbVar7 + 2;
              pcVar8 = pcVar8 + 2;
            } while (bVar1 != 0);
            iVar4 = 0;
LAB_00ad24bd: ;
            if (iVar4 == 0) {
              uVar2 = F_00c4c74c(puVar14[1]);
              (*(int *)(gen_frame + 0xc)) = (int)uVar2 >> 0x1f;
              (*(uint *)(gen_frame + 0x8)) = uVar2;
              F_00c4f4ca(((undefined1 *)(gen_frame + 0x2a4)),&(*(uint *)(gen_frame + 0x8)));
              (*(char *)(gen_frame + 0xd2)) = (*(char *)(gen_frame + 0x2b4)) + '\x01';
              (*(undefined1 *)(gen_frame + 0xd3)) = (*(undefined1 *)(gen_frame + 0x2b0));
              (*(short *)(gen_frame + 0xd0)) = (short)(*(undefined4 *)(gen_frame + 0x2b8)) + 0x76c;
              (*(undefined1 *)(gen_frame + 0xd4)) = (*(undefined1 *)(gen_frame + 0x2ac));
              (*(undefined1 *)(gen_frame + 0xd5)) = (*(undefined1 *)(gen_frame + 0x2a8));
              (*(undefined1 *)(gen_frame + 0xd6)) = ((undefined1 *)(gen_frame + 0x2a4))[0];
            }
            else {
              pcVar8 = "updated";
              pbVar7 = pbVar3;
              do {
                bVar1 = *pbVar7;
                bVar15 = bVar1 < (byte)*pcVar8;
                if (bVar1 != *pcVar8) {
LAB_00ad2558: ;
                  iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                  goto LAB_00ad255d;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar7[1];
                bVar15 = bVar1 < (byte)pcVar8[1];
                if (bVar1 != pcVar8[1]) goto LAB_00ad2558;
                pbVar7 = pbVar7 + 2;
                pcVar8 = pcVar8 + 2;
              } while (bVar1 != 0);
              iVar4 = 0;
LAB_00ad255d: ;
              if (iVar4 == 0) {
                uVar2 = F_00c4c74c(puVar14[1]);
                (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = (undefined4 *)((int)uVar2 >> 0x1f);
                (*(uint *)(gen_frame + 0x18)) = uVar2;
                F_00c4f4ca(((undefined1 *)(gen_frame + 0x2a4)),&(*(uint *)(gen_frame + 0x18)));
                (*(char *)(gen_frame + 0xda)) = (*(char *)(gen_frame + 0x2b4)) + '\x01';
                (*(undefined1 *)(gen_frame + 0xdb)) = (*(undefined1 *)(gen_frame + 0x2b0));
                (*(short *)(gen_frame + 0xd8)) = (short)(*(undefined4 *)(gen_frame + 0x2b8)) + 0x76c;
                (*(undefined1 *)(gen_frame + 0xdc)) = (*(undefined1 *)(gen_frame + 0x2ac));
                (*(undefined1 *)(gen_frame + 0xdd)) = (*(undefined1 *)(gen_frame + 0x2a8));
                (*(undefined1 *)(gen_frame + 0xde)) = ((undefined1 *)(gen_frame + 0x2a4))[0];
              }
              else {
                pbVar11 = &REFG(undefined1, 0x10ea96c);
                pbVar7 = pbVar3;
                do {
                  bVar1 = *pbVar7;
                  bVar15 = bVar1 < *pbVar11;
                  if (bVar1 != *pbVar11) {
LAB_00ad25f8: ;
                    iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                    goto LAB_00ad25fd;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar7[1];
                  bVar15 = bVar1 < pbVar11[1];
                  if (bVar1 != pbVar11[1]) goto LAB_00ad25f8;
                  pbVar7 = pbVar7 + 2;
                  pbVar11 = pbVar11 + 2;
                } while (bVar1 != 0);
                iVar4 = 0;
LAB_00ad25fd: ;
                if (iVar4 == 0) {
                  F_0042e430(((undefined1 *)(gen_frame + 0xe0)),puVar14[1]);
                }
                else {
                  pbVar11 = &REFG(undefined1, 0x10ea974);
                  pbVar7 = pbVar3;
                  do {
                    bVar1 = *pbVar7;
                    bVar15 = bVar1 < *pbVar11;
                    if (bVar1 != *pbVar11) {
LAB_00ad2640: ;
                      iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                      goto LAB_00ad2645;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar7[1];
                    bVar15 = bVar1 < pbVar11[1];
                    if (bVar1 != pbVar11[1]) goto LAB_00ad2640;
                    pbVar7 = pbVar7 + 2;
                    pbVar11 = pbVar11 + 2;
                  } while (bVar1 != 0);
                  iVar4 = 0;
LAB_00ad2645: ;
                  if (iVar4 == 0) {
                    F_0042e430(((undefined1 *)(gen_frame + 0x188)),puVar14[1]);
                  }
                  else {
                    pcVar8 = "lsb_parendid";
                    pbVar7 = pbVar3;
                    do {
                      bVar1 = *pbVar7;
                      bVar15 = bVar1 < (byte)*pcVar8;
                      if (bVar1 != *pcVar8) {
LAB_00ad2684: ;
                        iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                        goto LAB_00ad2689;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar7[1];
                      bVar15 = bVar1 < (byte)pcVar8[1];
                      if (bVar1 != pcVar8[1]) goto LAB_00ad2684;
                      pbVar7 = pbVar7 + 2;
                      pcVar8 = pcVar8 + 2;
                    } while (bVar1 != 0);
                    iVar4 = 0;
LAB_00ad2689: ;
                    if (iVar4 == 0) {
                      F_0042e430(((undefined1 *)(gen_frame + 0x134)),puVar14[1]);
                    }
                    else {
                      pcVar8 = "catId";
                      do {
                        bVar1 = *pbVar3;
                        bVar15 = bVar1 < (byte)*pcVar8;
                        if (bVar1 != *pcVar8) {
LAB_00ad26c5: ;
                          iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                          goto LAB_00ad26ca;
                        }
                        if (bVar1 == 0) break;
                        bVar1 = pbVar3[1];
                        bVar15 = bVar1 < (byte)pcVar8[1];
                        if (bVar1 != pcVar8[1]) goto LAB_00ad26c5;
                        pbVar3 = pbVar3 + 2;
                        pcVar8 = pcVar8 + 2;
                      } while (bVar1 != 0);
                      iVar4 = 0;
LAB_00ad26ca: ;
                      if (iVar4 == 0) {
                        uVar2 = F_00c4c74c(puVar14[1]);
                        (*(uint *)(gen_frame + 0x1dc)) = uVar2;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      F_00ad6270((undefined *)((*(int *)(gen_frame + 0x20)) + 0xa8),((undefined1 *)(gen_frame + 0x28)));
      puVar12 = (undefined4 *)puVar12[3];
      F_0042c880(((undefined1 *)(gen_frame + 0x188)));
      F_0042c880(((undefined1 *)(gen_frame + 0x134)));
      F_0042c880(((undefined1 *)(gen_frame + 0xe0)));
      F_0042c880(((undefined1 *)(gen_frame + 0x7c)));
      F_0042c880(((undefined1 *)(gen_frame + 0x28)));
    } while (puVar12 != (undefined4 *)0x0);
  }
  uVar5 = F_00bc86e0((*(undefined * PTR32 *)(gen_frame + 0x14)),"inquiry_categoryList");
  uVar2 = 0;
  if (uVar5 != 0) {
    puVar12 = *(undefined4 * PTR32 *)(uVar5 + 8);
    (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = puVar12;
    if (puVar12 != (undefined4 *)0x0) {
      pbVar3 = (byte *)*puVar12;
      pcVar8 = "mainCategory";
      do {
        bVar1 = *pbVar3;
        bVar15 = bVar1 < (byte)*pcVar8;
        if (bVar1 != *pcVar8) {
LAB_00ad2795: ;
          uVar2 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
          goto LAB_00ad279a;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar15 = bVar1 < (byte)pcVar8[1];
        if (bVar1 != pcVar8[1]) goto LAB_00ad2795;
        pbVar3 = pbVar3 + 2;
        pcVar8 = pcVar8 + 2;
      } while (bVar1 != 0);
      uVar2 = 0;
LAB_00ad279a: ;
      if (uVar2 != 0) goto LAB_00ad2d30;
      F_00ad6a20((undefined *)((*(int *)(gen_frame + 0x20)) + 0xb8));
      do {
        F_0042b630(((undefined1 *)(gen_frame + 0x23c)));
        (*(uint * PTR32 *)(gen_frame + 0x294)) = (uint *)0x0;
        (*(uint * PTR32 *)(gen_frame + 0x298)) = (uint *)0x0;
        (*(uint * PTR32 *)(gen_frame + 0x29c)) = (uint *)0x0;
        puVar14 = (undefined4 *)puVar12[2];
        (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar14;
        while ((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar14, puVar14 != (undefined4 *)0x0) {
          pbVar3 = (byte *)*puVar14;
          pcVar8 = "label";
          do {
            bVar1 = *pbVar3;
            bVar15 = bVar1 < (byte)*pcVar8;
            if (bVar1 != *pcVar8) {
LAB_00ad2807: ;
              iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
              goto LAB_00ad280c;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar3[1];
            bVar15 = bVar1 < (byte)pcVar8[1];
            if (bVar1 != pcVar8[1]) goto LAB_00ad2807;
            pbVar3 = pbVar3 + 2;
            pcVar8 = pcVar8 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_00ad280c: ;
          if (iVar4 == 0) {
            F_0042e430(((undefined1 *)(gen_frame + 0x23c)),puVar14[1]);
          }
          pbVar3 = (byte *)*puVar14;
          pcVar8 = "mainCategoryId";
          do {
            bVar1 = *pbVar3;
            bVar15 = bVar1 < (byte)*pcVar8;
            if (bVar1 != *pcVar8) {
LAB_00ad2846: ;
              iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
              goto LAB_00ad284b;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar3[1];
            bVar15 = bVar1 < (byte)pcVar8[1];
            if (bVar1 != pcVar8[1]) goto LAB_00ad2846;
            pbVar3 = pbVar3 + 2;
            pcVar8 = pcVar8 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_00ad284b: ;
          if (iVar4 == 0) {
            uVar2 = F_00c4c74c(puVar14[1]);
            (*(uint *)(gen_frame + 0x290)) = uVar2;
          }
          pbVar3 = (byte *)*puVar14;
          pcVar8 = "subCategoryList";
          do {
            bVar1 = *pbVar3;
            bVar15 = bVar1 < (byte)*pcVar8;
            if (bVar1 != *pcVar8) {
LAB_00ad2885: ;
              iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
              goto LAB_00ad288a;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar3[1];
            bVar15 = bVar1 < (byte)pcVar8[1];
            if (bVar1 != pcVar8[1]) goto LAB_00ad2885;
            pbVar3 = pbVar3 + 2;
            pcVar8 = pcVar8 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_00ad288a: ;
          if (iVar4 == 0) {
            F_0042b630(&(*(uint *)(gen_frame + 0x1e4)));
            iVar4 = puVar14[2];
            (*(int *)(gen_frame + 0x10)) = iVar4;
            F_00ad52a0(&(*(uint * PTR32 *)(gen_frame + 0x294)),&(*(int *)(gen_frame + 0xc)),(*(uint * PTR32 *)(gen_frame + 0x294)),(*(uint * PTR32 *)(gen_frame + 0x298)));
            puVar13 = (*(uint * PTR32 *)(gen_frame + 0x294));
            while (iVar4 != 0) {
              for (puVar12 = *(undefined4 * PTR32 *)(iVar4 + 8); puVar12 != (undefined4 *)0x0;
                  puVar12 = (undefined4 *)puVar12[3]) {
                pbVar3 = (byte *)*puVar12;
                pcVar8 = "label";
                pbVar7 = pbVar3;
                do {
                  bVar1 = *pbVar7;
                  bVar15 = bVar1 < (byte)*pcVar8;
                  if (bVar1 != *pcVar8) {
LAB_00ad2910: ;
                    iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                    goto LAB_00ad2915;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar7[1];
                  bVar15 = bVar1 < (byte)pcVar8[1];
                  if (bVar1 != pcVar8[1]) goto LAB_00ad2910;
                  pbVar7 = pbVar7 + 2;
                  pcVar8 = pcVar8 + 2;
                } while (bVar1 != 0);
                iVar4 = 0;
LAB_00ad2915: ;
                if (iVar4 == 0) {
                  F_0042e430(&(*(uint *)(gen_frame + 0x1e4)),puVar12[1]);
                }
                else {
                  pcVar8 = "subCategoryId";
                  do {
                    bVar1 = *pbVar3;
                    bVar15 = bVar1 < (byte)*pcVar8;
                    if (bVar1 != *pcVar8) {
LAB_00ad2951: ;
                      iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                      goto LAB_00ad2956;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar3[1];
                    bVar15 = bVar1 < (byte)pcVar8[1];
                    if (bVar1 != pcVar8[1]) goto LAB_00ad2951;
                    pbVar3 = pbVar3 + 2;
                    pcVar8 = pcVar8 + 2;
                  } while (bVar1 != 0);
                  iVar4 = 0;
LAB_00ad2956: ;
                  if (iVar4 == 0) {
                    uVar2 = F_00c4c74c(puVar12[1]);
                    (*(uint *)(gen_frame + 0x238)) = uVar2;
                  }
                }
                puVar13 = (*(uint * PTR32 *)(gen_frame + 0x294));
              }
              if ((&(*(uint *)(gen_frame + 0x1e4)) < (*(uint * PTR32 *)(gen_frame + 0x298))) && (puVar13 <= &(*(uint *)(gen_frame + 0x1e4)))) {
                iVar4 = (int)&(*(uint *)(gen_frame + 0x1e4)) - (int)puVar13;
                if ((*(uint * PTR32 *)(gen_frame + 0x298)) == (*(uint * PTR32 *)(gen_frame + 0x29c))) {
                  iVar6 = ((int)(*(uint * PTR32 *)(gen_frame + 0x298)) - (int)puVar13) / 0x58;
                  if (iVar6 == -1) {
LAB_00ad2b86: ;
                    
                    F_00c4579a("vector<T> too long");
                  }
                  uVar2 = ((int)(*(uint * PTR32 *)(gen_frame + 0x29c)) - (int)puVar13) / 0x58;
                  uVar5 = iVar6 + 1;
                  if (uVar2 < uVar5) {
                    if (-(uVar2 >> 1) - 1 < uVar2) {
                      uVar2 = 0;
                    }
                    else {
                      uVar2 = uVar2 + (uVar2 >> 1);
                    }
                    if (uVar2 < uVar5) {
                      uVar2 = uVar5;
                    }
                    F_00ad5560(&(*(uint * PTR32 *)(gen_frame + 0x294)),uVar2);
                    puVar13 = (*(uint * PTR32 *)(gen_frame + 0x294));
                  }
                }
                puVar9 = (*(uint * PTR32 *)(gen_frame + 0x298));
                if ((*(uint * PTR32 *)(gen_frame + 0x298)) != (uint *)0x0) {
                  F_0042cbc0((*(uint * PTR32 *)(gen_frame + 0x298)),puVar13 + (iVar4 / 0x58) * 0x16);
                  puVar9[0x15] = (puVar13 + (iVar4 / 0x58) * 0x16)[0x15];
                  puVar9 = (*(uint * PTR32 *)(gen_frame + 0x298));
                  puVar13 = (*(uint * PTR32 *)(gen_frame + 0x294));
                }
              }
              else {
                if ((*(uint * PTR32 *)(gen_frame + 0x298)) == (*(uint * PTR32 *)(gen_frame + 0x29c))) {
                  iVar4 = ((int)(*(uint * PTR32 *)(gen_frame + 0x298)) - (int)puVar13) / 0x58;
                  if (iVar4 == -1) goto LAB_00ad2b86;
                  uVar2 = ((int)(*(uint * PTR32 *)(gen_frame + 0x29c)) - (int)puVar13) / 0x58;
                  uVar5 = iVar4 + 1;
                  if (uVar2 < uVar5) {
                    if (-(uVar2 >> 1) - 1 < uVar2) {
                      uVar2 = 0;
                    }
                    else {
                      uVar2 = uVar2 + (uVar2 >> 1);
                    }
                    if (uVar2 < uVar5) {
                      uVar2 = uVar5;
                    }
                    F_00ad5560(&(*(uint * PTR32 *)(gen_frame + 0x294)),uVar2);
                    puVar13 = (*(uint * PTR32 *)(gen_frame + 0x294));
                  }
                }
                puVar9 = (*(uint * PTR32 *)(gen_frame + 0x298));
                if ((*(uint * PTR32 *)(gen_frame + 0x298)) != (uint *)0x0) {
                  F_0042cbc0((*(uint * PTR32 *)(gen_frame + 0x298)),&(*(uint *)(gen_frame + 0x1e4)));
                  puVar9[0x15] = (*(uint *)(gen_frame + 0x238));
                  puVar9 = (*(uint * PTR32 *)(gen_frame + 0x298));
                  puVar13 = (*(uint * PTR32 *)(gen_frame + 0x294));
                }
              }
              (*(uint * PTR32 *)(gen_frame + 0x298)) = puVar9 + 0x16;
              iVar4 = *(int *)((*(int *)(gen_frame + 0x10)) + 0xc);
              (*(int *)(gen_frame + 0x10)) = iVar4;
              puVar12 = (*(undefined4 * PTR32 *)(gen_frame + 0x24));
              puVar14 = (*(undefined4 * PTR32 *)(gen_frame + 0x1c));
            }
            F_0042c880(&(*(uint *)(gen_frame + 0x1e4)));
          }
          puVar14 = (undefined4 *)puVar14[3];
          (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar14;
        }
        F_00ad6af0((undefined *)((*(int *)(gen_frame + 0x20)) + 0xb8),((undefined1 *)(gen_frame + 0x23c)));
        puVar12 = (undefined4 *)puVar12[3];
        (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = puVar12;
        F_0048a290(&(*(uint * PTR32 *)(gen_frame + 0x294)));
        F_0042c880(((undefined1 *)(gen_frame + 0x23c)));
      } while (puVar12 != (undefined4 *)0x0);
    }
    uVar5 = F_00bc86e0((*(undefined * PTR32 *)(gen_frame + 0x14)),"inquiry_itemList");
    iVar4 = (*(int *)(gen_frame + 0x20));
    uVar2 = 0;
    if (uVar5 != 0) {
      puVar12 = *(undefined4 * PTR32 *)(uVar5 + 8);
      (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = puVar12;
      if (puVar12 != (undefined4 *)0x0) {
        pbVar3 = (byte *)*puVar12;
        pbVar7 = &REFG(undefined1, 0x10eaa10);
        do {
          bVar1 = *pbVar3;
          bVar15 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_00ad2b90: ;
            uVar2 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
            goto LAB_00ad2b95;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar15 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_00ad2b90;
          pbVar3 = pbVar3 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        uVar2 = 0;
LAB_00ad2b95: ;
        if (uVar2 != 0) goto LAB_00ad2d30;
        F_00ad53f0((undefined *)((*(int *)(gen_frame + 0x20)) + 200),&(*(int *)(gen_frame + 0xc)),*(undefined4 *)((*(int *)(gen_frame + 0x20)) + 200),
                     *(undefined4 *)((*(int *)(gen_frame + 0x20)) + 0xcc));
        do {
          F_0042b630(&(*(uint *)(gen_frame + 0x1e4)));
          for (puVar12 = (undefined4 *)(*(undefined4 * PTR32 *)(gen_frame + 0x24))[2]; puVar12 != (undefined4 *)0x0;
              puVar12 = (undefined4 *)puVar12[3]) {
            pbVar3 = (byte *)*puVar12;
            pcVar8 = "title";
            pbVar7 = pbVar3;
            do {
              bVar1 = *pbVar7;
              bVar15 = bVar1 < (byte)*pcVar8;
              if (bVar1 != *pcVar8) {
LAB_00ad2c10: ;
                iVar6 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                goto LAB_00ad2c15;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar7[1];
              bVar15 = bVar1 < (byte)pcVar8[1];
              if (bVar1 != pcVar8[1]) goto LAB_00ad2c10;
              pbVar7 = pbVar7 + 2;
              pcVar8 = pcVar8 + 2;
            } while (bVar1 != 0);
            iVar6 = 0;
LAB_00ad2c15: ;
            if (iVar6 == 0) {
              F_0042e430(&(*(uint *)(gen_frame + 0x1e4)),puVar12[1]);
            }
            else {
              ppuVar10 = (*(undefined * PTR32 (*)[1])REFP(0x10eaa20));
              do {
                bVar1 = *pbVar3;
                bVar15 = bVar1 < *(byte *)ppuVar10;
                if (bVar1 != *(byte *)ppuVar10) {
LAB_00ad2c51: ;
                  iVar6 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                  goto LAB_00ad2c56;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar3[1];
                bVar15 = bVar1 < *(byte *)((int)ppuVar10 + 1);
                if (bVar1 != *(byte *)((int)ppuVar10 + 1)) goto LAB_00ad2c51;
                pbVar3 = pbVar3 + 2;
                ppuVar10 = (undefined * PTR32 *)((int)ppuVar10 + 2);
              } while (bVar1 != 0);
              iVar6 = 0;
LAB_00ad2c56: ;
              if (iVar6 == 0) {
                uVar2 = F_00c4c74c(puVar12[1]);
                (*(uint *)(gen_frame + 0x238)) = uVar2;
              }
            }
          }
          F_00ad63d0((undefined *)(iVar4 + 200),&(*(uint *)(gen_frame + 0x1e4)));
          puVar12 = (undefined4 *)(*(undefined4 * PTR32 *)(gen_frame + 0x24))[3];
          (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = puVar12;
          F_0042c880(&(*(uint *)(gen_frame + 0x1e4)));
        } while (puVar12 != (undefined4 *)0x0);
      }
      uVar5 = F_00bc86e0((*(undefined * PTR32 *)(gen_frame + 0x14)),"report_itemList");
      uVar2 = 0;
      if (uVar5 != 0) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = (undefined4 *)((*(int *)(gen_frame + 0x20)) + 0xd8);
        uVar2 = F_00ad5470((undefined4 *)((*(int *)(gen_frame + 0x20)) + 0xd8),&(*(int *)(gen_frame + 0xc)),
                             *(undefined4 *)((*(int *)(gen_frame + 0x20)) + 0xd8),*(undefined4 *)((*(int *)(gen_frame + 0x20)) + 0xdc));
        puVar12 = *(undefined4 * PTR32 *)(uVar5 + 8);
        (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = puVar12;
        if (puVar12 != (undefined4 *)0x0) {
          pbVar3 = (byte *)*puVar12;
          pbVar7 = &REFG(undefined1, 0x10eaa34);
          do {
            bVar1 = *pbVar3;
            bVar15 = bVar1 < *pbVar7;
            if (bVar1 != *pbVar7) {
LAB_00ad2d27: ;
              uVar2 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
              goto LAB_00ad2d2c;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar3[1];
            bVar15 = bVar1 < pbVar7[1];
            if (bVar1 != pbVar7[1]) goto LAB_00ad2d27;
            pbVar3 = pbVar3 + 2;
            pbVar7 = pbVar7 + 2;
          } while (bVar1 != 0);
          uVar2 = 0;
LAB_00ad2d2c: ;
          if (uVar2 != 0) goto LAB_00ad2d30;
          do {
            puVar12 = (*(undefined4 * PTR32 *)(gen_frame + 0x24));
            F_0042b630(((undefined1 *)(gen_frame + 0x1e8)));
            for (puVar12 = (undefined4 *)puVar12[2]; puVar12 != (undefined4 *)0x0;
                puVar12 = (undefined4 *)puVar12[3]) {
              pbVar3 = (byte *)*puVar12;
              pbVar11 = &REFG(undefined1, 0x10eaa3c);
              pbVar7 = pbVar3;
              do {
                bVar1 = *pbVar7;
                bVar15 = bVar1 < *pbVar11;
                if (bVar1 != *pbVar11) {
LAB_00ad2da0: ;
                  iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                  goto LAB_00ad2da5;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar7[1];
                bVar15 = bVar1 < pbVar11[1];
                if (bVar1 != pbVar11[1]) goto LAB_00ad2da0;
                pbVar7 = pbVar7 + 2;
                pbVar11 = pbVar11 + 2;
              } while (bVar1 != 0);
              iVar4 = 0;
LAB_00ad2da5: ;
              if (iVar4 == 0) {
                for (puVar14 = (undefined4 *)puVar12[2]; puVar14 != (undefined4 *)0x0;
                    puVar14 = (undefined4 *)puVar14[3]) {
                  pbVar3 = (byte *)*puVar14;
                  pcVar8 = "mainCategoryId";
                  pbVar7 = pbVar3;
                  do {
                    bVar1 = *pbVar7;
                    bVar15 = bVar1 < (byte)*pcVar8;
                    if (bVar1 != *pcVar8) {
LAB_00ad2df0: ;
                      iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                      goto LAB_00ad2df5;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar7[1];
                    bVar15 = bVar1 < (byte)pcVar8[1];
                    if (bVar1 != pcVar8[1]) goto LAB_00ad2df0;
                    pbVar7 = pbVar7 + 2;
                    pcVar8 = pcVar8 + 2;
                  } while (bVar1 != 0);
                  iVar4 = 0;
LAB_00ad2df5: ;
                  if (iVar4 == 0) {
                    uVar2 = F_00c4c74c(puVar14[1]);
                    (*(uint *)(gen_frame + 0x1e0)) = uVar2;
                  }
                  else {
                    pcVar8 = "subCategoryId";
                    do {
                      bVar1 = *pbVar3;
                      bVar15 = bVar1 < (byte)*pcVar8;
                      if (bVar1 != *pcVar8) {
LAB_00ad2e31: ;
                        iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                        goto LAB_00ad2e36;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar3[1];
                      bVar15 = bVar1 < (byte)pcVar8[1];
                      if (bVar1 != pcVar8[1]) goto LAB_00ad2e31;
                      pbVar3 = pbVar3 + 2;
                      pcVar8 = pcVar8 + 2;
                    } while (bVar1 != 0);
                    iVar4 = 0;
LAB_00ad2e36: ;
                    if (iVar4 == 0) {
                      uVar2 = F_00c4c74c(puVar14[1]);
                      (*(uint *)(gen_frame + 0x1e4)) = uVar2;
                    }
                  }
                }
              }
              else {
                pbVar7 = &REFG(undefined1, 0x10eaa64);
                do {
                  bVar1 = *pbVar3;
                  bVar15 = bVar1 < *pbVar7;
                  if (bVar1 != *pbVar7) {
LAB_00ad2e80: ;
                    iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                    goto LAB_00ad2e85;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar3[1];
                  bVar15 = bVar1 < pbVar7[1];
                  if (bVar1 != pbVar7[1]) goto LAB_00ad2e80;
                  pbVar3 = pbVar3 + 2;
                  pbVar7 = pbVar7 + 2;
                } while (bVar1 != 0);
                iVar4 = 0;
LAB_00ad2e85: ;
                if (iVar4 == 0) {
                  F_0042e430(((undefined1 *)(gen_frame + 0x1e8)),puVar12[1]);
                }
              }
            }
            F_00ad6460((*(undefined4 * PTR32 *)(gen_frame + 0x1c)),&(*(uint *)(gen_frame + 0x1e0)));
            puVar12 = (undefined4 *)(*(undefined4 * PTR32 *)(gen_frame + 0x24))[3];
            (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = puVar12;
            uVar16 = F_0042c880(((undefined1 *)(gen_frame + 0x1e8)));
            uVar2 = (uint)uVar16;
          } while (puVar12 != (undefined4 *)0x0);
        }
        F_00c47745((*(uint *)(gen_frame + 0x2c8)) ^ (uint)(uint)(gen_frame + 0x2cc));
        return CONCAT31((int3)(uVar2 >> 8),1);
      }
    }
  }
LAB_00ad2d30: ;
  F_00c47745((*(uint *)(gen_frame + 0x2c8)) ^ (uint)(uint)(gen_frame + 0x2cc));
  return uVar2 & 0xffffff00;
}

/* ref: FUN_00ad2ef0 */
byte F_00ad2ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad2ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  byte local_5;
  
  local_5 = 0;
  if ((1 < param_1) ||
     ((piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 8), piVar1 != (int *)0x0 &&
      (*(int *)((int)this + param_1 * 4 + 0x18) == 1)))) {
    return 0;
  }
  if ((*(int *)((int)this + param_1 * 4 + 0x10) == 0) || (piVar1 == (int *)0x0)) {
    return 1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  if (*(char *)(uVar2 + 0x220) != '\0') {
    return 0;
  }
  uVar3 = F_00acf860(uVar2,param_2);
  if (0 < (int)uVar3) {
    F_00acf810(this,param_1,1);
    return 1;
  }
  if ((int)uVar3 < 0) {
    F_00acf810(this,param_1,1);
    return 0;
  }
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + param_1 * 4 + 0x10))) {
  case 1: ;
    if (param_3 != 0x10c) {
      return 0;
    }
    uVar2 = F_00ad1dd0(uVar2,param_2);
    local_5 = (byte)uVar2;
    break;
  default: ;
    goto switchD_00ad2fa2_caseD_2;
  case 3: ;
    if (param_3 != 0xe8) {
      return 0;
    }
    uVar2 = F_00ad2320(uVar2,param_2);
    local_5 = (byte)uVar2;
    break;
  case 4: ;
    if (param_3 != 0xb8) {
      return 0;
    }
    uVar2 = F_00ad12e0(uVar2,param_2);
    local_5 = (byte)uVar2;
    break;
  case 5: ;
    if (param_3 != 0xb8) {
      return 0;
    }
    return 0;
  case 6: ;
    if (param_3 != 0xb8) {
      return 0;
    }
    uVar2 = F_00ad1700(uVar2,param_2);
    local_5 = (byte)uVar2;
    break;
  case 7: ;
    if (param_3 != 0x174) {
      return 0;
    }
    uVar2 = F_00ad1850(uVar2,param_2);
    local_5 = (byte)uVar2;
    break;
  case 8: ;
    if (param_3 != 0xfc) {
      return 0;
    }
    local_5 = F_00acf980(uVar2,param_2);
    break;
  case 9: ;
  case 0xb: ;
    if (param_3 == 0xa8) {
      return 0;
    }
    return 0;
  case 10: ;
    if (param_3 != 0xb8) {
      return 0;
    }
    uVar2 = F_00ad1c60(uVar2,param_2);
    local_5 = (byte)uVar2;
  }
  if (local_5 != 0) {
    F_00acf810(this,param_1,1);
  }
switchD_00ad2fa2_caseD_2: ;
  return local_5;
}

/* ref: FUN_00ad30e0 */
uint F_00ad30e0(unsigned int gen_a0)
{
  GEN_ENTER(0xad30e0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  F_0042b630(in_ecx + 0x54);
  F_0042b630(in_ecx + 0xb8);
  F_0042b630(in_ecx + 0x10c);
  F_0042b630(in_ecx + 0x160);
  return in_ecx;
}

/* ref: FUN_00ad3120 */
uint F_00ad3120(unsigned int gen_a0)
{
  GEN_ENTER(0xad3120u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  return in_ecx;
}

/* ref: FUN_00ad3130 */
uint F_00ad3130(unsigned int gen_a0)
{
  GEN_ENTER(0xad3130u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  return in_ecx;
}

/* ref: FUN_00ad3140 */
uint F_00ad3140(unsigned int gen_a0)
{
  GEN_ENTER(0xad3140u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  return in_ecx;
}

/* ref: FUN_00ad3150 */
uint F_00ad3150(unsigned int gen_a0)
{
  GEN_ENTER(0xad3150u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  return in_ecx;
}

/* ref: FUN_00ad3160 */
uint F_00ad3160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3160u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ad31a0 */
uint F_00ad31a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad31a0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ad31d0 */
uint F_00ad31d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad31d0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ad3200 */
uint F_00ad3200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3200u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ad3230 */
uint F_00ad3230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3230u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ad3260 */
uint F_00ad3260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3260u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ad3290 */
uint F_00ad3290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3290u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ad32c0 */
uint F_00ad32c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad32c0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ad34a0 */
uint F_00ad34a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad34a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x1b8,param_2,0);
  return uVar1;
}

/* ref: FUN_00ad34d0 */
uint F_00ad34d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad34d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x68,param_2,0);
  return uVar1;
}

/* ref: FUN_00ad3500 */
uint F_00ad3500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3500u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x170,param_2,0);
  return uVar1;
}

/* ref: FUN_00ad3530 */
uint F_00ad3530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3530u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x58,param_2,0);
  return uVar1;
}

/* ref: FUN_00ad3560 */
uint F_00ad3560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3560u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x58,param_2,0);
  return uVar1;
}

/* ref: FUN_00ad3590 */
uint F_00ad3590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3590u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x5c,param_2,0);
  return uVar1;
}

/* ref: FUN_00ad35c0 */
uint F_00ad35c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad35c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x54,param_2,0);
  return uVar1;
}

/* ref: FUN_00ad3660 */
uint F_00ad3660(unsigned int gen_a0)
{
  GEN_ENTER(0xad3660u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3670 */
uint F_00ad3670(unsigned int gen_a0)
{
  GEN_ENTER(0xad3670u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3680 */
uint F_00ad3680(unsigned int gen_a0)
{
  GEN_ENTER(0xad3680u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3690 */
uint F_00ad3690(unsigned int gen_a0)
{
  GEN_ENTER(0xad3690u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad36a0 */
uint F_00ad36a0(unsigned int gen_a0)
{
  GEN_ENTER(0xad36a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad36b0 */
uint F_00ad36b0(unsigned int gen_a0)
{
  GEN_ENTER(0xad36b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad36c0 */
uint F_00ad36c0(unsigned int gen_a0)
{
  GEN_ENTER(0xad36c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad36d0 */
uint F_00ad36d0(unsigned int gen_a0)
{
  GEN_ENTER(0xad36d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad36e0 */
uint F_00ad36e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad36e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this,param_1);
  F_0042cbc0((undefined *)((int)this + 0x54),param_1 + 0x54);
  *(undefined4 *)((int)this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)((int)this + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  F_0042cbc0((undefined *)((int)this + 0xb8),param_1 + 0xb8);
  F_0042cbc0((undefined *)((int)this + 0x10c),param_1 + 0x10c);
  F_0042cbc0((undefined *)((int)this + 0x160),param_1 + 0x160);
  *(undefined4 *)((int)this + 0x1b4) = *(undefined4 *)(param_1 + 0x1b4);
  return (uint)this;
}

/* ref: FUN_00ad3780 */
uint F_00ad3780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  return (uint)this;
}

/* ref: FUN_00ad37a0 */
uint F_00ad37a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad37a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  return (uint)this;
}

/* ref: FUN_00ad37c0 */
uint F_00ad37c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad37c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_0042cbc0(this,param_1);
  return (uint)this;
}

/* ref: FUN_00ad37e0 */
uint F_00ad37e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad37e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  F_0042cbc0((undefined *)((int)this + 0x58),param_1 + 0x58);
  *(undefined4 *)((int)this + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  F_0042cbc0((undefined *)((int)this + 0xb4),param_1 + 0xb4);
  *(undefined4 *)((int)this + 0x108) = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)((int)this + 0x10c) = *(undefined4 *)(param_1 + 0x10c);
  *(undefined4 *)((int)this + 0x110) = *(undefined4 *)(param_1 + 0x110);
  return (uint)this;
}

/* ref: FUN_00ad3860 */
uint F_00ad3860(unsigned int gen_a0)
{
  GEN_ENTER(0xad3860u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3870 */
uint F_00ad3870(unsigned int gen_a0)
{
  GEN_ENTER(0xad3870u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3880 */
uint F_00ad3880(unsigned int gen_a0)
{
  GEN_ENTER(0xad3880u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3890 */
uint F_00ad3890(unsigned int gen_a0)
{
  GEN_ENTER(0xad3890u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad38a0 */
uint F_00ad38a0(unsigned int gen_a0)
{
  GEN_ENTER(0xad38a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad38b0 */
uint F_00ad38b0(unsigned int gen_a0)
{
  GEN_ENTER(0xad38b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad38c0 */
uint F_00ad38c0(unsigned int gen_a0)
{
  GEN_ENTER(0xad38c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad38d0 */
uint F_00ad38d0(unsigned int gen_a0)
{
  GEN_ENTER(0xad38d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad38e0 */
uint F_00ad38e0(unsigned int gen_a0)
{
  GEN_ENTER(0xad38e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad38f0 */
uint F_00ad38f0(unsigned int gen_a0)
{
  GEN_ENTER(0xad38f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3900 */
uint F_00ad3900(unsigned int gen_a0)
{
  GEN_ENTER(0xad3900u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3910 */
uint F_00ad3910(unsigned int gen_a0)
{
  GEN_ENTER(0xad3910u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3920 */
uint F_00ad3920(unsigned int gen_a0)
{
  GEN_ENTER(0xad3920u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3930 */
uint F_00ad3930(unsigned int gen_a0)
{
  GEN_ENTER(0xad3930u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3940 */
uint F_00ad3940(unsigned int gen_a0)
{
  GEN_ENTER(0xad3940u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3950 */
uint F_00ad3950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042ccf0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  return (uint)this;
}

/* ref: FUN_00ad3970 */
uint F_00ad3970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042ccf0(this,param_1);
  F_0042ccf0((undefined *)((int)this + 0x54),param_1 + 0x54);
  *(undefined4 *)((int)this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)((int)this + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  F_0042ccf0((undefined *)((int)this + 0xb8),param_1 + 0xb8);
  F_0042ccf0((undefined *)((int)this + 0x10c),param_1 + 0x10c);
  F_0042ccf0((undefined *)((int)this + 0x160),param_1 + 0x160);
  *(undefined4 *)((int)this + 0x1b4) = *(undefined4 *)(param_1 + 0x1b4);
  return (uint)this;
}

/* ref: FUN_00ad3a10 */
uint F_00ad3a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042ccf0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  return (uint)this;
}

/* ref: FUN_00ad3a30 */
uint F_00ad3a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042ccf0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  return (uint)this;
}

/* ref: FUN_00ad3a50 */
uint F_00ad3a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  F_0042ccf0((undefined *)((int)this + 8),param_1 + 2);
  return (uint)this;
}

/* ref: FUN_00ad3a80 */
uint F_00ad3a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_0042ccf0(this,param_1);
  return (uint)this;
}

/* ref: FUN_00ad3aa0 */
uint F_00ad3aa0(unsigned int gen_a0)
{
  GEN_ENTER(0xad3aa0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3ab0 */
uint F_00ad3ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xad3ab0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3ac0 */
uint F_00ad3ac0(unsigned int gen_a0)
{
  GEN_ENTER(0xad3ac0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3ad0 */
uint F_00ad3ad0(unsigned int gen_a0)
{
  GEN_ENTER(0xad3ad0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3ae0 */
uint F_00ad3ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xad3ae0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3af0 */
uint F_00ad3af0(unsigned int gen_a0)
{
  GEN_ENTER(0xad3af0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3b00 */
uint F_00ad3b00(unsigned int gen_a0)
{
  GEN_ENTER(0xad3b00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3b10 */
uint F_00ad3b10(unsigned int gen_a0)
{
  GEN_ENTER(0xad3b10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3ba0 */
uint F_00ad3ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad3ba0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    F_0042ccf0(this,iVar1);
    *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar1 + 0x54);
    iVar1 = iVar1 + 0x58;
    this = (undefined *)((int)this + 0x58);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ad3be0 */
uint F_00ad3be0(unsigned int gen_a0)
{
  GEN_ENTER(0xad3be0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3bf0 */
uint F_00ad3bf0(unsigned int gen_a0)
{
  GEN_ENTER(0xad3bf0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3c00 */
uint F_00ad3c00(unsigned int gen_a0)
{
  GEN_ENTER(0xad3c00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3c10 */
uint F_00ad3c10(unsigned int gen_a0)
{
  GEN_ENTER(0xad3c10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3c20 */
uint F_00ad3c20(unsigned int gen_a0)
{
  GEN_ENTER(0xad3c20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3c30 */
uint F_00ad3c30(unsigned int gen_a0)
{
  GEN_ENTER(0xad3c30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3c40 */
uint F_00ad3c40(unsigned int gen_a0)
{
  GEN_ENTER(0xad3c40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3c50 */
uint F_00ad3c50(unsigned int gen_a0)
{
  GEN_ENTER(0xad3c50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00ad3cc0 */
uint F_00ad3cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x58;
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

/* ref: FUN_00ad3d10 */
uint F_00ad3d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x1b8;
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

/* ref: FUN_00ad3d60 */
uint F_00ad3d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x68;
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

/* ref: FUN_00ad3db0 */
uint F_00ad3db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3db0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x170;
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

/* ref: FUN_00ad3e00 */
uint F_00ad3e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x58;
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

/* ref: FUN_00ad3e50 */
uint F_00ad3e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x58;
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

/* ref: FUN_00ad3ea0 */
uint F_00ad3ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x5c;
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

/* ref: FUN_00ad3ef0 */
uint F_00ad3ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x54;
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

/* ref: FUN_00ad3f30 */
uint F_00ad3f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad3f30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad3f40 */
byte F_00ad3f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00ad3f60 */
uint F_00ad3f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad3f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad3f70 */
byte F_00ad3f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00ad3f90 */
uint F_00ad3f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad3f90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad3fa0 */
byte F_00ad3fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00ad3fc0 */
uint F_00ad3fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad3fc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad3fd0 */
byte F_00ad3fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad3fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00ad3ff0 */
uint F_00ad3ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad3ff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad4000 */
byte F_00ad4000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00ad4020 */
uint F_00ad4020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad4030 */
byte F_00ad4030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00ad4050 */
uint F_00ad4050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad4060 */
byte F_00ad4060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00ad4080 */
unsigned int F_00ad4080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4080u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00ad36e0(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00ad40a0 */
unsigned int F_00ad40a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad40a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1,param_2);
    *(undefined4 *)((int)param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  }
  return 0;
}

/* ref: FUN_00ad40d0 */
unsigned int F_00ad40d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad40d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1,param_2);
    *(undefined4 *)((int)param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  }
  return 0;
}

/* ref: FUN_00ad4100 */
uint F_00ad4100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4100u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    uVar1 = F_0042cbc0(param_1 + 2,param_2 + 2);
  }
  return uVar1;
}

/* ref: FUN_00ad4130 */
unsigned int F_00ad4130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4130u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00ad4150 */
uint F_00ad4150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  F_00ad37e0((undefined *)((int)this + 8),param_1 + 2);
  F_0042cbc0((undefined *)((int)this + 0x11c),param_1 + 0x47);
  return (uint)this;
}

/* ref: FUN_00ad4190 */
uint F_00ad4190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4190u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    F_0042ccf0(this,iVar1);
    *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar1 + 0x54);
    iVar1 = iVar1 + 0x58;
    this = (undefined *)((int)this + 0x58);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ad41d0 */
uint F_00ad41d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad41d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  undefined * this;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != param_2) {
    puVar3 = (undefined4 *)((int)param_3 + 0xa8);
    this = param_3;
    puVar2 = param_1 + 0x2a;
    do {
      F_0042ccf0(this,puVar2 + -0x2a);
      F_0042ccf0(puVar3 + -0x15,puVar2 + -0x15);
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      puVar3[2] = puVar2[2];
      puVar3[3] = puVar2[3];
      F_0042ccf0(puVar3 + 4,puVar2 + 4);
      F_0042ccf0(puVar3 + 0x19,puVar2 + 0x19);
      F_0042ccf0(puVar3 + 0x2e,puVar2 + 0x2e);
      puVar3[0x43] = puVar2[0x43];
      puVar1 = puVar2 + 0x44;
      this = (undefined *)((int)this + 0x1b8);
      puVar3 = puVar3 + 0x6e;
      puVar2 = puVar2 + 0x6e;
    } while (puVar1 != param_2);
    return (uint)this;
  }
  return (uint)param_3;
}

/* ref: FUN_00ad4290 */
uint F_00ad4290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4290u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    F_0042ccf0(this,iVar1);
    *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar1 + 0x54);
    iVar1 = iVar1 + 0x58;
    this = (undefined *)((int)this + 0x58);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ad42d0 */
uint F_00ad42d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad42d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    F_0042ccf0(this,iVar1);
    *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar1 + 0x54);
    iVar1 = iVar1 + 0x58;
    this = (undefined *)((int)this + 0x58);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ad4310 */
uint F_00ad4310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xad4310u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_1;
  puVar2 = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    F_0042ccf0(puVar2 + 2,puVar1 + 2);
    puVar1 = puVar1 + 0x17;
    puVar2 = puVar2 + 0x17;
  } while (puVar1 != param_2);
  return (uint)puVar2;
}

/* ref: FUN_00ad4360 */
uint F_00ad4360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4360u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    F_0042ccf0(this,iVar1);
    iVar1 = iVar1 + 0x54;
    this = (undefined *)((int)this + 0x54);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00ad43a0 */
uint F_00ad43a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad43a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1;
    do {
      F_0042ccf0(this,iVar1);
      *(undefined4 *)((int)this + 0x54) =
           *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + 0x54 + (int)this)));
      iVar1 = iVar1 + 0x58;
      this = (undefined *)((int)this + 0x58);
    } while (iVar1 != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad43e0 */
unsigned int F_00ad43e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad43e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    *(undefined4 *)((int)param_2 + 0x54) = *(undefined4 *)(param_3 + 0x54);
  }
  return 0;
}

/* ref: FUN_00ad4410 */
unsigned int F_00ad4410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00ad36e0(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00ad4430 */
unsigned int F_00ad4430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    *(undefined4 *)((int)param_2 + 0x54) = *(undefined4 *)(param_3 + 0x54);
  }
  return 0;
}

/* ref: FUN_00ad4460 */
unsigned int F_00ad4460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    *(undefined4 *)((int)param_2 + 0x54) = *(undefined4 *)(param_3 + 0x54);
  }
  return 0;
}

/* ref: FUN_00ad4490 */
uint F_00ad4490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    uVar1 = F_0042cbc0(param_2 + 2,param_3 + 2);
  }
  return uVar1;
}

/* ref: FUN_00ad44c0 */
unsigned int F_00ad44c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad44c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00ad44f0 */
uint F_00ad44f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad44f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad4500 */
uint F_00ad4500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad4510 */
byte F_00ad4510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00ad4530 */
uint F_00ad4530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad4540 */
byte F_00ad4540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00ad4560 */
uint F_00ad4560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad4570 */
byte F_00ad4570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00ad4590 */
uint F_00ad4590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad45a0 */
byte F_00ad45a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad45a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00ad45c0 */
uint F_00ad45c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad45c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad45d0 */
byte F_00ad45d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad45d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00ad45f0 */
uint F_00ad45f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad45f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad4600 */
byte F_00ad4600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00ad4620 */
uint F_00ad4620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ad4630 */
byte F_00ad4630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xad4630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00ad4650 */
unsigned int F_00ad4650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    *(undefined4 *)((int)param_2 + 0x54) = *(undefined4 *)(param_3 + 0x54);
  }
  return 0;
}

/* ref: FUN_00ad4680 */
unsigned int F_00ad4680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00ad36e0(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00ad46a0 */
unsigned int F_00ad46a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad46a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00ad36e0(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00ad46c0 */
unsigned int F_00ad46c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad46c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    *(undefined4 *)((int)param_2 + 0x54) = *(undefined4 *)(param_3 + 0x54);
  }
  return 0;
}

/* ref: FUN_00ad46f0 */
unsigned int F_00ad46f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad46f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    *(undefined4 *)((int)param_2 + 0x54) = *(undefined4 *)(param_3 + 0x54);
  }
  return 0;
}

/* ref: FUN_00ad4720 */
unsigned int F_00ad4720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    *(undefined4 *)((int)param_2 + 0x54) = *(undefined4 *)(param_3 + 0x54);
  }
  return 0;
}

/* ref: FUN_00ad4750 */
unsigned int F_00ad4750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    *(undefined4 *)((int)param_2 + 0x54) = *(undefined4 *)(param_3 + 0x54);
  }
  return 0;
}

/* ref: FUN_00ad4780 */
uint F_00ad4780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    uVar1 = F_0042cbc0(param_2 + 2,param_3 + 2);
  }
  return uVar1;
}

/* ref: FUN_00ad47b0 */
uint F_00ad47b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad47b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    uVar1 = F_0042cbc0(param_2 + 2,param_3 + 2);
  }
  return uVar1;
}

/* ref: FUN_00ad47e0 */
unsigned int F_00ad47e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad47e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00ad4800 */
unsigned int F_00ad4800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4800u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_00ad4820 */
uint F_00ad4820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4820u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1;
    do {
      F_0042ccf0(this,iVar1);
      *(undefined4 *)((int)this + 0x54) =
           *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + 0x54 + (int)this)));
      iVar1 = iVar1 + 0x58;
      this = (undefined *)((int)this + 0x58);
    } while (iVar1 != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad4860 */
uint F_00ad4860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00ad41d0(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00ad4880 */
uint F_00ad4880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4880u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1;
    do {
      F_0042ccf0(this,iVar1);
      *(undefined4 *)((int)this + 0x54) =
           *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + 0x54 + (int)this)));
      iVar1 = iVar1 + 0x58;
      this = (undefined *)((int)this + 0x58);
    } while (iVar1 != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad48c0 */
uint F_00ad48c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad48c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1;
    do {
      F_0042ccf0(this,iVar1);
      *(undefined4 *)((int)this + 0x54) =
           *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + 0x54 + (int)this)));
      iVar1 = iVar1 + 0x58;
      this = (undefined *)((int)this + 0x58);
    } while (iVar1 != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00ad4900 */
uint F_00ad4900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4900u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00ad4310(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00ad4920 */
uint F_00ad4920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xad4920u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  this = param_3;
  for (iVar1 = param_1; iVar1 != param_2; iVar1 = iVar1 + 0x54) {
    F_0042ccf0(this,iVar1);
    this = (undefined *)((int)this + 0x54);
  }
  return (uint)this;
}

