#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_007605d0 */
uint F_007605d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7605d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00ab25a0(param_1);
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      if ('\0' < *(char *)(uVar1 + 4 + uVar2)) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 0xe);
  }
  return 0xffffffff;
}

/* ref: FUN_00760600 */
uint F_00760600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x760600u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_2;
  if ((param_2 == 0) && (uVar1 = F_00ab24a0(param_1), uVar1 == 0)) {
    return 0xffffffff;
  }
  uVar1 = F_00ab25d0((uint)*(byte *)(uVar1 + 0xa1));
  if (uVar1 == 0) {
    return 0xffffffff;
  }
  return *(uint *)(uVar1 + 4);
}

/* ref: FUN_00760640 */
uint F_00760640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x760640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  ushort uVar1;
  uint uVar2;
  undefined * this;
  
  if ((param_2 == (undefined *)0x0) ||
     ((*(char *)((int)param_2 + 6) == '\0' && (*(int *)((int)param_2 + 8) == 0)))) {
    return 0;
  }
  if ((char)param_1 == '\0') {
    uVar2 = F_00a3a8a0(param_2);
    return (uVar2 < param_3) + 4;
  }
  if ((*(char *)((int)param_2 + 6) == '\0') || (uVar2 = F_00a3a860(param_2), uVar2 == 0)) {
    uVar1 = *(ushort *)((int)param_2 + 0x12);
  }
  else {
    this = (undefined *)F_00a3a860(param_2);
    uVar1 = F_00906d60(this);
  }
  if (uVar1 != 0) {
    uVar1 = F_0071d210(param_2);
    return 2 - (uVar1 < 10000);
  }
  return 3;
}

/* ref: FUN_007606c0 */
uint F_007606c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7606c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if (((char)param_1 != '\0') && (uVar1 = F_00a35d00(param_2), uVar1 != 1)) {
    if (uVar1 == 2) {
      return 9;
    }
    return 8;
  }
  return 7;
}

/* ref: FUN_00760700 */
uint F_00760700(unsigned int gen_a0)
{
  GEN_ENTER(0x760700u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint * puVar1;
  
  puVar1 = (uint *)F_00ab3c60(param_1 & 0xff);
  if (puVar1 != (uint *)0x0) {
    return *puVar1;
  }
  return 0;
}

/* ref: FUN_00760720 */
uint F_00760720(unsigned int gen_a0)
{
  GEN_ENTER(0x760720u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  int iVar2;
  
  if ((param_1 != 0) && (uVar1 = F_00a62220(param_1), (char)uVar1 != '\0')) {
    iVar2 = *(byte *)(param_1 + 0x2ecd) - 1;
    if ((*(byte *)(param_1 + 0x2dd2) & 1) != 0) {
      switch((unsigned int)(uintptr_t)(iVar2)) {
      case 0: ;
        return 0xf10e;
      case 1: ;
        return 0xf110;
      case 2: ;
        return 0xf10c;
      case 3: ;
      case 4: ;
        return 0xf10d;
      case 5: ;
        return 0xf10f;
      default: ;
        return 0xf10b;
      }
    }
    switch((unsigned int)(uintptr_t)(iVar2)) {
    case 0: ;
      return 0xf108;
    case 1: ;
      return 0xf10a;
    case 2: ;
      return 0xf106;
    case 3: ;
    case 4: ;
      return 0xf107;
    case 5: ;
      return 0xf109;
    default: ;
      return 0xf105;
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00760800 */
uint F_00760800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x760800u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * this_00;
  uint uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if ((char)param_4 == '\0') {
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x7f3;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x23184) + 0x18))))
                                (*(int * PTR32 *)((int)this + 0x23184))));
    uVar1 = F_0043bd00(this_00,uVar3,uVar4,uVar5);
  }
  else {
    if ((char)param_3 != '\0') {
      uVar1 = F_0042ce40(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x10bf77c));
      F_0042ccf0(param_1,uVar1);
      uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
      return (uint)uVar2;
    }
    uVar1 = F_00435340(param_2);
  }
  uVar1 = F_0042e430(param_1,uVar1);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: FUN_007608a0 */
byte F_007608a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7608a0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  if (param_1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
    if (uVar2 == 1) {
      bVar1 = F_00a9f620(param_1);
      if (bVar1 == 0) {
        bVar1 = F_00a620a0();
        if (bVar1 != 0) {
          uVar2 = F_00a62220(param_1);
          if ((char)uVar2 != '\0') {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_007608f0 */
byte F_007608f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7608f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  cVar3 = REFG(char, 0x14ab2dc);
  if (param_2 != 0) {
    uVar2 = F_00a62220(param_2);
    if (((char)uVar2 != '\0') && (bVar1 = F_00a9f620(param_2), bVar1 == 0)) {
      if (cVar3 == '\0') {
        cVar3 = '\x01';
      }
      else {
        bVar4 = cVar3 == '\x01';
        cVar3 = -1;
        if (bVar4) {
          cVar3 = '\0';
        }
      }
    }
    if (cVar3 == '\0') {
      uVar5 = 0xda2;
    }
    else {
      if (cVar3 != '\x01') goto LAB_0076097c;
      uVar5 = 0xda3;
    }
    uVar6 = 0;
    uVar7 = uVar6;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x23184) + 0x18))))
                                (*(int * PTR32 *)((int)this + 0x23184))));
    uVar2 = F_0043bd00(this_00,uVar5,uVar6,uVar7);
    F_0042e430(param_1,uVar2);
    return 1;
  }
LAB_0076097c: ;
  F_0042e430(param_1,&REFG(undefined, 0x10bda96));
  return 0;
}

/* ref: FUN_007609a0 */
byte F_007609a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7609a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc);
  if (param_2 != 0) {
    F_00c49908(((undefined1 *)(gen_frame + 0x0)),6,param_2 + 0x166c);
    (*(undefined1 *)(gen_frame + 0x6)) = 0;
    F_0042e430(param_1,((undefined1 *)(gen_frame + 0x0)));
    F_00c47745((*(uint *)(gen_frame + 0x8)) ^ (uint)(uint)(gen_frame + 0xc));
    return 1;
  }
  F_0042e430(param_1,&REFG(undefined, 0x10bda97));
  F_00c47745((*(uint *)(gen_frame + 0x8)) ^ (uint)(uint)(gen_frame + 0xc));
  return 0;
}

/* ref: FUN_00760a10 */
uint F_00760a10(unsigned int gen_a0)
{
  GEN_ENTER(0x760a10u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  undefined * this;
  int * piVar4;
  
  piVar1 = REFG(int * PTR32, 0x1379694);
  uVar3 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 1: ;
    if (piVar1 == param_1) {
      return 1;
    }
    uVar3 = F_00a5f290(param_1);
    if ((*(byte *)(uVar3 + 0x2dd2) & 0x10) != 0) {
      return 2;
    }
    bVar2 = F_007608a0(uVar3);
    return (bVar2 != 0) + 3;
  case 2: ;
    break;
  case 3: ;
    return 0xb;
  default: ;
    return 0;
  case 9: ;
    return 0xc;
  }
  this = (undefined *)F_00a5f290(param_1);
  if (*(char *)((int)this + 0x188) == '\x02') {
    return 6;
  }
  bVar2 = F_00a62270(this);
  if (bVar2 == 0) {
    uVar3 = F_00a64450(&REFG(undefined, 0x14a9a18),*(undefined4 *)((int)this + 0x2ed8));
    if ((uVar3 == 0) || (bVar2 = F_007608a0(uVar3), bVar2 == 0)) {
      if ((*(byte *)((int)this + 0x2dd2) & 2) == 0) {
        return 5;
      }
      bVar2 = F_00a9fd60(this);
      if (bVar2 == 0) {
        bVar2 = F_00a9fdb0(this);
        return 9 - (bVar2 != 0);
      }
    }
    return 7;
  }
  piVar4 = (int *)F_00a35490(&REFG(undefined4, 0x14a31f0),*(undefined4 *)((int)this + 0x2ed8));
  bVar2 = F_0054c430(this);
  if (bVar2 != 0) {
    return (uint)(piVar4 != piVar1) * 2 + 0xd;
  }
  bVar2 = F_0054c460(this);
  if (bVar2 != 0) {
    return (uint)(piVar4 != piVar1) * 2 + 0xe;
  }
  return 10;
}

/* ref: FUN_00760b90 */
uint F_00760b90(unsigned int gen_a0)
{
  GEN_ENTER(0x760b90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x148a070) + param_1 * 8);
}

/* ref: FUN_00760bb0 */
ulonglong F_00760bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x760bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0xc: ;
  case 0xd: ;
  case 0xe: ;
  case 0x16: ;
  case 0x17: ;
  case 0x18: ;
  case 0x21: ;
  case 0x22: ;
  case 0x23: ;
    return 0xffe2ffe9ff005d2a;
  case 0x1a: ;
  case 0x1b: ;
  case 0x1d: ;
    return 0xffd4d4d4ff454545;
  }
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    return 0xffffffffff000000;
  case 1: ;
  case 2: ;
    return 0xfffff6e5ffa8383c;
  case 3: ;
    return 0xffbfbdffff0000a4;
  default: ;
    return 0;
  }
}

/* ref: FUN_00760c50 */
uint F_00760c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x760c50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
  case 1: ;
  case 2: ;
  case 8: ;
  case 10: ;
  case 0xb: ;
  case 0x12: ;
  case 0x1c: ;
    break;
  case 3: ;
  case 4: ;
  case 5: ;
  case 6: ;
  case 9: ;
  case 0x10: ;
  case 0x19: ;
  case 0x1a: ;
  case 0x1b: ;
  case 0x1d: ;
  case 0x1f: ;
  case 0x20: ;
  case 0x24: ;
    return 0xff454545;
  case 7: ;
  case 0xc: ;
  case 0xd: ;
  case 0xe: ;
  case 0x13: ;
  case 0x16: ;
  case 0x17: ;
  case 0x18: ;
  case 0x21: ;
  case 0x22: ;
  case 0x23: ;
    return 0xff005d2a;
  default: ;
    return 0;
  case 0x11: ;
    return 0xffb57c09;
  case 0x14: ;
    return 0xffb98700;
  case 0x15: ;
    return 0xff0681b5;
  case 0x1e: ;
    return 0xff0061e3;
  }
  if (((param_3 != 0) && (param_3 != 1)) && (param_3 != 2)) {
    return (param_3 != 3) - 1 & 0xff0061e3;
  }
  return 0xff00008a;
}

/* ref: FUN_00760d10 */
uint F_00760d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x760d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined * this_00;
  undefined * pvVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)((int)this + 0x292d0);
  iVar3 = 0x12;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 0x1c;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = *(int *)((int)param_1 + 0xc);
  pvVar2 = param_1;
  if (0 < iVar3) {
    iVar4 = 0;
    do {
      this_00 = (undefined *)F_00a37da0(param_1,iVar4);
      pvVar2 = (undefined *)0x0;
      if (this_00 != (undefined *)0x0) {
        if (*(char *)((int)this_00 + 6) == '\0') {
          pvVar2 = *(undefined * PTR32 *)((int)this_00 + 8);
          if ((*(byte *)((int)this_00 + 0x14) & 1) != 0) {
            pvVar2 = (undefined *)((int)pvVar2 + 1000000);
          }
        }
        else {
          pvVar2 = (undefined *)F_00a3a860(this_00);
          pvVar2 = (undefined *)F_0046e5e0(pvVar2);
        }
        if ((int)pvVar2 - 2U < 0x12) {
          pvVar2 = ((undefined *)GEN_TOP((((int)pvVar2 - 2U) * 0x70)));
          *(undefined * PTR32 *)((int)pvVar2 + 0x292d0U + (int)this) = this_00;
          *(int *)((int)pvVar2 + 0x292d4U + (int)this) = iVar4;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  return (uint)pvVar2;
}

/* ref: Client::UI2::RaptureAtkModule::ItemCache::vf1 */
uint F_00760da0(unsigned int gen_a0)
{
  GEN_ENTER(0x760da0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(this + 0x58) != 0) {
    *(undefined4 *)(this + 0x58) = 0;
    *(undefined2 *)(this + 100) = 0;
    *(undefined4 *)(this + 0x5c) = 0xffffffff;
    *(undefined4 *)(this + 0x60) = 0;
    uVar1 = F_0042ccf0(this + 4,&REFG(undefined * PTR32, 0x12fd328));
  }
  return uVar1;
}

/* ref: Client::UI2::RaptureAtkModule::ItemCache::vf2 */
uint F_00760dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x760dd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = F_00ab6240(param_1,0,param_2);
  F_0042e430(this + 4,uVar1);
  uVar1 = F_00ab65a0(param_1,param_2);
  *(uint *)(this + 0x5c) = uVar1;
  this[100] = *(undefined *)(param_2 + 0xa6);
  this[0x66] = *(undefined *)(param_2 + 0x9f);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_2 + 0x28);
  if (*(char *)(param_2 + 0xa0) == '\x0f') {
    this[0x65] = *(undefined *)(param_2 + 0x2c);
  }
  else if (*(char *)(param_2 + 0xba) != '\0') {
    this[0x65] = (undefined1)0xff;
  }
  if (**(char * PTR32 *)(this + 4) != '\0') {
    *(undefined4 *)(this + 0x58) = param_1;
  }
  return (uint)*(char * PTR32 *)(this + 4);
}

/* ref: FUN_00760e50 */
byte F_00760e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x760e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  
  bVar1 = *(byte *)((int)this + 0x65);
  if (bVar1 == 0xff) {
    if (*(char *)((int)param_1 + 6) != '\0') {
      uVar2 = F_00a3a860(param_1);
      if (uVar2 != 0) {
        this_00 = (undefined *)F_00a3a860(param_1);
        bVar1 = F_0046e590(this_00);
        return bVar1;
      }
    }
    bVar1 = *(byte *)((int)param_1 + 0x2f);
  }
  return bVar1;
}

/* ref: Client::UI2::RaptureAtkModule::InventoryCache::vf2 */
byte F_00760e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x760e90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined1 IVar1;
  byte bVar2;
  
  F_00760dd0((undefined *)this,param_1,param_2);
  bVar2 = F_00a6b6c0(param_2);
  this[0x6d] = (undefined1)((byte)this[0x6d] ^ ((byte)this[0x6d] ^ bVar2) & 1);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_2 + 0x3c);
  IVar1 = *(undefined *)(param_2 + 0x9e);
  this[0x6c] = IVar1;
  return (byte)IVar1;
}

/* ref: Client::UI2::RaptureAtkModule::InventoryCache::vf1 */
unsigned int F_00760ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x760ed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)(this + 0x58) != 0) {
    *(undefined4 *)(this + 0x58) = 0;
    *(undefined2 *)(this + 100) = 0;
    *(undefined4 *)(this + 0x5c) = 0xffffffff;
    *(undefined4 *)(this + 0x60) = 0;
    F_0042ccf0(this + 4,&REFG(undefined * PTR32, 0x12fd328));
    this[0x6d] = (undefined1)((byte)this[0x6d] & 0xfe);
    *(undefined4 *)(this + 0x68) = 0;
    this[0x6c] = (undefined1)0x0;
  }
  return 0;
}

/* ref: FUN_00760f10 */
uint F_00760f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x760f10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * this_00;
  uint uVar1;
  int iVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    *(undefined4 *)this = 9999;
    *(undefined2 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
    return 0;
  }
  *(undefined4 *)this = *param_1;
  *(undefined2 *)((int)this + 4) = *(undefined2 *)(param_1 + 1);
  if (*(char *)((int)param_1 + 6) != '\0') {
    this_00 = (undefined *)F_00a3a860(param_1);
    uVar1 = F_0046e5e0(this_00);
    *(uint *)((int)this + 8) = uVar1;
    *(uint *)((int)this + 0xc) = param_2;
    return param_2;
  }
  iVar2 = param_1[2];
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    iVar2 = iVar2 + 1000000;
  }
  *(int *)((int)this + 8) = iVar2;
  *(uint *)((int)this + 0xc) = param_2;
  return param_2;
}

/* ref: FUN_00760f80 */
uint F_00760f80(unsigned int gen_a0)
{
  GEN_ENTER(0x760f80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a3a150(&REFG(undefined, 0x14a4230),*(undefined4 *)this,(int)*(short *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00760fa0 */
uint F_00760fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x760fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined * this_00;
  undefined * pvVar5;
  undefined * pvVar6;
  undefined * this_01;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int * piVar11;
  uint * puVar12;
  int * piVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_10;
  
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this,7);
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,6)));
  local_30 = 0;
  local_34 = 0;
  local_1c = 0;
  local_2c = 0;
  local_38 = 0xfbc;
  do {
    local_28 = 0;
    pvVar5 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),local_2c);
    piVar13 = *(int * PTR32 *)((int)this + local_38 + 0x2829c);
    if ((pvVar5 != (undefined *)0x0) && (piVar13 != (int *)0x0)) {
      iVar2 = *(int *)((int)pvVar5 + 0xc);
      local_24 = 0;
      if (0 < iVar2) {
        local_10 = local_34 * 4 + 0xc;
        local_34 = local_34 + iVar2 * 5;
        do {
          pvVar6 = (undefined *)F_00a37da0(pvVar5,local_24);
          if (pvVar6 == (undefined *)0x0) {
LAB_00761257: ;
            ((code *)*(gen_code32 *)(*piVar13 + 4))(piVar13);
            if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + -0xc + local_10))) != 0) {
              *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + -0xc + local_10))) = 0;
              *(undefined1 *)(uVar4 + 0x1d) = 1;
            }
            if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + -4 + local_10))) != 0) {
              *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + -4 + local_10))) = 0;
              *(undefined1 *)(uVar4 + 0x1d) = 1;
            }
            if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + local_10))) != 0) {
              *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + local_10))) = 0;
              *(undefined1 *)(uVar4 + 0x1d) = 1;
            }
            if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4 + local_10))) != 0) {
              *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4 + local_10))) = 0;
              *(undefined1 *)(uVar4 + 0x1d) = 1;
            }
            uVar7 = F_0042a990(piVar13 + 1);
            if (uVar7 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + local_1c * 4)))) {
              *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + local_1c * 4))) = uVar7;
              *(undefined1 *)((int)this_00 + 0x1d) = 1;
            }
          }
          else {
            if (*(char *)((int)pvVar6 + 6) == '\0') {
              if (*(int *)((int)pvVar6 + 8) == 0) goto LAB_00761257;
              uVar7 = *(uint *)((int)pvVar6 + 8);
              if ((*(byte *)((int)pvVar6 + 0x14) & 1) != 0) {
                uVar7 = uVar7 + 1000000;
              }
            }
            else {
              this_01 = (undefined *)F_00a3a860(pvVar6);
              uVar7 = F_0046e5e0(this_01);
            }
            uVar8 = F_00a3a8a0(pvVar6);
            uVar9 = F_00a37c50(pvVar6);
            local_20 = 0;
            if (piVar13[0x16] != uVar7) {
              ((code *)*(gen_code32 *)(*piVar13 + 4))(piVar13);
              if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4 + local_10))) != 0) {
                *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4 + local_10))) = 0;
                *(undefined1 *)(uVar4 + 0x1d) = 1;
              }
              uVar10 = F_00ab24a0(uVar7);
              if (uVar10 != 0) {
                ((code *)*(gen_code32 *)(*piVar13 + 8))(piVar13,uVar7,uVar10);
              }
            }
            uVar10 = F_00760640((uint)*(byte *)(piVar13 + 0x19),pvVar6,piVar13[0x18]);
            local_18 = 7;
            if ((char)piVar13[0x19] != '\0') {
              uVar7 = F_00a35d00(uVar7);
              if (uVar7 == 1) {
                local_18 = 7;
              }
              else if (uVar7 == 2) {
                local_18 = 9;
              }
              else {
                local_18 = 8;
              }
            }
            bVar1 = *(byte *)((int)piVar13 + 0x65);
            uVar7 = (uint)bVar1;
            if (bVar1 != 0) {
              if (bVar1 == 0xff) {
                if ((*(char *)((int)pvVar6 + 6) == '\0') ||
                   (uVar7 = F_00a3a860(pvVar6), uVar7 == 0)) {
                  uVar7 = (uint)*(byte *)((int)pvVar6 + 0x2f);
                }
                else {
                  pvVar6 = (undefined *)F_00a3a860(pvVar6);
                  bVar3 = F_0046e590(pvVar6);
                  uVar7 = (uint)bVar3;
                }
              }
              piVar11 = (int *)F_00ab3c60(uVar7);
              if (piVar11 == (int *)0x0) {
                local_20 = 0;
              }
              else {
                local_20 = *piVar11;
              }
            }
            uVar7 = (uint)(bVar1 != 0) | local_20 * 2;
            if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4 + local_10))) != uVar7) {
              *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4 + local_10))) = uVar7;
              *(undefined1 *)(uVar4 + 0x1d) = 1;
            }
            if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + -0xc + local_10))) != piVar13[0x17]) {
              *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + -0xc + local_10))) = piVar13[0x17];
              *(undefined1 *)(uVar4 + 0x1d) = 1;
            }
            uVar7 = uVar8 << 0x10 | (uint)*(byte *)(piVar13 + 0x19);
            if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + -4 + local_10))) != uVar7) {
              *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + -4 + local_10))) = uVar7;
              *(undefined1 *)(uVar4 + 0x1d) = 1;
            }
            puVar12 = ((uint *)GEN_TOP((local_10 + *(int *)(uVar4 + 0x20))));
            uVar7 = *puVar12;
            uVar8 = ((((int)uVar7 >> 0x18 & 0xffU) << 8 | local_18) << 8 | (uint)(uVar9 != 0)) << 8
                    | uVar10 & 0xff;
            if (uVar7 != uVar8) {
              *puVar12 = uVar8;
              *(undefined1 *)(uVar4 + 0x1d) = 1;
            }
            uVar7 = F_0042a990(piVar13 + 1);
            if (uVar7 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + local_1c * 4)))) {
              *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + local_1c * 4))) = uVar7;
              *(undefined1 *)((int)this_00 + 0x1d) = 1;
            }
            local_30 = local_30 + 1;
            local_28 = local_28 + 1;
          }
          local_10 = local_10 + 0x14;
          local_1c = local_1c + 1;
          local_24 = local_24 + 1;
          piVar13 = piVar13 + 0x1c;
        } while (local_24 < iVar2);
      }
    }
    if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + local_38))) != local_28) {
      *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + local_38))) = local_28;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
    uVar17 = 0;
    uVar15 = 1;
    uVar14 = 0;
    uVar7 = F_004352e0(local_28);
    F_00431250(this_00,local_2c + 0x119,uVar7,uVar14,uVar15,uVar17);
    local_38 = local_38 + 4;
    local_2c = local_2c + 1;
    if (0xfc8 < local_38) {
      if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0xfb8))) != local_30) {
        *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0xfb8))) = local_30;
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      uVar14 = *(undefined4 *)((int)this + 0x2db50);
      uVar18 = 0;
      uVar16 = 1;
      uVar17 = 0;
      uVar15 = 0x7fc;
      pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x23184) + 0x18))))
                                 (*(int * PTR32 *)((int)this + 0x23184))));
      uVar4 = F_00461c60(pvVar5,uVar15,local_30,uVar14);
      uVar4 = F_00431250(this_00,0x10c,uVar4,uVar17,uVar16,uVar18);
      return uVar4;
    }
  } while( true );
}

/* ref: FUN_007613b0 */
uint F_007613b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7613b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  uint uVar2;
  undefined * this_00;
  undefined * pvVar3;
  undefined * this_01;
  uint uVar4;
  undefined * this_02;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int * piVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = 0;
  local_8 = 0;
  local_20 = 500;
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this,7);
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,6)));
  pvVar3 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),0x7d4);
  if ((pvVar3 != (undefined *)0x0) && (*(int *)((int)this + 0x29a48) != 0)) {
    local_8 = *(int *)((int)pvVar3 + 0xc);
    local_10 = 0;
    if (0 < local_8) {
      local_18 = 400;
      local_1c = 0;
      local_c = 0x7d8;
      do {
        piVar11 = ((int *)GEN_TOP((*(int *)((int)this + 0x29a48) + local_1c)));
        this_01 = (undefined *)F_00a37da0(pvVar3,local_10);
        if ((this_01 != (undefined *)0x0) &&
           ((*(char *)((int)this_01 + 6) != '\0' || (*(int *)((int)this_01 + 8) != 0)))) {
          uVar4 = F_00a3a8a0(this_01);
          if (*(char *)((int)this_01 + 6) == '\0') {
            uVar5 = *(uint *)((int)this_01 + 8);
            if ((*(byte *)((int)this_01 + 0x14) & 1) != 0) {
              uVar5 = uVar5 + 1000000;
            }
          }
          else {
            this_02 = (undefined *)F_00a3a860(this_01);
            uVar5 = F_0046e5e0(this_02);
          }
          uVar6 = F_00a37c50(this_01);
          if (piVar11[0x16] != uVar5) {
            ((code *)*(gen_code32 *)(*piVar11 + 4))(piVar11);
            uVar7 = F_00ab2510(uVar5);
            if (uVar7 != 0) {
              piVar11[0x17] = (uint)*(ushort *)(uVar7 + 0x1c);
              uVar8 = F_00ab64e0(uVar5,0,uVar7);
              F_0042e430(piVar11 + 1,uVar8);
              *(undefined1 *)(piVar11 + 0x19) = 0;
              piVar11[0x18] = (uint)*(byte *)(uVar7 + 0x20);
              if (*(char *)piVar11[1] != '\0') {
                piVar11[0x16] = uVar5;
              }
            }
          }
          if (*((int *)GEN_TOP((local_c + -8 + *(int *)(uVar2 + 0x20)))) != piVar11[0x17]) {
            *((int *)GEN_TOP((local_c + -8 + *(int *)(uVar2 + 0x20)))) = piVar11[0x17];
            *(undefined1 *)(uVar2 + 0x1d) = 1;
          }
          uVar4 = local_10 << 0x10 | uVar4;
          puVar1 = ((uint *)GEN_TOP((local_c + -4 + *(int *)(uVar2 + 0x20))));
          if (*puVar1 != uVar4) {
            *puVar1 = uVar4;
            *(undefined1 *)(uVar2 + 0x1d) = 1;
          }
          uVar4 = F_00760640((uint)*(byte *)(piVar11 + 0x19),this_01,piVar11[0x18]);
          uVar4 = uVar4 & 0xff | (uint)(uVar6 != 0) << 8;
          if (*((uint *)GEN_TOP((local_c + *(int *)(uVar2 + 0x20)))) != uVar4) {
            *((uint *)GEN_TOP((local_c + *(int *)(uVar2 + 0x20)))) = uVar4;
            *(undefined1 *)(uVar2 + 0x1d) = 1;
          }
          uVar4 = F_0042a990(piVar11 + 1);
          if (uVar4 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + local_18)))) {
            *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + local_18))) = uVar4;
            *(undefined1 *)((int)this_00 + 0x1d) = 1;
          }
          local_20 = local_20 + 3;
          local_c = local_c + 0xc;
          local_18 = local_18 + 4;
          local_14 = local_14 + 1;
        }
        local_1c = local_1c + 0x68;
        local_10 = local_10 + 1;
      } while (local_10 < local_8);
    }
  }
  if ((int)local_14 < local_8) {
    iVar9 = local_20 * 4;
    iVar10 = local_8 - local_14;
    do {
      if (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + iVar9))) != -1) {
        *((undefined4 *)GEN_TOP((*(int *)(uVar2 + 0x20) + iVar9))) = 0xffffffff;
        *(undefined1 *)(uVar2 + 0x1d) = 1;
      }
      iVar9 = iVar9 + 0xc;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  uVar4 = local_8 << 0x10 | local_14;
  if (uVar4 != *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0xed8)))) {
    uVar15 = 0;
    uVar14 = 1;
    uVar13 = 0;
    uVar12 = 0x7fc;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x23184) + 0x18))))
                               (*(int * PTR32 *)((int)this + 0x23184))));
    uVar5 = F_00461c60(pvVar3,uVar12,local_14,local_8);
    F_00431250(this_00,0x10d,uVar5,uVar13,uVar14,uVar15);
  }
  uVar5 = *(uint *)(uVar2 + 0x20);
  if (*(uint *)(uVar5 + 0xed8) != uVar4) {
    *(uint *)(uVar5 + 0xed8) = uVar4;
    *(undefined1 *)(uVar2 + 0x1d) = 1;
  }
  return uVar5;
}

/* ref: FUN_00761640 */
uint F_00761640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x761640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 * puVar7;
  int local_14;
  int local_10;
  int local_c;
  
  uVar2 = F_00a36f30(&REFG(undefined, 0x14a4230),0x7d1);
  uVar5 = 0;
  if (uVar2 != 0) {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this,7);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,6);
    F_00760d10(this,uVar2);
    local_10 = 2;
    local_14 = 1000;
    local_c = 0xee4;
    puVar7 = (undefined4 *)((int)this + 0x292d0);
    do {
      if (puVar7[-4] != local_10) {
        ((code *)*(gen_code32 *)(puVar7[-0x1a] + 4))(puVar7 + -0x1a);
        uVar5 = F_00ab24a0(local_10);
        if (uVar5 != 0) {
          ((code *)*(gen_code32 *)(puVar7[-0x1a] + 8))(puVar7 + -0x1a,local_10,uVar5);
        }
      }
      uVar2 = 0;
      uVar6 = 0;
      uVar5 = 0xffff;
      if ((undefined *)*puVar7 != (undefined *)0x0) {
        uVar2 = F_00a3a8a0((undefined *)*puVar7);
        uVar2 = uVar2 << 0x10;
        uVar6 = F_00a37c50((undefined *)*puVar7);
        uVar5 = puVar7[1];
        uVar6 = (uint)(uVar6 != 0) * 0x10000;
      }
      piVar1 = ((int *)GEN_TOP((local_c + -4 + *(int *)(uVar3 + 0x20))));
      if (*piVar1 != puVar7[-3]) {
        *piVar1 = puVar7[-3];
        *(undefined1 *)(uVar3 + 0x1d) = 1;
      }
      if (*((uint *)GEN_TOP((local_c + 4 + *(int *)(uVar3 + 0x20)))) != (uVar5 | uVar6)) {
        *((uint *)GEN_TOP((local_c + 4 + *(int *)(uVar3 + 0x20)))) = uVar5 | uVar6;
        *(undefined1 *)(uVar3 + 0x1d) = 1;
      }
      if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + local_c))) != (*(byte *)(puVar7 + -1) | uVar2)) {
        *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + local_c))) = *(byte *)(puVar7 + -1) | uVar2;
        *(undefined1 *)(uVar3 + 0x1d) = 1;
      }
      uVar5 = F_0042a990(puVar7 + -0x19);
      if (uVar5 != *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + local_14)))) {
        *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + local_14))) = uVar5;
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      local_c = local_c + 0xc;
      local_14 = local_14 + 4;
      local_10 = local_10 + 1;
      puVar7 = puVar7 + 0x1c;
    } while (local_14 < 0x42d);
  }
  return uVar5;
}

/* ref: FUN_007617a0 */
uint F_007617a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7617a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int local_8;
  
  F_00c48350(*(undefined * PTR32 *)((int)this + 0x29200),0,*(int *)((int)this + 0x291fc) * 4);
  *(undefined4 *)((int)this + 0x291f8) = 0;
  puVar3 = (undefined4 *)((int)this + 0x235c0);
  puVar2 = (undefined4 *)((int)this + 0x2375c);
  local_8 = 0x32;
  do {
    *puVar3 = 0xe0000000;
    puVar3[1] = 0;
    puVar2[-3] = 0xe0000000;
    puVar2[-2] = 0;
    puVar2[-1] = 0xffffffff;
    *puVar2 = 0xffffffff;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *(undefined2 *)((int)puVar2 + 0x1bb) = 0;
    *(undefined1 *)((int)puVar2 + 0x1bd) = 0xff;
    *(undefined1 *)(puVar2 + 0x6d) = 0;
    F_0042e430(puVar2 + 0x19,&REFG(undefined1, 0x107fc63));
    puVar2[3] = 0;
    F_0042e430(puVar2 + 0x58,&REFG(undefined1, 0x107fc63));
    F_0042e430(puVar2 + 0x2e,&REFG(undefined1, 0x107fc63));
    uVar1 = F_0042e430(puVar2 + 0x43,&REFG(undefined1, 0x107fc63));
    puVar3 = puVar3 + 2;
    puVar2 = puVar2 + 0x74;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return uVar1;
}

/* ref: FUN_00761890 */
unsigned int F_00761890(unsigned int gen_a0)
{
  GEN_ENTER(0x761890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  undefined8 uVar5;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  F_00c48350(*(undefined * PTR32 *)((int)this + 0x29200),0,*(int *)((int)this + 0x291fc) * 4);
  *(undefined4 *)((int)this + 0x291f8) = 0;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x23184) + 0x4c))))(*(int * PTR32 *)((int)this + 0x23184));
  local_c = *(int *)(uVar2 + 0x71bc) + -1;
  if (-1 < local_c) {
    local_8 = local_c * 4 + 0x70f4;
    do {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x23184) + 0x4c))))(*(int * PTR32 *)((int)this + 0x23184));
      uVar5 = (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(**(undefined4 * PTR32 *)(local_8 + uVar2))))))
                        (((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)(local_8 + uVar2))));
      uVar2 = 0x31;
      uVar4 = 0;
      piVar3 = (int *)((int)this + 0x29020);
      do {
        local_14 = (int)uVar5;
        if ((*piVar3 == local_14) &&
           (local_10 = (int)((ulonglong)uVar5 >> 0x20), piVar3[1] == local_10)) {
          puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x29200) + (uVar2 >> 5) * 4)));
          *puVar1 = *puVar1 | uVar4;
          *(int *)((int)this + 0x291f8) = *(int *)((int)this + 0x291f8) + 1;
          break;
        }
        piVar3 = piVar3 + -0x74;
        uVar4 = uVar4 >> 1 | (uint)((uVar4 & 1) != 0) << 0x1f;
        uVar2 = uVar2 - 1;
      } while (-1 < (int)uVar2);
      local_8 = local_8 + -4;
      local_c = local_c + -1;
    } while (-1 < local_c);
  }
  return 0;
}

/* ref: FUN_00761970 */
uint F_00761970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x761970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint * puVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint local_10;
  uint local_c;
  
  local_c = 0xffffffff;
  local_10 = 0xffffffff;
  piVar3 = (int *)((int)this + 0x23750);
  uVar4 = 0;
  do {
    if ((*piVar3 == param_1) && (piVar3[1] == param_2)) {
      return (uint)piVar3;
    }
    uVar2 = local_10;
    if ((((*((uint *)GEN_TOP((*(int *)((int)this + 0x29200) + (uVar4 >> 5) * 4))) & 1 << ((byte)uVar4 & 0x1f))
          == 0) && (uVar2 = uVar4, *piVar3 == -0x20000000)) && (piVar3[1] == 0)) {
      uVar2 = local_10;
      local_c = uVar4;
    }
    local_10 = uVar2;
    uVar4 = uVar4 + 1;
    piVar3 = piVar3 + 0x74;
  } while ((int)uVar4 < 0x32);
  uVar4 = local_c;
  if ((int)local_c < 0) {
    uVar4 = local_10;
  }
  puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x29200) + (uVar4 >> 5) * 4)));
  *puVar1 = *puVar1 | 1 << ((byte)uVar4 & 0x1f);
  *(int *)((int)this + 0x291f8) = *(int *)((int)this + 0x291f8) + 1;
  return (uint)((undefined *)GEN_TOP(((uVar4 + 0x139) * 0x1d0 + (int)this)));
}

/* ref: FUN_00761a20 */
uint F_00761a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x761a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  
  if (((byte)param_2[4] & 0xf) == 4) {
    iVar1 = param_2[5];
    if (iVar1 == 0x14) {
      if ((((byte)*param_2 & 0xf) == 4) && (((byte)param_2[2] & 0xf) == 4)) {
        F_0046cc80(*(undefined * PTR32 *)((int)this + 0x2332c),param_2[1],param_2[3]);
      }
    }
    else if (iVar1 == 0x15) {
      if ((*(byte *)(param_2 + 2) & 0xf) == 0) {
        F_0046cca0(*(undefined * PTR32 *)((int)this + 0x2332c),0);
      }
      else {
        F_0046cca0(*(undefined * PTR32 *)((int)this + 0x2332c),param_2[3]);
      }
    }
    else if (iVar1 == 0x16) {
      if ((*(byte *)(param_2 + 2) & 0xf) == 0) {
        F_0046ccc0(*(undefined * PTR32 *)((int)this + 0x2332c),0);
      }
      else {
        F_0046ccc0(*(undefined * PTR32 *)((int)this + 0x2332c),param_2[3]);
      }
    }
  }
  *(byte *)((int)this + 0x230bf) = *(byte *)((int)this + 0x230bf) | 2;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00761ad0 */
uint F_00761ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x761ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  if (param_3 == 4) {
    if ((((((byte)*param_2 & 0xf) == 4) && (((byte)param_2[2] & 0xf) == 4)) &&
        (((byte)param_2[4] & 0xf) == 4)) && (((byte)param_2[6] & 0xf) == 4)) {
      F_00458f70(*(undefined * PTR32 *)((int)this + 0x2332c),param_2[1],param_2[3],param_2[5],param_2[7]);
      *(byte *)((int)this + 0x230bf) = *(byte *)((int)this + 0x230bf) | 3;
    }
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00761b40 */
uint F_00761b40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x761b40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 uVar1;
  
  if ((*param_2 & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  F_00a41750(&REFG(undefined, 0x14a4230),uVar1);
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00761b70 */
uint F_00761b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x761b70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  if (((*param_2 & 0xf) == 0) || (*(int *)(param_2 + 4) == 0)) {
    uVar1 = F_005369a0(&REFG(undefined4, 0x1375b90));
    if (uVar1 != 0) {
      uVar1 = F_005339e0(&REFG(undefined4, 0x1375bc0));
      F_00a41df0(&REFG(undefined, 0x14a4230),*(undefined4 *)(uVar1 + 0x74));
    }
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00761bc0 */
uint F_00761bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x761bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 uVar1;
  
  if ((*param_2 & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  F_00a3c780(&REFG(undefined, 0x14a4230),uVar1);
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00761bf0 */
uint F_00761bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x761bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if ((*param_2 & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 4);
    if (3 < uVar2) goto LAB_00761c67;
  }
  switch((unsigned int)(uintptr_t)(uVar2)) {
  default: ;
    F_00ae2920(&REFG(undefined * PTR32, 0x1338d48));
    *param_1 = 0;
    return (uint)param_1;
  case 1: ;
    if ((param_2[8] & 0xf) == 0) {
      uVar1 = 0;
      uVar3 = 1;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0xc);
      uVar3 = 1;
    }
    break;
  case 2: ;
    if ((param_2[8] & 0xf) == 0) {
      uVar1 = 0;
      uVar3 = 2;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0xc);
      uVar3 = 2;
    }
    break;
  case 3: ;
    if ((param_2[8] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0xc);
    }
    uVar3 = 4;
  }
  F_00ae2d40(&REFG(undefined * PTR32, 0x1338d48),uVar3,uVar1);
LAB_00761c67: ;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00761c90 */
uint F_00761c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x761c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  byte bVar3;
  
  if ((*param_2 & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  uVar2 = F_00760440(uVar1);
  if ((param_2[8] & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0xc);
  }
  if ((param_2[0x10] & 0xf) == 0) {
    bVar3 = 0;
  }
  else {
    bVar3 = (byte)*(undefined4 *)(param_2 + 0x14);
  }
  F_006d9570(uVar1,uVar2,(uint)(bVar3 & 1));
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00761cf0 */
uint F_00761cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x761cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00761d00 */
uint F_00761d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x761d00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00761d10 */
byte F_00761d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x761d10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 == 0) {
    switch((unsigned int)(uintptr_t)((undefined1)param_1)) {
    case 0: ;
    case 2: ;
switchD_00761d23_caseD_0: ;
      return 1;
    }
  }
  else if (*(int *)(param_2 + 0x1690) != 0) {
    switch((unsigned int)(uintptr_t)((undefined1)param_1)) {
    case 0: ;
      goto switchD_00761d23_caseD_0;
    case 1: ;
      return *(byte *)(param_2 + 0x2dd2) >> 1 & 1;
    case 2: ;
      return *(int *)(param_2 + 0x1690) != *(int *)(param_2 + 0x1694);
    }
  }
  return 0;
}

/* ref: FUN_00761d90 */
byte F_00761d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x761d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  switch((unsigned int)(uintptr_t)((undefined1)param_1)) {
  case 0: ;
    return 1;
  case 1: ;
    return *(byte *)(param_2 + 0x2dd2) >> 1 & 1;
  case 2: ;
    uVar1 = F_00533c90(&REFG(undefined4, 0x1375bc0));
    return uVar1 == param_2;
  default: ;
    return 0;
  }
}

/* ref: FUN_00761df0 */
uint F_00761df0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x761df0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  switch((unsigned int)(uintptr_t)((undefined1)param_1)) {
  case 0: ;
    return 1;
  case 1: ;
    break;
  case 2: ;
    uVar1 = F_00533c90(&REFG(undefined4, 0x1375bc0));
    return CONCAT31((int3)(uVar1 >> 8),uVar1 == param_2);
  default: ;
    return 0;
  }
  if ((double)param_3 <= *(double *)&REFG(undefined, 0x1090710)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00761e60 */
uint F_00761e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x761e60u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  bool bVar1;
  byte bVar2;
  undefined * this;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  undefined * pvVar6;
  sbyte sVar7;
  uint uVar8;
  char cVar9;
  bool bVar10;
  
  this = (undefined *)F_00a5f290(param_2);
  uVar3 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
  uVar4 = ((code *)*(gen_code32 *)(*param_2 + 8))(param_2);
  (*(uint *)(gen_frame + 0xc)) = *(uint *)(param_1 + 0x235b0);
  (*(uint *)(gen_frame + 0x14)) = *(uint *)(param_1 + 0x235a8);
  uVar8 = 0xc00;
  cVar9 = '\x05';
  (*(uint *)(gen_frame + 0x8)) = 0;
  bVar1 = false;
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 1: ;
    (*(uint *)(gen_frame + 0x14)) = *(uint *)(param_1 + 0x235a4);
    (*(uint *)(gen_frame + 0xc)) = *(uint *)(param_1 + 0x235ac);
    if (param_2 == param_3) goto LAB_00761ef0;
    if ((this == (undefined *)0x0) || ((*(byte *)((int)this + 0x2dd2) & 0x10) == 0)) {
      bVar2 = F_007608a0(this);
      if (bVar2 != 0) {
LAB_00761f28: ;
        (*(uint *)(gen_frame + 0x14)) = *(uint *)(param_1 + 0x235a8);
        (*(uint *)(gen_frame + 0xc)) = *(uint *)(param_1 + 0x235b0);
        goto LAB_00761f3a;
      }
LAB_00761f47: ;
      bVar1 = true;
      uVar8 = 0xc000;
      cVar9 = '\a';
    }
    else {
LAB_00761f0c: ;
      bVar1 = true;
      uVar8 = 0xc0;
      cVar9 = '\x03';
    }
    break;
  case 2: ;
    bVar1 = true;
    if ((uVar4 & 0xff) == 2) {
      (*(uint *)(gen_frame + 0x14)) = *(uint *)(param_1 + 0x235a4);
      (*(uint *)(gen_frame + 0xc)) = *(uint *)(param_1 + 0x235ac);
      if (this == (undefined *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)F_00a35490(&REFG(undefined4, 0x14a31f0),*(undefined4 *)((int)this + 0x2ed8));
      }
      if (piVar5 == param_3) {
        uVar8 = 0x30;
        cVar9 = '\x02';
      }
      else if (piVar5 != (int *)0x0) {
        uVar3 = F_00a5f290(piVar5);
        if ((uVar3 != 0) && ((*(byte *)(uVar3 + 0x2dd2) & 0x10) != 0))
        goto switchD_00761ecb_caseD_3;
        bVar2 = F_007608a0(uVar3);
        if (bVar2 != 0) goto LAB_00761f28;
        uVar8 = 0x30000;
        cVar9 = '\b';
      }
    }
    else if ((uVar4 & 0xff) == 3) {
      (*(uint *)(gen_frame + 0xc)) = *(uint *)(param_1 + 0x235ac);
      (*(uint *)(gen_frame + 0x14)) = *(uint *)(param_1 + 0x235a4);
      if (this == (undefined *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)F_00a35490(&REFG(undefined4, 0x14a31f0),*(undefined4 *)((int)this + 0x2ed8));
      }
      if (piVar5 == param_3) {
LAB_00761f3a: ;
        bVar1 = true;
        uVar8 = 0xc;
        cVar9 = '\x01';
      }
      else if (piVar5 != (int *)0x0) {
        uVar3 = F_00a5f290(piVar5);
        if ((uVar3 == 0) || ((*(byte *)(uVar3 + 0x2dd2) & 0x10) == 0)) goto LAB_00761f47;
        uVar8 = 0xc0;
        cVar9 = '\x03';
      }
    }
    else if (this == (undefined *)0x0) {
LAB_00761ef0: ;
      bVar1 = true;
      uVar8 = 3;
      cVar9 = '\0';
    }
    else {
      bVar2 = F_00a62270(this);
      if (bVar2 == 0) {
        if ((*(byte *)((int)this + 0x2dd2) & 2) == 0) goto LAB_00761ef0;
        bVar2 = F_00a9fd60(this);
        if (bVar2 != 0) goto LAB_00761f3a;
        bVar2 = F_00a9fdb0(this);
        if (bVar2 == 0) goto LAB_00761f0c;
        uVar8 = 0x30;
        cVar9 = '\x02';
      }
      else {
        uVar8 = 0x300;
        cVar9 = '\x04';
      }
    }
    break;
  case 3: ;
switchD_00761ecb_caseD_3: ;
    uVar8 = 0x300;
    cVar9 = '\x04';
    break;
  case 4: ;
  case 6: ;
    bVar1 = true;
    break;
  case 9: ;
    uVar8 = 0x3000;
    cVar9 = '\x06';
  }
  sVar7 = cVar9 * '\x02';
  if (this == (undefined *)0x0) {
    switch((unsigned int)(uintptr_t)((uVar8 & (*(uint *)(gen_frame + 0x14))) >> sVar7 & 0xff)) {
    case 0: ;
      break;
    case 1: ;
      if (!((double)param_4 <= *(double *)&REFG(undefined, 0x1090710))) goto switchD_007620d1_caseD_3;
      break;
    case 2: ;
      piVar5 = (int *)F_00533c90(&REFG(undefined4, 0x1375bc0));
      bVar10 = piVar5 == param_2;
      goto LAB_0076212a;
    default: ;
      goto switchD_007620d1_caseD_3;
    }
  }
  else {
    switch((unsigned int)(uintptr_t)((uVar8 & (*(uint *)(gen_frame + 0x14))) >> sVar7 & 0xff)) {
    case 0: ;
      goto switchD_007620d1_caseD_0;
    case 1: ;
      bVar10 = (bool)(*(byte *)((int)this + 0x2dd2) >> 1 & 1);
      break;
    case 2: ;
      pvVar6 = (undefined *)F_00533c90(&REFG(undefined4, 0x1375bc0));
      bVar10 = pvVar6 == this;
      break;
    default: ;
      goto switchD_007620d1_caseD_3;
    }
LAB_0076212a: ;
    if (bVar10 == false) goto switchD_007620d1_caseD_3;
  }
switchD_007620d1_caseD_0: ;
  (*(uint *)(gen_frame + 0x8)) = 1;
switchD_007620d1_caseD_3: ;
  if ((bVar1) &&
     (bVar2 = F_00761d10((uVar8 & (*(uint *)(gen_frame + 0xc))) >> sVar7,this,(undefined4)gen_fl2bits(param_4)),
     bVar2 != 0)) {
    return (*(uint *)(gen_frame + 0x8)) | 2;
  }
  return (*(uint *)(gen_frame + 0x8));
}

/* ref: FUN_007621c0 */
byte F_007621c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7621c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  default: ;
    return 0;
  case 1: ;
    return 1;
  case 2: ;
    return 2;
  case 3: ;
    return 3;
  }
}

/* ref: FUN_00762200 */
byte F_00762200(unsigned int gen_a0)
{
  GEN_ENTER(0x762200u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = F_005339e0(&REFG(undefined4, 0x1375bc0));
  if (uVar1 == param_1) {
    return 0;
  }
  uVar1 = F_00533a30(&REFG(undefined4, 0x1375bc0));
  return uVar1 != param_1;
}

/* ref: FUN_00762230 */
byte F_00762230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x762230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  iVar4 = 0;
  piVar5 = (int *)((int)this + 0x29258);
  do {
    uVar1 = F_00a36f30(&REFG(undefined, 0x14a4230),iVar4);
    iVar3 = *piVar5;
    if ((uVar1 != 0) && (iVar3 != 0)) {
      iVar2 = 0;
      if (0 < *(int *)(uVar1 + 0xc)) {
        do {
          if ((iVar3 != 0) && (*(int *)(iVar3 + 0x58) == param_1)) {
            return 1;
          }
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 0x70;
        } while (iVar2 < *(int *)(uVar1 + 0xc));
      }
    }
    iVar4 = iVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (iVar4 < 4);
  uVar1 = F_00a36f30(&REFG(undefined, 0x14a4230),0x7d4);
  if ((uVar1 != 0) && (iVar4 = *(int *)((int)this + 0x29a48), iVar4 != 0)) {
    iVar3 = 0;
    if (0 < *(int *)(uVar1 + 0xc)) {
      do {
        if ((iVar4 != 0) && (*(int *)(iVar4 + 0x58) == param_1)) {
          return 1;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x68;
      } while (iVar3 < *(int *)(uVar1 + 0xc));
    }
  }
  return 0;
}

/* ref: FUN_007622d0 */
uint F_007622d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7622d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (param_2 < 4) {
    return *(uint *)(in_ecx + 0x29258 + param_2 * 4);
  }
  return 0;
}

/* ref: Client::UI2::RaptureAtkUnitManager::vf5 */
uint F_007622f0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x7622f0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = F_005b1090(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00762310 */
byte F_00762310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x762310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_0057f860(this,REFG(undefined * PTR32, 0x1328128));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x70))(piVar1,param_1,param_2);
    if ((char)uVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}

/* ref: Client::UI2::RaptureAtkUnitManager::vf13 */
byte F_00762350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x762350u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  
  if (*(char *)(REFG(int, 0x1379860) + 0x21d) != '\0') {
    if (((*(char *)(REFG(int, 0x1379860) + 0x21e) != '\0') && (((byte)this[0x1b0] & 8) != 0)) &&
       ((char)param_3 == '\0')) {
      bVar2 = F_00762310(this,param_1,param_2);
      return bVar2;
    }
    return 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0xd4);
  if ((piVar1 != (int *)0x0) &&
     (uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x70))(piVar1,param_1,param_2), (char)uVar3 != '\0')) {
    return 1;
  }
  if (((((byte)this[0x1b0] & 8) != 0) && ((char)param_3 == '\0')) &&
     (bVar2 = F_00762310(this,param_1,param_2), bVar2 != 0)) {
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::RaptureAtkUnitManager::vf23 */
uint F_007623f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7623f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  short sVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  
  *(byte *)(param_1 + 0xf9) = *(byte *)(param_1 + 0xf9) & 0xef;
  *(int *)(this + 0x1e4) = param_1;
  bVar2 = F_00594d10(this,param_1,1);
  if (bVar2 != 0) {
    F_005aa060((undefined *)(REFG(int, 0x1379860) + 0x20c),0xe,0);
  }
  sVar1 = *((short *)GEN_TOP((*(int *)(REFG(int, 0x1379860) + 0x18) + 0xc5e)));
  iVar3 = (int)*((short *)GEN_TOP((*(int *)(REFG(int, 0x1379860) + 0x18) + 0xc5c)));
  *(int *)(this + 0x1e8) = iVar3;
  *(int *)(this + 0x1f0) = iVar3;
  uVar4 = (uint)sVar1;
  *(uint *)(this + 0x1ec) = uVar4;
  *(uint *)(this + 500) = uVar4;
  return uVar4;
}

/* ref: Client::UI2::RaptureAtkUnitManager::vf24 */
byte F_00762460(unsigned int gen_a0)
{
  GEN_ENTER(0x762460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00594d10(this,*(undefined4 *)(this + 0x1e4),0);
  *(undefined4 *)(this + 0x1e4) = 0;
  return bVar1;
}

/* ref: FUN_00762480 */
byte F_00762480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x762480u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int3 iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar4 = F_00a34e80((*(undefined * PTR32 *)&gen_args[1]),0);
  uVar5 = F_00a34e80((*(undefined * PTR32 *)&gen_args[1]),1);
  bVar3 = F_00a34970((*(undefined * PTR32 *)&gen_args[1]),0x21);
  gen_piece_set(&(*(int *)(gen_frame + 0x8)), 0, 3, (unsigned long long)((uint3)bVar3 << 0x10));
  iVar2 = (int3)(*(int *)(gen_frame + 0x8));
  (*(int *)(gen_frame + 0x8)) = (uint)bVar3 << 0x10;
  bVar3 = F_00a34de0((*(undefined * PTR32 *)&gen_args[1]),0x21);
  if ((bVar3 != 0) && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e4))) != 0)) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x60))))((*(undefined * PTR32 *)&gen_args[0]));
    (*(int *)(gen_frame + 0x8)) = CONCAT13(1,iVar2);
  }
  if ((*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 2)) == '\0') goto LAB_00762561;
  if ((*(int * PTR32 *)&gen_args[2]) != (int *)0x0) {
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x74))))((*(int * PTR32 *)&gen_args[2]));
    if ((char)uVar6 != '\0') goto LAB_00762561;
    if ((*((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 0x3e))) & 0x80) == 0) {
      if ((char)(*(uint *)&gen_args[4]) == '\0') {
        F_0059b860((*(undefined * PTR32 *)&gen_args[0]),(*(int * PTR32 *)&gen_args[2]),0);
      }
      (*(int *)(gen_frame + 0x8)) = 0x1000000;
    }
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x60))))((*(int * PTR32 *)&gen_args[2]),uVar4,uVar5);
    if ((char)uVar6 != '\0') {
      (*(int *)(gen_frame + 0x8)) = 0x1000000;
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))))((*(undefined * PTR32 *)&gen_args[0]),(*(int * PTR32 *)&gen_args[2]));
      goto LAB_00762561;
    }
    if ((*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 3)) != '\0') goto LAB_00762561;
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x68))))((*(int * PTR32 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
    if ((char)uVar6 != '\0') goto LAB_00762561;
  }
  if ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) & 8) != 0) {
    F_0059b860((*(undefined * PTR32 *)&gen_args[0]),0,0);
  }
LAB_00762561: ;
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e4)));
  if (iVar1 != 0) {
    if ((*(byte *)(iVar1 + 0xf8) & 8) != 0) {
      uVar6 = (uint)(short)((short)uVar4 - *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1f0))));
      uVar7 = (int)uVar6 >> 0x1f;
      if ((2 < (int)((uVar6 ^ uVar7) - uVar7)) ||
         (uVar6 = (uint)(short)((short)uVar5 - *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 500)))),
         uVar7 = (int)uVar6 >> 0x1f, 2 < (int)((uVar6 ^ uVar7) - uVar7))) {
        *(byte *)(iVar1 + 0xf9) = *(byte *)(iVar1 + 0xf9) | 0x10;
      }
      (*(int * PTR32 *)&gen_args[2]) = (int *)(uint)(ushort)((short)uVar5 - *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1ec))));
      (*(uint *)&gen_args[4]) = (uint)(ushort)((short)uVar4 - *((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e8))));
      uVar4 = F_00572ff0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e4))),&(*(uint *)&gen_args[4]),&(*(int * PTR32 *)&gen_args[2]));
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e8))) + (int)(short)(*(uint *)&gen_args[4]);
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1ec))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1ec))) + (int)(short)(*(int * PTR32 *)&gen_args[2]);
      if (uVar4 != 0) {
        F_00a34100((*(undefined * PTR32 *)&gen_args[1]),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e8))),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1ec))));
      }
      return 1;
    }
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e4))) = 0;
  }
  return (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 3));
}

/* ref: FUN_00762630 */
unsigned int F_00762630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x762630u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  code * pcVar2;
  uint uVar3;
  
  uVar1 = param_1[0x42];
  if ((uVar1 & 0xe00003f) == 0) {
    uVar3 = (uint)param_1[0x3d] >> 0x14 & 0xf;
    if ((char)param_2 == '\0') {
      if ((uVar3 == 3) || (uVar3 == 2)) {
        if ((uVar1 >> 0x18 & 1) != 0) {
          ((code *)*(gen_code32 *)(*param_1 + 0x18))(param_1,param_3,0);
          param_1[0x48] = param_1[0x48] | 2;
          return 0;
        }
        if ((*(byte *)((int)param_1 + 0xf9) & 4) == 0) {
          (*(undefined4 *)(gen_frame + 0x4)) = 3;
          (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
          F_005a9110(param_1,1,&(*(undefined4 *)(gen_frame + 0x4)));
          F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
          return 0;
        }
      }
    }
    else if ((((uVar3 == 5) || (uVar3 == 4)) && ((uVar1 >> 0x18 & 1) != 0)) &&
            (((uint)param_1[0x48] >> 1 & 1) != 0)) {
      pcVar2 = *(gen_code32 *)(*param_1 + 0x14);
      param_1[0x48] = param_1[0x48] | 0x2000;
      (*pcVar2)(param_1,param_3);
      param_1[0x48] = param_1[0x48] & 0xfffffffd;
    }
  }
  return 0;
}

/* ref: Client::UI2::RaptureAtkUnitManager::vf20 */
unsigned int F_00762710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x762710u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if ((((byte)this[0x1b0] & 0x40) != 0) && (param_1 != (undefined *)0x0)) {
    F_0055e2a0(param_1,0x2000000,param_2);
  }
  return 0;
}

/* ref: Client::UI2::RaptureAtkUnitManager::vf21 */
unsigned int F_00762740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x762740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if ((((((byte)this[0x1b0] & 0x40) != 0) && (*(uint *)(this + 0x1f8) != 0)) &&
      (param_1 != (int *)0x0)) && ((param_1[0x42] & *(uint *)(this + 0x1f8)) != 0)) {
    *(char *)((int)param_1 + 0x10e) = *(char *)((int)param_1 + 0x10e) + '\x01';
    uVar1 = F_005b8a10(param_1);
    if ((char)uVar1 == '\0') {
      ((code *)*(gen_code32 *)(*param_1 + 0x18))(param_1,1,0);
    }
  }
  return 0;
}

/* ref: FUN_00762790 */
uint F_00762790(unsigned int gen_a0)
{
  GEN_ENTER(0x762790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * this_00;
  char cVar1;
  int iVar2;
  int * piVar3;
  byte bVar4;
  uint uVar5;
  uint in_ecx;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  int iVar6;
  uint uVar7;
  
  iVar6 = REFG(int, 0x1379860);
  iVar2 = *(int *)(REFG(int, 0x1379860) + 0x1c);
  this_00 = (uint *)(REFG(int, 0x1379860) + 0x20c);
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x74))(this);
  if ((char)uVar5 != '\0') {
    return uVar5;
  }
  if (*(char *)(iVar6 + 0x21b) != '\0') {
    return uVar5;
  }
  if (*(char *)(iVar2 + 0x1e) != '\0') {
    return uVar5;
  }
  cVar1 = *(char *)(iVar6 + 0x21c);
  uVar5 = CONCAT31((int3)(uVar5 >> 8),cVar1);
  uVar7 = 0;
  if ((cVar1 != '\0') && ((*(byte *)((int)this + 0x1b0) & 4) == 0)) {
    uVar7 = 0xf;
  }
  piVar3 = *(int * PTR32 *)(iVar2 + 4);
  if ((piVar3 == (int *)0x0) && (cVar1 == '\0')) {
    uVar5 = *this_00;
    if ((uVar5 != 0xb) && (uVar5 != 6)) {
      return uVar5;
    }
    uVar5 = F_005aa060(this_00,0,0);
    return uVar5;
  }
  iVar2 = *(int *)(iVar2 + 8);
  if (iVar2 == 0) goto LAB_007628b9;
  iVar6 = iVar2;
  if (*(ushort *)(iVar2 + 0x18) < 1000) {
    uVar5 = F_0055a530(iVar2);
    if ((char)uVar5 != '\0') {
      uVar7 = 0xb;
      goto LAB_007628b9;
    }
    uVar5 = F_0055a580(iVar2);
    if ((char)uVar5 != '\0') {
      uVar7 = 0xc;
      goto LAB_007628b9;
    }
    for (iVar6 = *(int *)(iVar2 + 8); iVar6 != 0; iVar6 = *(int *)(iVar6 + 8)) {
      if (999 < *(ushort *)(iVar6 + 0x18)) goto LAB_0076282f;
    }
  }
  else {
LAB_0076282f: ;
    in_ecx = F_00559c20(iVar6);
    bVar4 = F_005613c0(in_ecx);
    uVar5 = CONCAT31(extraout_var,bVar4);
    if (bVar4 != 0) {
      uVar7 = 0xb;
      goto LAB_007628b9;
    }
    bVar4 = F_00561440(in_ecx);
    uVar5 = CONCAT31(extraout_var_00,bVar4);
    if (bVar4 != 0) {
      uVar7 = 0xc;
      goto LAB_007628b9;
    }
  }
  if ((((uVar7 == 0) || (uVar7 == 0xf)) && (iVar2 == piVar3[0x28])) &&
     (uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x74))(piVar3), (char)uVar5 == '\0')) {
    uVar7 = 6;
  }
LAB_007628b9: ;
  if ((*this_00 != uVar7) && (uVar5 = F_005aa060(this_00,0,0), uVar7 != 0)) {
    uVar5 = F_005aa060(this_00,uVar7,0);
  }
  return uVar5;
}

/* ref: FUN_00762910 */
uint F_00762910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x762910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * puVar1;
  int * piVar2;
  uint uVar3;
  undefined * puVar4;
  
  uVar3 = param_1;
  if (*(uint *)((int)this + 0x200) != param_1) {
    *(uint *)((int)this + 0x200) = param_1;
    puVar1 = REFG(undefined * PTR32, 0x1328130);
    puVar4 = REFG(undefined * PTR32, 0x132812c);
    if (param_1 == 1) {
      puVar1 = REFG(undefined * PTR32, 0x132812c);
      puVar4 = REFG(undefined * PTR32, 0x1328130);
    }
    piVar2 = (int *)F_0057f860(this,puVar1);
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0xfc))(piVar2);
    }
    piVar2 = (int *)F_0057f860(this,puVar4);
    uVar3 = 0;
    if (piVar2 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xf8))(piVar2);
    }
  }
  return uVar3;
}

/* ref: Client::UI2::RaptureAtkUnitManager::vf7 */
uint F_00762980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x762980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  
  if (*(char *)(REFG(undefined4, 0x1379860) + 0x21d) == '\0') {
    uVar2 = *(uint *)(this + 0xec);
    uVar1 = REFG(undefined4, 0x1379860);
    if (uVar2 != 0) {
      uVar1 = F_0057f8d0(this,uVar2);
      *param_1 = uVar1;
      param_1[1] = uVar2;
    }
    return uVar1;
  }
  uVar2 = F_0057f990((undefined *)this,param_1,param_2,param_3);
  return uVar2;
}

/* ref: FUN_007629e0 */
uint F_007629e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7629e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ushort uVar1;
  longlong lVar2;
  gen_size32 _Size;
  int * piVar3;
  undefined4 * puVar4;
  undefined * _Dst;
  undefined4 * puVar5;
  
  piVar3 = (int *)F_00404270();
  lVar2 = (ulonglong)*(uint *)(param_1 + 8) * 0xc;
  *(uint *)((int)this + 8) = *(uint *)(param_1 + 8);
  puVar4 = (undefined4 *)
           F_00406c00(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2,0,piVar3,0);
  puVar5 = (undefined4 *)(param_1 + 0x10);
  *(undefined4 * PTR32 *)((int)this + 4) = puVar4;
  param_1 = 0;
  if (*(int *)((int)this + 8) != 0) {
    do {
      *puVar4 = *puVar5;
      uVar1 = *(ushort *)((int)puVar5 + 10);
      *(ushort *)(puVar4 + 1) = uVar1;
      *(undefined1 *)((int)puVar4 + 6) = *(undefined1 *)(puVar5 + 2);
      _Size = (uint)uVar1 * 4;
      _Dst = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,_Size,0x10)));
      puVar4[2] = _Dst;
      F_00c48350(_Dst,0,_Size);
      F_00c46aa0(puVar4[2],puVar5 + 4,_Size);
      param_1 = param_1 + 1;
      puVar4 = puVar4 + 3;
      puVar5 = (undefined4 *)((int)puVar5 + puVar5[1] + 0x10);
    } while (param_1 < *(uint *)((int)this + 8));
  }
  return 0;
}

/* ref: FUN_00762aa0 */
uint F_00762aa0(unsigned int gen_a0)
{
  GEN_ENTER(0x762aa0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return (param_1 & 0xff0000 | param_1 >> 0x10) >> 8 | (param_1 & 0xff00 | param_1 << 0x10) << 8;
}

/* ref: FUN_00762b10 */
uint F_00762b10(unsigned int gen_a0)
{
  GEN_ENTER(0x762b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  if (*(char *)((int)this + 0xc) == '\0') {
    return 0xffffffff;
  }
  uVar1 = 0;
  if (*(int *)((int)this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 4) + 8)));
    do {
      if (*piVar2 != 0) {
        F_00406810(*piVar2);
        *piVar2 = 0;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 3;
    } while (uVar1 < *(uint *)((int)this + 8));
  }
  if (*(int *)((int)this + 4) != 0) {
    F_00406b30(*(int *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined1 *)((int)this + 0xc) = 0;
  return 0;
}

/* ref: FUN_00762b80 */
uint F_00762b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x762b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  if ((*(char *)((int)this + 0xc) != '\0') && (*(uint *)((int)this + 8) != 0)) {
    piVar2 = *(int * PTR32 *)((int)this + 4);
    do {
      if (*piVar2 == param_1) {
        return (uint)(*(int * PTR32 *)((int)this + 4) + uVar1 * 3);
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 3;
    } while (uVar1 < *(uint *)((int)this + 8));
  }
  return 0;
}

/* ref: FUN_00762bc0 */
uint F_00762bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x762bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  
  if (*(char *)((int)this + 0xc) != '\0') {
    uVar1 = 0;
    if (*(uint *)((int)this + 8) != 0) {
      piVar2 = *(int * PTR32 *)((int)this + 4);
      while (*piVar2 != param_1) {
        uVar1 = uVar1 + 1;
        piVar2 = piVar2 + 3;
        if (*(uint *)((int)this + 8) <= uVar1) {
          return 0;
        }
      }
      piVar2 = *(int * PTR32 *)((int)this + 4) + uVar1 * 3;
      if (piVar2 != (int *)0x0) {
        return CONCAT22((short)((uint)((int)(uintptr_t)piVar2) >> 0x10),(short)piVar2[1]);
      }
    }
  }
  return 0;
}

/* ref: FUN_00762c10 */
byte F_00762c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x762c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  
  if (*(char *)((int)this + 0xc) != '\0') {
    uVar1 = 0;
    if (*(uint *)((int)this + 8) != 0) {
      piVar2 = *(int * PTR32 *)((int)this + 4);
      while (*piVar2 != param_1) {
        uVar1 = uVar1 + 1;
        piVar2 = piVar2 + 3;
        if (*(uint *)((int)this + 8) <= uVar1) {
          return 0;
        }
      }
      piVar2 = *(int * PTR32 *)((int)this + 4) + uVar1 * 3;
      if (piVar2 != (int *)0x0) {
        return *(byte *)((int)piVar2 + 6);
      }
    }
  }
  return 0;
}

/* ref: FUN_00762c60 */
uint F_00762c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x762c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  int * piVar2;
  
  if (*(char *)((int)this + 0xc) != '\0') {
    uVar1 = 0;
    if (*(uint *)((int)this + 8) != 0) {
      piVar2 = *(int * PTR32 *)((int)this + 4);
      while (*piVar2 != param_1) {
        uVar1 = uVar1 + 1;
        piVar2 = piVar2 + 3;
        if (*(uint *)((int)this + 8) <= uVar1) {
          return 0;
        }
      }
      piVar2 = *(int * PTR32 *)((int)this + 4) + uVar1 * 3;
      if ((piVar2 != (int *)0x0) && (param_2 < *(ushort *)(piVar2 + 1))) {
        uVar1 = *(uint *)(piVar2[2] + param_2 * 4);
        if ((char)param_3 != '\0') {
          uVar1 = (uVar1 << 0x10 | uVar1 & 0xff00) << 8 | (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8;
        }
        return uVar1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00762cf0 */
uint F_00762cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x762cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00762c60(this,param_1,param_2,param_4);
  *param_3 = uVar1;
  return uVar1;
}

/* ref: FUN_00762d10 */
uint F_00762d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x762d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  ushort uVar1;
  uint uVar2;
  int * piVar3;
  
  if (*(char *)((int)this + 0xc) != '\0') {
    uVar2 = 0;
    if (*(uint *)((int)this + 8) != 0) {
      piVar3 = *(int * PTR32 *)((int)this + 4);
      do {
        if (*piVar3 == param_1) {
          piVar3 = *(int * PTR32 *)((int)this + 4) + uVar2 * 3;
          if (piVar3 == (int *)0x0) {
            return 0xffffffff;
          }
          uVar2 = param_2;
          if ((char)param_3 != '\0') {
            uVar2 = (param_2 & 0xff0000 | param_2 >> 0x10) >> 8 |
                    (param_2 & 0xff00 | param_2 << 0x10) << 8;
          }
          uVar1 = 0;
          if (*(ushort *)(piVar3 + 1) == 0) {
            return 0xffffffff;
          }
          do {
            if (uVar2 == *(uint *)(piVar3[2] + (uint)uVar1 * 4)) {
              return (uint)uVar1;
            }
            uVar1 = uVar1 + 1;
          } while (uVar1 < *(ushort *)(piVar3 + 1));
          return 0xffffffff;
        }
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 3;
      } while (uVar2 < *(uint *)((int)this + 8));
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00762db0 */
uint F_00762db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x762db0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  ushort uVar1;
  uint uVar2;
  int * piVar3;
  
  if (*(char *)((int)this + 0xc) != '\0') {
    uVar2 = 0;
    if (*(uint *)((int)this + 8) != 0) {
      piVar3 = *(int * PTR32 *)((int)this + 4);
      do {
        if (*piVar3 == param_1) {
          piVar3 = *(int * PTR32 *)((int)this + 4) + uVar2 * 3;
          if (piVar3 == (int *)0x0) {
            return 0xffffffff;
          }
          uVar2 = param_2;
          if ((char)param_3 != '\0') {
            uVar2 = (param_2 & 0xff0000 | param_2 >> 0x10) >> 8 | (param_2 & 0xff00) << 8;
          }
          uVar1 = 0;
          if (*(ushort *)(piVar3 + 1) == 0) {
            return 0xffffffff;
          }
          do {
            if ((uVar2 & 0xffffff) == (*(uint *)(piVar3[2] + (uint)uVar1 * 4) & 0xffffff)) {
              return (uint)uVar1;
            }
            uVar1 = uVar1 + 1;
          } while (uVar1 < *(ushort *)(piVar3 + 1));
          return 0xffffffff;
        }
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 3;
      } while (uVar2 < *(uint *)((int)this + 8));
    }
  }
  return 0xffffffff;
}

/* ref: Client::UI2::Agent::AgentInterface::vf3 */
uint F_00762e60(unsigned int gen_a0)
{
  GEN_ENTER(0x762e60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    in_EAX = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return in_EAX;
}

/* ref: Client::UI2::Agent::AgentInterface::vf4 */
byte F_00762e90(unsigned int gen_a0)
{
  GEN_ENTER(0x762e90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 8) != 0;
}

/* ref: Client::UI2::Agent::AgentInterface::vf11 */
byte F_00762ea0(void)
{
  GEN_ENTER(0x762ea0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::UI2::Agent::AgentInterface::vf12 */
uint F_00762eb0(unsigned int gen_a0)
{
  GEN_ENTER(0x762eb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: Client::UI2::Agent::AgentInterface::vf6 */
unsigned int F_00762ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x762ec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 100))(piVar1,*(undefined4 *)(this + 8),1);
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentInterface::vf7 */
unsigned int F_00762ef0(unsigned int gen_a0)
{
  GEN_ENTER(0x762ef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 100))(piVar1,*(undefined4 *)(this + 8),0);
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentInterface::vf10 */
uint F_00762f20(unsigned int gen_a0)
{
  GEN_ENTER(0x762f20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xac))(piVar1,*(undefined4 *)(this + 8));
    return uVar2;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentInterface::vf8 */
byte F_00762f50(unsigned int gen_a0)
{
  GEN_ENTER(0x762f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this);
  return uVar1 == 4;
}

/* ref: Client::UI2::Agent::AgentInterface::vf9 */
byte F_00762f60(unsigned int gen_a0)
{
  GEN_ENTER(0x762f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this);
  return uVar1 == 8;
}

/* ref: FUN_00762fc0 */
unsigned int F_00762fc0(unsigned int gen_a0)
{
  GEN_ENTER(0x762fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  
  if (*(char *)((int)this + 4) != '\0') {
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    puVar2 = (undefined4 *)((int)this + 0xc);
    iVar1 = 0x65;
    do {
      ((code *)*(gen_code32 *)(*(int *)*puVar2 + 0x14))((int *)*puVar2,*(undefined4 *)((int)this + 8));
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    *(undefined1 *)((int)this + 5) = 0;
  }
  return 0;
}

/* ref: FUN_00763020 */
unsigned int F_00763020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x763020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  if (*(char *)((int)this + 4) != '\0') {
    puVar1 = (undefined4 *)((int)this + 0xc);
    iVar2 = 0x65;
    do {
      ((code *)*(gen_code32 *)(*(int *)*puVar1 + 0x34))((int *)*puVar1,param_1);
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00763050 */
uint F_00763050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x763050u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0xc + param_2 * 4);
}

/* ref: FUN_00763070 */
uint F_00763070(unsigned int gen_a0)
{
  GEN_ENTER(0x763070u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x28);
}

/* ref: FUN_00763080 */
uint F_00763080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x763080u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)((int)this + 0xc);
  iVar3 = 0x65;
  do {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)*puVar2 + 0x38))((int *)*puVar2,param_1,param_2);
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return uVar1;
}

/* ref: FUN_007630b0 */
uint F_007630b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7630b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)((int)this + 0xc);
  iVar3 = 0x65;
  do {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)*puVar2 + 0x3c))((int *)*puVar2,param_1);
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentConfigBase::vf2 */
unsigned int F_007630e0(void)
{
  GEN_ENTER(0x7630e0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::UI2::Agent::AgentConfigBase::vf3 */
unsigned int F_007630f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7630f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return 0;
}

/* ref: FUN_00763120 */
unsigned int F_00763120(unsigned int gen_a0)
{
  GEN_ENTER(0x763120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x24);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,((undefined1 *)(gen_frame + 0x4)),0,0,0);
    F_005a2670(((undefined1 *)(gen_frame + 0x4)));
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  return 0;
}

/* ref: FUN_00763160 */
unsigned int F_00763160(unsigned int gen_a0)
{
  GEN_ENTER(0x763160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0x28) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x28),0);
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentConfigBase::vf18 */
unsigned int F_00763190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x763190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  undefined * pvVar2;
  undefined4 uVar3;
  
  piVar1 = *(int * PTR32 *)(this + 4);
  if (this[0x2c] == (undefined1)0x0) {
    uVar3 = 0x3f;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1)));
    F_00447ac0(pvVar2,uVar3);
    return 0;
  }
  uVar3 = 0x1fffc0;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1)));
  F_00447ac0(pvVar2,uVar3);
  return 0;
}

/* ref: FUN_007631c0 */
uint F_007631c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7631c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint * in_EAX = 0;
  uint uVar2;
  uint * puVar3;
  int * piVar4;
  uint uVar5;
  uint * puVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  
  uVar1 = *(uint *)((int)this + 0x20);
  if ((uVar1 != 0) && (*(int *)((int)this + 8) != 0)) {
    uVar8 = 0;
    uVar2 = F_00404270();
    uVar5 = -(uint)((int)((ulonglong)uVar1 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar1 * 8);
    puVar3 = (uint *)F_00406c00(-(uint)(0xfffffffb < uVar5) | uVar5 + 4,0,uVar2,uVar8);
    in_EAX = (uint *)0x0;
    if (puVar3 != (uint *)0x0) {
      puVar6 = puVar3 + 1;
      *puVar3 = uVar1;
      in_EAX = puVar6;
      while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
        *in_EAX = 0;
        in_EAX = in_EAX + 2;
      }
      if (puVar6 != (uint *)0x0) {
        ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,puVar6);
        piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
        ((code *)*(gen_code32 *)(*piVar4 + 0x5c))
                  (piVar4,*(undefined4 *)((int)this + 8),*(undefined4 *)((int)this + 0x20),puVar6);
        uVar1 = *puVar3;
        puVar6 = puVar6 + uVar1 * 2;
        while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
          puVar6 = puVar6 + -2;
          F_005a2670(puVar6);
        }
        uVar7 = F_00406b30(puVar3);
        in_EAX = (uint *)uVar7;
      }
    }
  }
  return (uint)in_EAX;
}

/* ref: Client::UI2::Agent::AgentConfigBase::vf19 */
uint F_00763280(unsigned int gen_a0)
{
  GEN_ENTER(0x763280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 2;
  if (this[0x2c] == (undefined1)0x0) {
    uVar2 = 0x3f;
  }
  else {
    uVar2 = 0x1fffc0;
  }
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x3c))))(*(int * PTR32 *)(this + 4))));
  F_00447980(this_00,uVar2,uVar3);
  this[0x1d] = (undefined1)0x1;
  uVar1 = F_007631c0(this);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentConfigBase::vf20 */
uint F_007632c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7632c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  this[0x1d] = (undefined1)0x1;
  uVar1 = F_007631c0(this);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentConfigBase::vf22 */
uint F_007632d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7632d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined1 AVar1;
  byte bVar2;
  uint uVar3;
  
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x3c))))(*(int * PTR32 *)(this + 4));
  bVar2 = F_0043cdc0();
  if (bVar2 == 0) {
    AVar1 = this[0x1d];
    F_005a2710(param_1,4);
    *(uint *)((int)param_1 + 4) = (uint)(AVar1 != (undefined1)0x0);
  }
  else {
    F_005a2710(param_1,4);
    *(undefined4 *)((int)param_1 + 4) = 0;
    this[0x30] = (undefined1)0x0;
  }
  AVar1 = this[0x1b];
  F_005a2710((undefined *)((int)param_1 + 8),4);
  *(uint *)((int)param_1 + 0xc) = (uint)(AVar1 != (undefined1)0x0);
  AVar1 = this[0x1c];
  F_005a2710((undefined *)((int)param_1 + 0x10),4);
  *(uint *)((int)param_1 + 0x14) = (uint)(AVar1 != (undefined1)0x0);
  AVar1 = this[0x18];
  F_005a2710((undefined *)((int)param_1 + 0x18),3);
  *(int *)((int)param_1 + 0x1c) = (int)(char)AVar1;
  AVar1 = this[0x19];
  F_005a2710((undefined *)((int)param_1 + 0x20),3);
  *(int *)((int)param_1 + 0x24) = (int)(char)AVar1;
  AVar1 = this[0x1a];
  uVar3 = F_005a2710((undefined *)((int)param_1 + 0x28),3);
  *(uint *)((int)param_1 + 0x2c) = (uint)(AVar1 != (undefined1)0x0);
  this[0x1a] = (undefined1)0x0;
  return uVar3;
}

/* ref: FUN_007633a0 */
byte F_007633a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7633a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined * this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  uVar3 = 1;
  uVar2 = 2;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  bVar1 = F_00447870(this_00,param_1,param_2,uVar2,uVar3,uVar4);
  if (*(char *)((int)this + 0x1c) == '\0') {
    *(bool *)((int)this + 0x1c) = bVar1 == 0;
  }
  return bVar1 == 0;
}

/* ref: FUN_007633e0 */
uint F_007633e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7633e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 2;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(this_00,param_1,uVar2);
  return uVar1;
}

/* ref: FUN_00763410 */
unsigned int F_00763410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x763410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00763420 */
unsigned int F_00763420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x763420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00763430 */
unsigned int F_00763430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x763430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00763440 */
unsigned int F_00763440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x763440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00763450 */
uint F_00763450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x763450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_007631c0((undefined *)((int)this + -0xc));
  return uVar1;
}

/* ref: FUN_00763480 */
uint F_00763480(unsigned int gen_a0)
{
  GEN_ENTER(0x763480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 uVar3;
  
  if (*(int *)((int)this + 100) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 100),0);
    *(undefined4 *)((int)this + 100) = 0;
    if (*(char *)((int)this + 0x70) != '\0') {
      *(undefined1 *)((int)this + 0x70) = 0;
      uVar3 = 0x354;
      this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4))));
      F_0046a630(this_00,uVar3);
    }
  }
  uVar2 = F_007631c0(this);
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentConfigCharacter::vf3 */
unsigned int F_007634e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7634e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentConfigCharacter::vf20 */
uint F_00763510(unsigned int gen_a0)
{
  GEN_ENTER(0x763510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = 0;
  switch((unsigned int)(uintptr_t)(this[0x18])) {
  case (undefined1)0x0: ;
  case (undefined1)0x1: ;
  case (undefined1)0x2: ;
  case (undefined1)0x3: ;
  case (undefined1)0x4: ;
    uVar1 = 0x7c0;
    break;
  case (undefined1)0x5: ;
  case (undefined1)0x6: ;
    uVar1 = 0x1800;
    break;
  case (undefined1)0x8: ;
  case (undefined1)0x9: ;
  case (undefined1)0xa: ;
    uVar1 = 0xe000;
    break;
  case (undefined1)0xc: ;
  case (undefined1)0xd: ;
  case (undefined1)0xe: ;
    uVar1 = 0xe0000;
    break;
  case (undefined1)0xf: ;
    uVar1 = 0x100000;
  }
  uVar3 = 2;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x3c))))(*(int * PTR32 *)(this + 4))));
  F_00447980(this_00,uVar1,uVar3);
  this[0x1d] = (undefined1)0x1;
  uVar2 = F_007631c0(this);
  return uVar2;
}

/* ref: FUN_007635a0 */
byte F_007635a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7635a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  int * piVar1;
  byte bVar2;
  undefined * pvVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  ((uint *)(gen_frame + 0x8))[0x24] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0x5d: ;
  case 0x66: ;
  case 0x6d: ;
  case 0x76: ;
  case 0x7e: ;
  case 0x86: ;
  case 0x8e: ;
    break;
  default: ;
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c) ^ (uint)(uint)(gen_frame + 0x9c));
    return 0;
  }
  if (param_2 < 6) {
    piVar1 = *(int * PTR32 *)((int)this + 4);
    uVar8 = 1;
    uVar7 = 1;
    ((uint *)(gen_frame + 0x8))[0] = 1;
    ((uint *)(gen_frame + 0x8))[1] = 1;
    ((uint *)(gen_frame + 0x8))[2] = 1;
    ((uint *)(gen_frame + 0x8))[3] = 1;
    ((uint *)(gen_frame + 0x8))[4] = 1;
    ((uint *)(gen_frame + 0x8))[5] = 1;
    ((uint *)(gen_frame + 0x8))[6] = 1;
    ((uint *)(gen_frame + 0x8))[7] = 1;
    ((uint *)(gen_frame + 0x8))[10] = 1;
    ((uint *)(gen_frame + 0x8))[0xd] = 1;
    ((uint *)(gen_frame + 0x8))[0x14] = 1;
    ((uint *)(gen_frame + 0x8))[0x15] = 1;
    ((uint *)(gen_frame + 0x8))[0x1b] = 1;
    ((uint *)(gen_frame + 0x8))[0x20] = 1;
    ((uint *)(gen_frame + 0x8))[0x21] = 1;
    ((uint *)(gen_frame + 0x8))[0x22] = 1;
    uVar6 = 2;
    ((uint *)(gen_frame + 0x8))[8] = 0;
    ((uint *)(gen_frame + 0x8))[9] = 0;
    ((uint *)(gen_frame + 0x8))[0xb] = 0;
    ((uint *)(gen_frame + 0x8))[0xc] = 0;
    ((uint *)(gen_frame + 0x8))[0xe] = 0;
    ((uint *)(gen_frame + 0x8))[0xf] = 0;
    ((uint *)(gen_frame + 0x8))[0x10] = 0;
    ((uint *)(gen_frame + 0x8))[0x11] = 0;
    ((uint *)(gen_frame + 0x8))[0x12] = 0;
    ((uint *)(gen_frame + 0x8))[0x13] = 0;
    ((uint *)(gen_frame + 0x8))[0x16] = 0;
    ((uint *)(gen_frame + 0x8))[0x17] = 0;
    ((uint *)(gen_frame + 0x8))[0x18] = 0;
    ((uint *)(gen_frame + 0x8))[0x19] = 0;
    ((uint *)(gen_frame + 0x8))[0x1a] = 0;
    ((uint *)(gen_frame + 0x8))[0x1c] = 0;
    ((uint *)(gen_frame + 0x8))[0x1d] = 0;
    ((uint *)(gen_frame + 0x8))[0x1e] = 0;
    ((uint *)(gen_frame + 0x8))[0x1f] = 0;
    ((uint *)(gen_frame + 0x8))[0x23] = 0;
    uVar5 = ((uint *)(gen_frame + 0x8))[(int)(param_2 * 6)];
    iVar4 = param_1 + 1;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1)));
    bVar2 = F_00447870(pvVar3,iVar4,uVar5,uVar6,uVar7,uVar8);
    if (*(char *)((int)this + 0x1c) == '\0') {
      *(bool *)((int)this + 0x1c) = bVar2 == 0;
    }
    uVar5 = ((uint *)(gen_frame + 0x8))[(int)(param_2 * 6 + 1)];
    uVar8 = 1;
    uVar7 = 1;
    uVar6 = 2;
    iVar4 = param_1 + 2;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
    bVar2 = F_00447870(pvVar3,iVar4,uVar5,uVar6,uVar7,uVar8);
    if (*(char *)((int)this + 0x1c) == '\0') {
      *(bool *)((int)this + 0x1c) = bVar2 == 0;
    }
    uVar5 = ((uint *)(gen_frame + 0x8))[(int)(param_2 * 6 + 2)];
    uVar8 = 1;
    uVar7 = 1;
    uVar6 = 2;
    iVar4 = param_1 + 3;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
    bVar2 = F_00447870(pvVar3,iVar4,uVar5,uVar6,uVar7,uVar8);
    if (*(char *)((int)this + 0x1c) == '\0') {
      *(bool *)((int)this + 0x1c) = bVar2 == 0;
    }
    uVar5 = ((uint *)(gen_frame + 0x8))[(int)(param_2 * 6 + 3)];
    uVar8 = 1;
    uVar7 = 1;
    uVar6 = 2;
    iVar4 = param_1 + 4;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
    bVar2 = F_00447870(pvVar3,iVar4,uVar5,uVar6,uVar7,uVar8);
    if (*(char *)((int)this + 0x1c) == '\0') {
      *(bool *)((int)this + 0x1c) = bVar2 == 0;
    }
    uVar5 = ((uint *)(gen_frame + 0x8))[(int)(param_2 * 6 + 4)];
    uVar8 = 1;
    uVar7 = 1;
    uVar6 = 2;
    iVar4 = param_1 + 5;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
    bVar2 = F_00447870(pvVar3,iVar4,uVar5,uVar6,uVar7,uVar8);
    if (*(char *)((int)this + 0x1c) == '\0') {
      *(bool *)((int)this + 0x1c) = bVar2 == 0;
    }
    uVar5 = ((uint *)(gen_frame + 0x8))[(int)(param_2 * 6 + 5)];
    uVar8 = 1;
    uVar7 = 1;
    uVar6 = 2;
    iVar4 = param_1 + 6;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
    bVar2 = F_00447870(pvVar3,iVar4,uVar5,uVar6,uVar7,uVar8);
    if (*(char *)((int)this + 0x1c) == '\0') {
      *(bool *)((int)this + 0x1c) = bVar2 == 0;
    }
    *(undefined1 *)((int)this + 0x1d) = 1;
  }
  F_00c47745(((uint *)(gen_frame + 0x8))[0x24] ^ (uint)(uint)(gen_frame + 0x9c));
  return 1;
}

/* ref: FUN_00763810 */
byte F_00763810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x763810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x2d0];
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  ((uint *)(gen_frame + 0xc))[0xaf] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2cc);
  if (((param_1 != 0xc3) && (param_1 != 0xce)) && (param_1 != 0xe1)) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2cc) ^ (uint)(uint)(gen_frame + 0x2cc));
    return 0;
  }
  if (param_2 < 4) {
    ((uint *)(gen_frame + 0xc))[0x8c] = 0xc5;
    ((uint *)(gen_frame + 0xc))[0x8d] = 0xc6;
    ((uint *)(gen_frame + 0xc))[0x8e] = 199;
    ((uint *)(gen_frame + 0xc))[0x8f] = 0xc9;
    ((uint *)(gen_frame + 0xc))[0x90] = 0xca;
    ((uint *)(gen_frame + 0xc))[0x91] = 0xcc;
    ((uint *)(gen_frame + 0xc))[0x92] = 0xcd;
    ((uint *)(gen_frame + 0xc))[0x93] = 0xd0;
    ((uint *)(gen_frame + 0xc))[0x94] = 0xd1;
    ((uint *)(gen_frame + 0xc))[0x95] = 0xd2;
    ((uint *)(gen_frame + 0xc))[0x96] = 0xd3;
    ((uint *)(gen_frame + 0xc))[0x97] = 0xd4;
    ((uint *)(gen_frame + 0xc))[0x98] = 0xd6;
    ((uint *)(gen_frame + 0xc))[0x99] = 0xd7;
    ((uint *)(gen_frame + 0xc))[0x9a] = 0xd8;
    ((uint *)(gen_frame + 0xc))[0x9b] = 0xd9;
    ((uint *)(gen_frame + 0xc))[0x9c] = 0xda;
    ((uint *)(gen_frame + 0xc))[0x9d] = 0xdc;
    ((uint *)(gen_frame + 0xc))[0x9e] = 0xdd;
    ((uint *)(gen_frame + 0xc))[0x9f] = 0xde;
    ((uint *)(gen_frame + 0xc))[0xa0] = 0xdf;
    ((uint *)(gen_frame + 0xc))[0xa1] = 0xe0;
    ((uint *)(gen_frame + 0xc))[0xa2] = 0xe3;
    ((uint *)(gen_frame + 0xc))[0xa3] = 0xe4;
    ((uint *)(gen_frame + 0xc))[0xa4] = 0xe6;
    ((uint *)(gen_frame + 0xc))[0xa5] = 0xe7;
    ((uint *)(gen_frame + 0xc))[0xa6] = 0xe9;
    ((uint *)(gen_frame + 0xc))[0xa7] = 0xea;
    ((uint *)(gen_frame + 0xc))[0xa8] = 0xec;
    ((uint *)(gen_frame + 0xc))[0xa9] = 0xed;
    ((uint *)(gen_frame + 0xc))[0xaa] = 0xef;
    ((uint *)(gen_frame + 0xc))[0xab] = 0xf0;
    ((uint *)(gen_frame + 0xc))[0xac] = 0xf2;
    ((uint *)(gen_frame + 0xc))[0xad] = 0xf3;
    ((uint *)(gen_frame + 0xc))[0xae] = 0xf5;
    ((uint *)(gen_frame + 0xc))[0] = 0;
    ((uint *)(gen_frame + 0xc))[1] = 0;
    ((uint *)(gen_frame + 0xc))[2] = 0;
    ((uint *)(gen_frame + 0xc))[3] = 0;
    ((uint *)(gen_frame + 0xc))[4] = 0;
    ((uint *)(gen_frame + 0xc))[5] = 0;
    ((uint *)(gen_frame + 0xc))[6] = 0;
    ((uint *)(gen_frame + 0xc))[7] = 0;
    ((uint *)(gen_frame + 0xc))[8] = 0;
    ((uint *)(gen_frame + 0xc))[9] = 0;
    ((uint *)(gen_frame + 0xc))[10] = 0;
    ((uint *)(gen_frame + 0xc))[0xb] = 0;
    ((uint *)(gen_frame + 0xc))[0xc] = 0;
    ((uint *)(gen_frame + 0xc))[0xd] = 0;
    ((uint *)(gen_frame + 0xc))[0xe] = 0;
    ((uint *)(gen_frame + 0xc))[0xf] = 0;
    ((uint *)(gen_frame + 0xc))[0x10] = 0;
    ((uint *)(gen_frame + 0xc))[0x11] = 0;
    ((uint *)(gen_frame + 0xc))[0x12] = 0;
    ((uint *)(gen_frame + 0xc))[0x13] = 0;
    ((uint *)(gen_frame + 0xc))[0x14] = 0;
    ((uint *)(gen_frame + 0xc))[0x15] = 0;
    ((uint *)(gen_frame + 0xc))[0x16] = 0;
    ((uint *)(gen_frame + 0xc))[0x17] = 0;
    ((uint *)(gen_frame + 0xc))[0x18] = 0;
    ((uint *)(gen_frame + 0xc))[0x19] = 0;
    ((uint *)(gen_frame + 0xc))[0x1a] = 0;
    ((uint *)(gen_frame + 0xc))[0x1b] = 0;
    ((uint *)(gen_frame + 0xc))[0x1c] = 0;
    ((uint *)(gen_frame + 0xc))[0x1d] = 0;
    ((uint *)(gen_frame + 0xc))[0x1e] = 0;
    ((uint *)(gen_frame + 0xc))[0x1f] = 0;
    ((uint *)(gen_frame + 0xc))[0x20] = 0;
    ((uint *)(gen_frame + 0xc))[0x21] = 0;
    ((uint *)(gen_frame + 0xc))[0x22] = 0;
    ((uint *)(gen_frame + 0xc))[0x23] = 3;
    ((uint *)(gen_frame + 0xc))[0x24] = 0;
    ((uint *)(gen_frame + 0xc))[0x25] = 2;
    ((uint *)(gen_frame + 0xc))[0x26] = 0;
    ((uint *)(gen_frame + 0xc))[0x27] = 2;
    ((uint *)(gen_frame + 0xc))[0x28] = 0;
    ((uint *)(gen_frame + 0xc))[0x29] = 2;
    ((uint *)(gen_frame + 0xc))[0x2a] = 0;
    ((uint *)(gen_frame + 0xc))[0x2b] = 0;
    ((uint *)(gen_frame + 0xc))[0x2c] = 2;
    ((uint *)(gen_frame + 0xc))[0x2d] = 0;
    ((uint *)(gen_frame + 0xc))[0x2e] = 2;
    ((uint *)(gen_frame + 0xc))[0x2f] = 1;
    ((uint *)(gen_frame + 0xc))[0x30] = 0;
    ((uint *)(gen_frame + 0xc))[0x31] = 2;
    ((uint *)(gen_frame + 0xc))[0x32] = 1;
    ((uint *)(gen_frame + 0xc))[0x33] = 2;
    ((uint *)(gen_frame + 0xc))[0x34] = 0;
    ((uint *)(gen_frame + 0xc))[0x35] = 0;
    ((uint *)(gen_frame + 0xc))[0x36] = 2;
    ((uint *)(gen_frame + 0xc))[0x37] = 2;
    ((uint *)(gen_frame + 0xc))[0x38] = 2;
    ((uint *)(gen_frame + 0xc))[0x39] = 0;
    ((uint *)(gen_frame + 0xc))[0x3a] = 1;
    ((uint *)(gen_frame + 0xc))[0x3b] = 0;
    ((uint *)(gen_frame + 0xc))[0x3c] = 1;
    ((uint *)(gen_frame + 0xc))[0x3d] = 0;
    ((uint *)(gen_frame + 0xc))[0x3e] = 1;
    ((uint *)(gen_frame + 0xc))[0x3f] = 0;
    ((uint *)(gen_frame + 0xc))[0x40] = 1;
    ((uint *)(gen_frame + 0xc))[0x41] = 0;
    ((uint *)(gen_frame + 0xc))[0x42] = 1;
    ((uint *)(gen_frame + 0xc))[0x43] = 0;
    ((uint *)(gen_frame + 0xc))[0x44] = 1;
    ((uint *)(gen_frame + 0xc))[0x45] = 0;
    ((uint *)(gen_frame + 0xc))[0x46] = 3;
    ((uint *)(gen_frame + 0xc))[0x47] = 0;
    ((uint *)(gen_frame + 0xc))[0x48] = 2;
    ((uint *)(gen_frame + 0xc))[0x49] = 1;
    ((uint *)(gen_frame + 0xc))[0x4a] = 2;
    ((uint *)(gen_frame + 0xc))[0x4b] = 1;
    ((uint *)(gen_frame + 0xc))[0x4c] = 2;
    ((uint *)(gen_frame + 0xc))[0x4d] = 1;
    ((uint *)(gen_frame + 0xc))[0x4e] = 0;
    ((uint *)(gen_frame + 0xc))[0x4f] = 2;
    ((uint *)(gen_frame + 0xc))[0x50] = 2;
    ((uint *)(gen_frame + 0xc))[0x51] = 2;
    ((uint *)(gen_frame + 0xc))[0x52] = 2;
    ((uint *)(gen_frame + 0xc))[0x53] = 0;
    ((uint *)(gen_frame + 0xc))[0x54] = 2;
    ((uint *)(gen_frame + 0xc))[0x55] = 2;
    ((uint *)(gen_frame + 0xc))[0x56] = 2;
    ((uint *)(gen_frame + 0xc))[0x57] = 2;
    ((uint *)(gen_frame + 0xc))[0x58] = 0;
    ((uint *)(gen_frame + 0xc))[0x59] = 2;
    ((uint *)(gen_frame + 0xc))[0x5a] = 2;
    ((uint *)(gen_frame + 0xc))[0x5b] = 2;
    ((uint *)(gen_frame + 0xc))[0x5c] = 1;
    ((uint *)(gen_frame + 0xc))[0x5d] = 1;
    ((uint *)(gen_frame + 0xc))[0x5e] = 0;
    ((uint *)(gen_frame + 0xc))[0x5f] = 1;
    ((uint *)(gen_frame + 0xc))[0x60] = 1;
    ((uint *)(gen_frame + 0xc))[0x61] = 1;
    ((uint *)(gen_frame + 0xc))[0x62] = 0;
    ((uint *)(gen_frame + 0xc))[99] = 1;
    ((uint *)(gen_frame + 0xc))[100] = 0;
    ((uint *)(gen_frame + 0xc))[0x65] = 1;
    ((uint *)(gen_frame + 0xc))[0x66] = 0;
    ((uint *)(gen_frame + 0xc))[0x67] = 1;
    ((uint *)(gen_frame + 0xc))[0x68] = 1;
    ((uint *)(gen_frame + 0xc))[0x69] = 3;
    ((uint *)(gen_frame + 0xc))[0x6a] = 0;
    ((uint *)(gen_frame + 0xc))[0x6b] = 3;
    ((uint *)(gen_frame + 0xc))[0x6c] = 3;
    ((uint *)(gen_frame + 0xc))[0x6d] = 3;
    ((uint *)(gen_frame + 0xc))[0x6e] = 3;
    ((uint *)(gen_frame + 0xc))[0x6f] = 3;
    ((uint *)(gen_frame + 0xc))[0x70] = 3;
    ((uint *)(gen_frame + 0xc))[0x71] = 0;
    ((uint *)(gen_frame + 0xc))[0x72] = 3;
    ((uint *)(gen_frame + 0xc))[0x73] = 3;
    ((uint *)(gen_frame + 0xc))[0x74] = 3;
    ((uint *)(gen_frame + 0xc))[0x75] = 3;
    ((uint *)(gen_frame + 0xc))[0x76] = 0;
    ((uint *)(gen_frame + 0xc))[0x77] = 3;
    ((uint *)(gen_frame + 0xc))[0x78] = 3;
    ((uint *)(gen_frame + 0xc))[0x79] = 3;
    ((uint *)(gen_frame + 0xc))[0x7a] = 3;
    ((uint *)(gen_frame + 0xc))[0x7c] = 3;
    ((uint *)(gen_frame + 0xc))[0x7d] = 3;
    ((uint *)(gen_frame + 0xc))[0x7e] = 3;
    (*(uint * PTR32 *)(gen_frame + 0x4)) = ((uint *)(gen_frame + 0xc)) + param_2 * 0x23;
    ((uint *)(gen_frame + 0xc))[0x7b] = 0;
    ((uint *)(gen_frame + 0xc))[0x7f] = 2;
    ((uint *)(gen_frame + 0xc))[0x80] = 2;
    ((uint *)(gen_frame + 0xc))[0x81] = 2;
    ((uint *)(gen_frame + 0xc))[0x82] = 2;
    ((uint *)(gen_frame + 0xc))[0x83] = 2;
    ((uint *)(gen_frame + 0xc))[0x84] = 2;
    ((uint *)(gen_frame + 0xc))[0x85] = 2;
    ((uint *)(gen_frame + 0xc))[0x86] = 2;
    ((uint *)(gen_frame + 0xc))[0x87] = 2;
    ((uint *)(gen_frame + 0xc))[0x88] = 2;
    ((uint *)(gen_frame + 0xc))[0x89] = 2;
    ((uint *)(gen_frame + 0xc))[0x8a] = 2;
    ((uint *)(gen_frame + 0xc))[0x8b] = 2;
    (*(int *)(gen_frame + 0x0)) = 0;
    do {
      uVar3 = *(*(uint * PTR32 *)(gen_frame + 0x4));
      uVar6 = 1;
      uVar5 = 1;
      uVar4 = 2;
      uVar2 = ((uint *)(gen_frame + 0xc))[(int)((*(int *)(gen_frame + 0x0)) + 0x8c)];
      this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
      bVar1 = F_00447870(this_00,uVar2,uVar3,uVar4,uVar5,uVar6);
      if (*(char *)((int)this + 0x1c) == '\0') {
        *(bool *)((int)this + 0x1c) = bVar1 == 0;
      }
      (*(uint * PTR32 *)(gen_frame + 0x4)) = (*(uint * PTR32 *)(gen_frame + 0x4)) + 1;
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
    } while ((*(int *)(gen_frame + 0x0)) < 0x23);
    *(undefined1 *)((int)this + 0x1d) = 1;
  }
  F_00c47745(((uint *)(gen_frame + 0xc))[0xaf] ^ (uint)(uint)(gen_frame + 0x2cc));
  return 1;
}

/* ref: FUN_00763d50 */
uint F_00763d50(unsigned int gen_a0)
{
  GEN_ENTER(0x763d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x270];
  undefined * this_00;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  ((uint *)(gen_frame + 0x10))[0x96] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x26c);
  ((uint *)(gen_frame + 0x10))[0x78] = 0xc5;
  ((uint *)(gen_frame + 0x10))[0x79] = 0xc6;
  ((uint *)(gen_frame + 0x10))[0x7a] = 199;
  ((uint *)(gen_frame + 0x10))[0x7b] = 0xc9;
  ((uint *)(gen_frame + 0x10))[0x7c] = 0xca;
  ((uint *)(gen_frame + 0x10))[0x7d] = 0xcc;
  ((uint *)(gen_frame + 0x10))[0x7e] = 0xcd;
  ((uint *)(gen_frame + 0x10))[0x7f] = 0xd0;
  ((uint *)(gen_frame + 0x10))[0x80] = 0xd1;
  ((uint *)(gen_frame + 0x10))[0x81] = 0xd2;
  ((uint *)(gen_frame + 0x10))[0x82] = 0xd3;
  ((uint *)(gen_frame + 0x10))[0x83] = 0xd4;
  ((uint *)(gen_frame + 0x10))[0x84] = 0xdc;
  ((uint *)(gen_frame + 0x10))[0x85] = 0xdd;
  ((uint *)(gen_frame + 0x10))[0x86] = 0xde;
  ((uint *)(gen_frame + 0x10))[0x87] = 0xdf;
  ((uint *)(gen_frame + 0x10))[0x88] = 0xe0;
  ((uint *)(gen_frame + 0x10))[0x89] = 0xe3;
  ((uint *)(gen_frame + 0x10))[0x8a] = 0xe4;
  ((uint *)(gen_frame + 0x10))[0x8b] = 0xe6;
  ((uint *)(gen_frame + 0x10))[0x8c] = 0xe7;
  ((uint *)(gen_frame + 0x10))[0x8d] = 0xe9;
  ((uint *)(gen_frame + 0x10))[0x8e] = 0xea;
  ((uint *)(gen_frame + 0x10))[0x8f] = 0xec;
  ((uint *)(gen_frame + 0x10))[0x90] = 0xed;
  ((uint *)(gen_frame + 0x10))[0x91] = 0xef;
  ((uint *)(gen_frame + 0x10))[0x92] = 0xf0;
  ((uint *)(gen_frame + 0x10))[0x93] = 0xf2;
  ((uint *)(gen_frame + 0x10))[0x94] = 0xf3;
  ((uint *)(gen_frame + 0x10))[0x95] = 0xf5;
  ((uint *)(gen_frame + 0x10))[0] = 0;
  ((uint *)(gen_frame + 0x10))[1] = 0;
  ((uint *)(gen_frame + 0x10))[2] = 0;
  ((uint *)(gen_frame + 0x10))[3] = 0;
  ((uint *)(gen_frame + 0x10))[4] = 0;
  ((uint *)(gen_frame + 0x10))[5] = 0;
  ((uint *)(gen_frame + 0x10))[6] = 0;
  ((uint *)(gen_frame + 0x10))[7] = 0;
  ((uint *)(gen_frame + 0x10))[8] = 0;
  ((uint *)(gen_frame + 0x10))[9] = 0;
  ((uint *)(gen_frame + 0x10))[10] = 0;
  ((uint *)(gen_frame + 0x10))[0xb] = 0;
  ((uint *)(gen_frame + 0x10))[0xc] = 0;
  ((uint *)(gen_frame + 0x10))[0xd] = 0;
  ((uint *)(gen_frame + 0x10))[0xe] = 0;
  ((uint *)(gen_frame + 0x10))[0xf] = 0;
  ((uint *)(gen_frame + 0x10))[0x10] = 0;
  ((uint *)(gen_frame + 0x10))[0x11] = 0;
  ((uint *)(gen_frame + 0x10))[0x12] = 0;
  ((uint *)(gen_frame + 0x10))[0x13] = 0;
  ((uint *)(gen_frame + 0x10))[0x14] = 0;
  ((uint *)(gen_frame + 0x10))[0x15] = 0;
  ((uint *)(gen_frame + 0x10))[0x16] = 0;
  ((uint *)(gen_frame + 0x10))[0x17] = 0;
  ((uint *)(gen_frame + 0x10))[0x18] = 0;
  ((uint *)(gen_frame + 0x10))[0x19] = 0;
  ((uint *)(gen_frame + 0x10))[0x1a] = 0;
  ((uint *)(gen_frame + 0x10))[0x1b] = 0;
  ((uint *)(gen_frame + 0x10))[0x1c] = 0;
  ((uint *)(gen_frame + 0x10))[0x1d] = 0;
  ((uint *)(gen_frame + 0x10))[0x1e] = 3;
  ((uint *)(gen_frame + 0x10))[0x1f] = 0;
  ((uint *)(gen_frame + 0x10))[0x20] = 2;
  ((uint *)(gen_frame + 0x10))[0x21] = 0;
  ((uint *)(gen_frame + 0x10))[0x22] = 2;
  ((uint *)(gen_frame + 0x10))[0x23] = 0;
  ((uint *)(gen_frame + 0x10))[0x24] = 2;
  ((uint *)(gen_frame + 0x10))[0x25] = 0;
  ((uint *)(gen_frame + 0x10))[0x26] = 0;
  ((uint *)(gen_frame + 0x10))[0x27] = 2;
  ((uint *)(gen_frame + 0x10))[0x28] = 0;
  ((uint *)(gen_frame + 0x10))[0x29] = 2;
  ((uint *)(gen_frame + 0x10))[0x2a] = 0;
  ((uint *)(gen_frame + 0x10))[0x2b] = 0;
  ((uint *)(gen_frame + 0x10))[0x3c] = 3;
  ((uint *)(gen_frame + 0x10))[0x5a] = 3;
  ((uint *)(gen_frame + 0x10))[0x5c] = 3;
  ((uint *)(gen_frame + 0x10))[0x5d] = 3;
  ((uint *)(gen_frame + 0x10))[0x5e] = 3;
  ((uint *)(gen_frame + 0x10))[0x5f] = 3;
  ((uint *)(gen_frame + 0x10))[0x60] = 3;
  ((uint *)(gen_frame + 0x10))[0x61] = 3;
  ((uint *)(gen_frame + 0x10))[99] = 3;
  ((uint *)(gen_frame + 0x10))[100] = 3;
  ((uint *)(gen_frame + 0x10))[0x65] = 3;
  ((uint *)(gen_frame + 0x10))[0x66] = 3;
  ((uint *)(gen_frame + 0x10))[0x68] = 3;
  ((uint *)(gen_frame + 0x10))[0x69] = 3;
  ((uint *)(gen_frame + 0x10))[0x6a] = 3;
  (*(uint * PTR32 *)(gen_frame + 0x8)) = ((uint *)(gen_frame + 0x10));
  ((uint *)(gen_frame + 0x10))[0x2c] = 2;
  ((uint *)(gen_frame + 0x10))[0x2d] = 2;
  ((uint *)(gen_frame + 0x10))[0x2e] = 2;
  ((uint *)(gen_frame + 0x10))[0x2f] = 0;
  ((uint *)(gen_frame + 0x10))[0x30] = 1;
  ((uint *)(gen_frame + 0x10))[0x31] = 0;
  ((uint *)(gen_frame + 0x10))[0x32] = 1;
  ((uint *)(gen_frame + 0x10))[0x33] = 0;
  ((uint *)(gen_frame + 0x10))[0x34] = 1;
  ((uint *)(gen_frame + 0x10))[0x35] = 0;
  ((uint *)(gen_frame + 0x10))[0x36] = 1;
  ((uint *)(gen_frame + 0x10))[0x37] = 0;
  ((uint *)(gen_frame + 0x10))[0x38] = 1;
  ((uint *)(gen_frame + 0x10))[0x39] = 0;
  ((uint *)(gen_frame + 0x10))[0x3a] = 1;
  ((uint *)(gen_frame + 0x10))[0x3b] = 0;
  ((uint *)(gen_frame + 0x10))[0x3d] = 0;
  ((uint *)(gen_frame + 0x10))[0x3e] = 2;
  ((uint *)(gen_frame + 0x10))[0x3f] = 1;
  ((uint *)(gen_frame + 0x10))[0x40] = 2;
  ((uint *)(gen_frame + 0x10))[0x41] = 1;
  ((uint *)(gen_frame + 0x10))[0x42] = 2;
  ((uint *)(gen_frame + 0x10))[0x43] = 1;
  ((uint *)(gen_frame + 0x10))[0x44] = 0;
  ((uint *)(gen_frame + 0x10))[0x45] = 2;
  ((uint *)(gen_frame + 0x10))[0x46] = 2;
  ((uint *)(gen_frame + 0x10))[0x47] = 2;
  ((uint *)(gen_frame + 0x10))[0x48] = 2;
  ((uint *)(gen_frame + 0x10))[0x49] = 0;
  ((uint *)(gen_frame + 0x10))[0x4a] = 2;
  ((uint *)(gen_frame + 0x10))[0x4b] = 2;
  ((uint *)(gen_frame + 0x10))[0x4c] = 2;
  ((uint *)(gen_frame + 0x10))[0x4d] = 1;
  ((uint *)(gen_frame + 0x10))[0x4e] = 1;
  ((uint *)(gen_frame + 0x10))[0x4f] = 0;
  ((uint *)(gen_frame + 0x10))[0x50] = 1;
  ((uint *)(gen_frame + 0x10))[0x51] = 1;
  ((uint *)(gen_frame + 0x10))[0x52] = 1;
  ((uint *)(gen_frame + 0x10))[0x53] = 0;
  ((uint *)(gen_frame + 0x10))[0x54] = 1;
  ((uint *)(gen_frame + 0x10))[0x55] = 0;
  ((uint *)(gen_frame + 0x10))[0x56] = 1;
  ((uint *)(gen_frame + 0x10))[0x57] = 0;
  ((uint *)(gen_frame + 0x10))[0x58] = 1;
  ((uint *)(gen_frame + 0x10))[0x59] = 1;
  ((uint *)(gen_frame + 0x10))[0x5b] = 0;
  ((uint *)(gen_frame + 0x10))[0x62] = 0;
  ((uint *)(gen_frame + 0x10))[0x67] = 0;
  ((uint *)(gen_frame + 0x10))[0x6b] = 2;
  ((uint *)(gen_frame + 0x10))[0x6c] = 2;
  ((uint *)(gen_frame + 0x10))[0x6d] = 2;
  ((uint *)(gen_frame + 0x10))[0x6e] = 2;
  ((uint *)(gen_frame + 0x10))[0x6f] = 2;
  ((uint *)(gen_frame + 0x10))[0x70] = 2;
  ((uint *)(gen_frame + 0x10))[0x71] = 2;
  ((uint *)(gen_frame + 0x10))[0x72] = 2;
  ((uint *)(gen_frame + 0x10))[0x73] = 2;
  ((uint *)(gen_frame + 0x10))[0x74] = 2;
  ((uint *)(gen_frame + 0x10))[0x75] = 2;
  ((uint *)(gen_frame + 0x10))[0x76] = 2;
  ((uint *)(gen_frame + 0x10))[0x77] = 2;
  (*(uint *)(gen_frame + 0xc)) = 0;
  do {
    iVar2 = 0;
    (*(uint * PTR32 *)(gen_frame + 0x4)) = (*(uint * PTR32 *)(gen_frame + 0x8));
    do {
      uVar1 = ((uint *)(gen_frame + 0x10))[(int)(iVar2 + 0x78)];
      uVar3 = 2;
      this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
      uVar1 = F_0043c920(this_00,uVar1,uVar3);
      if (uVar1 != *(*(uint * PTR32 *)(gen_frame + 0x4))) break;
      (*(uint * PTR32 *)(gen_frame + 0x4)) = (*(uint * PTR32 *)(gen_frame + 0x4)) + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x1e);
    uVar1 = (*(uint *)(gen_frame + 0xc));
    if (iVar2 == 0x1e) goto LAB_00764197;
    (*(uint * PTR32 *)(gen_frame + 0x8)) = (*(uint * PTR32 *)(gen_frame + 0x8)) + 0x1e;
    (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
  } while ((int)(*(uint *)(gen_frame + 0xc)) < 4);
  uVar1 = 4;
LAB_00764197: ;
  F_00c47745(((uint *)(gen_frame + 0x10))[0x96] ^ (uint)(uint)(gen_frame + 0x26c));
  return uVar1;
}

/* ref: FUN_007641b0 */
uint F_007641b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x7641b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int param_6 = (int)gen_a5;
  if (param_1 == 0) {
    if (param_2 == 0) {
      if (param_3 == 0) {
        if (((param_4 != 0) && (param_5 == 0)) && (param_6 == 0)) {
          return 4;
        }
      }
      else if (param_4 != 0) {
        if (param_5 == 0) {
          if (param_6 == 0) {
            return 3;
          }
        }
        else if (param_6 == 0) {
          return 5;
        }
      }
    }
    else if (((param_3 == 0) && (param_4 == 0)) && ((param_5 == 0 && (param_6 == 0)))) {
      return 2;
    }
  }
  else if (param_2 != 0) {
    if (param_3 != 0) {
      if (((param_4 != 0) && (param_5 != 0)) && (param_6 != 0)) {
        return 0;
      }
      if (param_3 != 0) {
        return 6;
      }
    }
    if (((param_4 == 0) && (param_5 != 0)) && (param_6 == 0)) {
      return 1;
    }
  }
  return 6;
}

/* ref: FUN_00764270 */
uint F_00764270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x764270u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = F_007641b0(param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: FUN_007642a0 */
unsigned int F_007642a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7642a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0x58) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x58),0);
    *(undefined4 *)((int)this + 0x58) = 0;
  }
  return 0;
}

/* ref: FUN_007642d0 */
uint F_007642d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7642d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1 >> 0x10 & 0xff | (param_1 & 0xff) << 0x10 | param_1 & 0xff00ff00;
}

/* ref: FUN_00764300 */
uint F_00764300(unsigned int gen_a0)
{
  GEN_ENTER(0x764300u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1 >> 0x10 & 0xff | (param_1 & 0xff) << 0x10 | param_1 & 0xff00ff00;
}

/* ref: FUN_00764330 */
uint F_00764330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x764330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 2;
  uVar4 = 0x44;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x68),3);
  *(uint *)(param_1 + 0x6c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x45;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x70),3);
  *(uint *)(param_1 + 0x74) = uVar2;
  uVar5 = 2;
  uVar4 = 0x46;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x78),3);
  *(uint *)(param_1 + 0x7c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x47;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x80),3);
  *(uint *)(param_1 + 0x84) = uVar2;
  uVar5 = 2;
  uVar4 = 0x48;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x88),3);
  *(uint *)(param_1 + 0x8c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x49;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x90),3);
  *(uint *)(param_1 + 0x94) = uVar2;
  uVar5 = 2;
  uVar4 = 0x4a;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x98),3);
  *(uint *)(param_1 + 0x9c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x4b;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa0),3);
  *(uint *)(param_1 + 0xa4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x4c;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa8),3);
  *(uint *)(param_1 + 0xac) = uVar2;
  uVar5 = 2;
  uVar4 = 0x4d;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xb0),3);
  *(uint *)(param_1 + 0xb4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x4e;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xb8),3);
  uVar5 = 2;
  *(uint *)(param_1 + 0xbc) = uVar2;
  uVar4 = 0x4f;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xc0),3);
  *(uint *)(param_1 + 0xc4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x50;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 200),3);
  *(uint *)(param_1 + 0xcc) = uVar2;
  uVar5 = 2;
  uVar4 = 0x51;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xd0),3);
  *(uint *)(param_1 + 0xd4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x52;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xd8),3);
  *(uint *)(param_1 + 0xdc) = uVar2;
  uVar5 = 2;
  uVar4 = 0x53;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xe0),3);
  *(uint *)(param_1 + 0xe4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x54;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xe8),3);
  *(uint *)(param_1 + 0xec) = uVar2;
  uVar5 = 2;
  uVar4 = 0x55;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xf0),3);
  *(uint *)(param_1 + 0xf4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x56;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xf8),3);
  *(uint *)(param_1 + 0xfc) = uVar2;
  uVar5 = 2;
  uVar4 = 0x57;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  uVar3 = F_005a2710((undefined *)(param_1 + 0x100),3);
  *(uint *)(param_1 + 0x104) = uVar2;
  return uVar3;
}

/* ref: FUN_007646d0 */
uint F_007646d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7646d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar9 = 2;
  uVar8 = 0x58;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x68),3);
  *(uint *)(param_1 + 0x6c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x59;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x70),3);
  *(uint *)(param_1 + 0x74) = uVar2;
  uVar9 = 2;
  uVar8 = 0x5a;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x78),3);
  *(uint *)(param_1 + 0x7c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x5b;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x80),3);
  *(uint *)(param_1 + 0x84) = uVar2;
  uVar9 = 2;
  uVar8 = 0x5c;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x88),3);
  *(uint *)(param_1 + 0x8c) = uVar2;
  uVar9 = 2;
  uVar8 = 99;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x62;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x61;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x60;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x5f;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar6 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x5e;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar7 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x90),3);
  uVar2 = F_007641b0(uVar7,uVar6,uVar5,uVar4,uVar3,uVar2);
  *(uint *)(param_1 + 0x94) = uVar2;
  uVar9 = 2;
  uVar8 = 0x5e;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x98),3);
  *(uint *)(param_1 + 0x9c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x5f;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xa0),3);
  *(uint *)(param_1 + 0xa4) = uVar2;
  uVar9 = 2;
  uVar8 = 0x60;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xa8),3);
  *(uint *)(param_1 + 0xac) = uVar2;
  uVar9 = 2;
  uVar8 = 0x61;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xb0),3);
  *(uint *)(param_1 + 0xb4) = uVar2;
  uVar9 = 2;
  uVar8 = 0x62;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xb8),3);
  *(uint *)(param_1 + 0xbc) = uVar2;
  uVar9 = 2;
  uVar8 = 99;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xc0),3);
  *(uint *)(param_1 + 0xc4) = uVar2;
  uVar9 = 2;
  uVar8 = 100;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar3 = F_005a2710((undefined *)(param_1 + 200),3);
  *(uint *)(param_1 + 0xcc) = uVar2;
  return uVar3;
}

/* ref: FUN_007649c0 */
uint F_007649c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7649c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar9 = 2;
  uVar8 = 0x65;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x68),3);
  *(uint *)(param_1 + 0x6c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x74;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xe0),3);
  *(uint *)(param_1 + 0xe4) = uVar2;
  uVar9 = 2;
  uVar8 = 0x75;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xe8),3);
  *(uint *)(param_1 + 0xec) = uVar2;
  uVar9 = 2;
  uVar8 = 0x7d;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x128),3);
  *(uint *)(param_1 + 300) = uVar2;
  uVar9 = 2;
  uVar8 = 0x85;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x168),3);
  *(uint *)(param_1 + 0x16c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x8d;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x1a8),3);
  *(uint *)(param_1 + 0x1ac) = uVar2;
  uVar9 = 2;
  uVar8 = 0x67;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x78),3);
  *(uint *)(param_1 + 0x7c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x68;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x80),3);
  *(uint *)(param_1 + 0x84) = uVar2;
  uVar9 = 2;
  uVar8 = 0x69;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x88),3);
  *(uint *)(param_1 + 0x8c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x6a;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x90),3);
  *(uint *)(param_1 + 0x94) = uVar2;
  uVar9 = 2;
  uVar8 = 0x6b;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x98),3);
  uVar9 = 2;
  *(uint *)(param_1 + 0x9c) = uVar2;
  uVar8 = 0x6c;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xa0),3);
  *(uint *)(param_1 + 0xa4) = uVar2;
  uVar9 = 2;
  uVar8 = 0x6e;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xb0),3);
  *(uint *)(param_1 + 0xb4) = uVar2;
  uVar9 = 2;
  uVar8 = 0x6f;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xb8),3);
  *(uint *)(param_1 + 0xbc) = uVar2;
  uVar9 = 2;
  uVar8 = 0x70;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xc0),3);
  *(uint *)(param_1 + 0xc4) = uVar2;
  uVar9 = 2;
  uVar8 = 0x71;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 200),3);
  *(uint *)(param_1 + 0xcc) = uVar2;
  uVar9 = 2;
  uVar8 = 0x72;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xd0),3);
  *(uint *)(param_1 + 0xd4) = uVar2;
  uVar9 = 2;
  uVar8 = 0x73;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xd8),3);
  *(uint *)(param_1 + 0xdc) = uVar2;
  uVar9 = 2;
  uVar8 = 0x77;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xf8),3);
  *(uint *)(param_1 + 0xfc) = uVar2;
  uVar9 = 2;
  uVar8 = 0x78;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x100),3);
  *(uint *)(param_1 + 0x104) = uVar2;
  uVar9 = 2;
  uVar8 = 0x79;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x108),3);
  *(uint *)(param_1 + 0x10c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x7a;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x110),3);
  *(uint *)(param_1 + 0x114) = uVar2;
  uVar9 = 2;
  uVar8 = 0x7b;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x118),3);
  *(uint *)(param_1 + 0x11c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x7c;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x120),3);
  *(uint *)(param_1 + 0x124) = uVar2;
  uVar9 = 2;
  uVar8 = 0x7f;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x138),3);
  *(uint *)(param_1 + 0x13c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x80;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x140),3);
  *(uint *)(param_1 + 0x144) = uVar2;
  uVar9 = 2;
  uVar8 = 0x81;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x148),3);
  *(uint *)(param_1 + 0x14c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x82;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x150),3);
  *(uint *)(param_1 + 0x154) = uVar2;
  uVar9 = 2;
  uVar8 = 0x83;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x158),3);
  *(uint *)(param_1 + 0x15c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x84;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x160),3);
  *(uint *)(param_1 + 0x164) = uVar2;
  uVar9 = 2;
  uVar8 = 0x87;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x178),3);
  *(uint *)(param_1 + 0x17c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x88;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x180),3);
  *(uint *)(param_1 + 0x184) = uVar2;
  uVar9 = 2;
  uVar8 = 0x89;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x188),3);
  *(uint *)(param_1 + 0x18c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x8a;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 400),3);
  *(uint *)(param_1 + 0x194) = uVar2;
  uVar9 = 2;
  uVar8 = 0x8b;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x198),3);
  *(uint *)(param_1 + 0x19c) = uVar2;
  uVar9 = 2;
  uVar8 = 0x8c;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x1a0),3);
  *(uint *)(param_1 + 0x1a4) = uVar2;
  uVar9 = 2;
  uVar8 = 0x8f;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x1b8),3);
  *(uint *)(param_1 + 0x1bc) = uVar2;
  uVar9 = 2;
  uVar8 = 0x90;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x1c0),3);
  *(uint *)(param_1 + 0x1c4) = uVar2;
  uVar9 = 2;
  uVar8 = 0x91;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x1c8),3);
  *(uint *)(param_1 + 0x1cc) = uVar2;
  uVar9 = 2;
  uVar8 = 0x92;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x1d0),3);
  *(uint *)(param_1 + 0x1d4) = uVar2;
  uVar9 = 2;
  uVar8 = 0x93;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x1d8),3);
  *(uint *)(param_1 + 0x1dc) = uVar2;
  uVar9 = 2;
  uVar8 = 0x94;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x1e0),3);
  *(uint *)(param_1 + 0x1e4) = uVar2;
  uVar9 = 2;
  uVar8 = 0x6c;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x6b;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x6a;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x69;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x68;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar6 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x67;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar7 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x70),3);
  uVar2 = F_007641b0(uVar7,uVar6,uVar5,uVar4,uVar3,uVar2);
  *(uint *)(param_1 + 0x74) = uVar2;
  uVar9 = 2;
  uVar8 = 0x73;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x72;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x71;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x70;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x6f;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar6 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x6e;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar7 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xa8),3);
  uVar2 = F_007641b0(uVar7,uVar6,uVar5,uVar4,uVar3,uVar2);
  *(uint *)(param_1 + 0xac) = uVar2;
  uVar9 = 2;
  uVar8 = 0x7c;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x7b;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x7a;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x79;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x78;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar6 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x77;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar7 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0xf0),3);
  uVar2 = F_007641b0(uVar7,uVar6,uVar5,uVar4,uVar3,uVar2);
  *(uint *)(param_1 + 0xf4) = uVar2;
  uVar9 = 2;
  uVar8 = 0x84;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x83;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x82;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x81;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x80;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar6 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x7f;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar7 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x130),3);
  uVar2 = F_007641b0(uVar7,uVar6,uVar5,uVar4,uVar3,uVar2);
  *(uint *)(param_1 + 0x134) = uVar2;
  uVar9 = 2;
  uVar8 = 0x8c;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x8b;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x8a;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x89;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x88;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar6 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x87;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar7 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x170),3);
  uVar2 = F_007641b0(uVar7,uVar6,uVar5,uVar4,uVar3,uVar2);
  *(uint *)(param_1 + 0x174) = uVar2;
  uVar9 = 2;
  uVar8 = 0x94;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x93;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x92;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x91;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x90;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar6 = F_0043c920(pvVar1,uVar8,uVar9);
  uVar9 = 2;
  uVar8 = 0x8f;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar7 = F_0043c920(pvVar1,uVar8,uVar9);
  F_005a2710((undefined *)(param_1 + 0x1b0),3);
  uVar2 = F_007641b0(uVar7,uVar6,uVar5,uVar4,uVar3,uVar2);
  *(uint *)(param_1 + 0x1b4) = uVar2;
  return uVar2;
}

/* ref: FUN_00765650 */
uint F_00765650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x765650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 2;
  uVar4 = 0x95;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x68),3);
  *(uint *)(param_1 + 0x6c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x96;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x70),3);
  *(uint *)(param_1 + 0x74) = uVar2;
  uVar5 = 2;
  uVar4 = 0x97;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x80),3);
  *(uint *)(param_1 + 0x84) = uVar2;
  uVar5 = 2;
  uVar4 = 0x98;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x88),3);
  *(uint *)(param_1 + 0x8c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x99;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x90),3);
  *(uint *)(param_1 + 0x94) = uVar2;
  uVar5 = 2;
  uVar4 = 0x9a;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x98),3);
  *(uint *)(param_1 + 0x9c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x9b;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa0),3);
  *(uint *)(param_1 + 0xa4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x9c;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa8),3);
  *(uint *)(param_1 + 0xac) = uVar2;
  uVar5 = 2;
  uVar4 = 0x9d;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xb0),3);
  *(uint *)(param_1 + 0xb4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x9f;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xb8),3);
  *(uint *)(param_1 + 0xbc) = uVar2;
  uVar5 = 2;
  uVar4 = 0x9e;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xc0),3);
  uVar5 = 2;
  *(uint *)(param_1 + 0xc4) = uVar2;
  uVar4 = 0xa0;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 200),3);
  *(uint *)(param_1 + 0xcc) = uVar2;
  uVar5 = 2;
  uVar4 = 0xa1;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xd0),3);
  *(uint *)(param_1 + 0xd4) = uVar2;
  uVar5 = 2;
  uVar4 = 0xa2;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xd8),3);
  *(uint *)(param_1 + 0xdc) = uVar2;
  uVar5 = 2;
  uVar4 = 0xa3;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  uVar3 = F_005a2710((undefined *)(param_1 + 0xe0),3);
  *(uint *)(param_1 + 0xe4) = uVar2;
  return uVar3;
}

/* ref: FUN_00765940 */
uint F_00765940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x765940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 2;
  uVar4 = 0xa4;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x68),3);
  *(uint *)(param_1 + 0x6c) = uVar2;
  uVar5 = 2;
  uVar4 = 0xa5;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  uVar3 = F_005a2710((undefined *)(param_1 + 0x70),3);
  *(uint *)(param_1 + 0x74) = uVar2;
  return uVar3;
}

/* ref: FUN_007659b0 */
uint F_007659b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7659b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 2;
  uVar4 = 0xa6;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x68),3);
  *(uint *)(param_1 + 0x6c) = uVar2;
  uVar5 = 2;
  uVar4 = 0xa7;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x70),3);
  *(uint *)(param_1 + 0x74) = uVar2;
  uVar5 = 2;
  uVar4 = 0xa8;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x78),3);
  *(uint *)(param_1 + 0x7c) = uVar2;
  uVar5 = 2;
  uVar4 = 0xa9;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x80),3);
  *(uint *)(param_1 + 0x84) = uVar2;
  uVar5 = 2;
  uVar4 = 0xaa;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x88),3);
  *(uint *)(param_1 + 0x8c) = uVar2;
  uVar5 = 2;
  uVar4 = 0xab;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x90),3);
  *(uint *)(param_1 + 0x94) = uVar2;
  uVar5 = 2;
  uVar4 = 0xac;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x98),3);
  *(uint *)(param_1 + 0x9c) = uVar2;
  uVar5 = 2;
  uVar4 = 0xad;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa0),3);
  *(uint *)(param_1 + 0xa4) = uVar2;
  uVar5 = 2;
  uVar4 = 0xae;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa8),3);
  *(uint *)(param_1 + 0xac) = uVar2;
  uVar5 = 2;
  uVar4 = 0xaf;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xb0),3);
  *(uint *)(param_1 + 0xb4) = uVar2;
  uVar5 = 2;
  uVar4 = 0xb0;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xb8),3);
  uVar5 = 2;
  *(uint *)(param_1 + 0xbc) = uVar2;
  uVar4 = 0xb1;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xc0),3);
  *(uint *)(param_1 + 0xc4) = uVar2;
  uVar5 = 2;
  uVar4 = 0xb2;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 200),3);
  *(uint *)(param_1 + 0xcc) = uVar2;
  uVar5 = 2;
  uVar4 = 0xb3;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xd0),3);
  *(uint *)(param_1 + 0xd4) = uVar2;
  uVar5 = 2;
  uVar4 = 0xb4;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xd8),3);
  *(uint *)(param_1 + 0xdc) = uVar2;
  uVar5 = 2;
  uVar4 = 0xb5;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xe0),3);
  *(uint *)(param_1 + 0xe4) = uVar2;
  uVar5 = 2;
  uVar4 = 0xb6;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xe8),3);
  *(uint *)(param_1 + 0xec) = uVar2;
  uVar5 = 2;
  uVar4 = 0xb7;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xf0),3);
  *(uint *)(param_1 + 0xf4) = uVar2;
  uVar5 = 2;
  uVar4 = 0xb8;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xf8),3);
  *(uint *)(param_1 + 0xfc) = uVar2;
  uVar5 = 2;
  uVar4 = 0xb9;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x100),3);
  *(uint *)(param_1 + 0x104) = uVar2;
  uVar5 = 2;
  uVar4 = 0xba;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x108),3);
  *(uint *)(param_1 + 0x10c) = uVar2;
  uVar5 = 2;
  uVar4 = 0xbb;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x110),3);
  *(uint *)(param_1 + 0x114) = uVar2;
  uVar5 = 2;
  uVar4 = 0xbc;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x118),3);
  *(uint *)(param_1 + 0x11c) = uVar2;
  uVar5 = 2;
  uVar4 = 0xbd;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x120),3);
  *(uint *)(param_1 + 0x124) = uVar2;
  uVar5 = 2;
  uVar4 = 0xbe;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x128),3);
  *(uint *)(param_1 + 300) = uVar2;
  uVar5 = 2;
  uVar4 = 0xbf;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  uVar3 = F_005a2710((undefined *)(param_1 + 0x130),3);
  *(uint *)(param_1 + 0x134) = uVar2;
  return uVar3;
}

/* ref: FUN_00765eb0 */
uint F_00765eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x765eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 2;
  uVar4 = 0xc0;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x68),3);
  *(uint *)(param_1 + 0x6c) = uVar2;
  uVar5 = 2;
  uVar4 = 0xc1;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x70),3);
  *(uint *)(param_1 + 0x74) = uVar2;
  uVar5 = 2;
  uVar4 = 0xc2;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  uVar3 = F_005a2710((undefined *)(param_1 + 0x78),3);
  *(uint *)(param_1 + 0x7c) = uVar2;
  return uVar3;
}

/* ref: FUN_00765f50 */
uint F_00765f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x765f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = F_00763d50(this);
  F_005a2710((undefined *)(param_1 + 0x68),3);
  *(uint *)(param_1 + 0x6c) = uVar1;
  uVar5 = 2;
  uVar4 = 0xc4;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x70),4);
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar5 = 2;
  uVar4 = 0xc5;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x78),3);
  *(uint *)(param_1 + 0x7c) = uVar1;
  uVar5 = 2;
  uVar4 = 0xc6;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x80),3);
  *(uint *)(param_1 + 0x84) = uVar1;
  uVar5 = 2;
  uVar4 = 199;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x88),3);
  *(uint *)(param_1 + 0x8c) = uVar1;
  uVar5 = 2;
  uVar4 = 200;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x90),4);
  *(uint *)(param_1 + 0x94) = uVar1;
  uVar5 = 2;
  uVar4 = 0xc9;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x98),3);
  *(uint *)(param_1 + 0x9c) = uVar1;
  uVar5 = 2;
  uVar4 = 0xca;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa0),3);
  *(uint *)(param_1 + 0xa4) = uVar1;
  uVar5 = 2;
  uVar4 = 0xcb;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa8),4);
  *(uint *)(param_1 + 0xac) = uVar1;
  uVar5 = 2;
  uVar4 = 0xcc;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xb0),3);
  *(uint *)(param_1 + 0xb4) = uVar1;
  uVar5 = 2;
  uVar4 = 0xcd;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  uVar3 = F_005a2710((undefined *)(param_1 + 0xb8),3);
  *(uint *)(param_1 + 0xbc) = uVar1;
  return uVar3;
}

/* ref: FUN_00766160 */
uint F_00766160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x766160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = F_00763d50(this);
  F_005a2710((undefined *)(param_1 + 0x68),3);
  *(uint *)(param_1 + 0x6c) = uVar1;
  uVar5 = 2;
  uVar4 = 0xcf;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x70),4);
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar5 = 2;
  uVar4 = 0xd0;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x78),3);
  *(uint *)(param_1 + 0x7c) = uVar1;
  uVar5 = 2;
  uVar4 = 0xd1;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x80),3);
  *(uint *)(param_1 + 0x84) = uVar1;
  uVar5 = 2;
  uVar4 = 0xd2;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x88),3);
  *(uint *)(param_1 + 0x8c) = uVar1;
  uVar5 = 2;
  uVar4 = 0xd3;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x90),3);
  *(uint *)(param_1 + 0x94) = uVar1;
  uVar5 = 2;
  uVar4 = 0xd4;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x98),3);
  *(uint *)(param_1 + 0x9c) = uVar1;
  uVar5 = 2;
  uVar4 = 0xd5;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa0),4);
  *(uint *)(param_1 + 0xa4) = uVar1;
  uVar5 = 2;
  uVar4 = 0xd6;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa8),3);
  *(uint *)(param_1 + 0xac) = uVar1;
  uVar5 = 2;
  uVar4 = 0xd7;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xb0),3);
  *(uint *)(param_1 + 0xb4) = uVar1;
  uVar5 = 2;
  uVar4 = 0xd8;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xb8),3);
  *(uint *)(param_1 + 0xbc) = uVar1;
  uVar5 = 2;
  uVar4 = 0xd9;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xc0),3);
  *(uint *)(param_1 + 0xc4) = uVar1;
  uVar5 = 2;
  uVar4 = 0xda;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 200),3);
  *(uint *)(param_1 + 0xcc) = uVar1;
  uVar5 = 2;
  uVar4 = 0xdb;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xd0),4);
  *(uint *)(param_1 + 0xd4) = uVar1;
  uVar5 = 2;
  uVar4 = 0xdc;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xd8),3);
  *(uint *)(param_1 + 0xdc) = uVar1;
  uVar5 = 2;
  uVar4 = 0xdd;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xe0),3);
  *(uint *)(param_1 + 0xe4) = uVar1;
  uVar5 = 2;
  uVar4 = 0xde;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xe8),3);
  *(uint *)(param_1 + 0xec) = uVar1;
  uVar5 = 2;
  uVar4 = 0xdf;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xf0),3);
  *(uint *)(param_1 + 0xf4) = uVar1;
  uVar5 = 2;
  uVar4 = 0xe0;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  uVar3 = F_005a2710((undefined *)(param_1 + 0xf8),3);
  *(uint *)(param_1 + 0xfc) = uVar1;
  return uVar3;
}

/* ref: FUN_00766500 */
uint F_00766500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x766500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = F_00763d50(this);
  F_005a2710((undefined *)(param_1 + 0x68),3);
  *(uint *)(param_1 + 0x6c) = uVar1;
  uVar5 = 2;
  uVar4 = 0xe2;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x70),4);
  *(uint *)(param_1 + 0x74) = uVar1;
  uVar5 = 2;
  uVar4 = 0xe3;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x78),3);
  *(uint *)(param_1 + 0x7c) = uVar1;
  uVar5 = 2;
  uVar4 = 0xe4;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x80),3);
  *(uint *)(param_1 + 0x84) = uVar1;
  uVar5 = 2;
  uVar4 = 0xe5;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x88),4);
  *(uint *)(param_1 + 0x8c) = uVar1;
  uVar5 = 2;
  uVar4 = 0xe6;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x90),3);
  *(uint *)(param_1 + 0x94) = uVar1;
  uVar5 = 2;
  uVar4 = 0xe7;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x98),3);
  *(uint *)(param_1 + 0x9c) = uVar1;
  uVar5 = 2;
  uVar4 = 0xe8;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa0),4);
  *(uint *)(param_1 + 0xa4) = uVar1;
  uVar5 = 2;
  uVar4 = 0xe9;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa8),3);
  *(uint *)(param_1 + 0xac) = uVar1;
  uVar5 = 2;
  uVar4 = 0xea;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xb0),3);
  *(uint *)(param_1 + 0xb4) = uVar1;
  uVar5 = 2;
  uVar4 = 0xeb;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xb8),4);
  *(uint *)(param_1 + 0xbc) = uVar1;
  uVar5 = 2;
  uVar4 = 0xec;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xc0),3);
  *(uint *)(param_1 + 0xc4) = uVar1;
  uVar5 = 2;
  uVar4 = 0xed;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 200),3);
  *(uint *)(param_1 + 0xcc) = uVar1;
  uVar5 = 2;
  uVar4 = 0xee;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xd0),4);
  *(uint *)(param_1 + 0xd4) = uVar1;
  uVar5 = 2;
  uVar4 = 0xef;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xd8),3);
  *(uint *)(param_1 + 0xdc) = uVar1;
  uVar5 = 2;
  uVar4 = 0xf0;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xe0),3);
  *(uint *)(param_1 + 0xe4) = uVar1;
  uVar5 = 2;
  uVar4 = 0xf1;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xe8),4);
  *(uint *)(param_1 + 0xec) = uVar1;
  uVar5 = 2;
  uVar4 = 0xf2;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xf0),3);
  *(uint *)(param_1 + 0xf4) = uVar1;
  uVar5 = 2;
  uVar4 = 0xf3;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xf8),3);
  *(uint *)(param_1 + 0xfc) = uVar1;
  uVar5 = 2;
  uVar4 = 0xf4;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x100),4);
  *(uint *)(param_1 + 0x104) = uVar1;
  uVar5 = 2;
  uVar4 = 0xf5;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x108),3);
  *(uint *)(param_1 + 0x10c) = uVar1;
  uVar5 = 2;
  uVar4 = 0xf6;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x110),4);
  *(uint *)(param_1 + 0x114) = uVar1;
  uVar5 = 2;
  uVar4 = 0xf7;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(pvVar2,uVar4,uVar5);
  uVar3 = F_005a2710((undefined *)(param_1 + 0x118),4);
  *(uint *)(param_1 + 0x11c) = uVar1;
  return uVar3;
}

/* ref: FUN_00766960 */
uint F_00766960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x766960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = 2;
  uVar3 = 0x107;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0043c920(this_00,uVar3,uVar4);
  uVar2 = F_005a2710((undefined *)(param_1 + 0x68),3);
  *(uint *)(param_1 + 0x6c) = uVar1;
  return uVar2;
}

/* ref: FUN_007669a0 */
uint F_007669a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7669a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 2;
  uVar4 = 0x108;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x68),3);
  *(uint *)(param_1 + 0x6c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x109;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x70),3);
  *(uint *)(param_1 + 0x74) = uVar2;
  uVar5 = 2;
  uVar4 = 0x10a;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x78),3);
  *(uint *)(param_1 + 0x7c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x10b;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x80),3);
  *(uint *)(param_1 + 0x84) = uVar2;
  uVar5 = 2;
  uVar4 = 0x10c;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x88),3);
  *(uint *)(param_1 + 0x8c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x10d;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x90),3);
  *(uint *)(param_1 + 0x94) = uVar2;
  uVar5 = 2;
  uVar4 = 0x10e;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x98),3);
  *(uint *)(param_1 + 0x9c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x10f;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa0),3);
  *(uint *)(param_1 + 0xa4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x110;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa8),3);
  *(uint *)(param_1 + 0xac) = uVar2;
  uVar5 = 2;
  uVar4 = 0x111;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xb0),3);
  *(uint *)(param_1 + 0xb4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x112;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  uVar3 = F_005a2710((undefined *)(param_1 + 0xb8),3);
  *(uint *)(param_1 + 0xbc) = uVar2;
  return uVar3;
}

/* ref: FUN_00766bc0 */
uint F_00766bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x766bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 2;
  uVar4 = 0x113;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x68),3);
  *(uint *)(param_1 + 0x6c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x114;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x70),3);
  *(uint *)(param_1 + 0x74) = uVar2;
  uVar5 = 2;
  uVar4 = 0x115;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x78),3);
  *(uint *)(param_1 + 0x7c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x116;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x80),3);
  *(uint *)(param_1 + 0x84) = uVar2;
  uVar5 = 2;
  uVar4 = 0x117;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))()));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x88),3);
  *(uint *)(param_1 + 0x8c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x118;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))()));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x90),3);
  *(uint *)(param_1 + 0x94) = uVar2;
  uVar5 = 2;
  uVar4 = 0x119;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))()));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x98),3);
  *(uint *)(param_1 + 0x9c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x11a;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))()));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa0),3);
  *(uint *)(param_1 + 0xa4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x11b;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))()));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa8),3);
  *(uint *)(param_1 + 0xac) = uVar2;
  uVar5 = 2;
  uVar4 = 0x11c;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))()));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xb0),3);
  *(uint *)(param_1 + 0xb4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x11d;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))()));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xb8),3);
  uVar5 = 2;
  *(uint *)(param_1 + 0xbc) = uVar2;
  uVar4 = 0x11e;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))()));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xc0),3);
  *(uint *)(param_1 + 0xc4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x11f;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))()));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 200),3);
  *(uint *)(param_1 + 0xcc) = uVar2;
  uVar5 = 2;
  uVar4 = 0x120;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))()));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xd0),3);
  *(uint *)(param_1 + 0xd4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x121;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))()));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xd8),3);
  *(uint *)(param_1 + 0xdc) = uVar2;
  uVar5 = 2;
  uVar4 = 0x122;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))()));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xe0),3);
  *(uint *)(param_1 + 0xe4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x123;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))()));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xe8),3);
  *(uint *)(param_1 + 0xec) = uVar2;
  uVar5 = 2;
  uVar4 = 0x124;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))()));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  uVar3 = F_005a2710((undefined *)(param_1 + 0xf0),3);
  *(uint *)(param_1 + 0xf4) = uVar2;
  return uVar3;
}

/* ref: FUN_00766f40 */
uint F_00766f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x766f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 2;
  uVar4 = 0x125;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x68),3);
  *(uint *)(param_1 + 0x6c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x126;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))()));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x70),3);
  *(uint *)(param_1 + 0x74) = uVar2;
  uVar5 = 2;
  uVar4 = 0x127;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))()));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x78),3);
  *(uint *)(param_1 + 0x7c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x128;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))()));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x80),3);
  *(uint *)(param_1 + 0x84) = uVar2;
  uVar5 = 2;
  uVar4 = 0x129;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))()));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x88),3);
  *(uint *)(param_1 + 0x8c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x12a;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))()));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x90),3);
  *(uint *)(param_1 + 0x94) = uVar2;
  uVar5 = 2;
  uVar4 = 299;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))()));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x98),3);
  *(uint *)(param_1 + 0x9c) = uVar2;
  uVar5 = 2;
  uVar4 = 300;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))()));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa0),3);
  *(uint *)(param_1 + 0xa4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x12d;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))()));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa8),3);
  *(uint *)(param_1 + 0xac) = uVar2;
  uVar5 = 2;
  uVar4 = 0x12e;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))()));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xb0),3);
  *(uint *)(param_1 + 0xb4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x12f;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))()));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xb8),3);
  uVar5 = 2;
  *(uint *)(param_1 + 0xbc) = uVar2;
  uVar4 = 0x130;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))()));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xc0),3);
  *(uint *)(param_1 + 0xc4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x131;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))()));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 200),3);
  *(uint *)(param_1 + 0xcc) = uVar2;
  uVar5 = 2;
  uVar4 = 0x132;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))()));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xd0),3);
  *(uint *)(param_1 + 0xd4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x133;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))()));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xd8),3);
  *(uint *)(param_1 + 0xdc) = uVar2;
  uVar5 = 2;
  uVar4 = 0x134;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))()));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xe0),3);
  *(uint *)(param_1 + 0xe4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x135;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))()));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xe8),3);
  *(uint *)(param_1 + 0xec) = uVar2;
  uVar5 = 2;
  uVar4 = 0x136;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))()));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xf0),3);
  *(uint *)(param_1 + 0xf4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x137;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))()));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xf8),3);
  *(uint *)(param_1 + 0xfc) = uVar2;
  uVar5 = 2;
  uVar4 = 0x138;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))()));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x100),3);
  *(uint *)(param_1 + 0x104) = uVar2;
  uVar5 = 2;
  uVar4 = 0x139;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))()));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x108),3);
  *(uint *)(param_1 + 0x10c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x13a;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))()));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0x110),3);
  *(uint *)(param_1 + 0x114) = uVar2;
  uVar5 = 2;
  uVar4 = 0x13b;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))()));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  uVar3 = F_005a2710((undefined *)(param_1 + 0x118),3);
  *(uint *)(param_1 + 0x11c) = uVar2;
  return uVar3;
}

/* ref: FUN_007673b0 */
uint F_007673b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7673b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar7 = 2;
  uVar6 = 0x13d;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar6,uVar7);
  uVar7 = 2;
  uVar6 = 0x13c;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = F_0043c920(pvVar1,uVar6,uVar7);
  F_005a2710((undefined *)(param_1 + 0x68),3);
  *(uint *)(param_1 + 0x6c) = uVar3;
  F_005a2710((undefined *)(param_1 + 0x70),3);
  *(uint *)(param_1 + 0x74) = uVar2;
  uVar7 = 2;
  uVar6 = 0x13e;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar6,uVar7);
  F_005a2710((undefined *)(param_1 + 0x78),3);
  *(uint *)(param_1 + 0x7c) = uVar2;
  uVar7 = 2;
  uVar6 = 0x13f;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar6,uVar7);
  F_005a2710((undefined *)(param_1 + 0x80),3);
  *(uint *)(param_1 + 0x84) = uVar2;
  uVar7 = 2;
  uVar6 = 0x140;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar6,uVar7);
  F_005a2710((undefined *)(param_1 + 0x88),3);
  *(uint *)(param_1 + 0x8c) = uVar2;
  uVar7 = 2;
  uVar6 = 0x141;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar6,uVar7);
  F_005a2710((undefined *)(param_1 + 0x90),3);
  *(uint *)(param_1 + 0x94) = uVar2;
  uVar7 = 2;
  uVar6 = 0x142;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar6,uVar7);
  F_005a2710((undefined *)(param_1 + 0x98),3);
  *(uint *)(param_1 + 0x9c) = uVar2;
  uVar7 = 2;
  uVar6 = 0x143;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar6,uVar7);
  F_005a2710((undefined *)(param_1 + 0xa8),3);
  *(uint *)(param_1 + 0xac) = uVar2;
  uVar7 = 2;
  uVar6 = 0x144;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar6,uVar7);
  F_005a2710((undefined *)(param_1 + 0xa0),3);
  *(uint *)(param_1 + 0xa4) = uVar2;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4));
  iVar5 = 0;
  pvVar1 = (undefined *)(param_1 + 0xb0);
  do {
    uVar3 = F_0043b840(uVar2,iVar5);
    uVar3 = F_0042a990(uVar3);
    if (uVar3 == 0) {
      uVar4 = F_005a2710(pvVar1,6);
      *(undefined * PTR32 *)((int)pvVar1 + 4) = &REFG(undefined, 0x10bdaf7);
    }
    else {
      uVar3 = F_0043b840(uVar2,iVar5);
      uVar3 = F_0042a990(uVar3);
      uVar4 = F_005a2710(pvVar1,6);
      *(uint *)((int)pvVar1 + 4) = uVar3;
    }
    iVar5 = iVar5 + 1;
    pvVar1 = (undefined *)((int)pvVar1 + 8);
  } while (iVar5 < 4);
  return uVar4;
}

/* ref: FUN_007675e0 */
uint F_007675e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7675e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x4cb;
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = F_0043bd00(pvVar1,uVar3,uVar4,uVar5);
    return uVar2;
  case 1: ;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x4cc;
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = F_0043bd00(pvVar1,uVar3,uVar4,uVar5);
    return uVar2;
  case 2: ;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x4cd;
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = F_0043bd00(pvVar1,uVar3,uVar4,uVar5);
    return uVar2;
  case 3: ;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x4ce;
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = F_0043bd00(pvVar1,uVar3,uVar4,uVar5);
    return uVar2;
  case 4: ;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x4cf;
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = F_0043bd00(pvVar1,uVar3,uVar4,uVar5);
    return uVar2;
  case 5: ;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x4d0;
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = F_0043bd00(pvVar1,uVar3,uVar4,uVar5);
    return uVar2;
  default: ;
    return 0;
  }
}

/* ref: FUN_007676d0 */
byte F_007676d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7676d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  undefined * this_00;
  undefined4 uVar2;
  
  *(undefined4 *)((int)this + 0x68) = 0;
  if (((*param_1 & 0xf) == 0) || (*(int *)(param_1 + 4) == 0)) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 100),0);
    *(undefined4 *)((int)this + 100) = 0;
    *(undefined1 *)((int)this + 0x70) = 0;
    uVar2 = 0x354;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4))));
    F_0046a630(this_00,uVar2);
  }
  return 1;
}

/* ref: FUN_00767730 */
uint F_00767730(unsigned int gen_a0)
{
  GEN_ENTER(0x767730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x3a0];
  char cVar1;
  uint uVar2;
  undefined4 * puVar3;
  int * piVar4;
  int iVar5;
  uint * this_00;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x39c);
  (*(uint *)(gen_frame + 0x398)) = uVar2;
  if (*(int *)((int)this + 100) != 0) {
    puVar3 = ((undefined4 *)(gen_frame + 0x0));
    iVar5 = 0x72;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 2;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    F_005a2710(((undefined4 *)(gen_frame + 0x0)),4);
    cVar1 = *(char *)((int)this + 0x70);
    ((undefined4 *)(gen_frame + 0x0))[1] = 1;
    F_005a2710(((undefined1 *)(gen_frame + 0x390)),4);
    (*(uint *)(gen_frame + 0x394)) = (uint)(cVar1 != '\0');
    piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 100),0x73,((undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x398));
    iVar5 = 0x72;
    do {
      this_00 = this_00 + -2;
      uVar2 = F_005a2670(this_00);
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  F_00c47745((*(uint *)(gen_frame + 0x398)) ^ (uint)(uint)(gen_frame + 0x39c));
  return uVar2;
}

/* ref: FUN_007677e0 */
byte F_007677e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7677e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  
  if (param_1 < *((uint *)GEN_TOP(((int)this + *(int *)((int)this + 0x110) * 4 + 0x114)))) {
    iVar1 = *((int *)GEN_TOP(((int)this + (*(int *)((int)this + 0x110) * 0x20 + param_1) * 0x14 + 0x13c)));
    if (*(char *)(iVar1 + 0x78 + (int)this) != (char)param_2) {
      *(char *)(iVar1 + 0x78 + (int)this) = (char)param_2;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00767820 */
uint F_00767820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x767820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  code * pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  uVar7 = 0;
  uVar6 = 0;
  if (param_2 == 1) {
    uVar5 = 0x1e85;
  }
  else {
    if (param_2 != 2) {
      pcVar4 = *(gen_code32 *)(*piVar1 + 0x18);
      if (param_2 == 3) {
        uVar5 = 0x1e87;
      }
      else {
        uVar5 = 0x1e84;
      }
      goto override_prt_76785f_776d44d0;
    }
    uVar5 = 0x1e86;
  }
  pcVar4 = *(gen_code32 *)(*piVar1 + 0x18);
override_prt_76785f_776d44d0: ;
  this_00 = ((undefined *)GEN_TOP((*pcVar4)(piVar1)));
  uVar2 = F_0043bd00(this_00,uVar5,uVar6,uVar7);
  uVar3 = F_005a2710(param_1,6);
  *(uint *)((int)param_1 + 4) = uVar2;
  return uVar3;
}

/* ref: FUN_00767880 */
uint F_00767880(unsigned int gen_a0)
{
  GEN_ENTER(0x767880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined4 uVar4;
  
  uVar4 = 0;
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
  bVar2 = F_005594a0(uVar3,uVar4);
  uVar3 = CONCAT31(extraout_var,bVar2);
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined1 *)((int)this + 0x3f) = 0;
  if (*(char *)((int)this + 0x3d) == '\0') {
    uVar3 = F_007631c0(this);
  }
  else {
    piVar1 = *(int * PTR32 *)((int)this + 0x24);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined1 *)((int)this + 0x3d) = 0;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,((undefined1 *)(gen_frame + 0x4)),0,0,0);
      uVar3 = F_005a2670(((undefined1 *)(gen_frame + 0x4)));
      *(undefined4 *)((int)this + 0x24) = 0;
      return uVar3;
    }
  }
  return uVar3;
}

/* ref: Client::UI2::Agent::AgentConfigSystem::vf3 */
unsigned int F_007678f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7678f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return 0;
}

/* ref: FUN_00767920 */
uint F_00767920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x767920u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  uint in_EAX = 0;
  undefined * this;
  uint uVar1;
  undefined4 uVar2;
  
  if (param_1 != (int *)0x0) {
    uVar2 = 0x2db;
    this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)param_1[1] + 0x28))((int *)param_1[1])));
    F_0046a630(this,uVar2);
    ((code *)*(gen_code32 *)(*param_1 + 0x48))(param_1,1);
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xc))
                      (param_1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00767960 */
unsigned int F_00767960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x767960u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined1 *)(in_ecx + 0x30) = 0;
  return 0;
}

/* ref: Client::UI2::Agent::AgentConfigSystem::vf19 */
byte F_00767970(unsigned int gen_a0)
{
  GEN_ENTER(0x767970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = 2;
  if (this[0x2c] == (undefined1)0x0) {
    uVar3 = 0x3f;
  }
  else {
    uVar3 = 0x1fffc0;
  }
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x3c))))(*(int * PTR32 *)(this + 4))));
  F_00447980(pvVar2,uVar3,uVar4);
  this[0x1d] = (undefined1)0x1;
  F_007631c0(this);
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x3c))))(*(int * PTR32 *)(this + 4))));
  bVar1 = F_0043c9e0(pvVar2,1,2);
  if ((((bVar1 == 0) && (bVar1 = F_0043c9e0(pvVar2,2,2), bVar1 == 0)) &&
      (bVar1 = F_0043c9e0(pvVar2,3,2), bVar1 == 0)) &&
     (((bVar1 = F_0043c9e0(pvVar2,4,2), bVar1 == 0 &&
       (bVar1 = F_0043c9e0(pvVar2,5,2), bVar1 == 0)) &&
      (bVar1 = F_0043c9e0(pvVar2,6,2), bVar1 == 0)))) {
    return 0;
  }
  *(undefined4 *)(this + 0x48) = 0xffffffff;
  this[0x3c] = (undefined1)0x1;
  *(undefined2 *)(this + 0x2d) = 0xf01;
  this[0x2f] = (undefined1)0x0;
  return bVar1;
}

/* ref: Client::UI2::Agent::AgentConfigSystem::vf20 */
uint F_00767a20(unsigned int gen_a0)
{
  GEN_ENTER(0x767a20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined4 uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar2 = 0;
  switch((unsigned int)(uintptr_t)(this[0x18])) {
  case (undefined1)0x0: ;
    uVar2 = 1;
    break;
  case (undefined1)0x1: ;
    uVar2 = 2;
    break;
  case (undefined1)0x2: ;
    uVar2 = 4;
    break;
  case (undefined1)0x3: ;
    uVar2 = 8;
    break;
  case (undefined1)0x4: ;
    uVar2 = 0x10;
    break;
  case (undefined1)0x5: ;
    uVar2 = 0x20;
  }
  uVar5 = 2;
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x3c))))(*(int * PTR32 *)(this + 4))));
  F_00447980(pvVar3,uVar2,uVar5);
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x3c))))(*(int * PTR32 *)(this + 4))));
  bVar1 = F_0043c9e0(pvVar3,1,2);
  if ((((bVar1 != 0) || (bVar1 = F_0043c9e0(pvVar3,2,2), bVar1 != 0)) ||
      (bVar1 = F_0043c9e0(pvVar3,3,2), bVar1 != 0)) ||
     (((bVar1 = F_0043c9e0(pvVar3,4,2), bVar1 != 0 ||
       (bVar1 = F_0043c9e0(pvVar3,5,2), bVar1 != 0)) ||
      (bVar1 = F_0043c9e0(pvVar3,6,2), bVar1 != 0)))) {
    *(undefined4 *)(this + 0x48) = 0xffffffff;
    this[0x3c] = (undefined1)0x1;
    *(undefined2 *)(this + 0x2d) = 0xf01;
    this[0x2f] = (undefined1)0x0;
  }
  this[0x1d] = (undefined1)0x1;
  uVar4 = F_007631c0(this);
  return uVar4;
}

/* ref: FUN_00767b20 */
uint F_00767b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x767b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 2;
  uVar4 = 10;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa48),3);
  *(uint *)(param_1 + 0xa4c) = uVar2;
  uVar5 = 2;
  uVar4 = 0xb;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa50),3);
  *(uint *)(param_1 + 0xa54) = uVar2;
  uVar5 = 2;
  uVar4 = 0xc;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa58),3);
  *(uint *)(param_1 + 0xa5c) = uVar2;
  uVar5 = 2;
  uVar4 = 0xd;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa60),3);
  *(uint *)(param_1 + 0xa64) = uVar2;
  uVar5 = 2;
  uVar4 = 0xe;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa68),3);
  *(uint *)(param_1 + 0xa6c) = uVar2;
  uVar5 = 2;
  uVar4 = 0xf;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa70),3);
  *(uint *)(param_1 + 0xa74) = uVar2;
  uVar5 = 2;
  uVar4 = 0x10;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa78),3);
  *(uint *)(param_1 + 0xa7c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x11;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa80),3);
  *(uint *)(param_1 + 0xa84) = uVar2;
  uVar5 = 2;
  uVar4 = 0x12;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa88),3);
  *(uint *)(param_1 + 0xa8c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x13;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa90),3);
  *(uint *)(param_1 + 0xa94) = uVar2;
  uVar5 = 2;
  uVar4 = 0x14;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa98),3);
  uVar5 = 2;
  *(uint *)(param_1 + 0xa9c) = uVar2;
  uVar4 = 0x15;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xaa0),3);
  *(uint *)(param_1 + 0xaa4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x16;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xaa8),3);
  *(uint *)(param_1 + 0xaac) = uVar2;
  uVar5 = 2;
  uVar4 = 0x17;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xab0),3);
  *(uint *)(param_1 + 0xab4) = uVar2;
  uVar5 = 2;
  uVar4 = 0x18;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  uVar3 = F_005a2710((undefined *)(param_1 + 0xab8),3);
  *(uint *)(param_1 + 0xabc) = uVar2;
  return uVar3;
}

/* ref: FUN_00767df0 */
uint F_00767df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x767df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar6 = 2;
  uVar5 = 0x37;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xa48),3);
  *(uint *)(param_1 + 0xa4c) = uVar2;
  uVar6 = 2;
  uVar5 = 0x19;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xa50),3);
  *(uint *)(param_1 + 0xa54) = uVar2;
  uVar6 = 2;
  uVar5 = 0x1a;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xa58),3);
  *(uint *)(param_1 + 0xa5c) = uVar2;
  uVar6 = 2;
  uVar5 = 0x1b;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xa60),3);
  *(uint *)(param_1 + 0xa64) = uVar2;
  uVar6 = 2;
  uVar5 = 0x1c;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xa68),3);
  *(uint *)(param_1 + 0xa6c) = uVar2;
  uVar6 = 2;
  uVar5 = 0x1d;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xa70),3);
  *(uint *)(param_1 + 0xa74) = uVar2;
  uVar6 = 2;
  uVar5 = 0x1e;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xa78),3);
  *(uint *)(param_1 + 0xa7c) = uVar2;
  uVar6 = 2;
  uVar5 = 0x1f;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xa80),3);
  *(uint *)(param_1 + 0xa84) = uVar2;
  uVar6 = 2;
  uVar5 = 0x21;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xa90),3);
  *(uint *)(param_1 + 0xa94) = uVar2;
  uVar6 = 2;
  uVar5 = 0x23;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xa98),3);
  *(uint *)(param_1 + 0xa9c) = uVar2;
  uVar6 = 2;
  uVar5 = 0x24;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xaa0),3);
  uVar6 = 2;
  *(uint *)(param_1 + 0xaa4) = uVar2;
  uVar5 = 0x25;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xaa8),3);
  *(uint *)(param_1 + 0xaac) = uVar2;
  uVar6 = 2;
  uVar5 = 0x2e;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xab0),3);
  *(uint *)(param_1 + 0xab4) = uVar2;
  uVar6 = 2;
  uVar5 = 0x2f;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xab8),3);
  *(uint *)(param_1 + 0xabc) = uVar2;
  uVar6 = 2;
  uVar5 = 0x30;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xac0),3);
  *(uint *)(param_1 + 0xac4) = uVar2;
  uVar6 = 2;
  uVar5 = 0x31;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xac8),3);
  *(uint *)(param_1 + 0xacc) = uVar2;
  uVar6 = 2;
  uVar5 = 0x26;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xad0),3);
  *(uint *)(param_1 + 0xad4) = uVar2;
  uVar6 = 2;
  uVar5 = 0x27;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xad8),3);
  *(uint *)(param_1 + 0xadc) = uVar2;
  uVar6 = 2;
  uVar5 = 0x32;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xae0),3);
  *(uint *)(param_1 + 0xae4) = uVar2;
  uVar6 = 2;
  uVar5 = 0x33;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xae8),3);
  *(uint *)(param_1 + 0xaec) = uVar2;
  uVar6 = 2;
  uVar5 = 0x34;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xaf0),3);
  *(uint *)(param_1 + 0xaf4) = uVar2;
  uVar6 = 2;
  uVar5 = 0x35;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xaf8),3);
  *(uint *)(param_1 + 0xafc) = uVar2;
  uVar6 = 2;
  uVar5 = 0x29;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xb00),3);
  *(uint *)(param_1 + 0xb04) = uVar2;
  uVar6 = 2;
  uVar5 = 0x2a;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xb08),3);
  *(uint *)(param_1 + 0xb0c) = uVar2;
  uVar6 = 2;
  uVar5 = 0x2b;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xb18),3);
  *(uint *)(param_1 + 0xb1c) = uVar2;
  uVar6 = 2;
  uVar5 = 0x2c;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xb20),3);
  *(uint *)(param_1 + 0xb24) = uVar2;
  uVar6 = 2;
  uVar5 = 0x2d;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar5,uVar6);
  F_005a2710((undefined *)(param_1 + 0xb28),3);
  *(uint *)(param_1 + 0xb2c) = uVar2;
  uVar6 = 2;
  uVar5 = 0x20;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar5,uVar6);
  iVar4 = uVar2 - 1;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  F_005a2710((undefined *)(param_1 + 0xb30),3);
  *(int *)(param_1 + 0xb34) = iVar4;
  uVar6 = 2;
  uVar5 = 0x36;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar5,uVar6);
  uVar3 = F_005a2710((undefined *)(param_1 + 0xb38),3);
  *(uint *)(param_1 + 0xb3c) = uVar2;
  return uVar3;
}

/* ref: FUN_00768340 */
uint F_00768340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x768340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 2;
  uVar4 = 0x38;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa48),3);
  *(uint *)(param_1 + 0xa4c) = uVar2;
  uVar5 = 2;
  uVar4 = 0x39;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa50),3);
  *(uint *)(param_1 + 0xa54) = uVar2;
  uVar5 = 2;
  uVar4 = 0x3a;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  uVar3 = F_005a2710((undefined *)(param_1 + 0xa58),3);
  *(uint *)(param_1 + 0xa5c) = uVar2;
  return uVar3;
}

/* ref: FUN_007683e0 */
uint F_007683e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7683e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 2;
  uVar4 = 0x41;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  F_005a2710((undefined *)(param_1 + 0xa48),3);
  *(uint *)(param_1 + 0xa4c) = uVar2 + 1;
  uVar5 = 2;
  uVar4 = 0x42;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043c920(pvVar1,uVar4,uVar5);
  uVar3 = F_005a2710((undefined *)(param_1 + 0xa50),3);
  *(uint *)(param_1 + 0xa54) = uVar2;
  return uVar3;
}

/* ref: FUN_00768450 */
unsigned int F_00768450(unsigned int gen_a0)
{
  GEN_ENTER(0x768450u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 != 0) {
    REFG(undefined1, 0x148a112) = 1;
  }
  return 0;
}

/* ref: FUN_00768470 */
byte F_00768470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x768470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)((int)this + 0x782c);
  do {
    if (*piVar2 == param_1) {
      return 1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 0x18);
  return 0;
}

/* ref: FUN_007684a0 */
uint F_007684a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7684a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP((*(int *)((*(int *)&gen_args[1]) + 0x20) + (*(int *)&gen_args[3]) * 4)));
  if ((*(uint *)((*(int *)&gen_args[0]) + 0x10) & (*(uint *)&gen_args[2])) == 0) {
    if (*piVar1 != 0) {
      *piVar1 = 0;
      *(undefined1 *)((*(int *)&gen_args[1]) + 0x1d) = 1;
    }
  }
  else if (*piVar1 != 1) {
    *piVar1 = 1;
    *(undefined1 *)((*(int *)&gen_args[1]) + 0x1d) = 1;
    return (uint)piVar1;
  }
  return (uint)piVar1;
}

/* ref: FUN_007684e0 */
uint F_007684e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7684e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = *(int *)(param_1 + param_3 * 4);
  if (((param_4 < 1) || (iVar1 < 0x51)) && ((-1 < param_4 || (-0x51 < iVar1)))) {
    puVar2 = ((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + param_5 * 4)));
    if (*((int *)GEN_TOP((*(int *)(param_2 + 0x20) + param_5 * 4))) != 0) {
      *puVar2 = 0;
      *(undefined1 *)(param_2 + 0x1d) = 1;
    }
  }
  else {
    puVar2 = ((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x20) + param_5 * 4)));
    if (*((int *)GEN_TOP((*(int *)(param_2 + 0x20) + param_5 * 4))) != 1) {
      *puVar2 = 1;
      *(undefined1 *)(param_2 + 0x1d) = 1;
      return (uint)puVar2;
    }
  }
  return (uint)puVar2;
}

/* ref: FUN_00768550 */
byte F_00768550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x768550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  byte bVar2;
  undefined * pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar5 = *(undefined4 *)((int)this + param_2 * 8 + 0x6668);
  uVar7 = *(undefined4 *)((int)this + param_2 * 8 + 0x666c);
  uVar6 = *(undefined4 *)((int)this + param_2 * 4 + 0x6fc8);
  piVar1 = *(int * PTR32 *)((int)this + 4);
  uVar10 = 1;
  uVar9 = 1;
  uVar8 = 2;
  if (param_1 == 1) {
    uVar4 = 4;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1)));
    bVar2 = F_00447870(pvVar3,uVar4,uVar5,uVar8,uVar9,uVar10);
    if (*(char *)((int)this + 0x1c) == '\0') {
      *(bool *)((int)this + 0x1c) = bVar2 == 0;
    }
    uVar10 = 1;
    uVar9 = 1;
    uVar8 = 2;
    uVar5 = 5;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
    bVar2 = F_00447870(pvVar3,uVar5,uVar7,uVar8,uVar9,uVar10);
    if (*(char *)((int)this + 0x1c) == '\0') {
      *(bool *)((int)this + 0x1c) = bVar2 == 0;
    }
    uVar5 = 6;
    uVar7 = uVar6;
  }
  else {
    uVar6 = 2;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1)));
    bVar2 = F_00447870(pvVar3,uVar6,uVar5,uVar8,uVar9,uVar10);
    if (*(char *)((int)this + 0x1c) == '\0') {
      *(bool *)((int)this + 0x1c) = bVar2 == 0;
    }
    uVar5 = 3;
  }
  uVar9 = 1;
  uVar8 = 1;
  uVar6 = 2;
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4))));
  bVar2 = F_00447870(pvVar3,uVar5,uVar7,uVar6,uVar8,uVar9);
  if (*(char *)((int)this + 0x1c) == '\0') {
    *(bool *)((int)this + 0x1c) = bVar2 == 0;
  }
  if (*(int *)((int)this + 0x48) != param_2) {
    *(int *)((int)this + 0x48) = param_2;
    *(undefined1 *)((int)this + 0x1d) = 1;
    *(undefined2 *)((int)this + 0x2d) = 0xf01;
    *(bool *)((int)this + 0x2f) = param_1 == 1;
    *(undefined1 *)((int)this + 0x3c) = 1;
    return 1;
  }
  return 0;
}

/* ref: FUN_00768650 */
unsigned int F_00768650(unsigned int gen_a0)
{
  GEN_ENTER(0x768650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x40) + 8))))(*(int * PTR32 *)(uVar1 + 0x40));
  return 0;
}

/* ref: FUN_00768670 */
byte F_00768670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x768670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  
  *(undefined4 *)((int)this + 0x10) = 0;
  if (((*param_1 & 0xf) == 0) || (*(int *)(param_1 + 4) == 0)) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0xc),0);
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined1 *)((int)this + 0x193c) = 0;
  }
  return 1;
}

/* ref: Client::UI2::Agent::AgentConfigLog::vf3 */
uint F_007686c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7686c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 0xc),0);
  *(undefined4 *)(this + 0xc) = 0;
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 0x10),0);
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x1940) = 0;
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentConfigLog::vf5 */
uint F_00768730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x768730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined * this_00;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x58))))(*(int * PTR32 *)(this + 4));
  if (3 < *(uint *)(uVar1 + 0x29c)) {
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x58))))(*(int * PTR32 *)(this + 4))));
    uVar1 = F_00454290(this_00);
  }
  return uVar1;
}

/* ref: FUN_00768760 */
uint F_00768760(unsigned int gen_a0)
{
  GEN_ENTER(0x768760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  char * pcVar1;
  uint in_ecx;
  uint uVar2;
  int * piVar3;
  char * in_ecx_00;
  undefined4 * puVar4;
  int iVar5;
  undefined1 * this_00;
  int iVar6;
  char * PTR32 * this_01;
  
  pcVar1 = (char *)(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc));
  (*(char * PTR32 *)(gen_frame + 0xd8)) = pcVar1;
  if (*(int *)((int)this + 8) != 0) {
    puVar4 = ((undefined4 *)(gen_frame + 0x8));
    iVar5 = 0x19;
    iVar6 = 0;
    do {
      *puVar4 = 0;
      puVar4 = puVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    F_005a2710(((undefined4 *)(gen_frame + 0x8)),4);
    ((undefined4 *)(gen_frame + 0x8))[1] = 1;
    in_ecx = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4));
    this_00 = ((undefined1 *)(gen_frame + 0xb8));
    do {
      uVar2 = F_0043b840(in_ecx,iVar6);
      uVar2 = F_0042a990(uVar2);
      F_005a2710(this_00,6);
      *(uint *)(this_00 + 4) = uVar2;
      iVar6 = iVar6 + 1;
      this_00 = this_00 + 8;
    } while (iVar6 < 4);
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,*(undefined4 *)((int)this + 8),0x1a,((undefined4 *)(gen_frame + 0x8)));
    this_01 = &(*(char * PTR32 *)(gen_frame + 0xd8));
    iVar5 = 0x19;
    do {
      this_01 = this_01 + -2;
      pcVar1 = (char *)F_005a2670(this_01);
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  if (*(int *)((int)this + 0xc) != 0) {
    in_ecx_00 = ((char *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4))));
    iVar5 = 0;
    pcVar1 = in_ecx_00;
    do {
      if (iVar5 == *(int *)((int)this + 0x1944)) {
        puVar4 = (undefined4 *)F_0043b840(in_ecx_00,iVar5);
        pcVar1 = (char *)*puVar4;
        if (*pcVar1 == '\0') {
          if (*(int *)((int)this + 0x10) != 0) {
            piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))
                                      (*(int * PTR32 *)((int)this + 4))));
            ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,*(undefined4 *)((int)this + 0x10),0);
            *(undefined4 *)((int)this + 0x10) = 0;
          }
          piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
          pcVar1 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,*(undefined4 *)((int)this + 0xc),0)));
          *(undefined4 *)((int)this + 0xc) = 0;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
  }
  F_00c47745((uint)(*(char * PTR32 *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
  return (uint)pcVar1;
}

/* ref: FUN_007688c0 */
uint F_007688c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7688c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x3a0];
  char cVar1;
  uint uVar2;
  undefined4 * puVar3;
  int * piVar4;
  int iVar5;
  uint * this_00;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x39c);
  (*(uint *)(gen_frame + 0x398)) = uVar2;
  if (*(int *)((int)this + 0xc) != 0) {
    puVar3 = ((undefined4 *)(gen_frame + 0x0));
    iVar5 = 0x72;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 2;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    F_005a2710(((undefined4 *)(gen_frame + 0x0)),4);
    cVar1 = *(char *)((int)this + 0x193c);
    ((undefined4 *)(gen_frame + 0x0))[1] = 1;
    F_005a2710(((undefined1 *)(gen_frame + 0x390)),4);
    (*(uint *)(gen_frame + 0x394)) = (uint)(cVar1 != '\0');
    piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 0xc),0x73,((undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x398));
    iVar5 = 0x72;
    do {
      this_00 = this_00 + -2;
      uVar2 = F_005a2670(this_00);
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  F_00c47745((*(uint *)(gen_frame + 0x398)) ^ (uint)(uint)(gen_frame + 0x39c));
  return uVar2;
}

/* ref: FUN_00768980 */
uint F_00768980(unsigned int gen_a0)
{
  GEN_ENTER(0x768980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x3a0];
  undefined4 uVar1;
  uint uVar2;
  undefined4 * puVar3;
  int * piVar4;
  int iVar5;
  uint * this_00;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x39c);
  (*(uint *)(gen_frame + 0x398)) = uVar2;
  if (*(int *)((int)this + 0xc) != 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4));
    puVar3 = ((undefined4 *)(gen_frame + 0x0));
    iVar5 = 0x72;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 2;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    F_005a2710(((undefined4 *)(gen_frame + 0x0)),4);
    uVar1 = *(undefined4 *)((int)this + 0x1944);
    ((undefined4 *)(gen_frame + 0x0))[1] = 4;
    F_005a2710(((undefined1 *)(gen_frame + 0x8)),4);
    (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
    uVar2 = F_0043b840(uVar2,*(undefined4 *)((int)this + 0x1944));
    uVar2 = F_0042a990(uVar2);
    F_005a2710(((undefined1 *)(gen_frame + 0x10)),6);
    (*(uint *)(gen_frame + 0x14)) = uVar2;
    piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 0xc),0x73,((undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0x398));
    iVar5 = 0x72;
    do {
      this_00 = this_00 + -2;
      uVar2 = F_005a2670(this_00);
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  F_00c47745((*(uint *)(gen_frame + 0x398)) ^ (uint)(uint)(gen_frame + 0x39c));
  return uVar2;
}

/* ref: FUN_00768a70 */
uint F_00768a70(unsigned int gen_a0)
{
  GEN_ENTER(0x768a70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if (param_1 < 0x65) {
    return *(uint *)(&REFG(undefined, 0x148a2b0) + param_1 * 4);
  }
  return 0xffffffff;
}

/* ref: FUN_00768a90 */
uint F_00768a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x768a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x4cb;
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = F_0043bd00(pvVar1,uVar3,uVar4,uVar5);
    return uVar2;
  case 1: ;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x4cc;
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = F_0043bd00(pvVar1,uVar3,uVar4,uVar5);
    return uVar2;
  case 2: ;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x4cd;
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = F_0043bd00(pvVar1,uVar3,uVar4,uVar5);
    return uVar2;
  case 3: ;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x4ce;
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = F_0043bd00(pvVar1,uVar3,uVar4,uVar5);
    return uVar2;
  case 4: ;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x4cf;
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = F_0043bd00(pvVar1,uVar3,uVar4,uVar5);
    return uVar2;
  case 5: ;
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0x4d0;
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = F_0043bd00(pvVar1,uVar3,uVar4,uVar5);
    return uVar2;
  default: ;
    return 0;
  }
}

/* ref: FUN_00768b80 */
byte F_00768b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x768b80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  
  if (param_1 < *((uint *)GEN_TOP(((int)this + *(int *)((int)this + 0x1940) * 4 + 0x14)))) {
    iVar1 = *((int *)GEN_TOP(((int)this + (*(int *)((int)this + 0x1940) * 0x20 + 3 + param_1) * 0x14)));
    if (*(char *)(iVar1 + 0x1948 + (int)this) != (char)param_2) {
      *(char *)(iVar1 + 0x1948 + (int)this) = (char)param_2;
      return 1;
    }
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentConfigLogColor::vf1 */
uint F_00768bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x768bc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  uint uVar1;
  
  if ((-1 < param_4) && (param_4 < 4)) {
    uVar1 = ((code *)*(gen_code32 *)(this + param_4 * 4 + 0x238))(param_2,param_3);
    *param_1 = 2;
    *(char *)(param_1 + 1) = (char)uVar1;
    return (uint)param_1;
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentConfigLogColor::vf3 */
unsigned int F_00768c10(unsigned int gen_a0)
{
  GEN_ENTER(0x768c10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  if (*(int *)(this + 0xc) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 0xc),0);
    *(undefined4 *)(this + 0xc) = 0;
  }
  *(undefined2 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  return 0;
}

/* ref: Client::UI2::Agent::AgentConfigLogColor::vf5 */
unsigned int F_00768c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x768c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (this[0x14] != (undefined1)0x0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  }
  return 0;
}

/* ref: FUN_00768c80 */
unsigned int F_00768c80(unsigned int gen_a0)
{
  GEN_ENTER(0x768c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00c48350((undefined4 *)((int)this + 0x18),0,0x220);
  *(undefined4 *)((int)this + 0x18) = 10;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x24) = 0x773;
  *(undefined4 *)((int)this + 0x28) = 0x1e;
  *(undefined4 *)((int)this + 0x2c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x34) = 0x78b;
  *(undefined4 *)((int)this + 0x38) = 0xb;
  *(undefined4 *)((int)this + 0x3c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x44) = 0x774;
  *(undefined4 *)((int)this + 0x48) = 0xc;
  *(undefined4 *)((int)this + 0x4c) = 0xd;
  *(undefined4 *)((int)this + 0x54) = 0x775;
  *(undefined4 *)((int)this + 0x58) = 0xe;
  *(undefined4 *)((int)this + 0x5c) = 0xffffffff;
  *(undefined4 *)((int)this + 100) = 0x776;
  *(undefined4 *)((int)this + 0x68) = 0x1d;
  *(undefined4 *)((int)this + 0x6c) = 0x1c;
  *(undefined4 *)((int)this + 0x74) = 0x777;
  *(undefined4 *)((int)this + 0x1b8) = 0x38;
  *(undefined4 *)((int)this + 0x1bc) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1c4) = 0x778;
  *(undefined4 *)((int)this + 0x78) = 0x18;
  *(undefined4 *)((int)this + 0x7c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x84) = 0x78d;
  *(undefined4 *)((int)this + 0x88) = 0x10;
  *(undefined4 *)((int)this + 0x8c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x94) = 0x1194;
  *(undefined4 *)((int)this + 0x98) = 0x11;
  *(undefined4 *)((int)this + 0x9c) = 0xffffffff;
  *(undefined4 *)((int)this + 0xa4) = 0x1195;
  *(undefined4 *)((int)this + 0xa8) = 0x12;
  *(undefined4 *)((int)this + 0xac) = 0xffffffff;
  *(undefined4 *)((int)this + 0xb4) = 0x1196;
  *(undefined4 *)((int)this + 0xb8) = 0x13;
  *(undefined4 *)((int)this + 0xbc) = 0xffffffff;
  *(undefined4 *)((int)this + 0xc4) = 0x1197;
  *(undefined4 *)((int)this + 200) = 0x14;
  *(undefined4 *)((int)this + 0xcc) = 0xffffffff;
  *(undefined4 *)((int)this + 0xd4) = 0x1198;
  *(undefined4 *)((int)this + 0xd8) = 0x15;
  *(undefined4 *)((int)this + 0xdc) = 0xffffffff;
  *(undefined4 *)((int)this + 0xe4) = 0x1199;
  *(undefined4 *)((int)this + 0xe8) = 0x16;
  *(undefined4 *)((int)this + 0xec) = 0xffffffff;
  *(undefined4 *)((int)this + 0xf4) = 0x119a;
  *(undefined4 *)((int)this + 0xf8) = 0x17;
  *(undefined4 *)((int)this + 0xfc) = 0xffffffff;
  *(undefined4 *)((int)this + 0x104) = 0x119b;
  *(undefined4 *)((int)this + 0x108) = 0x29;
  *(undefined4 *)((int)this + 0x10c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x114) = 0x783;
  *(undefined4 *)((int)this + 0x118) = 0x2a;
  *(undefined4 *)((int)this + 0x11c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x124) = 0x784;
  *(undefined4 *)((int)this + 0x128) = 0x2b;
  *(undefined4 *)((int)this + 300) = 0xffffffff;
  *(undefined4 *)((int)this + 0x134) = 0x785;
  *(undefined4 *)((int)this + 0x138) = 0x2c;
  *(undefined4 *)((int)this + 0x13c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x144) = 0x786;
  *(undefined4 *)((int)this + 0x148) = 0x2d;
  *(undefined4 *)((int)this + 0x14c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x154) = 0x787;
  *(undefined4 *)((int)this + 0x158) = 0x2e;
  *(undefined4 *)((int)this + 0x15c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x164) = 0x788;
  *(undefined4 *)((int)this + 0x168) = 0x2f;
  *(undefined4 *)((int)this + 0x16c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x174) = 0x789;
  *(undefined4 *)((int)this + 0x178) = 0x39;
  *(undefined4 *)((int)this + 0x17c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x184) = 0x779;
  *(undefined4 *)((int)this + 0x188) = 0x3a;
  *(undefined4 *)((int)this + 0x18c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x194) = 0x77a;
  *(undefined4 *)((int)this + 0x198) = 0x3b;
  *(undefined4 *)((int)this + 0x19c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1a4) = 0x77b;
  *(undefined4 *)((int)this + 0x1a8) = 0x3c;
  *(undefined4 *)((int)this + 0x1ac) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1b4) = 0x77c;
  *(undefined4 *)((int)this + 0x1c8) = 0x45;
  *(undefined4 *)((int)this + 0x1cc) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1d4) = 0x78e;
  *(undefined4 *)((int)this + 0x1d8) = 0x3d;
  *(undefined4 *)((int)this + 0x1dc) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1e4) = 0x77d;
  *(undefined4 *)((int)this + 0x1e8) = 0x3e;
  *(undefined4 *)((int)this + 0x1ec) = 0xffffffff;
  *(undefined4 *)((int)this + 500) = 0x77e;
  *(undefined4 *)((int)this + 0x1f8) = 0x40;
  *(undefined4 *)((int)this + 0x1fc) = 0xffffffff;
  *(undefined4 *)((int)this + 0x204) = 0x77f;
  *(undefined4 *)((int)this + 0x208) = 0x41;
  *(undefined4 *)((int)this + 0x20c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x214) = 0x780;
  *(undefined4 *)((int)this + 0x218) = 0x42;
  *(undefined4 *)((int)this + 0x21c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x224) = 0x781;
  *(undefined4 *)((int)this + 0x228) = 0x43;
  *(undefined4 *)((int)this + 0x22c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x234) = 0x782;
  return 0;
}

/* ref: FUN_00769000 */
unsigned int F_00769000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x769000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined1 uVar1;
  undefined * this_00;
  uint uVar2;
  undefined * pvVar3;
  undefined4 * puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_c;
  
  if (param_1 != (undefined *)0x0) {
    puVar4 = (undefined4 *)((int)this + 0x20);
    local_c = 0x22;
    pvVar3 = param_1;
    do {
      uVar5 = *puVar4;
      F_005a2710(pvVar3,4);
      *(undefined4 *)((int)pvVar3 + 4) = uVar5;
      puVar4 = puVar4 + 4;
      pvVar3 = (undefined *)((int)pvVar3 + 8);
      local_c = local_c + -1;
    } while (local_c != 0);
    pvVar3 = (undefined *)((int)param_1 + 0x110);
    puVar4 = (undefined4 *)((int)this + 0x24);
    local_c = 0x22;
    do {
      uVar5 = *puVar4;
      uVar7 = 0;
      uVar6 = 0;
      this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      uVar2 = F_0043bd00(this_00,uVar5,uVar6,uVar7);
      F_005a2710(pvVar3,6);
      *(uint *)((int)pvVar3 + 4) = uVar2;
      pvVar3 = (undefined *)((int)pvVar3 + 8);
      puVar4 = puVar4 + 4;
      local_c = local_c + -1;
    } while (local_c != 0);
    uVar1 = *(undefined1 *)((int)this + 0x15);
    F_005a2710((undefined *)((int)param_1 + 0x220),2);
    *(undefined1 *)((int)param_1 + 0x224) = uVar1;
  }
  return 0;
}

/* ref: FUN_007690b0 */
uint F_007690b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7690b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  undefined4 * puVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  
  uVar7 = 0;
  uVar1 = F_00404270();
  puVar2 = (undefined4 *)F_00406c00(0x22c,0,uVar1,uVar7);
  if (puVar2 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = puVar2 + 1;
    *puVar2 = 0x45;
    iVar4 = 0x44;
    puVar2 = puVar5;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 2;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  F_00769000(this,puVar5);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,*(undefined4 *)((int)this + 8),0x45,puVar5);
  if (puVar5 != (undefined4 *)0x0) {
    iVar4 = puVar5[-1];
    puVar2 = puVar5 + iVar4 * 2;
    while (iVar4 = iVar4 + -1, -1 < iVar4) {
      puVar2 = puVar2 + -2;
      F_005a2670(puVar2);
    }
    uVar6 = F_00406b30(puVar5 + -1);
    uVar1 = (uint)uVar6;
  }
  return uVar1;
}

/* ref: FUN_00769170 */
unsigned int F_00769170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x769170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  
  if (param_1 < 3) {
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4))));
    F_0046a630(this_00,*(undefined4 *)((int)this + param_1 * 4 + 0x248));
  }
  return 0;
}

/* ref: FUN_007691a0 */
uint F_007691a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7691a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  if (*(int *)((int)this + 0x3b8) != 0) {
    F_00406b30(*(int *)((int)this + 0x3b8));
    *(undefined4 *)((int)this + 0x3b8) = 0;
  }
  uVar1 = 0;
  if (*(int *)((int)this + 0x3bc) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 0x3bc));
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 0x3bc) = 0;
  }
  *(undefined4 *)((int)this + 0x3c0) = 0xffffffff;
  return uVar1;
}

/* ref: FUN_007691f0 */
uint F_007691f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7691f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((-1 < param_1) && (param_1 < *((int *)GEN_TOP((*(int *)((int)this + 0x28) + 0x838))))) {
    return (int)*((short *)GEN_TOP((*(int *)((int)this + 0x3bc) + param_1 * 2)));
  }
  return 0xffffffff;
}

/* ref: FUN_00769220 */
uint F_00769220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x769220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  short * psVar3;
  
  if (-1 < param_1) {
    iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x28) + 0x838)));
    uVar2 = 0;
    if (0 < iVar1) {
      psVar3 = *(short * PTR32 *)((int)this + 0x3b8);
      do {
        if (*psVar3 == param_1) {
          return uVar2;
        }
        uVar2 = uVar2 + 1;
        psVar3 = psVar3 + 1;
      } while ((int)uVar2 < iVar1);
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00769260 */
uint F_00769260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x769260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  F_0042aca0((int)this + 0xfc);
  if ((param_1 & 2) != 0) {
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0x1399;
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = F_0043bd00(pvVar1,uVar4,uVar5,uVar6);
    F_0042e370((undefined *)((int)this + 0xfc),uVar2);
    F_0042e370((undefined *)((int)this + 0xfc),&REFG(undefined, 0x10bfa8c));
  }
  if ((param_1 & 4) != 0) {
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0x139a;
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = F_0043bd00(pvVar1,uVar4,uVar5,uVar6);
    F_0042e370((undefined *)((int)this + 0xfc),uVar2);
    F_0042e370((undefined *)((int)this + 0xfc),&REFG(undefined, 0x10bfa90));
  }
  if ((param_1 & 1) != 0) {
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0x1398;
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = F_0043bd00(pvVar1,uVar4,uVar5,uVar6);
    F_0042e370((undefined *)((int)this + 0xfc),uVar2);
    F_0042e370((undefined *)((int)this + 0xfc),&REFG(undefined, 0x10bfa94));
  }
  if ((char)param_2 != '\0') {
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,param_2);
    F_0042e370((undefined *)((int)this + 0xfc),uVar2);
  }
  return (int)this + 0xfc;
}

/* ref: FUN_00769360 */
uint F_00769360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x769360u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  char cVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (*(int *)&gen_args[1]);
  cVar1 = *(char *)((*(int *)&gen_args[1]) + (*(int *)&gen_args[2]) * 2);
  (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),cVar1);
  if (cVar1 != '\0') {
    (*(int *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[2]), 1, 3),*(undefined1 *)(iVar2 + 1 + (*(int *)&gen_args[2]) * 2));
    uVar3 = F_00769260((*(undefined * PTR32 *)&gen_args[0]),(*(int *)&gen_args[2]),(*(int *)&gen_args[1]));
    return uVar3;
  }
  return 0x12fd328;
}

/* ref: Client::UI2::Agent::AgentConfigKey::vf3 */
uint F_007693a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7693a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (*(int *)(this + 0x2c) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 0x2c),0);
  }
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  if (*(int *)(this + 0x3b8) != 0) {
    F_00406b30(*(int *)(this + 0x3b8));
    *(undefined4 *)(this + 0x3b8) = 0;
  }
  uVar2 = 0;
  if (*(int *)(this + 0x3bc) != 0) {
    uVar3 = F_00406b30(*(int *)(this + 0x3bc));
    uVar2 = (uint)uVar3;
    *(undefined4 *)(this + 0x3bc) = 0;
  }
  *(undefined4 *)(this + 0x3c0) = 0xffffffff;
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentConfigPadCustomize::vf3 */
unsigned int F_00769430(unsigned int gen_a0)
{
  GEN_ENTER(0x769430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return 0;
}

/* ref: FUN_00769460 */
unsigned int F_00769460(unsigned int gen_a0)
{
  GEN_ENTER(0x769460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0x10) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x10),0);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  return 0;
}

/* ref: FUN_00769490 */
int F_00769490(unsigned int gen_a0)
{
  GEN_ENTER(0x769490u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0;
  do {
    if (uVar2 == param_1) {
      return iVar1;
    }
    iVar1 = iVar1 + (&REFG(undefined4, 0x10bfb4c))[(int)(uVar2)];
    uVar2 = uVar2 + 1;
  } while (uVar2 < 5);
  return iVar1;
}

/* ref: FUN_007694c0 */
uint F_007694c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7694c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  int iVar2;
  int * piVar3;
  int iVar4;
  
  iVar4 = 0;
  if ((char)param_1 != '\0') {
    piVar3 = &REFG(undefined4, 0x10bfb64);
    do {
      piVar1 = piVar3 + 1;
      iVar2 = *piVar3;
      piVar3 = piVar3 + 2;
      iVar4 = iVar4 + 2 + (&REFG(undefined4, 0x10bfb4c))[(int)(*piVar1)] + (&REFG(undefined4, 0x10bfb4c))[(int)(iVar2)];
    } while ((int)piVar3 < 0x10bfb9c);
  }
  return iVar4 + 0x1e;
}

/* ref: Client::UI2::Agent::AgentConfigPadCustomize::vf5 */
unsigned int F_00769500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x769500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00769510 */
uint F_00769510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x769510u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x4c + param_2 * 4);
}

/* ref: FUN_00769520 */
unsigned int F_00769520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x769520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int * piVar2;
  
  if (*(int *)((int)this + param_1 * 4 + 0x4c) != param_2) {
    iVar1 = 0;
    piVar2 = (int *)((int)this + 0x4c);
    while ((((&REFG(undefined4, 0x10bfb64))[(int)(iVar1)] != (&REFG(undefined4, 0x10bfb64))[(int)(param_1)] || (param_1 == iVar1)) ||
           (*piVar2 != param_2))) {
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
      if (0xd < iVar1) {
        *(int *)((int)this + param_1 * 4 + 0x4c) = param_2;
        *(undefined1 *)((int)this + 0xc) = 1;
        return 0;
      }
    }
    *(undefined4 *)((int)this + iVar1 * 4 + 0x4c) = *(undefined4 *)((int)this + param_1 * 4 + 0x4c);
    *(int *)((int)this + param_1 * 4 + 0x4c) = param_2;
    *(undefined1 *)((int)this + 0xc) = 1;
  }
  return 0;
}

/* ref: FUN_00769590 */
uint F_00769590(unsigned int gen_a0)
{
  GEN_ENTER(0x769590u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = 0;
  iVar3 = 0;
  do {
    iVar2 = *(int *)((int)&REFG(undefined4, 0x10bfb4c) + uVar1) + iVar3;
    if (param_1 < iVar2) {
      return param_1 - iVar3;
    }
    uVar1 = uVar1 + 4;
    iVar3 = iVar2;
  } while (uVar1 < 0x14);
  return 0;
}

/* ref: FUN_007695d0 */
uint F_007695d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7695d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = 0;
  do {
    if (param_2 == uVar1) {
      return param_1 + iVar2;
    }
    iVar2 = iVar2 + (&REFG(undefined4, 0x10bfb4c))[(int)(uVar1)];
    uVar1 = uVar1 + 1;
  } while (uVar1 < 5);
  return 0;
}

/* ref: FUN_00769600 */
unsigned int F_00769600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x769600u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00769610 */
uint F_00769610(unsigned int gen_a0)
{
  GEN_ENTER(0x769610u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined2 *)(in_ecx + 0xc) = 1;
  *(undefined1 *)(in_ecx + 0xe) = 0x1f;
  *(undefined4 *)(in_ecx + 0x204) = 0;
  *(undefined4 *)(in_ecx + 0x268) = 0;
  *(undefined4 *)(in_ecx + 0x26c) = 0;
  *(undefined4 *)(in_ecx + 0x270) = 0xe0000000;
  *(undefined4 *)(in_ecx + 0x274) = 0;
  *(undefined4 *)(in_ecx + 0x518) = 0;
  *(undefined4 *)(in_ecx + 0x51c) = 0;
  return 0;
}

/* ref: FUN_00769650 */
uint F_00769650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x769650u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined * this_00;
  ushort uVar1;
  uint uVar2;
  
  this_00 = ((undefined *)GEN_TOP(((int)this + *(short *)((int)this + 0xc) * 8 + 0x10)));
  F_005a2710(this_00,6);
  *(undefined4 *)((int)this_00 + 4) = param_1;
  *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) =
       *(undefined1 *)((int)this + 0xe);
  *((undefined4 *)GEN_TOP(((int)this + *(short *)((int)this + 0xc) * 4 + 0x164))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + *(short *)((int)this + 0xc) * 4 + 0x1b4))) = param_3;
  uVar1 = *(ushort *)((int)this + 0xc);
  if (0 < (short)uVar1) {
    uVar2 = 1 << ((char)uVar1 - 1U & 0x1f);
    if ((char)param_4 != '\0') {
      *(uint *)((int)this + 0x204) = *(uint *)((int)this + 0x204) | uVar2;
      uVar2 = uVar1 + 1;
      *(char *)((int)this + 0xe) = *(char *)((int)this + 0xe) + '\x01';
      *(short *)((int)this + 0xc) = (short)uVar2;
      return uVar2;
    }
    *(uint *)((int)this + 0x204) = *(uint *)((int)this + 0x204) & ~uVar2;
  }
  uVar2 = uVar1 + 1;
  *(char *)((int)this + 0xe) = *(char *)((int)this + 0xe) + '\x01';
  *(short *)((int)this + 0xc) = (short)uVar2;
  return uVar2;
}

/* ref: FUN_007696e0 */
uint F_007696e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7696e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  short sVar1;
  byte bVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (REFG(undefined1, 0x1338ad4) < 2) {
LAB_007697a9: ;
    *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 5;
    sVar1 = *(short *)((int)this + 0xc);
    uVar8 = 0;
    *(short *)((int)this + 0xc) = sVar1 + 1;
    uVar7 = 0;
    uVar6 = 0x36;
    pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  }
  else {
    if (REFG(int, 0x1379694) == 0) goto LAB_007697ea;
    bVar2 = F_00ae09c0(&REFG(undefined, 0x1336e40),*(undefined4 *)(REFG(int, 0x1379694) + 0x74));
    if (bVar2 == 0) goto LAB_007697ea;
    bVar2 = F_004351d0();
    if (bVar2 != 0) goto LAB_007697ea;
    bVar2 = F_00ae0910(&REFG(undefined, 0x1336e40),*(undefined4 *)(param_1 + 0x74));
    if (bVar2 == 0) goto LAB_007697a9;
    *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 6;
    pvVar5 = ((undefined *)GEN_TOP(((int)this + *(short *)((int)this + 0xc) * 8 + 0x10)));
    uVar8 = 0;
    *(short *)((int)this + 0xc) = *(short *)((int)this + 0xc) + 1;
    uVar7 = 0;
    uVar6 = 0x37;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar4 = F_0043bd00(pvVar3,uVar6,uVar7,uVar8);
    F_005a2710(pvVar5,6);
    *(uint *)((int)pvVar5 + 4) = uVar4;
    *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 7;
    sVar1 = *(short *)((int)this + 0xc);
    uVar8 = 0;
    *(short *)((int)this + 0xc) = sVar1 + 1;
    uVar7 = 0;
    uVar6 = 0x38;
    pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))
                               (*(int * PTR32 *)((int)this + 4),0x38,0,0)));
  }
  pvVar3 = (undefined *)((int)this + sVar1 * 8 + 0x10);
  uVar4 = F_0043bd00(pvVar5,uVar6,uVar7,uVar8);
  F_005a2710(pvVar3,6);
  *(uint *)((int)pvVar3 + 4) = uVar4;
LAB_007697ea: ;
  return (int)*(short *)((int)this + 0xc);
}

/* ref: FUN_00769800 */
uint F_00769800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x769800u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * pvVar1;
  short sVar2;
  int * piVar3;
  byte bVar4;
  byte * pbVar5;
  int iVar6;
  undefined * pvVar7;
  uint uVar8;
  byte * pbVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  piVar3 = REFG(int * PTR32, 0x1379694);
  if (REFG(int * PTR32, 0x1379694) != (int *)0x0) {
    pbVar5 = ((byte *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 0xc))))(REFG(int * PTR32, 0x1379694))));
    pbVar9 = (byte *)(param_1 + 7);
    do {
      bVar4 = *pbVar9;
      bVar10 = bVar4 < *pbVar5;
      if (bVar4 != *pbVar5) {
LAB_00769847: ;
        iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_0076984c;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar9[1];
      bVar10 = bVar4 < pbVar5[1];
      if (bVar4 != pbVar5[1]) goto LAB_00769847;
      pbVar9 = pbVar9 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar4 != 0);
    iVar6 = 0;
LAB_0076984c: ;
    if ((((iVar6 != 0) && (bVar4 = F_004351d0(), bVar4 == 0)) &&
        (bVar4 = F_00ae09c0(&REFG(undefined, 0x1336e40),piVar3[0x1d]), bVar4 != 0)) &&
       (bVar4 = F_00ae0950(&REFG(undefined, 0x1336e40),param_1 + 7), bVar4 != 0)) {
      *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 6;
      pvVar1 = ((undefined *)GEN_TOP(((int)this + *(short *)((int)this + 0xc) * 8 + 0x10)));
      uVar13 = 0;
      *(short *)((int)this + 0xc) = *(short *)((int)this + 0xc) + 1;
      uVar12 = 0;
      uVar11 = 0x37;
      pvVar7 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      uVar8 = F_0043bd00(pvVar7,uVar11,uVar12,uVar13);
      F_005a2710(pvVar1,6);
      *(uint *)((int)pvVar1 + 4) = uVar8;
      *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 7;
      sVar2 = *(short *)((int)this + 0xc);
      uVar13 = 0;
      *(short *)((int)this + 0xc) = sVar2 + 1;
      uVar12 = 0;
      pvVar1 = (undefined *)((int)this + sVar2 * 8 + 0x10);
      uVar11 = 0x38;
      pvVar7 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      uVar8 = F_0043bd00(pvVar7,uVar11,uVar12,uVar13);
      F_005a2710(pvVar1,6);
      *(uint *)((int)pvVar1 + 4) = uVar8;
    }
  }
  *(undefined4 *)((int)this + 0x268) = *param_1;
  *(undefined4 *)((int)this + 0x26c) = param_1[1];
  F_0042e430((undefined *)((int)this + 0x210),param_1 + 7);
  return (int)*(short *)((int)this + 0xc);
}

/* ref: FUN_00769940 */
uint F_00769940(unsigned int gen_a0)
{
  GEN_ENTER(0x769940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short sVar1;
  byte bVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  uint uVar5;
  undefined * this_00;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar7 = 0xb;
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
  pvVar4 = (undefined *)F_00435440(uVar3,uVar7);
  uVar3 = 0;
  if (pvVar4 != (undefined *)0x0) {
    bVar2 = F_00436880(pvVar4);
    uVar3 = CONCAT31(extraout_var,bVar2);
    if (bVar2 != 0) {
      if (bVar2 < 3) {
        bVar2 = F_00436890(pvVar4);
        if (bVar2 == 0) {
          return CONCAT31(extraout_var_01,bVar2);
        }
        *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 0x17;
        sVar1 = *(short *)((int)this + 0xc);
        uVar8 = 0;
        *(short *)((int)this + 0xc) = sVar1 + 1;
        uVar6 = 0;
        uVar7 = 0xaf6;
        pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      }
      else {
        if (bVar2 != 3) {
          return uVar3;
        }
        bVar2 = F_00441290(pvVar4,5);
        if (bVar2 == 0) {
          return CONCAT31(extraout_var_00,bVar2);
        }
        *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 0x18;
        sVar1 = *(short *)((int)this + 0xc);
        uVar8 = 0;
        *(short *)((int)this + 0xc) = sVar1 + 1;
        uVar6 = 0;
        uVar7 = 0xaf2;
        pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))
                                   (*(int * PTR32 *)((int)this + 4),0xaf2,0,0)));
      }
      this_00 = (undefined *)((int)this + sVar1 * 8 + 0x10);
      uVar5 = F_0043bd00(pvVar4,uVar7,uVar6,uVar8);
      uVar3 = F_005a2710(this_00,6);
      *(uint *)((int)this_00 + 4) = uVar5;
    }
  }
  return uVar3;
}

/* ref: FUN_00769a10 */
uint F_00769a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x769a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  short sVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_1 != 0) {
    if (*(char *)(REFG(int, 0x1379694) + 0x188) != '\x02') {
      *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 0x1a;
      sVar2 = *(short *)((int)this + 0xc);
      uVar7 = 0;
      *(short *)((int)this + 0xc) = sVar2 + 1;
      uVar6 = 0;
      pvVar1 = (undefined *)((int)this + sVar2 * 8 + 0x10);
      uVar5 = 0x27b;
      pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      uVar4 = F_0043bd00(pvVar3,uVar5,uVar6,uVar7);
      F_005a2710(pvVar1,6);
      *(uint *)((int)pvVar1 + 4) = uVar4;
    }
    *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 0x1b;
    pvVar1 = ((undefined *)GEN_TOP(((int)this + *(short *)((int)this + 0xc) * 8 + 0x10)));
    uVar7 = 0;
    *(short *)((int)this + 0xc) = *(short *)((int)this + 0xc) + 1;
    uVar6 = 0;
    uVar5 = 0x27c;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar4 = F_0043bd00(pvVar3,uVar5,uVar6,uVar7);
    F_005a2710(pvVar1,6);
    *(uint *)((int)pvVar1 + 4) = uVar4;
  }
  return (int)*(short *)((int)this + 0xc);
}

/* ref: FUN_00769ad0 */
uint F_00769ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x769ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined * pvVar1;
  short sVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_1 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
    if (uVar3 != 7) {
      return (int)*(short *)((int)this + 0xc);
    }
    *((undefined1 *)GEN_TOP(((int)*(short *)((int)this + 0xc) + 0x150U + (int)this))) = 0x1a;
    pvVar1 = ((undefined *)GEN_TOP(((int)this + *(short *)((int)this + 0xc) * 8 + 0x10)));
    uVar7 = 0;
    *(short *)((int)this + 0xc) = *(short *)((int)this + 0xc) + 1;
    uVar6 = 0;
    uVar5 = 0x27b;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar3 = F_0043bd00(pvVar4,uVar5,uVar6,uVar7);
    F_005a2710(pvVar1,6);
    *(uint *)((int)pvVar1 + 4) = uVar3;
    *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 0x1b;
    sVar2 = *(short *)((int)this + 0xc);
    uVar7 = 0;
    *(short *)((int)this + 0xc) = sVar2 + 1;
    uVar6 = 0;
    pvVar1 = (undefined *)((int)this + sVar2 * 8 + 0x10);
    uVar5 = 0x27c;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar3 = F_0043bd00(pvVar4,uVar5,uVar6,uVar7);
    F_005a2710(pvVar1,6);
    *(uint *)((int)pvVar1 + 4) = uVar3;
  }
  return (int)*(short *)((int)this + 0xc);
}

/* ref: FUN_00769b90 */
byte F_00769b90(unsigned int gen_a0)
{
  GEN_ENTER(0x769b90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = F_00ab21a0((uint)*(byte *)(param_1 + 0x1688));
    if ((uVar1 != 0) && (*(int *)(uVar1 + 0x10) == 0x21)) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00769bc0 */
byte F_00769bc0(void)
{
  GEN_ENTER(0x769bc0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = F_00533a30(&REFG(undefined4, 0x1375bc0));
  if (uVar1 != 0) {
    uVar2 = F_005339f0(&REFG(undefined4, 0x1375bc0));
    uVar3 = F_00538780(&REFG(undefined4, 0x1375bc0));
    if (uVar2 != uVar3) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00769c00 */
uint F_00769c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x769c00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  short sVar1;
  int * piVar2;
  byte bVar3;
  undefined * pvVar4;
  uint uVar5;
  undefined * pvVar6;
  int * this_00;
  int * piVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  
  *(int * PTR32 *)((int)this + 0x20c) = param_1;
  if ((~(uint)param_2 & 2) != 0) {
    *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 2;
    pvVar6 = ((undefined *)GEN_TOP(((int)this + *(short *)((int)this + 0xc) * 8 + 0x10)));
    uVar13 = 0;
    *(short *)((int)this + 0xc) = *(short *)((int)this + 0xc) + 1;
    uVar11 = 0;
    uVar10 = 0x33;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar5 = F_0043bd00(pvVar4,uVar10,uVar11,uVar13);
    F_005a2710(pvVar6,6);
    *(uint *)((int)pvVar6 + 4) = uVar5;
    pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4))));
    uVar9 = F_0043f9f0(pvVar6);
    if ((*param_1 == (int)uVar9) && (param_1[1] == (int)(uVar9 >> 0x20))) {
      bVar3 = F_004351d0();
      if (bVar3 == 0) {
        *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 3;
        sVar1 = *(short *)((int)this + 0xc);
        uVar13 = 0;
        *(short *)((int)this + 0xc) = sVar1 + 1;
        uVar11 = 0;
        pvVar6 = (undefined *)((int)this + sVar1 * 8 + 0x10);
        uVar10 = 0x34;
        pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        uVar5 = F_0043bd00(pvVar4,uVar10,uVar11,uVar13);
        F_005a2710(pvVar6,6);
        *(uint *)((int)pvVar6 + 4) = uVar5;
      }
    }
    else if ((param_1[3] & 8U) != 0) {
      *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 1;
      sVar1 = *(short *)((int)this + 0xc);
      uVar13 = 0;
      *(short *)((int)this + 0xc) = sVar1 + 1;
      uVar11 = 0;
      pvVar6 = (undefined *)((int)this + sVar1 * 8 + 0x10);
      uVar10 = 0x32;
      pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      uVar5 = F_0043bd00(pvVar4,uVar10,uVar11,uVar13);
      F_005a2710(pvVar6,6);
      *(uint *)((int)pvVar6 + 4) = uVar5;
      iVar12 = REFG(int, 0x1379694);
      bVar3 = F_004358c0(param_1);
      if (((bVar3 == 0) && (iVar12 != 0)) &&
         ((bVar3 = F_00ae09c0(&REFG(undefined, 0x1336e40),*(undefined4 *)(iVar12 + 0x74)), bVar3 != 0 ||
          (REFG(undefined1, 0x1338ad4) < 2)))) {
        *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 5;
        sVar1 = *(short *)((int)this + 0xc);
        uVar13 = 0;
        *(short *)((int)this + 0xc) = sVar1 + 1;
        uVar11 = 0;
        pvVar6 = (undefined *)((int)this + sVar1 * 8 + 0x10);
        uVar10 = 0x36;
        pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        uVar5 = F_0043bd00(pvVar4,uVar10,uVar11,uVar13);
        F_005a2710(pvVar6,6);
        *(uint *)((int)pvVar6 + 4) = uVar5;
      }
      if ((~(uint)param_2 & 1) != 0) {
        uVar10 = 2;
        uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
        this_00 = (int *)F_00435440(uVar5,uVar10);
        uVar8 = 0;
        uVar5 = ((code *)*(gen_code32 *)(*this_00 + 0x18))(this_00);
        if (uVar5 != 0) {
          param_2 = (undefined *)((int)this + 0x278);
          do {
            piVar7 = (int *)F_00439130(this_00,uVar8);
            if (((piVar7 != (int *)0x0) && (*piVar7 != 0 || piVar7[1] != 0)) &&
               ((piVar7[4] & 0x700U) < 0x201)) {
              *((char *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = (char)uVar8 + '\t';
              piVar2 = *(int * PTR32 *)((int)this + 4);
              uVar5 = F_00439390(this_00,*piVar7,piVar7[1]);
              iVar12 = uVar8 + 1;
              uVar10 = 0xae;
              pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2)));
              uVar5 = F_00461060(pvVar6,uVar10,iVar12,uVar5);
              F_0042e430(param_2,uVar5);
              pvVar6 = ((undefined *)GEN_TOP(((int)this + *(short *)((int)this + 0xc) * 8 + 0x10)));
              *(short *)((int)this + 0xc) = *(short *)((int)this + 0xc) + 1;
              uVar5 = F_0042a990(param_2);
              F_005a2710(pvVar6,6);
              *(uint *)((int)pvVar6 + 4) = uVar5;
            }
            param_2 = (undefined *)((int)param_2 + 0x54);
            uVar8 = uVar8 + 1;
            uVar5 = ((code *)*(gen_code32 *)(*this_00 + 0x18))(this_00);
          } while (uVar8 < uVar5);
        }
      }
    }
  }
  uVar10 = 5;
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
  pvVar6 = (undefined *)F_00435440(uVar5,uVar10);
  if ((pvVar6 != (undefined *)0x0) && (bVar3 = F_00437cb0(pvVar6,param_1 + 7,1), bVar3 == 0)) {
    pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4))));
    uVar9 = F_0043f9f0(pvVar6);
    if ((*param_1 != (int)uVar9) || (param_1[1] != (int)(uVar9 >> 0x20))) {
      *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 8;
      sVar1 = *(short *)((int)this + 0xc);
      uVar13 = 0;
      *(short *)((int)this + 0xc) = sVar1 + 1;
      uVar11 = 0;
      pvVar6 = (undefined *)((int)this + sVar1 * 8 + 0x10);
      uVar10 = 0x3d;
      pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      uVar5 = F_0043bd00(pvVar4,uVar10,uVar11,uVar13);
      F_005a2710(pvVar6,6);
      *(uint *)((int)pvVar6 + 4) = uVar5;
    }
  }
  if ((char)param_1[0xf] == '\0') {
    pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4))));
    uVar9 = F_0043f9f0(pvVar6);
    if (((*param_1 != (int)uVar9) || (param_1[1] != (int)(uVar9 >> 0x20))) &&
       ((param_1[3] & 8U) != 0)) {
      F_00769940(this);
    }
  }
  else {
    *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 0x19;
    sVar1 = *(short *)((int)this + 0xc);
    uVar13 = 0;
    *(short *)((int)this + 0xc) = sVar1 + 1;
    uVar11 = 0;
    pvVar6 = (undefined *)((int)this + sVar1 * 8 + 0x10);
    uVar10 = 0xaf7;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar5 = F_0043bd00(pvVar4,uVar10,uVar11,uVar13);
    F_005a2710(pvVar6,6);
    *(uint *)((int)pvVar6 + 4) = uVar5;
  }
  *(int *)((int)this + 0x268) = *param_1;
  *(int *)((int)this + 0x26c) = param_1[1];
  F_0042e430((undefined *)((int)this + 0x210),param_1 + 7);
  return (int)*(short *)((int)this + 0xc);
}

/* ref: FUN_00769fd0 */
uint F_00769fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x769fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  short sVar1;
  byte bVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 1;
  pvVar5 = ((undefined *)GEN_TOP(((int)this + *(short *)((int)this + 0xc) * 8 + 0x10)));
  uVar8 = 0;
  *(short *)((int)this + 0xc) = *(short *)((int)this + 0xc) + 1;
  uVar7 = 0;
  uVar6 = 0x32;
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_0043bd00(pvVar3,uVar6,uVar7,uVar8);
  F_005a2710(pvVar5,6);
  *(uint *)((int)pvVar5 + 4) = uVar4;
  if (REFG(undefined1, 0x1338ad4) < 2) {
    *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 5;
    sVar1 = *(short *)((int)this + 0xc);
    uVar7 = 0;
    *(short *)((int)this + 0xc) = sVar1 + 1;
    uVar6 = 0;
    pvVar5 = (undefined *)((int)this + sVar1 * 8 + 0x10);
    uVar8 = 0x36;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))
                               (*(int * PTR32 *)((int)this + 4),0x36,0,0)));
  }
  else {
    if (REFG(int, 0x1379694) == 0) goto LAB_0076a142;
    bVar2 = F_00ae09c0(&REFG(undefined, 0x1336e40),*(undefined4 *)(REFG(int, 0x1379694) + 0x74));
    if (bVar2 == 0) goto LAB_0076a142;
    bVar2 = F_004351d0();
    if (bVar2 != 0) goto LAB_0076a142;
    uVar4 = F_0042a990(param_1);
    bVar2 = F_00ae0950(&REFG(undefined, 0x1336e40),uVar4);
    uVar7 = 0;
    uVar6 = 0;
    if (bVar2 == 0) {
      *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 5;
      pvVar5 = ((undefined *)GEN_TOP(((int)this + *(short *)((int)this + 0xc) * 8 + 0x10)));
      *(short *)((int)this + 0xc) = *(short *)((int)this + 0xc) + 1;
      uVar8 = 0x36;
      pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    }
    else {
      *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 6;
      pvVar5 = ((undefined *)GEN_TOP(((int)this + *(short *)((int)this + 0xc) * 8 + 0x10)));
      *(short *)((int)this + 0xc) = *(short *)((int)this + 0xc) + 1;
      uVar8 = 0x37;
      pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      uVar4 = F_0043bd00(pvVar3,uVar8,uVar6,uVar7);
      F_005a2710(pvVar5,6);
      *(uint *)((int)pvVar5 + 4) = uVar4;
      *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 7;
      sVar1 = *(short *)((int)this + 0xc);
      uVar7 = 0;
      *(short *)((int)this + 0xc) = sVar1 + 1;
      uVar6 = 0;
      pvVar5 = (undefined *)((int)this + sVar1 * 8 + 0x10);
      uVar8 = 0x38;
      pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))
                                 (*(int * PTR32 *)((int)this + 4),0x38,0,0)));
    }
  }
  uVar4 = F_0043bd00(pvVar3,uVar8,uVar6,uVar7);
  F_005a2710(pvVar5,6);
  *(uint *)((int)pvVar5 + 4) = uVar4;
LAB_0076a142: ;
  uVar6 = 5;
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
  pvVar5 = (undefined *)F_00435440(uVar4,uVar6);
  if (pvVar5 != (undefined *)0x0) {
    uVar6 = 1;
    uVar4 = F_0042a990(param_1);
    bVar2 = F_00437cb0(pvVar5,uVar4,uVar6);
    if (bVar2 == 0) {
      *((undefined1 *)GEN_TOP((*(short *)((int)this + 0xc) + 0x150 + (int)this))) = 8;
      sVar1 = *(short *)((int)this + 0xc);
      uVar8 = 0;
      *(short *)((int)this + 0xc) = sVar1 + 1;
      uVar7 = 0;
      pvVar5 = (undefined *)((int)this + sVar1 * 8 + 0x10);
      uVar6 = 0x3d;
      pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      uVar4 = F_0043bd00(pvVar3,uVar6,uVar7,uVar8);
      F_005a2710(pvVar5,6);
      *(uint *)((int)pvVar5 + 4) = uVar4;
    }
  }
  F_0042ccf0((undefined *)((int)this + 0x210),param_1);
  return (int)*(short *)((int)this + 0xc);
}

/* ref: FUN_0076a1d0 */
uint F_0076a1d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76a1d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x518) = param_1;
  *(undefined4 *)((int)this + 0x51c) = param_2;
  return param_1;
}

/* ref: FUN_0076a1f0 */
byte F_0076a1f0(unsigned int gen_a0)
{
  GEN_ENTER(0x76a1f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (REFG(int, 0x1488344) != 0) {
    uVar1 = F_006b8c00();
    uVar1 = F_006c5190(uVar1);
    if ((char)uVar1 != '\0') {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_0076a220 */
byte F_0076a220(unsigned int gen_a0)
{
  GEN_ENTER(0x76a220u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (REFG(int, 0x1488344) != 0) {
    uVar2 = F_006b8c00();
    uVar2 = F_006c5190(uVar2);
    if ((char)uVar2 != '\0') {
      return 0;
    }
  }
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  if ((((uVar2 == 1) && (bVar1 = F_00a9f620(param_1), bVar1 == 0)) &&
      (bVar1 = F_00a620a0(), bVar1 != 0)) && (uVar2 = F_00a62220(param_1), (char)uVar2 != '\0'))
  {
    return 0;
  }
  return 1;
}

/* ref: Client::UI2::Agent::AgentContext::vf5 */
unsigned int F_0076a2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76a2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x518);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,*(undefined4 *)(this + 0x51c));
    if ((char)uVar2 == '\0') {
      ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
      *(undefined4 *)(this + 0x518) = 0;
    }
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentCursor::vf1 */
uint F_0076a2e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x76a2e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 0;
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentCursor::vf3 */
unsigned int F_0076a300(unsigned int gen_a0)
{
  GEN_ENTER(0x76a300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined2 *)(this + 0x1d) = 0;
  return 0;
}

/* ref: FUN_0076a330 */
byte F_0076a330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76a330u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  
  pvVar1 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),param_1);
  if (pvVar1 != (undefined *)0x0) {
    pvVar1 = (undefined *)F_00a37da0(pvVar1,param_2);
    if (pvVar1 != (undefined *)0x0) {
      if (*(char *)((int)pvVar1 + 6) == '\0') {
        uVar2 = *(uint *)((int)pvVar1 + 8);
        if ((*(byte *)((int)pvVar1 + 0x14) & 1) != 0) {
          uVar2 = uVar2 + 1000000;
        }
      }
      else {
        pvVar1 = (undefined *)F_00a3a860(pvVar1);
        uVar2 = F_0046e5e0(pvVar1);
      }
      uVar2 = F_00ab24a0(uVar2);
      if ((uVar2 != 0) && ((*(char *)(uVar2 + 0xbf) != '\0' || (*(char *)(uVar2 + 0xbe) != '\0'))))
      {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_0076a3b0 */
uint F_0076a3b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x76a3b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((param_1 + 0x1b) * 0x10 + (int)this)));
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1[2] = param_4;
  *(undefined1 *)(puVar1 + 3) = (undefined1)param_5;
  return (uint)puVar1;
}

/* ref: FUN_0076a3e0 */
uint F_0076a3e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x76a3e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *((undefined1 *)GEN_TOP(((int)this + *(int *)((int)this + 0x10) + 0x194))) = (undefined1)param_1;
  uVar5 = 0;
  uVar4 = 0;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = F_0043bd00(pvVar2,param_2,uVar4,uVar5);
  pvVar2 = ((undefined *)GEN_TOP(((int)this + *(int *)((int)this + 0x10) * 8 + 0x14)));
  F_005a2710(pvVar2,6);
  *(uint *)((int)pvVar2 + 4) = uVar3;
  iVar1 = *(int *)((int)this + 0x10);
  if (0 < iVar1) {
    uVar3 = 1 << ((char)iVar1 - 1U & 0x1f);
    if ((char)param_3 != '\0') {
      *(uint *)((int)this + 0x1ac) = *(uint *)((int)this + 0x1ac) | uVar3;
      *(uint *)((int)this + 0x10) = iVar1 + 1U;
      return iVar1 + 1U;
    }
    *(uint *)((int)this + 0x1ac) = *(uint *)((int)this + 0x1ac) & ~uVar3;
  }
  *(uint *)((int)this + 0x10) = iVar1 + 1U;
  return iVar1 + 1U;
}

/* ref: FUN_0076a460 */
uint F_0076a460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76a460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ushort uVar1;
  uint uVar2;
  undefined * pvVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0xa4) != '\0') {
    if ((REFG(undefined1, 0x14b4ec1) & 0x20) != 0) {
      pvVar3 = *(undefined * PTR32 *)((int)this + 0x250);
      if ((*(char *)((int)pvVar3 + 6) == '\0') || (uVar2 = F_00a3a860(pvVar3), uVar2 == 0)) {
        uVar1 = *(ushort *)((int)pvVar3 + 0x10);
      }
      else {
        pvVar3 = (undefined *)F_00a3a860(pvVar3);
        uVar1 = F_0071d210(pvVar3);
      }
      uVar2 = F_0076a3e0(this,0x11,0x1153,(uint)(uVar1 < 10000));
      return uVar2;
    }
    return param_1;
  }
  return param_1;
}

/* ref: FUN_0076a4e0 */
unsigned int F_0076a4e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76a4e0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  byte bVar1;
  ushort uVar2;
  
  if ((*(undefined * PTR32 *)&gen_args[2]) == (undefined *)0x0) {
    return 0;
  }
  if ((*(int *)&gen_args[1]) == 0) {
    return 0;
  }
  if (*(char *)((*(int *)&gen_args[1]) + 0xa5) == '\0') {
    return 0;
  }
  if ((REFG(undefined1, 0x14b4ec1) & 8) == 0) {
    return 0;
  }
  bVar1 = F_00a3bef0((*(undefined * PTR32 *)&gen_args[2]));
  if (bVar1 < 5) {
    uVar2 = F_0071d2c0((*(undefined * PTR32 *)&gen_args[2]),0);
    (*(undefined * PTR32 *)&gen_args[2]) = ((undefined *)GEN_TOP(((uint)(*(undefined * PTR32 *)&gen_args[2]) & 0xffffff00)));
    if (uVar2 != 1) goto LAB_0076a529;
  }
  (*(undefined * PTR32 *)&gen_args[2]) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)&gen_args[2]), 1, 3),1)));
LAB_0076a529: ;
  F_0076a3e0((*(undefined * PTR32 *)&gen_args[0]),0x12,0x1154,(*(undefined * PTR32 *)&gen_args[2]));
  return 0;
}

/* ref: FUN_0076a550 */
uint F_0076a550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76a550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1;
  if ((param_1 != 0) && ((REFG(undefined1, 0x14b4ec1) & 0x40) != 0)) {
    if (*(char *)(param_1 + 0xba) != '\0') {
      uVar1 = F_0076a3e0(this,0x13,0x1257,0);
      return uVar1;
    }
    if (*(char *)(param_1 + 0xa0) == '\x0f') {
      uVar1 = F_0076a3e0(this,0x14,0x1257,0);
    }
  }
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentInventoryContext::vf5 */
uint F_0076a5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76a5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined * this_00;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar1 != '\0') {
    this_00 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),*(undefined4 *)(this + 0x244));
    uVar1 = 0;
    if (this_00 != (undefined *)0x0) {
      uVar1 = F_00a37da0(this_00,*(undefined4 *)(this + 0x248));
      if (((uVar1 != 0) && (*(char *)(uVar1 + 6) == '\0')) && (*(int *)(uVar1 + 8) == 0)) {
        uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
      }
    }
  }
  return uVar1;
}

/* ref: FUN_0076a5f0 */
unsigned int F_0076a5f0(unsigned int gen_a0)
{
  GEN_ENTER(0x76a5f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0xc) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0xc),0);
    *(undefined4 *)((int)this + 0xc) = 0;
    F_00a3d7c0(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)this + 0x254),(uint)*(ushort *)((int)this + 600)
                );
  }
  return 0;
}

/* ref: FUN_0076a650 */
byte F_0076a650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x76a650u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  char * pcVar1;
  int iVar2;
  
  iVar2 = 0;
  pcVar1 = (char *)((int)this + 0x1bc);
  while ((*(int *)(pcVar1 + -8) == 0 || (*pcVar1 == '\0'))) {
    iVar2 = iVar2 + 1;
    pcVar1 = pcVar1 + 0x10;
    if (8 < iVar2) {
      return 0;
    }
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(pcVar1 + -8) + 4))))
            (*(int * PTR32 *)(pcVar1 + -8),param_2,param_1,param_3,*(undefined4 *)(pcVar1 + -4));
  return 1;
}

/* ref: Client::UI2::Agent::AgentCloseMessage::vf1 */
uint F_0076a6a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x76a6a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 uVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  if ((param_2 != (byte *)0x0) && (param_3 == 1)) {
    if ((*param_2 & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 4);
    }
    uVar2 = 0;
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 0: ;
      F_004246b0(REFG(void * PTR32, 0x137104c),0);
    case 0xfffffffe: ;
    case 0xffffffff: ;
    case 1: ;
      uVar2 = 1;
    default: ;
      *(undefined4 *)(this + 8) = 0;
    }
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = uVar2;
  return (uint)param_1;
}

/* ref: FUN_0076a760 */
uint F_0076a760(unsigned int gen_a0)
{
  GEN_ENTER(0x76a760u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    uVar2 = 0;
    do {
      uVar1 = F_00ac3430(&REFG(undefined, 0x14bcf40),uVar2);
      if (param_1 == uVar1) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 10);
  }
  return 0xffffffff;
}

/* ref: FUN_0076a7a0 */
uint F_0076a7a0(unsigned int gen_a0)
{
  GEN_ENTER(0x76a7a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    return 1;
  default: ;
    return 0;
  case 2: ;
    return 9;
  case 3: ;
    return 5;
  case 4: ;
    return 6;
  case 5: ;
    return 7;
  case 6: ;
    return 8;
  case 7: ;
    return 0xb;
  case 8: ;
    return 0xd;
  }
}

/* ref: FUN_0076a830 */
uint F_0076a830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76a830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x14);
  if (uVar1 == param_1) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  }
  return uVar1;
}

/* ref: FUN_0076a850 */
byte F_0076a850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76a850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int * piVar2;
  
  piVar2 = (int *)(param_2 * 0xa28 + 0x7c + (int)this);
  iVar1 = 0;
  do {
    if (*piVar2 == param_1) {
      return 1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 0x1a;
  } while (iVar1 < 0x19);
  return 0;
}

/* ref: FUN_0076a880 */
byte F_0076a880(unsigned int gen_a0)
{
  GEN_ENTER(0x76a880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x68))(piVar1,*(undefined4 *)((int)this + 8));
  if ((char)uVar2 != '\0') {
    return 1;
  }
  *(undefined1 *)((int)this + 0x8e54) = 1;
  return 0;
}

/* ref: FUN_0076a8b0 */
uint F_0076a8b0(unsigned int gen_a0)
{
  GEN_ENTER(0x76a8b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  byte bVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined * pvVar8;
  undefined * this_00;
  uint uVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  char * local_c;
  
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x24))(piVar4,0x26);
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar6 = ((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4,0x23);
  uVar7 = uVar6;
  if ((uVar5 != 0) && (uVar6 != 0)) {
    if (**(int * PTR32 *)(uVar5 + 0x20) != *(int *)((int)this + 0x10)) {
      **(int * PTR32 *)(uVar5 + 0x20) = *(int *)((int)this + 0x10);
      *(undefined1 *)(uVar5 + 0x1d) = 1;
    }
    uVar7 = F_00434e60(*(undefined4 *)((int)this + 0x10));
    pvVar8 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),uVar7);
    local_c = ((char *)GEN_TOP((*(int *)((int)this + 0x10) * 0xa28 + 0x89 + (int)this)));
    if (pvVar8 != (undefined *)0x0) {
      iVar2 = *(int *)((int)pvVar8 + 0xc);
      local_10 = 0;
      if (0 < iVar2) {
        local_1c = 0x40;
        do {
          if (0x18 < local_10) break;
          iVar1 = (*(int *)((int)this + 0x10) * 0x19 + local_10) * 8;
          uVar7 = 0;
          local_18 = 0;
          bVar10 = false;
          local_14 = 0;
          this_00 = (undefined *)F_00a37da0(pvVar8,local_10);
          if ((this_00 != (undefined *)0x0) &&
             ((*(char *)((int)this_00 + 6) != '\0' || (*(int *)((int)this_00 + 8) != 0)))) {
            uVar7 = F_00a37c50(this_00);
            uVar7 = (uint)(uVar7 != 0);
            F_0046e5e0(this_00);
            local_18 = F_00760640((uint)(byte)local_c[-1],this_00,*(undefined4 *)(local_c + -5));
            bVar10 = *local_c != '\0';
            if (bVar10) {
              bVar3 = F_00760e50(local_c + -0x65,this_00);
              local_14 = F_00760700((uint)bVar3);
            }
          }
          uVar9 = (uint)bVar10 | local_14 * 2;
          if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 8 + local_1c))) != uVar9) {
            *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 8 + local_1c))) = uVar9;
            *(undefined1 *)(uVar5 + 0x1d) = 1;
          }
          if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + -8 + local_1c))) != *(int *)(local_c + -9)) {
            *((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + -8 + local_1c))) = *(int *)(local_c + -9);
            *(undefined1 *)(uVar5 + 0x1d) = 1;
          }
          if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + local_1c))) != (uint)(byte)local_c[-1]) {
            *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + local_1c))) = (uint)(byte)local_c[-1];
            *(undefined1 *)(uVar5 + 0x1d) = 1;
          }
          uVar7 = local_18 & 0xff |
                  ((uint)CONCAT11(*(char *)((int)this + iVar1 + 0x8431) != '\0',
                                  *(undefined1 *)((int)this + iVar1 + 0x8430)) << 8 | uVar7) << 8;
          if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 4 + local_1c))) != uVar7) {
            *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 4 + local_1c))) = uVar7;
            *(undefined1 *)(uVar5 + 0x1d) = 1;
          }
          uVar7 = F_0042a990(local_c + -0x61);
          if (uVar7 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + local_10 * 4)))) {
            *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + local_10 * 4))) = uVar7;
            *(undefined1 *)(uVar6 + 0x1d) = 1;
          }
          local_c = local_c + 0x68;
          local_1c = local_1c + 0x14;
          local_10 = local_10 + 1;
        } while (local_10 < iVar2);
      }
    }
    uVar11 = *(undefined4 *)(&REFG(undefined, 0x10bfc6c) + *(int *)((int)this + 0x10) * 4);
    uVar13 = 0;
    uVar12 = 0;
    pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar7 = F_0043bd00(pvVar8,uVar11,uVar12,uVar13);
    if (uVar7 != *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 100)))) {
      *(undefined1 *)(uVar6 + 0x1d) = 1;
    }
    *((uint *)GEN_TOP((*(int *)(uVar6 + 0x20) + 100))) = uVar7;
  }
  return uVar7;
}

/* ref: FUN_0076ab00 */
unsigned int F_0076ab00(unsigned int gen_a0)
{
  GEN_ENTER(0x76ab00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  int iVar6;
  int local_8;
  
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,0x26);
  if (uVar3 != 0) {
    local_8 = 0;
    do {
      uVar4 = F_00434e60(local_8);
      this_00 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),uVar4);
      if (this_00 != (undefined *)0x0) {
        iVar1 = *(int *)((int)this_00 + 0xc);
        iVar5 = 0;
        iVar6 = 0;
        if (0 < iVar1) {
          do {
            uVar4 = F_00a37da0(this_00,iVar6);
            if ((uVar4 != 0) && ((*(char *)(uVar4 + 6) != '\0' || (*(int *)(uVar4 + 8) != 0)))) {
              iVar5 = iVar5 + 1;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar1);
        }
        if (*((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 4 + local_8 * 4))) != iVar5) {
          *((int *)GEN_TOP((*(int *)(uVar3 + 0x20) + 4 + local_8 * 4))) = iVar5;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < 0xd);
  }
  return 0;
}

/* ref: FUN_0076abb0 */
uint F_0076abb0(void)
{
  GEN_ENTER(0x76abb0u, 0u, 0u, 0u, 0u);
  int iVar1;
  uint uVar2;
  undefined * this;
  int iVar3;
  uint local_8;
  
  local_8 = 0;
  do {
    uVar2 = F_00434e60(local_8);
    this = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),uVar2);
    if (this != (undefined *)0x0) {
      iVar1 = *(int *)((int)this + 0xc);
      iVar3 = 0;
      if (0 < iVar1) {
        do {
          uVar2 = F_00a37da0(this,iVar3);
          if ((uVar2 != 0) && ((*(char *)(uVar2 + 6) != '\0' || (*(int *)(uVar2 + 8) != 0)))) {
            return local_8;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar1);
      }
    }
    local_8 = local_8 + 1;
    if (0xc < (int)local_8) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_0076ac20 */
byte F_0076ac20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76ac20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((*(byte *)(param_1 + 8) & 0xf) == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    F_0076a8b0(this);
    return 0;
  }
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0xc);
  F_0076a8b0(this);
  return 0;
}

/* ref: FUN_0076ac50 */
byte F_0076ac50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76ac50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  undefined * this_00;
  undefined4 uVar3;
  
  if ((*(byte *)(param_1 + 8) & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0xc);
  }
  uVar1 = F_00434e60(*(undefined4 *)((int)this + 0x10));
  puVar2 = (undefined4 *)F_00a37180(&REFG(undefined, 0x14a4230));
  if (puVar2 != (undefined4 *)0x0) {
    F_00a47f70(&REFG(undefined, 0x14a4230),uVar1,uVar3,*puVar2,(uint)*(ushort *)(puVar2 + 1),1);
    F_0076a8b0(this);
    return 0;
  }
  uVar3 = 0x2eb;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4))));
  F_0046a630(this_00,uVar3);
  F_0076a8b0(this);
  return 0;
}

/* ref: FUN_0076ace0 */
uint F_0076ace0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x76ace0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined1 uVar3;
  
  if (*param_1 != param_2) {
    *param_1 = 0;
    *(undefined2 *)(param_1 + 1) = 7;
  }
  uVar2 = F_00ab24a0(param_2);
  if (uVar2 == 0) {
    return 0;
  }
  uVar2 = F_00a35d00(param_2);
  if (uVar2 == 0) {
    return 0;
  }
  if (uVar2 == 1) {
    uVar3 = 7;
    uVar2 = 0;
  }
  else {
    uVar2 = uVar2 - 2;
    if (uVar2 == 0) {
      uVar3 = 9;
    }
    else {
      uVar3 = 8;
    }
  }
  uVar2 = uVar2 & 0xffffff00;
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x14))) {
  case 3: ;
    bVar1 = F_00a3c930(param_5,0);
    *(undefined1 *)(param_1 + 1) = uVar3;
    *param_1 = param_2;
    *(bool *)((int)param_1 + 5) = bVar1 == 0;
    return CONCAT31(extraout_var,bVar1 == 0);
  case 4: ;
  case 5: ;
    bVar1 = F_00a3c8c0(param_5,0);
    *(undefined1 *)(param_1 + 1) = uVar3;
    *param_1 = param_2;
    *(bool *)((int)param_1 + 5) = bVar1 == 0;
    return CONCAT31(extraout_var_00,bVar1 == 0);
  default: ;
    goto switchD_0076ad41_caseD_6;
  case 7: ;
    uVar2 = F_00a3e8f0(&REFG(undefined, 0x14a4230),param_3,param_4);
    break;
  case 9: ;
    uVar2 = F_00a3eaa0(&REFG(undefined, 0x14a4230),param_3,param_4);
  }
  uVar2 = CONCAT31((int3)(uVar2 >> 8),uVar2 != 0);
switchD_0076ad41_caseD_6: ;
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = uVar3;
  *(char *)((int)param_1 + 5) = (char)uVar2;
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentChatLog::vf3 */
unsigned int F_0076adf0(unsigned int gen_a0)
{
  GEN_ENTER(0x76adf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  if (0 < *(int *)(this + 0x70)) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 0x70),0);
    *(undefined4 *)(this + 0x70) = 0;
  }
  return 0;
}

/* ref: FUN_0076ae50 */
uint F_0076ae50(unsigned int gen_a0)
{
  GEN_ENTER(0x76ae50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  byte bVar3;
  undefined * this_00;
  uint uVar4;
  uint uVar5;
  undefined * pvVar6;
  undefined4 * puVar7;
  undefined4 uVar8;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x20))))(*(int * PTR32 *)((int)this + 4));
  uVar4 = F_0043d880(uVar4);
  if ((int)uVar4 < 6) {
    switch((unsigned int)(uintptr_t)(uVar4)) {
    case 0: ;
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x20))))(*(int * PTR32 *)((int)this + 4));
      uVar4 = F_0043d8f0(uVar4);
      F_0042ccf0((undefined *)((int)this + 0x1c),uVar4);
      uVar5 = (uint)(**(char * PTR32 *)((int)this + 0x1c) != '\0');
      uVar4 = F_0042a990((int)this + 0x1c);
      uVar4 = F_00461270(this_00,0x29a,uVar4,uVar5);
      return uVar4;
    case 1: ;
      uVar4 = F_0043bd00(this_00,0x28d,0,0);
      return uVar4;
    case 2: ;
      uVar4 = F_0043bd00(this_00,0x28e,0,0);
      return uVar4;
    case 3: ;
      uVar4 = F_0043bd00(this_00,0x287,0,0);
      return uVar4;
    case 4: ;
      uVar4 = F_0043bd00(this_00,0x285,0,0);
      return uVar4;
    case 5: ;
      uVar4 = F_0043bd00(this_00,0x286,0,0);
      return uVar4;
    }
  }
  else {
    iVar1 = uVar4 - 6;
    bVar3 = F_004351d0();
    piVar2 = *(int * PTR32 *)((int)this + 4);
    if (bVar3 == 0) {
      uVar8 = 2;
      uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2);
      pvVar6 = (undefined *)F_00435440(uVar5,uVar8);
      if ((pvVar6 != (undefined *)0x0) &&
         (puVar7 = (undefined4 *)F_00439130(pvVar6,iVar1), puVar7 != (undefined4 *)0x0)) {
        uVar5 = F_00439390(pvVar6,*puVar7,puVar7[1]);
        uVar4 = F_00462030(this_00,0x28f,uVar4 - 5,uVar5);
        return uVar4;
      }
    }
    else {
      uVar8 = 0xf;
      uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2);
      pvVar6 = (undefined *)F_00435440(uVar5,uVar8);
      if ((pvVar6 != (undefined *)0x0) && (bVar3 = F_0043a050(pvVar6,iVar1), bVar3 != 0)) {
        uVar5 = F_0043a0b0(pvVar6,iVar1);
        uVar4 = F_00462030(this_00,0x28f,uVar4 - 5,uVar5);
        return uVar4;
      }
    }
  }
  return 0;
}

/* ref: FUN_0076afe0 */
unsigned int F_0076afe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76afe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  *(uint *)((int)this + 0x338) = uVar2;
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_1);
  return 0;
}

/* ref: FUN_0076b020 */
uint F_0076b020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76b020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  int iVar4;
  uint * this_00;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  (*(uint *)(gen_frame + 0xb8)) = uVar1;
  if (0 < *(int *)((int)this + 0x70)) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x70),0);
    *(undefined4 *)((int)this + 0x70) = 0;
  }
  if (*(int *)((int)this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x68))(piVar2,*(undefined4 *)((int)this + 8));
    if ((char)uVar1 != '\0') {
      puVar3 = ((undefined4 *)(gen_frame + 0x0));
      iVar4 = 0x16;
      do {
        *puVar3 = 0;
        puVar3 = puVar3 + 2;
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
      F_005a2710(((undefined4 *)(gen_frame + 0x0)),4);
      ((undefined4 *)(gen_frame + 0x0))[1] = 5;
      uVar1 = F_0042a990(param_1);
      F_005a2710(((undefined1 *)(gen_frame + 0x10)),6);
      (*(uint *)(gen_frame + 0x14)) = uVar1;
      uVar1 = F_0042a990(param_2);
      F_005a2710(((undefined1 *)(gen_frame + 0x18)),6);
      (*(uint *)(gen_frame + 0x1c)) = uVar1;
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)((int)this + 8),0x17,((undefined4 *)(gen_frame + 0x0)));
      this_00 = &(*(uint *)(gen_frame + 0xb8));
      iVar4 = 0x16;
      do {
        this_00 = this_00 + -2;
        uVar1 = F_005a2670(this_00);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return uVar1;
}

/* ref: FUN_0076b150 */
uint F_0076b150(unsigned int gen_a0)
{
  GEN_ENTER(0x76b150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  int iVar4;
  uint * this_00;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  (*(uint *)(gen_frame + 0xb8)) = uVar1;
  if (*(int *)((int)this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x68))(piVar2,*(undefined4 *)((int)this + 8));
    if ((char)uVar1 != '\0') {
      puVar3 = ((undefined4 *)(gen_frame + 0x0));
      iVar4 = 0x16;
      do {
        *puVar3 = 0;
        puVar3 = puVar3 + 2;
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
      F_005a2710(((undefined4 *)(gen_frame + 0x0)),4);
      ((undefined4 *)(gen_frame + 0x0))[1] = 5;
      F_005a2710(((undefined1 *)(gen_frame + 0x10)),1);
      F_005a2710(((undefined1 *)(gen_frame + 0x18)),1);
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)((int)this + 8),0x17,((undefined4 *)(gen_frame + 0x0)));
      this_00 = &(*(uint *)(gen_frame + 0xb8));
      iVar4 = 0x16;
      do {
        this_00 = this_00 + -2;
        uVar1 = F_005a2670(this_00);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return uVar1;
}

/* ref: FUN_0076b230 */
uint F_0076b230(unsigned int gen_a0)
{
  GEN_ENTER(0x76b230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  uint uVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  uint * this_00;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  (*(uint *)(gen_frame + 0xb8)) = uVar1;
  if (*(int *)((int)this + 8) != 0) {
    puVar2 = ((undefined4 *)(gen_frame + 0x0));
    iVar4 = 0x16;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 2;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    F_005a2710(((undefined4 *)(gen_frame + 0x0)),4);
    ((undefined4 *)(gen_frame + 0x0))[1] = 4;
    F_005a2710(((undefined1 *)(gen_frame + 0xa8)),4);
    (*(undefined4 *)(gen_frame + 0xac)) = 2;
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,*(undefined4 *)((int)this + 8),0x17,((undefined4 *)(gen_frame + 0x0)));
    F_005a2710(((undefined1 *)(gen_frame + 0xa8)),4);
    (*(undefined4 *)(gen_frame + 0xac)) = 3;
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,*(undefined4 *)((int)this + 8),0x17,((undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0xb8));
    iVar4 = 0x16;
    do {
      this_00 = this_00 + -2;
      uVar1 = F_005a2670(this_00);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return uVar1;
}

/* ref: FUN_0076b310 */
uint F_0076b310(unsigned int gen_a0)
{
  GEN_ENTER(0x76b310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  undefined * this_01;
  undefined3 extraout_var = 0;
  uint uVar3;
  int * piVar4;
  int * piVar5;
  undefined * this_02;
  uint uVar6;
  uint * puVar7;
  undefined4 uVar8;
  undefined * local_8;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  bVar1 = F_004351d0();
  piVar4 = *(int * PTR32 *)((int)this + 4);
  if (bVar1 == 0) {
    uVar8 = 2;
    uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0x44))(piVar4);
    piVar4 = (int *)F_00435440(uVar2,uVar8);
    uVar2 = 0;
    if (piVar4 != (int *)0x0) {
      uVar6 = 0;
      uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4);
      uVar2 = 0;
      if (uVar3 != 0) {
        local_8 = (undefined *)((int)this + 0x78);
        puVar7 = (uint *)((int)this + 0x318);
        do {
          piVar5 = (int *)F_00439130(piVar4,uVar6);
          if (((piVar5 != (int *)0x0) && (*piVar5 != 0 || piVar5[1] != 0)) &&
             ((piVar5[4] & 0x700U) != 0x400)) {
            *puVar7 = uVar6;
            uVar2 = F_00439390(piVar4,*piVar5,piVar5[1]);
            uVar2 = F_00462030(this_00,0x28f,uVar6 + 1,uVar2);
            F_0042e430(local_8,uVar2);
            puVar7 = puVar7 + 1;
            local_8 = (undefined *)((int)local_8 + 0x54);
          }
          uVar6 = uVar6 + 1;
          uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4);
        } while (uVar6 < uVar2);
      }
    }
  }
  else {
    uVar8 = 0xf;
    uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0x44))(piVar4);
    this_01 = (undefined *)F_00435440(uVar2,uVar8);
    uVar2 = 0;
    if (this_01 != (undefined *)0x0) {
      uVar2 = 0;
      this_02 = (undefined *)((int)this + 0x78);
      puVar7 = (uint *)((int)this + 0x318);
      do {
        bVar1 = F_0043a050(this_01,uVar2);
        uVar3 = CONCAT31(extraout_var,bVar1);
        if (bVar1 != 0) {
          *puVar7 = uVar2;
          uVar3 = F_0043a0b0(this_01,uVar2);
          uVar3 = F_00462030(this_00,0x28f,uVar2 + 1,uVar3);
          uVar3 = F_0042e430(this_02,uVar3);
          puVar7 = puVar7 + 1;
          this_02 = (undefined *)((int)this_02 + 0x54);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < 8);
      return uVar3;
    }
  }
  return uVar2;
}

/* ref: FUN_0076b450 */
unsigned int F_0076b450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76b450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined4 uVar5;
  undefined * PTR32 * ppuVar6;
  
  if (param_1 < 8) {
    bVar2 = F_004351d0();
    piVar1 = *(int * PTR32 *)((int)this + 4);
    if (bVar2 == 0) {
      uVar5 = 2;
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
      pvVar4 = (undefined *)F_00435440(uVar3,uVar5);
      if (pvVar4 == (undefined *)0x0) {
        return 0;
      }
      uVar3 = F_00439130(pvVar4,param_1);
      if (uVar3 == 0) {
        return 0;
      }
      F_00444aa0(pvVar4,*(undefined4 *)(uVar3 + 8),*(undefined4 *)(uVar3 + 0xc),1);
    }
    else {
      uVar5 = 0xf;
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
      pvVar4 = (undefined *)F_00435440(uVar3,uVar5);
      if (pvVar4 == (undefined *)0x0) {
        return 0;
      }
      bVar2 = F_0043a050(pvVar4,param_1);
      if (bVar2 == 0) {
        return 0;
      }
      F_0043a140(pvVar4,param_1);
    }
    ppuVar6 = &REFG(undefined * PTR32, 0x12fd328);
    uVar5 = 6;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x20))))(*(int * PTR32 *)((int)this + 4))));
    F_004485a0(pvVar4,uVar5,param_1,ppuVar6);
  }
  return 0;
}

/* ref: FUN_0076b4f0 */
byte F_0076b4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76b4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  byte bVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  bVar1 = *(byte *)((int)this + 0x33c);
  if (bVar1 != (byte)param_1) {
    if (*(int *)((int)this + 8) != 0) {
      puVar2 = ((undefined4 *)(gen_frame + 0x0));
      iVar4 = 0x16;
      do {
        *puVar2 = 0;
        puVar2 = puVar2 + 2;
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
      F_005a2710(((undefined4 *)(gen_frame + 0x0)),4);
      ((undefined4 *)(gen_frame + 0x0))[1] = 7;
      F_005a2710(((undefined1 *)(gen_frame + 0xa8)),4);
      (*(uint *)(gen_frame + 0xac)) = (uint)((byte)param_1 != 0);
      piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,*(undefined4 *)((int)this + 8),0x17,((undefined4 *)(gen_frame + 0x0)));
      this_00 = &(*(uint *)(gen_frame + 0xb8));
      iVar4 = 0x16;
      do {
        this_00 = this_00 + -2;
        F_005a2670(this_00);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
    *(byte *)((int)this + 0x33c) = (byte)param_1;
    bVar1 = (byte)param_1;
  }
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return bVar1;
}

/* ref: FUN_0076b5c0 */
uint F_0076b5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76b5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  uint uVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  uint * this_00;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  (*(uint *)(gen_frame + 0xb8)) = uVar1;
  if (*(int *)((int)this + 8) != 0) {
    puVar2 = ((undefined4 *)(gen_frame + 0x0));
    iVar4 = 0x16;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 2;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    F_005a2710(((undefined4 *)(gen_frame + 0x0)),4);
    ((undefined4 *)(gen_frame + 0x0))[1] = 6;
    F_005a2710(((undefined1 *)(gen_frame + 0xb0)),4);
    (*(undefined4 *)(gen_frame + 0xb4)) = param_1;
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,*(undefined4 *)((int)this + 8),0x17,((undefined4 *)(gen_frame + 0x0)));
    this_00 = &(*(uint *)(gen_frame + 0xb8));
    iVar4 = 0x16;
    do {
      this_00 = this_00 + -2;
      uVar1 = F_005a2670(this_00);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return uVar1;
}

/* ref: FUN_0076b670 */
uint F_0076b670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x76b670u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined * this_00;
  
  if ((param_3 & 0x1d83040) == 0) {
    if ((param_3 & 0x18010) != 0) {
      uVar2 = param_4;
      if ((param_3 & 0x10000) == 0) {
        uVar3 = F_00760440(param_5);
        pvVar4 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),uVar3);
        if ((pvVar4 != (undefined *)0x0) &&
           (pvVar4 = (undefined *)F_00a37da0(pvVar4,param_4), pvVar4 != (undefined *)0x0)) {
          uVar2 = F_0046e5e0(pvVar4);
        }
      }
      uVar3 = F_00ab24a0(uVar2);
      if (uVar3 != 0) {
        uVar2 = F_00ab6240(uVar2,0,uVar3);
        F_0042e430(param_1,uVar2);
        pvVar4 = param_1;
        uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4));
        this_00 = (undefined *)F_0043bef0(uVar2);
        F_00a21e20(this_00,pvVar4);
      }
    }
  }
  else {
    if ((param_3 & 0x40) == 0) {
      if ((param_3 & 0x2000) == 0) {
        if ((param_3 & 0x80000) == 0) {
          if ((param_3 & 0x100000) == 0) {
            if ((param_3 & 0x400000) == 0) {
              if ((param_3 & 0x1000) == 0) {
                if ((param_3 & 0x800000) == 0) {
                  if ((param_3 & 0x1000000) == 0) goto LAB_0076b7c8;
                  puVar1 = (uint *)F_00ab2840(param_4);
                }
                else {
                  puVar1 = (uint *)F_00ab2d50(param_4);
                }
              }
              else {
                puVar1 = (uint *)F_00ab1f00(param_4);
              }
            }
            else {
              puVar1 = (uint *)F_00ab2870(param_4);
            }
          }
          else {
            puVar1 = (uint *)F_00ab2cf0(param_4);
          }
        }
        else {
          puVar1 = (uint *)F_00ab2c30(param_4);
        }
      }
      else {
        puVar1 = (uint *)F_00ab1f30(param_4);
      }
    }
    else {
      puVar1 = (uint *)F_00ab1ed0(param_4);
    }
    if (puVar1 != (uint *)0x0) {
      F_0042e430(param_1,(*puVar1 & 0xffffff) + (int)puVar1);
      uVar2 = F_0042ccf0(param_2,param_1);
      return uVar2;
    }
  }
LAB_0076b7c8: ;
  uVar2 = F_0042ccf0(param_2,param_1);
  return uVar2;
}

/* ref: FUN_0076b7e0 */
uint F_0076b7e0(unsigned int gen_a0)
{
  GEN_ENTER(0x76b7e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined * pvVar4;
  ulonglong uVar5;
  
  if (*(int *)((int)this + 0x90) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x8c);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,*(int *)((int)this + 0x90));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x90);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x90) = 0;
    }
  }
  iVar3 = 3;
  pvVar4 = (undefined *)((int)this + 0x624);
  do {
    pvVar4 = (undefined *)((int)pvVar4 + -100);
    F_0042c880(pvVar4);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  iVar3 = 4;
  pvVar4 = (undefined *)((int)this + 0x494);
  do {
    pvVar4 = (undefined *)((int)pvVar4 + -100);
    F_0042c880(pvVar4);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  iVar3 = 4;
  pvVar4 = (undefined *)((int)this + 0x2a0);
  do {
    pvVar4 = (undefined *)((int)pvVar4 + -100);
    uVar5 = F_0042c880(pvVar4);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  return (uint)uVar5;
}

/* ref: FUN_0076b890 */
uint F_0076b890(unsigned int gen_a0)
{
  GEN_ENTER(0x76b890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  int local_8;
  
  puVar3 = (undefined4 *)((int)this + 0xa4);
  local_8 = 5;
  do {
    puVar3[-2] = 0;
    puVar3[-1] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    F_0042aca0(puVar3 + 2);
    puVar3 = puVar3 + 0x19;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  puVar3 = (undefined4 *)((int)this + 0x298);
  local_8 = 5;
  do {
    puVar3[-2] = 0;
    puVar3[-1] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    F_0042aca0(puVar3 + 2);
    puVar3 = puVar3 + 0x19;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  puVar3 = (undefined4 *)((int)this + 0x48c);
  local_8 = 4;
  do {
    puVar3[-2] = 0;
    puVar3[-1] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    F_0042aca0(puVar3 + 2);
    puVar3 = puVar3 + 0x19;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  *(undefined1 *)((int)this + 0x94) = 1;
  *(undefined4 *)((int)this + 0x64c) = 0;
  F_00c48350((undefined *)((int)this + 0x614),0,0x38);
  uVar2 = *(uint *)((int)this + 0x90);
  if (uVar2 != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x8c);
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,uVar2);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 0x90);
    if (puVar3 != (undefined4 *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
      *(undefined4 *)((int)this + 0x90) = 0;
    }
  }
  return uVar2;
}

/* ref: FUN_0076b990 */
uint F_0076b990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x76b990u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[3] = param_4;
  param_1[2] = 0;
  uVar1 = F_0042e430(param_1 + 4,param_5);
  return uVar1;
}

/* ref: FUN_0076b9c0 */
uint F_0076b9c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x76b9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint * param_5 = (uint *)(uintptr_t)gen_a4;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *param_5 = (uint)param_1;
  return (uint)param_1;
}

/* ref: FUN_0076b9e0 */
uint F_0076b9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x76b9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  uint uVar2;
  int * piVar3;
  ulonglong uVar4;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  F_0042b630(((undefined1 *)(gen_frame + 0x14)));
  uVar2 = 0;
  if (param_2 != 0) {
    (*(int *)(gen_frame + 0x10)) = 0;
    piVar3 = (int *)((int)this + 0x614);
    do {
      (*(int *)(gen_frame + 0xc)) = *((int *)GEN_TOP((*(int *)(param_1 + uVar2 * 4) + 4)));
      F_00ab9240(0x18f5f,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x90) + 0xc))) + (*(int *)(gen_frame + 0x10))))),
                   ((undefined1 *)(gen_frame + 0x14)));
      F_0042ccf0((undefined *)(*piVar3 + 0x10),((undefined1 *)(gen_frame + 0x14)));
      iVar1 = *piVar3;
      (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 0x10;
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
      *(uint *)(iVar1 + 0xc) = (uint)*(ushort *)((*(int *)(gen_frame + 0xc)) + 0x7c);
    } while (uVar2 < param_2);
  }
  *(undefined1 *)((int)this + 0x94) = 1;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x88) + 4))))
            (*(int * PTR32 *)((int)this + 0x88),((undefined1 *)(gen_frame + 0x8)),0,0,*(undefined4 *)((int)this + 0x98));
  F_005a2670(((undefined1 *)(gen_frame + 0x8)));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (uint)uVar4;
}

/* ref: FUN_0076bac0 */
unsigned int F_0076bac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76bac0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  int local_8;
  
  if (*(char *)((int)this + 0x94) != '\0') {
    uVar3 = 0;
    puVar5 = (undefined4 *)((int)this + 0xa4);
    local_8 = 0;
    puVar4 = (undefined4 *)(param_2 + 0x7c);
    do {
      if (puVar5[-1] == 0) break;
      uVar1 = puVar5[-2];
      F_005a2710(puVar4 + -0xb,4);
      puVar4[-10] = uVar1;
      uVar1 = *puVar5;
      F_005a2710(puVar4 + -1,4);
      *puVar4 = uVar1;
      uVar1 = puVar5[1];
      F_005a2710(puVar4 + 9,4);
      puVar4[10] = uVar1;
      uVar1 = puVar5[-1];
      F_005a2710(puVar4 + 0x1d,4);
      puVar4[0x1e] = uVar1;
      uVar2 = F_0042a990(puVar5 + 2);
      F_005a2710(puVar4 + 0x27,6);
      local_8 = local_8 + 1;
      puVar4[0x28] = uVar2;
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 2;
      puVar5 = puVar5 + 0x19;
    } while (uVar3 < 5);
    F_005a2710((undefined *)(param_2 + 0x48),4);
    uVar3 = 0;
    *(int *)(param_2 + 0x4c) = local_8;
    puVar5 = (undefined4 *)((int)this + 0x298);
    local_8 = 0;
    puVar4 = (undefined4 *)(param_2 + 0x174);
    do {
      if (puVar5[-1] == 0) break;
      uVar1 = *puVar5;
      F_005a2710(puVar4 + -0xb,4);
      puVar4[-10] = uVar1;
      uVar1 = puVar5[1];
      F_005a2710(puVar4 + -1,4);
      *puVar4 = uVar1;
      uVar1 = puVar5[-0x7e];
      F_005a2710(puVar4 + 9,4);
      puVar4[10] = uVar1;
      uVar2 = F_0042a990(puVar5 + -0x7b);
      F_005a2710(puVar4 + 0x13,6);
      local_8 = local_8 + 1;
      puVar4[0x14] = uVar2;
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 2;
      puVar5 = puVar5 + 0x19;
    } while (uVar3 < 5);
    F_005a2710((undefined *)(param_2 + 0x140),4);
    uVar3 = 0;
    *(int *)(param_2 + 0x144) = local_8;
    puVar5 = (undefined4 *)((int)this + 0x48c);
    local_8 = 0;
    puVar4 = (undefined4 *)(param_2 + 0x21c);
    do {
      if (puVar5[-1] == 0) break;
      uVar1 = puVar5[-2];
      F_005a2710(puVar4 + -9,4);
      puVar4[-8] = uVar1;
      uVar1 = *puVar5;
      F_005a2710(puVar4 + -1,4);
      *puVar4 = uVar1;
      uVar1 = puVar5[1];
      F_005a2710(puVar4 + 0xf,4);
      puVar4[0x10] = uVar1;
      uVar1 = puVar5[-1];
      F_005a2710(puVar4 + 0x17,4);
      puVar4[0x18] = uVar1;
      uVar2 = F_0042a990(puVar5 + 2);
      F_005a2710(puVar4 + 7,6);
      local_8 = local_8 + 1;
      puVar4[8] = uVar2;
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 2;
      puVar5 = puVar5 + 0x19;
    } while (uVar3 < 4);
    F_005a2710((undefined *)(param_2 + 0x1e8),4);
    *(int *)(param_2 + 0x1ec) = local_8;
  }
  return 0;
}

/* ref: FUN_0076bd10 */
unsigned int F_0076bd10(unsigned int gen_a0)
{
  GEN_ENTER(0x76bd10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined4 *)((int)this + 0xb97c) = 0;
  *(undefined1 *)((int)this + 0xb96e) = 0;
  if (*(int *)((int)this + 0xb954) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0xb954),0);
    *(undefined4 *)((int)this + 0xb954) = 0;
  }
  return 0;
}

/* ref: FUN_0076bd60 */
uint F_0076bd60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76bd60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  if ((char)param_1 != '\0') {
    uVar4 = 0x381;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
    uVar3 = F_0046a630(pvVar2,uVar4);
    return uVar3;
  }
  uVar4 = 0x380;
  pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
  uVar3 = F_0046a630(pvVar2,uVar4);
  return uVar3;
}

/* ref: FUN_0076bda0 */
byte F_0076bda0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x76bda0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 0x9680) = param_1;
  *(undefined4 *)((int)this + 0x9684) = param_2;
  *(byte *)((int)this + 0x9698) = (byte)param_3;
  return (byte)param_3;
}

/* ref: FUN_0076bdd0 */
uint F_0076bdd0(unsigned int gen_a0)
{
  GEN_ENTER(0x76bdd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if ((REFG(int, 0x1379694) == 0) || (*(char *)((int)this + 0xb971) == '\x01')) {
    return 0x40;
  }
  if (*(char *)(REFG(int, 0x1379694) + 0x188) == '\x02') {
    return 0x80;
  }
  if ((!GEN_ISNAN(REFG(float, 0x14ab588)) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
      !(REFG(float, 0x14ab588) <= *(float *)&REFG(undefined, 0x1088114))) {
    return 0x100;
  }
  if (1 < REFG(undefined1, 0x1338ad4)) {
    bVar1 = F_00ae09c0(&REFG(undefined, 0x1336e40),*(undefined4 *)(REFG(int, 0x1379694) + 0x74));
    if (bVar1 == 0) {
      return 0x200;
    }
  }
  return -(uint)(REFG(char, 0x14ab0d0) != '\0') & 0x400;
}

/* ref: FUN_0076be40 */
uint F_0076be40(unsigned int gen_a0)
{
  GEN_ENTER(0x76be40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((REFG(int, 0x1379694) == 0) || (REFG(char, 0x14ab070) == '\0')) {
    return 5;
  }
  if (*(uint *)((int)this + 0x9680) != (uint)REFG(undefined1, 0x14ab0d4)) {
    return 1;
  }
  if (*(int *)((int)this + 0x9684) != 0) {
    return 2;
  }
  if (*(char *)(REFG(int, 0x1379694) + 0x188) == '\x02') {
    return 3;
  }
  if ((!GEN_ISNAN(REFG(float, 0x14ab588)) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
      !(REFG(float, 0x14ab588) <= *(float *)&REFG(undefined, 0x1088114))) {
    return 4;
  }
  return 0;
}

/* ref: FUN_0076beb0 */
uint F_0076beb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76beb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  short * psVar2;
  short * psVar3;
  
  psVar2 = (short *)((int)this + 0x96a2);
  uVar1 = 0;
  psVar3 = psVar2;
  do {
    if (*psVar3 == (short)param_1) {
      return (int)this + uVar1 * 10 + 0x96a2;
    }
    uVar1 = uVar1 + 1;
    psVar3 = psVar3 + 5;
  } while (uVar1 < 5);
  uVar1 = 0;
  do {
    if (*psVar2 == 0) {
      psVar2 = (short *)((int)this + uVar1 * 10 + 0x96a2);
      psVar2[1] = 0;
      psVar2[2] = 0;
      psVar2[3] = 0;
      *(undefined1 *)(psVar2 + 4) = 0;
      *psVar2 = (short)param_1;
      return (uint)psVar2;
    }
    uVar1 = uVar1 + 1;
    psVar2 = psVar2 + 5;
  } while (uVar1 < 5);
  return 0;
}

/* ref: FUN_0076bf30 */
uint F_0076bf30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76bf30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  short * psVar2;
  
  uVar1 = 0;
  psVar2 = (short *)((int)this + 0x96a2);
  do {
    if (*psVar2 == (short)param_1) {
      return (int)this + uVar1 * 10 + 0x96a2;
    }
    uVar1 = uVar1 + 1;
    psVar2 = psVar2 + 5;
  } while (uVar1 < 5);
  return 0;
}

/* ref: FUN_0076bf70 */
uint F_0076bf70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76bf70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  short * psVar2;
  
  uVar1 = 0;
  if (*(char *)((int)this + 0xb974) == '\x02') {
    psVar2 = (short *)((int)this + 0x760);
    do {
      if (*psVar2 == (short)param_1) {
        return uVar1 * 0x11c + 0x65c + (int)this;
      }
      uVar1 = uVar1 + 1;
      psVar2 = psVar2 + 0x8e;
    } while (uVar1 < 0x80);
  }
  return 0;
}

/* ref: FUN_0076bfc0 */
uint F_0076bfc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76bfc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  ushort * puVar2;
  
  uVar1 = 0;
  if (*(char *)((int)this + 0xb974) == '\x02') {
    puVar2 = (ushort *)((int)this + 0x764);
    do {
      if (*puVar2 == param_1) {
        return uVar1 * 0x11c + 0x65c + (int)this;
      }
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 0x8e;
    } while (uVar1 < 0x80);
  }
  return 0;
}

/* ref: FUN_0076c020 */
uint F_0076c020(unsigned int gen_a0)
{
  GEN_ENTER(0x76c020u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int * piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  uVar4 = param_1;
  do {
    piVar1 = &REFG(undefined4, 0x10bfcdc) + uVar3;
    iVar2 = (&REFG(undefined4, 0x10bfcc8))[(int)(uVar3)];
    if (uVar4 < (uint)(*piVar1 - iVar2)) {
      return iVar2 + uVar4;
    }
    uVar3 = uVar3 + 1;
    uVar4 = uVar4 + (iVar2 - *piVar1);
  } while (uVar3 < 5);
  return 0;
}

/* ref: FUN_0076c060 */
uint F_0076c060(unsigned int gen_a0)
{
  GEN_ENTER(0x76c060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  int * piVar1;
  
  if (*(int *)((int)this + 0xb950) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    in_EAX = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0xb950),0);
    *(undefined4 *)((int)this + 0xb950) = 0;
  }
  return in_EAX;
}

/* ref: FUN_0076c0f0 */
uint F_0076c0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76c0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  
  uVar3 = 0;
  if (*(ushort * PTR32 *)((int)this + 0x968c) != (ushort *)0x0) {
    uVar2 = F_0076bf70(this,(uint)**(ushort * PTR32 *)((int)this + 0x968c));
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = F_0042a990(uVar2 + 0x54);
      F_005a2710(param_1,8);
      *(uint *)((int)param_1 + 4) = uVar3;
      uVar3 = 0;
      puVar4 = (uint *)((int)param_1 + 0x24);
      do {
        bVar1 = *(byte *)((int)this + uVar3 + 0x969c);
        F_005a2710(puVar4 + -7,4);
        puVar4[-6] = (uint)bVar1;
        bVar1 = *(byte *)(uVar2 + 0x112 + uVar3);
        F_005a2710(puVar4 + -1,4);
        *puVar4 = (uint)bVar1;
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 2;
      } while (uVar3 < 3);
      bVar1 = *(byte *)((int)this + 0x96a0);
      uVar3 = F_005a2710((undefined *)((int)param_1 + 0x38),4);
      *(uint *)((int)param_1 + 0x3c) = (uint)bVar1;
    }
  }
  return uVar3;
}

/* ref: FUN_0076c1a0 */
byte F_0076c1a0(unsigned int gen_a0)
{
  GEN_ENTER(0x76c1a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(char *)(in_ecx + 0xb96c) != '\0';
}

/* ref: FUN_0076c230 */
uint F_0076c230(unsigned int gen_a0)
{
  GEN_ENTER(0x76c230u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = 3;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 1: ;
    return 0;
  case 2: ;
  case 3: ;
    uVar1 = 2;
    break;
  case 4: ;
    return 1;
  }
  return uVar1;
}

/* ref: FUN_0076c270 */
uint F_0076c270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76c270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,0x36);
  if (REFG(char, 0x14ab070) == '\0') {
    return uVar2;
  }
  if (uVar2 == 0) {
    return 0;
  }
  uVar6 = (uint)REFG(undefined1, 0x14ab0d4);
  if (uVar6 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = uVar6 + 0xf294;
  }
  if (**(int * PTR32 *)(uVar2 + 0x20) != iVar5) {
    **(int * PTR32 *)(uVar2 + 0x20) = iVar5;
    *(undefined1 *)(uVar2 + 0x1d) = 1;
  }
  if (((char)param_1 == '\0') &&
     (uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this), (char)uVar2 == '\0')) {
    return uVar2;
  }
  uVar2 = F_00ab21a0(uVar6);
  piVar1 = *(int * PTR32 *)((int)this + 4);
  uVar3 = F_00a68280(&REFG(char, 0x14ab070),0xffffffff,0);
  uVar3 = uVar3 & 0xffff;
  uVar7 = 0x9c6;
  pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1)));
  uVar3 = F_00461bb0(pvVar4,uVar7,uVar3);
  F_0042e430((undefined *)((int)this + 0x9cbc),uVar3);
  iVar5 = 3;
  switch((unsigned int)(uintptr_t)(*(undefined1 *)(uVar2 + 0x3f))) {
  case 1: ;
    iVar5 = 0;
    break;
  case 2: ;
  case 3: ;
    iVar5 = 2;
    break;
  case 4: ;
    iVar5 = 1;
    break;
  default: ;
    uVar2 = F_0042a990(&REFG(undefined * PTR32, 0x12fd328));
    goto LAB_0076c358;
  }
  uVar7 = (&REFG(undefined4, 0x10c4414))[(int)(iVar5)];
  uVar9 = 0;
  uVar8 = 0;
  pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043bd00(pvVar4,uVar7,uVar8,uVar9);
LAB_0076c358: ;
  F_0042e430((undefined *)((int)this + 0x9d10),uVar2);
  if (uVar6 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = uVar6 + 0xf294;
  }
  F_005a2710((undefined *)((int)this + 0x9f70),4);
  *(int *)((int)this + 0x9f74) = param_1;
  uVar2 = F_0042a990((int)this + 0x9cbc);
  F_005a2710((undefined *)((int)this + 0x9f68),8);
  *(uint *)((int)this + 0x9f6c) = uVar2;
  F_005a2710((undefined *)((int)this + 0x9f80),4);
  *(int *)((int)this + 0x9f84) = iVar5;
  uVar2 = F_0042a990((int)this + 0x9d10);
  uVar6 = F_005a2710((undefined *)((int)this + 0x9f88),8);
  *(uint *)((int)this + 0x9f8c) = uVar2;
  return uVar6;
}

/* ref: FUN_0076c420 */
uint F_0076c420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76c420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  uVar2 = F_0076bf70(this,param_1);
  if (*(char *)(uVar2 + 0x115) == '\x03') {
    bVar1 = F_00a71170(&REFG(undefined, 0x14b4e6c),(uint)*(ushort *)(uVar2 + 0x108));
    if (bVar1 != 0) {
      return CONCAT31(extraout_var,bVar1);
    }
  }
  uVar2 = F_0076b890((undefined *)((int)this + 0xc));
  return uVar2;
}

/* ref: FUN_0076c480 */
uint F_0076c480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76c480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  uVar1 = 0;
  do {
    if ((param_1 & 1 << ((byte)uVar1 & 0x1f)) != 0) {
      uVar2 = uVar1;
      if (10 < uVar1) {
        return param_1;
      }
      break;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0xb);
  iVar3 = (&REFG(undefined4, 0x10c4420))[(int)(uVar2)];
  uVar2 = 0;
  if (iVar3 != 0) {
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = F_0046a630(this_00,iVar3);
  }
  return uVar2;
}

/* ref: FUN_0076c4d0 */
uint F_0076c4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76c4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x9680) == 0) {
    *(undefined2 *)(param_1 + 2) = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    return 0;
  }
  uVar1 = F_00ab21a0(*(int *)((int)this + 0x9680));
  iVar2 = 3;
  switch((unsigned int)(uintptr_t)(*(undefined1 *)(uVar1 + 0x3f))) {
  case 1: ;
    iVar2 = 0;
    break;
  case 2: ;
  case 3: ;
    iVar2 = 2;
    break;
  case 4: ;
    iVar2 = 1;
  }
  *(bool *)(param_1 + 2) = iVar2 == 0;
  *(bool *)(param_1 + 3) = iVar2 == 1;
  *(bool *)(param_1 + 4) = iVar2 == 2;
  return param_1;
}

/* ref: FUN_0076c550 */
byte F_0076c550(unsigned int gen_a0)
{
  GEN_ENTER(0x76c550u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 != 5;
}

/* ref: FUN_0076c560 */
byte F_0076c560(unsigned int gen_a0)
{
  GEN_ENTER(0x76c560u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 == 5;
}

/* ref: FUN_0076c570 */
uint F_0076c570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76c570u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (uint)(*(ushort *)(param_1 + 0x10c) < *(ushort *)(param_2 + 0x10c));
}

/* ref: FUN_0076c590 */
byte F_0076c590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76c590u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = -((char)param_2 != '\0') & 3;
  *(byte *)(in_ecx + 0x969f) = bVar1;
  return bVar1;
}

/* ref: FUN_0076c5b0 */
uint F_0076c5b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x76c5b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  uint param_5 = (uint)gen_a4;
  int param_6 = (int)gen_a5;
  uint param_7 = (uint)gen_a6;
  undefined4 * param_8 = (undefined4 *)(uintptr_t)gen_a7;
  int * piVar1;
  undefined * this;
  uint uVar2;
  uint uVar3;
  
  piVar1 = (int *)F_00a39b80();
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1)));
  uVar2 = F_00460bd0(this,0x9d1,param_2);
  F_0042e430(param_1,uVar2);
  if ((param_7 & 0x10) != 0) {
    if (*(char *)*param_8 != '\0') {
      F_0042d540(param_8,&REFG(undefined, 0x10bfd10));
    }
    F_0042d540(param_8,uVar2);
  }
  uVar2 = F_00460bd0(this,0x9d2,param_3);
  F_0042d540(param_1,&REFG(undefined, 0x10bfd10));
  F_0042d540(param_1,uVar2);
  if ((param_7 & 4) != 0) {
    if (*(char *)*param_8 != '\0') {
      F_0042d540(param_8,&REFG(undefined, 0x10bfd10));
    }
    F_0042d540(param_8,uVar2);
  }
  uVar2 = param_4;
  if (0x13 < param_4) {
    uVar2 = 0x14;
  }
  if (uVar2 == param_5) {
    if (uVar2 < 0x14) {
      uVar2 = F_00460bd0(this,0xa09,param_5);
    }
    else {
      uVar2 = F_00460bd0(this,0xa08,param_5);
    }
  }
  else if (uVar2 < 0x14) {
    uVar2 = F_00460c80(this,0x9d3,param_5,uVar2);
  }
  else {
    uVar2 = F_00460bd0(this,0x9f2,param_5);
  }
  if (uVar2 != 0) {
    F_0042d540(param_1,&REFG(undefined, 0x10bfd10));
    F_0042d540(param_1,uVar2);
    if ((param_7 & 2) != 0) {
      if (*(char *)*param_8 != '\0') {
        F_0042d540(param_8,&REFG(undefined, 0x10bfd10));
      }
      F_0042d540(param_8,uVar2);
    }
  }
  uVar2 = 0;
  if (param_6 != 0) {
    uVar3 = F_00460bd0(this,0x9d4,param_6);
    uVar2 = 0;
    if (uVar3 != 0) {
      F_0042d540(param_1,&REFG(undefined, 0x10bfd10));
      uVar2 = F_0042d540(param_1,uVar3);
      if ((param_7 & 8) != 0) {
        if (*(char *)*param_8 != '\0') {
          F_0042d540(param_8,&REFG(undefined, 0x10bfd10));
        }
        uVar2 = F_0042d540(param_8,uVar3);
      }
    }
  }
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentCutScene::vf1 */
uint F_0076c740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x76c740u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 0;
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentCutScene::vf3 */
unsigned int F_0076c760(unsigned int gen_a0)
{
  GEN_ENTER(0x76c760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  this[0xc] = (undefined1)0x0;
  return 0;
}

/* ref: FUN_0076c790 */
unsigned int F_0076c790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76c790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  
  if (param_1 != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,param_1,0);
    *(undefined1 *)((int)this + 0xc) = 0;
  }
  return 0;
}

/* ref: FUN_0076c7c0 */
byte F_0076c7c0(unsigned int gen_a0)
{
  GEN_ENTER(0x76c7c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  byte bVar1;
  bool bVar2;
  
  bVar1 = 1;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0x33: ;
  case 0x34: ;
  case 0x35: ;
  case 0x55: ;
    break;
  default: ;
    goto switchD_0076c7d7_caseD_36;
  case 0x37: ;
  case 0x38: ;
  case 0x39: ;
    if (param_1 == 0x37) {
      bVar2 = REFG(char, 0x14ab29a) == '\x01';
    }
    else {
      if (param_1 != 0x38) {
        if ((param_1 == 0x39) && (REFG(char, 0x14ab29a) == '\x03')) {
          return 1;
        }
        break;
      }
      bVar2 = REFG(char, 0x14ab29a) == '\x02';
    }
    if (bVar2) {
      return 1;
    }
  }
  bVar1 = 0;
switchD_0076c7d7_caseD_36: ;
  return bVar1;
}

/* ref: Client::UI2::Agent::AgentEmote::vf5 */
unsigned int F_0076c840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76c840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(this + 0xc) == 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x14))))(*(int * PTR32 *)(this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,"TextCommand");
    *(uint *)(this + 0xc) = uVar2;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentAchievement::vf13 */
unsigned int F_0076c870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76c870u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 == 3) {
    *(undefined4 *)(in_ecx + 0x14) = 0;
    *(undefined4 *)(in_ecx + 0x18) = 0;
  }
  return 0;
}

/* ref: FUN_0076c890 */
unsigned int F_0076c890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76c890u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1;
  for (uVar2 = 0; (uVar1 < 0x32c && (F_00ab2050(uVar1), uVar2 <= param_2)); uVar2 = uVar2 + 1) {
    uVar1 = uVar1 + 1;
  }
  return 0;
}

/* ref: FUN_0076c8d0 */
uint F_0076c8d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x76c8d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined * pvVar1;
  
  pvVar1 = (undefined *)((int)this + *param_1 * 8 + 0x898);
  F_005a2710(pvVar1,8);
  *(undefined4 *)((int)pvVar1 + 4) = param_2;
  pvVar1 = (undefined *)((int)this + *param_1 * 8 + 0x8a0);
  F_005a2710(pvVar1,4);
  *(uint *)((int)pvVar1 + 4) = param_3;
  *param_1 = *param_1 + 2;
  return param_3;
}

/* ref: FUN_0076c920 */
uint F_0076c920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x76c920u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined * pvVar1;
  
  pvVar1 = (undefined *)((int)this + *param_1 * 8 + 0x898);
  F_005a2710(pvVar1,4);
  *(uint *)((int)pvVar1 + 4) = (uint)((char)param_2 != '\0');
  pvVar1 = (undefined *)((int)this + *param_1 * 8 + 0x8a0);
  F_005a2710(pvVar1,8);
  *(uint *)((int)pvVar1 + 4) = param_3;
  *param_1 = *param_1 + 2;
  return param_3;
}

/* ref: FUN_0076c970 */
uint F_0076c970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76c970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((char)param_1 != '\0') {
    *(undefined1 *)((int)this + 0x30) = 0;
  }
  uVar1 = F_00424810(REFG(undefined4, 0x137104c));
  if (uVar1 != 0) {
    uVar1 = F_00a6b0b0(&REFG(undefined, 0x14ab464));
    if (uVar1 != 2) {
      F_00a6b020(&REFG(undefined, 0x14ab464));
      return 1;
    }
    return 2;
  }
  return 0;
}

/* ref: FUN_0076c9d0 */
uint F_0076c9d0(unsigned int gen_a0)
{
  GEN_ENTER(0x76c9d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00424810(REFG(undefined4, 0x137104c));
  if (uVar1 != 0) {
    uVar1 = F_00a6b040(&REFG(undefined, 0x14ab464),param_1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0076ca00 */
byte F_0076ca00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76ca00u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00424810(REFG(undefined4, 0x137104c));
  if (uVar1 != 0) {
    uVar1 = F_00a6b160(&REFG(undefined, 0x14ab464));
    if (uVar1 == 2) {
      uVar1 = F_00a6b180(&REFG(undefined, 0x14ab464));
      *param_1 = uVar1;
      uVar1 = F_00a6b190(&REFG(undefined, 0x14ab464));
      *param_2 = uVar1;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_0076ca50 */
uint F_0076ca50(unsigned int gen_a0)
{
  GEN_ENTER(0x76ca50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  if (*(char *)((int)this + 0x464) == '\0') {
    uVar1 = F_0043bd00(this_00,0x7d9,0,0);
  }
  else {
    uVar1 = F_00461bb0(this_00,0x12,*(undefined4 *)((int)this + 0x468));
  }
  F_0042e430((undefined *)((int)this + 0x410),uVar1);
  uVar1 = F_0042a990((undefined *)((int)this + 0x410));
  F_005a2710((undefined *)((int)this + 0x898),8);
  *(uint *)((int)this + 0x89c) = uVar1;
  uVar1 = F_005a2710((undefined *)((int)this + 0x1070),4);
  *(undefined4 *)((int)this + 0x1074) = 5;
  return uVar1;
}

/* ref: FUN_0076cad0 */
uint F_0076cad0(unsigned int gen_a0)
{
  GEN_ENTER(0x76cad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (*(char *)((int)this + 0x3b4) == '\0') {
    uVar2 = F_005a2710((undefined *)((int)this + 0x2cb0),4);
    *(undefined4 *)((int)this + 0x2cb4) = 0;
    return uVar2;
  }
  F_005a2710((undefined *)((int)this + 0x2cb0),4);
  *(undefined4 *)((int)this + 0x2cb4) = 1;
  uVar1 = *(undefined4 *)((int)this + 0x3b0);
  uVar2 = *(uint *)((int)this + 0x3ac);
  F_0042aca0((int)this + 0x2db0);
  uVar5 = 0x12;
  uVar4 = uVar2;
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_00461bb0(pvVar3,uVar5,uVar4);
  F_0042e430((undefined *)((int)this + 0x2db0),uVar4);
  F_0042e370((undefined *)((int)this + 0x2db0),&REFG(undefined, 0x10bfd3c));
  uVar6 = 0x12;
  uVar5 = uVar1;
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_00461bb0(pvVar3,uVar6,uVar5);
  F_0042e370((undefined *)((int)this + 0x2db0),uVar4);
  uVar4 = F_0042a990((int)this + 0x2db0);
  F_005a2710((undefined *)((int)this + 0x2cb8),8);
  *(uint *)((int)this + 0x2cbc) = uVar4;
  F_005a2710((undefined *)((int)this + 0x2cc0),4);
  uVar2 = F_0046e6b0(uVar2,uVar1);
  *(uint *)((int)this + 0x2cc4) = uVar2;
  return uVar2;
}

/* ref: FUN_0076cbd0 */
uint F_0076cbd0(unsigned int gen_a0)
{
  GEN_ENTER(0x76cbd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint * puVar5;
  int in_ecx;
  uint local_8;
  
  bVar4 = *(byte *)((int)this + 0x46);
  if (9 < bVar4) {
    bVar4 = 10;
  }
  if ((*(char *)((int)this + 0x3b5) == '\0') || (bVar4 == 0)) {
    local_8 = F_005a2710((undefined *)((int)this + 0x2cc8),4);
    *(undefined4 *)((int)this + 0x2ccc) = 0;
  }
  else {
    F_005a2710((undefined *)((int)this + 0x2cc8),4);
    local_8 = (uint)bVar4;
    *(uint *)((int)this + 0x2ccc) = local_8;
    if (bVar4 != 0) {
      puVar5 = (uint *)((int)this + 0x2cdc);
      in_ecx = (int)this + 0x54;
      do {
        cVar1 = *(char *)(in_ecx + -4);
        F_005a2710(puVar5 + -3,4);
        puVar5[-2] = (uint)(cVar1 != '\0');
        uVar2 = F_0042a990(in_ecx);
        uVar3 = F_005a2710(puVar5 + -1,8);
        *puVar5 = uVar2;
        puVar5 = puVar5 + 4;
        in_ecx = in_ecx + 0x60;
        local_8 = local_8 - 1;
      } while (local_8 != 0);
      return uVar3;
    }
  }
  return local_8;
}

/* ref: FUN_0076cc70 */
uint F_0076cc70(unsigned int gen_a0)
{
  GEN_ENTER(0x76cc70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 0x3c) == 0) {
    uVar2 = F_005a2710((undefined *)((int)this + 0x2d70),4);
    *(undefined4 *)((int)this + 0x2d74) = 0;
    return uVar2;
  }
  F_005a2710((undefined *)((int)this + 0x2d70),4);
  *(undefined4 *)((int)this + 0x2d74) = 1;
  uVar1 = *(undefined4 *)((int)this + 0x40);
  F_005a2710((undefined *)((int)this + 0x2d78),4);
  *(undefined4 *)((int)this + 0x2d7c) = uVar1;
  uVar1 = *(undefined4 *)((int)this + 0x3c);
  F_005a2710((undefined *)((int)this + 0x2d80),4);
  *(undefined4 *)((int)this + 0x2d84) = uVar1;
  uVar2 = F_0042a990((int)this + 0x3b8);
  uVar3 = F_005a2710((undefined *)((int)this + 0x2d88),8);
  *(uint *)((int)this + 0x2d8c) = uVar2;
  return uVar3;
}

/* ref: FUN_0076cd00 */
uint F_0076cd00(unsigned int gen_a0)
{
  GEN_ENTER(0x76cd00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint * puVar3;
  undefined * this_00;
  uint uVar4;
  undefined * puVar5;
  undefined4 uVar6;
  
  iVar1 = *(int *)((int)this + 0x38);
  if (iVar1 == 0) {
    uVar2 = F_005a2710((undefined *)((int)this + 0x2d90),4);
    *(undefined4 *)((int)this + 0x2d94) = 0;
    return uVar2;
  }
  F_005a2710((undefined *)((int)this + 0x2d90),4);
  *(undefined4 *)((int)this + 0x2d94) = 1;
  puVar5 = &REFG(undefined, 0x10bdb89);
  puVar3 = (uint *)F_00ab2020(iVar1);
  if (puVar3 != (uint *)0x0) {
    if (REFG(char, 0x14ab0d1) != '\0') {
      puVar3 = puVar3 + 1;
    }
    puVar5 = ((undefined *)GEN_TOP(((*puVar3 & 0xffffff) + (int)puVar3)));
  }
  F_0042aca0((int)this + 0x2e04);
  uVar6 = 0xd1d;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_00460540(this_00,uVar6,puVar5);
  F_0042e430((undefined *)((int)this + 0x2e04),uVar2);
  uVar2 = F_0042a990((int)this + 0x2e04);
  uVar4 = F_005a2710((undefined *)((int)this + 0x2d98),8);
  *(uint *)((int)this + 0x2d9c) = uVar2;
  return uVar4;
}

/* ref: FUN_0076cdb0 */
uint F_0076cdb0(unsigned int gen_a0)
{
  GEN_ENTER(0x76cdb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined2 *)((int)this + 0xa4) = 0xffff;
  *(undefined4 *)((int)this + 0x60) = 0;
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
  return 0xffffffff;
}

/* ref: FUN_0076ce10 */
byte F_0076ce10(unsigned int gen_a0)
{
  GEN_ENTER(0x76ce10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return (byte)param_1;
}

/* ref: FUN_0076ce20 */
byte F_0076ce20(unsigned int gen_a0)
{
  GEN_ENTER(0x76ce20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return (byte)param_1;
}

/* ref: FUN_0076ce30 */
ushort F_0076ce30(unsigned int gen_a0)
{
  GEN_ENTER(0x76ce30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(ushort *)(in_ecx + 0xa2) < 8) {
    return *((ushort *)GEN_TOP((in_ecx + ((uint)*(ushort *)(in_ecx + 0xa2) * 3 + 0x30) * 2)));
  }
  return 0;
}

/* ref: FUN_0076ce50 */
uint F_0076ce50(unsigned int gen_a0)
{
  GEN_ENTER(0x76ce50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(in_ecx + 0xa2);
  if (uVar1 < 8) {
    return CONCAT22((short)(uVar1 * 3 >> 0x10),*(undefined2 *)(in_ecx + 0x62 + uVar1 * 6));
  }
  return 0;
}

/* ref: FUN_0076ce90 */
uint F_0076ce90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x76ce90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined2 * puVar1;
  
  puVar1 = (undefined2 *)(uint)*(ushort *)((int)this + 0xa2);
  if (puVar1 < (undefined2 *)0x8) {
    puVar1 = ((undefined2 *)GEN_TOP(((int)this + ((int)((int)(uintptr_t)puVar1) * 3 + 0x30) * 2)));
    puVar1[1] = (undefined2)param_1;
    *puVar1 = (undefined2)param_2;
    puVar1[2] = (undefined2)param_3;
  }
  return (uint)puVar1;
}

/* ref: FUN_0076cf10 */
uint F_0076cf10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x76cf10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  int local_c;
  int local_8;
  
  local_8 = 0;
  iVar3 = 0x10;
  piVar4 = (int *)((int)this + 0x10);
  local_c = 0x19;
  do {
    iVar1 = *piVar4;
    if (iVar1 < 1) {
      if ((char)piVar4[1] == '\0') {
        uVar2 = (iVar1 < 0) - 1 & 0xea62;
LAB_0076cf6e: ;
        if (*((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + iVar3))) != uVar2) {
          *((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + iVar3))) = uVar2;
          *(undefined1 *)(param_2 + 0x1d) = 1;
        }
        *(undefined1 *)(piVar4 + 1) = 1;
      }
LAB_0076cf81: ;
      local_8 = local_8 + 1;
    }
    else {
      uVar2 = F_00ab24a0(iVar1);
      if (uVar2 != 0) {
        if ((char)piVar4[1] == '\0') {
          uVar2 = F_00ab65a0(*piVar4,uVar2);
          goto LAB_0076cf6e;
        }
        goto LAB_0076cf81;
      }
    }
    iVar3 = iVar3 + 0xc;
    piVar4 = piVar4 + 2;
    local_c = local_c + -1;
    if (local_c == 0) {
      return (local_8 != 0x19) - 1 & 4;
    }
  } while( true );
}

/* ref: FUN_0076cfb0 */
uint F_0076cfb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x76cfb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  uint uVar2;
  
  if (0 < *(int *)((int)this + 0xdc)) {
    uVar1 = F_00ab24a0(*(int *)((int)this + 0xdc));
    uVar2 = 0;
    if (uVar1 != 0) {
      if (*(char *)((int)this + 0xe9) != '\0') {
        uVar2 = F_00ab65a0(*(undefined4 *)((int)this + 0xdc),uVar1);
        uVar2 = uVar2 + 39000;
      }
      if (*((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x140))) != uVar2) {
        *((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x140))) = uVar2;
        *(undefined1 *)(param_2 + 0x1d) = 1;
      }
      uVar1 = F_00ab6240(*(undefined4 *)((int)this + 0xdc),0,uVar1);
      if (uVar1 != *((uint *)GEN_TOP((*(int *)(param_3 + 0x20) + 0x10)))) {
        *((uint *)GEN_TOP((*(int *)(param_3 + 0x20) + 0x10))) = uVar1;
        *(undefined1 *)(param_3 + 0x1d) = 1;
      }
      uVar2 = 0x10;
    }
    return uVar2;
  }
  return 0;
}

/* ref: FUN_0076d050 */
byte F_0076d050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76d050u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (byte)param_2;
}

/* ref: Client::UI2::Agent::AgentFishRecord::vf1 */
uint F_0076d060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x76d060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  undefined1 uVar2;
  
  if ((*param_2 & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 4);
  }
  uVar2 = 0;
  if ((-3 < iVar1) && (iVar1 < 0)) {
    F_00a6fb50(&REFG(undefined, 0x14ac234));
    *(undefined4 *)(this + 8) = 0;
    uVar2 = 1;
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = uVar2;
  return (uint)param_1;
}

/* ref: FUN_0076d0b0 */
byte F_0076d0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76d0b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 == 8) {
    *(undefined4 *)((int)this + 4) = REFG(undefined4, 0x14ac238);
    *(undefined1 *)((int)this + 10) = REFG(undefined1, 0x14ac240);
    *(undefined2 *)((int)this + 8) = REFG(undefined2, 0x14ac23c);
    *(undefined1 *)((int)this + 0xb) = REFG(undefined1, 0x14ac23f);
    *(undefined1 *)((int)this + 0xc) = REFG(undefined1, 0x14ac23e);
    *(undefined4 *)((int)this + 0x10) = REFG(undefined4, 0x14ac244);
    *(undefined1 *)((int)this + 0x16) = REFG(undefined1, 0x14ac24c);
    *(undefined2 *)((int)this + 0x14) = REFG(undefined2, 0x14ac248);
    *(undefined1 *)((int)this + 0x17) = REFG(undefined1, 0x14ac24b);
    *(undefined1 *)((int)this + 0x18) = REFG(undefined1, 0x14ac24a);
    *(undefined4 *)((int)this + 0x1c) = REFG(undefined4, 0x14ac250);
    *(undefined1 *)((int)this + 0x22) = REFG(undefined1, 0x14ac258);
    *(undefined2 *)((int)this + 0x20) = REFG(undefined2, 0x14ac254);
    *(undefined1 *)((int)this + 0x23) = REFG(undefined1, 0x14ac257);
    *(undefined1 *)((int)this + 0x24) = REFG(undefined1, 0x14ac256);
    *(undefined4 *)((int)this + 0x28) = REFG(undefined4, 0x14ac25c);
    *(undefined1 *)((int)this + 0x2e) = REFG(undefined1, 0x14ac264);
    *(undefined2 *)((int)this + 0x2c) = REFG(undefined2, 0x14ac260);
    *(undefined1 *)((int)this + 0x2f) = REFG(undefined1, 0x14ac263);
    *(undefined1 *)((int)this + 0x30) = REFG(undefined1, 0x14ac262);
    *(undefined4 *)((int)this + 0x34) = REFG(undefined4, 0x14ac268);
    *(undefined1 *)((int)this + 0x3a) = REFG(undefined1, 0x14ac270);
    *(undefined2 *)((int)this + 0x38) = REFG(undefined2, 0x14ac26c);
    *(undefined1 *)((int)this + 0x3b) = REFG(undefined1, 0x14ac26f);
    *(undefined1 *)((int)this + 0x3c) = REFG(undefined1, 0x14ac26e);
    *(undefined4 *)((int)this + 0x40) = REFG(undefined4, 0x14ac274);
    *(undefined1 *)((int)this + 0x46) = REFG(undefined1, 0x14ac27c);
    *(undefined2 *)((int)this + 0x44) = REFG(undefined2, 0x14ac278);
    *(undefined1 *)((int)this + 0x47) = REFG(undefined1, 0x14ac27b);
    *(undefined1 *)((int)this + 0x48) = REFG(undefined1, 0x14ac27a);
    *(undefined1 *)((int)this + 0x4c) = 1;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentFishRecord::vf5 */
uint F_0076d250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76d250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x1c0];
  undefined1 AVar1;
  uint uVar2;
  int * piVar3;
  undefined * pvVar4;
  int iVar5;
  uint uVar6;
  uint * puVar7;
  undefined * pAVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  ((uint *)(gen_frame + 0x1a0))[6] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1bc);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if (((char)uVar2 != '\0') && (uVar2 = (byte)this[0x58] - 1, uVar2 == 0)) {
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x68))(piVar3,*(undefined4 *)(this + 8));
    if ((char)uVar2 != '\0') {
      ((uint *)(gen_frame + 0x1a0))[0] = 0xefb;
      ((uint *)(gen_frame + 0x1a0))[1] = 0xefc;
      ((uint *)(gen_frame + 0x1a0))[2] = 0xefa;
      ((uint *)(gen_frame + 0x1a0))[3] = 0xef9;
      ((uint *)(gen_frame + 0x1a0))[4] = 0xefd;
      ((uint *)(gen_frame + 0x1a0))[5] = 0xefe;
      piVar3 = ((int *)(gen_frame + 0x18));
      iVar5 = 0x30;
      do {
        *piVar3 = 0;
        piVar3 = piVar3 + 2;
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
      uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),4);
      F_004142d0(&(*(int *)(gen_frame + 0xc)),*(undefined4 *)(uVar2 + 0x14));
      F_005a2710(((int *)(gen_frame + 0x18)),4);
      ((int *)(gen_frame + 0x18))[1] = (*(int *)(gen_frame + 0xc)) + 2;
      (*(uint *)(gen_frame + 0x10)) = 0;
      puVar7 = ((uint *)(gen_frame + 0x3c));
      pAVar8 = this + 0x10;
      do {
        (*(uint *)(gen_frame + 0x14)) = *(uint *)pAVar8;
        F_005a2710(puVar7 + -5,3);
        puVar7[-4] = (*(uint *)(gen_frame + 0x14));
        if (*(uint *)pAVar8 != 0) {
          uVar2 = F_00ab24a0(*(uint *)pAVar8);
          (*(uint *)(gen_frame + 0x14)) = uVar2;
          if (uVar2 == 0) {
            puVar7 = ((uint *)(gen_frame + 0x1a0));
            iVar5 = 0x30;
            do {
              puVar7 = puVar7 + -2;
              uVar2 = F_005a2670(puVar7);
              iVar5 = iVar5 + -1;
            } while (-1 < iVar5);
            F_00c47745(((uint *)(gen_frame + 0x1a0))[6] ^ (uint)(uint)(gen_frame + 0x1bc));
            return uVar2;
          }
          uVar2 = ((uint *)(gen_frame + 0x1a0))[(int)((*(uint *)(gen_frame + 0x10)))];
          uVar10 = 0;
          uVar9 = 0;
          pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4))));
          uVar2 = F_0043bd00(pvVar4,uVar2,uVar9,uVar10);
          F_005aa640(puVar7 + -7,uVar2);
          uVar2 = F_00ab6240(*(uint *)pAVar8,0,(*(uint *)(gen_frame + 0x14)));
          F_005aa640(puVar7 + -3,uVar2);
          uVar2 = F_00ab65a0(*(uint *)pAVar8,(*(uint *)(gen_frame + 0x14)));
          (*(uint *)(gen_frame + 0x14)) = uVar2;
          F_005a2710(puVar7 + -1,3);
          uVar2 = (uint)(byte)pAVar8[8];
          piVar3 = *(int * PTR32 *)(this + 4);
          *puVar7 = (*(uint *)(gen_frame + 0x14));
          uVar9 = 0x23;
          pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3)));
          uVar2 = F_00461bb0(pvVar4,uVar9,uVar2);
          F_005aa640(puVar7 + 1,uVar2);
          uVar2 = *(ushort *)(pAVar8 + 4) / 10;
          uVar6 = (uint)*(ushort *)(pAVar8 + 4) % 10;
          uVar9 = 0xee1;
          pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4))));
          uVar2 = F_00461c60(pvVar4,uVar9,uVar2,uVar6);
          F_005aa640(puVar7 + 3,uVar2);
          AVar1 = pAVar8[7];
          uVar2 = (*(uint *)(gen_frame + 0x10)) << 0x10;
          F_005a2710(puVar7 + 5,4);
          puVar7[6] = (byte)AVar1 | uVar2;
          AVar1 = pAVar8[6];
          F_005a2710(puVar7 + 7,3);
          puVar7[8] = (byte)AVar1 + 180000;
        }
        uVar2 = (*(uint *)(gen_frame + 0x10)) + 1;
        puVar7 = puVar7 + 0x10;
        pAVar8 = pAVar8 + 0xc;
        (*(uint *)(gen_frame + 0x10)) = uVar2;
      } while (uVar2 < 6);
      this[0x58] = (undefined1)0x0;
      piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
      ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,*(undefined4 *)(this + 8),0x31,((int *)(gen_frame + 0x18)));
      puVar7 = ((uint *)(gen_frame + 0x1a0));
      iVar5 = 0x30;
      do {
        puVar7 = puVar7 + -2;
        uVar2 = F_005a2670(puVar7);
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
    }
  }
  F_00c47745(((uint *)(gen_frame + 0x1a0))[6] ^ (uint)(uint)(gen_frame + 0x1bc));
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentGatheringNote::vf3 */
uint F_0076d510(unsigned int gen_a0)
{
  GEN_ENTER(0x76d510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  F_00a72450(&REFG(undefined, 0x14ab744));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  return 0;
}

/* ref: FUN_0076d560 */
uint F_0076d560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76d560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  uVar3 = 0;
  do {
    uVar1 = F_00a6ba60(iVar2);
    if (uVar1 != 0) {
      *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) | 1 << ((byte)uVar3 & 0x1f);
    }
    if (10 < uVar1) {
      *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) | 2 << ((byte)uVar3 & 0x1f);
    }
    uVar3 = uVar3 + 2;
    iVar2 = iVar2 + 1;
  } while (uVar3 < 4);
  **(undefined4 * PTR32 *)(param_2 + 0x20) = 0x20;
  *(undefined1 *)(param_2 + 0x1d) = 1;
  if (*((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 4))) != *(int *)((int)this + 0x20)) {
    *((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 4))) = *(int *)((int)this + 0x20);
    *(undefined1 *)(param_2 + 0x1d) = 1;
  }
  return param_2;
}

/* ref: FUN_0076d5d0 */
uint F_0076d5d0(unsigned int gen_a0)
{
  GEN_ENTER(0x76d5d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,0x16)));
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,0x19);
  if ((uVar2 != 0) && (this_00 != (undefined *)0x0)) {
    F_0076d560(this,&REFG(undefined, 0x14ab744),uVar2);
    iVar3 = 0;
    do {
      uVar6 = 0;
      uVar5 = 1;
      uVar4 = 0;
      uVar2 = F_00a6b940(iVar3);
      F_00431250(this_00,iVar3 + 2,uVar2,uVar4,uVar5,uVar6);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 4);
    return 8;
  }
  return 0;
}

/* ref: FUN_0076d650 */
uint F_0076d650(unsigned int gen_a0)
{
  GEN_ENTER(0x76d650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int local_8;
  
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,0x19);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,0x16)));
  if (((uVar3 != 0) && (this_00 != (undefined *)0x0)) && (*(int *)((int)this + 0x20) != 0)) {
    uVar4 = F_00a66ba0(&REFG(undefined, 0x14ab744),*(undefined4 *)((int)this + 0x24));
    if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 8))) != uVar4) {
      *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + 8))) = uVar4;
      *(undefined1 *)(uVar3 + 0x1d) = 1;
    }
    iVar6 = 0;
    if (0 < (int)uVar4) {
      local_8 = 0x10;
      do {
        uVar9 = 0;
        uVar8 = 1;
        uVar7 = 0;
        uVar5 = F_00a6b970(iVar6);
        F_00431250(this_00,iVar6 + 6,uVar5,uVar7,uVar8,uVar9);
        bVar1 = F_00a66bc0(*(undefined4 *)((int)this + 0x24),iVar6);
        if (*((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + local_8))) != (uint)bVar1) {
          *((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + local_8))) = (uint)bVar1;
          *(undefined1 *)(uVar3 + 0x1d) = 1;
        }
        local_8 = local_8 + 4;
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)uVar4);
    }
    return (uint)(0 < (int)uVar4);
  }
  return 0;
}

/* ref: FUN_0076d760 */
uint F_0076d760(unsigned int gen_a0)
{
  GEN_ENTER(0x76d760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,0x19);
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,0x16)));
  piVar1 = REFG(int * PTR32, 0x14ab76c);
  if (((uVar2 != 0) && (this_00 != (undefined *)0x0)) && (*(int *)((int)this + 0x20) != 0)) {
    local_10 = (uint)*((byte *)GEN_TOP((REFG(int * PTR32, 0x14ab76c) + 1)));
    if (0x1e < local_10) {
      local_10 = 0x1e;
    }
    if (*((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0xb0))) != local_10) {
      *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0xb0))) = local_10;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
    local_8 = 0;
    if (local_10 != 0) {
      local_c = 0;
      local_14 = 0xc0;
      do {
        iVar4 = *piVar1 + local_c;
        uVar8 = 0;
        uVar7 = 1;
        uVar5 = (uint)*(byte *)(iVar4 + 0xc1) << 0x10 | (uint)*(byte *)(iVar4 + 0xc0);
        uVar6 = 0;
        uVar3 = F_0042a990(iVar4 + 0x10);
        F_00431250(this_00,local_8 + 0x2e,uVar3,uVar6,uVar7,uVar8);
        uVar3 = *(uint *)(iVar4 + 0xb8) & ((int)*(uint *)(iVar4 + 0xb8) < 0) - 1;
        if (*((uint *)GEN_TOP((local_14 + -4 + *(int *)(uVar2 + 0x20)))) != uVar3) {
          *((uint *)GEN_TOP((local_14 + -4 + *(int *)(uVar2 + 0x20)))) = uVar3;
          *(undefined1 *)(uVar2 + 0x1d) = 1;
        }
        if (*((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + local_14))) != (uint)*(byte *)(iVar4 + 0xc2)) {
          *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + local_14))) = (uint)*(byte *)(iVar4 + 0xc2);
          *(undefined1 *)(uVar2 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((local_14 + -8 + *(int *)(uVar2 + 0x20)))) != *(int *)(iVar4 + 0xbc)) {
          *((int *)GEN_TOP((local_14 + -8 + *(int *)(uVar2 + 0x20)))) = *(int *)(iVar4 + 0xbc);
          *(undefined1 *)(uVar2 + 0x1d) = 1;
        }
        if (*((uint *)GEN_TOP((local_14 + 4 + *(int *)(uVar2 + 0x20)))) != uVar5) {
          *((uint *)GEN_TOP((local_14 + 4 + *(int *)(uVar2 + 0x20)))) = uVar5;
          *(undefined1 *)(uVar2 + 0x1d) = 1;
        }
        local_c = local_c + 0xc4;
        local_8 = local_8 + 1;
        local_14 = local_14 + 0x10;
      } while (local_8 < (int)local_10);
    }
    return 2;
  }
  return 0;
}

/* ref: FUN_0076d8e0 */
uint F_0076d8e0(unsigned int gen_a0)
{
  GEN_ENTER(0x76d8e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x24);
  if ((int)uVar1 < 4) {
    *(undefined2 *)((int)this + uVar1 * 4 + 0x10) = *(undefined2 *)((int)this + 0x28);
    *(undefined2 *)((int)this + uVar1 * 4 + 0x12) = *(undefined2 *)((int)this + 0x2c);
  }
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentGearSet::vf11 */
uint F_0076d930(void)
{
  GEN_ENTER(0x76d930u, 0u, 0u, 0u, 0u);
  byte bVar1;
  
  bVar1 = F_00a37c00(&REFG(undefined, 0x14a4230));
  return (uint)(bVar1 != 0);
}

/* ref: FUN_0076d950 */
byte F_0076d950(unsigned int gen_a0)
{
  GEN_ENTER(0x76d950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x34))))(*(int * PTR32 *)((int)this + 4))));
  F_0044bfc0(this_00,100);
  return 0;
}

/* ref: FUN_0076d970 */
byte F_0076d970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76d970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  int * piVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  piVar1 = *(int * PTR32 *)((int)this + 4);
  piVar3 = piVar1;
  uVar2 = F_0042ce40(((undefined1 *)(gen_frame + 0x4)),"/gearset view %d",param_1 + 1);
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1)));
  F_00abefa0(this_00,uVar2,piVar3);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: FUN_0076d9d0 */
byte F_0076d9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76d9d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  int iVar2;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x54))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x34))))(*(int * PTR32 *)((int)this + 4));
  uVar1 = F_0043b3e0(uVar1,param_1);
  if ((*(byte *)(uVar1 + 0x39) & 1) != 0) {
    if (*(int *)(uVar1 + 0x34) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(uVar1 + 0x34) + 0xf550;
    }
    F_00434720(this_00,iVar2,uVar1 + 4,0x200000,param_1);
  }
  return 0;
}

/* ref: FUN_0076da30 */
uint F_0076da30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76da30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4))));
  F_004593f0(this_00,param_1);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
  *(byte *)(uVar1 + 0x230bf) = *(byte *)(uVar1 + 0x230bf) | 2;
  return uVar1;
}

/* ref: FUN_0076da70 */
uint F_0076da70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76da70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4))));
  F_004594a0(this_00,param_1,param_2);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
  *(byte *)(uVar1 + 0x230bf) = *(byte *)(uVar1 + 0x230bf) | 2;
  return uVar1;
}

/* ref: FUN_0076dab0 */
unsigned int F_0076dab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76dab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4))));
  F_0043b110(this_00,param_1);
  return 0;
}

/* ref: FUN_0076dad0 */
uint F_0076dad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76dad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x34))))(*(int * PTR32 *)((int)this + 4));
  uVar2 = F_0043b3e0(uVar2,param_1);
  uVar4 = (uint)((*(byte *)(uVar2 + 0x39) & 2) != 0);
  pbVar3 = (byte *)(uVar2 + 0x50);
  iVar5 = 7;
  do {
    bVar1 = pbVar3[-0x10];
    if ((bVar1 & 1) != 0) {
      uVar4 = uVar4 | 2;
    }
    if ((bVar1 & 2) != 0) {
      uVar4 = uVar4 | 4;
    }
    if ((bVar1 & 4) != 0) {
      uVar4 = uVar4 | 8;
    }
    bVar1 = *pbVar3;
    if ((bVar1 & 1) != 0) {
      uVar4 = uVar4 | 2;
    }
    if ((bVar1 & 2) != 0) {
      uVar4 = uVar4 | 4;
    }
    if ((bVar1 & 4) != 0) {
      uVar4 = uVar4 | 8;
    }
    pbVar3 = pbVar3 + 0x20;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return uVar4;
}

/* ref: FUN_0076db50 */
unsigned int F_0076db50(unsigned int gen_a0)
{
  GEN_ENTER(0x76db50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)((int)this + 0x6c) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x6c),0);
    *(undefined4 *)((int)this + 0x6c) = 0;
  }
  return 0;
}

/* ref: FUN_0076db80 */
uint F_0076db80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76db80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x70);
  if ((uVar2 != 0xffffffff) && (uVar2 == param_1)) {
    if (*(int *)((int)this + 0x6c) != 0) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x6c),0);
      *(undefined4 *)((int)this + 0x6c) = 0;
    }
    *(undefined4 *)((int)this + 0x70) = 0xffffffff;
  }
  return uVar2;
}

/* ref: FUN_0076dbd0 */
uint F_0076dbd0(unsigned int gen_a0)
{
  GEN_ENTER(0x76dbd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined * pvVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint local_18;
  int local_14;
  byte * local_c;
  
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,0x40);
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,0x3b);
  uVar7 = uVar5;
  if ((uVar4 != 0) && (uVar5 != 0)) {
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 0x134e;
    pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar7 = F_0043bd00(pvVar6,uVar12,uVar13,uVar14);
    if (uVar7 != **(uint * PTR32 *)(uVar5 + 0x20)) {
      **(uint * PTR32 *)(uVar5 + 0x20) = uVar7;
      *(undefined1 *)(uVar5 + 0x1d) = 1;
    }
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 0x1350;
    pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar7 = F_0043bd00(pvVar6,uVar12,uVar13,uVar14);
    if (uVar7 != *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 4)))) {
      *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 4))) = uVar7;
      *(undefined1 *)(uVar5 + 0x1d) = 1;
    }
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 0x134f;
    pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar7 = F_0043bd00(pvVar6,uVar12,uVar13,uVar14);
    if (uVar7 != *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 8)))) {
      *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 8))) = uVar7;
      *(undefined1 *)(uVar5 + 0x1d) = 1;
    }
    uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x34))))(*(int * PTR32 *)((int)this + 4));
    uVar7 = F_0043b3e0(uVar7,*(undefined4 *)((int)this + 0x70));
    local_c = (byte *)(uVar7 + 0x40);
    local_14 = 0xc;
    iVar10 = 8;
    piVar3 = (int *)((int)this + 0x74);
    do {
      iVar2 = *(int *)(local_c + 8);
      local_18 = 0;
      if (piVar3[0x16] != iVar2) {
        ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + iVar10))) != 0) {
          *((undefined4 *)GEN_TOP((*(int *)(uVar4 + 0x20) + iVar10))) = 0;
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        uVar8 = F_00ab24a0(iVar2);
        if (uVar8 != 0) {
          ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3,iVar2,uVar8);
        }
      }
      bVar11 = *(char *)((int)piVar3 + 0x65) != '\0';
      if (bVar11) {
        local_18 = (uint)local_c[0xc];
      }
      bVar1 = *local_c;
      if ((bVar1 & 1) == 0) {
        if ((bVar1 & 2) == 0) {
          iVar9 = (bVar1 >> 2 & 1) * 8;
        }
        else {
          iVar9 = 4;
        }
      }
      else {
        iVar9 = 2;
      }
      if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + -8 + iVar10))) != iVar2) {
        *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + -8 + iVar10))) = iVar2;
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + -4 + iVar10))) != piVar3[0x17]) {
        *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + -4 + iVar10))) = piVar3[0x17];
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      uVar8 = (uint)bVar11 | local_18 * 2;
      if (*((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + iVar10))) != uVar8) {
        *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + iVar10))) = uVar8;
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4 + iVar10))) != iVar9) {
        *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4 + iVar10))) = iVar9;
        *(undefined1 *)(uVar4 + 0x1d) = 1;
      }
      uVar8 = F_0042a990(piVar3 + 1);
      if (uVar8 != *((uint *)GEN_TOP((local_14 + *(int *)(uVar5 + 0x20))))) {
        *((uint *)GEN_TOP((local_14 + *(int *)(uVar5 + 0x20)))) = uVar8;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      local_c = local_c + 0x10;
      local_14 = local_14 + 4;
      iVar10 = iVar10 + 0x10;
      piVar3 = piVar3 + 0x1a;
    } while (iVar10 < 0xe8);
    if (((*(byte *)(uVar7 + 0x39) & 2) != 0) &&
       (uVar7 = *(uint *)(uVar4 + 0x20), *(int *)(uVar7 + 0xc) != 1)) {
      *(undefined4 *)(uVar7 + 0xc) = 1;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
  }
  return uVar7;
}

/* ref: FUN_0076de10 */
uint F_0076de10(unsigned int gen_a0)
{
  GEN_ENTER(0x76de10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (&REFG(undefined4, 0x132818c))[(int)(param_1)];
}

/* ref: FUN_0076de20 */
uint F_0076de20(unsigned int gen_a0)
{
  GEN_ENTER(0x76de20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&REFG(undefined4, 0x132818c))[(int)(uVar1)]) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 6);
  return 0xffffffff;
}

/* ref: Client::UI2::Agent::AgentBuddy::vf3 */
uint F_0076de60(unsigned int gen_a0)
{
  GEN_ENTER(0x76de60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  undefined * pAVar5;
  int local_8;
  
  pAVar5 = this + 0x10;
  iVar4 = 2;
  do {
    ((code *)*(gen_code32 *)(*(int *)pAVar5 + 4))(pAVar5);
    *(int *)(pAVar5 + 0x68) = 0;
    pAVar5 = pAVar5 + 0x6c;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  pAVar5 = this + 0xe8;
  iVar4 = 8;
  do {
    F_0042ccf0(pAVar5,&REFG(undefined * PTR32, 0x12fd328));
    pAVar5 = pAVar5 + 0x54;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  pAVar5 = this + 0x388;
  iVar4 = 3;
  do {
    F_0042ccf0(pAVar5,&REFG(undefined * PTR32, 0x12fd328));
    pAVar5 = pAVar5 + 0x54;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  pAVar5 = this + 0x484;
  local_8 = 3;
  do {
    iVar4 = 10;
    do {
      F_0042ccf0(pAVar5,&REFG(undefined * PTR32, 0x12fd328));
      pAVar5 = pAVar5 + 0x54;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  uVar1 = *(undefined4 *)(this + 0xeb4);
  *(undefined4 *)(this + 0xeb0) = 0xffffffff;
  *(undefined4 *)(this + 0xeb4) = 0;
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,uVar1,0);
  uVar1 = *(undefined4 *)(this + 0xeb8);
  *(undefined4 *)(this + 0xeb8) = 0;
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,uVar1,0);
  uVar1 = *(undefined4 *)(this + 8);
  *(undefined4 *)(this + 8) = 0;
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,uVar1,0);
  return uVar3;
}

/* ref: FUN_0076df70 */
byte F_0076df70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x76df70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  int param_5 = (int)gen_a4;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (param_5 != 0) {
    if (param_4[0x16] != param_5) {
      uVar2 = F_00ab24a0(param_5);
      if (uVar2 == 0) {
        return 0;
      }
      ((code *)*(gen_code32 *)(*param_4 + 8))(param_4,param_5,uVar2);
      param_4[0x1a] = *(int *)(uVar2 + 0x28);
    }
    bVar1 = *(byte *)(param_4 + 0x19);
    uVar2 = F_00a41080(&REFG(undefined, 0x14a4230),param_5,0,1,1);
    uVar3 = F_0042a990(param_4 + 1);
    F_005a2710(param_3,6);
    *(uint *)((int)param_3 + 4) = uVar3;
    iVar4 = param_4[0x17];
    F_005a2710(param_1,3);
    *(int *)((int)param_1 + 4) = iVar4;
    F_005a2710((undefined *)((int)param_1 + 0x10),3);
    *(uint *)((int)param_1 + 0x14) = uVar2 << 0x10 | (uint)bVar1;
    if ((int)uVar2 < 1) {
      iVar4 = 0;
    }
    else {
      iVar4 = (1 < param_4[0x1a]) + 4;
    }
    F_005a2710((undefined *)((int)param_1 + 0x18),3);
    *(int *)((int)param_1 + 0x1c) = iVar4;
  }
  F_005a2710(param_2,4);
  *(int *)((int)param_2 + 4) = param_5;
  return 1;
}

/* ref: FUN_0076e060 */
uint F_0076e060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76e060u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00ab2840(param_2);
  uVar3 = 0;
  if (uVar2 != 0) {
    F_005a2710(param_1,4);
    *(uint *)((int)param_1 + 4) = param_2 | 0x8000000;
    uVar1 = *(ushort *)(uVar2 + 0x9a);
    F_005a2710((undefined *)((int)param_1 + 0x10),4);
    *(uint *)((int)param_1 + 0x14) = (uint)uVar1;
    uVar3 = F_005a2710((undefined *)((int)param_1 + 0x18),4);
    *(undefined4 *)((int)param_1 + 0x1c) = 1;
  }
  return uVar3;
}

/* ref: FUN_0076e0c0 */
uint F_0076e0c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76e0c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = F_00ab2c30(param_2);
  uVar4 = 0;
  if (uVar3 != 0) {
    F_005a2710(param_1,4);
    *(uint *)((int)param_1 + 4) = param_2 | 0x4000000;
    uVar4 = F_0042a990(param_2 * 0x54 + 0xe8 + (int)this);
    F_005a2710((undefined *)((int)param_1 + 8),6);
    *(uint *)((int)param_1 + 0xc) = uVar4;
    uVar1 = *(undefined4 *)(uVar3 + 8);
    F_005a2710((undefined *)((int)param_1 + 0x10),4);
    *(undefined4 *)((int)param_1 + 0x14) = uVar1;
    bVar2 = REFG(undefined1, 0x14b4ec2) >> 2;
    uVar4 = F_005a2710((undefined *)((int)param_1 + 0x18),4);
    *(uint *)((int)param_1 + 0x1c) = bVar2 & 1;
  }
  return uVar4;
}

/* ref: FUN_0076e150 */
uint F_0076e150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x76e150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  int param_5 = (int)gen_a5;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  F_005a2710((undefined *)((int)param_1 + 8),4);
  *(uint *)((int)param_1 + 0xc) = (uint)((int)param_4 < (int)(param_3 & 0xff));
  uVar2 = F_00ab2cc0(param_4 + 1);
  uVar3 = 0;
  if (uVar2 != 0) {
    bVar1 = *(byte *)(uVar2 + 6);
    F_005a2710((undefined *)((int)param_1 + 0x10),4);
    *(uint *)((int)param_1 + 0x14) = (uint)bVar1;
    if ((param_5 < (int)(uint)*(byte *)(uVar2 + 6)) || (param_4 != (param_3 & 0xff))) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    F_005a2710(param_1,4);
    *(undefined4 *)((int)param_1 + 4) = uVar5;
    uVar3 = (uint)*(ushort *)(uVar2 + param_2 * 2);
    param_3 = 0;
    if (*(char *)(uVar2 + 7) == '\0') {
      uVar2 = uVar3 | 0x1000000;
      uVar3 = F_00ab1f90(uVar3);
      if (uVar3 != 0) {
        param_3 = *(uint *)(uVar3 + 8);
      }
    }
    else {
      uVar4 = F_00ab1ed0(uVar3);
      uVar2 = uVar3;
      if (uVar4 != 0) {
        param_3 = (uint)*(ushort *)(uVar4 + 8);
      }
    }
    uVar3 = F_0042a990((param_4 + param_2 * 10) * 0x54 + 0x484 + (int)this);
    F_005a2710((undefined *)((int)param_1 + 0x20),6);
    *(uint *)((int)param_1 + 0x24) = uVar3;
    F_005a2710((undefined *)((int)param_1 + 0x18),4);
    *(uint *)((int)param_1 + 0x1c) = uVar2;
    uVar3 = F_005a2710((undefined *)((int)param_1 + 0x28),4);
    *(uint *)((int)param_1 + 0x2c) = param_3;
  }
  return uVar3;
}

/* ref: FUN_0076e270 */
byte F_0076e270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76e270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  byte bVar2;
  uint * puVar3;
  undefined * this_00;
  uint uVar4;
  uint * puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  ((uint *)(gen_frame + 0xc))[3] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  ((uint *)(gen_frame + 0xc))[0] = 0x137f;
  ((uint *)(gen_frame + 0xc))[1] = 0x1380;
  ((uint *)(gen_frame + 0xc))[2] = 0x1381;
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0x20;
  puVar5 = (uint *)(param_2 + 0x82c);
  do {
    bVar2 = F_00a6b340(param_1,(*(int *)(gen_frame + 0x0)));
    F_005a2710(puVar5 + -5,4);
    puVar5[-4] = (uint)bVar2;
    F_005a2710(puVar5 + -3,4);
    puVar5[-2] = 1;
    puVar3 = (uint *)F_00ab2c60((uint)bVar2);
    if ((puVar3 == (uint *)0x0) || (bVar2 == 0)) {
      uVar4 = ((uint *)(gen_frame + 0xc))[(int)((*(int *)(gen_frame + 0x0)))];
      uVar7 = 0;
      uVar6 = 0;
      this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      uVar4 = F_0043bd00(this_00,uVar4,uVar6,uVar7);
      F_005a2710(puVar5 + -1,6);
      *puVar5 = uVar4;
    }
    else {
      uVar4 = *puVar3;
      F_005a2710(puVar5 + -1,6);
      *puVar5 = (uVar4 & 0xffffff) + (int)puVar3;
      uVar1 = *(ushort *)((*(int *)(gen_frame + 0x4)) + (int)puVar3);
      F_005a2710(puVar5 + 1,4);
      puVar5[2] = (uint)uVar1;
    }
    (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 2;
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
    puVar5 = puVar5 + 8;
  } while ((*(int *)(gen_frame + 0x4)) < 0x26);
  F_00c47745(((uint *)(gen_frame + 0xc))[3] ^ (uint)(uint)(gen_frame + 0x1c));
  return 1;
}

/* ref: FUN_0076e660 */
uint F_0076e660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76e660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  ushort uVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  undefined * pvVar5;
  uint uVar6;
  uint uVar7;
  uint * puVar8;
  int * piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  ((uint *)(gen_frame + 0x10))[6] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  ((uint *)(gen_frame + 0x10))[0] = 0x1356;
  ((uint *)(gen_frame + 0x10))[1] = 0x1358;
  ((uint *)(gen_frame + 0x10))[2] = 0x135a;
  ((uint *)(gen_frame + 0x10))[3] = 0x1357;
  ((uint *)(gen_frame + 0x10))[4] = 0x1359;
  ((uint *)(gen_frame + 0x10))[5] = 0x135b;
  F_005a2710(param_1,3);
  uVar7 = ((uint *)(gen_frame + 0x10))[(int)(param_2)];
  *(int *)((int)param_1 + 4) = param_2;
  uVar11 = 0;
  uVar10 = 0;
  pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar6 = F_0043bd00(pvVar5,uVar7,uVar10,uVar11);
  F_005a2710((undefined *)((int)param_1 + 8),6);
  uVar7 = ((uint *)(gen_frame + 0x10))[(int)(param_2 + 3)];
  *(uint *)((int)param_1 + 0xc) = uVar6;
  uVar11 = 0;
  uVar10 = 0;
  pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar7 = F_0043bd00(pvVar5,uVar7,uVar10,uVar11);
  F_005a2710((undefined *)((int)param_1 + 0x10),6);
  *(uint *)((int)param_1 + 0x14) = uVar7;
  cVar2 = REFG(char, 0x14ab29a);
  (*(int *)(gen_frame + 0x4)) = 0;
  bVar3 = F_00a6b340(&REFG(undefined, 0x14ab584),param_2);
  uVar7 = F_00ab00b0();
  (*(uint *)(gen_frame + 0x8)) = 1;
  if (1 < (int)uVar7) {
    piVar9 = (int *)((int)param_1 + 0x3c);
    do {
      bVar4 = F_00a6b2e0(&REFG(undefined, 0x14ab584),(*(uint *)(gen_frame + 0x8)));
      if (((bVar4 != 0) && (puVar8 = (uint *)F_00ab2c60((*(uint *)(gen_frame + 0x8))), puVar8 != (uint *)0x0)) &&
         ((*(char *)((int)puVar8 + 0x26) == '\0' || (*(char *)((int)puVar8 + 0x26) == cVar2)))) {
        F_005a2710(piVar9 + -5,4);
        piVar9[-4] = (*(uint *)(gen_frame + 0x8));
        F_005a2710(piVar9 + -3,4);
        piVar9[-2] = (uint)(bVar3 == (*(uint *)(gen_frame + 0x8)));
        uVar6 = *puVar8;
        F_005a2710(piVar9 + -1,6);
        *piVar9 = (uVar6 & 0xffffff) + (int)puVar8;
        uVar1 = *(ushort *)((int)puVar8 + param_2 * 2 + 0x20);
        F_005a2710(piVar9 + 1,4);
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
        piVar9[2] = (uint)uVar1;
        piVar9 = piVar9 + 8;
      }
      (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
    } while ((int)(*(uint *)(gen_frame + 0x8)) < (int)uVar7);
  }
  F_005a2710((undefined *)((int)param_1 + 0x18),3);
  *(int *)((int)param_1 + 0x1c) = (*(int *)(gen_frame + 0x4));
  uVar11 = 0x32;
  uVar10 = 0x7fc;
  pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar7 = F_00461c60(pvVar5,uVar10,(*(int *)(gen_frame + 0x4)),uVar11);
  F_0042e430((undefined *)((int)this + 0xe5c),uVar7);
  uVar7 = F_0042a990((undefined *)((int)this + 0xe5c));
  uVar6 = F_005a2710((undefined *)((int)param_1 + 0x20),6);
  *(uint *)((int)param_1 + 0x24) = uVar7;
  F_00c47745(((uint *)(gen_frame + 0x10))[6] ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar6;
}

/* ref: FUN_0076e850 */
unsigned int F_0076e850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76e850u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  
  if (param_1 < 3) {
    bVar1 = F_00a6b340(&REFG(undefined, 0x14ab584),param_1);
    if (param_2 == bVar1) {
      F_00a6b410(param_1,0);
      return 0;
    }
    F_00a6b410(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_0076e890 */
unsigned int F_0076e890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76e890u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint * puVar1;
  undefined * pvVar2;
  int * piVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  if ((param_1 & 0x80000) != 0) {
    puVar1 = (uint *)F_00ab2c30(param_2);
    iVar4 = (*puVar1 & 0xffffff) + (int)puVar1;
    uVar5 = puVar1[2];
    pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x54))))(*(int * PTR32 *)((int)this + 4))));
    F_00434720(pvVar2,uVar5,iVar4,param_1,param_2);
    return 0;
  }
  if ((param_1 & 0x1000000) != 0) {
    puVar1 = (uint *)F_00ab2840(param_2);
    iVar4 = (*puVar1 & 0xffffff) + (int)puVar1;
    uVar5 = (uint)*(ushort *)((int)puVar1 + 0x9a);
    pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x54))))(*(int * PTR32 *)((int)this + 4))));
    F_00434720(pvVar2,uVar5,iVar4,param_1,param_2);
    return 0;
  }
  if ((param_1 & 0x10000) != 0) {
    iVar4 = 0;
    piVar3 = (int *)((int)this + 0x68);
    while (*piVar3 != param_2) {
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 0x1b;
      if (1 < iVar4) {
        return 0;
      }
    }
    iVar4 = iVar4 * 0x6c + 0x10 + (int)this;
    if (iVar4 != 0) {
      piVar3 = *(int * PTR32 *)((int)this + 4);
      uVar5 = F_0042a990(iVar4 + 4);
      uVar6 = *(undefined4 *)(iVar4 + 0x5c);
      pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3)));
      F_00434720(pvVar2,uVar6,uVar5,param_1,param_2);
    }
  }
  return 0;
}

/* ref: FUN_0076e980 */
uint F_0076e980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x76e980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined1 *)((int)this + 0x20) = (undefined1)param_3;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentHowTo::vf3 */
unsigned int F_0076e9a0(unsigned int gen_a0)
{
  GEN_ENTER(0x76e9a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined4 *)(this + 0x50) = 0;
  return 0;
}

/* ref: FUN_0076e9e0 */
uint F_0076e9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x76e9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar1 != '\0') {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))
                      (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_0076ea00 */
uint F_0076ea00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76ea00u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  short sVar1;
  int iVar2;
  short * psVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 != 0) {
    iVar2 = 0;
    psVar3 = (short *)(param_1 + 4);
    do {
      if (((char)param_2 == '\0') || (*(short *)(param_1 + 0xe) == 0)) {
        sVar1 = *psVar3;
      }
      else {
        sVar1 = psVar3[5];
      }
      if (sVar1 == 0) {
        return uVar4;
      }
      iVar2 = iVar2 + 1;
      uVar4 = uVar4 + 1;
      psVar3 = psVar3 + 1;
    } while (iVar2 < 5);
  }
  return uVar4;
}

/* ref: FUN_0076ea40 */
uint F_0076ea40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76ea40u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if (((char)param_3 != '\0') && (*(short *)(param_1 + 0xe) != 0)) {
      uVar1 = F_00ab3b70((int)*(short *)(param_1 + 0xe + param_2 * 2));
      return uVar1;
    }
    uVar1 = F_00ab3b70((int)*(short *)(param_1 + 4 + param_2 * 2));
  }
  return uVar1;
}

/* ref: FUN_0076ea90 */
uint F_0076ea90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76ea90u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  char cVar1;
  uint uVar2;
  char cVar3;
  
  uVar2 = 0;
  if (param_1 != 0) {
    cVar1 = *(char *)(param_1 + 0x11);
    if ((cVar1 == '\0') ||
       (((cVar3 = (char)param_2, cVar1 != '\x01' && (cVar3 = (char)param_3, cVar1 != '\x02')) ||
        (cVar3 == '\x01')))) {
      uVar2 = *(uint *)(param_1 + 0xc);
    }
    else {
      if (cVar3 == '\x02') {
        return *(int *)(param_1 + 0xc) + 3000;
      }
      if (cVar3 == '\x03') {
        return *(int *)(param_1 + 0xc) + 6000;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_0076eae0 */
uint F_0076eae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76eae0u, gen_a0, gen_a1, gen_a2, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  char cVar1;
  char cVar2;
  uint * puVar3;
  
  if (param_1 == (uint *)0x0) {
    return 0x10bdbaf;
  }
  cVar1 = *(char *)((int)param_1 + 0x12);
  puVar3 = param_1;
  if ((cVar1 != '\0') &&
     (((cVar2 = (char)param_2, cVar1 == '\x01' || (cVar2 = (char)param_3, cVar1 == '\x02')) &&
      (cVar2 != '\x01')))) {
    if (cVar2 == '\x02') {
      puVar3 = param_1 + 1;
    }
    else if (cVar2 == '\x03') {
      return (int)param_1 + (param_1[2] & 0xffffff) + 8;
    }
  }
  return (*puVar3 & 0xffffff) + (int)puVar3;
}

/* ref: FUN_0076eb40 */
unsigned int F_0076eb40(unsigned int gen_a0)
{
  GEN_ENTER(0x76eb40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  F_00c48350(*(undefined * PTR32 *)((int)this + 0xe4),0,*(int *)((int)this + 0xe0) * 4);
  *(undefined4 *)((int)this + 0xdc) = 0;
  **(uint * PTR32 *)((int)this + 0xe4) = **(uint * PTR32 *)((int)this + 0xe4) | 0x10000000;
  *(int *)((int)this + 0xdc) = *(int *)((int)this + 0xdc) + 1;
  **(uint * PTR32 *)((int)this + 0xe4) = **(uint * PTR32 *)((int)this + 0xe4) | 0x8000000;
  *(int *)((int)this + 0xdc) = *(int *)((int)this + 0xdc) + 1;
  puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0xe4) + 4)));
  *puVar1 = *puVar1 | 0x10;
  *(int *)((int)this + 0xdc) = *(int *)((int)this + 0xdc) + 1;
  puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0xe4) + 4)));
  *puVar1 = *puVar1 | 8;
  *(int *)((int)this + 0xdc) = *(int *)((int)this + 0xdc) + 1;
  **(uint * PTR32 *)((int)this + 0xe4) = **(uint * PTR32 *)((int)this + 0xe4) | 0x80;
  *(int *)((int)this + 0xdc) = *(int *)((int)this + 0xdc) + 1;
  **(uint * PTR32 *)((int)this + 0xe4) = **(uint * PTR32 *)((int)this + 0xe4) | 0x200;
  *(int *)((int)this + 0xdc) = *(int *)((int)this + 0xdc) + 1;
  **(uint * PTR32 *)((int)this + 0xe4) = **(uint * PTR32 *)((int)this + 0xe4) | 0x20000000;
  *(int *)((int)this + 0xdc) = *(int *)((int)this + 0xdc) + 1;
  **(uint * PTR32 *)((int)this + 0xe4) = **(uint * PTR32 *)((int)this + 0xe4) | 0x100;
  *(int *)((int)this + 0xdc) = *(int *)((int)this + 0xdc) + 1;
  puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0xe4) + 4)));
  *puVar1 = *puVar1 | 0x200;
  *(int *)((int)this + 0xdc) = *(int *)((int)this + 0xdc) + 1;
  **(uint * PTR32 *)((int)this + 0xe4) = **(uint * PTR32 *)((int)this + 0xe4) | 0x80000000;
  *(int *)((int)this + 0xdc) = *(int *)((int)this + 0xdc) + 1;
  return 0;
}

/* ref: FUN_0076ec40 */
byte F_0076ec40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76ec40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return 1;
}

/* ref: FUN_0076ec50 */
byte F_0076ec50(unsigned int gen_a0)
{
  GEN_ENTER(0x76ec50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xac))(piVar1,*(undefined4 *)((int)this + 0xd0));
  return uVar2 == 4;
}

/* ref: FUN_0076ec80 */
uint F_0076ec80(unsigned int gen_a0)
{
  GEN_ENTER(0x76ec80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint * puVar1;
  
  puVar1 = (uint *)F_00ab2cf0(param_1 & 0xffff);
  if (puVar1 != (uint *)0x0) {
    return (*puVar1 & 0xffffff) + (int)puVar1;
  }
  return 0;
}

/* ref: FUN_0076ecb0 */
uint F_0076ecb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76ecb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return (uint)((*((uint *)GEN_TOP((*(int *)((int)this + 0xe4) + (param_1 >> 5) * 4))) &
                1 << ((byte)param_1 & 0x1f)) == 0);
}

/* ref: FUN_0076ece0 */
unsigned int F_0076ece0(unsigned int gen_a0)
{
  GEN_ENTER(0x76ece0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)((int)this + 0x5c);
  if (0 < iVar1) {
    *(undefined4 *)((int)this + 0x5c) = 0;
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,iVar1,0);
  }
  return 0;
}

/* ref: FUN_0076ed10 */
uint F_0076ed10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76ed10u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined1 gen_out[0x4];
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStackY_6e8 [1708];
  undefined4 uStackY_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 * local_28;
  byte local_21;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  uStack_30 = 1;
  uStack_34 = 0x76ed30;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),1);
  if (**(uint * PTR32 *)(param_1 + 0x20) != uVar1) {
    **(uint * PTR32 *)(param_1 + 0x20) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 2;
  uStack_34 = 0x76ed49;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),2);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 4))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 4))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 3;
  uStack_34 = 0x76ed64;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),3);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 8))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 8))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 4;
  uStack_34 = 0x76ed7f;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),4);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xc))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xc))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 5;
  uStack_34 = 0x76ed9a;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),5);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x10))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x10))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 6;
  uStack_34 = 0x76edb5;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),6);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x14))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x14))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x25;
  uStack_34 = 0x76edd0;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x25);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x18))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x18))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x2a;
  uStack_34 = 0x76edeb;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x2a);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x1c))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x1c))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x29;
  uStack_34 = 0x76ee06;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x29);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x20))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x20))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x27;
  uStack_34 = 0x76ee21;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x27);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x24))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x24))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x28;
  uStack_34 = 0x76ee3c;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x28);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x28))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x28))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x26;
  uStack_34 = 0x76ee57;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x26);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x2c))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x2c))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x16;
  uStack_34 = 0x76ee72;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x16);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x30))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x30))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x1b;
  uStack_34 = 0x76ee8d;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x1b);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x34))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x34))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x2c;
  uStack_34 = 0x76eea8;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x2c);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x38))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x38))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x15;
  uStack_34 = 0x76eec3;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x15);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x3c))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x3c))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x13;
  uStack_34 = 0x76eede;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x13);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x40))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x40))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x18;
  uStack_34 = 0x76eef9;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x18);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x44))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x44))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x14;
  uStack_34 = 0x76ef14;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x14);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x48))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x48))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x2d;
  uStack_34 = 0x76ef2f;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x2d);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x4c))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x4c))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x1d;
  uStack_34 = 0x76ef4a;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x1d);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x50))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x50))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x1e;
  uStack_34 = 0x76ef65;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x1e);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x54))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x54))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x1f;
  uStack_34 = 0x76ef80;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x1f);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x58))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x58))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x21;
  uStack_34 = 0x76ef9b;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x21);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x5c))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x5c))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x22;
  uStack_34 = 0x76efb6;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x22);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x60))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x60))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x2e;
  uStack_34 = 0x76efd1;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x2e);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 100))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 100))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x30;
  uStack_34 = 0x76efec;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x30);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x68))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x68))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x48;
  uStack_34 = 0x76f007;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x48);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x6c))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x6c))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x49;
  uStack_34 = 0x76f022;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x49);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x70))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x70))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x46;
  uStack_34 = 0x76f03d;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x46);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x74))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x74))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uStack_30 = 0x47;
  uStack_34 = 0x76f058;
  uVar1 = F_00a68510(&REFG(undefined1, 0x14ab070),0x47);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x78))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x78))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  iVar3 = 0x6c8;
  iVar2 = 0;
  local_21 = 0;
  local_20 = 1;
  local_1c = 2;
  local_18 = 3;
  local_14 = 4;
  local_10 = 5;
  local_c = 6;
  local_28 = auStackY_6e8;
  do {
    uStack_38 = *(undefined4 *)(local_28 + iVar3);
    uStackY_3c = 0x76f0b9;
    uVar1 = F_00a684d0(&REFG(undefined1, 0x14ab070),*(undefined4 *)(local_28 + iVar3));
    if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + iVar3))) != uVar1) {
      *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + iVar3))) = uVar1;
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x1c + iVar3))) != (uint)(byte)(&REFG(undefined1, 0x14ab294))[(int)(iVar2)]) {
      *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x1c + iVar3))) = (uint)(byte)(&REFG(undefined1, 0x14ab294))[(int)(iVar2)];
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    local_21 = local_21 + (&REFG(undefined1, 0x14ab294))[(int)(iVar2)];
    iVar3 = iVar3 + 4;
    iVar2 = iVar2 + 1;
  } while (iVar3 < 0x6e0);
  uStack_38 = 0x76f101;
  uVar1 = F_00a685c0(&REFG(undefined1, 0x14ab070));
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x6fc))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x6fc))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  uVar4 = (uint)local_21;
  uStack_38 = 0x76f124;
  uVar1 = F_00a68620(&REFG(undefined1, 0x14ab070));
  if ((int)(uVar1 - uVar4) < 0) {
    uVar1 = 0;
  }
  else {
    uStack_38 = 0x76f136;
    uVar1 = F_00a68620(&REFG(undefined1, 0x14ab070));
    uVar1 = uVar1 - uVar4;
  }
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x700))) != uVar1) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x700))) = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  F_00c47745(local_8 ^ (uint)(uint)(gen_out + 0x0));
  return uVar1;
}

/* ref: FUN_0076f160 */
uint F_0076f160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76f160u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined1 gen_out[0x4];
  float * pfVar1;
  float fVar2;
  double dVar3;
  uint uVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auStackY_58c [1300];
  undefined4 uStackY_78;
  int iStack_74;
  int iStack_70;
  undefined1 * local_60;
  uint local_5c;
  float local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  iVar8 = 0x538;
  local_54 = 1;
  local_50 = 2;
  local_4c = 3;
  local_48 = 4;
  local_44 = 5;
  local_40 = 6;
  local_3c = 7;
  local_38 = 0x1a;
  local_34 = 8;
  local_30 = 9;
  local_2c = 10;
  local_28 = 0xb;
  local_24 = 0xc;
  local_20 = 0xd;
  local_1c = 0xe;
  local_18 = 0xf;
  local_14 = 0x10;
  local_10 = 0x11;
  local_c = 0x12;
  local_60 = auStackY_58c;
  do {
    iVar6 = *(int *)(local_60 + iVar8);
    if (iVar6 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = iVar6 + 62000;
    }
    if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + iVar8))) != iVar7) {
      *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + iVar8))) = iVar7;
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    iStack_70 = iVar6;
    iStack_74 = 0x76f23e;
    uVar4 = F_00a683c0(&REFG(undefined1, 0x14ab070),iVar6);
    iStack_70 = iVar6;
    local_5c = uVar4;
    iStack_74 = 0x76f24c;
    fVar5 = gen_bits2f(F_00a68460(&REFG(undefined1, 0x14ab070),iVar6));
    iStack_70 = 0;
    iStack_74 = iVar6;
    local_58 = fVar5;
    uStackY_78 = 0x76f25c;
    uVar4 = F_00a68280(&REFG(undefined1, 0x14ab070),iVar6,0);
    fVar5 = local_58;
    if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x4c + iVar8))) != (uVar4 & 0xffff)) {
      *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x4c + iVar8))) = uVar4 & 0xffff;
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x98 + iVar8))) != local_5c) {
      *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x98 + iVar8))) = local_5c;
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    if (local_58 == 0.0) {
      iVar6 = 0;
    }
    else if ((int)local_5c < (int)gen_fl2bits(local_58)) {
      fVar2 = ((float)GEN_TOF((((float10)(int)local_5c * (float10)*(double *)&REFG(undefined, 0x1088118)) /
                     (float10)(int)gen_fl2bits(local_58))));
      local_58 = fVar2;
      dVar3 = (double)fVar2;
      if (dVar3 < 0.0) {
        iStack_70 = 0x76f2c3;
        iVar6 = (int)(dVar3 - REFG(double, 0x1088108));
      }
      else {
        iStack_70 = 0x76f2d0;
        iVar6 = (int)(dVar3 + REFG(double, 0x1088108));
      }
    }
    else {
      iVar6 = 100;
    }
    if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xe4 + iVar8))) != iVar6) {
      *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xe4 + iVar8))) = iVar6;
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    pfVar1 = ((float *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x130 + iVar8)));
    if (*((float *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x130 + iVar8))) != fVar5) {
      *pfVar1 = fVar5;
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    iVar8 = iVar8 + 4;
  } while (iVar8 < 0x584);
  F_00c47745(local_8 ^ (uint)(uint)(gen_out + 0x0));
  return (uint)pfVar1;
}

/* ref: FUN_0076f330 */
uint F_0076f330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76f330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int * piVar2;
  byte bVar3;
  undefined * pvVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  uVar15 = 0;
  uVar11 = *(undefined4 *)((int)this + 0xc4);
  uVar14 = 1;
  uVar13 = 0;
  uVar12 = 0x12;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = F_00461bb0(pvVar4,uVar12,uVar11);
  F_00431250(param_2,2,uVar5,uVar13,uVar14,uVar15);
  bVar3 = REFG(undefined1, 0x14b4eed) >> 1 & 1;
  uVar5 = (uint)(bVar3 != 0);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x6b4))) != uVar5) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x6b4))) = uVar5;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (bVar3 != 0) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0x17;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
    iVar10 = 0x13a;
    (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = &(*(undefined4 *)(gen_frame + 0x8));
    (*(int *)(gen_frame + 0x18)) = 2;
    do {
      uVar11 = *(*(undefined4 * PTR32 *)(gen_frame + 0x10));
      piVar2 = *(int * PTR32 *)((int)this + 4);
      uVar16 = 0;
      uVar15 = 1;
      uVar14 = 0;
      uVar13 = 2000;
      uVar5 = F_00a3c240(&REFG(undefined, 0x14a4230),uVar11);
      uVar12 = 0xdaf;
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2)));
      uVar5 = F_00461c60(pvVar4,uVar12,uVar5,uVar13);
      F_00431250(param_2,iVar10 + -2,uVar5,uVar14,uVar15,uVar16);
      piVar2 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 4);
      uVar15 = 0;
      uVar14 = 1;
      uVar13 = 0;
      uVar12 = 300;
      uVar5 = F_00a3c2b0(&REFG(undefined, 0x14a4230),uVar11);
      uVar11 = 0xdaf;
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2)));
      uVar5 = F_00461c60(pvVar4,uVar11,uVar5,uVar12);
      F_00431250(param_2,iVar10,uVar5,uVar13,uVar14,uVar15);
      (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 1;
      iVar10 = iVar10 + 1;
      iVar1 = (*(int *)(gen_frame + 0x18)) + -1;
      (*(int *)(gen_frame + 0x18)) = iVar1;
      this = (*(undefined * PTR32 *)(gen_frame + 0x14));
    } while (iVar1 != 0);
  }
  iVar10 = *(byte *)((int)this + 0xdd2) - 1;
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x6b8))) != iVar10) {
    *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x6b8))) = iVar10;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  (*(int *)(gen_frame + 0x18)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)0x6bc;
  do {
    bVar9 = (char)(*(int *)(gen_frame + 0x18)) + 1;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0xc)) + 0)) = bVar9;
    (*(undefined4 *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3),bVar9);
    uVar11 = (*(undefined4 *)(gen_frame + 0xc));
    bVar3 = F_00a68920(&REFG(undefined1, 0x14ab070),(*(undefined4 *)(gen_frame + 0xc)));
    if (bVar3 == 0) {
      if (*((int *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10)) + *(int *)(param_1 + 0x20)))) != 0) {
        *((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10)) + *(int *)(param_1 + 0x20)))) = 0;
        *(undefined1 *)(param_1 + 0x1d) = 1;
      }
      F_00431250(param_2,(*(int *)(gen_frame + 0x18)) + 0x13e,&REFG(undefined, 0x10bdc12),0,1,0);
    }
    else {
      if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x10))))) != 1) {
        *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x10))))) = 1;
        *(undefined1 *)(param_1 + 0x1d) = 1;
      }
      piVar2 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 4);
      uVar14 = 0;
      uVar13 = 1;
      uVar8 = (uint)bVar3;
      uVar12 = 0;
      uVar5 = (uint)bVar9;
      uVar6 = F_00a365d0(uVar11);
      uVar7 = F_00a3ad50(&REFG(undefined, 0x14a4230),uVar11);
      uVar11 = 0x341;
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2)));
      uVar5 = F_00461ea0(pvVar4,uVar11,uVar7,uVar6,uVar5,uVar8);
      F_00431250(param_2,(*(int *)(gen_frame + 0x18)) + 0x13e,uVar5,uVar12,uVar13,uVar14);
    }
    (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 1;
    uVar5 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 4;
    (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)uVar5;
  } while ((int)uVar5 < 0x6c8);
  return uVar5;
}

/* ref: FUN_0076f560 */
uint F_0076f560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76f560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = F_007641b0((uint)*(byte *)(param_1 + 1),(uint)*(byte *)(param_1 + 2),
                         (uint)*(byte *)(param_1 + 3),(uint)*(byte *)(param_1 + 4),
                         (uint)*(byte *)(param_1 + 5),(uint)*(byte *)(param_1 + 6));
  }
  if (uVar1 != *(uint *)((int)this + 0x1b40)) {
    *(uint *)((int)this + 0x1b40) = uVar1;
    *(undefined1 *)((int)this + 0x1b3c) = 1;
  }
  return uVar1;
}

/* ref: FUN_0076f5b0 */
uint F_0076f5b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76f5b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  undefined4 uVar2;
  undefined * this_00;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(uint *)(gen_frame + 0x58)) = uVar1;
  if (*(char *)((int)this + 0x1b3c) != '\0') {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x10bdc13),REFG(undefined4, 0x108cc50));
    if (-1 < *(int *)((int)this + 0x1b40)) {
      uVar2 = 0xb82;
      switch((unsigned int)(uintptr_t)(*(int *)((int)this + 0x1b40))) {
      case 0: ;
        uVar2 = 0xb7c;
        break;
      case 1: ;
        uVar2 = 0xb7d;
        break;
      case 2: ;
        uVar2 = 0xb7e;
        break;
      case 3: ;
        uVar2 = 0xb7f;
        break;
      case 4: ;
        uVar2 = 0xb80;
        break;
      case 5: ;
        uVar2 = 0xb81;
      }
      uVar5 = 0;
      uVar4 = 0;
      this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      uVar1 = F_0043bd00(this_00,uVar2,uVar4,uVar5);
      F_0042e430(((undefined1 *)(gen_frame + 0x4)),uVar1);
    }
    uVar5 = 0;
    uVar4 = 1;
    uVar2 = 0;
    uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
    F_00431250(param_2,0x41,uVar1,uVar2,uVar4,uVar5);
    *(undefined1 *)((int)this + 0x1b3c) = 0;
    uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    uVar1 = (uint)uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: FUN_0076f6a0 */
unsigned int F_0076f6a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76f6a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if (REFG(int, 0x14ab050) < 1) {
    if (*(int *)((int)this + 0x18e4) != REFG(int, 0x14ab050)) {
      uVar11 = 0;
      uVar10 = 1;
      uVar9 = 0;
      uVar8 = 0;
      uVar7 = 0;
      uVar5 = 0x462;
      pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      uVar2 = F_0043bd00(pvVar1,uVar5,uVar7,uVar8);
      F_00431250(param_2,0x40,uVar2,uVar9,uVar10,uVar11);
      if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xd8))) == 0) {
        *(int *)((int)this + 0x18e4) = REFG(int, 0x14ab050);
        return 0;
      }
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xd8))) = 0;
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    *(int *)((int)this + 0x18e4) = REFG(int, 0x14ab050);
    return 0;
  }
  iVar3 = (int)*(float *)&REFG(undefined, 0x14ab054);
  bVar4 = GEN_ISNAN((float10)*(float *)&REFG(undefined, 0x14ab054) - (float10)iVar3) || GEN_ISNAN((float10)0);
  if (bVar4 == (bVar4 || (float10)*(float *)&REFG(undefined, 0x14ab054) - (float10)iVar3 == (float10)0)) {
    iVar3 = iVar3 + 1;
  }
  if (iVar3 != *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xd8)))) {
    uVar9 = 0;
    uVar8 = 1;
    uVar7 = 0;
    uVar5 = 0x461;
    iVar6 = iVar3;
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = F_00461bb0(pvVar1,uVar5,iVar6);
    F_00431250(param_2,0x40,uVar2,uVar7,uVar8,uVar9);
    if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xd8))) == iVar3) {
      *(int *)((int)this + 0x18e4) = REFG(int, 0x14ab050);
      return 0;
    }
    *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xd8))) = iVar3;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  *(int *)((int)this + 0x18e4) = REFG(int, 0x14ab050);
  return 0;
}

/* ref: FUN_0076f7d0 */
uint F_0076f7d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x76f7d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  undefined * pvVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar1 = F_00ab21a0(param_3);
  F_00ab2b40((uint)*(byte *)(uVar1 + 0x3f));
  *(undefined4 *)((int)this + 0xdc4) = *(undefined4 *)(uVar1 + 0x10);
  if (param_3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_3 + 62000;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x48))) != iVar2) {
    *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x48))) = iVar2;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*(int *)((int)this + 0xdc4) == 0x20) {
    iVar2 = 2;
  }
  else if (*(int *)((int)this + 0xdc4) == 0x21) {
    iVar2 = 4;
  }
  else {
    iVar2 = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x50))) != iVar2) {
    *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x50))) = iVar2;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x14))))(*(int * PTR32 *)((int)this + 4))));
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3)));
  piVar3 = *(int * PTR32 *)((int)this + 4);
  uVar10 = 0;
  uVar9 = 1;
  uVar8 = 0;
  uVar7 = 0x7e7;
  if (*piVar4 == 0) {
    pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3)));
    uVar6 = F_00461bb0(pvVar5,uVar7,param_3);
    F_00431250(param_2,0x3e,uVar6,uVar8,uVar9,uVar10);
    uVar1 = F_00431250(param_2,0x3d,(*(uint *)(uVar1 + 0xc) & 0xffffff) + uVar1 + 0xc,0,1,0);
    return uVar1;
  }
  pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3)));
  uVar1 = F_00461bb0(pvVar5,uVar7,param_3);
  F_00431250(param_2,0x3d,uVar1,uVar8,uVar9,uVar10);
  uVar1 = F_00431250(param_2,0x3e,&REFG(undefined, 0x10bdc25),0,1,0);
  return uVar1;
}

/* ref: FUN_0076f8f0 */
unsigned int F_0076f8f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x76f8f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = REFG(int, 0x1379694);
  iVar2 = *(int *)(REFG(int, 0x1379694) + 0x1694);
  if (**(int * PTR32 *)(param_1 + 0x20) != *(int *)(REFG(int, 0x1379694) + 0x1690)) {
    **(int * PTR32 *)(param_1 + 0x20) = *(int *)(REFG(int, 0x1379694) + 0x1690);
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 4))) != iVar2) {
    *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 4))) = iVar2;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x10))) != (uint)*(ushort *)(iVar3 + 0x16a0)) {
    *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x10))) = (uint)*(ushort *)(iVar3 + 0x16a0);
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x14))) != 1000) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x14))) = 1000;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0xdc4))) {
  case 0x1e: ;
  case 0x1f: ;
    iVar2 = *(int *)(iVar3 + 0x169c);
    if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 8))) != *(int *)(iVar3 + 0x1698)) {
      *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 8))) = *(int *)(iVar3 + 0x1698);
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xc))) != iVar2) {
      *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xc))) = iVar2;
      *(undefined1 *)(param_1 + 0x1d) = 1;
      return 0;
    }
    break;
  case 0x20: ;
    uVar1 = *(ushort *)(iVar3 + 0x16a4);
    if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x20))) != (uint)*(ushort *)(iVar3 + 0x16a2)) {
      *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x20))) = (uint)*(ushort *)(iVar3 + 0x16a2);
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x24))) != (uint)uVar1) {
      *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x24))) = (uint)uVar1;
      *(undefined1 *)(param_1 + 0x1d) = 1;
      return 0;
    }
    break;
  case 0x21: ;
    uVar1 = *(ushort *)(iVar3 + 0x16a8);
    if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x18))) != (uint)*(ushort *)(iVar3 + 0x16a6)) {
      *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x18))) = (uint)*(ushort *)(iVar3 + 0x16a6);
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x1c))) != (uint)uVar1) {
      *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x1c))) = (uint)uVar1;
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
  }
  return 0;
}

/* ref: FUN_0076fa20 */
byte F_0076fa20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x76fa20u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  uint param_4 = (uint)gen_a3;
  byte bVar1;
  double dVar2;
  double dVar3;
  ushort uVar4;
  uint uVar5;
  undefined * pvVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  uVar4 = REFG(undefined2, 0x14ab148);
  uVar5 = F_00a68280(&REFG(undefined1, 0x14ab070),*(undefined4 *)(param_1 + 0xdc0),0);
  uVar10 = uVar5 & 0xffff;
  if ((uVar4 == 0) || ((ushort)uVar5 <= uVar4)) {
    bVar1 = 0;
  }
  else {
    bVar1 = 1;
  }
  uVar5 = (uint)bVar1;
  if (*((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0xdc))) != uVar5) {
    *((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0xdc))) = uVar5;
    *(undefined1 *)(param_2 + 0x1d) = 1;
  }
  uVar17 = 0;
  uVar16 = 1;
  uVar15 = 0;
  uVar13 = 0;
  uVar12 = 0x2fd;
  pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x18))))(*(int * PTR32 *)(param_1 + 4))));
  uVar5 = F_00461d60(pvVar6,uVar12,uVar10,uVar13,uVar5);
  F_00431250((undefined *)param_4,0,uVar5,uVar15,uVar16,uVar17);
  uVar5 = F_00a683c0(&REFG(undefined1, 0x14ab070),*(undefined4 *)(param_1 + 0xdc0));
  uVar10 = F_00a68460(&REFG(undefined1, 0x14ab070),*(undefined4 *)(param_1 + 0xdc0));
  dVar3 = REFG(double, 0x1088108);
  bVar11 = false;
  if (*(int *)(param_1 + 0xdb8) != uVar10 + uVar5) {
    if (*((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x28))) != uVar5) {
      *((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x28))) = uVar5;
      *(undefined1 *)(param_2 + 0x1d) = 1;
    }
    if (uVar10 == 0) {
      iVar7 = 0;
    }
    else if ((int)uVar5 < (int)uVar10) {
      dVar2 = (double)((float)GEN_TOF((((float10)(int)uVar5 * (float10)*(double *)&REFG(undefined, 0x1088118)) /
                             (float10)(int)uVar10)));
      if (dVar2 < 0.0) {
        iVar7 = (int)(dVar2 - dVar3);
      }
      else {
        iVar7 = (int)(dVar2 + dVar3);
      }
    }
    else {
      iVar7 = 100;
    }
    if (*((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x2c))) != iVar7) {
      *((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x2c))) = iVar7;
      *(undefined1 *)(param_2 + 0x1d) = 1;
    }
    if (*((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x30))) != uVar10) {
      *((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x30))) = uVar10;
      *(undefined1 *)(param_2 + 0x1d) = 1;
    }
    uVar16 = 0;
    uVar15 = 1;
    uVar13 = 0;
    uVar12 = 0x3f2;
    uVar8 = uVar5;
    uVar14 = uVar10;
    pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x18))))(*(int * PTR32 *)(param_1 + 4))));
    uVar8 = F_00461c60(pvVar6,uVar12,uVar8,uVar14);
    F_00431250(param_3,0x3f,uVar8,uVar13,uVar15,uVar16);
    *(uint *)(param_1 + 0xdb8) = uVar10 + uVar5;
    bVar11 = true;
  }
  uVar8 = F_00a687b0(&REFG(undefined1, 0x14ab070));
  iVar7 = (int)(uVar8 * 300) / 100;
  if ((*(int *)(param_1 + 0xdbc) != iVar7) || (bVar11)) {
    if (*((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x34))) != iVar7) {
      *((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x34))) = iVar7;
      *(undefined1 *)(param_2 + 0x1d) = 1;
    }
    if (uVar10 == 0) {
      iVar9 = 0;
    }
    else if ((int)(iVar7 + uVar5) < (int)uVar10) {
      dVar3 = (double)((float)GEN_TOF((((float10)(int)(iVar7 + uVar5) * (float10)*(double *)&REFG(undefined, 0x1088118)) /
                             (float10)(int)uVar10)));
      if (dVar3 < 0.0) {
        iVar9 = (int)(dVar3 - REFG(double, 0x1088108));
      }
      else {
        iVar9 = (int)(dVar3 + REFG(double, 0x1088108));
      }
    }
    else {
      iVar9 = 100;
    }
    if (*((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x38))) != iVar9) {
      *((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x38))) = iVar9;
      *(undefined1 *)(param_2 + 0x1d) = 1;
    }
    *(int *)(param_1 + 0xdbc) = iVar7;
  }
  bVar11 = REFG(char, 0x14a739c) != '\0';
  uVar5 = (uint)bVar11;
  if (*((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x3c))) != uVar5) {
    *((uint *)GEN_TOP((*(int *)(param_2 + 0x20) + 0x3c))) = uVar5;
    *(undefined1 *)(param_2 + 0x1d) = 1;
  }
  return bVar11;
}

/* ref: FUN_0076fc90 */
uint F_0076fc90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x76fc90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined1 gen_out[0x4];
  undefined4 * puVar1;
  byte bVar2;
  undefined * this_00;
  int iVar3;
  int iVar4;
  int iVar5;
  int * piVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  int iVar10;
  uint * puVar11;
  byte * pbVar12;
  uint uVar13;
  uint uVar14;
  undefined * pvVar15;
  byte * pbVar16;
  undefined * pvVar17;
  bool bVar18;
  float10 fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  uint local_24;
  
  uVar9 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  this_00 = (undefined *)param_1[1];
  iVar3 = *param_1;
  iVar4 = param_1[3];
  local_24 = param_1[0xe];
  iVar5 = param_1[2];
  if (param_1[4] < 1) goto LAB_0076fd94;
  iVar10 = param_1[4] + -1;
  if (7 < iVar10) {
    iVar10 = 7;
  }
  pvVar17 = (undefined *)(iVar10 * 0xb0 + 0x4a8 + (int)this);
  if (*(char *)((int)param_1 + 0x49) == '\x10') {
    *(undefined2 *)((int)pvVar17 + 0xa8) = 0;
    local_24 = 0xff;
    puVar11 = (uint *)F_00ab3bd0((uint)*(byte *)((int)param_1 + 0x49));
    if (puVar11 != (uint *)0x0) {
      pbVar16 = ((byte *)GEN_TOP(((*puVar11 & 0xffffff) + (int)puVar11)));
      pbVar12 = (byte *)F_0042a990(pvVar17);
      do {
        bVar2 = *pbVar16;
        bVar18 = bVar2 < *pbVar12;
        if (bVar2 != *pbVar12) {
LAB_0076fd50: ;
          iVar10 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
          goto LAB_0076fd55;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar16[1];
        bVar18 = bVar2 < pbVar12[1];
        if (bVar2 != pbVar12[1]) goto LAB_0076fd50;
        pbVar16 = pbVar16 + 2;
        pbVar12 = pbVar12 + 2;
      } while (bVar2 != 0);
      iVar10 = 0;
LAB_0076fd55: ;
      if (iVar10 != 0) {
        F_0042e430(pvVar17,(*puVar11 & 0xffffff) + (int)puVar11);
      }
    }
  }
  else if (param_1[7] == 0) {
    if ((*(ushort *)((int)pvVar17 + 0xa8) == 0) &&
       (*(char *)((int)pvVar17 + 0xac) == *(char *)((int)param_1 + 0x4a))) {
      pbVar16 = (byte *)F_0042a990((int)pvVar17 + 0x54);
      pbVar12 = (byte *)param_1[5];
      do {
        bVar2 = *pbVar12;
        bVar18 = bVar2 < *pbVar16;
        if (bVar2 != *pbVar16) {
LAB_0076ffc6: ;
          iVar10 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
          goto LAB_0076ffcb;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar12[1];
        bVar18 = bVar2 < pbVar16[1];
        if (bVar2 != pbVar16[1]) goto LAB_0076ffc6;
        pbVar12 = pbVar12 + 2;
        pbVar16 = pbVar16 + 2;
      } while (bVar2 != 0);
      iVar10 = 0;
LAB_0076ffcb: ;
      if ((iVar10 == 0) && (*(char *)((int)param_1 + 0x4b) == *(char *)((int)pvVar17 + 0xad)))
      goto LAB_0076fd71;
    }
    F_0042e430((undefined *)((int)pvVar17 + 0x54),param_1[5]);
    F_0043f750((int)this + 0xcf8,param_1[5],(int)*(char *)((int)param_1 + 0x4a));
    piVar6 = *(int * PTR32 *)((int)this + 4);
    uVar13 = F_0042a990((int)this + 0xcf8);
    uVar20 = 0x40d;
    pvVar15 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0x18))(piVar6)));
    uVar13 = F_00461190(pvVar15,uVar20,uVar13);
    F_0042e430(pvVar17,uVar13);
    *(short *)((int)pvVar17 + 0xa8) = (short)param_1[7];
    *(undefined1 *)((int)pvVar17 + 0xac) = *(undefined1 *)((int)param_1 + 0x4a);
    *(undefined1 *)((int)pvVar17 + 0xad) = *(undefined1 *)((int)param_1 + 0x4b);
  }
  else {
    if ((((uint)*(ushort *)((int)pvVar17 + 0xa8) == param_1[7]) &&
        ((int)*(short *)((int)pvVar17 + 0xaa) == param_1[0x11])) &&
       (*(char *)((int)pvVar17 + 0xac) == *(char *)((int)param_1 + 0x4a))) {
      pbVar16 = (byte *)F_0042a990((int)pvVar17 + 0x54);
      pbVar12 = (byte *)param_1[5];
      do {
        bVar2 = *pbVar12;
        bVar18 = bVar2 < *pbVar16;
        if (bVar2 != *pbVar16) {
LAB_0076feb0: ;
          iVar10 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
          goto LAB_0076feb5;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar12[1];
        bVar18 = bVar2 < pbVar16[1];
        if (bVar2 != pbVar16[1]) goto LAB_0076feb0;
        pbVar12 = pbVar12 + 2;
        pbVar16 = pbVar16 + 2;
      } while (bVar2 != 0);
      iVar10 = 0;
LAB_0076feb5: ;
      if ((iVar10 == 0) && (*(char *)((int)param_1 + 0x4b) == *(char *)((int)pvVar17 + 0xad)))
      goto LAB_0076fd71;
    }
    F_0042e430((undefined *)((int)pvVar17 + 0x54),param_1[5]);
    F_0043f750((int)this + 0xcf8,param_1[5],(int)*(char *)((int)param_1 + 0x4a));
    iVar10 = param_1[7];
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
    uVar13 = F_00435340(iVar10);
    F_0042e430((undefined *)((int)this + 0xd4c),uVar13);
    iVar10 = param_1[0x11];
    piVar6 = *(int * PTR32 *)((int)this + 4);
    uVar13 = F_0042a990((int)this + 0xcf8);
    uVar14 = F_0042a990((int)this + 0xd4c);
    uVar20 = 0x40f;
    pvVar15 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0x18))(piVar6)));
    uVar13 = F_00461820(pvVar15,uVar20,uVar14,uVar13,iVar10);
    F_0042e430(pvVar17,uVar13);
    *(short *)((int)pvVar17 + 0xa8) = (short)param_1[7];
    *(short *)((int)pvVar17 + 0xaa) = (short)param_1[0x11];
    *(undefined1 *)((int)pvVar17 + 0xac) = *(undefined1 *)((int)param_1 + 0x4a);
    *(undefined1 *)((int)pvVar17 + 0xad) = *(undefined1 *)((int)param_1 + 0x4b);
  }
LAB_0076fd71: ;
  uVar22 = 0;
  uVar21 = 1;
  uVar20 = 0;
  uVar13 = F_0042a990(pvVar17);
  F_00431250(this_00,iVar4 + 0x30,uVar13,uVar20,uVar21,uVar22);
LAB_0076fd94: ;
  if (*((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + iVar5 * 4))) != param_1[4]) {
    pvVar17 = (undefined *)((int)this + 0xcf8);
    F_0042aca0(pvVar17);
    uVar13 = F_004352e0((iVar5 + -9) / 0x13 + 1);
    F_0042e430(pvVar17,uVar13);
    uVar22 = 0;
    uVar21 = 1;
    uVar20 = 0;
    uVar13 = F_0042a990(pvVar17);
    F_00431250(this_00,iVar4,uVar13,uVar20,uVar21,uVar22);
    if (*((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + iVar5 * 4))) != param_1[4]) {
      *((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + iVar5 * 4))) = param_1[4];
      *(undefined1 *)(iVar3 + 0x1d) = 1;
    }
  }
  if (*((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x10 + iVar5 * 4))) != param_1[8]) {
    *((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x10 + iVar5 * 4))) = param_1[8];
    *(undefined1 *)(iVar3 + 0x1d) = 1;
  }
  dVar8 = REFG(double, 0x1088108);
  iVar10 = param_1[9];
  fVar19 = (float10)*(double *)&REFG(undefined, 0x1088118);
  if (iVar10 == 0) {
    iVar10 = 0;
  }
  else if (param_1[8] < iVar10) {
    dVar7 = (double)((float)GEN_TOF((((float10)param_1[8] * fVar19) / (float10)iVar10)));
    if (dVar7 < 0.0) {
      iVar10 = (int)(dVar7 - REFG(double, 0x1088108));
    }
    else {
      iVar10 = (int)(dVar7 + REFG(double, 0x1088108));
    }
  }
  else {
    iVar10 = 100;
  }
  if (*((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0xc + iVar5 * 4))) != iVar10) {
    *((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0xc + iVar5 * 4))) = iVar10;
    *(undefined1 *)(iVar3 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x18 + iVar5 * 4))) != param_1[10]) {
    *((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x18 + iVar5 * 4))) = param_1[10];
    *(undefined1 *)(iVar3 + 0x1d) = 1;
  }
  iVar10 = param_1[0xb];
  if (iVar10 == 0) {
    iVar10 = 0;
  }
  else if (param_1[10] < iVar10) {
    dVar7 = (double)((float)GEN_TOF((((float10)param_1[10] * fVar19) / (float10)iVar10)));
    if (dVar7 < 0.0) {
      iVar10 = (int)(dVar7 - dVar8);
    }
    else {
      iVar10 = (int)(dVar7 + dVar8);
    }
  }
  else {
    iVar10 = 100;
  }
  if (*((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x14 + iVar5 * 4))) != iVar10) {
    *((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x14 + iVar5 * 4))) = iVar10;
    *(undefined1 *)(iVar3 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x20 + iVar5 * 4))) != param_1[0xc]) {
    *((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x20 + iVar5 * 4))) = param_1[0xc];
    *(undefined1 *)(iVar3 + 0x1d) = 1;
  }
  iVar10 = param_1[0xd];
  if (iVar10 == 0) {
    iVar10 = 0;
  }
  else if (param_1[0xc] < iVar10) {
    dVar7 = (double)((float)GEN_TOF((((float10)param_1[0xc] * fVar19) / (float10)iVar10)));
    if (dVar7 < 0.0) {
      iVar10 = (int)(dVar7 - dVar8);
    }
    else {
      iVar10 = (int)(dVar7 + dVar8);
    }
  }
  else {
    iVar10 = 100;
  }
  if (*((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x1c + iVar5 * 4))) != iVar10) {
    *((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x1c + iVar5 * 4))) = iVar10;
    *(undefined1 *)(iVar3 + 0x1d) = 1;
  }
  uVar13 = param_1[7] << 0x10 | local_24;
  puVar11 = ((uint *)GEN_TOP((*(int *)(iVar3 + 0x20) + 4 + iVar5 * 4)));
  if (*puVar11 != uVar13) {
    *puVar11 = uVar13;
    *(undefined1 *)(iVar3 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 8 + iVar5 * 4))) != param_1[0x10]) {
    *((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 8 + iVar5 * 4))) = param_1[0x10];
    *(undefined1 *)(iVar3 + 0x1d) = 1;
  }
  if (*((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x48 + iVar5 * 4))) != param_1[6]) {
    *((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x48 + iVar5 * 4))) = param_1[6];
    *(undefined1 *)(iVar3 + 0x1d) = 1;
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x60 + iVar4 * 4)));
  if (*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x60 + iVar4 * 4))) != &REFG(undefined, 0x10bdc27)) {
    *puVar1 = &REFG(undefined, 0x10bdc27);
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
  }
  F_00c47745(uVar9 ^ (uint)(uint)(gen_out + 0x0));
  return (uint)puVar1;
}

/* ref: FUN_00770210 */
uint F_00770210(unsigned int gen_a0)
{
  GEN_ENTER(0x770210u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  if (0 < param_1) {
    uVar1 = F_00ab2b40(param_1);
    if (uVar1 != 0) {
      return (*(uint *)(uVar1 + 4) & 0xffffff) + (int)(uVar1 + 4);
    }
  }
  return 0x10bdc4d;
}

/* ref: FUN_00770240 */
byte F_00770240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x770240u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  uint uVar1;
  uint * puVar2;
  
  if ((param_4 == 0) || (*(char *)(param_4 + 0x68) != '\x03')) {
    return 0;
  }
  puVar2 = (uint *)F_00ab2c30((uint)*(byte *)(param_4 + 0x69));
  if ((puVar2 != (uint *)0x0) && (uVar1 = puVar2[3], uVar1 != 0)) {
    if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x54 + param_3 * 0x4c))) != uVar1) {
      *((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x54 + param_3 * 0x4c))) = uVar1;
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    F_00431250(param_2,param_3 * 5 + 0x48,&REFG(undefined, 0x10bdc4e),0,1,0);
    F_00431250(param_2,param_3 * 5 + 0x70,(*puVar2 & 0xffffff) + (int)puVar2,0,1,0);
    return 1;
  }
  return 0;
}

/* ref: FUN_007702e0 */
uint F_007702e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7702e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  char * pcVar3;
  uint * puVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  if (((param_3 == 0) || (uVar2 = ((code *)*(gen_code32 *)(*(int *)param_3 + 0xd8))(param_3), uVar2 == 0)) ||
     (pcVar3 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)param_3 + 0xd8))(param_3))), *pcVar3 == '\0')) {
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x68 + param_4 * 0x4c)));
    if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x68 + param_4 * 0x4c))) != 0) {
      *puVar1 = 0;
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    return (uint)puVar1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)param_3 + 0xd8))(param_3);
  if (uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)param_3 + 0xd8))(param_3);
    uVar2 = F_00ac1a20((uint)*(byte *)(uVar2 + 1),*(undefined4 *)(uVar2 + 4));
  }
  puVar4 = (uint *)F_00ab1ed0(uVar2);
  if (puVar4 != (uint *)0x0) {
    iVar5 = (*puVar4 & 0xffffff) + (int)puVar4;
    if (iVar5 != *((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 0xc0 + param_4 * 4)))) {
      *((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 0xc0 + param_4 * 4))) = iVar5;
      *(undefined1 *)(param_2 + 0x1d) = 1;
    }
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)param_3 + 0xd8))(param_3);
  if (uVar2 == 0) {
    fVar6 = 0.0;
  }
  else {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)param_3 + 0xd8))(param_3);
    fVar6 = *(float *)(uVar2 + 0x38);
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)param_3 + 0xd8))(param_3);
  if (uVar2 == 0) {
    fVar7 = 0.0;
  }
  else {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)param_3 + 0xd8))(param_3);
    fVar7 = *(float *)(uVar2 + 0x34);
  }
  uVar2 = F_00906ed0(fVar7,fVar6);
  puVar4 = ((uint *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x68 + param_4 * 0x4c)));
  if (*puVar4 == uVar2) {
    return uVar2;
  }
  *puVar4 = uVar2;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  return uVar2;
}

/* ref: FUN_00770440 */
uint F_00770440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x770440u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (int)*(char *)(param_2 + 0x415 + in_ecx);
}

/* ref: FUN_007704b0 */
uint F_007704b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7704b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  int * piVar3;
  int iVar4;
  int iVar5;
  
  piVar3 = *(int * PTR32 *)(param_1 + 0x20);
  iVar2 = *piVar3;
  if (0 < iVar2) {
    iVar4 = 0x6c;
    piVar3 = (int *)((int)this + 0x434);
    iVar5 = iVar2;
    do {
      *piVar3 = *((int *)GEN_TOP((iVar4 + *(int *)(param_1 + 0x20))));
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + 0x4c;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x744))) == 0) {
    *(int *)((int)this + 0x458) = iVar2;
    return (uint)piVar3;
  }
  uVar1 = iVar2 + 1;
  *(uint *)((int)this + 0x458) = uVar1;
  *(undefined4 *)((int)this + uVar1 * 4 + 0x430) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + 0x790)))
  ;
  return uVar1;
}

/* ref: FUN_00770520 */
uint F_00770520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x770520u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((-1 < (int)param_2) && (param_2 < 9)) {
    return *(uint *)(in_ecx + 0x434 + param_2 * 4);
  }
  return 0xe0000000;
}

/* ref: FUN_00770730 */
byte F_00770730(unsigned int gen_a0)
{
  GEN_ENTER(0x770730u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0xec55: ;
  case 0xec56: ;
  case 0xec57: ;
  case 0xec58: ;
  case 0xec59: ;
  case 0xec5f: ;
  case 0xec60: ;
  case 0xec61: ;
  case 0xec62: ;
  case 0xec63: ;
  case 0xecb9: ;
  case 0xecba: ;
  case 0xecc3: ;
  case 0xecc4: ;
  case 0xeccd: ;
  case 0xecce: ;
  case 0xecd7: ;
  case 0xecd8: ;
  case 0xece1: ;
  case 0xece2: ;
  case 0xeceb: ;
  case 0xecec: ;
    return 0;
  default: ;
    return 1;
  }
}

/* ref: FUN_00770800 */
uint F_00770800(unsigned int gen_a0)
{
  GEN_ENTER(0x770800u, gen_a0, 0u, 0u, 0u);
  undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *in_ecx = 0;
  F_0042aca0(in_ecx + 4);
  uVar1 = F_0042aca0(in_ecx + 0x58);
  *(undefined4 *)(in_ecx + 0xac) = 0;
  return uVar1;
}

/* ref: FUN_00770830 */
unsigned int F_00770830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x770830u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  int * piVar4;
  undefined1 * this_01;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  this_01 = (gen_frame + 0x1c);
  if (*(int *)((int)this + 100) != 0) {
    iVar5 = *(int *)((int)this + 0x68);
    *(int *)((int)this + 0x6c) = param_3;
    if ((iVar5 != param_3) || ((char)param_1 != *(char *)((int)this + 99))) {
      *(char *)((int)this + 99) = (char)param_1;
      if (((char)param_2 == '\0') &&
         (iVar2 = (int)((double)(param_3 - iVar5) * *(double *)&REFG(undefined, 0x10920a8)), iVar2 != 0)) {
        *(int *)((int)this + 0x68) = iVar5 + iVar2;
      }
      else {
        *(int *)((int)this + 0x68) = param_3;
      }
      uVar7 = *(undefined4 *)((int)this + 0x68);
      piVar4 = *(int * PTR32 *)((int)this + 4);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      uVar6 = 0x12;
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4)));
      uVar3 = F_00461bb0(this_00,uVar6,uVar7);
      F_0042e430((undefined *)((int)this + 0x70),uVar3);
      uVar3 = F_0042a990((int)this + 0x70);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),6);
      (*(uint *)(gen_frame + 0x10)) = uVar3;
      bVar1 = *(byte *)((int)this + 99);
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),4);
      (*(uint *)(gen_frame + 0x18)) = (uint)bVar1;
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 100),2,&(*(undefined4 *)(gen_frame + 0xc)));
      iVar5 = 1;
      do {
        this_01 = this_01 + -8;
        F_005a2670(this_01);
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
    }
  }
  return 0;
}

/* ref: FUN_00770920 */
uint F_00770920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x770920u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1af4) = param_2;
  if (*(char *)(in_ecx + 0x1afc) != '\x03') {
    *(undefined1 *)(in_ecx + 0x1afc) = 1;
  }
  return param_2;
}

/* ref: FUN_00770940 */
uint F_00770940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x770940u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1af4) = param_2;
  *(undefined1 *)(in_ecx + 0x1afc) = 2;
  return param_2;
}

/* ref: FUN_00770960 */
uint F_00770960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x770960u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1af4) = param_2;
  *(undefined1 *)(in_ecx + 0x1afc) = 3;
  return param_2;
}

/* ref: FUN_00770980 */
byte F_00770980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x770980u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  *(byte *)(in_ecx + 0x1afd) = (byte)param_4;
  return (byte)param_4;
}

/* ref: FUN_00770990 */
unsigned int F_00770990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x770990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  float fVar1;
  byte bVar2;
  ushort uVar3;
  int * piVar4;
  uint uVar5;
  
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x24))(piVar4,0x28);
  uVar3 = REFG(undefined2, 0x14b29b6);
  bVar2 = REFG(undefined1, 0x14b29b4);
  if ((uVar5 != 0) && (REFG(int, 0x137104c) != 0)) {
    fVar1 = *(float *)(REFG(int, 0x137104c) + 0x1268);
    if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xc))) != (uint)*(byte *)((int)this + 0x1afc)) {
      *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xc))) = (uint)*(byte *)((int)this + 0x1afc);
      *(undefined1 *)(uVar5 + 0x1d) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x10))) != *(int *)((int)this + 0x1af4)) {
      *((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x10))) = *(int *)((int)this + 0x1af4);
      *(undefined1 *)(uVar5 + 0x1d) = 1;
    }
    if (**(uint * PTR32 *)(uVar5 + 0x20) != (uint)bVar2) {
      **(uint * PTR32 *)(uVar5 + 0x20) = (uint)bVar2;
      *(undefined1 *)(uVar5 + 0x1d) = 1;
    }
    if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 4))) != (uint)uVar3) {
      *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 4))) = (uint)uVar3;
      *(undefined1 *)(uVar5 + 0x1d) = 1;
    }
    if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 8))) != (uint)*(byte *)((int)this + 0x1afd)) {
      *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 8))) = (uint)*(byte *)((int)this + 0x1afd);
      *(undefined1 *)(uVar5 + 0x1d) = 1;
    }
    if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x18))) != (int)fVar1) {
      *((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x18))) = (int)fVar1;
      *(undefined1 *)(uVar5 + 0x1d) = 1;
    }
    *(undefined2 *)((int)this + 0x1afc) = 0;
  }
  return 0;
}

/* ref: FUN_00770a70 */
unsigned int F_00770a70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x770a70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  
  if (((0 < param_2) && (((byte)*param_1 & 0xf) == 4)) && (param_1[1] != 0)) {
    if (*(int *)((int)this + 0x18e0) != 0) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x18e0),0);
      *(undefined4 *)((int)this + 0x18e0) = 0;
    }
    *(undefined4 *)((int)this + 0x18d8) = 0;
  }
  return 0;
}

/* ref: FUN_00770ad0 */
uint F_00770ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x770ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar2 = F_00533210(&REFG(undefined4, 0x1375bc0));
  if ((*param_1 & 0xf) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(param_1 + 4);
  }
  if (iVar5 == 0) {
    REFG(undefined4, 0x1378bbc) = 0;
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,10);
    if ((uVar2 != 0) && (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 8))) != 0)) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar2 + 0x20) + 8))) = 0;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
  }
  else if (iVar5 == 1) {
    if ((param_1[8] & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(param_1 + 0xc);
    }
    if (uVar4 < REFG(undefined4, 0x1378bb4)) {
      puVar1 = *(undefined4 * PTR32 *)(uVar2 + uVar4 * 8);
      uVar6 = ((gen_lcode *)*(gen_code32 *)*puVar1)(puVar1);
      F_0053f5a0(&REFG(undefined4, 0x1375bc0),(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
      uVar2 = F_00547d00(&REFG(undefined4, 0x1375bc0));
      return uVar2;
    }
  }
  else if (iVar5 == 2) {
    if ((param_1[8] & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(param_1 + 0xc);
    }
    if (uVar4 < REFG(undefined4, 0x1378bb4)) {
      puVar1 = *(undefined4 * PTR32 *)(uVar2 + uVar4 * 8);
      uVar6 = ((gen_lcode *)*(gen_code32 *)*puVar1)(puVar1);
      uVar2 = F_0053f5a0(&REFG(undefined4, 0x1375bc0),(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_00770bc0 */
unsigned int F_00770bc0(unsigned int gen_a0)
{
  GEN_ENTER(0x770bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (0 < *(int *)((int)this + 0xe8)) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,0x15);
    if (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x14))) != 1) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x14))) = 1;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x5c))(piVar1,*(undefined4 *)((int)this + 0xe8),0,0);
    *(undefined4 *)((int)this + 0xe8) = 0;
  }
  return 0;
}

/* ref: FUN_00770c20 */
uint F_00770c20(unsigned int gen_a0)
{
  GEN_ENTER(0x770c20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  int * piVar1;
  
  if (0 < *(int *)((int)this + 0xe8)) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    in_EAX = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0xe8),0);
    *(undefined4 *)((int)this + 0xe8) = 0;
  }
  return in_EAX;
}

/* ref: FUN_00770c60 */
uint F_00770c60(unsigned int gen_a0)
{
  GEN_ENTER(0x770c60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*(ushort *)(in_ecx + 0x1c);
}

/* ref: FUN_00770c70 */
uint F_00770c70(unsigned int gen_a0)
{
  GEN_ENTER(0x770c70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x24);
}

/* ref: FUN_00770c80 */
unsigned int F_00770c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x770c80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_1 < 0x12) && (param_2 < 0x10)) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,5);
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,6);
    if ((uVar3 != 0) && (uVar4 != 0)) {
      uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4));
      uVar5 = F_0043aed0(uVar5,param_1,param_2);
      uVar5 = F_0042a990(uVar5 + 0x110);
      puVar1 = ((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + ((param_1 * 0x10 + param_2) * 3 + 2) * 4)));
      if (uVar5 != *puVar1) {
        *(undefined1 *)(uVar3 + 0x1d) = 1;
      }
      *puVar1 = uVar5;
      puVar1 = ((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0xc)));
      *puVar1 = *puVar1 | 1 << ((byte)param_1 & 0x1f);
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
  }
  return 0;
}

/* ref: FUN_00770d30 */
unsigned int F_00770d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x770d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 < 0x10) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,5);
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,6);
    if ((uVar3 != 0) && (uVar4 != 0)) {
      uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4));
      uVar5 = F_0042a990(uVar5 + param_1 * 0x164 + 0x191d8);
      puVar1 = ((uint *)GEN_TOP((*(int *)(uVar3 + 0x20) + (param_1 * 3 + 0x362) * 4)));
      if (uVar5 != *puVar1) {
        *(undefined1 *)(uVar3 + 0x1d) = 1;
      }
      *puVar1 = uVar5;
      puVar1 = ((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0xc)));
      *puVar1 = *puVar1 | 0x40000;
      *(undefined1 *)(uVar4 + 0x1d) = 1;
    }
  }
  return 0;
}

/* ref: FUN_00770dd0 */
uint F_00770dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x770dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if (*(uint *)((int)this + 0xdcc) != param_1) {
    *(uint *)((int)this + 0xdcc) = param_1;
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,6);
    if (uVar2 != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x2d2c))) = *(undefined4 *)((int)this + 0xdcc);
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
  }
  return uVar2;
}

/* ref: FUN_00770e20 */
uint F_00770e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x770e20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (uint)*(byte *)(param_2 + 8) - (uint)*(byte *)(param_1 + 8);
}

/* ref: FUN_00770e40 */
uint F_00770e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x770e40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x190];
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  float10 fVar6;
  
  (*(uint *)(gen_frame + 0x188)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x18c);
  iVar5 = 0;
  (*(uint *)(gen_frame + 0x10)) = 0;
  if (REFG(int, 0x1379694) != 0) {
    (*(uint *)(gen_frame + 0x10)) = *(uint *)(REFG(int, 0x1379694) + 0x74);
  }
  (*(undefined2 * PTR32 *)(gen_frame + 0x14)) = (undefined2 *)(param_3 + 6);
  (*(gen_size32 *)(gen_frame + 0x1c)) = 0;
  puVar4 = ((undefined4 *)(gen_frame + 0x24));
  do {
    uVar2 = F_00b7ab60(param_3,iVar5);
    if (uVar2 != 0) {
      uVar3 = F_00ab1ff0(uVar2);
      if (uVar3 != 0) {
        puVar4[-1] = uVar2;
        fVar6 = F_00b7aaf0(param_3,iVar5);
        (*(undefined4 *)(gen_frame + 0x0)) = (undefined4)(longlong)TRUNC(fVar6 + (float10)REFG(double, 0x1088108));
        *puVar4 = (*(undefined4 *)(gen_frame + 0x0));
        uVar1 = *(*(undefined2 * PTR32 *)(gen_frame + 0x14));
        *(undefined1 *)(puVar4 + 1) = *(undefined1 *)(uVar3 + 0x11);
        *(undefined2 *)((int)puVar4 + 6) = uVar1;
        uVar2 = F_00b7ab80(param_3,iVar5);
        (*(gen_size32 *)(gen_frame + 0x1c)) = (*(gen_size32 *)(gen_frame + 0x1c)) + 1;
        *(bool *)((int)puVar4 + 5) = uVar2 == (*(uint *)(gen_frame + 0x10));
        puVar4 = puVar4 + 3;
      }
    }
    (*(undefined2 * PTR32 *)(gen_frame + 0x14)) = (*(undefined2 * PTR32 *)(gen_frame + 0x14)) + 6;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x1e);
  uVar2 = (*(gen_size32 *)(gen_frame + 0x1c));
  if (0 < (int)(*(gen_size32 *)(gen_frame + 0x1c))) {
    F_00c4f040(((undefined1 *)(gen_frame + 0x20)),(*(gen_size32 *)(gen_frame + 0x1c)),0xc,((code *)REFP(0x770e20)));
    if ((int)param_2 < (int)(*(gen_size32 *)(gen_frame + 0x1c))) {
      uVar2 = param_2;
    }
    F_00c46aa0(param_1,((undefined1 *)(gen_frame + 0x20)),uVar2 * 0xc);
  }
  F_00c47745((*(uint *)(gen_frame + 0x188)) ^ (uint)(uint)(gen_frame + 0x18c));
  return uVar2;
}

/* ref: FUN_00770fb0 */
uint F_00770fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x770fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  *(undefined4 *)((int)this + param_1 * 8 + 0x45c) = 0;
  *(int *)((int)this + param_1 * 8 + 0x460) = param_1;
  if (((char)param_3 != '\0') && (0 < REFG(int, 0x14aa744))) {
    piVar2 = &REFG(undefined4, 0x14a9e84);
    while (*piVar2 != param_2) {
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 0x12;
      if (REFG(int, 0x14aa744) <= (int)uVar1) {
        return uVar1;
      }
    }
    uVar1 = (&REFG(undefined4, 0x14a9e88))[(int)(uVar1 * 0x12)];
    *(uint *)((int)this + param_1 * 8 + 0x45c) = uVar1;
    if (*(int *)((int)this + 0x4a4) < (int)uVar1) {
      *(uint *)((int)this + 0x4a4) = uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_00771030 */
uint F_00771030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x771030u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if ((-1 < param_2) && (param_2 < *(int *)(in_ecx + 0x1a68))) {
    return *(uint *)(in_ecx + 0x18ec + param_2 * 0xc);
  }
  return 0;
}

/* ref: FUN_00771060 */
uint F_00771060(unsigned int gen_a0)
{
  GEN_ENTER(0x771060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  char * pcVar3;
  
  iVar1 = *(int *)((int)this + 0x18dc);
  if (iVar1 < 0x10) {
    pcVar3 = (char *)(iVar1 * 0xb0 + 0xdd8 + (int)this);
    iVar2 = iVar1;
    do {
      if (*pcVar3 == '\0') goto LAB_007710b4;
      iVar2 = iVar2 + 1;
      pcVar3 = pcVar3 + 0xb0;
    } while (iVar2 < 0x10);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    pcVar3 = (char *)((int)this + 0xdd8);
    do {
      if (*pcVar3 == '\0') {
LAB_007710b4: ;
        return iVar2 * 0xb0 + 0xdd8 + (int)this;
      }
      iVar2 = iVar2 + 1;
      pcVar3 = pcVar3 + 0xb0;
    } while (iVar2 < iVar1);
  }
  return 0;
}

/* ref: FUN_007710d0 */
uint F_007710d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7710d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  char * pcVar3;
  
  iVar1 = *(int *)((int)this + 0x18dc);
  if (iVar1 < 0x10) {
    pcVar3 = (char *)(iVar1 * 0xb0 + 0xdd8 + (int)this);
    iVar2 = iVar1;
    do {
      if (*pcVar3 != '\0') goto LAB_00771124;
      iVar2 = iVar2 + 1;
      pcVar3 = pcVar3 + 0xb0;
    } while (iVar2 < 0x10);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    pcVar3 = (char *)((int)this + 0xdd8);
    do {
      if (*pcVar3 != '\0') {
LAB_00771124: ;
        return iVar2 * 0xb0 + 0xdd8 + (int)this;
      }
      iVar2 = iVar2 + 1;
      pcVar3 = pcVar3 + 0xb0;
    } while (iVar2 < iVar1);
  }
  return 0;
}

/* ref: FUN_00771140 */
uint F_00771140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x771140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  undefined * this_01;
  __time64_t _Var3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,9);
  if (uVar2 != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,8)));
    if (this_00 != (undefined *)0x0) {
      if (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x14c))) != param_2) {
        *((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x14c))) = param_2;
        *(undefined1 *)(uVar2 + 0x1d) = 1;
      }
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0xb68;
      this_01 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      uVar2 = F_0043bd00(this_01,uVar5,uVar6,uVar7);
      if (uVar2 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 300)))) {
        *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 300))) = uVar2;
        *(undefined1 *)((int)this_00 + 0x1d) = 1;
      }
      F_00431250(this_00,0x4c,param_1,0,1,0);
    }
  }
  *(int *)((int)this + 0x1b00) = param_2 * 1000;
  _Var3 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)((int)this + 0x1b08) = (int)_Var3;
  uVar4 = F_00427d90();
  *(ulonglong *)((int)this + 0x1b10) = uVar4;
  uVar4 = F_00427e30();
  *(ulonglong *)((int)this + 0x1b18) = uVar4;
  return (uint)uVar4;
}

/* ref: FUN_00771220 */
uint F_00771220(unsigned int gen_a0)
{
  GEN_ENTER(0x771220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,9);
  if ((uVar2 != 0) && (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x14c))) != 0)) {
    *((undefined4 *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x14c))) = 0;
    *(undefined1 *)(uVar2 + 0x1d) = 1;
  }
  return uVar2;
}

/* ref: FUN_00771260 */
uint F_00771260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x771260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  undefined * pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,9);
  if (uVar2 != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,8)));
    if (this_00 != (undefined *)0x0) {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
      if (*(char *)(uVar3 + 0x29254) == '\0') {
        if (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x1ac))) != param_2 + 1) {
          *((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x1ac))) = param_2 + 1;
          *(undefined1 *)(uVar2 + 0x1d) = 1;
        }
        uVar8 = 0;
        uVar6 = 0;
        uVar5 = 0xb69;
        pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        uVar2 = F_0043bd00(pvVar4,uVar5,uVar6,uVar8);
        if (uVar2 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x170)))) {
          *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x170))) = uVar2;
          *(undefined1 *)((int)this_00 + 0x1d) = 1;
        }
        if (param_1 != 0) {
          F_00431250(this_00,0x5d,param_1,0,1,0);
        }
        uVar9 = 0;
        uVar7 = 1;
        uVar8 = 0;
        uVar6 = 3;
        uVar5 = 0x7fc;
        pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        uVar2 = F_00460c80(pvVar4,uVar5,param_2,uVar6);
        uVar2 = F_00431250(this_00,0x5e,uVar2,uVar8,uVar7,uVar9);
        return uVar2;
      }
    }
  }
  uVar2 = F_00c49908((int)this + 0x1b20,0x16,param_1);
  *(int *)((int)this + 0x1b38) = param_2;
  return uVar2;
}

/* ref: FUN_00771380 */
uint F_00771380(unsigned int gen_a0)
{
  GEN_ENTER(0x771380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,9);
  if ((uVar2 != 0) && (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x1ac))) != 0)) {
    *((undefined4 *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x1ac))) = 0;
    *(undefined1 *)(uVar2 + 0x1d) = 1;
  }
  return uVar2;
}

/* ref: FUN_007713c0 */
unsigned int F_007713c0(void)
{
  GEN_ENTER(0x7713c0u, 0u, 0u, 0u, 0u);
  if ((REFG(int, 0x14b119c) != 0) && (REFG(char, 0x14b11f5) != '\0')) {
    F_00a69960(&REFG(int, 0x14b119c));
    return 0;
  }
  return 0;
}

/* ref: FUN_007713e0 */
uint F_007713e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7713e0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * PTR32 * ppuVar1;
  
  ppuVar1 = &REFG(undefined * PTR32, 0x10bff60);
  do {
    if (ppuVar1[1] == param_1) {
      return (uint)*ppuVar1;
    }
    ppuVar1 = ppuVar1 + 3;
  } while ((int)ppuVar1 < 0x10c00c8);
  return 0;
}

/* ref: Client::UI2::Agent::AgentHUDLayout::vf3 */
uint F_00771410(unsigned int gen_a0)
{
  GEN_ENTER(0x771410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4));
  *(undefined1 *)(uVar2 + 0x23534) = 0;
  if (*(int *)(this + 0xc) != 0) {
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,*(undefined4 *)(this + 0xc),0);
    *(undefined4 *)(this + 0xc) = 0;
  }
  iVar1 = *(int *)(this + 8);
  if (iVar1 != 0) {
    *(undefined4 *)(this + 8) = 0;
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,iVar1,0);
  }
  return uVar2;
}

/* ref: FUN_00771480 */
uint F_00771480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x771480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int * piVar2;
  undefined1 * this_00;
  int iVar3;
  
  this_00 = (gen_frame + 0x1c);
  uVar1 = 0;
  if (*(int *)((int)this + 8) != 0) {
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),3);
    (*(undefined4 *)(gen_frame + 0x10)) = param_1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
    (*(undefined4 *)(gen_frame + 0x18)) = param_2;
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)((int)this + 8),2,&(*(undefined4 *)(gen_frame + 0xc)));
    iVar3 = 1;
    do {
      this_00 = this_00 + -8;
      uVar1 = F_005a2670(this_00);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  return uVar1;
}

/* ref: FUN_00771500 */
uint F_00771500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x771500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  code * pcVar1;
  uint uVar2;
  
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x14) = param_1;
  pcVar1 = *(gen_code32 *)(*(int *)this + 8);
  *(undefined4 *)((int)this + 0x18) = 0xe0000000;
  uVar2 = (*pcVar1)(this);
  return uVar2;
}

/* ref: FUN_00771530 */
uint F_00771530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x771530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  int * piVar2;
  int * piVar3;
  undefined * this_00;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if (((((char)uVar1 != '\0') && (uVar1 = *(uint *)((int)this + 0x10), uVar1 != 0xe0000000)) &&
      (uVar1 == param_1)) && (*(int *)((int)this + 0x1b4) == 1)) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),param_2,REFG(undefined4, 0x108cc50));
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    iVar4 = *piVar3;
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,(int)this + 0x1c);
    ((code *)*(gen_code32 *)(iVar4 + 0xc))(piVar3,((undefined1 *)(gen_frame + 0x4)),uVar1);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    iVar4 = (int)this + 0x1c;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = F_0043be20(this_00,iVar4);
    *(undefined4 *)((int)this + 0x10) = 0xe0000000;
    *(undefined4 *)((int)this + 0x1b4) = 2;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: FUN_00771600 */
uint F_00771600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x771600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if (((((char)uVar1 != '\0') && (*(int *)((int)this + 0x14) != -0x20000000)) &&
      (uVar1 = param_1, *(int *)((int)this + 0x14) == *(int *)(param_1 + 0x18))) &&
     (*(int *)((int)this + 0x1b8) == 1)) {
    *(undefined4 *)((int)this + 0x148) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((int)this + 0x14c) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)((int)this + 0x150) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((int)this + 0x154) = *(undefined4 *)(param_1 + 0x14);
    *(undefined2 *)((int)this + 0x158) = *(undefined2 *)(param_1 + 0x24);
    *(undefined1 *)((int)this + 0x15a) = *(undefined1 *)(param_1 + 0x28);
    F_0042e430((undefined *)((int)this + 0x15c),param_1 + 0x2b);
    uVar1 = *(uint *)((int)this + 0x14);
    *(uint *)((int)this + 0x18) = uVar1;
    *(undefined4 *)((int)this + 0x14) = 0xe0000000;
    *(undefined4 *)((int)this + 0x1b8) = 2;
  }
  return uVar1;
}

/* ref: FUN_00771690 */
unsigned int F_00771690(unsigned int gen_a0)
{
  GEN_ENTER(0x771690u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x1b0) = 3;
  return 0;
}

/* ref: FUN_007716a0 */
uint F_007716a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7716a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x3c0];
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined4 * puVar4;
  uint * puVar5;
  undefined * pvVar6;
  int * piVar7;
  undefined * puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint * puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  (*(uint *)(gen_frame + 0x3b8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3bc);
  puVar4 = ((undefined4 *)(gen_frame + 0x1b0));
  iVar9 = 0x40;
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 2;
    iVar9 = iVar9 + -1;
  } while (-1 < iVar9);
  F_005a2710(((undefined4 *)(gen_frame + 0x1b0)),4);
  ((undefined4 *)(gen_frame + 0x1b0))[1] = 1;
  puVar5 = (uint *)F_00ab2020((uint)REFG(undefined2, 0x14ab40a));
  if (puVar5 == (uint *)0x0) {
    F_005a2710(((undefined1 *)(gen_frame + 0x1c0)),4);
    (*(uint *)(gen_frame + 0x1c4)) = 0;
    F_005a2710(((undefined1 *)(gen_frame + 0x1b8)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x1bc)) = &REFG(undefined, 0x10bdd6f);
  }
  else {
    uVar10 = puVar5[2];
    F_005a2710(((undefined1 *)(gen_frame + 0x1c0)),4);
    (*(uint *)(gen_frame + 0x1c4)) = (uint)((char)uVar10 == '\0');
    if (REFG(char, 0x14ab40f) == '\0') {
      uVar10 = *puVar5;
      F_005a2710(((undefined1 *)(gen_frame + 0x1b8)),6);
      (*(undefined * PTR32 *)(gen_frame + 0x1bc)) = ((undefined *)GEN_TOP(((uVar10 & 0xffffff) + (int)puVar5)));
    }
    else {
      uVar10 = puVar5[1];
      F_005a2710(((undefined1 *)(gen_frame + 0x1b8)),6);
      (*(undefined * PTR32 *)(gen_frame + 0x1bc)) = ((undefined *)GEN_TOP(((uVar10 & 0xffffff) + (int)(puVar5 + 1))));
    }
  }
  F_005a2710(((undefined1 *)(gen_frame + 0x1c8)),6);
  (*(undefined * PTR32 *)(gen_frame + 0x1cc)) = &REFG(undefined, 0x14ab3b4);
  F_005a2710(((undefined1 *)(gen_frame + 0x2c8)),6);
  (*(undefined * PTR32 *)(gen_frame + 0x2cc)) = &REFG(undefined, 0x14ab3f4);
  if ((REFG(undefined1, 0x14ab408) == 0) || (REFG(undefined1, 0x14ab407) <= REFG(undefined1, 0x14ab408))) {
    bVar2 = 0;
    bVar3 = REFG(undefined1, 0x14ab407);
  }
  else {
    bVar2 = 1;
    bVar3 = REFG(undefined1, 0x14ab408);
  }
  uVar11 = (uint)bVar2;
  uVar10 = (uint)bVar3;
  iVar9 = 0;
  uVar15 = 0;
  uVar14 = 900;
  uVar16 = REFG(undefined4, 0x108cc50);
  pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar10 = F_00461d60(pvVar6,uVar14,uVar10,uVar15,uVar11);
  F_0042cc20(((undefined1 *)(gen_frame + 0xc)),uVar10,uVar16);
  uVar10 = (uint)REFG(undefined1, 0x14ab407);
  F_005a2710(((undefined1 *)(gen_frame + 0x1d0)),4);
  (*(uint *)(gen_frame + 0x1d4)) = uVar10;
  uVar10 = F_0042a990(((undefined1 *)(gen_frame + 0xc)));
  F_005a2710(((undefined1 *)(gen_frame + 0x1d8)),6);
  (*(uint *)(gen_frame + 0x1dc)) = uVar10;
  F_0042b630(((undefined1 *)(gen_frame + 0x15c)));
  uVar10 = F_00ab21a0((uint)REFG(undefined1, 0x14ab406));
  if (uVar10 == 0) {
    F_005a2710(((undefined1 *)(gen_frame + 0x1e0)),4);
    (*(int *)(gen_frame + 0x1e4)) = 0;
    F_005a2710(((undefined1 *)(gen_frame + 0x1e8)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x1ec)) = &REFG(undefined, 0x10bdd9a);
    F_005a2710(((undefined1 *)(gen_frame + 0x1f0)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x1f4)) = &REFG(undefined, 0x10bdd9b);
  }
  else {
    if (REFG(undefined1, 0x14ab406) != 0) {
      iVar9 = REFG(undefined1, 0x14ab406) + 62000;
    }
    F_005a2710(((undefined1 *)(gen_frame + 0x1e0)),4);
    uVar11 = (uint)REFG(undefined1, 0x14ab406);
    (*(int *)(gen_frame + 0x1e4)) = iVar9;
    uVar16 = 0x7e7;
    pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar11 = F_00461bb0(pvVar6,uVar16,uVar11);
    F_0042e430(((undefined1 *)(gen_frame + 0x15c)),uVar11);
    piVar7 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x14))))(*(int * PTR32 *)((int)this + 4))));
    piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7)));
    if (*piVar7 == 0) {
      uVar11 = *(uint *)(uVar10 + 0xc);
      F_005a2710(((undefined1 *)(gen_frame + 0x1e8)),6);
      (*(undefined * PTR32 *)(gen_frame + 0x1ec)) = ((undefined *)GEN_TOP(((uVar11 & 0xffffff) + (int)(uVar10 + 0xc))));
      puVar8 = (undefined *)F_0042a990(((undefined1 *)(gen_frame + 0x15c)));
      F_005a2710(((undefined1 *)(gen_frame + 0x1f0)),6);
      (*(undefined * PTR32 *)(gen_frame + 0x1f4)) = puVar8;
    }
    else {
      puVar8 = (undefined *)F_0042a990(((undefined1 *)(gen_frame + 0x15c)));
      F_005a2710(((undefined1 *)(gen_frame + 0x1e8)),6);
      (*(undefined * PTR32 *)(gen_frame + 0x1ec)) = puVar8;
      F_005a2710(((undefined1 *)(gen_frame + 0x1f0)),6);
      (*(undefined * PTR32 *)(gen_frame + 0x1f4)) = &REFG(undefined, 0x10bdd99);
    }
  }
  iVar9 = 0;
  puVar13 = (uint *)((int)this + 0xfc);
  puVar5 = ((uint *)(gen_frame + 0x344));
  do {
    uVar10 = puVar13[-0xe];
    F_005a2710(puVar5 + -0x53,4);
    cVar1 = *(char *)((int)this + iVar9 + 0x134);
    puVar5[-0x52] = uVar10;
    F_005a2710(puVar5 + -1,4);
    uVar10 = *puVar13;
    *puVar5 = (uint)(cVar1 != '\0');
    F_005a2710(puVar5 + -0x1d,4);
    puVar5[-0x1c] = uVar10;
    iVar9 = iVar9 + 1;
    puVar13 = puVar13 + 1;
    puVar5 = puVar5 + 2;
  } while (iVar9 < 0xe);
  F_0042b630(((undefined1 *)(gen_frame + 0xb4)));
  F_0042b630(((undefined1 *)(gen_frame + 0x60)));
  F_0042b630(((undefined1 *)(gen_frame + 0x108)));
  if (REFG(undefined1, 0x14ab40c) == 0) {
    F_005a2710(((undefined1 *)(gen_frame + 0x270)),4);
    (*(uint *)(gen_frame + 0x274)) = 0;
    F_005a2710(((undefined1 *)(gen_frame + 0x278)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x27c)) = &REFG(undefined, 0x10bddc5);
    F_005a2710(((undefined1 *)(gen_frame + 0x280)),4);
    (*(uint *)(gen_frame + 0x284)) = 0;
    F_005a2710(((undefined1 *)(gen_frame + 0x288)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x28c)) = &REFG(undefined, 0x10bddc6);
    F_005a2710(((undefined1 *)(gen_frame + 0x290)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x294)) = &REFG(undefined, 0x10bddc7);
  }
  else {
    uVar10 = (uint)REFG(undefined1, 0x14ab40c);
    uVar16 = 0x38c;
    pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar10 = F_00461bb0(pvVar6,uVar16,uVar10);
    F_0042e430(((undefined1 *)(gen_frame + 0xb4)),uVar10);
    uVar10 = (uint)REFG(undefined1, 0x14ab405);
    uVar12 = (uint)REFG(undefined1, 0x14ab40d);
    uVar11 = (uint)REFG(undefined1, 0x14ab40c);
    uVar16 = 0x38a;
    pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar10 = F_00461d60(pvVar6,uVar16,uVar11,uVar12,uVar10);
    F_0042e430(((undefined1 *)(gen_frame + 0x60)),uVar10);
    uVar11 = (uint)REFG(undefined1, 0x14ab405);
    uVar10 = (uint)REFG(undefined1, 0x14ab40d);
    uVar12 = (uint)REFG(undefined1, 0x14ab40c);
    uVar16 = 0x38b;
    pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar10 = F_00461d60(pvVar6,uVar16,uVar12,uVar10,uVar11);
    F_0042e430(((undefined1 *)(gen_frame + 0x108)),uVar10);
    uVar10 = F_00434d60((uint)REFG(undefined1, 0x14ab40c));
    F_005a2710(((undefined1 *)(gen_frame + 0x270)),4);
    (*(uint *)(gen_frame + 0x274)) = uVar10;
    puVar8 = (undefined *)F_0042a990(((undefined1 *)(gen_frame + 0xb4)));
    F_005a2710(((undefined1 *)(gen_frame + 0x278)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x27c)) = puVar8;
    uVar10 = F_00434d10((uint)REFG(undefined1, 0x14ab40c),(uint)REFG(undefined1, 0x14ab40d),1);
    F_005a2710(((undefined1 *)(gen_frame + 0x280)),4);
    (*(uint *)(gen_frame + 0x284)) = uVar10;
    puVar8 = (undefined *)F_0042a990(((undefined1 *)(gen_frame + 0x60)));
    F_005a2710(((undefined1 *)(gen_frame + 0x288)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x28c)) = puVar8;
    puVar8 = (undefined *)F_0042a990(((undefined1 *)(gen_frame + 0x108)));
    F_005a2710(((undefined1 *)(gen_frame + 0x290)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x294)) = puVar8;
  }
  piVar7 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar7 + 0x5c))(piVar7,*(undefined4 *)((int)this + 8),0x41,((undefined4 *)(gen_frame + 0x1b0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x108)));
  F_0042c880(((undefined1 *)(gen_frame + 0x60)));
  F_0042c880(((undefined1 *)(gen_frame + 0xb4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x15c)));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)));
  puVar5 = &(*(uint *)(gen_frame + 0x3b8));
  iVar9 = 0x40;
  do {
    puVar5 = puVar5 + -2;
    uVar10 = F_005a2670(puVar5);
    iVar9 = iVar9 + -1;
  } while (-1 < iVar9);
  F_00c47745((*(uint *)(gen_frame + 0x3b8)) ^ (uint)(uint)(gen_frame + 0x3bc));
  return uVar10;
}

/* ref: FUN_00771ca0 */
uint F_00771ca0(unsigned int gen_a0)
{
  GEN_ENTER(0x771ca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x208)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20c);
  puVar1 = ((undefined4 *)(gen_frame + 0x0));
  iVar4 = 0x40;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_005a2710(((undefined4 *)(gen_frame + 0x0)),4);
  ((undefined4 *)(gen_frame + 0x0))[1] = 2;
  uVar2 = F_0042a990((int)this + 0x1c);
  F_005a2710(((undefined1 *)(gen_frame + 0xb8)),6);
  (*(uint *)(gen_frame + 0xbc)) = uVar2;
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar3 + 0x5c))(piVar3,*(undefined4 *)((int)this + 8),0x41,((undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x208));
  iVar4 = 0x40;
  do {
    this_00 = this_00 + -2;
    uVar2 = F_005a2670(this_00);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
  return uVar2;
}

/* ref: FUN_00771d50 */
uint F_00771d50(unsigned int gen_a0)
{
  GEN_ENTER(0x771d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x2c0];
  undefined8 uVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  undefined * puVar4;
  int * piVar5;
  int iVar6;
  uint uVar7;
  uint * this_00;
  ulonglong uVar8;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0x2b8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2bc);
  F_0042b630(((undefined1 *)(gen_frame + 0x5c)));
  F_0042b630(((undefined1 *)(gen_frame + 0x8)));
  puVar2 = ((undefined4 *)(gen_frame + 0xb0));
  iVar6 = 0x40;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 2;
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  F_005a2710(((undefined4 *)(gen_frame + 0xb0)),4);
  ((undefined4 *)(gen_frame + 0xb0))[1] = 3;
  if (*(int *)((int)this + 0x148) == 0 && *(int *)((int)this + 0x14c) == 0) {
    F_005a2710(((undefined1 *)(gen_frame + 0x198)),4);
    (*(uint *)(gen_frame + 0x19c)) = 0;
    F_005a2710(((undefined1 *)(gen_frame + 0x1a0)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x1a4)) = &REFG(undefined, 0x10bdde2);
    F_005a2710(((undefined1 *)(gen_frame + 0x1a8)),4);
    (*(undefined4 *)(gen_frame + 0x1ac)) = 0;
    F_005a2710(((undefined1 *)(gen_frame + 0x1b0)),4);
    (*(undefined4 *)(gen_frame + 0x1b4)) = 0;
    F_005a2710(((undefined1 *)(gen_frame + 0x1b8)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x1bc)) = &REFG(undefined, 0x10bdde3);
    F_005a2710(((undefined1 *)(gen_frame + 0x1c0)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x1c4)) = &REFG(undefined, 0x10bde03);
  }
  else {
    uVar7 = (uint)*(byte *)((int)this + 0x15a);
    uVar9 = 0x38c;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar7 = F_00461bb0(pvVar3,uVar9,uVar7);
    F_0042e430(((undefined1 *)(gen_frame + 0x5c)),uVar7);
    uVar7 = (uint)*(ushort *)((int)this + 0x158);
    uVar9 = 0x38d;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar7 = F_00461bb0(pvVar3,uVar9,uVar7);
    F_0042e430(((undefined1 *)(gen_frame + 0x8)),uVar7);
    uVar7 = F_00434d60((uint)*(byte *)((int)this + 0x15a));
    F_005a2710(((undefined1 *)(gen_frame + 0x198)),4);
    (*(uint *)(gen_frame + 0x19c)) = uVar7;
    puVar4 = (undefined *)F_0042a990(((undefined1 *)(gen_frame + 0x5c)));
    F_005a2710(((undefined1 *)(gen_frame + 0x1a0)),6);
    uVar1 = *(undefined8 *)((int)this + 0x150);
    (*(undefined * PTR32 *)(gen_frame + 0x1a4)) = puVar4;
    F_005a2710(((undefined1 *)(gen_frame + 0x1a8)),4);
    (*(undefined4 *)(gen_frame + 0x1ac)) = (int)((ulonglong)uVar1 >> 0x20);
    uVar9 = *(undefined4 *)((int)this + 0x150);
    F_005a2710(((undefined1 *)(gen_frame + 0x1b0)),4);
    (*(undefined4 *)(gen_frame + 0x1b4)) = uVar9;
    puVar4 = (undefined *)F_0042a990((int)this + 0x15c);
    F_005a2710(((undefined1 *)(gen_frame + 0x1b8)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x1bc)) = puVar4;
    puVar4 = (undefined *)F_0042a990(((undefined1 *)(gen_frame + 0x8)));
    F_005a2710(((undefined1 *)(gen_frame + 0x1c0)),6);
    (*(undefined * PTR32 *)(gen_frame + 0x1c4)) = puVar4;
  }
  piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar5 + 0x5c))(piVar5,*(undefined4 *)((int)this + 8),0x41,((undefined4 *)(gen_frame + 0xb0)));
  this_00 = &(*(uint *)(gen_frame + 0x2b8));
  iVar6 = 0x40;
  do {
    this_00 = this_00 + -2;
    F_005a2670(this_00);
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)));
  uVar8 = F_0042c880(((undefined1 *)(gen_frame + 0x5c)));
  F_00c47745((*(uint *)(gen_frame + 0x2b8)) ^ (uint)(uint)(gen_frame + 0x2bc));
  return (uint)uVar8;
}

/* ref: FUN_00771fc0 */
uint F_00771fc0(unsigned int gen_a0)
{
  GEN_ENTER(0x771fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x208)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20c);
  puVar1 = ((undefined4 *)(gen_frame + 0x0));
  iVar4 = 0x40;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_005a2710(((undefined4 *)(gen_frame + 0x0)),4);
  ((undefined4 *)(gen_frame + 0x0))[1] = 0;
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)((int)this + 8),0x41,((undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x208));
  iVar4 = 0x40;
  do {
    this_00 = this_00 + -2;
    uVar3 = F_005a2670(this_00);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
  return uVar3;
}

/* ref: FUN_00772070 */
uint F_00772070(unsigned int gen_a0)
{
  GEN_ENTER(0x772070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00ae0cd0(&REFG(undefined, 0x14c0920),0x2a);
  piVar1 = *(int * PTR32 *)((int)this + 0x1cc);
  *(undefined4 *)((int)this + 0x1c8) = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x1cc) = 0;
  }
  *(undefined4 *)((int)this + 0x1bc) = 0;
  return uVar2;
}

/* ref: FUN_007720b0 */
byte F_007720b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7720b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x14) != 0) {
    return 1;
  }
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xac))(piVar1,*(undefined4 *)((int)this + 8));
    return uVar2 == 4;
  }
  return 0;
}

/* ref: FUN_007720f0 */
uint F_007720f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7720f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  pvVar2 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),0x7d4);
  pvVar2 = (undefined *)F_00a37da0(pvVar2,param_2);
  if ((pvVar2 != (undefined *)0x0) &&
     ((*(char *)((int)pvVar2 + 6) != '\0' || (*(int *)((int)pvVar2 + 8) != 0)))) {
    if (*(char *)((int)pvVar2 + 6) == '\0') {
      uVar3 = *(uint *)((int)pvVar2 + 8);
      if ((*(byte *)((int)pvVar2 + 0x14) & 1) != 0) {
        uVar3 = uVar3 + 1000000;
      }
    }
    else {
      pvVar2 = (undefined *)F_00a3a860(pvVar2);
      uVar3 = F_0046e5e0(pvVar2);
    }
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = F_00533b60(&REFG(undefined4, 0x1375bc0));
    bVar1 = F_00ac83b0(&REFG(undefined, 0x14bcf40),3,uVar3,(int)uVar4,(int)(uVar4 >> 0x20),uVar5,uVar6);
    pvVar2 = ((undefined *)GEN_TOP(CONCAT31(extraout_var,bVar1)));
  }
  return (uint)pvVar2;
}

/* ref: FUN_00772170 */
uint F_00772170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x772170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  undefined * this_00;
  undefined * pvVar7;
  undefined * pvVar8;
  uint uVar9;
  int iVar10;
  uint * puVar11;
  int iVar12;
  bool bVar13;
  
  uVar4 = param_1 - 1;
  bVar2 = false;
  uVar5 = uVar4;
  if (8 < uVar4) {
switchD_0077218d_caseD_4: ;
    if ((char)param_2 == '\0') {
      return uVar5;
    }
    bVar2 = true;
    goto switchD_0077218d_caseD_1;
  }
  uVar5 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x77232c) + param_1 + 3)));
  switch((unsigned int)(uintptr_t)(param_1)) {
  default: ;
switchD_0077218d_caseD_1: ;
    piVar6 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar5 = ((code *)*(gen_code32 *)(*piVar6 + 0x24))(piVar6,7);
    iVar10 = 0;
    param_2 = 0;
    do {
      this_00 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),param_2);
      pvVar8 = this_00;
      if (this_00 != (undefined *)0x0) {
        iVar1 = *(int *)((int)this_00 + 0xc);
        iVar12 = 0;
        if (0 < iVar1) {
          param_1 = iVar10 * 4 + 0xc;
          iVar10 = iVar1 * 5 + iVar10;
          do {
            pvVar7 = (undefined *)F_00a37da0(this_00,iVar12);
            bVar13 = false;
            if ((bVar2) || (pvVar7 == (undefined *)0x0)) goto switchD_0077226c_caseD_3;
            if (*(char *)((int)pvVar7 + 6) == '\0') {
              if (*(int *)((int)pvVar7 + 8) == 0) goto switchD_0077226c_caseD_3;
              uVar9 = *(uint *)((int)pvVar7 + 8);
              if ((*(byte *)((int)pvVar7 + 0x14) & 1) != 0) {
                uVar9 = uVar9 + 1000000;
              }
            }
            else {
              pvVar8 = (undefined *)F_00a3a860(pvVar7);
              uVar9 = F_0046e5e0(pvVar8);
            }
            uVar9 = F_00ab24a0(uVar9);
            pvVar8 = (undefined *)0x0;
            if (uVar9 == 0) goto LAB_007722fe;
            switch((unsigned int)(uintptr_t)(uVar4)) {
            case 0: ;
              bVar3 = F_00a3c930(pvVar7,0);
              bVar13 = bVar3 == 0;
              break;
            case 1: ;
            case 2: ;
            case 7: ;
              bVar3 = F_00a3c8c0(pvVar7,0);
              bVar13 = bVar3 == 0;
              break;
            case 6: ;
              uVar9 = F_00a3e8f0(&REFG(undefined, 0x14a4230),param_2,iVar12);
              goto LAB_007722bb;
            case 8: ;
              uVar9 = F_00a3eaa0(&REFG(undefined, 0x14a4230),param_2,iVar12);
LAB_007722bb: ;
              bVar13 = uVar9 != 0;
            }
switchD_0077226c_caseD_3: ;
            puVar11 = ((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + param_1)));
            pvVar8 = (undefined *)*puVar11;
            pvVar7 = ((undefined *)GEN_TOP(((((uint)bVar13 << 8 | (int)((int)(uintptr_t)pvVar8) >> 0x10 & 0xffU) << 8 |
                              (int)((int)(uintptr_t)pvVar8) >> 8 & 0xffU) << 8 | (uint)pvVar8 & 0xff)));
            if (pvVar8 != pvVar7) {
              *puVar11 = (uint)pvVar7;
              *(undefined1 *)(uVar5 + 0x1d) = 1;
            }
LAB_007722fe: ;
            param_1 = param_1 + 0x14;
            iVar12 = iVar12 + 1;
          } while (iVar12 < iVar1);
        }
      }
      param_2 = param_2 + 1;
      if (3 < param_2) {
        return (uint)pvVar8;
      }
    } while( true );
  case 4: ;
  case 5: ;
  case 6: ;
  case 8: ;
    goto switchD_0077218d_caseD_4;
  }
}

/* ref: Client::UI2::Agent::AgentItemDetail::vf1 */
uint F_00772360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x772360u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if ((((param_2 != (byte *)0x0) && (param_3 == 1)) && ((*param_2 & 0xf) != 0)) &&
     (*(int *)(param_2 + 4) == -1)) {
    this[0x44] = (undefined1)0x0;
    *(undefined4 *)(this + 8) = 0;
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 0;
  return (uint)param_1;
}

/* ref: FUN_007723a0 */
uint F_007723a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7723a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  ushort uVar2;
  uint uVar3;
  undefined * pvVar4;
  
  if (param_1 == (undefined *)0x0) {
    return 0;
  }
  iVar1 = *(int *)((int)this + 0x2c);
  if ((((iVar1 != 2) || (param_2 == 0x7d9)) && (iVar1 != 6)) && (iVar1 != 0xd)) {
    return 0;
  }
  if ((*(char *)((int)param_1 + 6) == '\0') || (uVar3 = F_00a3a860(param_1), uVar3 == 0)) {
    uVar2 = *(ushort *)((int)param_1 + 0x10);
  }
  else {
    pvVar4 = (undefined *)F_00a3a860(param_1);
    uVar2 = F_0071d210(pvVar4);
  }
  if (uVar2 / 100 == 0) {
    if ((*(char *)((int)param_1 + 6) == '\0') || (uVar3 = F_00a3a860(param_1), uVar3 == 0)) {
      uVar2 = *(ushort *)((int)param_1 + 0x10);
    }
    else {
      pvVar4 = (undefined *)F_00a3a860(param_1);
      uVar2 = F_0071d210(pvVar4);
    }
    return (uint)(uVar2 != 0);
  }
  return uVar2 / 100;
}

/* ref: FUN_00772450 */
byte F_00772450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x772450u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x40) = 1;
  if ((param_4 == 0x7d4) || (*(int *)((int)this + 0x2c) == 10)) {
    uVar1 = F_00ab2510(param_5);
    *param_2 = uVar1;
    if (uVar1 != 0) {
      *(uint *)((int)this + 0x40) = (uint)*(byte *)(uVar1 + 0x20);
      return 1;
    }
  }
  else {
    uVar1 = F_00ab24a0(param_5);
    *param_1 = uVar1;
    if (uVar1 != 0) {
      uVar1 = F_00ab25d0((uint)*(byte *)(uVar1 + 0xa1));
      *param_3 = uVar1;
      if (uVar1 != 0) {
        *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(*param_1 + 0x28);
        if (param_5 < 0x17) {
          return 1;
        }
        if (0x1a < param_5) {
          return 1;
        }
        *(undefined4 *)((int)this + 0x40) = 2000;
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_007724f0 */
byte F_007724f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7724f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  
  uVar5 = 0;
  do {
    if ((*(char *)((int)param_3 + 6) == '\0') || (uVar3 = F_00a3a860(param_3), uVar3 == 0)) {
      uVar2 = *((ushort *)GEN_TOP(((int)param_3 + (uVar5 & 0xff) * 2 + 0x20)));
    }
    else {
      uVar3 = uVar5;
      pvVar4 = (undefined *)F_00a3a860(param_3);
      uVar2 = F_0071d2c0(pvVar4,uVar3);
    }
    if (uVar2 == 0) {
      *(undefined4 *)(param_1 + uVar5 * 4) = 0;
      *(undefined1 *)(uVar5 + param_2) = 0;
    }
    else {
      if ((*(char *)((int)param_3 + 6) == '\0') || (uVar3 = F_00a3a860(param_3), uVar3 == 0)) {
        bVar1 = *((byte *)GEN_TOP(((uVar5 & 0xff) + 0x2a + (int)param_3)));
      }
      else {
        uVar3 = uVar5;
        pvVar4 = (undefined *)F_00a3a860(param_3);
        bVar1 = F_0071d300(pvVar4,uVar3);
      }
      if ((*(char *)((int)param_3 + 6) == '\0') || (uVar3 = F_00a3a860(param_3), uVar3 == 0)) {
        uVar2 = *((ushort *)GEN_TOP(((int)param_3 + (uVar5 & 0xff) * 2 + 0x20)));
      }
      else {
        uVar3 = uVar5;
        pvVar4 = (undefined *)F_00a3a860(param_3);
        uVar2 = F_0071d2c0(pvVar4,uVar3);
      }
      uVar3 = F_00ab20e0((uint)uVar2);
      *(uint *)(param_1 + uVar5 * 4) = uVar3;
      if (uVar3 == 0) {
        return 0;
      }
      uVar3 = F_00ab24a0(*(undefined4 *)(uVar3 + (uint)bVar1 * 4));
      if (uVar3 == 0) {
        return 0;
      }
      *(byte *)(uVar5 + param_2) = bVar1;
    }
    uVar5 = uVar5 + 1;
    if (4 < (int)uVar5) {
      return 1;
    }
  } while( true );
}

/* ref: FUN_007725f0 */
uint F_007725f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7725f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  if (param_2 == 0) {
    if (*(char *)(param_3 + 0xa0) == '\r') {
      return 2;
    }
    if (*(char *)(param_3 + 0xa6) != '\0') {
      return 1;
    }
  }
  else if ((param_4 == 0x7d4) || (*(int *)(in_ecx + 0x2c) == 10)) {
    return 3;
  }
  return 0;
}

/* ref: FUN_00772640 */
unsigned int F_00772640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x772640u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  ushort uVar1;
  
  if (param_1 != 0) {
    if ((*(int *)((int)this + 0x2c) == 2) && (param_3 == 0x7d9)) {
      uVar1 = (ushort)REFG(undefined1, 0x14ab408);
    }
    else {
      if (param_3 == 9999) {
        return 0;
      }
      if (*param_2 < 1000) {
        return 0;
      }
      uVar1 = REFG(undefined2, 0x14ab148);
      if (1000 < *param_2) {
        return 0;
      }
    }
    if ((uVar1 != 0) && (uVar1 < *(byte *)(param_1 + 0x9f))) {
      *(undefined1 *)((int)this + 0x45) = 1;
    }
  }
  return 0;
}

/* ref: FUN_007726a0 */
unsigned int F_007726a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x7726a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  int * piVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  undefined * pvVar6;
  uint uVar7;
  
  *((int *)GEN_TOP((param_1 + *(int *)(param_2 + 0x44) * 4))) = (int)*(short *)(param_2 + 0x92);
  *((int *)GEN_TOP((param_1 + *(int *)(param_2 + 0x48) * 4))) = (int)*(short *)(param_2 + 0x94);
  *((int *)GEN_TOP((param_1 + *(int *)(param_2 + 0x4c) * 4))) = (int)*(short *)(param_2 + 0x96);
  *((int *)GEN_TOP((param_1 + *(int *)(param_2 + 0x50) * 4))) = (int)*(short *)(param_2 + 0x98);
  *((int *)GEN_TOP((param_1 + *(int *)(param_2 + 0x54) * 4))) = (int)*(short *)(param_2 + 0x9a);
  *((int *)GEN_TOP((param_1 + *(int *)(param_2 + 0x58) * 4))) = (int)*(short *)(param_2 + 0x9c);
  if ((param_5 - 0xf4241U < 999999) && (*(char *)(param_2 + 0xa7) == '\x01')) {
    piVar1 = ((int *)GEN_TOP((param_1 + *(int *)(param_2 + 0x5c) * 4)));
    *piVar1 = *piVar1 + (int)*(char *)(param_2 + 0xb1);
    piVar1 = ((int *)GEN_TOP((param_1 + *(int *)(param_2 + 0x60) * 4)));
    *piVar1 = *piVar1 + (int)*(char *)(param_2 + 0xb2);
    piVar1 = ((int *)GEN_TOP((param_1 + *(int *)(param_2 + 100) * 4)));
    *piVar1 = *piVar1 + (int)*(char *)(param_2 + 0xb3);
    piVar1 = ((int *)GEN_TOP((param_1 + *(int *)(param_2 + 0x68) * 4)));
    *piVar1 = *piVar1 + (int)*(char *)(param_2 + 0xb4);
    piVar1 = ((int *)GEN_TOP((param_1 + *(int *)(param_2 + 0x6c) * 4)));
    *piVar1 = *piVar1 + (int)*(char *)(param_2 + 0xb5);
    piVar1 = ((int *)GEN_TOP((param_1 + *(int *)(param_2 + 0x70) * 4)));
    *piVar1 = *piVar1 + (int)*(char *)(param_2 + 0xb6);
  }
  iVar2 = *(int *)((int)this + 0x2c);
  if ((((iVar2 == 2) || (iVar2 == 5)) || (iVar2 == 6)) && (*(char *)(param_2 + 0xa3) == '\a')) {
    uVar7 = 0;
    do {
      if (*(int *)(param_4 + uVar7 * 4) != 0) {
        if ((*(char *)((int)param_3 + 6) == '\0') || (uVar5 = F_00a3a860(param_3), uVar5 == 0)) {
          uVar4 = *((ushort *)GEN_TOP(((int)param_3 + (uVar7 & 0xff) * 2 + 0x20)));
        }
        else {
          uVar5 = uVar7;
          pvVar6 = (undefined *)F_00a3a860(param_3);
          uVar4 = F_0071d2c0(pvVar6,uVar5);
        }
        if (uVar4 != 0) {
          if ((*(char *)((int)param_3 + 6) == '\0') || (uVar5 = F_00a3a860(param_3), uVar5 == 0))
          {
            bVar3 = *((byte *)GEN_TOP(((uVar7 & 0xff) + 0x2a + (int)param_3)));
          }
          else {
            uVar5 = uVar7;
            pvVar6 = (undefined *)F_00a3a860(param_3);
            bVar3 = F_0071d300(pvVar6,uVar5);
          }
          iVar2 = *(int *)(param_4 + uVar7 * 4);
          piVar1 = ((int *)GEN_TOP((param_1 + (uint)*(byte *)(iVar2 + 0x28) * 4)));
          *piVar1 = *piVar1 + (int)*(char *)(bVar3 + 0x29 + iVar2);
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 5);
  }
  return 0;
}

/* ref: FUN_00772840 */
byte F_00772840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x772840u, gen_a0, gen_a1, gen_a2, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined * pvVar1;
  uint uVar2;
  
  pvVar1 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),REFG(undefined4, 0x14a4258));
  if (pvVar1 != (undefined *)0x0) {
    pvVar1 = (undefined *)F_00a37da0(pvVar1,param_3);
    if (pvVar1 != (undefined *)0x0) {
      if (*(char *)((int)pvVar1 + 6) == '\0') {
        uVar2 = *(uint *)((int)pvVar1 + 8);
        if ((*(byte *)((int)pvVar1 + 0x14) & 1) != 0) {
          uVar2 = uVar2 + 1000000;
        }
      }
      else {
        pvVar1 = (undefined *)F_00a3a860(pvVar1);
        uVar2 = F_0046e5e0(pvVar1);
      }
      uVar2 = F_00ab24a0(uVar2);
      if (uVar2 != 0) {
        if (*(char *)(uVar2 + 0xa0) == '\x02') {
          *param_1 = (char)param_2;
          return 1;
        }
        *param_1 = (char)param_2 == '\0';
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_007728d0 */
uint F_007728d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7728d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = 0;
  if ((char)param_1 != '\0') {
    uVar1 = 0x800;
  }
  if ((char)param_2 != '\0') {
    uVar1 = uVar1 | 0x1000;
  }
  if ((char)param_3 != '\0') {
    uVar1 = uVar1 | 0x2000;
  }
  return uVar1;
}

/* ref: FUN_00772900 */
uint F_00772900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x772900u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x24);
  if (((char)param_3 != '\0') || (*((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + param_1 * 4))) != param_2)) {
    *((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + param_1 * 4))) = param_2;
    *(bool *)(uVar1 + 0x1d) = (char)param_4 == '\0';
  }
  return uVar1;
}

/* ref: FUN_00772930 */
uint F_00772930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x772930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x24) + 0x20))) + param_1 * 4)));
}

/* ref: FUN_00772950 */
uint F_00772950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x772950u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = F_00431250(*(undefined * PTR32 *)((int)this + 0x28),param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00772960 */
uint F_00772960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x772960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x28) + 0x20))) + param_1 * 4)));
}

/* ref: Client::UI2::Agent::AgentActionDetail::vf1 */
uint F_00772980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x772980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if ((((param_2 != (byte *)0x0) && (param_3 == 1)) && ((*param_2 & 0xf) != 0)) &&
     (*(int *)(param_2 + 4) == -1)) {
    this[0x24] = (undefined1)0x0;
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 0x1c) = 0;
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 0;
  return (uint)param_1;
}

/* ref: FUN_007729c0 */
byte F_007729c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x7729c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  *(undefined4 *)((int)this + 0x14) = param_1;
  *(undefined4 *)((int)this + 0x18) = param_2;
  *(bool *)((int)this + 0x24) = -1 < param_3;
  return -1 < param_3;
}

/* ref: FUN_007729e0 */
uint F_007729e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7729e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0xc);
  if (((char)param_3 != '\0') || (*((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + param_1 * 4))) != param_2)) {
    *((int *)GEN_TOP((*(int *)(uVar1 + 0x20) + param_1 * 4))) = param_2;
    *(bool *)(uVar1 + 0x1d) = (char)param_4 == '\0';
  }
  return uVar1;
}

