#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00bc4e60 */
uint F_00bc4e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc4e60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint * puVar1;
  
  puVar1 = ((uint *)GEN_TOP(((int)this + ((uint)(param_2 == 0x4a) * 3 + 3) * 0x10 + 0x2c)));
  if ((*puVar1 & 0xc0000000) != 0) {
    puVar1 = (uint *)F_00b5b880(REFG(undefined4, 0x14c4e84),puVar1,param_1);
  }
  return (uint)puVar1;
}

/* ref: FUN_00bc4ea0 */
uint F_00bc4ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbc4ea0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  int iVar1;
  uint * puVar2;
  int iVar3;
  uint * puVar4;
  
  iVar3 = ((uint)((*(int *)&gen_args[4]) == 0x4a) * 3 + 3) * 0x10;
  iVar1 = *((int *)GEN_TOP((iVar3 + 4 + (int)(*(undefined * PTR32 *)&gen_args[0]))));
  puVar4 = ((uint *)GEN_TOP((iVar3 + (int)(*(undefined * PTR32 *)&gen_args[0]))));
  puVar2 = (uint *)0x0;
  if (iVar1 != 0) {
    *puVar4 = (((*(uint *)&gen_args[8]) & 1) * 2 | (*(uint *)&gen_args[6]) & 1) << 5 | *puVar4 & 0xffffff81 | 1;
    puVar2 = (uint *)F_00b5bff0(REFG(undefined4, 0x14c4e84),&(*(uint *)&gen_args[8]),iVar1,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x45c))),
                                  (*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[5]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),0,(*(undefined4 *)&gen_args[1]),(*(int *)&gen_args[4]),(*(undefined4 *)&gen_args[7]));
    puVar4[0xb] = *puVar2;
  }
  return (uint)puVar2;
}

/* ref: FUN_00bc4f20 */
unsigned int F_00bc4f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbc4f20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint * puVar4;
  uint uVar5;
  bool bVar6;
  
  uVar5 = (*(uint *)(gen_frame + 0x18));
  iVar1 = param_2;
  puVar4 = ((uint *)GEN_TOP(((param_2 * 3 + 3) * 0x10 + (int)this)));
  if (puVar4[1] == 0) {
    return 0;
  }
  bVar6 = true;
  (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) & 0xffffff00;
  if ((*puVar4 & 1) != 0) {
    if ((puVar4[0xb] & 0xc0000000) == 0) {
      *puVar4 = *puVar4 & 0xfffffffe;
    }
    else {
      bVar2 = F_00b5b6c0(REFG(undefined4, 0x14c4e84),puVar4 + 0xb);
      if (bVar2 == 0) {
        *puVar4 = *puVar4 & 0xfffffffe;
      }
      else if (((puVar4[7] == 0) ||
               (uVar3 = F_00b5b0f0(REFG(undefined4, 0x14c4e84),puVar4 + 0xb), (int)uVar3 < 0)) ||
              ((int)puVar4[7] < (int)uVar3)) {
        bVar6 = false;
      }
      (*(uint *)(gen_frame + 0x18)) = CONCAT31((int3)SUB43(uVar5,1),1);
      if (!bVar6) {
        return 0;
      }
    }
  }
  bVar6 = true;
  if (param_2 == 0) {
    bVar6 = (*(byte *)((int)this + 0x3fc) & 8) == 0;
    param_2 = 0;
    if (puVar4[7] != 0) goto LAB_00bc4fc0;
  }
  else {
LAB_00bc4fc0: ;
    param_2 = 1;
  }
  uVar5 = puVar4[7];
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),uVar5 != 0);
  (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),iVar1 != 0);
  if ((bVar6) && (uVar3 = *puVar4, (uVar3 & 0x30) == 0)) {
    if ((uVar3 & 2) == 0) {
      if ((((uVar3 & 4) != 0) && ((char)param_3 == '\0')) &&
         (!(*(float *)&REFG(undefined, 0x1088114) < gen_bits2f(puVar4[10])))) goto LAB_00bc50e6;
      if (((char)(*(uint *)(gen_frame + 0x18)) == '\0') || (uVar5 == 0)) {
        if (((uVar3 & 8) == 0) && (iVar1 == 0)) {
          uVar5 = 0;
        }
        else {
          uVar5 = puVar4[6];
        }
      }
    }
    else if (((uVar3 & 4) == 0) || ((char)param_3 != '\0')) {
      (*(uint *)(gen_frame + 0xc)) = (uint)(longlong)TRUNC(((float10)GEN_TOD(gen_bits2f(puVar4[8]))));
      uVar5 = (*(uint *)(gen_frame + 0xc));
    }
    else {
      if (!(((float10)GEN_TOD(gen_bits2f(puVar4[9]))) < ((float10)GEN_TOD(gen_bits2f(puVar4[10]))))) goto LAB_00bc50e6;
      (*(uint *)(gen_frame + 0xc)) = (uint)(longlong)TRUNC(((float10)GEN_TOD(gen_bits2f(puVar4[8]))));
      uVar5 = (*(uint *)(gen_frame + 0xc));
    }
    uVar3 = puVar4[5];
    if (uVar3 != 0) {
      if ((char)(*(uint *)(gen_frame + 0x18)) == '\0') {
        param_2 = 1;
      }
      else {
        uVar5 = 0;
        uVar3 = 0;
      }
    }
    if ((puVar4[0xb] & 0xc0000000) != 0) {
      if (uVar5 == 0) {
        F_00b5ad00(REFG(undefined4, 0x14c4e84),puVar4 + 0xb,0);
      }
      else {
        F_00b5add0(REFG(undefined4, 0x14c4e84),puVar4 + 0xb);
      }
    }
    F_00bc4ea0(this,puVar4[3],uVar5,uVar3,puVar4[4],param_2,(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(uint *)(gen_frame + 0x18)));
  }
LAB_00bc50e6: ;
  *puVar4 = *puVar4 & 0xffffffe7;
  return 0;
}

/* ref: FUN_00bc5100 */
uint F_00bc5100(unsigned int gen_a0)
{
  GEN_ENTER(0xbc5100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00bc0ef0((undefined *)((int)this + 0x408),this);
  return uVar1;
}

/* ref: FUN_00bc5110 */
byte F_00bc5110(unsigned int gen_a0)
{
  GEN_ENTER(0xbc5110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00bc0f10((undefined *)((int)this + 0x408),this);
  return bVar1;
}

/* ref: FUN_00bc5140 */
uint F_00bc5140(unsigned int gen_a0)
{
  GEN_ENTER(0xbc5140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint in_ecx;
  
  uVar1 = F_00bbafd0(this);
  if (uVar1 != 0) {
    F_0068da00(uVar1,0);
  }
  uVar1 = F_00bbafd0(this);
  if (uVar1 != 0) {
    F_0068da00(uVar1,1);
  }
  in_ecx = F_00bbafd0(this);
  uVar1 = 0;
  if (in_ecx != 0) {
    F_0068da00(in_ecx,0);
    uVar1 = F_0068da00(in_ecx,1);
  }
  return uVar1;
}

/* ref: FUN_00bc5190 */
uint F_00bc5190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc5190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00bc3fc0(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00bc51a0 */
uint F_00bc51a0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc51a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  
  F_00bccbd0(this);
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x1104ae0));
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(uint *)((int)this + 0x3fc) = *(uint *)((int)this + 0x3fc) & 0xffffff80;
  *(undefined1 *)((int)this + 0x3f9) = 0;
  *(undefined4 *)((int)this + 0x404) = 0;
  F_00bc1130((undefined *)((int)this + 0x408));
  *(undefined4 *)((int)this + 0x45c) = 0;
  *(undefined1 *)((int)this + 0x460) = 0;
  iVar3 = 9;
  do {
    iVar1 = iVar3 + -1;
    *(undefined1 *)((int)this + iVar3 + 0x3ef) = 0;
    iVar3 = iVar1;
  } while (iVar1 != 0);
  iVar3 = 8;
  puVar2 = (undefined4 *)((int)this + 0x4a4);
  do {
    iVar3 = iVar3 + -1;
    puVar2[-9] = 0;
    puVar2[-1] = 0;
    puVar2 = puVar2 + -1;
  } while (iVar3 != 0);
  *(uint *)((int)this + 0x30) = *(uint *)((int)this + 0x30) & 0xffffff80;
  *(uint *)((int)this + 0x60) = *(uint *)((int)this + 0x60) & 0xffffff80;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  return (uint)this;
}

/* ref: FUN_00bc5290 */
byte F_00bc5290(unsigned int gen_a0)
{
  GEN_ENTER(0xbc5290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  if ((char)uVar2 != '\0') {
    bVar1 = F_00bc4530(this);
    if (bVar1 != 0) {
      return *(int *)((int)this + 0x24) != 0;
    }
  }
  return 0;
}

/* ref: FUN_00bc52c0 */
uint F_00bc52c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbc52c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  undefined * pvVar4;
  
  uVar2 = F_00bbafd0(this);
  if (uVar2 == 0) {
    return 0;
  }
  pvVar4 = *(undefined * PTR32 *)((int)this + 0x28);
  do {
    if (pvVar4 == (undefined *)0x0) {
LAB_00bc5303: ;
      piVar3 = (int *)F_00406520();
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,0x7c,0)));
      if (pvVar4 == (undefined *)0x0) {
        pvVar4 = (undefined *)0x0;
      }
      else {
        pvVar4 = (undefined *)F_00c1ed00(pvVar4,this,param_1,param_2,param_3);
      }
      *(undefined4 *)((int)pvVar4 + 4) = 0;
      *(undefined4 *)((int)pvVar4 + 8) = *(undefined4 *)((int)this + 0x28);
      if (*(int *)((int)this + 0x28) != 0) {
        *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x28) + 4))) = pvVar4;
      }
      *(undefined * PTR32 *)((int)this + 0x28) = pvVar4;
      *(undefined4 *)((int)pvVar4 + 0x20) = 0x7c;
LAB_00bc5353: ;
      *(int *)((int)pvVar4 + 0x1c) = *(int *)((int)pvVar4 + 0x1c) + 1;
      return (uint)pvVar4;
    }
    bVar1 = F_00c1ec30(pvVar4,param_1,param_2,param_3);
    if (bVar1 != 0) {
      if (pvVar4 != (undefined *)0x0) goto LAB_00bc5353;
      goto LAB_00bc5303;
    }
    pvVar4 = *(undefined * PTR32 *)((int)pvVar4 + 8);
  } while( true );
}

/* ref: FUN_00bc5360 */
uint F_00bc5360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc5360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  undefined * this_00;
  int iVar4;
  
  uVar2 = F_00bbafd0(this);
  if (uVar2 == 0) {
    return 0;
  }
  uVar2 = *(uint *)((int)this + 0x28);
  do {
    if (uVar2 == 0) {
LAB_00bc539b: ;
      iVar4 = *(int *)(param_1 + 8) * 0x58 + 0x24;
      piVar3 = (int *)F_00406520();
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,iVar4,0)));
      if (this_00 == (undefined *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = F_00c1ec70(this_00,this,param_1);
      }
      *(undefined4 *)(uVar2 + 4) = 0;
      *(undefined4 *)(uVar2 + 8) = *(undefined4 *)((int)this + 0x28);
      if (*(int *)((int)this + 0x28) != 0) {
        *((uint *)GEN_TOP((*(int *)((int)this + 0x28) + 4))) = uVar2;
      }
      *(uint *)((int)this + 0x28) = uVar2;
      *(int *)(uVar2 + 0x20) = iVar4;
LAB_00bc53e7: ;
      *(int *)(uVar2 + 0x1c) = *(int *)(uVar2 + 0x1c) + 1;
      return uVar2;
    }
    bVar1 = F_00c1ec60(uVar2,param_1);
    if (bVar1 != 0) {
      if (uVar2 != 0) goto LAB_00bc53e7;
      goto LAB_00bc539b;
    }
    uVar2 = *(uint *)(uVar2 + 8);
  } while( true );
}

/* ref: FUN_00bc5400 */
unsigned int F_00bc5400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc5400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = param_1 + 7;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    iVar2 = param_1[1];
    iVar3 = param_1[2];
    if (iVar2 == 0) {
      *(int *)((int)this + 0x28) = iVar3;
    }
    else {
      *(int *)(iVar2 + 8) = iVar3;
    }
    if (iVar3 != 0) {
      *(int *)(iVar3 + 4) = iVar2;
    }
    ((code *)*(gen_code32 *)*param_1)(param_1,0);
    F_00406810(param_1);
  }
  return 0;
}

/* ref: FUN_00bc5440 */
uint F_00bc5440(unsigned int gen_a0)
{
  GEN_ENTER(0xbc5440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 9;
  do {
    iVar3 = iVar4 + -1;
    if (*(char *)((int)this + iVar4 + 0x3ef) == '\0') {
      pvVar1 = (undefined *)(iVar3 * 0x60 + 0x90 + (int)this);
      if (pvVar1 == (undefined *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = F_00c1f760(pvVar1,this);
      }
      *(undefined1 *)(iVar4 + 0x3ef + (int)this) = 1;
      if (uVar2 != 0) goto LAB_00bc54a6;
      break;
    }
    iVar4 = iVar3;
  } while (iVar3 != 0);
  pvVar1 = (undefined *)F_00406b90(0x5c,0,0);
  if (pvVar1 == (undefined *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00c1f760(pvVar1,this);
  }
LAB_00bc54a6: ;
  *(undefined4 *)(uVar2 + 4) = 0;
  *(undefined4 *)(uVar2 + 8) = *(undefined4 *)((int)this + 0x24);
  if (*(int *)((int)this + 0x24) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 0x24) + 4))) = uVar2;
  }
  *(uint *)((int)this + 0x24) = uVar2;
  return uVar2;
}

/* ref: FUN_00bc54d0 */
uint F_00bc54d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc54d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  iVar1 = param_1[2];
  iVar2 = param_1[1];
  if (iVar2 == 0) {
    *(int *)((int)this + 0x24) = iVar1;
  }
  else {
    *(int *)(iVar2 + 8) = iVar1;
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = iVar2;
  }
  puVar3 = (undefined4 *)((int)this + 0x90);
  if ((puVar3 <= param_1) && (param_1 < (undefined4 *)((int)this + 0x3f0U))) {
    ((code *)*(gen_code32 *)*param_1)(param_1,0);
    uVar4 = (int)param_1 + (-0x90 - (int)this);
    *(undefined1 *)(uVar4 / 0x60 + 0x3f0 + (int)this) = 0;
    return uVar4 * -0x55555555;
  }
  if (param_1 != (undefined4 *)0x0) {
    puVar3 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)*param_1)(param_1,1)));
  }
  return (uint)puVar3;
}

/* ref: FUN_00bc5550 */
unsigned int F_00bc5550(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc5550u, gen_a0, 0u, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00bc4f20(param_1,(undefined4)gen_fl2bits(param_2),0,param_3);
  F_00bc4f20(param_1,(undefined4)gen_fl2bits(param_2),1,param_3);
  *(uint *)((int)param_1 + 0x3fc) = *(uint *)((int)param_1 + 0x3fc) & 0xffffffef;
  return 0;
}

/* ref: FUN_00bc55e0 */
uint F_00bc55e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc55e0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00bc5600 */
uint F_00bc5600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc5600u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00bc5610 */
uint F_00bc5610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc5610u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00bc5630 */
uint F_00bc5630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc5630u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: Client::System::Scheduler::Connection::GraphCharaConnect::vf1 */
uint F_00bc5650(unsigned int gen_a0)
{
  GEN_ENTER(0xbc5650u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x14) = 0;
  *(undefined4 *)(in_ecx + 0x18) = 0;
  return 0;
}

/* ref: FUN_00bc5660 */
unsigned int F_00bc5660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc5660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  *(undefined4 *)this = 0;
  *(int *)((int)this + 4) = *param_1;
  if (*param_1 != 0) {
    *(int *)(*param_1 + 4) = (int)this + -4;
  }
  *param_1 = (int)this + -4;
  return 0;
}

/* ref: FUN_00bc5690 */
unsigned int F_00bc5690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc5690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)((int)this + 4);
  if (iVar1 == 0) {
    *param_1 = iVar2;
  }
  else {
    *(int *)(iVar1 + 8) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 4) = iVar1;
  }
  return 0;
}

/* ref: FUN_00bc56c0 */
unsigned int F_00bc56c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc56c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  *(undefined4 *)this = 0;
  *(int *)((int)this + 4) = *param_1;
  if (*param_1 != 0) {
    *(int *)(*param_1 + 4) = (int)this + -4;
  }
  *param_1 = (int)this + -4;
  return 0;
}

/* ref: FUN_00bc56f0 */
unsigned int F_00bc56f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc56f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)((int)this + 4);
  if (iVar1 == 0) {
    *param_1 = iVar2;
  }
  else {
    *(int *)(iVar1 + 8) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 4) = iVar1;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Object::CharacterController::vf0 */
uint F_00bc5720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc5720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bc4100(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bc5750 */
uint F_00bc5750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc5750u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined4 *)(in_ecx + 4) = param_2;
  return in_ecx;
}

/* ref: FUN_00bc5760 */
unsigned int F_00bc5760(unsigned int gen_a0)
{
  GEN_ENTER(0xbc5760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x1104af4));
  piVar2 = (int *)((int)this + 0x68);
  iVar3 = 2;
  do {
    puVar1 = (undefined4 *)*piVar2;
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  F_004cf880(this);
  return 0;
}

/* ref: FUN_00bc57a0 */
uint F_00bc57a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xbc57a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  *(uint *)((int)this + 0x70) = param_1;
  uVar2 = param_1;
  if (*(char *)((int)this + 0x18) == '\0') {
    *(undefined1 *)((int)this + 0x18) = 1;
    pvVar1 = (undefined *)F_00406b90(0x24,0,0);
    if (pvVar1 == (undefined *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_004cf0c0(pvVar1,param_4,param_5,0);
    }
    *(uint *)((int)this + 0x68) = uVar2;
    pvVar1 = (undefined *)F_00406b90(0x24,0,0);
    if (pvVar1 == (undefined *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_004cf0c0(pvVar1,param_6,param_7,0);
    }
    *(undefined4 *)((int)this + 0x50) = *(undefined4 *)((int)this + 0x68);
    *(uint *)((int)this + 0x6c) = uVar2;
    *(uint *)((int)this + 0x54) = uVar2;
    puVar4 = param_2;
    puVar5 = (undefined4 *)((int)this + 0x20);
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar2 = F_004cf9e0(this,0,0,0,0);
  }
  *(undefined1 *)((int)this + 0x19) = 0;
  return uVar2;
}

/* ref: Client::System::Task::SpursTaskWork::vf5 */
uint F_00bc5840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc5840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(param_1 + 0x24))
                    (*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                     *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),
                     *(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
  *(uint *)(param_1 + 0x28) = uVar1;
  return uVar1;
}

/* ref: FUN_00bc5880 */
uint F_00bc5880(unsigned int gen_a0)
{
  GEN_ENTER(0xbc5880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  int * piVar4;
  
  F_004cf020(this);
  uVar1 = *(uint *)((int)this + 0x28);
  piVar4 = (int *)((int)this + 0x68);
  iVar3 = 2;
  do {
    puVar2 = (undefined4 *)*piVar4;
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined2 *)((int)this + 0x18) = 0x100;
  return uVar1;
}

/* ref: FUN_00bc58d0 */
uint F_00bc58d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc58d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  
  uVar3 = F_004cf030(this);
  cVar2 = (char)uVar3;
  if (cVar2 != '\0') {
    piVar5 = (int *)((int)this + 0x68);
    iVar4 = 2;
    do {
      puVar1 = (undefined4 *)*piVar5;
      if (puVar1 != (undefined4 *)0x0) {
        uVar3 = ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
        uVar3 = CONCAT31((int3)(uVar3 >> 8),cVar2);
        *piVar5 = 0;
      }
      piVar5 = piVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    *param_1 = *(undefined4 *)((int)this + 0x28);
    *(undefined2 *)((int)this + 0x18) = 0x100;
  }
  return uVar3;
}

/* ref: FUN_00bc5930 */
uint F_00bc5930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc5930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_004cf180(*(undefined * PTR32 *)((int)this + 0x68),param_1);
  return (uint)uVar1;
}

/* ref: FUN_00bc5940 */
uint F_00bc5940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc5940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004cf330(*(undefined * PTR32 *)((int)this + 0x6c),param_1);
  return (uint)(uVar1 != 0);
}

/* ref: FUN_00bc5960 */
uint F_00bc5960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc5960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = F_004cf180(*(undefined * PTR32 *)((int)this + 0x68),param_1);
  uVar2 = (uint)uVar3;
  cVar1 = (char)uVar3;
  while (cVar1 == '\0') {
    gen_imp_Sleep(0);
    uVar3 = F_004cf180(*(undefined * PTR32 *)((int)this + 0x68),param_1);
    uVar2 = (uint)uVar3;
    cVar1 = (char)uVar3;
  }
  return uVar2;
}

/* ref: FUN_00bc59a0 */
uint F_00bc59a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc59a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004cf330(*(undefined * PTR32 *)((int)this + 0x6c),param_1);
  while (uVar1 == 0) {
    gen_imp_Sleep(0);
    uVar1 = F_004cf330(*(undefined * PTR32 *)((int)this + 0x6c),param_1);
  }
  return uVar1;
}

/* ref: FUN_00bc59e0 */
uint F_00bc59e0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc59e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_004cefe0(this);
  *(undefined2 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x1104af4));
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  return (uint)this;
}

/* ref: Client::System::Task::SpursTaskWork::vf1 */
unsigned int F_00bc5a10(unsigned int gen_a0)
{
  GEN_ENTER(0xbc5a10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x14) = 1;
  return 0;
}

/* ref: Client::System::Task::SpursTaskWork::vf0 */
uint F_00bc5a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc5a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  undefined * pSVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x1104af4));
  pSVar2 = this + 0x68;
  iVar3 = 2;
  do {
    puVar1 = *(undefined4 * PTR32 *)pSVar2;
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
    pSVar2 = pSVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  F_004cf880(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bc5a80 */
unsigned int F_00bc5a80(float gen_a0)
{
  GEN_ENTER(0xbc5a80u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bc5aa0 */
uint F_00bc5aa0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc5aa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0042e430((undefined *)((int)this + 4),&REFG(undefined, 0x1104b90));
  *(undefined2 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  return 0;
}

/* ref: FUN_00bc5b00 */
uint F_00bc5b00(unsigned int gen_a0)
{
  GEN_ENTER(0xbc5b00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0042e430((undefined *)((int)this + 4),&REFG(undefined, 0x1104b90));
  *(undefined2 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  return 0;
}

/* ref: FUN_00bc5b60 */
uint F_00bc5b60(unsigned int gen_a0)
{
  GEN_ENTER(0xbc5b60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0042b630((int)this + 4);
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)this = 2;
  F_0042e430((undefined *)((int)this + 4),&REFG(undefined, 0x1104b90));
  *(undefined2 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  return (uint)this;
}

/* ref: FUN_00bc5ba0 */
uint F_00bc5ba0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc5ba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint in_ecx;
  undefined * this_00;
  ulonglong uVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (piVar1 != (int *)0x0) {
    uVar3 = 0x1c;
    in_ecx = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
    this_00 = (undefined *)F_00763050(in_ecx,uVar3);
    if (this_00 != (undefined *)0x0) {
      F_008b8670(this_00,*(undefined4 *)((int)this + 0x5c));
    }
  }
  uVar2 = F_0042c880((undefined *)((int)this + 4));
  return (uint)uVar2;
}

/* ref: FUN_00bc5be0 */
uint F_00bc5be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc5be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)this = 2;
  *(undefined4 *)((int)this + 0x5c) = param_1;
  F_0042e430((undefined *)((int)this + 4),&REFG(undefined, 0x1104b90));
  *(undefined2 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  return 0;
}

/* ref: FUN_00bc5c20 */
uint F_00bc5c20(unsigned int gen_a0)
{
  GEN_ENTER(0xbc5c20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar4;
  undefined4 uVar5;
  
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0;
  if (piVar2 != (int *)0x0) {
    uVar5 = 0x1c;
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
    this_00 = (undefined *)F_00763050(uVar3,uVar5);
    uVar3 = 0;
    if (this_00 != (undefined *)0x0) {
      if (*(int *)this == 1) {
        if ((*(int *)((int)this + 100) == 0) &&
           (F_00ab1160((float *)((int)this + 0x60),1), *(float *)((int)this + 0x60) <= 0.0)) {
          F_00bc5aa0(this);
        }
        if (*(char *)((int)this + 0x58) == '\0') {
LAB_00bc5ceb: ;
          uVar3 = F_008b8670(this_00,*(undefined4 *)((int)this + 0x5c));
          *(undefined4 *)this = 2;
          return uVar3;
        }
        bVar1 = F_00538870(&REFG(undefined4, 0x1375bc0),*(undefined4 *)((int)this + 0x5c),0);
        uVar3 = CONCAT31(extraout_var_00,bVar1);
        if (bVar1 == 0) goto LAB_00bc5ceb;
      }
      else {
        uVar3 = *(int *)this - 2;
        if ((uVar3 == 0) && (*(char *)((int)this + 0x58) != '\0')) {
          bVar1 = F_00538870(&REFG(undefined4, 0x1375bc0),*(undefined4 *)((int)this + 0x5c),0);
          uVar3 = CONCAT31(extraout_var,bVar1);
          if (bVar1 != 0) {
            uVar4 = (uint)*(byte *)((int)this + 0x59);
            uVar3 = F_0042a990((int)this + 4);
            F_008bd150(this_00,*(undefined4 *)((int)this + 0x5c),uVar3,uVar4);
            *(undefined4 *)this = 1;
            uVar3 = F_0089d500(this_00,*(undefined4 *)((int)this + 0x5c));
            return uVar3;
          }
        }
      }
      if (*(int *)this == 1) {
        uVar3 = F_0089d500(this_00,*(undefined4 *)((int)this + 0x5c));
      }
    }
  }
  return uVar3;
}

/* ref: FUN_00bc5d20 */
uint F_00bc5d20(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbc5d20u, gen_a0, gen_a1, 0u, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * this;
  bool bVar3;
  bool bVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (piVar1 != (int *)0x0) {
    uVar6 = 0x1c;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
    this = (undefined *)F_00763050(uVar2,uVar6);
    if (this != (undefined *)0x0) {
      F_008b8670(this,param_1[0x17]);
      *param_1 = 2;
    }
  }
  *(undefined1 *)(param_1 + 0x16) = 1;
  uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x4)),param_2,REFG(undefined4, 0x108cc50));
  F_0042ccf0(param_1 + 1,uVar2);
  uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  bVar3 = GEN_ISNAN(param_3) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  bVar4 = bVar3 || param_3 == *(float *)&REFG(undefined, 0x1088114);
  uVar2 = CONCAT22((short)(uVar5 >> 0x10),
                   CONCAT11(bVar4 << 6 | bVar3 << 2 | 2U | !(*(float *)&REFG(undefined, 0x1088114) <= param_3),
                            (undefined1)param_4));
  *(undefined1 *)((int)param_1 + 0x59) = (undefined1)param_4;
  param_1[0x18] = (undefined4)gen_fl2bits(param_3);
  if (bVar3 != bVar4) {
    param_1[0x19] = 1;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return uVar2;
  }
  param_1[0x19] = 0;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: FUN_00bc5df0 */
uint F_00bc5df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc5df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  puVar1 = (uint *)F_00ab29c0(param_1);
  uVar2 = 0;
  if (puVar1 != (uint *)0x0) {
    uVar2 = F_00bc5d20(this,(*puVar1 & 0xffffff) + (int)puVar1,*(float *)&REFG(undefined, 0x1104b8c),
                         (uint)(byte)puVar1[1]);
  }
  return uVar2;
}

/* ref: FUN_00bc5e30 */
unsigned int F_00bc5e30(float gen_a0)
{
  GEN_ENTER(0xbc5e30u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bc5e50 */
uint F_00bc5e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc5e50u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  if (param_1 == REFG(int, 0x1379690)) {
    F_00a7e510(&REFG(undefined1, 0x14ab070),param_2,param_3);
  }
  uVar1 = F_00a64450(&REFG(undefined, 0x14a9a18),param_1);
  if ((uVar1 != 0) && (*(byte *)(uVar1 + 0x1688) == param_2)) {
    *(char *)(uVar1 + 0x1689) = (char)param_3;
  }
  uVar1 = F_00ae0810(&REFG(undefined, 0x1336e40),param_1);
  if (uVar1 != 0) {
    *(char *)(uVar1 + 0x53) = (char)param_3;
  }
  return uVar1;
}

/* ref: FUN_00bc5eb0 */
uint F_00bc5eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc5eb0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  int * piVar3;
  undefined * this;
  uint uVar4;
  undefined4 uVar5;
  
  F_00a7d890(&REFG(undefined, 0x14a9e40),param_2,1);
  if (param_1 == REFG(int, 0x1379690)) {
    F_00a7e510(&REFG(undefined1, 0x14ab070),param_2,1);
  }
  uVar1 = F_00a64450(&REFG(undefined, 0x14a9a18),param_1);
  if ((uVar1 != 0) && (*(byte *)(uVar1 + 0x1688) == param_2)) {
    *(undefined1 *)(uVar1 + 0x1689) = 1;
  }
  uVar1 = F_00ae0810(&REFG(undefined, 0x1336e40),param_1);
  if (uVar1 != 0) {
    *(undefined1 *)(uVar1 + 0x53) = 1;
  }
  F_00a3a020();
  F_00a6e6a0(&REFG(undefined, 0x14a9e40));
  uVar1 = F_00a68280(&REFG(undefined1, 0x14ab070),param_2,1);
  uVar2 = F_00ab21a0(param_2);
  uVar4 = (uint)*(ushort *)(uVar2 + 0x10);
  uVar2 = F_00a68310(&REFG(undefined1, 0x14ab070),uVar4);
  if ((((short)uVar2 == 0) && ((uVar4 == 0x20 || (uVar4 == 0x21)))) ||
     ((param_2 == 0x12 && ((short)uVar1 == 0)))) {
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    if (piVar3 != (int *)0x0) {
      uVar5 = 3;
      uVar1 = ((code *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3);
      uVar1 = F_00763050(uVar1,uVar5);
      if (uVar1 != 0) {
        F_00a6e6a0(&REFG(undefined, 0x14a9e40));
        F_0076ec40(0x26,1,0x1e);
      }
    }
  }
  uVar5 = 1;
  this = (undefined *)F_006b8c00();
  uVar1 = F_006de6a0(this,param_2,uVar5);
  return uVar1;
}

/* ref: FUN_00bc5fc0 */
uint F_00bc5fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc5fc0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  bool bVar1;
  byte bVar2;
  int * piVar3;
  int * in_ecx;
  uint uVar4;
  undefined * this;
  uint uVar5;
  
  bVar1 = false;
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  in_ecx = (int *)F_00a64450(&REFG(undefined, 0x14a9a18),param_1);
  if (in_ecx != (int *)0x0) {
    if ((short)param_3 != 1) {
      F_00a7d290((*(byte *)(in_ecx + 0x5a2) != param_2) + 0x24e,in_ecx,param_2,param_3 & 0xffff,0,
                   REFG(float, 0x10b9308));
      uVar4 = ((code *)*(gen_code32 *)(*in_ecx + 0x98))(in_ecx);
      if ((char)uVar4 != '\0') {
        F_00ab4370(0x74,in_ecx,in_ecx,0,0);
      }
    }
    bVar2 = F_00a9f620(in_ecx);
    if (bVar2 != 0) {
      bVar1 = true;
    }
  }
  if (param_1 == REFG(int, 0x1379690)) {
    F_00a7e510(&REFG(undefined1, 0x14ab070),param_2,param_3);
  }
  uVar4 = F_00a64450(&REFG(undefined, 0x14a9a18),param_1);
  if ((uVar4 != 0) && (*(byte *)(uVar4 + 0x1688) == param_2)) {
    *(char *)(uVar4 + 0x1689) = (char)param_3;
  }
  uVar4 = F_00ae0810(&REFG(undefined, 0x1336e40),param_1);
  if (uVar4 != 0) {
    *(char *)(uVar4 + 0x53) = (char)param_3;
  }
  if (bVar1) {
    F_00a7d890(&REFG(undefined, 0x14a9e40),param_2,param_3);
    F_00a3a020();
    F_00a6e6a0(&REFG(undefined, 0x14a9e40));
    uVar4 = param_2;
    uVar5 = param_3;
    this = (undefined *)F_006b8c00();
    F_006de6a0(this,uVar4,uVar5);
    F_00a6e1d0(&REFG(undefined, 0x14a9e40),param_2,param_3);
    uVar4 = F_00a7e5a0(&REFG(undefined1, 0x14ab070),(uint)REFG(undefined2, 0x14ab148));
    if (piVar3 != (int *)0x0) {
      uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xd8))(piVar3,0x1d526,1,2,0xffffffff);
    }
  }
  return uVar4;
}

/* ref: FUN_00bc6120 */
unsigned int F_00bc6120(float gen_a0)
{
  GEN_ENTER(0xbc6120u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: Client::Game::Character::BattleChara::vf43 */
uint F_00bc6140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc6140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_00aa5e20(this,param_1);
  F_00ac6e20(this + 0x30c0);
  F_00ac3b40(this + 0x3210);
  F_00b7af70(this + 0x2f44,this);
  uVar1 = F_00b7aa60(this + 0x2f44);
  return uVar1;
}

/* ref: Client::Game::Character::BattleChara::vf44 */
uint F_00bc6190(unsigned int gen_a0)
{
  GEN_ENTER(0xbc6190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00aa6560(this);
  F_00ac3b60();
  return uVar1;
}

/* ref: FUN_00bc61b0 */
uint F_00bc61b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc61b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 < 2) {
    return *(uint *)(in_ecx + 0x18 + param_2 * 4);
  }
  return 0;
}

/* ref: FUN_00bc61e0 */
uint F_00bc61e0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc61e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x11053b0));
  F_00acfad0(in_ecx + 1);
  *(undefined1 *)(in_ecx + 0x60) = 0;
  in_ecx[0x61] = 1;
  return (uint)in_ecx;
}

/* ref: FUN_00bc6220 */
uint F_00bc6220(unsigned int gen_a0)
{
  GEN_ENTER(0xbc6220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0xc8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  if (*(int *)((int)this + 0x184) < 9) {
    switch((unsigned int)(uintptr_t)(*(int *)((int)this + 0x184))) {
    case 1: ;
      bVar2 = F_00ad01f0((undefined *)((int)this + 4));
      *(uint *)((int)this + 0x184) = (-(uint)(bVar2 != 0) & 0xfffffff9) + 9;
      break;
    case 2: ;
      uVar3 = F_00ad0240((undefined *)((int)this + 4),0);
      *(uint *)((int)this + 0x184) = (-(uint)((uVar3 & 0xff) != 0) & 0xfffffffb) + 8;
      break;
    case 3: ;
    case 5: ;
    case 7: ;
      F_00acfc20((undefined *)((int)this + 4));
      if (*(int *)((int)this + 0x1c) != 1) {
        if (*(int *)((int)this + 0x1c) == 2) {
          *(int *)((int)this + 0x184) = *(int *)((int)this + 0x184) + 1;
        }
        else {
          *(undefined4 *)((int)this + 0x184) = 8;
        }
      }
      break;
    case 4: ;
      F_0042b630(((undefined1 *)(gen_frame + 0x60)));
      F_0042b630(((undefined1 *)(gen_frame + 0x8)));
      (*(undefined4 *)(gen_frame + 0x5c)) = 0;
      (*(undefined4 *)(gen_frame + 0xb4)) = 0x45;
      (*(undefined4 *)(gen_frame + 0xb8)) = 0x1ab;
      F_0042e430(((undefined1 *)(gen_frame + 0x60)),"(Auto) GM Call from jail.");
      (*(undefined4 *)(gen_frame + 0xbc)) = 0;
      F_0042e430(((undefined1 *)(gen_frame + 0x8)),"(Auto) GM Call from jail.");
      F_0042d540(((undefined1 *)(gen_frame + 0x8)),&REFG(undefined, 0x11053a8));
      if (REFG(int, 0x137104c) != 0) {
        uVar3 = F_004309e0(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),((undefined1 *)(gen_frame + 0x4)));
        uVar3 = F_004142e0(uVar3);
        F_0042d4d0(((undefined1 *)(gen_frame + 0x8)),uVar3);
      }
      uVar3 = F_00ad0d30((undefined *)((int)this + 4),0,&(*(undefined4 *)(gen_frame + 0x5c)),((undefined1 *)(gen_frame + 0x8)));
      *(uint *)((int)this + 0x184) = (-(uint)((uVar3 & 0xff) != 0) & 0xfffffffd) + 8;
      F_0042c880(((undefined1 *)(gen_frame + 0x8)));
      F_0042c880(((undefined1 *)(gen_frame + 0x60)));
      break;
    case 6: ;
      uVar3 = F_00ad0470((undefined *)((int)this + 4),0);
      *(uint *)((int)this + 0x184) = 8 - (uint)((uVar3 & 0xff) != 0);
      break;
    case 8: ;
      F_00acfc20((undefined *)((int)this + 4));
      bVar2 = F_00acfb50((undefined *)((int)this + 4));
      if (bVar2 != 0) {
        *(undefined4 *)((int)this + 0x184) = 9;
      }
    }
  }
  iVar1 = *(int *)((int)this + 0x184);
  F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
  return (uint)(iVar1 == 9);
}

/* ref: Client::SupportDesk::GMCallModule::vf0 */
uint F_00bc6400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc6400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11053b0));
  F_00ad0190(this + 4);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bc6430 */
uint F_00bc6430(unsigned int gen_a0)
{
  GEN_ENTER(0xbc6430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0042b630((int)this + 8);
  *(undefined1 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  F_0042e430((undefined *)((int)this + 8),&REFG(undefined1, 0x107fc63));
  return (uint)this;
}

/* ref: FUN_00bc6460 */
unsigned int F_00bc6460(float gen_a0)
{
  GEN_ENTER(0xbc6460u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bc6480 */
uint F_00bc6480(unsigned int gen_a0)
{
  GEN_ENTER(0xbc6480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int iVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1105aec));
  iVar1 = 0x13;
  this_00 = (undefined *)((int)this + 0x73c);
  do {
    this_00 = (undefined *)((int)this_00 + -0x5c);
    uVar2 = F_0042c880(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return (uint)uVar2;
}

/* ref: Client::Game::UI::BuddyEquip::vf1 */
uint F_00bc64b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbc64b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  uint uVar2;
  
  if ((*param_2 & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 4);
    if (iVar1 < 0) goto LAB_00bc6505;
  }
  if (iVar1 < (int)(uint)(byte)this[0x734]) {
    uVar2 = (uint)(byte)this[iVar1 * 0x5c + 4];
    F_00a69c10(0,uVar2);
    F_00a69c10(1,uVar2);
    F_00a69c10(2,uVar2);
  }
LAB_00bc6505: ;
  *(undefined4 *)(this + 0x738) = 0;
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: FUN_00bc6530 */
uint F_00bc6530(unsigned int gen_a0)
{
  GEN_ENTER(0xbc6530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int iVar1;
  
  *(undefined1 *)((int)this + 0x734) = 0;
  this_00 = (undefined *)((int)this + 0xc);
  iVar1 = 0x14;
  do {
    *(undefined1 *)((int)this_00 + -8) = 0;
    F_0042e430(this_00,&REFG(undefined, 0x110546b));
    this_00 = (undefined *)((int)this_00 + 0x5c);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(undefined4 *)((int)this + 0x738) = 0;
  return (uint)this;
}

/* ref: FUN_00bc6580 */
unsigned int F_00bc6580(void)
{
  GEN_ENTER(0xbc6580u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00bc65a0 */
uint F_00bc65a0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc65a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  undefined1 * puVar2;
  
  puVar2 = (undefined1 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1105aec));
  iVar1 = 0x13;
  this_00 = (undefined *)((int)this + 0xc);
  do {
    F_0042b630(this_00);
    *puVar2 = 0;
    *(undefined4 *)((int)this_00 + -4) = 0;
    F_0042e430(this_00,&REFG(undefined1, 0x107fc63));
    puVar2 = puVar2 + 0x5c;
    this_00 = (undefined *)((int)this_00 + 0x5c);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_00bc6530(this);
  return (uint)this;
}

/* ref: FUN_00bc6600 */
uint F_00bc6600(unsigned int gen_a0)
{
  GEN_ENTER(0xbc6600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  byte bVar2;
  byte bVar3;
  int * piVar4;
  uint uVar5;
  uint * puVar6;
  uint uVar7;
  undefined * this_00;
  int iVar8;
  undefined4 * puVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  undefined * pvVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint * local_c;
  byte local_5;
  
  if (*(int *)((int)this + 0x738) != 0) {
    piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4)));
    uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x54))(piVar4,*(undefined4 *)((int)this + 0x738),0);
    return uVar5;
  }
  *(undefined1 *)((int)this + 0x734) = 0;
  puVar9 = (undefined4 *)((int)this + 8);
  iVar8 = 0x14;
  do {
    *(undefined1 *)(puVar9 + -1) = 0;
    *puVar9 = 0;
    F_0042e430(puVar9 + 1,&REFG(undefined, 0x110545b));
    cVar1 = REFG(char, 0x14ab29a);
    puVar9 = puVar9 + 0x17;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  bVar2 = F_00a6b340(&REFG(undefined, 0x14ab584),0);
  local_5 = 1;
  local_c = (uint *)0x1;
  do {
    puVar6 = (uint *)F_00ab2c60(local_c);
    uVar5 = puVar6[7];
    uVar7 = puVar6[6];
    uVar10 = puVar6[5];
    if ((((*(char *)((int)puVar6 + 0x26) == cVar1) && (cVar1 != '\0')) ||
        (*(char *)((int)puVar6 + 0x26) == '\0')) &&
       ((bVar3 = F_00a6b2e0(&REFG(undefined, 0x14ab584),local_c), bVar3 != 0 &&
        ((uVar5 != 0 || uVar7 != 0) || uVar10 != 0)))) {
      *((byte *)GEN_TOP(((uint)*(byte *)((int)this + 0x734) * 0x5c + 4 + (int)this))) = local_5;
      F_0042e430(((undefined *)GEN_TOP(((uint)*(byte *)((int)this + 0x734) * 0x5c + 0xc + (int)this))),
                   (*puVar6 & 0xffffff) + (int)puVar6);
      if ((uint *)(uint)bVar2 == local_c) {
        *((undefined4 *)GEN_TOP(((uint)*(byte *)((int)this + 0x734) * 0x5c + 8 + (int)this))) = 0xea61;
      }
      *(char *)((int)this + 0x734) = *(char *)((int)this + 0x734) + '\x01';
    }
    local_c = (uint *)((int)local_c + 1);
    local_5 = local_5 + 1;
  } while (local_5 < 0x14);
  puVar6 = (uint *)F_00ab2c60(0);
  *((undefined1 *)GEN_TOP(((uint)*(byte *)((int)this + 0x734) * 0x5c + 4 + (int)this))) = 0;
  F_0042e430(((undefined *)GEN_TOP(((uint)*(byte *)((int)this + 0x734) * 0x5c + 0xc + (int)this))),
               (*puVar6 & 0xffffff) + (int)puVar6);
  *(char *)((int)this + 0x734) = *(char *)((int)this + 0x734) + '\x01';
  piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar5 = (uint)(byte)((*(char *)((int)this + 0x734) + '\x02') * '\x03');
  puVar6 = (uint *)F_00406bb0(-(uint)(0xfffffffb < uVar5 * 8) | uVar5 * 8 + 4,0,0);
  if (puVar6 == (uint *)0x0) {
    local_c = (uint *)0x0;
  }
  else {
    *puVar6 = uVar5;
    local_c = puVar6 + 1;
    puVar6 = local_c;
    uVar7 = uVar5;
    while (uVar7 = uVar7 - 1, -1 < (int)uVar7) {
      *puVar6 = 0;
      puVar6 = puVar6 + 2;
    }
  }
  bVar2 = 0;
  if (*(char *)((int)this + 0x734) != '\0') {
    do {
      uVar10 = (uint)bVar2;
      uVar7 = *(uint *)(uVar10 * 0x5c + 8 + (int)this);
      F_005a2710(local_c + (uVar10 * 3 + 6) * 2,3);
      (local_c + (uVar10 * 3 + 6) * 2)[1] = uVar7;
      uVar7 = F_0042a990((int)this + uVar10 * 0x5c + 0xc);
      F_005a2710(local_c + uVar10 * 6 + 0xe,6);
      (local_c + uVar10 * 6 + 0xe)[1] = uVar7;
      bVar2 = bVar2 + 1;
    } while (bVar2 < *(byte *)((int)this + 0x734));
  }
  if ((piVar4 != (int *)0x0) && (1 < *(byte *)((int)this + 0x734))) {
    uVar16 = 4;
    uVar15 = 0;
    uVar14 = 0;
    uVar12 = 0x28;
    puVar6 = local_c;
    pvVar13 = this;
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4)));
    uVar5 = F_008668b0(this_00,uVar12,uVar5,puVar6,pvVar13,uVar14,uVar15,uVar16);
    *(uint *)((int)this + 0x738) = uVar5;
  }
  uVar5 = 0;
  if (local_c != (uint *)0x0) {
    uVar5 = local_c[-1];
    puVar6 = local_c + uVar5 * 2;
    while (uVar5 = uVar5 - 1, -1 < (int)uVar5) {
      puVar6 = puVar6 + -2;
      F_005a2670(puVar6);
    }
    uVar11 = F_00406b30(local_c + -1);
    uVar5 = (uint)uVar11;
  }
  return uVar5;
}

/* ref: Client::Game::UI::BuddyEquip::vf0 */
uint F_00bc68e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc68e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1105aec));
  iVar1 = 0x13;
  this_00 = this + 0x73c;
  do {
    this_00 = this_00 + -0x5c;
    F_0042c880(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bc6930 */
unsigned int F_00bc6930(float gen_a0)
{
  GEN_ENTER(0xbc6930u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bc6950 */
uint F_00bc6950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc6950u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined4 *)(in_ecx + 4) = param_2;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  return 0;
}

/* ref: FUN_00bc6970 */
unsigned int F_00bc6970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc6970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int in_ecx;
  
  if ((param_1 < 2) && (in_ecx = *(int *)((int)this + param_1 * 4 + 8), in_ecx != 0)) {
    F_00983120(in_ecx,0);
    F_009bc530(*(undefined * PTR32 *)((int)this + param_1 * 4 + 8),1);
    F_009bc4a0(*(undefined * PTR32 *)((int)this + param_1 * 4 + 8));
    *(undefined4 *)((int)this + param_1 * 4 + 8) = 0;
  }
  return 0;
}

/* ref: FUN_00bc69b0 */
byte F_00bc69b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc69b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (param_1 < 2) {
    return *(int *)((int)this + param_1 * 4 + 8) == 0;
  }
  return 1;
}

/* ref: Client::Game::Character::Companion::vf0 */
uint F_00bc69d0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc69d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0xe0000000;
  if (*(int *)(this + 0x2f20) != 0) {
    uVar1 = *((uint *)GEN_TOP((*(int *)(this + 0x2f20) + 0x74)));
  }
  return uVar1;
}

/* ref: Client::Game::Character::Companion::vf43 */
unsigned int F_00bc69f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc69f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  F_00aa5e20(this,param_1);
  *(undefined4 *)(this + 0x2f30) = REFG(float, 0x1106240);
  uVar1 = REFG(float, 0x1087f04);
  this[0x8a] = (undefined1)0x9;
  *(undefined4 *)(this + 0x2f20) = 0;
  *(undefined4 *)(this + 0x2f28) = 0;
  *(undefined4 *)(this + 0x2f2c) = 0;
  *(undefined4 *)(this + 0x2f34) = uVar1;
  *(undefined4 *)(this + 0x2f38) = 0;
  *(undefined4 *)(this + 0x2f24) = 0;
  *(undefined * PTR32 *)(this + 0x2f40) = this;
  *(undefined4 *)(this + 0x2f44) = 0;
  *(undefined4 *)(this + 0x2f48) = 0;
  return 0;
}

/* ref: FUN_00bc6a70 */
byte F_00bc6a70(unsigned int gen_a0)
{
  GEN_ENTER(0xbc6a70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(short *)(in_ecx + 0x2f24) == 4;
}

/* ref: FUN_00bc6aa0 */
uint F_00bc6aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc6aa0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x2f24) = (ushort)(byte)param_2;
  return (uint)(byte)param_2;
}

/* ref: FUN_00bc6ac0 */
uint F_00bc6ac0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc6ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = F_00ab2870(*(undefined4 *)((int)this + 0x80));
  if ((uVar1 != 0) &&
     ((uint)*(byte *)(uVar1 + 0x1a) + (uint)*(byte *)(uVar1 + 0x19) + (uint)*(byte *)(uVar1 + 0x18)
      < 0x65)) {
    uVar2 = F_00a4b840();
    uVar2 = uVar2 % 100;
    uVar3 = 0;
    do {
      uVar2 = uVar2 - *(byte *)(uVar1 + 0x18 + uVar3);
      if ((int)uVar2 < 0) {
        return uVar3 + 4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 3);
    return 0;
  }
  return 0;
}

/* ref: FUN_00bc6b20 */
uint F_00bc6b20(unsigned int gen_a0)
{
  GEN_ENTER(0xbc6b20u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = (*(uint *)&gen_args[0]);
  uVar2 = F_00af2610((*(uint *)&gen_args[0]),*(float *)&REFG(undefined, 0x134290c),(float)(float10)0,&(*(uint *)&gen_args[0]),REFG(float, 0x1105b30),0,0,0
                       ,0,0,0,0,3,0);
  if ((char)uVar2 != '\0') {
    *(uint *)(uVar1 + 4) = (*(uint *)&gen_args[0]);
  }
  return uVar2;
}

/* ref: Client::Game::Character::Companion::vf13 */
unsigned int F_00bc6c10(void)
{
  GEN_ENTER(0xbc6c10u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00bc6c20 */
unsigned int F_00bc6c20(unsigned int gen_a0)
{
  GEN_ENTER(0xbc6c20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined4 *)((int)this + 4) = 0;
  piVar1 = (int *)((int)this + 8);
  uVar2 = 0;
  do {
    if ((uVar2 < 2) && (*piVar1 != 0)) {
      F_00983120(*piVar1,0);
      F_009bc530((undefined *)*piVar1,1);
      F_009bc4a0((undefined *)*piVar1);
      *piVar1 = 0;
    }
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 1;
  } while ((int)uVar2 < 2);
  return 0;
}

/* ref: FUN_00bc6c70 */
byte F_00bc6c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc6c70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  if (1 < param_1) {
    return 0;
  }
  iVar1 = *(int *)((int)this + param_1 * 4 + 8);
  if (iVar1 != 0) {
    F_00983120(iVar1,0);
    F_009bc530(*(undefined * PTR32 *)((int)this + param_1 * 4 + 8),1);
    F_009bc4a0(*(undefined * PTR32 *)((int)this + param_1 * 4 + 8));
    *(undefined4 *)((int)this + param_1 * 4 + 8) = 0;
  }
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x2f20) == 0) {
      return 0;
    }
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar1 + 0x2f20) + 0x98))))(*(int * PTR32 *)(iVar1 + 0x2f20));
    if ((char)uVar2 == '\0') {
      return 0;
    }
  }
  uVar2 = F_00ab4370(param_2,*(undefined4 *)((int)this + 4),*(undefined4 *)((int)this + 4),0,0);
  *(uint *)((int)this + param_1 * 4 + 8) = uVar2;
  if (uVar2 == 0) {
    return 0;
  }
  F_00983120(uVar2,this);
  return 1;
}

/* ref: Client::Game::Character::Companion::VfxList::vf1 */
unsigned int F_00bc6d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc6d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int in_ecx;
  undefined * pVVar1;
  uint uVar2;
  
  pVVar1 = this + 8;
  uVar2 = 0;
  do {
    in_ecx = *(int *)pVVar1;
    if (((in_ecx == param_1) && (uVar2 < 2)) && (in_ecx != 0)) {
      F_00983120(in_ecx,0);
      F_009bc530(*(undefined * PTR32 *)pVVar1,1);
      F_009bc4a0(*(undefined * PTR32 *)pVVar1);
      *(int *)pVVar1 = 0;
    }
    uVar2 = uVar2 + 1;
    pVVar1 = pVVar1 + 4;
  } while ((int)uVar2 < 2);
  return 0;
}

/* ref: Client::Game::Character::Companion::vf44 */
uint F_00bc6d60(unsigned int gen_a0)
{
  GEN_ENTER(0xbc6d60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 extraout_EDX = 0;
  
  F_00bc6c20(this + 0x2f3c);
  uVar1 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)this)))(this);
  uVar1 = F_00a67f50(uVar1,extraout_EDX);
  if (uVar1 != 0) {
    F_00a6ce30(&REFG(undefined, 0x14b2788),uVar1,0xe0000000,0);
  }
  uVar1 = F_00aa6560(this);
  return uVar1;
}

/* ref: FUN_00bc6da0 */
uint F_00bc6da0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc6da0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  F_00aa0980(in_ecx,(float)(float10)0,0);
  *(undefined4 *)(in_ecx + 0x2f28) = 0;
  *(undefined2 *)(in_ecx + 0x2f24) = 1;
  return 1;
}

/* ref: FUN_00bc6dd0 */
uint F_00bc6dd0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc6dd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  int * piVar2;
  undefined4 uVar3;
  uint in_EAX = 0;
  bool bVar4;
  
  if (*(int *)((int)this + 0xec) != 0) {
    in_EAX = ((code *)*(gen_code32 *)(*(int *)this + 0x70))();
    if (((char)in_EAX != '\0') && (piVar2 = *(int * PTR32 *)((int)this + 0x2f20), piVar2 != (int *)0x0)) {
      in_EAX = ((code *)*(gen_code32 *)(*piVar2 + 0x98))(piVar2);
      if ((char)in_EAX != '\0') {
        bVar4 = GEN_ISNAN(*(float *)((int)this + 0x2f28)) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
        if (bVar4 != (bVar4 || *(float *)((int)this + 0x2f28) == *(float *)&REFG(undefined, 0x1088114))) {
          F_00bc6c70((undefined *)((int)this + 0x2f3c),0,0xa7);
        }
        in_EAX = REFG(undefined4, 0x137104c);
        fVar1 = ((float)GEN_TOF(((float10)*(float *)(REFG(undefined4, 0x137104c) + 0x1198) +
                       (float10)*(float *)((int)this + 0x2f28))));
        *(float *)((int)this + 0x2f28) = fVar1;
        uVar3 = REFG(float, 0x1106234);
        if (*(double *)&REFG(undefined, 0x1106258) < (double)fVar1) {
          *(ushort *)((int)this + 0x2f26) = *(ushort *)((int)this + 0x2f26) & 0xfff7;
          *(undefined4 *)((int)this + 0x2ec8) = uVar3;
          *(undefined2 *)((int)this + 0x2f24) = 3;
        }
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00bc6e90 */
uint F_00bc6e90(unsigned int gen_a0)
{
  GEN_ENTER(0xbc6e90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  float10 fVar2;
  
  if (!((float10)*(float *)((int)this + 0x2f2c) < (float10)*(float *)((int)this + 0x2f30))) {
    uVar1 = F_00bc6ac0(this);
    if (uVar1 == 0) {
      uVar1 = 3;
    }
    F_00aa4270(this,uVar1,0,0);
    *(undefined4 *)((int)this + 0x2f2c) = 0;
    uVar1 = F_00a4b780(10000);
    fVar2 = (float10)(int)uVar1;
    if ((int)uVar1 < 0) {
      fVar2 = fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    *(float *)((int)this + 0x2f30) =
         (float)(fVar2 / (float10)*(double *)&REFG(undefined, 0x10a2b98) + (float10)*(double *)&REFG(undefined, 0x10944e0));
    return uVar1;
  }
  uVar1 = REFG(undefined4, 0x137104c);
  *(float *)((int)this + 0x2f2c) =
       ((float)GEN_TOF(((float10)*(float *)((int)this + 0x2f2c) + (float10)*(float *)(REFG(undefined4, 0x137104c) + 0x1198))))
  ;
  return uVar1;
}

/* ref: FUN_00bc7150 */
byte F_00bc7150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc7150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  bool bVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar1 = *(float *)((int)this + 0xc4);
  (*(float *)(gen_frame + 0x94)) = fVar1;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  fVar6 = (float10)0 * (float10)0;
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
  fVar2 = ((float)GEN_TOF((fVar6 + ((float10)fVar1 * (float10)fVar1 + fVar6))));
  (*(float *)(gen_frame + 0xbc)) = fVar2;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined2 *)(gen_frame + 0x60)) = 0;
  (*(undefined1 *)(gen_frame + 0x62)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined2 *)(gen_frame + 0x80)) = 0;
  (*(undefined1 *)(gen_frame + 0x82)) = 0;
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(undefined4 *)(gen_frame + 0x88)) = 0;
  fVar2 = ((float)GEN_TOF(SQRT((float10)fVar2)));
  (*(float *)(gen_frame + 0xbc)) = fVar2;
  fVar7 = (float10)fVar2;
  fVar6 = (float10)0;
  bVar5 = GEN_ISNAN(fVar7) || GEN_ISNAN(fVar6);
  if (bVar5 == (bVar5 || fVar7 == fVar6)) {
    (*(float *)(gen_frame + 0xbc)) = *(float *)((int)this + 0xc0);
    fVar2 = (float)((float10)*param_1 + (float10)0);
    (*(float *)(gen_frame + 0xa0)) = fVar2;
    (*(float *)(gen_frame + 0xa4)) = (float)((float10)param_1[1] + (float10)fVar1);
    fVar3 = (float)((float10)0 + (float10)param_1[2]);
    (*(float *)(gen_frame + 0xa8)) = fVar3;
    (*(float *)(gen_frame + 0x90)) = fVar2;
    (*(float *)(gen_frame + 0x94)) = (float)((float10)param_1[1] + (float10)fVar1);
    (*(float *)(gen_frame + 0x98)) = fVar3;
    bVar4 = F_00af26b0(param_1,&(*(float *)(gen_frame + 0x90)),(float)fVar6,*(float *)((int)this + 0xc0),&(*(float *)(gen_frame + 0xa0)),
                         &(*(undefined1 *)(gen_frame + 0xbb)),&(*(undefined4 *)(gen_frame + 0x0)),(float)fVar6);
    if (bVar4 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00bc72e0 */
uint F_00bc72e0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5, float gen_a6)
{
  GEN_ENTER(0xbc72e0u, gen_a0, 0u, 0u, 0u);
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a0;
  float in_xmm1 = (float)gen_a1;
  float in_xmm2 = (float)gen_a2;
  float in_xmm3 = (float)gen_a3;
  float in_xmm7 = (float)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  float param_7 = (float)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  float fVar2;
  float * pfVar3;
  uint uVar4;
  float10 fVar5;
  
  (*(float *)(gen_frame + 0x20)) = REFG(float, 0x1302c90);
  (*(float *)(gen_frame + 0x24)) = gen_bits2f(REFG(float, 0x1302c94));
  (*(float *)(gen_frame + 0x28)) = gen_bits2f(REFG(float, 0x1302c98));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)((int)in_ecx + 0x2f20) + 0xb0))) + (float10)param_7)));
  (*(float *)(gen_frame + 0x3c)) = fVar1;
  fVar1 = (float)((float10)fVar1 * (float10)REFG(double, 0x1088108));
  (*(float *)(gen_frame + 0x3c)) = fVar1;
  fVar5 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)fVar1);
  (*(float *)(gen_frame + 0x38)) = (float)fVar5;
  (*(float *)(gen_frame + 0x4)) = (float)fVar5;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  fVar5 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)(*(float *)(gen_frame + 0x3c)));
  (*(float *)(gen_frame + 0x38)) = (float)fVar5;
  (*(float *)(gen_frame + 0xc)) = (float)fVar5;
  pfVar3 = (float *)F_004f41e0(&(*(float *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x0)));
  (*(float *)(gen_frame + 0x20)) = *pfVar3;
  (*(float *)(gen_frame + 0x24)) = pfVar3[1];
  (*(float *)(gen_frame + 0x28)) = pfVar3[2];
  F_0046f0e0(&(*(float *)(gen_frame + 0x20)),*(float *)((int)in_ecx + 0x2f34));
  pfVar3 = (float *)F_00a5feb0(*(undefined * PTR32 *)((int)in_ecx + 0x2f20));
  (*(float *)(gen_frame + 0x10)) = (float)((float10)*pfVar3 + (float10)(*(float *)(gen_frame + 0x20)));
  fVar1 = pfVar3[1];
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x24)));
  fVar2 = pfVar3[2];
  (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x28)));
  *param_6 = (float)((float10)*pfVar3 + (float10)(*(float *)(gen_frame + 0x20)));
  param_6[1] = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x24)));
  param_6[2] = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x28)));
  F_00bc6f20(in_ecx,param_6);
  uVar4 = F_00af2610(param_6,*(float *)&REFG(undefined, 0x134290c),(float)(float10)0,&(*(float *)(gen_frame + 0x38)),REFG(float, 0x1105b30),0,0,
                       0,0,0,0,0,3,0);
  if ((char)uVar4 != '\0') {
    param_6[1] = (*(float *)(gen_frame + 0x38));
  }
  return uVar4;
}

/* ref: FUN_00bc7440 */
unsigned int F_00bc7440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc7440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  float fVar2;
  int iVar3;
  float * pfVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float in_XMM1_Da = 0;
  float in_XMM2_Da = 0;
  float in_XMM3_Da = 0;
  float in_XMM7_Da = 0;
  float fVar8;
  
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = this;
  if (*(undefined * PTR32 *)((int)this + 0x2f20) != (undefined *)0x0) {
    pfVar4 = (float *)F_00a5feb0(*(undefined * PTR32 *)((int)this + 0x2f20));
    (*(float *)(gen_frame + 0x10)) = (float)((float10)*param_1 - (float10)*pfVar4);
    (*(float *)(gen_frame + 0x14)) = (float)((float10)param_1[1] - (float10)pfVar4[1]);
    (*(float *)(gen_frame + 0x18)) = (float)((float10)param_1[2] - (float10)pfVar4[2]);
    (*(float *)(gen_frame + 0x20)) = (float)((float10)*param_1 - (float10)*pfVar4);
    (*(float *)(gen_frame + 0x24)) = (float)((float10)param_1[1] - (float10)pfVar4[1]);
    (*(float *)(gen_frame + 0x28)) = (float)((float10)param_1[2] - (float10)pfVar4[2]);
    if ((REFG(int, 0x1375bbc) != -1) && (iVar3 = (&REFG(undefined4, 0x1375b90))[REFG(int, 0x1375bbc)], this = (*(undefined * PTR32 *)(gen_frame + 0x3c)), iVar3 != 0)
       ) {
      pfVar4 = (float *)F_00a5feb0(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x2f20));
      fVar1 = ((float)GEN_TOF(((float10)*pfVar4 - (float10)*(float *)(iVar3 + 0x40))));
      (*(float *)(gen_frame + 0x10)) = fVar1;
      ((float *)(gen_frame + 0x0))[1] = 0.0;
      fVar2 = ((float)GEN_TOF(((float10)pfVar4[2] - (float10)*(float *)(iVar3 + 0x48))));
      (*(float *)(gen_frame + 0x18)) = fVar2;
      ((float *)(gen_frame + 0x0))[0] = fVar1;
      ((float *)(gen_frame + 0x0))[2] = fVar2;
      fVar8 = F_00aae7a0(&(*(float *)(gen_frame + 0x20)),((float *)(gen_frame + 0x0)));
      ((float *)(gen_frame + 0x30))[2] = fVar8;
      pfVar4 = ((float *)(gen_frame + 0x30)) + 2;
      fVar1 = (float)((float10)*(double *)&REFG(undefined, 0x1080228) - (float10)*(float *)&REFG(undefined, 0x13429ac));
      ((float *)(gen_frame + 0x30))[1] = fVar1;
      fVar2 = (float)((float10)*(float *)&REFG(undefined, 0x13429ac) - (float10)*(double *)&REFG(undefined, 0x1080228));
      ((float *)(gen_frame + 0x30))[0] = fVar2;
      fVar6 = (float10)fVar8;
      if (!(fVar6 < (float10)fVar1)) {
        pfVar4 = ((float *)(gen_frame + 0x30)) + 1;
      }
      if (!((float10)fVar2 < (float10)*pfVar4)) {
        pfVar4 = ((float *)(gen_frame + 0x30));
      }
      ((float *)(gen_frame + 0x30))[0] = *pfVar4;
      fVar7 = (float10)*pfVar4;
      this = (*(undefined * PTR32 *)(gen_frame + 0x3c));
      if ((GEN_ISNAN(fVar6) || GEN_ISNAN(fVar7)) == ((GEN_ISNAN(fVar6) || GEN_ISNAN(fVar7)) || fVar6 == fVar7)) {
        (*(float *)(gen_frame + 0x10)) = 0.0;
        ((float *)(gen_frame + 0x30))[0] = (float)(fVar7 - fVar6);
        fVar1 = ((float)GEN_TOF(((float10)(float)(fVar7 - fVar6) * (float10)REFG(double, 0x1088108))));
        ((float *)(gen_frame + 0x30))[0] = fVar1;
        fVar6 = F_00c4cde0(in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,(float10)fVar1);
        ((float *)(gen_frame + 0x30))[1] = (float)fVar6;
        (*(float *)(gen_frame + 0x14)) = (float)fVar6;
        (*(float *)(gen_frame + 0x18)) = 0.0;
        fVar6 = F_00c4ca20(in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,(float10)((float *)(gen_frame + 0x30))[0]);
        ((float *)(gen_frame + 0x30))[0] = (float)fVar6;
        (*(float *)(gen_frame + 0x1c)) = (float)fVar6;
        pfVar4 = (float *)F_004f41e0(&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x10)));
        (*(float *)(gen_frame + 0x20)) = *pfVar4;
        (*(float *)(gen_frame + 0x24)) = pfVar4[1];
        (*(float *)(gen_frame + 0x28)) = pfVar4[2];
        this = (*(undefined * PTR32 *)(gen_frame + 0x3c));
      }
    }
    fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x2f34) * (float10)*(double *)&REFG(undefined, 0x10b3238))));
    ((float *)(gen_frame + 0x30))[0] = fVar1;
    F_0046f0e0(&(*(float *)(gen_frame + 0x20)),fVar1);
    pfVar4 = (float *)F_00a5feb0(*(undefined * PTR32 *)((int)this + 0x2f20));
    (*(float *)(gen_frame + 0x10)) = (float)((float10)*pfVar4 + (float10)(*(float *)(gen_frame + 0x20)));
    fVar1 = pfVar4[1];
    (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x24)));
    fVar2 = pfVar4[2];
    (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x28)));
    *param_1 = (float)((float10)*pfVar4 + (float10)(*(float *)(gen_frame + 0x20)));
    param_1[1] = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x24)));
    param_1[2] = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x28)));
    uVar5 = F_00af2610(param_1,*(float *)&REFG(undefined, 0x134290c),(float)(float10)0,((float *)(gen_frame + 0x30)),REFG(float, 0x1105b30),0,0
                         ,0,0,0,0,0,3,0);
    if ((char)uVar5 != '\0') {
      param_1[1] = ((float *)(gen_frame + 0x30))[0];
    }
  }
  return 0;
}

/* ref: FUN_00bc7680 */
uint F_00bc7680(unsigned int gen_a0)
{
  GEN_ENTER(0xbc7680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  byte bVar1;
  float * pfVar2;
  int iVar3;
  uint uVar4;
  float * pfVar5;
  float in_XMM1_Da = 0;
  float in_XMM2_Da = 0;
  float in_XMM3_Da = 0;
  float in_XMM7_Da = 0;
  float fVar6;
  undefined4 * puVar7;
  
  (*(uint *)(gen_frame + 0x3c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40);
  ((float *)(gen_frame + 0x24))[2] = 0.0;
  ((float *)(gen_frame + 0x24))[0] = (float)((float10)*(double *)&REFG(undefined, 0x1080228) - (float10)*(float *)&REFG(undefined, 0x13429ac));
  ((float *)(gen_frame + 0x24))[1] = (float)((float10)*(double *)&REFG(undefined, 0x1080228) + (float10)*(float *)&REFG(undefined, 0x13429ac));
  pfVar2 = (float *)F_00a5feb0(*(undefined * PTR32 *)((int)this + 0x2f20));
  (*(int *)(gen_frame + 0x18)) = 0;
  do {
    F_00bc72e0(this,in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,&(*(float *)(gen_frame + 0x0)),((float *)(gen_frame + 0x24))[(int)((*(int *)(gen_frame + 0x18)))]);
    (*(float *)(gen_frame + 0x1c)) = (float)((float10)(*(float *)(gen_frame + 0x4)) - (float10)pfVar2[1]);
    fVar6 = ((float)GEN_TOF(ABS((float10)(float)((float10)(*(float *)(gen_frame + 0x4)) - (float10)pfVar2[1]))));
    (*(float *)(gen_frame + 0x1c)) = fVar6;
    if ((float10)fVar6 < (float10)1) {
      bVar1 = F_00bc7150(this,&(*(float *)(gen_frame + 0x0)));
      if (bVar1 == 0) {
        F_00a9f010(this,&(*(float *)(gen_frame + 0x0)));
        pfVar5 = (float *)F_00a5feb0(this);
        puVar7 = &REFG(float, 0x1302c90);
        (*(float *)(gen_frame + 0x20)) = (float)((float10)*pfVar2 - (float10)*pfVar5);
        ((float *)(gen_frame + 0x24))[0] = (float)((float10)pfVar2[1] - (float10)pfVar5[1]);
        ((float *)(gen_frame + 0x24))[1] = (float)((float10)pfVar2[2] - (float10)pfVar5[2]);
        (*(float *)(gen_frame + 0x0)) = (float)((float10)*pfVar2 - (float10)*pfVar5);
        (*(float *)(gen_frame + 0x4)) = (float)((float10)pfVar2[1] - (float10)pfVar5[1]);
        (*(float *)(gen_frame + 0x8)) = (float)((float10)pfVar2[2] - (float10)pfVar5[2]);
        uVar4 = F_0046f390(&(*(float *)(gen_frame + 0x0)));
        fVar6 = F_00aae7a0(uVar4,puVar7);
        goto LAB_00bc77b1;
      }
    }
    iVar3 = (*(int *)(gen_frame + 0x18)) + 1;
    (*(int *)(gen_frame + 0x18)) = iVar3;
  } while (iVar3 < 3);
  (*(float *)(gen_frame + 0x20)) = *pfVar2;
  ((float *)(gen_frame + 0x24))[0] = pfVar2[1];
  ((float *)(gen_frame + 0x24))[1] = pfVar2[2];
  uVar4 = F_00af2610(&(*(float *)(gen_frame + 0x20)),*(float *)&REFG(undefined, 0x134290c),(float)(float10)0,&(*(float *)(gen_frame + 0x1c)),REFG(float, 0x1105b30),0,
                       0,0,0,0,0,0,3,0);
  if ((char)uVar4 != '\0') {
    ((float *)(gen_frame + 0x24))[0] = (*(float *)(gen_frame + 0x1c));
  }
  F_00a9f010(this,&(*(float *)(gen_frame + 0x20)));
  fVar6 = *((float *)GEN_TOP((*(int *)((int)this + 0x2f20) + 0xb0)));
LAB_00bc77b1: ;
  uVar4 = F_00a9f040(this,in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,fVar6);
  F_00c47745((*(uint *)(gen_frame + 0x3c)) ^ (uint)(uint)(gen_frame + 0x40));
  return uVar4;
}

/* ref: FUN_00bc7830 */
uint F_00bc7830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc7830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  undefined4 uVar1;
  uint uVar2;
  float * pfVar3;
  float10 fVar4;
  float fVar5;
  undefined4 * puVar6;
  
  uVar1 = REFG(float, 0x1105b30);
  uVar2 = 0;
  if (*(int *)((int)this + 0x2f20) != 0) {
    *(ushort *)((int)this + 0x2f26) = *(ushort *)((int)this + 0x2f26) | 1;
    *(undefined4 *)((int)this + 0x2f38) = 0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
    (*(float *)(gen_frame + 0x10)) = gen_bits2f(uVar1);
    (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
    (*(float *)(gen_frame + 0x18)) = gen_bits2f(uVar1);
    (*(undefined4 *)(gen_frame + 0x1c)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x20)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined1 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x3c)) = 0;
    fVar4 = F_00a9fad0(*(int *)((int)this + 0x2f20));
    fVar5 = (float)fVar4;
    (*(float *)(gen_frame + 0x7c)) = fVar5;
    if (param_1 == 0) {
      if (fVar5 < REFG(float, 0x1105b3c)) {
        fVar5 = REFG(float, 0x1105b3c);
      }
    }
    else if (param_1 == 1) {
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x30)) + 3)) = 1;
      (*(undefined4 *)(gen_frame + 0x30)) = CONCAT13(1,(undefined3)(*(undefined4 *)(gen_frame + 0x30)));
      pfVar3 = &(*(float *)(gen_frame + 0x7c));
      if (!(fVar5 < REFG(float, 0x1105b3c))) {
        pfVar3 = &REFG(float, 0x1105b3c);
      }
      if (!(REFG(float, 0x1106234) < *pfVar3)) {
        pfVar3 = (float *)&REFG(undefined4, 0x1105b40);
      }
      fVar5 = *pfVar3;
    }
    (*(float *)(gen_frame + 0x10)) = fVar5;
    (*(float *)(gen_frame + 0x18)) = fVar5;
    uVar2 = F_00aa0210(this,0,0);
    if (uVar2 - 4 < 3) {
      F_00aa2c50(this,0,0,0);
    }
    pfVar3 = (float *)F_00a5feb0(this);
    (*(float *)(gen_frame + 0x60)) = *pfVar3;
    (*(float *)(gen_frame + 0x64)) = pfVar3[1];
    (*(float *)(gen_frame + 0x68)) = pfVar3[2];
    F_00bc7440(this,&(*(float *)(gen_frame + 0x60)));
    pfVar3 = (float *)F_00a5feb0(this);
    puVar6 = &REFG(float, 0x1302c90);
    (*(float *)(gen_frame + 0x50)) = (float)((float10)(*(float *)(gen_frame + 0x60)) - (float10)*pfVar3);
    (*(float *)(gen_frame + 0x54)) = (float)((float10)(*(float *)(gen_frame + 0x64)) - (float10)pfVar3[1]);
    (*(float *)(gen_frame + 0x58)) = (float)((float10)(*(float *)(gen_frame + 0x68)) - (float10)pfVar3[2]);
    (*(float *)(gen_frame + 0x40)) = (float)((float10)(*(float *)(gen_frame + 0x60)) - (float10)*pfVar3);
    (*(float *)(gen_frame + 0x44)) = (float)((float10)(*(float *)(gen_frame + 0x64)) - (float10)pfVar3[1]);
    (*(float *)(gen_frame + 0x48)) = (float)((float10)(*(float *)(gen_frame + 0x68)) - (float10)pfVar3[2]);
    uVar2 = F_0046f390(&(*(float *)(gen_frame + 0x40)));
    fVar5 = F_00aae7a0(uVar2,puVar6);
    (*(float *)(gen_frame + 0x7c)) = fVar5;
    uVar2 = F_00a9f7c0(this,(*(float *)(gen_frame + 0x60)),(*(float *)(gen_frame + 0x64)),(*(float *)(gen_frame + 0x68)),fVar5,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
  }
  return uVar2;
}

/* ref: FUN_00bc79e0 */
byte F_00bc79e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc79e0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  float fVar1;
  code * pcVar2;
  byte bVar3;
  uint * puVar4;
  uint uVar5;
  float in_XMM1_Da = 0;
  float in_XMM2_Da = 0;
  float in_XMM3_Da = 0;
  float in_XMM7_Da = 0;
  
  if (param_2 == 0) {
    return 0;
  }
  pcVar2 = *(gen_code32 *)(*param_1 + 0x80);
  *(undefined1 *)((int)param_1 + 0x8a) = 9;
  param_1[0x20] = param_3;
  param_1[0x61] = param_3;
  (*pcVar2)(param_1);
  puVar4 = (uint *)F_00ab2870(param_3);
  if (puVar4 != (uint *)0x0) {
    bVar3 = F_00aa34a0(param_1,(uint)(ushort)puVar4[5],0,0,(float)(float10)1);
    if (bVar3 != 0) {
      param_1[0xbc8] = param_2;
      param_1[0xbb6] = *(int *)(param_2 + 0x74);
      fVar1 = ((float)GEN_TOF((((float10)*(float *)(param_2 + 0xc0) + ((float10)GEN_TOD(gen_bits2f(param_1[0x30])))) +
                     (float10)REFG(double, 0x1088130))));
      param_1[0xbcd] = (int)gen_fl2bits(fVar1);
      if ((float10)fVar1 < (float10)REFG(float, 0x1106224)) {
        param_1[0xbcd] = (int)gen_fl2bits(REFG(float, 0x1106224));
      }
      bVar3 = F_005e1600();
      if ((bVar3 == 0) || (bVar3 = F_005d99e0(), bVar3 == 0)) {
        *(ushort *)((int)param_1 + 0x2f26) = *(ushort *)((int)param_1 + 0x2f26) | 0x10;
        uVar5 = F_00a5feb0((undefined *)param_1[0xbc8]);
        F_00a9f010(param_1,uVar5);
        F_00a9f040(param_1,in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,
                     *(float *)(param_1[0xbc8] + 0xb0));
      }
      else {
        F_00bc7680(param_1);
      }
      if (*(char *)((int)puVar4 + 0x1b) == '\x01') {
        *(ushort *)((int)param_1 + 0x2f26) = *(ushort *)((int)param_1 + 0x2f26) | 2;
      }
      F_00a5f8c0(param_1,(*puVar4 & 0xffffff) + (int)puVar4);
      if ((short)param_1[0xbc9] == 0) {
        *(undefined2 *)(param_1 + 0xbc9) = 3;
      }
      return 1;
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_00bc7b20 */
uint F_00bc7b20(unsigned int gen_a0)
{
  GEN_ENTER(0xbc7b20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  uint in_EAX = 0;
  float * pfVar3;
  float * pfVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  
  if (*(undefined * PTR32 *)((int)this + 0x2f20) != (undefined *)0x0) {
    pfVar3 = (float *)F_00a5feb0(*(undefined * PTR32 *)((int)this + 0x2f20));
    pfVar4 = (float *)F_00a5feb0(this);
    fVar6 = (float10)(float)((float10)pfVar4[2] - (float10)pfVar3[2]) *
            (float10)(float)((float10)pfVar4[2] - (float10)pfVar3[2]);
    fVar7 = (float10)(float)((float10)*pfVar4 - (float10)*pfVar3) *
            (float10)(float)((float10)*pfVar4 - (float10)*pfVar3);
    fVar1 = ((float)GEN_TOF(SQRT((float10)(float)(fVar7 + fVar6))));
    fVar2 = ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((((float10)(float)((float10)pfVar4[1] - (float10)pfVar3[1])
                                          * (float10)(float)((float10)pfVar4[1] - (float10)pfVar3[1]
                                                            ) + (float10)(double)fVar7) +
                                        (float10)(double)fVar6))))));
    if ((float10)*(float *)((int)this + 0x2f34) < (float10)fVar2) {
      uVar5 = F_00a9fbf0(this);
      in_EAX = REFG(undefined4, 0x137104c);
      if ((char)uVar5 == '\0') {
        in_EAX = uVar5;
        if (*(double *)&REFG(undefined, 0x10944e0) < (double)fVar2) {
          uVar5 = F_00bc7830(this,0);
          return uVar5;
        }
      }
      else {
        fVar2 = ((float)GEN_TOF(((float10)*(float *)(REFG(undefined4, 0x137104c) + 0x1198) +
                       (float10)*(float *)((int)this + 0x2f38))));
        *(float *)((int)this + 0x2f38) = fVar2;
        if ((float10)0 < (float10)fVar2) {
          uVar5 = F_00a9fc30(this);
          if ((char)uVar5 == '\0') {
            if ((double)fVar1 <= *(double *)&REFG(undefined, 0x1106260)) goto LAB_00bc7c5c;
          }
          else if (!(*(double *)&REFG(undefined, 0x1106268) < (double)fVar1)) {
LAB_00bc7c5c: ;
            uVar5 = F_00bc7830(this,1);
            return uVar5;
          }
          uVar5 = F_00bc7830(this,0);
          return uVar5;
        }
      }
    }
    else {
      in_EAX = F_00a9fbf0(this);
      if ((char)in_EAX == '\0') {
        *(ushort *)((int)this + 0x2f26) = *(ushort *)((int)this + 0x2f26) & 0xfffe;
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00bc7c90 */
uint F_00bc7c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc7c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  ushort uVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    *(undefined2 *)((int)this + 0x2f24) = 4;
    return 4;
  }
  uVar1 = *(ushort *)((int)this + 0x88);
  uVar2 = *(uint *)((int)this + 0x2f20);
  ((code *)*(gen_code32 *)(*(int *)this + 0xb0))(this);
  ((code *)*(gen_code32 *)(*(int *)this + 0xac))(this,(uint)uVar1);
  F_00bc79e0(this,uVar2,param_1);
  uVar2 = F_00aa0980(this,(float)(float10)0,0);
  *(undefined4 *)((int)this + 0x2f28) = 0;
  *(undefined2 *)((int)this + 0x2f24) = 1;
  return uVar2;
}

/* ref: FUN_00bc7d10 */
unsigned int F_00bc7d10(unsigned int gen_a0)
{
  GEN_ENTER(0xbc7d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0xec) != 0) {
    if (*(int *)((int)this + 0x2f20) == 0) {
      cVar1 = '\0';
    }
    else {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2f20) + 0x98))))(*(int * PTR32 *)((int)this + 0x2f20));
      cVar1 = (char)uVar2;
    }
    *((byte *)GEN_TOP((*(int *)((int)this + 0xec) + 100))) =
         cVar1 != '\0' | *((byte *)GEN_TOP((*(int *)((int)this + 0xec) + 100))) & 0xfe;
  }
  return 0;
}

/* ref: FUN_00bc7d60 */
uint F_00bc7d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc7d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)((int)this + 0x80) = param_1;
  *(undefined4 *)((int)this + 0x2f28) = 0;
  if (*(short *)((int)this + 0x2f24) == 2) {
    uVar2 = F_00bc7c90(this,param_1);
    return uVar2;
  }
  if (*(int *)((int)this + 0x2f48) != 0) {
    F_00983120(*(int *)((int)this + 0x2f48),0);
    F_009bc530(*(undefined * PTR32 *)((int)this + 0x2f48),1);
    F_009bc4a0(*(undefined * PTR32 *)((int)this + 0x2f48));
    *(undefined4 *)((int)this + 0x2f48) = 0;
  }
  iVar1 = *(int *)((int)this + 0x2f40);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x2f20) == 0) goto LAB_00bc7e09;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar1 + 0x2f20) + 0x98))))(*(int * PTR32 *)(iVar1 + 0x2f20));
    if ((char)uVar2 == '\0') goto LAB_00bc7e09;
  }
  uVar2 = F_00ab4370(0xa8,*(undefined4 *)((int)this + 0x2f40),*(undefined4 *)((int)this + 0x2f40),
                       0,0);
  *(uint *)((int)this + 0x2f48) = uVar2;
  if (uVar2 != 0) {
    F_00983120(uVar2,(int)this + 0x2f3c);
  }
LAB_00bc7e09: ;
  *(undefined2 *)((int)this + 0x2f24) = 2;
  return 2;
}

/* ref: FUN_00bc7e20 */
uint F_00bc7e20(unsigned int gen_a0)
{
  GEN_ENTER(0xbc7e20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(ushort *)((int)this + 0x2f26) = *(ushort *)((int)this + 0x2f26) | 8;
  uVar1 = F_00bc7d60(this,*(undefined4 *)((int)this + 0x80));
  return uVar1;
}

/* ref: FUN_00bc7e40 */
uint F_00bc7e40(unsigned int gen_a0)
{
  GEN_ENTER(0xbc7e40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  
  uVar2 = REFG(undefined4, 0x137104c);
  fVar1 = ((float)GEN_TOF(((float10)*(float *)(REFG(undefined4, 0x137104c) + 0x1198) +
                 (float10)*(float *)((int)this + 0x2f28))));
  *(float *)((int)this + 0x2f28) = fVar1;
  if (*(double *)&REFG(undefined, 0x10a1918) < (double)fVar1) {
    fVar1 = *(float *)((int)this + 0x2ec8);
    bVar3 = GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
    bVar4 = bVar3 || fVar1 == *(float *)&REFG(undefined, 0x1088114);
    uVar2 = CONCAT22((short)(uVar2 >> 0x10),
                     CONCAT11(bVar4 << 6 | bVar3 << 2 | 2U | !(*(float *)&REFG(undefined, 0x1088114) <= fVar1),
                              (char)uVar2));
    if (bVar3 != bVar4) {
      *(undefined4 *)((int)this + 0x2ec8) = REFG(float, 0x109cb08);
    }
  }
  if (*(int *)((int)this + 0x2f48) == 0) {
    uVar2 = F_00bc7c90(this,*(undefined4 *)((int)this + 0x80));
  }
  return uVar2;
}

/* ref: FUN_00bc7eb0 */
uint F_00bc7eb0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc7eb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  
  bVar1 = *(byte *)((int)this + 0x2f26) >> 1;
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),bVar1);
  if ((bVar1 & 1) != 0) {
    uVar2 = F_00bc7b20(this);
  }
  if ((*(byte *)((int)this + 0x2f26) & 1) == 0) {
    uVar2 = F_00bc6e90(this);
    return uVar2;
  }
  return uVar2;
}

/* ref: Client::Game::Character::Companion::vf33 */
uint F_00bc7ee0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc7ee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  byte bVar6;
  uint uVar7;
  float * pfVar8;
  float * pfVar9;
  
  F_00aa3240(this);
  F_00aab1e0((undefined *)this);
  if (((((byte)*(ushort *)(this + 0x2f26) >> 2 & 1) == 0) && (*(int *)(this + 0xec) != 0)) &&
     (*((char *)GEN_TOP((*(int *)(this + 0xec) + 0x65))) == '\x03')) {
    *(ushort *)(this + 0x2f26) = *(ushort *)(this + 0x2f26) | 4;
    F_00bc7d10(this);
  }
  if (((byte)this[0x2f26] >> 4 & 1) != 0) {
    bVar6 = F_005e1600();
    if (bVar6 != 0) {
      bVar6 = F_005d99e0();
      if (bVar6 != 0) {
        F_00bc7680(this);
        *(ushort *)(this + 0x2f26) = *(ushort *)(this + 0x2f26) & 0xffef;
      }
    }
  }
  uVar7 = (uint)*(ushort *)(this + 0x2f24);
  if (uVar7 == 1) {
    uVar7 = F_00bc6dd0(this);
  }
  else {
    if (uVar7 == 2) {
      uVar7 = F_00bc7e40(this);
      return uVar7;
    }
    uVar7 = uVar7 - 3;
    if ((uVar7 == 0) && (*(undefined * PTR32 *)(this + 0x2f20) != (undefined *)0x0)) {
      pfVar8 = (float *)F_00a5feb0(*(undefined * PTR32 *)(this + 0x2f20));
      pfVar9 = (float *)F_00a5feb0(this);
      fVar1 = *pfVar9;
      fVar2 = *pfVar8;
      fVar3 = pfVar9[2];
      fVar4 = pfVar8[2];
      bVar6 = F_00a9f620(*(undefined4 *)(this + 0x2f20));
      dVar5 = (double)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)(float)((float10)fVar1 - (float10)fVar2)
                                                   * (float10)(float)((float10)fVar1 -
                                                                     (float10)fVar2) +
                                                  (float10)(float)((float10)fVar3 - (float10)fVar4)
                                                  * (float10)(float)((float10)fVar3 - (float10)fVar4
                                                                    )))))));
      if ((bVar6 != 0) && (*(double *)&REFG(undefined, 0x1088118) < dVar5)) {
        *(undefined2 *)(this + 0x2f24) = 5;
        uVar7 = F_00a51200(6,0,0,0,0);
        return uVar7;
      }
      if (*(double *)&REFG(undefined, 0x1088120) < dVar5) {
        *(ushort *)(this + 0x2f26) = *(ushort *)(this + 0x2f26) | 8;
        uVar7 = F_00bc7d60(this,*(undefined4 *)(this + 0x80));
        return uVar7;
      }
      uVar7 = F_00bc7eb0(this);
      return uVar7;
    }
  }
  return uVar7;
}

/* ref: FUN_00bc8080 */
ushort F_00bc8080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc8080u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x2f26) = *(ushort *)(in_ecx + 0x2f26) | (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00bc80a0 */
uint F_00bc80a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc80a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(ushort *)(in_ecx + 0x2f26) = *(ushort *)(in_ecx + 0x2f26) & (ushort)~param_2;
  return ~param_2;
}

/* ref: FUN_00bc80c0 */
byte F_00bc80c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc80c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (*(ushort *)(in_ecx + 0x2f26) & (ushort)param_2) != 0;
}

/* ref: FUN_00bc80e0 */
unsigned int F_00bc80e0(float gen_a0)
{
  GEN_ENTER(0xbc80e0u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bc8100 */
byte F_00bc8100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbc8100u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  if (*(int *)(in_ecx + 4) != param_2) {
    *(int *)(in_ecx + 4) = param_2;
    *(undefined4 *)(in_ecx + 0x10) = 0;
  }
  return 1;
}

/* ref: FUN_00bc8120 */
uint F_00bc8120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc8120u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00bc8130 */
uint F_00bc8130(unsigned int gen_a0)
{
  GEN_ENTER(0xbc8130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 3;
  uVar1 = F_0042e430((undefined *)((int)this + 0x14),&REFG(undefined, 0x11062f4));
  *(undefined1 *)((int)this + 0x68) = 0;
  return uVar1;
}

/* ref: FUN_00bc8170 */
uint F_00bc8170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc8170u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != 0) {
    if (*(uint *)(in_ecx + 4) != param_2) {
      *(uint *)(in_ecx + 4) = param_2;
      *(undefined4 *)(in_ecx + 0x10) = 0;
    }
    *(undefined4 *)(in_ecx + 0xc) = 1;
    *(undefined4 *)(in_ecx + 8) = REFG(float, 0x11062f0);
  }
  return param_2;
}

/* ref: FUN_00bc81b0 */
unsigned int F_00bc81b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc81b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0xc) == 1) {
    *(undefined4 *)(in_ecx + 0xc) = 0;
  }
  return 0;
}

/* ref: FUN_00bc81f0 */
uint F_00bc81f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc81f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0x1c;
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  this = (undefined *)F_00763050(uVar2,uVar3);
  uVar2 = F_008bd150(this,param_1,param_2,param_3);
  return uVar2;
}

/* ref: FUN_00bc8220 */
uint F_00bc8220(unsigned int gen_a0)
{
  GEN_ENTER(0xbc8220u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0x1c;
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  this = (undefined *)F_00763050(uVar2,uVar3);
  uVar2 = F_008b8670(this,param_1);
  return uVar2;
}

/* ref: FUN_00bc8250 */
uint F_00bc8250(unsigned int gen_a0)
{
  GEN_ENTER(0xbc8250u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0x1c;
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  this = (undefined *)F_00763050(uVar2,uVar3);
  uVar2 = F_0089d500(this,param_1);
  return uVar2;
}

/* ref: FUN_00bc8280 */
uint F_00bc8280(unsigned int gen_a0)
{
  GEN_ENTER(0xbc8280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 3;
  uVar1 = F_0042e430((undefined *)((int)this + 0x14),&REFG(undefined, 0x11062f4));
  *(undefined1 *)((int)this + 0x68) = 0;
  return uVar1;
}

/* ref: FUN_00bc82c0 */
uint F_00bc82c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc82c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  uint * puVar4;
  uint in_ecx;
  int * piVar5;
  uint uVar6;
  undefined * pvVar7;
  int iVar8;
  undefined4 uVar9;
  
  uVar2 = (*(undefined4 *)&gen_args[1]);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) == 3) {
    return 3;
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) != 0) {
    F_00ab1160((int)(*(undefined * PTR32 *)&gen_args[0]) + 8,1);
  }
  if (((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) == 0) && (*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) <= 0.0)) &&
     (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) != 3)) {
    F_00bc8130((*(undefined * PTR32 *)&gen_args[0]));
    F_00bc8220((*(undefined4 *)&gen_args[1]));
  }
  iVar8 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (iVar8 == 1) {
    iVar8 = *(int *)(*(undefined * PTR32 *)&gen_args[0]);
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
  if (iVar1 == 0) {
    puVar4 = (uint *)F_00ab29c0(iVar8);
    if (puVar4 == (uint *)0x0) goto LAB_00bc83d4;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = 2;
    F_0042e430(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),(*puVar4 & 0xffffff) + (int)puVar4);
    *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x68))) = (char)puVar4[1];
  }
  else {
    if (iVar1 == 1) {
      bVar3 = F_00538870(&REFG(undefined4, 0x1375bc0),(*(undefined4 *)&gen_args[1]),0);
      if (bVar3 == 0) {
        F_00bc8220((*(undefined4 *)&gen_args[1]));
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = 2;
      }
      goto LAB_00bc83d4;
    }
    if (iVar1 != 2) goto LAB_00bc83d4;
  }
  bVar3 = F_00538870(&REFG(undefined4, 0x1375bc0),(*(undefined4 *)&gen_args[1]),0);
  if (bVar3 != 0) {
    (*(undefined4 *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[1]), 1, 3),*((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x68))));
    uVar6 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14);
    piVar5 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar9 = 0x1c;
    in_ecx = ((code *)*(gen_code32 *)(*piVar5 + 0x48))(piVar5);
    pvVar7 = (undefined *)F_00763050(in_ecx,uVar9);
    F_008bd150(pvVar7,uVar2,uVar6,(*(undefined4 *)&gen_args[1]));
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = 1;
  }
LAB_00bc83d4: ;
  piVar5 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar9 = 0x1c;
  uVar6 = ((code *)*(gen_code32 *)(*piVar5 + 0x48))(piVar5);
  pvVar7 = (undefined *)F_00763050(uVar6,uVar9);
  uVar6 = F_0089d500(pvVar7,uVar2);
  return uVar6;
}

/* ref: FUN_00bc8400 */
unsigned int F_00bc8400(unsigned int gen_a0)
{
  GEN_ENTER(0xbc8400u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  uint in_ecx;
  undefined * this;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar2 = 0x1c;
    in_ecx = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
    this = (undefined *)F_00763050(in_ecx,uVar2);
    F_008b8670(this,param_1);
  }
  return 0;
}

/* ref: FUN_00bc8440 */
uint F_00bc8440(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbc8440u, gen_a0, 0u, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  float * pfVar1;
  
  pfVar1 = (float *)0x0;
  if ((*(int *)&gen_args[2]) != 0) {
    if (*(int *)((*(int *)&gen_args[0]) + 4) != (*(int *)&gen_args[2])) {
      *(int *)((*(int *)&gen_args[0]) + 4) = (*(int *)&gen_args[2]);
      *(undefined4 *)((*(int *)&gen_args[0]) + 0x10) = 0;
    }
    *(undefined4 *)((*(int *)&gen_args[0]) + 0xc) = 0;
    pfVar1 = &(*(float *)&gen_args[1]);
    if (!(REFG(float, 0x11062f0) < (*(float *)&gen_args[1]))) {
      pfVar1 = &REFG(float, 0x11062f0);
    }
    *(float *)((*(int *)&gen_args[0]) + 8) = *pfVar1;
  }
  return (uint)pfVar1;
}

/* ref: FUN_00bc8480 */
unsigned int F_00bc8480(unsigned int gen_a0)
{
  GEN_ENTER(0xbc8480u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1106320));
  in_ecx[1] = &REFG(undefined, 0x11062fc);
  in_ecx[2] = &REFG(undefined, 0x1106301);
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[0x85] = 0;
  in_ecx[0x86] = 0;
  *(undefined1 *)(in_ecx + 0x88) = 0;
  return 0;
}

/* ref: FUN_00bc84c0 */
uint F_00bc84c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc84c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  uint uVar4;
  byte * pbVar5;
  bool bVar6;
  
  pbVar2 = (byte *)*param_2;
  pbVar5 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00bc84f2: ;
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00bc84f7;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00bc84f2;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00bc84f7: ;
  if (iVar3 == 0) {
    return (uint)param_2;
  }
  if ((param_2[2] != 0) && (uVar4 = F_00bc84c0(this,param_1,(undefined4 *)param_2[2]), uVar4 != 0)
     ) {
    return uVar4;
  }
  if ((param_2[3] != 0) && (uVar4 = F_00bc84c0(this,param_1,(undefined4 *)param_2[3]), uVar4 != 0)
     ) {
    return uVar4;
  }
  return 0;
}

/* ref: FUN_00bc8540 */
uint F_00bc8540(unsigned int gen_a0)
{
  GEN_ENTER(0xbc8540u, gen_a0, 0u, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char * pcVar1;
  uint uVar2;
  
  uVar2 = 0;
  pcVar1 = param_1;
  while ((pcVar1 != (char *)0x0 && (pcVar1 = F_00c46a10(pcVar1,"<"), pcVar1 != (char *)0x0))) {
    pcVar1 = pcVar1 + 1;
    if (*pcVar1 != '/') {
      uVar2 = uVar2 + 1;
    }
  }
  return uVar2;
}

/* ref: FUN_00bc8580 */
unsigned int F_00bc8580(unsigned int gen_a0)
{
  GEN_ENTER(0xbc8580u, gen_a0, 0u, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char cVar1;
  char * pcVar2;
  int iVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  for (iVar3 = (int)pcVar2 - (int)(param_1 + 1);
      (iVar3 != 0 && ((param_1[iVar3] == ' ' || (param_1[iVar3] == '\t')))); iVar3 = iVar3 + -1) {
    param_1[iVar3] = '\0';
  }
  return 0;
}

/* ref: FUN_00bc85c0 */
byte F_00bc85c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc85c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  longlong lVar1;
  uint uVar2;
  
  if ((int)param_1 < 1) {
    return 0;
  }
  if (param_1 < 0x21) {
    *(int *)((int)this + 0x214) = (int)this + 0x14;
  }
  else {
    lVar1 = (ulonglong)*(uint *)((int)this + 0x218) * 0x10;
    uVar2 = F_00406bb0(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,0,0);
    *(uint *)((int)this + 0x214) = uVar2;
    if (uVar2 == 0) {
      return 0;
    }
  }
  F_00c48350(*(undefined * PTR32 *)((int)this + 0x214),0,param_1 << 4);
  *(uint *)((int)this + 0x218) = param_1;
  return 1;
}

/* ref: FUN_00bc8640 */
uint F_00bc8640(unsigned int gen_a0)
{
  GEN_ENTER(0xbc8640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (0x20 < *(uint *)((int)this + 0x218)) {
    F_00406b30(*(undefined4 *)((int)this + 0x214));
  }
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined4 *)((int)this + 0x214) = 0;
  return 0;
}

/* ref: FUN_00bc8670 */
uint F_00bc8670(unsigned int gen_a0)
{
  GEN_ENTER(0xbc8670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1106320));
  if (0x20 < *(uint *)((int)this + 0x218)) {
    F_00406b30(*(undefined4 *)((int)this + 0x214));
  }
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined4 *)((int)this + 0x214) = 0;
  return 0;
}

/* ref: FUN_00bc86b0 */
uint F_00bc86b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc86b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (0x20 < *(uint *)((int)this + 0x218)) {
    F_00406b30(*(undefined4 *)((int)this + 0x214));
  }
  *(undefined4 *)((int)this + 0x214) = 0;
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return 0;
}

/* ref: FUN_00bc86e0 */
uint F_00bc86e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc86e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(int *)((int)this + 0xc) != 0) {
    uVar1 = F_00bc84c0(this,param_1,*(int *)((int)this + 0xc));
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00bc8700 */
byte F_00bc8700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc8700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  char cVar1;
  char cVar2;
  byte bVar3;
  char * pcVar4;
  char * pcVar5;
  char * pcVar6;
  int iVar7;
  int * piVar8;
  int * local_10;
  
  local_10 = (int *)0x0;
  if (*param_1 != 0) {
    while ((*(char *)*param_1 != '\0' &&
           (pcVar4 = F_00c46a10((char *)*param_1,"<"), pcVar4 != (char *)0x0))) {
      pcVar5 = F_00c46a10(pcVar4,">");
      if (pcVar5 == (char *)0x0) {
LAB_00bc886b: ;
        *(undefined1 *)((int)this + 0x220) = 1;
        return 0;
      }
      if (pcVar4[1] == '/') {
        *param_1 = (int)(pcVar5 + 1);
        return 1;
      }
      cVar1 = pcVar5[-1];
      if (cVar1 == '/') {
        pcVar5[-1] = '\0';
      }
      iVar7 = *(int *)((int)this + 0x21c);
      if (*(int *)((int)this + 0x218) <= iVar7) goto LAB_00bc886b;
      piVar8 = ((int *)GEN_TOP((iVar7 * 0x10 + *(int *)((int)this + 0x214))));
      *(int *)((int)this + 0x21c) = iVar7 + 1;
      *piVar8 = 0;
      piVar8[1] = 0;
      piVar8[2] = 0;
      piVar8[3] = 0;
      if (*(int *)(param_2 + 8) == 0) {
        *(int * PTR32 *)(param_2 + 8) = piVar8;
      }
      if (local_10 != (int *)0x0) {
        local_10[3] = (int)piVar8;
      }
      *piVar8 = (int)(pcVar4 + 1);
      *pcVar5 = '\0';
      pcVar4 = (char *)*piVar8;
      pcVar6 = pcVar4;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      for (iVar7 = (int)pcVar6 - (int)(pcVar4 + 1);
          (iVar7 != 0 && ((pcVar4[iVar7] == ' ' || (pcVar4[iVar7] == '\t')))); iVar7 = iVar7 + -1) {
        pcVar4[iVar7] = '\0';
      }
      pcVar5 = pcVar5 + 1;
      *param_1 = (int)pcVar5;
      if (cVar1 != '/') {
        if (pcVar5 == (char *)0x0) {
          *(undefined1 *)((int)this + 0x220) = 1;
          return 0;
        }
        pcVar4 = F_00c46a10(pcVar5,"<");
        if (pcVar4 == (char *)0x0) {
          *(undefined1 *)((int)this + 0x220) = 1;
          return 0;
        }
        if (pcVar4[1] == '/') {
          piVar8[1] = *param_1;
          pcVar5 = F_00c46a10(pcVar4,">");
          if (pcVar5 == (char *)0x0) {
            return 0;
          }
          *param_1 = (int)(pcVar5 + 1);
          *pcVar4 = '\0';
        }
        else {
          bVar3 = F_00bc8700(this,param_1,(int)piVar8);
          if (bVar3 == 0) {
            return 0;
          }
        }
      }
      local_10 = piVar8;
      if (*param_1 == 0) {
        return 1;
      }
    }
  }
  return 1;
}

/* ref: FUN_00bc88c0 */
byte F_00bc88c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc88c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  char * pcVar2;
  uint uVar3;
  
  (*(char * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined1 *)((int)this + 0x220) = 0;
  if (0x20 < *(uint *)((int)this + 0x218)) {
    F_00406b30(*(undefined4 *)((int)this + 0x214));
  }
  *(undefined4 *)((int)this + 0x214) = 0;
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (param_1 != (char *)0x0) {
    pcVar2 = F_00c46a10(param_1,"?>");
    if (pcVar2 != (char *)0x0) {
      pcVar2 = pcVar2 + 2;
      (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar2;
      if (pcVar2 != (char *)0x0) {
        uVar3 = F_00bc8540(pcVar2);
        *(uint *)((int)this + 0x218) = uVar3;
        *(undefined4 *)((int)this + 0x21c) = 0;
        bVar1 = F_00bc85c0(this,uVar3);
        if (bVar1 != 0) {
          bVar1 = F_00bc8700(this,&(*(char * PTR32 *)(gen_frame + 0x8)),(int)this + 4);
          return bVar1;
        }
      }
    }
  }
  *(undefined1 *)((int)this + 0x220) = 1;
  return 0;
}

/* ref: Client::SupportDesk::XmlParser::vf0 */
uint F_00bc8960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc8960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1106320));
  if (0x20 < *(uint *)(this + 0x218)) {
    F_00406b30(*(undefined4 *)(this + 0x214));
  }
  *(undefined4 *)(this + 0x214) = 0;
  *(undefined4 *)(this + 0x218) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bc89b0 */
uint F_00bc89b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc89b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x1106328));
  return (uint)in_ecx;
}

/* ref: FUN_00bc89c0 */
unsigned int F_00bc89c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc89c0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x1106328));
  return 0;
}

/* ref: FUN_00bc89d0 */
uint F_00bc89d0(void)
{
  GEN_ENTER(0xbc89d0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00406b90(8,0,0);
  if (uVar1 != 0) {
    uVar1 = F_00c1f8c0(uVar1);
    return uVar1;
  }
  return 0;
}

/* ref: Client::SupportDesk::HttpConnection::vf0 */
uint F_00bc89f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc89f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1106328));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bc8a30 */
uint F_00bc8a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc8a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 == -1) {
    return 0;
  }
  return *(int *)((int)this + 0x1c) * param_1 + *(int *)((int)this + 0x18);
}

/* ref: FUN_00bc8a70 */
uint F_00bc8a70(unsigned int gen_a0)
{
  GEN_ENTER(0xbc8a70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0xc) != *(int *)((int)this + 0x20)) {
    uVar1 = F_00a4b3a0((undefined *)((int)this + 4));
    if (uVar1 != 0xffffffff) {
      return *(int *)((int)this + 0x1c) * uVar1 + *(int *)((int)this + 0x18);
    }
  }
  return 0;
}

/* ref: FUN_00bc8aa0 */
byte F_00bc8aa0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc8aa0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x88);
}

/* ref: FUN_00bc8ab0 */
byte F_00bc8ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc8ab0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x89);
}

/* ref: Component::Completion::CategoryData::vf1 */
uint F_00bc8ac0(void)
{
  GEN_ENTER(0xbc8ac0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Component::Completion::CategoryData::vf2 */
uint F_00bc8ad0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc8ad0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: FUN_00bc8ae0 */
uint F_00bc8ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc8ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0042ccf0((undefined *)((int)this + 0x34),param_1);
  return uVar1;
}

/* ref: FUN_00bc8af0 */
byte F_00bc8af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc8af0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_0042a970((*(undefined4 *)&gen_args[1]));
  bVar1 = F_0042a980((*(undefined4 *)&gen_args[1]),uVar2 - 1);
  (*(undefined4 *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[1]), 1, 3),bVar1);
  uVar2 = F_0042abe0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))),(*(undefined4 *)&gen_args[1]));
  return uVar2 == REFG(undefined4, 0x108cc50);
}

/* ref: Component::Completion::CategoryDataCache::vf1 */
uint F_00bc8b30(unsigned int gen_a0)
{
  GEN_ENTER(0xbc8b30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x8c);
}

/* ref: Component::Completion::CategoryData::vf3 */
uint F_00bc8b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc8b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((*(int *)(this + 0x18) - *(int *)(this + 0x14) & 0xfffffffcU) == 0) {
    return 0;
  }
  return *(int *)(this + 0x14) + param_1 * 4;
}

/* ref: FUN_00bc8b70 */
byte F_00bc8b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc8b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  
  uVar1 = *(int *)((int)this + 0x28) - *(int *)((int)this + 0x24) >> 2;
  if (uVar1 == 0) {
    return 1;
  }
  uVar1 = uVar1 >> 1;
  uVar3 = 0;
  if (uVar1 != 0) {
    puVar2 = *(uint * PTR32 *)((int)this + 0x24);
    do {
      if ((*puVar2 <= param_1) && (param_1 <= puVar2[1])) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 2;
    } while (uVar3 < uVar1);
  }
  return 0;
}

/* ref: FUN_00bc8bc0 */
uint F_00bc8bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc8bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x1106348));
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0;
  F_0042b630(in_ecx + 0xd);
  *(undefined1 *)(in_ecx + 0x22) = (undefined1)param_2;
  *(undefined1 *)((int)in_ecx + 0x89) = (undefined1)param_3;
  return (uint)in_ecx;
}

/* ref: FUN_00bc8c10 */
uint F_00bc8c10(unsigned int gen_a0)
{
  GEN_ENTER(0xbc8c10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1106348));
  F_0042c880((undefined *)((int)this + 0x34));
  iVar1 = *(int *)((int)this + 0x24);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x2c) - iVar1 >> 2) * 4,0x2be);
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  iVar1 = *(int *)((int)this + 0x14);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x1c) - iVar1 >> 2) * 4,0x2be);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  iVar1 = *(int *)((int)this + 4);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 0xc) - iVar1 >> 2) * 4,0x2be);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return uVar2;
}

/* ref: FUN_00bc8cb0 */
uint F_00bc8cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbc8cb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined * _Dst;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1106348));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  F_0042b630((int)this + 0x34);
  *(undefined1 *)((int)this + 0x89) = (undefined1)param_2;
  *(undefined1 *)((int)this + 0x88) = (undefined1)param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1106360));
  *(int *)((int)this + 0x8c) = param_3;
  *(undefined1 *)((int)this + 0x90) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x94) = (*(undefined * PTR32 (*)[1])REFP(0x1106340));
  F_00a4b300((undefined *)((int)this + 0x98),param_3);
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0x58;
  *(int *)((int)this + 0xb4) = param_3;
  *(int *)((int)this + 0xb8) = param_3 * 0x58;
  _Dst = (undefined *)F_00406bb0(param_3 * 0x58,0,0);
  *(undefined * PTR32 *)((int)this + 0xac) = _Dst;
  F_00c48350(_Dst,0,*(gen_size32 *)((int)this + 0xb8));
  *(undefined4 *)((int)this + 0xc0) = 0;
  uVar1 = F_004296a0(0xc,0,0x2be);
  *(uint *)((int)this + 0xbc) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0xbc) + 4))) = *(int *)((int)this + 0xbc);
  F_0049f580((undefined *)((int)this + 4),param_3);
  F_00adf7d0((undefined *)((int)this + 0x14),param_3);
  return (uint)this;
}

/* ref: Component::Completion::CategoryData::vf4 */
uint F_00bc8db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc8db0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  bool bVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  byte * pbVar5;
  uint * puVar6;
  uint uVar7;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  puVar6 = *(uint * PTR32 *)(this + 0x24);
  uVar7 = 0;
  uVar4 = *(int *)(this + 0x28) - (int)((int)(uintptr_t)puVar6) >> 2;
  (*(byte * PTR32 *)(gen_frame + 0xc)) = param_1;
  bVar2 = false;
  if (uVar4 == 0) {
LAB_00bc8e4f: ;
    F_0042cca0(((undefined1 *)(gen_frame + 0x14)),(uint)*param_1);
    bVar2 = true;
    uVar4 = F_0042a970(((undefined1 *)(gen_frame + 0x14)));
    bVar3 = F_0042a980(((undefined1 *)(gen_frame + 0x14)),uVar4 - 1);
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 0)) = bVar3;
    (*(uint *)(gen_frame + 0x10)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x10)), 1, 3),bVar3);
    uVar4 = F_0042abe0(this + 0x34,(*(uint *)(gen_frame + 0x10)));
    if (uVar4 == REFG(undefined4, 0x108cc50)) {
      bVar1 = true;
      goto LAB_00bc8df9;
    }
  }
  else {
    uVar4 = uVar4 >> 1;
    if (uVar4 != 0) {
      do {
        if ((*puVar6 <= param_2) && (param_2 <= puVar6[1])) goto LAB_00bc8e4f;
        uVar7 = uVar7 + 1;
        puVar6 = puVar6 + 2;
      } while (uVar7 < uVar4);
    }
  }
  bVar1 = false;
LAB_00bc8df9: ;
  if (bVar2) {
    F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  }
  if (bVar1) {
    F_00ae0570(this + 4,&(*(byte * PTR32 *)(gen_frame + 0xc)));
    (*(uint *)(gen_frame + 0x10)) = (int)(char)this[0x88] & 0x7fU | param_2 << 7;
    F_00ae01a0(this + 0x14,&(*(uint *)(gen_frame + 0x10)));
    pbVar5 = (*(byte * PTR32 *)(gen_frame + 0xc));
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return (uint)pbVar5;
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return 0;
}

/* ref: FUN_00bc8eb0 */
uint F_00bc8eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc8eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00bca180((undefined *)((int)this + 0x24),param_1);
  return uVar1;
}

/* ref: Component::Completion::CategoryDataCache::vf4 */
uint F_00bc8ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc8ec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined * this_00;
  int * piVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  uint uVar8;
  int * piVar9;
  uint * puVar10;
  undefined * this_01;
  uint uVar11;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  uVar11 = 0;
  uVar8 = *(int *)(this + 0x28) - *(int *)(this + 0x24) >> 2;
  bVar6 = false;
  if (uVar8 == 0) {
LAB_00bc8f5e: ;
    F_0042cca0(((undefined1 *)(gen_frame + 0x14)),(uint)*param_1);
    bVar6 = true;
    uVar8 = F_0042a970(((undefined1 *)(gen_frame + 0x14)));
    bVar7 = F_0042a980(((undefined1 *)(gen_frame + 0x14)),uVar8 - 1);
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar7);
    uVar8 = F_0042abe0(this + 0x34,(*(undefined4 *)(gen_frame + 0x8)));
    if (uVar8 == REFG(undefined4, 0x108cc50)) {
      bVar5 = false;
      goto LAB_00bc8f0d;
    }
  }
  else {
    uVar8 = uVar8 >> 1;
    if (uVar8 != 0) {
      puVar10 = *(uint * PTR32 *)(this + 0x24);
      do {
        if ((*puVar10 <= param_2) && (param_2 <= puVar10[1])) goto LAB_00bc8f5e;
        uVar11 = uVar11 + 1;
        puVar10 = puVar10 + 2;
      } while (uVar11 < uVar8);
    }
  }
  bVar5 = true;
LAB_00bc8f0d: ;
  if (bVar6) {
    F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  }
  if (!bVar5) {
    piVar9 = *(int * PTR32 *)(this + 0xbc);
    this_00 = this + 0xbc;
    if ((int)param_2 < 0) {
      for (piVar1 = (int *)*piVar9; piVar1 != piVar9; piVar1 = (int *)*piVar1) {
        F_0042cca0(((undefined1 *)(gen_frame + 0x14)),(uint)*param_1);
        bVar7 = F_0042ac50((undefined *)piVar1[2],((undefined1 *)(gen_frame + 0x14)));
        F_0042c880(((undefined1 *)(gen_frame + 0x14)));
        if (bVar7 != 0) {
          piVar9 = ((int *)GEN_TOP(**(undefined4 * PTR32 *)this_00));
          if (((piVar1 != *(int * PTR32 *)this_00) && (piVar9 != piVar1)) && (piVar9 != (int *)*piVar1)) {
            F_00bc99c0(this_00,piVar9,this_00,piVar1,(int *)*piVar1,1);
          }
          this[0x90] = (undefined1)0x1;
          F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
          return 0;
        }
      }
    }
    else {
      piVar1 = (int *)*piVar9;
      for (piVar2 = piVar1; piVar2 != piVar9; piVar2 = (int *)*piVar2) {
        if (*(uint *)(piVar2[2] + 0x54) >> 7 == param_2) {
          if (((piVar2 != piVar9) && (piVar1 != piVar2)) && (piVar1 != (int *)*piVar2)) {
            F_00bc99c0(this_00,piVar1,this_00,piVar2,*piVar2,1);
          }
          this[0x90] = (undefined1)0x1;
          goto LAB_00bc8fc7;
        }
      }
    }
    if (*(int *)(this + 0xc0) == *(int *)(this + 0x8c)) {
      piVar9 = *(int * PTR32 *)this_00;
      this_01 = *(undefined * PTR32 *)(piVar9[1] + 8);
      piVar1 = (int *)piVar9[1];
      if (piVar1 != piVar9) {
        *(int *)piVar1[1] = *piVar1;
        *(int *)(*piVar1 + 4) = piVar1[1];
        F_00429760(piVar1,0xc,0x2be);
        *(int *)(this + 0xc0) = *(int *)(this + 0xc0) + -1;
      }
    }
    else if ((*(int *)(this + 0xa0) == *(int *)(this + 0xb4)) ||
            (uVar8 = F_00a4b3a0(this + 0x98), uVar8 == 0xffffffff)) {
      this_01 = (undefined *)0x0;
    }
    else {
      this_01 = ((undefined *)GEN_TOP((*(int *)(this + 0xb0) * uVar8 + *(int *)(this + 0xac))));
    }
    F_0042cca0(((undefined1 *)(gen_frame + 0x14)),(uint)*param_1);
    F_0042ccf0(this_01,((undefined1 *)(gen_frame + 0x14)));
    F_0042c880(((undefined1 *)(gen_frame + 0x14)));
    *(uint *)((int)this_01 + 0x54) = (int)(char)this[0x88] & 0x7fU | param_2 << 7;
    iVar3 = **(int * PTR32 *)this_00;
    iVar4 = *(int *)(iVar3 + 4);
    piVar9 = (int *)F_004296a0(0xc,0,0x2be);
    piVar9[1] = iVar4;
    *piVar9 = iVar3;
    if (piVar9 + 2 != (int *)0x0) {
      piVar9[2] = (int)this_01;
    }
    if (*(int *)(this + 0xc0) != -2) {
      *(int *)(this + 0xc0) = *(int *)(this + 0xc0) + 1;
      *(int * PTR32 *)(iVar3 + 4) = piVar9;
      *(int * PTR32 *)piVar9[1] = piVar9;
      this[0x90] = (undefined1)0x1;
      uVar8 = F_0042a990(this_01);
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
      return uVar8;
    }
                    
    F_00c4579a("list<T> too long");
  }
LAB_00bc8fc7: ;
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return 0;
}

/* ref: FUN_00bc9190 */
unsigned int F_00bc9190(unsigned int gen_a0)
{
  GEN_ENTER(0xbc9190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  if (*(char *)((int)this + 0x90) != '\0') {
    uVar1 = *(uint *)((int)this + 0xc0);
    uVar4 = 0;
    F_00bca0f0((int *)((int)this + 4),uVar1);
    F_00bc9f40((int *)((int)this + 0x14),uVar1);
    puVar5 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0xbc)));
    if (uVar1 != 0) {
      do {
        iVar2 = *(int *)((int)this + 4);
        uVar3 = F_0042a990(puVar5[2]);
        *(uint *)(iVar2 + uVar4 * 4) = uVar3;
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + uVar4 * 4))) = *(undefined4 *)(puVar5[2] + 0x54);
        puVar5 = (undefined4 *)*puVar5;
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
  }
  return 0;
}

/* ref: Component::Completion::CategoryDataCache::vf2 */
uint F_00bc9210(unsigned int gen_a0)
{
  GEN_ENTER(0xbc9210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bc9190(this);
  return (uint)(this + 4);
}

/* ref: FUN_00bc9220 */
uint F_00bc9220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc9220u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00bc9230 */
uint F_00bc9230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc9230u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00bc9250 */
uint F_00bc9250(unsigned int gen_a0)
{
  GEN_ENTER(0xbc9250u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bc9260 */
uint F_00bc9260(unsigned int gen_a0)
{
  GEN_ENTER(0xbc9260u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00bc9290 */
byte F_00bc9290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc9290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00bc92c0 */
uint F_00bc92c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc92c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00bc92f0 */
uint F_00bc92f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc92f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,0x2be);
  return uVar1;
}

/* ref: FUN_00bc9320 */
uint F_00bc9320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc9320u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,0x2be);
  return (uint)uVar1;
}

/* ref: FUN_00bc9370 */
uint F_00bc9370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc9370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00bc9390 */
uint F_00bc9390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc9390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00bc93d0 */
uint F_00bc93d0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc93d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bc9400 */
uint F_00bc9400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc9400u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00bc9430 */
uint F_00bc9430(unsigned int gen_a0)
{
  GEN_ENTER(0xbc9430u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bc9440 */
uint F_00bc9440(unsigned int gen_a0)
{
  GEN_ENTER(0xbc9440u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bc9450 */
uint F_00bc9450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc9450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * _Dst;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1106340));
  F_00a4b300((undefined *)((int)this + 4),param_2);
  *(int *)((int)this + 0x1c) = param_1;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(int *)((int)this + 0x20) = param_2;
  *(int *)((int)this + 0x24) = param_1 * param_2;
  _Dst = (undefined *)F_00406bb0(param_1 * param_2,0,0);
  *(undefined * PTR32 *)((int)this + 0x18) = _Dst;
  F_00c48350(_Dst,0,*(gen_size32 *)((int)this + 0x24));
  return (uint)this;
}

/* ref: FUN_00bc94b0 */
uint F_00bc94b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc94b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1106340));
  F_00406b30(*(undefined4 *)((int)this + 0x18));
  uVar1 = F_00a4b380((undefined *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00bc9500 */
byte F_00bc9500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc9500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00bc9550 */
uint F_00bc9550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc9550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00bc9570 */
uint F_00bc9570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc9570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bc9580 */
uint F_00bc9580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc9580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00bc95a0 */
uint F_00bc95a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc95a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00bc95d0 */
uint F_00bc95d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc95d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00bc9610 */
unsigned int F_00bc9610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc9610u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_00bc9630 */
unsigned int F_00bc9630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc9630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: Client::System::Data::BlockMemory::vf0 */
uint F_00bc9650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc9650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1106340));
  F_00406b30(*(undefined4 *)(this + 0x18));
  F_00a4b380(this + 4);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bc96c0 */
byte F_00bc96c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc96c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 != 0) {
    uVar1 = F_004296a0(param_1 * 4,0,0x2be);
    *(uint *)((int)this + 8) = param_1 * 4 + uVar1;
    *(uint *)this = uVar1;
    *(uint *)((int)this + 4) = uVar1;
    return 1;
  }
  return 0;
}

/* ref: FUN_00bc9770 */
uint F_00bc9770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc9770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bc9780 */
uint F_00bc9780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc9780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = *(int *)this + param_2 * 4;
  return (uint)param_1;
}

/* ref: FUN_00bc97a0 */
uint F_00bc97a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc97a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = *(int *)this + param_2 * 4;
  return (uint)param_1;
}

/* ref: FUN_00bc97c0 */
unsigned int F_00bc97c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbc97c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar2;
      F_00429760(piVar2,0xc,0x2be);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  return 0;
}

/* ref: FUN_00bc9800 */
uint F_00bc9800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc9800u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00bc9830 */
unsigned int F_00bc9830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc9830u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00bc9850 */
unsigned int F_00bc9850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc9850u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0x7f;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00bc9880 */
unsigned int F_00bc9880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc9880u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00bc98b0 */
uint F_00bc98b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc98b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0xc,0,0x2be);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_3;
  }
  return (uint)puVar1;
}

/* ref: FUN_00bc98f0 */
unsigned int F_00bc98f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc98f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_00bc9940 */
uint F_00bc9940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc9940u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00bc9950 */
uint F_00bc9950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc9950u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00bc99a0 */
uint F_00bc99a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc99a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bc99b0 */
uint F_00bc99b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc99b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00bc99c0 */
uint F_00bc99c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xbc99c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  uint param_4 = (uint)gen_a4;
  uint param_5 = (uint)gen_a5;
  undefined4 uVar1;
  
  if (this != param_2) {
    if (-*(int *)((int)this + 4) - 2U < param_5) {
                    
      F_00c4579a("list<T> too long");
    }
    *(uint *)((int)this + 4) = *(int *)((int)this + 4) + param_5;
    *(int *)((int)param_2 + 4) = *(int *)((int)param_2 + 4) - param_5;
  }
  **(uint * PTR32 *)(param_3 + 4) = param_4;
  **(int * PTR32 *)(param_4 + 4) = param_1;
  **(int * PTR32 *)(param_1 + 4) = param_3;
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_4 + 4);
  *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(param_3 + 4) = uVar1;
  return param_4;
}

/* ref: FUN_00bc9a40 */
uint F_00bc9a40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc9a40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0xc,0,0x2be);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_3;
  }
  return (uint)puVar1;
}

/* ref: FUN_00bc9a80 */
unsigned int F_00bc9a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc9a80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0x7f;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00bc9ab0 */
unsigned int F_00bc9ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc9ab0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00bc9ae0 */
uint F_00bc9ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc9ae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)F_004296a0(0xc,0,0x2be);
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = *param_2;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00bc9b50 */
unsigned int F_00bc9b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc9b50u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00bc9b80 */
uint F_00bc9b80(unsigned int gen_a0)
{
  GEN_ENTER(0xbc9b80u, gen_a0, 0u, 0u, 0u);
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
      F_00429760(piVar2,0xc,0x2be);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  uVar3 = F_00429760(*(undefined4 *)this,0xc,0x2be);
  return (uint)uVar3;
}

/* ref: FUN_00bc9bd0 */
uint F_00bc9bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc9bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00bc9be0 */
uint F_00bc9be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc9be0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00bc9c00 */
uint F_00bc9c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc9c00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)F_004296a0(0xc,0,0x2be);
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = *param_2;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00bc9c70 */
uint F_00bc9c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc9c70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    F_00429760(param_2,0xc,0x2be);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_00bc9cc0 */
uint F_00bc9cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbc9cc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  int * piVar1;
  int * piVar2;
  
  piVar1 = param_2;
  if ((param_2 == ((int *)GEN_TOP(**(int * PTR32 *)this))) && (piVar1 = param_2, param_3 == *(int * PTR32 *)this)) {
    F_00bc97c0(this);
    *param_1 = *(undefined4 *)this;
    return (uint)param_1;
  }
  while (piVar2 = piVar1, piVar2 != param_3) {
    piVar1 = (int *)*piVar2;
    if (piVar2 != *(int * PTR32 *)this) {
      *(int * PTR32 *)piVar2[1] = piVar1;
      *(int *)(*piVar2 + 4) = piVar2[1];
      F_00429760(piVar2,0xc,0x2be);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
    }
  }
  *param_1 = param_3;
  return (uint)param_1;
}

/* ref: FUN_00bc9d30 */
unsigned int F_00bc9d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc9d30u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00bc9d60 */
uint F_00bc9d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbc9d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_2 + 4);
  piVar2 = (int *)F_004296a0(0xc,0,0x2be);
  *piVar2 = param_2;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = *param_3;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(param_2 + 4) = piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  *param_1 = *(undefined4 *)(param_2 + 4);
  return (uint)param_1;
}

/* ref: FUN_00bc9de0 */
unsigned int F_00bc9de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc9de0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00bc9e10 */
uint F_00bc9e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc9e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = **(int * PTR32 *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0xc,0,0x2be);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = *param_1;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_00bc9e70 */
uint F_00bc9e70(unsigned int gen_a0)
{
  GEN_ENTER(0xbc9e70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  ulonglong uVar2;
  
  piVar1 = ((int *)GEN_TOP((*(int * PTR32 *)this)[1]));
  if (piVar1 != *(int * PTR32 *)this) {
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    uVar2 = F_00429760(piVar1,0xc,0x2be);
    piVar1 = (int *)uVar2;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  return (uint)piVar1;
}

/* ref: FUN_00bc9ea0 */
uint F_00bc9ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbc9ea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_2 + 4);
  piVar2 = (int *)F_004296a0(0xc,0,0x2be);
  *piVar2 = param_2;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = *param_3;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(uint *)(param_2 + 4) = (uint)piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  *param_1 = *(uint *)(param_2 + 4);
  return (uint)param_1;
}

/* ref: FUN_00bc9f10 */
unsigned int F_00bc9f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc9f10u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00bc9f40 */
unsigned int F_00bc9f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbc9f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  uVar2 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (param_1 < uVar2) {
    iVar1 = *(int *)this + param_1 * 4;
    if (iVar1 == *(int *)((int)this + 4)) {
      return 0;
    }
  }
  else {
    if (param_1 <= uVar2) {
      return 0;
    }
    F_00adfba0(this,param_1 - uVar2);
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    for (iVar1 = param_1 - ((int)puVar3 - *(int *)((int)(uintptr_t)this) >> 2); iVar1 != 0; iVar1 = iVar1 + -1) {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0x7f;
      }
      puVar3 = puVar3 + 1;
    }
    iVar1 = *(int *)((int)this + 4) + (param_1 - (*(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2)) * 4;
  }
  *(int *)((int)this + 4) = iVar1;
  return 0;
}

/* ref: FUN_00bc9fd0 */
uint F_00bc9fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xbc9fd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = F_00bc99c0(this,param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00bc9ff0 */
uint F_00bc9ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbc9ff0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = param_3;
  if (param_1 != param_2) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return (uint)puVar1;
}

/* ref: Component::Completion::CategoryData::vf0 */
uint F_00bca020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbca020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bc8c10(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bca050 */
uint F_00bca050(unsigned int gen_a0)
{
  GEN_ENTER(0xbca050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00bc9b80((undefined *)((int)this + 0xbc));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x94) = (*(undefined * PTR32 (*)[1])REFP(0x1106340));
  F_00406b30(*(undefined4 *)((int)this + 0xac));
  F_00a4b380((undefined *)((int)this + 0x98));
  uVar1 = F_00bc8c10(this);
  return uVar1;
}

/* ref: Component::Completion::CategoryDataCache::vf0 */
uint F_00bca090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbca090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bc9b80(this + 0xbc);
  *(undefined * PTR32 * PTR32 *)(this + 0x94) = (*(undefined * PTR32 (*)[1])REFP(0x1106340));
  F_00406b30(*(undefined4 *)(this + 0xac));
  F_00a4b380(this + 0x98);
  F_00bc8c10(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bca0f0 */
uint F_00bca0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbca0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  iVar3 = *(int *)((int)this + 4);
  uVar2 = iVar3 - *(int *)((int)(uintptr_t)this) >> 2;
  if (param_1 < uVar2) {
    iVar1 = *(int *)this + param_1 * 4;
    if (iVar1 != iVar3) {
      uVar2 = F_00c46e20(iVar1,iVar3,0);
      *(int *)((int)this + 4) = iVar1;
      return uVar2;
    }
  }
  else if (uVar2 < param_1) {
    F_0049f630(this,param_1 - uVar2);
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    for (iVar3 = param_1 - ((int)puVar4 - *(int *)((int)(uintptr_t)this) >> 2); iVar3 != 0; iVar3 = iVar3 + -1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
    uVar2 = *(uint *)((int)this + 4);
    *(uint *)((int)this + 4) = uVar2 + (param_1 - ((int)(uVar2 - *(int *)this) >> 2)) * 4;
  }
  return uVar2;
}

/* ref: FUN_00bca180 */
uint F_00bca180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbca180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (this != param_1) {
    iVar2 = *param_1;
    uVar6 = param_1[1] - iVar2 >> 2;
    iVar3 = *(int *)this;
    if (uVar6 == 0) {
      if (iVar3 != *(int *)((int)this + 4)) {
        F_00c46e20(iVar3,*(int *)((int)this + 4),0);
        *(int *)((int)this + 4) = iVar3;
        return (uint)this;
      }
    }
    else {
      uVar7 = *(int *)((int)this + 4) - iVar3 >> 2;
      if (uVar6 <= uVar7) {
        F_00c46e20(iVar3,iVar2,(param_1[1] - iVar2 >> 2) * 4);
        *(int *)((int)this + 4) = *(int *)this + (param_1[1] - *param_1 >> 2) * 4;
        return (uint)this;
      }
      uVar5 = *(int *)((int)this + 8) - iVar3 >> 2;
      if (uVar6 <= uVar5) {
        iVar1 = iVar2 + uVar7 * 4;
        F_00c46e20(iVar3,iVar2,(iVar1 - iVar2 >> 2) * 4);
        uVar6 = F_00bc9ff0(iVar1,param_1[1],*(undefined4 *)((int)this + 4));
        *(uint *)((int)this + 4) = uVar6;
        return (uint)this;
      }
      if (iVar3 != 0) {
        F_00adc890(iVar3,uVar5);
      }
      bVar4 = F_00bc96c0(this,param_1[1] - *param_1 >> 2);
      if (bVar4 != 0) {
        uVar6 = F_00bc9ff0(*param_1,param_1[1],*(undefined4 *)this);
        *(uint *)((int)this + 4) = uVar6;
      }
    }
  }
  return (uint)this;
}

/* ref: FUN_00bca2a0 */
uint F_00bca2a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbca2a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  int * piVar1;
  
  piVar1 = param_3;
  if ((param_3 != (int *)*param_2) &&
     ((this != param_2 || ((param_1 != param_3 && (param_1 != (int *)*param_3)))))) {
    piVar1 = (int *)F_00bc99c0(this,param_1,param_2,param_3,(int *)*param_3,1);
  }
  return (uint)piVar1;
}

/* ref: FUN_00bca2e0 */
uint F_00bca2e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbca2e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 - *(int *)(in_ecx + 0x34);
}

/* ref: FUN_00bca2f0 */
unsigned int F_00bca2f0(float gen_a0)
{
  GEN_ENTER(0xbca2f0u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bca310 */
uint F_00bca310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbca310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)((int)this + 0x30);
  if (iVar2 == 0) {
    return 0;
  }
  iVar3 = param_1 - *(int *)((int)this + 0x34);
  if (iVar3 == 0) {
    return **(uint * PTR32 *)(iVar2 + 4);
  }
  piVar1 = ((int *)GEN_TOP((*(int *)(iVar2 + 4) + iVar3 * 4)));
  return *piVar1 - piVar1[-1];
}

/* ref: FUN_00bca340 */
uint F_00bca340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbca340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 0x30);
  if (iVar1 != 0) {
    iVar2 = param_1 - *(int *)((int)this + 0x34);
    if (iVar2 == 0) {
      if (**(int * PTR32 *)(iVar1 + 4) != 0) {
        return *(uint *)(iVar1 + 8);
      }
    }
    else if (*((int *)GEN_TOP((*(int *)(iVar1 + 4) + iVar2 * 4))) !=
             *((int *)GEN_TOP((*(int *)(iVar1 + 4) + -4 + iVar2 * 4)))) {
      return *((int *)GEN_TOP((*(int *)(iVar1 + 4) + -4 + iVar2 * 4))) + *(int *)(iVar1 + 8);
    }
  }
  return 0;
}

/* ref: Component::Log::LogPage::vf1 */
unsigned int F_00bca390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbca390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  int * piVar4;
  
  this_00 = this + 0x28;
  if ((*(uint *)(this + 0x28) & 0xc000000) != 0) {
    uVar1 = F_004f9c50(this_00);
    if (uVar1 == 1) {
      puVar2 = (undefined4 *)F_004f9d70(this_00);
      *(undefined4 * PTR32 *)(this + 0x2c) = puVar2;
      if ((puVar2 != (undefined4 *)0x0) && (*(int *)(this + 0x30) == 0)) {
        *(undefined4 *)(this + 0x34) = *puVar2;
        iVar3 = puVar2[1];
        *(int *)(this + 0x38) = iVar3;
        iVar3 = iVar3 - *(int *)(this + 0x34);
        piVar4 = (int *)F_00406b90(0xc,0,0);
        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          *piVar4 = iVar3;
          piVar4[1] = (int)(puVar2 + 2);
          piVar4[2] = (int)(puVar2 + iVar3 + 2);
        }
        *(int * PTR32 *)(this + 0x30) = piVar4;
      }
      F_004fad40(this_00);
    }
  }
  return 0;
}

/* ref: FUN_00bca420 */
uint F_00bca420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbca420u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x370];
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = (*(undefined4 *)&gen_args[3]);
  (*(uint *)(gen_frame + 0x368)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x36c);
  uVar2 = F_004308f0(REFG(undefined4, 0x137104c));
  F_0042e170(((undefined1 *)(gen_frame + 0x210)),uVar2);
  F_0042a3a0(((undefined1 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x210)),1);
  F_0042c880(((undefined1 *)(gen_frame + 0x210)));
  if ((*(int *)&gen_args[1]) != 0 || (*(int *)&gen_args[2]) != 0) {
    F_00aca080(&(*(int *)&gen_args[1]),((undefined1 *)(gen_frame + 0x264)),0x104);
    uVar2 = F_0042ce40(((undefined1 *)(gen_frame + 0x210)),"%s/log/%08x.log",((undefined1 *)(gen_frame + 0x264)),uVar1);
    F_0042a1b0(((undefined1 *)(gen_frame + 0x8)),uVar2);
    F_0042c880(((undefined1 *)(gen_frame + 0x210)));
  }
  F_0042e170((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x8)));
  F_00429fa0();
  F_00c47745((*(uint *)(gen_frame + 0x368)) ^ (uint)(uint)(gen_frame + 0x36c));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00bca4f0 */
uint F_00bca4f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbca4f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x270];
  uint uVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0x268)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x26c);
  (*(undefined4 *)(gen_frame + 0x8)) = param_3;
  F_004a0020(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x110640c));
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  F_004a0100((undefined *)(REFG(int, 0x137104c) + 0x11b0),0x21,this);
  uVar3 = 1;
  uVar1 = F_00bca420(((undefined1 *)(gen_frame + 0x214)),param_1,param_2,(*(undefined4 *)(gen_frame + 0x8)));
  F_0042a3a0(((undefined1 *)(gen_frame + 0xc)),uVar1,uVar3);
  puVar2 = (undefined4 *)F_004fd570(REFG(undefined4, 0x1375ae8),&(*(undefined4 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0xc)),0,0,0,0,0,5);
  *(undefined4 *)((int)this + 0x28) = *puVar2;
  F_00429fa0();
  F_0042c880(((undefined1 *)(gen_frame + 0x214)));
  F_00c47745((*(uint *)(gen_frame + 0x268)) ^ (uint)(uint)(gen_frame + 0x26c));
  return (uint)this;
}

/* ref: FUN_00bca5d0 */
uint F_00bca5d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xbca5d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int * param_6 = (int *)(uintptr_t)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x270];
  undefined4 * puVar1;
  undefined * this_00;
  int iVar2;
  undefined4 * puVar3;
  int * piVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  (*(uint *)(gen_frame + 0x268)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x26c);
  (*(undefined4 *)(gen_frame + 0x4)) = param_3;
  F_004a0020(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x110640c));
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x34) = param_4;
  *(undefined4 *)((int)this + 0x38) = param_5;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  iVar6 = param_6[1] - *param_6 >> 2;
  iVar2 = (param_6[5] - param_6[4]) + iVar6 * 4 + 8;
  puVar3 = (undefined4 *)F_00406bb0(iVar2,0,0);
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar3;
  *(undefined4 * PTR32 *)((int)this + 0x2c) = puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = *(undefined4 *)((int)this + 0x34);
    puVar3[1] = *(undefined4 *)((int)this + 0x38);
    F_00c46aa0(puVar3 + 2,*param_6,iVar6 * 4);
    puVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x8)) + iVar6 + 2;
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar1;
    F_00c46aa0(puVar1,param_6[4],param_6[5] - param_6[4]);
    piVar4 = (int *)F_00406b90(0xc,0,0);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      *piVar4 = iVar6;
      piVar4[1] = (int)(puVar3 + 2);
      piVar4[2] = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x8));
    }
    uVar8 = *(undefined4 *)((int)this + 0x2c);
    uVar12 = 5;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    *(int * PTR32 *)((int)this + 0x30) = piVar4;
    this_00 = REFG(undefined4, 0x1375ae8);
    uVar7 = 1;
    uVar5 = F_00bca420(((undefined1 *)(gen_frame + 0x214)),param_1,param_2,(*(undefined4 *)(gen_frame + 0x4)));
    uVar5 = F_0042a3a0(((undefined1 *)(gen_frame + 0xc)),uVar5,uVar7);
    F_004fd610(this_00,&(*(undefined4 *)(gen_frame + 0x4)),uVar5,uVar8,iVar2,uVar9,uVar10,uVar11,uVar12);
    F_00429fa0();
    F_0042c880(((undefined1 *)(gen_frame + 0x214)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x268)) ^ (uint)(uint)(gen_frame + 0x26c));
  return (uint)this;
}

/* ref: FUN_00bca760 */
unsigned int F_00bca760(unsigned int gen_a0)
{
  GEN_ENTER(0xbca760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x110640c));
  if ((*(uint *)((int)this + 0x28) & 0xc000000) != 0) {
    F_004fad40((undefined *)((int)this + 0x28));
  }
  if (*(int *)((int)this + 0x30) != 0) {
    F_00406ad0(*(int *)((int)this + 0x30));
    *(undefined4 *)((int)this + 0x30) = 0;
  }
  if (*(int *)((int)this + 0x2c) != 0) {
    F_00406ad0(*(int *)((int)this + 0x2c));
    *(undefined4 *)((int)this + 0x2c) = 0;
  }
  F_004a05c0(this);
  return 0;
}

/* ref: FUN_00bca7c0 */
uint F_00bca7c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbca7c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  return (uint)this;
}

/* ref: FUN_00bca7e0 */
uint F_00bca7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbca7e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  
  if (param_2 == 0) {
    return **(uint * PTR32 *)(in_ecx + 4);
  }
  piVar1 = ((int *)GEN_TOP((*(int *)(in_ecx + 4) + param_2 * 4)));
  return *piVar1 - piVar1[-1];
}

/* ref: FUN_00bca810 */
uint F_00bca810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbca810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  if (param_1 == 0) {
    if (*piVar1 != 0) {
      return *(uint *)((int)this + 8);
    }
  }
  else if (piVar1[param_1] != piVar1[param_1 + -1]) {
    return *((int *)GEN_TOP((*(int *)((int)this + 4) + -4 + param_1 * 4))) + *(int *)((int)this + 8);
  }
  return 0;
}

/* ref: FUN_00bca850 */
uint F_00bca850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbca850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::Log::LogPage::vf0 */
uint F_00bca8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbca8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x110640c));
  if ((*(uint *)(this + 0x28) & 0xc000000) != 0) {
    F_004fad40(this + 0x28);
  }
  if (*(int *)(this + 0x30) != 0) {
    F_00406ad0(*(int *)(this + 0x30));
    *(undefined4 *)(this + 0x30) = 0;
  }
  if (*(int *)(this + 0x2c) != 0) {
    F_00406ad0(*(int *)(this + 0x2c));
    *(undefined4 *)(this + 0x2c) = 0;
  }
  F_004a05c0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bca920 */
unsigned int F_00bca920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbca920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1 * 0x20;
  iVar1 = *param_1 * 0x48;
  F_00c1fa10(((undefined *)GEN_TOP((*(int *)((int)this + 4) + iVar1))),*(int *)((int)this + 8) + iVar2);
  F_00c1fbe0(((undefined *)GEN_TOP((*(int *)((int)this + 4) + iVar1))),*(int *)((int)this + 0xc) + iVar2);
  return 0;
}

/* ref: FUN_00bca970 */
uint F_00bca970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbca970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x320080);
  *param_1 = uVar1;
  *(int *)((int)this + 0x320084) = *(int *)((int)this + 0x320084) + 1;
  *(uint * PTR32 *)((int)this + 0x320080) = param_1;
  return uVar1;
}

/* ref: FUN_00bca990 */
uint F_00bca990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbca990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * _Dst;
  
  _Dst = *(undefined4 * PTR32 *)((int)this + 0x320080);
  if (_Dst == (undefined4 *)0x0) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x320080) = *_Dst;
  F_00c48350(_Dst,0,0x780);
  F_00c48350(_Dst + 0x3c0,0,0xf0);
  *(undefined2 *)((int)_Dst + 0xff2) = (undefined2)param_1;
  *(undefined2 *)(_Dst + 0x3fc) = 0;
  *(int *)((int)this + 0x320084) = *(int *)((int)this + 0x320084) + -1;
  return (uint)_Dst;
}

/* ref: FUN_00bcaa00 */
unsigned int F_00bcaa00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xbcaa00u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  short * param_4 = (short *)(uintptr_t)gen_a3;
  uint param_5 = (uint)gen_a4;
  uint param_6 = (uint)gen_a5;
  undefined2 uVar1;
  undefined2 uVar2;
  byte bVar3;
  float10 fVar5;
  byte bVar4;
  
  if (*(byte *)(param_1 + 0x14) != 0) {
    bVar4 = *(byte *)(param_1 + 0x14);
    do {
      bVar3 = bVar4 - 1;
      fVar5 = (float10)*(float *)(param_1 + 0x54 + (uint)bVar3 * 4);
      uVar1 = (undefined2)(int)(fVar5 * (float10)*(float *)param_5);
      uVar2 = (undefined2)(int)((float10)*(float *)(param_5 + 4) * fVar5);
      if ((int)CONCAT22(uVar2,uVar1) ==
          (int)CONCAT22((short)(int)(fVar5 * (float10)*(float *)(param_6 + 4)),
                        (short)(int)((float10)*(float *)param_6 * fVar5))) {
        *param_2 = uVar1;
        *param_3 = uVar2;
        *param_4 = bVar4 - 1;
        return 0;
      }
      bVar4 = bVar3;
    } while (bVar3 != 0);
  }
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  return 0;
}

/* ref: FUN_00bcab40 */
uint F_00bcab40(unsigned int gen_a0)
{
  GEN_ENTER(0xbcab40u, gen_a0, 0u, 0u, 0u);
  undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined2 * in_ecx_00;
  int local_8;
  
  uVar1 = REFG(float, 0x110643c);
  *in_ecx = 0;
  *(undefined4 *)(in_ecx + 2) = 0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 6) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined1 *)(in_ecx + 10) = 8;
  in_ecx[0xb] = 0;
  *(undefined4 *)(in_ecx + 0xc) = uVar1;
  in_ecx_00 = in_ecx + 0x40;
  local_8 = 799;
  do {
    F_00c21980(in_ecx_00);
    in_ecx_00 = in_ecx_00 + 0x800;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  *(undefined4 *)(in_ecx + 0x190040) = 0;
  *(undefined4 *)(in_ecx + 0x190042) = 0;
  *(undefined4 *)(in_ecx + 0x19005a) = 0;
  *(undefined4 *)(in_ecx + 0x19005c) = 0;
  *(undefined4 *)(in_ecx + 0x19005e) = 0;
  *(undefined4 *)(in_ecx + 0x190060) = 0;
  *(undefined4 *)(in_ecx + 0x190062) = 0;
  *(undefined4 *)(in_ecx + 0x190064) = 0;
  *(undefined4 *)(in_ecx + 0x190086) = 0;
  *(undefined4 *)(in_ecx + 0x190088) = 0;
  *(undefined4 *)(in_ecx + 0x19008a) = 0;
  *(undefined * PTR32 * PTR32 *)(in_ecx + 0x190058) =
       (*(undefined * PTR32 (*)[1])REFP(0x1106438));
  *(undefined4 *)(in_ecx + 0x19008e) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00bcabf0 */
unsigned int F_00bcabf0(unsigned int gen_a0)
{
  GEN_ENTER(0xbcabf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)(in_ecx + 0x3200b0) =
       (*(undefined * PTR32 (*)[1])REFP(0x1106438));
  iVar1 = 799;
  do {
    F_00c21970();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return 0;
}

/* ref: FUN_00bcac30 */
unsigned int F_00bcac30(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbcac30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  byte bVar2;
  uint uVar3;
  
  *(float *)(param_1 + 0x18) = param_2;
  fVar1 = ((float)GEN_TOF(((float10)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 (*)[3])REFP(0x110640c)) +
                            (uint)*(byte *)(param_1 + 0x14) * 2 + 10))) * (float10)param_2)));
  *(float *)(param_1 + 0x1c) = fVar1;
  fVar1 = (float)((float10)fVar1 * (float10)REFG(double, 0x1088108));
  *(float *)(param_1 + 0x20) = fVar1;
  *(float *)(param_1 + 0x24) = ((float)GEN_TOF(-(float10)fVar1));
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x20) ^ REFG(uint, 0x10920d0);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x20);
  if (*(byte *)(param_1 + 0x14) != 0) {
    uVar3 = 0;
    do {
      bVar2 = (char)uVar3 + 1;
      fVar1 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x1c) / (float10)(ushort)(&REFG(undefined2, 0x1106418))[uVar3])))
      ;
      *(float *)(param_1 + 0x34 + uVar3 * 4) = fVar1;
      *(float *)(param_1 + 0x54 + uVar3 * 4) = (float)((float10)1 / (float10)fVar1);
      uVar3 = (uint)bVar2;
    } while (bVar2 < *(byte *)(param_1 + 0x14));
  }
  return 0;
}

/* ref: FUN_00bcacd0 */
ushort F_00bcacd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcacd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  
  (*(float *)(gen_frame + 0x0)) = *param_1;
  (*(float *)(gen_frame + 0x8)) = param_1[2];
  (*(float *)(gen_frame + 0x2c)) = param_1[3];
  fVar6 = (float10)*param_1;
  fVar7 = (float10)param_1[3];
  fVar1 = (float)(fVar6 - fVar7);
  (*(float *)(gen_frame + 0x10)) = fVar1;
  fVar8 = (float10)param_1[2];
  fVar2 = (float)(fVar8 - fVar7);
  (*(float *)(gen_frame + 0x14)) = fVar2;
  fVar3 = (float)(fVar7 + fVar6);
  (*(float *)(gen_frame + 0x0)) = fVar3;
  fVar4 = (float)(fVar7 + fVar8);
  (*(float *)(gen_frame + 0x4)) = fVar4;
  (*(float *)(gen_frame + 0x2c)) = *(float *)((int)this + 0x24);
  fVar6 = (float10)*(float *)((int)this + 0x24);
  fVar7 = (float10)fVar1;
  if (fVar6 <= fVar7) {
    (*(float *)(gen_frame + 0x2c)) = *(float *)((int)this + 0x2c);
    fVar8 = (float10)*(float *)((int)this + 0x2c);
    if (fVar7 <= fVar8) {
      (*(float *)(gen_frame + 0x2c)) = *(float *)((int)this + 0x28);
      fVar9 = (float10)*(float *)((int)this + 0x28);
      fVar10 = (float10)fVar2;
      if (!(fVar9 <= fVar10)) {
        return 0;
      }
      (*(float *)(gen_frame + 0x2c)) = *(float *)((int)this + 0x30);
      fVar11 = (float10)*(float *)((int)this + 0x30);
      if (!(fVar10 <= fVar11)) {
        return 0;
      }
      fVar12 = (float10)fVar3;
      if ((fVar6 <= fVar12) && (fVar12 <= fVar8)) {
        fVar6 = (float10)fVar4;
        if (!(fVar9 <= fVar6)) {
          return 0;
        }
        if (!(fVar6 <= fVar11)) {
          return 0;
        }
        (*(float *)(gen_frame + 0x2c)) = *(float *)((int)this + 0x20);
        fVar8 = (float10)*(float *)((int)this + 0x20);
        (*(float *)(gen_frame + 0x0)) = (float)(fVar8 + fVar7);
        (*(float *)(gen_frame + 0x4)) = (float)(fVar8 + fVar10);
        (*(float *)(gen_frame + 0x10)) = (float)(fVar8 + fVar12);
        (*(float *)(gen_frame + 0x14)) = (float)(fVar8 + fVar6);
        if ((*(uint *)&REFG(undefined, 0x14c59f0) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x14c59f0) = *(uint *)&REFG(undefined, 0x14c59f0) | 1;
          *(float *)&REFG(undefined, 0x14c59e0) = REFG(float, 0x10920a4);
          *(float *)&REFG(undefined, 0x14c59e4) = REFG(float, 0x10920a4);
        }
        (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF(((float10)*(float *)&REFG(undefined, 0x14c59e0) + (float10)(float)(fVar8 + fVar7))));
        (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF(((float10)*(float *)&REFG(undefined, 0x14c59e4) + (float10)(float)(fVar8 + fVar10))));
        (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)(float)(fVar8 + fVar12) - (float10)*(float *)&REFG(undefined, 0x14c59e0))));
        (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)(float)(fVar8 + fVar6) - (float10)*(float *)&REFG(undefined, 0x14c59e4))));
        F_00bcaa00(this,&(*(undefined4 *)(gen_frame + 0x24)),&(*(undefined4 *)(gen_frame + 0x28)),&(*(float *)(gen_frame + 0x2c)),(uint)&(*(float *)(gen_frame + 0x0)),(uint)&(*(float *)(gen_frame + 0x10)));
        uVar5 = F_00bcbea0((*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x2c))));
        return (ushort)uVar5;
      }
    }
  }
  return 0;
}

/* ref: FUN_00bcaee0 */
ushort F_00bcaee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcaee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  (*(float *)(gen_frame + 0x0)) = *param_1;
  (*(float *)(gen_frame + 0x4)) = param_1[2];
  (*(float *)(gen_frame + 0x2c)) = *(float *)((int)this + 0x24);
  fVar2 = (float10)*(float *)((int)this + 0x24);
  (*(float *)(gen_frame + 0x10)) = param_1[4];
  fVar3 = (float10)*param_1;
  (*(float *)(gen_frame + 0x14)) = param_1[6];
  if (fVar2 <= fVar3) {
    (*(float *)(gen_frame + 0x2c)) = *(float *)((int)this + 0x2c);
    fVar4 = (float10)*(float *)((int)this + 0x2c);
    if (fVar3 <= fVar4) {
      (*(float *)(gen_frame + 0x2c)) = *(float *)((int)this + 0x28);
      fVar5 = (float10)*(float *)((int)this + 0x28);
      fVar6 = (float10)param_1[2];
      if (fVar5 <= fVar6) {
        (*(float *)(gen_frame + 0x2c)) = *(float *)((int)this + 0x30);
        fVar7 = (float10)*(float *)((int)this + 0x30);
        if (fVar6 <= fVar7) {
          fVar8 = (float10)param_1[4];
          if (!(fVar2 <= fVar8)) {
            return 0;
          }
          if (!(fVar8 <= fVar4)) {
            return 0;
          }
          fVar2 = (float10)param_1[6];
          if ((fVar5 <= fVar2) && (fVar2 <= fVar7)) {
            (*(float *)(gen_frame + 0x2c)) = *(float *)((int)this + 0x20);
            fVar4 = (float10)*(float *)((int)this + 0x20);
            (*(float *)(gen_frame + 0x0)) = (float)(fVar4 + fVar3);
            (*(float *)(gen_frame + 0x4)) = (float)(fVar4 + fVar6);
            (*(float *)(gen_frame + 0x10)) = (float)(fVar4 + fVar8);
            (*(float *)(gen_frame + 0x14)) = (float)(fVar4 + fVar2);
            if ((*(uint *)&REFG(undefined, 0x14c5a10) & 1) == 0) {
              *(uint *)&REFG(undefined, 0x14c5a10) = *(uint *)&REFG(undefined, 0x14c5a10) | 1;
              *(float *)&REFG(undefined, 0x14c5a00) = REFG(float, 0x10920a4);
              *(float *)&REFG(undefined, 0x14c5a04) = REFG(float, 0x10920a4);
            }
            (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF(((float10)*(float *)&REFG(undefined, 0x14c5a00) + (float10)(float)(fVar4 + fVar3))));
            (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF(((float10)*(float *)&REFG(undefined, 0x14c5a04) + (float10)(float)(fVar4 + fVar6))));
            (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)(float)(fVar4 + fVar8) - (float10)*(float *)&REFG(undefined, 0x14c5a00))));
            (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)(float)(fVar4 + fVar2) - (float10)*(float *)&REFG(undefined, 0x14c5a04))));
            F_00bcaa00(this,&(*(undefined4 *)(gen_frame + 0x24)),&(*(undefined4 *)(gen_frame + 0x28)),&(*(float *)(gen_frame + 0x2c)),(uint)&(*(float *)(gen_frame + 0x0)),(uint)&(*(float *)(gen_frame + 0x10)));
            uVar1 = F_00bcbea0((*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x2c))));
            return (ushort)uVar1;
          }
          return 0;
        }
      }
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00bcb0b0 */
uint F_00bcb0b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbcb0b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined * this_00;
  undefined4 uVar1;
  float fVar2;
  uint uVar3;
  double dVar4;
  
  uVar1 = *(undefined4 *)(param_3 + 0xc);
  uVar3 = (uint)(ushort)param_1;
  this_00 = ((undefined *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 0x48)));
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = this_00;
  if (((char)param_4 == '\0') || ((ushort)param_1 != 0)) {
    (*(undefined4 *)(gen_frame + 0x10)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x18)) = uVar1;
    F_00c20380(this_00,*(int *)((int)this + 8) + uVar3 * 0x20,param_3,&(*(undefined4 *)(gen_frame + 0x10)));
    dVar4 = F_00b137d0(REFG(undefined4, 0x1370c1c),param_2 - *(int *)((int)REFG(undefined4, 0x1370c1c) + 8) >> 4);
    fVar2 = (float)((float10)dVar4 + (float10)*(double *)&REFG(undefined, 0x10947f0));
    (*(float *)(gen_frame + 0x28)) = fVar2;
    (*(float *)(gen_frame + 0x0)) = fVar2;
    (*(float *)(gen_frame + 0x4)) = fVar2;
    (*(float *)(gen_frame + 0x8)) = fVar2;
    F_00c20380((*(undefined * PTR32 *)(gen_frame + 0x2c)),*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0xc) + uVar3 * 0x20,param_3,&(*(float *)(gen_frame + 0x0)));
  }
  uVar3 = F_00c20db0((*(undefined * PTR32 *)(gen_frame + 0x2c)),uVar3,param_2,param_3);
  return uVar3;
}

/* ref: FUN_00bcb180 */
uint F_00bcb180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbcb180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float10 fVar5;
  double dVar6;
  
  uVar4 = (uint)(ushort)param_1;
  this_00 = ((undefined *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 0x48)));
  (*(undefined * PTR32 *)(gen_frame + 0x44)) = this;
  (*(uint *)(gen_frame + 0x40)) = uVar4;
  (*(undefined * PTR32 *)(gen_frame + 0x4c)) = this_00;
  if (((char)param_4 == '\0') || ((ushort)param_1 != 0)) {
    F_00c20480(this_00,*(int *)((int)this + 8) + uVar4 * 0x20,param_3);
    dVar6 = F_00b137d0(REFG(undefined4, 0x1370c1c),param_2 - *(int *)((int)REFG(undefined4, 0x1370c1c) + 8) >> 4);
    fVar1 = (float)((float10)dVar6 + (float10)*(double *)&REFG(undefined, 0x10947f0));
    (*(float *)(gen_frame + 0x48)) = fVar1;
    (*(float *)(gen_frame + 0x30)) = (float)((float10)*param_3 + (float10)param_3[4]);
    (*(float *)(gen_frame + 0x10)) = fVar1;
    (*(float *)(gen_frame + 0x14)) = fVar1;
    (*(float *)(gen_frame + 0x34)) = (float)((float10)param_3[5] + (float10)param_3[1]);
    (*(float *)(gen_frame + 0x18)) = fVar1;
    (*(float *)(gen_frame + 0x38)) = (float)((float10)param_3[6] + (float10)param_3[2]);
    fVar5 = (float10)REFG(double, 0x1088108);
    fVar1 = ((float)GEN_TOF(((float10)(float)((float10)*param_3 + (float10)param_3[4]) * fVar5)));
    (*(float *)(gen_frame + 0x20)) = fVar1;
    fVar2 = ((float)GEN_TOF(((float10)(float)((float10)param_3[5] + (float10)param_3[1]) * fVar5)));
    (*(float *)(gen_frame + 0x24)) = fVar2;
    fVar3 = ((float)GEN_TOF((fVar5 * (float10)(float)((float10)param_3[6] + (float10)param_3[2]))));
    (*(float *)(gen_frame + 0x28)) = fVar3;
    (*(float *)(gen_frame + 0x0)) = fVar1;
    (*(float *)(gen_frame + 0x4)) = fVar2;
    (*(float *)(gen_frame + 0x8)) = fVar3;
    F_00c20380((*(undefined * PTR32 *)(gen_frame + 0x4c)),*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + 0xc) + uVar4 * 0x20,&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x10)));
  }
  uVar4 = F_00c20ec0((*(undefined * PTR32 *)(gen_frame + 0x4c)),(*(uint *)(gen_frame + 0x40)),param_2,param_3);
  return uVar4;
}

/* ref: FUN_00bcb290 */
uint F_00bcb290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbcb290u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint * puVar1;
  
  puVar1 = (uint *)F_00c20550(param_2,param_3);
  if (((char)param_4 == '\0') || ((ushort)param_1 != 0)) {
    puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x10) + (uint)((ushort)param_1 >> 5) * 4)));
    *puVar1 = *puVar1 | 1 << ((byte)(ushort)param_1 & 0x1f);
  }
  return (uint)puVar1;
}

/* ref: FUN_00bcb2e0 */
uint F_00bcb2e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbcb2e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint * puVar1;
  
  puVar1 = (uint *)F_00c205c0(param_2,param_3);
  if (((char)param_4 == '\0') || ((ushort)param_1 != 0)) {
    puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x10) + (uint)((ushort)param_1 >> 5) * 4)));
    *puVar1 = *puVar1 | 1 << ((byte)(ushort)param_1 & 0x1f);
  }
  return (uint)puVar1;
}

/* ref: FUN_00bcb330 */
ushort F_00bcb330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcb330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  return *(ushort *)((uint)*param_1 * 0x1000 + 0x1072 + (int)this);
}

/* ref: FUN_00bcb350 */
unsigned int F_00bcb350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbcb350u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 * puVar1;
  int * this_00;
  uint * puVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  undefined4 * puVar9;
  uint uVar10;
  
  iVar8 = (int)(*(ushort * PTR32 *)&gen_args[1]) - *(int *)(REFG(int, 0x1370c1c) + 8);
  uVar3 = *(*(ushort * PTR32 *)&gen_args[1]);
  puVar1 = ((undefined1 *)GEN_TOP(((int)(*(ushort * PTR32 *)&gen_args[1]) + 3)));
  uVar4 = *((ushort *)GEN_TOP(((uint)uVar3 * 0x1000 + 0x1072 + (int)(*(undefined * PTR32 *)&gen_args[0]))));
  uVar10 = (uint)uVar4;
  (*(ushort * PTR32 *)&gen_args[1]) = ((ushort *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(ushort * PTR32 *)&gen_args[1]), 1, 3),(char)(*(ushort * PTR32 *)&gen_args[1])[1])));
  (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),*puVar1);
  this_00 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + uVar10 * 0x48)));
  bVar7 = F_00b133e0((*(ushort * PTR32 *)&gen_args[1]));
  F_00c20740(this_00,(uint)bVar7,iVar8 >> 4,(uint)uVar3,(*(undefined4 *)(gen_frame + 0x4)));
  uVar6 = REFG(float, 0x1097b10);
  uVar5 = REFG(float, 0x1090998);
  if ((this_00[9] - this_00[8] >> 2) + (this_00[1] - *this_00 >> 2) + (this_00[5] - this_00[4] >> 2)
      == 0) {
    puVar9 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + uVar10 * 0x20)));
    *puVar9 = GEN_FLT_TO(*puVar9, REFG(float, 0x1090998));
    puVar9[1] = uVar5;
    puVar9[2] = uVar5;
    puVar9[4] = uVar6;
    puVar9[5] = uVar6;
    puVar9[6] = uVar6;
    iVar8 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
    puVar9 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + uVar10 * 0x20)));
    *puVar9 = uVar5;
    puVar9[1] = uVar5;
    puVar9[2] = uVar5;
    puVar9[4] = uVar6;
    puVar9[5] = uVar6;
    puVar9[6] = uVar6;
    puVar2 = ((uint *)GEN_TOP((iVar8 + (uint)(uVar4 >> 5) * 4)));
    *puVar2 = *puVar2 & ~(1 << ((byte)uVar4 & 0x1f));
    return 0;
  }
  if (((char)(*(undefined4 *)&gen_args[2]) == '\0') || (uVar10 != 0)) {
    puVar2 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + (uint)(uVar4 >> 5) * 4)));
    *puVar2 = *puVar2 | 1 << ((byte)uVar4 & 0x1f);
  }
  return 0;
}

/* ref: FUN_00bcb490 */
uint F_00bcb490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbcb490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint local_10;
  uint local_c;
  int local_8;
  
  local_10 = (uint)*(ushort *)this;
  iVar7 = 0;
  uVar6 = 0;
  if (*(ushort *)this != 0) {
    local_8 = 0;
    do {
      iVar1 = *(int *)((int)this + 4);
      piVar3 = (int *)(iVar1 + iVar7);
      if (((*(int *)(iVar1 + 0x14 + iVar7) - *(int *)(iVar1 + 0x10 + iVar7) >> 2) +
           (*(int *)(iVar1 + 4 + iVar7) - *(int *)(iVar1 + iVar7) >> 2) +
           (piVar3[9] - piVar3[8] >> 2) != 0) &&
         (bVar2 = F_00b16570(*(int *)((int)this + 0xc) + local_8,param_2), bVar2 != 0)) {
        uVar4 = 0;
        uVar5 = piVar3[1] - *piVar3 >> 2;
        if (uVar5 != 0) {
          do {
            *(undefined4 *)(param_1 + uVar6 * 4) =
                 *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar7 + *(int *)((int)this + 4)))) + uVar4 * 4)));
            uVar4 = uVar4 + 1;
            uVar6 = uVar6 + 1;
          } while (uVar4 < uVar5);
        }
        piVar3 = ((int *)GEN_TOP((iVar7 + 0x10 + *(int *)((int)this + 4))));
        uVar4 = piVar3[1] - *piVar3 >> 2;
        local_c = 0;
        if (uVar4 != 0) {
          do {
            *(undefined4 *)(param_1 + uVar6 * 4) =
                 *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar7 + 0x10 + *(int *)((int)this + 4)))) + local_c * 4)));
            local_c = local_c + 1;
            uVar6 = uVar6 + 1;
          } while (local_c < uVar4);
        }
        piVar3 = ((int *)GEN_TOP((iVar7 + 0x20 + *(int *)((int)this + 4))));
        uVar4 = piVar3[1] - *piVar3 >> 2;
        local_c = 0;
        if (uVar4 != 0) {
          do {
            *(undefined4 *)(param_1 + uVar6 * 4) =
                 *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar7 + 0x20 + *(int *)((int)this + 4)))) + local_c * 4)));
            local_c = local_c + 1;
            uVar6 = uVar6 + 1;
          } while (local_c < uVar4);
        }
      }
      local_8 = local_8 + 0x20;
      iVar7 = iVar7 + 0x48;
      local_10 = local_10 - 1;
    } while (local_10 != 0);
  }
  return uVar6;
}

/* ref: FUN_00bcb5b0 */
uint F_00bcb5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcb5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint local_8;
  
  local_8 = (uint)*(ushort *)this;
  iVar3 = 0;
  uVar2 = 0;
  if (*(ushort *)this != 0) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)((int)this + 4);
      if ((*(int *)(iVar1 + 4 + iVar4) - *(int *)(iVar1 + iVar4) >> 2) +
          (*(int *)(iVar1 + 0x24 + iVar4) - *(int *)(iVar1 + 0x20 + iVar4) >> 2) +
          (*(int *)(iVar1 + iVar4 + 0x14) - *(int *)(iVar1 + iVar4 + 0x10) >> 2) != 0) {
        *(int *)(param_1 + uVar2 * 4) = iVar3;
        uVar2 = uVar2 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x48;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  return uVar2;
}

/* ref: FUN_00bcb620 */
byte F_00bcb620(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xbcb620u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  uint * puVar6;
  uint * puVar7;
  uint uVar8;
  undefined4 * puVar9;
  undefined * _Dst;
  ushort * puVar10;
  short * psVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  
  *((byte *)GEN_TOP(((*(ushort * PTR32 *)&gen_args[0]) + 10))) = (byte)(*(int *)&gen_args[1]);
  uVar5 = (uint)(byte)(*(int *)&gen_args[1]);
  bVar14 = (byte)(*(int *)&gen_args[1]) != 0;
  (*(undefined2 *)((char *)&(*(int *)&gen_args[1]) + 0)) = 0;
  uVar4 = (ushort)(*(int *)&gen_args[1]);
  if (bVar14) {
    psVar11 = (short *)&REFG(undefined4, 0x1342d68);
    do {
      uVar4 = uVar4 + *psVar11;
      psVar11 = psVar11 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  uVar5 = (uint)uVar4;
  *(*(ushort * PTR32 *)&gen_args[0]) = uVar4;
  puVar6 = (uint *)F_00406bb0(-(uint)(0xfffffffb < uVar5 * 0x48) | uVar5 * 0x48 + 4,0,0);
  if (puVar6 == (uint *)0x0) {
    puVar7 = (uint *)0x0;
  }
  else {
    puVar7 = puVar6 + 1;
    *puVar6 = uVar5;
    puVar6 = puVar7;
    uVar8 = uVar5;
    while (uVar8 = uVar8 - 1, -1 < (int)uVar8) {
      F_00c20790(puVar6);
      puVar6 = puVar6 + 0x12;
    }
  }
  *((uint * PTR32 *)GEN_TOP(((*(ushort * PTR32 *)&gen_args[0]) + 2))) = puVar7;
  uVar8 = F_00406bb0(uVar5 * 0x20,0,0);
  *((uint *)GEN_TOP(((*(ushort * PTR32 *)&gen_args[0]) + 4))) = uVar8;
  uVar8 = F_00406bb0(uVar5 * 0x20,0,0);
  uVar2 = REFG(float, 0x1097b10);
  uVar1 = REFG(float, 0x1090998);
  *((uint *)GEN_TOP(((*(ushort * PTR32 *)&gen_args[0]) + 6))) = uVar8;
  uVar8 = 0;
  if (3 < uVar5) {
    (*(int *)&gen_args[1]) = (uVar5 - 4 >> 2) + 1;
    iVar12 = 0;
    uVar8 = (*(int *)&gen_args[1]) * 4;
    do {
      iVar13 = *((int *)GEN_TOP(((*(ushort * PTR32 *)&gen_args[0]) + 6)));
      *(undefined4 *)(iVar13 + iVar12) = uVar1;
      *(undefined4 *)(iVar13 + 4 + iVar12) = uVar1;
      *(undefined4 *)(iVar13 + 8 + iVar12) = uVar1;
      *(undefined4 *)(iVar13 + 0x10 + iVar12) = uVar2;
      *(undefined4 *)(iVar13 + 0x14 + iVar12) = uVar2;
      *(undefined4 *)(iVar13 + 0x18 + iVar12) = uVar2;
      iVar13 = *((int *)GEN_TOP(((*(ushort * PTR32 *)&gen_args[0]) + 6)));
      *(undefined4 *)(iVar12 + 0x20 + iVar13) = uVar1;
      *(undefined4 *)(iVar12 + 0x24 + iVar13) = uVar1;
      *(undefined4 *)(iVar12 + 0x28 + iVar13) = uVar1;
      *(undefined4 *)(iVar12 + 0x30 + iVar13) = uVar2;
      *(undefined4 *)(iVar12 + 0x34 + iVar13) = uVar2;
      *(undefined4 *)(iVar12 + iVar13 + 0x38) = uVar2;
      iVar13 = *((int *)GEN_TOP(((*(ushort * PTR32 *)&gen_args[0]) + 6)));
      *(undefined4 *)(iVar12 + 0x40 + iVar13) = uVar1;
      *(undefined4 *)(iVar12 + 0x44 + iVar13) = uVar1;
      iVar13 = iVar12 + 0x40 + iVar13;
      *(undefined4 *)(iVar13 + 8) = uVar1;
      *(undefined4 *)(iVar13 + 0x10) = uVar2;
      *(undefined4 *)(iVar13 + 0x14) = uVar2;
      *(undefined4 *)(iVar13 + 0x18) = uVar2;
      puVar9 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((*(ushort * PTR32 *)&gen_args[0]) + 6))) + iVar12 + 0x60)));
      *puVar9 = uVar1;
      puVar9[1] = uVar1;
      puVar9[2] = uVar1;
      puVar9[4] = uVar2;
      iVar12 = iVar12 + 0x80;
      (*(int *)&gen_args[1]) = (*(int *)&gen_args[1]) + -1;
      puVar9[5] = uVar2;
      puVar9[6] = uVar2;
    } while ((*(int *)&gen_args[1]) != 0);
  }
  if (uVar8 < uVar5) {
    iVar12 = uVar8 << 5;
    iVar13 = uVar5 - uVar8;
    do {
      puVar9 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((*(ushort * PTR32 *)&gen_args[0]) + 6))) + iVar12)));
      *puVar9 = uVar1;
      puVar9[1] = uVar1;
      puVar9[2] = uVar1;
      iVar12 = iVar12 + 0x20;
      iVar13 = iVar13 + -1;
      puVar9[4] = uVar2;
      puVar9[5] = uVar2;
      puVar9[6] = uVar2;
    } while (iVar13 != 0);
  }
  uVar5 = (*(*(ushort * PTR32 *)&gen_args[0]) + 0xff & 0xffffff00) >> 5;
  (*(ushort * PTR32 *)&gen_args[0])[0xb] = (ushort)uVar5;
  _Dst = (undefined *)F_00406bb0(uVar5 * 4,0,0);
  *((undefined * PTR32 *)GEN_TOP(((*(ushort * PTR32 *)&gen_args[0]) + 8))) = _Dst;
  F_00c48350(_Dst,0,(uint)(*(ushort * PTR32 *)&gen_args[0])[0xb] * 4);
  F_00bcac30((*(ushort * PTR32 *)&gen_args[0]),(*(float *)&gen_args[2]));
  uVar5 = 0;
  puVar10 = (*(ushort * PTR32 *)&gen_args[0]) + 0x40;
  do {
    puVar10[0x7fa] = (ushort)uVar5;
    *(undefined4 *)puVar10 = *((undefined4 *)GEN_TOP(((*(ushort * PTR32 *)&gen_args[0]) + 0x190040)));
    *((int *)GEN_TOP(((*(ushort * PTR32 *)&gen_args[0]) + 0x190042))) = *((int *)GEN_TOP(((*(ushort * PTR32 *)&gen_args[0]) + 0x190042))) + 1;
    *((ushort * PTR32 *)GEN_TOP(((*(ushort * PTR32 *)&gen_args[0]) + 0x190040))) = puVar10;
    uVar5 = uVar5 + 1;
    puVar10 = puVar10 + 0x800;
  } while (uVar5 < 800);
  bVar3 = F_00bcc190((*(ushort * PTR32 *)&gen_args[0]) + 0x190058,*(undefined4 *)(REFG(int, 0x1370b90) + 0x24));
  if (bVar3 == 0) {
    return 0;
  }
  puVar6 = ((uint *)GEN_TOP(((*(ushort * PTR32 *)&gen_args[0]) + 0x19005e)));
  LOCK();
  uVar5 = *puVar6;
  *puVar6 = *puVar6 + 1;
  UNLOCK();
  if (*((uint *)GEN_TOP(((*(ushort * PTR32 *)&gen_args[0]) + 0x19005c))) <= uVar5) {
    (*(ushort * PTR32 *)&gen_args[0])[0x19008c] = 0;
    (*(ushort * PTR32 *)&gen_args[0])[0x19008d] = 0;
    return 0;
  }
  iVar12 = *((int *)GEN_TOP(((*(ushort * PTR32 *)&gen_args[0]) + 0x19005a))) + uVar5 * 0x14;
  *((int *)GEN_TOP(((*(ushort * PTR32 *)&gen_args[0]) + 0x19008c))) = iVar12;
  return iVar12 != 0;
}

/* ref: FUN_00bcb930 */
uint F_00bcb930(unsigned int gen_a0)
{
  GEN_ENTER(0xbcb930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  ushort uVar4;
  ulonglong uVar5;
  
  F_00bcc2f0((undefined *)((int)this + 0x3200b0));
  if (*(int *)((int)this + 4) != 0) {
    uVar4 = 0;
    if (*(short *)this != 0) {
      do {
        F_00c20860(((undefined *)GEN_TOP((*(int *)((int)this + 4) + (uint)uVar4 * 0x48))));
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(ushort *)this);
    }
    iVar1 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + -4);
      this_00 = (undefined *)(iVar1 + iVar2 * 0x48);
      while (iVar2 = iVar2 + -1, -1 < iVar2) {
        this_00 = (undefined *)((int)this_00 + -0x48);
        F_00c207d0(this_00);
      }
      F_00406b30(iVar1 + -4);
      *(undefined4 *)((int)this + 4) = 0;
    }
  }
  *(undefined2 *)this = 0;
  if (*(int *)((int)this + 8) != 0) {
    F_00406b30(*(int *)((int)this + 8));
    *(undefined4 *)((int)this + 8) = 0;
  }
  if (*(int *)((int)this + 0xc) != 0) {
    F_00406b30(*(int *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  uVar3 = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    uVar5 = F_00406b30(*(int *)((int)this + 0x10));
    uVar3 = (uint)uVar5;
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  return uVar3;
}

/* ref: FUN_00bcb9f0 */
unsigned int F_00bcb9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcb9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  ushort uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int * piVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  
  uVar1 = *(ushort *)((int)this + 0x16);
  iVar10 = *(int *)((int)this + 0x320118);
  (*(int * PTR32 *)(gen_frame + 0x30)) = (int *)0x0;
  if (((char)param_1 == '\0') || ((*(byte *)((int)this + 0x32011c) & 0x3f) != 0)) {
    bVar6 = false;
  }
  else {
    piVar11 = *(int * PTR32 *)((int)this + 4);
    bVar6 = true;
    if ((piVar11[1] - *piVar11 >> 2) + (piVar11[9] - piVar11[8] >> 2) +
        (piVar11[5] - piVar11[4] >> 2) != 0) {
      **(uint * PTR32 *)((int)this + 0x10) = **(uint * PTR32 *)((int)this + 0x10) | 1;
    }
  }
  (*(uint *)(gen_frame + 0x28)) = 0;
  if (uVar1 != 0) {
    (*(int *)(gen_frame + 0x34)) = 0;
    do {
      uVar12 = *((uint *)GEN_TOP((*(int *)((int)this + 0x10) + (*(uint *)(gen_frame + 0x28)) * 4)));
      if (uVar12 != 0) {
        uVar13 = 0;
        (*(uint *)(gen_frame + 0x38)) = 1;
        do {
          if (((*(uint *)(gen_frame + 0x38)) & uVar12) != 0) {
            if (7 < *(uint *)(iVar10 + 8)) {
              if (*(uint * PTR32 *)(iVar10 + 0x10) != (uint *)0x0) {
                **(uint * PTR32 *)(iVar10 + 0x10) = *(uint *)(iVar10 + 8);
              }
              uVar9 = F_00bcc530(*(undefined * PTR32 *)(iVar10 + 0xc));
              *(uint *)(iVar10 + 0x10) = uVar9;
              *(uint *)(iVar10 + 4) = uVar9 + 0x10;
              *(undefined4 *)(iVar10 + 8) = 0;
            }
            iVar2 = *(int *)(iVar10 + 8);
            *(int *)(iVar10 + 8) = iVar2 + 1;
            (*(int * PTR32 *)(gen_frame + 0x30)) = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x30)) + 1);
            *((uint *)GEN_TOP((*(int *)(iVar10 + 4) + iVar2 * 4))) = (*(int *)(gen_frame + 0x34)) + uVar13;
          }
          uVar13 = uVar13 + 1;
          (*(uint *)(gen_frame + 0x38)) = (*(uint *)(gen_frame + 0x38)) << 1 | (uint)((int)(*(uint *)(gen_frame + 0x38)) < 0);
        } while (uVar13 < 0x20);
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + (*(uint *)(gen_frame + 0x28)) * 4))) = 0;
      }
      (*(int *)(gen_frame + 0x34)) = (*(int *)(gen_frame + 0x34)) + 0x20;
      (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) + 1;
    } while ((*(uint *)(gen_frame + 0x28)) < uVar1);
  }
  F_00bcc3a0((undefined *)((int)this + 0x3200b0),this,((code *)REFP(0xbca920)),1);
  uVar8 = REFG(float, 0x1097b10);
  uVar7 = REFG(float, 0x1090998);
  if ((*(int * PTR32 *)(gen_frame + 0x30)) != (int *)0x0) {
    uVar12 = (uint)!bVar6;
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 4)) = REFG(float, 0x1090998);
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 0)) = REFG(float, 0x1090998);
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 8)) = REFG(float, 0x1090998);
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 12)) = REFG(float, 0x1090998);
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 4)) = REFG(float, 0x1097b10);
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 0)) = REFG(float, 0x1097b10);
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 8)) = REFG(float, 0x1097b10);
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 12)) = REFG(float, 0x1097b10);
    if (uVar12 < *(ushort *)this) {
      (*(int * PTR32 *)(gen_frame + 0x30)) = ((int *)GEN_TOP((*(int *)((int)this + 4) + uVar12 * 0x48)));
      piVar11 = (*(int * PTR32 *)(gen_frame + 0x30)) + 5;
      iVar10 = uVar12 << 5;
      (*(uint *)(gen_frame + 0x28)) = *(ushort *)this - uVar12;
      uVar14 = REFG(float, 0x1090998);
      uVar15 = REFG(float, 0x1090998);
      uVar16 = REFG(float, 0x1090998);
      uVar17 = REFG(float, 0x1090998);
      uVar18 = REFG(float, 0x1097b10);
      uVar19 = REFG(float, 0x1097b10);
      uVar20 = REFG(float, 0x1097b10);
      uVar21 = REFG(float, 0x1097b10);
      do {
        if ((piVar11[4] - piVar11[3] >> 2) + (*piVar11 - piVar11[-1] >> 2) +
            (piVar11[-4] - *(*(int * PTR32 *)(gen_frame + 0x30)) >> 2) != 0) {
          (*(undefined4 *)((char *)&auVar4 + 4)) = uVar15;
          (*(undefined4 *)((char *)&auVar4 + 0)) = uVar14;
          (*(undefined4 *)((char *)&auVar4 + 8)) = uVar16;
          (*(undefined4 *)((char *)&auVar4 + 12)) = uVar17;
          gen_minps(((undefined1 *)(gen_frame + 0x10)), (*(int *)((int)this + 8) + iVar10), &(auVar4));
          uVar14 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 0));
          uVar15 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 4));
          uVar16 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 8));
          uVar17 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 12));
          (*(undefined4 *)((char *)&auVar5 + 4)) = uVar19;
          (*(undefined4 *)((char *)&auVar5 + 0)) = uVar18;
          (*(undefined4 *)((char *)&auVar5 + 8)) = uVar20;
          (*(undefined4 *)((char *)&auVar5 + 12)) = uVar21;
          gen_maxps(((undefined1 *)(gen_frame + 0x0)), (*(int *)((int)this + 8) + 0x10 + iVar10), &(auVar5));
          uVar18 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 0));
          uVar19 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 4));
          uVar20 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 8));
          uVar21 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 12));
        }
        (*(int * PTR32 *)(gen_frame + 0x30)) = (*(int * PTR32 *)(gen_frame + 0x30)) + 0x12;
        piVar11 = piVar11 + 0x12;
        iVar10 = iVar10 + 0x20;
        (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) + -1;
      } while ((*(uint *)(gen_frame + 0x28)) != 0);
    }
    *(undefined4 *)((int)this + 0x320090) = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 0));
    *(undefined4 *)((int)this + 0x320094) = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 4));
    *(undefined4 *)((int)this + 0x320098) = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x10)) + 8));
    *(undefined4 *)((int)this + 0x3200a0) = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 0));
    *(undefined4 *)((int)this + 0x3200a4) = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 4));
    *(undefined4 *)((int)this + 0x3200a8) = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x0)) + 8));
  }
  puVar3 = *(undefined4 * PTR32 *)((int)this + 8);
  *puVar3 = uVar8;
  puVar3[1] = uVar8;
  puVar3[2] = uVar8;
  iVar10 = *(int *)((int)this + 8);
  *(undefined4 *)(iVar10 + 0x10) = uVar7;
  *(undefined4 *)(iVar10 + 0x14) = uVar7;
  *(undefined4 *)(iVar10 + 0x18) = uVar7;
  puVar3 = *(undefined4 * PTR32 *)((int)this + 0xc);
  *puVar3 = uVar8;
  puVar3[1] = uVar8;
  puVar3[2] = uVar8;
  iVar10 = *(int *)((int)this + 0xc);
  *(undefined4 *)(iVar10 + 0x10) = uVar7;
  *(undefined4 *)(iVar10 + 0x14) = uVar7;
  *(undefined4 *)(iVar10 + 0x18) = uVar7;
  *(int *)((int)this + 0x32011c) = *(int *)((int)this + 0x32011c) + 1;
  return 0;
}

/* ref: FUN_00bcbd10 */
byte F_00bcbd10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcbd10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 8;
  *(undefined4 *)((int)this + 0xc) = param_1;
  return 1;
}

/* ref: FUN_00bcbd60 */
uint F_00bcbd60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbcbd60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00bcbd80 */
unsigned int F_00bcbd80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcbd80u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *in_ecx = (float)((float10)*param_2 + (float10)*in_ecx);
  in_ecx[1] = (float)((float10)param_2[1] + (float10)in_ecx[1]);
  return 0;
}

/* ref: FUN_00bcbda0 */
unsigned int F_00bcbda0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcbda0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *in_ecx = (float)((float10)*in_ecx - (float10)*param_2);
  in_ecx[1] = (float)((float10)in_ecx[1] - (float10)param_2[1]);
  return 0;
}

/* ref: FUN_00bcbdc0 */
unsigned int F_00bcbdc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcbdc0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *in_ecx = (float)((float10)*param_2 + (float10)*in_ecx);
  in_ecx[1] = (float)((float10)param_2[1] + (float10)in_ecx[1]);
  return 0;
}

/* ref: FUN_00bcbde0 */
unsigned int F_00bcbde0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcbde0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *in_ecx = (float)((float10)*in_ecx - (float10)*param_2);
  in_ecx[1] = (float)((float10)in_ecx[1] - (float10)param_2[1]);
  return 0;
}

/* ref: FUN_00bcbe30 */
ushort F_00bcbe30(unsigned int gen_a0)
{
  GEN_ENTER(0xbcbe30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return (&REFG(undefined2, 0x1106418))[(byte)param_1];
}

/* ref: FUN_00bcbe50 */
unsigned int F_00bcbe50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbcbe50u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  
  fVar1 = *(float *)(in_ecx + 0x20);
  *param_2 = (float)((float10)fVar1 + (float10)*param_3);
  param_2[1] = (float)((float10)fVar1 + (float10)param_3[1]);
  return 0;
}

/* ref: FUN_00bcbe80 */
uint F_00bcbe80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcbe80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)(ushort)param_2 * 0x1000 + 0x80 + in_ecx;
}

/* ref: FUN_00bcbea0 */
uint F_00bcbea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbcbea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return (uint)(ushort)((&REFG(undefined2, 0x1106418))[(byte)param_3] * (short)param_2 +
                        *(short *)(&REFG(undefined, 0x14c5a14) + (uint)(byte)param_3 * 2) + (short)param_1);
}

/* ref: FUN_00bcbee0 */
uint F_00bcbee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcbee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  int iVar2;
  undefined * this_00;
  
  if ((param_1 & 2) != 0) {
    piVar1 = (int *)((int)this + -4);
    iVar2 = *piVar1;
    this_00 = (undefined *)((int)this + iVar2 * 0x48);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      this_00 = (undefined *)((int)this_00 + -0x48);
      F_00c207d0(this_00);
    }
    if ((param_1 & 1) != 0) {
      F_00406b30(piVar1);
    }
    return (uint)piVar1;
  }
  F_00c207d0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bcbf60 */
unsigned int F_00bcbf60(unsigned int gen_a0)
{
  GEN_ENTER(0xbcbf60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  undefined4 uVar2;
  code * pcVar3;
  int iVar4;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  int iVar8;
  
  uVar2 = *(undefined4 *)((int)this + 0x14);
  pcVar3 = *(gen_code32 *)((int)this + 0x18);
  iVar4 = *(int *)((int)this + 0x5c);
  puVar1 = (uint *)((int)this + 0x60);
  LOCK();
  uVar7 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  while (uVar7 < iVar4 - 1U) {
    piVar6 = ((int *)GEN_TOP(((uVar7 & 0x1f) * 0x30 + *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c))))));
    iVar8 = *piVar6;
    if (iVar8 != 0) {
      piVar6 = piVar6 + 4;
      do {
        (*pcVar3)(uVar2,piVar6);
        piVar6 = piVar6 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    puVar1 = (uint *)((int)this + 0x60);
    LOCK();
    uVar7 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  uVar7 = *(int *)((int)this + 0x5c) - 1;
  iVar4 = *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c)));
  iVar8 = (uVar7 & 0x1f) * 0x30;
  uVar5 = *(uint *)(iVar4 + iVar8);
  puVar1 = (uint *)((int)this + 100);
  LOCK();
  uVar7 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  while (uVar7 < uVar5) {
    (*pcVar3)(uVar2,iVar4 + iVar8 + 0x10 + uVar7 * 4);
    puVar1 = (uint *)((int)this + 100);
    LOCK();
    uVar7 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  return 0;
}

/* ref: FUN_00bcc030 */
uint F_00bcc030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbcc030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0xbcbd60));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00bcc050 */
uint F_00bcc050(unsigned int gen_a0)
{
  GEN_ENTER(0xbcc050u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

/* ref: FUN_00bcc070 */
uint F_00bcc070(unsigned int gen_a0)
{
  GEN_ENTER(0xbcc070u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

/* ref: FUN_00bcc090 */
uint F_00bcc090(unsigned int gen_a0)
{
  GEN_ENTER(0xbcc090u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1,0x10);
  return uVar1;
}

/* ref: FUN_00bcc0b0 */
uint F_00bcc0b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbcc0b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

/* ref: FUN_00bcc0d0 */
uint F_00bcc0d0(unsigned int gen_a0)
{
  GEN_ENTER(0xbcc0d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

/* ref: FUN_00bcc130 */
unsigned int F_00bcc130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbcc130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00bcbf60(this);
  return 0;
}

/* ref: FUN_00bcc140 */
uint F_00bcc140(unsigned int gen_a0)
{
  GEN_ENTER(0xbcc140u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1,0x10);
  return uVar1;
}

/* ref: JobSystem_VCullingGridManager_Culling_Graphics_Client_UCullingGridJob::vf0 */
uint F_00bcc160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcc160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1106438));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),this);
  }
  return (uint)this;
}

/* ref: FUN_00bcc190 */
byte F_00bcc190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcc190u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * PTR32 * ppiVar1;
  uint * puVar2;
  uint * puVar3;
  int iVar4;
  undefined * this_00;
  uint uVar5;
  int iVar6;
  int * piVar7;
  int * piVar8;
  
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x2;
  ppiVar1 = &(*(int * PTR32 *)&gen_args[1]);
  if ((*(int * PTR32 *)&gen_args[1]) < 3) {
    ppiVar1 = &(*(int * PTR32 *)(gen_frame + 0x18));
  }
  piVar8 = *ppiVar1;
  *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = piVar8;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 0;
  (*(int * PTR32 *)&gen_args[1]) = piVar8;
  if (piVar8 == (int *)0x0) {
    puVar2 = (uint *)F_00406a50(4);
  }
  else {
    piVar7 = *(int * PTR32 *)(REFG(int, 0x1371270) + 4);
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar7;
    (*(int *)(gen_frame + 0x14)) = *piVar7;
    uVar5 = -(uint)((int)(ZEXT48(piVar8) * 0x14 >> 0x20) != 0) | (uint)(ZEXT48(piVar8) * 0x14);
    puVar2 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 8))(piVar7,-(uint)(0xfffffffb < uVar5) | uVar5 + 4,0x10)))
    ;
    piVar8 = (*(int * PTR32 *)&gen_args[1]);
  }
  if (puVar2 == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  else {
    puVar3 = puVar2 + 1;
    *puVar2 = (uint)piVar8;
    puVar2 = puVar3;
    piVar7 = piVar8;
    while (piVar7 = (int *)((int)piVar7 - 1), -1 < (int)piVar7) {
      *puVar2 = (uint)(*(undefined * PTR32 (*)[1])REFP(0x1106430));
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2 = puVar2 + 5;
    }
  }
  *((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = puVar3;
  if (piVar8 != (int *)0x0) {
    iVar6 = 0;
    piVar7 = piVar8;
    do {
      iVar4 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + iVar6;
      iVar6 = iVar6 + 0x14;
      piVar7 = (int *)((int)piVar7 - 1);
      *(undefined4 *)(iVar4 + 4) = 0;
      *(undefined4 *)(iVar4 + 8) = 8;
      *(undefined * PTR32 *)(iVar4 + 0xc) = (*(undefined * PTR32 *)&gen_args[0]);
      *(undefined4 *)(iVar4 + 0x10) = 0;
    } while (piVar7 != (int *)0x0);
  }
  this_00 = (undefined *)F_00406b90(0x78,0,0);
  if (this_00 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    (*(gen_code32 *)(gen_frame + 0xc)) = (code *)0x0;
    (*(gen_code32 *)(gen_frame + 0x4)) = ((code *)REFP(0xbcbd60));
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0xbcc130));
    uVar5 = F_004a0c60(this_00,&(*(gen_code32 *)(gen_frame + 0x4)),0,(int)piVar8 - 1);
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = uVar5;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = 0;
  return 1;
}

/* ref: FUN_00bcc2f0 */
uint F_00bcc2f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbcc2f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  ulonglong uVar6;
  int local_8;
  
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  piVar5 = (int *)((int)this + 0x1c);
  local_8 = 0x10;
  do {
    uVar3 = 0;
    if (*piVar5 != 0) {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))
                        (*(int * PTR32 *)(REFG(int, 0x1371270) + 4),*piVar5);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  iVar4 = *(int *)((int)this + 8);
  if (iVar4 != 0) {
    uVar3 = 0;
    do {
      iVar2 = *(int *)((int)this + 4);
      *(undefined4 *)(uVar3 + 0x10 + iVar2) = 0;
      *(undefined4 *)(uVar3 + 0xc + iVar2) = 0;
      uVar3 = uVar3 + 0x14;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] != 0) {
      uVar3 = ((code *)*(gen_code32 *)*puVar1)(puVar1,3);
      *(undefined4 *)((int)this + 4) = 0;
      *(undefined4 *)((int)this + 8) = 0;
      return uVar3;
    }
    uVar6 = F_00406b30(puVar1 + -1);
    uVar3 = (uint)uVar6;
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_00bcc3a0 */
unsigned int F_00bcc3a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbcc3a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  iVar3 = *(int *)((int)this + 8);
  if (iVar3 != 0) {
    iVar2 = 0;
    iVar4 = iVar3;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x10 + iVar2)));
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8 + iVar2)));
      }
      iVar2 = iVar2 + 0x14;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined4 *)((int)this + 0x14) = param_1;
  *(undefined4 *)((int)this + 0x18) = param_2;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  if (*(int *)((int)this + 0x5c) != 0) {
    F_004a1460(REFG(undefined4, 0x13728ac),*(undefined4 *)((int)this + 0x10));
    F_00bcbf60(this);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0xc))))(*(int * PTR32 *)((int)this + 0x10));
  }
  iVar4 = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    iVar2 = *(int *)((int)this + 4);
    *(undefined4 *)(iVar2 + 8 + iVar4) = 8;
    *(undefined4 *)(iVar2 + 0x10 + iVar4) = 0;
    iVar4 = iVar4 + 0x14;
  }
  if ((char)param_3 != '\0') {
    piVar5 = (int *)((int)this + 0x1c);
    iVar3 = 0x10;
    do {
      if (*piVar5 != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),*piVar5);
        *piVar5 = 0;
      }
      piVar5 = piVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *(undefined4 *)((int)this + 0x5c) = 0;
  }
  return 0;
}

/* ref: JobQueue_JobSystem_VCullingGridManager_Culling_Graphics_Client::vf0 */
uint F_00bcc470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcc470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  if ((param_1 & 2) != 0) {
    iVar2 = *(int *)((int)this + -4);
    uVar1 = (int)this - 4;
    puVar3 = (undefined4 *)((int)this + iVar2 * 0x14);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      puVar3 = puVar3 + -5;
      *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x1106430));
    }
    if (((param_1 & 1) != 0) && (uVar1 != 0)) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),uVar1);
    }
    return uVar1;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1106430));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),this);
  }
  return (uint)this;
}

/* ref: FUN_00bcc4e0 */
uint F_00bcc4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcc4e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_1 & 0x1f) != 0) {
    piVar1 = ((int *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
    do {
      LOCK();
      iVar3 = *piVar1;
      *piVar1 = *piVar1;
      UNLOCK();
    } while (iVar3 == 0);
    return (uint)piVar1;
  }
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),0x600,0x10);
  puVar2 = ((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
  LOCK();
  uVar4 = *puVar2;
  *puVar2 = uVar5;
  UNLOCK();
  return uVar4;
}

/* ref: FUN_00bcc530 */
uint F_00bcc530(unsigned int gen_a0)
{
  GEN_ENTER(0xbcc530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  puVar1 = (uint *)((int)this + 0x5c);
  LOCK();
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  uVar6 = uVar3 >> 5;
  if (*(int *)((int)this + uVar6 * 4 + 0x1c) == 0) {
    if ((uVar3 & 0x1f) != 0) {
      piVar2 = (int *)((int)this + uVar6 * 4 + 0x1c);
      do {
        LOCK();
        iVar4 = *piVar2;
        *piVar2 = *piVar2;
        UNLOCK();
      } while (iVar4 == 0);
      return (uVar3 & 0x1f) * 0x30 + *(int *)((int)this + uVar6 * 4 + 0x1c);
    }
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),0x600,0x10);
    LOCK();
    *(uint *)((int)this + uVar6 * 4 + 0x1c) = uVar5;
    UNLOCK();
  }
  return (uVar3 & 0x1f) * 0x30 + *(int *)((int)this + uVar6 * 4 + 0x1c);
}

/* ref: FUN_00bcc5a0 */
uint F_00bcc5a0(unsigned int gen_a0)
{
  GEN_ENTER(0xbcc5a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  if (7 < *(uint *)((int)this + 8)) {
    if (*(uint * PTR32 *)((int)this + 0x10) != (uint *)0x0) {
      **(uint * PTR32 *)((int)this + 0x10) = *(uint *)((int)this + 8);
    }
    uVar2 = F_00bcc530(*(undefined * PTR32 *)((int)this + 0xc));
    *(uint *)((int)this + 0x10) = uVar2;
    *(uint *)((int)this + 4) = uVar2 + 0x10;
    *(undefined4 *)((int)this + 8) = 0;
  }
  iVar1 = *(int *)((int)this + 8);
  *(int *)((int)this + 8) = iVar1 + 1;
  return *(int *)((int)this + 4) + iVar1 * 4;
}

/* ref: FUN_00bcc5e0 */
ushort F_00bcc5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcc5e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return (ushort)((ulonglong)(byte)((char)param_1 * '\n') < 0x40) *
         (short)(*(ulonglong *)((int)(uintptr_t)this) >> (ulonglong)(byte)((char)param_1 * '\n')) & 0x3ff;
}

/* ref: FUN_00bcc610 */
uint F_00bcc610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbcc610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = *(ushort *)((int)this + 6) & 0x80ff;
  *(ushort *)((int)this + 6) =
       *(ushort *)((int)this + 6) >> 1 & 0x3f00 | (ushort)(byte)param_2 << 0xe | (ushort)uVar1;
  return uVar1;
}

/* ref: FUN_00bcc650 */
uint F_00bcc650(unsigned int gen_a0)
{
  GEN_ENTER(0xbcc650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  
  uVar3 = *(ushort *)((int)this + 6);
  if (-1 < (short)uVar3) {
    uVar4 = uVar3 >> 1 & 0x3f00 | uVar3 & 0x80ff;
    *(short *)((int)this + 6) = (short)uVar4;
    return uVar4;
  }
  bVar2 = 0;
  uVar1 = (ulonglong)(byte)((char)*(undefined4 *)((int)REFG(undefined4, 0x1487c58) + 0x8014) * '\n');
  uVar3 = (ushort)(uVar1 < 0x40) * (short)(*(ulonglong *)((int)(uintptr_t)this) >> uVar1) & 0x3ff;
  if (uVar3 != 0x3ff) {
    bVar2 = F_00b7e0f0(REFG(undefined4, 0x1487c58),(uint)uVar3);
    *(ushort *)((int)this + 6) = *(ushort *)((int)this + 6) & 0xff03;
  }
  uVar3 = *(ushort *)((int)this + 6);
  if ((uVar3 & 0xfc) != 0) {
    *(ushort *)((int)this + 6) = (uVar3 & 0xfc) - 4 | uVar3 & 0xff03;
  }
  uVar4 = *(ushort *)((int)this + 6) & 0x80ff;
  *(ushort *)((int)this + 6) =
       *(ushort *)((int)this + 6) >> 1 & 0x3f00 | (ushort)bVar2 << 0xe | (ushort)uVar4;
  return uVar4;
}

/* ref: FUN_00bcc710 */
byte F_00bcc710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcc710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  return 1;
}

/* ref: FUN_00bcc740 */
byte F_00bcc740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbcc740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 == 0x1000001) {
    iVar3 = *param_1;
    piVar1 = param_1 + 1;
    *(int *)this = iVar3;
    *(int * PTR32 *)((int)this + 4) = piVar1;
    if (iVar3 != 0) {
      param_2 = 0;
      param_1 = (int *)iVar3;
      do {
        iVar3 = *(int *)((int)this + 4) + param_2;
        if (*(int *)(iVar3 + 0x28) != 0) {
          *(int *)(iVar3 + 0x28) = *(int *)(iVar3 + 0x28) + (int)piVar1;
        }
        if (*(int *)(iVar3 + 0x2c) != 0) {
          *(int *)(iVar3 + 0x2c) = *(int *)(iVar3 + 0x2c) + (int)piVar1;
        }
        if (*(int *)(iVar3 + 0x30) != 0) {
          *(int *)(iVar3 + 0x30) = *(int *)(iVar3 + 0x30) + (int)piVar1;
          uVar4 = (uint)*(byte *)(iVar3 + 2);
          if (uVar4 != 0) {
            iVar6 = 0;
            do {
              iVar2 = *((int *)GEN_TOP((*(int *)(iVar3 + 0x30) + 0x28 + iVar6)));
              iVar5 = *(int *)(iVar3 + 0x30) + iVar6;
              if (iVar2 != 0) {
                *(int *)(iVar5 + 0x28) = iVar2 + (int)piVar1;
              }
              if (*(int *)(iVar5 + 0x2c) != 0) {
                *(int *)(iVar5 + 0x2c) = *(int *)(iVar5 + 0x2c) + (int)piVar1;
              }
              iVar6 = iVar6 + 0x30;
              uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
          }
        }
        if (*(int *)(iVar3 + 0x34) != 0) {
          *(int *)(iVar3 + 0x34) = *(int *)(iVar3 + 0x34) + (int)piVar1;
        }
        if (*(int *)(iVar3 + 0x38) != 0) {
          *(int *)(iVar3 + 0x38) = *(int *)(iVar3 + 0x38) + (int)piVar1;
        }
        if (*(int *)(iVar3 + 0x3c) != 0) {
          *(int *)(iVar3 + 0x3c) = *(int *)(iVar3 + 0x3c) + (int)piVar1;
        }
        if (*(int *)(iVar3 + 0x40) != 0) {
          *(int *)(iVar3 + 0x40) = *(int *)(iVar3 + 0x40) + (int)piVar1;
        }
        if (*(int *)(iVar3 + 0x44) != 0) {
          *(int *)(iVar3 + 0x44) = *(int *)(iVar3 + 0x44) + (int)piVar1;
        }
        param_2 = param_2 + 0x48;
        param_1 = (int *)((int)param_1 + -1);
      } while (param_1 != (int *)0x0);
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00bcc840 */
byte F_00bcc840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbcc840u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  
  if (param_2 != 0x1000001) {
    return 0;
  }
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  puVar1 = param_1 + 2;
  if (*(byte *)this != 0) {
    *(undefined4 * PTR32 *)((int)this + 8) = puVar1;
    puVar1 = puVar1 + (uint)*(byte *)((int)(uintptr_t)this) * 0x1f;
  }
  if (*(byte *)((int)this + 1) != 0) {
    *(undefined4 * PTR32 *)((int)this + 0xc) = puVar1;
    puVar1 = puVar1 + (uint)*(byte *)((int)this + 1) * 0x1d;
  }
  if (*(byte *)((int)this + 2) != 0) {
    *(undefined4 * PTR32 *)((int)this + 0x10) = puVar1;
    puVar1 = puVar1 + (uint)*(byte *)((int)this + 2) * 0x17;
  }
  if (*(byte *)((int)this + 3) != 0) {
    *(undefined4 * PTR32 *)((int)this + 0x14) = puVar1;
    puVar1 = puVar1 + (uint)*(byte *)((int)this + 3) * 0x2a;
  }
  if (*(char *)((int)this + 4) != '\0') {
    *(undefined4 * PTR32 *)((int)this + 0x18) = puVar1;
  }
  return 1;
}

/* ref: FUN_00bcc8c0 */
unsigned int F_00bcc8c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbcc8c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if (*(int *)((int)this + 0x18) != 0) {
    F_00b5c650(*(int *)((int)this + 0x18));
    *(undefined4 *)((int)this + 0x18) = 0;
    if (*(int *)((int)this + 0x20) != 0) {
      F_00bc5400(*(undefined * PTR32 *)((int)this + 0x14),*(int *)((int)this + 0x20));
      *(undefined4 *)((int)this + 0x20) = 0;
    }
    if (*(int *)((int)this + 0x1c) != 0) {
      F_00bc5400(*(undefined * PTR32 *)((int)this + 0x14),*(int *)((int)this + 0x1c));
      *(undefined4 *)((int)this + 0x1c) = 0;
    }
    iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x14) + 0x404)));
    if (iVar1 != 0) {
      *((int *)GEN_TOP((*(int *)((int)this + 0x14) + 0x404))) = iVar1 + -1;
    }
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  return 0;
}

/* ref: FUN_00bcc920 */
uint F_00bcc920(unsigned int gen_a0)
{
  GEN_ENTER(0xbcc920u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1106444));
  in_ecx[3] = 0;
  in_ecx[4] = 0xffffffff;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00bcc960 */
uint F_00bcc960(unsigned int gen_a0)
{
  GEN_ENTER(0xbcc960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xa60];
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa5c);
  (*(uint *)(gen_frame + 0xa58)) = uVar2;
  this_00 = *(undefined * PTR32 *)((int)this + 0x18);
  if (this_00 != (undefined *)0x0) {
    uVar3 = *(uint *)((int)this_00 + 0x5c) >> 1;
    if (((uVar3 & 1) == 0) ||
       (uVar2 = CONCAT31((uint3)(*(uint *)((int)this_00 + 0x5c) >> 9),(char)uVar3) & 0xffffff01,
       (uVar3 & 1) == 0)) {
      bVar1 = F_00bcd860(this_00);
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 == 0) {
        uVar2 = F_00bcd800(*(undefined * PTR32 *)((int)this + 0x18),((undefined1 *)(gen_frame + 0x0)));
        F_00b5c440(((undefined1 *)(gen_frame + 0x8)));
        uVar3 = F_00bce180(uVar2);
        uVar2 = 0;
        if (uVar3 != 0) {
          uVar2 = F_00bc52c0(*(undefined * PTR32 *)((int)this + 0x14),3,uVar3,0xffffffff);
          *(uint *)((int)this + 0x20) = uVar2;
        }
        *(undefined1 *)((int)this + 0xe) = 1;
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xa58)) ^ (uint)(uint)(gen_frame + 0xa5c));
  return uVar2;
}

/* ref: FUN_00bcc9f0 */
byte F_00bcc9f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbcc9f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  
  if ((*(char *)((int)this + 0xc) != '\0') || (*(char *)((int)this + 0xd) != '\0')) {
    return 1;
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x18);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  uVar2 = *(uint *)((int)this_00 + 0x5c) >> 1;
  if (((uVar2 & 1) != 0) && ((uVar2 & 1) != 0)) {
LAB_00bcca6c: ;
    *(undefined1 *)((int)this + 0xd) = 1;
    return 1;
  }
  bVar1 = F_00bcd860(this_00);
  if (bVar1 != 0) {
    return 0;
  }
  if (*(char *)((int)this + 0xe) == '\0') {
    F_00bcc960(this);
  }
  if (*(undefined * PTR32 *)((int)this + 0x1c) != (undefined *)0x0) {
    bVar1 = F_00c1ebd0(*(undefined * PTR32 *)((int)this + 0x1c));
    if (bVar1 != 0) goto LAB_00bcca6c;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 4))))(*(int * PTR32 *)((int)this + 0x1c));
    if ((char)uVar2 == '\0') {
      return 0;
    }
  }
  if (*(undefined * PTR32 *)((int)this + 0x20) != (undefined *)0x0) {
    bVar1 = F_00c1ebd0(*(undefined * PTR32 *)((int)this + 0x20));
    if (bVar1 != 0) goto LAB_00bcca6c;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x20) + 4))))(*(int * PTR32 *)((int)this + 0x20));
    if ((char)uVar2 == '\0') {
      return 0;
    }
  }
  *(undefined1 *)((int)this + 0xc) = 1;
  return 1;
}

/* ref: FUN_00bccaa0 */
unsigned int F_00bccaa0(unsigned int gen_a0)
{
  GEN_ENTER(0xbccaa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (((*(char *)((int)this + 0xc) == '\0') && (*(char *)((int)this + 0xd) == '\0')) &&
     (*(char *)((int)this + 0xe) == '\0')) {
    F_00bcc960(this);
    return 0;
  }
  return 0;
}

/* ref: FUN_00bccac0 */
uint F_00bccac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbccac0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint * puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = (uint *)F_00ab2a20(param_1);
  (*(uint * PTR32 *)(gen_frame + 0x14)) = puVar1;
  uVar2 = 0;
  if (puVar1 != (uint *)0x0) {
    *(undefined4 *)((int)this + 0x10) = param_1;
    iVar3 = (*puVar1 & 0xffffff) + (int)puVar1;
    (*(undefined4 *)(gen_frame + 0x10)) = param_1;
    *(undefined * PTR32 *)((int)this + 0x14) = param_2;
    *(int *)((int)param_2 + 0x404) = *(int *)((int)param_2 + 0x404) + 1;
    (*(int *)(gen_frame + 0xc)) = iVar3;
    (*(undefined4 *)(gen_frame + 0x18)) = 0x746d62;
    uVar2 = F_00b5e210(REFG(undefined4, 0x14c4e90),&(*(int *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x18)),1);
    *(uint *)((int)this + 0x18) = uVar2;
    if (*(char *)((int)(*(uint * PTR32 *)(gen_frame + 0x14)) + 0xb) != '\0') {
      uVar2 = F_00bc52c0(param_2,(uint)(*(char *)((int)(*(uint * PTR32 *)(gen_frame + 0x14)) + 0xb) != '\x01'),iVar3,param_1);
      *(uint *)((int)this + 0x1c) = uVar2;
    }
    *(undefined1 *)((int)this + 0xe) = 0;
    uVar2 = F_00bcc960(this);
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Object::ActionTimelinePap::vf0 */
uint F_00bccb70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbccb70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1106444));
  F_00bcc8c0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bccbb0 */
unsigned int F_00bccbb0(float gen_a0)
{
  GEN_ENTER(0xbccbb0u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bccbd0 */
uint F_00bccbd0(unsigned int gen_a0)
{
  GEN_ENTER(0xbccbd0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_00bbac80(in_ecx);
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x110653c));
  return (uint)in_ecx;
}

/* ref: FUN_00bccbf0 */
unsigned int F_00bccbf0(unsigned int gen_a0)
{
  GEN_ENTER(0xbccbf0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10f1498));
  return 0;
}

/* ref: FUN_00bccc00 */
unsigned int F_00bccc00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbccc00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00bbb060(this,param_1);
  return 0;
}

/* ref: FUN_00bccc10 */
uint F_00bccc10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbccc10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00bbafd0(this);
  if ((this_00 != (undefined *)0x0) && (param_1 != 0)) {
    uVar1 = F_00688de0(this_00,param_1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00bccc40 */
byte F_00bccc40(unsigned int gen_a0)
{
  GEN_ENTER(0xbccc40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00bbafd0(this);
  if (uVar1 == 0) {
    return 1;
  }
  return *(char *)(uVar1 + 0x65) == '\x03';
}

/* ref: FUN_00bccc60 */
uint F_00bccc60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6, float gen_a7, unsigned int gen_a8, float gen_a9)
{
  GEN_ENTER(0xbccc60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int param_6 = (int)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  float param_10 = (float)gen_a9;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  code * pcVar1;
  undefined * this;
  int iVar2;
  
  this = (undefined *)F_00bbafd0(param_1);
  if (this == (undefined *)0x0) {
    return 0;
  }
  (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0x0;
  (*(undefined1 *)(gen_frame + 0x16)) = 0;
  if ((char)param_9 == '\0') {
    (*(uint *)(gen_frame + 0x4)) = 0;
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x12)) + 0)) = (short)(int)param_7;
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x12)) + 2)) = (short)(int)param_8;
    (*(undefined4 *)(gen_frame + 0x12)) = CONCAT22((short)(int)param_8,(short)(int)param_7);
  }
  else {
    (*(uint *)(gen_frame + 0x4)) = 1;
    (*(undefined4 *)(gen_frame + 0x12)) = 0;
  }
  (*(uint *)(gen_frame + 0x4)) = (uint)((char)param_9 != '\0');
  iVar2 = param_6;
  if (param_6 == 0) {
    iVar2 = -1;
  }
  (*(undefined2 *)(gen_frame + 0x10)) = (short)iVar2;
  if (GEN_ISNAN(param_10) == (GEN_ISNAN(param_10) || param_10 == 0.0)) {
    (*(float *)(gen_frame + 0x8)) = (float)((float10)param_10 / (float10)*(double *)&REFG(undefined, 0x1088070));
  }
  else {
    (*(float *)(gen_frame + 0x8)) = 0.0;
  }
  if ((param_2 != (int *)0x0) &&
     ((*(int * PTR32 *)(gen_frame + 0xc)) = param_2, GEN_ISNAN(param_10) != (GEN_ISNAN(param_10) || param_10 == 0.0))) {
    param_2[3] = param_2[3] | 2;
  }
  (*(uint *)(gen_frame + 0x18)) = 0;
  F_00688da0(this,param_3,&(*(uint *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x18)));
  if (((*(uint *)(gen_frame + 0x18)) == 0) && (param_2 != (int *)0x0)) {
    pcVar1 = *(gen_code32 *)(*param_2 + 4);
    param_2[3] = param_2[3] | 2;
    (*pcVar1)(param_2,0);
  }
  return (*(uint *)(gen_frame + 0x18));
}

/* ref: FUN_00bccd30 */
unsigned int F_00bccd30(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xbccd30u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  if (param_1 != (int *)0x0) {
    (*(uint *)(gen_frame + 0x4)) = (uint)((char)param_2 != '\0');
    if (GEN_ISNAN(param_3) == (GEN_ISNAN(param_3) || param_3 == 0.0)) {
      (*(float *)(gen_frame + 0x8)) = (float)((float10)param_3 / (float10)*(double *)&REFG(undefined, 0x1088070));
    }
    else {
      (*(float *)(gen_frame + 0x8)) = 0.0;
    }
    F_009f7cb0(param_1,&(*(uint *)(gen_frame + 0x4)));
    ((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1);
  }
  return 0;
}

/* ref: FUN_00bccd90 */
uint F_00bccd90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbccd90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  int * piVar2;
  
  if (param_3 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_3 + 0x18);
  piVar2 = (int *)F_00bbafd0(this);
  if (piVar2 == (int *)0x0) {
    *param_1 = 0;
    return 0;
  }
  ((code *)*(gen_code32 *)(*piVar2 + 0x11c))(piVar2,param_1,param_2,iVar1 + param_3);
  return (uint)param_1;
}

/* ref: FUN_00bccde0 */
uint F_00bccde0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbccde0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  undefined * this_00;
  uint uVar2;
  char * pcVar3;
  int iVar4;
  
  if (((param_1 == (char *)0x0) && (param_4 != 0x7b)) && (param_4 != 0x7c)) {
    return 0;
  }
  switch((unsigned int)(uintptr_t)(param_4)) {
  case 7: ;
    pcVar3 = param_1 + *(int *)(param_1 + 0x18);
    break;
  default: ;
    pcVar3 = param_1;
    break;
  case 0x1d: ;
    switch((unsigned int)(uintptr_t)(*(undefined4 *)(param_1 + 0xc))) {
    case 0: ;
      pcVar3 = REFG(undefined * PTR32, 0x1342e70);
      break;
    case 1: ;
      pcVar3 = REFG(undefined * PTR32, 0x1342e74);
      break;
    case 2: ;
      pcVar3 = REFG(undefined * PTR32, 0x1342e78);
      break;
    case 3: ;
      pcVar3 = REFG(undefined * PTR32, 0x1342e7c);
      break;
    default: ;
      goto switchD_00bcced3_default;
    }
    break;
  case 0x1e: ;
    iVar4 = 0;
    switch((unsigned int)(uintptr_t)(*(undefined4 *)(param_1 + 0xc))) {
    case 0: ;
      fVar1 = *(float *)(param_1 + 0x10);
      if (!(*(float *)&REFG(undefined, 0x1088114) <= fVar1)) {
        if (!(*(double *)&REFG(undefined, 0x1106548) <= (double)fVar1)) goto switchD_00bcce4f_caseD_4;
        goto switchD_00bcce4f_caseD_2;
      }
      if (!((double)fVar1 <= *(double *)&REFG(undefined, 0x1106550))) goto switchD_00bcce4f_caseD_3;
    case 1: ;
      pcVar3 = ((char *)REFP(0x1342e30));
      break;
    case 2: ;
switchD_00bcce4f_caseD_2: ;
      pcVar3 = ((char *)REFP(0x1342e40));
      break;
    case 3: ;
switchD_00bcce4f_caseD_3: ;
      pcVar3 = ((char *)REFP(0x1342e50));
      break;
    case 4: ;
switchD_00bcce4f_caseD_4: ;
      iVar4 = 3;
    default: ;
      pcVar3 = ((char *)REFP(0x1342e30)) + iVar4 * 0x10;
    }
    break;
  case 0x20: ;
  case 0x4a: ;
    pcVar3 = param_1 + *(int *)(param_1 + 0xc);
    break;
  case 0x52: ;
    pcVar3 = "cbfa_add_all";
    goto LAB_00bccf06;
  case 0x7b: ;
    pcVar3 = "cfxb_blink1";
    goto LAB_00bccf06;
  case 0x7c: ;
    pcVar3 = "cfxl_lip_nor1";
    goto LAB_00bccf06;
  }
  if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
LAB_00bccf06: ;
    this_00 = (undefined *)F_00bbafd0(this);
    if (this_00 != (undefined *)0x0) {
      (*(undefined4 *)(gen_frame + 0x4)) = param_2;
      (*(undefined4 *)(gen_frame + 0x8)) = param_3;
      uVar2 = F_006a7fa0(this_00,pcVar3,&(*(undefined4 *)(gen_frame + 0x4)),2);
      return uVar2;
    }
  }
switchD_00bcced3_default: ;
  return 0;
}

/* ref: FUN_00bcd000 */
byte F_00bcd000(unsigned int gen_a0)
{
  GEN_ENTER(0xbcd000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint in_ecx;
  
  in_ecx = F_00bbafd0(this);
  if (in_ecx == 0) {
    return 1;
  }
  bVar1 = F_0068d920(in_ecx,0);
  if (bVar1 == 0) {
    return 0;
  }
  return *(int *)(in_ecx + 0x6f8) == 0 && *(char *)(in_ecx + 0x6ec) == '\0';
}

/* ref: FUN_00bcd040 */
uint F_00bcd040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbcd040u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  char cVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00bbafd0(this);
  if ((uVar2 == 0) || (param_1 == (char *)0x0)) {
    *param_2 = 0;
LAB_00bcd1b9: ;
    uVar2 = *param_2;
    *param_3 = uVar2;
    return uVar2;
  }
  this_00 = *(undefined * PTR32 *)(REFG(int, 0x137129c) + 0x60);
  uVar2 = F_00500af0(this_00,param_1);
  uVar2 = F_00500ae0(this_00,uVar2 & 0xffff);
  uVar3 = *(byte *)(uVar2 + 8) & 1;
  *param_2 = uVar3;
  if (param_1[3] == 'p') {
    *param_2 = 2;
  }
  else if (uVar3 == 0xffffffff) {
    *param_2 = 0;
  }
  cVar1 = *param_1;
  if ((cVar1 != 'b') || (param_1[1] != '_')) {
    if ((cVar1 == 'f') && (param_1[1] == '_')) {
      *param_3 = 1;
      *param_2 = 1;
      return uVar2;
    }
    if ((cVar1 == 'h') && (param_1[1] == '_')) {
      *param_3 = 0;
      *param_2 = 0;
      return uVar2;
    }
    if ((cVar1 != 'm') || (param_1[1] != '_')) {
      uVar3 = CONCAT31((int3)(uVar2 >> 8),0x69);
      if (((param_1[5] == 'b') && (param_1[6] == 'l')) && (param_1[7] == 'i')) {
        *param_3 = 0x28;
        return uVar3;
      }
      if (((((cVar1 == 'c') && (param_1[1] == 'f')) &&
           ((param_1[2] == 'x' && ((param_1[3] == 'l' && (param_1[5] == 'l')))))) &&
          (param_1[6] == 'i')) && (param_1[7] == 'p')) {
        *param_3 = 0x300;
        return uVar3;
      }
      if ((*(uint *)(uVar2 + 8) >> 3 & 1) != 0) {
        *param_3 = 0x10;
        return (uint)param_3;
      }
      if ((*(uint *)(uVar2 + 8) >> 4 & 1) != 0) {
        *param_3 = 0x20;
        return uVar2;
      }
      if (*(char *)(uVar2 + 0xe) == '\x14') {
        *param_3 = 0x30;
        return uVar2;
      }
      goto LAB_00bcd1b9;
    }
  }
  *param_3 = 0;
  *param_2 = 0;
  return (uint)param_3;
}

/* ref: Client::System::Scheduler::Connection::GraphCharaConnect::vf0 */
uint F_00bcd200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcd200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f1498));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bcd250 */
uint F_00bcd250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcd250u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00bcd2a0 */
unsigned int F_00bcd2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcd2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char * pcVar1;
  char cVar2;
  char * pcVar3;
  
  *(char * PTR32 *)((int)this + 4) = param_1;
  *(undefined2 *)this = 0;
  cVar2 = *param_1;
  pcVar3 = param_1;
  while (cVar2 != '\0') {
    *(short *)this = *(short *)this + (short)cVar2;
    pcVar1 = pcVar3 + 1;
    pcVar3 = pcVar3 + 1;
    cVar2 = *pcVar1;
  }
  return 0;
}

/* ref: FUN_00bcd2f0 */
uint F_00bcd2f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbcd2f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1106588));
  if ((uVar1 != 0) && (uVar1 != (int)this + 10U)) {
    uVar2 = F_00406b30(uVar1);
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 4) = 0;
  }
  return uVar1;
}

/* ref: FUN_00bcd320 */
unsigned int F_00bcd320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcd320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar5 = *(int *)((int)this + 4);
  if ((iVar5 != 0) && (iVar5 != (int)this + 10)) {
    F_00406b30(iVar5);
    *(undefined4 *)((int)this + 4) = 0;
  }
  if ((int)pcVar2 - (int)(param_1 + 1) < 0x28) {
    *(int *)((int)this + 4) = (int)this + 10;
    F_00c49908((int)this + 10,0x28,param_1);
  }
  else {
    iVar5 = ((int)pcVar2 - (int)(param_1 + 1)) + 1;
    uVar3 = F_00406bb0(iVar5,0,0);
    *(uint *)((int)this + 4) = uVar3;
    F_00c49908(uVar3,iVar5,param_1);
  }
  *(undefined2 *)((int)this + 8) = 0;
  cVar1 = *param_1;
  if (cVar1 != '\0') {
    sVar4 = 0;
    pcVar2 = param_1;
    do {
      sVar4 = sVar4 + cVar1;
      pcVar2 = pcVar2 + 1;
      *(short *)((int)this + 8) = sVar4;
      cVar1 = *pcVar2;
    } while (cVar1 != '\0');
  }
  return 0;
}

/* ref: FUN_00bcd3c0 */
unsigned int F_00bcd3c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbcd3c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(int *)(in_ecx + 0x54) = *(int *)(in_ecx + 0x54) + 1;
  return 0;
}

/* ref: FUN_00bcd3d0 */
uint F_00bcd3d0(unsigned int gen_a0)
{
  GEN_ENTER(0xbcd3d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x5c) >> 3;
  if (((uVar1 & 1) == 0) && (*(int *)((int)this + 0x54) == 0)) {
    F_00b5ce20(REFG(undefined4, 0x14c4e90),this);
    uVar1 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)this)))(this,1);
  }
  return uVar1;
}

/* ref: FUN_00bcd400 */
uint F_00bcd400(unsigned int gen_a0)
{
  GEN_ENTER(0xbcd400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0xc) != 0) {
    uVar1 = F_0050c620(*(int *)((int)this + 0xc),0,0);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  return uVar1;
}

/* ref: FUN_00bcd430 */
byte F_00bcd430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcd430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar2 = (int)this + 0x10;
  do {
    if (iVar2 == 0) {
      return 0;
    }
    iVar1 = 0;
    do {
      if (*(int *)(iVar2 + iVar1 * 4) == param_1) {
        return 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
    iVar2 = *(int *)(iVar2 + 8);
  } while( true );
}

/* ref: FUN_00bcd470 */
unsigned int F_00bcd470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcd470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char * pcVar1;
  char cVar2;
  char * pcVar3;
  
  *(char * PTR32 *)((int)this + 4) = param_1;
  *(undefined2 *)this = 0;
  cVar2 = *param_1;
  pcVar3 = param_1;
  while (cVar2 != '\0') {
    *(short *)this = *(short *)this + (short)cVar2;
    pcVar1 = pcVar3 + 1;
    pcVar3 = pcVar3 + 1;
    cVar2 = *pcVar1;
  }
  return 0;
}

/* ref: FUN_00bcd4b0 */
uint F_00bcd4b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbcd4b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + -1;
  uVar1 = *(uint *)((int)this + 0x54);
  if (((*(uint *)((int)this + 0x5c) >> 3 & 1) == 0) && (uVar1 == 0)) {
    F_00b5ce20(REFG(undefined4, 0x14c4e90),this);
    uVar1 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)this)))(this,1);
  }
  return uVar1;
}

/* ref: FUN_00bcd4e0 */
uint F_00bcd4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcd4e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  byte * pbVar4;
  bool bVar5;
  
  if (*(short *)((int)this + 0x24) == *(short *)(param_1 + 8)) {
    pbVar4 = *(byte * PTR32 *)(param_1 + 4);
    pbVar2 = *(byte * PTR32 *)((int)this + 0x20);
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_00bcd516: ;
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_00bcd51b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_00bcd516;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00bcd51b: ;
    if (iVar3 == 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00bcd530 */
byte F_00bcd530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcd530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  byte * pbVar4;
  bool bVar5;
  
  if (*(short *)((int)this + 0x24) == *param_1) {
    pbVar4 = *(byte * PTR32 *)(param_1 + 2);
    pbVar2 = *(byte * PTR32 *)((int)this + 0x20);
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_00bcd565: ;
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_00bcd56a;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_00bcd565;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00bcd56a: ;
    if (iVar3 == 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00bcd580 */
uint F_00bcd580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcd580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  iVar3 = (int)this + 0x10;
  iVar2 = (int)this + 0x10;
  while (iVar1 = iVar3, iVar1 != 0) {
    uVar4 = 0;
    do {
      if (*(int *)(iVar1 + uVar4 * 4) == 0) {
        *(undefined4 *)(iVar1 + uVar4 * 4) = param_1;
        return uVar4;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 2);
    iVar2 = iVar1;
    iVar3 = *(int *)(iVar1 + 8);
  }
  puVar5 = (undefined4 *)F_00406b90(0xc,0,0);
  if (puVar5 != (undefined4 *)0x0) {
    puVar5[2] = 0;
    *puVar5 = 0;
    puVar5[1] = 0;
    *puVar5 = param_1;
    *(undefined4 * PTR32 *)(iVar2 + 8) = puVar5;
    return (uint)puVar5;
  }
  *(undefined4 *)&REFG(undefined, 0x0) = param_1;
  *(undefined4 *)(iVar2 + 8) = 0;
  return 0;
}

/* ref: FUN_00bcd630 */
uint F_00bcd630(unsigned int gen_a0)
{
  GEN_ENTER(0xbcd630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1106590));
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c) =
       (*(undefined * PTR32 (*)[1])REFP(0x1106588));
  *(undefined1 *)((int)this + 0x26) = 0x30;
  *(undefined2 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x50) = 0xffffffff;
  *(uint *)((int)this + 0x5c) = *(uint *)((int)this + 0x5c) & 0xfffffff4 | 4;
  return (uint)this;
}

/* ref: FUN_00bcd680 */
uint F_00bcd680(unsigned int gen_a0)
{
  GEN_ENTER(0xbcd680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1106590));
  if (*(int *)((int)this + 0xc) != 0) {
    F_0050c620(*(int *)((int)this + 0xc),0,0);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  iVar2 = *(int *)((int)this + 0x18);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    F_00406ad0(iVar2);
    iVar2 = iVar1;
  }
  uVar3 = *(uint *)((int)this + 0x20);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c) =
       (*(undefined * PTR32 (*)[1])REFP(0x1106588));
  if ((uVar3 != 0) && (uVar3 != (int)this + 0x26U)) {
    uVar4 = F_00406b30(uVar3);
    uVar3 = (uint)uVar4;
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  return uVar3;
}

/* ref: FUN_00bcd6f0 */
uint F_00bcd6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbcd6f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  undefined4 * puVar2;
  
  *(uint *)((int)this + 0x5c) =
       *(uint *)((int)this + 0x5c) ^ ((param_4 & 0xff) * 4 ^ *(uint *)((int)this + 0x5c)) & 4;
  if ((char)param_4 == '\0') {
    puVar2 = &(*(undefined4 *)(gen_frame + 0x4));
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined1 *)(gen_frame + 0x26)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined2 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 5;
    (*(undefined1 *)(gen_frame + 0x18)) = 0xff;
    (*(undefined4 *)(gen_frame + 0x1c)) = 5000;
    (*(undefined4 *)(gen_frame + 0x22)) = 1;
  }
  else {
    puVar2 = (undefined4 *)0x0;
  }
  uVar1 = F_00513d20(param_2,param_3,param_1,puVar2,0,0);
  *(uint *)((int)this + 0x5c) = *(uint *)((int)this + 0x5c) | 1;
  *(uint *)((int)this + 0xc) = uVar1;
  return uVar1;
}

/* ref: FUN_00bcd780 */
uint F_00bcd780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbcd780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  undefined4 * puVar2;
  
  *(uint *)((int)this + 0x5c) =
       *(uint *)((int)this + 0x5c) ^ ((param_2 & 0xff) * 4 ^ *(uint *)((int)this + 0x5c)) & 4;
  if ((char)param_2 == '\0') {
    puVar2 = &(*(undefined4 *)(gen_frame + 0x4));
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined1 *)(gen_frame + 0x26)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined2 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 5;
    (*(undefined1 *)(gen_frame + 0x18)) = 0xff;
    (*(undefined4 *)(gen_frame + 0x1c)) = 5000;
    (*(undefined4 *)(gen_frame + 0x22)) = 1;
  }
  else {
    puVar2 = (undefined4 *)0x0;
  }
  uVar1 = F_00513dc0(param_1,puVar2,0,0);
  *(uint *)((int)this + 0x5c) = *(uint *)((int)this + 0x5c) | 1;
  *(uint *)((int)this + 0xc) = uVar1;
  return uVar1;
}

/* ref: FUN_00bcd800 */
uint F_00bcd800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcd800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0x88)));
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2;
  UNLOCK();
  if (iVar1 == 2) {
    piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0x8c)));
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2;
    UNLOCK();
    if (iVar1 < 8) {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x44))))(*(int * PTR32 *)((int)this + 0xc));
      *param_1 = uVar3;
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x5c))))(*(int * PTR32 *)((int)this + 0xc));
      return uVar3;
    }
  }
  return 0;
}

/* ref: FUN_00bcd860 */
byte F_00bcd860(unsigned int gen_a0)
{
  GEN_ENTER(0xbcd860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  if ((*(uint *)((int)this + 0x5c) & 2) == 0) {
    if ((*(uint *)((int)this + 0x5c) & 1) == 0) {
      return 0;
    }
    piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0x88)));
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2;
    UNLOCK();
    if (iVar1 == 2) {
      piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0x8c)));
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = *piVar2;
      UNLOCK();
      if (iVar1 < 8) {
        *(uint *)((int)this + 0x5c) = *(uint *)((int)this + 0x5c) & 0xfffffffe;
        return 0;
      }
      *(uint *)((int)this + 0x5c) = *(uint *)((int)this + 0x5c) | 2;
    }
  }
  return 1;
}

/* ref: FUN_00bcd8a0 */
uint F_00bcd8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcd8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  
  puVar1 = (undefined4 *)((int)this + 0x10);
  puVar6 = (undefined4 *)0x0;
  puVar2 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  do {
    puVar3 = puVar2;
    iVar5 = 0;
    do {
      if (puVar3[iVar5] == param_1) {
        puVar3[iVar5] = 0;
        if ((puVar3 == puVar1) && (puVar3[2] == 0)) {
          return (uint)puVar3;
        }
        iVar5 = 0;
        do {
          if (puVar3[iVar5] != 0) {
            return (uint)puVar3;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 2);
        puVar2 = (undefined4 *)puVar3[2];
        if (puVar3 != puVar1) {
          puVar6[2] = puVar2;
          uVar4 = F_00406ad0(puVar3);
          return uVar4;
        }
        *puVar3 = *puVar2;
        puVar3[1] = puVar2[1];
        puVar3[2] = puVar2[2];
        uVar4 = F_00406ad0(puVar2);
        return uVar4;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
    puVar2 = (undefined4 *)puVar3[2];
    puVar6 = puVar3;
    if ((undefined4 *)puVar3[2] == (undefined4 *)0x0) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00bcd930 */
uint F_00bcd930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbcd930u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  F_00bcd320((undefined *)((int)this + 0x1c),param_1);
  *(undefined4 *)((int)this + 0x50) = 0xffffffff;
  F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x104,"cut/%s.cutb",param_1);
  F_004ff300(((undefined1 *)(gen_frame + 0x0)),3);
  uVar1 = F_00bcd6f0(this,((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x0)),param_2,param_3);
  *(undefined4 *)((int)this + 0x58) = 1;
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar1;
}

/* ref: FUN_00bcd9c0 */
uint F_00bcd9c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xbcd9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  F_00bcd320((undefined *)((int)this + 0x1c),param_1);
  *(undefined4 *)((int)this + 0x50) = param_2;
  F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x104,"chara/action/%s.tmb",param_1);
  uVar1 = F_00bcd6f0(this,((undefined1 *)(gen_frame + 0x4)),param_3,param_4,param_5);
  *(undefined4 *)((int)this + 0x58) = 2;
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar1;
}

/* ref: FUN_00bcda50 */
uint F_00bcda50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbcda50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  F_00bcd320((undefined *)((int)this + 0x1c),param_1);
  *(undefined4 *)((int)this + 0x50) = 0xffffffff;
  uVar1 = F_00bcd6f0(this,*(undefined4 *)((int)this + 0x20),param_2,param_3,param_4);
  *(undefined4 *)((int)this + 0x58) = 3;
  return uVar1;
}

/* ref: FUN_00bcda90 */
uint F_00bcda90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbcda90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  char * _Format;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  F_00bcd320((undefined *)((int)this + 0x1c),param_1);
  *(undefined4 *)((int)this + 0x50) = 0xffffffff;
  if ((char)param_3 == '\0') {
    _Format = "%s.tmb";
  }
  else {
    _Format = "%s";
  }
  F_00c472af(((char *)(gen_frame + 0x4)),0x104,_Format,param_1);
  uVar1 = F_00bcd780(this,((char *)(gen_frame + 0x4)),param_2);
  *(undefined4 *)((int)this + 0x58) = 4;
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar1;
}

/* ref: FUN_00bcdb30 */
uint F_00bcdb30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcdb30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  byte * pbVar4;
  bool bVar5;
  
  if (*(short *)((int)this + 8) == *(short *)(param_1 + 8)) {
    pbVar4 = *(byte * PTR32 *)(param_1 + 4);
    pbVar2 = *(byte * PTR32 *)((int)this + 4);
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_00bcdb66: ;
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_00bcdb6b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_00bcdb66;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00bcdb6b: ;
    if (iVar3 == 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00bcdb80 */
uint F_00bcdb80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcdb80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  byte * pbVar4;
  bool bVar5;
  
  if (*(short *)((int)this + 8) == *param_1) {
    pbVar4 = *(byte * PTR32 *)(param_1 + 2);
    pbVar2 = *(byte * PTR32 *)((int)this + 4);
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_00bcdbb5: ;
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_00bcdbba;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_00bcdbb5;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00bcdbba: ;
    if (iVar3 == 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Resource::SchedulerResource::ResourceName::vf0 */
uint F_00bcdbe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcdbe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pRVar1;
  
  pRVar1 = *(undefined * PTR32 *)(this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1106588));
  if ((pRVar1 != (undefined *)0x0) && (pRVar1 != this + 10)) {
    F_00406b30(pRVar1);
    *(undefined4 *)(this + 4) = 0;
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bcdc30 */
uint F_00bcdc30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcdc30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bcdc50 */
unsigned int F_00bcdc50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcdc50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[3] = 0;
  in_ecx[2] = 0;
  *(undefined1 *)(in_ecx + 7) = 0;
  *(undefined1 *)((int)in_ecx + 0x22) = 0;
  in_ecx[9] = 0;
  in_ecx[4] = 5;
  *(undefined1 *)(in_ecx + 5) = 0xff;
  in_ecx[6] = 5000;
  *(undefined4 *)((int)in_ecx + 0x1e) = 1;
  *(undefined1 *)((int)in_ecx + 0x1d) = (undefined1)param_2;
  return 0;
}

/* ref: Client::System::Scheduler::Resource::SchedulerResource::vf0 */
uint F_00bcdc90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcdc90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bcd680(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bcdcc0 */
uint F_00bcdcc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcdcc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)this + param_1 * 0x18 + (int)this;
}

/* ref: FUN_00bcdd30 */
uint F_00bcdd30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcdd30u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00bcdd40 */
uint F_00bcdd40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcdd40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x24) = param_2;
  return param_2;
}

/* ref: FUN_00bcdd60 */
uint F_00bcdd60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcdd60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x28) = param_2;
  return param_2;
}

/* ref: FUN_00bcdd80 */
uint F_00bcdd80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcdd80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x10) = param_2;
  return param_2;
}

/* ref: FUN_00bcdd90 */
uint F_00bcdd90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcdd90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1c) = param_2;
  return param_2;
}

/* ref: FUN_00bcdde0 */
uint F_00bcdde0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcdde0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x20) = param_2;
  return param_2;
}

/* ref: FUN_00bcddf0 */
uint F_00bcddf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcddf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xd8) = param_2;
  return param_2;
}

/* ref: FUN_00bcde10 */
uint F_00bcde10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcde10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x28) = param_2;
  return param_2;
}

/* ref: FUN_00bcde20 */
unsigned int F_00bcde20(float gen_a0)
{
  GEN_ENTER(0xbcde20u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bcde40 */
byte F_00bcde40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcde40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  
  bVar1 = F_00b5fe80(*param_2 + (int)param_2);
  return bVar1;
}

/* ref: FUN_00bcde60 */
byte F_00bcde60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcde60u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  
  bVar1 = F_00b5fea0(*(undefined4 *)(param_1 + 8),*param_2 + (int)param_2);
  return bVar1;
}

/* ref: FUN_00bcde80 */
byte F_00bcde80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcde80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  
  bVar1 = F_00b5fec0(*param_2 + (int)param_2);
  return bVar1;
}

/* ref: FUN_00bcdea0 */
uint F_00bcdea0(unsigned int gen_a0)
{
  GEN_ENTER(0xbcdea0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  
  if (*param_1 == 0x424c4d54) {
    piVar1 = param_1 + 3;
    iVar2 = param_1[2];
    if (iVar2 != 0) {
      do {
        iVar2 = iVar2 + -1;
        if (*piVar1 == *(int *)REFG(undefined * PTR32, 0x1343188)) {
          return (uint)(piVar1 + 2);
        }
        piVar1 = (int *)((int)piVar1 + piVar1[1]);
      } while (iVar2 != 0);
    }
  }
  return 0;
}

/* ref: FUN_00bcdee0 */
byte F_00bcdee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcdee0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0xc) + 0x20))) = param_2;
  return 1;
}

/* ref: FUN_00bcdf00 */
uint F_00bcdf00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcdf00u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  if (*param_1 != 0x424c4d54) {
    return 0xffffffff;
  }
  iVar3 = param_1[2];
  piVar2 = param_1 + 3;
  while( true ) {
    if (iVar3 == 0) {
      return 0xffffffff;
    }
    iVar3 = iVar3 + -1;
    if ((*piVar2 == 0x30313043) && (uVar1 = F_00bccde0(param_2,piVar2 + 2,0,0,7), uVar1 != 0))
    break;
    piVar2 = (int *)((int)piVar2 + piVar2[1]);
  }
  return 1;
}

/* ref: FUN_00bcdf15 */
uint F_00bcdf15(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbcdf15u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  int in_ebp = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined * this;
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  iVar3 = *(int *)(in_eax + 8);
  piVar2 = (int *)(in_eax + 0xc);
  if (iVar3 != 0) {
    this = *(undefined * PTR32 *)(in_ebp + 0xc);
    do {
      iVar3 = iVar3 + -1;
      if (*piVar2 == 0x30313043) {
        uVar1 = F_00bccde0(this,piVar2 + 2,0,0,7);
        if (uVar1 != 0) {
          return 1;
        }
      }
      piVar2 = (int *)((int)piVar2 + piVar2[1]);
    } while (iVar3 != 0);
  }
  return 0xffffffff;
}

/* ref: FUN_00bcdf60 */
unsigned int F_00bcdf60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcdf60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = param_1 + 0xfU & 0xfffffff0;
  *(int *)((int)this + 0xa4c) = *(int *)((int)this + 0xa4c) - uVar1;
  *(uint *)((int)this + 0xa48) = *(int *)((int)this + 0xa48) + uVar1;
  return 0;
}

/* ref: FUN_00bcdf90 */
byte F_00bcdf90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcdf90u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  int iVar5;
  float in_XMM1_Da = 0;
  float in_XMM2_Da = 0;
  float in_XMM3_Da = 0;
  float in_XMM7_Da = 0;
  
  if (*param_1 != 0x42545543) {
    return 0;
  }
  piVar4 = param_1 + 3;
  iVar3 = param_1[2];
  while (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    if (*piVar4 == 0x4c415443) {
      iVar1 = piVar4[2];
      F_00b60910(param_2,*(undefined4 *)((int)piVar4 + iVar1 + 0x14));
      iVar5 = 0;
      if (0 < *(int *)((int)piVar4 + iVar1 + 0x14)) {
        do {
          iVar2 = *(int *)((int)piVar4 + iVar1 + 0x10) + iVar1 + 8;
          F_00b5fd40(param_2,in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,
                       (int)piVar4 + *(int *)((int)piVar4 + iVar5 * 4 + iVar2) + iVar2,iVar5);
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)((int)piVar4 + iVar1 + 0x14));
      }
    }
    piVar4 = (int *)((int)piVar4 + piVar4[1]);
  }
  return 1;
}

/* ref: FUN_00bce010 */
byte F_00bce010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbce010u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined * this;
  uint uVar1;
  int iVar2;
  int iVar3;
  int local_8;
  
  this = *(undefined * PTR32 *)(param_1 + 8);
  iVar2 = 0;
  if ((this != (undefined *)0x0) && (local_8 = *(int *)(param_1 + 0x34), 0 < param_2[1])) {
    param_1 = 0;
    do {
      iVar3 = *param_2 + param_1 + (int)param_2;
      uVar1 = F_00b60e70(this,iVar3,iVar2);
      if (*(int *)(iVar3 + 4) != 3) {
        *(undefined4 *)(uVar1 + 0x28) = *(undefined4 *)(local_8 + 0x10);
        local_8 = *(int *)(local_8 + 0xc);
      }
      param_1 = param_1 + 0x18;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2[1]);
  }
  return 1;
}

/* ref: FUN_00bce080 */
uint F_00bce080(unsigned int gen_a0)
{
  GEN_ENTER(0xbce080u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  
  if (*param_1 == 0x424c4d54) {
    piVar1 = param_1 + 3;
    iVar2 = param_1[2];
    if (iVar2 != 0) {
      do {
        iVar2 = iVar2 + -1;
        if (*piVar1 == *(int *)REFG(undefined * PTR32, 0x134318c)) {
          return (int)piVar1 + piVar1[8] + 8;
        }
        piVar1 = (int *)((int)piVar1 + piVar1[1]);
      } while (iVar2 != 0);
    }
  }
  return 0;
}

/* ref: FUN_00bce0c0 */
byte F_00bce0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbce0c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 100))))(*(int * PTR32 *)(param_1 + 0xc));
  *(int *)(uVar1 + 0xd8) = *param_2 + (int)param_2;
  return 1;
}

/* ref: FUN_00bce0f0 */
uint F_00bce0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbce0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x40);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (**(ushort * PTR32 *)(iVar1 + 0x10) == param_1) break;
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  return 0x60;
}

/* ref: FUN_00bce120 */
byte F_00bce120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbce120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  ushort * puVar2;
  undefined * this_00;
  
  iVar1 = *(int *)((int)this + 0x40);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    puVar2 = *(ushort * PTR32 *)(iVar1 + 0x10);
    if (*puVar2 == param_2) break;
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  iVar1 = *(int *)((int)this + 0xa48);
  *(int *)((int)this + 0xa4c) = *(int *)((int)this + 0xa4c) + -0x60;
  *(int *)((int)this + 0xa48) = iVar1 + 0x60;
  this_00 = (undefined *)F_00bd2d10(param_1,iVar1);
  F_00c21f80(this_00,puVar2 + 2,0,0);
  return 1;
}

/* ref: FUN_00bce180 */
uint F_00bce180(unsigned int gen_a0)
{
  GEN_ENTER(0xbce180u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  char * pcVar2;
  int iVar3;
  
  if (*param_1 == 0x424c4d54) {
    piVar1 = param_1 + 3;
    iVar3 = param_1[2];
    if (iVar3 != 0) {
      while (iVar3 = iVar3 + -1, *piVar1 != 0x50504d54) {
        piVar1 = (int *)((int)piVar1 + piVar1[1]);
        if (iVar3 == 0) {
          return 0;
        }
      }
      pcVar2 = ((char *)GEN_TOP((piVar1[2] + (int)(piVar1 + 2))));
      if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
        return (uint)pcVar2;
      }
    }
  }
  return 0;
}

/* ref: FUN_00bce230 */
unsigned int F_00bce230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbce230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    uVar2 = param_1;
    do {
      uVar1 = *(uint *)(uVar2 + 0xc);
      if ((uVar2 < (int)this + 0x48U) || ((int)this + 0xa48U <= uVar2)) {
        F_00406ad0(uVar2);
      }
      uVar2 = uVar1;
    } while (uVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00bce270 */
byte F_00bce270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbce270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  int * piVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int * piVar8;
  int * piVar9;
  byte local_5;
  
  local_5 = 1;
  if (*param_1 != 0x42545543) {
    return 0;
  }
  *(int *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0x34) = 0;
  iVar6 = param_1[2];
  param_2 = 0;
  piVar9 = param_1 + 3;
  while (iVar6 != 0) {
    iVar6 = iVar6 + -1;
    if (*piVar9 == 0x4c545443) {
      piVar8 = (int *)((int)piVar9 + piVar9[2] + 8);
      if (*piVar8 != 0x424c4d54) {
        return 0;
      }
      iVar7 = piVar8[2];
      piVar2 = piVar8 + 3;
      while (iVar7 != 0) {
        iVar7 = iVar7 + -1;
        if (*piVar2 == 0x48444d54) {
          piVar2 = (int *)F_00406b90(0x40,0,0);
          if (piVar2 == (int *)0x0) {
            piVar2 = (int *)0x0;
          }
          else {
            *piVar2 = 0;
            piVar2[1] = 0;
            piVar2[2] = 0;
            piVar2[3] = 0;
            piVar2[4] = 0;
            piVar2[5] = 0;
            piVar2[6] = 0;
            piVar2[7] = 0;
            piVar2[8] = 0;
            piVar2[9] = 0;
            piVar2[10] = 0;
            *(undefined2 *)(piVar2 + 0xb) = 1;
            *(undefined1 *)((int)piVar2 + 0x2e) = 0;
          }
          *piVar2 = param_2;
          param_2 = param_2 + 1;
          piVar2[4] = (int)piVar8;
          piVar8 = piVar2 + 2;
          iVar7 = *(int *)((int)this + 0x34);
          if (*(int *)((int)this + 0x34) == 0) {
            *piVar8 = 0;
            piVar2[3] = 0;
            *(int * PTR32 *)((int)this + 0x34) = piVar2;
          }
          else {
            do {
              iVar3 = iVar7;
              iVar7 = *(int *)(iVar3 + 0xc);
            } while (*(int *)(iVar3 + 0xc) != 0);
            piVar4 = piVar2;
            if (piVar8 == (int *)0x0) {
              piVar4 = (int *)0x0;
            }
            *(int * PTR32 *)(iVar3 + 0xc) = piVar4;
            *piVar8 = iVar3;
            piVar2[3] = 0;
          }
          break;
        }
        piVar2 = (int *)((int)piVar2 + piVar2[1]);
      }
    }
    piVar9 = (int *)((int)piVar9 + piVar9[1]);
  }
  iVar6 = param_1[2];
  piVar9 = param_1 + 3;
  do {
    if (iVar6 == 0) {
      iVar6 = *(int *)((int)this + 0x34);
      while (iVar6 != 0) {
        iVar7 = *(int *)(iVar6 + 0xc);
        F_00406ad0(iVar6);
        iVar6 = iVar7;
      }
      return local_5;
    }
    iVar6 = iVar6 + -1;
    uVar5 = 0;
    do {
      if (*piVar9 == *((int *)GEN_TOP((&REFG(undefined * PTR32, 0x1343060))[uVar5 * 2]))) {
        bVar1 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x1343064))[uVar5 * 2])))(this,piVar9 + 2,uVar5);
        if (bVar1 == 0) {
          local_5 = 0;
        }
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 5);
    piVar9 = (int *)((int)piVar9 + piVar9[1]);
  } while( true );
}

/* ref: FUN_00bce410 */
unsigned int F_00bce410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbce410u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * this;
  undefined * this_00;
  code * pcVar3;
  int iVar4;
  
  this = *(int * PTR32 *)((int)REFG(undefined4, 0x1371298) + 0x38);
  iVar4 = *param_2 + (int)param_2;
  this_00 = *(undefined * PTR32 *)(param_1 + 8);
  F_006906f0(this);
  iVar1 = *(int *)(iVar4 + 0x14);
  iVar2 = *(int *)(iVar4 + 0x18);
  this[0xc] = *(int *)(iVar4 + 0x10);
  this[0xd] = iVar1;
  this[0xe] = iVar2;
  pcVar3 = *(gen_code32 *)(*this + 0x10);
  this[9] = this[9] | 2;
  (*pcVar3)(this);
  F_0069c300(REFG(undefined4, 0x1371298),1);
  *(undefined4 *)(iVar4 + 8) = 1;
  F_00b60a70(this_00,iVar4);
  return 0;
}

/* ref: FUN_00bce490 */
byte F_00bce490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbce490u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined3 extraout_var = 0;
  int * piVar6;
  uint uVar7;
  int local_c;
  byte local_5;
  
  local_5 = 1;
  if (*param_1 != 0x424c4d54) {
    return 0;
  }
  *(int * PTR32 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0xa48) = 0;
  iVar4 = 4;
  puVar5 = (undefined4 *)((int)this + 0x34);
  do {
    iVar4 = iVar4 + -1;
    puVar5 = puVar5 + -1;
    *puVar5 = 0;
  } while (iVar4 != 0);
  iVar4 = param_1[2];
  piVar6 = param_1 + 3;
  do {
    if (iVar4 == 0) {
LAB_00bce6ec: ;
      *(undefined4 *)((int)this + 0xa48) = 0;
      if (local_5 != 0) {
        piVar6 = param_1 + 3;
        local_c = param_1[2];
        param_3 = 0;
        if (local_c != 0) {
          do {
            local_c = local_c + -1;
            if (*piVar6 == *(int *)REFG(undefined * PTR32, 0x1343094)) {
              bVar3 = ((code *)REFG(gen_code32, 0x01343098))(this,piVar6 + 2);
              param_3 = param_3 + (int)CONCAT31(extraout_var,bVar3);
            }
            piVar6 = (int *)((int)piVar6 + piVar6[1]);
          } while (local_c != 0);
          if (param_3 != 0) {
            uVar7 = F_00bc1ec0(param_2,param_3);
            *(uint *)((int)this + 0xa48) = uVar7;
            if (uVar7 == 0) {
              local_5 = 0;
            }
          }
        }
        *(int *)((int)this + 0xa4c) = param_3;
        if (local_5 != 0) {
          piVar6 = param_1 + 3;
          iVar4 = param_1[2];
          while (iVar4 != 0) {
            iVar4 = iVar4 + -1;
            uVar7 = 0;
            do {
              if (*piVar6 == *((int *)GEN_TOP((&REFG(undefined * PTR32, 0x134309c))[uVar7 * 2]))) {
                bVar3 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x13430a0))[uVar7 * 2])))(this,piVar6 + 2);
                if (bVar3 == 0) {
                  local_5 = 0;
                }
                break;
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < 3);
            piVar6 = (int *)((int)piVar6 + piVar6[1]);
          }
        }
      }
      uVar7 = *(uint *)((int)this + 0x40);
      while (uVar2 = uVar7, uVar2 != 0) {
        uVar7 = *(uint *)(uVar2 + 0xc);
        if ((uVar2 < (int)this + 0x48U) || ((int)this + 0xa48U <= uVar2)) {
          F_00406ad0(uVar2);
        }
      }
      uVar7 = *(uint *)((int)this + 0x44);
      while (uVar2 = uVar7, uVar2 != 0) {
        uVar7 = *(uint *)(uVar2 + 0xc);
        if ((uVar2 < (int)this + 0x48U) || ((int)this + 0xa48U <= uVar2)) {
          F_00406ad0(uVar2);
        }
      }
      uVar7 = *(uint *)((int)this + 0x3c);
      while (uVar2 = uVar7, uVar2 != 0) {
        uVar7 = *(uint *)(uVar2 + 0xc);
        if ((uVar2 < (int)this + 0x48U) || ((int)this + 0xa48U <= uVar2)) {
          F_00406ad0(uVar2);
        }
      }
      uVar7 = *(uint *)((int)this + 0x38);
      while (uVar2 = uVar7, uVar2 != 0) {
        uVar7 = *(uint *)(uVar2 + 0xc);
        if ((uVar2 < (int)this + 0x48U) || ((int)this + 0xa48U <= uVar2)) {
          F_00406ad0(uVar2);
        }
      }
      *(undefined4 *)((int)this + 0x38) = 0;
      *(undefined4 *)((int)this + 0x3c) = 0;
      *(undefined4 *)((int)this + 0x44) = 0;
      *(undefined4 *)((int)this + 0x40) = 0;
      return local_5;
    }
    iVar4 = iVar4 + -1;
    uVar7 = 0;
    do {
      if (*piVar6 == *((int *)GEN_TOP((&REFG(undefined * PTR32, 0x1343088))[uVar7]))) {
        iVar1 = *(int *)((int)this + 0x20);
        if (iVar1 < 0x28) {
          puVar5 = (undefined4 *)(iVar1 * 0x40 + 0x48 + (int)this);
          *(int *)((int)this + 0x20) = iVar1 + 1;
        }
        else {
          puVar5 = (undefined4 *)F_00406b90(0x40,0,0);
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            *puVar5 = 0;
            puVar5[1] = 0;
            puVar5[2] = 0;
            puVar5[3] = 0;
            puVar5[4] = 0;
            puVar5[5] = 0;
            puVar5[6] = 0;
            puVar5[7] = 0;
            puVar5[8] = 0;
            puVar5[9] = 0;
            puVar5[10] = 0;
            *(undefined2 *)(puVar5 + 0xb) = 1;
            *(undefined1 *)((int)puVar5 + 0x2e) = 0;
          }
        }
        if (puVar5 != (undefined4 *)0x0) {
          puVar5[4] = piVar6 + 2;
          puVar5[7] = piVar6[1] + -8;
          if (uVar7 == 0) {
            puVar5[2] = 0;
            puVar5[3] = *(undefined4 *)((int)this + 0x38);
            if (*(int *)((int)this + 0x38) != 0) {
              *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + 8))) = puVar5;
            }
            *(undefined4 * PTR32 *)((int)this + 0x38) = puVar5;
          }
          else if (uVar7 == 1) {
            puVar5[2] = 0;
            puVar5[3] = *(undefined4 *)((int)this + 0x3c);
            if (*(int *)((int)this + 0x3c) != 0) {
              *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x3c) + 8))) = puVar5;
            }
            *(undefined4 * PTR32 *)((int)this + 0x3c) = puVar5;
          }
          else if (uVar7 == 2) {
            puVar5[2] = 0;
            puVar5[3] = *(undefined4 *)((int)this + 0x40);
            if (*(int *)((int)this + 0x40) != 0) {
              *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x40) + 8))) = puVar5;
            }
            *(undefined4 * PTR32 *)((int)this + 0x40) = puVar5;
          }
          goto LAB_00bce6cb;
        }
        local_5 = 0;
        break;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 3);
    uVar7 = 0;
    do {
      if (*piVar6 == **((int * PTR32 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x134309c) + uVar7)))) goto LAB_00bce6cb;
      uVar7 = uVar7 + 8;
    } while (uVar7 < 0x18);
    uVar7 = F_00b5c6a0(piVar6);
    if (-1 < (int)uVar7) {
      iVar1 = *(int *)((int)this + 0x20);
      if (iVar1 < 0x28) {
        puVar5 = (undefined4 *)(iVar1 * 0x40 + 0x48 + (int)this);
        *(int *)((int)this + 0x20) = iVar1 + 1;
      }
      else {
        puVar5 = (undefined4 *)F_00406b90(0x40,0,0);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
          puVar5[4] = 0;
          puVar5[5] = 0;
          puVar5[6] = 0;
          puVar5[7] = 0;
          puVar5[8] = 0;
          puVar5[9] = 0;
          puVar5[10] = 0;
          *(undefined2 *)(puVar5 + 0xb) = 1;
          *(undefined1 *)((int)puVar5 + 0x2e) = 0;
        }
      }
      if (puVar5 == (undefined4 *)0x0) {
        local_5 = 0;
        goto LAB_00bce6ec;
      }
      puVar5[4] = piVar6 + 2;
      puVar5[7] = piVar6[1] + -8;
      puVar5[9] = uVar7;
      puVar5[2] = 0;
      puVar5[3] = *(undefined4 *)((int)this + 0x44);
      if (*(int *)((int)this + 0x44) != 0) {
        *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x44) + 8))) = puVar5;
      }
      *(undefined4 * PTR32 *)((int)this + 0x44) = puVar5;
      if (((char)param_3 != '\0') && (uVar7 = F_00b5c750(uVar7), uVar7 == 3)) {
        uVar7 = ((code *)*(gen_code32 *)(*param_2 + 100))(param_2);
        *(undefined1 *)(uVar7 + 0xf1) = 1;
      }
    }
LAB_00bce6cb: ;
    if (local_5 == 0) goto LAB_00bce6ec;
    piVar6 = (int *)((int)piVar6 + piVar6[1]);
  } while( true );
}

/* ref: FUN_00bce8b0 */
uint F_00bce8b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbce8b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  ushort * puVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = *(int *)((int)this + 0x44);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    puVar2 = *(ushort * PTR32 *)(iVar1 + 0x10);
    if (*puVar2 == param_1) break;
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  uVar4 = F_00b5c7b0(*(undefined4 *)(iVar1 + 0x24));
  *(uint *)(iVar1 + 0x28) = uVar4;
  bVar3 = F_00b5c790(*(undefined4 *)(iVar1 + 0x24));
  if (bVar3 != 0) {
    uVar5 = F_00bce0f0(this,(uint)puVar2[6]);
    uVar4 = uVar4 + uVar5;
  }
  return uVar4;
}

/* ref: FUN_00bce920 */
byte F_00bce920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xbce920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  float param_4 = (float)gen_a3;
  ushort * puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *(int *)((int)param_1 + 0x44);
  if (iVar4 != 0) {
    while (puVar1 = *(ushort * PTR32 *)(iVar4 + 0x10), *puVar1 != param_3) {
      iVar4 = *(int *)(iVar4 + 0xc);
      if (iVar4 == 0) {
        return 1;
      }
    }
    uVar2 = *(undefined4 *)(iVar4 + 0x24);
    iVar3 = *(int *)((int)param_1 + 0xa48);
    uVar5 = *(int *)(iVar4 + 0x28) + 0xfU & 0xfffffff0;
    *(int *)((int)param_1 + 0xa4c) = *(int *)((int)param_1 + 0xa4c) - uVar5;
    *(uint *)((int)param_1 + 0xa48) = iVar3 + uVar5;
    uVar5 = F_00b5ce50(REFG(undefined4, 0x14c4e90),iVar3,puVar1,uVar2,param_2,param_4);
    if (uVar5 != 0) {
      F_00c22910(param_2,uVar5);
      iVar4 = *(int *)(uVar5 + 0x2c);
      if (iVar4 == 0) {
        *(int *)((int)param_1 + 0x28) = *(int *)((int)param_1 + 0x28) + 1;
      }
      else if (iVar4 == 6) {
        *(int *)((int)param_1 + 0x2c) = *(int *)((int)param_1 + 0x2c) + 1;
      }
      else if (iVar4 == 7) {
        *(int *)((int)param_1 + 0x24) = *(int *)((int)param_1 + 0x24) + 1;
      }
      else {
        *(int *)((int)param_1 + 0x30) = *(int *)((int)param_1 + 0x30) + 1;
      }
      if ((*(byte *)(uVar5 + 0x7c) >> 3 & 1) != 0) {
        F_00bce120(param_1,uVar5,(uint)puVar1[6]);
      }
    }
  }
  return 1;
}

/* ref: FUN_00bce9f0 */
uint F_00bce9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbce9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  ushort * puVar2;
  short * psVar3;
  byte bVar4;
  uint uVar5;
  int local_10;
  uint local_8;
  
  iVar1 = *(int *)((int)this + 0x3c);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    puVar2 = *(ushort * PTR32 *)(iVar1 + 0x10);
    if (*puVar2 == param_1) break;
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  local_8 = 0x30;
  local_10 = 0;
  if (0 < *(int *)(puVar2 + 4)) {
    do {
      for (iVar1 = *(int *)((int)this + 0x44); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
        psVar3 = *(short * PTR32 *)(iVar1 + 0x10);
        if (*psVar3 == *((short *)GEN_TOP(((int)puVar2 + *(int *)(puVar2 + 2) + local_10 * 2)))) {
          uVar5 = F_00b5c7b0(*(undefined4 *)(iVar1 + 0x24));
          *(uint *)(iVar1 + 0x28) = uVar5;
          bVar4 = F_00b5c790(*(undefined4 *)(iVar1 + 0x24));
          if (bVar4 == 0) goto LAB_00bcea63;
          iVar1 = *(int *)((int)this + 0x40);
          goto joined_r0x00bceaaf;
        }
      }
      uVar5 = 0;
LAB_00bcea63: ;
      local_8 = local_8 + uVar5;
      local_10 = local_10 + 1;
    } while (local_10 < *(int *)(puVar2 + 4));
  }
  return local_8;
joined_r0x00bceaaf: ;
  if (iVar1 == 0) goto LAB_00bcea63;
  if (**(short * PTR32 *)(iVar1 + 0x10) == psVar3[6]) {
    uVar5 = uVar5 + 0x60;
    goto LAB_00bcea63;
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  goto joined_r0x00bceaaf;
}

/* ref: FUN_00bceae0 */
byte F_00bceae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xbceae0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  float param_4 = (float)gen_a3;
  ushort * puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte local_5;
  
  iVar4 = *(int *)(param_1 + 0x3c);
  local_5 = 1;
  while( true ) {
    if (iVar4 == 0) {
      return 0;
    }
    puVar1 = *(ushort * PTR32 *)(iVar4 + 0x10);
    if (*puVar1 == param_3) break;
    iVar4 = *(int *)(iVar4 + 0xc);
  }
  iVar4 = *(int *)(param_1 + 0xa48);
  *(int *)(param_1 + 0xa4c) = *(int *)(param_1 + 0xa4c) + -0x30;
  *(int *)(param_1 + 0xa48) = iVar4 + 0x30;
  uVar3 = F_00bec4e0(param_2,iVar4,puVar1);
  iVar4 = 0;
  if (0 < *(int *)(puVar1 + 4)) {
    do {
      bVar2 = F_00bce920(param_1,uVar3,
                           (uint)*((ushort *)GEN_TOP((*(int *)(puVar1 + 2) + iVar4 * 2 + (int)puVar1))),param_4
                          );
      if (bVar2 == 0) {
        local_5 = 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(puVar1 + 4));
  }
  return local_5;
}

/* ref: FUN_00bceb80 */
uint F_00bceb80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbceb80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ushort uVar1;
  ushort * puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar4 = *(int *)((int)this + 0x38);
  uVar5 = 0;
  while( true ) {
    if (iVar4 == 0) {
      return 0;
    }
    puVar2 = *(ushort * PTR32 *)(iVar4 + 0x10);
    if (*puVar2 == param_1) break;
    iVar4 = *(int *)(iVar4 + 0xc);
  }
  uVar1 = puVar2[1];
  param_1 = 1;
  if ((((uVar1 != 0) && (uVar1 != 1)) && (uVar1 < 100)) &&
     (param_1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x20))))(*(int * PTR32 *)((int)this + 0xc),puVar2)
     , param_1 == 0)) {
    return 0;
  }
  iVar4 = *(int *)(puVar2 + 8);
  do {
    uVar5 = uVar5 + 0x40;
    iVar6 = 0;
    if (0 < iVar4) {
      do {
        uVar3 = F_00bce9f0(this,(uint)*((ushort *)GEN_TOP((*(int *)(puVar2 + 6) + iVar6 * 2 + (int)puVar2))))
        ;
        uVar5 = uVar5 + uVar3;
        iVar4 = *(int *)(puVar2 + 8);
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar4);
    }
    param_1 = param_1 - 1;
  } while (param_1 != 0);
  return uVar5;
}

/* ref: FUN_00bcec20 */
byte F_00bcec20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcec20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ushort uVar1;
  int iVar2;
  int * piVar3;
  ushort * puVar4;
  byte bVar5;
  uint uVar6;
  float local_14;
  uint local_10;
  int local_c;
  byte local_5;
  
  iVar2 = *(int *)((int)this + 0x38);
  piVar3 = *(int * PTR32 *)((int)this + 0xc);
  local_14 = 0.0;
  local_5 = 1;
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    puVar4 = *(ushort * PTR32 *)(iVar2 + 0x10);
    if (*puVar4 == param_1) break;
    iVar2 = *(int *)(iVar2 + 0xc);
  }
  uVar1 = puVar4[1];
  local_10 = 1;
  param_1 = 0;
  if (((uVar1 == 0) || (uVar1 == 1)) || (99 < uVar1)) {
    iVar2 = *(int *)((int)this + 0xa48);
    *(int *)((int)this + 0xa4c) = *(int *)((int)this + 0xa4c) + -0x40;
    *(int *)((int)this + 0xa48) = iVar2 + 0x40;
    uVar6 = ((code *)*(gen_code32 *)(*piVar3 + 0xa4))(piVar3,iVar2,puVar4,0);
  }
  else {
    local_10 = ((code *)*(gen_code32 *)(*piVar3 + 0x20))(piVar3,puVar4);
    if (local_10 == 0) {
      return 1;
    }
    iVar2 = *(int *)((int)this + 0xa48);
    *(int *)((int)this + 0xa4c) = *(int *)((int)this + 0xa4c) + -0x40;
    *(int *)((int)this + 0xa48) = iVar2 + 0x40;
    uVar6 = ((code *)*(gen_code32 *)(*piVar3 + 0xa4))(piVar3,iVar2,puVar4,0);
    param_1 = 1;
  }
  if ((uVar6 != 0) && (*(int *)(uVar6 + 0x20) != 0)) {
    while( true ) {
      local_c = 0;
      if (0 < *(int *)(puVar4 + 8)) {
        do {
          bVar5 = F_00bceae0(this,uVar6,
                               (uint)*((ushort *)GEN_TOP((*(int *)(puVar4 + 6) + local_c * 2 + (int)puVar4))),
                               local_14);
          if (bVar5 == 0) {
            local_5 = 0;
          }
          local_c = local_c + 1;
        } while (local_c < *(int *)(puVar4 + 8));
      }
      local_10 = local_10 - 1;
      if (local_10 == 0) break;
      iVar2 = *(int *)((int)this + 0xa48);
      *(int *)((int)this + 0xa4c) = *(int *)((int)this + 0xa4c) + -0x40;
      *(int *)((int)this + 0xa48) = iVar2 + 0x40;
      uVar6 = ((code *)*(gen_code32 *)(*piVar3 + 0xa4))(piVar3,iVar2,puVar4,param_1);
      param_1 = param_1 + 1;
      if (uVar6 == 0) {
        return local_5;
      }
      local_14 = (float)((float10)puVar4[2] + (float10)local_14);
    }
    return local_5;
  }
  return 1;
}

/* ref: FUN_00bceda0 */
uint F_00bceda0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbceda0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  ushort uVar1;
  short * psVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_10;
  uint local_c;
  uint local_8;
  
  uVar3 = 0;
  local_c = 0;
  local_10 = 0;
  if (0 < param_2[1]) {
    do {
      iVar4 = *(int *)((int)param_1 + 0x38);
      iVar5 = 0;
      if (iVar4 != 0) {
LAB_00bcede0: ;
        psVar2 = *(short * PTR32 *)(iVar4 + 0x10);
        if (*psVar2 != *(short *)(*param_2 + local_10 * 2 + (int)param_2)) goto code_r0x00bcedea;
        uVar1 = psVar2[1];
        local_8 = 1;
        if ((((uVar1 == 0) || (uVar1 == 1)) || (99 < uVar1)) ||
           (local_8 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)param_1 + 0xc) + 0x20))))
                                (*(int * PTR32 *)((int)param_1 + 0xc),psVar2), local_8 != 0)) {
          iVar4 = *(int *)(psVar2 + 8);
          do {
            iVar5 = iVar5 + 0x40;
            iVar6 = 0;
            if (0 < iVar4) {
              do {
                uVar3 = F_00bce9f0(param_1,(uint)*((ushort *)GEN_TOP((*(int *)(psVar2 + 6) + iVar6 * 2 + (int)psVar2)))
                                    );
                iVar5 = iVar5 + uVar3;
                iVar4 = *(int *)(psVar2 + 8);
                iVar6 = iVar6 + 1;
              } while (iVar6 < iVar4);
            }
            local_8 = local_8 - 1;
          } while (local_8 != 0);
          goto LAB_00bcedf3;
        }
      }
LAB_00bcedf1: ;
      iVar5 = 0;
LAB_00bcedf3: ;
      uVar3 = local_c + iVar5;
      local_10 = local_10 + 1;
      local_c = uVar3;
    } while (local_10 < param_2[1]);
  }
  return uVar3;
code_r0x00bcedea: ;
  iVar4 = *(int *)(iVar4 + 0xc);
  if (iVar4 == 0) goto LAB_00bcedf1;
  goto LAB_00bcede0;
}

/* ref: FUN_00bcee80 */
byte F_00bcee80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcee80u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  ushort uVar1;
  int * piVar2;
  int iVar3;
  short * psVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  int local_1c;
  float local_18;
  uint local_14;
  int local_10;
  int local_c;
  byte local_6;
  
  local_6 = 1;
  local_1c = 0;
  if (param_2[1] < 1) {
    return 1;
  }
LAB_00bceea2: ;
  piVar2 = *(int * PTR32 *)(param_1 + 0xc);
  iVar3 = *(int *)(param_1 + 0x38);
  local_18 = 0.0;
  bVar5 = true;
  for (; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xc)) {
    psVar4 = *(short * PTR32 *)(iVar3 + 0x10);
    if (*psVar4 == *(short *)(*param_2 + local_1c * 2 + (int)param_2)) {
      uVar1 = psVar4[1];
      local_14 = 1;
      local_c = 0;
      if (((uVar1 == 0) || (uVar1 == 1)) || (99 < uVar1)) {
        iVar3 = *(int *)(param_1 + 0xa48);
        *(int *)(param_1 + 0xa4c) = *(int *)(param_1 + 0xa4c) + -0x40;
        *(int *)(param_1 + 0xa48) = iVar3 + 0x40;
        uVar7 = ((code *)*(gen_code32 *)(*piVar2 + 0xa4))(piVar2,iVar3,psVar4,0);
      }
      else {
        local_14 = ((code *)*(gen_code32 *)(*piVar2 + 0x20))(piVar2,psVar4);
        if (local_14 == 0) goto LAB_00bcf016;
        iVar3 = *(int *)(param_1 + 0xa48);
        *(int *)(param_1 + 0xa4c) = *(int *)(param_1 + 0xa4c) + -0x40;
        *(int *)(param_1 + 0xa48) = iVar3 + 0x40;
        uVar7 = ((code *)*(gen_code32 *)(*piVar2 + 0xa4))(piVar2,iVar3,psVar4,0);
        local_c = 1;
      }
      if ((uVar7 == 0) || (*(int *)(uVar7 + 0x20) == 0)) goto LAB_00bcf016;
      goto LAB_00bcef80;
    }
  }
  goto LAB_00bcf012;
LAB_00bcef80: ;
  local_10 = 0;
  if (0 < *(int *)(psVar4 + 8)) {
    do {
      bVar6 = F_00bceae0(param_1,uVar7,
                           (uint)*((ushort *)GEN_TOP((*(int *)(psVar4 + 6) + local_10 * 2 + (int)psVar4))),
                           local_18);
      if (bVar6 == 0) {
        bVar5 = false;
      }
      local_10 = local_10 + 1;
    } while (local_10 < *(int *)(psVar4 + 8));
  }
  local_14 = local_14 - 1;
  if (local_14 == 0) goto LAB_00bcf00c;
  iVar3 = *(int *)(param_1 + 0xa48);
  *(int *)(param_1 + 0xa4c) = *(int *)(param_1 + 0xa4c) + -0x40;
  *(int *)(param_1 + 0xa48) = iVar3 + 0x40;
  uVar7 = ((code *)*(gen_code32 *)(*piVar2 + 0xa4))(piVar2,iVar3,psVar4,local_c);
  local_c = local_c + 1;
  if (uVar7 == 0) goto LAB_00bcf00c;
  local_18 = (float)((float10)(ushort)psVar4[2] + (float10)local_18);
  goto LAB_00bcef80;
LAB_00bcf00c: ;
  if (!bVar5) {
LAB_00bcf012: ;
    local_6 = 0;
  }
LAB_00bcf016: ;
  local_1c = local_1c + 1;
  if (param_2[1] <= local_1c) {
    return local_6;
  }
  goto LAB_00bceea2;
}

/* ref: FUN_00bcf050 */
uint F_00bcf050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcf050u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00bcf060 */
uint F_00bcf060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcf060u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00bcf070 */
uint F_00bcf070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcf070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (int)this +
         *((int *)GEN_TOP(((int)this + param_1 * 4 + *(int *)((int)this + 8)))) + *(int *)((int)this + 8);
}

/* ref: FUN_00bcf090 */
ushort F_00bcf090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcf090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((ushort *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 2 + (int)this)));
}

/* ref: FUN_00bcf0b0 */
ushort F_00bcf0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcf0b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(ushort *)(*(int *)this + param_1 * 2 + (int)this);
}

/* ref: FUN_00bcf0f0 */
ushort F_00bcf0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcf0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((ushort *)GEN_TOP((*(int *)((int)this + 4) + param_1 * 2 + (int)this)));
}

/* ref: FUN_00bcf110 */
unsigned int F_00bcf110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcf110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  *(undefined4 *)this = 0;
  *(int *)((int)this + 4) = *param_1;
  if (*param_1 != 0) {
    *(int *)(*param_1 + 8) = (int)this + -8;
  }
  *param_1 = (int)this + -8;
  return 0;
}

/* ref: FUN_00bcf140 */
uint F_00bcf140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcf140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (*param_1 == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *param_1 = (int)this + -8;
    return 0;
  }
  do {
    iVar2 = iVar1;
    iVar1 = *(int *)(iVar2 + 0xc);
  } while (*(int *)(iVar2 + 0xc) != 0);
  if (this != (undefined *)0x0) {
    *(uint *)(iVar2 + 0xc) = (int)this - 8U;
    *(int *)this = iVar2;
    *(undefined4 *)((int)this + 4) = 0;
    return (int)this - 8U;
  }
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(int *)&REFG(undefined, 0x0) = iVar2;
  *(undefined4 *)&REFG(undefined, 0x4) = 0;
  return 0;
}

/* ref: FUN_00bcf270 */
uint F_00bcf270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcf270u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00bcf290 */
uint F_00bcf290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcf290u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00bcf2c0 */
unsigned int F_00bcf2c0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbcf2c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x28) = param_2;
  return 0;
}

/* ref: FUN_00bcf2e0 */
byte F_00bcf2e0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbcf2e0u, gen_a0, 0u, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  bool bVar1;
  bool bVar2;
  
  bVar1 = GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  bVar2 = param_2 == *(float *)&REFG(undefined, 0x1088114);
  *(float *)(in_ecx + 0x70) = param_2;
  if ((GEN_ISNAN(param_2) || bVar1) == ((GEN_ISNAN(param_2) || bVar1) || bVar2)) {
    *(float *)(in_ecx + 0x6c) = param_2;
  }
  else {
    *(undefined4 *)(in_ecx + 0x6c) = *(undefined4 *)(in_ecx + 0x68);
  }
  *(byte *)(in_ecx + 0x83) = (byte)param_3;
  *(byte *)(in_ecx + 0x84) = (byte)param_3;
  *(float *)(in_ecx + 100) =
       ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x60) + (float10)*(float *)(in_ecx + 0x6c))));
  return (byte)param_3;
}

/* ref: FUN_00bcf340 */
byte F_00bcf340(unsigned int gen_a0)
{
  GEN_ENTER(0xbcf340u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(char *)(in_ecx + 0x80) != '\0') {
    return 1;
  }
  if (*(int *)(in_ecx + 0x74) == 0) {
    return 0;
  }
  return 1 - (1 < *(uint *)(in_ecx + 0x78));
}

/* ref: FUN_00bcf380 */
byte F_00bcf380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcf380u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x85) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00bcf3c0 */
uint F_00bcf3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcf3c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = ((param_2 & 0xff) << 6 ^ *(uint *)(in_ecx + 0xe0)) & 0x40;
  *(uint *)(in_ecx + 0xe0) = *(uint *)(in_ecx + 0xe0) ^ uVar1;
  return uVar1;
}

/* ref: FUN_00bcf400 */
uint F_00bcf400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcf400u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x104) = param_2;
  return param_2;
}

/* ref: FUN_00bcf470 */
unsigned int F_00bcf470(float gen_a0)
{
  GEN_ENTER(0xbcf470u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf6 */
uint F_00bcf490(unsigned int gen_a0)
{
  GEN_ENTER(0xbcf490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pSVar1;
  uint uVar2;
  ulonglong uVar3;
  
  F_00bc2160((undefined *)this);
  if (*(int *)(this + 0xcc) != 0) {
    F_00b5c650(*(int *)(this + 0xcc));
    *(undefined4 *)(this + 0xcc) = 0;
  }
  pSVar1 = *(undefined * PTR32 *)(this + 0xd4);
  if ((pSVar1 != (undefined *)0x0) && (pSVar1 != this + 0xa0)) {
    F_00406b30(pSVar1);
    *(undefined4 *)(this + 0xd4) = 0;
  }
  uVar2 = 0;
  if (*(int *)(this + 0x1cc) != 0) {
    uVar3 = F_00406b30(*(int *)(this + 0x1cc));
    uVar2 = (uint)uVar3;
    *(undefined4 *)(this + 0x1cc) = 0;
  }
  return uVar2;
}

/* ref: FUN_00bcf500 */
byte F_00bcf500(unsigned int gen_a0)
{
  GEN_ENTER(0xbcf500u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (((*(int *)(in_ecx + 0x24) != 6) && (*(char *)(in_ecx + 0xf0) == '\0')) &&
     (*(char *)(in_ecx + 0xf1) == '\0')) {
    return 0;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf10 */
unsigned int F_00bcf520(void)
{
  GEN_ENTER(0xbcf520u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf11 */
unsigned int F_00bcf530(void)
{
  GEN_ENTER(0xbcf530u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf12 */
unsigned int F_00bcf540(unsigned int gen_a0)
{
  GEN_ENTER(0xbcf540u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(char *)(in_ecx + 0xd) == '\0') {
    return 0;
  }
  if (*(char *)(in_ecx + 0x30) != '\0') {
    return 0;
  }
  if (*(char *)(in_ecx + 0x80) != '\0') {
    return 0;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf13 */
unsigned int F_00bcf5b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbcf5b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  code * pcVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x70))();
  if ((uVar3 == 0) && (this[0x80] == (undefined1)0x0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  F_00bc29d0(this,uVar4);
  pcVar2 = *(gen_code32 *)(*(int *)this + 0x1c);
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  this[0xe4] = (undefined1)0x0;
  (*pcVar2)(this,10,&REFG(undefined, 0x13056c0));
  fVar1 = *(float *)(this + 0x24c);
  if ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
      ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar1 == *(float *)&REFG(undefined, 0x1088114))) {
    F_00bc3780(this,fVar1);
  }
  this[0x249] = (undefined1)0x0;
  *(undefined4 *)(this + 0x28) = 0;
  return 0;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf19 */
uint F_00bcf640(unsigned int gen_a0)
{
  GEN_ENTER(0xbcf640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  undefined * pSVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xfc);
  (*(uint *)(gen_frame + 0xf8)) = uVar3;
  if (*(int *)(this + 0xf4) != 0) {
    ((undefined4 *)(gen_frame + 0x8))[0] = 0;
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)0x0;
    bVar2 = F_00bc2920(this,&(*(undefined * PTR32 *)(gen_frame + 0x4)),((undefined4 *)(gen_frame + 0x8)));
    uVar3 = CONCAT31(extraout_var,bVar2);
    while (bVar2 != 0) {
      if ((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x2c) == 0x17) && (*(char *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x88) != '\0')) {
        uVar3 = F_00be3060((*(undefined * PTR32 *)(gen_frame + 0x4)));
        pSVar1 = this + 0xf4;
        *(int *)pSVar1 = *(int *)pSVar1 + -1;
        if (*(int *)pSVar1 == 0) break;
      }
      bVar2 = F_00bc2920(this,&(*(undefined * PTR32 *)(gen_frame + 0x4)),((undefined4 *)(gen_frame + 0x8)));
      uVar3 = CONCAT31(extraout_var_00,bVar2);
    }
    *(undefined4 *)(this + 0xf4) = 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc));
  return uVar3;
}

/* ref: FUN_00bcf6f0 */
uint F_00bcf6f0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbcf6f0u, gen_a0, 0u, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined1 TVar4;
  float10 fVar5;
  float10 fVar6;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  uVar3 = *(uint *)(param_1 + 0x138) >> 1;
  (*(float *)(gen_frame + 0xc)) = 0.0;
  if (((uVar3 & 1) == 0) && (((byte)param_1[0x138] & 1) == 0)) {
    if (param_1[0x80] != (undefined1)0x0) {
      param_2 = 0.0;
    }
    fVar1 = *(float *)(param_1 + 0x6c);
    (*(float *)(gen_frame + 0x14)) = fVar1;
    (*(float *)(gen_frame + 0x10)) = param_2;
    if ((float10)fVar1 < (float10)param_2) {
      (*(float *)(gen_frame + 0x10)) = fVar1;
    }
    *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) & 0xfffffdff;
    if (0.0 < (*(float *)(gen_frame + 0x10))) {
      do {
        if (REFG(float, 0x1087f04) < (*(float *)(gen_frame + 0x10))) {
          (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1087f04);
          (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x10)) - (float10)REFG(double, 0x1088130));
        }
        else {
          (*(float *)(gen_frame + 0x14)) = (*(float *)(gen_frame + 0x10));
          (*(float *)(gen_frame + 0x10)) = 0.0;
        }
        fVar1 = (*(float *)(gen_frame + 0x14));
        bVar2 = F_00bc1d60(param_1);
        if (bVar2 == 0) {
          if (param_1[0xe] != (undefined1)0x0) {
            param_1[0x84] = (undefined1)0x0;
          }
          bVar2 = F_00bc2d10(param_1,(uint)&(*(float *)(gen_frame + 0x14)));
          if (bVar2 != 0) {
            ((code *)*(gen_code32 *)(*(int *)param_1 + 0x1c))(param_1,0xb,&REFG(undefined, 0x13056c0));
            F_00bc27a0(param_1,6);
          }
        }
        *(float *)(param_1 + 0x28) = (*(float *)(gen_frame + 0x10));
        (*(undefined4 *)(gen_frame + 0x28)) = 0;
        (*(float *)(gen_frame + 0x30)) = 0.0;
        (*(undefined4 *)(gen_frame + 0x2c)) = 0;
        (*(undefined4 *)(gen_frame + 0x34)) = 0;
        (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x28)) + 0)) = 0;
        (*(undefined4 *)(gen_frame + 0x28)) = 0;
        (*(float *)(gen_frame + 0x30)) = (*(float *)(gen_frame + 0x14));
        F_00bc3080(param_1,0x10,&(*(undefined4 *)(gen_frame + 0x28)));
        bVar2 = F_00bc23a0(param_1,0x12);
        TVar4 = (undefined1)(bVar2 == 0);
        uVar3 = CONCAT31(extraout_var,TVar4);
        param_1[0x249] = TVar4;
        if ((bool)TVar4) goto LAB_00bcf8b9;
        if ((char)param_3 != '\0') {
          F_00bc3080(param_1,0x13,&REFG(undefined, 0x13056c0));
        }
        fVar5 = (float10)(*(float *)(gen_frame + 0x14));
        (*(float *)(gen_frame + 0xc)) = (float)(fVar5 + (float10)(*(float *)(gen_frame + 0xc)));
        if ((GEN_ISNAN((*(float *)(gen_frame + 0x14))) == (GEN_ISNAN((*(float *)(gen_frame + 0x14))) || (*(float *)(gen_frame + 0x14)) == 0.0)) &&
           (fVar6 = (float10)fVar1,
           (GEN_ISNAN(fVar5) || GEN_ISNAN(fVar6)) == ((GEN_ISNAN(fVar5) || GEN_ISNAN(fVar6)) || fVar5 == fVar6))) {
          (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((fVar6 - fVar5) + (float10)(*(float *)(gen_frame + 0x10)))));
        }
      } while (!GEN_ISNAN((*(float *)(gen_frame + 0x10))) && !((*(float *)(gen_frame + 0x10)) <= 0.0));
    }
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(float *)(gen_frame + 0x20)) = 0.0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x18)) + 0)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(float *)(gen_frame + 0x20)) = (*(float *)(gen_frame + 0xc));
    uVar3 = F_00bc3080(param_1,0x11,&(*(undefined4 *)(gen_frame + 0x18)));
  }
LAB_00bcf8b9: ;
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar3;
}

/* ref: Client::System::Scheduler::Base::SchedulerTimeline::vf16 */
unsigned int F_00bcf8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbcf8d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  bool bVar1;
  byte bVar2;
  uint uVar3;
  
  if (this[0x11] == (undefined1)0x0) {
    F_00bc2770((undefined *)this,param_1);
    bVar1 = false;
    if ((((byte)this[0x138] & 0x10) != 0) &&
       (bVar2 = F_00bbad60(param_1,*(undefined4 *)(this + 0x13c)), bVar2 != 0)) {
      bVar1 = true;
    }
    uVar3 = F_00bbaea0(param_1,this + 0x110);
    if ((char)uVar3 != '\0') {
      bVar1 = true;
    }
    uVar3 = F_00bbaea0(param_1,this + 0x124);
    if (((char)uVar3 != '\0') || (bVar1)) {
      *(uint *)(this + 0xe0) = *(uint *)(this + 0xe0) & 0xffffff7f;
      F_00bc2850(this);
      if (*(int *)(this + 0xcc) != 0) {
        F_00b5c650(*(int *)(this + 0xcc));
        *(undefined4 *)(this + 0xcc) = 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_00bcf970 */
unsigned int F_00bcf970(void)
{
  GEN_ENTER(0xbcf970u, 0u, 0u, 0u, 0u);
  return 0;
}

