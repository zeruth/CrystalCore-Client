#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_004dc090 */
byte F_004dc090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4dc090u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  int iVar1;
  byte bVar2;
  
  if (1 < (param_3 >> 6 & 1) + (param_3 >> 3 & 1) + (param_3 >> 2 & 1) + (param_3 >> 1 & 1) +
          (param_3 & 1)) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(uint *)((int)this + 0x20) = param_3;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  if ((((((*(byte *)((int)this + 0x20) & 0x4c) != 0) ||
        (iVar1 = *(int *)(REFG(int, 0x1370b90) + 0x38), iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 4)) &&
     (bVar2 = F_004d9730(this), bVar2 == 0)) {
    F_004d9690(this);
    return 0;
  }
  return 1;
}

/* ref: FUN_004dc130 */
byte F_004dc130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4dc130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  if ((param_2 >> 6 & 1) + (param_2 >> 3 & 1) + (param_2 >> 2 & 1) + (param_2 >> 1 & 1) +
      (param_2 & 1) < 2) {
    *(uint *)((int)this + 0xc) = param_1 + 0xfU & 0xfffffff0;
    *(uint *)((int)this + 0x10) = param_2;
    if ((param_2 & 2) != 0) {
      return 1;
    }
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 8),param_1,0x10);
    *(uint *)((int)this + 0x14) = uVar1;
    if (uVar1 != 0) {
      if ((*(byte *)((int)this + 0x10) & 1) == 0) {
        *(uint *)((int)this + 0x18) = uVar1;
        *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)((int)this + 0x14);
        return 1;
      }
      uVar1 = 1;
      puVar3 = (uint *)((int)this + 0x18);
      do {
        uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                          (*(int * PTR32 *)(REFG(int, 0x1371270) + 8),param_1,0x10);
        *puVar3 = uVar2;
        if (uVar2 == 0) {
          F_004d98b0(this);
          return 0;
        }
        uVar1 = uVar1 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar1 < 3);
      return 1;
    }
  }
  return 0;
}

/* ref: Client::Graphics::Kernel::InputLayout::vf1 */
uint F_004dc210(unsigned int gen_a0)
{
  GEN_ENTER(0x4dc210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x20);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(this + 0x20) = 0;
  }
  uVar2 = 0;
  if (*(int *)(this + 0xc) != 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 8),*(int *)(this + 0xc));
    *(undefined4 *)(this + 0xc) = 0;
  }
  *(undefined4 *)(this + 0x10) = 0;
  return uVar2;
}

/* ref: Client::Graphics::Kernel::VertexShader::vf1 */
uint F_004dc250(unsigned int gen_a0)
{
  GEN_ENTER(0x4dc250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x2c);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(this + 0x2c) = 0;
  }
  uVar2 = F_004d9c00(this);
  return uVar2;
}

/* ref: FUN_004dc280 */
byte F_004dc280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4dc280u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * piVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  
  bVar3 = F_004d9b80(this,param_3,param_4);
  if (bVar3 == 0) {
    return 0;
  }
  *(int *)((int)this + 0x24) = param_2 + -4;
  *(undefined4 *)((int)this + 0x28) = *param_1;
  piVar1 = (int *)((int)this + 0x2c);
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40) + 0x16c))))
                    (*(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40),param_1 + 1,piVar1);
  if ((int)uVar4 < 0) {
    piVar2 = (int *)*piVar1;
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
      *piVar1 = 0;
    }
    F_004d9c00(this);
    return 0;
  }
  return 1;
}

/* ref: Client::Graphics::Kernel::PixelShader::vf1 */
uint F_004dc300(unsigned int gen_a0)
{
  GEN_ENTER(0x4dc300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x28);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(this + 0x28) = 0;
  }
  uVar2 = F_004d9c00(this);
  return uVar2;
}

/* ref: FUN_004dc330 */
byte F_004dc330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4dc330u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * piVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  
  bVar3 = F_004d9b80(this,param_3,param_4);
  if (bVar3 == 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x28);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      *(undefined4 *)((int)this + 0x28) = 0;
    }
    F_004d9c00(this);
    return 0;
  }
  *(undefined4 *)((int)this + 0x24) = param_2;
  piVar1 = (int *)((int)this + 0x28);
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40) + 0x1a8))))
                    (*(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40),param_1,piVar1);
  if ((int)uVar4 < 0) {
    piVar2 = (int *)*piVar1;
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
      *piVar1 = 0;
    }
    F_004d9c00(this);
    return 0;
  }
  return 1;
}

/* ref: FUN_004dc3d0 */
byte F_004dc3d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4dc3d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  int iVar1;
  byte bVar2;
  
  if (1 < (param_4 >> 6 & 1) + (param_4 >> 3 & 1) + (param_4 >> 2 & 1) + (param_4 >> 1 & 1) +
          (param_4 & 1)) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x18) = *param_1;
  *(undefined4 *)((int)this + 0x1c) = param_1[1];
  *(undefined1 *)((int)this + 0x24) = (undefined1)param_2;
  *(undefined4 *)((int)this + 0x20) = 1;
  *(undefined2 *)((int)this + 0x25) = 0;
  *(undefined4 *)((int)this + 0x28) = param_3;
  *(uint *)((int)this + 0x2c) = param_4 & 0xfcbfffff | 0x800000;
  if ((((((param_4 & 0x4c) != 0) || (iVar1 = *(int *)(REFG(int, 0x1370b90) + 0x38), iVar1 == 0)) ||
       (iVar1 == 1)) || (iVar1 == 4)) && (bVar2 = F_004da150(this), bVar2 == 0)) {
    F_004d9cc0(this);
    return 0;
  }
  return 1;
}

/* ref: FUN_004dc480 */
byte F_004dc480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x4dc480u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint param_5 = (uint)gen_a5;
  int iVar1;
  byte bVar2;
  undefined * _Dst;
  
  if (1 < (param_5 >> 6 & 1) + (param_5 >> 3 & 1) + (param_5 >> 2 & 1) + (param_5 >> 1 & 1) +
          (param_5 & 1)) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x18) = *param_1;
  *(undefined4 *)((int)this + 0x1c) = param_1[1];
  *(undefined4 *)((int)this + 0x28) = param_4;
  *(undefined4 *)((int)this + 0x20) = param_2;
  *(char *)((int)this + 0x24) = (char)param_3;
  *(undefined2 *)((int)this + 0x25) = 0;
  *(uint *)((int)this + 0x2c) = param_5 & 0xfd3fffff | 0x1000000;
  if ((param_5 & 4) != 0) {
    _Dst = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                             (*(int * PTR32 *)(REFG(int, 0x1371270) + 8),param_3 * 0xc,0x10)));
    *(undefined * PTR32 *)((int)this + 0x44) = _Dst;
    F_00c48350(_Dst,0,param_3 * 0xc);
  }
  if ((((((*(byte *)((int)this + 0x2c) & 0x4c) != 0) ||
        (iVar1 = *(int *)(REFG(int, 0x1370b90) + 0x38), iVar1 == 0)) || (iVar1 == 1)) || (iVar1 == 4)) &&
     (bVar2 = F_004da150(this), bVar2 == 0)) {
    F_004d9cc0(this);
    return 0;
  }
  return 1;
}

/* ref: FUN_004dc560 */
byte F_004dc560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4dc560u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  int iVar1;
  byte bVar2;
  
  if (1 < (param_4 >> 6 & 1) + (param_4 >> 3 & 1) + (param_4 >> 2 & 1) + (param_4 >> 1 & 1) +
          (param_4 & 1)) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_1;
  *(undefined1 *)((int)this + 0x24) = (undefined1)param_2;
  *(undefined4 *)((int)this + 0x20) = 1;
  *(undefined2 *)((int)this + 0x25) = 0;
  *(undefined4 *)((int)this + 0x28) = param_3;
  *(uint *)((int)this + 0x2c) = param_4 & 0xfe3fffff | 0x2000000;
  if ((((((param_4 & 0x4c) != 0) || (iVar1 = *(int *)(REFG(int, 0x1370b90) + 0x38), iVar1 == 0)) ||
       (iVar1 == 1)) || (iVar1 == 4)) && (bVar2 = F_004da150(this), bVar2 == 0)) {
    F_004d9cc0(this);
    return 0;
  }
  return 1;
}

/* ref: FUN_004dc610 */
byte F_004dc610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4dc610u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  int iVar1;
  byte bVar2;
  
  if (1 < (param_3 >> 6 & 1) + (param_3 >> 3 & 1) + (param_3 >> 2 & 1) + (param_3 >> 1 & 1) +
          (param_3 & 1)) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x18) = *param_1;
  *(undefined4 *)((int)this + 0x1c) = param_1[1];
  *(undefined4 *)((int)this + 0x20) = 1;
  *(undefined2 *)((int)this + 0x24) = 1;
  *(undefined1 *)((int)this + 0x26) = 0;
  *(undefined4 *)((int)this + 0x28) = param_2;
  *(uint *)((int)this + 0x2c) = param_3 & 0xfcbfffff | 0x900000;
  if ((((((param_3 & 0x4c) != 0) || (iVar1 = *(int *)(REFG(int, 0x1370b90) + 0x38), iVar1 == 0)) ||
       (iVar1 == 1)) || (iVar1 == 4)) && (bVar2 = F_004da150(this), bVar2 == 0)) {
    F_004d9cc0(this);
    return 0;
  }
  return 1;
}

/* ref: FUN_004dc6d0 */
byte F_004dc6d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4dc6d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  byte bVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  *(int *)((int)this + 0x18) = param_1;
  iVar1 = *(int *)(REFG(int, 0x1370b90) + 0x38);
  if ((((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 4)) && (bVar3 = F_004da760(this), bVar3 == 0))
  {
    piVar2 = *(int * PTR32 *)((int)this + 0x1c);
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
    *(undefined4 *)((int)this + 0x1c) = 0;
    return 0;
  }
  return 1;
}

/* ref: FUN_004dc730 */
uint F_004dc730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4dc730u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar2 = *(uint *)((int)this + 0x20);
  *param_2 = 0;
  if (uVar2 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return 0;
  }
  if (0x30000 < (int)(uVar2 * 0x8000)) {
    uVar2 = F_004da960(this,param_2);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return uVar2;
  }
  (*(uint *)(gen_frame + 0x8)) = F_004e1760(REFG(undefined4, 0x1370b90),uVar2 * 0x8000);
  uVar1 = (*(uint *)(gen_frame + 0x8)) + uVar2 * 0x4000;
  (*(int *)(gen_frame + 0x24)) = (uVar2 & 0x3ffff) * 0x800 - *(int *)((int)this + 0x1c);
  (*(uint *)(gen_frame + 0x10)) = uVar1;
  *param_2 = (*(int *)(gen_frame + 0x24));
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)((int)this + 0x10);
  (*(undefined4 *)(gen_frame + 0x14)) = 0x4000;
  (*(undefined4 *)(gen_frame + 0x18)) = 8;
  (*(int *)(gen_frame + 0x1c)) = uVar2 * 0x4000;
  (*(uint *)(gen_frame + 0x20)) = uVar2;
  F_00a1a9d0(param_1,&(*(uint *)(gen_frame + 0x8)),param_3);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar1;
}

/* ref: FUN_004dc830 */
byte F_004dc830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4dc830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int iVar1;
  char cVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  uint uVar7;
  
  *param_1 = *(uint *)((int)this + 0x30);
  param_1[1] = *(uint *)((int)this + 0x34);
  param_1[2] = *(uint *)((int)this + 0x38) & 0x7ffffff;
  param_1[3] = *(uint *)((int)this + 0x3c) & 0x7fffffff;
  param_1[4] = *(uint *)((int)this + 0x40);
  param_1[5] = *(uint *)((int)this + 0x44);
  param_1[6] = *(uint *)((int)this + 0x48);
  uVar7 = *(uint *)((int)this + 0x4c);
  param_1[7] = uVar7;
  uVar4 = *(uint *)((int)this + 0x5c);
  *param_1 = *(uint *)((int)this + 0x58) & 0xfe000000;
  param_1[1] = uVar4 & 0xfffffffc;
  *param_1 = *param_1 | *(uint *)((int)this + 0x50) & 0x1f;
  pvVar3 = *(undefined * PTR32 *)((int)this + 0x60);
  if (pvVar3 != (undefined *)0x0) {
    uVar4 = *(uint *)((int)this + 8) >> 0x13 & 0xf;
    if ((((byte)uVar4 < 0x10) && (cVar2 = *(char *)(uVar4 + 0xc + (int)pvVar3), -1 < cVar2)) &&
       ((int)cVar2 < *(int *)((int)pvVar3 + 8))) {
      uVar4 = F_004e3c00(pvVar3,(int)cVar2);
    }
    else {
      uVar4 = 0;
    }
    param_1[4] = uVar4;
    pvVar3 = *(undefined * PTR32 *)((int)this + 0x60);
    uVar4 = *(uint *)((int)this + 8) >> 0x13 & 0xf;
    if ((((byte)uVar4 < 0x10) && (cVar2 = *(char *)(uVar4 + 0xc + (int)pvVar3), -1 < cVar2)) &&
       ((int)cVar2 < *(int *)((int)pvVar3 + 8))) {
      uVar4 = F_004e3c40(pvVar3,(int)cVar2);
    }
    else {
      uVar4 = 0;
    }
    param_1[5] = uVar4;
  }
  uVar7 = *(int *)(uVar7 + 0x14) + 1;
  iVar1 = uVar7 * 8;
  puVar5 = (undefined4 *)
           F_004d4760(this,iVar1 + *(int *)(param_1[5] + 0x20) + *(int *)(param_1[4] + 0x20));
  if (puVar5 == (undefined4 *)0x0) {
    return 0;
  }
  param_1[8] = uVar7;
  param_1[9] = (uint)puVar5;
  if (uVar7 != 0) {
    puVar6 = (undefined4 *)((int)this + 0x68);
    do {
      *puVar5 = *puVar6;
      puVar5[1] = puVar6[1];
      puVar6 = puVar6 + 2;
      puVar5 = puVar5 + 2;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar7 = F_004daad0(this,param_1[4],param_1[9] + iVar1,param_1 + 10,param_1 + 0xb);
  F_004daad0(this,param_1[5],uVar7,param_1 + 0xc,param_1 + 0xd);
  return 1;
}

/* ref: FUN_004dc980 */
byte F_004dc980(unsigned int gen_a0)
{
  GEN_ENTER(0x4dc980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  undefined4 * puVar5;
  char * pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  bVar4 = 1;
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    bVar2 = F_004db340(*(undefined * PTR32 *)((int)this + 8));
    if (bVar2 == 0) {
      bVar4 = 0;
    }
  }
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  pcVar6 = "common/graphics/texture/dummy.tex";
  puVar5 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x8)) = 0x746578;
  uVar3 = F_004ff310(((undefined1 *)(gen_frame + 0x4)),0,0);
  uVar3 = F_00513d70(uVar3,puVar5,pcVar6,uVar7,uVar8,uVar9);
  *(uint *)((int)this + 0xd0) = uVar3;
  if (uVar3 == 0) {
    bVar4 = 0;
  }
  piVar1 = *(int * PTR32 *)(uVar3 + 0xfc);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0xd4);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(undefined4 *)((int)this + 0xd4) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xd0) + 0xfc)));
  return bVar4;
}

/* ref: FUN_004dca20 */
uint F_004dca20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4dca20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint param_5 = (uint)gen_a4;
  byte bVar1;
  undefined * this;
  int * this_00;
  
  this = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                           (*(int * PTR32 *)(REFG(int, 0x1371270) + 8),0x48,0x10)));
  if (this != (undefined *)0x0) {
    this_00 = (int *)F_004d6c80(this);
    if (this_00 != (int *)0x0) {
      this_00[2] = this_00[2] ^ (this_00[2] ^ param_5) & 0xf;
      bVar1 = F_004dc3d0(this_00,param_1,param_2,param_3,param_4);
      if (bVar1 != 0) {
        return (uint)this_00;
      }
      ((code *)*(gen_code32 *)(*this_00 + 0xc))(this_00);
    }
  }
  return 0;
}

/* ref: FUN_004dca90 */
uint F_004dca90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x4dca90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint param_6 = (uint)gen_a5;
  byte bVar1;
  undefined * this;
  int * this_00;
  
  this = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                           (*(int * PTR32 *)(REFG(int, 0x1371270) + 8),0x48,0x10)));
  if (this != (undefined *)0x0) {
    this_00 = (int *)F_004d6c80(this);
    if (this_00 != (int *)0x0) {
      this_00[2] = this_00[2] ^ (this_00[2] ^ param_6) & 0xf;
      bVar1 = F_004dc480(this_00,param_1,param_2,param_3,param_4,param_5);
      if (bVar1 != 0) {
        return (uint)this_00;
      }
      ((code *)*(gen_code32 *)(*this_00 + 0xc))(this_00);
    }
  }
  return 0;
}

/* ref: FUN_004dcb00 */
uint F_004dcb00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4dcb00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint param_5 = (uint)gen_a4;
  byte bVar1;
  undefined * this;
  int * this_00;
  
  this = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                           (*(int * PTR32 *)(REFG(int, 0x1371270) + 8),0x48,0x10)));
  if (this != (undefined *)0x0) {
    this_00 = (int *)F_004d6c80(this);
    if (this_00 != (int *)0x0) {
      this_00[2] = this_00[2] ^ (this_00[2] ^ param_5) & 0xf;
      bVar1 = F_004dc560(this_00,param_1,param_2,param_3,param_4);
      if (bVar1 != 0) {
        return (uint)this_00;
      }
      ((code *)*(gen_code32 *)(*this_00 + 0xc))(this_00);
    }
  }
  return 0;
}

/* ref: FUN_004dcb70 */
uint F_004dcb70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4dcb70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint param_5 = (uint)gen_a4;
  byte bVar1;
  int * this;
  
  this = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                          (*(int * PTR32 *)(REFG(int, 0x1371270) + 8),0x30,0x10)));
  if (this != (int *)0x0) {
    F_00b1b490(this);
    this[2] = 0;
    this[3] = 0;
    this[4] = 0;
    this[5] = 0;
    this[6] = 0;
    this[7] = 0;
    this[8] = 0;
    *this = (int)(*(undefined * PTR32 (*)[5])REFP(0x1096afc));
    this[9] = 0;
    this[10] = 0;
    this[0xb] = 0;
    this[2] = this[2] ^ param_5 & 0xf;
    bVar1 = F_004dc280(this,param_1,param_2,param_3,param_4);
    if (bVar1 != 0) {
      return (uint)this;
    }
    ((code *)*(gen_code32 *)(*this + 0xc))(this);
  }
  return 0;
}

/* ref: FUN_004dcc00 */
uint F_004dcc00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4dcc00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint param_5 = (uint)gen_a4;
  byte bVar1;
  int * this;
  
  this = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                          (*(int * PTR32 *)(REFG(int, 0x1371270) + 8),0x2c,0x10)));
  if (this != (int *)0x0) {
    F_00b1b490(this);
    this[2] = 0;
    this[3] = 0;
    this[4] = 0;
    this[5] = 0;
    this[6] = 0;
    this[7] = 0;
    this[8] = 0;
    *this = (int)(*(undefined * PTR32 (*)[5])REFP(0x1096b14));
    this[9] = 0;
    this[10] = 0;
    this[2] = this[2] ^ param_5 & 0xf;
    bVar1 = F_004dc330(this,param_1,param_2,param_3,param_4);
    if (bVar1 != 0) {
      return (uint)this;
    }
    ((code *)*(gen_code32 *)(*this + 0xc))(this);
  }
  return 0;
}

/* ref: FUN_004dcc90 */
uint F_004dcc90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4dcc90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  byte bVar1;
  undefined * this;
  int * this_00;
  
  this = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                           (*(int * PTR32 *)(REFG(int, 0x1371270) + 8),0x34,0x10)));
  if (this != (undefined *)0x0) {
    this_00 = (int *)F_004d6830(this);
    if (this_00 != (int *)0x0) {
      this_00[2] = this_00[2] ^ (this_00[2] ^ param_3) & 0xf;
      bVar1 = F_004dbff0(this_00,param_1,param_2);
      if (bVar1 != 0) {
        return (uint)this_00;
      }
      ((code *)*(gen_code32 *)(*this_00 + 0xc))(this_00);
    }
  }
  return 0;
}

/* ref: FUN_004dccf0 */
uint F_004dccf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4dccf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  byte bVar1;
  undefined * this;
  int * this_00;
  
  this = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                           (*(int * PTR32 *)(REFG(int, 0x1371270) + 8),0x38,0x10)));
  if (this != (undefined *)0x0) {
    this_00 = (int *)F_004d69a0(this);
    if (this_00 != (int *)0x0) {
      this_00[2] = this_00[2] ^ (this_00[2] ^ param_4) & 0xf;
      bVar1 = F_004dc090(this_00,param_1,param_2,param_3);
      if (bVar1 != 0) {
        return (uint)this_00;
      }
      ((code *)*(gen_code32 *)(*this_00 + 0xc))(this_00);
    }
  }
  return 0;
}

/* ref: FUN_004dcd60 */
uint F_004dcd60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4dcd60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  byte bVar1;
  int * this;
  
  this = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                          (*(int * PTR32 *)(REFG(int, 0x1371270) + 8),0x2c,0x10)));
  if (this != (int *)0x0) {
    F_00b1b490(this);
    this[2] = 0;
    *this = (int)(*(undefined * PTR32 (*)[5])REFP(0x1096ab4));
    this[3] = 0;
    this[4] = 0;
    this[8] = 0;
    this[9] = 0;
    this[10] = 0;
    this[2] = this[2] ^ param_3 & 0xf;
    bVar1 = F_004dc130(this,param_1,param_2);
    if (bVar1 != 0) {
      return (uint)this;
    }
    ((code *)*(gen_code32 *)(*this + 0xc))(this);
  }
  return 0;
}

/* ref: FUN_004dcde0 */
uint F_004dcde0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4dcde0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  int * piVar2;
  byte bVar3;
  undefined * this;
  int * this_00;
  
  this = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                           (*(int * PTR32 *)(REFG(int, 0x1371270) + 8),0x20,0x10)));
  if ((this != (undefined *)0x0) && (this_00 = (int *)F_004d6f50(this), this_00 != (int *)0x0)) {
    this_00[2] = this_00[2] ^ (this_00[2] ^ param_2) & 0xf;
    if (param_1 != 0) {
      this_00[6] = param_1;
      iVar1 = *(int *)(REFG(int, 0x1370b90) + 0x38);
      if (((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 4)) {
        return (uint)this_00;
      }
      bVar3 = F_004da760(this_00);
      if (bVar3 != 0) {
        return (uint)this_00;
      }
      piVar2 = (int *)this_00[7];
      if (piVar2 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
        this_00[7] = 0;
      }
    }
    ((code *)*(gen_code32 *)(*this_00 + 0xc))(this_00);
  }
  return 0;
}

/* ref: FUN_004dce70 */
uint F_004dce70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4dce70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  uint * puVar1;
  int * piVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined * this_01;
  int iVar7;
  uint uVar8;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  uVar3 = *(uint *)((int)this + 0x28);
  uVar8 = 0;
  (*(uint * PTR32 *)(gen_frame + 0x50)) = param_1;
  (*(uint *)(gen_frame + 0x58)) = uVar3;
  (*(uint *)(gen_frame + 0x5c)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x44)) = *(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x11ac);
  this_00 = (undefined *)F_00a1abd0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x11ac));
  (*(undefined * PTR32 *)(gen_frame + 0x60)) = this_00;
  if (uVar3 != 0) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x64)) = (undefined4 *)0x0;
    do {
      puVar1 = ((uint *)(gen_frame + 0x68)) + uVar8;
      if (this_00 == (undefined *)0x0) {
        uVar3 = F_004da960(((undefined *)GEN_TOP((*(int *)((int)this + 4) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x64))))),puVar1);
      }
      else {
        uVar3 = F_004dc730(((undefined *)GEN_TOP((*(int *)((int)this + 4) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x64))))),(*(undefined * PTR32 *)(gen_frame + 0x60)),puVar1,
                             uVar8 + 1 & 7);
      }
      this_00 = (*(undefined * PTR32 *)(gen_frame + 0x60));
      (*(uint *)(gen_frame + 0x5c)) = (*(uint *)(gen_frame + 0x5c)) + *puVar1;
      (*(undefined4 * PTR32 *)(gen_frame + 0x64)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x64)) + 0x5b0);
      ((uint *)(gen_frame + 0x0))[uVar8] = uVar3;
      uVar8 = uVar8 + 1;
      uVar3 = (*(uint *)(gen_frame + 0x58));
    } while (uVar8 < (*(uint *)(gen_frame + 0x58)));
  }
  this_01 = (undefined *)0x0;
  if (this_00 != (undefined *)0x0) {
    F_00b1af80(this_00);
    this_01 = (*(undefined * PTR32 *)(gen_frame + 0x60));
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x4c)) = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xbc) + *(int *)((int)this + 0xb8) + (*(uint *)(gen_frame + 0x5c)) * -8)))
  ;
  (*(undefined4 * PTR32 *)(gen_frame + 0x64)) = (*(undefined4 * PTR32 *)(gen_frame + 0x4c));
  if ((*(uint *)(gen_frame + 0x5c)) != 0) {
    do {
      iVar7 = 0;
      uVar8 = 0xffffffff;
      uVar6 = 0;
      if (uVar3 != 0) {
        do {
          iVar4 = uVar3 - uVar6;
          if ((((uint *)(gen_frame + 0x68))[iVar4 + -1] != 0) && (*(uint *)((uint *)(gen_frame + 0x0))[iVar4 + -1] <= uVar8)) {
            iVar7 = iVar4 + -1;
            uVar8 = *(uint *)((uint *)(gen_frame + 0x0))[iVar4 + -1];
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar3);
      }
      piVar2 = (int *)((uint *)(gen_frame + 0x0))[iVar7];
      (*(uint * PTR32 *)(gen_frame + 0x40)) = ((uint *)(gen_frame + 0x68)) + iVar7;
      uVar3 = ((uint *)(gen_frame + 0x68))[iVar7];
      uVar8 = 0;
      (*(uint * PTR32 *)(gen_frame + 0x54)) = ((uint *)(gen_frame + 0x0)) + iVar7;
      do {
        uVar8 = uVar8 + 1;
        if (uVar8 == uVar3) break;
      } while (*piVar2 == piVar2[uVar8 * 2]);
      if (uVar8 != 0) {
        if (((*(undefined * PTR32 *)(gen_frame + 0x60)) == (undefined *)0x0) || (uVar8 < 0x401)) {
          if (0 < (int)uVar8) {
            (*(uint *)(gen_frame + 0x48)) = uVar8;
            puVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0x64));
            do {
              *puVar5 = *((undefined4 *)GEN_TOP((((int)piVar2 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0x64))) + (int)puVar5)));
              puVar5[1] = *((undefined4 *)GEN_TOP((((int)piVar2 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0x64))) + 4 + (int)puVar5)));
              puVar5 = puVar5 + 2;
              (*(uint *)(gen_frame + 0x48)) = (*(uint *)(gen_frame + 0x48)) - 1;
            } while ((*(uint *)(gen_frame + 0x48)) != 0);
          }
        }
        else {
          F_00a1a5d0((*(undefined * PTR32 *)(gen_frame + 0x60)),(*(undefined4 * PTR32 *)(gen_frame + 0x64)),piVar2,uVar8 * 8);
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0x64)) = (*(undefined4 * PTR32 *)(gen_frame + 0x64)) + uVar8 * 2;
        *(*(uint * PTR32 *)(gen_frame + 0x40)) = uVar3 - uVar8;
        *(*(uint * PTR32 *)(gen_frame + 0x54)) = (uint)(piVar2 + uVar8 * 2);
      }
      this_01 = (*(undefined * PTR32 *)(gen_frame + 0x60));
      uVar3 = (*(uint *)(gen_frame + 0x58));
    } while ((uint)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x64)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x4c))) >> 3) < (*(uint *)(gen_frame + 0x5c)));
  }
  uVar3 = (*(uint *)(gen_frame + 0x5c));
  puVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0x4c));
  if (this_01 == (undefined *)0x0) {
    *(*(uint * PTR32 *)(gen_frame + 0x50)) = (*(uint *)(gen_frame + 0x5c));
  }
  else {
    F_00b1af80(this_01);
    F_00a1ac10((*(undefined * PTR32 *)(gen_frame + 0x44)),(*(undefined * PTR32 *)(gen_frame + 0x60)));
    *(*(uint * PTR32 *)(gen_frame + 0x50)) = uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return (uint)puVar5;
}

/* ref: FUN_004dd050 */
uint F_004dd050(unsigned int gen_a0)
{
  GEN_ENTER(0x4dd050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  
  if (*(undefined * PTR32 *)((int)this + 0x230) != (undefined *)0x0) {
    F_004db7e0(*(undefined * PTR32 *)((int)this + 0x230));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x230);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)((int)this + 0x230) = 0;
    }
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x22c);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x22c) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x228);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x228) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x224);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x224) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x220);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x220) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x1c);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x18);
  uVar3 = 0;
  if (piVar2 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  return uVar3;
}

/* ref: FUN_004dd100 */
uint F_004dd100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4dd100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  uint * puVar5;
  byte bVar6;
  code * pcVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(int *)(gen_frame + 0x18)) = param_1;
  if (*(char *)((int)this + 0x20) != '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xa8))))(*(int * PTR32 *)((int)this + 0x1c));
    *(undefined1 *)((int)this + 0x20) = 0;
  }
  (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)((int)this + 0x24);
  uVar9 = 0;
  (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)(param_1 + 8);
  do {
    iVar2 = *(*(int * PTR32 *)(gen_frame + 0x1c));
    if (iVar2 == 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x94))))
                ((*(int * PTR32 *)(gen_frame + 0x1c)),*(int * PTR32 *)((int)this + 0x1c),uVar9,0);
    }
    else {
      piVar3 = (int *)(param_1 + 0x1c);
      if (*piVar3 == 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x94))))
                  (*(int * PTR32 *)((int)this + 0x1c),uVar9,*(undefined4 *)(iVar2 + 0x34));
      }
      else {
        param_1 = (*(int *)(gen_frame + 0x18));
        if (((*(uint *)(iVar2 + 0x2c) & 0x3c00000) == 0x800000) &&
           ((*(uint *)(iVar2 + 0x2c) & 0x100000) != 0)) {
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar2 + 0x30) + 0x48))))(*(int * PTR32 *)(iVar2 + 0x30),*piVar3,&(*(int * PTR32 *)(gen_frame + 0x14)));
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x94))))
                    (*(int * PTR32 *)((int)this + 0x1c),uVar9,(*(int * PTR32 *)(gen_frame + 0x14)));
          param_1 = (*(int *)(gen_frame + 0x18));
          if ((*(int * PTR32 *)(gen_frame + 0x14)) != (int *)0x0) {
            ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 8))((*(int * PTR32 *)(gen_frame + 0x14)));
            (*(int * PTR32 *)(gen_frame + 0x14)) = (int *)0x0;
            param_1 = (*(int *)(gen_frame + 0x18));
          }
        }
      }
    }
    *(*(int * PTR32 *)(gen_frame + 0x10)) = *(*(int * PTR32 *)(gen_frame + 0x1c));
    uVar9 = uVar9 + 1;
    (*(int * PTR32 *)(gen_frame + 0x1c)) = (*(int * PTR32 *)(gen_frame + 0x1c)) + 1;
    (*(int * PTR32 *)(gen_frame + 0x10)) = (*(int * PTR32 *)(gen_frame + 0x10)) + 1;
  } while (uVar9 < 4);
  piVar3 = *(int * PTR32 *)((int)this + 0x1c);
  if (*(int *)(param_1 + 0x18) == 0) {
    pcVar7 = *(gen_code32 *)(*piVar3 + 0x9c);
    uVar11 = 0;
  }
  else {
    uVar11 = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x18) + 0x34)));
    pcVar7 = *(gen_code32 *)(*piVar3 + 0x9c);
  }
  (*pcVar7)(piVar3,uVar11);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x18);
  uVar11 = *(undefined4 *)(param_1 + 0x1c);
  iVar2 = *(int *)((int)this + 0x24);
  *(undefined4 *)((int)this + 0x38) = uVar11;
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x20);
  (*(uint *)(gen_frame + 0x28)) = 0;
  (*(uint *)(gen_frame + 0x2c)) = 0;
  bVar6 = (byte)uVar11;
  uVar9 = *(uint *)(iVar2 + 0x18) >> (bVar6 & 0x1f);
  uVar10 = *(uint *)(iVar2 + 0x18) >> (bVar6 & 0x1f);
  uVar8 = *(uint *)(iVar2 + 0x1c) >> (bVar6 & 0x1f);
  (*(uint *)(gen_frame + 0xc)) = *(uint *)(iVar2 + 0x1c) >> (bVar6 & 0x1f);
  ((byte *)(gen_frame + 0x0))[0] = 0;
  ((byte *)(gen_frame + 0x0))[1] = 0;
  ((byte *)(gen_frame + 0x0))[2] = 0;
  ((byte *)(gen_frame + 0x0))[3] = 0;
  ((byte *)(gen_frame + 0x0))[4] = 0;
  ((byte *)(gen_frame + 0x0))[5] = 0;
  ((byte *)(gen_frame + 0x0))[6] = 0;
  ((byte *)(gen_frame + 0x0))[7] = 0;
  puVar1 = (undefined4 *)((int)this + 8);
  ((byte *)(gen_frame + 0x0))[8] = (char)uVar9;
  ((byte *)(gen_frame + 0x0))[9] = (char)(uVar9 >> 8);
  ((byte *)(gen_frame + 0x0))[10] = (char)(uVar9 >> 0x10);
  ((byte *)(gen_frame + 0x0))[0xb] = (char)(uVar9 >> 0x18);
  (*(uint *)(gen_frame + 0x30)) = uVar10;
  (*(uint *)(gen_frame + 0x34)) = uVar8;
  *puVar1 = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  puVar5 = &(*(uint *)(gen_frame + 0x30));
  if ((int)uVar9 <= (int)uVar10) {
    puVar5 = (uint *)(((byte *)(gen_frame + 0x0)) + 8);
  }
  uVar9 = *puVar5;
  *(uint *)((int)this + 0x10) = uVar9;
  puVar5 = &(*(uint *)(gen_frame + 0x34));
  if ((int)(*(uint *)(gen_frame + 0xc)) <= (int)uVar8) {
    puVar5 = &(*(uint *)(gen_frame + 0xc));
  }
  uVar4 = *puVar5;
  *(uint *)((int)this + 0x14) = uVar4;
  if ((int)uVar9 < 0) {
    *puVar1 = 0;
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  if ((int)uVar4 < 0) {
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 300))))(*(int * PTR32 *)((int)this + 0x1c),puVar1);
  (*(uint *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(uint *)(gen_frame + 0x28)) = uVar10;
  (*(uint *)(gen_frame + 0x2c)) = uVar8;
  (*(uint *)(gen_frame + 0x34)) = REFG(float, 0x1087f04);
  uVar9 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xbc))))(*(int * PTR32 *)((int)this + 0x1c),&(*(undefined4 *)(gen_frame + 0x20)));
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar9;
}

/* ref: FUN_004dd310 */
uint F_004dd310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4dd310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined * this_00;
  
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    F_004db500(this);
    if (*(char *)((int)this + 0x20) == '\0') {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xa4))))(*(int * PTR32 *)((int)this + 0x1c));
      *(undefined1 *)((int)this + 0x20) = 1;
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))(*(int * PTR32 *)((int)this + 0x1c),0x34,0);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))(*(int * PTR32 *)((int)this + 0x1c),0x38,8);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))(*(int * PTR32 *)((int)this + 0x1c),0x39,0);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))(*(int * PTR32 *)((int)this + 0x1c),0x3a,0xff);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))(*(int * PTR32 *)((int)this + 0x1c),0x3b,0xff);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))(*(int * PTR32 *)((int)this + 0x1c),0x35,1);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))(*(int * PTR32 *)((int)this + 0x1c),0x36,1);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))(*(int * PTR32 *)((int)this + 0x1c),0x37,1);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))(*(int * PTR32 *)((int)this + 0x1c),8,3);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))(*(int * PTR32 *)((int)this + 0x1c),0x16,3);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))(*(int * PTR32 *)((int)this + 0x1c),0xae,0);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))(*(int * PTR32 *)((int)this + 0x1c),0xc3,0);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xe4))))(*(int * PTR32 *)((int)this + 0x1c),0xaf,0);
    ((code *)*(gen_code32 *)(param_1 + 4))(*(undefined4 *)(param_1 + 8));
    F_004d61f0(this);
    uVar1 = F_004db500(this_00);
    return uVar1;
  }
  uVar1 = ((code *)*(gen_code32 *)(param_1 + 4))(*(undefined4 *)(param_1 + 8));
  return uVar1;
}

/* ref: FUN_004dd470 */
uint F_004dd470(unsigned int gen_a0)
{
  GEN_ENTER(0x4dd470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(char *)((int)this + 0x20) != '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xa8))))(*(int * PTR32 *)((int)this + 0x1c));
    *(undefined1 *)((int)this + 0x20) = 0;
  }
  uVar1 = F_004db9a0(*(undefined * PTR32 *)((int)this + 0x230));
  if (*(char *)((int)this + 0x20) == '\0') {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xa4))))(*(int * PTR32 *)((int)this + 0x1c));
    *(undefined1 *)((int)this + 0x20) = 1;
  }
  return uVar1;
}

/* ref: FUN_004dd4b0 */
byte F_004dd4b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4dd4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  
  bVar1 = F_004db880(*(undefined * PTR32 *)((int)this + 0x230),*(undefined4 *)(param_1 + 8),
                       *(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
  return bVar1;
}

/* ref: FUN_004dd4e0 */
uint F_004dd4e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4dd4e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  
  if (*(char *)((int)this + 0x20) == '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xa4))))(*(int * PTR32 *)((int)this + 0x1c));
    *(undefined1 *)((int)this + 0x20) = 1;
  }
  if (*(uint *)((int)this + 0x40) != (param_1[2] & 0x7ffffff)) {
    F_004d75c0(this,param_1[2] & 0x7ffffff);
  }
  if (*(uint *)((int)this + 0x44) != (*param_1 & 0x1f)) {
    F_004d7720(this,*param_1 & 0x1f);
  }
  if ((*(uint *)((int)this + 0x48) != (*param_1 & 0xfe000000)) ||
     (*(uint *)((int)this + 0x4c) != (param_1[1] & 0xfffffffc))) {
    F_004d7790(this,*param_1 & 0xfe000000,param_1[1] & 0xfffffffc);
  }
  if (*(uint *)((int)this + 0x50) != (param_1[3] & 0x7fffffff)) {
    F_004d7890(this,param_1[3] & 0x7fffffff);
  }
  F_004d79a0(this,param_1[7],param_1[9],param_1[8],param_1[4],param_2);
  uVar2 = param_1[6];
  if (*(uint *)((int)this + 0x54) != uVar2) {
    if (uVar2 != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x1a0))))
                (*(int * PTR32 *)((int)this + 0x1c),*(undefined4 *)(uVar2 + 0x24 + REFG(int, 0x1375a3c) * 4));
    }
    *(uint *)((int)this + 0x54) = uVar2;
  }
  uVar2 = param_1[10];
  uVar1 = param_1[4];
  if (*(uint *)((int)this + 0x5c) == 1) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x170))))
              (*(int * PTR32 *)((int)this + 0x1c),*(undefined4 *)(uVar1 + 0x2c));
    *(uint *)((int)this + 0x5c) = uVar1;
    F_004d7d30(this,uVar1,uVar2);
  }
  else {
    if (*(uint *)((int)this + 0x5c) != uVar1) {
      F_004d7da0(this,uVar1);
    }
    F_004d7c80(this,uVar1,uVar2);
  }
  F_004d7ee0(this,param_1[4],param_1[0xb]);
  F_004e3d40(this,param_1[5],param_1[0xc]);
  uVar2 = F_004d83c0(this,param_1[5],param_1[0xd]);
  return uVar2;
}

/* ref: FUN_004dd630 */
byte F_004dd630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4dd630u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  int iVar1;
  uint uVar2;
  undefined * this_00;
  int * this_01;
  
  *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) = (*(int * PTR32 *)&gen_args[1]);
  ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) + 0x14))))
                    (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))),0,0,&(*(int * PTR32 *)&gen_args[1]));
  if ((int)uVar2 < 0) {
    F_004da5a0((*(undefined * PTR32 *)&gen_args[0]));
    return 0;
  }
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                              (*(int * PTR32 *)(REFG(int, 0x1371270) + 8),0x48,0x10)));
  if ((this_00 != (undefined *)0x0) && (this_01 = (int *)F_004d6c80(this_00), this_01 != (int *)0x0)) {
    uVar2 = F_004d6d10(this_01,(*(int * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),8);
    if ((char)uVar2 == '\0') {
      ((code *)*(gen_code32 *)(*this_01 + 0xc))(this_01);
      if ((*(int * PTR32 *)&gen_args[1]) != (int *)0x0) {
        ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
        (*(int * PTR32 *)&gen_args[1]) = (int *)0x0;
      }
      F_004da5a0((*(undefined * PTR32 *)&gen_args[0]));
      return 0;
    }
    *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = this_01;
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = this_01[6];
    iVar1 = this_01[7];
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = (undefined1)(*(undefined4 *)&gen_args[3]);
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = iVar1;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = (*(undefined4 *)&gen_args[2]);
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = 1;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = (*(undefined4 *)&gen_args[4]);
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = 8;
    if ((*(int * PTR32 *)&gen_args[1]) != (int *)0x0) {
      ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(undefined4 *)&gen_args[4]),(*(int * PTR32 *)&gen_args[1]));
      (*(int * PTR32 *)&gen_args[1]) = (int *)0x0;
    }
    if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) != '\0') {
      uVar2 = F_004dca20(((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))),1,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))),
                           *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) | 0x200000,1);
      if (uVar2 == 0) {
        return 0;
      }
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = uVar2;
    }
    return 1;
  }
  if ((*(int * PTR32 *)&gen_args[1]) != (int *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
    (*(int * PTR32 *)&gen_args[1]) = (int *)0x0;
  }
  F_004da5a0((*(undefined * PTR32 *)&gen_args[0]));
  return 0;
}

/* ref: FUN_004dd770 */
uint F_004dd770(unsigned int gen_a0)
{
  GEN_ENTER(0x4dd770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  uint uVar2;
  undefined * this_00;
  int * piVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  F_00c48350(&(*(undefined4 *)(gen_frame + 0x4)),0,0x38);
  iVar5 = (int)this + 0x18;
  (*(int *)(gen_frame + 0x40)) = iVar5;
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)((int)this + 0x18);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)((int)this + 0x1c);
  (*(uint *)(gen_frame + 0xc)) = F_004d9f60(*(undefined4 *)((int)this + 0x20));
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 1;
  (*(undefined4 *)(gen_frame + 0x24)) = 1;
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)((int)this + 0x24);
  (*(undefined4 *)(gen_frame + 0x38)) = 0x80000000;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40) + 0x34))))
                    (*(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40),&(*(undefined4 *)(gen_frame + 0x4)),(undefined4 *)((int)this + 0x3c));
  if ((int)uVar2 < 0) goto LAB_004dd8a3;
  piVar3 = *(int * PTR32 *)((int)this + 0x3c);
  uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x14))(piVar3,0,0,&(*(int * PTR32 *)(gen_frame + 0x44)));
  if ((int)uVar2 < 0) goto LAB_004dd8a3;
  iVar1 = *(int *)((int)this + 0x34);
  if (iVar1 != 0) {
    iVar5 = *(int *)((int)this + 0x20);
    (*(int * PTR32 *)(gen_frame + 0x3c)) = (*(int * PTR32 *)(gen_frame + 0x44));
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x44)) + 0x30))((*(int * PTR32 *)(gen_frame + 0x44)),((undefined1 *)(gen_frame + 0x48)));
    *(undefined4 *)(iVar1 + 0x18) = (*(undefined4 *)(gen_frame + 0x60));
    *(undefined4 *)(iVar1 + 0x1c) = (*(undefined4 *)(gen_frame + 0x64));
    if (iVar5 != 0) {
      *(int *)(iVar1 + 0x28) = iVar5;
    }
    *(int * PTR32 *)(iVar1 + 0x34) = (*(int * PTR32 *)(gen_frame + 0x3c));
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x3c)) + 4))((*(int * PTR32 *)(gen_frame + 0x3c)));
    iVar5 = (*(int *)(gen_frame + 0x40));
LAB_004dd8b9: ;
    uVar4 = 0;
    if ((*(int * PTR32 *)(gen_frame + 0x44)) != (int *)0x0) {
      uVar4 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x44)) + 8))((*(int * PTR32 *)(gen_frame + 0x44)));
      (*(int * PTR32 *)(gen_frame + 0x44)) = (int *)0x0;
    }
    if (*(char *)((int)this + 0x28) != '\0') {
      if (*(undefined * PTR32 *)((int)this + 0x38) != (undefined *)0x0) {
        F_004da550(*(undefined * PTR32 *)((int)this + 0x38),iVar5,1,*(undefined4 *)((int)this + 0x2c));
        F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
        return CONCAT31(extraout_var,1);
      }
      uVar4 = F_004dca20(iVar5,1,*(undefined4 *)((int)this + 0x2c),
                           *(uint *)((int)this + 0x30) | 0x200000,1);
      uVar2 = 0;
      if (uVar4 == 0) goto LAB_004dd8a3;
      *(uint *)((int)this + 0x38) = uVar4;
    }
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return CONCAT31((int3)(uVar4 >> 8),1);
  }
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                              (*(int * PTR32 *)(REFG(int, 0x1371270) + 8),0x48,0x10)));
  if (this_00 != (undefined *)0x0) {
    piVar3 = (int *)F_004d6c80(this_00);
    if (piVar3 != (int *)0x0) {
      uVar2 = F_004d6d10(piVar3,(*(int * PTR32 *)(gen_frame + 0x44)),*(undefined4 *)((int)this + 0x20),8);
      if ((char)uVar2 != '\0') {
        *(int * PTR32 *)((int)this + 0x34) = piVar3;
        goto LAB_004dd8b9;
      }
      ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    }
  }
  uVar2 = 0;
  if ((*(int * PTR32 *)(gen_frame + 0x44)) != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x44)) + 8))((*(int * PTR32 *)(gen_frame + 0x44)));
  }
LAB_004dd8a3: ;
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar2 & 0xffffff00;
}

/* ref: FUN_004dd940 */
byte F_004dd940(unsigned int gen_a0)
{
  GEN_ENTER(0x4dd940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((*(byte *)((int)this + 0x24) & 0x4c) != 0) {
    return 1;
  }
  uVar1 = F_004dd770((undefined *)((int)this + -0xc));
  if ((char)uVar1 == '\0') {
    F_004da5a0((undefined *)((int)this + -0xc));
    return 0;
  }
  return 1;
}

/* ref: FUN_004dd970 */
byte F_004dd970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4dd970u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 uVar1;
  uint uVar2;
  
  *(undefined4 *)((int)this + 0x18) = *param_1;
  uVar1 = param_1[1];
  *(undefined1 *)((int)this + 0x28) = (undefined1)param_2;
  *(undefined4 *)((int)this + 0x1c) = uVar1;
  if (param_3 != 0) {
    *(int *)((int)this + 0x20) = param_3;
  }
  if (param_4 != 0) {
    *(int *)((int)this + 0x2c) = param_4;
  }
  uVar2 = F_004dd770(this);
  if ((char)uVar2 == '\0') {
    F_004da5a0(this);
    return 0;
  }
  return 1;
}

/* ref: FUN_004dd9c0 */
uint F_004dd9c0(unsigned int gen_a0)
{
  GEN_ENTER(0x4dd9c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined * this_00;
  byte bVar1;
  HWND pHVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 0x54) != 0) {
    *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + -1;
    return 1;
  }
  if ((*(char *)((int)this + 0x4c) != '\0') &&
     (pHVar2 = gen_imp_GetActiveWindow(), pHVar2 != *(HWND *)((int)this + 0x5c))) {
    return 1;
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x40) + 0xc))))(*(int * PTR32 *)((int)this + 0x40));
  if (uVar3 == 0x88760868) {
    return 1;
  }
  F_004db190(this);
  F_004db060(this,((undefined1 *)(gen_frame + 0x0)));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x40) + 0x40))))(*(int * PTR32 *)((int)this + 0x40),((undefined1 *)(gen_frame + 0x0)));
  if (-1 < (int)uVar3) {
    *(undefined4 *)((int)this + 0x38) = 4;
    if (*(char *)((int)this + 0x4c) == '\0') {
      this_00 = *(undefined * PTR32 *)((int)this + 0x2c);
      *(undefined4 *)((int)this_00 + 0x18) = *(undefined4 *)((int)this + 0x90);
      *(undefined4 *)((int)this_00 + 0x1c) = *(undefined4 *)((int)this + 0x94);
      *(undefined1 *)((int)this_00 + 0x28) = 1;
      uVar3 = F_004dd770(this_00);
      if ((char)uVar3 == '\0') {
        F_004da5a0(this_00);
        return 4;
      }
    }
    else {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x40) + 0x38))))
                        (*(int * PTR32 *)((int)this + 0x40),0,&(*(int * PTR32 *)(gen_frame + 0x38)));
      if ((int)uVar3 < 0) {
        return 4;
      }
      bVar1 = F_004da660(*(undefined * PTR32 *)((int)this + 0x2c),(*(int * PTR32 *)(gen_frame + 0x38)));
      if (bVar1 == 0) {
        if ((*(int * PTR32 *)(gen_frame + 0x38)) != (int *)0x0) {
          ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x38)) + 8))((*(int * PTR32 *)(gen_frame + 0x38)));
        }
        return 4;
      }
      if ((*(int * PTR32 *)(gen_frame + 0x38)) != (int *)0x0) {
        ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x38)) + 8))((*(int * PTR32 *)(gen_frame + 0x38)));
      }
    }
    bVar1 = F_004d6710();
    if (bVar1 == 0) {
      return 4;
    }
    F_004d93c0(*(undefined * PTR32 *)((int)this + 0x80));
    if ((*(char *)((int)this + 0x4e) != '\0') && (*(char *)((int)this + 0x4c) == '\0')) {
      *(undefined1 *)((int)this + 0x4e) = 0;
    }
    F_004d6140(this);
    *(undefined4 *)((int)this + 0x38) = 0;
    *(undefined1 *)((int)this + 0x31) = 1;
    *(undefined4 *)((int)this + 0x88) = 0;
    return 0;
  }
  if ((int)uVar3 < -0x7789f7d8) {
    if ((uVar3 != 0x88760827) && ((uVar3 == 0x8007000e || (uVar3 == 0x8876017c)))) {
      return 4;
    }
  }
  else {
    if (uVar3 == 0x88760868) {
      return 1;
    }
    if (uVar3 == 0x8876086c) {
      return 3;
    }
  }
  return 2;
}

/* ref: FUN_004ddb50 */
byte F_004ddb50(unsigned int gen_a0)
{
  GEN_ENTER(0x4ddb50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  
  if (*(char *)((int)this + 0x4c) == '\0') {
    this_00 = *(undefined * PTR32 *)((int)this + 0x2c);
    *(undefined4 *)((int)this_00 + 0x18) = *(undefined4 *)((int)this + 0x90);
    *(undefined4 *)((int)this_00 + 0x1c) = *(undefined4 *)((int)this + 0x94);
    *(undefined1 *)((int)this_00 + 0x28) = 1;
    uVar2 = F_004dd770(this_00);
    if ((char)uVar2 == '\0') {
      F_004da5a0(this_00);
      return 0;
    }
  }
  bVar1 = F_004d67a0();
  if (bVar1 == 0) {
    return 0;
  }
  F_004d93c0(*(undefined * PTR32 *)((int)this + 0x80));
  return 1;
}

/* ref: FUN_004ddbb0 */
uint F_004ddbb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ddbb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  F_004dd4e0(this,param_1 + 0x10,0);
  uVar1 = *(uint *)(param_1 + 0xc);
  switch((unsigned int)(uintptr_t)(*(int *)(param_1 + 4))) {
  case 2: ;
    uVar1 = uVar1 >> 1;
    break;
  case 4: ;
    uVar1 = uVar1 - 1;
    break;
  case 5: ;
    uVar1 = uVar1 / 3;
    break;
  case 6: ;
    uVar1 = uVar1 - 2;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x144))))
                    (*(int * PTR32 *)((int)this + 0x1c),
                     *(undefined4 *)(&REFG(undefined, 0x1096c78) + *(int *)(param_1 + 4) * 4),
                     *(undefined4 *)(param_1 + 8),uVar1);
  return uVar1;
}

/* ref: FUN_004ddc30 */
uint F_004ddc30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ddc30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  F_004dd4e0(this,param_1 + 0x1c,0);
  uVar1 = *(uint *)(param_1 + 0x18);
  switch((unsigned int)(uintptr_t)(*(int *)(param_1 + 4))) {
  case 2: ;
    uVar1 = uVar1 >> 1;
    break;
  case 4: ;
    uVar1 = uVar1 - 1;
    break;
  case 5: ;
    uVar1 = uVar1 / 3;
    break;
  case 6: ;
    uVar1 = uVar1 - 2;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x148))))
                    (*(int * PTR32 *)((int)this + 0x1c),
                     *(undefined4 *)(&REFG(undefined, 0x1096c94) + *(int *)(param_1 + 4) * 4),
                     *(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                     *(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),uVar1);
  return uVar1;
}

/* ref: FUN_004ddcb0 */
uint F_004ddcb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ddcb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  F_004dd4e0(this,param_1 + 0x20,*(undefined4 *)(param_1 + 0x1c));
  uVar1 = *(uint *)(param_1 + 0x18);
  switch((unsigned int)(uintptr_t)(*(int *)(param_1 + 4))) {
  case 2: ;
    uVar1 = uVar1 >> 1;
    break;
  case 4: ;
    uVar1 = uVar1 - 1;
    break;
  case 5: ;
    uVar1 = uVar1 / 3;
    break;
  case 6: ;
    uVar1 = uVar1 - 2;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x148))))
                    (*(int * PTR32 *)((int)this + 0x1c),
                     *(undefined4 *)(&REFG(undefined, 0x1096cb0) + *(int *)(param_1 + 4) * 4),
                     *(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                     *(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),uVar1);
  return uVar1;
}

/* ref: FUN_004ddd40 */
uint F_004ddd40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ddd40u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)(gen_frame + 0x54)) = (int *)0x0;
  ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) + 0x70))))
            (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),*((undefined4 *)GEN_TOP(((*(int * PTR32 *)&gen_args[1])[1] + 0x18))),
             *((undefined4 *)GEN_TOP(((*(int * PTR32 *)&gen_args[1])[1] + 0x1c))),0x4c4c554e,0,0,0,&(*(int * PTR32 *)(gen_frame + 0x54)),0);
  ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) + 0x94))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),0,(*(int * PTR32 *)(gen_frame + 0x54)));
  uVar3 = 1;
  do {
    ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) + 0x94))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),uVar3,0);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 4);
  ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) + 0x9c))))
            (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),*(undefined4 *)(piVar2[1] + 0x34));
  (*(undefined4 *)(gen_frame + 0x4c)) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x22c)));
  (*(int *)(gen_frame + 0x44)) = piVar2[5];
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x1375a5c) & 0xfffffff;
  (*(uint *)(gen_frame + 0x10)) = REFG(undefined4, 0x130236c) & 0xfffffffc;
  (*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x1302368) & 0xfe000000 | REFG(undefined4, 0x130235c) & 0x1d | 2;
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x1302370) & 0x7ffffffb;
  (*(uint *)(gen_frame + 0x14)) = REFG(undefined4, 0x1302350) & 0x7fffff;
  (*(undefined4 *)(gen_frame + 0x28)) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x228)));
  (*(undefined4 *)(gen_frame + 0x1c)) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x220)));
  (*(undefined4 *)(gen_frame + 0x20)) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x224)));
  (*(undefined4 *)(gen_frame + 0x50)) = 0x14;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = &(*(undefined4 *)(gen_frame + 0x4c));
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(int * PTR32 *)(gen_frame + 0x40)) = &(*(int *)(gen_frame + 0x44));
  F_004dd4e0((*(undefined * PTR32 *)&gen_args[0]),&(*(uint *)(gen_frame + 0xc)),0);
  ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) + 0x144))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),4,0,1);
  if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) != '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) + 0xa8))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))));
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = 0;
  }
  uVar3 = 0;
  (*(int * PTR32 *)(gen_frame + 0x58)) = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24)));
  do {
    iVar1 = *(*(int * PTR32 *)(gen_frame + 0x58));
    if (iVar1 == 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) + 0x94))))
                ((*(int * PTR32 *)(gen_frame + 0x58)),*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),uVar3,0);
    }
    else if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) == 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) + 0x94))))
                (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),uVar3,*(undefined4 *)(iVar1 + 0x34));
    }
    else if (((*(uint *)(iVar1 + 0x2c) & 0x3c00000) == 0x800000) &&
            ((*(uint *)(iVar1 + 0x2c) & 0x100000) != 0)) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar1 + 0x30) + 0x48))))
                (*(int * PTR32 *)(iVar1 + 0x30),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))),&(*(int * PTR32 *)&gen_args[1]));
      ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) + 0x94))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),uVar3,(*(int * PTR32 *)&gen_args[1]));
      if ((*(int * PTR32 *)&gen_args[1]) != (int *)0x0) {
        ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
        (*(int * PTR32 *)&gen_args[1]) = (int *)0x0;
      }
    }
    (*(int * PTR32 *)(gen_frame + 0x58)) = (*(int * PTR32 *)(gen_frame + 0x58)) + 1;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 4);
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c)));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) == 0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x9c))(piVar2,0);
  }
  else {
    ((code *)*(gen_code32 *)(*piVar2 + 0x9c))(piVar2,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) + 0x34))));
  }
  uVar3 = 0;
  if ((*(int * PTR32 *)(gen_frame + 0x54)) != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x54)) + 8))((*(int * PTR32 *)(gen_frame + 0x54)));
  }
  return uVar3;
}

/* ref: FUN_004ddf80 */
unsigned int F_004ddf80(unsigned int gen_a0)
{
  GEN_ENTER(0x4ddf80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  piVar5 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x20)));
  if (piVar5 != *(int * PTR32 *)((int)this + 0x20)) {
    do {
      piVar4 = (int *)piVar5[4];
      if (piVar4[1] == 1) {
        ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
        piVar4 = piVar5;
        if (*(char *)((int)piVar5 + 0x15) == '\0') {
          piVar4 = (int *)piVar5[2];
          if (*(char *)((int)piVar4 + 0x15) == '\0') {
            piVar2 = (int *)*piVar4;
            if (*(char *)(*piVar4 + 0x15) == '\0') {
              do {
                piVar4 = piVar2;
                piVar2 = (int *)*piVar4;
              } while (*(char *)((int)piVar2 + 0x15) == '\0');
              F_004e4af0((undefined *)((int)this + 0x1c),&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar5);
              piVar5 = piVar4;
              goto LAB_004de057;
            }
          }
          else {
            cVar1 = *(char *)(piVar5[1] + 0x15);
            piVar3 = (int *)piVar5[1];
            piVar2 = piVar5;
            while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
              cVar1 = *(char *)(piVar4[1] + 0x15);
              piVar3 = (int *)piVar4[1];
              piVar2 = piVar4;
            }
          }
        }
        F_004e4af0((undefined *)((int)this + 0x1c),&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar5);
        piVar5 = piVar4;
      }
      else if (*(char *)((int)piVar5 + 0x15) == '\0') {
        piVar4 = (int *)piVar5[2];
        if (*(char *)((int)piVar4 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar4 + 0x15);
          piVar5 = piVar4;
          piVar4 = (int *)*piVar4;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar4 + 0x15);
            piVar5 = piVar4;
            piVar4 = (int *)*piVar4;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x15);
          piVar2 = (int *)piVar5[1];
          piVar4 = piVar5;
          while ((piVar5 = piVar2, cVar1 == '\0' && (piVar4 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0x15);
            piVar2 = (int *)piVar5[1];
            piVar4 = piVar5;
          }
        }
      }
LAB_004de057: ;
    } while (piVar5 != *(int * PTR32 *)((int)this + 0x20));
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  return 0;
}

/* ref: FUN_004de070 */
byte F_004de070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x4de070u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint param_6 = (uint)gen_a6;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  *(undefined4 *)((int)this + 0x18) = *param_1;
  uVar1 = param_1[1];
  *(undefined4 *)((int)this + 0x20) = param_2;
  *(undefined4 *)((int)this + 0x2c) = param_5;
  *(undefined4 *)((int)this + 0x1c) = uVar1;
  *(undefined4 *)((int)this + 0x24) = param_3;
  *(undefined1 *)((int)this + 0x28) = (undefined1)param_4;
  *(uint *)((int)this + 0x30) = param_6;
  if (((((param_6 & 0x4c) != 0) || (iVar2 = *(int *)(REFG(int, 0x1370b90) + 0x38), iVar2 == 0)) ||
      (iVar2 == 1)) || (iVar2 == 4)) {
    uVar3 = F_004dd770(this);
    if ((char)uVar3 == '\0') {
      F_004da5a0(this);
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_004de0e0 */
uint F_004de0e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x4de0e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint param_7 = (uint)gen_a6;
  byte bVar1;
  undefined * this;
  int * this_00;
  
  this = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                           (*(int * PTR32 *)(REFG(int, 0x1371270) + 8),0x40,0x10)));
  if (this != (undefined *)0x0) {
    this_00 = (int *)F_004d6ec0(this);
    if (this_00 != (int *)0x0) {
      this_00[2] = this_00[2] ^ (this_00[2] ^ param_7) & 0xf;
      bVar1 = F_004de070(this_00,param_1,param_2,param_3,param_4,param_5,param_6);
      if (bVar1 != 0) {
        return (uint)this_00;
      }
      ((code *)*(gen_code32 *)(*this_00 + 0xc))(this_00);
    }
  }
  return 0;
}

/* ref: FUN_004de150 */
byte F_004de150(unsigned int gen_a0)
{
  GEN_ENTER(0x4de150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_004dd9c0(this);
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 0: ;
  case 1: ;
    return 1;
  case 2: ;
    F_00429940(1,1,0x1000000d,0xffffffff);
    return 0;
  case 3: ;
    bVar1 = F_004db220(this);
    if (bVar1 == 0) {
      F_00429940(1,1,0x1000003d,0xffffffff);
    }
    break;
  case 4: ;
    bVar1 = F_004db220(this);
    if (bVar1 == 0) {
      F_00429940(1,1,0x10000001,0xffffffff);
      return 1;
    }
    break;
  default: ;
    return 0;
  }
  return 1;
}

/* ref: FUN_004de1e0 */
uint F_004de1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4de1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (*(char *)((int)this + 0x20) != '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xa8))))(*(int * PTR32 *)((int)this + 0x1c));
    *(undefined1 *)((int)this + 0x20) = 0;
  }
  uVar2 = *((uint *)GEN_TOP((*(int *)(param_1 + 0x14) + 0x2c)));
  uVar1 = *((uint *)GEN_TOP((*(int *)(param_1 + 4) + 0x2c)));
  if ((uVar2 & uVar1 & 0x200000) != 0) {
    uVar2 = F_004ddd40(this,param_1);
    return uVar2;
  }
  if ((uVar1 & 0x100000) != 0) {
    uVar2 = F_004d89e0(this,param_1);
    return uVar2;
  }
  if (((uVar1 & 0x200000) == 0) && ((uVar2 & 0x300000) == 0)) {
    param_1 = F_004d8b40(param_1);
  }
  return param_1;
}

/* ref: FUN_004de260 */
uint F_004de260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4de260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  int * piVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  F_004d61f0(this);
  F_004db500(this_00);
  if (param_2 != 0) {
    piVar4 = (int *)(param_1 + 4);
    do {
      puVar1 = (undefined4 *)*piVar4;
      if (puVar1 != (undefined4 *)0x0) {
        switch((unsigned int)(uintptr_t)(*puVar1)) {
        case 0: ;
          F_004dd100(this,puVar1);
          break;
        case 1: ;
          F_004d7550(this,puVar1 + 1,GEN_TOF(gen_bits2f(puVar1[5])),GEN_TOF(gen_bits2f(puVar1[6])));
          break;
        case 2: ;
          F_004db440(this,puVar1);
          break;
        case 3: ;
          F_004d8900(this,puVar1);
          break;
        case 4: ;
          F_004ddbb0(this,puVar1);
          break;
        case 5: ;
          F_004ddc30(this,puVar1);
          break;
        case 6: ;
          F_004ddcb0(this,puVar1);
          break;
        case 7: ;
          F_004d89a0(this,puVar1);
          break;
        case 8: ;
          F_004de1e0(this,puVar1);
          break;
        case 9: ;
          F_004d8dd0(this,puVar1);
          break;
        case 10: ;
          F_004d8ef0(this,puVar1);
          break;
        case 0xb: ;
          F_004dd310(this,puVar1);
          break;
        case 0xc: ;
          if (*(int *)(puVar1[1] + 0x1c) != 0) {
            piVar2 = *(int * PTR32 *)(puVar1[1] + 0x1c);
            ((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,puVar1[2]);
          }
          break;
        case 0xd: ;
          F_004d8f50(puVar1);
          break;
        case 0xe: ;
          F_004db880(*(undefined * PTR32 *)((int)this + 0x230),puVar1[2],puVar1[1],puVar1[4]);
          break;
        case 0xf: ;
          F_004db4c0(this,puVar1);
        }
        F_004dbf10(*(undefined * PTR32 *)((int)this + 0x230));
      }
      piVar4 = piVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  if (*(char *)((int)this + 0x20) != '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xa8))))(*(int * PTR32 *)((int)this + 0x1c));
    *(undefined1 *)((int)this + 0x20) = 0;
  }
  F_004db9a0(*(undefined * PTR32 *)((int)this + 0x230));
  if (*(char *)((int)this + 0x20) == '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xa4))))(*(int * PTR32 *)((int)this + 0x1c));
    *(undefined1 *)((int)this + 0x20) = 1;
    if (*(char *)((int)this + 0x20) == '\0') goto LAB_004de3f9;
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xa8))))(*(int * PTR32 *)((int)this + 0x1c));
  *(undefined1 *)((int)this + 0x20) = 0;
LAB_004de3f9: ;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(REFG(int, 0x1370b90) + 0x90);
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(REFG(int, 0x1370b90) + 0x94);
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 300))))(*(int * PTR32 *)((int)this + 0x1c),&(*(undefined4 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar3;
}

/* ref: FUN_004de480 */
unsigned int F_004de480(unsigned int gen_a0)
{
  GEN_ENTER(0x4de480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  do {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
    piVar6 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x20)));
    if (piVar6 != *(int * PTR32 *)((int)this + 0x20)) {
      do {
        piVar5 = (int *)piVar6[4];
        if (piVar5[1] == 1) {
          ((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5);
          piVar5 = piVar6;
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            piVar5 = (int *)piVar6[2];
            if (*(char *)((int)piVar5 + 0x15) == '\0') {
              piVar2 = (int *)*piVar5;
              if (*(char *)(*piVar5 + 0x15) == '\0') {
                do {
                  piVar5 = piVar2;
                  piVar2 = (int *)*piVar5;
                } while (*(char *)((int)piVar2 + 0x15) == '\0');
                F_004e4af0((undefined *)((int)this + 0x1c),((undefined1 *)(gen_frame + 0x4)),piVar6);
                piVar6 = piVar5;
                goto LAB_004de567;
              }
            }
            else {
              cVar1 = *(char *)(piVar6[1] + 0x15);
              piVar4 = (int *)piVar6[1];
              piVar2 = piVar6;
              while ((piVar5 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar5[2]))) {
                cVar1 = *(char *)(piVar5[1] + 0x15);
                piVar4 = (int *)piVar5[1];
                piVar2 = piVar5;
              }
            }
          }
          F_004e4af0((undefined *)((int)this + 0x1c),((undefined1 *)(gen_frame + 0x4)),piVar6);
          piVar6 = piVar5;
        }
        else if (*(char *)((int)piVar6 + 0x15) == '\0') {
          piVar5 = (int *)piVar6[2];
          if (*(char *)((int)piVar5 + 0x15) == '\0') {
            cVar1 = *(char *)(*piVar5 + 0x15);
            piVar6 = piVar5;
            piVar5 = (int *)*piVar5;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar5 + 0x15);
              piVar6 = piVar5;
              piVar5 = (int *)*piVar5;
            }
          }
          else {
            cVar1 = *(char *)(piVar6[1] + 0x15);
            piVar2 = (int *)piVar6[1];
            piVar5 = piVar6;
            while ((piVar6 = piVar2, cVar1 == '\0' && (piVar5 == (int *)piVar6[2]))) {
              cVar1 = *(char *)(piVar6[1] + 0x15);
              piVar2 = (int *)piVar6[1];
              piVar5 = piVar6;
            }
          }
        }
LAB_004de567: ;
      } while (piVar6 != *(int * PTR32 *)((int)this + 0x20));
    }
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
    iVar3 = *(int *)((int)this + 0x24);
    if ((iVar3 == 0) || ((*(int *)(gen_frame + 0x8)) == iVar3)) {
      return 0;
    }
    (*(int *)(gen_frame + 0x8)) = iVar3;
  } while( true );
}

/* ref: FUN_004de5a0 */
uint F_004de5a0(unsigned int gen_a0)
{
  GEN_ENTER(0x4de5a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x2c) != (undefined *)0x0) {
    F_004e5780(*(undefined * PTR32 *)((int)this + 0x2c),3);
    *(undefined4 *)((int)this + 0x2c) = 0;
  }
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  uVar1 = F_004e5010((undefined *)((int)this + 4));
  return uVar1;
}

/* ref: Client::Graphics::Kernel::Device::RenderThread::vf5 */
unsigned int F_004de600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4de600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 RVar1;
  
  RVar1 = this[0x14];
  while ((RVar1 == (undefined1)0x0 &&
         (gen_imp_WaitForSingleObject(*(undefined4 *)(this + 0x18),0xffffffff),
         this[0x14] == (undefined1)0x0))) {
    if (*(int *)(REFG(int, 0x1370b90) + 0x38) == 1) {
      F_004de260(*(undefined * PTR32 *)(REFG(int, 0x1370b90) + 8),*(undefined4 *)(REFG(int, 0x1370b90) + 200),
                   *(undefined4 *)(REFG(int, 0x1370b90) + 0xcc));
    }
    else {
      F_004db680(*(undefined * PTR32 *)(REFG(int, 0x1370b90) + 8),*(undefined4 *)(REFG(int, 0x1370b90) + 200),
                   *(undefined4 *)(REFG(int, 0x1370b90) + 0xcc));
    }
    gen_imp_SetEvent(*(undefined4 *)(this + 0x1c));
    RVar1 = this[0x14];
  }
  return 0;
}

/* ref: FUN_004de670 */
byte F_004de670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4de670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  uint * puVar2;
  uint uVar3;
  
  uVar3 = -(uint)((int)((ulonglong)param_1 * 0x1c >> 0x20) != 0) | (uint)((ulonglong)param_1 * 0x1c)
  ;
  puVar1 = (uint *)F_00406bb0(-(uint)(0xfffffffb < uVar3) | uVar3 + 4,0,0);
  if (puVar1 == (uint *)0x0) {
    puVar2 = (uint *)0x0;
  }
  else {
    puVar2 = puVar1 + 1;
    *puVar1 = param_1;
    puVar1 = puVar2;
    uVar3 = param_1;
    while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
      puVar1[5] = 0xf;
      puVar1[4] = 0;
      *(undefined1 *)puVar1 = 0;
      puVar1 = puVar1 + 7;
    }
  }
  *(uint * PTR32 *)((int)this + 0x2c) = puVar2;
  *(undefined4 *)((int)this + 0x30) = 0;
  if (puVar2 == (uint *)0x0) {
    *(undefined4 *)((int)this + 0x34) = 0;
    F_004e5010((undefined *)((int)this + 4));
    return 0;
  }
  *(uint *)((int)this + 0x34) = param_1;
  return 1;
}

/* ref: FUN_004de750 */
unsigned int F_004de750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4de750u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  iVar1 = *(int *)((int)this + 0x7c);
  iVar2 = *(int *)((int)this + iVar1 * 0x10 + 0x4c);
  this_00 = (undefined *)((int)this + iVar1 * 0x10 + 0x4c);
  uVar3 = (*(int *)((int)this + iVar1 * 0x10 + 0x50) - iVar2) / 0xc;
  if ((uint)((*(int *)((int)this_00 + 8) - iVar2) / 0xc) <= uVar3) {
    F_004e5840(this_00,uVar3 * 2 + 2);
  }
  (*(undefined4 *)(gen_frame + 0x0)) = param_1;
  (*(undefined4 *)(gen_frame + 0x8)) = param_3;
  (*(undefined4 *)(gen_frame + 0x4)) = param_2;
  F_004e6210(this_00,&(*(undefined4 *)(gen_frame + 0x0)));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  return 0;
}

/* ref: FUN_004de7e0 */
uint F_004de7e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4de7e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  byte * pbVar1;
  char cVar2;
  int * piVar3;
  byte bVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x14)) = (LPCRITICAL_SECTION)((int)this + 4);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  uVar5 = 0;
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x811c9dc5;
  if (param_2 * 4 != 0) {
    do {
      pbVar1 = (byte *)(uVar5 + (int)param_1);
      uVar5 = uVar5 + 1;
      (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)((uint)*pbVar1 ^ (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x18))) * 0x1000193);
    } while (uVar5 < (uint)(param_2 * 4));
  }
  this_00 = (undefined *)((int)this + 0x1c);
  (*(int * PTR32 *)(gen_frame + 0x10)) = (*(int * PTR32 *)(gen_frame + 0x18));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this_00;
  F_004e41b0(this_00,&(*(int * PTR32 *)(gen_frame + 0x0)),&(*(int * PTR32 *)(gen_frame + 0x10)));
  do {
    if ((*(int * PTR32 *)(gen_frame + 0x0)) == (*(int * PTR32 *)(gen_frame + 0x4))) {
      piVar6 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                                (*(int * PTR32 *)(REFG(int, 0x1371270) + 8),0x24,0x10)));
      if (piVar6 != (int *)0x0) {
        F_00b1b490(piVar6);
        piVar6[2] = 0;
        *piVar6 = (int)(*(undefined * PTR32 (*)[5])REFP(0x1096acc));
        piVar6[3] = 0;
        piVar6[4] = 0;
        piVar6[5] = 0;
        piVar6[6] = 0;
        piVar6[7] = 0;
        piVar6[8] = 0;
        bVar4 = F_004d99c0(piVar6,param_1,param_2);
        if (bVar4 != 0) {
          ((code *)*(gen_code32 *)(*piVar6 + 8))(piVar6);
          (*(int * PTR32 *)(gen_frame + 0x0)) = (*(int * PTR32 *)(gen_frame + 0x18));
          (*(int * PTR32 *)(gen_frame + 0x4)) = piVar6;
          F_004e5d50(this_00,((undefined1 *)(gen_frame + 0x8)),&(*(int * PTR32 *)(gen_frame + 0x0)));
          gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x14)));
          return (uint)piVar6;
        }
        ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
      }
      gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x14)));
      return 0;
    }
    piVar6 = (int *)(*(int * PTR32 *)(gen_frame + 0x0))[4];
    if (param_2 == piVar6[4]) {
      uVar5 = param_2 * 4;
      piVar3 = param_1;
      if (piVar6[4] == 0) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = (int *)piVar6[3];
      }
      for (; 3 < uVar5; uVar5 = uVar5 - 4) {
        if (*piVar3 != *piVar7) goto LAB_004de8bd;
        piVar7 = piVar7 + 1;
        piVar3 = piVar3 + 1;
      }
      if ((uVar5 == 0) ||
         (((char)*piVar7 == (char)*piVar3 &&
          ((uVar5 < 2 ||
           ((*(char *)((int)piVar7 + 1) == *(char *)((int)piVar3 + 1) &&
            ((uVar5 < 3 || (*(char *)((int)piVar7 + 2) == *(char *)((int)piVar3 + 2))))))))))) {
        ((code *)*(gen_code32 *)(*piVar6 + 8))(piVar6);
        gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x14)));
        return (uint)piVar6;
      }
    }
LAB_004de8bd: ;
    this_00 = (*(undefined * PTR32 *)(gen_frame + 0xc));
    if (*(char *)((int)(*(int * PTR32 *)(gen_frame + 0x0)) + 0x15) == '\0') {
      piVar6 = (int *)(*(int * PTR32 *)(gen_frame + 0x0))[2];
      if (*(char *)((int)piVar6 + 0x15) == '\0') {
        cVar2 = *(char *)(*piVar6 + 0x15);
        (*(int * PTR32 *)(gen_frame + 0x0)) = piVar6;
        piVar6 = (int *)*piVar6;
        while (cVar2 == '\0') {
          cVar2 = *(char *)(*piVar6 + 0x15);
          (*(int * PTR32 *)(gen_frame + 0x0)) = piVar6;
          piVar6 = (int *)*piVar6;
        }
      }
      else {
        cVar2 = *(char *)((*(int * PTR32 *)(gen_frame + 0x0))[1] + 0x15);
        piVar3 = (int *)(*(int * PTR32 *)(gen_frame + 0x0))[1];
        piVar6 = (*(int * PTR32 *)(gen_frame + 0x0));
        while (((*(int * PTR32 *)(gen_frame + 0x0)) = piVar3, cVar2 == '\0' && (piVar6 == (int *)(*(int * PTR32 *)(gen_frame + 0x0))[2]))) {
          cVar2 = *(char *)((*(int * PTR32 *)(gen_frame + 0x0))[1] + 0x15);
          piVar3 = (int *)(*(int * PTR32 *)(gen_frame + 0x0))[1];
          piVar6 = (*(int * PTR32 *)(gen_frame + 0x0));
        }
      }
    }
  } while( true );
}

/* ref: FUN_004de9d0 */
uint F_004de9d0(unsigned int gen_a0)
{
  GEN_ENTER(0x4de9d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x1096cd4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1096cd0));
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
  *(undefined2 *)((int)this + 0x30) = 0x101;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined2 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 1;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = uVar1;
  *(undefined4 *)((int)this + 0x9c) = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0xa0) = 1;
  *(undefined4 *)((int)this + 0xa4) = 1;
  *(undefined1 *)((int)this + 0xa8) = 1;
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
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  return (uint)this;
}

/* ref: FUN_004deb40 */
uint F_004deb40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4deb40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_004de7e0(*(undefined * PTR32 *)((int)this + 0x14),param_1,param_2);
  return uVar1;
}

/* ref: FUN_004deb50 */
uint F_004deb50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4deb50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if (*param_2 != param_2[1]) {
    param_2[1] = *param_2;
  }
  piVar1 = *(int * PTR32 *)(REFG(int, 0x1370b90) + 0x3c);
  if (piVar1 == (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(gen_imp_Direct3DCreate9(0x20)));
    if (piVar1 == (int *)0x0) {
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return 0;
    }
  }
  else {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1,param_1,0x16);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1,param_1,0x16,uVar4,((byte *)(gen_frame + 0xc)));
      if (-1 < (int)uVar3) {
        ((byte *)(gen_frame + 0x20))[0] = ((byte *)(gen_frame + 0xc))[4];
        ((byte *)(gen_frame + 0x20))[1] = ((byte *)(gen_frame + 0xc))[5];
        ((byte *)(gen_frame + 0x20))[2] = ((byte *)(gen_frame + 0xc))[6];
        ((byte *)(gen_frame + 0x20))[3] = ((byte *)(gen_frame + 0xc))[7];
        ((byte *)(gen_frame + 0x24))[0] = ((byte *)(gen_frame + 0xc))[8];
        ((byte *)(gen_frame + 0x24))[1] = ((byte *)(gen_frame + 0xc))[9];
        ((byte *)(gen_frame + 0x24))[2] = ((byte *)(gen_frame + 0xc))[10];
        ((byte *)(gen_frame + 0x24))[3] = ((byte *)(gen_frame + 0xc))[0xb];
        ((byte *)(gen_frame + 0x1c))[0] = ((byte *)(gen_frame + 0xc))[0];
        ((byte *)(gen_frame + 0x1c))[1] = ((byte *)(gen_frame + 0xc))[1];
        ((byte *)(gen_frame + 0x1c))[2] = ((byte *)(gen_frame + 0xc))[2];
        ((byte *)(gen_frame + 0x1c))[3] = ((byte *)(gen_frame + 0xc))[3];
        F_004e6640(param_2,((byte *)(gen_frame + 0x1c)));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return CONCAT31((int3)(uVar2 >> 8),1);
}

/* ref: FUN_004dec40 */
byte F_004dec40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4dec40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  uint uVar7;
  undefined * this_00;
  int * piVar8;
  undefined4 * puVar9;
  undefined4 uVar10;
  
  piVar8 = *(int * PTR32 *)(REFG(int, 0x1370b90) + 0x3c);
  *(int * PTR32 *)((int)this + 0x18) = piVar8;
  ((code *)*(gen_code32 *)(*piVar8 + 4))(piVar8);
  piVar8 = *(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40);
  *(int * PTR32 *)((int)this + 0x1c) = piVar8;
  ((code *)*(gen_code32 *)(*piVar8 + 4))(piVar8);
  (*(undefined4 *)(gen_frame + 0x4)) = 0x230000;
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)&REFG(undefined, 0x8220c00);
  uVar7 = F_004de7e0(*(undefined * PTR32 *)(REFG(int, 0x1370b90) + 0x14),&(*(undefined4 *)(gen_frame + 0x4)),2);
  *(uint *)((int)this + 0x228) = uVar7;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                              (*(int * PTR32 *)(REFG(int, 0x1371270) + 8),0x34,0x10)));
  if (this_00 != (undefined *)0x0) {
    piVar8 = (int *)F_004d6830(this_00);
    if (piVar8 != (int *)0x0) {
      piVar8[2] = piVar8[2] & 0xfffffff0;
      bVar6 = F_004dbff0(piVar8,0x3c,4);
      if (bVar6 != 0) goto LAB_004decde;
      ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8);
    }
  }
  piVar8 = (int *)0x0;
LAB_004decde: ;
  *(int * PTR32 *)((int)this + 0x22c) = piVar8;
  if (piVar8[REFG(int, 0x1375a38) + 8] != 0) {
    uVar10 = 0;
    if ((*(byte *)(piVar8 + 7) & 1) != 0) {
      if (REFG(int, 0x1375a38) == piVar8[0xc]) {
        uVar10 = 0x1000;
      }
      else {
        piVar8[0xc] = REFG(int, 0x1375a38);
        uVar10 = 0x2000;
      }
    }
    uVar7 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)piVar8[REFG(int, 0x1375a38) + 8] + 0x2c))))
                      ((int *)piVar8[REFG(int, 0x1375a38) + 8],0,piVar8[6],&(*(undefined4 * PTR32 *)(gen_frame + 0x8)),uVar10);
    if ((int)uVar7 < 0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      LOCK();
      piVar8[0xb] = piVar8[0xb] + 1;
      UNLOCK();
      puVar9 = (*(undefined4 * PTR32 *)(gen_frame + 0x8));
    }
    uVar5 = REFG(float, 0x10928e4);
    uVar4 = REFG(float, 0x1090708);
    uVar3 = REFG(float, 0x1087f04);
    uVar10 = REFG(float, 0x1087ef8);
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = GEN_FLT_TO(*puVar9, REFG(float, 0x1090708));
      puVar9[1] = uVar4;
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[4] = uVar3;
      puVar9[5] = uVar10;
      puVar9[6] = uVar4;
      puVar9[7] = 0;
      puVar9[8] = uVar5;
      puVar9[9] = uVar3;
      puVar9[10] = uVar4;
      puVar9[0xb] = uVar10;
      puVar9[0xc] = 0;
      puVar9[0xd] = 0;
      puVar9[0xe] = uVar4;
      iVar2 = *(int *)((int)this + 0x22c);
      if (*(int *)(iVar2 + 0x20 + REFG(int, 0x1375a38) * 4) != 0) {
        piVar8 = (int *)(iVar2 + 0x2c);
        LOCK();
        iVar1 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          piVar8 = *(int * PTR32 *)(iVar2 + 0x20 + REFG(int, 0x1375a38) * 4);
          ((code *)*(gen_code32 *)(*piVar8 + 0x30))(REFG(int, 0x1375a38),piVar8);
        }
      }
    }
  }
  puVar9 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),0x254,0x10)));
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    *puVar9 = (*(undefined * PTR32 (*)[1])REFP(0x10969ec));
    puVar9[1] = 0;
    puVar9[2] = 0;
    puVar9[3] = 0;
    puVar9[4] = 0;
    puVar9[5] = 0;
    puVar9[6] = 0;
    puVar9[7] = 0;
    puVar9[8] = 0;
    puVar9[9] = 0;
    puVar9[10] = 0;
    puVar9[0xb] = 0;
    F_00429f90(puVar9 + 0x12);
    puVar9[0xc] = 2;
    puVar9[0xf] = 0;
    puVar9[0x10] = 0;
    puVar9[0x11] = 0;
  }
  *(undefined4 * PTR32 *)((int)this + 0x230) = puVar9;
  uVar7 = F_004db6f0(puVar9);
  if ((char)uVar7 == '\0') {
    puVar9 = *(undefined4 * PTR32 *)((int)this + 0x230);
    if (puVar9 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar9)(puVar9,1);
      *(undefined4 *)((int)this + 0x230) = 0;
    }
    return 0;
  }
  return 1;
}

/* ref: FUN_004deef0 */
uint F_004deef0(unsigned int gen_a0)
{
  GEN_ENTER(0x4deef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1096cdc));
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 1;
  return (uint)this;
}

/* ref: FUN_004def50 */
unsigned int F_004def50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4def50u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined * this_00;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)(*(undefined * PTR32 *)&gen_args[0]) + 4));
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7c)));
  iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar1 * 0x10 + 0x1c)));
  this_00 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar1 * 0x10 + 0x1c)));
  uVar3 = *(int *)((int)this_00 + 4) - iVar2 >> 2;
  if ((uint)(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar1 * 0x10 + 0x24))) - iVar2 >> 2) <= uVar3) {
    F_004e6090(this_00,uVar3 * 2 + 2);
  }
  F_004e6760(this_00,&(*(undefined4 *)&gen_args[1]));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)(*(undefined * PTR32 *)&gen_args[0]) + 4));
  return 0;
}

/* ref: FUN_004defb0 */
unsigned int F_004defb0(unsigned int gen_a0)
{
  GEN_ENTER(0x4defb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint local_8;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  iVar4 = *(int *)((int)this + 0x80);
  piVar1 = (int *)((int)this + iVar4 * 0x10 + 0x1c);
  uVar5 = *(int *)((int)this + iVar4 * 0x10 + 0x20) - *(int *)((int)this + iVar4 * 0x10 + 0x1c) >> 2
  ;
  local_8 = 0;
  if (uVar5 != 0) {
    do {
      piVar2 = *(int * PTR32 *)(*piVar1 + local_8 * 4);
      ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
      local_8 = local_8 + 1;
    } while (local_8 < uVar5);
  }
  F_004e66d0(piVar1,0);
  iVar4 = *(int *)((int)this + 0x80);
  piVar1 = (int *)((int)this + iVar4 * 0x10 + 0x4c);
  local_8 = (*(int *)((int)this + iVar4 * 0x10 + 0x50) - *(int *)((int)this + iVar4 * 0x10 + 0x4c))
            / 0xc;
  if (local_8 != 0) {
    iVar4 = 0;
    do {
      iVar3 = *piVar1;
      if ((code *)*(gen_code32 *)(iVar3 + iVar4) != (code *)0x0) {
        ((code *)*(gen_code32 *)(iVar3 + iVar4))
                  (*(undefined4 *)(iVar3 + 4 + iVar4),*(undefined4 *)(iVar3 + 8 + iVar4));
      }
      iVar4 = iVar4 + 0xc;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  F_004e6140(piVar1,0);
  *(int *)((int)this + 0x7c) = *(int *)((int)this + 0x80);
  *(uint *)((int)this + 0x80) = (*(int *)((int)this + 0x80) + 1U) % 3;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  return 0;
}

/* ref: FUN_004df0a0 */
uint F_004df0a0(unsigned int gen_a0)
{
  GEN_ENTER(0x4df0a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined * pvVar2;
  code * pcVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  LPCRITICAL_SECTION p_Var7;
  uint uVar8;
  LPCRITICAL_SECTION p_Var9;
  
  uVar6 = F_004dada0(this,&(*(LPCRITICAL_SECTION *)(gen_frame + 0x8)));
  F_004ddf80(*(undefined * PTR32 *)((int)this + 0x14));
  if (*(char *)((int)this + 0x30) != '\0') {
    if (*(int *)((int)this + 0x38) == 1) {
      gen_imp_WaitForSingleObject(*((HANDLE *)GEN_TOP((*(int *)((int)this + 0xc) + 0x1c))),0xffffffff);
      if (0 < REFG(int, 0x1375a60)) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x40) + 0xac))))
                  (*(int * PTR32 *)((int)this + 0x40),0,0,1,0,(undefined4)gen_fl2bits((float)(float10)1),0)
        ;
        REFG(int, 0x1375a60) = REFG(int, 0x1375a60) + -1;
      }
      F_004d72d0(this);
    }
    F_004daee0(this);
    F_004defb0(*(undefined * PTR32 *)((int)this + 0x10));
    if ((*(int *)((int)this + 0x38) == 2) || (*(int *)((int)this + 0x38) == 5)) {
      F_004db190(this);
    }
    if (*(char *)((int)this + 0x50) == '\0') goto LAB_004df329;
    *(undefined4 *)((int)this + 0x38) = 6;
    F_004db2c0(this);
    if (*(char *)((int)this + 0x4c) == '\0') {
      pvVar2 = *(undefined * PTR32 *)((int)this + 0x2c);
      *(undefined4 *)((int)pvVar2 + 0x18) = *(undefined4 *)((int)this + 0x90);
      *(undefined4 *)((int)pvVar2 + 0x1c) = *(undefined4 *)((int)this + 0x94);
      *(undefined1 *)((int)pvVar2 + 0x28) = 1;
      uVar8 = F_004dd770(pvVar2);
      if ((char)uVar8 != '\0') goto LAB_004df300;
      F_004da5a0(pvVar2);
    }
    else {
LAB_004df300: ;
      bVar5 = F_004d67a0();
      if (bVar5 != 0) {
        F_004d93c0(*(undefined * PTR32 *)((int)this + 0x80));
      }
    }
    *(undefined4 *)((int)this + 0x38) = 1;
    *(undefined1 *)((int)this + 0x50) = 0;
    REFG(int, 0x1375a60) = 10;
LAB_004df329: ;
    iVar1 = *(int *)((int)this + 0xb4);
    if (*(int *)((int)this + 0xbc) == iVar1) {
      *(int *)((int)this + 0xbc) = *(int *)((int)this + 0xb8) + iVar1;
    }
    else {
      *(int *)((int)this + 0xbc) = iVar1;
    }
    *(LPCRITICAL_SECTION *)((int)this + 0xcc) = (*(LPCRITICAL_SECTION *)(gen_frame + 0x8));
    *(uint *)((int)this + 200) = uVar6;
    REFG(int, 0x1375a3c) = REFG(undefined4, 0x1375a38);
    REFG(undefined4, 0x1375a38) = (REFG(undefined4, 0x1375a38) + 1) % 3;
    iVar1 = *(int *)((int)this + 0x18);
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(iVar1 + 4));
    p_Var7 = *(LPCRITICAL_SECTION *)(iVar1 + 0x20);
    iVar4 = *(int *)(iVar1 + 0x1c);
    p_Var9 = (LPCRITICAL_SECTION)0x0;
    (*(LPCRITICAL_SECTION *)(gen_frame + 0x8)) = p_Var7;
    if (p_Var7 != (LPCRITICAL_SECTION)0x0) {
      do {
        pcVar3 = *(gen_code32 *)(iVar4 + (int)p_Var9 * 8);
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(*(undefined4 *)(iVar4 + 4 + (int)p_Var9 * 8));
          p_Var7 = (*(LPCRITICAL_SECTION *)(gen_frame + 0x8));
        }
        p_Var9 = (LPCRITICAL_SECTION)((int)&(*(undefined * PTR32 *)((char *)(p_Var9))) + 1);
      } while (p_Var9 < p_Var7);
    }
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(iVar1 + 4));
    if (*(int *)((int)this + 0x38) == 0) {
      *(undefined4 *)((int)this + 0x38) = 1;
    }
    if (*(int *)((int)this + 0x38) == 1) {
      uVar6 = gen_imp_SetEvent(*((HANDLE *)GEN_TOP((*(int *)((int)this + 0xc) + 0x18))));
    }
    else {
      uVar6 = F_004db680(*(undefined * PTR32 *)((int)this + 8),*(undefined4 *)((int)this + 200),
                           *(undefined4 *)((int)this + 0xcc));
    }
    if (*(int *)((int)this + 0x38) == 3) {
      bVar5 = F_004de150(this);
      uVar6 = CONCAT31(extraout_var,bVar5);
      if (bVar5 == 0) {
        uVar6 = F_00429940(1,1,0x1000000f,0xffffffff);
      }
      REFG(int, 0x1375a60) = 0x1e;
    }
    return uVar6;
  }
  iVar1 = *(int *)((int)this + 0xb4);
  if (*(int *)((int)this + 0xbc) == iVar1) {
    *(int *)((int)this + 0xbc) = *(int *)((int)this + 0xb8) + iVar1;
  }
  else {
    *(int *)((int)this + 0xbc) = iVar1;
  }
  *(LPCRITICAL_SECTION *)((int)this + 0xcc) = (*(LPCRITICAL_SECTION *)(gen_frame + 0x8));
  *(uint *)((int)this + 200) = uVar6;
  REFG(int, 0x1375a3c) = REFG(undefined4, 0x1375a38);
  REFG(undefined4, 0x1375a38) = (REFG(undefined4, 0x1375a38) + 1) % 3;
  if (*(int *)((int)this + 0x38) == 0) {
    *(undefined4 *)((int)this + 0x38) = 1;
  }
  if (*(int *)((int)this + 0x38) == 1) {
    F_004de260(*(undefined * PTR32 *)((int)this + 8),*(undefined4 *)((int)this + 200),
                 *(undefined4 *)((int)this + 0xcc));
  }
  else {
    F_004db680(*(undefined * PTR32 *)((int)this + 8),*(undefined4 *)((int)this + 200),
                 *(undefined4 *)((int)this + 0xcc));
  }
  if (*(int *)((int)this + 0x38) == 1) {
    F_004d72d0(this);
  }
  F_004daee0(this);
  F_004defb0(*(undefined * PTR32 *)((int)this + 0x10));
  if ((*(int *)((int)this + 0x38) == 2) || (*(int *)((int)this + 0x38) == 5)) {
    F_004db190(this);
  }
  if (*(int *)((int)this + 0x38) == 3) {
    bVar5 = F_004de150(this);
    if (bVar5 == 0) {
      F_00429940(1,1,0x1000000f,0xffffffff);
    }
  }
  if (*(char *)((int)this + 0x50) == '\0') goto LAB_004df207;
  *(undefined4 *)((int)this + 0x38) = 6;
  F_004db2c0(this);
  if (*(char *)((int)this + 0x4c) == '\0') {
    pvVar2 = *(undefined * PTR32 *)((int)this + 0x2c);
    *(undefined4 *)((int)pvVar2 + 0x18) = *(undefined4 *)((int)this + 0x90);
    *(undefined4 *)((int)pvVar2 + 0x1c) = *(undefined4 *)((int)this + 0x94);
    *(undefined1 *)((int)pvVar2 + 0x28) = 1;
    uVar6 = F_004dd770(pvVar2);
    if ((char)uVar6 != '\0') goto LAB_004df1ec;
    F_004da5a0(pvVar2);
  }
  else {
LAB_004df1ec: ;
    bVar5 = F_004d67a0();
    if (bVar5 != 0) {
      F_004d93c0(*(undefined * PTR32 *)((int)this + 0x80));
    }
  }
  *(undefined4 *)((int)this + 0x38) = 1;
  *(undefined1 *)((int)this + 0x50) = 0;
LAB_004df207: ;
  iVar1 = *(int *)((int)this + 0x18);
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x8)) = (LPCRITICAL_SECTION)(iVar1 + 4);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(iVar1 + 4));
  uVar6 = *(uint *)(iVar1 + 0x20);
  iVar1 = *(int *)(iVar1 + 0x1c);
  uVar8 = 0;
  if (uVar6 != 0) {
    do {
      pcVar3 = *(gen_code32 *)(iVar1 + uVar8 * 8);
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(*(undefined4 *)(iVar1 + 4 + uVar8 * 8));
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar6);
  }
  gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x8)));
  return extraout_EAX;
}

/* ref: FUN_004df430 */
uint F_004df430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4df430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined4 * puVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  int * PTR32 * ppiVar5;
  DWORD DVar6;
  undefined * pvVar7;
  int * piVar8;
  uint * puVar9;
  uint uVar10;
  uint uVar11;
  float10 fVar12;
  float10 fVar13;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x68) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)(param_1 + 0x20);
  *(undefined1 *)((int)this + 0x4c) = *(undefined1 *)(param_1 + 0x10);
  *(undefined1 *)((int)this + 0x4d) = *(undefined1 *)(param_1 + 0x10);
  uVar3 = gen_imp_Direct3DCreate9(0x20);
  *(undefined4 *)((int)this + 0x3c) = uVar3;
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  (*(undefined4 *)(gen_frame + 0x40)) = uVar3;
  gen_imp_D3DPERF_SetOptions(1);
  *(undefined4 *)((int)this + 0x58) = uVar3;
  piVar8 = (int *)((int)this + 0x70);
  uVar4 = F_004deb50((*(undefined4 *)(gen_frame + 0x40)),piVar8);
  if ((char)uVar4 == '\0') {
LAB_004df6f8: ;
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return uVar4 & 0xffffff00;
  }
  uVar4 = (*(int *)((int)this + 0x74) - *piVar8) / 0xc;
  uVar10 = 0;
  if (uVar4 != 0) {
    piVar8 = (int *)*piVar8;
    do {
      if (((*(int *)(param_1 + 0x24) == *piVar8) && (*(int *)(param_1 + 0x28) == piVar8[1])) &&
         (*(int *)(param_1 + 0x2c) == piVar8[2])) {
        if ((int)uVar10 < 0) goto LAB_004df4df;
        goto LAB_004df52c;
      }
      uVar10 = uVar10 + 1;
      piVar8 = piVar8 + 3;
    } while (uVar10 < uVar4);
  }
  uVar10 = 0xffffffff;
LAB_004df4df: ;
  (*(int * PTR32 *)(gen_frame + 0x48)) = (int *)0x0;
  if (uVar4 != 0) {
    puVar9 = ((uint *)GEN_TOP((*(int *)((int)this + 0x70) + 4)));
    uVar11 = uVar4;
    do {
      if ((*(int * PTR32 *)(gen_frame + 0x48)) <= (int *)*puVar9) {
        (*(int * PTR32 *)(gen_frame + 0x48)) = (int *)*puVar9;
      }
      puVar9 = puVar9 + 3;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  uVar11 = 0;
  (*(int * PTR32 *)(gen_frame + 0x44)) = (int *)0x0;
  if (uVar4 != 0) {
    puVar9 = *(uint * PTR32 *)((int)this + 0x70);
    do {
      if (((*(int * PTR32 *)(gen_frame + 0x48)) == (int *)puVar9[1]) && ((*(int * PTR32 *)(gen_frame + 0x44)) <= (int *)*puVar9)) {
        (*(int * PTR32 *)(gen_frame + 0x44)) = (int *)*puVar9;
        uVar10 = uVar11;
      }
      uVar11 = uVar11 + 1;
      puVar9 = puVar9 + 3;
    } while (uVar11 < uVar4);
  }
LAB_004df52c: ;
  *(uint *)((int)this + 0x60) = uVar10;
  *(uint *)((int)this + 100) = uVar10;
  if (*(char *)((int)this + 0x4c) == '\0') {
    *(undefined4 *)((int)this + 0x90) = *(undefined4 *)((int)this + 0x68);
    *(undefined4 *)((int)this + 0x94) = *(undefined4 *)((int)this + 0x6c);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x70) + uVar10 * 0xc)));
    *(undefined4 *)((int)this + 0x94) =
         *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x70) + 4 + uVar10 * 0xc)));
  }
  fVar12 = (float10)*(int *)((int)this + 0x90);
  if (*(int *)((int)this + 0x90) < 0) {
    fVar12 = fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0x3c)) = (float)fVar12;
  fVar13 = (float10)*(int *)((int)this + 0x94);
  if (*(int *)((int)this + 0x94) < 0) {
    fVar13 = fVar13 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(int * PTR32 *)(gen_frame + 0x48)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar13)));
  (*(int * PTR32 *)(gen_frame + 0x44)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  ppiVar5 = &(*(int * PTR32 *)(gen_frame + 0x48));
  if (!((float10)1 < (float10)(float)fVar13)) {
    ppiVar5 = &(*(int * PTR32 *)(gen_frame + 0x44));
  }
  (*(int * PTR32 *)(gen_frame + 0x48)) = *ppiVar5;
  *(float *)((int)this + 0x98) = (float)((float10)(float)fVar12 / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppiVar5))));
  DVar6 = gen_imp_timeGetTime();
  *(DWORD *)((int)this + 0xac) = DVar6;
  *(undefined4 *)((int)this + 0xb0) = 0;
  F_004db060(this,((undefined1 *)(gen_frame + 0x4)));
  uVar3 = (*(undefined4 *)(gen_frame + 0x40));
  puVar1 = (undefined4 *)((int)this + 0x40);
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x3c) + 0x40))))
                    (*(int * PTR32 *)((int)this + 0x3c),(*(undefined4 *)(gen_frame + 0x40)),1,*(undefined4 *)((int)this + 0x5c),0x54,
                     ((undefined1 *)(gen_frame + 0x4)),puVar1);
  if ((int)uVar4 < 0) goto LAB_004df6f8;
  F_004d5f50(this,uVar3,1);
  if (*(int *)((int)this + 0x44) == 0x10de) {
    uVar4 = F_00b1b540();
    if (uVar4 == 0) {
      *(undefined1 *)((int)this + 0x51) = 1;
      ((undefined4 *)(gen_frame + 0x4c))[0] = 0x1001c;
      uVar4 = F_00b32cf0(*puVar1,((undefined4 *)(gen_frame + 0x4c)));
      if (uVar4 == 0) {
        *(undefined4 *)((int)this + 0x8c) = (*(undefined4 *)(gen_frame + 0x54));
      }
    }
  }
  uVar4 = F_00b1b420();
  if ((int)uVar4 < 1) {
    uVar4 = 1;
  }
  if (*(uint *)((int)this + 0x8c) < uVar4) {
    *(uint *)((int)this + 0x8c) = uVar4;
  }
  if (*(char *)((int)this + 0x4c) != '\0') {
    uVar4 = ((code *)*(gen_code32 *)(*(int *)*puVar1 + 0x38))((int *)*puVar1,0,&(*(int * PTR32 *)(gen_frame + 0x48)));
    if ((int)uVar4 < 0) goto LAB_004df6f8;
    pvVar7 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                               (*(int * PTR32 *)(REFG(int, 0x1371270) + 8),0x40,0x10)));
    if (pvVar7 == (undefined *)0x0) {
      pvVar7 = (undefined *)0x0;
    }
    else {
      pvVar7 = (undefined *)F_004d6ec0(pvVar7);
    }
    *(undefined * PTR32 *)((int)this + 0x2c) = pvVar7;
    if (pvVar7 != (undefined *)0x0) {
      bVar2 = F_004dd630(pvVar7,(*(int * PTR32 *)(gen_frame + 0x48)),0x1451,0,0x4250);
      if (bVar2 != 0) {
        uVar4 = 0;
        if ((*(int * PTR32 *)(gen_frame + 0x48)) != (int *)0x0) {
          uVar4 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x48)) + 8))((*(int * PTR32 *)(gen_frame + 0x48)));
        }
        goto LAB_004df787;
      }
    }
    uVar4 = 0;
    if ((*(int * PTR32 *)(gen_frame + 0x48)) != (int *)0x0) {
      uVar4 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x48)) + 8))((*(int * PTR32 *)(gen_frame + 0x48)));
    }
    goto LAB_004df6f8;
  }
  pvVar7 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                             (*(int * PTR32 *)(REFG(int, 0x1371270) + 8),0x40,0x10)));
  uVar4 = 0;
  if (pvVar7 == (undefined *)0x0) {
LAB_004df782: ;
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = (int *)F_004d6ec0(pvVar7);
    uVar4 = 0;
    if (piVar8 == (int *)0x0) goto LAB_004df782;
    piVar8[2] = piVar8[2] & 0xfffffff0;
    piVar8[6] = *(int *)((int)this + 0x90);
    piVar8[7] = *(int *)((int)this + 0x94);
    piVar8[8] = 0x1451;
    piVar8[9] = 1;
    *(undefined1 *)(piVar8 + 10) = 0;
    piVar8[0xb] = 0x4250;
    piVar8[0xc] = 8;
    uVar4 = F_004dd770(piVar8);
    if ((char)uVar4 == '\0') {
      F_004da5a0(piVar8);
      uVar4 = ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8);
      goto LAB_004df782;
    }
  }
  *(int * PTR32 *)((int)this + 0x2c) = piVar8;
LAB_004df787: ;
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return CONCAT31((int3)(uVar4 >> 8),1);
}

/* ref: FUN_004df7a0 */
unsigned int F_004df7a0(unsigned int gen_a0)
{
  GEN_ENTER(0x4df7a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = 0;
  do {
    iVar2 = 3;
    do {
      F_004defb0(this);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = (*(int *)((int)this + 0x70) - *(int *)((int)this + 0x6c)) / 0xc +
            (*(int *)((int)this + 0x40) - *(int *)((int)this + 0x3c) >> 2) +
            (*(int *)((int)this + 0x30) - *(int *)((int)this + 0x2c) >> 2) +
            (*(int *)((int)this + 0x50) - *(int *)((int)this + 0x4c)) / 0xc +
            (*(int *)((int)this + 0x20) - *(int *)((int)this + 0x1c) >> 2) +
            (*(int *)((int)this + 0x60) - *(int *)((int)this + 0x5c)) / 0xc;
  } while ((iVar2 != 0) && (bVar3 = iVar1 != iVar2, iVar1 = iVar2, bVar3));
  return 0;
}

/* ref: FUN_004df840 */
uint F_004df840(unsigned int gen_a0)
{
  GEN_ENTER(0x4df840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1096ce4));
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  *(undefined4 *)((int)this + 0x24) = 0;
  uVar1 = F_004296a0(0x18,0,0xc9);
  *(uint *)((int)this + 0x20) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x20) + 4))) = *(int *)((int)this + 0x20);
  *((int *)GEN_TOP((*(int *)((int)this + 0x20) + 8))) = *(int *)((int)this + 0x20);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x20) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x20) + 0x15))) = 1;
  return (uint)this;
}

/* ref: FUN_004df890 */
uint F_004df890(unsigned int gen_a0)
{
  GEN_ENTER(0x4df890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1096cec));
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar1 = F_004296a0(0x18,0,0xc9);
  *(uint *)((int)this + 8) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(int *)((int)this + 8);
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 8))) = *(int *)((int)this + 8);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x15))) = 1;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x14));
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  return (uint)this;
}

/* ref: FUN_004df8f0 */
uint F_004df8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4df8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  byte * pbVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int * piVar5;
  int * piVar6;
  byte * pbVar7;
  int iVar8;
  uint uVar9;
  byte * pbVar10;
  bool bVar11;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  (*(byte * PTR32 *)(gen_frame + 0x24)) = param_1;
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x14)) = (LPCRITICAL_SECTION)((int)this + 0x14);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x14));
  pbVar10 = param_1 + 1;
  pbVar7 = param_1;
  do {
    bVar2 = *pbVar7;
    pbVar7 = pbVar7 + 1;
  } while (bVar2 != 0);
  (*(int * PTR32 *)(gen_frame + 0x28)) = (int *)0x811c9dc5;
  uVar9 = 0;
  if (pbVar7 != pbVar10) {
    do {
      pbVar1 = param_1 + uVar9;
      uVar9 = uVar9 + 1;
      (*(int * PTR32 *)(gen_frame + 0x28)) = (int *)((uint)*pbVar1 ^ (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x28))) * 0x1000193);
      param_1 = (*(byte * PTR32 *)(gen_frame + 0x24));
    } while (uVar9 < (uint)((int)pbVar7 - (int)pbVar10));
  }
  (*(int * PTR32 *)(gen_frame + 0x20)) = (*(int * PTR32 *)(gen_frame + 0x28));
  F_004e4280((undefined *)((int)this + 4),&(*(int * PTR32 *)(gen_frame + 0x18)),&(*(int * PTR32 *)(gen_frame + 0x20)));
  uVar9 = ((uint *)(gen_frame + 0x2c))[0];
  if ((*(int * PTR32 *)(gen_frame + 0x18)) != (*(int * PTR32 *)(gen_frame + 0x1c))) {
    (*(int * PTR32 *)(gen_frame + 0x20)) = *(int * PTR32 *)((int)this + 0x2c);
    do {
      uVar4 = (*(int * PTR32 *)(gen_frame + 0x18))[4];
      pbVar10 = (byte *)((*(int * PTR32 *)(gen_frame + 0x20)) + uVar4 * 7);
      pbVar7 = (*(byte * PTR32 *)(gen_frame + 0x24));
      if (0xf < (uint)(*(int * PTR32 *)(gen_frame + 0x20))[uVar4 * 7 + 5]) {
        pbVar10 = *(byte * PTR32 *)pbVar10;
      }
      do {
        bVar2 = *pbVar7;
        bVar11 = bVar2 < *pbVar10;
        if (bVar2 != *pbVar10) {
LAB_004df9c2: ;
          iVar8 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
          goto LAB_004df9c7;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar7[1];
        bVar11 = bVar2 < pbVar10[1];
        if (bVar2 != pbVar10[1]) goto LAB_004df9c2;
        pbVar10 = pbVar10 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar2 != 0);
      iVar8 = 0;
LAB_004df9c7: ;
      if (iVar8 == 0) {
        gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x14)));
        F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
        return uVar4;
      }
      if (*(char *)((int)(*(int * PTR32 *)(gen_frame + 0x18)) + 0x15) == '\0') {
        piVar5 = (int *)(*(int * PTR32 *)(gen_frame + 0x18))[2];
        if (*(char *)((int)piVar5 + 0x15) == '\0') {
          cVar3 = *(char *)(*piVar5 + 0x15);
          (*(int * PTR32 *)(gen_frame + 0x18)) = piVar5;
          piVar5 = (int *)*piVar5;
          while (cVar3 == '\0') {
            cVar3 = *(char *)(*piVar5 + 0x15);
            (*(int * PTR32 *)(gen_frame + 0x18)) = piVar5;
            piVar5 = (int *)*piVar5;
          }
        }
        else {
          cVar3 = *(char *)((*(int * PTR32 *)(gen_frame + 0x18))[1] + 0x15);
          piVar6 = (int *)(*(int * PTR32 *)(gen_frame + 0x18))[1];
          piVar5 = (*(int * PTR32 *)(gen_frame + 0x18));
          while (((*(int * PTR32 *)(gen_frame + 0x18)) = piVar6, cVar3 == '\0' && (piVar5 == (int *)(*(int * PTR32 *)(gen_frame + 0x18))[2]))) {
            cVar3 = *(char *)((*(int * PTR32 *)(gen_frame + 0x18))[1] + 0x15);
            piVar6 = (int *)(*(int * PTR32 *)(gen_frame + 0x18))[1];
            piVar5 = (*(int * PTR32 *)(gen_frame + 0x18));
          }
        }
      }
      this = (*(undefined * PTR32 *)(gen_frame + 0x10));
    } while ((*(int * PTR32 *)(gen_frame + 0x18)) != (*(int * PTR32 *)(gen_frame + 0x1c)));
  }
  uVar4 = *(uint *)((int)this + 0x30);
  (*(uint *)(gen_frame + 0x40)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x2c))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x2c))[0] = uVar9 & 0xffffff00;
  pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
  do {
    bVar2 = *pbVar10;
    pbVar10 = pbVar10 + 1;
  } while (bVar2 != 0);
  F_004e5c20(((uint *)(gen_frame + 0x2c)),(*(byte * PTR32 *)(gen_frame + 0x24)),(int)pbVar10 - (int)((*(byte * PTR32 *)(gen_frame + 0x24)) + 1));
  F_004e54d0(((undefined *)GEN_TOP((*(int *)((int)this + 0x2c) + uVar4 * 0x1c))),((uint *)(gen_frame + 0x2c)),0,0xffffffff);
  if (0xf < (*(uint *)(gen_frame + 0x40))) {
    F_00429760(((uint *)(gen_frame + 0x2c))[0],(*(uint *)(gen_frame + 0x40)) + 1,0x32);
  }
  (*(int * PTR32 *)(gen_frame + 0x18)) = (*(int * PTR32 *)(gen_frame + 0x28));
  (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)uVar4;
  F_004e5df0((undefined *)((int)this + 4),((undefined1 *)(gen_frame + 0xc)),&(*(int * PTR32 *)(gen_frame + 0x18)));
  *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + 1;
  gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x14)));
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar4;
}

/* ref: FUN_004dfaf0 */
uint F_004dfaf0(unsigned int gen_a0)
{
  GEN_ENTER(0x4dfaf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  
  piVar1 = *(int * PTR32 *)((int)this + 0xc);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    gen_imp_SetEvent(*((HANDLE *)GEN_TOP((*(int *)((int)this + 0xc) + 0x18))));
    F_004cf020(*(undefined * PTR32 *)((int)this + 0xc));
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0xc);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0xc) = 0;
    }
  }
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    F_004dd050(*(undefined * PTR32 *)((int)this + 8));
    puVar2 = *(undefined4 * PTR32 *)((int)this + 8);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 8) = 0;
    }
  }
  piVar1 = *(int * PTR32 *)((int)this + 0xd4);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0xd4) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x2c);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x2c) = 0;
  }
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (puVar2 != (undefined4 *)0x0) {
    if (puVar2[-1] == 0) {
      F_00406b30(puVar2 + -1);
    }
    else {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,3);
    }
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  if (*(int *)((int)this + 0xb4) != 0) {
    F_00406810(*(int *)((int)this + 0xb4));
    *(undefined4 *)((int)this + 0xb4) = 0;
  }
  iVar3 = *(int *)((int)this + 0x20);
  if (iVar3 != 0) {
    if (*(undefined * PTR32 *)(iVar3 + 0x2c) != (undefined *)0x0) {
      F_004e5780(*(undefined * PTR32 *)(iVar3 + 0x2c),3);
      *(undefined4 *)(iVar3 + 0x2c) = 0;
    }
    *(undefined4 *)(iVar3 + 0x30) = 0;
    *(undefined4 *)(iVar3 + 0x34) = 0;
    F_004e5010((undefined *)(iVar3 + 4));
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x20);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x20) = 0;
    }
  }
  iVar3 = *(int *)((int)this + 0x1c);
  if (iVar3 != 0) {
    if (*(undefined * PTR32 *)(iVar3 + 0x2c) != (undefined *)0x0) {
      F_004e5780(*(undefined * PTR32 *)(iVar3 + 0x2c),3);
      *(undefined4 *)(iVar3 + 0x2c) = 0;
    }
    *(undefined4 *)(iVar3 + 0x30) = 0;
    *(undefined4 *)(iVar3 + 0x34) = 0;
    F_004e5010((undefined *)(iVar3 + 4));
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x1c);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x1c) = 0;
    }
  }
  iVar3 = *(int *)((int)this + 0x18);
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 0x1c) != 0) {
      F_00406b30(*(int *)(iVar3 + 0x1c));
      *(undefined4 *)(iVar3 + 0x1c) = 0;
    }
    *(undefined4 *)(iVar3 + 0x20) = 0;
    *(undefined4 *)(iVar3 + 0x24) = 0;
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x18);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x18) = 0;
    }
  }
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    F_004de480(*(undefined * PTR32 *)((int)this + 0x14));
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x14);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x14) = 0;
    }
  }
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    F_004df7a0(*(undefined * PTR32 *)((int)this + 0x10));
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x10);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x10) = 0;
    }
  }
  iVar3 = *(int *)((int)this + 0x84);
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 0x1c) != 0) {
      F_00406b30(*(int *)(iVar3 + 0x1c));
      *(undefined4 *)(iVar3 + 0x1c) = 0;
    }
    *(undefined4 *)(iVar3 + 0x20) = 0;
    *(undefined4 *)(iVar3 + 0x24) = 0;
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x84);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x84) = 0;
    }
  }
  iVar3 = *(int *)((int)this + 0x80);
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 0x1c) != 0) {
      F_00406b30(*(int *)(iVar3 + 0x1c));
      *(undefined4 *)(iVar3 + 0x1c) = 0;
    }
    *(undefined4 *)(iVar3 + 0x20) = 0;
    *(undefined4 *)(iVar3 + 0x24) = 0;
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x80);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x80) = 0;
    }
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x40);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)this + 0x40) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x3c);
  uVar4 = 0;
  if (piVar1 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)this + 0x3c) = 0;
  }
  return uVar4;
}

/* ref: FUN_004dfd30 */
byte F_004dfd30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4dfd30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  int * piVar2;
  uint uVar3;
  int * PTR32 * ppiVar4;
  undefined4 * puVar5;
  uint uVar6;
  uint * puVar7;
  undefined * pvVar8;
  uint * puVar9;
  
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
  uVar6 = *param_1;
  piVar2 = (int *)F_00406520();
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,uVar6,0x80);
  *(uint *)((int)this + 0xb4) = uVar3;
  *(uint *)((int)this + 0xbc) = uVar3;
  ppiVar4 = (int * PTR32 *)(param_1 + 1);
  *(uint *)((int)this + 0xb8) = uVar6 >> 1;
  (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0x10;
  if ((int *)0xf < *ppiVar4) {
    ppiVar4 = &(*(int * PTR32 *)(gen_frame + 0x4));
  }
  *(int * PTR32 *)((int)this + 0x24) = *ppiVar4;
  *(char *)((int)this + 0x30) = (char)param_1[2];
  REFG(undefined4, 0x1375a3c) = 2;
  REFG(undefined4, 0x1375a38) = 0;
  puVar5 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),0x38,0x10)));
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = (*(undefined * PTR32 (*)[1])REFP(0x1096cec));
    puVar5[3] = 0;
    uVar6 = F_004296a0(0x18,0,0xc9);
    puVar5[2] = uVar6;
    *(uint *)uVar6 = uVar6;
    *(undefined4 *)(puVar5[2] + 4) = puVar5[2];
    *(undefined4 *)(puVar5[2] + 8) = puVar5[2];
    *(undefined1 *)(puVar5[2] + 0x14) = 1;
    *(undefined1 *)(puVar5[2] + 0x15) = 1;
    gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)(puVar5 + 5));
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
  }
  *(undefined4 * PTR32 *)((int)this + 0x1c) = puVar5;
  if ((puVar5 != (undefined4 *)0x0) && (bVar1 = F_004de670(puVar5,0x80), bVar1 != 0)) {
    puVar5 = *(undefined4 * PTR32 *)((int)this + 0x24);
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      puVar7 = (uint *)F_00406a50(4);
    }
    else {
      (*(int * PTR32 *)(gen_frame + 0x4)) = *(int * PTR32 *)(REFG(int, 0x1371270) + 8);
      uVar6 = -(uint)((int)(ZEXT48(puVar5) * 0x5b0 >> 0x20) != 0) | (uint)(ZEXT48(puVar5) * 0x5b0);
      puVar7 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 8))
                                 ((*(int * PTR32 *)(gen_frame + 0x4)),-(uint)(0xfffffffb < uVar6) | uVar6 + 4,0x10)));
    }
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)0x0;
    }
    else {
      *puVar7 = (uint)puVar5;
      puVar7 = puVar7 + 1;
      (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x8)) - 1);
      puVar9 = puVar7;
      while (-1 < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x8))) {
        *puVar9 = (uint)(*(undefined * PTR32 (*)[1])REFP(0x1096a04));
        puVar9[3] = 0;
        puVar9[4] = 0;
        puVar9[5] = 0;
        puVar9[6] = 0;
        puVar9[7] = 0;
        puVar9[8] = 0;
        puVar9[9] = 0;
        puVar9[10] = 0;
        puVar9[0x14] = REFG(undefined4, 0x1302360);
        puVar9[0x16] = REFG(undefined4, 0x1302368);
        puVar9[0x17] = REFG(undefined4, 0x130236c);
        puVar9[0x18] = 0;
        F_00401500(puVar9 + 0xaa,8,0x60,((code *)REFP(0x4e1f20)));
        puVar9[0x16a] = 0x20003c0;
        puVar9 = puVar9 + 0x16c;
        (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x8)) - 1);
      }
    }
    *(uint * PTR32 *)((int)this + 4) = puVar7;
    if (puVar7 != (uint *)0x0) {
      puVar7 = (uint *)((int)this + 0x28);
      LOCK();
      uVar6 = *puVar7;
      *puVar7 = *puVar7 + 1;
      UNLOCK();
      if (uVar6 < *(uint *)((int)this + 0x24)) {
        *((uint *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8))) =
             uVar6 * 0x5b0 + *(int *)((int)this + 4);
      }
      puVar5 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                         (*(int * PTR32 *)(REFG(int, 0x1371270) + 8),0x84,0x10)));
      if (puVar5 == (undefined4 *)0x0) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)0x0;
      }
      else {
        *puVar5 = (*(undefined * PTR32 (*)[1])REFP(0x1096cdc));
        gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)(puVar5 + 1));
        puVar5[7] = 0;
        puVar5[8] = 0;
        puVar5[9] = 0;
        puVar5[0xb] = 0;
        puVar5[0xc] = 0;
        puVar5[0xd] = 0;
        puVar5[0xf] = 0;
        puVar5[0x10] = 0;
        puVar5[0x11] = 0;
        puVar5[0x13] = 0;
        puVar5[0x14] = 0;
        puVar5[0x15] = 0;
        puVar5[0x17] = 0;
        puVar5[0x18] = 0;
        puVar5[0x19] = 0;
        puVar5[0x1b] = 0;
        puVar5[0x1c] = 0;
        puVar5[0x1d] = 0;
        puVar5[0x1f] = 0;
        puVar5[0x20] = 1;
        (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar5;
      }
      *(undefined4 * PTR32 *)((int)this + 0x10) = (*(undefined4 * PTR32 *)(gen_frame + 0x8));
      if ((*(undefined4 * PTR32 *)(gen_frame + 0x8)) != (undefined4 *)0x0) {
        puVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 0x13;
        (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0x3;
        do {
          F_004e6090(puVar5 + -0xc,0x20);
          F_004e5840(puVar5,0x20);
          puVar5 = puVar5 + 4;
          (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x4)) + -1);
        } while ((*(int * PTR32 *)(gen_frame + 0x4)) != (int *)0x0);
        (*(undefined4 * PTR32 *)(gen_frame + 0x8))[0x1f] = 0;
        (*(undefined4 * PTR32 *)(gen_frame + 0x8))[0x20] = 1;
        pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                                   (*(int * PTR32 *)(REFG(int, 0x1371270) + 8),0x2c,0x10)));
        if (pvVar8 == (undefined *)0x0) {
          uVar6 = 0;
        }
        else {
          uVar6 = F_004df840(pvVar8);
        }
        *(uint *)((int)this + 0x14) = uVar6;
        if (uVar6 != 0) {
          puVar5 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                             (*(int * PTR32 *)(REFG(int, 0x1371270) + 8),0x28,0x10)));
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            *puVar5 = (*(undefined * PTR32 (*)[1])REFP(0x1096c74));
            gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)(puVar5 + 1));
            puVar5[7] = 0;
            puVar5[8] = 0;
            puVar5[9] = 0;
          }
          *(undefined4 * PTR32 *)((int)this + 0x18) = puVar5;
          if ((puVar5 != (undefined4 *)0x0) && (bVar1 = F_004d64d0(puVar5,4), bVar1 != 0)) {
            pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                                       (*(int * PTR32 *)(REFG(int, 0x1371270) + 8),0x38,0x10)));
            if (pvVar8 == (undefined *)0x0) {
              pvVar8 = (undefined *)0x0;
            }
            else {
              pvVar8 = (undefined *)F_004df890(pvVar8);
            }
            *(undefined * PTR32 *)((int)this + 0x20) = pvVar8;
            if ((pvVar8 != (undefined *)0x0) && (bVar1 = F_004de670(pvVar8,0x60), bVar1 != 0)) {
              pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                                         (*(int * PTR32 *)(REFG(int, 0x1371270) + 8),0x28,0x10)));
              if (pvVar8 == (undefined *)0x0) {
                pvVar8 = (undefined *)0x0;
              }
              else {
                pvVar8 = (undefined *)F_004d92f0(pvVar8);
              }
              *(undefined * PTR32 *)((int)this + 0x80) = pvVar8;
              if (pvVar8 == (undefined *)0x0) {
                return 0;
              }
              bVar1 = F_004d64d0(pvVar8,4);
              if (bVar1 == 0) {
                return 0;
              }
              pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                                         (*(int * PTR32 *)(REFG(int, 0x1371270) + 8),0x28,0x10)));
              if (pvVar8 == (undefined *)0x0) {
                pvVar8 = (undefined *)0x0;
              }
              else {
                pvVar8 = (undefined *)F_004d92f0(pvVar8);
              }
              *(undefined * PTR32 *)((int)this + 0x84) = pvVar8;
              if (pvVar8 == (undefined *)0x0) {
                return 0;
              }
              bVar1 = F_004d64d0(pvVar8,4);
              if (bVar1 == 0) {
                return 0;
              }
              uVar6 = F_004df430(this,param_1);
              if (((char)uVar6 != '\0') && (bVar1 = F_004da7c0(), bVar1 != 0)) {
                pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                                           (*(int * PTR32 *)(REFG(int, 0x1371270) + 8),0x238,0x10)));
                if (pvVar8 == (undefined *)0x0) {
                  pvVar8 = (undefined *)0x0;
                }
                else {
                  pvVar8 = (undefined *)F_004d74a0(pvVar8);
                }
                *(undefined * PTR32 *)((int)this + 8) = pvVar8;
                if ((pvVar8 != (undefined *)0x0) && (bVar1 = F_004dec40(pvVar8,param_1), bVar1 != 0)) {
                  pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))
                                             (*(int * PTR32 *)(REFG(int, 0x1371270) + 8),0x20,0x10)));
                  if (pvVar8 == (undefined *)0x0) {
                    pvVar8 = (undefined *)0x0;
                  }
                  else {
                    pvVar8 = (undefined *)F_004d92b0(pvVar8);
                  }
                  *(undefined * PTR32 *)((int)this + 0xc) = pvVar8;
                  if (pvVar8 != (undefined *)0x0) {
                    F_004cf9e0(pvVar8,0,0xffffffff,param_1[3],"RenderThread");
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
  F_004dfaf0(this);
  return 0;
}

/* ref: FUN_004e0250 */
uint F_004e0250(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0250u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x480];
  char * PTR32 * PTR32 * PTR32 * ppppcVar1;
  char cVar2;
  char * PTR32 * PTR32 * pppcVar3;
  int * piVar4;
  uint uVar5;
  char * pcVar6;
  char * PTR32 * PTR32 * PTR32 * ppppcVar7;
  uint uVar8;
  
  (*(uint *)(gen_frame + 0x478)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x47c);
  F_004e7090(param_1,&(*(uint *)(gen_frame + 0xc)),*param_1,param_1[1]);
  piVar4 = *(int * PTR32 *)(REFG(int, 0x1370b90) + 0x3c);
  if (piVar4 == (int *)0x0) {
    piVar4 = ((int *)GEN_TOP(gen_imp_Direct3DCreate9(0x20)));
    if (piVar4 == (int *)0x0) {
      F_00c47745((*(uint *)(gen_frame + 0x478)) ^ (uint)(uint)(gen_frame + 0x47c));
      return 0;
    }
  }
  else {
    ((code *)*(gen_code32 *)(*piVar4 + 4))(REFG(int, 0x1370b90),piVar4);
  }
  (*(uint *)(gen_frame + 0xc)) = ((code *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4);
  uVar8 = 0;
  if ((*(uint *)(gen_frame + 0xc)) != 0) {
    do {
      uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x14))(piVar4,uVar8,0,((undefined1 *)(gen_frame + 0x10)));
      pppcVar3 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x45c))[0];
      if (-1 < (int)uVar5) {
        pcVar6 = ((char *)(gen_frame + 0x210));
        (*(uint *)(gen_frame + 0x470)) = 0xf;
        (*(int *)(gen_frame + 0x46c)) = 0;
        (*(undefined1 *)((char *)&((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x45c))[0] + 0)) = 0;
        ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x45c))[0] = (char * PTR32 * PTR32 *)((uint)pppcVar3 & 0xffffff00);
        do {
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        F_004e5c20(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x45c)),((char *)(gen_frame + 0x210)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x210)) + 1));
        F_004e5a40(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x45c)),&REFG(undefined, 0x1096904),1);
        pcVar6 = ((char *)(gen_frame + 0x410));
        do {
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        F_004e5a40(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x45c)),((char *)(gen_frame + 0x410)),(int)pcVar6 - (int)(((char *)(gen_frame + 0x410)) + 1));
        F_004e5a40(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x45c)),&REFG(undefined, 0x1096908),1);
        ppppcVar7 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x45c))[0];
        if ((*(uint *)(gen_frame + 0x470)) < 0x10) {
          ppppcVar7 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x45c));
        }
        ppppcVar7 = (char * PTR32 * PTR32 * PTR32 *)((int)ppppcVar7 + (*(int *)(gen_frame + 0x46c)));
        ppppcVar1 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x45c))[0];
        if ((*(uint *)(gen_frame + 0x470)) < 0x10) {
          ppppcVar1 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x45c));
        }
        for (; ppppcVar1 != ppppcVar7; ppppcVar1 = (char * PTR32 * PTR32 * PTR32 *)((int)ppppcVar1 + 1)) {
          if (*(char *)ppppcVar1 == ' ') {
            *(char *)ppppcVar1 = '_';
          }
        }
        F_004e7380(param_1,((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x45c)));
        if (0xf < (*(uint *)(gen_frame + 0x470))) {
          F_00429760(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x45c))[0],(*(uint *)(gen_frame + 0x470)) + 1,0x32);
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < (*(uint *)(gen_frame + 0xc)));
  }
  uVar8 = ((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4);
  F_00c47745((*(uint *)(gen_frame + 0x478)) ^ (uint)(uint)(gen_frame + 0x47c));
  return CONCAT31((int3)(uVar8 >> 8),1);
}

/* ref: FUN_004e03e0 */
uint F_004e03e0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e03e0u, gen_a0, 0u, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint * puVar1;
  char cVar2;
  uint uVar3;
  char * pcVar4;
  uint uVar5;
  uint * puVar6;
  uint uVar7;
  uint * puVar8;
  
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(uint * PTR32 *)(gen_frame + 0x0)) = (uint *)0x0;
  (*(uint * PTR32 *)(gen_frame + 0x4)) = (uint *)0x0;
  (*(int *)(gen_frame + 0x8)) = 0;
  F_004e0250(&(*(uint * PTR32 *)(gen_frame + 0x0)));
  (*(uint *)(gen_frame + 0x10)) = ((int)(*(uint * PTR32 *)(gen_frame + 0x4)) - (int)(*(uint * PTR32 *)(gen_frame + 0x0))) / 0x1c;
  (*(uint *)(gen_frame + 0x18)) = 0;
  if ((*(uint *)(gen_frame + 0x10)) != 0) {
    puVar8 = (*(uint * PTR32 *)(gen_frame + 0x0)) + 4;
    do {
      pcVar4 = param_1;
      do {
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      uVar5 = (int)pcVar4 - (int)(param_1 + 1);
      uVar3 = *puVar8;
      uVar7 = uVar3;
      if (uVar5 <= uVar3) {
        uVar7 = uVar5;
      }
      if (puVar8[1] < 0x10) {
        puVar6 = puVar8 + -4;
      }
      else {
        puVar6 = (uint *)puVar8[-4];
      }
      uVar7 = F_0040d320(puVar6,param_1,uVar7);
      if (((uVar7 == 0) && (uVar5 <= uVar3)) && (uVar3 == uVar5)) {
        (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x18));
        break;
      }
      (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) + 1;
      puVar8 = puVar8 + 7;
    } while ((*(uint *)(gen_frame + 0x18)) < (*(uint *)(gen_frame + 0x10)));
  }
  puVar8 = (*(uint * PTR32 *)(gen_frame + 0x0));
  if ((*(uint * PTR32 *)(gen_frame + 0x0)) != (uint *)0x0) {
    if ((*(uint * PTR32 *)(gen_frame + 0x0)) != (*(uint * PTR32 *)(gen_frame + 0x4))) {
      puVar6 = (*(uint * PTR32 *)(gen_frame + 0x0)) + 5;
      do {
        if (0xf < *puVar6) {
          F_00429760(puVar6[-5],*puVar6 + 1,0x32);
        }
        *puVar6 = 0xf;
        puVar6[-1] = 0;
        *(undefined1 *)(puVar6 + -5) = 0;
        puVar1 = puVar6 + 2;
        puVar6 = puVar6 + 7;
      } while (puVar1 != (*(uint * PTR32 *)(gen_frame + 0x4)));
    }
    F_00429760(puVar8,(((*(int *)(gen_frame + 0x8)) - (int)puVar8) / 0x1c) * 0x1c,0xc9);
  }
  return (*(uint *)(gen_frame + 0x14));
}

/* ref: FUN_004e0540 */
uint F_004e0540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e0540u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_004e0580 */
uint F_004e0580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e0580u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_004e05d0 */
uint F_004e05d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e05d0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_004e0620 */
uint F_004e0620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e0620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)this + param_1 * 0x1c;
}

/* ref: FUN_004e0640 */
uint F_004e0640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e0640u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_004e0680 */
uint F_004e0680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e0680u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_004e06d0 */
uint F_004e06d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e06d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xc9);
  return uVar1;
}

/* ref: FUN_004e0700 */
uint F_004e0700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e0700u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_004e0750 */
uint F_004e0750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e0750u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,0xc9);
  return uVar1;
}

/* ref: FUN_004e07a0 */
uint F_004e07a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e07a0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_004e0890 */
uint F_004e0890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e0890u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004e08e0 */
uint F_004e08e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e08e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x1c,0xc9);
  return (uint)uVar1;
}

/* ref: FUN_004e0910 */
uint F_004e0910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e0910u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,0xc9);
  return uVar1;
}

/* ref: FUN_004e0950 */
uint F_004e0950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e0950u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,0xc9);
  return uVar1;
}

/* ref: FUN_004e0980 */
uint F_004e0980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e0980u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,0xc9);
  return uVar1;
}

/* ref: FUN_004e09b0 */
uint F_004e09b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e09b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x1c,param_2,0xc9);
  return uVar1;
}

/* ref: FUN_004e09f0 */
uint F_004e09f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e09f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004e0a00 */
uint F_004e0a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e0a00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004e0a10 */
uint F_004e0a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e0a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_004e0a30 */
uint F_004e0a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e0a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004e0a40 */
uint F_004e0a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e0a40u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0xc;
  return (uint)in_ecx;
}

/* ref: FUN_004e0a60 */
uint F_004e0a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e0a60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004e0af0 */
uint F_004e0af0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0af0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0b00 */
uint F_004e0b00(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0b00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0b10 */
uint F_004e0b10(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0b10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0b20 */
uint F_004e0b20(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0b20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0b30 */
uint F_004e0b30(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0b30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0b40 */
uint F_004e0b40(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0b40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0b50 */
uint F_004e0b50(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0b50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0b60 */
uint F_004e0b60(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0b60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0b90 */
unsigned int F_004e0b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e0b90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return 0;
}

/* ref: FUN_004e0bc0 */
unsigned int F_004e0bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e0bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_004e0be0 */
unsigned int F_004e0be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e0be0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return 0;
}

/* ref: FUN_004e0c10 */
unsigned int F_004e0c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4e0c10u, gen_a0, gen_a1, gen_a2, gen_a3);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  char * param_4 = (char *)(uintptr_t)gen_a3;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (*param_1 == *param_3) {
      *param_1 = *param_4;
    }
  }
  return 0;
}

/* ref: FUN_004e0c40 */
uint F_004e0c40(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0c40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0c50 */
uint F_004e0c50(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0c50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0c60 */
uint F_004e0c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e0c60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_004e0c80 */
uint F_004e0c80(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0c80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0c90 */
uint F_004e0c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e0c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_004e0cb0 */
uint F_004e0cb0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0cb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0cc0 */
uint F_004e0cc0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0cc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0cd0 */
uint F_004e0cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0cd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0cf0 */
uint F_004e0cf0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0cf0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0d00 */
uint F_004e0d00(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0d00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0d20 */
uint F_004e0d20(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0d20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0d30 */
uint F_004e0d30(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0d30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0d40 */
uint F_004e0d40(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0d40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0d50 */
uint F_004e0d50(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0d50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0d60 */
uint F_004e0d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e0d60u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_004e0d90 */
uint F_004e0d90(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0d90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0da0 */
uint F_004e0da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e0da0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_004e0dc0 */
uint F_004e0dc0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0dc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0dd0 */
uint F_004e0dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e0dd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_004e0e20 */
uint F_004e0e20(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0e20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0e30 */
uint F_004e0e30(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0e30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0e40 */
uint F_004e0e40(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0e40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0e70 */
uint F_004e0e70(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0e70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0e80 */
uint F_004e0e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e0e80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_004e0ea0 */
uint F_004e0ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e0ea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_004e0ed0 */
uint F_004e0ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e0ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_004e0ef0 */
uint F_004e0ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e0ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_004e0f10 */
uint F_004e0f10(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0f10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0f20 */
uint F_004e0f20(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0f20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0f30 */
uint F_004e0f30(unsigned int gen_a0)
{
  GEN_ENTER(0x4e0f30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e0f60 */
uint F_004e0f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e0f60u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte * pbVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = 0x811c9dc5;
  if (param_2 != 0) {
    do {
      pbVar1 = (byte *)(uVar3 + param_1);
      uVar3 = uVar3 + 1;
      uVar2 = uVar2 * 0x1000193 ^ (uint)*pbVar1;
    } while (uVar3 < param_2);
  }
  return uVar2;
}

/* ref: FUN_004e0fb0 */
unsigned int F_004e0fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e0fb0u, gen_a0, gen_a1, gen_a2, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *param_1 = *param_2 >> ((byte)param_3 & 0x1f);
  param_1[1] = param_2[1] >> ((byte)param_3 & 0x1f);
  return 0;
}

/* ref: FUN_004e0fd0 */
uint F_004e0fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e0fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  if ((*(int *)this == *param_1) && (*(int *)((int)this + 4) == param_1[1])) {
    return 1;
  }
  return 0;
}

/* ref: FUN_004e1000 */
uint F_004e1000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e1000u, gen_a0, gen_a1, gen_a2, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2 >> ((byte)param_3 & 0x1f);
  param_1[1] = uVar1 >> ((byte)param_3 & 0x1f);
  return (uint)param_1;
}

/* ref: FUN_004e1020 */
unsigned int F_004e1020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4e1020u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  return 0;
}

/* ref: FUN_004e1060 */
uint F_004e1060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e1060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 4);
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,param_2);
  return uVar2;
}

/* ref: FUN_004e1080 */
uint F_004e1080(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1080u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 in_EAX = 0;
  
  if ((short)param_1 == 0) {
    return CONCAT22((short)((uint)in_EAX >> 0x10),(short)param_1);
  }
  return (((param_1 & 0xffff) >> 10 & 0x1f) + 0x70) * 0x800000;
}

/* ref: FUN_004e10d0 */
uint F_004e10d0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e10d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  undefined4 in_EAX = 0;
  
  uVar1 = *(ushort *)this;
  if (uVar1 == 0) {
    return CONCAT22((short)((uint)in_EAX >> 0x10),uVar1);
  }
  return ((uVar1 >> 10 & 0x1f) + 0x70) * 0x800000;
}

/* ref: FUN_004e1160 */
uint F_004e1160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1160u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2 & 0x1f;
  return (uint)in_ecx;
}

/* ref: FUN_004e1180 */
unsigned int F_004e1180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x4e1180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  uint param_7 = (uint)gen_a7;
  uint param_8 = (uint)gen_a8;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 5) = (undefined1)param_3;
  *(undefined1 *)((int)this + 6) = (undefined1)param_4;
  *(undefined1 *)((int)this + 7) = (undefined1)param_5;
  *(undefined4 *)this = 0;
  *(uint *)this =
       ((param_2 & 7 | param_6 * 8) * 2 | (uint)((char)param_1 != '\0')) << 0x19 |
       *(uint *)this & 0x1ffffff;
  *(uint *)((int)this + 4) =
       ((param_8 & 7) * 8 | param_7 & 7) * 4 | *(uint *)((int)this + 4) & 0xffffff03;
  return 0;
}

/* ref: FUN_004e1200 */
uint F_004e1200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e1200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  *(uint *)this = param_1 & 0xfe000000;
  *(uint *)((int)this + 4) = param_2 & 0xfffffffc;
  return (uint)this;
}

/* ref: FUN_004e1220 */
uint F_004e1220(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)(uintptr_t)this) >> 5;
  if ((short)uVar1 == 0) {
    return uVar1;
  }
  return (((uVar1 & 0xffff) >> 10 & 0x1f) + 0x70) * 0x800000;
}

/* ref: FUN_004e1280 */
uint F_004e1280(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1280u, gen_a0, 0u, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  return (int)((*in_ecx >> 0x15) << 0x16) >> 0x16;
}

/* ref: FUN_004e12b0 */
uint F_004e12b0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e12b0u, gen_a0, 0u, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  return (uint)gen_fl2bits(((float)GEN_TOF((((float10)GEN_TOD(((int)((*in_ecx >> 10) << 0x16) >> 0x16))) *
                                  (float10)*(double *)&REFG(double, 0x10969f8)))));
}

/* ref: FUN_004e12e0 */
unsigned int F_004e12e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e12e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  if (0 < param_3) {
    iVar1 = param_2 - (int)param_1;
    do {
      *param_1 = *(undefined4 *)(iVar1 + (int)param_1);
      param_1[1] = *(undefined4 *)(iVar1 + 4 + (int)param_1);
      param_1 = param_1 + 2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return 0;
}

/* ref: FUN_004e1310 */
byte F_004e1310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  if ((uint)param_1[1] <= *(uint *)((int)this + 4) && *(int *)this == *param_1) {
    *(int *)((int)this + 4) = param_1[1];
    return 1;
  }
  return 0;
}

/* ref: FUN_004e1340 */
uint F_004e1340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_004e1390 */
uint F_004e1390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1390u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(uint *)(in_ecx + 8) ^ param_2) & 0xf;
  *(uint *)(in_ecx + 8) = *(uint *)(in_ecx + 8) ^ uVar1;
  return uVar1;
}

/* ref: FUN_004e13e0 */
uint F_004e13e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e13e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 0x18) >> ((byte)param_2 & 0x1f);
  uVar2 = *(uint *)((int)this + 0x1c) >> ((byte)param_2 & 0x1f);
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  if (uVar2 == 0) {
    uVar2 = 1;
  }
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_004e14d0 */
uint F_004e14d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e14d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x10) + param_2 * 8;
}

/* ref: FUN_004e14f0 */
uint F_004e14f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e14f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x18) + param_2 * 8;
}

/* ref: FUN_004e1540 */
byte F_004e1540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  return *(short *)this == *param_1 && (ushort)param_1[1] <= *(ushort *)((int)this + 2);
}

/* ref: FUN_004e1570 */
uint F_004e1570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_004e15f0 */
uint F_004e15f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e15f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (*(uint *)(in_ecx + 0x10) <= param_2) {
    return 0;
  }
  return *(int *)(in_ecx + 0xc) + param_2 * 4;
}

/* ref: FUN_004e16d0 */
uint F_004e16d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e16d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return (uint)((*(uint *)((int)this + 0x34) & 1 << ((byte)param_1 & 0x1f)) != 0);
}

/* ref: FUN_004e16f0 */
byte F_004e16f0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e16f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return (param_1 & 0x4c) == 0;
}

/* ref: FUN_004e1710 */
uint F_004e1710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1710u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  undefined4 in_EAX = 0;
  
  if ((param_2 & 0x4c) != 0) {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  iVar1 = *(int *)(in_ecx + 0x38);
  if (((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 4)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_004e1740 */
uint F_004e1740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e1740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint * puVar1;
  uint uVar2;
  
  puVar1 = (uint *)((int)this + param_1 * 4 + 0xd8);
  LOCK();
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + param_2;
  UNLOCK();
  return uVar2;
}

/* ref: FUN_004e1760 */
uint F_004e1760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  
  piVar1 = (int *)((int)this + 0xc4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + param_1;
  UNLOCK();
  if (*(uint *)((int)this + 0xb8) < (uint)(*(int *)((int)this + 0xc0) + *(int *)((int)this + 0xc4)))
  {
    return 0;
  }
  return ((*(int *)((int)this + 0xbc) - iVar2) - param_1) + *(uint *)((int)this + 0xb8);
}

/* ref: FUN_004e17b0 */
unsigned int F_004e17b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e17b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x1a0))))
              (*(int * PTR32 *)((int)this + 0x1c),*(undefined4 *)(param_1 + 0x24 + REFG(int, 0x1375a3c) * 4));
  }
  *(int *)((int)this + 0x54) = param_1;
  return 0;
}

/* ref: FUN_004e17e0 */
unsigned int F_004e17e0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e17e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(char *)((int)this + 0x20) == '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xa4))))(*(int * PTR32 *)((int)this + 0x1c));
    *(undefined1 *)((int)this + 0x20) = 1;
  }
  return 0;
}

/* ref: FUN_004e1800 */
unsigned int F_004e1800(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(char *)((int)this + 0x20) != '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0xa8))))(*(int * PTR32 *)((int)this + 0x1c));
    *(undefined1 *)((int)this + 0x20) = 0;
  }
  return 0;
}

/* ref: FUN_004e1880 */
uint F_004e1880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1880u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_004e18a0 */
uint F_004e18a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e18a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: Singleton_VDevice_Kernel_Graphics_Client_Graphics::vf0 */
uint F_004e18b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e18b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10969f4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004e18e0 */
uint F_004e18e0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e18e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  if (0xf < (uint)in_ecx[5]) {
    in_ecx = (undefined4 *)*in_ecx;
  }
  return (uint)in_ecx;
}

/* ref: FUN_004e1920 */
uint F_004e1920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1920u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2,0x32);
  return (uint)uVar1;
}

/* ref: FUN_004e1950 */
uint F_004e1950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1950u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,0xc9);
  return (uint)uVar1;
}

/* ref: FUN_004e1990 */
uint F_004e1990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1990u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xc9);
  return (uint)uVar1;
}

/* ref: FUN_004e19d0 */
uint F_004e19d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e19d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,0xc9);
  return (uint)uVar1;
}

/* ref: FUN_004e1a20 */
uint F_004e1a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1a20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,0xc9);
  return (uint)uVar1;
}

/* ref: FUN_004e1a70 */
uint F_004e1a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1a70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,0xc9);
  return (uint)uVar1;
}

/* ref: FUN_004e1ad0 */
byte F_004e1ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_004e1af0 */
byte F_004e1af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_004e1b10 */
byte F_004e1b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_004e1b30 */
byte F_004e1b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_004e1b60 */
uint F_004e1b60(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1b60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_004e1b70 */
uint F_004e1b70(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1b70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_004e1b80 */
uint F_004e1b80(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1b80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e1b90 */
uint F_004e1b90(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1b90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_004e1ba0 */
uint F_004e1ba0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1ba0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_004e1bb0 */
uint F_004e1bb0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1bb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_004e1bc0 */
uint F_004e1bc0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1bc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x15)));
  uVar2 = *(uint *)(param_1 + 8);
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x15);
    param_1 = uVar3;
  }
  return param_1;
}

/* ref: FUN_004e1be0 */
uint F_004e1be0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1be0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)(*param_1 + 0x15);
  piVar2 = (int *)*param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x15);
    param_1 = piVar3;
  }
  return (uint)param_1;
}

/* ref: FUN_004e1c00 */
uint F_004e1c00(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1c00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_004e1c10 */
uint F_004e1c10(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1c10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_004e1c20 */
uint F_004e1c20(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1c20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e1c30 */
uint F_004e1c30(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1c30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_004e1c40 */
uint F_004e1c40(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1c40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_004e1c50 */
uint F_004e1c50(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1c50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_004e1c60 */
uint F_004e1c60(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1c60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x15)));
  uVar2 = *(uint *)(param_1 + 8);
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x15);
    param_1 = uVar3;
  }
  return param_1;
}

/* ref: FUN_004e1c80 */
uint F_004e1c80(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1c80u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)(*param_1 + 0x15);
  piVar2 = (int *)*param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x15);
    param_1 = piVar3;
  }
  return (uint)param_1;
}

/* ref: FUN_004e1cc0 */
uint F_004e1cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1,param_2,0x32);
  return uVar1;
}

/* ref: FUN_004e1cf0 */
uint F_004e1cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e1cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004e1d00 */
unsigned int F_004e1d00(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1d00u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_004e1d50 */
uint F_004e1d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e1d50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004e1d60 */
unsigned int F_004e1d60(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1d60u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_004e1db0 */
uint F_004e1db0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1db0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e1dc0 */
uint F_004e1dc0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1dc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: Client::Graphics::Kernel::Notifier::vf1 */
unsigned int F_004e1e60(void)
{
  GEN_ENTER(0x4e1e60u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Graphics::Kernel::Notifier::vf2 */
byte F_004e1e70(void)
{
  GEN_ENTER(0x4e1e70u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_004e1e80 */
uint F_004e1e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004e2be0((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_004e1e90 */
uint F_004e1e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004e2c70((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_004e1ee0 */
uint F_004e1ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004e2a30((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_004e1ef0 */
uint F_004e1ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004e2ac0((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_004e1f00 */
uint F_004e1f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004e2d60((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_004e1f20 */
uint F_004e1f20(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1f20u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  return in_ecx;
}

/* ref: FUN_004e1f30 */
unsigned int F_004e1f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(uint *)((int)this + 8) = param_1[2] & 0x7ffffff;
  *(uint *)((int)this + 0xc) = param_1[3] & 0x7fffffff;
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  return 0;
}

/* ref: FUN_004e1f80 */
uint F_004e1f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e1f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(uint *)((int)this + 4) = param_1[1] & 0xfffffff;
  return (uint)this;
}

/* ref: FUN_004e1fe0 */
unsigned int F_004e1fe0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e1fe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[6])REFP(0x1096c3c));
  gen_imp_CloseHandle(*(undefined4 *)((int)this + 0x1c));
  gen_imp_CloseHandle(*(undefined4 *)((int)this + 0x18));
  F_004cf880(this);
  return 0;
}

/* ref: FUN_004e2010 */
unsigned int F_004e2010(unsigned int gen_a0)
{
  GEN_ENTER(0x4e2010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x1096c58));
  gen_imp_CloseHandle(*(undefined4 *)((int)this + 0x1c));
  gen_imp_CloseHandle(*(undefined4 *)((int)this + 0x18));
  F_004cf880(this);
  return 0;
}

/* ref: FUN_004e2060 */
uint F_004e2060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_004e2080 */
uint F_004e2080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_004e2110 */
uint F_004e2110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e2110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004e2130 */
uint F_004e2130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0xc;
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

/* ref: FUN_004e2170 */
uint F_004e2170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2170u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_004e21a0 */
uint F_004e21a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e21a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0xc;
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

/* ref: FUN_004e21e0 */
uint F_004e21e0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e21e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_004e21f0 */
uint F_004e21f0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e21f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_004e2230 */
uint F_004e2230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x1c;
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

/* ref: FUN_004e2270 */
uint F_004e2270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e2270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004e2280 */
uint F_004e2280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e2280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004e2290 */
uint F_004e2290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_004e22b0 */
uint F_004e22b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e22b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004e22c0 */
uint F_004e22c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e22c0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0xc;
  return (uint)in_ecx;
}

/* ref: FUN_004e22e0 */
uint F_004e22e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e22e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004e22f0 */
byte F_004e22f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e22f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * pvVar1;
  
  if (param_1 != (undefined *)0x0) {
    pvVar1 = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
      pvVar1 = *(undefined * PTR32 *)this;
    }
    if (pvVar1 <= param_1) {
      pvVar1 = this;
      if (0xf < *(uint *)((int)this + 0x14)) {
        pvVar1 = *(undefined * PTR32 *)this;
      }
      if (param_1 < ((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + (int)pvVar1)))) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_004e2370 */
byte F_004e2370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_004e2390 */
byte F_004e2390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_004e23b0 */
byte F_004e23b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e23b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_004e23d0 */
byte F_004e23d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e23d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_004e23f0 */
uint F_004e23f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e23f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_004e2410 */
uint F_004e2410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e2410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_004e2430 */
unsigned int F_004e2430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e2430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
  }
  return 0;
}

/* ref: FUN_004e2450 */
unsigned int F_004e2450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e2450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
  }
  return 0;
}

/* ref: FUN_004e2470 */
unsigned int F_004e2470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e2470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_004e2490 */
unsigned int F_004e2490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e2490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_004e24b0 */
unsigned int F_004e24b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e24b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
  }
  return 0;
}

/* ref: FUN_004e24d0 */
unsigned int F_004e24d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e24d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
  }
  return 0;
}

/* ref: FUN_004e24f0 */
uint F_004e24f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e24f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_004e2520 */
uint F_004e2520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e2520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_004e2540 */
uint F_004e2540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e2540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_004e2560 */
uint F_004e2560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4e2560u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  uint uVar1;
  
  if (*(uint *)((int)this + 0x10) < param_1) {
                    
    F_00c457e7("invalid string position");
  }
  uVar1 = *(uint *)((int)this + 0x10) - param_1;
  if (uVar1 < param_2) {
    param_2 = uVar1;
  }
  uVar1 = param_2;
  if (param_4 <= param_2) {
    uVar1 = param_4;
  }
  if (0xf < *(uint *)((int)this + 0x14)) {
    this = *(undefined * PTR32 *)this;
  }
  uVar1 = F_0040d320((int)this + param_1,param_3,uVar1);
  if (uVar1 == 0) {
    if (param_2 < param_4) {
      return 0xffffffff;
    }
    uVar1 = (uint)(param_2 != param_4);
  }
  return uVar1;
}

/* ref: FUN_004e25d0 */
uint F_004e25d0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e25d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004e25e0 */
unsigned int F_004e25e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e25e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    param_3 = param_3 + 3;
  }
  return 0;
}

/* ref: FUN_004e2610 */
unsigned int F_004e2610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e2610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    param_3 = param_3 + 3;
  }
  return 0;
}

/* ref: FUN_004e2660 */
uint F_004e2660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e2660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_004e2680 */
uint F_004e2680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e2680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_004e26a0 */
unsigned int F_004e26a0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e26a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x15) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return 0;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x15) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x15) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x15) == '\0');
      *(int *)this = iVar4;
      return 0;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x15);
    }
    if (*(char *)(*(int *)this + 0x15) != '\0') {
      return 0;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return 0;
}

/* ref: FUN_004e2700 */
unsigned int F_004e2700(unsigned int gen_a0)
{
  GEN_ENTER(0x4e2700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x15) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return 0;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x15) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x15) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x15) == '\0');
      *(int *)this = iVar4;
      return 0;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x15);
    }
    if (*(char *)(*(int *)this + 0x15) != '\0') {
      return 0;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return 0;
}

/* ref: FUN_004e2760 */
unsigned int F_004e2760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e2760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
  }
  return 0;
}

/* ref: FUN_004e2780 */
uint F_004e2780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e2780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_004e27a0 */
uint F_004e27a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e27a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_004e2820 */
unsigned int F_004e2820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e2820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_004e2850 */
unsigned int F_004e2850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e2850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
  }
  return 0;
}

/* ref: FUN_004e2870 */
uint F_004e2870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_004e2890 */
uint F_004e2890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_004e28b0 */
unsigned int F_004e28b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e28b0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  piVar1 = param_2;
  if (*param_2 <= *param_3) {
    piVar1 = param_3;
  }
  *param_1 = *piVar1;
  piVar1 = param_3 + 1;
  if (*piVar1 < param_2[1]) {
    piVar1 = param_2 + 1;
  }
  param_1[1] = *piVar1;
  piVar1 = param_3;
  if (param_2[2] < param_3[2]) {
    piVar1 = param_2;
  }
  param_1[2] = piVar1[2];
  if (param_3[3] <= param_2[3]) {
    param_2 = param_3;
  }
  param_1[3] = param_2[3];
  if (param_1[2] < *param_1) {
    *param_1 = 0;
    param_1[2] = 0;
  }
  if (param_1[3] < param_1[1]) {
    param_1[1] = 0;
    param_1[3] = 0;
  }
  return 0;
}

/* ref: FUN_004e2930 */
uint F_004e2930(unsigned int gen_a0)
{
  GEN_ENTER(0x4e2930u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),param_1,0x10);
  return uVar1;
}

/* ref: FUN_004e2950 */
uint F_004e2950(unsigned int gen_a0)
{
  GEN_ENTER(0x4e2950u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::Kernel::Resource::vf0 */
uint F_004e2970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Kernel::Buffer::vf0 */
uint F_004e29a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e29a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),this);
  }
  return (uint)this;
}

/* ref: FUN_004e29d0 */
unsigned int F_004e29d0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e29d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1096b44));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[5])REFP(0x1096b2c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[5])REFP(0x1096a0c));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  if (*(int *)((int)this + 0x10) == 0) {
    REFG(undefined4, 0x1375a40) = *(undefined4 *)((int)this + 0x14);
  }
  else {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) = *(undefined4 *)((int)this + 0x14);
  }
  if (*(int *)((int)this + 0x14) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 4))) = *(undefined4 *)((int)this + 0x10);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  return 0;
}

/* ref: Client::Graphics::Kernel::Texture::vf0 */
uint F_004e2a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_004e29d0(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),this);
  }
  return (uint)this;
}

/* ref: FUN_004e2a60 */
unsigned int F_004e2a60(unsigned int gen_a0)
{
  GEN_ENTER(0x4e2a60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1096b74));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[5])REFP(0x1096b5c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[5])REFP(0x1096a0c));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  if (*(int *)((int)this + 0x10) == 0) {
    REFG(undefined4, 0x1375a40) = *(undefined4 *)((int)this + 0x14);
  }
  else {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) = *(undefined4 *)((int)this + 0x14);
  }
  if (*(int *)((int)this + 0x14) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 4))) = *(undefined4 *)((int)this + 0x10);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  return 0;
}

/* ref: Client::Graphics::Kernel::SwapChain::vf0 */
uint F_004e2ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_004e2a60(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Kernel::Shader::vf0 */
uint F_004e2af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Kernel::VertexShader::vf0 */
uint F_004e2b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Kernel::PixelShader::vf0 */
uint F_004e2b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),this);
  }
  return (uint)this;
}

/* ref: FUN_004e2b80 */
unsigned int F_004e2b80(unsigned int gen_a0)
{
  GEN_ENTER(0x4e2b80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1096a54));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[5])REFP(0x1096a6c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[5])REFP(0x1096a0c));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  if (*(int *)((int)this + 0x10) == 0) {
    REFG(undefined4, 0x1375a40) = *(undefined4 *)((int)this + 0x14);
  }
  else {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) = *(undefined4 *)((int)this + 0x14);
  }
  if (*(int *)((int)this + 0x14) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 4))) = *(undefined4 *)((int)this + 0x10);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  return 0;
}

/* ref: Client::Graphics::Kernel::VertexBuffer::vf0 */
uint F_004e2be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_004e2b80(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),this);
  }
  return (uint)this;
}

/* ref: FUN_004e2c10 */
unsigned int F_004e2c10(unsigned int gen_a0)
{
  GEN_ENTER(0x4e2c10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1096a84));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[5])REFP(0x1096a9c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[5])REFP(0x1096a0c));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  if (*(int *)((int)this + 0x10) == 0) {
    REFG(undefined4, 0x1375a40) = *(undefined4 *)((int)this + 0x14);
  }
  else {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) = *(undefined4 *)((int)this + 0x14);
  }
  if (*(int *)((int)this + 0x14) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 4))) = *(undefined4 *)((int)this + 0x10);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  return 0;
}

/* ref: Client::Graphics::Kernel::IndexBuffer::vf0 */
uint F_004e2c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_004e2c10(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Kernel::ConstantBuffer::vf0 */
uint F_004e2ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Kernel::InputLayout::vf0 */
uint F_004e2cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),this);
  }
  return (uint)this;
}

/* ref: FUN_004e2d00 */
unsigned int F_004e2d00(unsigned int gen_a0)
{
  GEN_ENTER(0x4e2d00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1096b8c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[5])REFP(0x1096ba4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[5])REFP(0x1096a0c));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  if (*(int *)((int)this + 0x10) == 0) {
    REFG(undefined4, 0x1375a40) = *(undefined4 *)((int)this + 0x14);
  }
  else {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) = *(undefined4 *)((int)this + 0x14);
  }
  if (*(int *)((int)this + 0x14) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 4))) = *(undefined4 *)((int)this + 0x10);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  return 0;
}

/* ref: Client::Graphics::Kernel::Query::vf0 */
uint F_004e2d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_004e2d00(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),this);
  }
  return (uint)this;
}

/* ref: FUN_004e2d90 */
uint F_004e2d90(unsigned int gen_a0)
{
  GEN_ENTER(0x4e2d90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),param_1,0x10);
  return uVar1;
}

/* ref: FUN_004e2db0 */
uint F_004e2db0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e2db0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::Kernel::Device::ImmediateContext::vf0 */
uint F_004e2dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1096bbc));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),this);
  }
  return (uint)this;
}

/* ref: FUN_004e2e00 */
uint F_004e2e00(unsigned int gen_a0)
{
  GEN_ENTER(0x4e2e00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),param_1,0x10);
  return uVar1;
}

/* ref: FUN_004e2e20 */
uint F_004e2e20(unsigned int gen_a0)
{
  GEN_ENTER(0x4e2e20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::Kernel::Device::ImmediateContext::SaveTextureWork::vf0 */
uint F_004e2e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10969ec));
  F_00429fa0();
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),this);
  }
  return (uint)this;
}

/* ref: FUN_004e2e80 */
uint F_004e2e80(unsigned int gen_a0)
{
  GEN_ENTER(0x4e2e80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),param_1,0x10);
  return uVar1;
}

/* ref: FUN_004e2ea0 */
uint F_004e2ea0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e2ea0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::Kernel::Device::ImmediateContext::SaveTextureWork::SaveThread::vf0 */
uint F_004e2ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x1096c3c));
  gen_imp_CloseHandle(*(undefined4 *)(this + 0x1c));
  gen_imp_CloseHandle(*(undefined4 *)(this + 0x18));
  F_004cf880(this);
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),this);
  }
  return (uint)this;
}

/* ref: FUN_004e2f10 */
uint F_004e2f10(unsigned int gen_a0)
{
  GEN_ENTER(0x4e2f10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),param_1,0x10);
  return uVar1;
}

/* ref: FUN_004e2f30 */
uint F_004e2f30(unsigned int gen_a0)
{
  GEN_ENTER(0x4e2f30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::Kernel::Device::RenderThread::vf0 */
uint F_004e2f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e2f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x1096c58));
  gen_imp_CloseHandle(*(undefined4 *)(this + 0x1c));
  gen_imp_CloseHandle(*(undefined4 *)(this + 0x18));
  F_004cf880(this);
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),this);
  }
  return (uint)this;
}

/* ref: FUN_004e2fa0 */
uint F_004e2fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e2fa0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),param_1,0x10);
  return uVar1;
}

/* ref: FUN_004e2fc0 */
uint F_004e2fc0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e2fc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),param_1,0x10);
  return uVar1;
}

/* ref: FUN_004e2fe0 */
uint F_004e2fe0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e2fe0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),param_1,0x10);
  return uVar1;
}

/* ref: FUN_004e3000 */
uint F_004e3000(unsigned int gen_a0)
{
  GEN_ENTER(0x4e3000u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::Kernel::Device::CallbackManager::vf0 */
uint F_004e3020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e3020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1096c74));
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)(this + 4));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),this);
  }
  return (uint)this;
}

/* ref: FUN_004e3060 */
uint F_004e3060(unsigned int gen_a0)
{
  GEN_ENTER(0x4e3060u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),param_1,0x10);
  return uVar1;
}

/* ref: FUN_004e30a0 */
uint F_004e30a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e30a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (param_1 < (uint)(*(int *)((int)this + 0x10) - *(int *)((int)this + 0xc) >> 2)) {
    return *((uint *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4)));
  }
  return 0;
}

/* ref: FUN_004e30d0 */
uint F_004e30d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e30d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (param_1 < (uint)(*(int *)((int)this + 0x24) - *(int *)((int)this + 0x20) >> 2)) {
    return *((uint *)GEN_TOP((*(int *)((int)this + 0x20) + param_1 * 4)));
  }
  return 0;
}

/* ref: FUN_004e3100 */
uint F_004e3100(unsigned int gen_a0)
{
  GEN_ENTER(0x4e3100u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),param_1,0x10);
  return uVar1;
}

/* ref: FUN_004e3120 */
uint F_004e3120(unsigned int gen_a0)
{
  GEN_ENTER(0x4e3120u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),param_1);
  }
  return uVar1;
}

/* ref: FUN_004e3140 */
uint F_004e3140(unsigned int gen_a0)
{
  GEN_ENTER(0x4e3140u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),param_1);
  }
  return uVar1;
}

/* ref: FUN_004e3160 */
uint F_004e3160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e3160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1 & 0x7ffffff;
  if (*(uint *)((int)this + 0x40) != uVar1) {
    uVar1 = F_004d75c0(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_004e3180 */
uint F_004e3180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e3180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1 & 0x1f;
  if (*(uint *)((int)this + 0x44) != uVar1) {
    uVar1 = F_004d7720(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_004e31a0 */
unsigned int F_004e31a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e31a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  if ((*(uint *)((int)this + 0x48) != (param_1 & 0xfe000000)) ||
     (*(uint *)((int)this + 0x4c) != (param_2 & 0xfffffffc))) {
    F_004d7790(this,param_1 & 0xfe000000,param_2 & 0xfffffffc);
  }
  return 0;
}

/* ref: FUN_004e31d0 */
uint F_004e31d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e31d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1 & 0x7fffffff;
  if (*(uint *)((int)this + 0x50) != uVar1) {
    uVar1 = F_004d7890(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_004e31f0 */
unsigned int F_004e31f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e31f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(int *)((int)this + 0x54) != param_1) {
    if (param_1 != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x1a0))))
                (*(int * PTR32 *)((int)this + 0x1c),*(undefined4 *)(param_1 + 0x24 + REFG(int, 0x1375a3c) * 4));
    }
    *(int *)((int)this + 0x54) = param_1;
  }
  return 0;
}

/* ref: FUN_004e3230 */
uint F_004e3230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e3230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x170))))
            (*(int * PTR32 *)((int)this + 0x1c),*(undefined4 *)(param_1 + 0x2c));
  *(int *)((int)this + 0x5c) = param_1;
  uVar1 = F_004d7d30(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_004e3270 */
uint F_004e3270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e3270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x1ac))))
            (*(int * PTR32 *)((int)this + 0x1c),*(undefined4 *)(param_1 + 0x28));
  *(int *)((int)this + 0xc0) = param_1;
  uVar1 = F_004d8210(this,param_1,param_2);
  return uVar1;
}

/* ref: std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos_004e3320 */
unsigned int F_004e3320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e3320u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  in_ecx[4] = param_2;
  if (0xf < (uint)in_ecx[5]) {
    in_ecx = (undefined4 *)*in_ecx;
  }
  *(undefined1 *)((int)in_ecx + param_2) = 0;
  return 0;
}

/* ref: FUN_004e3350 */
uint F_004e3350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e3350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  undefined * pvVar4;
  
  if (*(uint *)((int)this + 0x10) < param_1) {
                    
    F_00c457e7("invalid string position");
  }
  uVar2 = *(uint *)((int)this + 0x10) - param_1;
  if (uVar2 < param_2) {
    param_2 = uVar2;
  }
  if (param_2 != 0) {
    pvVar4 = this;
    pvVar1 = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
      pvVar4 = *(undefined * PTR32 *)this;
      pvVar1 = *(undefined * PTR32 *)this;
    }
    F_00c46e20((int)pvVar4 + param_1,(int)pvVar1 + param_2 + param_1,uVar2 - param_2);
    iVar3 = *(int *)((int)this + 0x10) - param_2;
    *(int *)((int)this + 0x10) = iVar3;
    if (0xf < *(uint *)((int)this + 0x14)) {
      *(undefined1 *)(*(int *)this + iVar3) = 0;
      return (uint)this;
    }
    *(undefined1 *)((int)this + iVar3) = 0;
  }
  return (uint)this;
}

/* ref: FUN_004e3430 */
unsigned int F_004e3430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e3430u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_004e34b0 */
unsigned int F_004e34b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e34b0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_004e3510 */
uint F_004e3510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e3510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004e3520 */
uint F_004e3520(unsigned int gen_a0)
{
  GEN_ENTER(0x4e3520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_004e1d00(this);
  return (uint)this;
}

/* ref: FUN_004e3530 */
uint F_004e3530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e3530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004e3540 */
uint F_004e3540(unsigned int gen_a0)
{
  GEN_ENTER(0x4e3540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_004e1d60(this);
  return (uint)this;
}

/* ref: Client::Graphics::Kernel::Notifier::vf0 */
uint F_004e35a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e35a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1096a0c));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  if (*(int *)(this + 4) == 0) {
    REFG(undefined4, 0x1375a40) = *(undefined4 *)(this + 8);
  }
  else {
    *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 8))) = *(undefined4 *)(this + 8);
  }
  if (*(int *)(this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(this + 8) + 4))) = *(undefined4 *)(this + 4);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x1375a44));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Kernel::Context::vf0 */
uint F_004e3600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e3600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pCVar1;
  int iVar2;
  undefined * pCVar3;
  
  if ((param_1 & 2) == 0) {
    *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1096a04));
    if ((param_1 & 1) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),this);
    }
    return (uint)this;
  }
  iVar2 = *(int *)(this + -4);
  pCVar1 = this + -4;
  pCVar3 = this + iVar2 * 0x5b0;
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    pCVar3 = pCVar3 + -0x5b0;
    *(undefined * PTR32 * PTR32 *)pCVar3 = (*(undefined * PTR32 (*)[1])REFP(0x1096a04));
  }
  if (((param_1 & 1) != 0) && (pCVar1 != (undefined *)0x0)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),pCVar1);
  }
  return (uint)pCVar1;
}

/* ref: FUN_004e3680 */
unsigned int F_004e3680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e3680u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (0xf < (uint)in_ecx[5]) {
    in_ecx = (undefined4 *)*in_ecx;
  }
  *param_2 = in_ecx;
  return 0;
}

/* ref: FUN_004e36a0 */
uint F_004e36a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e36a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  if (0xf < (uint)in_ecx[5]) {
    *param_2 = in_ecx[4] + *in_ecx;
    return (uint)param_2;
  }
  *param_2 = in_ecx[4] + (int)in_ecx;
  return (uint)param_2;
}

/* ref: FUN_004e3700 */
uint F_004e3700(unsigned int gen_a0)
{
  GEN_ENTER(0x4e3700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_004e1d00(this);
  return (uint)this;
}

/* ref: FUN_004e3710 */
uint F_004e3710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e3710u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_004e1d00(this);
  return (uint)param_1;
}

/* ref: FUN_004e3730 */
uint F_004e3730(unsigned int gen_a0)
{
  GEN_ENTER(0x4e3730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_004e1d60(this);
  return (uint)this;
}

/* ref: FUN_004e3750 */
uint F_004e3750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e3750u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_004e3760 */
uint F_004e3760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e3760u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_004e3770 */
uint F_004e3770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e3770u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_004e3780 */
uint F_004e3780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e3780u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_004e3790 */
uint F_004e3790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e3790u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_004e37a0 */
uint F_004e37a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e37a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_004e37d0 */
uint F_004e37d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e37d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_004e37e0 */
uint F_004e37e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e37e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_004e37f0 */
uint F_004e37f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e37f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = *(int *)this + param_2 * 4;
  return (uint)param_1;
}

/* ref: FUN_004e3810 */
uint F_004e3810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e3810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = *(int *)this + param_2 * 0xc;
  return (uint)param_1;
}

/* ref: FUN_004e3830 */
uint F_004e3830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e3830u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_004e3840 */
uint F_004e3840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e3840u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_004e3850 */
uint F_004e3850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e3850u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_004e3900 */
uint F_004e3900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e3900u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_004e3910 */
byte F_004e3910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e3910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_004e3930 */
byte F_004e3930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e3930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_004e3950 */
byte F_004e3950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e3950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_004e3970 */
byte F_004e3970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e3970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_004e3990 */
unsigned int F_004e3990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4e3990u, gen_a0, gen_a1, gen_a2, gen_a3);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  char * param_4 = (char *)(uintptr_t)gen_a3;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (*param_1 == *param_3) {
      *param_1 = *param_4;
    }
  }
  return 0;
}

/* ref: FUN_004e39c0 */
unsigned int F_004e39c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e39c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    param_3 = param_3 + 3;
  }
  return 0;
}

/* ref: FUN_004e39f0 */
unsigned int F_004e39f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e39f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    param_3 = param_3 + 3;
  }
  return 0;
}

/* ref: FUN_004e3a20 */
uint F_004e3a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e3a20u, gen_a0, gen_a1, 0u, 0u);
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
  uVar3 = F_004e2560(this,0,*(undefined4 *)((int)this + 0x10),param_1,
                       (int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_004e3a50 */
unsigned int F_004e3a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e3a50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    param_1 = param_1 + 3;
  }
  return 0;
}

/* ref: FUN_004e3a80 */
uint F_004e3a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e3a80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_004e3aa0 */
uint F_004e3aa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e3aa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_004e3ac0 */
uint F_004e3ac0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e3ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_004e26a0(this);
  return (uint)this;
}

/* ref: FUN_004e3ad0 */
uint F_004e3ad0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e3ad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_004e2700(this);
  return (uint)this;
}

/* ref: FUN_004e3ae0 */
unsigned int F_004e3ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e3ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = 0;
    }
    param_1 = param_1 + 1;
  }
  return 0;
}

/* ref: FUN_004e3b10 */
unsigned int F_004e3b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e3b10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
    }
    param_3 = param_3 + 3;
  }
  return 0;
}

/* ref: FUN_004e3b50 */
unsigned int F_004e3b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e3b50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
    }
    param_3 = param_3 + 3;
  }
  return 0;
}

/* ref: FUN_004e3b90 */
unsigned int F_004e3b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e3b90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return 0;
}

/* ref: std::allocator<std::_Container_proxy>::construct_004e3bc0 */
unsigned int F_004e3bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e3bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: std::allocator<std::_Container_proxy>::construct_004e3be0 */
unsigned int F_004e3be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e3be0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_004e3c00 */
uint F_004e3c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e3c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  
  if (param_1 < *(uint *)((int)this + 8)) {
    uVar1 = *((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + param_1 * 8)));
    iVar2 = *(int *)((int)this + 4);
    if (uVar1 < (uint)(*(int *)(iVar2 + 0x10) - *(int *)(iVar2 + 0xc) >> 2)) {
      return *((uint *)GEN_TOP((*(int *)(iVar2 + 0xc) + uVar1 * 4)));
    }
  }
  return 0;
}

/* ref: FUN_004e3c40 */
uint F_004e3c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e3c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  
  if (param_1 < *(uint *)((int)this + 8)) {
    uVar1 = *((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + 4 + param_1 * 8)));
    iVar2 = *(int *)((int)this + 4);
    if (uVar1 < (uint)(*(int *)(iVar2 + 0x24) - *(int *)(iVar2 + 0x20) >> 2)) {
      return *((uint *)GEN_TOP((*(int *)(iVar2 + 0x20) + uVar1 * 4)));
    }
  }
  return 0;
}

/* ref: FUN_004e3c80 */
uint F_004e3c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e3c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  uint uVar2;
  
  if ((((byte)param_1 < 0x10) && (cVar1 = *(char *)(param_1 + 0xc + (int)this), -1 < cVar1)) &&
     ((int)cVar1 < *(int *)((int)this + 8))) {
    uVar2 = F_004e3c00(this,(int)cVar1);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_004e3cb0 */
uint F_004e3cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e3cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  uint uVar2;
  
  if ((((byte)param_1 < 0x10) && (cVar1 = *(char *)(param_1 + 0xc + (int)this), -1 < cVar1)) &&
     ((int)cVar1 < *(int *)((int)this + 8))) {
    uVar2 = F_004e3c40(this,(int)cVar1);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_004e3ce0 */
uint F_004e3ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e3ce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (*(int *)((int)this + 0x5c) == 1) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x170))))
              (*(int * PTR32 *)((int)this + 0x1c),*(undefined4 *)(param_1 + 0x2c));
    *(int *)((int)this + 0x5c) = param_1;
    uVar1 = F_004d7d30(this,param_1,param_2);
    return uVar1;
  }
  if (*(int *)((int)this + 0x5c) != param_1) {
    F_004d7da0(this,param_1);
  }
  uVar1 = F_004d7c80(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_004e3d40 */
uint F_004e3d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e3d40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (*(int *)((int)this + 0xc0) == 1) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x1ac))))
              (*(int * PTR32 *)((int)this + 0x1c),*(undefined4 *)(param_1 + 0x28));
    *(int *)((int)this + 0xc0) = param_1;
    uVar1 = F_004d8210(this,param_1,param_2);
    return uVar1;
  }
  if (*(int *)((int)this + 0xc0) != param_1) {
    F_004d8280(this,param_1);
  }
  uVar1 = F_004d8160(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_004e3da0 */
uint F_004e3da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e3da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x2c) + param_1 * 0x1c)));
  if (0xf < *((uint *)GEN_TOP((*(int *)((int)this + 0x2c) + 0x14 + param_1 * 0x1c)))) {
    puVar1 = (undefined4 *)*puVar1;
  }
  return (uint)puVar1;
}

/* ref: FUN_004e3dd0 */
unsigned int F_004e3dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e3dd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  
  if (((char)param_1 != '\0') && (0xf < *(uint *)((int)this + 0x14))) {
    uVar1 = *(undefined4 *)this;
    if (param_2 != 0) {
      F_00c46aa0(this,uVar1,param_2);
    }
    F_00429760(uVar1,*(int *)((int)this + 0x14) + 1,0x32);
  }
  *(int *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined1 *)(param_2 + (int)this) = 0;
  return 0;
}

/* ref: FUN_004e3e70 */
uint F_004e3e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e3e70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004e3e80 */
uint F_004e3e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e3e80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_004e1d00(this);
  return (uint)param_1;
}

/* ref: FUN_004e3ea0 */
uint F_004e3ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e3ea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004e3eb0 */
uint F_004e3eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e3eb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_004e1d60(this);
  return (uint)param_1;
}

/* ref: FUN_004e3ed0 */
uint F_004e3ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e3ed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  
  uVar4 = param_1 | 0xf;
  if (uVar4 != 0xffffffff) {
    uVar1 = *(uint *)((int)this + 0x14);
    uVar2 = uVar1 >> 1;
    param_1 = uVar4;
    if ((uVar4 / 3 < uVar2) && (param_1 = uVar2 + uVar1, -uVar2 - 2 < uVar1)) {
      param_1 = 0xfffffffe;
    }
  }
  uVar4 = F_004296a0(param_1 + 1,0,0x32);
  if (param_2 != 0) {
    pvVar3 = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    F_00c46aa0(uVar4,pvVar3,param_2);
  }
  if (0xf < *(uint *)((int)this + 0x14)) {
    F_00429760(*(undefined4 *)this,*(uint *)((int)this + 0x14) + 1,0x32);
  }
  *(undefined1 *)this = 0;
  *(uint *)this = uVar4;
  *(uint *)((int)this + 0x14) = param_1;
  *(int *)((int)this + 0x10) = param_2;
  if (param_1 < 0x10) {
    *(undefined1 *)((int)this + param_2) = 0;
    return uVar4;
  }
  *(undefined1 *)(uVar4 + param_2) = 0;
  return uVar4;
}

/* ref: FUN_004e3f90 */
unsigned int F_004e3f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e3f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0x15);
  while (cVar1 == '\0') {
    F_004e3f90(this,(int *)param_1[2]);
    piVar2 = (int *)*param_1;
    F_00429760(param_1,0x18,0xc9);
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return 0;
}

/* ref: FUN_004e3fd0 */
unsigned int F_004e3fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e3fd0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_004e4030 */
unsigned int F_004e4030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e4030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0x15);
  while (cVar1 == '\0') {
    F_004e4030(this,(int *)param_1[2]);
    piVar2 = (int *)*param_1;
    F_00429760(param_1,0x18,0xc9);
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return 0;
}

/* ref: FUN_004e4070 */
unsigned int F_004e4070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e4070u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_004e4110 */
uint F_004e4110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4e4110u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*(int *)((int)this + 4) - param_3 >> 2) * 4;
    F_00c46e20(param_2,param_3,iVar1);
    *(int *)((int)this + 4) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_004e41b0 */
uint F_004e41b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e41b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  puVar4 = puVar3;
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        if ((*(char *)((int)puVar3 + 0x15) != '\0') && (*param_2 < (uint)puVar1[3])) {
          puVar3 = puVar1;
        }
        puVar2 = (undefined4 *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if (*(char *)((int)puVar3 + 0x15) == '\0') {
    puVar1 = (undefined4 *)*puVar3;
  }
  else {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  }
  if (*(char *)((int)puVar1 + 0x15) == '\0') {
    do {
      if (*param_2 < (uint)puVar1[3]) {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      else {
        puVar2 = (undefined4 *)puVar1[2];
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  *param_1 = (int)puVar4;
  param_1[1] = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_004e4280 */
uint F_004e4280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e4280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  puVar4 = puVar3;
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        if ((*(char *)((int)puVar3 + 0x15) != '\0') && (*param_2 < (uint)puVar1[3])) {
          puVar3 = puVar1;
        }
        puVar2 = (undefined4 *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if (*(char *)((int)puVar3 + 0x15) == '\0') {
    puVar1 = (undefined4 *)*puVar3;
  }
  else {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  }
  if (*(char *)((int)puVar1 + 0x15) == '\0') {
    do {
      if (*param_2 < (uint)puVar1[3]) {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      else {
        puVar2 = (undefined4 *)puVar1[2];
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  *param_1 = (int)puVar4;
  param_1[1] = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_004e4330 */
uint F_004e4330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e4330u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_004e2560(param_1,0,*(undefined4 *)((int)param_1 + 0x10),param_2,
                       (int)pcVar2 - (int)(param_2 + 1));
  return (uint)(uVar3 == 0);
}

/* ref: FUN_004e4370 */
unsigned int F_004e4370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e4370u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    param_1 = param_1 + 3;
  }
  return 0;
}

/* ref: FUN_004e43a0 */
unsigned int F_004e43a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e43a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = 0;
    }
    param_1 = param_1 + 1;
  }
  return 0;
}

/* ref: FUN_004e43d0 */
unsigned int F_004e43d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e43d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
        param_3[1] = *(undefined4 *)(iVar1 + 4 + (int)param_3);
        param_3[2] = *(undefined4 *)(iVar1 + 8 + (int)param_3);
      }
      param_3 = param_3 + 3;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_004e4410 */
unsigned int F_004e4410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e4410u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
        param_3[1] = *(undefined4 *)(iVar1 + 4 + (int)param_3);
        param_3[2] = *(undefined4 *)(iVar1 + 8 + (int)param_3);
      }
      param_3 = param_3 + 3;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: FUN_004e4450 */
uint F_004e4450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4e4450u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *(uint *)((int)this + 8)) {
    F_00429760(param_4,0x18,0xc9);
                    
    F_00c4579a("map/set<T> too long");
  }
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) + 1;
  param_4[1] = (int)param_3;
  if (param_3 == *(undefined4 * PTR32 *)((int)this + 4)) {
    (*(undefined4 * PTR32 *)((int)this + 4))[1] = param_4;
    **(undefined4 * PTR32 *)((int)this + 4) = param_4;
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = param_4;
  }
  else if ((char)param_2 == '\0') {
    param_3[2] = param_4;
    if (param_3 == *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = param_4;
    }
  }
  else {
    *param_3 = param_4;
    if (param_3 == ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) {
      **(int * PTR32 *)((int)this + 4) = (int)param_4;
    }
  }
  cVar1 = *(char *)(param_4[1] + 0x14);
  piVar4 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar2 + 0x14) = 1;
      return (uint)param_1;
    }
    piVar5 = (int *)piVar4[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar2 = piVar6[2];
      if (*(char *)(iVar2 + 0x14) == '\0') {
        *(undefined1 *)(piVar5 + 5) = 1;
        *(undefined1 *)(iVar2 + 0x14) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
        piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
      }
      else {
        if (piVar4 == (int *)piVar5[2]) {
          piVar4 = (int *)piVar5[2];
          piVar5[2] = *piVar4;
          if (*(char *)(*piVar4 + 0x15) == '\0') {
            *(int * PTR32 *)(*piVar4 + 4) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar4;
          }
          else {
            piVar6 = (int *)piVar5[1];
            if (piVar5 == (int *)*piVar6) {
              *piVar6 = (int)piVar4;
            }
            else {
              piVar6[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar5;
          piVar5[1] = (int)piVar4;
          piVar4 = piVar5;
        }
        *(undefined1 *)(piVar4[1] + 0x14) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x15) == '\0') {
          *(int * PTR32 *)(piVar6[2] + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)piVar3[2]) {
            piVar3[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar3 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_004e464d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*(char *)(iVar2 + 0x14) != '\0') {
        if (piVar4 == (int *)*piVar5) {
          iVar2 = *piVar5;
          *piVar5 = *(int *)(iVar2 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar2 + 8) + 0x15))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*(int *)(iVar2 + 8) + 4))) = piVar5;
          }
          *(int *)(iVar2 + 4) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar2;
          }
          else {
            piVar4 = (int *)piVar5[1];
            if (piVar5 == (int *)piVar4[2]) {
              piVar4[2] = iVar2;
            }
            else {
              *piVar4 = iVar2;
            }
          }
          *(int * PTR32 *)(iVar2 + 8) = piVar5;
          piVar5[1] = iVar2;
          piVar4 = piVar5;
        }
        *(undefined1 *)(piVar4[1] + 0x14) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x15) == '\0') {
          *(int * PTR32 *)(*piVar6 + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)*piVar3) {
            *piVar3 = (int)piVar6;
          }
          else {
            piVar3[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_004e464d;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *(undefined1 *)(iVar2 + 0x14) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x14);
  } while( true );
}

/* ref: FUN_004e4680 */
uint F_004e4680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4e4680u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *(uint *)((int)this + 8)) {
    F_00429760(param_4,0x18,0xc9);
                    
    F_00c4579a("map/set<T> too long");
  }
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) + 1;
  param_4[1] = (int)param_3;
  if (param_3 == *(undefined4 * PTR32 *)((int)this + 4)) {
    (*(undefined4 * PTR32 *)((int)this + 4))[1] = param_4;
    **(undefined4 * PTR32 *)((int)this + 4) = param_4;
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = param_4;
  }
  else if ((char)param_2 == '\0') {
    param_3[2] = param_4;
    if (param_3 == *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = param_4;
    }
  }
  else {
    *param_3 = param_4;
    if (param_3 == ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) {
      **(int * PTR32 *)((int)this + 4) = (int)param_4;
    }
  }
  cVar1 = *(char *)(param_4[1] + 0x14);
  piVar4 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar2 + 0x14) = 1;
      return (uint)param_1;
    }
    piVar5 = (int *)piVar4[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar2 = piVar6[2];
      if (*(char *)(iVar2 + 0x14) == '\0') {
        *(undefined1 *)(piVar5 + 5) = 1;
        *(undefined1 *)(iVar2 + 0x14) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
        piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
      }
      else {
        if (piVar4 == (int *)piVar5[2]) {
          piVar4 = (int *)piVar5[2];
          piVar5[2] = *piVar4;
          if (*(char *)(*piVar4 + 0x15) == '\0') {
            *(int * PTR32 *)(*piVar4 + 4) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar4;
          }
          else {
            piVar6 = (int *)piVar5[1];
            if (piVar5 == (int *)*piVar6) {
              *piVar6 = (int)piVar4;
            }
            else {
              piVar6[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar5;
          piVar5[1] = (int)piVar4;
          piVar4 = piVar5;
        }
        *(undefined1 *)(piVar4[1] + 0x14) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x15) == '\0') {
          *(int * PTR32 *)(piVar6[2] + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)piVar3[2]) {
            piVar3[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar3 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_004e487d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*(char *)(iVar2 + 0x14) != '\0') {
        if (piVar4 == (int *)*piVar5) {
          iVar2 = *piVar5;
          *piVar5 = *(int *)(iVar2 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar2 + 8) + 0x15))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*(int *)(iVar2 + 8) + 4))) = piVar5;
          }
          *(int *)(iVar2 + 4) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar2;
          }
          else {
            piVar4 = (int *)piVar5[1];
            if (piVar5 == (int *)piVar4[2]) {
              piVar4[2] = iVar2;
            }
            else {
              *piVar4 = iVar2;
            }
          }
          *(int * PTR32 *)(iVar2 + 8) = piVar5;
          piVar5[1] = iVar2;
          piVar4 = piVar5;
        }
        *(undefined1 *)(piVar4[1] + 0x14) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x15) == '\0') {
          *(int * PTR32 *)(*piVar6 + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)*piVar3) {
            *piVar3 = (int)piVar6;
          }
          else {
            piVar3[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_004e487d;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *(undefined1 *)(iVar2 + 0x14) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x14);
  } while( true );
}

/* ref: FUN_004e48b0 */
uint F_004e48b0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e48b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_004e26a0(this);
  return (uint)this;
}

/* ref: FUN_004e48c0 */
uint F_004e48c0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e48c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_004e2700(this);
  return (uint)this;
}

/* ref: FUN_004e48d0 */
unsigned int F_004e48d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e48d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(iVar1 + (int)param_3);
      }
      param_3 = param_3 + 1;
    } while (iVar1 + (int)param_3 != param_2);
  }
  return 0;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_004e4900 */
unsigned int F_004e4900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e4900u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_004e4920 */
unsigned int F_004e4920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e4920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_004e4940 */
uint F_004e4940(unsigned int gen_a0)
{
  GEN_ENTER(0x4e4940u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = in_ecx[5];
  if (0xf < uVar1) {
    uVar2 = F_00429760(*in_ecx,uVar1 + 1,0x32);
    uVar1 = (uint)uVar2;
  }
  in_ecx[5] = 0xf;
  in_ecx[4] = 0;
  *(undefined1 *)in_ecx = 0;
  return uVar1;
}

/* ref: FUN_004e4946 */
uint F_004e4946(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e4946u, gen_a0, gen_a1, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  undefined4 * in_esi = (undefined4 *)(uintptr_t)gen_a1;
  ulonglong uVar1;
  
  if (0xf < in_eax) {
    uVar1 = F_00429760(*in_esi,in_eax + 1,0x32);
    in_eax = (uint)uVar1;
  }
  in_esi[5] = 0xf;
  in_esi[4] = 0;
  *(undefined1 *)in_esi = 0;
  return in_eax;
}

/* ref: FUN_004e4990 */
uint F_004e4990(unsigned int gen_a0)
{
  GEN_ENTER(0x4e4990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xc9);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_004e49d0 */
uint F_004e49d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e49d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_004e49f0 */
uint F_004e49f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e49f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_004e4a00 */
uint F_004e4a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e4a00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_004e4a20 */
uint F_004e4a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e4a20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_004e4a30 */
uint F_004e4a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e4a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_1 == 0xffffffff) {
                    
    F_00c4579a("string too long");
  }
  uVar1 = *(uint *)((int)this + 0x14);
  if (uVar1 < param_1) {
    F_004e3ed0(this,param_1,*(undefined4 *)((int)this + 0x10));
    return (uint)(param_1 != 0);
  }
  if (((char)param_2 != '\0') && (param_1 < 0x10)) {
    uVar3 = *(uint *)((int)this + 0x10);
    if (param_1 < *(uint *)((int)this + 0x10)) {
      uVar3 = param_1;
    }
    if (0xf < uVar1) {
      uVar2 = *(undefined4 *)this;
      if (uVar3 != 0) {
        F_00c46aa0(this,uVar2,uVar3);
      }
      F_00429760(uVar2,*(int *)((int)this + 0x14) + 1,0x32);
    }
    *(uint *)((int)this + 0x10) = uVar3;
    *(undefined4 *)((int)this + 0x14) = 0xf;
    *(undefined1 *)(uVar3 + (int)this) = 0;
    return (uint)(param_1 != 0);
  }
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    if (0xf < uVar1) {
      this = *(undefined * PTR32 *)this;
    }
    *(undefined1 *)this = 0;
  }
  return (uint)(param_1 != 0);
}

/* ref: FUN_004e4af0 */
uint F_004e4af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e4af0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  
  piVar3 = (*(int * PTR32 *)&gen_args[2]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x15))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_004e1d00(&(*(int * PTR32 *)&gen_args[2]));
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x15) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x15) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x15) == '\0') {
          piVar7[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[2])[2] = piVar3[2];
        *(int * PTR32 *)(piVar3[2] + 4) = (*(int * PTR32 *)&gen_args[2]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = (*(int * PTR32 *)&gen_args[2]);
      }
      else {
        puVar2 = (undefined4 *)piVar3[1];
        if ((int *)*puVar2 == piVar3) {
          *puVar2 = (*(int * PTR32 *)&gen_args[2]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[2]);
        }
      }
      (*(int * PTR32 *)&gen_args[2])[1] = piVar3[1];
      iVar1 = (*(int * PTR32 *)&gen_args[2])[5];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 5))) = (char)piVar3[5];
      *(char *)(piVar3 + 5) = (char)iVar1;
      goto LAB_004e4c0a;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x15) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar7;
  }
  else if ((int *)*piVar6 == piVar3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))) == piVar3) {
    piVar4 = piVar6;
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      piVar4 = (int *)F_004e1be0(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      uVar5 = F_004e1bc0(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_004e4c0a: ;
  if ((char)piVar3[5] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[5] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_004e3fd0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(*piVar6 + 0x14) != '\x01') || (*(char *)(piVar6[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x14) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_004e3430((*(undefined * PTR32 *)&gen_args[0]),piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              F_004e3fd0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              break;
            }
LAB_004e4cc8: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_004e3430((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(piVar6[2] + 0x14) == '\x01') && (*(char *)(*piVar6 + 0x14) == '\x01'))
            goto LAB_004e4cc8;
            if (*(char *)(*piVar6 + 0x14) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_004e3fd0((*(undefined * PTR32 *)&gen_args[0]),piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(*piVar6 + 0x14) = 1;
            F_004e3430((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00429760(piVar3,0x18,0xc9);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

