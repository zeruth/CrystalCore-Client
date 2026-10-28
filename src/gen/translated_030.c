#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: Component::GUI2::AtkUnitBase::vf17 */
GEN_FRAME uint GEN_THISCALL F_0058cad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x58cad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  float fVar2;
  
  uVar1 = F_0055e750(((float)GEN_TOF((((float10)1 / (float10)*(float *)(this + 0x11c)) *
                              (float10)*(float *)(this + 0x118)))));
  fVar2 = *(float *)&REFG(undefined, 0x109fec8);
  if ((uVar1 != 1) && (fVar2 = REFG(float, 0x1087f04), uVar1 == 2)) {
    fVar2 = REFG(float, 0x109fec0);
  }
  uVar1 = F_00587df0(*(undefined4 *)(REFG(int, 0x1379860) + 0x14) GEN_EDX_ARG,this,fVar2,param_1);
  return uVar1;
}

/* ref: FUN_0058cb40 */
GEN_FRAME byte GEN_THISCALL F_0058cb40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x58cb40u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int * this_00;
  ushort uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = (*(int *)&gen_args[2]);
  if (((*(int *)&gen_args[2]) == 0) || ((*(int *)&gen_args[1]) == 0)) {
    return 0;
  }
  F_00587d10((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(int *)&gen_args[2]));
  *(uint *)(iVar3 + 0xf4) =
       *(uint *)(iVar3 + 0xf4) ^ (*(uint *)((*(int *)&gen_args[1]) + 0xf4) ^ *(uint *)(iVar3 + 0xf4)) & 0xf0000;
  *(byte *)(iVar3 + 0xf8) = *(byte *)(iVar3 + 0xf8) | 0x10;
  uVar1 = *(ushort *)(iVar3 + 0xf6);
  this_00 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + ((uVar1 & 0xf) + 2) * 0xc)));
  if ((char)(*(undefined4 *)&gen_args[3]) != '\0') {
    F_005cd980(this_00 GEN_EDX_ARG,&(*(int *)&gen_args[2]));
    *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) | 1;
    return 1;
  }
  puVar2 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)*this_00));
  if (puVar2 != (undefined4 *)*this_00) {
    F_005ce470(this_00 GEN_EDX_ARG,&(*(undefined4 *)&gen_args[3]),puVar2,&(*(int *)&gen_args[2]));
    *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) | 1;
    return 1;
  }
  F_005cd9e0(this_00 GEN_EDX_ARG,&(*(int *)&gen_args[2]));
  *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) | 1;
  return 1;
}

/* ref: FUN_0058cc00 */
GEN_FRAME uint GEN_THISCALL F_0058cc00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x58cc00u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int * this_00;
  int * piVar1;
  byte bVar2;
  uint in_EAX = 0;
  int * piVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  
  if (((*(int *)&gen_args[2]) == 0) || ((*(int *)&gen_args[1]) == 0)) {
    return in_EAX & 0xffffff00;
  }
  *(uint *)((*(int *)&gen_args[2]) + 0xf4) =
       *(uint *)((*(int *)&gen_args[2]) + 0xf4) ^ (*(uint *)((*(int *)&gen_args[1]) + 0xf4) ^ *(uint *)((*(int *)&gen_args[2]) + 0xf4)) & 0xf0000
  ;
  *(byte *)((*(int *)&gen_args[2]) + 0xf8) = *(byte *)((*(int *)&gen_args[2]) + 0xf8) | 0x10;
  this_00 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + ((*(ushort *)((*(int *)&gen_args[2]) + 0xf6) & 0xf) * 3 + 6) * 4)));
  piVar1 = (int *)*this_00;
  piVar3 = (int *)*piVar1;
  if (piVar3 != piVar1) {
    do {
      if ((*(char *)(piVar3[2] + 0x13a) == *(char *)((*(int *)&gen_args[1]) + 0x13a)) &&
         (((char)(*(undefined4 *)&gen_args[3]) != '\0' || (piVar3 = (int *)*piVar3, piVar3 != piVar1)))) {
        uVar4 = F_005ce470(this_00 GEN_EDX_FWD,&(*(int *)&gen_args[1]),piVar3,&(*(int *)&gen_args[2]));
        *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) | 1;
        return CONCAT31((int3)(uVar4 >> 8),1);
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != piVar1);
  }
  bVar2 = F_0058cb40((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(int *)&gen_args[1]),(*(int *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
  return CONCAT31(extraout_var,bVar2);
}

/* ref: FUN_0058ccd0 */
GEN_FRAME unsigned int GEN_THISCALL F_0058ccd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x58ccd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  if (*(int *)((int)this + 0xc4) == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc0) + 4))) + 8)));
  }
  *(int * PTR32 *)((int)this + 0xcc) = piVar4;
  if (piVar4 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x74))(piVar4 GEN_EDX_FWD);
    if ((((char)uVar2 != '\0') &&
        (uVar2 = F_0057f930(this GEN_EDX_ARG,*(undefined4 *)((int)this + 0xcc)), uVar2 != 0)) &&
       ((uVar3 = *(uint *)(uVar2 + 0xf4) >> 0x14 & 0xf, uVar3 == 3 || (uVar3 == 2)))) {
      F_00587d80(this GEN_EDX_ARG,uVar2);
      *(uint *)((int)this + 0xcc) = uVar2;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xcc) + 0xd4))))(*(int * PTR32 *)((int)this + 0xcc) GEN_EDX_ARG,1);
    if ((((char)param_1 != '\0') &&
        (this_00 = *(undefined * PTR32 *)((int)this + 0xcc), (*(byte *)((int)this_00 + 0xf9) & 1) != 0)) &&
       (((uVar2 = *(uint *)((int)this_00 + 0xf4) >> 0x14 & 0xf, uVar2 == 3 || (uVar2 == 2)) &&
        ((*(byte *)((int)this_00 + 0xf8) & 0x80) == 0)))) {
      iVar1 = *(int *)(REFG(int, 0x1379860) + 0x18);
      if (*(short *)(iVar1 + 0xc68) == 0) {
        F_005877e0(this_00 GEN_EDX_ARG,*(undefined4 *)(iVar1 + 0xc58));
        return;
      }
      F_005877e0(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar1 + 0x50 + *(short *)(iVar1 + 0xc68) * 0xc))));
    }
  }
  return;
}

/* ref: FUN_0058cdd0 */
GEN_NOFRAME uint GEN_THISCALL F_0058cdd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x58cdd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00a4b300(this GEN_EDX_FWD,0x800);
  *(undefined4 *)((int)this + 0x1c) = 0;
  uVar1 = F_004296a0(0x18,0,400);
  *(uint *)((int)this + 0x18) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x18) + 4))) = *(int *)((int)this + 0x18);
  *((int *)GEN_TOP((*(int *)((int)this + 0x18) + 8))) = *(int *)((int)this + 0x18);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x15))) = 1;
  *(undefined4 *)((int)this + 0x44) = 0;
  F_00a4b410(this GEN_EDX_ARG,0);
  *(undefined4 *)((int)this + 0x24) = 0xffffffff;
  *(undefined4 *)((int)this + 0x28) = 0xffffffff;
  *(undefined4 *)((int)this + 0x2c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x30) = 0xffffffff;
  *(undefined4 *)((int)this + 0x34) = 0xffffffff;
  *(undefined4 *)((int)this + 0x38) = 0xffffffff;
  *(undefined4 *)((int)this + 0x3c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x40) = 0xffffffff;
  return (uint)this;
}

/* ref: FUN_0058ce50 */
GEN_FRAME uint GEN_THISCALL F_0058ce50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x58ce50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00a4b3a0(this GEN_EDX_FWD);
  if (*(uint *)((int)this + 0x24) == uVar1) {
    *(undefined4 *)((int)this + 0x24) = 0xffffffff;
  }
  if (*(uint *)((int)this + 0x28) == uVar1) {
    *(undefined4 *)((int)this + 0x28) = 0xffffffff;
  }
  if (*(uint *)((int)this + 0x2c) == uVar1) {
    *(undefined4 *)((int)this + 0x2c) = 0xffffffff;
  }
  if (*(uint *)((int)this + 0x30) == uVar1) {
    *(undefined4 *)((int)this + 0x30) = 0xffffffff;
  }
  if (*(uint *)((int)this + 0x34) == uVar1) {
    *(undefined4 *)((int)this + 0x34) = 0xffffffff;
  }
  if (*(uint *)((int)this + 0x38) == uVar1) {
    *(undefined4 *)((int)this + 0x38) = 0xffffffff;
  }
  if (*(uint *)((int)this + 0x3c) == uVar1) {
    *(undefined4 *)((int)this + 0x3c) = 0xffffffff;
  }
  if (*(uint *)((int)this + 0x40) == uVar1) {
    *(undefined4 *)((int)this + 0x40) = 0xffffffff;
  }
  puVar2 = (undefined4 *)F_004296a0(0x18,0,400);
  *puVar2 = *(undefined4 *)((int)this + 0x18);
  puVar2[1] = *(undefined4 *)((int)this + 0x18);
  puVar2[2] = *(undefined4 *)((int)this + 0x18);
  *(undefined2 *)(puVar2 + 5) = 0;
  if (puVar2 + 3 != (uint *)0x0) {
    puVar2[3] = uVar1;
    puVar2[4] = param_1;
  }
  F_005cb640((undefined *)((int)this + 0x14) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),puVar2,0);
  *(uint *)(param_1 + 0x24) = uVar1;
  return uVar1;
}

/* ref: FUN_0058cf00 */
GEN_FRAME uint GEN_THISCALL F_0058cf00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x58cf00u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  uVar1 = (*(uint *)&gen_args[1]);
  if (0 < (int)(*(uint *)&gen_args[1])) {
    F_00a4b450((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(uint *)&gen_args[1]));
    F_005c60b0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)),&(*(uint *)&gen_args[1]));
    uVar1 = F_005c9640(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) GEN_EDX_ARG,&(*(uint *)&gen_args[1]),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  }
  return uVar1;
}

/* ref: FUN_0058cf50 */
GEN_FRAME unsigned int GEN_THISCALL F_0058cf50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x58cf50u, gen_a0, gen_a1, 0u, 0u);
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
  
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)));
  piVar6 = (int *)*piVar2;
  if (piVar6 != piVar2) {
    while (piVar6[4] != (*(int *)&gen_args[1])) {
      if (*(char *)((int)piVar6 + 0x15) == '\0') {
        piVar3 = (int *)piVar6[2];
        if (*(char *)((int)piVar3 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x15);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x15);
            piVar6 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar6[1] + 0x15);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
          while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
            cVar1 = *(char *)(piVar6[1] + 0x15);
            piVar5 = (int *)piVar6[1];
            piVar3 = piVar6;
          }
        }
      }
      if (piVar6 == piVar2) {
        return;
      }
    }
    iVar4 = piVar6[3];
    (*(int *)&gen_args[1]) = iVar4;
    F_00a4b450((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,iVar4);
    F_005c60b0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)),&(*(int *)&gen_args[1]));
    F_005c9640(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) GEN_EDX_ARG,&(*(int *)&gen_args[1]),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) == iVar4) {
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = 0xffffffff;
    }
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) == iVar4) {
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = 0xffffffff;
    }
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) == iVar4) {
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = 0xffffffff;
    }
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) == iVar4) {
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = 0xffffffff;
    }
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) == iVar4) {
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = 0xffffffff;
    }
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) == iVar4) {
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = 0xffffffff;
    }
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) == iVar4) {
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) = 0xffffffff;
    }
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) == iVar4) {
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = 0xffffffff;
    }
  }
  return;
}

/* ref: FUN_0058d050 */
GEN_NOFRAME uint GEN_THISCALL F_0058d050(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x58d050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  piVar5 = (int *)((int)this + 0x20);
  iVar4 = 2;
  do {
    iVar1 = piVar5[-1];
    if (iVar1 == 0) {
      uVar3 = 0;
      if (*piVar5 != 0) {
        uVar3 = F_005873b0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0xc) GEN_EDX_FWD,*piVar5);
        if (uVar3 == 0) goto LAB_0058d0b4;
      }
    }
    else if (iVar1 == 1) {
      uVar3 = 0;
      if (*piVar5 != 0) {
        uVar3 = F_005881e0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x2c) GEN_EDX_ARG,*piVar5);
        goto LAB_0058d0b4;
      }
    }
    else {
      uVar3 = iVar1 - 2;
      if ((uVar3 == 0) && (piVar2 = (int *)*piVar5, piVar2 != (int *)0x0)) {
        uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG);
LAB_0058d0b4: ;
        *piVar5 = 0;
      }
    }
    piVar5 = piVar5 + 3;
    iVar4 = iVar4 - 1;
    if (iVar4 == 0) {
      return uVar3;
    }
  } while( true );
}

/* ref: FUN_0058d140 */
GEN_NOFRAME uint GEN_THISCALL F_0058d140(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x58d140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x90)));
    if ((iVar1 != 0) && (pvVar2 = *(undefined * PTR32 *)(iVar1 + 0x80), pvVar2 != (undefined *)0x0)) {
      F_00583770(pvVar2 GEN_EDX_FWD,0x38,0,this,0);
    }
    iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x90)));
    if ((iVar1 != 0) && (pvVar2 = *(undefined * PTR32 *)(iVar1 + 0x80), pvVar2 != (undefined *)0x0)) {
      F_00583770(pvVar2 GEN_EDX_ARG,0x39,0,this,0);
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0x18))))(*(int * PTR32 *)((int)this + 0x10) GEN_EDX_ARG,0,0);
  }
  *(undefined1 *)((int)this + 0x1d) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  return uVar3;
}

/* ref: FUN_0058d1b0 */
GEN_NOFRAME uint GEN_THISCALL F_0058d1b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x58d1b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0d1c));
  if (*(int *)((int)this + 0x6c) != 0) {
    F_00583770(((undefined *)GEN_TOP((*(int *)((int)this + 0x6c) + 0x23c))) GEN_EDX_FWD,0x49,0,this,0);
    *(undefined4 *)((int)this + 0x6c) = 0;
  }
  uVar1 = F_0042c880((undefined *)((int)this + 0x14) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return (uint)uVar1;
}

/* ref: FUN_0058d1f0 */
GEN_FRAME uint GEN_THISCALL F_0058d1f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x58d1f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined * this_00;
  ulonglong uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a1924));
  this_00 = (undefined *)((int)this + 0xd0);
  iVar1 = 3;
  do {
    this_00 = (undefined *)((int)this_00 - 0x28);
    F_00580e00(this_00 GEN_EDX_FWD);
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  F_005ca2d0((undefined *)((int)this + 4) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 8),
               *(undefined4 * PTR32 *)((int)this + 8));
  uVar2 = F_00429760(*(undefined4 *)((int)this + 8),0x18,400);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return (uint)uVar2;
}

/* ref: FUN_0058d250 */
GEN_FRAME uint GEN_THISCALL F_0058d250(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x58d250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 8);
  puVar3 = (undefined4 *)*puVar2;
  while (puVar3 != puVar2) {
    iVar4 = puVar3[3];
    if (iVar4 != 0) {
      if (*(undefined * PTR32 *)(iVar4 + 0x80) != (undefined *)0x0) {
        F_00583770(*(undefined * PTR32 *)(iVar4 + 0x80) GEN_EDX_FWD,6,0,this,0);
      }
      if (*(undefined * PTR32 *)(iVar4 + 0x80) != (undefined *)0x0) {
        F_00583770(*(undefined * PTR32 *)(iVar4 + 0x80) GEN_EDX_ARG,7,0,this,0);
      }
      if (*(undefined * PTR32 *)(iVar4 + 0x80) != (undefined *)0x0) {
        F_00583770(*(undefined * PTR32 *)(iVar4 + 0x80) GEN_EDX_ARG,3,0,this,0);
      }
    }
    if (puVar3[4] != 0) {
      F_00406ad0(puVar3[4]);
      puVar3[4] = 0;
    }
    if (*(char *)((int)puVar3 + 0x15) == '\0') {
      puVar5 = (undefined4 *)puVar3[2];
      if (*(char *)((int)puVar5 + 0x15) == '\0') {
        cVar1 = *(char *)((int)*puVar5 + 0x15);
        puVar3 = puVar5;
        puVar5 = (undefined4 *)*puVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar5 + 0x15);
          puVar3 = puVar5;
          puVar5 = (undefined4 *)*puVar5;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar3[1] + 0x15);
        puVar6 = (undefined4 *)puVar3[1];
        puVar5 = puVar3;
        while ((puVar3 = puVar6, cVar1 == '\0' && (puVar5 == (undefined4 *)puVar3[2]))) {
          cVar1 = *(char *)((int)puVar3[1] + 0x15);
          puVar6 = (undefined4 *)puVar3[1];
          puVar5 = puVar3;
        }
      }
    }
  }
  F_005c8ad0((undefined *)((int)this + 4) GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined1 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined1 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  return 0;
}

/* ref: FUN_0058d370 */
GEN_FRAME uint GEN_THISCALL F_0058d370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x58d370u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  undefined * in_EAX = 0;
  
  iVar2 = (*(int *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if (((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))) == 0) && ((*(int *)&gen_args[1]) != 0)) &&
     (F_005cd500(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(int *)&gen_args[1])), in_EAX = (*(undefined * PTR32 *)(gen_frame + 0x8)),
     (*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))))) {
    iVar1 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10);
    in_EAX = (undefined *)F_00588780((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(uint)*(byte *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0xc),
                                  iVar2,iVar1,0,0);
  }
  return (uint)in_EAX;
}

/* ref: FUN_0058d400 */
GEN_FRAME uint GEN_THISCALL F_0058d400(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x58d400u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  
  for (puVar1 = ((undefined4 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))));
      puVar1 != *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))); puVar1 = (undefined4 *)*puVar1) {
    iVar3 = puVar1[2];
    if (*(int *)(iVar3 + 4) == (*(int *)&gen_args[1])) goto LAB_0058d421;
  }
  iVar3 = 0;
LAB_0058d421: ;
  uVar2 = F_00588cd0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(int *)&gen_args[1]),iVar3,0);
  return uVar2;
}

/* ref: FUN_0058d440 */
GEN_FRAME uint GEN_THISCALL F_0058d440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x58d440u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  
  for (puVar1 = ((undefined4 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))));
      puVar1 != *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))); puVar1 = (undefined4 *)*puVar1) {
    iVar3 = puVar1[2];
    if (*(int *)(iVar3 + 0x14) == (*(int *)&gen_args[1])) goto LAB_0058d461;
  }
  iVar3 = 0;
LAB_0058d461: ;
  uVar2 = F_00588cd0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(int *)&gen_args[1]),iVar3,0);
  return uVar2;
}

/* ref: FUN_0058d480 */
GEN_NOFRAME uint GEN_THISCALL F_0058d480(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x58d480u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10a1934));
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[9] = 0xffffffff;
  in_ecx[10] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_0058d4b0 */
GEN_NOFRAME uint GEN_THISCALL F_0058d4b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x58d4b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a1934));
  F_0058cf50(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x28) GEN_EDX_FWD,this);
  F_0056c5f0(this GEN_EDX_ARG);
  uVar2 = F_00573eb0(((undefined *)(uint)(this)) GEN_EDX_ARG);
  iVar1 = *(int *)((int)this + 0x14);
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,((*(int *)((int)this + 0x1c) - iVar1) / 0x14) * 0x14,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0964));
  return uVar2;
}

/* ref: FUN_0058d530 */
GEN_FRAME uint GEN_THISCALL F_0058d530(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x58d530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  uint uVar1;
  
  this_00 = *(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x28);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)((int)this + 0x24);
  uVar1 = F_005cd5c0((undefined *)((int)this_00 + 0x14) GEN_EDX_FWD,&(*(int *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)));
  if ((*(int *)(gen_frame + 0x4)) == *(int *)((int)this_00 + 0x18)) {
    uVar1 = F_0058ce50(this_00 GEN_EDX_ARG,this);
    *(uint *)((int)this + 0x24) = uVar1;
    uVar1 = *(uint *)(REFG(int, 0x1379860) + 0x28);
    *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(uVar1 + 0x44);
    *(undefined4 *)((int)this + 4) = 1;
  }
  return uVar1;
}

/* ref: FUN_0058d590 */
GEN_NOFRAME uint GEN_THISCALL F_0058d590(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x58d590u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if (*(int *)((int)this + 0x98) != 0) {
    F_0058c5d0(((undefined *)GEN_TOP((*(int *)((int)this + 0x98) + 4))) GEN_EDX_FWD);
  }
  iVar1 = *(int *)((int)this + 0xac);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) & 0xffefffff;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x80;
  }
  *(undefined4 *)((int)this + 0x88) = 0xffffffff;
  *(undefined4 *)((int)this + 0x84) = 0xffffffff;
  return 0xffffffff;
}

/* ref: Component::GUI2::AtkComponentTab::vf23 */
GEN_FRAME uint GEN_THISCALL F_0058d5e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x58d5e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  if (this == (undefined *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(this + 0x70);
  }
  uVar2 = F_005885a0(param_1 + 0x10,*(undefined4 *)(iVar1 + 8),this);
  return uVar2;
}

/* ref: Component::GUI2::AtkComponentRadioButton::vf23 */
GEN_FRAME uint GEN_THISCALL F_0058d610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x58d610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  if (this == (undefined *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(this + 0x70);
  }
  uVar2 = F_005885a0(param_1 + 4,*(undefined4 *)(iVar1 + 8),this);
  return uVar2;
}

/* ref: Component::GUI2::AtkComponentList::vf7 */
GEN_FRAME unsigned int GEN_THISCALL F_0058d640(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x58d640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  undefined * pvVar1;
  ushort uVar2;
  uint uVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  
  if (((byte)this[0x66] & 1) != 0) {
    if (this[0x123] != (undefined1)0x0) {
      *(undefined2 *)(this + 0x30) = *((undefined2 *)GEN_TOP((*(int *)(REFG(int, 0x1379860) + 0x14) + 0x19e)));
    }
    if ((((((byte)this[0x60] & 1) != 0) && (*(int *)(this + 0x24) == 3)) &&
        (*(int *)(this + 0xc) != 0)) && (*((int *)GEN_TOP((*(int *)(this + 0xc) + 4))) != 0)) {
      F_005715d0(*(undefined * PTR32 *)(this + 0x38) GEN_EDX_FWD,this + 4,this);
    }
    pvVar1 = *(undefined * PTR32 *)(this + 0x90);
    if (pvVar1 != (undefined *)0x0) {
      (*(float *)(gen_frame + 0xac)) = *(float *)((int)pvVar1 + 0x30);
      (*(float *)(gen_frame + 0xb0)) = *(float *)((int)pvVar1 + 0x34);
    }
    fVar4 = REFG(float, 0x1087f04);
    if (this[0x125] != (undefined1)0x0) {
      fVar4 = REFG(float, 0x10928e4);
    }
    (*(float *)(gen_frame + 0xb4)) = fVar4;
    uVar2 = F_00568270(pvVar1 GEN_EDX_ARG);
    (*(uint *)(gen_frame + 0xb8)) = (uint)uVar2;
    (*(float *)(gen_frame + 0x9c)) = (float)((float10)uVar2 * (float10)(*(float *)(gen_frame + 0xb4)) + (float10)(*(float *)(gen_frame + 0xac)));
    uVar2 = F_005682d0(pvVar1 GEN_EDX_ARG);
    (*(uint *)(gen_frame + 0xb8)) = (uint)uVar2;
    (*(float *)(gen_frame + 0xa0)) = (float)((float10)uVar2 + (float10)(*(float *)(gen_frame + 0xb0)));
    F_00c48350(((byte *)(gen_frame + 0xc)),0,0x88);
    iVar6 = (int)(*(float *)(gen_frame + 0xac));
    iVar7 = *(int *)(REFG(int, 0x1379860) + 4);
    iVar5 = (*(ushort *)(this + 0x30) & 0x3ff) * -0x40 + 0xffff;
    *((int *)GEN_TOP((*(int *)(iVar7 + 4) + 0x70))) = iVar5;
    pvVar1 = *(undefined * PTR32 *)(iVar7 + 4);
    (*(int *)(gen_frame + 0xa4)) = iVar5;
    uVar3 = F_005bfe10(pvVar1 GEN_EDX_ARG,2,0x1c,0);
    if (uVar3 != 0) {
      *(byte *)((int)pvVar1 + 0xa4) = *(byte *)((int)pvVar1 + 0xa4) | 2;
      *(int *)(uVar3 + 0xc) = iVar6;
      *(int *)(uVar3 + 0x10) = (int)(*(float *)(gen_frame + 0xb0));
      *(int *)(uVar3 + 0x14) = (int)(*(float *)(gen_frame + 0x9c));
      *(int *)(uVar3 + 0x18) = (int)(*(float *)(gen_frame + 0xa0));
      *(undefined4 *)(uVar3 + 8) = 1;
      F_005bfeb0(pvVar1 GEN_EDX_ARG,uVar3);
    }
    (*(int *)(gen_frame + 0xa8)) = (uint)*(ushort *)(this + 0xee) * *(int *)(this + 0xb0);
    iVar7 = 0;
    uVar3 = (uint)(*(int *)(this + 0xb8) != 0) + (uint)*(ushort *)(this + 0xe8);
    if (uVar3 != 0) {
      (*(uint *)(gen_frame + 0xb8)) = uVar3;
      do {
        (*(float *)(gen_frame + 0xb4)) = 0.0;
        if (*(short *)(this + 0xee) != 0) {
          do {
            fVar4 = 0.0;
            iVar5 = (*(int *)(gen_frame + 0xa8)) + iVar7;
            iVar7 = iVar7 + 1;
            if (-1 < iVar5) {
              if (*(int *)(this + 0xac) <= iVar5) break;
              iVar6 = *((int *)GEN_TOP((*(int *)(this + 0x98) + iVar5 * 8)));
              *(undefined2 *)(iVar6 + 0x30) = *(undefined2 *)(this + 0x30);
              if (*(int *)(this + 0xd0) == iVar5) {
                iVar5 = *(int *)(iVar6 + 0x70);
                if (iVar5 == 0) {
                  fVar8 = 0.0;
                }
                else {
                  fVar8 = *(float *)(iVar5 + 0x3c);
                  fVar4 = *(float *)(iVar5 + 0x38);
                }
                F_00589920(iVar6 GEN_EDX_ARG,(uint)(ushort)((short)(int)fVar4 - 3),
                             (uint)(ushort)((short)(int)fVar8 - 2));
                if ((((*(byte *)(iVar6 + 0x60) & 1) != 0) && (*(int *)(iVar6 + 0x24) == 3)) &&
                   ((*(int *)(iVar6 + 0xc) != 0 && (*((int *)GEN_TOP((*(int *)(iVar6 + 0xc) + 4))) != 0)))) {
                  F_005715d0(*(undefined * PTR32 *)(iVar6 + 0x38) GEN_EDX_ARG,iVar6 + 4,iVar6);
                }
                iVar5 = *(int *)(iVar6 + 0x70);
                if (iVar5 == 0) {
                  fVar4 = 0.0;
                  fVar8 = 0.0;
                }
                else {
                  fVar4 = *(float *)(iVar5 + 0x3c);
                  fVar8 = *(float *)(iVar5 + 0x38);
                }
                F_00589920(iVar6 GEN_EDX_ARG,(uint)(ushort)((short)(int)fVar8 + 3),
                             (uint)(ushort)((short)(int)fVar4 + 2));
              }
              else if ((((*(byte *)(iVar6 + 0x60) & 1) != 0) && (*(int *)(iVar6 + 0x24) == 3)) &&
                      ((*(int *)(iVar6 + 0xc) != 0 && (*((int *)GEN_TOP((*(int *)(iVar6 + 0xc) + 4))) != 0))))
              {
                F_005715d0(*(undefined * PTR32 *)(iVar6 + 0x38) GEN_EDX_ARG,iVar6 + 4,iVar6);
              }
            }
            fVar4 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0xb4))) + 1);
            (*(float *)(gen_frame + 0xb4)) = fVar4;
          } while ((int)gen_fl2bits(fVar4) < (int)(uint)*(ushort *)(this + 0xee));
        }
        uVar3 = (*(uint *)(gen_frame + 0xb8)) - 1;
        (*(uint *)(gen_frame + 0xb8)) = uVar3;
      } while (uVar3 != 0);
    }
    iVar7 = *(int *)(REFG(int, 0x1379860) + 4);
    *((int *)GEN_TOP((*(int *)(iVar7 + 4) + 0x70))) = (*(int *)(gen_frame + 0xa4));
    pvVar1 = *(undefined * PTR32 *)(iVar7 + 4);
    uVar3 = F_005bfe10(pvVar1 GEN_EDX_ARG,2,0x1c,0);
    if (uVar3 != 0) {
      *(byte *)((int)pvVar1 + 0xa4) = *(byte *)((int)pvVar1 + 0xa4) & 0xfd;
      *(int *)(uVar3 + 0xc) = (int)(*(float *)(gen_frame + 0xac));
      *(int *)(uVar3 + 0x10) = (int)(*(float *)(gen_frame + 0xb0));
      *(int *)(uVar3 + 0x14) = (int)(*(float *)(gen_frame + 0x9c));
      *(int *)(uVar3 + 0x18) = (int)(*(float *)(gen_frame + 0xa0));
      *(undefined4 *)(uVar3 + 8) = 0;
      F_005bfeb0(pvVar1 GEN_EDX_ARG,uVar3);
    }
  }
  return;
}

/* ref: FUN_0058d980 */
GEN_FRAME uint GEN_THISCALL F_0058d980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x58d980u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint * puVar1;
  code * pcVar2;
  double dVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  short sVar10;
  short sVar11;
  bool bVar12;
  float10 fVar13;
  undefined4 uVar14;
  
  F_005741a0(param_1 GEN_EDX_FWD,param_2);
  param_1[0x2b] = (int)(short)param_2;
  if ((int)(short)param_2 <= param_1[0x30]) {
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x74))(param_1 GEN_EDX_ARG,0xfffffffe,0);
    param_1[0x30] = -1;
  }
  dVar4 = (GEN_X87MATH(((double)((float)GEN_TOF(((float10)param_1[0x2b] / (float10)*(ushort *)((int)param_1 + 0xee))))),0xe));
  sVar11 = (short)(int)dVar4;
  if ((param_1[0x22] == 0) ||
     ((int)sVar11 + (int)(short)(ushort)(*(short *)((int)param_1 + 0x10e) != 0) <=
      (int)(uint)*(ushort *)(param_1 + 0x3a))) {
    cVar6 = '\0';
  }
  else {
    cVar6 = '\x01';
  }
  *(char *)(param_1 + 0x45) = cVar6;
  if (cVar6 == '\0') {
    iVar7 = 0;
  }
  else {
    iVar7 = (int)sVar11 - (uint)*(ushort *)(param_1 + 0x3a);
  }
  param_1[0x2f] = iVar7;
  if ((iVar7 < param_1[0x2c]) && (param_1[0x2c] = iVar7, param_1[0x2e] != 0)) {
    pcVar2 = *(gen_code32 *)(*param_1 + 0x80);
    param_1[0x2e] = 0;
    (*pcVar2)(param_1);
  }
  if (*(char *)((int)param_1 + 0x11b) != '\0') {
    if ((((char)param_1[0x47] == '\0') || (sVar11 == 0)) ||
       ((uint)*(ushort *)(param_1 + 0x3a) == (int)sVar11)) {
      if ((char)param_1[0x45] != '\0') {
        sVar10 = (short)param_1[0x41];
        goto LAB_0058db07;
      }
      if ((sVar11 != 0) && (sVar11 <= *(short *)((int)param_1 + 0xfa))) {
        sVar10 = (short)param_1[0x41] -
                 (*(short *)((int)param_1 + 0xfa) - sVar11) * *(short *)(param_1[0x21] + 0x206);
        goto LAB_0058db07;
      }
    }
    else {
      sVar10 = (short)param_1[0x41] -
               (*(short *)((int)param_1 + 0xfa) - sVar11) * *(short *)(param_1[0x21] + 0x206);
LAB_0058db07: ;
      if (param_1[0x1c] != 0) {
        *(short *)(param_1[0x1c] + 0x7e) = sVar10;
      }
      uVar9 = param_1[0x1c];
      if (uVar9 != 0) {
        F_0057f1a0(uVar9,(uint)*(ushort *)(uVar9 + 0x7c),(uint)*(ushort *)(uVar9 + 0x7e),
                     (uint)*(ushort *)(uVar9 + 0x7c),(uint)*(ushort *)(uVar9 + 0x7e),1);
      }
    }
    if ((char)param_1[0x47] != '\0') {
      iVar7 = param_1[0x1c];
      if (iVar7 == 0) {
        sVar10 = 0;
      }
      else {
        sVar10 = *(short *)(iVar7 + 0x7e);
      }
      iVar8 = (int)(short)(((short)param_1[0x41] + (short)param_1[0x40]) - sVar10);
      if (iVar7 != 0) {
        if (((*(uint *)(iVar7 + 0x88) & 1) == 0) &&
           (fVar13 = (float10)iVar8, bVar12 = GEN_ISNAN((float10)*(float *)(iVar7 + 0x3c)) || GEN_ISNAN(fVar13),
           bVar12 == (bVar12 || (float10)*(float *)(iVar7 + 0x3c) == fVar13))) {
          *(uint *)(iVar7 + 0x88) = *(uint *)(iVar7 + 0x88) | 1;
        }
        *(float *)(iVar7 + 0x3c) = (float)iVar8;
      }
    }
  }
  if (param_1[0x22] != 0) {
    if (((char)param_1[0x45] == '\0') && (*(char *)((int)param_1 + 0x116) != '\0')) {
      iVar7 = 0;
    }
    else {
      iVar7 = 1;
    }
    iVar8 = *(int *)(param_1[0x22] + 0x70);
    if (iVar8 != 0) {
      *(uint *)(iVar8 + 0x84) =
           *(uint *)(iVar8 + 0x84) ^ (iVar7 << 0x14 ^ *(uint *)(iVar8 + 0x84)) & 0x100000;
      *(uint *)(iVar8 + 0x88) =
           *(uint *)(iVar8 + 0x88) ^
           ((uint)((char)iVar7 == '\0') << 7 ^ *(uint *)(iVar8 + 0x88)) & 0x80;
    }
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)param_1[0x22] + 0x28))
              ((int *)param_1[0x22] GEN_EDX_ARG,(uint)*(byte *)(param_1 + 0x45));
    if ((param_1[0x22] != 0) && (iVar7 = *(int *)(param_1[0x22] + 0x70), iVar7 != 0)) {
      puVar1 = (uint *)(iVar7 + 0x84);
      *puVar1 = *puVar1 & 0xfdffffff;
    }
    if ((char)param_1[0x45] != '\0') {
      if (*(char *)((int)param_1 + 0x112) == '\0') {
        sVar11 = *(short *)((int)param_1 + 0xea) * sVar11;
      }
      else {
        sVar11 = (short)param_1[0x3b] * (short)param_1[0x2f];
      }
      F_00589f20((undefined *)param_1[0x22] GEN_EDX_ARG,(int)*(short *)((int)param_1 + 0x10e) + (int)sVar11);
    }
    F_0057ac30(param_1 GEN_EDX_ARG,param_1[0x2c]);
  }
  uVar9 = F_005615f0(param_1 GEN_EDX_ARG);
  if (((((char)uVar9 != '\0') && (param_1[0x2b] != 0)) && (param_1[0x33] == -2)) &&
     (cVar6 = (char)param_1[0x20], -1 < cVar6)) {
    if (cVar6 < '\x03') {
      uVar14 = 1;
      uVar5 = 0;
    }
    else {
      if (cVar6 != '\x03') goto LAB_0058dcda;
      uVar14 = 0;
      uVar5 = 0xffffffff;
    }
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x74))(param_1 GEN_EDX_ARG,uVar5,uVar14);
  }
LAB_0058dcda: ;
  pcVar2 = *(gen_code32 *)(*param_1 + 0x80);
  *(undefined1 *)((int)param_1 + 0x11d) = 1;
  uVar9 = (*pcVar2)(param_1);
  return uVar9;
}

/* ref: FUN_0058dd00 */
GEN_FRAME unsigned int GEN_THISCALL F_0058dd00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x58dd00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  uint uVar6;
  
  if ((*(int *)((int)this + 0x9c) != 0) &&
     (piVar5 = *(int * PTR32 *)((int)this + 0x98), piVar5 != (int *)0x0)) {
    uVar1 = *((ushort *)GEN_TOP((*(int *)((int)this + 0x84) + 0x200)));
    iVar4 = 0;
    uVar6 = (uint)*((short *)GEN_TOP((*(int *)((int)this + 0x84) + 0x202)));
    if (0 < *(int *)((int)this + 0x9c)) {
      do {
        F_00589920(*piVar5 GEN_EDX_FWD,(uint)uVar1,uVar6);
        if ((*piVar5 == 0) || (iVar2 = *(int *)(*piVar5 + 0x70), iVar2 == 0)) {
          uVar3 = 0;
        }
        else {
          uVar3 = (uint)*(ushort *)(iVar2 + 0x7e);
        }
        iVar4 = iVar4 + 1;
        uVar6 = uVar6 + uVar3;
        piVar5 = piVar5 + 2;
      } while (iVar4 < *(int *)((int)this + 0x9c));
    }
  }
  return;
}

/* ref: FUN_0058dd80 */
GEN_FRAME unsigned int GEN_THISCALL F_0058dd80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x58dd80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  undefined * this_00;
  uint uVar2;
  int * piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint local_10;
  uint local_c;
  byte local_5;
  
  uVar6 = 0;
  local_5 = 0;
  if (*(int *)((int)this + 0xc) == 0) {
    local_c = 0;
  }
  else {
    local_c = (uint)*(ushort *)((int)this + 0x1a) + *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
  }
  if (local_c != 0) {
    do {
      uVar2 = F_00578ee0((undefined *)((int)this + 4) GEN_EDX_FWD,uVar6);
      if (((uVar2 != 0) && (999 < *(ushort *)(uVar2 + 0x18))) &&
         (this_00 = *(undefined * PTR32 *)(uVar2 + 0x8c), this_00 != (undefined *)0x0)) {
        if ((((*(byte *)((int)this_00 + 0x60) & 1) != 0) &&
            ((*(byte *)((int)this_00 + 0x60) & 4) != 0)) &&
           ((*(char *)((int)this_00 + 0x1c) == '\x01' &&
            (*((char *)GEN_TOP((*(int *)((int)this_00 + 0xc) + 0xf))) == '\x0e')))) {
          local_5 = local_5 + 1;
          F_00574490(this GEN_EDX_ARG,this_00);
          if (*(int *)((int)this_00 + 0x70) != 0) {
            puVar1 = ((uint *)GEN_TOP((*(int *)((int)this_00 + 0x70) + 0x84)));
            *puVar1 = *puVar1 & 0xdfffffff;
          }
          if (*(int *)((int)this_00 + 0x70) != 0) {
            puVar1 = ((uint *)GEN_TOP((*(int *)((int)this_00 + 0x70) + 0x84)));
            *puVar1 = *puVar1 | 0x2000000;
          }
          F_005898b0(this_00 GEN_EDX_ARG,(int)this_00 + 4);
          *(uint *)((int)this_00 + 100) =
               *(uint *)((int)this_00 + 100) ^
               ((uint)(*(short *)((int)this_00 + 0x20c) != 0) << 0x11 ^
               *(uint *)((int)this_00 + 100)) & 0x20000;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < local_c);
  }
  *(byte *)((int)this + 0x110) = local_5;
  piVar3 = (int *)F_00404270();
  uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,(uint)local_5 * 0xc,0x10);
  *(uint *)((int)this + 0xa0) = uVar6;
  local_5 = 0;
  local_10 = 0;
  if (local_c != 0) {
    do {
      if (((*(byte *)((int)this + 0x60) & 1) != 0) &&
         (iVar4 = *(int *)((int)this + 0xc), iVar4 != 0)) {
        if (local_10 < *(uint *)(iVar4 + 4)) {
          iVar4 = *((int *)GEN_TOP((*(int *)(iVar4 + 8) + local_10 * 4)));
LAB_0058def5: ;
          if (((((iVar4 != 0) && (999 < *(ushort *)(iVar4 + 0x18))) &&
               (iVar4 = *(int *)(iVar4 + 0x8c), iVar4 != 0)) &&
              (((*(byte *)(iVar4 + 0x60) & 1) != 0 && ((*(byte *)(iVar4 + 0x60) & 4) != 0)))) &&
             ((*(char *)(iVar4 + 0x1c) == '\x01' &&
              (*((char *)GEN_TOP((*(int *)(iVar4 + 0xc) + 0xf))) == '\x0e')))) {
            iVar5 = (uint)local_5 * 0xc;
            *((undefined2 *)GEN_TOP((iVar5 + 8 + *(int *)((int)this + 0xa0)))) = 0;
            if (*(int *)(iVar4 + 0x70) == 0) {
              uVar6 = 0;
            }
            else {
              uVar6 = *((uint *)GEN_TOP((*(int *)(iVar4 + 0x70) + 4)));
              if (10000 < uVar6) {
                uVar6 = uVar6 / 10000;
              }
            }
            local_5 = local_5 + 1;
            *((short *)GEN_TOP((iVar5 + 10 + *(int *)((int)this + 0xa0)))) = (short)uVar6;
            *((int *)GEN_TOP((iVar5 + *(int *)((int)this + 0xa0)))) = iVar4;
          }
        }
        else {
          iVar4 = local_10 - *(uint *)(iVar4 + 4);
          for (piVar3 = *(int * PTR32 *)((int)this + 0x4c); piVar3 != *(int * PTR32 *)((int)this + 0x50);
              piVar3 = piVar3 + 1) {
            iVar5 = iVar4 - ((int *)*piVar3)[1];
            if (iVar5 < 0) {
              iVar4 = iVar4 * 0x90 + *(int *)*piVar3;
              goto LAB_0058def5;
            }
            iVar4 = iVar5;
          }
        }
      }
      local_10 = local_10 + 1;
    } while (local_10 < local_c);
  }
  return 0;
}

/* ref: Component::GUI2::AtkComponentList::vf32 */
GEN_FRAME unsigned int GEN_THISCALL F_0058dfa0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x58dfa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  short sVar8;
  uint uVar9;
  int local_10;
  int local_c;
  int local_8;
  
  if (*(int *)(this + 0x98) != 0) {
    sVar8 = *((short *)GEN_TOP((*(int *)(this + 0x84) + 0x200)));
    sVar6 = *((short *)GEN_TOP((*(int *)(this + 0x84) + 0x202)));
    if (this[0x112] == (undefined1)0x0) {
      sVar8 = sVar8 - *(short *)(this + 0xb8);
    }
    else {
      sVar6 = sVar6 - *(short *)(this + 0xb8);
    }
    uVar2 = (uint)*(ushort *)(this + 0xee);
    iVar4 = *(int *)(this + 0xb0) * uVar2;
    local_8 = 0;
    iVar5 = (uint)(*(int *)(this + 0xb8) != 0) + (uint)*(ushort *)(this + 0xe8);
    local_10 = 0;
    if (iVar5 != 0) {
      do {
        uVar9 = (uint)*(ushort *)(this + 0xea) * local_10 + (int)sVar8;
        uVar7 = (uint)*(ushort *)(this + 0xec) * local_10 + (int)sVar6;
        local_c = 0;
        if (uVar2 != 0) {
          do {
            iVar3 = iVar4 + local_8;
            local_8 = local_8 + 1;
            if (-1 < iVar3) {
              if (*(int *)(this + 0xac) <= iVar3) {
                return;
              }
              piVar1 = ((int *)GEN_TOP((*(int *)(this + 0x98) + iVar3 * 8)));
              F_00589920(*piVar1 GEN_EDX_FWD,uVar9,uVar7);
              *(int *)(*piVar1 + 0x1fc) = iVar3;
              uVar9 = uVar9 + *(ushort *)(this + 0xf0);
              uVar7 = uVar7 + *(ushort *)(this + 0xf2);
            }
            uVar2 = (uint)*(ushort *)(this + 0xee);
            local_c = local_c + 1;
          } while (local_c < (int)uVar2);
        }
        local_10 = local_10 + 1;
      } while (local_10 < iVar5);
    }
  }
  return;
}

/* ref: FUN_0058e100 */
GEN_FRAME uint GEN_THISCALL F_0058e100(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x58e100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint * puVar1;
  int * piVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  uint * puVar6;
  int iVar7;
  uint uVar8;
  float10 fVar9;
  
  uVar4 = 0;
  if ((this != (undefined *)0x0) && (*(int *)((int)this + 0x70) != 0)) {
    uVar4 = *((ushort *)GEN_TOP((*(int *)((int)this + 0x70) + 0x7e)));
  }
  uVar8 = (uint)uVar4;
  uVar5 = *(uint *)((int)this + 0x150);
  *(bool *)((int)this + 0x114) = uVar8 < uVar5;
  if (uVar8 < uVar5) {
    uVar5 = uVar5 - uVar8;
  }
  else {
    uVar5 = 0;
  }
  uVar4 = *(ushort *)((int)this + 0xb8);
  puVar1 = (uint *)((int)this + 0x154);
  *puVar1 = uVar5;
  piVar2 = (int *)((int)this + 0xb8);
  (*(uint *)(gen_frame + 0x4)) = uVar5 & 0xffff;
  (*(uint *)(gen_frame + 0x0)) = 0;
  (*(uint *)(gen_frame + 0x8)) = (uint)uVar4;
  puVar6 = &(*(uint *)(gen_frame + 0x8));
  if ((short)uVar5 <= (short)uVar4) {
    puVar6 = &(*(uint *)(gen_frame + 0x4));
  }
  if ((short)*puVar6 < 1) {
    puVar6 = &(*(uint *)(gen_frame + 0x0));
  }
  if (*piVar2 != (int)(short)*puVar6) {
    *piVar2 = (int)(short)*puVar6;
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x80))(this GEN_EDX_FWD);
  }
  uVar5 = 0;
  if (*(int *)((int)this + 0x88) != 0) {
    if ((*(char *)((int)this + 0x114) == '\0') && (*(char *)((int)this + 0x116) != '\0')) {
      iVar7 = 0;
    }
    else {
      iVar7 = 1;
    }
    iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0x88) + 0x70)));
    if (iVar3 != 0) {
      *(uint *)(iVar3 + 0x84) =
           *(uint *)(iVar3 + 0x84) ^ (iVar7 << 0x14 ^ *(uint *)(iVar3 + 0x84)) & 0x100000;
      *(uint *)(iVar3 + 0x88) =
           *(uint *)(iVar3 + 0x88) ^
           ((uint)((char)iVar7 == '\0') << 7 ^ *(uint *)(iVar3 + 0x88)) & 0x80;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x88) + 0x28))))
              (*(int * PTR32 *)((int)this + 0x88) GEN_EDX_ARG,(uint)*(byte *)((int)this + 0x114));
    if ((*(int *)((int)this + 0x88) != 0) &&
       (iVar7 = *((int *)GEN_TOP((*(int *)((int)this + 0x88) + 0x70))), iVar7 != 0)) {
      puVar6 = (uint *)(iVar7 + 0x84);
      *puVar6 = *puVar6 & 0xfdffffff;
    }
    F_00589f20(*(undefined * PTR32 *)((int)this + 0x88) GEN_EDX_ARG,*puVar1);
    fVar9 = (float10)(int)*puVar1;
    if ((int)*puVar1 < 0) {
      fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    uVar5 = F_00574c80(*(int *)((int)this + 0x88) GEN_EDX_ARG,
                         (int)(((float10)*piVar2 / fVar9) *
                              (float10)*((int *)GEN_TOP((*(int *)((int)this + 0x88) + 0xa8)))),0,1);
  }
  return uVar5;
}

/* ref: FUN_0058e260 */
GEN_NOFRAME uint GEN_THISCALL F_0058e260(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x58e260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0057c1a0(this GEN_EDX_FWD,*(undefined4 *)((int)this + 0xcc));
  *(uint *)((int)this + 0x14c) = uVar1;
  F_0057c0b0(this GEN_EDX_ARG,(int)this + 0x150,(int)this + 0x15c);
  F_0058e100(((undefined *)(uint)(this)) GEN_EDX_ARG);
  F_0057c230(this GEN_EDX_ARG);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x80))(this GEN_EDX_ARG);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x70))(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0058e2b0 */
GEN_FRAME uint GEN_THISCALL F_0058e2b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x58e2b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined1 *)(param_1 + 0x2a) = 0;
  uVar1 = param_1;
  if ((char)param_2 == '\0') {
    uVar1 = F_0058e260(this GEN_EDX_FWD);
  }
  return uVar1;
}

/* ref: FUN_0058e2d0 */
GEN_NOFRAME uint GEN_THISCALL F_0058e2d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x58e2d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x130);
  for (piVar2 = *(int * PTR32 *)((int)this + 300); piVar2 != piVar1; piVar2 = piVar2 + 1) {
    if ((*(byte *)(*piVar2 + 0x2b) & 2) != 0) {
      *(undefined1 *)(*piVar2 + 0x2a) = 0;
    }
  }
  uVar3 = F_0057c1a0(this GEN_EDX_FWD,*(undefined4 *)((int)this + 0xcc));
  *(uint *)((int)this + 0x14c) = uVar3;
  F_0057c0b0(this GEN_EDX_ARG,(int)this + 0x150,(int)this + 0x15c);
  F_0058e100(((undefined *)(uint)(this)) GEN_EDX_ARG);
  F_0057c230(this GEN_EDX_ARG);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x80))(this GEN_EDX_ARG);
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x70))(this GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_0058e350 */
GEN_FRAME uint GEN_THISCALL F_0058e350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x58e350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x158);
  if (param_1 < uVar2) {
    if (*(int *)((int)this + 0x140) != *((int *)GEN_TOP((*(int *)((int)this + 300) + param_1 * 4)))) {
      if (param_1 < uVar2) {
        uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 300) + param_1 * 4)));
      }
      else {
        uVar1 = 0;
      }
      *(undefined4 *)((int)this + 0x148) = uVar1;
      *(undefined4 *)((int)this + 0x140) = uVar1;
      F_005623b0(this GEN_EDX_FWD,param_1);
      if ((char)param_2 != '\0') {
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x84))(this GEN_EDX_ARG,param_1,1);
      }
    }
    uVar2 = F_0058e260(this GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: FUN_0058e3c0 */
GEN_FRAME unsigned int GEN_THISCALL F_0058e3c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x58e3c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * pvVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x9c) != 0) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x9c) + 0x80)));
    if (pvVar1 != (undefined *)0x0) {
      F_00583770(pvVar1 GEN_EDX_FWD,8,5,this,0);
    }
    iVar2 = *(int *)((int)this + 0x9c);
    if (((iVar2 == 0) || (*(short *)(iVar2 + 0x18) != 3)) && (iVar2 != param_1)) {
      if (*(char *)((int)this + 200) == '\0') {
        F_00559eb0(iVar2 GEN_EDX_ARG,(uint)*(ushort *)((int)this + 0xc4));
      }
      else {
        F_00559f40(iVar2 GEN_EDX_ARG,(uint)*(ushort *)((int)this + 0xc4));
      }
    }
  }
  *(int *)((int)this + 0x9c) = param_1;
  if ((*(int *)((int)this + 0xa0) != 0) &&
     (pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0xa0) + 0x80))), pvVar1 != (undefined *)0x0)) {
    F_00583770(pvVar1 GEN_EDX_ARG,8,5,this,0);
  }
  *(int *)((int)this + 0xa0) = param_2;
  if (param_2 != 0) {
    if (*(undefined * PTR32 *)(param_2 + 0x80) != (undefined *)0x0) {
      F_00583770(*(undefined * PTR32 *)(param_2 + 0x80) GEN_EDX_ARG,8,5,this,0);
    }
    if ((short)param_3 == 0) {
      if (*(int *)((int)this + 0xa0) == 0) {
        F_0058a060(this GEN_EDX_ARG,0);
        return;
      }
      F_0058a060(this GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0xa0) + 0x7e))));
      return;
    }
  }
  F_0058a060(this GEN_EDX_ARG,param_3);
  return;
}

/* ref: FUN_0058e4c0 */
GEN_FRAME uint GEN_THISCALL F_0058e4c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x58e4c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x84);
  if (this_00 == (undefined *)0x0) {
    return (uint)this;
  }
  if (*(char *)((int)this + 0x94) != '\0') {
    bVar1 = F_00589320(this_00 GEN_EDX_FWD,param_1);
    return CONCAT31(extraout_var,bVar1);
  }
  uVar2 = F_00589280(this_00 GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: Component::GUI2::AtkComponentWindow::vf8 */
GEN_FRAME uint GEN_THISCALL F_0058e4f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x58e4f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  bool bVar6;
  undefined4 uVar7;
  
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x58))(this GEN_EDX_FWD,0);
  if (*(int *)(this + 0x70) != 0) {
    puVar1 = ((uint *)GEN_TOP((*(int *)(this + 0x70) + 0x84)));
    *puVar1 = *puVar1 & 0xfdffffff;
  }
  uVar2 = F_0055d920(this + 4 GEN_EDX_ARG,*(undefined4 *)(this + 0x88));
  if (uVar2 != 0) {
    *(uint *)(uVar2 + 0x84) = *(uint *)(uVar2 + 0x84) & 0xfdffffff;
  }
  uVar2 = F_0055d920(this + 4 GEN_EDX_ARG,*(undefined4 *)(this + 0x8c));
  if (uVar2 != 0) {
    *(uint *)(uVar2 + 0x84) = *(uint *)(uVar2 + 0x84) & 0xfdffffff;
  }
  if (*(int *)(this + 0xa8) != 0) {
    puVar1 = ((uint *)GEN_TOP((*(int *)(this + 0xa8) + 0x84)));
    *puVar1 = *puVar1 & 0xfdffffff;
  }
  bVar6 = ((byte)this[0xbc] & 2) == 2;
  uVar2 = F_0055d920(this + 4 GEN_EDX_ARG,*(undefined4 *)(this + 0x90));
  if (uVar2 != 0) {
    *(uint *)(uVar2 + 0x84) =
         *(uint *)(uVar2 + 0x84) ^ ((uint)bVar6 << 0x14 ^ *(uint *)(uVar2 + 0x84)) & 0x100000;
    *(uint *)(uVar2 + 0x88) =
         *(uint *)(uVar2 + 0x88) ^ ((uint)!bVar6 << 7 ^ *(uint *)(uVar2 + 0x88)) & 0x80;
  }
  bVar6 = ((byte)this[0xbc] & 4) == 4;
  uVar2 = F_0055d920(this + 4 GEN_EDX_ARG,*(undefined4 *)(this + 0x94));
  if (uVar2 != 0) {
    *(uint *)(uVar2 + 0x84) =
         *(uint *)(uVar2 + 0x84) ^ ((uint)bVar6 << 0x14 ^ *(uint *)(uVar2 + 0x84)) & 0x100000;
    *(uint *)(uVar2 + 0x88) =
         *(uint *)(uVar2 + 0x88) ^ ((uint)!bVar6 << 7 ^ *(uint *)(uVar2 + 0x88)) & 0x80;
  }
  bVar6 = ((byte)this[0xbc] & 8) == 8;
  uVar2 = F_0055d920(this + 4 GEN_EDX_ARG,*(undefined4 *)(this + 0x98));
  if (uVar2 != 0) {
    *(uint *)(uVar2 + 0x84) =
         *(uint *)(uVar2 + 0x84) ^ ((uint)bVar6 << 0x14 ^ *(uint *)(uVar2 + 0x84)) & 0x100000;
    *(uint *)(uVar2 + 0x88) =
         *(uint *)(uVar2 + 0x88) ^ ((uint)!bVar6 << 7 ^ *(uint *)(uVar2 + 0x88)) & 0x80;
  }
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG,(uint)(((byte)this[0xbc] & 0x10) == 0x10));
  uVar2 = F_0055d920(this + 4 GEN_EDX_ARG,*(undefined4 *)(this + 0x90));
  if (uVar2 != 0) {
    if ((((*(ushort *)(uVar2 + 0x18) < 1000) || (iVar3 = *(int *)(uVar2 + 0x8c), iVar3 == 0)) ||
        ((*(byte *)(iVar3 + 0x60) & 1) == 0)) ||
       ((((*(byte *)(iVar3 + 0x60) & 4) == 0 || (*(char *)(iVar3 + 0x1c) != '\x01')) ||
        (*((char *)GEN_TOP((*(int *)(iVar3 + 0xc) + 0xf))) != '\x01')))) {
      iVar3 = 0;
    }
    if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + 0x70), iVar3 != 0)) {
      if (*(int *)(iVar3 + 0x80) == 0) {
        uVar7 = 0;
        uVar2 = F_00404270();
        puVar4 = (undefined4 *)F_00406bd0(4,0,uVar2,uVar7);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          *puVar4 = 0;
        }
        *(undefined4 * PTR32 *)(iVar3 + 0x80) = puVar4;
      }
      F_00565340(*(undefined * PTR32 *)(iVar3 + 0x80) GEN_EDX_ARG,0x17,2,0,iVar3,this,0);
    }
  }
  uVar2 = F_0055d920(this + 4 GEN_EDX_ARG,*(undefined4 *)(this + 0x94));
  if (uVar2 != 0) {
    if ((((*(ushort *)(uVar2 + 0x18) < 1000) || (iVar3 = *(int *)(uVar2 + 0x8c), iVar3 == 0)) ||
        ((*(byte *)(iVar3 + 0x60) & 1) == 0)) ||
       ((((*(byte *)(iVar3 + 0x60) & 4) == 0 || (*(char *)(iVar3 + 0x1c) != '\x01')) ||
        (*((char *)GEN_TOP((*(int *)(iVar3 + 0xc) + 0xf))) != '\x01')))) {
      iVar3 = 0;
    }
    if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + 0x70), iVar3 != 0)) {
      if (*(int *)(iVar3 + 0x80) == 0) {
        uVar7 = 0;
        uVar2 = F_00404270();
        puVar4 = (undefined4 *)F_00406bd0(4,0,uVar2,uVar7);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          *puVar4 = 0;
        }
        *(undefined4 * PTR32 *)(iVar3 + 0x80) = puVar4;
      }
      F_00565340(*(undefined * PTR32 *)(iVar3 + 0x80) GEN_EDX_ARG,0x17,3,0,iVar3,this,0);
    }
  }
  uVar2 = F_0055d920(this + 4 GEN_EDX_ARG,*(undefined4 *)(this + 0x98));
  if (uVar2 != 0) {
    if (((((*(ushort *)(uVar2 + 0x18) < 1000) || (iVar3 = *(int *)(uVar2 + 0x8c), iVar3 == 0)) ||
         ((*(byte *)(iVar3 + 0x60) & 1) == 0)) ||
        (((*(byte *)(iVar3 + 0x60) & 4) == 0 || (*(char *)(iVar3 + 0x1c) != '\x01')))) ||
       (*((char *)GEN_TOP((*(int *)(iVar3 + 0xc) + 0xf))) != '\x01')) {
      iVar3 = 0;
    }
    if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + 0x70), iVar3 != 0)) {
      if (*(int *)(iVar3 + 0x80) == 0) {
        uVar7 = 0;
        uVar2 = F_00404270();
        puVar4 = (undefined4 *)F_00406bd0(4,0,uVar2,uVar7);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          *puVar4 = 0;
        }
        *(undefined4 * PTR32 *)(iVar3 + 0x80) = puVar4;
      }
      F_00565340(*(undefined * PTR32 *)(iVar3 + 0x80) GEN_EDX_ARG,0x17,4,0,iVar3,this,0);
    }
  }
  uVar7 = *(undefined4 *)(REFG(int, 0x1379860) + 0x30);
  if ((*(uint *)&REFG(undefined, 0x1379c54) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x1379c54) = *(uint *)&REFG(undefined, 0x1379c54) | 1;
    F_0042b630(&REFG(undefined, 0x1379c00) GEN_EDX_ARG);
    F_00c47de6(((code *)REFP(0x107be50)));
  }
  iVar3 = *(int *)(this + 0xb0);
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar5 = F_0055d920(this + 4 GEN_EDX_ARG,*(undefined4 *)(this + 0x88));
    if ((uVar5 != 0) && (*(short *)(uVar5 + 0x18) == 3)) {
      uVar5 = F_0056c6b0(uVar7,iVar3,(uint)*(byte *)(uVar5 + 0x114));
      uVar2 = 0;
      if (uVar5 != 0) {
        F_0042e430(&REFG(undefined, 0x1379c00) GEN_EDX_ARG,uVar5);
        uVar2 = F_0042a990(&REFG(undefined, 0x1379c00) GEN_EDX_ARG);
      }
    }
  }
  iVar3 = *(int *)(this + 0xb4);
  uVar5 = F_0055d920(this + 4 GEN_EDX_ARG,*(undefined4 *)(this + 0x8c));
  if (((uVar5 == 0) || (*(short *)(uVar5 + 0x18) != 3)) ||
     (*(undefined4 *)(this + 0xb8) = *(undefined4 *)(uVar5 + 0x38), iVar3 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = F_0056c6b0(uVar7,iVar3,(uint)*(byte *)(uVar5 + 0x114));
  }
  uVar2 = F_0058a320(this GEN_EDX_ARG,uVar2,uVar5);
  if (this[0x80] == (undefined1)0x2) {
    uVar2 = *(uint *)(this + 0xa8);
    if (uVar2 != 0) {
      *(uint *)(uVar2 + 0x84) = *(uint *)(uVar2 + 0x84) | 0x4000000;
    }
    *(undefined4 *)(this + 0x68) = *(undefined4 *)(this + 0xa8);
  }
  return uVar2;
}

/* ref: FUN_0058e950 */
GEN_NOFRAME uint GEN_THISCALL F_0058e950(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x58e950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if (*(int *)((int)this + 0x88) != 0) {
    F_0058c5d0(((undefined *)GEN_TOP((*(int *)((int)this + 0x88) + 4))) GEN_EDX_FWD);
  }
  iVar1 = *(int *)((int)this + 0x84);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) & 0xffefffff;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x80;
  }
  *(undefined4 *)((int)this + 0x9c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x98) = 0xffffffff;
  return 0xffffffff;
}

/* ref: FUN_0058e9a0 */
GEN_FRAME uint GEN_THISCALL F_0058e9a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x58e9a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0xa4) != 0) {
    uVar1 = F_0058a580(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa4) + 0xb8))),param_1);
  }
  return uVar1;
}

/* ref: FUN_0058e9d0 */
GEN_FRAME uint GEN_THISCALL F_0058e9d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x58e9d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined4 uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(uint *)(gen_frame + 0x58)) = uVar2;
  if (*(int *)((int)this + 0xa4) != 0) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_FWD,"",REFG(undefined4, 0x108cc50));
    if (-1 < param_1) {
      F_00c472af(&REFG(undefined, 0x1379720),0x40,&REFG(undefined, 0x10a00c0),param_1);
      F_0042e430(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1379720));
    }
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa4) + 0xb8)));
    uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    F_0058a580(uVar1,uVar2);
    uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    uVar2 = (uint)uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_0058ea60 */
GEN_FRAME uint GEN_THISCALL F_0058ea60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x58ea60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0xa4) != 0) {
    uVar1 = F_0058a580(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa4) + 0xbc))),param_1);
  }
  return uVar1;
}

/* ref: FUN_0058ea90 */
GEN_FRAME uint GEN_THISCALL F_0058ea90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x58ea90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined4 uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(uint *)(gen_frame + 0x58)) = uVar2;
  if (*(int *)((int)this + 0xa4) != 0) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_FWD,"",REFG(undefined4, 0x108cc50));
    if (-1 < param_1) {
      F_00c472af(&REFG(undefined, 0x1379720),0x40,&REFG(undefined, 0x10a00c0),param_1);
      F_0042e430(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x1379720));
    }
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa4) + 0xbc)));
    uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    F_0058a580(uVar1,uVar2);
    uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    uVar2 = (uint)uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_0058eb20 */
GEN_FRAME uint GEN_THISCALL F_0058eb20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x58eb20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(char)param_1);
  *(byte *)((int)this + 0x1de) =
       *(byte *)((int)this + 0x1de) ^ ((char)param_1 * '\x02' ^ *(byte *)((int)this + 0x1de)) & 2;
  if ((char)param_1 != '\0') {
    uVar1 = F_0058b2a0(this GEN_EDX_FWD);
  }
  return uVar1;
}

/* ref: FUN_0058eb50 */
GEN_FRAME unsigned int GEN_THISCALL F_0058eb50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x58eb50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  undefined * this_01;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x8c);
  *(undefined4 *)((int)this + 0x1d4) = param_1;
  if (this_00 == (undefined *)0x0) {
    F_0058b190(this GEN_EDX_FWD,0);
    return;
  }
  this_01 = (undefined *)F_005684e0(this_00 GEN_EDX_ARG,1);
  if (this_01 == (undefined *)0x0) {
    F_0058b190(this GEN_EDX_ARG,0);
    return;
  }
  uVar1 = F_005769d0(this_01 GEN_EDX_ARG,*(undefined4 *)((int)this_00 + 0xf0));
  puVar3 = (undefined4 *)((int)this_01 + 0xa8);
  puVar4 = (undefined4 *)((int)this_01 + 100);
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  F_0058b190(this GEN_EDX_ARG,uVar1);
  return;
}

/* ref: FUN_0058ebd0 */
GEN_FRAME unsigned int GEN_THISCALL F_0058ebd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x58ebd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  undefined * this_01;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x8c);
  *(undefined4 *)((int)this + 0x1d8) = param_1;
  if (this_00 == (undefined *)0x0) {
    F_0058b190(this GEN_EDX_FWD,0);
    return;
  }
  this_01 = (undefined *)F_005684e0(this_00 GEN_EDX_ARG,1);
  if (this_01 == (undefined *)0x0) {
    F_0058b190(this GEN_EDX_ARG,0);
    return;
  }
  uVar1 = F_005769d0(this_01 GEN_EDX_ARG,*(undefined4 *)((int)this_00 + 0xf0));
  puVar3 = (undefined4 *)((int)this_01 + 0xa8);
  puVar4 = (undefined4 *)((int)this_01 + 100);
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  F_0058b190(this GEN_EDX_ARG,uVar1);
  return;
}

/* ref: FUN_0058ec50 */
GEN_FRAME unsigned int GEN_THISCALL F_0058ec50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x58ec50u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  undefined * PTR32 * ppvVar1;
  undefined * this_01;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0xff;
  ppvVar1 = (undefined * PTR32 *)&(*(uint *)&gen_args[1]);
  if (0xfe < (*(uint *)&gen_args[1])) {
    ppvVar1 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x8c)));
  *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d0))) = *ppvVar1;
  if (this_00 == (undefined *)0x0) {
    F_0058b190((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,0);
    return;
  }
  this_01 = (undefined *)F_005684e0(this_00 GEN_EDX_ARG,1);
  if (this_01 == (undefined *)0x0) {
    F_0058b190((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0);
    return;
  }
  uVar2 = F_005769d0(this_01 GEN_EDX_ARG,*(undefined4 *)((int)this_00 + 0xf0));
  puVar4 = (undefined4 *)((int)this_01 + 0xa8);
  puVar5 = (undefined4 *)((int)this_01 + 100);
  for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  F_0058b190((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,uVar2);
  return;
}

/* ref: Component::GUI2::AtkFontAnalyzerBase::vf4 */
GEN_FRAME uint GEN_THISCALL F_0058ece0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x58ece0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int iVar1;
  undefined1 AVar2;
  byte * pbVar3;
  undefined4 * puVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = *(uint *)((*(int *)&gen_args[3]) + 4);
  switch((unsigned int)(uintptr_t)((*(undefined4 *)&gen_args[2]))) {
  case 2: ;
  case 3: ;
  case 4: ;
  case 5: ;
  case 6: ;
  case 7: ;
  case 8: ;
  case 9: ;
  case 10: ;
  case 0xb: ;
  case 0xc: ;
  case 0xd: ;
  case 0xe: ;
  case 0xf: ;
  case 0x10: ;
  case 0x11: ;
  case 0x15: ;
  case 0x16: ;
  case 0x17: ;
  case 0x18: ;
  case 0x1d: ;
    break;
  case 0x12: ;
    F_00a24d30(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))) GEN_EDX_FWD,uVar5 + 2 + (*(uint *)&gen_args[1]),
                 (int)*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))) + 0x350,&(*(uint *)&gen_args[1]),1);
    uVar5 = (*(uint *)&gen_args[1]);
LAB_0058efe3: ;
    uVar6 = F_00557a80(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) GEN_EDX_ARG,uVar5);
    uVar5 = 0;
    if (uVar6 != 0) {
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,uVar6);
    }
    break;
  case 0x13: ;
    iVar1 = uVar5 + 2;
    uVar5 = uVar5 + 2 + (*(uint *)&gen_args[1]);
    if (*(char *)(iVar1 + (*(uint *)&gen_args[1])) != -0x14) {
      F_00a24d30(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))) GEN_EDX_ARG,uVar5,
                   (int)*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))) + 0x350,&(*(int *)&gen_args[3]),1);
      F_005d0ee0((*(undefined * PTR32 *)&gen_args[0]) + 0x5c GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[0]) + 0x34);
      (*(undefined * PTR32 *)&gen_args[0])[0x34] = SUB41((uint)(*(int *)&gen_args[3]) >> 0x10,0);
      (*(undefined * PTR32 *)&gen_args[0])[0x36] = SUB41((*(int *)&gen_args[3]),0);
      AVar2 = (*(undefined * PTR32 *)&gen_args[0])[0x52];
      (*(undefined * PTR32 *)&gen_args[0])[0x35] = SUB41((uint)(*(int *)&gen_args[3]) >> 8,0);
      (*(uint *)&gen_args[1]) = CONCAT13(AVar2,(undefined3)(*(uint *)&gen_args[1])) & 0x1ffffff;
      F_005d0f60((*(undefined * PTR32 *)&gen_args[0]) + 0x8c GEN_EDX_ARG,(int)&(*(uint *)&gen_args[1]) + 3);
      *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50))) | 0x10000;
      uVar5 = F_005d0ee0((*(undefined * PTR32 *)&gen_args[0]) + 0x74 GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[0]) + 0x38);
      (*(undefined * PTR32 *)&gen_args[0])[0x38] = (undefined1)0x0;
      *((undefined2 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x39))) = 0;
      return uVar5;
    }
    if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x6c))) != 0) {
      puVar4 = (undefined4 *)F_005cd3b0((*(undefined * PTR32 *)&gen_args[0]) + 0x5c GEN_EDX_ARG);
      *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = *puVar4;
      F_005c46c0((*(undefined * PTR32 *)&gen_args[0]) + 0x5c GEN_EDX_ARG);
      pbVar3 = (byte *)F_005cd400((*(undefined * PTR32 *)&gen_args[0]) + 0x8c GEN_EDX_ARG);
      *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50))) =
           *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50))) ^ ((uint)*pbVar3 << 0x10 ^ *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50)))) & 0x10000;
      F_005c46e0((*(undefined * PTR32 *)&gen_args[0]) + 0x8c GEN_EDX_ARG);
      puVar4 = (undefined4 *)F_005cd3b0((*(undefined * PTR32 *)&gen_args[0]) + 0x74 GEN_EDX_ARG);
      *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = *puVar4;
      uVar5 = F_005c46c0((*(undefined * PTR32 *)&gen_args[0]) + 0x74 GEN_EDX_ARG);
      return uVar5;
    }
    break;
  case 0x14: ;
    iVar1 = uVar5 + 2;
    uVar5 = uVar5 + 2 + (*(uint *)&gen_args[1]);
    if (*(char *)(iVar1 + (*(uint *)&gen_args[1])) != -0x14) {
      F_00a24d30(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))) GEN_EDX_ARG,uVar5,
                   (int)*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))) + 0x350,&(*(uint *)&gen_args[1]),1);
      F_005d0ee0((*(undefined * PTR32 *)&gen_args[0]) + 0x74 GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[0]) + 0x38);
      (*(undefined * PTR32 *)&gen_args[0])[0x38] = SUB41((*(uint *)&gen_args[1]) >> 0x10,0);
      (*(undefined * PTR32 *)&gen_args[0])[0x39] = SUB41((*(uint *)&gen_args[1]) >> 8,0);
      (*(undefined * PTR32 *)&gen_args[0])[0x3a] = SUB41((*(uint *)&gen_args[1]),0);
      return (*(uint *)&gen_args[1]);
    }
    if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x84))) != 0) {
      puVar4 = (undefined4 *)F_005cd3b0((*(undefined * PTR32 *)&gen_args[0]) + 0x74 GEN_EDX_ARG);
      *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = *puVar4;
      uVar5 = F_005c46c0((*(undefined * PTR32 *)&gen_args[0]) + 0x74 GEN_EDX_ARG);
      return uVar5;
    }
    break;
  case 0x19: ;
    uVar6 = F_00a24d30(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))) GEN_EDX_ARG,uVar5 + 2 + (*(uint *)&gen_args[1]),
                         (int)*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))) + 0x350,&(*(uint *)&gen_args[1]),1);
    uVar5 = 0;
    if (uVar6 != 0) {
      *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50))) =
           *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50))) ^
           ((uint)((*(uint *)&gen_args[1]) != 0) << 0x17 ^ *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50)))) & 0x800000;
      return uVar6;
    }
    break;
  case 0x1a: ;
    uVar6 = F_00a24d30(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))) GEN_EDX_ARG,uVar5 + 2 + (*(uint *)&gen_args[1]),
                         (int)*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))) + 0x350,&(*(uint *)&gen_args[1]),1);
    uVar5 = 0;
    if (uVar6 != 0) {
      *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50))) =
           *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50))) ^
           ((uint)((*(uint *)&gen_args[1]) != 0) << 0x18 ^ *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50)))) & 0x1000000;
      uVar5 = CONCAT31((int3)(uVar6 >> 8),(*(undefined * PTR32 *)&gen_args[0])[0x53]) & 0xffffff01;
      if ((((byte)(*(undefined * PTR32 *)&gen_args[0])[0x53] & 1) != 0) && (((byte)(*(undefined * PTR32 *)&gen_args[0])[0x53] & 1) == 0)) {
        *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50))) | 0x10000000;
        return uVar5;
      }
    }
    break;
  case 0x1b: ;
    uVar6 = F_00a24d30(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))) GEN_EDX_ARG,uVar5 + 2 + (*(uint *)&gen_args[1]),
                         (int)*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))) + 0x350,&(*(uint *)&gen_args[1]),1);
    uVar5 = 0;
    if (uVar6 != 0) {
      *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50))) =
           *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50))) ^
           ((uint)((*(uint *)&gen_args[1]) != 0) << 0x10 ^ *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50)))) & 0x10000;
      return uVar6;
    }
    break;
  case 0x1c: ;
    uVar6 = F_00a24d30(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))) GEN_EDX_ARG,uVar5 + 2 + (*(uint *)&gen_args[1]),
                         (int)*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))) + 0x350,&(*(uint *)&gen_args[1]),1);
    uVar5 = 0;
    if (uVar6 != 0) {
      *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50))) =
           *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50))) ^
           ((uint)((*(uint *)&gen_args[1]) != 0) << 0x13 ^ *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x50)))) & 0x80000;
      return uVar6;
    }
    break;
  case 0x1e: ;
    F_00a24d30(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))) GEN_EDX_ARG,uVar5 + 2 + (*(uint *)&gen_args[1]),
                 (int)*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))) + 0x350,&(*(uint *)&gen_args[1]),1);
    uVar5 = F_00558330(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) GEN_EDX_ARG,(*(uint *)&gen_args[1]));
  case 1: ;
    goto LAB_0058efe3;
  default: ;
    goto switchD_0058ed01_default;
  }
switchD_0058ed01_default: ;
  return uVar5;
}

/* ref: FUN_0058f050 */
GEN_FRAME uint GEN_THISCALL F_0058f050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x58f050u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte * pbVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined3 extraout_var = 0;
  undefined * pvVar7;
  
  *(undefined4 *)((int)this + 0xb4) = param_4;
  *(undefined4 *)((int)this + 0xb8) = param_5;
  F_00c48350((undefined *)((int)this + 0x2a0),0,0x100);
  *(undefined4 *)((int)this + 0x3a0) = 0;
  *(undefined4 *)((int)this + 0x3a4) = 0;
  F_0056fc60((undefined *)((int)this + 0x140) GEN_EDX_ARG,param_2,param_3,*(undefined4 *)((int)this + 0xb4),
               *(undefined4 *)((int)this + 0xb8));
  if (*(int *)((int)this + 0x1e4) == 0) {
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG);
    return uVar5;
  }
  if ((*(uint *)((int)this + 0x50) & 0x4000000) == 0) {
    uVar5 = *(uint *)((int)this + 0x50) & 0xffff;
    if (uVar5 < 0xffff) {
      uVar5 = 0xffff - uVar5;
    }
    else {
      uVar5 = 0;
    }
  }
  else {
    uVar5 = F_005596f0(*(float *)((int)this + 0x2c));
  }
  *((uint *)GEN_TOP((*(int *)(param_1 + 4) + 0x70))) = uVar5;
  *((uint *)GEN_TOP((*(int *)(param_1 + 4) + 0x78))) = (*(uint *)((int)this + 0x50) >> 0x1a & 1) << 4;
  pbVar1 = ((byte *)GEN_TOP((*(int *)(param_1 + 4) + 0xa4)));
  *pbVar1 = *pbVar1 | 1;
  iVar2 = *(int *)((int)this + 0x1f0);
  if (iVar2 != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 0x74))) = 0;
    iVar6 = 0x120000;
    if ((*(uint *)((int)this + 0x50) & 0x4000000) != 0) {
      iVar6 = 0x120100;
    }
    if ((*(int *)(param_1 + 0x10) != iVar6) || (*(int *)(param_1 + 0x24) != 0)) {
      *(int *)(param_1 + 0x10) = iVar6;
      *(undefined4 *)(param_1 + 0x24) = 0;
      F_00577690(param_1 + 0x14,iVar6,0);
    }
    uVar5 = F_005cf050(*(undefined * PTR32 *)(param_1 + 4) GEN_EDX_ARG,0x22,iVar2 * 4,param_1 + 0x14);
    *(uint *)((int)this + 0x3a4) = uVar5;
    if (uVar5 == 0) {
      return 0;
    }
  }
  uVar3 = *(undefined4 *)((int)this + 0xc);
  bVar4 = F_0058c380(this GEN_EDX_ARG,2,param_1,uVar3,5);
  uVar5 = CONCAT31(extraout_var,bVar4);
  if (bVar4 == 0) {
    if ((*(undefined * PTR32 *)((int)this + 0x3a4) != (undefined *)0x0) && (iVar2 != 0)) {
      pvVar7 = F_00c48350(*(undefined * PTR32 *)((int)this + 0x3a4),0,iVar2 << 7);
      return (uint)pvVar7;
    }
  }
  else {
    bVar4 = F_0058c380(this GEN_EDX_ARG,1,param_1,uVar3,4);
    if (bVar4 == 0) {
      if ((*(undefined * PTR32 *)((int)this + 0x3a4) != (undefined *)0x0) && (iVar2 != 0)) {
        F_00c48350(*(undefined * PTR32 *)((int)this + 0x3a4),0,iVar2 << 7);
      }
      uVar5 = F_005589b0(this GEN_EDX_ARG,2);
      return uVar5;
    }
    bVar4 = F_0058c380(this GEN_EDX_ARG,3,param_1,uVar3,7);
    if (bVar4 == 0) {
      F_00558a10(*(undefined4 *)((int)this + 0x3a4),iVar2);
      F_005589b0(this GEN_EDX_ARG,2);
      uVar5 = F_005589b0(this GEN_EDX_ARG,1);
      return uVar5;
    }
    bVar4 = F_0058c380(this GEN_EDX_ARG,0,param_1,uVar3,
                         (-(uint)((*(uint *)((int)this + 0x50) & 0x40000) != 0) & 3) + 3);
    if (bVar4 == 0) {
      F_00558a10(*(undefined4 *)((int)this + 0x3a4),iVar2);
      F_005589b0(this GEN_EDX_ARG,2);
      F_005589b0(this GEN_EDX_ARG,1);
      uVar5 = F_005589b0(this GEN_EDX_ARG,3);
      return uVar5;
    }
    iVar6 = *(int *)((int)this + 0x1ec);
    if (iVar6 != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 0x74))) = 0;
      F_00583d70(this GEN_EDX_ARG,param_1,0x123000,
                   *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 8) + 0x60))) + 8))));
      uVar5 = F_005cf050(*(undefined * PTR32 *)(param_1 + 4) GEN_EDX_ARG,0x22,iVar6 * 4,param_1 + 0x14);
      *(uint *)((int)this + 0x3a0) = uVar5;
      if (uVar5 == 0) {
        F_00558a10(*(undefined4 *)((int)this + 0x3a4),iVar2);
        F_005589b0(this GEN_EDX_ARG,2);
        F_005589b0(this GEN_EDX_ARG,1);
        F_005589b0(this GEN_EDX_ARG,3);
        uVar5 = F_005589b0(this GEN_EDX_ARG,0);
        return uVar5;
      }
    }
    uVar5 = F_0056fc00(this GEN_EDX_ARG,param_2,param_3);
  }
  return uVar5;
}

/* ref: Component::GUI2::AtkFontAnalyzerBuildLink::vf4 */
GEN_FRAME uint GEN_THISCALL F_0058f340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x58f340u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined * pAVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  
  if ((*(int *)&gen_args[2]) != 0x27) {
    uVar3 = F_0058ece0((undefined *)(*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(int *)&gen_args[1]),(*(int *)&gen_args[2]),(*(int *)&gen_args[3]));
    return uVar3;
  }
  iVar6 = *(int *)((*(int *)&gen_args[3]) + 4) + 2;
  uVar3 = F_00a24d30(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))) GEN_EDX_ARG,iVar6 + (*(int *)&gen_args[1]),
                       (int)*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))) + 0x350,&(*(int *)&gen_args[3]),1);
  if ((*(int *)&gen_args[3]) == 0xce) {
    if ((*(undefined * PTR32 *)&gen_args[0])[0x16e] != (undefined1)0x0) {
      pAVar1 = (*(undefined * PTR32 *)&gen_args[0]) + 0x174;
      uVar3 = 0;
      if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x174))) != 0) {
        *((int *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x174))) + 8))) = (int)*((float *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x158)));
        *(int *)(*(int *)pAVar1 + 0xc) =
             (int)((float10)*((float *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x15c))) + (float10)*((float *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x148))));
        uVar3 = F_005cd7d0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x170))) GEN_EDX_ARG,pAVar1);
        *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x168))) = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x168))) + 1;
        *(int *)pAVar1 = 0;
        (*(undefined * PTR32 *)&gen_args[0])[0x16e] = (undefined1)0x0;
        return uVar3;
      }
    }
  }
  else if ((*(undefined * PTR32 *)&gen_args[0])[0x16e] == (undefined1)0x0) {
    uVar4 = F_00404270();
    piVar5 = (int *)F_00406bd0(0x30,0,uVar4,0);
    *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x174))) = piVar5;
    *piVar5 = (int)*((float *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x158)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x174))) + 4))) = (int)*((float *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x15c)));
    *((int *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x174))) + 0x10))) = (*(int *)&gen_args[1]);
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x174))) + 0x14))) = *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xbc)));
    iVar6 = iVar6 + uVar3;
    *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x174))) + 0x18))) = *((undefined2 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x168)));
    *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x174))) + 0x1a))) = *((undefined2 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x16c)));
    iVar2 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x174)));
    *(undefined2 *)(iVar2 + 0x1e) = (undefined2)(*(int *)&gen_args[3]);
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x174))) + 0x2c))) = *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x34)));
    uVar3 = F_00a24d30(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))) GEN_EDX_ARG,iVar6 + (*(int *)&gen_args[1]),
                         (int)*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))) + 0x350,&(*(int *)&gen_args[3]),1);
    *((int *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x174))) + 0x20))) = (*(int *)&gen_args[3]);
    iVar6 = iVar6 + uVar3;
    uVar3 = F_00a24d30(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))) GEN_EDX_ARG,iVar6 + (*(int *)&gen_args[1]),
                         (int)*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))) + 0x350,&(*(int *)&gen_args[3]),1);
    *((int *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x174))) + 0x24))) = (*(int *)&gen_args[3]);
    F_00a24d30(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))) GEN_EDX_ARG,uVar3 + iVar6 + (*(int *)&gen_args[1]),
                 (int)*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x18))) + 0x350,&(*(int *)&gen_args[3]),1);
    uVar3 = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x174)));
    *(int *)(uVar3 + 0x28) = (*(int *)&gen_args[3]);
    (*(undefined * PTR32 *)&gen_args[0])[0x16e] = (undefined1)0x1;
  }
  return uVar3;
}

/* ref: FUN_0058f530 */
GEN_FRAME unsigned int GEN_THISCALL F_0058f530(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x58f530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(char *)((int)this + 0x22d28) != '\0') {
    if (*(undefined * PTR32 *)((int)this + 0xbc) != (undefined *)0x0) {
      F_00572040(*(undefined * PTR32 *)((int)this + 0xbc) GEN_EDX_FWD);
    }
    F_0057f6a0(*(undefined * PTR32 *)((int)this + 0x130) GEN_EDX_ARG);
    this_00 = *(undefined * PTR32 *)((int)this + 0xbc);
    if (this_00 != (undefined *)0x0) {
      F_004d6970(*(undefined * PTR32 *)((int)this_00 + 0x9c) GEN_EDX_ARG);
      uVar1 = F_005725c0(this_00 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
      *(uint *)((int)this_00 + 0x2a0) = uVar1;
      *(undefined * PTR32 *)((int)this_00 + 0x2a4) = (*(undefined * PTR32 *)(gen_frame + 0x8));
    }
    if (*(undefined * PTR32 *)((int)this + 0xbc) != (undefined *)0x0) {
      F_00585950(*(undefined * PTR32 *)((int)this + 0xbc) GEN_EDX_ARG,(uint)*(byte *)((int)this + 0xe8));
    }
  }
  return;
}

/* ref: FUN_0058f5b0 */
GEN_NOFRAME uint GEN_THISCALL F_0058f5b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x58f5b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  if (this == (undefined *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x8c) + 8))) +
                    (uint)*(ushort *)((int)this + 0x90) * 0xc)));
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = F_0058c5d0((undefined *)(iVar1 + 4) GEN_EDX_FWD);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_0058f5e0 */
GEN_FRAME uint GEN_THISCALL F_0058f5e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x58f5e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  
  F_0058d250((undefined *)((int)this + 0xe0) GEN_EDX_FWD);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x24);
  *puVar1 = 0;
  puVar1[1] = 0;
  iVar2 = puVar1[2];
  if (iVar2 != puVar1[3]) {
    F_00c46e20(iVar2,puVar1[3],0);
    puVar1[3] = iVar2;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x14) + 0x10))))(*(int * PTR32 *)((int)this + 0x14) GEN_EDX_ARG);
  F_00580900(*(undefined * PTR32 *)((int)this + 0x28) GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x1f0) = 0;
  *(undefined4 *)((int)this + 500) = 0;
  *(undefined4 *)((int)this + 0x1fc) = 0;
  *(undefined4 *)((int)this + 0x200) = 0;
  *(undefined4 *)((int)this + 0x204) = 0;
  *(undefined4 *)((int)this + 0x208) = 0;
  F_0058c1d0((undefined *)((int)this + 0x220) GEN_EDX_ARG);
  uVar3 = F_00558dc0(*(undefined * PTR32 *)((int)this + 0x18) GEN_EDX_ARG);
  *(undefined * PTR32 *)((int)this + 0x1ec) = this;
  *(undefined1 *)((int)this + 0x1fa) = 0;
  *(undefined1 *)((int)this + 0x230) = 1;
  return uVar3;
}

/* ref: FUN_0058f6c0 */
GEN_FRAME uint GEN_THISCALL F_0058f6c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x58f6c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int * piVar4;
  
  if (*(int *)((int)this + 4) != 0) {
    F_0058c5d0(this GEN_EDX_FWD);
  }
  *(undefined4 *)((int)this + 4) = 0;
  uVar2 = *(undefined4 *)((int)this + 8);
  uVar3 = F_00587110(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0xc) GEN_EDX_ARG,param_1,param_2);
  *(uint *)((int)this + 8) = uVar3;
  F_005873b0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0xc) GEN_EDX_ARG,uVar2);
  if (*(int *)((int)this + 8) != 0) {
    piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 8) + 0x8c)));
    iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar4), 0);
    if (iVar1 < 8) {
      return 0;
    }
  }
  return 0xfffffffe;
}

/* ref: FUN_0058f730 */
GEN_FRAME uint GEN_THISCALL F_0058f730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x58f730u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int * piVar4;
  
  if (*(int *)((int)this + 4) != 0) {
    F_0058c5d0(this GEN_EDX_FWD);
  }
  uVar2 = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  uVar3 = F_00587250(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0xc) GEN_EDX_ARG,param_1,param_2,param_3);
  *(uint *)((int)this + 8) = uVar3;
  F_005873b0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0xc) GEN_EDX_ARG,uVar2);
  if (*(int *)((int)this + 8) != 0) {
    piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 8) + 0x8c)));
    iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar4), 0);
    if (iVar1 < 8) {
      return 0;
    }
  }
  return 0xfffffffe;
}

/* ref: FUN_0058f7a0 */
GEN_FRAME uint GEN_THISCALL F_0058f7a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x58f7a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  if (*(int *)((int)this + 4) != 0) {
    F_0058c5d0(this GEN_EDX_FWD);
  }
  *(undefined4 *)((int)this + 4) = 0;
  if (*(int *)((int)this + 8) != param_1) {
    F_0058c5d0(this GEN_EDX_ARG);
    if (param_1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_00513f60(param_1,0,0);
    }
    *(uint *)((int)this + 8) = uVar2;
    if (uVar2 != 0) {
      piVar3 = (int *)(uVar2 + 0x8c);
      iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar3), 0);
      if (iVar1 < 8) {
        return 0;
      }
    }
    return 0xfffffffe;
  }
  return 0;
}

/* ref: FUN_0058f810 */
GEN_FRAME uint GEN_THISCALL F_0058f810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x58f810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  if (*(int *)((int)this + 4) != 2) {
    F_0058c5d0(this GEN_EDX_FWD);
  }
  *(undefined4 *)((int)this + 4) = 2;
  *(int * PTR32 *)((int)this + 8) = param_1;
  if (param_1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_ARG);
  }
  return 0;
}

/* ref: FUN_0058f840 */
GEN_FRAME uint GEN_THISCALL F_0058f840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x58f840u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  int * piVar7;
  uint uVar8;
  uint * puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint local_c;
  
  *(undefined4 *)((int)this + 0x28) = param_3;
  iVar6 = *(int *)(param_1 + 0x10) + param_1;
  uVar8 = *(uint *)(iVar6 + 8);
  if (uVar8 == 0) {
    return 0xffffffff;
  }
  piVar7 = (int *)(iVar6 + 0x10);
  uVar10 = 0;
  if (uVar8 != 0) {
    do {
      if (*piVar7 == param_2) {
        iVar6 = *(int *)((int)this + 8);
        iVar11 = (uint)*(ushort *)((int)piVar7 + 0xe) + (int)piVar7;
        uVar5 = 0;
        if (*(int *)(iVar6 + 4) != 0) {
          local_c = 0;
          iVar13 = iVar11;
          param_2 = iVar11;
          do {
            iVar2 = *((int *)GEN_TOP((*(int *)(iVar6 + 8) + local_c * 4)));
            iVar12 = iVar11;
            iVar4 = param_2;
            if (((uVar5 != 0) &&
                ((((iVar3 = *((int *)GEN_TOP((*(int *)(iVar6 + 8) + local_c * 4 - 4))), iVar3 != 0 &&
                   (10000 < *(uint *)(iVar3 + 4))) || (iVar2 == 0)) ||
                 (iVar12 = iVar13, iVar4 = iVar13, *(uint *)(iVar2 + 4) < 0x2711)))) &&
               (((iVar12 = iVar11, iVar4 = param_2, iVar3 != 0 && (10000 < *(uint *)(iVar3 + 4))) &&
                ((iVar2 == 0 || (*(uint *)(iVar2 + 4) < 0x2711)))))) {
              iVar12 = iVar11 + (uint)*(ushort *)(iVar11 + 0x18);
              iVar4 = iVar12;
            }
            param_2 = iVar4;
            if (*(undefined * PTR32 *)((int)this + 0x28) != (undefined *)0x0) {
              uVar8 = F_00587f50(*(undefined * PTR32 *)((int)this + 0x28) GEN_EDX_FWD,(uint)*(ushort *)(iVar12 + 0x56));
              *(uint *)(iVar2 + 0x1c) = uVar8;
              if (uVar8 != 0) {
                *(int *)(uVar8 + 4) = iVar2;
              }
            }
            uVar1 = *(ushort *)(iVar2 + 0x18);
            if (999 < uVar1) {
              uVar8 = *((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 8 + param_1)));
              if (uVar8 != 0) {
                puVar9 = ((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + param_1 + 0x10)));
                uVar10 = 0;
                if (uVar8 != 0) {
                  do {
                    if (*puVar9 == (uint)uVar1) {
                      F_0058f840(((undefined *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar6 + 8) + local_c * 4))) +
                                                    0x8c))) + 4))) GEN_EDX_ARG,param_1,(uint)uVar1,param_3);
                      break;
                    }
                    puVar9 = (uint *)((int)puVar9 + (uint)(ushort)puVar9[3]);
                    uVar10 = uVar10 + 1;
                    iVar12 = param_2;
                  } while ((uVar10 & 0xffff) < uVar8);
                }
              }
            }
            iVar11 = iVar12;
            if (*(uint *)(iVar2 + 4) < 0x2711) {
              iVar11 = iVar12 + (uint)*(ushort *)(iVar12 + 0x18);
              param_2 = iVar11;
            }
            uVar5 = uVar5 + 1;
            local_c = (uint)uVar5;
            iVar13 = iVar12;
          } while (local_c < *(uint *)(iVar6 + 4));
        }
        return 0;
      }
      uVar10 = uVar10 + 1;
      piVar7 = ((int *)GEN_TOP(((int)piVar7 + (uint)*(ushort *)(piVar7 + 3))));
    } while ((uVar10 & 0xffff) < uVar8);
  }
  return 0xfffffffe;
}

/* ref: FUN_0058f9f0 */
GEN_FRAME uint GEN_THISCALL F_0058f9f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x58f9f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  undefined * pvVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_3 + 0x18) + param_3;
  if (*(int *)(iVar2 + 8) != 0) {
    pvVar1 = (undefined *)F_00406bd0(0x24,0,param_1,0);
    if (pvVar1 == (undefined *)0x0) {
      pvVar1 = (undefined *)0x0;
    }
    else {
      pvVar1 = (undefined *)F_00587ef0(pvVar1 GEN_EDX_ARG);
    }
    *(undefined * PTR32 *)((int)this + 0x28) = pvVar1;
    if (*(int *)(param_2 + 0x14) != 0) {
      F_005734e0(pvVar1 GEN_EDX_ARG,*(int *)(param_2 + 0x14) + param_2,param_4 & 0xffff);
      param_4 = *(int *)((int)this + 8);
      iVar3 = iVar2 + 0x10;
      param_3 = 0;
      if (*(int *)(iVar2 + 8) != 0) {
        do {
          F_0058c660(this GEN_EDX_ARG,param_2,param_4,iVar3 + 0x10,*(undefined4 *)((int)this + 0x28));
          param_4 = param_4 + 0x18;
          iVar3 = iVar3 + (uint)*(ushort *)(iVar3 + 0xe);
          param_3 = param_3 + 1;
        } while (param_3 < *(uint *)(iVar2 + 8));
      }
    }
    return 0;
  }
  return 0xffffffff;
}

/* ref: FUN_0058faa0 */
GEN_FRAME unsigned int GEN_THISCALL F_0058faa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x58faa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint param_4 = (uint)gen_a4;
  uint * puVar1;
  undefined4 * puVar2;
  int * piVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  int * piVar7;
  uint local_c;
  uint * local_8;
  
  if ((param_4 != 0) && (*(int *)(param_2 + 8) != 0)) {
    uVar5 = -(uint)((int)((ulonglong)param_4 * 0x10 >> 0x20) != 0) |
            (uint)((ulonglong)param_4 * 0x10);
    puVar1 = (uint *)F_00406c00(-(uint)(0xfffffffb < uVar5) | uVar5 + 4,0,param_1,0);
    if (puVar1 == (uint *)0x0) {
      local_8 = (uint *)0x0;
    }
    else {
      *puVar1 = param_4;
      local_8 = puVar1 + 1;
      uVar5 = param_4;
      while (uVar5 = uVar5 - 1, -1 < (int)uVar5) {
        puVar1[2] = (uint)(*(undefined * PTR32 (*)[1])REFP(0x10a0c7c));
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1 = puVar1 + 4;
      }
    }
    *(uint * PTR32 *)this = local_8;
    if (local_8 == (uint *)0x0) {
      return 0;
    }
    *(short *)((int)this + 0x10) = (short)param_4;
    param_1 = (uint *)(param_2 + 0x10);
    local_c = 0;
    if (*(int *)(param_2 + 8) != 0) {
      puVar1 = local_8 + 3;
      do {
        if (param_4 != 0) {
          uVar5 = 0;
          uVar6 = 0;
          do {
            if (*(uint *)(param_3 + uVar5 * 4) == *param_1) {
              *local_8 = *param_1;
              *(undefined4 *)((int)this + 0x20) = 2;
              *puVar1 = 0;
              uVar5 = param_1[0xc];
              if (uVar5 == 0) {
                if ((char)param_1[1] != '\0') {
                  F_0058f6c0(puVar1 - 2 GEN_EDX_ARG,param_1 + 1,6);
                }
              }
              else {
                if (puVar1[-1] != 0) {
                  F_0058c5d0(puVar1 - 2 GEN_EDX_ARG);
                }
                uVar6 = *puVar1;
                puVar1[-1] = 0;
                uVar5 = F_00587250(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0xc) GEN_EDX_ARG,uVar5,0,6);
                *puVar1 = uVar5;
                F_005873b0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0xc) GEN_EDX_ARG,uVar6);
                if (*puVar1 != 0) {
                  puVar2 = (undefined4 *)(*puVar1 + 0x8c);
                  LOCK();
                  *puVar2 = *puVar2;
                  UNLOCK();
                }
              }
              local_8 = local_8 + 4;
              puVar1 = puVar1 + 4;
              break;
            }
            uVar6 = uVar6 + 1;
            uVar5 = uVar6 & 0xffff;
          } while (uVar5 < param_4);
        }
        param_1 = param_1 + 0xd;
        local_c = local_c + 1;
      } while ((local_c & 0xffff) < *(uint *)(param_2 + 8));
    }
  }
  *(undefined4 *)((int)this + 0x20) = 2;
  if ((*(int *)((int)this + 4) != 0) && (uVar4 = 0, *(short *)((int)this + 0x12) != 0)) {
    puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    do {
      piVar7 = (int *)puVar1[1];
      param_4 = 0;
      if (*puVar1 != 0) {
        do {
          piVar3 = *(int * PTR32 *)((int)this + 0x30);
          if ((piVar3 == (int *)0x0) || (*piVar3 != *piVar7)) {
            uVar5 = 0;
            if (*(short *)((int)this + 0x10) != 0) {
              piVar3 = *(int * PTR32 *)this;
              do {
                if (*piVar3 == *piVar7) {
                  piVar3 = *(int * PTR32 *)this + uVar5 * 4;
                  *(int * PTR32 *)((int)this + 0x30) = piVar3;
                  goto LAB_0058fca4;
                }
                uVar5 = uVar5 + 1;
                piVar3 = piVar3 + 4;
              } while (uVar5 < *(ushort *)((int)this + 0x10));
            }
            piVar3 = (int *)0x0;
          }
LAB_0058fca4: ;
          *piVar7 = (int)piVar3;
          param_4 = param_4 + 1;
          piVar7 = piVar7 + 3;
        } while ((param_4 & 0xffff) < *puVar1);
      }
      uVar4 = uVar4 + 1;
      puVar1 = puVar1 + 3;
    } while (uVar4 < *(ushort *)((int)this + 0x12));
  }
  return 0;
}

/* ref: FUN_0058fce0 */
GEN_FRAME unsigned int GEN_THISCALL F_0058fce0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x58fce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  ushort uVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  
  if (param_1 == 0) goto LAB_0058fe64;
  uVar1 = *(ushort *)(param_1 + 0x18);
  if (uVar1 < 1000) {
    if (uVar1 != 2) {
      if (uVar1 == 3) {
        if (*(int * PTR32 *)(param_1 + 0xf8) != (int *)0x0) {
          piVar2 = ((int *)GEN_TOP(**(int * PTR32 *)(param_1 + 0xf8)));
          piVar6 = (int *)*piVar2;
          while (piVar6 != piVar2) {
            piVar3 = *(int * PTR32 *)(param_1 + 0xf8);
            iVar4 = piVar6[2];
            piVar5 = (int *)*piVar6;
            if (piVar6 != (int *)*piVar3) {
              *(int * PTR32 *)piVar6[1] = piVar5;
              *(int *)(*piVar6 + 4) = piVar6[1];
              F_00429760(piVar6,0xc,400);
              piVar3 = piVar3 + 1;
              *piVar3 = *piVar3 - 1;
            }
            piVar6 = piVar5;
            if (iVar4 != 0) {
              F_00406ad0(iVar4);
            }
          }
          F_005c4820(*(undefined * PTR32 *)(param_1 + 0xf8) GEN_EDX_ARG);
        }
        goto LAB_0058fe64;
      }
      if ((uVar1 != 4) && (uVar1 != 5)) {
        if ((uVar1 == 6) || ((((uVar1 == 7 || (uVar1 == 8)) || (uVar1 == 9)) || (uVar1 != 10000))))
        goto LAB_0058fe64;
        goto LAB_0058fe4b;
      }
    }
    piVar2 = *(int * PTR32 *)(param_1 + 0x8c);
    if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
      F_0058c5d0((undefined *)(*(int *)piVar2[2] + 4) GEN_EDX_ARG);
      piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x8c) + 8)));
      if (*piVar2 != 0) {
        iVar4 = *piVar2;
        if (iVar4 != 0) {
          *(undefined * PTR32 * PTR32 *)(iVar4 + 4) = (*(undefined * PTR32 (*)[1])REFP(0x10a0c7c));
          F_00406ad0(iVar4);
        }
        **((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x8c) + 8))) = 0;
      }
      iVar4 = *((int *)GEN_TOP((*(int *)(param_1 + 0x8c) + 8)));
      if (iVar4 != 0) {
        F_00406b30(iVar4);
        *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x8c) + 8))) = 0;
      }
      if (*(int *)(param_1 + 0x8c) != 0) {
        F_00406ad0(*(int *)(param_1 + 0x8c));
        *(undefined4 *)(param_1 + 0x8c) = 0;
      }
    }
  }
  else {
LAB_0058fe4b: ;
    F_005595d0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x10) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((*(int *)(param_1 + 0x8c) + 100))));
  }
LAB_0058fe64: ;
  if ((*(int *)(param_1 + 0x1c) != 0) && (*(undefined * PTR32 *)((int)this + 0x28) != (undefined *)0x0)) {
    F_005880a0(*(undefined * PTR32 *)((int)this + 0x28) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x1c))));
  }
  return;
}

/* ref: FUN_0058fe90 */
GEN_FRAME uint GEN_THISCALL F_0058fe90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x58fe90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int * piVar2;
  undefined * this_00;
  undefined4 in_EAX = 0;
  int iVar3;
  undefined4 * puVar4;
  ushort uVar5;
  uint uVar6;
  int * piVar7;
  int iVar8;
  int local_c;
  uint local_8;
  
  bVar1 = *(byte *)((int)this + 0x5c);
  uVar6 = CONCAT31((int3)((uint)in_EAX >> 8),bVar1);
  if ((bVar1 & 1) != 0) {
    *(byte *)((int)this + 0x5c) = bVar1 & 0xfe;
    if ((*(int *)((int)this + 0x1c) != 0) && (*(char *)((int)this + 0x18) == '\x02')) {
      F_0050c620(*(int *)((int)this + 0x1c),0,0);
      *(undefined4 *)((int)this + 0x1c) = 0;
    }
    *(byte *)((int)this + 0x5c) = *(byte *)((int)this + 0x5c) & 0xfd;
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined4 *)((int)this + 0x20) = 0;
    if (*(int *)((int)this + 8) != 0) {
      uVar5 = 0;
      if (*(short *)((int)this + 0x14) != 0) {
        do {
          iVar8 = *(int *)((int)this + 8);
          if (iVar8 == 0) {
LAB_0058ff16: ;
            iVar8 = 0;
          }
          else if (*(char *)((int)this + 0x18) == '\x01') {
            iVar8 = iVar8 + (uint)uVar5 * 0x10;
          }
          else {
            if (*(char *)((int)this + 0x18) != '\x02') goto LAB_0058ff16;
            iVar8 = iVar8 + (uint)uVar5 * 0x18;
          }
          uVar6 = 0;
          local_8 = 0;
          if (*(int *)(iVar8 + 4) != 0) {
            do {
              F_0058fce0(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(iVar8 + 8) + uVar6 * 4))));
              if (*((int *)GEN_TOP((*(int *)(iVar8 + 8) + uVar6 * 4))) != 0) {
                puVar4 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(iVar8 + 8) + uVar6 * 4)));
                if (puVar4 != (undefined4 *)0x0) {
                  ((GEN_TCODE *)*(gen_code32 *)*puVar4)(puVar4 GEN_EDX_ARG,1);
                }
                *((undefined4 *)GEN_TOP((*(int *)(iVar8 + 8) + uVar6 * 4))) = 0;
              }
              local_8 = local_8 + 1;
              uVar6 = local_8 & 0xffff;
            } while (uVar6 < *(uint *)(iVar8 + 4));
          }
          if (*(int *)(iVar8 + 8) != 0) {
            F_00406b30(*(int *)(iVar8 + 8));
            *(undefined4 *)(iVar8 + 8) = 0;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(ushort *)((int)this + 0x14));
      }
      if (*(int *)((int)this + 8) != 0) {
        F_00406810(*(int *)((int)this + 8));
        *(undefined4 *)((int)this + 8) = 0;
      }
      piVar2 = *(int * PTR32 *)((int)this + 0x4c);
      for (piVar7 = *(int * PTR32 *)((int)this + 0x48); piVar7 != piVar2; piVar7 = piVar7 + 1) {
        local_c = *(int *)(*piVar7 + 4);
        if (local_c != 0) {
          iVar8 = 0;
          do {
            F_0058fce0(this GEN_EDX_ARG,*(int *)*piVar7 + iVar8);
            iVar8 = iVar8 + 0x90;
            local_c = local_c - 1;
          } while (local_c != 0);
        }
        if (*(int *)*piVar7 != 0) {
          puVar4 = *(undefined4 * PTR32 *)*piVar7;
          if (puVar4 != (undefined4 *)0x0) {
            if (puVar4[-1] == 0) {
              F_00406b30(puVar4 - 1);
            }
            else {
              ((GEN_TCODE *)*(gen_code32 *)*puVar4)(puVar4 GEN_EDX_ARG,3);
            }
          }
          *(undefined4 *)*piVar7 = 0;
        }
        if (*piVar7 != 0) {
          F_00406ad0(*piVar7);
          *piVar7 = 0;
        }
      }
      iVar8 = *(int *)((int)this + 0x48);
      if (iVar8 != *(int *)((int)this + 0x4c)) {
        F_00c46e20(iVar8,*(int *)((int)this + 0x4c),0);
        *(int *)((int)this + 0x4c) = iVar8;
      }
    }
    if ((*(int *)this != 0) && (*(char *)((int)this + 0x18) == '\x02')) {
      uVar5 = 0;
      if (*(short *)((int)this + 0x10) != 0) {
        do {
          iVar8 = *(int *)this + 4 + (uint)uVar5 * 0x10;
          iVar3 = *(int *)(iVar8 + 4);
          if (iVar3 == 0) {
            if ((*(int *)(iVar8 + 8) != 0) &&
               (uVar6 = F_005873b0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0xc) GEN_EDX_ARG,*(int *)(iVar8 + 8)), uVar6 == 0
               )) goto LAB_005900cb;
          }
          else if (iVar3 == 1) {
            if (*(int *)(iVar8 + 8) != 0) {
              F_005881e0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x2c) GEN_EDX_ARG,*(int *)(iVar8 + 8));
              goto LAB_005900cb;
            }
          }
          else if ((iVar3 == 2) && (piVar2 = *(int * PTR32 *)(iVar8 + 8), piVar2 != (int *)0x0)) {
            ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG);
LAB_005900cb: ;
            *(undefined4 *)(iVar8 + 8) = 0;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(ushort *)((int)this + 0x10));
      }
      iVar8 = *(int *)this;
      if (iVar8 != 0) {
        iVar3 = *(int *)(iVar8 - 4) - 1;
        if (-1 < iVar3) {
          puVar4 = ((undefined4 *)GEN_TOP((*(int *)(iVar8 - 4) * 0x10 + iVar8 + 4)));
          do {
            puVar4 = puVar4 - 4;
            iVar3 = iVar3 - 1;
            *puVar4 = (*(undefined * PTR32 (*)[1])REFP(0x10a0c7c));
          } while (-1 < iVar3);
        }
        F_00406b30(iVar8 - 4);
        *(undefined4 *)this = 0;
      }
    }
    if ((*(int *)((int)this + 4) != 0) && (*(char *)((int)this + 0x18) == '\x02')) {
      uVar5 = 0;
      if (*(short *)((int)this + 0x12) != 0) {
        do {
          iVar8 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 8 + (uint)uVar5 * 0xc)));
          if (iVar8 != 0) {
            F_00406b30(iVar8);
            *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8 + (uint)uVar5 * 0xc))) = 0;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(ushort *)((int)this + 0x12));
      }
      if (*(int *)((int)this + 4) != 0) {
        F_00406810(*(int *)((int)this + 4));
        *(undefined4 *)((int)this + 4) = 0;
      }
    }
    if ((*(undefined * PTR32 *)((int)this + 0x28) != (undefined *)0x0) && (*(char *)((int)this + 0x18) == '\x02')) {
      F_0056b9c0(*(undefined * PTR32 *)((int)this + 0x28) GEN_EDX_ARG);
      this_00 = *(undefined * PTR32 *)((int)this + 0x28);
      if (this_00 != (undefined *)0x0) {
        F_005cdd00(this_00 GEN_EDX_ARG);
        F_00406ad0(this_00);
        *(undefined4 *)((int)this + 0x28) = 0;
      }
    }
    if (*(int *)((int)this + 0xc) != 0) {
      F_00406ad0(*(int *)((int)this + 0xc));
      *(undefined4 *)((int)this + 0xc) = 0;
    }
    if (*(int *)((int)this + 0x24) != 0) {
      F_00406b30(*(int *)((int)this + 0x24));
      *(undefined4 *)((int)this + 0x24) = 0;
    }
    uVar6 = 0;
    *(undefined2 *)((int)this + 0x2e) = 0;
    iVar8 = *(int *)((int)this + 0x38);
    if (iVar8 != *(int *)((int)this + 0x3c)) {
      uVar6 = F_00c46e20(iVar8,*(int *)((int)this + 0x3c),0);
      *(int *)((int)this + 0x3c) = iVar8;
    }
    if (*(char *)((int)this + 0x18) == '\x02') {
      puVar4 = *(undefined4 * PTR32 *)((int)this + 0x34);
      if (puVar4 == (undefined4 *)0x0) {
        return uVar6;
      }
      uVar6 = ((GEN_TCODE *)*(gen_code32 *)*puVar4)(puVar4 GEN_EDX_ARG,1);
    }
    *(undefined4 *)((int)this + 0x34) = 0;
  }
  return uVar6;
}

/* ref: FUN_00590210 */
GEN_FRAME uint GEN_THISCALL F_00590210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x590210u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int * piVar7;
  
  iVar6 = (int)((int)(uintptr_t)param_1) * 10000 + 1 + param_2;
  piVar3 = *(int * PTR32 *)((int)this + 0x48);
  if (piVar3 != *(int * PTR32 *)((int)this + 0x4c)) {
    while (*(int *)(*(int *)*piVar3 + 4) != iVar6) {
      piVar3 = piVar3 + 1;
      if (piVar3 == *(int * PTR32 *)((int)this + 0x4c)) {
        return (uint)piVar3;
      }
    }
    piVar7 = (int *)*piVar3;
    if (piVar7 != (int *)0x0) {
      piVar3 = *(int * PTR32 *)((int)this + 0x38);
      iVar4 = 0;
      if (piVar3 != *(int * PTR32 *)((int)this + 0x3c)) {
LAB_00590280: ;
        iVar5 = *piVar3;
        if (*(int *)(iVar5 + 4) != *(int *)(*piVar7 + 4)) goto code_r0x00590287;
        iVar1 = *(int *)(iVar5 + 0xc);
        param_2 = 0;
        if (piVar7[1] != 0) {
          do {
            iVar5 = *piVar3;
            iVar4 = *(int *)(iVar5 + 0x10);
            F_00c46e20(piVar3,piVar3 + 1,(*(int *)((int)this + 0x3c) - (int)(piVar3 + 1) >> 2) * 4);
            *(int *)((int)this + 0x3c) = *(int *)((int)this + 0x3c) - 4;
            param_2 = param_2 + 1;
          } while (param_2 < (uint)piVar7[1]);
        }
        if (iVar1 != 0) {
          *(int *)(iVar1 + 0x10) = iVar4;
        }
        if (iVar4 != 0) {
          *(int *)(iVar4 + 0xc) = iVar1;
        }
        for (iVar4 = *(int *)(iVar1 + 8); iVar4 != 0; iVar4 = *(int *)(iVar4 + 8)) {
          if (*(int *)(iVar4 + 0x14) == iVar5) {
            *(int *)(iVar4 + 0x14) = iVar1;
          }
          *(short *)(iVar4 + 0x1a) = *(short *)(iVar4 + 0x1a) - (short)piVar7[1];
          if (*(int *)(iVar4 + 4) == 1) break;
        }
      }
LAB_00590317: ;
      piVar7 = *(int * PTR32 *)((int)this + 0x48);
      piVar3 = *(int * PTR32 *)((int)this + 0x4c);
      if (piVar7 != piVar3) {
        while (*(int *)(*(int *)*piVar7 + 4) != iVar6) {
          piVar7 = piVar7 + 1;
          if (piVar7 == piVar3) {
            return (uint)piVar3;
          }
        }
        piVar3 = ((int *)GEN_TOP(((int *)*piVar7)[1]));
        if (piVar3 != (int *)0x0) {
          iVar6 = 0;
          param_1 = piVar3;
          do {
            F_0058fce0(this GEN_EDX_ARG,*(int *)*piVar7 + iVar6);
            iVar6 = iVar6 + 0x90;
            param_1 = (int *)((int)param_1 - 1);
          } while (param_1 != (int *)0x0);
        }
        if (*(int *)*piVar7 != 0) {
          puVar2 = *(undefined4 * PTR32 *)*piVar7;
          if (puVar2 != (undefined4 *)0x0) {
            if (puVar2[-1] == 0) {
              F_00406b30(puVar2 - 1);
            }
            else {
              ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,3);
            }
          }
          *(undefined4 *)*piVar7 = 0;
        }
        if (*piVar7 != 0) {
          F_00406ad0(*piVar7);
          *piVar7 = 0;
        }
        F_00c46e20(piVar7,piVar7 + 1,(*(int *)((int)this + 0x4c) - (int)(piVar7 + 1) >> 2) * 4);
        *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) - 4;
        *(short *)((int)this + 0x16) = *(short *)((int)this + 0x16) - (short)piVar3;
        *(short *)((int)this + 0x2e) = *(short *)((int)this + 0x2e) - (short)piVar3;
      }
    }
  }
  return (uint)piVar3;
code_r0x00590287: ;
  piVar3 = piVar3 + 1;
  if (piVar3 == *(int * PTR32 *)((int)this + 0x3c)) goto LAB_00590317;
  goto LAB_00590280;
}

/* ref: FUN_005903f0 */
GEN_NOFRAME uint GEN_THISCALL F_005903f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5903f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10a1944));
  *(undefined4 *)((int)this + 0x30) = 0;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined2 *)((int)this + 0x3a) = 0;
  *(undefined2 *)((int)this + 0x52) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined2 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb0) = (*(undefined * PTR32 (*)[2])REFP(0x10a1934));
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0xffffffff;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = uVar1;
  *(undefined4 *)((int)this + 0x114) = uVar1;
  *(undefined4 *)((int)this + 0x118) = uVar1;
  *(undefined4 *)((int)this + 0x11c) = uVar1;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0xffff0000;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x100) = 100;
  *(undefined4 *)((int)this + 0x104) = 100;
  *(undefined2 *)((int)this + 0x126) = 0;
  *(undefined2 *)((int)this + 0x128) = 0;
  *(undefined2 *)((int)this + 0x12a) = 0;
  *(undefined2 *)((int)this + 300) = 0;
  *(undefined2 *)((int)this + 0x12e) = 0;
  *(undefined2 *)((int)this + 0x130) = 0;
  *(undefined2 *)((int)this + 0x132) = 0;
  *(undefined2 *)((int)this + 0x134) = 0;
  *(undefined2 *)((int)this + 0x136) = 0xffff;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x144) = 0x97ff;
  *(undefined2 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x150) = 0x97ff;
  *(undefined2 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0x97ff;
  *(undefined2 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x168) = 0x97ff;
  *(undefined2 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 0x97ff;
  *(undefined2 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(uint *)((int)this + 0x108) = *(uint *)((int)this + 0x108) | 0x20000000;
  *(undefined1 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  return (uint)this;
}

/* ref: FUN_00590600 */
GEN_NOFRAME uint GEN_THISCALL F_00590600(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x590600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10a1944));
  iVar1 = *(int *)((int)this + 0xe4);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0xec) - iVar1 >> 2) * 4,400);
  }
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  F_0058d4b0((undefined *)((int)this + 0xb0) GEN_EDX_ARG);
  uVar2 = F_0057f460((undefined *)((int)this + 0x24) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar2;
}

/* ref: FUN_00590670 */
GEN_FRAME byte GEN_THISCALL F_00590670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x590670u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  int iVar2;
  char * pcVar3;
  
  iVar1 = (*(int *)&gen_args[1]);
  if (((*(int *)&gen_args[1]) != 0) && ((*(byte *)((*(int *)&gen_args[1]) + 0xf8) & 0x10) == 0)) {
    *(byte *)((*(int *)&gen_args[1]) + 0xf8) = *(byte *)((*(int *)&gen_args[1]) + 0xf8) | 0x10;
    F_005cd980(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + ((*(ushort *)((*(int *)&gen_args[1]) + 0xf6) & 0xf) * 3 + 6) * 4))) GEN_EDX_FWD,&(*(int *)&gen_args[1]));
    *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) | 1;
    if (((*(uint *)(iVar1 + 0x120) >> 2 & 1) != 0) && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xdc))) != 0)) {
      F_0058cb40((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,iVar1,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xdc))),0);
    }
    iVar2 = 0;
    pcVar3 = (char *)(iVar1 + 0x144);
    do {
      if (*pcVar3 != -1) {
        if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd8))) != 0) {
          F_0058cb40((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,iVar1,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd8))),1);
        }
        return 1;
      }
      iVar2 = iVar2 + 1;
      pcVar3 = pcVar3 + 0xc;
    } while (iVar2 < 5);
    return 1;
  }
  return 0;
}

/* ref: FUN_00590750 */
GEN_FRAME unsigned int GEN_THISCALL F_00590750(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x590750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int * piVar4;
  undefined4 * puVar5;
  int * piVar6;
  
  iVar1 = *(int *)((int)this + 0xc);
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined1 *)(iVar1 + 0x20) = 0;
  F_0058c5d0((undefined *)(iVar1 + 4) GEN_EDX_FWD);
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0xc);
  if (puVar2 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  F_0058c5d0(((undefined *)GEN_TOP((*(int *)((int)this + 8) + 4))) GEN_EDX_ARG);
  puVar2 = *(undefined4 * PTR32 *)((int)this + 8);
  if (puVar2 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
    *(undefined4 *)((int)this + 8) = 0;
  }
  F_0058d050(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG);
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (puVar2 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x10);
  for (puVar3 = (undefined4 *)*puVar2; puVar3 != puVar2; puVar3 = (undefined4 *)*puVar3) {
    iVar1 = puVar3[2];
    piVar4 = *(int * PTR32 *)(iVar1 + 0x18);
    if (piVar4 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4 GEN_EDX_ARG);
      *(undefined4 *)(iVar1 + 0x18) = 0;
    }
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    puVar5 = (undefined4 *)puVar3[2];
    if (puVar5 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar5)(puVar5 GEN_EDX_ARG,1);
      puVar3[2] = 0;
    }
  }
  piVar4 = *(int * PTR32 *)((int)this + 0x10);
  piVar6 = (int *)*piVar4;
  *piVar4 = (int)piVar4;
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) = *(int *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0x14) = 0;
  if (piVar6 != *(int * PTR32 *)((int)this + 0x10)) {
    do {
      piVar4 = (int *)*piVar6;
      F_00429760(piVar6,0x10,400);
      piVar6 = piVar4;
    } while (piVar4 != (int *)*(int *)((int)this + 0x10));
  }
  piVar4 = *(int * PTR32 *)((int)this + 0x1c);
  piVar6 = (int *)*piVar4;
  *piVar4 = (int)piVar4;
  *((int *)GEN_TOP((*(int *)((int)this + 0x1c) + 4))) = *(int *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x20) = 0;
  if (piVar6 != *(int * PTR32 *)((int)this + 0x1c)) {
    do {
      piVar4 = (int *)*piVar6;
      F_00429760(piVar6,0xc,400);
      piVar6 = piVar4;
    } while (piVar4 != (int *)*(int *)((int)this + 0x1c));
  }
  return 0;
}

/* ref: FUN_00590870 */
GEN_FRAME byte GEN_THISCALL F_00590870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x590870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((*(int *)((int)this + 0xc) == 0) && ((*(int *)&gen_a1) != 0)) {
    *(undefined4 *)((int)this + 4) = 1;
    *(int *)((int)this + 0xc) = (*(int *)&gen_a1);
    uVar3 = 6;
    uVar2 = 0;
    uVar1 = F_004353d0(*(uint *)((*(int *)&gen_a1) + 0x10) >> 0xe & 0xff);
    F_0058f730((undefined *)((int)this + 0x18) GEN_EDX_ARG,uVar1,uVar2,uVar3);
    uVar3 = 6;
    uVar2 = 0;
    uVar1 = F_004353e0((uint)*(byte *)((*(int *)&gen_a1) + 0x10),
                         (uint)((byte)(*(uint *)((*(int *)&gen_a1) + 0x10) >> 0x16) & 0xf));
    F_0058f730((undefined *)((int)this + 0x24) GEN_EDX_ARG,uVar1,uVar2,uVar3);
    return 1;
  }
  return 0;
}

/* ref: FUN_00590930 */
GEN_NOFRAME uint GEN_THISCALL F_00590930(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x590930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a0fd8));
  F_00588690((undefined *)((int)this + 4));
  F_00588690((undefined *)((int)this + 0x10));
  F_005c87d0((undefined *)((int)this + 0x10) GEN_EDX_ARG);
  uVar1 = F_005c87d0((undefined *)((int)this + 4) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00590960 */
GEN_FRAME uint GEN_THISCALL F_00590960(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x590960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 gen_out[0x4];
  uint uVar1;
  uint uVar2;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a1924));
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar2 = F_004296a0(0x18,0,400);
  *(uint *)((int)this + 8) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(int *)((int)this + 8);
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 8))) = *(int *)((int)this + 8);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x15))) = 1;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 0x50) = 1;
  *(undefined1 *)((int)this + 0x78) = 1;
  *(undefined1 *)((int)this + 0xa0) = 1;
  *(undefined1 *)((int)this + 200) = 1;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) = (*(undefined * PTR32 (*)[2])REFP(0x10a0d2c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[2])REFP(0x10a0d2c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x80) = (*(undefined * PTR32 (*)[2])REFP(0x10a0d2c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa8) = (*(undefined * PTR32 (*)[2])REFP(0x10a0d2c));
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined1 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x40) = 300000;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x68) = 300000;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x90) = 100000;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0xb8) = 100000;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  F_00c47745(uVar1 ^ (uint)(uint)(gen_out + 0x0) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00590aa0 */
GEN_NOFRAME uint GEN_THISCALL F_00590aa0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x590aa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  uVar1 = F_0058d250(this GEN_EDX_FWD);
  iVar2 = 0;
  puVar3 = (undefined4 *)((int)this + 0x34);
  do {
    if ((undefined *)*puVar3 != (undefined *)0x0) {
      uVar1 = F_00583770((undefined *)*puVar3 GEN_EDX_ARG,0x3a,iVar2,this,0);
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 10;
  } while (iVar2 < 4);
  return uVar1;
}

/* ref: FUN_00590ad0 */
GEN_FRAME uint GEN_THISCALL F_00590ad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x590ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * pvVar1;
  undefined * this_00;
  undefined4 * puVar2;
  uint in_EAX = 0;
  uint uVar3;
  undefined4 * puVar4;
  
  puVar2 = (*(undefined4 * PTR32 *)&gen_args[4]);
  this_00 = (*(undefined * PTR32 *)&gen_args[3]);
  if ((((*(undefined * PTR32 *)&gen_args[3]) != (undefined *)0x0) && ((*(undefined4 * PTR32 *)&gen_args[4]) != (undefined4 *)0x0)) && ((*(int *)&gen_args[2]) != 0)) {
    F_005cd500(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[4]),&(*(undefined * PTR32 *)&gen_args[3]));
    if ((*(undefined4 * PTR32 *)&gen_args[4]) == *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))) {
      uVar3 = F_00404270();
      puVar4 = (undefined4 *)F_00406bd0(0x14,0,uVar3,0);
      if (puVar4 == (undefined4 *)0x0) {
        return 0;
      }
      *puVar4 = *puVar2;
      puVar4[1] = puVar2[1];
      puVar4[2] = puVar2[2];
      puVar4[3] = (*(int *)&gen_args[2]);
      *(undefined1 *)(puVar4 + 4) = (undefined1)(*(undefined4 *)&gen_args[1]);
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = puVar4;
      (*(undefined * PTR32 *)(gen_frame + 0x14)) = this_00;
      F_005d04e0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),&(*(undefined * PTR32 *)(gen_frame + 0x14)));
      F_00568380(this_00 GEN_EDX_ARG,6,0,(*(undefined * PTR32 *)&gen_args[0]),0,0);
      F_00568380(this_00 GEN_EDX_ARG,7,0,(*(undefined * PTR32 *)&gen_args[0]),0,0);
      F_00568380(this_00 GEN_EDX_ARG,3,0,(*(undefined * PTR32 *)&gen_args[0]),0,0);
      in_EAX = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) + 0x1c)));
      pvVar1 = *(undefined * PTR32 *)(in_EAX + 8);
    }
    else {
      puVar4 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)&gen_args[4])[4]));
      *(undefined1 *)(puVar4 + 4) = (undefined1)(*(undefined4 *)&gen_args[1]);
      *puVar4 = *puVar2;
      puVar4[1] = puVar2[1];
      puVar4[2] = puVar2[2];
      in_EAX = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14)));
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(in_EAX + 0x1c) + 8)));
    }
    if ((pvVar1 == this_00) && (in_EAX = F_0055a350(this_00 GEN_EDX_ARG), (char)in_EAX != '\0')) {
      in_EAX = F_0058d370((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,this_00);
    }
  }
  return in_EAX;
}

/* ref: FUN_00590be0 */
GEN_FRAME unsigned int GEN_THISCALL F_00590be0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x590be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = (*(int *)&gen_args[3]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((*(int *)&gen_args[3]) != 0) {
    F_005cd500(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(int *)&gen_args[3]));
    if (((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))) && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) == iVar2)) {
      puVar1 = *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10);
      *(undefined1 *)(puVar1 + 4) = (undefined1)(*(undefined4 *)&gen_args[1]);
      *puVar1 = *(*(undefined4 * PTR32 *)&gen_args[4]);
      puVar1[1] = (*(undefined4 * PTR32 *)&gen_args[4])[1];
      puVar1[2] = (*(undefined4 * PTR32 *)&gen_args[4])[2];
      F_0058d370((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))));
    }
  }
  return;
}

/* ref: FUN_00590c40 */
GEN_FRAME uint GEN_THISCALL F_00590c40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x590c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  
  piVar4 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x14) + 0x14)));
  if (param_1 != 0) {
    piVar1 = *(int * PTR32 *)((int)piVar4 + 0xb4);
    piVar4 = (int *)*piVar1;
    if (piVar4 != piVar1) {
      while (*(byte *)(piVar4[2] + 0x13a) != param_1) {
        piVar4 = (int *)*piVar4;
        if (piVar4 == piVar1) {
          return (uint)piVar4;
        }
      }
      piVar4 = (int *)piVar4[2];
      if (((piVar4 != (int *)0x0) && (iVar2 = *(int *)((int)this + 0x18), iVar2 != 0)) &&
         (iVar3 = iVar2, *(int *)((int)piVar4 + 0x90) != 0)) {
        while (iVar3 != *(int *)((int)piVar4 + 0x90)) {
          piVar1 = (int *)(iVar3 + 8);
          iVar3 = *piVar1;
          if (*piVar1 == 0) {
            return 0;
          }
        }
        piVar4 = (int *)F_0058d370(this GEN_EDX_FWD,iVar2);
      }
    }
  }
  return (uint)piVar4;
}

/* ref: FUN_00590cc0 */
GEN_NOFRAME uint GEN_THISCALL F_00590cc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x590cc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0ff0));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[3])REFP(0x10a0fe0));
  F_00588e00(this GEN_EDX_FWD,0);
  iVar2 = *(int *)((int)this + 0x14);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x10);
    F_00406ad0(iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  iVar2 = *(int *)((int)this + 0x14);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x10);
    F_00406ad0(iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  uVar3 = F_005c9330((undefined *)((int)this + 8) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0964));
  return uVar3;
}

/* ref: FUN_00590d40 */
GEN_FRAME uint GEN_THISCALL F_00590d40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x590d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int iVar2;
  int iVar3;
  
  (*(undefined4 *)(gen_frame + 0x10)) = param_1;
  ((undefined4 *)(gen_frame + 0x8))[0] = 0;
  F_005d1020((undefined *)((int)this + 0x14) GEN_EDX_FWD,((undefined4 *)(gen_frame + 0x8)));
  iVar1 = *(int *)((int)this + 0x14);
  iVar3 = (*(int *)((int)this + 0x18) - iVar1) / 0x14;
  if (iVar3 == 1) {
    *(undefined4 *)(iVar1 + 4) = 0;
    return *(int *)((int)this + 0x18) - 0x14;
  }
  iVar2 = (iVar3 * 5 - 10) * 4;
  *(int *)(iVar2 + iVar1) = iVar1 - 0x14 + iVar3 * 0x14;
  *((int *)GEN_TOP((*(int *)((int)this + 0x14) - 0x10 + iVar3 * 0x14))) = iVar2 + *(int *)((int)this + 0x14);
  return *(int *)((int)this + 0x18) - 0x14;
}

/* ref: Component::GUI2::AtkComponentBase::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_00590dd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x590dd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c) GEN_EDX_FWD,0x49,0,this,0);
  uVar1 = F_0058fe90(this + 4 GEN_EDX_ARG);
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentIcon::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_00590e00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x590e00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x98) != 0) {
    F_0058c5d0(((undefined *)GEN_TOP((*(int *)(this + 0x98) + 4))) GEN_EDX_FWD);
  }
  iVar1 = *(int *)(this + 0xac);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) & 0xffefffff;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x80;
  }
  *(undefined4 *)(this + 0x84) = 0xffffffff;
  *(undefined4 *)(this + 0x88) = 0xffffffff;
  F_005618f0(this GEN_EDX_ARG);
  F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c) GEN_EDX_ARG,0x49,0,this,0);
  uVar2 = F_0058fe90(this + 4 GEN_EDX_ARG);
  return uVar2;
}

/* ref: Component::GUI2::AtkComponentButton::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_00590e70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x590e70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c) GEN_EDX_FWD,0x49,0,this,0);
  uVar1 = F_0058fe90(this + 4 GEN_EDX_ARG);
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentCheckBox::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_00590ea0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x590ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c) GEN_EDX_FWD,0x49,0,this,0);
  uVar1 = F_0058fe90(this + 4 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00590ed0 */
GEN_NOFRAME uint GEN_THISCALL F_00590ed0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x590ed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x10a1204));
  iVar1 = REFG(int, 0x1379860);
  F_00588630(REFG(int, 0x1379860) + 0xc4,this);
  F_00588630(iVar1 + 0xd0,this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[23])REFP(0x10a113c));
  F_00580e00((undefined *)((int)this + 0xd0) GEN_EDX_ARG);
  F_00580e00((undefined *)((int)this + 0xa8) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar2 = F_0057f460((undefined *)((int)this + 4) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar2;
}

/* ref: FUN_00590f40 */
GEN_FRAME uint GEN_THISCALL F_00590f40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x590f40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  short * psVar4;
  int * piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int * piVar9;
  uint local_18;
  int local_c;
  byte local_5;
  
  local_5 = 0;
  if (*(char *)((int)this + 0x110) == '\0') {
LAB_0059116a: ;
    uVar6 = 0;
    if (*(int *)((int)this + 0xa0) != 0) {
      uVar6 = F_00406810(*(int *)((int)this + 0xa0));
      *(undefined4 *)((int)this + 0xa0) = 0;
    }
    return uVar6;
  }
  psVar4 = ((short *)GEN_TOP((*(int *)((int)this + 0xa0) + 10)));
LAB_00590f70: ;
  if (psVar4[-1] != 0) {
    iVar7 = *psVar4 * 10000 + 0x3e9;
    for (piVar5 = *(int * PTR32 *)((int)this + 0x4c); piVar5 != *(int * PTR32 *)((int)this + 0x50);
        piVar5 = piVar5 + 1) {
      if (*(int *)(*(int *)*piVar5 + 4) == iVar7) {
        piVar5 = (int *)*piVar5;
        if (piVar5 != (int *)0x0) {
          piVar9 = *(int * PTR32 *)((int)this + 0x3c);
          local_c = 0;
          if (piVar9 == *(int * PTR32 *)((int)this + 0x40)) goto LAB_00591086;
          goto LAB_00590fe0;
        }
        break;
      }
    }
  }
  goto LAB_0059114b;
LAB_00590fe0: ;
  iVar8 = *piVar9;
  if (*(int *)(iVar8 + 4) != *(int *)(*piVar5 + 4)) goto code_r0x00590fe7;
  iVar1 = *(int *)(iVar8 + 0xc);
  local_18 = 0;
  if (piVar5[1] != 0) {
    do {
      iVar8 = *piVar9;
      local_c = *(int *)(iVar8 + 0x10);
      F_00c46e20(piVar9,piVar9 + 1,(*(int *)((int)this + 0x40) - (int)(piVar9 + 1) >> 2) * 4);
      *(int *)((int)this + 0x40) = *(int *)((int)this + 0x40) - 4;
      local_18 = local_18 + 1;
    } while (local_18 < (uint)piVar5[1]);
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x10) = local_c;
  }
  if (local_c != 0) {
    *(int *)(local_c + 0xc) = iVar1;
  }
  for (iVar2 = *(int *)(iVar1 + 8); iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
    if (*(int *)(iVar2 + 0x14) == iVar8) {
      *(int *)(iVar2 + 0x14) = iVar1;
    }
    *(short *)(iVar2 + 0x1a) = *(short *)(iVar2 + 0x1a) - (short)piVar5[1];
    if (*(int *)(iVar2 + 4) == 1) break;
  }
LAB_00591086: ;
  piVar5 = *(int * PTR32 *)((int)this + 0x4c);
  while( true ) {
    if (piVar5 == *(int * PTR32 *)((int)this + 0x50)) goto LAB_0059114b;
    if (*(int *)(*(int *)*piVar5 + 4) == iVar7) break;
    piVar5 = piVar5 + 1;
  }
  iVar7 = *(int *)(*piVar5 + 4);
  if (iVar7 != 0) {
    iVar8 = 0;
    local_18 = iVar7;
    do {
      F_0058fce0((undefined *)((int)this + 4) GEN_EDX_ARG,*(int *)*piVar5 + iVar8);
      iVar8 = iVar8 + 0x90;
      local_18 = local_18 - 1;
    } while (local_18 != 0);
  }
  if (*(int *)*piVar5 != 0) {
    puVar3 = *(undefined4 * PTR32 *)*piVar5;
    if (puVar3 != (undefined4 *)0x0) {
      if (puVar3[-1] == 0) {
        F_00406b30(puVar3 - 1);
      }
      else {
        ((GEN_TCODE *)*(gen_code32 *)*puVar3)(puVar3 GEN_EDX_ARG,3);
      }
    }
    *(undefined4 *)*piVar5 = 0;
  }
  if (*piVar5 != 0) {
    F_00406ad0(*piVar5);
    *piVar5 = 0;
  }
  F_00c46e20(piVar5,piVar5 + 1,(*(int *)((int)this + 0x50) - (int)(piVar5 + 1) >> 2) * 4);
  *(int *)((int)this + 0x50) = *(int *)((int)this + 0x50) - 4;
  *(short *)((int)this + 0x1a) = *(short *)((int)this + 0x1a) - (short)iVar7;
  *(short *)((int)this + 0x32) = *(short *)((int)this + 0x32) - (short)iVar7;
LAB_0059114b: ;
  local_5 = local_5 + 1;
  psVar4 = psVar4 + 6;
  if (*(byte *)((int)this + 0x110) <= local_5) goto LAB_0059116a;
  goto LAB_00590f70;
code_r0x00590fe7: ;
  piVar9 = piVar9 + 1;
  if (piVar9 == *(int * PTR32 *)((int)this + 0x40)) goto LAB_00591086;
  goto LAB_00590fe0;
}

/* ref: FUN_00591190 */
GEN_NOFRAME uint GEN_THISCALL F_00591190(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x591190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005814a0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x130) = (*(undefined * PTR32 (*)[15])REFP(0x10a0b24));
  *(undefined4 *)((int)this + 0x144) = 0xffffffff;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined1 *)((int)this + 0x14a) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined2 *)((int)this + 0x148) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x10a1a84));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x130) = (*(undefined * PTR32 (*)[15])REFP(0x10a1a44));
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  *(undefined4 *)((int)this + 0x1f0) = 0;
  *(undefined4 *)((int)this + 500) = 0;
  *(byte *)((int)this + 0x220) = *(byte *)((int)this + 0x220) & 0xf0;
  *(undefined4 *)((int)this + 0x1fc) = 0;
  *(undefined4 *)((int)this + 0x210) = 0;
  *(undefined4 *)((int)this + 0x214) = 0;
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined4 *)((int)this + 0x200) = 0;
  *(undefined4 *)((int)this + 0x204) = 0;
  *(undefined2 *)((int)this + 0x208) = 0;
  *(undefined2 *)((int)this + 0x20c) = 0;
  *(undefined2 *)((int)this + 0x8d) = 0x101;
  return (uint)this;
}

/* ref: FUN_00591270 */
GEN_NOFRAME uint GEN_THISCALL F_00591270(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x591270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x10a1a84));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x130) = (*(undefined * PTR32 (*)[15])REFP(0x10a1a44));
  iVar1 = *(int *)((int)this + 0x1ec);
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 500) - iVar1) / 0xc) * 0xc,400);
  }
  *(undefined4 *)((int)this + 0x1ec) = 0;
  *(undefined4 *)((int)this + 0x1f0) = 0;
  *(undefined4 *)((int)this + 500) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x130) = (*(undefined * PTR32 (*)[15])REFP(0x10a0b24));
  if (*(int *)((int)this + 0x13c) != 0) {
    F_00406ad0(*(int *)((int)this + 0x13c));
    *(undefined4 *)((int)this + 0x13c) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[23])REFP(0x10a113c));
  F_00580e00((undefined *)((int)this + 0xd0) GEN_EDX_ARG);
  F_00580e00((undefined *)((int)this + 0xa8) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar2 = F_0057f460((undefined *)((int)this + 4) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar2;
}

/* ref: FUN_00591330 */
GEN_FRAME uint GEN_THISCALL F_00591330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x591330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint in_EAX = 0;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)this + 0x1f0);
  for (iVar3 = *(int *)((int)this + 0x1ec); iVar3 != iVar1; iVar3 = iVar3 + 0xc) {
    in_EAX = F_005873b0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0xc) GEN_EDX_FWD,*(undefined4 *)(iVar3 + 4));
  }
  uVar2 = *(uint *)((int)this + 0x1f0);
  if (*(uint *)((int)this + 0x1ec) != uVar2) {
    *(uint *)((int)this + 0x1f0) = *(uint *)((int)this + 0x1ec);
    in_EAX = uVar2;
  }
  if (((char)param_1 != '\0') && ((*(byte *)((int)this + 0x220) & 4) == 0)) {
    in_EAX = 0;
    if (*(int *)((int)this + 0x1e0) != 0) {
      uVar2 = F_0055da10(*(int *)((int)this + 0x1e0));
      in_EAX = 0;
      if (uVar2 != 0) {
        in_EAX = F_0058c5d0((undefined *)(uVar2 + 4) GEN_EDX_ARG);
      }
    }
  }
  return in_EAX;
}

/* ref: Component::GUI2::AtkComponentTreeList::vf25 */
GEN_NOFRAME uint GEN_THISCALL F_005913e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5913e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_0058e100(this GEN_EDX_FWD);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x80))(this GEN_EDX_ARG);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x70))(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00591410 */
GEN_FRAME uint GEN_THISCALL F_00591410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x591410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  undefined4 * puVar4;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x130);
  for (puVar4 = *(undefined4 * PTR32 *)((int)this + 300); puVar4 != puVar1; puVar4 = puVar4 + 1) {
    piVar2 = (int *)*puVar4;
    if (piVar2 != (int *)0x0) {
      iVar3 = piVar2[4];
      if (iVar3 != 0) {
        F_00429760(iVar3,(piVar2[6] - iVar3 >> 2) * 4,400);
      }
      piVar2[4] = 0;
      piVar2[5] = 0;
      piVar2[6] = 0;
      iVar3 = *piVar2;
      if (iVar3 != 0) {
        F_00429760(iVar3,(piVar2[2] - iVar3 >> 2) * 4,400);
      }
      *piVar2 = 0;
      piVar2[1] = 0;
      piVar2[2] = 0;
      F_00406ad0(piVar2);
    }
  }
  iVar3 = *(int *)((int)this + 300);
  if (iVar3 != *(int *)((int)this + 0x130)) {
    F_00c46e20(iVar3,*(int *)((int)this + 0x130),0);
    *(int *)((int)this + 0x130) = iVar3;
  }
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined2 *)((int)this + 0x18c) = 0;
  return 0;
}

/* ref: FUN_00591550 */
GEN_FRAME uint GEN_THISCALL F_00591550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x591550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined1 *)(param_1 + 0x2a) = 1;
  uVar1 = param_1;
  if ((char)param_2 == '\0') {
    uVar1 = F_0058e260(this GEN_EDX_FWD);
  }
  return uVar1;
}

/* ref: FUN_00591570 */
GEN_FRAME uint GEN_THISCALL F_00591570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x591570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  int iVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 300);
  iVar2 = 0;
  do {
    if (piVar1 == *(int * PTR32 *)((int)this + 0x130)) {
LAB_005915a5: ;
      if ((char)param_2 == '\0') {
        piVar1 = (int *)F_0058e260(this GEN_EDX_FWD);
      }
      return (uint)piVar1;
    }
    if (iVar2 == param_1) {
      piVar1 = (int *)*piVar1;
      *(undefined1 *)((int)piVar1 + 0x2a) = 0;
      goto LAB_005915a5;
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + 1;
  } while( true );
}

/* ref: Component::GUI2::AtkComponentScrollBar::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_005915c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5915c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c) GEN_EDX_FWD,0x49,0,this,0);
  uVar1 = F_0058fe90(this + 4 GEN_EDX_ARG);
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentDropDownList::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_005915f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5915f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c) GEN_EDX_FWD,0x49,0,this,0);
  uVar1 = F_0058fe90(this + 4 GEN_EDX_ARG);
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentIconText::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_00591620(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x591620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x88) != 0) {
    F_0058c5d0(((undefined *)GEN_TOP((*(int *)(this + 0x88) + 4))) GEN_EDX_FWD);
  }
  iVar1 = *(int *)(this + 0x84);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) & 0xffefffff;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x80;
  }
  *(undefined4 *)(this + 0x98) = 0xffffffff;
  *(undefined4 *)(this + 0x9c) = 0xffffffff;
  F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c) GEN_EDX_ARG,0x49,0,this,0);
  uVar2 = F_0058fe90(this + 4 GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00591690 */
GEN_FRAME uint GEN_THISCALL F_00591690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x591690u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00590ad0((undefined *)(REFG(int, 0x1379860) + 0xe0) GEN_EDX_FWD,param_1,param_2,
                       *(undefined4 *)((int)this + 0x68),param_3);
  return uVar1;
}

/* ref: FUN_005916c0 */
GEN_FRAME uint GEN_THISCALL F_005916c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5916c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  
  iVar1 = REFG(int, 0x1379860);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x84) + 0x14))))((int)this + 0x84);
  uVar2 = F_00590ad0((undefined *)(iVar1 + 0xe0) GEN_EDX_ARG,param_1,param_2,uVar2,param_3);
  return uVar2;
}

/* ref: Component::GUI2::AtkComponentInputBase::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_00591700(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x591700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c) GEN_EDX_FWD,0x49,0,this,0);
  uVar1 = F_0058fe90(this + 4 GEN_EDX_ARG);
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentNumericInput::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_00591730(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x591730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c) GEN_EDX_FWD,0x49,0,this,0);
  uVar1 = F_0058fe90(this + 4 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00591760 */
GEN_FRAME uint GEN_THISCALL F_00591760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x591760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = *(uint *)((int)this + param_1 * 4 + 0x2a0);
  if (uVar2 == 0) {
    return 0;
  }
  if (1 < uVar2) {
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      iVar1 = *(int *)((int)this + 0x98);
      break;
    case 1: ;
      iVar1 = *(int *)((int)this + 0x9c);
      break;
    case 2: ;
      iVar1 = *(int *)((int)this + 0xa0);
      break;
    case 3: ;
      iVar1 = *(int *)((int)this + 0xa4);
      break;
    default: ;
      goto switchD_00591783_default;
    }
    if (iVar1 != 0) {
      uVar2 = *(uint *)(iVar1 + 4);
      if (10000 < uVar2) {
        uVar2 = uVar2 / 10000;
      }
      F_00590210((undefined *)((int)this + 4) GEN_EDX_FWD,uVar2,0);
    }
  }
switchD_00591783_default: ;
  iVar1 = *(int *)((int)this + param_1 * 4 + 0x2b0);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00406b30(iVar1 - 4);
    uVar2 = (uint)uVar3;
    *(undefined4 *)((int)this + param_1 * 4 + 0x2b0) = 0;
  }
  *(undefined4 *)((int)this + param_1 * 4 + 0x2a0) = 0;
  return uVar2;
}

/* ref: FUN_00591820 */
GEN_FRAME byte GEN_THISCALL F_00591820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x591820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + param_1 * 4 + 0xac);
  if (iVar1 != 0) {
    uVar2 = F_0058f6c0((undefined *)(iVar1 + 4) GEN_EDX_FWD,param_2,6);
    if (uVar2 == 0) {
      iVar1 = *(int *)((int)this + 0x88);
      if (iVar1 != 0) {
        *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) & 0xffefffff;
        *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x80;
      }
      *(undefined1 *)((int)this + 0xb8) = 1;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00591880 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00591880(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x591880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(char *)((int)this + 0x22d2b) != '\0') {
    F_0058f5e0(*(undefined * PTR32 *)((int)this + 0xb8) GEN_EDX_FWD);
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xd0))(this GEN_EDX_ARG);
    F_00558f10(this GEN_EDX_ARG);
    *(undefined1 *)((int)this + 0x22cf0) = 0;
    *(undefined2 *)((int)this + 0x22d2b) = 0;
  }
  return;
}

/* ref: FUN_005918c0 */
GEN_FRAME byte GEN_THISCALL F_005918c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5918c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * pcVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  char * pcVar5;
  
  switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)this + 0x22be8))) {
  case 2: ;
    F_00559010(this GEN_EDX_FWD);
    *(undefined1 *)((int)this + 0x22be8) = 0;
    return 0;
  case 3: ;
    if (((*(char *)((int)this + 0x22d28) == '\0') || (REFG(void * PTR32, 0x137104c) == (undefined *)0x0)) ||
       (bVar3 = F_00976910(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG), bVar3 == 0)) {
      if (*(char *)((int)this + 0x22d29) != '\0') {
        F_00c49908((int)this + 0x22d00,0x10,(int)this + 0x22cf0);
        *(undefined1 *)((int)this + 0x22be8) = 4;
        *(undefined1 *)((int)this + 0x22d29) = 0;
        F_00591880(this GEN_EDX_ARG);
        return 1;
      }
      *(undefined1 *)((int)this + 0x22be8) = 0;
      F_00591880(this GEN_EDX_ARG);
    }
    return 1;
  case 4: ;
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xdc))(this GEN_EDX_ARG,(int)this + 0x22d00);
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xa8))(this GEN_EDX_ARG,uVar4,1);
    *(undefined1 *)((int)this + 0x22be8) = 5;
    break;
  case 5: ;
    uVar4 = F_0056fad0((undefined *)((int)this + 0xec) GEN_EDX_ARG);
    if (uVar4 == 2) {
      pcVar1 = (char *)((int)this + 0x22d00);
      pcVar5 = pcVar1;
      do {
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      if (pcVar5 == (char *)((int)this + 0x22d01)) {
        return 0;
      }
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x14))(this GEN_EDX_ARG,pcVar1,0,0);
      *pcVar1 = '\0';
      return 0;
    }
    break;
  default: ;
    return 0;
  }
  return 1;
}

/* ref: Component::GUI2::AtkModule::vf17 */
GEN_FRAME uint GEN_THISCALL F_005919f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5919f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  this_00 = this + 0x22214;
  uVar1 = *(int *)(this + 0x22218) - *(int *)(this + 0x22214) >> 2;
  if (uVar1 <= param_1) {
    F_005d2940(this_00 GEN_EDX_FWD,param_1 + 1);
    *(uint *)(*(int *)this_00 + param_1 * 4) = param_2;
    return param_2;
  }
  *(uint *)(*(int *)this_00 + param_1 * 4) = param_2;
  return uVar1;
}

/* ref: Component::GUI2::AtkModule::vf20 */
GEN_FRAME byte GEN_THISCALL F_00591a40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x591a40u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[1]);
  if ((*(int * PTR32 *)&gen_args[1]) != (int *)0x0) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0xc))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_FWD,(*(int *)&gen_args[5]),0);
    if ((char)uVar3 != '\0') {
      if ((*(int *)&gen_args[2]) != 0) {
        bVar1 = *(byte *)((int)piVar2 + 0x13a);
        (*(int * PTR32 *)&gen_args[1]) = (int *)(uint)bVar1;
        F_005cdc90((*(undefined * PTR32 *)&gen_args[0]) + 0x22228 GEN_EDX_ARG,&(*(int *)&gen_args[5]),&(*(int * PTR32 *)&gen_args[1]));
        if ((*(int *)&gen_args[5]) != *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x2222c)))) {
          *(int *)((*(int *)&gen_args[5]) + 0x10) = (*(int *)&gen_args[2]);
          *(undefined4 *)((*(int *)&gen_args[5]) + 0x14) = (*(undefined4 *)&gen_args[3]);
          return 1;
        }
        (*(int *)(gen_frame + 0xc)) = (*(int *)&gen_args[2]);
        (*(uint *)(gen_frame + 0x8)) = (uint)bVar1;
        (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)&gen_args[3]);
        F_005d2f70((*(undefined * PTR32 *)&gen_args[0]) + 0x22228 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)),&(*(uint *)(gen_frame + 0x8)));
      }
      return 1;
    }
  }
  return 0;
}

/* ref: Component::GUI2::AtkModule::vf22 */
GEN_FRAME byte GEN_THISCALL F_00591af0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x591af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_0057f860(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x130))) GEN_EDX_FWD,(*(int *)&gen_args[1]));
  if (uVar2 != 0) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x130))) + 0x28))))
                      (*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x130))) GEN_EDX_ARG,uVar2,(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
    if (((char)uVar3 != '\0') || ((char)(*(uint *)&gen_args[6]) != '\0')) {
      if ((*(int *)&gen_args[4]) != 0) {
        bVar1 = *(byte *)(uVar2 + 0x13b);
        if (bVar1 == 0) {
          bVar1 = *(byte *)(uVar2 + 0x13a);
        }
        (*(uint *)&gen_args[6]) = (uint)bVar1;
        F_005cdc90((*(undefined * PTR32 *)&gen_args[0]) + 0x22228 GEN_EDX_ARG,&(*(int *)&gen_args[1]),&(*(uint *)&gen_args[6]));
        if ((*(int *)&gen_args[1]) != *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x2222c)))) {
          *(int *)((*(int *)&gen_args[1]) + 0x10) = (*(int *)&gen_args[4]);
          *(undefined4 *)((*(int *)&gen_args[1]) + 0x14) = (*(undefined4 *)&gen_args[5]);
          return 1;
        }
        (*(int *)(gen_frame + 0xc)) = (*(int *)&gen_args[4]);
        (*(uint *)(gen_frame + 0x8)) = (uint)bVar1;
        (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)&gen_args[5]);
        F_005d2f70((*(undefined * PTR32 *)&gen_args[0]) + 0x22228 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)),&(*(uint *)(gen_frame + 0x8)));
      }
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00591bc0 */
GEN_FRAME uint GEN_THISCALL F_00591bc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x591bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  if (this == (undefined *)0x0) {
    return 0xffffffff;
  }
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x8c) + 8))) +
                  (uint)*(ushort *)((int)this + 0x90) * 0xc)));
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = F_0058f6c0((undefined *)(iVar1 + 4) GEN_EDX_FWD,param_1,6);
  }
  return uVar2;
}

/* ref: FUN_00591c00 */
GEN_FRAME uint GEN_THISCALL F_00591c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x591c00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  if (this == (undefined *)0x0) {
    return 0xffffffff;
  }
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x8c) + 8))) +
                  (uint)*(ushort *)((int)this + 0x90) * 0xc)));
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = F_0058f730((undefined *)(iVar1 + 4) GEN_EDX_FWD,param_1,param_2,6);
  }
  return uVar2;
}

/* ref: FUN_00591c40 */
GEN_FRAME uint GEN_THISCALL F_00591c40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x591c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  if (this == (undefined *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x8c) + 8))) +
                    (uint)*(ushort *)((int)this + 0x90) * 0xc)));
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = F_0058f7a0((undefined *)(iVar1 + 4) GEN_EDX_FWD,param_1);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_00591c80 */
GEN_FRAME uint GEN_THISCALL F_00591c80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x591c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  
  if (this == (undefined *)0x0) {
    return 0xffffffff;
  }
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x8c) + 8))) +
                  (uint)*(ushort *)((int)this + 0x90) * 0xc)));
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 8) != 2) {
      F_0058c5d0((undefined *)(iVar1 + 4) GEN_EDX_FWD);
    }
    *(undefined4 *)(iVar1 + 8) = 2;
    *(int * PTR32 *)(iVar1 + 0xc) = param_1;
    if (param_1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_ARG);
    }
  }
  return 0;
}

/* ref: FUN_00591ce0 */
GEN_FRAME unsigned int GEN_THISCALL F_00591ce0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x591ce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * local_8;
  
  if (*(int *)((int)this + 0xa8) != 0) {
    F_00583770(((undefined *)GEN_TOP((*(int *)((int)this + 0xa8) + 0x23c))) GEN_EDX_FWD,0x49,0,(int)this + 0x3c,0);
    *(undefined4 *)((int)this + 0xa8) = 0;
  }
  F_0058d250((undefined *)((int)this + 0xe0) GEN_EDX_ARG);
  local_8 = (undefined4 *)((int)this + 0x114);
  iVar1 = 0;
  do {
    if ((undefined *)*local_8 != (undefined *)0x0) {
      F_00583770((undefined *)*local_8 GEN_EDX_ARG,0x3a,iVar1,(undefined *)((int)this + 0xe0),0);
    }
    local_8 = local_8 + 10;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 0x1f0) = 0;
  *(undefined4 *)((int)this + 500) = 0;
  *(undefined4 *)((int)this + 0x200) = 0;
  *(undefined4 *)((int)this + 0x1fc) = 0;
  *(undefined4 *)((int)this + 0x204) = 0;
  *(undefined4 *)((int)this + 0x208) = 0;
  F_0058c1d0((undefined *)((int)this + 0x220) GEN_EDX_ARG);
  return;
}

/* ref: FUN_00591da0 */
GEN_FRAME uint GEN_THISCALL F_00591da0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x591da0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint local_8;
  
  uVar2 = *(uint *)((int)this + 0x3c);
  iVar1 = *(int *)((int)this + 0x38);
  if ((int)(uVar2 - iVar1) >> 2 != 0) {
    local_8 = (uint)this & 0xffffff00;
    uVar2 = F_005d1cc0(iVar1,uVar2,(int)(uVar2 - iVar1) >> 2,local_8);
  }
  return uVar2;
}

/* ref: FUN_00591de0 */
GEN_FRAME byte GEN_THISCALL F_00591de0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x591de0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  char * pcVar1;
  int iVar2;
  undefined4 * puVar3;
  int iVar4;
  byte bVar5;
  undefined4 * puVar6;
  byte local_5;
  
  bVar5 = *(byte *)(param_1 + 0xfb);
  iVar2 = param_1;
  while( true ) {
    if ((bVar5 & 1) != 0) {
      local_5 = 0;
      bVar5 = F_00587d10(this GEN_EDX_FWD,iVar2);
      if (bVar5 != 0) {
        *(uint *)(iVar2 + 0xf4) =
             *(uint *)(iVar2 + 0xf4) ^ (param_2 << 0x10 ^ *(uint *)(iVar2 + 0xf4)) & 0xf0000;
        F_00590670(this GEN_EDX_ARG,iVar2);
      }
      puVar6 = *(undefined4 * PTR32 *)((int)this + 0xb4);
      for (puVar3 = (undefined4 *)*puVar6; puVar3 != puVar6; puVar3 = (undefined4 *)*puVar3) {
        iVar4 = puVar3[2];
        if (((iVar4 != iVar2) && (*(char *)(iVar4 + 0x13c) == *(char *)(iVar2 + 0x13a))) &&
           (((char)param_3 != '\0' || ((~(*(byte *)(iVar4 + 0xfb) >> 1) & 1) != 0)))) {
          bVar5 = F_00587d10(this GEN_EDX_ARG,iVar4);
          if (bVar5 != 0) {
            *(uint *)(iVar4 + 0xf4) =
                 *(uint *)(iVar4 + 0xf4) ^ (param_2 << 0x10 ^ *(uint *)(iVar4 + 0xf4)) & 0xf0000;
            F_00590670(this GEN_EDX_ARG,iVar4);
          }
          local_5 = 1;
        }
      }
      return local_5;
    }
    pcVar1 = (char *)(iVar2 + 0x13c);
    if ((*pcVar1 == '\0') ||
       (((char)param_3 == '\0' && ((~(*(byte *)(iVar2 + 0xfb) >> 1) & 1) == 0)))) break;
    puVar6 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xb4)));
    while( true ) {
      if (puVar6 == *(undefined4 * PTR32 *)((int)this + 0xb4)) {
        return 0;
      }
      iVar2 = puVar6[2];
      if ((*(char *)(iVar2 + 0x13a) == *pcVar1) && ((*(byte *)(iVar2 + 0xfb) & 1) != 0)) break;
      puVar6 = (undefined4 *)*puVar6;
    }
    bVar5 = *(byte *)(iVar2 + 0xfb);
  }
  return 0;
}

/* ref: FUN_00591f20 */
GEN_FRAME byte GEN_THISCALL F_00591f20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x591f20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  byte bVar3;
  
  if (param_1 != 0) {
    for (puVar1 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xb4)));
        puVar1 != *(undefined4 * PTR32 *)((int)this + 0xb4); puVar1 = (undefined4 *)*puVar1) {
      if (*(byte *)(puVar1[2] + 0x13a) == param_1) {
        iVar2 = puVar1[2];
        if (iVar2 == 0) {
          return 0;
        }
        if ((*(ushort *)(iVar2 + 0xf6) & 0xf) != param_2) {
          bVar3 = F_00591de0(this GEN_EDX_FWD,iVar2,param_2,1);
          if (bVar3 == 0) {
            F_00587d10(this GEN_EDX_ARG,iVar2);
            *(uint *)(iVar2 + 0xf4) =
                 *(uint *)(iVar2 + 0xf4) ^ (param_2 << 0x10 ^ *(uint *)(iVar2 + 0xf4)) & 0xf0000;
            F_00590670(this GEN_EDX_ARG,iVar2);
          }
          return 1;
        }
        return 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_00591fc0 */
GEN_FRAME byte GEN_THISCALL F_00591fc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x591fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  byte bVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    if ((param_3 == 0) && ((*(int *)&gen_a4) == 0)) {
      bVar1 = F_00591f20(this GEN_EDX_FWD,(uint)*(byte *)(param_1 + 0x13a),param_2);
      return bVar1;
    }
    if ((*(ushort *)(param_1 + 0xf6) & 0xf) != param_2) {
      F_00587d10(this GEN_EDX_ARG,param_1);
      *(uint *)(param_1 + 0xf4) =
           *(uint *)(param_1 + 0xf4) ^ (param_2 << 0x10 ^ *(uint *)(param_1 + 0xf4)) & 0xf0000;
      if ((*(int *)&gen_a4) != 0) {
        uVar2 = F_0057f810(this GEN_EDX_ARG,(*(int *)&gen_a4));
        if (uVar2 != 0) {
          F_0058cc00(this GEN_EDX_ARG,uVar2,param_1,1);
          return 1;
        }
      }
      if (param_3 != 0) {
        uVar2 = F_0057f810(this GEN_EDX_ARG,param_3);
        if (uVar2 != 0) {
          F_0058cc00(this GEN_EDX_ARG,uVar2,param_1,0);
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00592080 */
GEN_FRAME byte GEN_THISCALL F_00592080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x592080u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  
  if (0xff < (uint)(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) >> 2)) {
    return 0;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  while( true ) {
    if (piVar1 == *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)))) {
      F_005d28d0(((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) GEN_EDX_FWD,&(*(int *)&gen_args[1]));
      return 1;
    }
    if (*piVar1 == (*(int *)&gen_args[1])) break;
    piVar1 = piVar1 + 1;
  }
  return 1;
}

/* ref: FUN_005920d0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_005920d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5920d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int * piVar2;
  undefined * puVar3;
  uint uVar4;
  undefined4 * puVar5;
  int * piVar6;
  
  uVar4 = F_00404270();
  puVar5 = (undefined4 *)F_00406bd0(0x10,0,uVar4,0);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = (*(undefined * PTR32 (*)[1])REFP(0x10a0cb4));
    puVar5[1] = (*(undefined * PTR32 (*)[1])REFP(0x10a0c7c));
    puVar5[2] = 0;
    puVar5[3] = 0;
  }
  puVar3 = REFG(undefined * PTR32, 0x131dbb8);
  *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
  F_0058f6c0(puVar5 + 1 GEN_EDX_ARG,puVar3,6);
  puVar5 = (undefined4 *)F_00406bd0(0x24,0,uVar4,0);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = (*(undefined * PTR32 (*)[1])REFP(0x10a0cbc));
    puVar5[1] = (*(undefined * PTR32 (*)[1])REFP(0x10a0c7c));
    puVar5[2] = 0;
    puVar5[3] = 0;
  }
  *(undefined4 * PTR32 *)((int)this + 0xc) = puVar5;
  puVar5[7] = 0;
  puVar3 = REFG(undefined * PTR32, 0x131dbbc);
  *(undefined1 *)(puVar5 + 8) = 0;
  F_0058f6c0(puVar5 + 1 GEN_EDX_ARG,puVar3,6);
  puVar5 = (undefined4 *)F_00406bd0(0x38,0,uVar4,0);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = (*(undefined * PTR32 (*)[1])REFP(0x10a0c94));
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = (*(undefined * PTR32 (*)[1])REFP(0x10a0c7c));
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = (*(undefined * PTR32 (*)[1])REFP(0x10a0c7c));
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0x40;
  }
  uVar1 = *(undefined4 *)((int)this + 0xc);
  *(undefined4 * PTR32 *)((int)this + 4) = puVar5;
  puVar5[4] = *(undefined4 *)((int)this + 8);
  puVar5[5] = uVar1;
  puVar5[1] = 0;
  puVar5[3] = 0;
  piVar2 = *(int * PTR32 *)((int)this + 0x10);
  piVar6 = (int *)*piVar2;
  *piVar2 = (int)piVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) = *(int *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0x14) = 0;
  if (piVar6 != *(int * PTR32 *)((int)this + 0x10)) {
    do {
      piVar2 = (int *)*piVar6;
      F_00429760(piVar6,0x10,400);
      piVar6 = piVar2;
    } while (piVar2 != (int *)*(int *)((int)this + 0x10));
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x1c);
  piVar6 = (int *)*piVar2;
  *piVar2 = (int)piVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0x1c) + 4))) = *(int *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x20) = 0;
  if (piVar6 != *(int * PTR32 *)((int)this + 0x1c)) {
    do {
      piVar2 = (int *)*piVar6;
      F_00429760(piVar6,0xc,400);
      piVar6 = piVar2;
    } while (piVar2 != (int *)*(int *)((int)this + 0x1c));
  }
  return 0;
}

/* ref: FUN_00592220 */
GEN_FRAME unsigned int GEN_THISCALL F_00592220(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x592220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  int iVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  pvVar1 = *(undefined * PTR32 *)((int)this + 4);
  if (pvVar1 != (undefined *)0x0) {
    if ((*(int *)((int)this + 0x20) != 0) && (*(int *)((int)pvVar1 + 4) == 0)) {
      iVar2 = **(int * PTR32 *)((int)this + 0x1c);
      F_00590870(pvVar1 GEN_EDX_FWD,*(undefined4 *)(iVar2 + 8));
      F_005cd750((undefined *)((int)this + 0x1c) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),iVar2);
    }
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    if (*(int *)((int)pvVar1 + 0xc) != 0) {
      iVar2 = *(int *)((int)pvVar1 + 4);
      if (iVar2 == 1) {
        F_005736f0(pvVar1 GEN_EDX_ARG);
      }
      else {
        if (iVar2 == 2) {
          F_005882a0(pvVar1 GEN_EDX_ARG);
          return;
        }
        if (iVar2 == 3) {
          *((undefined4 *)GEN_TOP((*(int *)((int)pvVar1 + 0xc) + 8))) = 2;
          *(undefined4 *)((int)pvVar1 + 0xc) = 0;
          *(undefined4 *)((int)pvVar1 + 4) = 0;
          return;
        }
      }
    }
  }
  return;
}

/* ref: FUN_005922a0 */
GEN_FRAME uint GEN_THISCALL F_005922a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5922a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  puVar5 = (undefined4 *)param_1[1];
  iVar1 = *param_1;
  (*(int *)(gen_frame + 0x14)) = iVar1;
  piVar2 = *(int * PTR32 *)((int)this + 0x10);
  piVar3 = (int *)*piVar2;
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = puVar5;
  if (piVar3 != piVar2) {
    do {
      if ((iVar1 == *(int *)(piVar3[2] + 0x10)) && (puVar5 == *(undefined4 * PTR32 *)(piVar3[2] + 0x14)))
      break;
      piVar3 = (int *)*piVar3;
    } while (piVar3 != piVar2);
    if (piVar3 != piVar2) {
      piVar3[3] = piVar3[3] + 1;
      return piVar3[2];
    }
  }
  uVar4 = F_00404270();
  puVar5 = (undefined4 *)F_00406bd0(0x20,0,uVar4,0);
  if (puVar5 == (undefined4 *)0x0) {
    return 0;
  }
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[6] = 0;
  *puVar5 = (*(undefined * PTR32 (*)[1])REFP(0x10a0c9c));
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = puVar5;
  (*(undefined4 *)(gen_frame + 0x10)) = 1;
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar5;
  F_005cd630((undefined *)((int)this + 0x10) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0xc)));
  F_0056c130(puVar5 GEN_EDX_ARG,0x40,param_1);
  if (*((int *)GEN_TOP(((int)*(undefined * PTR32 *)((int)this + 4) + 4))) == 0) {
    F_00590870(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,puVar5);
    return (uint)puVar5;
  }
  F_005cd6f0((undefined *)((int)this + 0x1c) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x18)));
  return (uint)puVar5;
}

/* ref: FUN_00592380 */
GEN_FRAME uint GEN_THISCALL F_00592380(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x592380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  puVar1 = *(uint * PTR32 *)(REFG(int, 0x1379860) + 0x24);
  piVar4 = (int *)puVar1[2];
  uVar2 = puVar1[3];
  if ((uint)((int)(uVar2 - (int)piVar4) >> 2) < 0x100) {
    for (; piVar4 != (int *)puVar1[3]; piVar4 = piVar4 + 1) {
      if ((undefined *)*piVar4 == this) goto LAB_005923c4;
    }
    piVar4 = (int *)F_005d28d0(puVar1 + 2 GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  }
LAB_005923c4: ;
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *(uint *)((int)this + 0x18) = *(uint *)((int)this + 0x10) + *puVar1;
  *(uint *)((int)this + 0x1c) =
       *(int *)((int)this + 0x14) + uVar3 + (uint)CARRY4(*(uint *)((int)this + 0x10),uVar2);
  *(undefined1 *)((int)this + 0x20) = 1;
  return (uint)piVar4;
}

/* ref: FUN_005923e0 */
GEN_FRAME unsigned int GEN_THISCALL F_005923e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5923e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    F_005d29e0(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_FWD,param_1);
    return;
  }
  return;
}

/* ref: FUN_00592400 */
GEN_FRAME uint GEN_THISCALL F_00592400(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x592400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined1 gen_out[0x4];
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  float local_10;
  float local_c;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  iVar1 = *(int *)((int)this + 0x18);
  if (*(int *)((int)this + 0x14) != iVar1) {
    uVar3 = F_005c6b30(iVar1,iVar1,*(int *)((int)this + 0x14));
    *(uint *)((int)this + 0x18) = uVar3;
  }
  uVar3 = F_005cfbd0((undefined *)((int)this + 0x14) GEN_EDX_ARG,0x10);
  uVar4 = 0;
  if (param_2 != 0) {
    do {
      iVar1 = *(int *)(param_1 + uVar4 * 8);
      if (iVar1 == 4) {
        uVar3 = F_00590d40(this GEN_EDX_ARG,2);
        if (*(int *)((int)this + 8) != 0) {
          local_10 = *((float *)GEN_TOP((*(int *)((int)this + 8) + 0x40)));
        }
        *(float *)(uVar3 + 0xc) = local_10;
        *(float *)(uVar3 + 0x10) =
             ((float)GEN_TOF(((float10)*(float *)(param_1 + 4 + uVar4 * 8) - (float10)local_10)));
        uVar3 = F_00590d40(this GEN_EDX_ARG,3);
        if (*(int *)((int)this + 8) != 0) {
          local_c = *((float *)GEN_TOP((*(int *)((int)this + 8) + 0x44)));
        }
        *(float *)(uVar3 + 0xc) = local_c;
        fVar5 = (float10)*(float *)(param_1 + 4 + uVar4 * 8) - (float10)local_c;
      }
      else {
        uVar3 = F_00590d40(this GEN_EDX_ARG,iVar1);
        fVar5 = F_00561130(this GEN_EDX_ARG,*(uint *)(param_1 + uVar4 * 8));
        *(float *)(uVar3 + 0xc) = (float)fVar5;
        fVar5 = (float10)*(float *)(param_1 + 4 + uVar4 * 8) - (float10)(float)fVar5;
      }
      uVar4 = uVar4 + 1;
      *(float *)(uVar3 + 0x10) = (float)fVar5;
    } while (uVar4 < param_2);
  }
  F_00c47745(uVar2 ^ (uint)(uint)(gen_out + 0x0) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_005924f0 */
GEN_FRAME byte GEN_THISCALL F_005924f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5924f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 0x98) == 0) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x8c) = param_2;
  *(undefined4 *)((int)this + 0x90) = param_3;
  if ((((char)param_1[2] != '\0') && (*(int *)((int)this + 0x84) == *param_1)) &&
     (*(int *)((int)this + 0x88) == param_1[1])) {
LAB_00592600: ;
    F_00561950(this GEN_EDX_FWD);
    return 1;
  }
  F_0058c5d0(((undefined *)GEN_TOP((*(int *)((int)this + 0x98) + 4))) GEN_EDX_ARG);
  iVar1 = *(int *)((int)this + 0xac);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) & 0xffefffff;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x80;
  }
  *(undefined4 *)((int)this + 0x84) = 0xffffffff;
  *(undefined4 *)((int)this + 0x88) = 0xffffffff;
  iVar1 = *param_1;
  *(int *)((int)this + 0x84) = iVar1;
  iVar2 = param_1[1];
  *(int *)((int)this + 0x88) = iVar2;
  if (iVar1 == -1) {
    iVar1 = *(int *)((int)this + 0xac);
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) | 0x100000;
      *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) & 0xffffff7f;
    }
    if ((code *)*(gen_code32 *)((int)this + 0x8c) != (code *)0x0) {
      ((code *)*(gen_code32 *)((int)this + 0x8c))(this,*(undefined4 *)((int)this + 0x90));
    }
  }
  else {
    uVar3 = F_0058f730(((undefined *)GEN_TOP((*(int *)((int)this + 0x98) + 4))) GEN_EDX_ARG,iVar1,iVar2,6);
    if (uVar3 == 0) {
      if ((*((int *)GEN_TOP((*(int *)((int)this + 0x98) + 8))) == 0) &&
         (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x98) + 0xc))), iVar1 != 0)) {
        uVar3 = F_00572c50(iVar1);
        if (uVar3 == 2) goto LAB_00592600;
      }
      *(undefined1 *)((int)this + 0x94) = 1;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00592620 */
GEN_NOFRAME uint GEN_THISCALL F_00592620(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x592620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005814a0(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined1 *)((int)this + 0x136) = 0;
  *(undefined2 *)((int)this + 0x134) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x10a1aec));
  *(undefined1 *)((int)this + 0x138) = 1;
  return (uint)this;
}

/* ref: Component::GUI2::AtkComponentList::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_00592660(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x592660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (this[0x11f] != (undefined1)0x0) {
    this[0x11f] = (undefined1)0x0;
    *(undefined4 *)(this + 0xd8) = 0xffffffff;
    F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c) GEN_EDX_FWD,3,4,this,0);
    F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c) GEN_EDX_ARG,5,4,this,0);
  }
  F_00590f40(this GEN_EDX_ARG);
  if (*(int *)(this + 0x98) != 0) {
    F_00406810(*(int *)(this + 0x98));
    *(undefined4 *)(this + 0x98) = 0;
  }
  F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c) GEN_EDX_ARG,0x49,0,this,0);
  uVar1 = F_0058fe90(this + 4 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00592700 */
GEN_FRAME uint GEN_THISCALL F_00592700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x592700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined * pvVar2;
  undefined * this_00;
  
  if (param_1 == 0) {
    pvVar2 = (undefined *)0x0;
    this_00 = *(undefined * PTR32 *)((int)this + 0x84);
  }
  else {
    uVar1 = F_0055d920((undefined *)((int)this + 4) GEN_EDX_FWD,param_1);
    if (uVar1 == 0) {
      pvVar2 = (undefined *)0x0;
      this_00 = (undefined *)0x0;
    }
    else if ((((*(ushort *)(uVar1 + 0x18) < 1000) ||
              (pvVar2 = *(undefined * PTR32 *)(uVar1 + 0x8c), pvVar2 == (undefined *)0x0)) ||
             ((*(byte *)((int)pvVar2 + 0x60) & 1) == 0)) ||
            ((((*(byte *)((int)pvVar2 + 0x60) & 4) == 0 || (*(char *)((int)pvVar2 + 0x1c) != '\x01')
              ) || (this_00 = pvVar2, *((char *)GEN_TOP((*(int *)((int)pvVar2 + 0xc) + 0xf))) != '\x0e')))) {
      pvVar2 = (undefined *)0x0;
      this_00 = pvVar2;
    }
  }
  if (this_00 != (undefined *)0x0) {
    pvVar2 = (undefined *)F_00591330(this_00 GEN_EDX_ARG,1);
  }
  return (uint)pvVar2;
}

/* ref: Component::GUI2::AtkComponentListItemRenderer::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_00592770(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x592770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(this + 0x1e8) != 0) {
    F_00406810(*(int *)(this + 0x1e8));
    *(undefined4 *)(this + 0x1e8) = 0;
  }
  iVar1 = *(int *)(this + 0x1f0);
  for (iVar3 = *(int *)(this + 0x1ec); iVar3 != iVar1; iVar3 = iVar3 + 0xc) {
    F_005873b0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0xc) GEN_EDX_ARG,*(undefined4 *)(iVar3 + 4));
  }
  if (*(int *)(this + 0x1ec) != *(int *)(this + 0x1f0)) {
    *(int *)(this + 0x1f0) = *(int *)(this + 0x1ec);
  }
  F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c) GEN_EDX_ARG,4,0,this,0);
  F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c) GEN_EDX_ARG,5,0,this,0);
  F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c) GEN_EDX_ARG,0x49,0,this,0);
  uVar2 = F_0058fe90(this + 4 GEN_EDX_ARG);
  return uVar2;
}

/* ref: Component::GUI2::AtkComponentTreeList::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_00592850(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x592850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00591410(this GEN_EDX_FWD,1);
  uVar1 = F_00592660((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00592870 */
GEN_FRAME uint GEN_THISCALL F_00592870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x592870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * puVar1;
  uint in_EAX = 0;
  int iVar2;
  uint * puVar3;
  
  puVar1 = *(uint * PTR32 *)((int)this + 0x130);
  iVar2 = 0;
  for (puVar3 = *(uint * PTR32 *)((int)this + 300); puVar3 != puVar1; puVar3 = puVar3 + 1) {
    if (iVar2 == param_1) {
      in_EAX = *puVar3;
      *(undefined1 *)(in_EAX + 0x2a) = 1;
    }
    else if (((*(char *)((int)this + 0x18e) != '\0') &&
             (in_EAX = *puVar3, (*(byte *)(in_EAX + 0x2b) & 2) != 0)) &&
            ((*(byte *)(in_EAX + 0x2a) & 0xf) != 0)) {
      *(undefined1 *)(in_EAX + 0x2a) = 0;
      in_EAX = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x6c))(this GEN_EDX_FWD,iVar2,0,0);
    }
    iVar2 = iVar2 + 1;
  }
  if ((char)param_2 == '\0') {
    in_EAX = F_0058e260(this GEN_EDX_ARG);
  }
  return in_EAX;
}

/* ref: FUN_005928f0 */
GEN_FRAME unsigned int GEN_THISCALL F_005928f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5928f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x130);
  iVar3 = 0;
  for (piVar4 = *(int * PTR32 *)((int)this + 300); piVar4 != piVar1; piVar4 = piVar4 + 1) {
    iVar2 = *piVar4;
    if (param_1 == iVar2) {
      *(undefined1 *)(iVar2 + 0x2a) = 1;
    }
    else if (((*(char *)((int)this + 0x18e) != '\0') && ((*(byte *)(iVar2 + 0x2b) & 2) != 0)) &&
            ((*(byte *)(iVar2 + 0x2a) & 0xf) != 0)) {
      *(undefined1 *)(iVar2 + 0x2a) = 0;
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x6c))(this GEN_EDX_FWD,iVar3,0,0);
    }
    iVar3 = iVar3 + 1;
  }
  if ((char)param_2 == '\0') {
    F_0058e260(this GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00592970 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00592970(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x592970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x130);
  for (piVar2 = *(int * PTR32 *)((int)this + 300); piVar2 != piVar1; piVar2 = piVar2 + 1) {
    if ((*(byte *)(*piVar2 + 0x2b) & 2) != 0) {
      F_005928f0(this GEN_EDX_FWD,*piVar2,1);
    }
  }
  return;
}

/* ref: FUN_005929b0 */
GEN_FRAME uint GEN_THISCALL F_005929b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5929b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((int)this + 0x84);
  if ((uVar3 != 0) && ((*(int *)&gen_a1) != 0)) {
    uVar3 = *(uint *)(uVar3 + 0x108);
    if ((uVar3 == 0) || (*(short *)(uVar3 + 0x18) != 2)) {
      uVar3 = 0;
    }
    if ((((uVar3 != 0) && (*(int *)(uVar3 + 0x8c) != 0)) &&
        (piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar3 + 0x8c) + 8))) +
                         (uint)*(ushort *)(uVar3 + 0x90) * 0xc))), uVar3 = 0, piVar1 != (int *)0x0))
       && (iVar2 = *piVar1, uVar3 = 0, iVar2 != 0)) {
      if (*(int *)((*(int *)&gen_a1) + 8) == 0) {
        uVar3 = F_0058f7a0((undefined *)(iVar2 + 4) GEN_EDX_FWD,*(undefined4 *)((*(int *)&gen_a1) + 0xc));
        return uVar3;
      }
      uVar3 = F_0058f7a0((undefined *)(iVar2 + 4) GEN_EDX_ARG,0);
    }
  }
  return uVar3;
}

/* ref: FUN_00592a30 */
GEN_FRAME byte GEN_THISCALL F_00592a30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x592a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 0x88) == 0) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x90) = param_2;
  *(undefined4 *)((int)this + 0x94) = param_3;
  if ((((char)param_1[2] != '\0') && (*(int *)((int)this + 0x98) == *param_1)) &&
     (*(int *)((int)this + 0x9c) == param_1[1])) {
LAB_00592b40: ;
    F_00562ea0(this GEN_EDX_FWD);
    return 1;
  }
  F_0058c5d0(((undefined *)GEN_TOP((*(int *)((int)this + 0x88) + 4))) GEN_EDX_ARG);
  iVar1 = *(int *)((int)this + 0x84);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) & 0xffefffff;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x80;
  }
  *(undefined4 *)((int)this + 0x98) = 0xffffffff;
  *(undefined4 *)((int)this + 0x9c) = 0xffffffff;
  iVar1 = *param_1;
  *(int *)((int)this + 0x98) = iVar1;
  iVar2 = param_1[1];
  *(int *)((int)this + 0x9c) = iVar2;
  if (iVar1 == -1) {
    iVar1 = *(int *)((int)this + 0x84);
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) | 0x100000;
      *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) & 0xffffff7f;
    }
    if ((code *)*(gen_code32 *)((int)this + 0x90) != (code *)0x0) {
      ((code *)*(gen_code32 *)((int)this + 0x90))(this,*(undefined4 *)((int)this + 0x94));
    }
  }
  else {
    uVar3 = F_0058f730(((undefined *)GEN_TOP((*(int *)((int)this + 0x88) + 4))) GEN_EDX_ARG,iVar1,iVar2,6);
    if (uVar3 == 0) {
      if ((*((int *)GEN_TOP((*(int *)((int)this + 0x88) + 8))) == 0) &&
         (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x88) + 0xc))), iVar1 != 0)) {
        uVar3 = F_00572c50(iVar1);
        if (uVar3 == 2) goto LAB_00592b40;
      }
      *(undefined1 *)((int)this + 0xa0) = 1;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00592b60 */
GEN_FRAME unsigned int GEN_THISCALL F_00592b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x592b60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  
  if (this != (undefined *)0x0) {
    if (param_1 == 0) {
      iVar1 = *(int *)((int)this + 0x70);
      if (iVar1 != 0) {
        *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) & 0xffefffff;
        *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x80;
        return;
      }
    }
    else {
      iVar1 = *(int *)((int)this + 0x70);
      if (iVar1 != 0) {
        *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) | 0x100000;
        *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) & 0xffffff7f;
      }
      F_0058f730(((undefined *)GEN_TOP((*(int *)((int)this + 0x90) + 4))) GEN_EDX_FWD,param_1,0,6);
      F_0058f730(((undefined *)GEN_TOP((*(int *)((int)this + 0x94) + 4))) GEN_EDX_ARG,param_2,0,6);
      F_0058f730(((undefined *)GEN_TOP((*(int *)((int)this + 0x98) + 4))) GEN_EDX_ARG,param_3,0,6);
    }
  }
  return;
}

/* ref: FUN_00592c00 */
GEN_FRAME uint GEN_THISCALL F_00592c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x592c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    uVar2 = *(uint *)((int)this + 0xc0);
    uVar4 = 0;
    if (uVar2 != 0) {
      *(uint *)(uVar2 + 0x84) = *(uint *)(uVar2 + 0x84) & 0xffefffff;
      *(uint *)(uVar2 + 0x88) = *(uint *)(uVar2 + 0x88) | 0x80;
      return uVar2;
    }
  }
  else {
    iVar3 = *(int *)((int)this + 0xc4);
    if ((iVar3 == 0) || (*(short *)(iVar3 + 0x18) != 2)) {
      iVar3 = 0;
    }
    if ((((iVar3 != 0) && (*(int *)(iVar3 + 0x8c) != 0)) &&
        (piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 0x8c) + 8))) +
                         (uint)*(ushort *)(iVar3 + 0x90) * 0xc))), piVar1 != (int *)0x0)) &&
       (iVar3 = *piVar1, iVar3 != 0)) {
      F_0058f730((undefined *)(iVar3 + 4) GEN_EDX_FWD,param_1,0,6);
    }
    uVar4 = *(uint *)((int)this + 0xc0);
    if (uVar4 != 0) {
      *(uint *)(uVar4 + 0x84) = *(uint *)(uVar4 + 0x84) | 0x100000;
      *(uint *)(uVar4 + 0x88) = *(uint *)(uVar4 + 0x88) & 0xffffff7f;
    }
  }
  return uVar4;
}

/* ref: FUN_00592ca0 */
GEN_FRAME unsigned int GEN_THISCALL F_00592ca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x592ca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  float fVar2;
  undefined * this;
  uint uVar3;
  int iVar4;
  bool bVar5;
  float10 fVar6;
  undefined4 * puVar7;
  
  bVar5 = param_3 != 0;
  (*(int *)(gen_frame + 0x18)) = param_1;
  if ((param_2 != (int *)0x0) && (iVar4 = param_2[0x1c], iVar4 != 0)) {
    *(uint *)(iVar4 + 0x84) =
         *(uint *)(iVar4 + 0x84) ^ ((uint)bVar5 << 0x14 ^ *(uint *)(iVar4 + 0x84)) & 0x100000;
    *(uint *)(iVar4 + 0x88) =
         *(uint *)(iVar4 + 0x88) ^ ((uint)!bVar5 << 7 ^ *(uint *)(iVar4 + 0x88)) & 0x80;
  }
  if (bVar5) {
    uVar3 = F_0055d920(param_2 + 1 GEN_EDX_FWD,param_2[0x25]);
    if ((uVar3 == 0) || (*(short *)(uVar3 + 0x18) != 2)) {
      uVar3 = 0;
    }
    iVar4 = 0;
    if (uVar3 != 0) {
      if ((*(int *)(uVar3 + 0x8c) != 0) &&
         (piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar3 + 0x8c) + 8))) +
                          (uint)*(ushort *)(uVar3 + 0x90) * 0xc))), piVar1 != (int *)0x0)) {
        iVar4 = *piVar1;
      }
      if (iVar4 != 0) {
        F_0058f730((undefined *)(iVar4 + 4) GEN_EDX_ARG,param_3,0,6);
      }
    }
    uVar3 = F_0055d920(param_2 + 1 GEN_EDX_ARG,param_2[0x24]);
    if (((((uVar3 != 0) && (999 < *(ushort *)(uVar3 + 0x18))) &&
         (this = *(undefined * PTR32 *)(uVar3 + 0x8c), this != (undefined *)0x0)) &&
        (((*(byte *)((int)this + 0x60) & 1) != 0 && ((*(byte *)((int)this + 0x60) & 4) != 0)))) &&
       ((*(char *)((int)this + 0x1c) == '\x01' &&
        (*((char *)GEN_TOP((*(int *)((int)this + 0xc) + 0xf))) == '\x13')))) {
      iVar4 = *(int *)((int)this + 0x88);
      *(uint *)((int)this + 0x90) = *(uint *)((int)this + 0x90) | 1;
      fVar2 = *(float *)((int)this + 0x8c);
      if (iVar4 != 0) {
        if (((*(uint *)(iVar4 + 0x88) & 1) == 0) &&
           (fVar6 = (float10)fVar2, bVar5 = GEN_ISNAN((float10)*(float *)(iVar4 + 0x38)) || GEN_ISNAN(fVar6),
           bVar5 == (bVar5 || (float10)*(float *)(iVar4 + 0x38) == fVar6))) {
          *(uint *)(iVar4 + 0x88) = *(uint *)(iVar4 + 0x88) | 1;
        }
        *(float *)(iVar4 + 0x38) = fVar2;
      }
      F_00c472af(&REFG(undefined, 0x1379720),0x40,&REFG(undefined, 0x10a00c0),param_4);
      if (*(undefined * PTR32 *)((int)this + 0x84) != (undefined *)0x0) {
        F_00584110(*(undefined * PTR32 *)((int)this + 0x84) GEN_EDX_ARG,&REFG(undefined, 0x1379720));
        F_005832e0(this GEN_EDX_ARG);
      }
      F_005832e0(this GEN_EDX_ARG);
    }
    iVar4 = REFG(int, 0x1379860);
    (*(undefined4 *)(gen_frame + 0xc)) = param_5;
    puVar7 = &(*(undefined4 *)(gen_frame + 0xc));
    (*(undefined2 *)(gen_frame + 0x14)) = 0xffff;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined2 *)(gen_frame + 0x16)) = 0;
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x38))(param_2 GEN_EDX_ARG);
    F_00590ad0((undefined *)(iVar4 + 0xe0) GEN_EDX_ARG,2,*(undefined4 *)((*(int *)(gen_frame + 0x18)) + 0x84),uVar3,puVar7);
  }
  return;
}

/* ref: Component::GUI2::AtkComponentMap::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_00592e80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x592e80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    F_00591760(this GEN_EDX_FWD,uVar2);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  piVar1 = *(int * PTR32 *)(this + 0x140);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x140) = 0;
  }
  F_005643c0(this GEN_EDX_ARG);
  F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c) GEN_EDX_ARG,0x49,0,this,0);
  uVar2 = F_0058fe90(this + 4 GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00592ee0 */
GEN_FRAME byte GEN_THISCALL F_00592ee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x592ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  char cVar1;
  byte bVar2;
  char * pcVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  if (param_1 == (char *)0x0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_FWD);
    return 0;
  }
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  F_0040b1a0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,(int)pcVar3 - (int)(param_1 + 1));
  uVar4 = F_00408810(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if (*(uint *)((int)this + 0x298) == uVar4) {
    F_004087f0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
    return 1;
  }
  *(uint *)((int)this + 0x298) = uVar4;
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x100,"%s.tex",param_1);
  bVar2 = F_00591820(this GEN_EDX_ARG,1,((undefined1 *)(gen_frame + 0x8)));
  F_004087f0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return bVar2;
}

/* ref: FUN_00592fc0 */
GEN_FRAME byte GEN_THISCALL F_00592fc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x592fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  byte * pbVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  char * pcVar5;
  uint uVar6;
  char * pcVar7;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  if ((*(char * PTR32 *)&gen_args[1]) == (char *)0x0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_FWD);
    return 0;
  }
  pcVar5 = (*(char * PTR32 *)&gen_args[1]);
  do {
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  F_0040b1a0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(char * PTR32 *)&gen_args[1]),(int)pcVar5 - (int)((*(char * PTR32 *)&gen_args[1]) + 1));
  uVar6 = F_00408810(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x29c))) == uVar6) {
    if (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x260))) != (*(uint *)&gen_args[2])) {
      if ((char)(*(undefined4 *)&gen_args[3]) != '\0') {
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x268))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x268))), REFG(float, 0x1087f04));
        *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xba))) = 1;
        *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x264))) = ~*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x260))) & (*(uint *)&gen_args[2]);
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x26c))) = 0;
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x270))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x270))), REFG(float, 0x10a0898));
      }
      *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xbb))) = 1;
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x260))) = (*(uint *)&gen_args[2]);
    }
    F_004087f0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
    return 1;
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x29c))) = uVar6;
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x260))) = (*(uint *)&gen_args[2]);
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xbb))) = 1;
  pcVar7 = (*(char * PTR32 *)&gen_args[1]);
  do {
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  if (pcVar7 == (*(char * PTR32 *)&gen_args[1]) + 1) {
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb9))) = 0;
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x88))) != 0) {
      pbVar1 = ((byte *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x88))) + 0x93)));
      *pbVar1 = *pbVar1 & 0xf7;
    }
    F_004087f0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
    return 1;
  }
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb9))) = 1;
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x88))) != 0) {
    pbVar1 = ((byte *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x88))) + 0x93)));
    *pbVar1 = *pbVar1 | 8;
  }
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x100,"%s.tex",(*(char * PTR32 *)&gen_args[1]));
  bVar3 = F_00591820((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0,((undefined1 *)(gen_frame + 0x8)));
  F_00c49908(((undefined1 *)(gen_frame + 0x8)),0x100,(*(char * PTR32 *)&gen_args[1]));
  *((undefined2 *)GEN_TOP((((undefined1 *)(gen_frame + 0x0)) + ((int)pcVar5 - (int)((*(char * PTR32 *)&gen_args[1]) + 1)) + 5))) = 100;
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x100,"%s.tex",((undefined1 *)(gen_frame + 0x8)));
  bVar4 = F_00591820((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,2,((undefined1 *)(gen_frame + 0x8)));
  if ((bVar3 == 0) || (bVar4 == 0)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  F_004087f0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return bVar3;
}

/* ref: FUN_005931d0 */
GEN_FRAME uint F_005931d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5931d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    if (param_2 < 1) {
      *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xffefffff;
      *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 0x80;
      iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0x8c) + 8))) +
                      (uint)*(ushort *)(param_1 + 0x90) * 0xc)));
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = F_0058c5d0((undefined *)(iVar1 + 4) GEN_EDX_ARG);
        return uVar2;
      }
    }
    else {
      *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 0x100000;
      *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) & 0xffffff7f;
      iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0x8c) + 8))) +
                      (uint)*(ushort *)(param_1 + 0x90) * 0xc)));
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = F_0058f730((undefined *)(iVar1 + 4) GEN_EDX_ARG,param_2,0,6);
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00593250 */
GEN_FRAME uint GEN_THISCALL F_00593250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x593250u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  
  if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) != '\0') {
    uVar1 = F_00404270();
    puVar2 = (undefined4 *)F_00406bd0(0x18,0,uVar1,0);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = (*(undefined4 * PTR32 *)&gen_args[1]);
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(undefined1 *)(puVar2 + 5) = 0;
      (*(undefined4 * PTR32 *)&gen_args[1]) = puVar2;
      F_005d3300((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[1]));
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  return 0;
}

/* ref: Component::GUI2::AtkFontAnalyzerBase::vf9 */
GEN_FRAME uint GEN_THISCALL F_005932b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5932b0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte * pbVar1;
  float fVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  byte bVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  undefined4 * puVar10;
  undefined4 * puVar11;
  bool bVar12;
  float10 fVar13;
  
  uVar8 = (*(uint *)&gen_args[1]);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (*(uint *)&gen_args[1]);
  bVar3 = *(byte *)((*(uint *)&gen_args[1]) + 0x148);
  bVar5 = false;
  (*(undefined4 *)(gen_frame + 0x6)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x6)), 1, 3),1);
  bVar12 = false;
  if ((bVar3 & 4) != 0) {
    bVar6 = F_005664e0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(uint *)&gen_args[2]));
    bVar12 = bVar6 == 0;
    (*(undefined1 *)((char *)&(*(uint *)&gen_args[1]) + 3)) = !bVar12;
    (*(undefined4 *)(gen_frame + 0x6)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x6)), 1, 3),(bool)(bVar3 >> 3 & 1) == (*(undefined1 *)((char *)&(*(uint *)&gen_args[1]) + 3)));
    bVar5 = (*(undefined1 *)((char *)&(*(uint *)&gen_args[1]) + 3));
  }
  pbVar1 = ((byte *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x148)));
  *pbVar1 = *pbVar1 ^ (bVar5 * '\b' ^ *((byte *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x148)))) & 8;
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x74))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x6c)));
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x70))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x68)));
  if (bVar12) {
    fVar2 = *((float *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x6c)));
    uVar7 = F_00557c70(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) GEN_EDX_ARG,fVar2);
    fVar13 = (float10)*((float *)GEN_TOP((((int)(uint)(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))))) + 8 + (uint)uVar7 * 0xc)));
    *((float *)GEN_TOP((((int)(uint)(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))))) + 0x74))) = (float)(fVar13 * (float10)fVar2);
    *((float *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x70))) = ((float)GEN_TOF((fVar13 * (float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x68))))));
  }
  uVar8 = F_00558000((undefined *)uVar8 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x6)));
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = uVar8;
  iVar4 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  puVar10 = (undefined4 *)(iVar4 + 100);
  puVar11 = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)));
  for (iVar9 = 0x11; iVar9 != 0; iVar9 = iVar9 - 1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  F_005d3370(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) GEN_EDX_ARG,iVar4 + 0xf4);
  F_005d3370(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) GEN_EDX_ARG,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x10c);
  uVar8 = F_005d3530(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x8c))) GEN_EDX_ARG,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x124);
  return uVar8;
}

/* ref: Component::GUI2::AtkFontAnalyzerRenderer::vf9 */
GEN_FRAME uint GEN_THISCALL F_005933d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5933d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x140) + 0x24))))(this + 0x140 GEN_EDX_FWD,param_1,param_2);
  uVar1 = F_005932b0(this GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00593410 */
GEN_FRAME uint GEN_STDCALL F_00593410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x593410u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = (undefined4 *)(param_2 + 0x18);
  puVar4 = (undefined4 *)(param_1 + 100);
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  F_005d3370((undefined *)(param_1 + 0xf4) GEN_EDX_ARG,param_2 + 0x5c);
  F_005d3370((undefined *)(param_1 + 0x10c) GEN_EDX_ARG,param_2 + 0x74);
  uVar1 = F_005d3530((undefined *)(param_1 + 0x124) GEN_EDX_ARG,param_2 + 0x8c);
  return uVar1;
}

/* ref: FUN_00593470 */
GEN_FRAME byte GEN_THISCALL F_00593470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x593470u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  float10 fVar2;
  
  if ((char)param_1[0x8b4a] == '\0') {
    iVar1 = param_1[0x2e];
    param_1[0x83a7] = param_2;
    *(int *)(iVar1 + 0xa8) = iVar1;
    F_00573d50((undefined *)(iVar1 + 0xe0) GEN_EDX_FWD,iVar1);
    *(int *)(iVar1 + 0x1c0) = iVar1;
    *(int *)(iVar1 + 0x1e4) = iVar1;
    *(int *)(iVar1 + 0x1ec) = iVar1;
    *(undefined1 *)(iVar1 + 0x1fa) = 0;
    *(undefined1 *)(iVar1 + 0x230) = 1;
    F_00577990(param_1 + 0x2f GEN_EDX_ARG);
    fVar2 = (float10)*(double *)&REFG(undefined, 0x10a0a50);
    param_1[0x3c] = 0;
    *(undefined2 *)(param_1 + 0x3d) = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    param_1[0x43] = 0;
    param_1[0x45] = 0;
    param_1[0x46] = 0;
    param_1[0x47] = 0;
    param_1[0x48] = 0;
    fVar2 = ((float10)GEN_TOD(fcos(fVar2)));
    *(float *)&REFG(undefined, 0x1379968) = (float)fVar2;
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)param_1[0x4c] + 0xc))((int *)param_1[0x4c] GEN_EDX_ARG);
    F_00c48350(param_1 + 0x52,0,0x20000);
    F_00c48350((undefined *)param_1[0x51],0,param_1[0x50] * 4);
    param_1[0x4f] = 0;
    F_00a4b410(param_1 + 0x4d GEN_EDX_ARG,0);
    F_005920d0(param_1 + 0x839c GEN_EDX_ARG);
    *(undefined1 *)(param_1 + 0x8b4a) = 1;
    F_00579550(param_1 + 0x83a8 GEN_EDX_ARG,param_1 + 0x3b);
    if ((undefined *)param_1[0x2f] != (undefined *)0x0) {
      F_005691b0((undefined *)param_1[0x2f] GEN_EDX_ARG);
    }
    F_00583ab0(param_1 + 0x3b GEN_EDX_ARG,0x1e,param_1 + 0x2f,param_1 + 0x49);
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0xa8))(param_1 GEN_EDX_ARG,1,0);
    ((code *)*(gen_code32 *)(param_1[0x8afb] + 4))(param_1 + 0x8afb);
  }
  return 1;
}

/* ref: FUN_005935e0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_005935e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5935e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  if (*(char *)((int)this + 0x22d28) != '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x22bec) + 0xc))))((int)this + 0x22bec);
    if (*(undefined * PTR32 *)((int)this + 0xbc) != (undefined *)0x0) {
      F_0055b610(*(undefined * PTR32 *)((int)this + 0xbc) GEN_EDX_ARG);
    }
    F_00565dd0((undefined *)((int)this + 0xec) GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x20ed4) = 0;
    if (*(char *)((int)this + 0x22d2b) != '\0') {
      F_0058f5e0(*(undefined * PTR32 *)((int)this + 0xb8) GEN_EDX_ARG);
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xd0))(this GEN_EDX_ARG);
      F_00558f10(this GEN_EDX_ARG);
      *(undefined1 *)((int)this + 0x22cf0) = 0;
      *(undefined2 *)((int)this + 0x22d2b) = 0;
    }
    if (*(undefined * PTR32 *)((int)this + 0xbc) != (undefined *)0x0) {
      F_0055b460(*(undefined * PTR32 *)((int)this + 0xbc) GEN_EDX_ARG);
      puVar1 = *(undefined4 * PTR32 *)((int)this + 0xbc);
      if (puVar1 != (undefined4 *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
        *(undefined4 *)((int)this + 0xbc) = 0;
      }
    }
    F_0058c250((undefined *)((int)this + 0xec) GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x130) + 0x10))))(*(int * PTR32 *)((int)this + 0x130) GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x20e10) = 0;
    *(undefined4 *)((int)this + 0x20e14) = 0;
    iVar2 = *(int *)((int)this + 0x20e18);
    if (iVar2 != *(int *)((int)this + 0x20e1c)) {
      F_00c46e20(iVar2,*(int *)((int)this + 0x20e1c),0);
      *(int *)((int)this + 0x20e1c) = iVar2;
    }
    F_00580900((undefined *)((int)this + 0x20e28) GEN_EDX_ARG);
    F_00590750((undefined *)((int)this + 0x20e70) GEN_EDX_ARG);
    F_00587080((undefined *)((int)this + 0x124) GEN_EDX_ARG);
    F_00558dc0((undefined *)((int)this + 0x20148) GEN_EDX_ARG);
    F_00591ce0(*(undefined * PTR32 *)((int)this + 0xb8) GEN_EDX_ARG);
    *(undefined1 *)((int)this + 0x22d28) = 0;
  }
  return;
}

/* ref: FUN_00593720 */
GEN_FRAME uint GEN_STDCALL F_00593720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x593720u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x160];
  char cVar1;
  char * pcVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  (*(uint *)(gen_frame + 0x158)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x15c);
  F_0042b630(((char * PTR32 *)(gen_frame + 0x104)) GEN_EDX_ARG);
  pcVar2 = (char *)F_0042a990(param_1 GEN_EDX_ARG);
  cVar1 = *pcVar2;
  uVar3 = CONCAT31((int3)((uint)((int)(uintptr_t)pcVar2) >> 8),cVar1);
  while (cVar1 != '\0') {
    if ((char)uVar3 == '\x02') {
      if (*((char * PTR32 *)(gen_frame + 0x104))[0] != '\0') {
        F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,"",REFG(undefined4, 0x108cc50));
        uVar3 = REFG(undefined4, 0x108cc50);
        F_0042cbc0(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
        F_0042cbc0(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG,((char * PTR32 *)(gen_frame + 0x104)));
        (*(undefined4 *)(gen_frame + 0xfc)) = uVar3;
        (*(undefined4 *)(gen_frame + 0x100)) = uVar3;
        F_005d3a70(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)));
        F_0042c880(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG);
        F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
        F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        F_0042aca0(((char * PTR32 *)(gen_frame + 0x104)) GEN_EDX_ARG);
      }
      uVar5 = (int)pcVar2[2] + 3;
      F_0042d120(((char * PTR32 *)(gen_frame + 0x104)) GEN_EDX_ARG,pcVar2,uVar5);
      F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,"",REFG(undefined4, 0x108cc50));
      uVar3 = REFG(undefined4, 0x108cc50);
      F_0042cbc0(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,((char * PTR32 *)(gen_frame + 0x104)));
      F_0042cbc0(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
      (*(undefined4 *)(gen_frame + 0xfc)) = uVar3;
      (*(undefined4 *)(gen_frame + 0x100)) = uVar3;
      F_005d3a70(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)));
      F_0042c880(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      uVar4 = F_0042aca0(((char * PTR32 *)(gen_frame + 0x104)) GEN_EDX_ARG);
    }
    else {
      uVar5 = F_0042acc0(uVar3);
      uVar4 = F_0042d590(((char * PTR32 *)(gen_frame + 0x104)) GEN_EDX_ARG,pcVar2,uVar5);
    }
    cVar1 = pcVar2[uVar5];
    uVar3 = CONCAT31((int3)(uVar4 >> 8),cVar1);
    pcVar2 = pcVar2 + uVar5;
  }
  if (*((char * PTR32 *)(gen_frame + 0x104))[0] != '\0') {
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,"",REFG(undefined4, 0x108cc50));
    uVar3 = REFG(undefined4, 0x108cc50);
    F_0042cbc0(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_0042cbc0(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG,((char * PTR32 *)(gen_frame + 0x104)));
    (*(undefined4 *)(gen_frame + 0xfc)) = uVar3;
    (*(undefined4 *)(gen_frame + 0x100)) = uVar3;
    F_005d3a70(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)));
    F_0042c880(((undefined1 *)(gen_frame + 0xa8)) GEN_EDX_ARG);
    F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  uVar6 = F_0042c880(((char * PTR32 *)(gen_frame + 0x104)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x158)) ^ (uint)(uint)(gen_frame + 0x15c) GEN_EDX_ARG);
  return (uint)uVar6;
}

/* ref: FUN_00593950 */
GEN_FRAME uint GEN_THISCALL F_00593950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x593950u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint * puVar1;
  ushort uVar2;
  undefined * pvVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint * puVar7;
  undefined * pvVar8;
  undefined2 extraout_var = 0;
  undefined2 uVar9;
  int iVar10;
  ulonglong uVar11;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(int *)(gen_frame + 0x28)) = (*(int *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = (*(undefined * PTR32 *)&gen_args[2]);
  uVar5 = F_00a26ce0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) GEN_EDX_FWD,(*(undefined * PTR32 *)&gen_args[2]),0);
  if ((short)(*(undefined4 *)&gen_args[3]) < 0) {
    (*(undefined2 *)((char *)&(*(undefined4 *)&gen_args[4]) + 0)) = (short)uVar5;
    (*(undefined2 *)((char *)&(*(undefined4 *)&gen_args[5]) + 0)) = (short)(*(undefined4 *)&gen_args[4]);
    (*(undefined2 *)((char *)&(*(undefined4 *)&gen_args[3]) + 0)) = (short)(*(undefined4 *)&gen_args[4]);
  }
  else if ((int)uVar5 < (int)(short)(*(undefined4 *)&gen_args[3])) {
    uVar5 = F_00a26ce0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[2]),0);
    (*(undefined2 *)((char *)&(*(undefined4 *)&gen_args[3]) + 0)) = (short)uVar5;
  }
  (*(bool *)(gen_frame + 0x33)) = (short)(*(undefined4 *)&gen_args[3]) < *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x22)));
  *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x22))) = (short)(*(undefined4 *)&gen_args[3]);
  uVar5 = F_00a26ce0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[2]),0);
  iVar10 = (*(int *)(gen_frame + 0x28));
  *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = (short)uVar5;
  if ((short)(*(undefined4 *)&gen_args[4]) < (short)(*(undefined4 *)&gen_args[5])) {
    *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x26))) = (short)(*(undefined4 *)&gen_args[4]);
    *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = (short)(*(undefined4 *)&gen_args[5]);
  }
  else {
    *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x26))) = (short)(*(undefined4 *)&gen_args[5]);
    *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = (short)(*(undefined4 *)&gen_args[4]);
  }
  F_0042ccf0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x528))) GEN_EDX_ARG,(*(int *)(gen_frame + 0x28)));
  F_0042ccf0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6cc))) GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[2]));
  (*(uint * PTR32 *)(gen_frame + 0xc)) = (uint *)0x0;
  (*(uint * PTR32 *)(gen_frame + 0x10)) = (uint *)0x0;
  (*(int *)(gen_frame + 0x14)) = 0;
  F_00593720(iVar10,&(*(uint * PTR32 *)(gen_frame + 0xc)));
  uVar5 = 0;
  if ((*(uint * PTR32 *)(gen_frame + 0xc)) != (*(uint * PTR32 *)(gen_frame + 0x10))) {
    puVar7 = (*(uint * PTR32 *)(gen_frame + 0xc)) + 0x2a;
    do {
      if (*(char *)puVar7[-0x2a] == '\0') {
        *puVar7 = uVar5;
        uVar6 = F_00a26ce0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) GEN_EDX_ARG,puVar7 - 0x15,1);
        puVar7[1] = uVar6 + uVar5;
      }
      else {
        if (puVar7 + 2 == (*(uint * PTR32 *)(gen_frame + 0x10))) {
          *puVar7 = uVar5;
          uVar6 = F_00a26ce0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x2c)),1);
        }
        else {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x1c))))
                    (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) GEN_EDX_ARG,puVar7 - 0x2a,puVar7 - 0x15);
          uVar6 = F_00a26ce0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) GEN_EDX_ARG,puVar7 - 0x15,1);
          uVar6 = uVar6 + 2 + uVar5;
          *puVar7 = uVar5;
        }
        puVar7[1] = uVar6;
        F_0042ccf0(puVar7 - 0x15 GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x2c)));
        F_00a26db0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) GEN_EDX_ARG,puVar7 - 0x15,uVar5,puVar7[1] - uVar5);
        uVar5 = *puVar7;
        if ((uVar5 < *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x26)))) &&
           (uVar6 = puVar7[1], *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x26))) < uVar6)) {
          if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) == '\0') {
            if ((*(bool *)(gen_frame + 0x33)) == false) {
              uVar5 = uVar6;
            }
            uVar9 = (undefined2)uVar5;
            *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x22))) = uVar9;
            *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = uVar9;
            *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x26))) = uVar9;
          }
          else if ((short)(*(undefined4 *)&gen_args[4]) == (short)(*(undefined4 *)&gen_args[5])) {
            if ((*(bool *)(gen_frame + 0x33)) == false) {
              uVar5 = uVar6;
            }
            *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x22))) = (short)uVar5;
            *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x26))) = (short)*puVar7;
            *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = (short)puVar7[1];
          }
          else if ((short)(*(undefined4 *)&gen_args[3]) == (short)(*(undefined4 *)&gen_args[4])) {
            if ((*(bool *)(gen_frame + 0x33)) == false) {
              uVar5 = uVar6;
            }
            *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x26))) = (short)uVar5;
            *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x22))) = (short)uVar5;
          }
          else if ((short)(*(undefined4 *)&gen_args[3]) == (short)(*(undefined4 *)&gen_args[5])) {
            *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x26))) = (short)uVar5;
            if ((*(bool *)(gen_frame + 0x33)) == false) {
              uVar9 = (undefined2)puVar7[1];
            }
            else {
              uVar9 = (undefined2)*puVar7;
            }
            *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = uVar9;
            *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x22))) = uVar9;
          }
        }
        if ((*puVar7 < (uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28)))) &&
           ((uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) < puVar7[1])) {
          uVar9 = (undefined2)*puVar7;
          if ((short)(*(undefined4 *)&gen_args[3]) == (short)(*(undefined4 *)&gen_args[4])) {
            *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x26))) = uVar9;
            *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x22))) = uVar9;
            *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = (short)puVar7[1];
          }
          else if (*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x22))) == (short)(*(undefined4 *)&gen_args[5])) {
            if ((*(bool *)(gen_frame + 0x33)) == false) {
              uVar9 = (undefined2)puVar7[1];
            }
            *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = uVar9;
            *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x22))) = uVar9;
          }
        }
      }
      uVar5 = puVar7[1];
      puVar1 = puVar7 + 2;
      puVar7 = puVar7 + 0x2c;
    } while (puVar1 != (*(uint * PTR32 *)(gen_frame + 0x10)));
  }
  uVar4 = *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28)));
  uVar2 = *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x26)));
  ((uint *)(gen_frame + 0x34))[0] = (uint)uVar2;
  iVar10 = 0;
  (*(int *)(gen_frame + 0x20)) = 0;
  ((uint *)(gen_frame + 0x34))[1] = (uint)uVar4 - (uint)uVar2;
  ((uint *)(gen_frame + 0x34))[2] = (int)*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) - (uint)uVar4;
  F_0042aca0((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5d0 GEN_EDX_ARG);
  F_0042aca0((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x624 GEN_EDX_ARG);
  F_0042aca0((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x678 GEN_EDX_ARG);
  F_0042aca0((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x42c GEN_EDX_ARG);
  F_0042aca0((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x480 GEN_EDX_ARG);
  puVar7 = (uint *)F_0042aca0((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4d4 GEN_EDX_ARG);
  if ((*(uint * PTR32 *)(gen_frame + 0xc)) != (*(uint * PTR32 *)(gen_frame + 0x10))) {
    (*(uint * PTR32 *)(gen_frame + 0x24)) = (*(uint * PTR32 *)(gen_frame + 0xc)) + 0x15;
    do {
      puVar7 = (*(uint * PTR32 *)(gen_frame + 0x24));
      if (2 < iVar10) break;
      if ((int)((uint *)(gen_frame + 0x34))[(int)(iVar10)] < 1) {
        iVar10 = iVar10 + 1;
        (*(int *)(gen_frame + 0x20)) = iVar10;
      }
      (*(int *)(gen_frame + 0x28)) = (*(uint * PTR32 *)(gen_frame + 0x24))[0x16] - (*(uint * PTR32 *)(gen_frame + 0x24))[0x15];
      (*(int *)(gen_frame + 0x1c)) = 0;
      if (0 < (*(int *)(gen_frame + 0x28))) {
        (*(undefined * PTR32 *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP((iVar10 * 0x54 + 0x5d0 + (int)(*(undefined * PTR32 *)&gen_args[0]))));
        do {
          if (2 < iVar10) break;
          uVar5 = ((uint *)(gen_frame + 0x34))[(int)(iVar10)];
          if ((*(int *)(gen_frame + 0x28)) <= (int)uVar5) {
            puVar1 = ((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x720)));
            F_0042ccf0(puVar1 GEN_EDX_ARG,(*(uint * PTR32 *)(gen_frame + 0x24)));
            F_00a26db0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) GEN_EDX_ARG,puVar1,(*(int *)(gen_frame + 0x1c)),REFG(undefined4, 0x108cc50));
            puVar7 = puVar1;
            if (*(char *)(*(uint * PTR32 *)(gen_frame + 0x24))[-0x15] != '\0') {
              puVar7 = (*(uint * PTR32 *)(gen_frame + 0x24)) - 0x15;
            }
            pvVar8 = ((undefined *)GEN_TOP((iVar10 * 0x54 + (int)(*(undefined * PTR32 *)&gen_args[0]))));
            (*(undefined * PTR32 *)(gen_frame + 0x2c)) = pvVar8;
            F_0042d4d0((undefined *)((int)pvVar8 + 0x42c) GEN_EDX_ARG,puVar7);
            F_0042d4d0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x5d0) GEN_EDX_ARG,puVar1);
            ((uint *)(gen_frame + 0x34))[(int)(iVar10)] = ((uint *)(gen_frame + 0x34))[(int)(iVar10)] - (*(int *)(gen_frame + 0x28));
            break;
          }
          pvVar8 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x720)));
          F_0042ccf0(pvVar8 GEN_EDX_ARG,(*(uint * PTR32 *)(gen_frame + 0x24)));
          F_00a26db0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) GEN_EDX_ARG,pvVar8,(*(int *)(gen_frame + 0x1c)),uVar5);
          F_0042d4d0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) - 0x1a4) GEN_EDX_ARG,pvVar8);
          pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x2c));
          F_0042d4d0((*(undefined * PTR32 *)(gen_frame + 0x2c)) GEN_EDX_ARG,pvVar8);
          iVar10 = (*(int *)(gen_frame + 0x20)) + 1;
          (*(int *)(gen_frame + 0x20)) = iVar10;
          (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + uVar5;
          (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) - uVar5;
          (*(undefined * PTR32 *)(gen_frame + 0x2c)) = (undefined *)((int)pvVar3 + 0x54);
          iVar10 = (*(int *)(gen_frame + 0x20));
        } while (0 < (*(int *)(gen_frame + 0x28)));
      }
      puVar7 = (*(uint * PTR32 *)(gen_frame + 0x24)) + 0x2c;
      puVar1 = (*(uint * PTR32 *)(gen_frame + 0x24)) + 0x17;
      (*(uint * PTR32 *)(gen_frame + 0x24)) = puVar7;
    } while (puVar1 != (*(uint * PTR32 *)(gen_frame + 0x10)));
  }
  puVar1 = (*(uint * PTR32 *)(gen_frame + 0xc));
  if (*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x843))) < 2) {
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xda))) = 0;
  }
  else {
    uVar4 = F_00586c30((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6cc);
    puVar7 = ((uint *)GEN_TOP(CONCAT22(extraout_var,uVar4)));
  }
  if (puVar1 != (uint *)0x0) {
    puVar7 = puVar1;
    if (puVar1 != (*(uint * PTR32 *)(gen_frame + 0x10))) {
      do {
        F_0042c880(puVar7 + 0x15 GEN_EDX_ARG);
        F_0042c880(puVar7 GEN_EDX_ARG);
        puVar7 = puVar7 + 0x2c;
      } while (puVar7 != (*(uint * PTR32 *)(gen_frame + 0x10)));
    }
    uVar11 = F_00429760(puVar1,(((*(int *)(gen_frame + 0x14)) - (int)puVar1) / 0xb0) * 0xb0,0x2c0);
    puVar7 = (uint *)uVar11;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return (uint)puVar7;
}

/* ref: FUN_00593de0 */
GEN_FRAME uint GEN_THISCALL F_00593de0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x593de0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  short sVar5;
  ulonglong uVar6;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  sVar5 = (short)param_4;
  if (((char)param_6 != '\0') && (sVar5 != (short)param_5)) {
    sVar3 = (short)param_3;
    if (sVar3 == sVar5) {
      sVar3 = sVar3 + 1;
    }
    else {
      sVar3 = sVar3 - 1;
    }
    *(short *)((int)this + 0x22) = sVar3;
    *(undefined1 *)((int)this + 0x20) = 1;
  }
  bVar2 = F_0042ac50(param_2 GEN_EDX_FWD,(int)this + 0x6cc);
  F_00593950(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6);
  if ((char)param_7 == '\0') {
    if ((((int)sVar5 == (uint)*(ushort *)((int)this + 0x26)) &&
        (uVar4 = (uint)(short)param_5, uVar4 == *(ushort *)((int)this + 0x28))) && (bVar2 != 0))
    goto LAB_00593ec3;
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"",REFG(undefined4, 0x108cc50));
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  }
  else {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x109fdb0),REFG(undefined4, 0x108cc50));
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  }
  uVar6 = F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  uVar4 = (uint)uVar6;
LAB_00593ec3: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_00593ee0 */
GEN_FRAME uint GEN_THISCALL F_00593ee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x593ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00593950(this GEN_EDX_FWD,param_1,param_2,0xffffffff,0,0,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"",REFG(undefined4, 0x108cc50));
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
  ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return (uint)uVar2;
}

/* ref: FUN_00593f50 */
GEN_FRAME uint GEN_THISCALL F_00593f50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x593f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar2 = F_0042cd30((undefined *)((int)this + 0x42c) GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x4)),(int)this + 0x4d4);
  F_0042ccf0((undefined *)((int)this + 0x528) GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  uVar2 = F_0042cd30((undefined *)((int)this + 0x5d0) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),(int)this + 0x678);
  F_0042ccf0((undefined *)((int)this + 0x6cc) GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  uVar2 = (uint)*(ushort *)((int)this + 0x26);
  F_00593950(this GEN_EDX_ARG,(undefined *)((int)this + 0x528),(undefined *)((int)this + 0x6cc),uVar2,uVar2,uVar2,0);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"",REFG(undefined4, 0x108cc50));
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
  ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return (uint)uVar3;
}

/* ref: FUN_00594010 */
GEN_FRAME uint GEN_THISCALL F_00594010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x594010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * this_00;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar1 = (int)this + 0x2c;
  if ((**(char * PTR32 *)((int)this + 0x2c) == '\0') &&
     (iVar1 = (int)this + 0x624, **(char * PTR32 *)((int)this + 0x624) == '\0')) {
    uVar2 = F_0055c2f0((int)this + 0x42c);
    if (uVar2 != 0) {
      this_00 = (undefined *)((int)this + 0x3d8);
      F_0042e430(this_00 GEN_EDX_ARG,uVar2);
      uVar3 = (uint)*(ushort *)((int)this + 0x22);
      uVar4 = 0;
      uVar2 = F_00a26ce0(*(undefined * PTR32 *)((int)this + 0x18) GEN_EDX_ARG,this_00,0);
      F_00593950(this GEN_EDX_ARG,(int)this + 0x528,(int)this + 0x6cc,(uint)*(ushort *)((int)this + 0x22),
                   (uint)(ushort)(*(short *)((int)this + 0x22) - (short)uVar2),uVar3,uVar4);
      F_0042ccf0((undefined *)((int)this + 0x720) GEN_EDX_ARG,this_00);
      F_0042cbc0(param_1 GEN_EDX_ARG,(undefined *)((int)this + 0x720));
      return (uint)param_1;
    }
    F_0042aca0((int)this + 0x720 GEN_EDX_ARG);
    F_0042cbc0(param_1 GEN_EDX_ARG,(int)this + 0x720);
    return (uint)param_1;
  }
  F_0042ccf0((undefined *)((int)this + 0x720) GEN_EDX_ARG,iVar1);
  F_0042cbc0(param_1 GEN_EDX_ARG,(undefined *)((int)this + 0x720));
  return (uint)param_1;
}

/* ref: FUN_005940f0 */
GEN_FRAME uint GEN_THISCALL F_005940f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5940f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (*(short *)((int)this + 0x7c8) != 0) {
    uVar2 = F_00572b60(this GEN_EDX_FWD,1,1);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
    return uVar2;
  }
  this_00 = (undefined *)((int)this + 0x774);
  uVar2 = F_00594010(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  F_0042ccf0(this_00 GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 4))))(*(int * PTR32 *)((int)this + 8) GEN_EDX_ARG);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x10))))
                    (*(int * PTR32 *)((int)this + 8) GEN_EDX_ARG,this_00,(int)this + 0x7d4);
  *(uint *)((int)this + 2000) = uVar2;
  if (uVar2 == 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xc))))
                      (*(int * PTR32 *)((int)this + 8) GEN_EDX_ARG,0xffffffff,(int)this + 0x7d4);
    *(uint *)((int)this + 2000) = uVar2;
    F_0042aca0(this_00 GEN_EDX_ARG);
    uVar2 = (uint)*(ushort *)((int)this + 0x22);
    F_00593950(this GEN_EDX_ARG,(int)this + 0x528,(int)this + 0x6cc,uVar2,uVar2,uVar2,0);
  }
  piVar1 = *(int * PTR32 *)((int)this + 2000);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    *(undefined2 *)((int)this + 0x7cc) = 0;
    if (piVar1[1] - *piVar1 >> 2 == 0) {
                    
      F_00c457e7("invalid vector<T> subscript");
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,*(undefined4 *)*piVar1,REFG(undefined4, 0x108cc50));
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),0,0,0);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))
                      (piVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 2000),(int)*(short *)((int)this + 0x7cc));
    *(short *)((int)this + 0x7c8) = *(short *)((int)this + 0x7c8) + 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00594240 */
GEN_FRAME uint GEN_THISCALL F_00594240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x594240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  undefined4 * PTR32 * PTR32 * pppuVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar5;
  undefined4 * puVar6;
  ulonglong uVar7;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = this;
  F_0042cc20(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_FWD,"",REFG(undefined4, 0x108cc50));
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = (undefined4 *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)0x0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_00593720(param_1,&(*(undefined4 * PTR32 *)(gen_frame + 0xc)));
  (*(uint *)(gen_frame + 0x100)) = 3;
  (*(uint *)(gen_frame + 0xfc)) = 0;
  ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xec))[0] = (undefined4 * PTR32 * PTR32 * PTR32 *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = (*(undefined4 * PTR32 *)(gen_frame + 0xc));
  puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0xc));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0xc)) != (*(undefined4 * PTR32 *)(gen_frame + 0x10))) {
    do {
      (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar6;
      if (*(char *)*puVar6 == '\0') {
        F_0042eca0(puVar6 + 0x15 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xec)));
        F_0042e230(((undefined1 *)(gen_frame + 0x7c)) GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xec)));
        uVar4 = F_00a26ce0(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x18) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x7c)),1);
        (*(uint *)(gen_frame + 0x20)) = uVar4;
        F_0042c880(((undefined1 *)(gen_frame + 0x7c)) GEN_EDX_ARG);
        uVar4 = 0;
        if ((*(uint *)(gen_frame + 0x20)) != 0) {
          do {
            if ((*(uint *)(gen_frame + 0xfc)) <= uVar4) {
                    
              F_00c457e7("invalid string position");
            }
            ppppuVar5 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xec))[0];
            if ((*(uint *)(gen_frame + 0x100)) < 4) {
              ppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xec));
            }
            pppuVar1 = ppppuVar5[uVar4];
            if (pppuVar1 - 8 < (undefined4 * PTR32 * PTR32 *)0x5f) {
              bVar3 = F_0055c370((*(undefined * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,(int)(char)pppuVar1);
              if (bVar3 != 0) {
                F_0042e3c0(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_ARG,pppuVar1);
              }
            }
            else if ((*(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x7d8) >> 5 & 1) != 0) {
              (*(uint *)(gen_frame + 0xe4)) = 3;
              (*(undefined4 *)(gen_frame + 0xe0)) = 0;
              ((undefined4 *)(gen_frame + 0xd0))[0] = 0;
              F_005ce350(((undefined4 *)(gen_frame + 0xd0)) GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xec)),uVar4,1);
              F_0042e230(((undefined1 *)(gen_frame + 0x7c)) GEN_EDX_ARG,((undefined4 *)(gen_frame + 0xd0)));
              F_0042e360(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x7c)));
              F_0042c880(((undefined1 *)(gen_frame + 0x7c)) GEN_EDX_ARG);
              if (3 < (*(uint *)(gen_frame + 0xe4))) {
                F_00429760(((undefined4 *)(gen_frame + 0xd0))[0],(*(uint *)(gen_frame + 0xe4)) * 4 + 4,0x3c);
              }
            }
            uVar4 = uVar4 + 1;
            puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0x1c));
          } while (uVar4 < (*(uint *)(gen_frame + 0x20)));
        }
      }
      else if ((*(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x7d8) >> 6 & 1) != 0) {
        F_0042e360(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_ARG,puVar6);
      }
      puVar6 = puVar6 + 0x2c;
      (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar6;
    } while (puVar6 != (*(undefined4 * PTR32 *)(gen_frame + 0x10)));
  }
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0xc) + 4)));
  ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x28)));
  if (3 < (*(uint *)(gen_frame + 0x100))) {
    F_00429760(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xec))[0],(*(uint *)(gen_frame + 0x100)) * 4 + 4,0x3c);
  }
  (*(uint *)(gen_frame + 0x100)) = 3;
  (*(uint *)(gen_frame + 0xfc)) = 0;
  ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xec))[0] = (undefined4 * PTR32 * PTR32 *)0x0;
  F_005d1440(&(*(undefined4 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return (uint)uVar7;
}

/* ref: FUN_005944b0 */
GEN_FRAME uint GEN_THISCALL F_005944b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5944b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 4) != 1) {
    F_0058c5d0(this GEN_EDX_FWD);
  }
  *(undefined4 *)((int)this + 4) = 1;
  uVar1 = *(undefined4 *)((int)this + 8);
  uVar2 = F_005922a0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x2c) GEN_EDX_ARG,param_1);
  *(uint *)((int)this + 8) = uVar2;
  F_005881e0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x2c) GEN_EDX_ARG,uVar1);
  return 0;
}

/* ref: FUN_00594500 */
GEN_FRAME uint F_00594500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x594500u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  F_005d36f0((undefined *)((*(int *)&gen_args[0]) + 0x38) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[1]));
  *(*(int * PTR32 *)&gen_args[2]) = *(*(int * PTR32 *)&gen_args[2]) + 1;
  return (uint)(*(int * PTR32 *)&gen_args[2]);
}

/* ref: FUN_00594520 */
GEN_FRAME byte GEN_THISCALL F_00594520(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x594520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x150];
  uint * this_00;
  int * piVar1;
  uint * puVar2;
  uint * puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int * piVar8;
  int * piVar9;
  
  (*(uint *)(gen_frame + 0x148)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14c);
  piVar1 = *(int * PTR32 *)this;
  piVar8 = (int *)*piVar1;
  (*(int * PTR32 *)(gen_frame + 0x38)) = this;
  (*(int * PTR32 *)(gen_frame + 0x2c)) = piVar1;
  (*(int * PTR32 *)(gen_frame + 0x44)) = piVar8;
  F_004ff310(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_FWD,6,0);
  (*(undefined4 *)(gen_frame + 0x34)) = 0x756c64;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined1 *)(gen_frame + 0x18)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x1c)) = 5000;
  (*(undefined4 *)(gen_frame + 0x20)) = 0x10100;
  (*(undefined1 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 2;
  (*(undefined2 *)(gen_frame + 0x25)) = 0;
  piVar9 = this;
  if (piVar8 != piVar1) {
    this_00 = (uint *)((int)this + 0xc);
    do {
      (*(int *)(gen_frame + 0x3c)) = piVar8[2];
      F_00c472af(((undefined1 *)(gen_frame + 0x48)),0x100,REFG(undefined * PTR32, 0x131db98),piVar8[2]);
      uVar4 = F_00513d20(((undefined1 *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x34)),((undefined1 *)(gen_frame + 0x48)),&(*(undefined4 *)(gen_frame + 0x4)),0,0);
      puVar2 = *(uint * PTR32 *)((int)this + 0x10);
      (*(uint *)(gen_frame + 0x40)) = uVar4;
      if ((&(*(uint *)(gen_frame + 0x40)) < puVar2) && (puVar3 = (uint *)*this_00, puVar3 <= &(*(uint *)(gen_frame + 0x40)))) {
        if (puVar2 == *(uint * PTR32 *)((int)this + 0x14)) {
          iVar5 = (int)puVar2 - (int)((int)(uintptr_t)puVar3) >> 2;
          if (iVar5 == -1) {
LAB_0059474b: ;
                    
            F_00c4579a("vector<T> too long");
          }
          uVar6 = iVar5 + 1;
          uVar4 = (int)*(uint * PTR32 *)((int)this + 0x14) - (int)((int)(uintptr_t)puVar3) >> 2;
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
            F_005d1bc0(this_00 GEN_EDX_ARG,uVar4);
            piVar8 = (*(int * PTR32 *)(gen_frame + 0x44));
          }
        }
        if (*(undefined4 * PTR32 *)((int)this + 0x10) != (undefined4 *)0x0) {
          **(undefined4 * PTR32 *)((int)this + 0x10) =
               *((undefined4 *)GEN_TOP((*this_00 + ((int)&(*(uint *)(gen_frame + 0x40)) - (int)((int)(uintptr_t)puVar3) >> 2) * 4)));
        }
      }
      else {
        if (puVar2 == *(uint * PTR32 *)((int)this + 0x14)) {
          iVar5 = (int)((int)puVar2 - *this_00) >> 2;
          if (iVar5 == -1) goto LAB_0059474b;
          uVar7 = iVar5 + 1;
          uVar6 = (int)((int)*(uint * PTR32 *)((int)this + 0x14) - *this_00) >> 2;
          if (uVar6 < uVar7) {
            if (-(uVar6 >> 1) - 1 < uVar6) {
              uVar6 = 0;
            }
            else {
              uVar6 = uVar6 + (uVar6 >> 1);
            }
            if (uVar6 < uVar7) {
              uVar6 = uVar7;
            }
            F_005d1bc0(this_00 GEN_EDX_ARG,uVar6);
            piVar8 = (*(int * PTR32 *)(gen_frame + 0x44));
          }
        }
        if (*(uint * PTR32 *)((int)this + 0x10) != (uint *)0x0) {
          **(uint * PTR32 *)((int)this + 0x10) = uVar4;
        }
      }
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 4;
      if ((*(int *)(gen_frame + 0x3c)) != 0) {
        F_00406ad0((*(int *)(gen_frame + 0x3c)));
      }
      piVar8 = (int *)*piVar8;
      (*(int * PTR32 *)(gen_frame + 0x44)) = piVar8;
      piVar9 = (*(int * PTR32 *)(gen_frame + 0x38));
    } while (piVar8 != (*(int * PTR32 *)(gen_frame + 0x2c)));
  }
  piVar1 = (int *)*piVar9;
  piVar8 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*piVar9 + 4) = *piVar9;
  piVar9[1] = 0;
  if (piVar8 != (int *)*piVar9) {
    do {
      piVar1 = (int *)*piVar8;
      F_00429760(piVar8,0xc,400);
      piVar8 = piVar1;
    } while (piVar1 != (int *)*piVar9);
  }
  F_00c47745((*(uint *)(gen_frame + 0x148)) ^ (uint)(uint)(gen_frame + 0x14c) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00594760 */
GEN_FRAME byte GEN_THISCALL F_00594760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x594760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00591f20(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14) GEN_EDX_FWD,(uint)*(byte *)((int)this + 0x13a),param_1);
  return bVar1;
}

/* ref: FUN_00594790 */
GEN_NOFRAME uint GEN_THISCALL F_00594790(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x594790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  byte bVar2;
  uint uVar3;
  
  while( true ) {
    this_00 = *(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14);
    if ((((this != (int *)0x0) && ((*(byte *)((int)this + 0xf8) & 0x10) == 0)) &&
        (iVar1 = (*(ushort *)((int)this + 0xf6) & 0xf) * 3 + 6,
        *(int *)((int)this_00 + iVar1 * 4 + 4) != 0)) &&
       (uVar3 = **(uint * PTR32 *)((int)this_00 + iVar1 * 4), *(int * PTR32 *)(uVar3 + 8) == this)) {
      return uVar3;
    }
    bVar2 = F_00591de0(this_00 GEN_EDX_FWD,this,*(ushort *)((int)this + 0xf6) & 0xf,0);
    if (bVar2 == 0) {
      F_00587d10(this_00 GEN_EDX_ARG,this);
      F_00590670(this_00 GEN_EDX_ARG,this);
    }
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x74))(this GEN_EDX_ARG);
    if ((char)uVar3 == '\0') break;
    this = (undefined *)F_0057f930(this_00 GEN_EDX_ARG,this);
    if (this == (int *)0x0) {
      return 0;
    }
  }
  return uVar3;
}

/* ref: FUN_00594820 */
GEN_FRAME unsigned int GEN_THISCALL F_00594820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x594820u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint * this_00;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  iVar1 = *(int *)((*(int *)&gen_args[1]) + 0x3c);
  iVar2 = *(int *)((*(int *)&gen_args[1]) + 0x38);
  do {
    if (iVar1 == iVar2) {
      return 0;
    }
    iVar3 = *(int *)(iVar1 - 4);
    if (iVar3 != 0) {
      (*(int *)&gen_args[1]) = iVar3;
      if (((*(uint *)(iVar3 + 0x84) & 0x1000000) != 0) &&
         ((*(uint *)(iVar3 + 0x84) & 0x20000000) != 0)) {
        this_00 = *((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x140)));
        puVar4 = (undefined4 *)this_00[1];
        if (&(*(int *)&gen_args[1]) < puVar4) {
          puVar5 = (undefined4 *)*this_00;
          if (&(*(int *)&gen_args[1]) < puVar5) goto LAB_005948ae;
          if (puVar4 == (undefined4 *)this_00[2]) {
            F_005d2af0(this_00 GEN_EDX_FWD,1);
          }
          if ((undefined4 *)this_00[1] != (undefined4 *)0x0) {
            *(undefined4 *)this_00[1] =
                 *((undefined4 *)GEN_TOP((*this_00 + ((int)&(*(int *)&gen_args[1]) - (int)((int)(uintptr_t)puVar5) >> 2) * 4)));
          }
        }
        else {
LAB_005948ae: ;
          if (puVar4 == (undefined4 *)this_00[2]) {
            F_005d2af0(this_00 GEN_EDX_ARG,1);
          }
          if ((int *)this_00[1] != (int *)0x0) {
            *(int *)this_00[1] = iVar3;
          }
        }
        this_00[1] = this_00[1] + 4;
      }
      if ((999 < *(ushort *)(iVar3 + 0x18)) && (*(int *)(iVar3 + 0x8c) != 0)) {
        F_00594820((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,*(int *)(iVar3 + 0x8c) + 4);
      }
    }
    iVar1 = iVar1 - 4;
  } while( true );
}

/* ref: FUN_00594910 */
GEN_FRAME unsigned int GEN_THISCALL F_00594910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x594910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * this_00;
  uint uVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  
  if ((*(byte *)((int)this + 0xf9) & 0x80) == 0) {
    if ((*(int *)((int)this + 0x2c) != 0) &&
       ((uint)*(ushort *)((int)this + 0x3a) + *((int *)GEN_TOP((*(int *)((int)this + 0x2c) + 4))) != 0)) {
      if (*(undefined * PTR32 *)((int)this + 0x140) != (undefined *)0x0) {
        F_005cd030(*(undefined * PTR32 *)((int)this + 0x140) GEN_EDX_FWD,1);
        *(undefined4 *)((int)this + 0x140) = 0;
      }
      uVar3 = 0;
      uVar1 = F_00404270();
      puVar2 = (undefined4 *)F_00406bd0(0x10,0,uVar1,uVar3);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
      }
      *(undefined4 * PTR32 *)((int)this + 0x140) = puVar2;
      if (puVar2 != (undefined4 *)0x0) {
        F_00594820(this GEN_EDX_ARG,(int)this + 0x24);
        this_00 = *(int * PTR32 *)((int)this + 0x140);
        if ((*this_00 == this_00[1]) && (this_00 != (int *)0x0)) {
          F_005cd030(this_00 GEN_EDX_ARG,1);
          *(undefined4 *)((int)this + 0x140) = 0;
        }
        if ((char)param_1 != '\0') {
          *(undefined1 *)((int)this + 0x13e) = 0xff;
          *(undefined4 *)((int)this + 0xa4) = 0;
        }
        uVar1 = *(uint *)((int)this + 0xf4) >> 0x14 & 0xf;
        if ((uVar1 == 5) || (uVar1 == 4)) {
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
        }
        if (*(char *)((int)this + 0x13e) == -1) {
          F_005732f0(this GEN_EDX_ARG,(int)this + 0x24,uVar3);
        }
      }
    }
  }
  return;
}

/* ref: FUN_00594a00 */
GEN_NOFRAME uint GEN_THISCALL F_00594a00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x594a00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined4 * in_EAX = 0;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  uint uVar4;
  undefined3 extraout_var_02 = 0;
  char * pcVar5;
  
  iVar2 = *(int *)((int)this + 0xcc);
  if (*(int *)((int)this + 0xd0) == iVar2) {
    if (iVar2 != 0) {
      uVar4 = 0;
      pcVar5 = (char *)(iVar2 + 0x144);
      while (*pcVar5 == -1) {
        uVar4 = uVar4 + 1;
        pcVar5 = pcVar5 + 0xc;
        if (4 < (int)uVar4) {
          return uVar4;
        }
      }
      in_EAX = *(undefined4 * PTR32 *)((int)this + 0xd8);
      if ((in_EAX != (undefined4 *)0x0) &&
         (*(ushort *)(iVar2 + 0x128) <= *(ushort *)(in_EAX + 0x4a))) {
        bVar3 = F_0058cb40(this GEN_EDX_FWD,iVar2,in_EAX,1);
        in_EAX = ((undefined4 *)GEN_TOP(CONCAT31(extraout_var_02,bVar3)));
      }
    }
  }
  else {
    *(int *)((int)this + 0xd0) = iVar2;
    if (((iVar2 != 0) &&
        ((((*(byte *)(iVar2 + 0xf8) & 0x10) != 0 ||
          (iVar1 = (*(ushort *)(iVar2 + 0xf6) & 0xf) * 3 + 6,
          in_EAX = (undefined4 *)((int)this + iVar1 * 4), *(int *)((int)this + iVar1 * 4 + 4) == 0))
         || (in_EAX = *(undefined4 * PTR32 *)*in_EAX, in_EAX[2] != iVar2)))) &&
       ((*(byte *)(iVar2 + 0xfb) & 0x10) == 0)) {
      bVar3 = F_00591de0(this GEN_EDX_ARG,iVar2,*(ushort *)(iVar2 + 0xf6) & 0xf,0);
      in_EAX = ((undefined4 *)GEN_TOP(CONCAT31(extraout_var,bVar3)));
      if (bVar3 == 0) {
        bVar3 = F_00587d10(this GEN_EDX_ARG,*(undefined4 *)((int)this + 0xcc));
        in_EAX = ((undefined4 *)GEN_TOP(CONCAT31(extraout_var_00,bVar3)));
        if (bVar3 != 0) {
          bVar3 = F_00590670(this GEN_EDX_ARG,*(undefined4 *)((int)this + 0xcc));
          return CONCAT31(extraout_var_01,bVar3);
        }
      }
    }
  }
  return (uint)in_EAX;
}

/* ref: FUN_00594ae0 */
GEN_FRAME uint GEN_THISCALL F_00594ae0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x594ae0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  uint * this_00;
  int * piVar7;
  
  this_00 = (*(uint * PTR32 *)&gen_args[1]);
  uVar1 = *(*(uint * PTR32 *)&gen_args[1]);
  if (uVar1 != (*(uint * PTR32 *)&gen_args[1])[1]) {
    F_00c46e20(uVar1,(*(uint * PTR32 *)&gen_args[1])[1],0);
    this_00[1] = uVar1;
  }
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb4)));
  piVar7 = piVar2;
  for (piVar3 = (int *)*piVar2; piVar3 != piVar2; piVar3 = (int *)*piVar3) {
    iVar4 = piVar3[2];
    if ((*(char *)(iVar4 + 0x13c) == '\0') && ((*(uint *)(iVar4 + 0x108) & (*(uint *)&gen_args[2])) != 0)) {
      puVar5 = (undefined4 *)this_00[1];
      (*(uint * PTR32 *)&gen_args[1]) = (uint *)iVar4;
      if ((&(*(uint * PTR32 *)&gen_args[1]) < puVar5) && (puVar6 = (undefined4 *)*this_00, puVar6 <= &(*(uint * PTR32 *)&gen_args[1]))) {
        if (puVar5 == (undefined4 *)this_00[2]) {
          F_005d2e00(this_00 GEN_EDX_ARG,1);
        }
        piVar7 = (int *)this_00[1];
        if (piVar7 != (int *)0x0) {
          *piVar7 = *((int *)GEN_TOP((*this_00 + ((int)&(*(uint * PTR32 *)&gen_args[1]) - (int)((int)(uintptr_t)puVar6) >> 2) * 4)));
        }
      }
      else {
        if (puVar5 == (undefined4 *)this_00[2]) {
          F_005d2e00(this_00 GEN_EDX_ARG,1);
        }
        piVar7 = (int *)this_00[1];
        if (piVar7 != (int *)0x0) {
          *piVar7 = iVar4;
        }
      }
      this_00[1] = this_00[1] + 4;
    }
  }
  return (uint)piVar7;
}

/* ref: FUN_00594bb0 */
GEN_FRAME unsigned int GEN_THISCALL F_00594bb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x594bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int * piVar1;
  int iVar2;
  char cVar3;
  int * piVar4;
  
  if ((*(uint *)&gen_args[1]) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb4)));
    piVar4 = (int *)*piVar1;
    if (piVar4 != piVar1) {
      while (*(byte *)(piVar4[2] + 0x13a) != (*(uint *)&gen_args[1])) {
        piVar4 = (int *)*piVar4;
        if (piVar4 == piVar1) {
          return;
        }
      }
      iVar2 = piVar4[2];
      if (iVar2 != 0) {
        *(byte *)(iVar2 + 0xf8) = *(byte *)(iVar2 + 0xf8) | 1;
        cVar3 = (char)(*(undefined4 *)&gen_args[2]);
        if (((char)(*(undefined4 *)&gen_args[2]) == '\0') && ((*(byte *)(iVar2 + 0xf9) & 2) != 0)) {
          cVar3 = '\x01';
        }
        *(byte *)(iVar2 + 0xf9) =
             *(byte *)(iVar2 + 0xf9) ^ (cVar3 * '\x02' ^ *(byte *)(iVar2 + 0xf9)) & 2;
        if ((char)(*(undefined4 *)&gen_args[3]) != '\0') {
          F_005d3840(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0))) GEN_EDX_FWD,&(*(uint *)&gen_args[1]));
        }
      }
    }
  }
  return;
}

/* ref: FUN_00594c40 */
GEN_FRAME unsigned int GEN_THISCALL F_00594c40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x594c40u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  int * piVar2;
  
  if ((*(uint *)&gen_args[1]) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb4)));
    piVar2 = (int *)*piVar1;
    if (piVar2 != piVar1) {
      while (*(byte *)(piVar2[2] + 0x13a) != (*(uint *)&gen_args[1])) {
        piVar2 = (int *)*piVar2;
        if (piVar2 == piVar1) {
          return;
        }
      }
      if (piVar2[2] != 0) {
        F_005d3840(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0))) GEN_EDX_FWD,&(*(uint *)&gen_args[1]));
      }
    }
  }
  return;
}

/* ref: FUN_00594ca0 */
GEN_FRAME uint GEN_THISCALL F_00594ca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x594ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  byte bVar3;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  
  if (param_1 != 0) {
    iVar1 = *(int *)((int)this + 0xe8);
    if (iVar1 != 0) {
      iVar2 = *(int *)(param_1 + 0x90);
      while (iVar2 != 0) {
        if (iVar1 == *(int *)(param_1 + 0x90)) {
          *(undefined4 *)((int)this + 0xe8) = 0;
          break;
        }
        iVar1 = *(int *)(iVar1 + 8);
        iVar2 = iVar1;
      }
    }
    in_EAX = F_00580230(this GEN_EDX_FWD,param_1,1);
    if (*(int *)((int)this + 0xcc) == param_1) {
      bVar3 = F_00596a60(this GEN_EDX_ARG);
      in_EAX = CONCAT31(extraout_var,bVar3);
      if (bVar3 != 0) {
        F_0058ccd0(this GEN_EDX_ARG,1);
        in_EAX = F_00594a00(this GEN_EDX_ARG);
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00594d10 */
GEN_FRAME byte GEN_THISCALL F_00594d10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x594d10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  if (param_1 != (int *)0x0) {
    bVar1 = *(byte *)(param_1 + 0x3e);
    if ((byte)param_2 != (bVar1 >> 3 & 1)) {
      *(byte *)(param_1 + 0x3e) = ((byte)param_2 * '\b' ^ bVar1) & 8 ^ bVar1;
      if ((byte)param_2 == 0) {
        F_0056ae10(param_1 GEN_EDX_FWD);
        ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x6c))(param_1 GEN_EDX_ARG);
        ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x7c))(param_1 GEN_EDX_ARG,1);
        if ((*(byte *)((int)param_1 + 0xf9) & 0x20) != 0) {
          F_00594ca0(this GEN_EDX_ARG,param_1);
        }
      }
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00594d90 */
GEN_FRAME uint GEN_THISCALL F_00594d90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x594d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  int * piVar4;
  
  if ((char)param_1 != '\0') {
    uVar2 = F_00573dd0(this GEN_EDX_FWD);
    return uVar2;
  }
  uVar2 = 1;
  piVar4 = (int *)((int)this + 0x1c);
  puVar3 = (undefined4 *)((int)this + 0x3c);
  param_1 = 4;
  do {
    piVar1 = (int *)*piVar4;
    if (piVar1 != (int *)0x0) {
      if (uVar2 == 2) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
        *piVar4 = 0;
      }
      else {
        *(undefined1 *)(puVar3 + 5) = 0;
        *puVar3 = 0;
        F_00592380(puVar3 - 3 GEN_EDX_ARG);
      }
    }
    piVar4 = piVar4 + 1;
    puVar3 = puVar3 + 10;
    uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
    param_1 = param_1 - 1;
  } while (param_1 != 0);
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  return (uint)this;
}

/* ref: Component::GUI2::AtkToolTipManager::vf2 */
GEN_FRAME uint GEN_THISCALL F_00594e10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x594e10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_1 & 0xffff;
  uVar3 = uVar2 - 3;
  if (uVar3 < 0x38) {
    uVar3 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x594e80) + uVar2 + 1)));
    switch((unsigned int)(uintptr_t)(uVar2)) {
    case 3: ;
    case 7: ;
      uVar2 = F_00594d90(this GEN_EDX_FWD,0);
      return uVar2;
    case 6: ;
      piVar1 = *(int * PTR32 *)(param_3 + 4);
      if ((piVar1 != (int *)0x0) &&
         (uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG), (char)uVar3 == '\0')) {
        uVar3 = F_0058d370(this GEN_EDX_ARG,piVar1);
      }
      break;
    case 0x3a: ;
      uVar2 = F_0056c370(this GEN_EDX_ARG,param_2);
      return uVar2;
    }
  }
  return uVar3;
}

/* ref: FUN_00594ec0 */
GEN_FRAME uint GEN_THISCALL F_00594ec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x594ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined4 * this_00;
  
  if ((*(uint *)((int)(uintptr_t)this) >> 5 & 1) != 0) {
    F_005a0260(this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0x29;
  uVar1 = F_00404270();
  this_00 = (undefined4 *)F_00406bd0(0x10,0,uVar1,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    *this_00 = 0;
    this_00[1] = 0;
    this_00[2] = 0;
  }
  *(undefined4 * PTR32 *)((int)this + 4) = this_00;
  if ((param_1 != 0) && (this_00 != (undefined4 *)0x0)) {
    this_00 = (undefined4 *)F_005d29e0(this_00 GEN_EDX_ARG,param_1);
  }
  return (uint)this_00;
}

/* ref: FUN_00594f30 */
GEN_FRAME uint GEN_THISCALL F_00594f30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x594f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  piVar1 = (int *)param_1[1];
  uVar3 = 0;
  if ((piVar1 != (int *)0x0) && (((byte)*param_1 & 0xf) == 9)) {
    uVar2 = piVar1[1] - *piVar1 >> 3;
    piVar1 = (int *)F_00594ec0(this GEN_EDX_FWD,uVar2);
    ((uint *)(gen_frame + 0x4))[0] = 0;
    if (uVar2 != 0) {
      do {
        if ((int *)param_1[1] != (int *)0x0) {
          F_00596cd0(((uint *)(gen_frame + 0x4)) GEN_EDX_ARG,*(int *)param_1[1] + uVar3 * 8);
        }
        piVar1 = (int *)0x0;
        if (*(int * PTR32 *)((int)this + 4) != (int *)0x0) {
          piVar1 = (int *)F_00596cd0(((undefined *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + uVar3 * 8))) GEN_EDX_ARG,((uint *)(gen_frame + 0x4)));
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar2);
    }
    if ((((uint *)(gen_frame + 0x4))[0] >> 5 & 1) != 0) {
      piVar1 = (int *)F_005a0260(((uint *)(gen_frame + 0x4)) GEN_EDX_ARG);
    }
  }
  return (uint)piVar1;
}

/* ref: FUN_00594fc0 */
GEN_FRAME uint GEN_THISCALL F_00594fc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x594fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined * this_00;
  undefined4 * puVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  
  if (*(char *)((int)this + 0x34) == '\0') {
    return 0;
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x14)));
  uVar4 = F_0057f810(this_00 GEN_EDX_FWD,param_1);
  if (uVar4 != 0) {
    puVar1 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 8)));
    while( true ) {
      if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
        F_00587c00(this_00 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x18),uVar4);
        *(undefined1 *)((int)this + 0x35) = 0;
        F_00c48350(((undefined1 *)(gen_frame + 0xc)),0,0x30);
        uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
        bVar6 = (*(byte *)(gen_frame + 0x38)) ^ ((char)param_3 * '\x04' ^ (*(byte *)(gen_frame + 0x38))) & 4;
        (*(undefined4 *)(gen_frame + 0x24)) = param_5;
        (*(undefined4 *)(gen_frame + 0x28)) = param_4;
        bVar3 = ((byte)param_9 & 1) * '\x04' | (*(byte *)(gen_frame + 0x3a)) & 0xfa | (byte)param_7 & 1;
        (*(uint *)(gen_frame + 0x20)) = (uint)*(byte *)(uVar4 + 0x13a);
        *(undefined1 *)(uVar4 + 0x13c) = *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x13a)));
        *(byte *)(uVar4 + 0xf8) = *(byte *)(uVar4 + 0xf8) & 0xfb;
        *(byte *)(uVar4 + 0xf8) = *(byte *)(uVar4 + 0xf8) | 1;
        (*(byte *)(gen_frame + 0x38)) = bVar6 ^ ((char)param_2 * '\x02' ^ bVar6) & 2;
        (*(byte *)(gen_frame + 0x3a)) = bVar3 ^ ((char)param_8 << 4 ^ bVar3) & 0x10;
        (*(undefined4 *)(gen_frame + 0x2c)) = uVar2;
        (*(uint *)(gen_frame + 0x10)) = uVar4;
        F_00560ec0(((undefined1 *)(gen_frame + 0xc)),param_7);
        uVar5 = F_00588e70(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)));
        *(uint *)(uVar4 + 0x120) = *(uint *)(uVar4 + 0x120) | 0x400;
        F_00594ca0(this_00 GEN_EDX_ARG,uVar4);
        *(uint *)(uVar4 + 0x120) = *(uint *)(uVar4 + 0x120) & 0xfffffbff;
        return uVar5;
      }
      if (*(uint *)(puVar1[2] + 4) == uVar4) break;
      puVar1 = (undefined4 *)*puVar1;
    }
    return puVar1[2];
  }
  return 0;
}

/* ref: FUN_00595110 */
GEN_FRAME uint GEN_THISCALL F_00595110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0x595110u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float param_6 = (float)gen_a5;
  uint uVar1;
  int * piVar2;
  
  *(uint *)((int)param_1 + 0xc) = (uint)(param_2 * 0x3c) / 1000;
  *(undefined4 *)((int)param_1 + 8) = param_3;
  *(float *)((int)param_1 + 0x2c) = param_6;
  if (*(int *)((int)param_1 + 0x24) != -1) {
    uVar1 = 0;
    piVar2 = ((int *)GEN_TOP((*(int *)(REFG(int, 0x1379860) + 0x28) + 0x24)));
    do {
      if (*piVar2 == -1) {
        *((int *)GEN_TOP((*(int *)(REFG(int, 0x1379860) + 0x28) + 0x24 + uVar1 * 4))) = *(int *)((int)param_1 + 0x24);
        break;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar1 < 8);
    *(undefined4 *)((int)param_1 + 0x24) = 0xffffffff;
  }
  F_00573eb0(param_1 GEN_EDX_FWD);
  uVar1 = F_00592400(param_1 GEN_EDX_ARG,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00595190 */
GEN_FRAME uint GEN_THISCALL F_00595190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x595190u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined3 extraout_var = 0;
  
  (*(undefined4 *)(gen_frame + 0x0)) = param_1;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined1 *)(gen_frame + 0x8)) = 1;
  bVar1 = F_005924f0(this GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)),param_2,param_3);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_005951c0 */
GEN_FRAME uint GEN_THISCALL F_005951c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5951c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  undefined4 * puVar2;
  undefined * this_00;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  undefined3 extraout_var = 0;
  undefined * pvVar6;
  undefined4 * puVar7;
  
  pvVar6 = param_3;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  piVar5 = param_1;
  if (-1 < (int)param_1) {
    puVar7 = *(undefined4 * PTR32 *)((int)this + 0x1ec);
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x1f0);
    if ((param_3 == (undefined *)0x0) && ((*(byte *)((int)this + 0x220) & 4) != 0)) {
      param_3 = *(undefined * PTR32 *)((int)this + 0x1e0);
    }
    else {
      param_3 = (undefined *)0x0;
      if ((pvVar6 != (undefined *)0x0) &&
         ((999 < *(ushort *)((int)pvVar6 + 0x18) &&
          (uVar4 = F_005613a0(*(undefined4 *)((int)pvVar6 + 0x8c) GEN_EDX_FWD), uVar4 == 0xf)))) {
        param_3 = (undefined *)F_005bd980(pvVar6 GEN_EDX_ARG,0xf);
        this = (*(undefined * PTR32 *)(gen_frame + 0x18));
      }
    }
    for (; puVar7 != puVar2; puVar7 = puVar7 + 3) {
      if ((int *)*puVar7 == param_1) goto LAB_00595294;
    }
    this_00 = *(undefined * PTR32 *)(REFG(int, 0x1379860) + 0xc);
    (*(int * PTR32 *)(gen_frame + 0xc)) = param_1;
    (*(undefined1 *)(gen_frame + 0x14)) = 0;
    uVar4 = F_00587250(this_00 GEN_EDX_ARG,param_1,param_2,6);
    (*(uint *)(gen_frame + 0x10)) = uVar4;
    piVar5 = (int *)0x0;
    if (uVar4 != 0) {
      piVar5 = (int *)F_005d2840((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x1ec) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0xc)));
      puVar7 = ((undefined4 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x1f0) - 0xc)));
      this = (*(undefined * PTR32 *)(gen_frame + 0x18));
      if (puVar7 != (undefined4 *)0x0) {
LAB_00595294: ;
        piVar5 = (int *)puVar7[1];
        if (piVar5 != (int *)0x0) {
          if (param_3 != (undefined *)0x0) {
            (*(uint *)(gen_frame + 0x10)) = 0;
            (*(undefined1 *)(gen_frame + 0x14)) = 1;
            (*(int * PTR32 *)(gen_frame + 0xc)) = param_1;
            bVar3 = F_005924f0(param_3 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0xc)),0,0);
            return CONCAT31(extraout_var,bVar3);
          }
          piVar5 = piVar5 + 0x23;
          iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar5), 0);
          if (iVar1 < 8) {
            if (pvVar6 == (undefined *)0x0) {
              pvVar6 = *(undefined * PTR32 *)((int)this + 0x1e0);
            }
            else {
              pvVar6 = ((undefined *)GEN_TOP(((*(short *)((int)pvVar6 + 0x18) != 2) - 1 & (uint)pvVar6)));
            }
            if (pvVar6 != (undefined *)0x0) {
              piVar5 = (int *)F_00591c40(pvVar6 GEN_EDX_ARG,puVar7[1]);
            }
          }
        }
      }
    }
  }
  return (uint)piVar5;
}

/* ref: FUN_00595310 */
GEN_FRAME uint GEN_THISCALL F_00595310(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x595310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined4 * puVar2;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00404270();
  puVar2 = (undefined4 *)F_00406bd0(0x30,0,uVar1,0);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar2;
    *(undefined1 *)((int)puVar2 + 0x2d) = 0;
    F_005d3990((undefined *)((int)this + 300) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
    return (uint)(*(undefined4 * PTR32 *)(gen_frame + 0x8));
  }
  return 0;
}

/* ref: FUN_00595370 */
GEN_FRAME uint GEN_THISCALL F_00595370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x595370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte * pbVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  code * pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int * piVar9;
  uint uVar10;
  
  iVar2 = *(int *)((int)this + 0x148);
  if (iVar2 == 0) {
    return 0;
  }
  iVar3 = *(int *)((int)this + 0xc0);
  bVar6 = false;
  if ((*(byte *)(iVar2 + 0x2b) & 2) == 0) {
    *(int *)((int)this + 0x140) = iVar2;
  }
  else {
    bVar6 = true;
    if ((*(byte *)(iVar2 + 0x2a) & 1) == 0) {
      F_005928f0(this GEN_EDX_FWD,iVar2,0);
      *(undefined1 *)((int)this + 400) = 1;
      pbVar1 = ((byte *)GEN_TOP((*(int *)((int)this + 0x148) + 0x2a)));
      *pbVar1 = *pbVar1 | 0x10;
    }
    else {
      if ((*(char *)((int)this + 0x18e) != '\0') && (*(char *)((int)this + 399) != '\0')) {
        uVar8 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x6c))(this GEN_EDX_ARG,*(undefined4 *)((int)this + 0xd8),0,0);
        return uVar8;
      }
      *(undefined1 *)(iVar2 + 0x2a) = 0;
      F_0058e260(this GEN_EDX_ARG);
    }
  }
  uVar4 = *(undefined4 *)((int)this + 0xd8);
  if (!bVar6) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x88))(this GEN_EDX_ARG,0x21,param_1,param_2,uVar4,1);
    if (iVar3 != *(int *)((int)this + 0xd8)) {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x88))(this GEN_EDX_ARG,0x23,param_1,param_2,uVar4,1);
    }
    if ((*(char *)((int)this + 0x126) != '\0') && (*(char *)((int)this + 0x127) != '\0')) {
      uVar8 = F_005615f0(this GEN_EDX_ARG);
      if (((char)uVar8 == '\0') && (*(char *)(param_2 + 6) == '\0')) {
        uVar7 = 1;
      }
      else {
        uVar7 = 0;
      }
      *(undefined1 *)((int)this + 0x113) = uVar7;
      piVar9 = (int *)F_0057f8d0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x70)
                                  );
      if (((piVar9 != (int *)0x0) &&
          (uVar8 = ((GEN_TCODE *)*(gen_code32 *)(*piVar9 + 0x74))(piVar9 GEN_EDX_ARG), (char)uVar8 != '\0')) ||
         (*((int *)GEN_TOP((*(int *)(REFG(int, 0x1379860) + 0x1c) + 0xc))) != 0)) {
        *(undefined1 *)((int)this + 0x113) = 1;
        uVar8 = F_0057f8d0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x70));
        if (uVar8 != 0) {
          uVar10 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x38))(this GEN_EDX_ARG);
          *(uint *)(uVar8 + 0xa4) = uVar10;
        }
      }
      if (*(char *)((int)this + 0x113) == '\0') {
        *(undefined4 *)((int)this + 0x140) = 0;
      }
    }
    uVar8 = F_005623b0(this GEN_EDX_ARG,uVar4);
    return uVar8;
  }
  pcVar5 = *(gen_code32 *)(*(int *)this + 0x88);
  *(undefined4 *)((int)this + 0x16c) = 0;
  uVar8 = (*pcVar5)(this,0x29,param_1,param_2,uVar4,1);
  return uVar8;
}

/* ref: FUN_00595530 */
GEN_FRAME byte GEN_THISCALL F_00595530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x595530u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = param_1;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined1 *)(gen_frame + 0x8)) = 1;
  bVar1 = F_00592a30(this GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)),param_2,param_3);
  return bVar1;
}

/* ref: FUN_00595560 */
GEN_FRAME uint GEN_THISCALL F_00595560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x595560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0xa4);
  uVar2 = 0;
  if (this_00 != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined1 *)(gen_frame + 0x8)) = 1;
    (*(undefined4 *)(gen_frame + 0x0)) = param_1;
    bVar1 = F_005924f0(this_00 GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00595590 */
GEN_FRAME unsigned int GEN_THISCALL F_00595590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x595590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x8c) != (undefined *)0x0) {
    if (param_1 != 0) {
      F_00584110(*(undefined * PTR32 *)((int)this + 0x8c) GEN_EDX_FWD,param_1);
      F_0042e430((undefined *)((int)this + 0x9c) GEN_EDX_ARG,param_1);
      F_0042e430((undefined *)((int)this + 0xf0) GEN_EDX_ARG,param_1);
      F_00593de0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)(REFG(int, 0x1379860) + 0x18))) GEN_EDX_ARG,(undefined *)((int)this + 0x9c),
                   (int)this + 0xf0,0xffffffff,0,0,1,0);
    }
    iVar1 = *(int *)((int)this + 0x8c);
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x84) =
           *(uint *)(iVar1 + 0x84) ^
           ((uint)(param_1 != 0) << 0x14 ^ *(uint *)(iVar1 + 0x84)) & 0x100000;
      *(uint *)(iVar1 + 0x88) =
           *(uint *)(iVar1 + 0x88) ^ ((uint)(param_1 == 0) << 7 ^ *(uint *)(iVar1 + 0x88)) & 0x80;
    }
  }
  return;
}

/* ref: FUN_00595640 */
GEN_FRAME uint GEN_THISCALL F_00595640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x595640u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  bool bVar2;
  uint uVar3;
  int * this_00;
  undefined4 * puVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar3 = F_0055d920((undefined *)((*(int *)&gen_args[1]) + 4) GEN_EDX_FWD,*(undefined4 *)((*(int *)&gen_args[1]) + 0x90));
  if (uVar3 == 0) {
    this_00 = (int *)0x0;
  }
  else if ((((*(ushort *)(uVar3 + 0x18) < 1000) ||
            (this_00 = *(int * PTR32 *)(uVar3 + 0x8c), this_00 == (int *)0x0)) ||
           ((*(byte *)(this_00 + 0x18) & 1) == 0)) ||
          ((((*(byte *)(this_00 + 0x18) & 4) == 0 || ((char)this_00[7] != '\x01')) ||
           (*(char *)(this_00[3] + 0xf) != '\x0f')))) {
    this_00 = (int *)0x0;
  }
  iVar1 = *(int *)((*(int *)&gen_args[1]) + 0x70);
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x14)) + 0)) = 1;
  (*(undefined2 *)(gen_frame + 0x14)) = CONCAT11((*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x14)) + 1)),1);
  (*(undefined4 *)(gen_frame + 0xc)) = (*(undefined4 *)&gen_args[3]);
  F_005924f0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)),0,0);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) | 0x100000;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) & 0xffffff7f;
  }
  iVar1 = this_00[0x2f];
  bVar2 = 1 < (*(uint *)&gen_args[4]);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x84) =
         *(uint *)(iVar1 + 0x84) ^ ((uint)bVar2 << 0x14 ^ *(uint *)(iVar1 + 0x84)) & 0x100000;
    *(uint *)(iVar1 + 0x88) =
         *(uint *)(iVar1 + 0x88) ^ ((uint)!bVar2 << 7 ^ *(uint *)(iVar1 + 0x88)) & 0x80;
  }
  if (bVar2) {
    F_0057eb30((undefined *)this_00[0x2f] GEN_EDX_ARG,(*(uint *)&gen_args[4]),0,0,0,0);
  }
  iVar1 = REFG(int, 0x1379860);
  (*(undefined2 *)(gen_frame + 0x14)) = 0xffff;
  (*(undefined1 *)(gen_frame + 0x17)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = (*(undefined4 *)&gen_args[5]);
  (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)&gen_args[2]);
  if (((*(uint *)&gen_args[6]) & 0x200) == 0) {
    if (((*(uint *)&gen_args[6]) & 0x100) == 0) {
      (*(undefined1 *)(gen_frame + 0x16)) = 1;
      (*(undefined2 *)(gen_frame + 0x14)) = (short)(*(uint *)&gen_args[4]);
      (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),6);
    }
    else {
      (*(undefined1 *)(gen_frame + 0x16)) = 0xe;
      (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),10);
    }
  }
  else {
    (*(undefined1 *)(gen_frame + 0x16)) = 0x10;
    (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),10);
  }
  puVar4 = &(*(undefined4 *)(gen_frame + 0xc));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0x38))(this_00 GEN_EDX_ARG);
  uVar3 = F_00590ad0((undefined *)(iVar1 + 0xe0) GEN_EDX_ARG,(*(int *)&gen_args[1]),*(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x84),uVar3,
                       puVar4);
  return uVar3;
}

/* ref: FUN_005957c0 */
GEN_FRAME uint GEN_THISCALL F_005957c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5957c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (this != (undefined *)0x0) {
    switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)this + 0x20))) {
    case 0: ;
    case 1: ;
      uVar1 = F_005931d0(*(undefined4 *)((int)this + 8),param_1);
      return uVar1;
    case 2: ;
      uVar1 = F_005931d0(*(undefined4 *)((int)this + 4),param_1);
      return uVar1;
    case 3: ;
      uVar1 = F_005931d0(*(undefined4 *)((int)this + 0xc),param_1);
      return uVar1;
    }
  }
  uVar1 = F_005931d0(0,param_1);
  return uVar1;
}

/* ref: FUN_00595840 */
GEN_FRAME uint GEN_THISCALL F_00595840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x595840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  uint uVar2;
  
  if (this != (undefined *)0x0) {
    cVar1 = *(char *)((int)this + 0x20);
    if (cVar1 == '\x01') {
      uVar2 = F_005931d0(*(undefined4 *)((int)this + 0xc),param_1);
      return uVar2;
    }
    if (cVar1 == '\x02') {
      uVar2 = F_005931d0(*(undefined4 *)((int)this + 8),param_1);
      return uVar2;
    }
    if (cVar1 == '\x03') {
      uVar2 = F_005931d0(*(undefined4 *)((int)this + 0x10),param_1);
      return uVar2;
    }
  }
  uVar2 = F_005931d0(0,param_1);
  return uVar2;
}

/* ref: FUN_005958b0 */
GEN_FRAME uint GEN_THISCALL F_005958b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5958b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (this != (undefined *)0x0) {
    if (*(char *)((int)this + 0x20) == '\x01') {
      uVar1 = F_005931d0(*(undefined4 *)((int)this + 0x10),param_1);
      return uVar1;
    }
    if (*(char *)((int)this + 0x20) == '\x02') {
      uVar1 = F_005931d0(*(undefined4 *)((int)this + 0xc),param_1);
      return uVar1;
    }
  }
  uVar1 = F_005931d0(0,param_1);
  return uVar1;
}

/* ref: FUN_00595900 */
GEN_FRAME uint GEN_THISCALL F_00595900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0x595900u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  int param_7 = (int)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  int param_10 = (int)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  undefined * pvVar1;
  undefined4 uVar2;
  
  if (((param_2 == 0) || (param_3 == 0)) || (param_7 == 0)) {
    return 0;
  }
  if (param_10 == 0) {
    param_10 = REFG(int, 0x108cc50);
  }
  if ((char)param_11 != '\0') {
    pvVar1 = (undefined *)(param_1 + 4);
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x24))))(pvVar1,param_3,param_7);
    F_0056fc60(pvVar1 GEN_EDX_ARG,param_4,param_7,0,param_10);
    F_00593410(param_3,pvVar1);
    return *(uint *)(param_1 + 0xc0);
  }
  pvVar1 = (undefined *)(param_1 + 0x2ac);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x2ac) + 0x24))))(pvVar1,param_3,param_7);
  uVar2 = *(undefined4 *)(param_3 + 0x78);
  *(float *)(param_1 + 0x534) = param_5;
  *(float *)(param_1 + 0x538) = param_6;
  *(undefined4 *)(param_1 + 0x53c) = uVar2;
  F_0058f050(pvVar1 GEN_EDX_ARG,param_2,param_4,param_7,param_9,param_10);
  F_00593410(param_3,pvVar1);
  return *(uint *)(param_1 + 0x4a8);
}

/* ref: FUN_005959f0 */
GEN_FRAME uint GEN_THISCALL F_005959f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5959f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (this == (undefined *)0x0) {
    return 0xffffffff;
  }
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x8c) + 8))) +
                  (uint)*(ushort *)((int)this + 0x90) * 0xc)));
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 8) != 1) {
      F_0058c5d0((undefined *)(iVar1 + 4) GEN_EDX_FWD);
    }
    *(undefined4 *)(iVar1 + 8) = 1;
    uVar2 = *(undefined4 *)(iVar1 + 0xc);
    uVar3 = F_005922a0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x2c) GEN_EDX_ARG,param_1);
    *(uint *)(iVar1 + 0xc) = uVar3;
    F_005881e0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x2c) GEN_EDX_ARG,uVar2);
  }
  return 0;
}

/* ref: FUN_00595a60 */
GEN_FRAME uint GEN_THISCALL F_00595a60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x595a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  undefined * this_00;
  short sVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  undefined * pvVar5;
  char * pcVar6;
  int iVar7;
  undefined1 * puVar8;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  F_00586b50(this GEN_EDX_FWD,param_1,*(undefined4 *)((int)this + 0x834),*(undefined4 *)((int)this + 0x830),
               (int)this + 0x838,(int)this + 0x42c,(int)this + 0x4d4);
  pcVar6 = (char *)*param_1;
  if (*pcVar6 != '\0') {
    iVar7 = (int)this + 0x720;
    F_0042aca0(iVar7 GEN_EDX_ARG);
    this_00 = (undefined *)((int)this + 0x2dc);
    F_0042aca0(this_00 GEN_EDX_ARG);
    piVar2 = *(int * PTR32 *)((int)this + 0x14);
    iVar3 = *piVar2;
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG,iVar7);
    ((code *)*(gen_code32 *)(iVar3 + 0xc))(*(undefined4 *)((int)this + 0x14),param_1,uVar4);
    F_0042e360(this_00 GEN_EDX_ARG,iVar7);
    iVar7 = (int)this + 0x4d4;
    puVar8 = ((undefined1 *)(gen_frame + 0x54));
    pvVar5 = (undefined *)F_0042cd30((undefined *)((int)this + 0x42c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),param_1);
    uVar4 = F_0042cd30(pvVar5 GEN_EDX_ARG,puVar8,iVar7);
    F_0042ccf0((undefined *)((int)this + 0x528) GEN_EDX_ARG,uVar4);
    F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    iVar7 = (int)this + 0x678;
    puVar8 = ((undefined1 *)(gen_frame + 0x0));
    pvVar5 = (undefined *)F_0042cd30((undefined *)((int)this + 0x5d0) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)),this_00);
    uVar4 = F_0042cd30(pvVar5 GEN_EDX_ARG,puVar8,iVar7);
    F_0042ccf0((undefined *)((int)this + 0x6cc) GEN_EDX_ARG,uVar4);
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
    sVar1 = *(short *)((int)this + 0x22);
    uVar4 = F_00a26ce0(*(undefined * PTR32 *)((int)this + 0x18) GEN_EDX_ARG,this_00,0);
    iVar7 = (int)sVar1 + uVar4;
    if ((int)sVar1 == (uint)*(ushort *)((int)this + 0x28)) {
      uVar4 = F_00a26ce0(*(undefined * PTR32 *)((int)this + 0x18) GEN_EDX_ARG,(int)this + 0x624,0);
      iVar7 = iVar7 - uVar4;
    }
    pcVar6 = (char *)F_00593950(this GEN_EDX_ARG,(int)this + 0x528,(int)this + 0x6cc,iVar7,iVar7,iVar7,0);
  }
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac) GEN_EDX_ARG);
  return (uint)pcVar6;
}

/* ref: FUN_00595bf0 */
GEN_FRAME byte GEN_THISCALL F_00595bf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x595bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char * param_2 = (char *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x2b0];
  undefined4 * this_00;
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int * piVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 * this_01;
  
  (*(uint *)(gen_frame + 0x2a8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2ac);
  *(char *)((int)this + 0x20) = param_2[1];
  if (*(short *)((int)this + 0x7c8) != 0) {
    bVar5 = F_00578cc0(this GEN_EDX_FWD,param_1,param_2);
    F_00c47745((*(uint *)(gen_frame + 0x2a8)) ^ (uint)(uint)(gen_frame + 0x2ac) GEN_EDX_ARG);
    return bVar5;
  }
  if (*param_2 != '\0') {
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0x41: ;
      F_00593950(this GEN_EDX_ARG,(int)this + 0x528,(int)this + 0x6cc,(uint)*(ushort *)((int)this + 0x24),0,
                   (uint)*(ushort *)((int)this + 0x24),0);
      F_0042cc20(((undefined1 *)(gen_frame + 0x254)) GEN_EDX_ARG,"",REFG(undefined4, 0x108cc50));
      piVar4 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
      ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x254)));
      this_01 = ((undefined1 *)(gen_frame + 0x254));
      goto LAB_00596438;
    case 0x43: ;
      if (**(char * PTR32 *)((int)this + 0x480) != '\0') {
        F_0042ccf0((undefined *)((int)this + 0x138) GEN_EDX_ARG,(int)this + 0x480);
        ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xe0) + 4))))
                  ((int)this + 0xe0,(int)this + 0x624,(int)this + 0x18c);
      }
      break;
    case 0x56: ;
      if (*(char *)((int)this + 0x848) == '\0') {
        this_00 = (undefined4 *)((int)this + 0x330);
        uVar6 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xe0) + 8))))((int)this + 0xe0);
        F_0042ccf0(this_00 GEN_EDX_ARG,uVar6);
        if ((*(char *)*this_00 == '\0') ||
           (bVar5 = F_0042ac50(this_00 GEN_EDX_ARG,(int)this + 0x18c), bVar5 != 0)) {
          F_00594240(this GEN_EDX_ARG,(int)this + 0x138);
          *(undefined1 *)((int)this + 0x848) = 1;
        }
        else {
          F_0042cc20(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,&REFG(undefined, 0x109fdb4),REFG(undefined4, 0x108cc50));
          F_0042cc20(((undefined1 *)(gen_frame + 0x1ac)) GEN_EDX_ARG,&REFG(undefined, 0x109fdb8),REFG(undefined4, 0x108cc50));
          F_0042d750(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1ac)),((undefined1 *)(gen_frame + 0x200)));
          F_0042c880(((undefined1 *)(gen_frame + 0x1ac)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
          F_00594240(this GEN_EDX_ARG,this_00);
          *(undefined1 *)((int)this + 0x848) = 1;
        }
      }
      break;
    case 0x58: ;
      if (**(char * PTR32 *)((int)this + 0x480) != '\0') {
        F_0042ccf0((undefined *)((int)this + 0x138) GEN_EDX_ARG,(int)this + 0x480);
        ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xe0) + 4))))
                  ((int)this + 0xe0,(int)this + 0x624,(int)this + 0x18c);
        F_00593f50(this GEN_EDX_ARG);
      }
    }
    goto switchD_00595c57_caseD_42;
  }
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 8: ;
    if (**(char * PTR32 *)((int)this + 0x480) == '\0') {
      if (**(char * PTR32 *)((int)this + 0x42c) == '\0') goto switchD_00595c57_caseD_42;
      uVar7 = (uint)*(ushort *)((int)this + 0x22);
      uVar6 = uVar7 - 1;
LAB_00596110: ;
      *(undefined1 *)((int)this + 0x20) = 1;
      F_00593950(this GEN_EDX_ARG,(int)this + 0x528,(int)this + 0x6cc,uVar6,uVar6,uVar7,0);
    }
    goto LAB_00596129;
  case 9: ;
    if ((*(byte *)((int)this + 0x7d8) >> 6 & 1) == 0) goto LAB_00596176;
    F_005940f0(this GEN_EDX_ARG);
  default: ;
    goto switchD_00595c57_caseD_42;
  case 0xd: ;
    if ((*(char *)((int)this + 0x849) != '\0') &&
       (piVar4 = *(int * PTR32 *)((int)this + 0x10), piVar4 != (int *)0x0)) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4 GEN_EDX_ARG);
    }
LAB_00596176: ;
    F_00c47745((*(uint *)(gen_frame + 0x2a8)) ^ (uint)(uint)(gen_frame + 0x2ac) GEN_EDX_ARG);
    return 0;
  case 0x1b: ;
    if ((*(char *)((int)this + 0x849) != '\0') &&
       (piVar4 = *(int * PTR32 *)((int)this + 0x10), piVar4 != (int *)0x0)) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4 GEN_EDX_ARG);
    }
    if (((*(byte *)((int)this + 0x7d9) & 1) == 0) || (**(char * PTR32 *)((int)this + 0x5d0) == '\0'))
    goto LAB_00596176;
    F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,"",REFG(undefined4, 0x108cc50));
    F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,"",REFG(undefined4, 0x108cc50));
    F_00593ee0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x5c)));
    F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    this_01 = ((undefined1 *)(gen_frame + 0x5c));
    break;
  case 0x21: ;
  case 0x26: ;
    if ((*(char *)((int)this + 0x849) != '\0') &&
       (piVar4 = *(int * PTR32 *)((int)this + 0x10), piVar4 != (int *)0x0)) {
      uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 4))(piVar4 GEN_EDX_ARG);
      if ((char)uVar6 != '\0') {
        piVar4 = *(int * PTR32 *)((int)this + 0x10);
        uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x14))(piVar4 GEN_EDX_ARG);
        uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4 GEN_EDX_ARG);
        F_00593ee0(this GEN_EDX_ARG,uVar7,uVar6);
      }
      goto switchD_00595c57_caseD_42;
    }
    if ((*(byte *)((int)this + 0x843) < 2) || (*(ushort *)((int)this + 0xd6) == 0))
    goto switchD_00595c57_caseD_42;
    uVar1 = *(ushort *)((int)this + 0x22);
    uVar8 = (uint)uVar1 - (uint)*(ushort *)((int)this + 0xd6) & 0xffff;
    uVar6 = uVar8;
    uVar7 = uVar8;
    if (param_2[1] == '\0') {
LAB_00596375: ;
      F_00593950(this GEN_EDX_ARG,(int)this + 0x528,(int)this + 0x6cc,uVar8,uVar6,uVar7,0);
    }
    else {
      uVar2 = *(ushort *)((int)this + 0x26);
      uVar3 = *(ushort *)((int)this + 0x28);
      uVar7 = (uint)uVar1;
      if (((uVar2 == uVar3) || (uVar7 = (uint)uVar3, (int)(short)uVar1 == (uint)uVar2)) ||
         (uVar6 = (uint)uVar2, uVar7 = uVar8, (int)(short)uVar1 == (uint)uVar3)) goto LAB_00596375;
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x104)) GEN_EDX_ARG,"",REFG(undefined4, 0x108cc50));
    piVar4 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x104)));
    this_01 = ((undefined1 *)(gen_frame + 0x104));
    break;
  case 0x22: ;
  case 0x28: ;
    if ((*(char *)((int)this + 0x849) != '\0') &&
       (piVar4 = *(int * PTR32 *)((int)this + 0x10), piVar4 != (int *)0x0)) {
      uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 8))(piVar4 GEN_EDX_ARG);
      if ((char)uVar6 != '\0') {
        piVar4 = *(int * PTR32 *)((int)this + 0x10);
        uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x14))(piVar4 GEN_EDX_ARG);
        uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4 GEN_EDX_ARG);
        F_00593ee0(this GEN_EDX_ARG,uVar7,uVar6);
      }
      goto switchD_00595c57_caseD_42;
    }
    if ((*(byte *)((int)this + 0x843) < 2) || (*(ushort *)((int)this + 0xd8) == 0))
    goto switchD_00595c57_caseD_42;
    uVar1 = *(ushort *)((int)this + 0x22);
    uVar8 = (uint)*(ushort *)((int)this + 0xd8) + (uint)uVar1 & 0xffff;
    uVar6 = uVar8;
    uVar7 = uVar8;
    if (param_2[1] == '\0') {
LAB_0059626e: ;
      F_00593950(this GEN_EDX_ARG,(int)this + 0x528,(int)this + 0x6cc,uVar8,uVar6,uVar7,0);
    }
    else {
      uVar2 = *(ushort *)((int)this + 0x26);
      uVar3 = *(ushort *)((int)this + 0x28);
      uVar6 = (uint)uVar1;
      if (((uVar2 == uVar3) ||
          (uVar6 = uVar8, uVar7 = (uint)uVar3, (int)(short)uVar1 == (uint)uVar2)) ||
         (uVar6 = (uint)uVar2, uVar7 = uVar8, (int)(short)uVar1 == (uint)uVar3)) goto LAB_0059626e;
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG,"",REFG(undefined4, 0x108cc50));
    piVar4 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xb0)));
    this_01 = ((undefined1 *)(gen_frame + 0xb0));
    break;
  case 0x23: ;
    uVar1 = *(ushort *)((int)this + 0xdc);
    if (uVar1 == 0) {
      uVar1 = *(ushort *)((int)this + 0x24);
    }
    uVar8 = (uint)uVar1;
    uVar6 = uVar8;
    uVar7 = uVar8;
    if (param_2[1] != '\0') {
      uVar1 = *(ushort *)((int)this + 0x26);
      uVar2 = *(ushort *)((int)this + 0x28);
      if (uVar1 == uVar2) {
        uVar6 = (uint)*(ushort *)((int)this + 0x22);
      }
      else {
        uVar7 = (uint)uVar2;
        if (((int)*(short *)((int)this + 0x22) != (uint)uVar1) &&
           (uVar6 = (uint)uVar1, uVar7 = uVar8, (int)*(short *)((int)this + 0x22) != (uint)uVar2))
        goto LAB_0059609f;
      }
    }
    F_00593950(this GEN_EDX_ARG,(int)this + 0x528,(int)this + 0x6cc,uVar8,uVar6,uVar7,0);
LAB_0059609f: ;
    F_0042cc20(((undefined1 *)(gen_frame + 0x158)) GEN_EDX_ARG,"",REFG(undefined4, 0x108cc50));
    piVar4 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x158)));
    F_0042c880(((undefined1 *)(gen_frame + 0x158)) GEN_EDX_ARG);
    F_00c47745((*(uint *)(gen_frame + 0x2a8)) ^ (uint)(uint)(gen_frame + 0x2ac) GEN_EDX_ARG);
    return 0;
  case 0x24: ;
    uVar6 = (uint)*(ushort *)((int)this + 0xda);
    if (*(ushort *)((int)this + 0xda) == 0) {
      uVar6 = 0;
    }
    uVar7 = uVar6;
    uVar8 = uVar6;
    if (param_2[1] != '\0') {
      uVar1 = *(ushort *)((int)this + 0x26);
      uVar2 = *(ushort *)((int)this + 0x28);
      if (uVar1 == uVar2) {
        uVar8 = (uint)*(ushort *)((int)this + 0x22);
      }
      else {
        uVar8 = (uint)uVar2;
        if (((int)*(short *)((int)this + 0x22) != (uint)uVar1) &&
           (uVar7 = (uint)uVar1, uVar8 = uVar6, (int)*(short *)((int)this + 0x22) != (uint)uVar2))
        goto LAB_00595fef;
      }
    }
    F_00593950(this GEN_EDX_ARG,(int)this + 0x528,(int)this + 0x6cc,uVar6,uVar7,uVar8,0);
LAB_00595fef: ;
    F_0042cc20(((undefined1 *)(gen_frame + 0x254)) GEN_EDX_ARG,"",REFG(undefined4, 0x108cc50));
    piVar4 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x254)));
    F_0042c880(((undefined1 *)(gen_frame + 0x254)) GEN_EDX_ARG);
    F_00c47745((*(uint *)(gen_frame + 0x2a8)) ^ (uint)(uint)(gen_frame + 0x2ac) GEN_EDX_ARG);
    return 0;
  case 0x25: ;
    uVar1 = *(ushort *)((int)this + 0x22);
    uVar6 = (uint)uVar1;
    if ((short)uVar1 < 1) goto switchD_00595c57_caseD_42;
    if (param_2[1] == '\0') {
      uVar7 = uVar6 - 1;
LAB_00595f37: ;
      uVar8 = uVar6 - 1;
LAB_00595f46: ;
      F_00593950(this GEN_EDX_ARG,(int)this + 0x528,(int)this + 0x6cc,uVar6 - 1,uVar7,uVar8,0);
    }
    else {
      uVar7 = (uint)*(ushort *)((int)this + 0x26);
      uVar8 = (uint)*(ushort *)((int)this + 0x28);
      if (*(ushort *)((int)this + 0x26) == *(ushort *)((int)this + 0x28)) {
        uVar7 = uVar6 - 1;
        uVar8 = uVar6;
        goto LAB_00595f46;
      }
      if ((int)(short)uVar1 == uVar7) {
        uVar7 = uVar6 - 1;
        goto LAB_00595f46;
      }
      if ((int)(short)uVar1 == uVar8) goto LAB_00595f37;
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x1ac)) GEN_EDX_ARG,"",REFG(undefined4, 0x108cc50));
    piVar4 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1ac)));
    this_01 = ((undefined1 *)(gen_frame + 0x1ac));
    break;
  case 0x27: ;
    uVar1 = *(ushort *)((int)this + 0x22);
    uVar6 = (uint)uVar1;
    if (*(short *)((int)this + 0x24) <= (short)uVar1) goto switchD_00595c57_caseD_42;
    if (param_2[1] == '\0') {
      uVar7 = uVar6 + 1;
      uVar8 = uVar7;
LAB_00595e95: ;
      F_00593950(this GEN_EDX_ARG,(int)this + 0x528,(int)this + 0x6cc,uVar6 + 1,uVar8,uVar7,0);
    }
    else {
      uVar8 = (uint)*(ushort *)((int)this + 0x26);
      uVar7 = (uint)*(ushort *)((int)this + 0x28);
      if (*(ushort *)((int)this + 0x26) == *(ushort *)((int)this + 0x28)) {
        uVar7 = uVar6 + 1;
        uVar8 = uVar6;
        goto LAB_00595e95;
      }
      if ((int)(short)uVar1 == uVar8) {
        uVar8 = uVar6 + 1;
        goto LAB_00595e95;
      }
      if ((int)(short)uVar1 == uVar7) {
        uVar7 = uVar6 + 1;
        goto LAB_00595e95;
      }
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,"",REFG(undefined4, 0x108cc50));
    piVar4 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x200)));
    this_01 = ((undefined1 *)(gen_frame + 0x200));
    break;
  case 0x2e: ;
    if (**(char * PTR32 *)((int)this + 0x480) == '\0') {
      if (**(char * PTR32 *)((int)this + 0x4d4) == '\0') goto switchD_00595c57_caseD_42;
      uVar6 = (uint)*(ushort *)((int)this + 0x22);
      uVar7 = uVar6 + 1;
      goto LAB_00596110;
    }
LAB_00596129: ;
    F_00593f50(this GEN_EDX_ARG);
    goto switchD_00595c57_caseD_42;
  }
LAB_00596438: ;
  F_0042c880(this_01 GEN_EDX_ARG);
switchD_00595c57_caseD_42: ;
  F_00c47745((*(uint *)(gen_frame + 0x2a8)) ^ (uint)(uint)(gen_frame + 0x2ac) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_005964e0 */
GEN_FRAME uint GEN_THISCALL F_005964e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5964e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00594240(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_005964f0 */
GEN_FRAME uint GEN_THISCALL F_005964f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5964f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  int iVar2;
  undefined * pvVar3;
  uint uVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = **((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 8) + 8)));
  uVar4 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  F_0055dc00(this GEN_EDX_FWD,uVar1,&(*(undefined * PTR32 *)(gen_frame + 0x8)),((code *)REFP(0x55dc50)));
  *(undefined2 *)((int)this + 0x2e) = (*(undefined2 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0));
  F_00404270();
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  F_0055dc00(this GEN_EDX_ARG,uVar1,&(*(undefined * PTR32 *)(gen_frame + 0x8)),((code *)REFP(0x594500)));
  if (*(short *)((int)this + 0x2e) != 0) {
    do {
      iVar2 = *(int *)((int)this + 0x38);
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
      iVar2 = *((int *)GEN_TOP((*(int *)(iVar2 + uVar4 * 4) + 0x14)));
      if (iVar2 != 0) {
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x1;
        F_0055dc00(this GEN_EDX_ARG,*(undefined4 *)(iVar2 + 0x14),&(*(undefined * PTR32 *)(gen_frame + 0x8)),((code *)REFP(0x55dc50)));
        if ((*(uint *)(iVar2 + 0x84) & 0x10000000) == 0) {
          F_0055dc00(this GEN_EDX_ARG,*(undefined4 *)(iVar2 + 0xc),&(*(undefined * PTR32 *)(gen_frame + 0x8)),((code *)REFP(0x55dc50)));
        }
      }
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x38) + uVar4 * 4)));
      *(undefined2 *)(iVar2 + 0x1a) = (*(undefined2 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0));
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)((int)this + 0x2e));
  }
  pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  uVar4 = *(uint *)((int)this + 0x3c);
  iVar2 = *(int *)((int)this + 0x38);
  if ((int)(uVar4 - iVar2) >> 2 != 0) {
    (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0)) = 0;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)((uint)pvVar3 & 0xffffff00);
    uVar4 = F_005d1cc0(iVar2,uVar4,(int)(uVar4 - iVar2) >> 2,(*(undefined * PTR32 *)(gen_frame + 0x8)));
  }
  return uVar4;
}

/* ref: FUN_005965f0 */
GEN_FRAME uint GEN_THISCALL F_005965f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5965f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  float fVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  int * piVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  float10 fVar13;
  float10 fVar14;
  float fVar15;
  
  uVar7 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar7;
  iVar6 = *(int *)((int)this + 0x90);
  if (iVar6 != 0) {
    if (((((*(uint *)((int)this + 0x120) >> 2 & 1) != 0) && (*(int *)(REFG(int, 0x1379860) + 0x1e4) != 0))
        && (iVar10 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(REFG(int, 0x1379860) + 0x1e4) + 0x14))) + 0xdc))), iVar10 != 0))
       && (piVar8 = (int *)(iVar10 + 0x180), piVar8 != (int *)0x0)) {
      *(short *)(REFG(int, 0x1379860) + 0x1ea) = *(short *)(REFG(int, 0x1379860) + 0x1ea) + 1;
      ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 4))(piVar8 GEN_EDX_FWD,0,this,0);
    }
    this_00 = (undefined *)((int)this + 0xb0);
    F_0056c5f0(this_00 GEN_EDX_ARG);
    if (((*(byte *)((int)this + 0xfa) & 8) == 0) && (*(int *)((int)this + 0x100) != 0)) {
      sVar3 = *(short *)((int)this + 0x12e);
      if (sVar3 != 0) {
        ((float *)(gen_frame + 0x0))[2] = 0.0;
        ((float *)(gen_frame + 0x0))[3] = (float)(int)*(short *)((int)this + 0x12a);
      }
      uVar9 = (uint)(sVar3 != 0);
      uVar4 = *(ushort *)((int)this + 0x130);
      uVar7 = (uint)uVar4;
      if (uVar4 != 0) {
        sVar5 = *(short *)((int)this + 300);
        ((float *)(gen_frame + 0x0))[(int)(uVar9 * 2 + 2)] = 1.4013e-45;
        ((float *)(gen_frame + 0x0))[(int)(uVar9 * 2 + 3)] = (float)(int)sVar5;
        uVar9 = uVar9 + 1;
      }
      if (uVar9 != 0) {
        uVar7 = F_00559da0(iVar6 GEN_EDX_ARG,((float)GEN_TOF(((int)*(short *)((int)this + 0x12a) + (int)sVar3))),
                             ((float)GEN_TOF(((int)*(short *)((int)this + 300) + (int)(short)uVar4))));
      }
      ((float *)(gen_frame + 0x0))[1] = *(float *)((int)this + 0x118);
      fVar13 = (float10)*(float *)((int)this + 0x118);
      fVar1 = ((float)GEN_TOF((fVar13 * (float10)*(float *)((int)this + 0x110))));
      ((float *)(gen_frame + 0x0))[0] = fVar1;
      fVar14 = (float10)fVar1;
      bVar11 = GEN_ISNAN(fVar14) || GEN_ISNAN(fVar13);
      bVar12 = bVar11 || fVar14 == fVar13;
      uVar7 = CONCAT22((short)(uVar7 >> 0x10),
                       CONCAT11(bVar12 << 6 | bVar11 << 2 | 2U | !(fVar13 <= fVar14),(char)uVar7));
      if (bVar11 == bVar12) {
        fVar15 = *(float *)(iVar6 + 0x40);
        ((float *)(gen_frame + 0x0))[1] = fVar15;
        if (fVar14 < (float10)fVar15) {
          fVar15 = fVar1;
        }
        ((float *)(gen_frame + 0x0))[1] = fVar15;
        uVar7 = F_00567d00(iVar6 GEN_EDX_ARG,fVar15,fVar15);
        fVar1 = *(float *)((int)this + 0x118);
        ((float *)(gen_frame + 0x0))[(int)(uVar9 * 2 + 2)] = 5.60519e-45;
        ((float *)(gen_frame + 0x0))[(int)(uVar9 * 2 + 3)] = fVar1;
        uVar9 = uVar9 + 1;
      }
      fVar1 = REFG(float, 0x10a0a58);
      iVar10 = uVar9 + 1;
      bVar2 = *(byte *)((int)this + 0x13f);
      ((float *)(gen_frame + 0x0))[1] = gen_bits2f((uint)bVar2);
      ((float *)(gen_frame + 0x0))[(int)(iVar10 * 2)] = 7.00649e-45;
      ((float *)(gen_frame + 0x0))[(int)(iVar10 * 2 + 1)] = (float)((float10)bVar2 / (float10)*(double *)&REFG(undefined, 0x1088100));
      if (iVar10 != 0) {
        *(uint *)(iVar6 + 0x84) = *(uint *)(iVar6 + 0x84) | 0x100000;
        *(uint *)(iVar6 + 0x88) = *(uint *)(iVar6 + 0x88) & 0xffffff7f;
        F_00595110(this_00 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x100),iVar6,((float *)(gen_frame + 0x0)) + 2,iVar10,fVar1);
        uVar7 = F_0058d530(this_00 GEN_EDX_ARG);
      }
    }
    else {
      *(uint *)(iVar6 + 0x84) = *(uint *)(iVar6 + 0x84) | 0x100000;
      *(uint *)(iVar6 + 0x88) = *(uint *)(iVar6 + 0x88) & 0xffffff7f;
      uVar9 = *(uint *)((int)this + 0x90);
      uVar7 = 0;
      if (uVar9 != 0) {
        *(undefined1 *)(uVar9 + 0x53) = *(undefined1 *)((int)this + 0x13f);
        F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
        return uVar9;
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar7;
}

/* ref: FUN_00596830 */
GEN_FRAME uint GEN_THISCALL F_00596830(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x596830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  float fVar6;
  undefined * this_00;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  float10 fVar13;
  float10 fVar14;
  
  uVar7 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar7;
  iVar5 = *(int *)((int)this + 0x90);
  if (iVar5 != 0) {
    if ((*(uint *)((int)this + 0x120) >> 2 & 1) != 0) {
      F_00560600((undefined *)(REFG(int, 0x1379860) + 0x1e4) GEN_EDX_FWD,this);
    }
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = (undefined *)((int)this + 0xb0);
    uVar7 = F_0056c5f0((undefined *)((int)this + 0xb0) GEN_EDX_ARG);
    this_00 = (*(undefined * PTR32 *)(gen_frame + 0x0));
    fVar6 = REFG(float, 0x10a0a58);
    if (((*(byte *)((int)this + 0xfa) & 8) == 0) &&
       (uVar8 = *(uint *)((int)this + 0x104), uVar8 != 0)) {
      sVar2 = *(short *)((int)this + 0x132);
      if (sVar2 != 0) {
        sVar3 = *(short *)((int)this + 0x12a);
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
        ((float *)(gen_frame + 0xc))[0] = (float)((int)sVar3 + (int)sVar2);
      }
      uVar9 = (uint)(sVar2 != 0);
      uVar4 = *(ushort *)((int)this + 0x134);
      uVar7 = (uint)uVar4;
      if (uVar4 != 0) {
        sVar2 = *(short *)((int)this + 300);
        uVar7 = (uint)(short)uVar4;
        (&(*(undefined * PTR32 *)(gen_frame + 0x8)))[uVar9 * 2] = (undefined *)0x1;
        ((float *)(gen_frame + 0xc))[(int)(uVar9 * 2)] = (float)(int)((int)sVar2 + uVar7);
        uVar9 = uVar9 + 1;
      }
      fVar1 = *(float *)((int)this + 0x118);
      (*(float *)(gen_frame + 0x4)) = fVar1;
      fVar13 = (float10)fVar1;
      fVar1 = ((float)GEN_TOF((fVar13 * (float10)*(float *)((int)this + 0x114))));
      (*(float *)(gen_frame + 0x4)) = fVar1;
      fVar14 = (float10)fVar1;
      bVar11 = GEN_ISNAN(fVar14) || GEN_ISNAN(fVar13);
      bVar12 = bVar11 || fVar14 == fVar13;
      uVar7 = CONCAT22((short)(uVar7 >> 0x10),
                       CONCAT11(bVar12 << 6 | bVar11 << 2 | 2U | !(fVar13 <= fVar14),(char)uVar7));
      if (bVar11 == bVar12) {
        (&(*(undefined * PTR32 *)(gen_frame + 0x8)))[uVar9 * 2] = (undefined *)0x4;
        ((float *)(gen_frame + 0xc))[(int)(uVar9 * 2)] = fVar1;
        uVar9 = uVar9 + 1;
      }
      iVar10 = uVar9 + 1;
      (&(*(undefined * PTR32 *)(gen_frame + 0x0)))[iVar10 * 2] = (undefined *)0x5;
      (&(*(float *)(gen_frame + 0x4)))[iVar10 * 2] = 0.0;
      if (iVar10 != 0) {
        if ((*(uint *)((int)this + 0x120) >> 0x13 & 1) != 0) {
          uVar8 = uVar8 >> 4;
        }
        *(uint *)(iVar5 + 0x84) = *(uint *)(iVar5 + 0x84) | 0x100000;
        *(uint *)(iVar5 + 0x88) = *(uint *)(iVar5 + 0x88) & 0xffffff7f;
        F_00595110((*(undefined * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar8,iVar5,&(*(undefined * PTR32 *)(gen_frame + 0x8)),iVar10,fVar6);
        uVar7 = F_0058d530(this_00 GEN_EDX_ARG);
        F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
        return uVar7;
      }
    }
    else {
      *(uint *)(iVar5 + 0x84) = *(uint *)(iVar5 + 0x84) & 0xffefffff;
      *(uint *)(iVar5 + 0x88) = *(uint *)(iVar5 + 0x88) | 0x80;
      if (*(int *)((int)this + 0x90) != 0) {
        *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x90) + 0x53))) = 0;
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar7;
}

/* ref: FUN_005969d0 */
GEN_FRAME unsigned int GEN_THISCALL F_005969d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5969d0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  int iVar2;
  int * piVar3;
  
  if ((*(uint *)&gen_args[1]) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb4)));
    piVar3 = (int *)*piVar1;
    if (piVar3 != piVar1) {
      while (*(byte *)(piVar3[2] + 0x13a) != (*(uint *)&gen_args[1])) {
        piVar3 = (int *)*piVar3;
        if (piVar3 == piVar1) {
          return;
        }
      }
      iVar2 = piVar3[2];
      (*(uint *)&gen_args[1]) = iVar2;
      F_00594ca0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,iVar2);
      F_00587d10((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,iVar2);
      if (piVar3 != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb4)))) {
        *(int *)piVar3[1] = *piVar3;
        *(int *)(*piVar3 + 4) = piVar3[1];
        F_00429760(piVar3,0xc,400);
        *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) - 1;
      }
      F_00587ac0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(uint *)&gen_args[1]));
    }
  }
  return;
}

/* ref: FUN_00596a60 */
GEN_NOFRAME byte GEN_THISCALL F_00596a60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x596a60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * pbVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0xd0);
  if ((iVar2 != 0) && (iVar2 == *(int *)((int)this + 0xcc))) {
    *(undefined4 *)((int)this + 0xcc) = 0;
    F_00594d10(this GEN_EDX_FWD,iVar2,0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xd0) + 0xd4))))(*(int * PTR32 *)((int)this + 0xd0) GEN_EDX_ARG,0);
    if ((*((byte *)GEN_TOP((*(int *)((int)this + 0xd0) + 0xfa))) & 2) != 0) {
      pbVar1 = ((byte *)GEN_TOP((*(int *)((int)this + 0xd0) + 0xf8)));
      *pbVar1 = *pbVar1 | 0x80;
      F_00580230(this GEN_EDX_ARG,*(undefined4 *)((int)this + 0xd0),0);
    }
    return 1;
  }
  return iVar2 == 0;
}

/* ref: FUN_00596ad0 */
GEN_FRAME uint GEN_THISCALL F_00596ad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x596ad0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = 1 << ((byte)param_1 & 0x1f);
  if ((char)param_2 != '\0') {
    *(uint *)((int)this + 0xd4) = *(uint *)((int)this + 0xd4) | uVar1;
    uVar1 = F_00594d90(this GEN_EDX_FWD,0);
    return uVar1;
  }
  *(uint *)((int)this + 0xd4) = *(uint *)((int)this + 0xd4) & ~uVar1;
  uVar1 = F_00594d90(this GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00596b10 */
GEN_FRAME uint GEN_THISCALL F_00596b10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x596b10u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint in_EAX = 0;
  
  iVar1 = (*(int *)&gen_args[1]);
  if ((*(int *)&gen_args[1]) != 0) {
    in_EAX = F_005cd500(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) GEN_EDX_FWD,&(*(int *)(gen_frame + 0x8)),&(*(int *)&gen_args[1]));
    if ((*(int *)(gen_frame + 0x8)) != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))) {
      if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) == iVar1) {
        F_00573dd0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
      }
      F_00588720((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,iVar1);
      if (*(int *)((*(int *)(gen_frame + 0x8)) + 0x10) != 0) {
        F_00406ad0(*(int *)((*(int *)(gen_frame + 0x8)) + 0x10));
        *(undefined4 *)((*(int *)(gen_frame + 0x8)) + 0x10) = 0;
      }
      in_EAX = F_005c8870(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) GEN_EDX_ARG,&(*(int *)&gen_args[1]),(*(int *)(gen_frame + 0x8)));
    }
  }
  return in_EAX;
}

/* ref: FUN_00596b90 */
GEN_FRAME uint GEN_THISCALL F_00596b90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x596b90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  uint in_EAX = 0;
  int * piVar5;
  int * piVar6;
  int * piVar7;
  
  piVar5 = *(int * PTR32 *)((int)this + 8);
  piVar6 = (int *)*piVar5;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  (*(int * PTR32 *)(gen_frame + 0x10)) = piVar5;
  if (piVar6 != piVar5) {
    do {
      (*(int * PTR32 *)(gen_frame + 0x14)) = piVar6;
      piVar7 = piVar6;
      if (*(char *)((int)piVar6 + 0x15) == '\0') {
        piVar7 = (int *)piVar6[2];
        if (*(char *)((int)piVar7 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar7 + 0x15);
          piVar3 = (int *)*piVar7;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x15);
            piVar7 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar6[1] + 0x15);
          piVar4 = (int *)piVar6[1];
          piVar3 = piVar6;
          while ((piVar7 = piVar4, cVar1 == '\0' && (piVar3 == (int *)piVar7[2]))) {
            cVar1 = *(char *)(piVar7[1] + 0x15);
            piVar4 = (int *)piVar7[1];
            piVar3 = piVar7;
          }
        }
      }
      in_EAX = piVar6[4];
      if (*(int *)(in_EAX + 0xc) == param_1) {
        if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x18) == piVar6[3]) {
          F_00573dd0((*(undefined * PTR32 *)(gen_frame + 0x18)) GEN_EDX_FWD);
        }
        if (((char)param_2 != '\0') && (iVar2 = piVar6[3], piVar6 = (*(int * PTR32 *)(gen_frame + 0x14)), iVar2 != 0)) {
          if (*(undefined * PTR32 *)(iVar2 + 0x80) != (undefined *)0x0) {
            F_00583770(*(undefined * PTR32 *)(iVar2 + 0x80) GEN_EDX_ARG,6,0,(*(undefined * PTR32 *)(gen_frame + 0x18)),0);
          }
          if (*(undefined * PTR32 *)(iVar2 + 0x80) != (undefined *)0x0) {
            F_00583770(*(undefined * PTR32 *)(iVar2 + 0x80) GEN_EDX_ARG,7,0,(*(undefined * PTR32 *)(gen_frame + 0x18)),0);
          }
          piVar6 = (*(int * PTR32 *)(gen_frame + 0x14));
          if (*(undefined * PTR32 *)(iVar2 + 0x80) != (undefined *)0x0) {
            F_00583770(*(undefined * PTR32 *)(iVar2 + 0x80) GEN_EDX_ARG,3,0,(*(undefined * PTR32 *)(gen_frame + 0x18)),0);
            piVar6 = (*(int * PTR32 *)(gen_frame + 0x14));
          }
        }
        if (piVar6[4] != 0) {
          F_00406ad0(piVar6[4]);
          piVar6[4] = 0;
        }
        in_EAX = F_005c8870((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 4) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),piVar6);
        piVar5 = (*(int * PTR32 *)(gen_frame + 0x10));
      }
      piVar6 = piVar7;
    } while (piVar7 != piVar5);
  }
  return in_EAX;
}

/* ref: FUN_00596cb0 */
GEN_FRAME uint GEN_THISCALL F_00596cb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x596cb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = param_1;
  if (param_1 == *(uint *)((int)this + 0xd0)) {
    uVar1 = F_00594d90(this GEN_EDX_FWD,param_2);
  }
  return uVar1;
}

/* ref: FUN_00596cd0 */
GEN_FRAME uint GEN_THISCALL F_00596cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x596cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  if (this != param_1) {
    if ((*(uint *)((int)(uintptr_t)this) >> 5 & 1) != 0) {
      F_005a0260(this GEN_EDX_FWD);
    }
    if ((*param_1 & 0xf) != 9) {
      *(uint *)this = *param_1 & 0xf;
      *(uint *)((int)this + 4) = param_1[1];
    }
    if ((*param_1 >> 5 & 1) != 0) {
      F_00594f30(this GEN_EDX_ARG,param_1);
    }
  }
  return (uint)this;
}

/* ref: FUN_00596d20 */
GEN_FRAME uint GEN_THISCALL F_00596d20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x596d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  float fVar1;
  
  fVar1 = REFG(float, 0x10a0a58);
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a1934));
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x24) = 0xffffffff;
  F_00595110(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,fVar1);
  return (uint)this;
}

/* ref: FUN_00596d70 */
GEN_FRAME unsigned int GEN_THISCALL F_00596d70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x596d70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined * this_00;
  uint uVar1;
  
  if (param_4 == 0) {
    this_00 = *(undefined * PTR32 *)((int)this + 0x84);
  }
  else {
    uVar1 = F_0055d920((undefined *)((int)this + 4) GEN_EDX_FWD,param_4);
    if (uVar1 == 0) {
      this_00 = (undefined *)0x0;
    }
    else if ((((*(ushort *)(uVar1 + 0x18) < 1000) ||
              (this_00 = *(undefined * PTR32 *)(uVar1 + 0x8c), this_00 == (undefined *)0x0)) ||
             ((*(byte *)((int)this_00 + 0x60) & 1) == 0)) ||
            ((((*(byte *)((int)this_00 + 0x60) & 4) == 0 ||
              (*(char *)((int)this_00 + 0x1c) != '\x01')) ||
             (*((char *)GEN_TOP((*(int *)((int)this_00 + 0xc) + 0xf))) != '\x0e')))) {
      this_00 = (undefined *)0x0;
    }
  }
  if (this_00 != (undefined *)0x0) {
    if (param_4 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = F_0055d920((undefined *)((int)this + 4) GEN_EDX_ARG,param_4);
    }
    F_005951c0(this_00 GEN_EDX_ARG,param_1,param_2,uVar1);
  }
  return;
}

/* ref: FUN_00596e00 */
GEN_FRAME uint GEN_THISCALL F_00596e00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x596e00u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint * this_00;
  undefined4 * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint * puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint * this_02;
  
  F_00591410((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,0);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x158))) = (*(uint *)&gen_args[7]);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x94))) = (*(uint *)&gen_args[8]);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xac))) = 0;
  (*(undefined1 *)(gen_frame + 0x2b)) = 0;
  (*(uint *)&gen_args[8]) = (*(uint *)&gen_args[8]) & 0xffffff;
  (*(uint *)(gen_frame + 0xc)) = 0;
  if ((*(uint *)&gen_args[7]) != 0) {
    (*(int *)(gen_frame + 0x18)) = (int)(*(uint * PTR32 *)&gen_args[3]) * 4;
    (*(uint * PTR32 *)(gen_frame + 0x1c)) = (*(uint * PTR32 *)&gen_args[3]);
    (*(int *)(gen_frame + 0x14)) = (*(int *)&gen_args[4]) * 4;
    do {
      this_02 = (uint *)0x0;
      uVar3 = F_00404270();
      puVar4 = (uint *)F_00406bd0(0x30,0,uVar3,0);
      if (puVar4 == (uint *)0x0) {
        (*(uint * PTR32 *)&gen_args[3]) = (uint *)0x0;
      }
      else {
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[6] = 0;
        *(undefined1 *)((int)puVar4 + 0x2d) = 0;
        puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x130)));
        (*(uint * PTR32 *)&gen_args[3]) = puVar4;
        if ((&(*(uint * PTR32 *)&gen_args[3]) < puVar1) && (puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 300))), puVar2 <= &(*(uint * PTR32 *)&gen_args[3]))) {
          if (puVar1 == *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x134)))) {
            F_005d2d90(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 300))) GEN_EDX_ARG,1);
          }
          if (*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x130))) != (undefined4 *)0x0) {
            **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x130))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 300))) + ((int)&(*(uint * PTR32 *)&gen_args[3]) - (int)((int)(uintptr_t)puVar2) >> 2) * 4))) ;
          }
        }
        else {
          if (puVar1 == *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x134)))) {
            F_005d2d90(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 300))) GEN_EDX_ARG,1);
          }
          if (*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x130))) != (undefined4 *)0x0) {
            **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x130))) = puVar4;
          }
        }
        *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x130))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x130))) + 4;
        this_02 = puVar4;
      }
      (*(uint *)(gen_frame + 0x10)) = 0;
      if ((*(uint *)&gen_args[5]) != 0) {
        (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x18));
        do {
          iVar5 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x20)) + *(int *)((*(int *)&gen_args[1]) + 0x20))));
          puVar1 = (undefined4 *)this_02[1];
          (*(int *)&gen_args[4]) = iVar5;
          if ((&(*(int *)&gen_args[4]) < puVar1) && (puVar2 = (undefined4 *)*this_02, puVar2 <= &(*(int *)&gen_args[4]))) {
            if (puVar1 == (undefined4 *)this_02[2]) {
              iVar5 = (int)puVar1 - (int)((int)(uintptr_t)puVar2) >> 2;
              if (iVar5 == -1) goto LAB_0059717b;
              uVar6 = iVar5 + 1;
              uVar3 = (int)this_02[2] - (int)((int)(uintptr_t)puVar2) >> 2;
              if (uVar3 < uVar6) {
                if (-(uVar3 >> 1) - 1 < uVar3) {
                  uVar3 = 0;
                }
                else {
                  uVar3 = uVar3 + (uVar3 >> 1);
                }
                if (uVar3 < uVar6) {
                  uVar3 = uVar6;
                }
                F_005d1820(this_02 GEN_EDX_ARG,uVar3);
              }
            }
            if ((undefined4 *)this_02[1] != (undefined4 *)0x0) {
              *(undefined4 *)this_02[1] = *((undefined4 *)GEN_TOP((*this_02 + ((int)&(*(int *)&gen_args[4]) - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
            }
          }
          else {
            if (puVar1 == (undefined4 *)this_02[2]) {
              iVar7 = (int)((int)puVar1 - *this_02) >> 2;
              if (iVar7 == -1) goto LAB_0059717b;
              uVar6 = iVar7 + 1;
              uVar3 = (int)((int)this_02[2] - *this_02) >> 2;
              if (uVar3 < uVar6) {
                if (-(uVar3 >> 1) - 1 < uVar3) {
                  uVar3 = 0;
                }
                else {
                  uVar3 = uVar3 + (uVar3 >> 1);
                }
                if (uVar3 < uVar6) {
                  uVar3 = uVar6;
                }
                F_005d1820(this_02 GEN_EDX_ARG,uVar3);
              }
            }
            if ((int *)this_02[1] != (int *)0x0) {
              *(int *)this_02[1] = iVar5;
            }
          }
          this_02[1] = this_02[1] + 4;
          (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 4;
          (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) + 1;
        } while ((*(uint *)(gen_frame + 0x10)) < (*(uint *)&gen_args[5]));
      }
      (*(uint *)(gen_frame + 0x10)) = 0;
      puVar4 = this_02;
      if ((*(uint *)&gen_args[6]) != 0) {
        this_00 = this_02 + 4;
        (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x14));
        do {
          iVar5 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x20)) + *(int *)((*(int *)&gen_args[2]) + 0x20))));
          puVar1 = (undefined4 *)this_02[5];
          (*(int *)&gen_args[4]) = iVar5;
          if ((&(*(int *)&gen_args[4]) < puVar1) && (puVar2 = (undefined4 *)*this_00, puVar2 <= &(*(int *)&gen_args[4]))) {
            if (puVar1 == (undefined4 *)this_02[6]) {
              iVar5 = (int)puVar1 - (int)((int)(uintptr_t)puVar2) >> 2;
              if (iVar5 == -1) goto LAB_0059717b;
              uVar6 = iVar5 + 1;
              uVar3 = (int)this_02[6] - (int)((int)(uintptr_t)puVar2) >> 2;
              if (uVar3 < uVar6) {
                if (-(uVar3 >> 1) - 1 < uVar3) {
                  uVar3 = 0;
                }
                else {
                  uVar3 = uVar3 + (uVar3 >> 1);
                }
                if (uVar3 < uVar6) {
                  uVar3 = uVar6;
                }
                F_005d18d0(this_00 GEN_EDX_ARG,uVar3);
                puVar4 = (*(uint * PTR32 *)&gen_args[3]);
              }
            }
            if ((undefined4 *)this_02[5] != (undefined4 *)0x0) {
              *(undefined4 *)this_02[5] = *((undefined4 *)GEN_TOP((*this_00 + ((int)&(*(int *)&gen_args[4]) - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
            }
          }
          else {
            if (puVar1 == (undefined4 *)this_02[6]) {
              iVar7 = (int)((int)puVar1 - *this_00) >> 2;
              if (iVar7 == -1) {
LAB_0059717b: ;
                    
                F_00c4579a("vector<T> too long");
              }
              uVar6 = iVar7 + 1;
              uVar3 = (int)((int)this_02[6] - *this_00) >> 2;
              if (uVar3 < uVar6) {
                if (-(uVar3 >> 1) - 1 < uVar3) {
                  uVar3 = 0;
                }
                else {
                  uVar3 = uVar3 + (uVar3 >> 1);
                }
                if (uVar3 < uVar6) {
                  uVar3 = uVar6;
                }
                F_005d18d0(this_00 GEN_EDX_ARG,uVar3);
                puVar4 = (*(uint * PTR32 *)&gen_args[3]);
              }
            }
            if ((int *)this_02[5] != (int *)0x0) {
              *(int *)this_02[5] = iVar5;
            }
          }
          this_02[5] = this_02[5] + 4;
          (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 4;
          (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) + 1;
        } while ((*(uint *)(gen_frame + 0x10)) < (*(uint *)&gen_args[6]));
      }
      F_0056d9f0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,puVar4,(*(uint *)(gen_frame + 0xc)), *((undefined4 *)GEN_TOP((*(int *)((*(int *)&gen_args[1]) + 0x20) + (int)((int)(uintptr_t)(*(uint * PTR32 *)(gen_frame + 0x1c))) * 4))),&(*(undefined1 *)(gen_frame + 0x2b)), (int)&(*(uint *)&gen_args[8]) + 3);
      (*(uint * PTR32 *)(gen_frame + 0x1c)) = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x1c)) + (*(uint *)&gen_args[5]));
      (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + (*(uint *)&gen_args[5]) * 4;
      (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + (*(uint *)&gen_args[6]) * 4;
      (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
    } while ((*(uint *)(gen_frame + 0xc)) < (*(uint *)&gen_args[7]));
  }
  F_0057c0b0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x150,(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x15c);
  F_0058e100(((undefined *)(uint)((*(undefined * PTR32 *)&gen_args[0]))) GEN_EDX_ARG);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x80))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x11d))) = 1;
  return uVar3;
}

/* ref: FUN_00597190 */
GEN_FRAME uint GEN_THISCALL F_00597190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x597190u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint * PTR32 * ppuVar1;
  uint * PTR32 * ppuVar2;
  uint * puVar3;
  uint uVar4;
  uint * puVar5;
  int iVar6;
  uint uVar7;
  uint * puVar8;
  byte * pbVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  uint * puVar13;
  uint * this_01;
  
  F_00591410((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,0);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x158))) = (*(uint *)&gen_args[7]);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x94))) = (*(uint *)&gen_args[8]);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xac))) = 0;
  (*(undefined1 *)(gen_frame + 0x1b)) = 0;
  (*(uint *)&gen_args[8]) = (*(uint *)&gen_args[8]) & 0xffffff;
  (*(uint *)(gen_frame + 0x8)) = 0;
  if ((*(uint *)&gen_args[7]) != 0) {
    do {
      this_01 = (uint *)0x0;
      uVar4 = F_00404270();
      puVar5 = (uint *)F_00406bd0(0x30,0,uVar4,0);
      if (puVar5 == (uint *)0x0) {
        (*(uint * PTR32 *)(gen_frame + 0x14)) = (uint *)0x0;
      }
      else {
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[4] = 0;
        puVar5[5] = 0;
        puVar5[6] = 0;
        *(undefined1 *)((int)puVar5 + 0x2d) = 0;
        ppuVar1 = *((uint * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x130)));
        (*(uint * PTR32 *)(gen_frame + 0x14)) = puVar5;
        if ((&(*(uint * PTR32 *)(gen_frame + 0x14)) < ppuVar1) && (ppuVar2 = *((uint * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 300))), ppuVar2 <= &(*(uint * PTR32 *)(gen_frame + 0x14)))) {
          if (ppuVar1 == *((uint * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x134)))) {
            F_005d2d90(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 300))) GEN_EDX_ARG,1);
          }
          if (*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x130))) != (undefined4 *)0x0) {
            **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x130))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 300))) + ((int)&(*(uint * PTR32 *)(gen_frame + 0x14)) - (int)((int)(uintptr_t)ppuVar2) >> 2) * 4)));
          }
        }
        else {
          if (ppuVar1 == *((uint * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x134)))) {
            F_005d2d90(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 300))) GEN_EDX_ARG,1);
          }
          if (*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x130))) != (undefined4 *)0x0) {
            **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x130))) = puVar5;
          }
        }
        *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x130))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x130))) + 4;
        this_01 = puVar5;
      }
      iVar12 = (*(uint *)(gen_frame + 0x8)) * (*(uint *)&gen_args[5]) + (*(int *)&gen_args[3]);
      (*(uint *)(gen_frame + 0xc)) = 0;
      if ((*(uint *)&gen_args[5]) != 0) {
        puVar5 = (uint *)((*(int *)&gen_args[2]) + iVar12 * 8);
        do {
          if ((*puVar5 & 0xf) == 4) {
            puVar8 = (uint *)this_01[1];
            (*(uint *)(gen_frame + 0x10)) = puVar5[1];
            if ((&(*(uint *)(gen_frame + 0x10)) < puVar8) && (puVar13 = (uint *)*this_01, puVar13 <= &(*(uint *)(gen_frame + 0x10)))) {
LAB_005972de: ;
              if (puVar8 == (uint *)this_01[2]) {
                iVar6 = (int)puVar8 - (int)((int)(uintptr_t)puVar13) >> 2;
                if (iVar6 == -1) goto LAB_0059753b;
                uVar7 = iVar6 + 1;
                uVar4 = (int)this_01[2] - (int)((int)(uintptr_t)puVar13) >> 2;
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
                  F_005d1820(this_01 GEN_EDX_ARG,uVar4);
                }
              }
              if ((undefined4 *)this_01[1] != (undefined4 *)0x0) {
                *(undefined4 *)this_01[1] = *((undefined4 *)GEN_TOP((*this_01 + ((int)&(*(uint *)(gen_frame + 0x10)) - (int)((int)(uintptr_t)puVar13) >> 2) * 4)));
              }
            }
            else {
LAB_0059735b: ;
              uVar4 = (*(uint *)(gen_frame + 0x10));
              if (puVar8 == (uint *)this_01[2]) {
                iVar6 = (int)((int)puVar8 - *this_01) >> 2;
                if (iVar6 == -1) goto LAB_0059753b;
                uVar10 = iVar6 + 1;
                uVar7 = (int)((int)this_01[2] - *this_01) >> 2;
                if (uVar7 < uVar10) {
                  if (-(uVar7 >> 1) - 1 < uVar7) {
                    uVar7 = 0;
                  }
                  else {
                    uVar7 = uVar7 + (uVar7 >> 1);
                  }
                  if (uVar7 < uVar10) {
                    uVar7 = uVar10;
                  }
                  F_005d1820(this_01 GEN_EDX_ARG,uVar7);
                }
              }
              if ((uint *)this_01[1] != (uint *)0x0) {
                *(uint *)this_01[1] = uVar4;
              }
            }
            this_01[1] = this_01[1] + 4;
          }
          else if ((*puVar5 & 0xf) == 3) {
            puVar8 = (uint *)this_01[1];
            (*(uint *)(gen_frame + 0x10)) = puVar5[1];
            if ((puVar8 <= &(*(uint *)(gen_frame + 0x10))) || (puVar13 = (uint *)*this_01, &(*(uint *)(gen_frame + 0x10)) < puVar13)) goto LAB_0059735b;
            goto LAB_005972de;
          }
          (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
          puVar5 = puVar5 + 2;
        } while ((*(uint *)(gen_frame + 0xc)) < (*(uint *)&gen_args[5]));
      }
      (*(uint *)(gen_frame + 0x4)) = 0;
      puVar5 = this_01;
      if ((*(uint *)&gen_args[6]) != 0) {
        pbVar9 = ((byte *)GEN_TOP(((*(int *)&gen_args[2]) + ((*(uint *)(gen_frame + 0x8)) * (*(uint *)&gen_args[6]) + (*(int *)&gen_args[4])) * 8)));
        puVar8 = this_01 + 4;
        do {
          if ((*pbVar9 & 0xf) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(uint *)(pbVar9 + 4);
          }
          puVar13 = (uint *)this_01[5];
          (*(uint *)(gen_frame + 0x10)) = uVar4;
          if ((&(*(uint *)(gen_frame + 0x10)) < puVar13) && (puVar3 = (uint *)*puVar8, puVar3 <= &(*(uint *)(gen_frame + 0x10)))) {
            if (puVar13 == (uint *)this_01[6]) {
              iVar6 = (int)puVar13 - (int)((int)(uintptr_t)puVar3) >> 2;
              if (iVar6 == -1) goto LAB_0059753b;
              uVar7 = iVar6 + 1;
              uVar4 = (int)this_01[6] - (int)((int)(uintptr_t)puVar3) >> 2;
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
                F_005d18d0(puVar8 GEN_EDX_ARG,uVar4);
                puVar5 = (*(uint * PTR32 *)(gen_frame + 0x14));
              }
            }
            if ((undefined4 *)this_01[5] != (undefined4 *)0x0) {
              *(undefined4 *)this_01[5] = *((undefined4 *)GEN_TOP((*puVar8 + ((int)&(*(uint *)(gen_frame + 0x10)) - (int)((int)(uintptr_t)puVar3) >> 2) * 4)));
            }
          }
          else {
            if (puVar13 == (uint *)this_01[6]) {
              iVar6 = (int)((int)puVar13 - *puVar8) >> 2;
              if (iVar6 == -1) {
LAB_0059753b: ;
                    
                F_00c4579a("vector<T> too long");
              }
              uVar10 = iVar6 + 1;
              uVar7 = (int)((int)this_01[6] - *puVar8) >> 2;
              if (uVar7 < uVar10) {
                if (-(uVar7 >> 1) - 1 < uVar7) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = uVar7 + (uVar7 >> 1);
                }
                if (uVar7 < uVar10) {
                  uVar7 = uVar10;
                }
                F_005d18d0(puVar8 GEN_EDX_ARG,uVar7);
                puVar5 = (*(uint * PTR32 *)(gen_frame + 0x14));
              }
            }
            if ((uint *)this_01[5] != (uint *)0x0) {
              *(uint *)this_01[5] = uVar4;
            }
          }
          this_01[5] = this_01[5] + 4;
          pbVar9 = pbVar9 + 8;
          (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
        } while ((*(uint *)(gen_frame + 0x4)) < (*(uint *)&gen_args[6]));
      }
      uVar4 = *(uint *)((*(int *)&gen_args[2]) + iVar12 * 8) & 0xf;
      if ((uVar4 == 4) || (uVar11 = 0, uVar4 != 0)) {
        uVar11 = *(undefined4 *)((*(int *)&gen_args[2]) + 4 + iVar12 * 8);
      }
      F_0056d9f0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,puVar5,(*(uint *)(gen_frame + 0x8)),uVar11,&(*(undefined1 *)(gen_frame + 0x1b)),(int)&(*(uint *)&gen_args[8]) + 3);
      (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
    } while ((*(uint *)(gen_frame + 0x8)) < (*(uint *)&gen_args[7]));
  }
  F_0057c0b0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x150,(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x15c);
  F_0058e100(((undefined *)(uint)((*(undefined * PTR32 *)&gen_args[0]))) GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x80))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x11d))) = 1;
  return uVar4;
}

/* ref: FUN_00597550 */
GEN_NOFRAME uint GEN_THISCALL F_00597550(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x597550u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00596b10((undefined *)(REFG(int, 0x1379860) + 0xe0) GEN_EDX_FWD,*(undefined4 *)((int)this + 0x68));
  return uVar1;
}

/* ref: FUN_00597570 */
GEN_NOFRAME uint GEN_THISCALL F_00597570(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x597570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = REFG(int, 0x1379860);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x84) + 0x14))))((int)this + 0x84);
  uVar2 = F_00596b10((undefined *)(iVar1 + 0xe0) GEN_EDX_ARG,uVar2);
  return uVar2;
}

/* ref: FUN_005975a0 */
GEN_FRAME uint GEN_THISCALL F_005975a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5975a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00594240(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)(REFG(int, 0x1379860) + 0x18))) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentJournalCanvas::vf4 */
GEN_FRAME uint GEN_THISCALL F_005975c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5975c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  char cVar2;
  int iVar3;
  undefined * pvVar4;
  undefined * pAVar5;
  int * piVar6;
  uint uVar7;
  uint uVar8;
  int * piVar9;
  int * piVar10;
  int * PTR32 * ppiVar11;
  undefined * pvVar12;
  int * piVar13;
  undefined1 * puVar14;
  int iVar15;
  
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = this + 0x164;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)(REFG(int, 0x1379860) + 0xe0);
  (*(uint *)(gen_frame + 0x1c)) = 5;
  do {
    piVar6 = *(int * PTR32 *)(*(undefined * PTR32 *)(gen_frame + 0x20));
    if (piVar6 != (int *)0x0) {
      piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x38))(piVar6 GEN_EDX_FWD)));
      pvVar12 = (*(undefined * PTR32 *)(gen_frame + 0x28));
      (*(int * PTR32 *)(gen_frame + 0x18)) = piVar6;
      if ((piVar6 != (int *)0x0) &&
         (F_005cd500((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 4) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x14)),&(*(int * PTR32 *)(gen_frame + 0x18))), piVar13 = (*(int * PTR32 *)(gen_frame + 0x14)),
         (*(int * PTR32 *)(gen_frame + 0x14)) != *(int * PTR32 *)((int)pvVar12 + 8))) {
        if (*(int * PTR32 *)((int)pvVar12 + 0x18) == piVar6) {
          F_00573dd0(pvVar12 GEN_EDX_ARG);
        }
        if ((undefined *)piVar6[0x20] != (undefined *)0x0) {
          F_00583770((undefined *)piVar6[0x20] GEN_EDX_ARG,6,0,pvVar12,0);
        }
        if ((undefined *)piVar6[0x20] != (undefined *)0x0) {
          F_00583770((undefined *)piVar6[0x20] GEN_EDX_ARG,7,0,pvVar12,0);
        }
        if ((undefined *)piVar6[0x20] != (undefined *)0x0) {
          F_00583770((undefined *)piVar6[0x20] GEN_EDX_ARG,3,0,pvVar12,0);
        }
        if (piVar13[4] != 0) {
          F_00406ad0(piVar13[4]);
          piVar13[4] = 0;
        }
        F_005c8870((undefined *)((int)pvVar12 + 4) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x10)),piVar13);
      }
    }
    (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*(undefined * PTR32 *)(gen_frame + 0x20)) + 4;
    iVar1 = (*(uint *)(gen_frame + 0x1c)) - 1;
    (*(uint *)(gen_frame + 0x1c)) = iVar1;
  } while (iVar1 != 0);
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x178;
  (*(uint *)(gen_frame + 0x1c)) = 5;
  do {
    iVar1 = *(int *)(*(undefined * PTR32 *)(gen_frame + 0x20));
    if (iVar1 != 0) {
      iVar3 = *(int *)(iVar1 + 0x90);
      if (((*(byte *)(iVar1 + 0x60) & 1) == 0) || (iVar3 == 0)) {
LAB_00597762: ;
        piVar6 = (int *)0x0;
      }
      else {
        iVar1 = *(int *)(iVar1 + 0xc);
        iVar15 = 0;
        if ((iVar1 != 0) && ((uVar8 = *(uint *)(iVar1 + 4), uVar8 != 0 && (uVar7 = 0, uVar8 != 0))))
        {
          piVar6 = *(int * PTR32 *)(iVar1 + 8);
          (*(int * PTR32 *)(gen_frame + 0x14)) = piVar6;
          piVar13 = piVar6;
          do {
            if (*(int *)(*piVar13 + 4) == iVar3) {
              iVar15 = piVar6[uVar7];
              break;
            }
            uVar7 = uVar7 + 1;
            piVar13 = piVar13 + 1;
          } while (uVar7 < uVar8);
        }
        if (iVar15 == 0) goto LAB_00597762;
        if (((((*(ushort *)(iVar15 + 0x18) < 1000) ||
              (piVar6 = *(int * PTR32 *)(iVar15 + 0x8c), piVar6 == (int *)0x0)) ||
             ((*(byte *)(piVar6 + 0x18) & 1) == 0)) ||
            (((*(byte *)(piVar6 + 0x18) & 4) == 0 || ((char)piVar6[7] != '\x01')))) ||
           (*(char *)(piVar6[3] + 0xf) != '\x0f')) {
          piVar6 = (int *)0x0;
        }
      }
      uVar8 = ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x38))(piVar6 GEN_EDX_ARG);
      if (uVar8 != 0) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 8))[1]));
        pvVar12 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 4);
        cVar2 = *(char *)((int)piVar6 + 0x15);
        piVar13 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 8);
        while (cVar2 == '\0') {
          if ((uint)piVar6[3] < uVar8) {
            piVar10 = (int *)piVar6[2];
            piVar6 = piVar13;
          }
          else {
            piVar10 = (int *)*piVar6;
          }
          piVar13 = piVar6;
          piVar6 = piVar10;
          cVar2 = *(char *)((int)piVar10 + 0x15);
        }
        piVar6 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 8);
        (*(int * PTR32 *)(gen_frame + 0x14)) = piVar13;
        if ((piVar13 == piVar6) || (uVar8 < (uint)piVar13[3])) {
          (*(int * PTR32 *)(gen_frame + 0x18)) = piVar6;
          ppiVar11 = &(*(int * PTR32 *)(gen_frame + 0x18));
        }
        else {
          ppiVar11 = &(*(int * PTR32 *)(gen_frame + 0x14));
        }
        piVar6 = *ppiVar11;
        if (piVar6 != *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 8)) {
          if (*(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x18) == uVar8) {
            F_00573dd0((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG);
          }
          if (*(undefined * PTR32 *)(uVar8 + 0x80) != (undefined *)0x0) {
            F_00583770(*(undefined * PTR32 *)(uVar8 + 0x80) GEN_EDX_ARG,6,0,(*(undefined * PTR32 *)(gen_frame + 0x28)),0);
          }
          if (*(undefined * PTR32 *)(uVar8 + 0x80) != (undefined *)0x0) {
            F_00583770(*(undefined * PTR32 *)(uVar8 + 0x80) GEN_EDX_ARG,7,0,(*(undefined * PTR32 *)(gen_frame + 0x28)),0);
          }
          if (*(undefined * PTR32 *)(uVar8 + 0x80) != (undefined *)0x0) {
            F_00583770(*(undefined * PTR32 *)(uVar8 + 0x80) GEN_EDX_ARG,3,0,(*(undefined * PTR32 *)(gen_frame + 0x28)),0);
          }
          if (piVar6[4] != 0) {
            F_00406ad0(piVar6[4]);
            piVar6[4] = 0;
          }
          F_005c8870(pvVar12 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x10)),piVar6);
        }
      }
    }
    (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*(undefined * PTR32 *)(gen_frame + 0x20)) + 4;
    iVar1 = (*(uint *)(gen_frame + 0x1c)) - 1;
    (*(uint *)(gen_frame + 0x1c)) = iVar1;
  } while (iVar1 != 0);
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x18c;
  (*(uint *)(gen_frame + 0x1c)) = 5;
  do {
    iVar1 = *(int *)(*(undefined * PTR32 *)(gen_frame + 0x20));
    if (iVar1 != 0) {
      iVar3 = *(int *)(iVar1 + 0x90);
      if (((*(byte *)(iVar1 + 0x60) & 1) == 0) || (iVar3 == 0)) {
LAB_005978f2: ;
        piVar6 = (int *)0x0;
      }
      else {
        iVar1 = *(int *)(iVar1 + 0xc);
        iVar15 = 0;
        if ((iVar1 != 0) && ((uVar8 = *(uint *)(iVar1 + 4), uVar8 != 0 && (uVar7 = 0, uVar8 != 0))))
        {
          piVar6 = *(int * PTR32 *)(iVar1 + 8);
          (*(int * PTR32 *)(gen_frame + 0x14)) = piVar6;
          piVar13 = piVar6;
          do {
            if (*(int *)(*piVar13 + 4) == iVar3) {
              iVar15 = piVar6[uVar7];
              break;
            }
            uVar7 = uVar7 + 1;
            piVar13 = piVar13 + 1;
          } while (uVar7 < uVar8);
        }
        if (iVar15 == 0) goto LAB_005978f2;
        if ((((*(ushort *)(iVar15 + 0x18) < 1000) ||
             (piVar6 = *(int * PTR32 *)(iVar15 + 0x8c), piVar6 == (int *)0x0)) ||
            ((*(byte *)(piVar6 + 0x18) & 1) == 0)) ||
           ((((*(byte *)(piVar6 + 0x18) & 4) == 0 || ((char)piVar6[7] != '\x01')) ||
            (*(char *)(piVar6[3] + 0xf) != '\x0f')))) {
          piVar6 = (int *)0x0;
        }
      }
      uVar8 = ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x38))(piVar6 GEN_EDX_ARG);
      if (uVar8 != 0) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 8))[1]));
        pvVar12 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 4);
        cVar2 = *(char *)((int)piVar6 + 0x15);
        piVar13 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 8);
        while (cVar2 == '\0') {
          if ((uint)piVar6[3] < uVar8) {
            piVar10 = (int *)piVar6[2];
            piVar6 = piVar13;
          }
          else {
            piVar10 = (int *)*piVar6;
          }
          piVar13 = piVar6;
          piVar6 = piVar10;
          cVar2 = *(char *)((int)piVar10 + 0x15);
        }
        piVar6 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 8);
        (*(int * PTR32 *)(gen_frame + 0x14)) = piVar13;
        if ((piVar13 == piVar6) || (uVar8 < (uint)piVar13[3])) {
          (*(int * PTR32 *)(gen_frame + 0x18)) = piVar6;
          ppiVar11 = &(*(int * PTR32 *)(gen_frame + 0x18));
        }
        else {
          ppiVar11 = &(*(int * PTR32 *)(gen_frame + 0x14));
        }
        piVar6 = *ppiVar11;
        if (piVar6 != *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 8)) {
          if (*(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x18) == uVar8) {
            F_00573dd0((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG);
          }
          if (*(undefined * PTR32 *)(uVar8 + 0x80) != (undefined *)0x0) {
            F_00583770(*(undefined * PTR32 *)(uVar8 + 0x80) GEN_EDX_ARG,6,0,(*(undefined * PTR32 *)(gen_frame + 0x28)),0);
          }
          if (*(undefined * PTR32 *)(uVar8 + 0x80) != (undefined *)0x0) {
            F_00583770(*(undefined * PTR32 *)(uVar8 + 0x80) GEN_EDX_ARG,7,0,(*(undefined * PTR32 *)(gen_frame + 0x28)),0);
          }
          if (*(undefined * PTR32 *)(uVar8 + 0x80) != (undefined *)0x0) {
            F_00583770(*(undefined * PTR32 *)(uVar8 + 0x80) GEN_EDX_ARG,3,0,(*(undefined * PTR32 *)(gen_frame + 0x28)),0);
          }
          if (piVar6[4] != 0) {
            F_00406ad0(piVar6[4]);
            piVar6[4] = 0;
          }
          F_005c8870(pvVar12 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x10)),piVar6);
        }
      }
    }
    (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*(undefined * PTR32 *)(gen_frame + 0x20)) + 4;
    iVar1 = (*(uint *)(gen_frame + 0x1c)) - 1;
    (*(uint *)(gen_frame + 0x1c)) = iVar1;
  } while (iVar1 != 0);
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x1b4;
  (*(uint *)(gen_frame + 0x1c)) = 3;
  do {
    piVar6 = *(int * PTR32 *)(*(undefined * PTR32 *)(gen_frame + 0x20));
    if (piVar6 != (int *)0x0) {
      piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x38))(piVar6 GEN_EDX_ARG)));
      (*(int * PTR32 *)(gen_frame + 0x10)) = piVar6;
      if (piVar6 != (int *)0x0) {
        piVar13 = ((int *)GEN_TOP((*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 8))[1]));
        cVar2 = *(char *)((int)piVar13 + 0x15);
        piVar10 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 8);
        while (cVar2 == '\0') {
          if ((int *)piVar13[3] < piVar6) {
            piVar9 = (int *)piVar13[2];
            piVar13 = piVar10;
          }
          else {
            piVar9 = (int *)*piVar13;
          }
          piVar10 = piVar13;
          piVar13 = piVar9;
          cVar2 = *(char *)((int)piVar9 + 0x15);
        }
        piVar13 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 8);
        (*(int * PTR32 *)(gen_frame + 0x14)) = piVar10;
        if ((piVar10 == piVar13) || (piVar6 < (int *)piVar10[3])) {
          (*(int * PTR32 *)(gen_frame + 0x18)) = piVar13;
          ppiVar11 = &(*(int * PTR32 *)(gen_frame + 0x18));
        }
        else {
          ppiVar11 = &(*(int * PTR32 *)(gen_frame + 0x14));
        }
        piVar13 = *ppiVar11;
        (*(int * PTR32 *)(gen_frame + 0x14)) = piVar13;
        if (piVar13 != *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 8)) {
          if (*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x18) == piVar6) {
            uVar8 = 0;
            piVar6 = (int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1c);
            puVar14 = (undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x50);
            pvVar12 = (*(undefined * PTR32 *)(gen_frame + 0x28));
            do {
              if ((-1 < (int)uVar8) && (uVar8 < 4)) {
                *puVar14 = 0;
                piVar13 = (int *)*piVar6;
                if (piVar13 != (int *)0x0) {
                  ((GEN_TCODE *)*(gen_code32 *)(*piVar13 + 8))(piVar13 GEN_EDX_ARG);
                  *piVar6 = 0;
                  pvVar12 = (*(undefined * PTR32 *)(gen_frame + 0x28));
                }
              }
              uVar8 = uVar8 + 1;
              puVar14 = puVar14 + 0x28;
              piVar6 = piVar6 + 1;
            } while ((int)uVar8 < 4);
            *(undefined4 *)((int)pvVar12 + 0x18) = 0;
            *(undefined4 *)((int)pvVar12 + 0xd0) = 0;
          }
          pvVar12 = (*(undefined * PTR32 *)(gen_frame + 0x28));
          piVar13 = (*(int * PTR32 *)(gen_frame + 0x14));
          piVar6 = (*(int * PTR32 *)(gen_frame + 0x10));
          if ((undefined *)(*(int * PTR32 *)(gen_frame + 0x10))[0x20] != (undefined *)0x0) {
            F_00583770((undefined *)(*(int * PTR32 *)(gen_frame + 0x10))[0x20] GEN_EDX_ARG,6,0,(*(undefined * PTR32 *)(gen_frame + 0x28)),0);
          }
          pvVar4 = (undefined *)piVar6[0x20];
          if (pvVar4 != (undefined *)0x0) {
            F_00583770(pvVar4 GEN_EDX_ARG,7,0,pvVar12,0);
          }
          pvVar4 = (undefined *)piVar6[0x20];
          if (pvVar4 != (undefined *)0x0) {
            F_00583770(pvVar4 GEN_EDX_ARG,3,0,pvVar12,0);
          }
          if (piVar13[4] != 0) {
            F_00406ad0(piVar13[4]);
            piVar13[4] = 0;
          }
          F_005c8870((undefined *)((int)pvVar12 + 4) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),piVar13);
        }
      }
    }
    (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*(undefined * PTR32 *)(gen_frame + 0x20)) + 4;
    uVar8 = (*(uint *)(gen_frame + 0x1c)) - 1;
    (*(uint *)(gen_frame + 0x1c)) = uVar8;
  } while (uVar8 != 0);
  iVar1 = *(int *)((*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x1c0);
  if (iVar1 == 0) goto LAB_00597ce0;
  iVar3 = *(int *)(iVar1 + 0x90);
  if (((*(byte *)(iVar1 + 0x60) & 1) == 0) || (iVar3 == 0)) {
LAB_00597bb8: ;
    piVar6 = (int *)0x0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0xc);
    iVar15 = 0;
    if ((iVar1 != 0) && ((uVar8 = *(uint *)(iVar1 + 4), uVar8 != 0 && (uVar7 = 0, uVar8 != 0)))) {
      piVar6 = *(int * PTR32 *)(iVar1 + 8);
      (*(int * PTR32 *)(gen_frame + 0x10)) = piVar6;
      piVar13 = piVar6;
      do {
        if (*(int *)(*piVar13 + 4) == iVar3) {
          iVar15 = piVar6[uVar7];
          break;
        }
        uVar7 = uVar7 + 1;
        piVar13 = piVar13 + 1;
      } while (uVar7 < uVar8);
    }
    if (iVar15 == 0) goto LAB_00597bb8;
    if ((((*(ushort *)(iVar15 + 0x18) < 1000) ||
         (piVar6 = *(int * PTR32 *)(iVar15 + 0x8c), piVar6 == (int *)0x0)) ||
        ((*(byte *)(piVar6 + 0x18) & 1) == 0)) ||
       ((((*(byte *)(piVar6 + 0x18) & 4) == 0 || ((char)piVar6[7] != '\x01')) ||
        (*(char *)(piVar6[3] + 0xf) != '\x0f')))) {
      piVar6 = (int *)0x0;
    }
  }
  uVar8 = ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x38))(piVar6 GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x1c)) = uVar8;
  if (uVar8 != 0) {
    piVar6 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 8);
    piVar13 = (int *)piVar6[1];
    cVar2 = *(char *)((int)piVar13 + 0x15);
    (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 4);
    while (cVar2 == '\0') {
      if ((uint)piVar13[3] < uVar8) {
        piVar10 = (int *)piVar13[2];
        piVar13 = piVar6;
      }
      else {
        piVar10 = (int *)*piVar13;
      }
      piVar6 = piVar13;
      piVar13 = piVar10;
      cVar2 = *(char *)((int)piVar10 + 0x15);
    }
    piVar13 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 8);
    (*(int * PTR32 *)(gen_frame + 0x10)) = piVar6;
    if ((piVar6 == piVar13) || (uVar8 < (uint)piVar6[3])) {
      (*(int * PTR32 *)(gen_frame + 0x14)) = piVar13;
      ppiVar11 = &(*(int * PTR32 *)(gen_frame + 0x14));
    }
    else {
      ppiVar11 = &(*(int * PTR32 *)(gen_frame + 0x10));
    }
    piVar6 = *ppiVar11;
    (*(int * PTR32 *)(gen_frame + 0x10)) = piVar6;
    if (piVar6 != *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 8)) {
      if (*(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x18) == uVar8) {
        uVar8 = 0;
        piVar6 = (int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1c);
        puVar14 = (undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x50);
        pvVar12 = (*(undefined * PTR32 *)(gen_frame + 0x28));
        do {
          if ((-1 < (int)uVar8) && (uVar8 < 4)) {
            *puVar14 = 0;
            piVar13 = (int *)*piVar6;
            if (piVar13 != (int *)0x0) {
              ((GEN_TCODE *)*(gen_code32 *)(*piVar13 + 8))(piVar13 GEN_EDX_ARG);
              *piVar6 = 0;
              pvVar12 = (*(undefined * PTR32 *)(gen_frame + 0x28));
            }
          }
          uVar8 = uVar8 + 1;
          puVar14 = puVar14 + 0x28;
          piVar6 = piVar6 + 1;
        } while ((int)uVar8 < 4);
        *(undefined4 *)((int)pvVar12 + 0x18) = 0;
        *(undefined4 *)((int)pvVar12 + 0xd0) = 0;
      }
      uVar8 = (*(uint *)(gen_frame + 0x1c));
      piVar13 = (*(int * PTR32 *)(gen_frame + 0x18));
      piVar6 = (*(int * PTR32 *)(gen_frame + 0x10));
      if (*(undefined * PTR32 *)((*(uint *)(gen_frame + 0x1c)) + 0x80) != (undefined *)0x0) {
        F_00583770(*(undefined * PTR32 *)((*(uint *)(gen_frame + 0x1c)) + 0x80) GEN_EDX_ARG,6,0,(*(undefined * PTR32 *)(gen_frame + 0x28)),0);
      }
      pvVar12 = *(undefined * PTR32 *)(uVar8 + 0x80);
      if (pvVar12 != (undefined *)0x0) {
        F_00583770(pvVar12 GEN_EDX_ARG,7,0,(*(undefined * PTR32 *)(gen_frame + 0x28)),0);
      }
      pvVar12 = *(undefined * PTR32 *)(uVar8 + 0x80);
      if (pvVar12 != (undefined *)0x0) {
        F_00583770(pvVar12 GEN_EDX_ARG,3,0,(*(undefined * PTR32 *)(gen_frame + 0x28)),0);
      }
      if (piVar6[4] != 0) {
        F_00406ad0(piVar6[4]);
        piVar6[4] = 0;
      }
      F_005c8870(piVar13 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),piVar6);
    }
  }
LAB_00597ce0: ;
  pAVar5 = (*(undefined * PTR32 *)(gen_frame + 0x24));
  F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c) GEN_EDX_ARG,0x49,0,(*(undefined * PTR32 *)(gen_frame + 0x24)),0);
  uVar8 = F_0058fe90(pAVar5 + 4 GEN_EDX_ARG);
  return uVar8;
}

/* ref: FUN_00597d10 */
GEN_FRAME byte GEN_THISCALL F_00597d10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x597d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte * param_3 = (byte *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  uint param_6 = (uint)gen_a6;
  int param_7 = (int)gen_a7;
  byte * param_8 = (byte *)(uintptr_t)gen_a8;
  byte * pbVar1;
  int iVar2;
  undefined4 uVar3;
  byte * pbVar4;
  uint uVar5;
  undefined4 uVar6;
  byte * pbVar7;
  byte * pbVar8;
  uint uVar9;
  byte local_6;
  byte local_5;
  
  local_6 = 0;
  local_5 = 0;
  if (5 < param_1) {
    param_1 = 5;
  }
  if (param_1 != 0) {
    pbVar1 = (byte *)((int)param_3 + (int)((int)(uintptr_t)param_8) * 8);
    pbVar4 = (byte *)((int)param_3 + param_4 * 8);
    pbVar7 = (byte *)((int)param_3 + param_6 * 8);
    pbVar8 = (byte *)((int)param_3 + param_5 * 8);
    param_3 = (byte *)((int)param_3 + param_7 * 8);
    param_6 = param_1;
    param_8 = pbVar1;
    do {
      if ((*pbVar4 & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(uint *)(pbVar4 + 4);
      }
      if ((*pbVar8 & 0xf) == 0) {
        param_7 = 0;
      }
      else {
        param_7 = *(int *)(pbVar8 + 4);
      }
      if ((*pbVar7 & 0xf) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(uint *)(pbVar7 + 4);
      }
      if ((*param_3 & 0xf) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)(param_3 + 4);
      }
      if ((*param_8 & 0xf) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(param_8 + 4);
      }
      if ((uVar5 & 1) == 0) {
        if ((uVar5 & 2) != 0) {
          F_00592ca0(this GEN_EDX_FWD,*(undefined4 *)((int)this + (uint)local_5 * 4 + 0x164),uVar9,uVar6,uVar3
                      );
          local_5 = local_5 + 1;
        }
      }
      else {
        F_00595640(this GEN_EDX_ARG,*(undefined4 *)((int)this + (uint)local_6 * 4 + 0x178),param_7,uVar9,uVar6
                     ,uVar3,uVar5);
        local_6 = local_6 + 1;
      }
      param_6 = param_6 - 1;
      pbVar4 = pbVar4 + 8;
      pbVar7 = pbVar7 + 8;
      pbVar8 = pbVar8 + 8;
      param_3 = param_3 + 8;
      param_8 = param_8 + 8;
    } while (param_6 != 0);
  }
  *(byte *)((int)this + 0x21c) = local_5;
  *(byte *)((int)this + 0x21d) = local_6;
  if ((param_1 != 0) && (iVar2 = *(int *)((int)this + 0xe8), iVar2 != 0)) {
    *(uint *)(iVar2 + 0x84) = *(uint *)(iVar2 + 0x84) | 0x100000;
    *(uint *)(iVar2 + 0x88) = *(uint *)(iVar2 + 0x88) & 0xffffff7f;
  }
  return local_5;
}

/* ref: FUN_00597e80 */
GEN_FRAME uint GEN_THISCALL F_00597e80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x597e80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  uint local_c;
  byte local_6;
  byte local_5;
  
  local_6 = 0;
  local_5 = 0;
  if (5 < param_1) {
    param_1 = 5;
  }
  if (param_1 != 0) {
    param_3 = param_3 * 4;
    local_c = param_1;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((param_3 + *(int *)(param_2 + 0x20))));
      uVar2 = puVar1[3];
      if ((uVar2 & 1) == 0) {
        if ((uVar2 & 2) != 0) {
          F_00592ca0(this GEN_EDX_FWD,*(undefined4 *)((int)this + (uint)local_5 * 4 + 0x164),puVar1[2],
                       (uint)*(ushort *)(puVar1 + 4),puVar1[1]);
          local_5 = local_5 + 1;
        }
      }
      else {
        F_00595640(this GEN_EDX_ARG,*(undefined4 *)((int)this + (uint)local_6 * 4 + 0x178),*puVar1,puVar1[2],
                     (uint)*(ushort *)(puVar1 + 4),puVar1[1],uVar2);
        local_6 = local_6 + 1;
      }
      param_3 = param_3 + 4;
      local_c = local_c - 1;
    } while (local_c != 0);
  }
  *(byte *)((int)this + 0x21c) = local_5;
  *(byte *)((int)this + 0x21d) = local_6;
  if ((param_1 != 0) && (iVar3 = *(int *)((int)this + 0xe8), iVar3 != 0)) {
    *(uint *)(iVar3 + 0x84) = *(uint *)(iVar3 + 0x84) | 0x100000;
    *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) & 0xffffff7f;
  }
  return param_1;
}

/* ref: FUN_00597f60 */
GEN_FRAME uint GEN_THISCALL F_00597f60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x597f60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte * param_3 = (byte *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  uint param_6 = (uint)gen_a6;
  byte * param_7 = (byte *)(uintptr_t)gen_a7;
  byte * pbVar1;
  undefined4 uVar2;
  uint uVar3;
  byte * pbVar4;
  undefined4 uVar5;
  int iVar6;
  byte * pbVar7;
  undefined4 uVar8;
  int * piVar9;
  undefined4 * puVar10;
  undefined4 uVar11;
  
  if (5 < param_1) {
    param_1 = 5;
  }
  uVar3 = *(uint *)((int)this + 0xfc);
  if (uVar3 != 0) {
    *(uint *)(uVar3 + 0x84) =
         *(uint *)(uVar3 + 0x84) ^
         ((uint)(param_1 != 0) << 0x14 ^ *(uint *)(uVar3 + 0x84)) & 0x100000;
    *(uint *)(uVar3 + 0x88) =
         *(uint *)(uVar3 + 0x88) ^ ((uint)(param_1 == 0) << 7 ^ *(uint *)(uVar3 + 0x88)) & 0x80;
  }
  if (param_1 != 0) {
    pbVar1 = (byte *)((int)param_3 + (int)((int)(uintptr_t)param_7) * 8);
    puVar10 = (undefined4 *)((int)this + 0x1a0);
    pbVar4 = (byte *)((int)param_3 + param_5 * 8);
    pbVar7 = (byte *)((int)param_3 + param_4 * 8);
    param_3 = (byte *)((int)param_3 + param_6 * 8);
    param_6 = param_1;
    param_7 = pbVar1;
    do {
      if ((*pbVar7 & 0xf) == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(undefined4 *)(pbVar7 + 4);
      }
      if ((*pbVar4 & 0xf) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)(pbVar4 + 4);
      }
      if ((*param_3 & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(param_3 + 4);
      }
      if ((*param_7 & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_7 + 4);
      }
      uVar3 = F_00595640(this GEN_EDX_FWD,puVar10[-5],uVar11,uVar8,uVar5,uVar2,0x80);
      *puVar10 = uVar11;
      puVar10 = puVar10 + 1;
      param_6 = param_6 - 1;
      pbVar4 = pbVar4 + 8;
      pbVar7 = pbVar7 + 8;
      param_3 = param_3 + 8;
      param_7 = param_7 + 8;
    } while (param_6 != 0);
    if (param_1 < 5) {
      piVar9 = (int *)((int)this + param_1 * 4 + 0x18c);
      iVar6 = 5 - param_1;
      do {
        uVar3 = 0;
        if ((*piVar9 != 0) && (uVar3 = *(uint *)(*piVar9 + 0x70), uVar3 != 0)) {
          *(uint *)(uVar3 + 0x84) = *(uint *)(uVar3 + 0x84) & 0xffefffff;
          *(uint *)(uVar3 + 0x88) = *(uint *)(uVar3 + 0x88) | 0x80;
        }
        piVar9 = piVar9 + 1;
        iVar6 = iVar6 - 1;
      } while (iVar6 != 0);
    }
  }
  *(char *)((int)this + 0x21e) = (char)param_1;
  if ((param_1 != 0) && (uVar3 = *(uint *)((int)this + 0xe8), uVar3 != 0)) {
    *(uint *)(uVar3 + 0x84) = *(uint *)(uVar3 + 0x84) | 0x100000;
    *(uint *)(uVar3 + 0x88) = *(uint *)(uVar3 + 0x88) & 0xffffff7f;
  }
  return uVar3;
}

/* ref: FUN_005980f0 */
GEN_FRAME uint GEN_THISCALL F_005980f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5980f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int * piVar5;
  undefined4 * puVar6;
  
  if (5 < param_1) {
    param_1 = 5;
  }
  uVar2 = *(uint *)((int)this + 0xfc);
  if (uVar2 != 0) {
    *(uint *)(uVar2 + 0x84) =
         *(uint *)(uVar2 + 0x84) ^
         ((uint)(param_1 != 0) << 0x14 ^ *(uint *)(uVar2 + 0x84)) & 0x100000;
    *(uint *)(uVar2 + 0x88) =
         *(uint *)(uVar2 + 0x88) ^ ((uint)(param_1 == 0) << 7 ^ *(uint *)(uVar2 + 0x88)) & 0x80;
  }
  if (param_1 != 0) {
    iVar3 = param_3 * 4;
    puVar6 = (undefined4 *)((int)this + 0x1a0);
    param_3 = param_1;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((iVar3 + *(int *)(param_2 + 0x20))));
      uVar4 = 0;
      if ((*(byte *)(puVar1 + 3) & 0x80) != 0) {
        uVar4 = *puVar1;
      }
      if ((puVar1[3] & 0x100) != 0) {
        uVar4 = *puVar1;
      }
      uVar2 = F_00595640(this GEN_EDX_FWD,puVar6[-5],uVar4,puVar1[2],(uint)*(ushort *)(puVar1 + 4),puVar1[1],
                           0x80);
      *puVar6 = uVar4;
      iVar3 = iVar3 + 4;
      puVar6 = puVar6 + 1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
    if (param_1 < 5) {
      piVar5 = (int *)((int)this + param_1 * 4 + 0x18c);
      iVar3 = 5 - param_1;
      do {
        uVar2 = 0;
        if ((*piVar5 != 0) && (uVar2 = *(uint *)(*piVar5 + 0x70), uVar2 != 0)) {
          *(uint *)(uVar2 + 0x84) = *(uint *)(uVar2 + 0x84) & 0xffefffff;
          *(uint *)(uVar2 + 0x88) = *(uint *)(uVar2 + 0x88) | 0x80;
        }
        piVar5 = piVar5 + 1;
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
    }
  }
  *(char *)((int)this + 0x21e) = (char)param_1;
  if ((param_1 != 0) && (uVar2 = *(uint *)((int)this + 0xe8), uVar2 != 0)) {
    *(uint *)(uVar2 + 0x84) = *(uint *)(uVar2 + 0x84) | 0x100000;
    *(uint *)(uVar2 + 0x88) = *(uint *)(uVar2 + 0x88) & 0xffffff7f;
  }
  return uVar2;
}

/* ref: FUN_00598240 */
GEN_FRAME uint GEN_THISCALL F_00598240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x598240u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte * param_3 = (byte *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  int param_6 = (int)gen_a6;
  uint param_7 = (uint)gen_a7;
  int param_8 = (int)gen_a8;
  int iVar1;
  undefined4 uVar2;
  byte * pbVar3;
  uint uVar4;
  int iVar5;
  byte * pbVar6;
  undefined4 uVar7;
  int * piVar8;
  byte * pbVar9;
  byte * pbVar10;
  uint uVar11;
  byte local_6;
  byte local_5;
  
  local_6 = 0;
  local_5 = 0;
  if (5 < param_1) {
    param_1 = 5;
  }
  uVar4 = *(uint *)((int)this + 0x108);
  if (uVar4 != 0) {
    *(uint *)(uVar4 + 0x84) =
         *(uint *)(uVar4 + 0x84) ^
         ((uint)(param_1 != 0) << 0x14 ^ *(uint *)(uVar4 + 0x84)) & 0x100000;
    *(uint *)(uVar4 + 0x88) =
         *(uint *)(uVar4 + 0x88) ^ ((uint)(param_1 == 0) << 7 ^ *(uint *)(uVar4 + 0x88)) & 0x80;
  }
  if (param_1 != 0) {
    iVar5 = param_7 * 8;
    param_7 = param_1;
    pbVar3 = (byte *)((int)param_3 + param_4 * 8);
    pbVar6 = (byte *)((int)param_3 + param_5 * 8);
    pbVar9 = (byte *)((int)param_3 + iVar5);
    pbVar10 = (byte *)((int)param_3 + param_6 * 8);
    param_3 = (byte *)((int)param_3 + param_8 * 8);
    do {
      if ((*pbVar3 & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(uint *)(pbVar3 + 4);
      }
      if ((*pbVar6 & 0xf) == 0) {
        param_8 = 0;
      }
      else {
        param_8 = *(int *)(pbVar6 + 4);
      }
      if ((*pbVar10 & 0xf) == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(uint *)(pbVar10 + 4);
      }
      if ((*pbVar9 & 0xf) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)(pbVar9 + 4);
      }
      if ((*param_3 & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_3 + 4);
      }
      if ((uVar4 & 1) == 0) {
        if ((uVar4 & 2) != 0) {
          F_00592ca0(this GEN_EDX_FWD,*(undefined4 *)((int)this + (uint)local_5 * 4 + 0x1b4),uVar11,uVar7,
                       uVar2);
          local_5 = local_5 + 1;
        }
      }
      else {
        F_00595640(this GEN_EDX_ARG,*(undefined4 *)((int)this + (uint)local_6 * 4 + 0x1c0),param_8,uVar11,
                     uVar7,uVar2,uVar4);
        local_6 = local_6 + 1;
      }
      param_7 = param_7 - 1;
      pbVar3 = pbVar3 + 8;
      pbVar6 = pbVar6 + 8;
      pbVar9 = pbVar9 + 8;
      pbVar10 = pbVar10 + 8;
      param_3 = param_3 + 8;
    } while (param_7 != 0);
    uVar4 = (uint)local_5;
    if (uVar4 < 3) {
      piVar8 = (int *)((int)this + uVar4 * 4 + 0x1b4);
      iVar5 = 3 - uVar4;
      do {
        if ((*piVar8 != 0) && (iVar1 = *(int *)(*piVar8 + 0x70), iVar1 != 0)) {
          *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) & 0xffefffff;
          *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x80;
        }
        piVar8 = piVar8 + 1;
        iVar5 = iVar5 - 1;
      } while (iVar5 != 0);
    }
    uVar4 = (uint)local_6;
    if (uVar4 == 0) {
      piVar8 = (int *)((int)this + 0x1c0);
      iVar5 = 1;
      do {
        uVar4 = 0;
        if ((*piVar8 != 0) && (uVar4 = *(uint *)(*piVar8 + 0x70), uVar4 != 0)) {
          *(uint *)(uVar4 + 0x84) = *(uint *)(uVar4 + 0x84) & 0xffefffff;
          *(uint *)(uVar4 + 0x88) = *(uint *)(uVar4 + 0x88) | 0x80;
        }
        piVar8 = piVar8 + 1;
        iVar5 = iVar5 - 1;
      } while (iVar5 != 0);
    }
  }
  uVar4 = CONCAT31((int3)(uVar4 >> 8),local_6);
  *(byte *)((int)this + 0x21f) = local_5;
  *(byte *)((int)this + 0x220) = local_6;
  if ((param_1 != 0) && (uVar4 = *(uint *)((int)this + 0xe8), uVar4 != 0)) {
    *(uint *)(uVar4 + 0x84) = *(uint *)(uVar4 + 0x84) | 0x100000;
    *(uint *)(uVar4 + 0x88) = *(uint *)(uVar4 + 0x88) & 0xffffff7f;
  }
  return uVar4;
}

/* ref: FUN_00598470 */
GEN_FRAME uint GEN_THISCALL F_00598470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x598470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int * piVar6;
  uint local_10;
  byte local_6;
  byte local_5;
  
  local_6 = 0;
  local_5 = 0;
  if (5 < param_1) {
    param_1 = 5;
  }
  uVar3 = *(uint *)((int)this + 0x108);
  if (uVar3 != 0) {
    *(uint *)(uVar3 + 0x84) =
         *(uint *)(uVar3 + 0x84) ^
         ((uint)(param_1 != 0) << 0x14 ^ *(uint *)(uVar3 + 0x84)) & 0x100000;
    *(uint *)(uVar3 + 0x88) =
         *(uint *)(uVar3 + 0x88) ^ ((uint)(param_1 == 0) << 7 ^ *(uint *)(uVar3 + 0x88)) & 0x80;
  }
  if (param_1 != 0) {
    param_3 = param_3 * 4;
    local_10 = param_1;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((param_3 + *(int *)(param_2 + 0x20))));
      uVar3 = puVar1[3];
      uVar4 = 0;
      if ((char)uVar3 < '\0') {
        uVar4 = *puVar1;
      }
      if ((uVar3 & 0x100) != 0) {
        uVar4 = *puVar1;
      }
      if ((uVar3 & 1) == 0) {
        if ((uVar3 & 2) != 0) {
          F_00592ca0(this GEN_EDX_FWD,*(undefined4 *)((int)this + (uint)local_5 * 4 + 0x1b4),puVar1[2],
                       (uint)*(ushort *)(puVar1 + 4),puVar1[1]);
          local_5 = local_5 + 1;
        }
      }
      else {
        F_00595640(this GEN_EDX_ARG,*(undefined4 *)((int)this + (uint)local_6 * 4 + 0x1c0),uVar4,puVar1[2],
                     (uint)*(ushort *)(puVar1 + 4),puVar1[1],uVar3);
        local_6 = local_6 + 1;
      }
      param_3 = param_3 + 4;
      local_10 = local_10 - 1;
    } while (local_10 != 0);
    uVar3 = (uint)local_5;
    if (uVar3 < 3) {
      piVar6 = (int *)((int)this + uVar3 * 4 + 0x1b4);
      iVar5 = 3 - uVar3;
      do {
        if ((*piVar6 != 0) && (iVar2 = *(int *)(*piVar6 + 0x70), iVar2 != 0)) {
          *(uint *)(iVar2 + 0x84) = *(uint *)(iVar2 + 0x84) & 0xffefffff;
          *(uint *)(iVar2 + 0x88) = *(uint *)(iVar2 + 0x88) | 0x80;
        }
        piVar6 = piVar6 + 1;
        iVar5 = iVar5 - 1;
      } while (iVar5 != 0);
    }
    uVar3 = (uint)local_6;
    if (uVar3 == 0) {
      piVar6 = (int *)((int)this + 0x1c0);
      iVar5 = 1;
      do {
        uVar3 = 0;
        if ((*piVar6 != 0) && (uVar3 = *(uint *)(*piVar6 + 0x70), uVar3 != 0)) {
          *(uint *)(uVar3 + 0x84) = *(uint *)(uVar3 + 0x84) & 0xffefffff;
          *(uint *)(uVar3 + 0x88) = *(uint *)(uVar3 + 0x88) | 0x80;
        }
        piVar6 = piVar6 + 1;
        iVar5 = iVar5 - 1;
      } while (iVar5 != 0);
    }
  }
  uVar3 = CONCAT31((int3)(uVar3 >> 8),local_6);
  *(byte *)((int)this + 0x21f) = local_5;
  *(byte *)((int)this + 0x220) = local_6;
  if ((param_1 != 0) && (uVar3 = *(uint *)((int)this + 0xe8), uVar3 != 0)) {
    *(uint *)(uVar3 + 0x84) = *(uint *)(uVar3 + 0x84) | 0x100000;
    *(uint *)(uVar3 + 0x88) = *(uint *)(uVar3 + 0x88) & 0xffffff7f;
  }
  return uVar3;
}

/* ref: FUN_00598630 */
GEN_FRAME byte GEN_THISCALL F_00598630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x598630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  uint uVar7;
  
  iVar1 = REFG(int, 0x1379860);
  if (*(char *)(REFG(int, 0x1379860) + 0x230) != '\0') {
    uVar4 = F_00404270();
    puVar5 = (undefined4 *)F_00406bd0(0x18,0,uVar4,0);
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = this;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      *(undefined1 *)(puVar5 + 5) = 0;
      (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar5;
      F_005d3300((undefined *)(iVar1 + 0x220) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
      if ((*(undefined4 * PTR32 *)(gen_frame + 0x8)) != (undefined4 *)0x0) {
        iVar1 = *(int *)this;
        puVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0x8));
        do {
          (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar5;
          if (iVar1 == 0) {
            bVar3 = F_00583840(puVar5 GEN_EDX_ARG,param_1);
            F_00583a30((undefined *)(REFG(int, 0x1379860) + 0x220) GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
            return bVar3;
          }
          if ((((ushort)*(uint *)(iVar1 + 0x14) & 0xff) == *param_1) &&
             (((char)param_2 == '\0' || ((*(uint *)(iVar1 + 0x14) & 0x400000) != 0)))) {
            if (puVar5[2] == puVar5[3]) {
              iVar6 = (int)(puVar5[2] - puVar5[1]) >> 2;
              if (iVar6 == -1) {
                    
                F_00c4579a("vector<T> too long");
              }
              uVar7 = iVar6 + 1;
              uVar4 = (int)(puVar5[3] - puVar5[1]) >> 2;
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
                F_005d2270(puVar5 + 1 GEN_EDX_ARG,uVar4);
              }
            }
            if ((int *)puVar5[2] != (int *)0x0) {
              *(int *)puVar5[2] = iVar1;
            }
            puVar5[2] = puVar5[2] + 4;
            iVar2 = puVar5[2];
            iVar6 = iVar2 - 4;
            if ((puVar5[1] != iVar6) && (iVar6 != iVar2)) {
              F_005cc0f0(puVar5[1],iVar6,iVar2,0,0);
            }
          }
          iVar1 = *(int *)(iVar1 + 0x10);
          puVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0x8));
        } while( true );
      }
    }
  }
  return 0;
}

/* ref: FUN_00598790 */
GEN_FRAME uint GEN_THISCALL F_00598790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x598790u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  unsigned int gen_args[8];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  char * pcVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char * pcVar8;
  bool bVar9;
  float10 fVar10;
  float10 fVar11;
  
  pcVar8 = (*(char * PTR32 *)&gen_args[4]);
  uVar6 = 0;
  if ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x148))) & 2) == 0) {
    return 0;
  }
  bVar9 = (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9c))) & 0x200000) != 0;
  (*(char *)(gen_frame + 0x4a)) = 0;
  if (bVar9) {
    F_0056fb50((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,1);
    (*(char *)(gen_frame + 0x4a)) = 1;
  }
  uVar1 = (uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa0)));
  uVar7 = (*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa2))) - 1) + uVar1 & 0xffff;
  (*(char *)(gen_frame + 0x4b)) = '\0';
  (*(uint *)(gen_frame + 0x28)) = uVar7;
  (*(char *)(gen_frame + 0x4a)) = bVar9;
  if (*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa2))) != 0) {
    if ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xec))) != 0) && (iVar5 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x13c))), iVar5 != 0)
       ) {
      *(uint *)(iVar5 + 0x978) = uVar1;
      *(uint *)(iVar5 + 0x97c) = uVar7;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(iVar5 + 0x2ac) + 0x28))))(iVar5 + 0x2ac GEN_EDX_ARG,iVar5 + 0x974);
    }
    (*(char *)(gen_frame + 0x4b)) = '\x01';
  }
  (*(float *)(gen_frame + 0x38)) = (*(float *)&gen_args[3]);
  fVar10 = F_005580e0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,GEN_TOF(*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74)))),1);
  (*(float *)(gen_frame + 0x24)) = (float)fVar10;
  fVar10 = F_005581b0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,GEN_TOF(*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74)))),1);
  if (((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9c))) & 0x2000000) == 0) ||
     ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x148))) & 2) == 0)) {
    (*(uint *)(gen_frame + 0x40)) = 0;
  }
  else {
    uVar7 = F_00570a20(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x13c))) GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(char * PTR32 *)&gen_args[4]));
    (*(uint *)(gen_frame + 0x40)) = uVar7 & 0xffff;
  }
  (*(char * PTR32 *)&gen_args[4]) = (char *)0x0;
  if ((short)(*(uint *)(gen_frame + 0x40)) == 0) {
    uVar6 = F_00595900(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x13c))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xec))),
                         (*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(float *)&gen_args[2]),(*(float *)&gen_args[3]),pcVar8,(*(float * PTR32 *)&gen_args[5]),(*(int *)&gen_args[6]),(*(uint *)&gen_args[7]),0);
  }
  else {
    (*(undefined * PTR32 *)(gen_frame + 0x3c)) = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0))) + 0x2c)));
    (*(float *)&gen_args[3]) = 0.0;
    (*(float *)(gen_frame + 0x4)) = 0.0;
    (*(float *)(gen_frame + 0x8)) = 0.0;
    if ((*(float * PTR32 *)&gen_args[5]) != (float *)0x0) {
      (*(float *)(gen_frame + 0x4)) = *(*(float * PTR32 *)&gen_args[5]);
      (*(float *)(gen_frame + 0x8)) = (*(float * PTR32 *)&gen_args[5])[1];
    }
    uVar7 = (*(uint *)(gen_frame + 0x40)) + 1;
    (*(uint *)(gen_frame + 0x30)) = 0;
    if ((*(uint *)(gen_frame + 0x40)) != 0xffffffff) {
      ((int *)(gen_frame + 0x1c))[1] = 0;
      (*(int *)(gen_frame + 0x18)) = 0;
      do {
        (*(char * PTR32 *)(gen_frame + 0x44)) = (char *)0x0;
        (*(uint *)(gen_frame + 0x34)) = 0;
        F_00c48350((*(undefined * PTR32 *)(gen_frame + 0x3c)),0,0x2000);
        if ((short)(*(uint *)(gen_frame + 0x30)) == (short)(*(uint *)(gen_frame + 0x40))) {
          F_00c4d9ef((*(undefined * PTR32 *)(gen_frame + 0x3c)),0x2000,pcVar8,0xffffffff);
        }
        else {
          if (((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9c))) & 0x2000000) == 0) ||
             ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x148))) & 2) == 0)) {
            (*(char * PTR32 *)(gen_frame + 0x44)) = (char *)0x0;
          }
          else {
            pcVar2 = (char *)F_00570aa0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x13c))) GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),pcVar8,
                                          &(*(uint *)(gen_frame + 0x34)));
            (*(char * PTR32 *)(gen_frame + 0x44)) = pcVar2;
          }
          F_00c46aa0((*(undefined * PTR32 *)(gen_frame + 0x3c)),pcVar8,(int)(*(char * PTR32 *)(gen_frame + 0x44)) - (int)pcVar8);
          if (*(*(char * PTR32 *)(gen_frame + 0x44)) != '\x02') {
            (*(char * PTR32 *)&gen_args[4]) = ((char *)GEN_TOP(((int)(*(char * PTR32 *)&gen_args[4]) + 1)));
          }
        }
        uVar4 = (*(uint *)(gen_frame + 0x2c));
        if ((*(float * PTR32 *)&gen_args[5]) != (float *)0x0) {
          (*(float *)&gen_args[3]) = gen_bits2f(((*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x8)) + 2)) & 1) << 0x18);
        }
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x2c)) + 0)) = 0;
        (*(uint *)(gen_frame + 0x2c)) = uVar4 & 0xffffff00;
        if (((*(char *)(gen_frame + 0x4a)) != '\0') &&
           ((fVar11 = (float10)(*(float *)(gen_frame + 0x24)) + (float10)(*(float *)(gen_frame + 0x38)),
            (!GEN_ISNAN((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x90)))) && !GEN_ISNAN(fVar11)) &&
            !((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x90))) <= fVar11) ||
            ((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x98))) < (float10)(*(float *)(gen_frame + 0x38)))))) {
          (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x2c)) + 0)) = 1;
          (*(uint *)(gen_frame + 0x2c)) = CONCAT31((int3)(uVar4 >> 8),1);
        }
        iVar5 = ((*(int *)&gen_args[6]) - ((uint)(*(char * PTR32 *)&gen_args[4]) & 0xffff)) - uVar6;
        ((int *)(gen_frame + 0x1c))[0] = iVar5;
        piVar3 = ((int *)(gen_frame + 0x1c)) + 1;
        if (-1 < iVar5) {
          piVar3 = ((int *)(gen_frame + 0x1c));
        }
        iVar5 = *piVar3;
        ((int *)(gen_frame + 0x1c))[0] = (*(uint *)&gen_args[7]) - uVar6;
        piVar3 = &(*(int *)(gen_frame + 0x18));
        if (-1 < (int)((*(uint *)&gen_args[7]) - uVar6)) {
          piVar3 = ((int *)(gen_frame + 0x1c));
        }
        uVar4 = F_00595900(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x13c))) GEN_EDX_ARG,
                             *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xec))),(*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(float *)&gen_args[2]),(*(float *)(gen_frame + 0x38)),
                             (*(undefined * PTR32 *)(gen_frame + 0x3c)),(*(float * PTR32 *)&gen_args[5]),iVar5,*piVar3,(*(uint *)(gen_frame + 0x2c)));
        uVar6 = uVar6 + uVar4;
        if (((*(uint *)&gen_args[7]) != 0) && ((*(uint *)&gen_args[7]) <= uVar6)) break;
        if ((*(float * PTR32 *)&gen_args[5]) != (float *)0x0) {
          iVar5 = ((*(uint *)(gen_frame + 0x34)) & 0xffff) + uVar4;
          ((int *)(gen_frame + 0x1c))[0] = iVar5;
          fVar11 = (float10)iVar5;
          if (iVar5 < 0) {
            fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
          }
          (*(float *)(gen_frame + 0x4)) = (float)((float10)(*(float *)(gen_frame + 0x4)) - fVar11);
          if ((float10)(*(float *)(gen_frame + 0x4)) < (float10)0) {
            (*(float *)(gen_frame + 0x4)) = 0.0;
          }
          *((byte *)GEN_TOP(((int)(*(float * PTR32 *)&gen_args[5]) + 6))) =
               *((byte *)GEN_TOP(((int)(*(float * PTR32 *)&gen_args[5]) + 6))) ^ (*((byte *)GEN_TOP(((int)(*(float * PTR32 *)&gen_args[5]) + 6))) ^ (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x8)) + 2))) & 1;
          if ((*(undefined1 *)((char *)&(*(float *)&gen_args[3]) + 3)) == '\0') {
            (*(float *)(gen_frame + 0x8)) = 0.0;
          }
        }
        if ((*(char *)(gen_frame + 0x4b)) != '\0') {
          uVar4 = ((uint)(*(char * PTR32 *)&gen_args[4]) & 0xffff) + uVar6;
          if (((*(uint *)(gen_frame + 0x28)) & 0xffff) < uVar4) {
            (*(char *)(gen_frame + 0x4b)) = '\0';
            if ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xec))) != 0) &&
               (iVar5 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x13c))), iVar5 != 0)) {
              *(undefined4 *)(iVar5 + 0x978) = 1;
              *(undefined4 *)(iVar5 + 0x97c) = 0;
LAB_00598b15: ;
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(iVar5 + 0x2ac) + 0x28))))(iVar5 + 0x2ac GEN_EDX_ARG,iVar5 + 0x974);
            }
          }
          else if (uVar4 < uVar1) {
            if ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xec))) != 0) &&
               (iVar5 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x13c))), iVar5 != 0)) {
              *(uint *)(iVar5 + 0x978) = (uVar1 - uVar6) - (int)(*(char * PTR32 *)&gen_args[4]) & 0xffff;
              uVar4 = ((*(uint *)(gen_frame + 0x28)) - uVar6) - (int)(*(char * PTR32 *)&gen_args[4]);
LAB_00598b12: ;
              *(uint *)(iVar5 + 0x97c) = uVar4 & 0xffff;
              goto LAB_00598b15;
            }
          }
          else if ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xec))) != 0) &&
                  (iVar5 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x13c))), iVar5 != 0)) {
            uVar4 = ((*(uint *)(gen_frame + 0x28)) - uVar6) - (int)(*(char * PTR32 *)&gen_args[4]);
            *(undefined4 *)(iVar5 + 0x978) = 0;
            goto LAB_00598b12;
          }
        }
        pcVar8 = (*(char * PTR32 *)(gen_frame + 0x44)) + ((*(uint *)(gen_frame + 0x34)) & 0xffff);
        uVar4 = (*(uint *)(gen_frame + 0x30)) + 1;
        (*(uint *)(gen_frame + 0x30)) = uVar4;
        (*(float *)(gen_frame + 0x38)) = ((float)GEN_TOF((((float10)(float)fVar10 + (float10)(*(float *)(gen_frame + 0x24))) + (float10)(*(float *)(gen_frame + 0x38)))));
      } while ((uVar4 & 0xffff) < uVar7);
    }
  }
  if ((*(char *)(gen_frame + 0x4a)) != '\0') {
    F_0056fb50((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0);
  }
  if ((((*(char *)(gen_frame + 0x4b)) != '\0') && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xec))) != 0)) &&
     (iVar5 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x13c))), iVar5 != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(iVar5 + 0x2ac) + 0x28))))(iVar5 + 0x2ac GEN_EDX_ARG,iVar5 + 0x970);
  }
  return uVar6;
}

/* ref: FUN_00598be0 */
GEN_FRAME uint GEN_THISCALL F_00598be0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x598be0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  uint param_5 = (uint)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  float * pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  float10 fVar10;
  float local_14;
  
  if ((param_6 != (float *)0x0) && ((*(byte *)((int)param_1 + 0x148) & 2) != 0)) {
    uVar2 = *(undefined4 *)((int)param_1 + 0x8c);
    uVar3 = *(undefined4 *)((int)param_1 + 0x90);
    uVar4 = *(undefined4 *)((int)param_1 + 0x94);
    uVar5 = *(undefined4 *)((int)param_1 + 0x98);
    *(float *)((int)param_1 + 0x8c) = param_6[1];
    uVar6 = *(uint *)((int)param_1 + 0x9c);
    *(float *)((int)param_1 + 0x90) = param_6[2];
    *(float *)((int)param_1 + 0x94) = param_6[3];
    *(float *)((int)param_1 + 0x98) = param_6[4];
    *(uint *)((int)param_1 + 0x9c) = uVar6 | 0x200000;
    F_0056fb50(param_1 GEN_EDX_FWD,1);
    uVar8 = REFG(undefined4, 0x108cc50);
    local_14 = REFG(float, 0x10a0da0);
    if ((*(byte *)((int)param_1 + 0x148) & 2) != 0) {
      iVar7 = *(int *)((int)param_1 + 0x13c);
      if (param_5 == 0) {
        local_14 = 0.0;
      }
      else {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(iVar7 + 0x144) + 0x24))))((int *)(iVar7 + 0x144) GEN_EDX_ARG,param_1,param_5);
        F_0056fce0((undefined *)(iVar7 + 0x144) GEN_EDX_ARG,param_2,param_5,0,uVar8,0);
        local_14 = *(float *)(iVar7 + 0x284);
      }
    }
    pfVar1 = param_6 + 5;
    fVar10 = (float10)(int)gen_fl2bits(*pfVar1);
    if ((int)gen_fl2bits(*pfVar1) < 0) {
      fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    if ((float10)local_14 <= (float10)((float)GEN_TOF(ABS((float10)(float)(fVar10 + (float10)*param_6))))) {
      *param_6 = 0.0;
    }
    uVar9 = F_00598790(param_1 GEN_EDX_ARG,param_2,(float)((float10)*param_6 + (float10)param_3),param_4,
                         param_5,0,0,0);
    fVar10 = (float10)(int)gen_fl2bits(*pfVar1);
    if ((int)gen_fl2bits(*pfVar1) < 0) {
      fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    F_00598790(param_1 GEN_EDX_ARG,param_2,
                 ((float)GEN_TOF((fVar10 + (((float10)local_14 + (float10)param_3) + (float10)*param_6)))),
                 param_4,param_5,0,0,0);
    F_0056fb50(param_1 GEN_EDX_ARG,0);
    *(undefined4 *)((int)param_1 + 0x8c) = uVar2;
    *(uint *)((int)param_1 + 0x9c) =
         *(uint *)((int)param_1 + 0x9c) ^
         ((uVar6 >> 0x15 & 1) << 0x15 ^ *(uint *)((int)param_1 + 0x9c)) & 0x200000;
    *(undefined4 *)((int)param_1 + 0x90) = uVar3;
    *(undefined4 *)((int)param_1 + 0x94) = uVar4;
    *(undefined4 *)((int)param_1 + 0x98) = uVar5;
    return uVar9;
  }
  return 0;
}

/* ref: FUN_00598e00 */
GEN_FRAME uint GEN_THISCALL F_00598e00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x598e00u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float fVar1;
  float fVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  double dVar10;
  double dVar11;
  undefined * pvVar12;
  uint uVar13;
  uint uVar14;
  int * piVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  bool bVar20;
  float10 fVar21;
  float10 fVar22;
  
  uVar16 = (*(uint *)&gen_args[3]);
  (*(uint *)(gen_frame + 0x5c)) = 0;
  (*(float *)(gen_frame + 0x64)) = 0.0;
  (*(float *)(gen_frame + 0x60)) = 0.0;
  if ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x148))) & 2) == 0) {
    return 0;
  }
  uVar4 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x8c)));
  uVar5 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x90)));
  uVar6 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x94)));
  uVar7 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x98)));
  uVar8 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9c)));
  *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x8c))) = *(*(float * PTR32 *)&gen_args[2]);
  *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x90))) = (*(float * PTR32 *)&gen_args[2])[1];
  *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x94))) = (*(float * PTR32 *)&gen_args[2])[2];
  *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x98))) = (*(float * PTR32 *)&gen_args[2])[3];
  (*(char *)(gen_frame + 0x6b)) = 0;
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9c))) =
       *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9c))) ^
       ((uint)*((byte *)GEN_TOP(((*(float * PTR32 *)&gen_args[2]) + 5))) << 0x15 ^ *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9c)))) & 0x200000;
  bVar20 = (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9c))) & 0x200000) != 0;
  if (bVar20) {
    F_0056fb50((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,1);
    (*(char *)(gen_frame + 0x6b)) = 1;
  }
  uVar13 = (uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa0)));
  uVar19 = (*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa2))) - 1) + uVar13 & 0xffff;
  (*(char *)(gen_frame + 0x6a)) = '\0';
  (*(char *)(gen_frame + 0x6b)) = bVar20;
  if (*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa2))) != 0) {
    if ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xec))) != 0) &&
       (iVar18 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x13c))), iVar18 != 0)) {
      *(uint *)(iVar18 + 0x978) = uVar13;
      *(uint *)(iVar18 + 0x97c) = uVar19;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(iVar18 + 0x2ac) + 0x28))))(iVar18 + 0x2ac GEN_EDX_ARG,iVar18 + 0x974);
    }
    (*(char *)(gen_frame + 0x6a)) = '\x01';
  }
  (*(float *)(gen_frame + 0x3c)) = gen_bits2f(REFG(int, 0x108cc50));
  if ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x148))) & 2) == 0) {
    (*(float *)(gen_frame + 0x14)) = REFG(float, 0x10a0da0);
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x10a0da0);
  }
  else {
    iVar18 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x13c)));
    if ((*(uint *)&gen_args[3]) == 0) {
      (*(float *)(gen_frame + 0x14)) = 0.0;
      (*(float *)(gen_frame + 0x18)) = 0.0;
    }
    else {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(iVar18 + 0x144) + 0x24))))((undefined *)(iVar18 + 0x144) GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[3]));
      F_0056fce0((undefined *)(iVar18 + 0x144) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),(*(uint *)&gen_args[3]),0,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x3c))),0);
      (*(float *)(gen_frame + 0x14)) = *(float *)(iVar18 + 0x284);
      (*(float *)(gen_frame + 0x18)) = *(float *)(iVar18 + 0x288);
    }
  }
  fVar21 = (float10)REFG(double, 0x1088108);
  (*(float *)(gen_frame + 0x3c)) = ((float)GEN_TOF(((((float10)GEN_TOD((*(float * PTR32 *)&gen_args[2])[2])) - ((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[2])))) * fVar21 + ((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[2]))))));
  fVar1 = (*(float * PTR32 *)&gen_args[2])[1];
  fVar2 = (*(float * PTR32 *)&gen_args[2])[3];
  fVar22 = F_005580e0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,GEN_TOF(*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74)))),1);
  (*(float *)(gen_frame + 0x44)) = (float)fVar22;
  fVar22 = F_005581b0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,GEN_TOF(*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74)))),1);
  switch((unsigned int)(uintptr_t)((undefined4)gen_fl2bits((*(float * PTR32 *)&gen_args[2])[4]))) {
  case 0: ;
  case 1: ;
  case 2: ;
    (*(float *)(gen_frame + 0x60)) = (*(float * PTR32 *)&gen_args[2])[1];
    break;
  case 3: ;
  case 4: ;
  case 5: ;
    fVar21 = (float10)((float)GEN_TOF(((float10)fVar1 + ((float10)fVar2 - (float10)fVar1) * fVar21))) -
             (float10)(*(float *)(gen_frame + 0x18)) * (float10)REFG(double, 0x1088108);
    goto LAB_00599040;
  case 6: ;
  case 7: ;
  case 8: ;
    fVar21 = ((float10)GEN_TOD((*(float * PTR32 *)&gen_args[2])[3])) - (float10)(*(float *)(gen_frame + 0x18));
LAB_00599040: ;
    (*(float *)(gen_frame + 0x60)) = (float)fVar21;
  }
  if (((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9c))) & 0x2000000) != 0) &&
     ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x148))) & 2) != 0)) {
    uVar14 = F_00570a20(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x13c))) GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(uint *)&gen_args[3]));
    uVar17 = uVar14 & 0xffff;
    (*(uint *)(gen_frame + 0x38)) = uVar17;
    if ((short)uVar14 != 0) {
      (*(float *)(gen_frame + 0x14)) = 0.0;
      (*(float *)(gen_frame + 0x18)) = 0.0;
      (*(undefined * PTR32 *)(gen_frame + 0x58)) = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0))) + 0x2c)));
      (*(uint *)&gen_args[3]) = 0;
      if ((*(uint *)&gen_args[4]) != 0) {
        (*(float *)(gen_frame + 0x14)) = *(float *)(*(uint *)&gen_args[4]);
        (*(float *)(gen_frame + 0x18)) = *(float *)((*(uint *)&gen_args[4]) + 4);
      }
      (*(uint *)(gen_frame + 0x4c)) = 0;
      if (uVar17 != 0xffffffff) {
        (*(uint *)(gen_frame + 0x40)) = 0;
        (*(int *)(gen_frame + 0x30)) = 0;
        do {
          pvVar12 = (*(undefined * PTR32 *)(gen_frame + 0x58));
          (*(uint *)(gen_frame + 0x54)) = 0;
          (*(uint *)(gen_frame + 0x50)) = 0;
          F_00c48350((*(undefined * PTR32 *)(gen_frame + 0x58)),0,0x2000);
          if ((short)(*(uint *)(gen_frame + 0x4c)) == (short)(*(uint *)(gen_frame + 0x38))) {
            F_00c4d9ef(pvVar12,0x2000,uVar16,0xffffffff);
          }
          else {
            if (((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9c))) & 0x2000000) == 0) ||
               ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x148))) & 2) == 0)) {
              (*(uint *)(gen_frame + 0x54)) = 0;
            }
            else {
              uVar14 = F_00570aa0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x13c))) GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),uVar16,
                                    &(*(uint *)(gen_frame + 0x50)));
              (*(uint *)(gen_frame + 0x54)) = uVar14;
            }
            F_00c46aa0(pvVar12,uVar16,(*(uint *)(gen_frame + 0x54)) - uVar16);
          }
          bVar3 = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x148)));
          (*(int *)(gen_frame + 0x34)) = REFG(int, 0x108cc50);
          (*(float *)(gen_frame + 0xc)) = REFG(float, 0x10a0da0);
          if ((bVar3 & 2) != 0) {
            iVar18 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x13c)));
            if ((*(undefined * PTR32 *)(gen_frame + 0x58)) == (undefined *)0x0) {
              (*(float *)(gen_frame + 0xc)) = 0.0;
            }
            else {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(iVar18 + 0x144) + 0x24))))(iVar18 + 0x144 GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[0]),(*(undefined * PTR32 *)(gen_frame + 0x58)));
              F_0056fce0((undefined *)(iVar18 + 0x144) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),(*(undefined * PTR32 *)(gen_frame + 0x58)),0,(*(int *)(gen_frame + 0x34)),0);
              (*(float *)(gen_frame + 0xc)) = *(float *)(iVar18 + 0x284);
            }
          }
          uVar14 = (*(uint *)(gen_frame + 0x5c));
          uVar16 = (*(uint *)(gen_frame + 0x48));
          switch((unsigned int)(uintptr_t)((undefined4)gen_fl2bits((*(float * PTR32 *)&gen_args[2])[4]))) {
          case 0: ;
          case 3: ;
          case 6: ;
            (*(float *)(gen_frame + 0x64)) = *(*(float * PTR32 *)&gen_args[2]);
            break;
          case 1: ;
          case 4: ;
          case 7: ;
            fVar21 = (float10)(*(float *)(gen_frame + 0x3c)) - (float10)(*(float *)(gen_frame + 0xc)) * (float10)REFG(double, 0x1088108);
            goto LAB_005991fa;
          case 2: ;
          case 5: ;
          case 8: ;
            fVar21 = ((float10)GEN_TOD((*(float * PTR32 *)&gen_args[2])[2])) - (float10)(*(float *)(gen_frame + 0xc));
LAB_005991fa: ;
            (*(float *)(gen_frame + 0x64)) = (float)fVar21;
          }
          if ((*(uint *)&gen_args[4]) != 0) {
            (*(uint *)&gen_args[3]) = ((*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x18)) + 2)) & 1) << 0x18;
          }
          (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x48)) + 0)) = 0;
          (*(uint *)(gen_frame + 0x48)) = uVar16 & 0xffffff00;
          if (((*(char *)(gen_frame + 0x6b)) != '\0') &&
             ((fVar21 = (float10)(*(float *)(gen_frame + 0x44)) + (float10)(*(float *)(gen_frame + 0x60)),
              (!GEN_ISNAN((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x90)))) && !GEN_ISNAN(fVar21)) &&
              !((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x90))) <= fVar21) ||
              ((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x98))) < (float10)(*(float *)(gen_frame + 0x60)))))) {
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x48)) + 0)) = 1;
            (*(uint *)(gen_frame + 0x48)) = CONCAT31((int3)(uVar16 >> 8),1);
          }
          iVar18 = ((*(int *)&gen_args[5]) - (*(uint *)(gen_frame + 0x40))) - (*(uint *)(gen_frame + 0x5c));
          (*(int *)(gen_frame + 0x34)) = iVar18;
          piVar15 = &(*(int *)(gen_frame + 0x30));
          if (-1 < iVar18) {
            piVar15 = &(*(int *)(gen_frame + 0x34));
          }
          uVar16 = F_00595900(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x13c))) GEN_EDX_ARG,
                                *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xec))),(*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(float *)(gen_frame + 0x64)),
                                (*(float *)(gen_frame + 0x60)),(*(undefined * PTR32 *)(gen_frame + 0x58)),(*(uint *)&gen_args[4]),*piVar15,(*(uint *)&gen_args[6]) - (*(uint *)(gen_frame + 0x5c)),(*(uint *)(gen_frame + 0x48)));
          uVar14 = uVar14 + uVar16;
          (*(uint *)(gen_frame + 0x5c)) = uVar14;
          if (((*(uint *)&gen_args[6]) != 0) && ((*(uint *)&gen_args[6]) <= uVar14)) break;
          if ((*(uint *)&gen_args[4]) != 0) {
            iVar18 = ((*(uint *)(gen_frame + 0x50)) & 0xffff) + uVar16;
            (*(int *)(gen_frame + 0x34)) = iVar18;
            fVar21 = (float10)iVar18;
            if (iVar18 < 0) {
              fVar21 = fVar21 + (float10)*(float *)&REFG(undefined, 0x1088110);
            }
            (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x14)) - fVar21);
            if ((float10)(*(float *)(gen_frame + 0x14)) < (float10)0) {
              (*(float *)(gen_frame + 0x14)) = 0.0;
            }
            *(byte *)((*(uint *)&gen_args[4]) + 6) =
                 *(byte *)((*(uint *)&gen_args[4]) + 6) ^ (*(byte *)((*(uint *)&gen_args[4]) + 6) ^ (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x18)) + 2))) & 1;
            if ((*(undefined1 *)((char *)&(*(uint *)&gen_args[3]) + 3)) == '\0') {
              (*(float *)(gen_frame + 0x18)) = 0.0;
            }
          }
          if ((((*(char *)(gen_frame + 0x6a)) != '\0') && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xec))) != 0)) &&
             (iVar18 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x13c))), iVar18 != 0)) {
            *(uint *)(iVar18 + 0x978) = uVar13 - uVar14 & 0xffff;
            *(uint *)(iVar18 + 0x97c) = uVar19 - uVar14 & 0xffff;
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(iVar18 + 0x2ac) + 0x28))))(iVar18 + 0x2ac GEN_EDX_ARG,iVar18 + 0x974);
          }
          uVar16 = ((*(uint *)(gen_frame + 0x50)) & 0xffff) + (*(uint *)(gen_frame + 0x54));
          uVar14 = (*(uint *)(gen_frame + 0x4c)) + 1;
          (*(uint *)(gen_frame + 0x4c)) = uVar14;
          uVar14 = uVar14 & 0xffff;
          (*(float *)(gen_frame + 0x60)) = ((float)GEN_TOF((((float10)(float)fVar22 + (float10)(*(float *)(gen_frame + 0x44))) + (float10)(*(float *)(gen_frame + 0x60)))));
          (*(uint *)(gen_frame + 0x40)) = uVar14;
        } while (uVar14 < uVar17 + 1);
      }
      goto LAB_005993f5;
    }
  }
  switch((unsigned int)(uintptr_t)((undefined4)gen_fl2bits((*(float * PTR32 *)&gen_args[2])[4]))) {
  case 0: ;
  case 3: ;
  case 6: ;
    (*(float *)(gen_frame + 0x64)) = *(*(float * PTR32 *)&gen_args[2]);
    break;
  case 1: ;
  case 4: ;
  case 7: ;
    fVar21 = (float10)(*(float *)(gen_frame + 0x3c)) - (float10)(*(float *)(gen_frame + 0x14)) * (float10)REFG(double, 0x1088108);
    goto LAB_00599395;
  case 2: ;
  case 5: ;
  case 8: ;
    fVar21 = ((float10)GEN_TOD((*(float * PTR32 *)&gen_args[2])[2])) - (float10)(*(float *)(gen_frame + 0x14));
LAB_00599395: ;
    (*(float *)(gen_frame + 0x64)) = (float)fVar21;
  }
  dVar10 = (GEN_X87MATH(((double)(*(float *)(gen_frame + 0x60))),0xd));
  dVar11 = (GEN_X87MATH(((double)(*(float *)(gen_frame + 0x64))),0xd));
  uVar16 = F_00595900(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x13c))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xec))),
                        (*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(float)dVar11,(float)dVar10,(*(uint *)&gen_args[3]),(*(uint *)&gen_args[4]),(*(int *)&gen_args[5]),(*(uint *)&gen_args[6]),
                        0);
  (*(uint *)(gen_frame + 0x5c)) = uVar16;
LAB_005993f5: ;
  uVar16 = (*(uint *)(gen_frame + 0x5c));
  if ((*(char *)(gen_frame + 0x6b)) != '\0') {
    F_0056fb50((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0);
  }
  if ((((*(char *)(gen_frame + 0x6a)) != '\0') && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xec))) != 0)) &&
     (iVar18 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x13c))), iVar18 != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(iVar18 + 0x2ac) + 0x28))))(iVar18 + 0x2ac GEN_EDX_ARG,iVar18 + 0x970);
  }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x8c))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x90))) = uVar5;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x94))) = uVar6;
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9c))) =
       *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9c))) ^
       ((uVar8 >> 0x15 & 1) << 0x15 ^ *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9c)))) & 0x200000;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x98))) = uVar7;
  return uVar16;
}

/* ref: FUN_005994d0 */
GEN_FRAME uint GEN_THISCALL F_005994d0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x5994d0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  uint uVar1;
  
  uVar1 = F_00598790(param_1 GEN_EDX_FWD,1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00599500 */
GEN_FRAME uint GEN_THISCALL F_00599500(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x599500u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  uint uVar1;
  
  uVar1 = F_00598790(param_1 GEN_EDX_FWD,1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00599530 */
GEN_FRAME uint GEN_THISCALL F_00599530(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x599530u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  uint uVar1;
  
  uVar1 = F_00598790(param_1 GEN_EDX_FWD,0,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00599560 */
GEN_FRAME uint GEN_THISCALL F_00599560(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x599560u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  uint param_4 = (uint)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00598be0(param_1 GEN_EDX_FWD,1,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00599590 */
GEN_FRAME uint GEN_THISCALL F_00599590(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x599590u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  uint param_4 = (uint)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00598be0(param_1 GEN_EDX_FWD,1,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_005995c0 */
GEN_FRAME uint GEN_THISCALL F_005995c0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5995c0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  uint param_4 = (uint)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00598be0(param_1 GEN_EDX_FWD,0,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_005995f0 */
GEN_FRAME uint GEN_THISCALL F_005995f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x5995f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = F_00598e00(this GEN_EDX_FWD,1,param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00599620 */
GEN_FRAME uint GEN_THISCALL F_00599620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x599620u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = F_00598e00(this GEN_EDX_FWD,1,param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00599650 */
GEN_FRAME uint GEN_THISCALL F_00599650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x599650u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = F_00598e00(this GEN_EDX_FWD,0,param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00599680 */
GEN_FRAME uint GEN_THISCALL F_00599680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x599680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  int * piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined * this_00;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  F_0042cc20(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_FWD,"",REFG(undefined4, 0x108cc50));
  F_0042ccf0((undefined *)((int)this + 0x22270) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)));
  F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  F_0042cbc0(((char * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1);
  if (*((char * PTR32 *)(gen_frame + 0x0))[0] != '\0') {
    F_00595a60((undefined *)((int)this + 0x22244) GEN_EDX_ARG,((char * PTR32 *)(gen_frame + 0x0)));
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,"",REFG(undefined4, 0x108cc50));
  uVar3 = F_0056a440((undefined *)((int)this + 0x22244) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)));
  this_00 = (undefined *)((int)this + 0x22b38);
  F_0042aca0(this_00 GEN_EDX_ARG);
  iVar5 = (int)this + 0x22ae4;
  F_0042aca0(iVar5 GEN_EDX_ARG);
  piVar1 = *(int * PTR32 *)((int)this + 0xc);
  iVar2 = *piVar1;
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG,iVar5);
  ((code *)*(gen_code32 *)(iVar2 + 0xc))(*(undefined4 *)((int)this + 0xc),uVar3,uVar4);
  F_0042e360(this_00 GEN_EDX_ARG,iVar5);
  iVar5 = (int)*(short *)((int)this + 0x22266);
  uVar3 = F_0042a970(((char * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00572860((undefined *)((int)this + 0x22244) GEN_EDX_ARG,uVar3,iVar5,this_00);
  F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  uVar6 = F_0042c880(((char * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac) GEN_EDX_ARG);
  return (uint)uVar6;
}

/* ref: FUN_005997b0 */
GEN_FRAME uint GEN_THISCALL F_005997b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5997b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  ushort uVar1;
  int * this_00;
  int iVar2;
  undefined * this_01;
  byte bVar3;
  
  if (this == (undefined *)0x0) {
    return 0;
  }
  if ((param_1[1] & 1) == 0) {
    this_01 = *(undefined * PTR32 *)((int)this + 0x80);
    if ((this_01 != (undefined *)0x0) && (bVar3 = F_00557710(this_01 GEN_EDX_FWD,(uint)*param_1), bVar3 != 0)) {
      bVar3 = F_00598630(this_01 GEN_EDX_ARG,param_1,0);
      return (uint)(bVar3 != 0);
    }
  }
  else {
    uVar1 = *param_1;
    do {
      this_00 = *(int * PTR32 *)((int)this + 0x80);
      if (this_00 != (int *)0x0) {
        for (iVar2 = *this_00; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x10)) {
          if (*(byte *)(iVar2 + 0x14) == uVar1) {
            bVar3 = F_00598630(this_00 GEN_EDX_ARG,param_1,0);
            if (bVar3 != 0) {
              return 1;
            }
            break;
          }
        }
      }
      this = *(undefined * PTR32 *)((int)this + 8);
    } while (this != (undefined *)0x0);
  }
  return 0;
}

/* ref: FUN_00599860 */
GEN_FRAME uint GEN_THISCALL F_00599860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x599860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  ushort uVar1;
  int * piVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  ushort * puVar5;
  uint uVar6;
  
  if (this == (undefined *)0x0) {
    return 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0xf8);
  if ((piVar2 != (int *)0x0) && (piVar2[1] != 0)) {
    uVar6 = (uint)*param_1;
    (*(uint *)(gen_frame + 0x4c)) = uVar6;
    if ((uVar6 == 9) || (uVar6 == 5)) {
      (*(uint *)(gen_frame + 0x58)) = (int)*(float *)((int)this + 0x30) & 0xffff;
      (*(uint *)(gen_frame + 0x54)) = (int)*(float *)((int)this + 0x34) & 0xffff;
      if ((*(byte *)((int)this + 0xff) & 1) != 0) {
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x58)) + 0)) = (ushort)(int)*(float *)((int)this + 0x30);
        uVar1 = (ushort)(*(uint *)(gen_frame + 0x58)) + *(short *)((int)this + 0x10c);
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x58)) + 0)) = uVar1;
        (*(uint *)(gen_frame + 0x58)) = (uint)uVar1;
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x54)) + 0)) = (ushort)(int)*(float *)((int)this + 0x34);
        uVar1 = (ushort)(*(uint *)(gen_frame + 0x54)) + *(short *)((int)this + 0x10e);
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x54)) + 0)) = uVar1;
        (*(uint *)(gen_frame + 0x54)) = (uint)uVar1;
      }
      puVar3 = (undefined4 *)*piVar2;
      puVar4 = (undefined4 *)*puVar3;
      (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = puVar3;
      puVar5 = param_1;
      do {
        if (puVar4 == puVar3) {
          if (*(short *)((int)this + 0x118) < 0) {
            return 0;
          }
          (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 0)) = 0x44;
          (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 2)) = 0;
          (*(undefined4 *)(gen_frame + 0xc)) = 0x44;
          (*(ushort * PTR32 *)(gen_frame + 0x14)) = (ushort *)0x0;
          (*(undefined4 *)(gen_frame + 0x18)) = 0;
          (*(undefined4 *)(gen_frame + 0x1c)) = 0;
          (*(undefined4 *)(gen_frame + 0x20)) = 0;
          (*(undefined4 *)(gen_frame + 0x24)) = 0;
          (*(undefined4 *)(gen_frame + 0x28)) = 0;
          (*(ushort * PTR32 *)(gen_frame + 0x14)) = puVar5;
          F_00599860(this GEN_EDX_FWD,(ushort *)&(*(undefined4 *)(gen_frame + 0xc)));
          *(undefined2 *)((int)this + 0x118) = 0xffff;
          return 0;
        }
        puVar5 = (ushort *)puVar4[2];
        if (puVar5[0xf] != 1) {
          if ((*(int *)puVar5 + (int)(short)(ushort)(*(uint *)(gen_frame + 0x58)) <= (int)(short)param_1[4]) &&
             ((int)(short)param_1[4] <= *(int *)(puVar5 + 4) + (int)(short)(ushort)(*(uint *)(gen_frame + 0x58)))) {
            if ((*(int *)(puVar5 + 2) + (int)(short)(ushort)(*(uint *)(gen_frame + 0x54)) <= (int)(short)param_1[5]) &&
               ((int)(short)param_1[5] <= *(int *)(puVar5 + 6) + (int)(short)(ushort)(*(uint *)(gen_frame + 0x54)))) {
              if (*param_1 == 9) {
                (*(ushort * PTR32 *)(gen_frame + 0x34)) = (ushort *)0x0;
                (*(undefined4 *)(gen_frame + 0x38)) = 0;
                (*(undefined4 *)(gen_frame + 0x3c)) = 0;
                (*(undefined4 *)(gen_frame + 0x40)) = 0;
                (*(undefined4 *)(gen_frame + 0x44)) = 0;
                (*(undefined4 *)(gen_frame + 0x48)) = 0;
                ((undefined4 *)(gen_frame + 0x2c))[0] = 0x42;
                (*(ushort * PTR32 *)(gen_frame + 0x34)) = puVar5;
                F_00599860(this GEN_EDX_ARG,(ushort *)((undefined4 *)(gen_frame + 0x2c)));
                return 1;
              }
              if (*(ushort *)((int)this + 0x118) == puVar5[0xc]) {
                return 0;
              }
              if (-1 < (short)*(ushort *)((int)this + 0x118)) {
                (*(ushort * PTR32 *)(gen_frame + 0x34)) = (ushort *)0x0;
                (*(undefined4 *)(gen_frame + 0x38)) = 0;
                (*(undefined4 *)(gen_frame + 0x3c)) = 0;
                (*(undefined4 *)(gen_frame + 0x40)) = 0;
                (*(undefined4 *)(gen_frame + 0x44)) = 0;
                (*(undefined4 *)(gen_frame + 0x48)) = 0;
                ((undefined4 *)(gen_frame + 0x2c))[0] = 0x44;
                (*(ushort * PTR32 *)(gen_frame + 0x34)) = puVar5;
                F_00599860(this GEN_EDX_ARG,(ushort *)((undefined4 *)(gen_frame + 0x2c)));
              }
              (*(ushort * PTR32 *)(gen_frame + 0x14)) = (ushort *)0x0;
              (*(undefined4 *)(gen_frame + 0x18)) = 0;
              (*(undefined4 *)(gen_frame + 0x1c)) = 0;
              (*(undefined4 *)(gen_frame + 0x20)) = 0;
              (*(undefined4 *)(gen_frame + 0x24)) = 0;
              (*(undefined4 *)(gen_frame + 0x28)) = 0;
              (*(undefined4 *)(gen_frame + 0xc)) = 0x43;
              (*(ushort * PTR32 *)(gen_frame + 0x14)) = puVar5;
              F_00599860(this GEN_EDX_ARG,(ushort *)&(*(undefined4 *)(gen_frame + 0xc)));
              *(ushort *)((int)this + 0x118) = puVar5[0xc];
              return 0;
            }
          }
        }
        puVar4 = (undefined4 *)*puVar4;
      } while( true );
    }
  }
  uVar6 = F_005997b0(this GEN_EDX_ARG,param_1);
  return uVar6;
}

/* ref: Component::GUI2::AtkTextNodeRenderer::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_00599a60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x599a60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  double dVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined4 * puVar14;
  undefined4 * puVar15;
  undefined4 * puVar16;
  float10 fVar17;
  
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = this;
  iVar10 = (uint)(*(byte *)(param_1 + 0xfc) >> 4) * 0x150 + **(int * PTR32 *)(this + 4);
  puVar16 = (undefined4 *)(iVar10 + 100);
  (*(int *)(gen_frame + 0x38)) = iVar10;
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar16;
  (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = (undefined4 *)(iVar10 + 0xa8);
  puVar14 = puVar16;
  puVar15 = (undefined4 *)(iVar10 + 0xa8);
  for (iVar13 = 0x11; iVar13 != 0; iVar13 = iVar13 - 1) {
    *puVar15 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar15 = puVar15 + 1;
  }
  *puVar16 = 1;
  fVar2 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x20) * (float10)*(float *)(param_1 + 0x20) +
                 (float10)*(float *)(param_1 + 0x24) * (float10)*(float *)(param_1 + 0x24))));
  (*(float *)(gen_frame + 0x30)) = fVar2;
  fVar2 = ((float)GEN_TOF(SQRT((float10)fVar2)));
  (*(float *)(gen_frame + 0x30)) = fVar2;
  (*(float *)(gen_frame + 0x0)) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x28) * (float10)*(float *)(param_1 + 0x28) +
                 (float10)*(float *)(param_1 + 0x2c) * (float10)*(float *)(param_1 + 0x2c))));
  (*(float *)(gen_frame + 0x30)) = fVar3;
  fVar3 = ((float)GEN_TOF(SQRT((float10)fVar3)));
  (*(float *)(gen_frame + 0x30)) = fVar3;
  (*(float *)(gen_frame + 0x4)) = fVar3;
  (*(float *)(gen_frame + 0x30)) = gen_bits2f((uint)*(byte *)(param_1 + 0xfd));
  *(float *)(iVar10 + 0x68) = ((float)GEN_TOF(((float10)*(byte *)(param_1 + 0xfd) * (float10)fVar2)));
  (*(float *)(gen_frame + 0x30)) = gen_bits2f((uint)*(byte *)(param_1 + 0xfd));
  *(float *)(iVar10 + 0x6c) = ((float)GEN_TOF(((float10)fVar3 * (float10)*(byte *)(param_1 + 0xfd))));
  *(undefined4 *)(iVar10 + 0x78) = *(undefined4 *)(param_1 + 0x60);
  uVar12 = *(uint *)(param_1 + 0x84);
  *(float *)(iVar10 + 0x7c) = fVar3;
  *(uint *)(iVar10 + 0x9c) =
       *(uint *)(iVar10 + 0x9c) ^ ((uVar12 >> 0x1e) << 0x1a ^ *(uint *)(iVar10 + 0x9c)) & 0x4000000;
  iVar13 = (uint)*(byte *)(param_1 + 0x93) * (uint)*(byte *)(param_1 + 0x67);
  (*(float *)((char *)&(*(longlong *)(gen_frame + 0x28)) + 4)) = gen_bits2f(iVar13);
  (*(float *)(gen_frame + 0x30)) = gen_bits2f(gen_x87_cw | 0xc00);
  lVar1 = (longlong)TRUNC((double)iVar13 / *(double *)&REFG(undefined, 0x1088100));
  (*(longlong *)(gen_frame + 0x28)) = lVar1;
  lVar1 = (*(longlong *)(gen_frame + 0x28));
  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x28)) + 0)) = (int)lVar1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = ((undefined4 *)GEN_TOP(((int)(*(longlong *)(gen_frame + 0x28)) << 0x18 | *(uint *)(param_1 + 0x90) & 0xffffff)));
  (*(longlong *)(gen_frame + 0x28)) = lVar1;
  F_00571440(&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)),param_1);
  *(undefined4 * PTR32 *)(iVar10 + 0x80) = (*(undefined4 * PTR32 *)(gen_frame + 0x3c));
  dVar9 = *(double *)&REFG(undefined, 0x1088100);
  iVar13 = ((uint)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) >> 0x18) * ((uint)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) >> 0x18);
  (*(float *)((char *)&(*(longlong *)(gen_frame + 0x28)) + 4)) = gen_bits2f(iVar13);
  (*(undefined2 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)) + 2)) = gen_x87_cw;
  (*(float *)(gen_frame + 0x30)) = gen_bits2f(gen_x87_cw | 0xc00);
  iVar13 = (int)TRUNC((double)iVar13 / *(double *)&REFG(undefined, 0x1088100));
  (*(float *)(gen_frame + 0x30)) = gen_bits2f(iVar13);
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x30)) + 0)) = (undefined1)iVar13;
  *(undefined1 *)(iVar10 + 0xa6) = (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x30)) + 0));
  iVar13 = (uint)*(byte *)(param_1 + 0x9b) * (uint)*(byte *)(param_1 + 0x67);
  (*(float *)((char *)&(*(longlong *)(gen_frame + 0x28)) + 4)) = gen_bits2f(iVar13);
  (*(float *)(gen_frame + 0x30)) = gen_bits2f(gen_x87_cw | 0xc00);
  lVar1 = (longlong)TRUNC((double)iVar13 / dVar9);
  (*(longlong *)(gen_frame + 0x28)) = lVar1;
  lVar1 = (*(longlong *)(gen_frame + 0x28));
  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x28)) + 0)) = (int)lVar1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = ((undefined4 *)GEN_TOP(((int)(*(longlong *)(gen_frame + 0x28)) << 0x18 | *(uint *)(param_1 + 0x98) & 0xffffff)));
  (*(longlong *)(gen_frame + 0x28)) = lVar1;
  F_00571440(&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)),param_1);
  *(undefined4 * PTR32 *)(iVar10 + 0x88) = (*(undefined4 * PTR32 *)(gen_frame + 0x3c));
  *(uint *)(iVar10 + 0x9c) =
       *(uint *)(iVar10 + 0x9c) ^
       ((uint)*(byte *)(param_1 + 0xfe) << 0xd ^ *(uint *)(iVar10 + 0x9c)) & 0x10000;
  *(uint *)(iVar10 + 0x9c) =
       ((uint)*(byte *)(param_1 + 0xfe) << 0xd ^ *(uint *)(iVar10 + 0x9c)) & 0x20000 ^
       *(uint *)(iVar10 + 0x9c);
  iVar13 = (uint)*(byte *)(param_1 + 0x97) * (uint)*(byte *)(param_1 + 0x67);
  (*(float *)((char *)&(*(longlong *)(gen_frame + 0x28)) + 4)) = gen_bits2f(iVar13);
  (*(undefined2 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)) + 2)) = gen_x87_cw;
  (*(float *)(gen_frame + 0x30)) = gen_bits2f(gen_x87_cw | 0xc00);
  lVar1 = (longlong)TRUNC((double)iVar13 / *(double *)&REFG(undefined, 0x1088100));
  (*(longlong *)(gen_frame + 0x28)) = lVar1;
  lVar1 = (*(longlong *)(gen_frame + 0x28));
  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x28)) + 0)) = (int)lVar1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = ((undefined4 *)GEN_TOP(((int)(*(longlong *)(gen_frame + 0x28)) << 0x18 | *(uint *)(param_1 + 0x94) & 0xffffff)));
  (*(longlong *)(gen_frame + 0x28)) = lVar1;
  F_00571440(&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)),param_1);
  uVar12 = *(uint *)(iVar10 + 0x9c);
  *(undefined4 * PTR32 *)(iVar10 + 0x84) = (*(undefined4 * PTR32 *)(gen_frame + 0x3c));
  uVar11 = (*(byte *)(param_1 + 0xff) & 8) << 0x18;
  *(uint *)(iVar10 + 0x9c) = uVar11 | uVar12 & 0xf7fbffff;
  *(uint *)(iVar10 + 0x9c) =
       (*(byte *)(param_1 + 0xfe) & 0x20) << 0xe | uVar11 | uVar12 & 0xf7d3ffff;
  *(ushort *)(iVar10 + 0x9c) =
       (*((short *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x34)) + 8) + 0x2c))) -
       ((ushort)((uint)*(undefined4 *)(param_1 + 0x88) >> 0x14) & 1)) * 0x40;
  *(uint *)(iVar10 + 0x9c) =
       *(uint *)(iVar10 + 0x9c) ^
       ((uint)*(byte *)(param_1 + 0xfe) << 0x16 ^ *(uint *)(iVar10 + 0x9c)) & 0x800000;
  uVar12 = ((uint)*(byte *)(param_1 + 0xfe) << 0x16 ^ *(uint *)(iVar10 + 0x9c)) & 0x1000000 ^
           *(uint *)(iVar10 + 0x9c);
  *(uint *)(iVar10 + 0x9c) = uVar12;
  *(uint *)(iVar10 + 0x9c) = (*(byte *)(param_1 + 0xfe) & 0xffffff80) << 0x12 | uVar12 & 0xfdffffff;
  *(undefined1 *)(iVar10 + 0xa4) = *(undefined1 *)(param_1 + 0x115);
  *(undefined1 *)(iVar10 + 0xa5) = *(undefined1 *)(param_1 + 0x116);
  if (*(uint *)(param_1 + 0x108) < *(uint *)(param_1 + 0x104)) {
    *(undefined2 *)(iVar10 + 0xa0) = *(undefined2 *)(param_1 + 0x108);
    *(short *)(iVar10 + 0xa2) = *(short *)(param_1 + 0x104) - *(short *)(param_1 + 0x108);
  }
  else {
    *(short *)(iVar10 + 0xa0) = (short)*(uint *)(param_1 + 0x104);
    *(short *)(iVar10 + 0xa2) = *(short *)(param_1 + 0x108) - *(short *)(param_1 + 0x104);
  }
  uVar7 = *(ushort *)(param_1 + 0x7c);
  uVar8 = *(ushort *)(param_1 + 0x7e);
  fVar2 = *(float *)(param_1 + 0x30);
  fVar3 = *(float *)(param_1 + 0x34);
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (undefined4 *)(uint)uVar7;
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (undefined4 *)(uint)uVar8;
  (*(float *)(gen_frame + 0x30)) = fVar2;
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar3)));
  fVar4 = (float)((float10)uVar7 * (float10)(*(float *)(gen_frame + 0x0)));
  (*(float *)((char *)&(*(longlong *)(gen_frame + 0x28)) + 4)) = fVar4;
  (*(longlong *)(gen_frame + 0x28)) = CONCAT44((uint)gen_fl2bits(fVar4),(int)(*(longlong *)(gen_frame + 0x28)));
  fVar5 = (float)((float10)uVar8 * (float10)(*(float *)(gen_frame + 0x4)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(fVar5)));
  fVar17 = (float10)fVar5;
  if ((uVar7 != 0) && (uVar8 != 0)) {
    *(uint *)(iVar10 + 0x9c) = *(uint *)(iVar10 + 0x9c) | 0x200000;
    *(float *)(iVar10 + 0x8c) = fVar2;
    *(float *)(iVar10 + 0x90) = fVar3;
    *(float *)(iVar10 + 0x94) = (float)((float10)fVar4 + (float10)fVar2);
    *(float *)(iVar10 + 0x98) = (float)(fVar17 + (float10)fVar3);
  }
  bVar6 = *(byte *)(param_1 + 0xfc);
  (*(byte *)(gen_frame + 0x14)) = (*(byte *)(gen_frame + 0x14)) & 0xfe;
  (*(float *)(gen_frame + 0x8)) = (float)((float10)fVar4 + (float10)fVar2);
  (*(float *)(gen_frame + 0x0)) = fVar2;
  (*(float *)(gen_frame + 0x4)) = fVar3;
  (*(uint *)(gen_frame + 0x10)) = bVar6 & 0xf;
  (*(float *)(gen_frame + 0xc)) = (float)((float10)fVar3 + fVar17);
  F_005c4fe0((undefined *)((*(int *)(gen_frame + 0x38)) + 0xf4) GEN_EDX_ARG);
  F_005c4fe0((undefined *)((*(int *)(gen_frame + 0x38)) + 0x10c) GEN_EDX_ARG);
  F_005d0ee0((undefined *)((*(int *)(gen_frame + 0x38)) + 0xf4) GEN_EDX_ARG,(*(int *)(gen_frame + 0x38)) + 0x80);
  F_005d0ee0((undefined *)((*(int *)(gen_frame + 0x38)) + 0x10c) GEN_EDX_ARG,(*(int *)(gen_frame + 0x38)) + 0x84);
  F_005c5100((undefined *)((*(int *)(gen_frame + 0x38)) + 0x124) GEN_EDX_ARG);
  bVar6 = *(byte *)((*(int *)(gen_frame + 0x38)) + 0x9e);
  (*(undefined1 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)) + 3)) = bVar6 & 1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = ((undefined4 *)GEN_TOP((CONCAT13(bVar6,GEN_PIECE(&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)), 0, 3)) & 0x1ffffff)));
  F_005d0f60((undefined *)((*(int *)(gen_frame + 0x38)) + 0x124) GEN_EDX_ARG,(int)&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)) + 3);
  if ((*(byte *)(param_1 + 0xff) & 1) == 0) {
    uVar12 = F_00598e00((*(int *)(gen_frame + 0x38)) GEN_EDX_ARG,1,&(*(float *)(gen_frame + 0x0)),*(uint *)(param_1 + 0xf0),0,
                          *(undefined4 *)(param_1 + 0x110),(uint)*(ushort *)(param_1 + 0x102));
  }
  else {
    (*(float *)((char *)&(*(longlong *)(gen_frame + 0x28)) + 4)) = gen_bits2f((int)*(short *)(param_1 + 0x10e));
    fVar2 = ((float)GEN_TOF(((float10)(int)*(short *)(param_1 + 0x10e) + (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x34))))))));
    (*(float *)((char *)&(*(longlong *)(gen_frame + 0x28)) + 4)) = fVar2;
    (*(float *)((char *)&(*(longlong *)(gen_frame + 0x28)) + 4)) = gen_bits2f((int)*(short *)(param_1 + 0x10c));
    fVar3 = ((float)GEN_TOF(((float10)(int)*(short *)(param_1 + 0x10c) + (float10)(*(float *)(gen_frame + 0x30)))));
    (*(float *)((char *)&(*(longlong *)(gen_frame + 0x28)) + 4)) = fVar3;
    (*(longlong *)(gen_frame + 0x28)) = CONCAT44((uint)gen_fl2bits(fVar3),(int)(*(longlong *)(gen_frame + 0x28)));
    uVar12 = F_00598790((*(int *)(gen_frame + 0x38)) GEN_EDX_ARG,1,fVar3,fVar2,*(undefined4 *)(param_1 + 0xf0),0,
                          *(undefined4 *)(param_1 + 0x110),(uint)*(ushort *)(param_1 + 0x102));
  }
  puVar14 = (*(undefined4 * PTR32 *)(gen_frame + 0x24));
  for (iVar10 = 0x11; iVar10 != 0; iVar10 = iVar10 - 1) {
    *puVar16 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar16 = puVar16 + 1;
  }
  return uVar12;
}

/* ref: FUN_00599f80 */
GEN_FRAME uint GEN_THISCALL F_00599f80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x599f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)((int)this + 0x23c);
  if (iVar2 != 0) {
    do {
      if ((ushort)*(byte *)(iVar2 + 0x14) == *param_1) {
        if ((*(short *)((int)this + 0x1e8) == 0) && (*(short *)((int)this + 0x1ea) == 0)) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
        bVar1 = F_00598630((undefined *)((int)this + 0x23c) GEN_EDX_FWD,param_1,uVar3);
        if (bVar1 == 0) {
          return 0;
        }
        return 1;
      }
      iVar2 = *(int *)(iVar2 + 0x10);
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00599ff0 */
GEN_NOFRAME uint GEN_THISCALL F_00599ff0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x599ff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  uint uVar2;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1379860) + 0x14) + 0x2c))))
            (*(int * PTR32 *)(REFG(int, 0x1379860) + 0x14) GEN_EDX_ARG,(uint)*(byte *)((int)this + 0x13a),
             *((undefined4 *)GEN_TOP((*(int *)(REFG(int, 0x1379860) + 0x20) + 0x10))),
             *((undefined4 *)GEN_TOP((*(int *)(REFG(int, 0x1379860) + 0x20) + 0x1c))),0);
  if (*(int *)((int)this + 0x90) != 0) {
    F_0056b3e0(this GEN_EDX_ARG);
  }
  if ((*(char *)((int)this + 0x13c) == '\0') || ((*(byte *)((int)this + 0xfb) & 2) != 0)) {
    cVar1 = '\x01';
  }
  else {
    cVar1 = '\0';
  }
  *(byte *)((int)this + 0xf8) =
       *(byte *)((int)this + 0xf8) ^ (cVar1 * '\x04' ^ *(byte *)((int)this + 0xf8)) & 4;
  uVar2 = F_005965f0(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_0059a060 */
GEN_NOFRAME byte GEN_THISCALL F_0059a060(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x59a060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if (*(int *)((int)this + 0x90) != 0) {
    F_005876c0(this GEN_EDX_FWD);
    F_00596830(this GEN_EDX_ARG);
  }
  bVar1 = *(byte *)((int)this + 0xf8);
  *(byte *)((int)this + 0xf8) = (~bVar1 * '\x02' ^ bVar1) & 2 ^ bVar1;
  return bVar1;
}

/* ref: FUN_0059a0a0 */
GEN_NOFRAME byte GEN_THISCALL F_0059a0a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x59a0a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)((int)this + 0xf4);
  uVar3 = uVar1 >> 0x18 & 0xf;
  uVar2 = uVar1 >> 0x14 & 0xf;
  if ((uVar3 != uVar2) && (uVar2 != 2)) {
    *(uint *)((int)this + 0xf4) = (uVar2 << 0x18 ^ uVar1) & 0xf000000 ^ uVar1;
  }
  if (uVar2 == 2) {
    if ((byte)(*(uint *)((int)this + 0xf4) >> 0x1c) == 2) {
      if (uVar3 != 2) {
        *(uint *)((int)this + 0xf4) = *(uint *)((int)this + 0xf4) & 0xf2ffffff | 0x2000000;
        F_00599ff0(this GEN_EDX_FWD);
      }
      if (*(int *)((int)this + 0xb4) != 1) {
        *(uint *)((int)this + 0xf4) = *(uint *)((int)this + 0xf4) & 0xff3fffff | 0x300000;
      }
    }
  }
  else if (uVar2 == 4) {
    if (uVar3 != uVar2) {
      F_0059a060(this GEN_EDX_ARG);
    }
    if (*(int *)((int)this + 0xb4) != 1) {
      *(uint *)((int)this + 0xf4) = *(uint *)((int)this + 0xf4) & 0xff5fffff | 0x500000;
      return 0;
    }
  }
  else if (uVar2 == 5) {
    if (*(byte *)((int)this + 0x13d) != 0) {
      F_0057fe00(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14) GEN_EDX_ARG,(uint)*(byte *)((int)this + 0x13d),0,0);
      *(undefined1 *)((int)this + 0x13d) = 0;
    }
    *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) & 0xfb;
    if (((*(byte *)((int)this + 0xf8) & 2) != 0) && ((*(byte *)((int)this + 0xf8) & 0x40) == 0)) {
      return 1;
    }
  }
  return 0;
}

/* ref: Component::GUI2::AtkUnitBase::vf19 */
GEN_FRAME uint GEN_THISCALL F_0059a1d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x59a1d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  bool bVar2;
  uint uVar3;
  short sVar4;
  short sVar5;
  
  uVar1 = *(uint *)(this + 0x90);
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  uVar3 = 0;
  if (uVar1 != 0) {
    bVar2 = false;
    sVar4 = (short)param_1;
    sVar5 = (short)param_2;
    if ((*(short *)(uVar1 + 0x7c) != sVar4) || (*(short *)(uVar1 + 0x7e) != sVar5)) {
      bVar2 = true;
    }
    uVar3 = F_0057f1a0(uVar1,(uint)*(ushort *)(uVar1 + 0x7c),(uint)*(ushort *)(uVar1 + 0x7e),
                         param_1,param_2,1);
    if (bVar2) {
      (*(undefined2 *)(gen_frame + 0x8)) = 0x14;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(undefined2 *)(gen_frame + 0xa)) = 0;
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x10)) + 0)) = sVar4;
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x10)) + 2)) = sVar5;
      (*(undefined4 *)(gen_frame + 0x10)) = CONCAT22(sVar5,sVar4);
      uVar3 = F_005997b0(*(undefined * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x90) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x8)));
    }
  }
  return uVar3;
}

/* ref: FUN_0059a260 */
GEN_FRAME unsigned int GEN_THISCALL F_0059a260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x59a260u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined4 * puVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  
  iVar2 = (*(int *)&gen_args[1]);
  if ((*(int *)&gen_args[1]) != 0) {
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc))) == (*(int *)&gen_args[1])) {
      puVar1 = ((undefined4 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc0)))));
      while( true ) {
        if (puVar1 == *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc0)))) {
          F_005cd9e0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc0))) GEN_EDX_FWD,&(*(int *)&gen_args[1]));
          return;
        }
        if (puVar1[2] == (*(int *)&gen_args[1])) break;
        puVar1 = (undefined4 *)*puVar1;
      }
    }
    else {
      bVar4 = (byte)(*(undefined4 *)&gen_args[3]);
      F_00580230((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(int *)&gen_args[1]),0);
      if ((((char)(*(undefined4 *)&gen_args[2]) == '\0') && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc))) != iVar2)) &&
         (bVar3 = F_00596a60((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG), bVar4 == 0)) {
        bVar4 = bVar3;
      }
      F_00587d80((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,iVar2);
      if (bVar4 != 0) {
        F_0058ccd0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0);
      }
      F_00594a00((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    }
  }
  return;
}

/* ref: FUN_0059a2f0 */
GEN_FRAME uint GEN_THISCALL F_0059a2f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x59a2f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  uVar2 = F_0057f8d0(this GEN_EDX_FWD,param_1);
  if ((char)param_2 == '\0') {
    if (uVar2 == 0) goto LAB_0059a33b;
    if (*(uint *)((int)this + 0xcc) == uVar2) {
      bVar1 = F_00596a60(this GEN_EDX_ARG);
      return CONCAT31(extraout_var,bVar1);
    }
  }
  if ((uVar2 != 0) && ((*(byte *)(uVar2 + 0xfa) & 2) != 0)) {
    *(byte *)(uVar2 + 0xf8) = *(byte *)(uVar2 + 0xf8) | 0x80;
    uVar2 = F_00580230(this GEN_EDX_ARG,uVar2,0);
  }
LAB_0059a33b: ;
  return CONCAT31((int3)(uVar2 >> 8),1);
}

/* ref: FUN_0059a350 */
GEN_FRAME uint GEN_THISCALL F_0059a350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x59a350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  uint uVar1;
  
  this_00 = *(undefined * PTR32 *)((int)this + 4);
  (*(undefined2 *)(gen_frame + 0xc)) = 0x41;
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = (undefined2)param_1;
  (*(undefined2 *)(gen_frame + 0xe)) = 0;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 2)) = (undefined1)param_2;
  (*(uint *)(gen_frame + 0x14)) = (uint)CONCAT12((undefined1)param_2,(undefined2)param_1);
  uVar1 = F_005997b0(this_00 GEN_EDX_FWD,&(*(undefined2 *)(gen_frame + 0xc)));
  return uVar1;
}

/* ref: FUN_0059a3a0 */
GEN_FRAME byte GEN_THISCALL F_0059a3a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x59a3a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  int iVar2;
  
  if (param_1 != (undefined *)0x0) {
    pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x70) + 0x14))))(*(int * PTR32 *)((int)this + 0x70) GEN_EDX_FWD)))
    ;
    if ((param_1 != pvVar1) ||
       ((*(int *)((int)this + 0x78) != 0 &&
        (*((short *)GEN_TOP((*(int *)((int)this + 0x78) + 0x9c))) !=
         *((short *)GEN_TOP((*(int *)((int)this + 0x74) + 0x18))))))) {
      (*(undefined2 *)(gen_frame + 0xc)) = 0x31;
      (*(int *)(gen_frame + 0x14)) = 0;
      (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
      (*(uint *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined2 *)(gen_frame + 0xe)) = 0;
      if (*(int *)((int)this + 0x78) == 0) {
        iVar2 = *(int *)((int)this + 0x70);
      }
      else {
        iVar2 = *(int *)((int)this + 0x78) + 0x84;
      }
      (*(int *)(gen_frame + 0x14)) = iVar2;
      (*(undefined * PTR32 *)(gen_frame + 0x18)) = param_1;
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 0)) = *(undefined1 *)(param_2 + 6);
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 1)) = *(undefined1 *)(param_2 + 7);
      (*(uint *)(gen_frame + 0x1c)) = (uint)*(ushort *)(param_2 + 6);
      F_005997b0(param_1 GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0xc)));
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_0059a440 */
GEN_FRAME uint GEN_THISCALL F_0059a440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x59a440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  int * this_00;
  byte bVar1;
  int iVar2;
  
  this_00 = *(int * PTR32 *)((int)this + 4);
  if ((this_00 != (int *)0x0) && (iVar2 = *this_00, iVar2 != 0)) {
    do {
      if ((ushort)*(byte *)(iVar2 + 0x14) == *param_1) {
        bVar1 = F_00598630(this_00 GEN_EDX_FWD,param_1,0);
        if (bVar1 == 0) {
          return 0;
        }
        return 1;
      }
      iVar2 = *(int *)(iVar2 + 0x10);
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_0059a490 */
GEN_FRAME uint GEN_THISCALL F_0059a490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x59a490u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint * puVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar5 = param_2;
  if ((*(uint *)((int)this + 0x1c) <= param_2) &&
     ((param_2 != *(uint *)((int)this + 0x1c) || (*(uint *)((int)this + 0x18) <= param_1)))) {
    iVar2 = *(int *)((int)this + 8);
    if ((iVar2 == 0) || (*(int *)((int)this + 0xc) < iVar2)) {
      *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
      uVar3 = *(undefined4 *)((int)this + 0xc);
      (*(undefined2 *)(gen_frame + 0x1c)) = 0x3a;
      (*(int *)(gen_frame + 0x28)) = 0;
      (*(int *)(gen_frame + 0x28)) = iVar2;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(undefined4 *)(gen_frame + 0x2c)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(undefined4 *)(gen_frame + 0x34)) = 0;
      (*(undefined4 *)(gen_frame + 0x38)) = 0;
      (*(undefined2 *)(gen_frame + 0x1e)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = uVar3;
      F_0059a440(this GEN_EDX_FWD,&(*(undefined2 *)(gen_frame + 0x1c)));
      if (*(int *)((int)this + 8) <= *(int *)((int)this + 0xc)) {
        (*(undefined2 *)(gen_frame + 0x1c)) = 0x3b;
        F_0059a440(this GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x1c)));
      }
    }
    uVar5 = *(uint *)((int)this + 8);
    if ((uVar5 != 0) && ((int)uVar5 <= *(int *)((int)this + 0xc))) {
      *(undefined1 *)((int)this + 0x20) = 0;
      return uVar5;
    }
    uVar5 = *(uint *)((int)this + 0x14);
    uVar7 = param_4;
    uVar8 = param_3;
    if ((param_4 <= uVar5) &&
       ((uVar5 != param_4 ||
        (uVar7 = param_4, uVar8 = param_3, param_3 <= *(uint *)((int)this + 0x10))))) {
      uVar7 = uVar5;
      uVar8 = *(uint *)((int)this + 0x10);
    }
    if (uVar8 != 0 || uVar7 != 0) {
      uVar5 = *(uint *)((int)this + 0x18);
      uVar6 = uVar8 - uVar5;
      (*(ulonglong *)(gen_frame + 0x0)) = CONCAT44(((uVar7 - *(int *)((int)this + 0x1c)) - (uint)(uVar8 < uVar5)) + param_2
                            + (uint)CARRY4(uVar6,param_1),uVar6 + param_1);
      lVar4 = ((*(ulonglong *)(gen_frame + 0x0)) / CONCAT44(uVar7,uVar8)) * (longlong)CONCAT44(uVar7,uVar8);
      if (lVar4 != 0) {
        lVar4 = lVar4 + *(longlong *)((int)this + 0x18);
        *(longlong *)((int)this + 0x18) = lVar4;
        return (uint)((ulonglong)lVar4 >> 0x20);
      }
      uVar5 = 0;
    }
    puVar1 = (uint *)((int)this + 0x18);
    uVar7 = *puVar1;
    *puVar1 = *puVar1 + param_1;
    *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + param_2 + (uint)CARRY4(uVar7,param_1);
  }
  return uVar5;
}

/* ref: FUN_0059a5b0 */
GEN_FRAME uint GEN_THISCALL F_0059a5b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x59a5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  byte bVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x14);
  if (iVar2 != 0) {
    do {
      if ((ushort)*(byte *)(iVar2 + 0x14) == *param_1) {
        bVar1 = F_00598630((undefined *)((int)this + 0x14) GEN_EDX_FWD,param_1,0);
        if (bVar1 == 0) {
          return 0;
        }
        return 1;
      }
      iVar2 = *(int *)(iVar2 + 0x10);
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_0059a600 */
GEN_FRAME uint GEN_THISCALL F_0059a600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x59a600u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this;
  int iVar1;
  int * piVar2;
  float fVar3;
  uint uVar4;
  short * psVar5;
  undefined * this_00;
  uint uVar6;
  
  uVar4 = (*(uint *)&gen_args[1]) & 0xffff;
  if (uVar4 == 4) {
    *(undefined4 *)((*(uint *)&gen_args[0]) + 0x24) = 0;
    uVar4 = (*(uint *)&gen_args[0]);
    if ((*(uint *)&gen_args[0]) == 4) {
      uVar4 = 0;
    }
    F_00583770(((undefined *)GEN_TOP((*(int *)((*(uint *)&gen_args[0]) + 0x18) + 0x23c))) GEN_EDX_FWD,4,0,uVar4,0);
    uVar4 = F_00583770(((undefined *)GEN_TOP((*(int *)((*(uint *)&gen_args[0]) + 0x18) + 0x23c))) GEN_EDX_ARG,5,0,(*(uint *)&gen_args[0]),0);
    return uVar4;
  }
  if (uVar4 == 5) {
    psVar5 = (short *)0x0;
    if ((*(int *)((*(uint *)&gen_args[0]) + 0x24) != 0) && ((uVar4 = (int)*(*(short * PTR32 *)&gen_args[4]) - (int)*(short *)((*(uint *)&gen_args[0]) + 0x2c), uVar6 = (int)uVar4 >> 0x1f, 6 < (int)((uVar4 ^ uVar6) - uVar6) || (uVar4 = (int)(*(short * PTR32 *)&gen_args[4])[1] - (int)*(short *)((*(uint *)&gen_args[0]) + 0x2e), uVar6 = (int)uVar4 >> 0x1f, psVar5 = ((short *)GEN_TOP(((uVar4 ^ uVar6) - uVar6))), 6 < (int)psVar5)))) {
      F_00588f40((undefined *)((*(uint *)&gen_args[0]) - 4) GEN_EDX_ARG);
      iVar1 = *(int *)((*(uint *)&gen_args[0]) + 0x24);
      (*(undefined2 *)(gen_frame + 0x4)) = 0x2d;
      (*(undefined2 *)(gen_frame + 0x6)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(iVar1 + 8);
      F_0059a5b0((undefined *)((*(uint *)&gen_args[0]) - 4) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x4)));
      F_00560fd0((undefined *)((*(uint *)&gen_args[0]) - 4) GEN_EDX_ARG,*(undefined4 *)((*(uint *)&gen_args[0]) + 0x24));
      iVar1 = *((int *)GEN_TOP((*(int *)((*(uint *)&gen_args[0]) + 0x24) + 4)));
      uVar4 = *(uint *)(iVar1 + 0x90);
      (*(uint *)&gen_args[2]) = iVar1 + 0x24;
      (*(float *)(gen_frame + 0x28)) = *(float *)(iVar1 + 0xa0);
      if (uVar4 != 0) {
        (*(uint *)&gen_args[1]) = *(uint *)(uVar4 + 8);
        if (*(int *)(uVar4 + 0x10) == 0) {
          for (iVar1 = *(int *)(uVar4 + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
            F_0057f0d0((undefined *)(*(uint *)&gen_args[2]) GEN_EDX_ARG,iVar1,(*(uint *)&gen_args[1]),1);
          }
        }
        if ((((*(uint *)(uVar4 + 0x84) & 0x100000) != 0) || ((*(byte *)(uVar4 + 0x88) & 1) != 0)) || (((*(uint *)&gen_args[1]) != 0 && ((*(byte *)((*(uint *)&gen_args[1]) + 0x88) & 2) != 0)))) {
          if ((999 < *(ushort *)(uVar4 + 0x18)) && (*(int *)(uVar4 + 0x8c) != 0)) {
            this = ((undefined *)GEN_TOP((*(int *)(uVar4 + 0x8c) + 4)));
            this_00 = (undefined *)F_00578ee0(this GEN_EDX_ARG,0);
            if (this_00 != (undefined *)0x0) {
              F_0055a960(this_00 GEN_EDX_ARG,uVar4);
              F_0057f0d0(this GEN_EDX_ARG,((undefined4)(uint)(this_00)),(*(uint *)&gen_args[1]),1);
            }
          }
          F_0056a9b0(uVar4,(*(uint *)&gen_args[1]));
          F_0055d660(uVar4,(*(uint *)&gen_args[1]));
          if (*(int *)(uVar4 + 0x14) != 0) {
            F_0057f0d0((undefined *)(*(uint *)&gen_args[2]) GEN_EDX_ARG,*(int *)(uVar4 + 0x14),uVar4,1);
          }
        }
      }
      fVar3 = (*(float *)(gen_frame + 0x28));
      piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((*(uint *)&gen_args[0]) + 0x24) + 4)));
      iVar1 = piVar2[0x24];
      if (iVar1 != 0) {
        (*(float *)(gen_frame + 0x24)) = *(float *)(iVar1 + 0x30);
        (*(uint *)&gen_args[1]) = *(uint *)(iVar1 + 0x34);
      }
      if ((*(float *)(gen_frame + 0x28)) != 0.0) {
        (*(float *)(gen_frame + 0x28)) = *(float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x28))) + 0x30);
        (*(uint *)&gen_args[2]) = *(uint *)((int)gen_fl2bits(fVar3) + 0x34);
      }
      ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x2c)) (piVar2 GEN_EDX_ARG,(uint)(ushort)((short)(int)((float10)(*(float *)(gen_frame + 0x24)) - (float10)(*(float *)(gen_frame + 0x28))) + *(*(short * PTR32 *)&gen_args[4])) ,(uint)(ushort)((short)(int)(((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[1])))) - ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2]))))) + (*(short * PTR32 *)&gen_args[4])[1]));
      piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((*(uint *)&gen_args[0]) + 0x18) + 0x14)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)((*(uint *)&gen_args[0]) + 0x24) + 4))));
      *(undefined4 *)((*(uint *)&gen_args[0]) + 0x24) = 0;
      return uVar4;
    }
  }
  else {
    psVar5 = (short *)(uVar4 - 0x16);
    if (psVar5 == (short *)0x0) {
      for (psVar5 = *(short * PTR32 *)*(short * PTR32 *)((*(uint *)&gen_args[0]) + 4); psVar5 != *(short * PTR32 *)((*(uint *)&gen_args[0]) + 4);
          psVar5 = *(short * PTR32 *)psVar5) {
        iVar1 = *(int *)(psVar5 + 4);
        if (*(uint *)(iVar1 + 0x14) == (*(uint *)&gen_args[2])) {
          psVar5 = (*(short * PTR32 *)&gen_args[4]);
          if (((char)(*(short * PTR32 *)&gen_args[4])[3] == '\0') && ((*(byte *)(iVar1 + 0x2c) & 4) != 0)) {
            *(int *)((*(uint *)&gen_args[0]) + 0x24) = iVar1;
            *(short *)((*(uint *)&gen_args[0]) + 0x2c) = *(*(short * PTR32 *)&gen_args[4]);
            *(short *)((*(uint *)&gen_args[0]) + 0x2e) = (*(short * PTR32 *)&gen_args[4])[1];
            F_0056a3d0(*(undefined * PTR32 *)((*(uint *)&gen_args[0]) + 0x18) GEN_EDX_ARG,4,0,-(uint)((*(uint *)&gen_args[0]) != 4) & (*(uint *)&gen_args[0]),0,0);
            uVar4 = F_0056a3d0(*(undefined * PTR32 *)((*(uint *)&gen_args[0]) + 0x18) GEN_EDX_ARG,5,0,-(uint)((*(uint *)&gen_args[0]) != 4) & (*(uint *)&gen_args[0]),0,0) ;
            return uVar4;
          }
          break;
        }
      }
      if (*(int *)((*(uint *)&gen_args[0]) + 0x24) != 0) {
        *(undefined4 *)((*(uint *)&gen_args[0]) + 0x24) = 0;
        psVar5 = (short *)F_00588f40((undefined *)((*(uint *)&gen_args[0]) - 4) GEN_EDX_ARG);
      }
    }
  }
  return (uint)psVar5;
}

/* ref: FUN_0059a900 */
GEN_FRAME uint GEN_THISCALL F_0059a900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x59a900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  int * this_00;
  byte bVar1;
  int iVar2;
  
  this_00 = *(int * PTR32 *)((int)this + 0x28);
  if ((this_00 != (int *)0x0) && (iVar2 = *this_00, iVar2 != 0)) {
    do {
      if ((ushort)*(byte *)(iVar2 + 0x14) == *param_1) {
        bVar1 = F_00598630(this_00 GEN_EDX_FWD,param_1,0);
        if (bVar1 == 0) {
          return 0;
        }
        return 1;
      }
      iVar2 = *(int *)(iVar2 + 0x10);
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: Component::GUI2::AtkComponentTreeList::vf17 */
GEN_FRAME uint GEN_THISCALL F_0059a950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x59a950u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int * piVar1;
  int iVar2;
  undefined * this_00;
  undefined4 uVar3;
  double dVar4;
  bool bVar5;
  ushort uVar6;
  undefined * pvVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  
  if (((((byte)this[0x66] & 1) == 0) || (this[400] != (undefined1)0x0)) ||
     (this[0x11f] != (undefined1)0x0)) {
    return 0;
  }
  pvVar7 = *(undefined * PTR32 *)(this + 0x70);
  (*(int *)(gen_frame + 0x28)) = *(int *)(this + 0x148);
  *(undefined4 *)(this + 0xd8) = 0xffffffff;
  *(undefined4 *)(this + 0x148) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = pvVar7;
  if (pvVar7 != (undefined *)0x0) {
    (*(float *)(gen_frame + 0x3c)) = *(float *)((int)pvVar7 + 0x30);
    (*(int * PTR32 *)(gen_frame + 0x40)) = ((int *)(uintptr_t)gen_fl2bits((float)(*(float *)((int)pvVar7 + 0x34))));
  }
  uVar6 = F_005682d0(pvVar7 GEN_EDX_FWD);
  (*(int *)(gen_frame + 0x38)) = (int)(short)param_2;
  fVar10 = (float10)(int)(short)param_2;
  fVar11 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x40)))));
  if (!(fVar10 < fVar11)) {
    (*(int * PTR32 *)(gen_frame + 0x40)) = (int *)(int)(short)param_1;
    dVar4 = (double)(int)(short)param_1;
    (*(double *)(gen_frame + 0x2c)) = dVar4;
    if ((!(dVar4 < (double)(*(float *)(gen_frame + 0x3c)))) &&
       ((*(int * PTR32 *)(gen_frame + 0x40)) = (int *)(uint)uVar6, !((float10)uVar6 + fVar11 < fVar10))) {
      uVar6 = F_00568270(pvVar7 GEN_EDX_ARG);
      (*(int * PTR32 *)(gen_frame + 0x40)) = (int *)(uint)uVar6;
      if (!((float10)uVar6 + (float10)(*(float *)(gen_frame + 0x3c)) < (float10)(*(double *)(gen_frame + 0x2c)))) {
        piVar1 = *(int * PTR32 *)(this + 0x130);
        (*(int * PTR32 *)(gen_frame + 0x40)) = *(int * PTR32 *)(this + 300);
        (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x2c)) + 4)) = piVar1;
        (*(double *)(gen_frame + 0x2c)) = gen_bits2d(CONCAT44(piVar1,(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x2c)) + 0))));
        (*(int *)(gen_frame + 0x44)) = -*(int *)(this + 0xb8);
        (*(char *)(gen_frame + 0x4b)) = '\0';
        (*(float *)(gen_frame + 0x3c)) = -NAN;
        iVar8 = -*(int *)(this + 0xb8);
        if ((*(int * PTR32 *)(gen_frame + 0x40)) != piVar1) {
          do {
            (*(float *)(gen_frame + 0x3c)) = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x3c))) + 1);
            iVar2 = *(*(int * PTR32 *)(gen_frame + 0x40));
            iVar9 = iVar8;
            if ((*(char *)(gen_frame + 0x4b)) == '\0') {
              iVar9 = (uint)*(ushort *)(iVar2 + 0x28) + iVar8;
              if (iVar9 < 0) {
                (*(int *)(gen_frame + 0x44)) = iVar9;
                if (((*(byte *)(iVar2 + 0x2b) & 2) != 0) && (*(char *)(iVar2 + 0x2a) == '\0')) {
                  (*(char *)(gen_frame + 0x4b)) = '\x01';
                }
                goto LAB_0059aacf;
              }
              if (((*(byte *)(iVar2 + 0x2a) & 0x20) == 0) &&
                 (pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar2 + 0x20) + 0x44))))
                                             (*(int * PTR32 *)(iVar2 + 0x20) GEN_EDX_ARG,param_1,param_2))),
                 iVar8 = (*(int *)(gen_frame + 0x44)), pvVar7 != (undefined *)0x0)) {
                this_00 = *(undefined * PTR32 *)(this + 0xd4);
                *(float *)(this + 0xd8) = (*(float *)(gen_frame + 0x3c));
                bVar5 = false;
                if ((this_00 == pvVar7) && (((*(int *)(gen_frame + 0x28)) != 0 && ((*(int *)(gen_frame + 0x28)) != iVar2)))) {
                  *(int *)(this + 0x144) = (*(int *)(gen_frame + 0x28));
                  *(int *)(this + 0x148) = (*(int *)(gen_frame + 0x28));
                  uVar3 = *((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x28)) + 0x20) + 0x1fc)));
                  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 7;
                  (*(undefined4 *)(gen_frame + 0x10)) = 0;
                  (*(undefined4 *)(gen_frame + 0x14)) = 0;
                  (*(undefined4 *)(gen_frame + 0x18)) = 0;
                  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
                  (*(undefined4 *)(gen_frame + 0x20)) = 0;
                  (*(undefined4 *)(gen_frame + 0x24)) = 0;
                  *(undefined4 *)(this + 200) = uVar3;
                  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = 0;
                  (*(undefined4 *)(gen_frame + 0x8)) = 7;
                  F_005997b0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)));
                  bVar5 = true;
                }
                *(int *)(this + 0x148) = iVar2;
                *(undefined * PTR32 *)(this + 0xd4) = pvVar7;
                if (bVar5) {
                  (*(undefined4 *)(gen_frame + 0x10)) = 0;
                  (*(undefined4 *)(gen_frame + 0x14)) = 0;
                  (*(undefined4 *)(gen_frame + 0x18)) = 0;
                  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
                  (*(undefined4 *)(gen_frame + 0x20)) = 0;
                  (*(undefined4 *)(gen_frame + 0x24)) = 0;
                  (*(undefined4 *)(gen_frame + 0x8)) = 6;
                  F_005997b0(pvVar7 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)));
                }
                return (uint)pvVar7;
              }
              iVar9 = iVar8 + (uint)*(ushort *)(iVar2 + 0x28);
              (*(int *)(gen_frame + 0x44)) = iVar9;
              if (((int)(uint)*(ushort *)((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x7e) < iVar9) || ((*(int *)(gen_frame + 0x38)) < iVar9))
              break;
              if (((*(byte *)(iVar2 + 0x2b) & 2) != 0) && (*(char *)(iVar2 + 0x2a) == '\0')) {
                (*(char *)(gen_frame + 0x4b)) = '\x01';
              }
            }
            else {
LAB_0059aacf: ;
              if ((*(byte *)(iVar2 + 0x2b) & 1) != 0) {
                (*(char *)(gen_frame + 0x4b)) = '\0';
              }
            }
            (*(int * PTR32 *)(gen_frame + 0x40)) = (*(int * PTR32 *)(gen_frame + 0x40)) + 1;
            iVar8 = iVar9;
          } while ((*(int * PTR32 *)(gen_frame + 0x40)) != (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x2c)) + 4)));
        }
        *(undefined4 *)(this + 0xd4) = 0;
        return 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_0059abd0 */
GEN_FRAME uint GEN_THISCALL F_0059abd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x59abd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  undefined * this_01;
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  undefined * this_02;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  
  this_00 = (undefined *)((int)this - 0x7c);
  (*(char *)(gen_frame + 0x2b)) = '\0';
  bVar5 = F_0042b6f0(*(undefined * PTR32 *)(param_1 + 4) GEN_EDX_FWD,this_00);
  if (bVar5 != 0) {
    (*(char *)(gen_frame + 0x2b)) = '\x01';
  }
  F_0042ccf0(this_00 GEN_EDX_ARG,*(undefined4 *)(param_1 + 4));
  this_01 = (undefined *)((int)this - 0x16c);
  F_0058b2a0(this_01 GEN_EDX_ARG);
  F_0058b190(this_01 GEN_EDX_ARG,(int)param_1[3]);
  sVar1 = *param_1;
  *(int *)((int)this + 0x1e4) = (int)sVar1;
  if (sVar1 < 0) {
    uVar2 = param_1[2];
    *(int *)((int)this - 0x18) = (int)(short)uVar2;
    *(undefined1 *)((int)this + 0x1ce) = 1;
    iVar4 = *(int *)((int)this - 0xe0);
    if (iVar4 != 0) {
      *(uint *)(iVar4 + 0x104) = (uint)uVar2;
      *(uint *)(iVar4 + 0x108) = (uint)uVar2;
      uVar6 = F_0057ce90(this_01 GEN_EDX_ARG);
      return uVar6;
    }
  }
  else {
    if (*((char *)GEN_TOP(**(undefined4 * PTR32 *)(param_1 + 6))) == '\0') {
      F_0042e430((undefined *)((int)this - 0xd0) GEN_EDX_ARG,"");
      F_0042e430(this_00 GEN_EDX_ARG,"");
    }
    else {
      F_0042ccf0((undefined *)((int)this - 0xd0) GEN_EDX_ARG,*(undefined4 * PTR32 *)(param_1 + 6));
    }
    if ((*(char *)(gen_frame + 0x2b)) != '\0') {
      this_02 = *(undefined * PTR32 *)((int)this - 0xd4);
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      ((undefined4 *)(gen_frame + 0x8))[0] = 0x45;
      F_005997b0(this_02 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x8)));
      if (*(int *)((int)this - 0x24) != 0) {
        uVar8 = *(undefined4 *)((int)this - 0x20);
        uVar6 = F_0042a990((int)this - 0xd0 GEN_EDX_ARG);
        uVar7 = F_0042a990(this_00 GEN_EDX_ARG);
        ((code *)*(gen_code32 *)((int)this - 0x24))(*(undefined4 *)((int)this - 0x28),3,uVar7,uVar6,uVar8);
      }
    }
    iVar4 = *(int *)((int)this - 0xe0);
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    if (iVar4 != 0) {
      *(uint *)(iVar4 + 0x104) = (uint)uVar2;
      *(uint *)(iVar4 + 0x108) = (uint)uVar3;
    }
    *(int *)((int)this - 0x1c) = (int)(short)uVar2;
    *(int *)((int)this - 0x18) = (int)(short)uVar3;
    *(int *)((int)this - 0x14) = (int)(short)uVar3;
  }
  uVar6 = F_0057ce90(this_01 GEN_EDX_ARG);
  return uVar6;
}

/* ref: FUN_0059ad30 */
GEN_FRAME uint GEN_STDCALL F_0059ad30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x59ad30u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * this;
  uint uVar1;
  
  this = REFG(void * PTR32, 0x1379860);
  *(undefined1 *)(param_1 + 0x1c) = (undefined1)param_2;
  uVar1 = F_00599f80(this GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_0059ad50 */
GEN_FRAME uint GEN_THISCALL F_0059ad50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x59ad50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a3;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  *(byte *)(param_3 + 1) = *(byte *)(param_3 + 1) & 0xfe;
  uVar2 = 0;
  *param_3 = 3;
  *(byte *)(param_3 + 7) = (byte)param_2;
  if (param_1 != (undefined *)0x0) {
    uVar2 = F_005997b0(param_1 GEN_EDX_FWD,param_3);
  }
  this_00 = REFG(void * PTR32, 0x1379860);
  *(bool *)(param_3 + 0xe) = uVar2 != 0;
  uVar1 = F_00599f80(this_00 GEN_EDX_ARG,param_3);
  *(undefined * PTR32 *)((int)this + (uint)(byte)param_2 * 4 + 4) = param_1;
  return uVar2 | uVar1;
}

/* ref: FUN_0059adb0 */
GEN_FRAME uint GEN_THISCALL F_0059adb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x59adb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  int iVar1;
  undefined * pvVar2;
  undefined2 * puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  puVar3 = (*(undefined2 * PTR32 *)&gen_args[3]);
  *((byte *)GEN_TOP(((*(undefined2 * PTR32 *)&gen_args[3]) + 1))) = *((byte *)GEN_TOP(((*(undefined2 * PTR32 *)&gen_args[3]) + 1))) & 0xfe;
  *(*(undefined2 * PTR32 *)&gen_args[3]) = 4;
  *((byte *)GEN_TOP(((int)(*(undefined2 * PTR32 *)&gen_args[3]) + 0xf))) =
       *((byte *)GEN_TOP(((int)(*(undefined2 * PTR32 *)&gen_args[3]) + 0xf))) ^ ((char)(*(undefined4 *)&gen_args[4]) << 4 ^ *((byte *)GEN_TOP(((int)(*(undefined2 * PTR32 *)&gen_args[3]) + 0xf)))) & 0x10;
  *((byte *)GEN_TOP(((*(undefined2 * PTR32 *)&gen_args[3]) + 7))) = (byte)(*(undefined4 *)&gen_args[2]);
  uVar7 = 0;
  if ((*(undefined * PTR32 *)&gen_args[1]) != (undefined *)0x0) {
    uVar7 = F_005997b0((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_FWD,(*(undefined2 * PTR32 *)&gen_args[3]));
  }
  pvVar2 = REFG(void * PTR32, 0x1379860);
  *((bool *)GEN_TOP(((*(undefined2 * PTR32 *)&gen_args[3]) + 0xe))) = uVar7 != 0;
  uVar4 = F_00599f80(pvVar2 GEN_EDX_ARG,(*(undefined2 * PTR32 *)&gen_args[3]));
  uVar7 = uVar7 | uVar4;
  bVar8 = (*((byte *)GEN_TOP(((*(undefined2 * PTR32 *)&gen_args[3]) + 1))) & 2) != 0;
  uVar4 = (uint)(byte)(*(undefined4 *)&gen_args[2]);
  if ((*(undefined * PTR32 *)&gen_args[1]) != (undefined *)0x0) {
    if (*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar4 * 4 + 4))) != (*(undefined * PTR32 *)&gen_args[1])) goto LAB_0059aed6;
    uVar5 = F_0040dd00();
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar4 * 8 + 0x20)));
    if ((((iVar1 == 0) || (iVar1 + 300U < uVar5)) ||
        ((int)*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar4 * 8 + 0x24))) / 0x14 != (int)(short)(*(undefined2 * PTR32 *)&gen_args[3])[4] / 0x14)) ||
       ((int)*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar4 * 8 + 0x26))) / 0x14 != (int)(short)(*(undefined2 * PTR32 *)&gen_args[3])[5] / 0x14)) {
      *(*(undefined2 * PTR32 *)&gen_args[3]) = 9;
      uVar6 = F_005997b0((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG,(*(undefined2 * PTR32 *)&gen_args[3]));
      (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[4]) + 3)) = (*((byte *)GEN_TOP(((*(undefined2 * PTR32 *)&gen_args[3]) + 1))) & 2) != 0 || bVar8;
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar4 * 8 + 0x20))) = uVar5;
      uVar7 = uVar7 | uVar6;
      bVar8 = (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[4]) + 3));
      goto LAB_0059aed6;
    }
    *(*(undefined2 * PTR32 *)&gen_args[3]) = 10;
    uVar5 = F_005997b0((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG,(*(undefined2 * PTR32 *)&gen_args[3]));
    uVar7 = uVar7 | uVar5;
  }
  (*(undefined2 * PTR32 *)&gen_args[3]) = (undefined2 *)uVar7;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar4 * 8 + 0x20))) = 0;
  uVar7 = (uint)(*(undefined2 * PTR32 *)&gen_args[3]);
LAB_0059aed6: ;
  (*(undefined2 * PTR32 *)&gen_args[3]) = (undefined2 *)uVar7;
  if (!bVar8) {
    *puVar3 = 9;
    pvVar2 = REFG(void * PTR32, 0x1379860);
    *(bool *)(puVar3 + 0xe) = (*(undefined2 * PTR32 *)&gen_args[3]) != (undefined2 *)0x0;
    uVar7 = F_00599f80(pvVar2 GEN_EDX_ARG,puVar3);
    (*(undefined2 * PTR32 *)&gen_args[3]) = ((undefined2 *)GEN_TOP(((uint)(*(undefined2 * PTR32 *)&gen_args[3]) | uVar7)));
  }
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar4 * 8 + 0x24))) = puVar3[4];
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar4 * 8 + 0x26))) = puVar3[5];
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar4 * 4 + 4))) = 0;
  return (uint)(*(undefined2 * PTR32 *)&gen_args[3]);
}

/* ref: FUN_0059af50 */
GEN_FRAME uint GEN_STDCALL F_0059af50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x59af50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  short * param_4 = (short *)(uintptr_t)gen_a3;
  undefined * this;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  *param_4 = (param_2 == 3) + 0xc;
  *(undefined4 *)(param_4 + 4) = param_3;
  *(char *)(param_4 + 6) = (char)param_2;
  if (param_1 != (undefined *)0x0) {
    uVar2 = F_005997b0(param_1 GEN_EDX_ARG,param_4);
  }
  this = REFG(void * PTR32, 0x1379860);
  if ((*(byte *)(param_4 + 1) & 2) == 0) {
    *(bool *)(param_4 + 0xe) = uVar2 != 0;
    uVar1 = F_00599f80(this GEN_EDX_ARG,param_4);
    return uVar1 | uVar2;
  }
  return uVar2;
}

/* ref: FUN_0059afb0 */
GEN_FRAME uint GEN_STDCALL F_0059afb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x59afb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  undefined * this;
  uint uVar1;
  
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = 0xf;
  if (param_1 != (undefined *)0x0) {
    uVar1 = F_005997b0(param_1 GEN_EDX_ARG,param_2);
    if ((uVar1 | *(uint *)(param_2 + 2)) != 0) {
      return uVar1 | *(uint *)(param_2 + 2);
    }
  }
  *(undefined4 *)(param_2 + 2) = 0;
  this = REFG(void * PTR32, 0x1379860);
  *(undefined1 *)(param_2 + 0xe) = 0;
  uVar1 = F_00599f80(this GEN_EDX_ARG,param_2);
  return uVar1 | *(uint *)(param_2 + 2);
}

/* ref: FUN_0059b000 */
GEN_FRAME byte GEN_THISCALL F_0059b000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x59b000u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined * this_00;
  int iVar2;
  undefined2 * puVar3;
  byte bVar4;
  uint uVar5;
  
  puVar3 = param_3;
  uVar1 = *param_2;
  this_00 = (undefined *)param_2[1];
  if (*(undefined * PTR32 *)((int)this + 0xc58) == this_00) {
    return 0;
  }
  *(undefined4 *)(param_3 + 4) = 0;
  *(undefined4 *)(param_3 + 6) = 0;
  *(undefined4 *)(param_3 + 8) = 0;
  *(undefined4 *)(param_3 + 10) = 0;
  *(undefined4 *)(param_3 + 0xc) = 0;
  *(undefined4 *)(param_3 + 0xe) = 0;
  param_3[1] = 0;
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)((int)this + 0xc58);
  *(undefined * PTR32 *)(param_3 + 6) = this_00;
  iVar2 = *(int *)((int)this + 0xc58);
  param_3 = (undefined2 *)0x0;
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),iVar2 != 0);
  (*(undefined4 *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3),this_00 != (undefined *)0x0);
  (*(undefined4 *)(gen_frame + 0x10)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x10)), 1, 3),1);
  if (iVar2 != 0) {
    if ((((byte)((uint)*(undefined4 *)(iVar2 + 0x84) >> 0x1a) & 1) != 0) ||
       ((*(int *)(iVar2 + 8) != 0 &&
        (((byte)((uint)*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 8) + 0x84))) >> 0x1a) & 1) != 0)))) {
      *puVar3 = 0x12;
      F_005997b0(*(undefined * PTR32 *)((int)this + 0xc58) GEN_EDX_FWD,puVar3);
      (*(uint *)(gen_frame + 0x14)) = F_00561680(*(undefined4 *)((int)this + 0xc58));
    }
    param_3 = (undefined2 *)F_0057f8d0(param_1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0xc58));
    if (param_3 != (undefined2 *)uVar1) {
      uVar5 = F_0059a2f0(param_1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0xc58),(*(undefined4 *)(gen_frame + 0xc)));
      (*(undefined4 *)(gen_frame + 0x10)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x10)), 1, 3),(char)uVar5);
    }
    *(undefined4 *)((int)this + 0xc58) = 0;
  }
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  bVar4 = (byte)((uint)*(undefined4 *)((int)this_00 + 0x84) >> 0x1a) & 1;
  if (uVar1 != 0) {
    if (bVar4 != 0) goto LAB_0059b12a;
    if (*(int *)((int)this_00 + 8) == 0) {
      return 0;
    }
    uVar5 = F_0055a3f0(*(int *)((int)this_00 + 8) GEN_EDX_ARG);
    bVar4 = (byte)uVar5;
  }
  if (bVar4 == 0) {
    return 0;
  }
LAB_0059b12a: ;
  *(undefined * PTR32 *)((int)this + 0xc58) = this_00;
  if ((uVar1 != 0) && ((*(byte *)(uVar1 + 0xf8) & 0x80) == 0)) {
    *puVar3 = 0x11;
    F_005997b0(this_00 GEN_EDX_ARG,puVar3);
    uVar5 = F_00561680(this_00);
    if (uVar5 != 0) {
      *(byte *)(puVar3 + 1) = *(byte *)(puVar3 + 1) | 1;
      *puVar3 = 0x46;
      *(uint *)(puVar3 + 4) = uVar5;
      *(uint *)(puVar3 + 6) = (*(uint *)(gen_frame + 0x14));
      *(uint *)(puVar3 + 8) = param_2[2];
      *(undefined4 *)(puVar3 + 10) = 0;
      F_005997b0(this_00 GEN_EDX_ARG,puVar3);
    }
    if (param_3 != (undefined2 *)uVar1) {
      F_0059a260(param_1 GEN_EDX_ARG,uVar1,(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x10)));
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_0059b1c0 */
GEN_FRAME uint GEN_THISCALL F_0059b1c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x59b1c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * puVar1;
  ushort uVar2;
  undefined * pvVar3;
  uint uVar4;
  
  uVar2 = *(ushort *)((int)this + 0xc68);
  pvVar3 = (undefined *)0x100;
  if (uVar2 < 0x100) {
    pvVar3 = (undefined *)((int)this + (short)uVar2 * 0xc);
    puVar1 = (undefined4 *)((int)pvVar3 + 0x58);
    if ((((short)uVar2 < 1) || (*(int * PTR32 *)((int)pvVar3 + 0x4c) != param_2)) ||
       (*(int *)((int)pvVar3 + 0x50) != param_1)) {
      *puVar1 = param_2;
      *(int *)((int)pvVar3 + 0x5c) = param_1;
      *(uint *)((int)pvVar3 + 0x60) = param_3;
      if ((param_2 != (int *)0x0) &&
         ((uVar4 = param_3, (*(byte *)(param_2 + 0x3e) & 0x80) != 0 ||
          (uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x74))(param_2 GEN_EDX_FWD), (char)uVar4 != '\0')))) {
        *puVar1 = 0;
        *(undefined4 *)((int)pvVar3 + 0x5c) = 0;
        *(undefined4 *)((int)pvVar3 + 0x60) = 0;
        return uVar4;
      }
      *(short *)((int)this + 0xc68) = *(short *)((int)this + 0xc68) + 1;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      ((undefined4 *)(gen_frame + 0xc))[0] = 0;
      F_0059b000(this GEN_EDX_ARG,*(undefined4 *)(REFG(int, 0x1379860) + 0x14),puVar1,((undefined4 *)(gen_frame + 0xc)));
      pvVar3 = (undefined *)0x0;
      *(undefined2 *)((int)this + 0xc68) = 0;
    }
  }
  return (uint)pvVar3;
}

/* ref: FUN_0059b290 */
GEN_FRAME byte GEN_THISCALL F_0059b290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x59b290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  bVar1 = 0;
  (*(undefined2 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined2 *)(gen_frame + 0xe)) = 0;
  uVar2 = 0;
  iVar3 = (int)this + 0x58;
  do {
    if ((int)uVar2 < (int)*(short *)((int)this + 0xc68)) {
      bVar1 = F_0059b000(this GEN_EDX_FWD,param_1,iVar3,&(*(undefined2 *)(gen_frame + 0xc)));
    }
    uVar2 = uVar2 + 1;
    iVar3 = iVar3 + 0xc;
  } while (uVar2 < 0x100);
  *(undefined2 *)((int)this + 0xc68) = 0;
  return bVar1;
}

/* ref: FUN_0059b300 */
GEN_FRAME uint GEN_THISCALL F_0059b300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x59b300u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = (*(uint *)&gen_a2);
  if ((param_1 != 0) && ((*(uint *)&gen_a2) == 0)) {
    uVar1 = F_0057f8d0(*(undefined * PTR32 *)((int)this + 0x14) GEN_EDX_FWD,param_1);
  }
  uVar1 = F_0059b1c0(*(undefined * PTR32 *)((int)this + 0x18) GEN_EDX_ARG,param_1,uVar1,param_3);
  return uVar1;
}

/* ref: FUN_0059b340 */
GEN_FRAME uint GEN_THISCALL F_0059b340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x59b340u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  uint in_EAX = 0;
  undefined * pvVar2;
  
  iVar1 = REFG(int, 0x1379860);
  if (param_1 != 0) {
    pvVar2 = this;
    if (this == (undefined *)0x0) {
      pvVar2 = (undefined *)F_0057f8d0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14) GEN_EDX_FWD,param_1);
    }
    in_EAX = F_0059b1c0(*(undefined * PTR32 *)(iVar1 + 0x18) GEN_EDX_ARG,param_1,pvVar2,param_3);
    if ((char)param_2 != '\0') {
      *(int *)((int)this + 0xa4) = param_1;
    }
  }
  return in_EAX;
}

/* ref: FUN_0059b390 */
GEN_FRAME uint GEN_THISCALL F_0059b390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x59b390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  uint in_EAX = 0;
  uint uVar2;
  undefined * pvVar3;
  
  if (param_1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x3c))(param_1 GEN_EDX_FWD);
    iVar1 = REFG(int, 0x1379860);
    in_EAX = 0;
    if (uVar2 != 0) {
      pvVar3 = this;
      if (this == (undefined *)0x0) {
        pvVar3 = (undefined *)F_0057f8d0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14) GEN_EDX_ARG,uVar2);
      }
      in_EAX = F_0059b1c0(*(undefined * PTR32 *)(iVar1 + 0x18) GEN_EDX_ARG,uVar2,pvVar3,param_3);
      if ((char)param_2 != '\0') {
        *(uint *)((int)this + 0xa4) = uVar2;
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_0059b3f0 */
GEN_FRAME uint GEN_THISCALL F_0059b3f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x59b3f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint in_EAX = 0;
  
  if (((char)param_1 != '\0') && ((*(byte *)((int)this + 0xf9) & 0x80) == 0)) {
    in_EAX = (int)this + 0x24;
    if ((*(int *)((int)this + 0x2c) != 0) &&
       (*((int *)GEN_TOP((*(int *)((int)this + 0x2c) + 4))) + (uint)*(ushort *)((int)this + 0x3a) != 0)) {
      *(undefined1 *)((int)this + 0x13e) = 0xff;
      in_EAX = F_005732f0(this GEN_EDX_FWD,in_EAX,0);
      iVar1 = *(int *)((int)this + 0xa4);
      if ((iVar1 != 0) && ((char)param_2 != '\0')) {
        in_EAX = F_0059b1c0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x18) GEN_EDX_ARG,iVar1,this,0);
        *(int *)((int)this + 0xa4) = iVar1;
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_0059b460 */
GEN_FRAME byte GEN_THISCALL F_0059b460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x59b460u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  short sVar2;
  short sVar3;
  
  (*(undefined2 *)(gen_frame + 0xc)) = 0x48;
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(int *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined2 *)(gen_frame + 0xe)) = 0;
  sVar3 = 0;
  sVar2 = 0;
  (*(int *)(gen_frame + 0x18)) = param_2;
  (*(uint *)(gen_frame + 0x14)) = param_3;
  if ((param_2 != 0) && (*(int *)(param_2 + 0x70) != 0)) {
    sVar3 = (short)(int)*((float *)GEN_TOP((*(int *)(param_2 + 0x70) + 0x34)));
  }
  if ((param_3 != 0) && (*(int *)(param_3 + 0x70) != 0)) {
    sVar2 = (short)(int)*((float *)GEN_TOP((*(int *)(param_3 + 0x70) + 0x34)));
  }
  if (*(float *)&REFG(undefined, 0x1088114) < *(float *)(param_1 + 0x118)) {
    (*(int *)(gen_frame + 0x20)) = (int)(((float10)1 / (float10)*(float *)(param_1 + 0x118)) *
                    (float10)((int)sVar2 - (int)sVar3));
  }
  else {
    (*(int *)(gen_frame + 0x20)) = (int)sVar2 - (int)sVar3;
  }
  uVar1 = F_005997b0(*(undefined * PTR32 *)(param_1 + 0x90) GEN_EDX_FWD,&(*(undefined2 *)(gen_frame + 0xc)));
  return uVar1 != 0;
}

/* ref: FUN_0059b530 */
GEN_FRAME uint GEN_THISCALL F_0059b530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x59b530u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  if ((*(int *)((int)this + 0x90) != 0) &&
     (this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x90) + 0x1c))), this_00 != (undefined *)0x0)) {
    *(ushort *)((int)this_00 + 0x22) = *(ushort *)((int)this_00 + 0x22) & 0x7fff;
    *(undefined4 *)((int)this_00 + 0x18) = param_1;
    F_00573430(this_00 GEN_EDX_FWD,param_1);
  }
  uVar1 = F_0059b3f0(this GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: Component::GUI2::AtkUnitManager::vf4 */
GEN_FRAME byte GEN_THISCALL F_0059b570(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x59b570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  byte bVar5;
  int * piVar6;
  undefined * pAVar7;
  
  if ((this != (undefined *)0xffffff00) && (*(undefined * PTR32 *)(this + 0x180) != (undefined *)0x0)) {
    F_00583770(*(undefined * PTR32 *)(this + 0x180) GEN_EDX_FWD,0xc,0,this,0);
  }
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  piVar2 = *(int * PTR32 *)(this + 0xc0);
  piVar6 = (int *)*piVar2;
  *piVar2 = (int)piVar2;
  *((int *)GEN_TOP((*(int *)(this + 0xc0) + 4))) = *(int *)(this + 0xc0);
  *(undefined4 *)(this + 0xc4) = 0;
  if (piVar6 != *(int * PTR32 *)(this + 0xc0)) {
    do {
      piVar2 = (int *)*piVar6;
      F_00429760(piVar6,0xc,400);
      piVar6 = piVar2;
    } while (piVar2 != (int *)*(int *)(this + 0xc0));
  }
  F_00558e30(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x18) GEN_EDX_ARG);
  F_0059b1c0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x18) GEN_EDX_ARG,0,0,0);
  piVar2 = *(int * PTR32 *)(this + 0xb4);
  piVar6 = (int *)*piVar2;
  while (piVar6 != piVar2) {
    uVar3 = *(uint *)(piVar6[2] + 0x120);
    (*(int *)(gen_frame + 0x8)) = piVar6[2];
    if ((uVar3 >> 3 & 1) == 0) {
      piVar6 = (int *)*piVar6;
    }
    else {
      piVar4 = (int *)*piVar6;
      if (piVar6 != *(int * PTR32 *)(this + 0xb4)) {
        *(int * PTR32 *)piVar6[1] = piVar4;
        *(int *)(*piVar6 + 4) = piVar6[1];
        F_00429760(piVar6,0xc,400);
        *(int *)(this + 0xb8) = *(int *)(this + 0xb8) - 1;
      }
      F_00587ac0(this GEN_EDX_ARG,&(*(int *)(gen_frame + 0x8)));
      piVar6 = piVar4;
    }
  }
  piVar2 = *(int * PTR32 *)(this + 0xb4);
  piVar6 = (int *)*piVar2;
  while (piVar6 != piVar2) {
    piVar4 = (int *)*piVar6;
    (*(int *)(gen_frame + 0x8)) = piVar6[2];
    if (piVar6 != *(int * PTR32 *)(this + 0xb4)) {
      *(int * PTR32 *)piVar6[1] = piVar4;
      *(int *)(*piVar6 + 4) = piVar6[1];
      F_00429760(piVar6,0xc,400);
      *(int *)(this + 0xb8) = *(int *)(this + 0xb8) - 1;
    }
    F_00587ac0(this GEN_EDX_ARG,&(*(int *)(gen_frame + 0x8)));
    piVar6 = piVar4;
  }
  piVar2 = *(int * PTR32 *)(this + 0xb4);
  piVar6 = (int *)*piVar2;
  *piVar2 = (int)piVar2;
  *((int *)GEN_TOP((*(int *)(this + 0xb4) + 4))) = *(int *)(this + 0xb4);
  *(undefined4 *)(this + 0xb8) = 0;
  if (piVar6 != *(int * PTR32 *)(this + 0xb4)) {
    do {
      piVar2 = (int *)*piVar6;
      F_00429760(piVar6,0xc,400);
      piVar6 = piVar2;
    } while (piVar2 != (int *)*(int *)(this + 0xb4));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this + 0x194;
  pAVar7 = this + 0x18;
  (*(int *)(gen_frame + 0x8)) = 0xd;
  do {
    piVar2 = *(int * PTR32 *)pAVar7;
    piVar6 = (int *)*piVar2;
    *piVar2 = (int)piVar2;
    *(int *)(*(int *)pAVar7 + 4) = *(int *)pAVar7;
    *(int *)(pAVar7 + 4) = 0;
    if (piVar6 != *(int * PTR32 *)pAVar7) {
      do {
        piVar2 = (int *)*piVar6;
        F_00429760(piVar6,0xc,400);
        piVar6 = piVar2;
      } while (piVar2 != (int *)*(int *)pAVar7);
    }
    *(undefined2 *)(*(undefined * PTR32 *)(gen_frame + 0x4)) = 0;
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 *)(gen_frame + 0x4)) + 2;
    pAVar7 = pAVar7 + 0xc;
    iVar1 = (*(int *)(gen_frame + 0x8)) - 1;
    (*(int *)(gen_frame + 0x8)) = iVar1;
  } while (iVar1 != 0);
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  piVar2 = *(int * PTR32 *)(this + 0xc0);
  piVar6 = (int *)*piVar2;
  *piVar2 = (int)piVar2;
  *((int *)GEN_TOP((*(int *)(this + 0xc0) + 4))) = *(int *)(this + 0xc0);
  *(undefined4 *)(this + 0xc4) = 0;
  if (piVar6 != *(int * PTR32 *)(this + 0xc0)) {
    do {
      piVar2 = (int *)*piVar6;
      F_00429760(piVar6,0xc,400);
      piVar6 = piVar2;
    } while (piVar2 != (int *)*(int *)(this + 0xc0));
  }
  this[0x1b0] = (undefined1)((byte)this[0x1b0] & 0xf8);
  iVar1 = *(int *)(this + 0xf0);
  if (iVar1 != *(int *)(this + 0xf4)) {
    F_00c46e20(iVar1,*(int *)(this + 0xf4),0);
    *(int *)(this + 0xf4) = iVar1;
  }
  F_00c48350(*(undefined * PTR32 *)(this + 0x14),0,*(int *)(this + 0x10) * 4);
  *(undefined4 *)(this + 0xc) = 0;
  bVar5 = F_00a4b410(this + 4 GEN_EDX_ARG,0);
  return bVar5;
}

/* ref: FUN_0059b860 */
GEN_FRAME uint GEN_THISCALL F_0059b860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x59b860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  if (param_1 != *(undefined * PTR32 *)((int)this + 0xcc)) {
    if (param_1 == (undefined *)0x0) {
      F_0059b1c0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x18) GEN_EDX_FWD,0,0,0);
    }
    else {
      bVar1 = F_0058ca80(param_1 GEN_EDX_ARG,param_2);
      if (bVar1 == 0) {
        return CONCAT31(extraout_var,bVar1);
      }
    }
    F_00580230(this GEN_EDX_ARG,param_1,0);
    bVar1 = 0;
    if (*(undefined * PTR32 *)((int)this + 0xcc) != param_1) {
      bVar1 = F_00596a60(this GEN_EDX_ARG);
    }
    if (param_1 != (undefined *)0x0) {
      F_00587d80(this GEN_EDX_ARG,param_1);
      if (bVar1 != 0) {
        F_0058ccd0(this GEN_EDX_ARG,1);
      }
      uVar2 = F_00594a00(this GEN_EDX_ARG);
      return uVar2;
    }
    in_EAX = F_005794a0(this GEN_EDX_ARG);
  }
  return in_EAX;
}

/* ref: FUN_0059b8f0 */
GEN_FRAME byte GEN_THISCALL F_0059b8f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x59b8f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  
  if ((param_1 != 0) && ((*(int *)&gen_a2) != 0)) {
    iVar1 = (*(int *)&gen_a2);
    iVar4 = *(int *)(param_1 + 0x90);
    while (iVar4 != 0) {
      if (iVar1 == *(int *)(param_1 + 0x90)) {
        if (((*(int *)&gen_a2) != *(int *)(param_1 + 0xa0)) &&
           (iVar4 = (*(int *)&gen_a2), (*(uint *)((*(int *)&gen_a2) + 0x84) >> 0x1a & 1) != 0)) goto LAB_0059b940;
        break;
      }
      iVar1 = *(int *)(iVar1 + 8);
      iVar4 = iVar1;
    }
    iVar4 = *(int *)(param_1 + 0xa4);
LAB_0059b940: ;
    if ((iVar4 == 0) && ((*(byte *)(param_1 + 0xfb) & 1) != 0)) {
      for (puVar2 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xb4)));
          puVar2 != *(undefined4 * PTR32 *)((int)this + 0xb4); puVar2 = (undefined4 *)*puVar2) {
        piVar3 = (int *)puVar2[2];
        if ((((char)piVar3[0x4f] == *(char *)(param_1 + 0x13a)) &&
            ((*(byte *)((int)piVar3 + 0xfb) & 2) == 0)) &&
           ((*(byte *)((int)piVar3 + 0xfb) & 4) != 0)) {
          ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x8c))(piVar3 GEN_EDX_FWD);
          return 1;
        }
      }
    }
    F_0059b1c0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x18) GEN_EDX_ARG,iVar4,param_1,0);
  }
  return 0;
}

/* ref: FUN_0059b9c0 */
GEN_NOFRAME uint GEN_THISCALL F_0059b9c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x59b9c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *(int *)((int)this + 0xe8);
  if (iVar1 != 0) {
    uVar3 = F_0057f8d0(this GEN_EDX_FWD,iVar1);
    iVar2 = REFG(int, 0x1379860);
    uVar4 = 0;
    if ((uVar3 != 0) &&
       ((uVar4 = *(uint *)(uVar3 + 0xf4) >> 0x14 & 0xf, uVar4 == 3 || (uVar4 == 2)))) {
      uVar4 = F_0057f8d0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14) GEN_EDX_ARG,iVar1);
      uVar4 = F_0059b1c0(*(undefined * PTR32 *)(iVar2 + 0x18) GEN_EDX_ARG,iVar1,uVar4,0);
    }
    *(undefined4 *)((int)this + 0xe8) = 0;
    return uVar4;
  }
  uVar4 = F_0059b1c0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x18) GEN_EDX_ARG,0,0,0);
  return uVar4;
}

/* ref: FUN_0059ba30 */
GEN_FRAME uint GEN_THISCALL F_0059ba30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x59ba30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  ushort uVar1;
  uint3 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort * puVar6;
  
  if (*(short *)(*(int *)this + 6) != 0) {
    iVar3 = *(int *)(*(int *)this + 0xc);
    uVar4 = (uint)*(ushort *)(iVar3 + 8);
    puVar6 = *(ushort * PTR32 *)(iVar3 + 0xc);
    iVar3 = 0;
    if (uVar4 != 0) {
      while (puVar6[6] != (ushort)param_2) {
        iVar3 = iVar3 + 1;
        puVar6 = puVar6 + 8;
        if ((int)uVar4 <= iVar3) {
          return *(uint *)((int)this + 0x18);
        }
      }
      *(ushort *)((int)this + 0x20) = puVar6[6];
      if (param_1 == 3) {
        *(ushort *)((int)this + 0x22) = *(ushort *)((int)this + 0x22) & 0x7fff;
        uVar1 = *puVar6;
        uVar4 = (uint)*(ushort *)((int)this + 0x12);
        *(uint *)((int)this + 0x18) = (uint)uVar1;
        if (uVar4 < uVar1) {
          *(uint *)((int)this + 0x18) = uVar4;
          *(ushort *)((int)this + 0x22) = *(ushort *)((int)this + 0x22) & 0x7fff;
          F_00573430(this GEN_EDX_FWD,uVar4);
        }
        F_00573430(this GEN_EDX_ARG,*(undefined4 *)((int)this + 0x18));
        return *(uint *)((int)this + 0x18);
      }
      uVar4 = (uint)*puVar6 + param_3;
      if (((*(uint *)&gen_a4) != 0) && ((*(uint *)&gen_a4) < uVar4)) {
        uVar4 = (*(uint *)&gen_a4);
      }
      *(ushort *)((int)this + 0x22) = *(ushort *)((int)this + 0x22) | 0x8000;
      uVar5 = (uint)*(ushort *)((int)this + 0x12);
      *(uint *)((int)this + 0x18) = uVar4;
      if (uVar5 < uVar4) {
        *(uint *)((int)this + 0x18) = uVar5;
        *(ushort *)((int)this + 0x22) = *(ushort *)((int)this + 0x22) & 0x7fff;
        F_00573430(this GEN_EDX_ARG,uVar5);
      }
      uVar2 = *(uint3 *)(puVar6 + 6);
      (*(undefined2 *)(gen_frame + 0xc)) = 0x41;
      (*(undefined2 *)(gen_frame + 0xe)) = 0;
      (*(uint *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = (ushort)uVar2;
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 2)) = (char)puVar6[7];
      (*(uint *)(gen_frame + 0x14)) = (uint)*(uint3 *)(puVar6 + 6);
      F_005997b0(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0xc)));
    }
  }
  return *(uint *)((int)this + 0x18);
}

/* ref: FUN_0059bb60 */
GEN_FRAME uint GEN_THISCALL F_0059bb60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x59bb60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  short * psVar6;
  
  if (*(short *)(*(int *)this + 6) == 0) {
    return 0;
  }
  iVar2 = *(int *)(*(int *)this + 0xc);
  uVar4 = (uint)*(ushort *)(iVar2 + 8);
  iVar5 = 0;
  (*(uint *)(gen_frame + 0x28)) = uVar4;
  if (uVar4 != 0) {
    psVar6 = ((short *)GEN_TOP((*(int *)(iVar2 + 0xc) + 0xc)));
    do {
      (*(ushort * PTR32 *)(gen_frame + 0x24)) = (ushort *)(psVar6 - 6);
      uVar3 = (uint)(ushort)psVar6[-6];
      if ((param_1 <= uVar3) && (uVar3 <= param_2)) {
        sVar1 = *psVar6;
        if (*(short *)((int)this + 0x20) != sVar1) {
          (*(undefined2 *)(gen_frame + 0x4)) = 0x41;
          (*(uint *)(gen_frame + 0xc)) = 0;
          (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 0)) = sVar1;
          (*(undefined4 *)(gen_frame + 0x10)) = 0;
          (*(undefined4 *)(gen_frame + 0x14)) = 0;
          (*(undefined4 *)(gen_frame + 0x18)) = 0;
          (*(undefined4 *)(gen_frame + 0x1c)) = 0;
          (*(undefined4 *)(gen_frame + 0x20)) = 0;
          (*(undefined2 *)(gen_frame + 0x6)) = 0;
          (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 2)) = (char)psVar6[1];
          (*(uint *)(gen_frame + 0xc)) = (uint)CONCAT12((char)psVar6[1],sVar1);
          F_005997b0(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_FWD,&(*(undefined2 *)(gen_frame + 0x4)));
          uVar4 = (*(uint *)(gen_frame + 0x28));
        }
        *(short *)((int)this + 0x20) = *psVar6;
        if ((char)psVar6[1] != '\0') {
          return (uint)(*(ushort * PTR32 *)(gen_frame + 0x24));
        }
      }
      iVar5 = iVar5 + 1;
      psVar6 = psVar6 + 8;
    } while (iVar5 < (int)uVar4);
  }
  return 0;
}

/* ref: FUN_0059bc20 */
GEN_FRAME uint GEN_THISCALL F_0059bc20(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x59bc20u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  double dVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  dVar2 = (double)param_2 * *(double *)&REFG(double, 0x10a1b50);
  uVar3 = (uint)(longlong)dVar2;
  uVar1 = *param_1;
  *param_1 = *param_1 + uVar3;
  puVar5 = (undefined4 *)param_1[2];
  param_1[1] = param_1[1] + (int)((ulonglong)(longlong)dVar2 >> 0x20) + (uint)CARRY4(uVar1,uVar3);
  if (puVar5 != (undefined4 *)param_1[3]) {
    puVar4 = puVar5 + 1;
    do {
      if (*(char *)((int)*puVar5 + 0x20) == '\0') {
        uVar3 = F_00c46e20(puVar5,puVar4,((int)(param_1[3] - (int)puVar4) >> 2) * 4);
        param_1[3] = param_1[3] - 4;
      }
      else {
        uVar3 = F_0059a490((undefined *)*puVar5 GEN_EDX_ARG,*param_1,param_1[1],0xd05,0);
        puVar5 = puVar5 + 1;
        puVar4 = puVar4 + 1;
      }
    } while (puVar5 != (undefined4 *)param_1[3]);
  }
  return uVar3;
}

/* ref: FUN_0059bc90 */
GEN_FRAME uint GEN_THISCALL F_0059bc90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x59bc90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  int * piVar4;
  int iVar5;
  uint in_EAX = 0;
  uint uVar6;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 8);
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    iVar3 = puVar2[2];
    piVar4 = *(int * PTR32 *)(iVar3 + 4);
    if ((((piVar4 != (int *)0x0) &&
         (in_EAX = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x14))(piVar4 GEN_EDX_FWD,(uint)(~(*(byte *)(iVar3 + 0x2c) >> 1) & 1))
         , (*(byte *)(iVar3 + 0x2e) & 8) != 0)) && ((*(byte *)((int)piVar4 + 0xfb) & 4) != 0)) &&
       ((piVar4[0x29] != 0 && ((*(byte *)((int)piVar4 + 0xf9) & 0x40) == 0)))) {
      uVar6 = *(uint *)(iVar3 + 4);
      iVar3 = *(int *)(uVar6 + 0xa4);
      iVar5 = *(int *)((int)this + 0x1c);
      if ((iVar3 != 0) && (uVar6 == 0)) {
        uVar6 = F_0057f8d0(*(undefined * PTR32 *)(iVar5 + 0x14) GEN_EDX_ARG,iVar3);
      }
      in_EAX = F_0059b1c0(*(undefined * PTR32 *)(iVar5 + 0x18) GEN_EDX_ARG,iVar3,uVar6,0);
    }
  }
  return in_EAX;
}

/* ref: FUN_0059bd30 */
GEN_FRAME uint GEN_THISCALL F_0059bd30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x59bd30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 8);
  puVar5 = puVar2;
  for (puVar3 = (undefined4 *)*puVar2; puVar3 != puVar2; puVar3 = (undefined4 *)*puVar3) {
    puVar5 = (undefined4 *)puVar3[2];
    iVar4 = puVar5[1];
    if (iVar4 != 0) {
      if (puVar5[6] == param_1) {
        cVar1 = *(char *)(iVar4 + 0xf9);
        *(byte *)(puVar5 + 0xb) = *(byte *)(puVar5 + 0xb) | 2;
        *(byte *)((int)puVar5 + 0x2e) =
             *(byte *)((int)puVar5 + 0x2e) ^ (cVar1 * '\b' ^ *(byte *)((int)puVar5 + 0x2e)) & 8;
        puVar5 = ((undefined4 *)GEN_TOP((CONCAT31((int3)((uint)((int)(uintptr_t)puVar5) >> 8),
                           *(byte *)((int)puVar5 + 0x2e) >> 1 ^ *(byte *)(iVar4 + 0xfb)) &
                 0xffffff04)));
        *(byte *)(iVar4 + 0xfb) = *(byte *)(iVar4 + 0xfb) ^ (byte)puVar5;
        if ((char)param_3 != '\0') {
          puVar5 = (undefined4 *)0x0;
          if (*(int *)(iVar4 + 0xa4) != 0) {
            puVar5 = (undefined4 *)
                     F_0059b1c0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x18))) GEN_EDX_FWD,
                                  *(int *)(iVar4 + 0xa4),iVar4,0);
          }
        }
      }
      else if (((*(byte *)(puVar5 + 0xb) & 8) != 0) && ((char)param_2 != '\0')) {
        *(byte *)((int)puVar5 + 0x2e) = *(byte *)((int)puVar5 + 0x2e) & 0xf7;
        *(byte *)(puVar5 + 0xb) = *(byte *)(puVar5 + 0xb) & 0xfd;
        *(byte *)(iVar4 + 0xfb) = *(byte *)(iVar4 + 0xfb) & 0xfb;
        if (((byte)(*(uint *)(iVar4 + 0xf4) >> 0x14) & 0xf) == 2) {
          *(byte *)(iVar4 + 0xfa) = *(byte *)(iVar4 + 0xfa) | 8;
        }
      }
    }
  }
  return (uint)puVar5;
}

/* ref: FUN_0059be40 */
GEN_FRAME unsigned int GEN_THISCALL F_0059be40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x59be40u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int in_ecx;
  int * piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if ((*(byte *)(param_2 + 0x2c) & 1) == 0) {
    in_ecx = *(int *)(param_2 + 4);
    *(undefined1 *)((int)param_1 + 0x35) = 0;
    if ((*(byte *)(param_2 + 0x2e) & 1) != 0) {
      *(byte *)(in_ecx + 0xf8) = *(byte *)(in_ecx + 0xf8) & 0xfb;
    }
    if ((*(byte *)(in_ecx + 0xf9) & 1) != 0) {
      piVar1 = *(int * PTR32 *)((int)param_1 + 0x18);
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x24)),&(*(undefined4 *)(gen_frame + 0x28)));
      *(byte *)(in_ecx + 0xf9) =
           *(byte *)(in_ecx + 0xf9) ^
           (~(*(char *)(param_2 + 0x2e) * '\x02') ^ *(byte *)(in_ecx + 0xf9)) & 8;
      *(byte *)(param_2 + 0x2c) = *(byte *)(param_2 + 0x2c) | 1;
      *(byte *)(param_2 + 0x2e) =
           *(byte *)(param_2 + 0x2e) ^
           (*(char *)(param_2 + 0x2c) * '\x04' ^ *(byte *)(param_2 + 0x2e)) & 8;
      (*(undefined * PTR32 *)(gen_frame + 0x20)) = (undefined *)((int)param_1 + 0x14);
      *(byte *)(in_ecx + 0xfb) =
           *(byte *)(in_ecx + 0xfb) ^
           (*(byte *)(param_2 + 0x2e) >> 1 ^ *(byte *)(in_ecx + 0xfb)) & 4;
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(in_ecx + 0xa0);
      F_00565340((undefined *)((int)param_1 + 0x14) GEN_EDX_ARG,0x3e,(uint)*((byte *)GEN_TOP((*(int *)(param_2 + 4) + 0x13a)))
                   ,0,param_1,*(undefined4 *)((int)param_1 + 0x18),0);
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      uVar2 = *(undefined4 *)(param_2 + 4);
      ((undefined4 *)(gen_frame + 0x0))[0] = 0x3e;
      (*(undefined4 *)(gen_frame + 0x8)) = uVar2;
      F_0059a5b0(param_1 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x0)));
      if ((*(byte *)(param_2 + 0x2e) & 1) != 0) {
        F_0056b4e0(in_ecx GEN_EDX_ARG,((float)GEN_TOF((((float10)1 /
                                    (float10)*((float *)GEN_TOP((*(int *)((int)param_1 + 0x18) + 0x11c)))) *
                                   (float10)*((float *)GEN_TOP((*(int *)((int)param_1 + 0x18) + 0x118)))))));
        F_00560e00((undefined *)param_2 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)));
        F_00560ec0(param_2,1);
        if ((*(byte *)(param_2 + 0x2e) & 0x10) != 0) {
          uVar4 = F_0055e320(in_ecx GEN_EDX_ARG);
          if ((uVar4 != 0) && (iVar3 = *(int *)(uVar4 + 0x70), iVar3 != 0)) {
            *(uint *)(iVar3 + 0x84) = *(uint *)(iVar3 + 0x84) & 0xffefffff;
            *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 0x80;
          }
          if (((*(char *)((int)param_1 + 0x36) == '\0') && ((*(byte *)(param_2 + 0x2e) & 8) != 0))
             && (*(int *)(in_ecx + 0xa4) != 0)) {
            F_0059b300(*(undefined * PTR32 *)((int)param_1 + 0x1c) GEN_EDX_ARG,*(int *)(in_ecx + 0xa4),in_ecx,0);
          }
        }
      }
      iVar3 = *(int *)(in_ecx + 0x90);
      if (iVar3 != 0) {
        F_0057f0d0((undefined *)(in_ecx + 0x24) GEN_EDX_ARG,iVar3,*(undefined4 *)(iVar3 + 8),0);
      }
      F_00583770((*(undefined * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,0x3e,(uint)*((byte *)GEN_TOP((*(int *)(param_2 + 4) + 0x13a))),
                   *(undefined4 *)((int)param_1 + 0x18),0);
    }
  }
  return;
}

/* ref: FUN_0059c000 */
GEN_FRAME byte GEN_THISCALL F_0059c000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x59c000u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  int * this;
  byte bVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  
  iVar4 = param_2 - *(int *)((int)param_1 + 0x10);
  fVar5 = (float10)iVar4;
  if (iVar4 < 0) {
    fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar1 = (float)fVar5;
  (*(float *)(gen_frame + 0x28)) = fVar1;
  fVar5 = (float10)*(int *)((int)param_1 + 0xc);
  if (*(int *)((int)param_1 + 0xc) < 0) {
    fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar2 = (float)fVar5;
  (*(float *)(gen_frame + 0x24)) = fVar2;
  if ((fVar2 <= 0.0) || (!((float10)fVar1 < (float10)fVar2))) {
    param_2 = (uint)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  }
  else {
    fVar5 = ((float10)GEN_TOD(fsin(
                          (float10)((float)GEN_TOF(((((float10)*(float *)((int)param_1 + 0x2c) *
                                            (float10)*(double *)&REFG(undefined, 0x1080228)) * (float10)fVar1) /
                                          (float10)fVar2))))));
    param_2 = (uint)gen_fl2bits((float)fVar5);
  }
  fVar5 = (float10)fVar1;
  if ((float10)fVar2 <= fVar5) {
    param_2 = (uint)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  }
  iVar4 = *(int *)((int)param_1 + 0x18) - 0x14;
  if (iVar4 != 0) {
    do {
      fVar1 = ((float)GEN_TOF(((float10)*(float *)(iVar4 + 0x10) * ((float10)GEN_TOD(gen_bits2f(param_2))) +
                     (float10)*(float *)(iVar4 + 0xc))));
      (*(float *)(gen_frame + 0x24)) = fVar1;
      F_00588fa0(param_1 GEN_EDX_FWD,*(undefined4 *)(iVar4 + 8),fVar1);
      iVar4 = *(int *)(iVar4 + 4);
    } while (iVar4 != 0);
    fVar5 = (float10)(*(float *)(gen_frame + 0x28));
  }
  fVar6 = (float10)*(int *)((int)param_1 + 0xc);
  if (*(int *)((int)param_1 + 0xc) < 0) {
    fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  this = *(int * PTR32 *)((int)param_1 + 0x28);
  if (!(fVar6 <= fVar5)) {
    bVar3 = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    ((undefined4 *)(gen_frame + 0x4))[0] = 0x3c;
    if (this != (int *)0x0) {
      iVar4 = *this;
      bVar3 = 0;
      if (iVar4 != 0) {
        while (*(char *)(iVar4 + 0x14) != '<') {
          iVar4 = *(int *)(iVar4 + 0x10);
          if (iVar4 == 0) {
            return 0;
          }
        }
        bVar3 = F_00598630(this GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x4)),0);
      }
    }
    return bVar3;
  }
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  ((undefined4 *)(gen_frame + 0x4))[0] = 0x3d;
  if (this != (int *)0x0) {
    for (iVar4 = *this; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x10)) {
      if (*(char *)(iVar4 + 0x14) == '=') {
        F_00598630(this GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x4)),0);
        break;
      }
    }
  }
  iVar4 = *(int *)((int)param_1 + 8);
  if (((iVar4 != 0) && (*(char *)(iVar4 + 0x53) == '\0')) && (iVar4 != 0)) {
    *(uint *)(iVar4 + 0x84) = *(uint *)(iVar4 + 0x84) & 0xffefffff;
    *(uint *)(iVar4 + 0x88) = *(uint *)(iVar4 + 0x88) | 0x80;
  }
  *(undefined4 *)((int)param_1 + 4) = 2;
  bVar3 = F_005610f0(param_1 GEN_EDX_ARG);
  return bVar3;
}

/* ref: FUN_0059c1d0 */
GEN_FRAME uint GEN_THISCALL F_0059c1d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x59c1d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  (*(undefined2 *)(gen_frame + 0xc)) = 0x1b;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined2 *)(gen_frame + 0xe)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)((int)this + 0xa0);
  uVar1 = F_005997b0(*(undefined * PTR32 *)((int)this + 0x70) GEN_EDX_FWD,&(*(undefined2 *)(gen_frame + 0xc)));
  return uVar1;
}

/* ref: FUN_0059c220 */
GEN_FRAME uint GEN_THISCALL F_0059c220(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x59c220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  (*(undefined2 *)(gen_frame + 0xc)) = 0x1c;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined2 *)(gen_frame + 0xe)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)((int)this + 0xa0);
  uVar1 = F_005997b0(*(undefined * PTR32 *)((int)this + 0x70) GEN_EDX_FWD,&(*(undefined2 *)(gen_frame + 0xc)));
  *(byte *)((int)this + 0xae) = *(byte *)((int)this + 0xae) & 0xbf;
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentList::vf34 */
GEN_FRAME uint GEN_THISCALL F_0059c270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x59c270u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined * this_00;
  
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *param_3;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (undefined4 *)0x0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined2 *)(gen_frame + 0xe)) = 0;
  uVar3 = param_3[2];
  (*(undefined4 *)(gen_frame + 0x14)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x1c)) = uVar3;
  (*(undefined4 *)(gen_frame + 0x20)) = param_3[3];
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = puVar1;
  uVar2 = param_3[4];
  (*(undefined2 *)(gen_frame + 0xc)) = (short)param_1;
  (*(undefined4 *)(gen_frame + 0x24)) = uVar2;
  F_005620a0(this GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x14)),param_3,param_4,param_1);
  if (param_1 == 0x19) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = param_3;
  }
  if (-1 < param_4) {
    (*(undefined4 *)(gen_frame + 0x14)) = *((undefined4 *)GEN_TOP((*(int *)(this + 0x98) + param_4 * 8)));
  }
  this_00 = (undefined *)0x0;
  if (this != (undefined *)0x0) {
    this_00 = *(undefined * PTR32 *)(this + 0x70);
  }
  uVar4 = F_005997b0(this_00 GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0xc)));
  if ((uVar4 != 0) && ((char)param_5 != '\0')) {
    *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x10000;
  }
  return uVar4;
}

/* ref: FUN_0059c320 */
GEN_FRAME uint GEN_THISCALL F_0059c320(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x59c320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  short sVar1;
  undefined1 * puVar2;
  undefined * pvVar3;
  byte bVar4;
  uint in_EAX = 0;
  uint uVar5;
  uint uVar6;
  undefined * pvVar7;
  undefined * pvVar8;
  undefined3 extraout_var = 0;
  undefined4 uVar9;
  
  if (*(char *)((int)this + 0x124) != '\0') {
    return in_EAX;
  }
  uVar5 = *(uint *)((int)this + 0xcc);
  puVar2 = *(undefined1 * PTR32 *)(param_2 + 8);
  uVar6 = *(uint *)((int)this + 0xc0);
  (*(uint *)(gen_frame + 0x24)) = uVar5;
  if ((((puVar2 == (undefined1 *)0x9) || (puVar2 == &REFG(undefined, 0xa))) || (puVar2 == (undefined1 *)0x7)
      ) || (puVar2 == (undefined1 *)0x8)) {
    (*(char *)(gen_frame + 0x2a)) = '\x01';
  }
  else {
    (*(char *)(gen_frame + 0x2a)) = '\0';
    if ((*(char *)((int)this + 0x11f) != '\0') && (-1 < (int)uVar5)) {
      if (*(char *)((int)this + 0x126) == '\0') {
        return (uint)puVar2;
      }
      if (*(uint *)((int)this + 0xc4) < 0x80000000) {
        return (uint)puVar2;
      }
      uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x78))(this GEN_EDX_FWD);
      return uVar5;
    }
  }
  if ((int)uVar6 < 0) {
    if ((((*(char *)(gen_frame + 0x2a)) == '\0') && (*(char *)((int)this + 0x11f) != '\0')) && (-1 < (int)uVar5)) {
      uVar6 = uVar5;
    }
  }
  else {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x74))(this GEN_EDX_ARG,uVar6,0);
  }
  if ((-1 < *(int *)((int)this + 0xd8)) &&
     (uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x7c))(this GEN_EDX_ARG),
     (int)(short)uVar5 <= *(int *)((int)this + 0xd8))) {
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x7c))(this GEN_EDX_ARG);
    *(uint *)((int)this + 0xd8) = uVar5 - 1;
  }
  (*(char *)(gen_frame + 0x2b)) = '\0';
  uVar5 = 0;
  switch((unsigned int)(uintptr_t)(*(char *)((int)this + 0x80))) {
  case '\0': ;
  case '\x01': ;
    if (((*(char *)(gen_frame + 0x2a)) == '\0') || ((*(char *)(gen_frame + 0x2b)) = '\x01', *(char *)((int)this + 0x80) == '\0')) {
      uVar5 = 0;
      if (-1 < (int)uVar6) {
        uVar5 = uVar6;
      }
    }
    else {
      uVar5 = 0xffffffff;
    }
    goto switchD_0059c40d_default;
  case '\x02': ;
    if (*(int *)(param_2 + 8) == 9) {
      uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x7c))(this GEN_EDX_ARG);
      uVar5 = uVar5 - 1;
      sVar1 = *(short *)((int)this + 0xf4);
      if ((1 < sVar1) && (0 < (int)uVar5)) {
        uVar5 = ((int)uVar5 / (int)sVar1) * (int)sVar1;
      }
    }
    else {
      if (*(int *)(param_2 + 8) != 10) {
        uVar5 = ((int)uVar6 < 0) - 1 & uVar6;
        goto switchD_0059c40d_default;
      }
      uVar5 = 0;
    }
    break;
  case '\x03': ;
    uVar5 = 0xffffffff;
    if ((*(char *)(gen_frame + 0x2a)) == '\0') goto switchD_0059c40d_default;
    break;
  default: ;
    goto switchD_0059c40d_default;
  }
  (*(char *)(gen_frame + 0x2b)) = '\x01';
switchD_0059c40d_default: ;
  uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x7c))(this GEN_EDX_ARG);
  if ((int)(short)uVar6 <= (int)uVar5) {
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x7c))(this GEN_EDX_ARG);
    if (uVar5 == 0) {
      uVar5 = 0xfffffffe;
    }
    else {
      uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x7c))(this GEN_EDX_ARG);
      uVar5 = uVar5 - 1;
    }
  }
  (*(char *)(gen_frame + 0x29)) = '\0';
  if ((((*(char *)(gen_frame + 0x2b)) == '\0') && (-1 < *(int *)((int)this + 0xd8))) &&
     (*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x21d))) != '\0')) {
    pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x74))(this GEN_EDX_ARG,*(int *)((int)this + 0xd8),0)));
    (*(char *)(gen_frame + 0x29)) = *(char *)((int)this + 0x127);
  }
  else {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x84))(this GEN_EDX_ARG,uVar5,(uint)((*(char *)(gen_frame + 0x2b)) == '\0'));
    pvVar7 = *(undefined * PTR32 *)((int)this + 0xcc);
    if (-1 < (int)pvVar7) {
      *(undefined * PTR32 *)((int)this + 0xd8) = pvVar7;
    }
    if ((*(char *)((int)this + 0x126) != '\0') &&
       ((pvVar7 = (undefined *)F_00589700(this GEN_EDX_ARG,1), *(char *)((int)this + 0x127) != '\0' ||
        ((*(char *)(gen_frame + 0x29)) = '\0', pvVar7 = REFG(void * PTR32, 0x1379860), *((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x21d))) == '\0')))) {
      (*(char *)(gen_frame + 0x29)) = '\x01';
    }
  }
  uVar5 = *(uint *)((int)this + 0xcc);
  if (-1 < (int)uVar5) {
    if (uVar5 != (*(uint *)(gen_frame + 0x24))) {
      bVar4 = *(byte *)((int)this + 0x60);
      pvVar7 = ((undefined *)GEN_TOP(CONCAT31((int3)((uint)((int)(uintptr_t)pvVar7) >> 8),bVar4)));
      if ((((bVar4 & 1) == 0) || ((bVar4 & 4) == 0)) ||
         ((*(char *)((int)this + 0x1c) != '\x01' ||
          ((*((char *)GEN_TOP((*(int *)((int)this + 0xc) + 0xf))) != '\t' || (*(int *)((int)this + 0xc4) < 0)))
          ))) {
        (*(byte *)(gen_frame + 0x13)) = (*(byte *)(gen_frame + 0x13)) ^ ((*(char *)(gen_frame + 0x2a)) * '\b' ^ (*(byte *)(gen_frame + 0x13))) & 8;
        (*(undefined1 *)(gen_frame + 0x12)) = 0;
        pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x88))
                                   (this GEN_EDX_ARG,0x24,param_1,((undefined1 *)(gen_frame + 0xc)),uVar5,
                                    (uint)(*(int *)(param_2 + 8) != 0))));
      }
    }
    if ((*(char *)((int)this + 0x11b) == '\0') &&
       (pvVar7 = (undefined *)F_005615f0(this GEN_EDX_ARG), (char)pvVar7 != '\0')) {
      uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x50))(this GEN_EDX_ARG,uVar5);
      pvVar3 = REFG(void * PTR32, 0x1379860);
      pvVar8 = (undefined *)F_0057f8d0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x14))) GEN_EDX_ARG,
                                    *(undefined4 *)((int)this + 0x70));
      pvVar7 = pvVar8;
      if (uVar5 != 0) {
        uVar9 = *(undefined4 *)(uVar5 + 0x70);
        uVar5 = F_0055b9e0(pvVar3 GEN_EDX_ARG);
        bVar4 = F_005612e0(uVar9,uVar5);
        pvVar7 = ((undefined *)GEN_TOP(CONCAT31(extraout_var,bVar4)));
        if (bVar4 == 0) {
          *(undefined1 *)((int)this + 0x124) = 1;
          pvVar3 = REFG(void * PTR32, 0x1379860);
          if (pvVar8 != (undefined *)0x0) {
            uVar9 = 0;
            uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x3c))(this GEN_EDX_ARG);
            pvVar7 = (undefined *)F_0059b300(pvVar3 GEN_EDX_ARG,uVar5,pvVar8,uVar9);
          }
          *(undefined1 *)((int)this + 0x124) = 0;
        }
      }
    }
  }
  if (((*(char *)(gen_frame + 0x29)) != '\0') && (0x7fffffff < *(uint *)((int)this + 0xc4))) {
    pvVar7 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x78))(this GEN_EDX_ARG)));
  }
  *(undefined1 *)((int)this + 0x11d) = 1;
  return (uint)pvVar7;
}

/* ref: FUN_0059c680 */
GEN_FRAME uint GEN_THISCALL F_0059c680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x59c680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  
  uVar1 = *param_2;
  if (this == (undefined *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)((int)this + 0x70);
  }
  while( true ) {
    if (uVar1 == 0) {
      (*(undefined2 *)(gen_frame + 0xc)) = 0x11;
      (*(uint *)(gen_frame + 0x14)) = 0;
      (*(uint *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined2 *)(gen_frame + 0xe)) = 0;
      (*(uint *)(gen_frame + 0x14)) = *param_2;
      (*(uint *)(gen_frame + 0x18)) = param_2[1];
      this_00 = (undefined *)0x0;
      if (this != (undefined *)0x0) {
        this_00 = *(undefined * PTR32 *)((int)this + 0x70);
      }
      uVar2 = F_005997b0(this_00 GEN_EDX_FWD,&(*(undefined2 *)(gen_frame + 0xc)));
      uVar1 = 0;
      if (uVar2 != 0) {
        *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x10000;
        uVar1 = param_1;
      }
      return uVar1;
    }
    if (uVar2 == uVar1) break;
    uVar1 = *(uint *)(uVar1 + 8);
  }
  return uVar1;
}

/* ref: FUN_0059c700 */
GEN_FRAME uint GEN_THISCALL F_0059c700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x59c700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  code * pcVar2;
  uint in_EAX = 0;
  
  iVar1 = *(int *)((int)this + 0xd0);
  if (-1 < iVar1) {
    if ((char)param_1 != '\0') {
      (*(undefined2 *)(gen_frame + 0xc)) = 0x27;
      (*(int *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(int *)(gen_frame + 0x1c)) = iVar1;
      (*(undefined2 *)(gen_frame + 0xe)) = 0;
      F_005997b0(*(undefined * PTR32 *)((int)this + 0x70) GEN_EDX_FWD,&(*(undefined2 *)(gen_frame + 0xc)));
    }
    pcVar2 = *(gen_code32 *)(*(int *)this + 0x78);
    *(undefined4 *)((int)this + 0xd0) = 0xffffffff;
    (*pcVar2)(this);
    in_EAX = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x80))(this GEN_EDX_ARG);
  }
  return in_EAX;
}

/* ref: FUN_0059c780 */
GEN_FRAME unsigned int GEN_THISCALL F_0059c780(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x59c780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  
  if (-1 < *(int *)((int)this + 200)) {
    uVar1 = *(uint *)((int)this + 200);
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x7c))(this GEN_EDX_FWD);
    if ((int)uVar1 < (int)uVar3) {
      (*(undefined2 *)(gen_frame + 0xc)) = 0x1f;
      (*(uint *)(gen_frame + 0x24)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(uint *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined2 *)(gen_frame + 0xe)) = 0;
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 0)) = 0;
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 1)) = 0;
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 0)) = 0;
      uVar2 = (ushort)(*(uint *)(gen_frame + 0x24));
      if (*(char *)((int)this + 0x11f) != '\0') {
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 1)) = 8;
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 0)) = 0x800;
        uVar2 = (ushort)(*(uint *)(gen_frame + 0x24));
      }
      (*(uint *)(gen_frame + 0x24)) = (uint)uVar2;
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x20)) + 2)) = *(undefined2 *)((int)this + 0xe0);
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x20)) + 0)) = *(undefined2 *)((int)this + 0xdc);
      (*(undefined4 *)(gen_frame + 0x20)) = CONCAT22(*(undefined2 *)((int)this + 0xe0),*(undefined2 *)((int)this + 0xdc));
      (*(uint *)(gen_frame + 0x1c)) = ((int)uVar1 < 0) - 1 & uVar1;
      (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)((int)this + 0x84);
      F_005997b0(*(undefined * PTR32 *)((int)this + 0x70) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0xc)));
    }
  }
  return;
}

/* ref: FUN_0059c830 */
GEN_FRAME uint GEN_THISCALL F_0059c830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x59c830u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  undefined * this_00;
  
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined2 *)(gen_frame + 0xe)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = *param_1;
  (*(undefined4 *)(gen_frame + 0x18)) = param_1[1];
  (*(undefined2 *)(gen_frame + 0xc)) = (short)param_2;
  if (param_2 == 0x2d) {
    (*(undefined4 *)(gen_frame + 0x14)) = *param_1;
    (*(undefined4 *)(gen_frame + 0x18)) = param_1[1];
    (*(undefined4 *)(gen_frame + 0x1c)) = param_1[2];
  }
  else if (((param_2 == 0x19) || (param_2 == 0x12)) || (param_2 == 0x11)) {
    (*(undefined4 *)(gen_frame + 0x18)) = param_1[1];
    (*(undefined4 *)(gen_frame + 0x14)) = *param_1;
  }
  this_00 = (undefined *)0x0;
  if (this != (undefined *)0x0) {
    this_00 = *(undefined * PTR32 *)((int)this + 0x70);
  }
  uVar1 = F_005997b0(this_00 GEN_EDX_FWD,&(*(undefined2 *)(gen_frame + 0xc)));
  uVar2 = 0;
  if (uVar1 != 0) {
    *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x80000;
    *(undefined1 *)(param_3 + 0x15) = (undefined1)(*(undefined4 *)(gen_frame + 0x10));
    *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x10000;
    uVar2 = param_3;
  }
  return uVar2;
}

/* ref: FUN_0059c8d0 */
GEN_FRAME uint GEN_THISCALL F_0059c8d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x59c8d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined1 uVar1;
  undefined * this_00;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (this == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)((int)this + 0x70);
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x130) + 0x10))))((int)this + 0x130,uVar3);
  this_00 = *(undefined * PTR32 *)((int)this + 0x70);
  (*(uint *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  uVar1 = *(undefined1 *)(param_1 + 7);
  uVar2 = *(ushort *)(param_1 + 6);
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 0)) = *(undefined1 *)(param_1 + 6);
  ((undefined4 *)(gen_frame + 0xc))[0] = 0x2d;
  (*(int *)(gen_frame + 0x14)) = (int)this + 0x130;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this_00;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 1)) = uVar1;
  (*(uint *)(gen_frame + 0x1c)) = (uint)uVar2;
  uVar4 = F_005997b0(this_00 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0xc)));
  return uVar4;
}

/* ref: Component::GUI2::AtkComponentTreeList::vf34 */
GEN_FRAME uint GEN_THISCALL F_0059c940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x59c940u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint param_4 = (uint)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  
  uVar3 = param_3[1];
  uVar1 = *param_3;
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(uint * PTR32 *)(gen_frame + 0x18)) = (uint *)0x0;
  (*(uint *)(gen_frame + 0x1c)) = 0;
  (*(uint *)(gen_frame + 0x20)) = 0;
  (*(uint *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined2 *)(gen_frame + 0xe)) = 0;
  uVar2 = param_3[2];
  (*(uint *)(gen_frame + 0x14)) = uVar1;
  (*(uint *)(gen_frame + 0x1c)) = uVar2;
  (*(uint *)(gen_frame + 0x20)) = param_3[3];
  (*(uint * PTR32 *)(gen_frame + 0x18)) = (uint *)uVar3;
  uVar3 = param_3[4];
  (*(undefined2 *)(gen_frame + 0xc)) = (short)param_1;
  (*(uint *)(gen_frame + 0x24)) = uVar3;
  F_005620a0(this GEN_EDX_FWD,&(*(uint *)(gen_frame + 0x14)),param_3,param_4,param_1);
  if (param_1 == 0x19) {
    (*(uint * PTR32 *)(gen_frame + 0x18)) = param_3;
  }
  else {
    if (param_4 < *(uint *)(this + 0x158)) {
      puVar4 = *((uint * PTR32 *)GEN_TOP((*(int *)(this + 300) + param_4 * 4)));
    }
    else {
      puVar4 = (uint *)0x0;
    }
    (*(uint * PTR32 *)(gen_frame + 0x18)) = puVar4;
  }
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x50))(this GEN_EDX_ARG,param_4);
  (*(uint *)(gen_frame + 0x14)) = uVar3;
  if (uVar3 == 0) {
    return 0;
  }
  uVar3 = F_005997b0(*(undefined * PTR32 *)(this + 0x70) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0xc)));
  if ((uVar3 != 0) && ((char)param_5 != '\0')) {
    *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x10000;
  }
  return uVar3;
}

/* ref: FUN_0059ca10 */
GEN_FRAME uint GEN_THISCALL F_0059ca10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x59ca10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  if (((char)param_3 == '\0') && ((*(int *)&gen_a1) == param_2)) {
    return 0;
  }
  (*(undefined2 *)(gen_frame + 0xc)) = 0x19;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(int *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined2 *)(gen_frame + 0xe)) = 0;
  (*(int *)(gen_frame + 0x14)) = (*(int *)&gen_a1);
  (*(int *)(gen_frame + 0x18)) = param_2;
  if (this == (undefined *)0x0) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = *(undefined * PTR32 *)((int)this + 0x70);
  }
  uVar1 = F_005997b0(this_00 GEN_EDX_FWD,&(*(undefined2 *)(gen_frame + 0xc)));
  iVar2 = (*(int *)&gen_a1);
  if (*(char *)((int)this + 0xcd) == '\0') {
    iVar2 = *(int *)((int)this + 0xb0);
  }
  F_0056de20(this GEN_EDX_ARG,iVar2);
  F_00562a80(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0059caa0 */
GEN_FRAME uint GEN_THISCALL F_0059caa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x59caa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  short sVar2;
  byte bVar3;
  undefined * in_EAX = 0;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined * this_00;
  
  if ((*(undefined * PTR32 *)((int)this + 0x88) != (undefined *)0x0) && (in_EAX = param_1, -1 < (int)param_1)) {
    F_005623b0(*(undefined * PTR32 *)((int)this + 0x88) GEN_EDX_FWD,param_1);
    iVar1 = *(int *)((int)this + 0x88);
    if ((*(int *)(iVar1 + 0x84) == 0) ||
       (iVar5 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x84) + 0x70))), iVar5 == 0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(uint *)(iVar5 + 4);
      if (10000 < uVar6) {
        uVar6 = uVar6 / 10000;
      }
    }
    iVar5 = *(int *)(iVar1 + 0xa0);
    bVar3 = 0;
    if (*(byte *)(iVar1 + 0x110) != 0) {
      do {
        if ((int)*(short *)(iVar5 + 10) == uVar6) goto LAB_0059cb25;
        bVar3 = bVar3 + 1;
        iVar5 = iVar5 + 0xc;
      } while (bVar3 < *(byte *)(iVar1 + 0x110));
    }
    iVar5 = 0;
LAB_0059cb25: ;
    if (iVar5 == 0) {
      in_EAX = *(undefined * PTR32 *)((int)this + 0x88);
      this_00 = *(undefined * PTR32 *)((int)in_EAX + 0x84);
    }
    else {
      sVar2 = (short)((longlong)(ulonglong)(ushort)((int)(uintptr_t)param_1) % (longlong)(*(short *)(iVar5 + 8) + 1));
      if (sVar2 == 0) {
        in_EAX = *(undefined * PTR32 *)((int)this + 0x88);
        this_00 = *(undefined * PTR32 *)((int)in_EAX + 0x84);
      }
      else {
        in_EAX = (undefined *)F_005bda70(((undefined *)GEN_TOP((*(int *)(iVar5 + 4) - 0x90 + sVar2 * 0x90))) GEN_EDX_ARG,0xe);
        this_00 = in_EAX;
      }
    }
    if (((*(char *)((int)this + 0x92) != '\0') && (*(int *)((int)this + 0x84) != 0)) &&
       (this_00 != (undefined *)0x0)) {
      uVar6 = F_0056d330(*(undefined * PTR32 *)((int)this + 0x88) GEN_EDX_ARG,param_1);
      F_0058e4c0(this GEN_EDX_ARG,uVar6);
      uVar6 = F_005627b0(this_00 GEN_EDX_ARG);
      in_EAX = (undefined *)F_005929b0(this GEN_EDX_ARG,uVar6);
    }
    iVar1 = REFG(int, 0x1379860);
    if (*(char *)((int)this + 0x90) != '\0') {
      uVar6 = *((uint *)GEN_TOP((*(int *)(REFG(int, 0x1379860) + 0x14) + 0xcc)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x88) + 0x8c))))(*(int * PTR32 *)((int)this + 0x88) GEN_EDX_ARG);
      if ((uVar4 != 0) && (uVar6 == 0)) {
        uVar6 = F_0057f8d0(*(undefined * PTR32 *)(iVar1 + 0x14) GEN_EDX_ARG,uVar4);
      }
      in_EAX = (undefined *)F_0059b1c0(*(undefined * PTR32 *)(iVar1 + 0x18) GEN_EDX_ARG,uVar4,uVar6,0);
    }
  }
  return (uint)in_EAX;
}

/* ref: FUN_0059cc00 */
GEN_FRAME uint GEN_THISCALL F_0059cc00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x59cc00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  (*(undefined2 *)(gen_frame + 0xc)) = 0x47;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)0x0;
  (*(int *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined2 *)(gen_frame + 0xe)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  (*(int *)(gen_frame + 0x1c)) = param_1;
  (*(int *)(gen_frame + 0x20)) = (param_1 != 0) + 1;
  if (this == (undefined *)0x0) {
    uVar1 = F_005997b0((undefined *)0x0 GEN_EDX_FWD,&(*(undefined2 *)(gen_frame + 0xc)));
    return uVar1;
  }
  uVar1 = F_005997b0(*(undefined * PTR32 *)((int)this + 0x70) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0xc)));
  return uVar1;
}

/* ref: FUN_0059cc60 */
GEN_FRAME uint GEN_THISCALL F_0059cc60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x59cc60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  undefined * this_00;
  
  (*(undefined2 *)(gen_frame + 0xc)) = (undefined2)param_1;
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined2 *)(gen_frame + 0xe)) = 0;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = (byte)param_3;
  (*(uint *)(gen_frame + 0x14)) = (uint)(byte)param_3;
  this_00 = (undefined *)0x0;
  if (this != (undefined *)0x0) {
    this_00 = *(undefined * PTR32 *)((int)this + 0x70);
  }
  uVar1 = F_005997b0(this_00 GEN_EDX_FWD,&(*(undefined2 *)(gen_frame + 0xc)));
  uVar2 = 0;
  if (uVar1 != 0) {
    *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x10000;
    uVar2 = param_2;
  }
  return uVar2;
}

/* ref: FUN_0059ccc0 */
GEN_FRAME byte GEN_THISCALL F_0059ccc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x59ccc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  undefined4 uVar2;
  undefined * this_00;
  
  (*(undefined2 *)(gen_frame + 0xc)) = 0x34;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(uint *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined2 *)(gen_frame + 0xe)) = 0;
  if (this == (undefined *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)this + 0x84;
  }
  (*(int *)(gen_frame + 0x14)) = iVar1;
  if (this == (undefined *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)((int)this + 0x70);
  }
  (*(undefined4 *)(gen_frame + 0x18)) = uVar2;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 0)) = *(undefined1 *)(param_1 + 6);
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 1)) = *(undefined1 *)(param_1 + 7);
  (*(uint *)(gen_frame + 0x1c)) = (uint)*(ushort *)(param_1 + 6);
  (*(int *)(gen_frame + 0x10)) = 1;
  this_00 = (undefined *)0x0;
  if (this != (undefined *)0x0) {
    this_00 = *(undefined * PTR32 *)((int)this + 0x70);
  }
  F_005997b0(this_00 GEN_EDX_FWD,&(*(undefined2 *)(gen_frame + 0xc)));
  return (*(int *)(gen_frame + 0x10)) != 0;
}

/* ref: FUN_0059cd40 */
GEN_FRAME uint GEN_THISCALL F_0059cd40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x59cd40u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * this;
  code * pcVar1;
  int iVar2;
  uint uVar3;
  float * pfVar4;
  undefined * this_00;
  float10 fVar5;
  
  pcVar1 = *(gen_code32 *)(*param_1 + 0x30);
  *(undefined1 *)((int)param_1 + 0x1a) = 0;
  (*pcVar1)(param_1);
  (*(undefined2 *)(gen_frame + 0x8)) = 0x2e;
  (*(uint *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  this = param_1 - 0x21;
  (*(undefined2 *)(gen_frame + 0xa)) = 0;
  (*(uint *)(gen_frame + 0x10)) = -(uint)(param_1 != (int *)0x84) & (uint)param_1;
  if (this == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_1[-5];
  }
  (*(int *)(gen_frame + 0x14)) = iVar2;
  if (this == (int *)0x0) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = (undefined *)param_1[-5];
  }
  F_005997b0(this_00 GEN_EDX_FWD,&(*(undefined2 *)(gen_frame + 0x8)));
  if (param_1[3] != 0) {
    F_00406ad0(param_1[3]);
    param_1[3] = 0;
  }
  if (((char)param_2 != '\0') && (param_1[1] != 0)) {
    uVar3 = F_00404270();
    pfVar4 = (float *)F_00406bd0(0xc,0,uVar3,0);
    if (pfVar4 == (float *)0x0) {
      pfVar4 = (float *)0x0;
    }
    else {
      *pfVar4 = 0.0;
      pfVar4[1] = 0.0;
      pfVar4[2] = 0.0;
    }
    iVar2 = param_1[1];
    param_1[3] = (int)pfVar4;
    if (iVar2 != 0) {
      param_2 = *(uint *)(iVar2 + 0x38);
      (*(float *)(gen_frame + 0x28)) = *(float *)(iVar2 + 0x3c);
    }
    fVar5 = (float10)*(double *)&REFG(undefined, 0x10a1b58);
    *pfVar4 = (float)(-((float10)GEN_TOD(gen_bits2f(param_2))) / fVar5);
    uVar3 = param_1[3];
    *(float *)(uVar3 + 4) = (float)(-(float10)(*(float *)(gen_frame + 0x28)) / fVar5);
    return uVar3;
  }
  uVar3 = F_0056e230(this GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_0059ce60 */
GEN_FRAME uint GEN_THISCALL F_0059ce60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x59ce60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined3 extraout_var = 0;
  
  (*(undefined1 *)(gen_frame + 0xa)) = (undefined1)param_1;
  (*(undefined1 *)(gen_frame + 0xb)) = 8;
  bVar1 = F_0059ccc0(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x4)));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_0059ce80 */
GEN_FRAME byte GEN_THISCALL F_0059ce80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x59ce80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  (*(undefined2 *)(gen_frame + 0xc)) = 0x47;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)0x0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined2 *)(gen_frame + 0xe)) = 0;
  (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0xe)) + 0)) = 1;
  (*(undefined2 *)(gen_frame + 0xe)) = 1;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  (*(undefined4 *)(gen_frame + 0x1c)) = param_1;
  if (*(char *)((int)this + 0x80) != '\0') {
    *(undefined1 *)((int)this + 0x80) = 0x7f;
  }
  uVar1 = F_005997b0(*(undefined * PTR32 *)((int)this + 0x70) GEN_EDX_FWD,&(*(undefined2 *)(gen_frame + 0xc)));
  return uVar1 != 0;
}

/* ref: FUN_0059cee0 */
GEN_FRAME uint GEN_THISCALL F_0059cee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x59cee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  
  iVar2 = REFG(int, 0x1379860);
  if (((*(char *)((int)this + 0x80) != '\0') && (*(char *)((int)this + 0x7e) != 0)) &&
     (*(char *)((int)this + 0x7e) != 0xff)) {
    bVar3 = F_0059ce80(this GEN_EDX_FWD,(-(uint)((char)param_1 != '\0') & 0xe) + 2);
    return CONCAT31(extraout_var,bVar3);
  }
  uVar4 = *(uint *)((int)this + 0x144);
  iVar1 = *(int *)((int)this + 0x68);
  if ((iVar1 != 0) && (uVar4 == 0)) {
    uVar4 = F_0057f8d0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14) GEN_EDX_ARG,iVar1);
  }
  uVar4 = F_0059b1c0(*(undefined * PTR32 *)(iVar2 + 0x18) GEN_EDX_ARG,iVar1,uVar4,0x11);
  return uVar4;
}

/* ref: FUN_0059cf50 */
GEN_FRAME unsigned int GEN_THISCALL F_0059cf50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x59cf50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((*(char *)((int)this + 0x80) != '\0') && (*(char *)((int)this + 0x7f) != 0)) &&
     (*(char *)((int)this + 0x7f) != 0xff)) {
    F_0059ce80(this GEN_EDX_FWD,(-(uint)((char)param_1 != '\0') & 0xe) + 1);
  }
  return;
}

/* ref: FUN_0059cf90 */
GEN_FRAME uint GEN_THISCALL F_0059cf90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x59cf90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)((int)this + 0x178);
  uVar3 = param_1;
  if ((int)param_1 < (int)*(uint *)((int)this + 0x268)) {
    uVar3 = *(uint *)((int)this + 0x268);
  }
  uVar2 = *(uint *)((int)this + 0x26c);
  if ((int)uVar2 < (int)uVar3) {
    uVar3 = uVar2;
  }
  if (uVar3 != uVar1) {
    *(uint *)((int)this + 0x178) = uVar3;
    if ((char)param_2 != '\0') {
      (*(undefined2 *)(gen_frame + 0xc)) = 0x19;
      (*(uint *)(gen_frame + 0x18)) = 0;
      (*(uint *)(gen_frame + 0x18)) = uVar1;
      (*(uint *)(gen_frame + 0x14)) = 0;
      (*(uint *)(gen_frame + 0x14)) = uVar3;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined2 *)(gen_frame + 0xe)) = 0;
      F_005997b0(*(undefined * PTR32 *)((int)this + 0x70) GEN_EDX_FWD,&(*(undefined2 *)(gen_frame + 0xc)));
    }
    if ((char)param_3 != '\0') {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x34))(this GEN_EDX_ARG);
    }
    uVar2 = F_0057eb30(*(undefined * PTR32 *)((int)this + 0x8c) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x178),
                         (uint)*(byte *)((int)this + 0x278),0,(uint)*(byte *)((int)this + 0x180),0);
  }
  return uVar2;
}

/* ref: FUN_0059d040 */
GEN_FRAME unsigned int GEN_THISCALL F_0059d040(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x59d040u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (this != (undefined *)0x0) {
    *(undefined4 *)((int)this + 0x268) = param_1;
    F_0059cf90(this GEN_EDX_FWD,*(undefined4 *)((int)this + 0x178),param_2,param_3);
  }
  return;
}

/* ref: FUN_0059d070 */
GEN_FRAME uint GEN_THISCALL F_0059d070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x59d070u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint in_EAX = 0;
  
  if (this != (undefined *)0x0) {
    *(undefined4 *)((int)this + 0x26c) = param_1;
    F_0059cf90(this GEN_EDX_FWD,*(undefined4 *)((int)this + 0x178),param_2,param_3);
    in_EAX = F_0056e6e0(this GEN_EDX_ARG);
  }
  return in_EAX;
}

/* ref: FUN_0059d0b0 */
GEN_FRAME byte GEN_THISCALL F_0059d0b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x59d0b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  (*(undefined2 *)(gen_frame + 0xc)) = 0x47;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)0x0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined2 *)(gen_frame + 0xe)) = 0;
  (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0xe)) + 0)) = 1;
  (*(undefined2 *)(gen_frame + 0xe)) = 1;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  (*(undefined4 *)(gen_frame + 0x1c)) = param_1;
  if (*(char *)((int)this + 0x80) != '\0') {
    *(undefined1 *)((int)this + 0x80) = 0x7f;
  }
  uVar1 = F_005997b0(*(undefined * PTR32 *)((int)this + 0x70) GEN_EDX_FWD,&(*(undefined2 *)(gen_frame + 0xc)));
  return uVar1 != 0;
}

/* ref: FUN_0059d110 */
GEN_NOFRAME uint GEN_THISCALL F_0059d110(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x59d110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  
  if (((*(char *)((int)this + 0x80) != '\0') && (*(char *)((int)this + 0x7e) != 0)) &&
     (*(char *)((int)this + 0x7e) != 0xff)) {
    bVar3 = F_0059d0b0(this GEN_EDX_FWD,2);
    return CONCAT31(extraout_var,bVar3);
  }
  if (*(int *)((int)this + 0x144) == 0) {
    uVar4 = F_0057f8d0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x6c));
    *(uint *)((int)this + 0x144) = uVar4;
  }
  iVar2 = REFG(int, 0x1379860);
  uVar4 = *(uint *)((int)this + 0x144);
  iVar1 = *(int *)((int)this + 0x68);
  if ((iVar1 != 0) && (uVar4 == 0)) {
    uVar4 = F_0057f8d0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14) GEN_EDX_ARG,iVar1);
  }
  uVar4 = F_0059b1c0(*(undefined * PTR32 *)(iVar2 + 0x18) GEN_EDX_ARG,iVar1,uVar4,0x11);
  return uVar4;
}

/* ref: FUN_0059d190 */
GEN_NOFRAME uint GEN_THISCALL F_0059d190(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x59d190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  
  if (((*(char *)((int)this + 0x80) != '\0') && (*(char *)((int)this + 0x7f) != 0)) &&
     (*(char *)((int)this + 0x7f) != 0xff)) {
    bVar3 = F_0059d0b0(this GEN_EDX_FWD,1);
    return CONCAT31(extraout_var,bVar3);
  }
  if (*(int *)((int)this + 0x144) == 0) {
    uVar4 = F_0057f8d0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x6c));
    *(uint *)((int)this + 0x144) = uVar4;
  }
  iVar2 = REFG(int, 0x1379860);
  uVar4 = *(uint *)((int)this + 0x144);
  iVar1 = *(int *)((int)this + 0x68);
  if ((iVar1 != 0) && (uVar4 == 0)) {
    uVar4 = F_0057f8d0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14) GEN_EDX_ARG,iVar1);
  }
  uVar4 = F_0059b1c0(*(undefined * PTR32 *)(iVar2 + 0x18) GEN_EDX_ARG,iVar1,uVar4,0x11);
  return uVar4;
}

/* ref: FUN_0059d210 */
GEN_FRAME byte GEN_THISCALL F_0059d210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x59d210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  
  bVar1 = F_00a34970(*(undefined * PTR32 *)(param_1 + 8) GEN_EDX_FWD,2);
  if ((bVar1 != 0) && (*(char *)((int)this + 0x84) != '\0')) {
    F_0059d110(this GEN_EDX_ARG);
  }
  return 1;
}

/* ref: FUN_0059d240 */
GEN_FRAME uint GEN_THISCALL F_0059d240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x59d240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)((int)this + 0x178);
  uVar3 = param_1;
  if ((int)param_1 < (int)*(uint *)((int)this + 0x268)) {
    uVar3 = *(uint *)((int)this + 0x268);
  }
  uVar2 = *(uint *)((int)this + 0x26c);
  if ((int)uVar2 < (int)uVar3) {
    uVar3 = uVar2;
  }
  *(undefined4 *)((int)this + 0x74) = 0x16;
  if (uVar3 != uVar1) {
    (*(undefined2 *)(gen_frame + 0xc)) = 0x19;
    (*(uint *)(gen_frame + 0x18)) = 0;
    (*(uint *)(gen_frame + 0x18)) = uVar1;
    (*(uint *)(gen_frame + 0x14)) = 0;
    *(uint *)((int)this + 0x178) = uVar3;
    (*(uint *)(gen_frame + 0x14)) = uVar3;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined2 *)(gen_frame + 0xe)) = 0;
    F_005997b0(*(undefined * PTR32 *)((int)this + 0x70) GEN_EDX_FWD,&(*(undefined2 *)(gen_frame + 0xc)));
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x34))(this GEN_EDX_ARG);
    uVar2 = F_0057eb30(*(undefined * PTR32 *)((int)this + 0x8c) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x178),
                         (uint)*(byte *)((int)this + 0x278),0,(uint)*(byte *)((int)this + 0x180),0);
  }
  *(undefined4 *)((int)this + 0x74) = 0xffffffff;
  return uVar2;
}

/* ref: Component::GUI2::AtkComponentJournalCanvas::vf2 */
GEN_FRAME uint GEN_THISCALL F_0059d2f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x59d2f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_1 & 0xffff;
  if (uVar2 == 9) {
    (*(uint *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(this + 0x9c);
    (*(undefined4 *)(gen_frame + 0xc)) = 0x19;
    (*(uint *)(gen_frame + 0x14)) = param_2;
    F_005641b0(this GEN_EDX_FWD,param_2);
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x34))(this GEN_EDX_ARG);
  }
  else {
    if (uVar2 != 0xc) {
      return uVar2;
    }
    if ((char)param_4[1] != '\0') {
      return (uint)param_4;
    }
    if (*param_4 != 1) {
      return (uint)param_4;
    }
    uVar1 = *(undefined4 *)(this + 0x9c);
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 0)) = 0x19;
    (*(uint *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 2)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x19;
    (*(undefined4 *)(gen_frame + 0x18)) = uVar1;
    (*(uint *)(gen_frame + 0x14)) = param_2;
    F_005641b0(this GEN_EDX_ARG,param_2);
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x34))(this GEN_EDX_ARG);
  }
  uVar3 = F_005997b0(*(undefined * PTR32 *)(this + 0x70) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)));
  uVar2 = 0;
  if (uVar3 != 0) {
    *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x10000;
    uVar2 = param_3;
  }
  return uVar2;
}

/* ref: FUN_0059d3d0 */
GEN_FRAME uint GEN_THISCALL F_0059d3d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x59d3d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined2 * param_4 = (undefined2 *)(uintptr_t)gen_a4;
  char * param_5 = (char *)(uintptr_t)gen_a5;
  undefined * pvVar1;
  undefined2 * puVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  uint local_8;
  
  puVar2 = param_4;
  local_8 = 0;
  if ((*(int *)&gen_a3) - 7U < 4) {
    if (*param_5 != '\0') {
      return 0;
    }
    bVar3 = F_00a34970(param_1 GEN_EDX_FWD,(*(int *)&gen_a3));
    if (bVar3 == 0) {
      bVar3 = F_00a34a70(param_1 GEN_EDX_ARG,(*(int *)&gen_a3));
      if (bVar3 == 0) {
        bVar3 = F_00a34870(param_1 GEN_EDX_ARG,(*(int *)&gen_a3));
        if (bVar3 == 0) goto LAB_0059d487;
        uVar5 = 3;
      }
      else {
        uVar5 = 2;
      }
      local_8 = F_0059af50(param_2,uVar5,(*(int *)&gen_a3),param_4);
    }
    else {
      *param_4 = 0xc;
      param_4 = (undefined2 *)0x0;
      *(int *)(puVar2 + 4) = (*(int *)&gen_a3);
      *(undefined1 *)(puVar2 + 6) = 0;
      if (param_2 != (undefined *)0x0) {
        param_4 = (undefined2 *)F_005997b0(param_2 GEN_EDX_ARG,puVar2);
      }
      pvVar1 = REFG(void * PTR32, 0x1379860);
      local_8 = (uint)param_4;
      if ((*(byte *)(puVar2 + 1) & 2) == 0) {
        *(bool *)(puVar2 + 0xe) = param_4 != (undefined2 *)0x0;
        uVar4 = F_00599f80(pvVar1 GEN_EDX_ARG,puVar2);
        local_8 = (uint)param_4 | uVar4;
      }
    }
LAB_0059d487: ;
    bVar3 = F_00a34de0(param_1 GEN_EDX_ARG,(*(int *)&gen_a3));
    if (bVar3 != 0) {
      *puVar2 = 0xc;
      param_1 = (undefined *)0x0;
      *(int *)(puVar2 + 4) = (*(int *)&gen_a3);
      *(undefined1 *)(puVar2 + 6) = 1;
      if (param_2 != (undefined *)0x0) {
        param_1 = (undefined *)F_005997b0(param_2 GEN_EDX_ARG,puVar2);
      }
      pvVar1 = REFG(void * PTR32, 0x1379860);
      if ((*(byte *)(puVar2 + 1) & 2) == 0) {
        *(bool *)(puVar2 + 0xe) = param_1 != (undefined *)0x0;
        uVar4 = F_00599f80(pvVar1 GEN_EDX_ARG,puVar2);
        param_1 = (undefined *)((uint)param_1 | uVar4);
      }
      *param_5 = (local_8 | (uint)param_1) != 0;
      return local_8 | (uint)param_1;
    }
    *param_5 = local_8 != 0;
    return local_8;
  }
  bVar3 = F_00a34970(param_1 GEN_EDX_ARG,(*(int *)&gen_a3));
  if (bVar3 == 0) {
    bVar3 = F_00a34a70(param_1 GEN_EDX_ARG,(*(int *)&gen_a3));
    if (bVar3 == 0) {
      bVar3 = F_00a34870(param_1 GEN_EDX_ARG,(*(int *)&gen_a3));
      if ((bVar3 == 0) || (((*(int *)&gen_a3) != 0xf && ((*(int *)&gen_a3) != 0x10)))) goto LAB_0059d5a4;
      *param_4 = 0xd;
      *(undefined1 *)(param_4 + 6) = 3;
    }
    else {
      *param_4 = 0xc;
      *(undefined1 *)(param_4 + 6) = 2;
    }
  }
  else {
    *param_4 = 0xc;
    *(undefined1 *)(param_4 + 6) = 0;
  }
  param_5 = (char *)0x0;
  *(int *)(param_4 + 4) = (*(int *)&gen_a3);
  if (param_2 != (undefined *)0x0) {
    param_5 = (char *)F_005997b0(param_2 GEN_EDX_ARG,param_4);
  }
  pvVar1 = REFG(void * PTR32, 0x1379860);
  if ((*(byte *)(param_4 + 1) & 2) == 0) {
    *(bool *)(param_4 + 0xe) = param_5 != (char *)0x0;
    uVar4 = F_00599f80(pvVar1 GEN_EDX_ARG,param_4);
    param_5 = (char *)((uint)param_5 | uVar4);
  }
  local_8 = (uint)param_5;
LAB_0059d5a4: ;
  bVar3 = F_00a34de0(param_1 GEN_EDX_ARG,(*(int *)&gen_a3));
  if (bVar3 == 0) {
    return local_8;
  }
  *param_4 = 0xc;
  param_1 = (undefined *)0x0;
  *(int *)(param_4 + 4) = (*(int *)&gen_a3);
  *(undefined1 *)(param_4 + 6) = 1;
  if (param_2 != (undefined *)0x0) {
    param_1 = (undefined *)F_005997b0(param_2 GEN_EDX_ARG,param_4);
  }
  pvVar1 = REFG(void * PTR32, 0x1379860);
  if ((*(byte *)(param_4 + 1) & 2) == 0) {
    *(bool *)(param_4 + 0xe) = param_1 != (undefined *)0x0;
    uVar4 = F_00599f80(pvVar1 GEN_EDX_ARG,param_4);
    param_1 = (undefined *)((uint)param_1 | uVar4);
  }
  return local_8 | (uint)param_1;
}

/* ref: Component::GUI2::AtkModule::vf48 */
GEN_NOFRAME uint GEN_THISCALL F_0059d610(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x59d610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x84))(this GEN_EDX_FWD);
  if (((char)uVar1 != '\0') && (uVar1 = 0, *(int *)(this + 0xb8) != 0)) {
    uVar1 = F_0059b1c0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0xb8) + 0x18))) GEN_EDX_ARG,0,0,0);
  }
  return uVar1;
}

/* ref: FUN_0059d640 */
GEN_FRAME uint GEN_THISCALL F_0059d640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x59d640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint in_EAX = 0;
  
  if ((this != (undefined *)0x0) && (*(undefined * PTR32 *)((int)this + 0x1c) != (undefined *)0x0)) {
    in_EAX = F_0059ba30(*(undefined * PTR32 *)((int)this + 0x1c) GEN_EDX_FWD,2,param_1,0,0);
  }
  return in_EAX;
}

/* ref: FUN_0059d670 */
GEN_FRAME uint GEN_THISCALL F_0059d670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x59d670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint in_EAX = 0;
  
  if ((this != (undefined *)0x0) && (*(undefined * PTR32 *)((int)this + 0x1c) != (undefined *)0x0)) {
    in_EAX = F_0059ba30(*(undefined * PTR32 *)((int)this + 0x1c) GEN_EDX_FWD,3,param_1,0,0);
  }
  return in_EAX;
}

/* ref: FUN_0059d6a0 */
GEN_FRAME uint GEN_THISCALL F_0059d6a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x59d6a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  if ((*(int *)((int)this + 0x90) != 0) &&
     (this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x90) + 0x1c))), this_00 != (undefined *)0x0)) {
    F_0059ba30(this_00 GEN_EDX_FWD,3,param_1,0,0);
  }
  uVar1 = F_0059b3f0(this GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: FUN_0059d6e0 */
GEN_FRAME uint GEN_THISCALL F_0059d6e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x59d6e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  ushort * puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (ushort *)F_0059bb60(this GEN_EDX_FWD,param_1,param_2);
  uVar3 = param_2;
  if (puVar1 != (ushort *)0x0) {
    uVar3 = (uint)*puVar1;
    if ((byte)puVar1[7] == 1) {
      *(ushort *)((int)this + 0x22) = *(ushort *)((int)this + 0x22) & 0x7fff;
      F_00573430(this GEN_EDX_ARG,uVar3);
    }
    else {
      uVar3 = F_0059ba30(this GEN_EDX_ARG,(uint)(byte)puVar1[7],(uint)*(byte *)((int)puVar1 + 0xf),
                           param_2 - uVar3,uVar3);
    }
  }
  uVar2 = (uint)*(ushort *)((int)this + 0x12);
  *(uint *)((int)this + 0x18) = uVar3;
  if (uVar2 < uVar3) {
    *(ushort *)((int)this + 0x22) = *(ushort *)((int)this + 0x22) & 0x7fff;
    *(uint *)((int)this + 0x18) = uVar2;
    uVar2 = F_00573430(this GEN_EDX_ARG,uVar2);
  }
  return uVar2;
}

/* ref: FUN_0059d760 */
GEN_FRAME uint GEN_THISCALL F_0059d760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x59d760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  uint uVar6;
  int * piVar7;
  uint * puVar8;
  uint uVar9;
  
  *(int *)((int)this + 0x44) = *(int *)((int)this + 0x44) + 1;
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x18);
  puVar3 = (undefined4 *)*puVar2;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  do {
    while( true ) {
      if (puVar3 == puVar2) {
        uVar9 = 0;
        puVar8 = (uint *)((int)this + 0x24);
        do {
          uVar6 = *puVar8;
          if (uVar6 == 0xffffffff) {
            return 0xffffffff;
          }
          (*(uint *)(gen_frame + 0x18)) = uVar6;
          if (0 < (int)uVar6) {
            F_00a4b450(this GEN_EDX_FWD,uVar6);
            F_005c60b0((undefined *)((int)this + 0x14) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x18)));
            uVar6 = F_005c9640((undefined *)((int)this + 0x14) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)));
            this = (*(undefined * PTR32 *)(gen_frame + 0x14));
          }
          *puVar8 = 0xffffffff;
          uVar9 = uVar9 + 1;
          puVar8 = puVar8 + 1;
        } while (uVar9 < 8);
        return uVar6;
      }
      if (*(int *)(puVar3[4] + 4) != 1) break;
      F_0059c000(puVar3[4] GEN_EDX_ARG,*(uint *)((int)this + 0x44));
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
    uVar9 = 0;
    piVar7 = (int *)((int)this + 0x24);
    do {
      if (*piVar7 == -1) {
        *(undefined4 *)((int)this + uVar9 * 4 + 0x24) = puVar3[3];
        break;
      }
      uVar9 = uVar9 + 1;
      piVar7 = piVar7 + 1;
    } while (uVar9 < 8);
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
  } while( true );
}

/* ref: FUN_0059d8b0 */
GEN_FRAME uint GEN_THISCALL F_0059d8b0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x59d8b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte * pbVar1;
  int * piVar2;
  int * piVar3;
  undefined * this;
  int iVar4;
  byte bVar5;
  uint uVar6;
  int * piVar7;
  
  piVar2 = *(int * PTR32 *)((int)param_1 + 8);
  piVar3 = *(int * PTR32 *)((int)param_1 + 0x18);
  piVar7 = (int *)*piVar2;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(int * PTR32 *)(gen_frame + 0x2c)) = piVar2;
  (*(int * PTR32 *)(gen_frame + 0x38)) = piVar7;
  ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3 GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x34)));
  *(undefined1 *)((int)param_1 + 0x35) = 1;
  if (piVar7 != piVar2) {
    do {
      this = (undefined *)piVar7[2];
      piVar2 = *(int * PTR32 *)((int)this + 4);
      if (piVar2 != (int *)0x0) {
        F_0059be40(param_1 GEN_EDX_ARG,(uint)this);
        bVar5 = *(byte *)((int)this + 0x2c);
        if ((bVar5 & 1) != 0) {
          if ((bVar5 & 8) == 0) {
            if ((((bVar5 & 4) != 0) && (*(int *)((int)param_1 + 0x2c) == 0)) &&
               ((uVar6 = *((uint *)GEN_TOP((*(int *)((int)param_1 + 0x18) + 0xf4))) >> 0x14 & 0xf, uVar6 == 3
                || (uVar6 == 2)))) {
              F_00573e30(param_1 GEN_EDX_ARG,this);
              *(byte *)((int)this + 0x2c) =
                   *(byte *)((int)this + 0x2c) ^
                   ((char)piVar2[0x3e] * '\x02' ^ *(byte *)((int)this + 0x2c)) & 0x10;
            }
          }
          else {
            *(byte *)(piVar2 + 0x3e) = *(byte *)(piVar2 + 0x3e) & 0xfb;
            F_00560e00(this GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)));
            if ((((*(byte *)((int)this + 0x2e) & 8) != 0) ||
                (bVar5 = (byte)((uint)piVar2[0x3d] >> 0x14) & 0xf, bVar5 == 2)) || (bVar5 == 4)) {
              ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x98))(piVar2 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
            }
          }
        }
      }
      piVar7 = (int *)*(*(int * PTR32 *)(gen_frame + 0x38));
      (*(int * PTR32 *)(gen_frame + 0x38)) = piVar7;
    } while (piVar7 != (*(int * PTR32 *)(gen_frame + 0x2c)));
  }
  uVar6 = *(uint *)((int)param_1 + 0x2c);
  if ((uVar6 != 0) &&
     (iVar4 = *(int *)(uVar6 + 4), ((byte)(*(uint *)(iVar4 + 0xf4) >> 0x14) & 0xf) == 5)) {
    if (iVar4 != 0) {
      *(byte *)(uVar6 + 0x2c) = *(byte *)(uVar6 + 0x2c) | 8;
      *(byte *)(iVar4 + 0xf8) = *(byte *)(iVar4 + 0xf8) & 0xfb;
      pbVar1 = ((byte *)GEN_TOP((*(int *)(uVar6 + 4) + 0xfb)));
      *pbVar1 = *pbVar1 & 0xfd;
      if (*(undefined * PTR32 *)(uVar6 + 0xc) != (undefined *)0x0) {
        F_0055a300(*(undefined * PTR32 *)(uVar6 + 0xc) GEN_EDX_ARG,0);
      }
    }
    *(int *)((int)param_1 + 0x28) = *(int *)((int)param_1 + 0x2c);
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = *((undefined4 *)GEN_TOP((*(int *)((int)param_1 + 0x2c) + 8)));
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    iVar4 = *(int *)((int)param_1 + 0x14);
    ((undefined4 *)(gen_frame + 0xc))[0] = 0x2e;
    for (; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x10)) {
      if (*(char *)(iVar4 + 0x14) == '.') {
        F_00598630((int *)((int)param_1 + 0x14) GEN_EDX_ARG,((undefined4 *)(gen_frame + 0xc)),0);
        break;
      }
    }
    iVar4 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)param_1 + 0x2c) + 4))) + 0x90)));
    if (iVar4 != 0) {
      *(uint *)(iVar4 + 0x84) = *(uint *)(iVar4 + 0x84) | 0x100000;
      *(uint *)(iVar4 + 0x88) = *(uint *)(iVar4 + 0x88) & 0xffffff7f;
    }
    piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)param_1 + 0x2c) + 4)));
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2 GEN_EDX_ARG,1);
    *(undefined4 *)((int)param_1 + 0x28) = 0;
    *(undefined4 *)((int)param_1 + 0x2c) = 0;
  }
  return uVar6;
}

/* ref: FUN_0059da90 */
GEN_FRAME uint GEN_THISCALL F_0059da90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x59da90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  puVar2 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 8)));
  iVar5 = 0;
  while( true ) {
    if (puVar2 == *(undefined4 * PTR32 *)((int)this + 8)) {
      return 0xffffffff;
    }
    iVar3 = puVar2[2];
    if (*(int *)(iVar3 + 0x1c) == param_1) break;
    puVar2 = (undefined4 *)*puVar2;
    iVar5 = iVar5 + 1;
  }
  bVar1 = *(byte *)(iVar3 + 0x2c);
  *(int *)((int)this + 0x24) = iVar5;
  if ((bVar1 & 2) == 0) {
    uVar4 = 0;
  }
  else if (*(int *)(iVar3 + 4) == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = *(uint *)(iVar3 + 0x14);
  }
  F_0059bd30(this GEN_EDX_FWD,*(undefined4 *)(iVar3 + 0x18),1,1);
  return param_1 << 0x10 | uVar4;
}

/* ref: FUN_0059db10 */
GEN_FRAME uint GEN_THISCALL F_0059db10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x59db10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  uVar1 = 0;
  if ((*(int *)((int)this + 0x9c) != 0) &&
     (this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x9c) + 0x1c))), uVar1 = 0, this_00 != (undefined *)0x0)) {
    uVar1 = F_0059ba30(this_00 GEN_EDX_FWD,2,param_1,0,0);
  }
  return uVar1;
}

/* ref: FUN_0059db40 */
GEN_FRAME uint GEN_THISCALL F_0059db40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x59db40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  uVar1 = 0;
  if ((*(int *)((int)this + 0xa4) != 0) &&
     (this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0xa4) + 0x1c))), uVar1 = 0, this_00 != (undefined *)0x0)) {
    uVar1 = F_0059ba30(this_00 GEN_EDX_FWD,2,param_1,0,0);
  }
  return uVar1;
}

/* ref: FUN_0059db70 */
GEN_FRAME uint GEN_THISCALL F_0059db70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x59db70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  undefined * this_00;
  undefined4 in_EAX = 0;
  uint uVar2;
  
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),(char)param_1);
  if (((char)param_2 != '\0') || (*(char *)((int)this + 0x96) != (char)param_1)) {
    *(char *)((int)this + 0x96) = (char)param_1;
    iVar1 = *(int *)((int)this + 0xa0);
    if ((char)param_1 == '\0') {
      if ((iVar1 != 0) && (this_00 = *(undefined * PTR32 *)(iVar1 + 0x1c), this_00 != (undefined *)0x0)) {
        *(ushort *)((int)this_00 + 0x22) = *(ushort *)((int)this_00 + 0x22) & 0x7fff;
        *(undefined4 *)((int)this_00 + 0x18) = 0;
        uVar2 = F_00573430(this_00 GEN_EDX_FWD,0);
      }
    }
    else if ((iVar1 != 0) && (*(undefined * PTR32 *)(iVar1 + 0x1c) != (undefined *)0x0)) {
      uVar2 = F_0059ba30(*(undefined * PTR32 *)(iVar1 + 0x1c) GEN_EDX_ARG,2,0x1a,0,0);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_0059dbe0 */
GEN_FRAME uint GEN_THISCALL F_0059dbe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x59dbe0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  undefined * this_00;
  int * piVar2;
  int * piVar3;
  
  piVar3 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9c)));
  if ((*(int *)&gen_args[1]) < *piVar3) {
    piVar3 = &(*(int *)&gen_args[1]);
  }
  piVar2 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x98)));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x98))) < *piVar3) {
    piVar2 = piVar3;
  }
  iVar1 = *piVar2;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa0))) = iVar1;
  if ((char)(*(undefined4 *)&gen_args[2]) != '\0') {
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70)));
    (*(undefined2 *)(gen_frame + 0xc)) = 0x1b;
    (*(int *)(gen_frame + 0x14)) = 0;
    (*(int *)(gen_frame + 0x14)) = iVar1;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined2 *)(gen_frame + 0xe)) = 0;
    piVar2 = (int *)F_005997b0(this_00 GEN_EDX_FWD,&(*(undefined2 *)(gen_frame + 0xc)));
  }
  return (uint)piVar2;
}

/* ref: FUN_0059dc50 */
GEN_FRAME uint GEN_THISCALL F_0059dc50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x59dc50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  int iVar2;
  
  if ((*(byte *)((int)this + 0xae) >> 4 & 1) == 0) {
    if (*param_2 == 7) {
      if (*(int *)((int)this + 0xa0) <= *(int *)((int)this + 0x98)) goto LAB_0059dd10;
      iVar2 = *(int *)((int)this + 0xa0) - *(int *)((int)this + 0xa4) * param_3;
    }
    else {
      uVar1 = *param_2 - 8;
      if (uVar1 != 0) {
        return uVar1;
      }
      if (*(int *)((int)this + 0x9c) <= *(int *)((int)this + 0xa0)) goto LAB_0059dd10;
      iVar2 = *(int *)((int)this + 0xa4) * param_3 + *(int *)((int)this + 0xa0);
    }
  }
  else if (*param_2 == 9) {
    if (*(int *)((int)this + 0x9c) <= *(int *)((int)this + 0xa0)) goto LAB_0059dd10;
    iVar2 = *(int *)((int)this + 0xa4) * param_3 + *(int *)((int)this + 0xa0);
  }
  else {
    uVar1 = *param_2 - 10;
    if (uVar1 != 0) {
      return uVar1;
    }
    if (*(int *)((int)this + 0xa0) <= *(int *)((int)this + 0x98)) goto LAB_0059dd10;
    iVar2 = *(int *)((int)this + 0xa0) - *(int *)((int)this + 0xa4) * param_3;
  }
  F_0059dbe0(this GEN_EDX_FWD,iVar2,1);
  *(byte *)((int)this + 0xae) = *(byte *)((int)this + 0xae) | 0x40;
LAB_0059dd10: ;
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x10000;
  return param_1;
}

/* ref: Component::GUI2::AtkComponentButton::vf10 */
GEN_FRAME uint GEN_THISCALL F_0059dd20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x59dd20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x70);
  this[0x8c] = (undefined1)0x0;
  if (uVar2 != 0) {
    *(uint *)(uVar2 + 0x84) =
         *(uint *)(uVar2 + 0x84) ^ ((param_1 & 0xff) << 0x15 ^ *(uint *)(uVar2 + 0x84)) & 0x200000;
  }
  if ((char)param_1 == '\0') {
    iVar1 = *(int *)(this + 0x6c);
    if (this[0x88] == (undefined1)0x0) {
      if ((iVar1 != 0) && (*(undefined * PTR32 *)(iVar1 + 0x1c) != (undefined *)0x0)) {
        uVar2 = F_0059ba30(*(undefined * PTR32 *)(iVar1 + 0x1c) GEN_EDX_FWD,2,7,0,0);
      }
    }
    else if ((iVar1 != 0) && (*(undefined * PTR32 *)(iVar1 + 0x1c) != (undefined *)0x0)) {
      uVar2 = F_0059ba30(*(undefined * PTR32 *)(iVar1 + 0x1c) GEN_EDX_ARG,2,0xe,0,0);
      return uVar2;
    }
  }
  else {
    iVar1 = *(int *)(this + 0x6c);
    if (this[0x88] == (undefined1)0x0) {
      if ((iVar1 != 0) && (*(undefined * PTR32 *)(iVar1 + 0x1c) != (undefined *)0x0)) {
        uVar2 = F_0059ba30(*(undefined * PTR32 *)(iVar1 + 0x1c) GEN_EDX_ARG,2,1,0,0);
        return uVar2;
      }
    }
    else if ((iVar1 != 0) && (*(undefined * PTR32 *)(iVar1 + 0x1c) != (undefined *)0x0)) {
      uVar2 = F_0059ba30(*(undefined * PTR32 *)(iVar1 + 0x1c) GEN_EDX_ARG,2,8,0,0);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_0059dde0 */
GEN_FRAME uint GEN_THISCALL F_0059dde0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x59dde0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),(char)param_1);
  if (*(char *)((int)this + 0x88) != (char)param_1) {
    *(char *)((int)this + 0x88) = (char)param_1;
    iVar1 = *(int *)((int)this + 0x6c);
    if ((char)param_1 == '\0') {
      if ((iVar1 != 0) && (*(undefined * PTR32 *)(iVar1 + 0x1c) != (undefined *)0x0)) {
        uVar2 = F_0059ba30(*(undefined * PTR32 *)(iVar1 + 0x1c) GEN_EDX_FWD,2,1,0,0);
      }
    }
    else if ((iVar1 != 0) && (*(undefined * PTR32 *)(iVar1 + 0x1c) != (undefined *)0x0)) {
      uVar2 = F_0059ba30(*(undefined * PTR32 *)(iVar1 + 0x1c) GEN_EDX_ARG,2,8,0,0);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_0059de40 */
GEN_FRAME uint GEN_THISCALL F_0059de40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x59de40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)((int)this + 0x6c);
  if (*(char *)((int)this + 0x84) == '\0') {
    if (*(char *)((int)this + 0x88) != '\0') goto LAB_0059de8a;
LAB_0059de65: ;
    if ((uVar1 == 0) || (this_00 = *(undefined * PTR32 *)(uVar1 + 0x1c), uVar1 = 0, this_00 == (undefined *)0x0))
    goto LAB_0059dea4;
    uVar3 = 6;
  }
  else {
    if (*(char *)((int)this + 0x88) != '\0') {
      *(undefined1 *)((int)this + 0x88) = 0;
      goto LAB_0059de65;
    }
    *(undefined1 *)((int)this + 0x88) = 1;
LAB_0059de8a: ;
    if ((uVar1 == 0) || (this_00 = *(undefined * PTR32 *)(uVar1 + 0x1c), uVar1 = 0, this_00 == (undefined *)0x0))
    goto LAB_0059dea4;
    uVar3 = 0xd;
  }
  uVar1 = F_0059ba30(this_00 GEN_EDX_FWD,2,uVar3,0,0);
LAB_0059dea4: ;
  if ((char)param_4 != '\0') {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x34))(this GEN_EDX_ARG);
  }
  if ((char)param_3 != '\0') {
    (*(undefined2 *)(gen_frame + 0xc)) = 0x17;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = *param_2;
    (*(undefined2 *)(gen_frame + 0xe)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = param_2[1];
    uVar2 = F_005997b0(*(undefined * PTR32 *)((int)this + 0x70) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0xc)));
    uVar1 = 0;
    if (uVar2 != 0) {
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x210000;
      uVar1 = param_1;
    }
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentButton::vf2 */
GEN_FRAME uint GEN_THISCALL F_0059df10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x59df10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_3 = (uint)gen_a3;
  uint * param_4 = (uint *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined1 AVar1;
  undefined * pvVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar5 = param_1 & 0xffff;
  if (0x38 < uVar5 - 3) {
    return uVar5 - 3;
  }
  uVar6 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x59e640) + uVar5 + 1)));
  switch((unsigned int)(uintptr_t)(uVar5)) {
  case 3: ;
    if (this != (undefined *)0x0) {
      uVar6 = 0;
      if ((*(int *)(this + 0x70) != 0) &&
         (uVar6 = *((uint *)GEN_TOP((*(int *)(this + 0x70) + 0x84))) >> 0x15 & 1, (char)uVar6 != '\0')) {
        uVar6 = (uint)*(byte *)((int)param_4 + 6);
        if (this[uVar6 + 0x8d] != (undefined1)0x0) {
          this[uVar6 + 0x90] = (undefined1)0x1;
          if ((this[0x85] != (undefined1)0x0) && (this[0xa4] == (undefined1)0x0)) {
            (*(uint *)(gen_frame + 0x14)) = 0;
            (*(uint *)(gen_frame + 0x18)) = 0;
            (*(undefined4 *)(gen_frame + 0x1c)) = 0;
            (*(undefined4 *)(gen_frame + 0x20)) = 0;
            (*(undefined4 *)(gen_frame + 0x24)) = 0;
            (*(undefined4 *)(gen_frame + 0x28)) = 0;
            uVar5 = *param_4;
            (*(uint *)(gen_frame + 0x18)) = param_4[1];
            pvVar2 = *(undefined * PTR32 *)(this + 0x70);
            (*(undefined4 *)(gen_frame + 0xc)) = 0x17;
            (*(uint *)(gen_frame + 0x14)) = uVar5;
            uVar5 = F_005997b0(pvVar2 GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0xc)));
            if (uVar5 != 0) {
              *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x10000;
            }
            this[0xa4] = (undefined1)0x1;
            this[0x100] = *(undefined *)((int)param_4 + 6);
            *(ulonglong *)(this + 0xb8) = (ulonglong)*(uint *)(this + 0xf8) * 1000;
            *(undefined4 *)(this + 0xb0) = 1;
            F_00592380(this + 0xa8 GEN_EDX_ARG);
          }
          uVar5 = *param_4;
          (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 0)) = 0x16;
          (*(uint *)(gen_frame + 0x14)) = 0;
          (*(uint *)(gen_frame + 0x18)) = 0;
          (*(uint *)(gen_frame + 0x14)) = uVar5;
          (*(undefined4 *)(gen_frame + 0x1c)) = 0;
          (*(undefined4 *)(gen_frame + 0x20)) = 0;
          (*(undefined4 *)(gen_frame + 0x24)) = 0;
          (*(undefined4 *)(gen_frame + 0x28)) = 0;
          uVar5 = param_4[1];
          (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 2)) = 0;
          (*(undefined4 *)(gen_frame + 0xc)) = 0x16;
          (*(uint *)(gen_frame + 0x18)) = uVar5;
          uVar5 = F_005997b0(*(undefined * PTR32 *)(this + 0x70) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)));
          if (uVar5 != 0) {
            *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x10000;
          }
          if (((this[0x84] != (undefined1)0x0) || (uVar5 = F_005613a0(this GEN_EDX_ARG), uVar5 == 0xe)
              ) && (this[0x88] != (undefined1)0x0)) {
            uVar5 = F_0059d640(*(undefined * PTR32 *)(this + 0x6c) GEN_EDX_ARG,10);
            this[0x8c] = (undefined1)0x0;
            return uVar5;
          }
          uVar5 = F_0059d640(*(undefined * PTR32 *)(this + 0x6c) GEN_EDX_ARG,3);
          this[0x8c] = (undefined1)0x0;
          return uVar5;
        }
        goto LAB_0059e34c;
      }
    }
    if ((this[0x8b] == (undefined1)0x0) ||
       (uVar6 = (uint)*(byte *)((int)param_4 + 6), this[uVar6 + 0x8d] == (undefined1)0x0))
    goto LAB_0059e34c;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x16;
    goto LAB_0059e313;
  case 4: ;
    if (this != (undefined *)0x0) {
      uVar6 = 0;
      if ((*(int *)(this + 0x70) != 0) &&
         (uVar6 = *((uint *)GEN_TOP((*(int *)(this + 0x70) + 0x84))) >> 0x15 & 1, (char)uVar6 != '\0')) {
        if (this[0xa4] != (undefined1)0x0) {
          this[200] = (undefined1)0x0;
          *(undefined4 *)(this + 0xb4) = 0;
          this[0xf0] = (undefined1)0x0;
          *(undefined4 *)(this + 0xdc) = 0;
        }
        uVar5 = (uint)*(byte *)((int)param_4 + 6);
        if ((this[uVar5 + 0x8d] != (undefined1)0x0) &&
           (this[uVar5 + 0x90] != (undefined1)0x0)) {
          if (((this[0x84] != (undefined1)0x0) || (uVar5 = F_005613a0(this GEN_EDX_ARG), uVar5 == 0xe)
              ) && (this[0x88] != (undefined1)0x0)) {
            uVar5 = F_0059d640(*(undefined * PTR32 *)(this + 0x6c) GEN_EDX_ARG,0xd);
            this[0x8c] = (undefined1)0x0;
            return uVar5;
          }
          uVar5 = F_0059d640(*(undefined * PTR32 *)(this + 0x6c) GEN_EDX_ARG,6);
        }
        this[0x8c] = (undefined1)0x0;
        return uVar5;
      }
    }
    break;
  case 6: ;
    if (((this != (undefined *)0x0) &&
        (pvVar2 = *(undefined * PTR32 *)(this + 0x70), pvVar2 != (undefined *)0x0)) &&
       (uVar6 = *(uint *)((int)pvVar2 + 0x84) >> 0x15 & 1, (char)uVar6 != '\0')) {
      (*(uint *)(gen_frame + 0x14)) = 0;
      (*(uint *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      uVar5 = param_4[1];
      (*(uint *)(gen_frame + 0x14)) = *param_4;
      (*(undefined4 *)(gen_frame + 0xc)) = 6;
      (*(uint *)(gen_frame + 0x18)) = uVar5;
      uVar5 = F_005997b0(pvVar2 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)));
      if (uVar5 != 0) {
        *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x10000;
      }
      if (this[0x88] != (undefined1)0x0) {
        uVar5 = F_0059d640(*(undefined * PTR32 *)(this + 0x6c) GEN_EDX_ARG,9);
        this[0x8c] = (undefined1)0x0;
        return uVar5;
      }
      uVar5 = F_0059d640(*(undefined * PTR32 *)(this + 0x6c) GEN_EDX_ARG,2);
      this[0x8c] = (undefined1)0x0;
      return uVar5;
    }
    break;
  case 7: ;
    *(undefined2 *)(this + 0x90) = 0;
    this[0x92] = (undefined1)0x0;
    uVar6 = 0;
    if ((*(int *)(this + 0x70) != 0) &&
       (uVar6 = *((uint *)GEN_TOP((*(int *)(this + 0x70) + 0x84))) >> 0x15 & 1, (char)uVar6 != '\0')) {
      if (this[0xa4] != (undefined1)0x0) {
        this[0xa4] = (undefined1)0x0;
        this[200] = (undefined1)0x0;
        *(undefined4 *)(this + 0xb4) = 0;
        this[0xf0] = (undefined1)0x0;
        *(undefined4 *)(this + 0xdc) = 0;
      }
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 0)) = 7;
      (*(uint *)(gen_frame + 0x14)) = 0;
      (*(uint *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      uVar5 = param_4[1];
      (*(uint *)(gen_frame + 0x14)) = *param_4;
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 2)) = 0;
      (*(undefined4 *)(gen_frame + 0xc)) = 7;
      (*(uint *)(gen_frame + 0x18)) = uVar5;
      uVar5 = F_005997b0(*(undefined * PTR32 *)(this + 0x70) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)));
      if (uVar5 != 0) {
        *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x10000;
      }
      uVar5 = F_0055a350(*(undefined4 *)(this + 0x70) GEN_EDX_ARG);
      pvVar2 = *(undefined * PTR32 *)(this + 0x6c);
      if ((char)uVar5 != '\0') {
        if (this[0x88] != (undefined1)0x0) {
          uVar5 = F_0059d640(pvVar2 GEN_EDX_ARG,8);
          this[0x8c] = (undefined1)0x0;
          return uVar5;
        }
        uVar5 = F_0059d640(pvVar2 GEN_EDX_ARG,1);
        this[0x8c] = (undefined1)0x0;
        return uVar5;
      }
      uVar5 = F_0059d640(pvVar2 GEN_EDX_ARG,7);
      this[0x8c] = (undefined1)0x0;
      return uVar5;
    }
    break;
  case 9: ;
    if (this != (undefined *)0x0) {
      uVar6 = 0;
      if ((*(int *)(this + 0x70) != 0) &&
         (uVar6 = *((uint *)GEN_TOP((*(int *)(this + 0x70) + 0x84))) >> 0x15 & 1, (char)uVar6 != '\0')) {
        if (this[0xa4] != (undefined1)0x0) {
          this[0xa4] = (undefined1)0x0;
          this[200] = (undefined1)0x0;
          *(undefined4 *)(this + 0xb4) = 0;
          this[0xf0] = (undefined1)0x0;
          *(undefined4 *)(this + 0xdc) = 0;
          return uVar6;
        }
        uVar5 = (uint)*(byte *)((int)param_4 + 6);
        if ((this[uVar5 + 0x8d] != (undefined1)0x0) &&
           (this[uVar5 + 0x90] != (undefined1)0x0)) {
          uVar5 = F_0059de40(this GEN_EDX_ARG,param_3,param_4,1,1);
        }
        this[*(byte *)((int)param_4 + 6) + 0x90] = (undefined1)0x0;
        this[0x8c] = (undefined1)0x0;
        return uVar5;
      }
    }
    if ((this[0x8b] == (undefined1)0x0) ||
       (uVar6 = (uint)*(byte *)((int)param_4 + 6), this[uVar6 + 0x8d] == (undefined1)0x0))
    goto LAB_0059e34c;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x17;
LAB_0059e313: ;
    (*(uint *)(gen_frame + 0x14)) = 0;
    (*(uint *)(gen_frame + 0x18)) = 0;
    (*(uint *)(gen_frame + 0x14)) = *param_4;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(uint *)(gen_frame + 0x18)) = param_4[1];
    uVar5 = F_005997b0(*(undefined * PTR32 *)(this + 0x70) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)));
    uVar6 = 0;
    if (uVar5 != 0) {
      *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x10000;
      uVar6 = param_3;
    }
LAB_0059e34c: ;
    this[0x8c] = (undefined1)0x0;
    return uVar6;
  case 0xc: ;
    if (((this == (undefined *)0x0) ||
        (pvVar2 = *(undefined * PTR32 *)(this + 0x70), pvVar2 == (undefined *)0x0)) ||
       (uVar6 = *(uint *)((int)pvVar2 + 0x84) >> 0x15 & 1, (char)uVar6 == '\0')) {
      if (((this[0x8b] != (undefined1)0x0) && (*param_4 == 1)) && ((char)param_4[1] == '\0')
         ) {
        uVar3 = *(undefined4 *)((int)param_4 + 6);
        (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 0)) = 0x17;
        (*(uint *)(gen_frame + 0x14)) = 0;
        (*(uint *)(gen_frame + 0x18)) = 0;
        (*(uint *)(gen_frame + 0x14)) = uVar3;
        (*(undefined4 *)(gen_frame + 0x1c)) = 0;
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        (*(undefined4 *)(gen_frame + 0x24)) = 0;
        (*(undefined4 *)(gen_frame + 0x28)) = 0;
        uVar3 = *(undefined4 *)((int)param_4 + 10);
        (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 2)) = 0;
        (*(undefined4 *)(gen_frame + 0xc)) = 0x17;
        (*(uint *)(gen_frame + 0x18)) = uVar3;
        uVar5 = F_005997b0(*(undefined * PTR32 *)(this + 0x70) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)));
        uVar6 = 0;
        if (uVar5 != 0) {
          *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x10000;
          uVar6 = param_3;
        }
      }
    }
    else {
      uVar6 = *param_4;
      if (((uVar6 == 1) || (uVar6 == 4)) &&
         ((bVar7 = uVar6 != 1, (char)param_4[1] == '\0' &&
          (uVar6 = (uint)bVar7, this[uVar6 + 0x8d] != (undefined1)0x0)))) {
        (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 0)) = 0x17;
        (*(uint *)(gen_frame + 0x14)) = 0;
        (*(uint *)(gen_frame + 0x18)) = 0;
        (*(undefined4 *)(gen_frame + 0x1c)) = 0;
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        (*(undefined4 *)(gen_frame + 0x24)) = 0;
        (*(undefined4 *)(gen_frame + 0x28)) = 0;
        (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 2)) = 0;
        (*(undefined4 *)(gen_frame + 0xc)) = 0x17;
        (*(uint *)(gen_frame + 0x14)) = *(undefined4 *)((int)param_4 + 6);
        uVar3 = *(undefined4 *)((int)param_4 + 10);
        (*(uint *)(gen_frame + 0x18)) = uVar3;
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 3)) = (byte)((uint)uVar3 >> 0x18);
        bVar4 = (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 3));
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 3)) = (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 3)) | 8;
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)) = (undefined1)bVar7;
        gen_piece_set(&(*(uint *)(gen_frame + 0x18)), 0, 3, (unsigned long long)(CONCAT12(bVar7,(short)uVar3)));
        (*(uint *)(gen_frame + 0x18)) = CONCAT13(bVar4,(undefined3)(*(uint *)(gen_frame + 0x18))) | 0x8000000;
        uVar5 = F_005997b0(pvVar2 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)));
        if (uVar5 != 0) {
          *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x210000;
        }
        uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x34))(this GEN_EDX_ARG);
      }
    }
    if ((char)param_4[1] == '\x01') {
      this[0x8c] = (undefined1)0x0;
      return uVar6;
    }
    break;
  case 0x3a: ;
    if ((this[0xa4] != (undefined1)0x0) && ((*(int *)&gen_a2) == 1)) {
      AVar1 = this[0x100];
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 0)) = 0x17;
      (*(uint *)(gen_frame + 0x18)) = 0;
      (*(uint *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 2)) = 0;
      (*(undefined4 *)(gen_frame + 0xc)) = 0x17;
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)) = AVar1;
      (*(uint *)(gen_frame + 0x18)) = (uint)(byte)AVar1 << 0x10;
      uVar5 = F_005997b0(*(undefined * PTR32 *)(this + 0x70) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)));
      uVar6 = 0;
      if (uVar5 != 0) {
        *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x10000;
        uVar6 = param_3;
      }
    }
    break;
  case 0x3b: ;
    if ((this[0xa4] != (undefined1)0x0) && ((*(int *)&gen_a2) == 0)) {
      AVar1 = this[0x100];
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 0)) = 0x17;
      (*(uint *)(gen_frame + 0x18)) = 0;
      (*(uint *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 2)) = 0;
      (*(undefined4 *)(gen_frame + 0xc)) = 0x17;
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)) = AVar1;
      (*(uint *)(gen_frame + 0x18)) = (uint)(byte)AVar1 << 0x10;
      uVar5 = F_005997b0(*(undefined * PTR32 *)(this + 0x70) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)));
      if (uVar5 != 0) {
        *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x10000;
      }
      this[200] = (undefined1)0x0;
      *(undefined4 *)(this + 0xb4) = 0;
      *(ulonglong *)(this + 0xe0) = (ulonglong)*(uint *)(this + 0xfc) * 1000;
      *(undefined4 *)(this + 0xd8) = 0;
      uVar5 = F_00592380(this + 0xd0 GEN_EDX_ARG);
      return uVar5;
    }
  }
  return uVar6;
}

/* ref: FUN_0059e680 */
GEN_FRAME uint GEN_THISCALL F_0059e680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x59e680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x60))(this GEN_EDX_FWD,REFG(int, 0x1379860) + 0xc0);
  if (((char)uVar1 != '\0') || (*(char *)((int)this + 0x136) != '\0')) {
    if ((*(int *)((int)this + 0x6c) != 0) &&
       (this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x6c) + 0x1c))), this_00 != (undefined *)0x0)) {
      F_0059ba30(this_00 GEN_EDX_ARG,2,9,0,0);
    }
    (*(undefined2 *)(gen_frame + 0xc)) = 0x17;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = *param_2;
    (*(undefined2 *)(gen_frame + 0xe)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = param_2[1];
    uVar1 = F_005997b0(*(undefined * PTR32 *)((int)this + 0x70) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0xc)));
    if (uVar1 != 0) {
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x10000;
    }
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x34))(this GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentList::vf17 */
GEN_FRAME uint GEN_THISCALL F_0059e730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x59e730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined * this_00;
  int * piVar1;
  double dVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  undefined * pvVar9;
  undefined2 * puVar10;
  
  pvVar9 = (undefined *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = (undefined *)0x0;
  if (((((byte)this[0x66] & 1) == 0) || (this[0x119] == (undefined1)0x0)) ||
     (this[0x11f] != (undefined1)0x0)) {
    return 0;
  }
  this_00 = *(undefined * PTR32 *)(this + 0x90);
  (*(int *)(gen_frame + 0x28)) = *(int *)(this + 0xd8);
  *(undefined4 *)(this + 0xd8) = 0xffffffff;
  if (this_00 != (undefined *)0x0) {
    (*(float *)(gen_frame + 0x44)) = *(float *)((int)this_00 + 0x30);
    (*(float *)(gen_frame + 0x40)) = *(float *)((int)this_00 + 0x34);
  }
  (*(uint *)(gen_frame + 0x3c)) = (int)(short)param_2;
  dVar2 = (double)(int)(short)param_2;
  (*(double *)(gen_frame + 0x2c)) = dVar2;
  if (!(dVar2 < (double)(*(float *)(gen_frame + 0x40)))) {
    (*(uint *)(gen_frame + 0x3c)) = (int)(short)param_1;
    dVar2 = (double)(int)(short)param_1;
    (*(double *)(gen_frame + 0x34)) = dVar2;
    if (!(dVar2 < (double)(*(float *)(gen_frame + 0x44)))) {
      uVar4 = F_005682d0(this_00 GEN_EDX_FWD);
      (*(uint *)(gen_frame + 0x3c)) = (uint)uVar4;
      if (!((float10)uVar4 + (float10)(*(float *)(gen_frame + 0x40)) < (float10)(*(double *)(gen_frame + 0x2c)))) {
        uVar4 = F_00568270(this_00 GEN_EDX_ARG);
        (*(uint *)(gen_frame + 0x3c)) = (uint)uVar4;
        if (!((float10)uVar4 + (float10)(*(float *)(gen_frame + 0x44)) < (float10)(*(double *)(gen_frame + 0x34)))) {
          iVar8 = (uint)*(ushort *)(this + 0xee) * *(int *)(this + 0xb0);
          uVar7 = 0;
          (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x34)) + 4)) = iVar8;
          (*(double *)(gen_frame + 0x34)) = gen_bits2d(CONCAT44(iVar8,(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x34)) + 0))));
          (*(float *)(gen_frame + 0x44)) = 0.0;
          iVar5 = (uint)(*(int *)(this + 0xb8) != 0) + (uint)*(ushort *)(this + 0xe8);
          (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x2c)) + 4)) = iVar5;
          (*(double *)(gen_frame + 0x2c)) = gen_bits2d(CONCAT44(iVar5,(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x2c)) + 0))));
          if (iVar5 != 0) {
            do {
              (*(float *)(gen_frame + 0x40)) = 0.0;
              if (*(short *)(this + 0xee) != 0) {
                do {
                  iVar5 = uVar7 + iVar8;
                  uVar7 = uVar7 + 1;
                  (*(uint *)(gen_frame + 0x3c)) = uVar7;
                  if (-1 < iVar5) {
                    if (*(int *)(this + 0xac) <= iVar5) break;
                    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x98) + iVar5 * 8)));
                    if ((this[0x11e] != (undefined1)0x0) ||
                       (*((char *)GEN_TOP((*(int *)(this + 0x98) + iVar5 * 8 + 5))) == '\0')) {
                      pvVar9 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG,param_1,param_2)));
                      (*(undefined * PTR32 *)(gen_frame + 0x48)) = pvVar9;
                      iVar8 = (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x34)) + 4));
                    }
                    if ((*(undefined * PTR32 *)(gen_frame + 0x48)) != (undefined *)0x0) {
                      pvVar9 = *(undefined * PTR32 *)(this + 0xd4);
                      bVar3 = false;
                      if (((pvVar9 == (*(undefined * PTR32 *)(gen_frame + 0x48))) && (0 < (*(int *)(gen_frame + 0x28)))) && ((*(int *)(gen_frame + 0x28)) != iVar5)) {
                        *(int *)(this + 0xd8) = (*(int *)(gen_frame + 0x28));
                        (*(undefined2 *)(gen_frame + 0x8)) = 7;
                        (*(undefined4 *)(gen_frame + 0x10)) = 0;
                        (*(undefined4 *)(gen_frame + 0x14)) = 0;
                        (*(undefined4 *)(gen_frame + 0x18)) = 0;
                        (*(undefined4 *)(gen_frame + 0x1c)) = 0;
                        (*(undefined4 *)(gen_frame + 0x20)) = 0;
                        (*(undefined4 *)(gen_frame + 0x24)) = 0;
                        (*(undefined2 *)(gen_frame + 0xa)) = 0;
                        F_005997b0(pvVar9 GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x8)));
                        bVar3 = true;
                      }
                      *(int *)(this + 0xd8) = iVar5;
                      piVar1[0x7f] = iVar5;
                      fVar6 = (*(float *)(gen_frame + 0x40));
                      if (this[0x112] == (undefined1)0x0) {
                        fVar6 = (*(float *)(gen_frame + 0x44));
                      }
                      *(float *)(this + 0xdc) = fVar6;
                      fVar6 = (*(float *)(gen_frame + 0x44));
                      if (this[0x112] == (undefined1)0x0) {
                        fVar6 = (*(float *)(gen_frame + 0x40));
                      }
                      *(float *)(this + 0xe0) = fVar6;
                      if ((bVar3) &&
                         (iVar8 = *((int *)GEN_TOP((*(int *)(this + 0x98) + *(int *)(this + 0xd8) * 8))),
                         iVar8 != 0)) {
                        (*(undefined2 *)(gen_frame + 0x8)) = 6;
                        puVar10 = &(*(undefined2 *)(gen_frame + 0x8));
                        (*(undefined2 *)(gen_frame + 0xa)) = 0;
                        (*(undefined4 *)(gen_frame + 0x10)) = 0;
                        (*(undefined4 *)(gen_frame + 0x14)) = 0;
                        (*(undefined4 *)(gen_frame + 0x18)) = 0;
                        (*(undefined4 *)(gen_frame + 0x1c)) = 0;
                        (*(undefined4 *)(gen_frame + 0x20)) = 0;
                        (*(undefined4 *)(gen_frame + 0x24)) = 0;
                        uVar7 = F_00568410(*(undefined * PTR32 *)(this + 0xd4) GEN_EDX_ARG);
                        pvVar9 = (undefined *)F_0055d920((undefined *)(iVar8 + 4) GEN_EDX_ARG,uVar7);
                        F_005997b0(pvVar9 GEN_EDX_ARG,puVar10);
                      }
                      *(undefined * PTR32 *)(this + 0xd4) = (*(undefined * PTR32 *)(gen_frame + 0x48));
                      return (uint)(*(undefined * PTR32 *)(gen_frame + 0x48));
                    }
                  }
                  fVar6 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x40))) + 1);
                  (*(float *)(gen_frame + 0x40)) = fVar6;
                  uVar7 = (*(uint *)(gen_frame + 0x3c));
                } while ((int)gen_fl2bits(fVar6) < (int)(uint)*(ushort *)(this + 0xee));
              }
              fVar6 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x44))) + 1);
              (*(float *)(gen_frame + 0x44)) = fVar6;
              pvVar9 = (*(undefined * PTR32 *)(gen_frame + 0x48));
            } while ((int)gen_fl2bits(fVar6) < (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x2c)) + 4)));
          }
          F_0059c700(this GEN_EDX_ARG,1);
          *(undefined * PTR32 *)(this + 0xd4) = pvVar9;
          return (uint)pvVar9;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_0059e9e0 */
GEN_FRAME uint GEN_THISCALL F_0059e9e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x59e9e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  code * pcVar1;
  uint uVar2;
  undefined * pvVar3;
  
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 0)) = 0x47;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)0x0;
  (*(uint *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 2)) = 0;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 2)) = 1;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x10047;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  (*(uint *)(gen_frame + 0x1c)) = (uint)(byte)param_1;
  if ((byte)param_1 != 0) {
    (*(undefined4 *)(gen_frame + 0x20)) = 2;
  }
  if (this == (undefined *)0x0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *(undefined * PTR32 *)((int)this + 0x70);
  }
  uVar2 = F_005997b0(pvVar3 GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0xc)));
  if (uVar2 != 0) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x74))(this GEN_EDX_ARG,0xfffffffe,0);
    if (-1 < *(int *)((int)this + 0xd0)) {
      (*(uint *)(gen_frame + 0x1c)) = 0;
      (*(uint *)(gen_frame + 0x1c)) = *(int *)((int)this + 0xd0);
      pvVar3 = *(undefined * PTR32 *)((int)this + 0x70);
      (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)0x0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0xc)) = 0x27;
      F_005997b0(pvVar3 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)));
      pcVar1 = *(gen_code32 *)(*(int *)this + 0x78);
      *(undefined4 *)((int)this + 0xd0) = 0xffffffff;
      (*pcVar1)(this);
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x80))(this GEN_EDX_ARG);
    }
    *(undefined4 *)((int)this + 0xd8) = 0xffffffff;
    if (param_2 != 0) {
      *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x10000;
    }
  }
  return uVar2;
}

/* ref: FUN_0059ead0 */
GEN_FRAME uint GEN_THISCALL F_0059ead0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x59ead0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  code * pcVar2;
  ushort uVar3;
  uint uVar4;
  
  *(undefined4 *)((int)this + 0xa8) = param_2;
  if ((char)param_3 != '\0') {
    if (*(int *)((int)this + 0xb8) != 0) {
      pcVar2 = *(gen_code32 *)(*(int *)this + 0x80);
      *(undefined4 *)((int)this + 0xb8) = 0;
      (*pcVar2)(this);
    }
    pcVar2 = *(gen_code32 *)(*(int *)this + 0x78);
    *(undefined4 *)((int)this + 0xb0) = 0;
    (*pcVar2)(this);
    if (-1 < *(int *)((int)this + 200)) {
      if ((int)(short)param_1 <= *(int *)((int)this + 200)) {
        cVar1 = *(char *)((int)this + 0x11f);
        (*(uint *)(gen_frame + 0x24)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        (*(undefined4 *)(gen_frame + 0x1c)) = 0;
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        (*(undefined4 *)(gen_frame + 0x28)) = 0;
        ((undefined4 *)(gen_frame + 0xc))[0] = 0x20;
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 0)) = 0;
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 1)) = 0;
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 0)) = 0;
        uVar3 = (ushort)(*(uint *)(gen_frame + 0x24));
        if (cVar1 != '\0') {
          (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 1)) = 8;
          (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 0)) = 0x800;
          uVar3 = (ushort)(*(uint *)(gen_frame + 0x24));
        }
        (*(uint *)(gen_frame + 0x24)) = (uint)uVar3;
        (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x20)) + 0)) = *(undefined2 *)((int)this + 0xdc);
        (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)((int)this + 0x84);
        (*(undefined4 *)(gen_frame + 0x1c)) = 0;
        (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x20)) + 2)) = *(undefined2 *)((int)this + 0xe0);
        (*(undefined4 *)(gen_frame + 0x20)) = CONCAT22(*(undefined2 *)((int)this + 0xe0),*(undefined2 *)((int)this + 0xdc));
        F_005997b0(*(undefined * PTR32 *)((int)this + 0x70) GEN_EDX_FWD,((undefined4 *)(gen_frame + 0xc)));
      }
      if (*(int *)((int)this + 200) != -1) {
        *(undefined4 *)((int)this + 200) = 0xffffffff;
      }
    }
    if (-1 < *(int *)((int)this + 0xd0)) {
      pcVar2 = *(gen_code32 *)(*(int *)this + 0x78);
      *(undefined4 *)((int)this + 0xd0) = 0xffffffff;
      (*pcVar2)(this);
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x80))(this GEN_EDX_ARG);
    }
    if ((int)(short)param_1 <= *(int *)((int)this + 0xcc)) {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x74))(this GEN_EDX_ARG,0xfffffffe,0);
      *(undefined4 *)((int)this + 0xd8) = 0xffffffff;
    }
  }
  uVar4 = F_0058d980(this GEN_EDX_ARG,param_1);
  return uVar4;
}

/* ref: FUN_0059ec00 */
GEN_NOFRAME uint GEN_THISCALL F_0059ec00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x59ec00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x74))(this GEN_EDX_FWD,0xfffffffe,0);
  *(undefined4 *)((int)this + 0xd8) = 0xffffffff;
  uVar1 = F_0059ead0(this GEN_EDX_ARG,0,0,1);
  return uVar1;
}

/* ref: FUN_0059ec30 */
GEN_FRAME uint GEN_THISCALL F_0059ec30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x59ec30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  undefined * pvVar2;
  code * pcVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = param_2[1];
  uVar6 = 0;
  if (this != (undefined *)0x0) {
    uVar6 = *(uint *)((int)this + 0x70);
  }
  while( true ) {
    if (uVar5 == 0) {
      iVar1 = *(int *)((int)this + 0xd0);
      if (-1 < iVar1) {
        (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 0)) = 0x27;
        (*(int *)(gen_frame + 0x1c)) = 0;
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        (*(undefined4 *)(gen_frame + 0x24)) = 0;
        (*(undefined4 *)(gen_frame + 0x28)) = 0;
        (*(int *)(gen_frame + 0x1c)) = iVar1;
        pvVar2 = *(undefined * PTR32 *)((int)this + 0x70);
        (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 2)) = 0;
        (*(undefined4 *)(gen_frame + 0xc)) = 0x27;
        F_005997b0(pvVar2 GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0xc)));
        pcVar3 = *(gen_code32 *)(*(int *)this + 0x78);
        *(undefined4 *)((int)this + 0xd0) = 0xffffffff;
        (*pcVar3)(this);
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x80))(this GEN_EDX_ARG);
      }
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x74))(this GEN_EDX_ARG,0xfffffffe,0);
      *(undefined4 *)((int)this + 0xd8) = 0xffffffff;
      *(undefined4 *)((int)this + 0xc4) = 0xffffffff;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(int *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      uVar4 = *param_2;
      (*(undefined4 *)(gen_frame + 0x18)) = param_2[1];
      pvVar2 = *(undefined * PTR32 *)((int)this + 0x70);
      (*(undefined4 *)(gen_frame + 0xc)) = 0x12;
      (*(undefined4 *)(gen_frame + 0x14)) = uVar4;
      uVar5 = F_005997b0(pvVar2 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)));
      uVar6 = 0;
      if (uVar5 != 0) {
        *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x10000;
        uVar6 = param_1;
      }
      return uVar6;
    }
    if (uVar6 == uVar5) break;
    uVar5 = *(uint *)(uVar5 + 8);
  }
  return uVar5;
}

/* ref: Component::GUI2::AtkComponentListItemRenderer::vf2 */
GEN_FRAME uint GEN_THISCALL F_0059ed30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x59ed30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_SUSPECT(0x59ed30u, "this_00");
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  byte bVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined * pvVar8;
  undefined * this_00;
  float fVar9;
  float fVar10;
  
  uVar5 = F_0055d920(this + 4 GEN_EDX_FWD,param_2);
  *(uint *)(this + 0x1e4) = uVar5;
  if (((short)param_1 == 0xc) && ((pvVar8 = *(undefined * PTR32 *)(this + 0x70), pvVar8 == (undefined *)0x0 || ((*(uint *)((int)pvVar8 + 0x84) >> 0x1d & 1) == 0)))) {
    (*(int *)(gen_frame + 0x14)) = 0;
    (*(uint *)(gen_frame + 0x18)) = 0;
    (*(int *)(gen_frame + 0x1c)) = 0;
    (*(int *)(gen_frame + 0x20)) = 0;
    (*(int *)(gen_frame + 0x14)) = *param_4;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(int *)(gen_frame + 0x1c)) = param_4[2];
    (*(uint *)(gen_frame + 0x18)) = param_4[1];
    iVar7 = param_4[3];
    (*(uint *)(gen_frame + 0xc)) = 0xc;
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 2)) = 1;
    (*(uint *)(gen_frame + 0xc)) = 0x1000c;
    (*(int *)(gen_frame + 0x20)) = iVar7;
    uVar5 = F_005997b0(pvVar8 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0xc)));
    if (uVar5 != 0) {
      *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x210000;
      return param_3;
    }
  }
  else {
    F_0059df10((undefined *)this GEN_EDX_ARG,param_1,param_2,param_3,param_4);
  }
  if (((*(byte *)(param_3 + 0x16) & 1) == 0) && ((pvVar8 = *(undefined * PTR32 *)(this + 0x70), pvVar8 == (undefined *)0x0 || ((*(uint *)((int)pvVar8 + 0x84) >> 0x15 & 1) == 0)))) {
    switch((unsigned int)(uintptr_t)(param_1 & 0xffff)) {
    case 3: ;
      if (this[*(byte *)((int)param_4 + 6) + 0x8d] != (undefined1)0x0) {
        if ((this[0x85] != (undefined1)0x0) && (this[0xa4] == (undefined1)0x0)) {
          (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 0)) = 0x17;
          (*(int *)(gen_frame + 0x14)) = 0;
          (*(uint *)(gen_frame + 0x18)) = 0;
          (*(int *)(gen_frame + 0x1c)) = 0;
          (*(int *)(gen_frame + 0x20)) = 0;
          (*(undefined4 *)(gen_frame + 0x24)) = 0;
          (*(undefined4 *)(gen_frame + 0x28)) = 0;
          (*(int *)(gen_frame + 0x14)) = *param_4;
          (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 2)) = 0;
          (*(uint *)(gen_frame + 0xc)) = 0x17;
          (*(uint *)(gen_frame + 0x18)) = param_4[1];
          uVar5 = F_005997b0(pvVar8 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0xc)));
          if (uVar5 != 0) {
            *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x10000;
          }
          this[0xa4] = (undefined1)0x1;
          *(ulonglong *)(this + 0xb8) = (ulonglong)*(uint *)(this + 0xf8) * 1000;
          *(undefined4 *)(this + 0xb0) = 1;
          F_00592380(this + 0xa8 GEN_EDX_ARG);
        }
        iVar7 = *param_4;
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 0)) = 0x16;
        (*(int *)(gen_frame + 0x14)) = 0;
        (*(uint *)(gen_frame + 0x18)) = 0;
        (*(int *)(gen_frame + 0x1c)) = 0;
        (*(int *)(gen_frame + 0x20)) = 0;
        (*(undefined4 *)(gen_frame + 0x24)) = 0;
        (*(undefined4 *)(gen_frame + 0x28)) = 0;
        iVar3 = param_4[1];
        (*(int *)(gen_frame + 0x14)) = iVar7;
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 2)) = 0;
        (*(uint *)(gen_frame + 0xc)) = 0x16;
        pvVar8 = *(undefined * PTR32 *)(this + 0x70);
        (*(uint *)(gen_frame + 0x18)) = iVar3;
        goto LAB_0059ee39;
      }
      break;
    case 4: ;
      if (this[0xa4] != (undefined1)0x0) {
LAB_0059eeeb: ;
        this[200] = (undefined1)0x0;
        *(undefined4 *)(this + 0xb4) = 0;
        this[0xf0] = (undefined1)0x0;
        *(undefined4 *)(this + 0xdc) = 0;
      }
      break;
    case 6: ;
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 0)) = 6;
      (*(int *)(gen_frame + 0x14)) = 0;
      (*(uint *)(gen_frame + 0x18)) = 0;
      (*(int *)(gen_frame + 0x1c)) = 0;
      (*(int *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      iVar7 = *param_4;
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 2)) = 0;
      (*(uint *)(gen_frame + 0xc)) = 6;
      (*(int *)(gen_frame + 0x14)) = iVar7;
      (*(uint *)(gen_frame + 0x18)) = param_4[1];
LAB_0059ee39: ;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(int *)(gen_frame + 0x20)) = 0;
      (*(int *)(gen_frame + 0x1c)) = 0;
      uVar5 = F_005997b0(pvVar8 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0xc)));
      if (uVar5 != 0) {
        *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x10000;
      }
      break;
    case 7: ;
      if (this[0xa4] != (undefined1)0x0) {
        this[0xa4] = (undefined1)0x0;
        this[200] = (undefined1)0x0;
        *(undefined4 *)(this + 0xb4) = 0;
        this[0xf0] = (undefined1)0x0;
        *(undefined4 *)(this + 0xdc) = 0;
      }
      (*(int *)(gen_frame + 0x14)) = 0;
      (*(uint *)(gen_frame + 0x18)) = 0;
      (*(int *)(gen_frame + 0x1c)) = 0;
      (*(int *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      iVar7 = *param_4;
      (*(uint *)(gen_frame + 0x18)) = param_4[1];
      pvVar8 = *(undefined * PTR32 *)(this + 0x70);
      (*(uint *)(gen_frame + 0xc)) = 7;
      (*(int *)(gen_frame + 0x14)) = iVar7;
      uVar5 = F_005997b0(pvVar8 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0xc)));
      if (uVar5 != 0) {
        *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x10000;
      }
      F_0059d640(*(undefined * PTR32 *)(this + 0x6c) GEN_EDX_ARG,7);
      break;
    case 9: ;
      if (this[0xa4] != (undefined1)0x0) {
        this[0xa4] = (undefined1)0x0;
        goto LAB_0059eeeb;
      }
      if (this[*(byte *)((int)param_4 + 6) + 0x8d] != (undefined1)0x0) {
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 0)) = 0x17;
        (*(int *)(gen_frame + 0x14)) = 0;
        (*(uint *)(gen_frame + 0x18)) = 0;
        (*(int *)(gen_frame + 0x1c)) = 0;
        (*(int *)(gen_frame + 0x20)) = 0;
        (*(undefined4 *)(gen_frame + 0x24)) = 0;
        (*(undefined4 *)(gen_frame + 0x28)) = 0;
        (*(int *)(gen_frame + 0x14)) = *param_4;
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 2)) = 0;
        (*(uint *)(gen_frame + 0xc)) = 0x17;
        (*(uint *)(gen_frame + 0x18)) = param_4[1];
        uVar5 = F_005997b0(pvVar8 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0xc)));
        if (uVar5 != 0) {
          *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x10000;
          ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x34))(this GEN_EDX_ARG);
        }
      }
    }
  }
  uVar5 = param_1 & 0xffff;
  if (0x31 < uVar5 - 3) {
    return uVar5 - 3;
  }
  uVar6 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x59f498) + uVar5 + 1)));
  switch((unsigned int)(uintptr_t)(uVar5)) {
  case 3: ;
    if (((((*(byte *)((int)param_4 + 7) & 8) == 0) && (*(char *)((int)param_4 + 6) == '\0')) && (((byte)this[0x220] & 2) != 0)) && (*(int *)(this + 0x210) == 0)) {
      *(short *)(this + 0x21c) = (short)*param_4;
      *(short *)(this + 0x21e) = *(short *)((int)param_4 + 2);
      *(undefined4 *)(this + 0x218) = *(undefined4 *)(this + 0x1fc);
      F_0056a3d0(REFG(void * PTR32, 0x1379860) GEN_EDX_ARG,4,0,this,0,0);
      uVar5 = F_0056a3d0(REFG(void * PTR32, 0x1379860) GEN_EDX_ARG,5,0,this,0,0);
      return uVar5;
    }
    break;
  case 4: ;
    F_00589870(this GEN_EDX_ARG);
    pvVar8 = *(undefined * PTR32 *)(this + 0x70);
    (*(int *)(gen_frame + 0x14)) = 0;
    (*(uint *)(gen_frame + 0x18)) = 0;
    (*(int *)(gen_frame + 0x1c)) = 0;
    (*(int *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(uint *)(gen_frame + 0xc)) = 4;
    uVar5 = F_005997b0(pvVar8 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0xc)));
    return uVar5;
  case 5: ;
    if (param_2 != 0) {
      return uVar6;
    }
    if (*(int *)(this + 0x210) != 0) {
      return uVar6;
    }
    uVar5 = (int)(short)*param_4 - (int)*(short *)(this + 0x21c);
    uVar6 = (int)uVar5 >> 0x1f;
    if (((int)((uVar5 ^ uVar6) - uVar6) < 7) && (uVar5 = (int)*(short *)((int)param_4 + 2) - (int)*(short *)(this + 0x21e), uVar6 = (int)uVar5 >> 0x1f, uVar6 = (uVar5 ^ uVar6) - uVar6, (int)uVar6 < 7)) {
      return uVar6;
    }
    fVar9 = 0.0;
    fVar10 = 0.0;
    if (((byte)this[0x220] & 4) == 0) {
      iVar7 = *(int *)(this + 0x70);
    }
    else {
      if (*(int *)(this + 0x1e0) == 0) goto LAB_0059f171;
      iVar7 = *((int *)GEN_TOP((*(int *)(this + 0x1e0) + 0x70)));
    }
    if (iVar7 != 0) {
      fVar10 = *(float *)(iVar7 + 0x34);
      fVar9 = *(float *)(iVar7 + 0x30);
    }
LAB_0059f171: ;
    *(short *)(this + 0x21e) = (short)(int)fVar10;
    *(short *)(this + 0x21c) = (short)(int)fVar9;
    F_00589870(this GEN_EDX_ARG);
    uVar5 = F_0059c8d0(this GEN_EDX_ARG,param_4);
    return uVar5;
  case 10: ;
    uVar6 = (uint)*(byte *)((int)param_4 + 6);
    if (this[uVar6 + 0x8d] != (undefined1)0x0) {
      (*(int *)(gen_frame + 0x14)) = 0;
      (*(uint *)(gen_frame + 0x18)) = 0;
      (*(int *)(gen_frame + 0x1c)) = 0;
      (*(int *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      iVar7 = param_4[1];
      (*(int *)(gen_frame + 0x14)) = *param_4;
      pvVar8 = *(undefined * PTR32 *)(this + 0x70);
      (*(uint *)(gen_frame + 0xc)) = 0x22;
      (*(uint *)(gen_frame + 0x18)) = iVar7;
      uVar5 = F_005997b0(pvVar8 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0xc)));
      uVar6 = 0;
      if (uVar5 != 0) {
        *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x80000;
        *(undefined1 *)(param_3 + 0x15) = (undefined1)(*(undefined4 *)(gen_frame + 0x10));
        *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x10000;
        return uVar5;
      }
    }
    break;
  case 0xc: ;
    if (((((*(byte *)(param_3 + 0x16) & 1) == 0) && (uVar6 = F_0055a490(*(undefined4 *)(this + 0x70) GEN_EDX_ARG), (char)uVar6 != '\0')) && (this[0x8e] != (undefined1)0x0)) && (((uVar6 = F_0055a350(((undefined4)(uint)(this)) GEN_EDX_ARG), (char)uVar6 != '\0' || (this[0x8b] != (undefined1)0x0)) && (*param_4 == 4)))) {
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 0)) = 0x16;
      (*(uint *)(gen_frame + 0x18)) = 0;
      (*(int *)(gen_frame + 0x14)) = 0;
      (*(int *)(gen_frame + 0x1c)) = 0;
      (*(int *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      bVar1 = *(byte *)((int)param_4 + 5);
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 3)) = bVar1 | 8;
      bVar2 = *(byte *)(param_4 + 1);
      uVar6 = (uint)bVar2;
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 2)) = 0;
      (*(uint *)(gen_frame + 0xc)) = 0x16;
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)) = 1;
      (*(uint *)(gen_frame + 0x18)) = CONCAT13(bVar1,0x10000) | 0x8000000;
      if (bVar2 == 0) {
        uVar5 = F_005997b0(this_00 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0xc)));
        uVar6 = 0;
        if (uVar5 != 0) {
          *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x10000;
          return uVar5;
        }
      }
      else if (bVar2 == 1) {
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 0)) = 0x17;
        (*(uint *)(gen_frame + 0xc)) = 0x17;
        uVar5 = F_005997b0(this_00 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0xc)));
        if (uVar5 != 0) {
          *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x10000;
        }
        uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x34))(this GEN_EDX_ARG);
      }
    }
    break;
  case 0x11: ;
    uVar4 = 0x11;
    goto LAB_0059f31d;
  case 0x12: ;
    uVar4 = 0x12;
    goto LAB_0059f31d;
  case 0x16: ;
    uVar4 = 0x16;
    goto LAB_0059f31d;
  case 0x17: ;
    uVar4 = 0x17;
    goto LAB_0059f31d;
  case 0x19: ;
    uVar5 = F_0059c830(this GEN_EDX_ARG,param_4,0x19,param_3);
    return uVar5;
  case 0x2d: ;
    iVar7 = *param_4;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 0)) = 0x2d;
    (*(int *)(gen_frame + 0x14)) = 0;
    (*(uint *)(gen_frame + 0x18)) = 0;
    (*(int *)(gen_frame + 0x1c)) = 0;
    (*(int *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    iVar3 = param_4[1];
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 2)) = 0;
    (*(uint *)(gen_frame + 0xc)) = 0x2d;
    (*(int *)(gen_frame + 0x14)) = iVar7;
    (*(uint *)(gen_frame + 0x18)) = iVar3;
    (*(int *)(gen_frame + 0x1c)) = param_4[2];
    goto LAB_0059f295;
  case 0x2e: ;
    F_00557640(&(*(uint *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
    (*(int *)(gen_frame + 0x14)) = *param_4;
    (*(uint *)(gen_frame + 0x18)) = param_4[1];
    (*(int *)(gen_frame + 0x1c)) = param_4[2];
LAB_0059f295: ;
    uVar5 = F_005997b0(*(undefined * PTR32 *)(this + 0x70) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0xc)));
    uVar6 = 0;
    if (uVar5 != 0) {
      *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x10000;
      return uVar5;
    }
    break;
  case 0x31: ;
    uVar4 = 0x31;
LAB_0059f31d: ;
    pvVar8 = *(undefined * PTR32 *)(this + 0x70);
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 0)) = uVar4;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 2)) = 0;
    (*(uint *)(gen_frame + 0xc)) = (uint)uVar4;
    (*(int *)(gen_frame + 0x14)) = 0;
    (*(uint *)(gen_frame + 0x18)) = 0;
    (*(int *)(gen_frame + 0x1c)) = 0;
    (*(int *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(int *)(gen_frame + 0x14)) = *param_4;
    (*(uint *)(gen_frame + 0x18)) = param_4[1];
    uVar5 = F_005997b0(pvVar8 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0xc)));
    uVar6 = 0;
    if (uVar5 != 0) {
      *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x80000;
      *(undefined1 *)(param_3 + 0x15) = (undefined1)(*(undefined4 *)(gen_frame + 0x10));
      *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x10000;
      return uVar5;
    }
    break;
  case 0x34: ;
    F_00557640(&(*(uint *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
    iVar7 = param_4[1];
    iVar3 = param_4[2];
    (*(int *)(gen_frame + 0x14)) = *param_4;
    *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x80000;
    *(undefined1 *)(param_3 + 0x15) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(uint *)(gen_frame + 0x18)) = iVar7;
    (*(int *)(gen_frame + 0x1c)) = iVar3;
    uVar5 = F_005997b0(*(undefined * PTR32 *)(this + 0x70) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0xc)));
    uVar6 = 0;
    if (uVar5 != 0) {
      *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x80000;
      *(undefined1 *)(param_3 + 0x15) = (undefined1)(*(undefined4 *)(gen_frame + 0x10));
      *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x10000;
      return uVar5;
    }
  }
  return uVar6;
}

/* ref: FUN_0059f4d0 */
GEN_FRAME uint GEN_THISCALL F_0059f4d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x59f4d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined * this_00;
  undefined4 uVar4;
  
  *(uint *)((int)this + 0x1fc) = param_2 & 0xffff;
  if ((*(char *)((int)param_1 + 6) == '\0') && ((char)param_1[1] != '\0')) {
    cVar2 = '\x01';
  }
  else {
    cVar2 = '\0';
  }
  if (*(char *)((int)this + 0x88) != cVar2) {
    *(char *)((int)this + 0x88) = cVar2;
    iVar1 = *(int *)((int)this + 0x6c);
    if (cVar2 == '\0') {
      if ((iVar1 == 0) || (this_00 = *(undefined * PTR32 *)(iVar1 + 0x1c), this_00 == (undefined *)0x0))
      goto LAB_0059f538;
      uVar4 = 1;
    }
    else {
      if ((iVar1 == 0) || (this_00 = *(undefined * PTR32 *)(iVar1 + 0x1c), this_00 == (undefined *)0x0))
      goto LAB_0059f538;
      uVar4 = 8;
    }
    F_0059ba30(this_00 GEN_EDX_FWD,2,uVar4,0,0);
  }
LAB_0059f538: ;
  if (*(int *)((int)this + 0x70) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *((uint *)GEN_TOP((*(int *)((int)this + 0x70) + 0x84))) >> 0x15 & 1;
  }
  if ((char)uVar3 == *(char *)((int)param_1 + 6)) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x28))(this GEN_EDX_ARG,(uint)(*(char *)((int)param_1 + 6) == '\0'));
  }
  if ((*(int *)((int)this + 0x1cc) == 0) || ((char)param_3 != '\0')) {
    uVar3 = 0;
    if (*param_1 != 0) {
      uVar3 = F_00584110(*(undefined * PTR32 *)((int)this + 0x104) GEN_EDX_ARG,
                           *((undefined4 *)GEN_TOP((*param_1 + *(int *)((int)this + 0x1fc) * 4))));
    }
  }
  else if (*(int *)((int)this + 0x1cc) != 0) {
    uVar3 = ((code *)*(gen_code32 *)((int)this + 0x1d0))
                      (*(int *)((int)this + 0x1cc),*(undefined4 *)((int)this + 0x1fc),
                       (int)this + 0x14c,this);
    return uVar3;
  }
  return uVar3;
}

/* ref: FUN_0059f5c0 */
GEN_FRAME uint GEN_THISCALL F_0059f5c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x59f5c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if ((this == (undefined *)0x0) || (*(int *)((int)this + 0x70) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *((uint *)GEN_TOP((*(int *)((int)this + 0x70) + 0x84))) >> 0x15 & 1;
  }
  if ((char)uVar1 == *(char *)(param_1 + 6)) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x28))(this GEN_EDX_FWD,(uint)(*(char *)(param_1 + 6) == '\0'));
  }
  if (*(char *)(param_1 + 6) == '\0') {
    uVar1 = F_0059dde0(this GEN_EDX_ARG,(uint)*(byte *)(param_1 + 4));
  }
  if (*(int *)((int)this + 0x1cc) != 0) {
    uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1d4))(*(int *)((int)this + 0x1cc),param_2,(int)this + 0x14c);
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentTreeList::vf27 */
GEN_FRAME uint GEN_THISCALL F_0059f640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x59f640u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int * piVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined * this_00;
  uint uVar7;
  
  uVar7 = param_1;
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)(this + 0x158))) {
    piVar1 = ((int *)GEN_TOP((*(int *)(this + 300) + param_1 * 4)));
    iVar4 = *piVar1;
    if (*(char *)(iVar4 + 0x2d) == '\0') {
      iVar5 = *(int *)(this + 0x144);
      (*(bool *)(gen_frame + 0x18)) = *(int *)(this + 0x140) == iVar4;
      piVar2 = ((int *)GEN_TOP((*(int *)(this + 300) + param_1 * 4)));
      (*(byte *)(gen_frame + 0x1a)) = *(byte *)(iVar4 + 0x2a) >> 5 & 1;
      iVar6 = *piVar2;
      (*(uint *)(gen_frame + 0xc)) = param_1;
      (*(int *)(gen_frame + 0x10)) = iVar6;
      bVar3 = *(byte *)(*piVar2 + 0x2b);
      (*(bool *)(gen_frame + 0x19)) = iVar5 == iVar4;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      if ((bVar3 & 2) != 0) {
        (*(bool *)(gen_frame + 0x18)) = (bool)(*(byte *)(*piVar1 + 0x2a) & 1);
      }
      this_00 = *(undefined * PTR32 *)(*piVar1 + 0x20);
      *(uint *)((int)this_00 + 0x1fc) = param_1;
      uVar7 = F_0059f5c0(this_00 GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x14)),&(*(uint *)(gen_frame + 0xc)));
    }
  }
  return uVar7;
}

/* ref: FUN_0059f6f0 */
GEN_FRAME uint GEN_THISCALL F_0059f6f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x59f6f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0xac);
  uVar2 = param_1 + iVar1;
  *(uint *)((int)this + 0xac) = uVar2;
  *(uint *)((int)this + 0xb0) = uVar2;
  F_00574c80(this GEN_EDX_FWD,uVar2,1,1);
  if ((char)param_2 == '\0') {
    F_0056de20(this GEN_EDX_ARG,*(undefined4 *)((int)this + 0xac));
    F_00562a80(this GEN_EDX_ARG);
  }
  else {
    uVar2 = F_0059ca10(this GEN_EDX_ARG,*(undefined4 *)((int)this + 0xb0),iVar1,0);
    if (uVar2 != 0) {
      return 1;
    }
  }
  return (uint)(iVar1 != *(int *)((int)this + 0xac));
}

/* ref: Component::GUI2::AtkComponentScrollBar::vf2 */
GEN_FRAME uint GEN_THISCALL F_0059f770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x59f770u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  uint param_4 = (uint)gen_a3;
  short * param_5 = (short *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  undefined * pvVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  short sVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  
  (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)((int)param_1 + 0xb0);
  if (*(char *)((int)param_1 + 200) == '\0') {
    sVar7 = *param_5;
  }
  else {
    sVar7 = param_5[1];
  }
  uVar4 = (param_2 & 0xffff) - 3;
  switch((unsigned int)(uintptr_t)(param_2 & 0xffff)) {
  case 3: ;
  case 0x16: ;
  case 0x17: ;
    uVar4 = param_3 - 1;
    switch((unsigned int)(uintptr_t)(uVar4)) {
    case 0: ;
      if (*(char *)((int)param_1 + 0xc9) == '\0') {
        *(undefined1 *)((int)param_1 + 0xc9) = 1;
        *(short *)((int)param_1 + 0xba) = sVar7;
        F_0056a3d0(REFG(void * PTR32, 0x1379860) GEN_EDX_FWD,4,0,param_1,0,1);
        F_0056a3d0(REFG(void * PTR32, 0x1379860) GEN_EDX_ARG,5,0,param_1,0,1);
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(undefined4 *)(gen_frame + 0x1c)) = 0;
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        (*(undefined4 *)(gen_frame + 0x24)) = 0;
        uVar10 = *(undefined4 *)param_5;
        (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(param_5 + 2);
        pvVar2 = *(undefined * PTR32 *)((int)param_1 + 0x70);
        (*(undefined4 *)(gen_frame + 0x8)) = 3;
        (*(undefined4 *)(gen_frame + 0x10)) = uVar10;
        uVar6 = F_005997b0(pvVar2 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)));
        uVar4 = 0;
        if (uVar6 != 0) {
          *(uint *)(param_4 + 0x14) = *(uint *)(param_4 + 0x14) | 0x10000;
          uVar4 = param_4;
        }
      }
      break;
    case 1: ;
      if (*(char *)((int)param_1 + 0xc9) == '\0') {
        iVar5 = *(int *)((int)param_1 + 0x84);
        fVar8 = gen_bits2f(param_2);
        fVar9 = gen_bits2f(param_2);
        if (iVar5 != 0) {
          fVar9 = *(float *)(iVar5 + 0x30);
          fVar8 = *(float *)(iVar5 + 0x34);
        }
        if (*(char *)((int)param_1 + 200) == '\0') {
          fVar8 = fVar9;
        }
        bVar3 = sVar7 < (short)(int)fVar8;
        uVar4 = CONCAT31((int3)((uint)(int)fVar8 >> 8),bVar3) & 0xffff;
        *(bool *)((int)param_1 + 0xcb) = bVar3;
        *(bool *)((int)param_1 + 0xcc) = !bVar3;
      }
      break;
    case 2: ;
      *(undefined1 *)((int)param_1 + 0xcb) = 1;
      break;
    case 3: ;
      *(undefined1 *)((int)param_1 + 0xcc) = 1;
    }
    cVar1 = *(char *)((int)param_1 + 0xcb);
    uVar4 = CONCAT31((int3)(uVar4 >> 8),cVar1);
    if ((cVar1 != '\0') || (*(char *)((int)param_1 + 0xcc) != '\0')) {
      if (*(char *)((int)param_1 + 0xcd) == '\0') {
        uVar10 = *(undefined4 *)((int)param_1 + 0xb0);
        (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 0x19;
        (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = 0;
        (*(undefined4 *)(gen_frame + 0x8)) = 0x19;
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(undefined4 *)(gen_frame + 0x1c)) = 0;
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        (*(undefined4 *)(gen_frame + 0x24)) = 0;
        (*(undefined4 *)(gen_frame + 0x10)) = uVar10;
        (*(undefined4 *)(gen_frame + 0x14)) = uVar10;
        uVar6 = F_005997b0(*(undefined * PTR32 *)((int)param_1 + 0x70) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)));
        if (*(char *)((int)param_1 + 0xcd) == '\0') {
          uVar10 = *(undefined4 *)((int)param_1 + 0xb0);
        }
        F_0056de20(param_1 GEN_EDX_ARG,uVar10);
        uVar4 = F_00562a80(param_1 GEN_EDX_ARG);
      }
      else {
        iVar5 = (int)*(short *)((int)param_1 + 0xc2);
        if (cVar1 != '\0') {
          iVar5 = -iVar5;
        }
        uVar4 = F_0059f6f0(param_1 GEN_EDX_ARG,iVar5,1);
        uVar6 = uVar4;
      }
      if (uVar6 != 0) {
        *(uint *)(param_4 + 0x14) = *(uint *)(param_4 + 0x14) | 0x10000;
        uVar4 = param_4;
      }
    }
    *(undefined2 *)((int)param_1 + 0xcb) = 0;
    return uVar4;
  case 4: ;
    if (*(char *)((int)param_1 + 0xc9) != '\0') {
      *(undefined1 *)((int)param_1 + 0xc9) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      uVar10 = *(undefined4 *)param_5;
      (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(param_5 + 2);
      pvVar2 = *(undefined * PTR32 *)((int)param_1 + 0x70);
      (*(undefined4 *)(gen_frame + 0x8)) = 4;
      (*(undefined4 *)(gen_frame + 0x10)) = uVar10;
      uVar4 = F_005997b0(pvVar2 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)));
      if (uVar4 != 0) {
        *(uint *)(param_4 + 0x14) = *(uint *)(param_4 + 0x14) | 0x10000;
      }
      F_00583770(((undefined *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x23c))) GEN_EDX_ARG,4,0,param_1,0);
      F_00583770(((undefined *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x23c))) GEN_EDX_ARG,5,0,param_1,0);
      if (*(char *)((int)param_1 + 0xcd) != '\0') {
        F_00574dc0(param_1 GEN_EDX_ARG,(uint)(ushort)(((short)(int)((float10)((float)GEN_TOF(((float10)*(int *)((int)
                                                  param_1 + 0xac) /
                                                  (float10)*(int *)((int)param_1 + 0xa8)))) *
                                                  (float10)*(int *)((int)param_1 + 0xb4)) -
                                            *(short *)((int)param_1 + 0xba)) + sVar7),1,1);
        uVar4 = F_0059ca10(param_1 GEN_EDX_ARG,*(undefined4 *)((int)param_1 + 0xb0),(*(undefined4 *)(gen_frame + 0x28)),0);
        return uVar4;
      }
      *(undefined4 *)((int)param_1 + 0xac) = *(undefined4 *)((int)param_1 + 0xb0);
      uVar4 = F_0056de20(param_1 GEN_EDX_ARG,*(undefined4 *)((int)param_1 + 0xb0));
      return uVar4;
    }
    break;
  case 5: ;
    if (*(char *)((int)param_1 + 0xc9) != '\0') {
      F_00574dc0(param_1 GEN_EDX_ARG,(uint)(ushort)(((short)(int)((float10)((float)GEN_TOF(((float10)*(int *)((int)
                                                  param_1 + 0xac) /
                                                  (float10)*(int *)((int)param_1 + 0xa8)))) *
                                                  (float10)*(int *)((int)param_1 + 0xb4)) -
                                          *(short *)((int)param_1 + 0xba)) + sVar7),0,1);
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      uVar10 = *(undefined4 *)param_5;
      (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(param_5 + 2);
      pvVar2 = *(undefined * PTR32 *)((int)param_1 + 0x70);
      (*(undefined4 *)(gen_frame + 0x8)) = 5;
      (*(undefined4 *)(gen_frame + 0x10)) = uVar10;
      uVar4 = F_005997b0(pvVar2 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)));
      if (uVar4 != 0) {
        *(uint *)(param_4 + 0x14) = *(uint *)(param_4 + 0x14) | 0x10000;
      }
      if (*(char *)((int)param_1 + 0xcd) != '\0') {
        uVar4 = F_0059ca10(param_1 GEN_EDX_ARG,*(undefined4 *)((int)param_1 + 0xb0),(*(undefined4 *)(gen_frame + 0x28)),0);
        return uVar4;
      }
      F_0056de20(param_1 GEN_EDX_ARG,*(undefined4 *)((int)param_1 + 0xac));
      uVar4 = F_00562a80(param_1 GEN_EDX_ARG);
    }
    break;
  case 8: ;
    if (*(char *)((int)param_1 + 0xcd) == '\0') {
      uVar10 = *(undefined4 *)param_5;
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = 8;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = uVar10;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      uVar10 = *(undefined4 *)(param_5 + 2);
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 2)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 8;
      (*(undefined4 *)(gen_frame + 0x14)) = uVar10;
      uVar4 = F_005997b0(*(undefined * PTR32 *)((int)param_1 + 0x70) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)));
    }
    else {
      iVar5 = (int)*(short *)((int)param_1 + 0xc2);
      if (0 < param_5[2]) {
        iVar5 = -iVar5;
      }
      uVar4 = F_0059f6f0(param_1 GEN_EDX_ARG,iVar5,1);
    }
    if (uVar4 != 0) {
      *(uint *)(param_4 + 0x14) = *(uint *)(param_4 + 0x14) | 0x10000;
    }
    uVar4 = F_0056de20(param_1 GEN_EDX_ARG,*(undefined4 *)((int)param_1 + 0xac));
    return uVar4;
  }
  return uVar4;
}

/* ref: FUN_0059fc00 */
GEN_NOFRAME uint GEN_THISCALL F_0059fc00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x59fc00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  
  if (*(char *)((int)this + 0x90) != '\0') {
    in_EAX = F_0059caa0(this GEN_EDX_FWD,*(undefined4 *)((int)this + 0x8c));
    *(undefined2 *)((int)this + 0x90) = 0x100;
  }
  return in_EAX;
}

/* ref: FUN_0059fc30 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0059fc30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x59fc30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  
  if (*(char *)((int)this + 0x90) == '\0') {
    iVar1 = *(int *)((int)this + 0x84);
    *(undefined2 *)((int)this + 0x90) = 0x101;
    if (*(char *)(iVar1 + 0x88) != '\x01') {
      *(undefined1 *)(iVar1 + 0x88) = 1;
      if ((*(int *)(iVar1 + 0x6c) != 0) &&
         (this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(iVar1 + 0x6c) + 0x1c))), this_00 != (undefined *)0x0)) {
        F_0059ba30(this_00 GEN_EDX_FWD,2,8,0,0);
      }
    }
  }
  return;
}

/* ref: Component::GUI2::AtkComponentIconText::vf2 */
GEN_FRAME uint GEN_THISCALL F_0059fc80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x59fc80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((param_1 & 0xffff) - 6)));
  switch((unsigned int)(uintptr_t)(piVar1)) {
  case (int *)0x0: ;
    uVar2 = F_0059cc60(this GEN_EDX_FWD,0x35,param_3,(uint)*(byte *)((int)param_4 + 6));
    return uVar2;
  case (int *)0x1: ;
    uVar2 = F_0059cc60(this GEN_EDX_ARG,0x36,param_3,(uint)*(byte *)((int)param_4 + 6));
    return uVar2;
  case (int *)0x3: ;
    uVar2 = F_0059cc60(this GEN_EDX_ARG,0x37,param_3,(uint)*(byte *)((int)param_4 + 6));
    return uVar2;
  case (int *)0x6: ;
    if (this != (undefined *)0x0) {
      piVar1 = (int *)0x0;
      if ((((*(int *)(this + 0x70) != 0) &&
           (piVar1 = (int *)0x0, (*((uint *)GEN_TOP((*(int *)(this + 0x70) + 0x84))) >> 0x15 & 1) != 0)) &&
          (piVar1 = param_4, *param_4 == 1)) && ((char)param_4[1] == '\0')) {
        piVar1 = (int *)F_0059cc60(this GEN_EDX_ARG,0x37,param_3,1);
      }
    }
  }
  return (uint)piVar1;
}

/* ref: FUN_0059fd40 */
GEN_FRAME uint GEN_THISCALL F_0059fd40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x59fd40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((uVar1 != 0) && (*(char *)((int)this + 0x24) == '\0')) {
    *(uint *)(uVar1 + 0x84) = *(uint *)(uVar1 + 0x84) | 0x100000;
    *(uint *)(uVar1 + 0x88) = *(uint *)(uVar1 + 0x88) & 0xffffff7f;
  }
  if ((*(byte *)((int)this + 0x26) & 4) != 0) {
    bVar2 = F_0059ccc0((undefined *)((int)this - 0x84) GEN_EDX_FWD,param_1);
    return CONCAT31(extraout_var,bVar2);
  }
  return uVar1 & 0xffffff00;
}

/* ref: FUN_0059fd80 */
GEN_FRAME uint GEN_THISCALL F_0059fd80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x59fd80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  uVar1 = 0;
  if ((*(int *)((int)this + 0x6c) != 0) &&
     (this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x6c) + 0x1c))), uVar1 = 0, this_00 != (undefined *)0x0)) {
    uVar1 = F_0059ba30(this_00 GEN_EDX_FWD,2,param_1,0,0);
  }
  if (((*(int *)((int)this + 0xa4) != 0) &&
      (uVar1 = *((uint *)GEN_TOP((*(int *)((int)this + 0xa4) + 0x9c))), uVar1 != 0)) &&
     (*(undefined * PTR32 *)(uVar1 + 0x1c) != (undefined *)0x0)) {
    uVar1 = F_0059ba30(*(undefined * PTR32 *)(uVar1 + 0x1c) GEN_EDX_ARG,2,param_1,0,0);
  }
  return uVar1;
}

/* ref: FUN_0059fde0 */
GEN_FRAME uint GEN_THISCALL F_0059fde0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x59fde0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  undefined * this;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  
  iVar2 = *(int *)(param_1 + 0xa4);
  uVar3 = 0;
  if (iVar2 != 0) {
    bVar4 = (byte)(param_2 >> 8) & 1;
    if (*(byte *)(iVar2 + 0x96) != bVar4) {
      *(byte *)(iVar2 + 0x96) = bVar4;
      iVar2 = *(int *)(iVar2 + 0xa0);
      if ((param_2 & 0x100) == 0) {
        if ((iVar2 != 0) && (this = *(undefined * PTR32 *)(iVar2 + 0x1c), this != (undefined *)0x0)) {
          *(ushort *)((int)this + 0x22) = *(ushort *)((int)this + 0x22) & 0x7fff;
          *(undefined4 *)((int)this + 0x18) = 0;
          F_00573430(this GEN_EDX_FWD,0);
        }
      }
      else if ((iVar2 != 0) && (*(undefined * PTR32 *)(iVar2 + 0x1c) != (undefined *)0x0)) {
        F_0059ba30(*(undefined * PTR32 *)(iVar2 + 0x1c) GEN_EDX_ARG,2,0x1a,0,0);
      }
    }
    uVar5 = param_2 & 0xff;
    if (uVar5 - 1 < 99) {
      uVar3 = F_0057a490(*(undefined4 *)(param_1 + 0xa4) GEN_EDX_ARG,
                           (float)((float10)uVar5 * (float10)*(double *)&REFG(undefined, 0x10928e8)));
      return uVar3;
    }
    uVar3 = *((uint *)GEN_TOP((*(int *)(param_1 + 0xa4) + 0xa4)));
    if (uVar5 == 100) {
      if (uVar3 != 0) {
        puVar1 = (undefined4 *)(uVar3 + 0x1c);
        uVar3 = 0;
        if ((undefined *)*puVar1 != (undefined *)0x0) {
          uVar3 = F_0059ba30((undefined *)*puVar1 GEN_EDX_ARG,2,0x19,0,0);
          return uVar3;
        }
      }
    }
    else if (uVar3 != 0) {
      puVar1 = (undefined4 *)(uVar3 + 0x1c);
      uVar3 = 0;
      if ((undefined *)*puVar1 != (undefined *)0x0) {
        uVar3 = F_0059ba30((undefined *)*puVar1 GEN_EDX_ARG,2,0x13,0,0);
      }
    }
  }
  return uVar3;
}

/* ref: FUN_0059fef0 */
GEN_NOFRAME uint GEN_THISCALL F_0059fef0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x59fef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * pcVar1;
  char cVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  
  if (*(int *)((int)this + 0x8c) == 0) {
    pcVar4 = (char *)0x0;
  }
  else {
    pcVar4 = *((char * PTR32 *)GEN_TOP((*(int *)((int)this + 0x8c) + 0xf0)));
  }
  iVar5 = 0;
  cVar2 = *pcVar4;
  while (cVar2 != '\0') {
    if (('/' < cVar2) && (cVar2 < ':')) {
      iVar5 = cVar2 - 0x30 + iVar5 * 10;
    }
    pcVar1 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
    cVar2 = *pcVar1;
  }
  F_0059d240(this GEN_EDX_FWD,iVar5);
  uVar3 = F_0057eb30(*(undefined * PTR32 *)((int)this + 0x8c) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x178),
                       (uint)*(byte *)((int)this + 0x278),0,(uint)*(byte *)((int)this + 0x180),0);
  iVar5 = *(int *)((int)this + 0x8c);
  if (iVar5 != 0) {
    *(undefined4 *)(iVar5 + 0x104) = 0;
    *(undefined4 *)(iVar5 + 0x108) = 0;
  }
  return uVar3;
}

/* ref: FUN_0059ff80 */
GEN_FRAME unsigned int GEN_THISCALL F_0059ff80(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x59ff80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  if ((char)param_1[0x8b4a] != '\0') {
    if (param_1[4] == 0) {
      iVar1 = *(int *)param_1[3];
      uVar3 = F_0042a990(param_1[0x83a7] GEN_EDX_FWD);
      uVar3 = ((code *)*(gen_code32 *)(iVar1 + 8))(param_1[3],uVar3);
      param_1[4] = uVar3;
    }
    bVar2 = F_005918c0(param_1 GEN_EDX_ARG);
    if (bVar2 == 0) {
      if ((param_1[0x47] == 1) && (uVar3 = F_0056fad0(param_1 + 0x3b GEN_EDX_ARG), uVar3 == 2)) {
        F_00565450(param_1 + 0x3b GEN_EDX_ARG);
      }
      iVar1 = param_1[0x2e];
      F_00573c50((undefined *)(iVar1 + 0x1c4) GEN_EDX_ARG);
      F_005603a0((undefined *)(iVar1 + 0x3c) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
      F_0059bc20(param_1 + 0x8384 GEN_EDX_ARG,param_2);
      F_0059d760(param_1 + 0x838a GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
      F_00592220(param_1 + 0x839c GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
      ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0xd4))(param_1 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
      F_00559200(param_1 GEN_EDX_ARG);
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)param_1[0x4c] + 0x14))
                ((int *)param_1[0x4c] GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
      F_00586fc0(param_1 + 0x49 GEN_EDX_ARG);
    }
  }
  return;
}

/* ref: FUN_005a0080 */
GEN_FRAME uint GEN_THISCALL F_005a0080(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x5a0080u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint * puVar1;
  float fVar2;
  int iVar3;
  uint * puVar4;
  double dVar6;
  uint uVar7;
  int local_c;
  
  fVar2 = ((float)GEN_TOF(((float10)param_2 * (float10)*(double *)&REFG(undefined, 0x1088070) +
                 (float10)*(float *)((int)param_1 + 0x14))));
  dVar6 = (GEN_X87MATH(((double)fVar2),0xd));
  *(float *)((int)param_1 + 0x14) = (float)((float10)fVar2 - (float10)(float)dVar6);
  local_c = (int)(longlong)TRUNC((float10)(float)dVar6);
  uVar7 = F_0059d6e0(param_1 GEN_EDX_FWD,*(int *)((int)param_1 + 0x18),local_c + *(int *)((int)param_1 + 0x18)
                      );
  for (iVar3 = *((int *)GEN_TOP((*(int *)((int)param_1 + 4) + 0x14))); iVar3 != 0;
      iVar3 = *(int *)(iVar3 + 0xc)) {
    puVar4 = *(uint * PTR32 *)(iVar3 + 0x1c);
    if (puVar4 != (uint *)0x0) {
      uVar7 = *puVar4;
      puVar4[2] = *(uint *)((int)param_1 + 0x18);
      if (*(ushort *)(uVar7 + 4) != 0) {
        uVar7 = F_0055eeb0(*(undefined4 *)((int)param_1 + 0x18),*(undefined4 *)(uVar7 + 8),
                             (uint)*(ushort *)(uVar7 + 4));
        puVar4[3] = uVar7;
        *(ushort *)((int)puVar4 + 0x22) = *(ushort *)((int)puVar4 + 0x22) & 0x807f | 0x7f;
        if (uVar7 == 0) {
          *(uint *)(puVar4[1] + 0x84) = *(uint *)(puVar4[1] + 0x84) & 0xffefffff;
          uVar7 = 0;
        }
        else {
          if ((*(byte *)(puVar4[1] + 0x88) & 0x80) == 0) {
            puVar1 = (uint *)(puVar4[1] + 0x84);
            *puVar1 = *puVar1 | 0x100000;
          }
          uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)puVar4[1] + 8))((int *)puVar4[1] GEN_EDX_ARG);
        }
      }
    }
  }
  return uVar7;
}

/* ref: FUN_005a0180 */
GEN_FRAME byte GEN_STDCALL F_005a0180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5a0180u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  short sVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int * piVar4;
  undefined * pvVar5;
  uint uVar6;
  
  if ((param_3 != 0) && (*(char *)(param_3 + 0x88) == '\0')) {
    sVar1 = *(short *)(param_3 + 0x134);
    puVar2 = (undefined4 *)*param_1;
    for (puVar3 = (undefined4 *)*puVar2; puVar3 != puVar2; puVar3 = (undefined4 *)*puVar3) {
      if (((*(int *)puVar3[2] == param_2) &&
          (piVar4 = ((int *)GEN_TOP(((int *)puVar3[2])[1])), (char)piVar4[0x22] != '\0')) &&
         ((short)piVar4[0x4d] == sVar1)) {
        *(undefined1 *)(piVar4 + 0x22) = 0;
        if ((piVar4[0x1b] != 0) && (pvVar5 = *(undefined * PTR32 *)(piVar4[0x1b] + 0x1c), pvVar5 != (undefined *)0x0)
           ) {
          F_0059ba30(pvVar5 GEN_EDX_ARG,2,1,0,0);
        }
        if (piVar4[0x1c] == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(uint *)(piVar4[0x1c] + 0x84) >> 0x15 & 1;
        }
        ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG,uVar6);
      }
    }
    if (*(char *)(param_3 + 0x88) != '\x01') {
      *(undefined1 *)(param_3 + 0x88) = 1;
      if ((*(int *)(param_3 + 0x6c) != 0) &&
         (pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)(param_3 + 0x6c) + 0x1c))), pvVar5 != (undefined *)0x0)) {
        F_0059ba30(pvVar5 GEN_EDX_ARG,2,8,0,0);
      }
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_005a0260 */
GEN_FRAME uint GEN_THISCALL F_005a0260(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5a0260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * this_00;
  uint in_EAX = 0;
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  this_00 = *(undefined4 * PTR32 *)((int)this + 4);
  if (this_00 != (undefined4 *)0x0) {
    in_EAX = *(uint *)this & 0xf;
    if (in_EAX == 9) {
      F_00488040(this_00 GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*this_00,this_00[1]);
      F_00488dc0(this_00 GEN_EDX_ARG);
      uVar1 = F_00406ad0(this_00);
      *(undefined4 *)((int)this + 4) = 0;
      return uVar1;
    }
    if ((in_EAX == 6) || (in_EAX == 7)) {
      in_EAX = F_00406ad0(this_00);
    }
  }
  *(undefined4 *)((int)this + 4) = 0;
  return in_EAX;
}

/* ref: Component::GUI2::AtkComponentIcon::vf8 */
GEN_NOFRAME uint GEN_THISCALL F_005a02d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5a02d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 AVar1;
  int iVar2;
  undefined * pvVar3;
  uint uVar4;
  
  iVar2 = *(int *)(this + 0xb0);
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 0x84) = *(uint *)(iVar2 + 0x84) & 0xffefffff;
    *(uint *)(iVar2 + 0x88) = *(uint *)(iVar2 + 0x88) | 0x80;
  }
  iVar2 = *(int *)(this + 0xb4);
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 0x84) = *(uint *)(iVar2 + 0x84) & 0xffefffff;
    *(uint *)(iVar2 + 0x88) = *(uint *)(iVar2 + 0x88) | 0x80;
  }
  if ((*(int *)(this + 0x9c) != 0) &&
     (pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x9c) + 0x1c))), pvVar3 != (undefined *)0x0)) {
    F_0059ba30(pvVar3 GEN_EDX_FWD,2,1,0,0);
  }
  uVar4 = *(uint *)(this + 0xa4);
  if ((uVar4 != 0) && (*(undefined * PTR32 *)(uVar4 + 0x1c) != (undefined *)0x0)) {
    uVar4 = F_0059ba30(*(undefined * PTR32 *)(uVar4 + 0x1c) GEN_EDX_ARG,2,0x13,0,0);
  }
  if (this[0x96] != (undefined1)0x0) {
    uVar4 = *(uint *)(this + 0xa0);
    this[0x96] = (undefined1)0x0;
    if ((uVar4 != 0) && (pvVar3 = *(undefined * PTR32 *)(uVar4 + 0x1c), pvVar3 != (undefined *)0x0)) {
      *(ushort *)((int)pvVar3 + 0x22) = *(ushort *)((int)pvVar3 + 0x22) & 0x7fff;
      *(undefined4 *)((int)pvVar3 + 0x18) = 0;
      uVar4 = F_00573430(pvVar3 GEN_EDX_ARG,0);
    }
  }
  AVar1 = this[0x78];
  uVar4 = CONCAT31((int3)(uVar4 >> 8),AVar1);
  if ((AVar1 != (undefined1)0x0) && (AVar1 != (undefined1)0xff)) {
    if (*(int *)(this + 0xa8) == 0) {
      *(undefined4 *)(this + 0x68) = *(undefined4 *)(this + 0x6c);
    }
    else {
      *(int *)(this + 0x68) = *(int *)(this + 0xa8);
    }
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x38))(this GEN_EDX_ARG);
    if (uVar4 != 0) {
      *(uint *)(uVar4 + 0x84) = *(uint *)(uVar4 + 0x84) | 0x4000000;
    }
  }
  return uVar4;
}

/* ref: FUN_005a03c0 */
GEN_FRAME uint GEN_THISCALL F_005a03c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5a03c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  uint in_EAX = 0;
  undefined * this_00;
  undefined4 uVar3;
  
  if (*(int *)((int)this + 0xb4) == 0) {
    return in_EAX;
  }
  iVar1 = *(int *)((int)this + 0x6c);
  if (param_1 == 0) {
    if ((iVar1 == 0) || (this_00 = *(undefined * PTR32 *)(iVar1 + 0x1c), this_00 == (undefined *)0x0))
    goto LAB_005a0405;
    uVar3 = 0x66;
  }
  else {
    if ((iVar1 == 0) || (this_00 = *(undefined * PTR32 *)(iVar1 + 0x1c), this_00 == (undefined *)0x0))
    goto LAB_005a0405;
    uVar3 = 0x65;
  }
  F_0059ba30(this_00 GEN_EDX_FWD,3,uVar3,0,0);
LAB_005a0405: ;
  uVar2 = *(uint *)((int)this + 0xb4);
  if (uVar2 != 0) {
    *(ushort *)(uVar2 + 0x54) = (ushort)((uint)param_1 >> 0x10) & 0xff;
    *(ushort *)(uVar2 + 0x56) = (ushort)((uint)param_1 >> 8) & 0xff;
    *(ushort *)(uVar2 + 0x58) = (ushort)param_1 & 0xff;
  }
  return uVar2;
}

/* ref: Component::GUI2::AtkComponentGaugeBar::vf8 */
GEN_FRAME uint GEN_THISCALL F_005a0440(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5a0440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  short sVar2;
  uint uVar3;
  
  iVar1 = *(int *)(this + 0x84);
  if ((iVar1 != 0) &&
     (*(short *)(this + 0xec) = (short)(int)*(float *)(iVar1 + 0x74), *(int *)(iVar1 + 0x8c) != 0))
  {
    if (*(int *)(this + 0x70) == 0) {
      sVar2 = (short)this;
    }
    else {
      sVar2 = *((short *)GEN_TOP((*(int *)(this + 0x70) + 0x7c)));
    }
    *(short *)(this + 0xee) = sVar2 + *(short *)(this + 0xec) * -2;
  }
  iVar1 = *(int *)(this + 0x8c);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) & 0xffefffff;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x80;
  }
  uVar3 = *(uint *)(this + 0x90);
  if (uVar3 != 0) {
    *(uint *)(uVar3 + 0x84) = *(uint *)(uVar3 + 0x84) & 0xffefffff;
    *(uint *)(uVar3 + 0x88) = *(uint *)(uVar3 + 0x88) | 0x80;
  }
  if ((*(int *)(this + 0x6c) != 0) &&
     (this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x6c) + 0x1c))), this_00 != (undefined *)0x0)) {
    uVar3 = F_0059ba30(this_00 GEN_EDX_FWD,2,0x11,0,0);
  }
  return uVar3;
}

/* ref: FUN_005a04e0 */
GEN_FRAME uint GEN_THISCALL F_005a04e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5a04e0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  float fVar1;
  int iVar2;
  undefined * this_00;
  float fVar3;
  uint * puVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint * puVar8;
  bool bVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  fVar1 = REFG(float, 0x1087f04);
  puVar8 = ((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe0)));
  if ((*(int *)&gen_args[1]) < (int)*puVar8) {
    puVar8 = (uint *)&(*(int *)&gen_args[1]);
  }
  puVar4 = ((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xdc)));
  if ((int)*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xdc))) < (int)*puVar8) {
    puVar4 = puVar8;
  }
  uVar5 = *puVar4;
  uVar7 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe4)));
  if (uVar7 != uVar5) {
    if ((char)(*(undefined4 *)&gen_args[2]) == '\0') {
      if ((int)uVar5 < (int)uVar7) {
        if (((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x98))) != 0) && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6c))) != 0)) &&
           (this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6c))) + 0x1c))), this_00 != (undefined *)0x0)) {
          F_0059ba30(this_00 GEN_EDX_FWD,2,0x65,0,0);
        }
        fVar1 = REFG(float, 0x1087f04);
        bVar9 = GEN_ISNAN(*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4)))) || GEN_ISNAN(REFG(float, 0x1087f04));
        if (bVar9 != (bVar9 || *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) == REFG(float, 0x1087f04))) {
          fVar1 = *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd8)));
          if ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x1087f04))) !=
              ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x1087f04))) || fVar1 == REFG(float, 0x1087f04))) {
            iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x90)));
            if (iVar2 != 0) {
              *(uint *)(iVar2 + 0x84) = *(uint *)(iVar2 + 0x84) | 0x100000;
              *(uint *)(iVar2 + 0x88) = *(uint *)(iVar2 + 0x88) & 0xffffff7f;
            }
            *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 200))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe4)));
            *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))), REFG(float, 0x10a07dc));
            *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd8))) = 0;
            *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe4)));
            *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd0))) = uVar5;
            *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa0))) = uVar5;
            uVar5 = F_00581370((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,uVar5);
            return uVar5;
          }
          *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 200))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 200)));
          *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4)));
          *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd8))) = fVar1;
          *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc)));
          *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd0))) = uVar5;
          *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa0))) = uVar5;
          uVar5 = F_00581370((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,uVar5);
          return uVar5;
        }
        if ((int)uVar5 <= *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa0)))) {
          *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa0))) = uVar5;
          *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa8))) = 0;
          *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa4))) = 0;
          *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xac))) = 0;
          *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb0))) = fVar1;
          *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb4))) = 0;
          *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xbc))) = 0;
          *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) = 0;
          *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc0))) = 0;
          *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) = fVar1;
          iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x8c)));
          if (iVar2 != 0) {
            *(uint *)(iVar2 + 0x84) = *(uint *)(iVar2 + 0x84) & 0xffefffff;
            *(uint *)(iVar2 + 0x88) = *(uint *)(iVar2 + 0x88) | 0x80;
          }
          iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x90)));
          if (iVar2 != 0) {
            *(uint *)(iVar2 + 0x84) = *(uint *)(iVar2 + 0x84) | 0x100000;
            *(uint *)(iVar2 + 0x88) = *(uint *)(iVar2 + 0x88) & 0xffffff7f;
          }
          *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 200))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe4)));
          *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))), REFG(float, 0x10a07dc));
          *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd8))) = 0;
          *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe4)));
          *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd0))) = uVar5;
          uVar5 = F_00581370((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,uVar5);
          return uVar5;
        }
        iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x90)));
        if (iVar2 != 0) {
          *(uint *)(iVar2 + 0x84) = *(uint *)(iVar2 + 0x84) | 0x100000;
          *(uint *)(iVar2 + 0x88) = *(uint *)(iVar2 + 0x88) & 0xffffff7f;
        }
        if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x8c))) != 0) {
          *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x8c))) + 0x84))) = 0;
        }
        if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x90))) != 0) {
          *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x90))) + 0x84))) = 1;
        }
        F_00591da0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) GEN_EDX_ARG);
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 200))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe4)));
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))), REFG(float, 0x10a07dc));
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd8))) = 0;
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe4)));
        *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd0))) = uVar5;
        *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb4))) = uVar5;
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc0))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc0)));
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4)));
        *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) = uVar5;
        *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xbc))) = uVar5;
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa0))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa0)));
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xac))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xac)));
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb0))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb0)));
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa4))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa4)));
        *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa8))) = uVar5;
        uVar5 = F_00581370((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,uVar5);
        return uVar5;
      }
      fVar1 = *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4)));
      uVar12 = 0;
      if ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x1087f04))) ==
          ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x1087f04))) || fVar1 == REFG(float, 0x1087f04))) {
        *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb4))) = uVar5;
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc0))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc0)));
        *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) = fVar1;
        *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) = uVar5;
        *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xbc))) = uVar5;
        uVar6 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa4)));
        uVar11 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xac)));
        uVar12 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb0)));
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa0))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa0)));
      }
      else {
        iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x8c)));
        if (iVar2 != 0) {
          *(uint *)(iVar2 + 0x84) = *(uint *)(iVar2 + 0x84) | 0x100000;
          *(uint *)(iVar2 + 0x88) = *(uint *)(iVar2 + 0x88) & 0xffffff7f;
        }
        *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb4))) = uVar5;
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc0))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc0))), REFG(float, 0x10a0078));
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) = 0;
        *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) = uVar5;
        *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xbc))) = uVar5;
        uVar6 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe4)));
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa0))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa0)));
        uVar11 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10a0078)));
      }
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xac))) = uVar11;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb0))) = uVar12;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa4))) = uVar6;
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa8))) = uVar5;
      uVar7 = F_00581370((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,uVar5);
      fVar3 = REFG(float, 0x1087f04);
      fVar1 = *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd8)));
      bVar9 = GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x1087f04));
      bVar10 = bVar9 || fVar1 == REFG(float, 0x1087f04);
      uVar7 = CONCAT22((short)(uVar7 >> 0x10),
                       CONCAT11(bVar10 << 6 | bVar9 << 2 | 2U | !(REFG(float, 0x1087f04) <= fVar1),(char)uVar7
                               ));
      if (bVar9 == bVar10) {
        uVar7 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 200)));
        if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb4))) < (int)uVar7) {
          if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x8c))) != 0) {
            *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x8c))) + 0x84))) = 1;
          }
          if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x90))) != 0) {
            *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x90))) + 0x84))) = 0;
          }
          F_00591da0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) GEN_EDX_ARG);
          uVar7 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc)));
          *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 200))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 200)));
          *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4)));
          *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd8))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd8)));
          *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc))) = uVar7;
          *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd0))) = uVar5;
        }
        else {
          *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 200))) = 0;
          *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd0))) = 0;
          *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc))) = 0;
          *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))) = 0;
          *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd8))) = fVar3;
          iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x90)));
          if (iVar2 != 0) {
            *(uint *)(iVar2 + 0x84) = *(uint *)(iVar2 + 0x84) & 0xffefffff;
            *(uint *)(iVar2 + 0x88) = *(uint *)(iVar2 + 0x88) | 0x80;
            return uVar7;
          }
        }
      }
    }
    else {
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa0))) = uVar5;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa8))) = 0;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa4))) = 0;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xac))) = 0;
      *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb0))) = fVar1;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb4))) = 0;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xbc))) = 0;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) = 0;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc0))) = 0;
      *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) = fVar1;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 200))) = 0;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd0))) = 0;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc))) = 0;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))) = 0;
      *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd8))) = fVar1;
      iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x8c)));
      if (iVar2 != 0) {
        *(uint *)(iVar2 + 0x84) = *(uint *)(iVar2 + 0x84) & 0xffefffff;
        *(uint *)(iVar2 + 0x88) = *(uint *)(iVar2 + 0x88) | 0x80;
      }
      uVar7 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x90)));
      if (uVar7 != 0) {
        *(uint *)(uVar7 + 0x84) = *(uint *)(uVar7 + 0x84) & 0xffefffff;
        *(uint *)(uVar7 + 0x88) = *(uint *)(uVar7 + 0x88) | 0x80;
      }
      if (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe4))) != uVar5) {
        *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe4))) = uVar5;
        uVar5 = F_0057eb30(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9c))) GEN_EDX_ARG,uVar5,0,0,0,0);
        return uVar5;
      }
    }
  }
  return uVar7;
}

/* ref: Component::GUI2::AtkComponentSlider::vf16 */
GEN_FRAME unsigned int GEN_THISCALL F_005a0be0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5a0be0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  char * pcVar1;
  uint uVar2;
  int iVar3;
  undefined * pAVar4;
  
  pcVar1 = (*(char * PTR32 *)&gen_args[1]);
  if ((*(char * PTR32 *)&gen_args[1]) != (char *)0x0) {
    if (*(*(char * PTR32 *)&gen_args[1]) != '\0') {
      *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x78))) = *(undefined4 *)(*(char * PTR32 *)&gen_args[1]);
      *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x7c))) = *((undefined4 *)GEN_TOP(((*(char * PTR32 *)&gen_args[1]) + 4)));
      (*(undefined * PTR32 *)&gen_args[0])[0x80] = *((undefined *)GEN_TOP(((*(char * PTR32 *)&gen_args[1]) + 8)));
    }
    uVar2 = F_0055d920((*(undefined * PTR32 *)&gen_args[0]) + 4 GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((*(char * PTR32 *)&gen_args[1]) + 0x18))));
    if ((((uVar2 == 0) || (*(ushort *)(uVar2 + 0x18) < 1000)) ||
        (iVar3 = *(int *)(uVar2 + 0x8c), iVar3 == 0)) ||
       ((((*(byte *)(iVar3 + 0x60) & 1) == 0 || ((*(byte *)(iVar3 + 0x60) & 4) == 0)) ||
        ((*(char *)(iVar3 + 0x1c) != '\x01' || (*((char *)GEN_TOP((*(int *)(iVar3 + 0xc) + 0xf))) != '\x01'))))
       )) {
      iVar3 = 0;
    }
    *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x8c))) = iVar3;
    uVar2 = F_0055d920((*(undefined * PTR32 *)&gen_args[0]) + 4 GEN_EDX_ARG,*(undefined4 *)(pcVar1 + 0xc));
    *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x88))) = uVar2;
    uVar2 = F_0055d920((*(undefined * PTR32 *)&gen_args[0]) + 4 GEN_EDX_ARG,*(undefined4 *)(pcVar1 + 0x10));
    if ((((uVar2 == 0) || (*(ushort *)(uVar2 + 0x18) < 1000)) ||
        ((iVar3 = *(int *)(uVar2 + 0x8c), iVar3 == 0 ||
         ((((*(byte *)(iVar3 + 0x60) & 1) == 0 || ((*(byte *)(iVar3 + 0x60) & 4) == 0)) ||
          (*(char *)(iVar3 + 0x1c) != '\x01')))))) ||
       (*((char *)GEN_TOP((*(int *)(iVar3 + 0xc) + 0xf))) != '\x01')) {
      iVar3 = 0;
    }
    *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x90))) = iVar3;
    uVar2 = F_0055d920((*(undefined * PTR32 *)&gen_args[0]) + 4 GEN_EDX_ARG,*(undefined4 *)(pcVar1 + 0x14));
    *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x94))) = uVar2;
    pAVar4 = (*(undefined * PTR32 *)&gen_args[0]) + 0x9c;
    (*(undefined * PTR32 *)&gen_args[0])[0xae] = (undefined1)
                 ((byte)(*(undefined * PTR32 *)&gen_args[0])[0xae] ^ ((pcVar1[0x30] != '\0') << 4 ^ (byte)(*(undefined * PTR32 *)&gen_args[0])[0xae]) & 0x10);
    if (*(int *)(pcVar1 + 0x1c) <= *(int *)pAVar4) {
      *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x98))) = *(int *)(pcVar1 + 0x1c);
    }
    iVar3 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x98)));
    if (iVar3 <= *(int *)(pcVar1 + 0x20)) {
      *(int *)pAVar4 = *(int *)(pcVar1 + 0x20);
    }
    if (0 < *(int *)(pcVar1 + 0x24)) {
      *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xa4))) = *(int *)(pcVar1 + 0x24);
    }
    if (-1 < *(short *)(pcVar1 + 0x28)) {
      *((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xa8))) = *(short *)(pcVar1 + 0x28);
    }
    if (-1 < *(short *)(pcVar1 + 0x2c)) {
      *((short *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xaa))) = *(short *)(pcVar1 + 0x2c);
    }
    (*(char * PTR32 *)&gen_args[1]) = (char *)iVar3;
    if (iVar3 < *(int *)pAVar4) {
      pAVar4 = (undefined *)&(*(char * PTR32 *)&gen_args[1]);
    }
    if (*(int *)pAVar4 <= *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x98)))) {
      pAVar4 = (*(undefined * PTR32 *)&gen_args[0]) + 0x98;
    }
    *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xa0))) = *(int *)pAVar4;
  }
  return;
}

/* ref: Component::GUI2::AtkComponentSlider::vf10 */
GEN_FRAME unsigned int GEN_THISCALL F_005a0d60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5a0d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  undefined * this_00;
  
  if (this != (undefined *)0x0) {
    iVar1 = *(int *)(this + 0x70);
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x84) =
           *(uint *)(iVar1 + 0x84) ^ ((param_1 & 0xff) << 0x15 ^ *(uint *)(iVar1 + 0x84)) & 0x200000
      ;
    }
    iVar1 = *(int *)(this + 0x70);
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x84) =
           *(uint *)(iVar1 + 0x84) ^ (param_1 << 0x19 ^ *(uint *)(iVar1 + 0x84)) & 0x2000000;
    }
  }
  if (*(int *)(this + 0x8c) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x8c) + 0x28))))(*(int * PTR32 *)(this + 0x8c) GEN_EDX_FWD,param_1);
  }
  if (*(int *)(this + 0x90) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x90) + 0x28))))(*(int * PTR32 *)(this + 0x90) GEN_EDX_ARG,param_1);
  }
  if ((*(int *)(this + 0x6c) != 0) &&
     (this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x6c) + 0x1c))), this_00 != (undefined *)0x0)) {
    F_0059ba30(this_00 GEN_EDX_ARG,2,(-(uint)((param_1 & 0xff) != 0) & 10) + 7,0,0);
  }
  return;
}

/* ref: FUN_005a0e10 */
GEN_FRAME byte GEN_THISCALL F_005a0e10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5a0e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  undefined * this_00;
  
  (*(undefined2 *)(gen_frame + 0xc)) = 0x16;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  this_00 = (undefined *)0x0;
  (*(undefined2 *)(gen_frame + 0xe)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = *param_1;
  (*(undefined4 *)(gen_frame + 0x18)) = param_1[1];
  if (this != (undefined *)0x0) {
    this_00 = *(undefined * PTR32 *)((int)this + 0x70);
  }
  uVar2 = F_005997b0(this_00 GEN_EDX_FWD,&(*(undefined2 *)(gen_frame + 0xc)));
  iVar1 = *(int *)((int)this + 0x6c);
  if (*(char *)((int)this + 0x88) == '\0') {
    if ((iVar1 != 0) && (*(undefined * PTR32 *)(iVar1 + 0x1c) != (undefined *)0x0)) {
      F_0059ba30(*(undefined * PTR32 *)(iVar1 + 0x1c) GEN_EDX_ARG,2,3,0,0);
    }
  }
  else if ((iVar1 != 0) && (*(undefined * PTR32 *)(iVar1 + 0x1c) != (undefined *)0x0)) {
    F_0059ba30(*(undefined * PTR32 *)(iVar1 + 0x1c) GEN_EDX_ARG,2,10,0,0);
    return uVar2 != 0;
  }
  return uVar2 != 0;
}

/* ref: FUN_005a0eb0 */
GEN_FRAME byte GEN_THISCALL F_005a0eb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5a0eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 uVar3;
  
  if (*(char *)((int)this + 0x84) != '\0') {
    iVar1 = *(int *)((int)this + 0x6c);
    if (*(char *)((int)this + 0x88) == '\0') {
      *(undefined1 *)((int)this + 0x88) = 1;
      if ((iVar1 == 0) || (this_00 = *(undefined * PTR32 *)(iVar1 + 0x1c), this_00 == (undefined *)0x0))
      goto LAB_005a0f09;
      uVar3 = 8;
    }
    else {
      *(undefined1 *)((int)this + 0x88) = 0;
      if ((iVar1 == 0) || (this_00 = *(undefined * PTR32 *)(iVar1 + 0x1c), this_00 == (undefined *)0x0))
      goto LAB_005a0f09;
      uVar3 = 1;
    }
    F_0059ba30(this_00 GEN_EDX_FWD,2,uVar3,0,0);
  }
LAB_005a0f09: ;
  (*(undefined2 *)(gen_frame + 0xc)) = 0x17;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = *param_1;
  (*(undefined2 *)(gen_frame + 0xe)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = param_1[1];
  uVar2 = F_005997b0(*(undefined * PTR32 *)((int)this + 0x70) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0xc)));
  return uVar2 != 0;
}

/* ref: Component::GUI2::AtkComponentCheckBox::vf2 */
GEN_FRAME uint GEN_THISCALL F_005a0f60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5a0f60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  
  uVar3 = (param_1 & 0xffff) - 3;
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 0: ;
    if (this != (undefined *)0x0) {
      uVar3 = 0;
      if ((*(int *)(this + 0x70) != 0) &&
         (uVar3 = *((uint *)GEN_TOP((*(int *)(this + 0x70) + 0x84))) >> 0x15 & 1, (char)uVar3 != '\0')) {
        uVar3 = (uint)*(byte *)((int)param_4 + 6);
        if (this[uVar3 + 0x8d] != (undefined1)0x0) {
          this[uVar3 + 0x90] = (undefined1)0x1;
          bVar2 = F_005a0e10(this GEN_EDX_FWD,param_4);
          uVar3 = CONCAT31(extraout_var_00,bVar2);
          if (bVar2 != 0) {
            *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x10000;
            this[0x8c] = (undefined1)0x0;
            return param_3;
          }
        }
LAB_005a128a: ;
        this[0x8c] = (undefined1)0x0;
      }
    }
    break;
  case 1: ;
    if (this != (undefined *)0x0) {
      uVar3 = 0;
      if ((*(int *)(this + 0x70) != 0) &&
         (uVar3 = *((uint *)GEN_TOP((*(int *)(this + 0x70) + 0x84))) >> 0x15 & 1, (char)uVar3 != '\0')) {
        uVar3 = (uint)*(byte *)((int)param_4 + 6);
        if ((this[uVar3 + 0x8d] != (undefined1)0x0) &&
           (this[uVar3 + 0x90] != (undefined1)0x0)) {
          if (this[0x88] == (undefined1)0x0) {
            uVar3 = F_005d3ea0(this GEN_EDX_ARG,1);
            this[0x8c] = (undefined1)0x0;
            return uVar3;
          }
          uVar3 = F_005d3ea0(this GEN_EDX_ARG,8);
          this[0x8c] = (undefined1)0x0;
          return uVar3;
        }
        goto LAB_005a128a;
      }
    }
    break;
  case 2: ;
  case 5: ;
  case 7: ;
  case 8: ;
    break;
  case 3: ;
    if (((this != (undefined *)0x0) &&
        (pvVar1 = *(undefined * PTR32 *)(this + 0x70), pvVar1 != (undefined *)0x0)) &&
       (uVar3 = *(uint *)((int)pvVar1 + 0x84) >> 0x15 & 1, (char)uVar3 != '\0')) {
      (*(undefined2 *)(gen_frame + 0xc)) = 6;
      (*(int *)(gen_frame + 0x14)) = 0;
      (*(int *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined2 *)(gen_frame + 0xe)) = 0;
      (*(int *)(gen_frame + 0x14)) = *param_4;
      (*(int *)(gen_frame + 0x18)) = param_4[1];
      uVar3 = F_005997b0(pvVar1 GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0xc)));
      if (uVar3 != 0) {
        *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x10000;
      }
      if (this[0x88] == (undefined1)0x0) {
        uVar3 = F_005d3ea0(this GEN_EDX_ARG,2);
        this[0x8c] = (undefined1)0x0;
        return uVar3;
      }
      uVar3 = F_005d3ea0(this GEN_EDX_ARG,9);
      this[0x8c] = (undefined1)0x0;
      return uVar3;
    }
    break;
  case 4: ;
    pvVar1 = *(undefined * PTR32 *)(this + 0x70);
    *(undefined2 *)(this + 0x90) = 0;
    this[0x92] = (undefined1)0x0;
    if ((pvVar1 != (undefined *)0x0) &&
       (uVar3 = *(uint *)((int)pvVar1 + 0x84) >> 0x15 & 1, (char)uVar3 != '\0')) {
      (*(undefined2 *)(gen_frame + 0xc)) = 7;
      (*(int *)(gen_frame + 0x14)) = 0;
      (*(int *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined2 *)(gen_frame + 0xe)) = 0;
      (*(int *)(gen_frame + 0x14)) = *param_4;
      (*(int *)(gen_frame + 0x18)) = param_4[1];
      uVar3 = F_005997b0(pvVar1 GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0xc)));
      if (uVar3 != 0) {
        *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x10000;
      }
      if (this[0x88] == (undefined1)0x0) {
        uVar3 = F_005d3ea0(this GEN_EDX_ARG,4);
        this[0x8c] = (undefined1)0x0;
        return uVar3;
      }
      uVar3 = F_005d3ea0(this GEN_EDX_ARG,0xb);
      this[0x8c] = (undefined1)0x0;
      return uVar3;
    }
    break;
  case 6: ;
    if (this != (undefined *)0x0) {
      uVar3 = 0;
      if ((*(int *)(this + 0x70) != 0) &&
         (uVar3 = *((uint *)GEN_TOP((*(int *)(this + 0x70) + 0x84))) >> 0x15 & 1, (char)uVar3 != '\0')) {
        uVar3 = (uint)*(byte *)((int)param_4 + 6);
        if ((this[uVar3 + 0x8d] != (undefined1)0x0) &&
           (this[uVar3 + 0x90] != (undefined1)0x0)) {
          bVar2 = F_005a0eb0(this GEN_EDX_ARG,param_4);
          uVar3 = CONCAT31(extraout_var,bVar2);
          if (bVar2 != 0) {
            ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x34))(this GEN_EDX_ARG);
            *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x210000;
            uVar3 = param_3;
          }
        }
        this[*(byte *)((int)param_4 + 6) + 0x90] = (undefined1)0x0;
        this[0x8c] = (undefined1)0x0;
        return uVar3;
      }
    }
    break;
  case 9: ;
    if (this != (undefined *)0x0) {
      uVar3 = 0;
      if ((*(int *)(this + 0x70) != 0) &&
         (uVar3 = *((uint *)GEN_TOP((*(int *)(this + 0x70) + 0x84))) >> 0x15 & 1, (char)uVar3 != '\0')) {
        if ((*param_4 == 1) && ((char)param_4[1] == '\0')) {
          bVar2 = F_005a0eb0(this GEN_EDX_ARG,(int)param_4 + 6);
          uVar3 = CONCAT31(extraout_var_01,bVar2);
          if (bVar2 != 0) {
            ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x34))(this GEN_EDX_ARG);
            *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x210000;
            uVar3 = param_3;
          }
        }
        if ((char)param_4[1] == '\x01') goto LAB_005a128a;
      }
    }
    break;
  default: ;
    goto switchD_005a0f7b_default;
  }
switchD_005a0f7b_default: ;
  return uVar3;
}

/* ref: Component::GUI2::AtkComponentRadioButton::vf2 */
GEN_FRAME uint GEN_THISCALL F_005a12d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5a12d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  uVar1 = param_1 & 0xffff;
  if (uVar1 - 3 < 10) {
    piVar2 = (int *)(uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x5a1468) + uVar1 + 1)));
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 3: ;
      if (((this != (undefined *)0x0) &&
          (this_00 = *(undefined * PTR32 *)(this + 0x70), this_00 != (undefined *)0x0)) &&
         (piVar2 = (int *)0x0, (*(uint *)((int)this_00 + 0x84) >> 0x15 & 1) != 0)) {
        uVar1 = (uint)*(byte *)((int)param_4 + 6);
        if (this[uVar1 + 0x8d] != (undefined1)0x0) {
          (*(undefined2 *)(gen_frame + 0xc)) = 0x16;
          (*(int *)(gen_frame + 0x14)) = 0;
          (*(int *)(gen_frame + 0x18)) = 0;
          (*(undefined4 *)(gen_frame + 0x1c)) = 0;
          (*(undefined4 *)(gen_frame + 0x20)) = 0;
          (*(undefined4 *)(gen_frame + 0x24)) = 0;
          (*(undefined4 *)(gen_frame + 0x28)) = 0;
          (*(undefined2 *)(gen_frame + 0xe)) = 0;
          (*(int *)(gen_frame + 0x14)) = *param_4;
          (*(int *)(gen_frame + 0x18)) = param_4[1];
          uVar3 = F_005997b0(this_00 GEN_EDX_FWD,&(*(undefined2 *)(gen_frame + 0xc)));
          uVar1 = 0;
          if (uVar3 != 0) {
            *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x10000;
            uVar1 = param_3;
          }
        }
        this[0x8c] = (undefined1)0x0;
        return uVar1;
      }
      break;
    case 4: ;
      if (((this != (undefined *)0x0) &&
          (piVar2 = (int *)0x0, *(int *)(this + 0x70) != 0)) &&
         (uVar1 = *((uint *)GEN_TOP((*(int *)(this + 0x70) + 0x84))) >> 0x15 & 1, piVar2 = (int *)0x0,
         uVar1 != 0)) {
        this[0x8c] = (undefined1)0x0;
        return uVar1;
      }
      break;
    default: ;
      goto switchD_005a12f2_caseD_5;
    case 9: ;
      if (((this != (undefined *)0x0) &&
          (piVar2 = (int *)0x0, *(int *)(this + 0x70) != 0)) &&
         (piVar2 = (int *)0x0, (*((uint *)GEN_TOP((*(int *)(this + 0x70) + 0x84))) >> 0x15 & 1) != 0)) {
        piVar2 = param_4;
        if (this[*(byte *)((int)param_4 + 6) + 0x8d] != (undefined1)0x0) {
          piVar2 = (int *)F_0059e680(this GEN_EDX_ARG,param_3,param_4);
        }
        this[0x8c] = (undefined1)0x0;
        return (uint)piVar2;
      }
      break;
    case 0xc: ;
      if ((((this != (undefined *)0x0) &&
           (piVar2 = (int *)0x0, *(int *)(this + 0x70) != 0)) &&
          (piVar2 = (int *)0x0, (*((uint *)GEN_TOP((*(int *)(this + 0x70) + 0x84))) >> 0x15 & 1) != 0)) &&
         ((piVar2 = param_4, *param_4 == 1 && ((char)param_4[1] == '\0')))) {
        uVar1 = F_0059e680(this GEN_EDX_ARG,param_3,(int)param_4 + 6);
        return uVar1;
      }
    }
  }
  else {
switchD_005a12f2_caseD_5: ;
    piVar2 = (int *)F_0059df10((undefined *)this GEN_EDX_ARG,param_1,param_2,param_3,param_4);
  }
  return (uint)piVar2;
}

/* ref: Component::GUI2::AtkComponentList::vf27 */
GEN_FRAME unsigned int GEN_THISCALL F_005a1480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5a1480u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  undefined * this_00;
  
  if ((-1 < (*(int *)&gen_a1)) && ((*(int *)&gen_a1) < *(int *)(this + 0xac))) {
    iVar1 = *(int *)(this + 0x98);
    (*(undefined1 *)(gen_frame + 0x8)) = *(undefined1 *)(iVar1 + 4 + (*(int *)&gen_a1) * 8);
    (*(bool *)(gen_frame + 0x9)) = *(int *)(this + 200) == (*(int *)&gen_a1);
    iVar2 = *(int *)(this + 0x98);
    (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(this + 0xa8);
    (*(undefined1 *)(gen_frame + 0xa)) = *(undefined1 *)(iVar2 + 5 + (*(int *)&gen_a1) * 8);
    F_0059f4d0(*(undefined * PTR32 *)(iVar1 + (*(int *)&gen_a1) * 8) GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x4)),(*(int *)&gen_a1),param_3);
    if (((char)param_2 != '\0') &&
       ((iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x98) + (*(int *)&gen_a1) * 8))) + 0x6c))), iVar1 != 0 &&
        (this_00 = *(undefined * PTR32 *)(iVar1 + 0x1c), this_00 != (undefined *)0x0)))) {
      *(ushort *)((int)this_00 + 0x22) = *(ushort *)((int)this_00 + 0x22) & 0x7fff;
      F_00573430(this_00 GEN_EDX_ARG,*(undefined4 *)((int)this_00 + 0x18));
    }
  }
  return;
}

/* ref: Component::GUI2::AtkComponentList::vf29 */
GEN_FRAME uint GEN_THISCALL F_005a1520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5a1520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(this + 0xcc);
  if (uVar1 == param_1) {
    return uVar1;
  }
  if (uVar1 == 0xffffffff) {
    uVar1 = 0;
    if (*(int *)(this + 0x6c) == 0) goto LAB_005a1583;
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x6c) + 0x1c)));
    uVar1 = 0;
    if (this_00 == (undefined *)0x0) goto LAB_005a1583;
    uVar3 = 0x11;
  }
  else {
    if (param_1 != 0xffffffff) goto LAB_005a1583;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x7c))(this GEN_EDX_FWD);
    uVar1 = 0;
    if (uVar2 == 0) goto LAB_005a1583;
    uVar1 = 0;
    if (*(int *)(this + 0x6c) == 0) goto LAB_005a1583;
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x6c) + 0x1c)));
    uVar1 = 0;
    if (this_00 == (undefined *)0x0) goto LAB_005a1583;
    uVar3 = 0x12;
  }
  uVar1 = F_0059ba30(this_00 GEN_EDX_ARG,2,uVar3,0,0);
LAB_005a1583: ;
  *(uint *)(this + 0xcc) = param_1;
  if ((char)param_2 != '\0') {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x50))(this GEN_EDX_ARG,param_1);
    uVar1 = 0;
    if (uVar2 != 0) {
      (*(undefined2 *)(gen_frame + 0xc)) = 0x24;
      (*(uint *)(gen_frame + 0x14)) = 0;
      (*(uint *)(gen_frame + 0x14)) = uVar2;
      (*(uint *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined2 *)(gen_frame + 0xe)) = 0;
      (*(uint *)(gen_frame + 0x1c)) = param_1;
      uVar1 = F_005997b0(*(undefined * PTR32 *)(this + 0x70) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0xc)));
    }
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentTreeList::vf29 */
GEN_FRAME uint GEN_THISCALL F_005a15e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5a15e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  
  if (*(int *)(this + 0xcc) == param_1) goto LAB_005a1642;
  if (*(int *)(this + 0xcc) == -1) {
    if ((*(int *)(this + 0x6c) != 0) &&
       (this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x6c) + 0x1c))), this_00 != (undefined *)0x0)) {
      uVar2 = 0x11;
LAB_005a1633: ;
      F_0059ba30(this_00 GEN_EDX_FWD,2,uVar2,0,0);
    }
  }
  else if (param_1 == -1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x7c))(this GEN_EDX_ARG);
    if (((uVar1 != 0) && (*(int *)(this + 0x6c) != 0)) &&
       (this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x6c) + 0x1c))), this_00 != (undefined *)0x0)) {
      uVar2 = 0x12;
      goto LAB_005a1633;
    }
  }
  *(int *)(this + 0xcc) = param_1;
LAB_005a1642: ;
  uVar1 = *(uint *)(this + 0xcc);
  if (-1 < (int)uVar1) {
    uVar1 = F_0057c1a0(this GEN_EDX_ARG,uVar1);
  }
  *(uint *)(this + 0x14c) = uVar1;
  return uVar1;
}

/* ref: FUN_005a1660 */
GEN_FRAME unsigned int GEN_THISCALL F_005a1660(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5a1660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(char *)((int)this + 0x90) != '\0') {
    F_0059caa0(this GEN_EDX_FWD,*(undefined4 *)((int)this + 0x8c));
    *(undefined2 *)((int)this + 0x90) = 0x100;
    uVar2 = F_005615f0(*(undefined * PTR32 *)((int)this + 0x88) GEN_EDX_ARG);
    iVar1 = REFG(int, 0x1379860);
    if ((char)uVar2 != '\0') {
      uVar2 = *((uint *)GEN_TOP((*(int *)(REFG(int, 0x1379860) + 0x14) + 0xcc)));
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x84) + 0x38))))(*(int * PTR32 *)((int)this + 0x84) GEN_EDX_ARG);
      if ((uVar3 != 0) && (uVar2 == 0)) {
        uVar2 = F_0057f8d0(*(undefined * PTR32 *)(iVar1 + 0x14) GEN_EDX_ARG,uVar3);
      }
      F_0059b1c0(*(undefined * PTR32 *)(iVar1 + 0x18) GEN_EDX_ARG,uVar3,uVar2,0);
    }
  }
  return;
}

/* ref: Component::GUI2::AtkComponentWindow::vf22 */
GEN_FRAME uint GEN_THISCALL F_005a16e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5a16e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),this[0xbc]) & 0xffffff01;
  if (((char)uVar1 == '\x01') != (bool)(char)param_1) {
    uVar1 = *(uint *)(this + 0x6c);
    if ((uVar1 != 0) && (*(undefined * PTR32 *)(uVar1 + 0x1c) != (undefined *)0x0)) {
      uVar1 = F_0059ba30(*(undefined * PTR32 *)(uVar1 + 0x1c) GEN_EDX_FWD,2,((char)param_1 != '\0') + 0x11,0,0);
    }
    if ((char)param_1 != '\0') {
      this[0xbc] = (undefined1)((byte)this[0xbc] | 1);
      return uVar1;
    }
    this[0xbc] = (undefined1)((byte)this[0xbc] & 0xfe);
  }
  return uVar1;
}

/* ref: FUN_005a1740 */
GEN_FRAME uint GEN_THISCALL F_005a1740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5a1740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a2;
  byte bVar1;
  uint in_EAX = 0;
  uint uVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  uint uVar5;
  
  if ((char)param_2[3] == '\0') {
    F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c) GEN_EDX_FWD,4,0,this,0);
    uVar2 = (uint)param_2[1];
    uVar4 = (uint)*param_2;
    uVar5 = 0;
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x84) + 0x14))))((int)this + 0x84);
    bVar1 = F_00570d10(uVar3 GEN_EDX_ARG,uVar4,uVar2,uVar5);
    in_EAX = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      F_0059fd80(this GEN_EDX_ARG,6);
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x84) + 0x1c))))((int)this + 0x84,param_2);
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x10000;
      in_EAX = param_1;
    }
  }
  return in_EAX;
}

/* ref: FUN_005a17c0 */
GEN_FRAME uint GEN_THISCALL F_005a17c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5a17c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  if ((*(undefined * PTR32 *)((int)this + 4) != param_1) &&
     (*(undefined * PTR32 *)((int)this + 4) = param_1, param_1 != (undefined *)0x0)) {
    uVar1 = F_005bd980(param_1 GEN_EDX_FWD,0xf);
    F_005ccc40(this GEN_EDX_ARG,uVar1);
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x38))(this GEN_EDX_ARG);
  }
  uVar1 = 0;
  if ((*(int *)((int)this - 0x18) != 0) &&
     (this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this - 0x18) + 0x1c))), uVar1 = 0, this_00 != (undefined *)0x0))
  {
    uVar1 = F_0059ba30(this_00 GEN_EDX_ARG,2,1,0,0);
  }
  if (((*(int *)((int)this + 0x20) != 0) &&
      (uVar1 = *((uint *)GEN_TOP((*(int *)((int)this + 0x20) + 0x9c))), uVar1 != 0)) &&
     (*(undefined * PTR32 *)(uVar1 + 0x1c) != (undefined *)0x0)) {
    uVar1 = F_0059ba30(*(undefined * PTR32 *)(uVar1 + 0x1c) GEN_EDX_ARG,2,1,0,0);
  }
  return uVar1;
}

/* ref: FUN_005a1840 */
GEN_FRAME uint GEN_THISCALL F_005a1840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5a1840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  
  *(bool *)((int)this + 0x1f8) = param_1 == 0;
  uVar2 = param_1;
  if (param_1 == 0) {
    *(undefined1 *)((int)this + 0x1f8) = 1;
    if ((*(int *)((int)this + 0x6c) != 0) &&
       (pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x6c) + 0x1c))), pvVar1 != (undefined *)0x0)) {
      uVar2 = F_0059ba30(pvVar1 GEN_EDX_FWD,2,0x11,0,0);
      return uVar2;
    }
  }
  else {
    *(undefined1 *)((int)this + 0x1f8) = 0;
    if ((*(int *)((int)this + 0x6c) != 0) &&
       (pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x6c) + 0x1c))), pvVar1 != (undefined *)0x0)) {
      uVar2 = F_0059ba30(pvVar1 GEN_EDX_ARG,2,7,0,0);
    }
  }
  return uVar2;
}

/* ref: FUN_005a18a0 */
GEN_FRAME uint GEN_THISCALL F_005a18a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5a18a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  undefined * this_00;
  undefined4 in_EAX = 0;
  uint uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  bVar4 = (char)param_3[1] == '\0';
  bVar5 = (char)param_3[1] == '\x02';
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),bVar5);
  ((byte *)(gen_frame + 0x4))[0x20] = bVar4;
  ((byte *)(gen_frame + 0x4))[0x24] = bVar5;
  if ((!bVar4) && (!bVar5)) {
    return uVar2;
  }
  if (*(char *)((int)this + 0x84) == '\0') {
    if (((*param_3 == 1) && (*(int *)((int)this + 0x70) != 0)) &&
       ((*((uint *)GEN_TOP((*(int *)((int)this + 0x70) + 0x84))) >> 0x15 & 1) != 0)) {
      if (*(int *)((int)this + 0x8c) != 0) {
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x8c) + 0x90))) = REFG(undefined4, 0x131de64);
      }
      *(undefined1 *)((int)this + 0x186) = 1;
      *(undefined4 *)((int)this + 0x17c) = *(undefined4 *)((int)this + 0x178);
      *(undefined4 *)((int)this + 0x18c) = 1;
      F_0058b640(this GEN_EDX_FWD);
      iVar1 = REFG(int, 0x1379860);
      uVar2 = F_005826a0(this GEN_EDX_ARG);
      iVar3 = *(int *)((int)this + 0x98);
      if ((iVar3 != 0) && (uVar2 == 0)) {
        uVar2 = F_0057f8d0(*(undefined * PTR32 *)(iVar1 + 0x14) GEN_EDX_ARG,iVar3);
      }
      F_0059b1c0(*(undefined * PTR32 *)(iVar1 + 0x18) GEN_EDX_ARG,iVar3,uVar2,0);
      *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x10000;
    }
  }
  else {
    if ((*param_3 == 2) || (*param_3 == 3)) {
      iVar3 = *(int *)((int)this + 0x17c);
      if (*(int *)((int)this + 0x17c) < *(int *)((int)this + 0x268)) {
        iVar3 = *(int *)((int)this + 0x268);
      }
      if (*(int *)((int)this + 0x26c) < iVar3) {
        iVar3 = *(int *)((int)this + 0x26c);
      }
      iVar1 = *(int *)((int)this + 0x178);
      if (iVar3 != iVar1) {
        ((byte *)(gen_frame + 0x4))[0] = 0x19;
        ((byte *)(gen_frame + 0x4))[1] = 0;
        ((byte *)(gen_frame + 0x4))[0xc] = 0;
        ((byte *)(gen_frame + 0x4))[0xd] = 0;
        ((byte *)(gen_frame + 0x4))[0xe] = 0;
        ((byte *)(gen_frame + 0x4))[0xf] = 0;
        ((byte *)(gen_frame + 0x4))[0xc] = (char)iVar1;
        ((byte *)(gen_frame + 0x4))[0xd] = (char)((uint)iVar1 >> 8);
        ((byte *)(gen_frame + 0x4))[0xe] = (char)((uint)iVar1 >> 0x10);
        ((byte *)(gen_frame + 0x4))[0xf] = (char)((uint)iVar1 >> 0x18);
        ((byte *)(gen_frame + 0x4))[8] = 0;
        ((byte *)(gen_frame + 0x4))[9] = 0;
        ((byte *)(gen_frame + 0x4))[10] = 0;
        ((byte *)(gen_frame + 0x4))[0xb] = 0;
        *(int *)((int)this + 0x178) = iVar3;
        ((byte *)(gen_frame + 0x4))[8] = (char)iVar3;
        ((byte *)(gen_frame + 0x4))[9] = (char)((uint)iVar3 >> 8);
        ((byte *)(gen_frame + 0x4))[10] = (char)((uint)iVar3 >> 0x10);
        ((byte *)(gen_frame + 0x4))[0xb] = (char)((uint)iVar3 >> 0x18);
        ((byte *)(gen_frame + 0x4))[0x10] = 0;
        ((byte *)(gen_frame + 0x4))[0x11] = 0;
        ((byte *)(gen_frame + 0x4))[0x12] = 0;
        ((byte *)(gen_frame + 0x4))[0x13] = 0;
        ((byte *)(gen_frame + 0x4))[0x14] = 0;
        ((byte *)(gen_frame + 0x4))[0x15] = 0;
        ((byte *)(gen_frame + 0x4))[0x16] = 0;
        ((byte *)(gen_frame + 0x4))[0x17] = 0;
        ((byte *)(gen_frame + 0x4))[0x18] = 0;
        ((byte *)(gen_frame + 0x4))[0x19] = 0;
        ((byte *)(gen_frame + 0x4))[0x1a] = 0;
        ((byte *)(gen_frame + 0x4))[0x1b] = 0;
        ((byte *)(gen_frame + 0x4))[0x1c] = 0;
        ((byte *)(gen_frame + 0x4))[0x1d] = 0;
        ((byte *)(gen_frame + 0x4))[0x1e] = 0;
        ((byte *)(gen_frame + 0x4))[0x1f] = 0;
        ((byte *)(gen_frame + 0x4))[2] = 0;
        ((byte *)(gen_frame + 0x4))[3] = 0;
        F_005997b0(*(undefined * PTR32 *)((int)this + 0x70) GEN_EDX_ARG,((byte *)(gen_frame + 0x4)));
        F_0057eb30(*(undefined * PTR32 *)((int)this + 0x8c) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x178),
                     (uint)*(byte *)((int)this + 0x278),0,(uint)*(byte *)((int)this + 0x180),0);
        uVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 36)) & 0xff;
      }
    }
    if (((((char)uVar2 == '\0') && (*param_3 == 1)) || (*param_3 == 2)) || (*param_3 == 3)) {
      *(undefined1 *)((int)this + 0x84) = 0;
      *((undefined4 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1379860) + 0x18) + 4))) = 0;
      F_0058b640(this GEN_EDX_ARG);
      if (*(int *)((int)this + 0x8c) != 0) {
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x8c) + 0x90))) = *(undefined4 *)((int)this + 0x188);
      }
      if (*(char *)((int)this + 0x187) == '\0') {
        if (*param_3 == 1) {
          F_0059d190(this GEN_EDX_ARG);
        }
        else {
          F_0059d110(this GEN_EDX_ARG);
        }
      }
      else {
        *(undefined1 *)((int)this + 0x187) = 0;
      }
      *(undefined1 *)((int)this + 0x186) = 0;
      *(undefined4 *)((int)this + 0x18c) = 1;
      if ((*(int *)((int)this + 0x6c) != 0) &&
         (this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x6c) + 0x1c))), this_00 != (undefined *)0x0)) {
        F_0059ba30(this_00 GEN_EDX_ARG,2,0x11,0,0);
      }
      *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x10000;
    }
  }
  uVar2 = *(uint *)(param_2 + 0x14);
  if ((uVar2 >> 0x10 & 1) != 0) {
    return uVar2;
  }
  if (*(char *)((int)this + 0x84) == '\0') {
    if ((*(int *)((int)this + 0x70) == 0) ||
       ((*((uint *)GEN_TOP((*(int *)((int)this + 0x70) + 0x84))) >> 0x15 & 1) == 0)) goto LAB_005a1cd3;
    if (*param_3 == 0xf) {
      uVar2 = F_00563c00(this GEN_EDX_ARG,1,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 32)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 36)));
    }
    else {
      if (*param_3 != 0x10) goto LAB_005a1cd3;
      uVar2 = F_00563bb0(this GEN_EDX_ARG,1,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 32)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 36)));
    }
    F_0059d240(this GEN_EDX_ARG,uVar2);
  }
  else {
    switch((unsigned int)(uintptr_t)(*param_3)) {
    case 7: ;
      iVar3 = *(int *)((int)this + 0x18c) * 10;
      *(int *)((int)this + 0x18c) = iVar3;
      if (*(int *)((int)this + 0x26c) < iVar3) {
        *(int *)((int)this + 0x18c) = iVar3 / 10;
        F_0059cf90(this GEN_EDX_ARG,*(int *)((int)this + 0x26c),1,1);
      }
      *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x10000;
      uVar2 = F_0058b640(this GEN_EDX_ARG);
      return uVar2;
    case 8: ;
      iVar3 = *(int *)((int)this + 0x18c) / 10;
      *(int *)((int)this + 0x18c) = iVar3;
      if (iVar3 < 1) {
        *(undefined4 *)((int)this + 0x18c) = 1;
        F_0059cf90(this GEN_EDX_ARG,*(undefined4 *)((int)this + 0x268),1,1);
        *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x10000;
        uVar2 = F_0058b640(this GEN_EDX_ARG);
        return uVar2;
      }
      break;
    case 9: ;
      uVar7 = 1;
      uVar6 = 1;
      uVar2 = F_00563bb0(this GEN_EDX_ARG,*(undefined4 *)((int)this + 0x18c),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 32)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 36)));
      F_0059cf90(this GEN_EDX_ARG,uVar2,uVar6,uVar7);
      *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x10000;
      uVar2 = F_0058b640(this GEN_EDX_ARG);
      return uVar2;
    case 10: ;
      uVar7 = 1;
      uVar6 = 1;
      uVar2 = F_00563c00(this GEN_EDX_ARG,*(undefined4 *)((int)this + 0x18c),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 32)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 36)));
      F_0059cf90(this GEN_EDX_ARG,uVar2,uVar6,uVar7);
      *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x10000;
      uVar2 = F_0058b640(this GEN_EDX_ARG);
      return uVar2;
    default: ;
      if (*(char *)((int)this + 0x186) != '\0') {
        *(uint *)(param_2 + 0x14) = uVar2 | 0x10000;
        uVar2 = F_0058b640(this GEN_EDX_ARG);
        return uVar2;
      }
      goto LAB_005a1cd3;
    case 0x23: ;
      F_0059cf90(this GEN_EDX_ARG,*(undefined4 *)((int)this + 0x26c),1,1);
      *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x10000;
      uVar2 = F_0058b640(this GEN_EDX_ARG);
      return uVar2;
    case 0x24: ;
      F_0059cf90(this GEN_EDX_ARG,*(undefined4 *)((int)this + 0x268),1,1);
      *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x10000;
      uVar2 = F_0058b640(this GEN_EDX_ARG);
      return uVar2;
    }
  }
  *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x10000;
LAB_005a1cd3: ;
  uVar2 = F_0058b640(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_005a1d20 */
GEN_FRAME uint GEN_THISCALL F_005a1d20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5a1d20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x22238);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10a1c3c));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[3])REFP(0x10a1c2c));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[8])REFP(0x10a1c08));
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_FWD,1);
    *(undefined4 *)((int)this + 0x22238) = 0;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x2223c) + 0xc))))((int)this + 0x2223c);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xb8);
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
    *(undefined4 *)((int)this + 0xb8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x22bec) =
       (*(undefined * PTR32 (*)[8])REFP(0x10a09fc));
  F_0042c880((undefined *)((int)this + 0x22b94) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x22b40) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x22aec) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x22a98) GEN_EDX_ARG);
  F_0055bcb0((undefined *)((int)this + 0x2224c) GEN_EDX_ARG);
  F_0049e6e0((undefined *)((int)this + 0x2223c) GEN_EDX_ARG);
  F_005c9de0((undefined *)((int)this + 0x22228) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x2222c),
               *(undefined4 * PTR32 *)((int)this + 0x2222c));
  F_00429760(*(undefined4 *)((int)this + 0x2222c),0x1c,400);
  iVar2 = *(int *)((int)this + 0x22214);
  if (iVar2 != 0) {
    F_00429760(iVar2,(*(int *)((int)this + 0x2221c) - iVar2 >> 2) * 4,400);
  }
  *(undefined4 *)((int)this + 0x22214) = 0;
  *(undefined4 *)((int)this + 0x22218) = 0;
  *(undefined4 *)((int)this + 0x2221c) = 0;
  F_005d3f40((undefined *)((int)this + 0x20ea0) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20e70) = (*(undefined * PTR32 (*)[1])REFP(0x10a0edc));
  F_005c8d00((undefined *)((int)this + 0x20e8c) GEN_EDX_ARG);
  F_005c8c60((undefined *)((int)this + 0x20e80) GEN_EDX_ARG);
  F_005c9640((undefined *)((int)this + 0x20e3c) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x20e40),
               *(undefined4 * PTR32 *)((int)this + 0x20e40));
  F_00429760(*(undefined4 *)((int)this + 0x20e40),0x18,400);
  F_00a4b380((undefined *)((int)this + 0x20e28) GEN_EDX_ARG);
  iVar2 = *(int *)((int)this + 0x20e18);
  if (iVar2 != 0) {
    F_00429760(iVar2,(*(int *)((int)this + 0x20e20) - iVar2 >> 2) * 4,400);
  }
  *(undefined4 *)((int)this + 0x20e18) = 0;
  *(undefined4 *)((int)this + 0x20e1c) = 0;
  *(undefined4 *)((int)this + 0x20e20) = 0;
  F_00564cd0((undefined *)((int)this + 0x20de0) GEN_EDX_ARG);
  F_00a4b380((undefined *)((int)this + 0x134) GEN_EDX_ARG);
  F_005c8630((undefined *)((int)this + 0x124) GEN_EDX_ARG);
  uVar3 = F_00a29b20((undefined *)((int)this + 0x18) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[8])REFP(0x10a0a20));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[3])REFP(0x10a0a44));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[43])REFP(0x10a0a64));
  return uVar3;
}

/* ref: FUN_005a1f20 */
GEN_FRAME unsigned int GEN_THISCALL F_005a1f20(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x5a1f20u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(ushort *)(param_1 + 0x2e);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      if ((uint)(*(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x38) >> 2) <= uVar3) {
                    
        F_00c457e7("invalid vector<T> subscript");
      }
      iVar2 = *((int *)GEN_TOP((*(int *)(param_1 + 0x38) + uVar3 * 4)));
      if ((*(uint *)(iVar2 + 0x84) & 0x100000) == 0) {
        uVar3 = uVar3 + *(ushort *)(iVar2 + 0x1a);
      }
      else {
        iVar2 = *(int *)(iVar2 + 0x1c);
        if ((iVar2 != 0) && (*(short *)(iVar2 + 0x22) < 0)) {
          F_005a0080(iVar2 GEN_EDX_ARG,param_2);
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return;
}

/* ref: FUN_005a1fa0 */
GEN_NOFRAME uint GEN_THISCALL F_005a1fa0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x5a1fa0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined * this;
  int * piVar5;
  int iVar6;
  ushort uVar7;
  ushort uVar8;
  uint in_EAX = 0;
  uint uVar9;
  float10 fVar10;
  float10 fVar11;
  
  (*(int *)(gen_frame + 0x48)) = param_1;
  if (((*(byte *)(param_1 + 0x5c) & 1) != 0) && (*(int *)(param_1 + 8) != 0)) {
    (*(uint *)(gen_frame + 0x40)) = 0;
    (*(char *)(gen_frame + 0x4f)) = '\0';
    (*(uint *)(gen_frame + 0x44)) = 0;
    (*(uint *)(gen_frame + 0x38)) = (uint)*(ushort *)(param_1 + 0x2e);
    in_EAX = 0;
    if (*(ushort *)(param_1 + 0x2e) != 0) {
      do {
        fVar10 = (float10)0;
        if ((uint)(*(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x38) >> 2) <= (*(uint *)(gen_frame + 0x44))) {
                    
          F_00c457e7("invalid vector<T> subscript");
        }
        this = *((undefined * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x38) + (*(uint *)(gen_frame + 0x44)) * 4)));
        if ((*(uint *)((int)this + 0x84) & 0x100000) == 0) {
          in_EAX = (uint)*(ushort *)((int)this + 0x1a);
          (*(uint *)(gen_frame + 0x44)) = (*(uint *)(gen_frame + 0x44)) + in_EAX;
        }
        else {
          if ((*(uint *)((int)this + 0x84) & 0x400000) != 0) {
            fVar1 = *(float *)((int)this + 0x2c);
            fVar2 = *(float *)((int)this + 0x24);
            (*(char *)(gen_frame + 0x4f)) = '\x01';
            (*(uint *)(gen_frame + 0x40)) = *(ushort *)((int)this + 0x1a) + (*(uint *)(gen_frame + 0x44));
            fVar3 = *(float *)((int)this + 0x34);
            fVar4 = ((float)GEN_TOF((((float10)*(float *)((int)this + 0x28) * fVar10 +
                            (float10)*(float *)((int)this + 0x20) * fVar10) +
                           (float10)*(float *)((int)this + 0x30))));
            uVar7 = F_00568270(this GEN_EDX_ARG);
            (*(uint *)(gen_frame + 0x3c)) = (uint)uVar7;
            uVar8 = F_005682d0(this GEN_EDX_ARG);
            (*(uint *)(gen_frame + 0x3c)) = (uint)uVar8;
            fVar10 = (float10)((float)GEN_TOF((((float10)fVar2 * fVar10 + (float10)fVar1 * fVar10) +
                                     (float10)fVar3)));
            fVar11 = (float10)REFG(double, 0x1088108);
            (*(int *)(gen_frame + 0x28)) = (int)((float10)fVar4 - fVar11);
            (*(int *)(gen_frame + 0x2c)) = (int)(fVar10 - fVar11);
            (*(int *)(gen_frame + 0x30)) = (int)((float10)(float)((float10)uVar7 + (float10)fVar4) + fVar11);
            (*(int *)(gen_frame + 0x34)) = (int)(fVar11 + (float10)(float)(fVar10 + (float10)uVar8));
          }
          in_EAX = *(uint *)((int)this + 0x88) & 0xfff9ffff;
          (*(byte *)(gen_frame + 0x4e)) = (byte)(*(uint *)((int)this + 0x88) >> 0x12) & 1;
          *(uint *)((int)this + 0x88) = in_EAX;
          if (((*(char *)(gen_frame + 0x4f)) != '\0') &&
             (in_EAX = *(uint *)((int)this + 0x84), (in_EAX & 0x20000000) != 0)) {
            if ((in_EAX & 0x1000000) == 0) {
              in_EAX = (uint)*(ushort *)((int)this + 0x18);
              if ((in_EAX != 8) && (*(ushort *)((int)this + 0x18) < 1000)) goto LAB_005a21b2;
            }
            F_00568010(this GEN_EDX_ARG,&(*(int *)(gen_frame + 0x18)));
            *(uint *)((int)this + 0x88) = *(uint *)((int)this + 0x88) | 0x40000;
            in_EAX = *(uint *)((int)this + 0x88);
            if (((*(int *)(gen_frame + 0x20)) < (*(int *)(gen_frame + 0x28))) ||
               (((param_1 = (*(int *)(gen_frame + 0x48)), (*(int *)(gen_frame + 0x30)) < (*(int *)(gen_frame + 0x18)) || ((*(int *)(gen_frame + 0x34)) < (*(int *)(gen_frame + 0x1c)))) ||
                ((*(int *)(gen_frame + 0x24)) < (*(int *)(gen_frame + 0x2c)))))) {
              in_EAX = in_EAX | 0x20000;
              *(uint *)((int)this + 0x88) = in_EAX;
            }
            else if ((((*(int *)(gen_frame + 0x28)) <= (*(int *)(gen_frame + 0x18))) && ((*(int *)(gen_frame + 0x20)) <= (*(int *)(gen_frame + 0x30)))) &&
                    (((*(int *)(gen_frame + 0x24)) <= (*(int *)(gen_frame + 0x34)) && ((*(int *)(gen_frame + 0x2c)) <= (*(int *)(gen_frame + 0x1c)))))) {
              in_EAX = in_EAX & 0xfffbffff;
              *(uint *)((int)this + 0x88) = in_EAX;
            }
            if ((999 < *(ushort *)((int)this + 0x18)) &&
               (in_EAX = *(uint *)((int)this + 0x8c), in_EAX != 0)) {
              *(int * PTR32 *)(in_EAX + 0x5c) = &(*(int *)(gen_frame + 0x28));
            }
          }
LAB_005a21b2: ;
          if (*(int *)(param_1 + 0x58) != 0) {
            F_00568010(this GEN_EDX_ARG,&(*(int *)(gen_frame + 0x8)));
            *(uint *)((int)this + 0x88) = *(uint *)((int)this + 0x88) | 0x40000;
            if ((*(short *)((int)this + 0x18) == 3) ||
               ((*(uint *)((int)this + 0x84) & 0x20000000) == 0)) {
              *(uint *)((int)this + 0x88) = *(uint *)((int)this + 0x88) & 0xfffdffff;
            }
            else {
              piVar5 = *(int * PTR32 *)(param_1 + 0x58);
              if (((((*(int *)(gen_frame + 0x10)) < *piVar5) || (param_1 = (*(int *)(gen_frame + 0x48)), piVar5[2] < (*(int *)(gen_frame + 0x8)))) ||
                  (piVar5[3] < (*(int *)(gen_frame + 0xc)))) || ((*(int *)(gen_frame + 0x14)) < piVar5[1])) {
                *(uint *)((int)this + 0x88) = *(uint *)((int)this + 0x88) | 0x20000;
              }
              piVar5 = *(int * PTR32 *)(param_1 + 0x58);
              if (((*piVar5 <= (*(int *)(gen_frame + 0x8))) && ((*(int *)(gen_frame + 0x10)) <= piVar5[2])) &&
                 (((*(int *)(gen_frame + 0x14)) <= piVar5[3] && (piVar5[1] <= (*(int *)(gen_frame + 0xc)))))) {
                *(uint *)((int)this + 0x88) = *(uint *)((int)this + 0x88) & 0xfffbffff;
              }
            }
            in_EAX = (uint)*(ushort *)((int)this + 0x18);
            if ((999 < *(ushort *)((int)this + 0x18)) &&
               (in_EAX = *(uint *)((int)this + 0x8c), in_EAX != 0)) {
              *(undefined4 *)(in_EAX + 0x5c) = *(undefined4 *)(param_1 + 0x58);
            }
          }
          if (((((*(byte *)(gen_frame + 0x4e)) != ((byte)(*(uint *)((int)this + 0x88) >> 0x12) & 1)) &&
               (in_EAX = 1000, 999 < *(ushort *)((int)this + 0x18))) &&
              (*(int *)((int)this + 0x8c) != 0)) &&
             (in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x8c) + 0x38))))
                                 (*(int * PTR32 *)((int)this + 0x8c) GEN_EDX_ARG), in_EAX != 0)) {
            *(uint *)(in_EAX + 0x88) =
                 *(uint *)(in_EAX + 0x88) ^
                 (*(uint *)((int)this + 0x88) ^ *(uint *)(in_EAX + 0x88)) & 0x40000;
          }
          if ((*(uint *)((int)this + 0x88) & 0x20000) == 0) {
            iVar6 = *(int *)((int)this + 0x1c);
            if ((iVar6 != 0) && (*(short *)(iVar6 + 0x22) < 0)) {
              F_005a0080(iVar6 GEN_EDX_ARG,param_2);
            }
            in_EAX = 1000;
            if ((999 < *(ushort *)((int)this + 0x18)) &&
               (piVar5 = *(int * PTR32 *)((int)this + 0x8c), piVar5 != (int *)0x0)) {
              in_EAX = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x14))(piVar5 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
              piVar5[0x17] = 0;
            }
          }
        }
        uVar9 = (*(uint *)(gen_frame + 0x44)) + 1;
        (*(uint *)(gen_frame + 0x44)) = uVar9;
        if (((*(char *)(gen_frame + 0x4f)) != '\0') && ((*(uint *)(gen_frame + 0x40)) < uVar9)) {
          (*(char *)(gen_frame + 0x4f)) = '\0';
        }
      } while (uVar9 < (*(uint *)(gen_frame + 0x38)));
    }
  }
  return in_EAX;
}

/* ref: Component::GUI2::AtkUnitBase::vf38 */
GEN_FRAME uint GEN_THISCALL F_005a2370(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x5a2370u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined * this;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint in_EAX = 0;
  undefined * this_01;
  
  if (((*(byte *)(param_1 + 0xfa) & 4) != 0) && (in_EAX = *(uint *)(param_1 + 0xf4) >> 0x14 & 0xffffff0f, (char)in_EAX != '\x05')) {
    this = (undefined *)(param_1 + 0x24);
    in_EAX = F_005a1fa0(this GEN_EDX_FWD,param_2);
    if (((*(byte *)(param_1 + 0x80) & 1) != 0) && ((in_EAX = *(uint *)(param_1 + 0x2c), in_EAX != 0 && (uVar1 = **(uint * PTR32 *)(in_EAX + 8), uVar1 != 0)))) {
      uVar2 = *(uint *)(uVar1 + 8);
      if (*(int *)(uVar1 + 0x10) == 0) {
        for (iVar3 = *(int *)(uVar1 + 0xc); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xc)) {
          in_EAX = F_0057f0d0(this GEN_EDX_ARG,iVar3,uVar2,1);
        }
      }
      if ((((*(uint *)(uVar1 + 0x84) & 0x100000) != 0) || ((*(byte *)(uVar1 + 0x88) & 1) != 0)) || ((uVar2 != 0 && ((*(byte *)(uVar2 + 0x88) & 2) != 0)))) {
        if ((999 < *(ushort *)(uVar1 + 0x18)) && (*(int *)(uVar1 + 0x8c) != 0)) {
          this_00 = ((undefined *)GEN_TOP((*(int *)(uVar1 + 0x8c) + 4)));
          this_01 = (undefined *)F_00578ee0(this_00 GEN_EDX_ARG,0);
          if (this_01 != (undefined *)0x0) {
            F_0055a960(this_01 GEN_EDX_ARG,uVar1);
            F_0057f0d0(this_00 GEN_EDX_ARG,((undefined4)(uint)(this_01)),uVar2,1);
          }
        }
        F_0056a9b0(uVar1,uVar2);
        F_0055d660(uVar1,uVar2);
        in_EAX = 0;
        if (*(int *)(uVar1 + 0x14) != 0) {
          in_EAX = F_0057f0d0(this GEN_EDX_ARG,*(int *)(uVar1 + 0x14),uVar1,1);
        }
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_005a2480 */
GEN_FRAME uint GEN_THISCALL F_005a2480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5a2480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  
  F_00a294d0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[40])REFP(0x10a1b64));
  *(int *)((int)this + 0x30) = param_1;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  puVar2 = (undefined4 *)((int)this + 0x74);
  *puVar2 = 0;
  puVar1 = (undefined4 *)F_004296a0(8,0,0x2c0);
  *puVar2 = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar2 = puVar2;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined2 *)((int)this + 0xac) = 1;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  F_0042b630((int)this + 0xcc GEN_EDX_ARG);
  F_0042b630((int)this + 0x120 GEN_EDX_ARG);
  iVar3 = (int)this + 0x174;
  param_1 = 2;
  do {
    F_0042b630(iVar3 GEN_EDX_ARG);
    iVar3 = iVar3 + 0x54;
    param_1 = param_1 - 1;
  } while (-1 < param_1);
  puVar2 = (undefined4 *)((int)this + 0x270);
  iVar3 = 1;
  do {
    puVar2[5] = 3;
    puVar2[4] = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 7;
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  F_0042b630((int)this + 0x2a8 GEN_EDX_ARG);
  F_0042b630((int)this + 0x2fc GEN_EDX_ARG);
  puVar2 = (undefined4 *)((int)this + 0x350);
  *puVar2 = 0;
  puVar1 = (undefined4 *)F_004296a0(8,0,0x2c4);
  *puVar2 = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar2 = puVar2;
  *(undefined4 *)((int)this + 0x354) = 0;
  *(undefined4 *)((int)this + 0x358) = 0;
  *(undefined4 *)((int)this + 0x35c) = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 4) + 0x60))) = ((code *)REFP(0x5bfc70));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 4) + 0x40))) = ((code *)REFP(0x5bfc40));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 4) + 0x44))) = ((code *)REFP(0x5bfc60));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 4) + 0x58))) = ((code *)REFP(0x5bfc80));
  *((gen_code32 *)GEN_TOP((*(int *)((int)this + 4) + 0x5c))) = ((code *)REFP(0x5bfc50));
  F_0042aca0((int)this + 0x2fc GEN_EDX_ARG);
  F_0042d160((undefined *)((int)this + 0x2fc) GEN_EDX_ARG,2);
  F_0042d160((undefined *)((int)this + 0x2fc) GEN_EDX_ARG,0x10);
  F_0042d160((undefined *)((int)this + 0x2fc) GEN_EDX_ARG,1);
  F_0042d160((undefined *)((int)this + 0x2fc) GEN_EDX_ARG,3);
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
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  return (uint)this;
}

/* ref: FUN_005a2670 */
GEN_NOFRAME uint GEN_THISCALL F_005a2670(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5a2670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)(uintptr_t)this) >> 5;
  if ((uVar1 & 1) != 0) {
    uVar1 = F_005a0260(this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_005a2690 */
GEN_FRAME unsigned int GEN_THISCALL F_005a2690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5a2690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint * this_00;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((param_2 != 0) && (piVar1 = *(int * PTR32 *)((int)this + 4), piVar1 != (int *)0x0)) {
    uVar2 = piVar1[1] - *piVar1 >> 3;
    uVar4 = param_1;
    if (uVar2 < param_1) {
      uVar4 = uVar2 - 1;
    }
    uVar3 = param_2;
    if ((int)param_2 < 0) {
      uVar3 = uVar2;
    }
    uVar3 = uVar4 + uVar3;
    if (uVar2 <= uVar3) {
      uVar3 = uVar2 - 1;
    }
    for (; uVar4 < uVar3; uVar4 = uVar4 + 1) {
      this_00 = (uint *)(*piVar1 + uVar4 * 8);
      if (this_00 != &(*(uint *)(gen_frame + 0x4))) {
        if ((*this_00 >> 5 & 1) != 0) {
          F_005a0260(this_00 GEN_EDX_FWD);
        }
        *this_00 = 0;
        this_00[1] = (*(uint *)(gen_frame + 0x8));
      }
    }
  }
  return;
}

/* ref: FUN_005a2710 */
GEN_FRAME uint GEN_THISCALL F_005a2710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5a2710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 >> 5 & 1) != 0) {
    uVar1 = F_005a0260(this GEN_EDX_FWD);
    *(undefined4 *)this = param_1;
    return uVar1;
  }
  *(undefined4 *)this = param_1;
  return uVar1 >> 5;
}

/* ref: Component::GUI2::AtkComponentBase::vf5 */
GEN_FRAME uint GEN_THISCALL F_005a2740(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x5a2740u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = F_005a1fa0(param_1 + 4 GEN_EDX_FWD,param_2);
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentBase::vf13 */
GEN_FRAME uint GEN_THISCALL F_005a2760(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5a2760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1379860) + 0x38) + 8))))
            (*(int * PTR32 *)(REFG(int, 0x1379860) + 0x38) GEN_EDX_ARG,((uint *)(gen_frame + 0x4)),*(undefined4 *)(this + 0x74));
  uVar1 = ((uint *)(gen_frame + 0x4))[0] >> 5;
  if ((uVar1 & 1) != 0) {
    uVar1 = F_005a0260(((uint *)(gen_frame + 0x4)) GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentIcon::vf5 */
GEN_FRAME uint GEN_THISCALL F_005a27a0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x5a27a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_005a1fa0((int)param_1 + 4 GEN_EDX_FWD,param_2);
  if ((((*(char *)((int)param_1 + 0x94) != '\0') &&
       (uVar2 = *(uint *)((int)param_1 + 0x98), uVar2 != 0)) && (*(int *)(uVar2 + 8) == 0)) &&
     (piVar1 = (int *)(uVar2 + 0xc), uVar2 = 0, *piVar1 != 0)) {
    uVar2 = F_00572c50(*piVar1);
    if (uVar2 == 2) {
      *(undefined1 *)((int)param_1 + 0x94) = 0;
      uVar2 = F_00561950(param_1 GEN_EDX_ARG);
    }
  }
  return uVar2;
}

/* ref: Component::GUI2::AtkComponentTab::vf24 */
GEN_FRAME byte GEN_THISCALL F_005a2800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5a2800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  int iVar2;
  
  if (this == (undefined *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(this + 0x70);
  }
  bVar1 = F_005a0180(param_1 + 0x10,*(undefined4 *)(iVar2 + 8),this);
  return bVar1;
}

/* ref: Component::GUI2::AtkComponentGaugeBar::vf5 */
GEN_FRAME uint GEN_THISCALL F_005a2830(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x5a2830u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = F_005a1fa0((int)param_1 + 4 GEN_EDX_FWD,param_2);
  if ((*(byte *)((int)param_1 + 0x66) & 1) != 0) {
    F_005a0ab0(param_1 GEN_EDX_ARG,param_2);
    uVar1 = F_0056cb10(param_1 GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: FUN_005a2870 */
GEN_FRAME unsigned int GEN_THISCALL F_005a2870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5a2870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 <= *(int *)((int)this + 0xe0)) {
    if (*(int *)((int)this + 0xe4) < param_1) {
      F_005a04e0(this GEN_EDX_FWD,param_1,1);
    }
    *(int *)((int)this + 0xdc) = param_1;
  }
  return;
}

/* ref: FUN_005a28a0 */
GEN_FRAME unsigned int GEN_THISCALL F_005a28a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5a28a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(int *)((int)this + 0xdc) <= param_1) {
    if (param_1 < *(int *)((int)this + 0xe4)) {
      F_005a04e0(this GEN_EDX_FWD,param_1,1);
    }
    *(int *)((int)this + 0xe0) = param_1;
  }
  return;
}

/* ref: Component::GUI2::AtkComponentSlider::vf5 */
GEN_FRAME uint GEN_THISCALL F_005a28d0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x5a28d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = F_005a1fa0((int)param_1 + 4 GEN_EDX_FWD,param_2);
  if ((*(byte *)((int)param_1 + 0x66) & 1) != 0) {
    F_0057eb30(*(undefined * PTR32 *)((int)param_1 + 0x94) GEN_EDX_ARG,*(undefined4 *)((int)param_1 + 0xa0),0,0,0,0);
    uVar1 = F_0056cd30(param_1 GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkComponentSlider::vf2 */
GEN_FRAME uint GEN_THISCALL F_005a2920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5a2920u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a2;
  ushort * param_3 = (ushort *)(uintptr_t)gen_a3;
  ushort * param_4 = (ushort *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined1 AVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  undefined * pvVar5;
  uint uVar6;
  ushort * puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  pvVar5 = REFG(void * PTR32, 0x1379860);
  uVar6 = param_1 & 0xffff;
  if (0x42 < uVar6 - 4) {
    return uVar6 - 4;
  }
  puVar7 = (ushort *)(uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x5a2ca8) + uVar6)));
  switch((unsigned int)(uintptr_t)(uVar6)) {
  case 4: ;
    this[0xae] = (undefined1)((byte)this[0xae] & 0xdf);
    F_00583770(((undefined *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x23c))) GEN_EDX_FWD,0x49,0,this,0);
    *(uint *)(param_3 + 10) = *(uint *)(param_3 + 10) | 0x10000;
    puVar7 = param_3;
    goto LAB_005a2bc7;
  case 5: ;
    AVar1 = this[0xae];
    puVar7 = (ushort *)(uint)(byte)AVar1;
    if (((byte)AVar1 & 0x20) != 0) {
      if (((byte)AVar1 & 0x10) == 0) {
        uVar3 = *param_4;
      }
      else {
        uVar3 = param_4[1];
      }
      uVar9 = 1;
      uVar6 = F_00589110(this GEN_EDX_ARG,(uint)uVar3);
      uVar6 = F_0059dbe0(this GEN_EDX_ARG,uVar6,uVar9);
      this[0xae] = (undefined1)((byte)this[0xae] | 0x40);
      return uVar6;
    }
    break;
  case 0xc: ;
    if (param_2 == (ushort *)0x3) {
      if ((char)param_4[2] != '\0') {
        return (uint)param_4;
      }
      if (*(int *)param_4 != 1) {
        return (uint)param_4;
      }
      uVar6 = F_005c0730(this GEN_EDX_ARG);
      if ((char)uVar6 == '\0') {
        return uVar6;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x38))) + 8))))
                (*((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x38))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x34)),0);
      F_005a2670(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG);
      if (*(int *)(this + 0x90) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x90) + 0x70)));
      }
LAB_005a2c52: ;
      pvVar5 = REFG(void * PTR32, 0x1379860);
      uVar10 = 0;
      uVar6 = F_00581470(this GEN_EDX_ARG);
      F_0059b300(pvVar5 GEN_EDX_ARG,uVar9,uVar6,uVar10);
      *(uint *)(param_3 + 10) = *(uint *)(param_3 + 10) | 0x10000;
      return (uint)param_3;
    }
    cVar2 = (char)param_4[2];
    if ((cVar2 != '\0') || ((*(int *)param_4 != 2 && (*(int *)param_4 != 1)))) {
      uVar6 = F_005c0730(this GEN_EDX_ARG);
      if ((char)uVar6 == '\0') {
        return uVar6;
      }
      if (cVar2 != '\0') {
        if (cVar2 != '\x02') {
          return uVar6;
        }
        uVar6 = F_0059dc50(this GEN_EDX_ARG,param_3,param_4,(byte)this[0xae] & 0xf);
        return uVar6;
      }
      uVar6 = F_0059dc50(this GEN_EDX_ARG,param_3,param_4,1);
      return uVar6;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x38))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x38))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x2c)),1);
    puVar7 = (ushort *)F_005a2670(((undefined1 *)(gen_frame + 0x2c)) GEN_EDX_ARG);
    pvVar5 = REFG(void * PTR32, 0x1379860);
    iVar4 = *(int *)param_4;
    if ((((iVar4 == 1) && (this[0x80] == (undefined1)0x1)) &&
        (puVar7 = (ushort *)(int)(char)this[0x7f], puVar7 != (ushort *)0x0)) &&
       (puVar7 != (ushort *)0xff)) {
      (*(undefined2 *)(gen_frame + 0xc)) = 0x47;
      (*(undefined2 *)(gen_frame + 0xe)) = 0;
      (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)0x0;
      (*(int *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0xe)) + 0)) = 1;
      (*(undefined2 *)(gen_frame + 0xe)) = 1;
      (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
      (*(int *)(gen_frame + 0x1c)) = iVar4;
      F_005997b0(*(undefined * PTR32 *)(this + 0x70) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0xc)));
    }
    else {
      if ((iVar4 == 2) && (((byte)this[0xae] & 0x80) != 0)) goto LAB_005a2bc7;
      uVar9 = 0x11;
      uVar6 = F_00581470(this GEN_EDX_ARG);
      uVar8 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x3c))(this GEN_EDX_ARG);
      F_0059b300(pvVar5 GEN_EDX_ARG,uVar8,uVar6,uVar9);
    }
    *(uint *)(param_3 + 10) = *(uint *)(param_3 + 10) | 0x210000;
    puVar7 = param_3;
LAB_005a2bc7: ;
    if (((byte)this[0xae] & 0x40) != 0) {
      uVar6 = F_0059c220(this GEN_EDX_ARG);
      return uVar6;
    }
    break;
  case 0x11: ;
    if (param_2 == (ushort *)0x1) {
      if (*(int *)(this + 0x90) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x90) + 0x70)));
      }
      uVar10 = 0;
      uVar6 = F_00581470(this GEN_EDX_ARG);
      uVar6 = F_0059b300(pvVar5 GEN_EDX_ARG,uVar9,uVar6,uVar10);
      return uVar6;
    }
    break;
  case 0x16: ;
    if (param_2 == (ushort *)0x1) {
      if (((byte)this[0xae] & 0x10) == 0) {
        uVar3 = *param_4;
      }
      else {
        uVar3 = param_4[1];
      }
      uVar9 = 1;
      uVar6 = F_00589110(this GEN_EDX_ARG,(uint)uVar3);
      F_0059dbe0(this GEN_EDX_ARG,uVar6,uVar9);
      *(uint *)(param_3 + 10) = *(uint *)(param_3 + 10) | 0x10000;
      uVar6 = F_0059c220(this GEN_EDX_ARG);
      return uVar6;
    }
    puVar7 = param_2 - 1;
    if (puVar7 == (ushort *)0x0) {
      AVar1 = this[0xae];
      puVar7 = (ushort *)(uint)(byte)AVar1;
      if (((byte)AVar1 & 0x20) == 0) {
        this[0xae] = (undefined1)((byte)AVar1 | 0x20);
        pvVar5 = REFG(void * PTR32, 0x1379860);
        F_0056a3d0(REFG(void * PTR32, 0x1379860) GEN_EDX_ARG,5,0,this,0,0);
        F_0056a3d0(pvVar5 GEN_EDX_ARG,4,0,this,0,0);
        *(uint *)(param_3 + 10) = *(uint *)(param_3 + 10) | 0x10000;
        return (uint)param_3;
      }
    }
    break;
  case 0x46: ;
    if (param_2 == (ushort *)0x0) {
      puVar7 = param_4;
      if (*(int *)(param_4 + 4) != 0x11) {
        if (*(int *)(this + 0x90) == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x90) + 0x70)));
        }
        goto LAB_005a2c52;
      }
    }
    else {
      puVar7 = param_2;
      if (param_2 == (ushort *)0x3) {
        puVar7 = (ushort *)F_005d3ea0(this GEN_EDX_ARG,0x12);
      }
    }
  }
  return (uint)puVar7;
}

/* ref: Component::GUI2::AtkComponentRadioButton::vf24 */
GEN_FRAME byte GEN_THISCALL F_005a2cf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5a2cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  int iVar2;
  
  if (this == (undefined *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(this + 0x70);
  }
  bVar1 = F_005a0180(param_1 + 4,*(undefined4 *)(iVar2 + 8),this);
  return bVar1;
}

/* ref: Component::GUI2::AtkComponentList::vf5 */
GEN_FRAME uint GEN_THISCALL F_005a2d20(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x5a2d20u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  code * pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = F_005a1fa0(param_1 + 1 GEN_EDX_FWD,param_2);
  if ((*(byte *)((int)param_1 + 0x66) & 1) != 0) {
    if (*(char *)((int)param_1 + 0x11d) != '\0') {
      param_1[0x2d] = param_1[0x2c];
      pcVar1 = *(gen_code32 *)(*param_1 + 0x70);
      *(undefined1 *)((int)param_1 + 0x11d) = 0;
      uVar2 = (*pcVar1)(param_1);
    }
    if (param_1[0x2d] != param_1[0x2c]) {
      ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x80))(param_1 GEN_EDX_ARG);
      uVar2 = (uint)*(ushort *)((int)param_1 + 0xee);
      iVar5 = (param_1[0x2d] - param_1[0x2c]) * uVar2;
      iVar3 = uVar2 * param_1[0x2c];
      iVar4 = iVar5;
      if (iVar5 < (int)uVar2) {
        do {
          ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x6c))(param_1 GEN_EDX_ARG,(short)param_1[0x3e] + iVar4 + iVar3,1,0);
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)(uint)*(ushort *)((int)param_1 + 0xee));
      }
      iVar4 = param_1[0x2c] * (uint)*(ushort *)((int)param_1 + 0xee) + (int)(short)param_1[0x3e];
      if (iVar5 - iVar4 != 0 && iVar4 <= iVar5) {
        iVar5 = iVar4;
      }
      for (iVar4 = -(uint)*(ushort *)((int)param_1 + 0xee); iVar4 < iVar5; iVar4 = iVar4 + 1) {
        ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x6c))(param_1 GEN_EDX_ARG,iVar3 + iVar4,1,0);
      }
      uVar2 = param_1[0x2c];
      param_1[0x2d] = uVar2;
    }
  }
  return uVar2;
}

/* ref: Component::GUI2::AtkComponentListItemRenderer::vf5 */
GEN_FRAME uint GEN_THISCALL F_005a2e30(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x5a2e30u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  F_005a1fa0(param_1 + 4 GEN_EDX_FWD,param_2);
  uVar1 = *(uint *)(param_1 + 0x210);
  if ((uVar1 != 0) && (*(char *)(uVar1 + 0x9e) == '\0')) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(uVar1 + 0x84) + 0xc))))((int *)(uVar1 + 0x84) GEN_EDX_ARG);
    if ((uVar1 == 0) ||
       (((*(uint *)(uVar1 + 0x84) & 0x100000) == 0 || ((*(uint *)(uVar1 + 0x88) & 0x20000) != 0))))
    {
      *(undefined4 *)(param_1 + 0x210) = 0;
    }
  }
  return uVar1;
}

/* ref: FUN_005a2e90 */
GEN_FRAME byte GEN_THISCALL F_005a2e90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5a2e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (((*(byte *)((int)this + 0x220) & 8) == 0) || (*(ushort *)((int)this + 0x20a) < 2)) {
    return 0;
  }
  uVar3 = *(uint *)((int)this + 0x1dc);
  if (((char)param_1[1] == '\x01') && (*param_1 == 0x1f)) {
    return 1;
  }
  if ((char)param_1[1] == '\0') {
    iVar2 = *param_1;
    if (uVar3 != 0) {
      if (iVar2 == 2) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1379860) + 0x38) + 8))))(*(int * PTR32 *)(REFG(int, 0x1379860) + 0x38) GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x4)),3)
        ;
        F_005a2670(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
        *(undefined4 *)((int)this + 0x1dc) = 0;
        return 1;
      }
      switch((unsigned int)(uintptr_t)(iVar2)) {
      case 7: ;
        bVar1 = *(byte *)(uVar3 + 0x7b);
        break;
      case 8: ;
        bVar1 = *(byte *)(uVar3 + 0x7c);
        break;
      default: ;
        goto switchD_005a2f99_caseD_2;
      }
      uVar4 = F_00573130((int)this + 4,(uint)bVar1,0,1);
      *(uint *)((int)this + 0x1dc) = uVar4;
      if (uVar3 != uVar4) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1379860) + 0x38) + 8))))(*(int * PTR32 *)(REFG(int, 0x1379860) + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),0)
        ;
        F_005a2670(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      }
      return uVar3 != *(uint *)((int)this + 0x1dc);
    }
    if ((iVar2 == 8) || ((*(char *)((int)this + 0x80) == '\x01' && (iVar2 == 1)))) {
      uVar3 = F_0057bda0(this GEN_EDX_ARG);
      *(uint *)((int)this + 0x1dc) = uVar3;
      if ((uVar3 != 0) && (uVar3 = F_005c06b0(uVar3 GEN_EDX_ARG), (char)uVar3 == '\0')) {
        *(undefined4 *)((int)this + 0x1dc) = 0;
      }
      if (*(int *)((int)this + 0x1dc) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1379860) + 0x38) + 8))))(*(int * PTR32 *)(REFG(int, 0x1379860) + 0x38) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),0)
        ;
        F_005a2670(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      }
      return *(int *)((int)this + 0x1dc) != 0;
    }
  }
switchD_005a2f99_caseD_2: ;
  return 0;
}

/* ref: Component::GUI2::AtkComponentTreeList::vf5 */
GEN_FRAME uint GEN_THISCALL F_005a3030(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x5a3030u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  code * pcVar2;
  uint uVar3;
  
  if ((char)param_1[100] != '\0') {
    fVar1 = (float)((float10)param_2 * (float10)*(double *)&REFG(undefined, 0x1094568) +
                   ((float10)GEN_TOD(gen_bits2f(param_1[0x5b]))));
    param_1[0x5b] = (int)gen_fl2bits(fVar1);
    if ((float10)1 <= (float10)fVar1) {
      param_1[0x5b] = GEN_FLT_TO(param_1[0x5b], REFG(float, 0x1087f04));
      *(undefined1 *)(param_1 + 100) = 0;
    }
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x80))(param_1 GEN_EDX_FWD);
  }
  F_005a1fa0(param_1 + 1 GEN_EDX_ARG,param_2);
  if (*(char *)((int)param_1 + 0x11d) != '\0') {
    param_1[0x2d] = param_1[0x2c];
    pcVar2 = *(gen_code32 *)(*param_1 + 0x70);
    param_1[0x5a] = param_1[0x59];
    *(undefined1 *)((int)param_1 + 0x11d) = 0;
    (*pcVar2)(param_1);
    if (((char)param_1[100] == '\0') && (*(char *)((int)param_1 + 0x191) != '\0')) {
      ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x80))(param_1 GEN_EDX_ARG);
    }
  }
  uVar3 = param_1[0x2d];
  if ((uVar3 != param_1[0x2c]) || (param_1[0x5a] != param_1[0x59])) {
    F_00574610(param_1 GEN_EDX_ARG,param_1[0x2c],uVar3);
    if (param_1[0x59] < param_1[0x2d]) {
      param_1[0x59] = param_1[0x2d];
    }
    if (param_1[0x5a] < param_1[0x2c]) {
      param_1[0x5a] = param_1[0x2c];
    }
    F_00574610(param_1 GEN_EDX_ARG,param_1[0x5a] + 1,param_1[0x59]);
    uVar3 = param_1[0x59];
    param_1[0x2d] = param_1[0x2c];
    param_1[0x5a] = uVar3;
    if (((char)param_1[100] == '\0') && (*(char *)((int)param_1 + 0x191) != '\0')) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x80))(param_1 GEN_EDX_ARG);
    }
  }
  return uVar3;
}

/* ref: Component::GUI2::AtkComponentDropDownList::vf5 */
GEN_FRAME uint GEN_THISCALL F_005a3190(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x5a3190u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  int iVar6;
  
  uVar3 = F_005a1fa0((int)(*(undefined * PTR32 *)&gen_args[0]) + 4 GEN_EDX_FWD,(*(float *)&gen_args[1]));
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x93))) = 0;
  if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x90))) != '\0') {
    uVar3 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x88)));
    if (uVar3 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(uVar3 + 0x70);
    }
    if ((*(uint *)(iVar6 + 0x88) & 0x40000) != 0) {
      if (uVar3 != 0) {
        uVar3 = *(uint *)(uVar3 + 0x70);
      }
      *(uint *)(uVar3 + 0x88) = *(uint *)(uVar3 + 0x88) & 0xfffbffff;
    }
  }
  if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x91))) != '\0') {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x88)));
    (*(float *)&gen_args[1]) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)&gen_args[1]), 1, 3),*((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x90)))));
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x91))) = 0;
    *(undefined1 *)((int)piVar1 + 0x119) = *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x90)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG,(undefined4)gen_fl2bits((*(float *)&gen_args[1])));
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x88))) + 0x123))) = *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x90)));
    F_0057c780((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x90))));
    F_0059dde0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x84))) GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x90))));
    if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x90))) != '\0') {
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x88)));
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x8c))) = piVar1[0x30];
      if (piVar1[0x30] < 0) {
        if (piVar1[0x33] < 0) {
          uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x7c))(piVar1 GEN_EDX_ARG);
          if (uVar3 != 0) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x88))) + 0x74))))
                      (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x88))) GEN_EDX_ARG,0,0);
          }
        }
        iVar6 = REFG(int, 0x1379860);
        (*(float *)&gen_args[1]) = *((float *)GEN_TOP((*(int *)(REFG(int, 0x1379860) + 0x14) + 0xcc)));
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x88))) + 0x3c))))
                          (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x88))) GEN_EDX_ARG);
        if ((uVar3 != 0) && ((*(float *)&gen_args[1]) == 0.0)) {
          (*(float *)&gen_args[1]) = gen_bits2f(F_0057f8d0(*(undefined * PTR32 *)(iVar6 + 0x14) GEN_EDX_ARG,uVar3));
        }
        F_0059b1c0(*(undefined * PTR32 *)(iVar6 + 0x18) GEN_EDX_ARG,uVar3,(undefined4)gen_fl2bits((*(float *)&gen_args[1])),0);
      }
      else {
        (*(int *)(gen_frame + 0x28)) = REFG(int, 0x1379860);
        piVar4 = (int *)(REFG(int, 0x1379860) + 0x14);
        uVar3 = *(uint *)(*piVar4 + 0xcc);
        uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x8c))(piVar1 GEN_EDX_ARG);
        if ((uVar5 != 0) && (uVar3 == 0)) {
          uVar3 = F_0057f8d0((undefined *)*piVar4 GEN_EDX_ARG,uVar5);
        }
        F_0059b1c0(*(undefined * PTR32 *)((*(int *)(gen_frame + 0x28)) + 0x18) GEN_EDX_ARG,uVar5,uVar3,0);
        piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x88)));
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x74))(piVar1 GEN_EDX_ARG,piVar1[0x30],0);
      }
      uVar3 = F_00565340((undefined *)(REFG(int, 0x1379860) + 0x23c) GEN_EDX_ARG,3,2,0,REFG(int, 0x1379860),(*(undefined * PTR32 *)&gen_args[0]),0);
      if (uVar3 != 0) {
        *(uint *)(uVar3 + 0x14) = *(uint *)(uVar3 + 0x14) & 0xffbfffff;
      }
      pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70)));
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      ((undefined4 *)(gen_frame + 0x8))[0] = 0x2b;
      uVar3 = F_005997b0(pvVar2 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x8)));
      return uVar3;
    }
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70)));
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    ((undefined4 *)(gen_frame + 0x8))[0] = 0x2c;
    F_005997b0(pvVar2 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x8)));
    uVar3 = F_00583770((undefined *)(REFG(int, 0x1379860) + 0x23c) GEN_EDX_ARG,3,2,(*(undefined * PTR32 *)&gen_args[0]),0);
  }
  return uVar3;
}

/* ref: Component::GUI2::AtkComponentDropDownList::vf2 */
GEN_FRAME uint GEN_THISCALL F_005a33e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5a33e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint * param_4 = (uint *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined3 extraout_var_01 = 0;
  undefined4 uVar5;
  undefined4 uVar6;
  
  pvVar3 = REFG(void * PTR32, 0x1379860);
  uVar2 = param_1;
  switch((unsigned int)(uintptr_t)(param_1 & 0xffff)) {
  case 3: ;
    if (this[0x93] == (undefined1)0x0) {
      bVar1 = F_005622f0(*(undefined4 *)(this + 0x88) GEN_EDX_FWD);
      uVar2 = CONCAT31(extraout_var,bVar1);
      if ((bVar1 == 0) && (this[0x90] != (undefined1)0x0)) {
        if (*(char *)((int)param_4 + 6) != '\x01') {
LAB_005a345e: ;
          *(undefined2 *)(this + 0x90) = 0x100;
          uVar2 = F_0059cc00(this GEN_EDX_ARG,0);
          return uVar2;
        }
        uVar5 = 0;
        if (((int)(uint)(*(undefined4 *)(this + 0x88))) != 0) {
          uVar5 = *((undefined4 *)GEN_TOP((((int)(uint)(*(undefined4 *)(this + 0x88))) + 0x70)));
        }
        bVar1 = F_00570d10(uVar5 GEN_EDX_ARG,(uint)(ushort)*param_4,(uint)*(ushort *)((int)param_4 + 2),0);
        uVar2 = CONCAT31(extraout_var_00,bVar1);
        if (bVar1 == 0) goto LAB_005a345e;
      }
    }
    break;
  case 4: ;
  case 5: ;
  case 6: ;
  case 7: ;
  case 8: ;
  case 9: ;
  case 10: ;
  case 0xb: ;
  case 0xd: ;
  case 0xe: ;
  case 0xf: ;
  case 0x10: ;
  case 0x13: ;
  case 0x14: ;
  case 0x15: ;
  case 0x18: ;
  case 0x19: ;
  case 0x1a: ;
  case 0x1b: ;
  case 0x1c: ;
  case 0x1e: ;
  case 0x1f: ;
  case 0x20: ;
    break;
  case 0xc: ;
    if ((this[0x90] != (undefined1)0x0) && ((uVar2 = *param_4, uVar2 == 2 || (uVar2 == 3)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x38))) + 8)))) (*((int * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x38))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x24)),3);
      F_005a2670(((undefined1 *)(gen_frame + 0x24)) GEN_EDX_ARG);
      F_0059caa0(this GEN_EDX_ARG,*(undefined4 *)(this + 0x8c));
      *(undefined2 *)(this + 0x90) = 0x100;
      uVar2 = F_0059cc00(this GEN_EDX_ARG,0);
      pvVar3 = REFG(void * PTR32, 0x1379860);
      if (uVar2 == 0) {
        uVar5 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x14))) + 0xcc)));
        uVar6 = 0;
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x84) + 0x38))))(*(int * PTR32 *)(this + 0x84) GEN_EDX_ARG,uVar5,0);
LAB_005a3849: ;
        F_0059b300(pvVar3 GEN_EDX_ARG,uVar2,uVar5,uVar6);
      }
LAB_005a3851: ;
      *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x10000;
      uVar2 = param_3;
    }
    break;
  case 0x11: ;
    if (param_2 == 1) {
      if ((this[0x90] == (undefined1)0x0) && (this[0x91] == (undefined1)0x0)) {
        uVar5 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x14))) + 0xcc)));
        uVar6 = 0;
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x84) + 0x38))))(*(int * PTR32 *)(this + 0x84) GEN_EDX_ARG);
        goto LAB_005a3849;
      }
      goto LAB_005a3851;
    }
    break;
  case 0x12: ;
    if (param_2 == 1) {
      bVar1 = F_005615c0(this GEN_EDX_ARG,param_4[1]);
      uVar2 = CONCAT31(extraout_var_01,bVar1);
      if (bVar1 == 0) {
        uVar2 = F_0059fc00(this GEN_EDX_ARG);
        return uVar2;
      }
    }
    break;
  case 0x16: ;
    if (this[0x90] != (undefined1)0x0) {
      this[0x93] = (undefined1)0x1;
      return param_1;
    }
    break;
  case 0x17: ;
    if (this[0x91] == (undefined1)0x0) {
      this[0x90] = *((undefined *)GEN_TOP((*(int *)(this + 0x84) + 0x88)));
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x4)) + 0)) = 0x17;
      (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x4)) + 2)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0x17;
      this[0x91] = (undefined1)0x1;
      (*(uint *)(gen_frame + 0xc)) = 0;
      (*(uint *)(gen_frame + 0x10)) = 0;
      (*(uint *)(gen_frame + 0x14)) = 0;
      (*(uint *)(gen_frame + 0x18)) = 0;
      (*(uint *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      F_005997b0(*(undefined * PTR32 *)(this + 0x70) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)));
      *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x10000;
      uVar2 = F_0059cc00(this GEN_EDX_ARG,0);
      return uVar2;
    }
    break;
  case 0x1d: ;
    if (this[0x90] != (undefined1)0x0) {
      this[0x93] = (undefined1)0x1;
      F_00557640(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG,param_1);
      (*(uint *)(gen_frame + 0x10)) = param_4[1];
      (*(uint *)(gen_frame + 0xc)) = *param_4;
      (*(uint *)(gen_frame + 0x18)) = param_4[3];
      (*(uint *)(gen_frame + 0x14)) = param_4[2];
      (*(uint *)(gen_frame + 0x1c)) = param_4[4];
      uVar4 = F_005997b0(*(undefined * PTR32 *)(this + 0x70) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)));
      uVar2 = 0;
      if (uVar4 != 0) {
        *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x10000;
        return param_3;
      }
    }
    break;
  case 0x21: ;
  case 0x22: ;
    if (this[0x90] != (undefined1)0x0) {
      if ((char)param_4[4] == '\x01') {
        F_0059caa0(this GEN_EDX_ARG,*(undefined4 *)(this + 0x8c));
        *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x10000;
        return param_3;
      }
      *(undefined2 *)(this + 0x90) = 0x100;
      F_00557640(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG,param_1);
      (*(uint *)(gen_frame + 0xc)) = *param_4;
      (*(uint *)(gen_frame + 0x10)) = param_4[1];
      (*(uint *)(gen_frame + 0x14)) = param_4[2];
      (*(uint *)(gen_frame + 0x18)) = param_4[3];
      (*(uint *)(gen_frame + 0x1c)) = param_4[4];
      if ((((this[0x92] != (undefined1)0x0) && (*(int *)(this + 0x84) != 0)) && (pvVar3 = *(undefined * PTR32 *)(this + 0x88), pvVar3 != (undefined *)0x0)) && (uVar2 = F_0056d250(pvVar3 GEN_EDX_ARG,0,0), uVar2 != 0)) {
        uVar2 = F_0056d330(pvVar3 GEN_EDX_ARG,param_4[2]);
        F_0058e4c0(this GEN_EDX_ARG,uVar2);
        pvVar3 = (undefined *)F_0056d250(*(undefined * PTR32 *)(this + 0x88) GEN_EDX_ARG,0,(uint)(ushort)param_4[2]);
        uVar2 = F_005627b0(pvVar3 GEN_EDX_ARG);
        F_005929b0(this GEN_EDX_ARG,uVar2);
      }
      uVar2 = F_005997b0(*(undefined * PTR32 *)(this + 0x70) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)));
      if (uVar2 != 0) {
        *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x10000;
      }
      if ((*((char *)GEN_TOP((*(int *)(this + 0x88) + 0x11f))) != '\0') && (*(int *)(this + 0x8c) != *((int *)GEN_TOP((*(int *)(this + 0x88) + 0xc0))))) {
        (*(uint *)(gen_frame + 0xc)) = 0;
        (*(uint *)(gen_frame + 0x10)) = 0;
        (*(uint *)(gen_frame + 0x14)) = 0;
        (*(uint *)(gen_frame + 0x18)) = 0;
        (*(uint *)(gen_frame + 0x1c)) = 0;
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        (*(uint *)(gen_frame + 0xc)) = *param_4;
        (*(uint *)(gen_frame + 0x14)) = param_4[2];
        (*(uint *)(gen_frame + 0x10)) = param_4[1];
        uVar2 = param_4[4];
        (*(uint *)(gen_frame + 0x18)) = param_4[3];
        pvVar3 = *(undefined * PTR32 *)(this + 0x70);
        (*(undefined4 *)(gen_frame + 0x4)) = 0x23;
        (*(uint *)(gen_frame + 0x1c)) = uVar2;
        F_005997b0(pvVar3 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)));
      }
      if (this[0x80] == (undefined1)0x1) {
        uVar5 = 10;
      }
      else {
        uVar5 = 0;
      }
      uVar2 = F_0059cc00(this GEN_EDX_ARG,uVar5);
      pvVar3 = REFG(void * PTR32, 0x1379860);
      if (uVar2 == 0) {
        uVar5 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)REFG(void * PTR32, 0x1379860) + 0x14))) + 0xcc)));
        uVar6 = 0;
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x84) + 0x38))))(*(int * PTR32 *)(this + 0x84) GEN_EDX_ARG);
        uVar2 = F_0059b300(pvVar3 GEN_EDX_ARG,uVar2,uVar5,uVar6);
        return uVar2;
      }
    }
    break;
  case 0x23: ;
    if ((this[0x90] == (undefined1)0x0) && (this[0x91] != (undefined1)0x0)) {
      F_00557640(&(*(undefined4 *)(gen_frame + 0x4)) GEN_EDX_ARG,param_1);
      (*(uint *)(gen_frame + 0x10)) = param_4[1];
      (*(uint *)(gen_frame + 0xc)) = *param_4;
      (*(uint *)(gen_frame + 0x18)) = param_4[3];
      (*(uint *)(gen_frame + 0x14)) = param_4[2];
      (*(uint *)(gen_frame + 0x1c)) = param_4[4];
      uVar4 = F_005997b0(*(undefined * PTR32 *)(this + 0x70) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)));
      uVar2 = 0;
      if (uVar4 != 0) {
        *(uint *)(param_3 + 0x14) = *(uint *)(param_3 + 0x14) | 0x10000;
        return param_3;
      }
    }
    break;
  default: ;
    goto switchD_005a3403_default;
  }
switchD_005a3403_default: ;
  return uVar2;
}

/* ref: Component::GUI2::AtkComponentWindow::vf5 */
GEN_FRAME uint GEN_THISCALL F_005a38b0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x5a38b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = F_005a1fa0(param_1 + 1 GEN_EDX_FWD,param_2);
  if (((*(byte *)((int)param_1 + 0x66) & 1) != 0) && ((undefined *)param_1[0x21] != (undefined *)0x0)) {
    iVar1 = *param_1;
    bVar2 = F_0055dd20((undefined *)param_1[0x21] GEN_EDX_ARG);
    uVar3 = ((code *)*(gen_code32 *)(iVar1 + 0x58))(param_1,(uint)bVar2);
  }
  return uVar3;
}

/* ref: Component::GUI2::AtkComponentIconText::vf5 */
GEN_FRAME uint GEN_THISCALL F_005a38f0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x5a38f0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_005a1fa0((int)param_1 + 4 GEN_EDX_FWD,param_2);
  if ((((*(char *)((int)param_1 + 0xa0) != '\0') &&
       (uVar2 = *(uint *)((int)param_1 + 0x88), uVar2 != 0)) && (*(int *)(uVar2 + 8) == 0)) &&
     (piVar1 = (int *)(uVar2 + 0xc), uVar2 = 0, *piVar1 != 0)) {
    uVar2 = F_00572c50(*piVar1);
    if (uVar2 == 2) {
      *(undefined1 *)((int)param_1 + 0xa0) = 0;
      uVar2 = F_00562ea0(param_1 GEN_EDX_ARG);
    }
  }
  return uVar2;
}

/* ref: Component::GUI2::AtkComponentDragDrop::vf5 */
GEN_FRAME uint GEN_THISCALL F_005a3950(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x5a3950u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  bool bVar6;
  float10 fVar7;
  float local_8;
  
  if ((*(byte *)((int)param_1 + 0xaa) & 0x40) != 0) {
    F_0056e340(param_1 GEN_EDX_FWD);
    *(byte *)((int)param_1 + 0xaa) = *(byte *)((int)param_1 + 0xaa) & 0xbf;
  }
  iVar3 = *(int *)((int)param_1 + 0x90);
  if (iVar3 != 0) {
    bVar4 = !((float10)*(float *)(iVar3 + 8) + (float10)param_2 < (float10)*(double *)&REFG(undefined, 0x10a1b58))
    ;
    if (bVar4) {
      local_8 = ((float)GEN_TOF(((float10)*(double *)&REFG(undefined, 0x10a1b58) - (float10)*(float *)(iVar3 + 8))));
    }
    else {
      local_8 = param_2;
    }
    fVar7 = (float10)local_8;
    *(float *)(iVar3 + 8) = ((float)GEN_TOF((fVar7 + (float10)*(float *)(iVar3 + 8))));
    iVar3 = *(int *)((int)param_1 + 0x88);
    if (iVar3 != 0) {
      fVar1 = ((float)GEN_TOF((((float10)GEN_TOD(**(float * PTR32 *)((int)param_1 + 0x90))) * fVar7 +
                     (float10)*(float *)(iVar3 + 0x38))));
      fVar2 = ((float)GEN_TOF((fVar7 * ((float10)GEN_TOD((*(float * PTR32 *)((int)param_1 + 0x90))[1])) +
                     (float10)*(float *)(iVar3 + 0x3c))));
      if (((*(uint *)(iVar3 + 0x88) & 1) == 0) &&
         ((fVar7 = (float10)fVar1, bVar6 = GEN_ISNAN((float10)*(float *)(iVar3 + 0x38)) || GEN_ISNAN(fVar7),
          bVar6 == (bVar6 || (float10)*(float *)(iVar3 + 0x38) == fVar7) ||
          (fVar7 = (float10)fVar2, bVar6 = GEN_ISNAN((float10)*(float *)(iVar3 + 0x3c)) || GEN_ISNAN(fVar7),
          bVar6 == (bVar6 || (float10)*(float *)(iVar3 + 0x3c) == fVar7))))) {
        *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 1;
      }
      *(float *)(iVar3 + 0x38) = fVar1;
      *(float *)(iVar3 + 0x3c) = fVar2;
    }
    if (bVar4) {
      if (*(int *)((int)param_1 + 0x90) != 0) {
        F_00406ad0(*(int *)((int)param_1 + 0x90));
        *(undefined4 *)((int)param_1 + 0x90) = 0;
      }
      F_0056e230(param_1 GEN_EDX_ARG);
    }
  }
  uVar5 = F_005a1fa0((int)param_1 + 4 GEN_EDX_ARG,param_2);
  return uVar5;
}

/* ref: FUN_005a3a80 */
GEN_NOFRAME uint GEN_THISCALL F_005a3a80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5a3a80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  F_00582510(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x16c) =
       (*(undefined * PTR32 (*)[3])REFP(0x10a0b14));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x170) =
       (*(undefined * PTR32 (*)[7])REFP(0x10a09dc));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a1d6c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x16c) = (*(undefined * PTR32 (*)[3])REFP(0x10a1d5c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x170) = (*(undefined * PTR32 (*)[7])REFP(0x10a1d3c));
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined1 *)((int)this + 0x17c) = 0;
  *(undefined2 *)((int)this + 0x1f0) = 0;
  *(undefined4 *)((int)this + 500) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1f8) = 0x10001;
  F_0042b630((int)this + 0x1fc GEN_EDX_ARG);
  F_0042b630((int)this + 0x250 GEN_EDX_ARG);
  F_0042b630((int)this + 0x2a4 GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x2fc) = 0;
  *(undefined4 *)((int)this + 0x304) = 0xffffffff;
  *(undefined1 *)((int)this + 0x33a) = 1;
  *(undefined4 *)((int)this + 0x350) = 0;
  puVar1 = (undefined4 *)((int)this + 0x354);
  iVar2 = 0xc;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  F_00c48350((undefined4 *)((int)this + 0x174),0,0x7c);
  return (uint)this;
}

/* ref: FUN_005a3b50 */
GEN_FRAME uint GEN_THISCALL F_005a3b50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5a3b50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 * this_00;
  uint uVar2;
  undefined4 * puVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a1d6c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x16c) = (*(undefined * PTR32 (*)[3])REFP(0x10a1d5c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x170) = (*(undefined * PTR32 (*)[7])REFP(0x10a1d3c));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = this;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1379860) + 0x34) + 0x1c))))(*(int * PTR32 *)(REFG(int, 0x1379860) + 0x34) GEN_EDX_FWD);
  if ((char)uVar2 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1379860) + 0x34) + 0x18))))(*(int * PTR32 *)(REFG(int, 0x1379860) + 0x34) GEN_EDX_ARG);
  }
  (*(int *)(gen_frame + 0x8)) = 0xc;
  puVar3 = (undefined4 *)((int)this + 0x3bc);
  do {
    if (((uint)puVar3[-2] >> 5 & 1) != 0) {
      this_00 = (undefined4 *)puVar3[-1];
      if (this_00 != (undefined4 *)0x0) {
        uVar2 = puVar3[-2] & 0xf;
        if (uVar2 == 9) {
          F_00488040(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),*this_00,this_00[1]);
          F_00488dc0(this_00 GEN_EDX_ARG);
          F_00406ad0(this_00);
        }
        else if ((uVar2 == 6) || (uVar2 == 7)) {
          F_00406ad0(this_00);
          puVar3[-1] = 0;
        }
      }
      puVar3[-1] = 0;
      this = (*(undefined4 * PTR32 *)(gen_frame + 0x4));
    }
    iVar1 = (*(int *)(gen_frame + 0x8)) - 1;
    (*(int *)(gen_frame + 0x8)) = iVar1;
    puVar3[-2] = 0;
    puVar3 = puVar3 - 2;
  } while (-1 < iVar1);
  F_0042c880((undefined4 *)((int)this + 0x2a4) GEN_EDX_ARG);
  F_0042c880((undefined4 *)((int)this + 0x250) GEN_EDX_ARG);
  F_0042c880((undefined4 *)((int)this + 0x1fc) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x170) =
       (*(undefined * PTR32 (*)[7])REFP(0x10a09dc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x16c) =
       (*(undefined * PTR32 (*)[3])REFP(0x10a0b14));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a14ec));
  F_0042c880((undefined4 *)((int)this + 0xf0) GEN_EDX_ARG);
  F_0042c880((undefined4 *)((int)this + 0x9c) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x10a0ffc));
  uVar2 = F_0057f460((undefined4 *)((int)this + 4) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  return uVar2;
}

/* ref: Component::GUI2::AtkComponentNumericInput::vf5 */
GEN_FRAME uint GEN_THISCALL F_005a3c80(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x5a3c80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = F_005a1fa0((int)param_1 + 4 GEN_EDX_FWD,param_2);
  if (*(char *)((int)param_1 + 0x191) != '\0') {
    if (*(int *)((int)param_1 + 0x144) == 0) {
      uVar1 = F_0057f8d0(*(undefined * PTR32 *)(REFG(int, 0x1379860) + 0x14) GEN_EDX_ARG,*(undefined4 *)((int)param_1 + 0x6c));
      *(uint *)((int)param_1 + 0x144) = uVar1;
    }
    uVar1 = *((uint *)GEN_TOP((*(int *)((int)param_1 + 0x144) + 0xf4))) & 0xf00000;
    if (uVar1 == 0x300000) {
      uVar1 = F_0058b8b0(param_1 GEN_EDX_ARG);
      *(undefined1 *)((int)param_1 + 0x191) = 0;
    }
  }
  return uVar1;
}

/* ref: FUN_005a3cf0 */
GEN_FRAME uint GEN_THISCALL F_005a3cf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x5a3cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  int param_6 = (int)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  short sVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  byte * pbVar8;
  int iVar9;
  uint uVar10;
  char * pcVar11;
  int * piVar12;
  undefined4 * puVar13;
  uint * puVar14;
  undefined * pvVar15;
  int iVar16;
  undefined * pvVar17;
  undefined4 * puVar18;
  uint * puVar19;
  bool bVar20;
  float10 fVar21;
  float fVar22;
  float fVar23;
  
  uVar5 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  ((uint *)(gen_frame + 0x6c))[3] = uVar5;
  (*(int *)(gen_frame + 0x2c)) = param_3;
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = this;
  (*(int *)(gen_frame + 0x28)) = param_6;
  uVar10 = param_1;
  if (param_1 == 0) {
    iVar9 = *(int *)((int)this + 0xd4);
    if (iVar9 != 0) {
      *(uint *)(iVar9 + 0x84) = *(uint *)(iVar9 + 0x84) & 0xffefffff;
      *(uint *)(iVar9 + 0x88) = *(uint *)(iVar9 + 0x88) | 0x80;
      F_00c47745(uVar5 ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_FWD);
      return 0;
    }
  }
  else {
    (*(uint *)(gen_frame + 0x34)) = (uint)*(ushort *)((int)this + 0xa2);
    (*(uint *)(gen_frame + 0x38)) = 0;
    if (param_1 != 0) {
      do {
        iVar9 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + (*(uint *)(gen_frame + 0x38)) * 4 + 0x13c);
        if (((((iVar9 == 0) || (*(ushort *)(iVar9 + 0x18) < 1000)) ||
             (iVar9 = *(int *)(iVar9 + 0x8c), iVar9 == 0)) ||
            (((*(byte *)(iVar9 + 0x60) & 1) == 0 || ((*(byte *)(iVar9 + 0x60) & 4) == 0)))) ||
           ((*(char *)(iVar9 + 0x1c) != '\x01' || (*((char *)GEN_TOP((*(int *)(iVar9 + 0xc) + 0xf))) != '\x15')
            ))) {
          (*(undefined * PTR32 *)(gen_frame + 0x4c)) = (undefined *)0x0;
          iVar16 = 0;
        }
        else {
          iVar16 = *(int *)(iVar9 + 0x70);
          (*(undefined * PTR32 *)(gen_frame + 0x4c)) = (undefined *)iVar9;
        }
        fVar22 = (float)(int)(short)(*(uint *)(gen_frame + 0x34));
        (*(float *)(gen_frame + 0x14)) = fVar22;
        if (iVar16 != 0) {
          if (((*(uint *)(iVar16 + 0x88) & 1) == 0) &&
             (fVar21 = (float10)(int)(short)(*(uint *)(gen_frame + 0x34)),
             bVar20 = GEN_ISNAN((float10)*(float *)(iVar16 + 0x3c)) || GEN_ISNAN(fVar21),
             bVar20 == (bVar20 || (float10)*(float *)(iVar16 + 0x3c) == fVar21))) {
            *(uint *)(iVar16 + 0x88) = *(uint *)(iVar16 + 0x88) | 1;
          }
          *(float *)(iVar16 + 0x3c) = fVar22;
        }
        bVar3 = *(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0x60) & 1;
        (*(byte *)(gen_frame + 0x4b)) = bVar3;
        if ((bVar3 == 0) || (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0x94) == 0)) {
LAB_005a3e79: ;
          (*(undefined * PTR32 *)(gen_frame + 0x30)) = (undefined *)0x0;
        }
        else {
          iVar9 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0xc);
          pvVar15 = (undefined *)0x0;
          (*(char * PTR32 *)(gen_frame + 0x50)) = (char *)0x0;
          if ((iVar9 != 0) &&
             ((uVar5 = *(uint *)(iVar9 + 4), uVar5 != 0 && (uVar6 = 0, uVar5 != 0)))) {
            piVar12 = *(int * PTR32 *)(iVar9 + 8);
            do {
              if (*(int *)(*piVar12 + 4) == *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0x94)) {
                pvVar15 = ((undefined *)GEN_TOP((*(int * PTR32 *)(iVar9 + 8))[uVar6]));
                goto LAB_005a3e6b;
              }
              uVar6 = uVar6 + 1;
              piVar12 = piVar12 + 1;
            } while (uVar6 < uVar5);
            pvVar15 = (undefined *)0x0;
          }
LAB_005a3e6b: ;
          if ((pvVar15 == (undefined *)0x0) || ((*(undefined * PTR32 *)(gen_frame + 0x30)) = pvVar15, *(short *)((int)pvVar15 + 0x18) != 3)
             ) goto LAB_005a3e79;
        }
        pvVar15 = (*(undefined * PTR32 *)(gen_frame + 0x30));
        if ((bVar3 == 0) || (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0x90) == 0)) {
LAB_005a3ed8: ;
          (*(uint *)(gen_frame + 0x44)) = 0;
        }
        else {
          iVar9 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0xc);
          iVar16 = 0;
          (*(char * PTR32 *)(gen_frame + 0x50)) = (char *)0x0;
          if ((iVar9 != 0) &&
             ((uVar5 = *(uint *)(iVar9 + 4), uVar5 != 0 && (uVar6 = 0, uVar5 != 0)))) {
            piVar12 = *(int * PTR32 *)(iVar9 + 8);
            do {
              if (*(int *)(*piVar12 + 4) == *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0x90)) {
                iVar16 = (*(int * PTR32 *)(iVar9 + 8))[uVar6];
                goto LAB_005a3eca;
              }
              uVar6 = uVar6 + 1;
              piVar12 = piVar12 + 1;
            } while (uVar6 < uVar5);
            iVar16 = 0;
          }
LAB_005a3eca: ;
          if ((iVar16 == 0) || ((*(uint *)(gen_frame + 0x44)) = iVar16, *(short *)(iVar16 + 0x18) != 2))
          goto LAB_005a3ed8;
        }
        if ((bVar3 == 0) || (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0x98) == 0)) {
LAB_005a3f35: ;
          (*(undefined * PTR32 *)(gen_frame + 0x4c)) = (undefined *)0x0;
        }
        else {
          iVar9 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0xc);
          pvVar17 = (undefined *)0x0;
          (*(char * PTR32 *)(gen_frame + 0x50)) = (char *)0x0;
          if ((iVar9 != 0) &&
             ((uVar5 = *(uint *)(iVar9 + 4), uVar5 != 0 && (uVar6 = 0, uVar5 != 0)))) {
            piVar12 = *(int * PTR32 *)(iVar9 + 8);
            do {
              if (*(int *)(*piVar12 + 4) == *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0x98)) {
                pvVar17 = ((undefined *)GEN_TOP((*(int * PTR32 *)(iVar9 + 8))[uVar6]));
                goto LAB_005a3f27;
              }
              uVar6 = uVar6 + 1;
              piVar12 = piVar12 + 1;
            } while (uVar6 < uVar5);
            pvVar17 = (undefined *)0x0;
          }
LAB_005a3f27: ;
          if ((pvVar17 == (undefined *)0x0) || ((*(undefined * PTR32 *)(gen_frame + 0x4c)) = pvVar17, *(short *)((int)pvVar17 + 0x18) != 3)
             ) goto LAB_005a3f35;
        }
        pbVar8 = (byte *)((*(int *)(gen_frame + 0x2c)) + param_4 * 8);
        param_4 = param_4 + 1;
        if ((*pbVar8 & 0xf) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(pbVar8 + 4);
        }
        (*(undefined4 *)(gen_frame + 0x54)) = 6;
        (*(undefined4 *)(gen_frame + 0x58)) = uVar7;
        if ((*(undefined * PTR32 *)(gen_frame + 0x30)) == (undefined *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = (uint)*(ushort *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x7c);
        }
        (*(undefined4 *)(gen_frame + 0x5c)) = 4;
        (*(uint *)(gen_frame + 0x60)) = uVar5;
        if ((*(undefined * PTR32 *)(gen_frame + 0x30)) == (undefined *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = (uint)(*(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0xfc) >> 4);
        }
        (*(undefined4 *)(gen_frame + 0x64)) = 4;
        (*(uint *)(gen_frame + 0x68)) = uVar5;
        if ((*(undefined * PTR32 *)(gen_frame + 0x30)) == (undefined *)0x0) {
          bVar3 = 0;
        }
        else {
          bVar3 = *(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0xfd);
        }
        ((uint *)(gen_frame + 0x6c))[1] = (uint)bVar3;
        pbVar8 = (byte *)((*(int *)(gen_frame + 0x2c)) + (*(int *)(gen_frame + 0x28)) * 8);
        bVar3 = *pbVar8;
        ((uint *)(gen_frame + 0x6c))[0] = 4;
        (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 1;
        if ((bVar3 & 0xf) == 0) {
          pcVar11 = (char *)0x0;
        }
        else {
          pcVar11 = *(char * PTR32 *)(pbVar8 + 4);
        }
        (*(char * PTR32 *)(gen_frame + 0x50)) = pcVar11;
        pbVar8 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1379860) + 0x38) + 4))))
                                   (*(int * PTR32 *)(REFG(int, 0x1379860) + 0x38) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x20)),0x2a,4,&(*(undefined4 *)(gen_frame + 0x54)))));
        if ((*pbVar8 & 0xf) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(pbVar8 + 4);
        }
        F_00584110(pvVar15 GEN_EDX_ARG,uVar7);
        puVar13 = (*(undefined4 * PTR32 *)(gen_frame + 0x24));
        if (((*(uint *)(gen_frame + 0x20)) >> 5 & 1) != 0) {
          if ((*(undefined4 * PTR32 *)(gen_frame + 0x24)) != (undefined4 *)0x0) {
            uVar5 = (*(uint *)(gen_frame + 0x20)) & 0xf;
            if (uVar5 == 9) {
              F_00488040((*(undefined4 * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),*(*(undefined4 * PTR32 *)(gen_frame + 0x24)),(*(undefined4 * PTR32 *)(gen_frame + 0x24))[1]);
              F_00488dc0(puVar13 GEN_EDX_ARG);
            }
            else if ((uVar5 != 6) && (uVar5 != 7)) goto LAB_005a403d;
            F_00406ad0(puVar13);
          }
LAB_005a403d: ;
          (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = (undefined4 *)0x0;
        }
        pbVar8 = (byte *)((*(int *)(gen_frame + 0x2c)) + param_5 * 8);
        param_5 = param_5 + 1;
        bVar3 = *pbVar8;
        (*(uint *)(gen_frame + 0x20)) = 0;
        if ((bVar3 & 0xf) == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = *(int *)(pbVar8 + 4);
        }
        if ((*(uint *)(gen_frame + 0x44)) != 0) {
          *(uint *)((*(uint *)(gen_frame + 0x44)) + 0x84) =
               *(uint *)((*(uint *)(gen_frame + 0x44)) + 0x84) ^
               ((uint)(iVar9 != 0) << 0x14 ^ *(uint *)((*(uint *)(gen_frame + 0x44)) + 0x84)) & 0x100000;
          *(uint *)((*(uint *)(gen_frame + 0x44)) + 0x88) =
               *(uint *)((*(uint *)(gen_frame + 0x44)) + 0x88) ^
               ((uint)(iVar9 == 0) << 7 ^ *(uint *)((*(uint *)(gen_frame + 0x44)) + 0x88)) & 0x80;
        }
        F_00584110((*(undefined * PTR32 *)(gen_frame + 0x4c)) GEN_EDX_ARG,pcVar11);
        (*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x108cc50);
        uVar5 = 0;
        if (pvVar15 == (undefined *)0x0) {
          (*(uint *)(gen_frame + 0x44)) = 0;
LAB_005a41bf: ;
          (*(uint *)(gen_frame + 0x40)) = uVar5;
        }
        else {
          uVar5 = F_005684e0(pvVar15 GEN_EDX_ARG,0);
          if (uVar5 != 0) {
            uVar6 = F_0042a990((int)pvVar15 + 0x9c GEN_EDX_ARG);
            fVar22 = REFG(float, 0x10a0da0);
            fVar23 = REFG(float, 0x10a0da0);
            if ((*(byte *)(uVar5 + 0x148) & 2) != 0) {
              iVar9 = *(int *)(uVar5 + 0x13c);
              (*(uint *)(gen_frame + 0x44)) = iVar9;
              if (uVar6 == 0) {
                fVar22 = 0.0;
                fVar23 = fVar22;
              }
              else {
                piVar12 = (int *)(iVar9 + 0x144);
                ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar9 + 0x144) + 0x24))))(piVar12,uVar5,uVar6);
                *(undefined1 *)(iVar9 + 0x2a8) = 0;
                *(undefined4 *)(iVar9 + 0x1f8) = 0;
                *(uint *)(iVar9 + 0x1fc) = (*(uint *)(gen_frame + 0x40));
                if ((((*((byte *)GEN_TOP((*(int *)(iVar9 + 0x14c) + 0x148))) & 2) != 0) &&
                    (bVar3 = *((byte *)GEN_TOP((*(int *)(iVar9 + 0x150) + 0x6e))), (bVar3 & 1) != 0)) &&
                   ((bVar3 & 2) != 0)) {
                  ((GEN_TCODE *)*(gen_code32 *)(*piVar12 + 4))(piVar12 GEN_EDX_ARG);
                  F_005662b0(piVar12 GEN_EDX_ARG,uVar6);
                  ((GEN_TCODE *)*(gen_code32 *)(*piVar12 + 8))(piVar12 GEN_EDX_ARG);
                }
                fVar22 = *(float *)((*(uint *)(gen_frame + 0x44)) + 0x284);
                (*(float *)(gen_frame + 0xc)) = fVar22;
                (*(float *)(gen_frame + 0x10)) = *(float *)((*(uint *)(gen_frame + 0x44)) + 0x288);
                fVar23 = *(float *)((*(uint *)(gen_frame + 0x44)) + 0x288);
              }
            }
            puVar13 = (undefined4 *)(uVar5 + 0xa8);
            puVar18 = (undefined4 *)(uVar5 + 100);
            for (iVar9 = 0x11; iVar9 != 0; iVar9 = iVar9 - 1) {
              *puVar18 = *puVar13;
              puVar13 = puVar13 + 1;
              puVar18 = puVar18 + 1;
            }
            (*(uint *)(gen_frame + 0x44)) = (int)fVar22 & 0xffff;
            uVar5 = (int)fVar23 & 0xffff;
            goto LAB_005a41bf;
          }
          (*(uint *)(gen_frame + 0x40)) = 0;
          (*(uint *)(gen_frame + 0x44)) = 0;
        }
        pvVar15 = (*(undefined * PTR32 *)(gen_frame + 0x30));
        uVar7 = *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0xf0);
        pvVar17 = (undefined *)F_005684e0((*(undefined * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG,1);
        uVar4 = F_00576af0(pvVar17 GEN_EDX_ARG,uVar7);
        puVar13 = (undefined4 *)((int)pvVar17 + 0xa8);
        puVar18 = (undefined4 *)((int)pvVar17 + 100);
        for (iVar9 = 0x11; iVar9 != 0; iVar9 = iVar9 - 1) {
          *puVar18 = *puVar13;
          puVar13 = puVar13 + 1;
          puVar18 = puVar18 + 1;
        }
        if (uVar4 + 1 < 2) {
          pcVar11 = (*(char * PTR32 *)(gen_frame + 0x50));
          do {
            cVar2 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar2 != '\0');
          if ((pcVar11 != (*(char * PTR32 *)(gen_frame + 0x50)) + 1) &&
             ((*(char * PTR32 *)(gen_frame + 0x50)) = (char *)((*(uint *)(gen_frame + 0x44)) & 0xffff),
             fVar21 = (float10)(int)((*(uint *)(gen_frame + 0x44)) & 0xffff) + (float10)*(float *)((int)pvVar15 + 0x30),
             (!GEN_ISNAN(fVar21) && !GEN_ISNAN((float10)*(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0x30))) &&
             !(fVar21 <= (float10)*(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0x30)))) goto LAB_005a4277;
          if ((*(undefined * PTR32 *)(gen_frame + 0x4c)) != (undefined *)0x0) {
            fVar22 = (float)(int)*(short *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0xa8);
            (*(float *)(gen_frame + 0x18)) = fVar22;
            if (((*(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0x88) & 1) == 0) &&
               (fVar21 = (float10)(int)*(short *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0xa8),
               bVar20 = GEN_ISNAN((float10)*(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0x3c)) || GEN_ISNAN(fVar21),
               bVar20 == (bVar20 || (float10)*(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0x3c) == fVar21))) {
              *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0x88) = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0x88) | 1;
            }
            *(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0x3c) = fVar22;
          }
        }
        else {
LAB_005a4277: ;
          if ((*(undefined * PTR32 *)(gen_frame + 0x4c)) == (undefined *)0x0) {
            bVar3 = 0;
          }
          else {
            bVar3 = *(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0x116);
            if (bVar3 == 0) {
              bVar3 = *(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0xfd);
            }
          }
          if ((*(undefined * PTR32 *)(gen_frame + 0x4c)) != (undefined *)0x0) {
            iVar9 = (int)(short)(*(short *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0xa8) + (ushort)bVar3);
            fVar22 = (float)iVar9;
            (*(float *)(gen_frame + 0x1c)) = fVar22;
            if (((*(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0x88) & 1) == 0) &&
               (fVar21 = (float10)iVar9,
               bVar20 = GEN_ISNAN((float10)*(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0x3c)) || GEN_ISNAN(fVar21),
               bVar20 == (bVar20 || (float10)*(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0x3c) == fVar21))) {
              *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0x88) = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0x88) | 1;
            }
            *(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0x3c) = fVar22;
          }
          if ((int)(((*(uint *)(gen_frame + 0x40)) & 0xffff) - (uint)*(ushort *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0xa0)) <=
              (int)(uint)bVar3) {
            (*(uint *)(gen_frame + 0x40)) = (uint)*(ushort *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0xa0) + (uint)bVar3 & 0xffff;
          }
        }
        iVar9 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + (*(uint *)(gen_frame + 0x38)) * 4 + 0x13c);
        sVar1 = (short)(*(uint *)(gen_frame + 0x34)) +
                (*(short *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0xa4) - *(short *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0xa0)) +
                (short)(*(uint *)(gen_frame + 0x40));
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x34)) + 0)) = sVar1;
        (*(uint *)(gen_frame + 0x34)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x34)) + 2)),sVar1);
        if (iVar9 != 0) {
          *(uint *)(iVar9 + 0x84) = *(uint *)(iVar9 + 0x84) | 0x100000;
          *(uint *)(iVar9 + 0x88) = *(uint *)(iVar9 + 0x88) & 0xffffff7f;
        }
        iVar9 = 3;
        puVar14 = ((uint *)(gen_frame + 0x6c)) + 3;
        do {
          puVar19 = puVar14 - 2;
          if ((puVar14[-3] >> 5 & 1) != 0) {
            puVar13 = (undefined4 *)*puVar19;
            if (puVar13 != (undefined4 *)0x0) {
              uVar5 = puVar14[-3] & 0xf;
              if (uVar5 == 9) {
                F_00488040(puVar13 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),*puVar13,puVar13[1]);
                F_00488dc0(puVar13 GEN_EDX_ARG);
                F_00406ad0(puVar13);
              }
              else if ((uVar5 == 6) || (uVar5 == 7)) {
                F_00406ad0(puVar13);
                *puVar19 = 0;
              }
            }
            *puVar19 = 0;
          }
          iVar9 = iVar9 - 1;
          puVar14[-3] = 0;
          puVar14 = puVar19;
        } while (-1 < iVar9);
        uVar5 = (*(uint *)(gen_frame + 0x38)) + 1;
        (*(uint *)(gen_frame + 0x38)) = uVar5;
      } while (uVar5 < param_1);
    }
    if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0xd4) != 0) {
      *((short *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0xd4) + 0x7e))) =
           ((*(short *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0xa6) - *(short *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0xa4)) -
           *(short *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0xa2)) + (short)(*(uint *)(gen_frame + 0x34));
    }
    if (param_1 < 5) {
      puVar14 = (uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + param_1 * 4 + 0x13c);
      iVar9 = 5 - param_1;
      do {
        uVar10 = *puVar14;
        if (uVar10 != 0) {
          *(uint *)(uVar10 + 0x84) = *(uint *)(uVar10 + 0x84) & 0xffefffff;
          *(uint *)(uVar10 + 0x88) = *(uint *)(uVar10 + 0x88) | 0x80;
        }
        puVar14 = puVar14 + 1;
        iVar9 = iVar9 - 1;
      } while (iVar9 != 0);
    }
    iVar9 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0xd4);
    if (iVar9 != 0) {
      *(uint *)(iVar9 + 0x84) = *(uint *)(iVar9 + 0x84) | 0x100000;
      *(uint *)(iVar9 + 0x88) = *(uint *)(iVar9 + 0x88) & 0xffffff7f;
    }
  }
  F_00c47745(((uint *)(gen_frame + 0x6c))[3] ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
  return uVar10;
}

/* ref: FUN_005a4450 */
GEN_FRAME uint GEN_THISCALL F_005a4450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x5a4450u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  undefined * pvVar5;
  uint uVar6;
  undefined4 uVar7;
  byte * pbVar8;
  uint uVar9;
  int * piVar10;
  int iVar11;
  int * piVar12;
  undefined4 * puVar13;
  undefined4 * puVar14;
  uint * puVar15;
  uint * puVar16;
  bool bVar17;
  float10 fVar18;
  float fVar19;
  
  uVar4 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  ((uint *)(gen_frame + 0x5c))[3] = uVar4;
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = this;
  if (param_1 == 0) {
    uVar6 = *(uint *)((int)this + 0xdc);
    uVar9 = 0;
    if (uVar6 != 0) {
      *(uint *)(uVar6 + 0x84) = *(uint *)(uVar6 + 0x84) & 0xffefffff;
      *(uint *)(uVar6 + 0x88) = *(uint *)(uVar6 + 0x88) | 0x80;
      F_00c47745(uVar4 ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_FWD);
      return uVar6;
    }
  }
  else {
    pvVar5 = *(undefined * PTR32 *)((int)this + 0xe0);
    if ((pvVar5 == (undefined *)0x0) || (*(short *)((int)pvVar5 + 0x18) != 3)) {
      pvVar5 = (undefined *)0x0;
    }
    F_00584110(pvVar5 GEN_EDX_ARG,param_5);
    if (*(int *)((int)this + 0xdc) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0xdc) + 0x7e)));
    }
    if (*(int *)((int)this + 0xe4) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0xe4) + 0x7e)));
    }
    if (*(int *)((int)this + 0xe0) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0xe0) + 0x7e)));
    }
    (*(int *)(gen_frame + 0x18)) = (uVar4 - uVar6) - uVar9;
    (*(int *)(gen_frame + 0x38)) = 0;
    (*(uint *)(gen_frame + 0x34)) = 0;
    if (param_1 != 0) {
      do {
        iVar11 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + (*(uint *)(gen_frame + 0x34)) * 4 + 0x150);
        (*(int *)(gen_frame + 0x30)) = iVar11;
        if ((((((iVar11 == 0) || (*(ushort *)(iVar11 + 0x18) < 1000)) ||
              (iVar11 = *(int *)(iVar11 + 0x8c), iVar11 == 0)) ||
             (((*(byte *)(iVar11 + 0x60) & 1) == 0 || ((*(byte *)(iVar11 + 0x60) & 4) == 0)))) ||
            (*(char *)(iVar11 + 0x1c) != '\x01')) ||
           (*((char *)GEN_TOP((*(int *)(iVar11 + 0xc) + 0xf))) != '\x15')) {
          iVar11 = 0;
        }
        bVar2 = *(byte *)(iVar11 + 0x60) & 1;
        (*(byte *)(gen_frame + 0x3f)) = bVar2;
        if (((bVar2 != 0) && (*(int *)(iVar11 + 0x94) != 0)) &&
           ((iVar1 = *(int *)(iVar11 + 0xc), iVar1 != 0 &&
            ((uVar4 = *(uint *)(iVar1 + 4), uVar4 != 0 && (uVar9 = 0, uVar4 != 0)))))) {
          piVar12 = *(int * PTR32 *)(iVar1 + 8);
          (*(int * PTR32 *)(gen_frame + 0x40)) = piVar12;
          piVar10 = piVar12;
          do {
            if (*(int *)(*piVar10 + 4) == *(int *)(iVar11 + 0x94)) {
              pvVar5 = (undefined *)piVar12[uVar9];
              if ((pvVar5 != (undefined *)0x0) && (*(short *)((int)pvVar5 + 0x18) == 3)) {
                (*(int * PTR32 *)(gen_frame + 0x40)) = pvVar5;
                goto LAB_005a45b4;
              }
              break;
            }
            uVar9 = uVar9 + 1;
            piVar10 = piVar10 + 1;
          } while (uVar9 < uVar4);
        }
        (*(int * PTR32 *)(gen_frame + 0x40)) = (undefined *)0x0;
LAB_005a45b4: ;
        piVar12 = (*(int * PTR32 *)(gen_frame + 0x40));
        if ((((bVar2 != 0) && (*(int *)(iVar11 + 0x90) != 0)) &&
            (iVar1 = *(int *)(iVar11 + 0xc), iVar1 != 0)) &&
           ((uVar4 = *(uint *)(iVar1 + 4), uVar4 != 0 && (uVar9 = 0, uVar4 != 0)))) {
          piVar10 = *(int * PTR32 *)(iVar1 + 8);
          do {
            if (*(int *)(*piVar10 + 4) == *(int *)(iVar11 + 0x90)) {
              iVar11 = (*(int * PTR32 *)(iVar1 + 8))[uVar9];
              if ((iVar11 != 0) && (*(short *)(iVar11 + 0x18) == 3)) goto LAB_005a45f4;
              break;
            }
            uVar9 = uVar9 + 1;
            piVar10 = piVar10 + 1;
          } while (uVar9 < uVar4);
        }
        iVar11 = 0;
LAB_005a45f4: ;
        if ((*((byte *)GEN_TOP((param_3 + ((*(uint *)(gen_frame + 0x34)) + param_4) * 8))) & 0xf) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *((undefined4 *)GEN_TOP((param_3 + ((*(uint *)(gen_frame + 0x34)) + param_4) * 8 + 4)));
        }
        (*(undefined4 *)(gen_frame + 0x44)) = 6;
        (*(undefined4 *)(gen_frame + 0x48)) = uVar7;
        if ((*(int * PTR32 *)(gen_frame + 0x40)) == (undefined *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = (uint)*(ushort *)((int)(*(int * PTR32 *)(gen_frame + 0x40)) + 0x7c);
        }
        (*(undefined4 *)(gen_frame + 0x4c)) = 4;
        (*(uint *)(gen_frame + 0x50)) = uVar4;
        if ((*(int * PTR32 *)(gen_frame + 0x40)) == (undefined *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = (uint)(*(byte *)((int)(*(int * PTR32 *)(gen_frame + 0x40)) + 0xfc) >> 4);
        }
        (*(undefined4 *)(gen_frame + 0x54)) = 4;
        (*(uint *)(gen_frame + 0x58)) = uVar4;
        if ((*(int * PTR32 *)(gen_frame + 0x40)) == (undefined *)0x0) {
          bVar2 = 0;
        }
        else {
          bVar2 = *(byte *)((int)(*(int * PTR32 *)(gen_frame + 0x40)) + 0xfd);
        }
        ((uint *)(gen_frame + 0x5c))[0] = 4;
        ((uint *)(gen_frame + 0x5c))[1] = (uint)bVar2;
        pbVar8 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1379860) + 0x38) + 4))))
                                   (*(int * PTR32 *)(REFG(int, 0x1379860) + 0x38) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x24)),0x2a,4,&(*(undefined4 *)(gen_frame + 0x44)))));
        if ((*pbVar8 & 0xf) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(pbVar8 + 4);
        }
        F_00584110(piVar12 GEN_EDX_ARG,uVar7);
        puVar13 = (*(undefined4 * PTR32 *)(gen_frame + 0x28));
        if (((*(uint *)(gen_frame + 0x24)) >> 5 & 1) != 0) {
          if ((*(undefined4 * PTR32 *)(gen_frame + 0x28)) != (undefined4 *)0x0) {
            uVar4 = (*(uint *)(gen_frame + 0x24)) & 0xf;
            if (uVar4 == 9) {
              F_00488040((*(undefined4 * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),*(*(undefined4 * PTR32 *)(gen_frame + 0x28)),(*(undefined4 * PTR32 *)(gen_frame + 0x28))[1]);
              F_00488dc0(puVar13 GEN_EDX_ARG);
            }
            else if ((uVar4 != 6) && (uVar4 != 7)) goto LAB_005a4707;
            F_00406ad0(puVar13);
          }
LAB_005a4707: ;
          (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = (undefined4 *)0x0;
        }
        (*(uint *)(gen_frame + 0x24)) = 0;
        if (piVar12 == (undefined *)0x0) {
          sVar3 = 0;
        }
        else {
          fVar19 = (float)(int)(short)(*(int *)(gen_frame + 0x38));
          (*(float *)(gen_frame + 0x1c)) = fVar19;
          if (((*(uint *)((int)piVar12 + 0x88) & 1) == 0) &&
             (fVar18 = (float10)(int)(short)(*(int *)(gen_frame + 0x38)),
             bVar17 = GEN_ISNAN((float10)*(float *)((int)piVar12 + 0x3c)) || GEN_ISNAN(fVar18),
             bVar17 == (bVar17 || (float10)*(float *)((int)piVar12 + 0x3c) == fVar18))) {
            *(uint *)((int)piVar12 + 0x88) = *(uint *)((int)piVar12 + 0x88) | 1;
          }
          *(float *)((int)piVar12 + 0x3c) = fVar19;
          sVar3 = (short)(int)fVar19;
        }
        if (iVar11 != 0) {
          fVar19 = (float)(int)sVar3;
          (*(float *)(gen_frame + 0x20)) = fVar19;
          if (((*(uint *)(iVar11 + 0x88) & 1) == 0) &&
             (fVar18 = (float10)(int)sVar3,
             bVar17 = GEN_ISNAN((float10)*(float *)(iVar11 + 0x3c)) || GEN_ISNAN(fVar18),
             bVar17 == (bVar17 || (float10)*(float *)(iVar11 + 0x3c) == fVar18))) {
            *(uint *)(iVar11 + 0x88) = *(uint *)(iVar11 + 0x88) | 1;
          }
          *(float *)(iVar11 + 0x3c) = fVar19;
        }
        if ((*(int *)(gen_frame + 0x30)) != 0) {
          *(uint *)((*(int *)(gen_frame + 0x30)) + 0x84) = *(uint *)((*(int *)(gen_frame + 0x30)) + 0x84) | 0x100000;
          *(uint *)((*(int *)(gen_frame + 0x30)) + 0x88) = *(uint *)((*(int *)(gen_frame + 0x30)) + 0x88) & 0xffffff7f;
        }
        (*(int *)(gen_frame + 0x30)) = REFG(undefined4, 0x108cc50);
        if (piVar12 == (undefined *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar9 = F_005684e0(piVar12 GEN_EDX_ARG,0);
          uVar4 = 0;
          if (uVar9 != 0) {
            uVar4 = F_0042a990((int)piVar12 + 0x9c GEN_EDX_ARG);
            fVar19 = REFG(float, 0x10a0da0);
            if ((*(byte *)(uVar9 + 0x148) & 2) != 0) {
              pvVar5 = *(undefined * PTR32 *)(uVar9 + 0x13c);
              (*(int * PTR32 *)(gen_frame + 0x40)) = pvVar5;
              if (uVar4 == 0) {
                fVar19 = 0.0;
              }
              else {
                piVar12 = (int *)((int)pvVar5 + 0x144);
                ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)pvVar5 + 0x144) + 0x24))))(piVar12,uVar9,uVar4);
                *(undefined1 *)((int)pvVar5 + 0x2a8) = 0;
                *(undefined4 *)((int)pvVar5 + 0x1f8) = 0;
                *(int *)((int)pvVar5 + 0x1fc) = (*(int *)(gen_frame + 0x30));
                if ((((*((byte *)GEN_TOP((*(int *)((int)pvVar5 + 0x14c) + 0x148))) & 2) != 0) &&
                    (bVar2 = *((byte *)GEN_TOP((*(int *)((int)pvVar5 + 0x150) + 0x6e))), (bVar2 & 1) != 0)) &&
                   ((bVar2 & 2) != 0)) {
                  ((GEN_TCODE *)*(gen_code32 *)(*piVar12 + 4))(piVar12 GEN_EDX_ARG);
                  F_005662b0(piVar12 GEN_EDX_ARG,uVar4);
                  ((GEN_TCODE *)*(gen_code32 *)(*piVar12 + 8))(piVar12 GEN_EDX_ARG);
                }
                fVar19 = *(float *)((int)(*(int * PTR32 *)(gen_frame + 0x40)) + 0x288);
                (*(float *)(gen_frame + 0x14)) = fVar19;
                (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)((int)(*(int * PTR32 *)(gen_frame + 0x40)) + 0x284);
              }
            }
            puVar13 = (undefined4 *)(uVar9 + 0xa8);
            puVar14 = (undefined4 *)(uVar9 + 100);
            for (iVar11 = 0x11; iVar11 != 0; iVar11 = iVar11 - 1) {
              *puVar14 = *puVar13;
              puVar13 = puVar13 + 1;
              puVar14 = puVar14 + 1;
            }
            uVar4 = (int)fVar19 & 0xffff;
          }
        }
        (*(int *)(gen_frame + 0x38)) = (*(int *)(gen_frame + 0x38)) + 5 + uVar4;
        iVar11 = 3;
        puVar15 = ((uint *)(gen_frame + 0x5c)) + 3;
        do {
          puVar16 = puVar15 - 2;
          if ((puVar15[-3] >> 5 & 1) != 0) {
            puVar13 = (undefined4 *)*puVar16;
            if (puVar13 != (undefined4 *)0x0) {
              uVar4 = puVar15[-3] & 0xf;
              if (uVar4 == 9) {
                F_00488040(puVar13 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),*puVar13,puVar13[1]);
                F_00488dc0(puVar13 GEN_EDX_ARG);
                F_00406ad0(puVar13);
              }
              else if ((uVar4 == 6) || (uVar4 == 7)) {
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
        uVar4 = (*(uint *)(gen_frame + 0x34)) + 1;
        (*(uint *)(gen_frame + 0x34)) = uVar4;
      } while (uVar4 < param_1);
    }
    if (param_1 < 5) {
      piVar12 = (int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + param_1 * 4 + 0x150);
      iVar11 = 5 - param_1;
      do {
        iVar1 = *piVar12;
        if (iVar1 != 0) {
          *(uint *)(iVar1 + 0x84) = *(uint *)(iVar1 + 0x84) & 0xffefffff;
          *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x80;
        }
        piVar12 = piVar12 + 1;
        iVar11 = iVar11 - 1;
      } while (iVar11 != 0);
    }
    iVar11 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0xe0);
    if ((iVar11 == 0) || (*(short *)(iVar11 + 0x18) != 3)) {
      sVar3 = 0;
    }
    else {
      sVar3 = *(short *)(iVar11 + 0x7e);
    }
    if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0xdc) != 0) {
      *((short *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0xdc) + 0x7e))) = (short)(*(int *)(gen_frame + 0x18)) + sVar3 + (short)(*(int *)(gen_frame + 0x38));
    }
    uVar9 = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0xdc);
    if (uVar9 != 0) {
      *(uint *)(uVar9 + 0x84) = *(uint *)(uVar9 + 0x84) | 0x100000;
      *(uint *)(uVar9 + 0x88) = *(uint *)(uVar9 + 0x88) & 0xffffff7f;
    }
  }
  F_00c47745(((uint *)(gen_frame + 0x5c))[3] ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return uVar9;
}

/* ref: FUN_005a49e0 */
GEN_FRAME uint GEN_THISCALL F_005a49e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5a49e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint uVar1;
  int iVar2;
  byte bVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  byte * pbVar9;
  undefined * this_00;
  int * piVar10;
  undefined4 * puVar11;
  undefined4 * puVar12;
  uint * puVar13;
  uint * puVar14;
  bool bVar15;
  float10 fVar16;
  float fVar17;
  
  uVar5 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  ((uint *)(gen_frame + 0x5c))[3] = uVar5;
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = this;
  if (param_1 == 0) {
    uVar1 = *(uint *)((int)this + 0x114);
    uVar7 = 0;
    if (uVar1 != 0) {
      *(uint *)(uVar1 + 0x84) = *(uint *)(uVar1 + 0x84) & 0xffefffff;
      *(uint *)(uVar1 + 0x88) = *(uint *)(uVar1 + 0x88) | 0x80;
      F_00c47745(uVar5 ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_FWD);
      return uVar1;
    }
  }
  else {
    (*(uint *)(gen_frame + 0x40)) = (uint)*(ushort *)((int)this + 0xba);
    iVar6 = *(int *)((int)this + 0x114);
    if (iVar6 != 0) {
      *(uint *)(iVar6 + 0x84) = *(uint *)(iVar6 + 0x84) | 0x100000;
      *(uint *)(iVar6 + 0x88) = *(uint *)(iVar6 + 0x88) & 0xffffff7f;
    }
    if (param_1 != 0) {
      (*(int * PTR32 *)(gen_frame + 0x3c)) = (int *)((int)this + 0x23c);
      (*(byte * PTR32 *)(gen_frame + 0x38)) = (byte *)(param_3 + param_4 * 8);
      (*(uint *)(gen_frame + 0x30)) = param_1;
      do {
        iVar6 = *(*(int * PTR32 *)(gen_frame + 0x3c));
        if ((((iVar6 == 0) || (*(ushort *)(iVar6 + 0x18) < 1000)) ||
            (iVar6 = *(int *)(iVar6 + 0x8c), iVar6 == 0)) ||
           ((((*(byte *)(iVar6 + 0x60) & 1) == 0 || ((*(byte *)(iVar6 + 0x60) & 4) == 0)) ||
            ((*(char *)(iVar6 + 0x1c) != '\x01' ||
             (*((char *)GEN_TOP((*(int *)(iVar6 + 0xc) + 0xf))) != '\x15')))))) {
          iVar6 = 0;
        }
        if ((((*(byte *)(iVar6 + 0x60) & 1) != 0) && (*(int *)(iVar6 + 0x90) != 0)) &&
           ((iVar2 = *(int *)(iVar6 + 0xc), iVar2 != 0 &&
            ((uVar5 = *(uint *)(iVar2 + 4), uVar5 != 0 && (uVar7 = 0, uVar5 != 0)))))) {
          piVar10 = *(int * PTR32 *)(iVar2 + 8);
          do {
            if (*(int *)(*piVar10 + 4) == *(int *)(iVar6 + 0x90)) {
              this_00 = ((undefined *)GEN_TOP((*(int * PTR32 *)(iVar2 + 8))[uVar7]));
              if ((this_00 != (undefined *)0x0) && (*(short *)((int)this_00 + 0x18) == 3))
              goto LAB_005a4af6;
              break;
            }
            uVar7 = uVar7 + 1;
            piVar10 = piVar10 + 1;
          } while (uVar7 < uVar5);
        }
        this_00 = (undefined *)0x0;
LAB_005a4af6: ;
        if ((*(*(byte * PTR32 *)(gen_frame + 0x38)) & 0xf) == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(undefined4 *)((*(byte * PTR32 *)(gen_frame + 0x38)) + 4);
        }
        (*(undefined4 *)(gen_frame + 0x44)) = 6;
        (*(undefined4 *)(gen_frame + 0x48)) = uVar8;
        if (this_00 == (undefined *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = (uint)*(ushort *)((int)this_00 + 0x7c);
        }
        (*(undefined4 *)(gen_frame + 0x4c)) = 4;
        (*(uint *)(gen_frame + 0x50)) = uVar5;
        if (this_00 == (undefined *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = (uint)(*(byte *)((int)this_00 + 0xfc) >> 4);
        }
        (*(undefined4 *)(gen_frame + 0x54)) = 4;
        (*(uint *)(gen_frame + 0x58)) = uVar5;
        if (this_00 == (undefined *)0x0) {
          bVar3 = 0;
        }
        else {
          bVar3 = *(byte *)((int)this_00 + 0xfd);
        }
        ((uint *)(gen_frame + 0x5c))[0] = 4;
        ((uint *)(gen_frame + 0x5c))[1] = (uint)bVar3;
        pbVar9 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1379860) + 0x38) + 4))))
                                   (*(int * PTR32 *)(REFG(int, 0x1379860) + 0x38) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x24)),0x2a,4,&(*(undefined4 *)(gen_frame + 0x44)))));
        if ((*pbVar9 & 0xf) == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(undefined4 *)(pbVar9 + 4);
        }
        F_00584110(this_00 GEN_EDX_ARG,uVar8);
        puVar11 = (*(undefined4 * PTR32 *)(gen_frame + 0x28));
        if (((*(uint *)(gen_frame + 0x24)) >> 5 & 1) != 0) {
          if ((*(undefined4 * PTR32 *)(gen_frame + 0x28)) != (undefined4 *)0x0) {
            uVar5 = (*(uint *)(gen_frame + 0x24)) & 0xf;
            if (uVar5 == 9) {
              F_00488040((*(undefined4 * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),*(*(undefined4 * PTR32 *)(gen_frame + 0x28)),(*(undefined4 * PTR32 *)(gen_frame + 0x28))[1]);
              F_00488dc0(puVar11 GEN_EDX_ARG);
            }
            else if ((uVar5 != 6) && (uVar5 != 7)) goto LAB_005a4be3;
            F_00406ad0(puVar11);
          }
LAB_005a4be3: ;
          (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = (undefined4 *)0x0;
        }
        iVar6 = *(*(int * PTR32 *)(gen_frame + 0x3c));
        (*(uint *)(gen_frame + 0x24)) = 0;
        if (iVar6 != 0) {
          *(uint *)(iVar6 + 0x84) = *(uint *)(iVar6 + 0x84) | 0x100000;
          *(uint *)(iVar6 + 0x88) = *(uint *)(iVar6 + 0x88) & 0xffffff7f;
        }
        iVar6 = *(*(int * PTR32 *)(gen_frame + 0x3c));
        if (iVar6 != 0) {
          fVar17 = (float)(int)(short)(*(uint *)(gen_frame + 0x40));
          (*(float *)(gen_frame + 0x20)) = fVar17;
          if (((*(uint *)(iVar6 + 0x88) & 1) == 0) &&
             (fVar16 = (float10)(int)(short)(*(uint *)(gen_frame + 0x40)),
             bVar15 = GEN_ISNAN((float10)*(float *)(iVar6 + 0x3c)) || GEN_ISNAN(fVar16),
             bVar15 == (bVar15 || (float10)*(float *)(iVar6 + 0x3c) == fVar16))) {
            *(uint *)(iVar6 + 0x88) = *(uint *)(iVar6 + 0x88) | 1;
          }
          *(float *)(iVar6 + 0x3c) = fVar17;
        }
        (*(undefined4 *)(gen_frame + 0x1c)) = REFG(undefined4, 0x108cc50);
        if (this_00 == (undefined *)0x0) {
          sVar4 = 0;
        }
        else {
          uVar5 = F_005684e0(this_00 GEN_EDX_ARG,0);
          sVar4 = 0;
          if (uVar5 != 0) {
            uVar7 = F_0042a990((int)this_00 + 0x9c GEN_EDX_ARG);
            fVar17 = REFG(float, 0x10a0da0);
            if ((*(byte *)(uVar5 + 0x148) & 2) != 0) {
              iVar6 = *(int *)(uVar5 + 0x13c);
              (*(int *)(gen_frame + 0x34)) = iVar6;
              if (uVar7 == 0) {
                fVar17 = 0.0;
              }
              else {
                piVar10 = (int *)(iVar6 + 0x144);
                ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar6 + 0x144) + 0x24))))(piVar10,uVar5,uVar7);
                *(undefined1 *)(iVar6 + 0x2a8) = 0;
                *(undefined4 *)(iVar6 + 0x1f8) = 0;
                *(undefined4 *)(iVar6 + 0x1fc) = (*(undefined4 *)(gen_frame + 0x1c));
                if ((((*((byte *)GEN_TOP((*(int *)(iVar6 + 0x14c) + 0x148))) & 2) != 0) &&
                    (bVar3 = *((byte *)GEN_TOP((*(int *)(iVar6 + 0x150) + 0x6e))), (bVar3 & 1) != 0)) &&
                   ((bVar3 & 2) != 0)) {
                  ((GEN_TCODE *)*(gen_code32 *)(*piVar10 + 4))(piVar10 GEN_EDX_ARG);
                  F_005662b0(piVar10 GEN_EDX_ARG,uVar7);
                  ((GEN_TCODE *)*(gen_code32 *)(*piVar10 + 8))(piVar10 GEN_EDX_ARG);
                }
                fVar17 = *(float *)((*(int *)(gen_frame + 0x34)) + 0x288);
                (*(float *)(gen_frame + 0x18)) = fVar17;
                (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)((*(int *)(gen_frame + 0x34)) + 0x284);
              }
            }
            puVar11 = (undefined4 *)(uVar5 + 0xa8);
            puVar12 = (undefined4 *)(uVar5 + 100);
            for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 - 1) {
              *puVar12 = *puVar11;
              puVar11 = puVar11 + 1;
              puVar12 = puVar12 + 1;
            }
            sVar4 = (short)(int)fVar17;
          }
        }
        iVar6 = 3;
        sVar4 = (short)(*(uint *)(gen_frame + 0x40)) +
                (*(short *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0xbc) - *(short *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0xb8)) + sVar4;
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x40)) + 0)) = sVar4;
        (*(uint *)(gen_frame + 0x40)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x40)) + 2)),sVar4);
        puVar13 = ((uint *)(gen_frame + 0x5c)) + 3;
        do {
          puVar14 = puVar13 - 2;
          if ((puVar13[-3] >> 5 & 1) != 0) {
            puVar11 = (undefined4 *)*puVar14;
            if (puVar11 != (undefined4 *)0x0) {
              uVar5 = puVar13[-3] & 0xf;
              if (uVar5 == 9) {
                F_00488040(puVar11 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)),*puVar11,puVar11[1]);
                F_00488dc0(puVar11 GEN_EDX_ARG);
                F_00406ad0(puVar11);
              }
              else if ((uVar5 == 6) || (uVar5 == 7)) {
                F_00406ad0(puVar11);
                *puVar14 = 0;
              }
            }
            *puVar14 = 0;
          }
          iVar6 = iVar6 - 1;
          puVar13[-3] = 0;
          puVar13 = puVar14;
        } while (-1 < iVar6);
        (*(byte * PTR32 *)(gen_frame + 0x38)) = (*(byte * PTR32 *)(gen_frame + 0x38)) + 8;
        (*(int * PTR32 *)(gen_frame + 0x3c)) = (*(int * PTR32 *)(gen_frame + 0x3c)) + 1;
        uVar5 = (*(uint *)(gen_frame + 0x30)) - 1;
        (*(uint *)(gen_frame + 0x30)) = uVar5;
      } while (uVar5 != 0);
    }
    if (param_1 < 0x18) {
      piVar10 = (int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + param_1 * 4 + 0x23c);
      iVar6 = 0x18 - param_1;
      do {
        iVar2 = *piVar10;
        if (iVar2 != 0) {
          *(uint *)(iVar2 + 0x84) = *(uint *)(iVar2 + 0x84) & 0xffefffff;
          *(uint *)(iVar2 + 0x88) = *(uint *)(iVar2 + 0x88) | 0x80;
        }
        piVar10 = piVar10 + 1;
        iVar6 = iVar6 - 1;
      } while (iVar6 != 0);
    }
    uVar7 = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x114);
    if (uVar7 != 0) {
      *(short *)(uVar7 + 0x7e) =
           ((*(short *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0xbe) - *(short *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0xbc)) -
           *(short *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0xba)) + (short)(*(uint *)(gen_frame + 0x40));
    }
  }
  F_00c47745(((uint *)(gen_frame + 0x5c))[3] ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return uVar7;
}

/* ref: Component::GUI2::AtkComponentMap::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_005a4e60(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x5a4e60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
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
  if (*(char *)((int)param_1 + 0xb8) != '\0') {
    bVar6 = true;
    uVar8 = 0;
    piVar7 = (int *)((int)param_1 + 0xac);
    do {
      iVar5 = *piVar7;
      if (((iVar5 == 0) || (*(int *)(iVar5 + 8) != 0)) ||
         (iVar5 = *(int *)(iVar5 + 0xc), iVar5 == 0)) {
LAB_005a4ec6: ;
        F_0056f0a0(param_1 GEN_EDX_ARG,uVar8);
      }
      else {
        piVar1 = (int *)(iVar5 + 0x88);
        iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
        if (iVar2 == 2) {
          LOCK();
          *(undefined4 *)(iVar5 + 0x8c) = *(undefined4 *)(iVar5 + 0x8c);
          UNLOCK();
          goto LAB_005a4ec6;
        }
        bVar6 = false;
      }
      uVar8 = uVar8 + 1;
      piVar7 = piVar7 + 1;
    } while (uVar8 < 3);
    if (bVar6) {
      iVar5 = *(int *)((int)param_1 + 0x88);
      if (iVar5 != 0) {
        *(uint *)(iVar5 + 0x84) = *(uint *)(iVar5 + 0x84) | 0x100000;
        *(uint *)(iVar5 + 0x88) = *(uint *)(iVar5 + 0x88) & 0xffffff7f;
      }
      *(undefined1 *)((int)param_1 + 0xb8) = 0;
    }
  }
  fVar10 = REFG(float, 0x1087f04);
  if (*(char *)((int)param_1 + 0xba) == '\0') goto LAB_005a4fca;
  fVar3 = *(float *)((int)param_1 + 0x270);
  fVar4 = ((float)GEN_TOF(((float10)param_2 + (float10)*(float *)((int)param_1 + 0x26c))));
  *(float *)((int)param_1 + 0x26c) = fVar4;
  *(undefined1 *)((int)param_1 + 0xbb) = 1;
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
  *(float *)((int)param_1 + 0x268) = (float)((float10)1 - (float10)param_2);
  if ((float10)fVar3 <= (float10)fVar4) {
    *(undefined4 *)((int)param_1 + 0x264) = 0;
    *(float *)((int)param_1 + 0x268) = fVar10;
    *(undefined1 *)((int)param_1 + 0xba) = 0;
  }
LAB_005a4fca: ;
  F_00575b20(param_1 GEN_EDX_ARG);
  return;
}

/* ref: FUN_005a4fe0 */
GEN_FRAME byte GEN_STDCALL F_005a4fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5a4fe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
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
  if ((*(uint *)(uVar4 + 0xc) & (*(uint *)&gen_args[1])) != 0) {
    if (((*(uint *)(gen_frame + 0x0)) >> 5 & 1) != 0) {
      F_005a0260(&(*(uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
    piVar2 = ((int *)GEN_TOP((*(undefined4 * PTR32 *)&gen_args[0])[3]));
    (*(int *)(gen_frame + 0x4)) = ((*(uint *)&gen_args[2]) & 0xff) + 0x100;
    uVar1 = (*(undefined4 * PTR32 *)&gen_args[0])[4];
    (*(uint *)(gen_frame + 0x0)) = 3;
    pbVar5 = ((byte *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG,((uint *)(gen_frame + 0x8)) + 3,&(*(uint *)(gen_frame + 0x0)),2,uVar1)));
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
        puVar3 = (undefined4 *)*puVar7;
        if (puVar3 != (undefined4 *)0x0) {
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
  if ((*(uint *)(uVar4 + 0x18) & (*(uint *)&gen_args[1])) != 0) {
    if (((*(uint *)(gen_frame + 0x0)) >> 5 & 1) != 0) {
      F_005a0260(&(*(uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
    piVar2 = ((int *)GEN_TOP((*(undefined4 * PTR32 *)&gen_args[0])[3]));
    (*(int *)(gen_frame + 0x4)) = ((*(uint *)&gen_args[2]) & 0xff) + 0x200;
    uVar1 = (*(undefined4 * PTR32 *)&gen_args[0])[4];
    (*(uint *)(gen_frame + 0x0)) = 3;
    pbVar5 = ((byte *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG,((uint *)(gen_frame + 0x8)) + 3,&(*(uint *)(gen_frame + 0x0)),2,uVar1)));
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
        puVar3 = (undefined4 *)*puVar7;
        if (puVar3 != (undefined4 *)0x0) {
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
      puVar3 = (undefined4 *)*puVar7;
      if (puVar3 != (undefined4 *)0x0) {
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
GEN_FRAME uint GEN_THISCALL F_005a5250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5a5250u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint * puVar2;
  
  iVar1 = *(int *)((int)this + 0x22210);
  if ((param_2 < (uint)(*(int *)((int)this + 0x22214) - iVar1 >> 2)) &&
     (*(int *)(iVar1 + param_2 * 4) != 0)) {
    puVar2 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(iVar1 + param_2 * 4))((int)this - 4,((uint *)(gen_frame + 0x4)),param_4,param_3)));
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
    if ((((uint *)(gen_frame + 0x4))[0] >> 5 & 1) != 0) {
      F_005a0260(((uint *)(gen_frame + 0x4)) GEN_EDX_ARG);
    }
    return (uint)param_1;
  }
  if (*(int *)((int)this + 0x22220) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x22220) + 4))))
              (*(int * PTR32 *)((int)this + 0x22220) GEN_EDX_ARG,param_1,param_2,param_4,param_3);
    return (uint)param_1;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_005a5320 */
GEN_FRAME uint GEN_THISCALL F_005a5320(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5a5320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  code * pcVar1;
  
  if (-1 < param_2) {
    (*(int *)(gen_frame + 0x8)) = param_2;
    pcVar1 = *(gen_code32 *)(*(int *)this + 4);
    (*(uint *)(gen_frame + 0x4)) = 3;
    (*pcVar1)(this,param_1,0x17,1,&(*(uint *)(gen_frame + 0x4)));
    if (((*(uint *)(gen_frame + 0x4)) >> 5 & 1) != 0) {
      F_005a0260(&(*(uint *)(gen_frame + 0x4)) GEN_EDX_FWD);
    }
    return (uint)param_1;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_005a5380 */
GEN_FRAME uint GEN_THISCALL F_005a5380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5a5380u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  *(undefined1 *)(in_ecx + 0x22d2c) = 1;
  *param_2 = 0;
  return (uint)param_2;
}

/* ref: FUN_005a53a0 */
GEN_FRAME uint GEN_THISCALL F_005a53a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5a53a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_005a53b0 */
GEN_FRAME uint GEN_THISCALL F_005a53b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5a53b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  if (0 < (*(int *)&gen_args[3])) {
    if ((*(*(byte * PTR32 *)&gen_args[2]) & 0xf) == 0) {
      (*(int *)&gen_args[3]) = 0;
    }
    else {
      (*(int *)&gen_args[3]) = *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 4)));
    }
    if ((*(int *)&gen_args[3]) != 0) {
      F_005c6630(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x22228))) GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x4)),&(*(int *)&gen_args[3]));
      (*(int *)&gen_args[3]) = 0;
      F_005c7460((*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),&(*(int *)&gen_args[3]),(*(undefined4 * PTR32 *)&gen_args[1]));
      F_005c9de0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x22228))) GEN_EDX_ARG,&(*(int *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
    }
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_005a5430 */
GEN_FRAME uint GEN_THISCALL F_005a5430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5a5430u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint * this_00;
  byte * pbVar2;
  byte bVar3;
  
  pbVar2 = (*(byte * PTR32 *)&gen_args[2]);
  this_00 = (*(uint * PTR32 *)&gen_args[1]);
  *(*(uint * PTR32 *)&gen_args[1]) = 2;
  *((undefined1 *)GEN_TOP(((*(uint * PTR32 *)&gen_args[1]) + 1))) = 0;
  if (0 < (*(int *)&gen_args[3])) {
    if ((*(*(byte * PTR32 *)&gen_args[2]) & 0xf) == 0) {
      (*(uint * PTR32 *)&gen_args[1]) = (uint *)0x0;
    }
    else {
      (*(uint * PTR32 *)&gen_args[1]) = *((uint * PTR32 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 4)));
    }
    F_005cdc90(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x22228))) GEN_EDX_FWD,&(*(byte * PTR32 *)&gen_args[2]),&(*(uint * PTR32 *)&gen_args[1]));
    if (((*(byte * PTR32 *)&gen_args[2]) != *((byte * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2222c)))) &&
       (piVar1 = *((int * PTR32 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 0x10))), piVar1 != (int *)0x0)) {
      pbVar2 = ((byte *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))
                                 (piVar1 GEN_EDX_ARG,((uint *)(gen_frame + 0x4)),pbVar2 + 8,(*(int *)&gen_args[3]) - 1,
                                  *((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 0x14))))));
      if ((*pbVar2 & 0xf) == 0) {
        bVar3 = 0;
      }
      else {
        bVar3 = pbVar2[4];
      }
      if ((((uint *)(gen_frame + 0x4))[0] >> 5 & 1) != 0) {
        F_005a0260(((uint *)(gen_frame + 0x4)) GEN_EDX_ARG);
      }
      if ((*this_00 >> 5 & 1) != 0) {
        F_005a0260(this_00 GEN_EDX_ARG);
      }
      *this_00 = 2;
      *(byte *)(this_00 + 1) = bVar3;
    }
    return (uint)this_00;
  }
  return (uint)(*(uint * PTR32 *)&gen_args[1]);
}

/* ref: FUN_005a54f0 */
GEN_FRAME uint GEN_THISCALL F_005a54f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5a54f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint * this_00;
  byte * pbVar2;
  byte bVar3;
  
  pbVar2 = (*(byte * PTR32 *)&gen_args[2]);
  this_00 = (*(uint * PTR32 *)&gen_args[1]);
  *(*(uint * PTR32 *)&gen_args[1]) = 2;
  *((undefined1 *)GEN_TOP(((*(uint * PTR32 *)&gen_args[1]) + 1))) = 0;
  if (0 < (*(int *)&gen_args[3])) {
    if ((*(*(byte * PTR32 *)&gen_args[2]) & 0xf) == 0) {
      (*(uint * PTR32 *)&gen_args[1]) = (uint *)0x0;
    }
    else {
      (*(uint * PTR32 *)&gen_args[1]) = *((uint * PTR32 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 4)));
    }
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x22228)));
    F_005cdc90(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x22228))) GEN_EDX_FWD,&(*(byte * PTR32 *)&gen_args[2]),&(*(uint * PTR32 *)&gen_args[1]));
    if (((*(byte * PTR32 *)&gen_args[2]) != *((byte * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2222c)))) &&
       (piVar1 = *((int * PTR32 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 0x10))), piVar1 != (int *)0x0)) {
      pbVar2 = ((byte *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))
                                 (piVar1 GEN_EDX_ARG,((uint *)(gen_frame + 0x0)),pbVar2 + 8,(*(int *)&gen_args[3]) - 1,
                                  *((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 0x14))))));
      if ((*pbVar2 & 0xf) == 0) {
        bVar3 = 0;
      }
      else {
        bVar3 = pbVar2[4];
      }
      if ((((uint *)(gen_frame + 0x0))[0] >> 5 & 1) != 0) {
        F_005a0260(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
      F_005cdc30((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,&(*(uint * PTR32 *)&gen_args[1]));
      if ((*this_00 >> 5 & 1) != 0) {
        F_005a0260(this_00 GEN_EDX_ARG);
      }
      *this_00 = 2;
      *(byte *)(this_00 + 1) = bVar3;
    }
    return (uint)this_00;
  }
  return (uint)(*(uint * PTR32 *)&gen_args[1]);
}

/* ref: FUN_005a55c0 */
GEN_FRAME uint GEN_THISCALL F_005a55c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5a55c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int iVar1;
  int iVar2;
  
  if ((*(int *)&gen_args[3]) == 4) {
    if ((*(*(byte * PTR32 *)&gen_args[2]) & 0xf) == 0) {
      (*(undefined1 *)((char *)&(*(int *)&gen_args[3]) + 0)) = 0;
    }
    else {
      (*(undefined1 *)((char *)&(*(int *)&gen_args[3]) + 0)) = (undefined1)*((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 4)));
    }
    if (((*(byte * PTR32 *)&gen_args[2])[0x10] & 0xf) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 0x14)));
    }
    if (((*(byte * PTR32 *)&gen_args[2])[8] & 0xf) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 0xc)));
    }
    if (iVar1 == 0) {
      iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20df8)));
    }
    else if (iVar1 == 1) {
      iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20dec)));
    }
    else {
      if (iVar1 != 2) goto LAB_005a5638;
      iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20e04)));
    }
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      iVar2 = *(int *)(iVar1 + iVar2 * 4);
      *((undefined1 *)GEN_TOP((*(char *)(iVar2 + 0x1c) + 0xc + iVar2))) = (undefined1)(*(int *)&gen_args[3]);
      *(undefined1 *)(iVar2 + 0x1d) = 2;
      *(char *)(iVar2 + 0x1c) = *(char *)(iVar2 + 0x1c) + '\x01';
    }
  }
LAB_005a5638: ;
  *(*(undefined4 * PTR32 *)&gen_args[1]) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_005a5650 */
GEN_FRAME uint GEN_THISCALL F_005a5650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5a5650u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  int * piVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  
  if (param_3 != 4) goto LAB_005a5714;
  if ((*param_2 & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_2 + 4);
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
    if ((*((int *)GEN_TOP((*(int *)((int)this + 0x20df8) + iVar5 * 4))) == 0) ||
       (F_005569f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x20df8) + iVar5 * 4))) GEN_EDX_FWD,uVar3), bVar4 == 0))
    goto LAB_005a5714;
    iVar2 = *(int *)((int)this + 0x20df8);
  }
  else {
    if (iVar2 == 1) {
      if (*((int *)GEN_TOP((*(int *)((int)this + 0x20dec) + iVar5 * 4))) != 0) {
        F_005569f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x20dec) + iVar5 * 4))) GEN_EDX_ARG,uVar3);
        *param_1 = 0;
        return (uint)param_1;
      }
      goto LAB_005a5714;
    }
    if ((iVar2 != 2) || (*((int *)GEN_TOP((*(int *)((int)this + 0x20e04) + iVar5 * 4))) == 0))
    goto LAB_005a5714;
    F_005569f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x20e04) + iVar5 * 4))) GEN_EDX_ARG,uVar3);
    iVar2 = *(int *)((int)this + 0x20e04);
  }
  piVar1 = *(int * PTR32 *)(iVar2 + iVar5 * 4);
  ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
LAB_005a5714: ;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_005a5730 */
GEN_FRAME uint GEN_THISCALL F_005a5730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5a5730u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined1 uVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  if ((*param_2 & 0xf) == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = param_2[4];
    if (bVar2 != 0) goto LAB_005a5771;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x2223c) + 0x34))))((int)this + 0x2223c,2);
LAB_005a5771: ;
  *(byte *)((int)this + 0x20db2) = bVar2;
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
      *(undefined1 *)((int)this + 0x22a8c) = uVar1;
      *(undefined1 *)((int)this + 0x22a8d) = uVar6;
      *(undefined4 *)((int)this + 0x22a84) = uVar7;
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
      F_0055bd90((undefined *)((int)this + 0x2224c) GEN_EDX_ARG,uVar4,uVar7);
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
      *(undefined2 *)((int)this + 0x22a24) = uVar3;
      F_0042ccf0((undefined *)((int)this + 0x22a28) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
      *(undefined2 *)((int)this + 0x22a88) = (*(undefined2 *)(gen_frame + 0x0));
      *(undefined4 *)((int)this + 0x22a7c) = uVar8;
      *(undefined4 *)((int)this + 0x22a80) = (*(undefined4 *)(gen_frame + 0x4));
      *(undefined1 *)((int)this + 0x22a8f) = (*(undefined1 *)(gen_frame + 0x10));
      F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
      if ((param_2[0x60] & 0xf) == 0) {
        bVar2 = 0;
      }
      else {
        bVar2 = param_2[100];
      }
      *(byte *)((int)this + 0x22a95) = bVar2;
    }
    if ((*(byte *)((int)this + 0x22a24) >> 5 & 1) == 0) {
      uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 8))(this GEN_EDX_ARG);
      *(char *)((int)this + 0x22be9) = (char)uVar5;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x2223c) + 0x20))))((int *)((int)this + 0x2223c) GEN_EDX_ARG,1);
    }
    else {
      *(undefined1 *)((int)this + 0x22be9) = 4;
    }
    uVar5 = F_0042a990(&REFG(undefined * PTR32, 0x12fd328) GEN_EDX_ARG);
    param_1[1] = uVar5;
    *param_1 = 6;
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
    return (uint)param_1;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x2223c) + 0x20))))((int)this + 0x2223c,0);
  if (*(char *)((int)this + 0x22be9) != '\x04') {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x2223c) + 0x24))))
              ((int)this + 0x2223c,(int)*(char *)((int)this + 0x22be9));
    *(undefined1 *)((int)this + 0x22be9) = 4;
  }
  if (*(short *)((int)this + 0x22a14) == 0) {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x22258) + 0x3c))))(*(int * PTR32 *)((int)this + 0x22258) GEN_EDX_ARG);
    if ((char)uVar5 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x22258) + 0x34))))(*(int * PTR32 *)((int)this + 0x22258) GEN_EDX_ARG,0);
    }
  }
  else {
    F_00572a00((undefined *)((int)this + 0x2224c) GEN_EDX_ARG,1);
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,"",REFG(undefined4, 0x108cc50));
  uVar5 = F_0056a440((undefined *)((int)this + 0x2224c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)));
  uVar5 = F_00567510(this GEN_EDX_ARG,uVar5);
  uVar5 = F_0042a990(uVar5 GEN_EDX_ARG);
  *param_1 = 6;
  param_1[1] = uVar5;
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: FUN_005a59e0 */
GEN_FRAME uint GEN_THISCALL F_005a59e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5a59e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 * this_00;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  if (((byte)*(undefined4 *)param_2 & 0xf) == 6) {
    if ((param_2[8] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0xc);
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_FWD,uVar1,REFG(undefined4, 0x108cc50));
    if ((*param_2 & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 4);
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,uVar1,REFG(undefined4, 0x108cc50));
    if ((param_2[0x30] & 0xf) == 0) {
      (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) & 0xffffff00;
    }
    else {
      (*(uint *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0xc)), 1, 3),param_2[0x34]);
    }
    if ((param_2[0x28] & 0xf) == 0) {
      (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) & 0xffffff00;
    }
    else {
      (*(uint *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x8)), 1, 3),param_2[0x2c]);
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
    F_00593de0((undefined *)((int)this + 0x2224c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)),((undefined1 *)(gen_frame + 0x64)),uVar3,uVar2,uVar1,(*(uint *)(gen_frame + 0x8)),(*(uint *)(gen_frame + 0xc))
                );
    F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
    this_00 = ((undefined1 *)(gen_frame + 0x64));
  }
  else {
    if ((param_2[8] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0xc);
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,uVar1,REFG(undefined4, 0x108cc50));
    F_0042cc20(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG,"",REFG(undefined4, 0x108cc50));
    if ((param_2[0x30] & 0xf) == 0) {
      (*(uint *)(gen_frame + 0x8)) = (uint)GEN_PIECE(&(*(uint *)(gen_frame + 0x8)), 1, 3) << 8;
    }
    else {
      (*(uint *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x8)), 1, 3),param_2[0x34]);
    }
    if ((param_2[0x28] & 0xf) == 0) {
      (*(uint *)(gen_frame + 0xc)) = (uint)GEN_PIECE(&(*(uint *)(gen_frame + 0xc)), 1, 3) << 8;
    }
    else {
      (*(uint *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0xc)), 1, 3),param_2[0x2c]);
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
    F_00593de0((undefined *)((int)this + 0x2224c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x64)),((undefined1 *)(gen_frame + 0x10)),uVar3,uVar2,uVar1,(*(uint *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x8))
                );
    F_0042c880(((undefined1 *)(gen_frame + 0x64)) GEN_EDX_ARG);
    this_00 = ((undefined1 *)(gen_frame + 0x10));
  }
  F_0042c880(this_00 GEN_EDX_ARG);
  *param_1 = 0;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
  return (uint)param_1;
}

