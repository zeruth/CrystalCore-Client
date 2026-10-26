#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_006cb460 */
uint F_006cb460(unsigned int gen_a0)
{
  GEN_ENTER(0x6cb460u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),
               (uint)(*((int *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x1690))) * 100) /
               *((uint *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x1694))));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cb4c0 */
uint F_006cb4c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cb4c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*((undefined4 *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x1694))));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cb520 */
uint F_006cb520(unsigned int gen_a0)
{
  GEN_ENTER(0x6cb520u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*((undefined4 *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x1698))));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cb5a0 */
uint F_006cb5a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cb5a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),
               (uint)(*((int *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x1698))) * 100) /
               *((uint *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x169c))));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cb600 */
uint F_006cb600(unsigned int gen_a0)
{
  GEN_ENTER(0x6cb600u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*((undefined4 *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x169c))));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cb660 */
uint F_006cb660(unsigned int gen_a0)
{
  GEN_ENTER(0x6cb660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  if (**(char * PTR32 *)((int)this + 8) != '\0') {
    uVar1 = F_0042a990((int)this + 8);
    F_00a023f0(*(undefined * PTR32 *)((int)this + 0x5c),uVar1);
  }
  uVar2 = F_0042c880((undefined *)((int)this + 8));
  return (uint)uVar2;
}

/* ref: FUN_006cb690 */
uint F_006cb690(unsigned int gen_a0)
{
  GEN_ENTER(0x6cb690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  if (**(char * PTR32 *)((int)this + 8) != '\0') {
    uVar1 = F_0042a990((int)this + 8);
    F_00a023f0(*(undefined * PTR32 *)((int)this + 0x5c),uVar1);
  }
  uVar2 = F_0042c880((undefined *)((int)this + 8));
  return (uint)uVar2;
}

/* ref: FUN_006cb6c0 */
uint F_006cb6c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cb6c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (REFG(int, 0x1379694) != *(int *)(*piVar2 + 0x60)) {
    F_00a01890(((byte *)(gen_frame + 0xc)));
    return 0;
  }
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 6;
  uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2);
  uVar1 = F_00435440(uVar1,uVar3);
  uVar1 = F_00438c90(uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cb750 */
uint F_006cb750(unsigned int gen_a0)
{
  GEN_ENTER(0x6cb750u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (REFG(int, 0x1379694) != *(int *)(*piVar2 + 0x60)) {
    F_00a01890(((byte *)(gen_frame + 0xc)));
    return 0;
  }
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 6;
  uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2);
  uVar1 = F_00435440(uVar1,uVar3);
  uVar1 = F_00438c70(uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cb7e0 */
uint F_006cb7e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cb7e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined * this;
  undefined4 uVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (REFG(int, 0x1379694) != *(int *)(*piVar2 + 0x60)) {
    F_00a01890(((byte *)(gen_frame + 0xc)));
    return 0;
  }
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 6;
  uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2);
  this = (undefined *)F_00435440(uVar1,uVar3);
  uVar1 = F_00438ca0(this);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cb870 */
byte F_006cb870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6cb870u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  ushort uVar2;
  
  uVar1 = F_00ab3fa0((param_2 & 0xff) + 1);
  if (uVar1 == 0) {
    return 0;
  }
  if ((char)param_1 == '\x01') {
    uVar2 = *(ushort *)(uVar1 + 0x14);
  }
  else if ((char)param_1 == '\x02') {
    uVar2 = *(ushort *)(uVar1 + 0x18);
  }
  else {
    if ((char)param_1 != '\x03') {
      return 1;
    }
    uVar2 = *(ushort *)(uVar1 + 0x1c);
  }
  if (uVar2 == 0) {
    return 1;
  }
  uVar1 = F_00a4ffd0();
  if (uVar2 >> 3 < 200) {
    return (*((byte *)GEN_TOP(((uVar2 >> 3) + 0x12ea + uVar1))) & (byte)(0x80 >> ((byte)uVar2 & 7))) != 0;
  }
  return 0;
}

/* ref: FUN_006cb900 */
uint F_006cb900(unsigned int gen_a0)
{
  GEN_ENTER(0x6cb900u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  
  F_00a01860(((byte *)(gen_frame + 0x4)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x4)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),1,uVar2);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),2);
  ((byte *)(gen_frame + 0x4))[0x20] = (byte)uVar2;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),3);
  ((byte *)(gen_frame + 0x4))[0x24] = (byte)uVar2;
  bVar1 = F_006cb870((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 32)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 36)));
  F_00a01ea0(((byte *)(gen_frame + 0x4)),(uint)bVar1);
  F_00a01890(((byte *)(gen_frame + 0x4)));
  return 1;
}

/* ref: FUN_006cb980 */
uint F_006cb980(unsigned int gen_a0)
{
  GEN_ENTER(0x6cb980u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar3);
  uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
  ((byte *)(gen_frame + 0x8))[0x20] = (byte)uVar3;
  uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),3);
  uVar3 = F_00ab3fa0((uVar3 & 0xff) + 1);
  uVar1 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32));
  if (uVar3 == 0) {
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = uVar1 & 0xffffff00;
  }
  else {
    bVar2 = F_00a62b00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
    ((byte *)(gen_frame + 0x8))[0x20] = bVar2;
    uVar4 = F_00a629e0(&REFG(undefined, 0x14a9728),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
    bVar5 = *(byte *)(uVar3 + 0x22) <= *(byte *)(uVar4 + 0x30);
    ((byte *)(gen_frame + 0x8))[0x20] = bVar5;
  }
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006cba30 */
uint F_006cba30(unsigned int gen_a0)
{
  GEN_ENTER(0x6cba30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  uVar2 = F_00a4ffd0();
  bVar1 = F_00b8c9f0(uVar2);
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)bVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cba90 */
uint F_006cba90(unsigned int gen_a0)
{
  GEN_ENTER(0x6cba90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)*((byte *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x1688))));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cbaf0 */
uint F_006cbaf0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cbaf0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = F_00435250((uint)*((byte *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x1688))),0);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cbb50 */
uint F_006cbb50(unsigned int gen_a0)
{
  GEN_ENTER(0x6cbb50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar4 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar5 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar4);
  uVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32));
  iVar1 = *piVar5;
  ((byte *)(gen_frame + 0x8))[0x20] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = uVar2 & 0xffffff00;
  uVar4 = F_00a019d0(((byte *)(gen_frame + 0x8)));
  if ((int)uVar4 < 2) {
    iVar1 = *(int *)(iVar1 + 0x60);
    if (iVar1 == REFG(int, 0x1379694)) {
      uVar4 = F_00a68280(&REFG(undefined1, 0x14ab070),(uint)*(byte *)(iVar1 + 0x1688),0);
      uVar4 = uVar4 & 0xffff;
    }
    else {
      uVar4 = 0;
    }
    F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),uVar4);
    F_00a01890(((byte *)(gen_frame + 0x8)));
    return 1;
  }
  uVar6 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
  if (2 < (int)uVar4) {
    bVar3 = F_00a01e10(((byte *)(gen_frame + 0x8)),3);
    ((byte *)(gen_frame + 0x8))[0x20] = bVar3;
  }
  if (*(int *)(iVar1 + 0x60) == REFG(int, 0x1379694)) {
    uVar4 = F_00a68280(&REFG(undefined1, 0x14ab070),uVar6,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
    uVar4 = uVar4 & 0xffff;
  }
  else {
    uVar4 = 0;
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),uVar4);
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006cbc50 */
uint F_006cbc50(unsigned int gen_a0)
{
  GEN_ENTER(0x6cbc50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar4 = 1;
  uVar2 = F_00a019d0(((byte *)(gen_frame + 0xc)));
  if (1 < (int)uVar2) {
    uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  }
  if (*(int *)(iVar1 + 0x60) == REFG(int, 0x1379694)) {
    uVar2 = F_00a68310(&REFG(undefined1, 0x14ab070),uVar4);
    uVar2 = uVar2 & 0xffff;
  }
  else {
    uVar2 = 0;
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar2);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cbcf0 */
uint F_006cbcf0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cbcf0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*(int *)(*piVar2 + 0x60) == REFG(int, 0x1379694)) {
    uVar1 = (uint)REFG(undefined1, 0x14ab14e);
  }
  else {
    uVar1 = 0;
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cbd60 */
uint F_006cbd60(unsigned int gen_a0)
{
  GEN_ENTER(0x6cbd60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)REFG(undefined1, 0x14ab0d1));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cbdb0 */
uint F_006cbdb0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cbdb0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)REFG(undefined1, 0x14ab0d2));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cbe00 */
byte F_006cbe00(unsigned int gen_a0)
{
  GEN_ENTER(0x6cbe00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      if (iVar3 < 0) {
        return 0;
      }
      return *(char *)(iVar2 + 6) != '\0';
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_006cbe50 */
uint F_006cbe50(unsigned int gen_a0)
{
  GEN_ENTER(0x6cbe50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar3 = F_00a4ffd0();
  iVar5 = 0;
  iVar4 = uVar3 + 0x13b4;
  do {
    if (*(short *)(iVar4 + 4) == (short)uVar2) {
      if (-1 < iVar5) {
        cVar1 = *(char *)(iVar4 + 6);
        goto LAB_006cbea7;
      }
      break;
    }
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 0x10;
  } while (iVar5 < 0x1e);
  cVar1 = '\0';
LAB_006cbea7: ;
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)(cVar1 != '\0'));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cbee0 */
byte F_006cbee0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cbee0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00a4ffd0();
  uVar2 = param_1 >> 3 & 0x1fff;
  if (199 < uVar2) {
    return 0;
  }
  return (*(byte *)(uVar2 + 0x12ea + uVar1) & (byte)(0x80 >> ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_006cbf20 */
uint F_006cbf20(unsigned int gen_a0)
{
  GEN_ENTER(0x6cbf20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
  uVar2 = F_00a4ffd0();
  uVar3 = (uVar1 & 0xffff) >> 3;
  if (uVar3 < 200) {
    bVar4 = (*(byte *)(uVar3 + 0x12ea + uVar2) & (byte)(0x80 >> ((byte)(uVar1 & 0xffff) & 7))) != 0;
    ((byte *)(gen_frame + 0x8))[0x20] = bVar4;
  }
  else {
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = (uint)(uint3)GEN_PIECE(((byte *)(gen_frame + 0x8)), 33, 3) << 8;
  }
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006cbfb0 */
byte F_006cbfb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6cbfb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)((int)this + 0x60) == REFG(int, 0x1379694)) {
    uVar1 = F_00a4ffd0();
    iVar3 = 0;
    iVar2 = uVar1 + 0x13b4;
    do {
      if (*(short *)(iVar2 + 4) == (short)param_1) {
        *param_2 = *(undefined1 *)(iVar2 + 6);
        return 1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x10;
    } while (iVar3 < 0x1e);
  }
  return 0;
}

/* ref: FUN_006cc000 */
uint F_006cc000(unsigned int gen_a0)
{
  GEN_ENTER(0x6cc000u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  iVar4 = *piVar2;
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  bVar6 = 0;
  if (*(int *)(iVar4 + 0x60) == REFG(int, 0x1379694)) {
    uVar3 = F_00a4ffd0();
    iVar5 = 0;
    iVar4 = uVar3 + 0x13b4;
    do {
      if (*(short *)(iVar4 + 4) == (short)uVar1) {
        bVar6 = *(byte *)(iVar4 + 6);
        break;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar5 < 0x1e);
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)bVar6);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cc090 */
byte F_006cc090(unsigned int gen_a0)
{
  GEN_ENTER(0x6cc090u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a4ffd0();
  bVar1 = F_006c05a0(uVar2,param_1);
  return bVar1;
}

/* ref: FUN_006cc0b0 */
uint F_006cc0b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cc0b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar3 = F_00a4ffd0();
  bVar1 = F_006c05a0(uVar3,uVar2 & 0xffff);
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)bVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cc150 */
uint F_006cc150(unsigned int gen_a0)
{
  GEN_ENTER(0x6cc150u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  byte bVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  uVar2 = F_00a4ffd0();
  bVar3 = 0;
  bVar1 = F_00a50620();
  if (bVar1 != 0) {
    bVar3 = *(byte *)(uVar2 + 0x15bb) & 0xf;
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)bVar3);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cc1f0 */
uint F_006cc1f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cc1f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  byte bVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  uVar2 = F_00a4ffd0();
  bVar3 = 0;
  bVar1 = F_00a50620();
  if (bVar1 != 0) {
    bVar3 = *(byte *)(uVar2 + 0x15bb) >> 4;
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)bVar3);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cc260 */
uint F_006cc260(unsigned int gen_a0)
{
  GEN_ENTER(0x6cc260u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  bool bVar4;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
  if (*(int *)(iVar1 + 0x60) == REFG(int, 0x1379694)) {
    bVar4 = ((&REFG(undefined1, 0x14b4ec0))[uVar2 >> 3] & (byte)(1 << ((byte)uVar2 & 7))) != 0;
    ((byte *)(gen_frame + 0x8))[0x20] = bVar4;
  }
  else {
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = (uint)(uint3)GEN_PIECE(((byte *)(gen_frame + 0x8)), 33, 3) << 8;
  }
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006cc2f0 */
uint F_006cc2f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cc2f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  bool bVar5;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar3);
  iVar2 = *piVar4;
  uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
  uVar3 = F_00ab1ed0(uVar3);
  if ((uVar3 == 0) || (bVar1 = *(byte *)(uVar3 + 0x27), bVar1 == 0)) {
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = (uint)(uint3)GEN_PIECE(((byte *)(gen_frame + 0x8)), 33, 3) << 8;
  }
  else {
    if (*(int *)(iVar2 + 0x60) == REFG(int, 0x1379694)) {
      bVar5 = ((&REFG(undefined1, 0x14b4ec0))[bVar1 >> 3] & (byte)(1 << (bVar1 & 7))) != 0;
    }
    else {
      bVar5 = false;
    }
    ((byte *)(gen_frame + 0x8))[0x20] = bVar5;
  }
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006cc390 */
uint F_006cc390(unsigned int gen_a0)
{
  GEN_ENTER(0x6cc390u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  bool bVar4;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
  if (*(int *)(iVar1 + 0x60) == REFG(int, 0x1379694)) {
    bVar4 = ((&REFG(undefined1, 0x14b4edc))[uVar2 >> 3] & (byte)(1 << ((byte)uVar2 & 7))) != 0;
    ((byte *)(gen_frame + 0x8))[0x20] = bVar4;
  }
  else {
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = (uint)(uint3)GEN_PIECE(((byte *)(gen_frame + 0x8)), 33, 3) << 8;
  }
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006cc420 */
uint F_006cc420(unsigned int gen_a0)
{
  GEN_ENTER(0x6cc420u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  bool bVar4;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
  if (*(int *)(iVar1 + 0x60) == REFG(int, 0x1379694)) {
    bVar4 = ((&REFG(undefined, 0x14b4f0c))[(uVar2 & 0xffff) >> 3] & (byte)(1 << ((byte)(uVar2 & 0xffff) & 7))) !=
            0;
    ((byte *)(gen_frame + 0x8))[0x20] = bVar4;
  }
  else {
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = (uint)(uint3)GEN_PIECE(((byte *)(gen_frame + 0x8)), 33, 3) << 8;
  }
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006cc4b0 */
uint F_006cc4b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cc4b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*(int *)(*piVar2 + 0x60) == REFG(int, 0x1379694)) {
    uVar1 = F_00a3ace0(&REFG(undefined, 0x14a4230));
  }
  else {
    uVar1 = 0;
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cc520 */
uint F_006cc520(unsigned int gen_a0)
{
  GEN_ENTER(0x6cc520u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar1 = F_00a3c850(&REFG(undefined, 0x14a4230),uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cc580 */
uint F_006cc580(unsigned int gen_a0)
{
  GEN_ENTER(0x6cc580u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar2 = F_00a3c850(&REFG(undefined, 0x14a4230),uVar1);
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = 0;
    uVar2 = F_00ab24a0(uVar2);
    if (uVar2 != 0) {
      uVar1 = (uint)*(byte *)(uVar2 + 0x9e);
    }
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cc610 */
uint F_006cc610(unsigned int gen_a0)
{
  GEN_ENTER(0x6cc610u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar2 = F_00a3c850(&REFG(undefined, 0x14a4230),uVar1);
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = 0;
    uVar2 = F_00ab24a0(uVar2);
    if (uVar2 != 0) {
      uVar1 = (uint)*(byte *)(uVar2 + 0x9f);
    }
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cc6a0 */
uint F_006cc6a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cc6a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined1 * puVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  byte * pbVar5;
  uint uVar6;
  int iVar7;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00a01860(((byte *)(gen_frame + 0x0)),param_1);
  uVar4 = F_00a01d20(((byte *)(gen_frame + 0x0)),1);
  pbVar5 = (byte *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),1,uVar4);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 32)) = *(undefined4 *)pbVar5;
  uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),2);
  uVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 56));
  ((byte *)(gen_frame + 0x0))[0x28] = (char)uVar4;
  ((byte *)(gen_frame + 0x0))[0x29] = (char)(uVar4 >> 8);
  ((byte *)(gen_frame + 0x0))[0x2a] = (char)(uVar4 >> 0x10);
  ((byte *)(gen_frame + 0x0))[0x2b] = (char)(uVar4 >> 0x18);
  iVar7 = 0;
  (*(uint *)(gen_frame + 0x40)) = 3;
  ((byte *)(gen_frame + 0x0))[0x34] = 1;
  ((byte *)(gen_frame + 0x0))[0x34] = 1;
  ((byte *)(gen_frame + 0x0))[0x3c] = 1;
  ((byte *)(gen_frame + 0x0))[0x3c] = 1;
  (*(undefined2 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x46)) = 0;
  (*(undefined4 *)(gen_frame + 0x4a)) = 0;
  (*(undefined1 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x51)) = 0;
  ((byte *)(gen_frame + 0x0))[0x38] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 56)) = uVar2 & 0xffffff00;
  uVar4 = F_00a019d0(((byte *)(gen_frame + 0x0)));
  if (2 < (int)uVar4) {
    bVar3 = F_00a01f80(((byte *)(gen_frame + 0x0)),3);
    if (bVar3 == 0) {
      uVar6 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),3);
    }
    else {
      bVar3 = F_00a01e10(((byte *)(gen_frame + 0x0)),3);
      uVar6 = 2 - (bVar3 != 0);
    }
    (*(uint *)(gen_frame + 0x40)) = uVar6;
  }
  if (3 < (int)uVar4) {
    bVar3 = F_00a01e10(((byte *)(gen_frame + 0x0)),4);
    ((byte *)(gen_frame + 0x0))[0x34] = bVar3;
  }
  if (4 < (int)uVar4) {
    bVar3 = F_00a01e10(((byte *)(gen_frame + 0x0)),5);
    ((byte *)(gen_frame + 0x0))[0x3c] = bVar3;
  }
  if (5 < (int)uVar4) {
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 36)) = 7 - (int)&(*(undefined2 *)(gen_frame + 0x44));
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 44)) = 6 - (int)&(*(undefined2 *)(gen_frame + 0x44));
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 48)) = 6 - (int)&(*(undefined1 *)(gen_frame + 0x50));
    do {
      puVar1 = &(*(undefined1 *)(gen_frame + 0x50)) + iVar7;
      if ((int)uVar4 < (int)(puVar1 + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 48)))) break;
      uVar6 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),(int)&(*(undefined2 *)(gen_frame + 0x44)) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 44)) + iVar7 * 2);
      (&(*(undefined2 *)(gen_frame + 0x44)))[iVar7] = (short)uVar6;
      uVar6 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),(int)&(*(undefined2 *)(gen_frame + 0x44)) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 36)) + iVar7 * 2);
      iVar7 = iVar7 + 1;
      *puVar1 = (char)uVar6;
    } while (iVar7 < 5);
    if (0xf < (int)uVar4) {
      uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),0x10);
      ((byte *)(gen_frame + 0x0))[0x38] = (byte)uVar4;
    }
  }
  uVar4 = F_006bc640((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 40)),(*(uint *)(gen_frame + 0x40)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 52)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 60)),&(*(undefined2 *)(gen_frame + 0x44)),&(*(undefined1 *)(gen_frame + 0x50)),
                       (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 56)));
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),uVar4);
  F_00a01890(((byte *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 1;
}

/* ref: FUN_006cc850 */
uint F_006cc850(unsigned int gen_a0)
{
  GEN_ENTER(0x6cc850u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  F_00a01860(((byte *)(gen_frame + 0x4)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x4)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),1,uVar2);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),2);
  ((byte *)(gen_frame + 0x4))[0x20] = 1;
  ((byte *)(gen_frame + 0x4))[0x20] = 1;
  ((byte *)(gen_frame + 0x4))[0x24] = 1;
  ((byte *)(gen_frame + 0x4))[0x24] = 1;
  uVar3 = F_00a019d0(((byte *)(gen_frame + 0x4)));
  if (2 < (int)uVar3) {
    bVar1 = F_00a01e10(((byte *)(gen_frame + 0x4)),3);
    ((byte *)(gen_frame + 0x4))[0x20] = bVar1;
  }
  if (3 < (int)uVar3) {
    bVar1 = F_00a01e10(((byte *)(gen_frame + 0x4)),4);
    ((byte *)(gen_frame + 0x4))[0x24] = bVar1;
  }
  uVar2 = F_00a41080(&REFG(undefined, 0x14a4230),uVar2,0,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 32)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 36)));
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),uVar2);
  F_00a01890(((byte *)(gen_frame + 0x4)));
  return 1;
}

/* ref: FUN_006cc900 */
uint F_006cc900(unsigned int gen_a0)
{
  GEN_ENTER(0x6cc900u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  F_00a01860(((byte *)(gen_frame + 0x4)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x4)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),1,uVar2);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),2);
  ((byte *)(gen_frame + 0x4))[0x20] = 1;
  ((byte *)(gen_frame + 0x4))[0x20] = 1;
  ((byte *)(gen_frame + 0x4))[0x24] = 1;
  ((byte *)(gen_frame + 0x4))[0x24] = 1;
  uVar3 = F_00a019d0(((byte *)(gen_frame + 0x4)));
  if (2 < (int)uVar3) {
    bVar1 = F_00a01e10(((byte *)(gen_frame + 0x4)),3);
    ((byte *)(gen_frame + 0x4))[0x20] = bVar1;
  }
  if (3 < (int)uVar3) {
    bVar1 = F_00a01e10(((byte *)(gen_frame + 0x4)),4);
    ((byte *)(gen_frame + 0x4))[0x24] = bVar1;
  }
  uVar2 = F_00a41080(&REFG(undefined, 0x14a4230),uVar2,1,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 32)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 36)));
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),uVar2);
  F_00a01890(((byte *)(gen_frame + 0x4)));
  return 1;
}

/* ref: FUN_006cc9e0 */
uint F_006cc9e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cc9e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  bVar1 = *((byte *)GEN_TOP((*(int *)(*piVar3 + 0x60) + 0x1688)));
  uVar2 = F_00ab21d0(0x22);
  if (uVar2 == 0) {
    bVar1 = 0;
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
  }
  else {
    bVar1 = *(byte *)(uVar2 + 4 + (uint)bVar1);
    ((byte *)(gen_frame + 0x8))[0x20] = bVar1;
  }
  ((byte *)(gen_frame + 0x8))[0x20] = bVar1;
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006cca80 */
uint F_006cca80(unsigned int gen_a0)
{
  GEN_ENTER(0x6cca80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  bVar1 = *((byte *)GEN_TOP((*(int *)(*piVar3 + 0x60) + 0x1688)));
  uVar2 = F_00ab21d0(0x1e);
  if (uVar2 == 0) {
    bVar1 = 0;
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
  }
  else {
    bVar1 = *(byte *)(uVar2 + 4 + (uint)bVar1);
    ((byte *)(gen_frame + 0x8))[0x20] = bVar1;
  }
  ((byte *)(gen_frame + 0x8))[0x20] = bVar1;
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006ccb20 */
uint F_006ccb20(unsigned int gen_a0)
{
  GEN_ENTER(0x6ccb20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  bVar1 = *((byte *)GEN_TOP((*(int *)(*piVar3 + 0x60) + 0x1688)));
  uVar2 = F_00ab21d0(0x1f);
  if (uVar2 == 0) {
    bVar1 = 0;
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
  }
  else {
    bVar1 = *(byte *)(uVar2 + 4 + (uint)bVar1);
    ((byte *)(gen_frame + 0x8))[0x20] = bVar1;
  }
  ((byte *)(gen_frame + 0x8))[0x20] = bVar1;
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006ccbc0 */
uint F_006ccbc0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ccbc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  bVar1 = *((byte *)GEN_TOP((*(int *)(*piVar3 + 0x60) + 0x1688)));
  uVar2 = F_00ab21d0(0x23);
  if (uVar2 == 0) {
    bVar1 = 0;
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
  }
  else {
    bVar1 = *(byte *)(uVar2 + 4 + (uint)bVar1);
    ((byte *)(gen_frame + 0x8))[0x20] = bVar1;
  }
  ((byte *)(gen_frame + 0x8))[0x20] = bVar1;
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006ccc60 */
uint F_006ccc60(unsigned int gen_a0)
{
  GEN_ENTER(0x6ccc60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  bVar1 = *((byte *)GEN_TOP((*(int *)(*piVar3 + 0x60) + 0x1688)));
  uVar2 = F_00ab21d0(0x20);
  if (uVar2 == 0) {
    bVar1 = 0;
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
  }
  else {
    bVar1 = *(byte *)(uVar2 + 4 + (uint)bVar1);
    ((byte *)(gen_frame + 0x8))[0x20] = bVar1;
  }
  ((byte *)(gen_frame + 0x8))[0x20] = bVar1;
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006ccd00 */
uint F_006ccd00(unsigned int gen_a0)
{
  GEN_ENTER(0x6ccd00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  bVar1 = *((byte *)GEN_TOP((*(int *)(*piVar3 + 0x60) + 0x1688)));
  uVar2 = F_00ab21d0(0x21);
  if (uVar2 == 0) {
    bVar1 = 0;
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
  }
  else {
    bVar1 = *(byte *)(uVar2 + 4 + (uint)bVar1);
    ((byte *)(gen_frame + 0x8))[0x20] = bVar1;
  }
  ((byte *)(gen_frame + 0x8))[0x20] = bVar1;
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006ccd70 */
uint F_006ccd70(unsigned int gen_a0)
{
  GEN_ENTER(0x6ccd70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this;
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  puVar3 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  this = (undefined *)*puVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
  bVar1 = F_006bc7f0(this,uVar2);
  ((byte *)(gen_frame + 0x8))[0x20] = bVar1;
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006ccde0 */
uint F_006ccde0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ccde0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  char cVar5;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar3);
  iVar2 = *piVar4;
  cVar5 = '\0';
  uVar3 = F_00a019d0(((byte *)(gen_frame + 0x8)));
  if (1 < (int)uVar3) {
    uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
    cVar5 = (char)uVar3;
  }
  cVar1 = *((char *)GEN_TOP((*(int *)(iVar2 + 0x60) + 0x2e08)));
  if ((cVar1 == '\0') || ((cVar5 != '\0' && (cVar5 != cVar1)))) {
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = (uint)(uint3)GEN_PIECE(((byte *)(gen_frame + 0x8)), 33, 3) << 8;
  }
  else {
    ((byte *)(gen_frame + 0x8))[0x20] = 1;
    ((byte *)(gen_frame + 0x8))[0x20] = 1;
  }
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006cce70 */
uint F_006cce70(unsigned int gen_a0)
{
  GEN_ENTER(0x6cce70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar1);
  if (*(int *)(*piVar2 + 0x60) == REFG(int, 0x1379694)) {
    ((byte *)(gen_frame + 0x8))[0x20] = REFG(char, 0x1338ad4) != '\0';
  }
  else {
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = (uint)(uint3)GEN_PIECE(((byte *)(gen_frame + 0x8)), 33, 3) << 8;
  }
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006ccee0 */
uint F_006ccee0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ccee0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)((*(int *)(*piVar2 + 0x60) != REFG(int, 0x1379694)) - 1U & REFG(undefined1, 0x14ab29a)));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006ccf40 */
uint F_006ccf40(unsigned int gen_a0)
{
  GEN_ENTER(0x6ccf40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar3);
  iVar1 = *piVar4;
  uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
  ((byte *)(gen_frame + 0x8))[0x20] = (byte)uVar3;
  if (*(int *)(iVar1 + 0x60) == REFG(int, 0x1379694)) {
    bVar2 = F_00a68920(&REFG(undefined1, 0x14ab070),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  }
  else {
    bVar2 = 0;
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),(uint)bVar2);
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006ccfc0 */
uint F_006ccfc0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ccfc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  uint * puVar5;
  int iVar6;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  puVar3 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  (*(undefined4 *)(gen_frame + 0x28)) = *puVar3;
  (*(int *)(gen_frame + 0x2c)) = 0;
  uVar2 = F_00a019d0(((byte *)(gen_frame + 0x8)));
  iVar6 = 2;
  if (1 < (uVar2 & 0xff)) {
    puVar5 = ((uint *)(gen_frame + 0x30));
    do {
      bVar1 = F_00a01f40(((byte *)(gen_frame + 0x8)),iVar6);
      if ((bVar1 == 0) || (9 < iVar6 + -2)) {
        F_00a01a20(((byte *)(gen_frame + 0x8)),&REFG(undefined, 0x10b4ea8),iVar6 + -1);
      }
      else {
        uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),iVar6);
        (*(int *)(gen_frame + 0x2c)) = (*(int *)(gen_frame + 0x2c)) + 1;
        *puVar5 = uVar4;
      }
      iVar6 = iVar6 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar6 <= (int)(uVar2 & 0xff));
  }
  bVar1 = F_006bc920(((uint *)(gen_frame + 0x30)),(*(int *)(gen_frame + 0x2c)));
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(uint)bVar1);
  F_00a01890(((byte *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 1;
}

/* ref: FUN_006cd0a0 */
uint F_006cd0a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cd0a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  bool bVar3;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar1);
  if (*(int *)(*piVar2 + 0x60) == REFG(int, 0x1379694)) {
    bVar3 = (REFG(undefined1, 0x14ab150) & 1) == 1;
    ((byte *)(gen_frame + 0x8))[0x20] = bVar3;
  }
  else {
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = (uint)(uint3)GEN_PIECE(((byte *)(gen_frame + 0x8)), 33, 3) << 8;
  }
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006cd110 */
uint F_006cd110(unsigned int gen_a0)
{
  GEN_ENTER(0x6cd110u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  bool bVar3;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar1);
  if (*(int *)(*piVar2 + 0x60) == REFG(int, 0x1379694)) {
    bVar3 = (REFG(undefined1, 0x14ab150) & 2) == 2;
    ((byte *)(gen_frame + 0x8))[0x20] = bVar3;
  }
  else {
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = (uint)(uint3)GEN_PIECE(((byte *)(gen_frame + 0x8)), 33, 3) << 8;
  }
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006cd180 */
uint F_006cd180(unsigned int gen_a0)
{
  GEN_ENTER(0x6cd180u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)REFG(undefined1, 0x14ab29e));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cd1d0 */
uint F_006cd1d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cd1d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  bool bVar4;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
  if (*(int *)(iVar1 + 0x60) == REFG(int, 0x1379694)) {
    bVar4 = ((&REFG(undefined1, 0x14b4ed0))[(uVar2 & 0xff) >> 3] & (byte)(1 << ((byte)uVar2 & 7))) != 0;
    ((byte *)(gen_frame + 0x8))[0x20] = bVar4;
  }
  else {
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = (uint)(uint3)GEN_PIECE(((byte *)(gen_frame + 0x8)), 33, 3) << 8;
  }
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006cd260 */
uint F_006cd260(unsigned int gen_a0)
{
  GEN_ENTER(0x6cd260u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)(byte)(&REFG(undefined1, 0x14ab29f))[(byte)((char)uVar1 - 1)]);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cd2c0 */
uint F_006cd2c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cd2c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
  ((byte *)(gen_frame + 0x8))[0x20] = (byte)uVar2;
  bVar1 = F_00a68770(&REFG(undefined1, 0x14ab070),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(uint)bVar1);
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006cd330 */
uint F_006cd330(unsigned int gen_a0)
{
  GEN_ENTER(0x6cd330u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  bVar1 = F_00a68750(&REFG(undefined1, 0x14ab070));
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)(byte)(bVar1 + 1));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cd390 */
uint F_006cd390(unsigned int gen_a0)
{
  GEN_ENTER(0x6cd390u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)REFG(undefined1, 0x14ab14f));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cd3e0 */
uint F_006cd3e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cd3e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)((!GEN_ISNAN(REFG(float, 0x14ab588)) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
                            (!(REFG(float, 0x14ab588) < *(float *)&REFG(undefined, 0x1088114)) &&
                            REFG(uint, 0x14ab588) != *(float *)&REFG(undefined, 0x1088114))));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cd440 */
uint F_006cd440(unsigned int gen_a0)
{
  GEN_ENTER(0x6cd440u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar3 = F_00a4ffd0();
  bVar1 = F_00b8de30(uVar3,uVar2);
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)bVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cd4b0 */
uint F_006cd4b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cd4b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar3 = F_00a4ffd0();
  bVar1 = F_00b8df80(uVar3,uVar2);
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)bVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cd520 */
uint F_006cd520(unsigned int gen_a0)
{
  GEN_ENTER(0x6cd520u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)(*((char *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x166c))) != '\0'));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cd580 */
uint F_006cd580(unsigned int gen_a0)
{
  GEN_ENTER(0x6cd580u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*((undefined4 *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x1690))));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cd600 */
uint F_006cd600(unsigned int gen_a0)
{
  GEN_ENTER(0x6cd600u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),
               (uint)(*((int *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x1690))) * 100) /
               *((uint *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x1694))));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cd660 */
uint F_006cd660(unsigned int gen_a0)
{
  GEN_ENTER(0x6cd660u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*((undefined4 *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x1694))));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cd6c0 */
uint F_006cd6c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cd6c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*((undefined4 *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x1698))));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cd740 */
uint F_006cd740(unsigned int gen_a0)
{
  GEN_ENTER(0x6cd740u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),
               (uint)(*((int *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x1698))) * 100) /
               *((uint *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x169c))));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cd7a0 */
uint F_006cd7a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cd7a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*((undefined4 *)GEN_TOP((*(int *)(*piVar2 + 0x60) + 0x169c))));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cd800 */
uint F_006cd800(unsigned int gen_a0)
{
  GEN_ENTER(0x6cd800u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  int * piVar6;
  undefined * this;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar5 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar6 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar5);
  iVar1 = *piVar6;
  uVar5 = F_00a01d20(((byte *)(gen_frame + 0x8)),2);
  piVar6 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2,uVar5);
  iVar2 = *piVar6;
  bVar4 = F_00a9f620(*(undefined4 *)(iVar1 + 0x60));
  if (bVar4 != 0) {
    this = (undefined *)F_00a5f290(*(undefined * PTR32 *)(iVar2 + 4));
    if (this != (undefined *)0x0) {
      bVar4 = F_00a9fd60(this);
      ((byte *)(gen_frame + 0x8))[0x20] = bVar4;
      goto LAB_006cd872;
    }
  }
  uVar3 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32));
  ((byte *)(gen_frame + 0x8))[0x20] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = uVar3 & 0xffffff00;
LAB_006cd872: ;
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: Client::Game::Event::EventHandler::vf32 */
uint F_006cd8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6cd8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  
  puVar1 = (undefined4 *)F_00ab3d50(param_1);
  uVar3 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xd8))
                      (piVar2,*puVar1,(uint)*(byte *)((int)puVar1 + 5),0,(int)*(char *)(puVar1 + 1))
    ;
  }
  return uVar3;
}

/* ref: FUN_006cd8f0 */
uint F_006cd8f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6cd8f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint in_EAX = 0;
  undefined4 * this_00;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 100) == 0) {
    this_00 = (undefined4 *)F_00406b90(0x20,0,0);
    if (this_00 == (undefined4 *)0x0) {
      this_00 = (undefined4 *)0x0;
    }
    else {
      F_00cb4700(this_00,param_2,param_3);
      this_00[5] = param_2;
      *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b9170));
      this_00[6] = this;
      this_00[7] = ((code *)REFP(0x72dc20));
    }
    *(undefined4 * PTR32 *)((int)this + 100) = this_00;
    uVar2 = 0;
    if (param_2 != 0) {
      do {
        F_00cb4540(*(undefined * PTR32 *)((int)this + 100),uVar2,*(undefined4 *)(param_1 + uVar2 * 4));
        uVar2 = uVar2 + 1;
      } while (uVar2 < param_2);
    }
    piVar1 = (int *)F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),9);
    *(int * PTR32 *)((int)this + 0x68) = piVar1;
    in_EAX = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1,*(undefined4 *)((int)this + 100));
  }
  return in_EAX;
}

/* ref: FUN_006cd980 */
uint F_006cd980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6cd980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint in_EAX = 0;
  undefined4 * this_00;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x6c) == 0) {
    this_00 = (undefined4 *)F_00406b90(0x20,0,0);
    if (this_00 == (undefined4 *)0x0) {
      this_00 = (undefined4 *)0x0;
    }
    else {
      F_00cb4700(this_00,param_2,param_3);
      this_00[5] = param_2;
      *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b9170));
      this_00[6] = this;
      this_00[7] = ((code *)REFP(0x72dbf0));
    }
    *(undefined4 * PTR32 *)((int)this + 0x6c) = this_00;
    uVar2 = 0;
    if (param_2 != 0) {
      do {
        F_00cb4540(*(undefined * PTR32 *)((int)this + 0x6c),uVar2,*(undefined4 *)(param_1 + uVar2 * 4));
        uVar2 = uVar2 + 1;
      } while (uVar2 < param_2);
    }
    piVar1 = (int *)F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x52);
    *(int * PTR32 *)((int)this + 0x70) = piVar1;
    in_EAX = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1,*(undefined4 *)((int)this + 0x6c));
  }
  return in_EAX;
}

/* ref: FUN_006cda10 */
byte F_006cda10(unsigned int gen_a0)
{
  GEN_ENTER(0x6cda10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined * pvVar2;
  undefined4 * puVar3;
  undefined * PTR32 * ppvVar4;
  undefined * pvVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  ppvVar4 = (undefined * PTR32 *)((int)this + 0xe0);
  pvVar2 = ((undefined *)GEN_TOP(((*(int *)((int)this + 0xd4) - *(int *)((int)this + 0xd0) >> 2) -
                   *(int *)((int)this + 0xe4))));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar2;
  if (pvVar2 < *ppvVar4) {
    ppvVar4 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
  }
  pvVar2 = *ppvVar4;
  if (pvVar2 != (undefined *)0x0) {
    puVar3 = *(undefined4 * PTR32 *)((int)this + 0x74);
    if ((puVar3 != (undefined4 *)0x0) && ((undefined *)puVar3[5] != pvVar2)) {
      ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
      *(undefined4 *)((int)this + 0x74) = 0;
    }
    if (*(int *)((int)this + 0x74) == 0) {
      puVar3 = (undefined4 *)F_00406b90(0x1c,0,0);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        F_00cb4700(puVar3,pvVar2,0);
        puVar3[5] = pvVar2;
        puVar3[6] = this;
        *puVar3 = (*(undefined * PTR32 (*)[2])REFP(0x10b94b4));
      }
      *(undefined4 * PTR32 *)((int)this + 0x74) = puVar3;
    }
    pvVar5 = (undefined *)0x0;
    if (pvVar2 != (undefined *)0x0) {
      do {
        F_00cb4540(*(undefined * PTR32 *)((int)this + 0x74),pvVar5,
                     *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xd0) + (*(int *)((int)this + 0xe4) + (int)pvVar5) * 4))))
        ;
        pvVar5 = (undefined *)((int)pvVar5 + 1);
      } while (pvVar5 < pvVar2);
    }
    F_00cb4650(*(undefined4 *)((int)this + 0x74),*(undefined4 *)((int)this + 0x74));
    piVar1 = *(int * PTR32 *)((int)this + 0x78);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1,*(undefined4 *)((int)this + 0x74));
      return 1;
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 0x74);
    if (puVar3 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
      *(undefined4 *)((int)this + 0x74) = 0;
    }
    ((code *)*(gen_code32 *)(*(int *)this + 0x90))(this,0,0,0);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf43 */
uint F_006cdb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6cdb20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  uVar2 = uVar2 - 2;
  if ((((uVar2 == 0) && (param_1[0x47] == 0)) &&
      (uVar2 = param_1[0x39], uVar2 == *(uint *)(this + 8))) &&
     ((param_1[0x3b] != 0 || (param_1[0x3c] != 0)))) {
    uVar2 = F_00a5f290(param_1);
    if (REFG(void * PTR32, 0x1379694) != (undefined *)0x0) {
      bVar1 = F_00aa1800(REFG(void * PTR32, 0x1379694),uVar2);
      if (bVar1 != 0) {
        uVar2 = F_00ab4370(0xa3,uVar2,uVar2,0,0);
        return uVar2;
      }
      uVar2 = F_00ab4370(0xa4,uVar2,uVar2,0,0);
    }
  }
  return uVar2;
}

/* ref: FUN_006cdbc0 */
uint F_006cdbc0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cdbc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar3 = 0;
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  puVar2 = (undefined4 *)F_00ab3930(uVar1);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = *puVar2;
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar3);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cdc30 */
uint F_006cdc30(unsigned int gen_a0)
{
  GEN_ENTER(0x6cdc30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  
  F_00a02210(((byte *)(gen_frame + 0x8)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar3);
  iVar1 = *piVar4;
  if (iVar1 != 0) {
    (*(uint *)(gen_frame + 0x28)) = 0;
    bVar2 = F_00a01f40(((byte *)(gen_frame + 0x8)),2);
    if (bVar2 != 0) {
      uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
      (*(uint *)(gen_frame + 0x28)) = uVar3;
    }
    if ((*(byte *)(iVar1 + 0x5c) & 1) == 0) {
      F_00a50880(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),1,&(*(uint *)(gen_frame + 0x28)),1);
      *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
    }
    uVar3 = F_00a02290(((byte *)(gen_frame + 0x8)),0);
    F_00a02240(((byte *)(gen_frame + 0x8)));
    return uVar3;
  }
  F_00a02240(((byte *)(gen_frame + 0x8)));
  return 0;
}

/* ref: FUN_006cdce0 */
uint F_006cdce0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cdce0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*(undefined4 *)&REFG(undefined2, 0x1379c78));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cdd20 */
uint F_006cdd20(unsigned int gen_a0)
{
  GEN_ENTER(0x6cdd20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00a01e40(((byte *)(gen_frame + 0xc)),2);
  if ((*(byte *)(iVar1 + 0x5c) & 1) == 0) {
    F_00a50ad0(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),2,uVar2);
    *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
  }
  uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return uVar2;
}

/* ref: FUN_006cdda0 */
uint F_006cdda0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cdda0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  if ((*(byte *)(iVar1 + 0x5c) & 1) == 0) {
    F_00a50880(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),3,0,0);
    *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
  }
  uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return uVar2;
}

/* ref: FUN_006cde10 */
uint F_006cde10(unsigned int gen_a0)
{
  GEN_ENTER(0x6cde10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)*(byte *)(*piVar2 + 0x1d4));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cde60 */
uint F_006cde60(unsigned int gen_a0)
{
  GEN_ENTER(0x6cde60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  uint uVar2;
  int * piVar3;
  bool bVar4;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  if (*((char *)GEN_TOP((*(int *)(*piVar3 + 0x2d4) + 0x35))) != '\0') {
    uVar2 = F_00ab1c90((uint)*((ushort *)GEN_TOP((*(int *)(*piVar3 + 0x2d4) + 0x28))));
    if (uVar2 != 0) {
      bVar4 = *(char *)(uVar2 + 0x2a) == '\x01';
      ((byte *)(gen_frame + 0x8))[0x20] = bVar4;
      goto LAB_006cdeba;
    }
  }
  uVar1 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32));
  ((byte *)(gen_frame + 0x8))[0x20] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = uVar1 & 0xffffff00;
LAB_006cdeba: ;
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006cdee0 */
uint F_006cdee0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cdee0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if ((*((char *)GEN_TOP((*(int *)(*piVar2 + 0x2d4) + 0x35))) == '\0') ||
     (*((char *)GEN_TOP((*(int *)(*piVar2 + 0x2d4) + 0x32))) == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  F_00a01ea0(((byte *)(gen_frame + 0xc)),uVar3);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cdf50 */
uint F_006cdf50(unsigned int gen_a0)
{
  GEN_ENTER(0x6cdf50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)(*((char *)GEN_TOP((*(int *)(*piVar2 + 0x2d4) + 0x35))) == '\0'));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cdfb0 */
uint F_006cdfb0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cdfb0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)*((byte *)GEN_TOP((*(int *)(*piVar2 + 0x2d4) + 0x32))));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006ce010 */
uint F_006ce010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ce010u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * PTR32 * ppvVar1;
  uint uVar2;
  int * piVar3;
  undefined * pvVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x10;
  ppvVar1 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
  if ((*(uint *)&gen_args[2]) < 0x11) {
    ppvVar1 = (undefined * PTR32 *)&(*(uint *)&gen_args[2]);
  }
  pvVar4 = *ppvVar1;
  uVar2 = 0;
  if (pvVar4 != (undefined *)0x0) {
    piVar3 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
    do {
      if (*piVar3 != 0) {
        *(int *)((*(int *)&gen_args[1]) + uVar2 * 4) = *piVar3;
        uVar2 = uVar2 + 1;
      }
      piVar3 = piVar3 + 1;
      pvVar4 = (undefined *)((int)pvVar4 + -1);
    } while (pvVar4 != (undefined *)0x0);
  }
  return uVar2;
}

/* ref: FUN_006ce060 */
uint F_006ce060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ce060u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte * pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x4)) = 0;
  uVar2 = 0;
  do {
    ((byte *)(gen_frame + 0x18))[(int)(uVar2)] = (byte)uVar2;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  uVar7 = 0;
  uVar2 = 0;
  uVar3 = 0;
  uVar4 = param_2 & 0xffff;
  do {
    uVar8 = uVar3;
    uVar6 = uVar2;
    uVar4 = uVar4 << 0xb ^ uVar4;
    uVar3 = (uVar8 >> 0xb ^ uVar4) >> 8 ^ uVar8 ^ uVar4;
    uVar5 = uVar7 + uVar3 % (0x10 - uVar7) & 0xff;
    pbVar1 = ((byte *)(gen_frame + 0x18)) + uVar7;
    pbVar1[param_1 - (int)((byte *)(gen_frame + 0x18))] = ((byte *)(gen_frame + 0x18))[(int)(uVar5)];
    uVar7 = uVar7 + 1;
    ((byte *)(gen_frame + 0x18))[(int)(uVar5)] = *pbVar1;
    uVar2 = (*(uint *)(gen_frame + 0x4));
    uVar4 = uVar6;
    (*(uint *)(gen_frame + 0x4)) = uVar8;
  } while (uVar7 < 0xf);
  *(byte *)(param_1 + 0xf) = ((byte *)(gen_frame + 0x18))[0xf];
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)(((byte *)(gen_frame + 0x18)) + uVar5);
}

/* ref: FUN_006ce120 */
byte F_006ce120(unsigned int gen_a0)
{
  GEN_ENTER(0x6ce120u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  ushort * puVar2;
  
  puVar2 = &REFG(undefined2, 0x10b6134);
  while( true ) {
    uVar1 = (uint)(*puVar2 >> 3);
    if ((uVar1 < 200) &&
       ((*(byte *)(uVar1 + 0x12ea + param_1) & (byte)(0x80 >> ((byte)*puVar2 & 7))) != 0)) break;
    puVar2 = puVar2 + 1;
    if (0x10b6139 < (int)puVar2) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_006ce1b0 */
uint F_006ce1b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ce1b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  *(int *)(*piVar2 + 0x5a4) = *(int *)(*piVar2 + 0x5a4) + 1;
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006ce200 */
uint F_006ce200(unsigned int gen_a0)
{
  GEN_ENTER(0x6ce200u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  *(undefined4 *)(*piVar2 + 0x5a4) = 0;
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006ce250 */
uint F_006ce250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x6ce250u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a3;
  undefined2 * param_4 = (undefined2 *)(uintptr_t)gen_a4;
  byte * param_5 = (byte *)(uintptr_t)gen_a5;
  byte * param_6 = (byte *)(uintptr_t)gen_a6;
  char cVar1;
  uint uVar2;
  uint uVar3;
  byte * pbVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  short * psVar8;
  
  if (*(uint *)((int)this + 0x5a4) <
      (uint)(*(int *)((int)this + 0x578) - *(int *)((int)this + 0x574) >> 2)) {
    psVar8 = ((short *)GEN_TOP((*(int *)((int)this + 0x574) + *(uint *)((int)this + 0x5a4) * 4)));
    if (psVar8 == (short *)0x0) goto LAB_006ce27f;
    sVar6 = *psVar8;
  }
  else {
    psVar8 = (short *)0x0;
LAB_006ce27f: ;
    sVar6 = 0;
  }
  uVar2 = F_00a4ffd0();
  iVar5 = 0;
  iVar7 = uVar2 + 0x1684;
  while (*(short *)(iVar7 + 4) != sVar6) {
    iVar5 = iVar5 + 1;
    iVar7 = iVar7 + 0x10;
    if (0xf < iVar5) {
      return uVar2;
    }
  }
  if (iVar5 < 0) {
    return uVar2;
  }
  *param_1 = (ushort)(*(byte *)(iVar7 + 8) & 7);
  if ((*(byte *)(iVar7 + 8) & 8) != 0) {
    uVar2 = F_00ab3300(0x13);
    *param_2 = *(undefined2 *)(uVar2 + 4);
  }
  if ((*(byte *)(iVar7 + 8) & 0x40) != 0) {
    uVar2 = F_00ab3300(0x14);
    *param_3 = *(undefined2 *)(uVar2 + 4);
  }
  uVar2 = (uint)*(byte *)(psVar8 + 1);
  if (uVar2 == 0x10) {
    if (REFG(char, 0x14ab29a) != '\x01') goto LAB_006ce337;
  }
  else if (uVar2 == 0x11) {
    if (REFG(char, 0x14ab29a) != '\x02') goto LAB_006ce337;
  }
  else if ((uVar2 != 0x12) || (REFG(char, 0x14ab29a) != '\x03')) goto LAB_006ce337;
  uVar3 = F_00ab3300(0x15);
  uVar2 = CONCAT22((short)(uVar3 >> 0x10),*(undefined2 *)(uVar3 + 4));
  *param_4 = *(undefined2 *)(uVar3 + 4);
LAB_006ce337: ;
  cVar1 = (char)psVar8[1];
  pbVar4 = ((byte *)GEN_TOP(CONCAT31((int3)(uVar2 >> 8),cVar1)));
  if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
    *param_5 = (byte)(*(ushort *)(iVar7 + 8) >> 7) & 7;
    pbVar4 = param_5;
  }
  cVar1 = (char)psVar8[1];
  if (((cVar1 == '\x10') || (cVar1 == '\x11')) || (cVar1 == '\x12')) {
    *param_6 = (byte)(*(ushort *)(iVar7 + 8) >> 7) & 0xf;
  }
  return CONCAT31((int3)((uint)((int)(uintptr_t)pbVar4) >> 8),cVar1);
}

/* ref: FUN_006ce380 */
uint F_006ce380(unsigned int gen_a0)
{
  GEN_ENTER(0x6ce380u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  undefined4 uVar4;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  if (((*(char *)(iVar1 + 0x265) == '\0') && (*(char *)(iVar1 + 0x266) == '\0')) &&
     (*(char *)(iVar1 + 0x267) == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  F_00a01ea0(((byte *)(gen_frame + 0xc)),uVar4);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006ce3f0 */
uint F_006ce3f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ce3f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)*(byte *)(*piVar2 + 0x265));
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006ce440 */
uint F_006ce440(unsigned int gen_a0)
{
  GEN_ENTER(0x6ce440u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)*(byte *)(*piVar2 + 0x266));
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006ce490 */
uint F_006ce490(unsigned int gen_a0)
{
  GEN_ENTER(0x6ce490u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)*(byte *)(*piVar2 + 0x267));
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006ce4e0 */
byte F_006ce4e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ce4e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x538) + param_1 * 0x10)));
  return *(int *)(iVar1 + param_2 * 0x14) == *(int *)(iVar1 + param_2 * 0x14 + 4);
}

/* ref: FUN_006ce510 */
unsigned int F_006ce510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ce510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  short * psVar3;
  
  uVar2 = 0;
  uVar1 = *(int *)((int)this + 0x578) - *(int *)((int)this + 0x574) >> 2;
  if (uVar1 != 0) {
    psVar3 = *(short * PTR32 *)((int)this + 0x574);
    while (*psVar3 != (short)param_1) {
      uVar2 = uVar2 + 1;
      psVar3 = psVar3 + 2;
      if (uVar1 <= uVar2) {
        return 0;
      }
    }
    *(uint *)((int)this + 0x5a4) = uVar2;
  }
  return 0;
}

/* ref: FUN_006ce560 */
uint F_006ce560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ce560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  ushort * puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  
  if ((*(uint *)((int)this + 0x5a4) <
       (uint)(*(int *)((int)this + 0x578) - *(int *)((int)this + 0x574) >> 2)) &&
     (puVar1 = ((ushort *)GEN_TOP((*(int *)((int)this + 0x574) + *(uint *)((int)this + 0x5a4) * 4))),
     puVar1 != (ushort *)0x0)) {
    uVar5 = *puVar1;
  }
  else {
    uVar5 = 0;
  }
  uVar2 = F_00a4ffd0();
  iVar3 = uVar2 + 0x1684;
  iVar4 = 0;
  do {
    if (*(ushort *)(iVar3 + 4) == uVar5) goto LAB_006ce5b2;
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x10;
  } while (iVar4 < 0x10);
  iVar4 = -1;
  iVar3 = 0;
LAB_006ce5b2: ;
  uVar2 = F_00ab3330((uint)uVar5);
  *param_1 = 0;
  if ((((-1 < iVar4) && (iVar3 != 0)) && (uVar2 != 0)) &&
     ((*(byte *)(iVar3 + 0xc) != 0 &&
      (uVar2 = F_006c3690((uint)*(byte *)(iVar3 + 0xc),(uint)*(byte *)(uVar2 + 0x55)),
      (char)uVar2 == '\0')))) {
    *param_1 = 1;
  }
  return uVar2;
}

/* ref: FUN_006ce600 */
byte F_006ce600(unsigned int gen_a0)
{
  GEN_ENTER(0x6ce600u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  short sVar1;
  uint uVar2;
  short * psVar3;
  int iVar4;
  
  sVar1 = *(short *)(in_ecx + 0x260);
  if (sVar1 != 0) {
    uVar2 = F_00a4ffd0();
    iVar4 = 0;
    psVar3 = (short *)(uVar2 + 0x13b8);
    do {
      if (*psVar3 == sVar1) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      psVar3 = psVar3 + 8;
    } while (iVar4 < 0x1e);
  }
  return 0;
}

/* ref: FUN_006ce640 */
byte F_006ce640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ce640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  
  if (*(char *)((int)this + 0x146) == '\x03') {
    return *(char *)((int)this + 0x148) != '\0';
  }
  bVar3 = *(char *)((int)this + 0x146) != '\x02';
  if (bVar3) {
    bVar1 = F_006be100(param_1);
    if (bVar1 == 0) {
      return 0;
    }
  }
  else {
    if ((*(byte *)((int)this + 0x14c) & 2) == 0) {
      return 0;
    }
    if (*(char *)((int)this + 0x14b) != (char)((uint)param_1 >> 0x10)) {
      return 0;
    }
  }
  if ((*(char *)((int)this + 0x148) != '\0') && (REFG(void * PTR32, 0x1379694) != (undefined *)0x0)) {
    if ((*(char *)((int)this + 0x145) == '\0') || (*(char *)((int)this + 0x145) == '\x01')) {
      if (bVar3) {
        uVar4 = 0xe1;
      }
      else {
        uVar4 = 0xde;
      }
      uVar2 = F_0071ce90(REFG(void * PTR32, 0x1379694),uVar4);
      if ((char)uVar2 == '\0') {
        return 0;
      }
      uVar4 = 0x10;
    }
    else {
      if (bVar3) {
        uVar4 = 0xd9;
      }
      else {
        uVar4 = 0xdd;
      }
      uVar2 = F_0071ce90(REFG(void * PTR32, 0x1379694),uVar4);
      if ((char)uVar2 == '\0') {
        return 0;
      }
      uVar4 = 0x11;
    }
    uVar2 = F_00a68280(&REFG(undefined1, 0x14ab070),uVar4,1);
    if (((short)uVar2 != 0) &&
       ((ushort)*(byte *)((int)this + 0x147) <= (ushort)((short)(((uVar2 & 0xffff) + 4) / 5) * 5)))
    {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_006ce740 */
uint F_006ce740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ce740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  bVar1 = F_006be920(this);
  if (((bVar1 != 0) && (*(int *)((int)this + 0x120) != 0)) && (*(int *)((int)this + 0x124) != 0)) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    if (piVar2 != (int *)0x0) {
      uVar3 = F_0042a990(*(undefined4 *)((int)this + 0x124));
      uVar7 = 0;
      uVar6 = 0;
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2,0x26f)));
      uVar3 = F_0043bd00(this_00,uVar6,uVar7,uVar3);
      uVar4 = F_0042a990(*(undefined4 *)((int)this + 0x120));
      uVar3 = F_0042ce40(((undefined4 *)(gen_frame + 0x4)),"%s%s%s",uVar4,uVar3);
      F_0042ccf0(param_1,uVar3);
      uVar5 = F_0042c880(((undefined4 *)(gen_frame + 0x4)));
      ((undefined4 *)(gen_frame + 0x4))[0] = 0x6ce7ec;
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
      return (uint)uVar5;
    }
  }
  uVar3 = F_0042e430(param_1,&REFG(undefined, 0x10b3a52));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar3;
}

/* ref: FUN_006ce820 */
uint F_006ce820(unsigned int gen_a0)
{
  GEN_ENTER(0x6ce820u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  switch((unsigned int)(uintptr_t)(*(undefined1 *)(in_ecx + 0x145))) {
  case 0: ;
    return (uint)(*(char *)(in_ecx + 0x146) == '\x02') * 4 + 1;
  case 1: ;
    return (uint)(*(char *)(in_ecx + 0x146) == '\x02') * 4 + 2;
  case 2: ;
    return (uint)(*(char *)(in_ecx + 0x146) == '\x02') * 4 + 3;
  case 3: ;
    return (uint)(*(char *)(in_ecx + 0x146) == '\x02') * 4 + 4;
  default: ;
    return 0;
  }
}

/* ref: FUN_006ce8a0 */
byte F_006ce8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ce8a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)(param_2 + param_1 * 0x28) >> 3;
  if (uVar3 < 0x28) {
    uVar2 = F_00a4ffd0();
    bVar1 = *(byte *)(uVar2 + 0x113c + uVar3);
  }
  else {
    bVar1 = 0;
  }
  return (bVar1 & (byte)(0x80 >> ((byte)param_2 & 7))) != 0;
}

/* ref: FUN_006ce8e0 */
byte F_006ce8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ce8e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  
  uVar4 = (uint)(param_2 + param_1 * 0x28) >> 3;
  if (0x27 < uVar4) {
    return 0;
  }
  uVar2 = F_00a4ffd0();
  bVar3 = (byte)(0x80 >> ((byte)param_2 & 7));
  if ((*(byte *)(uVar2 + 0x113c + uVar4) & bVar3) != 0) {
    return 0;
  }
  if (uVar4 < 0x28) {
    uVar2 = F_00a4ffd0();
    bVar1 = *(byte *)(uVar2 + 0x113c + uVar4);
  }
  else {
    bVar1 = 0;
  }
  uVar2 = F_00a4ffd0();
  *(byte *)(uVar2 + 0x113c + uVar4) = bVar3 | bVar1;
  return 1;
}

/* ref: FUN_006ce950 */
uint F_006ce950(unsigned int gen_a0)
{
  GEN_ENTER(0x6ce950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x220];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  int iVar4;
  uint * this_00;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x21c);
  (*(uint *)(gen_frame + 0x218)) = uVar1;
  if ((REFG(void * PTR32, 0x132412c) == this) && (REFG(int, 0x1324130) != 0)) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar1 = 0;
    if (piVar2 != (int *)0x0) {
      if (REFG(char, 0x1324138) == '\0') {
        REFG(undefined1, 0x1324139) = 1;
        F_00c47745((*(uint *)(gen_frame + 0x218)) ^ (uint)(uint)(gen_frame + 0x21c));
        return (uint)piVar2;
      }
      puVar3 = ((undefined4 *)(gen_frame + 0x8));
      iVar4 = 0x41;
      do {
        *puVar3 = 0;
        puVar3 = puVar3 + 2;
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
      F_006be3d0(this,((undefined4 *)(gen_frame + 0x8)));
      piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
      ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,REFG(int, 0x1324130),0x42,((undefined4 *)(gen_frame + 0x8)));
      this_00 = &(*(uint *)(gen_frame + 0x218));
      iVar4 = 0x41;
      do {
        this_00 = this_00 + -2;
        uVar1 = F_005a2670(this_00);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x218)) ^ (uint)(uint)(gen_frame + 0x21c));
  return uVar1;
}

/* ref: FUN_006cea30 */
uint F_006cea30(unsigned int gen_a0)
{
  GEN_ENTER(0x6cea30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  
  ((uint *)(gen_frame + 0x8))[8] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  **(undefined1 * PTR32 *)((int)this + 0x10c) = 0xff;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10c) + 1))) = 0xff;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10c) + 2))) = 0xff;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10c) + 3))) = 0xff;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10c) + 4))) = 0xff;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10c) + 5))) = 0xff;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10c) + 6))) = 0xff;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10c) + 7))) = 0xff;
  iVar5 = 0;
  cVar4 = '\0';
  ((uint *)(gen_frame + 0x8))[0] = 0;
  ((uint *)(gen_frame + 0x8))[1] = 0;
  ((uint *)(gen_frame + 0x8))[2] = 0;
  ((uint *)(gen_frame + 0x8))[3] = 0;
  ((uint *)(gen_frame + 0x8))[4] = 0;
  ((uint *)(gen_frame + 0x8))[5] = 0;
  ((uint *)(gen_frame + 0x8))[6] = 0;
  ((uint *)(gen_frame + 0x8))[7] = 0;
  uVar3 = 0;
  do {
    iVar1 = *(int *)((int)this + 0x10c);
    if (0 < *(int *)(uVar3 + 0x68 + iVar1)) {
      uVar2 = *(uint *)(uVar3 + 0x68 + iVar1);
      *(char *)(iVar1 + iVar5) = cVar4;
      ((uint *)(gen_frame + 0x8))[(int)(iVar5)] = uVar2;
      iVar5 = iVar5 + 1;
    }
    uVar3 = uVar3 + 0x74;
    cVar4 = cVar4 + '\x01';
  } while (uVar3 < 0x3a0);
  if (*(char *)((int)this + 0x146) == '\x03') {
    uVar3 = F_006cd980(this,((uint *)(gen_frame + 0x8)),iVar5,(uint)*(byte *)((int)this + 0x14a));
    F_00c47745(((uint *)(gen_frame + 0x8))[8] ^ (uint)(uint)(gen_frame + 0x2c));
    return uVar3;
  }
  uVar3 = F_006cd8f0(this,((uint *)(gen_frame + 0x8)),iVar5,(uint)*(byte *)((int)this + 0x14a));
  F_00c47745(((uint *)(gen_frame + 0x8))[8] ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar3;
}

/* ref: Client::Game::Event::CustomTalkEventHandler::vf5 */
byte F_006ceb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ceb20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar1 = REFG(int, 0x1379694);
  if (REFG(int, 0x1379694) != 0) {
    iVar5 = param_1[0x1e];
    iVar4 = param_1[0x20];
    uVar6 = 1;
    uVar3 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
    bVar2 = F_006beac0(this,iVar1,uVar3,iVar4,iVar5,uVar6);
    return bVar2;
  }
  return 0;
}

/* ref: Client::Game::Event::CustomTalkEventHandler::vf17 */
byte F_006ceb60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ceb60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  piVar1 = REFG(int * PTR32, 0x1379694);
  if (REFG(int * PTR32, 0x1379694) != (int *)0x0) {
    iVar5 = REFG(int * PTR32, 0x1379694)[0x1e];
    iVar4 = REFG(int * PTR32, 0x1379694)[0x20];
    uVar6 = 0xf;
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 4))))(REFG(int * PTR32, 0x1379694));
    bVar2 = F_006beac0(this,piVar1,uVar3,iVar4,iVar5,uVar6);
    return bVar2;
  }
  return 0;
}

/* ref: FUN_006ceba0 */
uint F_006ceba0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ceba0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar3);
  iVar1 = *piVar4;
  if (iVar1 != 0) {
    bVar2 = F_00a01f60(((byte *)(gen_frame + 0xc)),2);
    if (bVar2 != 0) {
      uVar3 = F_00a01e40(((byte *)(gen_frame + 0xc)),2);
      if ((*(byte *)(iVar1 + 0x5c) & 1) == 0) {
        F_00a50ad0(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),0x32,uVar3);
        *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
      }
      uVar3 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
      F_00a02240(((byte *)(gen_frame + 0xc)));
      return uVar3;
    }
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006cec40 */
uint F_006cec40(unsigned int gen_a0)
{
  GEN_ENTER(0x6cec40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a02210(((byte *)(gen_frame + 0x4)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x4)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    (*(uint *)(gen_frame + 0x24)) = 0;
    (*(uint *)(gen_frame + 0x28)) = 0;
    uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),2);
    (*(uint *)(gen_frame + 0x24)) = uVar2;
    uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),3);
    (*(uint *)(gen_frame + 0x28)) = uVar2;
    if ((*(byte *)(iVar1 + 0x5c) & 1) == 0) {
      F_00a50880(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),0x33,&(*(uint *)(gen_frame + 0x24)),2);
      *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
    }
    uVar2 = F_00a02290(((byte *)(gen_frame + 0x4)),0);
    F_00a02240(((byte *)(gen_frame + 0x4)));
    return uVar2;
  }
  F_00a02240(((byte *)(gen_frame + 0x4)));
  return 0;
}

/* ref: FUN_006cecf0 */
uint F_006cecf0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cecf0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  
  F_00a02210(((byte *)(gen_frame + 0x8)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
    (*(uint *)(gen_frame + 0x28)) = uVar2;
    uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),3);
    uVar2 = (*(uint *)(gen_frame + 0x28));
    uVar5 = F_00a01e40(((byte *)(gen_frame + 0x8)),4);
    if ((*(byte *)(iVar1 + 0x5c) & 1) == 0) {
      F_00a50c40(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),0x34,uVar4,uVar2,uVar5
                  );
      *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
    }
    uVar2 = F_00a02290(((byte *)(gen_frame + 0x8)),0);
    F_00a02240(((byte *)(gen_frame + 0x8)));
    return uVar2;
  }
  F_00a02240(((byte *)(gen_frame + 0x8)));
  return 0;
}

/* ref: FUN_006cedb0 */
uint F_006cedb0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cedb0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  
  F_00a02210(((byte *)(gen_frame + 0x8)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
    (*(uint *)(gen_frame + 0x28)) = uVar2;
    uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),3);
    uVar2 = (*(uint *)(gen_frame + 0x28));
    uVar5 = F_00a01e40(((byte *)(gen_frame + 0x8)),4);
    if ((*(byte *)(iVar1 + 0x5c) & 1) == 0) {
      F_00a50c40(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),0x43,uVar4,uVar2,uVar5
                  );
      *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
    }
    uVar2 = F_00a02290(((byte *)(gen_frame + 0x8)),0);
    F_00a02240(((byte *)(gen_frame + 0x8)));
    return uVar2;
  }
  F_00a02240(((byte *)(gen_frame + 0x8)));
  return 0;
}

/* ref: FUN_006cee70 */
uint F_006cee70(unsigned int gen_a0)
{
  GEN_ENTER(0x6cee70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  undefined4 uVar5;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  F_00a02210(((byte *)(gen_frame + 0x4)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x4)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),1,uVar3);
  iVar1 = *piVar4;
  if (iVar1 != 0) {
    bVar2 = F_00a01f60(((byte *)(gen_frame + 0x4)),2);
    if (bVar2 != 0) {
      bVar2 = F_00a01f60(((byte *)(gen_frame + 0x4)),3);
      if (bVar2 != 0) {
        uVar5 = REFG(undefined4, 0x108cc50);
        uVar3 = F_00a01e40(((byte *)(gen_frame + 0x4)),2);
        F_0042cc20(((undefined1 *)(gen_frame + 0x24)),uVar3,uVar5);
        F_0042e370(((undefined1 *)(gen_frame + 0x24)),&REFG(undefined, 0x10b696c));
        uVar3 = F_00a01e40(((byte *)(gen_frame + 0x4)),3);
        F_0042e370(((undefined1 *)(gen_frame + 0x24)),uVar3);
        uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x24)));
        if ((*(byte *)(iVar1 + 0x5c) & 1) == 0) {
          F_00a50ad0(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),0x41,uVar3);
          *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
        }
        uVar3 = F_00a02290(((byte *)(gen_frame + 0x4)),0);
        F_0042c880(((undefined1 *)(gen_frame + 0x24)));
        F_00a02240(((byte *)(gen_frame + 0x4)));
        F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
        return uVar3;
      }
    }
  }
  F_00a02240(((byte *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 0;
}

/* ref: FUN_006cef80 */
uint F_006cef80(unsigned int gen_a0)
{
  GEN_ENTER(0x6cef80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  
  F_00a02210(((byte *)(gen_frame + 0x4)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x4)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),1,uVar3);
  iVar2 = *piVar4;
  if (iVar2 != 0) {
    uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),2);
    uVar5 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),3);
    bVar1 = *(byte *)(iVar2 + 0x5c);
    (*(uint *)(gen_frame + 0x28)) = 0;
    (*(uint *)(gen_frame + 0x24)) = uVar3;
    (*(uint *)(gen_frame + 0x28)) = uVar5;
    if ((bVar1 & 1) == 0) {
      F_00a50880(*(undefined4 *)(iVar2 + 8),(uint)*(ushort *)(iVar2 + 0x54),0x44,&(*(uint *)(gen_frame + 0x24)),2);
      *(byte *)(iVar2 + 0x5c) = *(byte *)(iVar2 + 0x5c) | 1;
    }
    uVar3 = F_00a02290(((byte *)(gen_frame + 0x4)),0);
    F_00a02240(((byte *)(gen_frame + 0x4)));
    return uVar3;
  }
  F_00a02240(((byte *)(gen_frame + 0x4)));
  return 0;
}

/* ref: FUN_006cf030 */
uint F_006cf030(unsigned int gen_a0)
{
  GEN_ENTER(0x6cf030u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  F_00a02210(((byte *)(gen_frame + 0x8)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar3);
  iVar2 = *piVar4;
  if (iVar2 != 0) {
    uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
    bVar1 = *(byte *)(iVar2 + 0x5c);
    (*(uint *)(gen_frame + 0x28)) = uVar3;
    if ((bVar1 & 1) == 0) {
      F_00a50880(*(undefined4 *)(iVar2 + 8),(uint)*(ushort *)(iVar2 + 0x54),0x45,&(*(uint *)(gen_frame + 0x28)),1);
      *(byte *)(iVar2 + 0x5c) = *(byte *)(iVar2 + 0x5c) | 1;
    }
    uVar3 = F_00a02290(((byte *)(gen_frame + 0x8)),0);
    F_00a02240(((byte *)(gen_frame + 0x8)));
    return uVar3;
  }
  F_00a02240(((byte *)(gen_frame + 0x8)));
  return 0;
}

/* ref: FUN_006cf0c0 */
uint F_006cf0c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cf0c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  undefined4 uVar5;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  F_00a02210(((byte *)(gen_frame + 0x4)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x4)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),1,uVar3);
  iVar1 = *piVar4;
  if (iVar1 == 0) {
    F_00a02240(((byte *)(gen_frame + 0x4)));
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return 0;
  }
  bVar2 = F_00a01f60(((byte *)(gen_frame + 0x4)),2);
  if (bVar2 != 0) {
    bVar2 = F_00a01f60(((byte *)(gen_frame + 0x4)),3);
    if (bVar2 != 0) {
      uVar5 = REFG(undefined4, 0x108cc50);
      uVar3 = F_00a01e40(((byte *)(gen_frame + 0x4)),2);
      F_0042cc20(((undefined1 *)(gen_frame + 0x24)),uVar3,uVar5);
      F_0042e370(((undefined1 *)(gen_frame + 0x24)),&REFG(undefined, 0x10b6970));
      uVar3 = F_00a01e40(((byte *)(gen_frame + 0x4)),3);
      F_0042e370(((undefined1 *)(gen_frame + 0x24)),uVar3);
      uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x24)));
      if ((*(byte *)(iVar1 + 0x5c) & 1) == 0) {
        F_00a50ad0(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),0x42,uVar3);
        *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
      }
      uVar3 = F_00a02290(((byte *)(gen_frame + 0x4)),0);
      F_0042c880(((undefined1 *)(gen_frame + 0x24)));
      F_00a02240(((byte *)(gen_frame + 0x4)));
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return uVar3;
    }
  }
  if ((*(byte *)(iVar1 + 0x5c) & 1) == 0) {
    F_00a50880(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),0x42,0,0);
    *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
  }
  uVar3 = F_00a02290(((byte *)(gen_frame + 0x4)),0);
  F_00a02240(((byte *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar3;
}

/* ref: FUN_006cf210 */
uint F_006cf210(unsigned int gen_a0)
{
  GEN_ENTER(0x6cf210u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    if ((*(byte *)(iVar1 + 0x5c) & 1) == 0) {
      F_00a50880(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),0x35,0,0);
      *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
    }
    uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar2;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006cf290 */
uint F_006cf290(unsigned int gen_a0)
{
  GEN_ENTER(0x6cf290u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    if ((*(byte *)(iVar1 + 0x5c) & 1) == 0) {
      F_00a50880(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),0x40,0,0);
      *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
    }
    uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar2;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006cf310 */
uint F_006cf310(unsigned int gen_a0)
{
  GEN_ENTER(0x6cf310u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    if ((*(byte *)(iVar1 + 0x5c) & 1) == 0) {
      F_00a50880(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),0x46,0,0);
      *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
    }
    uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar2;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006cf390 */
uint F_006cf390(unsigned int gen_a0)
{
  GEN_ENTER(0x6cf390u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar3);
  iVar1 = *piVar4;
  if (iVar1 != 0) {
    bVar2 = F_00a01f60(((byte *)(gen_frame + 0xc)),2);
    if (bVar2 != 0) {
      bVar2 = F_00a01f40(((byte *)(gen_frame + 0xc)),3);
      if (bVar2 != 0) {
        uVar3 = F_00a01e40(((byte *)(gen_frame + 0xc)),2);
        *(uint *)&REFG(undefined, 0x14a6568) = F_00a37120(&REFG(undefined, 0x14a4230));
        uVar5 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),3);
        if ((*(byte *)(iVar1 + 0x5c) & 1) == 0) {
          F_00a50c40(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),0x36,uVar5,0,uVar3
                      );
          *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
        }
        uVar3 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
        F_00a02240(((byte *)(gen_frame + 0xc)));
        return uVar3;
      }
    }
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006cf460 */
uint F_006cf460(unsigned int gen_a0)
{
  GEN_ENTER(0x6cf460u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  
  F_00a02210(((byte *)(gen_frame + 0x4)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x4)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),1,uVar3);
  iVar1 = *piVar4;
  if (iVar1 != 0) {
    bVar2 = F_00a01f40(((byte *)(gen_frame + 0x4)),2);
    if (bVar2 != 0) {
      uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),2);
      *(uint *)&REFG(undefined, 0x14a6568) = F_00a37140(&REFG(undefined, 0x14a4230),uVar3);
      bVar2 = *(byte *)(iVar1 + 0x5c);
      (*(undefined4 *)(gen_frame + 0x24)) = (&REFG(undefined4, 0x14a63ac))[*(uint *)&REFG(undefined, 0x14a6568) * 0xe];
      (*(undefined4 *)(gen_frame + 0x28)) = (&REFG(undefined4, 0x14a63a8))[*(uint *)&REFG(undefined, 0x14a6568) * 0xe];
      if ((bVar2 & 1) == 0) {
        F_00a50880(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),0x37,&(*(undefined4 *)(gen_frame + 0x24)),2);
        *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
      }
      uVar3 = F_00a02290(((byte *)(gen_frame + 0x4)),0);
      F_00a02240(((byte *)(gen_frame + 0x4)));
      return uVar3;
    }
  }
  F_00a02240(((byte *)(gen_frame + 0x4)));
  return 0;
}

/* ref: FUN_006cf550 */
uint F_006cf550(unsigned int gen_a0)
{
  GEN_ENTER(0x6cf550u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    if ((*(byte *)(iVar1 + 0x5c) & 1) == 0) {
      F_00a50880(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),0x38,0,0);
      *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
    }
    uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar2;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006cf5d0 */
uint F_006cf5d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cf5d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  
  F_00a02210(((byte *)(gen_frame + 0x4)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x4)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),1,uVar3);
  iVar1 = *piVar4;
  if (iVar1 != 0) {
    bVar2 = F_00a01f40(((byte *)(gen_frame + 0x4)),2);
    if (bVar2 != 0) {
      uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),2);
      *(uint *)&REFG(undefined, 0x14a6568) = F_00a37140(&REFG(undefined, 0x14a4230),uVar3);
      (*(undefined4 *)(gen_frame + 0x24)) = (&REFG(undefined4, 0x14a63ac))[*(uint *)&REFG(undefined, 0x14a6568) * 0xe];
      (*(undefined4 *)(gen_frame + 0x28)) = (&REFG(undefined4, 0x14a63a8))[*(uint *)&REFG(undefined, 0x14a6568) * 0xe];
      if ((*(byte *)(iVar1 + 0x5c) & 1) == 0) {
        F_00a50880(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),0x39,&(*(undefined4 *)(gen_frame + 0x24)),2);
        *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
      }
      uVar3 = F_00a02290(((byte *)(gen_frame + 0x4)),0);
      F_00a02240(((byte *)(gen_frame + 0x4)));
      return uVar3;
    }
  }
  F_00a02240(((byte *)(gen_frame + 0x4)));
  return 0;
}

/* ref: FUN_006cf6c0 */
uint F_006cf6c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cf6c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar4 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar5 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar4);
  iVar1 = *piVar5;
  if (iVar1 != 0) {
    bVar3 = F_00a01f40(((byte *)(gen_frame + 0xc)),2);
    if (bVar3 != 0) {
      bVar3 = F_00a01f40(((byte *)(gen_frame + 0xc)),3);
      if (bVar3 != 0) {
        uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),3);
        uVar4 = F_00a37140(&REFG(undefined, 0x14a4230),uVar4);
        uVar6 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
        uVar2 = (&REFG(undefined4, 0x14a63ac))[uVar4 * 0xe];
        (*(uint *)(gen_frame + 0x2c)) = uVar6;
        (*(undefined4 *)(gen_frame + 0x30)) = uVar2;
        (*(undefined4 *)(gen_frame + 0x34)) = (&REFG(undefined4, 0x14a63a8))[uVar4 * 0xe];
        *(uint *)&REFG(undefined, 0x14a6568) = uVar4;
        if ((*(byte *)(iVar1 + 0x5c) & 1) == 0) {
          F_00a50880(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),0x3a,&(*(uint *)(gen_frame + 0x2c)),3);
          *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
        }
        uVar4 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
        F_00a02240(((byte *)(gen_frame + 0xc)));
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
        return uVar4;
      }
    }
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return 0;
}

/* ref: FUN_006cf7f0 */
uint F_006cf7f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cf7f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  
  F_00a02210(((byte *)(gen_frame + 0x4)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x4)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),1,uVar3);
  iVar1 = *piVar4;
  if (iVar1 != 0) {
    bVar2 = F_00a01f40(((byte *)(gen_frame + 0x4)),2);
    if (bVar2 != 0) {
      uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),2);
      uVar3 = F_00a37140(&REFG(undefined, 0x14a4230),uVar3);
      bVar2 = *(byte *)(iVar1 + 0x5c);
      (*(undefined4 *)(gen_frame + 0x24)) = (&REFG(undefined4, 0x14a63ac))[uVar3 * 0xe];
      (*(undefined4 *)(gen_frame + 0x28)) = (&REFG(undefined4, 0x14a63a8))[uVar3 * 0xe];
      if ((bVar2 & 1) == 0) {
        F_00a50880(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),0x3b,&(*(undefined4 *)(gen_frame + 0x24)),2);
        *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
      }
      uVar3 = F_00a02290(((byte *)(gen_frame + 0x4)),0);
      F_00a02240(((byte *)(gen_frame + 0x4)));
      return uVar3;
    }
  }
  F_00a02240(((byte *)(gen_frame + 0x4)));
  return 0;
}

/* ref: FUN_006cf8d0 */
uint F_006cf8d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cf8d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    if ((*(byte *)(iVar1 + 0x5c) & 1) == 0) {
      F_00a50880(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),0x3c,0,0);
      *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
    }
    uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar2;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006cf950 */
uint F_006cf950(unsigned int gen_a0)
{
  GEN_ENTER(0x6cf950u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  if (*piVar3 != 0) {
    bVar1 = F_00a01f40(((byte *)(gen_frame + 0xc)),2);
    if (bVar1 != 0) {
      uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
      *(uint *)&REFG(undefined, 0x14a6568) = F_00a37140(&REFG(undefined, 0x14a4230),uVar2);
    }
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006cf9c0 */
uint F_006cf9c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cf9c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  int iVar4;
  byte * pbVar5;
  undefined4 uVar6;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*piVar2 != 0) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar6 = 1;
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
    uVar1 = F_00763050(uVar1,uVar6);
    puVar3 = (undefined4 *)F_007806c0(uVar1);
    pbVar5 = &(*(byte *)(gen_frame + 0x2c));
    for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pbVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      pbVar5 = pbVar5 + 4;
    }
    *(undefined2 *)pbVar5 = *(undefined2 *)puVar3;
    pbVar5[2] = *(byte *)((int)puVar3 + 2);
    F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)(*(byte *)(gen_frame + 0x2c)));
    F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)(*(byte *)(gen_frame + 0x2d)));
    F_00a39f40();
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return 2;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 2;
}

/* ref: FUN_006cfa80 */
uint F_006cfa80(unsigned int gen_a0)
{
  GEN_ENTER(0x6cfa80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    if ((*(byte *)(iVar1 + 0x5c) & 1) == 0) {
      F_00a50880(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),0x47,0,0);
      *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
    }
    uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar2;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006cfb00 */
uint F_006cfb00(unsigned int gen_a0)
{
  GEN_ENTER(0x6cfb00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  
  F_00a02210(((byte *)(gen_frame + 0x8)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar3);
  iVar1 = *piVar4;
  if (iVar1 != 0) {
    bVar2 = F_00a01f40(((byte *)(gen_frame + 0x8)),2);
    if (bVar2 != 0) {
      uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
      bVar2 = *(byte *)(iVar1 + 0x5c);
      (*(uint *)(gen_frame + 0x28)) = uVar3;
      if ((bVar2 & 1) == 0) {
        F_00a50880(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),0x48,&(*(uint *)(gen_frame + 0x28)),1);
        *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
      }
      uVar3 = F_00a02290(((byte *)(gen_frame + 0x8)),0);
      F_00a02240(((byte *)(gen_frame + 0x8)));
      return uVar3;
    }
  }
  F_00a02240(((byte *)(gen_frame + 0x8)));
  return 0;
}

/* ref: FUN_006cfba0 */
uint F_006cfba0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cfba0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*piVar2 != 0) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar3 = 0x37;
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
    piVar2 = (int *)F_00763050(uVar1,uVar3);
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
    }
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006cfc10 */
uint F_006cfc10(unsigned int gen_a0)
{
  GEN_ENTER(0x6cfc10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    uVar2 = F_00a37110(&REFG(undefined, 0x14a4230));
    uVar2 = F_00a64490(&REFG(undefined, 0x14a9a18),&REFG(undefined, 0x14a63bc) + uVar2 * 0x38,0);
    if (uVar2 != 0) {
      F_00aa0980(uVar2,(float)(float10)0,0);
      F_00aa0980(uVar2,(float)(float10)0,1);
      *(uint *)(uVar2 + 0x11c) = *(ushort *)(uVar2 + 0x11c) | 0x40;
    }
    if ((*(byte *)(iVar1 + 0x5c) & 1) == 0) {
      F_00a50880(*(undefined4 *)(iVar1 + 8),(uint)*(ushort *)(iVar1 + 0x54),0x3d,0,0);
      *(byte *)(iVar1 + 0x5c) = *(byte *)(iVar1 + 0x5c) | 1;
    }
    uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
    F_00a02240(((byte *)(gen_frame + 0xc)));
    return uVar2;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006cfcf0 */
uint F_006cfcf0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cfcf0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*piVar2 == 0) {
    F_00a01ec0(((byte *)(gen_frame + 0xc)),&REFG(undefined, 0x10b6974));
    uVar1 = 0;
    uVar3 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8));
  }
  else {
    uVar1 = F_00a37110(&REFG(undefined, 0x14a4230));
    F_00a01ec0(((byte *)(gen_frame + 0xc)),&REFG(undefined, 0x14a63bc) + uVar1 * 0x38);
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 0x1c))))(REFG(int * PTR32, 0x1379694));
    uVar1 = (uVar1 & 0xff) + 1 & 0x80000001;
    uVar3 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8));
  }
  F_00b9ae00(uVar3,uVar1);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 2;
}

/* ref: FUN_006cfda0 */
uint F_006cfda0(unsigned int gen_a0)
{
  GEN_ENTER(0x6cfda0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  int * piVar3;
  undefined4 uVar4;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  if (*piVar3 == 0) {
    uVar2 = 0;
    uVar4 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8));
  }
  else {
    bVar1 = F_00a379a0(&REFG(undefined, 0x14a4230));
    uVar2 = (uint)bVar1;
    uVar4 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8));
  }
  F_00b9ae00(uVar4,uVar2);
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006cfe10 */
uint F_006cfe10(unsigned int gen_a0)
{
  GEN_ENTER(0x6cfe10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x1b0];
  uint uVar1;
  int * piVar2;
  undefined * this;
  undefined8 * puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 * puVar7;
  
  (*(uint *)(gen_frame + 0x1a8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1ac);
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar1);
  if (*piVar2 != 0) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar6 = 2;
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2);
    this = (undefined *)F_00435440(uVar1,uVar6);
    F_00439400(this,((undefined8 *)(gen_frame + 0x28)));
    puVar3 = ((undefined8 *)(gen_frame + 0x28));
    iVar5 = 8;
    do {
      iVar4 = iVar5;
      if (*(char *)(puVar3 + 5) == '\0') {
        F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),0);
        F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),0);
        puVar7 = (undefined8 *)&REFG(undefined, 0x10b3a57);
      }
      else {
        F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),(int)((ulonglong)*puVar3 >> 0x20));
        F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),*(undefined4 *)puVar3);
        puVar7 = puVar3 + 1;
      }
      F_00a01ec0(((byte *)(gen_frame + 0x8)),puVar7);
      puVar3 = puVar3 + 6;
      iVar5 = iVar4 + -1;
    } while (iVar5 != 0);
    F_00a01890(((byte *)(gen_frame + 0x8)));
    F_00c47745((*(uint *)(gen_frame + 0x1a8)) ^ (uint)(uint)(gen_frame + 0x1ac));
    return iVar4 + 0x17;
  }
  F_00a01890(((byte *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x1a8)) ^ (uint)(uint)(gen_frame + 0x1ac));
  return 0;
}

/* ref: FUN_006cff40 */
uint F_006cff40(unsigned int gen_a0)
{
  GEN_ENTER(0x6cff40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  cVar1 = (char)uVar2;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),3);
  uVar2 = F_00ab3fa0((uVar2 & 0xff) + 1);
  if (uVar2 != 0) {
    uVar3 = 0;
    if (cVar1 == '\x01') {
      uVar3 = *(undefined4 *)(uVar2 + 0x14);
    }
    else if (cVar1 == '\x02') {
      uVar3 = *(undefined4 *)(uVar2 + 0x18);
    }
    else if (cVar1 == '\x03') {
      uVar3 = *(undefined4 *)(uVar2 + 0x1c);
    }
    F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar3);
    F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)*(byte *)(uVar2 + 0x22));
  }
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 2;
}

/* ref: Client::Game::Event::CustomTalkEventHandler::vf116 */
byte F_006cfff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6cfff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar1 = REFG(int, 0x1379694);
  if (REFG(int, 0x1379694) == 0) {
    return 0;
  }
  iVar5 = param_1[0x1e];
  iVar4 = param_1[0x20];
  uVar6 = 1;
  uVar3 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  bVar2 = F_006beac0(this,iVar1,uVar3,iVar4,iVar5,uVar6);
  return bVar2;
}

/* ref: FUN_006d002f */
unsigned int F_006d002f(void)
{
  GEN_ENTER(0x6d002fu, 0u, 0u, 0u, 0u);
  code * pcVar1;
  
  pcVar1 = ((code *)GEN_TOP(swi(3)));
  (*pcVar1)();
  return 0;
}

/* ref: Client::Game::Event::CustomTalkEventHandler::vf117 */
byte F_006d0030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d0030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  if (REFG(int, 0x1379694) == 0) {
    return 0;
  }
  bVar1 = F_006beb60(this,REFG(int, 0x1379694),param_1,param_2);
  return bVar1;
}

/* ref: FUN_006d0060 */
uint F_006d0060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6d0060u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2f0))) & 2) != 0) {
    iVar5 = (*(int * PTR32 *)&gen_args[1])[0x5d];
    if ((iVar5 == 0) || (uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1])), uVar2 != 1)) {
      iVar5 = 0;
    }
    if ((iVar5 != 0) && (*(int *)((*(int *)&gen_args[2]) + 0x174) != 0)) {
      uVar2 = F_0042a990(*(int *)((*(int *)&gen_args[2]) + 0x174) + 8);
      uVar3 = F_0042a990(iVar5 + 8);
      uVar4 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c);
      (*(uint *)&gen_args[3]) = F_00a030f0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))),"GetConditionId",uVar4,uVar3,uVar2,
                             (*(uint *)&gen_args[3]) & 0xff,(*(undefined4 *)&gen_args[4]),1);
      if (((*(uint *)&gen_args[3]) == 0) &&
         (bVar1 = F_00727410(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))),&(*(uint *)&gen_args[3])), bVar1 != 0)) {
        return (*(uint *)&gen_args[3]);
      }
    }
  }
  return 0x10;
}

/* ref: Client::Game::Event::CustomTalkEventHandler::vf132 */
uint F_006d0110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6d0110u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_006d0060(this,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Client::Game::Event::CustomTalkEventHandler::vf131 */
byte F_006d0120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6d0120u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_006d0060(this,param_1,param_2,param_3,param_4);
  return uVar1 == 0x11;
}

/* ref: FUN_006d0150 */
uint F_006d0150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6d0150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int * piVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 * this_00;
  int iVar4;
  
  uVar2 = 0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
  case 2: ;
    uVar2 = 0x21;
    break;
  case 1: ;
  case 3: ;
    uVar2 = 9;
  }
  uVar3 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),uVar2);
  *(uint *)((int)this + param_1 * 4 + 0x108) = uVar3;
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00,param_2,param_1);
    this_00[5] = param_2;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b91e8));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0x70c7d0));
  }
  *(undefined4 * PTR32 *)((int)this + param_1 * 4 + 0xf8) = this_00;
  iVar4 = 0;
  if (0 < param_2) {
    do {
      F_00cb4540(*(undefined * PTR32 *)((int)this + param_1 * 4 + 0xf8),iVar4,
                   *(undefined4 *)(param_3 + iVar4 * 4));
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_2);
  }
  piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 0x108);
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1,*(undefined4 *)((int)this + param_1 * 4 + 0xf8));
  return uVar3;
}

/* ref: FUN_006d0230 */
uint F_006d0230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d0230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined4 * puVar7;
  uint uVar8;
  int * piVar9;
  int * piVar10;
  undefined * this_00;
  int iVar11;
  uint * this_01;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined * PTR32 * ppuVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  uVar2 = *(ushort *)((int)this + 0x15a);
  uVar3 = *(ushort *)((int)this + 0x178);
  uVar4 = *(ushort *)((int)this + 0x15c);
  uVar5 = *(ushort *)((int)this + 0x17a);
  iVar12 = (int)((uint)*(ushort *)((int)this + 0x17c) * (uint)*(ushort *)((int)this + 0x15e)) / 100;
  puVar7 = ((undefined4 *)(gen_frame + 0x0));
  iVar11 = 0xe;
  do {
    *puVar7 = 0;
    puVar7 = puVar7 + 2;
    iVar11 = iVar11 + -1;
  } while (-1 < iVar11);
  *(undefined * PTR32 *)&REFG(undefined, 0x1324140) = this;
  F_005a2710(((undefined4 *)(gen_frame + 0x0)),4);
  uVar13 = *(undefined4 *)((int)this + 300);
  ((undefined4 *)(gen_frame + 0x0))[1] = 0;
  F_005a2710(((undefined1 *)(gen_frame + 0x68)),4);
  (*(undefined4 *)(gen_frame + 0x6c)) = uVar13;
  uVar8 = F_00ab6240(*(undefined4 *)((int)this + 300),0,param_1);
  F_005a2710(((undefined1 *)(gen_frame + 0x8)),6);
  uVar6 = *(ushort *)(param_1 + 0x7c);
  (*(uint *)(gen_frame + 0xc)) = uVar8;
  F_005a2710(((undefined1 *)(gen_frame + 0x10)),4);
  bVar1 = *(byte *)((int)this + 0x167);
  (*(uint *)(gen_frame + 0x14)) = (uint)uVar6;
  F_005a2710(((undefined1 *)(gen_frame + 0x18)),4);
  (*(uint *)(gen_frame + 0x1c)) = (uint)bVar1;
  F_005a2710(((undefined1 *)(gen_frame + 0x28)),4);
  (*(int *)(gen_frame + 0x2c)) = (int)((uint)uVar3 * (uint)uVar2) / 100;
  F_005a2710(((undefined1 *)(gen_frame + 0x38)),4);
  (*(int *)(gen_frame + 0x3c)) = iVar12;
  F_005a2710(((undefined1 *)(gen_frame + 0x70)),4);
  (*(int *)(gen_frame + 0x74)) = (int)((uint)uVar5 * (uint)uVar4) / 100;
  F_005a2710(((undefined1 *)(gen_frame + 0x20)),4);
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  F_005a2710(((undefined1 *)(gen_frame + 0x30)),4);
  (*(int *)(gen_frame + 0x34)) = iVar12;
  uVar2 = *(ushort *)((int)this + 0x122);
  F_005a2710(((undefined1 *)(gen_frame + 0x40)),4);
  (*(uint *)(gen_frame + 0x44)) = (uint)uVar2;
  bVar1 = *(byte *)((int)this + 0x121);
  F_005a2710(((undefined1 *)(gen_frame + 0x48)),4);
  (*(uint *)(gen_frame + 0x4c)) = (uint)bVar1;
  F_005a2710(((undefined1 *)(gen_frame + 0x60)),4);
  (*(undefined4 *)(gen_frame + 0x64)) = 1;
  F_006bed80(this,1,((undefined4 *)(gen_frame + 0x0)));
  piVar9 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (REFG(undefined4, 0x1324144) != 0) {
    piVar10 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar9 + 0x1c))(piVar9)));
    ((code *)*(gen_code32 *)(*piVar10 + 0x54))(piVar10,REFG(undefined4, 0x1324144),0);
  }
  uVar18 = 4;
  uVar17 = 0;
  uVar16 = 0;
  ppuVar15 = &REFG(undefined * PTR32, 0x132413c);
  puVar7 = ((undefined4 *)(gen_frame + 0x0));
  uVar14 = 0xf;
  uVar13 = 0x39;
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar9 + 0x1c))(piVar9)));
  REFG(undefined4, 0x1324144) = F_008668b0(this_00,uVar13,uVar14,puVar7,ppuVar15,uVar16,uVar17,uVar18);
  this_01 = &(*(uint *)(gen_frame + 0x78));
  iVar12 = 0xe;
  do {
    this_01 = this_01 + -2;
    uVar8 = F_005a2670(this_01);
    iVar12 = iVar12 + -1;
  } while (-1 < iVar12);
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar8;
}

/* ref: FUN_006d0480 */
uint F_006d0480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d0480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char local_5;
  
  if (*(char *)(param_2 + 0x188) != '\x05') {
    return 0x24a;
  }
  uVar2 = F_00ab1f00(param_1);
  if (uVar2 == 0) {
    return 0x243;
  }
  uVar4 = (uint)REFG(undefined1, 0x14ab0d4);
  local_5 = '\0';
  uVar3 = F_00ab21d0((uint)*(byte *)(uVar2 + 0xe));
  if ((uVar3 != 0) && (uVar4 < 0x1e)) {
    local_5 = *(char *)(uVar3 + 4 + uVar4);
  }
  uVar3 = F_00a68280(&REFG(undefined1, 0x14ab070),(int)*(char *)(uVar2 + 0x11),1);
  if ((ushort)uVar3 < (ushort)*(byte *)(uVar2 + 0xf)) {
    return (local_5 == '\0') + 0x23d;
  }
  if (local_5 != '\0') {
    if (((int)*(char *)(uVar2 + 0x11) == uVar4) || (*(char *)(uVar2 + 0xe) != '!')) {
LAB_006d0559: ;
      uVar3 = F_006bf0c0(this,param_1);
      if (uVar3 != 2) {
        bVar1 = F_006bf130(param_1,param_2,uVar2);
        return (-(uint)(bVar1 != 0) & 0xfffffdc5) + 0x23b;
      }
      return 0x243;
    }
    uVar3 = F_00ac30f0(1);
    iVar5 = 0;
    if (0 < (int)uVar3) {
      do {
        uVar4 = F_00ac3430(&REFG(undefined, 0x14bcf40),iVar5);
        if (uVar4 == param_1) goto LAB_006d0559;
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)uVar3);
    }
  }
  return 0x23e;
}

/* ref: FUN_006d05b0 */
byte F_006d05b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d05b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  byte bVar2;
  
  if (1999 < param_1) {
    return 0;
  }
  uVar1 = F_00a4ffd0();
  bVar2 = 0;
  if (param_1 >> 3 < 0xfa) {
    bVar2 = *((byte *)GEN_TOP(((param_1 >> 3) + 0x11f0 + uVar1)));
  }
  return (bVar2 & (byte)(0x80 >> ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_006d0600 */
byte F_006d0600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d0600u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (0x27 < param_2) {
    return 0;
  }
  uVar1 = F_00a4ffd0();
  return (*((byte *)GEN_TOP(((param_2 + param_1 * 0x28 >> 3) + 0x11a0 + uVar1))) &
         (byte)(0x80 >> ((byte)param_2 & 7))) != 0;
}

/* ref: FUN_006d0640 */
byte F_006d0640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d0640u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  
  if (0x27 < param_2) {
    return 0;
  }
  uVar2 = F_00a4ffd0();
  uVar4 = param_2 + param_1 * 0x28 >> 3;
  bVar3 = (byte)(0x80 >> ((byte)param_2 & 7));
  if ((*(byte *)(uVar4 + 0x11a0 + uVar2) & bVar3) != 0) {
    return 0;
  }
  uVar2 = F_00a4ffd0();
  bVar1 = *(byte *)(uVar4 + 0x11a0 + uVar2);
  uVar2 = F_00a4ffd0();
  *(byte *)(uVar2 + 0x11a0 + uVar4) = bVar1 | bVar3;
  return 1;
}

/* ref: FUN_006d06b0 */
byte F_006d06b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d06b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  short * psVar6;
  
  if (REFG(char, 0x14ab845) == '\0') {
    psVar6 = &REFG(undefined2, 0x14ab7d8);
    do {
      iVar5 = *(int *)(psVar6 + -2);
      if (iVar5 != 0) {
        bVar2 = *(byte *)(psVar6 + 2);
        if (bVar2 != 0) {
          if (*psVar6 == 9999) {
            uVar3 = F_006bf440(param_1,iVar5,(uint)bVar2);
            if (uVar3 != 0) {
              return 0;
            }
          }
          else {
            iVar1 = *(int *)(param_1 + 0xdc);
            *(int *)(param_1 + 4 + iVar1 * 4) = iVar5;
            *(byte *)(iVar1 + 0x7c + param_1) = bVar2;
            *(char *)(iVar1 + 0x9c + param_1) = (char)*psVar6;
            *(char *)(iVar1 + 0xbc + param_1) = (char)psVar6[1];
            *(int *)(param_1 + 0xdc) = iVar1 + 1;
          }
        }
        bVar2 = *(byte *)((int)psVar6 + 5);
        if (bVar2 != 0) {
          if (*psVar6 == 9999) {
            uVar3 = F_006bf440(param_1,iVar5 + 1000000,(uint)bVar2);
            if (uVar3 != 0) {
              return 0;
            }
          }
          else {
            iVar1 = *(int *)(param_1 + 0xdc);
            *(int *)(param_1 + 4 + iVar1 * 4) = iVar5 + 1000000;
            *(byte *)(iVar1 + 0x7c + param_1) = bVar2;
            *(char *)(iVar1 + 0x9c + param_1) = (char)*psVar6;
            *(char *)(iVar1 + 0xbc + param_1) = (char)psVar6[1];
            *(int *)(param_1 + 0xdc) = iVar1 + 1;
          }
        }
      }
      psVar6 = psVar6 + 6;
    } while ((int)psVar6 < 0x14ab838);
  }
  else {
    piVar4 = &REFG(undefined4, 0x14ab7d4);
    do {
      iVar5 = *piVar4;
      if (((iVar5 != 0) && (*(byte *)(piVar4 + 2) != 0)) &&
         (uVar3 = F_006bf440(param_1,iVar5,(uint)*(byte *)(piVar4 + 2)), uVar3 != 0)) {
        if (REFG(char, 0x14ab846) == '\0') {
          return 0;
        }
        uVar3 = F_006bf440(param_1,iVar5 + 1000000,uVar3);
        if (uVar3 != 0) {
          return 0;
        }
      }
      piVar4 = piVar4 + 3;
    } while ((int)piVar4 < 0x14ab834);
  }
  iVar5 = 0;
  piVar4 = &REFG(undefined4, 0x14ab834);
  while( true ) {
    if (((*piVar4 != 0) && ((byte)(&REFG(undefined1, 0x14ab842))[iVar5] != 0)) &&
       (bVar2 = F_006bf550(param_1,*piVar4,(uint)(byte)(&REFG(undefined1, 0x14ab842))[iVar5]), bVar2 == 0))
    break;
    piVar4 = piVar4 + 1;
    iVar5 = iVar5 + 1;
    if (0x14ab83b < (int)piVar4) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_006d0830 */
uint F_006d0830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6d0830u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint * puVar4;
  uint local_8;
  
  if ((**(char * PTR32 *)((int)this + 0x16c) != '\0') && (local_8 = 0, REFG(int * PTR32, 0x1379694) != (int *)0x0)) {
    iVar2 = REFG(int * PTR32, 0x1379694)[0x5d];
    if ((iVar2 == 0) || (uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 4))))(REFG(int * PTR32, 0x1379694)), uVar1 != 1)) {
      iVar2 = 0;
    }
    uVar1 = F_0042a990(iVar2 + 8);
    uVar3 = F_0042a990((int)this + 0x16c);
    uVar1 = F_00a028c0(*(undefined * PTR32 *)((int)this + 0xf8),"GetSequenceArgs",uVar3,uVar1,param_1 & 0xff,
                         param_3);
    if ((uVar1 == 0) && (param_3 != 0)) {
      puVar4 = (uint *)(param_2 + -4 + param_3 * 4);
      param_1 = param_3;
      do {
        *puVar4 = 0;
        iVar2 = *(int *)((int)this + 0xf8);
        uVar1 = F_00b9a9b0(*(undefined4 *)(iVar2 + 8),0xffffffff);
        if (uVar1 != 0) {
          uVar3 = F_00b9ab70(*(undefined4 *)(iVar2 + 8),0xffffffff);
          *puVar4 = uVar3;
        }
        F_00b9a760(*(undefined4 *)(iVar2 + 8),0xfffffffe);
        if (uVar1 != 0) {
          local_8 = local_8 + 1;
        }
        puVar4 = puVar4 + -1;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    return local_8;
  }
  return 0;
}

/* ref: Client::Game::Event::QuestEventHandler::vf127 */
uint F_006d0940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d0940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  
  iVar4 = REFG(int, 0x1379694);
  if (REFG(int, 0x1379694) == 0) {
    return 0;
  }
  iVar1 = *(int *)this;
  iVar2 = param_1[0x20];
  iVar3 = param_1[0x1e];
  uVar6 = ((code *)*(gen_code32 *)(*param_1 + 0xa8))(param_1);
  uVar6 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1,iVar2,iVar3,uVar6);
  uVar6 = ((code *)*(gen_code32 *)(iVar1 + 0x200))(this,uVar6);
  if ((uVar6 != 0) && (bVar5 = F_006c0470(iVar4,param_1), bVar5 != 0)) {
    return 0;
  }
  uVar7 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  if ((uVar7 == 2) && (uVar7 = F_00a5f290(param_1), *(char *)(uVar7 + 0x188) == '\x02')) {
    return 0;
  }
  return uVar6;
}

/* ref: FUN_006d09f0 */
uint F_006d09f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d09f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    if (REFG(int, 0x1324160) == 0) {
      REFG(int, 0x1324160) = iVar1;
      *(byte *)(iVar1 + 800) = *(byte *)(iVar1 + 800) | 0x10;
      F_00a7ed30(&REFG(undefined, 0x14afd38),iVar1 + 0x350,(uint)*(ushort *)(iVar1 + 0x1d4));
      uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
      F_00a02240(((byte *)(gen_frame + 0xc)));
      return uVar2;
    }
    F_00a01a20(((byte *)(gen_frame + 0xc)),&REFG(undefined, 0x10b6a20));
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006d0a90 */
uint F_006d0a90(unsigned int gen_a0)
{
  GEN_ENTER(0x6d0a90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    if (REFG(int, 0x1324170) == 0) {
      REFG(int, 0x1324170) = iVar1;
      *(byte *)(iVar1 + 800) = *(byte *)(iVar1 + 800) & 0xef;
      F_00a7ed30(&REFG(undefined, 0x14afd38),iVar1 + 0x350,(uint)*(ushort *)(iVar1 + 0x1d4));
      uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
      F_00a02240(((byte *)(gen_frame + 0xc)));
      return uVar2;
    }
    F_00a01a20(((byte *)(gen_frame + 0xc)),&REFG(undefined, 0x10b6a40));
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006d0b30 */
uint F_006d0b30(unsigned int gen_a0)
{
  GEN_ENTER(0x6d0b30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  puVar3 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  if ((undefined *)*puVar3 != (undefined *)0x0) {
    bVar1 = F_006bfaf0((undefined *)*puVar3);
    if (bVar1 != 0) {
      uVar2 = F_00a02290(((byte *)(gen_frame + 0xc)),0);
      F_00a02240(((byte *)(gen_frame + 0xc)));
      return uVar2;
    }
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006d0ba0 */
uint F_006d0ba0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d0ba0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)*(ushort *)(*piVar2 + 0x1d4));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: Client::Game::Event::QuestEventHandler::vf122 */
uint F_006d0bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d0bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint * puVar4;
  
  if (((**(char * PTR32 *)(this + 0x16c) != '\0') && (2 < param_2)) && (REFG(int * PTR32, 0x1379694) != (int *)0x0)) {
    iVar2 = REFG(int * PTR32, 0x1379694)[0x5d];
    if ((iVar2 == 0) || (uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 4))))(REFG(int * PTR32, 0x1379694)), uVar1 != 1)) {
      iVar2 = 0;
    }
    param_2 = 0;
    uVar1 = F_0042a990(iVar2 + 8);
    uVar3 = F_0042a990(this + 0x16c);
    uVar1 = F_00a02700(*(undefined * PTR32 *)(this + 0xf8),"GetEventItems",uVar3,uVar1,9);
    if (uVar1 == 0) {
      puVar4 = (uint *)(param_1 + 0x24);
      param_1 = 3;
      do {
        *(undefined1 *)(puVar4 + 1) = 0;
        *puVar4 = 0;
        puVar4[-1] = 0;
        F_00a01d80(*(undefined * PTR32 *)(this + 0xf8),puVar4 + 1);
        iVar2 = *(int *)(this + 0xf8);
        uVar1 = F_00b9a9b0(*(undefined4 *)(iVar2 + 8),0xffffffff);
        if (uVar1 != 0) {
          uVar1 = F_00b9ab70(*(undefined4 *)(iVar2 + 8),0xffffffff);
          *puVar4 = uVar1;
        }
        F_00b9a760(*(undefined4 *)(iVar2 + 8),0xfffffffe);
        iVar2 = *(int *)(this + 0xf8);
        uVar1 = F_00b9a9b0(*(undefined4 *)(iVar2 + 8),0xffffffff);
        if (uVar1 != 0) {
          uVar1 = F_00b9ab70(*(undefined4 *)(iVar2 + 8),0xffffffff);
          puVar4[-1] = uVar1;
        }
        F_00b9a760(*(undefined4 *)(iVar2 + 8),0xfffffffe);
        if (puVar4[-1] != 0) {
          param_2 = param_2 + 1;
        }
        puVar4 = puVar4 + -4;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    return param_2;
  }
  return 0;
}

/* ref: FUN_006d0d30 */
uint F_006d0d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6d0d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a3;
  undefined1 * param_4 = (undefined1 *)(uintptr_t)gen_a4;
  uint uVar1;
  int iVar2;
  uint uVar3;
  char * pcVar4;
  
  pcVar4 = *(char * PTR32 *)((int)this + 0x16c);
  if (*pcVar4 != '\0') {
    iVar2 = param_1[0x5d];
    if ((iVar2 == 0) || (uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1), uVar1 != 1)) {
      iVar2 = 0;
    }
    *param_3 = 0;
    *param_4 = 0;
    uVar1 = F_0042a990(iVar2 + 8);
    uVar3 = F_0042a990((int)this + 0x16c);
    pcVar4 = (char *)F_00a028c0(*(undefined * PTR32 *)((int)this + 0xf8),"GetTodoArgs",uVar3,uVar1,
                                  param_2 & 0xff,2);
    if (pcVar4 == (char *)0x0) {
      iVar2 = *(int *)((int)this + 0xf8);
      uVar3 = 0;
      param_2 = 0;
      uVar1 = F_00b9a9b0(*(undefined4 *)(iVar2 + 8),0xffffffff);
      if (uVar1 != 0) {
        uVar3 = F_00b9ab70(*(undefined4 *)(iVar2 + 8),0xffffffff);
      }
      F_00b9a760(*(undefined4 *)(iVar2 + 8),0xfffffffe);
      iVar2 = *(int *)((int)this + 0xf8);
      uVar1 = F_00b9a9b0(*(undefined4 *)(iVar2 + 8),0xffffffff);
      if (uVar1 != 0) {
        param_2 = F_00b9ab70(*(undefined4 *)(iVar2 + 8),0xffffffff);
      }
      uVar1 = F_00b9a760(*(undefined4 *)(iVar2 + 8),0xfffffffe);
      if ((1 < uVar3) && (uVar3 < param_2)) {
        param_2 = uVar3;
      }
      pcVar4 = ((char *)GEN_TOP(CONCAT31((int3)(uVar1 >> 8),(undefined1)param_2)));
      *param_3 = (undefined1)param_2;
      *param_4 = (char)uVar3;
    }
  }
  return (uint)pcVar4;
}

/* ref: FUN_006d0e40 */
byte F_006d0e40(unsigned int gen_a0)
{
  GEN_ENTER(0x6d0e40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  
  bVar1 = F_006c05a0(param_1,0);
  return bVar1;
}

/* ref: FUN_006d0e60 */
uint F_006d0e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6d0e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  int iVar1;
  undefined4 * puVar2;
  undefined1 * puVar3;
  int * piVar4;
  uint uVar5;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  uVar5 = 0;
  if (param_2 != 0) {
    puVar3 = (undefined1 *)((int)this + 0x1d8);
    do {
      iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + uVar5 * 4) + 4)));
      if (*(int *)(iVar1 + 0xc) == 0) break;
      *(int *)(puVar3 + -0x74) = *(int *)(iVar1 + 0xc);
      *puVar3 = *(undefined1 *)(iVar1 + 0x14);
      *(undefined4 *)(puVar3 + -0x58) = *(undefined4 *)(iVar1 + 0x10);
      uVar5 = uVar5 + 1;
      puVar3 = puVar3 + 0x7c;
    } while (uVar5 < param_2);
  }
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x1c04);
  if (puVar2 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    *(undefined4 *)((int)this + 0x1c04) = 0;
  }
  uVar5 = 0;
  if (*(int *)((int)this + 0x108) != 0) {
    piVar4 = (int *)((int)this + 0x164);
    do {
      if (*piVar4 == 0) break;
      ((int *)(gen_frame + 0x8))[(int)(uVar5)] = *piVar4;
      uVar5 = uVar5 + 1;
      piVar4 = piVar4 + 0x1f;
    } while (uVar5 < *(uint *)((int)this + 0x108));
  }
  uVar5 = F_006cd8f0(this,((int *)(gen_frame + 0x8)),uVar5,0);
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return uVar5;
}

/* ref: FUN_006d0f20 */
byte F_006d0f20(void)
{
  GEN_ENTER(0x6d0f20u, 0u, 0u, 0u, 0u);
  if (REFG(int, 0x1488760) != 0) {
    return *(short *)(REFG(int, 0x1488760) + 0x54) != -1;
  }
  return 0;
}

/* ref: FUN_006d0f40 */
byte F_006d0f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d0f40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  if (REFG(void * PTR32, 0x1488760) != (undefined *)0x0) {
    bVar1 = F_006c2270(REFG(void * PTR32, 0x1488760),param_1,param_2);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_006d0f60 */
byte F_006d0f60(unsigned int gen_a0)
{
  GEN_ENTER(0x6d0f60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (REFG(int, 0x1488760) != 0) {
    return (byte)*(undefined4 *)(param_1 * 0x7c + 0x180 + REFG(int, 0x1488760));
  }
  return 0;
}

/* ref: FUN_006d0f80 */
byte F_006d0f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6d0f80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if ((((*(short *)((int)this + 0x54) != -1) && (*(short *)((int)this + 0x54) == 0x28)) &&
      (*(int *)((int)this + 0x104) == param_1)) && (*(int *)((int)this + 0x100) == param_2)) {
    *(undefined4 *)((int)this + 0x104) = param_3;
    *(undefined4 *)((int)this + 0x100) = param_4;
    return 1;
  }
  return 0;
}

/* ref: FUN_006d0fd0 */
uint F_006d0fd0(void)
{
  GEN_ENTER(0x6d0fd0u, 0u, 0u, 0u, 0u);
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  int * piVar2;
  uint uVar3;
  
  if (((REFG(void * PTR32, 0x1488760) != (undefined *)0x0) && (REFG(int, 0x1324194) != 0)) &&
     (*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1488760) + 0x1bee))) == '\0')) {
    bVar1 = F_006c1d30(REFG(void * PTR32, 0x1488760));
    in_EAX = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      if (REFG(int, 0x13241c4) != 0) {
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2)));
        ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(int, 0x13241c4),0);
        *(undefined4 *)&REFG(undefined, 0x13241c0) = 0;
      }
      in_EAX = F_006c1620(REFG(void * PTR32, 0x1488760));
      if (*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1488760) + 0x1bf8))) != '\0') {
        uVar3 = F_006c1990(REFG(void * PTR32, 0x1488760));
        return uVar3;
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_006d1050 */
uint F_006d1050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d1050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined * this_00;
  undefined3 extraout_var = 0;
  byte bVar5;
  byte * pbVar6;
  uint * puVar7;
  ushort * puVar8;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(uint *)(gen_frame + 0x38)) = uVar1;
  uVar2 = *param_1;
  if (uVar2 == 1) {
    uVar2 = param_1[1];
    *(uint *)((int)this + 0x1bd0) = uVar2;
    *(uint *)((int)this + 0x1be0) = param_1[2];
    (*(byte *)(gen_frame + 0xf)) = 0;
    if (0 < (int)uVar2) {
      uVar2 = 0;
      do {
        iVar3 = uVar2 * 0x7c;
        *(uint *)(iVar3 + 0x168 + (int)this) = param_1[uVar2 + 3];
        uVar1 = F_00a41080(&REFG(undefined, 0x14a4230),*(undefined4 *)(iVar3 + 0x164 + (int)this),
                             (uint)*(byte *)(iVar3 + 0x1d8 + (int)this),1,1);
        *((uint *)GEN_TOP(((uVar2 + 3) * 0x7c + (int)this))) = uVar1;
        (*(byte *)(gen_frame + 0xf)) = (*(byte *)(gen_frame + 0xf)) + 1;
        uVar2 = (uint)(*(byte *)(gen_frame + 0xf));
      } while ((int)uVar2 < *(int *)((int)this + 0x1bd0));
    }
    iVar3 = *(int *)((int)this + 0x1bd0);
    (*(byte *)(gen_frame + 0xf)) = 0;
    do {
      uVar2 = (uint)(*(byte *)(gen_frame + 0xf));
      iVar4 = iVar3 + 3 + uVar2;
      if ((param_1[iVar4 + 0x14] == 0) && (param_1[iVar4 + 10] == 0)) break;
      *(uint *)((int)this + uVar2 * 0xa8 + 0x1538) = param_1[iVar4];
      *(uint *)((int)this + uVar2 * 0xa8 + 0x153c) = param_1[iVar4 + 10];
      *(uint *)((int)this + uVar2 * 0xa8 + 0x1540) = param_1[iVar4 + 0x14];
      *(char *)((int)this + uVar2 * 0xa8 + 0x1548) = (char)param_1[iVar4 + 0x1e];
      *(char *)((int)this + uVar2 * 0xa8 + 0x15a0) = (char)param_1[iVar4 + 0x28];
      *((uint *)GEN_TOP(((uVar2 + 0x21) * 0xa8 + (int)this))) = param_1[iVar4 + 0x32];
      uVar1 = param_1[iVar4 + 0x3c];
      *(uint *)((int)this + uVar2 * 0xa8 + 0x15b0) = uVar1;
      *(undefined4 *)((int)this + uVar2 * 0xa8 + 0x15b4) = 0;
      *(uint *)((int)this + uVar2 * 0xa8 + 0x15b0) = param_1[iVar4 + 0x46];
      *(uint *)((int)this + uVar2 * 0xa8 + 0x15b4) = uVar1;
      *(undefined2 *)((int)this + uVar2 * 0xa8 + 0x15d2) =
           *(undefined2 *)((int)param_1 + iVar4 * 4 + 0x142);
      *(short *)((int)this + uVar2 * 0xa8 + 0x15d4) = (short)param_1[iVar4 + 0x50];
      *(char *)((int)this + uVar2 * 0xa8 + 0x15d6) = (char)param_1[iVar4 + 0x5a];
      *(uint *)((int)this + uVar2 * 0xa8 + 0x15d8) = param_1[iVar4 + 100];
      uVar1 = F_00a41080(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)this + uVar2 * 0xa8 + 0x1538),
                           (uint)((*(byte *)((int)this + uVar2 * 0xa8 + 0x1548) & 1) == 1),1,1);
      *(uint *)((int)this + uVar2 * 0xa8 + 0x1544) = uVar1;
      pbVar6 = (byte *)((int)this + uVar2 * 0xa8 + 0x15c2);
      ((undefined4 *)(gen_frame + 0x10))[(int)(uVar2)] = *(undefined4 *)((int)this + uVar2 * 0xa8 + 0x1538);
      puVar8 = (ushort *)((int)this + uVar2 * 0xa8 + 0x15b8);
      puVar7 = param_1 + iVar4 + 0x6e;
      (*(int *)(gen_frame + 0x8)) = 5;
      do {
        uVar2 = *puVar7;
        *puVar8 = (ushort)uVar2 >> 4;
        *pbVar6 = (byte)(ushort)uVar2 & 0xf;
        puVar8 = puVar8 + 1;
        puVar7 = puVar7 + 10;
        pbVar6 = pbVar6 + 1;
        (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + -1;
      } while ((*(int *)(gen_frame + 0x8)) != 0);
      (*(byte *)(gen_frame + 0xf)) = (*(byte *)(gen_frame + 0xf)) + 1;
    } while ((*(byte *)(gen_frame + 0xf)) < 10);
    *(undefined1 *)((int)this + 0x1bc8) = 0;
    *(undefined1 *)((int)this + 0x1bef) = 1;
    *(undefined4 *)((int)this + 0x1be4) = 0;
  }
  else {
    if (uVar2 != 0) {
      if (uVar2 == 0xffffffff) {
        iVar3 = *(int *)((int)this + 0x1bd8);
        *(uint *)((int)this + 0x1be0) = param_1[1];
        if (-1 < iVar3) {
          *(uint *)(iVar3 * 0x7c + 0x168 + (int)this) = param_1[2];
        }
        *(uint *)((int)this + 0xfc) = param_1[3];
        *(uint *)((int)this + 0x104) = param_1[4];
        *(uint *)((int)this + 0x1bcc) = param_1[5];
        *(uint *)((int)this + 0x100) = param_1[6];
        uVar2 = (uint)*(byte *)(iVar3 * 0x7c + 0x16c + (int)this) *
                *(int *)(iVar3 * 0x7c + 0x170 + (int)this);
        *(uint *)((int)this + 0x14c8) = (uint)(uVar2 % 100 != 0) + uVar2 / 100;
        *(uint *)((int)this + 0x1be8) = param_1[7];
        uVar2 = param_1[8];
        *(uint *)((int)this + 0x1bd0) = uVar2;
        *(undefined4 *)((int)this + 0x1be4) = 0;
        *(undefined1 *)((int)this + 0x1bc8) = 1;
        F_00c47745(uVar1 ^ (uint)(uint)(gen_frame + 0x3c));
        return uVar2;
      }
      if (uVar2 == 2) {
        uVar2 = param_1[3];
        (*(byte *)(gen_frame + 0xf)) = 0;
        uVar1 = F_006c1e50(this,param_1[1],
                             (uint)((*((byte *)GEN_TOP((*(int *)((int)this + 0x1bd8) * 0xa8 + 0x1548 +
                                              (int)this))) & 1) == 1));
        if (-1 < (int)uVar1) {
          *(uint *)(uVar1 * 0x7c + 0x168 + (int)this) = param_1[2];
          *(uint *)((int)this + 0x1be4) = uVar2;
        }
        do {
          uVar2 = (uint)(*(byte *)(gen_frame + 0xf));
          if ((param_1[uVar2 + 0x18] == 0) && (param_1[uVar2 + 0xe] == 0)) break;
          *(uint *)((int)this + uVar2 * 0xa8 + 0x1538) = param_1[uVar2 + 4];
          *(uint *)((int)this + uVar2 * 0xa8 + 0x153c) = param_1[uVar2 + 0xe];
          *(uint *)((int)this + uVar2 * 0xa8 + 0x1540) = param_1[uVar2 + 0x18];
          *(uint *)((int)this + uVar2 * 0xa8 + 0x1544) = param_1[uVar2 + 0x22];
          *(char *)((int)this + uVar2 * 0xa8 + 0x1548) = (char)param_1[uVar2 + 0x2c];
          *(char *)((int)this + uVar2 * 0xa8 + 0x15a0) = (char)param_1[uVar2 + 0x36];
          *((uint *)GEN_TOP(((uVar2 + 0x21) * 0xa8 + (int)this))) = param_1[uVar2 + 0x40];
          uVar1 = param_1[uVar2 + 0x4a];
          *(uint *)((int)this + uVar2 * 0xa8 + 0x15b0) = uVar1;
          *(undefined4 *)((int)this + uVar2 * 0xa8 + 0x15b4) = 0;
          *(uint *)((int)this + uVar2 * 0xa8 + 0x15b0) = param_1[uVar2 + 0x54];
          *(uint *)((int)this + uVar2 * 0xa8 + 0x15b4) = uVar1;
          *(undefined2 *)((int)this + uVar2 * 0xa8 + 0x15d2) =
               *(undefined2 *)((int)param_1 + uVar2 * 4 + 0x17a);
          *(short *)((int)this + uVar2 * 0xa8 + 0x15d4) = (short)param_1[uVar2 + 0x5e];
          *(char *)((int)this + uVar2 * 0xa8 + 0x15d6) = (char)param_1[uVar2 + 0x68];
          *(uint *)((int)this + uVar2 * 0xa8 + 0x15d8) = param_1[uVar2 + 0x72];
          ((undefined4 *)(gen_frame + 0x10))[(int)(uVar2)] = *(undefined4 *)((int)this + uVar2 * 0xa8 + 0x1538);
          pbVar6 = (byte *)((int)this + uVar2 * 0xa8 + 0x15c2);
          puVar8 = (ushort *)((int)this + uVar2 * 0xa8 + 0x15b8);
          puVar7 = param_1 + uVar2 + 0x7c;
          (*(int *)(gen_frame + 0x8)) = 5;
          do {
            uVar2 = *puVar7;
            *puVar8 = (ushort)uVar2 >> 4;
            *pbVar6 = (byte)(ushort)uVar2 & 0xf;
            puVar8 = puVar8 + 1;
            puVar7 = puVar7 + 10;
            pbVar6 = pbVar6 + 1;
            (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + -1;
          } while ((*(int *)(gen_frame + 0x8)) != 0);
          (*(byte *)(gen_frame + 0xf)) = (*(byte *)(gen_frame + 0xf)) + 1;
        } while ((*(byte *)(gen_frame + 0xf)) < 10);
        uVar2 = param_1[(param_2 & 0xff) - 1];
        *(uint *)((int)this + 0x1bdc) = uVar2;
        if ((int)uVar2 < 1) {
          F_0043f8b0(0x14);
        }
        *(uint *)((int)this + 0x1bd4) = (uint)(*(byte *)(gen_frame + 0xf));
        if ((*(byte *)(gen_frame + 0xf)) != 0) {
          *(undefined1 *)((int)this + 0x1bee) = 1;
          F_006cd8f0(this,((undefined4 *)(gen_frame + 0x10)),(uint)(*(byte *)(gen_frame + 0xf)),0);
        }
        bVar5 = F_006c1d30(this);
        uVar2 = CONCAT31(extraout_var,bVar5);
      }
      goto LAB_006d1807;
    }
    uVar2 = param_1[1];
    *(uint *)((int)this + 0x1be0) = uVar2;
    if (uVar2 == 1) {
      iVar3 = *(int *)((int)this + 0x1bd8);
      if (-1 < iVar3) {
        *(uint *)(iVar3 * 0x7c + 0x168 + (int)this) = param_1[2];
        *((uint *)GEN_TOP(((iVar3 + 3) * 0x7c + (int)this))) = param_1[7];
      }
    }
    else {
      this_00 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)this + 0x104));
      uVar2 = 0;
      if (this_00 == (undefined *)0x0) goto LAB_006d1807;
      uVar1 = F_00a37da0(this_00,*(undefined4 *)((int)this + 0x100));
      uVar2 = 0;
      if (uVar1 == 0) goto LAB_006d1807;
      uVar2 = F_006c1e50(this,param_1[3],(uint)(*(byte *)(uVar1 + 0x14) & 1));
      if (-1 < (int)uVar2) {
        *(uint *)(uVar2 * 0x7c + 0x168 + (int)this) = param_1[2];
        *((uint *)GEN_TOP(((uVar2 + 3) * 0x7c + (int)this))) = param_1[7];
      }
      *(uint *)((int)this + 0x1bd8) = uVar2;
    }
    *(uint *)((int)this + 0xfc) = param_1[3];
    *(uint *)((int)this + 0x1bd0) = param_1[5];
    *(uint *)((int)this + 0x1be4) = param_1[6];
    uVar2 = param_1[(param_2 & 0xff) - 1];
    *(uint *)((int)this + 0x1bdc) = uVar2;
    *(undefined1 *)((int)this + 0x1bc8) = 0;
    if (uVar2 == 0) {
      F_0043f8b0(0x14);
    }
    uVar2 = *(uint *)((int)this + 0x1be0);
    if (uVar2 != 2) {
      if ((uVar2 == 1) && (bVar5 = 0, *(int *)((int)this + 0x1bd4) != 0)) {
        uVar2 = 0;
        do {
          bVar5 = bVar5 + 1;
          *(uint *)(uVar2 * 0xa8 + 0x1544 + (int)this) = param_1[uVar2 + 8];
          uVar2 = (uint)bVar5;
        } while (uVar2 < *(uint *)((int)this + 0x1bd4));
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
        return uVar2;
      }
      goto LAB_006d1807;
    }
    (*(byte *)(gen_frame + 0xf)) = 0;
    do {
      uVar2 = (uint)(*(byte *)(gen_frame + 0xf));
      if ((param_1[uVar2 + 0x1c] == 0) && (param_1[uVar2 + 0x12] == 0)) break;
      *(uint *)((int)this + uVar2 * 0xa8 + 0x1538) = param_1[uVar2 + 8];
      *(uint *)((int)this + uVar2 * 0xa8 + 0x153c) = param_1[uVar2 + 0x12];
      *(uint *)((int)this + uVar2 * 0xa8 + 0x1540) = param_1[uVar2 + 0x1c];
      *(uint *)((int)this + uVar2 * 0xa8 + 0x1544) = param_1[uVar2 + 0x26];
      *(char *)((int)this + uVar2 * 0xa8 + 0x1548) = (char)param_1[uVar2 + 0x30];
      *(char *)((int)this + uVar2 * 0xa8 + 0x15a0) = (char)param_1[uVar2 + 0x3a];
      *((uint *)GEN_TOP(((uVar2 + 0x21) * 0xa8 + (int)this))) = param_1[uVar2 + 0x44];
      uVar1 = param_1[uVar2 + 0x4e];
      *(uint *)((int)this + uVar2 * 0xa8 + 0x15b0) = uVar1;
      *(undefined4 *)((int)this + uVar2 * 0xa8 + 0x15b4) = 0;
      *(uint *)((int)this + uVar2 * 0xa8 + 0x15b0) = param_1[uVar2 + 0x58];
      *(uint *)((int)this + uVar2 * 0xa8 + 0x15b4) = uVar1;
      *(undefined2 *)((int)this + uVar2 * 0xa8 + 0x15d2) =
           *(undefined2 *)((int)param_1 + uVar2 * 4 + 0x18a);
      *(short *)((int)this + uVar2 * 0xa8 + 0x15d4) = (short)param_1[uVar2 + 0x62];
      *(char *)((int)this + uVar2 * 0xa8 + 0x15d6) = (char)param_1[uVar2 + 0x6c];
      *(uint *)((int)this + uVar2 * 0xa8 + 0x15d8) = param_1[uVar2 + 0x76];
      ((undefined4 *)(gen_frame + 0x10))[(int)(uVar2)] = *(undefined4 *)((int)this + uVar2 * 0xa8 + 0x1538);
      pbVar6 = (byte *)((int)this + uVar2 * 0xa8 + 0x15c2);
      puVar8 = (ushort *)((int)this + uVar2 * 0xa8 + 0x15b8);
      puVar7 = param_1 + uVar2 + 0x80;
      (*(int *)(gen_frame + 0x8)) = 5;
      do {
        uVar2 = *puVar7;
        *puVar8 = (ushort)uVar2 >> 4;
        *pbVar6 = (byte)(ushort)uVar2 & 0xf;
        puVar8 = puVar8 + 1;
        puVar7 = puVar7 + 10;
        pbVar6 = pbVar6 + 1;
        (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + -1;
      } while ((*(int *)(gen_frame + 0x8)) != 0);
      (*(byte *)(gen_frame + 0xf)) = (*(byte *)(gen_frame + 0xf)) + 1;
    } while ((*(byte *)(gen_frame + 0xf)) < 10);
  }
  uVar2 = (uint)(*(byte *)(gen_frame + 0xf));
  *(uint *)((int)this + 0x1bd4) = uVar2;
  if ((*(byte *)(gen_frame + 0xf)) != 0) {
    *(undefined1 *)((int)this + 0x1bee) = 1;
    uVar2 = F_006cd8f0(this,((undefined4 *)(gen_frame + 0x10)),uVar2,0);
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return uVar2;
  }
LAB_006d1807: ;
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar2;
}

/* ref: FUN_006d1820 */
byte F_006d1820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d1820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  int * piVar2;
  byte local_5;
  
  local_5 = 0;
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (piVar1 != (int *)0x0) {
    F_006c21d0();
    local_5 = 0;
    if (REFG(int, 0x13241b4) != 0) {
      piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
      ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(int, 0x13241b4),0);
      if ((char)param_1 != '\0') {
        *(undefined4 *)&REFG(undefined, 0x13241b0) = 0;
      }
      local_5 = 1;
    }
    if (REFG(int, 0x13241c4) != 0) {
      piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
      ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(int, 0x13241c4),0);
      if ((char)param_1 != '\0') {
        *(undefined4 *)&REFG(undefined, 0x13241c0) = 0;
      }
      local_5 = 1;
    }
    if (REFG(int, 0x13241a4) != 0) {
      piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
      ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(int, 0x13241a4),0);
      if ((char)param_1 != '\0') {
        *(undefined4 *)&REFG(undefined, 0x13241a0) = 0;
      }
      local_5 = 1;
    }
    if (REFG(int, 0x1324194) != 0) {
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
      ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,REFG(int, 0x1324194),0);
      if ((char)param_1 != '\0') {
        *(undefined4 *)&REFG(undefined, 0x1324190) = 0;
      }
      return 1;
    }
  }
  return local_5;
}

/* ref: FUN_006d1930 */
uint F_006d1930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d1930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  F_0071ff70(param_1,param_2 * 0xa8 + 0x1538 + (int)this);
  return (uint)param_1;
}

/* ref: FUN_006d1960 */
uint F_006d1960(unsigned int gen_a0)
{
  GEN_ENTER(0x6d1960u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  F_00a02210(((byte *)(gen_frame + 0x8)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar3);
  iVar2 = *piVar4;
  if (iVar2 != 0) {
    bVar1 = *(byte *)(iVar2 + 0x5c);
    (*(uint *)(gen_frame + 0x28)) = (uint)*(ushort *)(iVar2 + 0x1d4);
    if ((bVar1 & 1) == 0) {
      F_00a50880(*(undefined4 *)(iVar2 + 8),(uint)*(ushort *)(iVar2 + 0x54),2,&(*(uint *)(gen_frame + 0x28)),1);
      *(byte *)(iVar2 + 0x5c) = *(byte *)(iVar2 + 0x5c) | 1;
    }
    uVar3 = F_00a02290(((byte *)(gen_frame + 0x8)),0);
    F_00a02240(((byte *)(gen_frame + 0x8)));
    return uVar3;
  }
  F_00a02240(((byte *)(gen_frame + 0x8)));
  return 0;
}

/* ref: FUN_006d19f0 */
uint F_006d19f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d19f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  byte bVar2;
  
  if ((*(int *)(param_1 + 0xfc) != 0) && (*(int *)(param_1 + 0xfc) != 4)) {
    return 0x468;
  }
  if (*(char *)(param_2 + 0x188) != '\x02') {
    bVar2 = F_00a9fca0(param_2);
    if (bVar2 == 0) {
      fVar1 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x104) -
                     (float10)*(float *)(REFG(int, 0x137104c) + 0x1198))));
      *(float *)(param_1 + 0x104) = fVar1;
      if ((float10)fVar1 <= (float10)0) {
        *(undefined4 *)(param_1 + 0x104) = REFG(float, 0x1087f04);
        bVar2 = F_006c2930(param_2);
        *(byte *)(param_1 + 0x108) = bVar2;
      }
      if (*(char *)(param_1 + 0x108) != '\0') {
        F_00a6e080(&REFG(undefined, 0x14a9e40),0x87,0,0);
        return 0;
      }
    }
  }
  return 0x468;
}

/* ref: FUN_006d1aa0 */
uint F_006d1aa0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d1aa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined4 * this_00;
  byte bVar3;
  uint uVar4;
  int iVar5;
  
  piVar1 = (int *)F_0052fba0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),"GrandCompanySealShopItem");
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
  bVar3 = ((*(char *)((int)this + 0x114) - *(char *)((int)this + 0x110)) -
          *(char *)((int)this + 0x128)) - 1;
  if ((byte)uVar2 < bVar3) {
    bVar3 = (byte)uVar2;
  }
  this_00 = (undefined4 *)F_00406b90(0x28,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00,(uint)bVar3,0);
    this_00[5] = (uint)bVar3;
    this_00[8] = ((code *)REFP(0x700520));
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b9258));
    this_00[6] = this;
    this_00[9] = 0;
  }
  uVar2 = 0;
  *(undefined4 * PTR32 *)((int)this + 0x118) = this_00;
  if (*(int *)((int)this + 0x11c) == 0) {
    uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xe2);
    *(uint *)((int)this + 0x11c) = uVar2;
  }
  if (bVar3 != 0) {
    iVar5 = 0;
    uVar4 = (uint)bVar3;
    do {
      bVar3 = *(byte *)((int)this + 0x128);
      *(byte *)((int)this + 0x128) = bVar3 + 1;
      uVar2 = F_00cb4540(*(undefined * PTR32 *)((int)this + 0x118),iVar5,
                           bVar3 + 1 + *(int *)((int)this + 0x110));
      iVar5 = iVar5 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x11c);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1,*(undefined4 *)((int)this + 0x118));
  }
  return uVar2;
}

/* ref: FUN_006d1bb0 */
byte F_006d1bb0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d1bb0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  int * piVar2;
  uint in_ecx;
  undefined * this;
  undefined4 uVar3;
  byte local_5;
  
  local_5 = 0;
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 5;
  in_ecx = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
  this = (undefined *)F_00763050(in_ecx,uVar3);
  if (this != (undefined *)0x0) {
    F_0089aef0(this,4,4);
  }
  if (REFG(int, 0x1324204) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(int, 0x1324204),0);
    if ((char)param_1 != '\0') {
      *(undefined4 *)&REFG(undefined, 0x1324200) = 0;
    }
    local_5 = 1;
  }
  if (REFG(int, 0x13241f4) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,REFG(int, 0x13241f4),0);
    if ((char)param_1 != '\0') {
      *(undefined4 *)&REFG(undefined, 0x13241f0) = 0;
    }
    local_5 = 1;
  }
  if (REFG(int, 0x13241e4) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,REFG(int, 0x13241e4),0);
    if ((char)param_1 != '\0') {
      *(undefined4 *)&REFG(undefined, 0x13241e0) = 0;
    }
    return 1;
  }
  return local_5;
}

/* ref: FUN_006d1cc0 */
byte F_006d1cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6d1cc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined * this_00;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  
  if ((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) & 1 << ((byte)(*(uint *)&gen_args[5]) & 0x1f)) == 0) {
    return 0;
  }
  cVar1 = *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x374)));
  iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x254)));
  iVar3 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 600)));
  iVar4 = (*(int * PTR32 *)&gen_args[1])[0x5d];
  iVar5 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d8)));
  if (iVar4 != 0) {
    uVar7 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]));
    if (uVar7 == 1) {
      if (cVar1 == '\0') {
        if (((*(uint *)&gen_args[5]) & 0xff) == 1) {
          if (iVar2 == 0) {
            uVar7 = F_006c3170((*(undefined * PTR32 *)&gen_args[0]),(*(int * PTR32 *)&gen_args[1]));
            if ((iVar3 == 0) || (uVar7 != 0x10)) {
              return uVar7 == 0;
            }
          }
          return 1;
        }
        if (((*(uint *)&gen_args[5]) & 0xff) == 0xf) {
          return iVar5 == REFG(int, 0x14bccac);
        }
      }
      else {
        uVar7 = F_0042a990(iVar4 + 8);
        uVar8 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c);
        uVar7 = F_00a02990(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))),"IsAcceptEvent",uVar8,uVar7,(*(uint *)&gen_args[2]) & 0xff
                             ,(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(uint *)&gen_args[5]) & 0xff,1);
        if (uVar7 == 0) {
          this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
          (*(undefined1 *)((char *)&(*(uint *)&gen_args[5]) + 3)) = 0;
          bVar6 = F_00a01d80(this_00,(int)&(*(uint *)&gen_args[5]) + 3);
          if (bVar6 != 0) {
            return (*(undefined1 *)((char *)&(*(uint *)&gen_args[5]) + 3));
          }
        }
      }
    }
  }
  return 0;
}

/* ref: Client::Game::Event::WarpEventHandler::vf132 */
uint F_006d1e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6d1e00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0x10;
}

/* ref: Client::Game::Event::WarpEventHandler::vf131 */
byte F_006d1e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6d1e10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: FUN_006d1e20 */
uint F_006d1e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d1e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_006c3170(this,*(undefined4 *)(param_1 + 0x60));
  return (uint)(uVar1 == 0);
}

/* ref: FUN_006d1e40 */
uint F_006d1e40(unsigned int gen_a0)
{
  GEN_ENTER(0x6d1e40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this;
  uint uVar1;
  undefined4 * puVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  puVar2 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  this = (undefined *)*puVar2;
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),2);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2,uVar1);
  uVar1 = F_006c3170(this,*(undefined4 *)(*piVar3 + 0x60));
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)(uVar1 == 0));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006d1ec0 */
uint F_006d1ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d1ec0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int * piVar5;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar4 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar5 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar4);
  iVar2 = *piVar5;
  uVar4 = F_00a01d20(((byte *)(gen_frame + 0x8)),2);
  piVar5 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2,uVar4);
  uVar1 = *(ushort *)(iVar2 + 0x360);
  if (uVar1 != 0) {
    if (*(int *)(*piVar5 + 0x60) == REFG(int, 0x1379694)) {
      uVar4 = F_00a3ace0(&REFG(undefined, 0x14a4230));
    }
    else {
      uVar4 = 0;
    }
    uVar3 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32));
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = uVar3 & 0xffffff00;
    if (uVar4 < uVar1) goto LAB_006d1f3a;
  }
  ((byte *)(gen_frame + 0x8))[0x20] = 1;
  ((byte *)(gen_frame + 0x8))[0x20] = 1;
LAB_006d1f3a: ;
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006d1f60 */
uint F_006d1f60(unsigned int gen_a0)
{
  GEN_ENTER(0x6d1f60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  uint uVar5;
  int * piVar6;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar5 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar6 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar5);
  iVar2 = *piVar6;
  uVar5 = F_00a01d20(((byte *)(gen_frame + 0x8)),2);
  piVar6 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2,uVar5);
  uVar1 = *(ushort *)(iVar2 + 0x362);
  if (uVar1 != 0) {
    if (*(int *)(*piVar6 + 0x60) == REFG(int, 0x1379694)) {
      uVar5 = F_00a68310(&REFG(undefined1, 0x14ab070),1);
      uVar4 = (ushort)uVar5;
    }
    else {
      uVar4 = 0;
    }
    uVar3 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32));
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = uVar3 & 0xffffff00;
    if (uVar4 < uVar1) goto LAB_006d1fe0;
  }
  ((byte *)(gen_frame + 0x8))[0x20] = 1;
  ((byte *)(gen_frame + 0x8))[0x20] = 1;
LAB_006d1fe0: ;
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006d2050 */
uint F_006d2050(unsigned int gen_a0)
{
  GEN_ENTER(0x6d2050u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int * piVar5;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar4 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar5 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar4);
  iVar2 = *piVar5;
  uVar4 = F_00a01d20(((byte *)(gen_frame + 0x8)),2);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2,uVar4);
  uVar1 = *(ushort *)(iVar2 + 0x366);
  if (uVar1 != 0) {
    uVar4 = F_00a4ffd0();
    uVar3 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32));
    if ((199 < uVar1 >> 3) ||
       ((*((byte *)GEN_TOP(((uVar1 >> 3) + 0x12ea + uVar4))) & (byte)(0x80 >> ((byte)uVar1 & 7))) == 0)) {
      ((byte *)(gen_frame + 0x8))[0x20] = 0;
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = uVar3 & 0xffffff00;
      goto LAB_006d20dc;
    }
  }
  ((byte *)(gen_frame + 0x8))[0x20] = 1;
  ((byte *)(gen_frame + 0x8))[0x20] = 1;
LAB_006d20dc: ;
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006d2100 */
uint F_006d2100(unsigned int gen_a0)
{
  GEN_ENTER(0x6d2100u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),2);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2,uVar2);
  uVar2 = *(uint *)(iVar1 + 0x370);
  if ((uVar2 == 0) ||
     ((*(int *)(*piVar3 + 0x60) == REFG(int, 0x1379694) &&
      (((&REFG(undefined1, 0x14b4ec0))[uVar2 >> 3] & (byte)(1 << ((byte)uVar2 & 7))) != 0)))) {
    ((byte *)(gen_frame + 0x8))[0x20] = 1;
    ((byte *)(gen_frame + 0x8))[0x20] = 1;
  }
  else {
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = (uint)(uint3)GEN_PIECE(((byte *)(gen_frame + 0x8)), 33, 3) << 8;
  }
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006d21b0 */
uint F_006d21b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d21b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)*(ushort *)(*piVar2 + 0x360));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006d2200 */
uint F_006d2200(unsigned int gen_a0)
{
  GEN_ENTER(0x6d2200u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)*(ushort *)(*piVar2 + 0x362));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006d2250 */
uint F_006d2250(unsigned int gen_a0)
{
  GEN_ENTER(0x6d2250u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)*(ushort *)(*piVar2 + 0x366));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006d22a0 */
uint F_006d22a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d22a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),*(undefined4 *)(*piVar2 + 0x370));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006d22f0 */
uint F_006d22f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d22f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)*(ushort *)(*piVar2 + 0x25c));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006d2340 */
uint F_006d2340(unsigned int gen_a0)
{
  GEN_ENTER(0x6d2340u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)*(ushort *)(*piVar2 + 0x25e));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006d2390 */
uint F_006d2390(unsigned int gen_a0)
{
  GEN_ENTER(0x6d2390u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)(*(short *)(*piVar2 + 0x25c) != 0));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006d23f0 */
uint F_006d23f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d23f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)(*(short *)(*piVar2 + 0x25e) != 0));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006d2450 */
uint F_006d2450(unsigned int gen_a0)
{
  GEN_ENTER(0x6d2450u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  uint uVar3;
  bool bVar4;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar1);
  uVar3 = (uint)REFG(undefined2, 0x1379c78);
  uVar1 = F_00ab37e0(*(undefined4 *)(*piVar2 + 0x1d8));
  if (uVar1 == 0) {
    ((byte *)(gen_frame + 0x8))[0x20] = 0;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)) = (uint)(uint3)GEN_PIECE(((byte *)(gen_frame + 0x8)), 33, 3) << 8;
  }
  else {
    bVar4 = *(uint *)(uVar1 + 0x20) != uVar3;
    ((byte *)(gen_frame + 0x8))[0x20] = bVar4;
  }
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: Client::Game::Event::WarpEventHandler::vf5 */
byte F_006d24d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d24d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar1 = REFG(int, 0x1379694);
  if (REFG(int, 0x1379694) != 0) {
    iVar5 = param_1[0x1e];
    iVar4 = param_1[0x20];
    uVar6 = 1;
    uVar3 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
    bVar2 = F_006d1cc0(this,iVar1,uVar3,iVar4,iVar5,uVar6);
    return bVar2;
  }
  return 0;
}

/* ref: Client::Game::Event::WarpEventHandler::vf17 */
byte F_006d2510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d2510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  piVar1 = REFG(int * PTR32, 0x1379694);
  if (REFG(int * PTR32, 0x1379694) != (int *)0x0) {
    iVar5 = REFG(int * PTR32, 0x1379694)[0x1e];
    iVar4 = REFG(int * PTR32, 0x1379694)[0x20];
    uVar6 = 0xf;
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 4))))(REFG(int * PTR32, 0x1379694));
    bVar2 = F_006d1cc0(this,piVar1,uVar3,iVar4,iVar5,uVar6);
    return bVar2;
  }
  return 0;
}

/* ref: Client::Game::Event::WarpEventHandler::vf116 */
byte F_006d2550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d2550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar1 = REFG(int, 0x1379694);
  if (REFG(int, 0x1379694) != 0) {
    iVar5 = param_1[0x1e];
    iVar4 = param_1[0x20];
    uVar6 = 1;
    uVar3 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
    bVar2 = F_006d1cc0(this,iVar1,uVar3,iVar4,iVar5,uVar6);
    return bVar2;
  }
  return 0;
}

/* ref: Client::Game::Event::SpecialShopEventHandler::vf5 */
uint F_006d2590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d2590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint in_EAX = 0;
  uint uVar1;
  
  if (REFG(int, 0x1379694) == 0) {
    return in_EAX & 0xffffff00;
  }
  uVar1 = F_006c3410(this,param_1);
  return uVar1;
}

/* ref: Client::Game::Event::LeveDirector::vf29 */
uint F_006d25b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6d25b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int iStackY_20;
  
  if ((param_1 & 0xff) == 0) {
    if ((char)param_3 != '\x04') goto LAB_006d26ba;
    uVar3 = *(uint *)(param_2 + 8);
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(this + 0x2e8) = uVar3;
    *(undefined4 *)(this + 0x2ec) = 0;
    *(uint *)(this + 0x2f0) = uVar1 + uVar3;
    *(uint *)(this + 0x2f4) = (uint)CARRY4(uVar1,uVar3);
    pvVar2 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
    if (pvVar2 == (undefined *)0x0) goto LAB_006d265e;
    uVar3 = F_00975680(pvVar2);
  }
  else {
    if (((param_1 & 0xff) != 2) || ((char)param_3 != '\x03')) goto LAB_006d26ba;
    uVar3 = *(uint *)(param_2 + 4);
    uVar1 = *(uint *)(param_2 + 8);
    *(uint *)(this + 0x2e8) = uVar3;
    *(undefined4 *)(this + 0x2ec) = 0;
    *(uint *)(this + 0x2f0) = uVar1 + uVar3;
    *(uint *)(this + 0x2f4) = (uint)CARRY4(uVar1,uVar3);
    pvVar2 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
    if (pvVar2 == (undefined *)0x0) {
LAB_006d265e: ;
      uVar6 = F_0046ff40();
      uVar3 = (uint)(uVar6 / 1000);
    }
    else {
      uVar3 = F_00975680(pvVar2);
    }
  }
  iVar5 = *(uint *)(this + 0x2f0) - uVar3;
  iVar4 = *(int *)(this + 0x2f4) - (uint)(*(uint *)(this + 0x2f0) < uVar3);
  if ((iVar4 < 1) && (iVar4 < 0)) {
    iVar5 = 0;
    iVar4 = 0;
  }
  *(longlong *)&iStackY_20 = CONCAT44(iVar4,iVar5);
  uVar3 = (uint)(*(longlong *)&iStackY_20 / 0x3c);
  ((code *)*(gen_code32 *)(*(int *)this + 0x278))
            (this,*(uint *)(this + 0x338) - uVar3,
             (*(int *)(this + 0x33c) - (int)((ulonglong)(*(longlong *)&iStackY_20 / 0x3c) >> 0x20))
             - (uint)(*(uint *)(this + 0x338) < uVar3));
LAB_006d26ba: ;
  uVar3 = F_006bd3a0((undefined *)this,param_1,param_2,param_3);
  return uVar3;
}

/* ref: Client::Game::Event::LeveDirector::vf150 */
byte F_006d26e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x6d26e0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (*(int *)(param_1 + 0x2fc) - *(int *)(param_1 + 0x2f8)) / 0x140;
  bVar1 = 0;
  if (iVar4 != 0) {
    iVar3 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x2f8) + iVar3;
      if (*(int *)(iVar2 + 0x70) == 0) {
        *(undefined4 *)(iVar2 + 0x70) = param_8;
        *(undefined4 *)(iVar2 + 0x74) = param_9;
        *(undefined4 *)(iVar2 + 0x78) = param_10;
      }
      bVar1 = F_0071df80(iVar2,param_2,param_3,param_4,param_5,param_6,param_7);
      iVar3 = iVar3 + 0x140;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return bVar1;
}

/* ref: Client::Game::Event::LeveDirector::vf151 */
unsigned int F_006d2770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d2770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  int iVar1;
  int local_8;
  
  local_8 = (*(int *)(this + 0x2fc) - *(int *)(this + 0x2f8)) / 0x140;
  if (local_8 != 0) {
    iVar1 = 0;
    do {
      this_00 = ((undefined *)GEN_TOP((*(int *)(this + 0x2f8) + iVar1)));
      F_0071e040(this_00,param_1);
      if (*(int *)((int)this_00 + 0x13c) == 0) {
        *(undefined4 *)((int)this_00 + 0x70) = 0;
        *(undefined4 *)((int)this_00 + 0x74) = 0;
        *(undefined4 *)((int)this_00 + 0x78) = 0;
      }
      iVar1 = iVar1 + 0x140;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return 0;
}

/* ref: FUN_006d27e0 */
uint F_006d27e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d27e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x330) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x32c);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x330));
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 0x330);
    if (puVar3 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
      *(undefined4 *)((int)this + 0x330) = 0;
    }
  }
  uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x3c);
  *(uint *)((int)this + 0x32c) = uVar2;
  uVar4 = 0;
  if (uVar2 != 0) {
    puVar3 = (undefined4 *)F_00406b90(0x20,0,0);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      F_00cb4700(puVar3,1,0);
      puVar3[5] = 1;
      *puVar3 = (*(undefined * PTR32 (*)[2])REFP(0x10b9298));
      puVar3[6] = this;
      puVar3[7] = ((code *)REFP(0x72dc10));
    }
    *(undefined4 * PTR32 *)((int)this + 0x330) = puVar3;
    F_00cb4540(puVar3,0,param_1);
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x32c) + 0x48))))
                      (*(int * PTR32 *)((int)this + 0x32c),*(undefined4 *)((int)this + 0x330));
  }
  return uVar4;
}

/* ref: FUN_006d28b0 */
uint F_006d28b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d28b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    F_00aa7ae0(REFG(void * PTR32, 0x1379694),*(undefined4 *)(iVar1 + 0x324),*(undefined4 *)(iVar1 + 0x328));
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006d2910 */
uint F_006d2910(unsigned int gen_a0)
{
  GEN_ENTER(0x6d2910u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  ushort uVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar3 = 0;
  if (*piVar2 != 0) {
    uVar3 = *(ushort *)(*piVar2 + 0x310);
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)uVar3);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: Client::Game::Event::LeveDirector::vf42 */
uint F_006d2970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6d2970u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong uStackY_1c;
  
  uVar1 = param_1 - 2;
  if (uVar1 == 0) {
    F_00a69770(&REFG(undefined4, 0x14b119c));
    *(uint *)(this + 0x2e8) = param_3;
    *(undefined4 *)(this + 0x2ec) = 0;
    *(uint *)(this + 0x2f0) = param_2 + param_3;
    *(uint *)(this + 0x2f4) = (uint)CARRY4(param_2,param_3);
    this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
    if (this_00 == (undefined *)0x0) {
      uVar4 = F_0046ff40();
      uVar1 = (uint)(uVar4 / 1000);
    }
    else {
      uVar1 = F_00975680(this_00);
    }
    iVar3 = *(uint *)(this + 0x2f0) - uVar1;
    iVar2 = *(int *)(this + 0x2f4) - (uint)(*(uint *)(this + 0x2f0) < uVar1);
    if ((iVar2 < 1) && (iVar2 < 0)) {
      iVar3 = 0;
      iVar2 = 0;
    }
    uStackY_1c = CONCAT44(iVar2,iVar3);
    uVar1 = (uint)(uStackY_1c / 0x3c);
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x278))
                      (this,*(uint *)(this + 0x338) - uVar1,
                       (*(int *)(this + 0x33c) - (int)((ulonglong)(uStackY_1c / 0x3c) >> 0x20)) -
                       (uint)(*(uint *)(this + 0x338) < uVar1));
  }
  return uVar1;
}

/* ref: Client::Game::Event::BattleLeveDirector::vf43 */
uint F_006d2a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d2a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined * pBVar3;
  uint uVar4;
  
  if (((*(int *)(this + 0x4e8) == 7) && (param_1[0x47] == 0)) && (param_1[0x39] != 0)) {
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0xb8))(param_1);
    if ((char)uVar2 != '\0') {
      uVar2 = F_00a5f290(param_1);
      uVar4 = 0;
      pBVar3 = this + 0x37c;
      do {
        if ((*(int *)(pBVar3 + -0x18) == 3) && (param_1[0x20] == *(int *)pBVar3)) {
          uVar2 = F_00ab4370(0xab,uVar2,uVar2,0,0);
          return uVar2;
        }
        uVar4 = uVar4 + 1;
        pBVar3 = pBVar3 + 0x30;
      } while (uVar4 < 8);
    }
  }
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  uVar2 = uVar2 - 2;
  if (((uVar2 == 0) && (param_1[0x47] == 0)) &&
     ((uVar2 = param_1[0x39], uVar2 == *(uint *)(this + 8) &&
      ((param_1[0x3b] != 0 || (param_1[0x3c] != 0)))))) {
    uVar2 = F_00a5f290(param_1);
    if (REFG(void * PTR32, 0x1379694) != (undefined *)0x0) {
      bVar1 = F_00aa1800(REFG(void * PTR32, 0x1379694),uVar2);
      if (bVar1 != 0) {
        uVar2 = F_00ab4370(0xa3,uVar2,uVar2,0,0);
        return uVar2;
      }
      uVar2 = F_00ab4370(0xa4,uVar2,uVar2,0,0);
    }
  }
  return uVar2;
}

/* ref: FUN_006d2b30 */
uint F_006d2b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d2b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x34c) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x348);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x34c));
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 0x34c);
    if (puVar3 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
      *(undefined4 *)((int)this + 0x34c) = 0;
    }
  }
  uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x67);
  *(uint *)((int)this + 0x348) = uVar2;
  uVar4 = 0;
  if (uVar2 != 0) {
    puVar3 = (undefined4 *)F_00406b90(0x20,0,0);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      F_00cb4700(puVar3,1,0);
      puVar3[5] = 1;
      *puVar3 = (*(undefined * PTR32 (*)[2])REFP(0x10b92a4));
      puVar3[6] = this;
      puVar3[7] = ((code *)REFP(0x72dbe0));
    }
    *(undefined4 * PTR32 *)((int)this + 0x34c) = puVar3;
    F_00cb4540(puVar3,0,param_1);
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x348) + 0x48))))
                      (*(int * PTR32 *)((int)this + 0x348),*(undefined4 *)((int)this + 0x34c));
  }
  return uVar4;
}

/* ref: FUN_006d2c00 */
uint F_006d2c00(unsigned int gen_a0)
{
  GEN_ENTER(0x6d2c00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)*(byte *)(*piVar2 + 0x4f6));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006d2c50 */
uint F_006d2c50(unsigned int gen_a0)
{
  GEN_ENTER(0x6d2c50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  undefined4 uVar5;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),3);
  if (((byte)(uVar2 - 1) < 8) && ((byte)(uVar4 - 1) < 6)) {
    uVar5 = *((undefined4 *)GEN_TOP((iVar1 + 0x364 + ((uVar4 - 1 & 0xff) + (uVar2 - 1 & 0xff) * 0xc) * 4)));
  }
  else {
    uVar5 = 0;
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar5);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006d2ce0 */
uint F_006d2ce0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d2ce0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  undefined4 uVar5;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar3);
  iVar1 = *piVar4;
  uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  bVar2 = (char)uVar3 - 1;
  if (bVar2 < 8) {
    uVar5 = *(undefined4 *)(iVar1 + 0x380 + (uint)bVar2 * 0x30);
  }
  else {
    uVar5 = 0;
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar5);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006d2d60 */
uint F_006d2d60(unsigned int gen_a0)
{
  GEN_ENTER(0x6d2d60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar3);
  iVar2 = *piVar4;
  uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  puVar1 = (uint *)(iVar2 + 0x38);
  *puVar1 = *puVar1 | 4;
  *(char *)(iVar2 + 0x500) = (char)uVar3;
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006d2dc0 */
uint F_006d2dc0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d2dc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  *(undefined4 *)(*piVar2 + 0x4fc) = 7;
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006d2e10 */
uint F_006d2e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d2e10u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) + 1;
  uVar2 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c);
  uVar2 = F_00a02570(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))),"getKillBNPCNum",uVar2,&(*(uint *)&gen_args[1]),1,1);
  if (uVar2 != 0) {
    return 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
  uVar3 = F_00b9a9b0(*(undefined4 *)(iVar1 + 8),0xffffffff);
  uVar2 = (*(uint *)&gen_args[1]);
  if (uVar3 != 0) {
    uVar2 = F_00b9ab70(*(undefined4 *)(iVar1 + 8),0xffffffff);
  }
  F_00b9a760(*(undefined4 *)(iVar1 + 8),0xfffffffe);
  return uVar2;
}

/* ref: FUN_006d2e90 */
uint F_006d2e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d2e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)((int)this + 0x380);
  do {
    if (param_1 == *(*(int * PTR32 *)(gen_frame + 0x18))) {
      (*(int *)(gen_frame + 0x10)) = uVar3 + 1;
      uVar2 = F_0042a990((int)this + 0x16c);
      uVar2 = F_00a02570(*(undefined * PTR32 *)((int)this + 0xf8),"getDropItemNum",uVar2,&(*(int *)(gen_frame + 0x10)),1,1);
      if (uVar2 == 0) {
        iVar1 = *(int *)((int)this + 0xf8);
        uVar2 = F_00b9a9b0(*(undefined4 *)(iVar1 + 8),0xffffffff);
        if (uVar2 != 0) {
          (*(uint *)(gen_frame + 0xc)) = F_00b9ab70(*(undefined4 *)(iVar1 + 8),0xffffffff);
        }
        F_00b9a760(*(undefined4 *)(iVar1 + 8),0xfffffffe);
        (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) + (*(uint *)(gen_frame + 0xc));
      }
    }
    (*(int * PTR32 *)(gen_frame + 0x18)) = (*(int * PTR32 *)(gen_frame + 0x18)) + 0xc;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 8);
  return (*(uint *)(gen_frame + 0x14));
}

/* ref: FUN_006d2f40 */
uint F_006d2f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d2f40u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) + 1;
  uVar2 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c);
  uVar2 = F_00a02570(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))),"getKillNum",uVar2,&(*(uint *)&gen_args[1]),1,1);
  if (uVar2 != 0) {
    return 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
  uVar3 = F_00b9a9b0(*(undefined4 *)(iVar1 + 8),0xffffffff);
  uVar2 = (*(uint *)&gen_args[1]);
  if (uVar3 != 0) {
    uVar2 = F_00b9ab70(*(undefined4 *)(iVar1 + 8),0xffffffff);
  }
  F_00b9a760(*(undefined4 *)(iVar1 + 8),0xfffffffe);
  return uVar2;
}

/* ref: FUN_006d2fc0 */
uint F_006d2fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d2fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  int * piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int local_8;
  
  uVar6 = 0;
  uVar1 = F_0042a990((int)this + 0x16c);
  uVar1 = F_00a024d0(*(undefined * PTR32 *)((int)this + 0xf8),"getGameSequence",uVar1,1);
  if (uVar1 == 0) {
    iVar4 = *(int *)((int)this + 0xf8);
    uVar1 = F_00b9a9b0(*(undefined4 *)(iVar4 + 8),0xffffffff);
    if (uVar1 != 0) {
      uVar6 = F_00b9ab70(*(undefined4 *)(iVar4 + 8),0xffffffff);
    }
    F_00b9a760(*(undefined4 *)(iVar4 + 8),0xfffffffe);
  }
  if ((int)uVar6 < 1) {
    uVar6 = 1;
  }
  else if (3 < (int)uVar6) {
    uVar6 = 3;
  }
  iVar4 = 0;
  iVar5 = 0;
  local_8 = 0;
  if (1 < (int)uVar6) {
    piVar3 = (int *)((int)this + param_1 * 0x30 + 0x368);
    iVar2 = (uVar6 - 2 >> 1) + 1;
    local_8 = iVar2 * 2;
    do {
      iVar4 = iVar4 + piVar3[-1];
      iVar5 = iVar5 + *piVar3;
      piVar3 = piVar3 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = 0;
  if (local_8 < (int)uVar6) {
    iVar2 = *((int *)GEN_TOP(((int)this + (local_8 + param_1 * 0xc) * 4 + 0x364)));
  }
  return iVar5 + iVar4 + iVar2;
}

/* ref: FUN_006d30a0 */
uint F_006d30a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d30a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  (*(int *)&gen_args[1]) = (byte)(*(int *)&gen_args[1]) + 1;
  uVar3 = 0;
  uVar2 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c);
  uVar2 = F_00a02570(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))),"getTargetKillNum",uVar2,&(*(int *)&gen_args[1]),1,1);
  if (uVar2 == 0) {
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
    uVar2 = F_00b9a9b0(*(undefined4 *)(iVar1 + 8),0xffffffff);
    if (uVar2 != 0) {
      uVar3 = F_00b9ab70(*(undefined4 *)(iVar1 + 8),0xffffffff);
    }
    F_00b9a760(*(undefined4 *)(iVar1 + 8),0xfffffffe);
  }
  return uVar3;
}

/* ref: FUN_006d3120 */
uint F_006d3120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d3120u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  (*(int *)&gen_args[1]) = (byte)(*(int *)&gen_args[1]) + 1;
  uVar3 = 0;
  uVar2 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c);
  uVar2 = F_00a02570(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))),"getTargetNum",uVar2,&(*(int *)&gen_args[1]),1,1);
  if (uVar2 == 0) {
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
    uVar2 = F_00b9a9b0(*(undefined4 *)(iVar1 + 8),0xffffffff);
    if (uVar2 != 0) {
      uVar3 = F_00b9ab70(*(undefined4 *)(iVar1 + 8),0xffffffff);
    }
    F_00b9a760(*(undefined4 *)(iVar1 + 8),0xfffffffe);
  }
  return uVar3;
}

/* ref: FUN_006d31a0 */
uint F_006d31a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d31a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  bVar1 = *(byte *)((int)this + 0x1dc);
  uVar3 = 0;
  if (bVar1 == 0) {
    bVar1 = 1;
  }
  else if (3 < bVar1) {
    bVar1 = 3;
  }
  uVar5 = (uint)bVar1;
  iVar6 = 0;
  iVar7 = 0;
  if (1 < uVar5) {
    piVar4 = (int *)((int)this + (uint)(byte)param_1 * 0x30 + 0x368);
    iVar2 = (uVar5 - 2 >> 1) + 1;
    uVar3 = iVar2 * 2;
    do {
      iVar6 = iVar6 + piVar4[-1];
      iVar7 = iVar7 + *piVar4;
      piVar4 = piVar4 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (uVar5 <= uVar3) {
    return iVar7 + iVar6;
  }
  return iVar7 + iVar6 + *((int *)GEN_TOP(((int)this + (uVar3 + (uint)(byte)param_1 * 0xc) * 4 + 0x364)));
}

/* ref: FUN_006d3240 */
uint F_006d3240(unsigned int gen_a0)
{
  GEN_ENTER(0x6d3240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = F_0042a990((int)this + 0x16c);
  uVar2 = F_00a024d0(*(undefined * PTR32 *)((int)this + 0xf8),"getEventSuccessNum",uVar2,1);
  if (uVar2 == 0) {
    iVar1 = *(int *)((int)this + 0xf8);
    uVar2 = F_00b9a9b0(*(undefined4 *)(iVar1 + 8),0xffffffff);
    if (uVar2 != 0) {
      uVar3 = F_00b9ab70(*(undefined4 *)(iVar1 + 8),0xffffffff);
    }
    F_00b9a760(*(undefined4 *)(iVar1 + 8),0xfffffffe);
  }
  return uVar3;
}

/* ref: FUN_006d32b0 */
uint F_006d32b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d32b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = F_0042a990((int)this + 0x16c);
  uVar2 = F_00a024d0(*(undefined * PTR32 *)((int)this + 0xf8),"getEventItemNum",uVar2,1);
  if (uVar2 == 0) {
    iVar1 = *(int *)((int)this + 0xf8);
    uVar2 = F_00b9a9b0(*(undefined4 *)(iVar1 + 8),0xffffffff);
    if (uVar2 != 0) {
      uVar3 = F_00b9ab70(*(undefined4 *)(iVar1 + 8),0xffffffff);
    }
    F_00b9a760(*(undefined4 *)(iVar1 + 8),0xfffffffe);
  }
  return uVar3;
}

/* ref: FUN_006d3320 */
uint F_006d3320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d3320u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  (*(int *)&gen_args[1]) = (byte)(*(int *)&gen_args[1]) + 1;
  uVar3 = 0;
  uVar2 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c);
  uVar2 = F_00a02570(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))),"getDetectNum",uVar2,&(*(int *)&gen_args[1]),1,1);
  if (uVar2 == 0) {
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
    uVar2 = F_00b9a9b0(*(undefined4 *)(iVar1 + 8),0xffffffff);
    if (uVar2 != 0) {
      uVar3 = F_00b9ab70(*(undefined4 *)(iVar1 + 8),0xffffffff);
    }
    F_00b9a760(*(undefined4 *)(iVar1 + 8),0xfffffffe);
  }
  return uVar3;
}

/* ref: FUN_006d33a0 */
uint F_006d33a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d33a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = F_0042a990((int)this + 0x16c);
  uVar2 = F_00a024d0(*(undefined * PTR32 *)((int)this + 0xf8),"getRoundPointNum",uVar2,1);
  if (uVar2 == 0) {
    iVar1 = *(int *)((int)this + 0xf8);
    uVar2 = F_00b9a9b0(*(undefined4 *)(iVar1 + 8),0xffffffff);
    if (uVar2 != 0) {
      uVar3 = F_00b9ab70(*(undefined4 *)(iVar1 + 8),0xffffffff);
    }
    F_00b9a760(*(undefined4 *)(iVar1 + 8),0xfffffffe);
  }
  return uVar3;
}

/* ref: FUN_006d3410 */
uint F_006d3410(unsigned int gen_a0)
{
  GEN_ENTER(0x6d3410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = F_0042a990((int)this + 0x16c);
  uVar2 = F_00a024d0(*(undefined * PTR32 *)((int)this + 0xf8),"getRoundTargetNum",uVar2,1);
  if (uVar2 == 0) {
    iVar1 = *(int *)((int)this + 0xf8);
    uVar2 = F_00b9a9b0(*(undefined4 *)(iVar1 + 8),0xffffffff);
    if (uVar2 != 0) {
      uVar3 = F_00b9ab70(*(undefined4 *)(iVar1 + 8),0xffffffff);
    }
    F_00b9a760(*(undefined4 *)(iVar1 + 8),0xfffffffe);
  }
  return uVar3;
}

/* ref: FUN_006d3480 */
uint F_006d3480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d3480u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  (*(int *)&gen_args[1]) = (byte)(*(int *)&gen_args[1]) + 1;
  uVar3 = 0;
  uVar2 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c);
  uVar2 = F_00a02570(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))),"getKillNum",uVar2,&(*(int *)&gen_args[1]),1,1);
  if (uVar2 == 0) {
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
    uVar2 = F_00b9a9b0(*(undefined4 *)(iVar1 + 8),0xffffffff);
    if (uVar2 != 0) {
      uVar3 = F_00b9ab70(*(undefined4 *)(iVar1 + 8),0xffffffff);
    }
    F_00b9a760(*(undefined4 *)(iVar1 + 8),0xfffffffe);
  }
  return uVar3;
}

/* ref: FUN_006d3500 */
uint F_006d3500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d3500u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  (*(int *)&gen_args[1]) = (byte)(*(int *)&gen_args[1]) + 1;
  uVar3 = 0;
  uVar2 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c);
  uVar2 = F_00a02570(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))),"getEventItemNum",uVar2,&(*(int *)&gen_args[1]),1,1);
  if (uVar2 == 0) {
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
    uVar2 = F_00b9a9b0(*(undefined4 *)(iVar1 + 8),0xffffffff);
    if (uVar2 != 0) {
      uVar3 = F_00b9ab70(*(undefined4 *)(iVar1 + 8),0xffffffff);
    }
    F_00b9a760(*(undefined4 *)(iVar1 + 8),0xfffffffe);
  }
  return uVar3;
}

/* ref: FUN_006d3580 */
uint F_006d3580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d3580u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  (*(int *)&gen_args[1]) = (byte)(*(int *)&gen_args[1]) + 1;
  uVar3 = 0;
  uVar2 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c);
  uVar2 = F_00a02570(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))),"getEventItemTargetNum",uVar2,&(*(int *)&gen_args[1]),1,1);
  if (uVar2 == 0) {
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
    uVar2 = F_00b9a9b0(*(undefined4 *)(iVar1 + 8),0xffffffff);
    if (uVar2 != 0) {
      uVar3 = F_00b9ab70(*(undefined4 *)(iVar1 + 8),0xffffffff);
    }
    F_00b9a760(*(undefined4 *)(iVar1 + 8),0xfffffffe);
  }
  return uVar3;
}

/* ref: FUN_006d3600 */
uint F_006d3600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d3600u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  (*(int *)&gen_args[1]) = (byte)(*(int *)&gen_args[1]) + 1;
  uVar3 = 0;
  uVar2 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c);
  uVar2 = F_00a02570(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))),"getKillNum",uVar2,&(*(int *)&gen_args[1]),1,1);
  if (uVar2 == 0) {
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
    uVar2 = F_00b9a9b0(*(undefined4 *)(iVar1 + 8),0xffffffff);
    if (uVar2 != 0) {
      uVar3 = F_00b9ab70(*(undefined4 *)(iVar1 + 8),0xffffffff);
    }
    F_00b9a760(*(undefined4 *)(iVar1 + 8),0xfffffffe);
  }
  return uVar3;
}

/* ref: FUN_006d3680 */
uint F_006d3680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d3680u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  (*(int *)&gen_args[1]) = (byte)(*(int *)&gen_args[1]) + 1;
  uVar3 = 0;
  uVar2 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c);
  uVar2 = F_00a02570(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))),"getKillTargetNum",uVar2,&(*(int *)&gen_args[1]),1,1);
  if (uVar2 == 0) {
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
    uVar2 = F_00b9a9b0(*(undefined4 *)(iVar1 + 8),0xffffffff);
    if (uVar2 != 0) {
      uVar3 = F_00b9ab70(*(undefined4 *)(iVar1 + 8),0xffffffff);
    }
    F_00b9a760(*(undefined4 *)(iVar1 + 8),0xfffffffe);
  }
  return uVar3;
}

/* ref: FUN_006d3700 */
byte F_006d3700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d3700u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  char cVar3;
  
  (*(int *)&gen_args[1]) = (byte)(*(int *)&gen_args[1]) + 1;
  cVar3 = '\0';
  uVar2 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c);
  uVar2 = F_00a02570(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))),"getBossEntryIndex",uVar2,&(*(int *)&gen_args[1]),1,1);
  if (uVar2 == 0) {
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
    uVar2 = F_00b9a9b0(*(undefined4 *)(iVar1 + 8),0xffffffff);
    cVar3 = '\0';
    if (uVar2 != 0) {
      uVar2 = F_00b9ab70(*(undefined4 *)(iVar1 + 8),0xffffffff);
      cVar3 = (char)uVar2;
    }
    F_00b9a760(*(undefined4 *)(iVar1 + 8),0xfffffffe);
  }
  return cVar3 - 1;
}

/* ref: FUN_006d3780 */
uint F_006d3780(unsigned int gen_a0)
{
  GEN_ENTER(0x6d3780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = F_0042a990((int)this + 0x16c);
  uVar2 = F_00a024d0(*(undefined * PTR32 *)((int)this + 0xf8),"getKillNum",uVar2,1);
  if (uVar2 == 0) {
    iVar1 = *(int *)((int)this + 0xf8);
    uVar2 = F_00b9a9b0(*(undefined4 *)(iVar1 + 8),0xffffffff);
    if (uVar2 != 0) {
      uVar3 = F_00b9ab70(*(undefined4 *)(iVar1 + 8),0xffffffff);
    }
    F_00b9a760(*(undefined4 *)(iVar1 + 8),0xfffffffe);
  }
  return uVar3;
}

/* ref: FUN_006d37f0 */
uint F_006d37f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d37f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = F_0042a990((int)this + 0x16c);
  uVar2 = F_00a024d0(*(undefined * PTR32 *)((int)this + 0xf8),"getTargetKillNum",uVar2,1);
  if (uVar2 == 0) {
    iVar1 = *(int *)((int)this + 0xf8);
    uVar2 = F_00b9a9b0(*(undefined4 *)(iVar1 + 8),0xffffffff);
    if (uVar2 != 0) {
      uVar3 = F_00b9ab70(*(undefined4 *)(iVar1 + 8),0xffffffff);
    }
    F_00b9a760(*(undefined4 *)(iVar1 + 8),0xfffffffe);
  }
  return uVar3;
}

/* ref: FUN_006d3860 */
uint F_006d3860(unsigned int gen_a0)
{
  GEN_ENTER(0x6d3860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = F_0042a990((int)this + 0x16c);
  uVar2 = F_00a024d0(*(undefined * PTR32 *)((int)this + 0xf8),"getEventItemNum",uVar2,1);
  if (uVar2 == 0) {
    iVar1 = *(int *)((int)this + 0xf8);
    uVar2 = F_00b9a9b0(*(undefined4 *)(iVar1 + 8),0xffffffff);
    if (uVar2 != 0) {
      uVar3 = F_00b9ab70(*(undefined4 *)(iVar1 + 8),0xffffffff);
    }
    F_00b9a760(*(undefined4 *)(iVar1 + 8),0xfffffffe);
  }
  return uVar3;
}

/* ref: FUN_006d38d0 */
uint F_006d38d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d38d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if ((byte)param_1 < 4) {
    return *(uint *)((int)this + (uint)(byte)param_1 * 4 + 0x360);
  }
  if ((byte)param_1 < 8) {
    return *((uint *)GEN_TOP((*(int *)((int)this + 0x3d4) + (uint)(byte)((byte)param_1 - 4) * 4)));
  }
  return 0;
}

/* ref: FUN_006d3910 */
uint F_006d3910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d3910u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar2 = (uint)(*param_1 != 0);
  if (param_1[1] != 0) {
    ((undefined4 *)(gen_frame + 0x8))[(int)(uVar2)] = 1;
    uVar2 = uVar2 + 1;
  }
  if (param_1[2] != 0) {
    ((undefined4 *)(gen_frame + 0x8))[(int)(uVar2)] = 2;
    uVar2 = uVar2 + 1;
  }
  if (param_1[3] != 0) {
    ((undefined4 *)(gen_frame + 0x8))[(int)(uVar2)] = 3;
    uVar2 = uVar2 + 1;
  }
  uVar1 = (param_2 & 0xffff) + (param_3 & 0xffff);
  uVar1 = uVar1 * 0x800 ^ uVar1;
  uVar2 = param_1[((uVar1 >> 8 ^ uVar1) % 1000) % uVar2];
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: FUN_006d39e0 */
byte F_006d39e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d39e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  uVar1 = 0;
  piVar2 = (int *)((int)this + 0x360);
  do {
    if (*piVar2 == param_1) {
      return 1;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (uVar1 < 4);
  uVar3 = 0;
  uVar1 = *(int *)((int)this + 0x3d8) - *(int *)((int)this + 0x3d4) >> 2;
  if (uVar1 != 0) {
    piVar2 = *(int * PTR32 *)((int)this + 0x3d4);
    do {
      if (*piVar2 == param_1) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar3 < uVar1);
  }
  return 0;
}

/* ref: FUN_006d3a40 */
byte F_006d3a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d3a40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    return *(byte *)(in_ecx + 0x1de);
  case 1: ;
    return *(byte *)(in_ecx + 0x1df);
  case 2: ;
    return *(byte *)(in_ecx + 0x1e0);
  case 3: ;
    return *(byte *)(in_ecx + 0x1e1);
  case 4: ;
    return *(byte *)(in_ecx + 0x1e2);
  case 5: ;
    return *(byte *)(in_ecx + 0x1e3);
  case 6: ;
    return *(byte *)(in_ecx + 0x1e4);
  case 7: ;
    return *(byte *)(in_ecx + 0x1e5);
  default: ;
    return 0;
  }
}

/* ref: FUN_006d40d0 */
uint F_006d40d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d40d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint * puVar5;
  undefined4 uVar6;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),3);
  if (uVar2 - 1 < 8) {
    puVar5 = ((uint *)GEN_TOP((((uVar2 - 1) * 3 + 0x36) * 0x10 + iVar1)));
    uVar6 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8));
    switch((unsigned int)(uintptr_t)(uVar4)) {
    case 0: ;
      uVar2 = puVar5[7];
      break;
    case 1: ;
      uVar2 = (uint)(ushort)puVar5[9];
      break;
    case 2: ;
      uVar2 = *puVar5;
      break;
    case 3: ;
      uVar2 = puVar5[8];
      break;
    case 4: ;
      uVar2 = (uint)*(byte *)((int)puVar5 + 0x26);
      break;
    case 5: ;
      uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),4);
      if (5 < uVar2 - 1) goto switchD_006d4133_default;
      uVar2 = puVar5[uVar2];
      uVar6 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8));
      break;
    case 6: ;
      uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),4);
      if (7 < uVar2 - 1) goto switchD_006d4133_default;
      uVar2 = (uint)*(byte *)(uVar2 + 0x27 + (int)puVar5);
      uVar6 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8));
      break;
    default: ;
      goto switchD_006d4133_default;
    }
    F_00b9ae00(uVar6,uVar2);
    F_00a01890(((byte *)(gen_frame + 0xc)));
    return 1;
  }
switchD_006d4133_default: ;
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: Client::Game::Event::CompanyLeveDirector::vf155 */
uint F_006d41f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d41f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_0042a990(this + 0x16c);
  F_00a024d0(*(undefined * PTR32 *)(this + 0xf8),"OnSynchronize",uVar1,uVar2);
  uVar1 = F_0042a990(this + 0x16c);
  F_00ba0eb0(*(undefined4 *)(this + 0xf8),uVar1);
  uVar1 = F_00ba12d0(this + 0x4f0);
  return uVar1;
}

/* ref: FUN_006d4240 */
ushort F_006d4240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6d4240u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  ushort uVar1;
  uint uVar2;
  
  uVar1 = (ushort)(byte)param_6 + (short)param_1;
  if ((char)param_2 != '\0') {
    uVar2 = F_00ab3300(0x13);
    uVar1 = uVar1 + *(short *)(uVar2 + 4);
  }
  if ((char)param_3 != '\0') {
    uVar2 = F_00ab3300(0x14);
    uVar1 = uVar1 + *(short *)(uVar2 + 4);
  }
  if (param_4 == 0x10) {
    if ((char)param_5 != '\x01') {
      return uVar1;
    }
  }
  else if (param_4 == 0x11) {
    if ((char)param_5 != '\x02') {
      return uVar1;
    }
  }
  else {
    if (param_4 != 0x12) {
      return uVar1;
    }
    if ((char)param_5 != '\x03') {
      return uVar1;
    }
  }
  uVar2 = F_00ab3300(0x15);
  return uVar1 + *(short *)(uVar2 + 4);
}

/* ref: FUN_006d42d0 */
unsigned int F_006d42d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6d42d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  uint param_5 = (uint)gen_a5;
  uint * puVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint * puVar6;
  ushort * local_c;
  
  F_006c42a0(this);
  *(uint *)this = param_2;
  local_c = (ushort *)(param_1 + 0x18);
  puVar1 = (uint *)(param_1 + 8);
  param_2 = 0;
  do {
    uVar4 = *puVar1;
    if (uVar4 != 0) {
      if (*(int *)((int)this + 0x2a8) != 0) {
        puVar6 = (uint *)((int)this + 0x68);
        uVar5 = 0;
        do {
          if (*(char *)((int)puVar6 + -2) == '\0') {
            uVar3 = *puVar6;
            if ((puVar6[3] & 1) != 0) {
              uVar3 = uVar3 + 1000000;
            }
          }
          else {
            pvVar2 = (undefined *)F_00a3a860(puVar6 + -2);
            uVar3 = F_0046e5e0(pvVar2);
          }
          if (uVar3 == uVar4) {
            uVar4 = F_00a3a8a0(puVar6 + -2);
            F_00a35f80(puVar6 + -2,uVar4 + 1);
            goto LAB_006d4427;
          }
          uVar5 = uVar5 + 1;
          puVar6 = puVar6 + 0x2a;
        } while (uVar5 < *(uint *)((int)this + 0x2a8));
      }
      uVar5 = 0;
      if (param_5 != 0) {
        do {
          if (*(uint *)(param_4 + uVar5 * 4) == uVar4) {
            pvVar2 = ((undefined *)GEN_TOP((*(int *)((int)this + 0x2a8) * 0xa8 + 8 + (int)this)));
            puVar6 = *(uint * PTR32 *)(param_3 + uVar5 * 4);
            F_0042e430(pvVar2,(*puVar6 & 0xffffff) + (int)puVar6);
            F_00a35f80((undefined *)((int)pvVar2 + 0x58),(uint)*local_c);
            F_00a35ee0((int)pvVar2 + 0x58,uVar4,1);
            if (*(char *)(param_2 + 0x21 + param_1) == '\0') {
              *(byte *)((int)pvVar2 + 0x6c) = *(byte *)((int)pvVar2 + 0x6c) & 0xfe;
            }
            else {
              *(byte *)((int)pvVar2 + 0x6c) = *(byte *)((int)pvVar2 + 0x6c) | 1;
            }
            *(bool *)((int)pvVar2 + 0xa0) = 1 < *((uint *)GEN_TOP((*(int *)(param_3 + uVar5 * 4) + 0x28)));
            *(byte *)((int)pvVar2 + 0x99) = ~*(byte *)((int)pvVar2 + 0x6c) & 1;
            *(int *)((int)this + 0x2a8) = *(int *)((int)this + 0x2a8) + 1;
            break;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < param_5);
      }
    }
LAB_006d4427: ;
    local_c = local_c + 1;
    param_2 = param_2 + 1;
    puVar1 = puVar1 + 1;
    if (3 < param_2) {
      param_1 = 0;
      if (*(int *)((int)this + 0x2a8) != 0) {
        pvVar2 = (undefined *)((int)this + 0x60);
        do {
          uVar4 = F_00a411a0(&REFG(undefined, 0x14a4230),pvVar2,0,1);
          if ((*(byte *)((int)pvVar2 + 0x14) & 1) == 0) {
            uVar5 = *(uint *)((int)pvVar2 + 0x44);
            uVar4 = uVar4 - uVar5;
            if (*(char *)((int)pvVar2 + 0x48) == '\0') {
              uVar4 = uVar4 + uVar5;
            }
            else if (uVar4 <= uVar5) {
              uVar4 = uVar5;
            }
          }
          uVar5 = F_00a3a8a0(pvVar2);
          if (uVar5 < uVar4) {
            uVar4 = F_00a3a8a0(pvVar2);
          }
          *(uint *)((int)pvVar2 + 0x4c) = uVar4;
          param_1 = param_1 + 1;
          pvVar2 = (undefined *)((int)pvVar2 + 0xa8);
        } while (param_1 < *(uint *)((int)this + 0x2a8));
      }
      return 0;
    }
  } while( true );
}

/* ref: Client::Game::Event::OpeningEventHandler::vf13 */
byte F_006d44c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d44c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  undefined * pOVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  iVar3 = 0;
  if ((REFG(int * PTR32, 0x1379694) != (int *)0x0) &&
     ((iVar3 = REFG(int * PTR32, 0x1379694)[0x5d], iVar3 == 0 ||
      (uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 4))))(REFG(int * PTR32, 0x1379694)), uVar4 != 1)))) {
    iVar3 = 0;
  }
  pOVar2 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)((uint)pOVar2 & 0xffffff);
  uVar4 = F_0042a990(iVar3 + 8);
  uVar5 = F_0042a990(this + 0x16c);
  uVar4 = F_00a028c0(*(undefined * PTR32 *)(this + 0xf8),"OnPreWithinRange",uVar5,uVar4,uVar1,1);
  if (uVar4 == 0) {
    F_00a01d80(*(undefined * PTR32 *)(this + 0xf8),(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3);
  }
  return (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3));
}

/* ref: FUN_006d4550 */
uint F_006d4550(unsigned int gen_a0)
{
  GEN_ENTER(0x6d4550u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00a01ea0(((byte *)(gen_frame + 0xc)),1);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006d45a0 */
uint F_006d45a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d45a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)*(ushort *)(*piVar2 + 0x1d8));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: Client::Game::Event::ExitRangeEventHandler::vf13 */
byte F_006d45f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d45f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  
  if ((((*(char *)(param_1 + 0x11) == ')') && (REFG(int, 0x1379694) != 0)) &&
      (*(char *)(REFG(int, 0x1379694) + 0x188) != '\x02')) && (REFG(char, 0x14a7381) == '\0')) {
    bVar1 = F_006c4c80(REFG(int, 0x1379694),(uint)*(ushort *)(param_1 + 0x86));
    return bVar1;
  }
  return 0;
}

/* ref: FUN_006d4630 */
uint F_006d4630(unsigned int gen_a0)
{
  GEN_ENTER(0x6d4630u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)*(byte *)(*piVar2 + 0x1d4));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006d4680 */
uint F_006d4680(unsigned int gen_a0)
{
  GEN_ENTER(0x6d4680u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  uVar3 = 0;
  if (*piVar2 != 0) {
    uVar3 = **(undefined4 * PTR32 *)(*piVar2 + 0x1d4);
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar3);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006d46e0 */
uint F_006d46e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d46e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar4 = 0;
  if (iVar1 != 0) {
    uVar2 = F_00ab3e50(uVar2);
    if (uVar2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (uint)*(ushort *)(uVar2 + 0xc);
    }
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar4);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006d4760 */
uint F_006d4760(unsigned int gen_a0)
{
  GEN_ENTER(0x6d4760u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)*(byte *)(*piVar2 + 0x1dc));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: Client::Game::Event::QuestBattleDirector::vf154 */
uint F_006d47c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d47c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  uVar1 = param_1 & 0xff;
  uVar4 = 0;
  uVar3 = (uint)(byte)param_2;
  uVar2 = F_0042a990(this + 0x16c);
  uVar3 = F_00a02640(*(undefined * PTR32 *)(this + 0xf8),"OnSequence",uVar2,uVar1,uVar3,uVar4);
  uVar3 = CONCAT31((int3)(uVar3 >> 8),(byte)param_2);
  if ((byte)param_2 == 0xfe) {
    F_00ab6670(1);
    if (((byte)this[0x1e7] & 0x80) == 0) {
      F_006c6500(5);
      F_00a6e080(&REFG(undefined, 0x14a9e40),0x83,0,0);
    }
    uVar3 = F_00a6ddf0(&REFG(undefined, 0x14ab380));
  }
  else if ((byte)param_2 < 0xfe) {
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"OnSequence%03d",(uint)(byte)param_2);
    uVar3 = F_0042a990(this + 0x16c);
    uVar3 = F_00a024d0(*(undefined * PTR32 *)(this + 0xf8),((undefined1 *)(gen_frame + 0x8)),uVar3,0);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar3;
}

/* ref: FUN_006d48b0 */
uint F_006d48b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d48b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  F_00ab6ad0(uVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006d48f0 */
uint F_006d48f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6d48f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined * pvVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  uint uVar6;
  
  uVar3 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = this;
  REFG(undefined4, 0x13238f8) = 0;
  (*(uint *)(gen_frame + 0x40)) = 0;
  if (param_4 != 0) {
    do {
      pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x48));
      piVar4 = *(int * PTR32 *)(param_3 + (*(uint *)(gen_frame + 0x40)) * 4);
      if (*(short *)((int)piVar4 + 10) == 0xd) {
        uVar3 = 0;
        piVar4 = piVar4 + 0x3e;
        iVar5 = 0x10;
        do {
          if (*piVar4 != 0) {
            ((int *)(gen_frame + 0x0))[(int)(uVar3)] = *piVar4;
            uVar3 = uVar3 + 1;
          }
          piVar4 = piVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        uVar6 = 0;
        (*(uint *)(gen_frame + 0x44)) = uVar3;
        if (uVar3 != 0) {
          do {
            piVar4 = (int *)((int *)(gen_frame + 0x0))[(int)(uVar6)];
            ((code *)*(gen_code32 *)(*piVar4 + 0x214))(piVar4,param_1,param_2,1,0);
            uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4);
            if ((((char)uVar3 != '\0') && (((uint)piVar4[0xe] >> 1 & 1) != 0)) &&
               (uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x14))(piVar4,param_2), (char)uVar3 != '\0')) {
              uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x214))(piVar4,param_1,param_2,1,0);
              if ((uVar3 == 0) || (bVar2 = F_00a4a790(&REFG(undefined, 0x14a7360),uVar3), bVar2 != 0)) {
                (&REFG(undefined4, 0x1323878))[REFG(undefined4, 0x13238f8)] = piVar4;
                REFG(undefined4, 0x13238f8) = REFG(undefined4, 0x13238f8) + 1;
              }
              else if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x48)) + 0x720) == 0) {
                *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x48)) + 0x720) = uVar3;
              }
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < (*(uint *)(gen_frame + 0x44)));
        }
      }
      else {
        uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4);
        if ((((char)uVar3 != '\0') && (((uint)piVar4[0xe] >> 1 & 1) != 0)) &&
           (uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x14))(piVar4,param_2), (char)uVar3 != '\0')) {
          uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x214))(piVar4,param_1,param_2,1,0);
          if ((uVar3 == 0) || (bVar2 = F_00a4a790(&REFG(undefined, 0x14a7360),uVar3), bVar2 != 0)) {
            (&REFG(undefined4, 0x1323878))[REFG(undefined4, 0x13238f8)] = piVar4;
            REFG(undefined4, 0x13238f8) = REFG(undefined4, 0x13238f8) + 1;
          }
          else if (*(int *)((int)pvVar1 + 0x720) == 0) {
            *(uint *)((int)pvVar1 + 0x720) = uVar3;
          }
        }
      }
      uVar3 = REFG(undefined4, 0x13238f8);
    } while ((REFG(undefined4, 0x13238f8) != 0x20) && (uVar6 = (*(uint *)(gen_frame + 0x40)) + 1, (*(uint *)(gen_frame + 0x40)) = uVar6, uVar6 < param_4));
  }
  REFG(undefined4, 0x13238f8) = uVar3;
  return uVar3;
}

/* ref: FUN_006d4b60 */
uint F_006d4b60(unsigned int gen_a0)
{
  GEN_ENTER(0x6d4b60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  short sVar1;
  uint uVar2;
  undefined4 * puVar3;
  int * piVar4;
  
  uVar2 = param_1 >> 0x10;
  sVar1 = (short)(param_1 >> 0x10);
  if (((sVar1 == -0x7fff) || (sVar1 == -0x7ffe)) || (sVar1 == -0x7ff9)) {
    puVar3 = (undefined4 *)F_00ab3d50(10);
    uVar2 = 0;
    if (puVar3 != (undefined4 *)0x0) {
      piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0xd8))
                        (piVar4,*puVar3,(uint)*(byte *)((int)puVar3 + 5),0,
                         (int)*(char *)(puVar3 + 1));
    }
    uVar2 = CONCAT31((int3)(uVar2 >> 8),REFG(undefined1, 0x14b4ee1));
    if (((REFG(undefined1, 0x14b4ee1) & 4) != 0) && ((REFG(undefined1, 0x14b4ee1) & 0x10) == 0)) {
      uVar2 = F_00a6e080(&REFG(undefined, 0x14a9e40),0x2c,0,0);
    }
  }
  return uVar2;
}

/* ref: FUN_006d4be0 */
uint F_006d4be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6d4be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x2c)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x30)) = REFG(float, 0x1375ac0);
  (*(undefined4 *)(gen_frame + 0x34)) = REFG(float, 0x1375ac4);
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x109c94c));
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = REFG(undefined4, 0x1323520);
  (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x1375ac8);
  (*(undefined1 *)(gen_frame + 0x40)) = 0;
  (*(undefined2 *)(gen_frame + 0x42)) = 0;
  if ((char)param_4 == '\0') {
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
  }
  (*(undefined1 *)(gen_frame + 0x41)) = (undefined1)param_5;
  uVar1 = F_00aa0000(param_1,param_2,param_3,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),0,0);
  return uVar1;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf113 */
uint F_006d4c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d4c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  int * piVar7;
  uint uVar8;
  undefined4 * puVar9;
  float * pfVar10;
  float * pfVar11;
  float fVar12;
  
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = this;
  F_00a02210(((undefined1 *)(gen_frame + 0x0)),param_1);
  uVar6 = F_00a01d20(((undefined1 *)(gen_frame + 0x0)),1);
  piVar7 = (int *)F_00b9c710((*(undefined4 *)(gen_frame + 0x8)),1,uVar6);
  iVar4 = *piVar7;
  uVar6 = F_00b9c9b0((*(undefined4 *)(gen_frame + 0x8)),2);
  (*(uint *)(gen_frame + 0x50)) = uVar6;
  (*(undefined4 *)(gen_frame + 0x4c)) = *(undefined4 *)(iVar4 + 0x60);
  (*(float * PTR32 *)(gen_frame + 0x54)) = (float *)0x0;
  (*(float *)(gen_frame + 0x5c)) = 0.0;
  uVar6 = F_00a019d0(((undefined1 *)(gen_frame + 0x0)));
  pfVar10 = (*(float * PTR32 *)(gen_frame + 0x54));
  if ((2 < (int)uVar6) && (bVar5 = F_00a01f20(((undefined1 *)(gen_frame + 0x0)),3), pfVar10 = (*(float * PTR32 *)(gen_frame + 0x54)), bVar5 == 0)) {
    uVar8 = F_00a01d20(((undefined1 *)(gen_frame + 0x0)),3);
    puVar9 = (undefined4 *)F_00b9c710((*(undefined4 *)(gen_frame + 0x8)),3,uVar8);
    (*(float * PTR32 *)(gen_frame + 0x54)) = (float *)*puVar9;
    pfVar10 = (float *)F_00a5feb0(*(undefined * PTR32 *)(iVar4 + 4));
    pfVar11 = (float *)F_00a5feb0(((undefined *)(uintptr_t)gen_fl2bits((float)((*(float * PTR32 *)(gen_frame + 0x54))[1]))));
    (*(float *)(gen_frame + 0x30)) = (float)((float10)*pfVar11 - (float10)*pfVar10);
    fVar12 = pfVar11[1];
    fVar1 = pfVar10[1];
    (*(float *)(gen_frame + 0x34)) = (float)((float10)fVar12 - (float10)fVar1);
    fVar2 = pfVar11[2];
    fVar3 = pfVar10[2];
    (*(float *)(gen_frame + 0x38)) = (float)((float10)fVar2 - (float10)fVar3);
    (*(float *)(gen_frame + 0x20)) = (float)((float10)*pfVar11 - (float10)*pfVar10);
    (*(float *)(gen_frame + 0x24)) = (float)((float10)fVar12 - (float10)fVar1);
    (*(float *)(gen_frame + 0x28)) = (float)((float10)fVar2 - (float10)fVar3);
    fVar12 = F_00aae900(&(*(float *)(gen_frame + 0x20)));
    (*(float *)(gen_frame + 0x5c)) = fVar12;
    pfVar10 = &(*(float *)(gen_frame + 0x5c));
  }
  uVar8 = (*(uint *)(gen_frame + 0x58));
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x58)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x58)) = uVar8 & 0xffffff00;
  if (((3 < (int)uVar6) && (bVar5 = F_00a01f20(((undefined1 *)(gen_frame + 0x0)),4), bVar5 == 0)) &&
     (uVar8 = F_00b9c9b0((*(undefined4 *)(gen_frame + 0x8)),4), uVar8 != 0)) {
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x58)) + 0)) = 1;
    (*(uint *)(gen_frame + 0x58)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x58)), 1, 3),1);
  }
  (*(undefined1 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x54)) + 0)) = 1;
  (*(float * PTR32 *)(gen_frame + 0x54)) = ((float *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(float * PTR32 *)(gen_frame + 0x54)), 1, 3),1)));
  if (((4 < (int)uVar6) && (bVar5 = F_00a01f20(((undefined1 *)(gen_frame + 0x0)),5), bVar5 == 0)) &&
     (uVar6 = F_00b9c9b0((*(undefined4 *)(gen_frame + 0x8)),5), pfVar11 = (*(float * PTR32 *)(gen_frame + 0x54)), uVar6 != 0)) {
    (*(undefined1 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x54)) + 0)) = 0;
    (*(float * PTR32 *)(gen_frame + 0x54)) = (float *)((uint)pfVar11 & 0xffffff00);
  }
  F_006d4be0((*(undefined4 *)(gen_frame + 0x4c)),(*(uint *)(gen_frame + 0x50)),pfVar10,(*(float * PTR32 *)(gen_frame + 0x54)),(*(uint *)(gen_frame + 0x58)));
  F_00a02240(((undefined1 *)(gen_frame + 0x0)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf129 */
uint F_006d4e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d4e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float fVar1;
  int * piVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined4 * puVar5;
  uint uVar6;
  float10 fVar7;
  undefined4 uVar8;
  
  (*(undefined * PTR32 *)(gen_frame + 0x44)) = this;
  F_00a02210(((undefined1 *)(gen_frame + 0x0)),param_1);
  if (((REFG(int, 0x1375bbc) == 0) && (REFG(void * PTR32, 0x1375b90) != (undefined *)0x0)) &&
     (*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1375b90) + 0x220))) == '\0')) {
    F_00b6b010(REFG(void * PTR32, 0x1375b90));
    F_009d53f0(REFG(void * PTR32, 0x1487c90),1);
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    if (piVar2 != (int *)0x0) {
      uVar8 = 0x11;
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
      pvVar4 = (undefined *)F_00763050(uVar3,uVar8);
      if (pvVar4 != (undefined *)0x0) {
        F_00776f30(pvVar4,1);
      }
    }
  }
  uVar3 = F_00a01d20(((undefined1 *)(gen_frame + 0x0)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)(gen_frame + 0x8)),1,uVar3);
  pvVar4 = *(undefined * PTR32 *)(*piVar2 + 0x60);
  fVar7 = F_00a01dd0(((undefined1 *)(gen_frame + 0x0)),2);
  (*(float *)(gen_frame + 0x4c)) = ((float)GEN_TOF(-fVar7));
  fVar7 = F_00a01dd0(((undefined1 *)(gen_frame + 0x0)),3);
  (*(float *)(gen_frame + 0x48)) = (float)fVar7;
  uVar3 = F_00b9c9b0((*(undefined4 *)(gen_frame + 0x8)),4);
  puVar5 = (undefined4 *)F_00a5feb0(pvVar4);
  (*(undefined4 *)(gen_frame + 0x30)) = *puVar5;
  (*(undefined4 *)(gen_frame + 0x34)) = puVar5[1];
  (*(undefined4 *)(gen_frame + 0x38)) = puVar5[2];
  fVar1 = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x4c)) * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                 (float10)*(double *)&REFG(undefined, 0x1080220))));
  (*(float *)(gen_frame + 0x4c)) = fVar1;
  fVar1 = ((float)GEN_TOF(((float10)fVar1 + (float10)*(float *)((int)pvVar4 + 0xb0))));
  (*(float *)(gen_frame + 0x4c)) = fVar1;
  uVar6 = F_006ca070(&(*(undefined4 *)(gen_frame + 0x30)),fVar1,0,(*(float *)(gen_frame + 0x48)),((undefined1 *)(gen_frame + 0x20)));
  if ((char)uVar6 != '\0') {
    F_006c5980(pvVar4,((undefined1 *)(gen_frame + 0x20)),uVar3);
  }
  F_00a02240(((undefined1 *)(gen_frame + 0x0)));
  return 0;
}

/* ref: FUN_006d4f80 */
uint F_006d4f80(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0x6d4f80u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  uVar1 = F_006ca070(param_2,param_3,param_4,param_5,((undefined1 *)(gen_frame + 0x0)));
  (*(char *)(gen_frame + 0x1f)) = (char)uVar1;
  if ((char)uVar1 != '\0') {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x3c))(param_1,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = CONCAT31((int3)(uVar1 >> 8),(*(char *)(gen_frame + 0x1f)));
  }
  return uVar1;
}

/* ref: FUN_006d4fe0 */
uint F_006d4fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d4fe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  in_ecx[1] = param_2;
  F_0042b630(in_ecx + 2);
  in_ecx[0x18] = param_2;
  in_ecx[0x17] = param_3;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10b95d8));
  return (uint)in_ecx;
}

/* ref: FUN_006d5020 */
uint F_006d5020(unsigned int gen_a0)
{
  GEN_ENTER(0x6d5020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  if (**(char * PTR32 *)((int)this + 8) != '\0') {
    uVar1 = F_0042a990((int)this + 8);
    F_00a023f0(*(undefined * PTR32 *)((int)this + 0x5c),uVar1);
  }
  uVar2 = F_0042c880((undefined *)((int)this + 8));
  return (uint)uVar2;
}

/* ref: FUN_006d5050 */
uint F_006d5050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d5050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  in_ecx[1] = param_2;
  F_0042b630(in_ecx + 2);
  in_ecx[0x18] = param_2;
  in_ecx[0x17] = param_3;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10b95e4));
  return (uint)in_ecx;
}

/* ref: FUN_006d5090 */
uint F_006d5090(unsigned int gen_a0)
{
  GEN_ENTER(0x6d5090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  if (**(char * PTR32 *)((int)this + 8) != '\0') {
    uVar1 = F_0042a990((int)this + 8);
    F_00a023f0(*(undefined * PTR32 *)((int)this + 0x5c),uVar1);
  }
  uVar2 = F_0042c880((undefined *)((int)this + 8));
  return (uint)uVar2;
}

/* ref: FUN_006d50c0 */
uint F_006d50c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d50c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  undefined * pvVar2;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  *(undefined4 *)((int)this + 4) = param_1;
  F_0042b630((int)this + 8);
  *(undefined4 *)((int)this + 0x5c) = param_2;
  *(undefined4 *)((int)this + 0x60) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b95f0));
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%p",REFG(undefined * PTR32, 0x13236e8),this);
  F_0042e430((undefined *)((int)this + 8),((undefined1 *)(gen_frame + 0x8)));
  pvVar2 = this;
  uVar1 = F_0042a990((int)this + 8);
  F_00729310(*(undefined * PTR32 *)((int)this + 0x5c),REFG(undefined * PTR32, 0x13236e8),uVar1,pvVar2);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return (uint)this;
}

/* ref: FUN_006d5160 */
uint F_006d5160(unsigned int gen_a0)
{
  GEN_ENTER(0x6d5160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  if (**(char * PTR32 *)((int)this + 8) != '\0') {
    uVar1 = F_0042a990((int)this + 8);
    F_00a023f0(*(undefined * PTR32 *)((int)this + 0x5c),uVar1);
  }
  uVar2 = F_0042c880((undefined *)((int)this + 8));
  return (uint)uVar2;
}

/* ref: FUN_006d5190 */
uint F_006d5190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d5190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  undefined * pvVar2;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  *(undefined4 *)((int)this + 4) = param_1;
  F_0042b630((int)this + 8);
  *(undefined4 *)((int)this + 0x5c) = param_2;
  *(undefined4 *)((int)this + 0x60) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b95fc));
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%p",REFG(undefined * PTR32, 0x13236ec),this);
  F_0042e430((undefined *)((int)this + 8),((undefined1 *)(gen_frame + 0x8)));
  pvVar2 = this;
  uVar1 = F_0042a990((int)this + 8);
  F_00729390(*(undefined * PTR32 *)((int)this + 0x5c),REFG(undefined * PTR32, 0x13236ec),uVar1,pvVar2);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return (uint)this;
}

/* ref: FUN_006d5230 */
uint F_006d5230(unsigned int gen_a0)
{
  GEN_ENTER(0x6d5230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  if (**(char * PTR32 *)((int)this + 8) != '\0') {
    uVar1 = F_0042a990((int)this + 8);
    F_00a023f0(*(undefined * PTR32 *)((int)this + 0x5c),uVar1);
  }
  uVar2 = F_0042c880((undefined *)((int)this + 8));
  return (uint)uVar2;
}

/* ref: FUN_006d5260 */
uint F_006d5260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d5260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  undefined * pvVar2;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  *(undefined4 *)((int)this + 4) = param_1;
  F_0042b630((int)this + 8);
  *(undefined4 *)((int)this + 0x5c) = param_2;
  *(undefined4 *)((int)this + 0x60) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b9608));
  *(undefined4 *)((int)this + 100) = param_1;
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%p",REFG(undefined * PTR32, 0x13236f0),this);
  F_0042e430((undefined *)((int)this + 8),((undefined1 *)(gen_frame + 0x8)));
  pvVar2 = this;
  uVar1 = F_0042a990((int)this + 8);
  F_00729410(*(undefined * PTR32 *)((int)this + 0x5c),REFG(undefined * PTR32, 0x13236f0),uVar1,pvVar2);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return (uint)this;
}

/* ref: FUN_006d5300 */
uint F_006d5300(unsigned int gen_a0)
{
  GEN_ENTER(0x6d5300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  if (**(char * PTR32 *)((int)this + 8) != '\0') {
    uVar1 = F_0042a990((int)this + 8);
    F_00a023f0(*(undefined * PTR32 *)((int)this + 0x5c),uVar1);
  }
  uVar2 = F_0042c880((undefined *)((int)this + 8));
  return (uint)uVar2;
}

/* ref: FUN_006d5330 */
uint F_006d5330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d5330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  undefined * pvVar2;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  *(undefined4 *)((int)this + 4) = param_1;
  F_0042b630((int)this + 8);
  *(undefined4 *)((int)this + 0x5c) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b9614));
  *(undefined4 *)((int)this + 0x60) = param_1;
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%p",REFG(undefined * PTR32, 0x13236f4),this);
  F_0042e430((undefined *)((int)this + 8),((undefined1 *)(gen_frame + 0x8)));
  pvVar2 = this;
  uVar1 = F_0042a990((int)this + 8);
  F_00729490(*(undefined * PTR32 *)((int)this + 0x5c),REFG(undefined * PTR32, 0x13236f4),uVar1,pvVar2);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return (uint)this;
}

/* ref: FUN_006d53d0 */
uint F_006d53d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d53d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  undefined * pvVar2;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  *(undefined4 *)((int)this + 4) = param_1;
  F_0042b630((int)this + 8);
  *(undefined4 *)((int)this + 0x5c) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b9620));
  *(undefined4 *)((int)this + 0x60) = param_1;
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%p",REFG(undefined * PTR32, 0x13236f8),this);
  F_0042e430((undefined *)((int)this + 8),((undefined1 *)(gen_frame + 0x8)));
  pvVar2 = this;
  uVar1 = F_0042a990((int)this + 8);
  F_00729510(*(undefined * PTR32 *)((int)this + 0x5c),REFG(undefined * PTR32, 0x13236f8),uVar1,pvVar2);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return (uint)this;
}

/* ref: FUN_006d5470 */
uint F_006d5470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d5470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  undefined * pvVar2;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  *(undefined4 *)((int)this + 4) = param_1;
  F_0042b630((int)this + 8);
  *(undefined4 *)((int)this + 0x5c) = param_2;
  *(undefined4 *)((int)this + 0x60) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b962c));
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"%s:%p",REFG(undefined * PTR32, 0x13236fc),this);
  F_0042e430((undefined *)((int)this + 8),((undefined1 *)(gen_frame + 0x8)));
  pvVar2 = this;
  uVar1 = F_0042a990((int)this + 8);
  F_00729f10(*(undefined * PTR32 *)((int)this + 0x5c),REFG(undefined * PTR32, 0x13236fc),uVar1,pvVar2);
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return (uint)this;
}

/* ref: FUN_006d5510 */
uint F_006d5510(unsigned int gen_a0)
{
  GEN_ENTER(0x6d5510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b8de0));
  if (**(char * PTR32 *)((int)this + 8) != '\0') {
    uVar1 = F_0042a990((int)this + 8);
    F_00a023f0(*(undefined * PTR32 *)((int)this + 0x5c),uVar1);
  }
  uVar2 = F_0042c880((undefined *)((int)this + 8));
  return (uint)uVar2;
}

/* ref: FUN_006d5560 */
uint F_006d5560(unsigned int gen_a0)
{
  GEN_ENTER(0x6d5560u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  uVar2 = F_00a4ffd0();
  bVar1 = F_006c05a0(uVar2,0);
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)bVar1);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006d55c0 */
uint F_006d55c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d55c0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  
  uVar1 = F_006cd8f0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)&gen_args[1]),1,(*(undefined4 *)&gen_args[2]));
  return uVar1;
}

/* ref: FUN_006d55e0 */
uint F_006d55e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d55e0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  
  uVar1 = F_006cd980((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)&gen_args[1]),1,(*(undefined4 *)&gen_args[2]));
  return uVar1;
}

/* ref: FUN_006d5600 */
byte F_006d5600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d5600u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  ushort * puVar2;
  
  if ((ushort)param_1 != 0) {
    puVar2 = &REFG(undefined2, 0x10b6134);
    do {
      if ((ushort)param_1 == *puVar2) {
        bVar1 = F_006ce120(param_2);
        if (bVar1 != 0) {
          return 1;
        }
        return 0;
      }
      puVar2 = puVar2 + 1;
    } while ((int)puVar2 < 0x10b613a);
    if ((199 < (ushort)param_1 >> 3) ||
       ((*((byte *)GEN_TOP((((ushort)param_1 >> 3) + 0x12ea + param_2))) &
        (byte)(0x80 >> ((byte)(ushort)param_1 & 7))) == 0)) {
      return 0;
    }
  }
  return 1;
}

/* ref: Client::Game::Event::GuildleveAssignmentEventHandler::vf5 */
byte F_006d5670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d5670u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  short sVar1;
  uint uVar2;
  short * psVar3;
  int iVar4;
  
  sVar1 = *(short *)(in_ecx + 0x260);
  if (sVar1 != 0) {
    uVar2 = F_00a4ffd0();
    iVar4 = 0;
    psVar3 = (short *)(uVar2 + 0x13b8);
    do {
      if (*psVar3 == sVar1) {
        return 0;
      }
      iVar4 = iVar4 + 1;
      psVar3 = psVar3 + 8;
    } while (iVar4 < 0x1e);
  }
  return 1;
}

/* ref: FUN_006d56b0 */
uint F_006d56b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d56b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  iVar3 = *piVar2;
  if (*(uint *)(iVar3 + 0x5a4) < (uint)(*(int *)(iVar3 + 0x578) - *(int *)(iVar3 + 0x574) >> 2)) {
    iVar3 = *(int *)(iVar3 + 0x574) + *(uint *)(iVar3 + 0x5a4) * 4;
  }
  else {
    iVar3 = 0;
  }
  F_00a01ea0(((byte *)(gen_frame + 0xc)),(uint)(iVar3 != 0));
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_006d5730 */
uint F_006d5730(unsigned int gen_a0)
{
  GEN_ENTER(0x6d5730u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined * this;
  uint uVar1;
  undefined4 * puVar2;
  
  F_00a02210(((byte *)(gen_frame + 0x8)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  puVar2 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar1);
  this = (undefined *)*puVar2;
  (*(uint *)(gen_frame + 0x34)) = 0;
  (*(uint *)(gen_frame + 0x30)) = 0;
  (*(uint *)(gen_frame + 0x2c)) = 0;
  (*(uint *)(gen_frame + 0x28)) = 0;
  (*(byte *)(gen_frame + 0x3b)) = 0;
  (*(byte *)(gen_frame + 0x3a)) = 0;
  F_006ce250(this,&(*(uint *)(gen_frame + 0x34)),&(*(uint *)(gen_frame + 0x30)),&(*(uint *)(gen_frame + 0x2c)),&(*(uint *)(gen_frame + 0x28)),&(*(byte *)(gen_frame + 0x3b)),&(*(byte *)(gen_frame + 0x3a)));
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),(*(uint *)(gen_frame + 0x34)) & 0xffff);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),(*(uint *)(gen_frame + 0x30)) & 0xffff);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),(*(uint *)(gen_frame + 0x2c)) & 0xffff);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),(*(uint *)(gen_frame + 0x28)) & 0xffff);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),(uint)(*(byte *)(gen_frame + 0x3b)));
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),(uint)(*(byte *)(gen_frame + 0x3a)));
  F_00a02240(((byte *)(gen_frame + 0x8)));
  return 6;
}

/* ref: FUN_006d5800 */
uint F_006d5800(unsigned int gen_a0)
{
  GEN_ENTER(0x6d5800u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  short * psVar6;
  
  F_00a02210(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar4 = *(int *)(iVar1 + 0x578) - *(int *)(iVar1 + 0x574) >> 2;
  uVar5 = 0;
  if (uVar4 != 0) {
    psVar6 = *(short * PTR32 *)(iVar1 + 0x574);
    while (*psVar6 != (short)uVar2) {
      uVar5 = uVar5 + 1;
      psVar6 = psVar6 + 2;
      if (uVar4 <= uVar5) {
        F_00a02240(((byte *)(gen_frame + 0xc)));
        return 0;
      }
    }
    *(uint *)(iVar1 + 0x5a4) = uVar5;
  }
  F_00a02240(((byte *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_006d5890 */
uint F_006d5890(unsigned int gen_a0)
{
  GEN_ENTER(0x6d5890u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this;
  uint uVar1;
  undefined4 * puVar2;
  
  F_00a02210(((byte *)(gen_frame + 0x8)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  puVar2 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar1);
  uVar1 = (*(uint *)(gen_frame + 0x28));
  this = (undefined *)*puVar2;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x28)) = uVar1 & 0xffffff00;
  F_006ce560(this,&(*(uint *)(gen_frame + 0x28)));
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(uint *)(gen_frame + 0x28)));
  F_00a02240(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006d58f0 */
uint F_006d58f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6d58f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  byte bVar1;
  undefined4 * puVar2;
  int iVar3;
  byte * pbVar4;
  uint uVar5;
  int iVar6;
  
  if (param_3 == 0) {
    pbVar4 = *(byte * PTR32 *)(*param_1 + 4);
    bVar1 = *pbVar4;
    *(byte *)((int)this + 0x145) = bVar1;
    *(byte *)((int)this + 0x147) = pbVar4[0x24];
    if (*(char *)((int)this + 0x146) == '\x02') {
      uVar5 = F_00ab2de0((uint)bVar1);
      *(undefined4 *)((int)this + 300) = *(undefined4 *)(uVar5 + 8);
    }
    else {
      uVar5 = F_00ab2de0((uint)*(byte *)((int)this + 0x145));
      *(undefined4 *)((int)this + 300) = *(undefined4 *)(uVar5 + 4);
    }
    *(byte *)((int)this + 0x1c) = *(byte *)((int)this + 0x1c) & 0xfd;
    bVar1 = *(byte *)((int)this + 0x1c);
    uVar5 = CONCAT31((int3)(uVar5 >> 8),bVar1);
    if ((bVar1 & 1) == 0) {
      *(byte *)((int)this + 0x1c) = bVar1 | 1;
      uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x23c))(this);
    }
  }
  else {
    uVar5 = param_3 - 1;
    if (uVar5 == 0) {
      uVar5 = 0;
      if (param_2 != 0) {
        do {
          puVar2 = *(undefined4 * PTR32 *)(param_1[uVar5] + 4);
          iVar6 = *((char *)GEN_TOP((*(int *)((int)this + 0x10c) + uVar5))) * 0x74;
          *((undefined4 *)GEN_TOP((iVar6 + 0x68 + *(int *)((int)this + 0x10c)))) = *puVar2;
          iVar3 = *(int *)((int)this + 0x10c);
          *(undefined4 *)(iVar6 + 8 + iVar3) = *puVar2;
          uVar5 = uVar5 + 1;
          *(undefined4 *)(iVar6 + 0xc + iVar3) = puVar2[1];
        } while (uVar5 < param_2);
      }
      uVar5 = F_006cea30(this);
      return uVar5;
    }
  }
  return uVar5;
}

/* ref: FUN_006d59d0 */
uint F_006d59d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d59d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_006ce820(this);
  uVar1 = F_00463610(0,uVar1,6);
  uVar1 = F_0042e430(param_1,uVar1);
  return uVar1;
}

/* ref: FUN_006d5a00 */
uint F_006d5a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6d5a00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  
  iVar4 = *(int *)((int)this + param_1 * 4 + 0x110);
  if (iVar4 != 0) {
    piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 0x118);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,iVar4);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + param_1 * 4 + 0x110);
    if (puVar3 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
      *(undefined4 *)((int)this + param_1 * 4 + 0x110) = 0;
    }
  }
  if (*(int *)((int)this + param_1 * 4 + 0x118) == 0) {
    if (param_1 == 0) {
      uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xc);
      *(uint *)((int)this + 0x118) = uVar2;
    }
    else if (param_1 == 1) {
      *(char *)((int)this + 0x14a) = *(char *)((int)this + 0x14a) + '\x01';
      if (100 < *(byte *)((int)this + 0x14a)) {
        *(undefined1 *)((int)this + 0x14a) = 0;
      }
      uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xb);
      *(uint *)((int)this + 0x11c) = uVar2;
    }
  }
  puVar3 = (undefined4 *)F_00406b90(0x28,0,0);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(puVar3,param_2,param_1);
    puVar3[8] = ((code *)REFP(0x6d58f0));
    puVar3[5] = param_2;
    *puVar3 = (*(undefined * PTR32 (*)[2])REFP(0x10b91b4))
    ;
    puVar3[6] = this;
    puVar3[9] = 0;
  }
  *(undefined4 * PTR32 *)((int)this + param_1 * 4 + 0x110) = puVar3;
  iVar4 = 0;
  if (0 < param_2) {
    do {
      F_00cb4540(*(undefined * PTR32 *)((int)this + param_1 * 4 + 0x110),iVar4,
                   *(undefined4 *)(param_3 + iVar4 * 4));
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_2);
  }
  piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 0x118);
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1,*(undefined4 *)((int)this + param_1 * 4 + 0x110));
  return uVar2;
}

/* ref: Client::Game::Event::QuestEventHandler::vf51 */
uint F_006d5b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6d5b30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  code * pcVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined3 extraout_var = 0;
  uint uVar6;
  uint uVar7;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  ((code *)*(gen_code32 *)(*(int *)this + 0x1c8))(this);
  ((code *)*(gen_code32 *)(*(int *)this + 0x1f8))(this);
  uVar4 = F_00a679e0(&REFG(undefined, 0x14ac288));
  iVar2 = REFG(int, 0x1379694);
  if (uVar4 == 1) {
    *(undefined4 *)&REFG(undefined, 0x14afd2c) = 1;
  }
  REFG(undefined4, 0x14b0ee0) = 1;
  if (*(char *)(param_1 + 0x41) == '\0') {
    uVar4 = *(uint *)(param_1 + 0x4c);
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x44);
  }
  uVar5 = *(int *)(param_1 + 0x4c) - uVar4;
  uVar6 = param_2 - param_3;
  uVar7 = param_3;
  if ((*(byte *)(param_1 + 0x14) & 1) == 0) {
    if (*(char *)(param_1 + 0x58) == '\0') {
      uVar4 = uVar5 + uVar4;
      uVar7 = param_3 + uVar6;
    }
    else {
      if (uVar5 <= uVar4) {
        uVar5 = uVar4;
      }
      uVar4 = uVar5;
      uVar7 = param_3;
      if (param_3 < uVar6) {
        uVar7 = uVar6;
      }
    }
  }
  if ((uVar7 < uVar4) && (uVar4 = 0, REFG(int, 0x1379694) != 0)) {
    (*(byte *)(gen_frame + 0xb)) = 0;
    (*(byte *)(gen_frame + 0xa)) = 0;
    bVar3 = F_006c0260(this,REFG(int, 0x1379694),param_4);
    uVar4 = CONCAT31(extraout_var,bVar3);
    if (bVar3 == 0) {
      uVar4 = F_006d0d30(this,iVar2,param_4,&(*(byte *)(gen_frame + 0xb)),&(*(byte *)(gen_frame + 0xa)));
      if (uVar7 < (*(byte *)(gen_frame + 0xa))) {
        uVar4 = *(uint *)(param_1 + 0x54);
        if (((*(byte *)(param_1 + 0x14) & 1) != 0) && (uVar4 < 1000000)) {
          uVar4 = uVar4 + 1000000;
        }
        (*(uint *)(gen_frame + 0x10)) = (uint)(*(byte *)(gen_frame + 0xa));
        (*(uint *)(gen_frame + 0x14)) = uVar4;
        pcVar1 = *(gen_code32 *)(*(int *)this + 0x74);
        (*(uint *)(gen_frame + 0xc)) = (uint)(*(byte *)(gen_frame + 0xb));
        uVar4 = (*pcVar1)(this,param_4,&(*(uint *)(gen_frame + 0xc)),3);
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar4;
}

/* ref: FUN_006d5c50 */
uint F_006d5c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6d5c50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 uVar1;
  int * piVar2;
  uint * puVar3;
  undefined4 * puVar4;
  uint uVar5;
  uint * puVar6;
  int iVar7;
  
  puVar6 = *(uint * PTR32 *)(*param_1 + 4);
  *(undefined4 *)((int)this + 0x108) = 0;
  *(char *)((int)this + 0x1bf1) = (char)puVar6[0x2a];
  *(uint *)((int)this + 0x1bf4) = puVar6[1];
  F_0042e430((undefined *)((int)this + 0x10c),(*puVar6 & 0xffffff) + (int)puVar6);
  param_1 = (int *)0x0;
  puVar3 = (uint *)((int)this + 0x1dc);
  puVar6 = puVar6 + 3;
  do {
    if (puVar6[-1] == 0) break;
    puVar3[-0x1f] = puVar6[-1];
    *(int *)((int)this + 0x108) = *(int *)((int)this + 0x108) + 1;
    if (*puVar6 == 0) break;
    *puVar3 = *puVar6;
    *(int *)((int)this + 0x108) = *(int *)((int)this + 0x108) + 1;
    if (puVar6[1] == 0) break;
    puVar3[0x1f] = puVar6[1];
    *(int *)((int)this + 0x108) = *(int *)((int)this + 0x108) + 1;
    if (puVar6[2] == 0) break;
    puVar3[0x3e] = puVar6[2];
    *(int *)((int)this + 0x108) = *(int *)((int)this + 0x108) + 1;
    if (puVar6[3] == 0) break;
    puVar3[0x5d] = puVar6[3];
    *(int *)((int)this + 0x108) = *(int *)((int)this + 0x108) + 1;
    param_1 = (int *)((int)param_1 + 5);
    puVar6 = puVar6 + 5;
    puVar3 = puVar3 + 0x9b;
  } while ((int)param_1 < 0x28);
  puVar4 = *(undefined4 * PTR32 *)((int)this + 0x1c00);
  if (puVar4 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
    *(undefined4 *)((int)this + 0x1c00) = 0;
  }
  puVar4 = (undefined4 *)F_00406b90(0x28,0,0);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    uVar1 = *(undefined4 *)((int)this + 0x108);
    F_00cb4700(puVar4,uVar1,0);
    puVar4[8] = ((code *)REFP(0x6d0e60));
    puVar4[5] = uVar1;
    *puVar4 = (*(undefined * PTR32 (*)[2])REFP(0x10b9220));
    puVar4[6] = this;
    puVar4[9] = 0;
  }
  *(undefined4 * PTR32 *)((int)this + 0x1c04) = puVar4;
  uVar5 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x19);
  iVar7 = 0;
  *(uint *)((int)this + 0x1c0c) = uVar5;
  if (0 < *(int *)((int)this + 0x108)) {
    param_1 = (int *)((int)this + 0x160);
    do {
      uVar5 = F_00cb4540(*(undefined * PTR32 *)((int)this + 0x1c04),iVar7,*param_1);
      param_1 = param_1 + 0x1f;
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)((int)this + 0x108));
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x1c0c);
  if (piVar2 != (int *)0x0) {
    uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2,*(undefined4 *)((int)this + 0x1c04));
  }
  return uVar5;
}

/* ref: Client::Game::Event::ShopEventHandler::vf1 */
uint F_006d5df0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d5df0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * this_00;
  uint uVar2;
  
  this_00 = (undefined4 *)F_00406b90(0x28,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00,1,0);
    this_00[8] = ((code *)REFP(0x6d5c50));
    this_00[5] = 1;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b9220));
    this_00[6] = this;
    this_00[9] = 0;
  }
  *(undefined4 * PTR32 *)(this + 0x1c00) = this_00;
  uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x1a);
  *(uint *)(this + 0x1c08) = uVar2;
  uVar2 = F_00cb4540(*(undefined * PTR32 *)(this + 0x1c00),0,*(undefined4 *)(this + 8));
  piVar1 = *(int * PTR32 *)(this + 0x1c08);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1,*(undefined4 *)(this + 0x1c00));
  }
  this[0x1c] = (undefined1)((byte)this[0x1c] | 2);
  return uVar2;
}

/* ref: FUN_006d5e90 */
byte F_006d5e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6d5e90u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  
  if ((((REFG(int, 0x1488760) != 0) && (*(short *)(REFG(int, 0x1488760) + 0x54) != -1)) &&
      (*(short *)(REFG(int, 0x1488760) + 0x54) == 0x28)) &&
     ((*(int *)(REFG(int, 0x1488760) + 0x104) == param_1 &&
      (puVar1 = (undefined4 *)(REFG(int, 0x1488760) + 0x100), *(int *)(REFG(int, 0x1488760) + 0x100) == param_2))))
  {
    *(undefined4 *)(REFG(int, 0x1488760) + 0x104) = param_3;
    *puVar1 = param_4;
    return 1;
  }
  return 0;
}

/* ref: FUN_006d5ef0 */
uint F_006d5ef0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d5ef0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  if (REFG(int, 0x1488760) != 0) {
    F_0071ff70(((byte *)(gen_frame + 0x0)),param_1 * 0xa8 + 0x1538 + REFG(int, 0x1488760));
    F_0042c880(((undefined1 *)(gen_frame + 0x14)));
    (*(undefined1 *)((char *)&uVar1 + 0)) = ((byte *)(gen_frame + 0x0))[8];
    (*(undefined1 *)((char *)&uVar1 + 1)) = ((byte *)(gen_frame + 0x0))[9];
    (*(undefined1 *)((char *)&uVar1 + 2)) = ((byte *)(gen_frame + 0x0))[10];
    (*(undefined1 *)((char *)&uVar1 + 3)) = ((byte *)(gen_frame + 0x0))[0xb];
    F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
    return uVar1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac) ^ (uint)(uint)(gen_frame + 0xac));
  return 0;
}

/* ref: FUN_006d5f60 */
unsigned int F_006d5f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6d5f60u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  
  if (((((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bf9))) == '\0') && (*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) == 0x28)) &&
       (REFG(int, 0x13241b4) == 0)) && ((REFG(int, 0x13241c4) == 0 && (REFG(int, 0x13241a4) == 0)))) &&
     (pvVar2 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),(*(undefined4 *)&gen_args[2])), pvVar2 != (undefined *)0x0)) {
    pvVar2 = (undefined *)F_00a37da0(pvVar2,(*(undefined4 *)&gen_args[1]));
    uVar3 = F_0071d3a0(pvVar2);
    if (((char)uVar3 == '\0') && (uVar3 = F_00a37c50(pvVar2), uVar3 == 0)) {
      uVar3 = F_0046e5e0(pvVar2);
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x104))) = (*(undefined4 *)&gen_args[2]);
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xfc))) = uVar3;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x100))) = (*(undefined4 *)&gen_args[1]);
      uVar3 = F_00a3a8a0(pvVar2);
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x108))) = uVar3;
      iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xfc)));
      if (iVar1 < 2000000) {
        *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bec))) = 1;
        *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bf0))) = (undefined1)(*(int *)&gen_args[3]);
        (*(int *)&gen_args[3]) = iVar1;
        if (1000000 < iVar1) {
          (*(int *)&gen_args[3]) = iVar1 + -1000000;
        }
        F_006cd8f0((*(undefined * PTR32 *)&gen_args[0]),&(*(int *)&gen_args[3]),1,0);
        *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bf0))) = 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_006d6060 */
byte F_006d6060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d6060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  byte bVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0xfc) == 4) {
    uVar2 = F_00a51200(0x42,0,0,0,0);
    if ((char)uVar2 != '\0') {
      F_00a4a760(&REFG(undefined, 0x14a7360),0x1a,1);
      F_00a4a760(&REFG(undefined, 0x14a7360),0x1b,1);
      return 1;
    }
  }
  else if (*(int *)((int)this + 0xfc) == 0) {
    bVar1 = F_006c2930(param_2);
    *(byte *)((int)this + 0x108) = bVar1;
    if (bVar1 != 0) {
      bVar1 = F_006d4a90(param_1,this,param_2);
      if (bVar1 != 0) {
        F_00aaa5b0(param_2,6);
        F_00a4a760(&REFG(undefined, 0x14a7360),0x1a,1);
        F_00a4a760(&REFG(undefined, 0x14a7360),0x1b,1);
        return 1;
      }
    }
    return 0;
  }
  return 0;
}

/* ref: Client::Game::Event::GCShopEventHandler::vf1 */
uint F_006d6110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x6d6110u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined1 GVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x114) - *(int *)(this + 0x110) == 1) {
    this[0x1c] = (undefined1)((byte)this[0x1c] & 0xfd);
    GVar1 = this[0x1c];
    uVar2 = (uint)(byte)GVar1;
    if (((byte)GVar1 & 1) == 0) {
      this[0x1c] = (undefined1)((byte)GVar1 | 1);
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x23c))
                        (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return uVar2;
    }
  }
  else {
    this[0x128] = (undefined1)0x0;
    uVar2 = F_006d1aa0(this);
    this[0x1c] = (undefined1)((byte)this[0x1c] | 2);
  }
  return uVar2;
}

/* ref: Client::Game::Event::BattleLeveDirector::vf7 */
byte F_006d6150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d6150u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  undefined * pBVar2;
  
  if ((*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[2]) + 0)) != (*(undefined * PTR32 *)&gen_args[0])[0x500]) {
    return 0;
  }
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x4e8))) != 5) {
    if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x4e8))) == 9) {
      uVar1 = 0;
      pBVar2 = (*(undefined * PTR32 *)&gen_args[0]) + 0x37c;
      while (*(int *)pBVar2 != *(int *)((*(int *)&gen_args[1]) + 0x80)) {
        uVar1 = uVar1 + 1;
        pBVar2 = pBVar2 + 0x30;
        if (7 < uVar1) {
          return 0;
        }
      }
      if ((char)uVar1 != '\0') {
        return 0;
      }
    }
    return 1;
  }
  uVar1 = 0;
  pBVar2 = (*(undefined * PTR32 *)&gen_args[0]) + 0x37c;
  while (*(int *)pBVar2 != *(int *)((*(int *)&gen_args[1]) + 0x80)) {
    uVar1 = uVar1 + 1;
    pBVar2 = pBVar2 + 0x30;
    if (7 < uVar1) {
      return 0;
    }
  }
  if (((byte)uVar1 < 8) && (uVar1 = F_006d31a0((*(undefined * PTR32 *)&gen_args[0]),uVar1), uVar1 != 0)) {
    return 1;
  }
  return 0;
}

/* ref: Client::Game::Event::BattleLeveDirector::vf122 */
uint F_006d61e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d61e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined * pBVar4;
  int * piVar5;
  uint local_c;
  uint local_8;
  
  local_8 = 0;
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(this + 0x4e8))) {
  case 2: ;
    local_c = 0;
    piVar5 = (int *)((int)param_1 + 0xc);
    param_1 = this + 0x380;
    while (local_8 < param_2) {
      iVar1 = *(int *)param_1;
      uVar2 = F_006d2e90(this,iVar1);
      if (uVar2 != 0) {
        local_8 = local_8 + 1;
        piVar5[-3] = iVar1;
        piVar5[-2] = uVar2;
        *piVar5 = *(int *)(this + 8);
        piVar5 = piVar5 + 4;
      }
      param_1 = param_1 + 0x30;
      local_c = local_c + 1;
      if (7 < local_c) {
        return local_8;
      }
    }
    break;
  case 3: ;
  case 4: ;
  case 8: ;
    break;
  case 5: ;
  case 9: ;
    if (this[0x4f8] != (undefined1)0x0) {
      *(int *)param_1 = *(int *)(this + 0x380);
      *(int *)((int)param_1 + 4) = 1;
      *(int *)((int)param_1 + 0xc) = *(int *)(this + 8);
      return 1;
    }
    break;
  case 6: ;
    if ((this[0x4f6] == (undefined1)0x1) && (uVar2 = F_006d3240(this), uVar2 != 0)) {
      iVar1 = *(int *)(this + 0x380);
      *(uint *)((int)param_1 + 4) = uVar2;
      *(int *)param_1 = iVar1;
      *(int *)((int)param_1 + 0xc) = *(int *)(this + 8);
      return 1;
    }
    break;
  case 7: ;
    if ((this[0x4f8] != (undefined1)0x0) && (uVar2 = F_006d32b0(this), 0 < (int)uVar2)) {
      iVar1 = *(int *)(this + 0x380);
      *(uint *)((int)param_1 + 4) = uVar2;
      *(int *)param_1 = iVar1;
      *(int *)((int)param_1 + 0xc) = *(int *)(this + 8);
      return 1;
    }
    break;
  case 10: ;
    param_2 = 0;
    piVar5 = (int *)((int)param_1 + 0xc);
    param_1 = this + 0x380;
    do {
      iVar1 = *(int *)param_1;
      if (0 < iVar1) {
        uVar2 = F_006d3500(this,param_2);
        uVar3 = F_006d3580(this,param_2);
        if (((0 < (int)uVar3) && (0 < (int)uVar2)) && ((int)uVar2 < (int)uVar3)) {
          local_8 = local_8 + 1;
          piVar5[-3] = iVar1;
          piVar5[-2] = uVar2;
          *piVar5 = *(int *)(this + 8);
          piVar5 = piVar5 + 4;
        }
      }
      param_1 = param_1 + 0x30;
      param_2 = param_2 + 1;
    } while (param_2 < 8);
    return local_8;
  case 0xb: ;
    uVar2 = F_006d3860(this);
    if (0 < (int)uVar2) {
      uVar3 = 0;
      pBVar4 = this + 0x380;
      while (*(int *)pBVar4 < 1) {
        uVar3 = uVar3 + 1;
        pBVar4 = pBVar4 + 0x30;
        if (7 < uVar3) {
          return 0;
        }
      }
      *(int *)param_1 = *(int *)pBVar4;
      *(uint *)((int)param_1 + 4) = uVar2;
      *(int *)((int)param_1 + 0xc) = *(int *)(this + 8);
      local_8 = 1;
    }
    break;
  default: ;
    goto switchD_006d6202_default;
  }
switchD_006d6202_default: ;
  return local_8;
}

/* ref: Client::Game::Event::GatheringLeveDirector::vf122 */
uint F_006d6410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d6410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 GVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  uint local_8;
  
  uVar2 = 0;
  local_8 = 0;
  puVar4 = (undefined4 *)(param_1 + 0xc);
  do {
    switch((unsigned int)(uintptr_t)(uVar2)) {
    case 0: ;
      GVar1 = this[0x1de];
      break;
    case 1: ;
      GVar1 = this[0x1df];
      break;
    case 2: ;
      GVar1 = this[0x1e0];
      break;
    case 3: ;
      GVar1 = this[0x1e1];
      break;
    case 4: ;
      GVar1 = this[0x1e2];
      break;
    case 5: ;
      GVar1 = this[0x1e3];
      break;
    case 6: ;
      GVar1 = this[0x1e4];
      break;
    case 7: ;
      GVar1 = this[0x1e5];
      break;
    default: ;
      goto switchD_006d642b_default;
    }
    if (GVar1 != (undefined1)0x0) {
      if ((byte)uVar2 < 4) {
        uVar3 = *((undefined4 *)GEN_TOP((this + (uVar2 & 0xff) * 4 + 0x360)));
      }
      else if ((byte)uVar2 < 8) {
        uVar3 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x3d4) + (uVar2 - 4 & 0xff) * 4)));
      }
      else {
        uVar3 = 0;
      }
      local_8 = local_8 + 1;
      puVar4[-3] = uVar3;
      puVar4[-2] = (uint)(byte)GVar1;
      *puVar4 = *(undefined4 *)(this + 8);
      puVar4 = puVar4 + 4;
    }
switchD_006d642b_default: ;
    uVar2 = uVar2 + 1;
    if (7 < uVar2) {
      return local_8;
    }
  } while( true );
}

/* ref: Client::Game::Event::GatheringLeveDirector::vf29 */
uint F_006d64f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6d64f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (((char)param_1 == '\0') && ((char)param_3 == '\x04')) {
    F_00a6e080(&REFG(undefined, 0x14a9e40),0x46,0,0);
    F_006d3ad0(this);
  }
  uVar1 = F_006d25b0((undefined *)this,param_1,param_2,param_3);
  return uVar1;
}

/* ref: Client::Game::Event::GatheringLeveDirector::vf155 */
uint F_006d6540(unsigned int gen_a0)
{
  GEN_ENTER(0x6d6540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_0042a990(this + 0x16c);
  F_00a024d0(*(undefined * PTR32 *)(this + 0xf8),"OnSynchronize",uVar1,uVar2);
  uVar1 = F_006d3ad0(this);
  REFG(undefined4, 0x14a458f) = 1;
  return uVar1;
}

/* ref: FUN_006d6580 */
uint F_006d6580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13)
{
  GEN_ENTER(0x6d6580u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[14];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  gen_args[9] = gen_a9;
  gen_args[10] = gen_a10;
  gen_args[11] = gen_a11;
  gen_args[12] = gen_a12;
  gen_args[13] = gen_a13;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  short sVar1;
  float fVar2;
  ushort uVar3;
  double dVar4;
  byte bVar5;
  ushort uVar6;
  short sVar7;
  uint * puVar8;
  uint uVar9;
  float * pfVar10;
  ushort * puVar11;
  int iVar12;
  int * piVar13;
  undefined * this;
  undefined3 extraout_var = 0;
  uint * puVar14;
  float fVar15;
  uint uVar16;
  uint uVar17;
  uint * puVar18;
  uint uVar19;
  bool bVar20;
  float10 fVar21;
  float10 fVar22;
  undefined4 uVar23;
  
  puVar8 = (uint *)F_00ab3330((*(uint *)&gen_args[0]) & 0xffff);
  (*(uint * PTR32 *)(gen_frame + 0x1c)) = puVar8;
  if (puVar8 == (uint *)0x0) {
    return 0;
  }
  sVar1 = *(short *)((int)puVar8 + 0x4a);
  bVar20 = sVar1 == 2;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 3)) = bVar20;
  (*(uint *)(gen_frame + 0x28)) = CONCAT13(bVar20,(undefined3)(*(uint *)(gen_frame + 0x28)));
  (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
  if (((bVar20) && ((char)(*(undefined4 *)&gen_args[11]) != '\0')) && (bVar5 = F_006c40f0((*(undefined4 *)&gen_args[11])), bVar5 != 0)) {
    (*(float *)(gen_frame + 0x14)) = gen_bits2f((int)(char)bVar5);
    (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF((((float10)(int)(char)bVar5 + (float10)*(double *)&REFG(undefined, 0x1088118)) /
                      (float10)*(double *)&REFG(undefined, 0x1088118))));
  }
  uVar17 = ((*(uint *)&gen_args[1]) & 0xffff) + ((*(uint *)&gen_args[0]) & 0xffff);
  uVar19 = 0;
  uVar6 = F_006d4240((*(int *)&gen_args[6]),(*(undefined4 *)&gen_args[7]),(*(undefined4 *)&gen_args[8]),puVar8[10],(*(uint *)&gen_args[4]),(*(undefined4 *)&gen_args[13]));
  (*(float *)(gen_frame + 0x14)) = gen_bits2f((uint)uVar6);
  uVar9 = F_00ab3300(0x48);
  puVar18 = (*(uint * PTR32 *)&gen_args[5]);
  fVar2 = *(float *)(uVar9 + 4);
  puVar14 = puVar8 + 0x14;
  (*(float *)(gen_frame + 0x24)) = fVar2;
  if ((ushort)(*(undefined4 *)&gen_args[2]) < (ushort)*puVar14) {
    puVar14 = &(*(undefined4 *)&gen_args[2]);
  }
  uVar6 = (ushort)*puVar14;
  fVar15 = gen_bits2f(((uint)gen_fl2bits((*(float *)(gen_frame + 0x14))) & 0xffff) + (uint)uVar6);
  (*(float *)(gen_frame + 0x10)) = 1.4013e-45;
  (*(float *)(gen_frame + 0x20)) = fVar15;
  pfVar10 = &(*(float *)(gen_frame + 0x20));
  if ((int)gen_fl2bits(fVar2) <= (int)gen_fl2bits(fVar15)) {
    pfVar10 = &(*(float *)(gen_frame + 0x24));
  }
  if ((int)gen_fl2bits(*pfVar10) < 2) {
    pfVar10 = &(*(float *)(gen_frame + 0x10));
  }
  (*(float *)(gen_frame + 0x24)) = gen_bits2f((uint)*(ushort *)pfVar10);
  uVar3 = (ushort)puVar8[6];
  if (uVar3 != 0) {
    if ((char)(*(undefined4 *)&gen_args[9]) != '\0') {
      uVar3 = uVar3 >> 1;
    }
    *(*(uint * PTR32 *)&gen_args[5]) = (uint)uVar3;
    (*(uint * PTR32 *)&gen_args[5])[7] = 0;
    if ((char)(*(uint *)&gen_args[12]) != '\0') {
      dVar4 = ((double)GEN_TOD((((*(uint *)&gen_args[12]) & 0xff) * (uint)uVar3))) * *(double *)&REFG(undefined, 0x10b9638);
      fVar21 = F_00c4ed10((uint)(ulonglong)gen_d2bits(dVar4),
                            (int)((ulonglong)gen_d2bits(dVar4) >> 0x20));
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 2)) = ((undefined2)0x27f);
      (*(uint *)(gen_frame + 0x28)) = CONCAT22(((undefined2)0x27f),(undefined2)(*(uint *)(gen_frame + 0x28)));
      (*(float *)(gen_frame + 0x10)) = gen_bits2f(((undefined2)0x27f) | 0xc00);
      (*(uint *)(gen_frame + 0x8)) = (uint)(longlong)TRUNC(fVar21);
      puVar18[7] = puVar18[7] + (*(uint *)(gen_frame + 0x8));
    }
    goto LAB_006d67f7;
  }
  if ((*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 3)) == '\0') {
    (*(uint *)(gen_frame + 0xc)) = (uint)uVar6;
    fVar21 = F_006c41b0((*(uint *)(gen_frame + 0xc)),GEN_TOF(gen_bits2f(puVar8[2])));
    (*(float *)(gen_frame + 0x20)) = (float)fVar21;
    fVar21 = F_006c41b0((uint)gen_fl2bits((*(float *)(gen_frame + 0x24))),GEN_TOF(gen_bits2f(puVar8[2])));
    (*(float *)(gen_frame + 0x24)) = (float)fVar21;
    if ((char)(*(undefined4 *)&gen_args[9]) != '\0') {
      (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x20)) * (float10)REFG(double, 0x1088108));
      fVar21 = (float10)REFG(double, 0x1088108) * (float10)(float)fVar21;
      goto LAB_006d676c;
    }
  }
  else {
    (*(float *)(gen_frame + 0x20)) = gen_bits2f(puVar8[2]);
    puVar11 = (ushort *)F_00ab2fc0((uint)uVar6);
    uVar6 = *puVar11;
    (*(float *)(gen_frame + 0x10)) = gen_bits2f((uint)uVar6);
    (*(float *)(gen_frame + 0x20)) = (float)((float10)uVar6 * (float10)(*(float *)(gen_frame + 0x20)));
    (*(float *)(gen_frame + 0x10)) = gen_bits2f(puVar8[2]);
    puVar11 = (ushort *)F_00ab2fc0((uint)gen_fl2bits((*(float *)(gen_frame + 0x24))) & 0xffff);
    fVar21 = (float10)(*(float *)(gen_frame + 0x10));
    uVar6 = *puVar11;
    (*(float *)(gen_frame + 0x10)) = gen_bits2f((uint)uVar6);
    fVar2 = (float)((float10)uVar6 * fVar21);
    (*(float *)(gen_frame + 0x10)) = fVar2;
    fVar21 = (float10)fVar2 * (float10)(*(float *)(gen_frame + 0x18));
LAB_006d676c: ;
    (*(float *)(gen_frame + 0x24)) = (float)fVar21;
  }
  dVar4 = (double)(*(float *)(gen_frame + 0x20));
  if ((double)(*(float *)(gen_frame + 0x24)) < dVar4) {
    (*(float *)(gen_frame + 0x24)) = (*(float *)(gen_frame + 0x20));
  }
  fVar21 = F_00c4ed10((uint)(ulonglong)gen_d2bits(dVar4),
                        (int)((ulonglong)gen_d2bits(dVar4) >> 0x20));
  puVar18 = (*(uint * PTR32 *)&gen_args[5]);
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 2)) = ((undefined2)0x27f);
  (*(uint *)(gen_frame + 0x28)) = CONCAT22(((undefined2)0x27f),(undefined2)(*(uint *)(gen_frame + 0x28)));
  (*(uint *)(gen_frame + 0x8)) = (uint)(longlong)TRUNC((float10)(float)fVar21);
  *(*(uint * PTR32 *)&gen_args[5]) = (*(uint *)(gen_frame + 0x8));
  dVar4 = (double)((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x24)) - (float10)(*(float *)(gen_frame + 0x20))) - (float10)REFG(double, 0x1091858))));
  fVar21 = F_00c4ed10((uint)(ulonglong)gen_d2bits(dVar4),
                        (int)((ulonglong)gen_d2bits(dVar4) >> 0x20));
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 2)) = ((undefined2)0x27f);
  (*(uint *)(gen_frame + 0x28)) = CONCAT22(((undefined2)0x27f),(undefined2)(*(uint *)(gen_frame + 0x28)));
  (*(uint *)(gen_frame + 0x8)) = (uint)(longlong)TRUNC((float10)(float)fVar21);
  puVar18[7] = (*(uint *)(gen_frame + 0x8));
LAB_006d67f7: ;
  *(undefined1 *)((int)puVar18 + 0x13) = (undefined1)(*(uint *)&gen_args[10]);
  if (sVar1 != 3) {
    uVar9 = (*(uint * PTR32 *)(gen_frame + 0x1c))[0x14];
    (*(float *)(gen_frame + 0x10)) = gen_bits2f((uint)(ushort)uVar9);
    (*(uint *)(gen_frame + 0x28)) = (uint)(ushort)uVar9 + (int)gen_fl2bits((*(float *)(gen_frame + 0x14))) & 0xffff;
    uVar9 = F_00ab3300(0x18);
    uVar17 = uVar17 * 0x800 ^ uVar17;
    uVar16 = 100 - *(ushort *)(uVar9 + 4);
    uVar19 = uVar17 >> 8 ^ uVar17;
    iVar12 = ((int)(short)(*(ushort *)(uVar9 + 4) + 0x65) - (int)(short)uVar16) * (uVar19 & 0xffff);
    (*(uint *)(gen_frame + 0xc)) = ((int)(iVar12 + (iVar12 >> 0x1f & 0xffffU)) >> 0x10) + (uVar16 & 0xffff) & 0xffff;
    uVar9 = (*(uint * PTR32 *)(gen_frame + 0x1c))[3];
    uVar17 = 0;
    (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(uint *)(gen_frame + 0xc)) / (float10)*(double *)&REFG(undefined, 0x1088118));
    if (uVar9 == 0) {
      uVar9 = F_00ab3300(0x16);
      fVar21 = (float10)((float)GEN_TOF(((float10)*(int *)(uVar9 + 4) * (float10)*(double *)&REFG(undefined, 0x10928e8))));
      (*(uint *)(gen_frame + 0xc)) = (uint)gen_fl2bits((*(float *)(gen_frame + 0x10))) & 0xffff;
      fVar22 = (float10)(*(uint *)(gen_frame + 0xc));
      (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0x28)) & 0xffff;
      fVar2 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x20)) * (fVar22 * fVar21))));
      (*(float *)(gen_frame + 0x24)) = fVar2;
      fVar15 = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x20)) * ((float10)(*(uint *)(gen_frame + 0xc)) * fVar21)) * (float10)(*(float *)(gen_frame + 0x18)))));
      (*(float *)(gen_frame + 0x20)) = fVar15;
      dVar4 = (double)fVar2;
      if ((double)fVar15 < dVar4) {
        (*(float *)(gen_frame + 0x20)) = fVar2;
      }
      fVar21 = F_00c4ed10((uint)(ulonglong)gen_d2bits(dVar4),
                            (int)((ulonglong)gen_d2bits(dVar4) >> 0x20));
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 2)) = ((undefined2)0x27f);
      (*(uint *)(gen_frame + 0x28)) = CONCAT22(((undefined2)0x27f),(undefined2)(*(uint *)(gen_frame + 0x28)));
      (*(uint *)(gen_frame + 0x8)) = (uint)(longlong)TRUNC((float10)(float)fVar21);
      puVar18[1] = (*(uint *)(gen_frame + 0x8));
      fVar21 = F_00c4ed10((uint)(ulonglong)
                                  gen_d2bits((double)(float)((float10)(*(float *)(gen_frame + 0x20)) - (float10)(*(float *)(gen_frame + 0x24)))),
                            (int)((ulonglong)
                                  gen_d2bits((double)(float)((float10)(*(float *)(gen_frame + 0x20)) - (float10)(*(float *)(gen_frame + 0x24))))
                                 >> 0x20));
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 2)) = ((undefined2)0x27f);
      (*(uint *)(gen_frame + 0x28)) = CONCAT22(((undefined2)0x27f),(undefined2)(*(uint *)(gen_frame + 0x28)));
      (*(uint *)(gen_frame + 0x8)) = (uint)(longlong)TRUNC((float10)(float)fVar21);
      puVar18[8] = (*(uint *)(gen_frame + 0x8));
    }
    else {
      fVar21 = (float10)(int)uVar9;
      if ((int)uVar9 < 0) {
        fVar21 = fVar21 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      dVar4 = (double)((float)GEN_TOF((fVar21 * (float10)(float)((float10)(*(uint *)(gen_frame + 0xc)) /
                                                       (float10)*(double *)&REFG(undefined, 0x1088118)))));
      fVar21 = F_00c4ed10((uint)(ulonglong)gen_d2bits(dVar4),
                            (int)((ulonglong)gen_d2bits(dVar4) >> 0x20));
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 2)) = ((undefined2)0x27f);
      (*(uint *)(gen_frame + 0x28)) = CONCAT22(((undefined2)0x27f),(undefined2)(*(uint *)(gen_frame + 0x28)));
      (*(uint *)(gen_frame + 0x8)) = (uint)(longlong)TRUNC((float10)(float)fVar21);
      puVar18[1] = (*(uint *)(gen_frame + 0x8));
      puVar18[8] = 0;
      if ((char)(*(uint *)&gen_args[12]) != '\0') {
        iVar12 = ((*(uint *)&gen_args[12]) & 0xff) * (*(uint *)(gen_frame + 0x8));
        dVar4 = (double)iVar12;
        if (iVar12 < 0) {
          dVar4 = dVar4 + *(double *)&REFG(double, 0x10b8de8);
        }
        fVar21 = F_00c4ed10((uint)(ulonglong)gen_d2bits(dVar4 * *(double *)&REFG(undefined, 0x10b9638)),
                              (int)((ulonglong)gen_d2bits(dVar4 * *(double *)&REFG(undefined, 0x10b9638)) >> 0x20)
                             );
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 2)) = ((undefined2)0x27f);
        (*(uint *)(gen_frame + 0x28)) = CONCAT22(((undefined2)0x27f),(undefined2)(*(uint *)(gen_frame + 0x28)));
        (*(uint *)(gen_frame + 0x8)) = (uint)(longlong)TRUNC(fVar21);
        puVar18[8] = puVar18[8] + (*(uint *)(gen_frame + 0x8));
      }
    }
  }
  puVar18[2] = 0;
  *(undefined2 *)(puVar18 + 3) = 0;
  *(undefined1 *)((int)puVar18 + 0x12) = 0;
  uVar9 = F_00ab34b0((*(uint * PTR32 *)(gen_frame + 0x1c))[4]);
  uVar17 = uVar17 << 0xb ^ uVar17;
  uVar17 = (uVar19 >> 0xb ^ uVar17) >> 8 ^ uVar19 ^ uVar17;
  uVar19 = 0;
  iVar12 = 0;
  do {
    uVar19 = uVar19 + *(byte *)(uVar9 + 0x20 + iVar12);
    if (uVar17 % 100 < uVar19) {
      iVar12 = *(int *)(uVar9 + iVar12 * 4);
      if (iVar12 != 0) {
        piVar13 = (int *)F_00ab34e0(iVar12);
        uVar6 = (ushort)(0 < *piVar13);
        if (0 < piVar13[1]) {
          uVar6 = uVar6 + 1;
        }
        if (0 < piVar13[2]) {
          uVar6 = uVar6 + 1;
        }
        if (0 < piVar13[3]) {
          uVar6 = uVar6 + 1;
        }
        if (0 < piVar13[4]) {
          uVar6 = uVar6 + 1;
        }
        if (0 < piVar13[5]) {
          uVar6 = uVar6 + 1;
        }
        if (0 < piVar13[6]) {
          uVar6 = uVar6 + 1;
        }
        if (0 < piVar13[7]) {
          uVar6 = uVar6 + 1;
        }
        if (uVar6 != 0) {
          uVar17 = uVar17 ^ uVar17 >> 0x13;
          iVar12 = (int)((uVar17 & 0xffff) * (int)(short)uVar6) >> 0x10;
          puVar18[2] = piVar13[iVar12];
          *(undefined2 *)(puVar18 + 3) = *(undefined2 *)((int)piVar13 + iVar12 * 2 + 0x20);
          *(undefined1 *)((int)puVar18 + 0x12) = *(undefined1 *)(iVar12 + 0x30 + (int)piVar13);
        }
      }
      break;
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 < 8);
  puVar8 = (*(uint * PTR32 *)(gen_frame + 0x1c));
  sVar7 = 0;
  uVar6 = 0;
  if ((char)(*(undefined4 *)&gen_args[3]) != '\0') {
    if ((*(uint * PTR32 *)(gen_frame + 0x1c))[0xc] == 0) {
      sVar7 = (short)((uVar17 >> 0x13 ^ uVar17 & 0xffff) % 3) + 1;
    }
    else {
      sVar7 = (short)(*(uint * PTR32 *)(gen_frame + 0x1c))[0xc];
    }
    uVar6 = ((ushort)(*(uint * PTR32 *)(gen_frame + 0x1c))[0x14] >> 2) + 1;
  }
  *(short *)((int)puVar18 + 0xe) = sVar7;
  fVar21 = F_00c4ed10((uint)(ulonglong)
                              gen_d2bits((double)(float)((float10)uVar6 * (float10)(*(float *)(gen_frame + 0x18)))),
                        (int)((ulonglong)
                              gen_d2bits((double)(float)((float10)uVar6 * (float10)(*(float *)(gen_frame + 0x18)))) >>
                             0x20));
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 2)) = ((undefined2)0x27f);
  (*(uint *)(gen_frame + 0x28)) = CONCAT22(((undefined2)0x27f),(undefined2)(*(uint *)(gen_frame + 0x28)));
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 0)) = (short)(int)TRUNC(fVar21);
  *(short *)(puVar18 + 4) = (short)(*(uint *)(gen_frame + 0xc));
  if (sVar1 == 3) {
    uVar9 = (*(uint *)&gen_args[4]) & 0xff;
    if (uVar9 == 1) {
      puVar18[5] = 0x14;
    }
    else if (uVar9 == 2) {
      puVar18[5] = 0x15;
    }
    else if (uVar9 == 3) {
      puVar18[5] = 0x16;
    }
    else {
      puVar18[5] = 0;
    }
    if (puVar18[5] != 0) {
      uVar9 = puVar8[0x14];
      uVar17 = F_00ab3300(0x17);
      fVar21 = (float10)((float)GEN_TOF(((float10)*(int *)(uVar17 + 4) * (float10)*(double *)&REFG(undefined, 0x10928e8))));
      fVar2 = (float)((float10)(ushort)uVar9 * fVar21);
      (*(float *)(gen_frame + 0x18)) = fVar2;
      fVar15 = ((float)GEN_TOF(((float10)((uint)(ushort)uVar9 + (int)gen_fl2bits((*(float *)(gen_frame + 0x14))) & 0xffff) * fVar21
                      )));
      (*(float *)(gen_frame + 0x14)) = fVar15;
      dVar4 = (double)fVar2;
      if ((double)fVar15 < dVar4) {
        (*(float *)(gen_frame + 0x14)) = fVar2;
      }
      fVar21 = F_00c4ed10((uint)(ulonglong)gen_d2bits(dVar4),
                            (int)((ulonglong)gen_d2bits(dVar4) >> 0x20));
      (*(uint *)(gen_frame + 0x8)) = (uint)(longlong)TRUNC((float10)(float)fVar21);
      puVar18[6] = (*(uint *)(gen_frame + 0x8));
      fVar21 = F_00c4ed10((uint)(ulonglong)
                                  gen_d2bits((double)(float)((float10)(*(float *)(gen_frame + 0x14)) - (float10)(*(float *)(gen_frame + 0x18))))
                            ,(int)((ulonglong)
                                   gen_d2bits((double)(float)((float10)(*(float *)(gen_frame + 0x14)) - (float10)(*(float *)(gen_frame + 0x18)))
                                             ) >> 0x20));
      (*(uint *)(gen_frame + 0x8)) = (uint)(longlong)TRUNC((float10)(float)fVar21);
      puVar18[0xc] = (*(uint *)(gen_frame + 0x8));
    }
  }
  (*(float *)(gen_frame + 0x18)) = 0.0;
  if ((char)(*(undefined4 *)&gen_args[3]) != '\0') {
    iVar12 = (*(int *)&gen_args[6]);
    if ((char)(*(undefined4 *)&gen_args[7]) != '\0') {
      iVar12 = (*(int *)&gen_args[6]) + 1;
    }
    if ((char)(*(undefined4 *)&gen_args[8]) != '\0') {
      iVar12 = iVar12 + 1;
    }
    if (iVar12 != 0) {
      iVar12 = (uint)(ushort)puVar18[4] * iVar12;
      fVar21 = (float10)iVar12;
      if (iVar12 < 0) {
        fVar21 = fVar21 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      fVar21 = F_00c4ed10((uint)(ulonglong)
                                  gen_d2bits((double)(float)(fVar21 * (float10)REFG(double, 0x1094800))),
                            (int)((ulonglong)
                                  gen_d2bits((double)(float)(fVar21 * (float10)REFG(double, 0x1094800))) >>
                                 0x20));
      (*(float *)(gen_frame + 0x18)) = gen_bits2f((int)TRUNC(fVar21) & 0xffff);
    }
    if ((char)(*(uint *)&gen_args[12]) != '\0') {
      dVar4 = ((double)GEN_TOD((((*(uint *)&gen_args[12]) & 0xff) * (uint)(ushort)puVar18[4]))) * *(double *)&REFG(undefined, 0x10b9638);
      fVar21 = F_00c4ed10((uint)(ulonglong)gen_d2bits(dVar4),
                            (int)((ulonglong)gen_d2bits(dVar4) >> 0x20));
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 0)) = (short)(int)TRUNC(fVar21);
      sVar1 = (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x18)) + 0)) + (short)(*(uint *)(gen_frame + 0xc));
      (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x18)) + 0)) = sVar1;
      (*(float *)(gen_frame + 0x18)) = gen_bits2f(CONCAT22((*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x18)) + 2)),sVar1));
    }
  }
  uVar9 = (*(uint *)&gen_args[10]);
  *(short *)((int)puVar18 + 0x2a) = (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x18)) + 0));
  if (((*(uint *)&gen_args[10]) != 0) &&
     (((uVar17 = F_00ab21d0((uint)*(byte *)((int)puVar8 + 0x55)), uVar17 == 0 || (0x1c < uVar9))
      || (*(char *)(uVar17 + 4 + uVar9) == '\0')))) {
    *puVar18 = 0;
    puVar18[7] = 0;
  }
  piVar13 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  F_0042aca0(puVar18 + 0x27);
  F_0042aca0(puVar18 + 0xe);
  uVar9 = F_00ab3390((uint)*(byte *)((int)puVar8 + 0x56));
  uVar9 = *(uint *)(uVar9 + 4);
  uVar19 = F_00ab3390((uint)*(byte *)((int)puVar8 + 0x57));
  uVar17 = puVar8[0xe];
  (*(float *)(gen_frame + 0x10)) = *(float *)(uVar19 + 4);
  uVar17 = F_00ab32a0(uVar17);
  uVar17 = *(uint *)(uVar17 + 4);
  uVar19 = puVar8[0x14];
  *(ushort *)(puVar18 + 0xd) = (ushort)uVar19;
  uVar19 = (uint)(ushort)uVar19;
  uVar23 = 0x23;
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar13 + 0x18))(piVar13)));
  uVar19 = F_00461bb0(this,uVar23,uVar19);
  F_0042e430(puVar18 + 0xe,uVar19);
  F_0042e430(puVar18 + 0x27,(*puVar8 & 0xffffff) + (int)puVar8);
  puVar18[0x23] = uVar17;
  uVar17 = puVar8[0x11];
  puVar18[0x26] = (uint)gen_fl2bits((*(float *)(gen_frame + 0x10)));
  puVar18[0x24] = uVar17;
  puVar18[0x25] = uVar9;
  bVar5 = F_0042b6a0(&REFG(undefined, 0x1489e08),&REFG(undefined, 0x10b3a7a));
  if (bVar5 != 0) {
    F_00ab0230(0x18f58,&REFG(undefined, 0x1489e08));
  }
  bVar5 = F_0042b6a0(&REFG(undefined, 0x1489e60),&REFG(undefined, 0x10b3a7b));
  uVar9 = CONCAT31(extraout_var,bVar5);
  if (bVar5 != 0) {
    uVar9 = F_00ab9240(0x18f5f,1,&REFG(undefined, 0x1489e60));
  }
  return uVar9;
}

/* ref: FUN_006d6e70 */
uint F_006d6e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d6e70u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  if ((*(int *)&gen_args[1]) == 0) {
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x308))) = 0;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30c))) = 0;
    return 0;
  }
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x308))) = (*(int *)&gen_args[1]);
  uVar1 = F_006cd980((*(undefined * PTR32 *)&gen_args[0]),&(*(int *)&gen_args[1]),1,0);
  return uVar1;
}

/* ref: FUN_006d6eb0 */
uint F_006d6eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x6d6eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  int * piVar1;
  undefined * in_EAX = 0;
  uint uVar2;
  int * piVar3;
  
  piVar3 = *(int * PTR32 *)((int)this + 0x88);
  if (piVar3 != *(int * PTR32 *)((int)this + 0x8c)) {
    do {
      piVar1 = (int *)*piVar3;
      if (piVar1 != (int *)0x0) {
        in_EAX = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x254))(piVar1)));
        if (in_EAX != (undefined *)0x0) {
          uVar2 = F_00ba1550(in_EAX,param_1,param_2,param_3,param_4,param_5,param_6);
          return uVar2;
        }
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != *(int * PTR32 *)((int)this + 0x8c));
  }
  return (uint)in_EAX;
}

/* ref: FUN_006d6f00 */
uint F_006d6f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d6f00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint in_EAX = 0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x88);
  if (puVar1 != *(undefined4 * PTR32 *)((int)this + 0x8c)) {
    do {
      if (*(int *)((int)*puVar1 + 8) == param_1) {
        in_EAX = F_00b8b430((undefined *)*puVar1,param_2);
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined4 * PTR32 *)((int)this + 0x8c));
  }
  return in_EAX;
}

/* ref: FUN_006d6f50 */
uint F_006d6f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d6f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  int iVar2;
  uint in_EAX = 0;
  uint uVar3;
  int * piVar4;
  
  piVar4 = *(int * PTR32 *)((int)this + 0x88);
  if (piVar4 == *(int * PTR32 *)((int)this + 0x8c)) {
    return in_EAX;
  }
  do {
    iVar2 = *piVar4;
    if (iVar2 != 0) {
      uVar1 = *((ushort *)GEN_TOP((*(int *)(iVar2 + 0x1d4) + 2)));
      in_EAX = (uint)uVar1;
      if (((uVar1 == 0x8001) || (uVar1 == 0x8002)) || (uVar1 == 0x8007)) {
        uVar3 = (uint)CONCAT11((char)(uVar1 >> 8),(char)param_1);
        if (*(char *)(iVar2 + 0x322) == (char)param_1) {
          return uVar3;
        }
        *(char *)(iVar2 + 0x322) = (char)param_1;
        F_00a69750(&REFG(undefined4, 0x14b119c));
        return uVar3;
      }
    }
    piVar4 = piVar4 + 1;
    if (piVar4 == *(int * PTR32 *)((int)this + 0x8c)) {
      return in_EAX;
    }
  } while( true );
}

/* ref: FUN_006d6fd0 */
uint F_006d6fd0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d6fd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short sVar1;
  uint uVar2;
  uint * puVar3;
  
  puVar3 = *(uint * PTR32 *)((int)this + 0x88);
  do {
    if (puVar3 == *(uint * PTR32 *)((int)this + 0x8c)) {
      return 0;
    }
    uVar2 = *puVar3;
    if (uVar2 != 0) {
      sVar1 = *((short *)GEN_TOP((*(int *)(uVar2 + 0x1d4) + 2)));
      if (sVar1 == -0x7fff) {
        return uVar2;
      }
      if (sVar1 == -0x7ffe) {
        return uVar2;
      }
      if (sVar1 == -0x7ff9) {
        return uVar2;
      }
    }
    puVar3 = puVar3 + 1;
  } while( true );
}

/* ref: FUN_006d7020 */
uint F_006d7020(unsigned int gen_a0)
{
  GEN_ENTER(0x6d7020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint * puVar2;
  
  puVar2 = *(uint * PTR32 *)((int)this + 0x88);
  while( true ) {
    if (puVar2 == *(uint * PTR32 *)((int)this + 0x8c)) {
      return 0;
    }
    uVar1 = *puVar2;
    if ((uVar1 != 0) && (*((short *)GEN_TOP((*(int *)(uVar1 + 0x1d4) + 2))) == -0x7ffd)) break;
    puVar2 = puVar2 + 1;
  }
  return uVar1;
}

/* ref: FUN_006d7060 */
uint F_006d7060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d7060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  puVar2 = *(uint * PTR32 *)((int)this + 0x88);
  while( true ) {
    if (puVar2 == *(uint * PTR32 *)((int)this + 0x8c)) {
      return 0;
    }
    uVar1 = *puVar2;
    if ((uVar1 != 0) && (**(uint * PTR32 *)(uVar1 + 0x1d4) == ((ushort)param_1 | 0x801a0000))) break;
    puVar2 = puVar2 + 1;
  }
  return uVar1;
}

/* ref: FUN_006d70a0 */
byte F_006d70a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d70a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  
  if (REFG(int, 0x1379694) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(REFG(int, 0x1379694) + 0xe4);
  *param_2 = 0;
  piVar4 = *(int * PTR32 *)((int)this + 0x88);
  if (piVar4 != *(int * PTR32 *)((int)this + 0x8c)) {
    do {
      piVar2 = (int *)*piVar4;
      if ((piVar2 != (int *)0x0) &&
         ((uVar1 == *(uint *)piVar2[0x75] || (*(uint *)piVar2[0x75] >> 0x10 == 0x801a)))) {
        uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
        if ((char)uVar3 == '\0') {
          return 0;
        }
        uVar3 = *param_2;
        if (uVar3 < 5) {
          uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x1e8))(piVar2,uVar3 * 0x10 + param_1,5 - uVar3);
          *param_2 = *param_2 + uVar3;
        }
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != *(int * PTR32 *)((int)this + 0x8c));
  }
  return 1;
}

/* ref: FUN_006d7160 */
byte F_006d7160(unsigned int gen_a0)
{
  GEN_ENTER(0x6d7160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  
  for (piVar1 = *(int * PTR32 *)((int)this + 0x88); piVar1 != *(int * PTR32 *)((int)this + 0x8c);
      piVar1 = piVar1 + 1) {
    iVar2 = *piVar1;
    if ((iVar2 != 0) && (*((short *)GEN_TOP((*(int *)(iVar2 + 0x1d4) + 2))) == -0x7ffd)) goto LAB_006d7195;
  }
  iVar2 = 0;
LAB_006d7195: ;
  return iVar2 != 0;
}

/* ref: FUN_006d71a0 */
uint F_006d71a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d71a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  short * psVar1;
  
  if ((short)param_1 != 0) {
    for (psVar1 = *(short * PTR32 *)((int)this + 0x7ac); psVar1 != *(short * PTR32 *)((int)this + 0x7b0);
        psVar1 = psVar1 + 8) {
      if (*psVar1 == (short)param_1) {
        return (uint)psVar1;
      }
    }
  }
  return 0;
}

/* ref: FUN_006d71e0 */
byte F_006d71e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d71e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  short * psVar1;
  
  psVar1 = *(short * PTR32 *)(in_ecx + 0x7ac);
  while( true ) {
    if (psVar1 == *(short * PTR32 *)(in_ecx + 0x7b0)) {
      return 1;
    }
    if ((*psVar1 != 0) && ((char)psVar1[6] == '\0')) break;
    psVar1 = psVar1 + 8;
  }
  return 0;
}

/* ref: FUN_006d7210 */
uint F_006d7210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d7210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x160];
  undefined4 * puVar1;
  undefined1 * puVar2;
  int * piVar3;
  uint uVar4;
  byte bVar5;
  code * pcVar6;
  uint uVar7;
  undefined4 * puVar8;
  bool bVar9;
  
  (*(uint *)(gen_frame + 0x158)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x15c);
  puVar2 = F_00c48350(((char *)(gen_frame + 0x0)),0,0x158);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x30);
  for (puVar8 = *(undefined4 * PTR32 *)((int)this + 0x2c); puVar8 != puVar1; puVar8 = puVar8 + 0x22) {
    puVar2 = (undefined1 *)puVar8[5];
    if ((puVar2 == &REFG(undefined, 0x4)) || (puVar2 == &REFG(undefined, 0x5))) {
      piVar3 = (int *)F_00ae0db0(&REFG(undefined, 0x14c0920),puVar8[3]);
LAB_006d72a9: ;
      puVar2 = (undefined1 *)0x0;
      if (piVar3 != (int *)0x0) {
        if (puVar8[5] == 7) {
          ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,1,0);
        }
        puVar2 = (undefined1 *)(uint)*(ushort *)(piVar3 + 0x22);
        ((char *)(gen_frame + 0x0))[(int)((int)puVar2)] = '\x01';
      }
    }
    else if (((puVar2 == (undefined1 *)0x2) || (puVar2 == (undefined1 *)0x3)) ||
            (puVar2 == (undefined1 *)0x1)) {
      puVar2 = (undefined1 *)*puVar8;
      if (puVar2 != (undefined1 *)0xe0000000) {
        piVar3 = (int *)F_00a354d0(&REFG(undefined4, 0x14a31f0),puVar2,puVar8[1]);
        goto LAB_006d72a9;
      }
    }
    else if (puVar2 == (undefined1 *)0x7) {
      piVar3 = (int *)F_00b79f80(&REFG(undefined, 0x14c5798),puVar8[4]);
      goto LAB_006d72a9;
    }
  }
  if ((param_1 & 0x3fc) != 0) {
    uVar7 = 0;
    do {
      if ((((((char *)(gen_frame + 0x0))[(int)(uVar7)] == '\0') && ((uVar7 < 200 || (0xf3 < uVar7)))) && (uVar7 < 0x158)) &&
         (piVar3 = ((int *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[uVar7])), piVar3 != (int *)0x0)) {
        uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
        bVar5 = (byte)param_1;
        if (uVar4 == 1) {
          if ((*(byte *)((int)piVar3 + 0x2dd2) & 0x10) == 0) {
            bVar9 = (bVar5 & 0x20) == 0x20;
          }
          else {
            bVar9 = (bVar5 & 0x40) == 0x40;
          }
LAB_006d734c: ;
          if (bVar9) goto LAB_006d7353;
LAB_006d73d0: ;
          pcVar6 = *(gen_code32 *)(*piVar3 + 0x24);
        }
        else {
          if (uVar4 == 2) {
            bVar9 = (bVar5 & 0x10) == 0x10;
            goto LAB_006d734c;
          }
          if (uVar4 == 3) {
            bVar9 = (bVar5 & 4) == 4;
            goto LAB_006d734c;
          }
          if (uVar4 == 4) {
            bVar9 = (param_1 & 0x200) == 0x200;
            goto LAB_006d734c;
          }
          if (uVar4 == 5) {
            bVar9 = (param_1 & 0x100) == 0x100;
            goto LAB_006d734c;
          }
          if (uVar4 == 6) {
            bVar9 = (bVar5 & 0x80) == 0x80;
            goto LAB_006d734c;
          }
          if (uVar4 == 7) {
            bVar9 = (bVar5 & 8) == 8;
            goto LAB_006d734c;
          }
          if ((uVar4 != 0xb) && (uVar4 != 9)) goto LAB_006d73d0;
LAB_006d7353: ;
          pcVar6 = *(gen_code32 *)(*piVar3 + 0x28);
        }
        puVar2 = ((undefined1 *)GEN_TOP((*pcVar6)(piVar3,1,0)));
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 0x158);
  }
  F_00c47745((*(uint *)(gen_frame + 0x158)) ^ (uint)(uint)(gen_frame + 0x15c));
  return (uint)puVar2;
}

/* ref: FUN_006d7400 */
uint F_006d7400(unsigned int gen_a0)
{
  GEN_ENTER(0x6d7400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x2c);
  while( true ) {
    if (piVar1 == *(int * PTR32 *)((int)this + 0x30)) {
      return 0;
    }
    if (piVar1[5] == 2) break;
    piVar1 = piVar1 + 0x22;
  }
  if (*piVar1 == -0x20000000) {
    return 0;
  }
  uVar2 = F_00a354d0(&REFG(undefined4, 0x14a31f0),*piVar1,piVar1[1]);
  return uVar2;
}

/* ref: FUN_006d7440 */
byte F_006d7440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0x6d7440u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float fVar3;
  float * pfVar4;
  int * piVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  piVar5 = *(int * PTR32 *)(param_1 + 0x3c);
  (*(int *)(gen_frame + 0x18)) = param_1;
  while( true ) {
    if (piVar5 == *(int * PTR32 *)(param_1 + 0x40)) {
      return 0;
    }
    if (*piVar5 == param_3) break;
    piVar5 = piVar5 + 5;
  }
  pfVar4 = (float *)F_00a5feb0(param_2);
  fVar1 = gen_bits2f(piVar5[1]);
  (*(float *)(gen_frame + 0x0)) = fVar1;
  fVar2 = gen_bits2f(piVar5[2]);
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar3 = gen_bits2f(piVar5[3]);
  (*(float *)(gen_frame + 0x8)) = fVar3;
  (*(float *)(gen_frame + 0x1c)) = *pfVar4;
  fVar6 = (float10)*pfVar4;
  (*(float *)(gen_frame + 0x1c)) = pfVar4[1];
  fVar7 = (float10)pfVar4[1];
  (*(float *)(gen_frame + 0x1c)) = pfVar4[2];
  fVar8 = (float10)pfVar4[2];
  fVar9 = (float10)param_5;
  fVar1 = ((float)GEN_TOF((fVar9 * (float10)(float)((float10)fVar1 - fVar6))));
  (*(float *)(gen_frame + 0x0)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)(float)((float10)fVar2 - fVar7) * fVar9)));
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar3 = ((float)GEN_TOF((fVar9 * (float10)(float)((float10)fVar3 - fVar8))));
  (*(float *)(gen_frame + 0x8)) = fVar3;
  (*(float *)(gen_frame + 0x0)) = (float)((float10)fVar1 + fVar6);
  (*(float *)(gen_frame + 0x4)) = (float)(fVar7 + (float10)fVar2);
  (*(float *)(gen_frame + 0x8)) = (float)(fVar8 + (float10)fVar3);
  F_006c5980(param_2,&(*(float *)(gen_frame + 0x0)),param_4);
  return 1;
}

/* ref: FUN_006d75f0 */
uint F_006d75f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d75f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x3c);
  while( true ) {
    if (piVar1 == *(int * PTR32 *)((int)this + 0x40)) {
      return 0;
    }
    if (*piVar1 == param_1) break;
    piVar1 = piVar1 + 5;
  }
  return (uint)piVar1;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf68 */
uint F_006d7620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d7620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float * pfVar5;
  undefined * this_00;
  uint * puVar6;
  float10 fVar7;
  
  (*(uint *)(gen_frame + 0xcc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd0);
  F_00a02210(((undefined1 *)(gen_frame + 0x0)),param_1);
  uVar4 = F_00b9c9b0((*(undefined4 *)(gen_frame + 0x8)),2);
  puVar6 = *((uint * PTR32 *)GEN_TOP((*(int *)(this + 4) + 0x3c)));
  do {
    if (puVar6 == *((uint * PTR32 *)GEN_TOP((*(int *)(this + 4) + 0x40)))) {
LAB_006d77ef: ;
      F_00a02240(((undefined1 *)(gen_frame + 0x0)));
      F_00c47745((*(uint *)(gen_frame + 0xcc)) ^ (uint)(uint)(gen_frame + 0xd0));
      return 0;
    }
    if (*puVar6 == uVar4) {
      fVar1 = gen_bits2f(puVar6[3]);
      fVar2 = gen_bits2f(puVar6[1]);
      (*(float *)(gen_frame + 0x64)) = gen_bits2f(puVar6[2]);
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(undefined4 *)(gen_frame + 0x34)) = 0;
      (*(float *)(gen_frame + 0x60)) = fVar2;
      (*(float *)(gen_frame + 0x68)) = fVar1;
      (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x10b9308);
      fVar1 = gen_bits2f(puVar6[4]);
      (*(float *)(gen_frame + 0x78)) = fVar1;
      fVar7 = ((float10)GEN_TOD(fsin((float10)fVar1)));
      fVar2 = (float)fVar7;
      (*(float *)(gen_frame + 0x7c)) = fVar2;
      (*(float *)(gen_frame + 0x74)) = fVar2;
      fVar7 = ((float10)GEN_TOD(fcos((float10)fVar1)));
      fVar1 = (float)fVar7;
      (*(float *)(gen_frame + 0x7c)) = fVar1;
      ((float *)(gen_frame + 0x80))[0] = fVar1;
      ((float *)(gen_frame + 0x80))[2] = ((float)GEN_TOF(-(float10)fVar2));
      ((float *)(gen_frame + 0x80))[1] = 0.0;
      (*(float *)(gen_frame + 0xa0)) = fVar2;
      (*(undefined4 *)(gen_frame + 0x90)) = 0;
      (*(undefined4 *)(gen_frame + 0x94)) = REFG(float, 0x1087f04);
      (*(float *)(gen_frame + 0xa8)) = fVar1;
      (*(undefined4 *)(gen_frame + 0x98)) = 0;
      (*(undefined4 *)(gen_frame + 0xa4)) = 0;
      (*(undefined4 *)(gen_frame + 0xb0)) = 0;
      (*(undefined4 *)(gen_frame + 0xb4)) = 0;
      (*(undefined4 *)(gen_frame + 0xb8)) = 0;
      pfVar5 = (float *)F_004ee670(&(*(float *)(gen_frame + 0x50)),(uint)&(*(undefined4 *)(gen_frame + 0x30)),(uint)((float *)(gen_frame + 0x80)));
      (*(float *)(gen_frame + 0x40)) = *pfVar5;
      fVar1 = pfVar5[1];
      (*(float *)(gen_frame + 0x44)) = fVar1;
      fVar2 = pfVar5[2];
      (*(float *)(gen_frame + 0x48)) = fVar2;
      fVar3 = (float)((float10)*pfVar5 + (float10)(*(float *)(gen_frame + 0x60)));
      (*(float *)(gen_frame + 0x50)) = fVar3;
      fVar1 = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x64)));
      (*(float *)(gen_frame + 0x54)) = fVar1;
      fVar2 = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x68)));
      (*(float *)(gen_frame + 0x58)) = fVar2;
      (*(float *)(gen_frame + 0x20)) = fVar3;
      (*(float *)(gen_frame + 0x24)) = fVar1;
      (*(float *)(gen_frame + 0x28)) = fVar2;
      if (REFG(int, 0x1375bbc) != 1) {
        F_00b70d10(&REFG(undefined4, 0x1375b90),1);
      }
      if (REFG(int, 0x1375bbc) == -1) {
        this_00 = (undefined *)0x0;
      }
      else {
        this_00 = ((undefined *)GEN_TOP((&REFG(undefined4, 0x1375b90))[REFG(int, 0x1375bbc)]));
      }
      F_00b718e0(this_00,&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x60)));
      goto LAB_006d77ef;
    }
    puVar6 = puVar6 + 5;
  } while( true );
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf121 */
uint F_006d7810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d7810u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  float10 fVar5;
  
  F_00a02210(((byte *)(gen_frame + 0x8)),param_2);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  uVar1 = *(undefined4 *)(*piVar3 + 0x60);
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2);
  uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),3);
  (*(uint *)(gen_frame + 0x28)) = uVar4;
  param_2 = REFG(float, 0x1087f04);
  uVar4 = F_00a019d0(((byte *)(gen_frame + 0x8)));
  if (3 < (int)uVar4) {
    fVar5 = F_00a01dd0(((byte *)(gen_frame + 0x8)),4);
    param_2 = (uint)gen_fl2bits((float)fVar5);
    if ((float10)1 < ((float10)GEN_TOD(gen_bits2f(param_2)))) {
      param_2 = REFG(float, 0x1087f04);
    }
    else if (!GEN_ISNAN(gen_bits2f(param_2)) && !(0.0 < gen_bits2f(param_2))) goto LAB_006d78bf;
  }
  F_006d7440(*(undefined4 *)(param_1 + 4),uVar1,uVar2,(*(uint *)(gen_frame + 0x28)),GEN_TOF(gen_bits2f(param_2)));
LAB_006d78bf: ;
  F_00a02240(((byte *)(gen_frame + 0x8)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf128 */
uint F_006d78e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d78e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  float * pfVar6;
  float10 fVar7;
  
  (*(uint *)(gen_frame + 0xec)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xf0);
  (*(undefined * PTR32 *)(gen_frame + 0x5c)) = this;
  F_00a02210(((undefined1 *)(gen_frame + 0x0)),param_1);
  uVar4 = F_00a01d20(((undefined1 *)(gen_frame + 0x0)),1);
  piVar5 = (int *)F_00b9c710((*(undefined4 *)(gen_frame + 0x8)),1,uVar4);
  piVar5 = *(int * PTR32 *)(*piVar5 + 0x60);
  fVar7 = F_00a01dd0(((undefined1 *)(gen_frame + 0x0)),2);
  (*(float *)(gen_frame + 0x9c)) = ((float)GEN_TOF(-fVar7));
  fVar7 = F_00a01dd0(((undefined1 *)(gen_frame + 0x0)),3);
  (*(float *)(gen_frame + 0x7c)) = (float)fVar7;
  uVar4 = F_00b9c9b0((*(undefined4 *)(gen_frame + 0x8)),4);
  (*(uint *)(gen_frame + 0x58)) = uVar4;
  fVar1 = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x9c)) * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                 (float10)*(double *)&REFG(undefined, 0x1080220))));
  (*(float *)(gen_frame + 0x9c)) = fVar1;
  (*(float *)(gen_frame + 0x9c)) = (float)((float10)fVar1 + ((float10)GEN_TOD(gen_bits2f(piVar5[0x2c]))));
  pfVar6 = (float *)F_00a5feb0(piVar5);
  (*(float *)(gen_frame + 0x60)) = *pfVar6;
  (*(float *)(gen_frame + 0x64)) = pfVar6[1];
  (*(float *)(gen_frame + 0x38)) = (*(float *)(gen_frame + 0x7c));
  (*(float *)(gen_frame + 0x68)) = pfVar6[2];
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  fVar7 = ((float10)GEN_TOD(fsin((float10)(*(float *)(gen_frame + 0x9c)))));
  fVar1 = (float)fVar7;
  (*(float *)(gen_frame + 0x98)) = fVar1;
  (*(float *)(gen_frame + 0x94)) = fVar1;
  fVar7 = ((float10)GEN_TOD(fcos((float10)(*(float *)(gen_frame + 0x9c)))));
  fVar2 = (float)fVar7;
  (*(float *)(gen_frame + 0x98)) = fVar2;
  ((float *)(gen_frame + 0xa0))[1] = 0.0;
  ((float *)(gen_frame + 0xa0))[0] = fVar2;
  (*(undefined4 *)(gen_frame + 0xb0)) = 0;
  (*(undefined4 *)(gen_frame + 0xb4)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0xb8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc4)) = 0;
  ((float *)(gen_frame + 0xa0))[2] = ((float)GEN_TOF(-(float10)fVar1));
  (*(undefined4 *)(gen_frame + 0xd0)) = 0;
  (*(undefined4 *)(gen_frame + 0xd4)) = 0;
  (*(float *)(gen_frame + 0xc0)) = fVar1;
  (*(undefined4 *)(gen_frame + 0xd8)) = 0;
  (*(float *)(gen_frame + 0xc8)) = fVar2;
  pfVar6 = (float *)F_004ee670(((float *)(gen_frame + 0x40)),(uint)&(*(undefined4 *)(gen_frame + 0x30)),(uint)((float *)(gen_frame + 0xa0)));
  fVar1 = *pfVar6;
  (*(float *)(gen_frame + 0x80)) = fVar1;
  (*(float *)(gen_frame + 0x88)) = pfVar6[2];
  (*(float *)(gen_frame + 0x20)) = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x60)));
  (*(float *)(gen_frame + 0x28)) = (float)((float10)pfVar6[2] + (float10)(*(float *)(gen_frame + 0x68)));
  uVar4 = F_006ca070(&(*(float *)(gen_frame + 0x60)),(*(float *)(gen_frame + 0x9c)),0,(*(float *)(gen_frame + 0x7c)),((float *)(gen_frame + 0x40)));
  if ((char)uVar4 != '\0') {
    ((code *)*(gen_code32 *)(*piVar5 + 0x3c))(piVar5,((float *)(gen_frame + 0x40)));
    (*(float *)(gen_frame + 0x84)) = 0.0;
    ((float *)(gen_frame + 0x40))[0] = (float)((float10)(*(float *)(gen_frame + 0x60)) - (float10)(*(float *)(gen_frame + 0x20)));
    (*(float *)(gen_frame + 0x48)) = (float)((float10)(*(float *)(gen_frame + 0x68)) - (float10)(*(float *)(gen_frame + 0x28)));
    (*(float *)(gen_frame + 0x80)) = (float)((float10)(*(float *)(gen_frame + 0x60)) - (float10)(*(float *)(gen_frame + 0x20)));
    (*(float *)(gen_frame + 0x88)) = (float)((float10)(*(float *)(gen_frame + 0x68)) - (float10)(*(float *)(gen_frame + 0x28)));
    pfVar6 = (float *)F_004bd580(&(*(float *)(gen_frame + 0x80)));
    iVar3 = *piVar5;
    (*(float *)(gen_frame + 0x80)) = *pfVar6;
    (*(float *)(gen_frame + 0x84)) = pfVar6[1];
    (*(float *)(gen_frame + 0x88)) = pfVar6[2];
    fVar7 = F_00c4d1fa((float10)pfVar6[2]);
    (*(float *)(gen_frame + 0x94)) = (float)fVar7;
    ((code *)*(gen_code32 *)(iVar3 + 0x48))(piVar5,(undefined4)gen_fl2bits((float)fVar7));
    F_006c5980(piVar5,&(*(float *)(gen_frame + 0x60)),(*(uint *)(gen_frame + 0x58)));
  }
  F_00a02240(((undefined1 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0xec)) ^ (uint)(uint)(gen_frame + 0xf0));
  return 0;
}

/* ref: FUN_006d7b90 */
uint F_006d7b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x6d7b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  if (puVar1 != *(undefined4 * PTR32 *)((int)this + 4)) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)*puVar1 + 0x10))
                      ((int *)*puVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                       param_8);
    return uVar2;
  }
  return (uint)puVar1;
}

/* ref: Client::Game::Event::SetPositionTask::vf1 */
uint F_006d7df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d7df0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  code * pcVar4;
  byte bVar5;
  int * piVar6;
  undefined4 * puVar7;
  
  uVar3 = *(uint *)(this + 0x10);
  if (uVar3 != 0xffffffff) {
    bVar5 = F_00ae0dd0(uVar3);
    if (bVar5 != 0) {
      if (uVar3 < 0x158) {
        (*(int * PTR32 *)(gen_frame + 0x1c)) = ((int *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[uVar3]));
      }
      else {
        (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)0x0;
      }
      goto LAB_006d7e61;
    }
  }
  if (*(int *)(this + 8) == -0x20000000) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)F_00a354d0(&REFG(undefined4, 0x14a31f0),*(int *)(this + 8),*(undefined4 *)(this + 0xc));
  }
  (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar6;
LAB_006d7e61: ;
  if ((this[0x3c] == (undefined1)0x0) && ((*(int * PTR32 *)(gen_frame + 0x1c)) != (int *)0x0)) {
    if (this[0x3d] == (undefined1)0x0) {
      F_006d4f80((*(int * PTR32 *)(gen_frame + 0x1c)),this + 0x20,*(float *)(this + 0x30),*(undefined4 *)(this + 0x34),
                   *(float *)(this + 0x38));
      this[0x3c] = (undefined1)0x1;
    }
    else {
      puVar7 = (undefined4 *)F_00ab37e0(*(undefined4 *)(this + 0x14));
      if (puVar7 != (undefined4 *)0x0) {
        uVar1 = puVar7[1];
        uVar2 = puVar7[2];
        pcVar4 = *(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x1c)) + 0x3c);
        (*(undefined4 *)(gen_frame + 0x0)) = *puVar7;
        (*(undefined4 *)(gen_frame + 0x4)) = uVar1;
        (*(undefined4 *)(gen_frame + 0x8)) = uVar2;
        (*pcVar4)((*(int * PTR32 *)(gen_frame + 0x1c)),&(*(undefined4 *)(gen_frame + 0x0)));
        ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x1c)) + 0x48))(puVar7[3]);
        this[0x3c] = (undefined1)0x1;
        return 0;
      }
    }
    return 0;
  }
  return 1;
}

/* ref: Client::Game::Event::MakeRetainerTask::vf1 */
uint F_006d7f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d7f20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  undefined * this_00;
  undefined4 uVar5;
  
  iVar1 = *(int *)(this + 4);
  if (iVar1 == 0) {
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    ((code *)*(gen_code32 *)(*piVar3 + 0xa8))(piVar3,0,0x1e,1);
    *(undefined4 *)(this + 4) = 1;
  }
  else if (iVar1 == 1) {
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    if (piVar3 != (int *)0x0) {
      uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xa0))(piVar3);
      if ((uVar4 & 8) == 0) {
        *(undefined4 *)(this + 4) = 2;
        return 0;
      }
    }
  }
  else if (iVar1 == 2) {
    F_005d5550(&REFG(undefined, 0x1379c6c));
    *(undefined4 *)(this + 4) = 3;
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    if (piVar3 != (int *)0x0) {
      uVar5 = 1;
      uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3);
      this_00 = (undefined *)F_00763050(uVar4,uVar5);
      if (this_00 != (undefined *)0x0) {
        F_008f2a30(this_00,1,((code *)REFP(0x7286f0)),this,((code *)REFP(0x6bc0f0)),0);
        return 0;
      }
    }
  }
  else if (iVar1 != 3) {
    if (iVar1 == 4) {
      F_005d5560(&REFG(undefined, 0x1379c6c));
      *(undefined4 *)(this + 4) = 5;
      return 0;
    }
    if (iVar1 == 5) {
      bVar2 = F_005e1600();
      if (bVar2 != 0) {
        bVar2 = F_005d99e0();
        piVar3 = REFG(int * PTR32, 0x1379694);
        if ((bVar2 != 0) && (REFG(int * PTR32, 0x1379694) != (int *)0x0)) {
          uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 0x68))))(REFG(int * PTR32, 0x1379694));
          if ((char)uVar4 != '\0') {
            uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x70))(piVar3);
            if ((char)uVar4 != '\0') {
              piVar3 = (int *)F_006d7400(param_1);
              if (piVar3 == (int *)0x0) {
LAB_006d80b4: ;
                piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
                ((code *)*(gen_code32 *)(*piVar3 + 0xa4))(piVar3,0,0x1e,1);
                *(undefined4 *)(this + 4) = 6;
                return 0;
              }
              uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x68))(piVar3);
              if ((char)uVar4 != '\0') {
                uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x70))(piVar3);
                if ((char)uVar4 != '\0') goto LAB_006d80b4;
              }
            }
          }
        }
      }
    }
    else if (iVar1 == 6) {
      piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      if (piVar3 != (int *)0x0) {
        uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xa0))(piVar3);
        if ((uVar4 & 8) == 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf3 */
byte F_006d8130(unsigned int gen_a0)
{
  GEN_ENTER(0x6d8130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  
  if (((byte)this[0x1c] & 2) != 0) {
    return 1;
  }
  puVar2 = *(undefined4 * PTR32 *)(this + 0xe8);
  if (puVar2 != *(undefined4 * PTR32 *)(this + 0xec)) {
    do {
      uVar1 = ((code *)*(gen_code32 *)(*(int *)*puVar2 + 0xc))((int *)*puVar2);
      if ((char)uVar1 != '\0') {
        return 1;
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != *(undefined4 * PTR32 *)(this + 0xec));
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf114 */
unsigned int F_006d8180(unsigned int gen_a0)
{
  GEN_ENTER(0x6d8180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  piVar4 = ((int *)GEN_TOP(**(int * PTR32 *)(this + 0x10)));
  if (piVar4 != *(int * PTR32 *)(this + 0x10)) {
    do {
      *(byte *)(piVar4[3] + 0x8f) = *(byte *)(piVar4[3] + 0x8f) | 4;
      if (*(char *)((int)piVar4 + 0x11) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x11);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x11);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x11);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x11);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != *(int * PTR32 *)(this + 0x10));
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf120 */
uint F_006d81e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d81e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  
  piVar4 = *(int * PTR32 *)(this + 0x10);
  piVar5 = (int *)*piVar4;
  if (piVar5 != piVar4) {
    do {
      piVar4 = (int *)piVar5[3];
      *(byte *)((int)piVar4 + 0x8f) = *(byte *)((int)piVar4 + 0x8f) | 8;
      if (*(char *)((int)piVar5 + 0x11) == '\0') {
        piVar2 = (int *)piVar5[2];
        if (*(char *)((int)piVar2 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x11);
          piVar4 = (int *)*piVar2;
          while (piVar5 = piVar2, cVar1 == '\0') {
            cVar1 = *(char *)(*piVar4 + 0x11);
            piVar2 = piVar4;
            piVar4 = (int *)*piVar4;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x11);
          piVar3 = (int *)piVar5[1];
          piVar2 = piVar5;
          while ((piVar4 = piVar3, piVar5 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar4[2])))
          {
            cVar1 = *(char *)(piVar4[1] + 0x11);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar5 != *(int * PTR32 *)(this + 0x10));
  }
  return (uint)piVar4;
}

/* ref: Client::Game::Event::EventHandler::vf121 */
uint F_006d8240(unsigned int gen_a0)
{
  GEN_ENTER(0x6d8240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  
  piVar4 = *(int * PTR32 *)(this + 0x10);
  piVar5 = (int *)*piVar4;
  if (piVar5 != piVar4) {
    do {
      piVar4 = (int *)F_00a5f290((undefined *)piVar5[3]);
      if ((piVar4 != (int *)0x0) && (*(char *)((int)piVar4 + 0x8a) == '\x03')) {
        *(byte *)(piVar4 + 0xb75) = *(byte *)(piVar4 + 0xb75) | 0x40;
      }
      if (*(char *)((int)piVar5 + 0x11) == '\0') {
        piVar2 = (int *)piVar5[2];
        if (*(char *)((int)piVar2 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x11);
          piVar4 = (int *)*piVar2;
          while (piVar5 = piVar2, cVar1 == '\0') {
            cVar1 = *(char *)(*piVar4 + 0x11);
            piVar2 = piVar4;
            piVar4 = (int *)*piVar4;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x11);
          piVar3 = (int *)piVar5[1];
          piVar2 = piVar5;
          while ((piVar4 = piVar3, piVar5 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar4[2])))
          {
            cVar1 = *(char *)(piVar4[1] + 0x11);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar5 != *(int * PTR32 *)(this + 0x10));
  }
  return (uint)piVar4;
}

/* ref: Client::Game::Event::EventHandler::vf126 */
unsigned int F_006d82c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d82c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  piVar4 = ((int *)GEN_TOP(**(int * PTR32 *)(this + 0x10)));
  if (piVar4 != *(int * PTR32 *)(this + 0x10)) {
    do {
      *(byte *)(piVar4[3] + 0x8f) = *(byte *)(piVar4[3] + 0x8f) | 0x20;
      if (*(char *)((int)piVar4 + 0x11) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x11);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x11);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x11);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x11);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != *(int * PTR32 *)(this + 0x10));
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf2 */
byte F_006d8320(unsigned int gen_a0)
{
  GEN_ENTER(0x6d8320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  
  if (((byte)this[0x1c] & 1) == 0) {
    return 0;
  }
  puVar2 = *(undefined4 * PTR32 *)(this + 0xe8);
  if (puVar2 != *(undefined4 * PTR32 *)(this + 0xec)) {
    do {
      uVar1 = ((code *)*(gen_code32 *)(*(int *)*puVar2 + 8))((int *)*puVar2);
      if ((char)uVar1 == '\0') {
        return 0;
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != *(undefined4 * PTR32 *)(this + 0xec));
  }
  return 1;
}

/* ref: FUN_006d8360 */
uint F_006d8360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d8360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  
  puVar2 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x10)));
  iVar5 = 0;
  while( true ) {
    if (puVar2 == *(undefined4 * PTR32 *)((int)this + 0x10)) {
      return 0;
    }
    if (iVar5 == param_1) break;
    iVar5 = iVar5 + 1;
    if (*(char *)((int)puVar2 + 0x11) == '\0') {
      puVar3 = (undefined4 *)puVar2[2];
      if (*(char *)((int)puVar3 + 0x11) == '\0') {
        cVar1 = *(char *)((int)*puVar3 + 0x11);
        puVar2 = puVar3;
        puVar3 = (undefined4 *)*puVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar3 + 0x11);
          puVar2 = puVar3;
          puVar3 = (undefined4 *)*puVar3;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar2[1] + 0x11);
        puVar4 = (undefined4 *)puVar2[1];
        puVar3 = puVar2;
        while ((puVar2 = puVar4, cVar1 == '\0' && (puVar3 == (undefined4 *)puVar2[2]))) {
          cVar1 = *(char *)((int)puVar2[1] + 0x11);
          puVar4 = (undefined4 *)puVar2[1];
          puVar3 = puVar2;
        }
      }
    }
  }
  return puVar2[3];
}

/* ref: Client::Game::Event::ArrayEventHandler::vf2 */
byte F_006d83d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d83d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined * pAVar4;
  
  if (((byte)this[0x1c] & 1) == 0) {
    return 0;
  }
  puVar3 = *(undefined4 * PTR32 *)(this + 0xe8);
  if (puVar3 != *(undefined4 * PTR32 *)(this + 0xec)) {
    do {
      uVar1 = ((code *)*(gen_code32 *)(*(int *)*puVar3 + 8))((int *)*puVar3);
      if ((char)uVar1 == '\0') {
        return 0;
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 != *(undefined4 * PTR32 *)(this + 0xec));
  }
  uVar1 = 0;
  pAVar4 = this + 0xf8;
  while ((*(int *)pAVar4 == 0 ||
         (uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar4 + 8))))(*(int * PTR32 *)pAVar4), (char)uVar2 != '\0'))) {
    uVar1 = uVar1 + 1;
    pAVar4 = pAVar4 + 4;
    if (0xf < uVar1) {
      return 1;
    }
  }
  return 0;
}

/* ref: Client::Game::Event::ArrayEventHandler::vf3 */
byte F_006d8440(unsigned int gen_a0)
{
  GEN_ENTER(0x6d8440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  undefined * pAVar3;
  uint uVar4;
  
  bVar1 = F_006d8130((undefined *)this);
  if (bVar1 != 0) {
    return 1;
  }
  uVar4 = 0;
  pAVar3 = this + 0xf8;
  do {
    if (*(int *)pAVar3 != 0) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar3 + 0xc))))(*(int * PTR32 *)pAVar3);
      if ((char)uVar2 != '\0') {
        return 1;
      }
    }
    uVar4 = uVar4 + 1;
    pAVar3 = pAVar3 + 4;
  } while (uVar4 < 0x10);
  return 0;
}

/* ref: FUN_006d8490 */
byte F_006d8490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d8490u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  
  if (((*(int *)&gen_args[1]) == REFG(int, 0x1379694)) && ((REFG(undefined1, 0x14b4ec0) & 0x20) != 0)) {
    if ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x265))) == '\0') &&
       ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x266))) == '\0' && (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x267))) == '\0')))) {
LAB_006d84ee: ;
      uVar1 = *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x25c)));
      uVar3 = F_00a4ffd0();
      bVar2 = F_006d5600((uint)uVar1,uVar3);
      return bVar2;
    }
    (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),REFG(char, 0x14ab29a));
    if (REFG(char, 0x14ab29a) != '\0') {
      bVar2 = F_00a68920(&REFG(undefined1, 0x14ab070),(*(int *)&gen_args[1]));
      if (*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x264))) <= bVar2) goto LAB_006d84ee;
    }
  }
  return 0;
}

/* ref: FUN_006d8510 */
uint F_006d8510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6d8510u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  short * psVar3;
  undefined4 * puVar4;
  
  psVar3 = *(short * PTR32 *)((int)this + 0x534);
  if ((psVar3 == (short *)0x0) || (*psVar3 != (short)param_3)) {
    iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x538) + param_1 * 0x10)));
    iVar2 = param_2 * 0x14;
    puVar4 = *(undefined4 * PTR32 *)(iVar1 + iVar2);
    if (puVar4 != *(undefined4 * PTR32 *)(iVar1 + 4 + iVar2)) {
      do {
        for (psVar3 = (short *)*puVar4; psVar3 != (short *)puVar4[1]; psVar3 = psVar3 + 0x5c) {
          if (*psVar3 == (short)param_3) {
            *(short * PTR32 *)((int)this + 0x534) = psVar3;
            return (uint)psVar3;
          }
        }
        puVar4 = puVar4 + 4;
      } while (puVar4 != *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x538) + param_1 * 0x10))) + 4 + iVar2))));
    }
    psVar3 = (short *)0x0;
  }
  return (uint)psVar3;
}

/* ref: FUN_006d85b0 */
uint F_006d85b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6d85b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined4 * puVar3;
  undefined4 uVar4;
  
  puVar3 = *(undefined4 * PTR32 *)(*param_1 + 4);
  *(undefined4 *)((int)this + 600) = *puVar3;
  *(undefined4 *)((int)this + 0x25c) = puVar3[1];
  *(undefined4 *)((int)this + 0x260) = puVar3[2];
  *(undefined4 *)((int)this + 0x264) = puVar3[3];
  if (((*(char *)((int)this + 0x265) == '\0') && (*(char *)((int)this + 0x266) == '\0')) &&
     (*(char *)((int)this + 0x267) == '\0')) {
    uVar4 = 0x24d;
  }
  else {
    uVar4 = 0x243;
  }
  uVar2 = F_00ab0230(uVar4,(int)this + 0x1d4);
  puVar3 = *(undefined4 * PTR32 *)((int)this + 0x570);
  if (puVar3 != (undefined4 *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
    *(undefined4 *)((int)this + 0x570) = 0;
  }
  *(undefined4 *)((int)this + 0x56c) = 0;
  if ((*(byte *)((int)this + 0x1c) & 1) != 0) {
    puVar3 = *(undefined4 * PTR32 *)((int)this + 0xe8);
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 0xec)) {
      return uVar2;
    }
    while (uVar2 = ((code *)*(gen_code32 *)(*(int *)*puVar3 + 8))((int *)*puVar3), (char)uVar2 != '\0') {
      puVar3 = puVar3 + 1;
      if (puVar3 == *(undefined4 * PTR32 *)((int)this + 0xec)) {
        return uVar2;
      }
    }
  }
  F_00735ca0(this,this);
  *(byte *)((int)this + 0x1c) = *(byte *)((int)this + 0x1c) & 0xfd;
  bVar1 = *(byte *)((int)this + 0x1c);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if ((bVar1 & 1) == 0) {
    *(byte *)((int)this + 0x1c) = bVar1 | 1;
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x23c))(this);
  }
  return uVar2;
}

/* ref: FUN_006d86b0 */
uint F_006d86b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d86b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * this_00;
  
  uVar1 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x9c);
  *(uint *)((int)this + 0x56c) = uVar1;
  this_00 = (undefined4 *)F_00406b90(0x20,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_00cb4700(this_00,1,0);
    this_00[5] = 1;
    *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b9198));
    this_00[6] = this;
    this_00[7] = ((code *)REFP(0x6d85b0));
  }
  *(undefined4 * PTR32 *)((int)this + 0x570) = this_00;
  F_00cb4540(this_00,0,*(undefined4 *)((int)this + 8));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x56c) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0x56c),*(undefined4 *)((int)this + 0x570));
  return uVar1;
}

/* ref: FUN_006d8740 */
uint F_006d8740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d8740u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  ushort * puVar7;
  
  uVar5 = F_00a4ffd0();
  (*(uint *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x0)), 1, 3),REFG(undefined1, 0x14b4ec1)) & 0xffffff01;
  puVar7 = (ushort *)(uVar5 + 0x168c);
  (*(int *)(gen_frame + 0x14)) = 0x10;
  do {
    if (puVar7[-2] == (ushort)param_1) {
      uVar5 = (uint)puVar7[1];
      if ((byte)puVar7[-1] == 0xff) {
        uVar1 = *puVar7;
        uVar2 = puVar7[2];
        (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),(uVar1 & 8) != 0);
        (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),(*puVar7 & 0x40) != 0);
        uVar6 = F_00a68280(&REFG(undefined1, 0x14ab070),(uint)(byte)uVar2,0);
        (*(undefined4 *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3),(*puVar7 & 0x20) != 0);
        uVar4 = (undefined1)(*puVar7 >> 7);
        uVar3 = (*(uint *)(gen_frame + 0x18)) >> 8;
        (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) & 0xffffff00;
        (*(uint *)(gen_frame + 0x10)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x10)), 1, 3),uVar4) & 0xffffff0f;
        if (param_2 == 2) {
          (*(uint *)(gen_frame + 0x18)) = CONCAT31((int3)uVar3,uVar4) & 0xffffff07;
        }
        uVar5 = F_006d6580(param_1,uVar5,uVar6 & 0xffff,(*(uint *)(gen_frame + 0x0)),(uint)REFG(undefined1, 0x14ab29a),param_3,
                             (uint)((byte)uVar1 & 7),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(uint)(byte)uVar2,
                             (*(uint *)(gen_frame + 0x18)),0,(*(uint *)(gen_frame + 0x10)));
      }
    }
    puVar7 = puVar7 + 8;
    (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + -1;
  } while ((*(int *)(gen_frame + 0x14)) != 0);
  return uVar5;
}

/* ref: Client::Game::Event::GuildleveAssignmentEventHandler::vf130 */
uint F_006d8840(unsigned int gen_a0)
{
  GEN_ENTER(0x6d8840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  short * psVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  if ((char)uVar1 != '\0') {
    psVar2 = *(short * PTR32 *)(REFG(int, 0x1488344) + 0x7ac);
    while( true ) {
      if (psVar2 == *(short * PTR32 *)(REFG(int, 0x1488344) + 0x7b0)) {
        return 1;
      }
      if ((*psVar2 != 0) && ((char)psVar2[6] == '\0')) break;
      psVar2 = psVar2 + 8;
    }
  }
  return 0;
}

/* ref: Client::Game::Event::GatheringEventHandler::vf25 */
uint F_006d8880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6d8880u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  char cVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined1 * puVar5;
  int iVar6;
  int iVar7;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar3 = *(uint *)(param_2 + 8);
  if ((int)uVar3 < 0) {
    *((uint *)GEN_TOP((*(int *)(this + 0x10c) + 0x3b0))) = uVar3;
    ((char *)(gen_frame + 0x20))[0] = -1;
    ((char *)(gen_frame + 0x20))[1] = -1;
    ((char *)(gen_frame + 0x20))[2] = -1;
    ((char *)(gen_frame + 0x20))[3] = -1;
    ((char *)(gen_frame + 0x20))[4] = -1;
    ((char *)(gen_frame + 0x20))[5] = -1;
    ((char *)(gen_frame + 0x20))[6] = -1;
    ((char *)(gen_frame + 0x20))[7] = -1;
    uVar3 = 0;
    ((int *)(gen_frame + 0x0))[0] = 0;
    ((int *)(gen_frame + 0x0))[1] = 0;
    ((int *)(gen_frame + 0x0))[2] = 0;
    ((int *)(gen_frame + 0x0))[3] = 0;
    ((int *)(gen_frame + 0x0))[4] = 0;
    ((int *)(gen_frame + 0x0))[5] = 0;
    ((int *)(gen_frame + 0x0))[6] = 0;
    ((int *)(gen_frame + 0x0))[7] = 0;
    cVar2 = '\0';
    puVar5 = (undefined1 *)(param_2 + 0x1a);
    iVar6 = 0;
    do {
      iVar7 = *(int *)(puVar5 + -10);
      if (0 < iVar7) {
        ((int *)(gen_frame + 0x0))[(int)(iVar6)] = iVar7;
        ((char *)(gen_frame + 0x20))[(int)(iVar6)] = cVar2;
        iVar6 = iVar6 + 1;
      }
      *((int *)GEN_TOP((uVar3 + 100 + *(int *)(this + 0x10c)))) = iVar7;
      *((undefined1 *)GEN_TOP((uVar3 + 0x72 + *(int *)(this + 0x10c)))) = *puVar5;
      *((undefined1 *)GEN_TOP((uVar3 + 0x73 + *(int *)(this + 0x10c)))) = puVar5[1];
      *((undefined1 *)GEN_TOP((uVar3 + 0x74 + *(int *)(this + 0x10c)))) = puVar5[2];
      *((undefined1 *)GEN_TOP((uVar3 + 0x75 + *(int *)(this + 0x10c)))) = puVar5[3];
      cVar2 = cVar2 + '\x01';
      *((undefined1 *)GEN_TOP((uVar3 + 0x76 + *(int *)(this + 0x10c)))) = puVar5[4];
      *((undefined1 *)GEN_TOP((uVar3 + 0x77 + *(int *)(this + 0x10c)))) = puVar5[5];
      *((undefined2 *)GEN_TOP((uVar3 + 0x70 + *(int *)(this + 0x10c)))) = *(undefined2 *)(puVar5 + -6);
      *((undefined1 *)GEN_TOP((uVar3 + 0x78 + *(int *)(this + 0x10c)))) = puVar5[-1];
      uVar3 = uVar3 + 0x74;
      puVar5 = puVar5 + 0x10;
    } while (uVar3 < 0x3a0);
    **(undefined1 * PTR32 *)(this + 0x10c) = (char)(*(undefined4 *)((char *)((char *)(gen_frame + 0x20)) + 0));
    *((char *)GEN_TOP((*(int *)(this + 0x10c) + 1))) = (char)SUB41((*(undefined4 *)((char *)((char *)(gen_frame + 0x20)) + 0)),1);
    *((char *)GEN_TOP((*(int *)(this + 0x10c) + 2))) = ((char *)(gen_frame + 0x20))[2];
    *((char *)GEN_TOP((*(int *)(this + 0x10c) + 3))) = ((char *)(gen_frame + 0x20))[3];
    *((char *)GEN_TOP((*(int *)(this + 0x10c) + 4))) = (char)(*(undefined4 *)((char *)((char *)(gen_frame + 0x20)) + 4));
    *((char *)GEN_TOP((*(int *)(this + 0x10c) + 5))) = (char)SUB41((*(undefined4 *)((char *)((char *)(gen_frame + 0x20)) + 4)),1);
    *((char *)GEN_TOP((*(int *)(this + 0x10c) + 6))) = ((char *)(gen_frame + 0x20))[6];
    *((char *)GEN_TOP((*(int *)(this + 0x10c) + 7))) = ((char *)(gen_frame + 0x20))[7];
    if (*(int *)(this + 0x114) != 0) {
      piVar1 = *(int * PTR32 *)(this + 0x11c);
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)(this + 0x114));
      }
      puVar4 = *(undefined4 * PTR32 *)(this + 0x114);
      if (puVar4 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
        *(undefined4 *)(this + 0x114) = 0;
      }
    }
    if (*(int *)(this + 0x11c) == 0) {
      this[0x14a] = (undefined1)((char)this[0x14a] + '\x01');
      if (100 < (byte)this[0x14a]) {
        this[0x14a] = (undefined1)0x0;
      }
      uVar3 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0xb);
      *(uint *)(this + 0x11c) = uVar3;
    }
    puVar4 = (undefined4 *)F_00406b90(0x28,0,0);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      F_00cb4700(puVar4,iVar6,1);
      puVar4[8] = ((code *)REFP(0x6d58f0));
      puVar4[5] = iVar6;
      *puVar4 = (*(undefined * PTR32 (*)[2])REFP(0x10b91b4));
      puVar4[6] = this;
      puVar4[9] = 0;
    }
    *(undefined4 * PTR32 *)(this + 0x114) = puVar4;
    iVar7 = 0;
    if (0 < iVar6) {
      do {
        F_00cb4540(*(undefined * PTR32 *)(this + 0x114),iVar7,((int *)(gen_frame + 0x0))[(int)(iVar7)]);
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar6);
    }
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x11c) + 0x48))))
                      (*(int * PTR32 *)(this + 0x11c),*(undefined4 *)(this + 0x114));
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar3;
}

/* ref: Client::Game::Event::GatheringEventHandler::vf112 */
uint F_006d8ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d8ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  
  if (((byte)this[0x1c] & 1) != 0) {
    puVar2 = *(undefined4 * PTR32 *)(this + 0xe8);
    if (puVar2 != *(undefined4 * PTR32 *)(this + 0xec)) {
      do {
        uVar1 = ((code *)*(gen_code32 *)(*(int *)*puVar2 + 8))((int *)*puVar2);
        if ((char)uVar1 == '\0') {
          return 0;
        }
        puVar2 = puVar2 + 1;
      } while (puVar2 != *(undefined4 * PTR32 *)(this + 0xec));
    }
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
    if (((uVar1 == 6) && (param_1[0x20] == *(int *)(this + 0x138))) &&
       (this[0x146] == (undefined1)0x3)) {
      return 0xee10;
    }
  }
  return 0;
}

/* ref: FUN_006d8b60 */
uint F_006d8b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d8b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  short sVar9;
  ushort uVar10;
  char cVar11;
  byte bVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int * piVar17;
  uint uVar18;
  uint uVar19;
  
  uVar14 = F_00a4ffd0();
  cVar11 = REFG(char, 0x14ab29a);
  uVar5 = *(ushort *)((int)this + 0x2f0);
  cVar1 = *(char *)((int)this + 0x2f8);
  bVar13 = *(byte *)((int)this + 800);
  uVar19 = *(uint *)((int)this + 0x2f4);
  uVar6 = *(ushort *)((int)this + 0x2e8);
  cVar2 = *(char *)((int)this + 0x2fa);
  bVar3 = *(byte *)((int)this + 0x2f9);
  uVar15 = *(uint *)((int)this + 0x2fc);
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),REFG(char, 0x14ab29a));
  cVar4 = *(char *)((int)this + 0x2f2);
  bVar12 = F_00a68920(&REFG(undefined1, 0x14ab070),(*(undefined4 *)(gen_frame + 0x8)));
  uVar7 = *(ushort *)((int)this + 0x312);
  uVar8 = *(ushort *)((int)this + 0x314);
  sVar9 = *(short *)((int)this + 0x310);
  uVar18 = (uint)(*(ushort *)((int)this + 0x1d4) >> 3);
  (*(uint *)(gen_frame + 0x10)) = 0;
  if (((uVar18 < 200) &&
      ((*(byte *)(uVar18 + 0x12ea + uVar14) &
       (byte)(0x80 >> ((byte)*(ushort *)((int)this + 0x1d4) & 7))) != 0)) && ((bVar13 & 1) == 0)) {
    (*(uint *)(gen_frame + 0x10)) = 0x400;
  }
  if (uVar19 != 0) {
    if (cVar4 == '\x03') {
      if (uVar19 != REFG(undefined1, 0x14ab14e)) goto LAB_006d8c6f;
    }
    else if ((cVar4 != '\x04') || (uVar19 == REFG(undefined1, 0x14ab14e))) {
LAB_006d8c6f: ;
      (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) | 0x20;
    }
  }
  if ((cVar2 != '\0') && (cVar2 != *(char *)(uVar14 + 0x375))) {
    (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) | 0x10;
  }
  if ((cVar1 != '\0') || (bVar3 != 0)) {
    if ((cVar11 == '\0') || ((cVar1 != '\0' && (cVar1 != cVar11)))) {
      (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) | 0x40;
    }
    if (((bVar3 != 0) && (cVar11 != '\0')) && (bVar12 < bVar3)) {
      (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) | 0x80;
    }
  }
  if ((uVar15 != 0) && (((&REFG(undefined1, 0x14b4ec0))[uVar15 >> 3] & (byte)(1 << ((byte)uVar15 & 7))) == 0)) {
    (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) | 8;
  }
  bVar13 = F_006bff20(this,uVar14);
  uVar19 = (*(uint *)(gen_frame + 0x10));
  if (bVar13 == 0) {
    uVar19 = (*(uint *)(gen_frame + 0x10)) | 0x100;
  }
  bVar13 = F_006c0040(this,uVar14);
  if (bVar13 != 0) {
    uVar19 = uVar19 | 0x200;
  }
  bVar13 = F_006c0160(this,uVar14);
  if (bVar13 == 0) {
    uVar19 = uVar19 | 0x2000;
  }
  if (sVar9 != 0) {
    uVar15 = 0;
    do {
      if ((&REFG(undefined2, 0x1379ca0))[uVar15 * 2] == sVar9) {
        uVar10 = *(ushort *)(uVar15 * 4 + 0x1379ca2);
        if ((uVar7 <= uVar10) && (uVar10 < uVar8)) goto LAB_006d8d4f;
        break;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < 2);
    uVar19 = uVar19 | 0x10000;
  }
LAB_006d8d4f: ;
  if ((0x1c < REFG(undefined1, 0x14ab0d4)) ||
     ((*((uint *)GEN_TOP(((int)this + (uint)(REFG(undefined1, 0x14ab0d4) >> 5) * 4 + 0x2e4))) & 1 << (REFG(undefined1, 0x14ab0d4) & 0x1f)) ==
      0)) {
    uVar19 = uVar19 | 1;
  }
  uVar15 = 0;
  do {
    if (((*((uint *)GEN_TOP(((int)this + (uVar15 >> 5) * 4 + 0x2e4))) & 1 << ((byte)uVar15 & 0x1f)) != 0) &&
       (uVar18 = F_00a68280(&REFG(undefined1, 0x14ab070),uVar15,0), uVar6 <= (ushort)uVar18)) goto LAB_006d8db3;
    uVar15 = uVar15 + 1;
  } while (uVar15 < 0x1d);
  uVar19 = uVar19 | 2;
LAB_006d8db3: ;
  iVar16 = 0;
  piVar17 = (int *)((int)this + 0x2ec);
  do {
    if (*piVar17 != 0) {
      uVar15 = 0;
      goto LAB_006d8dde;
    }
    piVar17 = piVar17 + -1;
    iVar16 = iVar16 + -1;
  } while (-1 < iVar16);
LAB_006d8e14: ;
  uVar15 = 0;
  do {
    if (*(uint *)((int)&REFG(undefined4, 0x10b6d3c) + uVar15) == (*(ushort *)((int)this + 0x1d4) | 0x10000)) {
      bVar13 = F_006c05a0(uVar14,(uint)*(ushort *)((int)this + 0x1d4));
      if (bVar13 != 0) {
        uVar19 = uVar19 | 0x200;
      }
      return uVar19;
    }
    uVar15 = uVar15 + 4;
  } while (uVar15 < 0x24);
  return uVar19;
  while (uVar15 = uVar15 + 1, uVar15 < 0x1d) {
LAB_006d8dde: ;
    if (((*((uint *)GEN_TOP(((int)this + (uVar15 >> 5) * 4 + 0x2ec))) & 1 << ((byte)uVar15 & 0x1f)) != 0) &&
       (uVar18 = F_00a68280(&REFG(undefined1, 0x14ab070),uVar15,0), uVar5 <= (ushort)uVar18)) goto LAB_006d8e14;
  }
  uVar19 = uVar19 | 4;
  goto LAB_006d8e14;
}

/* ref: FUN_006d8e70 */
uint F_006d8e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x6d8e70u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  short sVar1;
  ushort uVar2;
  undefined * this_00;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  if ((*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x189))) != '\0') && (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x189))) != 'Z')) {
    return 0;
  }
  cVar3 = *(char *)((*(int *)&gen_args[6]) + 1);
  if ((cVar3 == '\n') || (cVar3 == '\v')) {
    (*(uint *)&gen_args[3]) = 5000000;
  }
  else if (cVar3 == '\x0f') {
    (*(uint *)&gen_args[3]) = 0x4c9960;
  }
  else if (((char)(*(uint *)&gen_args[2]) == '\x01') && ((*(uint *)&gen_args[3]) == 0)) {
    (*(uint *)&gen_args[3]) = 0x4c7250;
  }
  uVar4 = F_006d8b60((*(undefined * PTR32 *)&gen_args[0]),(*(int * PTR32 *)&gen_args[1]));
  sVar1 = *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d4)));
  uVar5 = F_00a4ffd0();
  iVar9 = 0;
  iVar6 = uVar5 + 0x13b4;
  do {
    if (*(short *)(iVar6 + 4) == sVar1) {
      if (-1 < iVar9) {
        cVar3 = *(char *)(iVar6 + 6);
        goto LAB_006d8f05;
      }
      break;
    }
    iVar9 = iVar9 + 1;
    iVar6 = iVar6 + 0x10;
  } while (iVar9 < 0x1e);
  cVar3 = '\0';
LAB_006d8f05: ;
  uVar5 = 0;
  if (cVar3 == -1) {
    uVar2 = *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2e8)));
    uVar7 = F_00a68280(&REFG(undefined1, 0x14ab070),(uint)REFG(undefined1, 0x14ab0d4),0);
    if ((ushort)uVar7 < uVar2) {
      uVar5 = 2;
    }
  }
  if ((*(byte *)((*(int *)&gen_args[6]) + 0x10) & 4) != 0) {
    iVar6 = (*(int * PTR32 *)&gen_args[1])[0x5d];
    if (iVar6 != 0) {
      uVar7 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]));
      if (uVar7 == 1) {
        uVar7 = F_0042a990(iVar6 + 8);
        uVar8 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c);
        (*(uint *)&gen_args[3]) = F_00a029f0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))),"IsQualified",uVar8,uVar7,(*(uint *)&gen_args[2]) & 0xff
                               ,(*(uint *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),(uint)*(byte *)((*(int *)&gen_args[6]) + 1),2);
        if ((*(uint *)&gen_args[3]) == 0) {
          this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
          (*(uint *)&gen_args[2]) = (*(uint *)&gen_args[2]) & 0xffffff;
          F_00727410(this_00,&(*(uint *)&gen_args[3]));
          F_00a01d80(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))),(int)&(*(uint *)&gen_args[2]) + 3);
          return (*(uint *)&gen_args[3]) | uVar5 | uVar4;
        }
      }
    }
  }
  return uVar5 | uVar4;
}

/* ref: FUN_006d9070 */
uint F_006d9070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d9070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)((int)this + 800);
  if ((bVar1 & 8) == 0) {
    uVar2 = F_006d8b60(this,param_1);
    if (uVar2 == 0) {
      return ((bVar1 & 1) != 0) + 1;
    }
    if ((((*(byte *)((int)this + 800) & 2) != 0) && ((uVar2 & 0x500) == 0)) && ((uVar2 & 0x70) == 0)
       ) {
      return 0xb;
    }
  }
  return 0;
}

/* ref: FUN_006d90d0 */
uint F_006d90d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x6d90d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int param_6 = (int)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  short sVar1;
  int iVar2;
  int iVar3;
  undefined * this_00;
  byte bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  iVar2 = *(int *)((int)this + 0x318);
  iVar3 = *(int *)((int)this + 0x31c);
  if ((*(byte *)(param_6 + 0x10) & 2) != 0) {
    iVar8 = param_1[0x5d];
    if (iVar8 == 0) {
      return 0;
    }
    uVar6 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
    if (uVar6 != 1) {
      return 0;
    }
    uVar6 = F_0042a990(iVar8 + 8);
    uVar7 = F_0042a990((int)this + 0x16c);
    uVar6 = F_00a02930(*(undefined * PTR32 *)((int)this + 0xf8),"IsAnnounce",uVar7,uVar6,param_2 & 0xff,
                         param_3,param_4,1);
    if (uVar6 != 0) {
      return 0;
    }
    this_00 = *(undefined * PTR32 *)((int)this + 0xf8);
    (*(char *)(gen_frame + 0xb)) = '\0';
    bVar4 = F_00a01d80(this_00,&(*(char *)(gen_frame + 0xb)));
    if ((bVar4 != 0) && ((*(char *)(gen_frame + 0xb)) == '\0')) {
      return 0;
    }
  }
  bVar4 = *(byte *)((int)this + 800);
  sVar1 = *(short *)((int)this + 0x1d4);
  uVar6 = F_00a4ffd0();
  iVar9 = 0;
  iVar8 = uVar6 + 0x13b4;
  do {
    if (*(short *)(iVar8 + 4) == sVar1) {
      if (-1 < iVar9) {
        cVar5 = *(char *)(iVar8 + 6);
        goto LAB_006d91a1;
      }
      break;
    }
    iVar9 = iVar9 + 1;
    iVar8 = iVar8 + 0x10;
  } while (iVar9 < 0x1e);
  cVar5 = '\0';
LAB_006d91a1: ;
  if ((bVar4 >> 3 & 1) == 0) {
    if (cVar5 != '\0') goto LAB_006d91c5;
    if ((iVar2 != 0) && (iVar2 == param_3)) {
      uVar6 = F_006d9070(this,param_1);
      return uVar6;
    }
  }
  else if (cVar5 != '\0') {
LAB_006d91c5: ;
    if (cVar5 == -1) {
      uVar6 = F_006d8e70(this,param_1,param_2,param_3,param_4,param_5,param_6);
      if (uVar6 != 0) {
        return (uint)(param_3 == iVar3) * 2 + 0xd;
      }
      return (uint)(param_3 == iVar3) * 2 + 3;
    }
    uVar6 = F_006d8e70(this,param_1,param_2,param_3,param_4,param_5,param_6);
    if (uVar6 != 0) {
      return ((char)param_2 == '\x02') + 0xd;
    }
    return ((char)param_2 == '\x02') + 3;
  }
  return 0;
}

/* ref: FUN_006d9290 */
byte F_006d9290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d9290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char cVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  int iVar8;
  
  iVar2 = *(int *)(param_1 + 0x74);
  piVar7 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x10)));
  if (piVar7 != *(int * PTR32 *)((int)this + 0x10)) {
    do {
      uVar5 = ((code *)*(gen_code32 *)(*(int *)piVar7[3] + 4))((int *)piVar7[3]);
      if (((char)uVar5 == '\x02') &&
         ((((char)param_2 == '\0' ||
           (uVar5 = F_00a5f290((undefined *)piVar7[3]), *(char *)(uVar5 + 0x188) != '\x02')) &&
          (iVar3 = *(int *)(piVar7[3] + 0x84), iVar3 != -0x20000000)))) {
        if (iVar3 == iVar2) {
          return 1;
        }
        iVar8 = 0;
        if (REFG(undefined1, 0x1338ad4) != 0) {
          do {
            piVar6 = (int *)F_00ae0850(&REFG(undefined, 0x1336e40),iVar8);
            if ((piVar6 != (int *)0x0) && (*piVar6 == iVar3)) {
              return 1;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < (int)(uint)REFG(undefined1, 0x1338ad4));
        }
      }
      if (*(char *)((int)piVar7 + 0x11) == '\0') {
        piVar6 = (int *)piVar7[2];
        if (*(char *)((int)piVar6 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar6 + 0x11);
          piVar7 = piVar6;
          piVar6 = (int *)*piVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar6 + 0x11);
            piVar7 = piVar6;
            piVar6 = (int *)*piVar6;
          }
        }
        else {
          cVar1 = *(char *)(piVar7[1] + 0x11);
          piVar4 = (int *)piVar7[1];
          piVar6 = piVar7;
          while ((piVar7 = piVar4, cVar1 == '\0' && (piVar6 == (int *)piVar7[2]))) {
            cVar1 = *(char *)(piVar7[1] + 0x11);
            piVar4 = (int *)piVar7[1];
            piVar6 = piVar7;
          }
        }
      }
    } while (piVar7 != *(int * PTR32 *)((int)this + 0x10));
  }
  return 0;
}

/* ref: FUN_006d9390 */
uint F_006d9390(unsigned int gen_a0)
{
  GEN_ENTER(0x6d9390u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this;
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined4 * puVar4;
  int * piVar5;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  puVar4 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar3);
  this = (undefined *)*puVar4;
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x8)),2);
  piVar5 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2,uVar3);
  iVar1 = *piVar5;
  ((byte *)(gen_frame + 0x8))[0x20] = 1;
  ((byte *)(gen_frame + 0x8))[0x20] = 1;
  uVar3 = F_00a019d0(((byte *)(gen_frame + 0x8)));
  if (2 < (int)uVar3) {
    bVar2 = F_00a01e10(((byte *)(gen_frame + 0x8)),3);
    ((byte *)(gen_frame + 0x8))[0x20] = bVar2;
  }
  bVar2 = F_006d9290(this,*(undefined4 *)(iVar1 + 0x60),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  ((byte *)(gen_frame + 0x8))[0x20] = bVar2;
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006d9430 */
byte F_006d9430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d9430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int * piVar6;
  
  iVar5 = param_1[0x1e];
  uVar4 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  if (uVar4 == 1) {
    if ((byte)(*(char *)((int)this + 0x44) - 10U) < 2) {
      iVar5 = *(int *)((int)this + 0x48);
      goto LAB_006d9466;
    }
  }
  else if (iVar5 != 0) {
LAB_006d9466: ;
    piVar6 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x10)));
    if (piVar6 != *(int * PTR32 *)((int)this + 0x10)) {
      do {
        uVar4 = ((code *)*(gen_code32 *)(*(int *)piVar6[3] + 4))((int *)piVar6[3]);
        if ((char)uVar4 == '\x02') {
          uVar4 = F_00a5f290((undefined *)piVar6[3]);
          if ((*(int *)(uVar4 + 0x2ef8) != 0) && (iVar5 == *(int *)(uVar4 + 0x2ef8))) {
            return 1;
          }
        }
        if (*(char *)((int)piVar6 + 0x11) == '\0') {
          piVar2 = (int *)piVar6[2];
          if (*(char *)((int)piVar2 + 0x11) == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x11);
            piVar6 = piVar2;
            piVar2 = (int *)*piVar2;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar2 + 0x11);
              piVar6 = piVar2;
              piVar2 = (int *)*piVar2;
            }
          }
          else {
            cVar1 = *(char *)(piVar6[1] + 0x11);
            piVar3 = (int *)piVar6[1];
            piVar2 = piVar6;
            while ((piVar6 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar6[2]))) {
              cVar1 = *(char *)(piVar6[1] + 0x11);
              piVar3 = (int *)piVar6[1];
              piVar2 = piVar6;
            }
          }
        }
      } while (piVar6 != *(int * PTR32 *)((int)this + 0x10));
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_006d94f0 */
uint F_006d94f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d94f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this;
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  int * piVar4;
  
  F_00a01860(((byte *)(gen_frame + 0x8)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),1);
  puVar3 = (undefined4 *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),1,uVar2);
  this = (undefined *)*puVar3;
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0x8)),2);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),2,uVar2);
  bVar1 = F_006d9430(this,*(undefined4 *)(*piVar4 + 4));
  ((byte *)(gen_frame + 0x8))[0x20] = bVar1;
  F_00a01ea0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 32)));
  F_00a01890(((byte *)(gen_frame + 0x8)));
  return 1;
}

/* ref: FUN_006d9570 */
unsigned int F_006d9570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d9570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (REFG(void * PTR32, 0x1488760) != (undefined *)0x0) {
    F_006d5f60(REFG(void * PTR32, 0x1488760),param_1,param_2,param_3);
  }
  return 0;
}

/* ref: FUN_006d9590 */
unsigned int F_006d9590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6d9590u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if (REFG(void * PTR32, 0x1488760) != (undefined *)0x0) {
    F_006d5f60(REFG(void * PTR32, 0x1488760),param_1,param_2,(uint)((byte)param_3 & 1));
  }
  return 0;
}

/* ref: FUN_006d95c0 */
uint F_006d95c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d95c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 * this_00;
  int * piVar6;
  int iVar7;
  ulonglong uVar8;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  uVar1 = *(ushort *)((int)this + 0x1d4);
  (*(uint *)(gen_frame + 0x10)) = 0;
  uVar3 = F_00a68280(&REFG(undefined1, 0x14ab070),(uint)REFG(undefined1, 0x14ab0d4),0);
  (*(uint *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0xc)), 1, 3),REFG(undefined1, 0x14b4ec1)) & 0xffffff01;
  uVar4 = F_00a4ffd0();
  iVar7 = 0;
  iVar5 = uVar4 + 0x1684;
  do {
    if (*(ushort *)(iVar5 + 4) == uVar1) {
      (*(uint *)(gen_frame + 0x10)) = (uint)*(ushort *)(iVar5 + 10);
      break;
    }
    iVar7 = iVar7 + 1;
    iVar5 = iVar5 + 0x10;
  } while (iVar7 < 0x10);
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined1 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined2 *)(gen_frame + 0x4c)) = 0;
  F_0042b630(((undefined1 *)(gen_frame + 0x50)));
  (*(undefined4 *)(gen_frame + 0xa4)) = 0;
  (*(undefined4 *)(gen_frame + 0xa8)) = 0;
  (*(undefined4 *)(gen_frame + 0xac)) = 0;
  (*(undefined4 *)(gen_frame + 0xb0)) = 0;
  F_0042b630(((undefined1 *)(gen_frame + 0xb4)));
  F_006d6580((uint)uVar1,(*(uint *)(gen_frame + 0x10)),uVar3 & 0xffff,(*(uint *)(gen_frame + 0xc)),(uint)REFG(undefined1, 0x14ab29a),&(*(undefined4 *)(gen_frame + 0x18)),0,0,0,0,0
               ,0,0,0);
  uVar2 = (*(undefined4 *)(gen_frame + 0x20));
  if (*(int *)((int)this + 100) == 0) {
    this_00 = (undefined4 *)F_00406b90(0x20,0,0);
    if (this_00 == (undefined4 *)0x0) {
      this_00 = (undefined4 *)0x0;
    }
    else {
      F_00cb4700(this_00,1,0);
      this_00[5] = 1;
      *this_00 = (*(undefined * PTR32 (*)[2])REFP(0x10b9170));
      this_00[6] = this;
      this_00[7] = ((code *)REFP(0x72dc20));
    }
    *(undefined4 * PTR32 *)((int)this + 100) = this_00;
    F_00cb4540(this_00,0,uVar2);
    piVar6 = (int *)F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),9);
    *(int * PTR32 *)((int)this + 0x68) = piVar6;
    ((code *)*(gen_code32 *)(*piVar6 + 0x48))(piVar6,*(undefined4 *)((int)this + 100));
  }
  F_0042c880(((undefined1 *)(gen_frame + 0xb4)));
  uVar8 = F_0042c880(((undefined1 *)(gen_frame + 0x50)));
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return (uint)uVar8;
}

/* ref: FUN_006d9790 */
byte F_006d9790(unsigned int gen_a0)
{
  GEN_ENTER(0x6d9790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = this;
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x348);
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)*puVar1;
  while( true ) {
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x8)) == puVar1) {
      return 1;
    }
    if (*(char *)((*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 0x26) == '\0') break;
    F_00731c40(&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
  }
  return 0;
}

/* ref: Client::Game::Event::CraftLeveClientEventHandler::vf130 */
uint F_006d97d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d97d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  short * psVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  if ((char)uVar1 != '\0') {
    psVar2 = *(short * PTR32 *)(REFG(int, 0x1488344) + 0x7ac);
    while( true ) {
      if (psVar2 == *(short * PTR32 *)(REFG(int, 0x1488344) + 0x7b0)) {
        return 1;
      }
      if ((*psVar2 != 0) && ((char)psVar2[6] == '\0')) break;
      psVar2 = psVar2 + 8;
    }
  }
  return 0;
}

/* ref: FUN_006d9810 */
uint F_006d9810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d9810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  byte bVar2;
  uint in_EAX = 0;
  int * piVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  undefined3 extraout_var_00 = 0;
  
  iVar1 = REFG(int, 0x1379694);
  if (REFG(int, 0x1379694) != 0) {
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    if (piVar3 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar3 + 0xd4))(piVar3);
    }
    if (param_2 == 0x121) {
      bVar2 = F_006d6060(this,param_1,iVar1);
      return CONCAT31(extraout_var,bVar2);
    }
    if (param_2 == 299) {
      in_EAX = F_00a51200(0x42,1,0,0,0);
      if ((char)in_EAX != '\0') {
        uVar4 = F_00a4a760(&REFG(undefined, 0x14a7360),0x1a,1);
        return CONCAT31((int3)(uVar4 >> 8),1);
      }
    }
    else {
      if (param_2 == 0x128) {
        uVar4 = F_006c2860(param_1,iVar1);
        return uVar4;
      }
      if (param_2 == 0x129) {
        uVar4 = F_006c2890(param_1,iVar1);
        return uVar4;
      }
      in_EAX = param_2;
      if (param_2 == 0x120) {
        bVar2 = F_006c28c0(this,param_1,iVar1);
        return CONCAT31(extraout_var_00,bVar2);
      }
    }
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_006d98f0 */
uint F_006d98f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d98f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  short * psVar1;
  
  psVar1 = *(short * PTR32 *)((int)this + 0x244);
  while( true ) {
    if (psVar1 == *(short * PTR32 *)((int)this + 0x248)) {
      return 0;
    }
    if (*psVar1 == (short)param_1) break;
    psVar1 = psVar1 + 0x3a;
  }
  return *(uint *)(psVar1 + param_2 * 2 + 10);
}

/* ref: FUN_006d9930 */
uint F_006d9930(unsigned int gen_a0)
{
  GEN_ENTER(0x6d9930u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  short * psVar5;
  undefined4 uVar6;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar2 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar3 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar2);
  iVar1 = *piVar3;
  uVar2 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),2);
  uVar4 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),3);
  psVar5 = *(short * PTR32 *)(iVar1 + 0x244);
  do {
    if (psVar5 == *(short * PTR32 *)(iVar1 + 0x248)) {
      uVar6 = 0;
LAB_006d9996: ;
      F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),uVar6);
      F_00a01890(((byte *)(gen_frame + 0xc)));
      return 1;
    }
    if (*psVar5 == (short)uVar2) {
      uVar6 = *(undefined4 *)(psVar5 + uVar4 * 2 + 8);
      goto LAB_006d9996;
    }
    psVar5 = psVar5 + 0x3a;
  } while( true );
}

/* ref: FUN_006d99c0 */
byte F_006d99c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d99c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  
  piVar5 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x30)));
  if (piVar5 != *(int * PTR32 *)((int)this + 0x30)) {
    do {
      piVar2 = (int *)piVar5[4];
      if ((*(short *)((int)piVar2 + 10) == (short)param_1) &&
         (uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2), (char)uVar4 == '\0')) {
        return 0;
      }
      if (*(char *)((int)piVar5 + 0x15) == '\0') {
        piVar2 = (int *)piVar5[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar5 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar5 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x15);
          piVar3 = (int *)piVar5[1];
          piVar2 = piVar5;
          while ((piVar5 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0x15);
            piVar3 = (int *)piVar5[1];
            piVar2 = piVar5;
          }
        }
      }
    } while (piVar5 != *(int * PTR32 *)((int)this + 0x30));
  }
  return 1;
}

/* ref: FUN_006d9a40 */
byte F_006d9a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d9a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  
  piVar5 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x30)));
  if (piVar5 != *(int * PTR32 *)((int)this + 0x30)) {
    do {
      piVar2 = (int *)piVar5[4];
      if ((*(short *)((int)piVar2 + 10) == (short)param_1) &&
         (uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x208))(piVar2), (char)uVar4 == '\0')) {
        return 0;
      }
      if (*(char *)((int)piVar5 + 0x15) == '\0') {
        piVar2 = (int *)piVar5[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar5 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar5 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x15);
          piVar3 = (int *)piVar5[1];
          piVar2 = piVar5;
          while ((piVar5 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0x15);
            piVar3 = (int *)piVar5[1];
            piVar2 = piVar5;
          }
        }
      }
    } while (piVar5 != *(int * PTR32 *)((int)this + 0x30));
  }
  return 1;
}

/* ref: FUN_006d9ad0 */
uint F_006d9ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d9ad0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint * puVar2;
  
  puVar2 = *(uint * PTR32 *)((int)this + 0x2c);
  while( true ) {
    if (puVar2 == *(uint * PTR32 *)((int)this + 0x30)) {
      return 0;
    }
    uVar1 = *puVar2;
    if ((**(int * PTR32 *)(uVar1 + 0x1d4) == param_1) && (*(int *)(uVar1 + 0x1d8) == param_2)) break;
    puVar2 = puVar2 + 1;
  }
  return uVar1;
}

/* ref: FUN_006d9b20 */
uint F_006d9b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d9b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * puVar1;
  
  puVar1 = *(uint * PTR32 *)((int)this + 0x2c);
  while( true ) {
    if (puVar1 == *(uint * PTR32 *)((int)this + 0x30)) {
      return 0;
    }
    if (**(int * PTR32 *)(*puVar1 + 0x1d4) == param_1) break;
    puVar1 = puVar1 + 1;
  }
  return *puVar1;
}

/* ref: FUN_006d9b60 */
uint F_006d9b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d9b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * puVar1;
  
  puVar1 = *(uint * PTR32 *)((int)this + 0x2c);
  while( true ) {
    if (puVar1 == *(uint * PTR32 *)((int)this + 0x30)) {
      return 0;
    }
    if (**(int * PTR32 *)(*puVar1 + 0x1d4) == param_1) break;
    puVar1 = puVar1 + 1;
  }
  return *puVar1;
}

/* ref: FUN_006d9ba0 */
uint F_006d9ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d9ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * puVar1;
  
  puVar1 = *(uint * PTR32 *)((int)this + 0x2c);
  while( true ) {
    if (puVar1 == *(uint * PTR32 *)((int)this + 0x30)) {
      return 0;
    }
    if (*(int *)(*puVar1 + 0x1d8) == param_1) break;
    puVar1 = puVar1 + 1;
  }
  return *puVar1;
}

/* ref: FUN_006d9bd0 */
uint F_006d9bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6d9bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * puVar1;
  
  puVar1 = *(uint * PTR32 *)((int)this + 0x2c);
  while( true ) {
    if (puVar1 == *(uint * PTR32 *)((int)this + 0x30)) {
      return 0;
    }
    if (*(int *)(*puVar1 + 0x1d8) == param_1) break;
    puVar1 = puVar1 + 1;
  }
  return *puVar1;
}

/* ref: FUN_006d9c00 */
uint F_006d9c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6d9c00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int * this_00;
  int * in_EAX = 0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x2c);
  if (puVar1 != *(undefined4 * PTR32 *)((int)this + 0x30)) {
    do {
      this_00 = (int *)*puVar1;
      if (((this_00 != (int *)0x0) &&
          (in_EAX = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*this_00 + 8))(this_00))), (char)in_EAX != '\0')) &&
         (in_EAX = (int *)this_00[0x75], *in_EAX == param_1)) {
        in_EAX = (int *)F_006c4da0(this_00,param_2,param_3,param_4,param_5);
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined4 * PTR32 *)((int)this + 0x30));
  }
  return (uint)in_EAX;
}

/* ref: FUN_006d9c60 */
byte F_006d9c60(unsigned int gen_a0)
{
  GEN_ENTER(0x6d9c60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  
  piVar3 = *(int * PTR32 *)((int)this + 0x2c);
  if (piVar3 != *(int * PTR32 *)((int)this + 0x30)) {
    do {
      piVar1 = (int *)*piVar3;
      if ((piVar1 != (int *)0x0) &&
         (uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1), (char)uVar2 == '\0')) {
        return 0;
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != *(int * PTR32 *)((int)this + 0x30));
  }
  return *(int *)((int)this + 0x5c) == 0;
}

/* ref: FUN_006d9cd0 */
unsigned int F_006d9cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d9cd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined1 * puVar1;
  
  puVar1 = *(undefined1 * PTR32 *)(in_ecx + 0x2f8);
  if (puVar1 != *(undefined1 * PTR32 *)(in_ecx + 0x2fc)) {
    do {
      *puVar1 = 0;
      puVar1 = puVar1 + 0x140;
    } while (puVar1 != *(undefined1 * PTR32 *)(in_ecx + 0x2fc));
  }
  return 0;
}

/* ref: Client::Game::Event::QuestBattleDirector::vf2 */
byte F_006d9d00(unsigned int gen_a0)
{
  GEN_ENTER(0x6d9d00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  
  if (((byte)this[0x1c] & 1) != 0) {
    puVar2 = *(undefined4 * PTR32 *)(this + 0xe8);
    if (puVar2 != *(undefined4 * PTR32 *)(this + 0xec)) {
      do {
        uVar1 = ((code *)*(gen_code32 *)(*(int *)*puVar2 + 8))((int *)*puVar2);
        if ((char)uVar1 == '\0') {
          return 0;
        }
        puVar2 = puVar2 + 1;
      } while (puVar2 != *(undefined4 * PTR32 *)(this + 0xec));
    }
    if ((*(int *)(this + 0x4b8) != 0) &&
       (uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x4b8) + 8))))(*(int * PTR32 *)(this + 0x4b8)),
       (char)uVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}

/* ref: Client::Game::Event::QuestBattleDirector::vf3 */
byte F_006d9d60(unsigned int gen_a0)
{
  GEN_ENTER(0x6d9d60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  bVar1 = F_006d8130((undefined *)this);
  if (bVar1 != 0) {
    return 1;
  }
  if ((*(int *)(this + 0x4b8) != 0) &&
     (uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x4b8) + 0xc))))(*(int * PTR32 *)(this + 0x4b8)),
     (char)uVar2 != '\0')) {
    return 1;
  }
  return 0;
}

/* ref: Client::Game::Event::QuestBattleDirector::vf144 */
uint F_006d9d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6d9d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  undefined3 extraout_var_00 = 0;
  
  if ((char)param_1 == '\0') {
    bVar1 = F_006d8320((undefined *)this);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 == 0) {
      uVar2 = F_00a51200(0x4c,5,0,0,0);
      return uVar2;
    }
  }
  else {
    bVar1 = F_00737c30(this,this);
    uVar2 = CONCAT31(extraout_var_00,bVar1);
    this[0x318] = (undefined1)0x1;
  }
  return uVar2;
}

/* ref: FUN_006d9dd0 */
uint F_006d9dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6d9dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = F_006d9c00((undefined *)((int)this + 0x5c),param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_006d9de0 */
uint F_006d9de0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d9de0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x224) == 0) {
    return 0;
  }
  uVar1 = *(uint *)((int)this + 0x220);
  if (*(int * PTR32 *)((int)this + 0x214) == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = **(int * PTR32 *)((int)this + 0x214);
  }
  if (*(uint *)(iVar2 + 8) <= uVar1) {
    uVar1 = uVar1 - *(uint *)(iVar2 + 8);
  }
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar1 * 4))) + 8)));
}

/* ref: FUN_006d9e20 */
byte F_006d9e20(unsigned int gen_a0)
{
  GEN_ENTER(0x6d9e20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x224) != 0) {
    uVar1 = *(uint *)((int)this + 0x220);
    if (*(int * PTR32 *)((int)this + 0x214) == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = **(int * PTR32 *)((int)this + 0x214);
    }
    if (*(uint *)(iVar2 + 8) <= uVar1) {
      uVar1 = uVar1 - *(uint *)(iVar2 + 8);
    }
    return *((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar1 * 4))) + 0x18)));
  }
  if (*(int *)((int)this + 0x238) != 0) {
    return *(byte *)((int)this + 0x248);
  }
  return 0;
}

/* ref: FUN_006d9e70 */
ulonglong F_006d9e70(unsigned int gen_a0)
{
  GEN_ENTER(0x6d9e70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = 0;
  uVar1 = 0xe0000000;
  if (*(int *)((int)this + 0x224) != 0) {
    uVar2 = *(uint *)((int)this + 0x220);
    iVar4 = 0;
    if (*(int * PTR32 *)((int)this + 0x214) != (int *)0x0) {
      iVar4 = **(int * PTR32 *)((int)this + 0x214);
    }
    if (*(uint *)(iVar4 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(iVar4 + 8);
    }
    iVar4 = *((int *)GEN_TOP((*(int *)(iVar4 + 4) + uVar2 * 4)));
    uVar1 = *(undefined4 *)(iVar4 + 0x10);
    uVar3 = *(undefined4 *)(iVar4 + 0x14);
  }
  if (*(int *)((int)this + 0x238) != 0) {
    uVar1 = *(undefined4 *)((int)this + 0x240);
    uVar3 = *(undefined4 *)((int)this + 0x244);
  }
  return CONCAT44(uVar3,uVar1);
}

/* ref: FUN_006d9ec0 */
uint F_006d9ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d9ec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  uint uVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x224) == 0) {
    return in_EAX & 0xffffff00;
  }
  uVar1 = *(uint *)((int)this + 0x220);
  if (*(int * PTR32 *)((int)this + 0x214) == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = **(int * PTR32 *)((int)this + 0x214);
  }
  if (*(uint *)(iVar2 + 8) <= uVar1) {
    uVar1 = uVar1 - *(uint *)(iVar2 + 8);
  }
  return *((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar1 * 4))) + 0x20))) >> 1 & 1;
}

/* ref: FUN_006d9f00 */
uint F_006d9f00(unsigned int gen_a0)
{
  GEN_ENTER(0x6d9f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  uint uVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x224) == 0) {
    if (*(int *)((int)this + 0x238) == 0) goto LAB_006d9f43;
    iVar2 = (int)this + 0x230;
  }
  else {
    uVar1 = *(uint *)((int)this + 0x220);
    if (*(int * PTR32 *)((int)this + 0x214) == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = **(int * PTR32 *)((int)this + 0x214);
    }
    if (*(uint *)(iVar2 + 8) <= uVar1) {
      uVar1 = uVar1 - *(uint *)(iVar2 + 8);
    }
    iVar2 = *((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar1 * 4)));
  }
  in_EAX = 0;
  if (iVar2 != 0) {
    return *(byte *)(iVar2 + 0x20) & 1;
  }
LAB_006d9f43: ;
  return in_EAX & 0xffffff00;
}

/* ref: FUN_006d9f90 */
uint F_006d9f90(unsigned int gen_a0)
{
  GEN_ENTER(0x6d9f90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x224) == 0) {
    return 0;
  }
  uVar1 = *(uint *)((int)this + 0x220);
  if (*(int * PTR32 *)((int)this + 0x214) == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = **(int * PTR32 *)((int)this + 0x214);
  }
  if (*(uint *)(iVar2 + 8) <= uVar1) {
    uVar1 = uVar1 - *(uint *)(iVar2 + 8);
  }
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar1 * 4))) + 0x24)));
}

/* ref: FUN_006d9fd0 */
uint F_006d9fd0(unsigned int gen_a0)
{
  GEN_ENTER(0x6d9fd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x224) == 0) {
    return 0;
  }
  uVar1 = *(uint *)((int)this + 0x220);
  if (*(int * PTR32 *)((int)this + 0x214) == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = **(int * PTR32 *)((int)this + 0x214);
  }
  if (*(uint *)(iVar2 + 8) <= uVar1) {
    uVar1 = uVar1 - *(uint *)(iVar2 + 8);
  }
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar1 * 4))) + 0x28)));
}

/* ref: FUN_006da050 */
uint F_006da050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6da050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * puVar1;
  
  puVar1 = *(uint * PTR32 *)((int)this + 0x88);
  while( true ) {
    if (puVar1 == *(uint * PTR32 *)((int)this + 0x8c)) {
      return 0;
    }
    if (**(int * PTR32 *)(*puVar1 + 0x1d4) == param_1) break;
    puVar1 = puVar1 + 1;
  }
  return *puVar1;
}

/* ref: FUN_006da0a0 */
unsigned int F_006da0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6da0a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int * piVar2;
  
  piVar2 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x6e4)));
  if (piVar2 != *(int * PTR32 *)((int)this + 0x6e4)) {
    do {
      if (((*(byte *)(piVar2 + 0x1f) & 1) == 0) &&
         (uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1,piVar2[0x1d]), (char)uVar1 != '\0')) {
        *(byte *)(piVar2 + 0x1f) = *(byte *)(piVar2 + 0x1f) | 2;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)((int)this + 0x6e4));
  }
  return 0;
}

/* ref: FUN_006da0f0 */
unsigned int F_006da0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6da0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int * piVar2;
  
  piVar2 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x6f0)));
  if (piVar2 != *(int * PTR32 *)((int)this + 0x6f0)) {
    do {
      if (((char)piVar2[6] == '\0') &&
         (uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1,piVar2[4]), (char)uVar1 != '\0')) {
        *(undefined1 *)((int)piVar2 + 0x19) = 1;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)((int)this + 0x6f0));
  }
  return 0;
}

/* ref: FUN_006da140 */
byte F_006da140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6da140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar2 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x700)));
  while( true ) {
    if (puVar2 == *(undefined4 * PTR32 *)((int)this + 0x700)) {
      return 0;
    }
    if (puVar2[4] == param_1) break;
    if (*(char *)((int)puVar2 + 0x19) == '\0') {
      puVar3 = (undefined4 *)puVar2[2];
      if (*(char *)((int)puVar3 + 0x19) == '\0') {
        cVar1 = *(char *)((int)*puVar3 + 0x19);
        puVar2 = puVar3;
        puVar3 = (undefined4 *)*puVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar3 + 0x19);
          puVar2 = puVar3;
          puVar3 = (undefined4 *)*puVar3;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar2[1] + 0x19);
        puVar4 = (undefined4 *)puVar2[1];
        puVar3 = puVar2;
        while ((puVar2 = puVar4, cVar1 == '\0' && (puVar3 == (undefined4 *)puVar2[2]))) {
          cVar1 = *(char *)((int)puVar2[1] + 0x19);
          puVar4 = (undefined4 *)puVar2[1];
          puVar3 = puVar2;
        }
      }
    }
  }
  return 1;
}

/* ref: FUN_006da1b0 */
byte F_006da1b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6da1b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  if ((*(int *)((int)this + 0x210) != 0) &&
     (uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x210) + 8))))(*(int * PTR32 *)((int)this + 0x210)),
     (char)uVar1 == '\0')) {
    return 0;
  }
  if (REFG(int, 0x1379694) != 0) {
    if (*(int *)(REFG(int, 0x1379694) + 0xe4) == 0) {
      return 1;
    }
    piVar2 = (int *)F_006da050(this,*(int *)(REFG(int, 0x1379694) + 0xe4));
    if ((piVar2 != (int *)0x0) && (uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2), (char)uVar1 != '\0'))
    {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_006da210 */
byte F_006da210(unsigned int gen_a0)
{
  GEN_ENTER(0x6da210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  if ((*(short *)((int)this + 0x20c) == 0) || (REFG(int, 0x1379694) == 0)) {
    return 0;
  }
  piVar2 = (int *)0x0;
  if (*(int *)(REFG(int, 0x1379694) + 0xe4) != 0) {
    piVar2 = (int *)F_006da050(this,*(int *)(REFG(int, 0x1379694) + 0xe4));
    if (piVar2 != (int *)0x0) {
      uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
      if ((char)uVar1 != '\0') goto LAB_006da255;
    }
    return 0;
  }
LAB_006da255: ;
  if ((*(int *)((int)this + 0x210) == 0) &&
     ((piVar2 == (int *)0x0 || (((uint)piVar2[0xe] >> 0xf & 1) == 0)))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_006da290 */
byte F_006da290(unsigned int gen_a0)
{
  GEN_ENTER(0x6da290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_006d9a40(this,1);
  return bVar1;
}

/* ref: FUN_006da2a0 */
byte F_006da2a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6da2a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  
  piVar3 = *(int * PTR32 *)((int)this + 0x88);
  if (piVar3 != *(int * PTR32 *)((int)this + 0x8c)) {
    do {
      piVar1 = (int *)*piVar3;
      if (piVar1 != (int *)0x0) {
        uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
        if ((char)uVar2 == '\0') {
          return 0;
        }
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != *(int * PTR32 *)((int)this + 0x8c));
  }
  return *(int *)((int)this + 0xb8) == 0;
}

/* ref: FUN_006da2e0 */
uint F_006da2e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6da2e0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint * puVar1;
  char cVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  uint uVar6;
  int * piVar7;
  int * piVar8;
  
  piVar3 = (*(int * PTR32 *)&gen_args[2]);
  piVar5 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6d4)));
  piVar8 = (int *)*piVar5;
  if (piVar8 != piVar5) {
    do {
      piVar5 = ((int *)GEN_TOP(((int)piVar3 + (-(uint)((*(uint *)&gen_args[1]) < (uint)piVar8[8]) - piVar8[9]))));
      if ((piVar5 < (int *)piVar8[0xb]) ||
         ((piVar5 <= (int *)piVar8[0xb] && ((*(uint *)&gen_args[1]) - piVar8[8] < (uint)piVar8[10])))) {
        if (*(char *)((int)piVar8 + 0x31) == '\0') {
          piVar7 = (int *)piVar8[2];
          if (*(char *)((int)piVar7 + 0x31) == '\0') {
            cVar2 = *(char *)(*piVar7 + 0x31);
            piVar5 = (int *)*piVar7;
            while (piVar8 = piVar7, cVar2 == '\0') {
              cVar2 = *(char *)(*piVar5 + 0x31);
              piVar7 = piVar5;
              piVar5 = (int *)*piVar5;
            }
          }
          else {
            cVar2 = *(char *)(piVar8[1] + 0x31);
            piVar4 = (int *)piVar8[1];
            piVar7 = piVar8;
            while ((piVar5 = piVar4, piVar8 = piVar5, cVar2 == '\0' && (piVar7 == (int *)piVar5[2]))
                  ) {
              cVar2 = *(char *)(piVar5[1] + 0x31);
              piVar4 = (int *)piVar5[1];
              piVar7 = piVar5;
            }
          }
        }
      }
      else {
        uVar6 = ((code *)*(gen_code32 *)(*(int *)piVar8[4] + 0x94))((int *)piVar8[4],piVar8[6]);
        if ((char)uVar6 == '\0') {
          piVar7 = piVar8;
          if (*(char *)((int)piVar8 + 0x31) == '\0') {
            piVar7 = (int *)piVar8[2];
            if (*(char *)((int)piVar7 + 0x31) == '\0') {
              cVar2 = *(char *)(*piVar7 + 0x31);
              piVar5 = (int *)*piVar7;
              while (cVar2 == '\0') {
                cVar2 = *(char *)(*piVar5 + 0x31);
                piVar7 = piVar5;
                piVar5 = (int *)*piVar5;
              }
            }
            else {
              cVar2 = *(char *)(piVar8[1] + 0x31);
              piVar4 = (int *)piVar8[1];
              piVar5 = piVar8;
              while ((piVar7 = piVar4, cVar2 == '\0' && (piVar5 == (int *)piVar7[2]))) {
                cVar2 = *(char *)(piVar7[1] + 0x31);
                piVar4 = (int *)piVar7[1];
                piVar5 = piVar7;
              }
            }
          }
          piVar5 = (int *)F_00743b10(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6d0))),&(*(int * PTR32 *)&gen_args[2]),piVar8);
          piVar8 = piVar7;
        }
        else {
          puVar1 = (uint *)(piVar8 + 8);
          uVar6 = *puVar1;
          *puVar1 = *puVar1 + piVar8[10];
          piVar8[9] = piVar8[9] + piVar8[0xb] + (uint)CARRY4(uVar6,piVar8[10]);
          piVar5 = (int *)(piVar8[0xb] + piVar8[9] + (uint)CARRY4(piVar8[10],piVar8[8]));
          if ((piVar5 <= piVar3) &&
             ((piVar3 != piVar5 || ((uint)(piVar8[10] + piVar8[8]) < (*(uint *)&gen_args[1]))))) {
            piVar8[8] = (*(uint *)&gen_args[1]);
            piVar8[9] = (int)piVar3;
          }
          if (*(char *)((int)piVar8 + 0x31) == '\0') {
            piVar7 = (int *)piVar8[2];
            if (*(char *)((int)piVar7 + 0x31) == '\0') {
              cVar2 = *(char *)(*piVar7 + 0x31);
              piVar5 = (int *)*piVar7;
              while (piVar8 = piVar7, cVar2 == '\0') {
                cVar2 = *(char *)(*piVar5 + 0x31);
                piVar7 = piVar5;
                piVar5 = (int *)*piVar5;
              }
            }
            else {
              cVar2 = *(char *)(piVar8[1] + 0x31);
              piVar4 = (int *)piVar8[1];
              piVar7 = piVar8;
              while ((piVar5 = piVar4, piVar8 = piVar5, cVar2 == '\0' &&
                     (piVar7 == (int *)piVar5[2]))) {
                cVar2 = *(char *)(piVar5[1] + 0x31);
                piVar4 = (int *)piVar5[1];
                piVar7 = piVar5;
              }
            }
          }
        }
      }
    } while (piVar8 != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6d4))));
  }
  return (uint)piVar5;
}

/* ref: FUN_006da470 */
uint F_006da470(unsigned int gen_a0)
{
  GEN_ENTER(0x6da470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint in_EAX = 0;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  
  iVar4 = *(int *)((int)this + 0x738);
  while (iVar4 != 0) {
    uVar3 = *(uint *)((int)this + 0x734);
    if (*(int * PTR32 *)((int)this + 0x728) == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = **(int * PTR32 *)((int)this + 0x728);
    }
    if (*(uint *)(iVar4 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(iVar4 + 8);
    }
    iVar4 = *((int *)GEN_TOP((*(int *)(iVar4 + 4) + uVar3 * 4)));
    in_EAX = F_00536d10(&REFG(undefined4, 0x1375bc0),*(undefined4 *)(iVar4 + 8),*(undefined4 *)(iVar4 + 0x10),
                          *(undefined4 *)(iVar4 + 0x14),(uint)*(byte *)(iVar4 + 0x18),
                          *(undefined4 *)(iVar4 + 0x1c),(uint)*(byte *)(iVar4 + 0x20));
    if (*(int *)((int)this + 0x738) == 0) break;
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x72c) + *(int *)((int)this + 0x734) * 4)));
    ((code *)*(gen_code32 *)*puVar2)(puVar2,0);
    *(int *)((int)this + 0x734) = *(int *)((int)this + 0x734) + 1;
    in_EAX = *(uint *)((int)this + 0x734);
    if (*(uint *)((int)this + 0x730) <= in_EAX) {
      *(undefined4 *)((int)this + 0x734) = 0;
    }
    piVar1 = (int *)((int)this + 0x738);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)((int)this + 0x734) = 0;
    }
    iVar4 = *(int *)((int)this + 0x738);
  }
  if ((*(int *)((int)this + 0x740) != -0x20000000) || (*(int *)((int)this + 0x744) != 0)) {
    uVar5 = F_00538780(&REFG(undefined4, 0x1375bc0));
    in_EAX = (uint)uVar5;
    if ((in_EAX == *(uint *)((int)this + 0x740)) &&
       ((int)(uVar5 >> 0x20) == *(int *)((int)this + 0x744))) {
      in_EAX = F_00547460(&REFG(undefined4, 0x1375bc0),1);
    }
  }
  *(undefined4 *)((int)this + 0x740) = 0xe0000000;
  *(undefined4 *)((int)this + 0x744) = 0;
  return in_EAX;
}

/* ref: FUN_006da580 */
uint F_006da580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6da580u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  *param_2 = 0;
  uVar1 = F_00ab21d0(param_1);
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      if (*(char *)(uVar1 + 4 + uVar2) != '\0') {
        if (0x1c < uVar2) {
                    
          F_00c457e7("invalid bitset<N> position");
        }
        param_2[uVar2 >> 5] = param_2[uVar2 >> 5] | 1 << ((byte)uVar2 & 0x1f);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x1d);
  }
  return uVar1;
}

/* ref: FUN_006da5e0 */
uint F_006da5e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6da5e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  undefined4 uVar3;
  int * piVar4;
  int * piVar5;
  undefined * this_00;
  uint uVar6;
  int * piVar7;
  int * piVar8;
  
  piVar2 = *(int * PTR32 *)((int)this + 0x4c);
  uVar3 = *(undefined4 *)((int)this + 0x50);
  piVar5 = (int *)F_00a411a0(&REFG(undefined, 0x14a4230),this,(uint)*(byte *)((int)this + 0x48),
                               (uint)*(byte *)((int)this + 0x49));
  piVar7 = piVar5;
  if (piVar2 != piVar5) {
    if (*(char *)((int)this + 6) == '\0') {
      uVar6 = *(uint *)((int)this + 8);
      if ((*(byte *)((int)this + 0x14) & 1) != 0) {
        uVar6 = uVar6 + 1000000;
      }
    }
    else {
      this_00 = (undefined *)F_00a3a860(this);
      uVar6 = F_0046e5e0(this_00);
    }
    uVar6 = F_00ab24a0(uVar6);
    piVar7 = (int *)0x0;
    if (uVar6 != 0) {
      *(uint *)((int)this + 0x54) = (uint)*(ushort *)(uVar6 + 0x7c);
      uVar6 = *(uint *)(uVar6 + 0x28);
      *(int * PTR32 *)((int)this + 0x4c) = piVar5;
      *(bool *)((int)this + 0x58) = 1 < uVar6;
      if ((*(byte *)((int)this + 0x14) & 1) == 0) {
        piVar5 = *(int * PTR32 *)((int)this + 0x44);
      }
      *(int * PTR32 *)((int)this + 0x50) = piVar5;
      piVar7 = *(int * PTR32 *)((int)this + 0x60);
      piVar5 = (int *)*piVar7;
      if (piVar5 != piVar7) {
        do {
          piVar8 = piVar5;
          if (*(char *)((int)piVar5 + 0x15) == '\0') {
            piVar8 = (int *)piVar5[2];
            if (*(char *)((int)piVar8 + 0x15) == '\0') {
              cVar1 = *(char *)(*piVar8 + 0x15);
              piVar7 = (int *)*piVar8;
              while (cVar1 == '\0') {
                cVar1 = *(char *)(*piVar7 + 0x15);
                piVar8 = piVar7;
                piVar7 = (int *)*piVar7;
              }
            }
            else {
              cVar1 = *(char *)(piVar5[1] + 0x15);
              piVar4 = (int *)piVar5[1];
              piVar7 = piVar5;
              while ((piVar8 = piVar4, cVar1 == '\0' && (piVar7 == (int *)piVar8[2]))) {
                cVar1 = *(char *)(piVar8[1] + 0x15);
                piVar4 = (int *)piVar8[1];
                piVar7 = piVar8;
              }
            }
          }
          piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)piVar5[3] + 4))
                                    ((int *)piVar5[3],this,piVar2,uVar3,piVar5[4])));
          piVar5 = piVar8;
        } while (piVar8 != *(int * PTR32 *)((int)this + 0x60));
      }
    }
  }
  return (uint)piVar7;
}

/* ref: FUN_006da6f0 */
unsigned int F_006da6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x6da6f0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  F_006d7550(&(*(int *)&gen_args[1]),(*(int *)&gen_args[1]));
  if ((*(int *)&gen_args[1]) != *(int *)((*(int *)&gen_args[0]) + 0x30)) {
    *(undefined4 *)((*(int *)&gen_args[1]) + 0x58) = *(*(undefined4 * PTR32 *)&gen_args[2]);
    *(undefined4 *)((*(int *)&gen_args[1]) + 0x5c) = (*(undefined4 * PTR32 *)&gen_args[2])[1];
    *(undefined4 *)((*(int *)&gen_args[1]) + 0x60) = (*(undefined4 * PTR32 *)&gen_args[2])[2];
    *(float *)((*(int *)&gen_args[1]) + 100) = (*(float *)&gen_args[3]);
  }
  return 0;
}

/* ref: FUN_006da730 */
uint F_006da730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x6da730u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x4c);
  if (puVar1 != *(undefined4 * PTR32 *)((int)this + 0x50)) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)*puVar1 + 0x10))
                      ((int *)*puVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                       param_8);
    return uVar2;
  }
  return (uint)puVar1;
}

/* ref: FUN_006da7c0 */
uint F_006da7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6da7c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined * pvVar1;
  
  pvVar1 = (*(undefined * PTR32 *)&gen_args[1]);
  F_00aa3410((*(undefined * PTR32 *)&gen_args[1]),0xffffffff);
  F_006d7550(&(*(undefined * PTR32 *)&gen_args[1]),pvVar1);
  if ((*(undefined * PTR32 *)&gen_args[1]) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)))) {
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x7c))) = 0;
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[1]);
}

/* ref: FUN_006da800 */
uint F_006da800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6da800u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  uint uVar1;
  uint in_EAX = 0;
  
  uVar1 = (*(uint *)&gen_args[2]);
  if ((*(uint *)&gen_args[2]) < 7) {
    F_006d7550(&(*(uint *)&gen_args[2]),(*(undefined4 *)&gen_args[1]));
    in_EAX = (*(uint *)&gen_args[2]);
    if ((*(uint *)&gen_args[2]) != *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)))) {
      *(undefined1 *)((*(uint *)&gen_args[2]) + 0x7e + uVar1) = (undefined1)(*(undefined4 *)&gen_args[3]);
    }
  }
  return in_EAX;
}

/* ref: FUN_006da840 */
byte F_006da840(unsigned int gen_a0)
{
  GEN_ENTER(0x6da840u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  
  (*(int *)(gen_frame + 0x8)) = in_ecx;
  piVar1 = (int *)F_006d7550(&(*(int *)(gen_frame + 0x8)),REFG(undefined4, 0x1379694));
  if (*piVar1 == *(int *)(in_ecx + 0x30)) {
    return 0;
  }
  return *(char *)(*piVar1 + 0x7e) == '\0';
}

/* ref: FUN_006da870 */
uint F_006da870(unsigned int gen_a0)
{
  GEN_ENTER(0x6da870u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  code * pcVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  undefined * this;
  int * piVar5;
  int * piVar6;
  uint uVar7;
  int * piVar8;
  
  this = REFG(void * PTR32, 0x1488344);
  piVar6 = (int *)param_1[5];
  (*(int * PTR32 *)(gen_frame + 0x24)) = piVar6;
  if ((piVar6 == (int *)0x2) || (piVar6 == (int *)0x8)) {
    piVar6 = (int *)*param_1;
    if (piVar6 != (int *)0xe0000000) {
      piVar5 = (int *)F_00a354d0(&REFG(undefined4, 0x14a31f0),piVar6,param_1[1]);
      piVar6 = (int *)0x0;
      if (piVar5 != (int *)0x0) {
        (*(int *)(gen_frame + 0x0)) = param_1[0x16];
        (*(undefined4 *)(gen_frame + 0x4)) = param_1[0x17];
        (*(undefined4 *)(gen_frame + 0x8)) = param_1[0x18];
        F_00a9fa00(piVar5);
        ((code *)*(gen_code32 *)(*piVar5 + 0x3c))(piVar5,&(*(int *)(gen_frame + 0x0)));
        F_00aa0560(piVar5,param_1[0x1a]);
        ((code *)*(gen_code32 *)(*piVar5 + 0x24))(piVar5,1,0);
        ((code *)*(gen_code32 *)(*piVar5 + 0x24))(piVar5,2,0);
        F_00aa3410(piVar5,0xffffffff);
        F_00aa2cc0(piVar5,0);
        (*(int * PTR32 *)(gen_frame + 0x20)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)1 - (float10)*(double *)&REFG(undefined, 0x108bec8)))));
        F_00aa0980(piVar5,(float)((float10)1 - (float10)*(double *)&REFG(undefined, 0x108bec8)),0);
        piVar5[0xbb2] = GEN_FLT_TO(piVar5[0xbb2], REFG(float, 0x10b9490));
        *(undefined1 *)((int)piVar5 + 0x2ea7) = 1;
        F_00aa0600(piVar5,0);
        F_00aa6f20(piVar5,(uint)*(byte *)((int)param_1 + 0x7d),0);
        if ((*(int * PTR32 *)(gen_frame + 0x24)) == (int *)0x8) {
          F_00aa4310(piVar5);
          ((code *)*(gen_code32 *)(*piVar5 + 0x54))(piVar5,0);
          *(byte *)((int)piVar5 + 0x2dd3) = *(byte *)((int)piVar5 + 0x2dd3) & 0xfb;
        }
        (*(int * PTR32 *)(gen_frame + 0x24)) = param_1 + 6;
        (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)0x0;
        (*(int * PTR32 *)(gen_frame + 0x28)) = piVar5 + 0x5ac;
        do {
          iVar2 = *(*(int * PTR32 *)(gen_frame + 0x24));
          iVar3 = (*(int * PTR32 *)(gen_frame + 0x24))[1];
          (*(int *)(gen_frame + 0x1c)) = iVar3;
          (*(int *)(gen_frame + 0x18)) = iVar2;
          if ((*(*(int * PTR32 *)(gen_frame + 0x28)) != iVar2) || (piVar6 = (*(int * PTR32 *)(gen_frame + 0x20)), (*(int * PTR32 *)(gen_frame + 0x28))[1] != iVar3)) {
            F_00aa80c0(piVar5,(*(int * PTR32 *)(gen_frame + 0x20)),iVar2,iVar3);
            piVar6 = (*(int * PTR32 *)(gen_frame + 0x20));
          }
          (*(int * PTR32 *)(gen_frame + 0x28)) = (*(int * PTR32 *)(gen_frame + 0x28)) + 0x1e8;
          (*(int * PTR32 *)(gen_frame + 0x24)) = (*(int * PTR32 *)(gen_frame + 0x24)) + 2;
          (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)((int)piVar6 + 1U);
        } while ((int)piVar6 + 1U < 3);
        (*(int * PTR32 *)(gen_frame + 0x24)) = param_1 + 0xc;
        (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)0x0;
        piVar8 = piVar5 + 0xb64;
        do {
          piVar6 = (*(int * PTR32 *)(gen_frame + 0x20));
          if (*piVar8 != *(*(int * PTR32 *)(gen_frame + 0x24))) {
            F_00aa2260(piVar5,(*(int * PTR32 *)(gen_frame + 0x20)),*(*(int * PTR32 *)(gen_frame + 0x24)));
            piVar6 = (*(int * PTR32 *)(gen_frame + 0x20));
          }
          (*(int * PTR32 *)(gen_frame + 0x24)) = (*(int * PTR32 *)(gen_frame + 0x24)) + 1;
          piVar6 = (int *)((int)piVar6 + 1);
          piVar8 = piVar8 + 1;
          (*(int * PTR32 *)(gen_frame + 0x20)) = piVar6;
        } while (piVar6 < &REFG(undefined, 0xa));
      }
    }
  }
  else if (piVar6 == (int *)0x3) {
    piVar6 = (int *)*param_1;
    if (piVar6 != (int *)0xe0000000) {
      piVar5 = (int *)F_00a354d0(&REFG(undefined4, 0x14a31f0),piVar6,param_1[1]);
      piVar6 = (int *)0x0;
      if (piVar5 != (int *)0x0) {
        pcVar1 = *(gen_code32 *)(*piVar5 + 0x3c);
        (*(int *)(gen_frame + 0x10)) = param_1[0x16];
        (*(undefined4 *)(gen_frame + 0x14)) = param_1[0x17];
        (*(int *)(gen_frame + 0x18)) = param_1[0x18];
        (*pcVar1)(piVar5,&(*(int *)(gen_frame + 0x10)));
        ((code *)*(gen_code32 *)(*piVar5 + 0x48))(piVar5,param_1[0x19]);
        ((code *)*(gen_code32 *)(*piVar5 + 0x24))(piVar5,1,0);
        piVar6 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0x24))(piVar5,2,0)));
        if ((*(char *)((int)param_1 + 0x83) != '\0') &&
           (piVar6 = (int *)(uint)*(ushort *)((int)piVar5 + 0x18a), (int *)param_1[0x1b] != piVar6))
        {
          uVar7 = F_00ae2030(piVar5,(uint)*(ushort *)(param_1 + 0x1b));
          return uVar7;
        }
      }
    }
  }
  else if (piVar6 == (int *)0x1) {
    (*(char *)(gen_frame + 0x2f)) = REFG(char, 0x14a737d);
    (*(char *)(gen_frame + 0x2e)) = *((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1488344) + 0x7a8)));
    uVar7 = F_006d9fd0(REFG(void * PTR32, 0x1488344));
    (*(bool *)(gen_frame + 0x2d)) = uVar7 == 0x3d;
    uVar7 = F_006d9f90(this);
    piVar6 = REFG(int * PTR32, 0x1379694);
    (*(bool *)(gen_frame + 0x2c)) = uVar7 == 0xf;
    if (((*(char *)((int)param_1 + 0x7e) != '\0') && (F_00a9fa00(REFG(int * PTR32, 0x1379694)), (*(char *)(gen_frame + 0x2f)) == '\0'))
       && ((*(char *)(gen_frame + 0x2e)) == '\0')) {
      F_00a9f980(piVar6,GEN_TOF(gen_bits2f(param_1[0x16])),GEN_TOF(gen_bits2f(param_1[0x17])),GEN_TOF(gen_bits2f(param_1[0x18])),GEN_TOF(gen_bits2f(piVar6[0x2c])),0);
    }
    if (((*(char *)((int)param_1 + 0x7f) != '\0') && ((*(char *)(gen_frame + 0x2f)) == '\0')) && ((*(char *)(gen_frame + 0x2e)) == '\0')) {
      ((code *)*(gen_code32 *)(*piVar6 + 0x48))(piVar6,param_1[0x19]);
    }
    if (*(char *)(param_1 + 0x20) != '\0') {
      F_00aa0560(piVar6,param_1[0x1a]);
    }
    if (((*(char *)((int)param_1 + 0x82) != '\0') && ((*(bool *)(gen_frame + 0x2d)) == false)) && ((*(bool *)(gen_frame + 0x2c)) == false)) {
      F_00aa2cc0(piVar6,0);
    }
    if (((*(char *)((int)param_1 + 0x81) != '\0') && ((*(bool *)(gen_frame + 0x2d)) == false)) && ((*(bool *)(gen_frame + 0x2c)) == false)) {
      F_00aa3410(piVar6,0xffffffff);
    }
    if (*(char *)(param_1 + 0x21) != '\0') {
      (*(int * PTR32 *)(gen_frame + 0x20)) = param_1 + 6;
      (*(int * PTR32 *)(gen_frame + 0x24)) = (int *)0x0;
      (*(int * PTR32 *)(gen_frame + 0x28)) = piVar6 + 0x5ac;
      do {
        iVar2 = *(*(int * PTR32 *)(gen_frame + 0x20));
        iVar3 = (*(int * PTR32 *)(gen_frame + 0x20))[1];
        (*(int *)(gen_frame + 0x1c)) = iVar3;
        (*(int *)(gen_frame + 0x18)) = iVar2;
        if ((*(*(int * PTR32 *)(gen_frame + 0x28)) != iVar2) || (piVar5 = (*(int * PTR32 *)(gen_frame + 0x24)), (*(int * PTR32 *)(gen_frame + 0x28))[1] != iVar3)) {
          F_00aa80c0(piVar6,(*(int * PTR32 *)(gen_frame + 0x24)),iVar2,iVar3);
          piVar5 = (*(int * PTR32 *)(gen_frame + 0x24));
        }
        (*(int * PTR32 *)(gen_frame + 0x28)) = (*(int * PTR32 *)(gen_frame + 0x28)) + 0x1e8;
        (*(int * PTR32 *)(gen_frame + 0x20)) = (*(int * PTR32 *)(gen_frame + 0x20)) + 2;
        (*(int * PTR32 *)(gen_frame + 0x24)) = (int *)((int)piVar5 + 1U);
      } while ((int)piVar5 + 1U < 3);
      (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)0x0;
      (*(int * PTR32 *)(gen_frame + 0x24)) = param_1 + 0xc;
      (*(int * PTR32 *)(gen_frame + 0x28)) = piVar6 + 0xb64;
      do {
        piVar5 = (*(int * PTR32 *)(gen_frame + 0x20));
        if (*(*(int * PTR32 *)(gen_frame + 0x28)) != *(*(int * PTR32 *)(gen_frame + 0x24))) {
          F_00aa2260(piVar6,(*(int * PTR32 *)(gen_frame + 0x20)),*(*(int * PTR32 *)(gen_frame + 0x24)));
          piVar5 = (*(int * PTR32 *)(gen_frame + 0x20));
        }
        (*(int * PTR32 *)(gen_frame + 0x28)) = (*(int * PTR32 *)(gen_frame + 0x28)) + 1;
        (*(int * PTR32 *)(gen_frame + 0x24)) = (*(int * PTR32 *)(gen_frame + 0x24)) + 1;
        (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)((int)piVar5 + 1U);
      } while ((int)piVar5 + 1U < 10);
    }
    F_00a7ef20(&REFG(undefined1, 0x14ab058),(uint)*(byte *)((int)param_1 + 0x7d),0,0);
    fVar4 = (float10)*(double *)&REFG(undefined, 0x108bec8);
    *(undefined1 *)(piVar6 + 0xbaf) = 0;
    (*(int * PTR32 *)(gen_frame + 0x20)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)1 - fVar4))));
    F_00aa0980(piVar6,(float)((float10)1 - fVar4),0);
    pcVar1 = *(gen_code32 *)(*piVar6 + 0x24);
    piVar6[0xbb2] = GEN_FLT_TO(piVar6[0xbb2], REFG(float, 0x10b9490));
    *(undefined1 *)((int)piVar6 + 0x2ea7) = 1;
    (*pcVar1)(piVar6,1,0);
    ((code *)*(gen_code32 *)(*piVar6 + 0x24))(piVar6,2,0);
    ((code *)*(gen_code32 *)(*piVar6 + 0x54))(piVar6,0);
    uVar7 = F_00aa0600(piVar6,0);
    return uVar7;
  }
  return (uint)piVar6;
}

/* ref: Client::Game::Event::EventSceneModuleCommonImpl::vf124 */
uint F_006dad20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6dad20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  
  F_00a02210(((byte *)(gen_frame + 0x4)),param_1);
  uVar3 = F_00a01d20(((byte *)(gen_frame + 0x4)),1);
  piVar4 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),1,uVar3);
  (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)(*piVar4 + 4);
  uVar3 = F_00b9c9b0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),2);
  bVar2 = F_00a01e10(((byte *)(gen_frame + 0x4)),3);
  iVar1 = *(int *)(this + 4);
  if (uVar3 < 7) {
    F_006d7550(&(*(int *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)));
    if ((*(int *)(gen_frame + 0x24)) != *(int *)(iVar1 + 0x30)) {
      *(byte *)((*(int *)(gen_frame + 0x24)) + 0x7e + uVar3) = bVar2;
    }
  }
  if (uVar3 == 0) {
    iVar1 = *(int *)(this + 4);
    F_006d7550(&(*(int *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)));
    if ((*(int *)(gen_frame + 0x24)) != *(int *)(iVar1 + 0x30)) {
      *(byte *)((*(int *)(gen_frame + 0x24)) + 0x7f) = bVar2;
    }
  }
  F_00a02240(((byte *)(gen_frame + 0x4)));
  return 0;
}

/* ref: Client::Game::Event::EventSceneModuleUsualImpl::vf119 */
uint F_006dadd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6dadd0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  float10 fVar7;
  float10 fVar8;
  
  F_00a02210(((undefined1 *)(gen_frame + 0x8)),param_2);
  uVar4 = F_00a01d20(((undefined1 *)(gen_frame + 0x8)),1);
  piVar5 = (int *)F_00b9c710((*(undefined4 *)(gen_frame + 0x10)),1,uVar4);
  uVar1 = *(undefined4 *)(*piVar5 + 0x60);
  uVar4 = F_00a019d0(((undefined1 *)(gen_frame + 0x8)));
  if (uVar4 == 1) {
LAB_006daeff: ;
    fVar7 = (float10)0;
    fVar8 = fVar7;
  }
  else {
    bVar3 = F_00a01f20(((undefined1 *)(gen_frame + 0x8)),2);
    if (bVar3 != 0) goto LAB_006daeff;
    bVar3 = F_00a01f40(((undefined1 *)(gen_frame + 0x8)),2);
    if (bVar3 == 0) {
      uVar4 = F_00a01d20(((undefined1 *)(gen_frame + 0x8)),2);
      piVar5 = (int *)F_00b9c710((*(undefined4 *)(gen_frame + 0x10)),2,uVar4);
      iVar2 = *piVar5;
      uVar4 = param_2 >> 8;
      param_2 = param_2 & 0xffffff00;
      uVar6 = F_00a019d0(((undefined1 *)(gen_frame + 0x8)));
      if (2 < (int)uVar6) {
        bVar3 = F_00a01f40(((undefined1 *)(gen_frame + 0x8)),3);
        if (bVar3 != 0) {
          uVar6 = F_00b9c9b0((*(undefined4 *)(gen_frame + 0x10)),3);
          param_2 = CONCAT31((int3)uVar4,uVar6 != 0);
        }
      }
      if (iVar2 != 0) {
        F_006da750(*(undefined * PTR32 *)(param_1 + 4),uVar1,*(undefined4 *)(iVar2 + 4),param_2);
        F_00a02240(((undefined1 *)(gen_frame + 0x8)));
        return 0;
      }
      goto LAB_006daf1a;
    }
    fVar7 = F_00a01dd0(((undefined1 *)(gen_frame + 0x8)),2);
    (*(float *)(gen_frame + 0x28)) = (float)fVar7;
    fVar8 = F_00a01dd0(((undefined1 *)(gen_frame + 0x8)),3);
    fVar7 = (float10)((float)GEN_TOF((((float10)*(double *)&REFG(undefined, 0x1080228) * (float10)(*(float *)(gen_frame + 0x28))) /
                            (float10)*(double *)&REFG(undefined, 0x1080220))));
    fVar8 = ((float10)(float)fVar8 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
            (float10)*(double *)&REFG(undefined, 0x1080220);
  }
  F_00aa5250(uVar1,(float)fVar7,(float)fVar8,(float)(float10)0,0xffffffff,0);
LAB_006daf1a: ;
  F_00a02240(((undefined1 *)(gen_frame + 0x8)));
  return 0;
}

/* ref: FUN_006daf30 */
uint F_006daf30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6daf30u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int * this_00;
  uint uVar1;
  int * piVar2;
  uint in_ecx;
  
  uVar1 = (*(uint *)&gen_args[1]);
  this_00 = REFG(int * PTR32, 0x1379694);
  if ((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) & 0x400) == 0) {
    F_006d7550(&(*(uint *)&gen_args[1]),REFG(int * PTR32, 0x1379694));
    in_ecx = (*(uint *)&gen_args[1]);
    if ((*(uint *)&gen_args[1]) != *(uint *)(uVar1 + 0x30)) {
      *(undefined1 *)((*(uint *)&gen_args[1]) + 0x84) = 0;
    }
  }
  else {
    F_00a4a760(&REFG(undefined, 0x14a7360),0x13,1);
    ((code *)*(gen_code32 *)(*this_00 + 0x54))(this_00,1);
    uVar1 = (*(uint *)&gen_args[1]);
    F_006d7550(&(*(uint *)&gen_args[1]),this_00);
    if ((*(uint *)&gen_args[1]) != *(uint *)(uVar1 + 0x30)) {
      *(undefined1 *)((*(uint *)&gen_args[1]) + 0x84) = 1;
    }
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    in_ecx = 0;
    if (piVar2 != (int *)0x0) {
      in_ecx = ((code *)*(gen_code32 *)(*piVar2 + 0x20))(piVar2);
      F_0043d840(in_ecx);
    }
  }
  if ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) & 2) != 0) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    in_ecx = ((code *)*(gen_code32 *)(*piVar2 + 0xa8))(piVar2,0,0x1e,1);
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x11))) = 1;
  }
  if (this_00 != (int *)0x0) {
    in_ecx = F_00aa0f60(this_00,1);
  }
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = 1;
  return in_ecx;
}

/* ref: FUN_006db050 */
uint F_006db050(unsigned int gen_a0)
{
  GEN_ENTER(0x6db050u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  byte bVar2;
  int iVar3;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  if (*(int *)(REFG(int, 0x1488344) + 0x224) == 0) {
    if (*(int *)(REFG(int, 0x1488344) + 0x238) == 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = *(byte *)(REFG(int, 0x1488344) + 0x248);
    }
  }
  else {
    uVar1 = *(uint *)(REFG(int, 0x1488344) + 0x220);
    if (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x214) == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = **(int * PTR32 *)(REFG(int, 0x1488344) + 0x214);
    }
    if (*(uint *)(iVar3 + 8) <= uVar1) {
      uVar1 = uVar1 - *(uint *)(iVar3 + 8);
    }
    bVar2 = *((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar1 * 4))) + 0x18)));
  }
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)bVar2);
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: Client::Game::Event::LuaActorModule::vf2 */
uint F_006db0f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6db0f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  
  piVar6 = ((int *)GEN_TOP(**(int * PTR32 *)(this + 0x30)));
  if (piVar6 != *(int * PTR32 *)(this + 0x30)) {
    do {
      puVar2 = (undefined4 *)piVar6[6];
      if (puVar2 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
        piVar6[6] = 0;
      }
      if (*(char *)((int)piVar6 + 0x21) == '\0') {
        piVar3 = (int *)piVar6[2];
        if (*(char *)((int)piVar3 + 0x21) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x21);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x21);
            piVar6 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar6[1] + 0x21);
          piVar4 = (int *)piVar6[1];
          piVar3 = piVar6;
          while ((piVar6 = piVar4, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
            cVar1 = *(char *)(piVar6[1] + 0x21);
            piVar4 = (int *)piVar6[1];
            piVar3 = piVar6;
          }
        }
      }
    } while (piVar6 != *(int * PTR32 *)(this + 0x30));
  }
  uVar5 = F_00743730(this + 0x2c);
  this[0x24] = (undefined1)0x0;
  return uVar5;
}

/* ref: FUN_006db170 */
uint F_006db170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6db170u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  undefined * pvVar2;
  undefined * PTR32 * ppvVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  pvVar2 = (undefined *)F_007325b0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))),&(*(uint *)&gen_args[1]));
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar2;
  if (pvVar2 != pvVar1) {
    if ((*(uint *)((int)pvVar2 + 0x14) <= (*(undefined * PTR32 *)&gen_args[2])) &&
       (((*(undefined * PTR32 *)&gen_args[2]) != (undefined *)*(uint *)((int)pvVar2 + 0x14) ||
        (*(uint *)((int)pvVar2 + 0x10) <= (*(uint *)&gen_args[1]))))) {
      ppvVar3 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
      goto LAB_006db1ab;
    }
  }
  (*(undefined * PTR32 *)&gen_args[2]) = pvVar1;
  ppvVar3 = &(*(undefined * PTR32 *)&gen_args[2]);
LAB_006db1ab: ;
  if (*ppvVar3 != pvVar1) {
    return *(uint *)((int)*ppvVar3 + 0x18);
  }
  return 0;
}

/* ref: Client::Game::Event::EventHandler::vf6 */
byte F_006db1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6db1d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 EVar1;
  uint uVar2;
  int iVar3;
  
  this[0x44] = (undefined1)0x1;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = param_1;
  if (*(int *)(REFG(int, 0x1488344) + 0x224) == 0) {
    this[0x4c] = (undefined1)0x0;
    return 0;
  }
  uVar2 = *(uint *)(REFG(int, 0x1488344) + 0x220);
  if (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x214) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int * PTR32 *)(REFG(int, 0x1488344) + 0x214);
  }
  if (*(uint *)(iVar3 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(iVar3 + 8);
  }
  EVar1 = *((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar2 * 4))) + 0x20)));
  this[0x4c] = EVar1;
  return (byte)EVar1;
}

/* ref: Client::Game::Event::EventHandler::vf8 */
byte F_006db230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6db230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined1 EVar1;
  uint uVar2;
  int iVar3;
  
  this[0x44] = (undefined1)0x2;
  *(uint *)(this + 0x48) = (uint)(byte)param_2;
  *(undefined4 *)(this + 0x50) = param_1;
  if (*(int *)(REFG(int, 0x1488344) + 0x224) == 0) {
    this[0x4c] = (undefined1)0x0;
    return 0;
  }
  uVar2 = *(uint *)(REFG(int, 0x1488344) + 0x220);
  if (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x214) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int * PTR32 *)(REFG(int, 0x1488344) + 0x214);
  }
  if (*(uint *)(iVar3 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(iVar3 + 8);
  }
  EVar1 = *((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar2 * 4))) + 0x20)));
  this[0x4c] = EVar1;
  return (byte)EVar1;
}

/* ref: Client::Game::Event::EventHandler::vf10 */
byte F_006db290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6db290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 EVar1;
  uint uVar2;
  int iVar3;
  
  this[0x44] = (undefined1)0x3;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = param_1;
  if (*(int *)(REFG(int, 0x1488344) + 0x224) == 0) {
    this[0x4c] = (undefined1)0x0;
    return 0;
  }
  uVar2 = *(uint *)(REFG(int, 0x1488344) + 0x220);
  if (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x214) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int * PTR32 *)(REFG(int, 0x1488344) + 0x214);
  }
  if (*(uint *)(iVar3 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(iVar3 + 8);
  }
  EVar1 = *((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar2 * 4))) + 0x20)));
  this[0x4c] = EVar1;
  return (byte)EVar1;
}

/* ref: Client::Game::Event::EventHandler::vf12 */
byte F_006db2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6db2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 EVar1;
  uint uVar2;
  int iVar3;
  
  this[0x44] = (undefined1)0x4;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = param_1;
  if (*(int *)(REFG(int, 0x1488344) + 0x224) == 0) {
    this[0x4c] = (undefined1)0x0;
    return 0;
  }
  uVar2 = *(uint *)(REFG(int, 0x1488344) + 0x220);
  if (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x214) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int * PTR32 *)(REFG(int, 0x1488344) + 0x214);
  }
  if (*(uint *)(iVar3 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(iVar3 + 8);
  }
  EVar1 = *((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar2 * 4))) + 0x20)));
  this[0x4c] = EVar1;
  return (byte)EVar1;
}

/* ref: Client::Game::Event::EventHandler::vf14 */
byte F_006db350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6db350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined1 EVar1;
  uint uVar2;
  int iVar3;
  
  this[0x44] = (undefined1)0xa;
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x50) = REFG(undefined4, 0x1379694);
  if (*(int *)(REFG(int, 0x1488344) + 0x224) == 0) {
    this[0x4c] = (undefined1)0x0;
    return 0;
  }
  uVar2 = *(uint *)(REFG(int, 0x1488344) + 0x220);
  if (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x214) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int * PTR32 *)(REFG(int, 0x1488344) + 0x214);
  }
  if (*(uint *)(iVar3 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(iVar3 + 8);
  }
  EVar1 = *((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar2 * 4))) + 0x20)));
  this[0x4c] = EVar1;
  return (byte)EVar1;
}

/* ref: Client::Game::Event::EventHandler::vf16 */
byte F_006db3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6db3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined1 EVar1;
  uint uVar2;
  int iVar3;
  
  this[0x44] = (undefined1)0xb;
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x50) = REFG(undefined4, 0x1379694);
  if (*(int *)(REFG(int, 0x1488344) + 0x224) == 0) {
    this[0x4c] = (undefined1)0x0;
    return 0;
  }
  uVar2 = *(uint *)(REFG(int, 0x1488344) + 0x220);
  if (*(int * PTR32 *)(REFG(int, 0x1488344) + 0x214) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int * PTR32 *)(REFG(int, 0x1488344) + 0x214);
  }
  if (*(uint *)(iVar3 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(iVar3 + 8);
  }
  EVar1 = *((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar2 * 4))) + 0x20)));
  this[0x4c] = EVar1;
  return (byte)EVar1;
}

